#pragma once

#include "Basic.hpp"

#include "FortniteUI_classes.hpp"

namespace SDK
{

class ULocalUserSettingSection_C final : public UFortLocalUserSettingsSection
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"LocalUserSettingSection_C">();
	}
	static class ULocalUserSettingSection_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ULocalUserSettingSection_C>();
	}
};
static_assert(alignof(ULocalUserSettingSection_C) == 0x000008, "Wrong alignment on ULocalUserSettingSection_C");
static_assert(sizeof(ULocalUserSettingSection_C) == 0x0002E8, "Wrong size on ULocalUserSettingSection_C");

}
