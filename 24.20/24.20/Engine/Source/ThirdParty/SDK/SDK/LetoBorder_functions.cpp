#pragma once

#include "Basic.hpp"

#include "LetoBorder_classes.hpp"
#include "LetoBorder_parameters.hpp"

namespace SDK
{

void ULetoBorder_C::ExecuteUbergraph_LetoBorder(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LetoBorder_C", "ExecuteUbergraph_LetoBorder");

	Params::LetoBorder_C_ExecuteUbergraph_LetoBorder Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

void ULetoBorder_C::UpdateBorderWidth(float HalfBorderWidth)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LetoBorder_C", "UpdateBorderWidth");

	Params::LetoBorder_C_UpdateBorderWidth Parms{};

	Parms.HalfBorderWidth = HalfBorderWidth;

	UObject::ProcessEvent(Func, &Parms);
}

}
