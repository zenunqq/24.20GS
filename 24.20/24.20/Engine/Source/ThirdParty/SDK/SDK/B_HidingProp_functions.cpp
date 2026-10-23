#pragma once

#include "Basic.hpp"

#include "B_HidingProp_classes.hpp"
#include "B_HidingProp_parameters.hpp"

namespace SDK
{

void AB_HidingProp_C::AddGameplayCue(const struct FGameplayTag& GameplayCueTag, const struct FGameplayCueParameters& CueParameters)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_HidingProp_C", "AddGameplayCue");

	Params::B_HidingProp_C_AddGameplayCue Parms{};

	Parms.GameplayCueTag = std::move(GameplayCueTag);
	Parms.CueParameters = std::move(CueParameters);

	UObject::ProcessEvent(Func, &Parms);
}

void AB_HidingProp_C::AddHiddenPlayer(class AFortPawn* FortPawn)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_HidingProp_C", "AddHiddenPlayer");

	Params::B_HidingProp_C_AddHiddenPlayer Parms{};

	Parms.FortPawn = FortPawn;

	UObject::ProcessEvent(Func, &Parms);
}

void AB_HidingProp_C::Allow_Cosmetics_For_Pawn(const class AFortPawn*& Pawn_0, bool* allow)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_HidingProp_C", "Allow Cosmetics For Pawn");

	Params::B_HidingProp_C_Allow_Cosmetics_For_Pawn Parms{};

	Parms.Pawn_0 = Pawn_0;

	UObject::ProcessEvent(Func, &Parms);

	if (allow != nullptr)
		*allow = Parms.allow;
}

void AB_HidingProp_C::BlueprintOnInteract(const class AFortPawn* InteractingPawn, const EInteractionBeingAttempted InteractionBeingAttempted)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_HidingProp_C", "BlueprintOnInteract");

	Params::B_HidingProp_C_BlueprintOnInteract Parms{};

	Parms.InteractingPawn = InteractingPawn;
	Parms.InteractionBeingAttempted = InteractionBeingAttempted;

	UObject::ProcessEvent(Func, &Parms);
}

void AB_HidingProp_C::BndEvt__S_Athena_Launchpad_Collision_K2Node_ComponentBoundEvent_4_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_HidingProp_C", "BndEvt__S_Athena_Launchpad_Collision_K2Node_ComponentBoundEvent_4_ComponentBeginOverlapSignature__DelegateSignature");

	Params::B_HidingProp_C_BndEvt__S_Athena_Launchpad_Collision_K2Node_ComponentBoundEvent_4_ComponentBeginOverlapSignature__DelegateSignature Parms{};

	Parms.OverlappedComponent = OverlappedComponent;
	Parms.OtherActor = OtherActor;
	Parms.OtherComp = OtherComp;
	Parms.OtherBodyIndex = OtherBodyIndex;
	Parms.bFromSweep = bFromSweep;
	Parms.SweepResult = std::move(SweepResult);

	UObject::ProcessEvent(Func, &Parms);
}

void AB_HidingProp_C::BP_HandleExitPressed(class AFortPlayerPawn* TargetPlayerPawn)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_HidingProp_C", "BP_HandleExitPressed");

	Params::B_HidingProp_C_BP_HandleExitPressed Parms{};

	Parms.TargetPlayerPawn = TargetPlayerPawn;

	UObject::ProcessEvent(Func, &Parms);
}

void AB_HidingProp_C::Can_Hide_by_Falling(class AActor* OtherActor, bool* CanHide, class AFortPlayerPawn** aFortPlayerPawn)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_HidingProp_C", "Can Hide by Falling");

	Params::B_HidingProp_C_Can_Hide_by_Falling Parms{};

	Parms.OtherActor = OtherActor;

	UObject::ProcessEvent(Func, &Parms);

	if (CanHide != nullptr)
		*CanHide = Parms.CanHide;

	if (aFortPlayerPawn != nullptr)
		*aFortPlayerPawn = Parms.aFortPlayerPawn;
}

