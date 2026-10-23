#pragma once

#include "Basic.hpp"

#include "FortniteUI_classes.hpp"

namespace SDK
{

class UFortHoagieVehicleReticle final : public UFortAthenaVehicleDashboardWidget
{
public:
	class AFortHoagieVehicle*                     OwningHoagieVehicle;

public:
	void OnSetupComplete(bool bVehicleUsesFuelSystem);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortHoagieVehicleReticle">();
	}
	static class UFortHoagieVehicleReticle* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortHoagieVehicleReticle>();
	}
};
static_assert(alignof(UFortHoagieVehicleReticle) == 0x000008, "Wrong alignment on UFortHoagieVehicleReticle");
static_assert(sizeof(UFortHoagieVehicleReticle) == 0x000440, "Wrong size on UFortHoagieVehicleReticle");
static_assert(offsetof(UFortHoagieVehicleReticle, OwningHoagieVehicle) == 0x000438, "Member 'UFortHoagieVehicleReticle::OwningHoagieVehicle' has a wrong offset!");

}
