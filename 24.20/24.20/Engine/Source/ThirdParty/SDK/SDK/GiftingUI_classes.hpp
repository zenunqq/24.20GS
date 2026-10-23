#pragma once

#include "Basic.hpp"

#include "SocialUMG_classes.hpp"
#include "CommonUI_classes.hpp"
#include "Engine_structs.hpp"
#include "GiftingUI_structs.hpp"
#include "CommonUILegacy_classes.hpp"
#include "FortniteUI_classes.hpp"
#include "SlateCore_structs.hpp"
#include "FortniteGame_classes.hpp"

namespace SDK
{

class UAthenaGiftConfirmedPanel final : public UCommonActivatableWidget
{
public:
	uint8                                         Pad_3A8[0x18];
	class URichTextBlock*                         Text_RecipientInfo;
	class UCommonButtonLegacy*                    Button_Back;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"AthenaGiftConfirmedPanel">();
	}
	static class UAthenaGiftConfirmedPanel* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAthenaGiftConfirmedPanel>();
	}
};
static_assert(alignof(UAthenaGiftConfirmedPanel) == 0x000008, "Wrong alignment on UAthenaGiftConfirmedPanel");
static_assert(sizeof(UAthenaGiftConfirmedPanel) == 0x0003D0, "Wrong size on UAthenaGiftConfirmedPanel");
static_assert(offsetof(UAthenaGiftConfirmedPanel, Text_RecipientInfo) == 0x0003C0, "Member 'UAthenaGiftConfirmedPanel::Text_RecipientInfo' has a wrong offset!");
static_assert(offsetof(UAthenaGiftConfirmedPanel, Button_Back) == 0x0003C8, "Member 'UAthenaGiftConfirmedPanel::Button_Back' has a wrong offset!");

