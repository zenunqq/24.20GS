#pragma once

#include "Basic.hpp"

#include "RidingCodeRuntime_structs.hpp"
#include "FortniteGame_structs.hpp"
#include "GameplayTags_structs.hpp"
#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"

namespace SDK::Params
{

struct FortVehicleLayerAnimInstance_Riding_BlueprintCollectRidableAnimBPData final
{
public:
	const class UAnimInstance*                    RidableAnimInstance;
};
static_assert(alignof(FortVehicleLayerAnimInstance_Riding_BlueprintCollectRidableAnimBPData) == 0x000008, "Wrong alignment on FortVehicleLayerAnimInstance_Riding_BlueprintCollectRidableAnimBPData");
static_assert(sizeof(FortVehicleLayerAnimInstance_Riding_BlueprintCollectRidableAnimBPData) == 0x000008, "Wrong size on FortVehicleLayerAnimInstance_Riding_BlueprintCollectRidableAnimBPData");
static_assert(offsetof(FortVehicleLayerAnimInstance_Riding_BlueprintCollectRidableAnimBPData, RidableAnimInstance) == 0x000000, "Member 'FortVehicleLayerAnimInstance_Riding_BlueprintCollectRidableAnimBPData::RidableAnimInstance' has a wrong offset!");

struct FortVehicleLayerAnimInstance_Riding_SetFootPhase final
{
public:
	ERidingFootPhase                              InFootPhase;
};
static_assert(alignof(FortVehicleLayerAnimInstance_Riding_SetFootPhase) == 0x000001, "Wrong alignment on FortVehicleLayerAnimInstance_Riding_SetFootPhase");
static_assert(sizeof(FortVehicleLayerAnimInstance_Riding_SetFootPhase) == 0x000001, "Wrong size on FortVehicleLayerAnimInstance_Riding_SetFootPhase");
static_assert(offsetof(FortVehicleLayerAnimInstance_Riding_SetFootPhase, InFootPhase) == 0x000000, "Member 'FortVehicleLayerAnimInstance_Riding_SetFootPhase::InFootPhase' has a wrong offset!");

struct RidingCheatManager_RidingSetStaminaPercent final
{
public:
	float                                         StaminaPercent;
};
static_assert(alignof(RidingCheatManager_RidingSetStaminaPercent) == 0x000004, "Wrong alignment on RidingCheatManager_RidingSetStaminaPercent");
static_assert(sizeof(RidingCheatManager_RidingSetStaminaPercent) == 0x000004, "Wrong size on RidingCheatManager_RidingSetStaminaPercent");
static_assert(offsetof(RidingCheatManager_RidingSetStaminaPercent, StaminaPercent) == 0x000000, "Member 'RidingCheatManager_RidingSetStaminaPercent::StaminaPercent' has a wrong offset!");

struct RidableComponent_CheatSetStaminaPercent final
{
public:
	float                                         StaminaPercent;
};
static_assert(alignof(RidableComponent_CheatSetStaminaPercent) == 0x000004, "Wrong alignment on RidableComponent_CheatSetStaminaPercent");
static_assert(sizeof(RidableComponent_CheatSetStaminaPercent) == 0x000004, "Wrong size on RidableComponent_CheatSetStaminaPercent");
static_assert(offsetof(RidableComponent_CheatSetStaminaPercent, StaminaPercent) == 0x000000, "Member 'RidableComponent_CheatSetStaminaPercent::StaminaPercent' has a wrong offset!");

struct RidableComponent_HandleRiderEndPlay final
{
public:
	class AActor*                                 Actor;
	EEndPlayReason                                EndPlayReason;
	uint8                                         Pad_9[0x7];
};
static_assert(alignof(RidableComponent_HandleRiderEndPlay) == 0x000008, "Wrong alignment on RidableComponent_HandleRiderEndPlay");
static_assert(sizeof(RidableComponent_HandleRiderEndPlay) == 0x000010, "Wrong size on RidableComponent_HandleRiderEndPlay");
static_assert(offsetof(RidableComponent_HandleRiderEndPlay, Actor) == 0x000000, "Member 'RidableComponent_HandleRiderEndPlay::Actor' has a wrong offset!");
static_assert(offsetof(RidableComponent_HandleRiderEndPlay, EndPlayReason) == 0x000008, "Member 'RidableComponent_HandleRiderEndPlay::EndPlayReason' has a wrong offset!");

struct RidableComponent_HandleRiderStartedRiding final
{
public:
	class URiderComponent*                        Rider;
};
static_assert(alignof(RidableComponent_HandleRiderStartedRiding) == 0x000008, "Wrong alignment on RidableComponent_HandleRiderStartedRiding");
static_assert(sizeof(RidableComponent_HandleRiderStartedRiding) == 0x000008, "Wrong size on RidableComponent_HandleRiderStartedRiding");
static_assert(offsetof(RidableComponent_HandleRiderStartedRiding, Rider) == 0x000000, "Member 'RidableComponent_HandleRiderStartedRiding::Rider' has a wrong offset!");

struct RidableComponent_HandleRiderStoppedRiding final
{
public:
	class URiderComponent*                        Rider;
};
static_assert(alignof(RidableComponent_HandleRiderStoppedRiding) == 0x000008, "Wrong alignment on RidableComponent_HandleRiderStoppedRiding");
static_assert(sizeof(RidableComponent_HandleRiderStoppedRiding) == 0x000008, "Wrong size on RidableComponent_HandleRiderStoppedRiding");
static_assert(offsetof(RidableComponent_HandleRiderStoppedRiding, Rider) == 0x000000, "Member 'RidableComponent_HandleRiderStoppedRiding::Rider' has a wrong offset!");

struct RidableComponent_CanBePet final
{
public:
	class URiderComponent*                        Rider;
	bool                                          ReturnValue;
	uint8                                         Pad_9[0x7];
};
static_assert(alignof(RidableComponent_CanBePet) == 0x000008, "Wrong alignment on RidableComponent_CanBePet");
static_assert(sizeof(RidableComponent_CanBePet) == 0x000010, "Wrong size on RidableComponent_CanBePet");
static_assert(offsetof(RidableComponent_CanBePet, Rider) == 0x000000, "Member 'RidableComponent_CanBePet::Rider' has a wrong offset!");
static_assert(offsetof(RidableComponent_CanBePet, ReturnValue) == 0x000008, "Member 'RidableComponent_CanBePet::ReturnValue' has a wrong offset!");

struct RidableComponent_CanBeRiddenBP final
{
public:
	class URiderComponent*                        Rider;
	bool                                          ReturnValue;
	uint8                                         Pad_9[0x7];
};
static_assert(alignof(RidableComponent_CanBeRiddenBP) == 0x000008, "Wrong alignment on RidableComponent_CanBeRiddenBP");
static_assert(sizeof(RidableComponent_CanBeRiddenBP) == 0x000010, "Wrong size on RidableComponent_CanBeRiddenBP");
static_assert(offsetof(RidableComponent_CanBeRiddenBP, Rider) == 0x000000, "Member 'RidableComponent_CanBeRiddenBP::Rider' has a wrong offset!");
static_assert(offsetof(RidableComponent_CanBeRiddenBP, ReturnValue) == 0x000008, "Member 'RidableComponent_CanBeRiddenBP::ReturnValue' has a wrong offset!");

struct RidableComponent_CanRiderPlayEmote final
{
public:
	const class URiderComponent*                  Rider;
	bool                                          ReturnValue;
	uint8                                         Pad_9[0x7];
};
static_assert(alignof(RidableComponent_CanRiderPlayEmote) == 0x000008, "Wrong alignment on RidableComponent_CanRiderPlayEmote");
static_assert(sizeof(RidableComponent_CanRiderPlayEmote) == 0x000010, "Wrong size on RidableComponent_CanRiderPlayEmote");
static_assert(offsetof(RidableComponent_CanRiderPlayEmote, Rider) == 0x000000, "Member 'RidableComponent_CanRiderPlayEmote::Rider' has a wrong offset!");
static_assert(offsetof(RidableComponent_CanRiderPlayEmote, ReturnValue) == 0x000008, "Member 'RidableComponent_CanRiderPlayEmote::ReturnValue' has a wrong offset!");

struct RidableComponent_GetPettingData final
{
public:
	struct FRidingPettingData                     ReturnValue;
};
static_assert(alignof(RidableComponent_GetPettingData) == 0x000008, "Wrong alignment on RidableComponent_GetPettingData");
static_assert(sizeof(RidableComponent_GetPettingData) == 0x000108, "Wrong size on RidableComponent_GetPettingData");
static_assert(offsetof(RidableComponent_GetPettingData, ReturnValue) == 0x000000, "Member 'RidableComponent_GetPettingData::ReturnValue' has a wrong offset!");

struct RidableComponent_GetRidingAttachComponent final
{
public:
	class USceneComponent*                        ReturnValue;
};
static_assert(alignof(RidableComponent_GetRidingAttachComponent) == 0x000008, "Wrong alignment on RidableComponent_GetRidingAttachComponent");
static_assert(sizeof(RidableComponent_GetRidingAttachComponent) == 0x000008, "Wrong size on RidableComponent_GetRidingAttachComponent");
static_assert(offsetof(RidableComponent_GetRidingAttachComponent, ReturnValue) == 0x000000, "Member 'RidableComponent_GetRidingAttachComponent::ReturnValue' has a wrong offset!");

struct RidableComponent_GetRidingCapsuleSize final
{
public:
	const class URiderComponent*                  Rider;
	float                                         OriginalRadius;
	float                                         OriginalHalfHeight;
	float                                         OutRadius;
	float                                         OutHalfHeight;
};
static_assert(alignof(RidableComponent_GetRidingCapsuleSize) == 0x000008, "Wrong alignment on RidableComponent_GetRidingCapsuleSize");
static_assert(sizeof(RidableComponent_GetRidingCapsuleSize) == 0x000018, "Wrong size on RidableComponent_GetRidingCapsuleSize");
static_assert(offsetof(RidableComponent_GetRidingCapsuleSize, Rider) == 0x000000, "Member 'RidableComponent_GetRidingCapsuleSize::Rider' has a wrong offset!");
static_assert(offsetof(RidableComponent_GetRidingCapsuleSize, OriginalRadius) == 0x000008, "Member 'RidableComponent_GetRidingCapsuleSize::OriginalRadius' has a wrong offset!");
static_assert(offsetof(RidableComponent_GetRidingCapsuleSize, OriginalHalfHeight) == 0x00000C, "Member 'RidableComponent_GetRidingCapsuleSize::OriginalHalfHeight' has a wrong offset!");
static_assert(offsetof(RidableComponent_GetRidingCapsuleSize, OutRadius) == 0x000010, "Member 'RidableComponent_GetRidingCapsuleSize::OutRadius' has a wrong offset!");
static_assert(offsetof(RidableComponent_GetRidingCapsuleSize, OutHalfHeight) == 0x000014, "Member 'RidableComponent_GetRidingCapsuleSize::OutHalfHeight' has a wrong offset!");

struct RidableComponent_GetRidingEmoteCapsuleSize final
{
public:
	const class URiderComponent*                  Rider;
	float                                         OriginalRadius;
	float                                         OriginalHalfHeight;
	float                                         OutRadius;
	float                                         OutHalfHeight;
};
static_assert(alignof(RidableComponent_GetRidingEmoteCapsuleSize) == 0x000008, "Wrong alignment on RidableComponent_GetRidingEmoteCapsuleSize");
static_assert(sizeof(RidableComponent_GetRidingEmoteCapsuleSize) == 0x000018, "Wrong size on RidableComponent_GetRidingEmoteCapsuleSize");
static_assert(offsetof(RidableComponent_GetRidingEmoteCapsuleSize, Rider) == 0x000000, "Member 'RidableComponent_GetRidingEmoteCapsuleSize::Rider' has a wrong offset!");
static_assert(offsetof(RidableComponent_GetRidingEmoteCapsuleSize, OriginalRadius) == 0x000008, "Member 'RidableComponent_GetRidingEmoteCapsuleSize::OriginalRadius' has a wrong offset!");
static_assert(offsetof(RidableComponent_GetRidingEmoteCapsuleSize, OriginalHalfHeight) == 0x00000C, "Member 'RidableComponent_GetRidingEmoteCapsuleSize::OriginalHalfHeight' has a wrong offset!");
static_assert(offsetof(RidableComponent_GetRidingEmoteCapsuleSize, OutRadius) == 0x000010, "Member 'RidableComponent_GetRidingEmoteCapsuleSize::OutRadius' has a wrong offset!");
static_assert(offsetof(RidableComponent_GetRidingEmoteCapsuleSize, OutHalfHeight) == 0x000014, "Member 'RidableComponent_GetRidingEmoteCapsuleSize::OutHalfHeight' has a wrong offset!");

struct RidableComponent_IsBeingRidden final
{
public:
	bool                                          ReturnValue;
};
static_assert(alignof(RidableComponent_IsBeingRidden) == 0x000001, "Wrong alignment on RidableComponent_IsBeingRidden");
static_assert(sizeof(RidableComponent_IsBeingRidden) == 0x000001, "Wrong size on RidableComponent_IsBeingRidden");
static_assert(offsetof(RidableComponent_IsBeingRidden, ReturnValue) == 0x000000, "Member 'RidableComponent_IsBeingRidden::ReturnValue' has a wrong offset!");

struct RidableComponent_IsFlying final
{
public:
	bool                                          ReturnValue;
};
static_assert(alignof(RidableComponent_IsFlying) == 0x000001, "Wrong alignment on RidableComponent_IsFlying");
static_assert(sizeof(RidableComponent_IsFlying) == 0x000001, "Wrong size on RidableComponent_IsFlying");
static_assert(offsetof(RidableComponent_IsFlying, ReturnValue) == 0x000000, "Member 'RidableComponent_IsFlying::ReturnValue' has a wrong offset!");

struct RidableComponent_IsSprinting final
{
public:
	bool                                          ReturnValue;
};
static_assert(alignof(RidableComponent_IsSprinting) == 0x000001, "Wrong alignment on RidableComponent_IsSprinting");
static_assert(sizeof(RidableComponent_IsSprinting) == 0x000001, "Wrong size on RidableComponent_IsSprinting");
static_assert(offsetof(RidableComponent_IsSprinting, ReturnValue) == 0x000000, "Member 'RidableComponent_IsSprinting::ReturnValue' has a wrong offset!");

struct RidableComponent_ShouldCameraFocusOnRidable final
{
public:
	const class URiderComponent*                  Rider;
	bool                                          ReturnValue;
	uint8                                         Pad_9[0x7];
};
static_assert(alignof(RidableComponent_ShouldCameraFocusOnRidable) == 0x000008, "Wrong alignment on RidableComponent_ShouldCameraFocusOnRidable");
static_assert(sizeof(RidableComponent_ShouldCameraFocusOnRidable) == 0x000010, "Wrong size on RidableComponent_ShouldCameraFocusOnRidable");
static_assert(offsetof(RidableComponent_ShouldCameraFocusOnRidable, Rider) == 0x000000, "Member 'RidableComponent_ShouldCameraFocusOnRidable::Rider' has a wrong offset!");
static_assert(offsetof(RidableComponent_ShouldCameraFocusOnRidable, ReturnValue) == 0x000008, "Member 'RidableComponent_ShouldCameraFocusOnRidable::ReturnValue' has a wrong offset!");

struct ControllableRidableComponent_HandleCancelSprint final
{
public:
	bool                                          bAbilityInputHeld;
	bool                                          bForceCancel;
};
static_assert(alignof(ControllableRidableComponent_HandleCancelSprint) == 0x000001, "Wrong alignment on ControllableRidableComponent_HandleCancelSprint");
static_assert(sizeof(ControllableRidableComponent_HandleCancelSprint) == 0x000002, "Wrong size on ControllableRidableComponent_HandleCancelSprint");
static_assert(offsetof(ControllableRidableComponent_HandleCancelSprint, bAbilityInputHeld) == 0x000000, "Member 'ControllableRidableComponent_HandleCancelSprint::bAbilityInputHeld' has a wrong offset!");
static_assert(offsetof(ControllableRidableComponent_HandleCancelSprint, bForceCancel) == 0x000001, "Member 'ControllableRidableComponent_HandleCancelSprint::bForceCancel' has a wrong offset!");

struct ControllableRidableComponent_OnCapsuleBeginOverlap final
{
public:
	class UPrimitiveComponent*                    OverlappedComp;
	class AActor*                                 OtherActor;
	class UPrimitiveComponent*                    OtherComp;
	int32                                         OtherBodyIndex;
	bool                                          bFromSweep;
	uint8                                         Pad_1D[0x3];
	struct FHitResult                             SweepResult;
};
static_assert(alignof(ControllableRidableComponent_OnCapsuleBeginOverlap) == 0x000008, "Wrong alignment on ControllableRidableComponent_OnCapsuleBeginOverlap");
static_assert(sizeof(ControllableRidableComponent_OnCapsuleBeginOverlap) == 0x000100, "Wrong size on ControllableRidableComponent_OnCapsuleBeginOverlap");
static_assert(offsetof(ControllableRidableComponent_OnCapsuleBeginOverlap, OverlappedComp) == 0x000000, "Member 'ControllableRidableComponent_OnCapsuleBeginOverlap::OverlappedComp' has a wrong offset!");
static_assert(offsetof(ControllableRidableComponent_OnCapsuleBeginOverlap, OtherActor) == 0x000008, "Member 'ControllableRidableComponent_OnCapsuleBeginOverlap::OtherActor' has a wrong offset!");
static_assert(offsetof(ControllableRidableComponent_OnCapsuleBeginOverlap, OtherComp) == 0x000010, "Member 'ControllableRidableComponent_OnCapsuleBeginOverlap::OtherComp' has a wrong offset!");
static_assert(offsetof(ControllableRidableComponent_OnCapsuleBeginOverlap, OtherBodyIndex) == 0x000018, "Member 'ControllableRidableComponent_OnCapsuleBeginOverlap::OtherBodyIndex' has a wrong offset!");
static_assert(offsetof(ControllableRidableComponent_OnCapsuleBeginOverlap, bFromSweep) == 0x00001C, "Member 'ControllableRidableComponent_OnCapsuleBeginOverlap::bFromSweep' has a wrong offset!");
static_assert(offsetof(ControllableRidableComponent_OnCapsuleBeginOverlap, SweepResult) == 0x000020, "Member 'ControllableRidableComponent_OnCapsuleBeginOverlap::SweepResult' has a wrong offset!");

struct ControllableRidableComponent_CanBeControlled final
{
public:
	class URiderComponent*                        Rider;
	bool                                          ReturnValue;
	uint8                                         Pad_9[0x7];
};
static_assert(alignof(ControllableRidableComponent_CanBeControlled) == 0x000008, "Wrong alignment on ControllableRidableComponent_CanBeControlled");
static_assert(sizeof(ControllableRidableComponent_CanBeControlled) == 0x000010, "Wrong size on ControllableRidableComponent_CanBeControlled");
static_assert(offsetof(ControllableRidableComponent_CanBeControlled, Rider) == 0x000000, "Member 'ControllableRidableComponent_CanBeControlled::Rider' has a wrong offset!");
static_assert(offsetof(ControllableRidableComponent_CanBeControlled, ReturnValue) == 0x000008, "Member 'ControllableRidableComponent_CanBeControlled::ReturnValue' has a wrong offset!");

struct ControllableRidableComponent_CanStartSprinting final
{
public:
	bool                                          ReturnValue;
};
static_assert(alignof(ControllableRidableComponent_CanStartSprinting) == 0x000001, "Wrong alignment on ControllableRidableComponent_CanStartSprinting");
static_assert(sizeof(ControllableRidableComponent_CanStartSprinting) == 0x000001, "Wrong size on ControllableRidableComponent_CanStartSprinting");
static_assert(offsetof(ControllableRidableComponent_CanStartSprinting, ReturnValue) == 0x000000, "Member 'ControllableRidableComponent_CanStartSprinting::ReturnValue' has a wrong offset!");

struct ControllableRidableComponent_GetAbilityDisplayText final
{
public:
	class FText                                   ReturnValue;
};
static_assert(alignof(ControllableRidableComponent_GetAbilityDisplayText) == 0x000008, "Wrong alignment on ControllableRidableComponent_GetAbilityDisplayText");
static_assert(sizeof(ControllableRidableComponent_GetAbilityDisplayText) == 0x000018, "Wrong size on ControllableRidableComponent_GetAbilityDisplayText");
static_assert(offsetof(ControllableRidableComponent_GetAbilityDisplayText, ReturnValue) == 0x000000, "Member 'ControllableRidableComponent_GetAbilityDisplayText::ReturnValue' has a wrong offset!");

struct ControllableRidableComponent_IsSprintToggleable final
{
public:
	bool                                          ReturnValue;
};
static_assert(alignof(ControllableRidableComponent_IsSprintToggleable) == 0x000001, "Wrong alignment on ControllableRidableComponent_IsSprintToggleable");
static_assert(sizeof(ControllableRidableComponent_IsSprintToggleable) == 0x000001, "Wrong size on ControllableRidableComponent_IsSprintToggleable");
static_assert(offsetof(ControllableRidableComponent_IsSprintToggleable, ReturnValue) == 0x000000, "Member 'ControllableRidableComponent_IsSprintToggleable::ReturnValue' has a wrong offset!");

struct RiderComponent_ClientHandleFinishedCharacterCustomization final
{
public:
	class AFortPlayerPawn*                        PlayerPawn;
};
static_assert(alignof(RiderComponent_ClientHandleFinishedCharacterCustomization) == 0x000008, "Wrong alignment on RiderComponent_ClientHandleFinishedCharacterCustomization");
static_assert(sizeof(RiderComponent_ClientHandleFinishedCharacterCustomization) == 0x000008, "Wrong size on RiderComponent_ClientHandleFinishedCharacterCustomization");
static_assert(offsetof(RiderComponent_ClientHandleFinishedCharacterCustomization, PlayerPawn) == 0x000000, "Member 'RiderComponent_ClientHandleFinishedCharacterCustomization::PlayerPawn' has a wrong offset!");

struct RiderComponent_ClientNotifyEmoteFailure final
{
public:
	struct FGameplayTagContainer                  ErrorTags;
};
static_assert(alignof(RiderComponent_ClientNotifyEmoteFailure) == 0x000008, "Wrong alignment on RiderComponent_ClientNotifyEmoteFailure");
static_assert(sizeof(RiderComponent_ClientNotifyEmoteFailure) == 0x000020, "Wrong size on RiderComponent_ClientNotifyEmoteFailure");
static_assert(offsetof(RiderComponent_ClientNotifyEmoteFailure, ErrorTags) == 0x000000, "Member 'RiderComponent_ClientNotifyEmoteFailure::ErrorTags' has a wrong offset!");

struct RiderComponent_HandleActorEndPlayWhileRiding final
{
public:
	class AActor*                                 Actor;
	EEndPlayReason                                EndPlayReason;
	uint8                                         Pad_9[0x7];
};
static_assert(alignof(RiderComponent_HandleActorEndPlayWhileRiding) == 0x000008, "Wrong alignment on RiderComponent_HandleActorEndPlayWhileRiding");
static_assert(sizeof(RiderComponent_HandleActorEndPlayWhileRiding) == 0x000010, "Wrong size on RiderComponent_HandleActorEndPlayWhileRiding");
static_assert(offsetof(RiderComponent_HandleActorEndPlayWhileRiding, Actor) == 0x000000, "Member 'RiderComponent_HandleActorEndPlayWhileRiding::Actor' has a wrong offset!");
static_assert(offsetof(RiderComponent_HandleActorEndPlayWhileRiding, EndPlayReason) == 0x000008, "Member 'RiderComponent_HandleActorEndPlayWhileRiding::EndPlayReason' has a wrong offset!");

struct RiderComponent_HandleDeferredExitVelocity final
{
public:
	struct FVector                                ExitVelocity;
};
static_assert(alignof(RiderComponent_HandleDeferredExitVelocity) == 0x000008, "Wrong alignment on RiderComponent_HandleDeferredExitVelocity");
static_assert(sizeof(RiderComponent_HandleDeferredExitVelocity) == 0x000018, "Wrong size on RiderComponent_HandleDeferredExitVelocity");
static_assert(offsetof(RiderComponent_HandleDeferredExitVelocity, ExitVelocity) == 0x000000, "Member 'RiderComponent_HandleDeferredExitVelocity::ExitVelocity' has a wrong offset!");

struct RiderComponent_HandleOnWeaponEquipped final
{
public:
	class AFortWeapon*                            NewWeapon;
	class AFortWeapon*                            PrevWeapon;
};
static_assert(alignof(RiderComponent_HandleOnWeaponEquipped) == 0x000008, "Wrong alignment on RiderComponent_HandleOnWeaponEquipped");
static_assert(sizeof(RiderComponent_HandleOnWeaponEquipped) == 0x000010, "Wrong size on RiderComponent_HandleOnWeaponEquipped");
static_assert(offsetof(RiderComponent_HandleOnWeaponEquipped, NewWeapon) == 0x000000, "Member 'RiderComponent_HandleOnWeaponEquipped::NewWeapon' has a wrong offset!");
static_assert(offsetof(RiderComponent_HandleOnWeaponEquipped, PrevWeapon) == 0x000008, "Member 'RiderComponent_HandleOnWeaponEquipped::PrevWeapon' has a wrong offset!");

struct RiderComponent_HandlePawnDiedWhileRiding final
{
public:
	class AFortPawn*                              DeadPawn;
};
static_assert(alignof(RiderComponent_HandlePawnDiedWhileRiding) == 0x000008, "Wrong alignment on RiderComponent_HandlePawnDiedWhileRiding");
static_assert(sizeof(RiderComponent_HandlePawnDiedWhileRiding) == 0x000008, "Wrong size on RiderComponent_HandlePawnDiedWhileRiding");
static_assert(offsetof(RiderComponent_HandlePawnDiedWhileRiding, DeadPawn) == 0x000000, "Member 'RiderComponent_HandlePawnDiedWhileRiding::DeadPawn' has a wrong offset!");

struct RiderComponent_HandlePawnTeleported final
{
public:
	class AFortPawn*                              TeleportedPawn;
};
static_assert(alignof(RiderComponent_HandlePawnTeleported) == 0x000008, "Wrong alignment on RiderComponent_HandlePawnTeleported");
static_assert(sizeof(RiderComponent_HandlePawnTeleported) == 0x000008, "Wrong size on RiderComponent_HandlePawnTeleported");
static_assert(offsetof(RiderComponent_HandlePawnTeleported, TeleportedPawn) == 0x000000, "Member 'RiderComponent_HandlePawnTeleported::TeleportedPawn' has a wrong offset!");

struct RiderComponent_HandleRidableFound final
{
public:
	struct FHitResult                             HitResult;
};
static_assert(alignof(RiderComponent_HandleRidableFound) == 0x000008, "Wrong alignment on RiderComponent_HandleRidableFound");
static_assert(sizeof(RiderComponent_HandleRidableFound) == 0x0000E0, "Wrong size on RiderComponent_HandleRidableFound");
static_assert(offsetof(RiderComponent_HandleRidableFound, HitResult) == 0x000000, "Member 'RiderComponent_HandleRidableFound::HitResult' has a wrong offset!");

struct RiderComponent_HandleRiderDidDamage final
{
public:
	class AActor*                                 DamagedActor;
	float                                         Damage;
	uint8                                         Pad_C[0x4];
	class AController*                            InstigatedBy;
	class AActor*                                 DamageCauser;
	struct FVector                                HitLocation;
	class UPrimitiveComponent*                    HitComponent;
	class FName                                   BoneName;
	uint8                                         Pad_44[0x4];
	struct FVector                                Momentum;
};
static_assert(alignof(RiderComponent_HandleRiderDidDamage) == 0x000008, "Wrong alignment on RiderComponent_HandleRiderDidDamage");
static_assert(sizeof(RiderComponent_HandleRiderDidDamage) == 0x000060, "Wrong size on RiderComponent_HandleRiderDidDamage");
static_assert(offsetof(RiderComponent_HandleRiderDidDamage, DamagedActor) == 0x000000, "Member 'RiderComponent_HandleRiderDidDamage::DamagedActor' has a wrong offset!");
static_assert(offsetof(RiderComponent_HandleRiderDidDamage, Damage) == 0x000008, "Member 'RiderComponent_HandleRiderDidDamage::Damage' has a wrong offset!");
static_assert(offsetof(RiderComponent_HandleRiderDidDamage, InstigatedBy) == 0x000010, "Member 'RiderComponent_HandleRiderDidDamage::InstigatedBy' has a wrong offset!");
static_assert(offsetof(RiderComponent_HandleRiderDidDamage, DamageCauser) == 0x000018, "Member 'RiderComponent_HandleRiderDidDamage::DamageCauser' has a wrong offset!");
static_assert(offsetof(RiderComponent_HandleRiderDidDamage, HitLocation) == 0x000020, "Member 'RiderComponent_HandleRiderDidDamage::HitLocation' has a wrong offset!");
static_assert(offsetof(RiderComponent_HandleRiderDidDamage, HitComponent) == 0x000038, "Member 'RiderComponent_HandleRiderDidDamage::HitComponent' has a wrong offset!");
static_assert(offsetof(RiderComponent_HandleRiderDidDamage, BoneName) == 0x000040, "Member 'RiderComponent_HandleRiderDidDamage::BoneName' has a wrong offset!");
static_assert(offsetof(RiderComponent_HandleRiderDidDamage, Momentum) == 0x000048, "Member 'RiderComponent_HandleRiderDidDamage::Momentum' has a wrong offset!");

struct RiderComponent_HandleRiderTakenDamage final
{
public:
	class AActor*                                 DamageOnOwnerPawnDamageddActor;
	float                                         Damage;
	uint8                                         Pad_C[0x4];
	class AController*                            InstigatedBy;
	class AActor*                                 DamageCauser;
	struct FVector                                HitLocation;
	class UPrimitiveComponent*                    FHitComponent;
	class FName                                   BoneName;
	uint8                                         Pad_44[0x4];
	struct FVector                                Momentum;
};
static_assert(alignof(RiderComponent_HandleRiderTakenDamage) == 0x000008, "Wrong alignment on RiderComponent_HandleRiderTakenDamage");
static_assert(sizeof(RiderComponent_HandleRiderTakenDamage) == 0x000060, "Wrong size on RiderComponent_HandleRiderTakenDamage");
static_assert(offsetof(RiderComponent_HandleRiderTakenDamage, DamageOnOwnerPawnDamageddActor) == 0x000000, "Member 'RiderComponent_HandleRiderTakenDamage::DamageOnOwnerPawnDamageddActor' has a wrong offset!");
static_assert(offsetof(RiderComponent_HandleRiderTakenDamage, Damage) == 0x000008, "Member 'RiderComponent_HandleRiderTakenDamage::Damage' has a wrong offset!");
static_assert(offsetof(RiderComponent_HandleRiderTakenDamage, InstigatedBy) == 0x000010, "Member 'RiderComponent_HandleRiderTakenDamage::InstigatedBy' has a wrong offset!");
static_assert(offsetof(RiderComponent_HandleRiderTakenDamage, DamageCauser) == 0x000018, "Member 'RiderComponent_HandleRiderTakenDamage::DamageCauser' has a wrong offset!");
static_assert(offsetof(RiderComponent_HandleRiderTakenDamage, HitLocation) == 0x000020, "Member 'RiderComponent_HandleRiderTakenDamage::HitLocation' has a wrong offset!");
static_assert(offsetof(RiderComponent_HandleRiderTakenDamage, FHitComponent) == 0x000038, "Member 'RiderComponent_HandleRiderTakenDamage::FHitComponent' has a wrong offset!");
static_assert(offsetof(RiderComponent_HandleRiderTakenDamage, BoneName) == 0x000040, "Member 'RiderComponent_HandleRiderTakenDamage::BoneName' has a wrong offset!");
static_assert(offsetof(RiderComponent_HandleRiderTakenDamage, Momentum) == 0x000048, "Member 'RiderComponent_HandleRiderTakenDamage::Momentum' has a wrong offset!");

struct RiderComponent_HandleStartedRiding final
{
public:
	class URidableComponent*                      Ridable;
};
static_assert(alignof(RiderComponent_HandleStartedRiding) == 0x000008, "Wrong alignment on RiderComponent_HandleStartedRiding");
static_assert(sizeof(RiderComponent_HandleStartedRiding) == 0x000008, "Wrong size on RiderComponent_HandleStartedRiding");
static_assert(offsetof(RiderComponent_HandleStartedRiding, Ridable) == 0x000000, "Member 'RiderComponent_HandleStartedRiding::Ridable' has a wrong offset!");

struct RiderComponent_HandleStoppedRiding final
{
public:
	class URidableComponent*                      Ridable;
};
static_assert(alignof(RiderComponent_HandleStoppedRiding) == 0x000008, "Wrong alignment on RiderComponent_HandleStoppedRiding");
static_assert(sizeof(RiderComponent_HandleStoppedRiding) == 0x000008, "Wrong size on RiderComponent_HandleStoppedRiding");
static_assert(offsetof(RiderComponent_HandleStoppedRiding, Ridable) == 0x000000, "Member 'RiderComponent_HandleStoppedRiding::Ridable' has a wrong offset!");

struct RiderComponent_OnMovementModeChanged final
{
public:
	class ACharacter*                             InCharacter;
	EMovementMode                                 PrevMovementMode;
	uint8                                         PreviousCustomMode;
	uint8                                         Pad_A[0x6];
};
static_assert(alignof(RiderComponent_OnMovementModeChanged) == 0x000008, "Wrong alignment on RiderComponent_OnMovementModeChanged");
static_assert(sizeof(RiderComponent_OnMovementModeChanged) == 0x000010, "Wrong size on RiderComponent_OnMovementModeChanged");
static_assert(offsetof(RiderComponent_OnMovementModeChanged, InCharacter) == 0x000000, "Member 'RiderComponent_OnMovementModeChanged::InCharacter' has a wrong offset!");
static_assert(offsetof(RiderComponent_OnMovementModeChanged, PrevMovementMode) == 0x000008, "Member 'RiderComponent_OnMovementModeChanged::PrevMovementMode' has a wrong offset!");
static_assert(offsetof(RiderComponent_OnMovementModeChanged, PreviousCustomMode) == 0x000009, "Member 'RiderComponent_OnMovementModeChanged::PreviousCustomMode' has a wrong offset!");

struct RiderComponent_StartRidingActor final
{
public:
	class AActor*                                 TargetActor;
	bool                                          ReturnValue;
	uint8                                         Pad_9[0x7];
};
static_assert(alignof(RiderComponent_StartRidingActor) == 0x000008, "Wrong alignment on RiderComponent_StartRidingActor");
static_assert(sizeof(RiderComponent_StartRidingActor) == 0x000010, "Wrong size on RiderComponent_StartRidingActor");
static_assert(offsetof(RiderComponent_StartRidingActor, TargetActor) == 0x000000, "Member 'RiderComponent_StartRidingActor::TargetActor' has a wrong offset!");
static_assert(offsetof(RiderComponent_StartRidingActor, ReturnValue) == 0x000008, "Member 'RiderComponent_StartRidingActor::ReturnValue' has a wrong offset!");

struct RiderComponent_StopRidingActor final
{
public:
	bool                                          bLaunchRider;
	bool                                          bFindDismountLocation;
	bool                                          bIsJumpExit;
	bool                                          ReturnValue;
};
static_assert(alignof(RiderComponent_StopRidingActor) == 0x000001, "Wrong alignment on RiderComponent_StopRidingActor");
static_assert(sizeof(RiderComponent_StopRidingActor) == 0x000004, "Wrong size on RiderComponent_StopRidingActor");
static_assert(offsetof(RiderComponent_StopRidingActor, bLaunchRider) == 0x000000, "Member 'RiderComponent_StopRidingActor::bLaunchRider' has a wrong offset!");
static_assert(offsetof(RiderComponent_StopRidingActor, bFindDismountLocation) == 0x000001, "Member 'RiderComponent_StopRidingActor::bFindDismountLocation' has a wrong offset!");
static_assert(offsetof(RiderComponent_StopRidingActor, bIsJumpExit) == 0x000002, "Member 'RiderComponent_StopRidingActor::bIsJumpExit' has a wrong offset!");
static_assert(offsetof(RiderComponent_StopRidingActor, ReturnValue) == 0x000003, "Member 'RiderComponent_StopRidingActor::ReturnValue' has a wrong offset!");

struct RiderComponent_IsRidingActor final
{
public:
	bool                                          ReturnValue;
};
static_assert(alignof(RiderComponent_IsRidingActor) == 0x000001, "Wrong alignment on RiderComponent_IsRidingActor");
static_assert(sizeof(RiderComponent_IsRidingActor) == 0x000001, "Wrong size on RiderComponent_IsRidingActor");
static_assert(offsetof(RiderComponent_IsRidingActor, ReturnValue) == 0x000000, "Member 'RiderComponent_IsRidingActor::ReturnValue' has a wrong offset!");

struct ControllingRiderComponent_ControllingActor_OnJumpInput final
{
public:
	bool                                          bPressed;
};
static_assert(alignof(ControllingRiderComponent_ControllingActor_OnJumpInput) == 0x000001, "Wrong alignment on ControllingRiderComponent_ControllingActor_OnJumpInput");
static_assert(sizeof(ControllingRiderComponent_ControllingActor_OnJumpInput) == 0x000001, "Wrong size on ControllingRiderComponent_ControllingActor_OnJumpInput");
static_assert(offsetof(ControllingRiderComponent_ControllingActor_OnJumpInput, bPressed) == 0x000000, "Member 'ControllingRiderComponent_ControllingActor_OnJumpInput::bPressed' has a wrong offset!");

struct ControllingRiderComponent_ControllingActor_OnMoveForward final
{
public:
	float                                         Val;
};
static_assert(alignof(ControllingRiderComponent_ControllingActor_OnMoveForward) == 0x000004, "Wrong alignment on ControllingRiderComponent_ControllingActor_OnMoveForward");
static_assert(sizeof(ControllingRiderComponent_ControllingActor_OnMoveForward) == 0x000004, "Wrong size on ControllingRiderComponent_ControllingActor_OnMoveForward");
static_assert(offsetof(ControllingRiderComponent_ControllingActor_OnMoveForward, Val) == 0x000000, "Member 'ControllingRiderComponent_ControllingActor_OnMoveForward::Val' has a wrong offset!");

struct ControllingRiderComponent_ControllingActor_OnMoveRight final
{
public:
	float                                         Val;
};
static_assert(alignof(ControllingRiderComponent_ControllingActor_OnMoveRight) == 0x000004, "Wrong alignment on ControllingRiderComponent_ControllingActor_OnMoveRight");
static_assert(sizeof(ControllingRiderComponent_ControllingActor_OnMoveRight) == 0x000004, "Wrong size on ControllingRiderComponent_ControllingActor_OnMoveRight");
static_assert(offsetof(ControllingRiderComponent_ControllingActor_OnMoveRight, Val) == 0x000000, "Member 'ControllingRiderComponent_ControllingActor_OnMoveRight::Val' has a wrong offset!");

struct ControllingRiderComponent_ServerUpdateControlInputStateReliable final
{
public:
	struct FRidingControlInputStateReliable       InputState;
};
static_assert(alignof(ControllingRiderComponent_ServerUpdateControlInputStateReliable) == 0x000001, "Wrong alignment on ControllingRiderComponent_ServerUpdateControlInputStateReliable");
static_assert(sizeof(ControllingRiderComponent_ServerUpdateControlInputStateReliable) == 0x000001, "Wrong size on ControllingRiderComponent_ServerUpdateControlInputStateReliable");
static_assert(offsetof(ControllingRiderComponent_ServerUpdateControlInputStateReliable, InputState) == 0x000000, "Member 'ControllingRiderComponent_ServerUpdateControlInputStateReliable::InputState' has a wrong offset!");

struct ControllingRiderComponent_ServerUpdateControlInputStateUnreliable final
{
public:
	struct FRidingControlInputStateUnreliable     InputState;
};
static_assert(alignof(ControllingRiderComponent_ServerUpdateControlInputStateUnreliable) == 0x000001, "Wrong alignment on ControllingRiderComponent_ServerUpdateControlInputStateUnreliable");
static_assert(sizeof(ControllingRiderComponent_ServerUpdateControlInputStateUnreliable) == 0x000002, "Wrong size on ControllingRiderComponent_ServerUpdateControlInputStateUnreliable");
static_assert(offsetof(ControllingRiderComponent_ServerUpdateControlInputStateUnreliable, InputState) == 0x000000, "Member 'ControllingRiderComponent_ServerUpdateControlInputStateUnreliable::InputState' has a wrong offset!");

struct ControllingRiderComponent_UpdateFromInput final
{
public:
	float                                         DeltaTime;
	struct FRidingControlInputState               InputState;
};
static_assert(alignof(ControllingRiderComponent_UpdateFromInput) == 0x000004, "Wrong alignment on ControllingRiderComponent_UpdateFromInput");
static_assert(sizeof(ControllingRiderComponent_UpdateFromInput) == 0x000010, "Wrong size on ControllingRiderComponent_UpdateFromInput");
static_assert(offsetof(ControllingRiderComponent_UpdateFromInput, DeltaTime) == 0x000000, "Member 'ControllingRiderComponent_UpdateFromInput::DeltaTime' has a wrong offset!");
static_assert(offsetof(ControllingRiderComponent_UpdateFromInput, InputState) == 0x000004, "Member 'ControllingRiderComponent_UpdateFromInput::InputState' has a wrong offset!");

struct ControllingRiderComponent_GetControlInputState final
{
public:
	struct FRidingControlInputState               ReturnValue;
};
static_assert(alignof(ControllingRiderComponent_GetControlInputState) == 0x000004, "Wrong alignment on ControllingRiderComponent_GetControlInputState");
static_assert(sizeof(ControllingRiderComponent_GetControlInputState) == 0x00000C, "Wrong size on ControllingRiderComponent_GetControlInputState");
static_assert(offsetof(ControllingRiderComponent_GetControlInputState, ReturnValue) == 0x000000, "Member 'ControllingRiderComponent_GetControlInputState::ReturnValue' has a wrong offset!");

struct ControllingRiderComponent_IsTryingToMove final
{
public:
	float                                         Tolerance;
	bool                                          ReturnValue;
	uint8                                         Pad_5[0x3];
};
static_assert(alignof(ControllingRiderComponent_IsTryingToMove) == 0x000004, "Wrong alignment on ControllingRiderComponent_IsTryingToMove");
static_assert(sizeof(ControllingRiderComponent_IsTryingToMove) == 0x000008, "Wrong size on ControllingRiderComponent_IsTryingToMove");
static_assert(offsetof(ControllingRiderComponent_IsTryingToMove, Tolerance) == 0x000000, "Member 'ControllingRiderComponent_IsTryingToMove::Tolerance' has a wrong offset!");
static_assert(offsetof(ControllingRiderComponent_IsTryingToMove, ReturnValue) == 0x000004, "Member 'ControllingRiderComponent_IsTryingToMove::ReturnValue' has a wrong offset!");

}
