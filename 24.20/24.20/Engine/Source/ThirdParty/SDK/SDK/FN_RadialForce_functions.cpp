#pragma once

#include "Basic.hpp"

#include "FN_RadialForce_classes.hpp"
#include "FN_RadialForce_parameters.hpp"

namespace SDK
{

void AFN_RadialForce_C::ExecuteUbergraph_FN_RadialForce(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FN_RadialForce_C", "ExecuteUbergraph_FN_RadialForce");

	Params::FN_RadialForce_C_ExecuteUbergraph_FN_RadialForce Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

struct FTransform AFN_RadialForce_C::NewFunction_0(double Roll, double Scale_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FN_RadialForce_C", "NewFunction_0");

	Params::FN_RadialForce_C_NewFunction_0 Parms{};

	Parms.Roll = Roll;
	Parms.Scale_0 = Scale_0;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

void AFN_RadialForce_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FN_RadialForce_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}

void AFN_RadialForce_C::Timeline_0__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FN_RadialForce_C", "Timeline_0__FinishedFunc");

	UObject::ProcessEvent(Func, nullptr);
}

void AFN_RadialForce_C::Timeline_0__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FN_RadialForce_C", "Timeline_0__UpdateFunc");

	UObject::ProcessEvent(Func, nullptr);
}

}
