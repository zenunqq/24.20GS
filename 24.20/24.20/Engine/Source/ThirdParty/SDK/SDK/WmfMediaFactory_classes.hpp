#pragma once

#include "Basic.hpp"

#include "CoreUObject_classes.hpp"

namespace SDK
{

class UWmfMediaSettings final : public UObject
{
public:
	bool                                          AllowNonStandardCodecs;
	bool                                          LowLatency;
	bool                                          NativeAudioOut;
	bool                                          HardwareAcceleratedVideoDecoding;
	uint8                                         Pad_2C[0x4];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"WmfMediaSettings">();
	}
	static class UWmfMediaSettings* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWmfMediaSettings>();
	}
};
static_assert(alignof(UWmfMediaSettings) == 0x000008, "Wrong alignment on UWmfMediaSettings");
static_assert(sizeof(UWmfMediaSettings) == 0x000030, "Wrong size on UWmfMediaSettings");
static_assert(offsetof(UWmfMediaSettings, AllowNonStandardCodecs) == 0x000028, "Member 'UWmfMediaSettings::AllowNonStandardCodecs' has a wrong offset!");
static_assert(offsetof(UWmfMediaSettings, LowLatency) == 0x000029, "Member 'UWmfMediaSettings::LowLatency' has a wrong offset!");
static_assert(offsetof(UWmfMediaSettings, NativeAudioOut) == 0x00002A, "Member 'UWmfMediaSettings::NativeAudioOut' has a wrong offset!");
static_assert(offsetof(UWmfMediaSettings, HardwareAcceleratedVideoDecoding) == 0x00002B, "Member 'UWmfMediaSettings::HardwareAcceleratedVideoDecoding' has a wrong offset!");

}
