#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteUI_classes.hpp"
#include "CoreUObject_structs.hpp"

namespace SDK
{

class USidebarSocialTagFilterCheckboxListEntry_C final : public UFortLFGFilterCheckboxEntryWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;
	class UWidgetAnimation*                       Unhovered;
	class UWidgetAnimation*                       Hovered;
	class UBorder*                                Border_Background;
	class USizeBox*                               SBox_Checkbox;
	class USizeBox*                               SizeBox_0;
	struct FLinearColor                           EncourageEpicFriend_IdleColor;
	struct FLinearColor                           EncourageEpicFriend_HoveredColor;

public:
	void BP_OnHovered();
	void BP_OnUnhovered();
	void Construct();
	void ExecuteUbergraph_SidebarSocialTagFilterCheckboxListEntry(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"SidebarSocialTagFilterCheckboxListEntry_C">();
	}
	static class USidebarSocialTagFilterCheckboxListEntry_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<USidebarSocialTagFilterCheckboxListEntry_C>();
	}
};
static_assert(alignof(USidebarSocialTagFilterCheckboxListEntry_C) == 0x000010, "Wrong alignment on USidebarSocialTagFilterCheckboxListEntry_C");
static_assert(sizeof(USidebarSocialTagFilterCheckboxListEntry_C) == 0x0014C0, "Wrong size on USidebarSocialTagFilterCheckboxListEntry_C");
static_assert(offsetof(USidebarSocialTagFilterCheckboxListEntry_C, UberGraphFrame) == 0x001470, "Member 'USidebarSocialTagFilterCheckboxListEntry_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(USidebarSocialTagFilterCheckboxListEntry_C, Unhovered) == 0x001478, "Member 'USidebarSocialTagFilterCheckboxListEntry_C::Unhovered' has a wrong offset!");
static_assert(offsetof(USidebarSocialTagFilterCheckboxListEntry_C, Hovered) == 0x001480, "Member 'USidebarSocialTagFilterCheckboxListEntry_C::Hovered' has a wrong offset!");
static_assert(offsetof(USidebarSocialTagFilterCheckboxListEntry_C, Border_Background) == 0x001488, "Member 'USidebarSocialTagFilterCheckboxListEntry_C::Border_Background' has a wrong offset!");
static_assert(offsetof(USidebarSocialTagFilterCheckboxListEntry_C, SBox_Checkbox) == 0x001490, "Member 'USidebarSocialTagFilterCheckboxListEntry_C::SBox_Checkbox' has a wrong offset!");
static_assert(offsetof(USidebarSocialTagFilterCheckboxListEntry_C, SizeBox_0) == 0x001498, "Member 'USidebarSocialTagFilterCheckboxListEntry_C::SizeBox_0' has a wrong offset!");
static_assert(offsetof(USidebarSocialTagFilterCheckboxListEntry_C, EncourageEpicFriend_IdleColor) == 0x0014A0, "Member 'USidebarSocialTagFilterCheckboxListEntry_C::EncourageEpicFriend_IdleColor' has a wrong offset!");
static_assert(offsetof(USidebarSocialTagFilterCheckboxListEntry_C, EncourageEpicFriend_HoveredColor) == 0x0014B0, "Member 'USidebarSocialTagFilterCheckboxListEntry_C::EncourageEpicFriend_HoveredColor' has a wrong offset!");

}
