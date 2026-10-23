#pragma once

#include "Basic.hpp"

#include "FortniteGame_classes.hpp"
#include "GameplayAbilities_structs.hpp"
#include "Engine_structs.hpp"
#include "Engine_classes.hpp"
#include "GameplayTags_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "MotherGameplayRuntime_structs.hpp"

namespace SDK
{

class UGravityGunTargetTrackingComponent final : public UActorComponent
{
public:
	struct FScalableFloat                         AllowLargeObjects;
	struct FScalableFloat                         AllowMultipleGrabbers;
	struct FScalableFloat                         AllowVehicles;
	struct FScalableFloat                         AllowPickups;
	struct FScalableFloat                         AllowProjectiles;
	struct FScalableFloat                         AllowForay;
	struct FScalableFloat                         AllowWhileInVehicle;
	class FName                                   GrabbedByGravityGunTagName;
	uint8                                         Pad_1BC[0x4];
	struct FGameplayTagContainer                  InvalidTargetTags;
	struct FGameplayTagContainer                  TargetIsPlayerTag;
	struct FGameplayTagContainer                  TargetIsAlreadyGrabbedTag;
	struct FGameplayTagContainer                  TargetIsOwnVehicleTag;
	TMulticastInlineDelegate<void(class AActor* NewTarget)> FoundTargetDelegate;
	TMulticastInlineDelegate<void()>              DeactivateReticleDelegate;
	uint8                                         Pad_260[0x8];

public:
	void FindTargetActor(class AActor* OwningPlayer, const struct FVector& TraceStart, const struct FVector& TraceEnd);
	bool FindTargetProjectile(class AActor* OwningPlayer, const struct FVector& TraceStart, const struct FVector& TraceEnd, float TargetingRadius);
	bool IsValidTarget(class AActor* OwningPlayer, class AActor* PotentialTarget, struct FGameplayTagContainer* ReasonForFailure);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"GravityGunTargetTrackingComponent">();
	}
	static class UGravityGunTargetTrackingComponent* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGravityGunTargetTrackingComponent>();
	}
};
static_assert(alignof(UGravityGunTargetTrackingComponent) == 0x000008, "Wrong alignment on UGravityGunTargetTrackingComponent");
static_assert(sizeof(UGravityGunTargetTrackingComponent) == 0x000268, "Wrong size on UGravityGunTargetTrackingComponent");
static_assert(offsetof(UGravityGunTargetTrackingComponent, AllowLargeObjects) == 0x0000A0, "Member 'UGravityGunTargetTrackingComponent::AllowLargeObjects' has a wrong offset!");
static_assert(offsetof(UGravityGunTargetTrackingComponent, AllowMultipleGrabbers) == 0x0000C8, "Member 'UGravityGunTargetTrackingComponent::AllowMultipleGrabbers' has a wrong offset!");
static_assert(offsetof(UGravityGunTargetTrackingComponent, AllowVehicles) == 0x0000F0, "Member 'UGravityGunTargetTrackingComponent::AllowVehicles' has a wrong offset!");
static_assert(offsetof(UGravityGunTargetTrackingComponent, AllowPickups) == 0x000118, "Member 'UGravityGunTargetTrackingComponent::AllowPickups' has a wrong offset!");
static_assert(offsetof(UGravityGunTargetTrackingComponent, AllowProjectiles) == 0x000140, "Member 'UGravityGunTargetTrackingComponent::AllowProjectiles' has a wrong offset!");
static_assert(offsetof(UGravityGunTargetTrackingComponent, AllowForay) == 0x000168, "Member 'UGravityGunTargetTrackingComponent::AllowForay' has a wrong offset!");
static_assert(offsetof(UGravityGunTargetTrackingComponent, AllowWhileInVehicle) == 0x000190, "Member 'UGravityGunTargetTrackingComponent::AllowWhileInVehicle' has a wrong offset!");
static_assert(offsetof(UGravityGunTargetTrackingComponent, GrabbedByGravityGunTagName) == 0x0001B8, "Member 'UGravityGunTargetTrackingComponent::GrabbedByGravityGunTagName' has a wrong offset!");
static_assert(offsetof(UGravityGunTargetTrackingComponent, InvalidTargetTags) == 0x0001C0, "Member 'UGravityGunTargetTrackingComponent::InvalidTargetTags' has a wrong offset!");
static_assert(offsetof(UGravityGunTargetTrackingComponent, TargetIsPlayerTag) == 0x0001E0, "Member 'UGravityGunTargetTrackingComponent::TargetIsPlayerTag' has a wrong offset!");
static_assert(offsetof(UGravityGunTargetTrackingComponent, TargetIsAlreadyGrabbedTag) == 0x000200, "Member 'UGravityGunTargetTrackingComponent::TargetIsAlreadyGrabbedTag' has a wrong offset!");
static_assert(offsetof(UGravityGunTargetTrackingComponent, TargetIsOwnVehicleTag) == 0x000220, "Member 'UGravityGunTargetTrackingComponent::TargetIsOwnVehicleTag' has a wrong offset!");
static_assert(offsetof(UGravityGunTargetTrackingComponent, FoundTargetDelegate) == 0x000240, "Member 'UGravityGunTargetTrackingComponent::FoundTargetDelegate' has a wrong offset!");
static_assert(offsetof(UGravityGunTargetTrackingComponent, DeactivateReticleDelegate) == 0x000250, "Member 'UGravityGunTargetTrackingComponent::DeactivateReticleDelegate' has a wrong offset!");

