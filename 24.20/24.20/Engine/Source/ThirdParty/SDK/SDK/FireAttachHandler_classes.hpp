#pragma once

#include "Basic.hpp"

#include "FortniteGame_classes.hpp"

namespace SDK
{

class UFireAttachHandler_C final : public UFortCurieElementAttachHandlerFire
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"FireAttachHandler_C">();
	}
	static class UFireAttachHandler_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFireAttachHandler_C>();
	}
};
static_assert(alignof(UFireAttachHandler_C) == 0x000008, "Wrong alignment on UFireAttachHandler_C");
static_assert(sizeof(UFireAttachHandler_C) == 0x000090, "Wrong size on UFireAttachHandler_C");

}
