#pragma once

#include "Basic.hpp"

#include "FortniteUI_classes.hpp"

namespace SDK
{

class UBB_Rock_Handbrake_C final : public UFortMobileActionButtonBehavior
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BB_Rock_Handbrake_C">();
	}
	static class UBB_Rock_Handbrake_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBB_Rock_Handbrake_C>();
	}
};
static_assert(alignof(UBB_Rock_Handbrake_C) == 0x000008, "Wrong alignment on UBB_Rock_Handbrake_C");
static_assert(sizeof(UBB_Rock_Handbrake_C) == 0x000110, "Wrong size on UBB_Rock_Handbrake_C");

}
