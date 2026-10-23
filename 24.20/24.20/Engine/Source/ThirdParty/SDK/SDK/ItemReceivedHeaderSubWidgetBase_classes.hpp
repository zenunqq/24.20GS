#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteUI_structs.hpp"
#include "FortniteUI_classes.hpp"

namespace SDK
{

class UItemReceivedHeaderSubWidgetBase_C : public UItemReceivedHeaderBase
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;
	class UFortGiftBoxItem*                       GiftBoxItem_BP;
	class FString                                 FromUserName_BP;
	TArray<struct FFortReceivedItemLootInfo>      ItemDefs;
	bool                                          bSelfGift;

public:
	void ExecuteUbergraph_ItemReceivedHeaderSubWidgetBase(int32 EntryPoint);
	void InitFromGiftBoxItem_BP();
	void SetBlueprintGiftBoxItem(class UFortGiftBoxItem* GiftBox, const class FString& FromUser, const TArray<struct FFortReceivedItemLootInfo>& ItemDefs_0, bool bSelfGift_0);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"ItemReceivedHeaderSubWidgetBase_C">();
	}
	static class UItemReceivedHeaderSubWidgetBase_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UItemReceivedHeaderSubWidgetBase_C>();
	}
};
static_assert(alignof(UItemReceivedHeaderSubWidgetBase_C) == 0x000008, "Wrong alignment on UItemReceivedHeaderSubWidgetBase_C");
static_assert(sizeof(UItemReceivedHeaderSubWidgetBase_C) == 0x0002B8, "Wrong size on UItemReceivedHeaderSubWidgetBase_C");
static_assert(offsetof(UItemReceivedHeaderSubWidgetBase_C, UberGraphFrame) == 0x000280, "Member 'UItemReceivedHeaderSubWidgetBase_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UItemReceivedHeaderSubWidgetBase_C, GiftBoxItem_BP) == 0x000288, "Member 'UItemReceivedHeaderSubWidgetBase_C::GiftBoxItem_BP' has a wrong offset!");
static_assert(offsetof(UItemReceivedHeaderSubWidgetBase_C, FromUserName_BP) == 0x000290, "Member 'UItemReceivedHeaderSubWidgetBase_C::FromUserName_BP' has a wrong offset!");
static_assert(offsetof(UItemReceivedHeaderSubWidgetBase_C, ItemDefs) == 0x0002A0, "Member 'UItemReceivedHeaderSubWidgetBase_C::ItemDefs' has a wrong offset!");
static_assert(offsetof(UItemReceivedHeaderSubWidgetBase_C, bSelfGift) == 0x0002B0, "Member 'UItemReceivedHeaderSubWidgetBase_C::bSelfGift' has a wrong offset!");

}