class UAthenaGiftingConfirmationScreen final : public UCommonActivatableWidget
{
public:
	uint8                                         Pad_3A8[0x30];
	class UFortStoreFrontOfferInfo*               PresentedGiftableOfferInfo;
	class UFortStoreFrontOfferInfo*               PresentedOptionalTokenOfferInfo;
	uint8                                         Pad_3E8[0xBC];
	float                                         MinGiftSubmissionDelay;
	float                                         MaxGiftSubmissionDelay;
	uint8                                         Pad_4AC[0x14];
	class UCommonButtonLegacy*                    Button_WrapOptions;
	class UCommonButtonLegacy*                    Button_Back;
	class UCommonButtonLegacy*                    Button_MobileClose;
	class UCommonButtonLegacy*                    Button_MtxWallet;
	class UAthenaGiftingPurchasePanel*            Panel_GiftingPurchase;
	class UAthenaGiftingWrapOptionsPanel*         Panel_WrapOptions;
	class UAthenaGiftConfirmedPanel*              Panel_GiftConfirmed;
	class UAthenaGiftingErrorsPanel*              Panel_GiftingErrors;

public:
	void Dismiss(const bool bGiftConfirmed);
	void HandleGiftSent(bool bSuccess, const TArray<class FString>& IneligibleAccounts, const TArray<class FString>& ErrorCodes);
	void HandleTokenOfferPurchaseComplete(bool bSuccess, const TArray<struct FPurchasedItemInfo>& PurchasedItems);
	void OnPresentationModeChanged(EGiftingPresentationMode NewMode);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"AthenaGiftingConfirmationScreen">();
	}
	static class UAthenaGiftingConfirmationScreen* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAthenaGiftingConfirmationScreen>();
	}
};
static_assert(alignof(UAthenaGiftingConfirmationScreen) == 0x000008, "Wrong alignment on UAthenaGiftingConfirmationScreen");
static_assert(sizeof(UAthenaGiftingConfirmationScreen) == 0x000500, "Wrong size on UAthenaGiftingConfirmationScreen");
static_assert(offsetof(UAthenaGiftingConfirmationScreen, PresentedGiftableOfferInfo) == 0x0003D8, "Member 'UAthenaGiftingConfirmationScreen::PresentedGiftableOfferInfo' has a wrong offset!");
static_assert(offsetof(UAthenaGiftingConfirmationScreen, PresentedOptionalTokenOfferInfo) == 0x0003E0, "Member 'UAthenaGiftingConfirmationScreen::PresentedOptionalTokenOfferInfo' has a wrong offset!");
static_assert(offsetof(UAthenaGiftingConfirmationScreen, MinGiftSubmissionDelay) == 0x0004A4, "Member 'UAthenaGiftingConfirmationScreen::MinGiftSubmissionDelay' has a wrong offset!");
static_assert(offsetof(UAthenaGiftingConfirmationScreen, MaxGiftSubmissionDelay) == 0x0004A8, "Member 'UAthenaGiftingConfirmationScreen::MaxGiftSubmissionDelay' has a wrong offset!");
static_assert(offsetof(UAthenaGiftingConfirmationScreen, Button_WrapOptions) == 0x0004C0, "Member 'UAthenaGiftingConfirmationScreen::Button_WrapOptions' has a wrong offset!");
static_assert(offsetof(UAthenaGiftingConfirmationScreen, Button_Back) == 0x0004C8, "Member 'UAthenaGiftingConfirmationScreen::Button_Back' has a wrong offset!");
static_assert(offsetof(UAthenaGiftingConfirmationScreen, Button_MobileClose) == 0x0004D0, "Member 'UAthenaGiftingConfirmationScreen::Button_MobileClose' has a wrong offset!");
static_assert(offsetof(UAthenaGiftingConfirmationScreen, Button_MtxWallet) == 0x0004D8, "Member 'UAthenaGiftingConfirmationScreen::Button_MtxWallet' has a wrong offset!");
static_assert(offsetof(UAthenaGiftingConfirmationScreen, Panel_GiftingPurchase) == 0x0004E0, "Member 'UAthenaGiftingConfirmationScreen::Panel_GiftingPurchase' has a wrong offset!");
static_assert(offsetof(UAthenaGiftingConfirmationScreen, Panel_WrapOptions) == 0x0004E8, "Member 'UAthenaGiftingConfirmationScreen::Panel_WrapOptions' has a wrong offset!");
static_assert(offsetof(UAthenaGiftingConfirmationScreen, Panel_GiftConfirmed) == 0x0004F0, "Member 'UAthenaGiftingConfirmationScreen::Panel_GiftConfirmed' has a wrong offset!");
static_assert(offsetof(UAthenaGiftingConfirmationScreen, Panel_GiftingErrors) == 0x0004F8, "Member 'UAthenaGiftingConfirmationScreen::Panel_GiftingErrors' has a wrong offset!");

class UAthenaGiftingErrorsPanel final : public UCommonActivatableWidget
{
public:
	uint8                                         Pad_3A8[0x30];
	class URichTextBlock*                         Text_RecipientInfo;
	class URichTextBlock*                         Text_Title;
	class UCommonButtonLegacy*                    Button_MobileClose;
	class UCommonButtonLegacy*                    Button_Back;
	class UCommonButtonLegacy*                    Button_Continue;
	class UTileView*                              TileView_Items;

public:
	void UpdateGiftEligibility(bool bStillGiftable);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"AthenaGiftingErrorsPanel">();
	}
	static class UAthenaGiftingErrorsPanel* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAthenaGiftingErrorsPanel>();
	}
};
static_assert(alignof(UAthenaGiftingErrorsPanel) == 0x000008, "Wrong alignment on UAthenaGiftingErrorsPanel");
static_assert(sizeof(UAthenaGiftingErrorsPanel) == 0x000408, "Wrong size on UAthenaGiftingErrorsPanel");
static_assert(offsetof(UAthenaGiftingErrorsPanel, Text_RecipientInfo) == 0x0003D8, "Member 'UAthenaGiftingErrorsPanel::Text_RecipientInfo' has a wrong offset!");
static_assert(offsetof(UAthenaGiftingErrorsPanel, Text_Title) == 0x0003E0, "Member 'UAthenaGiftingErrorsPanel::Text_Title' has a wrong offset!");
static_assert(offsetof(UAthenaGiftingErrorsPanel, Button_MobileClose) == 0x0003E8, "Member 'UAthenaGiftingErrorsPanel::Button_MobileClose' has a wrong offset!");
static_assert(offsetof(UAthenaGiftingErrorsPanel, Button_Back) == 0x0003F0, "Member 'UAthenaGiftingErrorsPanel::Button_Back' has a wrong offset!");
static_assert(offsetof(UAthenaGiftingErrorsPanel, Button_Continue) == 0x0003F8, "Member 'UAthenaGiftingErrorsPanel::Button_Continue' has a wrong offset!");
static_assert(offsetof(UAthenaGiftingErrorsPanel, TileView_Items) == 0x000400, "Member 'UAthenaGiftingErrorsPanel::TileView_Items' has a wrong offset!");

