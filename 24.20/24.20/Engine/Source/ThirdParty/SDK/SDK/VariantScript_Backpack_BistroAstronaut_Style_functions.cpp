#pragma once

#include "Basic.hpp"

#include "VariantScript_Backpack_BistroAstronaut_Style_classes.hpp"
#include "VariantScript_Backpack_BistroAstronaut_Style_parameters.hpp"

namespace SDK
{

struct FGameplayTag UVariantScript_Backpack_BistroAstronaut_Style_C::DetermineVariantSelection(const struct FFortAthenaLoadout& Loadout) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("VariantScript_Backpack_BistroAstronaut_Style_C", "DetermineVariantSelection");

	Params::VariantScript_Backpack_BistroAstronaut_Style_C_DetermineVariantSelection Parms{};

	Parms.Loadout = std::move(Loadout);

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

}
