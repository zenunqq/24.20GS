#pragma once

#include "Basic.hpp"

#include "BGA_HeldObject_Parent_classes.hpp"
#include "BGA_HeldObject_Parent_parameters.hpp"

namespace SDK
{

void ABGA_HeldObject_Parent_C::AttachSetup(const struct FVector& Location, const struct FVector& HitNormal, bool NewParam)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BGA_HeldObject_Parent_C", "AttachSetup");

	Params::BGA_HeldObject_Parent_C_AttachSetup Parms{};

	Parms.Location = std::move(Location);
	Parms.HitNormal = std::move(HitNormal);
	Parms.NewParam = NewParam;

	UObject::ProcessEvent(Func, &Parms);
}

void ABGA_HeldObject_Parent_C::BindPlayerControllerOnUnPosses()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BGA_HeldObject_Parent_C", "BindPlayerControllerOnUnPosses");

	UObject::ProcessEvent(Func, nullptr);
}

void ABGA_HeldObject_Parent_C::BlueprintOnInteract(const class AFortPawn* InteractingPawn, const EInteractionBeingAttempted InteractionBeingAttempted)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BGA_HeldObject_Parent_C", "BlueprintOnInteract");

	Params::BGA_HeldObject_Parent_C_BlueprintOnInteract Parms{};

	Parms.InteractingPawn = InteractingPawn;
	Parms.InteractionBeingAttempted = InteractionBeingAttempted;

	UObject::ProcessEvent(Func, &Parms);
}

void ABGA_HeldObject_Parent_C::BndEvt__FortHeldObject_K2Node_ComponentBoundEvent_2_OnHeldObjectThrown__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BGA_HeldObject_Parent_C", "BndEvt__FortHeldObject_K2Node_ComponentBoundEvent_2_OnHeldObjectThrown__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}

void ABGA_HeldObject_Parent_C::BndEvt__FortHeldObject_K2Node_ComponentBoundEvent_5_OnHeldObjectPlaced__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BGA_HeldObject_Parent_C", "BndEvt__FortHeldObject_K2Node_ComponentBoundEvent_5_OnHeldObjectPlaced__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}

void ABGA_HeldObject_Parent_C::BndEvt__FortHeldObject_K2Node_ComponentBoundEvent_6_OnHeldObjectPickedUp__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BGA_HeldObject_Parent_C", "BndEvt__FortHeldObject_K2Node_ComponentBoundEvent_6_OnHeldObjectPickedUp__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}

void ABGA_HeldObject_Parent_C::BndEvt__FortLinkToActor_K2Node_ComponentBoundEvent_0_OnLinkedActorDestroyed__DelegateSignature(class AActor* DamageCauser)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BGA_HeldObject_Parent_C", "BndEvt__FortLinkToActor_K2Node_ComponentBoundEvent_0_OnLinkedActorDestroyed__DelegateSignature");

	Params::BGA_HeldObject_Parent_C_BndEvt__FortLinkToActor_K2Node_ComponentBoundEvent_0_OnLinkedActorDestroyed__DelegateSignature Parms{};

	Parms.DamageCauser = DamageCauser;

	UObject::ProcessEvent(Func, &Parms);
}

void ABGA_HeldObject_Parent_C::BndEvt__FortProjectileMovement_K2Node_ComponentBoundEvent_1_OnProjectileBounceDelegate__DelegateSignature(const struct FHitResult& ImpactResult, const struct FVector& ImpactVelocity)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BGA_HeldObject_Parent_C", "BndEvt__FortProjectileMovement_K2Node_ComponentBoundEvent_1_OnProjectileBounceDelegate__DelegateSignature");

	Params::BGA_HeldObject_Parent_C_BndEvt__FortProjectileMovement_K2Node_ComponentBoundEvent_1_OnProjectileBounceDelegate__DelegateSignature Parms{};

	Parms.ImpactResult = std::move(ImpactResult);
	Parms.ImpactVelocity = std::move(ImpactVelocity);

	UObject::ProcessEvent(Func, &Parms);
}

