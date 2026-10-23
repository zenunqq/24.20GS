#pragma once

#include "Basic.hpp"

#include "FortniteUI_classes.hpp"

namespace SDK
{

class UFortMobileActionButtonBehavior_ValetBoost : public UFortMobileActionButtonBehavior
{
public:
	uint8                                         Pad_110[0x8];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortMobileActionButtonBehavior_ValetBoost">();
	}
	static class UFortMobileActionButtonBehavior_ValetBoost* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortMobileActionButtonBehavior_ValetBoost>();
	}
};
static_assert(alignof(UFortMobileActionButtonBehavior_ValetBoost) == 0x000008, "Wrong alignment on UFortMobileActionButtonBehavior_ValetBoost");
static_assert(sizeof(UFortMobileActionButtonBehavior_ValetBoost) == 0x000118, "Wrong size on UFortMobileActionButtonBehavior_ValetBoost");

}