class UAthenaGiftingPriceWidget final : public UCommonUserWidget
{
public:
	class UCommonTextBlock*                       Text_RealMoneyPrice;
	class UCommonTextBlock*                       Text_FinalPrice;
	class UCommonTextBlock*                       Text_RegularPrice;
	class UWidget*                                Overlay_SalePrice;

public:
	void SetPresentationMode(EGiftingPricePresentationMode Mode);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"AthenaGiftingPriceWidget">();
	}
	static class UAthenaGiftingPriceWidget* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAthenaGiftingPriceWidget>();
	}
};
static_assert(alignof(UAthenaGiftingPriceWidget) == 0x000008, "Wrong alignment on UAthenaGiftingPriceWidget");
static_assert(sizeof(UAthenaGiftingPriceWidget) == 0x0002B0, "Wrong size on UAthenaGiftingPriceWidget");
static_assert(offsetof(UAthenaGiftingPriceWidget, Text_RealMoneyPrice) == 0x000290, "Member 'UAthenaGiftingPriceWidget::Text_RealMoneyPrice' has a wrong offset!");
static_assert(offsetof(UAthenaGiftingPriceWidget, Text_FinalPrice) == 0x000298, "Member 'UAthenaGiftingPriceWidget::Text_FinalPrice' has a wrong offset!");
static_assert(offsetof(UAthenaGiftingPriceWidget, Text_RegularPrice) == 0x0002A0, "Member 'UAthenaGiftingPriceWidget::Text_RegularPrice' has a wrong offset!");
static_assert(offsetof(UAthenaGiftingPriceWidget, Overlay_SalePrice) == 0x0002A8, "Member 'UAthenaGiftingPriceWidget::Overlay_SalePrice' has a wrong offset!");

class UAthenaGiftingPurchaseButton final : public UFortHoldableButton
{
public:
	class UAthenaGiftingPriceWidget*              Widget_Price;
	class UCommonTextBlock*                       Text_Title;
	uint8                                         Pad_1488[0x8];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"AthenaGiftingPurchaseButton">();
	}
	static class UAthenaGiftingPurchaseButton* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAthenaGiftingPurchaseButton>();
	}
};
static_assert(alignof(UAthenaGiftingPurchaseButton) == 0x000010, "Wrong alignment on UAthenaGiftingPurchaseButton");
static_assert(sizeof(UAthenaGiftingPurchaseButton) == 0x001490, "Wrong size on UAthenaGiftingPurchaseButton");
static_assert(offsetof(UAthenaGiftingPurchaseButton, Widget_Price) == 0x001478, "Member 'UAthenaGiftingPurchaseButton::Widget_Price' has a wrong offset!");
static_assert(offsetof(UAthenaGiftingPurchaseButton, Text_Title) == 0x001480, "Member 'UAthenaGiftingPurchaseButton::Text_Title' has a wrong offset!");

