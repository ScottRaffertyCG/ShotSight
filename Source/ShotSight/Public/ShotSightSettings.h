// ShotSightSettings.h

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "ShotSightSettings.generated.h"

UCLASS(config = Game, defaultconfig)
class SHOTSIGHT_API UShotSightSettings : public UObject
{
    GENERATED_BODY()

public:
    UShotSightSettings();

    /** Folder to save shots */
    UPROPERTY(EditAnywhere, config, Category = "ShotSight")
    FString ShotFolder;

    /** Whether to use level sequences */
    UPROPERTY(EditAnywhere, config, Category = "ShotSight")
    bool UseLevelSequences;
};
