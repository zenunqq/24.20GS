#pragma once

#include "Basic.hpp"

#include "CoreUObject_classes.hpp"

namespace SDK
{

class UDiscordRuntimeSettings final : public UObject
{
public:
	bool                                          bEnableJoinSecrets;
	uint8                                         Pad_29[0x7];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"DiscordRuntimeSettings">();
	}
	static class UDiscordRuntimeSettings* GetDefaultObj()
	{
		return GetDefaultObjImpl<UDiscordRuntimeSettings>();
	}
};
static_assert(alignof(UDiscordRuntimeSettings) == 0x000008, "Wrong alignment on UDiscordRuntimeSettings");
static_assert(sizeof(UDiscordRuntimeSettings) == 0x000030, "Wrong size on UDiscordRuntimeSettings");
static_assert(offsetof(UDiscordRuntimeSettings, bEnableJoinSecrets) == 0x000028, "Member 'UDiscordRuntimeSettings::bEnableJoinSecrets' has a wrong offset!");

}
