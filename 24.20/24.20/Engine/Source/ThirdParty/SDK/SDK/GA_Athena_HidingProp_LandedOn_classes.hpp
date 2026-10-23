#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteGame_classes.hpp"
#include "GameplayAbilities_structs.hpp"

namespace SDK
{

class UGA_Athena_HidingProp_LandedOn_C final : public UFortGameplayAbility
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;
	struct FScalableFloat                         HidingEnabled;

public:
	void ExecuteUbergraph_GA_Athena_HidingProp_LandedOn(int32 EntryPoint);
	void K2_ActivateAbilityFromEvent(const struct FGameplayEventData& EventData);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GA_Athena_HidingProp_LandedOn_C">();
	}
	static class UGA_Athena_HidingProp_LandedOn_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGA_Athena_HidingProp_LandedOn_C>();
	}
};
static_assert(alignof(UGA_Athena_HidingProp_LandedOn_C) == 0x000008, "Wrong alignment on UGA_Athena_HidingProp_LandedOn_C");
static_assert(sizeof(UGA_Athena_HidingProp_LandedOn_C) == 0x000B58, "Wrong size on UGA_Athena_HidingProp_LandedOn_C");
static_assert(offsetof(UGA_Athena_HidingProp_LandedOn_C, UberGraphFrame) == 0x000B28, "Member 'UGA_Athena_HidingProp_LandedOn_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UGA_Athena_HidingProp_LandedOn_C, HidingEnabled) == 0x000B30, "Member 'UGA_Athena_HidingProp_LandedOn_C::HidingEnabled' has a wrong offset!");

}
