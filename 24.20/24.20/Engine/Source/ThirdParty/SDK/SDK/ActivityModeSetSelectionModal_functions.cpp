#pragma once

#include "Basic.hpp"

#include "ActivityModeSetSelectionModal_classes.hpp"
#include "ActivityModeSetSelectionModal_parameters.hpp"

namespace SDK
{

void UActivityModeSetSelectionModal_C::BndEvt__ActivityModeSetSelectionModal_ActivityPrivacyButton_K2Node_ComponentBoundEvent_4_OnPrivacyAvailableChanged__DelegateSignature(bool IsAvailable)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ActivityModeSetSelectionModal_C", "BndEvt__ActivityModeSetSelectionModal_ActivityPrivacyButton_K2Node_ComponentBoundEvent_4_OnPrivacyAvailableChanged__DelegateSignature");

	Params::ActivityModeSetSelectionModal_C_BndEvt__ActivityModeSetSelectionModal_ActivityPrivacyButton_K2Node_ComponentBoundEvent_4_OnPrivacyAvailableChanged__DelegateSignature Parms{};

	Parms.IsAvailable = IsAvailable;

	UObject::ProcessEvent(Func, &Parms);
}

void UActivityModeSetSelectionModal_C::BP_OnActivated()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ActivityModeSetSelectionModal_C", "BP_OnActivated");

	UObject::ProcessEvent(Func, nullptr);
}

void UActivityModeSetSelectionModal_C::BP_OnDeactivated()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ActivityModeSetSelectionModal_C", "BP_OnDeactivated");

	UObject::ProcessEvent(Func, nullptr);
}

void UActivityModeSetSelectionModal_C::CloseModal()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ActivityModeSetSelectionModal_C", "CloseModal");

	UObject::ProcessEvent(Func, nullptr);
}

void UActivityModeSetSelectionModal_C::ExecuteUbergraph_ActivityModeSetSelectionModal(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ActivityModeSetSelectionModal_C", "ExecuteUbergraph_ActivityModeSetSelectionModal");

	Params::ActivityModeSetSelectionModal_C_ExecuteUbergraph_ActivityModeSetSelectionModal Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

void UActivityModeSetSelectionModal_C::OnPreviewImageChanged(const bool bIsLoading, const class UTexture* Texture)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ActivityModeSetSelectionModal_C", "OnPreviewImageChanged");

	Params::ActivityModeSetSelectionModal_C_OnPreviewImageChanged Parms{};

	Parms.bIsLoading = bIsLoading;
	Parms.Texture = Texture;

	UObject::ProcessEvent(Func, &Parms);
}

void UActivityModeSetSelectionModal_C::OnSubModeSelected()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ActivityModeSetSelectionModal_C", "OnSubModeSelected");

	UObject::ProcessEvent(Func, nullptr);
}

class UWidget* UActivityModeSetSelectionModal_C::BP_GetDesiredFocusTarget() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ActivityModeSetSelectionModal_C", "BP_GetDesiredFocusTarget");

	Params::ActivityModeSetSelectionModal_C_BP_GetDesiredFocusTarget Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

}
