#pragma once

#include "Basic.hpp"

#include "FortniteUI_classes.hpp"

namespace SDK
{

class UBB_NevadaMoveUp_C final : public UFortMobileActionButtonBehavior
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BB_NevadaMoveUp_C">();
	}
	static class UBB_NevadaMoveUp_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBB_NevadaMoveUp_C>();
	}
};
static_assert(alignof(UBB_NevadaMoveUp_C) == 0x000008, "Wrong alignment on UBB_NevadaMoveUp_C");
static_assert(sizeof(UBB_NevadaMoveUp_C) == 0x000110, "Wrong size on UBB_NevadaMoveUp_C");

}
