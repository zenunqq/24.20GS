#pragma once

#include "Basic.hpp"

#include "GrindRailRuntime_classes.hpp"
#include "GrindRailRuntime_parameters.hpp"

namespace SDK
{

void AFortGrindRail::BPRerunConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortGrindRail", "BPRerunConstructionScript");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void AFortGrindRail::ForceClearBoosters()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortGrindRail", "ForceClearBoosters");

	UObject::ProcessEvent(Func, nullptr);
}

void AFortGrindRail::GetConnectionForGrinding(const float DistanceToTravel, const float CurrentDistanceAlongSpline, const float NextDistanceOnRail, const float RightLeanValue, bool* bNewRail, float* DistanceAlongNewRail, class AFortGrindRail** TheNewRail, bool* bNewRailReverseDirection)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortGrindRail", "GetConnectionForGrinding");

	Params::FortGrindRail_GetConnectionForGrinding Parms{};

	Parms.DistanceToTravel = DistanceToTravel;
	Parms.CurrentDistanceAlongSpline = CurrentDistanceAlongSpline;
	Parms.NextDistanceOnRail = NextDistanceOnRail;
	Parms.RightLeanValue = RightLeanValue;

	UObject::ProcessEvent(Func, &Parms);

	if (bNewRail != nullptr)
		*bNewRail = Parms.bNewRail;

	if (DistanceAlongNewRail != nullptr)
		*DistanceAlongNewRail = Parms.DistanceAlongNewRail;

	if (TheNewRail != nullptr)
		*TheNewRail = Parms.TheNewRail;

	if (bNewRailReverseDirection != nullptr)
		*bNewRailReverseDirection = Parms.bNewRailReverseDirection;
}

bool AFortGrindRail::IsTipCapped(const bool bStartTip)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortGrindRail", "IsTipCapped");

	Params::FortGrindRail_IsTipCapped Parms{};

	Parms.bStartTip = bStartTip;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

bool AFortGrindRail::IsTipConnected(const bool bStartTip)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortGrindRail", "IsTipConnected");

	Params::FortGrindRail_IsTipConnected Parms{};

	Parms.bStartTip = bStartTip;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

void AFortGrindRail::NativeGetNextPositionToGrind(const float DistanceToTravel, const float CurrentDistanceAlongSpline, const float RightLeanValue, struct FVector* OutNextLocation, bool* bGotToEnd, float* NextLocationOnRail, EGrindRailBoosterMode* BoosterMode, bool* bHitObstacle, bool* bNewRail, float* DistanceAlongNewRail, class AFortGrindRail** TheNewRail, bool* bNewRailReverseDirection)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortGrindRail", "NativeGetNextPositionToGrind");

	Params::FortGrindRail_NativeGetNextPositionToGrind Parms{};

	Parms.DistanceToTravel = DistanceToTravel;
	Parms.CurrentDistanceAlongSpline = CurrentDistanceAlongSpline;
	Parms.RightLeanValue = RightLeanValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	if (OutNextLocation != nullptr)
		*OutNextLocation = std::move(Parms.OutNextLocation);

	if (bGotToEnd != nullptr)
		*bGotToEnd = Parms.bGotToEnd;

	if (NextLocationOnRail != nullptr)
		*NextLocationOnRail = Parms.NextLocationOnRail;

	if (BoosterMode != nullptr)
		*BoosterMode = Parms.BoosterMode;

	if (bHitObstacle != nullptr)
		*bHitObstacle = Parms.bHitObstacle;

	if (bNewRail != nullptr)
		*bNewRail = Parms.bNewRail;

	if (DistanceAlongNewRail != nullptr)
		*DistanceAlongNewRail = Parms.DistanceAlongNewRail;

	if (TheNewRail != nullptr)
		*TheNewRail = Parms.TheNewRail;

	if (bNewRailReverseDirection != nullptr)
		*bNewRailReverseDirection = Parms.bNewRailReverseDirection;
}

