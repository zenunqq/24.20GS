#pragma once

#include "Basic.hpp"

#include "FortniteUI_classes.hpp"

namespace SDK
{

class UBB_Rock_Boost_C final : public UFortMobileActionButtonBehavior
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BB_Rock_Boost_C">();
	}
	static class UBB_Rock_Boost_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBB_Rock_Boost_C>();
	}
};
static_assert(alignof(UBB_Rock_Boost_C) == 0x000008, "Wrong alignment on UBB_Rock_Boost_C");
static_assert(sizeof(UBB_Rock_Boost_C) == 0x000110, "Wrong size on UBB_Rock_Boost_C");

}
