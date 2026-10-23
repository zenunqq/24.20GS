#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Engine_classes.hpp"
#include "NevadaRuntime_structs.hpp"
#include "GameplayTags_structs.hpp"
#include "GameplayAbilities_structs.hpp"
#include "FortniteGame_structs.hpp"
#include "FortniteGame_classes.hpp"
#include "CoreUObject_structs.hpp"

namespace SDK
{

class AFortNevadaVehicle final : public AFortAthenaSKVehicle
{
public:
	struct FNevadaState                           ServerReplicatedState;
	uint8                                         Pad_1AC4[0x4];
	class UFortNevadaVehicleConfigs*              FortNevadaVehicleConfigs;
	TSubclassOf<class AFortNevadaAudioController> FortNevadaAudioControllerClass;
	class UChildActorComponent*                   AudioControllerActor;
	class AFortNevadaAudioController*             FortNevadaAudioController;
	struct FVehicleGamepadLiftInputs              LiftInputs;
	float                                         LastBatteryRegenTickTime;
	bool                                          bBoostThrust;
	bool                                          bBoostDrag;
	bool                                          bBoostInputReleased;
	bool                                          bUseTractorBeamUprightForce;
	bool                                          bDeadBattery;
	uint8                                         Pad_1AF9[0x3];
	float                                         TractorBeamExtraLengthForExtents;
	struct FVector                                CrashingDesiredUp;
	float                                         BoostStartTime;
	float                                         BoostPitchAlpha;
	float                                         BoostChargeProgress;
	int32                                         BoostChargesAvailable;
	struct FVector                                CachedBoostMoveDir;
	float                                         CurrentStateStartTime;
	float                                         HeightAtLandingTime;
	float                                         CrashingScrapingTime;
	float                                         CrashingNotMovingTimer;
	float                                         AltimeterTraceHitDistance;
	float                                         TractorBeamAppliedForceMagnitude;
	float                                         AnimParamDriverSeatLeftRight;
	float                                         AnimParamDriverSeatForwardBack;
	bool                                          bForceNegativeLift;
	bool                                          bForcePositiveLift;
	bool                                          bInitialLift;
	ENevadaFlightStates                           CurrentVehicleState;
	uint8                                         Pad_1B64[0x4C];
	TWeakObjectPtr<class ALandscapeProxy>         CachedLandscapeProxy;
	TSubclassOf<class UFortCameraMode_AthenaVehicle> PassengerCameraModeClass;
	bool                                          bTractorBeamChargeStarted;
	uint8                                         Pad_1BC1[0x7];
	struct FTowhookParams                         TowhookParams;
	TSubclassOf<class AFortAthenaVehicle>         AttachedPawnHiddenVehicle;
	TWeakObjectPtr<class UPrimitiveComponent>     TractorBeamAttachedPrimitive;
	class AFortAthenaVehicle*                     SpawnedTractorBeamVictimVehicle;
	TWeakObjectPtr<class UPrimitiveComponent>     PreviousTractorBeamAttachedPrimitive;
	TArray<class AActor*>                         TractorBeamTargetedActors;
	TArray<class AActor*>                         PreviouslyTargetedActors;
	class AActor*                                 TractorBeamAttachedActor;
	class AActor*                                 TractorBeamTargetedActor;
	struct FVector                                TractorBeamTargetPosition;
	uint8                                         Pad_1D00[0x1];
	bool                                          bBeamButtonReleased;
	uint8                                         Pad_1D02[0x6];
	TArray<EObjectTypeQuery>                      TractorBeamObjectsTypes;
	struct FGameplayTagContainer                  DisallowedBeamTags;
	struct FGameplayTagContainer                  AlwaysAllowedBeamTags;
	uint8                                         Pad_1D58[0x98];
	class UNiagaraSystem*                         TractorBeamFX_Unattached;
	class UNiagaraSystem*                         TractorBeamFX_Attached;
	class UNiagaraComponent*                      BeamPSC;
	uint8                                         Pad_1E08[0x50];
	ETractorBeamState                             TractorBeamState;
	uint8                                         Pad_1E59[0x27];
	float                                         TractorBeamDeactivationTimestamp;
	float                                         TractorBeamDisruptedTimestamp;
	uint8                                         Pad_1E88[0x80];
	float                                         CockpitHealth;
	float                                         Native_CockpitEnabled;
	float                                         LastCockpitHealthTickTime;
	float                                         LastCockpitDamageTime;
	float                                         CockpitDissolveStartTime;
	uint8                                         Pad_1F1C[0x4];
	struct FScalableFloat                         CockpitMaxHealth;
	struct FScalableFloat                         CockpitHealthTickRate;
	struct FScalableFloat                         CockpitHealthPerTick;
	struct FScalableFloat                         CockpitRegenDelay;
	class UCurveFloat*                            CockpitHitMaterialWobble;
	float                                         LastDamageAlpha;
	bool                                          bDissolvingCockpit;
	bool                                          bRestoringCockpit;
	bool                                          bCockpitWobble;
	uint8                                         Pad_1FCF[0x1];
	class UStaticMeshComponent*                   NativeComp_ShieldMesh;
	class UMaterialInstanceDynamic*               Native_CockpitMaterial;
	class UMaterialInstanceDynamic*               Native_EnergyRingMatInstance;
	class UMaterialInstanceDynamic*               Native_EnergyFieldMatInstance;
	class UAudioComponent*                        NativeComp_DamageStateLastLife;
	class UAudioComponent*                        NativeComp_DamageState;
	struct FVector                                Native_LastHitLocation;
	struct FVector                                Native_LastHitNormal;
	class UNiagaraComponent*                      NativeComp_DamageStateFX;
	class UNiagaraComponent*                      NativeComp_HologramScreen;
	class UNiagaraComponent*                      NativeComp_SpeedLines;
	class UMaterialInterface*                     Native_EnergyRingMat;
	class UMaterialInterface*                     Native_EnergyFieldMat;
	class UNiagaraSystem*                         NativeSys_DamageStateFX;
	class UNiagaraSystem*                         NativeSys_CockpitDestroyed;
	class USoundBase*                             CockpitDamagedSound;
	class USoundBase*                             CockpitDestroyedSound;
	class USoundBase*                             CockpitRespawnSound;
	class USoundBase*                             Native_DamageStateSound;
	class USoundBase*                             Native_DamageStateLastLifeSound;
	class UForceFeedbackEffect*                   CockpitDeactivatedForceFeedback;
	TSubclassOf<class ULegacyCameraShake>         CockpitDestroyedCamShake;
	TArray<TSubclassOf<class AActor>>             TractorBeamDisallowedClasses;

public:
	void AddPhysicsImpulseToTractorBeamAttachedActor(const struct FVector& Impulse, class FName BoneName, bool bVelChange);
	void DisruptTractorBeam();
	void EnablePilotBubbleCollisionOnServer(bool bNewCollisionEnabled);
	void GetDriverSeatRotationAnimParams(float* OutLeftRight, float* OutForwardBack);
	void NativeToggleCockpit(bool bEnable);
	void OnAttachedActorDestroyed(class AActor* DestroyedActor);
	void OnAttachedActorDied(class AActor* DamagedActor, float Damage, class AController* InstigatedBy, class AActor* DamageCauser, const struct FVector& HitLocation, class UPrimitiveComponent* FHitComponent, class FName BoneName, const struct FVector& Momentum);
	void OnBatteryRegen(float Newcharge);
	void OnBoostChargeRefilled();
	void OnBoostFinished();
	void OnBoostStarted();
	void OnCrashedImpact();
	void OnCrashingStarted();
	void OnNewVehicleState(ENevadaFlightStates NewVehicleState);
	void OnOutOfBattery();
	void OnRebootFinished();
	void OnRebootStarted();
	void OnRep_NevadaState(const struct FNevadaState& PrevState);
	void OnRep_ReplicatedTargetedActors();
	void OnRep_TargetedActorChanged();
	void OnRep_TractorBeamAttached();
	void OnRep_TractorBeamChargeStarted();
	void OnRep_TractorBeamState(const ETractorBeamState PreviousState);
	void OnStartAscend();
	void OnStartDescend();
	void OnTargetedActorChanged(class AActor* NewTargetedActor);
	void OnTractorBeamActivated();
	void OnTractorBeamAttached();
	void OnTractorBeamChargeStarted();
	void OnTractorBeamDeactivated(const struct FVector& LastBeamPosition);
	void OnTractorBeamDetached(class AActor* DetachedActor, const struct FVector& LastBeamPosition);
	void SetAttachedPawnAddedVelocity(const struct FVector& AddedVelocity);
	void SetCannonEnabled(const bool bEnabled);
	void SetTractorBeamEnabled(const bool bEnabled);
	void SetTractorBeamInactive();

