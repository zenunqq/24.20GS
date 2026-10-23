#pragma once

#include "Basic.hpp"

#include "EventModeUI_classes.hpp"

namespace SDK
{

class UBB_Focus_C final : public UFortMobileActionButtonBehavior_Focus
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BB_Focus_C">();
	}
	static class UBB_Focus_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBB_Focus_C>();
	}
};
static_assert(alignof(UBB_Focus_C) == 0x000008, "Wrong alignment on UBB_Focus_C");
static_assert(sizeof(UBB_Focus_C) == 0x000118, "Wrong size on UBB_Focus_C");

}
