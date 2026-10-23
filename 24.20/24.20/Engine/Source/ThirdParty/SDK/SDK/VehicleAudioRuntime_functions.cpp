#pragma once

#include "Basic.hpp"

#include "VehicleAudioRuntime_classes.hpp"
#include "VehicleAudioRuntime_parameters.hpp"

namespace SDK
{

void IVehicleAudioLifecycleInterface::OnInit()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("VehicleAudioLifecycleInterface", "OnInit");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void IVehicleAudioLifecycleInterface::OnShutdown()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("VehicleAudioLifecycleInterface", "OnShutdown");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void IVehicleAudioLifecycleInterface::OnUpdate(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("VehicleAudioLifecycleInterface", "OnUpdate");

	Params::VehicleAudioLifecycleInterface_OnUpdate Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void AFortVehicleAudioController::CacheJitterTime()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortVehicleAudioController", "CacheJitterTime");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void AFortVehicleAudioController::Init()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortVehicleAudioController", "Init");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void AFortVehicleAudioController::SetLayeredAudioComponent(class UFortLayeredAudioComponent* InComponent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortVehicleAudioController", "SetLayeredAudioComponent");

	Params::FortVehicleAudioController_SetLayeredAudioComponent Parms{};

	Parms.InComponent = InComponent;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void AFortVehicleAudioController::SetRedlineActive(bool bEnabled)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortVehicleAudioController", "SetRedlineActive");

	Params::FortVehicleAudioController_SetRedlineActive Parms{};

	Parms.bEnabled = bEnabled;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void AFortVehicleAudioController::SetVehicle(class AFortAthenaVehicle* InVehicle)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortVehicleAudioController", "SetVehicle");

	Params::FortVehicleAudioController_SetVehicle Parms{};

	Parms.InVehicle = InVehicle;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void AFortVehicleAudioController::Shutdown()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortVehicleAudioController", "Shutdown");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void AFortVehicleAudioController::Update(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortVehicleAudioController", "Update");

