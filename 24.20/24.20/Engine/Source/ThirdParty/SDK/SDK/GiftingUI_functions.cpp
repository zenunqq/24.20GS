#pragma once

#include "Basic.hpp"

#include "GiftingUI_classes.hpp"
#include "GiftingUI_parameters.hpp"

namespace SDK
{

void UAthenaGiftingConfirmationScreen::Dismiss(const bool bGiftConfirmed)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaGiftingConfirmationScreen", "Dismiss");

	Params::AthenaGiftingConfirmationScreen_Dismiss Parms{};

	Parms.bGiftConfirmed = bGiftConfirmed;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UAthenaGiftingConfirmationScreen::HandleGiftSent(bool bSuccess, const TArray<class FString>& IneligibleAccounts, const TArray<class FString>& ErrorCodes)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaGiftingConfirmationScreen", "HandleGiftSent");

	Params::AthenaGiftingConfirmationScreen_HandleGiftSent Parms{};

	Parms.bSuccess = bSuccess;
	Parms.IneligibleAccounts = std::move(IneligibleAccounts);
	Parms.ErrorCodes = std::move(ErrorCodes);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UAthenaGiftingConfirmationScreen::HandleTokenOfferPurchaseComplete(bool bSuccess, const TArray<struct FPurchasedItemInfo>& PurchasedItems)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaGiftingConfirmationScreen", "HandleTokenOfferPurchaseComplete");

	Params::AthenaGiftingConfirmationScreen_HandleTokenOfferPurchaseComplete Parms{};

	Parms.bSuccess = bSuccess;
	Parms.PurchasedItems = std::move(PurchasedItems);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UAthenaGiftingConfirmationScreen::OnPresentationModeChanged(EGiftingPresentationMode NewMode)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaGiftingConfirmationScreen", "OnPresentationModeChanged");

	Params::AthenaGiftingConfirmationScreen_OnPresentationModeChanged Parms{};

	Parms.NewMode = NewMode;

	UObject::ProcessEvent(Func, &Parms);
}

void UAthenaGiftingErrorsPanel::UpdateGiftEligibility(bool bStillGiftable)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaGiftingErrorsPanel", "UpdateGiftEligibility");

	Params::AthenaGiftingErrorsPanel_UpdateGiftEligibility Parms{};

	Parms.bStillGiftable = bStillGiftable;

	UObject::ProcessEvent(Func, &Parms);
}

void UAthenaGiftingPriceWidget::SetPresentationMode(EGiftingPricePresentationMode Mode)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaGiftingPriceWidget", "SetPresentationMode");

	Params::AthenaGiftingPriceWidget_SetPresentationMode Parms{};

	Parms.Mode = Mode;

	UObject::ProcessEvent(Func, &Parms);
}

void UAthenaGiftingPurchasePanel::PlayIntroAnimation()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaGiftingPurchasePanel", "PlayIntroAnimation");

	UObject::ProcessEvent(Func, nullptr);
}

void UAthenaGiftingScreen::BlockScreenContent(const bool bBlockScreen, const class FText& ContentBlockedText)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaGiftingScreen", "BlockScreenContent");

	Params::AthenaGiftingScreen_BlockScreenContent Parms{};

	Parms.bBlockScreen = bBlockScreen;
	Parms.ContentBlockedText = std::move(ContentBlockedText);

	UObject::ProcessEvent(Func, &Parms);
}

void UAthenaGiftingScreen::OnFilterChanged(EFilterType FilterType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaGiftingScreen", "OnFilterChanged");

	Params::AthenaGiftingScreen_OnFilterChanged Parms{};

	Parms.FilterType = FilterType;

	UObject::ProcessEvent(Func, &Parms);
}

void UAthenaGiftingScreen::OnFriendSelectionChanged()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaGiftingScreen", "OnFriendSelectionChanged");

	UObject::ProcessEvent(Func, nullptr);
}

void UAthenaGiftingScreen::OnPartyListUpdated(bool bEmpty)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaGiftingScreen", "OnPartyListUpdated");

	Params::AthenaGiftingScreen_OnPartyListUpdated Parms{};

	Parms.bEmpty = bEmpty;

	UObject::ProcessEvent(Func, &Parms);
}

