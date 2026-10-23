#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteUI_classes.hpp"
#include "UMG_structs.hpp"
#include "SlateCore_structs.hpp"
#include "FortniteGame_structs.hpp"

namespace SDK
{

class UStoreMain_Root_Legacy_C final : public UFortMtxStoreRootBase_Legacy
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;
	class UWidgetAnimation*                       Intro;
	class UCommonBorder*                          CommonBorder_0;
	class UCommonTextBlock*                       CommonTextBlock_3;
	class UCommonBorder*                          Container_AvailableAmount;
	class UCommonBorder*                          CurrencyNotificationBorder;
	class UCommonTextBlock*                       CurrencyNotificationText;
	class UHorizontalBox*                         HorizontalBox_0;
	class UInfoFlag_C*                            InfoFlag;
	class UGridPanel*                             NewLTMGrid;
	class UVerticalBox*                           NEWLTMOfferSection;
	class UCommonBorder*                          NewNoOffersBox;
	class UCommonBorder*                          NewPurchasingDisabledBox;
	class UImage*                                 NewSpinner;
	class UCommonWidgetSwitcherLegacy*            NewSwitcherItemsProgress;
	class UGridPanel*                             NewVBuckGrid;
	class UVerticalBox*                           NewVbuckOffers;
	class UVerticalBox*                           NewVBuckSection;
	class UScaleBox*                              OfferScaleBoxRoot;
	class UOverlay*                               Overlay_0;
	class USimpleMTXDisplay_C*                    SimpleMTXDisplay;
	class UStore_BannerMessage_C*                 StoreBannerMessage;
	class UAudioComponent*                        Ambient_Sound;
	class UWidget*                                InitiallyFocusedOffer;
	bool                                          bShowingCampaignUpsell;

public:
	void Start_Ambient_Sound(bool Condition);
	void SetupForCampaignUpsell();
	void UpdateCurrencyNotification();
	void OnStartReadingOffers();
	void SetupFirstFocusableTile();
	void OnPurchasingDisabled();
	void PlayEquippedLockerMusic();
	void OnOffersGenerated();
	void OnUpdateOtherPlatformMTXMessage(bool HasOtherPlatformCurrency, const class FText& CurrencyMessageLocText);
	void OnMainTabSelected(class FName TabName);
	void OnTransitionedBySwitcher();
	void HandleBack(bool* PassThrough);
	void NoOffersAvailable();
	void HandleAllOffersGenerated();
	void LayoutVBuckTiles();
	void GetVisibilityByChildrenPresence(class UPanelWidget* Panel, ESlateVisibility* NewParam);
	void HandleRedeem(bool* bPassThrough);
	void GenerateOfferWidget(class UFortStoreFrontOfferInfo* OfferData);
	void HandleGenerateOffer(class UFortStoreFrontOfferInfo* OfferInfo);
	void BP_OnActivated();
	void Focus();
	void ExecuteUbergraph_StoreMain_Root_Legacy(int32 EntryPoint);
	void Destruct();
	void Construct();
	void ClearOfferWidgets();

