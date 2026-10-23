#pragma once

#include "Basic.hpp"

#include "FortniteUI_classes.hpp"

namespace SDK
{

class USimpleMaterialProgressBar_C final : public UFortSimpleMaterialProgressBar
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"SimpleMaterialProgressBar_C">();
	}
	static class USimpleMaterialProgressBar_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<USimpleMaterialProgressBar_C>();
	}
};
static_assert(alignof(USimpleMaterialProgressBar_C) == 0x000008, "Wrong alignment on USimpleMaterialProgressBar_C");
static_assert(sizeof(USimpleMaterialProgressBar_C) == 0x000360, "Wrong size on USimpleMaterialProgressBar_C");

}
