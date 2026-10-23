#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "SocialUMG_classes.hpp"
#include "UMG_structs.hpp"

namespace SDK
{

class UUserListHeaderEntry_C final : public USocialUserListHeaderEntry
{
public:
	uint8                                         Pad_1458[0x8];
	struct FPointerToUberGraphFrame               UberGraphFrame;
	class UWidgetAnimation*                       OnExpansion;
	class UWidgetAnimation*                       OnHover;
	class UFortMobileImage*                       ExpandDirectionTick;
	class USizeBox*                               SB_EntryContent;

public:
	void BP_OnHovered();
	void BP_OnItemExpansionChanged(bool bIsExpanded);
	void BP_OnUnhovered();
	void ExecuteUbergraph_UserListHeaderEntry(int32 EntryPoint);
	void OnFocusLost(const struct FFocusEvent& InFocusEvent);
	void OnListItemObjectSet_1(class UObject* ListItemObject);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"UserListHeaderEntry_C">();
	}
	static class UUserListHeaderEntry_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UUserListHeaderEntry_C>();
	}
};
static_assert(alignof(UUserListHeaderEntry_C) == 0x000010, "Wrong alignment on UUserListHeaderEntry_C");
static_assert(sizeof(UUserListHeaderEntry_C) == 0x001490, "Wrong size on UUserListHeaderEntry_C");
static_assert(offsetof(UUserListHeaderEntry_C, UberGraphFrame) == 0x001460, "Member 'UUserListHeaderEntry_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UUserListHeaderEntry_C, OnExpansion) == 0x001468, "Member 'UUserListHeaderEntry_C::OnExpansion' has a wrong offset!");
static_assert(offsetof(UUserListHeaderEntry_C, OnHover) == 0x001470, "Member 'UUserListHeaderEntry_C::OnHover' has a wrong offset!");
static_assert(offsetof(UUserListHeaderEntry_C, ExpandDirectionTick) == 0x001478, "Member 'UUserListHeaderEntry_C::ExpandDirectionTick' has a wrong offset!");
static_assert(offsetof(UUserListHeaderEntry_C, SB_EntryContent) == 0x001480, "Member 'UUserListHeaderEntry_C::SB_EntryContent' has a wrong offset!");

}
