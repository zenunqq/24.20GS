#pragma once

#include "Basic.hpp"

#include "ProgressiveSetDetails_classes.hpp"
#include "ProgressiveSetDetails_parameters.hpp"

namespace SDK
{

void UProgressiveSetDetails_C::Update_Tag(const class FText& Expiring_Text, const bool Completed)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ProgressiveSetDetails_C", "Update Tag");

	Params::ProgressiveSetDetails_C_Update_Tag Parms{};

	Parms.Expiring_Text = std::move(Expiring_Text);
	Parms.Completed = Completed;

	UObject::ProcessEvent(Func, &Parms);
}

void UProgressiveSetDetails_C::ExecuteUbergraph_ProgressiveSetDetails(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ProgressiveSetDetails_C", "ExecuteUbergraph_ProgressiveSetDetails");

	Params::ProgressiveSetDetails_C_ExecuteUbergraph_ProgressiveSetDetails Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

void UProgressiveSetDetails_C::BP_OnUpdateSetDetails(const class FText& SetName, const class FText& ExpiringText, const bool bCompleted)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ProgressiveSetDetails_C", "BP_OnUpdateSetDetails");

	Params::ProgressiveSetDetails_C_BP_OnUpdateSetDetails Parms{};

	Parms.SetName = std::move(SetName);
	Parms.ExpiringText = std::move(ExpiringText);
	Parms.bCompleted = bCompleted;

	UObject::ProcessEvent(Func, &Parms);
}

}