bool AB_HidingProp_C::CheckCanUsePassage(class UObject* Object)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_HidingProp_C", "CheckCanUsePassage");

	Params::B_HidingProp_C_CheckCanUsePassage Parms{};

	Parms.Object = Object;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

void AB_HidingProp_C::EndHidingAnalyticSession(class AFortPawn* FortPawn, EEnvironmentalItemEndReason EndReason)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_HidingProp_C", "EndHidingAnalyticSession");

	Params::B_HidingProp_C_EndHidingAnalyticSession Parms{};

	Parms.FortPawn = FortPawn;
	Parms.EndReason = EndReason;

	UObject::ProcessEvent(Func, &Parms);
}

void AB_HidingProp_C::EntranceBlockedByUndamageable(class AFortPlayerPawn* PlayerPawn)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_HidingProp_C", "EntranceBlockedByUndamageable");

	Params::B_HidingProp_C_EntranceBlockedByUndamageable Parms{};

	Parms.PlayerPawn = PlayerPawn;

	UObject::ProcessEvent(Func, &Parms);
}

void AB_HidingProp_C::ExecuteGameplayCue(const struct FGameplayTag& GameplayCueTag, const struct FGameplayCueParameters& CueParameters)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_HidingProp_C", "ExecuteGameplayCue");

	Params::B_HidingProp_C_ExecuteGameplayCue Parms{};

	Parms.GameplayCueTag = std::move(GameplayCueTag);
	Parms.CueParameters = std::move(CueParameters);

	UObject::ProcessEvent(Func, &Parms);
}

void AB_HidingProp_C::ExecuteUbergraph_B_HidingProp(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_HidingProp_C", "ExecuteUbergraph_B_HidingProp");

	Params::B_HidingProp_C_ExecuteUbergraph_B_HidingProp Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

void AB_HidingProp_C::GetTurnClientCameraCollisionOnDelayTime(double* Delay)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_HidingProp_C", "GetTurnClientCameraCollisionOnDelayTime");

	Params::B_HidingProp_C_GetTurnClientCameraCollisionOnDelayTime Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Delay != nullptr)
		*Delay = Parms.Delay;
}

void AB_HidingProp_C::HidingPlayerCountChanged()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_HidingProp_C", "HidingPlayerCountChanged");

	UObject::ProcessEvent(Func, nullptr);
}

void AB_HidingProp_C::IgnorePawnCollision(class AFortPawn* Target, const double InIgnoreDuration)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_HidingProp_C", "IgnorePawnCollision");

	Params::B_HidingProp_C_IgnorePawnCollision Parms{};

	Parms.Target = Target;
	Parms.InIgnoreDuration = InIgnoreDuration;

	UObject::ProcessEvent(Func, &Parms);
}

void AB_HidingProp_C::IgnorePhysicsCollisionDamage(class AFortPawn* Target, double Ignore_Duration)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_HidingProp_C", "IgnorePhysicsCollisionDamage");

	Params::B_HidingProp_C_IgnorePhysicsCollisionDamage Parms{};

	Parms.Target = Target;
	Parms.Ignore_Duration = Ignore_Duration;

	UObject::ProcessEvent(Func, &Parms);
}

void AB_HidingProp_C::InteractEnter()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_HidingProp_C", "InteractEnter");

	UObject::ProcessEvent(Func, nullptr);
}

bool AB_HidingProp_C::IsInInfiltrationLTM()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_HidingProp_C", "IsInInfiltrationLTM");

	Params::B_HidingProp_C_IsInInfiltrationLTM Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

void AB_HidingProp_C::LandedOnHayStack(class AFortPlayerPawn* PlayerPawn, double Z_Velocity_Mag)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_HidingProp_C", "LandedOnHayStack");

	Params::B_HidingProp_C_LandedOnHayStack Parms{};

	Parms.PlayerPawn = PlayerPawn;
	Parms.Z_Velocity_Mag = Z_Velocity_Mag;

	UObject::ProcessEvent(Func, &Parms);
}