	class AFortNevadaAudioController* GetAudioController() const;
	float GetBatteryCharge() const;
	float GetBoostChargeProgress() const;
	int32 GetBoostChargesAvailable() const;
	float GetBoostChargeTimeRemaining() const;
	ENevadaFlightStates GetCurrentVehicleState() const;
	float GetEnergyCanonChargePercent() const;
	int32 GetNumRebootsAvailable() const;
	struct FVector GetTractorBeamAttachLocation() const;
	bool IsTractorBeamActive() const;
	bool IsTractorBeamAttached() const;
	bool IsTractorBeamDisrupted() const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortNevadaVehicle">();
	}
	static class AFortNevadaVehicle* GetDefaultObj()
	{
		return GetDefaultObjImpl<AFortNevadaVehicle>();
	}
};
static_assert(alignof(AFortNevadaVehicle) == 0x000010, "Wrong alignment on AFortNevadaVehicle");
static_assert(sizeof(AFortNevadaVehicle) == 0x0020B0, "Wrong size on AFortNevadaVehicle");
static_assert(offsetof(AFortNevadaVehicle, ServerReplicatedState) == 0x001AB0, "Member 'AFortNevadaVehicle::ServerReplicatedState' has a wrong offset!");
static_assert(offsetof(AFortNevadaVehicle, FortNevadaVehicleConfigs) == 0x001AC8, "Member 'AFortNevadaVehicle::FortNevadaVehicleConfigs' has a wrong offset!");
static_assert(offsetof(AFortNevadaVehicle, FortNevadaAudioControllerClass) == 0x001AD0, "Member 'AFortNevadaVehicle::FortNevadaAudioControllerClass' has a wrong offset!");
static_assert(offsetof(AFortNevadaVehicle, AudioControllerActor) == 0x001AD8, "Member 'AFortNevadaVehicle::AudioControllerActor' has a wrong offset!");
static_assert(offsetof(AFortNevadaVehicle, FortNevadaAudioController) == 0x001AE0, "Member 'AFortNevadaVehicle::FortNevadaAudioController' has a wrong offset!");
static_assert(offsetof(AFortNevadaVehicle, LiftInputs) == 0x001AE8, "Member 'AFortNevadaVehicle::LiftInputs' has a wrong offset!");
static_assert(offsetof(AFortNevadaVehicle, LastBatteryRegenTickTime) == 0x001AF0, "Member 'AFortNevadaVehicle::LastBatteryRegenTickTime' has a wrong offset!");
static_assert(offsetof(AFortNevadaVehicle, bBoostThrust) == 0x001AF4, "Member 'AFortNevadaVehicle::bBoostThrust' has a wrong offset!");
static_assert(offsetof(AFortNevadaVehicle, bBoostDrag) == 0x001AF5, "Member 'AFortNevadaVehicle::bBoostDrag' has a wrong offset!");
static_assert(offsetof(AFortNevadaVehicle, bBoostInputReleased) == 0x001AF6, "Member 'AFortNevadaVehicle::bBoostInputReleased' has a wrong offset!");
static_assert(offsetof(AFortNevadaVehicle, bUseTractorBeamUprightForce) == 0x001AF7, "Member 'AFortNevadaVehicle::bUseTractorBeamUprightForce' has a wrong offset!");
static_assert(offsetof(AFortNevadaVehicle, bDeadBattery) == 0x001AF8, "Member 'AFortNevadaVehicle::bDeadBattery' has a wrong offset!");
static_assert(offsetof(AFortNevadaVehicle, TractorBeamExtraLengthForExtents) == 0x001AFC, "Member 'AFortNevadaVehicle::TractorBeamExtraLengthForExtents' has a wrong offset!");
static_assert(offsetof(AFortNevadaVehicle, CrashingDesiredUp) == 0x001B00, "Member 'AFortNevadaVehicle::CrashingDesiredUp' has a wrong offset!");
static_assert(offsetof(AFortNevadaVehicle, BoostStartTime) == 0x001B18, "Member 'AFortNevadaVehicle::BoostStartTime' has a wrong offset!");
static_assert(offsetof(AFortNevadaVehicle, BoostPitchAlpha) == 0x001B1C, "Member 'AFortNevadaVehicle::BoostPitchAlpha' has a wrong offset!");
static_assert(offsetof(AFortNevadaVehicle, BoostChargeProgress) == 0x001B20, "Member 'AFortNevadaVehicle::BoostChargeProgress' has a wrong offset!");
static_assert(offsetof(AFortNevadaVehicle, BoostChargesAvailable) == 0x001B24, "Member 'AFortNevadaVehicle::BoostChargesAvailable' has a wrong offset!");
static_assert(offsetof(AFortNevadaVehicle, CachedBoostMoveDir) == 0x001B28, "Member 'AFortNevadaVehicle::CachedBoostMoveDir' has a wrong offset!");
static_assert(offsetof(AFortNevadaVehicle, CurrentStateStartTime) == 0x001B40, "Member 'AFortNevadaVehicle::CurrentStateStartTime' has a wrong offset!");
static_assert(offsetof(AFortNevadaVehicle, HeightAtLandingTime) == 0x001B44, "Member 'AFortNevadaVehicle::HeightAtLandingTime' has a wrong offset!");
static_assert(offsetof(AFortNevadaVehicle, CrashingScrapingTime) == 0x001B48, "Member 'AFortNevadaVehicle::CrashingScrapingTime' has a wrong offset!");
static_assert(offsetof(AFortNevadaVehicle, CrashingNotMovingTimer) == 0x001B4C, "Member 'AFortNevadaVehicle::CrashingNotMovingTimer' has a wrong offset!");
static_assert(offsetof(AFortNevadaVehicle, AltimeterTraceHitDistance) == 0x001B50, "Member 'AFortNevadaVehicle::AltimeterTraceHitDistance' has a wrong offset!");
static_assert(offsetof(AFortNevadaVehicle, TractorBeamAppliedForceMagnitude) == 0x001B54, "Member 'AFortNevadaVehicle::TractorBeamAppliedForceMagnitude' has a wrong offset!");
static_assert(offsetof(AFortNevadaVehicle, AnimParamDriverSeatLeftRight) == 0x001B58, "Member 'AFortNevadaVehicle::AnimParamDriverSeatLeftRight' has a wrong offset!");
static_assert(offsetof(AFortNevadaVehicle, AnimParamDriverSeatForwardBack) == 0x001B5C, "Member 'AFortNevadaVehicle::AnimParamDriverSeatForwardBack' has a wrong offset!");
static_assert(offsetof(AFortNevadaVehicle, bForceNegativeLift) == 0x001B60, "Member 'AFortNevadaVehicle::bForceNegativeLift' has a wrong offset!");
static_assert(offsetof(AFortNevadaVehicle, bForcePositiveLift) == 0x001B61, "Member 'AFortNevadaVehicle::bForcePositiveLift' has a wrong offset!");
static_assert(offsetof(AFortNevadaVehicle, bInitialLift) == 0x001B62, "Member 'AFortNevadaVehicle::bInitialLift' has a wrong offset!");
static_assert(offsetof(AFortNevadaVehicle, CurrentVehicleState) == 0x001B63, "Member 'AFortNevadaVehicle::CurrentVehicleState' has a wrong offset!");
static_assert(offsetof(AFortNevadaVehicle, CachedLandscapeProxy) == 0x001BB0, "Member 'AFortNevadaVehicle::CachedLandscapeProxy' has a wrong offset!");
static_assert(offsetof(AFortNevadaVehicle, PassengerCameraModeClass) == 0x001BB8, "Member 'AFortNevadaVehicle::PassengerCameraModeClass' has a wrong offset!");
static_assert(offsetof(AFortNevadaVehicle, bTractorBeamChargeStarted) == 0x001BC0, "Member 'AFortNevadaVehicle::bTractorBeamChargeStarted' has a wrong offset!");
static_assert(offsetof(AFortNevadaVehicle, TowhookParams) == 0x001BC8, "Member 'AFortNevadaVehicle::TowhookParams' has a wrong offset!");
static_assert(offsetof(AFortNevadaVehicle, AttachedPawnHiddenVehicle) == 0x001C98, "Member 'AFortNevadaVehicle::AttachedPawnHiddenVehicle' has a wrong offset!");
static_assert(offsetof(AFortNevadaVehicle, TractorBeamAttachedPrimitive) == 0x001CA0, "Member 'AFortNevadaVehicle::TractorBeamAttachedPrimitive' has a wrong offset!");
static_assert(offsetof(AFortNevadaVehicle, SpawnedTractorBeamVictimVehicle) == 0x001CA8, "Member 'AFortNevadaVehicle::SpawnedTractorBeamVictimVehicle' has a wrong offset!");
static_assert(offsetof(AFortNevadaVehicle, PreviousTractorBeamAttachedPrimitive) == 0x001CB0, "Member 'AFortNevadaVehicle::PreviousTractorBeamAttachedPrimitive' has a wrong offset!");
static_assert(offsetof(AFortNevadaVehicle, TractorBeamTargetedActors) == 0x001CB8, "Member 'AFortNevadaVehicle::TractorBeamTargetedActors' has a wrong offset!");
static_assert(offsetof(AFortNevadaVehicle, PreviouslyTargetedActors) == 0x001CC8, "Member 'AFortNevadaVehicle::PreviouslyTargetedActors' has a wrong offset!");
static_assert(offsetof(AFortNevadaVehicle, TractorBeamAttachedActor) == 0x001CD8, "Member 'AFortNevadaVehicle::TractorBeamAttachedActor' has a wrong offset!");
static_assert(offsetof(AFortNevadaVehicle, TractorBeamTargetedActor) == 0x001CE0, "Member 'AFortNevadaVehicle::TractorBeamTargetedActor' has a wrong offset!");
static_assert(offsetof(AFortNevadaVehicle, TractorBeamTargetPosition) == 0x001CE8, "Member 'AFortNevadaVehicle::TractorBeamTargetPosition' has a wrong offset!");
static_assert(offsetof(AFortNevadaVehicle, bBeamButtonReleased) == 0x001D01, "Member 'AFortNevadaVehicle::bBeamButtonReleased' has a wrong offset!");
static_assert(offsetof(AFortNevadaVehicle, TractorBeamObjectsTypes) == 0x001D08, "Member 'AFortNevadaVehicle::TractorBeamObjectsTypes' has a wrong offset!");
static_assert(offsetof(AFortNevadaVehicle, DisallowedBeamTags) == 0x001D18, "Member 'AFortNevadaVehicle::DisallowedBeamTags' has a wrong offset!");
static_assert(offsetof(AFortNevadaVehicle, AlwaysAllowedBeamTags) == 0x001D38, "Member 'AFortNevadaVehicle::AlwaysAllowedBeamTags' has a wrong offset!");
static_assert(offsetof(AFortNevadaVehicle, TractorBeamFX_Unattached) == 0x001DF0, "Member 'AFortNevadaVehicle::TractorBeamFX_Unattached' has a wrong offset!");
static_assert(offsetof(AFortNevadaVehicle, TractorBeamFX_Attached) == 0x001DF8, "Member 'AFortNevadaVehicle::TractorBeamFX_Attached' has a wrong offset!");
static_assert(offsetof(AFortNevadaVehicle, BeamPSC) == 0x001E00, "Member 'AFortNevadaVehicle::BeamPSC' has a wrong offset!");
static_assert(offsetof(AFortNevadaVehicle, TractorBeamState) == 0x001E58, "Member 'AFortNevadaVehicle::TractorBeamState' has a wrong offset!");
static_assert(offsetof(AFortNevadaVehicle, TractorBeamDeactivationTimestamp) == 0x001E80, "Member 'AFortNevadaVehicle::TractorBeamDeactivationTimestamp' has a wrong offset!");
static_assert(offsetof(AFortNevadaVehicle, TractorBeamDisruptedTimestamp) == 0x001E84, "Member 'AFortNevadaVehicle::TractorBeamDisruptedTimestamp' has a wrong offset!");
static_assert(offsetof(AFortNevadaVehicle, CockpitHealth) == 0x001F08, "Member 'AFortNevadaVehicle::CockpitHealth' has a wrong offset!");
static_assert(offsetof(AFortNevadaVehicle, Native_CockpitEnabled) == 0x001F0C, "Member 'AFortNevadaVehicle::Native_CockpitEnabled' has a wrong offset!");
static_assert(offsetof(AFortNevadaVehicle, LastCockpitHealthTickTime) == 0x001F10, "Member 'AFortNevadaVehicle::LastCockpitHealthTickTime' has a wrong offset!");
static_assert(offsetof(AFortNevadaVehicle, LastCockpitDamageTime) == 0x001F14, "Member 'AFortNevadaVehicle::LastCockpitDamageTime' has a wrong offset!");
static_assert(offsetof(AFortNevadaVehicle, CockpitDissolveStartTime) == 0x001F18, "Member 'AFortNevadaVehicle::CockpitDissolveStartTime' has a wrong offset!");
static_assert(offsetof(AFortNevadaVehicle, CockpitMaxHealth) == 0x001F20, "Member 'AFortNevadaVehicle::CockpitMaxHealth' has a wrong offset!");
static_assert(offsetof(AFortNevadaVehicle, CockpitHealthTickRate) == 0x001F48, "Member 'AFortNevadaVehicle::CockpitHealthTickRate' has a wrong offset!");
static_assert(offsetof(AFortNevadaVehicle, CockpitHealthPerTick) == 0x001F70, "Member 'AFortNevadaVehicle::CockpitHealthPerTick' has a wrong offset!");
static_assert(offsetof(AFortNevadaVehicle, CockpitRegenDelay) == 0x001F98, "Member 'AFortNevadaVehicle::CockpitRegenDelay' has a wrong offset!");
static_assert(offsetof(AFortNevadaVehicle, CockpitHitMaterialWobble) == 0x001FC0, "Member 'AFortNevadaVehicle::CockpitHitMaterialWobble' has a wrong offset!");
static_assert(offsetof(AFortNevadaVehicle, LastDamageAlpha) == 0x001FC8, "Member 'AFortNevadaVehicle::LastDamageAlpha' has a wrong offset!");
static_assert(offsetof(AFortNevadaVehicle, bDissolvingCockpit) == 0x001FCC, "Member 'AFortNevadaVehicle::bDissolvingCockpit' has a wrong offset!");
static_assert(offsetof(AFortNevadaVehicle, bRestoringCockpit) == 0x001FCD, "Member 'AFortNevadaVehicle::bRestoringCockpit' has a wrong offset!");
static_assert(offsetof(AFortNevadaVehicle, bCockpitWobble) == 0x001FCE, "Member 'AFortNevadaVehicle::bCockpitWobble' has a wrong offset!");
static_assert(offsetof(AFortNevadaVehicle, NativeComp_ShieldMesh) == 0x001FD0, "Member 'AFortNevadaVehicle::NativeComp_ShieldMesh' has a wrong offset!");
static_assert(offsetof(AFortNevadaVehicle, Native_CockpitMaterial) == 0x001FD8, "Member 'AFortNevadaVehicle::Native_CockpitMaterial' has a wrong offset!");
static_assert(offsetof(AFortNevadaVehicle, Native_EnergyRingMatInstance) == 0x001FE0, "Member 'AFortNevadaVehicle::Native_EnergyRingMatInstance' has a wrong offset!");
static_assert(offsetof(AFortNevadaVehicle, Native_EnergyFieldMatInstance) == 0x001FE8, "Member 'AFortNevadaVehicle::Native_EnergyFieldMatInstance' has a wrong offset!");
static_assert(offsetof(AFortNevadaVehicle, NativeComp_DamageStateLastLife) == 0x001FF0, "Member 'AFortNevadaVehicle::NativeComp_DamageStateLastLife' has a wrong offset!");
static_assert(offsetof(AFortNevadaVehicle, NativeComp_DamageState) == 0x001FF8, "Member 'AFortNevadaVehicle::NativeComp_DamageState' has a wrong offset!");
static_assert(offsetof(AFortNevadaVehicle, Native_LastHitLocation) == 0x002000, "Member 'AFortNevadaVehicle::Native_LastHitLocation' has a wrong offset!");
static_assert(offsetof(AFortNevadaVehicle, Native_LastHitNormal) == 0x002018, "Member 'AFortNevadaVehicle::Native_LastHitNormal' has a wrong offset!");
static_assert(offsetof(AFortNevadaVehicle, NativeComp_DamageStateFX) == 0x002030, "Member 'AFortNevadaVehicle::NativeComp_DamageStateFX' has a wrong offset!");
static_assert(offsetof(AFortNevadaVehicle, NativeComp_HologramScreen) == 0x002038, "Member 'AFortNevadaVehicle::NativeComp_HologramScreen' has a wrong offset!");
static_assert(offsetof(AFortNevadaVehicle, NativeComp_SpeedLines) == 0x002040, "Member 'AFortNevadaVehicle::NativeComp_SpeedLines' has a wrong offset!");
static_assert(offsetof(AFortNevadaVehicle, Native_EnergyRingMat) == 0x002048, "Member 'AFortNevadaVehicle::Native_EnergyRingMat' has a wrong offset!");
static_assert(offsetof(AFortNevadaVehicle, Native_EnergyFieldMat) == 0x002050, "Member 'AFortNevadaVehicle::Native_EnergyFieldMat' has a wrong offset!");
static_assert(offsetof(AFortNevadaVehicle, NativeSys_DamageStateFX) == 0x002058, "Member 'AFortNevadaVehicle::NativeSys_DamageStateFX' has a wrong offset!");
static_assert(offsetof(AFortNevadaVehicle, NativeSys_CockpitDestroyed) == 0x002060, "Member 'AFortNevadaVehicle::NativeSys_CockpitDestroyed' has a wrong offset!");
static_assert(offsetof(AFortNevadaVehicle, CockpitDamagedSound) == 0x002068, "Member 'AFortNevadaVehicle::CockpitDamagedSound' has a wrong offset!");
static_assert(offsetof(AFortNevadaVehicle, CockpitDestroyedSound) == 0x002070, "Member 'AFortNevadaVehicle::CockpitDestroyedSound' has a wrong offset!");
static_assert(offsetof(AFortNevadaVehicle, CockpitRespawnSound) == 0x002078, "Member 'AFortNevadaVehicle::CockpitRespawnSound' has a wrong offset!");
static_assert(offsetof(AFortNevadaVehicle, Native_DamageStateSound) == 0x002080, "Member 'AFortNevadaVehicle::Native_DamageStateSound' has a wrong offset!");
static_assert(offsetof(AFortNevadaVehicle, Native_DamageStateLastLifeSound) == 0x002088, "Member 'AFortNevadaVehicle::Native_DamageStateLastLifeSound' has a wrong offset!");
static_assert(offsetof(AFortNevadaVehicle, CockpitDeactivatedForceFeedback) == 0x002090, "Member 'AFortNevadaVehicle::CockpitDeactivatedForceFeedback' has a wrong offset!");
static_assert(offsetof(AFortNevadaVehicle, CockpitDestroyedCamShake) == 0x002098, "Member 'AFortNevadaVehicle::CockpitDestroyedCamShake' has a wrong offset!");
static_assert(offsetof(AFortNevadaVehicle, TractorBeamDisallowedClasses) == 0x0020A0, "Member 'AFortNevadaVehicle::TractorBeamDisallowedClasses' has a wrong offset!");

