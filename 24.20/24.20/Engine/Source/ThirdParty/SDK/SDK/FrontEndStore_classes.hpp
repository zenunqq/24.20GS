#pragma once

#include "Basic.hpp"

#include "FortniteGame_classes.hpp"

namespace SDK
{

class AFrontEndStore_C final : public AFortLevelScriptActor
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"FrontEndStore_C">();
	}
	static class AFrontEndStore_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AFrontEndStore_C>();
	}
};
static_assert(alignof(AFrontEndStore_C) == 0x000008, "Wrong alignment on AFrontEndStore_C");
static_assert(sizeof(AFrontEndStore_C) == 0x0002A0, "Wrong size on AFrontEndStore_C");

}
