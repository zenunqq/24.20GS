#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "AnimGraphRuntime_structs.hpp"

namespace SDK
{

struct RidingPlayerLayerAnimBP::FAnimBlueprintGeneratedConstantData final : public FAnimBlueprintConstantData
{
public:
	uint8                                         Pad_1[0x3];
	class FName                                   __NameProperty_265;
	class FName                                   __NameProperty_266;
	struct FInputScaleBiasClampConstants          __StructProperty_267;
	class UBlendProfile*                          __BlendProfile_268;
	class UCurveFloat*                            __CurveFloat_269;
	EAlphaBlendOption                             __EnumProperty_270;
	EBlendListTransitionType                      __EnumProperty_271;
	uint8                                         Pad_4A[0x6];
	TArray<float>                                 __ArrayProperty_272;
	bool                                          __BoolProperty_273;
	uint8                                         Pad_61[0x3];
	float                                         __FloatProperty_274;
	float                                         __FloatProperty_275;
	bool                                          __BoolProperty_276;
	EAnimSyncMethod                               __EnumProperty_277;
	EAnimGroupRole                                __ByteProperty_278;
	uint8                                         Pad_6F[0x1];
	class FName                                   __NameProperty_279;
	class FName                                   __NameProperty_280;
	class FName                                   __NameProperty_281;
	class FName                                   __NameProperty_282;
	struct FAnimNodeFunctionRef                   __StructProperty_283;
	class FName                                   __NameProperty_284;
	class FName                                   __NameProperty_285;
	struct FAnimSubsystem_PropertyAccess          AnimBlueprintExtension_PropertyAccess;
	struct FAnimSubsystem_Base                    AnimBlueprintExtension_Base;
};
static_assert(alignof(RidingPlayerLayerAnimBP::FAnimBlueprintGeneratedConstantData) == 0x000008, "Wrong alignment on RidingPlayerLayerAnimBP::FAnimBlueprintGeneratedConstantData");
static_assert(sizeof(RidingPlayerLayerAnimBP::FAnimBlueprintGeneratedConstantData) == 0x000138, "Wrong size on RidingPlayerLayerAnimBP::FAnimBlueprintGeneratedConstantData");
static_assert(offsetof(RidingPlayerLayerAnimBP::FAnimBlueprintGeneratedConstantData, __NameProperty_265) == 0x000004, "Member 'RidingPlayerLayerAnimBP::FAnimBlueprintGeneratedConstantData::__NameProperty_265' has a wrong offset!");
static_assert(offsetof(RidingPlayerLayerAnimBP::FAnimBlueprintGeneratedConstantData, __NameProperty_266) == 0x000008, "Member 'RidingPlayerLayerAnimBP::FAnimBlueprintGeneratedConstantData::__NameProperty_266' has a wrong offset!");
static_assert(offsetof(RidingPlayerLayerAnimBP::FAnimBlueprintGeneratedConstantData, __StructProperty_267) == 0x00000C, "Member 'RidingPlayerLayerAnimBP::FAnimBlueprintGeneratedConstantData::__StructProperty_267' has a wrong offset!");
static_assert(offsetof(RidingPlayerLayerAnimBP::FAnimBlueprintGeneratedConstantData, __BlendProfile_268) == 0x000038, "Member 'RidingPlayerLayerAnimBP::FAnimBlueprintGeneratedConstantData::__BlendProfile_268' has a wrong offset!");
static_assert(offsetof(RidingPlayerLayerAnimBP::FAnimBlueprintGeneratedConstantData, __CurveFloat_269) == 0x000040, "Member 'RidingPlayerLayerAnimBP::FAnimBlueprintGeneratedConstantData::__CurveFloat_269' has a wrong offset!");
static_assert(offsetof(RidingPlayerLayerAnimBP::FAnimBlueprintGeneratedConstantData, __EnumProperty_270) == 0x000048, "Member 'RidingPlayerLayerAnimBP::FAnimBlueprintGeneratedConstantData::__EnumProperty_270' has a wrong offset!");
static_assert(offsetof(RidingPlayerLayerAnimBP::FAnimBlueprintGeneratedConstantData, __EnumProperty_271) == 0x000049, "Member 'RidingPlayerLayerAnimBP::FAnimBlueprintGeneratedConstantData::__EnumProperty_271' has a wrong offset!");
static_assert(offsetof(RidingPlayerLayerAnimBP::FAnimBlueprintGeneratedConstantData, __ArrayProperty_272) == 0x000050, "Member 'RidingPlayerLayerAnimBP::FAnimBlueprintGeneratedConstantData::__ArrayProperty_272' has a wrong offset!");
static_assert(offsetof(RidingPlayerLayerAnimBP::FAnimBlueprintGeneratedConstantData, __BoolProperty_273) == 0x000060, "Member 'RidingPlayerLayerAnimBP::FAnimBlueprintGeneratedConstantData::__BoolProperty_273' has a wrong offset!");
static_assert(offsetof(RidingPlayerLayerAnimBP::FAnimBlueprintGeneratedConstantData, __FloatProperty_274) == 0x000064, "Member 'RidingPlayerLayerAnimBP::FAnimBlueprintGeneratedConstantData::__FloatProperty_274' has a wrong offset!");
static_assert(offsetof(RidingPlayerLayerAnimBP::FAnimBlueprintGeneratedConstantData, __FloatProperty_275) == 0x000068, "Member 'RidingPlayerLayerAnimBP::FAnimBlueprintGeneratedConstantData::__FloatProperty_275' has a wrong offset!");
static_assert(offsetof(RidingPlayerLayerAnimBP::FAnimBlueprintGeneratedConstantData, __BoolProperty_276) == 0x00006C, "Member 'RidingPlayerLayerAnimBP::FAnimBlueprintGeneratedConstantData::__BoolProperty_276' has a wrong offset!");
static_assert(offsetof(RidingPlayerLayerAnimBP::FAnimBlueprintGeneratedConstantData, __EnumProperty_277) == 0x00006D, "Member 'RidingPlayerLayerAnimBP::FAnimBlueprintGeneratedConstantData::__EnumProperty_277' has a wrong offset!");
static_assert(offsetof(RidingPlayerLayerAnimBP::FAnimBlueprintGeneratedConstantData, __ByteProperty_278) == 0x00006E, "Member 'RidingPlayerLayerAnimBP::FAnimBlueprintGeneratedConstantData::__ByteProperty_278' has a wrong offset!");
static_assert(offsetof(RidingPlayerLayerAnimBP::FAnimBlueprintGeneratedConstantData, __NameProperty_279) == 0x000070, "Member 'RidingPlayerLayerAnimBP::FAnimBlueprintGeneratedConstantData::__NameProperty_279' has a wrong offset!");
static_assert(offsetof(RidingPlayerLayerAnimBP::FAnimBlueprintGeneratedConstantData, __NameProperty_280) == 0x000074, "Member 'RidingPlayerLayerAnimBP::FAnimBlueprintGeneratedConstantData::__NameProperty_280' has a wrong offset!");
static_assert(offsetof(RidingPlayerLayerAnimBP::FAnimBlueprintGeneratedConstantData, __NameProperty_281) == 0x000078, "Member 'RidingPlayerLayerAnimBP::FAnimBlueprintGeneratedConstantData::__NameProperty_281' has a wrong offset!");
static_assert(offsetof(RidingPlayerLayerAnimBP::FAnimBlueprintGeneratedConstantData, __NameProperty_282) == 0x00007C, "Member 'RidingPlayerLayerAnimBP::FAnimBlueprintGeneratedConstantData::__NameProperty_282' has a wrong offset!");
static_assert(offsetof(RidingPlayerLayerAnimBP::FAnimBlueprintGeneratedConstantData, __StructProperty_283) == 0x000080, "Member 'RidingPlayerLayerAnimBP::FAnimBlueprintGeneratedConstantData::__StructProperty_283' has a wrong offset!");
static_assert(offsetof(RidingPlayerLayerAnimBP::FAnimBlueprintGeneratedConstantData, __NameProperty_284) == 0x000098, "Member 'RidingPlayerLayerAnimBP::FAnimBlueprintGeneratedConstantData::__NameProperty_284' has a wrong offset!");
static_assert(offsetof(RidingPlayerLayerAnimBP::FAnimBlueprintGeneratedConstantData, __NameProperty_285) == 0x00009C, "Member 'RidingPlayerLayerAnimBP::FAnimBlueprintGeneratedConstantData::__NameProperty_285' has a wrong offset!");
static_assert(offsetof(RidingPlayerLayerAnimBP::FAnimBlueprintGeneratedConstantData, AnimBlueprintExtension_PropertyAccess) == 0x0000A0, "Member 'RidingPlayerLayerAnimBP::FAnimBlueprintGeneratedConstantData::AnimBlueprintExtension_PropertyAccess' has a wrong offset!");
static_assert(offsetof(RidingPlayerLayerAnimBP::FAnimBlueprintGeneratedConstantData, AnimBlueprintExtension_Base) == 0x000120, "Member 'RidingPlayerLayerAnimBP::FAnimBlueprintGeneratedConstantData::AnimBlueprintExtension_Base' has a wrong offset!");

struct RidingPlayerLayerAnimBP::FAnimBlueprintGeneratedMutableData final : public FAnimBlueprintMutableData
{
public:
	bool                                          __BoolProperty;
	uint8                                         Pad_2[0x2];
	float                                         __FloatProperty_0;
	float                                         __FloatProperty_1;
	bool                                          __BoolProperty_2;
	bool                                          __BoolProperty_3;
	bool                                          __BoolProperty_4;
	uint8                                         Pad_F[0x1];
	float                                         __FloatProperty_5;
	bool                                          __BoolProperty_6;
	bool                                          __BoolProperty_7;
	bool                                          __BoolProperty_8;
	bool                                          __BoolProperty_9;
	float                                         __FloatProperty_10;
};
static_assert(alignof(RidingPlayerLayerAnimBP::FAnimBlueprintGeneratedMutableData) == 0x000004, "Wrong alignment on RidingPlayerLayerAnimBP::FAnimBlueprintGeneratedMutableData");
static_assert(sizeof(RidingPlayerLayerAnimBP::FAnimBlueprintGeneratedMutableData) == 0x00001C, "Wrong size on RidingPlayerLayerAnimBP::FAnimBlueprintGeneratedMutableData");
static_assert(offsetof(RidingPlayerLayerAnimBP::FAnimBlueprintGeneratedMutableData, __BoolProperty) == 0x000001, "Member 'RidingPlayerLayerAnimBP::FAnimBlueprintGeneratedMutableData::__BoolProperty' has a wrong offset!");
static_assert(offsetof(RidingPlayerLayerAnimBP::FAnimBlueprintGeneratedMutableData, __FloatProperty_0) == 0x000004, "Member 'RidingPlayerLayerAnimBP::FAnimBlueprintGeneratedMutableData::__FloatProperty_0' has a wrong offset!");
static_assert(offsetof(RidingPlayerLayerAnimBP::FAnimBlueprintGeneratedMutableData, __FloatProperty_1) == 0x000008, "Member 'RidingPlayerLayerAnimBP::FAnimBlueprintGeneratedMutableData::__FloatProperty_1' has a wrong offset!");
static_assert(offsetof(RidingPlayerLayerAnimBP::FAnimBlueprintGeneratedMutableData, __BoolProperty_2) == 0x00000C, "Member 'RidingPlayerLayerAnimBP::FAnimBlueprintGeneratedMutableData::__BoolProperty_2' has a wrong offset!");
static_assert(offsetof(RidingPlayerLayerAnimBP::FAnimBlueprintGeneratedMutableData, __BoolProperty_3) == 0x00000D, "Member 'RidingPlayerLayerAnimBP::FAnimBlueprintGeneratedMutableData::__BoolProperty_3' has a wrong offset!");
static_assert(offsetof(RidingPlayerLayerAnimBP::FAnimBlueprintGeneratedMutableData, __BoolProperty_4) == 0x00000E, "Member 'RidingPlayerLayerAnimBP::FAnimBlueprintGeneratedMutableData::__BoolProperty_4' has a wrong offset!");
static_assert(offsetof(RidingPlayerLayerAnimBP::FAnimBlueprintGeneratedMutableData, __FloatProperty_5) == 0x000010, "Member 'RidingPlayerLayerAnimBP::FAnimBlueprintGeneratedMutableData::__FloatProperty_5' has a wrong offset!");
static_assert(offsetof(RidingPlayerLayerAnimBP::FAnimBlueprintGeneratedMutableData, __BoolProperty_6) == 0x000014, "Member 'RidingPlayerLayerAnimBP::FAnimBlueprintGeneratedMutableData::__BoolProperty_6' has a wrong offset!");
static_assert(offsetof(RidingPlayerLayerAnimBP::FAnimBlueprintGeneratedMutableData, __BoolProperty_7) == 0x000015, "Member 'RidingPlayerLayerAnimBP::FAnimBlueprintGeneratedMutableData::__BoolProperty_7' has a wrong offset!");
static_assert(offsetof(RidingPlayerLayerAnimBP::FAnimBlueprintGeneratedMutableData, __BoolProperty_8) == 0x000016, "Member 'RidingPlayerLayerAnimBP::FAnimBlueprintGeneratedMutableData::__BoolProperty_8' has a wrong offset!");
static_assert(offsetof(RidingPlayerLayerAnimBP::FAnimBlueprintGeneratedMutableData, __BoolProperty_9) == 0x000017, "Member 'RidingPlayerLayerAnimBP::FAnimBlueprintGeneratedMutableData::__BoolProperty_9' has a wrong offset!");
static_assert(offsetof(RidingPlayerLayerAnimBP::FAnimBlueprintGeneratedMutableData, __FloatProperty_10) == 0x000018, "Member 'RidingPlayerLayerAnimBP::FAnimBlueprintGeneratedMutableData::__FloatProperty_10' has a wrong offset!");

}
