#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteGame_structs.hpp"
#include "FortniteGame_classes.hpp"
#include "GameplayAbilities_structs.hpp"

namespace SDK
{

class ABGA_Athena_SCMachine_Pickup_C final : public ABuildingGameplayActorSpawnChip
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;
	class UCapsuleComponent*                      OverlapCollision;
	class UStaticMeshComponent*                   ParentMesh;
	class UFortLinkToActorComponent*              FortLinkToActor;
	class UAudioComponent*                        SC_Machine_Memory_Card_Loop_Cue;
	class UParticleSystemComponent*               SpawnInEffect;
	class UStaticMeshComponent*                   BackgroundGlow;
	class UStaticMeshComponent*                   Card;
	int32                                         UnHide;
	uint8                                         Pad_B84[0x4];
	double                                        DelayBeforeUnhide;
	uint8                                         OwnerTeam;
	uint8                                         Pad_B91[0x7];
	struct FTimerHandle                           Timer_DestroyPickup;
	struct FScalableFloat                         Row_PickupLife;
	class FText                                   InteractText;
	class UParticleSystem*                        SpawnOutParticle;
	class USoundBase*                             PickupSound;
	bool                                          SpawnSoundPlayed;
	uint8                                         Pad_BF1[0x7];
	class USoundBase*                             SpawnInSound;
	bool                                          IsPendingKill;
	bool                                          HideAndKill;
	uint8                                         Pad_C02[0x6];
	struct FScalableFloat                         Row_PickUpInteractTime;
	bool                                          IsDelayingDeath;
	bool                                          OwnerDiedInVortex;

public:
	void BlueprintOnInteract(const class AFortPawn* InteractingPawn, const EInteractionBeingAttempted InteractionBeingAttempted);
	void BndEvt__BGA_Athena_SCMachine_Pickup_FortLinkToActor_K2Node_ComponentBoundEvent_4_OnLinkedActorDestroyed__DelegateSignature(class AActor* DamageCauser);
	void BndEvt__Collision_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
	void CollectPickup();
	void DelayDestroyPickup();
	void DestroyPickup();
	void ExecuteUbergraph_BGA_Athena_SCMachine_Pickup(int32 EntryPoint);
	void HideAndKillPickup();
	void OnDeathServer(float Damage, const struct FGameplayTagContainer& DamageTags, const struct FVector& Momentum, const struct FHitResult& HitInfo, class AController* InstigatedBy, class AActor* DamageCauser, const struct FGameplayEffectContextHandle& EffectContext);
	void OnDestroyPickup();
	void OnRep_HideAndKill();
	void OnRep_UnHide();
	void ReceiveBeginPlay();
	bool ShouldDie(float Damage, class AController* EventInstigator, class AActor* DamageCauser);
	void SpawnSound();
	void UserConstructionScript();

