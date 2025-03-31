// ShotSight.h

#pragma once

#include "CoreMinimal.h"
#include "Modules/ModuleManager.h"

class FToolBarBuilder;
class FMenuBuilder;

class FShotSightModule : public IModuleInterface
{
public:
    /** IModuleInterface implementation */
    virtual void StartupModule() override;
    virtual void ShutdownModule() override;

    /** This function will be bound to Command. */
    void PluginButtonClicked();

    /** Save settings function */
    void SaveSettings(const FString& NewShotFolder, bool bNewUseLevelSequences);

private:
    void RegisterMenus();
    void LoadAndSpawnWidget();

private:
    TSharedPtr<class FUICommandList> PluginCommands;
    TSharedPtr<SMenuAnchor> PopupAnchor; // Menu Anchor for pop-up menus
};
