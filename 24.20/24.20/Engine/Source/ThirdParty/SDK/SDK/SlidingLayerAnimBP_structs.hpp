#pragma once

#include "Basic.hpp"

#include "AnimGraphRuntime_structs.hpp"
#include "Engine_structs.hpp"

namespace SDK
{

struct SlidingLayerAnimBP::FAnimBlueprintGeneratedConstantData final : public FAnimBlueprintConstantData
{
public:
	uint8                                         Pad_1[0x3];
	class FName                                   __NameProperty_285;
	class FName                                   __NameProperty_286;
	class FName                                   __NameProperty_287;
	class FName                                   __NameProperty_288;
	ERefPoseType                                  __ByteProperty_289;
	uint8                                         Pad_15[0x3];
	class FName                                   __NameProperty_290;
	uint8                                         Pad_1C[0x4];
	TArray<float>                                 __ArrayProperty_291;
	class FName                                   __NameProperty_292;
	int32                                         __IntProperty_293;
	class FName                                   __NameProperty_294;
	int32                                         __IntProperty_295;
	class FName                                   __NameProperty_296;
	int32                                         __IntProperty_297;
	bool                                          __BoolProperty_298;
	uint8                                         Pad_49[0x3];
	class FName                                   __NameProperty_299;
	int32                                         __IntProperty_300;
	uint8                                         Pad_54[0x4];
	class UBlendProfile*                          __BlendProfile_301;
	class UCurveFloat*                            __CurveFloat_302;
	EAlphaBlendOption                             __EnumProperty_303;
	EBlendListTransitionType                      __EnumProperty_304;
	uint8                                         Pad_6A[0x6];
	TArray<float>                                 __ArrayProperty_305;
	class FName                                   __NameProperty_306;
	class FName                                   __NameProperty_307;
	float                                         __FloatProperty_308;
	struct FInputScaleBiasClampConstants          __StructProperty_309;
	float                                         __FloatProperty_310;
	bool                                          __BoolProperty_311;
	EAnimSyncMethod                               __EnumProperty_312;
	EAnimGroupRole                                __ByteProperty_313;
	uint8                                         Pad_BF[0x1];
	struct FAnimNodeFunctionRef                   __StructProperty_314;
	class FName                                   __NameProperty_315;
	class FName                                   __NameProperty_316;
	struct FAnimSubsystem_PropertyAccess          AnimBlueprintExtension_PropertyAccess;
	struct FAnimSubsystem_Base                    AnimBlueprintExtension_Base;
};
static_assert(alignof(SlidingLayerAnimBP::FAnimBlueprintGeneratedConstantData) == 0x000008, "Wrong alignment on SlidingLayerAnimBP::FAnimBlueprintGeneratedConstantData");
static_assert(sizeof(SlidingLayerAnimBP::FAnimBlueprintGeneratedConstantData) == 0x000178, "Wrong size on SlidingLayerAnimBP::FAnimBlueprintGeneratedConstantData");
static_assert(offsetof(SlidingLayerAnimBP::FAnimBlueprintGeneratedConstantData, __NameProperty_285) == 0x000004, "Member 'SlidingLayerAnimBP::FAnimBlueprintGeneratedConstantData::__NameProperty_285' has a wrong offset!");
static_assert(offsetof(SlidingLayerAnimBP::FAnimBlueprintGeneratedConstantData, __NameProperty_286) == 0x000008, "Member 'SlidingLayerAnimBP::FAnimBlueprintGeneratedConstantData::__NameProperty_286' has a wrong offset!");
static_assert(offsetof(SlidingLayerAnimBP::FAnimBlueprintGeneratedConstantData, __NameProperty_287) == 0x00000C, "Member 'SlidingLayerAnimBP::FAnimBlueprintGeneratedConstantData::__NameProperty_287' has a wrong offset!");
static_assert(offsetof(SlidingLayerAnimBP::FAnimBlueprintGeneratedConstantData, __NameProperty_288) == 0x000010, "Member 'SlidingLayerAnimBP::FAnimBlueprintGeneratedConstantData::__NameProperty_288' has a wrong offset!");
static_assert(offsetof(SlidingLayerAnimBP::FAnimBlueprintGeneratedConstantData, __ByteProperty_289) == 0x000014, "Member 'SlidingLayerAnimBP::FAnimBlueprintGeneratedConstantData::__ByteProperty_289' has a wrong offset!");
static_assert(offsetof(SlidingLayerAnimBP::FAnimBlueprintGeneratedConstantData, __NameProperty_290) == 0x000018, "Member 'SlidingLayerAnimBP::FAnimBlueprintGeneratedConstantData::__NameProperty_290' has a wrong offset!");
static_assert(offsetof(SlidingLayerAnimBP::FAnimBlueprintGeneratedConstantData, __ArrayProperty_291) == 0x000020, "Member 'SlidingLayerAnimBP::FAnimBlueprintGeneratedConstantData::__ArrayProperty_291' has a wrong offset!");
static_assert(offsetof(SlidingLayerAnimBP::FAnimBlueprintGeneratedConstantData, __NameProperty_292) == 0x000030, "Member 'SlidingLayerAnimBP::FAnimBlueprintGeneratedConstantData::__NameProperty_292' has a wrong offset!");
static_assert(offsetof(SlidingLayerAnimBP::FAnimBlueprintGeneratedConstantData, __IntProperty_293) == 0x000034, "Member 'SlidingLayerAnimBP::FAnimBlueprintGeneratedConstantData::__IntProperty_293' has a wrong offset!");
static_assert(offsetof(SlidingLayerAnimBP::FAnimBlueprintGeneratedConstantData, __NameProperty_294) == 0x000038, "Member 'SlidingLayerAnimBP::FAnimBlueprintGeneratedConstantData::__NameProperty_294' has a wrong offset!");
static_assert(offsetof(SlidingLayerAnimBP::FAnimBlueprintGeneratedConstantData, __IntProperty_295) == 0x00003C, "Member 'SlidingLayerAnimBP::FAnimBlueprintGeneratedConstantData::__IntProperty_295' has a wrong offset!");
static_assert(offsetof(SlidingLayerAnimBP::FAnimBlueprintGeneratedConstantData, __NameProperty_296) == 0x000040, "Member 'SlidingLayerAnimBP::FAnimBlueprintGeneratedConstantData::__NameProperty_296' has a wrong offset!");
static_assert(offsetof(SlidingLayerAnimBP::FAnimBlueprintGeneratedConstantData, __IntProperty_297) == 0x000044, "Member 'SlidingLayerAnimBP::FAnimBlueprintGeneratedConstantData::__IntProperty_297' has a wrong offset!");
static_assert(offsetof(SlidingLayerAnimBP::FAnimBlueprintGeneratedConstantData, __BoolProperty_298) == 0x000048, "Member 'SlidingLayerAnimBP::FAnimBlueprintGeneratedConstantData::__BoolProperty_298' has a wrong offset!");
static_assert(offsetof(SlidingLayerAnimBP::FAnimBlueprintGeneratedConstantData, __NameProperty_299) == 0x00004C, "Member 'SlidingLayerAnimBP::FAnimBlueprintGeneratedConstantData::__NameProperty_299' has a wrong offset!");
static_assert(offsetof(SlidingLayerAnimBP::FAnimBlueprintGeneratedConstantData, __IntProperty_300) == 0x000050, "Member 'SlidingLayerAnimBP::FAnimBlueprintGeneratedConstantData::__IntProperty_300' has a wrong offset!");
static_assert(offsetof(SlidingLayerAnimBP::FAnimBlueprintGeneratedConstantData, __BlendProfile_301) == 0x000058, "Member 'SlidingLayerAnimBP::FAnimBlueprintGeneratedConstantData::__BlendProfile_301' has a wrong offset!");
static_assert(offsetof(SlidingLayerAnimBP::FAnimBlueprintGeneratedConstantData, __CurveFloat_302) == 0x000060, "Member 'SlidingLayerAnimBP::FAnimBlueprintGeneratedConstantData::__CurveFloat_302' has a wrong offset!");
static_assert(offsetof(SlidingLayerAnimBP::FAnimBlueprintGeneratedConstantData, __EnumProperty_303) == 0x000068, "Member 'SlidingLayerAnimBP::FAnimBlueprintGeneratedConstantData::__EnumProperty_303' has a wrong offset!");
static_assert(offsetof(SlidingLayerAnimBP::FAnimBlueprintGeneratedConstantData, __EnumProperty_304) == 0x000069, "Member 'SlidingLayerAnimBP::FAnimBlueprintGeneratedConstantData::__EnumProperty_304' has a wrong offset!");
static_assert(offsetof(SlidingLayerAnimBP::FAnimBlueprintGeneratedConstantData, __ArrayProperty_305) == 0x000070, "Member 'SlidingLayerAnimBP::FAnimBlueprintGeneratedConstantData::__ArrayProperty_305' has a wrong offset!");
static_assert(offsetof(SlidingLayerAnimBP::FAnimBlueprintGeneratedConstantData, __NameProperty_306) == 0x000080, "Member 'SlidingLayerAnimBP::FAnimBlueprintGeneratedConstantData::__NameProperty_306' has a wrong offset!");
static_assert(offsetof(SlidingLayerAnimBP::FAnimBlueprintGeneratedConstantData, __NameProperty_307) == 0x000084, "Member 'SlidingLayerAnimBP::FAnimBlueprintGeneratedConstantData::__NameProperty_307' has a wrong offset!");
static_assert(offsetof(SlidingLayerAnimBP::FAnimBlueprintGeneratedConstantData, __FloatProperty_308) == 0x000088, "Member 'SlidingLayerAnimBP::FAnimBlueprintGeneratedConstantData::__FloatProperty_308' has a wrong offset!");
static_assert(offsetof(SlidingLayerAnimBP::FAnimBlueprintGeneratedConstantData, __StructProperty_309) == 0x00008C, "Member 'SlidingLayerAnimBP::FAnimBlueprintGeneratedConstantData::__StructProperty_309' has a wrong offset!");
static_assert(offsetof(SlidingLayerAnimBP::FAnimBlueprintGeneratedConstantData, __FloatProperty_310) == 0x0000B8, "Member 'SlidingLayerAnimBP::FAnimBlueprintGeneratedConstantData::__FloatProperty_310' has a wrong offset!");
static_assert(offsetof(SlidingLayerAnimBP::FAnimBlueprintGeneratedConstantData, __BoolProperty_311) == 0x0000BC, "Member 'SlidingLayerAnimBP::FAnimBlueprintGeneratedConstantData::__BoolProperty_311' has a wrong offset!");
static_assert(offsetof(SlidingLayerAnimBP::FAnimBlueprintGeneratedConstantData, __EnumProperty_312) == 0x0000BD, "Member 'SlidingLayerAnimBP::FAnimBlueprintGeneratedConstantData::__EnumProperty_312' has a wrong offset!");
static_assert(offsetof(SlidingLayerAnimBP::FAnimBlueprintGeneratedConstantData, __ByteProperty_313) == 0x0000BE, "Member 'SlidingLayerAnimBP::FAnimBlueprintGeneratedConstantData::__ByteProperty_313' has a wrong offset!");
static_assert(offsetof(SlidingLayerAnimBP::FAnimBlueprintGeneratedConstantData, __StructProperty_314) == 0x0000C0, "Member 'SlidingLayerAnimBP::FAnimBlueprintGeneratedConstantData::__StructProperty_314' has a wrong offset!");
static_assert(offsetof(SlidingLayerAnimBP::FAnimBlueprintGeneratedConstantData, __NameProperty_315) == 0x0000D8, "Member 'SlidingLayerAnimBP::FAnimBlueprintGeneratedConstantData::__NameProperty_315' has a wrong offset!");
static_assert(offsetof(SlidingLayerAnimBP::FAnimBlueprintGeneratedConstantData, __NameProperty_316) == 0x0000DC, "Member 'SlidingLayerAnimBP::FAnimBlueprintGeneratedConstantData::__NameProperty_316' has a wrong offset!");
static_assert(offsetof(SlidingLayerAnimBP::FAnimBlueprintGeneratedConstantData, AnimBlueprintExtension_PropertyAccess) == 0x0000E0, "Member 'SlidingLayerAnimBP::FAnimBlueprintGeneratedConstantData::AnimBlueprintExtension_PropertyAccess' has a wrong offset!");
static_assert(offsetof(SlidingLayerAnimBP::FAnimBlueprintGeneratedConstantData, AnimBlueprintExtension_Base) == 0x000160, "Member 'SlidingLayerAnimBP::FAnimBlueprintGeneratedConstantData::AnimBlueprintExtension_Base' has a wrong offset!");

struct SlidingLayerAnimBP::FAnimBlueprintGeneratedMutableData final : public FAnimBlueprintMutableData
{
public:
	uint8                                         Pad_1[0x3];
	float                                         __FloatProperty;
	bool                                          __BoolProperty_0;
	uint8                                         Pad_9[0x3];
	float                                         __FloatProperty_1;
	bool                                          __BoolProperty_2;
	uint8                                         Pad_11[0x3];
	float                                         __FloatProperty_3;
	float                                         __FloatProperty_4;
	float                                         __FloatProperty_5;
	float                                         __FloatProperty_6;
	float                                         __FloatProperty_7;
	float                                         __FloatProperty_8;
	float                                         __FloatProperty_9;
	float                                         __FloatProperty_10;
	float                                         __FloatProperty_11;
	float                                         __FloatProperty_12;
	bool                                          __BoolProperty_13;
};
static_assert(alignof(SlidingLayerAnimBP::FAnimBlueprintGeneratedMutableData) == 0x000004, "Wrong alignment on SlidingLayerAnimBP::FAnimBlueprintGeneratedMutableData");
static_assert(sizeof(SlidingLayerAnimBP::FAnimBlueprintGeneratedMutableData) == 0x000040, "Wrong size on SlidingLayerAnimBP::FAnimBlueprintGeneratedMutableData");
static_assert(offsetof(SlidingLayerAnimBP::FAnimBlueprintGeneratedMutableData, __FloatProperty) == 0x000004, "Member 'SlidingLayerAnimBP::FAnimBlueprintGeneratedMutableData::__FloatProperty' has a wrong offset!");
static_assert(offsetof(SlidingLayerAnimBP::FAnimBlueprintGeneratedMutableData, __BoolProperty_0) == 0x000008, "Member 'SlidingLayerAnimBP::FAnimBlueprintGeneratedMutableData::__BoolProperty_0' has a wrong offset!");
static_assert(offsetof(SlidingLayerAnimBP::FAnimBlueprintGeneratedMutableData, __FloatProperty_1) == 0x00000C, "Member 'SlidingLayerAnimBP::FAnimBlueprintGeneratedMutableData::__FloatProperty_1' has a wrong offset!");
static_assert(offsetof(SlidingLayerAnimBP::FAnimBlueprintGeneratedMutableData, __BoolProperty_2) == 0x000010, "Member 'SlidingLayerAnimBP::FAnimBlueprintGeneratedMutableData::__BoolProperty_2' has a wrong offset!");
static_assert(offsetof(SlidingLayerAnimBP::FAnimBlueprintGeneratedMutableData, __FloatProperty_3) == 0x000014, "Member 'SlidingLayerAnimBP::FAnimBlueprintGeneratedMutableData::__FloatProperty_3' has a wrong offset!");
static_assert(offsetof(SlidingLayerAnimBP::FAnimBlueprintGeneratedMutableData, __FloatProperty_4) == 0x000018, "Member 'SlidingLayerAnimBP::FAnimBlueprintGeneratedMutableData::__FloatProperty_4' has a wrong offset!");
static_assert(offsetof(SlidingLayerAnimBP::FAnimBlueprintGeneratedMutableData, __FloatProperty_5) == 0x00001C, "Member 'SlidingLayerAnimBP::FAnimBlueprintGeneratedMutableData::__FloatProperty_5' has a wrong offset!");
static_assert(offsetof(SlidingLayerAnimBP::FAnimBlueprintGeneratedMutableData, __FloatProperty_6) == 0x000020, "Member 'SlidingLayerAnimBP::FAnimBlueprintGeneratedMutableData::__FloatProperty_6' has a wrong offset!");
static_assert(offsetof(SlidingLayerAnimBP::FAnimBlueprintGeneratedMutableData, __FloatProperty_7) == 0x000024, "Member 'SlidingLayerAnimBP::FAnimBlueprintGeneratedMutableData::__FloatProperty_7' has a wrong offset!");
static_assert(offsetof(SlidingLayerAnimBP::FAnimBlueprintGeneratedMutableData, __FloatProperty_8) == 0x000028, "Member 'SlidingLayerAnimBP::FAnimBlueprintGeneratedMutableData::__FloatProperty_8' has a wrong offset!");
static_assert(offsetof(SlidingLayerAnimBP::FAnimBlueprintGeneratedMutableData, __FloatProperty_9) == 0x00002C, "Member 'SlidingLayerAnimBP::FAnimBlueprintGeneratedMutableData::__FloatProperty_9' has a wrong offset!");
static_assert(offsetof(SlidingLayerAnimBP::FAnimBlueprintGeneratedMutableData, __FloatProperty_10) == 0x000030, "Member 'SlidingLayerAnimBP::FAnimBlueprintGeneratedMutableData::__FloatProperty_10' has a wrong offset!");
static_assert(offsetof(SlidingLayerAnimBP::FAnimBlueprintGeneratedMutableData, __FloatProperty_11) == 0x000034, "Member 'SlidingLayerAnimBP::FAnimBlueprintGeneratedMutableData::__FloatProperty_11' has a wrong offset!");
static_assert(offsetof(SlidingLayerAnimBP::FAnimBlueprintGeneratedMutableData, __FloatProperty_12) == 0x000038, "Member 'SlidingLayerAnimBP::FAnimBlueprintGeneratedMutableData::__FloatProperty_12' has a wrong offset!");
static_assert(offsetof(SlidingLayerAnimBP::FAnimBlueprintGeneratedMutableData, __BoolProperty_13) == 0x00003C, "Member 'SlidingLayerAnimBP::FAnimBlueprintGeneratedMutableData::__BoolProperty_13' has a wrong offset!");

}
