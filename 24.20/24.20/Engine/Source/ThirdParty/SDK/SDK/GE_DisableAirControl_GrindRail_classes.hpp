#pragma once

#include "Basic.hpp"

#include "GameplayAbilities_classes.hpp"

namespace SDK
{

class UGE_DisableAirControl_GrindRail_C final : public UGameplayEffect
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GE_DisableAirControl_GrindRail_C">();
	}
	static class UGE_DisableAirControl_GrindRail_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGE_DisableAirControl_GrindRail_C>();
	}
};
static_assert(alignof(UGE_DisableAirControl_GrindRail_C) == 0x000008, "Wrong alignment on UGE_DisableAirControl_GrindRail_C");
static_assert(sizeof(UGE_DisableAirControl_GrindRail_C) == 0x000858, "Wrong size on UGE_DisableAirControl_GrindRail_C");

}
