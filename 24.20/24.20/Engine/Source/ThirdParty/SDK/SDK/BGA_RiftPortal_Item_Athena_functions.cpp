#pragma once

#include "Basic.hpp"

#include "BGA_RiftPortal_Item_Athena_classes.hpp"
#include "BGA_RiftPortal_Item_Athena_parameters.hpp"

namespace SDK
{

void ABGA_RiftPortal_Item_Athena_C::Audio_RiftDestroyed__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BGA_RiftPortal_Item_Athena_C", "Audio RiftDestroyed__FinishedFunc");

	UObject::ProcessEvent(Func, nullptr);
}

void ABGA_RiftPortal_Item_Athena_C::Audio_RiftDestroyed__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BGA_RiftPortal_Item_Athena_C", "Audio RiftDestroyed__UpdateFunc");

	UObject::ProcessEvent(Func, nullptr);
}

void ABGA_RiftPortal_Item_Athena_C::BndEvt__Capsule_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BGA_RiftPortal_Item_Athena_C", "BndEvt__Capsule_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature");

	Params::BGA_RiftPortal_Item_Athena_C_BndEvt__Capsule_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature Parms{};

	Parms.OverlappedComponent = OverlappedComponent;
	Parms.OtherActor = OtherActor;
	Parms.OtherComp = OtherComp;
	Parms.OtherBodyIndex = OtherBodyIndex;
	Parms.bFromSweep = bFromSweep;
	Parms.SweepResult = std::move(SweepResult);

	UObject::ProcessEvent(Func, &Parms);
}

void ABGA_RiftPortal_Item_Athena_C::BndEvt__Capsule_K2Node_ComponentBoundEvent_3_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BGA_RiftPortal_Item_Athena_C", "BndEvt__Capsule_K2Node_ComponentBoundEvent_3_ComponentEndOverlapSignature__DelegateSignature");

	Params::BGA_RiftPortal_Item_Athena_C_BndEvt__Capsule_K2Node_ComponentBoundEvent_3_ComponentEndOverlapSignature__DelegateSignature Parms{};

	Parms.OverlappedComponent = OverlappedComponent;
	Parms.OtherActor = OtherActor;
	Parms.OtherComp = OtherComp;
	Parms.OtherBodyIndex = OtherBodyIndex;

	UObject::ProcessEvent(Func, &Parms);
}

void ABGA_RiftPortal_Item_Athena_C::BndEvt__OverlapCapsule_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BGA_RiftPortal_Item_Athena_C", "BndEvt__OverlapCapsule_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature");

	Params::BGA_RiftPortal_Item_Athena_C_BndEvt__OverlapCapsule_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature Parms{};

	Parms.OverlappedComponent = OverlappedComponent;
	Parms.OtherActor = OtherActor;
	Parms.OtherComp = OtherComp;
	Parms.OtherBodyIndex = OtherBodyIndex;
	Parms.bFromSweep = bFromSweep;
	Parms.SweepResult = std::move(SweepResult);

	UObject::ProcessEvent(Func, &Parms);
}

void ABGA_RiftPortal_Item_Athena_C::CheckForRiftLocUpdate(class AController* InController)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BGA_RiftPortal_Item_Athena_C", "CheckForRiftLocUpdate");

	Params::BGA_RiftPortal_Item_Athena_C_CheckForRiftLocUpdate Parms{};

	Parms.InController = InController;

	UObject::ProcessEvent(Func, &Parms);
}

void ABGA_RiftPortal_Item_Athena_C::DestroyRift()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BGA_RiftPortal_Item_Athena_C", "DestroyRift");

	UObject::ProcessEvent(Func, nullptr);
}

void ABGA_RiftPortal_Item_Athena_C::EjectFromTurret(class AFortPlayerPawn* PlayerPawn_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BGA_RiftPortal_Item_Athena_C", "EjectFromTurret");

	Params::BGA_RiftPortal_Item_Athena_C_EjectFromTurret Parms{};

	Parms.PlayerPawn_0 = PlayerPawn_0;

	UObject::ProcessEvent(Func, &Parms);
}

void ABGA_RiftPortal_Item_Athena_C::ExecuteUbergraph_BGA_RiftPortal_Item_Athena(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BGA_RiftPortal_Item_Athena_C", "ExecuteUbergraph_BGA_RiftPortal_Item_Athena");

	Params::BGA_RiftPortal_Item_Athena_C_ExecuteUbergraph_BGA_RiftPortal_Item_Athena Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

void ABGA_RiftPortal_Item_Athena_C::ForceRiftTeleport(class AActor* Target_Actor)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BGA_RiftPortal_Item_Athena_C", "ForceRiftTeleport");

	Params::BGA_RiftPortal_Item_Athena_C_ForceRiftTeleport Parms{};

	Parms.Target_Actor = Target_Actor;

	UObject::ProcessEvent(Func, &Parms);
}

