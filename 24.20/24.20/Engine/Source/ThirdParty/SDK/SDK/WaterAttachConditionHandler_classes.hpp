#pragma once

#include "Basic.hpp"

#include "FortniteGame_classes.hpp"

namespace SDK
{

class UWaterAttachConditionHandler_C final : public UFortCurieElementAttachConditionHandlerWater
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WaterAttachConditionHandler_C">();
	}
	static class UWaterAttachConditionHandler_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWaterAttachConditionHandler_C>();
	}
};
static_assert(alignof(UWaterAttachConditionHandler_C) == 0x000008, "Wrong alignment on UWaterAttachConditionHandler_C");
static_assert(sizeof(UWaterAttachConditionHandler_C) == 0x000040, "Wrong size on UWaterAttachConditionHandler_C");

}
