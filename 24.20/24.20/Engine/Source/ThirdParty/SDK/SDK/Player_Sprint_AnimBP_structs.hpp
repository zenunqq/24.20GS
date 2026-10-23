#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "AnimGraphRuntime_structs.hpp"

namespace SDK
{

struct Player_Sprint_AnimBP::FAnimBlueprintGeneratedConstantData final : public FAnimBlueprintConstantData
{
public:
	uint8                                         Pad_1[0x3];
	class FName                                   __NameProperty_256;
	class FName                                   __NameProperty_257;
	int32                                         __IntProperty_258;
	EBlendListTransitionType                      __EnumProperty_259;
	uint8                                         Pad_11[0x7];
	TArray<float>                                 __ArrayProperty_260;
	class FName                                   __NameProperty_261;
	int32                                         __IntProperty_262;
	struct FInputScaleBiasClampConstants          __StructProperty_263;
	float                                         __FloatProperty_264;
	EAnimSyncMethod                               __EnumProperty_265;
	EAnimGroupRole                                __ByteProperty_266;
	bool                                          __BoolProperty_267;
	uint8                                         Pad_63[0x1];
	float                                         __FloatProperty_268;
	EAnimSyncMethod                               __EnumProperty_269;
	EAnimGroupRole                                __ByteProperty_270;
	uint8                                         Pad_6A[0x2];
	class FName                                   __NameProperty_271;
	class UBlendProfile*                          __BlendProfile_272;
	class UCurveFloat*                            __CurveFloat_273;
	bool                                          __BoolProperty_274;
	EAlphaBlendOption                             __EnumProperty_275;
	EBlendListTransitionType                      __EnumProperty_276;
	uint8                                         Pad_83[0x5];
	TArray<float>                                 __ArrayProperty_277;
	class FName                                   __NameProperty_278;
	class FName                                   __NameProperty_279;
	int32                                         __IntProperty_280;
	uint8                                         Pad_A4[0x4];
	struct FAnimNodeFunctionRef                   __StructProperty_281;
	struct FAnimSubsystem_PropertyAccess          AnimBlueprintExtension_PropertyAccess;
	struct FAnimSubsystem_Base                    AnimBlueprintExtension_Base;
};
static_assert(alignof(Player_Sprint_AnimBP::FAnimBlueprintGeneratedConstantData) == 0x000008, "Wrong alignment on Player_Sprint_AnimBP::FAnimBlueprintGeneratedConstantData");
static_assert(sizeof(Player_Sprint_AnimBP::FAnimBlueprintGeneratedConstantData) == 0x000158, "Wrong size on Player_Sprint_AnimBP::FAnimBlueprintGeneratedConstantData");
static_assert(offsetof(Player_Sprint_AnimBP::FAnimBlueprintGeneratedConstantData, __NameProperty_256) == 0x000004, "Member 'Player_Sprint_AnimBP::FAnimBlueprintGeneratedConstantData::__NameProperty_256' has a wrong offset!");
static_assert(offsetof(Player_Sprint_AnimBP::FAnimBlueprintGeneratedConstantData, __NameProperty_257) == 0x000008, "Member 'Player_Sprint_AnimBP::FAnimBlueprintGeneratedConstantData::__NameProperty_257' has a wrong offset!");
static_assert(offsetof(Player_Sprint_AnimBP::FAnimBlueprintGeneratedConstantData, __IntProperty_258) == 0x00000C, "Member 'Player_Sprint_AnimBP::FAnimBlueprintGeneratedConstantData::__IntProperty_258' has a wrong offset!");
static_assert(offsetof(Player_Sprint_AnimBP::FAnimBlueprintGeneratedConstantData, __EnumProperty_259) == 0x000010, "Member 'Player_Sprint_AnimBP::FAnimBlueprintGeneratedConstantData::__EnumProperty_259' has a wrong offset!");
static_assert(offsetof(Player_Sprint_AnimBP::FAnimBlueprintGeneratedConstantData, __ArrayProperty_260) == 0x000018, "Member 'Player_Sprint_AnimBP::FAnimBlueprintGeneratedConstantData::__ArrayProperty_260' has a wrong offset!");
static_assert(offsetof(Player_Sprint_AnimBP::FAnimBlueprintGeneratedConstantData, __NameProperty_261) == 0x000028, "Member 'Player_Sprint_AnimBP::FAnimBlueprintGeneratedConstantData::__NameProperty_261' has a wrong offset!");
static_assert(offsetof(Player_Sprint_AnimBP::FAnimBlueprintGeneratedConstantData, __IntProperty_262) == 0x00002C, "Member 'Player_Sprint_AnimBP::FAnimBlueprintGeneratedConstantData::__IntProperty_262' has a wrong offset!");
static_assert(offsetof(Player_Sprint_AnimBP::FAnimBlueprintGeneratedConstantData, __StructProperty_263) == 0x000030, "Member 'Player_Sprint_AnimBP::FAnimBlueprintGeneratedConstantData::__StructProperty_263' has a wrong offset!");
static_assert(offsetof(Player_Sprint_AnimBP::FAnimBlueprintGeneratedConstantData, __FloatProperty_264) == 0x00005C, "Member 'Player_Sprint_AnimBP::FAnimBlueprintGeneratedConstantData::__FloatProperty_264' has a wrong offset!");
static_assert(offsetof(Player_Sprint_AnimBP::FAnimBlueprintGeneratedConstantData, __EnumProperty_265) == 0x000060, "Member 'Player_Sprint_AnimBP::FAnimBlueprintGeneratedConstantData::__EnumProperty_265' has a wrong offset!");
static_assert(offsetof(Player_Sprint_AnimBP::FAnimBlueprintGeneratedConstantData, __ByteProperty_266) == 0x000061, "Member 'Player_Sprint_AnimBP::FAnimBlueprintGeneratedConstantData::__ByteProperty_266' has a wrong offset!");
static_assert(offsetof(Player_Sprint_AnimBP::FAnimBlueprintGeneratedConstantData, __BoolProperty_267) == 0x000062, "Member 'Player_Sprint_AnimBP::FAnimBlueprintGeneratedConstantData::__BoolProperty_267' has a wrong offset!");
static_assert(offsetof(Player_Sprint_AnimBP::FAnimBlueprintGeneratedConstantData, __FloatProperty_268) == 0x000064, "Member 'Player_Sprint_AnimBP::FAnimBlueprintGeneratedConstantData::__FloatProperty_268' has a wrong offset!");
static_assert(offsetof(Player_Sprint_AnimBP::FAnimBlueprintGeneratedConstantData, __EnumProperty_269) == 0x000068, "Member 'Player_Sprint_AnimBP::FAnimBlueprintGeneratedConstantData::__EnumProperty_269' has a wrong offset!");
static_assert(offsetof(Player_Sprint_AnimBP::FAnimBlueprintGeneratedConstantData, __ByteProperty_270) == 0x000069, "Member 'Player_Sprint_AnimBP::FAnimBlueprintGeneratedConstantData::__ByteProperty_270' has a wrong offset!");
static_assert(offsetof(Player_Sprint_AnimBP::FAnimBlueprintGeneratedConstantData, __NameProperty_271) == 0x00006C, "Member 'Player_Sprint_AnimBP::FAnimBlueprintGeneratedConstantData::__NameProperty_271' has a wrong offset!");
static_assert(offsetof(Player_Sprint_AnimBP::FAnimBlueprintGeneratedConstantData, __BlendProfile_272) == 0x000070, "Member 'Player_Sprint_AnimBP::FAnimBlueprintGeneratedConstantData::__BlendProfile_272' has a wrong offset!");
static_assert(offsetof(Player_Sprint_AnimBP::FAnimBlueprintGeneratedConstantData, __CurveFloat_273) == 0x000078, "Member 'Player_Sprint_AnimBP::FAnimBlueprintGeneratedConstantData::__CurveFloat_273' has a wrong offset!");
static_assert(offsetof(Player_Sprint_AnimBP::FAnimBlueprintGeneratedConstantData, __BoolProperty_274) == 0x000080, "Member 'Player_Sprint_AnimBP::FAnimBlueprintGeneratedConstantData::__BoolProperty_274' has a wrong offset!");
static_assert(offsetof(Player_Sprint_AnimBP::FAnimBlueprintGeneratedConstantData, __EnumProperty_275) == 0x000081, "Member 'Player_Sprint_AnimBP::FAnimBlueprintGeneratedConstantData::__EnumProperty_275' has a wrong offset!");
static_assert(offsetof(Player_Sprint_AnimBP::FAnimBlueprintGeneratedConstantData, __EnumProperty_276) == 0x000082, "Member 'Player_Sprint_AnimBP::FAnimBlueprintGeneratedConstantData::__EnumProperty_276' has a wrong offset!");
static_assert(offsetof(Player_Sprint_AnimBP::FAnimBlueprintGeneratedConstantData, __ArrayProperty_277) == 0x000088, "Member 'Player_Sprint_AnimBP::FAnimBlueprintGeneratedConstantData::__ArrayProperty_277' has a wrong offset!");
static_assert(offsetof(Player_Sprint_AnimBP::FAnimBlueprintGeneratedConstantData, __NameProperty_278) == 0x000098, "Member 'Player_Sprint_AnimBP::FAnimBlueprintGeneratedConstantData::__NameProperty_278' has a wrong offset!");
static_assert(offsetof(Player_Sprint_AnimBP::FAnimBlueprintGeneratedConstantData, __NameProperty_279) == 0x00009C, "Member 'Player_Sprint_AnimBP::FAnimBlueprintGeneratedConstantData::__NameProperty_279' has a wrong offset!");
static_assert(offsetof(Player_Sprint_AnimBP::FAnimBlueprintGeneratedConstantData, __IntProperty_280) == 0x0000A0, "Member 'Player_Sprint_AnimBP::FAnimBlueprintGeneratedConstantData::__IntProperty_280' has a wrong offset!");
static_assert(offsetof(Player_Sprint_AnimBP::FAnimBlueprintGeneratedConstantData, __StructProperty_281) == 0x0000A8, "Member 'Player_Sprint_AnimBP::FAnimBlueprintGeneratedConstantData::__StructProperty_281' has a wrong offset!");
static_assert(offsetof(Player_Sprint_AnimBP::FAnimBlueprintGeneratedConstantData, AnimBlueprintExtension_PropertyAccess) == 0x0000C0, "Member 'Player_Sprint_AnimBP::FAnimBlueprintGeneratedConstantData::AnimBlueprintExtension_PropertyAccess' has a wrong offset!");
static_assert(offsetof(Player_Sprint_AnimBP::FAnimBlueprintGeneratedConstantData, AnimBlueprintExtension_Base) == 0x000140, "Member 'Player_Sprint_AnimBP::FAnimBlueprintGeneratedConstantData::AnimBlueprintExtension_Base' has a wrong offset!");

struct Player_Sprint_AnimBP::FAnimBlueprintGeneratedMutableData final : public FAnimBlueprintMutableData
{
public:
	uint8                                         Pad_1[0x3];
	float                                         __FloatProperty;
	float                                         __FloatProperty_0;
	bool                                          __BoolProperty_1;
	bool                                          __BoolProperty_2;
	uint8                                         Pad_E[0x2];
	float                                         __FloatProperty_3;
	bool                                          __BoolProperty_4;
	bool                                          __BoolProperty_5;
	uint8                                         Pad_16[0x2];
	float                                         __FloatProperty_6;
	float                                         __FloatProperty_7;
	float                                         __FloatProperty_8;
	float                                         __FloatProperty_9;
	bool                                          __BoolProperty_10;
};
static_assert(alignof(Player_Sprint_AnimBP::FAnimBlueprintGeneratedMutableData) == 0x000004, "Wrong alignment on Player_Sprint_AnimBP::FAnimBlueprintGeneratedMutableData");
static_assert(sizeof(Player_Sprint_AnimBP::FAnimBlueprintGeneratedMutableData) == 0x00002C, "Wrong size on Player_Sprint_AnimBP::FAnimBlueprintGeneratedMutableData");
static_assert(offsetof(Player_Sprint_AnimBP::FAnimBlueprintGeneratedMutableData, __FloatProperty) == 0x000004, "Member 'Player_Sprint_AnimBP::FAnimBlueprintGeneratedMutableData::__FloatProperty' has a wrong offset!");
static_assert(offsetof(Player_Sprint_AnimBP::FAnimBlueprintGeneratedMutableData, __FloatProperty_0) == 0x000008, "Member 'Player_Sprint_AnimBP::FAnimBlueprintGeneratedMutableData::__FloatProperty_0' has a wrong offset!");
static_assert(offsetof(Player_Sprint_AnimBP::FAnimBlueprintGeneratedMutableData, __BoolProperty_1) == 0x00000C, "Member 'Player_Sprint_AnimBP::FAnimBlueprintGeneratedMutableData::__BoolProperty_1' has a wrong offset!");
static_assert(offsetof(Player_Sprint_AnimBP::FAnimBlueprintGeneratedMutableData, __BoolProperty_2) == 0x00000D, "Member 'Player_Sprint_AnimBP::FAnimBlueprintGeneratedMutableData::__BoolProperty_2' has a wrong offset!");
static_assert(offsetof(Player_Sprint_AnimBP::FAnimBlueprintGeneratedMutableData, __FloatProperty_3) == 0x000010, "Member 'Player_Sprint_AnimBP::FAnimBlueprintGeneratedMutableData::__FloatProperty_3' has a wrong offset!");
static_assert(offsetof(Player_Sprint_AnimBP::FAnimBlueprintGeneratedMutableData, __BoolProperty_4) == 0x000014, "Member 'Player_Sprint_AnimBP::FAnimBlueprintGeneratedMutableData::__BoolProperty_4' has a wrong offset!");
static_assert(offsetof(Player_Sprint_AnimBP::FAnimBlueprintGeneratedMutableData, __BoolProperty_5) == 0x000015, "Member 'Player_Sprint_AnimBP::FAnimBlueprintGeneratedMutableData::__BoolProperty_5' has a wrong offset!");
static_assert(offsetof(Player_Sprint_AnimBP::FAnimBlueprintGeneratedMutableData, __FloatProperty_6) == 0x000018, "Member 'Player_Sprint_AnimBP::FAnimBlueprintGeneratedMutableData::__FloatProperty_6' has a wrong offset!");
static_assert(offsetof(Player_Sprint_AnimBP::FAnimBlueprintGeneratedMutableData, __FloatProperty_7) == 0x00001C, "Member 'Player_Sprint_AnimBP::FAnimBlueprintGeneratedMutableData::__FloatProperty_7' has a wrong offset!");
static_assert(offsetof(Player_Sprint_AnimBP::FAnimBlueprintGeneratedMutableData, __FloatProperty_8) == 0x000020, "Member 'Player_Sprint_AnimBP::FAnimBlueprintGeneratedMutableData::__FloatProperty_8' has a wrong offset!");
static_assert(offsetof(Player_Sprint_AnimBP::FAnimBlueprintGeneratedMutableData, __FloatProperty_9) == 0x000024, "Member 'Player_Sprint_AnimBP::FAnimBlueprintGeneratedMutableData::__FloatProperty_9' has a wrong offset!");
static_assert(offsetof(Player_Sprint_AnimBP::FAnimBlueprintGeneratedMutableData, __BoolProperty_10) == 0x000028, "Member 'Player_Sprint_AnimBP::FAnimBlueprintGeneratedMutableData::__BoolProperty_10' has a wrong offset!");

}
