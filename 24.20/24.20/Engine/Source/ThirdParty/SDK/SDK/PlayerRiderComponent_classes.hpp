#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "GameplayTags_structs.hpp"
#include "SlateCore_structs.hpp"
#include "RidingCodeRuntime_classes.hpp"

namespace SDK
{

class UPlayerRiderComponent_C final : public UControllingRiderComponent
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;
	struct FGameplayTagContainer                  T_PlayerIsRiding;
	class UClass*                                 GE_PlayerIsRiding;
	class AFortPlayerPawn*                        FortPlayerRef;
	double                                        JumpOnMountDistanceCheck;
	TMulticastInlineDelegate<void(class FText Name, const struct FSlateBrush& Icon, class AActor* RidableActor)> RiderUINewStats;
	TMulticastInlineDelegate<void(class AActor* RidableActor)> RiderUIEnd;
	double                                        targetEnergy;
	double                                        targetHealth;
	struct FGameplayTagContainer                  T_CannotRideBucket;
	TMulticastInlineDelegate<void(double Energy)> RiderUIUpdateEnergy;
	TMulticastInlineDelegate<void(double Health)> RiderUIUpdateHealth;
	class AActor*                                 CachedRidableActor;
	struct FGameplayTagContainer                  Cannot_Ride_Rider_Bucket;
	struct FGameplayTag                           JumpOnCreature_Cue_Tag;
	uint8                                         Pad_764[0x4];
	TSubclassOf<class UGameplayEffect>            GE_PlayerPetting;
	struct FGameplayTagContainer                  Tag_Quests_Wildlife_Pet;
	class UAbilityAsync_WaitGameplayTagAdded*     ActiveRidableBlockRidingGameplayTagAsyncAction;

public:
	void Added_42EF586645CCFF06FFA4D9A5D59B1298();
	void Added_A83C775344FE0F6BDAAC4B971F57425E();
	void Added_D3DFE4374EED456A4C597E95375A2028();
	void EventReceived_3DA19BC649FB853BA2CC0FADFF8D08F6(const struct FGameplayEventData& Payload);
	void EventReceived_E5B5FB5340DB5660002329825657B406(const struct FGameplayEventData& Payload);
	void ExecuteUbergraph_PlayerRiderComponent(int32 EntryPoint);
	void GetJumpInfo(class AActor* TargetActor, class UActorComponent** TargetActorComponent, double* JumpAttach_GroundHeightMin, double* JumpAttach_GroundHeightBuffer, bool* UseAltRidingMessage);
	void GetRidingInfoFromTarget(double* JumpAttachGroundHeightMin, double* JumpAttachGroundHeightBuffer, bool* UsesAltRidingMessage);
	void HandleRequestPettingStart();
	void HandleRequestPettingStop();
	void HandleRidableFound(const struct FHitResult& HitResult);
	void HandleStartedRiding(class URidableComponent* Ridable);
	void HandleStoppedRiding(class URidableComponent* Ridable);
	void MountLanded(const struct FHitResult& Hit);
	void MovementModeChanged(class ACharacter* Character, EMovementMode PrevMovementMode, uint8 PreviousCustomMode);
	void OnRep_targetEnergy();
	void OnRep_targetHealth();
	void ReceiveBeginPlay();
	void RiderUIEndClient(class AActor* Ridable);
	void RiderUIStartClient(const class FText& Name_0, const struct FSlateBrush& Icon, class AActor* Ridable);
	void SetTargetHealth(double targetHealth_0);
	void TestIfValidForRidingAttempt(class UObject* Object, bool* Success, class UObject** TargetObject, bool* UseAltRidingMessage);
	void ToggleRiding(class AActor* PlayerPawn, class AActor* Target, bool ShouldRide, bool* bChangedRiding);
	void ToggleRidingAlternative();
	void ToggleRidingOnServer(class UObject* TargetObject, bool UseAltRidingMessage);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"PlayerRiderComponent_C">();
	}
	static class UPlayerRiderComponent_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPlayerRiderComponent_C>();
	}
};
static_assert(alignof(UPlayerRiderComponent_C) == 0x000008, "Wrong alignment on UPlayerRiderComponent_C");
static_assert(sizeof(UPlayerRiderComponent_C) == 0x000798, "Wrong size on UPlayerRiderComponent_C");
static_assert(offsetof(UPlayerRiderComponent_C, UberGraphFrame) == 0x000688, "Member 'UPlayerRiderComponent_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UPlayerRiderComponent_C, T_PlayerIsRiding) == 0x000690, "Member 'UPlayerRiderComponent_C::T_PlayerIsRiding' has a wrong offset!");
static_assert(offsetof(UPlayerRiderComponent_C, GE_PlayerIsRiding) == 0x0006B0, "Member 'UPlayerRiderComponent_C::GE_PlayerIsRiding' has a wrong offset!");
static_assert(offsetof(UPlayerRiderComponent_C, FortPlayerRef) == 0x0006B8, "Member 'UPlayerRiderComponent_C::FortPlayerRef' has a wrong offset!");
static_assert(offsetof(UPlayerRiderComponent_C, JumpOnMountDistanceCheck) == 0x0006C0, "Member 'UPlayerRiderComponent_C::JumpOnMountDistanceCheck' has a wrong offset!");
static_assert(offsetof(UPlayerRiderComponent_C, RiderUINewStats) == 0x0006C8, "Member 'UPlayerRiderComponent_C::RiderUINewStats' has a wrong offset!");
static_assert(offsetof(UPlayerRiderComponent_C, RiderUIEnd) == 0x0006D8, "Member 'UPlayerRiderComponent_C::RiderUIEnd' has a wrong offset!");
static_assert(offsetof(UPlayerRiderComponent_C, targetEnergy) == 0x0006E8, "Member 'UPlayerRiderComponent_C::targetEnergy' has a wrong offset!");
static_assert(offsetof(UPlayerRiderComponent_C, targetHealth) == 0x0006F0, "Member 'UPlayerRiderComponent_C::targetHealth' has a wrong offset!");
static_assert(offsetof(UPlayerRiderComponent_C, T_CannotRideBucket) == 0x0006F8, "Member 'UPlayerRiderComponent_C::T_CannotRideBucket' has a wrong offset!");
static_assert(offsetof(UPlayerRiderComponent_C, RiderUIUpdateEnergy) == 0x000718, "Member 'UPlayerRiderComponent_C::RiderUIUpdateEnergy' has a wrong offset!");
static_assert(offsetof(UPlayerRiderComponent_C, RiderUIUpdateHealth) == 0x000728, "Member 'UPlayerRiderComponent_C::RiderUIUpdateHealth' has a wrong offset!");
static_assert(offsetof(UPlayerRiderComponent_C, CachedRidableActor) == 0x000738, "Member 'UPlayerRiderComponent_C::CachedRidableActor' has a wrong offset!");
static_assert(offsetof(UPlayerRiderComponent_C, Cannot_Ride_Rider_Bucket) == 0x000740, "Member 'UPlayerRiderComponent_C::Cannot_Ride_Rider_Bucket' has a wrong offset!");
static_assert(offsetof(UPlayerRiderComponent_C, JumpOnCreature_Cue_Tag) == 0x000760, "Member 'UPlayerRiderComponent_C::JumpOnCreature_Cue_Tag' has a wrong offset!");
static_assert(offsetof(UPlayerRiderComponent_C, GE_PlayerPetting) == 0x000768, "Member 'UPlayerRiderComponent_C::GE_PlayerPetting' has a wrong offset!");
static_assert(offsetof(UPlayerRiderComponent_C, Tag_Quests_Wildlife_Pet) == 0x000770, "Member 'UPlayerRiderComponent_C::Tag_Quests_Wildlife_Pet' has a wrong offset!");
static_assert(offsetof(UPlayerRiderComponent_C, ActiveRidableBlockRidingGameplayTagAsyncAction) == 0x000790, "Member 'UPlayerRiderComponent_C::ActiveRidableBlockRidingGameplayTagAsyncAction' has a wrong offset!");

}