	bool BlueprintCanInteract(const class AFortPawn* InteractingPawn, const EInteractionBeingAttempted InteractionBeingAttempted, const ETInteractionType InteractionType) const;
	class FText BlueprintGetInteractionString(const class AFortPawn* InteractingPawn, const EInteractionBeingAttempted InteractionBeingAttempted) const;
	bool BlueprintGetInteractionTime(const class AFortPawn* InteractingPawn, float* OutInteractionTime, const EInteractionBeingAttempted InteractionBeingAttempted) const;
	bool BuildDataRegistryResolverScope(TArray<class FName>* InOutResolverScopes, int32* InOutPriority) const;
	bool CanHandleCleanupEvents() const;
	const class UObject* GetCacheContextOverride() const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BGA_Athena_SCMachine_Pickup_C">();
	}
	static class ABGA_Athena_SCMachine_Pickup_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABGA_Athena_SCMachine_Pickup_C>();
	}
};
static_assert(alignof(ABGA_Athena_SCMachine_Pickup_C) == 0x000010, "Wrong alignment on ABGA_Athena_SCMachine_Pickup_C");
static_assert(sizeof(ABGA_Athena_SCMachine_Pickup_C) == 0x000C40, "Wrong size on ABGA_Athena_SCMachine_Pickup_C");
static_assert(offsetof(ABGA_Athena_SCMachine_Pickup_C, UberGraphFrame) == 0x000B40, "Member 'ABGA_Athena_SCMachine_Pickup_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ABGA_Athena_SCMachine_Pickup_C, OverlapCollision) == 0x000B48, "Member 'ABGA_Athena_SCMachine_Pickup_C::OverlapCollision' has a wrong offset!");
static_assert(offsetof(ABGA_Athena_SCMachine_Pickup_C, ParentMesh) == 0x000B50, "Member 'ABGA_Athena_SCMachine_Pickup_C::ParentMesh' has a wrong offset!");
static_assert(offsetof(ABGA_Athena_SCMachine_Pickup_C, FortLinkToActor) == 0x000B58, "Member 'ABGA_Athena_SCMachine_Pickup_C::FortLinkToActor' has a wrong offset!");
static_assert(offsetof(ABGA_Athena_SCMachine_Pickup_C, SC_Machine_Memory_Card_Loop_Cue) == 0x000B60, "Member 'ABGA_Athena_SCMachine_Pickup_C::SC_Machine_Memory_Card_Loop_Cue' has a wrong offset!");
static_assert(offsetof(ABGA_Athena_SCMachine_Pickup_C, SpawnInEffect) == 0x000B68, "Member 'ABGA_Athena_SCMachine_Pickup_C::SpawnInEffect' has a wrong offset!");
static_assert(offsetof(ABGA_Athena_SCMachine_Pickup_C, BackgroundGlow) == 0x000B70, "Member 'ABGA_Athena_SCMachine_Pickup_C::BackgroundGlow' has a wrong offset!");
static_assert(offsetof(ABGA_Athena_SCMachine_Pickup_C, Card) == 0x000B78, "Member 'ABGA_Athena_SCMachine_Pickup_C::Card' has a wrong offset!");
static_assert(offsetof(ABGA_Athena_SCMachine_Pickup_C, UnHide) == 0x000B80, "Member 'ABGA_Athena_SCMachine_Pickup_C::UnHide' has a wrong offset!");
static_assert(offsetof(ABGA_Athena_SCMachine_Pickup_C, DelayBeforeUnhide) == 0x000B88, "Member 'ABGA_Athena_SCMachine_Pickup_C::DelayBeforeUnhide' has a wrong offset!");
static_assert(offsetof(ABGA_Athena_SCMachine_Pickup_C, OwnerTeam) == 0x000B90, "Member 'ABGA_Athena_SCMachine_Pickup_C::OwnerTeam' has a wrong offset!");
static_assert(offsetof(ABGA_Athena_SCMachine_Pickup_C, Timer_DestroyPickup) == 0x000B98, "Member 'ABGA_Athena_SCMachine_Pickup_C::Timer_DestroyPickup' has a wrong offset!");
static_assert(offsetof(ABGA_Athena_SCMachine_Pickup_C, Row_PickupLife) == 0x000BA0, "Member 'ABGA_Athena_SCMachine_Pickup_C::Row_PickupLife' has a wrong offset!");
static_assert(offsetof(ABGA_Athena_SCMachine_Pickup_C, InteractText) == 0x000BC8, "Member 'ABGA_Athena_SCMachine_Pickup_C::InteractText' has a wrong offset!");
static_assert(offsetof(ABGA_Athena_SCMachine_Pickup_C, SpawnOutParticle) == 0x000BE0, "Member 'ABGA_Athena_SCMachine_Pickup_C::SpawnOutParticle' has a wrong offset!");
static_assert(offsetof(ABGA_Athena_SCMachine_Pickup_C, PickupSound) == 0x000BE8, "Member 'ABGA_Athena_SCMachine_Pickup_C::PickupSound' has a wrong offset!");
static_assert(offsetof(ABGA_Athena_SCMachine_Pickup_C, SpawnSoundPlayed) == 0x000BF0, "Member 'ABGA_Athena_SCMachine_Pickup_C::SpawnSoundPlayed' has a wrong offset!");
static_assert(offsetof(ABGA_Athena_SCMachine_Pickup_C, SpawnInSound) == 0x000BF8, "Member 'ABGA_Athena_SCMachine_Pickup_C::SpawnInSound' has a wrong offset!");
static_assert(offsetof(ABGA_Athena_SCMachine_Pickup_C, IsPendingKill) == 0x000C00, "Member 'ABGA_Athena_SCMachine_Pickup_C::IsPendingKill' has a wrong offset!");
static_assert(offsetof(ABGA_Athena_SCMachine_Pickup_C, HideAndKill) == 0x000C01, "Member 'ABGA_Athena_SCMachine_Pickup_C::HideAndKill' has a wrong offset!");
static_assert(offsetof(ABGA_Athena_SCMachine_Pickup_C, Row_PickUpInteractTime) == 0x000C08, "Member 'ABGA_Athena_SCMachine_Pickup_C::Row_PickUpInteractTime' has a wrong offset!");
static_assert(offsetof(ABGA_Athena_SCMachine_Pickup_C, IsDelayingDeath) == 0x000C30, "Member 'ABGA_Athena_SCMachine_Pickup_C::IsDelayingDeath' has a wrong offset!");
static_assert(offsetof(ABGA_Athena_SCMachine_Pickup_C, OwnerDiedInVortex) == 0x000C31, "Member 'ABGA_Athena_SCMachine_Pickup_C::OwnerDiedInVortex' has a wrong offset!");

}
