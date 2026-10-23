#pragma once

#include "Basic.hpp"

#include "TopRightWindowControlsWidget_classes.hpp"
#include "TopRightWindowControlsWidget_parameters.hpp"

namespace SDK
{

void UTopRightWindowControlsWidget_C::ExecuteUbergraph_TopRightWindowControlsWidget(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TopRightWindowControlsWidget_C", "ExecuteUbergraph_TopRightWindowControlsWidget");

	Params::TopRightWindowControlsWidget_C_ExecuteUbergraph_TopRightWindowControlsWidget Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

void UTopRightWindowControlsWidget_C::OnRefreshOptions()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TopRightWindowControlsWidget_C", "OnRefreshOptions");

	UObject::ProcessEvent(Func, nullptr);
}

}
