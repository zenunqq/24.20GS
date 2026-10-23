#pragma once

#include "Basic.hpp"

#include "AnimGraphRuntime_structs.hpp"
#include "Engine_structs.hpp"

namespace SDK
{

struct Player_SourcePose_AnimBP::FAnimBlueprintGeneratedConstantData final : public FAnimBlueprintConstantData
{
public:
	uint8                                         Pad_1[0x3];
	class FName                                   __NameProperty_124;
	struct FAnimNodeFunctionRef                   __StructProperty_125;
	TArray<float>                                 __ArrayProperty_126;
	TArray<float>                                 __ArrayProperty_127;
	class UBlendProfile*                          __BlendProfile_128;
	class UCurveFloat*                            __CurveFloat_129;
	EAlphaBlendOption                             __EnumProperty_130;
	EBlendListTransitionType                      __EnumProperty_131;
	uint8                                         Pad_52[0x6];
	TArray<float>                                 __ArrayProperty_132;
	struct FAnimNodeFunctionRef                   __StructProperty_133;
	ESequenceEvalReinit                           __ByteProperty_134;
	bool                                          __BoolProperty_135;
	uint8                                         Pad_82[0x2];
	float                                         __FloatProperty_136;
	bool                                          __BoolProperty_137;
	EAnimSyncMethod                               __EnumProperty_138;
	EAnimGroupRole                                __ByteProperty_139;
	uint8                                         Pad_8B[0x1];
	class FName                                   __NameProperty_140;
	struct FAnimSubsystem_PropertyAccess          AnimBlueprintExtension_PropertyAccess;
	struct FAnimSubsystem                         AnimBlueprintExtension_NodeRelevancy;
	struct FAnimSubsystem_Base                    AnimBlueprintExtension_Base;
};
static_assert(alignof(Player_SourcePose_AnimBP::FAnimBlueprintGeneratedConstantData) == 0x000008, "Wrong alignment on Player_SourcePose_AnimBP::FAnimBlueprintGeneratedConstantData");
static_assert(sizeof(Player_SourcePose_AnimBP::FAnimBlueprintGeneratedConstantData) == 0x000130, "Wrong size on Player_SourcePose_AnimBP::FAnimBlueprintGeneratedConstantData");
static_assert(offsetof(Player_SourcePose_AnimBP::FAnimBlueprintGeneratedConstantData, __NameProperty_124) == 0x000004, "Member 'Player_SourcePose_AnimBP::FAnimBlueprintGeneratedConstantData::__NameProperty_124' has a wrong offset!");
static_assert(offsetof(Player_SourcePose_AnimBP::FAnimBlueprintGeneratedConstantData, __StructProperty_125) == 0x000008, "Member 'Player_SourcePose_AnimBP::FAnimBlueprintGeneratedConstantData::__StructProperty_125' has a wrong offset!");
static_assert(offsetof(Player_SourcePose_AnimBP::FAnimBlueprintGeneratedConstantData, __ArrayProperty_126) == 0x000020, "Member 'Player_SourcePose_AnimBP::FAnimBlueprintGeneratedConstantData::__ArrayProperty_126' has a wrong offset!");
static_assert(offsetof(Player_SourcePose_AnimBP::FAnimBlueprintGeneratedConstantData, __ArrayProperty_127) == 0x000030, "Member 'Player_SourcePose_AnimBP::FAnimBlueprintGeneratedConstantData::__ArrayProperty_127' has a wrong offset!");
static_assert(offsetof(Player_SourcePose_AnimBP::FAnimBlueprintGeneratedConstantData, __BlendProfile_128) == 0x000040, "Member 'Player_SourcePose_AnimBP::FAnimBlueprintGeneratedConstantData::__BlendProfile_128' has a wrong offset!");
static_assert(offsetof(Player_SourcePose_AnimBP::FAnimBlueprintGeneratedConstantData, __CurveFloat_129) == 0x000048, "Member 'Player_SourcePose_AnimBP::FAnimBlueprintGeneratedConstantData::__CurveFloat_129' has a wrong offset!");
static_assert(offsetof(Player_SourcePose_AnimBP::FAnimBlueprintGeneratedConstantData, __EnumProperty_130) == 0x000050, "Member 'Player_SourcePose_AnimBP::FAnimBlueprintGeneratedConstantData::__EnumProperty_130' has a wrong offset!");
static_assert(offsetof(Player_SourcePose_AnimBP::FAnimBlueprintGeneratedConstantData, __EnumProperty_131) == 0x000051, "Member 'Player_SourcePose_AnimBP::FAnimBlueprintGeneratedConstantData::__EnumProperty_131' has a wrong offset!");
static_assert(offsetof(Player_SourcePose_AnimBP::FAnimBlueprintGeneratedConstantData, __ArrayProperty_132) == 0x000058, "Member 'Player_SourcePose_AnimBP::FAnimBlueprintGeneratedConstantData::__ArrayProperty_132' has a wrong offset!");
static_assert(offsetof(Player_SourcePose_AnimBP::FAnimBlueprintGeneratedConstantData, __StructProperty_133) == 0x000068, "Member 'Player_SourcePose_AnimBP::FAnimBlueprintGeneratedConstantData::__StructProperty_133' has a wrong offset!");
static_assert(offsetof(Player_SourcePose_AnimBP::FAnimBlueprintGeneratedConstantData, __ByteProperty_134) == 0x000080, "Member 'Player_SourcePose_AnimBP::FAnimBlueprintGeneratedConstantData::__ByteProperty_134' has a wrong offset!");
static_assert(offsetof(Player_SourcePose_AnimBP::FAnimBlueprintGeneratedConstantData, __BoolProperty_135) == 0x000081, "Member 'Player_SourcePose_AnimBP::FAnimBlueprintGeneratedConstantData::__BoolProperty_135' has a wrong offset!");
static_assert(offsetof(Player_SourcePose_AnimBP::FAnimBlueprintGeneratedConstantData, __FloatProperty_136) == 0x000084, "Member 'Player_SourcePose_AnimBP::FAnimBlueprintGeneratedConstantData::__FloatProperty_136' has a wrong offset!");
static_assert(offsetof(Player_SourcePose_AnimBP::FAnimBlueprintGeneratedConstantData, __BoolProperty_137) == 0x000088, "Member 'Player_SourcePose_AnimBP::FAnimBlueprintGeneratedConstantData::__BoolProperty_137' has a wrong offset!");
static_assert(offsetof(Player_SourcePose_AnimBP::FAnimBlueprintGeneratedConstantData, __EnumProperty_138) == 0x000089, "Member 'Player_SourcePose_AnimBP::FAnimBlueprintGeneratedConstantData::__EnumProperty_138' has a wrong offset!");
static_assert(offsetof(Player_SourcePose_AnimBP::FAnimBlueprintGeneratedConstantData, __ByteProperty_139) == 0x00008A, "Member 'Player_SourcePose_AnimBP::FAnimBlueprintGeneratedConstantData::__ByteProperty_139' has a wrong offset!");
static_assert(offsetof(Player_SourcePose_AnimBP::FAnimBlueprintGeneratedConstantData, __NameProperty_140) == 0x00008C, "Member 'Player_SourcePose_AnimBP::FAnimBlueprintGeneratedConstantData::__NameProperty_140' has a wrong offset!");
static_assert(offsetof(Player_SourcePose_AnimBP::FAnimBlueprintGeneratedConstantData, AnimBlueprintExtension_PropertyAccess) == 0x000090, "Member 'Player_SourcePose_AnimBP::FAnimBlueprintGeneratedConstantData::AnimBlueprintExtension_PropertyAccess' has a wrong offset!");
static_assert(offsetof(Player_SourcePose_AnimBP::FAnimBlueprintGeneratedConstantData, AnimBlueprintExtension_NodeRelevancy) == 0x000110, "Member 'Player_SourcePose_AnimBP::FAnimBlueprintGeneratedConstantData::AnimBlueprintExtension_NodeRelevancy' has a wrong offset!");
static_assert(offsetof(Player_SourcePose_AnimBP::FAnimBlueprintGeneratedConstantData, AnimBlueprintExtension_Base) == 0x000118, "Member 'Player_SourcePose_AnimBP::FAnimBlueprintGeneratedConstantData::AnimBlueprintExtension_Base' has a wrong offset!");

struct Player_SourcePose_AnimBP::FAnimBlueprintGeneratedMutableData final : public FAnimBlueprintMutableData
{
public:
	uint8                                         Pad_1[0x7];
	TArray<float>                                 __ArrayProperty;
	bool                                          __BoolProperty_0;
	bool                                          __BoolProperty_1;
	bool                                          __BoolProperty_2;
	uint8                                         Pad_1B[0x5];
	class UAnimSequenceBase*                      __AnimSequenceBase_3;
	class UAnimSequenceBase*                      __AnimSequenceBase_4;
	class UAnimSequenceBase*                      __AnimSequenceBase_5;
	class UAnimSequenceBase*                      __AnimSequenceBase_6;
	bool                                          __BoolProperty_7;
	uint8                                         Pad_41[0x7];
	class UAnimSequenceBase*                      __AnimSequenceBase_8;
	class UAnimSequenceBase*                      __AnimSequenceBase_9;
	bool                                          __BoolProperty_10;
	bool                                          __BoolProperty_11;
	uint8                                         Pad_5A[0x6];
	class UAnimSequenceBase*                      __AnimSequenceBase_12;
};
static_assert(alignof(Player_SourcePose_AnimBP::FAnimBlueprintGeneratedMutableData) == 0x000008, "Wrong alignment on Player_SourcePose_AnimBP::FAnimBlueprintGeneratedMutableData");
static_assert(sizeof(Player_SourcePose_AnimBP::FAnimBlueprintGeneratedMutableData) == 0x000068, "Wrong size on Player_SourcePose_AnimBP::FAnimBlueprintGeneratedMutableData");
static_assert(offsetof(Player_SourcePose_AnimBP::FAnimBlueprintGeneratedMutableData, __ArrayProperty) == 0x000008, "Member 'Player_SourcePose_AnimBP::FAnimBlueprintGeneratedMutableData::__ArrayProperty' has a wrong offset!");
static_assert(offsetof(Player_SourcePose_AnimBP::FAnimBlueprintGeneratedMutableData, __BoolProperty_0) == 0x000018, "Member 'Player_SourcePose_AnimBP::FAnimBlueprintGeneratedMutableData::__BoolProperty_0' has a wrong offset!");
static_assert(offsetof(Player_SourcePose_AnimBP::FAnimBlueprintGeneratedMutableData, __BoolProperty_1) == 0x000019, "Member 'Player_SourcePose_AnimBP::FAnimBlueprintGeneratedMutableData::__BoolProperty_1' has a wrong offset!");
static_assert(offsetof(Player_SourcePose_AnimBP::FAnimBlueprintGeneratedMutableData, __BoolProperty_2) == 0x00001A, "Member 'Player_SourcePose_AnimBP::FAnimBlueprintGeneratedMutableData::__BoolProperty_2' has a wrong offset!");
static_assert(offsetof(Player_SourcePose_AnimBP::FAnimBlueprintGeneratedMutableData, __AnimSequenceBase_3) == 0x000020, "Member 'Player_SourcePose_AnimBP::FAnimBlueprintGeneratedMutableData::__AnimSequenceBase_3' has a wrong offset!");
static_assert(offsetof(Player_SourcePose_AnimBP::FAnimBlueprintGeneratedMutableData, __AnimSequenceBase_4) == 0x000028, "Member 'Player_SourcePose_AnimBP::FAnimBlueprintGeneratedMutableData::__AnimSequenceBase_4' has a wrong offset!");
static_assert(offsetof(Player_SourcePose_AnimBP::FAnimBlueprintGeneratedMutableData, __AnimSequenceBase_5) == 0x000030, "Member 'Player_SourcePose_AnimBP::FAnimBlueprintGeneratedMutableData::__AnimSequenceBase_5' has a wrong offset!");
static_assert(offsetof(Player_SourcePose_AnimBP::FAnimBlueprintGeneratedMutableData, __AnimSequenceBase_6) == 0x000038, "Member 'Player_SourcePose_AnimBP::FAnimBlueprintGeneratedMutableData::__AnimSequenceBase_6' has a wrong offset!");
static_assert(offsetof(Player_SourcePose_AnimBP::FAnimBlueprintGeneratedMutableData, __BoolProperty_7) == 0x000040, "Member 'Player_SourcePose_AnimBP::FAnimBlueprintGeneratedMutableData::__BoolProperty_7' has a wrong offset!");
static_assert(offsetof(Player_SourcePose_AnimBP::FAnimBlueprintGeneratedMutableData, __AnimSequenceBase_8) == 0x000048, "Member 'Player_SourcePose_AnimBP::FAnimBlueprintGeneratedMutableData::__AnimSequenceBase_8' has a wrong offset!");
static_assert(offsetof(Player_SourcePose_AnimBP::FAnimBlueprintGeneratedMutableData, __AnimSequenceBase_9) == 0x000050, "Member 'Player_SourcePose_AnimBP::FAnimBlueprintGeneratedMutableData::__AnimSequenceBase_9' has a wrong offset!");
static_assert(offsetof(Player_SourcePose_AnimBP::FAnimBlueprintGeneratedMutableData, __BoolProperty_10) == 0x000058, "Member 'Player_SourcePose_AnimBP::FAnimBlueprintGeneratedMutableData::__BoolProperty_10' has a wrong offset!");
static_assert(offsetof(Player_SourcePose_AnimBP::FAnimBlueprintGeneratedMutableData, __BoolProperty_11) == 0x000059, "Member 'Player_SourcePose_AnimBP::FAnimBlueprintGeneratedMutableData::__BoolProperty_11' has a wrong offset!");
static_assert(offsetof(Player_SourcePose_AnimBP::FAnimBlueprintGeneratedMutableData, __AnimSequenceBase_12) == 0x000060, "Member 'Player_SourcePose_AnimBP::FAnimBlueprintGeneratedMutableData::__AnimSequenceBase_12' has a wrong offset!");

}
