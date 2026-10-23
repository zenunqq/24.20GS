#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteUI_classes.hpp"

namespace SDK
{

class USidebarSettingsListEntry_Discrete_Narrow_C final : public UFortSettingsListEntrySetting_Discrete
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;
	class UWidgetAnimation*                       OnHover;
	class UIconTextButton_C*                      Button_FirstOption;
	class UIconTextButton_C*                      Button_SecondOption;
	class UWidgetSwitcher*                        OptionsSets;
	class UHorizontalBox*                         Several_Options;
	class USidebarSettingEntryBackground_C*       SidebarSettingEntryBackground;

public:
	void ExecuteUbergraph_SidebarSettingsListEntry_Discrete_Narrow(int32 EntryPoint);
	class UWidget* GetPrimaryGamepadFocusWidget();
	void OnEditableStateChanged(const bool bIsEditable);
	void OnMouseEnter(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent);
	void OnMouseLeave(const struct FPointerEvent& MouseEvent);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"SidebarSettingsListEntry_Discrete_Narrow_C">();
	}
	static class USidebarSettingsListEntry_Discrete_Narrow_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<USidebarSettingsListEntry_Discrete_Narrow_C>();
	}
};
static_assert(alignof(USidebarSettingsListEntry_Discrete_Narrow_C) == 0x000008, "Wrong alignment on USidebarSettingsListEntry_Discrete_Narrow_C");
static_assert(sizeof(USidebarSettingsListEntry_Discrete_Narrow_C) == 0x000338, "Wrong size on USidebarSettingsListEntry_Discrete_Narrow_C");
static_assert(offsetof(USidebarSettingsListEntry_Discrete_Narrow_C, UberGraphFrame) == 0x000300, "Member 'USidebarSettingsListEntry_Discrete_Narrow_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(USidebarSettingsListEntry_Discrete_Narrow_C, OnHover) == 0x000308, "Member 'USidebarSettingsListEntry_Discrete_Narrow_C::OnHover' has a wrong offset!");
static_assert(offsetof(USidebarSettingsListEntry_Discrete_Narrow_C, Button_FirstOption) == 0x000310, "Member 'USidebarSettingsListEntry_Discrete_Narrow_C::Button_FirstOption' has a wrong offset!");
static_assert(offsetof(USidebarSettingsListEntry_Discrete_Narrow_C, Button_SecondOption) == 0x000318, "Member 'USidebarSettingsListEntry_Discrete_Narrow_C::Button_SecondOption' has a wrong offset!");
static_assert(offsetof(USidebarSettingsListEntry_Discrete_Narrow_C, OptionsSets) == 0x000320, "Member 'USidebarSettingsListEntry_Discrete_Narrow_C::OptionsSets' has a wrong offset!");
static_assert(offsetof(USidebarSettingsListEntry_Discrete_Narrow_C, Several_Options) == 0x000328, "Member 'USidebarSettingsListEntry_Discrete_Narrow_C::Several_Options' has a wrong offset!");
static_assert(offsetof(USidebarSettingsListEntry_Discrete_Narrow_C, SidebarSettingEntryBackground) == 0x000330, "Member 'USidebarSettingsListEntry_Discrete_Narrow_C::SidebarSettingEntryBackground' has a wrong offset!");

}
