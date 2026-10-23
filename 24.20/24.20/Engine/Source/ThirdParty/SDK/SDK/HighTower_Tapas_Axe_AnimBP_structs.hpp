#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "AnimGraphRuntime_structs.hpp"

namespace SDK
{

struct HighTower_Tapas_Axe_AnimBP::FAnimBlueprintGeneratedConstantData final : public FAnimBlueprintConstantData
{
public:
	uint8                                         Pad_1[0x3];
	class FName                                   __NameProperty_61;
	class FName                                   __NameProperty_62;
	uint8                                         Pad_C[0x4];
	class UBlendProfile*                          __BlendProfile_63;
	class UCurveFloat*                            __CurveFloat_64;
	bool                                          __BoolProperty_65;
	EAlphaBlendOption                             __EnumProperty_66;
	EBlendListTransitionType                      __EnumProperty_67;
	uint8                                         Pad_23[0x5];
	TArray<float>                                 __ArrayProperty_68;
	struct FAnimNodeFunctionRef                   __StructProperty_69;
	struct FAnimSubsystem_PropertyAccess          AnimBlueprintExtension_PropertyAccess;
	struct FAnimSubsystem_Base                    AnimBlueprintExtension_Base;
};
static_assert(alignof(HighTower_Tapas_Axe_AnimBP::FAnimBlueprintGeneratedConstantData) == 0x000008, "Wrong alignment on HighTower_Tapas_Axe_AnimBP::FAnimBlueprintGeneratedConstantData");
static_assert(sizeof(HighTower_Tapas_Axe_AnimBP::FAnimBlueprintGeneratedConstantData) == 0x0000E8, "Wrong size on HighTower_Tapas_Axe_AnimBP::FAnimBlueprintGeneratedConstantData");
static_assert(offsetof(HighTower_Tapas_Axe_AnimBP::FAnimBlueprintGeneratedConstantData, __NameProperty_61) == 0x000004, "Member 'HighTower_Tapas_Axe_AnimBP::FAnimBlueprintGeneratedConstantData::__NameProperty_61' has a wrong offset!");
static_assert(offsetof(HighTower_Tapas_Axe_AnimBP::FAnimBlueprintGeneratedConstantData, __NameProperty_62) == 0x000008, "Member 'HighTower_Tapas_Axe_AnimBP::FAnimBlueprintGeneratedConstantData::__NameProperty_62' has a wrong offset!");
static_assert(offsetof(HighTower_Tapas_Axe_AnimBP::FAnimBlueprintGeneratedConstantData, __BlendProfile_63) == 0x000010, "Member 'HighTower_Tapas_Axe_AnimBP::FAnimBlueprintGeneratedConstantData::__BlendProfile_63' has a wrong offset!");
static_assert(offsetof(HighTower_Tapas_Axe_AnimBP::FAnimBlueprintGeneratedConstantData, __CurveFloat_64) == 0x000018, "Member 'HighTower_Tapas_Axe_AnimBP::FAnimBlueprintGeneratedConstantData::__CurveFloat_64' has a wrong offset!");
static_assert(offsetof(HighTower_Tapas_Axe_AnimBP::FAnimBlueprintGeneratedConstantData, __BoolProperty_65) == 0x000020, "Member 'HighTower_Tapas_Axe_AnimBP::FAnimBlueprintGeneratedConstantData::__BoolProperty_65' has a wrong offset!");
static_assert(offsetof(HighTower_Tapas_Axe_AnimBP::FAnimBlueprintGeneratedConstantData, __EnumProperty_66) == 0x000021, "Member 'HighTower_Tapas_Axe_AnimBP::FAnimBlueprintGeneratedConstantData::__EnumProperty_66' has a wrong offset!");
static_assert(offsetof(HighTower_Tapas_Axe_AnimBP::FAnimBlueprintGeneratedConstantData, __EnumProperty_67) == 0x000022, "Member 'HighTower_Tapas_Axe_AnimBP::FAnimBlueprintGeneratedConstantData::__EnumProperty_67' has a wrong offset!");
static_assert(offsetof(HighTower_Tapas_Axe_AnimBP::FAnimBlueprintGeneratedConstantData, __ArrayProperty_68) == 0x000028, "Member 'HighTower_Tapas_Axe_AnimBP::FAnimBlueprintGeneratedConstantData::__ArrayProperty_68' has a wrong offset!");
static_assert(offsetof(HighTower_Tapas_Axe_AnimBP::FAnimBlueprintGeneratedConstantData, __StructProperty_69) == 0x000038, "Member 'HighTower_Tapas_Axe_AnimBP::FAnimBlueprintGeneratedConstantData::__StructProperty_69' has a wrong offset!");
static_assert(offsetof(HighTower_Tapas_Axe_AnimBP::FAnimBlueprintGeneratedConstantData, AnimBlueprintExtension_PropertyAccess) == 0x000050, "Member 'HighTower_Tapas_Axe_AnimBP::FAnimBlueprintGeneratedConstantData::AnimBlueprintExtension_PropertyAccess' has a wrong offset!");
static_assert(offsetof(HighTower_Tapas_Axe_AnimBP::FAnimBlueprintGeneratedConstantData, AnimBlueprintExtension_Base) == 0x0000D0, "Member 'HighTower_Tapas_Axe_AnimBP::FAnimBlueprintGeneratedConstantData::AnimBlueprintExtension_Base' has a wrong offset!");

struct HighTower_Tapas_Axe_AnimBP::FAnimBlueprintGeneratedMutableData final : public FAnimBlueprintMutableData
{
public:
	bool                                          __BoolProperty;
};
static_assert(alignof(HighTower_Tapas_Axe_AnimBP::FAnimBlueprintGeneratedMutableData) == 0x000001, "Wrong alignment on HighTower_Tapas_Axe_AnimBP::FAnimBlueprintGeneratedMutableData");
static_assert(sizeof(HighTower_Tapas_Axe_AnimBP::FAnimBlueprintGeneratedMutableData) == 0x000002, "Wrong size on HighTower_Tapas_Axe_AnimBP::FAnimBlueprintGeneratedMutableData");
static_assert(offsetof(HighTower_Tapas_Axe_AnimBP::FAnimBlueprintGeneratedMutableData, __BoolProperty) == 0x000001, "Member 'HighTower_Tapas_Axe_AnimBP::FAnimBlueprintGeneratedMutableData::__BoolProperty' has a wrong offset!");

}
