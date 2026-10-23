#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteUI_classes.hpp"
#include "FortniteGame_structs.hpp"

namespace SDK
{

class UPlayerVisited_C final : public UAthenaVisitedAreaDisplay
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;
	class UWidgetAnimation*                       BriefShow;
	class UCommonWidgetSwitcherLegacy*            CommonWidgetSwitcher_landmarkorPOI;
	class UVerticalBox*                           MainBox;
	class UCommonTextBlock*                       MainLocationText;
	class UOverlay*                               Overlay_Main;
	class UOverlay*                               Overlay_Underlay;
	class UCommonTextBlock*                       Text_LandmarkState;
	class UCommonTextBlock*                       Text_POIState;
	struct FTimerHandle                           BriefShowFallbackTimerHandle;
	class FText                                   LastLocationVisited;
	double                                        TimeLastLocationVisited;
	double                                        LocationVisitedCooldown;
	TSoftObjectPtr<class USoundCue>               Discovered_Sound_Cue;
	bool                                          Is_Discovered;
	uint8                                         Pad_4A9[0x7];
	class USoundBase*                             POI_Discover_Sound;
	class USoundBase*                             Landmark_Sound;

public:
	void BP_HandlePlaylistExtensionWidgetCreated(class UUserWidget* Widget, EUIExtensionSlot SlotType);
	void Brief_Show_Finished();
	void Construct();
	void EndOfShow();
	void ExecuteUbergraph_PlayerVisited(int32 EntryPoint);
	void K2_OnBecomeActive();
	void OnAnimBackupTimerFinished();
	void OnLoaded_1A6A75E74CBAB07F2A7CEEBF59AD1562(class UObject* Loaded);
	void OnNewVisited(const class FText& LocalizedLocationName, const TSoftObjectPtr<class USoundCue>& DiscoveredSoundCue, bool bIsNamedLocation, bool bIsDiscovered);
	void OnStompFailed();
	void Play_Brief_Show_Sound();
	void SetMobileVisuals();
	void SetPOIMusic(class USoundBase* Asset);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"PlayerVisited_C">();
	}
	static class UPlayerVisited_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPlayerVisited_C>();
	}
};
static_assert(alignof(UPlayerVisited_C) == 0x000008, "Wrong alignment on UPlayerVisited_C");
static_assert(sizeof(UPlayerVisited_C) == 0x0004C0, "Wrong size on UPlayerVisited_C");
static_assert(offsetof(UPlayerVisited_C, UberGraphFrame) == 0x000408, "Member 'UPlayerVisited_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UPlayerVisited_C, BriefShow) == 0x000410, "Member 'UPlayerVisited_C::BriefShow' has a wrong offset!");
static_assert(offsetof(UPlayerVisited_C, CommonWidgetSwitcher_landmarkorPOI) == 0x000418, "Member 'UPlayerVisited_C::CommonWidgetSwitcher_landmarkorPOI' has a wrong offset!");
static_assert(offsetof(UPlayerVisited_C, MainBox) == 0x000420, "Member 'UPlayerVisited_C::MainBox' has a wrong offset!");
static_assert(offsetof(UPlayerVisited_C, MainLocationText) == 0x000428, "Member 'UPlayerVisited_C::MainLocationText' has a wrong offset!");
static_assert(offsetof(UPlayerVisited_C, Overlay_Main) == 0x000430, "Member 'UPlayerVisited_C::Overlay_Main' has a wrong offset!");
static_assert(offsetof(UPlayerVisited_C, Overlay_Underlay) == 0x000438, "Member 'UPlayerVisited_C::Overlay_Underlay' has a wrong offset!");
static_assert(offsetof(UPlayerVisited_C, Text_LandmarkState) == 0x000440, "Member 'UPlayerVisited_C::Text_LandmarkState' has a wrong offset!");
static_assert(offsetof(UPlayerVisited_C, Text_POIState) == 0x000448, "Member 'UPlayerVisited_C::Text_POIState' has a wrong offset!");
static_assert(offsetof(UPlayerVisited_C, BriefShowFallbackTimerHandle) == 0x000450, "Member 'UPlayerVisited_C::BriefShowFallbackTimerHandle' has a wrong offset!");
static_assert(offsetof(UPlayerVisited_C, LastLocationVisited) == 0x000458, "Member 'UPlayerVisited_C::LastLocationVisited' has a wrong offset!");
static_assert(offsetof(UPlayerVisited_C, TimeLastLocationVisited) == 0x000470, "Member 'UPlayerVisited_C::TimeLastLocationVisited' has a wrong offset!");
static_assert(offsetof(UPlayerVisited_C, LocationVisitedCooldown) == 0x000478, "Member 'UPlayerVisited_C::LocationVisitedCooldown' has a wrong offset!");
static_assert(offsetof(UPlayerVisited_C, Discovered_Sound_Cue) == 0x000480, "Member 'UPlayerVisited_C::Discovered_Sound_Cue' has a wrong offset!");
static_assert(offsetof(UPlayerVisited_C, Is_Discovered) == 0x0004A8, "Member 'UPlayerVisited_C::Is_Discovered' has a wrong offset!");
static_assert(offsetof(UPlayerVisited_C, POI_Discover_Sound) == 0x0004B0, "Member 'UPlayerVisited_C::POI_Discover_Sound' has a wrong offset!");
static_assert(offsetof(UPlayerVisited_C, Landmark_Sound) == 0x0004B8, "Member 'UPlayerVisited_C::Landmark_Sound' has a wrong offset!");

}
