#pragma once

#include "Basic.hpp"

#include "ValetRuntime_classes.hpp"
#include "ValetRuntime_parameters.hpp"

namespace SDK
{

void UDagwoodNetworkPhysicsComponent::SetPendingInputCmd(const struct FFortDagwoodCmd& In)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DagwoodNetworkPhysicsComponent", "SetPendingInputCmd");

	Params::DagwoodNetworkPhysicsComponent_SetPendingInputCmd Parms{};

	Parms.In = std::move(In);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UDagwoodNetworkPhysicsComponent::SetState_GT(const struct FDagwoodInPersistent& In)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DagwoodNetworkPhysicsComponent", "SetState_GT");

	Params::DagwoodNetworkPhysicsComponent_SetState_GT Parms{};

	Parms.In = std::move(In);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

struct FFortDagwoodCmd UDagwoodNetworkPhysicsComponent::GetPendingInputCmd() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DagwoodNetworkPhysicsComponent", "GetPendingInputCmd");

	Params::DagwoodNetworkPhysicsComponent_GetPendingInputCmd Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

struct FDagwoodInPersistent UDagwoodNetworkPhysicsComponent::GetState_GT() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DagwoodNetworkPhysicsComponent", "GetState_GT");

	Params::DagwoodNetworkPhysicsComponent_GetState_GT Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

struct FDagwoodState_PT UDagwoodNetworkPhysicsComponent::GetState_PT() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DagwoodNetworkPhysicsComponent", "GetState_PT");

	Params::DagwoodNetworkPhysicsComponent_GetState_PT Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

void AFortAthenaMutator_OverrideValetVehicleParameters::OnPlaylistLoaded(class FName PlaylistName, const struct FGameplayTagContainer& PlaylistContainerTags)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortAthenaMutator_OverrideValetVehicleParameters", "OnPlaylistLoaded");

	Params::FortAthenaMutator_OverrideValetVehicleParameters_OnPlaylistLoaded Parms{};

	Parms.PlaylistName = PlaylistName;
	Parms.PlaylistContainerTags = std::move(PlaylistContainerTags);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UFortContextualTutorial_VehicleValetLowFuel::HandleStartSkydivingForActivation()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortContextualTutorial_VehicleValetLowFuel", "HandleStartSkydivingForActivation");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void UFortContextualTutorial_VehicleValetLowFuel::HandleVehicleStateChanged(class AFortPlayerPawn* PlayerPawn, class AActor* NewVehicle, class AActor* OldVehicle)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortContextualTutorial_VehicleValetLowFuel", "HandleVehicleStateChanged");

	Params::FortContextualTutorial_VehicleValetLowFuel_HandleVehicleStateChanged Parms{};

	Parms.PlayerPawn = PlayerPawn;
	Parms.NewVehicle = NewVehicle;
	Parms.OldVehicle = OldVehicle;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void AFortDagwoodVehicle::ApplyRuntimeModifiers()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortDagwoodVehicle", "ApplyRuntimeModifiers");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void AFortDagwoodVehicle::CleanupLoopingPooledFX()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortDagwoodVehicle", "CleanupLoopingPooledFX");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

const struct FDagwoodRuntimeModifiers AFortDagwoodVehicle::GetCurrentDagwoodRuntimeProperties()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortDagwoodVehicle", "GetCurrentDagwoodRuntimeProperties");

	Params::FortDagwoodVehicle_GetCurrentDagwoodRuntimeProperties Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

void AFortDagwoodVehicle::HandleCurrentPlaylistLoaded(class FName PlaylistName, const struct FGameplayTagContainer& PlaylistContextTags)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortDagwoodVehicle", "HandleCurrentPlaylistLoaded");

	Params::FortDagwoodVehicle_HandleCurrentPlaylistLoaded Parms{};

	Parms.PlaylistName = PlaylistName;
	Parms.PlaylistContextTags = std::move(PlaylistContextTags);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void AFortDagwoodVehicle::MakeInoperable()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortDagwoodVehicle", "MakeInoperable");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void AFortDagwoodVehicle::MakeOperable(bool bAddGas)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortDagwoodVehicle", "MakeOperable");

	Params::FortDagwoodVehicle_MakeOperable Parms{};

	Parms.bAddGas = bAddGas;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void AFortDagwoodVehicle::OnBoostFailed()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortDagwoodVehicle", "OnBoostFailed");

	UObject::ProcessEvent(Func, nullptr);
}

void AFortDagwoodVehicle::OnBoostReady()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortDagwoodVehicle", "OnBoostReady");

	UObject::ProcessEvent(Func, nullptr);
}

