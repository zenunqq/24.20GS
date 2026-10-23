#pragma once

#include "Basic.hpp"

#include "SidewaysCodeUI_classes.hpp"
#include "SidewaysCodeUI_parameters.hpp"

namespace SDK
{

void USidewaysWidgetBase::ConfigureUIFromPlayspace(class ASidewaysPlayspace* Playspace)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SidewaysWidgetBase", "ConfigureUIFromPlayspace");

	Params::SidewaysWidgetBase_ConfigureUIFromPlayspace Parms{};

	Parms.Playspace = Playspace;

	UObject::ProcessEvent(Func, &Parms);
}

void USidewaysWidgetBase::HandleFortPawnChanged(class AFortPawn* PossessedPawn)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SidewaysWidgetBase", "HandleFortPawnChanged");

	Params::SidewaysWidgetBase_HandleFortPawnChanged Parms{};

	Parms.PossessedPawn = PossessedPawn;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void USidewaysWidgetBase::InitializeVariables()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SidewaysWidgetBase", "InitializeVariables");

	UObject::ProcessEvent(Func, nullptr);
}

void USidewaysWidgetBase::OnEnterSideways(class ASidewaysPlayspace* Playspace)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SidewaysWidgetBase", "OnEnterSideways");

	Params::SidewaysWidgetBase_OnEnterSideways Parms{};

	Parms.Playspace = Playspace;

	UObject::ProcessEvent(Func, &Parms);
}

void USidewaysWidgetBase::OnExitSideways()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SidewaysWidgetBase", "OnExitSideways");

	UObject::ProcessEvent(Func, nullptr);
}

void USidewaysWidgetBase::OnParamUpdated(const struct FGameplayTag& UpdatedParam)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SidewaysWidgetBase", "OnParamUpdated");

	Params::SidewaysWidgetBase_OnParamUpdated Parms{};

	Parms.UpdatedParam = std::move(UpdatedParam);

	UObject::ProcessEvent(Func, &Parms);
}

void USidewaysWidgetBase::OnSidewaysStateChanged(class USidewaysStateComponent* SidewaysStateComponent, class ASidewaysPlayspace* NewPlayspace, ESidewaysState OldState, ESidewaysState NewState)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SidewaysWidgetBase", "OnSidewaysStateChanged");

	Params::SidewaysWidgetBase_OnSidewaysStateChanged Parms{};

	Parms.SidewaysStateComponent = SidewaysStateComponent;
	Parms.NewPlayspace = NewPlayspace;
	Parms.OldState = OldState;
	Parms.NewState = NewState;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

bool USidewaysWidgetBase::IsValidPlayspace(class ASidewaysPlayspace* Playspace) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SidewaysWidgetBase", "IsValidPlayspace");

	Params::SidewaysWidgetBase_IsValidPlayspace Parms{};

	Parms.Playspace = Playspace;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

}
