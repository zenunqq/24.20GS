#pragma once

#include "Basic.hpp"

#include "GameplayAbilities_classes.hpp"

namespace SDK
{

class UGE_GrindRail_IsGrinding_C final : public UGameplayEffect
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GE_GrindRail_IsGrinding_C">();
	}
	static class UGE_GrindRail_IsGrinding_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGE_GrindRail_IsGrinding_C>();
	}
};
static_assert(alignof(UGE_GrindRail_IsGrinding_C) == 0x000008, "Wrong alignment on UGE_GrindRail_IsGrinding_C");
static_assert(sizeof(UGE_GrindRail_IsGrinding_C) == 0x000858, "Wrong size on UGE_GrindRail_IsGrinding_C");

}
