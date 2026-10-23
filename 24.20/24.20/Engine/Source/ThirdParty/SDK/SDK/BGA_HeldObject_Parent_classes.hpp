#pragma once

#include "Basic.hpp"

#include "FortniteGame_structs.hpp"
#include "FortniteGame_classes.hpp"
#include "Enum_HeldObject_GenericWeights_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "Engine_structs.hpp"
#include "GameplayTags_structs.hpp"

namespace SDK
{

class ABGA_HeldObject_Parent_C final : public ABuildingGameplayActor
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;
	class UFortWaterInteractionComponent*         FortWaterInteraction;
	class UFortLinkToActorComponent*              FortLinkToActor;
	class UFortHeldObjectComponent*               FortHeldObject;
	class UFortProjectileMovementComponent*       FortProjectileMovement;
	class UCapsuleComponent*                      Capsule;
	int32                                         RepStartMoving;
	struct FGameplayTag                           GC_HitPlayer;
	struct FGameplayTag                           GC_HitWorld;
	struct FGameplayTag                           GC_Throw;
	struct FGameplayTag                           GC_EnterWater;
	struct FGameplayTag                           GC_Pickup;
	struct FGameplayTag                           GC_Death;
	bool                                          PlayDeathGC;
	bool                                          RepHideActor;
	bool                                          SetHideActorOnDeath;
	bool                                          IsDestructable;
	struct FGameplayTag                           GC_GenericDeath;
	uint8                                         Pad_A84[0x4];
	double                                        WorldStopSlop;
	bool                                          AttachToWallsAndCeilings;
	uint8                                         Pad_A91[0x7];
	TMap<ELinkToDirection, struct FVector>        Map_DirectionToRelativeVector;
	ELinkToDirection                              DirectionToAttach;
	uint8                                         Pad_AE9[0x7];
	class AActor*                                 EmptyAttachLinkActor;
	uint8                                         Pad_AF8[0x8];
	struct FTransform                             AttachRelativeTrans;
	struct FTransform                             AttachTransform;
	class FText                                   FirstInteractString;
	class FText                                   SecondInteractString;
	double                                        SecondInteractTime;
	double                                        FirstInteractTime;
	bool                                          EverBeenThrownPlaced;
	bool                                          AutoEnableInteractionsOnStop;
	bool                                          AlreadySavedDefaultTransform;
	Enum_HeldObject_GenericWeights                ObjectWeights;
	bool                                          StopOnFlatSurface;
	uint8                                         Pad_C05[0x3];
	struct FGameplayTagContainer                  ThrownQuestCreditTargetTag;
	struct FGameplayTagContainer                  TC_BlockPickup;
	double                                        Hit_Velocity_Threshold;
	bool                                          ShouldKillWhenSpawningUnderwater;
	uint8                                         Pad_C51[0x7];
	class UPrimitiveComponent*                    HitComponentToAttachTo;
	ECollisionResponse                            CapsuleDefaultCollisionResponseToPawn;
	bool                                          RestoreDefaultPawnCollisionOnInteract;
	bool                                          IsAttachedToVehicle;
	uint8                                         Pad_C63[0x5];
	class AActor*                                 VehicleAttached;

public:
	void AttachSetup(const struct FVector& Location, const struct FVector& HitNormal, bool NewParam);
	void BindPlayerControllerOnUnPosses();
	void BlueprintOnInteract(const class AFortPawn* InteractingPawn, const EInteractionBeingAttempted InteractionBeingAttempted);
	void BndEvt__FortHeldObject_K2Node_ComponentBoundEvent_2_OnHeldObjectThrown__DelegateSignature();
	void BndEvt__FortHeldObject_K2Node_ComponentBoundEvent_5_OnHeldObjectPlaced__DelegateSignature();
	void BndEvt__FortHeldObject_K2Node_ComponentBoundEvent_6_OnHeldObjectPickedUp__DelegateSignature();
	void BndEvt__FortLinkToActor_K2Node_ComponentBoundEvent_0_OnLinkedActorDestroyed__DelegateSignature(class AActor* DamageCauser);
	void BndEvt__FortProjectileMovement_K2Node_ComponentBoundEvent_1_OnProjectileBounceDelegate__DelegateSignature(const struct FHitResult& ImpactResult, const struct FVector& ImpactVelocity);
	void BndEvt__FortProjectileMovement_K2Node_ComponentBoundEvent_4_OnProjectileStopDelegate__DelegateSignature(const struct FHitResult& ImpactResult);
	void BndEvt__FortWaterInteraction_K2Node_ComponentBoundEvent_3_WaterInteractionOnEnterWater__DelegateSignature(class AFortWaterBodyActor* WaterBody, class UFortWaterInteractionComponent* WaterInteractionComponent, bool bIsFirstBody);
	void ExecuteUbergraph_BGA_HeldObject_Parent(int32 EntryPoint);
	void FindAttachAngle(const struct FVector& HitLoc);
	void GetAttachComponent(class USceneComponent** Component);
	void HideActor();
	void OnAttachedToVehicle();
	void OnDeathServer(float Damage, const struct FGameplayTagContainer& DamageTags, const struct FVector& Momentum, const struct FHitResult& HitInfo, class AController* InstigatedBy, class AActor* DamageCauser, const struct FGameplayEffectContextHandle& EffectContext);
	void OnDetachFromVehicle();
	void OnFirstInteract(class AFortPawn* Interacting_Pawn);
	void OnReady_BC2B03BE47B5044C184341970EAD7AAB(class AFortGameStateAthena* GameState, const class UFortPlaylist* Playlist, const struct FGameplayTagContainer& PlaylistContextTags);
	void OnRep_AttachTransform();
	void OnRep_IsAttachedToVehicle();
	void OnRep_RepHideActor();
	void OnRep_RepStartMoving();
	void OnSecondInteract(class AFortPawn* InteractingPawn);
	void OnVehicleDestroyed(class AActor* DestroyedActor);
	void PlayGenericDeath();
	void ReceiveBeginPlay();
	void ReceiveDestroyed();
	void ReceiveHit(class UPrimitiveComponent* MyComp, class AActor* Other, class UPrimitiveComponent* OtherComp, bool bSelfMoved, const struct FVector& HitLocation, const struct FVector& HitNormal, const struct FVector& NormalImpulse, const struct FHitResult& Hit);
	void ResetRelativeTransformOnAttach();
	void Server_Only_Handle_Attach_To_Vehicle(const struct FVector& HitLoc, class UPrimitiveComponent* HitComponentToAttachTo_0);
	void Server_Only_Handle_Player_Controller_OnUnPossess(class APawn* PlayerPawn);
	void SetAttachDefaultTransform();
	void SetBeenThrownPlaced();
	bool ShouldDie(float Damage, class AController* EventInstigator, class AActor* DamageCauser);
	void UbindPlayerControllerOnUnPosses();

