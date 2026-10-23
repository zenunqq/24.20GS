#pragma once

#include "Basic.hpp"

#include "FortniteGame_classes.hpp"

namespace SDK
{

class UFireSelfInteractHandler_C final : public UFortCurieElementInteractWithSameElementHandlerFire
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"FireSelfInteractHandler_C">();
	}
	static class UFireSelfInteractHandler_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFireSelfInteractHandler_C>();
	}
};
static_assert(alignof(UFireSelfInteractHandler_C) == 0x000008, "Wrong alignment on UFireSelfInteractHandler_C");
static_assert(sizeof(UFireSelfInteractHandler_C) == 0x000030, "Wrong size on UFireSelfInteractHandler_C");

}
