#pragma once

#include "Basic.hpp"

#include "CoreUObject_classes.hpp"
#include "Engine_structs.hpp"
#include "Engine_classes.hpp"
#include "GameplayTags_structs.hpp"
#include "ClamberingCodeRuntime_structs.hpp"
#include "FortniteGame_classes.hpp"
#include "GameplayAbilities_structs.hpp"

namespace SDK
{

class UClamberingAnalytics final : public UObject
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"ClamberingAnalytics">();
	}
	static class UClamberingAnalytics* GetDefaultObj()
	{
		return GetDefaultObjImpl<UClamberingAnalytics>();
	}
};
static_assert(alignof(UClamberingAnalytics) == 0x000008, "Wrong alignment on UClamberingAnalytics");
static_assert(sizeof(UClamberingAnalytics) == 0x000028, "Wrong size on UClamberingAnalytics");

class UClamberingComponent final : public UFortPawnOverrideComponent
{
public:
	uint8                                         Pad_A8[0x8];
	EClamberingState                              LocalClamberingState;
	EClamberingState                              ReplicatedClamberingState;
	uint8                                         Pad_B2[0x6];
	struct FClamberingTargetingData               LockedTargetingData;
	struct FReplicatedClamberingTargetingData_SimClient ReplicatedTargetingData;
	uint8                                         Pad_1C0[0x8];
	struct FScalableFloat                         ClamberingEnabled;
	struct FScalableFloat                         ClamberIndicatorEnabled;
	struct FScalableFloat                         ClamberStartMaxFallingDamageFraction;
	bool                                          bPerformTargetingWhileWalking;
	bool                                          bPerformTargetingWhileSwimming;
	uint8                                         Pad_242[0x6];
	struct FScalableFloat                         ServerFailDelay;
	struct FScalableFloat                         ServerValidatePlayerMaxDistance;
	struct FClamberingInputConfig                 InputConfig;
	struct FClamberingTargetingConfig_Ledge       TargetingConfig_Ledge;
	struct FClamberingTargetingConfig_Ledge_CachedContextualValues TargetingConfig_Ledge_CachedContextualValues;
	uint8                                         Pad_7DC[0x4];
	struct FClamberingMovementConfig_Ledge        MoveConfig_Ledge;
	struct FScalableFloat                         ClamberSyncTargetLedgeOffset;
	struct FScalableFloat                         ClamberingMaxAnalyticsEvents;
	struct FScalableFloat                         SynchedActionFailDelay;
	double                                        LastTeleportTime;
	bool                                          bTutorialModeEnabled;
	uint8                                         Pad_8B1[0x7];
	struct FClamberingTargetingData               LocalTargetingData;
	struct FClamberingTargetingData               ParallelTargetingData;
	float                                         QueuedInputTimer;
	float                                         InputEnabledTimer;
	bool                                          bJumpInputPressed;
	uint8                                         Pad_A61[0x3];
	float                                         JumpHeldInAirTime;
	uint8                                         Pad_A68[0x50];
	struct FGameplayTag                           Tag_DisableClambering;
	uint8                                         Pad_ABC[0x4];

public:
	void BP_HandleClamberingStateChanged(const EClamberingState OldClamberingState, const EClamberingState NewClamberingState);
	void BP_HandleSynchedActionStarted(const struct FSynchedActionInfo& SynchedActionInfo);
	void DrawDebugHUD(class AHUD* HUD, class UCanvas* Canvas);
	void HandleClamberingTargetInActivationRange();
	void HandleClamberingTargetOutOfActivationRange();
	void HandleOwnerASCInitialized(class UFortAbilitySystemComponent* AbilitySystemComponent, class AFortPlayerPawn* AffectedPawn);
	void HandleOwnerASCInvalidated();
	void HandleOwnerDBNO();
	void HandleOwnerDied(class AFortPawn* DeadPawn);
	void HandleOwnerJumpInput(bool bPressed);
	void HandleOwnerMovementModeChanged(class ACharacter* Character, EMovementMode PreviousMovementMode, uint8 PreviousCustomMode);
	void HandleOwnerTeleported(class AFortPawn* TeleportedOwner);
	void HandleTargetActorDestroyed(class AActor* Actor);
	void HandleTargetActorHealthChanged();
	void HandleTargetingDataInvalid();
	void HandleTargetingDataValid(const struct FClamberingTargetingData& TargetingData);
	void NetMulticast_ClamberingLedgeFailed(EClamberingFailedReason FailedReason, EClamberingState FailedState);
	void OnMutatorUpdated();
	void OnPlayerStatePawnSet(class APlayerState* Player, class APawn* NewPawn, class APawn* OldPawn);
	void OnRep_ReplicatedClamberingState();
	void OnRep_ReplicatedLastTeleportTime();
	void OnRep_ReplicatedTargetingData();
	void RegisterMutatorUpdatedDelegate(class APawn* AffectedPawn);
	void ServerStartClambering(const struct FReplicatedClamberingTargetingData& InReplicatedTargetingData, const double ClientLastTeleportTime);
	void SetTutorialModeEnabled(bool bEnabled);
	void UnregisterMutatorUpdatedDelegate();

