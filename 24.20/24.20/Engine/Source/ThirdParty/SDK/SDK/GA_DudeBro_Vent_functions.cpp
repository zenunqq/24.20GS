#pragma once

#include "Basic.hpp"

#include "GA_DudeBro_Vent_classes.hpp"
#include "GA_DudeBro_Vent_parameters.hpp"

namespace SDK
{

void UGA_DudeBro_Vent_C::ActuallyCleanPlayerUp()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_DudeBro_Vent_C", "ActuallyCleanPlayerUp");

	UObject::ProcessEvent(Func, nullptr);
}

void UGA_DudeBro_Vent_C::Added_4065C3B14D35BDC4C0608DB5BD4A1EBA()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_DudeBro_Vent_C", "Added_4065C3B14D35BDC4C0608DB5BD4A1EBA");

	UObject::ProcessEvent(Func, nullptr);
}

void UGA_DudeBro_Vent_C::ExecuteUbergraph_GA_DudeBro_Vent(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_DudeBro_Vent_C", "ExecuteUbergraph_GA_DudeBro_Vent");

	Params::GA_DudeBro_Vent_C_ExecuteUbergraph_GA_DudeBro_Vent Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

void UGA_DudeBro_Vent_C::K2_ActivateAbilityFromEvent(const struct FGameplayEventData& EventData)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_DudeBro_Vent_C", "K2_ActivateAbilityFromEvent");

	Params::GA_DudeBro_Vent_C_K2_ActivateAbilityFromEvent Parms{};

	Parms.EventData = std::move(EventData);

	UObject::ProcessEvent(Func, &Parms);
}

void UGA_DudeBro_Vent_C::K2_OnEndAbility(bool bWasCancelled)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_DudeBro_Vent_C", "K2_OnEndAbility");

	Params::GA_DudeBro_Vent_C_K2_OnEndAbility Parms{};

	Parms.bWasCancelled = bWasCancelled;

	UObject::ProcessEvent(Func, &Parms);
}

void UGA_DudeBro_Vent_C::MovementModeChangedDelegate_Event_0(class ACharacter* Character, EMovementMode PrevMovementMode, uint8 PreviousCustomMode)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_DudeBro_Vent_C", "MovementModeChangedDelegate_Event_0");

	Params::GA_DudeBro_Vent_C_MovementModeChangedDelegate_Event_0 Parms{};

	Parms.Character = Character;
	Parms.PrevMovementMode = PrevMovementMode;
	Parms.PreviousCustomMode = PreviousCustomMode;

	UObject::ProcessEvent(Func, &Parms);
}

void UGA_DudeBro_Vent_C::PlayerCapsuleHit(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, const struct FVector& NormalImpulse, const struct FHitResult& Hit)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_DudeBro_Vent_C", "PlayerCapsuleHit");

	Params::GA_DudeBro_Vent_C_PlayerCapsuleHit Parms{};

	Parms.HitComponent = HitComponent;
	Parms.OtherActor = OtherActor;
	Parms.OtherComp = OtherComp;
	Parms.NormalImpulse = std::move(NormalImpulse);
	Parms.Hit = std::move(Hit);

	UObject::ProcessEvent(Func, &Parms);
}

}
