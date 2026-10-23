#pragma once

#include "Basic.hpp"

#include "ActivatableMovieWidget_classes.hpp"
#include "ActivatableMovieWidget_parameters.hpp"

namespace SDK
{

void UActivatableMovieWidget_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ActivatableMovieWidget_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}

void UActivatableMovieWidget_C::ExecuteUbergraph_ActivatableMovieWidget(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ActivatableMovieWidget_C", "ExecuteUbergraph_ActivatableMovieWidget");

	Params::ActivatableMovieWidget_C_ExecuteUbergraph_ActivatableMovieWidget Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

}
