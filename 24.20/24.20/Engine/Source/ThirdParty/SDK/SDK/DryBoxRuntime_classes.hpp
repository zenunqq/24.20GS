#pragma once

#include "Basic.hpp"

#include "GameplayAbilities_structs.hpp"
#include "FortniteGame_structs.hpp"
#include "FortniteGame_classes.hpp"
#include "Engine_structs.hpp"
#include "DryBoxRuntime_structs.hpp"

namespace SDK
{

class UNyxGlassWeaponComponent_Swinging final : public UFortWeaponComponent_Swinging
{
public:
	struct FScalableFloat                         SwingTargetRaycastDist;
	struct FScalableFloat                         AttackTargetRaycastDist;
	struct FScalableFloat                         CameraDistScale;
	struct FScalableFloat                         TargetingSphereRadius;
	struct FScalableFloat                         MaxAttachPointActorBoundsSize;
	struct FScalableFloat                         MaxAttachPointActorExtent;
	struct FScalableFloat                         MinAttachPointDistFromCamera;
	struct FScalableFloat                         MinAttachPointAngleInRad;
	struct FScalableFloat                         MaxSecondAttachPointDotProd;
	ECollisionChannel                             TargetingCollisionChannel;
	uint8                                         Pad_7C1[0x7];
	TArray<TSubclassOf<class AActor>>             DisallowedActorClasses;
	TArray<TSubclassOf<class AActor>>             DirectRaycastDisallowedActorClasses;
	TArray<EFortBuildingType>                     AllowedBuildingTypes;
	struct FScalableFloat                         SwingingAutoDetachDist;
	struct FScalableFloat                         AttackStartSlashDist;
	struct FScalableFloat                         MaxAcceleration;
	struct FScalableFloat                         GasOrthogonalPowerWhileAttacking;
	struct FScalableFloat                         GasOrthogonalPowerWhileSwinging;
	struct FScalableFloat                         GasReelInPowerSwinging;
	struct FScalableFloat                         GasReelInPowerAttacking;
	struct FScalableFloat                         bShouldInterpolateCurGasToGoal;
	struct FScalableFloat                         GasForceInterpSpeed;
	struct FScalableFloat                         bShouldAccelerateWhileAttached;
	struct FScalableFloat                         UnattachedDeaccelerationMultiplier;
	struct FScalableFloat                         AttachedDeaccelerationMultiplier;
	struct FScalableFloat                         TimeAttachedBeforeSpeedStartsIncreasing;
	struct FScalableFloat                         TimeAttachedForMaxSpeed;
	struct FScalableFloat                         MinAttachedSpeedMultiplier;
	struct FScalableFloat                         MaxAttachedSpeedMultiplier;
	struct FScalableFloat                         MinUnattachedSpeedMultiplier;
	struct FScalableFloat                         MaxSpeedMultiplier;
	struct FScalableFloat                         MaxSpeedDecreaseFromUpwardAngle;
	class UCurveFloat*                            SpeedBasedOnHeightCurve;
	struct FScalableFloat                         BaseSwingSpeed;
	struct FScalableFloat                         InitialAccelerationStartSpeed;
	struct FScalableFloat                         InitialAccelerationTime;
	class UCurveFloat*                            InitialAccelerationCurve;
	struct FScalableFloat                         SpeedSoftCapDrag;
	struct FScalableFloat                         SpeedHardCapFailsafe;
	struct FScalableFloat                         MaxHoverTime;
	struct FScalableFloat                         FullHoverRechargeTime;
	struct FScalableFloat                         DesiredHoverZSpeed;
	struct FScalableFloat                         HoverZMultiplier;
	struct FScalableFloat                         HoverTimeWhileUnequipped;
	struct FScalableFloat                         HoverZMultiplierWhileUnequipped;
	struct FScalableFloat                         SpeedSoftCapDragWhenHovering;
	struct FScalableFloat                         MaxHoverSpeed;
	struct FScalableFloat                         OldAttackDistanceXRange;
	struct FScalableFloat                         OldAttackDistanceYRange;
	struct FScalableFloat                         NewAttackDistanceXRange;
	struct FScalableFloat                         NewAttackDistanceYRange;
	class UCurveFloat*                            AttackAccelerationCurve;
	struct FScalableFloat                         ReelInForceAttackMinDist;
	struct FScalableFloat                         ReelInForceAttackMaxDist;
	struct FScalableFloat                         ReelInForceAttackMinMult;
	struct FScalableFloat                         ReelInForceAttackMaxMult;
	struct FScalableFloat                         AttackStartSpeed;
	struct FScalableFloat                         AttackMaxSpeed;
	struct FScalableFloat                         SpeedSoftCapDragWhenAttacking;
	struct FScalableFloat                         SlashLockDistance;
	struct FScalableFloat                         MinSlashDistToTarget;
	struct FScalableFloat                         SlashSpeed;
	struct FScalableFloat                         SlashLockTime;
	struct FScalableFloat                         SlashLeapBackTime;
	struct FScalableFloat                         SlashLeapBackHeightModifier;
	struct FScalableFloat                         SlashLeapBackSpeed;
	struct FScalableFloat                         Swinging_SwingGravityOverride;
	struct FScalableFloat                         Swinging_GravityMultiplierWhileAttachedOverride;
	struct FScalableFloat                         Swinging_bDisableGroundedSwingingCalcOverride;
	struct FScalableFloat                         Hovering_SwingGravityOverride;
	struct FScalableFloat                         Hovering_GravityMultiplierWhileAttachedOverride;
	struct FScalableFloat                         Hovering_bDisableGroundedSwingingCalcOverride;
	struct FScalableFloat                         Attacking_SwingGravityOverride;
	struct FScalableFloat                         Attacking_GravityMultiplierWhileAttachedOverride;
	struct FScalableFloat                         Attacking_bDisableGroundedSwingingCalcOverride;
	struct FScalableFloat                         LeapingBack_SwingGravityOverride;
	struct FScalableFloat                         LeapingBack_GravityMultiplierWhileAttachedOverride;
	struct FScalableFloat                         LeapingBack_bDisableGroundedSwingingCalcOverride;
	struct FScalableFloat                         LeapingBack_OverrideTimer;
	class FName                                   ActorHasPreferredSwingMeshTag;
	class FName                                   ComponentIsPreferredSwingMeshTag;
	bool                                          bUsingDirectRaycast;
	uint8                                         Pad_11F1[0x7];
	struct FNyxGlassTargetingData                 CurTargetingData;
	uint8                                         Pad_1240[0x200];

public:
	void EndSwingingSession();
	bool IsAttacking();
	void Multicast_SetTargetingDataOnRemoteClients(const struct FNyxGlassTargetingData& NewData);
	void OnAttached();
	void OnAttackStart();
	void OnBPWeaponFired();
	void OnDetached();
	void OnNyxGlassStateChanged(const ENyxGlassState OldState, const ENyxGlassState NewState);
	void OnServerTargetingDataReceived();
	void OnTargetingComplete(const struct FNyxGlassTargetingData& TargetingData);
	void OnWeaponFired();
	void OnWeaponUnequip(class AFortWeapon* Weapon);
	void Server_SetTargetingData(const struct FNyxGlassTargetingData& NewData);
	bool ShouldUpdateTargeting();
	void UpdateRopeVFX();

