#pragma once

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"

namespace SDK
{

enum class ELiquidRibbonDetachmentReason : uint8
{
	NotDetached                              = 0,
	ByDistance                               = 1,
	ByAngle                                  = 2,
	ELiquidRibbonDetachmentReason_MAX        = 3,
};

struct FLiquidRibbonSplineSegment final
{
public:
	struct FVector                                A;
	struct FVector                                B;
	struct FVector                                C;
	struct FVector                                D;
	float                                         DirectLength;
	bool                                          bHasDetachment;
	uint8                                         Pad_65[0x3];
	TArray<struct FVector>                        PointPositions;
};
static_assert(alignof(FLiquidRibbonSplineSegment) == 0x000008, "Wrong alignment on FLiquidRibbonSplineSegment");
static_assert(sizeof(FLiquidRibbonSplineSegment) == 0x000078, "Wrong size on FLiquidRibbonSplineSegment");
static_assert(offsetof(FLiquidRibbonSplineSegment, A) == 0x000000, "Member 'FLiquidRibbonSplineSegment::A' has a wrong offset!");
static_assert(offsetof(FLiquidRibbonSplineSegment, B) == 0x000018, "Member 'FLiquidRibbonSplineSegment::B' has a wrong offset!");
static_assert(offsetof(FLiquidRibbonSplineSegment, C) == 0x000030, "Member 'FLiquidRibbonSplineSegment::C' has a wrong offset!");
static_assert(offsetof(FLiquidRibbonSplineSegment, D) == 0x000048, "Member 'FLiquidRibbonSplineSegment::D' has a wrong offset!");
static_assert(offsetof(FLiquidRibbonSplineSegment, DirectLength) == 0x000060, "Member 'FLiquidRibbonSplineSegment::DirectLength' has a wrong offset!");
static_assert(offsetof(FLiquidRibbonSplineSegment, bHasDetachment) == 0x000064, "Member 'FLiquidRibbonSplineSegment::bHasDetachment' has a wrong offset!");
static_assert(offsetof(FLiquidRibbonSplineSegment, PointPositions) == 0x000068, "Member 'FLiquidRibbonSplineSegment::PointPositions' has a wrong offset!");

struct FLiquidRibbonSplineDetachment final
{
public:
	int32                                         FirstRibbonID;
	int32                                         SecondRibbonID;
	float                                         TimeDetached;
	uint8                                         Pad_C[0x4];
	struct FLiquidRibbonSplineSegment             Segment;
	struct FVector                                SegmentStartPoint;
	struct FVector                                SegmentEndPoint;
};
static_assert(alignof(FLiquidRibbonSplineDetachment) == 0x000008, "Wrong alignment on FLiquidRibbonSplineDetachment");
static_assert(sizeof(FLiquidRibbonSplineDetachment) == 0x0000B8, "Wrong size on FLiquidRibbonSplineDetachment");
static_assert(offsetof(FLiquidRibbonSplineDetachment, FirstRibbonID) == 0x000000, "Member 'FLiquidRibbonSplineDetachment::FirstRibbonID' has a wrong offset!");
static_assert(offsetof(FLiquidRibbonSplineDetachment, SecondRibbonID) == 0x000004, "Member 'FLiquidRibbonSplineDetachment::SecondRibbonID' has a wrong offset!");
static_assert(offsetof(FLiquidRibbonSplineDetachment, TimeDetached) == 0x000008, "Member 'FLiquidRibbonSplineDetachment::TimeDetached' has a wrong offset!");
static_assert(offsetof(FLiquidRibbonSplineDetachment, Segment) == 0x000010, "Member 'FLiquidRibbonSplineDetachment::Segment' has a wrong offset!");
static_assert(offsetof(FLiquidRibbonSplineDetachment, SegmentStartPoint) == 0x000088, "Member 'FLiquidRibbonSplineDetachment::SegmentStartPoint' has a wrong offset!");
static_assert(offsetof(FLiquidRibbonSplineDetachment, SegmentEndPoint) == 0x0000A0, "Member 'FLiquidRibbonSplineDetachment::SegmentEndPoint' has a wrong offset!");

}
