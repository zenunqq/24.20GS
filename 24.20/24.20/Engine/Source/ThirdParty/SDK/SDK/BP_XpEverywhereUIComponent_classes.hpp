#pragma once

#include "Basic.hpp"

#include "XpEverywhereUI_classes.hpp"

namespace SDK
{

class UBP_XpEverywhereUIComponent_C final : public UXpEverywhereUIComponent
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_XpEverywhereUIComponent_C">();
	}
	static class UBP_XpEverywhereUIComponent_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_XpEverywhereUIComponent_C>();
	}
};
static_assert(alignof(UBP_XpEverywhereUIComponent_C) == 0x000008, "Wrong alignment on UBP_XpEverywhereUIComponent_C");
static_assert(sizeof(UBP_XpEverywhereUIComponent_C) == 0x000160, "Wrong size on UBP_XpEverywhereUIComponent_C");

}
