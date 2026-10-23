#pragma once

#include "Basic.hpp"

#include "NevadaRuntime_classes.hpp"
#include "NevadaRuntime_parameters.hpp"

namespace SDK
{

void AFortNevadaVehicle::AddPhysicsImpulseToTractorBeamAttachedActor(const struct FVector& Impulse, class FName BoneName, bool bVelChange)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortNevadaVehicle", "AddPhysicsImpulseToTractorBeamAttachedActor");

	Params::FortNevadaVehicle_AddPhysicsImpulseToTractorBeamAttachedActor Parms{};

	Parms.Impulse = std::move(Impulse);
	Parms.BoneName = BoneName;
	Parms.bVelChange = bVelChange;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void AFortNevadaVehicle::DisruptTractorBeam()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortNevadaVehicle", "DisruptTractorBeam");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void AFortNevadaVehicle::EnablePilotBubbleCollisionOnServer(bool bNewCollisionEnabled)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortNevadaVehicle", "EnablePilotBubbleCollisionOnServer");

	Params::FortNevadaVehicle_EnablePilotBubbleCollisionOnServer Parms{};

	Parms.bNewCollisionEnabled = bNewCollisionEnabled;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void AFortNevadaVehicle::GetDriverSeatRotationAnimParams(float* OutLeftRight, float* OutForwardBack)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortNevadaVehicle", "GetDriverSeatRotationAnimParams");

	Params::FortNevadaVehicle_GetDriverSeatRotationAnimParams Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	if (OutLeftRight != nullptr)
		*OutLeftRight = Parms.OutLeftRight;

	if (OutForwardBack != nullptr)
		*OutForwardBack = Parms.OutForwardBack;
}

void AFortNevadaVehicle::NativeToggleCockpit(bool bEnable)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortNevadaVehicle", "NativeToggleCockpit");

	Params::FortNevadaVehicle_NativeToggleCockpit Parms{};

	Parms.bEnable = bEnable;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void AFortNevadaVehicle::OnAttachedActorDestroyed(class AActor* DestroyedActor)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortNevadaVehicle", "OnAttachedActorDestroyed");

	Params::FortNevadaVehicle_OnAttachedActorDestroyed Parms{};

	Parms.DestroyedActor = DestroyedActor;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void AFortNevadaVehicle::OnAttachedActorDied(class AActor* DamagedActor, float Damage, class AController* InstigatedBy, class AActor* DamageCauser, const struct FVector& HitLocation, class UPrimitiveComponent* FHitComponent, class FName BoneName, const struct FVector& Momentum)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortNevadaVehicle", "OnAttachedActorDied");

	Params::FortNevadaVehicle_OnAttachedActorDied Parms{};

	Parms.DamagedActor = DamagedActor;
	Parms.Damage = Damage;
	Parms.InstigatedBy = InstigatedBy;
	Parms.DamageCauser = DamageCauser;
	Parms.HitLocation = std::move(HitLocation);
	Parms.FHitComponent = FHitComponent;
	Parms.BoneName = BoneName;
	Parms.Momentum = std::move(Momentum);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void AFortNevadaVehicle::OnBatteryRegen(float Newcharge)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortNevadaVehicle", "OnBatteryRegen");

	Params::FortNevadaVehicle_OnBatteryRegen Parms{};

	Parms.Newcharge = Newcharge;

	UObject::ProcessEvent(Func, &Parms);
}

void AFortNevadaVehicle::OnBoostChargeRefilled()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortNevadaVehicle", "OnBoostChargeRefilled");

	UObject::ProcessEvent(Func, nullptr);
}

void AFortNevadaVehicle::OnBoostFinished()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortNevadaVehicle", "OnBoostFinished");

	UObject::ProcessEvent(Func, nullptr);
}

void AFortNevadaVehicle::OnBoostStarted()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortNevadaVehicle", "OnBoostStarted");

	UObject::ProcessEvent(Func, nullptr);
}

void AFortNevadaVehicle::OnCrashedImpact()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortNevadaVehicle", "OnCrashedImpact");

	UObject::ProcessEvent(Func, nullptr);
}

void AFortNevadaVehicle::OnCrashingStarted()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortNevadaVehicle", "OnCrashingStarted");

	UObject::ProcessEvent(Func, nullptr);
}

