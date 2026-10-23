#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "GameplayTags_structs.hpp"
#include "FortniteGame_classes.hpp"

namespace SDK
{

class UGA_TrapBuildGeneric_C final : public UFortGameplayAbility
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;
	struct FGameplayTag                           PlacedCue;

public:
	void ExecuteUbergraph_GA_TrapBuildGeneric(int32 EntryPoint);
	void K2_ActivateAbility();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GA_TrapBuildGeneric_C">();
	}
	static class UGA_TrapBuildGeneric_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGA_TrapBuildGeneric_C>();
	}
};
static_assert(alignof(UGA_TrapBuildGeneric_C) == 0x000008, "Wrong alignment on UGA_TrapBuildGeneric_C");
static_assert(sizeof(UGA_TrapBuildGeneric_C) == 0x000B38, "Wrong size on UGA_TrapBuildGeneric_C");
static_assert(offsetof(UGA_TrapBuildGeneric_C, UberGraphFrame) == 0x000B28, "Member 'UGA_TrapBuildGeneric_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UGA_TrapBuildGeneric_C, PlacedCue) == 0x000B30, "Member 'UGA_TrapBuildGeneric_C::PlacedCue' has a wrong offset!");

}