class UAthenaGiftingPurchasePanel final : public UCommonActivatableWidget
{
public:
	uint8                                         Pad_3A8[0x18];
	class UAthenaGiftingPurchaseButton*           Button_PurchaseGift;
	class UFortSocialAvatarIcon*                  Avatar_MemberIcon;
	class UCommonTextBlock*                       Text_SocialNameInfo;
	class UCommonTextBlock*                       Text_ItemsCount;
	class UCommonTextBlock*                       Text_OfferName;
	class UTileView*                              TileView_Items;

public:
	void PlayIntroAnimation();

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"AthenaGiftingPurchasePanel">();
	}
	static class UAthenaGiftingPurchasePanel* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAthenaGiftingPurchasePanel>();
	}
};
static_assert(alignof(UAthenaGiftingPurchasePanel) == 0x000008, "Wrong alignment on UAthenaGiftingPurchasePanel");
static_assert(sizeof(UAthenaGiftingPurchasePanel) == 0x0003F0, "Wrong size on UAthenaGiftingPurchasePanel");
static_assert(offsetof(UAthenaGiftingPurchasePanel, Button_PurchaseGift) == 0x0003C0, "Member 'UAthenaGiftingPurchasePanel::Button_PurchaseGift' has a wrong offset!");
static_assert(offsetof(UAthenaGiftingPurchasePanel, Avatar_MemberIcon) == 0x0003C8, "Member 'UAthenaGiftingPurchasePanel::Avatar_MemberIcon' has a wrong offset!");
static_assert(offsetof(UAthenaGiftingPurchasePanel, Text_SocialNameInfo) == 0x0003D0, "Member 'UAthenaGiftingPurchasePanel::Text_SocialNameInfo' has a wrong offset!");
static_assert(offsetof(UAthenaGiftingPurchasePanel, Text_ItemsCount) == 0x0003D8, "Member 'UAthenaGiftingPurchasePanel::Text_ItemsCount' has a wrong offset!");
static_assert(offsetof(UAthenaGiftingPurchasePanel, Text_OfferName) == 0x0003E0, "Member 'UAthenaGiftingPurchasePanel::Text_OfferName' has a wrong offset!");
static_assert(offsetof(UAthenaGiftingPurchasePanel, TileView_Items) == 0x0003E8, "Member 'UAthenaGiftingPurchasePanel::TileView_Items' has a wrong offset!");

