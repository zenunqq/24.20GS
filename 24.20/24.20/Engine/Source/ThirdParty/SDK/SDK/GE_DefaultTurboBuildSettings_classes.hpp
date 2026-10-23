#pragma once

#include "Basic.hpp"

#include "GameplayAbilities_classes.hpp"

namespace SDK
{

class UGE_DefaultTurboBuildSettings_C final : public UGameplayEffect
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GE_DefaultTurboBuildSettings_C">();
	}
	static class UGE_DefaultTurboBuildSettings_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGE_DefaultTurboBuildSettings_C>();
	}
};
static_assert(alignof(UGE_DefaultTurboBuildSettings_C) == 0x000008, "Wrong alignment on UGE_DefaultTurboBuildSettings_C");
static_assert(sizeof(UGE_DefaultTurboBuildSettings_C) == 0x000858, "Wrong size on UGE_DefaultTurboBuildSettings_C");

}