void ABGA_HeldObject_Parent_C::BndEvt__FortProjectileMovement_K2Node_ComponentBoundEvent_4_OnProjectileStopDelegate__DelegateSignature(const struct FHitResult& ImpactResult)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BGA_HeldObject_Parent_C", "BndEvt__FortProjectileMovement_K2Node_ComponentBoundEvent_4_OnProjectileStopDelegate__DelegateSignature");

	Params::BGA_HeldObject_Parent_C_BndEvt__FortProjectileMovement_K2Node_ComponentBoundEvent_4_OnProjectileStopDelegate__DelegateSignature Parms{};

	Parms.ImpactResult = std::move(ImpactResult);

	UObject::ProcessEvent(Func, &Parms);
}

void ABGA_HeldObject_Parent_C::BndEvt__FortWaterInteraction_K2Node_ComponentBoundEvent_3_WaterInteractionOnEnterWater__DelegateSignature(class AFortWaterBodyActor* WaterBody, class UFortWaterInteractionComponent* WaterInteractionComponent, bool bIsFirstBody)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BGA_HeldObject_Parent_C", "BndEvt__FortWaterInteraction_K2Node_ComponentBoundEvent_3_WaterInteractionOnEnterWater__DelegateSignature");

	Params::BGA_HeldObject_Parent_C_BndEvt__FortWaterInteraction_K2Node_ComponentBoundEvent_3_WaterInteractionOnEnterWater__DelegateSignature Parms{};

	Parms.WaterBody = WaterBody;
	Parms.WaterInteractionComponent = WaterInteractionComponent;
	Parms.bIsFirstBody = bIsFirstBody;

	UObject::ProcessEvent(Func, &Parms);
}

void ABGA_HeldObject_Parent_C::ExecuteUbergraph_BGA_HeldObject_Parent(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BGA_HeldObject_Parent_C", "ExecuteUbergraph_BGA_HeldObject_Parent");

	Params::BGA_HeldObject_Parent_C_ExecuteUbergraph_BGA_HeldObject_Parent Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

void ABGA_HeldObject_Parent_C::FindAttachAngle(const struct FVector& HitLoc)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BGA_HeldObject_Parent_C", "FindAttachAngle");

	Params::BGA_HeldObject_Parent_C_FindAttachAngle Parms{};

	Parms.HitLoc = std::move(HitLoc);

	UObject::ProcessEvent(Func, &Parms);
}

void ABGA_HeldObject_Parent_C::GetAttachComponent(class USceneComponent** Component)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BGA_HeldObject_Parent_C", "GetAttachComponent");

	Params::BGA_HeldObject_Parent_C_GetAttachComponent Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Component != nullptr)
		*Component = Parms.Component;
}

void ABGA_HeldObject_Parent_C::HideActor()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BGA_HeldObject_Parent_C", "HideActor");

	UObject::ProcessEvent(Func, nullptr);
}

void ABGA_HeldObject_Parent_C::OnAttachedToVehicle()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BGA_HeldObject_Parent_C", "OnAttachedToVehicle");

	UObject::ProcessEvent(Func, nullptr);
}

void ABGA_HeldObject_Parent_C::OnDeathServer(float Damage, const struct FGameplayTagContainer& DamageTags, const struct FVector& Momentum, const struct FHitResult& HitInfo, class AController* InstigatedBy, class AActor* DamageCauser, const struct FGameplayEffectContextHandle& EffectContext)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BGA_HeldObject_Parent_C", "OnDeathServer");

	Params::BGA_HeldObject_Parent_C_OnDeathServer Parms{};

	Parms.Damage = Damage;
	Parms.DamageTags = std::move(DamageTags);
	Parms.Momentum = std::move(Momentum);
	Parms.HitInfo = std::move(HitInfo);
	Parms.InstigatedBy = InstigatedBy;
	Parms.DamageCauser = DamageCauser;
	Parms.EffectContext = std::move(EffectContext);

	UObject::ProcessEvent(Func, &Parms);
}

void ABGA_HeldObject_Parent_C::OnDetachFromVehicle()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BGA_HeldObject_Parent_C", "OnDetachFromVehicle");

	UObject::ProcessEvent(Func, nullptr);
}

void ABGA_HeldObject_Parent_C::OnFirstInteract(class AFortPawn* Interacting_Pawn)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BGA_HeldObject_Parent_C", "OnFirstInteract");

	Params::BGA_HeldObject_Parent_C_OnFirstInteract Parms{};

	Parms.Interacting_Pawn = Interacting_Pawn;

	UObject::ProcessEvent(Func, &Parms);
}

