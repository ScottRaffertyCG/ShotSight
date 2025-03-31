#include "ShotSightSettings.h"
#include "Misc/ConfigCacheIni.h"

UShotSightSettings::UShotSightSettings()
    : UseLevelSequences(false)
{
    LoadSettings();
}

void UShotSightSettings::LoadSettings()
{
    GConfig->GetString(TEXT("/Script/ShotSight.ShotSightSettings"), TEXT("ShotFolder"), ShotFolder.Path, GGameIni);
    GConfig->GetBool(TEXT("/Script/ShotSight.ShotSightSettings"), TEXT("UseLevelSequences"), UseLevelSequences, GGameIni);
}

void UShotSightSettings::SaveSettings()
{
    GConfig->SetString(TEXT("/Script/ShotSight.ShotSightSettings"), TEXT("ShotFolder"), *ShotFolder.Path, GGameIni);
    GConfig->SetBool(TEXT("/Script/ShotSight.ShotSightSettings"), TEXT("UseLevelSequences"), UseLevelSequences, GGameIni);
    GConfig->Flush(false, GGameIni);
}

void UShotSightSettings::PostEditChangeProperty(FPropertyChangedEvent& PropertyChangedEvent)
{
    Super::PostEditChangeProperty(PropertyChangedEvent);

    // Save settings to INI file when edited in the project settings UI
    SaveSettings();
}