void AFortGrindRail::OnPlaylistDataReady(class AFortGameStateAthena* GameState, const class UFortPlaylist* Playlist, const struct FGameplayTagContainer& PlaylistContextTags)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortGrindRail", "OnPlaylistDataReady");

	Params::FortGrindRail_OnPlaylistDataReady Parms{};

	Parms.GameState = GameState;
	Parms.Playlist = Playlist;
	Parms.PlaylistContextTags = std::move(PlaylistContextTags);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void AFortGrindRail::OnRep_DisableBooster()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortGrindRail", "OnRep_DisableBooster");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void AFortGrindRail::SetupMeshInfo(class USplineMeshComponent* SplineMeshComponent, const int32 StartIndex, const int32 EndIndex, const float StartDistance, const float EndDistance)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortGrindRail", "SetupMeshInfo");

	Params::FortGrindRail_SetupMeshInfo Parms{};

	Parms.SplineMeshComponent = SplineMeshComponent;
	Parms.StartIndex = StartIndex;
	Parms.EndIndex = EndIndex;
	Parms.StartDistance = StartDistance;
	Parms.EndDistance = EndDistance;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UFortGrindRailLayerAnimInstance::AnimNotify_EntryEnter(const class UAnimNotify* Notify)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortGrindRailLayerAnimInstance", "AnimNotify_EntryEnter");

	Params::FortGrindRailLayerAnimInstance_AnimNotify_EntryEnter Parms{};

	Parms.Notify = Notify;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UFortGrindRailLayerAnimInstance::AnimNotify_EntryExit(const class UAnimNotify* Notify)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortGrindRailLayerAnimInstance", "AnimNotify_EntryExit");

	Params::FortGrindRailLayerAnimInstance_AnimNotify_EntryExit Parms{};

	Parms.Notify = Notify;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UFortGrindRailLayerAnimInstance::AnimNotify_IdleEnter(const class UAnimNotify* Notify)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortGrindRailLayerAnimInstance", "AnimNotify_IdleEnter");

	Params::FortGrindRailLayerAnimInstance_AnimNotify_IdleEnter Parms{};

	Parms.Notify = Notify;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UFortGrindRailLayerAnimInstance::HandleBegunGrinding(bool bWasAlreadyGrinding, bool bWasJumpingFromRail, bool bFromInteraction, const struct FVector& PreviousPlayerLocation)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortGrindRailLayerAnimInstance", "HandleBegunGrinding");

	Params::FortGrindRailLayerAnimInstance_HandleBegunGrinding Parms{};

	Parms.bWasAlreadyGrinding = bWasAlreadyGrinding;
	Parms.bWasJumpingFromRail = bWasJumpingFromRail;
	Parms.bFromInteraction = bFromInteraction;
	Parms.PreviousPlayerLocation = std::move(PreviousPlayerLocation);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void AFortGameplayCueNotifyLoop_Grinding::CacheReferences(class UAudioComponent* InAudioComponent, class UFXSystemComponent* InEffectsComponent, class AFortPlayerPawn* InPlayerPawn, class UFortPawnComponent_GrindRail* InGrindComponent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortGameplayCueNotifyLoop_Grinding", "CacheReferences");

	Params::FortGameplayCueNotifyLoop_Grinding_CacheReferences Parms{};

	Parms.InAudioComponent = InAudioComponent;
	Parms.InEffectsComponent = InEffectsComponent;
	Parms.InPlayerPawn = InPlayerPawn;
	Parms.InGrindComponent = InGrindComponent;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void AFortGameplayCueNotifyLoop_Grinding::OnForwardChanged(bool bNewState)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortGameplayCueNotifyLoop_Grinding", "OnForwardChanged");

	Params::FortGameplayCueNotifyLoop_Grinding_OnForwardChanged Parms{};

	Parms.bNewState = bNewState;

	UObject::ProcessEvent(Func, &Parms);
}

void UFortPawnComponent_GrindRail::AddMoveIgnoreActor(class ABuildingActor* BuildingActor)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortPawnComponent_GrindRail", "AddMoveIgnoreActor");

	Params::FortPawnComponent_GrindRail_AddMoveIgnoreActor Parms{};

	Parms.BuildingActor = BuildingActor;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

