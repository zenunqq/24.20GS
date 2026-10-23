#pragma once

#include "Basic.hpp"

#include "ItemReceivedHeaderSubWidgetBase_classes.hpp"
#include "ItemReceivedHeaderSubWidgetBase_parameters.hpp"

namespace SDK
{

void UItemReceivedHeaderSubWidgetBase_C::ExecuteUbergraph_ItemReceivedHeaderSubWidgetBase(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ItemReceivedHeaderSubWidgetBase_C", "ExecuteUbergraph_ItemReceivedHeaderSubWidgetBase");

	Params::ItemReceivedHeaderSubWidgetBase_C_ExecuteUbergraph_ItemReceivedHeaderSubWidgetBase Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

void UItemReceivedHeaderSubWidgetBase_C::InitFromGiftBoxItem_BP()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ItemReceivedHeaderSubWidgetBase_C", "InitFromGiftBoxItem_BP");

	UObject::ProcessEvent(Func, nullptr);
}

void UItemReceivedHeaderSubWidgetBase_C::SetBlueprintGiftBoxItem(class UFortGiftBoxItem* GiftBox, const class FString& FromUser, const TArray<struct FFortReceivedItemLootInfo>& ItemDefs_0, bool bSelfGift_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ItemReceivedHeaderSubWidgetBase_C", "SetBlueprintGiftBoxItem");

	Params::ItemReceivedHeaderSubWidgetBase_C_SetBlueprintGiftBoxItem Parms{};

	Parms.GiftBox = GiftBox;
	Parms.FromUser = std::move(FromUser);
	Parms.ItemDefs_0 = std::move(ItemDefs_0);
	Parms.bSelfGift_0 = bSelfGift_0;

	UObject::ProcessEvent(Func, &Parms);
}

}
