#pragma once

#include "Basic.hpp"

#include "GameplayAbilities_classes.hpp"

namespace SDK
{

class UGE_Quest_Converted_Irwin_C final : public UGameplayEffect
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GE_Quest_Converted_Irwin_C">();
	}
	static class UGE_Quest_Converted_Irwin_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGE_Quest_Converted_Irwin_C>();
	}
};
static_assert(alignof(UGE_Quest_Converted_Irwin_C) == 0x000008, "Wrong alignment on UGE_Quest_Converted_Irwin_C");
static_assert(sizeof(UGE_Quest_Converted_Irwin_C) == 0x000858, "Wrong size on UGE_Quest_Converted_Irwin_C");

}