void ABGA_RiftPortal_Item_Athena_C::FragmentMovement__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BGA_RiftPortal_Item_Athena_C", "FragmentMovement__FinishedFunc");

	UObject::ProcessEvent(Func, nullptr);
}

void ABGA_RiftPortal_Item_Athena_C::FragmentMovement__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BGA_RiftPortal_Item_Athena_C", "FragmentMovement__UpdateFunc");

	UObject::ProcessEvent(Func, nullptr);
}

void ABGA_RiftPortal_Item_Athena_C::IncrementTeleportLocationOffset(const struct FVector& IncrementValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BGA_RiftPortal_Item_Athena_C", "IncrementTeleportLocationOffset");

	Params::BGA_RiftPortal_Item_Athena_C_IncrementTeleportLocationOffset Parms{};

	Parms.IncrementValue = std::move(IncrementValue);

	UObject::ProcessEvent(Func, &Parms);
}

void ABGA_RiftPortal_Item_Athena_C::Is_Flying(bool* NewParam)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BGA_RiftPortal_Item_Athena_C", "Is Flying");

	Params::BGA_RiftPortal_Item_Athena_C_Is_Flying Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (NewParam != nullptr)
		*NewParam = Parms.NewParam;
}

void ABGA_RiftPortal_Item_Athena_C::IsPlayerAttachedToAIPawn(class AFortAIPawn* AIPawn, bool* Result, class AFortPlayerPawn** AttachedPlayerPawn)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BGA_RiftPortal_Item_Athena_C", "IsPlayerAttachedToAIPawn");

	Params::BGA_RiftPortal_Item_Athena_C_IsPlayerAttachedToAIPawn Parms{};

	Parms.AIPawn = AIPawn;

	UObject::ProcessEvent(Func, &Parms);

	if (Result != nullptr)
		*Result = Parms.Result;

	if (AttachedPlayerPawn != nullptr)
		*AttachedPlayerPawn = Parms.AttachedPlayerPawn;
}

void ABGA_RiftPortal_Item_Athena_C::NotifyTeleportedVehicle(class AActor* VehicleActor)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BGA_RiftPortal_Item_Athena_C", "NotifyTeleportedVehicle");

	Params::BGA_RiftPortal_Item_Athena_C_NotifyTeleportedVehicle Parms{};

	Parms.VehicleActor = VehicleActor;

	UObject::ProcessEvent(Func, &Parms);
}

void ABGA_RiftPortal_Item_Athena_C::OnRep_PlayerPawn()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BGA_RiftPortal_Item_Athena_C", "OnRep_PlayerPawn");

	UObject::ProcessEvent(Func, nullptr);
}

void ABGA_RiftPortal_Item_Athena_C::OnRep_TeleportLocation()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BGA_RiftPortal_Item_Athena_C", "OnRep_TeleportLocation");

	UObject::ProcessEvent(Func, nullptr);
}

void ABGA_RiftPortal_Item_Athena_C::OnRep_Vehicle()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BGA_RiftPortal_Item_Athena_C", "OnRep_Vehicle");

	UObject::ProcessEvent(Func, nullptr);
}

void ABGA_RiftPortal_Item_Athena_C::OverlappingOnBeginPlay(class AActor* Actor)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BGA_RiftPortal_Item_Athena_C", "OverlappingOnBeginPlay");

	Params::BGA_RiftPortal_Item_Athena_C_OverlappingOnBeginPlay Parms{};

	Parms.Actor = Actor;

	UObject::ProcessEvent(Func, &Parms);
}

void ABGA_RiftPortal_Item_Athena_C::PlayCosmeticFX()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BGA_RiftPortal_Item_Athena_C", "PlayCosmeticFX");

	UObject::ProcessEvent(Func, nullptr);
}

void ABGA_RiftPortal_Item_Athena_C::PlayExpandOrCollapseAudio(bool Expand)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BGA_RiftPortal_Item_Athena_C", "PlayExpandOrCollapseAudio");

	Params::BGA_RiftPortal_Item_Athena_C_PlayExpandOrCollapseAudio Parms{};

	Parms.Expand = Expand;

	UObject::ProcessEvent(Func, &Parms);
}

