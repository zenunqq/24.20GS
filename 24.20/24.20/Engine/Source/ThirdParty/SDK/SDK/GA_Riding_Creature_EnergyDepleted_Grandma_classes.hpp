#pragma once

#include "Basic.hpp"

#include "GA_Riding_Creature_EnergyDepleted_Base_classes.hpp"

namespace SDK
{

class UGA_Riding_Creature_EnergyDepleted_Grandma_C final : public UGA_Riding_Creature_EnergyDepleted_Base_C
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GA_Riding_Creature_EnergyDepleted_Grandma_C">();
	}
	static class UGA_Riding_Creature_EnergyDepleted_Grandma_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGA_Riding_Creature_EnergyDepleted_Grandma_C>();
	}
};
static_assert(alignof(UGA_Riding_Creature_EnergyDepleted_Grandma_C) == 0x000008, "Wrong alignment on UGA_Riding_Creature_EnergyDepleted_Grandma_C");
static_assert(sizeof(UGA_Riding_Creature_EnergyDepleted_Grandma_C) == 0x000E68, "Wrong size on UGA_Riding_Creature_EnergyDepleted_Grandma_C");

}