void AB_HidingProp_C::Launch_Pickups(TArray<class AFortPickup*>& Array_0, class AActor* Pawn_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_HidingProp_C", "Launch Pickups");

	Params::B_HidingProp_C_Launch_Pickups Parms{};

	Parms.Array_0 = std::move(Array_0);
	Parms.Pawn_0 = Pawn_0;

	UObject::ProcessEvent(Func, &Parms);

	Array_0 = std::move(Parms.Array_0);
}

void AB_HidingProp_C::LaunchPlayersOffTop(class AFortPlayerPawn* PlayerPawn)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_HidingProp_C", "LaunchPlayersOffTop");

	Params::B_HidingProp_C_LaunchPlayersOffTop Parms{};

	Parms.PlayerPawn = PlayerPawn;

	UObject::ProcessEvent(Func, &Parms);
}

void AB_HidingProp_C::Loot_MovementTimeline__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_HidingProp_C", "Loot_MovementTimeline__FinishedFunc");

	UObject::ProcessEvent(Func, nullptr);
}

void AB_HidingProp_C::Loot_MovementTimeline__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_HidingProp_C", "Loot_MovementTimeline__UpdateFunc");

	UObject::ProcessEvent(Func, nullptr);
}

void AB_HidingProp_C::OnCurieActive_F2BFC8C54691C42FB5230BA7B7DEE141()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_HidingProp_C", "OnCurieActive_F2BFC8C54691C42FB5230BA7B7DEE141");

	UObject::ProcessEvent(Func, nullptr);
}

void AB_HidingProp_C::OnDeathServer(float Damage, const struct FGameplayTagContainer& DamageTags, const struct FVector& Momentum, const struct FHitResult& HitInfo, class AController* InstigatedBy, class AActor* DamageCauser, const struct FGameplayEffectContextHandle& EffectContext)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_HidingProp_C", "OnDeathServer");

	Params::B_HidingProp_C_OnDeathServer Parms{};

	Parms.Damage = Damage;
	Parms.DamageTags = std::move(DamageTags);
	Parms.Momentum = std::move(Momentum);
	Parms.HitInfo = std::move(HitInfo);
	Parms.InstigatedBy = InstigatedBy;
	Parms.DamageCauser = DamageCauser;
	Parms.EffectContext = std::move(EffectContext);

	UObject::ProcessEvent(Func, &Parms);
}

void AB_HidingProp_C::OnMatchStarted()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_HidingProp_C", "OnMatchStarted");

	UObject::ProcessEvent(Func, nullptr);
}

void AB_HidingProp_C::OnReady_64CBF02E419FF250B433D5B2A6E5D744(class AFortGameStateAthena* GameState, const class UFortPlaylist* Playlist, const struct FGameplayTagContainer& PlaylistContextTags)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_HidingProp_C", "OnReady_64CBF02E419FF250B433D5B2A6E5D744");

	Params::B_HidingProp_C_OnReady_64CBF02E419FF250B433D5B2A6E5D744 Parms{};

	Parms.GameState = GameState;
	Parms.Playlist = Playlist;
	Parms.PlaylistContextTags = std::move(PlaylistContextTags);

	UObject::ProcessEvent(Func, &Parms);
}

void AB_HidingProp_C::OnRep_ContainsPlayer()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_HidingProp_C", "OnRep_ContainsPlayer");

	UObject::ProcessEvent(Func, nullptr);
}

void AB_HidingProp_C::OnRep_HidingPlayers()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_HidingProp_C", "OnRep_HidingPlayers");

	UObject::ProcessEvent(Func, nullptr);
}

void AB_HidingProp_C::OnRep_IsTeleporter()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_HidingProp_C", "OnRep_IsTeleporter");

	UObject::ProcessEvent(Func, nullptr);
}

void AB_HidingProp_C::OnRep_Teleporting()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_HidingProp_C", "OnRep_Teleporting");

	UObject::ProcessEvent(Func, nullptr);
}

