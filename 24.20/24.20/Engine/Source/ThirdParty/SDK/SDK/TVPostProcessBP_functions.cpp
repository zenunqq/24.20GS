#pragma once

#include "Basic.hpp"

#include "TVPostProcessBP_classes.hpp"
#include "TVPostProcessBP_parameters.hpp"

namespace SDK
{

void ATVPostProcessBP_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TVPostProcessBP_C", "UserConstructionScript");

	UObject::ProcessEvent(Func, nullptr);
}

void ATVPostProcessBP_C::IsEnabledForCurrentSubgame(bool* bEnabled)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TVPostProcessBP_C", "IsEnabledForCurrentSubgame");

	Params::TVPostProcessBP_C_IsEnabledForCurrentSubgame Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (bEnabled != nullptr)
		*bEnabled = Parms.bEnabled;
}

void ATVPostProcessBP_C::FrontEndCameraSwitch()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TVPostProcessBP_C", "FrontEndCameraSwitch");

	UObject::ProcessEvent(Func, nullptr);
}

void ATVPostProcessBP_C::ExecuteUbergraph_TVPostProcessBP(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TVPostProcessBP_C", "ExecuteUbergraph_TVPostProcessBP");

	Params::TVPostProcessBP_C_ExecuteUbergraph_TVPostProcessBP Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

void ATVPostProcessBP_C::ExecuteCameraSwitch()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TVPostProcessBP_C", "ExecuteCameraSwitch");

	UObject::ProcessEvent(Func, nullptr);
}

void ATVPostProcessBP_C::Camera_DisableEffects()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TVPostProcessBP_C", "Camera_DisableEffects");

	UObject::ProcessEvent(Func, nullptr);
}

}
