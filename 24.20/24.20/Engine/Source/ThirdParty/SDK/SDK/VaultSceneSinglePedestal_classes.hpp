#pragma once

#include "Basic.hpp"

#include "FortniteUI_classes.hpp"

namespace SDK
{

class AVaultSceneSinglePedestal_C final : public AItemPreviewScene
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"VaultSceneSinglePedestal_C">();
	}
	static class AVaultSceneSinglePedestal_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AVaultSceneSinglePedestal_C>();
	}
};
static_assert(alignof(AVaultSceneSinglePedestal_C) == 0x000008, "Wrong alignment on AVaultSceneSinglePedestal_C");
static_assert(sizeof(AVaultSceneSinglePedestal_C) == 0x000358, "Wrong size on AVaultSceneSinglePedestal_C");

}