void AB_HidingProp_C::Pawn_Died(class AActor* DamagedActor, float Damage, class AController* InstigatedBy, class AActor* DamageCauser, const struct FVector& HitLocation, class UPrimitiveComponent* FHitComponent, class FName BoneName, const struct FVector& Momentum)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_HidingProp_C", "Pawn Died");

	Params::B_HidingProp_C_Pawn_Died Parms{};

	Parms.DamagedActor = DamagedActor;
	Parms.Damage = Damage;
	Parms.InstigatedBy = InstigatedBy;
	Parms.DamageCauser = DamageCauser;
	Parms.HitLocation = std::move(HitLocation);
	Parms.FHitComponent = FHitComponent;
	Parms.BoneName = BoneName;
	Parms.Momentum = std::move(Momentum);

	UObject::ProcessEvent(Func, &Parms);
}

void AB_HidingProp_C::ReceiveActorBeginOverlap(class AActor* OtherActor)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_HidingProp_C", "ReceiveActorBeginOverlap");

	Params::B_HidingProp_C_ReceiveActorBeginOverlap Parms{};

	Parms.OtherActor = OtherActor;

	UObject::ProcessEvent(Func, &Parms);
}

void AB_HidingProp_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_HidingProp_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}

void AB_HidingProp_C::RemoveGameplayCue(const struct FGameplayTag& GameplayCueTag, const struct FGameplayCueParameters& CueParameters)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_HidingProp_C", "RemoveGameplayCue");

	Params::B_HidingProp_C_RemoveGameplayCue Parms{};

	Parms.GameplayCueTag = std::move(GameplayCueTag);
	Parms.CueParameters = std::move(CueParameters);

	UObject::ProcessEvent(Func, &Parms);
}

void AB_HidingProp_C::RemoveHiddenPlayer(class AFortPawn* FortPawn)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_HidingProp_C", "RemoveHiddenPlayer");

	Params::B_HidingProp_C_RemoveHiddenPlayer Parms{};

	Parms.FortPawn = FortPawn;

	UObject::ProcessEvent(Func, &Parms);
}

void AB_HidingProp_C::StartHiding(class AFortPawn* InteractingPawn)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_HidingProp_C", "StartHiding");

	Params::B_HidingProp_C_StartHiding Parms{};

	Parms.InteractingPawn = InteractingPawn;

	UObject::ProcessEvent(Func, &Parms);
}

void AB_HidingProp_C::StopHiding(const class AFortPawn* Pawn_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_HidingProp_C", "StopHiding");

	Params::B_HidingProp_C_StopHiding Parms{};

	Parms.Pawn_0 = Pawn_0;

	UObject::ProcessEvent(Func, &Parms);
}

void AB_HidingProp_C::StopHidingLoop()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_HidingProp_C", "StopHidingLoop");

	UObject::ProcessEvent(Func, nullptr);
}

void AB_HidingProp_C::Teleport(class AActor* Pawn_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_HidingProp_C", "Teleport");

	Params::B_HidingProp_C_Teleport Parms{};

	Parms.Pawn_0 = Pawn_0;

	UObject::ProcessEvent(Func, &Parms);
}

void AB_HidingProp_C::ToggleCameraCollisionForClients()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_HidingProp_C", "ToggleCameraCollisionForClients");

	UObject::ProcessEvent(Func, nullptr);
}

void AB_HidingProp_C::TurnClientCameraCollisionOn()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_HidingProp_C", "TurnClientCameraCollisionOn");

	UObject::ProcessEvent(Func, nullptr);
}

void AB_HidingProp_C::WatchForPlayerDeath(class AFortPawn* FortPawn)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_HidingProp_C", "WatchForPlayerDeath");

	Params::B_HidingProp_C_WatchForPlayerDeath Parms{};

	Parms.FortPawn = FortPawn;

	UObject::ProcessEvent(Func, &Parms);
}

