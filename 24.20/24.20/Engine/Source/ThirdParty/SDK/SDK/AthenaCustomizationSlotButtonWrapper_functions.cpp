#pragma once

#include "Basic.hpp"

#include "AthenaCustomizationSlotButtonWrapper_classes.hpp"
#include "AthenaCustomizationSlotButtonWrapper_parameters.hpp"

namespace SDK
{

void UAthenaCustomizationSlotButtonWrapper_C::AnimPopulateInternal(int32 ButtonIndex)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaCustomizationSlotButtonWrapper_C", "AnimPopulateInternal");

	Params::AthenaCustomizationSlotButtonWrapper_C_AnimPopulateInternal Parms{};

	Parms.ButtonIndex = ButtonIndex;

	UObject::ProcessEvent(Func, &Parms);
}

void UAthenaCustomizationSlotButtonWrapper_C::BndEvt__SlotButton_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature(class UCommonButtonLegacy* Button)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaCustomizationSlotButtonWrapper_C", "BndEvt__SlotButton_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature");

	Params::AthenaCustomizationSlotButtonWrapper_C_BndEvt__SlotButton_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);
}

void UAthenaCustomizationSlotButtonWrapper_C::BndEvt__SlotButton_K2Node_ComponentBoundEvent_13_CommonButtonClicked__DelegateSignature(class UCommonButtonLegacy* Button)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaCustomizationSlotButtonWrapper_C", "BndEvt__SlotButton_K2Node_ComponentBoundEvent_13_CommonButtonClicked__DelegateSignature");

	Params::AthenaCustomizationSlotButtonWrapper_C_BndEvt__SlotButton_K2Node_ComponentBoundEvent_13_CommonButtonClicked__DelegateSignature Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);
}

void UAthenaCustomizationSlotButtonWrapper_C::BndEvt__SlotButton_K2Node_ComponentBoundEvent_47_CommonButtonClicked__DelegateSignature(class UCommonButtonLegacy* Button)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaCustomizationSlotButtonWrapper_C", "BndEvt__SlotButton_K2Node_ComponentBoundEvent_47_CommonButtonClicked__DelegateSignature");

	Params::AthenaCustomizationSlotButtonWrapper_C_BndEvt__SlotButton_K2Node_ComponentBoundEvent_47_CommonButtonClicked__DelegateSignature Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);
}

void UAthenaCustomizationSlotButtonWrapper_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaCustomizationSlotButtonWrapper_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}

void UAthenaCustomizationSlotButtonWrapper_C::ExecuteUbergraph_AthenaCustomizationSlotButtonWrapper(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaCustomizationSlotButtonWrapper_C", "ExecuteUbergraph_AthenaCustomizationSlotButtonWrapper");

	Params::AthenaCustomizationSlotButtonWrapper_C_ExecuteUbergraph_AthenaCustomizationSlotButtonWrapper Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

void UAthenaCustomizationSlotButtonWrapper_C::GetCustomizationSlotActiveState(bool* bCosmeticAvaialble, bool* bActive)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaCustomizationSlotButtonWrapper_C", "GetCustomizationSlotActiveState");

	Params::AthenaCustomizationSlotButtonWrapper_C_GetCustomizationSlotActiveState Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (bCosmeticAvaialble != nullptr)
		*bCosmeticAvaialble = Parms.bCosmeticAvaialble;

	if (bActive != nullptr)
		*bActive = Parms.bActive;
}

void UAthenaCustomizationSlotButtonWrapper_C::ResetPopulateAnimVisual()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaCustomizationSlotButtonWrapper_C", "ResetPopulateAnimVisual");

	UObject::ProcessEvent(Func, nullptr);
}

}
