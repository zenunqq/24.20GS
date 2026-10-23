#pragma once

#include "Basic.hpp"

#include "GameplayTags_structs.hpp"
#include "Engine_structs.hpp"
#include "FortniteGame_classes.hpp"
#include "GameplayAbilities_structs.hpp"

namespace SDK
{

class UGA_Athena_HidingProp_HidingInProp_C final : public UFortGameplayAbility
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;
	struct FGameplayTagContainer                  ChangeEquipmentTag;
	struct FScalableFloat                         Row_bDisablePlayerCollision;

public:
	void ExecuteUbergraph_GA_Athena_HidingProp_HidingInProp(int32 EntryPoint);
	void GrapplerFailSafe();
	void K2_ActivateAbility();
	void K2_OnEndAbility(bool bWasCancelled);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GA_Athena_HidingProp_HidingInProp_C">();
	}
	static class UGA_Athena_HidingProp_HidingInProp_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGA_Athena_HidingProp_HidingInProp_C>();
	}
};
static_assert(alignof(UGA_Athena_HidingProp_HidingInProp_C) == 0x000008, "Wrong alignment on UGA_Athena_HidingProp_HidingInProp_C");
static_assert(sizeof(UGA_Athena_HidingProp_HidingInProp_C) == 0x000B78, "Wrong size on UGA_Athena_HidingProp_HidingInProp_C");
static_assert(offsetof(UGA_Athena_HidingProp_HidingInProp_C, UberGraphFrame) == 0x000B28, "Member 'UGA_Athena_HidingProp_HidingInProp_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UGA_Athena_HidingProp_HidingInProp_C, ChangeEquipmentTag) == 0x000B30, "Member 'UGA_Athena_HidingProp_HidingInProp_C::ChangeEquipmentTag' has a wrong offset!");
static_assert(offsetof(UGA_Athena_HidingProp_HidingInProp_C, Row_bDisablePlayerCollision) == 0x000B50, "Member 'UGA_Athena_HidingProp_HidingInProp_C::Row_bDisablePlayerCollision' has a wrong offset!");

}
