#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteUI_classes.hpp"

namespace SDK
{

class UAthenaItemTextureVariantPicker_C final : public UFortVariantItemTexturePicker
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;
	class UCommonRichTextBlock*                   TextBlock_AllItemsArchived;
	class UWidgetSwitcher*                        WidgetSwitcher_AvailableItems;

public:
	void OnToggleAllItemsArchivedMessage(bool bDisplay);
	void ExecuteUbergraph_AthenaItemTextureVariantPicker(int32 EntryPoint);
	void Construct();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"AthenaItemTextureVariantPicker_C">();
	}
	static class UAthenaItemTextureVariantPicker_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAthenaItemTextureVariantPicker_C>();
	}
};
static_assert(alignof(UAthenaItemTextureVariantPicker_C) == 0x000010, "Wrong alignment on UAthenaItemTextureVariantPicker_C");
static_assert(sizeof(UAthenaItemTextureVariantPicker_C) == 0x000490, "Wrong size on UAthenaItemTextureVariantPicker_C");
static_assert(offsetof(UAthenaItemTextureVariantPicker_C, UberGraphFrame) == 0x000470, "Member 'UAthenaItemTextureVariantPicker_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UAthenaItemTextureVariantPicker_C, TextBlock_AllItemsArchived) == 0x000478, "Member 'UAthenaItemTextureVariantPicker_C::TextBlock_AllItemsArchived' has a wrong offset!");
static_assert(offsetof(UAthenaItemTextureVariantPicker_C, WidgetSwitcher_AvailableItems) == 0x000480, "Member 'UAthenaItemTextureVariantPicker_C::WidgetSwitcher_AvailableItems' has a wrong offset!");

}
