#pragma once

#include "Basic.hpp"

#include "AthenaTemperature_classes.hpp"
#include "AthenaTemperature_parameters.hpp"

namespace SDK
{

void UAthenaTemperature_C::ShowTemperatureChanged(bool bShowTemperature)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaTemperature_C", "ShowTemperatureChanged");

	Params::AthenaTemperature_C_ShowTemperatureChanged Parms{};

	Parms.bShowTemperature = bShowTemperature;

	UObject::ProcessEvent(Func, &Parms);
}

void UAthenaTemperature_C::ExecuteUbergraph_AthenaTemperature(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaTemperature_C", "ExecuteUbergraph_AthenaTemperature");

	Params::AthenaTemperature_C_ExecuteUbergraph_AthenaTemperature Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

void UAthenaTemperature_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaTemperature_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}

}
