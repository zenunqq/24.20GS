#pragma once

#include "Basic.hpp"

#include "GameplayAbilities_classes.hpp"

namespace SDK
{

class UGE_CurieElementalStatus_Burning_C final : public UGameplayEffect
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GE_CurieElementalStatus_Burning_C">();
	}
	static class UGE_CurieElementalStatus_Burning_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGE_CurieElementalStatus_Burning_C>();
	}
};
static_assert(alignof(UGE_CurieElementalStatus_Burning_C) == 0x000008, "Wrong alignment on UGE_CurieElementalStatus_Burning_C");
static_assert(sizeof(UGE_CurieElementalStatus_Burning_C) == 0x000858, "Wrong size on UGE_CurieElementalStatus_Burning_C");

}