class AFortCabbageIglooVehicle final : public AFortOctopusVehicle
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortCabbageIglooVehicle">();
	}
	static class AFortCabbageIglooVehicle* GetDefaultObj()
	{
		return GetDefaultObjImpl<AFortCabbageIglooVehicle>();
	}
};
static_assert(alignof(AFortCabbageIglooVehicle) == 0x000010, "Wrong alignment on AFortCabbageIglooVehicle");
static_assert(sizeof(AFortCabbageIglooVehicle) == 0x0025F0, "Wrong size on AFortCabbageIglooVehicle");

class UFortBaseAnimInstance_CageSaddle final : public UFortBaseAnimInstance
{
public:
	class AFortSphericalVehicle*                  AsFortSphericalVehicle;
	bool                                          bIsOnGround;
	uint8                                         Pad_439[0x3];
	float                                         RemappedPitch;
	float                                         CurrentRoll;
	float                                         LockedRoll;
	bool                                          bHeadShouldBend;
	bool                                          bFootShouldBend;
	uint8                                         Pad_44A[0x6];
	struct FVector                                BodyGroundOffset;
	struct FVector2D                              MinClampPitchInRange;
	struct FVector2D                              MinClampPitchOutRange;
	struct FVector2D                              MaxClampPitchInRange;
	struct FVector2D                              MaxClampPitchOutRange;
	float                                         HeadAlphaInterpSpeed;
	uint8                                         Pad_4AC[0xF4];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortBaseAnimInstance_CageSaddle">();
	}
	static class UFortBaseAnimInstance_CageSaddle* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortBaseAnimInstance_CageSaddle>();
	}
};
static_assert(alignof(UFortBaseAnimInstance_CageSaddle) == 0x000010, "Wrong alignment on UFortBaseAnimInstance_CageSaddle");
static_assert(sizeof(UFortBaseAnimInstance_CageSaddle) == 0x0005A0, "Wrong size on UFortBaseAnimInstance_CageSaddle");
static_assert(offsetof(UFortBaseAnimInstance_CageSaddle, AsFortSphericalVehicle) == 0x000430, "Member 'UFortBaseAnimInstance_CageSaddle::AsFortSphericalVehicle' has a wrong offset!");
static_assert(offsetof(UFortBaseAnimInstance_CageSaddle, bIsOnGround) == 0x000438, "Member 'UFortBaseAnimInstance_CageSaddle::bIsOnGround' has a wrong offset!");
static_assert(offsetof(UFortBaseAnimInstance_CageSaddle, RemappedPitch) == 0x00043C, "Member 'UFortBaseAnimInstance_CageSaddle::RemappedPitch' has a wrong offset!");
static_assert(offsetof(UFortBaseAnimInstance_CageSaddle, CurrentRoll) == 0x000440, "Member 'UFortBaseAnimInstance_CageSaddle::CurrentRoll' has a wrong offset!");
static_assert(offsetof(UFortBaseAnimInstance_CageSaddle, LockedRoll) == 0x000444, "Member 'UFortBaseAnimInstance_CageSaddle::LockedRoll' has a wrong offset!");
static_assert(offsetof(UFortBaseAnimInstance_CageSaddle, bHeadShouldBend) == 0x000448, "Member 'UFortBaseAnimInstance_CageSaddle::bHeadShouldBend' has a wrong offset!");
static_assert(offsetof(UFortBaseAnimInstance_CageSaddle, bFootShouldBend) == 0x000449, "Member 'UFortBaseAnimInstance_CageSaddle::bFootShouldBend' has a wrong offset!");
static_assert(offsetof(UFortBaseAnimInstance_CageSaddle, BodyGroundOffset) == 0x000450, "Member 'UFortBaseAnimInstance_CageSaddle::BodyGroundOffset' has a wrong offset!");
static_assert(offsetof(UFortBaseAnimInstance_CageSaddle, MinClampPitchInRange) == 0x000468, "Member 'UFortBaseAnimInstance_CageSaddle::MinClampPitchInRange' has a wrong offset!");
static_assert(offsetof(UFortBaseAnimInstance_CageSaddle, MinClampPitchOutRange) == 0x000478, "Member 'UFortBaseAnimInstance_CageSaddle::MinClampPitchOutRange' has a wrong offset!");
static_assert(offsetof(UFortBaseAnimInstance_CageSaddle, MaxClampPitchInRange) == 0x000488, "Member 'UFortBaseAnimInstance_CageSaddle::MaxClampPitchInRange' has a wrong offset!");
static_assert(offsetof(UFortBaseAnimInstance_CageSaddle, MaxClampPitchOutRange) == 0x000498, "Member 'UFortBaseAnimInstance_CageSaddle::MaxClampPitchOutRange' has a wrong offset!");
static_assert(offsetof(UFortBaseAnimInstance_CageSaddle, HeadAlphaInterpSpeed) == 0x0004A8, "Member 'UFortBaseAnimInstance_CageSaddle::HeadAlphaInterpSpeed' has a wrong offset!");

