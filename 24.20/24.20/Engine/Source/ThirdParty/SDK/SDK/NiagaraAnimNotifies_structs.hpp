#pragma once

#include "Basic.hpp"

namespace SDK
{

struct FCurveParameterPair final
{
public:
	class FName                                   AnimCurveName;
	class FName                                   UserVariableName;
};
static_assert(alignof(FCurveParameterPair) == 0x000004, "Wrong alignment on FCurveParameterPair");
static_assert(sizeof(FCurveParameterPair) == 0x000008, "Wrong size on FCurveParameterPair");
static_assert(offsetof(FCurveParameterPair, AnimCurveName) == 0x000000, "Member 'FCurveParameterPair::AnimCurveName' has a wrong offset!");
static_assert(offsetof(FCurveParameterPair, UserVariableName) == 0x000004, "Member 'FCurveParameterPair::UserVariableName' has a wrong offset!");

}
