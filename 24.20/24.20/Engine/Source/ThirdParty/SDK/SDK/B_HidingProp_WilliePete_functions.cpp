#pragma once

#include "Basic.hpp"

#include "B_HidingProp_WilliePete_classes.hpp"
#include "B_HidingProp_WilliePete_parameters.hpp"

namespace SDK
{

void AB_HidingProp_WilliePete_C::BndEvt__overlapCylinder_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_HidingProp_WilliePete_C", "BndEvt__overlapCylinder_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature");

	Params::B_HidingProp_WilliePete_C_BndEvt__overlapCylinder_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature Parms{};

	Parms.OverlappedComponent = OverlappedComponent;
	Parms.OtherActor = OtherActor;
	Parms.OtherComp = OtherComp;
	Parms.OtherBodyIndex = OtherBodyIndex;
	Parms.bFromSweep = bFromSweep;
	Parms.SweepResult = std::move(SweepResult);

	UObject::ProcessEvent(Func, &Parms);
}

void AB_HidingProp_WilliePete_C::Complete_Setup()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_HidingProp_WilliePete_C", "Complete Setup");

	UObject::ProcessEvent(Func, nullptr);
}

void AB_HidingProp_WilliePete_C::ExecuteUbergraph_B_HidingProp_WilliePete(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_HidingProp_WilliePete_C", "ExecuteUbergraph_B_HidingProp_WilliePete");

	Params::B_HidingProp_WilliePete_C_ExecuteUbergraph_B_HidingProp_WilliePete Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

void AB_HidingProp_WilliePete_C::HelperLocationLogger(const class FString& InString)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_HidingProp_WilliePete_C", "HelperLocationLogger");

	Params::B_HidingProp_WilliePete_C_HelperLocationLogger Parms{};

	Parms.InString = std::move(InString);

	UObject::ProcessEvent(Func, &Parms);
}

void AB_HidingProp_WilliePete_C::Non_Pawn_Actor_Destroyed(class AActor* DestroyedActor)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_HidingProp_WilliePete_C", "Non Pawn Actor Destroyed");

	Params::B_HidingProp_WilliePete_C_Non_Pawn_Actor_Destroyed Parms{};

	Parms.DestroyedActor = DestroyedActor;

	UObject::ProcessEvent(Func, &Parms);
}

void AB_HidingProp_WilliePete_C::Non_Pawn_Teleport(class AActor* TeleportingActor)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_HidingProp_WilliePete_C", "Non Pawn Teleport");

	Params::B_HidingProp_WilliePete_C_Non_Pawn_Teleport Parms{};

	Parms.TeleportingActor = TeleportingActor;

	UObject::ProcessEvent(Func, &Parms);
}

void AB_HidingProp_WilliePete_C::OnReady_74044DD44988556292500EB8F289359F(class AFortGameStateAthena* GameState, const class UFortPlaylist* Playlist, const struct FGameplayTagContainer& PlaylistContextTags)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_HidingProp_WilliePete_C", "OnReady_74044DD44988556292500EB8F289359F");

	Params::B_HidingProp_WilliePete_C_OnReady_74044DD44988556292500EB8F289359F Parms{};

	Parms.GameState = GameState;
	Parms.Playlist = Playlist;
	Parms.PlaylistContextTags = std::move(PlaylistContextTags);

	UObject::ProcessEvent(Func, &Parms);
}

void AB_HidingProp_WilliePete_C::OnRep_AdjustedLocation()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_HidingProp_WilliePete_C", "OnRep_AdjustedLocation");

	UObject::ProcessEvent(Func, nullptr);
}

void AB_HidingProp_WilliePete_C::OnRep_bSetSilentDie()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_HidingProp_WilliePete_C", "OnRep_bSetSilentDie");

	UObject::ProcessEvent(Func, nullptr);
}

void AB_HidingProp_WilliePete_C::OnRep_bSetSpawnedWaterBody()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_HidingProp_WilliePete_C", "OnRep_bSetSpawnedWaterBody");

	UObject::ProcessEvent(Func, nullptr);
}

void AB_HidingProp_WilliePete_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_HidingProp_WilliePete_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}

void AB_HidingProp_WilliePete_C::Remove_GE()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_HidingProp_WilliePete_C", "Remove GE");

	UObject::ProcessEvent(Func, nullptr);
}

void AB_HidingProp_WilliePete_C::ResetGravity(const struct FHitResult& Hit)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_HidingProp_WilliePete_C", "ResetGravity");

	Params::B_HidingProp_WilliePete_C_ResetGravity Parms{};

	Parms.Hit = std::move(Hit);

	UObject::ProcessEvent(Func, &Parms);
}

void AB_HidingProp_WilliePete_C::StopHiding(const class AFortPawn* Pawn_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_HidingProp_WilliePete_C", "StopHiding");

	Params::B_HidingProp_WilliePete_C_StopHiding Parms{};

	Parms.Pawn_0 = Pawn_0;

	UObject::ProcessEvent(Func, &Parms);
}

void AB_HidingProp_WilliePete_C::TeleportExitSpeed(const struct FVector& ExitFVector, double EnterSpeed, double OverrideSpeed, double MinimumSpeed, bool ForceSpeedOverride, struct FVector* TeleportExitVelocity)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_HidingProp_WilliePete_C", "TeleportExitSpeed");

	Params::B_HidingProp_WilliePete_C_TeleportExitSpeed Parms{};

	Parms.ExitFVector = std::move(ExitFVector);
	Parms.EnterSpeed = EnterSpeed;
	Parms.OverrideSpeed = OverrideSpeed;
	Parms.MinimumSpeed = MinimumSpeed;
	Parms.ForceSpeedOverride = ForceSpeedOverride;

	UObject::ProcessEvent(Func, &Parms);

	if (TeleportExitVelocity != nullptr)
		*TeleportExitVelocity = std::move(Parms.TeleportExitVelocity);
}

}
