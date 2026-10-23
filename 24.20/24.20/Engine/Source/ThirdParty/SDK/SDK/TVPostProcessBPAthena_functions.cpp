#pragma once

#include "Basic.hpp"

#include "TVPostProcessBPAthena_classes.hpp"
#include "TVPostProcessBPAthena_parameters.hpp"

namespace SDK
{

void ATVPostProcessBPAthena_C::FrontEndCameraSwitchFadeAthena__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TVPostProcessBPAthena_C", "FrontEndCameraSwitchFadeAthena__UpdateFunc");

	UObject::ProcessEvent(Func, nullptr);
}

void ATVPostProcessBPAthena_C::FrontEndCameraSwitchFadeAthena__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TVPostProcessBPAthena_C", "FrontEndCameraSwitchFadeAthena__FinishedFunc");

	UObject::ProcessEvent(Func, nullptr);
}

void ATVPostProcessBPAthena_C::ExecuteUbergraph_TVPostProcessBPAthena(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TVPostProcessBPAthena_C", "ExecuteUbergraph_TVPostProcessBPAthena");

	Params::TVPostProcessBPAthena_C_ExecuteUbergraph_TVPostProcessBPAthena Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

void ATVPostProcessBPAthena_C::IsEnabledForCurrentSubgame(bool* bEnabled)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TVPostProcessBPAthena_C", "IsEnabledForCurrentSubgame");

	Params::TVPostProcessBPAthena_C_IsEnabledForCurrentSubgame Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (bEnabled != nullptr)
		*bEnabled = Parms.bEnabled;
}

void ATVPostProcessBPAthena_C::ExecuteCameraSwitch()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TVPostProcessBPAthena_C", "ExecuteCameraSwitch");

	UObject::ProcessEvent(Func, nullptr);
}

void ATVPostProcessBPAthena_C::Camera_DisableEffects()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TVPostProcessBPAthena_C", "Camera_DisableEffects");

	UObject::ProcessEvent(Func, nullptr);
}

}
