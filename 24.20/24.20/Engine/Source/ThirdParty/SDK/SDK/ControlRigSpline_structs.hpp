#pragma once

#include "Basic.hpp"

#include "ControlRig_structs.hpp"
#include "CoreUObject_structs.hpp"

namespace SDK
{

enum class ESplineType : uint8
{
	BSpline                                  = 0,
	Hermite                                  = 1,
	Max                                      = 2,
};

struct alignas(0x08) FControlRigSplineImpl final
{
public:
	uint8                                         Pad_0[0x58];
};
static_assert(alignof(FControlRigSplineImpl) == 0x000008, "Wrong alignment on FControlRigSplineImpl");
static_assert(sizeof(FControlRigSplineImpl) == 0x000058, "Wrong size on FControlRigSplineImpl");

struct alignas(0x08) FControlRigSpline final
{
public:
	uint8                                         Pad_0[0x18];
};
static_assert(alignof(FControlRigSpline) == 0x000008, "Wrong alignment on FControlRigSpline");
static_assert(sizeof(FControlRigSpline) == 0x000018, "Wrong size on FControlRigSpline");

struct FRigUnit_ControlRigSplineBase : public FRigUnit
{
};
static_assert(alignof(FRigUnit_ControlRigSplineBase) == 0x000008, "Wrong alignment on FRigUnit_ControlRigSplineBase");
static_assert(sizeof(FRigUnit_ControlRigSplineBase) == 0x000008, "Wrong size on FRigUnit_ControlRigSplineBase");

struct FRigUnit_ControlRigSplineFromPoints final : public FRigUnit_ControlRigSplineBase
{
public:
	TArray<struct FVector>                        Points;
	ESplineType                                   SplineMode;
	uint8                                         Pad_19[0x3];
	int32                                         SamplesPerSegment;
	float                                         Compression;
	float                                         Stretch;
	struct FControlRigSpline                      Spline;
};
static_assert(alignof(FRigUnit_ControlRigSplineFromPoints) == 0x000008, "Wrong alignment on FRigUnit_ControlRigSplineFromPoints");
static_assert(sizeof(FRigUnit_ControlRigSplineFromPoints) == 0x000040, "Wrong size on FRigUnit_ControlRigSplineFromPoints");
static_assert(offsetof(FRigUnit_ControlRigSplineFromPoints, Points) == 0x000008, "Member 'FRigUnit_ControlRigSplineFromPoints::Points' has a wrong offset!");
static_assert(offsetof(FRigUnit_ControlRigSplineFromPoints, SplineMode) == 0x000018, "Member 'FRigUnit_ControlRigSplineFromPoints::SplineMode' has a wrong offset!");
static_assert(offsetof(FRigUnit_ControlRigSplineFromPoints, SamplesPerSegment) == 0x00001C, "Member 'FRigUnit_ControlRigSplineFromPoints::SamplesPerSegment' has a wrong offset!");
static_assert(offsetof(FRigUnit_ControlRigSplineFromPoints, Compression) == 0x000020, "Member 'FRigUnit_ControlRigSplineFromPoints::Compression' has a wrong offset!");
static_assert(offsetof(FRigUnit_ControlRigSplineFromPoints, Stretch) == 0x000024, "Member 'FRigUnit_ControlRigSplineFromPoints::Stretch' has a wrong offset!");
static_assert(offsetof(FRigUnit_ControlRigSplineFromPoints, Spline) == 0x000028, "Member 'FRigUnit_ControlRigSplineFromPoints::Spline' has a wrong offset!");

struct FRigUnit_SetSplinePoints final : public FRigUnitMutable
{
public:
	TArray<struct FVector>                        Points;
	struct FControlRigSpline                      Spline;
};
static_assert(alignof(FRigUnit_SetSplinePoints) == 0x000008, "Wrong alignment on FRigUnit_SetSplinePoints");
static_assert(sizeof(FRigUnit_SetSplinePoints) == 0x000060, "Wrong size on FRigUnit_SetSplinePoints");
static_assert(offsetof(FRigUnit_SetSplinePoints, Points) == 0x000038, "Member 'FRigUnit_SetSplinePoints::Points' has a wrong offset!");
static_assert(offsetof(FRigUnit_SetSplinePoints, Spline) == 0x000048, "Member 'FRigUnit_SetSplinePoints::Spline' has a wrong offset!");

struct FRigUnit_PositionFromControlRigSpline final : public FRigUnit_ControlRigSplineBase
{
public:
	struct FControlRigSpline                      Spline;
	float                                         U;
	uint8                                         Pad_24[0x4];
	struct FVector                                Position;
};
static_assert(alignof(FRigUnit_PositionFromControlRigSpline) == 0x000008, "Wrong alignment on FRigUnit_PositionFromControlRigSpline");
static_assert(sizeof(FRigUnit_PositionFromControlRigSpline) == 0x000040, "Wrong size on FRigUnit_PositionFromControlRigSpline");
static_assert(offsetof(FRigUnit_PositionFromControlRigSpline, Spline) == 0x000008, "Member 'FRigUnit_PositionFromControlRigSpline::Spline' has a wrong offset!");
static_assert(offsetof(FRigUnit_PositionFromControlRigSpline, U) == 0x000020, "Member 'FRigUnit_PositionFromControlRigSpline::U' has a wrong offset!");
static_assert(offsetof(FRigUnit_PositionFromControlRigSpline, Position) == 0x000028, "Member 'FRigUnit_PositionFromControlRigSpline::Position' has a wrong offset!");

struct FRigUnit_TransformFromControlRigSpline final : public FRigUnit_ControlRigSplineBase
{
public:
	struct FControlRigSpline                      Spline;
	struct FVector                                UpVector;
	float                                         Roll;
	float                                         U;
	struct FTransform                             Transform;
};
static_assert(alignof(FRigUnit_TransformFromControlRigSpline) == 0x000010, "Wrong alignment on FRigUnit_TransformFromControlRigSpline");
static_assert(sizeof(FRigUnit_TransformFromControlRigSpline) == 0x0000A0, "Wrong size on FRigUnit_TransformFromControlRigSpline");
static_assert(offsetof(FRigUnit_TransformFromControlRigSpline, Spline) == 0x000008, "Member 'FRigUnit_TransformFromControlRigSpline::Spline' has a wrong offset!");
static_assert(offsetof(FRigUnit_TransformFromControlRigSpline, UpVector) == 0x000020, "Member 'FRigUnit_TransformFromControlRigSpline::UpVector' has a wrong offset!");
static_assert(offsetof(FRigUnit_TransformFromControlRigSpline, Roll) == 0x000038, "Member 'FRigUnit_TransformFromControlRigSpline::Roll' has a wrong offset!");
static_assert(offsetof(FRigUnit_TransformFromControlRigSpline, U) == 0x00003C, "Member 'FRigUnit_TransformFromControlRigSpline::U' has a wrong offset!");
static_assert(offsetof(FRigUnit_TransformFromControlRigSpline, Transform) == 0x000040, "Member 'FRigUnit_TransformFromControlRigSpline::Transform' has a wrong offset!");

struct FRigUnit_TangentFromControlRigSpline final : public FRigUnit_ControlRigSplineBase
{
public:
	struct FControlRigSpline                      Spline;
	float                                         U;
	uint8                                         Pad_24[0x4];
	struct FVector                                Tangent;
};
static_assert(alignof(FRigUnit_TangentFromControlRigSpline) == 0x000008, "Wrong alignment on FRigUnit_TangentFromControlRigSpline");
static_assert(sizeof(FRigUnit_TangentFromControlRigSpline) == 0x000040, "Wrong size on FRigUnit_TangentFromControlRigSpline");
static_assert(offsetof(FRigUnit_TangentFromControlRigSpline, Spline) == 0x000008, "Member 'FRigUnit_TangentFromControlRigSpline::Spline' has a wrong offset!");
static_assert(offsetof(FRigUnit_TangentFromControlRigSpline, U) == 0x000020, "Member 'FRigUnit_TangentFromControlRigSpline::U' has a wrong offset!");
static_assert(offsetof(FRigUnit_TangentFromControlRigSpline, Tangent) == 0x000028, "Member 'FRigUnit_TangentFromControlRigSpline::Tangent' has a wrong offset!");

struct FRigUnit_DrawControlRigSpline final : public FRigUnitMutable
{
public:
	struct FControlRigSpline                      Spline;
	struct FLinearColor                           Color;
	float                                         Thickness;
	int32                                         Detail;
};
static_assert(alignof(FRigUnit_DrawControlRigSpline) == 0x000008, "Wrong alignment on FRigUnit_DrawControlRigSpline");
static_assert(sizeof(FRigUnit_DrawControlRigSpline) == 0x000068, "Wrong size on FRigUnit_DrawControlRigSpline");
static_assert(offsetof(FRigUnit_DrawControlRigSpline, Spline) == 0x000038, "Member 'FRigUnit_DrawControlRigSpline::Spline' has a wrong offset!");
static_assert(offsetof(FRigUnit_DrawControlRigSpline, Color) == 0x000050, "Member 'FRigUnit_DrawControlRigSpline::Color' has a wrong offset!");
static_assert(offsetof(FRigUnit_DrawControlRigSpline, Thickness) == 0x000060, "Member 'FRigUnit_DrawControlRigSpline::Thickness' has a wrong offset!");
static_assert(offsetof(FRigUnit_DrawControlRigSpline, Detail) == 0x000064, "Member 'FRigUnit_DrawControlRigSpline::Detail' has a wrong offset!");

struct FRigUnit_GetLengthControlRigSpline final : public FRigUnit
{
public:
	struct FControlRigSpline                      Spline;
	float                                         Length;
	uint8                                         Pad_24[0x4];
};
static_assert(alignof(FRigUnit_GetLengthControlRigSpline) == 0x000008, "Wrong alignment on FRigUnit_GetLengthControlRigSpline");
static_assert(sizeof(FRigUnit_GetLengthControlRigSpline) == 0x000028, "Wrong size on FRigUnit_GetLengthControlRigSpline");
static_assert(offsetof(FRigUnit_GetLengthControlRigSpline, Spline) == 0x000008, "Member 'FRigUnit_GetLengthControlRigSpline::Spline' has a wrong offset!");
static_assert(offsetof(FRigUnit_GetLengthControlRigSpline, Length) == 0x000020, "Member 'FRigUnit_GetLengthControlRigSpline::Length' has a wrong offset!");

struct FRigUnit_FitChainToSplineCurve final : public FRigUnit_HighlevelBaseMutable
{
public:
	struct FRigElementKeyCollection               Items;
	struct FControlRigSpline                      Spline;
	EControlRigCurveAlignment                     Alignment;
	uint8                                         Pad_61[0x3];
	float                                         Minimum;
	float                                         Maximum;
	int32                                         SamplingPrecision;
	struct FVector                                PrimaryAxis;
	struct FVector                                SecondaryAxis;
	struct FVector                                PoleVectorPosition;
	TArray<struct FRigUnit_FitChainToCurve_Rotation> Rotations;
	EControlRigAnimEasingType                     RotationEaseType;
	uint8                                         Pad_C9[0x3];
	float                                         Weight;
	bool                                          bPropagateToChildren;
	uint8                                         Pad_D1[0xF];
	struct FRigUnit_FitChainToCurve_DebugSettings DebugSettings;
	struct FRigUnit_FitChainToCurve_WorkData      WorkData;
	uint8                                         Pad_208[0x8];
};
static_assert(alignof(FRigUnit_FitChainToSplineCurve) == 0x000010, "Wrong alignment on FRigUnit_FitChainToSplineCurve");
static_assert(sizeof(FRigUnit_FitChainToSplineCurve) == 0x000210, "Wrong size on FRigUnit_FitChainToSplineCurve");
static_assert(offsetof(FRigUnit_FitChainToSplineCurve, Items) == 0x000038, "Member 'FRigUnit_FitChainToSplineCurve::Items' has a wrong offset!");
static_assert(offsetof(FRigUnit_FitChainToSplineCurve, Spline) == 0x000048, "Member 'FRigUnit_FitChainToSplineCurve::Spline' has a wrong offset!");
static_assert(offsetof(FRigUnit_FitChainToSplineCurve, Alignment) == 0x000060, "Member 'FRigUnit_FitChainToSplineCurve::Alignment' has a wrong offset!");
static_assert(offsetof(FRigUnit_FitChainToSplineCurve, Minimum) == 0x000064, "Member 'FRigUnit_FitChainToSplineCurve::Minimum' has a wrong offset!");
static_assert(offsetof(FRigUnit_FitChainToSplineCurve, Maximum) == 0x000068, "Member 'FRigUnit_FitChainToSplineCurve::Maximum' has a wrong offset!");
static_assert(offsetof(FRigUnit_FitChainToSplineCurve, SamplingPrecision) == 0x00006C, "Member 'FRigUnit_FitChainToSplineCurve::SamplingPrecision' has a wrong offset!");
static_assert(offsetof(FRigUnit_FitChainToSplineCurve, PrimaryAxis) == 0x000070, "Member 'FRigUnit_FitChainToSplineCurve::PrimaryAxis' has a wrong offset!");
static_assert(offsetof(FRigUnit_FitChainToSplineCurve, SecondaryAxis) == 0x000088, "Member 'FRigUnit_FitChainToSplineCurve::SecondaryAxis' has a wrong offset!");
static_assert(offsetof(FRigUnit_FitChainToSplineCurve, PoleVectorPosition) == 0x0000A0, "Member 'FRigUnit_FitChainToSplineCurve::PoleVectorPosition' has a wrong offset!");
static_assert(offsetof(FRigUnit_FitChainToSplineCurve, Rotations) == 0x0000B8, "Member 'FRigUnit_FitChainToSplineCurve::Rotations' has a wrong offset!");
static_assert(offsetof(FRigUnit_FitChainToSplineCurve, RotationEaseType) == 0x0000C8, "Member 'FRigUnit_FitChainToSplineCurve::RotationEaseType' has a wrong offset!");
static_assert(offsetof(FRigUnit_FitChainToSplineCurve, Weight) == 0x0000CC, "Member 'FRigUnit_FitChainToSplineCurve::Weight' has a wrong offset!");
static_assert(offsetof(FRigUnit_FitChainToSplineCurve, bPropagateToChildren) == 0x0000D0, "Member 'FRigUnit_FitChainToSplineCurve::bPropagateToChildren' has a wrong offset!");
static_assert(offsetof(FRigUnit_FitChainToSplineCurve, DebugSettings) == 0x0000E0, "Member 'FRigUnit_FitChainToSplineCurve::DebugSettings' has a wrong offset!");
static_assert(offsetof(FRigUnit_FitChainToSplineCurve, WorkData) == 0x000170, "Member 'FRigUnit_FitChainToSplineCurve::WorkData' has a wrong offset!");

struct FRigUnit_FitChainToSplineCurveItemArray final : public FRigUnit_HighlevelBaseMutable
{
public:
	TArray<struct FRigElementKey>                 Items;
	struct FControlRigSpline                      Spline;
	EControlRigCurveAlignment                     Alignment;
	uint8                                         Pad_61[0x3];
	float                                         Minimum;
	float                                         Maximum;
	int32                                         SamplingPrecision;
	struct FVector                                PrimaryAxis;
	struct FVector                                SecondaryAxis;
	struct FVector                                PoleVectorPosition;
	TArray<struct FRigUnit_FitChainToCurve_Rotation> Rotations;
	EControlRigAnimEasingType                     RotationEaseType;
	uint8                                         Pad_C9[0x3];
	float                                         Weight;
	bool                                          bPropagateToChildren;
	uint8                                         Pad_D1[0xF];
	struct FRigUnit_FitChainToCurve_DebugSettings DebugSettings;
	struct FRigUnit_FitChainToCurve_WorkData      WorkData;
	uint8                                         Pad_208[0x8];
};
static_assert(alignof(FRigUnit_FitChainToSplineCurveItemArray) == 0x000010, "Wrong alignment on FRigUnit_FitChainToSplineCurveItemArray");
static_assert(sizeof(FRigUnit_FitChainToSplineCurveItemArray) == 0x000210, "Wrong size on FRigUnit_FitChainToSplineCurveItemArray");
static_assert(offsetof(FRigUnit_FitChainToSplineCurveItemArray, Items) == 0x000038, "Member 'FRigUnit_FitChainToSplineCurveItemArray::Items' has a wrong offset!");
static_assert(offsetof(FRigUnit_FitChainToSplineCurveItemArray, Spline) == 0x000048, "Member 'FRigUnit_FitChainToSplineCurveItemArray::Spline' has a wrong offset!");
static_assert(offsetof(FRigUnit_FitChainToSplineCurveItemArray, Alignment) == 0x000060, "Member 'FRigUnit_FitChainToSplineCurveItemArray::Alignment' has a wrong offset!");
static_assert(offsetof(FRigUnit_FitChainToSplineCurveItemArray, Minimum) == 0x000064, "Member 'FRigUnit_FitChainToSplineCurveItemArray::Minimum' has a wrong offset!");
static_assert(offsetof(FRigUnit_FitChainToSplineCurveItemArray, Maximum) == 0x000068, "Member 'FRigUnit_FitChainToSplineCurveItemArray::Maximum' has a wrong offset!");
static_assert(offsetof(FRigUnit_FitChainToSplineCurveItemArray, SamplingPrecision) == 0x00006C, "Member 'FRigUnit_FitChainToSplineCurveItemArray::SamplingPrecision' has a wrong offset!");
static_assert(offsetof(FRigUnit_FitChainToSplineCurveItemArray, PrimaryAxis) == 0x000070, "Member 'FRigUnit_FitChainToSplineCurveItemArray::PrimaryAxis' has a wrong offset!");
static_assert(offsetof(FRigUnit_FitChainToSplineCurveItemArray, SecondaryAxis) == 0x000088, "Member 'FRigUnit_FitChainToSplineCurveItemArray::SecondaryAxis' has a wrong offset!");
static_assert(offsetof(FRigUnit_FitChainToSplineCurveItemArray, PoleVectorPosition) == 0x0000A0, "Member 'FRigUnit_FitChainToSplineCurveItemArray::PoleVectorPosition' has a wrong offset!");
static_assert(offsetof(FRigUnit_FitChainToSplineCurveItemArray, Rotations) == 0x0000B8, "Member 'FRigUnit_FitChainToSplineCurveItemArray::Rotations' has a wrong offset!");
static_assert(offsetof(FRigUnit_FitChainToSplineCurveItemArray, RotationEaseType) == 0x0000C8, "Member 'FRigUnit_FitChainToSplineCurveItemArray::RotationEaseType' has a wrong offset!");
static_assert(offsetof(FRigUnit_FitChainToSplineCurveItemArray, Weight) == 0x0000CC, "Member 'FRigUnit_FitChainToSplineCurveItemArray::Weight' has a wrong offset!");
static_assert(offsetof(FRigUnit_FitChainToSplineCurveItemArray, bPropagateToChildren) == 0x0000D0, "Member 'FRigUnit_FitChainToSplineCurveItemArray::bPropagateToChildren' has a wrong offset!");
static_assert(offsetof(FRigUnit_FitChainToSplineCurveItemArray, DebugSettings) == 0x0000E0, "Member 'FRigUnit_FitChainToSplineCurveItemArray::DebugSettings' has a wrong offset!");
static_assert(offsetof(FRigUnit_FitChainToSplineCurveItemArray, WorkData) == 0x000170, "Member 'FRigUnit_FitChainToSplineCurveItemArray::WorkData' has a wrong offset!");

struct FRigUnit_FitSplineCurveToChain final : public FRigUnit_HighlevelBaseMutable
{
public:
	struct FRigElementKeyCollection               Items;
	struct FControlRigSpline                      Spline;
};
static_assert(alignof(FRigUnit_FitSplineCurveToChain) == 0x000008, "Wrong alignment on FRigUnit_FitSplineCurveToChain");
static_assert(sizeof(FRigUnit_FitSplineCurveToChain) == 0x000060, "Wrong size on FRigUnit_FitSplineCurveToChain");
static_assert(offsetof(FRigUnit_FitSplineCurveToChain, Items) == 0x000038, "Member 'FRigUnit_FitSplineCurveToChain::Items' has a wrong offset!");
static_assert(offsetof(FRigUnit_FitSplineCurveToChain, Spline) == 0x000048, "Member 'FRigUnit_FitSplineCurveToChain::Spline' has a wrong offset!");

struct FRigUnit_FitSplineCurveToChainItemArray final : public FRigUnit_HighlevelBaseMutable
{
public:
	TArray<struct FRigElementKey>                 Items;
	struct FControlRigSpline                      Spline;
};
static_assert(alignof(FRigUnit_FitSplineCurveToChainItemArray) == 0x000008, "Wrong alignment on FRigUnit_FitSplineCurveToChainItemArray");
static_assert(sizeof(FRigUnit_FitSplineCurveToChainItemArray) == 0x000060, "Wrong size on FRigUnit_FitSplineCurveToChainItemArray");
static_assert(offsetof(FRigUnit_FitSplineCurveToChainItemArray, Items) == 0x000038, "Member 'FRigUnit_FitSplineCurveToChainItemArray::Items' has a wrong offset!");
static_assert(offsetof(FRigUnit_FitSplineCurveToChainItemArray, Spline) == 0x000048, "Member 'FRigUnit_FitSplineCurveToChainItemArray::Spline' has a wrong offset!");

struct FRigUnit_ClosestParameterFromControlRigSpline final : public FRigUnit_ControlRigSplineBase
{
public:
	struct FControlRigSpline                      Spline;
	struct FVector                                Position;
	float                                         U;
	uint8                                         Pad_3C[0x4];
};
static_assert(alignof(FRigUnit_ClosestParameterFromControlRigSpline) == 0x000008, "Wrong alignment on FRigUnit_ClosestParameterFromControlRigSpline");
static_assert(sizeof(FRigUnit_ClosestParameterFromControlRigSpline) == 0x000040, "Wrong size on FRigUnit_ClosestParameterFromControlRigSpline");
static_assert(offsetof(FRigUnit_ClosestParameterFromControlRigSpline, Spline) == 0x000008, "Member 'FRigUnit_ClosestParameterFromControlRigSpline::Spline' has a wrong offset!");
static_assert(offsetof(FRigUnit_ClosestParameterFromControlRigSpline, Position) == 0x000020, "Member 'FRigUnit_ClosestParameterFromControlRigSpline::Position' has a wrong offset!");
static_assert(offsetof(FRigUnit_ClosestParameterFromControlRigSpline, U) == 0x000038, "Member 'FRigUnit_ClosestParameterFromControlRigSpline::U' has a wrong offset!");

struct FRigUnit_ParameterAtPercentage final : public FRigUnit_ControlRigSplineBase
{
public:
	struct FControlRigSpline                      Spline;
	float                                         Percentage;
	float                                         U;
};
static_assert(alignof(FRigUnit_ParameterAtPercentage) == 0x000008, "Wrong alignment on FRigUnit_ParameterAtPercentage");
static_assert(sizeof(FRigUnit_ParameterAtPercentage) == 0x000028, "Wrong size on FRigUnit_ParameterAtPercentage");
static_assert(offsetof(FRigUnit_ParameterAtPercentage, Spline) == 0x000008, "Member 'FRigUnit_ParameterAtPercentage::Spline' has a wrong offset!");
static_assert(offsetof(FRigUnit_ParameterAtPercentage, Percentage) == 0x000020, "Member 'FRigUnit_ParameterAtPercentage::Percentage' has a wrong offset!");
static_assert(offsetof(FRigUnit_ParameterAtPercentage, U) == 0x000024, "Member 'FRigUnit_ParameterAtPercentage::U' has a wrong offset!");

}
