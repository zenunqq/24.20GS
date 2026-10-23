#pragma once

#include "Basic.hpp"

#include "CorruptionGameplayCodeUI_classes.hpp"
#include "CorruptionGameplayCodeUI_parameters.hpp"

namespace SDK
{

float UFortPowerupReticleExtensionWidget::GetCurrentOverheatPercent() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortPowerupReticleExtensionWidget", "GetCurrentOverheatPercent");

	Params::FortPowerupReticleExtensionWidget_GetCurrentOverheatPercent Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

float UFortPowerupReticleExtensionWidget::GetCurrentOverheatValue() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortPowerupReticleExtensionWidget", "GetCurrentOverheatValue");

	Params::FortPowerupReticleExtensionWidget_GetCurrentOverheatValue Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

float UFortPowerupReticleExtensionWidget::GetOverheatingMaxValue() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortPowerupReticleExtensionWidget", "GetOverheatingMaxValue");

	Params::FortPowerupReticleExtensionWidget_GetOverheatingMaxValue Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

}
