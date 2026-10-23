#pragma once

#include "Basic.hpp"

#include "AudioMixer_classes.hpp"
#include "Engine_structs.hpp"
#include "MotoSynth_structs.hpp"
#include "CoreUObject_classes.hpp"

namespace SDK
{

class UMotoSynthPreset final : public UObject
{
public:
	struct FMotoSynthRuntimeSettings              Settings;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"MotoSynthPreset">();
	}
	static class UMotoSynthPreset* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMotoSynthPreset>();
	}
};
static_assert(alignof(UMotoSynthPreset) == 0x000008, "Wrong alignment on UMotoSynthPreset");
static_assert(sizeof(UMotoSynthPreset) == 0x000160, "Wrong size on UMotoSynthPreset");
static_assert(offsetof(UMotoSynthPreset, Settings) == 0x000028, "Member 'UMotoSynthPreset::Settings' has a wrong offset!");

class UMotoSynthSource final : public UObject
{
public:
	bool                                          bConvertTo8Bit;
	uint8                                         Pad_29[0x3];
	float                                         DownSampleFactor;
	struct FRuntimeFloatCurve                     RpmCurve;
	TArray<float>                                 SourceData;
	TArray<int16>                                 SourceDataPCM;
	int32                                         SourceSampleRate;
	uint8                                         Pad_DC[0x4];
	TArray<struct FGrainTableEntry>               GrainTable;
	uint8                                         Pad_F0[0x8];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"MotoSynthSource">();
	}
	static class UMotoSynthSource* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMotoSynthSource>();
	}
};
static_assert(alignof(UMotoSynthSource) == 0x000008, "Wrong alignment on UMotoSynthSource");
static_assert(sizeof(UMotoSynthSource) == 0x0000F8, "Wrong size on UMotoSynthSource");
static_assert(offsetof(UMotoSynthSource, bConvertTo8Bit) == 0x000028, "Member 'UMotoSynthSource::bConvertTo8Bit' has a wrong offset!");
static_assert(offsetof(UMotoSynthSource, DownSampleFactor) == 0x00002C, "Member 'UMotoSynthSource::DownSampleFactor' has a wrong offset!");
static_assert(offsetof(UMotoSynthSource, RpmCurve) == 0x000030, "Member 'UMotoSynthSource::RpmCurve' has a wrong offset!");
static_assert(offsetof(UMotoSynthSource, SourceData) == 0x0000B8, "Member 'UMotoSynthSource::SourceData' has a wrong offset!");
static_assert(offsetof(UMotoSynthSource, SourceDataPCM) == 0x0000C8, "Member 'UMotoSynthSource::SourceDataPCM' has a wrong offset!");
static_assert(offsetof(UMotoSynthSource, SourceSampleRate) == 0x0000D8, "Member 'UMotoSynthSource::SourceSampleRate' has a wrong offset!");
static_assert(offsetof(UMotoSynthSource, GrainTable) == 0x0000E0, "Member 'UMotoSynthSource::GrainTable' has a wrong offset!");

class USynthComponentMoto : public USynthComponent
{
public:
	class UMotoSynthPreset*                       MotoSynthPreset;
	float                                         RPM;
	uint8                                         Pad_92C[0x194];

public:
	void GetRPMRange(float* OutMinRPM, float* OutMaxRPM);
	void SetRPM(float InRPM, float InTimeSec);
	void SetSettings(const struct FMotoSynthRuntimeSettings& InSettings);

	bool IsEnabled() const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"SynthComponentMoto">();
	}
	static class USynthComponentMoto* GetDefaultObj()
	{
		return GetDefaultObjImpl<USynthComponentMoto>();
	}
};
static_assert(alignof(USynthComponentMoto) == 0x000010, "Wrong alignment on USynthComponentMoto");
static_assert(sizeof(USynthComponentMoto) == 0x000AC0, "Wrong size on USynthComponentMoto");
static_assert(offsetof(USynthComponentMoto, MotoSynthPreset) == 0x000920, "Member 'USynthComponentMoto::MotoSynthPreset' has a wrong offset!");
static_assert(offsetof(USynthComponentMoto, RPM) == 0x000928, "Member 'USynthComponentMoto::RPM' has a wrong offset!");

}
