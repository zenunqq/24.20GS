#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_classes.hpp"

namespace SDK
{

class USidebarSettingEntryBackground_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;
	class UWidgetAnimation*                       OnHover;
	class UNamedSlot*                             Content;
	TMulticastInlineDelegate<void(bool IsEnterEvent)> OnMouseEnterChanged;

public:
	void ExecuteUbergraph_SidebarSettingEntryBackground(int32 EntryPoint);
	void OnMouseEnter(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent);
	void OnMouseLeave(const struct FPointerEvent& MouseEvent);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"SidebarSettingEntryBackground_C">();
	}
	static class USidebarSettingEntryBackground_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<USidebarSettingEntryBackground_C>();
	}
};
static_assert(alignof(USidebarSettingEntryBackground_C) == 0x000008, "Wrong alignment on USidebarSettingEntryBackground_C");
static_assert(sizeof(USidebarSettingEntryBackground_C) == 0x000290, "Wrong size on USidebarSettingEntryBackground_C");
static_assert(offsetof(USidebarSettingEntryBackground_C, UberGraphFrame) == 0x000268, "Member 'USidebarSettingEntryBackground_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(USidebarSettingEntryBackground_C, OnHover) == 0x000270, "Member 'USidebarSettingEntryBackground_C::OnHover' has a wrong offset!");
static_assert(offsetof(USidebarSettingEntryBackground_C, Content) == 0x000278, "Member 'USidebarSettingEntryBackground_C::Content' has a wrong offset!");
static_assert(offsetof(USidebarSettingEntryBackground_C, OnMouseEnterChanged) == 0x000280, "Member 'USidebarSettingEntryBackground_C::OnMouseEnterChanged' has a wrong offset!");

}