class AFortGameplayCueNotifyLoop_Goop final : public AFortGameplayCueNotify_Loop
{
public:
	class FName                                   SpeedParamName;
	class FName                                   IsFallingParamName;
	struct FGoopAudioMapRangeClamped              SpeedMapRangeClamped;
	float                                         InterpSpeed;
	uint8                                         Pad_98C[0x4];
	class UAudioComponent*                        LoopingAudioComponent;
	uint8                                         Pad_998[0x8];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortGameplayCueNotifyLoop_Goop">();
	}
	static class AFortGameplayCueNotifyLoop_Goop* GetDefaultObj()
	{
		return GetDefaultObjImpl<AFortGameplayCueNotifyLoop_Goop>();
	}
};
static_assert(alignof(AFortGameplayCueNotifyLoop_Goop) == 0x000008, "Wrong alignment on AFortGameplayCueNotifyLoop_Goop");
static_assert(sizeof(AFortGameplayCueNotifyLoop_Goop) == 0x0009A0, "Wrong size on AFortGameplayCueNotifyLoop_Goop");
static_assert(offsetof(AFortGameplayCueNotifyLoop_Goop, SpeedParamName) == 0x000960, "Member 'AFortGameplayCueNotifyLoop_Goop::SpeedParamName' has a wrong offset!");
static_assert(offsetof(AFortGameplayCueNotifyLoop_Goop, IsFallingParamName) == 0x000964, "Member 'AFortGameplayCueNotifyLoop_Goop::IsFallingParamName' has a wrong offset!");
static_assert(offsetof(AFortGameplayCueNotifyLoop_Goop, SpeedMapRangeClamped) == 0x000968, "Member 'AFortGameplayCueNotifyLoop_Goop::SpeedMapRangeClamped' has a wrong offset!");
static_assert(offsetof(AFortGameplayCueNotifyLoop_Goop, InterpSpeed) == 0x000988, "Member 'AFortGameplayCueNotifyLoop_Goop::InterpSpeed' has a wrong offset!");
static_assert(offsetof(AFortGameplayCueNotifyLoop_Goop, LoopingAudioComponent) == 0x000990, "Member 'AFortGameplayCueNotifyLoop_Goop::LoopingAudioComponent' has a wrong offset!");

