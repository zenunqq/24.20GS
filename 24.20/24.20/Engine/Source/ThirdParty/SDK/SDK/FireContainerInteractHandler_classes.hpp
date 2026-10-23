#pragma once

#include "Basic.hpp"

#include "FortniteGame_classes.hpp"

namespace SDK
{

class UFireContainerInteractHandler_C final : public UFortCurieElementInteractWithContainerHandler
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"FireContainerInteractHandler_C">();
	}
	static class UFireContainerInteractHandler_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFireContainerInteractHandler_C>();
	}
};
static_assert(alignof(UFireContainerInteractHandler_C) == 0x000008, "Wrong alignment on UFireContainerInteractHandler_C");
static_assert(sizeof(UFireContainerInteractHandler_C) == 0x000090, "Wrong size on UFireContainerInteractHandler_C");

}
