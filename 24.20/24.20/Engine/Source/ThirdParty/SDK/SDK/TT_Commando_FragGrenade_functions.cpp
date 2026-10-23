#pragma once

#include "Basic.hpp"

#include "TT_Commando_FragGrenade_classes.hpp"
#include "TT_Commando_FragGrenade_parameters.hpp"

namespace SDK
{

bool UTT_Commando_FragGrenade_C::GetApplicationTag(const class UGameplayAbility* AbilityInstance, struct FGameplayTag* OutTag) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TT_Commando_FragGrenade_C", "GetApplicationTag");

	Params::TT_Commando_FragGrenade_C_GetApplicationTag Parms{};

	Parms.AbilityInstance = AbilityInstance;

	UObject::ProcessEvent(Func, &Parms);

	if (OutTag != nullptr)
		*OutTag = std::move(Parms.OutTag);

	return Parms.ReturnValue;
}

bool UTT_Commando_FragGrenade_C::GetTextForTokenFromAbilityInstanceInternal(const class UGameplayAbility* AbilityInstance, const struct FGameplayTag& tag, const class UFortTooltipContext* Context, const struct FGameplayTag& Token, class FText* OutText) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TT_Commando_FragGrenade_C", "GetTextForTokenFromAbilityInstanceInternal");

	Params::TT_Commando_FragGrenade_C_GetTextForTokenFromAbilityInstanceInternal Parms{};

	Parms.AbilityInstance = AbilityInstance;
	Parms.tag = std::move(tag);
	Parms.Context = Context;
	Parms.Token = std::move(Token);

	UObject::ProcessEvent(Func, &Parms);

	if (OutText != nullptr)
		*OutText = std::move(Parms.OutText);

	return Parms.ReturnValue;
}

void UTT_Commando_FragGrenade_C::InitializeAbilityInstanceInternal(const class UGameplayAbility* AbilityInstance, const class UFortTooltipContext* Context) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TT_Commando_FragGrenade_C", "InitializeAbilityInstanceInternal");

	Params::TT_Commando_FragGrenade_C_InitializeAbilityInstanceInternal Parms{};

	Parms.AbilityInstance = AbilityInstance;
	Parms.Context = Context;

	UObject::ProcessEvent(Func, &Parms);
}

}
