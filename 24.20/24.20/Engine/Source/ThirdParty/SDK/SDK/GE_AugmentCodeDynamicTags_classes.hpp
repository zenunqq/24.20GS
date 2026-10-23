#pragma once

#include "Basic.hpp"

#include "GameplayAbilities_classes.hpp"

namespace SDK
{

class UGE_AugmentCodeDynamicTags_C final : public UGameplayEffect
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GE_AugmentCodeDynamicTags_C">();
	}
	static class UGE_AugmentCodeDynamicTags_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGE_AugmentCodeDynamicTags_C>();
	}
};
static_assert(alignof(UGE_AugmentCodeDynamicTags_C) == 0x000008, "Wrong alignment on UGE_AugmentCodeDynamicTags_C");
static_assert(sizeof(UGE_AugmentCodeDynamicTags_C) == 0x000858, "Wrong size on UGE_AugmentCodeDynamicTags_C");

}