class UFortNevadaVehicleAnimInstance final : public UFortVehicleAnimInstance
{
public:
	class AFortNevadaVehicle*                     NevadaVehicle;
	bool                                          bTractorBeam_IsAttached;
	bool                                          bTractorBeam_IsCharging;
	bool                                          bTractorBeam_IsActive;
	bool                                          bTractorBeam_IsInactive;
	bool                                          bTractorBeam_IsOn;
	bool                                          bTractorBeam_HasTarget;
	bool                                          bTractorBeam_ShouldApplyCustomAO;
	uint8                                         Pad_5FF[0x1];
	float                                         TractorBeam_LookAtPitch;
	float                                         TractorBeam_LookAtYaw;
	float                                         LeanLeftRight;
	float                                         LeanForwardBackward;
	float                                         LeanValue;
	float                                         PreviousLeanValue;
	float                                         VelocityZValue;
	float                                         LeanDelta;
	bool                                          bTurnAgain;
	bool                                          bHadDriver;
	bool                                          bJustGotDriver;
	bool                                          bJustLostDriver;
	bool                                          bWasBoosting;
	bool                                          bIsBoosting;
	uint8                                         Pad_626[0x2];
	int32                                         PreviousBoostCount;
	int32                                         BoostCount;
	bool                                          bIsBoostingAgain;
	bool                                          bIsMoving;
	uint8                                         Pad_632[0x2];
	float                                         WingsPlayRate;
	float                                         TractorBeamAlpha;
	float                                         AimPitch;
	float                                         AimYaw;
	bool                                          bIsFiringCannon;
	uint8                                         Pad_645[0x3];
	float                                         DistanceFromGround;
	bool                                          bIsLanding;
	bool                                          bHasLanded;
	uint8                                         Pad_64E[0x2];
	float                                         LandingAlpha;
	bool                                          bNotLandingMode;
	bool                                          bHadBattery;
	bool                                          bOutOfBattery;
	bool                                          bJustGotBattery;
	bool                                          bLaunchToDepart;
	bool                                          bLaunchToIdle;
	bool                                          bIsPartsLanding;
	uint8                                         Pad_65B[0x1];
	class FName                                   TractorBeamSocketName;
	class FName                                   TractorBeamAimCurveName;
	class FName                                   NevadaVehicleInterruptName;
	class FName                                   LandingTraceRightName;
	class FName                                   LandingTraceLeftName;
	float                                         MaxLeanDeltaInterruptMagnitude;
	float                                         MinForwardSpeedToBeMoving;
	float                                         MinForwardSpeedToPlayWings;
	float                                         MinWingsPlayRate;
	float                                         MaxWingsPlayRate;
	float                                         WingsPlayRateInterpSpeed;
	TSoftObjectPtr<class UAnimMontage>            CannonFiringMontage;
	float                                         LandingGearTraceLength;
	uint8                                         Pad_6B4[0x2C];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortNevadaVehicleAnimInstance">();
	}
	static class UFortNevadaVehicleAnimInstance* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortNevadaVehicleAnimInstance>();
	}
};
static_assert(alignof(UFortNevadaVehicleAnimInstance) == 0x000010, "Wrong alignment on UFortNevadaVehicleAnimInstance");
static_assert(sizeof(UFortNevadaVehicleAnimInstance) == 0x0006E0, "Wrong size on UFortNevadaVehicleAnimInstance");
static_assert(offsetof(UFortNevadaVehicleAnimInstance, NevadaVehicle) == 0x0005F0, "Member 'UFortNevadaVehicleAnimInstance::NevadaVehicle' has a wrong offset!");
static_assert(offsetof(UFortNevadaVehicleAnimInstance, bTractorBeam_IsAttached) == 0x0005F8, "Member 'UFortNevadaVehicleAnimInstance::bTractorBeam_IsAttached' has a wrong offset!");
static_assert(offsetof(UFortNevadaVehicleAnimInstance, bTractorBeam_IsCharging) == 0x0005F9, "Member 'UFortNevadaVehicleAnimInstance::bTractorBeam_IsCharging' has a wrong offset!");
static_assert(offsetof(UFortNevadaVehicleAnimInstance, bTractorBeam_IsActive) == 0x0005FA, "Member 'UFortNevadaVehicleAnimInstance::bTractorBeam_IsActive' has a wrong offset!");
static_assert(offsetof(UFortNevadaVehicleAnimInstance, bTractorBeam_IsInactive) == 0x0005FB, "Member 'UFortNevadaVehicleAnimInstance::bTractorBeam_IsInactive' has a wrong offset!");
static_assert(offsetof(UFortNevadaVehicleAnimInstance, bTractorBeam_IsOn) == 0x0005FC, "Member 'UFortNevadaVehicleAnimInstance::bTractorBeam_IsOn' has a wrong offset!");
static_assert(offsetof(UFortNevadaVehicleAnimInstance, bTractorBeam_HasTarget) == 0x0005FD, "Member 'UFortNevadaVehicleAnimInstance::bTractorBeam_HasTarget' has a wrong offset!");
static_assert(offsetof(UFortNevadaVehicleAnimInstance, bTractorBeam_ShouldApplyCustomAO) == 0x0005FE, "Member 'UFortNevadaVehicleAnimInstance::bTractorBeam_ShouldApplyCustomAO' has a wrong offset!");
static_assert(offsetof(UFortNevadaVehicleAnimInstance, TractorBeam_LookAtPitch) == 0x000600, "Member 'UFortNevadaVehicleAnimInstance::TractorBeam_LookAtPitch' has a wrong offset!");
static_assert(offsetof(UFortNevadaVehicleAnimInstance, TractorBeam_LookAtYaw) == 0x000604, "Member 'UFortNevadaVehicleAnimInstance::TractorBeam_LookAtYaw' has a wrong offset!");
static_assert(offsetof(UFortNevadaVehicleAnimInstance, LeanLeftRight) == 0x000608, "Member 'UFortNevadaVehicleAnimInstance::LeanLeftRight' has a wrong offset!");
static_assert(offsetof(UFortNevadaVehicleAnimInstance, LeanForwardBackward) == 0x00060C, "Member 'UFortNevadaVehicleAnimInstance::LeanForwardBackward' has a wrong offset!");
static_assert(offsetof(UFortNevadaVehicleAnimInstance, LeanValue) == 0x000610, "Member 'UFortNevadaVehicleAnimInstance::LeanValue' has a wrong offset!");
static_assert(offsetof(UFortNevadaVehicleAnimInstance, PreviousLeanValue) == 0x000614, "Member 'UFortNevadaVehicleAnimInstance::PreviousLeanValue' has a wrong offset!");
static_assert(offsetof(UFortNevadaVehicleAnimInstance, VelocityZValue) == 0x000618, "Member 'UFortNevadaVehicleAnimInstance::VelocityZValue' has a wrong offset!");
static_assert(offsetof(UFortNevadaVehicleAnimInstance, LeanDelta) == 0x00061C, "Member 'UFortNevadaVehicleAnimInstance::LeanDelta' has a wrong offset!");
static_assert(offsetof(UFortNevadaVehicleAnimInstance, bTurnAgain) == 0x000620, "Member 'UFortNevadaVehicleAnimInstance::bTurnAgain' has a wrong offset!");
static_assert(offsetof(UFortNevadaVehicleAnimInstance, bHadDriver) == 0x000621, "Member 'UFortNevadaVehicleAnimInstance::bHadDriver' has a wrong offset!");
static_assert(offsetof(UFortNevadaVehicleAnimInstance, bJustGotDriver) == 0x000622, "Member 'UFortNevadaVehicleAnimInstance::bJustGotDriver' has a wrong offset!");
static_assert(offsetof(UFortNevadaVehicleAnimInstance, bJustLostDriver) == 0x000623, "Member 'UFortNevadaVehicleAnimInstance::bJustLostDriver' has a wrong offset!");
static_assert(offsetof(UFortNevadaVehicleAnimInstance, bWasBoosting) == 0x000624, "Member 'UFortNevadaVehicleAnimInstance::bWasBoosting' has a wrong offset!");
static_assert(offsetof(UFortNevadaVehicleAnimInstance, bIsBoosting) == 0x000625, "Member 'UFortNevadaVehicleAnimInstance::bIsBoosting' has a wrong offset!");
static_assert(offsetof(UFortNevadaVehicleAnimInstance, PreviousBoostCount) == 0x000628, "Member 'UFortNevadaVehicleAnimInstance::PreviousBoostCount' has a wrong offset!");
static_assert(offsetof(UFortNevadaVehicleAnimInstance, BoostCount) == 0x00062C, "Member 'UFortNevadaVehicleAnimInstance::BoostCount' has a wrong offset!");
static_assert(offsetof(UFortNevadaVehicleAnimInstance, bIsBoostingAgain) == 0x000630, "Member 'UFortNevadaVehicleAnimInstance::bIsBoostingAgain' has a wrong offset!");
static_assert(offsetof(UFortNevadaVehicleAnimInstance, bIsMoving) == 0x000631, "Member 'UFortNevadaVehicleAnimInstance::bIsMoving' has a wrong offset!");
static_assert(offsetof(UFortNevadaVehicleAnimInstance, WingsPlayRate) == 0x000634, "Member 'UFortNevadaVehicleAnimInstance::WingsPlayRate' has a wrong offset!");
static_assert(offsetof(UFortNevadaVehicleAnimInstance, TractorBeamAlpha) == 0x000638, "Member 'UFortNevadaVehicleAnimInstance::TractorBeamAlpha' has a wrong offset!");
static_assert(offsetof(UFortNevadaVehicleAnimInstance, AimPitch) == 0x00063C, "Member 'UFortNevadaVehicleAnimInstance::AimPitch' has a wrong offset!");
static_assert(offsetof(UFortNevadaVehicleAnimInstance, AimYaw) == 0x000640, "Member 'UFortNevadaVehicleAnimInstance::AimYaw' has a wrong offset!");
static_assert(offsetof(UFortNevadaVehicleAnimInstance, bIsFiringCannon) == 0x000644, "Member 'UFortNevadaVehicleAnimInstance::bIsFiringCannon' has a wrong offset!");
static_assert(offsetof(UFortNevadaVehicleAnimInstance, DistanceFromGround) == 0x000648, "Member 'UFortNevadaVehicleAnimInstance::DistanceFromGround' has a wrong offset!");
static_assert(offsetof(UFortNevadaVehicleAnimInstance, bIsLanding) == 0x00064C, "Member 'UFortNevadaVehicleAnimInstance::bIsLanding' has a wrong offset!");
static_assert(offsetof(UFortNevadaVehicleAnimInstance, bHasLanded) == 0x00064D, "Member 'UFortNevadaVehicleAnimInstance::bHasLanded' has a wrong offset!");
static_assert(offsetof(UFortNevadaVehicleAnimInstance, LandingAlpha) == 0x000650, "Member 'UFortNevadaVehicleAnimInstance::LandingAlpha' has a wrong offset!");
static_assert(offsetof(UFortNevadaVehicleAnimInstance, bNotLandingMode) == 0x000654, "Member 'UFortNevadaVehicleAnimInstance::bNotLandingMode' has a wrong offset!");
static_assert(offsetof(UFortNevadaVehicleAnimInstance, bHadBattery) == 0x000655, "Member 'UFortNevadaVehicleAnimInstance::bHadBattery' has a wrong offset!");
static_assert(offsetof(UFortNevadaVehicleAnimInstance, bOutOfBattery) == 0x000656, "Member 'UFortNevadaVehicleAnimInstance::bOutOfBattery' has a wrong offset!");
static_assert(offsetof(UFortNevadaVehicleAnimInstance, bJustGotBattery) == 0x000657, "Member 'UFortNevadaVehicleAnimInstance::bJustGotBattery' has a wrong offset!");
static_assert(offsetof(UFortNevadaVehicleAnimInstance, bLaunchToDepart) == 0x000658, "Member 'UFortNevadaVehicleAnimInstance::bLaunchToDepart' has a wrong offset!");
static_assert(offsetof(UFortNevadaVehicleAnimInstance, bLaunchToIdle) == 0x000659, "Member 'UFortNevadaVehicleAnimInstance::bLaunchToIdle' has a wrong offset!");
static_assert(offsetof(UFortNevadaVehicleAnimInstance, bIsPartsLanding) == 0x00065A, "Member 'UFortNevadaVehicleAnimInstance::bIsPartsLanding' has a wrong offset!");
static_assert(offsetof(UFortNevadaVehicleAnimInstance, TractorBeamSocketName) == 0x00065C, "Member 'UFortNevadaVehicleAnimInstance::TractorBeamSocketName' has a wrong offset!");
static_assert(offsetof(UFortNevadaVehicleAnimInstance, TractorBeamAimCurveName) == 0x000660, "Member 'UFortNevadaVehicleAnimInstance::TractorBeamAimCurveName' has a wrong offset!");
static_assert(offsetof(UFortNevadaVehicleAnimInstance, NevadaVehicleInterruptName) == 0x000664, "Member 'UFortNevadaVehicleAnimInstance::NevadaVehicleInterruptName' has a wrong offset!");
static_assert(offsetof(UFortNevadaVehicleAnimInstance, LandingTraceRightName) == 0x000668, "Member 'UFortNevadaVehicleAnimInstance::LandingTraceRightName' has a wrong offset!");
static_assert(offsetof(UFortNevadaVehicleAnimInstance, LandingTraceLeftName) == 0x00066C, "Member 'UFortNevadaVehicleAnimInstance::LandingTraceLeftName' has a wrong offset!");
static_assert(offsetof(UFortNevadaVehicleAnimInstance, MaxLeanDeltaInterruptMagnitude) == 0x000670, "Member 'UFortNevadaVehicleAnimInstance::MaxLeanDeltaInterruptMagnitude' has a wrong offset!");
static_assert(offsetof(UFortNevadaVehicleAnimInstance, MinForwardSpeedToBeMoving) == 0x000674, "Member 'UFortNevadaVehicleAnimInstance::MinForwardSpeedToBeMoving' has a wrong offset!");
static_assert(offsetof(UFortNevadaVehicleAnimInstance, MinForwardSpeedToPlayWings) == 0x000678, "Member 'UFortNevadaVehicleAnimInstance::MinForwardSpeedToPlayWings' has a wrong offset!");
static_assert(offsetof(UFortNevadaVehicleAnimInstance, MinWingsPlayRate) == 0x00067C, "Member 'UFortNevadaVehicleAnimInstance::MinWingsPlayRate' has a wrong offset!");
static_assert(offsetof(UFortNevadaVehicleAnimInstance, MaxWingsPlayRate) == 0x000680, "Member 'UFortNevadaVehicleAnimInstance::MaxWingsPlayRate' has a wrong offset!");
static_assert(offsetof(UFortNevadaVehicleAnimInstance, WingsPlayRateInterpSpeed) == 0x000684, "Member 'UFortNevadaVehicleAnimInstance::WingsPlayRateInterpSpeed' has a wrong offset!");
static_assert(offsetof(UFortNevadaVehicleAnimInstance, CannonFiringMontage) == 0x000688, "Member 'UFortNevadaVehicleAnimInstance::CannonFiringMontage' has a wrong offset!");
static_assert(offsetof(UFortNevadaVehicleAnimInstance, LandingGearTraceLength) == 0x0006B0, "Member 'UFortNevadaVehicleAnimInstance::LandingGearTraceLength' has a wrong offset!");

