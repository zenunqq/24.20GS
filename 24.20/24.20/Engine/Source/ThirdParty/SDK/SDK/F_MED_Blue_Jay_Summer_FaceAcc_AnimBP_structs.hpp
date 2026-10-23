#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"

namespace SDK
{

struct F_MED_Blue_Jay_Summer_FaceAcc_AnimBP::FAnimBlueprintGeneratedConstantData final : public FAnimBlueprintConstantData
{
public:
	uint8                                         Pad_1[0x3];
	class FName                                   __NameProperty_46;
	class FName                                   __NameProperty_47;
	uint8                                         Pad_C[0x4];
	struct FAnimNodeFunctionRef                   __StructProperty_48;
	struct FAnimSubsystem_PropertyAccess          AnimBlueprintExtension_PropertyAccess;
	struct FAnimSubsystem_Base                    AnimBlueprintExtension_Base;
};
static_assert(alignof(F_MED_Blue_Jay_Summer_FaceAcc_AnimBP::FAnimBlueprintGeneratedConstantData) == 0x000008, "Wrong alignment on F_MED_Blue_Jay_Summer_FaceAcc_AnimBP::FAnimBlueprintGeneratedConstantData");
static_assert(sizeof(F_MED_Blue_Jay_Summer_FaceAcc_AnimBP::FAnimBlueprintGeneratedConstantData) == 0x0000C0, "Wrong size on F_MED_Blue_Jay_Summer_FaceAcc_AnimBP::FAnimBlueprintGeneratedConstantData");
static_assert(offsetof(F_MED_Blue_Jay_Summer_FaceAcc_AnimBP::FAnimBlueprintGeneratedConstantData, __NameProperty_46) == 0x000004, "Member 'F_MED_Blue_Jay_Summer_FaceAcc_AnimBP::FAnimBlueprintGeneratedConstantData::__NameProperty_46' has a wrong offset!");
static_assert(offsetof(F_MED_Blue_Jay_Summer_FaceAcc_AnimBP::FAnimBlueprintGeneratedConstantData, __NameProperty_47) == 0x000008, "Member 'F_MED_Blue_Jay_Summer_FaceAcc_AnimBP::FAnimBlueprintGeneratedConstantData::__NameProperty_47' has a wrong offset!");
static_assert(offsetof(F_MED_Blue_Jay_Summer_FaceAcc_AnimBP::FAnimBlueprintGeneratedConstantData, __StructProperty_48) == 0x000010, "Member 'F_MED_Blue_Jay_Summer_FaceAcc_AnimBP::FAnimBlueprintGeneratedConstantData::__StructProperty_48' has a wrong offset!");
static_assert(offsetof(F_MED_Blue_Jay_Summer_FaceAcc_AnimBP::FAnimBlueprintGeneratedConstantData, AnimBlueprintExtension_PropertyAccess) == 0x000028, "Member 'F_MED_Blue_Jay_Summer_FaceAcc_AnimBP::FAnimBlueprintGeneratedConstantData::AnimBlueprintExtension_PropertyAccess' has a wrong offset!");
static_assert(offsetof(F_MED_Blue_Jay_Summer_FaceAcc_AnimBP::FAnimBlueprintGeneratedConstantData, AnimBlueprintExtension_Base) == 0x0000A8, "Member 'F_MED_Blue_Jay_Summer_FaceAcc_AnimBP::FAnimBlueprintGeneratedConstantData::AnimBlueprintExtension_Base' has a wrong offset!");

}
