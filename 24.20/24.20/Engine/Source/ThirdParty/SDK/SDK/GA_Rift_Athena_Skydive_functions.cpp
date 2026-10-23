#pragma once

#include "Basic.hpp"

#include "GA_Rift_Athena_Skydive_classes.hpp"
#include "GA_Rift_Athena_Skydive_parameters.hpp"

namespace SDK
{

void UGA_Rift_Athena_Skydive_C::Added_C39EFBAB480B446A6927009E5953EC41()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Rift_Athena_Skydive_C", "Added_C39EFBAB480B446A6927009E5953EC41");

	UObject::ProcessEvent(Func, nullptr);
}

void UGA_Rift_Athena_Skydive_C::ExecuteUbergraph_GA_Rift_Athena_Skydive(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Rift_Athena_Skydive_C", "ExecuteUbergraph_GA_Rift_Athena_Skydive");

	Params::GA_Rift_Athena_Skydive_C_ExecuteUbergraph_GA_Rift_Athena_Skydive Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

void UGA_Rift_Athena_Skydive_C::HandleForceEnd()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Rift_Athena_Skydive_C", "HandleForceEnd");

	UObject::ProcessEvent(Func, nullptr);
}

void UGA_Rift_Athena_Skydive_C::K2_ActivateAbility()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Rift_Athena_Skydive_C", "K2_ActivateAbility");

	UObject::ProcessEvent(Func, nullptr);
}

void UGA_Rift_Athena_Skydive_C::K2_OnEndAbility(bool bWasCancelled)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Rift_Athena_Skydive_C", "K2_OnEndAbility");

	Params::GA_Rift_Athena_Skydive_C_K2_OnEndAbility Parms{};

	Parms.bWasCancelled = bWasCancelled;

	UObject::ProcessEvent(Func, &Parms);
}

void UGA_Rift_Athena_Skydive_C::OnBlendOut_AA0523504B7CA4F488E1E6A11F48308A()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Rift_Athena_Skydive_C", "OnBlendOut_AA0523504B7CA4F488E1E6A11F48308A");

	UObject::ProcessEvent(Func, nullptr);
}

void UGA_Rift_Athena_Skydive_C::OnCancelled_AA0523504B7CA4F488E1E6A11F48308A()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Rift_Athena_Skydive_C", "OnCancelled_AA0523504B7CA4F488E1E6A11F48308A");

	UObject::ProcessEvent(Func, nullptr);
}

void UGA_Rift_Athena_Skydive_C::OnCompleted_AA0523504B7CA4F488E1E6A11F48308A()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Rift_Athena_Skydive_C", "OnCompleted_AA0523504B7CA4F488E1E6A11F48308A");

	UObject::ProcessEvent(Func, nullptr);
}

void UGA_Rift_Athena_Skydive_C::OnDestroyed_Event_0(class AActor* DestroyedActor)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Rift_Athena_Skydive_C", "OnDestroyed_Event_0");

	Params::GA_Rift_Athena_Skydive_C_OnDestroyed_Event_0 Parms{};

	Parms.DestroyedActor = DestroyedActor;

	UObject::ProcessEvent(Func, &Parms);
}

void UGA_Rift_Athena_Skydive_C::OnInterrupted_AA0523504B7CA4F488E1E6A11F48308A()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Rift_Athena_Skydive_C", "OnInterrupted_AA0523504B7CA4F488E1E6A11F48308A");

	UObject::ProcessEvent(Func, nullptr);
}

void UGA_Rift_Athena_Skydive_C::OnPawnEnteredWater(class AFortPlayerPawn* FortPlayerPawn)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Rift_Athena_Skydive_C", "OnPawnEnteredWater");

	Params::GA_Rift_Athena_Skydive_C_OnPawnEnteredWater Parms{};

	Parms.FortPlayerPawn = FortPlayerPawn;

	UObject::ProcessEvent(Func, &Parms);
}

void UGA_Rift_Athena_Skydive_C::OnPawnLanded(const struct FHitResult& Hit)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Rift_Athena_Skydive_C", "OnPawnLanded");

	Params::GA_Rift_Athena_Skydive_C_OnPawnLanded Parms{};

	Parms.Hit = std::move(Hit);

	UObject::ProcessEvent(Func, &Parms);
}

void UGA_Rift_Athena_Skydive_C::RemoveSkydivingGameplayEffect()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Rift_Athena_Skydive_C", "RemoveSkydivingGameplayEffect");

	UObject::ProcessEvent(Func, nullptr);
}

void UGA_Rift_Athena_Skydive_C::SetPlayerToSkydive()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Rift_Athena_Skydive_C", "SetPlayerToSkydive");

	UObject::ProcessEvent(Func, nullptr);
}

}
