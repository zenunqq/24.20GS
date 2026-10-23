#pragma once

#include "Basic.hpp"

#include "FortWaterBodyBP_classes.hpp"
#include "FortWaterBodyBP_parameters.hpp"

namespace SDK
{

void AFortWaterBodyBP_C::ExecuteUbergraph_FortWaterBodyBP(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortWaterBodyBP_C", "ExecuteUbergraph_FortWaterBodyBP");

	Params::FortWaterBodyBP_C_ExecuteUbergraph_FortWaterBodyBP Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

void AFortWaterBodyBP_C::OnReceivedBulletImpact(const struct FHitResult& Hit)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortWaterBodyBP_C", "OnReceivedBulletImpact");

	Params::FortWaterBodyBP_C_OnReceivedBulletImpact Parms{};

	Parms.Hit = std::move(Hit);

	UObject::ProcessEvent(Func, &Parms);
}

void AFortWaterBodyBP_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortWaterBodyBP_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}

}
