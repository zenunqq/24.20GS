#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteGame_classes.hpp"

namespace SDK
{

class UGAB_ThrowPlayer_C final : public UFortGameplayAbility_CarryPlayer
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;
	class AFortPlayerPawn*                        PlayerPawn;

public:
	void Cancelled_45B7744E4902B26207BAA1954E6BCDEE(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag);
	void Completed_45B7744E4902B26207BAA1954E6BCDEE(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag);
	void ExecuteUbergraph_GAB_ThrowPlayer(int32 EntryPoint);
	void K2_ActivateAbility();
	void K2_OnEndAbility(bool bWasCancelled);
	void Triggered_45B7744E4902B26207BAA1954E6BCDEE(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GAB_ThrowPlayer_C">();
	}
	static class UGAB_ThrowPlayer_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGAB_ThrowPlayer_C>();
	}
};
static_assert(alignof(UGAB_ThrowPlayer_C) == 0x000008, "Wrong alignment on UGAB_ThrowPlayer_C");
static_assert(sizeof(UGAB_ThrowPlayer_C) == 0x000B68, "Wrong size on UGAB_ThrowPlayer_C");
static_assert(offsetof(UGAB_ThrowPlayer_C, UberGraphFrame) == 0x000B58, "Member 'UGAB_ThrowPlayer_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UGAB_ThrowPlayer_C, PlayerPawn) == 0x000B60, "Member 'UGAB_ThrowPlayer_C::PlayerPawn' has a wrong offset!");

}
