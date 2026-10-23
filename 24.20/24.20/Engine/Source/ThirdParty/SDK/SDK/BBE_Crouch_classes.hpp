#pragma once

#include "Basic.hpp"

#include "FortniteUI_classes.hpp"

namespace SDK
{

class UBBE_Crouch_C final : public UFortMobileActionButtonBehaviorExtension
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BBE_Crouch_C">();
	}
	static class UBBE_Crouch_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBBE_Crouch_C>();
	}
};
static_assert(alignof(UBBE_Crouch_C) == 0x000008, "Wrong alignment on UBBE_Crouch_C");
static_assert(sizeof(UBBE_Crouch_C) == 0x000070, "Wrong size on UBBE_Crouch_C");

}