class UAthenaGiftingScreen final : public UFortItemPreviewScreen
{
public:
	uint8                                         Pad_670[0x8];
	class UFortGiftingUserSearchWidget*           SearchWidget_SocialSearchWidget;
	class UFortGiftingSocialUserListView*         ListView_Recipients;
	class UTileView*                              TileView_Items;
	class UCommonButtonBase*                      Button_Back;
	class UCommonButtonBase*                      Button_MobileClose;
	class UCommonButtonBase*                      Button_GiftingPolicy;
	class UCommonButtonBase*                      Button_CameraControl;
	class UCommonTextBlock*                       Text_OfferName;
	class UCommonTextBlock*                       Text_VBucksOffCount;
	class UCommonTextBlock*                       Text_ShownItemIndex;
	class UCommonRichTextBlock*                   Text_NoContent;
	class UCommonRichTextBlock*                   RichText_OfferItemOwnedCount;
	class UOverlay*                               Container_VBucksOffViolator;
	class UCommonRichTextBlock*                   RichText_GiftCount;
	class UAthenaGiftingPriceWidget*              Widget_Price;
	class UAthenaLockerItemInfo*                  Widget_ItemInfo;
	class UDynamicEntryBox*                       EntryBox_FilterTabs;
	class UCommonActionWidget*                    ActionWidget_FilterTabsPrevious;
	class UCommonActionWidget*                    ActionWidget_FilterTabsNext;
	class UAthenaGiftingConfirmationScreen*       ActivatableWidget_GiftingConfirmation;
	float                                         ItemCyclingInterval;
	uint8                                         Pad_71C[0x4];
	struct FDataTableRowHandle                    FilterTabsPreviousAction;
	struct FDataTableRowHandle                    FilterTabsNextAction;
	class FText                                   RegularGiftingPolicy;
	class FText                                   BattlePassGiftingPolicy;
	uint8                                         Pad_770[0x60];
	TMap<class UCommonButtonLegacy*, EFilterType> FilterMap;
	class UCommonButtonGroupLegacy*               FilterGroup;
	TArray<class UFortItemDefinition*>            ItemDefinitions;
	class UFortItemDefinition*                    PresentedItemDefinition;
	class UFortStoreFrontOfferInfo*               GiftableOfferInfo;
	class UFortStoreFrontOfferInfo*               OptionalTokenOfferInfo;

public:
	void BlockScreenContent(const bool bBlockScreen, const class FText& ContentBlockedText);
	void OnFilterChanged(EFilterType FilterType);
	void OnFriendSelectionChanged();
	void OnPartyListUpdated(bool bEmpty);
	void OnPresentationModeChanged(EGiftingScreenPresentationMode Mode);
	void OnSetupFilterTabButton(class UCommonButtonLegacy* Button, EFilterType FilterType);
	void OnShownItemChanged();
	void OnShowSearchWarningText(bool bShow);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"AthenaGiftingScreen">();
	}
	static class UAthenaGiftingScreen* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAthenaGiftingScreen>();
	}
};
static_assert(alignof(UAthenaGiftingScreen) == 0x000008, "Wrong alignment on UAthenaGiftingScreen");
static_assert(sizeof(UAthenaGiftingScreen) == 0x000850, "Wrong size on UAthenaGiftingScreen");
static_assert(offsetof(UAthenaGiftingScreen, SearchWidget_SocialSearchWidget) == 0x000678, "Member 'UAthenaGiftingScreen::SearchWidget_SocialSearchWidget' has a wrong offset!");
static_assert(offsetof(UAthenaGiftingScreen, ListView_Recipients) == 0x000680, "Member 'UAthenaGiftingScreen::ListView_Recipients' has a wrong offset!");
static_assert(offsetof(UAthenaGiftingScreen, TileView_Items) == 0x000688, "Member 'UAthenaGiftingScreen::TileView_Items' has a wrong offset!");
static_assert(offsetof(UAthenaGiftingScreen, Button_Back) == 0x000690, "Member 'UAthenaGiftingScreen::Button_Back' has a wrong offset!");
static_assert(offsetof(UAthenaGiftingScreen, Button_MobileClose) == 0x000698, "Member 'UAthenaGiftingScreen::Button_MobileClose' has a wrong offset!");
static_assert(offsetof(UAthenaGiftingScreen, Button_GiftingPolicy) == 0x0006A0, "Member 'UAthenaGiftingScreen::Button_GiftingPolicy' has a wrong offset!");
static_assert(offsetof(UAthenaGiftingScreen, Button_CameraControl) == 0x0006A8, "Member 'UAthenaGiftingScreen::Button_CameraControl' has a wrong offset!");
static_assert(offsetof(UAthenaGiftingScreen, Text_OfferName) == 0x0006B0, "Member 'UAthenaGiftingScreen::Text_OfferName' has a wrong offset!");
static_assert(offsetof(UAthenaGiftingScreen, Text_VBucksOffCount) == 0x0006B8, "Member 'UAthenaGiftingScreen::Text_VBucksOffCount' has a wrong offset!");
static_assert(offsetof(UAthenaGiftingScreen, Text_ShownItemIndex) == 0x0006C0, "Member 'UAthenaGiftingScreen::Text_ShownItemIndex' has a wrong offset!");
static_assert(offsetof(UAthenaGiftingScreen, Text_NoContent) == 0x0006C8, "Member 'UAthenaGiftingScreen::Text_NoContent' has a wrong offset!");
static_assert(offsetof(UAthenaGiftingScreen, RichText_OfferItemOwnedCount) == 0x0006D0, "Member 'UAthenaGiftingScreen::RichText_OfferItemOwnedCount' has a wrong offset!");
static_assert(offsetof(UAthenaGiftingScreen, Container_VBucksOffViolator) == 0x0006D8, "Member 'UAthenaGiftingScreen::Container_VBucksOffViolator' has a wrong offset!");
static_assert(offsetof(UAthenaGiftingScreen, RichText_GiftCount) == 0x0006E0, "Member 'UAthenaGiftingScreen::RichText_GiftCount' has a wrong offset!");
static_assert(offsetof(UAthenaGiftingScreen, Widget_Price) == 0x0006E8, "Member 'UAthenaGiftingScreen::Widget_Price' has a wrong offset!");
static_assert(offsetof(UAthenaGiftingScreen, Widget_ItemInfo) == 0x0006F0, "Member 'UAthenaGiftingScreen::Widget_ItemInfo' has a wrong offset!");
static_assert(offsetof(UAthenaGiftingScreen, EntryBox_FilterTabs) == 0x0006F8, "Member 'UAthenaGiftingScreen::EntryBox_FilterTabs' has a wrong offset!");
static_assert(offsetof(UAthenaGiftingScreen, ActionWidget_FilterTabsPrevious) == 0x000700, "Member 'UAthenaGiftingScreen::ActionWidget_FilterTabsPrevious' has a wrong offset!");
static_assert(offsetof(UAthenaGiftingScreen, ActionWidget_FilterTabsNext) == 0x000708, "Member 'UAthenaGiftingScreen::ActionWidget_FilterTabsNext' has a wrong offset!");
static_assert(offsetof(UAthenaGiftingScreen, ActivatableWidget_GiftingConfirmation) == 0x000710, "Member 'UAthenaGiftingScreen::ActivatableWidget_GiftingConfirmation' has a wrong offset!");
static_assert(offsetof(UAthenaGiftingScreen, ItemCyclingInterval) == 0x000718, "Member 'UAthenaGiftingScreen::ItemCyclingInterval' has a wrong offset!");
static_assert(offsetof(UAthenaGiftingScreen, FilterTabsPreviousAction) == 0x000720, "Member 'UAthenaGiftingScreen::FilterTabsPreviousAction' has a wrong offset!");
static_assert(offsetof(UAthenaGiftingScreen, FilterTabsNextAction) == 0x000730, "Member 'UAthenaGiftingScreen::FilterTabsNextAction' has a wrong offset!");
static_assert(offsetof(UAthenaGiftingScreen, RegularGiftingPolicy) == 0x000740, "Member 'UAthenaGiftingScreen::RegularGiftingPolicy' has a wrong offset!");
static_assert(offsetof(UAthenaGiftingScreen, BattlePassGiftingPolicy) == 0x000758, "Member 'UAthenaGiftingScreen::BattlePassGiftingPolicy' has a wrong offset!");
static_assert(offsetof(UAthenaGiftingScreen, FilterMap) == 0x0007D0, "Member 'UAthenaGiftingScreen::FilterMap' has a wrong offset!");
static_assert(offsetof(UAthenaGiftingScreen, FilterGroup) == 0x000820, "Member 'UAthenaGiftingScreen::FilterGroup' has a wrong offset!");
static_assert(offsetof(UAthenaGiftingScreen, ItemDefinitions) == 0x000828, "Member 'UAthenaGiftingScreen::ItemDefinitions' has a wrong offset!");
static_assert(offsetof(UAthenaGiftingScreen, PresentedItemDefinition) == 0x000838, "Member 'UAthenaGiftingScreen::PresentedItemDefinition' has a wrong offset!");
static_assert(offsetof(UAthenaGiftingScreen, GiftableOfferInfo) == 0x000840, "Member 'UAthenaGiftingScreen::GiftableOfferInfo' has a wrong offset!");
static_assert(offsetof(UAthenaGiftingScreen, OptionalTokenOfferInfo) == 0x000848, "Member 'UAthenaGiftingScreen::OptionalTokenOfferInfo' has a wrong offset!");

