#pragma once

#include "Basic.hpp"

namespace SDK
{

enum class ELiveLinkTimecodeProviderEvaluationType : uint32
{
	Lerp                                     = 0,
	Nearest                                  = 1,
	Latest                                   = 2,
	ELiveLinkTimecodeProviderEvaluationType_MAX = 3,
};

enum class ELiveLinkAxis : uint8
{
	X                                        = 0,
	Y                                        = 1,
	Z                                        = 2,
	XNeg                                     = 3,
	YNeg                                     = 4,
	ZNeg                                     = 5,
	ELiveLinkAxis_MAX                        = 6,
};

struct FLiveLinkRetargetAssetReference final
{
public:
	uint8                                         Pad_0[0x1];
};
static_assert(alignof(FLiveLinkRetargetAssetReference) == 0x000001, "Wrong alignment on FLiveLinkRetargetAssetReference");
static_assert(sizeof(FLiveLinkRetargetAssetReference) == 0x000001, "Wrong size on FLiveLinkRetargetAssetReference");

struct FProviderPollResult final
{
public:
	uint8                                         Pad_0[0x10];
	class FString                                 Name;
	class FString                                 MachineName;
	double                                        MachineTimeOffset;
	bool                                          bIsValidProvider;
	uint8                                         Pad_39[0x7];
};
static_assert(alignof(FProviderPollResult) == 0x000008, "Wrong alignment on FProviderPollResult");
static_assert(sizeof(FProviderPollResult) == 0x000040, "Wrong size on FProviderPollResult");
static_assert(offsetof(FProviderPollResult, Name) == 0x000010, "Member 'FProviderPollResult::Name' has a wrong offset!");
static_assert(offsetof(FProviderPollResult, MachineName) == 0x000020, "Member 'FProviderPollResult::MachineName' has a wrong offset!");
static_assert(offsetof(FProviderPollResult, MachineTimeOffset) == 0x000030, "Member 'FProviderPollResult::MachineTimeOffset' has a wrong offset!");
static_assert(offsetof(FProviderPollResult, bIsValidProvider) == 0x000038, "Member 'FProviderPollResult::bIsValidProvider' has a wrong offset!");

struct FLiveLinkRoleProjectSetting final
{
public:
	TSubclassOf<class ULiveLinkRole>              Role;
	TSubclassOf<class ULiveLinkSubjectSettings>   SettingClass;
	TSubclassOf<class ULiveLinkFrameInterpolationProcessor> FrameInterpolationProcessor;
	TArray<TSubclassOf<class ULiveLinkFramePreProcessor>> FramePreProcessors;
};
static_assert(alignof(FLiveLinkRoleProjectSetting) == 0x000008, "Wrong alignment on FLiveLinkRoleProjectSetting");
static_assert(sizeof(FLiveLinkRoleProjectSetting) == 0x000028, "Wrong size on FLiveLinkRoleProjectSetting");
static_assert(offsetof(FLiveLinkRoleProjectSetting, Role) == 0x000000, "Member 'FLiveLinkRoleProjectSetting::Role' has a wrong offset!");
static_assert(offsetof(FLiveLinkRoleProjectSetting, SettingClass) == 0x000008, "Member 'FLiveLinkRoleProjectSetting::SettingClass' has a wrong offset!");
static_assert(offsetof(FLiveLinkRoleProjectSetting, FrameInterpolationProcessor) == 0x000010, "Member 'FLiveLinkRoleProjectSetting::FrameInterpolationProcessor' has a wrong offset!");
static_assert(offsetof(FLiveLinkRoleProjectSetting, FramePreProcessors) == 0x000018, "Member 'FLiveLinkRoleProjectSetting::FramePreProcessors' has a wrong offset!");

}
