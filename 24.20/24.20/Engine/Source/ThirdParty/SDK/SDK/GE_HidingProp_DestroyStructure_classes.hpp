#pragma once

#include "Basic.hpp"

#include "GameplayAbilities_classes.hpp"

namespace SDK
{

class UGE_HidingProp_DestroyStructure_C final : public UGameplayEffect
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GE_HidingProp_DestroyStructure_C">();
	}
	static class UGE_HidingProp_DestroyStructure_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGE_HidingProp_DestroyStructure_C>();
	}
};
static_assert(alignof(UGE_HidingProp_DestroyStructure_C) == 0x000008, "Wrong alignment on UGE_HidingProp_DestroyStructure_C");
static_assert(sizeof(UGE_HidingProp_DestroyStructure_C) == 0x000858, "Wrong size on UGE_HidingProp_DestroyStructure_C");

}
