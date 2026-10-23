#pragma once

#include "Basic.hpp"

#include "WB_AudioAnalysis_UI_classes.hpp"
#include "WB_AudioAnalysis_UI_parameters.hpp"

namespace SDK
{

void UWB_AudioAnalysis_UI_C::AddScalarParameter(const struct FAudioAnalysisParameterScalar& Param)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_AudioAnalysis_UI_C", "AddScalarParameter");

	Params::WB_AudioAnalysis_UI_C_AddScalarParameter Parms{};

	Parms.Param = std::move(Param);

	UObject::ProcessEvent(Func, &Parms);
}

void UWB_AudioAnalysis_UI_C::AddVectorParameter(const struct FAudioAnalysisParameterVector& Param)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_AudioAnalysis_UI_C", "AddVectorParameter");

	Params::WB_AudioAnalysis_UI_C_AddVectorParameter Parms{};

	Parms.Param = std::move(Param);

	UObject::ProcessEvent(Func, &Parms);
}

void UWB_AudioAnalysis_UI_C::ClearParameters()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_AudioAnalysis_UI_C", "ClearParameters");

	UObject::ProcessEvent(Func, nullptr);
}

void UWB_AudioAnalysis_UI_C::ExecuteUbergraph_WB_AudioAnalysis_UI(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WB_AudioAnalysis_UI_C", "ExecuteUbergraph_WB_AudioAnalysis_UI");

	Params::WB_AudioAnalysis_UI_C_ExecuteUbergraph_WB_AudioAnalysis_UI Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

}
