#pragma once

#include "Basic.hpp"

#include "FortniteGame_classes.hpp"

namespace SDK
{

class UDefaultAppActivationSoundMixManager_C final : public UFortAppActivationSoundMixManager
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"DefaultAppActivationSoundMixManager_C">();
	}
	static class UDefaultAppActivationSoundMixManager_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UDefaultAppActivationSoundMixManager_C>();
	}
};
static_assert(alignof(UDefaultAppActivationSoundMixManager_C) == 0x000008, "Wrong alignment on UDefaultAppActivationSoundMixManager_C");
static_assert(sizeof(UDefaultAppActivationSoundMixManager_C) == 0x000058, "Wrong size on UDefaultAppActivationSoundMixManager_C");

}