class UFortPlayerAnimInstance_NevadaDriver final : public UFortPlayerAnimInstance_OctopusDriver
{
public:
	class AFortNevadaVehicle*                     NevadaVehicle;
	float                                         AnimLeftRight;
	float                                         AnimForwardBackward;
	struct FVector                                RootAttachmentLoc;
	struct FRotator                               RootAttachmentRot;
	int32                                         BoostCount;
	int32                                         PreviousBoostCount;
	bool                                          bIsBoostingAgain;
	bool                                          bIsMoving;
	uint8                                         Pad_1822[0x2];
	float                                         MinVehicleVelocityToBeMoving;
	class FName                                   DriverSocketName;
	class FName                                   RightHandAttachmentSocketName;
	class FName                                   LeftHandAttachmentSocketName;
	class FName                                   RightFootAttachmentSocketName;
	class FName                                   LeftFootAttachementSocketName;
	uint8                                         Pad_183C[0x4];
	struct FRotator                               RightHandRotationOffset;
	struct FRotator                               LeftHandRotationOffset;
	struct FRotator                               RightFootRotationOffset;
	struct FRotator                               LeftFootRotationOffset;
	struct FVector                                RootAttachmentOffset;
	uint8                                         Pad_18B8[0xA8];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortPlayerAnimInstance_NevadaDriver">();
	}
	static class UFortPlayerAnimInstance_NevadaDriver* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortPlayerAnimInstance_NevadaDriver>();
	}
};
static_assert(alignof(UFortPlayerAnimInstance_NevadaDriver) == 0x000010, "Wrong alignment on UFortPlayerAnimInstance_NevadaDriver");
static_assert(sizeof(UFortPlayerAnimInstance_NevadaDriver) == 0x001960, "Wrong size on UFortPlayerAnimInstance_NevadaDriver");
static_assert(offsetof(UFortPlayerAnimInstance_NevadaDriver, NevadaVehicle) == 0x0017D8, "Member 'UFortPlayerAnimInstance_NevadaDriver::NevadaVehicle' has a wrong offset!");
static_assert(offsetof(UFortPlayerAnimInstance_NevadaDriver, AnimLeftRight) == 0x0017E0, "Member 'UFortPlayerAnimInstance_NevadaDriver::AnimLeftRight' has a wrong offset!");
static_assert(offsetof(UFortPlayerAnimInstance_NevadaDriver, AnimForwardBackward) == 0x0017E4, "Member 'UFortPlayerAnimInstance_NevadaDriver::AnimForwardBackward' has a wrong offset!");
static_assert(offsetof(UFortPlayerAnimInstance_NevadaDriver, RootAttachmentLoc) == 0x0017E8, "Member 'UFortPlayerAnimInstance_NevadaDriver::RootAttachmentLoc' has a wrong offset!");
static_assert(offsetof(UFortPlayerAnimInstance_NevadaDriver, RootAttachmentRot) == 0x001800, "Member 'UFortPlayerAnimInstance_NevadaDriver::RootAttachmentRot' has a wrong offset!");
static_assert(offsetof(UFortPlayerAnimInstance_NevadaDriver, BoostCount) == 0x001818, "Member 'UFortPlayerAnimInstance_NevadaDriver::BoostCount' has a wrong offset!");
static_assert(offsetof(UFortPlayerAnimInstance_NevadaDriver, PreviousBoostCount) == 0x00181C, "Member 'UFortPlayerAnimInstance_NevadaDriver::PreviousBoostCount' has a wrong offset!");
static_assert(offsetof(UFortPlayerAnimInstance_NevadaDriver, bIsBoostingAgain) == 0x001820, "Member 'UFortPlayerAnimInstance_NevadaDriver::bIsBoostingAgain' has a wrong offset!");
static_assert(offsetof(UFortPlayerAnimInstance_NevadaDriver, bIsMoving) == 0x001821, "Member 'UFortPlayerAnimInstance_NevadaDriver::bIsMoving' has a wrong offset!");
static_assert(offsetof(UFortPlayerAnimInstance_NevadaDriver, MinVehicleVelocityToBeMoving) == 0x001824, "Member 'UFortPlayerAnimInstance_NevadaDriver::MinVehicleVelocityToBeMoving' has a wrong offset!");
static_assert(offsetof(UFortPlayerAnimInstance_NevadaDriver, DriverSocketName) == 0x001828, "Member 'UFortPlayerAnimInstance_NevadaDriver::DriverSocketName' has a wrong offset!");
static_assert(offsetof(UFortPlayerAnimInstance_NevadaDriver, RightHandAttachmentSocketName) == 0x00182C, "Member 'UFortPlayerAnimInstance_NevadaDriver::RightHandAttachmentSocketName' has a wrong offset!");
static_assert(offsetof(UFortPlayerAnimInstance_NevadaDriver, LeftHandAttachmentSocketName) == 0x001830, "Member 'UFortPlayerAnimInstance_NevadaDriver::LeftHandAttachmentSocketName' has a wrong offset!");
static_assert(offsetof(UFortPlayerAnimInstance_NevadaDriver, RightFootAttachmentSocketName) == 0x001834, "Member 'UFortPlayerAnimInstance_NevadaDriver::RightFootAttachmentSocketName' has a wrong offset!");
static_assert(offsetof(UFortPlayerAnimInstance_NevadaDriver, LeftFootAttachementSocketName) == 0x001838, "Member 'UFortPlayerAnimInstance_NevadaDriver::LeftFootAttachementSocketName' has a wrong offset!");
static_assert(offsetof(UFortPlayerAnimInstance_NevadaDriver, RightHandRotationOffset) == 0x001840, "Member 'UFortPlayerAnimInstance_NevadaDriver::RightHandRotationOffset' has a wrong offset!");
static_assert(offsetof(UFortPlayerAnimInstance_NevadaDriver, LeftHandRotationOffset) == 0x001858, "Member 'UFortPlayerAnimInstance_NevadaDriver::LeftHandRotationOffset' has a wrong offset!");
static_assert(offsetof(UFortPlayerAnimInstance_NevadaDriver, RightFootRotationOffset) == 0x001870, "Member 'UFortPlayerAnimInstance_NevadaDriver::RightFootRotationOffset' has a wrong offset!");
static_assert(offsetof(UFortPlayerAnimInstance_NevadaDriver, LeftFootRotationOffset) == 0x001888, "Member 'UFortPlayerAnimInstance_NevadaDriver::LeftFootRotationOffset' has a wrong offset!");
static_assert(offsetof(UFortPlayerAnimInstance_NevadaDriver, RootAttachmentOffset) == 0x0018A0, "Member 'UFortPlayerAnimInstance_NevadaDriver::RootAttachmentOffset' has a wrong offset!");

