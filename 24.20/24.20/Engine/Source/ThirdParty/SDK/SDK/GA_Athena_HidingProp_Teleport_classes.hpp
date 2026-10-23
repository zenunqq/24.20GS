#pragma once

#include "Basic.hpp"

#include "GameplayTags_structs.hpp"
#include "Engine_structs.hpp"
#include "FortniteGame_classes.hpp"
#include "GameplayAbilities_structs.hpp"

namespace SDK
{

class UGA_Athena_HidingProp_Teleport_C final : public UFortGameplayAbility
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;
	TMulticastInlineDelegate<void()>              NewEventDispatcher_0;
	class AB_HidingProp_C*                        HidingProp;
	class AB_HidingProp_C*                        TargetTeleporter;
	struct FGameplayTagContainer                  T_HudElementToHide;
	struct FGameplayTag                           TargetPropTeleportingCue;
	uint8                                         Pad_B74[0x4];
	struct FTimerHandle                           WobbleHandle;
	struct FGameplayTag                           WobbleCue;
	uint8                                         Pad_B84[0x4];
	double                                        ServerWorldTime;
	struct FGameplayTag                           EnterCue;
	struct FGameplayTag                           HidingInPropTag;
	struct FGameplayTagContainer                  ChangeEquipmentTag;
	struct FActiveGameplayEffectHandle            TeleportingGEOnPlayer;

public:
	void Added_67FE14EA4DF2D8C2DB494AA89443681B();
	void Added_CB8220A04B74338E758C11B7371D4630();
	void Added_F96D6DD549939CA425D2D1BE1AD32090();
	void Added_FD079A2341CDD832DF47CD975DFC3BB3();
	void EventReceived_ABAD14334D754F46E9037882BF0256B6(const struct FGameplayEventData& Payload);
	void ExecuteUbergraph_GA_Athena_HidingProp_Teleport(int32 EntryPoint);
	void FailedToActivatePassiveAbility(const struct FGameplayAbilityActorInfo& ActorInfo);
	void GrapplerFailSafe(class AFortPawn* FortPawn);
	void K2_ActivateAbility();
	void K2_OnEndAbility(bool bWasCancelled);
	void OnComplete_EE0FA6804073079396C44591432259C0();
	void OnPawnDied(class AActor* DamagedActor, float Damage, class AController* InstigatedBy, class AActor* DamageCauser, const struct FVector& HitLocation, class UPrimitiveComponent* FHitComponent, class FName BoneName, const struct FVector& Momentum);
	void QuestUpdate(class AFortPawn* Pawn);
	void Wobble();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GA_Athena_HidingProp_Teleport_C">();
	}
	static class UGA_Athena_HidingProp_Teleport_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGA_Athena_HidingProp_Teleport_C>();
	}
};
static_assert(alignof(UGA_Athena_HidingProp_Teleport_C) == 0x000008, "Wrong alignment on UGA_Athena_HidingProp_Teleport_C");
static_assert(sizeof(UGA_Athena_HidingProp_Teleport_C) == 0x000BC0, "Wrong size on UGA_Athena_HidingProp_Teleport_C");
static_assert(offsetof(UGA_Athena_HidingProp_Teleport_C, UberGraphFrame) == 0x000B28, "Member 'UGA_Athena_HidingProp_Teleport_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UGA_Athena_HidingProp_Teleport_C, NewEventDispatcher_0) == 0x000B30, "Member 'UGA_Athena_HidingProp_Teleport_C::NewEventDispatcher_0' has a wrong offset!");
static_assert(offsetof(UGA_Athena_HidingProp_Teleport_C, HidingProp) == 0x000B40, "Member 'UGA_Athena_HidingProp_Teleport_C::HidingProp' has a wrong offset!");
static_assert(offsetof(UGA_Athena_HidingProp_Teleport_C, TargetTeleporter) == 0x000B48, "Member 'UGA_Athena_HidingProp_Teleport_C::TargetTeleporter' has a wrong offset!");
static_assert(offsetof(UGA_Athena_HidingProp_Teleport_C, T_HudElementToHide) == 0x000B50, "Member 'UGA_Athena_HidingProp_Teleport_C::T_HudElementToHide' has a wrong offset!");
static_assert(offsetof(UGA_Athena_HidingProp_Teleport_C, TargetPropTeleportingCue) == 0x000B70, "Member 'UGA_Athena_HidingProp_Teleport_C::TargetPropTeleportingCue' has a wrong offset!");
static_assert(offsetof(UGA_Athena_HidingProp_Teleport_C, WobbleHandle) == 0x000B78, "Member 'UGA_Athena_HidingProp_Teleport_C::WobbleHandle' has a wrong offset!");
static_assert(offsetof(UGA_Athena_HidingProp_Teleport_C, WobbleCue) == 0x000B80, "Member 'UGA_Athena_HidingProp_Teleport_C::WobbleCue' has a wrong offset!");
static_assert(offsetof(UGA_Athena_HidingProp_Teleport_C, ServerWorldTime) == 0x000B88, "Member 'UGA_Athena_HidingProp_Teleport_C::ServerWorldTime' has a wrong offset!");
static_assert(offsetof(UGA_Athena_HidingProp_Teleport_C, EnterCue) == 0x000B90, "Member 'UGA_Athena_HidingProp_Teleport_C::EnterCue' has a wrong offset!");
static_assert(offsetof(UGA_Athena_HidingProp_Teleport_C, HidingInPropTag) == 0x000B94, "Member 'UGA_Athena_HidingProp_Teleport_C::HidingInPropTag' has a wrong offset!");
static_assert(offsetof(UGA_Athena_HidingProp_Teleport_C, ChangeEquipmentTag) == 0x000B98, "Member 'UGA_Athena_HidingProp_Teleport_C::ChangeEquipmentTag' has a wrong offset!");
static_assert(offsetof(UGA_Athena_HidingProp_Teleport_C, TeleportingGEOnPlayer) == 0x000BB8, "Member 'UGA_Athena_HidingProp_Teleport_C::TeleportingGEOnPlayer' has a wrong offset!");

}
