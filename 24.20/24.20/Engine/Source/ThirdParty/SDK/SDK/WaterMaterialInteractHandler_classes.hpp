#pragma once

#include "Basic.hpp"

#include "FortniteGame_classes.hpp"

namespace SDK
{

class UWaterMaterialInteractHandler_C final : public UFortCurieElementInteractWithMaterialHandlerWater
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WaterMaterialInteractHandler_C">();
	}
	static class UWaterMaterialInteractHandler_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWaterMaterialInteractHandler_C>();
	}
};
static_assert(alignof(UWaterMaterialInteractHandler_C) == 0x000008, "Wrong alignment on UWaterMaterialInteractHandler_C");
static_assert(sizeof(UWaterMaterialInteractHandler_C) == 0x0000A0, "Wrong size on UWaterMaterialInteractHandler_C");

}
