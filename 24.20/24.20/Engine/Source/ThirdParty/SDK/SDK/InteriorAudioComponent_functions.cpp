#pragma once

#include "Basic.hpp"

#include "InteriorAudioComponent_classes.hpp"
#include "InteriorAudioComponent_parameters.hpp"

namespace SDK
{

void UInteriorAudioComponent_C::ExecuteUbergraph_InteriorAudioComponent(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("InteriorAudioComponent_C", "ExecuteUbergraph_InteriorAudioComponent");

	Params::InteriorAudioComponent_C_ExecuteUbergraph_InteriorAudioComponent Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

void UInteriorAudioComponent_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("InteriorAudioComponent_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}

void UInteriorAudioComponent_C::ReceiveEndPlay(EEndPlayReason EndPlayReason)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("InteriorAudioComponent_C", "ReceiveEndPlay");

	Params::InteriorAudioComponent_C_ReceiveEndPlay Parms{};

	Parms.EndPlayReason = EndPlayReason;

	UObject::ProcessEvent(Func, &Parms);
}

void UInteriorAudioComponent_C::Update(struct FInteriorAudioScanResults& ScanResults)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("InteriorAudioComponent_C", "Update");

	Params::InteriorAudioComponent_C_Update Parms{};

	Parms.ScanResults = std::move(ScanResults);

	UObject::ProcessEvent(Func, &Parms);

	ScanResults = std::move(Parms.ScanResults);
}

}
