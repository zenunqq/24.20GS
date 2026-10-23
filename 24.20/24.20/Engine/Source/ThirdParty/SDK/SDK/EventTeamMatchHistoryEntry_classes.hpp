#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteUI_classes.hpp"

namespace SDK
{

class UEventTeamMatchHistoryEntry_C final : public UFortEventTeamMatchHistoryEntry
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;
	class UWidgetAnimation*                       Selected;
	class UCommonBorder*                          Border_Zebra;
	class UImage*                                 Image_OnlineStatus;
	class UImage*                                 Image_SelectedBG;
	class UCommonTextBlock*                       Text_ReplayInteraction;
	TMulticastInlineDelegate<void()>              Hovered;
	TMulticastInlineDelegate<void()>              Unhovered;

public:
	void BP_OnHovered();
	void BP_OnUnhovered();
	void ExecuteUbergraph_EventTeamMatchHistoryEntry(int32 EntryPoint);
	void OnListItemObjectSet(class UObject* ListItemObject);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"EventTeamMatchHistoryEntry_C">();
	}
	static class UEventTeamMatchHistoryEntry_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UEventTeamMatchHistoryEntry_C>();
	}
};
static_assert(alignof(UEventTeamMatchHistoryEntry_C) == 0x000010, "Wrong alignment on UEventTeamMatchHistoryEntry_C");
static_assert(sizeof(UEventTeamMatchHistoryEntry_C) == 0x0014F0, "Wrong size on UEventTeamMatchHistoryEntry_C");
static_assert(offsetof(UEventTeamMatchHistoryEntry_C, UberGraphFrame) == 0x0014A0, "Member 'UEventTeamMatchHistoryEntry_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UEventTeamMatchHistoryEntry_C, Selected) == 0x0014A8, "Member 'UEventTeamMatchHistoryEntry_C::Selected' has a wrong offset!");
static_assert(offsetof(UEventTeamMatchHistoryEntry_C, Border_Zebra) == 0x0014B0, "Member 'UEventTeamMatchHistoryEntry_C::Border_Zebra' has a wrong offset!");
static_assert(offsetof(UEventTeamMatchHistoryEntry_C, Image_OnlineStatus) == 0x0014B8, "Member 'UEventTeamMatchHistoryEntry_C::Image_OnlineStatus' has a wrong offset!");
static_assert(offsetof(UEventTeamMatchHistoryEntry_C, Image_SelectedBG) == 0x0014C0, "Member 'UEventTeamMatchHistoryEntry_C::Image_SelectedBG' has a wrong offset!");
static_assert(offsetof(UEventTeamMatchHistoryEntry_C, Text_ReplayInteraction) == 0x0014C8, "Member 'UEventTeamMatchHistoryEntry_C::Text_ReplayInteraction' has a wrong offset!");
static_assert(offsetof(UEventTeamMatchHistoryEntry_C, Hovered) == 0x0014D0, "Member 'UEventTeamMatchHistoryEntry_C::Hovered' has a wrong offset!");
static_assert(offsetof(UEventTeamMatchHistoryEntry_C, Unhovered) == 0x0014E0, "Member 'UEventTeamMatchHistoryEntry_C::Unhovered' has a wrong offset!");

}
