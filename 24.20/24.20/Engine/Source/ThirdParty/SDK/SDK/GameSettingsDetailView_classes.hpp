#pragma once

#include "Basic.hpp"

#include "FortniteUI_classes.hpp"

namespace SDK
{

class UGameSettingsDetailView_C final : public UFortSettingDetailView
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GameSettingsDetailView_C">();
	}
	static class UGameSettingsDetailView_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGameSettingsDetailView_C>();
	}
};
static_assert(alignof(UGameSettingsDetailView_C) == 0x000008, "Wrong alignment on UGameSettingsDetailView_C");
static_assert(sizeof(UGameSettingsDetailView_C) == 0x000340, "Wrong size on UGameSettingsDetailView_C");

}
