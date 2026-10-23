#pragma once

#include "Basic.hpp"

namespace SDK
{

enum class EMLDeformerVizMode : uint8
{
	TrainingData                             = 0,
	TestData                                 = 1,
	EMLDeformerVizMode_MAX                   = 2,
};

enum class EMLDeformerHeatMapMode : uint8
{
	Activations                              = 0,
	GroundTruth                              = 1,
	EMLDeformerHeatMapMode_MAX               = 2,
};

enum class EMLDeformerMaskChannel : uint8
{
	Disabled                                 = 0,
	VertexColorRed                           = 1,
	VertexColorGreen                         = 2,
	VertexColorBlue                          = 3,
	VertexColorAlpha                         = 4,
	EMLDeformerMaskChannel_MAX               = 5,
};

struct FMLDeformerCurveReference final
{
public:
	class FName                                   CurveName;
};
static_assert(alignof(FMLDeformerCurveReference) == 0x000004, "Wrong alignment on FMLDeformerCurveReference");
static_assert(sizeof(FMLDeformerCurveReference) == 0x000004, "Wrong size on FMLDeformerCurveReference");
static_assert(offsetof(FMLDeformerCurveReference, CurveName) == 0x000000, "Member 'FMLDeformerCurveReference::CurveName' has a wrong offset!");

}
