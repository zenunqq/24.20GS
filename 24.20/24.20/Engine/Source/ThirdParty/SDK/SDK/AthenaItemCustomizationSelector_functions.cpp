#pragma once

#include "Basic.hpp"

#include "AthenaItemCustomizationSelector_classes.hpp"
#include "AthenaItemCustomizationSelector_parameters.hpp"

namespace SDK
{

void UAthenaItemCustomizationSelector_C::BndEvt__AthenaItemCustomizationSelector_Tooltip_ArchiveMode_K2Node_ComponentBoundEvent_2_OnDismissed__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaItemCustomizationSelector_C", "BndEvt__AthenaItemCustomizationSelector_Tooltip_ArchiveMode_K2Node_ComponentBoundEvent_2_OnDismissed__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}

void UAthenaItemCustomizationSelector_C::BndEvt__AthenaItemCustomizationSelector_Tooltip_LockerArchivingCleanup_K2Node_ComponentBoundEvent_1_OnDismissed__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaItemCustomizationSelector_C", "BndEvt__AthenaItemCustomizationSelector_Tooltip_LockerArchivingCleanup_K2Node_ComponentBoundEvent_1_OnDismissed__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}

void UAthenaItemCustomizationSelector_C::BndEvt__AthenaItemCustomizationSelector_Tooltip_ShowArchivedItems_K2Node_ComponentBoundEvent_7_OnDismissed__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaItemCustomizationSelector_C", "BndEvt__AthenaItemCustomizationSelector_Tooltip_ShowArchivedItems_K2Node_ComponentBoundEvent_7_OnDismissed__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}

void UAthenaItemCustomizationSelector_C::BndEvt__Blade_SortAndFilter_K2Node_ComponentBoundEvent_3_OnVisibilityChangedEvent__DelegateSignature(ESlateVisibility InVisibility)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaItemCustomizationSelector_C", "BndEvt__Blade_SortAndFilter_K2Node_ComponentBoundEvent_3_OnVisibilityChangedEvent__DelegateSignature");

	Params::AthenaItemCustomizationSelector_C_BndEvt__Blade_SortAndFilter_K2Node_ComponentBoundEvent_3_OnVisibilityChangedEvent__DelegateSignature Parms{};

	Parms.InVisibility = InVisibility;

	UObject::ProcessEvent(Func, &Parms);
}

void UAthenaItemCustomizationSelector_C::BndEvt__Button_HitBlockerLeft_K2Node_ComponentBoundEvent_4_CommonButtonClicked__DelegateSignature(class UCommonButtonLegacy* Button)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaItemCustomizationSelector_C", "BndEvt__Button_HitBlockerLeft_K2Node_ComponentBoundEvent_4_CommonButtonClicked__DelegateSignature");

	Params::AthenaItemCustomizationSelector_C_BndEvt__Button_HitBlockerLeft_K2Node_ComponentBoundEvent_4_CommonButtonClicked__DelegateSignature Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);
}

void UAthenaItemCustomizationSelector_C::BndEvt__Button_HitBlockerRight_K2Node_ComponentBoundEvent_5_CommonButtonClicked__DelegateSignature(class UCommonButtonLegacy* Button)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaItemCustomizationSelector_C", "BndEvt__Button_HitBlockerRight_K2Node_ComponentBoundEvent_5_CommonButtonClicked__DelegateSignature");

	Params::AthenaItemCustomizationSelector_C_BndEvt__Button_HitBlockerRight_K2Node_ComponentBoundEvent_5_CommonButtonClicked__DelegateSignature Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);
}

void UAthenaItemCustomizationSelector_C::BP_HandleBack()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaItemCustomizationSelector_C", "BP_HandleBack");

	UObject::ProcessEvent(Func, nullptr);
}

void UAthenaItemCustomizationSelector_C::BP_OnActivated()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaItemCustomizationSelector_C", "BP_OnActivated");

	UObject::ProcessEvent(Func, nullptr);
}

void UAthenaItemCustomizationSelector_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaItemCustomizationSelector_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}

void UAthenaItemCustomizationSelector_C::ExecuteUbergraph_AthenaItemCustomizationSelector(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaItemCustomizationSelector_C", "ExecuteUbergraph_AthenaItemCustomizationSelector");

	Params::AthenaItemCustomizationSelector_C_ExecuteUbergraph_AthenaItemCustomizationSelector Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

class UMaterialInstance* UAthenaItemCustomizationSelector_C::GetCategoryImage(EAthenaCustomizationCategory Index_0, class UMaterialInstance* OverrideImage)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaItemCustomizationSelector_C", "GetCategoryImage");

	Params::AthenaItemCustomizationSelector_C_GetCategoryImage Parms{};

	Parms.Index_0 = Index_0;
	Parms.OverrideImage = OverrideImage;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

void UAthenaItemCustomizationSelector_C::GetCurrentItemCosmeticDefinition(class UAthenaCosmeticItemDefinition** Cosmetic_Item_Definition)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaItemCustomizationSelector_C", "GetCurrentItemCosmeticDefinition");

	Params::AthenaItemCustomizationSelector_C_GetCurrentItemCosmeticDefinition Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Cosmetic_Item_Definition != nullptr)
		*Cosmetic_Item_Definition = Parms.Cosmetic_Item_Definition;
}

