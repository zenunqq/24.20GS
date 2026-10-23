#pragma once

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "FortniteGame_classes.hpp"
#include "UnstableLiquidGunRuntime_structs.hpp"
#include "GameplayAbilities_structs.hpp"
#include "Engine_structs.hpp"
#include "Engine_classes.hpp"

namespace SDK
{

class AFortLiquidGunProjectile final : public AFortProjectileBase
{
public:
	class USceneComponent*                        AttachComponent;
	struct FVector                                AttachOffset;
	int32                                         ProjectileIndex;
	uint8                                         Pad_A44[0x4];
	struct FVector                                StopNormal;
	class ALiquidRibbonManager*                   RibbonManager;
	struct FScalableFloat                         MinDistBetweenProjectilesForSplineCollisionTest;
	struct FScalableFloat                         MinDistBetweenInLineProjectilesForSplineCollisionTest;
	struct FScalableFloat                         MinProjectileVelocityAngleToBeInLine;
	ECollisionChannel                             BroadSphereOverlapTraceChannel;
	uint8                                         Pad_AE1[0x3];
	class FName                                   CapsuleTraceProfileName;
	bool                                          bCapsuleTraceComplex;
	uint8                                         Pad_AE9[0x7];
	struct FVector_NetQuantize                    RandomDetachmentAngleFirstHalf;
	struct FVector_NetQuantize                    RandomDetachmentAngleSecondHalf;
	bool                                          bDrawDebugCollision;
	bool                                          bDrawDebugCollisionOnlyCapsuleTraceHits;
	ELiquidRibbonDetachmentReason                 DetachmentReason;
	uint8                                         Pad_B23[0x4D];

public:
	void HandleSplineHit(const struct FHitResult& Hit);
	void SetDetachmentReason(ELiquidRibbonDetachmentReason InDetachmentReason);

	ELiquidRibbonDetachmentReason GetDetachmentReason() const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortLiquidGunProjectile">();
	}
	static class AFortLiquidGunProjectile* GetDefaultObj()
	{
		return GetDefaultObjImpl<AFortLiquidGunProjectile>();
	}
};
static_assert(alignof(AFortLiquidGunProjectile) == 0x000008, "Wrong alignment on AFortLiquidGunProjectile");
static_assert(sizeof(AFortLiquidGunProjectile) == 0x000B70, "Wrong size on AFortLiquidGunProjectile");
static_assert(offsetof(AFortLiquidGunProjectile, AttachComponent) == 0x000A20, "Member 'AFortLiquidGunProjectile::AttachComponent' has a wrong offset!");
static_assert(offsetof(AFortLiquidGunProjectile, AttachOffset) == 0x000A28, "Member 'AFortLiquidGunProjectile::AttachOffset' has a wrong offset!");
static_assert(offsetof(AFortLiquidGunProjectile, ProjectileIndex) == 0x000A40, "Member 'AFortLiquidGunProjectile::ProjectileIndex' has a wrong offset!");
static_assert(offsetof(AFortLiquidGunProjectile, StopNormal) == 0x000A48, "Member 'AFortLiquidGunProjectile::StopNormal' has a wrong offset!");
static_assert(offsetof(AFortLiquidGunProjectile, RibbonManager) == 0x000A60, "Member 'AFortLiquidGunProjectile::RibbonManager' has a wrong offset!");
static_assert(offsetof(AFortLiquidGunProjectile, MinDistBetweenProjectilesForSplineCollisionTest) == 0x000A68, "Member 'AFortLiquidGunProjectile::MinDistBetweenProjectilesForSplineCollisionTest' has a wrong offset!");
static_assert(offsetof(AFortLiquidGunProjectile, MinDistBetweenInLineProjectilesForSplineCollisionTest) == 0x000A90, "Member 'AFortLiquidGunProjectile::MinDistBetweenInLineProjectilesForSplineCollisionTest' has a wrong offset!");
static_assert(offsetof(AFortLiquidGunProjectile, MinProjectileVelocityAngleToBeInLine) == 0x000AB8, "Member 'AFortLiquidGunProjectile::MinProjectileVelocityAngleToBeInLine' has a wrong offset!");
static_assert(offsetof(AFortLiquidGunProjectile, BroadSphereOverlapTraceChannel) == 0x000AE0, "Member 'AFortLiquidGunProjectile::BroadSphereOverlapTraceChannel' has a wrong offset!");
static_assert(offsetof(AFortLiquidGunProjectile, CapsuleTraceProfileName) == 0x000AE4, "Member 'AFortLiquidGunProjectile::CapsuleTraceProfileName' has a wrong offset!");
static_assert(offsetof(AFortLiquidGunProjectile, bCapsuleTraceComplex) == 0x000AE8, "Member 'AFortLiquidGunProjectile::bCapsuleTraceComplex' has a wrong offset!");
static_assert(offsetof(AFortLiquidGunProjectile, RandomDetachmentAngleFirstHalf) == 0x000AF0, "Member 'AFortLiquidGunProjectile::RandomDetachmentAngleFirstHalf' has a wrong offset!");
static_assert(offsetof(AFortLiquidGunProjectile, RandomDetachmentAngleSecondHalf) == 0x000B08, "Member 'AFortLiquidGunProjectile::RandomDetachmentAngleSecondHalf' has a wrong offset!");
static_assert(offsetof(AFortLiquidGunProjectile, bDrawDebugCollision) == 0x000B20, "Member 'AFortLiquidGunProjectile::bDrawDebugCollision' has a wrong offset!");
static_assert(offsetof(AFortLiquidGunProjectile, bDrawDebugCollisionOnlyCapsuleTraceHits) == 0x000B21, "Member 'AFortLiquidGunProjectile::bDrawDebugCollisionOnlyCapsuleTraceHits' has a wrong offset!");
static_assert(offsetof(AFortLiquidGunProjectile, DetachmentReason) == 0x000B22, "Member 'AFortLiquidGunProjectile::DetachmentReason' has a wrong offset!");

