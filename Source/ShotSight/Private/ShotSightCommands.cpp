// ShotSightCommands.cpp

#include "ShotSightCommands.h"
#include "ShotSightStyle.h"
#include "Framework/Commands/Commands.h"

#define LOCTEXT_NAMESPACE "FShotSightModule"

void FShotSightCommands::RegisterCommands()
{
    UI_COMMAND(ShotSightWindow, "ShotSight", "Open ShotSight Cinematic Browser", EUserInterfaceActionType::Button, FInputChord());
}

#undef LOCTEXT_NAMESPACE

