#pragma once

#include "Basic.hpp"

namespace SDK
{

enum class EHotfixResult : uint8
{
	Failed                                   = 0,
	Success                                  = 1,
	SuccessNoChange                          = 2,
	SuccessNeedsReload                       = 3,
	SuccessNeedsRelaunch                     = 4,
	EHotfixResult_MAX                        = 5,
};

enum class EUpdateState : uint8
{
	UpdateIdle                               = 0,
	UpdatePending                            = 1,
	CheckingForPatch                         = 2,
	DetectingPlatformEnvironment             = 3,
	CheckingForHotfix                        = 4,
	WaitingOnInitialLoad                     = 5,
	InitialLoadComplete                      = 6,
	UpdateComplete                           = 7,
	EUpdateState_MAX                         = 8,
};

enum class EUpdateCompletionStatus : uint8
{
	UpdateUnknown                            = 0,
	UpdateSuccess                            = 1,
	UpdateSuccess_NoChange                   = 2,
	UpdateSuccess_NeedsReload                = 3,
	UpdateSuccess_NeedsRelaunch              = 4,
	UpdateSuccess_NeedsPatch                 = 5,
	UpdateFailure_PatchCheck                 = 6,
	UpdateFailure_HotfixCheck                = 7,
	UpdateFailure_NotLoggedIn                = 8,
	EUpdateCompletionStatus_MAX              = 9,
};

struct FUpdateContextDefinition final
{
public:
	class FString                                 Name;
	bool                                          bEnabled;
	bool                                          bCheckAvailabilityOnly;
	bool                                          bPatchCheckEnabled;
	bool                                          bPlatformEnvironmentDetectionEnabled;
	uint8                                         Pad_14[0x4];
	TSet<class FString>                           AdditionalTags;
};
static_assert(alignof(FUpdateContextDefinition) == 0x000008, "Wrong alignment on FUpdateContextDefinition");
static_assert(sizeof(FUpdateContextDefinition) == 0x000068, "Wrong size on FUpdateContextDefinition");
static_assert(offsetof(FUpdateContextDefinition, Name) == 0x000000, "Member 'FUpdateContextDefinition::Name' has a wrong offset!");
static_assert(offsetof(FUpdateContextDefinition, bEnabled) == 0x000010, "Member 'FUpdateContextDefinition::bEnabled' has a wrong offset!");
static_assert(offsetof(FUpdateContextDefinition, bCheckAvailabilityOnly) == 0x000011, "Member 'FUpdateContextDefinition::bCheckAvailabilityOnly' has a wrong offset!");
static_assert(offsetof(FUpdateContextDefinition, bPatchCheckEnabled) == 0x000012, "Member 'FUpdateContextDefinition::bPatchCheckEnabled' has a wrong offset!");
static_assert(offsetof(FUpdateContextDefinition, bPlatformEnvironmentDetectionEnabled) == 0x000013, "Member 'FUpdateContextDefinition::bPlatformEnvironmentDetectionEnabled' has a wrong offset!");
static_assert(offsetof(FUpdateContextDefinition, AdditionalTags) == 0x000018, "Member 'FUpdateContextDefinition::AdditionalTags' has a wrong offset!");

}
