#pragma once

#include "Basic.hpp"

#include "CoreUObject_classes.hpp"
#include "CustomizableObjectPopulation_structs.hpp"

namespace SDK
{

class UCustomizableObjectPopulation final : public UObject
{
public:
	class FString                                 Name_0;
	TArray<struct FClassWeightPair>               ClassWeights;
	class UCustomizableObjectPopulationGenerator* Generator;

public:
	int32 GeneratePopulation(TArray<class UCustomizableObjectInstance*>* OutInstances, int32 NumInstancesToGenerate) const;
	bool RegeneratePopulation(int32 Seed, TArray<class UCustomizableObjectInstance*>* OutInstances, int32 NumInstancesToGenerate) const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"CustomizableObjectPopulation">();
	}
	static class UCustomizableObjectPopulation* GetDefaultObj()
	{
		return GetDefaultObjImpl<UCustomizableObjectPopulation>();
	}
};
static_assert(alignof(UCustomizableObjectPopulation) == 0x000008, "Wrong alignment on UCustomizableObjectPopulation");
static_assert(sizeof(UCustomizableObjectPopulation) == 0x000050, "Wrong size on UCustomizableObjectPopulation");
static_assert(offsetof(UCustomizableObjectPopulation, Name_0) == 0x000028, "Member 'UCustomizableObjectPopulation::Name_0' has a wrong offset!");
static_assert(offsetof(UCustomizableObjectPopulation, ClassWeights) == 0x000038, "Member 'UCustomizableObjectPopulation::ClassWeights' has a wrong offset!");
static_assert(offsetof(UCustomizableObjectPopulation, Generator) == 0x000048, "Member 'UCustomizableObjectPopulation::Generator' has a wrong offset!");

class UCustomizableObjectPopulationClass final : public UObject
{
public:
	class FString                                 Name_0;
	class UCustomizableObject*                    CustomizableObject;
	TArray<class FString>                         AllowList;
	TArray<class FString>                         Blocklist;
	TArray<struct FCustomizableObjectPopulationCharacteristic> Characteristics;
	TArray<class FString>                         Tags;
	uint8                                         Pad_80[0x10];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"CustomizableObjectPopulationClass">();
	}
	static class UCustomizableObjectPopulationClass* GetDefaultObj()
	{
		return GetDefaultObjImpl<UCustomizableObjectPopulationClass>();
	}
};
static_assert(alignof(UCustomizableObjectPopulationClass) == 0x000008, "Wrong alignment on UCustomizableObjectPopulationClass");
static_assert(sizeof(UCustomizableObjectPopulationClass) == 0x000090, "Wrong size on UCustomizableObjectPopulationClass");
static_assert(offsetof(UCustomizableObjectPopulationClass, Name_0) == 0x000028, "Member 'UCustomizableObjectPopulationClass::Name_0' has a wrong offset!");
static_assert(offsetof(UCustomizableObjectPopulationClass, CustomizableObject) == 0x000038, "Member 'UCustomizableObjectPopulationClass::CustomizableObject' has a wrong offset!");
static_assert(offsetof(UCustomizableObjectPopulationClass, AllowList) == 0x000040, "Member 'UCustomizableObjectPopulationClass::AllowList' has a wrong offset!");
static_assert(offsetof(UCustomizableObjectPopulationClass, Blocklist) == 0x000050, "Member 'UCustomizableObjectPopulationClass::Blocklist' has a wrong offset!");
static_assert(offsetof(UCustomizableObjectPopulationClass, Characteristics) == 0x000060, "Member 'UCustomizableObjectPopulationClass::Characteristics' has a wrong offset!");
static_assert(offsetof(UCustomizableObjectPopulationClass, Tags) == 0x000070, "Member 'UCustomizableObjectPopulationClass::Tags' has a wrong offset!");

class UCustomizableObjectPopulationGenerator final : public UObject
{
public:
	TArray<class UCustomizableObject*>            PopulationObjects;
	uint8                                         Pad_38[0x10];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"CustomizableObjectPopulationGenerator">();
	}
	static class UCustomizableObjectPopulationGenerator* GetDefaultObj()
	{
		return GetDefaultObjImpl<UCustomizableObjectPopulationGenerator>();
	}
};
static_assert(alignof(UCustomizableObjectPopulationGenerator) == 0x000008, "Wrong alignment on UCustomizableObjectPopulationGenerator");
static_assert(sizeof(UCustomizableObjectPopulationGenerator) == 0x000048, "Wrong size on UCustomizableObjectPopulationGenerator");
static_assert(offsetof(UCustomizableObjectPopulationGenerator, PopulationObjects) == 0x000028, "Member 'UCustomizableObjectPopulationGenerator::PopulationObjects' has a wrong offset!");

}
