#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteGame_structs.hpp"
#include "ItemReceivedHeaderSubWidgetBase_classes.hpp"

namespace SDK
{

class UItemReceivedCurrencyHeader_C final : public UItemReceivedHeaderSubWidgetBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_ItemReceivedCurrencyHeader_C;
	class UCommonTextBlock*                       BattlepassTier;
	class UCommonTextBlock*                       BattlepassUpgraded;
	class UCommonWidgetSwitcherLegacy*            CommonWidgetSwitcher_Icon;
	class UCommonWidgetSwitcherLegacy*            CommonWidgetSwitcher_Title;
	class UCurrencyListView_C*                    CurrencyListView_82;
	class UImage*                                 ImageBattlePassIconGold;
	class UImage*                                 ImageBattlePassIconSilver;
	class UItemReceivedAccountWidget_C*           ItemReceivedAccountWidget;
	TMulticastInlineDelegate<void(class UFortGiftBoxItem* GiftBox, TArray<struct FCurrencyData>& CurrencyArray)> ActivateWidgetFromPresentationScreen;
	bool                                          AlreadyActivated;

public:
	void ActiveFromPresentation(const struct FCurrencyDataWithGiftBox& CurrencyDataArray);
	void ExecuteUbergraph_ItemReceivedCurrencyHeader(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"ItemReceivedCurrencyHeader_C">();
	}
	static class UItemReceivedCurrencyHeader_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UItemReceivedCurrencyHeader_C>();
	}
};
static_assert(alignof(UItemReceivedCurrencyHeader_C) == 0x000008, "Wrong alignment on UItemReceivedCurrencyHeader_C");
static_assert(sizeof(UItemReceivedCurrencyHeader_C) == 0x000318, "Wrong size on UItemReceivedCurrencyHeader_C");
static_assert(offsetof(UItemReceivedCurrencyHeader_C, UberGraphFrame_ItemReceivedCurrencyHeader_C) == 0x0002B8, "Member 'UItemReceivedCurrencyHeader_C::UberGraphFrame_ItemReceivedCurrencyHeader_C' has a wrong offset!");
static_assert(offsetof(UItemReceivedCurrencyHeader_C, BattlepassTier) == 0x0002C0, "Member 'UItemReceivedCurrencyHeader_C::BattlepassTier' has a wrong offset!");
static_assert(offsetof(UItemReceivedCurrencyHeader_C, BattlepassUpgraded) == 0x0002C8, "Member 'UItemReceivedCurrencyHeader_C::BattlepassUpgraded' has a wrong offset!");
static_assert(offsetof(UItemReceivedCurrencyHeader_C, CommonWidgetSwitcher_Icon) == 0x0002D0, "Member 'UItemReceivedCurrencyHeader_C::CommonWidgetSwitcher_Icon' has a wrong offset!");
static_assert(offsetof(UItemReceivedCurrencyHeader_C, CommonWidgetSwitcher_Title) == 0x0002D8, "Member 'UItemReceivedCurrencyHeader_C::CommonWidgetSwitcher_Title' has a wrong offset!");
static_assert(offsetof(UItemReceivedCurrencyHeader_C, CurrencyListView_82) == 0x0002E0, "Member 'UItemReceivedCurrencyHeader_C::CurrencyListView_82' has a wrong offset!");
static_assert(offsetof(UItemReceivedCurrencyHeader_C, ImageBattlePassIconGold) == 0x0002E8, "Member 'UItemReceivedCurrencyHeader_C::ImageBattlePassIconGold' has a wrong offset!");
static_assert(offsetof(UItemReceivedCurrencyHeader_C, ImageBattlePassIconSilver) == 0x0002F0, "Member 'UItemReceivedCurrencyHeader_C::ImageBattlePassIconSilver' has a wrong offset!");
static_assert(offsetof(UItemReceivedCurrencyHeader_C, ItemReceivedAccountWidget) == 0x0002F8, "Member 'UItemReceivedCurrencyHeader_C::ItemReceivedAccountWidget' has a wrong offset!");
static_assert(offsetof(UItemReceivedCurrencyHeader_C, ActivateWidgetFromPresentationScreen) == 0x000300, "Member 'UItemReceivedCurrencyHeader_C::ActivateWidgetFromPresentationScreen' has a wrong offset!");
static_assert(offsetof(UItemReceivedCurrencyHeader_C, AlreadyActivated) == 0x000310, "Member 'UItemReceivedCurrencyHeader_C::AlreadyActivated' has a wrong offset!");

}
