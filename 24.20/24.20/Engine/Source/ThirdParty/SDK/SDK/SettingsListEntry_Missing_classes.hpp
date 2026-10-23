#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteUI_classes.hpp"

namespace SDK
{

class USettingsListEntry_Missing_C final : public UFortSettingsListEntry_Setting
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;
	class UWidgetAnimation*                       OnHover;
	class UCommonTextBlock*                       Text_SettingName_1;

public:
	void ExecuteUbergraph_SettingsListEntry_Missing(int32 EntryPoint);
	void OnMouseEnter(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent);
	void OnMouseLeave(const struct FPointerEvent& MouseEvent);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"SettingsListEntry_Missing_C">();
	}
	static class USettingsListEntry_Missing_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<USettingsListEntry_Missing_C>();
	}
};
static_assert(alignof(USettingsListEntry_Missing_C) == 0x000008, "Wrong alignment on USettingsListEntry_Missing_C");
static_assert(sizeof(USettingsListEntry_Missing_C) == 0x0002E8, "Wrong size on USettingsListEntry_Missing_C");
static_assert(offsetof(USettingsListEntry_Missing_C, UberGraphFrame) == 0x0002D0, "Member 'USettingsListEntry_Missing_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(USettingsListEntry_Missing_C, OnHover) == 0x0002D8, "Member 'USettingsListEntry_Missing_C::OnHover' has a wrong offset!");
static_assert(offsetof(USettingsListEntry_Missing_C, Text_SettingName_1) == 0x0002E0, "Member 'USettingsListEntry_Missing_C::Text_SettingName_1' has a wrong offset!");

}
