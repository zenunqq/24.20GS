#pragma once

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "NevadaRuntime_structs.hpp"

namespace SDK::Params
{

struct FortNevadaVehicle_AddPhysicsImpulseToTractorBeamAttachedActor final
{
public:
	struct FVector                                Impulse;
	class FName                                   BoneName;
	bool                                          bVelChange;
	uint8                                         Pad_1D[0x3];
};
static_assert(alignof(FortNevadaVehicle_AddPhysicsImpulseToTractorBeamAttachedActor) == 0x000008, "Wrong alignment on FortNevadaVehicle_AddPhysicsImpulseToTractorBeamAttachedActor");
static_assert(sizeof(FortNevadaVehicle_AddPhysicsImpulseToTractorBeamAttachedActor) == 0x000020, "Wrong size on FortNevadaVehicle_AddPhysicsImpulseToTractorBeamAttachedActor");
static_assert(offsetof(FortNevadaVehicle_AddPhysicsImpulseToTractorBeamAttachedActor, Impulse) == 0x000000, "Member 'FortNevadaVehicle_AddPhysicsImpulseToTractorBeamAttachedActor::Impulse' has a wrong offset!");
static_assert(offsetof(FortNevadaVehicle_AddPhysicsImpulseToTractorBeamAttachedActor, BoneName) == 0x000018, "Member 'FortNevadaVehicle_AddPhysicsImpulseToTractorBeamAttachedActor::BoneName' has a wrong offset!");
static_assert(offsetof(FortNevadaVehicle_AddPhysicsImpulseToTractorBeamAttachedActor, bVelChange) == 0x00001C, "Member 'FortNevadaVehicle_AddPhysicsImpulseToTractorBeamAttachedActor::bVelChange' has a wrong offset!");

struct FortNevadaVehicle_EnablePilotBubbleCollisionOnServer final
{
public:
	bool                                          bNewCollisionEnabled;
};
static_assert(alignof(FortNevadaVehicle_EnablePilotBubbleCollisionOnServer) == 0x000001, "Wrong alignment on FortNevadaVehicle_EnablePilotBubbleCollisionOnServer");
static_assert(sizeof(FortNevadaVehicle_EnablePilotBubbleCollisionOnServer) == 0x000001, "Wrong size on FortNevadaVehicle_EnablePilotBubbleCollisionOnServer");
static_assert(offsetof(FortNevadaVehicle_EnablePilotBubbleCollisionOnServer, bNewCollisionEnabled) == 0x000000, "Member 'FortNevadaVehicle_EnablePilotBubbleCollisionOnServer::bNewCollisionEnabled' has a wrong offset!");

struct FortNevadaVehicle_GetDriverSeatRotationAnimParams final
{
public:
	float                                         OutLeftRight;
	float                                         OutForwardBack;
};
static_assert(alignof(FortNevadaVehicle_GetDriverSeatRotationAnimParams) == 0x000004, "Wrong alignment on FortNevadaVehicle_GetDriverSeatRotationAnimParams");
static_assert(sizeof(FortNevadaVehicle_GetDriverSeatRotationAnimParams) == 0x000008, "Wrong size on FortNevadaVehicle_GetDriverSeatRotationAnimParams");
static_assert(offsetof(FortNevadaVehicle_GetDriverSeatRotationAnimParams, OutLeftRight) == 0x000000, "Member 'FortNevadaVehicle_GetDriverSeatRotationAnimParams::OutLeftRight' has a wrong offset!");
static_assert(offsetof(FortNevadaVehicle_GetDriverSeatRotationAnimParams, OutForwardBack) == 0x000004, "Member 'FortNevadaVehicle_GetDriverSeatRotationAnimParams::OutForwardBack' has a wrong offset!");

struct FortNevadaVehicle_NativeToggleCockpit final
{
public:
	bool                                          bEnable;
};
static_assert(alignof(FortNevadaVehicle_NativeToggleCockpit) == 0x000001, "Wrong alignment on FortNevadaVehicle_NativeToggleCockpit");
static_assert(sizeof(FortNevadaVehicle_NativeToggleCockpit) == 0x000001, "Wrong size on FortNevadaVehicle_NativeToggleCockpit");
static_assert(offsetof(FortNevadaVehicle_NativeToggleCockpit, bEnable) == 0x000000, "Member 'FortNevadaVehicle_NativeToggleCockpit::bEnable' has a wrong offset!");

struct FortNevadaVehicle_OnAttachedActorDestroyed final
{
public:
	class AActor*                                 DestroyedActor;
};
static_assert(alignof(FortNevadaVehicle_OnAttachedActorDestroyed) == 0x000008, "Wrong alignment on FortNevadaVehicle_OnAttachedActorDestroyed");
static_assert(sizeof(FortNevadaVehicle_OnAttachedActorDestroyed) == 0x000008, "Wrong size on FortNevadaVehicle_OnAttachedActorDestroyed");
static_assert(offsetof(FortNevadaVehicle_OnAttachedActorDestroyed, DestroyedActor) == 0x000000, "Member 'FortNevadaVehicle_OnAttachedActorDestroyed::DestroyedActor' has a wrong offset!");

struct FortNevadaVehicle_OnAttachedActorDied final
{
public:
	class AActor*                                 DamagedActor;
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
static_assert(alignof(FortNevadaVehicle_OnAttachedActorDied) == 0x000008, "Wrong alignment on FortNevadaVehicle_OnAttachedActorDied");
static_assert(sizeof(FortNevadaVehicle_OnAttachedActorDied) == 0x000060, "Wrong size on FortNevadaVehicle_OnAttachedActorDied");
static_assert(offsetof(FortNevadaVehicle_OnAttachedActorDied, DamagedActor) == 0x000000, "Member 'FortNevadaVehicle_OnAttachedActorDied::DamagedActor' has a wrong offset!");
static_assert(offsetof(FortNevadaVehicle_OnAttachedActorDied, Damage) == 0x000008, "Member 'FortNevadaVehicle_OnAttachedActorDied::Damage' has a wrong offset!");
static_assert(offsetof(FortNevadaVehicle_OnAttachedActorDied, InstigatedBy) == 0x000010, "Member 'FortNevadaVehicle_OnAttachedActorDied::InstigatedBy' has a wrong offset!");
static_assert(offsetof(FortNevadaVehicle_OnAttachedActorDied, DamageCauser) == 0x000018, "Member 'FortNevadaVehicle_OnAttachedActorDied::DamageCauser' has a wrong offset!");
static_assert(offsetof(FortNevadaVehicle_OnAttachedActorDied, HitLocation) == 0x000020, "Member 'FortNevadaVehicle_OnAttachedActorDied::HitLocation' has a wrong offset!");
static_assert(offsetof(FortNevadaVehicle_OnAttachedActorDied, FHitComponent) == 0x000038, "Member 'FortNevadaVehicle_OnAttachedActorDied::FHitComponent' has a wrong offset!");
static_assert(offsetof(FortNevadaVehicle_OnAttachedActorDied, BoneName) == 0x000040, "Member 'FortNevadaVehicle_OnAttachedActorDied::BoneName' has a wrong offset!");
static_assert(offsetof(FortNevadaVehicle_OnAttachedActorDied, Momentum) == 0x000048, "Member 'FortNevadaVehicle_OnAttachedActorDied::Momentum' has a wrong offset!");

struct FortNevadaVehicle_OnBatteryRegen final
{
public:
	float                                         Newcharge;
};
static_assert(alignof(FortNevadaVehicle_OnBatteryRegen) == 0x000004, "Wrong alignment on FortNevadaVehicle_OnBatteryRegen");
static_assert(sizeof(FortNevadaVehicle_OnBatteryRegen) == 0x000004, "Wrong size on FortNevadaVehicle_OnBatteryRegen");
static_assert(offsetof(FortNevadaVehicle_OnBatteryRegen, Newcharge) == 0x000000, "Member 'FortNevadaVehicle_OnBatteryRegen::Newcharge' has a wrong offset!");

struct FortNevadaVehicle_OnNewVehicleState final
{
public:
	ENevadaFlightStates                           NewVehicleState;
};
static_assert(alignof(FortNevadaVehicle_OnNewVehicleState) == 0x000001, "Wrong alignment on FortNevadaVehicle_OnNewVehicleState");
static_assert(sizeof(FortNevadaVehicle_OnNewVehicleState) == 0x000001, "Wrong size on FortNevadaVehicle_OnNewVehicleState");
static_assert(offsetof(FortNevadaVehicle_OnNewVehicleState, NewVehicleState) == 0x000000, "Member 'FortNevadaVehicle_OnNewVehicleState::NewVehicleState' has a wrong offset!");

struct FortNevadaVehicle_OnRep_NevadaState final
{
public:
	struct FNevadaState                           PrevState;
};
static_assert(alignof(FortNevadaVehicle_OnRep_NevadaState) == 0x000004, "Wrong alignment on FortNevadaVehicle_OnRep_NevadaState");
static_assert(sizeof(FortNevadaVehicle_OnRep_NevadaState) == 0x000014, "Wrong size on FortNevadaVehicle_OnRep_NevadaState");
static_assert(offsetof(FortNevadaVehicle_OnRep_NevadaState, PrevState) == 0x000000, "Member 'FortNevadaVehicle_OnRep_NevadaState::PrevState' has a wrong offset!");

struct FortNevadaVehicle_OnRep_TractorBeamState final
{
public:
	ETractorBeamState                             PreviousState;
};
static_assert(alignof(FortNevadaVehicle_OnRep_TractorBeamState) == 0x000001, "Wrong alignment on FortNevadaVehicle_OnRep_TractorBeamState");
static_assert(sizeof(FortNevadaVehicle_OnRep_TractorBeamState) == 0x000001, "Wrong size on FortNevadaVehicle_OnRep_TractorBeamState");
static_assert(offsetof(FortNevadaVehicle_OnRep_TractorBeamState, PreviousState) == 0x000000, "Member 'FortNevadaVehicle_OnRep_TractorBeamState::PreviousState' has a wrong offset!");

struct FortNevadaVehicle_OnTargetedActorChanged final
{
public:
	class AActor*                                 NewTargetedActor;
};
static_assert(alignof(FortNevadaVehicle_OnTargetedActorChanged) == 0x000008, "Wrong alignment on FortNevadaVehicle_OnTargetedActorChanged");
static_assert(sizeof(FortNevadaVehicle_OnTargetedActorChanged) == 0x000008, "Wrong size on FortNevadaVehicle_OnTargetedActorChanged");
static_assert(offsetof(FortNevadaVehicle_OnTargetedActorChanged, NewTargetedActor) == 0x000000, "Member 'FortNevadaVehicle_OnTargetedActorChanged::NewTargetedActor' has a wrong offset!");

struct FortNevadaVehicle_OnTractorBeamDeactivated final
{
public:
	struct FVector                                LastBeamPosition;
};
static_assert(alignof(FortNevadaVehicle_OnTractorBeamDeactivated) == 0x000008, "Wrong alignment on FortNevadaVehicle_OnTractorBeamDeactivated");
static_assert(sizeof(FortNevadaVehicle_OnTractorBeamDeactivated) == 0x000018, "Wrong size on FortNevadaVehicle_OnTractorBeamDeactivated");
static_assert(offsetof(FortNevadaVehicle_OnTractorBeamDeactivated, LastBeamPosition) == 0x000000, "Member 'FortNevadaVehicle_OnTractorBeamDeactivated::LastBeamPosition' has a wrong offset!");

struct FortNevadaVehicle_OnTractorBeamDetached final
{
public:
	class AActor*                                 DetachedActor;
	struct FVector                                LastBeamPosition;
};
static_assert(alignof(FortNevadaVehicle_OnTractorBeamDetached) == 0x000008, "Wrong alignment on FortNevadaVehicle_OnTractorBeamDetached");
static_assert(sizeof(FortNevadaVehicle_OnTractorBeamDetached) == 0x000020, "Wrong size on FortNevadaVehicle_OnTractorBeamDetached");
static_assert(offsetof(FortNevadaVehicle_OnTractorBeamDetached, DetachedActor) == 0x000000, "Member 'FortNevadaVehicle_OnTractorBeamDetached::DetachedActor' has a wrong offset!");
static_assert(offsetof(FortNevadaVehicle_OnTractorBeamDetached, LastBeamPosition) == 0x000008, "Member 'FortNevadaVehicle_OnTractorBeamDetached::LastBeamPosition' has a wrong offset!");

struct FortNevadaVehicle_SetAttachedPawnAddedVelocity final
{
public:
	struct FVector                                AddedVelocity;
};
static_assert(alignof(FortNevadaVehicle_SetAttachedPawnAddedVelocity) == 0x000008, "Wrong alignment on FortNevadaVehicle_SetAttachedPawnAddedVelocity");
static_assert(sizeof(FortNevadaVehicle_SetAttachedPawnAddedVelocity) == 0x000018, "Wrong size on FortNevadaVehicle_SetAttachedPawnAddedVelocity");
static_assert(offsetof(FortNevadaVehicle_SetAttachedPawnAddedVelocity, AddedVelocity) == 0x000000, "Member 'FortNevadaVehicle_SetAttachedPawnAddedVelocity::AddedVelocity' has a wrong offset!");

struct FortNevadaVehicle_SetCannonEnabled final
{
public:
	bool                                          bEnabled;
};
static_assert(alignof(FortNevadaVehicle_SetCannonEnabled) == 0x000001, "Wrong alignment on FortNevadaVehicle_SetCannonEnabled");
static_assert(sizeof(FortNevadaVehicle_SetCannonEnabled) == 0x000001, "Wrong size on FortNevadaVehicle_SetCannonEnabled");
static_assert(offsetof(FortNevadaVehicle_SetCannonEnabled, bEnabled) == 0x000000, "Member 'FortNevadaVehicle_SetCannonEnabled::bEnabled' has a wrong offset!");

struct FortNevadaVehicle_SetTractorBeamEnabled final
{
public:
	bool                                          bEnabled;
};
static_assert(alignof(FortNevadaVehicle_SetTractorBeamEnabled) == 0x000001, "Wrong alignment on FortNevadaVehicle_SetTractorBeamEnabled");
static_assert(sizeof(FortNevadaVehicle_SetTractorBeamEnabled) == 0x000001, "Wrong size on FortNevadaVehicle_SetTractorBeamEnabled");
static_assert(offsetof(FortNevadaVehicle_SetTractorBeamEnabled, bEnabled) == 0x000000, "Member 'FortNevadaVehicle_SetTractorBeamEnabled::bEnabled' has a wrong offset!");

struct FortNevadaVehicle_GetAudioController final
{
public:
	class AFortNevadaAudioController*             ReturnValue;
};
static_assert(alignof(FortNevadaVehicle_GetAudioController) == 0x000008, "Wrong alignment on FortNevadaVehicle_GetAudioController");
static_assert(sizeof(FortNevadaVehicle_GetAudioController) == 0x000008, "Wrong size on FortNevadaVehicle_GetAudioController");
static_assert(offsetof(FortNevadaVehicle_GetAudioController, ReturnValue) == 0x000000, "Member 'FortNevadaVehicle_GetAudioController::ReturnValue' has a wrong offset!");

struct FortNevadaVehicle_GetBatteryCharge final
{
public:
	float                                         ReturnValue;
};
static_assert(alignof(FortNevadaVehicle_GetBatteryCharge) == 0x000004, "Wrong alignment on FortNevadaVehicle_GetBatteryCharge");
static_assert(sizeof(FortNevadaVehicle_GetBatteryCharge) == 0x000004, "Wrong size on FortNevadaVehicle_GetBatteryCharge");
static_assert(offsetof(FortNevadaVehicle_GetBatteryCharge, ReturnValue) == 0x000000, "Member 'FortNevadaVehicle_GetBatteryCharge::ReturnValue' has a wrong offset!");

struct FortNevadaVehicle_GetBoostChargeProgress final
{
public:
	float                                         ReturnValue;
};
static_assert(alignof(FortNevadaVehicle_GetBoostChargeProgress) == 0x000004, "Wrong alignment on FortNevadaVehicle_GetBoostChargeProgress");
static_assert(sizeof(FortNevadaVehicle_GetBoostChargeProgress) == 0x000004, "Wrong size on FortNevadaVehicle_GetBoostChargeProgress");
static_assert(offsetof(FortNevadaVehicle_GetBoostChargeProgress, ReturnValue) == 0x000000, "Member 'FortNevadaVehicle_GetBoostChargeProgress::ReturnValue' has a wrong offset!");

struct FortNevadaVehicle_GetBoostChargesAvailable final
{
public:
	int32                                         ReturnValue;
};
static_assert(alignof(FortNevadaVehicle_GetBoostChargesAvailable) == 0x000004, "Wrong alignment on FortNevadaVehicle_GetBoostChargesAvailable");
static_assert(sizeof(FortNevadaVehicle_GetBoostChargesAvailable) == 0x000004, "Wrong size on FortNevadaVehicle_GetBoostChargesAvailable");
static_assert(offsetof(FortNevadaVehicle_GetBoostChargesAvailable, ReturnValue) == 0x000000, "Member 'FortNevadaVehicle_GetBoostChargesAvailable::ReturnValue' has a wrong offset!");

struct FortNevadaVehicle_GetBoostChargeTimeRemaining final
{
public:
	float                                         ReturnValue;
};
static_assert(alignof(FortNevadaVehicle_GetBoostChargeTimeRemaining) == 0x000004, "Wrong alignment on FortNevadaVehicle_GetBoostChargeTimeRemaining");
static_assert(sizeof(FortNevadaVehicle_GetBoostChargeTimeRemaining) == 0x000004, "Wrong size on FortNevadaVehicle_GetBoostChargeTimeRemaining");
static_assert(offsetof(FortNevadaVehicle_GetBoostChargeTimeRemaining, ReturnValue) == 0x000000, "Member 'FortNevadaVehicle_GetBoostChargeTimeRemaining::ReturnValue' has a wrong offset!");

struct FortNevadaVehicle_GetCurrentVehicleState final
{
public:
	ENevadaFlightStates                           ReturnValue;
};
static_assert(alignof(FortNevadaVehicle_GetCurrentVehicleState) == 0x000001, "Wrong alignment on FortNevadaVehicle_GetCurrentVehicleState");
static_assert(sizeof(FortNevadaVehicle_GetCurrentVehicleState) == 0x000001, "Wrong size on FortNevadaVehicle_GetCurrentVehicleState");
static_assert(offsetof(FortNevadaVehicle_GetCurrentVehicleState, ReturnValue) == 0x000000, "Member 'FortNevadaVehicle_GetCurrentVehicleState::ReturnValue' has a wrong offset!");

struct FortNevadaVehicle_GetEnergyCanonChargePercent final
{
public:
	float                                         ReturnValue;
};
static_assert(alignof(FortNevadaVehicle_GetEnergyCanonChargePercent) == 0x000004, "Wrong alignment on FortNevadaVehicle_GetEnergyCanonChargePercent");
static_assert(sizeof(FortNevadaVehicle_GetEnergyCanonChargePercent) == 0x000004, "Wrong size on FortNevadaVehicle_GetEnergyCanonChargePercent");
static_assert(offsetof(FortNevadaVehicle_GetEnergyCanonChargePercent, ReturnValue) == 0x000000, "Member 'FortNevadaVehicle_GetEnergyCanonChargePercent::ReturnValue' has a wrong offset!");

struct FortNevadaVehicle_GetNumRebootsAvailable final
{
public:
	int32                                         ReturnValue;
};
static_assert(alignof(FortNevadaVehicle_GetNumRebootsAvailable) == 0x000004, "Wrong alignment on FortNevadaVehicle_GetNumRebootsAvailable");
static_assert(sizeof(FortNevadaVehicle_GetNumRebootsAvailable) == 0x000004, "Wrong size on FortNevadaVehicle_GetNumRebootsAvailable");
static_assert(offsetof(FortNevadaVehicle_GetNumRebootsAvailable, ReturnValue) == 0x000000, "Member 'FortNevadaVehicle_GetNumRebootsAvailable::ReturnValue' has a wrong offset!");

struct FortNevadaVehicle_GetTractorBeamAttachLocation final
{
public:
	struct FVector                                ReturnValue;
};
static_assert(alignof(FortNevadaVehicle_GetTractorBeamAttachLocation) == 0x000008, "Wrong alignment on FortNevadaVehicle_GetTractorBeamAttachLocation");
static_assert(sizeof(FortNevadaVehicle_GetTractorBeamAttachLocation) == 0x000018, "Wrong size on FortNevadaVehicle_GetTractorBeamAttachLocation");
static_assert(offsetof(FortNevadaVehicle_GetTractorBeamAttachLocation, ReturnValue) == 0x000000, "Member 'FortNevadaVehicle_GetTractorBeamAttachLocation::ReturnValue' has a wrong offset!");

struct FortNevadaVehicle_IsTractorBeamActive final
{
public:
	bool                                          ReturnValue;
};
static_assert(alignof(FortNevadaVehicle_IsTractorBeamActive) == 0x000001, "Wrong alignment on FortNevadaVehicle_IsTractorBeamActive");
static_assert(sizeof(FortNevadaVehicle_IsTractorBeamActive) == 0x000001, "Wrong size on FortNevadaVehicle_IsTractorBeamActive");
static_assert(offsetof(FortNevadaVehicle_IsTractorBeamActive, ReturnValue) == 0x000000, "Member 'FortNevadaVehicle_IsTractorBeamActive::ReturnValue' has a wrong offset!");

struct FortNevadaVehicle_IsTractorBeamAttached final
{
public:
	bool                                          ReturnValue;
};
static_assert(alignof(FortNevadaVehicle_IsTractorBeamAttached) == 0x000001, "Wrong alignment on FortNevadaVehicle_IsTractorBeamAttached");
static_assert(sizeof(FortNevadaVehicle_IsTractorBeamAttached) == 0x000001, "Wrong size on FortNevadaVehicle_IsTractorBeamAttached");
static_assert(offsetof(FortNevadaVehicle_IsTractorBeamAttached, ReturnValue) == 0x000000, "Member 'FortNevadaVehicle_IsTractorBeamAttached::ReturnValue' has a wrong offset!");

struct FortNevadaVehicle_IsTractorBeamDisrupted final
{
public:
	bool                                          ReturnValue;
};
static_assert(alignof(FortNevadaVehicle_IsTractorBeamDisrupted) == 0x000001, "Wrong alignment on FortNevadaVehicle_IsTractorBeamDisrupted");
static_assert(sizeof(FortNevadaVehicle_IsTractorBeamDisrupted) == 0x000001, "Wrong size on FortNevadaVehicle_IsTractorBeamDisrupted");
static_assert(offsetof(FortNevadaVehicle_IsTractorBeamDisrupted, ReturnValue) == 0x000000, "Member 'FortNevadaVehicle_IsTractorBeamDisrupted::ReturnValue' has a wrong offset!");

struct FortNevadaAudioController_CacheReferences final
{
public:
	class UFortLayeredAudioComponent*             InLayeredAudioComponent;
};
static_assert(alignof(FortNevadaAudioController_CacheReferences) == 0x000008, "Wrong alignment on FortNevadaAudioController_CacheReferences");
static_assert(sizeof(FortNevadaAudioController_CacheReferences) == 0x000008, "Wrong size on FortNevadaAudioController_CacheReferences");
static_assert(offsetof(FortNevadaAudioController_CacheReferences, InLayeredAudioComponent) == 0x000000, "Member 'FortNevadaAudioController_CacheReferences::InLayeredAudioComponent' has a wrong offset!");

struct FortNevadaAudioController_Init final
{
public:
	class AFortNevadaVehicle*                     InVehicle;
};
static_assert(alignof(FortNevadaAudioController_Init) == 0x000008, "Wrong alignment on FortNevadaAudioController_Init");
static_assert(sizeof(FortNevadaAudioController_Init) == 0x000008, "Wrong size on FortNevadaAudioController_Init");
static_assert(offsetof(FortNevadaAudioController_Init, InVehicle) == 0x000000, "Member 'FortNevadaAudioController_Init::InVehicle' has a wrong offset!");

struct FortNevadaAudioController_GetVehicleActor final
{
public:
	class AFortNevadaVehicle*                     ReturnValue;
};
static_assert(alignof(FortNevadaAudioController_GetVehicleActor) == 0x000008, "Wrong alignment on FortNevadaAudioController_GetVehicleActor");
static_assert(sizeof(FortNevadaAudioController_GetVehicleActor) == 0x000008, "Wrong size on FortNevadaAudioController_GetVehicleActor");
static_assert(offsetof(FortNevadaAudioController_GetVehicleActor, ReturnValue) == 0x000000, "Member 'FortNevadaAudioController_GetVehicleActor::ReturnValue' has a wrong offset!");

}
