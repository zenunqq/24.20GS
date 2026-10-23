#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteUI_classes.hpp"
#include "SlateCore_structs.hpp"

namespace SDK
{

class UAthenaCustomizationPickerSortAndFilterBlade_C final : public UAthenaCustomizationPickerSortAndFilterBlade
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;
	class UWidgetAnimation*                       Anim_Open;
	class UCommonTextBlock*                       FilterByLabel;
	class UCommonTextBlock*                       SortByLabel;

public:
	void BP_HighlightSortOrFilterButton(class UCommonButtonBase* SortOrFilterButton, bool bHighlight);
	void BP_OnArchiveFilteringSet(bool bEnabled);
	void BP_OnBladeClose();
	void BP_OnBladeOpen();
	void BP_OnSortOrFilterButtonCreated(class UCommonButtonBase* NewButton);
	void BP_SetSortOrFilterButtonDisplayName(class UCommonButtonBase* SortOrFilterButton, const class FText& DisplayName);
	void ExecuteUbergraph_AthenaCustomizationPickerSortAndFilterBlade(int32 EntryPoint);
	void Finished_B61EB04E44460529171509A5523A917A();
	class UWidget* NavigateDownFromSortButtons(EUINavigation Navigation_0);
	class UWidget* NavigateUpFromFilterButtons(EUINavigation Navigation_0);
	void UpdateSortAndFilterButtons(bool bBladeOpen);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"AthenaCustomizationPickerSortAndFilterBlade_C">();
	}
	static class UAthenaCustomizationPickerSortAndFilterBlade_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAthenaCustomizationPickerSortAndFilterBlade_C>();
	}
};
static_assert(alignof(UAthenaCustomizationPickerSortAndFilterBlade_C) == 0x000008, "Wrong alignment on UAthenaCustomizationPickerSortAndFilterBlade_C");
static_assert(sizeof(UAthenaCustomizationPickerSortAndFilterBlade_C) == 0x0003C0, "Wrong size on UAthenaCustomizationPickerSortAndFilterBlade_C");
static_assert(offsetof(UAthenaCustomizationPickerSortAndFilterBlade_C, UberGraphFrame) == 0x0003A0, "Member 'UAthenaCustomizationPickerSortAndFilterBlade_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UAthenaCustomizationPickerSortAndFilterBlade_C, Anim_Open) == 0x0003A8, "Member 'UAthenaCustomizationPickerSortAndFilterBlade_C::Anim_Open' has a wrong offset!");
static_assert(offsetof(UAthenaCustomizationPickerSortAndFilterBlade_C, FilterByLabel) == 0x0003B0, "Member 'UAthenaCustomizationPickerSortAndFilterBlade_C::FilterByLabel' has a wrong offset!");
static_assert(offsetof(UAthenaCustomizationPickerSortAndFilterBlade_C, SortByLabel) == 0x0003B8, "Member 'UAthenaCustomizationPickerSortAndFilterBlade_C::SortByLabel' has a wrong offset!");

}
