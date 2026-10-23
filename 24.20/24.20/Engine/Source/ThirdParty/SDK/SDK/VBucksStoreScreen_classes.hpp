#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteUI_classes.hpp"
#include "UMG_structs.hpp"
#include "FortniteGame_structs.hpp"

namespace SDK
{

class UVBucksStoreScreen_C final : public UFortVbucksStoreScreen
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;
	class UWidgetAnimation*                       Intro;
	class UCommonBorder*                          CurrencyNotificationBorder;
	class UCommonTextBlock*                       CurrencyNotificationText;
	class UHorizontalBox*                         HorizontalBox_0;
	class UInfoFlag_C*                            InfoFlag;
	class UNamedSlot*                             NamedSlot_ExtraContentBottom;
	class UCommonBorder*                          NewNoOffersBox;
	class UCommonBorder*                          NewPurchasingDisabledBox;
	class UImage*                                 NewSpinner;
	class UCommonWidgetSwitcherLegacy*            NewSwitcherItemsProgress;
	class UVerticalBox*                           NewVbuckOffers;
	class UVerticalBox*                           NewVBuckSection;
	class UScaleBox*                              OfferScaleBoxRoot;
	class UOverlay*                               Overlay_0;
	class UAudioComponent*                        Ambient_Sound;
	class UWidget*                                InitiallyFocusedOffer;
	bool                                          bShowingCampaignUpsell;
	bool                                          bUseMobileLayout;

public:
	void ApplyMobileLayout();
	void BP_OnActivated();
	void ExecuteUbergraph_VBucksStoreScreen(int32 EntryPoint);
	void GetVisibilityByChildrenPresence(class UPanelWidget* Panel, ESlateVisibility* NewParam);
	void HandleAllOffersGenerated();
	void HandleBack(bool* PassThrough);
	void HandleRedeem(bool* bPassThrough);
	void NoOffersAvailable();
	void OnOffersGenerated();
	void OnPurchasingDisabled();
	void OnStartReadingOffers();
	void OnTransitionedBySwitcher_1();
	void OnUpdateOtherPlatformMTXMessage(bool HasOtherPlatformCurrency, const class FText& CurrencyMessageLocText);
	void PlayEquippedLockerMusic();
	void PreConstruct(bool IsDesignTime);
	void UpdateCurrencyNotification();

	class UWidget* BP_GetDesiredFocusTarget() const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"VBucksStoreScreen_C">();
	}
	static class UVBucksStoreScreen_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UVBucksStoreScreen_C>();
	}
};
static_assert(alignof(UVBucksStoreScreen_C) == 0x000008, "Wrong alignment on UVBucksStoreScreen_C");
static_assert(sizeof(UVBucksStoreScreen_C) == 0x0004E8, "Wrong size on UVBucksStoreScreen_C");
static_assert(offsetof(UVBucksStoreScreen_C, UberGraphFrame) == 0x000458, "Member 'UVBucksStoreScreen_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UVBucksStoreScreen_C, Intro) == 0x000460, "Member 'UVBucksStoreScreen_C::Intro' has a wrong offset!");
static_assert(offsetof(UVBucksStoreScreen_C, CurrencyNotificationBorder) == 0x000468, "Member 'UVBucksStoreScreen_C::CurrencyNotificationBorder' has a wrong offset!");
static_assert(offsetof(UVBucksStoreScreen_C, CurrencyNotificationText) == 0x000470, "Member 'UVBucksStoreScreen_C::CurrencyNotificationText' has a wrong offset!");
static_assert(offsetof(UVBucksStoreScreen_C, HorizontalBox_0) == 0x000478, "Member 'UVBucksStoreScreen_C::HorizontalBox_0' has a wrong offset!");
static_assert(offsetof(UVBucksStoreScreen_C, InfoFlag) == 0x000480, "Member 'UVBucksStoreScreen_C::InfoFlag' has a wrong offset!");
static_assert(offsetof(UVBucksStoreScreen_C, NamedSlot_ExtraContentBottom) == 0x000488, "Member 'UVBucksStoreScreen_C::NamedSlot_ExtraContentBottom' has a wrong offset!");
static_assert(offsetof(UVBucksStoreScreen_C, NewNoOffersBox) == 0x000490, "Member 'UVBucksStoreScreen_C::NewNoOffersBox' has a wrong offset!");
static_assert(offsetof(UVBucksStoreScreen_C, NewPurchasingDisabledBox) == 0x000498, "Member 'UVBucksStoreScreen_C::NewPurchasingDisabledBox' has a wrong offset!");
static_assert(offsetof(UVBucksStoreScreen_C, NewSpinner) == 0x0004A0, "Member 'UVBucksStoreScreen_C::NewSpinner' has a wrong offset!");
static_assert(offsetof(UVBucksStoreScreen_C, NewSwitcherItemsProgress) == 0x0004A8, "Member 'UVBucksStoreScreen_C::NewSwitcherItemsProgress' has a wrong offset!");
static_assert(offsetof(UVBucksStoreScreen_C, NewVbuckOffers) == 0x0004B0, "Member 'UVBucksStoreScreen_C::NewVbuckOffers' has a wrong offset!");
static_assert(offsetof(UVBucksStoreScreen_C, NewVBuckSection) == 0x0004B8, "Member 'UVBucksStoreScreen_C::NewVBuckSection' has a wrong offset!");
static_assert(offsetof(UVBucksStoreScreen_C, OfferScaleBoxRoot) == 0x0004C0, "Member 'UVBucksStoreScreen_C::OfferScaleBoxRoot' has a wrong offset!");
static_assert(offsetof(UVBucksStoreScreen_C, Overlay_0) == 0x0004C8, "Member 'UVBucksStoreScreen_C::Overlay_0' has a wrong offset!");
static_assert(offsetof(UVBucksStoreScreen_C, Ambient_Sound) == 0x0004D0, "Member 'UVBucksStoreScreen_C::Ambient_Sound' has a wrong offset!");
static_assert(offsetof(UVBucksStoreScreen_C, InitiallyFocusedOffer) == 0x0004D8, "Member 'UVBucksStoreScreen_C::InitiallyFocusedOffer' has a wrong offset!");
static_assert(offsetof(UVBucksStoreScreen_C, bShowingCampaignUpsell) == 0x0004E0, "Member 'UVBucksStoreScreen_C::bShowingCampaignUpsell' has a wrong offset!");
static_assert(offsetof(UVBucksStoreScreen_C, bUseMobileLayout) == 0x0004E1, "Member 'UVBucksStoreScreen_C::bUseMobileLayout' has a wrong offset!");

}
