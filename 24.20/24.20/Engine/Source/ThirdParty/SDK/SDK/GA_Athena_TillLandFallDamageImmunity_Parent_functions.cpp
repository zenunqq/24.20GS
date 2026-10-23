#pragma once

#include "Basic.hpp"

#include "GA_Athena_TillLandFallDamageImmunity_Parent_classes.hpp"
#include "GA_Athena_TillLandFallDamageImmunity_Parent_parameters.hpp"

namespace SDK
{

void UGA_Athena_TillLandFallDamageImmunity_Parent_C::Added_052C8416489756AFAF2C5391148ABB52()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Athena_TillLandFallDamageImmunity_Parent_C", "Added_052C8416489756AFAF2C5391148ABB52");

	UObject::ProcessEvent(Func, nullptr);
}

void UGA_Athena_TillLandFallDamageImmunity_Parent_C::Added_1195BCDD4C66168D5746C2BD02970859()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Athena_TillLandFallDamageImmunity_Parent_C", "Added_1195BCDD4C66168D5746C2BD02970859");

	UObject::ProcessEvent(Func, nullptr);
}

void UGA_Athena_TillLandFallDamageImmunity_Parent_C::Added_15DBA1504E74C72F22BBCBAD8E3CD31E()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Athena_TillLandFallDamageImmunity_Parent_C", "Added_15DBA1504E74C72F22BBCBAD8E3CD31E");

	UObject::ProcessEvent(Func, nullptr);
}

void UGA_Athena_TillLandFallDamageImmunity_Parent_C::Added_3DBE819D4ED6A0A0909A7690321F9B09()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Athena_TillLandFallDamageImmunity_Parent_C", "Added_3DBE819D4ED6A0A0909A7690321F9B09");

	UObject::ProcessEvent(Func, nullptr);
}

void UGA_Athena_TillLandFallDamageImmunity_Parent_C::CallEnd()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Athena_TillLandFallDamageImmunity_Parent_C", "CallEnd");

	UObject::ProcessEvent(Func, nullptr);
}

void UGA_Athena_TillLandFallDamageImmunity_Parent_C::ExecuteUbergraph_GA_Athena_TillLandFallDamageImmunity_Parent(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Athena_TillLandFallDamageImmunity_Parent_C", "ExecuteUbergraph_GA_Athena_TillLandFallDamageImmunity_Parent");

	Params::GA_Athena_TillLandFallDamageImmunity_Parent_C_ExecuteUbergraph_GA_Athena_TillLandFallDamageImmunity_Parent Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

void UGA_Athena_TillLandFallDamageImmunity_Parent_C::FailedToActivatePassiveAbility(const struct FGameplayAbilityActorInfo& ActorInfo)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Athena_TillLandFallDamageImmunity_Parent_C", "FailedToActivatePassiveAbility");

	Params::GA_Athena_TillLandFallDamageImmunity_Parent_C_FailedToActivatePassiveAbility Parms{};

	Parms.ActorInfo = std::move(ActorInfo);

	UObject::ProcessEvent(Func, &Parms);
}

void UGA_Athena_TillLandFallDamageImmunity_Parent_C::K2_ActivateAbility()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Athena_TillLandFallDamageImmunity_Parent_C", "K2_ActivateAbility");

	UObject::ProcessEvent(Func, nullptr);
}

void UGA_Athena_TillLandFallDamageImmunity_Parent_C::K2_OnEndAbility(bool bWasCancelled)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Athena_TillLandFallDamageImmunity_Parent_C", "K2_OnEndAbility");

	Params::GA_Athena_TillLandFallDamageImmunity_Parent_C_K2_OnEndAbility Parms{};

	Parms.bWasCancelled = bWasCancelled;

	UObject::ProcessEvent(Func, &Parms);
}

void UGA_Athena_TillLandFallDamageImmunity_Parent_C::PawnLanded(const struct FHitResult& Hit)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Athena_TillLandFallDamageImmunity_Parent_C", "PawnLanded");

	Params::GA_Athena_TillLandFallDamageImmunity_Parent_C_PawnLanded Parms{};

	Parms.Hit = std::move(Hit);

	UObject::ProcessEvent(Func, &Parms);
}

void UGA_Athena_TillLandFallDamageImmunity_Parent_C::SetUpBinds()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Athena_TillLandFallDamageImmunity_Parent_C", "SetUpBinds");

	UObject::ProcessEvent(Func, nullptr);
}

void UGA_Athena_TillLandFallDamageImmunity_Parent_C::SetUpWaits()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Athena_TillLandFallDamageImmunity_Parent_C", "SetUpWaits");

	UObject::ProcessEvent(Func, nullptr);
}

}
