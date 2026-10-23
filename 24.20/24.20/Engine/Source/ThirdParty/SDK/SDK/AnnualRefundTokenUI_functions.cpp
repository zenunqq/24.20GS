#pragma once

#include "Basic.hpp"

#include "AnnualRefundTokenUI_classes.hpp"
#include "AnnualRefundTokenUI_parameters.hpp"

namespace SDK
{

void UFortAnnualRefundTicket::OnPlayLockingAnimation()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortAnnualRefundTicket", "OnPlayLockingAnimation");

	UObject::ProcessEvent(Func, nullptr);
}

void UFortAnnualRefundTicket::OnUpdateAvailableState(const bool bIsAvailable)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortAnnualRefundTicket", "OnUpdateAvailableState");

	Params::FortAnnualRefundTicket_OnUpdateAvailableState Parms{};

	Parms.bIsAvailable = bIsAvailable;

	UObject::ProcessEvent(Func, &Parms);
}

void UFortAnnualRefundTicket::OnUpdatePendingState(const bool bIsPending)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortAnnualRefundTicket", "OnUpdatePendingState");

	Params::FortAnnualRefundTicket_OnUpdatePendingState Parms{};

	Parms.bIsPending = bIsPending;

	UObject::ProcessEvent(Func, &Parms);
}

void UFortPurchaseHistoryEntry::OnSetHistory(bool bHasBeenRefunded, bool bIsTokenlessRefund, bool bPlayerHasTokens, bool bNonRefundable)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortPurchaseHistoryEntry", "OnSetHistory");

	Params::FortPurchaseHistoryEntry_OnSetHistory Parms{};

	Parms.bHasBeenRefunded = bHasBeenRefunded;
	Parms.bIsTokenlessRefund = bIsTokenlessRefund;
	Parms.bPlayerHasTokens = bPlayerHasTokens;
	Parms.bNonRefundable = bNonRefundable;

	UObject::ProcessEvent(Func, &Parms);
}

void UFortPurchaseHistoryEntry::SetPurchaseText(const class FText& PurchaseDateText, const class FText& RefundDateText, bool bHasBeenRefunded, const EFortPurchaseHistoryRefundType RefundType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortPurchaseHistoryEntry", "SetPurchaseText");

	Params::FortPurchaseHistoryEntry_SetPurchaseText Parms{};

	Parms.PurchaseDateText = std::move(PurchaseDateText);
	Parms.RefundDateText = std::move(RefundDateText);
	Parms.bHasBeenRefunded = bHasBeenRefunded;
	Parms.RefundType = RefundType;

	UObject::ProcessEvent(Func, &Parms);
}

void UFortPurchaseHistoryEntry::SetupItemCard(const class UFortCosmeticItemCard* ItemCard, const class UFortItem* Item)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortPurchaseHistoryEntry", "SetupItemCard");

	Params::FortPurchaseHistoryEntry_SetupItemCard Parms{};

	Parms.ItemCard = ItemCard;
	Parms.Item = Item;

	UObject::ProcessEvent(Func, &Parms);
}

void UFortPurchaseHistoryEntry::UpdateItemList(const TArray<class UFortCosmeticItemCard*>& ItemCards)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortPurchaseHistoryEntry", "UpdateItemList");

	Params::FortPurchaseHistoryEntry_UpdateItemList Parms{};

	Parms.ItemCards = std::move(ItemCards);

	UObject::ProcessEvent(Func, &Parms);
}

bool UFortPurchaseHistoryScreen::BP_IsShowingPurchases()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortPurchaseHistoryScreen", "BP_IsShowingPurchases");

	Params::FortPurchaseHistoryScreen_BP_IsShowingPurchases Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

void UFortPurchaseHistoryScreen::OnBeginRefundSubmission()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortPurchaseHistoryScreen", "OnBeginRefundSubmission");

	UObject::ProcessEvent(Func, nullptr);
}

void UFortPurchaseHistoryScreen::OnEndRefundSubmission()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortPurchaseHistoryScreen", "OnEndRefundSubmission");

	UObject::ProcessEvent(Func, nullptr);
}

void UFortPurchaseHistoryScreen::OnNoPurchasesAvailable()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortPurchaseHistoryScreen", "OnNoPurchasesAvailable");

	UObject::ProcessEvent(Func, nullptr);
}

void UFortPurchaseHistoryScreen::OnPopulateView()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortPurchaseHistoryScreen", "OnPopulateView");

	UObject::ProcessEvent(Func, nullptr);
}

void UFortRefundConfirmation::BP_UpdateItemsList(const TArray<class UFortItemDefinition*>& SelectedItemDefs, const int32 TotalMtxPaid)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortRefundConfirmation", "BP_UpdateItemsList");

	Params::FortRefundConfirmation_BP_UpdateItemsList Parms{};

	Parms.SelectedItemDefs = std::move(SelectedItemDefs);
	Parms.TotalMtxPaid = TotalMtxPaid;

	UObject::ProcessEvent(Func, &Parms);
}

void UFortRefundConfirmation::BP_UpdateRefundType(const EFortPurchaseHistoryRefundType RefundType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortRefundConfirmation", "BP_UpdateRefundType");

	Params::FortRefundConfirmation_BP_UpdateRefundType Parms{};

	Parms.RefundType = RefundType;

	UObject::ProcessEvent(Func, &Parms);
}

}
