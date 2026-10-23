#pragma once

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "CoreUObject_classes.hpp"

namespace SDK
{

class UVerseSimulationAttribConfig final : public UObject
{
public:
	TArray<class FName>                           AllowedEditablePropertyNames;
	TArray<class FName>                           DisallowedEditablePropertyNames;
	TArray<struct FSoftClassPath>                 DisallowedObjectPropertyClasses;
	bool                                          bAllowTuples;
	bool                                          bAllowMultidimensionalArrays;
	bool                                          bFilterProperties;
	bool                                          bFilterObjectProperties;
	uint8                                         Pad_5C[0x4];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"VerseSimulationAttribConfig">();
	}
	static class UVerseSimulationAttribConfig* GetDefaultObj()
	{
		return GetDefaultObjImpl<UVerseSimulationAttribConfig>();
	}
};
static_assert(alignof(UVerseSimulationAttribConfig) == 0x000008, "Wrong alignment on UVerseSimulationAttribConfig");
static_assert(sizeof(UVerseSimulationAttribConfig) == 0x000060, "Wrong size on UVerseSimulationAttribConfig");
static_assert(offsetof(UVerseSimulationAttribConfig, AllowedEditablePropertyNames) == 0x000028, "Member 'UVerseSimulationAttribConfig::AllowedEditablePropertyNames' has a wrong offset!");
static_assert(offsetof(UVerseSimulationAttribConfig, DisallowedEditablePropertyNames) == 0x000038, "Member 'UVerseSimulationAttribConfig::DisallowedEditablePropertyNames' has a wrong offset!");
static_assert(offsetof(UVerseSimulationAttribConfig, DisallowedObjectPropertyClasses) == 0x000048, "Member 'UVerseSimulationAttribConfig::DisallowedObjectPropertyClasses' has a wrong offset!");
static_assert(offsetof(UVerseSimulationAttribConfig, bAllowTuples) == 0x000058, "Member 'UVerseSimulationAttribConfig::bAllowTuples' has a wrong offset!");
static_assert(offsetof(UVerseSimulationAttribConfig, bAllowMultidimensionalArrays) == 0x000059, "Member 'UVerseSimulationAttribConfig::bAllowMultidimensionalArrays' has a wrong offset!");
static_assert(offsetof(UVerseSimulationAttribConfig, bFilterProperties) == 0x00005A, "Member 'UVerseSimulationAttribConfig::bFilterProperties' has a wrong offset!");
static_assert(offsetof(UVerseSimulationAttribConfig, bFilterObjectProperties) == 0x00005B, "Member 'UVerseSimulationAttribConfig::bFilterObjectProperties' has a wrong offset!");

}
