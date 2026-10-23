#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "AnimGraphRuntime_structs.hpp"

namespace SDK
{

struct Player_ZipLine_AnimBP::FAnimBlueprintGeneratedConstantData final : public FAnimBlueprintConstantData
{
public:
	uint8                                         Pad_1[0x3];
	class FName                                   __NameProperty_473;
	class FName                                   __NameProperty_474;
	class FName                                   __NameProperty_475;
	class FName                                   __NameProperty_476;
	class FName                                   __NameProperty_477;
	class FName                                   __NameProperty_478;
	class FName                                   __NameProperty_479;
	class FName                                   __NameProperty_480;
	class FName                                   __NameProperty_481;
	class FName                                   __NameProperty_482;
	uint8                                         Pad_2C[0x4];
	TArray<float>                                 __ArrayProperty_483;
	TArray<float>                                 __ArrayProperty_484;
	TArray<int32>                                 __ArrayProperty_485;
	class FName                                   __NameProperty_486;
	class FName                                   __NameProperty_487;
	class FName                                   __NameProperty_488;
	class FName                                   __NameProperty_489;
	class FName                                   __NameProperty_490;
	class FName                                   __NameProperty_491;
	class FName                                   __NameProperty_492;
	class FName                                   __NameProperty_493;
	class FName                                   __NameProperty_494;
	class FName                                   __NameProperty_495;
	class FName                                   __NameProperty_496;
	class FName                                   __NameProperty_497;
	class FName                                   __NameProperty_498;
	uint8                                         Pad_94[0x4];
	TArray<float>                                 __ArrayProperty_499;
	class FName                                   __NameProperty_500;
	class FName                                   __NameProperty_501;
	class FName                                   __NameProperty_502;
	EAnimSyncMethod                               __EnumProperty_503;
	uint8                                         Pad_B5[0x3];
	class FName                                   __NameProperty_504;
	uint8                                         Pad_BC[0x4];
	class UBlendProfile*                          __BlendProfile_505;
	class UCurveFloat*                            __CurveFloat_506;
	EAlphaBlendOption                             __EnumProperty_507;
	EBlendListTransitionType                      __EnumProperty_508;
	uint8                                         Pad_D2[0x6];
	TArray<int32>                                 __ArrayProperty_509;
	class FName                                   __NameProperty_510;
	int32                                         __IntProperty_511;
	struct FInputScaleBiasClampConstants          __StructProperty_512;
	bool                                          __BoolProperty_513;
	uint8                                         Pad_11D[0x3];
	class FName                                   __NameProperty_514;
	int32                                         __IntProperty_515;
	float                                         __FloatProperty_516;
	float                                         __FloatProperty_517;
	bool                                          __BoolProperty_518;
	EAnimSyncMethod                               __EnumProperty_519;
	EAnimGroupRole                                __ByteProperty_520;
	uint8                                         Pad_133[0x1];
	class FName                                   __NameProperty_521;
	class FName                                   __NameProperty_522;
	int32                                         __IntProperty_523;
	struct FAnimNodeFunctionRef                   __StructProperty_524;
	struct FAnimSubsystem_PropertyAccess          AnimBlueprintExtension_PropertyAccess;
	struct FAnimSubsystem_Base                    AnimBlueprintExtension_Base;
};
static_assert(alignof(Player_ZipLine_AnimBP::FAnimBlueprintGeneratedConstantData) == 0x000008, "Wrong alignment on Player_ZipLine_AnimBP::FAnimBlueprintGeneratedConstantData");
static_assert(sizeof(Player_ZipLine_AnimBP::FAnimBlueprintGeneratedConstantData) == 0x0001F0, "Wrong size on Player_ZipLine_AnimBP::FAnimBlueprintGeneratedConstantData");
static_assert(offsetof(Player_ZipLine_AnimBP::FAnimBlueprintGeneratedConstantData, __NameProperty_473) == 0x000004, "Member 'Player_ZipLine_AnimBP::FAnimBlueprintGeneratedConstantData::__NameProperty_473' has a wrong offset!");
static_assert(offsetof(Player_ZipLine_AnimBP::FAnimBlueprintGeneratedConstantData, __NameProperty_474) == 0x000008, "Member 'Player_ZipLine_AnimBP::FAnimBlueprintGeneratedConstantData::__NameProperty_474' has a wrong offset!");
static_assert(offsetof(Player_ZipLine_AnimBP::FAnimBlueprintGeneratedConstantData, __NameProperty_475) == 0x00000C, "Member 'Player_ZipLine_AnimBP::FAnimBlueprintGeneratedConstantData::__NameProperty_475' has a wrong offset!");
static_assert(offsetof(Player_ZipLine_AnimBP::FAnimBlueprintGeneratedConstantData, __NameProperty_476) == 0x000010, "Member 'Player_ZipLine_AnimBP::FAnimBlueprintGeneratedConstantData::__NameProperty_476' has a wrong offset!");
static_assert(offsetof(Player_ZipLine_AnimBP::FAnimBlueprintGeneratedConstantData, __NameProperty_477) == 0x000014, "Member 'Player_ZipLine_AnimBP::FAnimBlueprintGeneratedConstantData::__NameProperty_477' has a wrong offset!");
static_assert(offsetof(Player_ZipLine_AnimBP::FAnimBlueprintGeneratedConstantData, __NameProperty_478) == 0x000018, "Member 'Player_ZipLine_AnimBP::FAnimBlueprintGeneratedConstantData::__NameProperty_478' has a wrong offset!");
static_assert(offsetof(Player_ZipLine_AnimBP::FAnimBlueprintGeneratedConstantData, __NameProperty_479) == 0x00001C, "Member 'Player_ZipLine_AnimBP::FAnimBlueprintGeneratedConstantData::__NameProperty_479' has a wrong offset!");
static_assert(offsetof(Player_ZipLine_AnimBP::FAnimBlueprintGeneratedConstantData, __NameProperty_480) == 0x000020, "Member 'Player_ZipLine_AnimBP::FAnimBlueprintGeneratedConstantData::__NameProperty_480' has a wrong offset!");
static_assert(offsetof(Player_ZipLine_AnimBP::FAnimBlueprintGeneratedConstantData, __NameProperty_481) == 0x000024, "Member 'Player_ZipLine_AnimBP::FAnimBlueprintGeneratedConstantData::__NameProperty_481' has a wrong offset!");
static_assert(offsetof(Player_ZipLine_AnimBP::FAnimBlueprintGeneratedConstantData, __NameProperty_482) == 0x000028, "Member 'Player_ZipLine_AnimBP::FAnimBlueprintGeneratedConstantData::__NameProperty_482' has a wrong offset!");
static_assert(offsetof(Player_ZipLine_AnimBP::FAnimBlueprintGeneratedConstantData, __ArrayProperty_483) == 0x000030, "Member 'Player_ZipLine_AnimBP::FAnimBlueprintGeneratedConstantData::__ArrayProperty_483' has a wrong offset!");
static_assert(offsetof(Player_ZipLine_AnimBP::FAnimBlueprintGeneratedConstantData, __ArrayProperty_484) == 0x000040, "Member 'Player_ZipLine_AnimBP::FAnimBlueprintGeneratedConstantData::__ArrayProperty_484' has a wrong offset!");
static_assert(offsetof(Player_ZipLine_AnimBP::FAnimBlueprintGeneratedConstantData, __ArrayProperty_485) == 0x000050, "Member 'Player_ZipLine_AnimBP::FAnimBlueprintGeneratedConstantData::__ArrayProperty_485' has a wrong offset!");
static_assert(offsetof(Player_ZipLine_AnimBP::FAnimBlueprintGeneratedConstantData, __NameProperty_486) == 0x000060, "Member 'Player_ZipLine_AnimBP::FAnimBlueprintGeneratedConstantData::__NameProperty_486' has a wrong offset!");
static_assert(offsetof(Player_ZipLine_AnimBP::FAnimBlueprintGeneratedConstantData, __NameProperty_487) == 0x000064, "Member 'Player_ZipLine_AnimBP::FAnimBlueprintGeneratedConstantData::__NameProperty_487' has a wrong offset!");
static_assert(offsetof(Player_ZipLine_AnimBP::FAnimBlueprintGeneratedConstantData, __NameProperty_488) == 0x000068, "Member 'Player_ZipLine_AnimBP::FAnimBlueprintGeneratedConstantData::__NameProperty_488' has a wrong offset!");
static_assert(offsetof(Player_ZipLine_AnimBP::FAnimBlueprintGeneratedConstantData, __NameProperty_489) == 0x00006C, "Member 'Player_ZipLine_AnimBP::FAnimBlueprintGeneratedConstantData::__NameProperty_489' has a wrong offset!");
static_assert(offsetof(Player_ZipLine_AnimBP::FAnimBlueprintGeneratedConstantData, __NameProperty_490) == 0x000070, "Member 'Player_ZipLine_AnimBP::FAnimBlueprintGeneratedConstantData::__NameProperty_490' has a wrong offset!");
static_assert(offsetof(Player_ZipLine_AnimBP::FAnimBlueprintGeneratedConstantData, __NameProperty_491) == 0x000074, "Member 'Player_ZipLine_AnimBP::FAnimBlueprintGeneratedConstantData::__NameProperty_491' has a wrong offset!");
static_assert(offsetof(Player_ZipLine_AnimBP::FAnimBlueprintGeneratedConstantData, __NameProperty_492) == 0x000078, "Member 'Player_ZipLine_AnimBP::FAnimBlueprintGeneratedConstantData::__NameProperty_492' has a wrong offset!");
static_assert(offsetof(Player_ZipLine_AnimBP::FAnimBlueprintGeneratedConstantData, __NameProperty_493) == 0x00007C, "Member 'Player_ZipLine_AnimBP::FAnimBlueprintGeneratedConstantData::__NameProperty_493' has a wrong offset!");
static_assert(offsetof(Player_ZipLine_AnimBP::FAnimBlueprintGeneratedConstantData, __NameProperty_494) == 0x000080, "Member 'Player_ZipLine_AnimBP::FAnimBlueprintGeneratedConstantData::__NameProperty_494' has a wrong offset!");
static_assert(offsetof(Player_ZipLine_AnimBP::FAnimBlueprintGeneratedConstantData, __NameProperty_495) == 0x000084, "Member 'Player_ZipLine_AnimBP::FAnimBlueprintGeneratedConstantData::__NameProperty_495' has a wrong offset!");
static_assert(offsetof(Player_ZipLine_AnimBP::FAnimBlueprintGeneratedConstantData, __NameProperty_496) == 0x000088, "Member 'Player_ZipLine_AnimBP::FAnimBlueprintGeneratedConstantData::__NameProperty_496' has a wrong offset!");
static_assert(offsetof(Player_ZipLine_AnimBP::FAnimBlueprintGeneratedConstantData, __NameProperty_497) == 0x00008C, "Member 'Player_ZipLine_AnimBP::FAnimBlueprintGeneratedConstantData::__NameProperty_497' has a wrong offset!");
static_assert(offsetof(Player_ZipLine_AnimBP::FAnimBlueprintGeneratedConstantData, __NameProperty_498) == 0x000090, "Member 'Player_ZipLine_AnimBP::FAnimBlueprintGeneratedConstantData::__NameProperty_498' has a wrong offset!");
static_assert(offsetof(Player_ZipLine_AnimBP::FAnimBlueprintGeneratedConstantData, __ArrayProperty_499) == 0x000098, "Member 'Player_ZipLine_AnimBP::FAnimBlueprintGeneratedConstantData::__ArrayProperty_499' has a wrong offset!");
static_assert(offsetof(Player_ZipLine_AnimBP::FAnimBlueprintGeneratedConstantData, __NameProperty_500) == 0x0000A8, "Member 'Player_ZipLine_AnimBP::FAnimBlueprintGeneratedConstantData::__NameProperty_500' has a wrong offset!");
static_assert(offsetof(Player_ZipLine_AnimBP::FAnimBlueprintGeneratedConstantData, __NameProperty_501) == 0x0000AC, "Member 'Player_ZipLine_AnimBP::FAnimBlueprintGeneratedConstantData::__NameProperty_501' has a wrong offset!");
static_assert(offsetof(Player_ZipLine_AnimBP::FAnimBlueprintGeneratedConstantData, __NameProperty_502) == 0x0000B0, "Member 'Player_ZipLine_AnimBP::FAnimBlueprintGeneratedConstantData::__NameProperty_502' has a wrong offset!");
static_assert(offsetof(Player_ZipLine_AnimBP::FAnimBlueprintGeneratedConstantData, __EnumProperty_503) == 0x0000B4, "Member 'Player_ZipLine_AnimBP::FAnimBlueprintGeneratedConstantData::__EnumProperty_503' has a wrong offset!");
static_assert(offsetof(Player_ZipLine_AnimBP::FAnimBlueprintGeneratedConstantData, __NameProperty_504) == 0x0000B8, "Member 'Player_ZipLine_AnimBP::FAnimBlueprintGeneratedConstantData::__NameProperty_504' has a wrong offset!");
static_assert(offsetof(Player_ZipLine_AnimBP::FAnimBlueprintGeneratedConstantData, __BlendProfile_505) == 0x0000C0, "Member 'Player_ZipLine_AnimBP::FAnimBlueprintGeneratedConstantData::__BlendProfile_505' has a wrong offset!");
static_assert(offsetof(Player_ZipLine_AnimBP::FAnimBlueprintGeneratedConstantData, __CurveFloat_506) == 0x0000C8, "Member 'Player_ZipLine_AnimBP::FAnimBlueprintGeneratedConstantData::__CurveFloat_506' has a wrong offset!");
static_assert(offsetof(Player_ZipLine_AnimBP::FAnimBlueprintGeneratedConstantData, __EnumProperty_507) == 0x0000D0, "Member 'Player_ZipLine_AnimBP::FAnimBlueprintGeneratedConstantData::__EnumProperty_507' has a wrong offset!");
static_assert(offsetof(Player_ZipLine_AnimBP::FAnimBlueprintGeneratedConstantData, __EnumProperty_508) == 0x0000D1, "Member 'Player_ZipLine_AnimBP::FAnimBlueprintGeneratedConstantData::__EnumProperty_508' has a wrong offset!");
static_assert(offsetof(Player_ZipLine_AnimBP::FAnimBlueprintGeneratedConstantData, __ArrayProperty_509) == 0x0000D8, "Member 'Player_ZipLine_AnimBP::FAnimBlueprintGeneratedConstantData::__ArrayProperty_509' has a wrong offset!");
static_assert(offsetof(Player_ZipLine_AnimBP::FAnimBlueprintGeneratedConstantData, __NameProperty_510) == 0x0000E8, "Member 'Player_ZipLine_AnimBP::FAnimBlueprintGeneratedConstantData::__NameProperty_510' has a wrong offset!");
static_assert(offsetof(Player_ZipLine_AnimBP::FAnimBlueprintGeneratedConstantData, __IntProperty_511) == 0x0000EC, "Member 'Player_ZipLine_AnimBP::FAnimBlueprintGeneratedConstantData::__IntProperty_511' has a wrong offset!");
static_assert(offsetof(Player_ZipLine_AnimBP::FAnimBlueprintGeneratedConstantData, __StructProperty_512) == 0x0000F0, "Member 'Player_ZipLine_AnimBP::FAnimBlueprintGeneratedConstantData::__StructProperty_512' has a wrong offset!");
static_assert(offsetof(Player_ZipLine_AnimBP::FAnimBlueprintGeneratedConstantData, __BoolProperty_513) == 0x00011C, "Member 'Player_ZipLine_AnimBP::FAnimBlueprintGeneratedConstantData::__BoolProperty_513' has a wrong offset!");
static_assert(offsetof(Player_ZipLine_AnimBP::FAnimBlueprintGeneratedConstantData, __NameProperty_514) == 0x000120, "Member 'Player_ZipLine_AnimBP::FAnimBlueprintGeneratedConstantData::__NameProperty_514' has a wrong offset!");
static_assert(offsetof(Player_ZipLine_AnimBP::FAnimBlueprintGeneratedConstantData, __IntProperty_515) == 0x000124, "Member 'Player_ZipLine_AnimBP::FAnimBlueprintGeneratedConstantData::__IntProperty_515' has a wrong offset!");
static_assert(offsetof(Player_ZipLine_AnimBP::FAnimBlueprintGeneratedConstantData, __FloatProperty_516) == 0x000128, "Member 'Player_ZipLine_AnimBP::FAnimBlueprintGeneratedConstantData::__FloatProperty_516' has a wrong offset!");
static_assert(offsetof(Player_ZipLine_AnimBP::FAnimBlueprintGeneratedConstantData, __FloatProperty_517) == 0x00012C, "Member 'Player_ZipLine_AnimBP::FAnimBlueprintGeneratedConstantData::__FloatProperty_517' has a wrong offset!");
static_assert(offsetof(Player_ZipLine_AnimBP::FAnimBlueprintGeneratedConstantData, __BoolProperty_518) == 0x000130, "Member 'Player_ZipLine_AnimBP::FAnimBlueprintGeneratedConstantData::__BoolProperty_518' has a wrong offset!");
static_assert(offsetof(Player_ZipLine_AnimBP::FAnimBlueprintGeneratedConstantData, __EnumProperty_519) == 0x000131, "Member 'Player_ZipLine_AnimBP::FAnimBlueprintGeneratedConstantData::__EnumProperty_519' has a wrong offset!");
static_assert(offsetof(Player_ZipLine_AnimBP::FAnimBlueprintGeneratedConstantData, __ByteProperty_520) == 0x000132, "Member 'Player_ZipLine_AnimBP::FAnimBlueprintGeneratedConstantData::__ByteProperty_520' has a wrong offset!");
static_assert(offsetof(Player_ZipLine_AnimBP::FAnimBlueprintGeneratedConstantData, __NameProperty_521) == 0x000134, "Member 'Player_ZipLine_AnimBP::FAnimBlueprintGeneratedConstantData::__NameProperty_521' has a wrong offset!");
static_assert(offsetof(Player_ZipLine_AnimBP::FAnimBlueprintGeneratedConstantData, __NameProperty_522) == 0x000138, "Member 'Player_ZipLine_AnimBP::FAnimBlueprintGeneratedConstantData::__NameProperty_522' has a wrong offset!");
static_assert(offsetof(Player_ZipLine_AnimBP::FAnimBlueprintGeneratedConstantData, __IntProperty_523) == 0x00013C, "Member 'Player_ZipLine_AnimBP::FAnimBlueprintGeneratedConstantData::__IntProperty_523' has a wrong offset!");
static_assert(offsetof(Player_ZipLine_AnimBP::FAnimBlueprintGeneratedConstantData, __StructProperty_524) == 0x000140, "Member 'Player_ZipLine_AnimBP::FAnimBlueprintGeneratedConstantData::__StructProperty_524' has a wrong offset!");
static_assert(offsetof(Player_ZipLine_AnimBP::FAnimBlueprintGeneratedConstantData, AnimBlueprintExtension_PropertyAccess) == 0x000158, "Member 'Player_ZipLine_AnimBP::FAnimBlueprintGeneratedConstantData::AnimBlueprintExtension_PropertyAccess' has a wrong offset!");
static_assert(offsetof(Player_ZipLine_AnimBP::FAnimBlueprintGeneratedConstantData, AnimBlueprintExtension_Base) == 0x0001D8, "Member 'Player_ZipLine_AnimBP::FAnimBlueprintGeneratedConstantData::AnimBlueprintExtension_Base' has a wrong offset!");

struct Player_ZipLine_AnimBP::FAnimBlueprintGeneratedMutableData final : public FAnimBlueprintMutableData
{
public:
	bool                                          __BoolProperty;
	uint8                                         Pad_2[0x6];
	TArray<float>                                 __ArrayProperty_0;
	bool                                          __BoolProperty_1;
	uint8                                         __ByteProperty_2;
	bool                                          __BoolProperty_3;
	uint8                                         Pad_1B[0x5];
	TArray<float>                                 __ArrayProperty_4;
	bool                                          __BoolProperty_5;
	uint8                                         __ByteProperty_6;
	bool                                          __BoolProperty_7;
	uint8                                         Pad_33[0x5];
	TArray<float>                                 __ArrayProperty_8;
	uint8                                         __ByteProperty_9;
	uint8                                         Pad_49[0x7];
	TArray<float>                                 __ArrayProperty_10;
	uint8                                         __ByteProperty_11;
	uint8                                         Pad_61[0x3];
	float                                         __FloatProperty_12;
	float                                         __FloatProperty_13;
};
static_assert(alignof(Player_ZipLine_AnimBP::FAnimBlueprintGeneratedMutableData) == 0x000008, "Wrong alignment on Player_ZipLine_AnimBP::FAnimBlueprintGeneratedMutableData");
static_assert(sizeof(Player_ZipLine_AnimBP::FAnimBlueprintGeneratedMutableData) == 0x000070, "Wrong size on Player_ZipLine_AnimBP::FAnimBlueprintGeneratedMutableData");
static_assert(offsetof(Player_ZipLine_AnimBP::FAnimBlueprintGeneratedMutableData, __BoolProperty) == 0x000001, "Member 'Player_ZipLine_AnimBP::FAnimBlueprintGeneratedMutableData::__BoolProperty' has a wrong offset!");
static_assert(offsetof(Player_ZipLine_AnimBP::FAnimBlueprintGeneratedMutableData, __ArrayProperty_0) == 0x000008, "Member 'Player_ZipLine_AnimBP::FAnimBlueprintGeneratedMutableData::__ArrayProperty_0' has a wrong offset!");
static_assert(offsetof(Player_ZipLine_AnimBP::FAnimBlueprintGeneratedMutableData, __BoolProperty_1) == 0x000018, "Member 'Player_ZipLine_AnimBP::FAnimBlueprintGeneratedMutableData::__BoolProperty_1' has a wrong offset!");
static_assert(offsetof(Player_ZipLine_AnimBP::FAnimBlueprintGeneratedMutableData, __ByteProperty_2) == 0x000019, "Member 'Player_ZipLine_AnimBP::FAnimBlueprintGeneratedMutableData::__ByteProperty_2' has a wrong offset!");
static_assert(offsetof(Player_ZipLine_AnimBP::FAnimBlueprintGeneratedMutableData, __BoolProperty_3) == 0x00001A, "Member 'Player_ZipLine_AnimBP::FAnimBlueprintGeneratedMutableData::__BoolProperty_3' has a wrong offset!");
static_assert(offsetof(Player_ZipLine_AnimBP::FAnimBlueprintGeneratedMutableData, __ArrayProperty_4) == 0x000020, "Member 'Player_ZipLine_AnimBP::FAnimBlueprintGeneratedMutableData::__ArrayProperty_4' has a wrong offset!");
static_assert(offsetof(Player_ZipLine_AnimBP::FAnimBlueprintGeneratedMutableData, __BoolProperty_5) == 0x000030, "Member 'Player_ZipLine_AnimBP::FAnimBlueprintGeneratedMutableData::__BoolProperty_5' has a wrong offset!");
static_assert(offsetof(Player_ZipLine_AnimBP::FAnimBlueprintGeneratedMutableData, __ByteProperty_6) == 0x000031, "Member 'Player_ZipLine_AnimBP::FAnimBlueprintGeneratedMutableData::__ByteProperty_6' has a wrong offset!");
static_assert(offsetof(Player_ZipLine_AnimBP::FAnimBlueprintGeneratedMutableData, __BoolProperty_7) == 0x000032, "Member 'Player_ZipLine_AnimBP::FAnimBlueprintGeneratedMutableData::__BoolProperty_7' has a wrong offset!");
static_assert(offsetof(Player_ZipLine_AnimBP::FAnimBlueprintGeneratedMutableData, __ArrayProperty_8) == 0x000038, "Member 'Player_ZipLine_AnimBP::FAnimBlueprintGeneratedMutableData::__ArrayProperty_8' has a wrong offset!");
static_assert(offsetof(Player_ZipLine_AnimBP::FAnimBlueprintGeneratedMutableData, __ByteProperty_9) == 0x000048, "Member 'Player_ZipLine_AnimBP::FAnimBlueprintGeneratedMutableData::__ByteProperty_9' has a wrong offset!");
static_assert(offsetof(Player_ZipLine_AnimBP::FAnimBlueprintGeneratedMutableData, __ArrayProperty_10) == 0x000050, "Member 'Player_ZipLine_AnimBP::FAnimBlueprintGeneratedMutableData::__ArrayProperty_10' has a wrong offset!");
static_assert(offsetof(Player_ZipLine_AnimBP::FAnimBlueprintGeneratedMutableData, __ByteProperty_11) == 0x000060, "Member 'Player_ZipLine_AnimBP::FAnimBlueprintGeneratedMutableData::__ByteProperty_11' has a wrong offset!");
static_assert(offsetof(Player_ZipLine_AnimBP::FAnimBlueprintGeneratedMutableData, __FloatProperty_12) == 0x000064, "Member 'Player_ZipLine_AnimBP::FAnimBlueprintGeneratedMutableData::__FloatProperty_12' has a wrong offset!");
static_assert(offsetof(Player_ZipLine_AnimBP::FAnimBlueprintGeneratedMutableData, __FloatProperty_13) == 0x000068, "Member 'Player_ZipLine_AnimBP::FAnimBlueprintGeneratedMutableData::__FloatProperty_13' has a wrong offset!");

}
