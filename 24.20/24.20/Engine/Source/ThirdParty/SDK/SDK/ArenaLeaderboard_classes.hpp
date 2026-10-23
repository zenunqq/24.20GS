#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteUI_classes.hpp"
#include "UMG_structs.hpp"

namespace SDK
{

class UArenaLeaderboard_C final : public UFortPersistentLeaderboardScreen
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;
	class UBackgroundBlur*                        BackgroundBlur_PosterLayer_1;
	class UCommonBorder*                          Content_NoLeaderboardEntries;
	class UEventLeaderboardEntryDetails_C*        Details_EntryDisplay;
	class UImage*                                 Image_BG;
	class UImage*                                 Image_PosterFade_2;
	class USafeZone*                              SafeZone_0;
	class USafeZone*                              SafeZone_Close;
	class UCommonTextBlock*                       Text_EventName;
	class UCommonTextBlock*                       Text_NoLeaderboardEntries;

public:
	void BP_OnDeactivated();
	void Construct();
	void ExecuteUbergraph_ArenaLeaderboard(int32 EntryPoint);
	void Initialize_Children_For_Event(const class FString& Event_Id, const class FString& Event_Window_Id);
	void Item_Double_Clicked(class UObject* Item);
	void OnColorize(const struct FFortTournamentDisplayInfo& ColorInfo);
	void OnInitialized();
	void OnLeaderboardEntrySelected(const class UFortEventLeaderboardEntryData* EntryData);
	void OnLeaderboardTabsLoaded(bool bNoLeaderboardTabs);
	void SetupForEvent(const class FString& EventId, const class FString& EventWindowId);
	void ShowMyStats(class UCommonButtonLegacy* Button);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"ArenaLeaderboard_C">();
	}
	static class UArenaLeaderboard_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UArenaLeaderboard_C>();
	}
};
static_assert(alignof(UArenaLeaderboard_C) == 0x000008, "Wrong alignment on UArenaLeaderboard_C");
static_assert(sizeof(UArenaLeaderboard_C) == 0x0004E8, "Wrong size on UArenaLeaderboard_C");
static_assert(offsetof(UArenaLeaderboard_C, UberGraphFrame) == 0x000498, "Member 'UArenaLeaderboard_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UArenaLeaderboard_C, BackgroundBlur_PosterLayer_1) == 0x0004A0, "Member 'UArenaLeaderboard_C::BackgroundBlur_PosterLayer_1' has a wrong offset!");
static_assert(offsetof(UArenaLeaderboard_C, Content_NoLeaderboardEntries) == 0x0004A8, "Member 'UArenaLeaderboard_C::Content_NoLeaderboardEntries' has a wrong offset!");
static_assert(offsetof(UArenaLeaderboard_C, Details_EntryDisplay) == 0x0004B0, "Member 'UArenaLeaderboard_C::Details_EntryDisplay' has a wrong offset!");
static_assert(offsetof(UArenaLeaderboard_C, Image_BG) == 0x0004B8, "Member 'UArenaLeaderboard_C::Image_BG' has a wrong offset!");
static_assert(offsetof(UArenaLeaderboard_C, Image_PosterFade_2) == 0x0004C0, "Member 'UArenaLeaderboard_C::Image_PosterFade_2' has a wrong offset!");
static_assert(offsetof(UArenaLeaderboard_C, SafeZone_0) == 0x0004C8, "Member 'UArenaLeaderboard_C::SafeZone_0' has a wrong offset!");
static_assert(offsetof(UArenaLeaderboard_C, SafeZone_Close) == 0x0004D0, "Member 'UArenaLeaderboard_C::SafeZone_Close' has a wrong offset!");
static_assert(offsetof(UArenaLeaderboard_C, Text_EventName) == 0x0004D8, "Member 'UArenaLeaderboard_C::Text_EventName' has a wrong offset!");
static_assert(offsetof(UArenaLeaderboard_C, Text_NoLeaderboardEntries) == 0x0004E0, "Member 'UArenaLeaderboard_C::Text_NoLeaderboardEntries' has a wrong offset!");

}
