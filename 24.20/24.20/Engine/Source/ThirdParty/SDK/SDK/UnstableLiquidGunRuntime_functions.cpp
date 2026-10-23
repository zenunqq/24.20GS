#pragma once

#include "Basic.hpp"

#include "UnstableLiquidGunRuntime_classes.hpp"
#include "UnstableLiquidGunRuntime_parameters.hpp"

namespace SDK
{

void AFortLiquidGunProjectile::HandleSplineHit(const struct FHitResult& Hit)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortLiquidGunProjectile", "HandleSplineHit");

	Params::FortLiquidGunProjectile_HandleSplineHit Parms{};

	Parms.Hit = std::move(Hit);

	UObject::ProcessEvent(Func, &Parms);
}

void AFortLiquidGunProjectile::SetDetachmentReason(ELiquidRibbonDetachmentReason InDetachmentReason)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortLiquidGunProjectile", "SetDetachmentReason");

	Params::FortLiquidGunProjectile_SetDetachmentReason Parms{};

	Parms.InDetachmentReason = InDetachmentReason;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

ELiquidRibbonDetachmentReason AFortLiquidGunProjectile::GetDetachmentReason() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortLiquidGunProjectile", "GetDetachmentReason");

	Params::FortLiquidGunProjectile_GetDetachmentReason Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

TArray<struct FLiquidRibbonSplineSegment> ALiquidRibbonManager::CalculateSegments(const TArray<struct FVector>& Points, const float Tension)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LiquidRibbonManager", "CalculateSegments");

	Params::LiquidRibbonManager_CalculateSegments Parms{};

	Parms.Points = std::move(Points);
	Parms.Tension = Tension;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

void ALiquidRibbonManager::CalculateSplinePointsAndSetNiagaraData(const TArray<class AFortLiquidGunProjectile*>& Projectiles, bool bAttachSplineToMuzzle, class UNiagaraComponent* NiagaraComponent, TArray<struct FVector>* OutAllPositions, TArray<int32>* OutRibbonIDs, TArray<bool>* OutRibbonVisibilities, TArray<float>* OutFlashIntensities, TArray<int32>* OutRibbonSizes)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LiquidRibbonManager", "CalculateSplinePointsAndSetNiagaraData");

	Params::LiquidRibbonManager_CalculateSplinePointsAndSetNiagaraData Parms{};

	Parms.Projectiles = std::move(Projectiles);
	Parms.bAttachSplineToMuzzle = bAttachSplineToMuzzle;
	Parms.NiagaraComponent = NiagaraComponent;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	if (OutAllPositions != nullptr)
		*OutAllPositions = std::move(Parms.OutAllPositions);

	if (OutRibbonIDs != nullptr)
		*OutRibbonIDs = std::move(Parms.OutRibbonIDs);

	if (OutRibbonVisibilities != nullptr)
		*OutRibbonVisibilities = std::move(Parms.OutRibbonVisibilities);

	if (OutFlashIntensities != nullptr)
		*OutFlashIntensities = std::move(Parms.OutFlashIntensities);

	if (OutRibbonSizes != nullptr)
		*OutRibbonSizes = std::move(Parms.OutRibbonSizes);
}

const struct FLiquidRibbonSplineDetachment ALiquidRibbonManager::GetOrAddDetachment(const int32 RibbonID, const struct FLiquidRibbonSplineSegment& Segment)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LiquidRibbonManager", "GetOrAddDetachment");

	Params::LiquidRibbonManager_GetOrAddDetachment Parms{};

	Parms.RibbonID = RibbonID;
	Parms.Segment = std::move(Segment);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

void ALiquidRibbonManager::RunSplineCollisionTestOnProjectiles()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LiquidRibbonManager", "RunSplineCollisionTestOnProjectiles");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

float ALiquidRibbonManager::CalculatePointFlashIntensity(const int32 PointSize) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LiquidRibbonManager", "CalculatePointFlashIntensity");

	Params::LiquidRibbonManager_CalculatePointFlashIntensity Parms{};

	Parms.PointSize = PointSize;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

float ALiquidRibbonManager::CalculatePointSize(int32 SegmentIndex, int32 PointIndex) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LiquidRibbonManager", "CalculatePointSize");

	Params::LiquidRibbonManager_CalculatePointSize Parms{};

	Parms.SegmentIndex = SegmentIndex;
	Parms.PointIndex = PointIndex;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

int32 ALiquidRibbonManager::GetFirstVisiblePointIndex() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LiquidRibbonManager", "GetFirstVisiblePointIndex");

	Params::LiquidRibbonManager_GetFirstVisiblePointIndex Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

struct FVector ALiquidRibbonManager::GetPointOnSegment(float T, const struct FLiquidRibbonSplineSegment& Segment) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LiquidRibbonManager", "GetPointOnSegment");

	Params::LiquidRibbonManager_GetPointOnSegment Parms{};

	Parms.T = T;
	Parms.Segment = std::move(Segment);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

void ALiquidRibbonManager::SetNiagaraData(class UNiagaraComponent* NiagaraComponent, const TArray<struct FVector>& Positions, const TArray<int32>& RibbonIDs, const TArray<bool>& RibbonVisibilities, const TArray<float>& FlashIntensities, const TArray<int32>& RibbonSizes) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LiquidRibbonManager", "SetNiagaraData");

	Params::LiquidRibbonManager_SetNiagaraData Parms{};

	Parms.NiagaraComponent = NiagaraComponent;
	Parms.Positions = std::move(Positions);
	Parms.RibbonIDs = std::move(RibbonIDs);
	Parms.RibbonVisibilities = std::move(RibbonVisibilities);
	Parms.FlashIntensities = std::move(FlashIntensities);
	Parms.RibbonSizes = std::move(RibbonSizes);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

}