void UAthenaItemCustomizationSelector_C::HandleAlternateActionHoveredChanged(bool bIsHovered)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaItemCustomizationSelector_C", "HandleAlternateActionHoveredChanged");

	Params::AthenaItemCustomizationSelector_C_HandleAlternateActionHoveredChanged Parms{};

	Parms.bIsHovered = bIsHovered;

	UObject::ProcessEvent(Func, &Parms);
}

void UAthenaItemCustomizationSelector_C::HandleBack(bool* PassThrough)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaItemCustomizationSelector_C", "HandleBack");

	Params::AthenaItemCustomizationSelector_C_HandleBack Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (PassThrough != nullptr)
		*PassThrough = Parms.PassThrough;
}

void UAthenaItemCustomizationSelector_C::HandleHideInfoPanel()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaItemCustomizationSelector_C", "HandleHideInfoPanel");

	UObject::ProcessEvent(Func, nullptr);
}

void UAthenaItemCustomizationSelector_C::HandleItemSetupFinished(const class FText& InText, EAthenaCustomizationCategory category, class UMaterialInstance* OverrideImage)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaItemCustomizationSelector_C", "HandleItemSetupFinished");

	Params::AthenaItemCustomizationSelector_C_HandleItemSetupFinished Parms{};

	Parms.InText = std::move(InText);
	Parms.category = category;
	Parms.OverrideImage = OverrideImage;

	UObject::ProcessEvent(Func, &Parms);
}

void UAthenaItemCustomizationSelector_C::HandlePickerMarkedItemsChanged(int32 MarkedCount)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaItemCustomizationSelector_C", "HandlePickerMarkedItemsChanged");

	Params::AthenaItemCustomizationSelector_C_HandlePickerMarkedItemsChanged Parms{};

	Parms.MarkedCount = MarkedCount;

	UObject::ProcessEvent(Func, &Parms);
}

void UAthenaItemCustomizationSelector_C::HandleShowInfoPanel(class UFortItem* SelectedItem)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaItemCustomizationSelector_C", "HandleShowInfoPanel");

	Params::AthenaItemCustomizationSelector_C_HandleShowInfoPanel Parms{};

	Parms.SelectedItem = SelectedItem;

	UObject::ProcessEvent(Func, &Parms);
}

void UAthenaItemCustomizationSelector_C::HandleTextChanged(const class FText& NewText)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaItemCustomizationSelector_C", "HandleTextChanged");

	Params::AthenaItemCustomizationSelector_C_HandleTextChanged Parms{};

	Parms.NewText = std::move(NewText);

	UObject::ProcessEvent(Func, &Parms);
}

void UAthenaItemCustomizationSelector_C::OnCurrentItemChanged(class UFortItem* SelectedItem)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaItemCustomizationSelector_C", "OnCurrentItemChanged");

	Params::AthenaItemCustomizationSelector_C_OnCurrentItemChanged Parms{};

	Parms.SelectedItem = SelectedItem;

	UObject::ProcessEvent(Func, &Parms);
}

void UAthenaItemCustomizationSelector_C::OnFinishedItemSave()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaItemCustomizationSelector_C", "OnFinishedItemSave");

	UObject::ProcessEvent(Func, nullptr);
}

void UAthenaItemCustomizationSelector_C::OnFinishedItemSetup(const class FText& CategoryDisplayName, const class FText& ItemDisplayTypeName, EAthenaCustomizationCategory SelectedCategory, class UMaterialInstance* OverrideSlotImage)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaItemCustomizationSelector_C", "OnFinishedItemSetup");

	Params::AthenaItemCustomizationSelector_C_OnFinishedItemSetup Parms{};

	Parms.CategoryDisplayName = std::move(CategoryDisplayName);
	Parms.ItemDisplayTypeName = std::move(ItemDisplayTypeName);
	Parms.SelectedCategory = SelectedCategory;
	Parms.OverrideSlotImage = OverrideSlotImage;

	UObject::ProcessEvent(Func, &Parms);
}

void UAthenaItemCustomizationSelector_C::OnHideItemInfoHeader(bool bShouldHide)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaItemCustomizationSelector_C", "OnHideItemInfoHeader");

	Params::AthenaItemCustomizationSelector_C_OnHideItemInfoHeader Parms{};

	Parms.bShouldHide = bShouldHide;

	UObject::ProcessEvent(Func, &Parms);
}

void UAthenaItemCustomizationSelector_C::OnInitialized()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaItemCustomizationSelector_C", "OnInitialized");

	UObject::ProcessEvent(Func, nullptr);
}

void UAthenaItemCustomizationSelector_C::OnInputMethodChanged(ECommonInputType bNewInputType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaItemCustomizationSelector_C", "OnInputMethodChanged");

	Params::AthenaItemCustomizationSelector_C_OnInputMethodChanged Parms{};

	Parms.bNewInputType = bNewInputType;

	UObject::ProcessEvent(Func, &Parms);
}

