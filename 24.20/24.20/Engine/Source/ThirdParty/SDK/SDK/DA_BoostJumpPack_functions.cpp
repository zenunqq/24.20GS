#pragma once

#include "Basic.hpp"

#include "DA_BoostJumpPack_classes.hpp"
#include "DA_BoostJumpPack_parameters.hpp"

namespace SDK
{

void ADA_BoostJumpPack_C::BPPressTrigger(class AFortDecoHelper* FortDecoHelper)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DA_BoostJumpPack_C", "BPPressTrigger");

	Params::DA_BoostJumpPack_C_BPPressTrigger Parms{};

	Parms.FortDecoHelper = FortDecoHelper;

	UObject::ProcessEvent(Func, &Parms);
}

void ADA_BoostJumpPack_C::ExecuteUbergraph_DA_BoostJumpPack(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DA_BoostJumpPack_C", "ExecuteUbergraph_DA_BoostJumpPack");

	Params::DA_BoostJumpPack_C_ExecuteUbergraph_DA_BoostJumpPack Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

void ADA_BoostJumpPack_C::IsOnGround(bool* bOnGround)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DA_BoostJumpPack_C", "IsOnGround");

	Params::DA_BoostJumpPack_C_IsOnGround Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (bOnGround != nullptr)
		*bOnGround = Parms.bOnGround;
}

void ADA_BoostJumpPack_C::RaiseUsageError(const struct FGameplayTagContainer& FailedReason)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DA_BoostJumpPack_C", "RaiseUsageError");

	Params::DA_BoostJumpPack_C_RaiseUsageError Parms{};

	Parms.FailedReason = std::move(FailedReason);

	UObject::ProcessEvent(Func, &Parms);
}

}
