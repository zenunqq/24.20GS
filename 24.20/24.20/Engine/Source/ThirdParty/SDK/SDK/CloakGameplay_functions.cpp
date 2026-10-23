#pragma once

#include "Basic.hpp"

#include "CloakGameplay_classes.hpp"
#include "CloakGameplay_parameters.hpp"

namespace SDK
{

bool AFortGameCueNotifyLoop_Cloak::SetModifierCanBeEnabled(const class FName& ModifierName, const bool bNewCanBeEnabled)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortGameCueNotifyLoop_Cloak", "SetModifierCanBeEnabled");

	Params::FortGameCueNotifyLoop_Cloak_SetModifierCanBeEnabled Parms{};

	Parms.ModifierName = ModifierName;
	Parms.bNewCanBeEnabled = bNewCanBeEnabled;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

bool AFortGameCueNotifyLoop_Cloak::SetModifierEnabled(const class FName& ModifierName, const bool bNewEnabled)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortGameCueNotifyLoop_Cloak", "SetModifierEnabled");

	Params::FortGameCueNotifyLoop_Cloak_SetModifierEnabled Parms{};

	Parms.ModifierName = ModifierName;
	Parms.bNewEnabled = bNewEnabled;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

float AFortGameCueNotifyLoop_Cloak::TickVisibilityLevel(const float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortGameCueNotifyLoop_Cloak", "TickVisibilityLevel");

	Params::FortGameCueNotifyLoop_Cloak_TickVisibilityLevel Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

bool AFortGameCueNotifyLoop_Cloak::GetCurrentModifierValues(float* OutVisibilityMultiplier, float* OutVisibilityAddition, const class FName& ModifierName) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortGameCueNotifyLoop_Cloak", "GetCurrentModifierValues");

	Params::FortGameCueNotifyLoop_Cloak_GetCurrentModifierValues Parms{};

	Parms.ModifierName = ModifierName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	if (OutVisibilityMultiplier != nullptr)
		*OutVisibilityMultiplier = Parms.OutVisibilityMultiplier;

	if (OutVisibilityAddition != nullptr)
		*OutVisibilityAddition = Parms.OutVisibilityAddition;

	return Parms.ReturnValue;
}

}
