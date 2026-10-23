#pragma once

#include "Basic.hpp"

#include "EyeTracker_classes.hpp"
#include "EyeTracker_parameters.hpp"

namespace SDK
{

bool UEyeTrackerFunctionLibrary::GetGazeData(struct FEyeTrackerGazeData* OutGazeData)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("EyeTrackerFunctionLibrary", "GetGazeData");

	Params::EyeTrackerFunctionLibrary_GetGazeData Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	if (OutGazeData != nullptr)
		*OutGazeData = std::move(Parms.OutGazeData);

	return Parms.ReturnValue;
}

bool UEyeTrackerFunctionLibrary::GetStereoGazeData(struct FEyeTrackerStereoGazeData* OutGazeData)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("EyeTrackerFunctionLibrary", "GetStereoGazeData");

	Params::EyeTrackerFunctionLibrary_GetStereoGazeData Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	if (OutGazeData != nullptr)
		*OutGazeData = std::move(Parms.OutGazeData);

	return Parms.ReturnValue;
}

bool UEyeTrackerFunctionLibrary::IsEyeTrackerConnected()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("EyeTrackerFunctionLibrary", "IsEyeTrackerConnected");

	Params::EyeTrackerFunctionLibrary_IsEyeTrackerConnected Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

bool UEyeTrackerFunctionLibrary::IsStereoGazeDataAvailable()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("EyeTrackerFunctionLibrary", "IsStereoGazeDataAvailable");

	Params::EyeTrackerFunctionLibrary_IsStereoGazeDataAvailable Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

void UEyeTrackerFunctionLibrary::SetEyeTrackedPlayer(class APlayerController* PlayerController)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("EyeTrackerFunctionLibrary", "SetEyeTrackedPlayer");

	Params::EyeTrackerFunctionLibrary_SetEyeTrackedPlayer Parms{};

	Parms.PlayerController = PlayerController;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

}
