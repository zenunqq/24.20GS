#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteUI_classes.hpp"

namespace SDK
{

class UItemShopScreen_C final : public UAthenaItemShopScreen
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;
	class UWidgetAnimation*                       StandardIntro;
	class UWidgetAnimation*                       SpecialOfferSkippedVideoIntro;
	class UWidgetAnimation*                       SpecialOfferVideoIntro;
	class UImage*                                 Image_DynamicBackground;
	class UImage*                                 Image_SpecialBackground;
	class UImage*                                 Image_SpecialIntroOverlay;
	class UCommonBorder*                          NoOffersBox;
	class UImage*                                 ProgressSpinner;
	class USafeZone*                              SafeZone_4;
	class USafeZone*                              SafeZone_Content;
	class UWidgetSwitcher*                        Switcher_Sections;
	class UVerticalBox*                           VerticalBox_Sections;

public:
	void BP_OnActivated();
	void BP_OnDeactivated();
	void Construct();
	void ExecuteUbergraph_ItemShopScreen(int32 EntryPoint);
	void HandleDynamicBackgroundTextureChanged(class UTexture* BackgroundTexture);
	void HideDynamicBackground();
	void OnEstablishingSections();
	void OnSectionsEstablished(bool bEmpty);
	void OnSpecialOfferVideoFinished();
	void OnSpecialOfferVideoSkipped();
	void OnSpecialOfferVideoStarted();
	void SequenceEvent__ENTRYPOINTItemShopScreen();
	void SequenceEvent__ENTRYPOINTItemShopScreen_0();
	void SequencerEvent_EnableShopNavigate(bool bIsNavigationEnabled);
	void ShowDynamicBackground();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"ItemShopScreen_C">();
	}
	static class UItemShopScreen_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UItemShopScreen_C>();
	}
};
static_assert(alignof(UItemShopScreen_C) == 0x000008, "Wrong alignment on UItemShopScreen_C");
static_assert(sizeof(UItemShopScreen_C) == 0x000718, "Wrong size on UItemShopScreen_C");
static_assert(offsetof(UItemShopScreen_C, UberGraphFrame) == 0x0006B0, "Member 'UItemShopScreen_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UItemShopScreen_C, StandardIntro) == 0x0006B8, "Member 'UItemShopScreen_C::StandardIntro' has a wrong offset!");
static_assert(offsetof(UItemShopScreen_C, SpecialOfferSkippedVideoIntro) == 0x0006C0, "Member 'UItemShopScreen_C::SpecialOfferSkippedVideoIntro' has a wrong offset!");
static_assert(offsetof(UItemShopScreen_C, SpecialOfferVideoIntro) == 0x0006C8, "Member 'UItemShopScreen_C::SpecialOfferVideoIntro' has a wrong offset!");
static_assert(offsetof(UItemShopScreen_C, Image_DynamicBackground) == 0x0006D0, "Member 'UItemShopScreen_C::Image_DynamicBackground' has a wrong offset!");
static_assert(offsetof(UItemShopScreen_C, Image_SpecialBackground) == 0x0006D8, "Member 'UItemShopScreen_C::Image_SpecialBackground' has a wrong offset!");
static_assert(offsetof(UItemShopScreen_C, Image_SpecialIntroOverlay) == 0x0006E0, "Member 'UItemShopScreen_C::Image_SpecialIntroOverlay' has a wrong offset!");
static_assert(offsetof(UItemShopScreen_C, NoOffersBox) == 0x0006E8, "Member 'UItemShopScreen_C::NoOffersBox' has a wrong offset!");
static_assert(offsetof(UItemShopScreen_C, ProgressSpinner) == 0x0006F0, "Member 'UItemShopScreen_C::ProgressSpinner' has a wrong offset!");
static_assert(offsetof(UItemShopScreen_C, SafeZone_4) == 0x0006F8, "Member 'UItemShopScreen_C::SafeZone_4' has a wrong offset!");
static_assert(offsetof(UItemShopScreen_C, SafeZone_Content) == 0x000700, "Member 'UItemShopScreen_C::SafeZone_Content' has a wrong offset!");
static_assert(offsetof(UItemShopScreen_C, Switcher_Sections) == 0x000708, "Member 'UItemShopScreen_C::Switcher_Sections' has a wrong offset!");
static_assert(offsetof(UItemShopScreen_C, VerticalBox_Sections) == 0x000710, "Member 'UItemShopScreen_C::VerticalBox_Sections' has a wrong offset!");

}
