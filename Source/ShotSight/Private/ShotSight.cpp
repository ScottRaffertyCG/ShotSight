// ShotSight.cpp

#include "ShotSight.h"
#include "ShotSightStyle.h"
#include "ShotSightCommands.h"
#include "Misc/MessageDialog.h"
#include "ToolMenus.h"
#include "Editor/Blutility/Public/EditorUtilitySubsystem.h"
#include "Widgets/SBoxPanel.h"
#include "Widgets/Layout/SBox.h"
#include "Widgets/Text/STextBlock.h"
#include "Widgets/Input/SButton.h"
#include "Widgets/SOverlay.h"
#include "Framework/MultiBox/MultiBoxBuilder.h"
#include "Framework/Application/SlateApplication.h"
#include "EditorAssetLibrary.h"
#include "Editor/Blutility/Public/EditorUtilitySubsystem.h"
#include "Editor/Blutility/Classes/EditorUtilityWidgetBlueprint.h"
#include "Editor/Blutility/Classes/EditorUtilityWidget.h"
#include "ShotSightSettings.h"

static const FName ShotSightTabName("ShotSight");

#define LOCTEXT_NAMESPACE "FShotSightModule"

void FShotSightModule::StartupModule()
{
    FShotSightStyle::Initialize();
    FShotSightStyle::ReloadTextures();

    FShotSightCommands::Register();

    PluginCommands = MakeShareable(new FUICommandList);

    PluginCommands->MapAction(
        FShotSightCommands::Get().ShotSightWindow,
        FExecuteAction::CreateRaw(this, &FShotSightModule::PluginButtonClicked),
        FCanExecuteAction());

    UToolMenus::RegisterStartupCallback(FSimpleMulticastDelegate::FDelegate::CreateRaw(this, &FShotSightModule::RegisterMenus));

    // Load settings
    const UShotSightSettings* Settings = GetDefault<UShotSightSettings>();
    UE_LOG(LogTemp, Log, TEXT("ShotFolder: %s"), *Settings->ShotFolder);
    UE_LOG(LogTemp, Log, TEXT("UseLevelSequences: %d"), Settings->UseLevelSequences);
}

void FShotSightModule::RegisterMenus()
{
    FToolMenuOwnerScoped OwnerScoped(this);

    {
        UToolMenu* Menu = UToolMenus::Get()->ExtendMenu("LevelEditor.MainMenu.Window");
        FToolMenuSection& Section = Menu->FindOrAddSection("WindowLayout");
        Section.AddMenuEntryWithCommandList(FShotSightCommands::Get().ShotSightWindow, PluginCommands);
    }

    {
        UToolMenu* ToolbarMenu = UToolMenus::Get()->ExtendMenu("LevelEditor.SecondaryToolbar");
        FToolMenuSection& Section = ToolbarMenu->FindOrAddSection("PluginTools");
        FToolMenuEntry& Entry = Section.AddEntry(FToolMenuEntry::InitToolBarButton(FShotSightCommands::Get().ShotSightWindow));
        Entry.SetCommandList(PluginCommands);
    }
}

void FShotSightModule::ShutdownModule()
{
    UToolMenus::UnRegisterStartupCallback(this);
    UToolMenus::UnregisterOwner(this);

    FShotSightStyle::Shutdown();
    FShotSightCommands::Unregister();
}