	float CalcInitialAccelerationAlpha() const;
	ENyxGlassSlashSubstate GetNyxGlassSlashSubstate() const;
	ENyxGlassState GetNyxGlassState() const;
	void OnVelocityCalculated(const struct FNyxGlassVelocityMetadata& VelocityMetadata) const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"NyxGlassWeaponComponent_Swinging">();
	}
	static class UNyxGlassWeaponComponent_Swinging* GetDefaultObj()
	{
		return GetDefaultObjImpl<UNyxGlassWeaponComponent_Swinging>();
	}
};
static_assert(alignof(UNyxGlassWeaponComponent_Swinging) == 0x000008, "Wrong alignment on UNyxGlassWeaponComponent_Swinging");
static_assert(sizeof(UNyxGlassWeaponComponent_Swinging) == 0x001440, "Wrong size on UNyxGlassWeaponComponent_Swinging");
static_assert(offsetof(UNyxGlassWeaponComponent_Swinging, SwingTargetRaycastDist) == 0x000658, "Member 'UNyxGlassWeaponComponent_Swinging::SwingTargetRaycastDist' has a wrong offset!");
static_assert(offsetof(UNyxGlassWeaponComponent_Swinging, AttackTargetRaycastDist) == 0x000680, "Member 'UNyxGlassWeaponComponent_Swinging::AttackTargetRaycastDist' has a wrong offset!");
static_assert(offsetof(UNyxGlassWeaponComponent_Swinging, CameraDistScale) == 0x0006A8, "Member 'UNyxGlassWeaponComponent_Swinging::CameraDistScale' has a wrong offset!");
static_assert(offsetof(UNyxGlassWeaponComponent_Swinging, TargetingSphereRadius) == 0x0006D0, "Member 'UNyxGlassWeaponComponent_Swinging::TargetingSphereRadius' has a wrong offset!");
static_assert(offsetof(UNyxGlassWeaponComponent_Swinging, MaxAttachPointActorBoundsSize) == 0x0006F8, "Member 'UNyxGlassWeaponComponent_Swinging::MaxAttachPointActorBoundsSize' has a wrong offset!");
static_assert(offsetof(UNyxGlassWeaponComponent_Swinging, MaxAttachPointActorExtent) == 0x000720, "Member 'UNyxGlassWeaponComponent_Swinging::MaxAttachPointActorExtent' has a wrong offset!");
static_assert(offsetof(UNyxGlassWeaponComponent_Swinging, MinAttachPointDistFromCamera) == 0x000748, "Member 'UNyxGlassWeaponComponent_Swinging::MinAttachPointDistFromCamera' has a wrong offset!");
static_assert(offsetof(UNyxGlassWeaponComponent_Swinging, MinAttachPointAngleInRad) == 0x000770, "Member 'UNyxGlassWeaponComponent_Swinging::MinAttachPointAngleInRad' has a wrong offset!");
static_assert(offsetof(UNyxGlassWeaponComponent_Swinging, MaxSecondAttachPointDotProd) == 0x000798, "Member 'UNyxGlassWeaponComponent_Swinging::MaxSecondAttachPointDotProd' has a wrong offset!");
static_assert(offsetof(UNyxGlassWeaponComponent_Swinging, TargetingCollisionChannel) == 0x0007C0, "Member 'UNyxGlassWeaponComponent_Swinging::TargetingCollisionChannel' has a wrong offset!");
static_assert(offsetof(UNyxGlassWeaponComponent_Swinging, DisallowedActorClasses) == 0x0007C8, "Member 'UNyxGlassWeaponComponent_Swinging::DisallowedActorClasses' has a wrong offset!");
static_assert(offsetof(UNyxGlassWeaponComponent_Swinging, DirectRaycastDisallowedActorClasses) == 0x0007D8, "Member 'UNyxGlassWeaponComponent_Swinging::DirectRaycastDisallowedActorClasses' has a wrong offset!");
static_assert(offsetof(UNyxGlassWeaponComponent_Swinging, AllowedBuildingTypes) == 0x0007E8, "Member 'UNyxGlassWeaponComponent_Swinging::AllowedBuildingTypes' has a wrong offset!");
static_assert(offsetof(UNyxGlassWeaponComponent_Swinging, SwingingAutoDetachDist) == 0x0007F8, "Member 'UNyxGlassWeaponComponent_Swinging::SwingingAutoDetachDist' has a wrong offset!");
static_assert(offsetof(UNyxGlassWeaponComponent_Swinging, AttackStartSlashDist) == 0x000820, "Member 'UNyxGlassWeaponComponent_Swinging::AttackStartSlashDist' has a wrong offset!");
static_assert(offsetof(UNyxGlassWeaponComponent_Swinging, MaxAcceleration) == 0x000848, "Member 'UNyxGlassWeaponComponent_Swinging::MaxAcceleration' has a wrong offset!");
static_assert(offsetof(UNyxGlassWeaponComponent_Swinging, GasOrthogonalPowerWhileAttacking) == 0x000870, "Member 'UNyxGlassWeaponComponent_Swinging::GasOrthogonalPowerWhileAttacking' has a wrong offset!");
static_assert(offsetof(UNyxGlassWeaponComponent_Swinging, GasOrthogonalPowerWhileSwinging) == 0x000898, "Member 'UNyxGlassWeaponComponent_Swinging::GasOrthogonalPowerWhileSwinging' has a wrong offset!");
static_assert(offsetof(UNyxGlassWeaponComponent_Swinging, GasReelInPowerSwinging) == 0x0008C0, "Member 'UNyxGlassWeaponComponent_Swinging::GasReelInPowerSwinging' has a wrong offset!");
static_assert(offsetof(UNyxGlassWeaponComponent_Swinging, GasReelInPowerAttacking) == 0x0008E8, "Member 'UNyxGlassWeaponComponent_Swinging::GasReelInPowerAttacking' has a wrong offset!");
static_assert(offsetof(UNyxGlassWeaponComponent_Swinging, bShouldInterpolateCurGasToGoal) == 0x000910, "Member 'UNyxGlassWeaponComponent_Swinging::bShouldInterpolateCurGasToGoal' has a wrong offset!");
static_assert(offsetof(UNyxGlassWeaponComponent_Swinging, GasForceInterpSpeed) == 0x000938, "Member 'UNyxGlassWeaponComponent_Swinging::GasForceInterpSpeed' has a wrong offset!");
static_assert(offsetof(UNyxGlassWeaponComponent_Swinging, bShouldAccelerateWhileAttached) == 0x000960, "Member 'UNyxGlassWeaponComponent_Swinging::bShouldAccelerateWhileAttached' has a wrong offset!");
static_assert(offsetof(UNyxGlassWeaponComponent_Swinging, UnattachedDeaccelerationMultiplier) == 0x000988, "Member 'UNyxGlassWeaponComponent_Swinging::UnattachedDeaccelerationMultiplier' has a wrong offset!");
static_assert(offsetof(UNyxGlassWeaponComponent_Swinging, AttachedDeaccelerationMultiplier) == 0x0009B0, "Member 'UNyxGlassWeaponComponent_Swinging::AttachedDeaccelerationMultiplier' has a wrong offset!");
static_assert(offsetof(UNyxGlassWeaponComponent_Swinging, TimeAttachedBeforeSpeedStartsIncreasing) == 0x0009D8, "Member 'UNyxGlassWeaponComponent_Swinging::TimeAttachedBeforeSpeedStartsIncreasing' has a wrong offset!");
static_assert(offsetof(UNyxGlassWeaponComponent_Swinging, TimeAttachedForMaxSpeed) == 0x000A00, "Member 'UNyxGlassWeaponComponent_Swinging::TimeAttachedForMaxSpeed' has a wrong offset!");
static_assert(offsetof(UNyxGlassWeaponComponent_Swinging, MinAttachedSpeedMultiplier) == 0x000A28, "Member 'UNyxGlassWeaponComponent_Swinging::MinAttachedSpeedMultiplier' has a wrong offset!");
static_assert(offsetof(UNyxGlassWeaponComponent_Swinging, MaxAttachedSpeedMultiplier) == 0x000A50, "Member 'UNyxGlassWeaponComponent_Swinging::MaxAttachedSpeedMultiplier' has a wrong offset!");
static_assert(offsetof(UNyxGlassWeaponComponent_Swinging, MinUnattachedSpeedMultiplier) == 0x000A78, "Member 'UNyxGlassWeaponComponent_Swinging::MinUnattachedSpeedMultiplier' has a wrong offset!");
static_assert(offsetof(UNyxGlassWeaponComponent_Swinging, MaxSpeedMultiplier) == 0x000AA0, "Member 'UNyxGlassWeaponComponent_Swinging::MaxSpeedMultiplier' has a wrong offset!");
static_assert(offsetof(UNyxGlassWeaponComponent_Swinging, MaxSpeedDecreaseFromUpwardAngle) == 0x000AC8, "Member 'UNyxGlassWeaponComponent_Swinging::MaxSpeedDecreaseFromUpwardAngle' has a wrong offset!");
static_assert(offsetof(UNyxGlassWeaponComponent_Swinging, SpeedBasedOnHeightCurve) == 0x000AF0, "Member 'UNyxGlassWeaponComponent_Swinging::SpeedBasedOnHeightCurve' has a wrong offset!");
static_assert(offsetof(UNyxGlassWeaponComponent_Swinging, BaseSwingSpeed) == 0x000AF8, "Member 'UNyxGlassWeaponComponent_Swinging::BaseSwingSpeed' has a wrong offset!");
static_assert(offsetof(UNyxGlassWeaponComponent_Swinging, InitialAccelerationStartSpeed) == 0x000B20, "Member 'UNyxGlassWeaponComponent_Swinging::InitialAccelerationStartSpeed' has a wrong offset!");
static_assert(offsetof(UNyxGlassWeaponComponent_Swinging, InitialAccelerationTime) == 0x000B48, "Member 'UNyxGlassWeaponComponent_Swinging::InitialAccelerationTime' has a wrong offset!");
static_assert(offsetof(UNyxGlassWeaponComponent_Swinging, InitialAccelerationCurve) == 0x000B70, "Member 'UNyxGlassWeaponComponent_Swinging::InitialAccelerationCurve' has a wrong offset!");
static_assert(offsetof(UNyxGlassWeaponComponent_Swinging, SpeedSoftCapDrag) == 0x000B78, "Member 'UNyxGlassWeaponComponent_Swinging::SpeedSoftCapDrag' has a wrong offset!");
static_assert(offsetof(UNyxGlassWeaponComponent_Swinging, SpeedHardCapFailsafe) == 0x000BA0, "Member 'UNyxGlassWeaponComponent_Swinging::SpeedHardCapFailsafe' has a wrong offset!");
static_assert(offsetof(UNyxGlassWeaponComponent_Swinging, MaxHoverTime) == 0x000BC8, "Member 'UNyxGlassWeaponComponent_Swinging::MaxHoverTime' has a wrong offset!");
static_assert(offsetof(UNyxGlassWeaponComponent_Swinging, FullHoverRechargeTime) == 0x000BF0, "Member 'UNyxGlassWeaponComponent_Swinging::FullHoverRechargeTime' has a wrong offset!");
static_assert(offsetof(UNyxGlassWeaponComponent_Swinging, DesiredHoverZSpeed) == 0x000C18, "Member 'UNyxGlassWeaponComponent_Swinging::DesiredHoverZSpeed' has a wrong offset!");
static_assert(offsetof(UNyxGlassWeaponComponent_Swinging, HoverZMultiplier) == 0x000C40, "Member 'UNyxGlassWeaponComponent_Swinging::HoverZMultiplier' has a wrong offset!");
static_assert(offsetof(UNyxGlassWeaponComponent_Swinging, HoverTimeWhileUnequipped) == 0x000C68, "Member 'UNyxGlassWeaponComponent_Swinging::HoverTimeWhileUnequipped' has a wrong offset!");
static_assert(offsetof(UNyxGlassWeaponComponent_Swinging, HoverZMultiplierWhileUnequipped) == 0x000C90, "Member 'UNyxGlassWeaponComponent_Swinging::HoverZMultiplierWhileUnequipped' has a wrong offset!");
static_assert(offsetof(UNyxGlassWeaponComponent_Swinging, SpeedSoftCapDragWhenHovering) == 0x000CB8, "Member 'UNyxGlassWeaponComponent_Swinging::SpeedSoftCapDragWhenHovering' has a wrong offset!");
static_assert(offsetof(UNyxGlassWeaponComponent_Swinging, MaxHoverSpeed) == 0x000CE0, "Member 'UNyxGlassWeaponComponent_Swinging::MaxHoverSpeed' has a wrong offset!");
static_assert(offsetof(UNyxGlassWeaponComponent_Swinging, OldAttackDistanceXRange) == 0x000D08, "Member 'UNyxGlassWeaponComponent_Swinging::OldAttackDistanceXRange' has a wrong offset!");
static_assert(offsetof(UNyxGlassWeaponComponent_Swinging, OldAttackDistanceYRange) == 0x000D30, "Member 'UNyxGlassWeaponComponent_Swinging::OldAttackDistanceYRange' has a wrong offset!");
static_assert(offsetof(UNyxGlassWeaponComponent_Swinging, NewAttackDistanceXRange) == 0x000D58, "Member 'UNyxGlassWeaponComponent_Swinging::NewAttackDistanceXRange' has a wrong offset!");
static_assert(offsetof(UNyxGlassWeaponComponent_Swinging, NewAttackDistanceYRange) == 0x000D80, "Member 'UNyxGlassWeaponComponent_Swinging::NewAttackDistanceYRange' has a wrong offset!");
static_assert(offsetof(UNyxGlassWeaponComponent_Swinging, AttackAccelerationCurve) == 0x000DA8, "Member 'UNyxGlassWeaponComponent_Swinging::AttackAccelerationCurve' has a wrong offset!");
static_assert(offsetof(UNyxGlassWeaponComponent_Swinging, ReelInForceAttackMinDist) == 0x000DB0, "Member 'UNyxGlassWeaponComponent_Swinging::ReelInForceAttackMinDist' has a wrong offset!");
static_assert(offsetof(UNyxGlassWeaponComponent_Swinging, ReelInForceAttackMaxDist) == 0x000DD8, "Member 'UNyxGlassWeaponComponent_Swinging::ReelInForceAttackMaxDist' has a wrong offset!");
static_assert(offsetof(UNyxGlassWeaponComponent_Swinging, ReelInForceAttackMinMult) == 0x000E00, "Member 'UNyxGlassWeaponComponent_Swinging::ReelInForceAttackMinMult' has a wrong offset!");
static_assert(offsetof(UNyxGlassWeaponComponent_Swinging, ReelInForceAttackMaxMult) == 0x000E28, "Member 'UNyxGlassWeaponComponent_Swinging::ReelInForceAttackMaxMult' has a wrong offset!");
static_assert(offsetof(UNyxGlassWeaponComponent_Swinging, AttackStartSpeed) == 0x000E50, "Member 'UNyxGlassWeaponComponent_Swinging::AttackStartSpeed' has a wrong offset!");
static_assert(offsetof(UNyxGlassWeaponComponent_Swinging, AttackMaxSpeed) == 0x000E78, "Member 'UNyxGlassWeaponComponent_Swinging::AttackMaxSpeed' has a wrong offset!");
static_assert(offsetof(UNyxGlassWeaponComponent_Swinging, SpeedSoftCapDragWhenAttacking) == 0x000EA0, "Member 'UNyxGlassWeaponComponent_Swinging::SpeedSoftCapDragWhenAttacking' has a wrong offset!");
static_assert(offsetof(UNyxGlassWeaponComponent_Swinging, SlashLockDistance) == 0x000EC8, "Member 'UNyxGlassWeaponComponent_Swinging::SlashLockDistance' has a wrong offset!");
static_assert(offsetof(UNyxGlassWeaponComponent_Swinging, MinSlashDistToTarget) == 0x000EF0, "Member 'UNyxGlassWeaponComponent_Swinging::MinSlashDistToTarget' has a wrong offset!");
static_assert(offsetof(UNyxGlassWeaponComponent_Swinging, SlashSpeed) == 0x000F18, "Member 'UNyxGlassWeaponComponent_Swinging::SlashSpeed' has a wrong offset!");
static_assert(offsetof(UNyxGlassWeaponComponent_Swinging, SlashLockTime) == 0x000F40, "Member 'UNyxGlassWeaponComponent_Swinging::SlashLockTime' has a wrong offset!");
static_assert(offsetof(UNyxGlassWeaponComponent_Swinging, SlashLeapBackTime) == 0x000F68, "Member 'UNyxGlassWeaponComponent_Swinging::SlashLeapBackTime' has a wrong offset!");
static_assert(offsetof(UNyxGlassWeaponComponent_Swinging, SlashLeapBackHeightModifier) == 0x000F90, "Member 'UNyxGlassWeaponComponent_Swinging::SlashLeapBackHeightModifier' has a wrong offset!");
static_assert(offsetof(UNyxGlassWeaponComponent_Swinging, SlashLeapBackSpeed) == 0x000FB8, "Member 'UNyxGlassWeaponComponent_Swinging::SlashLeapBackSpeed' has a wrong offset!");
static_assert(offsetof(UNyxGlassWeaponComponent_Swinging, Swinging_SwingGravityOverride) == 0x000FE0, "Member 'UNyxGlassWeaponComponent_Swinging::Swinging_SwingGravityOverride' has a wrong offset!");
static_assert(offsetof(UNyxGlassWeaponComponent_Swinging, Swinging_GravityMultiplierWhileAttachedOverride) == 0x001008, "Member 'UNyxGlassWeaponComponent_Swinging::Swinging_GravityMultiplierWhileAttachedOverride' has a wrong offset!");
static_assert(offsetof(UNyxGlassWeaponComponent_Swinging, Swinging_bDisableGroundedSwingingCalcOverride) == 0x001030, "Member 'UNyxGlassWeaponComponent_Swinging::Swinging_bDisableGroundedSwingingCalcOverride' has a wrong offset!");
static_assert(offsetof(UNyxGlassWeaponComponent_Swinging, Hovering_SwingGravityOverride) == 0x001058, "Member 'UNyxGlassWeaponComponent_Swinging::Hovering_SwingGravityOverride' has a wrong offset!");
static_assert(offsetof(UNyxGlassWeaponComponent_Swinging, Hovering_GravityMultiplierWhileAttachedOverride) == 0x001080, "Member 'UNyxGlassWeaponComponent_Swinging::Hovering_GravityMultiplierWhileAttachedOverride' has a wrong offset!");
static_assert(offsetof(UNyxGlassWeaponComponent_Swinging, Hovering_bDisableGroundedSwingingCalcOverride) == 0x0010A8, "Member 'UNyxGlassWeaponComponent_Swinging::Hovering_bDisableGroundedSwingingCalcOverride' has a wrong offset!");
static_assert(offsetof(UNyxGlassWeaponComponent_Swinging, Attacking_SwingGravityOverride) == 0x0010D0, "Member 'UNyxGlassWeaponComponent_Swinging::Attacking_SwingGravityOverride' has a wrong offset!");
static_assert(offsetof(UNyxGlassWeaponComponent_Swinging, Attacking_GravityMultiplierWhileAttachedOverride) == 0x0010F8, "Member 'UNyxGlassWeaponComponent_Swinging::Attacking_GravityMultiplierWhileAttachedOverride' has a wrong offset!");
static_assert(offsetof(UNyxGlassWeaponComponent_Swinging, Attacking_bDisableGroundedSwingingCalcOverride) == 0x001120, "Member 'UNyxGlassWeaponComponent_Swinging::Attacking_bDisableGroundedSwingingCalcOverride' has a wrong offset!");
static_assert(offsetof(UNyxGlassWeaponComponent_Swinging, LeapingBack_SwingGravityOverride) == 0x001148, "Member 'UNyxGlassWeaponComponent_Swinging::LeapingBack_SwingGravityOverride' has a wrong offset!");
static_assert(offsetof(UNyxGlassWeaponComponent_Swinging, LeapingBack_GravityMultiplierWhileAttachedOverride) == 0x001170, "Member 'UNyxGlassWeaponComponent_Swinging::LeapingBack_GravityMultiplierWhileAttachedOverride' has a wrong offset!");
static_assert(offsetof(UNyxGlassWeaponComponent_Swinging, LeapingBack_bDisableGroundedSwingingCalcOverride) == 0x001198, "Member 'UNyxGlassWeaponComponent_Swinging::LeapingBack_bDisableGroundedSwingingCalcOverride' has a wrong offset!");
static_assert(offsetof(UNyxGlassWeaponComponent_Swinging, LeapingBack_OverrideTimer) == 0x0011C0, "Member 'UNyxGlassWeaponComponent_Swinging::LeapingBack_OverrideTimer' has a wrong offset!");
static_assert(offsetof(UNyxGlassWeaponComponent_Swinging, ActorHasPreferredSwingMeshTag) == 0x0011E8, "Member 'UNyxGlassWeaponComponent_Swinging::ActorHasPreferredSwingMeshTag' has a wrong offset!");
static_assert(offsetof(UNyxGlassWeaponComponent_Swinging, ComponentIsPreferredSwingMeshTag) == 0x0011EC, "Member 'UNyxGlassWeaponComponent_Swinging::ComponentIsPreferredSwingMeshTag' has a wrong offset!");
static_assert(offsetof(UNyxGlassWeaponComponent_Swinging, bUsingDirectRaycast) == 0x0011F0, "Member 'UNyxGlassWeaponComponent_Swinging::bUsingDirectRaycast' has a wrong offset!");
static_assert(offsetof(UNyxGlassWeaponComponent_Swinging, CurTargetingData) == 0x0011F8, "Member 'UNyxGlassWeaponComponent_Swinging::CurTargetingData' has a wrong offset!");

