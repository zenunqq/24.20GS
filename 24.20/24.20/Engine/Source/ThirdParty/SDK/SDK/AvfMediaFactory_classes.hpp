#pragma once

#include "Basic.hpp"

#include "CoreUObject_classes.hpp"

namespace SDK
{

class UAvfMediaSettings final : public UObject
{
public:
	bool                                          NativeAudioOut;
	uint8                                         Pad_29[0x7];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"AvfMediaSettings">();
	}
	static class UAvfMediaSettings* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAvfMediaSettings>();
	}
};
static_assert(alignof(UAvfMediaSettings) == 0x000008, "Wrong alignment on UAvfMediaSettings");
static_assert(sizeof(UAvfMediaSettings) == 0x000030, "Wrong size on UAvfMediaSettings");
static_assert(offsetof(UAvfMediaSettings, NativeAudioOut) == 0x000028, "Member 'UAvfMediaSettings::NativeAudioOut' has a wrong offset!");

}
