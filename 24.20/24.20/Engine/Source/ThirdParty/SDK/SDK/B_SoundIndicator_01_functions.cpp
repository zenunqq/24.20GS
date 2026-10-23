#pragma once

#include "Basic.hpp"

#include "B_SoundIndicator_01_classes.hpp"
#include "B_SoundIndicator_01_parameters.hpp"

namespace SDK
{

void AB_SoundIndicator_01_C::ExecuteUbergraph_B_SoundIndicator_01(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_SoundIndicator_01_C", "ExecuteUbergraph_B_SoundIndicator_01");

	Params::B_SoundIndicator_01_C_ExecuteUbergraph_B_SoundIndicator_01 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

class UTexture* AB_SoundIndicator_01_C::GetDefaultIcon()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_SoundIndicator_01_C", "GetDefaultIcon");

	Params::B_SoundIndicator_01_C_GetDefaultIcon Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

struct FLinearColor AB_SoundIndicator_01_C::GetDefaultTint()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_SoundIndicator_01_C", "GetDefaultTint");

	Params::B_SoundIndicator_01_C_GetDefaultTint Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

struct FRuntimeFloatCurve AB_SoundIndicator_01_C::GetStrengthCurveForActiveType() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_SoundIndicator_01_C", "GetStrengthCurveForActiveType");

	Params::B_SoundIndicator_01_C_GetStrengthCurveForActiveType Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

struct FRuntimeFloatCurve AB_SoundIndicator_01_C::GetWeaponCurve() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_SoundIndicator_01_C", "GetWeaponCurve");

	Params::B_SoundIndicator_01_C_GetWeaponCurve Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

}
