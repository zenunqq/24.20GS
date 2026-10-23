#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"

namespace SDK
{

enum class EWaveTableResolution : uint8
{
	None                                     = 0,
	Res_8                                    = 3,
	Res_16                                   = 4,
	Res_32                                   = 5,
	Res_64                                   = 6,
	Res_128                                  = 7,
	Res_256                                  = 8,
	Res_512                                  = 9,
	Res_1024                                 = 10,
	Res_2048                                 = 11,
	Res_4096                                 = 12,
	Res_Max                                  = 12,
	Maximum                                  = 13,
	EWaveTableResolution_MAX                 = 14,
};

enum class EWaveTableCurve : uint8
{
	Linear                                   = 0,
	Linear_Inv                               = 1,
	Exp                                      = 2,
	Exp_Inverse                              = 3,
	Log                                      = 4,
	Sin                                      = 5,
	Sin_Full                                 = 6,
	SCurve                                   = 7,
	Shared                                   = 8,
	Custom                                   = 9,
	File                                     = 10,
	Count                                    = 11,
	EWaveTableCurve_MAX                      = 12,
};

struct FWaveTableTransform
{
public:
	EWaveTableCurve                               Curve;
	uint8                                         Pad_1[0x3];
	float                                         Scalar;
	struct FRichCurve                             CurveCustom;
	class UCurveFloat*                            CurveShared;
	TArray<float>                                 WaveTable;
	float                                         FinalValue;
	uint8                                         Pad_A4[0x4];
};
static_assert(alignof(FWaveTableTransform) == 0x000008, "Wrong alignment on FWaveTableTransform");
static_assert(sizeof(FWaveTableTransform) == 0x0000A8, "Wrong size on FWaveTableTransform");
static_assert(offsetof(FWaveTableTransform, Curve) == 0x000000, "Member 'FWaveTableTransform::Curve' has a wrong offset!");
static_assert(offsetof(FWaveTableTransform, Scalar) == 0x000004, "Member 'FWaveTableTransform::Scalar' has a wrong offset!");
static_assert(offsetof(FWaveTableTransform, CurveCustom) == 0x000008, "Member 'FWaveTableTransform::CurveCustom' has a wrong offset!");
static_assert(offsetof(FWaveTableTransform, CurveShared) == 0x000088, "Member 'FWaveTableTransform::CurveShared' has a wrong offset!");
static_assert(offsetof(FWaveTableTransform, WaveTable) == 0x000090, "Member 'FWaveTableTransform::WaveTable' has a wrong offset!");
static_assert(offsetof(FWaveTableTransform, FinalValue) == 0x0000A0, "Member 'FWaveTableTransform::FinalValue' has a wrong offset!");

struct FWaveTableBankEntry final
{
public:
	struct FWaveTableTransform                    Transform;
};
static_assert(alignof(FWaveTableBankEntry) == 0x000008, "Wrong alignment on FWaveTableBankEntry");
static_assert(sizeof(FWaveTableBankEntry) == 0x0000A8, "Wrong size on FWaveTableBankEntry");
static_assert(offsetof(FWaveTableBankEntry, Transform) == 0x000000, "Member 'FWaveTableBankEntry::Transform' has a wrong offset!");

struct FWaveTableSettings final
{
public:
	struct FFilePath                              FilePath;
	int32                                         ChannelIndex;
	float                                         Phase;
	float                                         Top;
	float                                         Tail;
	float                                         FadeIn;
	float                                         FadeOut;
	bool                                          bNormalize;
	bool                                          bRemoveOffset;
	uint8                                         Pad_2A[0x6];
	TArray<float>                                 SourcePCMData;
};
static_assert(alignof(FWaveTableSettings) == 0x000008, "Wrong alignment on FWaveTableSettings");
static_assert(sizeof(FWaveTableSettings) == 0x000040, "Wrong size on FWaveTableSettings");
static_assert(offsetof(FWaveTableSettings, FilePath) == 0x000000, "Member 'FWaveTableSettings::FilePath' has a wrong offset!");
static_assert(offsetof(FWaveTableSettings, ChannelIndex) == 0x000010, "Member 'FWaveTableSettings::ChannelIndex' has a wrong offset!");
static_assert(offsetof(FWaveTableSettings, Phase) == 0x000014, "Member 'FWaveTableSettings::Phase' has a wrong offset!");
static_assert(offsetof(FWaveTableSettings, Top) == 0x000018, "Member 'FWaveTableSettings::Top' has a wrong offset!");
static_assert(offsetof(FWaveTableSettings, Tail) == 0x00001C, "Member 'FWaveTableSettings::Tail' has a wrong offset!");
static_assert(offsetof(FWaveTableSettings, FadeIn) == 0x000020, "Member 'FWaveTableSettings::FadeIn' has a wrong offset!");
static_assert(offsetof(FWaveTableSettings, FadeOut) == 0x000024, "Member 'FWaveTableSettings::FadeOut' has a wrong offset!");
static_assert(offsetof(FWaveTableSettings, bNormalize) == 0x000028, "Member 'FWaveTableSettings::bNormalize' has a wrong offset!");
static_assert(offsetof(FWaveTableSettings, bRemoveOffset) == 0x000029, "Member 'FWaveTableSettings::bRemoveOffset' has a wrong offset!");
static_assert(offsetof(FWaveTableSettings, SourcePCMData) == 0x000030, "Member 'FWaveTableSettings::SourcePCMData' has a wrong offset!");

}
