#pragma once
#include "pch.h"
#include "Engine/Source/Runtime/Core/Public/CoreGlobals.h"

enum class EAmmoType : uint8
{
    Assault = 0,
    Shotgun = 1,
    Submachine = 2,
    Rocket = 3,
    Sniper = 4
};

class FortLategame
{
public:
    static FItemAndCount GetShotguns();
    static FItemAndCount GetAssaultRifles();
    static FItemAndCount GetUtilities();
    static FItemAndCount GetHeals();

    static UFortAmmoItemDefinition* GetAmmo(EAmmoType);
    static UFortResourceItemDefinition* GetResource(EFortResourceType);
};