void ABGA_HeldObject_Parent_C::OnReady_BC2B03BE47B5044C184341970EAD7AAB(class AFortGameStateAthena* GameState, const class UFortPlaylist* Playlist, const struct FGameplayTagContainer& PlaylistContextTags)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BGA_HeldObject_Parent_C", "OnReady_BC2B03BE47B5044C184341970EAD7AAB");

	Params::BGA_HeldObject_Parent_C_OnReady_BC2B03BE47B5044C184341970EAD7AAB Parms{};

	Parms.GameState = GameState;
	Parms.Playlist = Playlist;
	Parms.PlaylistContextTags = std::move(PlaylistContextTags);

	UObject::ProcessEvent(Func, &Parms);
}

void ABGA_HeldObject_Parent_C::OnRep_AttachTransform()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BGA_HeldObject_Parent_C", "OnRep_AttachTransform");

	UObject::ProcessEvent(Func, nullptr);
}

void ABGA_HeldObject_Parent_C::OnRep_IsAttachedToVehicle()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BGA_HeldObject_Parent_C", "OnRep_IsAttachedToVehicle");

	UObject::ProcessEvent(Func, nullptr);
}

void ABGA_HeldObject_Parent_C::OnRep_RepHideActor()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BGA_HeldObject_Parent_C", "OnRep_RepHideActor");

	UObject::ProcessEvent(Func, nullptr);
}

void ABGA_HeldObject_Parent_C::OnRep_RepStartMoving()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BGA_HeldObject_Parent_C", "OnRep_RepStartMoving");

	UObject::ProcessEvent(Func, nullptr);
}

void ABGA_HeldObject_Parent_C::OnSecondInteract(class AFortPawn* InteractingPawn)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BGA_HeldObject_Parent_C", "OnSecondInteract");

	Params::BGA_HeldObject_Parent_C_OnSecondInteract Parms{};

	Parms.InteractingPawn = InteractingPawn;

	UObject::ProcessEvent(Func, &Parms);
}

void ABGA_HeldObject_Parent_C::OnVehicleDestroyed(class AActor* DestroyedActor)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BGA_HeldObject_Parent_C", "OnVehicleDestroyed");

	Params::BGA_HeldObject_Parent_C_OnVehicleDestroyed Parms{};

	Parms.DestroyedActor = DestroyedActor;

	UObject::ProcessEvent(Func, &Parms);
}

void ABGA_HeldObject_Parent_C::PlayGenericDeath()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BGA_HeldObject_Parent_C", "PlayGenericDeath");

	UObject::ProcessEvent(Func, nullptr);
}

void ABGA_HeldObject_Parent_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BGA_HeldObject_Parent_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}

void ABGA_HeldObject_Parent_C::ReceiveDestroyed()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BGA_HeldObject_Parent_C", "ReceiveDestroyed");

	UObject::ProcessEvent(Func, nullptr);
}

void ABGA_HeldObject_Parent_C::ReceiveHit(class UPrimitiveComponent* MyComp, class AActor* Other, class UPrimitiveComponent* OtherComp, bool bSelfMoved, const struct FVector& HitLocation, const struct FVector& HitNormal, const struct FVector& NormalImpulse, const struct FHitResult& Hit)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BGA_HeldObject_Parent_C", "ReceiveHit");

	Params::BGA_HeldObject_Parent_C_ReceiveHit Parms{};

	Parms.MyComp = MyComp;
	Parms.Other = Other;
	Parms.OtherComp = OtherComp;
	Parms.bSelfMoved = bSelfMoved;
	Parms.HitLocation = std::move(HitLocation);
	Parms.HitNormal = std::move(HitNormal);
	Parms.NormalImpulse = std::move(NormalImpulse);
	Parms.Hit = std::move(Hit);

	UObject::ProcessEvent(Func, &Parms);
}

void ABGA_HeldObject_Parent_C::ResetRelativeTransformOnAttach()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BGA_HeldObject_Parent_C", "ResetRelativeTransformOnAttach");

	UObject::ProcessEvent(Func, nullptr);
}