	class UWidget* BP_GetDesiredFocusTarget() const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"StoreMain_Root_Legacy_C">();
	}
	static class UStoreMain_Root_Legacy_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UStoreMain_Root_Legacy_C>();
	}
};
static_assert(alignof(UStoreMain_Root_Legacy_C) == 0x000008, "Wrong alignment on UStoreMain_Root_Legacy_C");
static_assert(sizeof(UStoreMain_Root_Legacy_C) == 0x000668, "Wrong size on UStoreMain_Root_Legacy_C");
static_assert(offsetof(UStoreMain_Root_Legacy_C, UberGraphFrame) == 0x0005A0, "Member 'UStoreMain_Root_Legacy_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UStoreMain_Root_Legacy_C, Intro) == 0x0005A8, "Member 'UStoreMain_Root_Legacy_C::Intro' has a wrong offset!");
static_assert(offsetof(UStoreMain_Root_Legacy_C, CommonBorder_0) == 0x0005B0, "Member 'UStoreMain_Root_Legacy_C::CommonBorder_0' has a wrong offset!");
static_assert(offsetof(UStoreMain_Root_Legacy_C, CommonTextBlock_3) == 0x0005B8, "Member 'UStoreMain_Root_Legacy_C::CommonTextBlock_3' has a wrong offset!");
static_assert(offsetof(UStoreMain_Root_Legacy_C, Container_AvailableAmount) == 0x0005C0, "Member 'UStoreMain_Root_Legacy_C::Container_AvailableAmount' has a wrong offset!");
static_assert(offsetof(UStoreMain_Root_Legacy_C, CurrencyNotificationBorder) == 0x0005C8, "Member 'UStoreMain_Root_Legacy_C::CurrencyNotificationBorder' has a wrong offset!");
static_assert(offsetof(UStoreMain_Root_Legacy_C, CurrencyNotificationText) == 0x0005D0, "Member 'UStoreMain_Root_Legacy_C::CurrencyNotificationText' has a wrong offset!");
static_assert(offsetof(UStoreMain_Root_Legacy_C, HorizontalBox_0) == 0x0005D8, "Member 'UStoreMain_Root_Legacy_C::HorizontalBox_0' has a wrong offset!");
static_assert(offsetof(UStoreMain_Root_Legacy_C, InfoFlag) == 0x0005E0, "Member 'UStoreMain_Root_Legacy_C::InfoFlag' has a wrong offset!");
static_assert(offsetof(UStoreMain_Root_Legacy_C, NewLTMGrid) == 0x0005E8, "Member 'UStoreMain_Root_Legacy_C::NewLTMGrid' has a wrong offset!");
static_assert(offsetof(UStoreMain_Root_Legacy_C, NEWLTMOfferSection) == 0x0005F0, "Member 'UStoreMain_Root_Legacy_C::NEWLTMOfferSection' has a wrong offset!");
static_assert(offsetof(UStoreMain_Root_Legacy_C, NewNoOffersBox) == 0x0005F8, "Member 'UStoreMain_Root_Legacy_C::NewNoOffersBox' has a wrong offset!");
static_assert(offsetof(UStoreMain_Root_Legacy_C, NewPurchasingDisabledBox) == 0x000600, "Member 'UStoreMain_Root_Legacy_C::NewPurchasingDisabledBox' has a wrong offset!");
static_assert(offsetof(UStoreMain_Root_Legacy_C, NewSpinner) == 0x000608, "Member 'UStoreMain_Root_Legacy_C::NewSpinner' has a wrong offset!");
static_assert(offsetof(UStoreMain_Root_Legacy_C, NewSwitcherItemsProgress) == 0x000610, "Member 'UStoreMain_Root_Legacy_C::NewSwitcherItemsProgress' has a wrong offset!");
static_assert(offsetof(UStoreMain_Root_Legacy_C, NewVBuckGrid) == 0x000618, "Member 'UStoreMain_Root_Legacy_C::NewVBuckGrid' has a wrong offset!");
static_assert(offsetof(UStoreMain_Root_Legacy_C, NewVbuckOffers) == 0x000620, "Member 'UStoreMain_Root_Legacy_C::NewVbuckOffers' has a wrong offset!");
static_assert(offsetof(UStoreMain_Root_Legacy_C, NewVBuckSection) == 0x000628, "Member 'UStoreMain_Root_Legacy_C::NewVBuckSection' has a wrong offset!");
static_assert(offsetof(UStoreMain_Root_Legacy_C, OfferScaleBoxRoot) == 0x000630, "Member 'UStoreMain_Root_Legacy_C::OfferScaleBoxRoot' has a wrong offset!");
static_assert(offsetof(UStoreMain_Root_Legacy_C, Overlay_0) == 0x000638, "Member 'UStoreMain_Root_Legacy_C::Overlay_0' has a wrong offset!");
static_assert(offsetof(UStoreMain_Root_Legacy_C, SimpleMTXDisplay) == 0x000640, "Member 'UStoreMain_Root_Legacy_C::SimpleMTXDisplay' has a wrong offset!");
static_assert(offsetof(UStoreMain_Root_Legacy_C, StoreBannerMessage) == 0x000648, "Member 'UStoreMain_Root_Legacy_C::StoreBannerMessage' has a wrong offset!");
static_assert(offsetof(UStoreMain_Root_Legacy_C, Ambient_Sound) == 0x000650, "Member 'UStoreMain_Root_Legacy_C::Ambient_Sound' has a wrong offset!");
static_assert(offsetof(UStoreMain_Root_Legacy_C, InitiallyFocusedOffer) == 0x000658, "Member 'UStoreMain_Root_Legacy_C::InitiallyFocusedOffer' has a wrong offset!");
static_assert(offsetof(UStoreMain_Root_Legacy_C, bShowingCampaignUpsell) == 0x000660, "Member 'UStoreMain_Root_Legacy_C::bShowingCampaignUpsell' has a wrong offset!");

}
