#pragma once

#include "CoreMinimal.h"
#include "Engine/DeveloperSettings.h"
#include "LocalDirPath.h"
#include "ShotSightSettings.generated.h"

UCLASS(config = Game, defaultconfig, meta = (DisplayName = "ShotSight Settings", Category = "Plugins"))
class SHOTSIGHT_API UShotSightSettings : public UDeveloperSettings
{
    GENERATED_BODY()

public:
    UShotSightSettings();

    UPROPERTY(config, EditAnywhere, Category = "ShotSight", meta = (ContentDir, DisplayName = "Shots Folder"))
    FDirectoryPath ShotFolder;

    UPROPERTY(config, EditAnywhere, Category = "ShotSight")
    bool UseLevelSequences;

    void LoadSettings();
    void SaveSettings();

    // Override PostEditChangeProperty to save settings when edited in the project settings UI
    virtual void PostEditChangeProperty(FPropertyChangedEvent& PropertyChangedEvent) override;
};
