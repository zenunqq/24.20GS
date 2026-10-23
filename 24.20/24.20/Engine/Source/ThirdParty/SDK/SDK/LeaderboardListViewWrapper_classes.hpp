#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteUI_structs.hpp"
#include "FortniteUI_classes.hpp"
#include "UMG_structs.hpp"

namespace SDK
{

class ULeaderboardListViewWrapper_C final : public UFortLeaderboardListViewWrapper
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;
	class UEventsSimpleButton_C*                  Button_Filter;
	class UEventsSimpleButton_C*                  Button_Position;
	class UCommonBorder*                          CommonBorder_OptionsBarBG;
	class UCommonWidgetSwitcherLegacy*            CommonWidgetSwitcher_FliterOptions;
	class UEventLeaderboardPlayerPerformance_C*   EventLeaderboardPlayerPerformance;
	class UImage*                                 Image_0;
	class UVerticalBox*                           VerticalBox;
	struct FFortTournamentDisplayInfo             DisplayInfo;

public:
	void ExecuteUbergraph_LeaderboardListViewWrapper(int32 EntryPoint);
	void OnLeaderboardDisplayTypeChanged(ELeaderboardDisplayType NewDisplayType);
	void Set_Display_Info(const struct FFortTournamentDisplayInfo& DisplayInfo_0);
	void Set_Event(const class FString& EventId, const class FString& EventWindowId);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"LeaderboardListViewWrapper_C">();
	}
	static class ULeaderboardListViewWrapper_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ULeaderboardListViewWrapper_C>();
	}
};
static_assert(alignof(ULeaderboardListViewWrapper_C) == 0x000008, "Wrong alignment on ULeaderboardListViewWrapper_C");
static_assert(sizeof(ULeaderboardListViewWrapper_C) == 0x0005C8, "Wrong size on ULeaderboardListViewWrapper_C");
static_assert(offsetof(ULeaderboardListViewWrapper_C, UberGraphFrame) == 0x0003B8, "Member 'ULeaderboardListViewWrapper_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ULeaderboardListViewWrapper_C, Button_Filter) == 0x0003C0, "Member 'ULeaderboardListViewWrapper_C::Button_Filter' has a wrong offset!");
static_assert(offsetof(ULeaderboardListViewWrapper_C, Button_Position) == 0x0003C8, "Member 'ULeaderboardListViewWrapper_C::Button_Position' has a wrong offset!");
static_assert(offsetof(ULeaderboardListViewWrapper_C, CommonBorder_OptionsBarBG) == 0x0003D0, "Member 'ULeaderboardListViewWrapper_C::CommonBorder_OptionsBarBG' has a wrong offset!");
static_assert(offsetof(ULeaderboardListViewWrapper_C, CommonWidgetSwitcher_FliterOptions) == 0x0003D8, "Member 'ULeaderboardListViewWrapper_C::CommonWidgetSwitcher_FliterOptions' has a wrong offset!");
static_assert(offsetof(ULeaderboardListViewWrapper_C, EventLeaderboardPlayerPerformance) == 0x0003E0, "Member 'ULeaderboardListViewWrapper_C::EventLeaderboardPlayerPerformance' has a wrong offset!");
static_assert(offsetof(ULeaderboardListViewWrapper_C, Image_0) == 0x0003E8, "Member 'ULeaderboardListViewWrapper_C::Image_0' has a wrong offset!");
static_assert(offsetof(ULeaderboardListViewWrapper_C, VerticalBox) == 0x0003F0, "Member 'ULeaderboardListViewWrapper_C::VerticalBox' has a wrong offset!");
static_assert(offsetof(ULeaderboardListViewWrapper_C, DisplayInfo) == 0x0003F8, "Member 'ULeaderboardListViewWrapper_C::DisplayInfo' has a wrong offset!");

}
