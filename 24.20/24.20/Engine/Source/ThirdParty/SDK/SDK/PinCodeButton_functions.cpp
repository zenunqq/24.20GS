#pragma once

#include "Basic.hpp"

#include "PinCodeButton_classes.hpp"
#include "PinCodeButton_parameters.hpp"

namespace SDK
{

void UPinCodeButton_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PinCodeButton_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}

void UPinCodeButton_C::ExecuteUbergraph_PinCodeButton(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PinCodeButton_C", "ExecuteUbergraph_PinCodeButton");

	Params::PinCodeButton_C_ExecuteUbergraph_PinCodeButton Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

void UPinCodeButton_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PinCodeButton_C", "PreConstruct");

	Params::PinCodeButton_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}

void UPinCodeButton_C::Set_Pin_Number(const class FString& Pin)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PinCodeButton_C", "Set Pin Number");

	Params::PinCodeButton_C_Set_Pin_Number Parms{};

	Parms.Pin = std::move(Pin);

	UObject::ProcessEvent(Func, &Parms);
}

}