class UFortCameraMode_Nevada final : public UFortCameraMode_AthenaVehicle
{
public:
	uint8                                         Pad_1B30[0x28];
	struct FVector                                TractorBeamCameraOffset;
	float                                         TractorBeamCameraLerpTime;
	float                                         TractorBeamCameraExtraPitch;
	float                                         TractorBeamInactiveCameraExtraPitch;
	float                                         TractorBeamCameraPositionResetDelay;
	float                                         MinPitchForOffset;
	float                                         MaxPitchForOffset;
	struct FVector                                ExtraOffset;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortCameraMode_Nevada">();
	}
	static class UFortCameraMode_Nevada* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortCameraMode_Nevada>();
	}
};
static_assert(alignof(UFortCameraMode_Nevada) == 0x000010, "Wrong alignment on UFortCameraMode_Nevada");
static_assert(sizeof(UFortCameraMode_Nevada) == 0x001BA0, "Wrong size on UFortCameraMode_Nevada");
static_assert(offsetof(UFortCameraMode_Nevada, TractorBeamCameraOffset) == 0x001B58, "Member 'UFortCameraMode_Nevada::TractorBeamCameraOffset' has a wrong offset!");
static_assert(offsetof(UFortCameraMode_Nevada, TractorBeamCameraLerpTime) == 0x001B70, "Member 'UFortCameraMode_Nevada::TractorBeamCameraLerpTime' has a wrong offset!");
static_assert(offsetof(UFortCameraMode_Nevada, TractorBeamCameraExtraPitch) == 0x001B74, "Member 'UFortCameraMode_Nevada::TractorBeamCameraExtraPitch' has a wrong offset!");
static_assert(offsetof(UFortCameraMode_Nevada, TractorBeamInactiveCameraExtraPitch) == 0x001B78, "Member 'UFortCameraMode_Nevada::TractorBeamInactiveCameraExtraPitch' has a wrong offset!");
static_assert(offsetof(UFortCameraMode_Nevada, TractorBeamCameraPositionResetDelay) == 0x001B7C, "Member 'UFortCameraMode_Nevada::TractorBeamCameraPositionResetDelay' has a wrong offset!");
static_assert(offsetof(UFortCameraMode_Nevada, MinPitchForOffset) == 0x001B80, "Member 'UFortCameraMode_Nevada::MinPitchForOffset' has a wrong offset!");
static_assert(offsetof(UFortCameraMode_Nevada, MaxPitchForOffset) == 0x001B84, "Member 'UFortCameraMode_Nevada::MaxPitchForOffset' has a wrong offset!");
static_assert(offsetof(UFortCameraMode_Nevada, ExtraOffset) == 0x001B88, "Member 'UFortCameraMode_Nevada::ExtraOffset' has a wrong offset!");

