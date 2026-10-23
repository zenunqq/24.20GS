#pragma once

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "VaultingCodeRuntime_structs.hpp"
#include "GameplayAbilities_structs.hpp"
#include "FortniteGame_classes.hpp"
#include "Engine_structs.hpp"
#include "Engine_classes.hpp"

namespace SDK
{

class UHurdleCameraMode final : public UFortCameraMode_ThirdPerson
{
public:
	struct FVector                                StartCameraOriginInterpSpeed;
	struct FVector                                ApexCameraOriginInterpSpeed;
	struct FVector                                EndCameraOriginInterpSpeed;
	float                                         ConstantSpeedCameraTrackInterpolationExponent;
	float                                         CameraOriginVerticalThreshold;
	float                                         FallingVerticalInterpSpeed;
	float                                         FallSpeedThreshold;
	bool                                          bOverrideSpectatorCamera;
	uint8                                         Pad_1B71[0x7];
	struct FHurdleTargetingData                   HurdleTargetingData;
	uint8                                         Pad_1CA8[0x78];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"HurdleCameraMode">();
	}
	static class UHurdleCameraMode* GetDefaultObj()
	{
		return GetDefaultObjImpl<UHurdleCameraMode>();
	}
};
static_assert(alignof(UHurdleCameraMode) == 0x000010, "Wrong alignment on UHurdleCameraMode");
static_assert(sizeof(UHurdleCameraMode) == 0x001D20, "Wrong size on UHurdleCameraMode");
static_assert(offsetof(UHurdleCameraMode, StartCameraOriginInterpSpeed) == 0x001B18, "Member 'UHurdleCameraMode::StartCameraOriginInterpSpeed' has a wrong offset!");
static_assert(offsetof(UHurdleCameraMode, ApexCameraOriginInterpSpeed) == 0x001B30, "Member 'UHurdleCameraMode::ApexCameraOriginInterpSpeed' has a wrong offset!");
static_assert(offsetof(UHurdleCameraMode, EndCameraOriginInterpSpeed) == 0x001B48, "Member 'UHurdleCameraMode::EndCameraOriginInterpSpeed' has a wrong offset!");
static_assert(offsetof(UHurdleCameraMode, ConstantSpeedCameraTrackInterpolationExponent) == 0x001B60, "Member 'UHurdleCameraMode::ConstantSpeedCameraTrackInterpolationExponent' has a wrong offset!");
static_assert(offsetof(UHurdleCameraMode, CameraOriginVerticalThreshold) == 0x001B64, "Member 'UHurdleCameraMode::CameraOriginVerticalThreshold' has a wrong offset!");
static_assert(offsetof(UHurdleCameraMode, FallingVerticalInterpSpeed) == 0x001B68, "Member 'UHurdleCameraMode::FallingVerticalInterpSpeed' has a wrong offset!");
static_assert(offsetof(UHurdleCameraMode, FallSpeedThreshold) == 0x001B6C, "Member 'UHurdleCameraMode::FallSpeedThreshold' has a wrong offset!");
static_assert(offsetof(UHurdleCameraMode, bOverrideSpectatorCamera) == 0x001B70, "Member 'UHurdleCameraMode::bOverrideSpectatorCamera' has a wrong offset!");
static_assert(offsetof(UHurdleCameraMode, HurdleTargetingData) == 0x001B78, "Member 'UHurdleCameraMode::HurdleTargetingData' has a wrong offset!");

class UHurdleComponent final : public UFortPawnComponent
{
public:
	uint8                                         Pad_A8[0x8];
	struct FHurdleInputConfig                     HurdleInputConfig;
	uint8                                         Pad_518[0x8];
	struct FScalableFloat                         HurdleEnabled;
	uint8                                         Pad_548[0x138];
	struct FReplicatedHurdleTargetingData         ReplayHurdleTargetingData;
	double                                        LastTeleportTime;
	struct FHurdleTargetingData                   ParallelTargetingData;
	uint8                                         Pad_828[0x1];
	EHurdleState                                  ReplicatedHurdleState;
	uint8                                         Pad_82A[0x36];

public:
	void BP_CanStartHurdle(bool* OutCanStartHurdle);
	void BP_HandleHurdleEnded();
	void BP_HandleHurdleStarted(EHurdleType HurdleType, const struct FSynchedActionInfo& SynchedActionInfo);
	void BP_HandleSpringJump();
	void HandleOwnerJumpInput(bool bPressed);
	void HandleOwnerMovementModeChanged(class ACharacter* Character, EMovementMode PreviousMovementMode, uint8 PreviousCustomMode);
	void HandleOwnerTeleported(class AFortPawn* TeleportedOwner);
	void HandleTargetingDataInvalid();
	void HandleTargetingDataValid(const struct FHurdleTargetingData& TargetingData);
	void OnMutatorUpdated();
	void OnPlayerStatePawnSet(class APlayerState* Player, class APawn* NewPawn, class APawn* OldPawn);
	void OnRep_ReplicatedHurdleState();
	void OnRep_ReplicatedLastTeleportTime();
	void RegisterMutatorUpdatedDelegate(class APawn* AffectedPawn);
	void ServerStartHurdle(const struct FReplicatedHurdleTargetingData& InReplicatedTargetingData, const double ClientLastTeleportTime);
	void UnregisterMutatorUpdatedDelegate();

	bool ShouldShowHurdleIndicator() const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"HurdleComponent">();
	}
	static class UHurdleComponent* GetDefaultObj()
	{
		return GetDefaultObjImpl<UHurdleComponent>();
	}
};
static_assert(alignof(UHurdleComponent) == 0x000008, "Wrong alignment on UHurdleComponent");
static_assert(sizeof(UHurdleComponent) == 0x000860, "Wrong size on UHurdleComponent");
static_assert(offsetof(UHurdleComponent, HurdleInputConfig) == 0x0000B0, "Member 'UHurdleComponent::HurdleInputConfig' has a wrong offset!");
static_assert(offsetof(UHurdleComponent, HurdleEnabled) == 0x000520, "Member 'UHurdleComponent::HurdleEnabled' has a wrong offset!");
static_assert(offsetof(UHurdleComponent, ReplayHurdleTargetingData) == 0x000680, "Member 'UHurdleComponent::ReplayHurdleTargetingData' has a wrong offset!");
static_assert(offsetof(UHurdleComponent, LastTeleportTime) == 0x0006F0, "Member 'UHurdleComponent::LastTeleportTime' has a wrong offset!");
static_assert(offsetof(UHurdleComponent, ParallelTargetingData) == 0x0006F8, "Member 'UHurdleComponent::ParallelTargetingData' has a wrong offset!");
static_assert(offsetof(UHurdleComponent, ReplicatedHurdleState) == 0x000829, "Member 'UHurdleComponent::ReplicatedHurdleState' has a wrong offset!");

class UHurdleLibrary final : public UBlueprintFunctionLibrary
{
public:
	static bool PerformHurdleTargeting(const class ACharacter* Character, struct FHurdleInputConfig* HurdleInputConfig, struct FHurdleTargetingData* OutTargetingData, bool bIsAutoHurdle);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"HurdleLibrary">();
	}
	static class UHurdleLibrary* GetDefaultObj()
	{
		return GetDefaultObjImpl<UHurdleLibrary>();
	}
};
static_assert(alignof(UHurdleLibrary) == 0x000008, "Wrong alignment on UHurdleLibrary");
static_assert(sizeof(UHurdleLibrary) == 0x000028, "Wrong size on UHurdleLibrary");

}
