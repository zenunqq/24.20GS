#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteUI_classes.hpp"

namespace SDK
{

class USettingsListEntry_SubCollection_C final : public UFortSettingsListEntrySetting_Navigation
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;
	class UWidgetAnimation*                       OnHover;

public:
	void ExecuteUbergraph_SettingsListEntry_SubCollection(int32 EntryPoint);
	class UWidget* GetPrimaryGamepadFocusWidget();
	void OnMouseEnter(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent);
	void OnMouseLeave(const struct FPointerEvent& MouseEvent);
	void OnSettingAssigned(const class FText& ActionText);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"SettingsListEntry_SubCollection_C">();
	}
	static class USettingsListEntry_SubCollection_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<USettingsListEntry_SubCollection_C>();
	}
};
static_assert(alignof(USettingsListEntry_SubCollection_C) == 0x000008, "Wrong alignment on USettingsListEntry_SubCollection_C");
static_assert(sizeof(USettingsListEntry_SubCollection_C) == 0x0002F0, "Wrong size on USettingsListEntry_SubCollection_C");
static_assert(offsetof(USettingsListEntry_SubCollection_C, UberGraphFrame) == 0x0002E0, "Member 'USettingsListEntry_SubCollection_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(USettingsListEntry_SubCollection_C, OnHover) == 0x0002E8, "Member 'USettingsListEntry_SubCollection_C::OnHover' has a wrong offset!");

}
