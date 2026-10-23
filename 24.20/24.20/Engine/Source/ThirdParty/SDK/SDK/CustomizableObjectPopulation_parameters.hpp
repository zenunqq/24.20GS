#pragma once

#include "Basic.hpp"

namespace SDK::Params
{

struct CustomizableObjectPopulation_GeneratePopulation final
{
public:
	TArray<class UCustomizableObjectInstance*>    OutInstances;
	int32                                         NumInstancesToGenerate;
	int32                                         ReturnValue;
};
static_assert(alignof(CustomizableObjectPopulation_GeneratePopulation) == 0x000008, "Wrong alignment on CustomizableObjectPopulation_GeneratePopulation");
static_assert(sizeof(CustomizableObjectPopulation_GeneratePopulation) == 0x000018, "Wrong size on CustomizableObjectPopulation_GeneratePopulation");
static_assert(offsetof(CustomizableObjectPopulation_GeneratePopulation, OutInstances) == 0x000000, "Member 'CustomizableObjectPopulation_GeneratePopulation::OutInstances' has a wrong offset!");
static_assert(offsetof(CustomizableObjectPopulation_GeneratePopulation, NumInstancesToGenerate) == 0x000010, "Member 'CustomizableObjectPopulation_GeneratePopulation::NumInstancesToGenerate' has a wrong offset!");
static_assert(offsetof(CustomizableObjectPopulation_GeneratePopulation, ReturnValue) == 0x000014, "Member 'CustomizableObjectPopulation_GeneratePopulation::ReturnValue' has a wrong offset!");

struct CustomizableObjectPopulation_RegeneratePopulation final
{
public:
	int32                                         Seed;
	uint8                                         Pad_4[0x4];
	TArray<class UCustomizableObjectInstance*>    OutInstances;
	int32                                         NumInstancesToGenerate;
	bool                                          ReturnValue;
	uint8                                         Pad_1D[0x3];
};
static_assert(alignof(CustomizableObjectPopulation_RegeneratePopulation) == 0x000008, "Wrong alignment on CustomizableObjectPopulation_RegeneratePopulation");
static_assert(sizeof(CustomizableObjectPopulation_RegeneratePopulation) == 0x000020, "Wrong size on CustomizableObjectPopulation_RegeneratePopulation");
static_assert(offsetof(CustomizableObjectPopulation_RegeneratePopulation, Seed) == 0x000000, "Member 'CustomizableObjectPopulation_RegeneratePopulation::Seed' has a wrong offset!");
static_assert(offsetof(CustomizableObjectPopulation_RegeneratePopulation, OutInstances) == 0x000008, "Member 'CustomizableObjectPopulation_RegeneratePopulation::OutInstances' has a wrong offset!");
static_assert(offsetof(CustomizableObjectPopulation_RegeneratePopulation, NumInstancesToGenerate) == 0x000018, "Member 'CustomizableObjectPopulation_RegeneratePopulation::NumInstancesToGenerate' has a wrong offset!");
static_assert(offsetof(CustomizableObjectPopulation_RegeneratePopulation, ReturnValue) == 0x00001C, "Member 'CustomizableObjectPopulation_RegeneratePopulation::ReturnValue' has a wrong offset!");

}
