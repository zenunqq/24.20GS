#pragma once

#include "Basic.hpp"

#include "DynamicAthenaHUD_classes.hpp"
#include "DynamicAthenaHUD_parameters.hpp"

namespace SDK
{

void ADynamicAthenaHUDDirector::HandleCreativeQuickbarEquippedChanged(bool bIsQuickbarEquipped)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DynamicAthenaHUDDirector", "HandleCreativeQuickbarEquippedChanged");

	Params::DynamicAthenaHUDDirector_HandleCreativeQuickbarEquippedChanged Parms{};

	Parms.bIsQuickbarEquipped = bIsQuickbarEquipped;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void ADynamicAthenaHUDDirector::HandleEnteringVehicle()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DynamicAthenaHUDDirector", "HandleEnteringVehicle");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void ADynamicAthenaHUDDirector::HandleExitingVehicle()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DynamicAthenaHUDDirector", "HandleExitingVehicle");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

}
