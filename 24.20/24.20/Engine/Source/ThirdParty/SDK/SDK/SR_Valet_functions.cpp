#pragma once

#include "Basic.hpp"

#include "SR_Valet_classes.hpp"
#include "SR_Valet_parameters.hpp"

namespace SDK
{

void USR_Valet_C::ExecuteUbergraph_SR_Valet(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SR_Valet_C", "ExecuteUbergraph_SR_Valet");

	Params::SR_Valet_C_ExecuteUbergraph_SR_Valet Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

void USR_Valet_C::On_Source_Played(class UStreamingRadioPlayerComponent* Component, const struct FAthenaRadioStation& AffectedSource)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SR_Valet_C", "On Source Played");

	Params::SR_Valet_C_On_Source_Played Parms{};

	Parms.Component = Component;
	Parms.AffectedSource = std::move(AffectedSource);

	UObject::ProcessEvent(Func, &Parms);
}

void USR_Valet_C::On_Source_Stopped(class UStreamingRadioPlayerComponent* Component, const struct FAthenaRadioStation& AffectedSource)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SR_Valet_C", "On Source Stopped");

	Params::SR_Valet_C_On_Source_Stopped Parms{};

	Parms.Component = Component;
	Parms.AffectedSource = std::move(AffectedSource);

	UObject::ProcessEvent(Func, &Parms);
}

void USR_Valet_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SR_Valet_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}

void USR_Valet_C::ReceiveEndPlay(EEndPlayReason EndPlayReason)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SR_Valet_C", "ReceiveEndPlay");

	Params::SR_Valet_C_ReceiveEndPlay Parms{};

	Parms.EndPlayReason = EndPlayReason;

	UObject::ProcessEvent(Func, &Parms);
}

bool USR_Valet_C::CanApplyHolster(const class FName& HolsterId) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SR_Valet_C", "CanApplyHolster");

	Params::SR_Valet_C_CanApplyHolster Parms{};

	Parms.HolsterId = HolsterId;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

}
