#pragma once

#include "Basic.hpp"

#include "VerseSimulationMetadata_0_classes.hpp"

namespace SDK
{

void VerseSimulationMetadata_0::USimulation::_InitCDO()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Simulation", "$InitCDO");

	UObject::ProcessEvent(Func, nullptr);
}

}
