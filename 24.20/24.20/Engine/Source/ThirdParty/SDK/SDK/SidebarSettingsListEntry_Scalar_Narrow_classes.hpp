#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteUI_classes.hpp"

namespace SDK
{

class USidebarSettingsListEntry_Scalar_Narrow_C final : public UFortSettingsListEntrySetting_Scalar
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;
	class UWidgetAnimation*                       OnHover;
	class UImage*                                 DefaultValueLayer;
	class USimpleMaterialProgressBar_C*           Progress;
	class USidebarSettingEntryBackground_C*       SidebarSettingEntryBackground;

public:
	void ExecuteUbergraph_SidebarSettingsListEntry_Scalar_Narrow(int32 EntryPoint);
	class UWidget* GetPrimaryGamepadFocusWidget();
	void OnDefaultValueChanged(float DefaultValue);
	void OnMouseEnter(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent);
	void OnMouseLeave(const struct FPointerEvent& MouseEvent);
	void OnValueChanged(float Value);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"SidebarSettingsListEntry_Scalar_Narrow_C">();
	}
	static class USidebarSettingsListEntry_Scalar_Narrow_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<USidebarSettingsListEntry_Scalar_Narrow_C>();
	}
};
static_assert(alignof(USidebarSettingsListEntry_Scalar_Narrow_C) == 0x000008, "Wrong alignment on USidebarSettingsListEntry_Scalar_Narrow_C");
static_assert(sizeof(USidebarSettingsListEntry_Scalar_Narrow_C) == 0x000318, "Wrong size on USidebarSettingsListEntry_Scalar_Narrow_C");
static_assert(offsetof(USidebarSettingsListEntry_Scalar_Narrow_C, UberGraphFrame) == 0x0002F0, "Member 'USidebarSettingsListEntry_Scalar_Narrow_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(USidebarSettingsListEntry_Scalar_Narrow_C, OnHover) == 0x0002F8, "Member 'USidebarSettingsListEntry_Scalar_Narrow_C::OnHover' has a wrong offset!");
static_assert(offsetof(USidebarSettingsListEntry_Scalar_Narrow_C, DefaultValueLayer) == 0x000300, "Member 'USidebarSettingsListEntry_Scalar_Narrow_C::DefaultValueLayer' has a wrong offset!");
static_assert(offsetof(USidebarSettingsListEntry_Scalar_Narrow_C, Progress) == 0x000308, "Member 'USidebarSettingsListEntry_Scalar_Narrow_C::Progress' has a wrong offset!");
static_assert(offsetof(USidebarSettingsListEntry_Scalar_Narrow_C, SidebarSettingEntryBackground) == 0x000310, "Member 'USidebarSettingsListEntry_Scalar_Narrow_C::SidebarSettingEntryBackground' has a wrong offset!");

}
