#pragma once

#include "Basic.hpp"

#include "UnderwaterAudioComponent_classes.hpp"
#include "UnderwaterAudioComponent_parameters.hpp"

namespace SDK
{

void UUnderwaterAudioComponent_C::ExecuteUbergraph_UnderwaterAudioComponent(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UnderwaterAudioComponent_C", "ExecuteUbergraph_UnderwaterAudioComponent");

	Params::UnderwaterAudioComponent_C_ExecuteUbergraph_UnderwaterAudioComponent Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

void UUnderwaterAudioComponent_C::On_Camera_Underwater_State_Changed(bool bIsUnderWater, float DepthUnderwater)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UnderwaterAudioComponent_C", "On Camera Underwater State Changed");

	Params::UnderwaterAudioComponent_C_On_Camera_Underwater_State_Changed Parms{};

	Parms.bIsUnderWater = bIsUnderWater;
	Parms.DepthUnderwater = DepthUnderwater;

	UObject::ProcessEvent(Func, &Parms);
}

void UUnderwaterAudioComponent_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UnderwaterAudioComponent_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}

void UUnderwaterAudioComponent_C::ReceiveEndPlay(EEndPlayReason EndPlayReason)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UnderwaterAudioComponent_C", "ReceiveEndPlay");

	Params::UnderwaterAudioComponent_C_ReceiveEndPlay Parms{};

	Parms.EndPlayReason = EndPlayReason;

	UObject::ProcessEvent(Func, &Parms);
}

}
