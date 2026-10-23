#pragma once

#include "Basic.hpp"

#include "ErrorLlama_classes.hpp"
#include "ErrorLlama_parameters.hpp"

namespace SDK
{

void UErrorLlama_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ErrorLlama_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}

void UErrorLlama_C::ExecuteUbergraph_ErrorLlama(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ErrorLlama_C", "ExecuteUbergraph_ErrorLlama");

	Params::ErrorLlama_C_ExecuteUbergraph_ErrorLlama Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

void UErrorLlama_C::HandleInputTypeChanged(ECommonInputType NewInputType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ErrorLlama_C", "HandleInputTypeChanged");

	Params::ErrorLlama_C_HandleInputTypeChanged Parms{};

	Parms.NewInputType = NewInputType;

	UObject::ProcessEvent(Func, &Parms);
}

void UErrorLlama_C::HandleNormalizedInputDirection(const struct FVector2D& TwoDInputVec)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ErrorLlama_C", "HandleNormalizedInputDirection");

	Params::ErrorLlama_C_HandleNormalizedInputDirection Parms{};

	Parms.TwoDInputVec = std::move(TwoDInputVec);

	UObject::ProcessEvent(Func, &Parms);
}

void UErrorLlama_C::RandomizeColor()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ErrorLlama_C", "RandomizeColor");

	UObject::ProcessEvent(Func, nullptr);
}

void UErrorLlama_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ErrorLlama_C", "Tick");

	Params::ErrorLlama_C_Tick Parms{};

	Parms.MyGeometry = std::move(MyGeometry);
	Parms.InDeltaTime = InDeltaTime;

	UObject::ProcessEvent(Func, &Parms);
}

}
