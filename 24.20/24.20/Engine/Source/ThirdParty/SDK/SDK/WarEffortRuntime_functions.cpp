#pragma once

#include "Basic.hpp"

#include "WarEffortRuntime_classes.hpp"
#include "WarEffortRuntime_parameters.hpp"

namespace SDK
{

void AFundingManager::BroadcaseUpdatedFundsMessage(const struct FItemFundingUpdatedFundingData& Payload)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FundingManager", "BroadcaseUpdatedFundsMessage");

	Params::FundingManager_BroadcaseUpdatedFundsMessage Parms{};

	Parms.Payload = std::move(Payload);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

}
