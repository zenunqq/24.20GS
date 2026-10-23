#pragma once

#include "Basic.hpp"

#include "QualityLevelSelectScreen_classes.hpp"
#include "QualityLevelSelectScreen_parameters.hpp"

namespace SDK
{

void UQualityLevelSelectScreen_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("QualityLevelSelectScreen_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}

void UQualityLevelSelectScreen_C::ExecuteUbergraph_QualityLevelSelectScreen(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("QualityLevelSelectScreen_C", "ExecuteUbergraph_QualityLevelSelectScreen");

	Params::QualityLevelSelectScreen_C_ExecuteUbergraph_QualityLevelSelectScreen Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

}
