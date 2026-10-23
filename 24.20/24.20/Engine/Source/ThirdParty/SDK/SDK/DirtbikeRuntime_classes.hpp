#pragma once

#include "Basic.hpp"

#include "MotorcycleRuntime_classes.hpp"

namespace SDK
{

class AFortDirtbikeVehicle final : public AFortMotorcycleVehicle
{
public:
	uint8                                         Pad_1F80[0x10];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortDirtbikeVehicle">();
	}
	static class AFortDirtbikeVehicle* GetDefaultObj()
	{
		return GetDefaultObjImpl<AFortDirtbikeVehicle>();
	}
};
static_assert(alignof(AFortDirtbikeVehicle) == 0x000010, "Wrong alignment on AFortDirtbikeVehicle");
static_assert(sizeof(AFortDirtbikeVehicle) == 0x001F90, "Wrong size on AFortDirtbikeVehicle");

class UFortDirtbikeVehicleConfigs final : public UFortMotorcycleVehicleConfigs
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortDirtbikeVehicleConfigs">();
	}
	static class UFortDirtbikeVehicleConfigs* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortDirtbikeVehicleConfigs>();
	}
};
static_assert(alignof(UFortDirtbikeVehicleConfigs) == 0x000008, "Wrong alignment on UFortDirtbikeVehicleConfigs");
static_assert(sizeof(UFortDirtbikeVehicleConfigs) == 0x000B78, "Wrong size on UFortDirtbikeVehicleConfigs");

}
