#pragma once

#include "Basic.hpp"

#include "FortniteUI_classes.hpp"

namespace SDK
{

class UBBE_Sprint_C final : public UFortMobileActionButtonBehaviorExtension
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BBE_Sprint_C">();
	}
	static class UBBE_Sprint_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBBE_Sprint_C>();
	}
};
static_assert(alignof(UBBE_Sprint_C) == 0x000008, "Wrong alignment on UBBE_Sprint_C");
static_assert(sizeof(UBBE_Sprint_C) == 0x000070, "Wrong size on UBBE_Sprint_C");

}