bool AB_HidingProp_C::BlueprintCanInteract(const class AFortPawn* InteractingPawn, const EInteractionBeingAttempted InteractionBeingAttempted, const ETInteractionType InteractionType) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_HidingProp_C", "BlueprintCanInteract");

	Params::B_HidingProp_C_BlueprintCanInteract Parms{};

	Parms.InteractingPawn = InteractingPawn;
	Parms.InteractionBeingAttempted = InteractionBeingAttempted;
	Parms.InteractionType = InteractionType;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

class FText AB_HidingProp_C::BlueprintGetFailedInteractionString(const class AFortPawn* InteractingPawn, const EInteractionBeingAttempted InteractionBeingAttempted) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_HidingProp_C", "BlueprintGetFailedInteractionString");

	Params::B_HidingProp_C_BlueprintGetFailedInteractionString Parms{};

	Parms.InteractingPawn = InteractingPawn;
	Parms.InteractionBeingAttempted = InteractionBeingAttempted;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

class FText AB_HidingProp_C::BlueprintGetInteractionString(const class AFortPawn* InteractingPawn, const EInteractionBeingAttempted InteractionBeingAttempted) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_HidingProp_C", "BlueprintGetInteractionString");

	Params::B_HidingProp_C_BlueprintGetInteractionString Parms{};

	Parms.InteractingPawn = InteractingPawn;
	Parms.InteractionBeingAttempted = InteractionBeingAttempted;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

bool AB_HidingProp_C::BlueprintGetInteractionTime(const class AFortPawn* InteractingPawn, float* OutInteractionTime, const EInteractionBeingAttempted InteractionBeingAttempted) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_HidingProp_C", "BlueprintGetInteractionTime");

	Params::B_HidingProp_C_BlueprintGetInteractionTime Parms{};

	Parms.InteractingPawn = InteractingPawn;
	Parms.InteractionBeingAttempted = InteractionBeingAttempted;

	UObject::ProcessEvent(Func, &Parms);

	if (OutInteractionTime != nullptr)
		*OutInteractionTime = Parms.OutInteractionTime;

	return Parms.ReturnValue;
}

float AB_HidingProp_C::GetMinDistanceFromInteraction() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_HidingProp_C", "GetMinDistanceFromInteraction");

	Params::B_HidingProp_C_GetMinDistanceFromInteraction Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

void AB_HidingProp_C::GetPlayerLimit(int32* PlayerLimit_0) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_HidingProp_C", "GetPlayerLimit");

	Params::B_HidingProp_C_GetPlayerLimit Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (PlayerLimit_0 != nullptr)
		*PlayerLimit_0 = Parms.PlayerLimit_0;
}

void AB_HidingProp_C::LocalOnFailedInteract(const class AFortPlayerPawn* InteractingPawn) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_HidingProp_C", "LocalOnFailedInteract");

	Params::B_HidingProp_C_LocalOnFailedInteract Parms{};

	Parms.InteractingPawn = InteractingPawn;

	UObject::ProcessEvent(Func, &Parms);
}

void AB_HidingProp_C::Player_Getting_in_Prop(class AFortPawn* FortPawn, bool* Is_Getting_In) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_HidingProp_C", "Player Getting in Prop");

	Params::B_HidingProp_C_Player_Getting_in_Prop Parms{};

	Parms.FortPawn = FortPawn;

	UObject::ProcessEvent(Func, &Parms);

	if (Is_Getting_In != nullptr)
		*Is_Getting_In = Parms.Is_Getting_In;
}

void AB_HidingProp_C::Player_Hidden_in_Prop(class AFortPawn* Fort_Pawn, bool* IsHidden) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_HidingProp_C", "Player Hidden in Prop");

	Params::B_HidingProp_C_Player_Hidden_in_Prop Parms{};

	Parms.Fort_Pawn = Fort_Pawn;

	UObject::ProcessEvent(Func, &Parms);

	if (IsHidden != nullptr)
		*IsHidden = Parms.IsHidden;
}

}
