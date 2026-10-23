#pragma once

#include "Basic.hpp"

#include "StateTreeModule_classes.hpp"
#include "StateTreeModule_parameters.hpp"

namespace SDK
{

void UStateTreeNodeBlueprintBase::RequestTransition(const struct FStateTreeStateLink& TargetState, const EStateTreeTransitionPriority Priority)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("StateTreeNodeBlueprintBase", "RequestTransition");

	Params::StateTreeNodeBlueprintBase_RequestTransition Parms{};

	Parms.TargetState = std::move(TargetState);
	Parms.Priority = Priority;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UStateTreeNodeBlueprintBase::SendEvent(const struct FStateTreeEvent& Event)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("StateTreeNodeBlueprintBase", "SendEvent");

	Params::StateTreeNodeBlueprintBase_SendEvent Parms{};

	Parms.Event = std::move(Event);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

bool UStateTreeConditionBlueprintBase::ReceiveTestCondition() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("StateTreeConditionBlueprintBase", "ReceiveTestCondition");

	Params::StateTreeConditionBlueprintBase_ReceiveTestCondition Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

void UStateTreeEvaluatorBlueprintBase::ReceiveTick(const float DeltaTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("StateTreeEvaluatorBlueprintBase", "ReceiveTick");

	Params::StateTreeEvaluatorBlueprintBase_ReceiveTick Parms{};

	Parms.DeltaTime = DeltaTime;

	UObject::ProcessEvent(Func, &Parms);
}

void UStateTreeEvaluatorBlueprintBase::ReceiveTreeStart()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("StateTreeEvaluatorBlueprintBase", "ReceiveTreeStart");

	UObject::ProcessEvent(Func, nullptr);
}

void UStateTreeEvaluatorBlueprintBase::ReceiveTreeStop()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("StateTreeEvaluatorBlueprintBase", "ReceiveTreeStop");

	UObject::ProcessEvent(Func, nullptr);
}

EStateTreeRunStatus UStateTreeTaskBlueprintBase::ReceiveEnterState(const struct FStateTreeTransitionResult& TRANSITION)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("StateTreeTaskBlueprintBase", "ReceiveEnterState");

	Params::StateTreeTaskBlueprintBase_ReceiveEnterState Parms{};

	Parms.TRANSITION = std::move(TRANSITION);

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

void UStateTreeTaskBlueprintBase::ReceiveExitState(const struct FStateTreeTransitionResult& TRANSITION)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("StateTreeTaskBlueprintBase", "ReceiveExitState");

	Params::StateTreeTaskBlueprintBase_ReceiveExitState Parms{};

	Parms.TRANSITION = std::move(TRANSITION);

	UObject::ProcessEvent(Func, &Parms);
}

void UStateTreeTaskBlueprintBase::ReceiveStateCompleted(const EStateTreeRunStatus CompletionStatus, const struct FStateTreeActiveStates& CompletedActiveStates)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("StateTreeTaskBlueprintBase", "ReceiveStateCompleted");

	Params::StateTreeTaskBlueprintBase_ReceiveStateCompleted Parms{};

	Parms.CompletionStatus = CompletionStatus;
	Parms.CompletedActiveStates = std::move(CompletedActiveStates);

	UObject::ProcessEvent(Func, &Parms);
}

EStateTreeRunStatus UStateTreeTaskBlueprintBase::ReceiveTick(const float DeltaTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("StateTreeTaskBlueprintBase", "ReceiveTick");

	Params::StateTreeTaskBlueprintBase_ReceiveTick Parms{};

	Parms.DeltaTime = DeltaTime;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

}
