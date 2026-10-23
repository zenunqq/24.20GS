#pragma once

#include "Basic.hpp"

#include "ValetUI_classes.hpp"

namespace SDK
{

class UBB_ValetBoost_C final : public UFortMobileActionButtonBehavior_ValetBoost
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BB_ValetBoost_C">();
	}
	static class UBB_ValetBoost_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBB_ValetBoost_C>();
	}
};
static_assert(alignof(UBB_ValetBoost_C) == 0x000008, "Wrong alignment on UBB_ValetBoost_C");
static_assert(sizeof(UBB_ValetBoost_C) == 0x000118, "Wrong size on UBB_ValetBoost_C");

}
