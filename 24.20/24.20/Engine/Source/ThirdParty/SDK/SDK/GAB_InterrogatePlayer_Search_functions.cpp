#pragma once

#include "Basic.hpp"

#include "GAB_InterrogatePlayer_Search_classes.hpp"
#include "GAB_InterrogatePlayer_Search_parameters.hpp"

namespace SDK
{

void UGAB_InterrogatePlayer_Search_C::Added_9291D75D4A0949E1C5B7E49C1FD11F8B()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GAB_InterrogatePlayer_Search_C", "Added_9291D75D4A0949E1C5B7E49C1FD11F8B");

	UObject::ProcessEvent(Func, nullptr);
}

void UGAB_InterrogatePlayer_Search_C::ApplyGameplayEffectToNPC(class UClass* GameplayEffect)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GAB_InterrogatePlayer_Search_C", "ApplyGameplayEffectToNPC");

	Params::GAB_InterrogatePlayer_Search_C_ApplyGameplayEffectToNPC Parms{};

	Parms.GameplayEffect = GameplayEffect;

	UObject::ProcessEvent(Func, &Parms);
}

void UGAB_InterrogatePlayer_Search_C::Cancelled_6BBDC9B445D4280492A25E8E5EA7A53D(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GAB_InterrogatePlayer_Search_C", "Cancelled_6BBDC9B445D4280492A25E8E5EA7A53D");

	Params::GAB_InterrogatePlayer_Search_C_Cancelled_6BBDC9B445D4280492A25E8E5EA7A53D Parms{};

	Parms.TargetData = std::move(TargetData);
	Parms.ApplicationTag = std::move(ApplicationTag);

	UObject::ProcessEvent(Func, &Parms);
}

void UGAB_InterrogatePlayer_Search_C::Completed_6BBDC9B445D4280492A25E8E5EA7A53D(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GAB_InterrogatePlayer_Search_C", "Completed_6BBDC9B445D4280492A25E8E5EA7A53D");

	Params::GAB_InterrogatePlayer_Search_C_Completed_6BBDC9B445D4280492A25E8E5EA7A53D Parms{};

	Parms.TargetData = std::move(TargetData);
	Parms.ApplicationTag = std::move(ApplicationTag);

	UObject::ProcessEvent(Func, &Parms);
}

void UGAB_InterrogatePlayer_Search_C::DropKeycard()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GAB_InterrogatePlayer_Search_C", "DropKeycard");

	UObject::ProcessEvent(Func, nullptr);
}

void UGAB_InterrogatePlayer_Search_C::DropLoot()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GAB_InterrogatePlayer_Search_C", "DropLoot");

	UObject::ProcessEvent(Func, nullptr);
}

void UGAB_InterrogatePlayer_Search_C::EndAbilityCleanup()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GAB_InterrogatePlayer_Search_C", "EndAbilityCleanup");

	UObject::ProcessEvent(Func, nullptr);
}

void UGAB_InterrogatePlayer_Search_C::ExecuteUbergraph_GAB_InterrogatePlayer_Search(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GAB_InterrogatePlayer_Search_C", "ExecuteUbergraph_GAB_InterrogatePlayer_Search");

	Params::GAB_InterrogatePlayer_Search_C_ExecuteUbergraph_GAB_InterrogatePlayer_Search Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

void UGAB_InterrogatePlayer_Search_C::GetKeycardToDrop(bool* HasKeycard, class UFortWorldItemDefinition** Output)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GAB_InterrogatePlayer_Search_C", "GetKeycardToDrop");

	Params::GAB_InterrogatePlayer_Search_C_GetKeycardToDrop Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (HasKeycard != nullptr)
		*HasKeycard = Parms.HasKeycard;

	if (Output != nullptr)
		*Output = Parms.Output;
}

void UGAB_InterrogatePlayer_Search_C::InitAbility()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GAB_InterrogatePlayer_Search_C", "InitAbility");

	UObject::ProcessEvent(Func, nullptr);
}

void UGAB_InterrogatePlayer_Search_C::K2_ActivateAbility()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GAB_InterrogatePlayer_Search_C", "K2_ActivateAbility");

	UObject::ProcessEvent(Func, nullptr);
}

void UGAB_InterrogatePlayer_Search_C::K2_OnEndAbility(bool bWasCancelled)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GAB_InterrogatePlayer_Search_C", "K2_OnEndAbility");

	Params::GAB_InterrogatePlayer_Search_C_K2_OnEndAbility Parms{};

	Parms.bWasCancelled = bWasCancelled;

	UObject::ProcessEvent(Func, &Parms);
}

void UGAB_InterrogatePlayer_Search_C::OnDied_Event_0(class AActor* DamagedActor, float Damage, class AController* InstigatedBy, class AActor* DamageCauser, const struct FVector& HitLocation, class UPrimitiveComponent* FHitComponent, class FName BoneName, const struct FVector& Momentum)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GAB_InterrogatePlayer_Search_C", "OnDied_Event_0");

	Params::GAB_InterrogatePlayer_Search_C_OnDied_Event_0 Parms{};

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

void UGAB_InterrogatePlayer_Search_C::OnDied_Event_1(class AActor* DamagedActor, float Damage, class AController* InstigatedBy, class AActor* DamageCauser, const struct FVector& HitLocation, class UPrimitiveComponent* FHitComponent, class FName BoneName, const struct FVector& Momentum)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GAB_InterrogatePlayer_Search_C", "OnDied_Event_1");

	Params::GAB_InterrogatePlayer_Search_C_OnDied_Event_1 Parms{};

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

void UGAB_InterrogatePlayer_Search_C::OnPress_2000C5AE43E9D757FF188B85CF911E39(float TimeWaited)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GAB_InterrogatePlayer_Search_C", "OnPress_2000C5AE43E9D757FF188B85CF911E39");

	Params::GAB_InterrogatePlayer_Search_C_OnPress_2000C5AE43E9D757FF188B85CF911E39 Parms{};

	Parms.TimeWaited = TimeWaited;

	UObject::ProcessEvent(Func, &Parms);
}

void UGAB_InterrogatePlayer_Search_C::ToggleReticleVisibility(bool Hide)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GAB_InterrogatePlayer_Search_C", "ToggleReticleVisibility");

	Params::GAB_InterrogatePlayer_Search_C_ToggleReticleVisibility Parms{};

	Parms.Hide = Hide;

	UObject::ProcessEvent(Func, &Parms);
}

void UGAB_InterrogatePlayer_Search_C::Triggered_6BBDC9B445D4280492A25E8E5EA7A53D(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GAB_InterrogatePlayer_Search_C", "Triggered_6BBDC9B445D4280492A25E8E5EA7A53D");

	Params::GAB_InterrogatePlayer_Search_C_Triggered_6BBDC9B445D4280492A25E8E5EA7A53D Parms{};

	Parms.TargetData = std::move(TargetData);
	Parms.ApplicationTag = std::move(ApplicationTag);

	UObject::ProcessEvent(Func, &Parms);
}

}
