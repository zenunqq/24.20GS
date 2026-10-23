#pragma once

#include "Basic.hpp"

#include "LagerRuntime_classes.hpp"

namespace SDK
{

class ULagerManager_C final : public UFortAthenaLivingWorldManager
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"LagerManager_C">();
	}
	static class ULagerManager_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ULagerManager_C>();
	}
};
static_assert(alignof(ULagerManager_C) == 0x000010, "Wrong alignment on ULagerManager_C");
static_assert(sizeof(ULagerManager_C) == 0x000AC0, "Wrong size on ULagerManager_C");

}
