#pragma once

#include "Basic.hpp"

#include "CoreUObject_classes.hpp"

namespace SDK
{

class UVkInstallBundleRegistrar final : public UObject
{
public:
	uint8                                         Pad_28[0xA8];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"VkInstallBundleRegistrar">();
	}
	static class UVkInstallBundleRegistrar* GetDefaultObj()
	{
		return GetDefaultObjImpl<UVkInstallBundleRegistrar>();
	}
};
static_assert(alignof(UVkInstallBundleRegistrar) == 0x000008, "Wrong alignment on UVkInstallBundleRegistrar");
static_assert(sizeof(UVkInstallBundleRegistrar) == 0x0000D0, "Wrong size on UVkInstallBundleRegistrar");

}
