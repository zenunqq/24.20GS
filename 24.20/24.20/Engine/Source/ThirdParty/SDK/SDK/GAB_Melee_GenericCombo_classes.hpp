#pragma once

#include "Basic.hpp"

#include "GAB_Melee_Generic_EventGraph_classes.hpp"
#include "Engine_structs.hpp"

namespace SDK
{

class UGAB_Melee_GenericCombo_C : public UGAB_Melee_Generic_EventGraph_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_GAB_Melee_GenericCombo_C;
	double                                        OriginalMontagePlayRate;

public:
	void Cancelled_C69ED31E4DA3D5C32C2E1EABFD10F38B(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag);
	void Completed_C69ED31E4DA3D5C32C2E1EABFD10F38B(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag);
	void ExecuteUbergraph_GAB_Melee_GenericCombo(int32 EntryPoint);
	void K2_ActivateAbility();
	void K2_OnEndAbility(bool bWasCancelled);
	void Triggered_C69ED31E4DA3D5C32C2E1EABFD10F38B(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GAB_Melee_GenericCombo_C">();
	}
	static class UGAB_Melee_GenericCombo_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGAB_Melee_GenericCombo_C>();
	}
};
static_assert(alignof(UGAB_Melee_GenericCombo_C) == 0x000008, "Wrong alignment on UGAB_Melee_GenericCombo_C");
static_assert(sizeof(UGAB_Melee_GenericCombo_C) == 0x000B70, "Wrong size on UGAB_Melee_GenericCombo_C");
static_assert(offsetof(UGAB_Melee_GenericCombo_C, UberGraphFrame_GAB_Melee_GenericCombo_C) == 0x000B60, "Member 'UGAB_Melee_GenericCombo_C::UberGraphFrame_GAB_Melee_GenericCombo_C' has a wrong offset!");
static_assert(offsetof(UGAB_Melee_GenericCombo_C, OriginalMontagePlayRate) == 0x000B68, "Member 'UGAB_Melee_GenericCombo_C::OriginalMontagePlayRate' has a wrong offset!");

}
