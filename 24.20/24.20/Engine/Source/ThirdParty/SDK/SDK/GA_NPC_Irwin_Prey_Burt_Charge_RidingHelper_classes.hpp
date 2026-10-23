#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "GameplayTags_structs.hpp"
#include "FortniteGame_classes.hpp"

namespace SDK
{

class UGA_NPC_Irwin_Prey_Burt_Charge_RidingHelper_C final : public UFortGameplayAbility
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;
	class UControllableRidableComponent*          ControllableRidableComponent_Cached;
	class AFortAIPawn*                            FortAIPawnCached;
	double                                        InitialMaxAcceleration;
	double                                        MaxRotationRateYaw;
	struct FGameplayTag                           GCN_BoostTag;
	uint8                                         Pad_B54[0x4];
	class UFortGameplayAbility*                   TargetAbilityCached;

public:
	void ExecuteUbergraph_GA_NPC_Irwin_Prey_Burt_Charge_RidingHelper(int32 EntryPoint);
	void FireBoostEffectsOnPlayerMulti(class AActor* PlayerTarget);
	void K2_ActivateAbilityFromEvent(const struct FGameplayEventData& EventData);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GA_NPC_Irwin_Prey_Burt_Charge_RidingHelper_C">();
	}
	static class UGA_NPC_Irwin_Prey_Burt_Charge_RidingHelper_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGA_NPC_Irwin_Prey_Burt_Charge_RidingHelper_C>();
	}
};
static_assert(alignof(UGA_NPC_Irwin_Prey_Burt_Charge_RidingHelper_C) == 0x000008, "Wrong alignment on UGA_NPC_Irwin_Prey_Burt_Charge_RidingHelper_C");
static_assert(sizeof(UGA_NPC_Irwin_Prey_Burt_Charge_RidingHelper_C) == 0x000B60, "Wrong size on UGA_NPC_Irwin_Prey_Burt_Charge_RidingHelper_C");
static_assert(offsetof(UGA_NPC_Irwin_Prey_Burt_Charge_RidingHelper_C, UberGraphFrame) == 0x000B28, "Member 'UGA_NPC_Irwin_Prey_Burt_Charge_RidingHelper_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UGA_NPC_Irwin_Prey_Burt_Charge_RidingHelper_C, ControllableRidableComponent_Cached) == 0x000B30, "Member 'UGA_NPC_Irwin_Prey_Burt_Charge_RidingHelper_C::ControllableRidableComponent_Cached' has a wrong offset!");
static_assert(offsetof(UGA_NPC_Irwin_Prey_Burt_Charge_RidingHelper_C, FortAIPawnCached) == 0x000B38, "Member 'UGA_NPC_Irwin_Prey_Burt_Charge_RidingHelper_C::FortAIPawnCached' has a wrong offset!");
static_assert(offsetof(UGA_NPC_Irwin_Prey_Burt_Charge_RidingHelper_C, InitialMaxAcceleration) == 0x000B40, "Member 'UGA_NPC_Irwin_Prey_Burt_Charge_RidingHelper_C::InitialMaxAcceleration' has a wrong offset!");
static_assert(offsetof(UGA_NPC_Irwin_Prey_Burt_Charge_RidingHelper_C, MaxRotationRateYaw) == 0x000B48, "Member 'UGA_NPC_Irwin_Prey_Burt_Charge_RidingHelper_C::MaxRotationRateYaw' has a wrong offset!");
static_assert(offsetof(UGA_NPC_Irwin_Prey_Burt_Charge_RidingHelper_C, GCN_BoostTag) == 0x000B50, "Member 'UGA_NPC_Irwin_Prey_Burt_Charge_RidingHelper_C::GCN_BoostTag' has a wrong offset!");
static_assert(offsetof(UGA_NPC_Irwin_Prey_Burt_Charge_RidingHelper_C, TargetAbilityCached) == 0x000B58, "Member 'UGA_NPC_Irwin_Prey_Burt_Charge_RidingHelper_C::TargetAbilityCached' has a wrong offset!");

}
