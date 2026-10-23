#pragma once

#include "Basic.hpp"

#include "InteriorAudioComponent_Debug_classes.hpp"
#include "InteriorAudioComponent_Debug_parameters.hpp"

namespace SDK
{

void UInteriorAudioComponent_Debug_C::Update(struct FInteriorAudioScanResults& ScanResults)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("InteriorAudioComponent_Debug_C", "Update");

	Params::InteriorAudioComponent_Debug_C_Update Parms{};

	Parms.ScanResults = std::move(ScanResults);

	UObject::ProcessEvent(Func, &Parms);

	ScanResults = std::move(Parms.ScanResults);
}

}
