#pragma once

#include "Basic.hpp"

namespace SDK
{

enum class EAIPatrolPathVersion : uint8
{
	InitialVersion                           = 0,
	TemplateFromQuickBarVersion              = 1,
	VersionPlusOne                           = 2,
	LatestVersion                            = 1,
	EAIPatrolPathVersion_MAX                 = 3,
};

enum class ESegmentPathStatus : uint8
{
	INVALID                                  = 0,
	CALCULATING                              = 1,
	RECALCULATING_PENDING                    = 2,
	PATH_FAILED                              = 3,
	PATH_SUCCESS                             = 4,
	SegmentPathStatus_MAX                    = 5,
};

struct FPatrolPathSegmentDetails final
{
public:
	uint8                                         Pad_0[0xA8];
	class UNavigationPath*                        Path;
	class UAIPatrolPathComponent*                 Start;
	class UAIPatrolPathComponent*                 End;
	uint8                                         Pad_C0[0x48];
};
static_assert(alignof(FPatrolPathSegmentDetails) == 0x000008, "Wrong alignment on FPatrolPathSegmentDetails");
static_assert(sizeof(FPatrolPathSegmentDetails) == 0x000108, "Wrong size on FPatrolPathSegmentDetails");
static_assert(offsetof(FPatrolPathSegmentDetails, Path) == 0x0000A8, "Member 'FPatrolPathSegmentDetails::Path' has a wrong offset!");
static_assert(offsetof(FPatrolPathSegmentDetails, Start) == 0x0000B0, "Member 'FPatrolPathSegmentDetails::Start' has a wrong offset!");
static_assert(offsetof(FPatrolPathSegmentDetails, End) == 0x0000B8, "Member 'FPatrolPathSegmentDetails::End' has a wrong offset!");

}