void AFortDagwoodVehicle::OnClientBeginAltInteract(class AFortPawn* Pawn)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortDagwoodVehicle", "OnClientBeginAltInteract");

	Params::FortDagwoodVehicle_OnClientBeginAltInteract Parms{};

	Parms.Pawn = Pawn;

	UObject::ProcessEvent(Func, &Parms);
}

void AFortDagwoodVehicle::OnDestroyedPropFromCollision(const class ABuildingActor* BuildingHitActor)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortDagwoodVehicle", "OnDestroyedPropFromCollision");

	Params::FortDagwoodVehicle_OnDestroyedPropFromCollision Parms{};

	Parms.BuildingHitActor = BuildingHitActor;

	UObject::ProcessEvent(Func, &Parms);
}

void AFortDagwoodVehicle::OnFlipImpactDamage()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortDagwoodVehicle", "OnFlipImpactDamage");

	UObject::ProcessEvent(Func, nullptr);
}

void AFortDagwoodVehicle::OnHoldSelfDestructStarted(class AFortPawn* DriverPawn, const float ExitDuration)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortDagwoodVehicle", "OnHoldSelfDestructStarted");

	Params::FortDagwoodVehicle_OnHoldSelfDestructStarted Parms{};

	Parms.DriverPawn = DriverPawn;
	Parms.ExitDuration = ExitDuration;

	UObject::ProcessEvent(Func, &Parms);
}

void AFortDagwoodVehicle::OnHoldSelfDestructStopped(class AFortPawn* DriverPawn)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortDagwoodVehicle", "OnHoldSelfDestructStopped");

	Params::FortDagwoodVehicle_OnHoldSelfDestructStopped Parms{};

	Parms.DriverPawn = DriverPawn;

	UObject::ProcessEvent(Func, &Parms);
}

void AFortDagwoodVehicle::OnInoperableChanged(bool bInoperable)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortDagwoodVehicle", "OnInoperableChanged");

	Params::FortDagwoodVehicle_OnInoperableChanged Parms{};

	Parms.bInoperable = bInoperable;

	UObject::ProcessEvent(Func, &Parms);
}

void AFortDagwoodVehicle::OnRep_DagwoodRuntimeModifiers(const struct FDagwoodRuntimeModifiers& PrevMods)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortDagwoodVehicle", "OnRep_DagwoodRuntimeModifiers");

	Params::FortDagwoodVehicle_OnRep_DagwoodRuntimeModifiers Parms{};

	Parms.PrevMods = std::move(PrevMods);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void AFortDagwoodVehicle::OnRep_FakeTires(const TArray<ETireStates>& PrevTireStates)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortDagwoodVehicle", "OnRep_FakeTires");

	Params::FortDagwoodVehicle_OnRep_FakeTires Parms{};

	Parms.PrevTireStates = std::move(PrevTireStates);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void AFortDagwoodVehicle::OnRep_IsInoperable()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortDagwoodVehicle", "OnRep_IsInoperable");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void AFortDagwoodVehicle::OnRep_PoppedTireReaction()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortDagwoodVehicle", "OnRep_PoppedTireReaction");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void AFortDagwoodVehicle::OnRep_RandSeed()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortDagwoodVehicle", "OnRep_RandSeed");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void AFortDagwoodVehicle::OnRep_ServerRepWheelData(const TArray<struct FAttachedWheel>& PrevWheelData)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortDagwoodVehicle", "OnRep_ServerRepWheelData");

	Params::FortDagwoodVehicle_OnRep_ServerRepWheelData Parms{};

	Parms.PrevWheelData = std::move(PrevWheelData);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void AFortDagwoodVehicle::OnServerAltInteract(class AFortPawn* Pawn)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortDagwoodVehicle", "OnServerAltInteract");

	Params::FortDagwoodVehicle_OnServerAltInteract Parms{};

	Parms.Pawn = Pawn;

	UObject::ProcessEvent(Func, &Parms);
}

void AFortDagwoodVehicle::OnStartHandbrake()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortDagwoodVehicle", "OnStartHandbrake");

	UObject::ProcessEvent(Func, nullptr);
}

void AFortDagwoodVehicle::OnStopHandbrake()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortDagwoodVehicle", "OnStopHandbrake");

	UObject::ProcessEvent(Func, nullptr);
}

void AFortDagwoodVehicle::OnTickAudioController(float DeltaTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortDagwoodVehicle", "OnTickAudioController");

	Params::FortDagwoodVehicle_OnTickAudioController Parms{};

	Parms.DeltaTime = DeltaTime;

	UObject::ProcessEvent(Func, &Parms);
}

