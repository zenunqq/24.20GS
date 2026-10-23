#pragma once

#include "Basic.hpp"

#include "GameplayTags_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "MotherGameplayRuntime_structs.hpp"

namespace SDK::Params
{

struct GravityGunTargetTrackingComponent_FindTargetActor final
{
public:
	class AActor*                                 OwningPlayer;
	struct FVector                                TraceStart;
	struct FVector                                TraceEnd;
};
static_assert(alignof(GravityGunTargetTrackingComponent_FindTargetActor) == 0x000008, "Wrong alignment on GravityGunTargetTrackingComponent_FindTargetActor");
static_assert(sizeof(GravityGunTargetTrackingComponent_FindTargetActor) == 0x000038, "Wrong size on GravityGunTargetTrackingComponent_FindTargetActor");
static_assert(offsetof(GravityGunTargetTrackingComponent_FindTargetActor, OwningPlayer) == 0x000000, "Member 'GravityGunTargetTrackingComponent_FindTargetActor::OwningPlayer' has a wrong offset!");
static_assert(offsetof(GravityGunTargetTrackingComponent_FindTargetActor, TraceStart) == 0x000008, "Member 'GravityGunTargetTrackingComponent_FindTargetActor::TraceStart' has a wrong offset!");
static_assert(offsetof(GravityGunTargetTrackingComponent_FindTargetActor, TraceEnd) == 0x000020, "Member 'GravityGunTargetTrackingComponent_FindTargetActor::TraceEnd' has a wrong offset!");

struct GravityGunTargetTrackingComponent_FindTargetProjectile final
{
public:
	class AActor*                                 OwningPlayer;
	struct FVector                                TraceStart;
	struct FVector                                TraceEnd;
	float                                         TargetingRadius;
	bool                                          ReturnValue;
	uint8                                         Pad_3D[0x3];
};
static_assert(alignof(GravityGunTargetTrackingComponent_FindTargetProjectile) == 0x000008, "Wrong alignment on GravityGunTargetTrackingComponent_FindTargetProjectile");
static_assert(sizeof(GravityGunTargetTrackingComponent_FindTargetProjectile) == 0x000040, "Wrong size on GravityGunTargetTrackingComponent_FindTargetProjectile");
static_assert(offsetof(GravityGunTargetTrackingComponent_FindTargetProjectile, OwningPlayer) == 0x000000, "Member 'GravityGunTargetTrackingComponent_FindTargetProjectile::OwningPlayer' has a wrong offset!");
static_assert(offsetof(GravityGunTargetTrackingComponent_FindTargetProjectile, TraceStart) == 0x000008, "Member 'GravityGunTargetTrackingComponent_FindTargetProjectile::TraceStart' has a wrong offset!");
static_assert(offsetof(GravityGunTargetTrackingComponent_FindTargetProjectile, TraceEnd) == 0x000020, "Member 'GravityGunTargetTrackingComponent_FindTargetProjectile::TraceEnd' has a wrong offset!");
static_assert(offsetof(GravityGunTargetTrackingComponent_FindTargetProjectile, TargetingRadius) == 0x000038, "Member 'GravityGunTargetTrackingComponent_FindTargetProjectile::TargetingRadius' has a wrong offset!");
static_assert(offsetof(GravityGunTargetTrackingComponent_FindTargetProjectile, ReturnValue) == 0x00003C, "Member 'GravityGunTargetTrackingComponent_FindTargetProjectile::ReturnValue' has a wrong offset!");

struct GravityGunTargetTrackingComponent_IsValidTarget final
{
public:
	class AActor*                                 OwningPlayer;
	class AActor*                                 PotentialTarget;
	struct FGameplayTagContainer                  ReasonForFailure;
	bool                                          ReturnValue;
	uint8                                         Pad_31[0x7];
};
static_assert(alignof(GravityGunTargetTrackingComponent_IsValidTarget) == 0x000008, "Wrong alignment on GravityGunTargetTrackingComponent_IsValidTarget");
static_assert(sizeof(GravityGunTargetTrackingComponent_IsValidTarget) == 0x000038, "Wrong size on GravityGunTargetTrackingComponent_IsValidTarget");
static_assert(offsetof(GravityGunTargetTrackingComponent_IsValidTarget, OwningPlayer) == 0x000000, "Member 'GravityGunTargetTrackingComponent_IsValidTarget::OwningPlayer' has a wrong offset!");
static_assert(offsetof(GravityGunTargetTrackingComponent_IsValidTarget, PotentialTarget) == 0x000008, "Member 'GravityGunTargetTrackingComponent_IsValidTarget::PotentialTarget' has a wrong offset!");
static_assert(offsetof(GravityGunTargetTrackingComponent_IsValidTarget, ReasonForFailure) == 0x000010, "Member 'GravityGunTargetTrackingComponent_IsValidTarget::ReasonForFailure' has a wrong offset!");
static_assert(offsetof(GravityGunTargetTrackingComponent_IsValidTarget, ReturnValue) == 0x000030, "Member 'GravityGunTargetTrackingComponent_IsValidTarget::ReturnValue' has a wrong offset!");

struct PropGunFunctionLibrary_ClearPropActivatedEventState final
{
public:
	class AActor*                                 ContextActor;
};
static_assert(alignof(PropGunFunctionLibrary_ClearPropActivatedEventState) == 0x000008, "Wrong alignment on PropGunFunctionLibrary_ClearPropActivatedEventState");
static_assert(sizeof(PropGunFunctionLibrary_ClearPropActivatedEventState) == 0x000008, "Wrong size on PropGunFunctionLibrary_ClearPropActivatedEventState");
static_assert(offsetof(PropGunFunctionLibrary_ClearPropActivatedEventState, ContextActor) == 0x000000, "Member 'PropGunFunctionLibrary_ClearPropActivatedEventState::ContextActor' has a wrong offset!");

struct PropGunFunctionLibrary_ClearPropIndexEventState final
{
public:
	class AActor*                                 ContextActor;
};
static_assert(alignof(PropGunFunctionLibrary_ClearPropIndexEventState) == 0x000008, "Wrong alignment on PropGunFunctionLibrary_ClearPropIndexEventState");
static_assert(sizeof(PropGunFunctionLibrary_ClearPropIndexEventState) == 0x000008, "Wrong size on PropGunFunctionLibrary_ClearPropIndexEventState");
static_assert(offsetof(PropGunFunctionLibrary_ClearPropIndexEventState, ContextActor) == 0x000000, "Member 'PropGunFunctionLibrary_ClearPropIndexEventState::ContextActor' has a wrong offset!");

struct PropGunFunctionLibrary_UpdatePropActivatedEventState final
{
public:
	class AActor*                                 ContextActor;
	struct FPaddleGingerPropActivatedData         Payload;
};
static_assert(alignof(PropGunFunctionLibrary_UpdatePropActivatedEventState) == 0x000008, "Wrong alignment on PropGunFunctionLibrary_UpdatePropActivatedEventState");
static_assert(sizeof(PropGunFunctionLibrary_UpdatePropActivatedEventState) == 0x000018, "Wrong size on PropGunFunctionLibrary_UpdatePropActivatedEventState");
static_assert(offsetof(PropGunFunctionLibrary_UpdatePropActivatedEventState, ContextActor) == 0x000000, "Member 'PropGunFunctionLibrary_UpdatePropActivatedEventState::ContextActor' has a wrong offset!");
static_assert(offsetof(PropGunFunctionLibrary_UpdatePropActivatedEventState, Payload) == 0x000008, "Member 'PropGunFunctionLibrary_UpdatePropActivatedEventState::Payload' has a wrong offset!");

struct PropGunFunctionLibrary_UpdatePropIndexEventState final
{
public:
	class AActor*                                 ContextActor;
	struct FPaddleGingerPropData                  Payload;
};
static_assert(alignof(PropGunFunctionLibrary_UpdatePropIndexEventState) == 0x000008, "Wrong alignment on PropGunFunctionLibrary_UpdatePropIndexEventState");
static_assert(sizeof(PropGunFunctionLibrary_UpdatePropIndexEventState) == 0x000038, "Wrong size on PropGunFunctionLibrary_UpdatePropIndexEventState");
static_assert(offsetof(PropGunFunctionLibrary_UpdatePropIndexEventState, ContextActor) == 0x000000, "Member 'PropGunFunctionLibrary_UpdatePropIndexEventState::ContextActor' has a wrong offset!");
static_assert(offsetof(PropGunFunctionLibrary_UpdatePropIndexEventState, Payload) == 0x000008, "Member 'PropGunFunctionLibrary_UpdatePropIndexEventState::Payload' has a wrong offset!");

struct PropGunFunctionLibrary_UpdatePropPreviewPosition final
{
public:
	class USceneComponent*                        PropPreviewComponent;
	float                                         DeltaTime;
	uint8                                         Pad_C[0x4];
	const class AFortPawn*                        AttachPawn;
	class FName                                   AttachSocket;
	uint8                                         Pad_1C[0x4];
	const class USkeletalMeshComponent*           WeaponMesh;
	struct FVector                                DesiredRelativeTransform;
	float                                         MinimumZOffset;
	uint8                                         Pad_44[0x4];
	struct FRotator                               RelativeRotation;
	struct FVector                                CachedScale;
	float                                         InterpSpeed;
	uint8                                         Pad_7C[0x4];
};
static_assert(alignof(PropGunFunctionLibrary_UpdatePropPreviewPosition) == 0x000008, "Wrong alignment on PropGunFunctionLibrary_UpdatePropPreviewPosition");
static_assert(sizeof(PropGunFunctionLibrary_UpdatePropPreviewPosition) == 0x000080, "Wrong size on PropGunFunctionLibrary_UpdatePropPreviewPosition");
static_assert(offsetof(PropGunFunctionLibrary_UpdatePropPreviewPosition, PropPreviewComponent) == 0x000000, "Member 'PropGunFunctionLibrary_UpdatePropPreviewPosition::PropPreviewComponent' has a wrong offset!");
static_assert(offsetof(PropGunFunctionLibrary_UpdatePropPreviewPosition, DeltaTime) == 0x000008, "Member 'PropGunFunctionLibrary_UpdatePropPreviewPosition::DeltaTime' has a wrong offset!");
static_assert(offsetof(PropGunFunctionLibrary_UpdatePropPreviewPosition, AttachPawn) == 0x000010, "Member 'PropGunFunctionLibrary_UpdatePropPreviewPosition::AttachPawn' has a wrong offset!");
static_assert(offsetof(PropGunFunctionLibrary_UpdatePropPreviewPosition, AttachSocket) == 0x000018, "Member 'PropGunFunctionLibrary_UpdatePropPreviewPosition::AttachSocket' has a wrong offset!");
static_assert(offsetof(PropGunFunctionLibrary_UpdatePropPreviewPosition, WeaponMesh) == 0x000020, "Member 'PropGunFunctionLibrary_UpdatePropPreviewPosition::WeaponMesh' has a wrong offset!");
static_assert(offsetof(PropGunFunctionLibrary_UpdatePropPreviewPosition, DesiredRelativeTransform) == 0x000028, "Member 'PropGunFunctionLibrary_UpdatePropPreviewPosition::DesiredRelativeTransform' has a wrong offset!");
static_assert(offsetof(PropGunFunctionLibrary_UpdatePropPreviewPosition, MinimumZOffset) == 0x000040, "Member 'PropGunFunctionLibrary_UpdatePropPreviewPosition::MinimumZOffset' has a wrong offset!");
static_assert(offsetof(PropGunFunctionLibrary_UpdatePropPreviewPosition, RelativeRotation) == 0x000048, "Member 'PropGunFunctionLibrary_UpdatePropPreviewPosition::RelativeRotation' has a wrong offset!");
static_assert(offsetof(PropGunFunctionLibrary_UpdatePropPreviewPosition, CachedScale) == 0x000060, "Member 'PropGunFunctionLibrary_UpdatePropPreviewPosition::CachedScale' has a wrong offset!");
static_assert(offsetof(PropGunFunctionLibrary_UpdatePropPreviewPosition, InterpSpeed) == 0x000078, "Member 'PropGunFunctionLibrary_UpdatePropPreviewPosition::InterpSpeed' has a wrong offset!");

struct ReactorGradeGameplayCue_ChargeUp_OnEndPointUpdated final
{
public:
	struct FVector                                FoundPoint;
};
static_assert(alignof(ReactorGradeGameplayCue_ChargeUp_OnEndPointUpdated) == 0x000008, "Wrong alignment on ReactorGradeGameplayCue_ChargeUp_OnEndPointUpdated");
static_assert(sizeof(ReactorGradeGameplayCue_ChargeUp_OnEndPointUpdated) == 0x000018, "Wrong size on ReactorGradeGameplayCue_ChargeUp_OnEndPointUpdated");
static_assert(offsetof(ReactorGradeGameplayCue_ChargeUp_OnEndPointUpdated, FoundPoint) == 0x000000, "Member 'ReactorGradeGameplayCue_ChargeUp_OnEndPointUpdated::FoundPoint' has a wrong offset!");

struct ReactorGradeGameplayCue_ChargeUp_GetFoundEndPoint final
{
public:
	struct FVector                                ReturnValue;
};
static_assert(alignof(ReactorGradeGameplayCue_ChargeUp_GetFoundEndPoint) == 0x000008, "Wrong alignment on ReactorGradeGameplayCue_ChargeUp_GetFoundEndPoint");
static_assert(sizeof(ReactorGradeGameplayCue_ChargeUp_GetFoundEndPoint) == 0x000018, "Wrong size on ReactorGradeGameplayCue_ChargeUp_GetFoundEndPoint");
static_assert(offsetof(ReactorGradeGameplayCue_ChargeUp_GetFoundEndPoint, ReturnValue) == 0x000000, "Member 'ReactorGradeGameplayCue_ChargeUp_GetFoundEndPoint::ReturnValue' has a wrong offset!");

}
