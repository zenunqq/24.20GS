#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "AnimGraphRuntime_structs.hpp"

namespace SDK
{

struct Player_BuildingPose_AnimBP::FAnimBlueprintGeneratedConstantData final : public FAnimBlueprintConstantData
{
public:
	uint8                                         Pad_1[0x3];
	class FName                                   __NameProperty_129;
	TArray<float>                                 __ArrayProperty_130;
	TArray<int32>                                 __ArrayProperty_131;
	class FName                                   __NameProperty_132;
	int32                                         __IntProperty_133;
	bool                                          __BoolProperty_134;
	uint8                                         Pad_31[0x3];
	float                                         __FloatProperty_135;
	struct FInputScaleBiasClampConstants          __StructProperty_136;
	float                                         __FloatProperty_137;
	EAnimSyncMethod                               __EnumProperty_138;
	EAnimGroupRole                                __ByteProperty_139;
	uint8                                         Pad_6A[0x6];
	class UBlendProfile*                          __BlendProfile_140;
	class UCurveFloat*                            __CurveFloat_141;
	bool                                          __BoolProperty_142;
	EAlphaBlendOption                             __EnumProperty_143;
	EBlendListTransitionType                      __EnumProperty_144;
	uint8                                         Pad_83[0x5];
	TArray<float>                                 __ArrayProperty_145;
	class FName                                   __NameProperty_146;
	class FName                                   __NameProperty_147;
	int32                                         __IntProperty_148;
	uint8                                         Pad_A4[0x4];
	struct FAnimNodeFunctionRef                   __StructProperty_149;
	struct FAnimSubsystem_PropertyAccess          AnimBlueprintExtension_PropertyAccess;
	struct FAnimSubsystem_Base                    AnimBlueprintExtension_Base;
};
static_assert(alignof(Player_BuildingPose_AnimBP::FAnimBlueprintGeneratedConstantData) == 0x000008, "Wrong alignment on Player_BuildingPose_AnimBP::FAnimBlueprintGeneratedConstantData");
static_assert(sizeof(Player_BuildingPose_AnimBP::FAnimBlueprintGeneratedConstantData) == 0x000158, "Wrong size on Player_BuildingPose_AnimBP::FAnimBlueprintGeneratedConstantData");
static_assert(offsetof(Player_BuildingPose_AnimBP::FAnimBlueprintGeneratedConstantData, __NameProperty_129) == 0x000004, "Member 'Player_BuildingPose_AnimBP::FAnimBlueprintGeneratedConstantData::__NameProperty_129' has a wrong offset!");
static_assert(offsetof(Player_BuildingPose_AnimBP::FAnimBlueprintGeneratedConstantData, __ArrayProperty_130) == 0x000008, "Member 'Player_BuildingPose_AnimBP::FAnimBlueprintGeneratedConstantData::__ArrayProperty_130' has a wrong offset!");
static_assert(offsetof(Player_BuildingPose_AnimBP::FAnimBlueprintGeneratedConstantData, __ArrayProperty_131) == 0x000018, "Member 'Player_BuildingPose_AnimBP::FAnimBlueprintGeneratedConstantData::__ArrayProperty_131' has a wrong offset!");
static_assert(offsetof(Player_BuildingPose_AnimBP::FAnimBlueprintGeneratedConstantData, __NameProperty_132) == 0x000028, "Member 'Player_BuildingPose_AnimBP::FAnimBlueprintGeneratedConstantData::__NameProperty_132' has a wrong offset!");
static_assert(offsetof(Player_BuildingPose_AnimBP::FAnimBlueprintGeneratedConstantData, __IntProperty_133) == 0x00002C, "Member 'Player_BuildingPose_AnimBP::FAnimBlueprintGeneratedConstantData::__IntProperty_133' has a wrong offset!");
static_assert(offsetof(Player_BuildingPose_AnimBP::FAnimBlueprintGeneratedConstantData, __BoolProperty_134) == 0x000030, "Member 'Player_BuildingPose_AnimBP::FAnimBlueprintGeneratedConstantData::__BoolProperty_134' has a wrong offset!");
static_assert(offsetof(Player_BuildingPose_AnimBP::FAnimBlueprintGeneratedConstantData, __FloatProperty_135) == 0x000034, "Member 'Player_BuildingPose_AnimBP::FAnimBlueprintGeneratedConstantData::__FloatProperty_135' has a wrong offset!");
static_assert(offsetof(Player_BuildingPose_AnimBP::FAnimBlueprintGeneratedConstantData, __StructProperty_136) == 0x000038, "Member 'Player_BuildingPose_AnimBP::FAnimBlueprintGeneratedConstantData::__StructProperty_136' has a wrong offset!");
static_assert(offsetof(Player_BuildingPose_AnimBP::FAnimBlueprintGeneratedConstantData, __FloatProperty_137) == 0x000064, "Member 'Player_BuildingPose_AnimBP::FAnimBlueprintGeneratedConstantData::__FloatProperty_137' has a wrong offset!");
static_assert(offsetof(Player_BuildingPose_AnimBP::FAnimBlueprintGeneratedConstantData, __EnumProperty_138) == 0x000068, "Member 'Player_BuildingPose_AnimBP::FAnimBlueprintGeneratedConstantData::__EnumProperty_138' has a wrong offset!");
static_assert(offsetof(Player_BuildingPose_AnimBP::FAnimBlueprintGeneratedConstantData, __ByteProperty_139) == 0x000069, "Member 'Player_BuildingPose_AnimBP::FAnimBlueprintGeneratedConstantData::__ByteProperty_139' has a wrong offset!");
static_assert(offsetof(Player_BuildingPose_AnimBP::FAnimBlueprintGeneratedConstantData, __BlendProfile_140) == 0x000070, "Member 'Player_BuildingPose_AnimBP::FAnimBlueprintGeneratedConstantData::__BlendProfile_140' has a wrong offset!");
static_assert(offsetof(Player_BuildingPose_AnimBP::FAnimBlueprintGeneratedConstantData, __CurveFloat_141) == 0x000078, "Member 'Player_BuildingPose_AnimBP::FAnimBlueprintGeneratedConstantData::__CurveFloat_141' has a wrong offset!");
static_assert(offsetof(Player_BuildingPose_AnimBP::FAnimBlueprintGeneratedConstantData, __BoolProperty_142) == 0x000080, "Member 'Player_BuildingPose_AnimBP::FAnimBlueprintGeneratedConstantData::__BoolProperty_142' has a wrong offset!");
static_assert(offsetof(Player_BuildingPose_AnimBP::FAnimBlueprintGeneratedConstantData, __EnumProperty_143) == 0x000081, "Member 'Player_BuildingPose_AnimBP::FAnimBlueprintGeneratedConstantData::__EnumProperty_143' has a wrong offset!");
static_assert(offsetof(Player_BuildingPose_AnimBP::FAnimBlueprintGeneratedConstantData, __EnumProperty_144) == 0x000082, "Member 'Player_BuildingPose_AnimBP::FAnimBlueprintGeneratedConstantData::__EnumProperty_144' has a wrong offset!");
static_assert(offsetof(Player_BuildingPose_AnimBP::FAnimBlueprintGeneratedConstantData, __ArrayProperty_145) == 0x000088, "Member 'Player_BuildingPose_AnimBP::FAnimBlueprintGeneratedConstantData::__ArrayProperty_145' has a wrong offset!");
static_assert(offsetof(Player_BuildingPose_AnimBP::FAnimBlueprintGeneratedConstantData, __NameProperty_146) == 0x000098, "Member 'Player_BuildingPose_AnimBP::FAnimBlueprintGeneratedConstantData::__NameProperty_146' has a wrong offset!");
static_assert(offsetof(Player_BuildingPose_AnimBP::FAnimBlueprintGeneratedConstantData, __NameProperty_147) == 0x00009C, "Member 'Player_BuildingPose_AnimBP::FAnimBlueprintGeneratedConstantData::__NameProperty_147' has a wrong offset!");
static_assert(offsetof(Player_BuildingPose_AnimBP::FAnimBlueprintGeneratedConstantData, __IntProperty_148) == 0x0000A0, "Member 'Player_BuildingPose_AnimBP::FAnimBlueprintGeneratedConstantData::__IntProperty_148' has a wrong offset!");
static_assert(offsetof(Player_BuildingPose_AnimBP::FAnimBlueprintGeneratedConstantData, __StructProperty_149) == 0x0000A8, "Member 'Player_BuildingPose_AnimBP::FAnimBlueprintGeneratedConstantData::__StructProperty_149' has a wrong offset!");
static_assert(offsetof(Player_BuildingPose_AnimBP::FAnimBlueprintGeneratedConstantData, AnimBlueprintExtension_PropertyAccess) == 0x0000C0, "Member 'Player_BuildingPose_AnimBP::FAnimBlueprintGeneratedConstantData::AnimBlueprintExtension_PropertyAccess' has a wrong offset!");
static_assert(offsetof(Player_BuildingPose_AnimBP::FAnimBlueprintGeneratedConstantData, AnimBlueprintExtension_Base) == 0x000140, "Member 'Player_BuildingPose_AnimBP::FAnimBlueprintGeneratedConstantData::AnimBlueprintExtension_Base' has a wrong offset!");

struct Player_BuildingPose_AnimBP::FAnimBlueprintGeneratedMutableData final : public FAnimBlueprintMutableData
{
public:
	bool                                          __BoolProperty;
	uint8                                         __ByteProperty_0;
	uint8                                         __ByteProperty_1;
	bool                                          __BoolProperty_2;
};
static_assert(alignof(Player_BuildingPose_AnimBP::FAnimBlueprintGeneratedMutableData) == 0x000001, "Wrong alignment on Player_BuildingPose_AnimBP::FAnimBlueprintGeneratedMutableData");
static_assert(sizeof(Player_BuildingPose_AnimBP::FAnimBlueprintGeneratedMutableData) == 0x000005, "Wrong size on Player_BuildingPose_AnimBP::FAnimBlueprintGeneratedMutableData");
static_assert(offsetof(Player_BuildingPose_AnimBP::FAnimBlueprintGeneratedMutableData, __BoolProperty) == 0x000001, "Member 'Player_BuildingPose_AnimBP::FAnimBlueprintGeneratedMutableData::__BoolProperty' has a wrong offset!");
static_assert(offsetof(Player_BuildingPose_AnimBP::FAnimBlueprintGeneratedMutableData, __ByteProperty_0) == 0x000002, "Member 'Player_BuildingPose_AnimBP::FAnimBlueprintGeneratedMutableData::__ByteProperty_0' has a wrong offset!");
static_assert(offsetof(Player_BuildingPose_AnimBP::FAnimBlueprintGeneratedMutableData, __ByteProperty_1) == 0x000003, "Member 'Player_BuildingPose_AnimBP::FAnimBlueprintGeneratedMutableData::__ByteProperty_1' has a wrong offset!");
static_assert(offsetof(Player_BuildingPose_AnimBP::FAnimBlueprintGeneratedMutableData, __BoolProperty_2) == 0x000004, "Member 'Player_BuildingPose_AnimBP::FAnimBlueprintGeneratedMutableData::__BoolProperty_2' has a wrong offset!");

}
