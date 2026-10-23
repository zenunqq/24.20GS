#pragma once

#include "Basic.hpp"

#include "HealthShieldRegenRuntime_classes.hpp"
#include "HealthShieldRegenRuntime_parameters.hpp"

namespace SDK
{

bool UFortHealthShieldRegenComponent::AllowHealthShieldRegen()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("FortHealthShieldRegenComponent", "AllowHealthShieldRegen");

	Params::FortHealthShieldRegenComponent_AllowHealthShieldRegen Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

void UFortHealthShieldRegenComponent::AssignHealthShieldRegen_HealthListenerDelegates(const class UGameplayAbility* OwningAbility, const struct FFortHealthShieldRegen_HealthDelegateContainer& Delegates)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("FortHealthShieldRegenComponent", "AssignHealthShieldRegen_HealthListenerDelegates");

	Params::FortHealthShieldRegenComponent_AssignHealthShieldRegen_HealthListenerDelegates Parms{};

	Parms.OwningAbility = OwningAbility;
	Parms.Delegates = std::move(Delegates);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UFortHealthShieldRegenComponent::AssignHealthShieldRegen_ShieldListenerDelegates(const class UGameplayAbility* OwningAbility, const struct FFortHealthShieldRegen_ShieldDelegateContainer& Delegates)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("FortHealthShieldRegenComponent", "AssignHealthShieldRegen_ShieldListenerDelegates");

	Params::FortHealthShieldRegenComponent_AssignHealthShieldRegen_ShieldListenerDelegates Parms{};

	Parms.OwningAbility = OwningAbility;
	Parms.Delegates = std::move(Delegates);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UFortHealthShieldRegenComponent::ClearHealthShieldRegen_HealthListenerDelegates(const class UGameplayAbility* OwningAbility)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("FortHealthShieldRegenComponent", "ClearHealthShieldRegen_HealthListenerDelegates");

	Params::FortHealthShieldRegenComponent_ClearHealthShieldRegen_HealthListenerDelegates Parms{};

	Parms.OwningAbility = OwningAbility;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UFortHealthShieldRegenComponent::ClearHealthShieldRegen_ShieldListenerDelegates(const class UGameplayAbility* OwningAbility)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("FortHealthShieldRegenComponent", "ClearHealthShieldRegen_ShieldListenerDelegates");

	Params::FortHealthShieldRegenComponent_ClearHealthShieldRegen_ShieldListenerDelegates Parms{};

	Parms.OwningAbility = OwningAbility;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

}
