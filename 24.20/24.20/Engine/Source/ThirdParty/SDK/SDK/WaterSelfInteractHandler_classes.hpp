#pragma once

#include "Basic.hpp"

#include "FortniteGame_classes.hpp"

namespace SDK
{

class UWaterSelfInteractHandler_C final : public UFortCurieElementInteractWithSameElementHandler
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WaterSelfInteractHandler_C">();
	}
	static class UWaterSelfInteractHandler_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWaterSelfInteractHandler_C>();
	}
};
static_assert(alignof(UWaterSelfInteractHandler_C) == 0x000008, "Wrong alignment on UWaterSelfInteractHandler_C");
static_assert(sizeof(UWaterSelfInteractHandler_C) == 0x000030, "Wrong size on UWaterSelfInteractHandler_C");

}
