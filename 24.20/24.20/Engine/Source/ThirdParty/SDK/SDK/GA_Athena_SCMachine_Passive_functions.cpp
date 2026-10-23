#pragma once

#include "Basic.hpp"

#include "GA_Athena_SCMachine_Passive_classes.hpp"
#include "GA_Athena_SCMachine_Passive_parameters.hpp"

namespace SDK
{

void UGA_Athena_SCMachine_Passive_C::Check_Resurrection_Active(bool* bEnabled)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Athena_SCMachine_Passive_C", "Check Resurrection Active");

	Params::GA_Athena_SCMachine_Passive_C_Check_Resurrection_Active Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (bEnabled != nullptr)
		*bEnabled = Parms.bEnabled;
}

void UGA_Athena_SCMachine_Passive_C::CheckPlayerChipSpawnEnabled(bool* IsChipSpawnEnabled)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Athena_SCMachine_Passive_C", "CheckPlayerChipSpawnEnabled");

	Params::GA_Athena_SCMachine_Passive_C_CheckPlayerChipSpawnEnabled Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (IsChipSpawnEnabled != nullptr)
		*IsChipSpawnEnabled = Parms.IsChipSpawnEnabled;
}

void UGA_Athena_SCMachine_Passive_C::ExecuteUbergraph_GA_Athena_SCMachine_Passive(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Athena_SCMachine_Passive_C", "ExecuteUbergraph_GA_Athena_SCMachine_Passive");

	Params::GA_Athena_SCMachine_Passive_C_ExecuteUbergraph_GA_Athena_SCMachine_Passive Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

void UGA_Athena_SCMachine_Passive_C::HandleOnFortPlayerDied(class AFortPlayerPawnAthena* FortPlayerPawnAthena)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Athena_SCMachine_Passive_C", "HandleOnFortPlayerDied");

	Params::GA_Athena_SCMachine_Passive_C_HandleOnFortPlayerDied Parms{};

	Parms.FortPlayerPawnAthena = FortPlayerPawnAthena;

	UObject::ProcessEvent(Func, &Parms);
}

void UGA_Athena_SCMachine_Passive_C::K2_ActivateAbility()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Athena_SCMachine_Passive_C", "K2_ActivateAbility");

	UObject::ProcessEvent(Func, nullptr);
}

void UGA_Athena_SCMachine_Passive_C::SaveOutPlayer()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Athena_SCMachine_Passive_C", "SaveOutPlayer");

	UObject::ProcessEvent(Func, nullptr);
}

void UGA_Athena_SCMachine_Passive_C::Spawn()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Athena_SCMachine_Passive_C", "Spawn");

	UObject::ProcessEvent(Func, nullptr);
}

}
