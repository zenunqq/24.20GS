#pragma once

#include "Basic.hpp"

#include "FIlteredTextEntryWidget_classes.hpp"
#include "FIlteredTextEntryWidget_parameters.hpp"

namespace SDK
{

void UFilteredTextEntryWidget_C::BndEvt__EditText_K2Node_ComponentBoundEvent_0_OnEditableTextBoxChangedEvent__DelegateSignature(const class FText& Text)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FilteredTextEntryWidget_C", "BndEvt__EditText_K2Node_ComponentBoundEvent_0_OnEditableTextBoxChangedEvent__DelegateSignature");

	Params::FilteredTextEntryWidget_C_BndEvt__EditText_K2Node_ComponentBoundEvent_0_OnEditableTextBoxChangedEvent__DelegateSignature Parms{};

	Parms.Text = std::move(Text);

	UObject::ProcessEvent(Func, &Parms);
}

void UFilteredTextEntryWidget_C::BndEvt__EditText_K2Node_ComponentBoundEvent_2_OnEditableTextBoxCommittedEvent__DelegateSignature(const class FText& Text, ETextCommit CommitMethod)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FilteredTextEntryWidget_C", "BndEvt__EditText_K2Node_ComponentBoundEvent_2_OnEditableTextBoxCommittedEvent__DelegateSignature");

	Params::FilteredTextEntryWidget_C_BndEvt__EditText_K2Node_ComponentBoundEvent_2_OnEditableTextBoxCommittedEvent__DelegateSignature Parms{};

	Parms.Text = std::move(Text);
	Parms.CommitMethod = CommitMethod;

	UObject::ProcessEvent(Func, &Parms);
}

void UFilteredTextEntryWidget_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FilteredTextEntryWidget_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}

void UFilteredTextEntryWidget_C::ExecuteUbergraph_FilteredTextEntryWidget(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FilteredTextEntryWidget_C", "ExecuteUbergraph_FilteredTextEntryWidget");

	Params::FilteredTextEntryWidget_C_ExecuteUbergraph_FilteredTextEntryWidget Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

void UFilteredTextEntryWidget_C::GetCurrentText(class FText* Text)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FilteredTextEntryWidget_C", "GetCurrentText");

	Params::FilteredTextEntryWidget_C_GetCurrentText Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Text != nullptr)
		*Text = std::move(Parms.Text);
}

void UFilteredTextEntryWidget_C::GetErrorText(bool Additional_Validator_Failed, class FText* Appropriate_Text)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FilteredTextEntryWidget_C", "GetErrorText");

	Params::FilteredTextEntryWidget_C_GetErrorText Parms{};

	Parms.Additional_Validator_Failed = Additional_Validator_Failed;

	UObject::ProcessEvent(Func, &Parms);

	if (Appropriate_Text != nullptr)
		*Appropriate_Text = std::move(Parms.Appropriate_Text);
}

void UFilteredTextEntryWidget_C::HandleShowPrompt(const class FText& CurrentText)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FilteredTextEntryWidget_C", "HandleShowPrompt");

	Params::FilteredTextEntryWidget_C_HandleShowPrompt Parms{};

	Parms.CurrentText = std::move(CurrentText);

	UObject::ProcessEvent(Func, &Parms);
}

void UFilteredTextEntryWidget_C::OnDirtyTextAttempted(bool bIsBadText, bool bAdditionalValidationFailed)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FilteredTextEntryWidget_C", "OnDirtyTextAttempted");

	Params::FilteredTextEntryWidget_C_OnDirtyTextAttempted Parms{};

	Parms.bIsBadText = bIsBadText;
	Parms.bAdditionalValidationFailed = bAdditionalValidationFailed;

	UObject::ProcessEvent(Func, &Parms);
}

void UFilteredTextEntryWidget_C::OnMouseEnter(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FilteredTextEntryWidget_C", "OnMouseEnter");

	Params::FilteredTextEntryWidget_C_OnMouseEnter Parms{};

	Parms.MyGeometry = std::move(MyGeometry);
	Parms.MouseEvent = std::move(MouseEvent);

	UObject::ProcessEvent(Func, &Parms);
}

void UFilteredTextEntryWidget_C::OnMouseLeave(const struct FPointerEvent& MouseEvent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FilteredTextEntryWidget_C", "OnMouseLeave");

	Params::FilteredTextEntryWidget_C_OnMouseLeave Parms{};

	Parms.MouseEvent = std::move(MouseEvent);

	UObject::ProcessEvent(Func, &Parms);
}

void UFilteredTextEntryWidget_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FilteredTextEntryWidget_C", "PreConstruct");

	Params::FilteredTextEntryWidget_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}

void UFilteredTextEntryWidget_C::SetTextFocus()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FilteredTextEntryWidget_C", "SetTextFocus");

	UObject::ProcessEvent(Func, nullptr);
}

void UFilteredTextEntryWidget_C::UpdateConfiguration(bool bOverrideStyle, bool bHideValidation, ETextJustify TextJustification, bool bShouldShowTextPrompt, const class FText& PromptDisplayText, class UClass* TextStyle)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FilteredTextEntryWidget_C", "UpdateConfiguration");

	Params::FilteredTextEntryWidget_C_UpdateConfiguration Parms{};

	Parms.bOverrideStyle = bOverrideStyle;
	Parms.bHideValidation = bHideValidation;
	Parms.TextJustification = TextJustification;
	Parms.bShouldShowTextPrompt = bShouldShowTextPrompt;
	Parms.PromptDisplayText = std::move(PromptDisplayText);
	Parms.TextStyle = TextStyle;

	UObject::ProcessEvent(Func, &Parms);
}

void UFilteredTextEntryWidget_C::ValidatePersistentID(const class FText& Text)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FilteredTextEntryWidget_C", "ValidatePersistentID");

	Params::FilteredTextEntryWidget_C_ValidatePersistentID Parms{};

	Parms.Text = std::move(Text);

	UObject::ProcessEvent(Func, &Parms);
}

}
