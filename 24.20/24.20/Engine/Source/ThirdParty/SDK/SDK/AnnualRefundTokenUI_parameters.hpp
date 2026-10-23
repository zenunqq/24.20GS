#pragma once

#include "Basic.hpp"

#include "AnnualRefundTokenUI_structs.hpp"

namespace SDK::Params
{

struct FortAnnualRefundTicket_OnUpdateAvailableState final
{
public:
	bool                                          bIsAvailable;
};
static_assert(alignof(FortAnnualRefundTicket_OnUpdateAvailableState) == 0x000001, "Wrong alignment on FortAnnualRefundTicket_OnUpdateAvailableState");
static_assert(sizeof(FortAnnualRefundTicket_OnUpdateAvailableState) == 0x000001, "Wrong size on FortAnnualRefundTicket_OnUpdateAvailableState");
static_assert(offsetof(FortAnnualRefundTicket_OnUpdateAvailableState, bIsAvailable) == 0x000000, "Member 'FortAnnualRefundTicket_OnUpdateAvailableState::bIsAvailable' has a wrong offset!");

struct FortAnnualRefundTicket_OnUpdatePendingState final
{
public:
	bool                                          bIsPending;
};
static_assert(alignof(FortAnnualRefundTicket_OnUpdatePendingState) == 0x000001, "Wrong alignment on FortAnnualRefundTicket_OnUpdatePendingState");
static_assert(sizeof(FortAnnualRefundTicket_OnUpdatePendingState) == 0x000001, "Wrong size on FortAnnualRefundTicket_OnUpdatePendingState");
static_assert(offsetof(FortAnnualRefundTicket_OnUpdatePendingState, bIsPending) == 0x000000, "Member 'FortAnnualRefundTicket_OnUpdatePendingState::bIsPending' has a wrong offset!");

struct FortPurchaseHistoryEntry_OnSetHistory final
{
public:
	bool                                          bHasBeenRefunded;
	bool                                          bIsTokenlessRefund;
	bool                                          bPlayerHasTokens;
	bool                                          bNonRefundable;
};
static_assert(alignof(FortPurchaseHistoryEntry_OnSetHistory) == 0x000001, "Wrong alignment on FortPurchaseHistoryEntry_OnSetHistory");
static_assert(sizeof(FortPurchaseHistoryEntry_OnSetHistory) == 0x000004, "Wrong size on FortPurchaseHistoryEntry_OnSetHistory");
static_assert(offsetof(FortPurchaseHistoryEntry_OnSetHistory, bHasBeenRefunded) == 0x000000, "Member 'FortPurchaseHistoryEntry_OnSetHistory::bHasBeenRefunded' has a wrong offset!");
static_assert(offsetof(FortPurchaseHistoryEntry_OnSetHistory, bIsTokenlessRefund) == 0x000001, "Member 'FortPurchaseHistoryEntry_OnSetHistory::bIsTokenlessRefund' has a wrong offset!");
static_assert(offsetof(FortPurchaseHistoryEntry_OnSetHistory, bPlayerHasTokens) == 0x000002, "Member 'FortPurchaseHistoryEntry_OnSetHistory::bPlayerHasTokens' has a wrong offset!");
static_assert(offsetof(FortPurchaseHistoryEntry_OnSetHistory, bNonRefundable) == 0x000003, "Member 'FortPurchaseHistoryEntry_OnSetHistory::bNonRefundable' has a wrong offset!");

struct FortPurchaseHistoryEntry_SetPurchaseText final
{
public:
	class FText                                   PurchaseDateText;
	class FText                                   RefundDateText;
	bool                                          bHasBeenRefunded;
	EFortPurchaseHistoryRefundType                RefundType;
	uint8                                         Pad_32[0x6];
};
static_assert(alignof(FortPurchaseHistoryEntry_SetPurchaseText) == 0x000008, "Wrong alignment on FortPurchaseHistoryEntry_SetPurchaseText");
static_assert(sizeof(FortPurchaseHistoryEntry_SetPurchaseText) == 0x000038, "Wrong size on FortPurchaseHistoryEntry_SetPurchaseText");
static_assert(offsetof(FortPurchaseHistoryEntry_SetPurchaseText, PurchaseDateText) == 0x000000, "Member 'FortPurchaseHistoryEntry_SetPurchaseText::PurchaseDateText' has a wrong offset!");
static_assert(offsetof(FortPurchaseHistoryEntry_SetPurchaseText, RefundDateText) == 0x000018, "Member 'FortPurchaseHistoryEntry_SetPurchaseText::RefundDateText' has a wrong offset!");
static_assert(offsetof(FortPurchaseHistoryEntry_SetPurchaseText, bHasBeenRefunded) == 0x000030, "Member 'FortPurchaseHistoryEntry_SetPurchaseText::bHasBeenRefunded' has a wrong offset!");
static_assert(offsetof(FortPurchaseHistoryEntry_SetPurchaseText, RefundType) == 0x000031, "Member 'FortPurchaseHistoryEntry_SetPurchaseText::RefundType' has a wrong offset!");

struct FortPurchaseHistoryEntry_SetupItemCard final
{
public:
	const class UFortCosmeticItemCard*            ItemCard;
	const class UFortItem*                        Item;
};
static_assert(alignof(FortPurchaseHistoryEntry_SetupItemCard) == 0x000008, "Wrong alignment on FortPurchaseHistoryEntry_SetupItemCard");
static_assert(sizeof(FortPurchaseHistoryEntry_SetupItemCard) == 0x000010, "Wrong size on FortPurchaseHistoryEntry_SetupItemCard");
static_assert(offsetof(FortPurchaseHistoryEntry_SetupItemCard, ItemCard) == 0x000000, "Member 'FortPurchaseHistoryEntry_SetupItemCard::ItemCard' has a wrong offset!");
static_assert(offsetof(FortPurchaseHistoryEntry_SetupItemCard, Item) == 0x000008, "Member 'FortPurchaseHistoryEntry_SetupItemCard::Item' has a wrong offset!");

struct FortPurchaseHistoryEntry_UpdateItemList final
{
public:
	TArray<class UFortCosmeticItemCard*>          ItemCards;
};
static_assert(alignof(FortPurchaseHistoryEntry_UpdateItemList) == 0x000008, "Wrong alignment on FortPurchaseHistoryEntry_UpdateItemList");
static_assert(sizeof(FortPurchaseHistoryEntry_UpdateItemList) == 0x000010, "Wrong size on FortPurchaseHistoryEntry_UpdateItemList");
static_assert(offsetof(FortPurchaseHistoryEntry_UpdateItemList, ItemCards) == 0x000000, "Member 'FortPurchaseHistoryEntry_UpdateItemList::ItemCards' has a wrong offset!");

struct FortPurchaseHistoryScreen_BP_IsShowingPurchases final
{
public:
	bool                                          ReturnValue;
};
static_assert(alignof(FortPurchaseHistoryScreen_BP_IsShowingPurchases) == 0x000001, "Wrong alignment on FortPurchaseHistoryScreen_BP_IsShowingPurchases");
static_assert(sizeof(FortPurchaseHistoryScreen_BP_IsShowingPurchases) == 0x000001, "Wrong size on FortPurchaseHistoryScreen_BP_IsShowingPurchases");
static_assert(offsetof(FortPurchaseHistoryScreen_BP_IsShowingPurchases, ReturnValue) == 0x000000, "Member 'FortPurchaseHistoryScreen_BP_IsShowingPurchases::ReturnValue' has a wrong offset!");

struct FortRefundConfirmation_BP_UpdateItemsList final
{
public:
	TArray<class UFortItemDefinition*>            SelectedItemDefs;
	int32                                         TotalMtxPaid;
	uint8                                         Pad_14[0x4];
};
static_assert(alignof(FortRefundConfirmation_BP_UpdateItemsList) == 0x000008, "Wrong alignment on FortRefundConfirmation_BP_UpdateItemsList");
static_assert(sizeof(FortRefundConfirmation_BP_UpdateItemsList) == 0x000018, "Wrong size on FortRefundConfirmation_BP_UpdateItemsList");
static_assert(offsetof(FortRefundConfirmation_BP_UpdateItemsList, SelectedItemDefs) == 0x000000, "Member 'FortRefundConfirmation_BP_UpdateItemsList::SelectedItemDefs' has a wrong offset!");
static_assert(offsetof(FortRefundConfirmation_BP_UpdateItemsList, TotalMtxPaid) == 0x000010, "Member 'FortRefundConfirmation_BP_UpdateItemsList::TotalMtxPaid' has a wrong offset!");

struct FortRefundConfirmation_BP_UpdateRefundType final
{
public:
	EFortPurchaseHistoryRefundType                RefundType;
};
static_assert(alignof(FortRefundConfirmation_BP_UpdateRefundType) == 0x000001, "Wrong alignment on FortRefundConfirmation_BP_UpdateRefundType");
static_assert(sizeof(FortRefundConfirmation_BP_UpdateRefundType) == 0x000001, "Wrong size on FortRefundConfirmation_BP_UpdateRefundType");
static_assert(offsetof(FortRefundConfirmation_BP_UpdateRefundType, RefundType) == 0x000000, "Member 'FortRefundConfirmation_BP_UpdateRefundType::RefundType' has a wrong offset!");

}
