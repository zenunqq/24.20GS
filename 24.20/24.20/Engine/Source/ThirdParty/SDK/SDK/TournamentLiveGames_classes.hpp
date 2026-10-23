#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteUI_classes.hpp"

namespace SDK
{

class UTournamentLiveGames_C final : public UFortTournamentLiveGames
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;
	class UWidgetAnimation*                       Intro;
	class UEventsSimpleButton_C*                  BackButton;
	class UCloseButton_C*                         CloseButton;
	class UCommonBorder*                          CommonBorder_ContainerBG;
	class UCommonBorder*                          CommonBorder_OptionsBarBG;
	class UCommonBorder*                          CommonBorder_ScoringTitleBG;
	class UVerticalBox*                           Content_LeaderboardEntries;
	class UHorizontalBox*                         Content_LoadingEntries;
	class UCommonBorder*                          Content_NoLeaderboardEntries;
	class UEventLeaderboardEventDetails_C*        EventLeaderboardEventDetails;
	class UImage*                                 Image_0;
	class UImage*                                 Image_OnlineStatus;
	class UOverlay*                               Overlay_OnlineStatus;
	class USafeZone*                              SafeZone_0;
	class UCommonWidgetSwitcherLegacy*            Switcher_LeaderboardEntries;
	class UCommonTextBlock*                       Text_NoLeaderboardEntries;
	class UCommonTextBlock*                       Text_RoundTitle;
	TMulticastInlineDelegate<void()>              CallEventLiveGamesBack;

public:
	void BndEvt__BackButton_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature(class UCommonButtonLegacy* Button);
	void BndEvt__CloseButton_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature(class UCommonButtonLegacy* Button);
	void EventColorize(const struct FFortTournamentDisplayInfo& TournamentDisplayInfo);
	void ExecuteUbergraph_TournamentLiveGames(int32 EntryPoint);
	void HandleViewLiveGames();
	void Init(const class FString& TournamentId, const class FString& EventId);
	void NotifyLoadingMoreGames(bool bIsLoading);
	void NotifyNoLiveGames();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"TournamentLiveGames_C">();
	}
	static class UTournamentLiveGames_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UTournamentLiveGames_C>();
	}
};
static_assert(alignof(UTournamentLiveGames_C) == 0x000008, "Wrong alignment on UTournamentLiveGames_C");
static_assert(sizeof(UTournamentLiveGames_C) == 0x0004F0, "Wrong size on UTournamentLiveGames_C");
static_assert(offsetof(UTournamentLiveGames_C, UberGraphFrame) == 0x000450, "Member 'UTournamentLiveGames_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UTournamentLiveGames_C, Intro) == 0x000458, "Member 'UTournamentLiveGames_C::Intro' has a wrong offset!");
static_assert(offsetof(UTournamentLiveGames_C, BackButton) == 0x000460, "Member 'UTournamentLiveGames_C::BackButton' has a wrong offset!");
static_assert(offsetof(UTournamentLiveGames_C, CloseButton) == 0x000468, "Member 'UTournamentLiveGames_C::CloseButton' has a wrong offset!");
static_assert(offsetof(UTournamentLiveGames_C, CommonBorder_ContainerBG) == 0x000470, "Member 'UTournamentLiveGames_C::CommonBorder_ContainerBG' has a wrong offset!");
static_assert(offsetof(UTournamentLiveGames_C, CommonBorder_OptionsBarBG) == 0x000478, "Member 'UTournamentLiveGames_C::CommonBorder_OptionsBarBG' has a wrong offset!");
static_assert(offsetof(UTournamentLiveGames_C, CommonBorder_ScoringTitleBG) == 0x000480, "Member 'UTournamentLiveGames_C::CommonBorder_ScoringTitleBG' has a wrong offset!");
static_assert(offsetof(UTournamentLiveGames_C, Content_LeaderboardEntries) == 0x000488, "Member 'UTournamentLiveGames_C::Content_LeaderboardEntries' has a wrong offset!");
static_assert(offsetof(UTournamentLiveGames_C, Content_LoadingEntries) == 0x000490, "Member 'UTournamentLiveGames_C::Content_LoadingEntries' has a wrong offset!");
static_assert(offsetof(UTournamentLiveGames_C, Content_NoLeaderboardEntries) == 0x000498, "Member 'UTournamentLiveGames_C::Content_NoLeaderboardEntries' has a wrong offset!");
static_assert(offsetof(UTournamentLiveGames_C, EventLeaderboardEventDetails) == 0x0004A0, "Member 'UTournamentLiveGames_C::EventLeaderboardEventDetails' has a wrong offset!");
static_assert(offsetof(UTournamentLiveGames_C, Image_0) == 0x0004A8, "Member 'UTournamentLiveGames_C::Image_0' has a wrong offset!");
static_assert(offsetof(UTournamentLiveGames_C, Image_OnlineStatus) == 0x0004B0, "Member 'UTournamentLiveGames_C::Image_OnlineStatus' has a wrong offset!");
static_assert(offsetof(UTournamentLiveGames_C, Overlay_OnlineStatus) == 0x0004B8, "Member 'UTournamentLiveGames_C::Overlay_OnlineStatus' has a wrong offset!");
static_assert(offsetof(UTournamentLiveGames_C, SafeZone_0) == 0x0004C0, "Member 'UTournamentLiveGames_C::SafeZone_0' has a wrong offset!");
static_assert(offsetof(UTournamentLiveGames_C, Switcher_LeaderboardEntries) == 0x0004C8, "Member 'UTournamentLiveGames_C::Switcher_LeaderboardEntries' has a wrong offset!");
static_assert(offsetof(UTournamentLiveGames_C, Text_NoLeaderboardEntries) == 0x0004D0, "Member 'UTournamentLiveGames_C::Text_NoLeaderboardEntries' has a wrong offset!");
static_assert(offsetof(UTournamentLiveGames_C, Text_RoundTitle) == 0x0004D8, "Member 'UTournamentLiveGames_C::Text_RoundTitle' has a wrong offset!");
static_assert(offsetof(UTournamentLiveGames_C, CallEventLiveGamesBack) == 0x0004E0, "Member 'UTournamentLiveGames_C::CallEventLiveGamesBack' has a wrong offset!");

}
