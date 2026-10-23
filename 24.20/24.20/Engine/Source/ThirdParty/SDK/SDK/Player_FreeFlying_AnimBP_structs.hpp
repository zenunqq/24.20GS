#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "AnimGraphRuntime_structs.hpp"

namespace SDK
{

struct Player_FreeFlying_AnimBP::FAnimBlueprintGeneratedConstantData final : public FAnimBlueprintConstantData
{
public:
	uint8                                         Pad_1[0x3];
	class FName                                   __NameProperty_187;
	class FName                                   __NameProperty_188;
	int32                                         __IntProperty_189;
	TArray<float>                                 __ArrayProperty_190;
	TArray<int32>                                 __ArrayProperty_191;
	struct FInputScaleBiasClampConstants          __StructProperty_192;
	uint8                                         Pad_5C[0x4];
	class UBlendProfile*                          __BlendProfile_193;
	class UCurveFloat*                            __CurveFloat_194;
	bool                                          __BoolProperty_195;
	EAlphaBlendOption                             __EnumProperty_196;
	EBlendListTransitionType                      __EnumProperty_197;
	uint8                                         Pad_73[0x5];
	TArray<float>                                 __ArrayProperty_198;
	float                                         __FloatProperty_199;
	float                                         __FloatProperty_200;
	bool                                          __BoolProperty_201;
	EAnimSyncMethod                               __EnumProperty_202;
	EAnimGroupRole                                __ByteProperty_203;
	uint8                                         Pad_93[0x1];
	class FName                                   __NameProperty_204;
	class FName                                   __NameProperty_205;
	int32                                         __IntProperty_206;
	struct FAnimNodeFunctionRef                   __StructProperty_207;
	struct FAnimSubsystem_PropertyAccess          AnimBlueprintExtension_PropertyAccess;
	struct FAnimSubsystem_Base                    AnimBlueprintExtension_Base;
};
static_assert(alignof(Player_FreeFlying_AnimBP::FAnimBlueprintGeneratedConstantData) == 0x000008, "Wrong alignment on Player_FreeFlying_AnimBP::FAnimBlueprintGeneratedConstantData");
static_assert(sizeof(Player_FreeFlying_AnimBP::FAnimBlueprintGeneratedConstantData) == 0x000150, "Wrong size on Player_FreeFlying_AnimBP::FAnimBlueprintGeneratedConstantData");
static_assert(offsetof(Player_FreeFlying_AnimBP::FAnimBlueprintGeneratedConstantData, __NameProperty_187) == 0x000004, "Member 'Player_FreeFlying_AnimBP::FAnimBlueprintGeneratedConstantData::__NameProperty_187' has a wrong offset!");
static_assert(offsetof(Player_FreeFlying_AnimBP::FAnimBlueprintGeneratedConstantData, __NameProperty_188) == 0x000008, "Member 'Player_FreeFlying_AnimBP::FAnimBlueprintGeneratedConstantData::__NameProperty_188' has a wrong offset!");
static_assert(offsetof(Player_FreeFlying_AnimBP::FAnimBlueprintGeneratedConstantData, __IntProperty_189) == 0x00000C, "Member 'Player_FreeFlying_AnimBP::FAnimBlueprintGeneratedConstantData::__IntProperty_189' has a wrong offset!");
static_assert(offsetof(Player_FreeFlying_AnimBP::FAnimBlueprintGeneratedConstantData, __ArrayProperty_190) == 0x000010, "Member 'Player_FreeFlying_AnimBP::FAnimBlueprintGeneratedConstantData::__ArrayProperty_190' has a wrong offset!");
static_assert(offsetof(Player_FreeFlying_AnimBP::FAnimBlueprintGeneratedConstantData, __ArrayProperty_191) == 0x000020, "Member 'Player_FreeFlying_AnimBP::FAnimBlueprintGeneratedConstantData::__ArrayProperty_191' has a wrong offset!");
static_assert(offsetof(Player_FreeFlying_AnimBP::FAnimBlueprintGeneratedConstantData, __StructProperty_192) == 0x000030, "Member 'Player_FreeFlying_AnimBP::FAnimBlueprintGeneratedConstantData::__StructProperty_192' has a wrong offset!");
static_assert(offsetof(Player_FreeFlying_AnimBP::FAnimBlueprintGeneratedConstantData, __BlendProfile_193) == 0x000060, "Member 'Player_FreeFlying_AnimBP::FAnimBlueprintGeneratedConstantData::__BlendProfile_193' has a wrong offset!");
static_assert(offsetof(Player_FreeFlying_AnimBP::FAnimBlueprintGeneratedConstantData, __CurveFloat_194) == 0x000068, "Member 'Player_FreeFlying_AnimBP::FAnimBlueprintGeneratedConstantData::__CurveFloat_194' has a wrong offset!");
static_assert(offsetof(Player_FreeFlying_AnimBP::FAnimBlueprintGeneratedConstantData, __BoolProperty_195) == 0x000070, "Member 'Player_FreeFlying_AnimBP::FAnimBlueprintGeneratedConstantData::__BoolProperty_195' has a wrong offset!");
static_assert(offsetof(Player_FreeFlying_AnimBP::FAnimBlueprintGeneratedConstantData, __EnumProperty_196) == 0x000071, "Member 'Player_FreeFlying_AnimBP::FAnimBlueprintGeneratedConstantData::__EnumProperty_196' has a wrong offset!");
static_assert(offsetof(Player_FreeFlying_AnimBP::FAnimBlueprintGeneratedConstantData, __EnumProperty_197) == 0x000072, "Member 'Player_FreeFlying_AnimBP::FAnimBlueprintGeneratedConstantData::__EnumProperty_197' has a wrong offset!");
static_assert(offsetof(Player_FreeFlying_AnimBP::FAnimBlueprintGeneratedConstantData, __ArrayProperty_198) == 0x000078, "Member 'Player_FreeFlying_AnimBP::FAnimBlueprintGeneratedConstantData::__ArrayProperty_198' has a wrong offset!");
static_assert(offsetof(Player_FreeFlying_AnimBP::FAnimBlueprintGeneratedConstantData, __FloatProperty_199) == 0x000088, "Member 'Player_FreeFlying_AnimBP::FAnimBlueprintGeneratedConstantData::__FloatProperty_199' has a wrong offset!");
static_assert(offsetof(Player_FreeFlying_AnimBP::FAnimBlueprintGeneratedConstantData, __FloatProperty_200) == 0x00008C, "Member 'Player_FreeFlying_AnimBP::FAnimBlueprintGeneratedConstantData::__FloatProperty_200' has a wrong offset!");
static_assert(offsetof(Player_FreeFlying_AnimBP::FAnimBlueprintGeneratedConstantData, __BoolProperty_201) == 0x000090, "Member 'Player_FreeFlying_AnimBP::FAnimBlueprintGeneratedConstantData::__BoolProperty_201' has a wrong offset!");
static_assert(offsetof(Player_FreeFlying_AnimBP::FAnimBlueprintGeneratedConstantData, __EnumProperty_202) == 0x000091, "Member 'Player_FreeFlying_AnimBP::FAnimBlueprintGeneratedConstantData::__EnumProperty_202' has a wrong offset!");
static_assert(offsetof(Player_FreeFlying_AnimBP::FAnimBlueprintGeneratedConstantData, __ByteProperty_203) == 0x000092, "Member 'Player_FreeFlying_AnimBP::FAnimBlueprintGeneratedConstantData::__ByteProperty_203' has a wrong offset!");
static_assert(offsetof(Player_FreeFlying_AnimBP::FAnimBlueprintGeneratedConstantData, __NameProperty_204) == 0x000094, "Member 'Player_FreeFlying_AnimBP::FAnimBlueprintGeneratedConstantData::__NameProperty_204' has a wrong offset!");
static_assert(offsetof(Player_FreeFlying_AnimBP::FAnimBlueprintGeneratedConstantData, __NameProperty_205) == 0x000098, "Member 'Player_FreeFlying_AnimBP::FAnimBlueprintGeneratedConstantData::__NameProperty_205' has a wrong offset!");
static_assert(offsetof(Player_FreeFlying_AnimBP::FAnimBlueprintGeneratedConstantData, __IntProperty_206) == 0x00009C, "Member 'Player_FreeFlying_AnimBP::FAnimBlueprintGeneratedConstantData::__IntProperty_206' has a wrong offset!");
static_assert(offsetof(Player_FreeFlying_AnimBP::FAnimBlueprintGeneratedConstantData, __StructProperty_207) == 0x0000A0, "Member 'Player_FreeFlying_AnimBP::FAnimBlueprintGeneratedConstantData::__StructProperty_207' has a wrong offset!");
static_assert(offsetof(Player_FreeFlying_AnimBP::FAnimBlueprintGeneratedConstantData, AnimBlueprintExtension_PropertyAccess) == 0x0000B8, "Member 'Player_FreeFlying_AnimBP::FAnimBlueprintGeneratedConstantData::AnimBlueprintExtension_PropertyAccess' has a wrong offset!");
static_assert(offsetof(Player_FreeFlying_AnimBP::FAnimBlueprintGeneratedConstantData, AnimBlueprintExtension_Base) == 0x000138, "Member 'Player_FreeFlying_AnimBP::FAnimBlueprintGeneratedConstantData::AnimBlueprintExtension_Base' has a wrong offset!");

struct Player_FreeFlying_AnimBP::FAnimBlueprintGeneratedMutableData final : public FAnimBlueprintMutableData
{
public:
	uint8                                         __ByteProperty;
	uint8                                         Pad_2[0x6];
	TArray<float>                                 __ArrayProperty_0;
	bool                                          __BoolProperty_1;
	bool                                          __BoolProperty_2;
	uint8                                         Pad_1A[0x2];
	float                                         __FloatProperty_3;
	float                                         __FloatProperty_4;
	uint8                                         __ByteProperty_5;
	uint8                                         Pad_25[0x3];
	TArray<float>                                 __ArrayProperty_6;
	bool                                          __BoolProperty_7;
	bool                                          __BoolProperty_8;
	uint8                                         Pad_3A[0x2];
	float                                         __FloatProperty_9;
	float                                         __FloatProperty_10;
};
static_assert(alignof(Player_FreeFlying_AnimBP::FAnimBlueprintGeneratedMutableData) == 0x000008, "Wrong alignment on Player_FreeFlying_AnimBP::FAnimBlueprintGeneratedMutableData");
static_assert(sizeof(Player_FreeFlying_AnimBP::FAnimBlueprintGeneratedMutableData) == 0x000048, "Wrong size on Player_FreeFlying_AnimBP::FAnimBlueprintGeneratedMutableData");
static_assert(offsetof(Player_FreeFlying_AnimBP::FAnimBlueprintGeneratedMutableData, __ByteProperty) == 0x000001, "Member 'Player_FreeFlying_AnimBP::FAnimBlueprintGeneratedMutableData::__ByteProperty' has a wrong offset!");
static_assert(offsetof(Player_FreeFlying_AnimBP::FAnimBlueprintGeneratedMutableData, __ArrayProperty_0) == 0x000008, "Member 'Player_FreeFlying_AnimBP::FAnimBlueprintGeneratedMutableData::__ArrayProperty_0' has a wrong offset!");
static_assert(offsetof(Player_FreeFlying_AnimBP::FAnimBlueprintGeneratedMutableData, __BoolProperty_1) == 0x000018, "Member 'Player_FreeFlying_AnimBP::FAnimBlueprintGeneratedMutableData::__BoolProperty_1' has a wrong offset!");
static_assert(offsetof(Player_FreeFlying_AnimBP::FAnimBlueprintGeneratedMutableData, __BoolProperty_2) == 0x000019, "Member 'Player_FreeFlying_AnimBP::FAnimBlueprintGeneratedMutableData::__BoolProperty_2' has a wrong offset!");
static_assert(offsetof(Player_FreeFlying_AnimBP::FAnimBlueprintGeneratedMutableData, __FloatProperty_3) == 0x00001C, "Member 'Player_FreeFlying_AnimBP::FAnimBlueprintGeneratedMutableData::__FloatProperty_3' has a wrong offset!");
static_assert(offsetof(Player_FreeFlying_AnimBP::FAnimBlueprintGeneratedMutableData, __FloatProperty_4) == 0x000020, "Member 'Player_FreeFlying_AnimBP::FAnimBlueprintGeneratedMutableData::__FloatProperty_4' has a wrong offset!");
static_assert(offsetof(Player_FreeFlying_AnimBP::FAnimBlueprintGeneratedMutableData, __ByteProperty_5) == 0x000024, "Member 'Player_FreeFlying_AnimBP::FAnimBlueprintGeneratedMutableData::__ByteProperty_5' has a wrong offset!");
static_assert(offsetof(Player_FreeFlying_AnimBP::FAnimBlueprintGeneratedMutableData, __ArrayProperty_6) == 0x000028, "Member 'Player_FreeFlying_AnimBP::FAnimBlueprintGeneratedMutableData::__ArrayProperty_6' has a wrong offset!");
static_assert(offsetof(Player_FreeFlying_AnimBP::FAnimBlueprintGeneratedMutableData, __BoolProperty_7) == 0x000038, "Member 'Player_FreeFlying_AnimBP::FAnimBlueprintGeneratedMutableData::__BoolProperty_7' has a wrong offset!");
static_assert(offsetof(Player_FreeFlying_AnimBP::FAnimBlueprintGeneratedMutableData, __BoolProperty_8) == 0x000039, "Member 'Player_FreeFlying_AnimBP::FAnimBlueprintGeneratedMutableData::__BoolProperty_8' has a wrong offset!");
static_assert(offsetof(Player_FreeFlying_AnimBP::FAnimBlueprintGeneratedMutableData, __FloatProperty_9) == 0x00003C, "Member 'Player_FreeFlying_AnimBP::FAnimBlueprintGeneratedMutableData::__FloatProperty_9' has a wrong offset!");
static_assert(offsetof(Player_FreeFlying_AnimBP::FAnimBlueprintGeneratedMutableData, __FloatProperty_10) == 0x000040, "Member 'Player_FreeFlying_AnimBP::FAnimBlueprintGeneratedMutableData::__FloatProperty_10' has a wrong offset!");

}
