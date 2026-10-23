#pragma once

#include "Basic.hpp"

#include "GameplayAbilities_structs.hpp"
#include "FortniteGame_structs.hpp"
#include "FortniteGame_classes.hpp"
#include "FieldSystemEngine_classes.hpp"
#include "CoreUObject_structs.hpp"
#include "WindRuntime_structs.hpp"
#include "GameplayTags_structs.hpp"
#include "Engine_structs.hpp"
#include "Engine_classes.hpp"

namespace SDK
{

class UFortPlayerWindTunnelAnimInstance final : public UFortPlayerAnimInstanceProxy
{
public:
	uint8                                         bApplyWindSlideAdditive : 1;
	uint8                                         Pad_15A1[0xF];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortPlayerWindTunnelAnimInstance">();
	}
	static class UFortPlayerWindTunnelAnimInstance* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortPlayerWindTunnelAnimInstance>();
	}
};
static_assert(alignof(UFortPlayerWindTunnelAnimInstance) == 0x000010, "Wrong alignment on UFortPlayerWindTunnelAnimInstance");
static_assert(sizeof(UFortPlayerWindTunnelAnimInstance) == 0x0015B0, "Wrong size on UFortPlayerWindTunnelAnimInstance");

class UWindCheatManager final : public UChildCheatManager
{
public:
	TSubclassOf<class UGameplayEffect>            InflateEffectClass;
	TSubclassOf<class UGameplayEffect>            DeflateEffectClass;
	int32                                         MinBalloonsOnPlayer;
	int32                                         MaxBalloonsOnPlayer;

public:
	void InflateBalloonOnSelf(int32 NumBalloons) const;
	void ReleaseBalloonOnSelf(int32 NumBalloons) const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"WindCheatManager">();
	}
	static class UWindCheatManager* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWindCheatManager>();
	}
};
static_assert(alignof(UWindCheatManager) == 0x000008, "Wrong alignment on UWindCheatManager");
static_assert(sizeof(UWindCheatManager) == 0x000040, "Wrong size on UWindCheatManager");
static_assert(offsetof(UWindCheatManager, InflateEffectClass) == 0x000028, "Member 'UWindCheatManager::InflateEffectClass' has a wrong offset!");
static_assert(offsetof(UWindCheatManager, DeflateEffectClass) == 0x000030, "Member 'UWindCheatManager::DeflateEffectClass' has a wrong offset!");
static_assert(offsetof(UWindCheatManager, MinBalloonsOnPlayer) == 0x000038, "Member 'UWindCheatManager::MinBalloonsOnPlayer' has a wrong offset!");
static_assert(offsetof(UWindCheatManager, MaxBalloonsOnPlayer) == 0x00003C, "Member 'UWindCheatManager::MaxBalloonsOnPlayer' has a wrong offset!");

