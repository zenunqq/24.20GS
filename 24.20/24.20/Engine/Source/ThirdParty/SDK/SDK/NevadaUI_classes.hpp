#pragma once

#include "Basic.hpp"

#include "UMG_structs.hpp"
#include "FortniteUI_classes.hpp"
#include "NevadaRuntime_structs.hpp"

namespace SDK
{

class UFortNevadaVehicleReticle final : public UFortAthenaVehicleDashboardWidget
{
public:
	TSubclassOf<class UNevadaTargetIndicator>     NevadaTargetIndicatorClass;
	class UNevadaTargetIndicator*                 TargetIndicator;
	class AFortNevadaVehicle*                     OwningNevadaVehicle;
	uint8                                         Pad_450[0x8];
	struct FUserWidgetPool                        IndicatorPool;

public:
	void OnBatteryChanged(float BatteryLevel);
	void OnEnergyCannonEnabledChanged(const bool bEnabled);
	void OnEnergyCanonFired(const float Cooldown);
	void OnTractorBeamActivated();
	void OnTractorBeamAttached();
	void OnTractorBeamChargeStarted();
	void OnTractorBeamDeactivated(const float Cooldown);
	void OnTractorBeamDetached();
	void OnTractorBeamEnabledChanged(const bool bEnabled);
	void OnVehicleStateChanged(const ENevadaFlightStates VehicleState);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortNevadaVehicleReticle">();
	}
	static class UFortNevadaVehicleReticle* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortNevadaVehicleReticle>();
	}
};
static_assert(alignof(UFortNevadaVehicleReticle) == 0x000008, "Wrong alignment on UFortNevadaVehicleReticle");
static_assert(sizeof(UFortNevadaVehicleReticle) == 0x0004E0, "Wrong size on UFortNevadaVehicleReticle");
static_assert(offsetof(UFortNevadaVehicleReticle, NevadaTargetIndicatorClass) == 0x000438, "Member 'UFortNevadaVehicleReticle::NevadaTargetIndicatorClass' has a wrong offset!");
static_assert(offsetof(UFortNevadaVehicleReticle, TargetIndicator) == 0x000440, "Member 'UFortNevadaVehicleReticle::TargetIndicator' has a wrong offset!");
static_assert(offsetof(UFortNevadaVehicleReticle, OwningNevadaVehicle) == 0x000448, "Member 'UFortNevadaVehicleReticle::OwningNevadaVehicle' has a wrong offset!");
static_assert(offsetof(UFortNevadaVehicleReticle, IndicatorPool) == 0x000458, "Member 'UFortNevadaVehicleReticle::IndicatorPool' has a wrong offset!");

class UNevadaTargetIndicator final : public UFortActorIndicatorWidget
{
public:
	void OnTractorBeamActivated(const bool bActivated);
	void OnTractorBeamAttached(const bool bAttached);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"NevadaTargetIndicator">();
	}
	static class UNevadaTargetIndicator* GetDefaultObj()
	{
		return GetDefaultObjImpl<UNevadaTargetIndicator>();
	}
};
static_assert(alignof(UNevadaTargetIndicator) == 0x000008, "Wrong alignment on UNevadaTargetIndicator");
static_assert(sizeof(UNevadaTargetIndicator) == 0x000378, "Wrong size on UNevadaTargetIndicator");

}