class AFortNevadaAudioController final : public AActor
{
public:
	struct FVector2D                              SpeedRangeMap;
	struct FVector2D                              TurningRangeMap;
	struct FVector2D                              AcceleratingRangeMap;
	struct FVector2D                              BrakingRangeMap;
	struct FVector2D                              PassByRangeMap;
	struct FVector2D                              LFORangeMap;
	class AFortNevadaVehicle*                     Vehicle;
	class UFortLayeredAudioComponent*             LayeredAudioComponent;
	float                                         SpeedParamValue;
	float                                         SpeedParamValuePrev;
	float                                         AcceleratingParamValue;
	float                                         BrakingParamValue;
	struct FVector                                ForwardVector;
	struct FVector                                ForwardVectorPrev;
	float                                         TurningParamValue;
	float                                         PassByParamValue;
	float                                         LocallyControlledParamValue;
	float                                         LFOParamValue;
	uint8                                         Pad_348[0x8];

public:
	void BP_Init();
	void BP_Update();
	void CacheReferences(class UFortLayeredAudioComponent* InLayeredAudioComponent);
	void Init(class AFortNevadaVehicle* InVehicle);
	void Update();

	class AFortNevadaVehicle* GetVehicleActor() const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortNevadaAudioController">();
	}
	static class AFortNevadaAudioController* GetDefaultObj()
	{
		return GetDefaultObjImpl<AFortNevadaAudioController>();
	}
};
static_assert(alignof(AFortNevadaAudioController) == 0x000008, "Wrong alignment on AFortNevadaAudioController");
static_assert(sizeof(AFortNevadaAudioController) == 0x000350, "Wrong size on AFortNevadaAudioController");
static_assert(offsetof(AFortNevadaAudioController, SpeedRangeMap) == 0x000288, "Member 'AFortNevadaAudioController::SpeedRangeMap' has a wrong offset!");
static_assert(offsetof(AFortNevadaAudioController, TurningRangeMap) == 0x000298, "Member 'AFortNevadaAudioController::TurningRangeMap' has a wrong offset!");
static_assert(offsetof(AFortNevadaAudioController, AcceleratingRangeMap) == 0x0002A8, "Member 'AFortNevadaAudioController::AcceleratingRangeMap' has a wrong offset!");
static_assert(offsetof(AFortNevadaAudioController, BrakingRangeMap) == 0x0002B8, "Member 'AFortNevadaAudioController::BrakingRangeMap' has a wrong offset!");
static_assert(offsetof(AFortNevadaAudioController, PassByRangeMap) == 0x0002C8, "Member 'AFortNevadaAudioController::PassByRangeMap' has a wrong offset!");
static_assert(offsetof(AFortNevadaAudioController, LFORangeMap) == 0x0002D8, "Member 'AFortNevadaAudioController::LFORangeMap' has a wrong offset!");
static_assert(offsetof(AFortNevadaAudioController, Vehicle) == 0x0002E8, "Member 'AFortNevadaAudioController::Vehicle' has a wrong offset!");
static_assert(offsetof(AFortNevadaAudioController, LayeredAudioComponent) == 0x0002F0, "Member 'AFortNevadaAudioController::LayeredAudioComponent' has a wrong offset!");
static_assert(offsetof(AFortNevadaAudioController, SpeedParamValue) == 0x0002F8, "Member 'AFortNevadaAudioController::SpeedParamValue' has a wrong offset!");
static_assert(offsetof(AFortNevadaAudioController, SpeedParamValuePrev) == 0x0002FC, "Member 'AFortNevadaAudioController::SpeedParamValuePrev' has a wrong offset!");
static_assert(offsetof(AFortNevadaAudioController, AcceleratingParamValue) == 0x000300, "Member 'AFortNevadaAudioController::AcceleratingParamValue' has a wrong offset!");
static_assert(offsetof(AFortNevadaAudioController, BrakingParamValue) == 0x000304, "Member 'AFortNevadaAudioController::BrakingParamValue' has a wrong offset!");
static_assert(offsetof(AFortNevadaAudioController, ForwardVector) == 0x000308, "Member 'AFortNevadaAudioController::ForwardVector' has a wrong offset!");
static_assert(offsetof(AFortNevadaAudioController, ForwardVectorPrev) == 0x000320, "Member 'AFortNevadaAudioController::ForwardVectorPrev' has a wrong offset!");
static_assert(offsetof(AFortNevadaAudioController, TurningParamValue) == 0x000338, "Member 'AFortNevadaAudioController::TurningParamValue' has a wrong offset!");
static_assert(offsetof(AFortNevadaAudioController, PassByParamValue) == 0x00033C, "Member 'AFortNevadaAudioController::PassByParamValue' has a wrong offset!");
static_assert(offsetof(AFortNevadaAudioController, LocallyControlledParamValue) == 0x000340, "Member 'AFortNevadaAudioController::LocallyControlledParamValue' has a wrong offset!");
static_assert(offsetof(AFortNevadaAudioController, LFOParamValue) == 0x000344, "Member 'AFortNevadaAudioController::LFOParamValue' has a wrong offset!");

