#pragma once

#include "Basic.hpp"

#include "AudioMixer_classes.hpp"
#include "CoreUObject_classes.hpp"

namespace SDK
{

class UREVComponent final : public USynthComponent
{
public:
	uint8                                         Pad_920[0x8];
	class UREVModel*                              Model;
	class URevSettings*                           SimSettings;
	float                                         PitchMultiplier;
	uint8                                         Pad_93C[0x14];

public:
	void SetRevModel(class UREVModel* InModel);
	void SetSettings(class URevSettings* InSettings);
	void UpdateParameters(const float InPitch, const float InRPM, const float InThrottle, const float InVelocity, const int32 InGear, const bool bInEnableShifting);
	void UpdateSimSettings();

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"REVComponent">();
	}
	static class UREVComponent* GetDefaultObj()
	{
		return GetDefaultObjImpl<UREVComponent>();
	}
};
static_assert(alignof(UREVComponent) == 0x000010, "Wrong alignment on UREVComponent");
static_assert(sizeof(UREVComponent) == 0x000950, "Wrong size on UREVComponent");
static_assert(offsetof(UREVComponent, Model) == 0x000928, "Member 'UREVComponent::Model' has a wrong offset!");
static_assert(offsetof(UREVComponent, SimSettings) == 0x000930, "Member 'UREVComponent::SimSettings' has a wrong offset!");
static_assert(offsetof(UREVComponent, PitchMultiplier) == 0x000938, "Member 'UREVComponent::PitchMultiplier' has a wrong offset!");

class UREVModel final : public UObject
{
public:
	uint8                                         Pad_28[0x30];
	float                                         SampleRate;
	int32                                         NumChannels;
	uint8                                         Pad_60[0x10];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"REVModel">();
	}
	static class UREVModel* GetDefaultObj()
	{
		return GetDefaultObjImpl<UREVModel>();
	}
};
static_assert(alignof(UREVModel) == 0x000008, "Wrong alignment on UREVModel");
static_assert(sizeof(UREVModel) == 0x000070, "Wrong size on UREVModel");
static_assert(offsetof(UREVModel, SampleRate) == 0x000058, "Member 'UREVModel::SampleRate' has a wrong offset!");
static_assert(offsetof(UREVModel, NumChannels) == 0x00005C, "Member 'UREVModel::NumChannels' has a wrong offset!");

class URevSettings final : public UObject
{
public:
	uint8                                         Pad_28[0x8];
	float                                         UpShiftDuration;
	float                                         UpShiftAttackDuration;
	float                                         UpShiftAttackVolumeSpike;
	float                                         UpShiftAttackRPM;
	float                                         UpShiftAttackThrottleTime;
	float                                         UpShiftWobblePitchFreq;
	float                                         UpShiftWobblePitchAmp;
	bool                                          UpShiftWobbleEnabled;
	uint8                                         Pad_4D[0x3];
	float                                         UpShiftWobbleVolFreq;
	float                                         UpShiftWobbleVolAmp;
	float                                         UpShiftWobbleDuration;
	float                                         DownShiftDuration;
	float                                         PopDuration;
	float                                         ClutchRPMSpike;
	float                                         ClutchRPMSpikeDuration;
	float                                         ClutchRPMMergeTime;
	uint8                                         Pad_70[0x10];

public:
	void UpdateSettings();

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"RevSettings">();
	}
	static class URevSettings* GetDefaultObj()
	{
		return GetDefaultObjImpl<URevSettings>();
	}
};
static_assert(alignof(URevSettings) == 0x000008, "Wrong alignment on URevSettings");
static_assert(sizeof(URevSettings) == 0x000080, "Wrong size on URevSettings");
static_assert(offsetof(URevSettings, UpShiftDuration) == 0x000030, "Member 'URevSettings::UpShiftDuration' has a wrong offset!");
static_assert(offsetof(URevSettings, UpShiftAttackDuration) == 0x000034, "Member 'URevSettings::UpShiftAttackDuration' has a wrong offset!");
static_assert(offsetof(URevSettings, UpShiftAttackVolumeSpike) == 0x000038, "Member 'URevSettings::UpShiftAttackVolumeSpike' has a wrong offset!");
static_assert(offsetof(URevSettings, UpShiftAttackRPM) == 0x00003C, "Member 'URevSettings::UpShiftAttackRPM' has a wrong offset!");
static_assert(offsetof(URevSettings, UpShiftAttackThrottleTime) == 0x000040, "Member 'URevSettings::UpShiftAttackThrottleTime' has a wrong offset!");
static_assert(offsetof(URevSettings, UpShiftWobblePitchFreq) == 0x000044, "Member 'URevSettings::UpShiftWobblePitchFreq' has a wrong offset!");
static_assert(offsetof(URevSettings, UpShiftWobblePitchAmp) == 0x000048, "Member 'URevSettings::UpShiftWobblePitchAmp' has a wrong offset!");
static_assert(offsetof(URevSettings, UpShiftWobbleEnabled) == 0x00004C, "Member 'URevSettings::UpShiftWobbleEnabled' has a wrong offset!");
static_assert(offsetof(URevSettings, UpShiftWobbleVolFreq) == 0x000050, "Member 'URevSettings::UpShiftWobbleVolFreq' has a wrong offset!");
static_assert(offsetof(URevSettings, UpShiftWobbleVolAmp) == 0x000054, "Member 'URevSettings::UpShiftWobbleVolAmp' has a wrong offset!");
static_assert(offsetof(URevSettings, UpShiftWobbleDuration) == 0x000058, "Member 'URevSettings::UpShiftWobbleDuration' has a wrong offset!");
static_assert(offsetof(URevSettings, DownShiftDuration) == 0x00005C, "Member 'URevSettings::DownShiftDuration' has a wrong offset!");
static_assert(offsetof(URevSettings, PopDuration) == 0x000060, "Member 'URevSettings::PopDuration' has a wrong offset!");
static_assert(offsetof(URevSettings, ClutchRPMSpike) == 0x000064, "Member 'URevSettings::ClutchRPMSpike' has a wrong offset!");
static_assert(offsetof(URevSettings, ClutchRPMSpikeDuration) == 0x000068, "Member 'URevSettings::ClutchRPMSpikeDuration' has a wrong offset!");
static_assert(offsetof(URevSettings, ClutchRPMMergeTime) == 0x00006C, "Member 'URevSettings::ClutchRPMMergeTime' has a wrong offset!");

}
