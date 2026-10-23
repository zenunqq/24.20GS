#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "FortniteGame_classes.hpp"

namespace SDK
{

class UGA_GrindRail_Smash_C final : public UFortGameplayAbility_ZiplineSmashBase
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;
	float                                         SF_IntervalSmash;
	uint8                                         Pad_B4C[0x4];
	struct FTimerHandle                           SurroundingCheckTimer;
	class AFortPlayerPawn*                        PlayerPawn;
	struct FVector                                SmashBoxExtent;
	class UBP_GrindingComponent_C*                GrindingComp;
	bool                                          bSmashNonPlayerBuilt;

public:
	void EndAsyncBreakNearbyStructuresOverlap(const TArray<class AActor*>& OverlapActors);
	void ExecuteUbergraph_GA_GrindRail_Smash(int32 EntryPoint);
	void FailedToActivatePassiveAbility(const struct FGameplayAbilityActorInfo& ActorInfo);
	void K2_ActivateAbility();
	void K2_OnEndAbility(bool bWasCancelled);
	void SurroundingCheck();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GA_GrindRail_Smash_C">();
	}
	static class UGA_GrindRail_Smash_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGA_GrindRail_Smash_C>();
	}
};
static_assert(alignof(UGA_GrindRail_Smash_C) == 0x000008, "Wrong alignment on UGA_GrindRail_Smash_C");
static_assert(sizeof(UGA_GrindRail_Smash_C) == 0x000B88, "Wrong size on UGA_GrindRail_Smash_C");
static_assert(offsetof(UGA_GrindRail_Smash_C, UberGraphFrame) == 0x000B40, "Member 'UGA_GrindRail_Smash_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UGA_GrindRail_Smash_C, SF_IntervalSmash) == 0x000B48, "Member 'UGA_GrindRail_Smash_C::SF_IntervalSmash' has a wrong offset!");
static_assert(offsetof(UGA_GrindRail_Smash_C, SurroundingCheckTimer) == 0x000B50, "Member 'UGA_GrindRail_Smash_C::SurroundingCheckTimer' has a wrong offset!");
static_assert(offsetof(UGA_GrindRail_Smash_C, PlayerPawn) == 0x000B58, "Member 'UGA_GrindRail_Smash_C::PlayerPawn' has a wrong offset!");
static_assert(offsetof(UGA_GrindRail_Smash_C, SmashBoxExtent) == 0x000B60, "Member 'UGA_GrindRail_Smash_C::SmashBoxExtent' has a wrong offset!");
static_assert(offsetof(UGA_GrindRail_Smash_C, GrindingComp) == 0x000B78, "Member 'UGA_GrindRail_Smash_C::GrindingComp' has a wrong offset!");
static_assert(offsetof(UGA_GrindRail_Smash_C, bSmashNonPlayerBuilt) == 0x000B80, "Member 'UGA_GrindRail_Smash_C::bSmashNonPlayerBuilt' has a wrong offset!");

}