	void BP_CanStartClambering(bool* bCanStartClambering) const;
	void BP_CanStartTargeting(bool* bCanStartTargeting) const;
	void BP_IsValidTargetActor(const class AActor* TargetActor, bool* bIsValidTargetActor) const;
	void BP_TutorialModeDisabled() const;
	void BP_TutorialModeEnabled() const;
	bool IsAutoClamberingEnabled() const;
	bool IsClamberingEnabled() const;
	bool IsTutorialModeEnabled() const;
	bool ShouldShowClamberIndicator() const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"ClamberingComponent">();
	}
	static class UClamberingComponent* GetDefaultObj()
	{
		return GetDefaultObjImpl<UClamberingComponent>();
	}
};
static_assert(alignof(UClamberingComponent) == 0x000008, "Wrong alignment on UClamberingComponent");
static_assert(sizeof(UClamberingComponent) == 0x000AC0, "Wrong size on UClamberingComponent");
static_assert(offsetof(UClamberingComponent, LocalClamberingState) == 0x0000B0, "Member 'UClamberingComponent::LocalClamberingState' has a wrong offset!");
static_assert(offsetof(UClamberingComponent, ReplicatedClamberingState) == 0x0000B1, "Member 'UClamberingComponent::ReplicatedClamberingState' has a wrong offset!");
static_assert(offsetof(UClamberingComponent, LockedTargetingData) == 0x0000B8, "Member 'UClamberingComponent::LockedTargetingData' has a wrong offset!");
static_assert(offsetof(UClamberingComponent, ReplicatedTargetingData) == 0x000188, "Member 'UClamberingComponent::ReplicatedTargetingData' has a wrong offset!");
static_assert(offsetof(UClamberingComponent, ClamberingEnabled) == 0x0001C8, "Member 'UClamberingComponent::ClamberingEnabled' has a wrong offset!");
static_assert(offsetof(UClamberingComponent, ClamberIndicatorEnabled) == 0x0001F0, "Member 'UClamberingComponent::ClamberIndicatorEnabled' has a wrong offset!");
static_assert(offsetof(UClamberingComponent, ClamberStartMaxFallingDamageFraction) == 0x000218, "Member 'UClamberingComponent::ClamberStartMaxFallingDamageFraction' has a wrong offset!");
static_assert(offsetof(UClamberingComponent, bPerformTargetingWhileWalking) == 0x000240, "Member 'UClamberingComponent::bPerformTargetingWhileWalking' has a wrong offset!");
static_assert(offsetof(UClamberingComponent, bPerformTargetingWhileSwimming) == 0x000241, "Member 'UClamberingComponent::bPerformTargetingWhileSwimming' has a wrong offset!");
static_assert(offsetof(UClamberingComponent, ServerFailDelay) == 0x000248, "Member 'UClamberingComponent::ServerFailDelay' has a wrong offset!");
static_assert(offsetof(UClamberingComponent, ServerValidatePlayerMaxDistance) == 0x000270, "Member 'UClamberingComponent::ServerValidatePlayerMaxDistance' has a wrong offset!");
static_assert(offsetof(UClamberingComponent, InputConfig) == 0x000298, "Member 'UClamberingComponent::InputConfig' has a wrong offset!");
static_assert(offsetof(UClamberingComponent, TargetingConfig_Ledge) == 0x0004A8, "Member 'UClamberingComponent::TargetingConfig_Ledge' has a wrong offset!");
static_assert(offsetof(UClamberingComponent, TargetingConfig_Ledge_CachedContextualValues) == 0x0007C8, "Member 'UClamberingComponent::TargetingConfig_Ledge_CachedContextualValues' has a wrong offset!");
static_assert(offsetof(UClamberingComponent, MoveConfig_Ledge) == 0x0007E0, "Member 'UClamberingComponent::MoveConfig_Ledge' has a wrong offset!");
static_assert(offsetof(UClamberingComponent, ClamberSyncTargetLedgeOffset) == 0x000830, "Member 'UClamberingComponent::ClamberSyncTargetLedgeOffset' has a wrong offset!");
static_assert(offsetof(UClamberingComponent, ClamberingMaxAnalyticsEvents) == 0x000858, "Member 'UClamberingComponent::ClamberingMaxAnalyticsEvents' has a wrong offset!");
static_assert(offsetof(UClamberingComponent, SynchedActionFailDelay) == 0x000880, "Member 'UClamberingComponent::SynchedActionFailDelay' has a wrong offset!");
static_assert(offsetof(UClamberingComponent, LastTeleportTime) == 0x0008A8, "Member 'UClamberingComponent::LastTeleportTime' has a wrong offset!");
static_assert(offsetof(UClamberingComponent, bTutorialModeEnabled) == 0x0008B0, "Member 'UClamberingComponent::bTutorialModeEnabled' has a wrong offset!");
static_assert(offsetof(UClamberingComponent, LocalTargetingData) == 0x0008B8, "Member 'UClamberingComponent::LocalTargetingData' has a wrong offset!");
static_assert(offsetof(UClamberingComponent, ParallelTargetingData) == 0x000988, "Member 'UClamberingComponent::ParallelTargetingData' has a wrong offset!");
static_assert(offsetof(UClamberingComponent, QueuedInputTimer) == 0x000A58, "Member 'UClamberingComponent::QueuedInputTimer' has a wrong offset!");
static_assert(offsetof(UClamberingComponent, InputEnabledTimer) == 0x000A5C, "Member 'UClamberingComponent::InputEnabledTimer' has a wrong offset!");
static_assert(offsetof(UClamberingComponent, bJumpInputPressed) == 0x000A60, "Member 'UClamberingComponent::bJumpInputPressed' has a wrong offset!");
static_assert(offsetof(UClamberingComponent, JumpHeldInAirTime) == 0x000A64, "Member 'UClamberingComponent::JumpHeldInAirTime' has a wrong offset!");
static_assert(offsetof(UClamberingComponent, Tag_DisableClambering) == 0x000AB8, "Member 'UClamberingComponent::Tag_DisableClambering' has a wrong offset!");

class UClamberingLibrary final : public UBlueprintFunctionLibrary
{
public:
	static bool PerformClamberingTargeting(const class ACharacter* Character, struct FClamberingTargetingData* OutTargetingData);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"ClamberingLibrary">();
	}
	static class UClamberingLibrary* GetDefaultObj()
	{
		return GetDefaultObjImpl<UClamberingLibrary>();
	}
};
static_assert(alignof(UClamberingLibrary) == 0x000008, "Wrong alignment on UClamberingLibrary");
static_assert(sizeof(UClamberingLibrary) == 0x000028, "Wrong size on UClamberingLibrary");

}