class UAthenaGiftingWrapOptionsPanel final : public UCommonActivatableWidget
{
public:
	uint8                                         Pad_3A8[0x28];
	TArray<TSoftObjectPtr<class UFortGiftBoxItemDefinition>> GiftBoxes;
	TArray<class UFortGiftBoxItemDefinition*>     GiftBoxItemDefs;
	uint8                                         Pad_3F0[0x10];
	class UCommonButtonLegacy*                    Button_ConfirmWrap;
	class UTileView*                              TileView_WrapOptions;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"AthenaGiftingWrapOptionsPanel">();
	}
	static class UAthenaGiftingWrapOptionsPanel* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAthenaGiftingWrapOptionsPanel>();
	}
};
static_assert(alignof(UAthenaGiftingWrapOptionsPanel) == 0x000008, "Wrong alignment on UAthenaGiftingWrapOptionsPanel");
static_assert(sizeof(UAthenaGiftingWrapOptionsPanel) == 0x000410, "Wrong size on UAthenaGiftingWrapOptionsPanel");
static_assert(offsetof(UAthenaGiftingWrapOptionsPanel, GiftBoxes) == 0x0003D0, "Member 'UAthenaGiftingWrapOptionsPanel::GiftBoxes' has a wrong offset!");
static_assert(offsetof(UAthenaGiftingWrapOptionsPanel, GiftBoxItemDefs) == 0x0003E0, "Member 'UAthenaGiftingWrapOptionsPanel::GiftBoxItemDefs' has a wrong offset!");
static_assert(offsetof(UAthenaGiftingWrapOptionsPanel, Button_ConfirmWrap) == 0x000400, "Member 'UAthenaGiftingWrapOptionsPanel::Button_ConfirmWrap' has a wrong offset!");
static_assert(offsetof(UAthenaGiftingWrapOptionsPanel, TileView_WrapOptions) == 0x000408, "Member 'UAthenaGiftingWrapOptionsPanel::TileView_WrapOptions' has a wrong offset!");

