#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "AnimGraphRuntime_structs.hpp"

namespace SDK
{

struct Player_TacticalState_AnimBP::FAnimBlueprintGeneratedConstantData final : public FAnimBlueprintConstantData
{
public:
	uint8                                         Pad_1[0x3];
	class FName                                   __NameProperty_932;
	TArray<float>                                 __ArrayProperty_933;
	TArray<int32>                                 __ArrayProperty_934;
	class FName                                   __NameProperty_935;
	EAnimGroupRole                                __ByteProperty_936;
	uint8                                         Pad_2D[0x3];
	class FName                                   __NameProperty_937;
	int32                                         __IntProperty_938;
	EAnimGroupRole                                __ByteProperty_939;
	uint8                                         Pad_39[0x3];
	class FName                                   __NameProperty_940;
	class FName                                   __NameProperty_941;
	class FName                                   __NameProperty_942;
	class FName                                   __NameProperty_943;
	class FName                                   __NameProperty_944;
	class FName                                   __NameProperty_945;
	class FName                                   __NameProperty_946;
	class FName                                   __NameProperty_947;
	int32                                         __IntProperty_948;
	class FName                                   __NameProperty_949;
	int32                                         __IntProperty_950;
	class FName                                   __NameProperty_951;
	int32                                         __IntProperty_952;
	class FName                                   __NameProperty_953;
	int32                                         __IntProperty_954;
	class FName                                   __NameProperty_955;
	class FName                                   __NameProperty_956;
	class FName                                   __NameProperty_957;
	class FName                                   __NameProperty_958;
	class FName                                   __NameProperty_959;
	int32                                         __IntProperty_960;
	class FName                                   __NameProperty_961;
	class FName                                   __NameProperty_962;
	class FName                                   __NameProperty_963;
	class FName                                   __NameProperty_964;
	EAnimSyncMethod                               __EnumProperty_965;
	uint8                                         Pad_A1[0x3];
	class FName                                   __NameProperty_966;
	class FName                                   __NameProperty_967;
	int32                                         __IntProperty_968;
	class FName                                   __NameProperty_969;
	int32                                         __IntProperty_970;
	bool                                          __BoolProperty_971;
	uint8                                         Pad_B9[0x3];
	float                                         __FloatProperty_972;
	struct FInputScaleBiasClampConstants          __StructProperty_973;
	float                                         __FloatProperty_974;
	EAnimSyncMethod                               __EnumProperty_975;
	EAnimGroupRole                                __ByteProperty_976;
	uint8                                         Pad_F2[0x2];
	class FName                                   __NameProperty_977;
	class FName                                   __NameProperty_978;
	int32                                         __IntProperty_979;
	class UBlendProfile*                          __BlendProfile_980;
	class UCurveFloat*                            __CurveFloat_981;
	bool                                          __BoolProperty_982;
	EAlphaBlendOption                             __EnumProperty_983;
	EBlendListTransitionType                      __EnumProperty_984;
	uint8                                         Pad_113[0x5];
	TArray<float>                                 __ArrayProperty_985;
	struct FAnimNodeFunctionRef                   __StructProperty_986;
	struct FAnimSubsystem_PropertyAccess          AnimBlueprintExtension_PropertyAccess;
	struct FAnimSubsystem_Base                    AnimBlueprintExtension_Base;
};
static_assert(alignof(Player_TacticalState_AnimBP::FAnimBlueprintGeneratedConstantData) == 0x000008, "Wrong alignment on Player_TacticalState_AnimBP::FAnimBlueprintGeneratedConstantData");
static_assert(sizeof(Player_TacticalState_AnimBP::FAnimBlueprintGeneratedConstantData) == 0x0001D8, "Wrong size on Player_TacticalState_AnimBP::FAnimBlueprintGeneratedConstantData");
static_assert(offsetof(Player_TacticalState_AnimBP::FAnimBlueprintGeneratedConstantData, __NameProperty_932) == 0x000004, "Member 'Player_TacticalState_AnimBP::FAnimBlueprintGeneratedConstantData::__NameProperty_932' has a wrong offset!");
static_assert(offsetof(Player_TacticalState_AnimBP::FAnimBlueprintGeneratedConstantData, __ArrayProperty_933) == 0x000008, "Member 'Player_TacticalState_AnimBP::FAnimBlueprintGeneratedConstantData::__ArrayProperty_933' has a wrong offset!");
static_assert(offsetof(Player_TacticalState_AnimBP::FAnimBlueprintGeneratedConstantData, __ArrayProperty_934) == 0x000018, "Member 'Player_TacticalState_AnimBP::FAnimBlueprintGeneratedConstantData::__ArrayProperty_934' has a wrong offset!");
static_assert(offsetof(Player_TacticalState_AnimBP::FAnimBlueprintGeneratedConstantData, __NameProperty_935) == 0x000028, "Member 'Player_TacticalState_AnimBP::FAnimBlueprintGeneratedConstantData::__NameProperty_935' has a wrong offset!");
static_assert(offsetof(Player_TacticalState_AnimBP::FAnimBlueprintGeneratedConstantData, __ByteProperty_936) == 0x00002C, "Member 'Player_TacticalState_AnimBP::FAnimBlueprintGeneratedConstantData::__ByteProperty_936' has a wrong offset!");
static_assert(offsetof(Player_TacticalState_AnimBP::FAnimBlueprintGeneratedConstantData, __NameProperty_937) == 0x000030, "Member 'Player_TacticalState_AnimBP::FAnimBlueprintGeneratedConstantData::__NameProperty_937' has a wrong offset!");
static_assert(offsetof(Player_TacticalState_AnimBP::FAnimBlueprintGeneratedConstantData, __IntProperty_938) == 0x000034, "Member 'Player_TacticalState_AnimBP::FAnimBlueprintGeneratedConstantData::__IntProperty_938' has a wrong offset!");
static_assert(offsetof(Player_TacticalState_AnimBP::FAnimBlueprintGeneratedConstantData, __ByteProperty_939) == 0x000038, "Member 'Player_TacticalState_AnimBP::FAnimBlueprintGeneratedConstantData::__ByteProperty_939' has a wrong offset!");
static_assert(offsetof(Player_TacticalState_AnimBP::FAnimBlueprintGeneratedConstantData, __NameProperty_940) == 0x00003C, "Member 'Player_TacticalState_AnimBP::FAnimBlueprintGeneratedConstantData::__NameProperty_940' has a wrong offset!");
static_assert(offsetof(Player_TacticalState_AnimBP::FAnimBlueprintGeneratedConstantData, __NameProperty_941) == 0x000040, "Member 'Player_TacticalState_AnimBP::FAnimBlueprintGeneratedConstantData::__NameProperty_941' has a wrong offset!");
static_assert(offsetof(Player_TacticalState_AnimBP::FAnimBlueprintGeneratedConstantData, __NameProperty_942) == 0x000044, "Member 'Player_TacticalState_AnimBP::FAnimBlueprintGeneratedConstantData::__NameProperty_942' has a wrong offset!");
static_assert(offsetof(Player_TacticalState_AnimBP::FAnimBlueprintGeneratedConstantData, __NameProperty_943) == 0x000048, "Member 'Player_TacticalState_AnimBP::FAnimBlueprintGeneratedConstantData::__NameProperty_943' has a wrong offset!");
static_assert(offsetof(Player_TacticalState_AnimBP::FAnimBlueprintGeneratedConstantData, __NameProperty_944) == 0x00004C, "Member 'Player_TacticalState_AnimBP::FAnimBlueprintGeneratedConstantData::__NameProperty_944' has a wrong offset!");
static_assert(offsetof(Player_TacticalState_AnimBP::FAnimBlueprintGeneratedConstantData, __NameProperty_945) == 0x000050, "Member 'Player_TacticalState_AnimBP::FAnimBlueprintGeneratedConstantData::__NameProperty_945' has a wrong offset!");
static_assert(offsetof(Player_TacticalState_AnimBP::FAnimBlueprintGeneratedConstantData, __NameProperty_946) == 0x000054, "Member 'Player_TacticalState_AnimBP::FAnimBlueprintGeneratedConstantData::__NameProperty_946' has a wrong offset!");
static_assert(offsetof(Player_TacticalState_AnimBP::FAnimBlueprintGeneratedConstantData, __NameProperty_947) == 0x000058, "Member 'Player_TacticalState_AnimBP::FAnimBlueprintGeneratedConstantData::__NameProperty_947' has a wrong offset!");
static_assert(offsetof(Player_TacticalState_AnimBP::FAnimBlueprintGeneratedConstantData, __IntProperty_948) == 0x00005C, "Member 'Player_TacticalState_AnimBP::FAnimBlueprintGeneratedConstantData::__IntProperty_948' has a wrong offset!");
static_assert(offsetof(Player_TacticalState_AnimBP::FAnimBlueprintGeneratedConstantData, __NameProperty_949) == 0x000060, "Member 'Player_TacticalState_AnimBP::FAnimBlueprintGeneratedConstantData::__NameProperty_949' has a wrong offset!");
static_assert(offsetof(Player_TacticalState_AnimBP::FAnimBlueprintGeneratedConstantData, __IntProperty_950) == 0x000064, "Member 'Player_TacticalState_AnimBP::FAnimBlueprintGeneratedConstantData::__IntProperty_950' has a wrong offset!");
static_assert(offsetof(Player_TacticalState_AnimBP::FAnimBlueprintGeneratedConstantData, __NameProperty_951) == 0x000068, "Member 'Player_TacticalState_AnimBP::FAnimBlueprintGeneratedConstantData::__NameProperty_951' has a wrong offset!");
static_assert(offsetof(Player_TacticalState_AnimBP::FAnimBlueprintGeneratedConstantData, __IntProperty_952) == 0x00006C, "Member 'Player_TacticalState_AnimBP::FAnimBlueprintGeneratedConstantData::__IntProperty_952' has a wrong offset!");
static_assert(offsetof(Player_TacticalState_AnimBP::FAnimBlueprintGeneratedConstantData, __NameProperty_953) == 0x000070, "Member 'Player_TacticalState_AnimBP::FAnimBlueprintGeneratedConstantData::__NameProperty_953' has a wrong offset!");
static_assert(offsetof(Player_TacticalState_AnimBP::FAnimBlueprintGeneratedConstantData, __IntProperty_954) == 0x000074, "Member 'Player_TacticalState_AnimBP::FAnimBlueprintGeneratedConstantData::__IntProperty_954' has a wrong offset!");
static_assert(offsetof(Player_TacticalState_AnimBP::FAnimBlueprintGeneratedConstantData, __NameProperty_955) == 0x000078, "Member 'Player_TacticalState_AnimBP::FAnimBlueprintGeneratedConstantData::__NameProperty_955' has a wrong offset!");
static_assert(offsetof(Player_TacticalState_AnimBP::FAnimBlueprintGeneratedConstantData, __NameProperty_956) == 0x00007C, "Member 'Player_TacticalState_AnimBP::FAnimBlueprintGeneratedConstantData::__NameProperty_956' has a wrong offset!");
static_assert(offsetof(Player_TacticalState_AnimBP::FAnimBlueprintGeneratedConstantData, __NameProperty_957) == 0x000080, "Member 'Player_TacticalState_AnimBP::FAnimBlueprintGeneratedConstantData::__NameProperty_957' has a wrong offset!");
static_assert(offsetof(Player_TacticalState_AnimBP::FAnimBlueprintGeneratedConstantData, __NameProperty_958) == 0x000084, "Member 'Player_TacticalState_AnimBP::FAnimBlueprintGeneratedConstantData::__NameProperty_958' has a wrong offset!");
static_assert(offsetof(Player_TacticalState_AnimBP::FAnimBlueprintGeneratedConstantData, __NameProperty_959) == 0x000088, "Member 'Player_TacticalState_AnimBP::FAnimBlueprintGeneratedConstantData::__NameProperty_959' has a wrong offset!");
static_assert(offsetof(Player_TacticalState_AnimBP::FAnimBlueprintGeneratedConstantData, __IntProperty_960) == 0x00008C, "Member 'Player_TacticalState_AnimBP::FAnimBlueprintGeneratedConstantData::__IntProperty_960' has a wrong offset!");
static_assert(offsetof(Player_TacticalState_AnimBP::FAnimBlueprintGeneratedConstantData, __NameProperty_961) == 0x000090, "Member 'Player_TacticalState_AnimBP::FAnimBlueprintGeneratedConstantData::__NameProperty_961' has a wrong offset!");
static_assert(offsetof(Player_TacticalState_AnimBP::FAnimBlueprintGeneratedConstantData, __NameProperty_962) == 0x000094, "Member 'Player_TacticalState_AnimBP::FAnimBlueprintGeneratedConstantData::__NameProperty_962' has a wrong offset!");
static_assert(offsetof(Player_TacticalState_AnimBP::FAnimBlueprintGeneratedConstantData, __NameProperty_963) == 0x000098, "Member 'Player_TacticalState_AnimBP::FAnimBlueprintGeneratedConstantData::__NameProperty_963' has a wrong offset!");
static_assert(offsetof(Player_TacticalState_AnimBP::FAnimBlueprintGeneratedConstantData, __NameProperty_964) == 0x00009C, "Member 'Player_TacticalState_AnimBP::FAnimBlueprintGeneratedConstantData::__NameProperty_964' has a wrong offset!");
static_assert(offsetof(Player_TacticalState_AnimBP::FAnimBlueprintGeneratedConstantData, __EnumProperty_965) == 0x0000A0, "Member 'Player_TacticalState_AnimBP::FAnimBlueprintGeneratedConstantData::__EnumProperty_965' has a wrong offset!");
static_assert(offsetof(Player_TacticalState_AnimBP::FAnimBlueprintGeneratedConstantData, __NameProperty_966) == 0x0000A4, "Member 'Player_TacticalState_AnimBP::FAnimBlueprintGeneratedConstantData::__NameProperty_966' has a wrong offset!");
static_assert(offsetof(Player_TacticalState_AnimBP::FAnimBlueprintGeneratedConstantData, __NameProperty_967) == 0x0000A8, "Member 'Player_TacticalState_AnimBP::FAnimBlueprintGeneratedConstantData::__NameProperty_967' has a wrong offset!");
static_assert(offsetof(Player_TacticalState_AnimBP::FAnimBlueprintGeneratedConstantData, __IntProperty_968) == 0x0000AC, "Member 'Player_TacticalState_AnimBP::FAnimBlueprintGeneratedConstantData::__IntProperty_968' has a wrong offset!");
static_assert(offsetof(Player_TacticalState_AnimBP::FAnimBlueprintGeneratedConstantData, __NameProperty_969) == 0x0000B0, "Member 'Player_TacticalState_AnimBP::FAnimBlueprintGeneratedConstantData::__NameProperty_969' has a wrong offset!");
static_assert(offsetof(Player_TacticalState_AnimBP::FAnimBlueprintGeneratedConstantData, __IntProperty_970) == 0x0000B4, "Member 'Player_TacticalState_AnimBP::FAnimBlueprintGeneratedConstantData::__IntProperty_970' has a wrong offset!");
static_assert(offsetof(Player_TacticalState_AnimBP::FAnimBlueprintGeneratedConstantData, __BoolProperty_971) == 0x0000B8, "Member 'Player_TacticalState_AnimBP::FAnimBlueprintGeneratedConstantData::__BoolProperty_971' has a wrong offset!");
static_assert(offsetof(Player_TacticalState_AnimBP::FAnimBlueprintGeneratedConstantData, __FloatProperty_972) == 0x0000BC, "Member 'Player_TacticalState_AnimBP::FAnimBlueprintGeneratedConstantData::__FloatProperty_972' has a wrong offset!");
static_assert(offsetof(Player_TacticalState_AnimBP::FAnimBlueprintGeneratedConstantData, __StructProperty_973) == 0x0000C0, "Member 'Player_TacticalState_AnimBP::FAnimBlueprintGeneratedConstantData::__StructProperty_973' has a wrong offset!");
static_assert(offsetof(Player_TacticalState_AnimBP::FAnimBlueprintGeneratedConstantData, __FloatProperty_974) == 0x0000EC, "Member 'Player_TacticalState_AnimBP::FAnimBlueprintGeneratedConstantData::__FloatProperty_974' has a wrong offset!");
static_assert(offsetof(Player_TacticalState_AnimBP::FAnimBlueprintGeneratedConstantData, __EnumProperty_975) == 0x0000F0, "Member 'Player_TacticalState_AnimBP::FAnimBlueprintGeneratedConstantData::__EnumProperty_975' has a wrong offset!");
static_assert(offsetof(Player_TacticalState_AnimBP::FAnimBlueprintGeneratedConstantData, __ByteProperty_976) == 0x0000F1, "Member 'Player_TacticalState_AnimBP::FAnimBlueprintGeneratedConstantData::__ByteProperty_976' has a wrong offset!");
static_assert(offsetof(Player_TacticalState_AnimBP::FAnimBlueprintGeneratedConstantData, __NameProperty_977) == 0x0000F4, "Member 'Player_TacticalState_AnimBP::FAnimBlueprintGeneratedConstantData::__NameProperty_977' has a wrong offset!");
static_assert(offsetof(Player_TacticalState_AnimBP::FAnimBlueprintGeneratedConstantData, __NameProperty_978) == 0x0000F8, "Member 'Player_TacticalState_AnimBP::FAnimBlueprintGeneratedConstantData::__NameProperty_978' has a wrong offset!");
static_assert(offsetof(Player_TacticalState_AnimBP::FAnimBlueprintGeneratedConstantData, __IntProperty_979) == 0x0000FC, "Member 'Player_TacticalState_AnimBP::FAnimBlueprintGeneratedConstantData::__IntProperty_979' has a wrong offset!");
static_assert(offsetof(Player_TacticalState_AnimBP::FAnimBlueprintGeneratedConstantData, __BlendProfile_980) == 0x000100, "Member 'Player_TacticalState_AnimBP::FAnimBlueprintGeneratedConstantData::__BlendProfile_980' has a wrong offset!");
static_assert(offsetof(Player_TacticalState_AnimBP::FAnimBlueprintGeneratedConstantData, __CurveFloat_981) == 0x000108, "Member 'Player_TacticalState_AnimBP::FAnimBlueprintGeneratedConstantData::__CurveFloat_981' has a wrong offset!");
static_assert(offsetof(Player_TacticalState_AnimBP::FAnimBlueprintGeneratedConstantData, __BoolProperty_982) == 0x000110, "Member 'Player_TacticalState_AnimBP::FAnimBlueprintGeneratedConstantData::__BoolProperty_982' has a wrong offset!");
static_assert(offsetof(Player_TacticalState_AnimBP::FAnimBlueprintGeneratedConstantData, __EnumProperty_983) == 0x000111, "Member 'Player_TacticalState_AnimBP::FAnimBlueprintGeneratedConstantData::__EnumProperty_983' has a wrong offset!");
static_assert(offsetof(Player_TacticalState_AnimBP::FAnimBlueprintGeneratedConstantData, __EnumProperty_984) == 0x000112, "Member 'Player_TacticalState_AnimBP::FAnimBlueprintGeneratedConstantData::__EnumProperty_984' has a wrong offset!");
static_assert(offsetof(Player_TacticalState_AnimBP::FAnimBlueprintGeneratedConstantData, __ArrayProperty_985) == 0x000118, "Member 'Player_TacticalState_AnimBP::FAnimBlueprintGeneratedConstantData::__ArrayProperty_985' has a wrong offset!");
static_assert(offsetof(Player_TacticalState_AnimBP::FAnimBlueprintGeneratedConstantData, __StructProperty_986) == 0x000128, "Member 'Player_TacticalState_AnimBP::FAnimBlueprintGeneratedConstantData::__StructProperty_986' has a wrong offset!");
static_assert(offsetof(Player_TacticalState_AnimBP::FAnimBlueprintGeneratedConstantData, AnimBlueprintExtension_PropertyAccess) == 0x000140, "Member 'Player_TacticalState_AnimBP::FAnimBlueprintGeneratedConstantData::AnimBlueprintExtension_PropertyAccess' has a wrong offset!");
static_assert(offsetof(Player_TacticalState_AnimBP::FAnimBlueprintGeneratedConstantData, AnimBlueprintExtension_Base) == 0x0001C0, "Member 'Player_TacticalState_AnimBP::FAnimBlueprintGeneratedConstantData::AnimBlueprintExtension_Base' has a wrong offset!");

struct Player_TacticalState_AnimBP::FAnimBlueprintGeneratedMutableData final : public FAnimBlueprintMutableData
{
public:
	uint8                                         __ByteProperty;
	uint8                                         Pad_2[0x2];
	float                                         __FloatProperty_0;
	float                                         __FloatProperty_1;
	bool                                          __BoolProperty_2;
	bool                                          __BoolProperty_3;
	bool                                          __BoolProperty_4;
	bool                                          __BoolProperty_5;
	bool                                          __BoolProperty_6;
	bool                                          __BoolProperty_7;
	bool                                          __BoolProperty_8;
	bool                                          __BoolProperty_9;
	bool                                          __BoolProperty_10;
	bool                                          __BoolProperty_11;
	bool                                          __BoolProperty_12;
	bool                                          __BoolProperty_13;
	bool                                          __BoolProperty_14;
	uint8                                         Pad_19[0x3];
	float                                         __FloatProperty_15;
	bool                                          __BoolProperty_16;
	bool                                          __BoolProperty_17;
};
static_assert(alignof(Player_TacticalState_AnimBP::FAnimBlueprintGeneratedMutableData) == 0x000004, "Wrong alignment on Player_TacticalState_AnimBP::FAnimBlueprintGeneratedMutableData");
static_assert(sizeof(Player_TacticalState_AnimBP::FAnimBlueprintGeneratedMutableData) == 0x000024, "Wrong size on Player_TacticalState_AnimBP::FAnimBlueprintGeneratedMutableData");
static_assert(offsetof(Player_TacticalState_AnimBP::FAnimBlueprintGeneratedMutableData, __ByteProperty) == 0x000001, "Member 'Player_TacticalState_AnimBP::FAnimBlueprintGeneratedMutableData::__ByteProperty' has a wrong offset!");
static_assert(offsetof(Player_TacticalState_AnimBP::FAnimBlueprintGeneratedMutableData, __FloatProperty_0) == 0x000004, "Member 'Player_TacticalState_AnimBP::FAnimBlueprintGeneratedMutableData::__FloatProperty_0' has a wrong offset!");
static_assert(offsetof(Player_TacticalState_AnimBP::FAnimBlueprintGeneratedMutableData, __FloatProperty_1) == 0x000008, "Member 'Player_TacticalState_AnimBP::FAnimBlueprintGeneratedMutableData::__FloatProperty_1' has a wrong offset!");
static_assert(offsetof(Player_TacticalState_AnimBP::FAnimBlueprintGeneratedMutableData, __BoolProperty_2) == 0x00000C, "Member 'Player_TacticalState_AnimBP::FAnimBlueprintGeneratedMutableData::__BoolProperty_2' has a wrong offset!");
static_assert(offsetof(Player_TacticalState_AnimBP::FAnimBlueprintGeneratedMutableData, __BoolProperty_3) == 0x00000D, "Member 'Player_TacticalState_AnimBP::FAnimBlueprintGeneratedMutableData::__BoolProperty_3' has a wrong offset!");
static_assert(offsetof(Player_TacticalState_AnimBP::FAnimBlueprintGeneratedMutableData, __BoolProperty_4) == 0x00000E, "Member 'Player_TacticalState_AnimBP::FAnimBlueprintGeneratedMutableData::__BoolProperty_4' has a wrong offset!");
static_assert(offsetof(Player_TacticalState_AnimBP::FAnimBlueprintGeneratedMutableData, __BoolProperty_5) == 0x00000F, "Member 'Player_TacticalState_AnimBP::FAnimBlueprintGeneratedMutableData::__BoolProperty_5' has a wrong offset!");
static_assert(offsetof(Player_TacticalState_AnimBP::FAnimBlueprintGeneratedMutableData, __BoolProperty_6) == 0x000010, "Member 'Player_TacticalState_AnimBP::FAnimBlueprintGeneratedMutableData::__BoolProperty_6' has a wrong offset!");
static_assert(offsetof(Player_TacticalState_AnimBP::FAnimBlueprintGeneratedMutableData, __BoolProperty_7) == 0x000011, "Member 'Player_TacticalState_AnimBP::FAnimBlueprintGeneratedMutableData::__BoolProperty_7' has a wrong offset!");
static_assert(offsetof(Player_TacticalState_AnimBP::FAnimBlueprintGeneratedMutableData, __BoolProperty_8) == 0x000012, "Member 'Player_TacticalState_AnimBP::FAnimBlueprintGeneratedMutableData::__BoolProperty_8' has a wrong offset!");
static_assert(offsetof(Player_TacticalState_AnimBP::FAnimBlueprintGeneratedMutableData, __BoolProperty_9) == 0x000013, "Member 'Player_TacticalState_AnimBP::FAnimBlueprintGeneratedMutableData::__BoolProperty_9' has a wrong offset!");
static_assert(offsetof(Player_TacticalState_AnimBP::FAnimBlueprintGeneratedMutableData, __BoolProperty_10) == 0x000014, "Member 'Player_TacticalState_AnimBP::FAnimBlueprintGeneratedMutableData::__BoolProperty_10' has a wrong offset!");
static_assert(offsetof(Player_TacticalState_AnimBP::FAnimBlueprintGeneratedMutableData, __BoolProperty_11) == 0x000015, "Member 'Player_TacticalState_AnimBP::FAnimBlueprintGeneratedMutableData::__BoolProperty_11' has a wrong offset!");
static_assert(offsetof(Player_TacticalState_AnimBP::FAnimBlueprintGeneratedMutableData, __BoolProperty_12) == 0x000016, "Member 'Player_TacticalState_AnimBP::FAnimBlueprintGeneratedMutableData::__BoolProperty_12' has a wrong offset!");
static_assert(offsetof(Player_TacticalState_AnimBP::FAnimBlueprintGeneratedMutableData, __BoolProperty_13) == 0x000017, "Member 'Player_TacticalState_AnimBP::FAnimBlueprintGeneratedMutableData::__BoolProperty_13' has a wrong offset!");
static_assert(offsetof(Player_TacticalState_AnimBP::FAnimBlueprintGeneratedMutableData, __BoolProperty_14) == 0x000018, "Member 'Player_TacticalState_AnimBP::FAnimBlueprintGeneratedMutableData::__BoolProperty_14' has a wrong offset!");
static_assert(offsetof(Player_TacticalState_AnimBP::FAnimBlueprintGeneratedMutableData, __FloatProperty_15) == 0x00001C, "Member 'Player_TacticalState_AnimBP::FAnimBlueprintGeneratedMutableData::__FloatProperty_15' has a wrong offset!");
static_assert(offsetof(Player_TacticalState_AnimBP::FAnimBlueprintGeneratedMutableData, __BoolProperty_16) == 0x000020, "Member 'Player_TacticalState_AnimBP::FAnimBlueprintGeneratedMutableData::__BoolProperty_16' has a wrong offset!");
static_assert(offsetof(Player_TacticalState_AnimBP::FAnimBlueprintGeneratedMutableData, __BoolProperty_17) == 0x000021, "Member 'Player_TacticalState_AnimBP::FAnimBlueprintGeneratedMutableData::__BoolProperty_17' has a wrong offset!");

}
