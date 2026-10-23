#pragma once

#include "Basic.hpp"

#include "GiftingUI_structs.hpp"
#include "FortniteGame_structs.hpp"
#include "SlateCore_structs.hpp"

namespace SDK::Params
{

struct AthenaGiftingConfirmationScreen_Dismiss final
{
public:
	bool                                          bGiftConfirmed;
};
static_assert(alignof(AthenaGiftingConfirmationScreen_Dismiss) == 0x000001, "Wrong alignment on AthenaGiftingConfirmationScreen_Dismiss");
static_assert(sizeof(AthenaGiftingConfirmationScreen_Dismiss) == 0x000001, "Wrong size on AthenaGiftingConfirmationScreen_Dismiss");
static_assert(offsetof(AthenaGiftingConfirmationScreen_Dismiss, bGiftConfirmed) == 0x000000, "Member 'AthenaGiftingConfirmationScreen_Dismiss::bGiftConfirmed' has a wrong offset!");

struct AthenaGiftingConfirmationScreen_HandleGiftSent final
{
public:
	bool                                          bSuccess;
	uint8                                         Pad_1[0x7];
	TArray<class FString>                         IneligibleAccounts;
	TArray<class FString>                         ErrorCodes;
};
static_assert(alignof(AthenaGiftingConfirmationScreen_HandleGiftSent) == 0x000008, "Wrong alignment on AthenaGiftingConfirmationScreen_HandleGiftSent");
static_assert(sizeof(AthenaGiftingConfirmationScreen_HandleGiftSent) == 0x000028, "Wrong size on AthenaGiftingConfirmationScreen_HandleGiftSent");
static_assert(offsetof(AthenaGiftingConfirmationScreen_HandleGiftSent, bSuccess) == 0x000000, "Member 'AthenaGiftingConfirmationScreen_HandleGiftSent::bSuccess' has a wrong offset!");
static_assert(offsetof(AthenaGiftingConfirmationScreen_HandleGiftSent, IneligibleAccounts) == 0x000008, "Member 'AthenaGiftingConfirmationScreen_HandleGiftSent::IneligibleAccounts' has a wrong offset!");
static_assert(offsetof(AthenaGiftingConfirmationScreen_HandleGiftSent, ErrorCodes) == 0x000018, "Member 'AthenaGiftingConfirmationScreen_HandleGiftSent::ErrorCodes' has a wrong offset!");

struct AthenaGiftingConfirmationScreen_HandleTokenOfferPurchaseComplete final
{
public:
	bool                                          bSuccess;
	uint8                                         Pad_1[0x7];
	TArray<struct FPurchasedItemInfo>             PurchasedItems;
};
static_assert(alignof(AthenaGiftingConfirmationScreen_HandleTokenOfferPurchaseComplete) == 0x000008, "Wrong alignment on AthenaGiftingConfirmationScreen_HandleTokenOfferPurchaseComplete");
static_assert(sizeof(AthenaGiftingConfirmationScreen_HandleTokenOfferPurchaseComplete) == 0x000018, "Wrong size on AthenaGiftingConfirmationScreen_HandleTokenOfferPurchaseComplete");
static_assert(offsetof(AthenaGiftingConfirmationScreen_HandleTokenOfferPurchaseComplete, bSuccess) == 0x000000, "Member 'AthenaGiftingConfirmationScreen_HandleTokenOfferPurchaseComplete::bSuccess' has a wrong offset!");
static_assert(offsetof(AthenaGiftingConfirmationScreen_HandleTokenOfferPurchaseComplete, PurchasedItems) == 0x000008, "Member 'AthenaGiftingConfirmationScreen_HandleTokenOfferPurchaseComplete::PurchasedItems' has a wrong offset!");

struct AthenaGiftingConfirmationScreen_OnPresentationModeChanged final
{
public:
	EGiftingPresentationMode                      NewMode;
};
static_assert(alignof(AthenaGiftingConfirmationScreen_OnPresentationModeChanged) == 0x000001, "Wrong alignment on AthenaGiftingConfirmationScreen_OnPresentationModeChanged");
static_assert(sizeof(AthenaGiftingConfirmationScreen_OnPresentationModeChanged) == 0x000001, "Wrong size on AthenaGiftingConfirmationScreen_OnPresentationModeChanged");
static_assert(offsetof(AthenaGiftingConfirmationScreen_OnPresentationModeChanged, NewMode) == 0x000000, "Member 'AthenaGiftingConfirmationScreen_OnPresentationModeChanged::NewMode' has a wrong offset!");

struct AthenaGiftingErrorsPanel_UpdateGiftEligibility final
{
public:
	bool                                          bStillGiftable;
};
static_assert(alignof(AthenaGiftingErrorsPanel_UpdateGiftEligibility) == 0x000001, "Wrong alignment on AthenaGiftingErrorsPanel_UpdateGiftEligibility");
static_assert(sizeof(AthenaGiftingErrorsPanel_UpdateGiftEligibility) == 0x000001, "Wrong size on AthenaGiftingErrorsPanel_UpdateGiftEligibility");
static_assert(offsetof(AthenaGiftingErrorsPanel_UpdateGiftEligibility, bStillGiftable) == 0x000000, "Member 'AthenaGiftingErrorsPanel_UpdateGiftEligibility::bStillGiftable' has a wrong offset!");

struct AthenaGiftingPriceWidget_SetPresentationMode final
{
public:
	EGiftingPricePresentationMode                 Mode;
};
static_assert(alignof(AthenaGiftingPriceWidget_SetPresentationMode) == 0x000001, "Wrong alignment on AthenaGiftingPriceWidget_SetPresentationMode");
static_assert(sizeof(AthenaGiftingPriceWidget_SetPresentationMode) == 0x000001, "Wrong size on AthenaGiftingPriceWidget_SetPresentationMode");
static_assert(offsetof(AthenaGiftingPriceWidget_SetPresentationMode, Mode) == 0x000000, "Member 'AthenaGiftingPriceWidget_SetPresentationMode::Mode' has a wrong offset!");

struct AthenaGiftingScreen_BlockScreenContent final
{
public:
	bool                                          bBlockScreen;
	uint8                                         Pad_1[0x7];
	class FText                                   ContentBlockedText;
};
static_assert(alignof(AthenaGiftingScreen_BlockScreenContent) == 0x000008, "Wrong alignment on AthenaGiftingScreen_BlockScreenContent");
static_assert(sizeof(AthenaGiftingScreen_BlockScreenContent) == 0x000020, "Wrong size on AthenaGiftingScreen_BlockScreenContent");
static_assert(offsetof(AthenaGiftingScreen_BlockScreenContent, bBlockScreen) == 0x000000, "Member 'AthenaGiftingScreen_BlockScreenContent::bBlockScreen' has a wrong offset!");
static_assert(offsetof(AthenaGiftingScreen_BlockScreenContent, ContentBlockedText) == 0x000008, "Member 'AthenaGiftingScreen_BlockScreenContent::ContentBlockedText' has a wrong offset!");

struct AthenaGiftingScreen_OnFilterChanged final
{
public:
	EFilterType                                   FilterType;
};
static_assert(alignof(AthenaGiftingScreen_OnFilterChanged) == 0x000001, "Wrong alignment on AthenaGiftingScreen_OnFilterChanged");
static_assert(sizeof(AthenaGiftingScreen_OnFilterChanged) == 0x000001, "Wrong size on AthenaGiftingScreen_OnFilterChanged");
static_assert(offsetof(AthenaGiftingScreen_OnFilterChanged, FilterType) == 0x000000, "Member 'AthenaGiftingScreen_OnFilterChanged::FilterType' has a wrong offset!");

struct AthenaGiftingScreen_OnPartyListUpdated final
{
public:
	bool                                          bEmpty;
};
static_assert(alignof(AthenaGiftingScreen_OnPartyListUpdated) == 0x000001, "Wrong alignment on AthenaGiftingScreen_OnPartyListUpdated");
static_assert(sizeof(AthenaGiftingScreen_OnPartyListUpdated) == 0x000001, "Wrong size on AthenaGiftingScreen_OnPartyListUpdated");
static_assert(offsetof(AthenaGiftingScreen_OnPartyListUpdated, bEmpty) == 0x000000, "Member 'AthenaGiftingScreen_OnPartyListUpdated::bEmpty' has a wrong offset!");

struct AthenaGiftingScreen_OnPresentationModeChanged final
{
public:
	EGiftingScreenPresentationMode                Mode;
};
static_assert(alignof(AthenaGiftingScreen_OnPresentationModeChanged) == 0x000001, "Wrong alignment on AthenaGiftingScreen_OnPresentationModeChanged");
static_assert(sizeof(AthenaGiftingScreen_OnPresentationModeChanged) == 0x000001, "Wrong size on AthenaGiftingScreen_OnPresentationModeChanged");
static_assert(offsetof(AthenaGiftingScreen_OnPresentationModeChanged, Mode) == 0x000000, "Member 'AthenaGiftingScreen_OnPresentationModeChanged::Mode' has a wrong offset!");

struct AthenaGiftingScreen_OnSetupFilterTabButton final
{
public:
	class UCommonButtonLegacy*                    Button;
	EFilterType                                   FilterType;
	uint8                                         Pad_9[0x7];
};
static_assert(alignof(AthenaGiftingScreen_OnSetupFilterTabButton) == 0x000008, "Wrong alignment on AthenaGiftingScreen_OnSetupFilterTabButton");
static_assert(sizeof(AthenaGiftingScreen_OnSetupFilterTabButton) == 0x000010, "Wrong size on AthenaGiftingScreen_OnSetupFilterTabButton");
static_assert(offsetof(AthenaGiftingScreen_OnSetupFilterTabButton, Button) == 0x000000, "Member 'AthenaGiftingScreen_OnSetupFilterTabButton::Button' has a wrong offset!");
static_assert(offsetof(AthenaGiftingScreen_OnSetupFilterTabButton, FilterType) == 0x000008, "Member 'AthenaGiftingScreen_OnSetupFilterTabButton::FilterType' has a wrong offset!");

struct AthenaGiftingScreen_OnShowSearchWarningText final
{
public:
	bool                                          bShow;
};
static_assert(alignof(AthenaGiftingScreen_OnShowSearchWarningText) == 0x000001, "Wrong alignment on AthenaGiftingScreen_OnShowSearchWarningText");
static_assert(sizeof(AthenaGiftingScreen_OnShowSearchWarningText) == 0x000001, "Wrong size on AthenaGiftingScreen_OnShowSearchWarningText");
static_assert(offsetof(AthenaGiftingScreen_OnShowSearchWarningText, bShow) == 0x000000, "Member 'AthenaGiftingScreen_OnShowSearchWarningText::bShow' has a wrong offset!");

struct FortGiftingSocialUserListEntry_BP_OnHighlightedStateChanged final
{
public:
	bool                                          bInIsHighlighted;
	bool                                          bPlayAnimation;
};
static_assert(alignof(FortGiftingSocialUserListEntry_BP_OnHighlightedStateChanged) == 0x000001, "Wrong alignment on FortGiftingSocialUserListEntry_BP_OnHighlightedStateChanged");
static_assert(sizeof(FortGiftingSocialUserListEntry_BP_OnHighlightedStateChanged) == 0x000002, "Wrong size on FortGiftingSocialUserListEntry_BP_OnHighlightedStateChanged");
static_assert(offsetof(FortGiftingSocialUserListEntry_BP_OnHighlightedStateChanged, bInIsHighlighted) == 0x000000, "Member 'FortGiftingSocialUserListEntry_BP_OnHighlightedStateChanged::bInIsHighlighted' has a wrong offset!");
static_assert(offsetof(FortGiftingSocialUserListEntry_BP_OnHighlightedStateChanged, bPlayAnimation) == 0x000001, "Member 'FortGiftingSocialUserListEntry_BP_OnHighlightedStateChanged::bPlayAnimation' has a wrong offset!");

struct FortGiftingSocialUserListEntry_SetPresentationMode final
{
public:
	ERecipientPresentationMode                    Mode;
};
static_assert(alignof(FortGiftingSocialUserListEntry_SetPresentationMode) == 0x000001, "Wrong alignment on FortGiftingSocialUserListEntry_SetPresentationMode");
static_assert(sizeof(FortGiftingSocialUserListEntry_SetPresentationMode) == 0x000001, "Wrong size on FortGiftingSocialUserListEntry_SetPresentationMode");
static_assert(offsetof(FortGiftingSocialUserListEntry_SetPresentationMode, Mode) == 0x000000, "Member 'FortGiftingSocialUserListEntry_SetPresentationMode::Mode' has a wrong offset!");

struct FortGiftingUserSearchWidget_HandleSearchFriendsTextChanged final
{
public:
	class FText                                   Text;
};
static_assert(alignof(FortGiftingUserSearchWidget_HandleSearchFriendsTextChanged) == 0x000008, "Wrong alignment on FortGiftingUserSearchWidget_HandleSearchFriendsTextChanged");
static_assert(sizeof(FortGiftingUserSearchWidget_HandleSearchFriendsTextChanged) == 0x000018, "Wrong size on FortGiftingUserSearchWidget_HandleSearchFriendsTextChanged");
static_assert(offsetof(FortGiftingUserSearchWidget_HandleSearchFriendsTextChanged, Text) == 0x000000, "Member 'FortGiftingUserSearchWidget_HandleSearchFriendsTextChanged::Text' has a wrong offset!");

struct FortGiftingUserSearchWidget_HandleSearchFriendsTextEntered final
{
public:
	class FText                                   Text;
	ETextCommit                                   CommitMethod;
	uint8                                         Pad_19[0x7];
};
static_assert(alignof(FortGiftingUserSearchWidget_HandleSearchFriendsTextEntered) == 0x000008, "Wrong alignment on FortGiftingUserSearchWidget_HandleSearchFriendsTextEntered");
static_assert(sizeof(FortGiftingUserSearchWidget_HandleSearchFriendsTextEntered) == 0x000020, "Wrong size on FortGiftingUserSearchWidget_HandleSearchFriendsTextEntered");
static_assert(offsetof(FortGiftingUserSearchWidget_HandleSearchFriendsTextEntered, Text) == 0x000000, "Member 'FortGiftingUserSearchWidget_HandleSearchFriendsTextEntered::Text' has a wrong offset!");
static_assert(offsetof(FortGiftingUserSearchWidget_HandleSearchFriendsTextEntered, CommitMethod) == 0x000018, "Member 'FortGiftingUserSearchWidget_HandleSearchFriendsTextEntered::CommitMethod' has a wrong offset!");

struct FortGiftingUserSearchWidget_OnSearchCommit final
{
public:
	bool                                          bSearchStringShort;
};
static_assert(alignof(FortGiftingUserSearchWidget_OnSearchCommit) == 0x000001, "Wrong alignment on FortGiftingUserSearchWidget_OnSearchCommit");
static_assert(sizeof(FortGiftingUserSearchWidget_OnSearchCommit) == 0x000001, "Wrong size on FortGiftingUserSearchWidget_OnSearchCommit");
static_assert(offsetof(FortGiftingUserSearchWidget_OnSearchCommit, bSearchStringShort) == 0x000000, "Member 'FortGiftingUserSearchWidget_OnSearchCommit::bSearchStringShort' has a wrong offset!");

}
