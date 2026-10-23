#pragma once

#include "Basic.hpp"

#include "FortOvershieldHelpers_classes.hpp"
#include "FortOvershieldHelpers_parameters.hpp"

namespace SDK
{

void UFortOvershieldHelperComponent::AssignOvershieldListenerDelegates(class UGameplayAbility* OwningAbility, const struct FFortOvershieldDelegateContainer& Delegates)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("FortOvershieldHelperComponent", "AssignOvershieldListenerDelegates");

	Params::FortOvershieldHelperComponent_AssignOvershieldListenerDelegates Parms{};

	Parms.OwningAbility = OwningAbility;
	Parms.Delegates = std::move(Delegates);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UFortOvershieldHelperComponent::ClearOvershieldListenerDelegates(class UGameplayAbility* OwningAbility)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("FortOvershieldHelperComponent", "ClearOvershieldListenerDelegates");

	Params::FortOvershieldHelperComponent_ClearOvershieldListenerDelegates Parms{};

	Parms.OwningAbility = OwningAbility;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

}
