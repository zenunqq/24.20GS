#pragma once

#include "Basic.hpp"

#include "CloakGameplay_structs.hpp"
#include "FortniteGame_classes.hpp"

namespace SDK
{

class AFortGameCueNotifyLoop_Cloak final : public AFortGameplayCueNotify_Loop
{
public:
	class AFortPlayerPawn*                        TargetPlayer;
	float                                         VisibilityLevel;
	float                                         StationaryVisMult;
	float                                         MaxSpeedVisMult;
	float                                         SpeedForMaxVis;
	float                                         VisibilityMinFriendly;
	float                                         VisibilityMinNonfriendly;
	float                                         VisibilityLevelChangeRate;
	uint8                                         Pad_984[0x4];
	TMap<class FName, struct FFortGameCueCloakModifier> CloakModifiersByNameMap;

public:
	bool SetModifierCanBeEnabled(const class FName& ModifierName, const bool bNewCanBeEnabled);
	bool SetModifierEnabled(const class FName& ModifierName, const bool bNewEnabled);
	float TickVisibilityLevel(const float DeltaSeconds);

	bool GetCurrentModifierValues(float* OutVisibilityMultiplier, float* OutVisibilityAddition, const class FName& ModifierName) const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortGameCueNotifyLoop_Cloak">();
	}
	static class AFortGameCueNotifyLoop_Cloak* GetDefaultObj()
	{
		return GetDefaultObjImpl<AFortGameCueNotifyLoop_Cloak>();
	}
};
static_assert(alignof(AFortGameCueNotifyLoop_Cloak) == 0x000008, "Wrong alignment on AFortGameCueNotifyLoop_Cloak");
static_assert(sizeof(AFortGameCueNotifyLoop_Cloak) == 0x0009D8, "Wrong size on AFortGameCueNotifyLoop_Cloak");
static_assert(offsetof(AFortGameCueNotifyLoop_Cloak, TargetPlayer) == 0x000960, "Member 'AFortGameCueNotifyLoop_Cloak::TargetPlayer' has a wrong offset!");
static_assert(offsetof(AFortGameCueNotifyLoop_Cloak, VisibilityLevel) == 0x000968, "Member 'AFortGameCueNotifyLoop_Cloak::VisibilityLevel' has a wrong offset!");
static_assert(offsetof(AFortGameCueNotifyLoop_Cloak, StationaryVisMult) == 0x00096C, "Member 'AFortGameCueNotifyLoop_Cloak::StationaryVisMult' has a wrong offset!");
static_assert(offsetof(AFortGameCueNotifyLoop_Cloak, MaxSpeedVisMult) == 0x000970, "Member 'AFortGameCueNotifyLoop_Cloak::MaxSpeedVisMult' has a wrong offset!");
static_assert(offsetof(AFortGameCueNotifyLoop_Cloak, SpeedForMaxVis) == 0x000974, "Member 'AFortGameCueNotifyLoop_Cloak::SpeedForMaxVis' has a wrong offset!");
static_assert(offsetof(AFortGameCueNotifyLoop_Cloak, VisibilityMinFriendly) == 0x000978, "Member 'AFortGameCueNotifyLoop_Cloak::VisibilityMinFriendly' has a wrong offset!");
static_assert(offsetof(AFortGameCueNotifyLoop_Cloak, VisibilityMinNonfriendly) == 0x00097C, "Member 'AFortGameCueNotifyLoop_Cloak::VisibilityMinNonfriendly' has a wrong offset!");
static_assert(offsetof(AFortGameCueNotifyLoop_Cloak, VisibilityLevelChangeRate) == 0x000980, "Member 'AFortGameCueNotifyLoop_Cloak::VisibilityLevelChangeRate' has a wrong offset!");
static_assert(offsetof(AFortGameCueNotifyLoop_Cloak, CloakModifiersByNameMap) == 0x000988, "Member 'AFortGameCueNotifyLoop_Cloak::CloakModifiersByNameMap' has a wrong offset!");

}
