#pragma once

#include "Basic.hpp"

#include "PlayerRiderComponent_classes.hpp"
#include "PlayerRiderComponent_parameters.hpp"

namespace SDK
{

void UPlayerRiderComponent_C::Added_42EF586645CCFF06FFA4D9A5D59B1298()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlayerRiderComponent_C", "Added_42EF586645CCFF06FFA4D9A5D59B1298");

	UObject::ProcessEvent(Func, nullptr);
}

void UPlayerRiderComponent_C::Added_A83C775344FE0F6BDAAC4B971F57425E()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlayerRiderComponent_C", "Added_A83C775344FE0F6BDAAC4B971F57425E");

	UObject::ProcessEvent(Func, nullptr);
}

void UPlayerRiderComponent_C::Added_D3DFE4374EED456A4C597E95375A2028()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlayerRiderComponent_C", "Added_D3DFE4374EED456A4C597E95375A2028");

	UObject::ProcessEvent(Func, nullptr);
}

void UPlayerRiderComponent_C::EventReceived_3DA19BC649FB853BA2CC0FADFF8D08F6(const struct FGameplayEventData& Payload)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlayerRiderComponent_C", "EventReceived_3DA19BC649FB853BA2CC0FADFF8D08F6");

	Params::PlayerRiderComponent_C_EventReceived_3DA19BC649FB853BA2CC0FADFF8D08F6 Parms{};

	Parms.Payload = std::move(Payload);

	UObject::ProcessEvent(Func, &Parms);
}

void UPlayerRiderComponent_C::EventReceived_E5B5FB5340DB5660002329825657B406(const struct FGameplayEventData& Payload)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlayerRiderComponent_C", "EventReceived_E5B5FB5340DB5660002329825657B406");

	Params::PlayerRiderComponent_C_EventReceived_E5B5FB5340DB5660002329825657B406 Parms{};

	Parms.Payload = std::move(Payload);

	UObject::ProcessEvent(Func, &Parms);
}

void UPlayerRiderComponent_C::ExecuteUbergraph_PlayerRiderComponent(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlayerRiderComponent_C", "ExecuteUbergraph_PlayerRiderComponent");

	Params::PlayerRiderComponent_C_ExecuteUbergraph_PlayerRiderComponent Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

void UPlayerRiderComponent_C::GetJumpInfo(class AActor* TargetActor, class UActorComponent** TargetActorComponent, double* JumpAttach_GroundHeightMin, double* JumpAttach_GroundHeightBuffer, bool* UseAltRidingMessage)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlayerRiderComponent_C", "GetJumpInfo");

	Params::PlayerRiderComponent_C_GetJumpInfo Parms{};

	Parms.TargetActor = TargetActor;

	UObject::ProcessEvent(Func, &Parms);

	if (TargetActorComponent != nullptr)
		*TargetActorComponent = Parms.TargetActorComponent;

	if (JumpAttach_GroundHeightMin != nullptr)
		*JumpAttach_GroundHeightMin = Parms.JumpAttach_GroundHeightMin;

	if (JumpAttach_GroundHeightBuffer != nullptr)
		*JumpAttach_GroundHeightBuffer = Parms.JumpAttach_GroundHeightBuffer;

	if (UseAltRidingMessage != nullptr)
		*UseAltRidingMessage = Parms.UseAltRidingMessage;
}

void UPlayerRiderComponent_C::GetRidingInfoFromTarget(double* JumpAttachGroundHeightMin, double* JumpAttachGroundHeightBuffer, bool* UsesAltRidingMessage)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlayerRiderComponent_C", "GetRidingInfoFromTarget");

	Params::PlayerRiderComponent_C_GetRidingInfoFromTarget Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (JumpAttachGroundHeightMin != nullptr)
		*JumpAttachGroundHeightMin = Parms.JumpAttachGroundHeightMin;

	if (JumpAttachGroundHeightBuffer != nullptr)
		*JumpAttachGroundHeightBuffer = Parms.JumpAttachGroundHeightBuffer;

	if (UsesAltRidingMessage != nullptr)
		*UsesAltRidingMessage = Parms.UsesAltRidingMessage;
}

void UPlayerRiderComponent_C::HandleRequestPettingStart()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlayerRiderComponent_C", "HandleRequestPettingStart");

	UObject::ProcessEvent(Func, nullptr);
}

void UPlayerRiderComponent_C::HandleRequestPettingStop()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlayerRiderComponent_C", "HandleRequestPettingStop");

	UObject::ProcessEvent(Func, nullptr);
}

void UPlayerRiderComponent_C::HandleRidableFound(const struct FHitResult& HitResult)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlayerRiderComponent_C", "HandleRidableFound");

	Params::PlayerRiderComponent_C_HandleRidableFound Parms{};

	Parms.HitResult = std::move(HitResult);

	UObject::ProcessEvent(Func, &Parms);
}