void AFortNevadaVehicle::OnNewVehicleState(ENevadaFlightStates NewVehicleState)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortNevadaVehicle", "OnNewVehicleState");

	Params::FortNevadaVehicle_OnNewVehicleState Parms{};

	Parms.NewVehicleState = NewVehicleState;

	UObject::ProcessEvent(Func, &Parms);
}

void AFortNevadaVehicle::OnOutOfBattery()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortNevadaVehicle", "OnOutOfBattery");

	UObject::ProcessEvent(Func, nullptr);
}

void AFortNevadaVehicle::OnRebootFinished()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortNevadaVehicle", "OnRebootFinished");

	UObject::ProcessEvent(Func, nullptr);
}

void AFortNevadaVehicle::OnRebootStarted()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortNevadaVehicle", "OnRebootStarted");

	UObject::ProcessEvent(Func, nullptr);
}

void AFortNevadaVehicle::OnRep_NevadaState(const struct FNevadaState& PrevState)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortNevadaVehicle", "OnRep_NevadaState");

	Params::FortNevadaVehicle_OnRep_NevadaState Parms{};

	Parms.PrevState = std::move(PrevState);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void AFortNevadaVehicle::OnRep_ReplicatedTargetedActors()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortNevadaVehicle", "OnRep_ReplicatedTargetedActors");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void AFortNevadaVehicle::OnRep_TargetedActorChanged()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortNevadaVehicle", "OnRep_TargetedActorChanged");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void AFortNevadaVehicle::OnRep_TractorBeamAttached()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortNevadaVehicle", "OnRep_TractorBeamAttached");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void AFortNevadaVehicle::OnRep_TractorBeamChargeStarted()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortNevadaVehicle", "OnRep_TractorBeamChargeStarted");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void AFortNevadaVehicle::OnRep_TractorBeamState(const ETractorBeamState PreviousState)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortNevadaVehicle", "OnRep_TractorBeamState");

	Params::FortNevadaVehicle_OnRep_TractorBeamState Parms{};

	Parms.PreviousState = PreviousState;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void AFortNevadaVehicle::OnStartAscend()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortNevadaVehicle", "OnStartAscend");

	UObject::ProcessEvent(Func, nullptr);
}

void AFortNevadaVehicle::OnStartDescend()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortNevadaVehicle", "OnStartDescend");

	UObject::ProcessEvent(Func, nullptr);
}

void AFortNevadaVehicle::OnTargetedActorChanged(class AActor* NewTargetedActor)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortNevadaVehicle", "OnTargetedActorChanged");

	Params::FortNevadaVehicle_OnTargetedActorChanged Parms{};

	Parms.NewTargetedActor = NewTargetedActor;

	UObject::ProcessEvent(Func, &Parms);
}

void AFortNevadaVehicle::OnTractorBeamActivated()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortNevadaVehicle", "OnTractorBeamActivated");

	UObject::ProcessEvent(Func, nullptr);
}

void AFortNevadaVehicle::OnTractorBeamAttached()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortNevadaVehicle", "OnTractorBeamAttached");

	UObject::ProcessEvent(Func, nullptr);
}

void AFortNevadaVehicle::OnTractorBeamChargeStarted()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortNevadaVehicle", "OnTractorBeamChargeStarted");

	UObject::ProcessEvent(Func, nullptr);
}

void AFortNevadaVehicle::OnTractorBeamDeactivated(const struct FVector& LastBeamPosition)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortNevadaVehicle", "OnTractorBeamDeactivated");

	Params::FortNevadaVehicle_OnTractorBeamDeactivated Parms{};

	Parms.LastBeamPosition = std::move(LastBeamPosition);

	UObject::ProcessEvent(Func, &Parms);
}

void AFortNevadaVehicle::OnTractorBeamDetached(class AActor* DetachedActor, const struct FVector& LastBeamPosition)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortNevadaVehicle", "OnTractorBeamDetached");

	Params::FortNevadaVehicle_OnTractorBeamDetached Parms{};

	Parms.DetachedActor = DetachedActor;
	Parms.LastBeamPosition = std::move(LastBeamPosition);

	UObject::ProcessEvent(Func, &Parms);
}

