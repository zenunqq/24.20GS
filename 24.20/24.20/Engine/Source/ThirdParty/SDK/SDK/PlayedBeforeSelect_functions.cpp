#pragma once

#include "Basic.hpp"

#include "PlayedBeforeSelect_classes.hpp"
#include "PlayedBeforeSelect_parameters.hpp"

namespace SDK
{

void UPlayedBeforeSelect_C::OnActivated_1()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlayedBeforeSelect_C", "OnActivated_1");

	UObject::ProcessEvent(Func, nullptr);
}

void UPlayedBeforeSelect_C::ExecuteUbergraph_PlayedBeforeSelect(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlayedBeforeSelect_C", "ExecuteUbergraph_PlayedBeforeSelect");

	Params::PlayedBeforeSelect_C_ExecuteUbergraph_PlayedBeforeSelect Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

}
