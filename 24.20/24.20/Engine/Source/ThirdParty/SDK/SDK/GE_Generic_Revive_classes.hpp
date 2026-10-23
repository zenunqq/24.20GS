#pragma once

#include "Basic.hpp"

#include "GameplayAbilities_classes.hpp"

namespace SDK
{

class UGE_Generic_Revive_C : public UGameplayEffect
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GE_Generic_Revive_C">();
	}
	static class UGE_Generic_Revive_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGE_Generic_Revive_C>();
	}
};
static_assert(alignof(UGE_Generic_Revive_C) == 0x000008, "Wrong alignment on UGE_Generic_Revive_C");
static_assert(sizeof(UGE_Generic_Revive_C) == 0x000858, "Wrong size on UGE_Generic_Revive_C");

}