class UFortGiftingSocialUserListEntry final : public USocialListEntryBase
{
public:
	uint8                                         Pad_1448[0xC0];
	class UFortSocialAvatarIcon*                  Avatar_MemberIcon;
	class USocialNameTextBlock*                   Text_SocialName;
	class UCommonRichTextBlock*                   RichText_EligibilityStatus;
	class UCommonRichTextBlock*                   RichText_OwnedItems;
	class UAthenaGiftingPriceWidget*              Widget_Price;

public:
	void BP_OnHighlightedStateChanged(bool bInIsHighlighted, bool bPlayAnimation);
	void BP_OnTouchSelectionConfirmed();
	void OnRecipientStatusUpdated();
	void OnUserItemSet();
	void SetPresentationMode(ERecipientPresentationMode Mode);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortGiftingSocialUserListEntry">();
	}
	static class UFortGiftingSocialUserListEntry* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortGiftingSocialUserListEntry>();
	}
};
static_assert(alignof(UFortGiftingSocialUserListEntry) == 0x000010, "Wrong alignment on UFortGiftingSocialUserListEntry");
static_assert(sizeof(UFortGiftingSocialUserListEntry) == 0x001530, "Wrong size on UFortGiftingSocialUserListEntry");
static_assert(offsetof(UFortGiftingSocialUserListEntry, Avatar_MemberIcon) == 0x001508, "Member 'UFortGiftingSocialUserListEntry::Avatar_MemberIcon' has a wrong offset!");
static_assert(offsetof(UFortGiftingSocialUserListEntry, Text_SocialName) == 0x001510, "Member 'UFortGiftingSocialUserListEntry::Text_SocialName' has a wrong offset!");
static_assert(offsetof(UFortGiftingSocialUserListEntry, RichText_EligibilityStatus) == 0x001518, "Member 'UFortGiftingSocialUserListEntry::RichText_EligibilityStatus' has a wrong offset!");
static_assert(offsetof(UFortGiftingSocialUserListEntry, RichText_OwnedItems) == 0x001520, "Member 'UFortGiftingSocialUserListEntry::RichText_OwnedItems' has a wrong offset!");
static_assert(offsetof(UFortGiftingSocialUserListEntry, Widget_Price) == 0x001528, "Member 'UFortGiftingSocialUserListEntry::Widget_Price' has a wrong offset!");

