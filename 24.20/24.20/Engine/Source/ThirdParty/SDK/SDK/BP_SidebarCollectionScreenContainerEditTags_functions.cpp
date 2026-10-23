#pragma once

#include "Basic.hpp"

#include "BP_SidebarCollectionScreenContainerEditTags_classes.hpp"
#include "BP_SidebarCollectionScreenContainerEditTags_parameters.hpp"

namespace SDK
{

void UBP_SidebarCollectionScreenContainerEditTags_C::BndEvt__BP_SidebarCollectionScreenContainerEditTags_TagsInfoButton_K2Node_ComponentBoundEvent_2_CommonButtonClicked__DelegateSignature(class UCommonButtonLegacy* Button)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SidebarCollectionScreenContainerEditTags_C", "BndEvt__BP_SidebarCollectionScreenContainerEditTags_TagsInfoButton_K2Node_ComponentBoundEvent_2_CommonButtonClicked__DelegateSignature");

	Params::BP_SidebarCollectionScreenContainerEditTags_C_BndEvt__BP_SidebarCollectionScreenContainerEditTags_TagsInfoButton_K2Node_ComponentBoundEvent_2_CommonButtonClicked__DelegateSignature Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);
}

void UBP_SidebarCollectionScreenContainerEditTags_C::BndEvt__BP_SidebarCollectionScreenContainerEditTags_WhatAreTagsInputBlocker_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature(class UCommonButtonLegacy* Button)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SidebarCollectionScreenContainerEditTags_C", "BndEvt__BP_SidebarCollectionScreenContainerEditTags_WhatAreTagsInputBlocker_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature");

	Params::BP_SidebarCollectionScreenContainerEditTags_C_BndEvt__BP_SidebarCollectionScreenContainerEditTags_WhatAreTagsInputBlocker_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);
}

void UBP_SidebarCollectionScreenContainerEditTags_C::BP_OnCollectionTabTitleChange(const ESocialTagCategory& TagCategory)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SidebarCollectionScreenContainerEditTags_C", "BP_OnCollectionTabTitleChange");

	Params::BP_SidebarCollectionScreenContainerEditTags_C_BP_OnCollectionTabTitleChange Parms{};

	Parms.TagCategory = TagCategory;

	UObject::ProcessEvent(Func, &Parms);
}

void UBP_SidebarCollectionScreenContainerEditTags_C::BP_OnShowTabsSet(bool bShowTabs)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SidebarCollectionScreenContainerEditTags_C", "BP_OnShowTabsSet");

	Params::BP_SidebarCollectionScreenContainerEditTags_C_BP_OnShowTabsSet Parms{};

	Parms.bShowTabs = bShowTabs;

	UObject::ProcessEvent(Func, &Parms);
}

void UBP_SidebarCollectionScreenContainerEditTags_C::BP_OnWhatAreTagsActivated()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SidebarCollectionScreenContainerEditTags_C", "BP_OnWhatAreTagsActivated");

	UObject::ProcessEvent(Func, nullptr);
}

void UBP_SidebarCollectionScreenContainerEditTags_C::BP_OnWhatAreTagsDeactivated()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SidebarCollectionScreenContainerEditTags_C", "BP_OnWhatAreTagsDeactivated");

	UObject::ProcessEvent(Func, nullptr);
}

void UBP_SidebarCollectionScreenContainerEditTags_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SidebarCollectionScreenContainerEditTags_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}

void UBP_SidebarCollectionScreenContainerEditTags_C::ExecuteUbergraph_BP_SidebarCollectionScreenContainerEditTags(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SidebarCollectionScreenContainerEditTags_C", "ExecuteUbergraph_BP_SidebarCollectionScreenContainerEditTags");

	Params::BP_SidebarCollectionScreenContainerEditTags_C_ExecuteUbergraph_BP_SidebarCollectionScreenContainerEditTags Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

void UBP_SidebarCollectionScreenContainerEditTags_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SidebarCollectionScreenContainerEditTags_C", "PreConstruct");

	Params::BP_SidebarCollectionScreenContainerEditTags_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}

void UBP_SidebarCollectionScreenContainerEditTags_C::ToggleTagsInfoTooltip()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SidebarCollectionScreenContainerEditTags_C", "ToggleTagsInfoTooltip");

	UObject::ProcessEvent(Func, nullptr);
}

}
