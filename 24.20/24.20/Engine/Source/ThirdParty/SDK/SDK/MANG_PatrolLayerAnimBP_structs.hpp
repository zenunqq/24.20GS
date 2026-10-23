#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "AnimGraphRuntime_structs.hpp"

namespace SDK
{

struct MANG_PatrolLayerAnimBP::FAnimBlueprintGeneratedConstantData final : public FAnimBlueprintConstantData
{
public:
	uint8                                         Pad_1[0x3];
	class FName                                   __NameProperty_144;
	class FName                                   __NameProperty_145;
	class FName                                   __NameProperty_146;
	class UBlendProfile*                          __BlendProfile_147;
	class UCurveFloat*                            __CurveFloat_148;
	EAlphaBlendOption                             __EnumProperty_149;
	EBlendListTransitionType                      __EnumProperty_150;
	uint8                                         Pad_22[0x6];
	TArray<float>                                 __ArrayProperty_151;
	class FName                                   __NameProperty_152;
	int32                                         __IntProperty_153;
	class FName                                   __NameProperty_154;
	int32                                         __IntProperty_155;
	EAnimSyncMethod                               __EnumProperty_156;
	uint8                                         Pad_49[0x3];
	class FName                                   __NameProperty_157;
	class FName                                   __NameProperty_158;
	int32                                         __IntProperty_159;
	class FName                                   __NameProperty_160;
	int32                                         __IntProperty_161;
	bool                                          __BoolProperty_162;
	uint8                                         Pad_61[0x3];
	float                                         __FloatProperty_163;
	struct FInputScaleBiasClampConstants          __StructProperty_164;
	float                                         __FloatProperty_165;
	bool                                          __BoolProperty_166;
	EAnimSyncMethod                               __EnumProperty_167;
	EAnimGroupRole                                __ByteProperty_168;
	uint8                                         Pad_9B[0x5];
	struct FAnimNodeFunctionRef                   __StructProperty_169;
	class FName                                   __NameProperty_170;
	class FName                                   __NameProperty_171;
	struct FAnimSubsystem_PropertyAccess          AnimBlueprintExtension_PropertyAccess;
	struct FAnimSubsystem_Base                    AnimBlueprintExtension_Base;
};
static_assert(alignof(MANG_PatrolLayerAnimBP::FAnimBlueprintGeneratedConstantData) == 0x000008, "Wrong alignment on MANG_PatrolLayerAnimBP::FAnimBlueprintGeneratedConstantData");
static_assert(sizeof(MANG_PatrolLayerAnimBP::FAnimBlueprintGeneratedConstantData) == 0x000158, "Wrong size on MANG_PatrolLayerAnimBP::FAnimBlueprintGeneratedConstantData");
static_assert(offsetof(MANG_PatrolLayerAnimBP::FAnimBlueprintGeneratedConstantData, __NameProperty_144) == 0x000004, "Member 'MANG_PatrolLayerAnimBP::FAnimBlueprintGeneratedConstantData::__NameProperty_144' has a wrong offset!");
static_assert(offsetof(MANG_PatrolLayerAnimBP::FAnimBlueprintGeneratedConstantData, __NameProperty_145) == 0x000008, "Member 'MANG_PatrolLayerAnimBP::FAnimBlueprintGeneratedConstantData::__NameProperty_145' has a wrong offset!");
static_assert(offsetof(MANG_PatrolLayerAnimBP::FAnimBlueprintGeneratedConstantData, __NameProperty_146) == 0x00000C, "Member 'MANG_PatrolLayerAnimBP::FAnimBlueprintGeneratedConstantData::__NameProperty_146' has a wrong offset!");
static_assert(offsetof(MANG_PatrolLayerAnimBP::FAnimBlueprintGeneratedConstantData, __BlendProfile_147) == 0x000010, "Member 'MANG_PatrolLayerAnimBP::FAnimBlueprintGeneratedConstantData::__BlendProfile_147' has a wrong offset!");
static_assert(offsetof(MANG_PatrolLayerAnimBP::FAnimBlueprintGeneratedConstantData, __CurveFloat_148) == 0x000018, "Member 'MANG_PatrolLayerAnimBP::FAnimBlueprintGeneratedConstantData::__CurveFloat_148' has a wrong offset!");
static_assert(offsetof(MANG_PatrolLayerAnimBP::FAnimBlueprintGeneratedConstantData, __EnumProperty_149) == 0x000020, "Member 'MANG_PatrolLayerAnimBP::FAnimBlueprintGeneratedConstantData::__EnumProperty_149' has a wrong offset!");
static_assert(offsetof(MANG_PatrolLayerAnimBP::FAnimBlueprintGeneratedConstantData, __EnumProperty_150) == 0x000021, "Member 'MANG_PatrolLayerAnimBP::FAnimBlueprintGeneratedConstantData::__EnumProperty_150' has a wrong offset!");
static_assert(offsetof(MANG_PatrolLayerAnimBP::FAnimBlueprintGeneratedConstantData, __ArrayProperty_151) == 0x000028, "Member 'MANG_PatrolLayerAnimBP::FAnimBlueprintGeneratedConstantData::__ArrayProperty_151' has a wrong offset!");
static_assert(offsetof(MANG_PatrolLayerAnimBP::FAnimBlueprintGeneratedConstantData, __NameProperty_152) == 0x000038, "Member 'MANG_PatrolLayerAnimBP::FAnimBlueprintGeneratedConstantData::__NameProperty_152' has a wrong offset!");
static_assert(offsetof(MANG_PatrolLayerAnimBP::FAnimBlueprintGeneratedConstantData, __IntProperty_153) == 0x00003C, "Member 'MANG_PatrolLayerAnimBP::FAnimBlueprintGeneratedConstantData::__IntProperty_153' has a wrong offset!");
static_assert(offsetof(MANG_PatrolLayerAnimBP::FAnimBlueprintGeneratedConstantData, __NameProperty_154) == 0x000040, "Member 'MANG_PatrolLayerAnimBP::FAnimBlueprintGeneratedConstantData::__NameProperty_154' has a wrong offset!");
static_assert(offsetof(MANG_PatrolLayerAnimBP::FAnimBlueprintGeneratedConstantData, __IntProperty_155) == 0x000044, "Member 'MANG_PatrolLayerAnimBP::FAnimBlueprintGeneratedConstantData::__IntProperty_155' has a wrong offset!");
static_assert(offsetof(MANG_PatrolLayerAnimBP::FAnimBlueprintGeneratedConstantData, __EnumProperty_156) == 0x000048, "Member 'MANG_PatrolLayerAnimBP::FAnimBlueprintGeneratedConstantData::__EnumProperty_156' has a wrong offset!");
static_assert(offsetof(MANG_PatrolLayerAnimBP::FAnimBlueprintGeneratedConstantData, __NameProperty_157) == 0x00004C, "Member 'MANG_PatrolLayerAnimBP::FAnimBlueprintGeneratedConstantData::__NameProperty_157' has a wrong offset!");
static_assert(offsetof(MANG_PatrolLayerAnimBP::FAnimBlueprintGeneratedConstantData, __NameProperty_158) == 0x000050, "Member 'MANG_PatrolLayerAnimBP::FAnimBlueprintGeneratedConstantData::__NameProperty_158' has a wrong offset!");
static_assert(offsetof(MANG_PatrolLayerAnimBP::FAnimBlueprintGeneratedConstantData, __IntProperty_159) == 0x000054, "Member 'MANG_PatrolLayerAnimBP::FAnimBlueprintGeneratedConstantData::__IntProperty_159' has a wrong offset!");
static_assert(offsetof(MANG_PatrolLayerAnimBP::FAnimBlueprintGeneratedConstantData, __NameProperty_160) == 0x000058, "Member 'MANG_PatrolLayerAnimBP::FAnimBlueprintGeneratedConstantData::__NameProperty_160' has a wrong offset!");
static_assert(offsetof(MANG_PatrolLayerAnimBP::FAnimBlueprintGeneratedConstantData, __IntProperty_161) == 0x00005C, "Member 'MANG_PatrolLayerAnimBP::FAnimBlueprintGeneratedConstantData::__IntProperty_161' has a wrong offset!");
static_assert(offsetof(MANG_PatrolLayerAnimBP::FAnimBlueprintGeneratedConstantData, __BoolProperty_162) == 0x000060, "Member 'MANG_PatrolLayerAnimBP::FAnimBlueprintGeneratedConstantData::__BoolProperty_162' has a wrong offset!");
static_assert(offsetof(MANG_PatrolLayerAnimBP::FAnimBlueprintGeneratedConstantData, __FloatProperty_163) == 0x000064, "Member 'MANG_PatrolLayerAnimBP::FAnimBlueprintGeneratedConstantData::__FloatProperty_163' has a wrong offset!");
static_assert(offsetof(MANG_PatrolLayerAnimBP::FAnimBlueprintGeneratedConstantData, __StructProperty_164) == 0x000068, "Member 'MANG_PatrolLayerAnimBP::FAnimBlueprintGeneratedConstantData::__StructProperty_164' has a wrong offset!");
static_assert(offsetof(MANG_PatrolLayerAnimBP::FAnimBlueprintGeneratedConstantData, __FloatProperty_165) == 0x000094, "Member 'MANG_PatrolLayerAnimBP::FAnimBlueprintGeneratedConstantData::__FloatProperty_165' has a wrong offset!");
static_assert(offsetof(MANG_PatrolLayerAnimBP::FAnimBlueprintGeneratedConstantData, __BoolProperty_166) == 0x000098, "Member 'MANG_PatrolLayerAnimBP::FAnimBlueprintGeneratedConstantData::__BoolProperty_166' has a wrong offset!");
static_assert(offsetof(MANG_PatrolLayerAnimBP::FAnimBlueprintGeneratedConstantData, __EnumProperty_167) == 0x000099, "Member 'MANG_PatrolLayerAnimBP::FAnimBlueprintGeneratedConstantData::__EnumProperty_167' has a wrong offset!");
static_assert(offsetof(MANG_PatrolLayerAnimBP::FAnimBlueprintGeneratedConstantData, __ByteProperty_168) == 0x00009A, "Member 'MANG_PatrolLayerAnimBP::FAnimBlueprintGeneratedConstantData::__ByteProperty_168' has a wrong offset!");
static_assert(offsetof(MANG_PatrolLayerAnimBP::FAnimBlueprintGeneratedConstantData, __StructProperty_169) == 0x0000A0, "Member 'MANG_PatrolLayerAnimBP::FAnimBlueprintGeneratedConstantData::__StructProperty_169' has a wrong offset!");
static_assert(offsetof(MANG_PatrolLayerAnimBP::FAnimBlueprintGeneratedConstantData, __NameProperty_170) == 0x0000B8, "Member 'MANG_PatrolLayerAnimBP::FAnimBlueprintGeneratedConstantData::__NameProperty_170' has a wrong offset!");
static_assert(offsetof(MANG_PatrolLayerAnimBP::FAnimBlueprintGeneratedConstantData, __NameProperty_171) == 0x0000BC, "Member 'MANG_PatrolLayerAnimBP::FAnimBlueprintGeneratedConstantData::__NameProperty_171' has a wrong offset!");
static_assert(offsetof(MANG_PatrolLayerAnimBP::FAnimBlueprintGeneratedConstantData, AnimBlueprintExtension_PropertyAccess) == 0x0000C0, "Member 'MANG_PatrolLayerAnimBP::FAnimBlueprintGeneratedConstantData::AnimBlueprintExtension_PropertyAccess' has a wrong offset!");
static_assert(offsetof(MANG_PatrolLayerAnimBP::FAnimBlueprintGeneratedConstantData, AnimBlueprintExtension_Base) == 0x000140, "Member 'MANG_PatrolLayerAnimBP::FAnimBlueprintGeneratedConstantData::AnimBlueprintExtension_Base' has a wrong offset!");

struct MANG_PatrolLayerAnimBP::FAnimBlueprintGeneratedMutableData final : public FAnimBlueprintMutableData
{
public:
	bool                                          __BoolProperty;
	uint8                                         Pad_2[0x2];
	float                                         __FloatProperty_0;
	float                                         __FloatProperty_1;
	float                                         __FloatProperty_2;
	float                                         __FloatProperty_3;
	float                                         __FloatProperty_4;
	float                                         __FloatProperty_5;
};
static_assert(alignof(MANG_PatrolLayerAnimBP::FAnimBlueprintGeneratedMutableData) == 0x000004, "Wrong alignment on MANG_PatrolLayerAnimBP::FAnimBlueprintGeneratedMutableData");
static_assert(sizeof(MANG_PatrolLayerAnimBP::FAnimBlueprintGeneratedMutableData) == 0x00001C, "Wrong size on MANG_PatrolLayerAnimBP::FAnimBlueprintGeneratedMutableData");
static_assert(offsetof(MANG_PatrolLayerAnimBP::FAnimBlueprintGeneratedMutableData, __BoolProperty) == 0x000001, "Member 'MANG_PatrolLayerAnimBP::FAnimBlueprintGeneratedMutableData::__BoolProperty' has a wrong offset!");
static_assert(offsetof(MANG_PatrolLayerAnimBP::FAnimBlueprintGeneratedMutableData, __FloatProperty_0) == 0x000004, "Member 'MANG_PatrolLayerAnimBP::FAnimBlueprintGeneratedMutableData::__FloatProperty_0' has a wrong offset!");
static_assert(offsetof(MANG_PatrolLayerAnimBP::FAnimBlueprintGeneratedMutableData, __FloatProperty_1) == 0x000008, "Member 'MANG_PatrolLayerAnimBP::FAnimBlueprintGeneratedMutableData::__FloatProperty_1' has a wrong offset!");
static_assert(offsetof(MANG_PatrolLayerAnimBP::FAnimBlueprintGeneratedMutableData, __FloatProperty_2) == 0x00000C, "Member 'MANG_PatrolLayerAnimBP::FAnimBlueprintGeneratedMutableData::__FloatProperty_2' has a wrong offset!");
static_assert(offsetof(MANG_PatrolLayerAnimBP::FAnimBlueprintGeneratedMutableData, __FloatProperty_3) == 0x000010, "Member 'MANG_PatrolLayerAnimBP::FAnimBlueprintGeneratedMutableData::__FloatProperty_3' has a wrong offset!");
static_assert(offsetof(MANG_PatrolLayerAnimBP::FAnimBlueprintGeneratedMutableData, __FloatProperty_4) == 0x000014, "Member 'MANG_PatrolLayerAnimBP::FAnimBlueprintGeneratedMutableData::__FloatProperty_4' has a wrong offset!");
static_assert(offsetof(MANG_PatrolLayerAnimBP::FAnimBlueprintGeneratedMutableData, __FloatProperty_5) == 0x000018, "Member 'MANG_PatrolLayerAnimBP::FAnimBlueprintGeneratedMutableData::__FloatProperty_5' has a wrong offset!");

}
