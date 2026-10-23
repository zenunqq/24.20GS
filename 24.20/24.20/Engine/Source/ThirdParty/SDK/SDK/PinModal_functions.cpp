#pragma once

#include "Basic.hpp"

#include "PinModal_classes.hpp"
#include "PinModal_parameters.hpp"

namespace SDK
{

TArray<class UFortPinButton*> UPinModal_C::CollectPinButtons()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PinModal_C", "CollectPinButtons");

	Params::PinModal_C_CollectPinButtons Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

void UPinModal_C::ExecuteUbergraph_PinModal(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PinModal_C", "ExecuteUbergraph_PinModal");

	Params::PinModal_C_ExecuteUbergraph_PinModal Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

void UPinModal_C::OnSetPinState(const EPinModalValidityState PinModalState)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PinModal_C", "OnSetPinState");

	Params::PinModal_C_OnSetPinState Parms{};

	Parms.PinModalState = PinModalState;

	UObject::ProcessEvent(Func, &Parms);
}

void UPinModal_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PinModal_C", "PreConstruct");

	Params::PinModal_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}

void UPinModal_C::Set_Visual_States(EPinModalValidityState Pin_States)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PinModal_C", "Set Visual States");

	Params::PinModal_C_Set_Visual_States Parms{};

	Parms.Pin_States = Pin_States;

	UObject::ProcessEvent(Func, &Parms);
}

void UPinModal_C::SetPreviewData()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PinModal_C", "SetPreviewData");

	UObject::ProcessEvent(Func, nullptr);
}

}
