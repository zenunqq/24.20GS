#pragma once

#include "Basic.hpp"

#include "UnstableLiquidGunRuntime_structs.hpp"
#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"

namespace SDK::Params
{

struct FortLiquidGunProjectile_HandleSplineHit final
{
public:
	struct FHitResult                             Hit;
};
static_assert(alignof(FortLiquidGunProjectile_HandleSplineHit) == 0x000008, "Wrong alignment on FortLiquidGunProjectile_HandleSplineHit");
static_assert(sizeof(FortLiquidGunProjectile_HandleSplineHit) == 0x0000E0, "Wrong size on FortLiquidGunProjectile_HandleSplineHit");
static_assert(offsetof(FortLiquidGunProjectile_HandleSplineHit, Hit) == 0x000000, "Member 'FortLiquidGunProjectile_HandleSplineHit::Hit' has a wrong offset!");

struct FortLiquidGunProjectile_SetDetachmentReason final
{
public:
	ELiquidRibbonDetachmentReason                 InDetachmentReason;
};
static_assert(alignof(FortLiquidGunProjectile_SetDetachmentReason) == 0x000001, "Wrong alignment on FortLiquidGunProjectile_SetDetachmentReason");
static_assert(sizeof(FortLiquidGunProjectile_SetDetachmentReason) == 0x000001, "Wrong size on FortLiquidGunProjectile_SetDetachmentReason");
static_assert(offsetof(FortLiquidGunProjectile_SetDetachmentReason, InDetachmentReason) == 0x000000, "Member 'FortLiquidGunProjectile_SetDetachmentReason::InDetachmentReason' has a wrong offset!");

struct FortLiquidGunProjectile_GetDetachmentReason final
{
public:
	ELiquidRibbonDetachmentReason                 ReturnValue;
};
static_assert(alignof(FortLiquidGunProjectile_GetDetachmentReason) == 0x000001, "Wrong alignment on FortLiquidGunProjectile_GetDetachmentReason");
static_assert(sizeof(FortLiquidGunProjectile_GetDetachmentReason) == 0x000001, "Wrong size on FortLiquidGunProjectile_GetDetachmentReason");
static_assert(offsetof(FortLiquidGunProjectile_GetDetachmentReason, ReturnValue) == 0x000000, "Member 'FortLiquidGunProjectile_GetDetachmentReason::ReturnValue' has a wrong offset!");

struct LiquidRibbonManager_CalculateSegments final
{
public:
	TArray<struct FVector>                        Points;
	float                                         Tension;
	uint8                                         Pad_14[0x4];
	TArray<struct FLiquidRibbonSplineSegment>     ReturnValue;
};
static_assert(alignof(LiquidRibbonManager_CalculateSegments) == 0x000008, "Wrong alignment on LiquidRibbonManager_CalculateSegments");
static_assert(sizeof(LiquidRibbonManager_CalculateSegments) == 0x000028, "Wrong size on LiquidRibbonManager_CalculateSegments");
static_assert(offsetof(LiquidRibbonManager_CalculateSegments, Points) == 0x000000, "Member 'LiquidRibbonManager_CalculateSegments::Points' has a wrong offset!");
static_assert(offsetof(LiquidRibbonManager_CalculateSegments, Tension) == 0x000010, "Member 'LiquidRibbonManager_CalculateSegments::Tension' has a wrong offset!");
static_assert(offsetof(LiquidRibbonManager_CalculateSegments, ReturnValue) == 0x000018, "Member 'LiquidRibbonManager_CalculateSegments::ReturnValue' has a wrong offset!");

struct LiquidRibbonManager_CalculateSplinePointsAndSetNiagaraData final
{
public:
	TArray<class AFortLiquidGunProjectile*>       Projectiles;
	bool                                          bAttachSplineToMuzzle;
	uint8                                         Pad_11[0x7];
	class UNiagaraComponent*                      NiagaraComponent;
	TArray<struct FVector>                        OutAllPositions;
	TArray<int32>                                 OutRibbonIDs;
	TArray<bool>                                  OutRibbonVisibilities;
	TArray<float>                                 OutFlashIntensities;
	TArray<int32>                                 OutRibbonSizes;
};
static_assert(alignof(LiquidRibbonManager_CalculateSplinePointsAndSetNiagaraData) == 0x000008, "Wrong alignment on LiquidRibbonManager_CalculateSplinePointsAndSetNiagaraData");
static_assert(sizeof(LiquidRibbonManager_CalculateSplinePointsAndSetNiagaraData) == 0x000070, "Wrong size on LiquidRibbonManager_CalculateSplinePointsAndSetNiagaraData");
static_assert(offsetof(LiquidRibbonManager_CalculateSplinePointsAndSetNiagaraData, Projectiles) == 0x000000, "Member 'LiquidRibbonManager_CalculateSplinePointsAndSetNiagaraData::Projectiles' has a wrong offset!");
static_assert(offsetof(LiquidRibbonManager_CalculateSplinePointsAndSetNiagaraData, bAttachSplineToMuzzle) == 0x000010, "Member 'LiquidRibbonManager_CalculateSplinePointsAndSetNiagaraData::bAttachSplineToMuzzle' has a wrong offset!");
static_assert(offsetof(LiquidRibbonManager_CalculateSplinePointsAndSetNiagaraData, NiagaraComponent) == 0x000018, "Member 'LiquidRibbonManager_CalculateSplinePointsAndSetNiagaraData::NiagaraComponent' has a wrong offset!");
static_assert(offsetof(LiquidRibbonManager_CalculateSplinePointsAndSetNiagaraData, OutAllPositions) == 0x000020, "Member 'LiquidRibbonManager_CalculateSplinePointsAndSetNiagaraData::OutAllPositions' has a wrong offset!");
static_assert(offsetof(LiquidRibbonManager_CalculateSplinePointsAndSetNiagaraData, OutRibbonIDs) == 0x000030, "Member 'LiquidRibbonManager_CalculateSplinePointsAndSetNiagaraData::OutRibbonIDs' has a wrong offset!");
static_assert(offsetof(LiquidRibbonManager_CalculateSplinePointsAndSetNiagaraData, OutRibbonVisibilities) == 0x000040, "Member 'LiquidRibbonManager_CalculateSplinePointsAndSetNiagaraData::OutRibbonVisibilities' has a wrong offset!");
static_assert(offsetof(LiquidRibbonManager_CalculateSplinePointsAndSetNiagaraData, OutFlashIntensities) == 0x000050, "Member 'LiquidRibbonManager_CalculateSplinePointsAndSetNiagaraData::OutFlashIntensities' has a wrong offset!");
static_assert(offsetof(LiquidRibbonManager_CalculateSplinePointsAndSetNiagaraData, OutRibbonSizes) == 0x000060, "Member 'LiquidRibbonManager_CalculateSplinePointsAndSetNiagaraData::OutRibbonSizes' has a wrong offset!");

struct LiquidRibbonManager_GetOrAddDetachment final
{
public:
	int32                                         RibbonID;
	uint8                                         Pad_4[0x4];
	struct FLiquidRibbonSplineSegment             Segment;
	struct FLiquidRibbonSplineDetachment          ReturnValue;
};
static_assert(alignof(LiquidRibbonManager_GetOrAddDetachment) == 0x000008, "Wrong alignment on LiquidRibbonManager_GetOrAddDetachment");
static_assert(sizeof(LiquidRibbonManager_GetOrAddDetachment) == 0x000138, "Wrong size on LiquidRibbonManager_GetOrAddDetachment");
static_assert(offsetof(LiquidRibbonManager_GetOrAddDetachment, RibbonID) == 0x000000, "Member 'LiquidRibbonManager_GetOrAddDetachment::RibbonID' has a wrong offset!");
static_assert(offsetof(LiquidRibbonManager_GetOrAddDetachment, Segment) == 0x000008, "Member 'LiquidRibbonManager_GetOrAddDetachment::Segment' has a wrong offset!");
static_assert(offsetof(LiquidRibbonManager_GetOrAddDetachment, ReturnValue) == 0x000080, "Member 'LiquidRibbonManager_GetOrAddDetachment::ReturnValue' has a wrong offset!");

struct LiquidRibbonManager_CalculatePointFlashIntensity final
{
public:
	int32                                         PointSize;
	float                                         ReturnValue;
};
static_assert(alignof(LiquidRibbonManager_CalculatePointFlashIntensity) == 0x000004, "Wrong alignment on LiquidRibbonManager_CalculatePointFlashIntensity");
static_assert(sizeof(LiquidRibbonManager_CalculatePointFlashIntensity) == 0x000008, "Wrong size on LiquidRibbonManager_CalculatePointFlashIntensity");
static_assert(offsetof(LiquidRibbonManager_CalculatePointFlashIntensity, PointSize) == 0x000000, "Member 'LiquidRibbonManager_CalculatePointFlashIntensity::PointSize' has a wrong offset!");
static_assert(offsetof(LiquidRibbonManager_CalculatePointFlashIntensity, ReturnValue) == 0x000004, "Member 'LiquidRibbonManager_CalculatePointFlashIntensity::ReturnValue' has a wrong offset!");

struct LiquidRibbonManager_CalculatePointSize final
{
public:
	int32                                         SegmentIndex;
	int32                                         PointIndex;
	float                                         ReturnValue;
};
static_assert(alignof(LiquidRibbonManager_CalculatePointSize) == 0x000004, "Wrong alignment on LiquidRibbonManager_CalculatePointSize");
static_assert(sizeof(LiquidRibbonManager_CalculatePointSize) == 0x00000C, "Wrong size on LiquidRibbonManager_CalculatePointSize");
static_assert(offsetof(LiquidRibbonManager_CalculatePointSize, SegmentIndex) == 0x000000, "Member 'LiquidRibbonManager_CalculatePointSize::SegmentIndex' has a wrong offset!");
static_assert(offsetof(LiquidRibbonManager_CalculatePointSize, PointIndex) == 0x000004, "Member 'LiquidRibbonManager_CalculatePointSize::PointIndex' has a wrong offset!");
static_assert(offsetof(LiquidRibbonManager_CalculatePointSize, ReturnValue) == 0x000008, "Member 'LiquidRibbonManager_CalculatePointSize::ReturnValue' has a wrong offset!");

struct LiquidRibbonManager_GetFirstVisiblePointIndex final
{
public:
	int32                                         ReturnValue;
};
static_assert(alignof(LiquidRibbonManager_GetFirstVisiblePointIndex) == 0x000004, "Wrong alignment on LiquidRibbonManager_GetFirstVisiblePointIndex");
static_assert(sizeof(LiquidRibbonManager_GetFirstVisiblePointIndex) == 0x000004, "Wrong size on LiquidRibbonManager_GetFirstVisiblePointIndex");
static_assert(offsetof(LiquidRibbonManager_GetFirstVisiblePointIndex, ReturnValue) == 0x000000, "Member 'LiquidRibbonManager_GetFirstVisiblePointIndex::ReturnValue' has a wrong offset!");

struct LiquidRibbonManager_GetPointOnSegment final
{
public:
	float                                         T;
	uint8                                         Pad_4[0x4];
	struct FLiquidRibbonSplineSegment             Segment;
	struct FVector                                ReturnValue;
};
static_assert(alignof(LiquidRibbonManager_GetPointOnSegment) == 0x000008, "Wrong alignment on LiquidRibbonManager_GetPointOnSegment");
static_assert(sizeof(LiquidRibbonManager_GetPointOnSegment) == 0x000098, "Wrong size on LiquidRibbonManager_GetPointOnSegment");
static_assert(offsetof(LiquidRibbonManager_GetPointOnSegment, T) == 0x000000, "Member 'LiquidRibbonManager_GetPointOnSegment::T' has a wrong offset!");
static_assert(offsetof(LiquidRibbonManager_GetPointOnSegment, Segment) == 0x000008, "Member 'LiquidRibbonManager_GetPointOnSegment::Segment' has a wrong offset!");
static_assert(offsetof(LiquidRibbonManager_GetPointOnSegment, ReturnValue) == 0x000080, "Member 'LiquidRibbonManager_GetPointOnSegment::ReturnValue' has a wrong offset!");

struct LiquidRibbonManager_SetNiagaraData final
{
public:
	class UNiagaraComponent*                      NiagaraComponent;
	TArray<struct FVector>                        Positions;
	TArray<int32>                                 RibbonIDs;
	TArray<bool>                                  RibbonVisibilities;
	TArray<float>                                 FlashIntensities;
	TArray<int32>                                 RibbonSizes;
};
static_assert(alignof(LiquidRibbonManager_SetNiagaraData) == 0x000008, "Wrong alignment on LiquidRibbonManager_SetNiagaraData");
static_assert(sizeof(LiquidRibbonManager_SetNiagaraData) == 0x000058, "Wrong size on LiquidRibbonManager_SetNiagaraData");
static_assert(offsetof(LiquidRibbonManager_SetNiagaraData, NiagaraComponent) == 0x000000, "Member 'LiquidRibbonManager_SetNiagaraData::NiagaraComponent' has a wrong offset!");
static_assert(offsetof(LiquidRibbonManager_SetNiagaraData, Positions) == 0x000008, "Member 'LiquidRibbonManager_SetNiagaraData::Positions' has a wrong offset!");
static_assert(offsetof(LiquidRibbonManager_SetNiagaraData, RibbonIDs) == 0x000018, "Member 'LiquidRibbonManager_SetNiagaraData::RibbonIDs' has a wrong offset!");
static_assert(offsetof(LiquidRibbonManager_SetNiagaraData, RibbonVisibilities) == 0x000028, "Member 'LiquidRibbonManager_SetNiagaraData::RibbonVisibilities' has a wrong offset!");
static_assert(offsetof(LiquidRibbonManager_SetNiagaraData, FlashIntensities) == 0x000038, "Member 'LiquidRibbonManager_SetNiagaraData::FlashIntensities' has a wrong offset!");
static_assert(offsetof(LiquidRibbonManager_SetNiagaraData, RibbonSizes) == 0x000048, "Member 'LiquidRibbonManager_SetNiagaraData::RibbonSizes' has a wrong offset!");

}
