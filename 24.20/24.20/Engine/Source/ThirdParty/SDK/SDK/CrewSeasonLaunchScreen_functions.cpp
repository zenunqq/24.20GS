#pragma once

#include "Basic.hpp"

#include "CrewSeasonLaunchScreen_classes.hpp"
#include "CrewSeasonLaunchScreen_parameters.hpp"

namespace SDK
{

void UCrewSeasonLaunchScreen_C::ExecuteUbergraph_CrewSeasonLaunchScreen(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CrewSeasonLaunchScreen_C", "ExecuteUbergraph_CrewSeasonLaunchScreen");

	Params::CrewSeasonLaunchScreen_C_ExecuteUbergraph_CrewSeasonLaunchScreen Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

void UCrewSeasonLaunchScreen_C::OnDownloadBackgroundComplete(class UTexture2D* NewBackground)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CrewSeasonLaunchScreen_C", "OnDownloadBackgroundComplete");

	Params::CrewSeasonLaunchScreen_C_OnDownloadBackgroundComplete Parms{};

	Parms.NewBackground = NewBackground;

	UObject::ProcessEvent(Func, &Parms);
}

}
