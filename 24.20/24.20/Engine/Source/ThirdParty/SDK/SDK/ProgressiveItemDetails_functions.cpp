#pragma once

#include "Basic.hpp"

#include "ProgressiveItemDetails_classes.hpp"
#include "ProgressiveItemDetails_parameters.hpp"

namespace SDK
{

void UProgressiveItemDetails_C::ExecuteUbergraph_ProgressiveItemDetails(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ProgressiveItemDetails_C", "ExecuteUbergraph_ProgressiveItemDetails");

	Params::ProgressiveItemDetails_C_ExecuteUbergraph_ProgressiveItemDetails Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

void UProgressiveItemDetails_C::UpdateSubscribedVisuals(bool IsSubscribed)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ProgressiveItemDetails_C", "UpdateSubscribedVisuals");

	Params::ProgressiveItemDetails_C_UpdateSubscribedVisuals Parms{};

	Parms.IsSubscribed = IsSubscribed;

	UObject::ProcessEvent(Func, &Parms);
}

}
