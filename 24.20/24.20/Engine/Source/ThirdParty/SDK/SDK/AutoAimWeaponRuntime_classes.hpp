#pragma once

#include "Basic.hpp"

#include "GameplayTags_structs.hpp"
#include "Engine_classes.hpp"
#include "FortniteGame_classes.hpp"
#include "GameplayAbilities_structs.hpp"
#include "AutoAimWeaponRuntime_structs.hpp"

namespace SDK
{

class UAutoAimWeaponKismetLibrary final : public UBlueprintFunctionLibrary
{
public:
	static bool DoesAutoAimWeaponHaveLineOfSight(class AFortPawn* SourcePawn, class AFortPawn* TargetPawn);
	static bool DoesAutoAimWeaponReticleIntersectTarget(float* OutReticleDistance, class AFortPawn* SourcePawn, class AFortPawn* TargetPawn, const float ReticleSize);
	static void FindBestAutoAimTarget(class AFortPawn** OutTargetPawn, float* OutReticleDistance, class AFortPlayerPawn* SourcePawn, const float ReticleSize, const float Range);
	static class UAutoAimWeaponPawnComponent* GetAutoAimWeaponPawnComponent(class AFortPawn* SourcePawn);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"AutoAimWeaponKismetLibrary">();
	}
	static class UAutoAimWeaponKismetLibrary* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAutoAimWeaponKismetLibrary>();
	}
};
static_assert(alignof(UAutoAimWeaponKismetLibrary) == 0x000008, "Wrong alignment on UAutoAimWeaponKismetLibrary");
static_assert(sizeof(UAutoAimWeaponKismetLibrary) == 0x000028, "Wrong size on UAutoAimWeaponKismetLibrary");

class UAutoAimWeaponPawnComponent final : public UFortPawnComponent
{
public:
	struct FGameplayTagContainer                  UseSingleLocationTargetingPawnTags;
	struct FGameplayTagContainer                  LowPriorityTargetPawnTags;
	TArray<struct FAutoAimWeaponBoneSegmentData>  MultiSocketTargetingBoneSegmentDatas;
	struct FScalableFloat                         LockOnTimeReticleCenter;
	struct FScalableFloat                         LockOnTimeReticleEdge;
	struct FScalableFloat                         MaxLockOns;
	float                                         ProgressTowardNextLockOn;
	int32                                         CurrentLockOnCount;
	float                                         TargetToReticleDistanceNormalized;
	TWeakObjectPtr<class AFortPawn>               LockOnTarget;
	uint8                                         Pad_184[0x4];

public:
	int32 GetCurrentLockOnCount() const;
	float GetLockOnProgress() const;
	bool GetLockOnTargetLocation(struct FVector* OutLockTargetLocation) const;
	float GetTargetToReticleDistanceNormalized() const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"AutoAimWeaponPawnComponent">();
	}
	static class UAutoAimWeaponPawnComponent* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAutoAimWeaponPawnComponent>();
	}
};
static_assert(alignof(UAutoAimWeaponPawnComponent) == 0x000008, "Wrong alignment on UAutoAimWeaponPawnComponent");
static_assert(sizeof(UAutoAimWeaponPawnComponent) == 0x000188, "Wrong size on UAutoAimWeaponPawnComponent");
static_assert(offsetof(UAutoAimWeaponPawnComponent, UseSingleLocationTargetingPawnTags) == 0x0000A8, "Member 'UAutoAimWeaponPawnComponent::UseSingleLocationTargetingPawnTags' has a wrong offset!");
static_assert(offsetof(UAutoAimWeaponPawnComponent, LowPriorityTargetPawnTags) == 0x0000C8, "Member 'UAutoAimWeaponPawnComponent::LowPriorityTargetPawnTags' has a wrong offset!");
static_assert(offsetof(UAutoAimWeaponPawnComponent, MultiSocketTargetingBoneSegmentDatas) == 0x0000E8, "Member 'UAutoAimWeaponPawnComponent::MultiSocketTargetingBoneSegmentDatas' has a wrong offset!");
static_assert(offsetof(UAutoAimWeaponPawnComponent, LockOnTimeReticleCenter) == 0x0000F8, "Member 'UAutoAimWeaponPawnComponent::LockOnTimeReticleCenter' has a wrong offset!");
static_assert(offsetof(UAutoAimWeaponPawnComponent, LockOnTimeReticleEdge) == 0x000120, "Member 'UAutoAimWeaponPawnComponent::LockOnTimeReticleEdge' has a wrong offset!");
static_assert(offsetof(UAutoAimWeaponPawnComponent, MaxLockOns) == 0x000148, "Member 'UAutoAimWeaponPawnComponent::MaxLockOns' has a wrong offset!");
static_assert(offsetof(UAutoAimWeaponPawnComponent, ProgressTowardNextLockOn) == 0x000170, "Member 'UAutoAimWeaponPawnComponent::ProgressTowardNextLockOn' has a wrong offset!");
static_assert(offsetof(UAutoAimWeaponPawnComponent, CurrentLockOnCount) == 0x000174, "Member 'UAutoAimWeaponPawnComponent::CurrentLockOnCount' has a wrong offset!");
static_assert(offsetof(UAutoAimWeaponPawnComponent, TargetToReticleDistanceNormalized) == 0x000178, "Member 'UAutoAimWeaponPawnComponent::TargetToReticleDistanceNormalized' has a wrong offset!");
static_assert(offsetof(UAutoAimWeaponPawnComponent, LockOnTarget) == 0x00017C, "Member 'UAutoAimWeaponPawnComponent::LockOnTarget' has a wrong offset!");

}
