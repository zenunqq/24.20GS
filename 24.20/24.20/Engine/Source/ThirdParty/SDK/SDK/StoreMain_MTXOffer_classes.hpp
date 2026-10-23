#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteUI_structs.hpp"
#include "FortniteUI_classes.hpp"
#include "UMG_structs.hpp"

namespace SDK
{

class UStoreMain_MTXOffer_C final : public UFortRealMoneyOffer
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;
	class UWidgetAnimation*                       Hover_Linear;
	class UWidgetAnimation*                       UnhoverNew;
	class UWidgetAnimation*                       HoverNew;
	class UWidgetAnimation*                       Intro;
	class UWidgetAnimation*                       OnHover;
	class UMTXOffer_SpecialBanner_C*              AthenaDirectAcquisitionOffer_SpecialBanner;
	class UImage*                                 BaseColor;
	class UBorder*                                BonusTag;
	class UCommonTextBlock*                       BonusText;
	class UBorder*                                Border_Footer;
	class UBorder*                                BorderAll;
	class UCommonTextBlock*                       BundleTotalQuantity;
	class UCommonTextBlock*                       BundleVBucksText;
	class UCommonTextBlock*                       CurrencyTotalQuantity;
	class UHorizontalBox*                         HBox_Price;
	class UImage*                                 HoverBorder;
	class UImage*                                 KeyArt;
	class UImage*                                 OverlayGradient;
	class UOverlay*                               OverlaySalePrice;
	class UImage*                                 PlayStationStoreLogo;
	class UCommonTextBlock*                       Plus;
	class UVerticalBox*                           RMTBundle;
	class UVerticalBox*                           RMTCurrency;
	class UWidgetSwitcher*                        RMTTypeSwitcher;
	class UHorizontalBox*                         RMTVBucksHB;
	class UScaleBox*                              ScaleBoxKeyArt;
	class UCommonWidgetSwitcherLegacy*            Switcher_Price;
	class UCommonTextBlock*                       TextOfferDisplayPrice;
	class UCommonTextBlock*                       TextOfferName;
	class UCommonTextBlock*                       TextOfferPurchaseUnvailable;
	class UCommonTextBlock*                       TextOriginalPrice;
	class USizeBox*                               TileSize;
	class UCommonTextBlock*                       VBucksText;
	TMulticastInlineDelegate<void()>              AboutToShowDetails;
	bool                                          bCanSetPrice;
	uint8                                         Pad_1591[0x7];
	class UCatalogMessaging*                      CatalogMessaging;

public:
	void TriggerReset();
	void TriggerIntro();
	void SetTileSize(EFortMtxOfferDisplaySize DisplaySize);
	void SetTextOutlineColor(class UTextBlock* Text, const struct FFortMtxGradient& Gradient);
	void PreConstruct(bool IsDesignTime);
	void OnOfferTileBrushLoaded(const struct FSlateBrush& OfferBrush);
	void OnUpdateStorePrice(const class FText& InStorePrice);
	void OnOfferSet();
	void OnStoreSelectionOfferSet();
	void BP_OnUnhovered();
	void InitOffer();
	void BP_OnHovered();
	void InitialReset();
	void GetBonusText(class UFortStoreFrontOfferInfo* OfferInfo, class FText* BonusText_0);
	void ExecuteUbergraph_StoreMain_MTXOffer(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"StoreMain_MTXOffer_C">();
	}
	static class UStoreMain_MTXOffer_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UStoreMain_MTXOffer_C>();
	}
};
static_assert(alignof(UStoreMain_MTXOffer_C) == 0x000010, "Wrong alignment on UStoreMain_MTXOffer_C");
static_assert(sizeof(UStoreMain_MTXOffer_C) == 0x0015A0, "Wrong size on UStoreMain_MTXOffer_C");
static_assert(offsetof(UStoreMain_MTXOffer_C, UberGraphFrame) == 0x001470, "Member 'UStoreMain_MTXOffer_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UStoreMain_MTXOffer_C, Hover_Linear) == 0x001478, "Member 'UStoreMain_MTXOffer_C::Hover_Linear' has a wrong offset!");
static_assert(offsetof(UStoreMain_MTXOffer_C, UnhoverNew) == 0x001480, "Member 'UStoreMain_MTXOffer_C::UnhoverNew' has a wrong offset!");
static_assert(offsetof(UStoreMain_MTXOffer_C, HoverNew) == 0x001488, "Member 'UStoreMain_MTXOffer_C::HoverNew' has a wrong offset!");
static_assert(offsetof(UStoreMain_MTXOffer_C, Intro) == 0x001490, "Member 'UStoreMain_MTXOffer_C::Intro' has a wrong offset!");
static_assert(offsetof(UStoreMain_MTXOffer_C, OnHover) == 0x001498, "Member 'UStoreMain_MTXOffer_C::OnHover' has a wrong offset!");
static_assert(offsetof(UStoreMain_MTXOffer_C, AthenaDirectAcquisitionOffer_SpecialBanner) == 0x0014A0, "Member 'UStoreMain_MTXOffer_C::AthenaDirectAcquisitionOffer_SpecialBanner' has a wrong offset!");
static_assert(offsetof(UStoreMain_MTXOffer_C, BaseColor) == 0x0014A8, "Member 'UStoreMain_MTXOffer_C::BaseColor' has a wrong offset!");
static_assert(offsetof(UStoreMain_MTXOffer_C, BonusTag) == 0x0014B0, "Member 'UStoreMain_MTXOffer_C::BonusTag' has a wrong offset!");
static_assert(offsetof(UStoreMain_MTXOffer_C, BonusText) == 0x0014B8, "Member 'UStoreMain_MTXOffer_C::BonusText' has a wrong offset!");
static_assert(offsetof(UStoreMain_MTXOffer_C, Border_Footer) == 0x0014C0, "Member 'UStoreMain_MTXOffer_C::Border_Footer' has a wrong offset!");
static_assert(offsetof(UStoreMain_MTXOffer_C, BorderAll) == 0x0014C8, "Member 'UStoreMain_MTXOffer_C::BorderAll' has a wrong offset!");
static_assert(offsetof(UStoreMain_MTXOffer_C, BundleTotalQuantity) == 0x0014D0, "Member 'UStoreMain_MTXOffer_C::BundleTotalQuantity' has a wrong offset!");
static_assert(offsetof(UStoreMain_MTXOffer_C, BundleVBucksText) == 0x0014D8, "Member 'UStoreMain_MTXOffer_C::BundleVBucksText' has a wrong offset!");
static_assert(offsetof(UStoreMain_MTXOffer_C, CurrencyTotalQuantity) == 0x0014E0, "Member 'UStoreMain_MTXOffer_C::CurrencyTotalQuantity' has a wrong offset!");
static_assert(offsetof(UStoreMain_MTXOffer_C, HBox_Price) == 0x0014E8, "Member 'UStoreMain_MTXOffer_C::HBox_Price' has a wrong offset!");
static_assert(offsetof(UStoreMain_MTXOffer_C, HoverBorder) == 0x0014F0, "Member 'UStoreMain_MTXOffer_C::HoverBorder' has a wrong offset!");
static_assert(offsetof(UStoreMain_MTXOffer_C, KeyArt) == 0x0014F8, "Member 'UStoreMain_MTXOffer_C::KeyArt' has a wrong offset!");
static_assert(offsetof(UStoreMain_MTXOffer_C, OverlayGradient) == 0x001500, "Member 'UStoreMain_MTXOffer_C::OverlayGradient' has a wrong offset!");
static_assert(offsetof(UStoreMain_MTXOffer_C, OverlaySalePrice) == 0x001508, "Member 'UStoreMain_MTXOffer_C::OverlaySalePrice' has a wrong offset!");
static_assert(offsetof(UStoreMain_MTXOffer_C, PlayStationStoreLogo) == 0x001510, "Member 'UStoreMain_MTXOffer_C::PlayStationStoreLogo' has a wrong offset!");
static_assert(offsetof(UStoreMain_MTXOffer_C, Plus) == 0x001518, "Member 'UStoreMain_MTXOffer_C::Plus' has a wrong offset!");
static_assert(offsetof(UStoreMain_MTXOffer_C, RMTBundle) == 0x001520, "Member 'UStoreMain_MTXOffer_C::RMTBundle' has a wrong offset!");
static_assert(offsetof(UStoreMain_MTXOffer_C, RMTCurrency) == 0x001528, "Member 'UStoreMain_MTXOffer_C::RMTCurrency' has a wrong offset!");
static_assert(offsetof(UStoreMain_MTXOffer_C, RMTTypeSwitcher) == 0x001530, "Member 'UStoreMain_MTXOffer_C::RMTTypeSwitcher' has a wrong offset!");
static_assert(offsetof(UStoreMain_MTXOffer_C, RMTVBucksHB) == 0x001538, "Member 'UStoreMain_MTXOffer_C::RMTVBucksHB' has a wrong offset!");
static_assert(offsetof(UStoreMain_MTXOffer_C, ScaleBoxKeyArt) == 0x001540, "Member 'UStoreMain_MTXOffer_C::ScaleBoxKeyArt' has a wrong offset!");
static_assert(offsetof(UStoreMain_MTXOffer_C, Switcher_Price) == 0x001548, "Member 'UStoreMain_MTXOffer_C::Switcher_Price' has a wrong offset!");
static_assert(offsetof(UStoreMain_MTXOffer_C, TextOfferDisplayPrice) == 0x001550, "Member 'UStoreMain_MTXOffer_C::TextOfferDisplayPrice' has a wrong offset!");
static_assert(offsetof(UStoreMain_MTXOffer_C, TextOfferName) == 0x001558, "Member 'UStoreMain_MTXOffer_C::TextOfferName' has a wrong offset!");
static_assert(offsetof(UStoreMain_MTXOffer_C, TextOfferPurchaseUnvailable) == 0x001560, "Member 'UStoreMain_MTXOffer_C::TextOfferPurchaseUnvailable' has a wrong offset!");
static_assert(offsetof(UStoreMain_MTXOffer_C, TextOriginalPrice) == 0x001568, "Member 'UStoreMain_MTXOffer_C::TextOriginalPrice' has a wrong offset!");
static_assert(offsetof(UStoreMain_MTXOffer_C, TileSize) == 0x001570, "Member 'UStoreMain_MTXOffer_C::TileSize' has a wrong offset!");
static_assert(offsetof(UStoreMain_MTXOffer_C, VBucksText) == 0x001578, "Member 'UStoreMain_MTXOffer_C::VBucksText' has a wrong offset!");
static_assert(offsetof(UStoreMain_MTXOffer_C, AboutToShowDetails) == 0x001580, "Member 'UStoreMain_MTXOffer_C::AboutToShowDetails' has a wrong offset!");
static_assert(offsetof(UStoreMain_MTXOffer_C, bCanSetPrice) == 0x001590, "Member 'UStoreMain_MTXOffer_C::bCanSetPrice' has a wrong offset!");
static_assert(offsetof(UStoreMain_MTXOffer_C, CatalogMessaging) == 0x001598, "Member 'UStoreMain_MTXOffer_C::CatalogMessaging' has a wrong offset!");

}
