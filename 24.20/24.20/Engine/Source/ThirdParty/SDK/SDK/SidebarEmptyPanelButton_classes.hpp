#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteUI_classes.hpp"

namespace SDK
{

class USidebarEmptyPanelButton_C final : public USidebarListEmptyPanelButton
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;
	class UWidgetAnimation*                       Unhovered;
	class UWidgetAnimation*                       Hovered;
	class UBorder*                                EntryBorder;

public:
	void BP_OnClicked();
	void BP_OnHovered();
	void BP_OnUnhovered();
	void ExecuteUbergraph_SidebarEmptyPanelButton(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"SidebarEmptyPanelButton_C">();
	}
	static class USidebarEmptyPanelButton_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<USidebarEmptyPanelButton_C>();
	}
};
static_assert(alignof(USidebarEmptyPanelButton_C) == 0x000010, "Wrong alignment on USidebarEmptyPanelButton_C");
static_assert(sizeof(USidebarEmptyPanelButton_C) == 0x001410, "Wrong size on USidebarEmptyPanelButton_C");
static_assert(offsetof(USidebarEmptyPanelButton_C, UberGraphFrame) == 0x0013F0, "Member 'USidebarEmptyPanelButton_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(USidebarEmptyPanelButton_C, Unhovered) == 0x0013F8, "Member 'USidebarEmptyPanelButton_C::Unhovered' has a wrong offset!");
static_assert(offsetof(USidebarEmptyPanelButton_C, Hovered) == 0x001400, "Member 'USidebarEmptyPanelButton_C::Hovered' has a wrong offset!");
static_assert(offsetof(USidebarEmptyPanelButton_C, EntryBorder) == 0x001408, "Member 'USidebarEmptyPanelButton_C::EntryBorder' has a wrong offset!");

}
