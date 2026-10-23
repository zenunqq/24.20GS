#pragma once

#include "Basic.hpp"

#include "PhysicalRimlight_classes.hpp"
#include "PhysicalRimlight_parameters.hpp"

namespace SDK
{

void APhysicalRimlight_C::Day_Phase_(EFortDayPhase CurrentDayPhase, EFortDayPhase PreviousDayPhase, bool bAtCreation)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PhysicalRimlight_C", "Day Phase ");

	Params::PhysicalRimlight_C_Day_Phase_ Parms{};

	Parms.CurrentDayPhase = CurrentDayPhase;
	Parms.PreviousDayPhase = PreviousDayPhase;
	Parms.bAtCreation = bAtCreation;

	UObject::ProcessEvent(Func, &Parms);
}

void APhysicalRimlight_C::ExecuteUbergraph_PhysicalRimlight(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PhysicalRimlight_C", "ExecuteUbergraph_PhysicalRimlight");

	Params::PhysicalRimlight_C_ExecuteUbergraph_PhysicalRimlight Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

void APhysicalRimlight_C::InitRim()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PhysicalRimlight_C", "InitRim");

	UObject::ProcessEvent(Func, nullptr);
}

void APhysicalRimlight_C::PhysicalRimlight_AutoGenFunc(const class FString& CVarName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PhysicalRimlight_C", "PhysicalRimlight_AutoGenFunc");

	Params::PhysicalRimlight_C_PhysicalRimlight_AutoGenFunc Parms{};

	Parms.CVarName = std::move(CVarName);

	UObject::ProcessEvent(Func, &Parms);
}

void APhysicalRimlight_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PhysicalRimlight_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}

void APhysicalRimlight_C::RimlightAttemptValidation()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PhysicalRimlight_C", "RimlightAttemptValidation");

	UObject::ProcessEvent(Func, nullptr);
}

void APhysicalRimlight_C::Set_Rimlight_Color_and_Intensity()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PhysicalRimlight_C", "Set Rimlight Color and Intensity");

	UObject::ProcessEvent(Func, nullptr);
}

void APhysicalRimlight_C::UpdateRimlight()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PhysicalRimlight_C", "UpdateRimlight");

	UObject::ProcessEvent(Func, nullptr);
}

void APhysicalRimlight_C::ValidateRimlight()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PhysicalRimlight_C", "ValidateRimlight");

	UObject::ProcessEvent(Func, nullptr);
}

}
