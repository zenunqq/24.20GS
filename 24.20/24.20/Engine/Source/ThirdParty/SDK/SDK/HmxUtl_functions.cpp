#pragma once

#include "Basic.hpp"

#include "HmxUtl_classes.hpp"
#include "HmxUtl_parameters.hpp"

namespace SDK
{

class UBlackboardComponent* ABehaviorTreeActor::GetBlackboard()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BehaviorTreeActor", "GetBlackboard");

	Params::BehaviorTreeActor_GetBlackboard Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

bool ABehaviorTreeActor::RunBehaviorTree()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BehaviorTreeActor", "RunBehaviorTree");

	Params::BehaviorTreeActor_RunBehaviorTree Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

bool UHmxBPFL::IsNone(const class FName& Name_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("HmxBPFL", "IsNone");

	Params::HmxBPFL_IsNone Parms{};

	Parms.Name_0 = Name_0;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

int32 UHmxBPFL::LoopDecrement(int32 Value, int32 min_0, int32 max_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("HmxBPFL", "LoopDecrement");

	Params::HmxBPFL_LoopDecrement Parms{};

	Parms.Value = Value;
	Parms.min_0 = min_0;
	Parms.max_0 = max_0;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

int32 UHmxBPFL::LoopIncrement(int32 Value, int32 min_0, int32 max_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("HmxBPFL", "LoopIncrement");

	Params::HmxBPFL_LoopIncrement Parms{};

	Parms.Value = Value;
	Parms.min_0 = min_0;
	Parms.max_0 = max_0;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

int32 UHmxBPFL::Modulo(int32 Value, int32 Mod)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("HmxBPFL", "Modulo");

	Params::HmxBPFL_Modulo Parms{};

	Parms.Value = Value;
	Parms.Mod = Mod;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

}
