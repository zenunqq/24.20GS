#pragma once

#include "Basic.hpp"

#include "SupplyDropRadioRuntime_classes.hpp"
#include "SupplyDropRadioRuntime_parameters.hpp"

namespace SDK
{

void ABuildingGameplayActorSupplyDropRadio::HandleMoveIgnoredActorEndPlay(class AActor* EndPlayActor, EEndPlayReason Reason)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BuildingGameplayActorSupplyDropRadio", "HandleMoveIgnoredActorEndPlay");

	Params::BuildingGameplayActorSupplyDropRadio_HandleMoveIgnoredActorEndPlay Parms{};

	Parms.EndPlayActor = EndPlayActor;
	Parms.Reason = Reason;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void ABuildingGameplayActorSupplyDropRadio::OnRep_BalloonState()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BuildingGameplayActorSupplyDropRadio", "OnRep_BalloonState");

	UObject::ProcessEvent(Func, nullptr);
}

void ABuildingGameplayActorSupplyDropRadio::OnRep_DistanceFromOriginalSpawnLocForBalloonOpen()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BuildingGameplayActorSupplyDropRadio", "OnRep_DistanceFromOriginalSpawnLocForBalloonOpen");

	UObject::ProcessEvent(Func, nullptr);
}

void ABuildingGameplayActorSupplyDropRadio::OpenSupplyDrop()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BuildingGameplayActorSupplyDropRadio", "OpenSupplyDrop");

	UObject::ProcessEvent(Func, nullptr);
}

void ABuildingGameplayActorSupplyDropRadio::SetBalloonState(const ESupplyDropRadioBalloonState InBalloonState)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BuildingGameplayActorSupplyDropRadio", "SetBalloonState");

	Params::BuildingGameplayActorSupplyDropRadio_SetBalloonState Parms{};

	Parms.InBalloonState = InBalloonState;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void ABuildingGameplayActorSupplyDropRadio::SetGravityMultiplier(const float InGravityMultiplier)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BuildingGameplayActorSupplyDropRadio", "SetGravityMultiplier");

	Params::BuildingGameplayActorSupplyDropRadio_SetGravityMultiplier Parms{};

	Parms.InGravityMultiplier = InGravityMultiplier;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void ABuildingGameplayActorSupplyDropRadio::UpdateGroundInfo(const bool bValidBlock, const struct FHitResult& MovementHitResult)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BuildingGameplayActorSupplyDropRadio", "UpdateGroundInfo");

	Params::BuildingGameplayActorSupplyDropRadio_UpdateGroundInfo Parms{};

	Parms.bValidBlock = bValidBlock;
	Parms.MovementHitResult = std::move(MovementHitResult);

	UObject::ProcessEvent(Func, &Parms);
}

ESupplyDropRadioBalloonState ABuildingGameplayActorSupplyDropRadio::GetBalloonState() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BuildingGameplayActorSupplyDropRadio", "GetBalloonState");

	Params::BuildingGameplayActorSupplyDropRadio_GetBalloonState Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

float ABuildingGameplayActorSupplyDropRadio::GetGravityZ() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BuildingGameplayActorSupplyDropRadio", "GetGravityZ");

	Params::BuildingGameplayActorSupplyDropRadio_GetGravityZ Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

class AActor* ABuildingGameplayActorSupplyDropRadio::GetHighestAttachParent(const class AActor* InActor) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BuildingGameplayActorSupplyDropRadio", "GetHighestAttachParent");

	Params::BuildingGameplayActorSupplyDropRadio_GetHighestAttachParent Parms{};

	Parms.InActor = InActor;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

class UBoxComponent* ABuildingGameplayActorSupplyDropRadio::GetRootCollisionComponent() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BuildingGameplayActorSupplyDropRadio", "GetRootCollisionComponent");

	Params::BuildingGameplayActorSupplyDropRadio_GetRootCollisionComponent Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

bool ABuildingGameplayActorSupplyDropRadio::IsGrounded() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BuildingGameplayActorSupplyDropRadio", "IsGrounded");

	Params::BuildingGameplayActorSupplyDropRadio_IsGrounded Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

bool ABuildingGameplayActorSupplyDropRadio::IsMoving() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BuildingGameplayActorSupplyDropRadio", "IsMoving");

	Params::BuildingGameplayActorSupplyDropRadio_IsMoving Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

void UFortSupplyDropRadioAttachActorComponent::SetOwningActorNetCullDistance(const float DistanceSquared) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortSupplyDropRadioAttachActorComponent", "SetOwningActorNetCullDistance");

	Params::FortSupplyDropRadioAttachActorComponent_SetOwningActorNetCullDistance Parms{};

	Parms.DistanceSquared = DistanceSquared;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UFortSupplyDropRadioBlueprintLibrary::SetMoveShouldAbortConversation(class AFortPlayerControllerGameplay* PlayerController, const bool bNewMoveAbortConversation)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("FortSupplyDropRadioBlueprintLibrary", "SetMoveShouldAbortConversation");

	Params::FortSupplyDropRadioBlueprintLibrary_SetMoveShouldAbortConversation Parms{};

	Parms.PlayerController = PlayerController;
	Parms.bNewMoveAbortConversation = bNewMoveAbortConversation;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UFortSupplyDropRadioBlueprintLibrary::StopCurrentConversation(class AFortPlayerControllerGameplay* PlayerController)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("FortSupplyDropRadioBlueprintLibrary", "StopCurrentConversation");

	Params::FortSupplyDropRadioBlueprintLibrary_StopCurrentConversation Parms{};

	Parms.PlayerController = PlayerController;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

}