class ALiquidRibbonManager final : public AActor
{
public:
	int32                                         PointsPerSegment;
	uint8                                         Pad_28C[0x4];
	struct FScalableFloat                         MaxSegmentLengthBeforeBreak;
	float                                         SplineCurveTension;
	float                                         MinPointSize;
	float                                         MaxPointSize;
	int32                                         NumPointsAtMinPointSize;
	int32                                         NumPointsAtMaxPointSize;
	float                                         SplineLengthForSizeCalculation;
	int32                                         NumPointsToTaperDownSplineEndSize;
	float                                         MinSplineEndTaperSize;
	float                                         TaperSizeAtDetachment_RemapClosenessToBreakageOldMin;
	float                                         TaperSizeAtDetachment_RemapClosenessToBreakageOldMax;
	float                                         MinPointSizePercentForFlashIntensity;
	float                                         MaxPointSizePercentForFlashIntensity;
	class FName                                   PositionsNiagaraParamName;
	class FName                                   RibbonIDsNiagaraParamName;
	class FName                                   RibbonVisibilitiesNiagaraParamName;
	class FName                                   FlashIntensitiesNiagaraParamName;
	class FName                                   RibbonSizesNiagaraParamName;
	uint8                                         Pad_2FC[0x4];
	struct FScalableFloat                         CalculateBaseCurlOffset_MaxSegmentLength;
	struct FScalableFloat                         CalculateBaseCurlOffset_MaxTimeSinceDetachment;
	struct FScalableFloat                         CalculateBaseCurlOffset_TowardPerpendicularMult;
	struct FScalableFloat                         CalculateBaseCurlOffset_TowardEndMult;
	struct FScalableFloat                         CalculateBaseCurlOffset_TowardRandomMult;
	class UCurveFloat*                            TimeSinceDetachmentCurlCurve;
	struct FScalableFloat                         TimeSinceDetachmentCurlCurve_MaxTime;
	float                                         CurlingMaxClosenessToBreakage;
	uint8                                         Pad_3FC[0x4];
	TArray<float>                                 SegmentLengths;
	TArray<struct FLiquidRibbonSplineDetachment>  Detachments;
	TArray<struct FLiquidRibbonSplineSegment>     SplineSegments;
	TArray<class AFortLiquidGunProjectile*>       Projectiles_Native;

public:
	TArray<struct FLiquidRibbonSplineSegment> CalculateSegments(const TArray<struct FVector>& Points, const float Tension);
	void CalculateSplinePointsAndSetNiagaraData(const TArray<class AFortLiquidGunProjectile*>& Projectiles, bool bAttachSplineToMuzzle, class UNiagaraComponent* NiagaraComponent, TArray<struct FVector>* OutAllPositions, TArray<int32>* OutRibbonIDs, TArray<bool>* OutRibbonVisibilities, TArray<float>* OutFlashIntensities, TArray<int32>* OutRibbonSizes);
	const struct FLiquidRibbonSplineDetachment GetOrAddDetachment(const int32 RibbonID, const struct FLiquidRibbonSplineSegment& Segment);
	void RunSplineCollisionTestOnProjectiles();