void ABGA_HeldObject_Parent_C::Server_Only_Handle_Attach_To_Vehicle(const struct FVector& HitLoc, class UPrimitiveComponent* HitComponentToAttachTo_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BGA_HeldObject_Parent_C", "Server Only Handle Attach To Vehicle");

	Params::BGA_HeldObject_Parent_C_Server_Only_Handle_Attach_To_Vehicle Parms{};

	Parms.HitLoc = std::move(HitLoc);
	Parms.HitComponentToAttachTo_0 = HitComponentToAttachTo_0;

	UObject::ProcessEvent(Func, &Parms);
}

void ABGA_HeldObject_Parent_C::Server_Only_Handle_Player_Controller_OnUnPossess(class APawn* PlayerPawn)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BGA_HeldObject_Parent_C", "Server Only Handle Player Controller OnUnPossess");

	Params::BGA_HeldObject_Parent_C_Server_Only_Handle_Player_Controller_OnUnPossess Parms{};

	Parms.PlayerPawn = PlayerPawn;

	UObject::ProcessEvent(Func, &Parms);
}

void ABGA_HeldObject_Parent_C::SetAttachDefaultTransform()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BGA_HeldObject_Parent_C", "SetAttachDefaultTransform");

	UObject::ProcessEvent(Func, nullptr);
}

void ABGA_HeldObject_Parent_C::SetBeenThrownPlaced()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BGA_HeldObject_Parent_C", "SetBeenThrownPlaced");

	UObject::ProcessEvent(Func, nullptr);
}

bool ABGA_HeldObject_Parent_C::ShouldDie(float Damage, class AController* EventInstigator, class AActor* DamageCauser)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BGA_HeldObject_Parent_C", "ShouldDie");

	Params::BGA_HeldObject_Parent_C_ShouldDie Parms{};

	Parms.Damage = Damage;
	Parms.EventInstigator = EventInstigator;
	Parms.DamageCauser = DamageCauser;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

void ABGA_HeldObject_Parent_C::UbindPlayerControllerOnUnPosses()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BGA_HeldObject_Parent_C", "UbindPlayerControllerOnUnPosses");

	UObject::ProcessEvent(Func, nullptr);
}

bool ABGA_HeldObject_Parent_C::BlueprintCanInteract(const class AFortPawn* InteractingPawn, const EInteractionBeingAttempted InteractionBeingAttempted, const ETInteractionType InteractionType) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BGA_HeldObject_Parent_C", "BlueprintCanInteract");

	Params::BGA_HeldObject_Parent_C_BlueprintCanInteract Parms{};

	Parms.InteractingPawn = InteractingPawn;
	Parms.InteractionBeingAttempted = InteractionBeingAttempted;
	Parms.InteractionType = InteractionType;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

class FText ABGA_HeldObject_Parent_C::BlueprintGetInteractionString(const class AFortPawn* InteractingPawn, const EInteractionBeingAttempted InteractionBeingAttempted) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BGA_HeldObject_Parent_C", "BlueprintGetInteractionString");

	Params::BGA_HeldObject_Parent_C_BlueprintGetInteractionString Parms{};

	Parms.InteractingPawn = InteractingPawn;
	Parms.InteractionBeingAttempted = InteractionBeingAttempted;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

bool ABGA_HeldObject_Parent_C::BlueprintGetInteractionTime(const class AFortPawn* InteractingPawn, float* OutInteractionTime, const EInteractionBeingAttempted InteractionBeingAttempted) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BGA_HeldObject_Parent_C", "BlueprintGetInteractionTime");

	Params::BGA_HeldObject_Parent_C_BlueprintGetInteractionTime Parms{};

	Parms.InteractingPawn = InteractingPawn;
	Parms.InteractionBeingAttempted = InteractionBeingAttempted;

	UObject::ProcessEvent(Func, &Parms);

	if (OutInteractionTime != nullptr)
		*OutInteractionTime = Parms.OutInteractionTime;

	return Parms.ReturnValue;
}

void ABGA_HeldObject_Parent_C::GetCanFirstInteract(class AFortPawn* InteractingPawn, bool* Return) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BGA_HeldObject_Parent_C", "GetCanFirstInteract");

	Params::BGA_HeldObject_Parent_C_GetCanFirstInteract Parms{};

	Parms.InteractingPawn = InteractingPawn;

	UObject::ProcessEvent(Func, &Parms);

	if (Return != nullptr)
		*Return = Parms.Return;
}

}
