#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteGame_classes.hpp"

namespace SDK
{

class UGAB_DropPlayer_C final : public UFortGameplayAbility_CarryPlayer
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;
	class AFortPlayerPawn*                        PlayerPawn;

public:
	void Cancelled_89F288114D44792D5568298354B7216C(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag);
	void Completed_89F288114D44792D5568298354B7216C(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag);
	void ExecuteUbergraph_GAB_DropPlayer(int32 EntryPoint);
	void K2_ActivateAbility();
	void K2_OnEndAbility(bool bWasCancelled);
	void Triggered_89F288114D44792D5568298354B7216C(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GAB_DropPlayer_C">();
	}
	static class UGAB_DropPlayer_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGAB_DropPlayer_C>();
	}
};
static_assert(alignof(UGAB_DropPlayer_C) == 0x000008, "Wrong alignment on UGAB_DropPlayer_C");
static_assert(sizeof(UGAB_DropPlayer_C) == 0x000B68, "Wrong size on UGAB_DropPlayer_C");
static_assert(offsetof(UGAB_DropPlayer_C, UberGraphFrame) == 0x000B58, "Member 'UGAB_DropPlayer_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UGAB_DropPlayer_C, PlayerPawn) == 0x000B60, "Member 'UGAB_DropPlayer_C::PlayerPawn' has a wrong offset!");

}
