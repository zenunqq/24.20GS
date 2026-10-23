#pragma once

#include "Basic.hpp"

#include "B_Athena_PartModifier_Headband_LimaBean_classes.hpp"
#include "B_Athena_PartModifier_Headband_LimaBean_parameters.hpp"

namespace SDK
{

void AB_Athena_PartModifier_Headband_LimaBean_C::ExecuteUbergraph_B_Athena_PartModifier_Headband_LimaBean(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_Athena_PartModifier_Headband_LimaBean_C", "ExecuteUbergraph_B_Athena_PartModifier_Headband_LimaBean");

	Params::B_Athena_PartModifier_Headband_LimaBean_C_ExecuteUbergraph_B_Athena_PartModifier_Headband_LimaBean Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

void AB_Athena_PartModifier_Headband_LimaBean_C::On_Player_Start_DBNO()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_Athena_PartModifier_Headband_LimaBean_C", "On Player Start DBNO");

	UObject::ProcessEvent(Func, nullptr);
}

void AB_Athena_PartModifier_Headband_LimaBean_C::OnPawnAndPartChanged()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_Athena_PartModifier_Headband_LimaBean_C", "OnPawnAndPartChanged");

	UObject::ProcessEvent(Func, nullptr);
}

}
