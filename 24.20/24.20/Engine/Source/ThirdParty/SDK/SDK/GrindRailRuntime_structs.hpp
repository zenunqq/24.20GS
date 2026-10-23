#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteGame_structs.hpp"

namespace SDK
{

enum class EGrindRailBoosterMode : uint8
{
	SpeedUp                                  = 0,
	SlowDown                                 = 1,
	NoEffect                                 = 2,
	EGrindRailBoosterMode_MAX                = 3,
};

struct FGrindRailMeshInfo final
{
public:
	class USplineMeshComponent*                   SplineMeshComponent;
	int32                                         StartPointIndex;
	int32                                         EndPointIndex;
	float                                         StartDistance;
	float                                         EndDistance;
};
static_assert(alignof(FGrindRailMeshInfo) == 0x000008, "Wrong alignment on FGrindRailMeshInfo");
static_assert(sizeof(FGrindRailMeshInfo) == 0x000018, "Wrong size on FGrindRailMeshInfo");
static_assert(offsetof(FGrindRailMeshInfo, SplineMeshComponent) == 0x000000, "Member 'FGrindRailMeshInfo::SplineMeshComponent' has a wrong offset!");
static_assert(offsetof(FGrindRailMeshInfo, StartPointIndex) == 0x000008, "Member 'FGrindRailMeshInfo::StartPointIndex' has a wrong offset!");
static_assert(offsetof(FGrindRailMeshInfo, EndPointIndex) == 0x00000C, "Member 'FGrindRailMeshInfo::EndPointIndex' has a wrong offset!");
static_assert(offsetof(FGrindRailMeshInfo, StartDistance) == 0x000010, "Member 'FGrindRailMeshInfo::StartDistance' has a wrong offset!");
static_assert(offsetof(FGrindRailMeshInfo, EndDistance) == 0x000014, "Member 'FGrindRailMeshInfo::EndDistance' has a wrong offset!");

struct FFortAnimInput_GrindRail final
{
public:
	uint8                                         bAimFWD : 1;
	uint8                                         bAimBWD : 1;
	uint8                                         bAimLFT : 1;
	uint8                                         bAimRGT : 1;
	uint8                                         Pad_1[0x3];
	float                                         AimFWDDeltaAngleDegrees;
	float                                         AimBWDDeltaAngleDegrees;
	float                                         AimLFTDeltaAngleDegrees;
	float                                         AimRGTDeltaAngleDegrees;
	float                                         PawnToSplineDeltaYawAngleDegrees;
};
static_assert(alignof(FFortAnimInput_GrindRail) == 0x000004, "Wrong alignment on FFortAnimInput_GrindRail");
static_assert(sizeof(FFortAnimInput_GrindRail) == 0x000018, "Wrong size on FFortAnimInput_GrindRail");
static_assert(offsetof(FFortAnimInput_GrindRail, AimFWDDeltaAngleDegrees) == 0x000004, "Member 'FFortAnimInput_GrindRail::AimFWDDeltaAngleDegrees' has a wrong offset!");
static_assert(offsetof(FFortAnimInput_GrindRail, AimBWDDeltaAngleDegrees) == 0x000008, "Member 'FFortAnimInput_GrindRail::AimBWDDeltaAngleDegrees' has a wrong offset!");
static_assert(offsetof(FFortAnimInput_GrindRail, AimLFTDeltaAngleDegrees) == 0x00000C, "Member 'FFortAnimInput_GrindRail::AimLFTDeltaAngleDegrees' has a wrong offset!");
static_assert(offsetof(FFortAnimInput_GrindRail, AimRGTDeltaAngleDegrees) == 0x000010, "Member 'FFortAnimInput_GrindRail::AimRGTDeltaAngleDegrees' has a wrong offset!");
static_assert(offsetof(FFortAnimInput_GrindRail, PawnToSplineDeltaYawAngleDegrees) == 0x000014, "Member 'FFortAnimInput_GrindRail::PawnToSplineDeltaYawAngleDegrees' has a wrong offset!");

struct FFortAnimNode_GrindRailSlopeWarping final : public FFortAnimNode_SlopeWarping
{
public:
	float                                         BaseSplineRadius;
	uint8                                         bAbsentCurveMeansFootDown : 1;
	uint8                                         Pad_2ED[0x3];
	class FName                                   LFootOnGroundCurveName;
	uint8                                         bLeftCurveHighMeansFootDown : 1;
	uint8                                         Pad_2F5[0x3];
	class FName                                   RFootOnGroundCurveName;
	uint8                                         bRightCurveHighMeansFootDown : 1;
	uint8                                         Pad_2FD[0x3];
	struct FBoneReference                         LeftFootFKBone;
	uint8                                         Pad_30C[0x34];
};
static_assert(alignof(FFortAnimNode_GrindRailSlopeWarping) == 0x000008, "Wrong alignment on FFortAnimNode_GrindRailSlopeWarping");
static_assert(sizeof(FFortAnimNode_GrindRailSlopeWarping) == 0x000340, "Wrong size on FFortAnimNode_GrindRailSlopeWarping");
static_assert(offsetof(FFortAnimNode_GrindRailSlopeWarping, BaseSplineRadius) == 0x0002E8, "Member 'FFortAnimNode_GrindRailSlopeWarping::BaseSplineRadius' has a wrong offset!");
static_assert(offsetof(FFortAnimNode_GrindRailSlopeWarping, LFootOnGroundCurveName) == 0x0002F0, "Member 'FFortAnimNode_GrindRailSlopeWarping::LFootOnGroundCurveName' has a wrong offset!");
static_assert(offsetof(FFortAnimNode_GrindRailSlopeWarping, RFootOnGroundCurveName) == 0x0002F8, "Member 'FFortAnimNode_GrindRailSlopeWarping::RFootOnGroundCurveName' has a wrong offset!");
static_assert(offsetof(FFortAnimNode_GrindRailSlopeWarping, LeftFootFKBone) == 0x000300, "Member 'FFortAnimNode_GrindRailSlopeWarping::LeftFootFKBone' has a wrong offset!");

struct FGrindRailBoosterInfo final
{
public:
	float                                         MinDistanceAlongSpline;
	float                                         MaxDistanceAlongSpline;
	EGrindRailBoosterMode                         PositiveMode;
	EGrindRailBoosterMode                         NegativeMode;
	uint8                                         Pad_A[0x2];
};
static_assert(alignof(FGrindRailBoosterInfo) == 0x000004, "Wrong alignment on FGrindRailBoosterInfo");
static_assert(sizeof(FGrindRailBoosterInfo) == 0x00000C, "Wrong size on FGrindRailBoosterInfo");
static_assert(offsetof(FGrindRailBoosterInfo, MinDistanceAlongSpline) == 0x000000, "Member 'FGrindRailBoosterInfo::MinDistanceAlongSpline' has a wrong offset!");
static_assert(offsetof(FGrindRailBoosterInfo, MaxDistanceAlongSpline) == 0x000004, "Member 'FGrindRailBoosterInfo::MaxDistanceAlongSpline' has a wrong offset!");
static_assert(offsetof(FGrindRailBoosterInfo, PositiveMode) == 0x000008, "Member 'FGrindRailBoosterInfo::PositiveMode' has a wrong offset!");
static_assert(offsetof(FGrindRailBoosterInfo, NegativeMode) == 0x000009, "Member 'FGrindRailBoosterInfo::NegativeMode' has a wrong offset!");

struct FGrindRailStatus final
{
public:
	TWeakObjectPtr<class AFortGrindRail>          GrindingRail;
	float                                         CurrentSpeedAlongSpline;
	float                                         CurrentDistanceAlongSpline;
};
static_assert(alignof(FGrindRailStatus) == 0x000004, "Wrong alignment on FGrindRailStatus");
static_assert(sizeof(FGrindRailStatus) == 0x000010, "Wrong size on FGrindRailStatus");
static_assert(offsetof(FGrindRailStatus, GrindingRail) == 0x000000, "Member 'FGrindRailStatus::GrindingRail' has a wrong offset!");
static_assert(offsetof(FGrindRailStatus, CurrentSpeedAlongSpline) == 0x000008, "Member 'FGrindRailStatus::CurrentSpeedAlongSpline' has a wrong offset!");
static_assert(offsetof(FGrindRailStatus, CurrentDistanceAlongSpline) == 0x00000C, "Member 'FGrindRailStatus::CurrentDistanceAlongSpline' has a wrong offset!");

}