bool UFortPawnComponent_GrindRail::AttemptDestroyVehicleWhileGrinding(class AFortAthenaVehicle* Vehicle)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortPawnComponent_GrindRail", "AttemptDestroyVehicleWhileGrinding");

	Params::FortPawnComponent_GrindRail_AttemptDestroyVehicleWhileGrinding Parms{};

	Parms.Vehicle = Vehicle;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

void UFortPawnComponent_GrindRail::BeginGrinding(class AFortGrindRail* GrindRail, const float OptionalStartDistance, const bool bFromInteraction)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortPawnComponent_GrindRail", "BeginGrinding");

	Params::FortPawnComponent_GrindRail_BeginGrinding Parms{};

	Parms.GrindRail = GrindRail;
	Parms.OptionalStartDistance = OptionalStartDistance;
	Parms.bFromInteraction = bFromInteraction;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UFortPawnComponent_GrindRail::CalculateVelocity(const float DeltaTime, const bool bReplayingMovement, struct FVector* OutVelocity)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortPawnComponent_GrindRail", "CalculateVelocity");

	Params::FortPawnComponent_GrindRail_CalculateVelocity Parms{};

	Parms.DeltaTime = DeltaTime;
	Parms.bReplayingMovement = bReplayingMovement;

	UObject::ProcessEvent(Func, &Parms);

	if (OutVelocity != nullptr)
		*OutVelocity = std::move(Parms.OutVelocity);
}

bool UFortPawnComponent_GrindRail::CanBeginGrinding()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortPawnComponent_GrindRail", "CanBeginGrinding");

	Params::FortPawnComponent_GrindRail_CanBeginGrinding Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

void UFortPawnComponent_GrindRail::EndGrinding(const bool bSetEndMovementMode)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortPawnComponent_GrindRail", "EndGrinding");

	Params::FortPawnComponent_GrindRail_EndGrinding Parms{};

	Parms.bSetEndMovementMode = bSetEndMovementMode;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UFortPawnComponent_GrindRail::HandleGrindFinishedAfterJumping()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortPawnComponent_GrindRail", "HandleGrindFinishedAfterJumping");

	UObject::ProcessEvent(Func, nullptr);
}

void UFortPawnComponent_GrindRail::HandleGrindingBegun()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortPawnComponent_GrindRail", "HandleGrindingBegun");

	UObject::ProcessEvent(Func, nullptr);
}

void UFortPawnComponent_GrindRail::HandleGrindingEnded()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortPawnComponent_GrindRail", "HandleGrindingEnded");

	UObject::ProcessEvent(Func, nullptr);
}

void UFortPawnComponent_GrindRail::HandleGrindingEndedFromReplication()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortPawnComponent_GrindRail", "HandleGrindingEndedFromReplication");

	UObject::ProcessEvent(Func, nullptr);
}

void UFortPawnComponent_GrindRail::HandleHitWhenGrinding(const struct FHitResult& Hit)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortPawnComponent_GrindRail", "HandleHitWhenGrinding");

	Params::FortPawnComponent_GrindRail_HandleHitWhenGrinding Parms{};

	Parms.Hit = std::move(Hit);

	UObject::ProcessEvent(Func, &Parms);
}

void UFortPawnComponent_GrindRail::HandleJumpOffEnd()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortPawnComponent_GrindRail", "HandleJumpOffEnd");

	UObject::ProcessEvent(Func, nullptr);
}

void UFortPawnComponent_GrindRail::HandleRailJump()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortPawnComponent_GrindRail", "HandleRailJump");

	UObject::ProcessEvent(Func, nullptr);
}

void UFortPawnComponent_GrindRail::OnBaseMeshReady(class AFortPlayerPawn* Pawn, class USkeletalMeshComponent* MeshComponent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortPawnComponent_GrindRail", "OnBaseMeshReady");

	Params::FortPawnComponent_GrindRail_OnBaseMeshReady Parms{};

	Parms.Pawn = Pawn;
	Parms.MeshComponent = MeshComponent;

	UObject::ProcessEvent(Func, &Parms);
}

