#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "AnimGraphRuntime_structs.hpp"

namespace SDK
{

struct Fortnite_Base_Head_Export_Skeleton_AnimBP::FAnimBlueprintGeneratedConstantData : public FAnimBlueprintConstantData
{
public:
	bool                                          __BoolProperty_163;
	uint8                                         Pad_2[0x2];
	float                                         __FloatProperty_164;
	struct FInputScaleBiasClampConstants          __StructProperty_165;
	float                                         __FloatProperty_166;
	EAnimSyncMethod                               __EnumProperty_167;
	EAnimGroupRole                                __ByteProperty_168;
	uint8                                         Pad_3A[0x2];
	class FName                                   __NameProperty_169;
	class FName                                   __NameProperty_170;
	uint8                                         Pad_44[0x4];
	TArray<float>                                 __ArrayProperty_171;
	TArray<float>                                 __ArrayProperty_172;
	TArray<int32>                                 __ArrayProperty_173;
	class UBlendProfile*                          __BlendProfile_174;
	class UCurveFloat*                            __CurveFloat_175;
	bool                                          __BoolProperty_176;
	EAlphaBlendOption                             __EnumProperty_177;
	EBlendListTransitionType                      __EnumProperty_178;
	uint8                                         Pad_8B[0x5];
	TArray<float>                                 __ArrayProperty_179;
	struct FAnimNodeFunctionRef                   __StructProperty_180;
	struct FAnimSubsystem_PropertyAccess          AnimBlueprintExtension_PropertyAccess;
	struct FAnimSubsystem_Base                    AnimBlueprintExtension_Base;
};
static_assert(alignof(Fortnite_Base_Head_Export_Skeleton_AnimBP::FAnimBlueprintGeneratedConstantData) == 0x000008, "Wrong alignment on Fortnite_Base_Head_Export_Skeleton_AnimBP::FAnimBlueprintGeneratedConstantData");
static_assert(sizeof(Fortnite_Base_Head_Export_Skeleton_AnimBP::FAnimBlueprintGeneratedConstantData) == 0x000150, "Wrong size on Fortnite_Base_Head_Export_Skeleton_AnimBP::FAnimBlueprintGeneratedConstantData");
static_assert(offsetof(Fortnite_Base_Head_Export_Skeleton_AnimBP::FAnimBlueprintGeneratedConstantData, __BoolProperty_163) == 0x000001, "Member 'Fortnite_Base_Head_Export_Skeleton_AnimBP::FAnimBlueprintGeneratedConstantData::__BoolProperty_163' has a wrong offset!");
static_assert(offsetof(Fortnite_Base_Head_Export_Skeleton_AnimBP::FAnimBlueprintGeneratedConstantData, __FloatProperty_164) == 0x000004, "Member 'Fortnite_Base_Head_Export_Skeleton_AnimBP::FAnimBlueprintGeneratedConstantData::__FloatProperty_164' has a wrong offset!");
static_assert(offsetof(Fortnite_Base_Head_Export_Skeleton_AnimBP::FAnimBlueprintGeneratedConstantData, __StructProperty_165) == 0x000008, "Member 'Fortnite_Base_Head_Export_Skeleton_AnimBP::FAnimBlueprintGeneratedConstantData::__StructProperty_165' has a wrong offset!");
static_assert(offsetof(Fortnite_Base_Head_Export_Skeleton_AnimBP::FAnimBlueprintGeneratedConstantData, __FloatProperty_166) == 0x000034, "Member 'Fortnite_Base_Head_Export_Skeleton_AnimBP::FAnimBlueprintGeneratedConstantData::__FloatProperty_166' has a wrong offset!");
static_assert(offsetof(Fortnite_Base_Head_Export_Skeleton_AnimBP::FAnimBlueprintGeneratedConstantData, __EnumProperty_167) == 0x000038, "Member 'Fortnite_Base_Head_Export_Skeleton_AnimBP::FAnimBlueprintGeneratedConstantData::__EnumProperty_167' has a wrong offset!");
static_assert(offsetof(Fortnite_Base_Head_Export_Skeleton_AnimBP::FAnimBlueprintGeneratedConstantData, __ByteProperty_168) == 0x000039, "Member 'Fortnite_Base_Head_Export_Skeleton_AnimBP::FAnimBlueprintGeneratedConstantData::__ByteProperty_168' has a wrong offset!");
static_assert(offsetof(Fortnite_Base_Head_Export_Skeleton_AnimBP::FAnimBlueprintGeneratedConstantData, __NameProperty_169) == 0x00003C, "Member 'Fortnite_Base_Head_Export_Skeleton_AnimBP::FAnimBlueprintGeneratedConstantData::__NameProperty_169' has a wrong offset!");
static_assert(offsetof(Fortnite_Base_Head_Export_Skeleton_AnimBP::FAnimBlueprintGeneratedConstantData, __NameProperty_170) == 0x000040, "Member 'Fortnite_Base_Head_Export_Skeleton_AnimBP::FAnimBlueprintGeneratedConstantData::__NameProperty_170' has a wrong offset!");
static_assert(offsetof(Fortnite_Base_Head_Export_Skeleton_AnimBP::FAnimBlueprintGeneratedConstantData, __ArrayProperty_171) == 0x000048, "Member 'Fortnite_Base_Head_Export_Skeleton_AnimBP::FAnimBlueprintGeneratedConstantData::__ArrayProperty_171' has a wrong offset!");
static_assert(offsetof(Fortnite_Base_Head_Export_Skeleton_AnimBP::FAnimBlueprintGeneratedConstantData, __ArrayProperty_172) == 0x000058, "Member 'Fortnite_Base_Head_Export_Skeleton_AnimBP::FAnimBlueprintGeneratedConstantData::__ArrayProperty_172' has a wrong offset!");
static_assert(offsetof(Fortnite_Base_Head_Export_Skeleton_AnimBP::FAnimBlueprintGeneratedConstantData, __ArrayProperty_173) == 0x000068, "Member 'Fortnite_Base_Head_Export_Skeleton_AnimBP::FAnimBlueprintGeneratedConstantData::__ArrayProperty_173' has a wrong offset!");
static_assert(offsetof(Fortnite_Base_Head_Export_Skeleton_AnimBP::FAnimBlueprintGeneratedConstantData, __BlendProfile_174) == 0x000078, "Member 'Fortnite_Base_Head_Export_Skeleton_AnimBP::FAnimBlueprintGeneratedConstantData::__BlendProfile_174' has a wrong offset!");
static_assert(offsetof(Fortnite_Base_Head_Export_Skeleton_AnimBP::FAnimBlueprintGeneratedConstantData, __CurveFloat_175) == 0x000080, "Member 'Fortnite_Base_Head_Export_Skeleton_AnimBP::FAnimBlueprintGeneratedConstantData::__CurveFloat_175' has a wrong offset!");
static_assert(offsetof(Fortnite_Base_Head_Export_Skeleton_AnimBP::FAnimBlueprintGeneratedConstantData, __BoolProperty_176) == 0x000088, "Member 'Fortnite_Base_Head_Export_Skeleton_AnimBP::FAnimBlueprintGeneratedConstantData::__BoolProperty_176' has a wrong offset!");
static_assert(offsetof(Fortnite_Base_Head_Export_Skeleton_AnimBP::FAnimBlueprintGeneratedConstantData, __EnumProperty_177) == 0x000089, "Member 'Fortnite_Base_Head_Export_Skeleton_AnimBP::FAnimBlueprintGeneratedConstantData::__EnumProperty_177' has a wrong offset!");
static_assert(offsetof(Fortnite_Base_Head_Export_Skeleton_AnimBP::FAnimBlueprintGeneratedConstantData, __EnumProperty_178) == 0x00008A, "Member 'Fortnite_Base_Head_Export_Skeleton_AnimBP::FAnimBlueprintGeneratedConstantData::__EnumProperty_178' has a wrong offset!");
static_assert(offsetof(Fortnite_Base_Head_Export_Skeleton_AnimBP::FAnimBlueprintGeneratedConstantData, __ArrayProperty_179) == 0x000090, "Member 'Fortnite_Base_Head_Export_Skeleton_AnimBP::FAnimBlueprintGeneratedConstantData::__ArrayProperty_179' has a wrong offset!");
static_assert(offsetof(Fortnite_Base_Head_Export_Skeleton_AnimBP::FAnimBlueprintGeneratedConstantData, __StructProperty_180) == 0x0000A0, "Member 'Fortnite_Base_Head_Export_Skeleton_AnimBP::FAnimBlueprintGeneratedConstantData::__StructProperty_180' has a wrong offset!");
static_assert(offsetof(Fortnite_Base_Head_Export_Skeleton_AnimBP::FAnimBlueprintGeneratedConstantData, AnimBlueprintExtension_PropertyAccess) == 0x0000B8, "Member 'Fortnite_Base_Head_Export_Skeleton_AnimBP::FAnimBlueprintGeneratedConstantData::AnimBlueprintExtension_PropertyAccess' has a wrong offset!");
static_assert(offsetof(Fortnite_Base_Head_Export_Skeleton_AnimBP::FAnimBlueprintGeneratedConstantData, AnimBlueprintExtension_Base) == 0x000138, "Member 'Fortnite_Base_Head_Export_Skeleton_AnimBP::FAnimBlueprintGeneratedConstantData::AnimBlueprintExtension_Base' has a wrong offset!");

struct Fortnite_Base_Head_Export_Skeleton_AnimBP::FAnimBlueprintGeneratedMutableData final : public FAnimBlueprintMutableData
{
public:
	bool                                          __BoolProperty;
	bool                                          __BoolProperty_0;
	uint8                                         __ByteProperty_1;
	uint8                                         __ByteProperty_2;
	bool                                          __BoolProperty_3;
};
static_assert(alignof(Fortnite_Base_Head_Export_Skeleton_AnimBP::FAnimBlueprintGeneratedMutableData) == 0x000001, "Wrong alignment on Fortnite_Base_Head_Export_Skeleton_AnimBP::FAnimBlueprintGeneratedMutableData");
static_assert(sizeof(Fortnite_Base_Head_Export_Skeleton_AnimBP::FAnimBlueprintGeneratedMutableData) == 0x000006, "Wrong size on Fortnite_Base_Head_Export_Skeleton_AnimBP::FAnimBlueprintGeneratedMutableData");
static_assert(offsetof(Fortnite_Base_Head_Export_Skeleton_AnimBP::FAnimBlueprintGeneratedMutableData, __BoolProperty) == 0x000001, "Member 'Fortnite_Base_Head_Export_Skeleton_AnimBP::FAnimBlueprintGeneratedMutableData::__BoolProperty' has a wrong offset!");
static_assert(offsetof(Fortnite_Base_Head_Export_Skeleton_AnimBP::FAnimBlueprintGeneratedMutableData, __BoolProperty_0) == 0x000002, "Member 'Fortnite_Base_Head_Export_Skeleton_AnimBP::FAnimBlueprintGeneratedMutableData::__BoolProperty_0' has a wrong offset!");
static_assert(offsetof(Fortnite_Base_Head_Export_Skeleton_AnimBP::FAnimBlueprintGeneratedMutableData, __ByteProperty_1) == 0x000003, "Member 'Fortnite_Base_Head_Export_Skeleton_AnimBP::FAnimBlueprintGeneratedMutableData::__ByteProperty_1' has a wrong offset!");
static_assert(offsetof(Fortnite_Base_Head_Export_Skeleton_AnimBP::FAnimBlueprintGeneratedMutableData, __ByteProperty_2) == 0x000004, "Member 'Fortnite_Base_Head_Export_Skeleton_AnimBP::FAnimBlueprintGeneratedMutableData::__ByteProperty_2' has a wrong offset!");
static_assert(offsetof(Fortnite_Base_Head_Export_Skeleton_AnimBP::FAnimBlueprintGeneratedMutableData, __BoolProperty_3) == 0x000005, "Member 'Fortnite_Base_Head_Export_Skeleton_AnimBP::FAnimBlueprintGeneratedMutableData::__BoolProperty_3' has a wrong offset!");

}
