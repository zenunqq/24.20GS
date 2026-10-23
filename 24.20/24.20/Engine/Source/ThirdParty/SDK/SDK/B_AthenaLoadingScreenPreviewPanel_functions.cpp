#pragma once

#include "Basic.hpp"

#include "B_AthenaLoadingScreenPreviewPanel_classes.hpp"
#include "B_AthenaLoadingScreenPreviewPanel_parameters.hpp"

namespace SDK
{

void UB_AthenaLoadingScreenPreviewPanel_C::BndEvt__B_AthenaLoadingScreenPreviewPanel_Button_Close_K2Node_ComponentBoundEvent_2_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_AthenaLoadingScreenPreviewPanel_C", "BndEvt__B_AthenaLoadingScreenPreviewPanel_Button_Close_K2Node_ComponentBoundEvent_2_CommonButtonBaseClicked__DelegateSignature");

	Params::B_AthenaLoadingScreenPreviewPanel_C_BndEvt__B_AthenaLoadingScreenPreviewPanel_Button_Close_K2Node_ComponentBoundEvent_2_CommonButtonBaseClicked__DelegateSignature Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);
}

void UB_AthenaLoadingScreenPreviewPanel_C::BndEvt__CloseButton_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature(class UCommonButtonLegacy* Button)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_AthenaLoadingScreenPreviewPanel_C", "BndEvt__CloseButton_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature");

	Params::B_AthenaLoadingScreenPreviewPanel_C_BndEvt__CloseButton_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);
}

void UB_AthenaLoadingScreenPreviewPanel_C::BP_OnActivated()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_AthenaLoadingScreenPreviewPanel_C", "BP_OnActivated");

	UObject::ProcessEvent(Func, nullptr);
}

void UB_AthenaLoadingScreenPreviewPanel_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_AthenaLoadingScreenPreviewPanel_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}

void UB_AthenaLoadingScreenPreviewPanel_C::ExecuteUbergraph_B_AthenaLoadingScreenPreviewPanel(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_AthenaLoadingScreenPreviewPanel_C", "ExecuteUbergraph_B_AthenaLoadingScreenPreviewPanel");

	Params::B_AthenaLoadingScreenPreviewPanel_C_ExecuteUbergraph_B_AthenaLoadingScreenPreviewPanel Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

void UB_AthenaLoadingScreenPreviewPanel_C::HandleBack(bool* PassThrough)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_AthenaLoadingScreenPreviewPanel_C", "HandleBack");

	Params::B_AthenaLoadingScreenPreviewPanel_C_HandleBack Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (PassThrough != nullptr)
		*PassThrough = Parms.PassThrough;
}

void UB_AthenaLoadingScreenPreviewPanel_C::Init()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_AthenaLoadingScreenPreviewPanel_C", "Init");

	UObject::ProcessEvent(Func, nullptr);
}

void UB_AthenaLoadingScreenPreviewPanel_C::PopDetails()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_AthenaLoadingScreenPreviewPanel_C", "PopDetails");

	UObject::ProcessEvent(Func, nullptr);
}

void UB_AthenaLoadingScreenPreviewPanel_C::RegisterInput()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_AthenaLoadingScreenPreviewPanel_C", "RegisterInput");

	UObject::ProcessEvent(Func, nullptr);
}

void UB_AthenaLoadingScreenPreviewPanel_C::UnregisterInput()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_AthenaLoadingScreenPreviewPanel_C", "UnregisterInput");

	UObject::ProcessEvent(Func, nullptr);
}

}
