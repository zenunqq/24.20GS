#pragma once

#include "Basic.hpp"

#include "FortniteGame_classes.hpp"

namespace SDK
{

class UFireAllocationHandler_C final : public UFortCurieElementAllocationHandlerFire
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"FireAllocationHandler_C">();
	}
	static class UFireAllocationHandler_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFireAllocationHandler_C>();
	}
};
static_assert(alignof(UFireAllocationHandler_C) == 0x000008, "Wrong alignment on UFireAllocationHandler_C");
static_assert(sizeof(UFireAllocationHandler_C) == 0x000028, "Wrong size on UFireAllocationHandler_C");

}