class AWindField : public AFieldSystemActor
{
public:
	float                                         StartTime;
	float                                         StopTime;
	float                                         IncomingDuration;
	float                                         OutgoingDuration;
	float                                         StrengthMultiplier;
	bool                                          bIsActive;
	uint8                                         Pad_2A5[0xF3];

public:
	void AddCollider(class UShapeComponent* ShapeComponent);
	void AddIgnoredActor(class AActor* Actor);
	void OnBeginOverlap(class UPrimitiveComponent* OverlappedComponent, class AActor* Other, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
	void OnEndOverlap(class UPrimitiveComponent* OverlappedComponent, class AActor* Other, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
	void RemoveCollider(class UShapeComponent* ShapeComponent);
	void RemoveIgnoredActor(class AActor* Actor);
	void SetActive(bool bInIsActive);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"WindField">();
	}
	static class AWindField* GetDefaultObj()
	{
		return GetDefaultObjImpl<AWindField>();
	}
};
static_assert(alignof(AWindField) == 0x000008, "Wrong alignment on AWindField");
static_assert(sizeof(AWindField) == 0x000398, "Wrong size on AWindField");
static_assert(offsetof(AWindField, StartTime) == 0x000290, "Member 'AWindField::StartTime' has a wrong offset!");
static_assert(offsetof(AWindField, StopTime) == 0x000294, "Member 'AWindField::StopTime' has a wrong offset!");
static_assert(offsetof(AWindField, IncomingDuration) == 0x000298, "Member 'AWindField::IncomingDuration' has a wrong offset!");
static_assert(offsetof(AWindField, OutgoingDuration) == 0x00029C, "Member 'AWindField::OutgoingDuration' has a wrong offset!");
static_assert(offsetof(AWindField, StrengthMultiplier) == 0x0002A0, "Member 'AWindField::StrengthMultiplier' has a wrong offset!");
static_assert(offsetof(AWindField, bIsActive) == 0x0002A4, "Member 'AWindField::bIsActive' has a wrong offset!");

class ALinearWindField final : public AWindField
{
public:
	struct FVector                                Direction;
	float                                         FieldStrength;
	float                                         ForceStrength;
	class FName                                   PawnForceName;
	float                                         PawnForceStrength;
	class URadialVector*                          RadialVector;
	class URadialFalloff*                         RadialFalloff;
	class UOperatorField*                         OperatorField;
	uint8                                         Pad_3D8[0x50];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"LinearWindField">();
	}
	static class ALinearWindField* GetDefaultObj()
	{
		return GetDefaultObjImpl<ALinearWindField>();
	}
};
static_assert(alignof(ALinearWindField) == 0x000008, "Wrong alignment on ALinearWindField");
static_assert(sizeof(ALinearWindField) == 0x000428, "Wrong size on ALinearWindField");
static_assert(offsetof(ALinearWindField, Direction) == 0x000398, "Member 'ALinearWindField::Direction' has a wrong offset!");
static_assert(offsetof(ALinearWindField, FieldStrength) == 0x0003B0, "Member 'ALinearWindField::FieldStrength' has a wrong offset!");
static_assert(offsetof(ALinearWindField, ForceStrength) == 0x0003B4, "Member 'ALinearWindField::ForceStrength' has a wrong offset!");
static_assert(offsetof(ALinearWindField, PawnForceName) == 0x0003B8, "Member 'ALinearWindField::PawnForceName' has a wrong offset!");
static_assert(offsetof(ALinearWindField, PawnForceStrength) == 0x0003BC, "Member 'ALinearWindField::PawnForceStrength' has a wrong offset!");
static_assert(offsetof(ALinearWindField, RadialVector) == 0x0003C0, "Member 'ALinearWindField::RadialVector' has a wrong offset!");
static_assert(offsetof(ALinearWindField, RadialFalloff) == 0x0003C8, "Member 'ALinearWindField::RadialFalloff' has a wrong offset!");
static_assert(offsetof(ALinearWindField, OperatorField) == 0x0003D0, "Member 'ALinearWindField::OperatorField' has a wrong offset!");

class ARadialWindField final : public AWindField
{
public:
	struct FScalableFloat                         FieldRadius;
	struct FScalableFloat                         FieldStrength;
	struct FScalableFloat                         ForceRadius;
	struct FScalableFloat                         ForceStrength;
	class UCurveFloat*                            ForceStrengthDistanceFalloff;
	class FName                                   PawnForceName;
	uint8                                         Pad_444[0x4];
	struct FScalableFloat                         PawnForceStrength;
	class UCurveFloat*                            PawnForceStrengthDistanceFalloff;
	bool                                          bPawnForceIsPush;
	uint8                                         Pad_479[0x7];
	class URadialVector*                          RadialVector;
	class URadialFalloff*                         RadialFalloff;
	class UOperatorField*                         OperatorField;
	uint8                                         Pad_498[0x50];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"RadialWindField">();
	}
	static class ARadialWindField* GetDefaultObj()
	{
		return GetDefaultObjImpl<ARadialWindField>();
	}
};
static_assert(alignof(ARadialWindField) == 0x000008, "Wrong alignment on ARadialWindField");
static_assert(sizeof(ARadialWindField) == 0x0004E8, "Wrong size on ARadialWindField");
static_assert(offsetof(ARadialWindField, FieldRadius) == 0x000398, "Member 'ARadialWindField::FieldRadius' has a wrong offset!");
static_assert(offsetof(ARadialWindField, FieldStrength) == 0x0003C0, "Member 'ARadialWindField::FieldStrength' has a wrong offset!");
static_assert(offsetof(ARadialWindField, ForceRadius) == 0x0003E8, "Member 'ARadialWindField::ForceRadius' has a wrong offset!");
static_assert(offsetof(ARadialWindField, ForceStrength) == 0x000410, "Member 'ARadialWindField::ForceStrength' has a wrong offset!");
static_assert(offsetof(ARadialWindField, ForceStrengthDistanceFalloff) == 0x000438, "Member 'ARadialWindField::ForceStrengthDistanceFalloff' has a wrong offset!");
static_assert(offsetof(ARadialWindField, PawnForceName) == 0x000440, "Member 'ARadialWindField::PawnForceName' has a wrong offset!");
static_assert(offsetof(ARadialWindField, PawnForceStrength) == 0x000448, "Member 'ARadialWindField::PawnForceStrength' has a wrong offset!");
static_assert(offsetof(ARadialWindField, PawnForceStrengthDistanceFalloff) == 0x000470, "Member 'ARadialWindField::PawnForceStrengthDistanceFalloff' has a wrong offset!");
static_assert(offsetof(ARadialWindField, bPawnForceIsPush) == 0x000478, "Member 'ARadialWindField::bPawnForceIsPush' has a wrong offset!");
static_assert(offsetof(ARadialWindField, RadialVector) == 0x000480, "Member 'ARadialWindField::RadialVector' has a wrong offset!");
static_assert(offsetof(ARadialWindField, RadialFalloff) == 0x000488, "Member 'ARadialWindField::RadialFalloff' has a wrong offset!");
static_assert(offsetof(ARadialWindField, OperatorField) == 0x000490, "Member 'ARadialWindField::OperatorField' has a wrong offset!");

