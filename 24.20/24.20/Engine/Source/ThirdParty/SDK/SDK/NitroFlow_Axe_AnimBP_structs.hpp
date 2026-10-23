#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"

namespace SDK
{

struct NitroFlow_Axe_AnimBP::FAnimBlueprintGeneratedConstantData final : public FAnimBlueprintConstantData
{
public:
	uint8                                         Pad_1[0x3];
	class FName                                   __NameProperty_7;
	class FName                                   __NameProperty_8;
	uint8                                         Pad_C[0x4];
	struct FAnimNodeFunctionRef                   __StructProperty_9;
	struct FAnimSubsystem_PropertyAccess          AnimBlueprintExtension_PropertyAccess;
	struct FAnimSubsystem_Base                    AnimBlueprintExtension_Base;
};
static_assert(alignof(NitroFlow_Axe_AnimBP::FAnimBlueprintGeneratedConstantData) == 0x000008, "Wrong alignment on NitroFlow_Axe_AnimBP::FAnimBlueprintGeneratedConstantData");
static_assert(sizeof(NitroFlow_Axe_AnimBP::FAnimBlueprintGeneratedConstantData) == 0x0000C0, "Wrong size on NitroFlow_Axe_AnimBP::FAnimBlueprintGeneratedConstantData");
static_assert(offsetof(NitroFlow_Axe_AnimBP::FAnimBlueprintGeneratedConstantData, __NameProperty_7) == 0x000004, "Member 'NitroFlow_Axe_AnimBP::FAnimBlueprintGeneratedConstantData::__NameProperty_7' has a wrong offset!");
static_assert(offsetof(NitroFlow_Axe_AnimBP::FAnimBlueprintGeneratedConstantData, __NameProperty_8) == 0x000008, "Member 'NitroFlow_Axe_AnimBP::FAnimBlueprintGeneratedConstantData::__NameProperty_8' has a wrong offset!");
static_assert(offsetof(NitroFlow_Axe_AnimBP::FAnimBlueprintGeneratedConstantData, __StructProperty_9) == 0x000010, "Member 'NitroFlow_Axe_AnimBP::FAnimBlueprintGeneratedConstantData::__StructProperty_9' has a wrong offset!");
static_assert(offsetof(NitroFlow_Axe_AnimBP::FAnimBlueprintGeneratedConstantData, AnimBlueprintExtension_PropertyAccess) == 0x000028, "Member 'NitroFlow_Axe_AnimBP::FAnimBlueprintGeneratedConstantData::AnimBlueprintExtension_PropertyAccess' has a wrong offset!");
static_assert(offsetof(NitroFlow_Axe_AnimBP::FAnimBlueprintGeneratedConstantData, AnimBlueprintExtension_Base) == 0x0000A8, "Member 'NitroFlow_Axe_AnimBP::FAnimBlueprintGeneratedConstantData::AnimBlueprintExtension_Base' has a wrong offset!");

}
