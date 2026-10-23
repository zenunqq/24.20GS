#pragma once

#include "Basic.hpp"

#include "OptimusSettings_structs.hpp"
#include "DeveloperSettings_classes.hpp"

namespace SDK
{

class UOptimusSettings final : public UDeveloperSettings
{
public:
	EOptimusDefaultDeformerMode                   DefaultMode;
	uint8                                         Pad_31[0x7];
	TSoftObjectPtr<class UMeshDeformer>           DefaultDeformer;
	TSoftObjectPtr<class UMeshDeformer>           DefaultRecomputeTangentDeformer;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"OptimusSettings">();
	}
	static class UOptimusSettings* GetDefaultObj()
	{
		return GetDefaultObjImpl<UOptimusSettings>();
	}
};
static_assert(alignof(UOptimusSettings) == 0x000008, "Wrong alignment on UOptimusSettings");
static_assert(sizeof(UOptimusSettings) == 0x000088, "Wrong size on UOptimusSettings");
static_assert(offsetof(UOptimusSettings, DefaultMode) == 0x000030, "Member 'UOptimusSettings::DefaultMode' has a wrong offset!");
static_assert(offsetof(UOptimusSettings, DefaultDeformer) == 0x000038, "Member 'UOptimusSettings::DefaultDeformer' has a wrong offset!");
static_assert(offsetof(UOptimusSettings, DefaultRecomputeTangentDeformer) == 0x000060, "Member 'UOptimusSettings::DefaultRecomputeTangentDeformer' has a wrong offset!");

}