class UWindSplineComponent final : public USplineComponent
{
public:
	uint8                                         Pad_668[0x20];
	struct FScalableFloat                         DisableSafeZonePhaseIndex;
	class UStaticMesh*                            StaticMesh;
	class UStaticMesh*                            StartStaticMesh;
	class UStaticMesh*                            EndStaticMesh;
	ESplineMeshAxis                               MeshForwardAxis;
	uint8                                         Pad_6C9[0x7];
	struct FScalableFloat                         MeshRollVariance;
	class FName                                   ActiveSectionStartMaterialParamName;
	class FName                                   ActiveSectionEndMaterialParamName;
	struct FScalableFloat                         TargetingRefreshRate;
	struct FScalableFloat                         TargetingRadius;
	TArray<EObjectTypeQuery>                      TargetObjectTypes;
	struct FGameplayTagQuery                      TargetTagQuery;
	struct FGameplayTagQuery                      BlockageTagQuery;
	struct FScalableFloat                         BlockageSubdivisions;
	TArray<struct FWindSplineTargetEffects>       TargetEffects;
	TMap<EFortPhysicsObjectType, struct FScalableFloat> ObjectTypeToMaxTargetCount;
	struct FScalableFloat                         MaxTargetCountReachedExpelDuration;
	struct FScalableFloat                         SkydivingLandingAngle;
	struct FScalableFloat                         RampUpSpeed;
	struct FScalableFloat                         RampDownSpeed;
	struct FScalableFloat                         ForwardForceFallOffStartDistance;
	struct FScalableFloat                         ForwardForceMagnitude;
	struct FScalableFloat                         ReverseForceMagnitude;
	struct FScalableFloat                         ForwardForceDistanceFallOffExponent;
	struct FScalableFloat                         InwardForceInnerRadius;
	struct FScalableFloat                         InwardForceOuterRadiusAcceleration;
	struct FScalableFloat                         InwardForceInnerRadiusDeceleration;
	struct FScalableFloat                         InwardForceInnerRadiusSpeedThreshold;
	struct FScalableFloat                         InwardForceOuterRadiusSpeedThreshold;
	struct FScalableFloat                         InwardForceMaxReductionFromSteering;
	struct FScalableFloat                         InwardForceMaxMultiplierWhenSteering;
	struct FScalableFloat                         InwardForceMaxSteerAngle;
	struct FScalableFloat                         InwardForceLowVelocityThreshold;
	struct FScalableFloat                         InwardForceLowVelocityMinValue;
	struct FScalableFloat                         InwardForceSteeringReduceAccelerationPower;
	struct FScalableFloat                         InwardForceSteeringReduceDecelerationPower;
	TMap<EFortPhysicsSimSize, struct FWindSplineForceModifiers> SizeForceModifiers;
	TMap<EFortPhysicsObjectType, struct FWindSplineForceModifiers> ObjectTypeForceModifiers;
	TArray<struct FWindSplineTagBasedForceModifiers> QueryBasedForceModifiers;
	struct FGameplayTagQuery                      PawnSkydivingTimeLimitQuery;
	struct FScalableFloat                         PawnSkydivingTimeLimit;
	struct FScalableFloat                         PawnSkydivingMinDistanceAboveGround;
	struct FScalableFloat                         AutoWakeUpPhysicsObjects;
	struct FScalableFloat                         FieldMagnitudeBase;
	struct FScalableFloat                         FieldMinMagnitudeAfterFalloff;
	struct FScalableFloat                         FieldMaxMagnitudeAfterFalloff;
	TSubclassOf<class UAnimInstance>              PlayerWindAnimationLayer;
	TMulticastInlineDelegate<void()>              OnWindSplineDisabled;
	TMulticastInlineDelegate<void()>              OnWindSplineEnabled;
	struct FWindSplineTargetData                  TargetData;
	struct FWindSplineBlockageArray               Blockages;
	class UFieldSystemComponent*                  FieldSystemComponent;
	class UUniformVector*                         UniformVector;
	class UBoxFalloff*                            BoxFalloff;
	class UOperatorField*                         BoxOperatorField;
	TArray<struct FWindSplineMeshData>            MeshDataArray;
	TArray<class UFXSystemComponent*>             FXComponents;
	uint8                                         Pad_10B8[0x388];

public:
	void Disable();
	void Enable();
	void HandleSafeZoneUpdated();
	void OnRep_Blockages();
	void OnRep_TargetData();

