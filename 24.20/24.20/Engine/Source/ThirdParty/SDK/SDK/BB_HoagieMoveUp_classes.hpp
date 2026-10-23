#pragma once

#include "Basic.hpp"

#include "FortniteUI_classes.hpp"

namespace SDK
{

class UBB_HoagieMoveUp_C final : public UFortMobileActionButtonBehavior
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BB_HoagieMoveUp_C">();
	}
	static class UBB_HoagieMoveUp_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBB_HoagieMoveUp_C>();
	}
};
static_assert(alignof(UBB_HoagieMoveUp_C) == 0x000008, "Wrong alignment on UBB_HoagieMoveUp_C");
static_assert(sizeof(UBB_HoagieMoveUp_C) == 0x000110, "Wrong size on UBB_HoagieMoveUp_C");

}
