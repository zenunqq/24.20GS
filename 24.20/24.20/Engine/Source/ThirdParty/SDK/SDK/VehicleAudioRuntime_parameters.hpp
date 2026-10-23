#pragma once

#include "Basic.hpp"

#include "PhysicsCore_structs.hpp"

namespace SDK::Params
{

struct VehicleAudioLifecycleInterface_OnUpdate final
{
public:
	float                                         DeltaSeconds;
};
static_assert(alignof(VehicleAudioLifecycleInterface_OnUpdate) == 0x000004, "Wrong alignment on VehicleAudioLifecycleInterface_OnUpdate");
static_assert(sizeof(VehicleAudioLifecycleInterface_OnUpdate) == 0x000004, "Wrong size on VehicleAudioLifecycleInterface_OnUpdate");
static_assert(offsetof(VehicleAudioLifecycleInterface_OnUpdate, DeltaSeconds) == 0x000000, "Member 'VehicleAudioLifecycleInterface_OnUpdate::DeltaSeconds' has a wrong offset!");

struct FortVehicleAudioController_SetLayeredAudioComponent final
{
public:
	class UFortLayeredAudioComponent*             InComponent;
};
static_assert(alignof(FortVehicleAudioController_SetLayeredAudioComponent) == 0x000008, "Wrong alignment on FortVehicleAudioController_SetLayeredAudioComponent");
static_assert(sizeof(FortVehicleAudioController_SetLayeredAudioComponent) == 0x000008, "Wrong size on FortVehicleAudioController_SetLayeredAudioComponent");
static_assert(offsetof(FortVehicleAudioController_SetLayeredAudioComponent, InComponent) == 0x000000, "Member 'FortVehicleAudioController_SetLayeredAudioComponent::InComponent' has a wrong offset!");

struct FortVehicleAudioController_SetRedlineActive final
{
public:
	bool                                          bEnabled;
};
static_assert(alignof(FortVehicleAudioController_SetRedlineActive) == 0x000001, "Wrong alignment on FortVehicleAudioController_SetRedlineActive");
static_assert(sizeof(FortVehicleAudioController_SetRedlineActive) == 0x000001, "Wrong size on FortVehicleAudioController_SetRedlineActive");
static_assert(offsetof(FortVehicleAudioController_SetRedlineActive, bEnabled) == 0x000000, "Member 'FortVehicleAudioController_SetRedlineActive::bEnabled' has a wrong offset!");

struct FortVehicleAudioController_SetVehicle final
{
public:
	class AFortAthenaVehicle*                     InVehicle;
};
static_assert(alignof(FortVehicleAudioController_SetVehicle) == 0x000008, "Wrong alignment on FortVehicleAudioController_SetVehicle");
static_assert(sizeof(FortVehicleAudioController_SetVehicle) == 0x000008, "Wrong size on FortVehicleAudioController_SetVehicle");
static_assert(offsetof(FortVehicleAudioController_SetVehicle, InVehicle) == 0x000000, "Member 'FortVehicleAudioController_SetVehicle::InVehicle' has a wrong offset!");

struct FortVehicleAudioController_Update final
{
public:
	float                                         DeltaSeconds;
};
static_assert(alignof(FortVehicleAudioController_Update) == 0x000004, "Wrong alignment on FortVehicleAudioController_Update");
static_assert(sizeof(FortVehicleAudioController_Update) == 0x000004, "Wrong size on FortVehicleAudioController_Update");
static_assert(offsetof(FortVehicleAudioController_Update, DeltaSeconds) == 0x000000, "Member 'FortVehicleAudioController_Update::DeltaSeconds' has a wrong offset!");

struct FortVehicleAudioController_UpdateMotorModelNative final
{
public:
	float                                         DeltaSeconds;
};
static_assert(alignof(FortVehicleAudioController_UpdateMotorModelNative) == 0x000004, "Wrong alignment on FortVehicleAudioController_UpdateMotorModelNative");
static_assert(sizeof(FortVehicleAudioController_UpdateMotorModelNative) == 0x000004, "Wrong size on FortVehicleAudioController_UpdateMotorModelNative");
static_assert(offsetof(FortVehicleAudioController_UpdateMotorModelNative, DeltaSeconds) == 0x000000, "Member 'FortVehicleAudioController_UpdateMotorModelNative::DeltaSeconds' has a wrong offset!");

struct FortVehicleAudioController_GetAudioMotorModelComponent final
{
public:
	class UAudioMotorModelComponent*              ReturnValue;
};
static_assert(alignof(FortVehicleAudioController_GetAudioMotorModelComponent) == 0x000008, "Wrong alignment on FortVehicleAudioController_GetAudioMotorModelComponent");
static_assert(sizeof(FortVehicleAudioController_GetAudioMotorModelComponent) == 0x000008, "Wrong size on FortVehicleAudioController_GetAudioMotorModelComponent");
static_assert(offsetof(FortVehicleAudioController_GetAudioMotorModelComponent, ReturnValue) == 0x000000, "Member 'FortVehicleAudioController_GetAudioMotorModelComponent::ReturnValue' has a wrong offset!");

struct FortVehicleAudioController_GetAudioParameterComponent final
{
public:
	class UAudioParameterComponent*               ReturnValue;
};
static_assert(alignof(FortVehicleAudioController_GetAudioParameterComponent) == 0x000008, "Wrong alignment on FortVehicleAudioController_GetAudioParameterComponent");
static_assert(sizeof(FortVehicleAudioController_GetAudioParameterComponent) == 0x000008, "Wrong size on FortVehicleAudioController_GetAudioParameterComponent");
static_assert(offsetof(FortVehicleAudioController_GetAudioParameterComponent, ReturnValue) == 0x000000, "Member 'FortVehicleAudioController_GetAudioParameterComponent::ReturnValue' has a wrong offset!");

struct FortVehicleAudioController_GetBrakingNative final
{
public:
	float                                         ReturnValue;
};
static_assert(alignof(FortVehicleAudioController_GetBrakingNative) == 0x000004, "Wrong alignment on FortVehicleAudioController_GetBrakingNative");
static_assert(sizeof(FortVehicleAudioController_GetBrakingNative) == 0x000004, "Wrong size on FortVehicleAudioController_GetBrakingNative");
static_assert(offsetof(FortVehicleAudioController_GetBrakingNative, ReturnValue) == 0x000000, "Member 'FortVehicleAudioController_GetBrakingNative::ReturnValue' has a wrong offset!");

struct FortVehicleAudioController_GetJitterTime final
{
public:
	float                                         ReturnValue;
};
static_assert(alignof(FortVehicleAudioController_GetJitterTime) == 0x000004, "Wrong alignment on FortVehicleAudioController_GetJitterTime");
static_assert(sizeof(FortVehicleAudioController_GetJitterTime) == 0x000004, "Wrong size on FortVehicleAudioController_GetJitterTime");
static_assert(offsetof(FortVehicleAudioController_GetJitterTime, ReturnValue) == 0x000000, "Member 'FortVehicleAudioController_GetJitterTime::ReturnValue' has a wrong offset!");

struct FortVehicleAudioController_GetLayeredAudioComponent final
{
public:
	class UFortLayeredAudioComponent*             ReturnValue;
};
static_assert(alignof(FortVehicleAudioController_GetLayeredAudioComponent) == 0x000008, "Wrong alignment on FortVehicleAudioController_GetLayeredAudioComponent");
static_assert(sizeof(FortVehicleAudioController_GetLayeredAudioComponent) == 0x000008, "Wrong size on FortVehicleAudioController_GetLayeredAudioComponent");
static_assert(offsetof(FortVehicleAudioController_GetLayeredAudioComponent, ReturnValue) == 0x000000, "Member 'FortVehicleAudioController_GetLayeredAudioComponent::ReturnValue' has a wrong offset!");

struct FortVehicleAudioController_GetPhysicsVehicleConfigs final
{
public:
	const class UFortPhysicsVehicleConfigs*       ReturnValue;
};
static_assert(alignof(FortVehicleAudioController_GetPhysicsVehicleConfigs) == 0x000008, "Wrong alignment on FortVehicleAudioController_GetPhysicsVehicleConfigs");
static_assert(sizeof(FortVehicleAudioController_GetPhysicsVehicleConfigs) == 0x000008, "Wrong size on FortVehicleAudioController_GetPhysicsVehicleConfigs");
static_assert(offsetof(FortVehicleAudioController_GetPhysicsVehicleConfigs, ReturnValue) == 0x000000, "Member 'FortVehicleAudioController_GetPhysicsVehicleConfigs::ReturnValue' has a wrong offset!");

struct FortVehicleAudioController_GetRedlineActive final
{
public:
	bool                                          ReturnValue;
};
static_assert(alignof(FortVehicleAudioController_GetRedlineActive) == 0x000001, "Wrong alignment on FortVehicleAudioController_GetRedlineActive");
static_assert(sizeof(FortVehicleAudioController_GetRedlineActive) == 0x000001, "Wrong size on FortVehicleAudioController_GetRedlineActive");
static_assert(offsetof(FortVehicleAudioController_GetRedlineActive, ReturnValue) == 0x000000, "Member 'FortVehicleAudioController_GetRedlineActive::ReturnValue' has a wrong offset!");

struct FortVehicleAudioController_GetREVComponent final
{
public:
	class UREVComponent*                          ReturnValue;
};
static_assert(alignof(FortVehicleAudioController_GetREVComponent) == 0x000008, "Wrong alignment on FortVehicleAudioController_GetREVComponent");
static_assert(sizeof(FortVehicleAudioController_GetREVComponent) == 0x000008, "Wrong size on FortVehicleAudioController_GetREVComponent");
static_assert(offsetof(FortVehicleAudioController_GetREVComponent, ReturnValue) == 0x000000, "Member 'FortVehicleAudioController_GetREVComponent::ReturnValue' has a wrong offset!");

struct FortVehicleAudioController_GetThrottleNative final
{
public:
	float                                         ReturnValue;
};
static_assert(alignof(FortVehicleAudioController_GetThrottleNative) == 0x000004, "Wrong alignment on FortVehicleAudioController_GetThrottleNative");
static_assert(sizeof(FortVehicleAudioController_GetThrottleNative) == 0x000004, "Wrong size on FortVehicleAudioController_GetThrottleNative");
static_assert(offsetof(FortVehicleAudioController_GetThrottleNative, ReturnValue) == 0x000000, "Member 'FortVehicleAudioController_GetThrottleNative::ReturnValue' has a wrong offset!");

struct FortVehicleAudioController_GetVehicleActor final
{
public:
	class AFortAthenaVehicle*                     ReturnValue;
};
static_assert(alignof(FortVehicleAudioController_GetVehicleActor) == 0x000008, "Wrong alignment on FortVehicleAudioController_GetVehicleActor");
static_assert(sizeof(FortVehicleAudioController_GetVehicleActor) == 0x000008, "Wrong size on FortVehicleAudioController_GetVehicleActor");
static_assert(offsetof(FortVehicleAudioController_GetVehicleActor, ReturnValue) == 0x000000, "Member 'FortVehicleAudioController_GetVehicleActor::ReturnValue' has a wrong offset!");

struct FortVehicleAudioController_IsNativizationEnabled final
{
public:
	bool                                          ReturnValue;
};
static_assert(alignof(FortVehicleAudioController_IsNativizationEnabled) == 0x000001, "Wrong alignment on FortVehicleAudioController_IsNativizationEnabled");
static_assert(sizeof(FortVehicleAudioController_IsNativizationEnabled) == 0x000001, "Wrong size on FortVehicleAudioController_IsNativizationEnabled");
static_assert(offsetof(FortVehicleAudioController_IsNativizationEnabled, ReturnValue) == 0x000000, "Member 'FortVehicleAudioController_IsNativizationEnabled::ReturnValue' has a wrong offset!");

struct FortVehicleSoundComponent_Update final
{
public:
	float                                         DeltaSeconds;
};
static_assert(alignof(FortVehicleSoundComponent_Update) == 0x000004, "Wrong alignment on FortVehicleSoundComponent_Update");
static_assert(sizeof(FortVehicleSoundComponent_Update) == 0x000004, "Wrong size on FortVehicleSoundComponent_Update");
static_assert(offsetof(FortVehicleSoundComponent_Update, DeltaSeconds) == 0x000000, "Member 'FortVehicleSoundComponent_Update::DeltaSeconds' has a wrong offset!");

struct FortVehicleSoundComponent_GetAudioController final
{
public:
	class AFortVehicleAudioController*            ReturnValue;
};
static_assert(alignof(FortVehicleSoundComponent_GetAudioController) == 0x000008, "Wrong alignment on FortVehicleSoundComponent_GetAudioController");
static_assert(sizeof(FortVehicleSoundComponent_GetAudioController) == 0x000008, "Wrong size on FortVehicleSoundComponent_GetAudioController");
static_assert(offsetof(FortVehicleSoundComponent_GetAudioController, ReturnValue) == 0x000000, "Member 'FortVehicleSoundComponent_GetAudioController::ReturnValue' has a wrong offset!");

struct FortVehicleSoundComponent_GetAudioParameterComponent final
{
public:
	class UAudioParameterComponent*               ReturnValue;
};
static_assert(alignof(FortVehicleSoundComponent_GetAudioParameterComponent) == 0x000008, "Wrong alignment on FortVehicleSoundComponent_GetAudioParameterComponent");
static_assert(sizeof(FortVehicleSoundComponent_GetAudioParameterComponent) == 0x000008, "Wrong size on FortVehicleSoundComponent_GetAudioParameterComponent");
static_assert(offsetof(FortVehicleSoundComponent_GetAudioParameterComponent, ReturnValue) == 0x000000, "Member 'FortVehicleSoundComponent_GetAudioParameterComponent::ReturnValue' has a wrong offset!");

struct FortVehicleSoundComponent_GetLayeredAudioComponent final
{
public:
	class UFortLayeredAudioComponent*             ReturnValue;
};
static_assert(alignof(FortVehicleSoundComponent_GetLayeredAudioComponent) == 0x000008, "Wrong alignment on FortVehicleSoundComponent_GetLayeredAudioComponent");
static_assert(sizeof(FortVehicleSoundComponent_GetLayeredAudioComponent) == 0x000008, "Wrong size on FortVehicleSoundComponent_GetLayeredAudioComponent");
static_assert(offsetof(FortVehicleSoundComponent_GetLayeredAudioComponent, ReturnValue) == 0x000000, "Member 'FortVehicleSoundComponent_GetLayeredAudioComponent::ReturnValue' has a wrong offset!");

struct FortVehicleSoundComponent_GetMotorModelComponent final
{
public:
	class UAudioMotorModelComponent*              ReturnValue;
};
static_assert(alignof(FortVehicleSoundComponent_GetMotorModelComponent) == 0x000008, "Wrong alignment on FortVehicleSoundComponent_GetMotorModelComponent");
static_assert(sizeof(FortVehicleSoundComponent_GetMotorModelComponent) == 0x000008, "Wrong size on FortVehicleSoundComponent_GetMotorModelComponent");
static_assert(offsetof(FortVehicleSoundComponent_GetMotorModelComponent, ReturnValue) == 0x000000, "Member 'FortVehicleSoundComponent_GetMotorModelComponent::ReturnValue' has a wrong offset!");

struct FortVehicleSoundComponent_GetPhysicsVehicleConfigs final
{
public:
	const class UFortPhysicsVehicleConfigs*       ReturnValue;
};
static_assert(alignof(FortVehicleSoundComponent_GetPhysicsVehicleConfigs) == 0x000008, "Wrong alignment on FortVehicleSoundComponent_GetPhysicsVehicleConfigs");
static_assert(sizeof(FortVehicleSoundComponent_GetPhysicsVehicleConfigs) == 0x000008, "Wrong size on FortVehicleSoundComponent_GetPhysicsVehicleConfigs");
static_assert(offsetof(FortVehicleSoundComponent_GetPhysicsVehicleConfigs, ReturnValue) == 0x000000, "Member 'FortVehicleSoundComponent_GetPhysicsVehicleConfigs::ReturnValue' has a wrong offset!");

struct FortVehicleSoundComponent_GetREVComponent final
{
public:
	class UREVComponent*                          ReturnValue;
};
static_assert(alignof(FortVehicleSoundComponent_GetREVComponent) == 0x000008, "Wrong alignment on FortVehicleSoundComponent_GetREVComponent");
static_assert(sizeof(FortVehicleSoundComponent_GetREVComponent) == 0x000008, "Wrong size on FortVehicleSoundComponent_GetREVComponent");
static_assert(offsetof(FortVehicleSoundComponent_GetREVComponent, ReturnValue) == 0x000000, "Member 'FortVehicleSoundComponent_GetREVComponent::ReturnValue' has a wrong offset!");

struct FortVehicleSoundComponent_GetRootComponent final
{
public:
	class USceneComponent*                        ReturnValue;
};
static_assert(alignof(FortVehicleSoundComponent_GetRootComponent) == 0x000008, "Wrong alignment on FortVehicleSoundComponent_GetRootComponent");
static_assert(sizeof(FortVehicleSoundComponent_GetRootComponent) == 0x000008, "Wrong size on FortVehicleSoundComponent_GetRootComponent");
static_assert(offsetof(FortVehicleSoundComponent_GetRootComponent, ReturnValue) == 0x000000, "Member 'FortVehicleSoundComponent_GetRootComponent::ReturnValue' has a wrong offset!");

struct FortVehicleSoundComponent_GetVehicleActor final
{
public:
	class AFortAthenaVehicle*                     ReturnValue;
};
static_assert(alignof(FortVehicleSoundComponent_GetVehicleActor) == 0x000008, "Wrong alignment on FortVehicleSoundComponent_GetVehicleActor");
static_assert(sizeof(FortVehicleSoundComponent_GetVehicleActor) == 0x000008, "Wrong size on FortVehicleSoundComponent_GetVehicleActor");
static_assert(offsetof(FortVehicleSoundComponent_GetVehicleActor, ReturnValue) == 0x000000, "Member 'FortVehicleSoundComponent_GetVehicleActor::ReturnValue' has a wrong offset!");

struct FortVehicleSoundComponent_Surface_OnBrakingChanged final
{
public:
	bool                                          bNewState;
};
static_assert(alignof(FortVehicleSoundComponent_Surface_OnBrakingChanged) == 0x000001, "Wrong alignment on FortVehicleSoundComponent_Surface_OnBrakingChanged");
static_assert(sizeof(FortVehicleSoundComponent_Surface_OnBrakingChanged) == 0x000001, "Wrong size on FortVehicleSoundComponent_Surface_OnBrakingChanged");
static_assert(offsetof(FortVehicleSoundComponent_Surface_OnBrakingChanged, bNewState) == 0x000000, "Member 'FortVehicleSoundComponent_Surface_OnBrakingChanged::bNewState' has a wrong offset!");

struct FortVehicleSoundComponent_Surface_OnInAirChanged final
{
public:
	bool                                          bNewState;
};
static_assert(alignof(FortVehicleSoundComponent_Surface_OnInAirChanged) == 0x000001, "Wrong alignment on FortVehicleSoundComponent_Surface_OnInAirChanged");
static_assert(sizeof(FortVehicleSoundComponent_Surface_OnInAirChanged) == 0x000001, "Wrong size on FortVehicleSoundComponent_Surface_OnInAirChanged");
static_assert(offsetof(FortVehicleSoundComponent_Surface_OnInAirChanged, bNewState) == 0x000000, "Member 'FortVehicleSoundComponent_Surface_OnInAirChanged::bNewState' has a wrong offset!");

struct FortVehicleSoundComponent_Surface_OnSkiddingChanged final
{
public:
	bool                                          bNewState;
};
static_assert(alignof(FortVehicleSoundComponent_Surface_OnSkiddingChanged) == 0x000001, "Wrong alignment on FortVehicleSoundComponent_Surface_OnSkiddingChanged");
static_assert(sizeof(FortVehicleSoundComponent_Surface_OnSkiddingChanged) == 0x000001, "Wrong size on FortVehicleSoundComponent_Surface_OnSkiddingChanged");
static_assert(offsetof(FortVehicleSoundComponent_Surface_OnSkiddingChanged, bNewState) == 0x000000, "Member 'FortVehicleSoundComponent_Surface_OnSkiddingChanged::bNewState' has a wrong offset!");

struct FortVehicleSoundComponent_Surface_OnSurfaceChanged final
{
public:
	EPhysicalSurface                              NewSurface;
};
static_assert(alignof(FortVehicleSoundComponent_Surface_OnSurfaceChanged) == 0x000001, "Wrong alignment on FortVehicleSoundComponent_Surface_OnSurfaceChanged");
static_assert(sizeof(FortVehicleSoundComponent_Surface_OnSurfaceChanged) == 0x000001, "Wrong size on FortVehicleSoundComponent_Surface_OnSurfaceChanged");
static_assert(offsetof(FortVehicleSoundComponent_Surface_OnSurfaceChanged, NewSurface) == 0x000000, "Member 'FortVehicleSoundComponent_Surface_OnSurfaceChanged::NewSurface' has a wrong offset!");

}
