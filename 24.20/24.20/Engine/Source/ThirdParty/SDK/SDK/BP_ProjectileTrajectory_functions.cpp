#pragma once

#include "Basic.hpp"

#include "BP_ProjectileTrajectory_classes.hpp"
#include "BP_ProjectileTrajectory_parameters.hpp"

namespace SDK
{

void ABP_ProjectileTrajectory_C::ExecuteUbergraph_BP_ProjectileTrajectory(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ProjectileTrajectory_C", "ExecuteUbergraph_BP_ProjectileTrajectory");

	Params::BP_ProjectileTrajectory_C_ExecuteUbergraph_BP_ProjectileTrajectory Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

void ABP_ProjectileTrajectory_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ProjectileTrajectory_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}

void ABP_ProjectileTrajectory_C::ReceiveTick(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ProjectileTrajectory_C", "ReceiveTick");

	Params::BP_ProjectileTrajectory_C_ReceiveTick Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);
}

void ABP_ProjectileTrajectory_C::SetShouldUpdateFromOwner(bool ShouldUpdate_0, class UObject* Owner_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ProjectileTrajectory_C", "SetShouldUpdateFromOwner");

	Params::BP_ProjectileTrajectory_C_SetShouldUpdateFromOwner Parms{};

	Parms.ShouldUpdate_0 = ShouldUpdate_0;
	Parms.Owner_0 = Owner_0;

	UObject::ProcessEvent(Func, &Parms);
}

void ABP_ProjectileTrajectory_C::SetTrajectorySpline(const TArray<struct FVector>& SplinePoints, const TArray<struct FVector>& SplineTangents)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ProjectileTrajectory_C", "SetTrajectorySpline");

	Params::BP_ProjectileTrajectory_C_SetTrajectorySpline Parms{};

	Parms.SplinePoints = std::move(SplinePoints);
	Parms.SplineTangents = std::move(SplineTangents);

	UObject::ProcessEvent(Func, &Parms);
}

void ABP_ProjectileTrajectory_C::SetTrajectoryValid(bool bIsTrajectoryValid_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ProjectileTrajectory_C", "SetTrajectoryValid");

	Params::BP_ProjectileTrajectory_C_SetTrajectoryValid Parms{};

	Parms.bIsTrajectoryValid_0 = bIsTrajectoryValid_0;

	UObject::ProcessEvent(Func, &Parms);
}

void ABP_ProjectileTrajectory_C::UpdateFromTrajectoryOwner()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ProjectileTrajectory_C", "UpdateFromTrajectoryOwner");

	UObject::ProcessEvent(Func, nullptr);
}

void ABP_ProjectileTrajectory_C::UpdateTargetMeshVisibility()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ProjectileTrajectory_C", "UpdateTargetMeshVisibility");

	UObject::ProcessEvent(Func, nullptr);
}

void ABP_ProjectileTrajectory_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ProjectileTrajectory_C", "UserConstructionScript");

	UObject::ProcessEvent(Func, nullptr);
}

}
