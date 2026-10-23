#pragma once

#include "Basic.hpp"

#include "CoreUObject_classes.hpp"

namespace SDK
{

class VerseSimulationMetadata_0::USimulation final : public UObject
{
public:
	void _InitCDO();

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"VerseClass VerseSimulationMetadata.Simulation", true>();
	}
	static class VerseSimulationMetadata_0::USimulation* GetDefaultObj()
	{
		return GetDefaultObjImpl<VerseSimulationMetadata_0::USimulation>();
	}
};
static_assert(alignof(VerseSimulationMetadata_0::USimulation) == 0x000008, "Wrong alignment on VerseSimulationMetadata_0::USimulation");
static_assert(sizeof(VerseSimulationMetadata_0::USimulation) == 0x000028, "Wrong size on VerseSimulationMetadata_0::USimulation");

}