class UFortGiftingSocialUserListView final : public USocialUserListViewBase
{
public:
	float                                         RefreshRecipientStatusDelay;
	uint8                                         Pad_364[0xF4];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortGiftingSocialUserListView">();
	}
	static class UFortGiftingSocialUserListView* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortGiftingSocialUserListView>();
	}
};
static_assert(alignof(UFortGiftingSocialUserListView) == 0x000008, "Wrong alignment on UFortGiftingSocialUserListView");
static_assert(sizeof(UFortGiftingSocialUserListView) == 0x000458, "Wrong size on UFortGiftingSocialUserListView");
static_assert(offsetof(UFortGiftingSocialUserListView, RefreshRecipientStatusDelay) == 0x000360, "Member 'UFortGiftingSocialUserListView::RefreshRecipientStatusDelay' has a wrong offset!");

class UFortGiftingUserSearchWidget final : public UCommonUserWidget
{
public:
	class UEditableText*                          EditableText_SearchFriends;
	class UCommonButtonBase*                      Button_ClearQuery;
	class UCommonButtonBase*                      Button_SubmitQuery;
	uint8                                         Pad_2A8[0x30];

public:
	void FocusEditableText();
	void HandleSearchFriendsTextChanged(const class FText& Text);
	void HandleSearchFriendsTextEntered(const class FText& Text, ETextCommit CommitMethod);
	void OnSearchCommit(bool bSearchStringShort);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortGiftingUserSearchWidget">();
	}
	static class UFortGiftingUserSearchWidget* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortGiftingUserSearchWidget>();
	}
};
static_assert(alignof(UFortGiftingUserSearchWidget) == 0x000008, "Wrong alignment on UFortGiftingUserSearchWidget");
static_assert(sizeof(UFortGiftingUserSearchWidget) == 0x0002D8, "Wrong size on UFortGiftingUserSearchWidget");
static_assert(offsetof(UFortGiftingUserSearchWidget, EditableText_SearchFriends) == 0x000290, "Member 'UFortGiftingUserSearchWidget::EditableText_SearchFriends' has a wrong offset!");
static_assert(offsetof(UFortGiftingUserSearchWidget, Button_ClearQuery) == 0x000298, "Member 'UFortGiftingUserSearchWidget::Button_ClearQuery' has a wrong offset!");
static_assert(offsetof(UFortGiftingUserSearchWidget, Button_SubmitQuery) == 0x0002A0, "Member 'UFortGiftingUserSearchWidget::Button_SubmitQuery' has a wrong offset!");

class UFortGiftingWrapOptionListEntry final : public UCommonButtonLegacy
{
public:
	uint8                                         Pad_1430[0x8];
	class UFortGiftBoxItemDefinition*             GiftBoxDefinition;
	class UCommonLazyImage*                       Image_Gift;
	uint8                                         Pad_1448[0x8];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortGiftingWrapOptionListEntry">();
	}
	static class UFortGiftingWrapOptionListEntry* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortGiftingWrapOptionListEntry>();
	}
};
static_assert(alignof(UFortGiftingWrapOptionListEntry) == 0x000010, "Wrong alignment on UFortGiftingWrapOptionListEntry");
static_assert(sizeof(UFortGiftingWrapOptionListEntry) == 0x001450, "Wrong size on UFortGiftingWrapOptionListEntry");
static_assert(offsetof(UFortGiftingWrapOptionListEntry, GiftBoxDefinition) == 0x001438, "Member 'UFortGiftingWrapOptionListEntry::GiftBoxDefinition' has a wrong offset!");
static_assert(offsetof(UFortGiftingWrapOptionListEntry, Image_Gift) == 0x001440, "Member 'UFortGiftingWrapOptionListEntry::Image_Gift' has a wrong offset!");

class UFortGiftingData final : public UFortGameFeatureData
{
public:
	TSoftClassPtr<class UClass>                   GiftingScreenClass;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortGiftingData">();
	}
	static class UFortGiftingData* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortGiftingData>();
	}
};
static_assert(alignof(UFortGiftingData) == 0x000008, "Wrong alignment on UFortGiftingData");
static_assert(sizeof(UFortGiftingData) == 0x000548, "Wrong size on UFortGiftingData");
static_assert(offsetof(UFortGiftingData, GiftingScreenClass) == 0x000520, "Member 'UFortGiftingData::GiftingScreenClass' has a wrong offset!");

}
