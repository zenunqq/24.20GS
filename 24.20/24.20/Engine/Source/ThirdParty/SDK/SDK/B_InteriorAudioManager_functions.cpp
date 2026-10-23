#pragma once

#include "Basic.hpp"

#include "B_InteriorAudioManager_classes.hpp"
#include "B_InteriorAudioManager_parameters.hpp"

namespace SDK
{

void AB_InteriorAudioManager_C::ExecuteUbergraph_B_InteriorAudioManager(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_InteriorAudioManager_C", "ExecuteUbergraph_B_InteriorAudioManager");

	Params::B_InteriorAudioManager_C_ExecuteUbergraph_B_InteriorAudioManager Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

void AB_InteriorAudioManager_C::OnComponentAdded(class UInteriorAudioComponent_C* Component)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_InteriorAudioManager_C", "OnComponentAdded");

	Params::B_InteriorAudioManager_C_OnComponentAdded Parms{};

	Parms.Component = Component;

	UObject::ProcessEvent(Func, &Parms);
}

void AB_InteriorAudioManager_C::OnComponentRemoved(class UInteriorAudioComponent_C* Component)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_InteriorAudioManager_C", "OnComponentRemoved");

	Params::B_InteriorAudioManager_C_OnComponentRemoved Parms{};

	Parms.Component = Component;

	UObject::ProcessEvent(Func, &Parms);
}

void AB_InteriorAudioManager_C::UpdateAmbientAudio(const struct FInteriorAudioScanResults& ScanResults)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_InteriorAudioManager_C", "UpdateAmbientAudio");

	Params::B_InteriorAudioManager_C_UpdateAmbientAudio Parms{};

	Parms.ScanResults = std::move(ScanResults);

	UObject::ProcessEvent(Func, &Parms);
}

}
