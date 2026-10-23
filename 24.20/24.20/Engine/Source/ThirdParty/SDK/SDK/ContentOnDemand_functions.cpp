#pragma once

#include "Basic.hpp"

#include "ContentOnDemand_classes.hpp"
#include "ContentOnDemand_parameters.hpp"

namespace SDK
{

void UContentOnDemand_C::OnUpdatedState(int32 NumActiveDownloads, int32 NumErrors)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ContentOnDemand_C", "OnUpdatedState");

	Params::ContentOnDemand_C_OnUpdatedState Parms{};

	Parms.NumActiveDownloads = NumActiveDownloads;
	Parms.NumErrors = NumErrors;

	UObject::ProcessEvent(Func, &Parms);
}

void UContentOnDemand_C::ExecuteUbergraph_ContentOnDemand(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ContentOnDemand_C", "ExecuteUbergraph_ContentOnDemand");

	Params::ContentOnDemand_C_ExecuteUbergraph_ContentOnDemand Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

void UContentOnDemand_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ContentOnDemand_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}

}