class UFortNevadaVehicleConfigs final : public UFortPhysicsVehicleConfigs
{
public:
	struct FNevadaMoveModeConfig                  BaseMovement;
	struct FNevadaMoveModeConfig                  BoostMovement;
	struct FNevadaMoveModeConfig                  ChargingMovement;
	struct FDampedSpringConfig                    UprightSpringForce;
	float                                         DebaseLaunchspeed;
	float                                         MaxHeight;
	float                                         MinHeight;
	float                                         OnEnterPitchAlpha;
	float                                         FallDamageHeightBuffer;
	float                                         TurningForce;
	float                                         ThrustRotationAlpha;
	float                                         PitchDrag;
	float                                         YawDrag;
	float                                         RollDrag;
	float                                         BoostThrustDuration;
	float                                         BoostDragDuration;
	int32                                         NumBoostCharges;
	float                                         BoostChargeDuration;
	float                                         BoostChargeDelay;
	float                                         BoostDragFinishSpeed;
	float                                         TractorBeamRadius;
	float                                         TractorBeamWithTargetRadius;
	struct FScalableFloat                         TractorBeamSweepLength;
	struct FScalableFloat                         TractorBeamChargeTime;
	struct FScalableFloat                         TractorBeamDurationTime;
	struct FScalableFloat                         TractorBeamTossImpulseStrengthForward;
	struct FScalableFloat                         TractorBeamTossImpulseStrengthUpward;
	float                                         TractorBeamShutdownTime;
	uint8                                         Pad_A04[0x4];
	struct FScalableFloat                         TractorBeamTurnOffDamage;
	struct FScalableFloat                         AllowTractorBeamAIPawns;
	float                                         TractorBeamBreakForceMagnitude;
	uint8                                         Pad_A5C[0x4];
	struct FScalableFloat                         TractorBeamActive;
	struct FScalableFloat                         TractorBeamCooldown;
	struct FScalableFloat                         TractorBeamDisruptionCooldown;
	class FName                                   TractorBeamSocket;
	uint8                                         Pad_ADC[0x4];
	struct FVector                                TractorBeamAttachPositionOffset;
	struct FRigidBodyErrorCorrection              TractorBeamTargetOverridenErrorCorrection;
	float                                         VictimPitchDrag;
	float                                         VictimYawDrag;
	float                                         VictimRollDrag;
	struct FDampedSpringConfig                    TractorBeamVictimUprightForce;
	int32                                         NumReboots;
	int32                                         NumRebootsDefault;
	float                                         MaxCrashingTime;
	float                                         MaxCrashingScrapingTime;
	float                                         MaxCrashingTimeSpentNotMoving;
	float                                         SpeedThresholdForCrashed;
	uint8                                         Pad_B5C[0x4];
	struct FScalableFloat                         RebootDuration;
	struct FScalableFloat                         RebootDelay;
	float                                         LandingTraceRange;
	float                                         DesiredLandingDistance;
	float                                         LandingDelay_Max;
	float                                         LandingDelay_Min;
	float                                         HeightForMinLandingDelay;
	float                                         HeightForMaxLandingDelay;
	float                                         LandingPitchAlphaMax;
	float                                         LandingPitchAlphaMin;
	float                                         DriverSeatRotationAnimBlendSpeed;
	float                                         CrashingDesiredUpLerpFactor;
	float                                         CrashedLinearDrag;
	float                                         LandedDragCoef;
	float                                         LandedDragCoef2;
	float                                         LandedMaxDragSpeed;
	float                                         CrashedAngularDragMultiplier;
	float                                         BoostFOV;
	float                                         ExtraTraceInteractRange;
	float                                         AntiGravityMult;
	float                                         InitialLiftDuration;
	uint8                                         Pad_BFC[0x4];
	struct FScalableFloat                         BatteryCostDuringFlight;
	struct FScalableFloat                         BatteryRegenDelay;
	struct FScalableFloat                         BatteryRegenTickRate;
	struct FScalableFloat                         BatteryRegenAmount;
	struct FScalableFloat                         MaxBattery;
	struct FScalableFloat                         MinBatteryForFlight;
	TArray<class FName>                           CockpitShapeNames;
	struct FScalableFloat                         CockpitDamageMult;
	struct FScalableFloat                         CockpitHealth;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortNevadaVehicleConfigs">();
	}
	static class UFortNevadaVehicleConfigs* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortNevadaVehicleConfigs>();
	}
};
static_assert(alignof(UFortNevadaVehicleConfigs) == 0x000008, "Wrong alignment on UFortNevadaVehicleConfigs");
static_assert(sizeof(UFortNevadaVehicleConfigs) == 0x000D50, "Wrong size on UFortNevadaVehicleConfigs");
static_assert(offsetof(UFortNevadaVehicleConfigs, BaseMovement) == 0x0008A8, "Member 'UFortNevadaVehicleConfigs::BaseMovement' has a wrong offset!");
static_assert(offsetof(UFortNevadaVehicleConfigs, BoostMovement) == 0x0008BC, "Member 'UFortNevadaVehicleConfigs::BoostMovement' has a wrong offset!");
static_assert(offsetof(UFortNevadaVehicleConfigs, ChargingMovement) == 0x0008D0, "Member 'UFortNevadaVehicleConfigs::ChargingMovement' has a wrong offset!");
static_assert(offsetof(UFortNevadaVehicleConfigs, UprightSpringForce) == 0x0008E4, "Member 'UFortNevadaVehicleConfigs::UprightSpringForce' has a wrong offset!");
static_assert(offsetof(UFortNevadaVehicleConfigs, DebaseLaunchspeed) == 0x0008F0, "Member 'UFortNevadaVehicleConfigs::DebaseLaunchspeed' has a wrong offset!");
static_assert(offsetof(UFortNevadaVehicleConfigs, MaxHeight) == 0x0008F4, "Member 'UFortNevadaVehicleConfigs::MaxHeight' has a wrong offset!");
static_assert(offsetof(UFortNevadaVehicleConfigs, MinHeight) == 0x0008F8, "Member 'UFortNevadaVehicleConfigs::MinHeight' has a wrong offset!");
static_assert(offsetof(UFortNevadaVehicleConfigs, OnEnterPitchAlpha) == 0x0008FC, "Member 'UFortNevadaVehicleConfigs::OnEnterPitchAlpha' has a wrong offset!");
static_assert(offsetof(UFortNevadaVehicleConfigs, FallDamageHeightBuffer) == 0x000900, "Member 'UFortNevadaVehicleConfigs::FallDamageHeightBuffer' has a wrong offset!");
static_assert(offsetof(UFortNevadaVehicleConfigs, TurningForce) == 0x000904, "Member 'UFortNevadaVehicleConfigs::TurningForce' has a wrong offset!");
static_assert(offsetof(UFortNevadaVehicleConfigs, ThrustRotationAlpha) == 0x000908, "Member 'UFortNevadaVehicleConfigs::ThrustRotationAlpha' has a wrong offset!");
static_assert(offsetof(UFortNevadaVehicleConfigs, PitchDrag) == 0x00090C, "Member 'UFortNevadaVehicleConfigs::PitchDrag' has a wrong offset!");
static_assert(offsetof(UFortNevadaVehicleConfigs, YawDrag) == 0x000910, "Member 'UFortNevadaVehicleConfigs::YawDrag' has a wrong offset!");
static_assert(offsetof(UFortNevadaVehicleConfigs, RollDrag) == 0x000914, "Member 'UFortNevadaVehicleConfigs::RollDrag' has a wrong offset!");
static_assert(offsetof(UFortNevadaVehicleConfigs, BoostThrustDuration) == 0x000918, "Member 'UFortNevadaVehicleConfigs::BoostThrustDuration' has a wrong offset!");
static_assert(offsetof(UFortNevadaVehicleConfigs, BoostDragDuration) == 0x00091C, "Member 'UFortNevadaVehicleConfigs::BoostDragDuration' has a wrong offset!");
static_assert(offsetof(UFortNevadaVehicleConfigs, NumBoostCharges) == 0x000920, "Member 'UFortNevadaVehicleConfigs::NumBoostCharges' has a wrong offset!");
static_assert(offsetof(UFortNevadaVehicleConfigs, BoostChargeDuration) == 0x000924, "Member 'UFortNevadaVehicleConfigs::BoostChargeDuration' has a wrong offset!");
static_assert(offsetof(UFortNevadaVehicleConfigs, BoostChargeDelay) == 0x000928, "Member 'UFortNevadaVehicleConfigs::BoostChargeDelay' has a wrong offset!");
static_assert(offsetof(UFortNevadaVehicleConfigs, BoostDragFinishSpeed) == 0x00092C, "Member 'UFortNevadaVehicleConfigs::BoostDragFinishSpeed' has a wrong offset!");
static_assert(offsetof(UFortNevadaVehicleConfigs, TractorBeamRadius) == 0x000930, "Member 'UFortNevadaVehicleConfigs::TractorBeamRadius' has a wrong offset!");
static_assert(offsetof(UFortNevadaVehicleConfigs, TractorBeamWithTargetRadius) == 0x000934, "Member 'UFortNevadaVehicleConfigs::TractorBeamWithTargetRadius' has a wrong offset!");
static_assert(offsetof(UFortNevadaVehicleConfigs, TractorBeamSweepLength) == 0x000938, "Member 'UFortNevadaVehicleConfigs::TractorBeamSweepLength' has a wrong offset!");
static_assert(offsetof(UFortNevadaVehicleConfigs, TractorBeamChargeTime) == 0x000960, "Member 'UFortNevadaVehicleConfigs::TractorBeamChargeTime' has a wrong offset!");
static_assert(offsetof(UFortNevadaVehicleConfigs, TractorBeamDurationTime) == 0x000988, "Member 'UFortNevadaVehicleConfigs::TractorBeamDurationTime' has a wrong offset!");
static_assert(offsetof(UFortNevadaVehicleConfigs, TractorBeamTossImpulseStrengthForward) == 0x0009B0, "Member 'UFortNevadaVehicleConfigs::TractorBeamTossImpulseStrengthForward' has a wrong offset!");
static_assert(offsetof(UFortNevadaVehicleConfigs, TractorBeamTossImpulseStrengthUpward) == 0x0009D8, "Member 'UFortNevadaVehicleConfigs::TractorBeamTossImpulseStrengthUpward' has a wrong offset!");
static_assert(offsetof(UFortNevadaVehicleConfigs, TractorBeamShutdownTime) == 0x000A00, "Member 'UFortNevadaVehicleConfigs::TractorBeamShutdownTime' has a wrong offset!");
static_assert(offsetof(UFortNevadaVehicleConfigs, TractorBeamTurnOffDamage) == 0x000A08, "Member 'UFortNevadaVehicleConfigs::TractorBeamTurnOffDamage' has a wrong offset!");
static_assert(offsetof(UFortNevadaVehicleConfigs, AllowTractorBeamAIPawns) == 0x000A30, "Member 'UFortNevadaVehicleConfigs::AllowTractorBeamAIPawns' has a wrong offset!");
static_assert(offsetof(UFortNevadaVehicleConfigs, TractorBeamBreakForceMagnitude) == 0x000A58, "Member 'UFortNevadaVehicleConfigs::TractorBeamBreakForceMagnitude' has a wrong offset!");
static_assert(offsetof(UFortNevadaVehicleConfigs, TractorBeamActive) == 0x000A60, "Member 'UFortNevadaVehicleConfigs::TractorBeamActive' has a wrong offset!");
static_assert(offsetof(UFortNevadaVehicleConfigs, TractorBeamCooldown) == 0x000A88, "Member 'UFortNevadaVehicleConfigs::TractorBeamCooldown' has a wrong offset!");
static_assert(offsetof(UFortNevadaVehicleConfigs, TractorBeamDisruptionCooldown) == 0x000AB0, "Member 'UFortNevadaVehicleConfigs::TractorBeamDisruptionCooldown' has a wrong offset!");
static_assert(offsetof(UFortNevadaVehicleConfigs, TractorBeamSocket) == 0x000AD8, "Member 'UFortNevadaVehicleConfigs::TractorBeamSocket' has a wrong offset!");
static_assert(offsetof(UFortNevadaVehicleConfigs, TractorBeamAttachPositionOffset) == 0x000AE0, "Member 'UFortNevadaVehicleConfigs::TractorBeamAttachPositionOffset' has a wrong offset!");
static_assert(offsetof(UFortNevadaVehicleConfigs, TractorBeamTargetOverridenErrorCorrection) == 0x000AF8, "Member 'UFortNevadaVehicleConfigs::TractorBeamTargetOverridenErrorCorrection' has a wrong offset!");
static_assert(offsetof(UFortNevadaVehicleConfigs, VictimPitchDrag) == 0x000B2C, "Member 'UFortNevadaVehicleConfigs::VictimPitchDrag' has a wrong offset!");
static_assert(offsetof(UFortNevadaVehicleConfigs, VictimYawDrag) == 0x000B30, "Member 'UFortNevadaVehicleConfigs::VictimYawDrag' has a wrong offset!");
static_assert(offsetof(UFortNevadaVehicleConfigs, VictimRollDrag) == 0x000B34, "Member 'UFortNevadaVehicleConfigs::VictimRollDrag' has a wrong offset!");
static_assert(offsetof(UFortNevadaVehicleConfigs, TractorBeamVictimUprightForce) == 0x000B38, "Member 'UFortNevadaVehicleConfigs::TractorBeamVictimUprightForce' has a wrong offset!");
static_assert(offsetof(UFortNevadaVehicleConfigs, NumReboots) == 0x000B44, "Member 'UFortNevadaVehicleConfigs::NumReboots' has a wrong offset!");
static_assert(offsetof(UFortNevadaVehicleConfigs, NumRebootsDefault) == 0x000B48, "Member 'UFortNevadaVehicleConfigs::NumRebootsDefault' has a wrong offset!");
static_assert(offsetof(UFortNevadaVehicleConfigs, MaxCrashingTime) == 0x000B4C, "Member 'UFortNevadaVehicleConfigs::MaxCrashingTime' has a wrong offset!");
static_assert(offsetof(UFortNevadaVehicleConfigs, MaxCrashingScrapingTime) == 0x000B50, "Member 'UFortNevadaVehicleConfigs::MaxCrashingScrapingTime' has a wrong offset!");
static_assert(offsetof(UFortNevadaVehicleConfigs, MaxCrashingTimeSpentNotMoving) == 0x000B54, "Member 'UFortNevadaVehicleConfigs::MaxCrashingTimeSpentNotMoving' has a wrong offset!");
static_assert(offsetof(UFortNevadaVehicleConfigs, SpeedThresholdForCrashed) == 0x000B58, "Member 'UFortNevadaVehicleConfigs::SpeedThresholdForCrashed' has a wrong offset!");
static_assert(offsetof(UFortNevadaVehicleConfigs, RebootDuration) == 0x000B60, "Member 'UFortNevadaVehicleConfigs::RebootDuration' has a wrong offset!");
static_assert(offsetof(UFortNevadaVehicleConfigs, RebootDelay) == 0x000B88, "Member 'UFortNevadaVehicleConfigs::RebootDelay' has a wrong offset!");
static_assert(offsetof(UFortNevadaVehicleConfigs, LandingTraceRange) == 0x000BB0, "Member 'UFortNevadaVehicleConfigs::LandingTraceRange' has a wrong offset!");
static_assert(offsetof(UFortNevadaVehicleConfigs, DesiredLandingDistance) == 0x000BB4, "Member 'UFortNevadaVehicleConfigs::DesiredLandingDistance' has a wrong offset!");
static_assert(offsetof(UFortNevadaVehicleConfigs, LandingDelay_Max) == 0x000BB8, "Member 'UFortNevadaVehicleConfigs::LandingDelay_Max' has a wrong offset!");
static_assert(offsetof(UFortNevadaVehicleConfigs, LandingDelay_Min) == 0x000BBC, "Member 'UFortNevadaVehicleConfigs::LandingDelay_Min' has a wrong offset!");
static_assert(offsetof(UFortNevadaVehicleConfigs, HeightForMinLandingDelay) == 0x000BC0, "Member 'UFortNevadaVehicleConfigs::HeightForMinLandingDelay' has a wrong offset!");
static_assert(offsetof(UFortNevadaVehicleConfigs, HeightForMaxLandingDelay) == 0x000BC4, "Member 'UFortNevadaVehicleConfigs::HeightForMaxLandingDelay' has a wrong offset!");
static_assert(offsetof(UFortNevadaVehicleConfigs, LandingPitchAlphaMax) == 0x000BC8, "Member 'UFortNevadaVehicleConfigs::LandingPitchAlphaMax' has a wrong offset!");
static_assert(offsetof(UFortNevadaVehicleConfigs, LandingPitchAlphaMin) == 0x000BCC, "Member 'UFortNevadaVehicleConfigs::LandingPitchAlphaMin' has a wrong offset!");
static_assert(offsetof(UFortNevadaVehicleConfigs, DriverSeatRotationAnimBlendSpeed) == 0x000BD0, "Member 'UFortNevadaVehicleConfigs::DriverSeatRotationAnimBlendSpeed' has a wrong offset!");
static_assert(offsetof(UFortNevadaVehicleConfigs, CrashingDesiredUpLerpFactor) == 0x000BD4, "Member 'UFortNevadaVehicleConfigs::CrashingDesiredUpLerpFactor' has a wrong offset!");
static_assert(offsetof(UFortNevadaVehicleConfigs, CrashedLinearDrag) == 0x000BD8, "Member 'UFortNevadaVehicleConfigs::CrashedLinearDrag' has a wrong offset!");
static_assert(offsetof(UFortNevadaVehicleConfigs, LandedDragCoef) == 0x000BDC, "Member 'UFortNevadaVehicleConfigs::LandedDragCoef' has a wrong offset!");
static_assert(offsetof(UFortNevadaVehicleConfigs, LandedDragCoef2) == 0x000BE0, "Member 'UFortNevadaVehicleConfigs::LandedDragCoef2' has a wrong offset!");
static_assert(offsetof(UFortNevadaVehicleConfigs, LandedMaxDragSpeed) == 0x000BE4, "Member 'UFortNevadaVehicleConfigs::LandedMaxDragSpeed' has a wrong offset!");
static_assert(offsetof(UFortNevadaVehicleConfigs, CrashedAngularDragMultiplier) == 0x000BE8, "Member 'UFortNevadaVehicleConfigs::CrashedAngularDragMultiplier' has a wrong offset!");
static_assert(offsetof(UFortNevadaVehicleConfigs, BoostFOV) == 0x000BEC, "Member 'UFortNevadaVehicleConfigs::BoostFOV' has a wrong offset!");
static_assert(offsetof(UFortNevadaVehicleConfigs, ExtraTraceInteractRange) == 0x000BF0, "Member 'UFortNevadaVehicleConfigs::ExtraTraceInteractRange' has a wrong offset!");
static_assert(offsetof(UFortNevadaVehicleConfigs, AntiGravityMult) == 0x000BF4, "Member 'UFortNevadaVehicleConfigs::AntiGravityMult' has a wrong offset!");
static_assert(offsetof(UFortNevadaVehicleConfigs, InitialLiftDuration) == 0x000BF8, "Member 'UFortNevadaVehicleConfigs::InitialLiftDuration' has a wrong offset!");
static_assert(offsetof(UFortNevadaVehicleConfigs, BatteryCostDuringFlight) == 0x000C00, "Member 'UFortNevadaVehicleConfigs::BatteryCostDuringFlight' has a wrong offset!");
static_assert(offsetof(UFortNevadaVehicleConfigs, BatteryRegenDelay) == 0x000C28, "Member 'UFortNevadaVehicleConfigs::BatteryRegenDelay' has a wrong offset!");
static_assert(offsetof(UFortNevadaVehicleConfigs, BatteryRegenTickRate) == 0x000C50, "Member 'UFortNevadaVehicleConfigs::BatteryRegenTickRate' has a wrong offset!");
static_assert(offsetof(UFortNevadaVehicleConfigs, BatteryRegenAmount) == 0x000C78, "Member 'UFortNevadaVehicleConfigs::BatteryRegenAmount' has a wrong offset!");
static_assert(offsetof(UFortNevadaVehicleConfigs, MaxBattery) == 0x000CA0, "Member 'UFortNevadaVehicleConfigs::MaxBattery' has a wrong offset!");
static_assert(offsetof(UFortNevadaVehicleConfigs, MinBatteryForFlight) == 0x000CC8, "Member 'UFortNevadaVehicleConfigs::MinBatteryForFlight' has a wrong offset!");
static_assert(offsetof(UFortNevadaVehicleConfigs, CockpitShapeNames) == 0x000CF0, "Member 'UFortNevadaVehicleConfigs::CockpitShapeNames' has a wrong offset!");
static_assert(offsetof(UFortNevadaVehicleConfigs, CockpitDamageMult) == 0x000D00, "Member 'UFortNevadaVehicleConfigs::CockpitDamageMult' has a wrong offset!");
static_assert(offsetof(UFortNevadaVehicleConfigs, CockpitHealth) == 0x000D28, "Member 'UFortNevadaVehicleConfigs::CockpitHealth' has a wrong offset!");

}
