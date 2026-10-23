#pragma once

#include "Basic.hpp"

#include "SidewaysCodeRuntime_classes.hpp"
#include "SidewaysCodeRuntime_parameters.hpp"

namespace SDK
{

void USidewaysCheatManager::SetSidewaysState(ESidewaysState SidewaysState)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SidewaysCheatManager", "SetSidewaysState");

	Params::SidewaysCheatManager_SetSidewaysState Parms{};

	Parms.SidewaysState = SidewaysState;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void USidewaysStateComponent::HandleSidewaysStateChanged(class ASidewaysPlayspace* NewSidewaysPlayspace, ESidewaysState OldState, ESidewaysState NewState)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SidewaysStateComponent", "HandleSidewaysStateChanged");

	Params::SidewaysStateComponent_HandleSidewaysStateChanged Parms{};

	Parms.NewSidewaysPlayspace = NewSidewaysPlayspace;
	Parms.OldState = OldState;
	Parms.NewState = NewState;

	UObject::ProcessEvent(Func, &Parms);
}

void USidewaysStateComponent::OnRep_SidewaysPlayspace(class ASidewaysPlayspace* NewSidewaysPlayspace)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SidewaysStateComponent", "OnRep_SidewaysPlayspace");

	Params::SidewaysStateComponent_OnRep_SidewaysPlayspace Parms{};

	Parms.NewSidewaysPlayspace = NewSidewaysPlayspace;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void USidewaysStateComponent::OnRep_SidewaysState(ESidewaysState LastSidewaysState)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SidewaysStateComponent", "OnRep_SidewaysState");

	Params::SidewaysStateComponent_OnRep_SidewaysState Parms{};

	Parms.LastSidewaysState = LastSidewaysState;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void USidewaysStateComponent::SetSidewaysState(ESidewaysState NewState, class ASidewaysPlayspace* NewSidewaysPlayspace)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SidewaysStateComponent", "SetSidewaysState");

	Params::SidewaysStateComponent_SetSidewaysState Parms{};

	Parms.NewState = NewState;
	Parms.NewSidewaysPlayspace = NewSidewaysPlayspace;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

ESidewaysState USidewaysStateComponent::GetSidewaysState() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SidewaysStateComponent", "GetSidewaysState");

	Params::SidewaysStateComponent_GetSidewaysState Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

class USidewaysStateComponent* USidewaysLibrary::GetSidewaysStateComponent(const class AActor* Owner)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("SidewaysLibrary", "GetSidewaysStateComponent");

	Params::SidewaysLibrary_GetSidewaysStateComponent Parms{};

	Parms.Owner = Owner;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

void ASidewaysPlayspace::NotifySizeChanged()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SidewaysPlayspace", "NotifySizeChanged");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void ASidewaysPlayspace::RefreshActorsInSideways()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SidewaysPlayspace", "RefreshActorsInSideways");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

}
