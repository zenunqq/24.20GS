#pragma once

#include "Basic.hpp"

#include "BP_CharacterRimlightDisabler_classes.hpp"
#include "BP_CharacterRimlightDisabler_parameters.hpp"

namespace SDK
{

void ABP_CharacterRimlightDisabler_C::ReceiveEndPlay(EEndPlayReason EndPlayReason)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_CharacterRimlightDisabler_C", "ReceiveEndPlay");

	Params::BP_CharacterRimlightDisabler_C_ReceiveEndPlay Parms{};

	Parms.EndPlayReason = EndPlayReason;

	UObject::ProcessEvent(Func, &Parms);
}

void ABP_CharacterRimlightDisabler_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_CharacterRimlightDisabler_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}

void ABP_CharacterRimlightDisabler_C::ExecuteUbergraph_BP_CharacterRimlightDisabler(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_CharacterRimlightDisabler_C", "ExecuteUbergraph_BP_CharacterRimlightDisabler");

	Params::BP_CharacterRimlightDisabler_C_ExecuteUbergraph_BP_CharacterRimlightDisabler Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

}
