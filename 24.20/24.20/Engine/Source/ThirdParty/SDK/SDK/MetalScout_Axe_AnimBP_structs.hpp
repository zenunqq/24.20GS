#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"

namespace SDK
{

struct MetalScout_Axe_AnimBP::FAnimBlueprintGeneratedConstantData final : public FAnimBlueprintConstantData
{
public:
	uint8                                         Pad_1[0x3];
	class FName                                   __NameProperty_4;
	class FName                                   __NameProperty_5;
	uint8                                         Pad_C[0x4];
	struct FAnimNodeFunctionRef                   __StructProperty_6;
	struct FAnimSubsystem_PropertyAccess          AnimBlueprintExtension_PropertyAccess;
	struct FAnimSubsystem_Base                    AnimBlueprintExtension_Base;
};
static_assert(alignof(MetalScout_Axe_AnimBP::FAnimBlueprintGeneratedConstantData) == 0x000008, "Wrong alignment on MetalScout_Axe_AnimBP::FAnimBlueprintGeneratedConstantData");
static_assert(sizeof(MetalScout_Axe_AnimBP::FAnimBlueprintGeneratedConstantData) == 0x0000C0, "Wrong size on MetalScout_Axe_AnimBP::FAnimBlueprintGeneratedConstantData");
static_assert(offsetof(MetalScout_Axe_AnimBP::FAnimBlueprintGeneratedConstantData, __NameProperty_4) == 0x000004, "Member 'MetalScout_Axe_AnimBP::FAnimBlueprintGeneratedConstantData::__NameProperty_4' has a wrong offset!");
static_assert(offsetof(MetalScout_Axe_AnimBP::FAnimBlueprintGeneratedConstantData, __NameProperty_5) == 0x000008, "Member 'MetalScout_Axe_AnimBP::FAnimBlueprintGeneratedConstantData::__NameProperty_5' has a wrong offset!");
static_assert(offsetof(MetalScout_Axe_AnimBP::FAnimBlueprintGeneratedConstantData, __StructProperty_6) == 0x000010, "Member 'MetalScout_Axe_AnimBP::FAnimBlueprintGeneratedConstantData::__StructProperty_6' has a wrong offset!");
static_assert(offsetof(MetalScout_Axe_AnimBP::FAnimBlueprintGeneratedConstantData, AnimBlueprintExtension_PropertyAccess) == 0x000028, "Member 'MetalScout_Axe_AnimBP::FAnimBlueprintGeneratedConstantData::AnimBlueprintExtension_PropertyAccess' has a wrong offset!");
static_assert(offsetof(MetalScout_Axe_AnimBP::FAnimBlueprintGeneratedConstantData, AnimBlueprintExtension_Base) == 0x0000A8, "Member 'MetalScout_Axe_AnimBP::FAnimBlueprintGeneratedConstantData::AnimBlueprintExtension_Base' has a wrong offset!");

}
