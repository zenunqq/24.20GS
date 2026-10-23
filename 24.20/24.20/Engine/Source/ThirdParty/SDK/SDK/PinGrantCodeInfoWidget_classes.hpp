#pragma once

#include "Basic.hpp"

#include "FortniteUI_classes.hpp"

namespace SDK
{

class UPinGrantCodeInfoWidget_C final : public UFortPinGrantCodeInfoWidget
{
public:
	class UImage*                                 Image_83;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"PinGrantCodeInfoWidget_C">();
	}
	static class UPinGrantCodeInfoWidget_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPinGrantCodeInfoWidget_C>();
	}
};
static_assert(alignof(UPinGrantCodeInfoWidget_C) == 0x000008, "Wrong alignment on UPinGrantCodeInfoWidget_C");
static_assert(sizeof(UPinGrantCodeInfoWidget_C) == 0x0002F0, "Wrong size on UPinGrantCodeInfoWidget_C");
static_assert(offsetof(UPinGrantCodeInfoWidget_C, Image_83) == 0x0002E8, "Member 'UPinGrantCodeInfoWidget_C::Image_83' has a wrong offset!");

}