void UAthenaItemCustomizationSelector_C::OnLockerScreenStateChanged()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaItemCustomizationSelector_C", "OnLockerScreenStateChanged");

	UObject::ProcessEvent(Func, nullptr);
}

void UAthenaItemCustomizationSelector_C::OnPreviewActionButtonUpdated(const class FText& RowDisplayName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaItemCustomizationSelector_C", "OnPreviewActionButtonUpdated");

	Params::AthenaItemCustomizationSelector_C_OnPreviewActionButtonUpdated Parms{};

	Parms.RowDisplayName = std::move(RowDisplayName);

	UObject::ProcessEvent(Func, &Parms);
}

void UAthenaItemCustomizationSelector_C::OnShowArchivedItemsTooltip(bool bShowTooltip)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaItemCustomizationSelector_C", "OnShowArchivedItemsTooltip");

	Params::AthenaItemCustomizationSelector_C_OnShowArchivedItemsTooltip Parms{};

	Parms.bShowTooltip = bShowTooltip;

	UObject::ProcessEvent(Func, &Parms);
}

void UAthenaItemCustomizationSelector_C::OnShowArchiveModeTooltip(bool bShowTooltip)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaItemCustomizationSelector_C", "OnShowArchiveModeTooltip");

	Params::AthenaItemCustomizationSelector_C_OnShowArchiveModeTooltip Parms{};

	Parms.bShowTooltip = bShowTooltip;

	UObject::ProcessEvent(Func, &Parms);
}

void UAthenaItemCustomizationSelector_C::OnShowLockerArchivingCleanupTooltip(bool bShowTooltip)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaItemCustomizationSelector_C", "OnShowLockerArchivingCleanupTooltip");

	Params::AthenaItemCustomizationSelector_C_OnShowLockerArchivingCleanupTooltip Parms{};

	Parms.bShowTooltip = bShowTooltip;

	UObject::ProcessEvent(Func, &Parms);
}

void UAthenaItemCustomizationSelector_C::OnTabSelectionChanged(bool bShowingVariants)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaItemCustomizationSelector_C", "OnTabSelectionChanged");

	Params::AthenaItemCustomizationSelector_C_OnTabSelectionChanged Parms{};

	Parms.bShowingVariants = bShowingVariants;

	UObject::ProcessEvent(Func, &Parms);
}

void UAthenaItemCustomizationSelector_C::OnUpdateArchivedItemsTooltipText(const class FText& Text)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaItemCustomizationSelector_C", "OnUpdateArchivedItemsTooltipText");

	Params::AthenaItemCustomizationSelector_C_OnUpdateArchivedItemsTooltipText Parms{};

	Parms.Text = std::move(Text);

	UObject::ProcessEvent(Func, &Parms);
}

void UAthenaItemCustomizationSelector_C::OnUpdateArchiveModeTooltipText(const class FText& Text)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaItemCustomizationSelector_C", "OnUpdateArchiveModeTooltipText");

	Params::AthenaItemCustomizationSelector_C_OnUpdateArchiveModeTooltipText Parms{};

	Parms.Text = std::move(Text);

	UObject::ProcessEvent(Func, &Parms);
}

void UAthenaItemCustomizationSelector_C::OnUpdateExclusiveItemCallout(bool bShouldShow, const class FText& CalloutText)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaItemCustomizationSelector_C", "OnUpdateExclusiveItemCallout");

	Params::AthenaItemCustomizationSelector_C_OnUpdateExclusiveItemCallout Parms{};

	Parms.bShouldShow = bShouldShow;
	Parms.CalloutText = std::move(CalloutText);

	UObject::ProcessEvent(Func, &Parms);
}

void UAthenaItemCustomizationSelector_C::OnUpdateLockerArchivingCleanupTooltipText(const class FText& Text)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaItemCustomizationSelector_C", "OnUpdateLockerArchivingCleanupTooltipText");

	Params::AthenaItemCustomizationSelector_C_OnUpdateLockerArchivingCleanupTooltipText Parms{};

	Parms.Text = std::move(Text);

	UObject::ProcessEvent(Func, &Parms);
}

void UAthenaItemCustomizationSelector_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaItemCustomizationSelector_C", "PreConstruct");

	Params::AthenaItemCustomizationSelector_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}

void UAthenaItemCustomizationSelector_C::UpdateArchivingButtonText(int32 MarkedCount)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaItemCustomizationSelector_C", "UpdateArchivingButtonText");

	Params::AthenaItemCustomizationSelector_C_UpdateArchivingButtonText Parms{};

	Parms.MarkedCount = MarkedCount;

	UObject::ProcessEvent(Func, &Parms);
}

void UAthenaItemCustomizationSelector_C::UpdateSeasonButtonEnabledState()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaItemCustomizationSelector_C", "UpdateSeasonButtonEnabledState");

	UObject::ProcessEvent(Func, nullptr);
}

}
