#pragma once

#include "Basic.hpp"

#include "CoreUObject_classes.hpp"
#include "Engine_classes.hpp"

namespace SDK
{

class UAudioAnalyzerAssetBase : public UObject
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"AudioAnalyzerAssetBase">();
	}
	static class UAudioAnalyzerAssetBase* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAudioAnalyzerAssetBase>();
	}
};
static_assert(alignof(UAudioAnalyzerAssetBase) == 0x000008, "Wrong alignment on UAudioAnalyzerAssetBase");
static_assert(sizeof(UAudioAnalyzerAssetBase) == 0x000028, "Wrong size on UAudioAnalyzerAssetBase");

class UAudioAnalyzerSettings : public UAudioAnalyzerAssetBase
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"AudioAnalyzerSettings">();
	}
	static class UAudioAnalyzerSettings* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAudioAnalyzerSettings>();
	}
};
static_assert(alignof(UAudioAnalyzerSettings) == 0x000008, "Wrong alignment on UAudioAnalyzerSettings");
static_assert(sizeof(UAudioAnalyzerSettings) == 0x000028, "Wrong size on UAudioAnalyzerSettings");

class UAudioAnalyzer : public UObject
{
public:
	class UAudioBus*                              AudioBus;
	uint8                                         Pad_30[0x8];
	class UAudioAnalyzerSubsystem*                AudioAnalyzerSubsystem;
	uint8                                         Pad_40[0x50];

public:
	void StartAnalyzing(const class UObject* WorldContextObject, class UAudioBus* AudioBusToAnalyze);
	void StopAnalyzing(const class UObject* WorldContextObject);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"AudioAnalyzer">();
	}
	static class UAudioAnalyzer* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAudioAnalyzer>();
	}
};
static_assert(alignof(UAudioAnalyzer) == 0x000008, "Wrong alignment on UAudioAnalyzer");
static_assert(sizeof(UAudioAnalyzer) == 0x000090, "Wrong size on UAudioAnalyzer");
static_assert(offsetof(UAudioAnalyzer, AudioBus) == 0x000028, "Member 'UAudioAnalyzer::AudioBus' has a wrong offset!");
static_assert(offsetof(UAudioAnalyzer, AudioAnalyzerSubsystem) == 0x000038, "Member 'UAudioAnalyzer::AudioAnalyzerSubsystem' has a wrong offset!");

class UAudioAnalyzerNRTSettings : public UAudioAnalyzerAssetBase
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"AudioAnalyzerNRTSettings">();
	}
	static class UAudioAnalyzerNRTSettings* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAudioAnalyzerNRTSettings>();
	}
};
static_assert(alignof(UAudioAnalyzerNRTSettings) == 0x000008, "Wrong alignment on UAudioAnalyzerNRTSettings");
static_assert(sizeof(UAudioAnalyzerNRTSettings) == 0x000028, "Wrong size on UAudioAnalyzerNRTSettings");

class UAudioAnalyzerNRT : public UAudioAnalyzerAssetBase
{
public:
	class USoundWave*                             sound;
	float                                         DurationInSeconds;
	uint8                                         Pad_34[0x44];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"AudioAnalyzerNRT">();
	}
	static class UAudioAnalyzerNRT* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAudioAnalyzerNRT>();
	}
};
static_assert(alignof(UAudioAnalyzerNRT) == 0x000008, "Wrong alignment on UAudioAnalyzerNRT");
static_assert(sizeof(UAudioAnalyzerNRT) == 0x000078, "Wrong size on UAudioAnalyzerNRT");
static_assert(offsetof(UAudioAnalyzerNRT, sound) == 0x000028, "Member 'UAudioAnalyzerNRT::sound' has a wrong offset!");
static_assert(offsetof(UAudioAnalyzerNRT, DurationInSeconds) == 0x000030, "Member 'UAudioAnalyzerNRT::DurationInSeconds' has a wrong offset!");

class UAudioAnalyzerSubsystem final : public UEngineSubsystem
{
public:
	TArray<class UAudioAnalyzer*>                 AudioAnalyzers;
	uint8                                         Pad_40[0x10];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"AudioAnalyzerSubsystem">();
	}
	static class UAudioAnalyzerSubsystem* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAudioAnalyzerSubsystem>();
	}
};
static_assert(alignof(UAudioAnalyzerSubsystem) == 0x000008, "Wrong alignment on UAudioAnalyzerSubsystem");
static_assert(sizeof(UAudioAnalyzerSubsystem) == 0x000050, "Wrong size on UAudioAnalyzerSubsystem");
static_assert(offsetof(UAudioAnalyzerSubsystem, AudioAnalyzers) == 0x000030, "Member 'UAudioAnalyzerSubsystem::AudioAnalyzers' has a wrong offset!");

}
