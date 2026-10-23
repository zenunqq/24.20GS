#pragma once

#include "Basic.hpp"

#include "PlayspaceSystem_classes.hpp"
#include "PlayspaceSystem_parameters.hpp"

namespace SDK
{

void UOverlapComponent::OnBeginActorOverlap(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("OverlapComponent", "OnBeginActorOverlap");

	Params::OverlapComponent_OnBeginActorOverlap Parms{};

	Parms.OverlappedComponent = OverlappedComponent;
	Parms.OtherActor = OtherActor;
	Parms.OtherComp = OtherComp;
	Parms.OtherBodyIndex = OtherBodyIndex;
	Parms.bFromSweep = bFromSweep;
	Parms.SweepResult = std::move(SweepResult);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UOverlapComponent::OnEndActorOverlap(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("OverlapComponent", "OnEndActorOverlap");

	Params::OverlapComponent_OnEndActorOverlap Parms{};

	Parms.OverlappedComponent = OverlappedComponent;
	Parms.OtherActor = OtherActor;
	Parms.OtherComp = OtherComp;
	Parms.OtherBodyIndex = OtherBodyIndex;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UPlayspaceControllerComponent_PlayerSpawning::OnRep_ReplicatedSpawnInfo()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlayspaceControllerComponent_PlayerSpawning", "OnRep_ReplicatedSpawnInfo");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void UPlayspaceControllerComponent_PlayerSpawning::ServerMarkReadyForSpawning()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlayspaceControllerComponent_PlayerSpawning", "ServerMarkReadyForSpawning");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

const struct FReplicatedSpawnInfo UPlayspaceControllerComponent_PlayerSpawning::GetSpawnInfo() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlayspaceControllerComponent_PlayerSpawning", "GetSpawnInfo");

	Params::PlayspaceControllerComponent_PlayerSpawning_GetSpawnInfo Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

void AGameplayVolume::InitializeBoundsComponent(class UOverlapComponent* NewBoundsComponent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GameplayVolume", "InitializeBoundsComponent");

	Params::GameplayVolume_InitializeBoundsComponent Parms{};

	Parms.NewBoundsComponent = NewBoundsComponent;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void AGameplayVolume::OnOverlappedPawnControllerChanged(class APawn* Pawn, class AController* OldController, class AController* NewController)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GameplayVolume", "OnOverlappedPawnControllerChanged");

	Params::GameplayVolume_OnOverlappedPawnControllerChanged Parms{};

	Parms.Pawn = Pawn;
	Parms.OldController = OldController;
	Parms.NewController = NewController;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void AGameplayVolume::UpdateSize(const struct FVector& NewScale)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GameplayVolume", "UpdateSize");

	Params::GameplayVolume_UpdateSize Parms{};

	Parms.NewScale = std::move(NewScale);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

class APlayspace* AGameplayVolume::GetPlayspace() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GameplayVolume", "GetPlayspace");

	Params::GameplayVolume_GetPlayspace Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

void APlayspace::OnRep_bIsInitialized()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Playspace", "OnRep_bIsInitialized");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void APlayspace::OnRep_bMatchHasEnded()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Playspace", "OnRep_bMatchHasEnded");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void APlayspace::OnRep_MatchStartTime()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Playspace", "OnRep_MatchStartTime");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void APlayspace::OnRep_PlayspaceUsers()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Playspace", "OnRep_PlayspaceUsers");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void UPlayspaceLibrary::DestroyPlayspace(class APlayspace* PlayspaceToDestroy)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("PlayspaceLibrary", "DestroyPlayspace");

	Params::PlayspaceLibrary_DestroyPlayspace Parms{};

	Parms.PlayspaceToDestroy = PlayspaceToDestroy;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

class APlayspace* UPlayspaceLibrary::GetPlayspaceForActor(const class UObject* WorldContextObject, class AActor* InActor)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("PlayspaceLibrary", "GetPlayspaceForActor");

	Params::PlayspaceLibrary_GetPlayspaceForActor Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.InActor = InActor;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

void APlayspaceLogic::OnRep_bMatchHasEnded()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlayspaceLogic", "OnRep_bMatchHasEnded");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void APlayspaceLogic::OnRep_MatchStartTime()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlayspaceLogic", "OnRep_MatchStartTime");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void UPlayspaceManagerComponent::OnPlayerBeginOverlapGameplayVolume(class APlayerState* PlayerState, class AGameplayVolume* Volume)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlayspaceManagerComponent", "OnPlayerBeginOverlapGameplayVolume");

	Params::PlayspaceManagerComponent_OnPlayerBeginOverlapGameplayVolume Parms{};

	Parms.PlayerState = PlayerState;
	Parms.Volume = Volume;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UPlayspaceManagerComponent::OnPlayerEndOverlapGameplayVolume(class APlayerState* PlayerState, class AGameplayVolume* Volume)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlayspaceManagerComponent", "OnPlayerEndOverlapGameplayVolume");

	Params::PlayspaceManagerComponent_OnPlayerEndOverlapGameplayVolume Parms{};

	Parms.PlayerState = PlayerState;
	Parms.Volume = Volume;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UPlayspaceManagerComponent::OnRep_RootPlayspace()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlayspaceManagerComponent", "OnRep_RootPlayspace");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

bool UPlayspaceManagerComponent::ProcessOverlapEvents(float DeltaTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlayspaceManagerComponent", "ProcessOverlapEvents");

	Params::PlayspaceManagerComponent_ProcessOverlapEvents Parms{};

	Parms.DeltaTime = DeltaTime;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

void UPlayspacePlayerManagerComponent::OnPlayerPawnSet(class APlayerState* Player, class APawn* NewPawn, class APawn* OldPawn)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlayspacePlayerManagerComponent", "OnPlayerPawnSet");

	Params::PlayspacePlayerManagerComponent_OnPlayerPawnSet Parms{};

	Parms.Player = Player;
	Parms.NewPawn = NewPawn;
	Parms.OldPawn = OldPawn;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

}
