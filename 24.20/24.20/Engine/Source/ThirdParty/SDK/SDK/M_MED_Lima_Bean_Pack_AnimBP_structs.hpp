#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "AnimGraphRuntime_structs.hpp"

namespace SDK
{

struct M_MED_Lima_Bean_Pack_AnimBP::FAnimBlueprintGeneratedConstantData final : public FAnimBlueprintConstantData
{
public:
	uint8                                         Pad_1[0x3];
	class FName                                   __NameProperty_135;
	class FName                                   __NameProperty_136;
	int32                                         __IntProperty_137;
	class FName                                   __NameProperty_138;
	int32                                         __IntProperty_139;
	class UBlendProfile*                          __BlendProfile_140;
	class UCurveFloat*                            __CurveFloat_141;
	EAlphaBlendOption                             __EnumProperty_142;
	EBlendListTransitionType                      __EnumProperty_143;
	uint8                                         Pad_2A[0x6];
	TArray<float>                                 __ArrayProperty_144;
	EAnimSyncMethod                               __EnumProperty_145;
	uint8                                         Pad_41[0x3];
	class FName                                   __NameProperty_146;
	int32                                         __IntProperty_147;
	bool                                          __BoolProperty_148;
	uint8                                         Pad_4D[0x3];
	float                                         __FloatProperty_149;
	struct FInputScaleBiasClampConstants          __StructProperty_150;
	float                                         __FloatProperty_151;
	bool                                          __BoolProperty_152;
	EAnimSyncMethod                               __EnumProperty_153;
	EAnimGroupRole                                __ByteProperty_154;
	uint8                                         Pad_87[0x1];
	class FName                                   __NameProperty_155;
	class FName                                   __NameProperty_156;
	int32                                         __IntProperty_157;
	uint8                                         Pad_94[0x4];
	struct FAnimNodeFunctionRef                   __StructProperty_158;
	struct FAnimSubsystem_PropertyAccess          AnimBlueprintExtension_PropertyAccess;
	struct FAnimSubsystem_Base                    AnimBlueprintExtension_Base;
};
static_assert(alignof(M_MED_Lima_Bean_Pack_AnimBP::FAnimBlueprintGeneratedConstantData) == 0x000008, "Wrong alignment on M_MED_Lima_Bean_Pack_AnimBP::FAnimBlueprintGeneratedConstantData");
static_assert(sizeof(M_MED_Lima_Bean_Pack_AnimBP::FAnimBlueprintGeneratedConstantData) == 0x000148, "Wrong size on M_MED_Lima_Bean_Pack_AnimBP::FAnimBlueprintGeneratedConstantData");
static_assert(offsetof(M_MED_Lima_Bean_Pack_AnimBP::FAnimBlueprintGeneratedConstantData, __NameProperty_135) == 0x000004, "Member 'M_MED_Lima_Bean_Pack_AnimBP::FAnimBlueprintGeneratedConstantData::__NameProperty_135' has a wrong offset!");
static_assert(offsetof(M_MED_Lima_Bean_Pack_AnimBP::FAnimBlueprintGeneratedConstantData, __NameProperty_136) == 0x000008, "Member 'M_MED_Lima_Bean_Pack_AnimBP::FAnimBlueprintGeneratedConstantData::__NameProperty_136' has a wrong offset!");
static_assert(offsetof(M_MED_Lima_Bean_Pack_AnimBP::FAnimBlueprintGeneratedConstantData, __IntProperty_137) == 0x00000C, "Member 'M_MED_Lima_Bean_Pack_AnimBP::FAnimBlueprintGeneratedConstantData::__IntProperty_137' has a wrong offset!");
static_assert(offsetof(M_MED_Lima_Bean_Pack_AnimBP::FAnimBlueprintGeneratedConstantData, __NameProperty_138) == 0x000010, "Member 'M_MED_Lima_Bean_Pack_AnimBP::FAnimBlueprintGeneratedConstantData::__NameProperty_138' has a wrong offset!");
static_assert(offsetof(M_MED_Lima_Bean_Pack_AnimBP::FAnimBlueprintGeneratedConstantData, __IntProperty_139) == 0x000014, "Member 'M_MED_Lima_Bean_Pack_AnimBP::FAnimBlueprintGeneratedConstantData::__IntProperty_139' has a wrong offset!");
static_assert(offsetof(M_MED_Lima_Bean_Pack_AnimBP::FAnimBlueprintGeneratedConstantData, __BlendProfile_140) == 0x000018, "Member 'M_MED_Lima_Bean_Pack_AnimBP::FAnimBlueprintGeneratedConstantData::__BlendProfile_140' has a wrong offset!");
static_assert(offsetof(M_MED_Lima_Bean_Pack_AnimBP::FAnimBlueprintGeneratedConstantData, __CurveFloat_141) == 0x000020, "Member 'M_MED_Lima_Bean_Pack_AnimBP::FAnimBlueprintGeneratedConstantData::__CurveFloat_141' has a wrong offset!");
static_assert(offsetof(M_MED_Lima_Bean_Pack_AnimBP::FAnimBlueprintGeneratedConstantData, __EnumProperty_142) == 0x000028, "Member 'M_MED_Lima_Bean_Pack_AnimBP::FAnimBlueprintGeneratedConstantData::__EnumProperty_142' has a wrong offset!");
static_assert(offsetof(M_MED_Lima_Bean_Pack_AnimBP::FAnimBlueprintGeneratedConstantData, __EnumProperty_143) == 0x000029, "Member 'M_MED_Lima_Bean_Pack_AnimBP::FAnimBlueprintGeneratedConstantData::__EnumProperty_143' has a wrong offset!");
static_assert(offsetof(M_MED_Lima_Bean_Pack_AnimBP::FAnimBlueprintGeneratedConstantData, __ArrayProperty_144) == 0x000030, "Member 'M_MED_Lima_Bean_Pack_AnimBP::FAnimBlueprintGeneratedConstantData::__ArrayProperty_144' has a wrong offset!");
static_assert(offsetof(M_MED_Lima_Bean_Pack_AnimBP::FAnimBlueprintGeneratedConstantData, __EnumProperty_145) == 0x000040, "Member 'M_MED_Lima_Bean_Pack_AnimBP::FAnimBlueprintGeneratedConstantData::__EnumProperty_145' has a wrong offset!");
static_assert(offsetof(M_MED_Lima_Bean_Pack_AnimBP::FAnimBlueprintGeneratedConstantData, __NameProperty_146) == 0x000044, "Member 'M_MED_Lima_Bean_Pack_AnimBP::FAnimBlueprintGeneratedConstantData::__NameProperty_146' has a wrong offset!");
static_assert(offsetof(M_MED_Lima_Bean_Pack_AnimBP::FAnimBlueprintGeneratedConstantData, __IntProperty_147) == 0x000048, "Member 'M_MED_Lima_Bean_Pack_AnimBP::FAnimBlueprintGeneratedConstantData::__IntProperty_147' has a wrong offset!");
static_assert(offsetof(M_MED_Lima_Bean_Pack_AnimBP::FAnimBlueprintGeneratedConstantData, __BoolProperty_148) == 0x00004C, "Member 'M_MED_Lima_Bean_Pack_AnimBP::FAnimBlueprintGeneratedConstantData::__BoolProperty_148' has a wrong offset!");
static_assert(offsetof(M_MED_Lima_Bean_Pack_AnimBP::FAnimBlueprintGeneratedConstantData, __FloatProperty_149) == 0x000050, "Member 'M_MED_Lima_Bean_Pack_AnimBP::FAnimBlueprintGeneratedConstantData::__FloatProperty_149' has a wrong offset!");
static_assert(offsetof(M_MED_Lima_Bean_Pack_AnimBP::FAnimBlueprintGeneratedConstantData, __StructProperty_150) == 0x000054, "Member 'M_MED_Lima_Bean_Pack_AnimBP::FAnimBlueprintGeneratedConstantData::__StructProperty_150' has a wrong offset!");
static_assert(offsetof(M_MED_Lima_Bean_Pack_AnimBP::FAnimBlueprintGeneratedConstantData, __FloatProperty_151) == 0x000080, "Member 'M_MED_Lima_Bean_Pack_AnimBP::FAnimBlueprintGeneratedConstantData::__FloatProperty_151' has a wrong offset!");
static_assert(offsetof(M_MED_Lima_Bean_Pack_AnimBP::FAnimBlueprintGeneratedConstantData, __BoolProperty_152) == 0x000084, "Member 'M_MED_Lima_Bean_Pack_AnimBP::FAnimBlueprintGeneratedConstantData::__BoolProperty_152' has a wrong offset!");
static_assert(offsetof(M_MED_Lima_Bean_Pack_AnimBP::FAnimBlueprintGeneratedConstantData, __EnumProperty_153) == 0x000085, "Member 'M_MED_Lima_Bean_Pack_AnimBP::FAnimBlueprintGeneratedConstantData::__EnumProperty_153' has a wrong offset!");
static_assert(offsetof(M_MED_Lima_Bean_Pack_AnimBP::FAnimBlueprintGeneratedConstantData, __ByteProperty_154) == 0x000086, "Member 'M_MED_Lima_Bean_Pack_AnimBP::FAnimBlueprintGeneratedConstantData::__ByteProperty_154' has a wrong offset!");
static_assert(offsetof(M_MED_Lima_Bean_Pack_AnimBP::FAnimBlueprintGeneratedConstantData, __NameProperty_155) == 0x000088, "Member 'M_MED_Lima_Bean_Pack_AnimBP::FAnimBlueprintGeneratedConstantData::__NameProperty_155' has a wrong offset!");
static_assert(offsetof(M_MED_Lima_Bean_Pack_AnimBP::FAnimBlueprintGeneratedConstantData, __NameProperty_156) == 0x00008C, "Member 'M_MED_Lima_Bean_Pack_AnimBP::FAnimBlueprintGeneratedConstantData::__NameProperty_156' has a wrong offset!");
static_assert(offsetof(M_MED_Lima_Bean_Pack_AnimBP::FAnimBlueprintGeneratedConstantData, __IntProperty_157) == 0x000090, "Member 'M_MED_Lima_Bean_Pack_AnimBP::FAnimBlueprintGeneratedConstantData::__IntProperty_157' has a wrong offset!");
static_assert(offsetof(M_MED_Lima_Bean_Pack_AnimBP::FAnimBlueprintGeneratedConstantData, __StructProperty_158) == 0x000098, "Member 'M_MED_Lima_Bean_Pack_AnimBP::FAnimBlueprintGeneratedConstantData::__StructProperty_158' has a wrong offset!");
static_assert(offsetof(M_MED_Lima_Bean_Pack_AnimBP::FAnimBlueprintGeneratedConstantData, AnimBlueprintExtension_PropertyAccess) == 0x0000B0, "Member 'M_MED_Lima_Bean_Pack_AnimBP::FAnimBlueprintGeneratedConstantData::AnimBlueprintExtension_PropertyAccess' has a wrong offset!");
static_assert(offsetof(M_MED_Lima_Bean_Pack_AnimBP::FAnimBlueprintGeneratedConstantData, AnimBlueprintExtension_Base) == 0x000130, "Member 'M_MED_Lima_Bean_Pack_AnimBP::FAnimBlueprintGeneratedConstantData::AnimBlueprintExtension_Base' has a wrong offset!");

struct M_MED_Lima_Bean_Pack_AnimBP::FAnimBlueprintGeneratedMutableData final : public FAnimBlueprintMutableData
{
public:
	bool                                          __BoolProperty;
};
static_assert(alignof(M_MED_Lima_Bean_Pack_AnimBP::FAnimBlueprintGeneratedMutableData) == 0x000001, "Wrong alignment on M_MED_Lima_Bean_Pack_AnimBP::FAnimBlueprintGeneratedMutableData");
static_assert(sizeof(M_MED_Lima_Bean_Pack_AnimBP::FAnimBlueprintGeneratedMutableData) == 0x000002, "Wrong size on M_MED_Lima_Bean_Pack_AnimBP::FAnimBlueprintGeneratedMutableData");
static_assert(offsetof(M_MED_Lima_Bean_Pack_AnimBP::FAnimBlueprintGeneratedMutableData, __BoolProperty) == 0x000001, "Member 'M_MED_Lima_Bean_Pack_AnimBP::FAnimBlueprintGeneratedMutableData::__BoolProperty' has a wrong offset!");

}
