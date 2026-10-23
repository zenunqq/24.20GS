#pragma once

#include "Basic.hpp"

#include "GCNL_EdgeOfStorm_classes.hpp"
#include "GCNL_EdgeOfStorm_parameters.hpp"

namespace SDK
{

void AGCNL_EdgeOfStorm_C::Activated(const struct FVector& EdgeOfStorm)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GCNL_EdgeOfStorm_C", "Activated");

	Params::GCNL_EdgeOfStorm_C_Activated Parms{};

	Parms.EdgeOfStorm = std::move(EdgeOfStorm);

	UObject::ProcessEvent(Func, &Parms);
}

void AGCNL_EdgeOfStorm_C::Deactivated()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GCNL_EdgeOfStorm_C", "Deactivated");

	UObject::ProcessEvent(Func, nullptr);
}

void AGCNL_EdgeOfStorm_C::ExecuteUbergraph_GCNL_EdgeOfStorm(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GCNL_EdgeOfStorm_C", "ExecuteUbergraph_GCNL_EdgeOfStorm");

	Params::GCNL_EdgeOfStorm_C_ExecuteUbergraph_GCNL_EdgeOfStorm Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

bool AGCNL_EdgeOfStorm_C::OnActive(class AActor* MyTarget, const struct FGameplayCueParameters& Parameters)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GCNL_EdgeOfStorm_C", "OnActive");

	Params::GCNL_EdgeOfStorm_C_OnActive Parms{};

	Parms.MyTarget = MyTarget;
	Parms.Parameters = std::move(Parameters);

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

bool AGCNL_EdgeOfStorm_C::OnExecute(class AActor* MyTarget, const struct FGameplayCueParameters& Parameters)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GCNL_EdgeOfStorm_C", "OnExecute");

	Params::GCNL_EdgeOfStorm_C_OnExecute Parms{};

	Parms.MyTarget = MyTarget;
	Parms.Parameters = std::move(Parameters);

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

bool AGCNL_EdgeOfStorm_C::OnRemove(class AActor* MyTarget, const struct FGameplayCueParameters& Parameters)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GCNL_EdgeOfStorm_C", "OnRemove");

	Params::GCNL_EdgeOfStorm_C_OnRemove Parms{};

	Parms.MyTarget = MyTarget;
	Parms.Parameters = std::move(Parameters);

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

}