void UFortPawnComponent_GrindRail::OnIgnoredBuildingEndPlay(class AActor* Actor, EEndPlayReason EndPlayReason)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortPawnComponent_GrindRail", "OnIgnoredBuildingEndPlay");

	Params::FortPawnComponent_GrindRail_OnIgnoredBuildingEndPlay Parms{};

	Parms.Actor = Actor;
	Parms.EndPlayReason = EndPlayReason;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UFortPawnComponent_GrindRail::OnJumpInput(bool bPressed)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortPawnComponent_GrindRail", "OnJumpInput");

	Params::FortPawnComponent_GrindRail_OnJumpInput Parms{};

	Parms.bPressed = bPressed;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UFortPawnComponent_GrindRail::OnMovementModeChanged(class ACharacter* InCharacter, EMovementMode PrevMovementMode, uint8 PreviousCustomMode)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortPawnComponent_GrindRail", "OnMovementModeChanged");

	Params::FortPawnComponent_GrindRail_OnMovementModeChanged Parms{};

	Parms.InCharacter = InCharacter;
	Parms.PrevMovementMode = PrevMovementMode;
	Parms.PreviousCustomMode = PreviousCustomMode;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UFortPawnComponent_GrindRail::OnReloadInput()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortPawnComponent_GrindRail", "OnReloadInput");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void UFortPawnComponent_GrindRail::OnRep_CurrentBoosterMode(const EGrindRailBoosterMode PreviousBoosterMode)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortPawnComponent_GrindRail", "OnRep_CurrentBoosterMode");

	Params::FortPawnComponent_GrindRail_OnRep_CurrentBoosterMode Parms{};

	Parms.PreviousBoosterMode = PreviousBoosterMode;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UFortPawnComponent_GrindRail::OnRep_CurrentRailMeshInfo()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortPawnComponent_GrindRail", "OnRep_CurrentRailMeshInfo");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void UFortPawnComponent_GrindRail::OnRep_GrindingRail()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortPawnComponent_GrindRail", "OnRep_GrindingRail");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void UFortPawnComponent_GrindRail::OnRep_IsSprinting()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortPawnComponent_GrindRail", "OnRep_IsSprinting");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void UFortPawnComponent_GrindRail::OnWalkingBaseChanged(class AActor* NewBase)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortPawnComponent_GrindRail", "OnWalkingBaseChanged");

	Params::FortPawnComponent_GrindRail_OnWalkingBaseChanged Parms{};

	Parms.NewBase = NewBase;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UFortPawnComponent_GrindRail::RemoveMoveIgnoreActors()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortPawnComponent_GrindRail", "RemoveMoveIgnoreActors");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void UFortPawnComponent_GrindRail::ServerUpdateWeaponHolstered(const bool bNewHolstered, const bool bPlayEquipAnim)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortPawnComponent_GrindRail", "ServerUpdateWeaponHolstered");

	Params::FortPawnComponent_GrindRail_ServerUpdateWeaponHolstered Parms{};

	Parms.bNewHolstered = bNewHolstered;
	Parms.bPlayEquipAnim = bPlayEquipAnim;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UFortPawnComponent_GrindRail::SetGrindBaseActor(class AActor* NewBaseActor)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortPawnComponent_GrindRail", "SetGrindBaseActor");

	Params::FortPawnComponent_GrindRail_SetGrindBaseActor Parms{};

	Parms.NewBaseActor = NewBaseActor;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UFortPawnComponent_GrindRail::SetGrindDistanceOnSpline(const float NewDistanceOnSpline)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortPawnComponent_GrindRail", "SetGrindDistanceOnSpline");

	Params::FortPawnComponent_GrindRail_SetGrindDistanceOnSpline Parms{};

	Parms.NewDistanceOnSpline = NewDistanceOnSpline;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UFortPawnComponent_GrindRail::SetIsSprinting(const bool bNewIsSprinting)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortPawnComponent_GrindRail", "SetIsSprinting");

	Params::FortPawnComponent_GrindRail_SetIsSprinting Parms{};

	Parms.bNewIsSprinting = bNewIsSprinting;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UFortPawnComponent_GrindRail::SetMovementStatus(const struct FVector& NewStatus)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortPawnComponent_GrindRail", "SetMovementStatus");

	Params::FortPawnComponent_GrindRail_SetMovementStatus Parms{};

	Parms.NewStatus = std::move(NewStatus);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UFortPawnComponent_GrindRail::DrawDebugHUD(class AHUD* HUD, class UCanvas* Canvas) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortPawnComponent_GrindRail", "DrawDebugHUD");

	Params::FortPawnComponent_GrindRail_DrawDebugHUD Parms{};

	Parms.HUD = HUD;
	Parms.Canvas = Canvas;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UFortPawnComponent_GrindRail::GetCameraOrientedLeanValues(const float RawLeanForward, const float RawLeanRight, float* OrientedLeanForward, float* OrientedLeanRight) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortPawnComponent_GrindRail", "GetCameraOrientedLeanValues");

	Params::FortPawnComponent_GrindRail_GetCameraOrientedLeanValues Parms{};

	Parms.RawLeanForward = RawLeanForward;
	Parms.RawLeanRight = RawLeanRight;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	if (OrientedLeanForward != nullptr)
		*OrientedLeanForward = Parms.OrientedLeanForward;

	if (OrientedLeanRight != nullptr)
		*OrientedLeanRight = Parms.OrientedLeanRight;
}