void FShotSightModule::PluginButtonClicked()
{
    // If the menu is already open, close it
    if (PopupAnchor.IsValid() && PopupAnchor->IsOpen())
    {
        PopupAnchor->SetIsOpen(false);
        return;
    }

    // Load the Editor Utility Widget Blueprint
    UObject* WidgetObj = LoadObject<UObject>(nullptr, TEXT("/ShotSight/EUW_ShotSightList.EUW_ShotSightList"));
    if (!WidgetObj)
    {
        UE_LOG(LogTemp, Error, TEXT("Failed to load widget blueprint! Make sure the path is correct."));
        return;
    }

    UEditorUtilityWidgetBlueprint* WidgetBP = Cast<UEditorUtilityWidgetBlueprint>(WidgetObj);
    if (!WidgetBP)
    {
        UE_LOG(LogTemp, Error, TEXT("Loaded object is not a valid UEditorUtilityWidgetBlueprint!"));
        return;
    }

    // Spawn the widget but DO NOT register it as a tab
    UEditorUtilitySubsystem* EditorUtilitySubsystem = GEditor->GetEditorSubsystem<UEditorUtilitySubsystem>();
    if (!EditorUtilitySubsystem)
    {
        UE_LOG(LogTemp, Error, TEXT("Failed to get UEditorUtilitySubsystem!"));
        return;
    }

    UEditorUtilityWidget* UtilityWidget = NewObject<UEditorUtilityWidget>(GEditor->GetEditorWorldContext().World(), WidgetBP->GeneratedClass);
    if (!UtilityWidget)
    {
        UE_LOG(LogTemp, Error, TEXT("Failed to create the EditorUtilityWidget instance!"));
        return;
    }

    UtilityWidget->Initialize();

    // Convert the Editor Utility Widget to an SWidget
    TSharedRef<SWidget> MenuContent = UtilityWidget->TakeWidget();

    // Get the mouse position
    FVector2D MousePosition = FSlateApplication::Get().GetCursorPos();

    // Create a MenuAnchor to contain the widget
    PopupAnchor = SNew(SMenuAnchor)
        .MenuContent(MenuContent)
        .Placement(MenuPlacement_ComboBox) // Adjust to your desired alignment (e.g., MenuPlacement_ComboBox)
        .Method(EPopupMethod::UseCurrentWindow)
        .OnGetMenuContent(FOnGetContent::CreateLambda([&]() -> TSharedRef<SWidget> {
        // Dynamically adjust content if needed
        return MenuContent; // This returns the widget to be displayed in the MenuAnchor
            }));

    // Attach the MenuAnchor to the mouse position
    TSharedPtr<SWindow> ActiveWindow = FSlateApplication::Get().GetActiveTopLevelWindow();
    if (ActiveWindow.IsValid())
    {
        ActiveWindow->AddOverlaySlot()
            .HAlign(HAlign_Left) // Align to the left of the mouse position
            .VAlign(VAlign_Top)  // Align to the top of the mouse position
            .Padding(FMargin(MousePosition.X, MousePosition.Y, 0, 0)) // Position at the mouse location
            [
                PopupAnchor.ToSharedRef()
            ];
    }

    // Open the menu
    PopupAnchor->SetIsOpen(true);
}

void FShotSightModule::LoadAndSpawnWidget()
{
    // Load your widget blueprint
    UObject* WidgetObj = LoadObject<UObject>(nullptr, TEXT("/ShotSight/EUW_ShotSightList.EUW_ShotSightList"));
    if (!WidgetObj)
    {
        UE_LOG(LogTemp, Error, TEXT("Failed to load widget blueprint!"));
        return;
    }

    UEditorUtilityWidgetBlueprint* WidgetBP = Cast<UEditorUtilityWidgetBlueprint>(WidgetObj);
    if (!WidgetBP)
    {
        UE_LOG(LogTemp, Error, TEXT("Loaded object is not a valid UEditorUtilityWidgetBlueprint!"));
        return;
    }

    // Spawn the widget
    UEditorUtilitySubsystem* EditorUtilitySubsystem = GEditor->GetEditorSubsystem<UEditorUtilitySubsystem>();
    if (EditorUtilitySubsystem)
    {
        EditorUtilitySubsystem->SpawnAndRegisterTab(WidgetBP);
    }
    else
    {
        UE_LOG(LogTemp, Error, TEXT("Failed to get UEditorUtilitySubsystem!"));
    }
}

void FShotSightModule::SaveSettings(const FString& NewShotFolder, bool bNewUseLevelSequences)
{
    UShotSightSettings* Settings = GetMutableDefault<UShotSightSettings>();
    Settings->ShotFolder = NewShotFolder;
    Settings->UseLevelSequences = bNewUseLevelSequences;
    Settings->SaveConfig();
}

#undef LOCTEXT_NAMESPACE

IMPLEMENT_MODULE(FShotSightModule, ShotSight)
