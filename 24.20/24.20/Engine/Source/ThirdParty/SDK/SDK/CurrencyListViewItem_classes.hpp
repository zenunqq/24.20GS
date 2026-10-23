#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_classes.hpp"

namespace SDK
{

class UCurrencyListViewItem_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;
	class UCommonRichTextBlock*                   CurrencyMessage;
	class FText                                   DisplayMessage;

public:
	void BP_OnEntryReleased();
	void BP_OnItemExpansionChanged(bool bIsExpanded);
	void BP_OnItemSelectionChanged(bool bIsSelected);
	void ExecuteUbergraph_CurrencyListViewItem(int32 EntryPoint);
	void OnListItemObjectSet(class UObject* ListItemObject);
	void SetQuantityAndType(int32 inInt, const class FText& To);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"CurrencyListViewItem_C">();
	}
	static class UCurrencyListViewItem_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UCurrencyListViewItem_C>();
	}
};
static_assert(alignof(UCurrencyListViewItem_C) == 0x000008, "Wrong alignment on UCurrencyListViewItem_C");
static_assert(sizeof(UCurrencyListViewItem_C) == 0x000290, "Wrong size on UCurrencyListViewItem_C");
static_assert(offsetof(UCurrencyListViewItem_C, UberGraphFrame) == 0x000268, "Member 'UCurrencyListViewItem_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UCurrencyListViewItem_C, CurrencyMessage) == 0x000270, "Member 'UCurrencyListViewItem_C::CurrencyMessage' has a wrong offset!");
static_assert(offsetof(UCurrencyListViewItem_C, DisplayMessage) == 0x000278, "Member 'UCurrencyListViewItem_C::DisplayMessage' has a wrong offset!");

}
