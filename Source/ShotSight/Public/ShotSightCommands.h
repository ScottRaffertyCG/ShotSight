// ShotSightCommands.h

#pragma once

#include "CoreMinimal.h"
#include "Framework/Commands/Commands.h"
#include "ShotSightStyle.h"

class FShotSightCommands : public TCommands<FShotSightCommands>
{
public:

    FShotSightCommands()
        : TCommands<FShotSightCommands>(TEXT("ShotSight"), NSLOCTEXT("Contexts", "ShotSight", "ShotSight Plugin"), NAME_None, FShotSightStyle::GetStyleSetName())
    {
    }

    // TCommands<> interface
    virtual void RegisterCommands() override;

public:
    TSharedPtr< FUICommandInfo > ShotSightWindow;
};

