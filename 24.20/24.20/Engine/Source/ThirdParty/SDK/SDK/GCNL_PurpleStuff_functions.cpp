#pragma once

#include "Basic.hpp"

#include "GCNL_PurpleStuff_classes.hpp"
#include "GCNL_PurpleStuff_parameters.hpp"

namespace SDK
{

void AGCNL_PurpleStuff_C::ExecuteUbergraph_GCNL_PurpleStuff(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GCNL_PurpleStuff_C", "ExecuteUbergraph_GCNL_PurpleStuff");

	Params::GCNL_PurpleStuff_C_ExecuteUbergraph_GCNL_PurpleStuff Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

bool AGCNL_PurpleStuff_C::OnActive(class AActor* MyTarget, const struct FGameplayCueParameters& Parameters)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GCNL_PurpleStuff_C", "OnActive");

	Params::GCNL_PurpleStuff_C_OnActive Parms{};

	Parms.MyTarget = MyTarget;
	Parms.Parameters = std::move(Parameters);

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

bool AGCNL_PurpleStuff_C::OnRemove(class AActor* MyTarget, const struct FGameplayCueParameters& Parameters)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GCNL_PurpleStuff_C", "OnRemove");

	Params::GCNL_PurpleStuff_C_OnRemove Parms{};

	Parms.MyTarget = MyTarget;
	Parms.Parameters = std::move(Parameters);

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

void AGCNL_PurpleStuff_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GCNL_PurpleStuff_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}

void AGCNL_PurpleStuff_C::ReceiveTick(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GCNL_PurpleStuff_C", "ReceiveTick");

	Params::GCNL_PurpleStuff_C_ReceiveTick Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);
}

}
