#pragma once

#include "Basic.hpp"

#include "DynamicUI_classes.hpp"

namespace SDK
{

class ADynamicAthenaHUDDirector final : public ADynamicUIDirectorBase
{
public:
	class UDynamicUIScene*                        VehicleHUDScene;
	class UDynamicUIScene*                        CreativeQuickbarScene;

public:
	void HandleCreativeQuickbarEquippedChanged(bool bIsQuickbarEquipped);
	void HandleEnteringVehicle();
	void HandleExitingVehicle();

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"DynamicAthenaHUDDirector">();
	}
	static class ADynamicAthenaHUDDirector* GetDefaultObj()
	{
		return GetDefaultObjImpl<ADynamicAthenaHUDDirector>();
	}
};
static_assert(alignof(ADynamicAthenaHUDDirector) == 0x000008, "Wrong alignment on ADynamicAthenaHUDDirector");
static_assert(sizeof(ADynamicAthenaHUDDirector) == 0x0002C8, "Wrong size on ADynamicAthenaHUDDirector");
static_assert(offsetof(ADynamicAthenaHUDDirector, VehicleHUDScene) == 0x0002B8, "Member 'ADynamicAthenaHUDDirector::VehicleHUDScene' has a wrong offset!");
static_assert(offsetof(ADynamicAthenaHUDDirector, CreativeQuickbarScene) == 0x0002C0, "Member 'ADynamicAthenaHUDDirector::CreativeQuickbarScene' has a wrong offset!");

}
