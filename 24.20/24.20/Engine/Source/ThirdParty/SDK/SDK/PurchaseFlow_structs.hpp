#pragma once

#include "Basic.hpp"

namespace SDK
{

struct FPurchaseFlowItem final
{
public:
	class FString                                 ItemId;
	class FString                                 EntitlementId;
	class FString                                 ValidationInfo;
};
static_assert(alignof(FPurchaseFlowItem) == 0x000008, "Wrong alignment on FPurchaseFlowItem");
static_assert(sizeof(FPurchaseFlowItem) == 0x000030, "Wrong size on FPurchaseFlowItem");
static_assert(offsetof(FPurchaseFlowItem, ItemId) == 0x000000, "Member 'FPurchaseFlowItem::ItemId' has a wrong offset!");
static_assert(offsetof(FPurchaseFlowItem, EntitlementId) == 0x000010, "Member 'FPurchaseFlowItem::EntitlementId' has a wrong offset!");
static_assert(offsetof(FPurchaseFlowItem, ValidationInfo) == 0x000020, "Member 'FPurchaseFlowItem::ValidationInfo' has a wrong offset!");

struct FPurchaseFlowOffer final
{
public:
	class FString                                 OfferNamespace;
	class FString                                 OfferId;
	int32                                         Quantity;
	uint8                                         Pad_24[0x4];
	TArray<struct FPurchaseFlowItem>              Items;
};
static_assert(alignof(FPurchaseFlowOffer) == 0x000008, "Wrong alignment on FPurchaseFlowOffer");
static_assert(sizeof(FPurchaseFlowOffer) == 0x000038, "Wrong size on FPurchaseFlowOffer");
static_assert(offsetof(FPurchaseFlowOffer, OfferNamespace) == 0x000000, "Member 'FPurchaseFlowOffer::OfferNamespace' has a wrong offset!");
static_assert(offsetof(FPurchaseFlowOffer, OfferId) == 0x000010, "Member 'FPurchaseFlowOffer::OfferId' has a wrong offset!");
static_assert(offsetof(FPurchaseFlowOffer, Quantity) == 0x000020, "Member 'FPurchaseFlowOffer::Quantity' has a wrong offset!");
static_assert(offsetof(FPurchaseFlowOffer, Items) == 0x000028, "Member 'FPurchaseFlowOffer::Items' has a wrong offset!");

struct FPurchaseFlowReceiptParam final
{
public:
	class FString                                 TransactionId;
	class FString                                 TransactionState;
	TArray<struct FPurchaseFlowOffer>             Offers;
};
static_assert(alignof(FPurchaseFlowReceiptParam) == 0x000008, "Wrong alignment on FPurchaseFlowReceiptParam");
static_assert(sizeof(FPurchaseFlowReceiptParam) == 0x000030, "Wrong size on FPurchaseFlowReceiptParam");
static_assert(offsetof(FPurchaseFlowReceiptParam, TransactionId) == 0x000000, "Member 'FPurchaseFlowReceiptParam::TransactionId' has a wrong offset!");
static_assert(offsetof(FPurchaseFlowReceiptParam, TransactionState) == 0x000010, "Member 'FPurchaseFlowReceiptParam::TransactionState' has a wrong offset!");
static_assert(offsetof(FPurchaseFlowReceiptParam, Offers) == 0x000020, "Member 'FPurchaseFlowReceiptParam::Offers' has a wrong offset!");

}
