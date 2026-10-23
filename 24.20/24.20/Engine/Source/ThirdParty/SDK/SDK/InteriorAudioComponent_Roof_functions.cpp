#pragma once

#include "Basic.hpp"

#include "InteriorAudioComponent_Roof_classes.hpp"
#include "InteriorAudioComponent_Roof_parameters.hpp"

namespace SDK
{

void UInteriorAudioComponent_Roof_C::ExecuteUbergraph_InteriorAudioComponent_Roof(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("InteriorAudioComponent_Roof_C", "ExecuteUbergraph_InteriorAudioComponent_Roof");

	Params::InteriorAudioComponent_Roof_C_ExecuteUbergraph_InteriorAudioComponent_Roof Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

void UInteriorAudioComponent_Roof_C::ReceiveTick(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("InteriorAudioComponent_Roof_C", "ReceiveTick");

	Params::InteriorAudioComponent_Roof_C_ReceiveTick Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);
}

void UInteriorAudioComponent_Roof_C::Update(struct FInteriorAudioScanResults& ScanResults)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("InteriorAudioComponent_Roof_C", "Update");

	Params::InteriorAudioComponent_Roof_C_Update Parms{};

	Parms.ScanResults = std::move(ScanResults);

	UObject::ProcessEvent(Func, &Parms);

	ScanResults = std::move(Parms.ScanResults);
}

}
