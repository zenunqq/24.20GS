#pragma once

#include "Basic.hpp"

#include "Battlepass_MusicController_Quartz_classes.hpp"
#include "Battlepass_MusicController_Quartz_parameters.hpp"

namespace SDK
{

void ABattlepass_MusicController_Quartz_C::ReceiveDestroyed()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Battlepass_MusicController_Quartz_C", "ReceiveDestroyed");

	UObject::ProcessEvent(Func, nullptr);
}

void ABattlepass_MusicController_Quartz_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Battlepass_MusicController_Quartz_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}

void ABattlepass_MusicController_Quartz_C::ExecuteUbergraph_Battlepass_MusicController_Quartz(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Battlepass_MusicController_Quartz_C", "ExecuteUbergraph_Battlepass_MusicController_Quartz");

	Params::Battlepass_MusicController_Quartz_C_ExecuteUbergraph_Battlepass_MusicController_Quartz Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

}
