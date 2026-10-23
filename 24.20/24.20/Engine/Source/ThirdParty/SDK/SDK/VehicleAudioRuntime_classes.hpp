#pragma once

#include "Basic.hpp"

#include "PhysicsCore_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "CoreUObject_classes.hpp"
#include "Engine_classes.hpp"
#include "VehicleAudioRuntime_structs.hpp"

namespace SDK
{

class IVehicleAudioLifecycleInterface final : public IInterface
{
public:
	void OnInit();
	void OnShutdown();
	void OnUpdate(float DeltaSeconds);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"VehicleAudioLifecycleInterface">();
	}
	static class IVehicleAudioLifecycleInterface* GetDefaultObj()
	{
		return GetDefaultObjImpl<IVehicleAudioLifecycleInterface>();
	}
};
static_assert(alignof(IVehicleAudioLifecycleInterface) == 0x000008, "Wrong alignment on IVehicleAudioLifecycleInterface");
static_assert(sizeof(IVehicleAudioLifecycleInterface) == 0x000028, "Wrong size on IVehicleAudioLifecycleInterface");

class AFortVehicleAudioController : public AActor
{
public:
	uint8                                         Pad_288[0x8];
	class UFortVehicleSoundData*                  VehicleSoundData;
	uint8                                         Pad_298[0x4];
	int32                                         CurrentSignificance;
	bool                                          bListenerInRange;
	bool                                          bForceUpdatePastListenerRange;
	bool                                          bRedlineAllowed;
	uint8                                         Pad_2A3[0x1];
	float                                         JitterTime;
	class AFortAthenaVehicle*                     VehicleBase;
	class UFortPhysicsVehicleConfigs*             PhysicsVehicleConfigs;
	class UFortLayeredAudioComponent*             LayeredAudioComponent;
	class UAudioParameterComponent*               AudioParameterComponent;
	class UAudioMotorModelComponent*              AudioMotorModelComponent;
	class UREVComponent*                          REVComponent;
	TArray<class UFortVehicleSoundComponent*>     VehicleSoundComponents;

public:
	void CacheJitterTime();
	void Init();
	void SetLayeredAudioComponent(class UFortLayeredAudioComponent* InComponent);
	void SetRedlineActive(bool bEnabled);
	void SetVehicle(class AFortAthenaVehicle* InVehicle);
	void Shutdown();
	void Update(float DeltaSeconds);
	void UpdateMotorModelNative(float DeltaSeconds);

	class UAudioMotorModelComponent* GetAudioMotorModelComponent() const;
	class UAudioParameterComponent* GetAudioParameterComponent() const;
	float GetBrakingNative() const;
	float GetJitterTime() const;
	class UFortLayeredAudioComponent* GetLayeredAudioComponent() const;
	const class UFortPhysicsVehicleConfigs* GetPhysicsVehicleConfigs() const;
	bool GetRedlineActive() const;
	class UREVComponent* GetREVComponent() const;
	float GetThrottleNative() const;
	class AFortAthenaVehicle* GetVehicleActor() const;
	bool IsNativizationEnabled() const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortVehicleAudioController">();
	}
	static class AFortVehicleAudioController* GetDefaultObj()
	{
		return GetDefaultObjImpl<AFortVehicleAudioController>();
	}
};
static_assert(alignof(AFortVehicleAudioController) == 0x000008, "Wrong alignment on AFortVehicleAudioController");
static_assert(sizeof(AFortVehicleAudioController) == 0x0002E8, "Wrong size on AFortVehicleAudioController");
static_assert(offsetof(AFortVehicleAudioController, VehicleSoundData) == 0x000290, "Member 'AFortVehicleAudioController::VehicleSoundData' has a wrong offset!");
static_assert(offsetof(AFortVehicleAudioController, CurrentSignificance) == 0x00029C, "Member 'AFortVehicleAudioController::CurrentSignificance' has a wrong offset!");
static_assert(offsetof(AFortVehicleAudioController, bListenerInRange) == 0x0002A0, "Member 'AFortVehicleAudioController::bListenerInRange' has a wrong offset!");
static_assert(offsetof(AFortVehicleAudioController, bForceUpdatePastListenerRange) == 0x0002A1, "Member 'AFortVehicleAudioController::bForceUpdatePastListenerRange' has a wrong offset!");
static_assert(offsetof(AFortVehicleAudioController, bRedlineAllowed) == 0x0002A2, "Member 'AFortVehicleAudioController::bRedlineAllowed' has a wrong offset!");
static_assert(offsetof(AFortVehicleAudioController, JitterTime) == 0x0002A4, "Member 'AFortVehicleAudioController::JitterTime' has a wrong offset!");
static_assert(offsetof(AFortVehicleAudioController, VehicleBase) == 0x0002A8, "Member 'AFortVehicleAudioController::VehicleBase' has a wrong offset!");
static_assert(offsetof(AFortVehicleAudioController, PhysicsVehicleConfigs) == 0x0002B0, "Member 'AFortVehicleAudioController::PhysicsVehicleConfigs' has a wrong offset!");
static_assert(offsetof(AFortVehicleAudioController, LayeredAudioComponent) == 0x0002B8, "Member 'AFortVehicleAudioController::LayeredAudioComponent' has a wrong offset!");
static_assert(offsetof(AFortVehicleAudioController, AudioParameterComponent) == 0x0002C0, "Member 'AFortVehicleAudioController::AudioParameterComponent' has a wrong offset!");
static_assert(offsetof(AFortVehicleAudioController, AudioMotorModelComponent) == 0x0002C8, "Member 'AFortVehicleAudioController::AudioMotorModelComponent' has a wrong offset!");
static_assert(offsetof(AFortVehicleAudioController, REVComponent) == 0x0002D0, "Member 'AFortVehicleAudioController::REVComponent' has a wrong offset!");
static_assert(offsetof(AFortVehicleAudioController, VehicleSoundComponents) == 0x0002D8, "Member 'AFortVehicleAudioController::VehicleSoundComponents' has a wrong offset!");

