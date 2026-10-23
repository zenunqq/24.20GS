#pragma once

#include "Basic.hpp"

#include "GCN_BoostJumpPack_Equipped_classes.hpp"
#include "GCN_BoostJumpPack_Equipped_parameters.hpp"

namespace SDK
{

double UGCN_BoostJumpPack_Equipped_C::GetFuel(class APlayerPawn_Athena_C* PlayerPawn) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GCN_BoostJumpPack_Equipped_C", "GetFuel");

	Params::GCN_BoostJumpPack_Equipped_C_GetFuel Parms{};

	Parms.PlayerPawn = PlayerPawn;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

void UGCN_BoostJumpPack_Equipped_C::GetFuelPercent(class APlayerPawn_Athena_C* PlayerPawn, double* Fuel_Percent) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GCN_BoostJumpPack_Equipped_C", "GetFuelPercent");

	Params::GCN_BoostJumpPack_Equipped_C_GetFuelPercent Parms{};

	Parms.PlayerPawn = PlayerPawn;

	UObject::ProcessEvent(Func, &Parms);

	if (Fuel_Percent != nullptr)
		*Fuel_Percent = Parms.Fuel_Percent;
}

double UGCN_BoostJumpPack_Equipped_C::GetMaxFuel(class APlayerPawn_Athena_C* PlayerPawn) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GCN_BoostJumpPack_Equipped_C", "GetMaxFuel");

	Params::GCN_BoostJumpPack_Equipped_C_GetMaxFuel Parms{};

	Parms.PlayerPawn = PlayerPawn;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

bool UGCN_BoostJumpPack_Equipped_C::OnExecute(class AActor* MyTarget, const struct FGameplayCueParameters& Parameters) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GCN_BoostJumpPack_Equipped_C", "OnExecute");

	Params::GCN_BoostJumpPack_Equipped_C_OnExecute Parms{};

	Parms.MyTarget = MyTarget;
	Parms.Parameters = std::move(Parameters);

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

bool UGCN_BoostJumpPack_Equipped_C::WhileActive(class AActor* MyTarget, const struct FGameplayCueParameters& Parameters) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GCN_BoostJumpPack_Equipped_C", "WhileActive");

	Params::GCN_BoostJumpPack_Equipped_C_WhileActive Parms{};

	Parms.MyTarget = MyTarget;
	Parms.Parameters = std::move(Parameters);

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

}
