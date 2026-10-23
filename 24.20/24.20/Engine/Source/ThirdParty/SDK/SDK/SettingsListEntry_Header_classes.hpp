#pragma once

#include "Basic.hpp"

#include "FortniteUI_classes.hpp"

namespace SDK
{

class USettingsListEntry_Header_C final : public UFortSettingsListEntry_Setting
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"SettingsListEntry_Header_C">();
	}
	static class USettingsListEntry_Header_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<USettingsListEntry_Header_C>();
	}
};
static_assert(alignof(USettingsListEntry_Header_C) == 0x000008, "Wrong alignment on USettingsListEntry_Header_C");
static_assert(sizeof(USettingsListEntry_Header_C) == 0x0002D0, "Wrong size on USettingsListEntry_Header_C");

}