	float CalculatePointFlashIntensity(const int32 PointSize) const;
	float CalculatePointSize(int32 SegmentIndex, int32 PointIndex) const;
	int32 GetFirstVisiblePointIndex() const;
	struct FVector GetPointOnSegment(float T, const struct FLiquidRibbonSplineSegment& Segment) const;
	void SetNiagaraData(class UNiagaraComponent* NiagaraComponent, const TArray<struct FVector>& Positions, const TArray<int32>& RibbonIDs, const TArray<bool>& RibbonVisibilities, const TArray<float>& FlashIntensities, const TArray<int32>& RibbonSizes) const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"LiquidRibbonManager">();
	}
	static class ALiquidRibbonManager* GetDefaultObj()
	{
		return GetDefaultObjImpl<ALiquidRibbonManager>();
	}
};
static_assert(alignof(ALiquidRibbonManager) == 0x000008, "Wrong alignment on ALiquidRibbonManager");
static_assert(sizeof(ALiquidRibbonManager) == 0x000440, "Wrong size on ALiquidRibbonManager");
static_assert(offsetof(ALiquidRibbonManager, PointsPerSegment) == 0x000288, "Member 'ALiquidRibbonManager::PointsPerSegment' has a wrong offset!");
static_assert(offsetof(ALiquidRibbonManager, MaxSegmentLengthBeforeBreak) == 0x000290, "Member 'ALiquidRibbonManager::MaxSegmentLengthBeforeBreak' has a wrong offset!");
static_assert(offsetof(ALiquidRibbonManager, SplineCurveTension) == 0x0002B8, "Member 'ALiquidRibbonManager::SplineCurveTension' has a wrong offset!");
static_assert(offsetof(ALiquidRibbonManager, MinPointSize) == 0x0002BC, "Member 'ALiquidRibbonManager::MinPointSize' has a wrong offset!");
static_assert(offsetof(ALiquidRibbonManager, MaxPointSize) == 0x0002C0, "Member 'ALiquidRibbonManager::MaxPointSize' has a wrong offset!");
static_assert(offsetof(ALiquidRibbonManager, NumPointsAtMinPointSize) == 0x0002C4, "Member 'ALiquidRibbonManager::NumPointsAtMinPointSize' has a wrong offset!");
static_assert(offsetof(ALiquidRibbonManager, NumPointsAtMaxPointSize) == 0x0002C8, "Member 'ALiquidRibbonManager::NumPointsAtMaxPointSize' has a wrong offset!");
static_assert(offsetof(ALiquidRibbonManager, SplineLengthForSizeCalculation) == 0x0002CC, "Member 'ALiquidRibbonManager::SplineLengthForSizeCalculation' has a wrong offset!");
static_assert(offsetof(ALiquidRibbonManager, NumPointsToTaperDownSplineEndSize) == 0x0002D0, "Member 'ALiquidRibbonManager::NumPointsToTaperDownSplineEndSize' has a wrong offset!");
static_assert(offsetof(ALiquidRibbonManager, MinSplineEndTaperSize) == 0x0002D4, "Member 'ALiquidRibbonManager::MinSplineEndTaperSize' has a wrong offset!");
static_assert(offsetof(ALiquidRibbonManager, TaperSizeAtDetachment_RemapClosenessToBreakageOldMin) == 0x0002D8, "Member 'ALiquidRibbonManager::TaperSizeAtDetachment_RemapClosenessToBreakageOldMin' has a wrong offset!");
static_assert(offsetof(ALiquidRibbonManager, TaperSizeAtDetachment_RemapClosenessToBreakageOldMax) == 0x0002DC, "Member 'ALiquidRibbonManager::TaperSizeAtDetachment_RemapClosenessToBreakageOldMax' has a wrong offset!");
static_assert(offsetof(ALiquidRibbonManager, MinPointSizePercentForFlashIntensity) == 0x0002E0, "Member 'ALiquidRibbonManager::MinPointSizePercentForFlashIntensity' has a wrong offset!");
static_assert(offsetof(ALiquidRibbonManager, MaxPointSizePercentForFlashIntensity) == 0x0002E4, "Member 'ALiquidRibbonManager::MaxPointSizePercentForFlashIntensity' has a wrong offset!");
static_assert(offsetof(ALiquidRibbonManager, PositionsNiagaraParamName) == 0x0002E8, "Member 'ALiquidRibbonManager::PositionsNiagaraParamName' has a wrong offset!");
static_assert(offsetof(ALiquidRibbonManager, RibbonIDsNiagaraParamName) == 0x0002EC, "Member 'ALiquidRibbonManager::RibbonIDsNiagaraParamName' has a wrong offset!");
static_assert(offsetof(ALiquidRibbonManager, RibbonVisibilitiesNiagaraParamName) == 0x0002F0, "Member 'ALiquidRibbonManager::RibbonVisibilitiesNiagaraParamName' has a wrong offset!");
static_assert(offsetof(ALiquidRibbonManager, FlashIntensitiesNiagaraParamName) == 0x0002F4, "Member 'ALiquidRibbonManager::FlashIntensitiesNiagaraParamName' has a wrong offset!");
static_assert(offsetof(ALiquidRibbonManager, RibbonSizesNiagaraParamName) == 0x0002F8, "Member 'ALiquidRibbonManager::RibbonSizesNiagaraParamName' has a wrong offset!");
static_assert(offsetof(ALiquidRibbonManager, CalculateBaseCurlOffset_MaxSegmentLength) == 0x000300, "Member 'ALiquidRibbonManager::CalculateBaseCurlOffset_MaxSegmentLength' has a wrong offset!");
static_assert(offsetof(ALiquidRibbonManager, CalculateBaseCurlOffset_MaxTimeSinceDetachment) == 0x000328, "Member 'ALiquidRibbonManager::CalculateBaseCurlOffset_MaxTimeSinceDetachment' has a wrong offset!");
static_assert(offsetof(ALiquidRibbonManager, CalculateBaseCurlOffset_TowardPerpendicularMult) == 0x000350, "Member 'ALiquidRibbonManager::CalculateBaseCurlOffset_TowardPerpendicularMult' has a wrong offset!");
static_assert(offsetof(ALiquidRibbonManager, CalculateBaseCurlOffset_TowardEndMult) == 0x000378, "Member 'ALiquidRibbonManager::CalculateBaseCurlOffset_TowardEndMult' has a wrong offset!");
static_assert(offsetof(ALiquidRibbonManager, CalculateBaseCurlOffset_TowardRandomMult) == 0x0003A0, "Member 'ALiquidRibbonManager::CalculateBaseCurlOffset_TowardRandomMult' has a wrong offset!");
static_assert(offsetof(ALiquidRibbonManager, TimeSinceDetachmentCurlCurve) == 0x0003C8, "Member 'ALiquidRibbonManager::TimeSinceDetachmentCurlCurve' has a wrong offset!");
static_assert(offsetof(ALiquidRibbonManager, TimeSinceDetachmentCurlCurve_MaxTime) == 0x0003D0, "Member 'ALiquidRibbonManager::TimeSinceDetachmentCurlCurve_MaxTime' has a wrong offset!");
static_assert(offsetof(ALiquidRibbonManager, CurlingMaxClosenessToBreakage) == 0x0003F8, "Member 'ALiquidRibbonManager::CurlingMaxClosenessToBreakage' has a wrong offset!");
static_assert(offsetof(ALiquidRibbonManager, SegmentLengths) == 0x000400, "Member 'ALiquidRibbonManager::SegmentLengths' has a wrong offset!");
static_assert(offsetof(ALiquidRibbonManager, Detachments) == 0x000410, "Member 'ALiquidRibbonManager::Detachments' has a wrong offset!");
static_assert(offsetof(ALiquidRibbonManager, SplineSegments) == 0x000420, "Member 'ALiquidRibbonManager::SplineSegments' has a wrong offset!");
static_assert(offsetof(ALiquidRibbonManager, Projectiles_Native) == 0x000430, "Member 'ALiquidRibbonManager::Projectiles_Native' has a wrong offset!");

}
