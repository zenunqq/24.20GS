#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"

namespace SDK
{

struct Mechanical_Engineer_Female_AnimBP::FAnimBlueprintGeneratedConstantData final : public FAnimBlueprintConstantData
{
public:
	uint8                                         Pad_1[0x3];
	class FName                                   __NameProperty_19;
	class FName                                   __NameProperty_20;
	uint8                                         Pad_C[0x4];
	struct FAnimNodeFunctionRef                   __StructProperty_21;
	struct FAnimSubsystem_PropertyAccess          AnimBlueprintExtension_PropertyAccess;
	struct FAnimSubsystem_Base                    AnimBlueprintExtension_Base;
};
static_assert(alignof(Mechanical_Engineer_Female_AnimBP::FAnimBlueprintGeneratedConstantData) == 0x000008, "Wrong alignment on Mechanical_Engineer_Female_AnimBP::FAnimBlueprintGeneratedConstantData");
static_assert(sizeof(Mechanical_Engineer_Female_AnimBP::FAnimBlueprintGeneratedConstantData) == 0x0000C0, "Wrong size on Mechanical_Engineer_Female_AnimBP::FAnimBlueprintGeneratedConstantData");
static_assert(offsetof(Mechanical_Engineer_Female_AnimBP::FAnimBlueprintGeneratedConstantData, __NameProperty_19) == 0x000004, "Member 'Mechanical_Engineer_Female_AnimBP::FAnimBlueprintGeneratedConstantData::__NameProperty_19' has a wrong offset!");
static_assert(offsetof(Mechanical_Engineer_Female_AnimBP::FAnimBlueprintGeneratedConstantData, __NameProperty_20) == 0x000008, "Member 'Mechanical_Engineer_Female_AnimBP::FAnimBlueprintGeneratedConstantData::__NameProperty_20' has a wrong offset!");
static_assert(offsetof(Mechanical_Engineer_Female_AnimBP::FAnimBlueprintGeneratedConstantData, __StructProperty_21) == 0x000010, "Member 'Mechanical_Engineer_Female_AnimBP::FAnimBlueprintGeneratedConstantData::__StructProperty_21' has a wrong offset!");
static_assert(offsetof(Mechanical_Engineer_Female_AnimBP::FAnimBlueprintGeneratedConstantData, AnimBlueprintExtension_PropertyAccess) == 0x000028, "Member 'Mechanical_Engineer_Female_AnimBP::FAnimBlueprintGeneratedConstantData::AnimBlueprintExtension_PropertyAccess' has a wrong offset!");
static_assert(offsetof(Mechanical_Engineer_Female_AnimBP::FAnimBlueprintGeneratedConstantData, AnimBlueprintExtension_Base) == 0x0000A8, "Member 'Mechanical_Engineer_Female_AnimBP::FAnimBlueprintGeneratedConstantData::AnimBlueprintExtension_Base' has a wrong offset!");

}
