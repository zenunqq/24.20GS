#pragma once

#include "Basic.hpp"

#include "PlayerPawn_Athena_Generic_Parent_classes.hpp"
#include "PlayerPawn_Athena_Generic_Parent_parameters.hpp"

namespace SDK
{

void APlayerPawn_Athena_Generic_Parent_C::ExecuteUbergraph_PlayerPawn_Athena_Generic_Parent(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlayerPawn_Athena_Generic_Parent_C", "ExecuteUbergraph_PlayerPawn_Athena_Generic_Parent");

	Params::PlayerPawn_Athena_Generic_Parent_C_ExecuteUbergraph_PlayerPawn_Athena_Generic_Parent Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

void APlayerPawn_Athena_Generic_Parent_C::K2_OnEndCrouch(float HalfHeightAdjust, float ScaledHalfHeightAdjust)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlayerPawn_Athena_Generic_Parent_C", "K2_OnEndCrouch");

	Params::PlayerPawn_Athena_Generic_Parent_C_K2_OnEndCrouch Parms{};

	Parms.HalfHeightAdjust = HalfHeightAdjust;
	Parms.ScaledHalfHeightAdjust = ScaledHalfHeightAdjust;

	UObject::ProcessEvent(Func, &Parms);
}

void APlayerPawn_Athena_Generic_Parent_C::K2_OnStartCrouch(float HalfHeightAdjust, float ScaledHalfHeightAdjust)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlayerPawn_Athena_Generic_Parent_C", "K2_OnStartCrouch");

	Params::PlayerPawn_Athena_Generic_Parent_C_K2_OnStartCrouch Parms{};

	Parms.HalfHeightAdjust = HalfHeightAdjust;
	Parms.ScaledHalfHeightAdjust = ScaledHalfHeightAdjust;

	UObject::ProcessEvent(Func, &Parms);
}

void APlayerPawn_Athena_Generic_Parent_C::OnEnteredVehicle()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlayerPawn_Athena_Generic_Parent_C", "OnEnteredVehicle");

	UObject::ProcessEvent(Func, nullptr);
}

void APlayerPawn_Athena_Generic_Parent_C::OnExitedVehicle()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlayerPawn_Athena_Generic_Parent_C", "OnExitedVehicle");

	UObject::ProcessEvent(Func, nullptr);
}

void APlayerPawn_Athena_Generic_Parent_C::OnJumped()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlayerPawn_Athena_Generic_Parent_C", "OnJumped");

	UObject::ProcessEvent(Func, nullptr);
}

void APlayerPawn_Athena_Generic_Parent_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlayerPawn_Athena_Generic_Parent_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}

}
