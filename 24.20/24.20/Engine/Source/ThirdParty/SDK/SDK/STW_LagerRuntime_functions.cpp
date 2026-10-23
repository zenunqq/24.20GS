#pragma once

#include "Basic.hpp"

#include "STW_LagerRuntime_classes.hpp"

namespace SDK
{

void AFortQuestLivingWorldVolume::HandlePIEQuestsUpdated()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortQuestLivingWorldVolume", "HandlePIEQuestsUpdated");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

}
