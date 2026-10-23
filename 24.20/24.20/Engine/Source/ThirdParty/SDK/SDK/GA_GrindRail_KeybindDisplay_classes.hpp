#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteGame_classes.hpp"

namespace SDK
{

class UGA_GrindRail_KeybindDisplay_C final : public UFortGameplayAbility_KeybindDisplay
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;

public:
	void ExecuteUbergraph_GA_GrindRail_KeybindDisplay(int32 EntryPoint);
	void K2_ActivateAbility();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GA_GrindRail_KeybindDisplay_C">();
	}
	static class UGA_GrindRail_KeybindDisplay_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGA_GrindRail_KeybindDisplay_C>();
	}
};
static_assert(alignof(UGA_GrindRail_KeybindDisplay_C) == 0x000008, "Wrong alignment on UGA_GrindRail_KeybindDisplay_C");
static_assert(sizeof(UGA_GrindRail_KeybindDisplay_C) == 0x000B50, "Wrong size on UGA_GrindRail_KeybindDisplay_C");
static_assert(offsetof(UGA_GrindRail_KeybindDisplay_C, UberGraphFrame) == 0x000B48, "Member 'UGA_GrindRail_KeybindDisplay_C::UberGraphFrame' has a wrong offset!");

}
