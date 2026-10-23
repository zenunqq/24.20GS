#pragma once

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"

namespace SDK
{

enum class ESequenceTimeUnit : uint8
{
	DisplayRate                              = 0,
	TickResolution                           = 1,
	ESequenceTimeUnit_MAX                    = 2,
};

struct FSequencerScriptingRange final
{
public:
	uint8                                         bHasStart : 1;
	uint8                                         bHasEnd : 1;
	uint8                                         Pad_1[0x3];
	int32                                         InclusiveStart;
	int32                                         ExclusiveEnd;
	struct FFrameRate                             InternalRate;
};
static_assert(alignof(FSequencerScriptingRange) == 0x000004, "Wrong alignment on FSequencerScriptingRange");
static_assert(sizeof(FSequencerScriptingRange) == 0x000014, "Wrong size on FSequencerScriptingRange");
static_assert(offsetof(FSequencerScriptingRange, InclusiveStart) == 0x000004, "Member 'FSequencerScriptingRange::InclusiveStart' has a wrong offset!");
static_assert(offsetof(FSequencerScriptingRange, ExclusiveEnd) == 0x000008, "Member 'FSequencerScriptingRange::ExclusiveEnd' has a wrong offset!");
static_assert(offsetof(FSequencerScriptingRange, InternalRate) == 0x00000C, "Member 'FSequencerScriptingRange::InternalRate' has a wrong offset!");

}
