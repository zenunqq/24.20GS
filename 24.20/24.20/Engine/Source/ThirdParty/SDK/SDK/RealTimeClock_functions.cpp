#pragma once

#include "Basic.hpp"

#include "RealTimeClock_classes.hpp"
#include "RealTimeClock_parameters.hpp"

namespace SDK
{

struct FDateTime URealTimeClockBlueprintLibrary::AddTimeToDate(const struct FDateTime& DateTime, const struct FTimespan& Timespan)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("RealTimeClockBlueprintLibrary", "AddTimeToDate");

	Params::RealTimeClockBlueprintLibrary_AddTimeToDate Parms{};

	Parms.DateTime = std::move(DateTime);
	Parms.Timespan = std::move(Timespan);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

}
