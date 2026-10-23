#pragma once

#include "Basic.hpp"

#include "GameplayAbilities_classes.hpp"

namespace SDK
{

class UGE_DefaultPlayer_Tooltips_C final : public UGameplayEffect
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GE_DefaultPlayer_Tooltips_C">();
	}
	static class UGE_DefaultPlayer_Tooltips_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGE_DefaultPlayer_Tooltips_C>();
	}
};
static_assert(alignof(UGE_DefaultPlayer_Tooltips_C) == 0x000008, "Wrong alignment on UGE_DefaultPlayer_Tooltips_C");
static_assert(sizeof(UGE_DefaultPlayer_Tooltips_C) == 0x000858, "Wrong size on UGE_DefaultPlayer_Tooltips_C");

}