	void GetClosestActiveLocations(const struct FVector& InTargetLocation, bool* bIsClosestPointActive, struct FVector* ClosestPointOnSpline, TArray<struct FVector>* ClosestActiveLocations) const;
	float GetTargetingRadius() const;
	void GetWindDataAtLocation(const struct FVector& InTargetLocation, struct FVector* OutDirection, float* OutAttenuation) const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"WindSplineComponent">();
	}
	static class UWindSplineComponent* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWindSplineComponent>();
	}
};
static_assert(alignof(UWindSplineComponent) == 0x000010, "Wrong alignment on UWindSplineComponent");
static_assert(sizeof(UWindSplineComponent) == 0x001440, "Wrong size on UWindSplineComponent");
static_assert(offsetof(UWindSplineComponent, DisableSafeZonePhaseIndex) == 0x000688, "Member 'UWindSplineComponent::DisableSafeZonePhaseIndex' has a wrong offset!");
static_assert(offsetof(UWindSplineComponent, StaticMesh) == 0x0006B0, "Member 'UWindSplineComponent::StaticMesh' has a wrong offset!");
static_assert(offsetof(UWindSplineComponent, StartStaticMesh) == 0x0006B8, "Member 'UWindSplineComponent::StartStaticMesh' has a wrong offset!");
static_assert(offsetof(UWindSplineComponent, EndStaticMesh) == 0x0006C0, "Member 'UWindSplineComponent::EndStaticMesh' has a wrong offset!");
static_assert(offsetof(UWindSplineComponent, MeshForwardAxis) == 0x0006C8, "Member 'UWindSplineComponent::MeshForwardAxis' has a wrong offset!");
static_assert(offsetof(UWindSplineComponent, MeshRollVariance) == 0x0006D0, "Member 'UWindSplineComponent::MeshRollVariance' has a wrong offset!");
static_assert(offsetof(UWindSplineComponent, ActiveSectionStartMaterialParamName) == 0x0006F8, "Member 'UWindSplineComponent::ActiveSectionStartMaterialParamName' has a wrong offset!");
static_assert(offsetof(UWindSplineComponent, ActiveSectionEndMaterialParamName) == 0x0006FC, "Member 'UWindSplineComponent::ActiveSectionEndMaterialParamName' has a wrong offset!");
static_assert(offsetof(UWindSplineComponent, TargetingRefreshRate) == 0x000700, "Member 'UWindSplineComponent::TargetingRefreshRate' has a wrong offset!");
static_assert(offsetof(UWindSplineComponent, TargetingRadius) == 0x000728, "Member 'UWindSplineComponent::TargetingRadius' has a wrong offset!");
static_assert(offsetof(UWindSplineComponent, TargetObjectTypes) == 0x000750, "Member 'UWindSplineComponent::TargetObjectTypes' has a wrong offset!");
static_assert(offsetof(UWindSplineComponent, TargetTagQuery) == 0x000760, "Member 'UWindSplineComponent::TargetTagQuery' has a wrong offset!");
static_assert(offsetof(UWindSplineComponent, BlockageTagQuery) == 0x0007A8, "Member 'UWindSplineComponent::BlockageTagQuery' has a wrong offset!");
static_assert(offsetof(UWindSplineComponent, BlockageSubdivisions) == 0x0007F0, "Member 'UWindSplineComponent::BlockageSubdivisions' has a wrong offset!");
static_assert(offsetof(UWindSplineComponent, TargetEffects) == 0x000818, "Member 'UWindSplineComponent::TargetEffects' has a wrong offset!");
static_assert(offsetof(UWindSplineComponent, ObjectTypeToMaxTargetCount) == 0x000828, "Member 'UWindSplineComponent::ObjectTypeToMaxTargetCount' has a wrong offset!");
static_assert(offsetof(UWindSplineComponent, MaxTargetCountReachedExpelDuration) == 0x000878, "Member 'UWindSplineComponent::MaxTargetCountReachedExpelDuration' has a wrong offset!");
static_assert(offsetof(UWindSplineComponent, SkydivingLandingAngle) == 0x0008A0, "Member 'UWindSplineComponent::SkydivingLandingAngle' has a wrong offset!");
static_assert(offsetof(UWindSplineComponent, RampUpSpeed) == 0x0008C8, "Member 'UWindSplineComponent::RampUpSpeed' has a wrong offset!");
static_assert(offsetof(UWindSplineComponent, RampDownSpeed) == 0x0008F0, "Member 'UWindSplineComponent::RampDownSpeed' has a wrong offset!");
static_assert(offsetof(UWindSplineComponent, ForwardForceFallOffStartDistance) == 0x000918, "Member 'UWindSplineComponent::ForwardForceFallOffStartDistance' has a wrong offset!");
static_assert(offsetof(UWindSplineComponent, ForwardForceMagnitude) == 0x000940, "Member 'UWindSplineComponent::ForwardForceMagnitude' has a wrong offset!");
static_assert(offsetof(UWindSplineComponent, ReverseForceMagnitude) == 0x000968, "Member 'UWindSplineComponent::ReverseForceMagnitude' has a wrong offset!");
static_assert(offsetof(UWindSplineComponent, ForwardForceDistanceFallOffExponent) == 0x000990, "Member 'UWindSplineComponent::ForwardForceDistanceFallOffExponent' has a wrong offset!");
static_assert(offsetof(UWindSplineComponent, InwardForceInnerRadius) == 0x0009B8, "Member 'UWindSplineComponent::InwardForceInnerRadius' has a wrong offset!");
static_assert(offsetof(UWindSplineComponent, InwardForceOuterRadiusAcceleration) == 0x0009E0, "Member 'UWindSplineComponent::InwardForceOuterRadiusAcceleration' has a wrong offset!");
static_assert(offsetof(UWindSplineComponent, InwardForceInnerRadiusDeceleration) == 0x000A08, "Member 'UWindSplineComponent::InwardForceInnerRadiusDeceleration' has a wrong offset!");
static_assert(offsetof(UWindSplineComponent, InwardForceInnerRadiusSpeedThreshold) == 0x000A30, "Member 'UWindSplineComponent::InwardForceInnerRadiusSpeedThreshold' has a wrong offset!");
static_assert(offsetof(UWindSplineComponent, InwardForceOuterRadiusSpeedThreshold) == 0x000A58, "Member 'UWindSplineComponent::InwardForceOuterRadiusSpeedThreshold' has a wrong offset!");
static_assert(offsetof(UWindSplineComponent, InwardForceMaxReductionFromSteering) == 0x000A80, "Member 'UWindSplineComponent::InwardForceMaxReductionFromSteering' has a wrong offset!");
static_assert(offsetof(UWindSplineComponent, InwardForceMaxMultiplierWhenSteering) == 0x000AA8, "Member 'UWindSplineComponent::InwardForceMaxMultiplierWhenSteering' has a wrong offset!");
static_assert(offsetof(UWindSplineComponent, InwardForceMaxSteerAngle) == 0x000AD0, "Member 'UWindSplineComponent::InwardForceMaxSteerAngle' has a wrong offset!");
static_assert(offsetof(UWindSplineComponent, InwardForceLowVelocityThreshold) == 0x000AF8, "Member 'UWindSplineComponent::InwardForceLowVelocityThreshold' has a wrong offset!");
static_assert(offsetof(UWindSplineComponent, InwardForceLowVelocityMinValue) == 0x000B20, "Member 'UWindSplineComponent::InwardForceLowVelocityMinValue' has a wrong offset!");
static_assert(offsetof(UWindSplineComponent, InwardForceSteeringReduceAccelerationPower) == 0x000B48, "Member 'UWindSplineComponent::InwardForceSteeringReduceAccelerationPower' has a wrong offset!");
static_assert(offsetof(UWindSplineComponent, InwardForceSteeringReduceDecelerationPower) == 0x000B70, "Member 'UWindSplineComponent::InwardForceSteeringReduceDecelerationPower' has a wrong offset!");
static_assert(offsetof(UWindSplineComponent, SizeForceModifiers) == 0x000B98, "Member 'UWindSplineComponent::SizeForceModifiers' has a wrong offset!");
static_assert(offsetof(UWindSplineComponent, ObjectTypeForceModifiers) == 0x000BE8, "Member 'UWindSplineComponent::ObjectTypeForceModifiers' has a wrong offset!");
static_assert(offsetof(UWindSplineComponent, QueryBasedForceModifiers) == 0x000C38, "Member 'UWindSplineComponent::QueryBasedForceModifiers' has a wrong offset!");
static_assert(offsetof(UWindSplineComponent, PawnSkydivingTimeLimitQuery) == 0x000C48, "Member 'UWindSplineComponent::PawnSkydivingTimeLimitQuery' has a wrong offset!");
static_assert(offsetof(UWindSplineComponent, PawnSkydivingTimeLimit) == 0x000C90, "Member 'UWindSplineComponent::PawnSkydivingTimeLimit' has a wrong offset!");
static_assert(offsetof(UWindSplineComponent, PawnSkydivingMinDistanceAboveGround) == 0x000CB8, "Member 'UWindSplineComponent::PawnSkydivingMinDistanceAboveGround' has a wrong offset!");
static_assert(offsetof(UWindSplineComponent, AutoWakeUpPhysicsObjects) == 0x000CE0, "Member 'UWindSplineComponent::AutoWakeUpPhysicsObjects' has a wrong offset!");
static_assert(offsetof(UWindSplineComponent, FieldMagnitudeBase) == 0x000D08, "Member 'UWindSplineComponent::FieldMagnitudeBase' has a wrong offset!");
static_assert(offsetof(UWindSplineComponent, FieldMinMagnitudeAfterFalloff) == 0x000D30, "Member 'UWindSplineComponent::FieldMinMagnitudeAfterFalloff' has a wrong offset!");
static_assert(offsetof(UWindSplineComponent, FieldMaxMagnitudeAfterFalloff) == 0x000D58, "Member 'UWindSplineComponent::FieldMaxMagnitudeAfterFalloff' has a wrong offset!");
static_assert(offsetof(UWindSplineComponent, PlayerWindAnimationLayer) == 0x000D80, "Member 'UWindSplineComponent::PlayerWindAnimationLayer' has a wrong offset!");
static_assert(offsetof(UWindSplineComponent, OnWindSplineDisabled) == 0x000D88, "Member 'UWindSplineComponent::OnWindSplineDisabled' has a wrong offset!");
static_assert(offsetof(UWindSplineComponent, OnWindSplineEnabled) == 0x000D98, "Member 'UWindSplineComponent::OnWindSplineEnabled' has a wrong offset!");
static_assert(offsetof(UWindSplineComponent, TargetData) == 0x000DA8, "Member 'UWindSplineComponent::TargetData' has a wrong offset!");
static_assert(offsetof(UWindSplineComponent, Blockages) == 0x000F60, "Member 'UWindSplineComponent::Blockages' has a wrong offset!");
static_assert(offsetof(UWindSplineComponent, FieldSystemComponent) == 0x001078, "Member 'UWindSplineComponent::FieldSystemComponent' has a wrong offset!");
static_assert(offsetof(UWindSplineComponent, UniformVector) == 0x001080, "Member 'UWindSplineComponent::UniformVector' has a wrong offset!");
static_assert(offsetof(UWindSplineComponent, BoxFalloff) == 0x001088, "Member 'UWindSplineComponent::BoxFalloff' has a wrong offset!");
static_assert(offsetof(UWindSplineComponent, BoxOperatorField) == 0x001090, "Member 'UWindSplineComponent::BoxOperatorField' has a wrong offset!");
static_assert(offsetof(UWindSplineComponent, MeshDataArray) == 0x001098, "Member 'UWindSplineComponent::MeshDataArray' has a wrong offset!");
static_assert(offsetof(UWindSplineComponent, FXComponents) == 0x0010A8, "Member 'UWindSplineComponent::FXComponents' has a wrong offset!");

}
