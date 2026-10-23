#pragma once

#include "Basic.hpp"

#include "CommonUI_classes.hpp"

namespace SDK
{

class UBorder_Notification_Rectangle_C final : public UCommonBorderStyle
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Border_Notification_Rectangle_C">();
	}
	static class UBorder_Notification_Rectangle_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBorder_Notification_Rectangle_C>();
	}
};
static_assert(alignof(UBorder_Notification_Rectangle_C) == 0x000010, "Wrong alignment on UBorder_Notification_Rectangle_C");
static_assert(sizeof(UBorder_Notification_Rectangle_C) == 0x0000F0, "Wrong size on UBorder_Notification_Rectangle_C");

}
