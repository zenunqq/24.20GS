#pragma once

#include "Basic.hpp"

#include "Engine_classes.hpp"

namespace SDK
{

class UValkyrieExternalContentLoader final : public UEngineSubsystem
{
public:
	uint8                                         Pad_30[0x18];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"ValkyrieExternalContentLoader">();
	}
	static class UValkyrieExternalContentLoader* GetDefaultObj()
	{
		return GetDefaultObjImpl<UValkyrieExternalContentLoader>();
	}
};
static_assert(alignof(UValkyrieExternalContentLoader) == 0x000008, "Wrong alignment on UValkyrieExternalContentLoader");
static_assert(sizeof(UValkyrieExternalContentLoader) == 0x000048, "Wrong size on UValkyrieExternalContentLoader");

}
