#pragma once

#include "Basic.hpp"

#include "GameplayTags_structs.hpp"
#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "FortniteGame_classes.hpp"
#include "GameplayAbilities_structs.hpp"

namespace SDK
{

class UGAB_InterrogatePlayer_Search_C final : public UFortGameplayAbility_CarryPlayer
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;
	class AFortPlayerPawn*                        PlayerPawn;
	class AFortPlayerControllerAthena*            PlayerController;
	class AFortPlayerPawn*                        InterrogatedPlayer;
	class UAnimMontage*                           Anim_Search;
	class FName                                   InterrogateHolster;
	class FName                                   LootTierGroupName;
	class UFortWorldItemDefinition*               ItemDefinition;
	int32                                         NumberToSpawn;
	uint8                                         Pad_B94[0x4];
	struct FVector                                LootSpawnOffset;
	struct FScalableFloat                         MaxDropsInstance;
	int32                                         NumDropsInstance;
	uint8                                         Pad_BDC[0x4];
	struct FScalableFloat                         KeycardDropBias;
	TArray<class UFortWorldItemDefinition*>       KeycardItemDefinitions;
	struct FGameplayTag                           T_Keycard_Yacht;
	struct FGameplayTag                           T_Keycard_OilRig;
	struct FGameplayTag                           T_Keycard_SharkIsland;
	struct FGameplayTag                           T_Keycard_HQ;
	struct FGameplayTag                           T_Keycard_MountainBase;
	uint8                                         Pad_C2C[0x4];
	struct FTimerHandle                           Timer_Interrogation;
	struct FGameplayTagContainer                  T_ReticleHUD;
	struct FGameplayTag                           T_NPC;
	uint8                                         Pad_C5C[0x4];
	class UClass*                                 GE_Cooldown;
	class UClass*                                 GE_PickedUp;

public:
	void Added_9291D75D4A0949E1C5B7E49C1FD11F8B();
	void ApplyGameplayEffectToNPC(class UClass* GameplayEffect);
	void Cancelled_6BBDC9B445D4280492A25E8E5EA7A53D(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag);
	void Completed_6BBDC9B445D4280492A25E8E5EA7A53D(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag);
	void DropKeycard();
	void DropLoot();
	void EndAbilityCleanup();
	void ExecuteUbergraph_GAB_InterrogatePlayer_Search(int32 EntryPoint);
	void GetKeycardToDrop(bool* HasKeycard, class UFortWorldItemDefinition** Output);
	void InitAbility();
	void K2_ActivateAbility();
	void K2_OnEndAbility(bool bWasCancelled);
	void OnDied_Event_0(class AActor* DamagedActor, float Damage, class AController* InstigatedBy, class AActor* DamageCauser, const struct FVector& HitLocation, class UPrimitiveComponent* FHitComponent, class FName BoneName, const struct FVector& Momentum);
	void OnDied_Event_1(class AActor* DamagedActor, float Damage, class AController* InstigatedBy, class AActor* DamageCauser, const struct FVector& HitLocation, class UPrimitiveComponent* FHitComponent, class FName BoneName, const struct FVector& Momentum);
	void OnPress_2000C5AE43E9D757FF188B85CF911E39(float TimeWaited);
	void ToggleReticleVisibility(bool Hide);
	void Triggered_6BBDC9B445D4280492A25E8E5EA7A53D(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GAB_InterrogatePlayer_Search_C">();
	}
	static class UGAB_InterrogatePlayer_Search_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGAB_InterrogatePlayer_Search_C>();
	}
};
static_assert(alignof(UGAB_InterrogatePlayer_Search_C) == 0x000008, "Wrong alignment on UGAB_InterrogatePlayer_Search_C");
static_assert(sizeof(UGAB_InterrogatePlayer_Search_C) == 0x000C70, "Wrong size on UGAB_InterrogatePlayer_Search_C");
static_assert(offsetof(UGAB_InterrogatePlayer_Search_C, UberGraphFrame) == 0x000B58, "Member 'UGAB_InterrogatePlayer_Search_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UGAB_InterrogatePlayer_Search_C, PlayerPawn) == 0x000B60, "Member 'UGAB_InterrogatePlayer_Search_C::PlayerPawn' has a wrong offset!");
static_assert(offsetof(UGAB_InterrogatePlayer_Search_C, PlayerController) == 0x000B68, "Member 'UGAB_InterrogatePlayer_Search_C::PlayerController' has a wrong offset!");
static_assert(offsetof(UGAB_InterrogatePlayer_Search_C, InterrogatedPlayer) == 0x000B70, "Member 'UGAB_InterrogatePlayer_Search_C::InterrogatedPlayer' has a wrong offset!");
static_assert(offsetof(UGAB_InterrogatePlayer_Search_C, Anim_Search) == 0x000B78, "Member 'UGAB_InterrogatePlayer_Search_C::Anim_Search' has a wrong offset!");
static_assert(offsetof(UGAB_InterrogatePlayer_Search_C, InterrogateHolster) == 0x000B80, "Member 'UGAB_InterrogatePlayer_Search_C::InterrogateHolster' has a wrong offset!");
static_assert(offsetof(UGAB_InterrogatePlayer_Search_C, LootTierGroupName) == 0x000B84, "Member 'UGAB_InterrogatePlayer_Search_C::LootTierGroupName' has a wrong offset!");
static_assert(offsetof(UGAB_InterrogatePlayer_Search_C, ItemDefinition) == 0x000B88, "Member 'UGAB_InterrogatePlayer_Search_C::ItemDefinition' has a wrong offset!");
static_assert(offsetof(UGAB_InterrogatePlayer_Search_C, NumberToSpawn) == 0x000B90, "Member 'UGAB_InterrogatePlayer_Search_C::NumberToSpawn' has a wrong offset!");
static_assert(offsetof(UGAB_InterrogatePlayer_Search_C, LootSpawnOffset) == 0x000B98, "Member 'UGAB_InterrogatePlayer_Search_C::LootSpawnOffset' has a wrong offset!");
static_assert(offsetof(UGAB_InterrogatePlayer_Search_C, MaxDropsInstance) == 0x000BB0, "Member 'UGAB_InterrogatePlayer_Search_C::MaxDropsInstance' has a wrong offset!");
static_assert(offsetof(UGAB_InterrogatePlayer_Search_C, NumDropsInstance) == 0x000BD8, "Member 'UGAB_InterrogatePlayer_Search_C::NumDropsInstance' has a wrong offset!");
static_assert(offsetof(UGAB_InterrogatePlayer_Search_C, KeycardDropBias) == 0x000BE0, "Member 'UGAB_InterrogatePlayer_Search_C::KeycardDropBias' has a wrong offset!");
static_assert(offsetof(UGAB_InterrogatePlayer_Search_C, KeycardItemDefinitions) == 0x000C08, "Member 'UGAB_InterrogatePlayer_Search_C::KeycardItemDefinitions' has a wrong offset!");
static_assert(offsetof(UGAB_InterrogatePlayer_Search_C, T_Keycard_Yacht) == 0x000C18, "Member 'UGAB_InterrogatePlayer_Search_C::T_Keycard_Yacht' has a wrong offset!");
static_assert(offsetof(UGAB_InterrogatePlayer_Search_C, T_Keycard_OilRig) == 0x000C1C, "Member 'UGAB_InterrogatePlayer_Search_C::T_Keycard_OilRig' has a wrong offset!");
static_assert(offsetof(UGAB_InterrogatePlayer_Search_C, T_Keycard_SharkIsland) == 0x000C20, "Member 'UGAB_InterrogatePlayer_Search_C::T_Keycard_SharkIsland' has a wrong offset!");
static_assert(offsetof(UGAB_InterrogatePlayer_Search_C, T_Keycard_HQ) == 0x000C24, "Member 'UGAB_InterrogatePlayer_Search_C::T_Keycard_HQ' has a wrong offset!");
static_assert(offsetof(UGAB_InterrogatePlayer_Search_C, T_Keycard_MountainBase) == 0x000C28, "Member 'UGAB_InterrogatePlayer_Search_C::T_Keycard_MountainBase' has a wrong offset!");
static_assert(offsetof(UGAB_InterrogatePlayer_Search_C, Timer_Interrogation) == 0x000C30, "Member 'UGAB_InterrogatePlayer_Search_C::Timer_Interrogation' has a wrong offset!");
static_assert(offsetof(UGAB_InterrogatePlayer_Search_C, T_ReticleHUD) == 0x000C38, "Member 'UGAB_InterrogatePlayer_Search_C::T_ReticleHUD' has a wrong offset!");
static_assert(offsetof(UGAB_InterrogatePlayer_Search_C, T_NPC) == 0x000C58, "Member 'UGAB_InterrogatePlayer_Search_C::T_NPC' has a wrong offset!");
static_assert(offsetof(UGAB_InterrogatePlayer_Search_C, GE_Cooldown) == 0x000C60, "Member 'UGAB_InterrogatePlayer_Search_C::GE_Cooldown' has a wrong offset!");
static_assert(offsetof(UGAB_InterrogatePlayer_Search_C, GE_PickedUp) == 0x000C68, "Member 'UGAB_InterrogatePlayer_Search_C::GE_PickedUp' has a wrong offset!");

}
