#pragma once

#include "Basic.hpp"

namespace SDK
{

enum class EVerseFalse : uint8
{
	Value                                    = 0,
	EVerseFalse_MAX                          = 1,
};

enum class EVerseTrue : uint8
{
	Value                                    = 0,
	EVerseTrue_MAX                           = 1,
};

struct FVerseIntRange final
{
public:
	int64                                         Left;
	int64                                         Right;
};
static_assert(alignof(FVerseIntRange) == 0x000008, "Wrong alignment on FVerseIntRange");
static_assert(sizeof(FVerseIntRange) == 0x000010, "Wrong size on FVerseIntRange");
static_assert(offsetof(FVerseIntRange, Left) == 0x000000, "Member 'FVerseIntRange::Left' has a wrong offset!");
static_assert(offsetof(FVerseIntRange, Right) == 0x000008, "Member 'FVerseIntRange::Right' has a wrong offset!");

struct FVerseRational final
{
public:
	int64                                         Numerator;
	int64                                         Denominator;
};
static_assert(alignof(FVerseRational) == 0x000008, "Wrong alignment on FVerseRational");
static_assert(sizeof(FVerseRational) == 0x000010, "Wrong size on FVerseRational");
static_assert(offsetof(FVerseRational, Numerator) == 0x000000, "Member 'FVerseRational::Numerator' has a wrong offset!");
static_assert(offsetof(FVerseRational, Denominator) == 0x000008, "Member 'FVerseRational::Denominator' has a wrong offset!");

struct FakeType final
{
public:
	uint8                                         Pad_0[0x1];
};
static_assert(alignof(FakeType) == 0x000001, "Wrong alignment on FakeType");
static_assert(sizeof(FakeType) == 0x000001, "Wrong size on FakeType");

}
