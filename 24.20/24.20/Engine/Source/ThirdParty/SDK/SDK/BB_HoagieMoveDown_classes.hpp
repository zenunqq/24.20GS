#pragma once

#include "Basic.hpp"

#include "FortniteUI_classes.hpp"

namespace SDK
{

class UBB_HoagieMoveDown_C final : public UFortMobileActionButtonBehavior
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BB_HoagieMoveDown_C">();
	}
	static class UBB_HoagieMoveDown_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBB_HoagieMoveDown_C>();
	}
};
static_assert(alignof(UBB_HoagieMoveDown_C) == 0x000008, "Wrong alignment on UBB_HoagieMoveDown_C");
static_assert(sizeof(UBB_HoagieMoveDown_C) == 0x000110, "Wrong size on UBB_HoagieMoveDown_C");

}