class UNyxGlassFuelAttributeSet final : public UFortAttributeSet
{
public:
	uint8                                         Pad_30[0x8];
	struct FFortGameplayAttributeData             MaxFuel;
	struct FFortGameplayAttributeData             Fuel;
	struct FFortGameplayAttributeData             LocalFuel;

public:
	void OnRep_Fuel(const struct FFortGameplayAttributeData& OldValue);
	void OnRep_LocalFuel(const struct FFortGameplayAttributeData& OldValue);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"NyxGlassFuelAttributeSet">();
	}
	static class UNyxGlassFuelAttributeSet* GetDefaultObj()
	{
		return GetDefaultObjImpl<UNyxGlassFuelAttributeSet>();
	}
};
static_assert(alignof(UNyxGlassFuelAttributeSet) == 0x000008, "Wrong alignment on UNyxGlassFuelAttributeSet");
static_assert(sizeof(UNyxGlassFuelAttributeSet) == 0x0000B0, "Wrong size on UNyxGlassFuelAttributeSet");
static_assert(offsetof(UNyxGlassFuelAttributeSet, MaxFuel) == 0x000038, "Member 'UNyxGlassFuelAttributeSet::MaxFuel' has a wrong offset!");
static_assert(offsetof(UNyxGlassFuelAttributeSet, Fuel) == 0x000060, "Member 'UNyxGlassFuelAttributeSet::Fuel' has a wrong offset!");
static_assert(offsetof(UNyxGlassFuelAttributeSet, LocalFuel) == 0x000088, "Member 'UNyxGlassFuelAttributeSet::LocalFuel' has a wrong offset!");

class UNyxGlassSwingingMovementControls final : public UFortMovementControls
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"NyxGlassSwingingMovementControls">();
	}
	static class UNyxGlassSwingingMovementControls* GetDefaultObj()
	{
		return GetDefaultObjImpl<UNyxGlassSwingingMovementControls>();
	}
};
static_assert(alignof(UNyxGlassSwingingMovementControls) == 0x000008, "Wrong alignment on UNyxGlassSwingingMovementControls");
static_assert(sizeof(UNyxGlassSwingingMovementControls) == 0x000030, "Wrong size on UNyxGlassSwingingMovementControls");

}
