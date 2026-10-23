#pragma once

#include "Basic.hpp"

namespace SDK
{

struct FSBMusicalTargetsCueId final
{
public:
	int32                                         IdNumber;
	float                                         Beat;
	int32                                         TargetIndex;
	uint8                                         Pad_C[0x4];
};
static_assert(alignof(FSBMusicalTargetsCueId) == 0x000004, "Wrong alignment on FSBMusicalTargetsCueId");
static_assert(sizeof(FSBMusicalTargetsCueId) == 0x000010, "Wrong size on FSBMusicalTargetsCueId");
static_assert(offsetof(FSBMusicalTargetsCueId, IdNumber) == 0x000000, "Member 'FSBMusicalTargetsCueId::IdNumber' has a wrong offset!");
static_assert(offsetof(FSBMusicalTargetsCueId, Beat) == 0x000004, "Member 'FSBMusicalTargetsCueId::Beat' has a wrong offset!");
static_assert(offsetof(FSBMusicalTargetsCueId, TargetIndex) == 0x000008, "Member 'FSBMusicalTargetsCueId::TargetIndex' has a wrong offset!");

}