void AFortNevadaVehicle::SetAttachedPawnAddedVelocity(const struct FVector& AddedVelocity)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortNevadaVehicle", "SetAttachedPawnAddedVelocity");

	Params::FortNevadaVehicle_SetAttachedPawnAddedVelocity Parms{};

	Parms.AddedVelocity = std::move(AddedVelocity);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void AFortNevadaVehicle::SetCannonEnabled(const bool bEnabled)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortNevadaVehicle", "SetCannonEnabled");

	Params::FortNevadaVehicle_SetCannonEnabled Parms{};

	Parms.bEnabled = bEnabled;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void AFortNevadaVehicle::SetTractorBeamEnabled(const bool bEnabled)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortNevadaVehicle", "SetTractorBeamEnabled");

	Params::FortNevadaVehicle_SetTractorBeamEnabled Parms{};

	Parms.bEnabled = bEnabled;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void AFortNevadaVehicle::SetTractorBeamInactive()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortNevadaVehicle", "SetTractorBeamInactive");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

class AFortNevadaAudioController* AFortNevadaVehicle::GetAudioController() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortNevadaVehicle", "GetAudioController");

	Params::FortNevadaVehicle_GetAudioController Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

float AFortNevadaVehicle::GetBatteryCharge() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortNevadaVehicle", "GetBatteryCharge");

	Params::FortNevadaVehicle_GetBatteryCharge Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

float AFortNevadaVehicle::GetBoostChargeProgress() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortNevadaVehicle", "GetBoostChargeProgress");

	Params::FortNevadaVehicle_GetBoostChargeProgress Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

int32 AFortNevadaVehicle::GetBoostChargesAvailable() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortNevadaVehicle", "GetBoostChargesAvailable");

	Params::FortNevadaVehicle_GetBoostChargesAvailable Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

float AFortNevadaVehicle::GetBoostChargeTimeRemaining() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortNevadaVehicle", "GetBoostChargeTimeRemaining");

	Params::FortNevadaVehicle_GetBoostChargeTimeRemaining Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

ENevadaFlightStates AFortNevadaVehicle::GetCurrentVehicleState() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortNevadaVehicle", "GetCurrentVehicleState");

	Params::FortNevadaVehicle_GetCurrentVehicleState Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

float AFortNevadaVehicle::GetEnergyCanonChargePercent() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortNevadaVehicle", "GetEnergyCanonChargePercent");

	Params::FortNevadaVehicle_GetEnergyCanonChargePercent Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

int32 AFortNevadaVehicle::GetNumRebootsAvailable() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortNevadaVehicle", "GetNumRebootsAvailable");

	Params::FortNevadaVehicle_GetNumRebootsAvailable Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

struct FVector AFortNevadaVehicle::GetTractorBeamAttachLocation() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortNevadaVehicle", "GetTractorBeamAttachLocation");

	Params::FortNevadaVehicle_GetTractorBeamAttachLocation Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

bool AFortNevadaVehicle::IsTractorBeamActive() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortNevadaVehicle", "IsTractorBeamActive");

	Params::FortNevadaVehicle_IsTractorBeamActive Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

bool AFortNevadaVehicle::IsTractorBeamAttached() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortNevadaVehicle", "IsTractorBeamAttached");

	Params::FortNevadaVehicle_IsTractorBeamAttached Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

bool AFortNevadaVehicle::IsTractorBeamDisrupted() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortNevadaVehicle", "IsTractorBeamDisrupted");

	Params::FortNevadaVehicle_IsTractorBeamDisrupted Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

void AFortNevadaAudioController::BP_Init()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortNevadaAudioController", "BP_Init");

	UObject::ProcessEvent(Func, nullptr);
}

void AFortNevadaAudioController::BP_Update()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortNevadaAudioController", "BP_Update");

	UObject::ProcessEvent(Func, nullptr);
}

void AFortNevadaAudioController::CacheReferences(class UFortLayeredAudioComponent* InLayeredAudioComponent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortNevadaAudioController", "CacheReferences");

	Params::FortNevadaAudioController_CacheReferences Parms{};

	Parms.InLayeredAudioComponent = InLayeredAudioComponent;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void AFortNevadaAudioController::Init(class AFortNevadaVehicle* InVehicle)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortNevadaAudioController", "Init");

	Params::FortNevadaAudioController_Init Parms{};

	Parms.InVehicle = InVehicle;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void AFortNevadaAudioController::Update()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortNevadaAudioController", "Update");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

class AFortNevadaVehicle* AFortNevadaAudioController::GetVehicleActor() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortNevadaAudioController", "GetVehicleActor");

	Params::FortNevadaAudioController_GetVehicleActor Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

}
