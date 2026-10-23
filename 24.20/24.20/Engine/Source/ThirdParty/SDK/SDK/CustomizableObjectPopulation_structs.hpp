#pragma once

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"

namespace SDK
{

enum class EPopulationConstraintType : uint8
{
	NONE                                     = 0,
	BOOL                                     = 1,
	DISCRETE                                 = 2,
	DISCRETE_FLOAT                           = 3,
	DISCRETE_COLOR                           = 4,
	TAG                                      = 5,
	RANGE                                    = 6,
	CURVE                                    = 7,
	CURVE_COLOR                              = 8,
	EPopulationConstraintType_MAX            = 9,
};

enum class ECurveColor : uint8
{
	RED                                      = 0,
	GREEN                                    = 1,
	BLUE                                     = 2,
	ALPHA                                    = 3,
	ECurveColor_MAX                          = 4,
};

struct FClassWeightPair final
{
public:
	class UCustomizableObjectPopulationClass*     Class;
	int32                                         ClassWeight;
	uint8                                         Pad_C[0x4];
};
static_assert(alignof(FClassWeightPair) == 0x000008, "Wrong alignment on FClassWeightPair");
static_assert(sizeof(FClassWeightPair) == 0x000010, "Wrong size on FClassWeightPair");
static_assert(offsetof(FClassWeightPair, Class) == 0x000000, "Member 'FClassWeightPair::Class' has a wrong offset!");
static_assert(offsetof(FClassWeightPair, ClassWeight) == 0x000008, "Member 'FClassWeightPair::ClassWeight' has a wrong offset!");

struct FConstraintRanges final
{
public:
	float                                         MinimumValue;
	float                                         MaximumValue;
	int32                                         RangeWeight;
};
static_assert(alignof(FConstraintRanges) == 0x000004, "Wrong alignment on FConstraintRanges");
static_assert(sizeof(FConstraintRanges) == 0x00000C, "Wrong size on FConstraintRanges");
static_assert(offsetof(FConstraintRanges, MinimumValue) == 0x000000, "Member 'FConstraintRanges::MinimumValue' has a wrong offset!");
static_assert(offsetof(FConstraintRanges, MaximumValue) == 0x000004, "Member 'FConstraintRanges::MaximumValue' has a wrong offset!");
static_assert(offsetof(FConstraintRanges, RangeWeight) == 0x000008, "Member 'FConstraintRanges::RangeWeight' has a wrong offset!");

struct FCustomizableObjectPopulationConstraint final
{
public:
	EPopulationConstraintType                     Type;
	uint8                                         Pad_1[0x3];
	int32                                         ConstraintWeight;
	int32                                         TrueWeight;
	int32                                         FalseWeight;
	class FString                                 DiscreteValue;
	struct FLinearColor                           DiscreteColor;
	TArray<class FString>                         AllowList;
	TArray<class FString>                         Blocklist;
	TArray<struct FConstraintRanges>              Ranges;
	class UCurveBase*                             Curve;
	ECurveColor                                   CurveColor;
	uint8                                         Pad_69[0x7];
};
static_assert(alignof(FCustomizableObjectPopulationConstraint) == 0x000008, "Wrong alignment on FCustomizableObjectPopulationConstraint");
static_assert(sizeof(FCustomizableObjectPopulationConstraint) == 0x000070, "Wrong size on FCustomizableObjectPopulationConstraint");
static_assert(offsetof(FCustomizableObjectPopulationConstraint, Type) == 0x000000, "Member 'FCustomizableObjectPopulationConstraint::Type' has a wrong offset!");
static_assert(offsetof(FCustomizableObjectPopulationConstraint, ConstraintWeight) == 0x000004, "Member 'FCustomizableObjectPopulationConstraint::ConstraintWeight' has a wrong offset!");
static_assert(offsetof(FCustomizableObjectPopulationConstraint, TrueWeight) == 0x000008, "Member 'FCustomizableObjectPopulationConstraint::TrueWeight' has a wrong offset!");
static_assert(offsetof(FCustomizableObjectPopulationConstraint, FalseWeight) == 0x00000C, "Member 'FCustomizableObjectPopulationConstraint::FalseWeight' has a wrong offset!");
static_assert(offsetof(FCustomizableObjectPopulationConstraint, DiscreteValue) == 0x000010, "Member 'FCustomizableObjectPopulationConstraint::DiscreteValue' has a wrong offset!");
static_assert(offsetof(FCustomizableObjectPopulationConstraint, DiscreteColor) == 0x000020, "Member 'FCustomizableObjectPopulationConstraint::DiscreteColor' has a wrong offset!");
static_assert(offsetof(FCustomizableObjectPopulationConstraint, AllowList) == 0x000030, "Member 'FCustomizableObjectPopulationConstraint::AllowList' has a wrong offset!");
static_assert(offsetof(FCustomizableObjectPopulationConstraint, Blocklist) == 0x000040, "Member 'FCustomizableObjectPopulationConstraint::Blocklist' has a wrong offset!");
static_assert(offsetof(FCustomizableObjectPopulationConstraint, Ranges) == 0x000050, "Member 'FCustomizableObjectPopulationConstraint::Ranges' has a wrong offset!");
static_assert(offsetof(FCustomizableObjectPopulationConstraint, Curve) == 0x000060, "Member 'FCustomizableObjectPopulationConstraint::Curve' has a wrong offset!");
static_assert(offsetof(FCustomizableObjectPopulationConstraint, CurveColor) == 0x000068, "Member 'FCustomizableObjectPopulationConstraint::CurveColor' has a wrong offset!");

struct FCustomizableObjectPopulationCharacteristic final
{
public:
	class FString                                 ParameterName;
	TArray<struct FCustomizableObjectPopulationConstraint> Constraints;
};
static_assert(alignof(FCustomizableObjectPopulationCharacteristic) == 0x000008, "Wrong alignment on FCustomizableObjectPopulationCharacteristic");
static_assert(sizeof(FCustomizableObjectPopulationCharacteristic) == 0x000020, "Wrong size on FCustomizableObjectPopulationCharacteristic");
static_assert(offsetof(FCustomizableObjectPopulationCharacteristic, ParameterName) == 0x000000, "Member 'FCustomizableObjectPopulationCharacteristic::ParameterName' has a wrong offset!");
static_assert(offsetof(FCustomizableObjectPopulationCharacteristic, Constraints) == 0x000010, "Member 'FCustomizableObjectPopulationCharacteristic::Constraints' has a wrong offset!");

struct FPopulationClassParameterOptions final
{
public:
	TArray<class FString>                         Tags;
};
static_assert(alignof(FPopulationClassParameterOptions) == 0x000008, "Wrong alignment on FPopulationClassParameterOptions");
static_assert(sizeof(FPopulationClassParameterOptions) == 0x000010, "Wrong size on FPopulationClassParameterOptions");
static_assert(offsetof(FPopulationClassParameterOptions, Tags) == 0x000000, "Member 'FPopulationClassParameterOptions::Tags' has a wrong offset!");

struct FPopulationClassParameter final
{
public:
	TArray<class FString>                         Tags;
	TMap<class FString, struct FPopulationClassParameterOptions> ParameterOptions;
};
static_assert(alignof(FPopulationClassParameter) == 0x000008, "Wrong alignment on FPopulationClassParameter");
static_assert(sizeof(FPopulationClassParameter) == 0x000060, "Wrong size on FPopulationClassParameter");
static_assert(offsetof(FPopulationClassParameter, Tags) == 0x000000, "Member 'FPopulationClassParameter::Tags' has a wrong offset!");
static_assert(offsetof(FPopulationClassParameter, ParameterOptions) == 0x000010, "Member 'FPopulationClassParameter::ParameterOptions' has a wrong offset!");

}