	bool BlueprintCanInteract(const class AFortPawn* InteractingPawn, const EInteractionBeingAttempted InteractionBeingAttempted, const ETInteractionType InteractionType) const;
	class FText BlueprintGetInteractionString(const class AFortPawn* InteractingPawn, const EInteractionBeingAttempted InteractionBeingAttempted) const;
	bool BlueprintGetInteractionTime(const class AFortPawn* InteractingPawn, float* OutInteractionTime, const EInteractionBeingAttempted InteractionBeingAttempted) const;
	void GetCanFirstInteract(class AFortPawn* InteractingPawn, bool* Return) const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BGA_HeldObject_Parent_C">();
	}
	static class ABGA_HeldObject_Parent_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABGA_HeldObject_Parent_C>();
	}
};
static_assert(alignof(ABGA_HeldObject_Parent_C) == 0x000010, "Wrong alignment on ABGA_HeldObject_Parent_C");
static_assert(sizeof(ABGA_HeldObject_Parent_C) == 0x000C70, "Wrong size on ABGA_HeldObject_Parent_C");
static_assert(offsetof(ABGA_HeldObject_Parent_C, UberGraphFrame) == 0x000A30, "Member 'ABGA_HeldObject_Parent_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ABGA_HeldObject_Parent_C, FortWaterInteraction) == 0x000A38, "Member 'ABGA_HeldObject_Parent_C::FortWaterInteraction' has a wrong offset!");
static_assert(offsetof(ABGA_HeldObject_Parent_C, FortLinkToActor) == 0x000A40, "Member 'ABGA_HeldObject_Parent_C::FortLinkToActor' has a wrong offset!");
static_assert(offsetof(ABGA_HeldObject_Parent_C, FortHeldObject) == 0x000A48, "Member 'ABGA_HeldObject_Parent_C::FortHeldObject' has a wrong offset!");
static_assert(offsetof(ABGA_HeldObject_Parent_C, FortProjectileMovement) == 0x000A50, "Member 'ABGA_HeldObject_Parent_C::FortProjectileMovement' has a wrong offset!");
static_assert(offsetof(ABGA_HeldObject_Parent_C, Capsule) == 0x000A58, "Member 'ABGA_HeldObject_Parent_C::Capsule' has a wrong offset!");
static_assert(offsetof(ABGA_HeldObject_Parent_C, RepStartMoving) == 0x000A60, "Member 'ABGA_HeldObject_Parent_C::RepStartMoving' has a wrong offset!");
static_assert(offsetof(ABGA_HeldObject_Parent_C, GC_HitPlayer) == 0x000A64, "Member 'ABGA_HeldObject_Parent_C::GC_HitPlayer' has a wrong offset!");
static_assert(offsetof(ABGA_HeldObject_Parent_C, GC_HitWorld) == 0x000A68, "Member 'ABGA_HeldObject_Parent_C::GC_HitWorld' has a wrong offset!");
static_assert(offsetof(ABGA_HeldObject_Parent_C, GC_Throw) == 0x000A6C, "Member 'ABGA_HeldObject_Parent_C::GC_Throw' has a wrong offset!");
static_assert(offsetof(ABGA_HeldObject_Parent_C, GC_EnterWater) == 0x000A70, "Member 'ABGA_HeldObject_Parent_C::GC_EnterWater' has a wrong offset!");
static_assert(offsetof(ABGA_HeldObject_Parent_C, GC_Pickup) == 0x000A74, "Member 'ABGA_HeldObject_Parent_C::GC_Pickup' has a wrong offset!");
static_assert(offsetof(ABGA_HeldObject_Parent_C, GC_Death) == 0x000A78, "Member 'ABGA_HeldObject_Parent_C::GC_Death' has a wrong offset!");
static_assert(offsetof(ABGA_HeldObject_Parent_C, PlayDeathGC) == 0x000A7C, "Member 'ABGA_HeldObject_Parent_C::PlayDeathGC' has a wrong offset!");
static_assert(offsetof(ABGA_HeldObject_Parent_C, RepHideActor) == 0x000A7D, "Member 'ABGA_HeldObject_Parent_C::RepHideActor' has a wrong offset!");
static_assert(offsetof(ABGA_HeldObject_Parent_C, SetHideActorOnDeath) == 0x000A7E, "Member 'ABGA_HeldObject_Parent_C::SetHideActorOnDeath' has a wrong offset!");
static_assert(offsetof(ABGA_HeldObject_Parent_C, IsDestructable) == 0x000A7F, "Member 'ABGA_HeldObject_Parent_C::IsDestructable' has a wrong offset!");
static_assert(offsetof(ABGA_HeldObject_Parent_C, GC_GenericDeath) == 0x000A80, "Member 'ABGA_HeldObject_Parent_C::GC_GenericDeath' has a wrong offset!");
static_assert(offsetof(ABGA_HeldObject_Parent_C, WorldStopSlop) == 0x000A88, "Member 'ABGA_HeldObject_Parent_C::WorldStopSlop' has a wrong offset!");
static_assert(offsetof(ABGA_HeldObject_Parent_C, AttachToWallsAndCeilings) == 0x000A90, "Member 'ABGA_HeldObject_Parent_C::AttachToWallsAndCeilings' has a wrong offset!");
static_assert(offsetof(ABGA_HeldObject_Parent_C, Map_DirectionToRelativeVector) == 0x000A98, "Member 'ABGA_HeldObject_Parent_C::Map_DirectionToRelativeVector' has a wrong offset!");
static_assert(offsetof(ABGA_HeldObject_Parent_C, DirectionToAttach) == 0x000AE8, "Member 'ABGA_HeldObject_Parent_C::DirectionToAttach' has a wrong offset!");
static_assert(offsetof(ABGA_HeldObject_Parent_C, EmptyAttachLinkActor) == 0x000AF0, "Member 'ABGA_HeldObject_Parent_C::EmptyAttachLinkActor' has a wrong offset!");
static_assert(offsetof(ABGA_HeldObject_Parent_C, AttachRelativeTrans) == 0x000B00, "Member 'ABGA_HeldObject_Parent_C::AttachRelativeTrans' has a wrong offset!");
static_assert(offsetof(ABGA_HeldObject_Parent_C, AttachTransform) == 0x000B60, "Member 'ABGA_HeldObject_Parent_C::AttachTransform' has a wrong offset!");
static_assert(offsetof(ABGA_HeldObject_Parent_C, FirstInteractString) == 0x000BC0, "Member 'ABGA_HeldObject_Parent_C::FirstInteractString' has a wrong offset!");
static_assert(offsetof(ABGA_HeldObject_Parent_C, SecondInteractString) == 0x000BD8, "Member 'ABGA_HeldObject_Parent_C::SecondInteractString' has a wrong offset!");
static_assert(offsetof(ABGA_HeldObject_Parent_C, SecondInteractTime) == 0x000BF0, "Member 'ABGA_HeldObject_Parent_C::SecondInteractTime' has a wrong offset!");
static_assert(offsetof(ABGA_HeldObject_Parent_C, FirstInteractTime) == 0x000BF8, "Member 'ABGA_HeldObject_Parent_C::FirstInteractTime' has a wrong offset!");
static_assert(offsetof(ABGA_HeldObject_Parent_C, EverBeenThrownPlaced) == 0x000C00, "Member 'ABGA_HeldObject_Parent_C::EverBeenThrownPlaced' has a wrong offset!");
static_assert(offsetof(ABGA_HeldObject_Parent_C, AutoEnableInteractionsOnStop) == 0x000C01, "Member 'ABGA_HeldObject_Parent_C::AutoEnableInteractionsOnStop' has a wrong offset!");
static_assert(offsetof(ABGA_HeldObject_Parent_C, AlreadySavedDefaultTransform) == 0x000C02, "Member 'ABGA_HeldObject_Parent_C::AlreadySavedDefaultTransform' has a wrong offset!");
static_assert(offsetof(ABGA_HeldObject_Parent_C, ObjectWeights) == 0x000C03, "Member 'ABGA_HeldObject_Parent_C::ObjectWeights' has a wrong offset!");
static_assert(offsetof(ABGA_HeldObject_Parent_C, StopOnFlatSurface) == 0x000C04, "Member 'ABGA_HeldObject_Parent_C::StopOnFlatSurface' has a wrong offset!");
static_assert(offsetof(ABGA_HeldObject_Parent_C, ThrownQuestCreditTargetTag) == 0x000C08, "Member 'ABGA_HeldObject_Parent_C::ThrownQuestCreditTargetTag' has a wrong offset!");
static_assert(offsetof(ABGA_HeldObject_Parent_C, TC_BlockPickup) == 0x000C28, "Member 'ABGA_HeldObject_Parent_C::TC_BlockPickup' has a wrong offset!");
static_assert(offsetof(ABGA_HeldObject_Parent_C, Hit_Velocity_Threshold) == 0x000C48, "Member 'ABGA_HeldObject_Parent_C::Hit_Velocity_Threshold' has a wrong offset!");
static_assert(offsetof(ABGA_HeldObject_Parent_C, ShouldKillWhenSpawningUnderwater) == 0x000C50, "Member 'ABGA_HeldObject_Parent_C::ShouldKillWhenSpawningUnderwater' has a wrong offset!");
static_assert(offsetof(ABGA_HeldObject_Parent_C, HitComponentToAttachTo) == 0x000C58, "Member 'ABGA_HeldObject_Parent_C::HitComponentToAttachTo' has a wrong offset!");
static_assert(offsetof(ABGA_HeldObject_Parent_C, CapsuleDefaultCollisionResponseToPawn) == 0x000C60, "Member 'ABGA_HeldObject_Parent_C::CapsuleDefaultCollisionResponseToPawn' has a wrong offset!");
static_assert(offsetof(ABGA_HeldObject_Parent_C, RestoreDefaultPawnCollisionOnInteract) == 0x000C61, "Member 'ABGA_HeldObject_Parent_C::RestoreDefaultPawnCollisionOnInteract' has a wrong offset!");
static_assert(offsetof(ABGA_HeldObject_Parent_C, IsAttachedToVehicle) == 0x000C62, "Member 'ABGA_HeldObject_Parent_C::IsAttachedToVehicle' has a wrong offset!");
static_assert(offsetof(ABGA_HeldObject_Parent_C, VehicleAttached) == 0x000C68, "Member 'ABGA_HeldObject_Parent_C::VehicleAttached' has a wrong offset!");

}
