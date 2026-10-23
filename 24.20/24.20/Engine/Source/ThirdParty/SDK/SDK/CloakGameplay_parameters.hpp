#pragma once

#include "Basic.hpp"

namespace SDK::Params
{

struct FortGameCueNotifyLoop_Cloak_SetModifierCanBeEnabled final
{
public:
	class FName                                   ModifierName;
	bool                                          bNewCanBeEnabled;
	bool                                          ReturnValue;
	uint8                                         Pad_6[0x2];
};
static_assert(alignof(FortGameCueNotifyLoop_Cloak_SetModifierCanBeEnabled) == 0x000004, "Wrong alignment on FortGameCueNotifyLoop_Cloak_SetModifierCanBeEnabled");
static_assert(sizeof(FortGameCueNotifyLoop_Cloak_SetModifierCanBeEnabled) == 0x000008, "Wrong size on FortGameCueNotifyLoop_Cloak_SetModifierCanBeEnabled");
static_assert(offsetof(FortGameCueNotifyLoop_Cloak_SetModifierCanBeEnabled, ModifierName) == 0x000000, "Member 'FortGameCueNotifyLoop_Cloak_SetModifierCanBeEnabled::ModifierName' has a wrong offset!");
static_assert(offsetof(FortGameCueNotifyLoop_Cloak_SetModifierCanBeEnabled, bNewCanBeEnabled) == 0x000004, "Member 'FortGameCueNotifyLoop_Cloak_SetModifierCanBeEnabled::bNewCanBeEnabled' has a wrong offset!");
static_assert(offsetof(FortGameCueNotifyLoop_Cloak_SetModifierCanBeEnabled, ReturnValue) == 0x000005, "Member 'FortGameCueNotifyLoop_Cloak_SetModifierCanBeEnabled::ReturnValue' has a wrong offset!");

struct FortGameCueNotifyLoop_Cloak_SetModifierEnabled final
{
public:
	class FName                                   ModifierName;
	bool                                          bNewEnabled;
	bool                                          ReturnValue;
	uint8                                         Pad_6[0x2];
};
static_assert(alignof(FortGameCueNotifyLoop_Cloak_SetModifierEnabled) == 0x000004, "Wrong alignment on FortGameCueNotifyLoop_Cloak_SetModifierEnabled");
static_assert(sizeof(FortGameCueNotifyLoop_Cloak_SetModifierEnabled) == 0x000008, "Wrong size on FortGameCueNotifyLoop_Cloak_SetModifierEnabled");
static_assert(offsetof(FortGameCueNotifyLoop_Cloak_SetModifierEnabled, ModifierName) == 0x000000, "Member 'FortGameCueNotifyLoop_Cloak_SetModifierEnabled::ModifierName' has a wrong offset!");
static_assert(offsetof(FortGameCueNotifyLoop_Cloak_SetModifierEnabled, bNewEnabled) == 0x000004, "Member 'FortGameCueNotifyLoop_Cloak_SetModifierEnabled::bNewEnabled' has a wrong offset!");
static_assert(offsetof(FortGameCueNotifyLoop_Cloak_SetModifierEnabled, ReturnValue) == 0x000005, "Member 'FortGameCueNotifyLoop_Cloak_SetModifierEnabled::ReturnValue' has a wrong offset!");

struct FortGameCueNotifyLoop_Cloak_TickVisibilityLevel final
{
public:
	float                                         DeltaSeconds;
	float                                         ReturnValue;
};
static_assert(alignof(FortGameCueNotifyLoop_Cloak_TickVisibilityLevel) == 0x000004, "Wrong alignment on FortGameCueNotifyLoop_Cloak_TickVisibilityLevel");
static_assert(sizeof(FortGameCueNotifyLoop_Cloak_TickVisibilityLevel) == 0x000008, "Wrong size on FortGameCueNotifyLoop_Cloak_TickVisibilityLevel");
static_assert(offsetof(FortGameCueNotifyLoop_Cloak_TickVisibilityLevel, DeltaSeconds) == 0x000000, "Member 'FortGameCueNotifyLoop_Cloak_TickVisibilityLevel::DeltaSeconds' has a wrong offset!");
static_assert(offsetof(FortGameCueNotifyLoop_Cloak_TickVisibilityLevel, ReturnValue) == 0x000004, "Member 'FortGameCueNotifyLoop_Cloak_TickVisibilityLevel::ReturnValue' has a wrong offset!");

struct FortGameCueNotifyLoop_Cloak_GetCurrentModifierValues final
{
public:
	float                                         OutVisibilityMultiplier;
	float                                         OutVisibilityAddition;
	class FName                                   ModifierName;
	bool                                          ReturnValue;
	uint8                                         Pad_D[0x3];
};
static_assert(alignof(FortGameCueNotifyLoop_Cloak_GetCurrentModifierValues) == 0x000004, "Wrong alignment on FortGameCueNotifyLoop_Cloak_GetCurrentModifierValues");
static_assert(sizeof(FortGameCueNotifyLoop_Cloak_GetCurrentModifierValues) == 0x000010, "Wrong size on FortGameCueNotifyLoop_Cloak_GetCurrentModifierValues");
static_assert(offsetof(FortGameCueNotifyLoop_Cloak_GetCurrentModifierValues, OutVisibilityMultiplier) == 0x000000, "Member 'FortGameCueNotifyLoop_Cloak_GetCurrentModifierValues::OutVisibilityMultiplier' has a wrong offset!");
static_assert(offsetof(FortGameCueNotifyLoop_Cloak_GetCurrentModifierValues, OutVisibilityAddition) == 0x000004, "Member 'FortGameCueNotifyLoop_Cloak_GetCurrentModifierValues::OutVisibilityAddition' has a wrong offset!");
static_assert(offsetof(FortGameCueNotifyLoop_Cloak_GetCurrentModifierValues, ModifierName) == 0x000008, "Member 'FortGameCueNotifyLoop_Cloak_GetCurrentModifierValues::ModifierName' has a wrong offset!");
static_assert(offsetof(FortGameCueNotifyLoop_Cloak_GetCurrentModifierValues, ReturnValue) == 0x00000C, "Member 'FortGameCueNotifyLoop_Cloak_GetCurrentModifierValues::ReturnValue' has a wrong offset!");

}
