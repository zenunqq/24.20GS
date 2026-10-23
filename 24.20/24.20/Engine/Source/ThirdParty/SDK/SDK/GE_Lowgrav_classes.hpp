#pragma once

#include "Basic.hpp"

#include "GameplayAbilities_classes.hpp"

namespace SDK
{

class UGE_Lowgrav_C final : public UGameplayEffect
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GE_Lowgrav_C">();
	}
	static class UGE_Lowgrav_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGE_Lowgrav_C>();
	}
};
static_assert(alignof(UGE_Lowgrav_C) == 0x000008, "Wrong alignment on UGE_Lowgrav_C");
static_assert(sizeof(UGE_Lowgrav_C) == 0x000858, "Wrong size on UGE_Lowgrav_C");

}
