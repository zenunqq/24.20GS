#pragma once

#include "Basic.hpp"

#include "PointLight_classes.hpp"
#include "PointLight_parameters.hpp"

namespace SDK
{

void UPointLightNativeComponent::StartRhythmUpdate(struct FTimerHandle* TimerHandle, float Rate)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PointLightNativeComponent", "StartRhythmUpdate");

	Params::PointLightNativeComponent_StartRhythmUpdate Parms{};

	Parms.Rate = Rate;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	if (TimerHandle != nullptr)
		*TimerHandle = std::move(Parms.TimerHandle);
}

void UPointLightNativeComponent::StartShortCircuitUpdate(class UTimelineComponent* ShortCircuitTimeline)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PointLightNativeComponent", "StartShortCircuitUpdate");

	Params::PointLightNativeComponent_StartShortCircuitUpdate Parms{};

	Parms.ShortCircuitTimeline = ShortCircuitTimeline;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UPointLightNativeComponent::StopShortCircuitUpdate()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PointLightNativeComponent", "StopShortCircuitUpdate");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void UPointLightNativeComponent::UpdateDeviceSettings(const struct FPointLightRhythmParameters& RhythmParameters)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PointLightNativeComponent", "UpdateDeviceSettings");

	Params::PointLightNativeComponent_UpdateDeviceSettings Parms{};

	Parms.RhythmParameters = std::move(RhythmParameters);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UPointLightNativeComponent::UpdateShortCircuit()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PointLightNativeComponent", "UpdateShortCircuit");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

}
