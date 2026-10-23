#pragma once

#include "Basic.hpp"

#include "GA_BoostJumpPack_JumpHover_classes.hpp"
#include "GA_BoostJumpPack_JumpHover_parameters.hpp"

namespace SDK
{

void UGA_BoostJumpPack_JumpHover_C::ExecuteUbergraph_GA_BoostJumpPack_JumpHover(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_BoostJumpPack_JumpHover_C", "ExecuteUbergraph_GA_BoostJumpPack_JumpHover");

	Params::GA_BoostJumpPack_JumpHover_C_ExecuteUbergraph_GA_BoostJumpPack_JumpHover Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

void UGA_BoostJumpPack_JumpHover_C::K2_ActivateAbility()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_BoostJumpPack_JumpHover_C", "K2_ActivateAbility");

	UObject::ProcessEvent(Func, nullptr);
}

void UGA_BoostJumpPack_JumpHover_C::K2_CommitExecute()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_BoostJumpPack_JumpHover_C", "K2_CommitExecute");

	UObject::ProcessEvent(Func, nullptr);
}

void UGA_BoostJumpPack_JumpHover_C::K2_OnEndAbility(bool bWasCancelled)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_BoostJumpPack_JumpHover_C", "K2_OnEndAbility");

	Params::GA_BoostJumpPack_JumpHover_C_K2_OnEndAbility Parms{};

	Parms.bWasCancelled = bWasCancelled;

	UObject::ProcessEvent(Func, &Parms);
}

void UGA_BoostJumpPack_JumpHover_C::OnAbilityInputReleased()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_BoostJumpPack_JumpHover_C", "OnAbilityInputReleased");

	UObject::ProcessEvent(Func, nullptr);
}

bool UGA_BoostJumpPack_JumpHover_C::K2_CanActivateAbility(const struct FGameplayAbilityActorInfo& ActorInfo, const struct FGameplayAbilitySpecHandle& Handle, struct FGameplayTagContainer* RelevantTags) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_BoostJumpPack_JumpHover_C", "K2_CanActivateAbility");

	Params::GA_BoostJumpPack_JumpHover_C_K2_CanActivateAbility Parms{};

	Parms.ActorInfo = std::move(ActorInfo);
	Parms.Handle = std::move(Handle);

	UObject::ProcessEvent(Func, &Parms);

	if (RelevantTags != nullptr)
		*RelevantTags = std::move(Parms.RelevantTags);

	return Parms.ReturnValue;
}

}
