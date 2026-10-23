#pragma once

#include "Basic.hpp"

#include "GA_Athena_Grenade_Rethrow_classes.hpp"
#include "GA_Athena_Grenade_Rethrow_parameters.hpp"

namespace SDK
{

void UGA_Athena_Grenade_Rethrow_C::AttachProjectile()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Athena_Grenade_Rethrow_C", "AttachProjectile");

	UObject::ProcessEvent(Func, nullptr);
}

void UGA_Athena_Grenade_Rethrow_C::AttemptSpawnThrownProjectile()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Athena_Grenade_Rethrow_C", "AttemptSpawnThrownProjectile");

	UObject::ProcessEvent(Func, nullptr);
}

void UGA_Athena_Grenade_Rethrow_C::Cancelled_3B7299CC49B6C5C075996A9C8DDF315F(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Athena_Grenade_Rethrow_C", "Cancelled_3B7299CC49B6C5C075996A9C8DDF315F");

	Params::GA_Athena_Grenade_Rethrow_C_Cancelled_3B7299CC49B6C5C075996A9C8DDF315F Parms{};

	Parms.TargetData = std::move(TargetData);
	Parms.ApplicationTag = std::move(ApplicationTag);

	UObject::ProcessEvent(Func, &Parms);
}

void UGA_Athena_Grenade_Rethrow_C::Completed_3B7299CC49B6C5C075996A9C8DDF315F(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Athena_Grenade_Rethrow_C", "Completed_3B7299CC49B6C5C075996A9C8DDF315F");

	Params::GA_Athena_Grenade_Rethrow_C_Completed_3B7299CC49B6C5C075996A9C8DDF315F Parms{};

	Parms.TargetData = std::move(TargetData);
	Parms.ApplicationTag = std::move(ApplicationTag);

	UObject::ProcessEvent(Func, &Parms);
}

void UGA_Athena_Grenade_Rethrow_C::DetachProjectile()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Athena_Grenade_Rethrow_C", "DetachProjectile");

	UObject::ProcessEvent(Func, nullptr);
}

void UGA_Athena_Grenade_Rethrow_C::ExecuteUbergraph_GA_Athena_Grenade_Rethrow(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Athena_Grenade_Rethrow_C", "ExecuteUbergraph_GA_Athena_Grenade_Rethrow");

	Params::GA_Athena_Grenade_Rethrow_C_ExecuteUbergraph_GA_Athena_Grenade_Rethrow Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

void UGA_Athena_Grenade_Rethrow_C::K2_ActivateAbility()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Athena_Grenade_Rethrow_C", "K2_ActivateAbility");

	UObject::ProcessEvent(Func, nullptr);
}

void UGA_Athena_Grenade_Rethrow_C::K2_OnEndAbility(bool bWasCancelled)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Athena_Grenade_Rethrow_C", "K2_OnEndAbility");

	Params::GA_Athena_Grenade_Rethrow_C_K2_OnEndAbility Parms{};

	Parms.bWasCancelled = bWasCancelled;

	UObject::ProcessEvent(Func, &Parms);
}

void UGA_Athena_Grenade_Rethrow_C::OnFinish_B295E6694DBD8B2B2478A38EA60F5624()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Athena_Grenade_Rethrow_C", "OnFinish_B295E6694DBD8B2B2478A38EA60F5624");

	UObject::ProcessEvent(Func, nullptr);
}

void UGA_Athena_Grenade_Rethrow_C::RethrowProjectile()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Athena_Grenade_Rethrow_C", "RethrowProjectile");

	UObject::ProcessEvent(Func, nullptr);
}

void UGA_Athena_Grenade_Rethrow_C::ThrowProjectile()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Athena_Grenade_Rethrow_C", "ThrowProjectile");

	UObject::ProcessEvent(Func, nullptr);
}

void UGA_Athena_Grenade_Rethrow_C::Triggered_3B7299CC49B6C5C075996A9C8DDF315F(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Athena_Grenade_Rethrow_C", "Triggered_3B7299CC49B6C5C075996A9C8DDF315F");

	Params::GA_Athena_Grenade_Rethrow_C_Triggered_3B7299CC49B6C5C075996A9C8DDF315F Parms{};

	Parms.TargetData = std::move(TargetData);
	Parms.ApplicationTag = std::move(ApplicationTag);

	UObject::ProcessEvent(Func, &Parms);
}

}
