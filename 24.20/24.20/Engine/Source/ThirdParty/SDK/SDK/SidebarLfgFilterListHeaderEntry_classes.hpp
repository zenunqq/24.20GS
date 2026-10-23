#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteUI_classes.hpp"
#include "UMG_structs.hpp"

namespace SDK
{

class USidebarLfgFilterListHeaderEntry_C final : public UFortSidebarLfgFilterHeaderEntry
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;
	class UWidgetAnimation*                       OnExpansion;
	class UWidgetAnimation*                       OnHover;
	class UFortMobileImage*                       ExpandDirectionTick;
	class USizeBox*                               SB_EntryContent;

public:
	void BP_OnHovered();
	void BP_OnItemExpansionChanged(bool bIsExpanded);
	void BP_OnUnhovered();
	void ExecuteUbergraph_SidebarLfgFilterListHeaderEntry(int32 EntryPoint);
	void OnFocusLost(const struct FFocusEvent& InFocusEvent);
	void OnListItemObjectSet_1(class UObject* ListItemObject);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"SidebarLfgFilterListHeaderEntry_C">();
	}
	static class USidebarLfgFilterListHeaderEntry_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<USidebarLfgFilterListHeaderEntry_C>();
	}
};
static_assert(alignof(USidebarLfgFilterListHeaderEntry_C) == 0x000010, "Wrong alignment on USidebarLfgFilterListHeaderEntry_C");
static_assert(sizeof(USidebarLfgFilterListHeaderEntry_C) == 0x0014A0, "Wrong size on USidebarLfgFilterListHeaderEntry_C");
static_assert(offsetof(USidebarLfgFilterListHeaderEntry_C, UberGraphFrame) == 0x001470, "Member 'USidebarLfgFilterListHeaderEntry_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(USidebarLfgFilterListHeaderEntry_C, OnExpansion) == 0x001478, "Member 'USidebarLfgFilterListHeaderEntry_C::OnExpansion' has a wrong offset!");
static_assert(offsetof(USidebarLfgFilterListHeaderEntry_C, OnHover) == 0x001480, "Member 'USidebarLfgFilterListHeaderEntry_C::OnHover' has a wrong offset!");
static_assert(offsetof(USidebarLfgFilterListHeaderEntry_C, ExpandDirectionTick) == 0x001488, "Member 'USidebarLfgFilterListHeaderEntry_C::ExpandDirectionTick' has a wrong offset!");
static_assert(offsetof(USidebarLfgFilterListHeaderEntry_C, SB_EntryContent) == 0x001490, "Member 'USidebarLfgFilterListHeaderEntry_C::SB_EntryContent' has a wrong offset!");

}
