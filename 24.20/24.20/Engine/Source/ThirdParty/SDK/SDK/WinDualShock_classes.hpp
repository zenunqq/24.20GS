#pragma once

#include "Basic.hpp"

#include "AudioExtensions_classes.hpp"

namespace SDK
{

class UDualShockExternalEndpointSettings final : public UAudioEndpointSettingsBase
{
public:
	int32                                         ControllerIndex;
	uint8                                         Pad_2C[0x4];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"DualShockExternalEndpointSettings">();
	}
	static class UDualShockExternalEndpointSettings* GetDefaultObj()
	{
		return GetDefaultObjImpl<UDualShockExternalEndpointSettings>();
	}
};
static_assert(alignof(UDualShockExternalEndpointSettings) == 0x000008, "Wrong alignment on UDualShockExternalEndpointSettings");
static_assert(sizeof(UDualShockExternalEndpointSettings) == 0x000030, "Wrong size on UDualShockExternalEndpointSettings");
static_assert(offsetof(UDualShockExternalEndpointSettings, ControllerIndex) == 0x000028, "Member 'UDualShockExternalEndpointSettings::ControllerIndex' has a wrong offset!");

class UDualShockSoundfieldEndpointSettings final : public USoundfieldEndpointSettingsBase
{
public:
	int32                                         ControllerIndex;
	uint8                                         Pad_2C[0x4];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"DualShockSoundfieldEndpointSettings">();
	}
	static class UDualShockSoundfieldEndpointSettings* GetDefaultObj()
	{
		return GetDefaultObjImpl<UDualShockSoundfieldEndpointSettings>();
	}
};
static_assert(alignof(UDualShockSoundfieldEndpointSettings) == 0x000008, "Wrong alignment on UDualShockSoundfieldEndpointSettings");
static_assert(sizeof(UDualShockSoundfieldEndpointSettings) == 0x000030, "Wrong size on UDualShockSoundfieldEndpointSettings");
static_assert(offsetof(UDualShockSoundfieldEndpointSettings, ControllerIndex) == 0x000028, "Member 'UDualShockSoundfieldEndpointSettings::ControllerIndex' has a wrong offset!");

class UDualShockSpatializationSettings final : public USoundfieldEncodingSettingsBase
{
public:
	float                                         Spread;
	int32                                         Priority;
	bool                                          PassThrough;
	uint8                                         Pad_31[0x7];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"DualShockSpatializationSettings">();
	}
	static class UDualShockSpatializationSettings* GetDefaultObj()
	{
		return GetDefaultObjImpl<UDualShockSpatializationSettings>();
	}
};
static_assert(alignof(UDualShockSpatializationSettings) == 0x000008, "Wrong alignment on UDualShockSpatializationSettings");
static_assert(sizeof(UDualShockSpatializationSettings) == 0x000038, "Wrong size on UDualShockSpatializationSettings");
static_assert(offsetof(UDualShockSpatializationSettings, Spread) == 0x000028, "Member 'UDualShockSpatializationSettings::Spread' has a wrong offset!");
static_assert(offsetof(UDualShockSpatializationSettings, Priority) == 0x00002C, "Member 'UDualShockSpatializationSettings::Priority' has a wrong offset!");
static_assert(offsetof(UDualShockSpatializationSettings, PassThrough) == 0x000030, "Member 'UDualShockSpatializationSettings::PassThrough' has a wrong offset!");

}
