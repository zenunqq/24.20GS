#pragma once

#include "Basic.hpp"

namespace SDK
{

enum class ETaskResourceOverlapPolicy : uint8
{
	StartOnTop                               = 0,
	StartAtEnd                               = 1,
	RequestCancelAndStartOnTop               = 2,
	RequestCancelAndStartAtEnd               = 3,
	ETaskResourceOverlapPolicy_MAX           = 4,
};

enum class EGameplayTaskState : uint8
{
	Uninitialized                            = 0,
	AwaitingActivation                       = 1,
	Paused                                   = 2,
	Active                                   = 3,
	Finished                                 = 4,
	EGameplayTaskState_MAX                   = 5,
};

enum class EGameplayTaskRunResult : uint8
{
	Error                                    = 0,
	Failed                                   = 1,
	Success_Paused                           = 2,
	Success_Active                           = 3,
	Success_Finished                         = 4,
	EGameplayTaskRunResult_MAX               = 5,
};

struct alignas(0x02) FGameplayResourceSet final
{
public:
	uint8                                         Pad_0[0x2];
};
static_assert(alignof(FGameplayResourceSet) == 0x000002, "Wrong alignment on FGameplayResourceSet");
static_assert(sizeof(FGameplayResourceSet) == 0x000002, "Wrong size on FGameplayResourceSet");

}
