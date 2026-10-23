#pragma once

#include "Basic.hpp"

#include "CorrectiveActionGuardianEmailScreen_classes.hpp"
#include "CorrectiveActionGuardianEmailScreen_parameters.hpp"

namespace SDK
{

void UCorrectiveActionGuardianEmailScreen_C::ExecuteUbergraph_CorrectiveActionGuardianEmailScreen(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CorrectiveActionGuardianEmailScreen_C", "ExecuteUbergraph_CorrectiveActionGuardianEmailScreen");

	Params::CorrectiveActionGuardianEmailScreen_C_ExecuteUbergraph_CorrectiveActionGuardianEmailScreen Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

void UCorrectiveActionGuardianEmailScreen_C::OnShowFailureReason(const class FText& FailureReason)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CorrectiveActionGuardianEmailScreen_C", "OnShowFailureReason");

	Params::CorrectiveActionGuardianEmailScreen_C_OnShowFailureReason Parms{};

	Parms.FailureReason = std::move(FailureReason);

	UObject::ProcessEvent(Func, &Parms);
}

void UCorrectiveActionGuardianEmailScreen_C::OnShowCorrectiveActionProcessing(bool bShowProcessing)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CorrectiveActionGuardianEmailScreen_C", "OnShowCorrectiveActionProcessing");

	Params::CorrectiveActionGuardianEmailScreen_C_OnShowCorrectiveActionProcessing Parms{};

	Parms.bShowProcessing = bShowProcessing;

	UObject::ProcessEvent(Func, &Parms);
}

}
