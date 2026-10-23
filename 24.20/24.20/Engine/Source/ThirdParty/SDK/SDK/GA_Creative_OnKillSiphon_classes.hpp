#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "GameplayTags_structs.hpp"
#include "GAT_Creative_TriggeredAbility_Pawn_classes.hpp"
#include "FortniteGame_structs.hpp"

namespace SDK
{

class UGA_Creative_OnKillSiphon_C final : public UGAT_Creative_TriggeredAbility_Pawn_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_GA_Creative_OnKillSiphon_C;
	class AFortGameStateAthena*                   GameState;
	bool                                          IsCreativeOrPlayground;
	uint8                                         Pad_B71[0x7];
	class UClass*                                 GE_HealPlayer;
	bool                                          bShouldConvertExcessHealthToShields;
	uint8                                         Pad_B81[0x7];
	class UClass*                                 ShieldGE;
	struct FGameplayTag                           ConsumedCue;
	bool                                          bDebugBypasLocalMapEnable;
	bool                                          bAttemptHealthRestore;
	bool                                          bAttemptMatsRestore;
	uint8                                         Pad_B97[0x1];
	class FName                                   NameGrantWood;
	class FName                                   NameGrantStone;
	class FName                                   NameGrantMetal;

public:
	void AddShields(bool bShouldConvertExcessHealthToShields_0, double ShieldToAdd, bool* bAddedShields, double* ShieldAdded);
	void AttemptHeal();
	void AttemptMats();
	void CalculateResources(EFortResourceType ResourceGrantType, bool* bSuccess, int32* ResourceToGive, EFortResourceType* ResourceType);
	void DetermineHealthDelta(double HealingAmount, double* MaxHealth, double* CurrentHealth, double* HealthDelta, double* ExcessHealh);
	void ExecuteUbergraph_GA_Creative_OnKillSiphon(int32 EntryPoint);
	void GiveResourcesToPlayer(bool bShouldGrant, int32 GiveAmount, EFortResourceType GiveType, bool* Success);
	void K2_ActivateAbilityFromEvent(const struct FGameplayEventData& EventData);
	void RestoreHealth(bool* Success, double* InitialHealAmount, double* ActualAppliedHeal, double* ExcessHealing);
	void SetupRestoreModes(bool* ShouldContinue);

	bool K2_ShouldAbilityRespondToEvent(const struct FGameplayAbilityActorInfo& ActorInfo, const struct FGameplayEventData& Payload) const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GA_Creative_OnKillSiphon_C">();
	}
	static class UGA_Creative_OnKillSiphon_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGA_Creative_OnKillSiphon_C>();
	}
};
static_assert(alignof(UGA_Creative_OnKillSiphon_C) == 0x000008, "Wrong alignment on UGA_Creative_OnKillSiphon_C");
static_assert(sizeof(UGA_Creative_OnKillSiphon_C) == 0x000BA8, "Wrong size on UGA_Creative_OnKillSiphon_C");
static_assert(offsetof(UGA_Creative_OnKillSiphon_C, UberGraphFrame_GA_Creative_OnKillSiphon_C) == 0x000B60, "Member 'UGA_Creative_OnKillSiphon_C::UberGraphFrame_GA_Creative_OnKillSiphon_C' has a wrong offset!");
static_assert(offsetof(UGA_Creative_OnKillSiphon_C, GameState) == 0x000B68, "Member 'UGA_Creative_OnKillSiphon_C::GameState' has a wrong offset!");
static_assert(offsetof(UGA_Creative_OnKillSiphon_C, IsCreativeOrPlayground) == 0x000B70, "Member 'UGA_Creative_OnKillSiphon_C::IsCreativeOrPlayground' has a wrong offset!");
static_assert(offsetof(UGA_Creative_OnKillSiphon_C, GE_HealPlayer) == 0x000B78, "Member 'UGA_Creative_OnKillSiphon_C::GE_HealPlayer' has a wrong offset!");
static_assert(offsetof(UGA_Creative_OnKillSiphon_C, bShouldConvertExcessHealthToShields) == 0x000B80, "Member 'UGA_Creative_OnKillSiphon_C::bShouldConvertExcessHealthToShields' has a wrong offset!");
static_assert(offsetof(UGA_Creative_OnKillSiphon_C, ShieldGE) == 0x000B88, "Member 'UGA_Creative_OnKillSiphon_C::ShieldGE' has a wrong offset!");
static_assert(offsetof(UGA_Creative_OnKillSiphon_C, ConsumedCue) == 0x000B90, "Member 'UGA_Creative_OnKillSiphon_C::ConsumedCue' has a wrong offset!");
static_assert(offsetof(UGA_Creative_OnKillSiphon_C, bDebugBypasLocalMapEnable) == 0x000B94, "Member 'UGA_Creative_OnKillSiphon_C::bDebugBypasLocalMapEnable' has a wrong offset!");
static_assert(offsetof(UGA_Creative_OnKillSiphon_C, bAttemptHealthRestore) == 0x000B95, "Member 'UGA_Creative_OnKillSiphon_C::bAttemptHealthRestore' has a wrong offset!");
static_assert(offsetof(UGA_Creative_OnKillSiphon_C, bAttemptMatsRestore) == 0x000B96, "Member 'UGA_Creative_OnKillSiphon_C::bAttemptMatsRestore' has a wrong offset!");
static_assert(offsetof(UGA_Creative_OnKillSiphon_C, NameGrantWood) == 0x000B98, "Member 'UGA_Creative_OnKillSiphon_C::NameGrantWood' has a wrong offset!");
static_assert(offsetof(UGA_Creative_OnKillSiphon_C, NameGrantStone) == 0x000B9C, "Member 'UGA_Creative_OnKillSiphon_C::NameGrantStone' has a wrong offset!");
static_assert(offsetof(UGA_Creative_OnKillSiphon_C, NameGrantMetal) == 0x000BA0, "Member 'UGA_Creative_OnKillSiphon_C::NameGrantMetal' has a wrong offset!");

}