class UPropGunFunctionLibrary final : public UBlueprintFunctionLibrary
{
public:
	static void ClearPropActivatedEventState(class AActor* ContextActor);
	static void ClearPropIndexEventState(class AActor* ContextActor);
	static void UpdatePropActivatedEventState(class AActor* ContextActor, const struct FPaddleGingerPropActivatedData& Payload);
	static void UpdatePropIndexEventState(class AActor* ContextActor, const struct FPaddleGingerPropData& Payload);
	static void UpdatePropPreviewPosition(class USceneComponent* PropPreviewComponent, const float DeltaTime, const class AFortPawn* AttachPawn, const class FName AttachSocket, const class USkeletalMeshComponent* WeaponMesh, const struct FVector& DesiredRelativeTransform, const float MinimumZOffset, const struct FRotator& RelativeRotation, const struct FVector& CachedScale, const float InterpSpeed);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PropGunFunctionLibrary">();
	}
	static class UPropGunFunctionLibrary* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPropGunFunctionLibrary>();
	}
};
static_assert(alignof(UPropGunFunctionLibrary) == 0x000008, "Wrong alignment on UPropGunFunctionLibrary");
static_assert(sizeof(UPropGunFunctionLibrary) == 0x000028, "Wrong size on UPropGunFunctionLibrary");

class AReactorGradeGameplayCue_ChargeUp final : public AFortGameplayCueNotify_Loop
{
public:
	class AFortPawn*                              Pawn;
	class UFortWeaponFxComponent_ChargeAimLocation* CachedAimLocationComponent;
	struct FVector                                FoundEndPoint;
	struct FScalableFloat                         MinHitDistance;
	struct FScalableFloat                         HitObjectsLimit;
	uint8                                         Pad_9D8[0x4];
	ECollisionChannel                             TraceChannel;
	uint8                                         Pad_9DD[0xB];

public:
	void OnEndPointUpdated(const struct FVector& FoundPoint);
	void UpdateAimEndPoint();

	const struct FVector GetFoundEndPoint() const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"ReactorGradeGameplayCue_ChargeUp">();
	}
	static class AReactorGradeGameplayCue_ChargeUp* GetDefaultObj()
	{
		return GetDefaultObjImpl<AReactorGradeGameplayCue_ChargeUp>();
	}
};
static_assert(alignof(AReactorGradeGameplayCue_ChargeUp) == 0x000008, "Wrong alignment on AReactorGradeGameplayCue_ChargeUp");
static_assert(sizeof(AReactorGradeGameplayCue_ChargeUp) == 0x0009E8, "Wrong size on AReactorGradeGameplayCue_ChargeUp");
static_assert(offsetof(AReactorGradeGameplayCue_ChargeUp, Pawn) == 0x000960, "Member 'AReactorGradeGameplayCue_ChargeUp::Pawn' has a wrong offset!");
static_assert(offsetof(AReactorGradeGameplayCue_ChargeUp, CachedAimLocationComponent) == 0x000968, "Member 'AReactorGradeGameplayCue_ChargeUp::CachedAimLocationComponent' has a wrong offset!");
static_assert(offsetof(AReactorGradeGameplayCue_ChargeUp, FoundEndPoint) == 0x000970, "Member 'AReactorGradeGameplayCue_ChargeUp::FoundEndPoint' has a wrong offset!");
static_assert(offsetof(AReactorGradeGameplayCue_ChargeUp, MinHitDistance) == 0x000988, "Member 'AReactorGradeGameplayCue_ChargeUp::MinHitDistance' has a wrong offset!");
static_assert(offsetof(AReactorGradeGameplayCue_ChargeUp, HitObjectsLimit) == 0x0009B0, "Member 'AReactorGradeGameplayCue_ChargeUp::HitObjectsLimit' has a wrong offset!");
static_assert(offsetof(AReactorGradeGameplayCue_ChargeUp, TraceChannel) == 0x0009DC, "Member 'AReactorGradeGameplayCue_ChargeUp::TraceChannel' has a wrong offset!");

}
