#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteUI_classes.hpp"
#include "UMG_structs.hpp"

namespace SDK
{

class UEventLeaderboardEntry_C final : public UFortEventLeaderboardEntry
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;
	class UWidgetAnimation*                       Selected;
	class UCommonBorder*                          CommonBorder_IsPlayer;
	class UCommonBorder*                          CommonBorder_Zebra;
	class UCommonWidgetSwitcherLegacy*            CommonWidgetSwitcher_Rank;
	class UImage*                                 Image_OnlineStatus;
	class UImage*                                 Image_Qualified;
	class UImage*                                 Image_SelectedBG;
	class UOverlay*                               Overlay_OnlineStatus;
	class UOverlay*                               Overlay_QualifiedContent;
	class UCommonTextBlock*                       Text_Rank;
	class UCommonTextBlock*                       Text_Rank_First;
	class UCommonTextBlock*                       Text_Score;
	bool                                          isZebra;
	bool                                          isPlayer;
	uint8                                         Pad_14BA[0x6];
	TSoftObjectPtr<class UDataTable>              TEMPDatatableIdentities;
	bool                                          isMatchPoint;

public:
	void BP_OnDeselected();
	void BP_OnSelected();
	void EventColorize();
	void EventStyleEntry();
	void ExecuteUbergraph_EventLeaderboardEntry(int32 EntryPoint);
	void InitializeTeamTextEntry(class UUserWidget* TeamEntryWidget, const class FText& Usernames);
	void OnListItemObjectSet(class UObject* ListItemObject);
	void PreConstruct(bool IsDesignTime);
	void SetEntryDetails(class UFortEventLeaderboardEntryData* EntryData);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"EventLeaderboardEntry_C">();
	}
	static class UEventLeaderboardEntry_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UEventLeaderboardEntry_C>();
	}
};
static_assert(alignof(UEventLeaderboardEntry_C) == 0x000010, "Wrong alignment on UEventLeaderboardEntry_C");
static_assert(sizeof(UEventLeaderboardEntry_C) == 0x0014F0, "Wrong size on UEventLeaderboardEntry_C");
static_assert(offsetof(UEventLeaderboardEntry_C, UberGraphFrame) == 0x001450, "Member 'UEventLeaderboardEntry_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UEventLeaderboardEntry_C, Selected) == 0x001458, "Member 'UEventLeaderboardEntry_C::Selected' has a wrong offset!");
static_assert(offsetof(UEventLeaderboardEntry_C, CommonBorder_IsPlayer) == 0x001460, "Member 'UEventLeaderboardEntry_C::CommonBorder_IsPlayer' has a wrong offset!");
static_assert(offsetof(UEventLeaderboardEntry_C, CommonBorder_Zebra) == 0x001468, "Member 'UEventLeaderboardEntry_C::CommonBorder_Zebra' has a wrong offset!");
static_assert(offsetof(UEventLeaderboardEntry_C, CommonWidgetSwitcher_Rank) == 0x001470, "Member 'UEventLeaderboardEntry_C::CommonWidgetSwitcher_Rank' has a wrong offset!");
static_assert(offsetof(UEventLeaderboardEntry_C, Image_OnlineStatus) == 0x001478, "Member 'UEventLeaderboardEntry_C::Image_OnlineStatus' has a wrong offset!");
static_assert(offsetof(UEventLeaderboardEntry_C, Image_Qualified) == 0x001480, "Member 'UEventLeaderboardEntry_C::Image_Qualified' has a wrong offset!");
static_assert(offsetof(UEventLeaderboardEntry_C, Image_SelectedBG) == 0x001488, "Member 'UEventLeaderboardEntry_C::Image_SelectedBG' has a wrong offset!");
static_assert(offsetof(UEventLeaderboardEntry_C, Overlay_OnlineStatus) == 0x001490, "Member 'UEventLeaderboardEntry_C::Overlay_OnlineStatus' has a wrong offset!");
static_assert(offsetof(UEventLeaderboardEntry_C, Overlay_QualifiedContent) == 0x001498, "Member 'UEventLeaderboardEntry_C::Overlay_QualifiedContent' has a wrong offset!");
static_assert(offsetof(UEventLeaderboardEntry_C, Text_Rank) == 0x0014A0, "Member 'UEventLeaderboardEntry_C::Text_Rank' has a wrong offset!");
static_assert(offsetof(UEventLeaderboardEntry_C, Text_Rank_First) == 0x0014A8, "Member 'UEventLeaderboardEntry_C::Text_Rank_First' has a wrong offset!");
static_assert(offsetof(UEventLeaderboardEntry_C, Text_Score) == 0x0014B0, "Member 'UEventLeaderboardEntry_C::Text_Score' has a wrong offset!");
static_assert(offsetof(UEventLeaderboardEntry_C, isZebra) == 0x0014B8, "Member 'UEventLeaderboardEntry_C::isZebra' has a wrong offset!");
static_assert(offsetof(UEventLeaderboardEntry_C, isPlayer) == 0x0014B9, "Member 'UEventLeaderboardEntry_C::isPlayer' has a wrong offset!");
static_assert(offsetof(UEventLeaderboardEntry_C, TEMPDatatableIdentities) == 0x0014C0, "Member 'UEventLeaderboardEntry_C::TEMPDatatableIdentities' has a wrong offset!");
static_assert(offsetof(UEventLeaderboardEntry_C, isMatchPoint) == 0x0014E8, "Member 'UEventLeaderboardEntry_C::isMatchPoint' has a wrong offset!");

}
