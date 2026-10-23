#pragma once

#include "Basic.hpp"

#include "GameplayTags_structs.hpp"
#include "Engine_structs.hpp"
#include "FortniteUI_classes.hpp"
#include "FortniteGame_structs.hpp"

namespace SDK
{

class UPlayerDiscovered_C final : public UAthenaDiscoveredAreaOverlay
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;
	class UWidgetAnimation*                       BriefShow;
	class UCommonTextBlock*                       CommonTextBlock_LandmarkName;
	class UImage*                                 Image_BulletLeft;
	class UImage*                                 Image_BulletRight;
	class UVerticalBox*                           MainBox;
	class UVerticalBox*                           MainBox_Landmark;
	class UCommonTextBlock*                       MainLocationText;
	class UCommonTextBlock*                       MainLocationText_1;
	class UOverlay*                               Overlay_Container;
	class UOverlay*                               Overlay_Underlay;
	class UWidgetSwitcher*                        WidgetSwitcher_LandmarkOrPOI;
	struct FGameplayTagContainer                  RelevantPlaylistTags;
	TSoftObjectPtr<class USoundCue>               SoundCue;

public:
	void BP_HandlePlaylistExtensionWidgetCreated(class UUserWidget* Widget, EUIExtensionSlot SlotType);
	void Brief_Show_Finished();
	void Construct();
	void EndOfShow();
	void ExecuteUbergraph_PlayerDiscovered(int32 EntryPoint);
	void K2_OnBecomeActive();
	void OnLoaded_A941D37E4EEBB55E1CF7C8B1203A946E(class UObject* Loaded);
	void OnNewDiscovery(const class FText& LocalizedLocationName, const TSoftObjectPtr<class USoundCue>& DiscoveredSoundCue, bool bIsNamedLocation, bool bIsDiscovered);
	void OnStompedByOtherWidget();
	void OnStompFailed();
	void Play_Brief_Show_Sound();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"PlayerDiscovered_C">();
	}
	static class UPlayerDiscovered_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPlayerDiscovered_C>();
	}
};
static_assert(alignof(UPlayerDiscovered_C) == 0x000008, "Wrong alignment on UPlayerDiscovered_C");
static_assert(sizeof(UPlayerDiscovered_C) == 0x0004A8, "Wrong size on UPlayerDiscovered_C");
static_assert(offsetof(UPlayerDiscovered_C, UberGraphFrame) == 0x000400, "Member 'UPlayerDiscovered_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UPlayerDiscovered_C, BriefShow) == 0x000408, "Member 'UPlayerDiscovered_C::BriefShow' has a wrong offset!");
static_assert(offsetof(UPlayerDiscovered_C, CommonTextBlock_LandmarkName) == 0x000410, "Member 'UPlayerDiscovered_C::CommonTextBlock_LandmarkName' has a wrong offset!");
static_assert(offsetof(UPlayerDiscovered_C, Image_BulletLeft) == 0x000418, "Member 'UPlayerDiscovered_C::Image_BulletLeft' has a wrong offset!");
static_assert(offsetof(UPlayerDiscovered_C, Image_BulletRight) == 0x000420, "Member 'UPlayerDiscovered_C::Image_BulletRight' has a wrong offset!");
static_assert(offsetof(UPlayerDiscovered_C, MainBox) == 0x000428, "Member 'UPlayerDiscovered_C::MainBox' has a wrong offset!");
static_assert(offsetof(UPlayerDiscovered_C, MainBox_Landmark) == 0x000430, "Member 'UPlayerDiscovered_C::MainBox_Landmark' has a wrong offset!");
static_assert(offsetof(UPlayerDiscovered_C, MainLocationText) == 0x000438, "Member 'UPlayerDiscovered_C::MainLocationText' has a wrong offset!");
static_assert(offsetof(UPlayerDiscovered_C, MainLocationText_1) == 0x000440, "Member 'UPlayerDiscovered_C::MainLocationText_1' has a wrong offset!");
static_assert(offsetof(UPlayerDiscovered_C, Overlay_Container) == 0x000448, "Member 'UPlayerDiscovered_C::Overlay_Container' has a wrong offset!");
static_assert(offsetof(UPlayerDiscovered_C, Overlay_Underlay) == 0x000450, "Member 'UPlayerDiscovered_C::Overlay_Underlay' has a wrong offset!");
static_assert(offsetof(UPlayerDiscovered_C, WidgetSwitcher_LandmarkOrPOI) == 0x000458, "Member 'UPlayerDiscovered_C::WidgetSwitcher_LandmarkOrPOI' has a wrong offset!");
static_assert(offsetof(UPlayerDiscovered_C, RelevantPlaylistTags) == 0x000460, "Member 'UPlayerDiscovered_C::RelevantPlaylistTags' has a wrong offset!");
static_assert(offsetof(UPlayerDiscovered_C, SoundCue) == 0x000480, "Member 'UPlayerDiscovered_C::SoundCue' has a wrong offset!");

}
