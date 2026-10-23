#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteUI_classes.hpp"
#include "CoreUObject_structs.hpp"

namespace SDK
{

class USidebarLFGToggleListEntry_C final : public USidebarLFGToggleListEntryWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;
	class UWidgetAnimation*                       Unhovered;
	class UWidgetAnimation*                       Hovered;
	class UBorder*                                Border_Background;
	class UTextToggle_C*                          SidebarSocialTagsLFPToggle;
	class USizeBox*                               SizeBox_0;
	struct FLinearColor                           EncourageEpicFriend_IdleColor;
	struct FLinearColor                           EncourageEpicFriend_HoveredColor;

public:
	void BP_OnHovered();
	void BP_OnUnhovered();
	void ExecuteUbergraph_SidebarLFGToggleListEntry(int32 EntryPoint);
	void OnInitialized();
	void OnLfgSettingChanged(const bool bIsLfgEnabled);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"SidebarLFGToggleListEntry_C">();
	}
	static class USidebarLFGToggleListEntry_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<USidebarLFGToggleListEntry_C>();
	}
};
static_assert(alignof(USidebarLFGToggleListEntry_C) == 0x000010, "Wrong alignment on USidebarLFGToggleListEntry_C");
static_assert(sizeof(USidebarLFGToggleListEntry_C) == 0x0014B0, "Wrong size on USidebarLFGToggleListEntry_C");
static_assert(offsetof(USidebarLFGToggleListEntry_C, UberGraphFrame) == 0x001460, "Member 'USidebarLFGToggleListEntry_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(USidebarLFGToggleListEntry_C, Unhovered) == 0x001468, "Member 'USidebarLFGToggleListEntry_C::Unhovered' has a wrong offset!");
static_assert(offsetof(USidebarLFGToggleListEntry_C, Hovered) == 0x001470, "Member 'USidebarLFGToggleListEntry_C::Hovered' has a wrong offset!");
static_assert(offsetof(USidebarLFGToggleListEntry_C, Border_Background) == 0x001478, "Member 'USidebarLFGToggleListEntry_C::Border_Background' has a wrong offset!");
static_assert(offsetof(USidebarLFGToggleListEntry_C, SidebarSocialTagsLFPToggle) == 0x001480, "Member 'USidebarLFGToggleListEntry_C::SidebarSocialTagsLFPToggle' has a wrong offset!");
static_assert(offsetof(USidebarLFGToggleListEntry_C, SizeBox_0) == 0x001488, "Member 'USidebarLFGToggleListEntry_C::SizeBox_0' has a wrong offset!");
static_assert(offsetof(USidebarLFGToggleListEntry_C, EncourageEpicFriend_IdleColor) == 0x001490, "Member 'USidebarLFGToggleListEntry_C::EncourageEpicFriend_IdleColor' has a wrong offset!");
static_assert(offsetof(USidebarLFGToggleListEntry_C, EncourageEpicFriend_HoveredColor) == 0x0014A0, "Member 'USidebarLFGToggleListEntry_C::EncourageEpicFriend_HoveredColor' has a wrong offset!");

}
