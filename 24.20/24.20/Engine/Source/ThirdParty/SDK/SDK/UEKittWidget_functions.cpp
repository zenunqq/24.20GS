#pragma once

#include "Basic.hpp"

#include "UEKittWidget_classes.hpp"
#include "UEKittWidget_parameters.hpp"

namespace SDK
{

void UUEKittWidget_C::ExecuteUbergraph_UEKittWidget(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UEKittWidget_C", "ExecuteUbergraph_UEKittWidget");

	Params::UEKittWidget_C_ExecuteUbergraph_UEKittWidget Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

void UUEKittWidget_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UEKittWidget_C", "Tick");

	Params::UEKittWidget_C_Tick Parms{};

	Parms.MyGeometry = std::move(MyGeometry);
	Parms.InDeltaTime = InDeltaTime;

	UObject::ProcessEvent(Func, &Parms);
}

}
