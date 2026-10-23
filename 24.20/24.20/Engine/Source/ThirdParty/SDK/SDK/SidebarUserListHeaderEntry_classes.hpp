#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "SocialUMG_classes.hpp"
#include "UMG_structs.hpp"

namespace SDK
{

class USidebarUserListHeaderEntry_C final : public USocialUserListHeaderEntry
{
public:
	uint8                                         Pad_1458[0x8];
	struct FPointerToUberGraphFrame               UberGraphFrame;
	class UWidgetAnimation*                       OnExpansion;
	class UWidgetAnimation*                       OnHover;
	class UFortMobileImage*                       ExpandDirectionTick;
	class UImage*                                 Image_Meeple;
	class USizeBox*                               SB_EntryContent;

public:
	void BP_OnHovered();
	void BP_OnItemExpansionChanged(bool bIsExpanded);
	void BP_OnUnhovered();
	void ExecuteUbergraph_SidebarUserListHeaderEntry(int32 EntryPoint);
	void OnFocusLost(const struct FFocusEvent& InFocusEvent);
	void OnListItemObjectSet_1(class UObject* ListItemObject);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"SidebarUserListHeaderEntry_C">();
	}
	static class USidebarUserListHeaderEntry_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<USidebarUserListHeaderEntry_C>();
	}
};
static_assert(alignof(USidebarUserListHeaderEntry_C) == 0x000010, "Wrong alignment on USidebarUserListHeaderEntry_C");
static_assert(sizeof(USidebarUserListHeaderEntry_C) == 0x001490, "Wrong size on USidebarUserListHeaderEntry_C");
static_assert(offsetof(USidebarUserListHeaderEntry_C, UberGraphFrame) == 0x001460, "Member 'USidebarUserListHeaderEntry_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(USidebarUserListHeaderEntry_C, OnExpansion) == 0x001468, "Member 'USidebarUserListHeaderEntry_C::OnExpansion' has a wrong offset!");
static_assert(offsetof(USidebarUserListHeaderEntry_C, OnHover) == 0x001470, "Member 'USidebarUserListHeaderEntry_C::OnHover' has a wrong offset!");
static_assert(offsetof(USidebarUserListHeaderEntry_C, ExpandDirectionTick) == 0x001478, "Member 'USidebarUserListHeaderEntry_C::ExpandDirectionTick' has a wrong offset!");
static_assert(offsetof(USidebarUserListHeaderEntry_C, Image_Meeple) == 0x001480, "Member 'USidebarUserListHeaderEntry_C::Image_Meeple' has a wrong offset!");
static_assert(offsetof(USidebarUserListHeaderEntry_C, SB_EntryContent) == 0x001488, "Member 'USidebarUserListHeaderEntry_C::SB_EntryContent' has a wrong offset!");

}
