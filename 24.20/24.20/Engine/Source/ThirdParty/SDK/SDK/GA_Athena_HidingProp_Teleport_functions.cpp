#pragma once

#include "Basic.hpp"

#include "GA_Athena_HidingProp_Teleport_classes.hpp"
#include "GA_Athena_HidingProp_Teleport_parameters.hpp"

namespace SDK
{

void UGA_Athena_HidingProp_Teleport_C::Added_67FE14EA4DF2D8C2DB494AA89443681B()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Athena_HidingProp_Teleport_C", "Added_67FE14EA4DF2D8C2DB494AA89443681B");

	UObject::ProcessEvent(Func, nullptr);
}

void UGA_Athena_HidingProp_Teleport_C::Added_CB8220A04B74338E758C11B7371D4630()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Athena_HidingProp_Teleport_C", "Added_CB8220A04B74338E758C11B7371D4630");

	UObject::ProcessEvent(Func, nullptr);
}

void UGA_Athena_HidingProp_Teleport_C::Added_F96D6DD549939CA425D2D1BE1AD32090()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Athena_HidingProp_Teleport_C", "Added_F96D6DD549939CA425D2D1BE1AD32090");

	UObject::ProcessEvent(Func, nullptr);
}

void UGA_Athena_HidingProp_Teleport_C::Added_FD079A2341CDD832DF47CD975DFC3BB3()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Athena_HidingProp_Teleport_C", "Added_FD079A2341CDD832DF47CD975DFC3BB3");

	UObject::ProcessEvent(Func, nullptr);
}

void UGA_Athena_HidingProp_Teleport_C::EventReceived_ABAD14334D754F46E9037882BF0256B6(const struct FGameplayEventData& Payload)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Athena_HidingProp_Teleport_C", "EventReceived_ABAD14334D754F46E9037882BF0256B6");

	Params::GA_Athena_HidingProp_Teleport_C_EventReceived_ABAD14334D754F46E9037882BF0256B6 Parms{};

	Parms.Payload = std::move(Payload);

	UObject::ProcessEvent(Func, &Parms);
}

void UGA_Athena_HidingProp_Teleport_C::ExecuteUbergraph_GA_Athena_HidingProp_Teleport(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Athena_HidingProp_Teleport_C", "ExecuteUbergraph_GA_Athena_HidingProp_Teleport");

	Params::GA_Athena_HidingProp_Teleport_C_ExecuteUbergraph_GA_Athena_HidingProp_Teleport Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

void UGA_Athena_HidingProp_Teleport_C::FailedToActivatePassiveAbility(const struct FGameplayAbilityActorInfo& ActorInfo)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Athena_HidingProp_Teleport_C", "FailedToActivatePassiveAbility");

	Params::GA_Athena_HidingProp_Teleport_C_FailedToActivatePassiveAbility Parms{};

	Parms.ActorInfo = std::move(ActorInfo);

	UObject::ProcessEvent(Func, &Parms);
}

void UGA_Athena_HidingProp_Teleport_C::GrapplerFailSafe(class AFortPawn* FortPawn)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Athena_HidingProp_Teleport_C", "GrapplerFailSafe");

	Params::GA_Athena_HidingProp_Teleport_C_GrapplerFailSafe Parms{};

	Parms.FortPawn = FortPawn;

	UObject::ProcessEvent(Func, &Parms);
}

void UGA_Athena_HidingProp_Teleport_C::K2_ActivateAbility()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Athena_HidingProp_Teleport_C", "K2_ActivateAbility");

	UObject::ProcessEvent(Func, nullptr);
}

void UGA_Athena_HidingProp_Teleport_C::K2_OnEndAbility(bool bWasCancelled)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Athena_HidingProp_Teleport_C", "K2_OnEndAbility");

	Params::GA_Athena_HidingProp_Teleport_C_K2_OnEndAbility Parms{};

	Parms.bWasCancelled = bWasCancelled;

	UObject::ProcessEvent(Func, &Parms);
}

void UGA_Athena_HidingProp_Teleport_C::OnComplete_EE0FA6804073079396C44591432259C0()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Athena_HidingProp_Teleport_C", "OnComplete_EE0FA6804073079396C44591432259C0");

	UObject::ProcessEvent(Func, nullptr);
}

void UGA_Athena_HidingProp_Teleport_C::OnPawnDied(class AActor* DamagedActor, float Damage, class AController* InstigatedBy, class AActor* DamageCauser, const struct FVector& HitLocation, class UPrimitiveComponent* FHitComponent, class FName BoneName, const struct FVector& Momentum)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Athena_HidingProp_Teleport_C", "OnPawnDied");

	Params::GA_Athena_HidingProp_Teleport_C_OnPawnDied Parms{};

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

void UGA_Athena_HidingProp_Teleport_C::QuestUpdate(class AFortPawn* Pawn)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Athena_HidingProp_Teleport_C", "QuestUpdate");

	Params::GA_Athena_HidingProp_Teleport_C_QuestUpdate Parms{};

	Parms.Pawn = Pawn;

	UObject::ProcessEvent(Func, &Parms);
}

void UGA_Athena_HidingProp_Teleport_C::Wobble()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Athena_HidingProp_Teleport_C", "Wobble");

	UObject::ProcessEvent(Func, nullptr);
}

}
