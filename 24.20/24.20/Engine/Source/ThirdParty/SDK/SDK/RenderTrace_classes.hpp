#pragma once

#include "Basic.hpp"

#include "RenderTrace_structs.hpp"
#include "Engine_classes.hpp"

namespace SDK
{

class UMaterialExpressionPhysicalMaterialOutput final : public UMaterialExpressionCustomOutput
{
public:
	TArray<struct FPhysicalMaterialTraceInput>    Inputs;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"MaterialExpressionPhysicalMaterialOutput">();
	}
	static class UMaterialExpressionPhysicalMaterialOutput* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMaterialExpressionPhysicalMaterialOutput>();
	}
};
static_assert(alignof(UMaterialExpressionPhysicalMaterialOutput) == 0x000008, "Wrong alignment on UMaterialExpressionPhysicalMaterialOutput");
static_assert(sizeof(UMaterialExpressionPhysicalMaterialOutput) == 0x0000C0, "Wrong size on UMaterialExpressionPhysicalMaterialOutput");
static_assert(offsetof(UMaterialExpressionPhysicalMaterialOutput, Inputs) == 0x0000B0, "Member 'UMaterialExpressionPhysicalMaterialOutput::Inputs' has a wrong offset!");

}
