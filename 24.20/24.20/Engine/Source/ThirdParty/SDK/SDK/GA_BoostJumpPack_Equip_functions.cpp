#pragma once

#include "Basic.hpp"

#include "GA_BoostJumpPack_Equip_classes.hpp"
#include "GA_BoostJumpPack_Equip_parameters.hpp"

namespace SDK
{

void UGA_BoostJumpPack_Equip_C::ExecuteUbergraph_GA_BoostJumpPack_Equip(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_BoostJumpPack_Equip_C", "ExecuteUbergraph_GA_BoostJumpPack_Equip");

	Params::GA_BoostJumpPack_Equip_C_ExecuteUbergraph_GA_BoostJumpPack_Equip Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

void UGA_BoostJumpPack_Equip_C::IsAuthority(bool* bAuthority)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_BoostJumpPack_Equip_C", "IsAuthority");

	Params::GA_BoostJumpPack_Equip_C_IsAuthority Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (bAuthority != nullptr)
		*bAuthority = Parms.bAuthority;
}

void UGA_BoostJumpPack_Equip_C::K2_ActivateAbility()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_BoostJumpPack_Equip_C", "K2_ActivateAbility");

	UObject::ProcessEvent(Func, nullptr);
}

class UFortItem* UGA_BoostJumpPack_Equip_C::GetGadgetItem(class AFortPlayerPawn* Pawn) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_BoostJumpPack_Equip_C", "GetGadgetItem");

	Params::GA_BoostJumpPack_Equip_C_GetGadgetItem Parms{};

	Parms.Pawn = Pawn;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

void UGA_BoostJumpPack_Equip_C::GetPlayerController(class AFortPlayerPawn* Pawn, class AFortPlayerControllerZone** AsFort_Player_Controller_Zone) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_BoostJumpPack_Equip_C", "GetPlayerController");

	Params::GA_BoostJumpPack_Equip_C_GetPlayerController Parms{};

	Parms.Pawn = Pawn;

	UObject::ProcessEvent(Func, &Parms);

	if (AsFort_Player_Controller_Zone != nullptr)
		*AsFort_Player_Controller_Zone = Parms.AsFort_Player_Controller_Zone;
}

bool UGA_BoostJumpPack_Equip_C::K2_CanActivateAbility(const struct FGameplayAbilityActorInfo& ActorInfo, const struct FGameplayAbilitySpecHandle& Handle, struct FGameplayTagContainer* RelevantTags) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_BoostJumpPack_Equip_C", "K2_CanActivateAbility");

	Params::GA_BoostJumpPack_Equip_C_K2_CanActivateAbility Parms{};

	Parms.ActorInfo = std::move(ActorInfo);
	Parms.Handle = std::move(Handle);

	UObject::ProcessEvent(Func, &Parms);

	if (RelevantTags != nullptr)
		*RelevantTags = std::move(Parms.RelevantTags);

	return Parms.ReturnValue;
}

}
