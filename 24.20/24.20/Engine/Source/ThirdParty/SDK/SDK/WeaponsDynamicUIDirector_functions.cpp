#pragma once

#include "Basic.hpp"

#include "WeaponsDynamicUIDirector_classes.hpp"
#include "WeaponsDynamicUIDirector_parameters.hpp"

namespace SDK
{

void AWeaponsDynamicUIDirector_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WeaponsDynamicUIDirector_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}

void AWeaponsDynamicUIDirector_C::ExecuteUbergraph_WeaponsDynamicUIDirector(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WeaponsDynamicUIDirector_C", "ExecuteUbergraph_WeaponsDynamicUIDirector");

	Params::WeaponsDynamicUIDirector_C_ExecuteUbergraph_WeaponsDynamicUIDirector Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

}
