#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteGame_classes.hpp"

namespace SDK
{

class UGA_BoostJumpPack_Equip_C final : public UFortGameplayAbility
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;
	class AFortPlayerPawn*                        PlayerPawn;

public:
	void ExecuteUbergraph_GA_BoostJumpPack_Equip(int32 EntryPoint);
	void IsAuthority(bool* bAuthority);
	void K2_ActivateAbility();

	class UFortItem* GetGadgetItem(class AFortPlayerPawn* Pawn) const;
	void GetPlayerController(class AFortPlayerPawn* Pawn, class AFortPlayerControllerZone** AsFort_Player_Controller_Zone) const;
	bool K2_CanActivateAbility(const struct FGameplayAbilityActorInfo& ActorInfo, const struct FGameplayAbilitySpecHandle& Handle, struct FGameplayTagContainer* RelevantTags) const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GA_BoostJumpPack_Equip_C">();
	}
	static class UGA_BoostJumpPack_Equip_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGA_BoostJumpPack_Equip_C>();
	}
};
static_assert(alignof(UGA_BoostJumpPack_Equip_C) == 0x000008, "Wrong alignment on UGA_BoostJumpPack_Equip_C");
static_assert(sizeof(UGA_BoostJumpPack_Equip_C) == 0x000B38, "Wrong size on UGA_BoostJumpPack_Equip_C");
static_assert(offsetof(UGA_BoostJumpPack_Equip_C, UberGraphFrame) == 0x000B28, "Member 'UGA_BoostJumpPack_Equip_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UGA_BoostJumpPack_Equip_C, PlayerPawn) == 0x000B30, "Member 'UGA_BoostJumpPack_Equip_C::PlayerPawn' has a wrong offset!");

}
