#pragma once

#include "Basic.hpp"

#include "CareerScreen_classes.hpp"
#include "CareerScreen_parameters.hpp"

namespace SDK
{

void UCareerScreen_C::BP_OnActivated()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CareerScreen_C", "BP_OnActivated");

	UObject::ProcessEvent(Func, nullptr);
}

void UCareerScreen_C::ExecuteUbergraph_CareerScreen(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CareerScreen_C", "ExecuteUbergraph_CareerScreen");

	Params::CareerScreen_C_ExecuteUbergraph_CareerScreen Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

void UCareerScreen_C::OnInitialized()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CareerScreen_C", "OnInitialized");

	UObject::ProcessEvent(Func, nullptr);
}

void UCareerScreen_C::PlayCinematic()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CareerScreen_C", "PlayCinematic");

	UObject::ProcessEvent(Func, nullptr);
}

void UCareerScreen_C::ReplayCinematic(bool* PassThrough)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CareerScreen_C", "ReplayCinematic");

	Params::CareerScreen_C_ReplayCinematic Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (PassThrough != nullptr)
		*PassThrough = Parms.PassThrough;
}

void UCareerScreen_C::ShowFeats(bool bHasCompletedFeats)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CareerScreen_C", "ShowFeats");

	Params::CareerScreen_C_ShowFeats Parms{};

	Parms.bHasCompletedFeats = bHasCompletedFeats;

	UObject::ProcessEvent(Func, &Parms);
}

}