void AFortDagwoodVehicle::OnTickAudioFade(float FadeParam)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortDagwoodVehicle", "OnTickAudioFade");

	Params::FortDagwoodVehicle_OnTickAudioFade Parms{};

	Parms.FadeParam = FadeParam;

	UObject::ProcessEvent(Func, &Parms);
}

void AFortDagwoodVehicle::SelfDestructCleanup()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortDagwoodVehicle", "SelfDestructCleanup");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void AFortDagwoodVehicle::ServerAddRuntimeGearsInfo(const struct FRuntimeGearInfo& GearInfo)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortDagwoodVehicle", "ServerAddRuntimeGearsInfo");

	Params::FortDagwoodVehicle_ServerAddRuntimeGearsInfo Parms{};

	Parms.GearInfo = std::move(GearInfo);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void AFortDagwoodVehicle::ServerSelfDestructActivated()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortDagwoodVehicle", "ServerSelfDestructActivated");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void AFortDagwoodVehicle::ServerSetFadeDuration(const float NewFadeDuration)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortDagwoodVehicle", "ServerSetFadeDuration");

	Params::FortDagwoodVehicle_ServerSetFadeDuration Parms{};

	Parms.NewFadeDuration = NewFadeDuration;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void AFortDagwoodVehicle::ServerSetRuntimeBoostInfo(const struct FRuntimeBoostInfo& BoostInfo)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortDagwoodVehicle", "ServerSetRuntimeBoostInfo");

	Params::FortDagwoodVehicle_ServerSetRuntimeBoostInfo Parms{};

	Parms.BoostInfo = std::move(BoostInfo);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void AFortDagwoodVehicle::ServerSetRuntimeDriveInfo(float MaxIncline, float MaxTilt)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortDagwoodVehicle", "ServerSetRuntimeDriveInfo");

	Params::FortDagwoodVehicle_ServerSetRuntimeDriveInfo Parms{};

	Parms.MaxIncline = MaxIncline;
	Parms.MaxTilt = MaxTilt;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void AFortDagwoodVehicle::ServerSetRuntimeFuelInfo(const struct FRuntimeFuelInfo& FuelInfo)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortDagwoodVehicle", "ServerSetRuntimeFuelInfo");

	Params::FortDagwoodVehicle_ServerSetRuntimeFuelInfo Parms{};

	Parms.FuelInfo = std::move(FuelInfo);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void AFortDagwoodVehicle::ServerSetRuntimeGravity(float GravMult)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortDagwoodVehicle", "ServerSetRuntimeGravity");

	Params::FortDagwoodVehicle_ServerSetRuntimeGravity Parms{};

	Parms.GravMult = GravMult;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void AFortDagwoodVehicle::ServerSetRuntimeSpringsInfo(const struct FRuntimeSpringsInfo& SpringsInfo)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortDagwoodVehicle", "ServerSetRuntimeSpringsInfo");

	Params::FortDagwoodVehicle_ServerSetRuntimeSpringsInfo Parms{};

	Parms.SpringsInfo = std::move(SpringsInfo);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void AFortDagwoodVehicle::SetDamageInfoOnServer(const bool bInDamageFriendlyVehicles, const bool bInDamageOtherVehicles, const bool bInDamageOwnVehicle, const bool bInDamageAllowedFromOtherVehicle)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortDagwoodVehicle", "SetDamageInfoOnServer");

	Params::FortDagwoodVehicle_SetDamageInfoOnServer Parms{};

	Parms.bInDamageFriendlyVehicles = bInDamageFriendlyVehicles;
	Parms.bInDamageOtherVehicles = bInDamageOtherVehicles;
	Parms.bInDamageOwnVehicle = bInDamageOwnVehicle;
	Parms.bInDamageAllowedFromOtherVehicle = bInDamageAllowedFromOtherVehicle;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void AFortDagwoodVehicle::SetValetAudioController(class AFortValetAudioController* ValetAudio_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortDagwoodVehicle", "SetValetAudioController");

	Params::FortDagwoodVehicle_SetValetAudioController Parms{};

	Parms.ValetAudio_0 = ValetAudio_0;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void AFortDagwoodVehicle::StartFade()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortDagwoodVehicle", "StartFade");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

bool AFortDagwoodVehicle::ForwardOrReverseInputPressed() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortDagwoodVehicle", "ForwardOrReverseInputPressed");

	Params::FortDagwoodVehicle_ForwardOrReverseInputPressed Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

float AFortDagwoodVehicle::GetBumpiness() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortDagwoodVehicle", "GetBumpiness");

	Params::FortDagwoodVehicle_GetBumpiness Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

float AFortDagwoodVehicle::GetMiddleAxleForwardAdjust() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortDagwoodVehicle", "GetMiddleAxleForwardAdjust");

	Params::FortDagwoodVehicle_GetMiddleAxleForwardAdjust Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

float AFortDagwoodVehicle::GetTireHealthPercent(ETireLocations TireIndex) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortDagwoodVehicle", "GetTireHealthPercent");

	Params::FortDagwoodVehicle_GetTireHealthPercent Parms{};

	Parms.TireIndex = TireIndex;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

ETireSurfaces AFortDagwoodVehicle::GetTireSurface(ETireLocations TireIndex) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortDagwoodVehicle", "GetTireSurface");

	Params::FortDagwoodVehicle_GetTireSurface Parms{};

	Parms.TireIndex = TireIndex;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

bool AFortDagwoodVehicle::IsNativeBPTickEnabled() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortDagwoodVehicle", "IsNativeBPTickEnabled");

	Params::FortDagwoodVehicle_IsNativeBPTickEnabled Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

bool AFortDagwoodVehicle::IsOnLandscape() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortDagwoodVehicle", "IsOnLandscape");

	Params::FortDagwoodVehicle_IsOnLandscape Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

bool AFortDagwoodVehicle::IsTireSkidding(const float MinSpeedForSkid, const float AngleForSkid, const float SpeedForPeelout, const float SpeedForBraking) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortDagwoodVehicle", "IsTireSkidding");

	Params::FortDagwoodVehicle_IsTireSkidding Parms{};

	Parms.MinSpeedForSkid = MinSpeedForSkid;
	Parms.AngleForSkid = AngleForSkid;
	Parms.SpeedForPeelout = SpeedForPeelout;
	Parms.SpeedForBraking = SpeedForBraking;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

float AFortDagwoodVehicle::NativeCalculateAccelRumbleIntensity(float MaxIntensity) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortDagwoodVehicle", "NativeCalculateAccelRumbleIntensity");

	Params::FortDagwoodVehicle_NativeCalculateAccelRumbleIntensity Parms{};

	Parms.MaxIntensity = MaxIntensity;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

void UFortDagwoodVehicleManager::CustomHandleActorStreamedInEditor(class AActor* SourceActor)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortDagwoodVehicleManager", "CustomHandleActorStreamedInEditor");

	Params::FortDagwoodVehicleManager_CustomHandleActorStreamedInEditor Parms{};

	Parms.SourceActor = SourceActor;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UFortDagwoodVehicleManager::OnVehicleSpawned(class AFortAthenaVehicle* Vehicle)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortDagwoodVehicleManager", "OnVehicleSpawned");

	Params::FortDagwoodVehicleManager_OnVehicleSpawned Parms{};

	Parms.Vehicle = Vehicle;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UFortDagwoodVehicleManager::OnVehicleSpawnsUpdated(class UFortVehicleItemDefinition* VehicleItemDef, TArray<class AActor*>* SpawnedVehicles, int32 NewVehicleCount)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortDagwoodVehicleManager", "OnVehicleSpawnsUpdated");

	Params::FortDagwoodVehicleManager_OnVehicleSpawnsUpdated Parms{};

	Parms.VehicleItemDef = VehicleItemDef;
	Parms.NewVehicleCount = NewVehicleCount;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	if (SpawnedVehicles != nullptr)
		*SpawnedVehicles = std::move(Parms.SpawnedVehicles);
}

void UFortDagwoodVehicleManager::UpdatePropReplacement()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortDagwoodVehicleManager", "UpdatePropReplacement");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void AFortValetAudioController::CacheValetVehicle(class AFortDagwoodVehicle* InVehicle)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortValetAudioController", "CacheValetVehicle");

	Params::FortValetAudioController_CacheValetVehicle Parms{};

	Parms.InVehicle = InVehicle;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void AFortValetAudioController::OnSuspensionCollision_Native(bool* outResult, float* OutMagnitude)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortValetAudioController", "OnSuspensionCollision_Native");

	Params::FortValetAudioController_OnSuspensionCollision_Native Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	if (outResult != nullptr)
		*outResult = Parms.outResult;

	if (OutMagnitude != nullptr)
		*OutMagnitude = Parms.OutMagnitude;
}

void AFortValetAudioController::OnTireModApplied(const struct FTireInfo& AppliedTireMod)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortValetAudioController", "OnTireModApplied");

	Params::FortValetAudioController_OnTireModApplied Parms{};

	Parms.AppliedTireMod = std::move(AppliedTireMod);

	UObject::ProcessEvent(Func, &Parms);
}

void AFortValetAudioController::Update_Native()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortValetAudioController", "Update_Native");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

}