void UPlayerRiderComponent_C::HandleStartedRiding(class URidableComponent* Ridable)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlayerRiderComponent_C", "HandleStartedRiding");

	Params::PlayerRiderComponent_C_HandleStartedRiding Parms{};

	Parms.Ridable = Ridable;

	UObject::ProcessEvent(Func, &Parms);
}

void UPlayerRiderComponent_C::HandleStoppedRiding(class URidableComponent* Ridable)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlayerRiderComponent_C", "HandleStoppedRiding");

	Params::PlayerRiderComponent_C_HandleStoppedRiding Parms{};

	Parms.Ridable = Ridable;

	UObject::ProcessEvent(Func, &Parms);
}

void UPlayerRiderComponent_C::MountLanded(const struct FHitResult& Hit)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlayerRiderComponent_C", "MountLanded");

	Params::PlayerRiderComponent_C_MountLanded Parms{};

	Parms.Hit = std::move(Hit);

	UObject::ProcessEvent(Func, &Parms);
}

void UPlayerRiderComponent_C::MovementModeChanged(class ACharacter* Character, EMovementMode PrevMovementMode, uint8 PreviousCustomMode)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlayerRiderComponent_C", "MovementModeChanged");

	Params::PlayerRiderComponent_C_MovementModeChanged Parms{};

	Parms.Character = Character;
	Parms.PrevMovementMode = PrevMovementMode;
	Parms.PreviousCustomMode = PreviousCustomMode;

	UObject::ProcessEvent(Func, &Parms);
}

void UPlayerRiderComponent_C::OnRep_targetEnergy()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlayerRiderComponent_C", "OnRep_targetEnergy");

	UObject::ProcessEvent(Func, nullptr);
}

void UPlayerRiderComponent_C::OnRep_targetHealth()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlayerRiderComponent_C", "OnRep_targetHealth");

	UObject::ProcessEvent(Func, nullptr);
}

void UPlayerRiderComponent_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlayerRiderComponent_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}

void UPlayerRiderComponent_C::RiderUIEndClient(class AActor* Ridable)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlayerRiderComponent_C", "RiderUIEndClient");

	Params::PlayerRiderComponent_C_RiderUIEndClient Parms{};

	Parms.Ridable = Ridable;

	UObject::ProcessEvent(Func, &Parms);
}

void UPlayerRiderComponent_C::RiderUIStartClient(const class FText& Name_0, const struct FSlateBrush& Icon, class AActor* Ridable)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlayerRiderComponent_C", "RiderUIStartClient");

	Params::PlayerRiderComponent_C_RiderUIStartClient Parms{};

	Parms.Name_0 = std::move(Name_0);
	Parms.Icon = std::move(Icon);
	Parms.Ridable = Ridable;

	UObject::ProcessEvent(Func, &Parms);
}

void UPlayerRiderComponent_C::SetTargetHealth(double targetHealth_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlayerRiderComponent_C", "SetTargetHealth");

	Params::PlayerRiderComponent_C_SetTargetHealth Parms{};

	Parms.targetHealth_0 = targetHealth_0;

	UObject::ProcessEvent(Func, &Parms);
}

void UPlayerRiderComponent_C::TestIfValidForRidingAttempt(class UObject* Object, bool* Success, class UObject** TargetObject, bool* UseAltRidingMessage)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlayerRiderComponent_C", "TestIfValidForRidingAttempt");

	Params::PlayerRiderComponent_C_TestIfValidForRidingAttempt Parms{};

	Parms.Object = Object;

	UObject::ProcessEvent(Func, &Parms);

	if (Success != nullptr)
		*Success = Parms.Success;

	if (TargetObject != nullptr)
		*TargetObject = Parms.TargetObject;

	if (UseAltRidingMessage != nullptr)
		*UseAltRidingMessage = Parms.UseAltRidingMessage;
}

void UPlayerRiderComponent_C::ToggleRiding(class AActor* PlayerPawn, class AActor* Target, bool ShouldRide, bool* bChangedRiding)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlayerRiderComponent_C", "ToggleRiding");

	Params::PlayerRiderComponent_C_ToggleRiding Parms{};

	Parms.PlayerPawn = PlayerPawn;
	Parms.Target = Target;
	Parms.ShouldRide = ShouldRide;

	UObject::ProcessEvent(Func, &Parms);

	if (bChangedRiding != nullptr)
		*bChangedRiding = Parms.bChangedRiding;
}

void UPlayerRiderComponent_C::ToggleRidingAlternative()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlayerRiderComponent_C", "ToggleRidingAlternative");

	UObject::ProcessEvent(Func, nullptr);
}

void UPlayerRiderComponent_C::ToggleRidingOnServer(class UObject* TargetObject, bool UseAltRidingMessage)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlayerRiderComponent_C", "ToggleRidingOnServer");

	Params::PlayerRiderComponent_C_ToggleRidingOnServer Parms{};

	Parms.TargetObject = TargetObject;
	Parms.UseAltRidingMessage = UseAltRidingMessage;

	UObject::ProcessEvent(Func, &Parms);
}

}
