#pragma once

#include "Basic.hpp"

#include "FortniteGame_classes.hpp"

namespace SDK
{

class UFireMaterialInteractHandler_C final : public UFortCurieElementInteractWithMaterialHandlerFire
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"FireMaterialInteractHandler_C">();
	}
	static class UFireMaterialInteractHandler_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFireMaterialInteractHandler_C>();
	}
};
static_assert(alignof(UFireMaterialInteractHandler_C) == 0x000008, "Wrong alignment on UFireMaterialInteractHandler_C");
static_assert(sizeof(UFireMaterialInteractHandler_C) == 0x000090, "Wrong size on UFireMaterialInteractHandler_C");

}
