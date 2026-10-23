#pragma once

#include "Basic.hpp"

#include "CoreUObject_classes.hpp"

namespace SDK
{

class UAudioLinkSettingsAbstract final : public UObject
{
public:
	uint8                                         Pad_28[0x10];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"AudioLinkSettingsAbstract">();
	}
	static class UAudioLinkSettingsAbstract* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAudioLinkSettingsAbstract>();
	}
};
static_assert(alignof(UAudioLinkSettingsAbstract) == 0x000008, "Wrong alignment on UAudioLinkSettingsAbstract");
static_assert(sizeof(UAudioLinkSettingsAbstract) == 0x000038, "Wrong size on UAudioLinkSettingsAbstract");

}