class UFortVehicleSoundComponent : public UActorComponent
{
public:
	uint8                                         Pad_A0[0x8];
	TWeakObjectPtr<class AFortVehicleAudioController> AudioController;

public:
	void Init();
	void Shutdown();
	void Update(float DeltaSeconds);

	class AFortVehicleAudioController* GetAudioController() const;
	class UAudioParameterComponent* GetAudioParameterComponent() const;
	class UFortLayeredAudioComponent* GetLayeredAudioComponent() const;
	class UAudioMotorModelComponent* GetMotorModelComponent() const;
	const class UFortPhysicsVehicleConfigs* GetPhysicsVehicleConfigs() const;
	class UREVComponent* GetREVComponent() const;
	class USceneComponent* GetRootComponent() const;
	class AFortAthenaVehicle* GetVehicleActor() const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortVehicleSoundComponent">();
	}
	static class UFortVehicleSoundComponent* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortVehicleSoundComponent>();
	}
};
static_assert(alignof(UFortVehicleSoundComponent) == 0x000008, "Wrong alignment on UFortVehicleSoundComponent");
static_assert(sizeof(UFortVehicleSoundComponent) == 0x0000B0, "Wrong size on UFortVehicleSoundComponent");
static_assert(offsetof(UFortVehicleSoundComponent, AudioController) == 0x0000A8, "Member 'UFortVehicleSoundComponent::AudioController' has a wrong offset!");

class UFortVehicleSoundComponent_Surface final : public UFortVehicleSoundComponent
{
public:
	struct FFortVehicleSoundComponent_SurfaceContext Context;

public:
	void OnBrakingChanged(bool bNewState);
	void OnInAirChanged(bool bNewState);
	void OnSkiddingChanged(bool bNewState);
	void OnSurfaceChanged(EPhysicalSurface NewSurface);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortVehicleSoundComponent_Surface">();
	}
	static class UFortVehicleSoundComponent_Surface* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortVehicleSoundComponent_Surface>();
	}
};
static_assert(alignof(UFortVehicleSoundComponent_Surface) == 0x000008, "Wrong alignment on UFortVehicleSoundComponent_Surface");
static_assert(sizeof(UFortVehicleSoundComponent_Surface) == 0x000158, "Wrong size on UFortVehicleSoundComponent_Surface");
static_assert(offsetof(UFortVehicleSoundComponent_Surface, Context) == 0x0000B0, "Member 'UFortVehicleSoundComponent_Surface::Context' has a wrong offset!");

class UFortVehicleSoundData final : public UDataAsset
{
public:
	TArray<class UFortVehicleSoundComponent*>     SoundComponents;
	float                                         MaxListenerDistance;
	bool                                          bUpdateDataFromController;
	uint8                                         Pad_45[0x3];
	float                                         MaxBrakeThreshold;
	float                                         ThrottleMultiplier;
	float                                         SurfaceFrictionModifier;
	float                                         MotorFrictionModifier;
	struct FVector2D                              FrictionJitter;
	bool                                          bCanShiftOverride;
	uint8                                         Pad_69[0x7];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortVehicleSoundData">();
	}
	static class UFortVehicleSoundData* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortVehicleSoundData>();
	}
};
static_assert(alignof(UFortVehicleSoundData) == 0x000008, "Wrong alignment on UFortVehicleSoundData");
static_assert(sizeof(UFortVehicleSoundData) == 0x000070, "Wrong size on UFortVehicleSoundData");
static_assert(offsetof(UFortVehicleSoundData, SoundComponents) == 0x000030, "Member 'UFortVehicleSoundData::SoundComponents' has a wrong offset!");
static_assert(offsetof(UFortVehicleSoundData, MaxListenerDistance) == 0x000040, "Member 'UFortVehicleSoundData::MaxListenerDistance' has a wrong offset!");
static_assert(offsetof(UFortVehicleSoundData, bUpdateDataFromController) == 0x000044, "Member 'UFortVehicleSoundData::bUpdateDataFromController' has a wrong offset!");
static_assert(offsetof(UFortVehicleSoundData, MaxBrakeThreshold) == 0x000048, "Member 'UFortVehicleSoundData::MaxBrakeThreshold' has a wrong offset!");
static_assert(offsetof(UFortVehicleSoundData, ThrottleMultiplier) == 0x00004C, "Member 'UFortVehicleSoundData::ThrottleMultiplier' has a wrong offset!");
static_assert(offsetof(UFortVehicleSoundData, SurfaceFrictionModifier) == 0x000050, "Member 'UFortVehicleSoundData::SurfaceFrictionModifier' has a wrong offset!");
static_assert(offsetof(UFortVehicleSoundData, MotorFrictionModifier) == 0x000054, "Member 'UFortVehicleSoundData::MotorFrictionModifier' has a wrong offset!");
static_assert(offsetof(UFortVehicleSoundData, FrictionJitter) == 0x000058, "Member 'UFortVehicleSoundData::FrictionJitter' has a wrong offset!");
static_assert(offsetof(UFortVehicleSoundData, bCanShiftOverride) == 0x000068, "Member 'UFortVehicleSoundData::bCanShiftOverride' has a wrong offset!");

}
