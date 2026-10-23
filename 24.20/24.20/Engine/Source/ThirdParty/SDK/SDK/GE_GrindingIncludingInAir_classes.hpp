#pragma once

#include "Basic.hpp"

#include "GameplayAbilities_classes.hpp"

namespace SDK
{

class UGE_GrindingIncludingInAir_C final : public UGameplayEffect
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GE_GrindingIncludingInAir_C">();
	}
	static class UGE_GrindingIncludingInAir_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGE_GrindingIncludingInAir_C>();
	}
};
static_assert(alignof(UGE_GrindingIncludingInAir_C) == 0x000008, "Wrong alignment on UGE_GrindingIncludingInAir_C");
static_assert(sizeof(UGE_GrindingIncludingInAir_C) == 0x000858, "Wrong size on UGE_GrindingIncludingInAir_C");

}
