#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteUI_structs.hpp"
#include "FortniteUI_classes.hpp"
#include "UMG_structs.hpp"

namespace SDK
{

class UEventLeaderboardScreen_C final : public UFortEventLeaderboardScreen
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;
	class UEventsSimpleButton_C*                  Button_Back;
	class UCloseButton_C*                         CloseButton;
	class UEventLeaderboardEntryDetails_C*        EntryDetails;
	class UEventLeaderboardEventDetails_C*        EventLeaderboardEventDetails;
	class UHorizontalBox*                         HorizontalBox_Tab;
	class UOverlay*                               Overlay_EntryDetailsVisibility;
	class USafeZone*                              SafeZone_0;
	class UFortEventLeaderboardEntryData*         DebugLeaderboardEntry1;
	class UFortEventLeaderboardEntryData*         DebugLeaderboardEntry2;
	class UFortEventLeaderboardEntryData*         DebugLeaderboardEntry3;
	class UFortEventLeaderboardEntryData*         DebugLeaderboardEntry4;
	TArray<class UFortEventLeaderboardEntryData*> DebugLeaderboardEntries;
	TMulticastInlineDelegate<void()>              EventCloseButton;
	TMulticastInlineDelegate<void()>              EventViewLiveGames;
	struct FFortTournamentDisplayInfo             CurrentDisplayInfo;

public:
	void BndEvt__Button_Back2_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature(class UCommonButtonLegacy* Button);
	void BndEvt__CloseButton_K2Node_ComponentBoundEvent_4_CommonButtonClicked__DelegateSignature(class UCommonButtonLegacy* Button);
	void BndEvt__LiveGames_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature(class UCommonButtonLegacy* Button);
	void Construct();
	void Event_Leaderboard_Screen_On_Activated();
	void EventColorize(const struct FFortTournamentDisplayInfo& TournamentDisplayInfo);
	void EventIntro();
	void ExecuteUbergraph_EventLeaderboardScreen(int32 EntryPoint);
	void Init(const class FString& EventWindowId, const class FString& TournamentSeriesId);
	void InitializeTabButton(class UCommonButtonLegacy* TabButton, const class FText& TabText);
	void Item_Double_Clicked(class UObject* Item);
	void OnDetailsPanelUpdate(bool bShowDetailsPanel);
	void OnLeaderboardDisplayTypeChanged(ELeaderboardDisplayType NewDisplayType);
	void OnLeaderboardEntrySelected(const class UFortEventLeaderboardEntryData* EntryData);
	void OnTabVisibilityChange(bool bIsVisible);
	void ShowMyStats(class UCommonButtonLegacy* Button);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"EventLeaderboardScreen_C">();
	}
	static class UEventLeaderboardScreen_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UEventLeaderboardScreen_C>();
	}
};
static_assert(alignof(UEventLeaderboardScreen_C) == 0x000008, "Wrong alignment on UEventLeaderboardScreen_C");
static_assert(sizeof(UEventLeaderboardScreen_C) == 0x000728, "Wrong size on UEventLeaderboardScreen_C");
static_assert(offsetof(UEventLeaderboardScreen_C, UberGraphFrame) == 0x0004C8, "Member 'UEventLeaderboardScreen_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UEventLeaderboardScreen_C, Button_Back) == 0x0004D0, "Member 'UEventLeaderboardScreen_C::Button_Back' has a wrong offset!");
static_assert(offsetof(UEventLeaderboardScreen_C, CloseButton) == 0x0004D8, "Member 'UEventLeaderboardScreen_C::CloseButton' has a wrong offset!");
static_assert(offsetof(UEventLeaderboardScreen_C, EntryDetails) == 0x0004E0, "Member 'UEventLeaderboardScreen_C::EntryDetails' has a wrong offset!");
static_assert(offsetof(UEventLeaderboardScreen_C, EventLeaderboardEventDetails) == 0x0004E8, "Member 'UEventLeaderboardScreen_C::EventLeaderboardEventDetails' has a wrong offset!");
static_assert(offsetof(UEventLeaderboardScreen_C, HorizontalBox_Tab) == 0x0004F0, "Member 'UEventLeaderboardScreen_C::HorizontalBox_Tab' has a wrong offset!");
static_assert(offsetof(UEventLeaderboardScreen_C, Overlay_EntryDetailsVisibility) == 0x0004F8, "Member 'UEventLeaderboardScreen_C::Overlay_EntryDetailsVisibility' has a wrong offset!");
static_assert(offsetof(UEventLeaderboardScreen_C, SafeZone_0) == 0x000500, "Member 'UEventLeaderboardScreen_C::SafeZone_0' has a wrong offset!");
static_assert(offsetof(UEventLeaderboardScreen_C, DebugLeaderboardEntry1) == 0x000508, "Member 'UEventLeaderboardScreen_C::DebugLeaderboardEntry1' has a wrong offset!");
static_assert(offsetof(UEventLeaderboardScreen_C, DebugLeaderboardEntry2) == 0x000510, "Member 'UEventLeaderboardScreen_C::DebugLeaderboardEntry2' has a wrong offset!");
static_assert(offsetof(UEventLeaderboardScreen_C, DebugLeaderboardEntry3) == 0x000518, "Member 'UEventLeaderboardScreen_C::DebugLeaderboardEntry3' has a wrong offset!");
static_assert(offsetof(UEventLeaderboardScreen_C, DebugLeaderboardEntry4) == 0x000520, "Member 'UEventLeaderboardScreen_C::DebugLeaderboardEntry4' has a wrong offset!");
static_assert(offsetof(UEventLeaderboardScreen_C, DebugLeaderboardEntries) == 0x000528, "Member 'UEventLeaderboardScreen_C::DebugLeaderboardEntries' has a wrong offset!");
static_assert(offsetof(UEventLeaderboardScreen_C, EventCloseButton) == 0x000538, "Member 'UEventLeaderboardScreen_C::EventCloseButton' has a wrong offset!");
static_assert(offsetof(UEventLeaderboardScreen_C, EventViewLiveGames) == 0x000548, "Member 'UEventLeaderboardScreen_C::EventViewLiveGames' has a wrong offset!");
static_assert(offsetof(UEventLeaderboardScreen_C, CurrentDisplayInfo) == 0x000558, "Member 'UEventLeaderboardScreen_C::CurrentDisplayInfo' has a wrong offset!");

}
