#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteGame_structs.hpp"

namespace SDK
{

struct FBossFXOverrideOption final : public FTableRowBase
{
public:
	TSoftObjectPtr<class UObject>                 OverrideFXSoftObject;
};
static_assert(alignof(FBossFXOverrideOption) == 0x000008, "Wrong alignment on FBossFXOverrideOption");
static_assert(sizeof(FBossFXOverrideOption) == 0x000030, "Wrong size on FBossFXOverrideOption");
static_assert(offsetof(FBossFXOverrideOption, OverrideFXSoftObject) == 0x000008, "Member 'FBossFXOverrideOption::OverrideFXSoftObject' has a wrong offset!");

struct FPawnDamageZoneBroadcastThreshold final
{
public:
	bool                                          bHasBeenPassed;
	uint8                                         Pad_1[0x3];
	float                                         TriggerPercent;
};
static_assert(alignof(FPawnDamageZoneBroadcastThreshold) == 0x000004, "Wrong alignment on FPawnDamageZoneBroadcastThreshold");
static_assert(sizeof(FPawnDamageZoneBroadcastThreshold) == 0x000008, "Wrong size on FPawnDamageZoneBroadcastThreshold");
static_assert(offsetof(FPawnDamageZoneBroadcastThreshold, bHasBeenPassed) == 0x000000, "Member 'FPawnDamageZoneBroadcastThreshold::bHasBeenPassed' has a wrong offset!");
static_assert(offsetof(FPawnDamageZoneBroadcastThreshold, TriggerPercent) == 0x000004, "Member 'FPawnDamageZoneBroadcastThreshold::TriggerPercent' has a wrong offset!");

struct FPawnDamageZoneInfo final
{
public:
	bool                                          bActive;
	uint8                                         Pad_1[0x3];
	class FName                                   Name;
	EFortDamageZone                               DamageZone;
	uint8                                         Pad_9[0x7];
	TArray<class FName>                           Bones;
	bool                                          bLimitedHealth;
	uint8                                         Pad_21[0x3];
	float                                         MaxHealth;
	float                                         CurrentHealth;
	bool                                          bReactivates;
	uint8                                         Pad_2D[0x3];
	float                                         ReactivationTime;
	uint8                                         Pad_34[0x4];
	TArray<struct FPawnDamageZoneBroadcastThreshold> DamageBroadcastThresholds;
};
static_assert(alignof(FPawnDamageZoneInfo) == 0x000008, "Wrong alignment on FPawnDamageZoneInfo");
static_assert(sizeof(FPawnDamageZoneInfo) == 0x000048, "Wrong size on FPawnDamageZoneInfo");
static_assert(offsetof(FPawnDamageZoneInfo, bActive) == 0x000000, "Member 'FPawnDamageZoneInfo::bActive' has a wrong offset!");
static_assert(offsetof(FPawnDamageZoneInfo, Name) == 0x000004, "Member 'FPawnDamageZoneInfo::Name' has a wrong offset!");
static_assert(offsetof(FPawnDamageZoneInfo, DamageZone) == 0x000008, "Member 'FPawnDamageZoneInfo::DamageZone' has a wrong offset!");
static_assert(offsetof(FPawnDamageZoneInfo, Bones) == 0x000010, "Member 'FPawnDamageZoneInfo::Bones' has a wrong offset!");
static_assert(offsetof(FPawnDamageZoneInfo, bLimitedHealth) == 0x000020, "Member 'FPawnDamageZoneInfo::bLimitedHealth' has a wrong offset!");
static_assert(offsetof(FPawnDamageZoneInfo, MaxHealth) == 0x000024, "Member 'FPawnDamageZoneInfo::MaxHealth' has a wrong offset!");
static_assert(offsetof(FPawnDamageZoneInfo, CurrentHealth) == 0x000028, "Member 'FPawnDamageZoneInfo::CurrentHealth' has a wrong offset!");
static_assert(offsetof(FPawnDamageZoneInfo, bReactivates) == 0x00002C, "Member 'FPawnDamageZoneInfo::bReactivates' has a wrong offset!");
static_assert(offsetof(FPawnDamageZoneInfo, ReactivationTime) == 0x000030, "Member 'FPawnDamageZoneInfo::ReactivationTime' has a wrong offset!");
static_assert(offsetof(FPawnDamageZoneInfo, DamageBroadcastThresholds) == 0x000038, "Member 'FPawnDamageZoneInfo::DamageBroadcastThresholds' has a wrong offset!");

}
