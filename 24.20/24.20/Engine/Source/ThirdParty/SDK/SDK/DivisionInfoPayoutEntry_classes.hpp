#pragma once

#include "Basic.hpp"

#include "FortniteUI_classes.hpp"

namespace SDK
{

class UDivisionInfoPayoutEntry_C final : public UFortPayoutInfoEntry
{
public:
	class UImage*                                 HypeIcon;
	class UImage*                                 Image_PointBG;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"DivisionInfoPayoutEntry_C">();
	}
	static class UDivisionInfoPayoutEntry_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UDivisionInfoPayoutEntry_C>();
	}
};
static_assert(alignof(UDivisionInfoPayoutEntry_C) == 0x000008, "Wrong alignment on UDivisionInfoPayoutEntry_C");
static_assert(sizeof(UDivisionInfoPayoutEntry_C) == 0x0002B0, "Wrong size on UDivisionInfoPayoutEntry_C");
static_assert(offsetof(UDivisionInfoPayoutEntry_C, HypeIcon) == 0x0002A0, "Member 'UDivisionInfoPayoutEntry_C::HypeIcon' has a wrong offset!");
static_assert(offsetof(UDivisionInfoPayoutEntry_C, Image_PointBG) == 0x0002A8, "Member 'UDivisionInfoPayoutEntry_C::Image_PointBG' has a wrong offset!");

}
