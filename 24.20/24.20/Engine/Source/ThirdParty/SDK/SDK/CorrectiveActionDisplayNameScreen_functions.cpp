#pragma once

#include "Basic.hpp"

#include "CorrectiveActionDisplayNameScreen_classes.hpp"
#include "CorrectiveActionDisplayNameScreen_parameters.hpp"

namespace SDK
{

void UCorrectiveActionDisplayNameScreen_C::ExecuteUbergraph_CorrectiveActionDisplayNameScreen(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CorrectiveActionDisplayNameScreen_C", "ExecuteUbergraph_CorrectiveActionDisplayNameScreen");

	Params::CorrectiveActionDisplayNameScreen_C_ExecuteUbergraph_CorrectiveActionDisplayNameScreen Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

void UCorrectiveActionDisplayNameScreen_C::OnShowFailureReason(const class FText& FailureReason)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CorrectiveActionDisplayNameScreen_C", "OnShowFailureReason");

	Params::CorrectiveActionDisplayNameScreen_C_OnShowFailureReason Parms{};

	Parms.FailureReason = std::move(FailureReason);

	UObject::ProcessEvent(Func, &Parms);
}

void UCorrectiveActionDisplayNameScreen_C::OnShowDisplayNameDownloading(bool bShowDownloading)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CorrectiveActionDisplayNameScreen_C", "OnShowDisplayNameDownloading");

	Params::CorrectiveActionDisplayNameScreen_C_OnShowDisplayNameDownloading Parms{};

	Parms.bShowDownloading = bShowDownloading;

	UObject::ProcessEvent(Func, &Parms);
}

void UCorrectiveActionDisplayNameScreen_C::OnShowCorrectiveActionProcessing(bool bShowProcessing)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CorrectiveActionDisplayNameScreen_C", "OnShowCorrectiveActionProcessing");

	Params::CorrectiveActionDisplayNameScreen_C_OnShowCorrectiveActionProcessing Parms{};

	Parms.bShowProcessing = bShowProcessing;

	UObject::ProcessEvent(Func, &Parms);
}

}
