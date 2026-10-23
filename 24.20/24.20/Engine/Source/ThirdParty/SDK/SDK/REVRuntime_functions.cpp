#pragma once

#include "Basic.hpp"

#include "REVRuntime_classes.hpp"
#include "REVRuntime_parameters.hpp"

namespace SDK
{

void UREVComponent::SetRevModel(class UREVModel* InModel)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("REVComponent", "SetRevModel");

	Params::REVComponent_SetRevModel Parms{};

	Parms.InModel = InModel;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UREVComponent::SetSettings(class URevSettings* InSettings)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("REVComponent", "SetSettings");

	Params::REVComponent_SetSettings Parms{};

	Parms.InSettings = InSettings;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UREVComponent::UpdateParameters(const float InPitch, const float InRPM, const float InThrottle, const float InVelocity, const int32 InGear, const bool bInEnableShifting)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("REVComponent", "UpdateParameters");

	Params::REVComponent_UpdateParameters Parms{};

	Parms.InPitch = InPitch;
	Parms.InRPM = InRPM;
	Parms.InThrottle = InThrottle;
	Parms.InVelocity = InVelocity;
	Parms.InGear = InGear;
	Parms.bInEnableShifting = bInEnableShifting;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UREVComponent::UpdateSimSettings()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("REVComponent", "UpdateSimSettings");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void URevSettings::UpdateSettings()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RevSettings", "UpdateSettings");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

}