	Params::FortVehicleAudioController_Update Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void AFortVehicleAudioController::UpdateMotorModelNative(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortVehicleAudioController", "UpdateMotorModelNative");

	Params::FortVehicleAudioController_UpdateMotorModelNative Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

class UAudioMotorModelComponent* AFortVehicleAudioController::GetAudioMotorModelComponent() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortVehicleAudioController", "GetAudioMotorModelComponent");

	Params::FortVehicleAudioController_GetAudioMotorModelComponent Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

class UAudioParameterComponent* AFortVehicleAudioController::GetAudioParameterComponent() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortVehicleAudioController", "GetAudioParameterComponent");

	Params::FortVehicleAudioController_GetAudioParameterComponent Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

float AFortVehicleAudioController::GetBrakingNative() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortVehicleAudioController", "GetBrakingNative");

	Params::FortVehicleAudioController_GetBrakingNative Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

float AFortVehicleAudioController::GetJitterTime() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortVehicleAudioController", "GetJitterTime");

	Params::FortVehicleAudioController_GetJitterTime Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

class UFortLayeredAudioComponent* AFortVehicleAudioController::GetLayeredAudioComponent() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortVehicleAudioController", "GetLayeredAudioComponent");

	Params::FortVehicleAudioController_GetLayeredAudioComponent Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

const class UFortPhysicsVehicleConfigs* AFortVehicleAudioController::GetPhysicsVehicleConfigs() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortVehicleAudioController", "GetPhysicsVehicleConfigs");

	Params::FortVehicleAudioController_GetPhysicsVehicleConfigs Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

bool AFortVehicleAudioController::GetRedlineActive() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortVehicleAudioController", "GetRedlineActive");

	Params::FortVehicleAudioController_GetRedlineActive Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

class UREVComponent* AFortVehicleAudioController::GetREVComponent() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortVehicleAudioController", "GetREVComponent");

	Params::FortVehicleAudioController_GetREVComponent Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

float AFortVehicleAudioController::GetThrottleNative() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortVehicleAudioController", "GetThrottleNative");

	Params::FortVehicleAudioController_GetThrottleNative Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

class AFortAthenaVehicle* AFortVehicleAudioController::GetVehicleActor() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortVehicleAudioController", "GetVehicleActor");

	Params::FortVehicleAudioController_GetVehicleActor Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

bool AFortVehicleAudioController::IsNativizationEnabled() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortVehicleAudioController", "IsNativizationEnabled");

	Params::FortVehicleAudioController_IsNativizationEnabled Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

void UFortVehicleSoundComponent::Init()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortVehicleSoundComponent", "Init");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void UFortVehicleSoundComponent::Shutdown()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortVehicleSoundComponent", "Shutdown");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void UFortVehicleSoundComponent::Update(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortVehicleSoundComponent", "Update");

	Params::FortVehicleSoundComponent_Update Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

class AFortVehicleAudioController* UFortVehicleSoundComponent::GetAudioController() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortVehicleSoundComponent", "GetAudioController");

	Params::FortVehicleSoundComponent_GetAudioController Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

class UAudioParameterComponent* UFortVehicleSoundComponent::GetAudioParameterComponent() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortVehicleSoundComponent", "GetAudioParameterComponent");

	Params::FortVehicleSoundComponent_GetAudioParameterComponent Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

class UFortLayeredAudioComponent* UFortVehicleSoundComponent::GetLayeredAudioComponent() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortVehicleSoundComponent", "GetLayeredAudioComponent");

	Params::FortVehicleSoundComponent_GetLayeredAudioComponent Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

class UAudioMotorModelComponent* UFortVehicleSoundComponent::GetMotorModelComponent() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortVehicleSoundComponent", "GetMotorModelComponent");

	Params::FortVehicleSoundComponent_GetMotorModelComponent Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

const class UFortPhysicsVehicleConfigs* UFortVehicleSoundComponent::GetPhysicsVehicleConfigs() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortVehicleSoundComponent", "GetPhysicsVehicleConfigs");

	Params::FortVehicleSoundComponent_GetPhysicsVehicleConfigs Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

class UREVComponent* UFortVehicleSoundComponent::GetREVComponent() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortVehicleSoundComponent", "GetREVComponent");

	Params::FortVehicleSoundComponent_GetREVComponent Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

class USceneComponent* UFortVehicleSoundComponent::GetRootComponent() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortVehicleSoundComponent", "GetRootComponent");

	Params::FortVehicleSoundComponent_GetRootComponent Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

class AFortAthenaVehicle* UFortVehicleSoundComponent::GetVehicleActor() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortVehicleSoundComponent", "GetVehicleActor");

	Params::FortVehicleSoundComponent_GetVehicleActor Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

void UFortVehicleSoundComponent_Surface::OnBrakingChanged(bool bNewState)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortVehicleSoundComponent_Surface", "OnBrakingChanged");

	Params::FortVehicleSoundComponent_Surface_OnBrakingChanged Parms{};

	Parms.bNewState = bNewState;

	UObject::ProcessEvent(Func, &Parms);
}

void UFortVehicleSoundComponent_Surface::OnInAirChanged(bool bNewState)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortVehicleSoundComponent_Surface", "OnInAirChanged");

	Params::FortVehicleSoundComponent_Surface_OnInAirChanged Parms{};

	Parms.bNewState = bNewState;

	UObject::ProcessEvent(Func, &Parms);
}

void UFortVehicleSoundComponent_Surface::OnSkiddingChanged(bool bNewState)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortVehicleSoundComponent_Surface", "OnSkiddingChanged");

	Params::FortVehicleSoundComponent_Surface_OnSkiddingChanged Parms{};

	Parms.bNewState = bNewState;

	UObject::ProcessEvent(Func, &Parms);
}

void UFortVehicleSoundComponent_Surface::OnSurfaceChanged(EPhysicalSurface NewSurface)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortVehicleSoundComponent_Surface", "OnSurfaceChanged");

	Params::FortVehicleSoundComponent_Surface_OnSurfaceChanged Parms{};

	Parms.NewSurface = NewSurface;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

}
