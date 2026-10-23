#pragma once

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"

namespace SDK
{

struct FVerseRotation final
{
public:
	struct FQuat                                  Quaternion;
};
static_assert(alignof(FVerseRotation) == 0x000010, "Wrong alignment on FVerseRotation");
static_assert(sizeof(FVerseRotation) == 0x000020, "Wrong size on FVerseRotation");
static_assert(offsetof(FVerseRotation, Quaternion) == 0x000000, "Member 'FVerseRotation::Quaternion' has a wrong offset!");

}
