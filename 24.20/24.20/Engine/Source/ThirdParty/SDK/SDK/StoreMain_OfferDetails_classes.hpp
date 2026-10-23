#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteUI_structs.hpp"
#include "FortniteUI_classes.hpp"
#include "UMG_structs.hpp"

namespace SDK
{

class UStoreMain_OfferDetails_C final : public UFortRealMoneyOfferDetails
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;
	class UImage*                                 BaseColor;
	class UImage*                                 BaseColorDetails;
	class UHorizontalBox*                         BonusMTXArea;
	class UCommonBorder*                          BorderDisclaimer;
	class UCommonTextBlock*                       CommonText_BaseQuantity;
	class UCommonTextBlock*                       CommonText_BonusQuantity;
	class UImage*                                 Highlight;
	class UFortLazyImage*                         Image_CurrencyIcon;
	class UCommonLazyImage*                       KeyArt;
	class USizeBox*                               MTXArea;
	class USizeBox*                               MTXButtonBox;
	class UOverlay*                               Overlay_VBucks;
	class UImage*                                 OverlayGradient;
	class UImage*                                 OverlayGradientDetails;
	class UOverlay*                               OverlaySalePrice;
	class USafeZone*                              SafeZoneCloseButton;
	class USafeZone*                              SafeZoneMTX;
	class UStoreMain_OfferDetailsAttribute_C*     StoreMain_OfferDetailsAttribute1;
	class UStoreMain_OfferDetailsAttribute_C*     StoreMain_OfferDetailsAttribute2;
	class UCommonTextBlock*                       TextDescription;
	class UCommonTextBlock*                       TextName;
	class UCommonTextBlock*                       TextOfferDisplayPrice;
	class UCommonTextBlock*                       TextOriginalPrice;
	class UVerticalBox*                           VBoxOfferInfo;
	class UImage*                                 VBuckHighlight;
	class UWBP_ContentPurchaseBlocker_C*          WBP_ContentPurchaseBlocker;
	TMap<int32, class UFortMtxOfferData*>         ABAssetCollection;
	bool                                          isContentBlocked;
	uint8                                         Pad_9B1[0x7];
	class UFortMtxOfferData*                      DisplayAsset;

public:
	void UpdatePurchaseBlocked(bool bIsBlocked, const class FText& PurchaseNotAllowedReason);
	void UnregisterInput();
	void SetupCurrencyImage();
	void UpdatePurchaseButton();
	void OnLoaded_8B6F4A804D215DC25DE60DB2A90E3BD0(class UObject* Loaded);
	void SetPurchaseButtonText(const class FText& ButtonText);
	void OnLoaded_28384CAD450E607DCE5E079C601D083C(class UObject* Loaded);
	void ResetPurchaseButtonText();
	bool IsGiftingStorefrontOffer();
	void RegisterInput();
	void InitStoreTypeVisuals();
	void PopDetails();
	void InitDetailAttributes();
	void OnPurchasingStarted();
	void GetCurrencyABAssetFromQuantity(int32 Quantity, class UFortMtxOfferData** DataAsset);
	void InitCurrency();
	void ExecuteUbergraph_StoreMain_OfferDetails(int32 EntryPoint);
	void Init();
	void ContentBlocked(bool isContentBlocked_0, const class FText& Content_Blocked_Text);
	void HandleBack(bool* PassThrough);
	void Construct();
	void BP_OnOfferSet();
	void BP_OnActivated();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"StoreMain_OfferDetails_C">();
	}
	static class UStoreMain_OfferDetails_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UStoreMain_OfferDetails_C>();
	}
};
static_assert(alignof(UStoreMain_OfferDetails_C) == 0x000008, "Wrong alignment on UStoreMain_OfferDetails_C");
static_assert(sizeof(UStoreMain_OfferDetails_C) == 0x0009C0, "Wrong size on UStoreMain_OfferDetails_C");
static_assert(offsetof(UStoreMain_OfferDetails_C, UberGraphFrame) == 0x000888, "Member 'UStoreMain_OfferDetails_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UStoreMain_OfferDetails_C, BaseColor) == 0x000890, "Member 'UStoreMain_OfferDetails_C::BaseColor' has a wrong offset!");
static_assert(offsetof(UStoreMain_OfferDetails_C, BaseColorDetails) == 0x000898, "Member 'UStoreMain_OfferDetails_C::BaseColorDetails' has a wrong offset!");
static_assert(offsetof(UStoreMain_OfferDetails_C, BonusMTXArea) == 0x0008A0, "Member 'UStoreMain_OfferDetails_C::BonusMTXArea' has a wrong offset!");
static_assert(offsetof(UStoreMain_OfferDetails_C, BorderDisclaimer) == 0x0008A8, "Member 'UStoreMain_OfferDetails_C::BorderDisclaimer' has a wrong offset!");
static_assert(offsetof(UStoreMain_OfferDetails_C, CommonText_BaseQuantity) == 0x0008B0, "Member 'UStoreMain_OfferDetails_C::CommonText_BaseQuantity' has a wrong offset!");
static_assert(offsetof(UStoreMain_OfferDetails_C, CommonText_BonusQuantity) == 0x0008B8, "Member 'UStoreMain_OfferDetails_C::CommonText_BonusQuantity' has a wrong offset!");
static_assert(offsetof(UStoreMain_OfferDetails_C, Highlight) == 0x0008C0, "Member 'UStoreMain_OfferDetails_C::Highlight' has a wrong offset!");
static_assert(offsetof(UStoreMain_OfferDetails_C, Image_CurrencyIcon) == 0x0008C8, "Member 'UStoreMain_OfferDetails_C::Image_CurrencyIcon' has a wrong offset!");
static_assert(offsetof(UStoreMain_OfferDetails_C, KeyArt) == 0x0008D0, "Member 'UStoreMain_OfferDetails_C::KeyArt' has a wrong offset!");
static_assert(offsetof(UStoreMain_OfferDetails_C, MTXArea) == 0x0008D8, "Member 'UStoreMain_OfferDetails_C::MTXArea' has a wrong offset!");
static_assert(offsetof(UStoreMain_OfferDetails_C, MTXButtonBox) == 0x0008E0, "Member 'UStoreMain_OfferDetails_C::MTXButtonBox' has a wrong offset!");
static_assert(offsetof(UStoreMain_OfferDetails_C, Overlay_VBucks) == 0x0008E8, "Member 'UStoreMain_OfferDetails_C::Overlay_VBucks' has a wrong offset!");
static_assert(offsetof(UStoreMain_OfferDetails_C, OverlayGradient) == 0x0008F0, "Member 'UStoreMain_OfferDetails_C::OverlayGradient' has a wrong offset!");
static_assert(offsetof(UStoreMain_OfferDetails_C, OverlayGradientDetails) == 0x0008F8, "Member 'UStoreMain_OfferDetails_C::OverlayGradientDetails' has a wrong offset!");
static_assert(offsetof(UStoreMain_OfferDetails_C, OverlaySalePrice) == 0x000900, "Member 'UStoreMain_OfferDetails_C::OverlaySalePrice' has a wrong offset!");
static_assert(offsetof(UStoreMain_OfferDetails_C, SafeZoneCloseButton) == 0x000908, "Member 'UStoreMain_OfferDetails_C::SafeZoneCloseButton' has a wrong offset!");
static_assert(offsetof(UStoreMain_OfferDetails_C, SafeZoneMTX) == 0x000910, "Member 'UStoreMain_OfferDetails_C::SafeZoneMTX' has a wrong offset!");
static_assert(offsetof(UStoreMain_OfferDetails_C, StoreMain_OfferDetailsAttribute1) == 0x000918, "Member 'UStoreMain_OfferDetails_C::StoreMain_OfferDetailsAttribute1' has a wrong offset!");
static_assert(offsetof(UStoreMain_OfferDetails_C, StoreMain_OfferDetailsAttribute2) == 0x000920, "Member 'UStoreMain_OfferDetails_C::StoreMain_OfferDetailsAttribute2' has a wrong offset!");
static_assert(offsetof(UStoreMain_OfferDetails_C, TextDescription) == 0x000928, "Member 'UStoreMain_OfferDetails_C::TextDescription' has a wrong offset!");
static_assert(offsetof(UStoreMain_OfferDetails_C, TextName) == 0x000930, "Member 'UStoreMain_OfferDetails_C::TextName' has a wrong offset!");
static_assert(offsetof(UStoreMain_OfferDetails_C, TextOfferDisplayPrice) == 0x000938, "Member 'UStoreMain_OfferDetails_C::TextOfferDisplayPrice' has a wrong offset!");
static_assert(offsetof(UStoreMain_OfferDetails_C, TextOriginalPrice) == 0x000940, "Member 'UStoreMain_OfferDetails_C::TextOriginalPrice' has a wrong offset!");
static_assert(offsetof(UStoreMain_OfferDetails_C, VBoxOfferInfo) == 0x000948, "Member 'UStoreMain_OfferDetails_C::VBoxOfferInfo' has a wrong offset!");
static_assert(offsetof(UStoreMain_OfferDetails_C, VBuckHighlight) == 0x000950, "Member 'UStoreMain_OfferDetails_C::VBuckHighlight' has a wrong offset!");
static_assert(offsetof(UStoreMain_OfferDetails_C, WBP_ContentPurchaseBlocker) == 0x000958, "Member 'UStoreMain_OfferDetails_C::WBP_ContentPurchaseBlocker' has a wrong offset!");
static_assert(offsetof(UStoreMain_OfferDetails_C, ABAssetCollection) == 0x000960, "Member 'UStoreMain_OfferDetails_C::ABAssetCollection' has a wrong offset!");
static_assert(offsetof(UStoreMain_OfferDetails_C, isContentBlocked) == 0x0009B0, "Member 'UStoreMain_OfferDetails_C::isContentBlocked' has a wrong offset!");
static_assert(offsetof(UStoreMain_OfferDetails_C, DisplayAsset) == 0x0009B8, "Member 'UStoreMain_OfferDetails_C::DisplayAsset' has a wrong offset!");

}
