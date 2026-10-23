#pragma once

#include "Basic.hpp"

#include "LandscapeWaterInfo_classes.hpp"
#include "LandscapeWaterInfo_parameters.hpp"

namespace SDK
{

void ALandscapeWaterInfo_C::ExecuteUbergraph_LandscapeWaterInfo(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LandscapeWaterInfo_C", "ExecuteUbergraph_LandscapeWaterInfo");

	Params::LandscapeWaterInfo_C_ExecuteUbergraph_LandscapeWaterInfo Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

void ALandscapeWaterInfo_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LandscapeWaterInfo_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}

void ALandscapeWaterInfo_C::Set_Flood_Water_Level()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LandscapeWaterInfo_C", "Set Flood Water Level");

	UObject::ProcessEvent(Func, nullptr);
}

}
