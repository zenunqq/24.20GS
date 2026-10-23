#pragma once

#include "Basic.hpp"

#include "FortniteUI_structs.hpp"

namespace SDK::Params
{

struct ItemReceivedHeaderSubWidgetBase_C_ExecuteUbergraph_ItemReceivedHeaderSubWidgetBase final
{
public:
	int32                                         EntryPoint;
};
static_assert(alignof(ItemReceivedHeaderSubWidgetBase_C_ExecuteUbergraph_ItemReceivedHeaderSubWidgetBase) == 0x000004, "Wrong alignment on ItemReceivedHeaderSubWidgetBase_C_ExecuteUbergraph_ItemReceivedHeaderSubWidgetBase");
static_assert(sizeof(ItemReceivedHeaderSubWidgetBase_C_ExecuteUbergraph_ItemReceivedHeaderSubWidgetBase) == 0x000004, "Wrong size on ItemReceivedHeaderSubWidgetBase_C_ExecuteUbergraph_ItemReceivedHeaderSubWidgetBase");
static_assert(offsetof(ItemReceivedHeaderSubWidgetBase_C_ExecuteUbergraph_ItemReceivedHeaderSubWidgetBase, EntryPoint) == 0x000000, "Member 'ItemReceivedHeaderSubWidgetBase_C_ExecuteUbergraph_ItemReceivedHeaderSubWidgetBase::EntryPoint' has a wrong offset!");

struct ItemReceivedHeaderSubWidgetBase_C_SetBlueprintGiftBoxItem final
{
public:
	class UFortGiftBoxItem*                       GiftBox;
	class FString                                 FromUser;
	TArray<struct FFortReceivedItemLootInfo>      ItemDefs_0;
	bool                                          bSelfGift_0;
};
static_assert(alignof(ItemReceivedHeaderSubWidgetBase_C_SetBlueprintGiftBoxItem) == 0x000008, "Wrong alignment on ItemReceivedHeaderSubWidgetBase_C_SetBlueprintGiftBoxItem");
static_assert(sizeof(ItemReceivedHeaderSubWidgetBase_C_SetBlueprintGiftBoxItem) == 0x000030, "Wrong size on ItemReceivedHeaderSubWidgetBase_C_SetBlueprintGiftBoxItem");
static_assert(offsetof(ItemReceivedHeaderSubWidgetBase_C_SetBlueprintGiftBoxItem, GiftBox) == 0x000000, "Member 'ItemReceivedHeaderSubWidgetBase_C_SetBlueprintGiftBoxItem::GiftBox' has a wrong offset!");
static_assert(offsetof(ItemReceivedHeaderSubWidgetBase_C_SetBlueprintGiftBoxItem, FromUser) == 0x000008, "Member 'ItemReceivedHeaderSubWidgetBase_C_SetBlueprintGiftBoxItem::FromUser' has a wrong offset!");
static_assert(offsetof(ItemReceivedHeaderSubWidgetBase_C_SetBlueprintGiftBoxItem, ItemDefs_0) == 0x000018, "Member 'ItemReceivedHeaderSubWidgetBase_C_SetBlueprintGiftBoxItem::ItemDefs_0' has a wrong offset!");
static_assert(offsetof(ItemReceivedHeaderSubWidgetBase_C_SetBlueprintGiftBoxItem, bSelfGift_0) == 0x000028, "Member 'ItemReceivedHeaderSubWidgetBase_C_SetBlueprintGiftBoxItem::bSelfGift_0' has a wrong offset!");

}
