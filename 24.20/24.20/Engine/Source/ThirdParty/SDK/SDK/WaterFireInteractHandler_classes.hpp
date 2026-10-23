#pragma once

#include "Basic.hpp"

#include "FortniteGame_classes.hpp"

namespace SDK
{

class UWaterFireInteractHandler_C final : public UFortCurieElementInteractWithElementHandler
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WaterFireInteractHandler_C">();
	}
	static class UWaterFireInteractHandler_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWaterFireInteractHandler_C>();
	}
};
static_assert(alignof(UWaterFireInteractHandler_C) == 0x000008, "Wrong alignment on UWaterFireInteractHandler_C");
static_assert(sizeof(UWaterFireInteractHandler_C) == 0x000080, "Wrong size on UWaterFireInteractHandler_C");

}
