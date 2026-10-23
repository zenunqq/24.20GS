#pragma once

#include "Basic.hpp"

namespace SDK
{

enum class EGfeSDKReturnCode : uint8
{
	Success                                  = 0,
	SuccessIpcOldSdk                         = 1,
	SuccessIpcOldGfe                         = 2,
	Error                                    = 3,
	ErrorGfeVersion                          = 4,
	ErrorSdkVersion                          = 5,
	ErrorModuleNotLoaded                     = 6,
	EGfeSDKReturnCode_MAX                    = 7,
};

enum class EGfeSDKScope : uint8
{
	Highlights                               = 0,
	HighlightsRecordVideo                    = 1,
	HighlightsRecordScreenshot               = 2,
	MAX                                      = 3,
};

enum class EGfeSDKPermission : uint8
{
	Granted                                  = 0,
	Denied                                   = 1,
	MustAsk                                  = 2,
	Unknown                                  = 3,
	MAX                                      = 4,
};

enum class EGfeSDKHighlightType : uint8
{
	NONE                                     = 0,
	Milestone                                = 1,
	Achievement                              = 2,
	Incident                                 = 4,
	StateChange                              = 8,
	MAX                                      = 16,
};

enum class EGfeSDKHighlightSignificance : uint8
{
	NONE                                     = 0,
	ExtremelyBad                             = 1,
	VeryBad                                  = 2,
	Bad                                      = 4,
	Neutral                                  = 8,
	Good                                     = 16,
	VeryGood                                 = 32,
	ExtremelyGood                            = 64,
	MAX                                      = 128,
};

struct FGfeSDKCreateInputParams final
{
public:
	class FString                                 AppName;
	TArray<EGfeSDKScope>                          RequiredScopes;
	bool                                          PollForCallbacks;
	uint8                                         Pad_21[0x7];
};
static_assert(alignof(FGfeSDKCreateInputParams) == 0x000008, "Wrong alignment on FGfeSDKCreateInputParams");
static_assert(sizeof(FGfeSDKCreateInputParams) == 0x000028, "Wrong size on FGfeSDKCreateInputParams");
static_assert(offsetof(FGfeSDKCreateInputParams, AppName) == 0x000000, "Member 'FGfeSDKCreateInputParams::AppName' has a wrong offset!");
static_assert(offsetof(FGfeSDKCreateInputParams, RequiredScopes) == 0x000010, "Member 'FGfeSDKCreateInputParams::RequiredScopes' has a wrong offset!");
static_assert(offsetof(FGfeSDKCreateInputParams, PollForCallbacks) == 0x000020, "Member 'FGfeSDKCreateInputParams::PollForCallbacks' has a wrong offset!");

struct FGfeSDKCreateResponse final
{
public:
	uint16                                        VersionMajor;
	uint16                                        VersionMinor;
	uint8                                         Pad_4[0x4];
	class FString                                 NVIDIAGfeVersion;
	TMap<EGfeSDKScope, EGfeSDKPermission>         ScopePermissions;
};
static_assert(alignof(FGfeSDKCreateResponse) == 0x000008, "Wrong alignment on FGfeSDKCreateResponse");
static_assert(sizeof(FGfeSDKCreateResponse) == 0x000068, "Wrong size on FGfeSDKCreateResponse");
static_assert(offsetof(FGfeSDKCreateResponse, VersionMajor) == 0x000000, "Member 'FGfeSDKCreateResponse::VersionMajor' has a wrong offset!");
static_assert(offsetof(FGfeSDKCreateResponse, VersionMinor) == 0x000002, "Member 'FGfeSDKCreateResponse::VersionMinor' has a wrong offset!");
static_assert(offsetof(FGfeSDKCreateResponse, NVIDIAGfeVersion) == 0x000008, "Member 'FGfeSDKCreateResponse::NVIDIAGfeVersion' has a wrong offset!");
static_assert(offsetof(FGfeSDKCreateResponse, ScopePermissions) == 0x000018, "Member 'FGfeSDKCreateResponse::ScopePermissions' has a wrong offset!");

struct FGfeSDKHighlightDefinition final
{
public:
	class FString                                 ID;
	bool                                          UserDefaultInterest;
	EGfeSDKHighlightType                          HighlightTags;
	EGfeSDKHighlightSignificance                  Significance;
	uint8                                         Pad_13[0x5];
	TMap<class FString, class FString>            NameTranslationTable;
};
static_assert(alignof(FGfeSDKHighlightDefinition) == 0x000008, "Wrong alignment on FGfeSDKHighlightDefinition");
static_assert(sizeof(FGfeSDKHighlightDefinition) == 0x000068, "Wrong size on FGfeSDKHighlightDefinition");
static_assert(offsetof(FGfeSDKHighlightDefinition, ID) == 0x000000, "Member 'FGfeSDKHighlightDefinition::ID' has a wrong offset!");
static_assert(offsetof(FGfeSDKHighlightDefinition, UserDefaultInterest) == 0x000010, "Member 'FGfeSDKHighlightDefinition::UserDefaultInterest' has a wrong offset!");
static_assert(offsetof(FGfeSDKHighlightDefinition, HighlightTags) == 0x000011, "Member 'FGfeSDKHighlightDefinition::HighlightTags' has a wrong offset!");
static_assert(offsetof(FGfeSDKHighlightDefinition, Significance) == 0x000012, "Member 'FGfeSDKHighlightDefinition::Significance' has a wrong offset!");
static_assert(offsetof(FGfeSDKHighlightDefinition, NameTranslationTable) == 0x000018, "Member 'FGfeSDKHighlightDefinition::NameTranslationTable' has a wrong offset!");

struct FGfeSDKHighlightConfigParams final
{
public:
	TArray<struct FGfeSDKHighlightDefinition>     HighlightDefinitions;
	class FString                                 DefaultLocale;
};
static_assert(alignof(FGfeSDKHighlightConfigParams) == 0x000008, "Wrong alignment on FGfeSDKHighlightConfigParams");
static_assert(sizeof(FGfeSDKHighlightConfigParams) == 0x000020, "Wrong size on FGfeSDKHighlightConfigParams");
static_assert(offsetof(FGfeSDKHighlightConfigParams, HighlightDefinitions) == 0x000000, "Member 'FGfeSDKHighlightConfigParams::HighlightDefinitions' has a wrong offset!");
static_assert(offsetof(FGfeSDKHighlightConfigParams, DefaultLocale) == 0x000010, "Member 'FGfeSDKHighlightConfigParams::DefaultLocale' has a wrong offset!");

struct FGfeSDKRequestPermissionsParams final
{
public:
	TArray<EGfeSDKScope>                          Scopes;
};
static_assert(alignof(FGfeSDKRequestPermissionsParams) == 0x000008, "Wrong alignment on FGfeSDKRequestPermissionsParams");
static_assert(sizeof(FGfeSDKRequestPermissionsParams) == 0x000010, "Wrong size on FGfeSDKRequestPermissionsParams");
static_assert(offsetof(FGfeSDKRequestPermissionsParams, Scopes) == 0x000000, "Member 'FGfeSDKRequestPermissionsParams::Scopes' has a wrong offset!");

struct FGfeSDKPermissionsChangedData final
{
public:
	TMap<EGfeSDKScope, EGfeSDKPermission>         ScopePermissions;
};
static_assert(alignof(FGfeSDKPermissionsChangedData) == 0x000008, "Wrong alignment on FGfeSDKPermissionsChangedData");
static_assert(sizeof(FGfeSDKPermissionsChangedData) == 0x000050, "Wrong size on FGfeSDKPermissionsChangedData");
static_assert(offsetof(FGfeSDKPermissionsChangedData, ScopePermissions) == 0x000000, "Member 'FGfeSDKPermissionsChangedData::ScopePermissions' has a wrong offset!");

struct FGfeSDKHighlightOpenGroupParams final
{
public:
	class FString                                 GroupId;
	TMap<class FString, class FString>            GroupDescriptionTranslationTable;
};
static_assert(alignof(FGfeSDKHighlightOpenGroupParams) == 0x000008, "Wrong alignment on FGfeSDKHighlightOpenGroupParams");
static_assert(sizeof(FGfeSDKHighlightOpenGroupParams) == 0x000060, "Wrong size on FGfeSDKHighlightOpenGroupParams");
static_assert(offsetof(FGfeSDKHighlightOpenGroupParams, GroupId) == 0x000000, "Member 'FGfeSDKHighlightOpenGroupParams::GroupId' has a wrong offset!");
static_assert(offsetof(FGfeSDKHighlightOpenGroupParams, GroupDescriptionTranslationTable) == 0x000010, "Member 'FGfeSDKHighlightOpenGroupParams::GroupDescriptionTranslationTable' has a wrong offset!");

struct FGfeSDKHighlightCloseGroupParams final
{
public:
	class FString                                 GroupId;
	bool                                          DestroyHighlights;
	uint8                                         Pad_11[0x7];
};
static_assert(alignof(FGfeSDKHighlightCloseGroupParams) == 0x000008, "Wrong alignment on FGfeSDKHighlightCloseGroupParams");
static_assert(sizeof(FGfeSDKHighlightCloseGroupParams) == 0x000018, "Wrong size on FGfeSDKHighlightCloseGroupParams");
static_assert(offsetof(FGfeSDKHighlightCloseGroupParams, GroupId) == 0x000000, "Member 'FGfeSDKHighlightCloseGroupParams::GroupId' has a wrong offset!");
static_assert(offsetof(FGfeSDKHighlightCloseGroupParams, DestroyHighlights) == 0x000010, "Member 'FGfeSDKHighlightCloseGroupParams::DestroyHighlights' has a wrong offset!");

struct FGfeSDKHighlightScreenshotParams final
{
public:
	class FString                                 GroupId;
	class FString                                 HighlightId;
};
static_assert(alignof(FGfeSDKHighlightScreenshotParams) == 0x000008, "Wrong alignment on FGfeSDKHighlightScreenshotParams");
static_assert(sizeof(FGfeSDKHighlightScreenshotParams) == 0x000020, "Wrong size on FGfeSDKHighlightScreenshotParams");
static_assert(offsetof(FGfeSDKHighlightScreenshotParams, GroupId) == 0x000000, "Member 'FGfeSDKHighlightScreenshotParams::GroupId' has a wrong offset!");
static_assert(offsetof(FGfeSDKHighlightScreenshotParams, HighlightId) == 0x000010, "Member 'FGfeSDKHighlightScreenshotParams::HighlightId' has a wrong offset!");

struct FGfeSDKHighlightVideoParams final
{
public:
	class FString                                 GroupId;
	class FString                                 HighlightId;
	int32                                         StartDelta;
	int32                                         EndDelta;
};
static_assert(alignof(FGfeSDKHighlightVideoParams) == 0x000008, "Wrong alignment on FGfeSDKHighlightVideoParams");
static_assert(sizeof(FGfeSDKHighlightVideoParams) == 0x000028, "Wrong size on FGfeSDKHighlightVideoParams");
static_assert(offsetof(FGfeSDKHighlightVideoParams, GroupId) == 0x000000, "Member 'FGfeSDKHighlightVideoParams::GroupId' has a wrong offset!");
static_assert(offsetof(FGfeSDKHighlightVideoParams, HighlightId) == 0x000010, "Member 'FGfeSDKHighlightVideoParams::HighlightId' has a wrong offset!");
static_assert(offsetof(FGfeSDKHighlightVideoParams, StartDelta) == 0x000020, "Member 'FGfeSDKHighlightVideoParams::StartDelta' has a wrong offset!");
static_assert(offsetof(FGfeSDKHighlightVideoParams, EndDelta) == 0x000024, "Member 'FGfeSDKHighlightVideoParams::EndDelta' has a wrong offset!");

struct FGfeSDKHighlightGroupView final
{
public:
	class FString                                 GroupId;
	EGfeSDKHighlightType                          TagsFilter;
	EGfeSDKHighlightSignificance                  SignificanceFilter;
	uint8                                         Pad_12[0x6];
};
static_assert(alignof(FGfeSDKHighlightGroupView) == 0x000008, "Wrong alignment on FGfeSDKHighlightGroupView");
static_assert(sizeof(FGfeSDKHighlightGroupView) == 0x000018, "Wrong size on FGfeSDKHighlightGroupView");
static_assert(offsetof(FGfeSDKHighlightGroupView, GroupId) == 0x000000, "Member 'FGfeSDKHighlightGroupView::GroupId' has a wrong offset!");
static_assert(offsetof(FGfeSDKHighlightGroupView, TagsFilter) == 0x000010, "Member 'FGfeSDKHighlightGroupView::TagsFilter' has a wrong offset!");
static_assert(offsetof(FGfeSDKHighlightGroupView, SignificanceFilter) == 0x000011, "Member 'FGfeSDKHighlightGroupView::SignificanceFilter' has a wrong offset!");

struct FGfeSDKHighlightSummaryParams final
{
public:
	TArray<struct FGfeSDKHighlightGroupView>      GroupViews;
};
static_assert(alignof(FGfeSDKHighlightSummaryParams) == 0x000008, "Wrong alignment on FGfeSDKHighlightSummaryParams");
static_assert(sizeof(FGfeSDKHighlightSummaryParams) == 0x000010, "Wrong size on FGfeSDKHighlightSummaryParams");
static_assert(offsetof(FGfeSDKHighlightSummaryParams, GroupViews) == 0x000000, "Member 'FGfeSDKHighlightSummaryParams::GroupViews' has a wrong offset!");

}