class AActor* UFortPawnComponent_GrindRail::GetGrindBaseActor() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortPawnComponent_GrindRail", "GetGrindBaseActor");

	Params::FortPawnComponent_GrindRail_GetGrindBaseActor Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

float UFortPawnComponent_GrindRail::GetGrindDistanceOnSpline() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortPawnComponent_GrindRail", "GetGrindDistanceOnSpline");

	Params::FortPawnComponent_GrindRail_GetGrindDistanceOnSpline Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

bool UFortPawnComponent_GrindRail::GetGrindRequestJump() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortPawnComponent_GrindRail", "GetGrindRequestJump");

	Params::FortPawnComponent_GrindRail_GetGrindRequestJump Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

float UFortPawnComponent_GrindRail::GetHorizontalSplineAngleDeltaDegrees() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortPawnComponent_GrindRail", "GetHorizontalSplineAngleDeltaDegrees");

	Params::FortPawnComponent_GrindRail_GetHorizontalSplineAngleDeltaDegrees Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

float UFortPawnComponent_GrindRail::GetLeanForwardSpeedNormalized() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortPawnComponent_GrindRail", "GetLeanForwardSpeedNormalized");

	Params::FortPawnComponent_GrindRail_GetLeanForwardSpeedNormalized Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

struct FVector UFortPawnComponent_GrindRail::GetMovementStatus() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortPawnComponent_GrindRail", "GetMovementStatus");

	Params::FortPawnComponent_GrindRail_GetMovementStatus Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

float UFortPawnComponent_GrindRail::GetSpeedHardCap() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortPawnComponent_GrindRail", "GetSpeedHardCap");

	Params::FortPawnComponent_GrindRail_GetSpeedHardCap Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

bool UFortPawnComponent_GrindRail::GetWantsToGrind() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortPawnComponent_GrindRail", "GetWantsToGrind");

	Params::FortPawnComponent_GrindRail_GetWantsToGrind Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

bool UFortPawnComponent_GrindRail::IsGrinding() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortPawnComponent_GrindRail", "IsGrinding");

	Params::FortPawnComponent_GrindRail_IsGrinding Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

bool UFortPawnComponent_GrindRail::IsUsingToggleSprint() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortPawnComponent_GrindRail", "IsUsingToggleSprint");

	Params::FortPawnComponent_GrindRail_IsUsingToggleSprint Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

bool UFortPawnComponent_GrindRail::IsWeaponActive() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortPawnComponent_GrindRail", "IsWeaponActive");

	Params::FortPawnComponent_GrindRail_IsWeaponActive Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

bool UFortPawnComponent_GrindRail::IsWeaponADS() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortPawnComponent_GrindRail", "IsWeaponADS");

	Params::FortPawnComponent_GrindRail_IsWeaponADS Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

bool UFortPawnComponent_GrindRail::NativeIsShooting() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortPawnComponent_GrindRail", "NativeIsShooting");

	Params::FortPawnComponent_GrindRail_NativeIsShooting Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

}
