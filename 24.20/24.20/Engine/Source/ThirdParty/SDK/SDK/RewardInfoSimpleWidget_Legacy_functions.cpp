#pragma once

#include "Basic.hpp"

#include "RewardInfoSimpleWidget_Legacy_classes.hpp"
#include "RewardInfoSimpleWidget_Legacy_parameters.hpp"

namespace SDK
{

void URewardInfoSimpleWidget_Legacy_C::ExecuteUbergraph_RewardInfoSimpleWidget_Legacy(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RewardInfoSimpleWidget_Legacy_C", "ExecuteUbergraph_RewardInfoSimpleWidget_Legacy");

	Params::RewardInfoSimpleWidget_Legacy_C_ExecuteUbergraph_RewardInfoSimpleWidget_Legacy Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

void URewardInfoSimpleWidget_Legacy_C::GetDisplayName(class FText* DisplayName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RewardInfoSimpleWidget_Legacy_C", "GetDisplayName");

	Params::RewardInfoSimpleWidget_Legacy_C_GetDisplayName Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (DisplayName != nullptr)
		*DisplayName = std::move(Parms.DisplayName);
}

void URewardInfoSimpleWidget_Legacy_C::HandleDifferentItemOrQuantitySetBP()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RewardInfoSimpleWidget_Legacy_C", "HandleDifferentItemOrQuantitySetBP");

	UObject::ProcessEvent(Func, nullptr);
}

}
