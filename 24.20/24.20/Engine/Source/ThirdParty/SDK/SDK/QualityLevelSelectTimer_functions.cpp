#pragma once

#include "Basic.hpp"

#include "QualityLevelSelectTimer_classes.hpp"
#include "QualityLevelSelectTimer_parameters.hpp"

namespace SDK
{

void UQualityLevelSelectTimer_C::UpdateTextScale(double TimeRemaining)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("QualityLevelSelectTimer_C", "UpdateTextScale");

	Params::QualityLevelSelectTimer_C_UpdateTextScale Parms{};

	Parms.TimeRemaining = TimeRemaining;

	UObject::ProcessEvent(Func, &Parms);
}

void UQualityLevelSelectTimer_C::OnTimeRemainingChanged(const float TimeRemaining)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("QualityLevelSelectTimer_C", "OnTimeRemainingChanged");

	Params::QualityLevelSelectTimer_C_OnTimeRemainingChanged Parms{};

	Parms.TimeRemaining = TimeRemaining;

	UObject::ProcessEvent(Func, &Parms);
}

void UQualityLevelSelectTimer_C::OnProgressStarted(const float Duration)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("QualityLevelSelectTimer_C", "OnProgressStarted");

	Params::QualityLevelSelectTimer_C_OnProgressStarted Parms{};

	Parms.Duration = Duration;

	UObject::ProcessEvent(Func, &Parms);
}

void UQualityLevelSelectTimer_C::OnProgressEnded()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("QualityLevelSelectTimer_C", "OnProgressEnded");

	UObject::ProcessEvent(Func, nullptr);
}

void UQualityLevelSelectTimer_C::OnInitialized()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("QualityLevelSelectTimer_C", "OnInitialized");

	UObject::ProcessEvent(Func, nullptr);
}

void UQualityLevelSelectTimer_C::ExecuteUbergraph_QualityLevelSelectTimer(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("QualityLevelSelectTimer_C", "ExecuteUbergraph_QualityLevelSelectTimer");

	Params::QualityLevelSelectTimer_C_ExecuteUbergraph_QualityLevelSelectTimer Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

}