void ABGA_RiftPortal_Item_Athena_C::PlaylistLoaded(class FName PlaylistName, const struct FGameplayTagContainer& PlaylistContextTags)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BGA_RiftPortal_Item_Athena_C", "PlaylistLoaded");

	Params::BGA_RiftPortal_Item_Athena_C_PlaylistLoaded Parms{};

	Parms.PlaylistName = PlaylistName;
	Parms.PlaylistContextTags = std::move(PlaylistContextTags);

	UObject::ProcessEvent(Func, &Parms);
}

void ABGA_RiftPortal_Item_Athena_C::PlayTeleportFX(const struct FVector& PlayerLocation, class APlayerState* RequestingPlayerState)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BGA_RiftPortal_Item_Athena_C", "PlayTeleportFX");

	Params::BGA_RiftPortal_Item_Athena_C_PlayTeleportFX Parms{};

	Parms.PlayerLocation = std::move(PlayerLocation);
	Parms.RequestingPlayerState = RequestingPlayerState;

	UObject::ProcessEvent(Func, &Parms);
}

void ABGA_RiftPortal_Item_Athena_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BGA_RiftPortal_Item_Athena_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}

void ABGA_RiftPortal_Item_Athena_C::ResetTeleportLocationOffset()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BGA_RiftPortal_Item_Athena_C", "ResetTeleportLocationOffset");

	UObject::ProcessEvent(Func, nullptr);
}

void ABGA_RiftPortal_Item_Athena_C::TeleportPlayerAndSendEvent(class AFortPlayerPawn* PlayerPawn_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BGA_RiftPortal_Item_Athena_C", "TeleportPlayerAndSendEvent");

	Params::BGA_RiftPortal_Item_Athena_C_TeleportPlayerAndSendEvent Parms{};

	Parms.PlayerPawn_0 = PlayerPawn_0;

	UObject::ProcessEvent(Func, &Parms);
}

void ABGA_RiftPortal_Item_Athena_C::TryRiftTeleport(class AActor* TargetActor)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BGA_RiftPortal_Item_Athena_C", "TryRiftTeleport");

	Params::BGA_RiftPortal_Item_Athena_C_TryRiftTeleport Parms{};

	Parms.TargetActor = TargetActor;

	UObject::ProcessEvent(Func, &Parms);
}

void ABGA_RiftPortal_Item_Athena_C::UseRiftQuestUpdate(class AController* InController)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BGA_RiftPortal_Item_Athena_C", "UseRiftQuestUpdate");

	Params::BGA_RiftPortal_Item_Athena_C_UseRiftQuestUpdate Parms{};

	Parms.InController = InController;

	UObject::ProcessEvent(Func, &Parms);
}

void ABGA_RiftPortal_Item_Athena_C::VectorScale__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BGA_RiftPortal_Item_Athena_C", "VectorScale__FinishedFunc");

	UObject::ProcessEvent(Func, nullptr);
}

void ABGA_RiftPortal_Item_Athena_C::VectorScale__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BGA_RiftPortal_Item_Athena_C", "VectorScale__UpdateFunc");

	UObject::ProcessEvent(Func, nullptr);
}

void ABGA_RiftPortal_Item_Athena_C::VehicleInteractionFailed(class AFortPlayerPawnAthena* FortPlayerPawnAthena)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BGA_RiftPortal_Item_Athena_C", "VehicleInteractionFailed");

	Params::BGA_RiftPortal_Item_Athena_C_VehicleInteractionFailed Parms{};

	Parms.FortPlayerPawnAthena = FortPlayerPawnAthena;

	UObject::ProcessEvent(Func, &Parms);
}

void ABGA_RiftPortal_Item_Athena_C::VehicleTeleportEvent()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BGA_RiftPortal_Item_Athena_C", "VehicleTeleportEvent");

	UObject::ProcessEvent(Func, nullptr);
}

TArray<EFortTeamAffiliation> ABGA_RiftPortal_Item_Athena_C::GetAffiliationsToShowFor() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BGA_RiftPortal_Item_Athena_C", "GetAffiliationsToShowFor");

	Params::BGA_RiftPortal_Item_Athena_C_GetAffiliationsToShowFor Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

bool ABGA_RiftPortal_Item_Athena_C::ShouldShowSoundIndicator(class AFortPlayerController* PlayerController) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BGA_RiftPortal_Item_Athena_C", "ShouldShowSoundIndicator");

	Params::BGA_RiftPortal_Item_Athena_C_ShouldShowSoundIndicator Parms{};

	Parms.PlayerController = PlayerController;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

}
