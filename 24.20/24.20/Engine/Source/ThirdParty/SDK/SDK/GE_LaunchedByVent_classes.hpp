#pragma once

#include "Basic.hpp"

#include "GameplayAbilities_classes.hpp"

namespace SDK
{

class UGE_LaunchedByVent_C final : public UGameplayEffect
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GE_LaunchedByVent_C">();
	}
	static class UGE_LaunchedByVent_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGE_LaunchedByVent_C>();
	}
};
static_assert(alignof(UGE_LaunchedByVent_C) == 0x000008, "Wrong alignment on UGE_LaunchedByVent_C");
static_assert(sizeof(UGE_LaunchedByVent_C) == 0x000858, "Wrong size on UGE_LaunchedByVent_C");

}
