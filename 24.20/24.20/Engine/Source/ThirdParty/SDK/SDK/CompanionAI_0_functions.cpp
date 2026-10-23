#pragma once

#include "Basic.hpp"

#include "CompanionAI_0_classes.hpp"
#include "CompanionAI_0_parameters.hpp"

namespace SDK
{

void UPingComponentBase::HandleOnNPCConvertedEvent(class AFortPawn* InstigatorPawn, class AFortPawn* ConvertedPawn)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PingComponentBase", "HandleOnNPCConvertedEvent");

	Params::PingComponentBase_HandleOnNPCConvertedEvent Parms{};

	Parms.InstigatorPawn = InstigatorPawn;
	Parms.ConvertedPawn = ConvertedPawn;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UPingComponentBase::HandleOnNPCUnconvertedEvent(class AFortPawn* UnconvertedFortPawn, EUnconvertReason UnconvertReason)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PingComponentBase", "HandleOnNPCUnconvertedEvent");

	Params::PingComponentBase_HandleOnNPCUnconvertedEvent Parms{};

	Parms.UnconvertedFortPawn = UnconvertedFortPawn;
	Parms.UnconvertReason = UnconvertReason;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

}
