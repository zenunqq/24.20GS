#pragma once

#include "Basic.hpp"

#include "GameplayStateMachine_classes.hpp"
#include "GameplayStateMachine_parameters.hpp"

namespace SDK
{

void UGameplayState::AddStateRuntimeTag(const struct FGameplayTag& AddedTag)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GameplayState", "AddStateRuntimeTag");

	Params::GameplayState_AddStateRuntimeTag Parms{};

	Parms.AddedTag = std::move(AddedTag);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UGameplayState::BeginStateEvent(const struct FGameplayTag& PrevStateId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GameplayState", "BeginStateEvent");

	Params::GameplayState_BeginStateEvent Parms{};

	Parms.PrevStateId = std::move(PrevStateId);

	UObject::ProcessEvent(Func, &Parms);
}

void UGameplayState::BeginStateEventClient(const struct FGameplayTag& PrevStateId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GameplayState", "BeginStateEventClient");

	Params::GameplayState_BeginStateEventClient Parms{};

	Parms.PrevStateId = std::move(PrevStateId);

	UObject::ProcessEvent(Func, &Parms);
}

void UGameplayState::BeginStateEventServer(const struct FGameplayTag& PrevStateId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GameplayState", "BeginStateEventServer");

	Params::GameplayState_BeginStateEventServer Parms{};

	Parms.PrevStateId = std::move(PrevStateId);

	UObject::ProcessEvent(Func, &Parms);
}

void UGameplayState::EndStateEvent(const struct FGameplayTag& NextStateId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GameplayState", "EndStateEvent");

	Params::GameplayState_EndStateEvent Parms{};

	Parms.NextStateId = std::move(NextStateId);

	UObject::ProcessEvent(Func, &Parms);
}

void UGameplayState::EndStateEventClient(const struct FGameplayTag& NextStateId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GameplayState", "EndStateEventClient");

	Params::GameplayState_EndStateEventClient Parms{};

	Parms.NextStateId = std::move(NextStateId);

	UObject::ProcessEvent(Func, &Parms);
}

void UGameplayState::EndStateEventServer(const struct FGameplayTag& NextStateId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GameplayState", "EndStateEventServer");

	Params::GameplayState_EndStateEventServer Parms{};

	Parms.NextStateId = std::move(NextStateId);

	UObject::ProcessEvent(Func, &Parms);
}

bool UGameplayState::HasStateRuntimeTag(const struct FGameplayTag& QueryTag)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GameplayState", "HasStateRuntimeTag");

	Params::GameplayState_HasStateRuntimeTag Parms{};

	Parms.QueryTag = std::move(QueryTag);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

void UGameplayState::InitializeStateEvent(const struct FGameplayTag& PrevStateId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GameplayState", "InitializeStateEvent");

	Params::GameplayState_InitializeStateEvent Parms{};

	Parms.PrevStateId = std::move(PrevStateId);

	UObject::ProcessEvent(Func, &Parms);
}

void UGameplayState::InitializeStateEventClient(const struct FGameplayTag& PrevStateId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GameplayState", "InitializeStateEventClient");

	Params::GameplayState_InitializeStateEventClient Parms{};

	Parms.PrevStateId = std::move(PrevStateId);

	UObject::ProcessEvent(Func, &Parms);
}

void UGameplayState::InitializeStateEventServer(const struct FGameplayTag& PrevStateId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GameplayState", "InitializeStateEventServer");

	Params::GameplayState_InitializeStateEventServer Parms{};

	Parms.PrevStateId = std::move(PrevStateId);

	UObject::ProcessEvent(Func, &Parms);
}

void UGameplayState::MarkStateToEvaluateTransitions()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GameplayState", "MarkStateToEvaluateTransitions");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void UGameplayState::RemoveStateRuntimeTag(const struct FGameplayTag& RemovedTag)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GameplayState", "RemoveStateRuntimeTag");

	Params::GameplayState_RemoveStateRuntimeTag Parms{};

	Parms.RemovedTag = std::move(RemovedTag);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UGameplayState::UpdateStateEvent(const float DeltaTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GameplayState", "UpdateStateEvent");

	Params::GameplayState_UpdateStateEvent Parms{};

	Parms.DeltaTime = DeltaTime;

	UObject::ProcessEvent(Func, &Parms);
}

void UGameplayState::UpdateStateEventClient(const float DeltaTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GameplayState", "UpdateStateEventClient");

	Params::GameplayState_UpdateStateEventClient Parms{};

	Parms.DeltaTime = DeltaTime;

	UObject::ProcessEvent(Func, &Parms);
}

void UGameplayState::UpdateStateEventServer(const float DeltaTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GameplayState", "UpdateStateEventServer");

	Params::GameplayState_UpdateStateEventServer Parms{};

	Parms.DeltaTime = DeltaTime;

	UObject::ProcessEvent(Func, &Parms);
}

class UGameplayStateMachine* UGameplayState::GetGameplayStateMachine() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GameplayState", "GetGameplayStateMachine");

	Params::GameplayState_GetGameplayStateMachine Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

class AActor* UGameplayState::GetOwningActor() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GameplayState", "GetOwningActor");

	Params::GameplayState_GetOwningActor Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

struct FGameplayTag UGameplayState::GetStateId() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GameplayState", "GetStateId");

	Params::GameplayState_GetStateId Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

const struct FGameplayTagContainer UGameplayState::GetStateRuntimeTags() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GameplayState", "GetStateRuntimeTags");

	Params::GameplayState_GetStateRuntimeTags Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

bool UGameplayState::HasAuthority() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GameplayState", "HasAuthority");

	Params::GameplayState_HasAuthority Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

void UGameplayStateMachine::EvaluateStateTransition()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GameplayStateMachine", "EvaluateStateTransition");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void UGameplayStateMachine::OnRep_ActiveGameplayStateData()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GameplayStateMachine", "OnRep_ActiveGameplayStateData");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void UGameplayStateMachine::SetState(const struct FGameplayTag& InStateId, float InBeginStateDelay)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GameplayStateMachine", "SetState");

	Params::GameplayStateMachine_SetState Parms{};

	Parms.InStateId = std::move(InStateId);
	Parms.InBeginStateDelay = InBeginStateDelay;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

struct FGameplayTag UGameplayStateMachine::GetActiveStateId() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GameplayStateMachine", "GetActiveStateId");

	Params::GameplayStateMachine_GetActiveStateId Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

class UGameplayState* UGameplayStateMachine::GetActiveStateObject() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GameplayStateMachine", "GetActiveStateObject");

	Params::GameplayStateMachine_GetActiveStateObject Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

struct FGameplayTag UGameplayStateMachine::GetStateMachineId() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GameplayStateMachine", "GetStateMachineId");

	Params::GameplayStateMachine_GetStateMachineId Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

}
