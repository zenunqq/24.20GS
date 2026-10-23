#pragma once

#include "Basic.hpp"

#include "AudioExtensions_classes.hpp"

namespace SDK
{

class UAmbisonicsEncodingSettings final : public USoundfieldEncodingSettingsBase
{
public:
	int32                                         AmbisonicsOrder;
	uint8                                         Pad_2C[0x4];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"AmbisonicsEncodingSettings">();
	}
	static class UAmbisonicsEncodingSettings* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAmbisonicsEncodingSettings>();
	}
};
static_assert(alignof(UAmbisonicsEncodingSettings) == 0x000008, "Wrong alignment on UAmbisonicsEncodingSettings");
static_assert(sizeof(UAmbisonicsEncodingSettings) == 0x000030, "Wrong size on UAmbisonicsEncodingSettings");
static_assert(offsetof(UAmbisonicsEncodingSettings, AmbisonicsOrder) == 0x000028, "Member 'UAmbisonicsEncodingSettings::AmbisonicsOrder' has a wrong offset!");

}
