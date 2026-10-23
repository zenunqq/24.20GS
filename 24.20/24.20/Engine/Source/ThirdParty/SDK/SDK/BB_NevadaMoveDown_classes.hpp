#pragma once

#include "Basic.hpp"

#include "FortniteUI_classes.hpp"

namespace SDK
{

class UBB_NevadaMoveDown_C final : public UFortMobileActionButtonBehavior
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BB_NevadaMoveDown_C">();
	}
	static class UBB_NevadaMoveDown_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBB_NevadaMoveDown_C>();
	}
};
static_assert(alignof(UBB_NevadaMoveDown_C) == 0x000008, "Wrong alignment on UBB_NevadaMoveDown_C");
static_assert(sizeof(UBB_NevadaMoveDown_C) == 0x000110, "Wrong size on UBB_NevadaMoveDown_C");

}
