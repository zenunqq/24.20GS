#pragma once

#include "Basic.hpp"

#include "DA_Glider_Item_classes.hpp"
#include "DA_Glider_Item_parameters.hpp"

namespace SDK
{

void ADA_Glider_Item_C::BPPressTrigger(class AFortDecoHelper* FortDecoHelper)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DA_Glider_Item_C", "BPPressTrigger");

	Params::DA_Glider_Item_C_BPPressTrigger Parms{};

	Parms.FortDecoHelper = FortDecoHelper;

	UObject::ProcessEvent(Func, &Parms);
}

void ADA_Glider_Item_C::ExecuteUbergraph_DA_Glider_Item(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DA_Glider_Item_C", "ExecuteUbergraph_DA_Glider_Item");

	Params::DA_Glider_Item_C_ExecuteUbergraph_DA_Glider_Item Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

void ADA_Glider_Item_C::IsOnGround(bool* bOnGround)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DA_Glider_Item_C", "IsOnGround");

	Params::DA_Glider_Item_C_IsOnGround Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (bOnGround != nullptr)
		*bOnGround = Parms.bOnGround;
}

void ADA_Glider_Item_C::RaiseUsageError(const struct FGameplayTagContainer& FailedReason)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DA_Glider_Item_C", "RaiseUsageError");

	Params::DA_Glider_Item_C_RaiseUsageError Parms{};

	Parms.FailedReason = std::move(FailedReason);

	UObject::ProcessEvent(Func, &Parms);
}

}
