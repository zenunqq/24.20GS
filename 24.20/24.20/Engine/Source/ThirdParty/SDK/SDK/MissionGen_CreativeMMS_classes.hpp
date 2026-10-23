#pragma once

#include "Basic.hpp"

#include "FortniteGame_classes.hpp"

namespace SDK
{

class UMissionGen_CreativeMMS_C final : public UFortMissionGenerator
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"MissionGen_CreativeMMS_C">();
	}
	static class UMissionGen_CreativeMMS_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMissionGen_CreativeMMS_C>();
	}
};
static_assert(alignof(UMissionGen_CreativeMMS_C) == 0x000010, "Wrong alignment on UMissionGen_CreativeMMS_C");
static_assert(sizeof(UMissionGen_CreativeMMS_C) == 0x000850, "Wrong size on UMissionGen_CreativeMMS_C");

}