void UAthenaGiftingScreen::OnPresentationModeChanged(EGiftingScreenPresentationMode Mode)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaGiftingScreen", "OnPresentationModeChanged");

	Params::AthenaGiftingScreen_OnPresentationModeChanged Parms{};

	Parms.Mode = Mode;

	UObject::ProcessEvent(Func, &Parms);
}

void UAthenaGiftingScreen::OnSetupFilterTabButton(class UCommonButtonLegacy* Button, EFilterType FilterType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaGiftingScreen", "OnSetupFilterTabButton");

	Params::AthenaGiftingScreen_OnSetupFilterTabButton Parms{};

	Parms.Button = Button;
	Parms.FilterType = FilterType;

	UObject::ProcessEvent(Func, &Parms);
}

void UAthenaGiftingScreen::OnShownItemChanged()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaGiftingScreen", "OnShownItemChanged");

	UObject::ProcessEvent(Func, nullptr);
}

void UAthenaGiftingScreen::OnShowSearchWarningText(bool bShow)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaGiftingScreen", "OnShowSearchWarningText");

	Params::AthenaGiftingScreen_OnShowSearchWarningText Parms{};

	Parms.bShow = bShow;

	UObject::ProcessEvent(Func, &Parms);
}

void UFortGiftingSocialUserListEntry::BP_OnHighlightedStateChanged(bool bInIsHighlighted, bool bPlayAnimation)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortGiftingSocialUserListEntry", "BP_OnHighlightedStateChanged");

	Params::FortGiftingSocialUserListEntry_BP_OnHighlightedStateChanged Parms{};

	Parms.bInIsHighlighted = bInIsHighlighted;
	Parms.bPlayAnimation = bPlayAnimation;

	UObject::ProcessEvent(Func, &Parms);
}

void UFortGiftingSocialUserListEntry::BP_OnTouchSelectionConfirmed()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortGiftingSocialUserListEntry", "BP_OnTouchSelectionConfirmed");

	UObject::ProcessEvent(Func, nullptr);
}

void UFortGiftingSocialUserListEntry::OnRecipientStatusUpdated()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortGiftingSocialUserListEntry", "OnRecipientStatusUpdated");

	UObject::ProcessEvent(Func, nullptr);
}

void UFortGiftingSocialUserListEntry::OnUserItemSet()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortGiftingSocialUserListEntry", "OnUserItemSet");

	UObject::ProcessEvent(Func, nullptr);
}

void UFortGiftingSocialUserListEntry::SetPresentationMode(ERecipientPresentationMode Mode)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortGiftingSocialUserListEntry", "SetPresentationMode");

	Params::FortGiftingSocialUserListEntry_SetPresentationMode Parms{};

	Parms.Mode = Mode;

	UObject::ProcessEvent(Func, &Parms);
}

void UFortGiftingUserSearchWidget::FocusEditableText()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortGiftingUserSearchWidget", "FocusEditableText");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void UFortGiftingUserSearchWidget::HandleSearchFriendsTextChanged(const class FText& Text)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortGiftingUserSearchWidget", "HandleSearchFriendsTextChanged");

	Params::FortGiftingUserSearchWidget_HandleSearchFriendsTextChanged Parms{};

	Parms.Text = std::move(Text);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UFortGiftingUserSearchWidget::HandleSearchFriendsTextEntered(const class FText& Text, ETextCommit CommitMethod)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortGiftingUserSearchWidget", "HandleSearchFriendsTextEntered");

	Params::FortGiftingUserSearchWidget_HandleSearchFriendsTextEntered Parms{};

	Parms.Text = std::move(Text);
	Parms.CommitMethod = CommitMethod;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UFortGiftingUserSearchWidget::OnSearchCommit(bool bSearchStringShort)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortGiftingUserSearchWidget", "OnSearchCommit");

	Params::FortGiftingUserSearchWidget_OnSearchCommit Parms{};

	Parms.bSearchStringShort = bSearchStringShort;

	UObject::ProcessEvent(Func, &Parms);
}

}
