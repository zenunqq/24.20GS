#pragma once

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "LinkId_structs.hpp"
#include "JsonUtilities_structs.hpp"

namespace SDK
{

enum class EValkyrieProjectDescriptorFileVersion : uint8
{
	Invalid                                  = 0,
	Initial                                  = 1,
	AddProjectMetadata                       = 2,
	AddedCompatibilityLabel                  = 3,
	AddBindings                              = 4,
	AddEditorPermissions                     = 5,
	AddEpicApp                               = 6,
	AddDataSets                              = 7,
	AddVersionSuffix                         = 8,
	AddProjectKind                           = 9,
	AddMetaDataTags                          = 10,
	RevertMetaDataTags                       = 11,
	AddDocsUrl                               = 12,
	AddTemplateCategory                      = 13,
	BranchDependencies                       = 14,
	LatestPlusOne                            = 15,
	Latest                                   = 14,
	EValkyrieProjectDescriptorFileVersion_MAX = 16,
};

enum class EValkyrieProjectReferenceDescriptorFileVersion : uint8
{
	Invalid                                  = 0,
	Initial                                  = 1,
	AddLinkCode                              = 2,
	LatestPlusOne                            = 3,
	Latest                                   = 2,
	EValkyrieProjectReferenceDescriptorFileVersion_MAX = 4,
};

enum class EValkyrieProjectKind : uint32
{
	Island                                   = 0,
	Library                                  = 1,
	Count                                    = 2,
	Unspecified                              = 3,
	Default                                  = 0,
	EValkyrieProjectKind_MAX                 = 4,
};

enum class EValkyrieProjectTemplateCategory : uint32
{
	UserGenerated                            = 0,
	FeatureExample                           = 1,
	SampleProject                            = 2,
	Count                                    = 3,
	Default                                  = 0,
	EValkyrieProjectTemplateCategory_MAX     = 4,
};

enum class EConsumerRole : uint8
{
	Server                                   = 0,
	Client                                   = 1,
	Editor                                   = 2,
	EConsumerRole_MAX                        = 3,
};

enum class EVkLinkPublishMode : uint8
{
	Live                                     = 0,
	Playtest                                 = 1,
	EVkLinkPublishMode_MAX                   = 2,
};

enum class EVkIdType : uint8
{
	Account                                  = 0,
	Team                                     = 1,
	EVkIdType_MAX                            = 2,
};

enum class EVkTicketStatus : uint8
{
	None                                     = 0,
	Succeeded                                = 1,
	Running                                  = 2,
	Failed                                   = 3,
	EVkTicketStatus_MAX                      = 4,
};

enum class EVkModuleAccess : uint8
{
	Private                                  = 0,
	Protected                                = 1,
	Public                                   = 2,
	EVkModuleAccess_MAX                      = 3,
};

enum class EVkValidationFlags : uint8
{
	None                                     = 0,
	VF_IgnoreValidation                      = 1,
	VF_AllowMissingGameFeatureDataAsset      = 2,
	VF_AllowEngineContent                    = 4,
	VF_AllowGameContent                      = 8,
	VF_NoPreCheckVerse                       = 16,
	EVkValidationFlags_MAX                   = 17,
};

struct FValkyrieProjectBindingsDescriptor final
{
public:
	class FString                                 ProjectID;
	TMap<class FString, class FString>            Modules;
};
static_assert(alignof(FValkyrieProjectBindingsDescriptor) == 0x000008, "Wrong alignment on FValkyrieProjectBindingsDescriptor");
static_assert(sizeof(FValkyrieProjectBindingsDescriptor) == 0x000060, "Wrong size on FValkyrieProjectBindingsDescriptor");
static_assert(offsetof(FValkyrieProjectBindingsDescriptor, ProjectID) == 0x000000, "Member 'FValkyrieProjectBindingsDescriptor::ProjectID' has a wrong offset!");
static_assert(offsetof(FValkyrieProjectBindingsDescriptor, Modules) == 0x000010, "Member 'FValkyrieProjectBindingsDescriptor::Modules' has a wrong offset!");

struct FValkyriePluginReferenceDescriptor final
{
public:
	class FString                                 Name;
	bool                                          bIsRoot;
	bool                                          bIsPublic;
	bool                                          bEnabled;
	uint8                                         Pad_13[0x5];
};
static_assert(alignof(FValkyriePluginReferenceDescriptor) == 0x000008, "Wrong alignment on FValkyriePluginReferenceDescriptor");
static_assert(sizeof(FValkyriePluginReferenceDescriptor) == 0x000018, "Wrong size on FValkyriePluginReferenceDescriptor");
static_assert(offsetof(FValkyriePluginReferenceDescriptor, Name) == 0x000000, "Member 'FValkyriePluginReferenceDescriptor::Name' has a wrong offset!");
static_assert(offsetof(FValkyriePluginReferenceDescriptor, bIsRoot) == 0x000010, "Member 'FValkyriePluginReferenceDescriptor::bIsRoot' has a wrong offset!");
static_assert(offsetof(FValkyriePluginReferenceDescriptor, bIsPublic) == 0x000011, "Member 'FValkyriePluginReferenceDescriptor::bIsPublic' has a wrong offset!");
static_assert(offsetof(FValkyriePluginReferenceDescriptor, bEnabled) == 0x000012, "Member 'FValkyriePluginReferenceDescriptor::bEnabled' has a wrong offset!");

struct FValkyrieProjectReferenceDescriptor final
{
public:
	uint8                                         FileVersion;
	uint8                                         Pad_1[0x7];
	class FString                                 ID;
	struct FOnlineLinkId                          LinkCode;
	bool                                          bEnabled;
	uint8                                         Pad_31[0x7];
};
static_assert(alignof(FValkyrieProjectReferenceDescriptor) == 0x000008, "Wrong alignment on FValkyrieProjectReferenceDescriptor");
static_assert(sizeof(FValkyrieProjectReferenceDescriptor) == 0x000038, "Wrong size on FValkyrieProjectReferenceDescriptor");
static_assert(offsetof(FValkyrieProjectReferenceDescriptor, FileVersion) == 0x000000, "Member 'FValkyrieProjectReferenceDescriptor::FileVersion' has a wrong offset!");
static_assert(offsetof(FValkyrieProjectReferenceDescriptor, ID) == 0x000008, "Member 'FValkyrieProjectReferenceDescriptor::ID' has a wrong offset!");
static_assert(offsetof(FValkyrieProjectReferenceDescriptor, LinkCode) == 0x000018, "Member 'FValkyrieProjectReferenceDescriptor::LinkCode' has a wrong offset!");
static_assert(offsetof(FValkyrieProjectReferenceDescriptor, bEnabled) == 0x000030, "Member 'FValkyrieProjectReferenceDescriptor::bEnabled' has a wrong offset!");

struct FValkyrieProjectDescriptor final
{
public:
	uint8                                         FileVersion;
	uint8                                         Pad_1[0x7];
	class FString                                 VersionSuffix;
	class FString                                 Title;
	class FString                                 Description;
	class FString                                 KeyArt;
	class FString                                 DocsUrl;
	TArray<class FString>                         Attributions;
	EValkyrieProjectKind                          Kind;
	EValkyrieProjectTemplateCategory              TemplateCategory;
	class FString                                 CompatibilityVersion;
	TArray<class FString>                         EditorPermissions;
	class FString                                 EpicApp;
	float                                         SortPriority;
	uint8                                         Pad_A4[0x4];
	TArray<struct FValkyriePluginReferenceDescriptor> Plugins;
	TArray<struct FValkyrieProjectReferenceDescriptor> Dependencies;
	TMap<class FString, struct FJsonObjectWrapper> DataSets;
	uint8                                         Pad_118[0xC8];
	struct FValkyrieProjectBindingsDescriptor     Bindings;
};
static_assert(alignof(FValkyrieProjectDescriptor) == 0x000008, "Wrong alignment on FValkyrieProjectDescriptor");
static_assert(sizeof(FValkyrieProjectDescriptor) == 0x000240, "Wrong size on FValkyrieProjectDescriptor");
static_assert(offsetof(FValkyrieProjectDescriptor, FileVersion) == 0x000000, "Member 'FValkyrieProjectDescriptor::FileVersion' has a wrong offset!");
static_assert(offsetof(FValkyrieProjectDescriptor, VersionSuffix) == 0x000008, "Member 'FValkyrieProjectDescriptor::VersionSuffix' has a wrong offset!");
static_assert(offsetof(FValkyrieProjectDescriptor, Title) == 0x000018, "Member 'FValkyrieProjectDescriptor::Title' has a wrong offset!");
static_assert(offsetof(FValkyrieProjectDescriptor, Description) == 0x000028, "Member 'FValkyrieProjectDescriptor::Description' has a wrong offset!");
static_assert(offsetof(FValkyrieProjectDescriptor, KeyArt) == 0x000038, "Member 'FValkyrieProjectDescriptor::KeyArt' has a wrong offset!");
static_assert(offsetof(FValkyrieProjectDescriptor, DocsUrl) == 0x000048, "Member 'FValkyrieProjectDescriptor::DocsUrl' has a wrong offset!");
static_assert(offsetof(FValkyrieProjectDescriptor, Attributions) == 0x000058, "Member 'FValkyrieProjectDescriptor::Attributions' has a wrong offset!");
static_assert(offsetof(FValkyrieProjectDescriptor, Kind) == 0x000068, "Member 'FValkyrieProjectDescriptor::Kind' has a wrong offset!");
static_assert(offsetof(FValkyrieProjectDescriptor, TemplateCategory) == 0x00006C, "Member 'FValkyrieProjectDescriptor::TemplateCategory' has a wrong offset!");
static_assert(offsetof(FValkyrieProjectDescriptor, CompatibilityVersion) == 0x000070, "Member 'FValkyrieProjectDescriptor::CompatibilityVersion' has a wrong offset!");
static_assert(offsetof(FValkyrieProjectDescriptor, EditorPermissions) == 0x000080, "Member 'FValkyrieProjectDescriptor::EditorPermissions' has a wrong offset!");
static_assert(offsetof(FValkyrieProjectDescriptor, EpicApp) == 0x000090, "Member 'FValkyrieProjectDescriptor::EpicApp' has a wrong offset!");
static_assert(offsetof(FValkyrieProjectDescriptor, SortPriority) == 0x0000A0, "Member 'FValkyrieProjectDescriptor::SortPriority' has a wrong offset!");
static_assert(offsetof(FValkyrieProjectDescriptor, Plugins) == 0x0000A8, "Member 'FValkyrieProjectDescriptor::Plugins' has a wrong offset!");
static_assert(offsetof(FValkyrieProjectDescriptor, Dependencies) == 0x0000B8, "Member 'FValkyrieProjectDescriptor::Dependencies' has a wrong offset!");
static_assert(offsetof(FValkyrieProjectDescriptor, DataSets) == 0x0000C8, "Member 'FValkyrieProjectDescriptor::DataSets' has a wrong offset!");
static_assert(offsetof(FValkyrieProjectDescriptor, Bindings) == 0x0001E0, "Member 'FValkyrieProjectDescriptor::Bindings' has a wrong offset!");

struct FVkCreateModuleRequest final
{
public:
	class FString                                 ModuleName;
	struct FJsonObjectWrapper                     Meta;
	class FString                                 ContentType;
	TMap<EConsumerRole, bool>                     Relevance;
	class FString                                 DesiredModuleId;
};
static_assert(alignof(FVkCreateModuleRequest) == 0x000008, "Wrong alignment on FVkCreateModuleRequest");
static_assert(sizeof(FVkCreateModuleRequest) == 0x0000A0, "Wrong size on FVkCreateModuleRequest");
static_assert(offsetof(FVkCreateModuleRequest, ModuleName) == 0x000000, "Member 'FVkCreateModuleRequest::ModuleName' has a wrong offset!");
static_assert(offsetof(FVkCreateModuleRequest, Meta) == 0x000010, "Member 'FVkCreateModuleRequest::Meta' has a wrong offset!");
static_assert(offsetof(FVkCreateModuleRequest, ContentType) == 0x000030, "Member 'FVkCreateModuleRequest::ContentType' has a wrong offset!");
static_assert(offsetof(FVkCreateModuleRequest, Relevance) == 0x000040, "Member 'FVkCreateModuleRequest::Relevance' has a wrong offset!");
static_assert(offsetof(FVkCreateModuleRequest, DesiredModuleId) == 0x000090, "Member 'FVkCreateModuleRequest::DesiredModuleId' has a wrong offset!");

struct FVkPublishedLink final
{
public:
	class FString                                 LinkCode;
	int32                                         LinkVersion;
	uint8                                         Pad_14[0x4];
	struct FDateTime                              LastPublished;
	class FString                                 Base;
	class FString                                 CommitMessage;
};
static_assert(alignof(FVkPublishedLink) == 0x000008, "Wrong alignment on FVkPublishedLink");
static_assert(sizeof(FVkPublishedLink) == 0x000040, "Wrong size on FVkPublishedLink");
static_assert(offsetof(FVkPublishedLink, LinkCode) == 0x000000, "Member 'FVkPublishedLink::LinkCode' has a wrong offset!");
static_assert(offsetof(FVkPublishedLink, LinkVersion) == 0x000010, "Member 'FVkPublishedLink::LinkVersion' has a wrong offset!");
static_assert(offsetof(FVkPublishedLink, LastPublished) == 0x000018, "Member 'FVkPublishedLink::LastPublished' has a wrong offset!");
static_assert(offsetof(FVkPublishedLink, Base) == 0x000020, "Member 'FVkPublishedLink::Base' has a wrong offset!");
static_assert(offsetof(FVkPublishedLink, CommitMessage) == 0x000030, "Member 'FVkPublishedLink::CommitMessage' has a wrong offset!");

struct FVkLaunchData_JoinMatchmakingSession final
{
public:
	class FString                                 SessionId;
};
static_assert(alignof(FVkLaunchData_JoinMatchmakingSession) == 0x000008, "Wrong alignment on FVkLaunchData_JoinMatchmakingSession");
static_assert(sizeof(FVkLaunchData_JoinMatchmakingSession) == 0x000010, "Wrong size on FVkLaunchData_JoinMatchmakingSession");
static_assert(offsetof(FVkLaunchData_JoinMatchmakingSession, SessionId) == 0x000000, "Member 'FVkLaunchData_JoinMatchmakingSession::SessionId' has a wrong offset!");

struct alignas(0x08) FValkyrieProjectDescriptorIOContext final
{
public:
	uint8                                         Pad_0[0x40];
};
static_assert(alignof(FValkyrieProjectDescriptorIOContext) == 0x000008, "Wrong alignment on FValkyrieProjectDescriptorIOContext");
static_assert(sizeof(FValkyrieProjectDescriptorIOContext) == 0x000040, "Wrong size on FValkyrieProjectDescriptorIOContext");

struct FVkNamedId final
{
public:
	class FString                                 Name;
	class FString                                 ID;
};
static_assert(alignof(FVkNamedId) == 0x000008, "Wrong alignment on FVkNamedId");
static_assert(sizeof(FVkNamedId) == 0x000020, "Wrong size on FVkNamedId");
static_assert(offsetof(FVkNamedId, Name) == 0x000000, "Member 'FVkNamedId::Name' has a wrong offset!");
static_assert(offsetof(FVkNamedId, ID) == 0x000010, "Member 'FVkNamedId::ID' has a wrong offset!");

struct FVkTypedId final
{
public:
	class FString                                 ID;
	EVkIdType                                     Type;
	uint8                                         Pad_11[0x7];
};
static_assert(alignof(FVkTypedId) == 0x000008, "Wrong alignment on FVkTypedId");
static_assert(sizeof(FVkTypedId) == 0x000018, "Wrong size on FVkTypedId");
static_assert(offsetof(FVkTypedId, ID) == 0x000000, "Member 'FVkTypedId::ID' has a wrong offset!");
static_assert(offsetof(FVkTypedId, Type) == 0x000010, "Member 'FVkTypedId::Type' has a wrong offset!");

struct FVkVersionedLinkCode final
{
public:
	class FString                                 Mnemonic;
	int32                                         Version;
	uint8                                         Pad_14[0x4];
};
static_assert(alignof(FVkVersionedLinkCode) == 0x000008, "Wrong alignment on FVkVersionedLinkCode");
static_assert(sizeof(FVkVersionedLinkCode) == 0x000018, "Wrong size on FVkVersionedLinkCode");
static_assert(offsetof(FVkVersionedLinkCode, Mnemonic) == 0x000000, "Member 'FVkVersionedLinkCode::Mnemonic' has a wrong offset!");
static_assert(offsetof(FVkVersionedLinkCode, Version) == 0x000010, "Member 'FVkVersionedLinkCode::Version' has a wrong offset!");

struct FVkContentFilter final
{
public:
	class FString                                 Platform;
};
static_assert(alignof(FVkContentFilter) == 0x000008, "Wrong alignment on FVkContentFilter");
static_assert(sizeof(FVkContentFilter) == 0x000010, "Wrong size on FVkContentFilter");
static_assert(offsetof(FVkContentFilter, Platform) == 0x000000, "Member 'FVkContentFilter::Platform' has a wrong offset!");

struct FVkArtifactOption final
{
public:
	class FString                                 ArtifactId;
	EConsumerRole                                 Role;
	uint8                                         Pad_11[0x7];
	struct FVkContentFilter                       Filter;
};
static_assert(alignof(FVkArtifactOption) == 0x000008, "Wrong alignment on FVkArtifactOption");
static_assert(sizeof(FVkArtifactOption) == 0x000028, "Wrong size on FVkArtifactOption");
static_assert(offsetof(FVkArtifactOption, ArtifactId) == 0x000000, "Member 'FVkArtifactOption::ArtifactId' has a wrong offset!");
static_assert(offsetof(FVkArtifactOption, Role) == 0x000010, "Member 'FVkArtifactOption::Role' has a wrong offset!");
static_assert(offsetof(FVkArtifactOption, Filter) == 0x000018, "Member 'FVkArtifactOption::Filter' has a wrong offset!");

struct FVkFoundMatchingArtifact final
{
public:
	class FString                                 ArtifactId;
	class FString                                 Name;
	struct FVkContentFilter                       Filter;
};
static_assert(alignof(FVkFoundMatchingArtifact) == 0x000008, "Wrong alignment on FVkFoundMatchingArtifact");
static_assert(sizeof(FVkFoundMatchingArtifact) == 0x000030, "Wrong size on FVkFoundMatchingArtifact");
static_assert(offsetof(FVkFoundMatchingArtifact, ArtifactId) == 0x000000, "Member 'FVkFoundMatchingArtifact::ArtifactId' has a wrong offset!");
static_assert(offsetof(FVkFoundMatchingArtifact, Name) == 0x000010, "Member 'FVkFoundMatchingArtifact::Name' has a wrong offset!");
static_assert(offsetof(FVkFoundMatchingArtifact, Filter) == 0x000020, "Member 'FVkFoundMatchingArtifact::Filter' has a wrong offset!");

struct FVkModuleVersion
{
public:
	class FString                                 ModuleId;
	int32                                         Version;
	uint8                                         Pad_14[0x4];
};
static_assert(alignof(FVkModuleVersion) == 0x000008, "Wrong alignment on FVkModuleVersion");
static_assert(sizeof(FVkModuleVersion) == 0x000018, "Wrong size on FVkModuleVersion");
static_assert(offsetof(FVkModuleVersion, ModuleId) == 0x000000, "Member 'FVkModuleVersion::ModuleId' has a wrong offset!");
static_assert(offsetof(FVkModuleVersion, Version) == 0x000010, "Member 'FVkModuleVersion::Version' has a wrong offset!");

struct FVkModuleVersionRef final
{
public:
	class FString                                 ModuleId;
	int32                                         Version;
	uint8                                         Pad_14[0x4];
};
static_assert(alignof(FVkModuleVersionRef) == 0x000008, "Wrong alignment on FVkModuleVersionRef");
static_assert(sizeof(FVkModuleVersionRef) == 0x000018, "Wrong size on FVkModuleVersionRef");
static_assert(offsetof(FVkModuleVersionRef, ModuleId) == 0x000000, "Member 'FVkModuleVersionRef::ModuleId' has a wrong offset!");
static_assert(offsetof(FVkModuleVersionRef, Version) == 0x000010, "Member 'FVkModuleVersionRef::Version' has a wrong offset!");

struct FVkModuleVersionWithArtifacts final : public FVkModuleVersion
{
public:
	TArray<struct FVkArtifactOption>              Artifacts;
};
static_assert(alignof(FVkModuleVersionWithArtifacts) == 0x000008, "Wrong alignment on FVkModuleVersionWithArtifacts");
static_assert(sizeof(FVkModuleVersionWithArtifacts) == 0x000028, "Wrong size on FVkModuleVersionWithArtifacts");
static_assert(offsetof(FVkModuleVersionWithArtifacts, Artifacts) == 0x000018, "Member 'FVkModuleVersionWithArtifacts::Artifacts' has a wrong offset!");

struct FVkModuleDoc final
{
public:
	class FString                                 ModuleId;
	struct FDateTime                              Created;
	struct FDateTime                              Updated;
	struct FVkTypedId                             Author;
	class FString                                 ProjectID;
	class FString                                 ModuleName;
	class FString                                 ContentType;
	TMap<EConsumerRole, bool>                     Relevance;
	class FString                                 AliasForModuleId;
	struct FJsonObjectWrapper                     Meta;
	int32                                         LatestVersion;
	uint8                                         Pad_EC[0x4];
};
static_assert(alignof(FVkModuleDoc) == 0x000008, "Wrong alignment on FVkModuleDoc");
static_assert(sizeof(FVkModuleDoc) == 0x0000F0, "Wrong size on FVkModuleDoc");
static_assert(offsetof(FVkModuleDoc, ModuleId) == 0x000000, "Member 'FVkModuleDoc::ModuleId' has a wrong offset!");
static_assert(offsetof(FVkModuleDoc, Created) == 0x000010, "Member 'FVkModuleDoc::Created' has a wrong offset!");
static_assert(offsetof(FVkModuleDoc, Updated) == 0x000018, "Member 'FVkModuleDoc::Updated' has a wrong offset!");
static_assert(offsetof(FVkModuleDoc, Author) == 0x000020, "Member 'FVkModuleDoc::Author' has a wrong offset!");
static_assert(offsetof(FVkModuleDoc, ProjectID) == 0x000038, "Member 'FVkModuleDoc::ProjectID' has a wrong offset!");
static_assert(offsetof(FVkModuleDoc, ModuleName) == 0x000048, "Member 'FVkModuleDoc::ModuleName' has a wrong offset!");
static_assert(offsetof(FVkModuleDoc, ContentType) == 0x000058, "Member 'FVkModuleDoc::ContentType' has a wrong offset!");
static_assert(offsetof(FVkModuleDoc, Relevance) == 0x000068, "Member 'FVkModuleDoc::Relevance' has a wrong offset!");
static_assert(offsetof(FVkModuleDoc, AliasForModuleId) == 0x0000B8, "Member 'FVkModuleDoc::AliasForModuleId' has a wrong offset!");
static_assert(offsetof(FVkModuleDoc, Meta) == 0x0000C8, "Member 'FVkModuleDoc::Meta' has a wrong offset!");
static_assert(offsetof(FVkModuleDoc, LatestVersion) == 0x0000E8, "Member 'FVkModuleDoc::LatestVersion' has a wrong offset!");

struct FVkContentPackage final
{
public:
	class FString                                 ProjectID;
	TMap<class FString, class FString>            ProjectFlags;
	TArray<struct FVkModuleVersionWithArtifacts>  Content;
};
static_assert(alignof(FVkContentPackage) == 0x000008, "Wrong alignment on FVkContentPackage");
static_assert(sizeof(FVkContentPackage) == 0x000070, "Wrong size on FVkContentPackage");
static_assert(offsetof(FVkContentPackage, ProjectID) == 0x000000, "Member 'FVkContentPackage::ProjectID' has a wrong offset!");
static_assert(offsetof(FVkContentPackage, ProjectFlags) == 0x000010, "Member 'FVkContentPackage::ProjectFlags' has a wrong offset!");
static_assert(offsetof(FVkContentPackage, Content) == 0x000060, "Member 'FVkContentPackage::Content' has a wrong offset!");

struct FVkModuleBinaries final
{
public:
	class FString                                 BaseUrl;
	class FString                                 manifest;
	TArray<class FString>                         Files;
	double                                        TotalSizeKb;
	double                                        ManifestSizeKb;
	double                                        ManifestDiskSizeKb;
	double                                        ManifestDownloadSizeKb;
};
static_assert(alignof(FVkModuleBinaries) == 0x000008, "Wrong alignment on FVkModuleBinaries");
static_assert(sizeof(FVkModuleBinaries) == 0x000050, "Wrong size on FVkModuleBinaries");
static_assert(offsetof(FVkModuleBinaries, BaseUrl) == 0x000000, "Member 'FVkModuleBinaries::BaseUrl' has a wrong offset!");
static_assert(offsetof(FVkModuleBinaries, manifest) == 0x000010, "Member 'FVkModuleBinaries::manifest' has a wrong offset!");
static_assert(offsetof(FVkModuleBinaries, Files) == 0x000020, "Member 'FVkModuleBinaries::Files' has a wrong offset!");
static_assert(offsetof(FVkModuleBinaries, TotalSizeKb) == 0x000030, "Member 'FVkModuleBinaries::TotalSizeKb' has a wrong offset!");
static_assert(offsetof(FVkModuleBinaries, ManifestSizeKb) == 0x000038, "Member 'FVkModuleBinaries::ManifestSizeKb' has a wrong offset!");
static_assert(offsetof(FVkModuleBinaries, ManifestDiskSizeKb) == 0x000040, "Member 'FVkModuleBinaries::ManifestDiskSizeKb' has a wrong offset!");
static_assert(offsetof(FVkModuleBinaries, ManifestDownloadSizeKb) == 0x000048, "Member 'FVkModuleBinaries::ManifestDownloadSizeKb' has a wrong offset!");

struct FVkResolvedModule final
{
public:
	class FString                                 ModuleId;
	int32                                         Version;
	uint8                                         Pad_14[0x4];
	class FString                                 ArtifactId;
	class FString                                 CookJobId;
	struct FVkModuleBinaries                      Binaries;
};
static_assert(alignof(FVkResolvedModule) == 0x000008, "Wrong alignment on FVkResolvedModule");
static_assert(sizeof(FVkResolvedModule) == 0x000088, "Wrong size on FVkResolvedModule");
static_assert(offsetof(FVkResolvedModule, ModuleId) == 0x000000, "Member 'FVkResolvedModule::ModuleId' has a wrong offset!");
static_assert(offsetof(FVkResolvedModule, Version) == 0x000010, "Member 'FVkResolvedModule::Version' has a wrong offset!");
static_assert(offsetof(FVkResolvedModule, ArtifactId) == 0x000018, "Member 'FVkResolvedModule::ArtifactId' has a wrong offset!");
static_assert(offsetof(FVkResolvedModule, CookJobId) == 0x000028, "Member 'FVkResolvedModule::CookJobId' has a wrong offset!");
static_assert(offsetof(FVkResolvedModule, Binaries) == 0x000038, "Member 'FVkResolvedModule::Binaries' has a wrong offset!");

struct FVkFileSize final
{
public:
	TArray<class FString>                         Types;
	int64                                         SourceSize;
	int64                                         UncompressedSize;
	int64                                         CompressedSize;
};
static_assert(alignof(FVkFileSize) == 0x000008, "Wrong alignment on FVkFileSize");
static_assert(sizeof(FVkFileSize) == 0x000028, "Wrong size on FVkFileSize");
static_assert(offsetof(FVkFileSize, Types) == 0x000000, "Member 'FVkFileSize::Types' has a wrong offset!");
static_assert(offsetof(FVkFileSize, SourceSize) == 0x000010, "Member 'FVkFileSize::SourceSize' has a wrong offset!");
static_assert(offsetof(FVkFileSize, UncompressedSize) == 0x000018, "Member 'FVkFileSize::UncompressedSize' has a wrong offset!");
static_assert(offsetof(FVkFileSize, CompressedSize) == 0x000020, "Member 'FVkFileSize::CompressedSize' has a wrong offset!");

struct FVkFileSizes final
{
public:
	TMap<class FString, struct FVkFileSize>       FileSizeMap;
};
static_assert(alignof(FVkFileSizes) == 0x000008, "Wrong alignment on FVkFileSizes");
static_assert(sizeof(FVkFileSizes) == 0x000050, "Wrong size on FVkFileSizes");
static_assert(offsetof(FVkFileSizes, FileSizeMap) == 0x000000, "Member 'FVkFileSizes::FileSizeMap' has a wrong offset!");

struct FVkExtendedErrorParam final
{
public:
	class FString                                 Key;
	class FString                                 Value;
};
static_assert(alignof(FVkExtendedErrorParam) == 0x000008, "Wrong alignment on FVkExtendedErrorParam");
static_assert(sizeof(FVkExtendedErrorParam) == 0x000020, "Wrong size on FVkExtendedErrorParam");
static_assert(offsetof(FVkExtendedErrorParam, Key) == 0x000000, "Member 'FVkExtendedErrorParam::Key' has a wrong offset!");
static_assert(offsetof(FVkExtendedErrorParam, Value) == 0x000010, "Member 'FVkExtendedErrorParam::Value' has a wrong offset!");

struct FVkExtendedError final
{
public:
	class FString                                 FormatKey;
	class FString                                 FormatNamespace;
	class FString                                 message;
	TArray<struct FVkExtendedErrorParam>          Params;
};
static_assert(alignof(FVkExtendedError) == 0x000008, "Wrong alignment on FVkExtendedError");
static_assert(sizeof(FVkExtendedError) == 0x000040, "Wrong size on FVkExtendedError");
static_assert(offsetof(FVkExtendedError, FormatKey) == 0x000000, "Member 'FVkExtendedError::FormatKey' has a wrong offset!");
static_assert(offsetof(FVkExtendedError, FormatNamespace) == 0x000010, "Member 'FVkExtendedError::FormatNamespace' has a wrong offset!");
static_assert(offsetof(FVkExtendedError, message) == 0x000020, "Member 'FVkExtendedError::message' has a wrong offset!");
static_assert(offsetof(FVkExtendedError, Params) == 0x000030, "Member 'FVkExtendedError::Params' has a wrong offset!");

struct FVkExtendedErrorInformation final
{
public:
	class FString                                 ErrorCode;
	class FString                                 ErrorMessage;
	TArray<struct FVkExtendedError>               AdditionalErrors;
};
static_assert(alignof(FVkExtendedErrorInformation) == 0x000008, "Wrong alignment on FVkExtendedErrorInformation");
static_assert(sizeof(FVkExtendedErrorInformation) == 0x000030, "Wrong size on FVkExtendedErrorInformation");
static_assert(offsetof(FVkExtendedErrorInformation, ErrorCode) == 0x000000, "Member 'FVkExtendedErrorInformation::ErrorCode' has a wrong offset!");
static_assert(offsetof(FVkExtendedErrorInformation, ErrorMessage) == 0x000010, "Member 'FVkExtendedErrorInformation::ErrorMessage' has a wrong offset!");
static_assert(offsetof(FVkExtendedErrorInformation, AdditionalErrors) == 0x000020, "Member 'FVkExtendedErrorInformation::AdditionalErrors' has a wrong offset!");

struct FVkTicketDetails final
{
public:
	EVkTicketStatus                               Status;
	uint8                                         Pad_1[0x7];
	struct FDateTime                              StartDate;
	struct FDateTime                              EndDate;
	struct FVkExtendedErrorInformation            Error;
};
static_assert(alignof(FVkTicketDetails) == 0x000008, "Wrong alignment on FVkTicketDetails");
static_assert(sizeof(FVkTicketDetails) == 0x000048, "Wrong size on FVkTicketDetails");
static_assert(offsetof(FVkTicketDetails, Status) == 0x000000, "Member 'FVkTicketDetails::Status' has a wrong offset!");
static_assert(offsetof(FVkTicketDetails, StartDate) == 0x000008, "Member 'FVkTicketDetails::StartDate' has a wrong offset!");
static_assert(offsetof(FVkTicketDetails, EndDate) == 0x000010, "Member 'FVkTicketDetails::EndDate' has a wrong offset!");
static_assert(offsetof(FVkTicketDetails, Error) == 0x000018, "Member 'FVkTicketDetails::Error' has a wrong offset!");

struct FVkVersePath
{
public:
	class FString                                 VersePath;
	class FString                                 URL;
};
static_assert(alignof(FVkVersePath) == 0x000008, "Wrong alignment on FVkVersePath");
static_assert(sizeof(FVkVersePath) == 0x000020, "Wrong size on FVkVersePath");
static_assert(offsetof(FVkVersePath, VersePath) == 0x000000, "Member 'FVkVersePath::VersePath' has a wrong offset!");
static_assert(offsetof(FVkVersePath, URL) == 0x000010, "Member 'FVkVersePath::URL' has a wrong offset!");

struct FVkVersePathTarget final
{
public:
	class FString                                 ProjectID;
	struct FVkVersionedLinkCode                   LinkCode;
};
static_assert(alignof(FVkVersePathTarget) == 0x000008, "Wrong alignment on FVkVersePathTarget");
static_assert(sizeof(FVkVersePathTarget) == 0x000028, "Wrong size on FVkVersePathTarget");
static_assert(offsetof(FVkVersePathTarget, ProjectID) == 0x000000, "Member 'FVkVersePathTarget::ProjectID' has a wrong offset!");
static_assert(offsetof(FVkVersePathTarget, LinkCode) == 0x000010, "Member 'FVkVersePathTarget::LinkCode' has a wrong offset!");

struct FVkResolvedVersePath final : public FVkVersePath
{
public:
	struct FVkVersePathTarget                     Target;
};
static_assert(alignof(FVkResolvedVersePath) == 0x000008, "Wrong alignment on FVkResolvedVersePath");
static_assert(sizeof(FVkResolvedVersePath) == 0x000048, "Wrong size on FVkResolvedVersePath");
static_assert(offsetof(FVkResolvedVersePath, Target) == 0x000020, "Member 'FVkResolvedVersePath::Target' has a wrong offset!");

struct FVkContentManifest final
{
public:
	TArray<struct FVkResolvedModule>              Content;
};
static_assert(alignof(FVkContentManifest) == 0x000008, "Wrong alignment on FVkContentManifest");
static_assert(sizeof(FVkContentManifest) == 0x000010, "Wrong size on FVkContentManifest");
static_assert(offsetof(FVkContentManifest, Content) == 0x000000, "Member 'FVkContentManifest::Content' has a wrong offset!");

struct FVkBuildVersion final
{
public:
	class FString                                 Major;
	int32                                         Minor;
	int32                                         Patch;
};
static_assert(alignof(FVkBuildVersion) == 0x000008, "Wrong alignment on FVkBuildVersion");
static_assert(sizeof(FVkBuildVersion) == 0x000018, "Wrong size on FVkBuildVersion");
static_assert(offsetof(FVkBuildVersion, Major) == 0x000000, "Member 'FVkBuildVersion::Major' has a wrong offset!");
static_assert(offsetof(FVkBuildVersion, Minor) == 0x000010, "Member 'FVkBuildVersion::Minor' has a wrong offset!");
static_assert(offsetof(FVkBuildVersion, Patch) == 0x000014, "Member 'FVkBuildVersion::Patch' has a wrong offset!");

struct FVkJobOutput final
{
public:
	class FString                                 BaseUrl;
	double                                        TotalSizeKb;
	double                                        UserContentTotalSizeKb;
	TArray<class FString>                         Files;
	class FString                                 manifest;
};
static_assert(alignof(FVkJobOutput) == 0x000008, "Wrong alignment on FVkJobOutput");
static_assert(sizeof(FVkJobOutput) == 0x000040, "Wrong size on FVkJobOutput");
static_assert(offsetof(FVkJobOutput, BaseUrl) == 0x000000, "Member 'FVkJobOutput::BaseUrl' has a wrong offset!");
static_assert(offsetof(FVkJobOutput, TotalSizeKb) == 0x000010, "Member 'FVkJobOutput::TotalSizeKb' has a wrong offset!");
static_assert(offsetof(FVkJobOutput, UserContentTotalSizeKb) == 0x000018, "Member 'FVkJobOutput::UserContentTotalSizeKb' has a wrong offset!");
static_assert(offsetof(FVkJobOutput, Files) == 0x000020, "Member 'FVkJobOutput::Files' has a wrong offset!");
static_assert(offsetof(FVkJobOutput, manifest) == 0x000030, "Member 'FVkJobOutput::manifest' has a wrong offset!");

struct FVkModuleVersionDoc final
{
public:
	class FString                                 ModuleId;
	int32                                         Version;
	uint8                                         Pad_14[0x4];
	class FString                                 ProjectID;
	EVkModuleAccess                               Access;
	uint8                                         Pad_29[0x7];
	struct FDateTime                              Created;
	struct FVkTypedId                             Author;
	struct FJsonObjectWrapper                     Meta;
	TArray<struct FVkModuleVersionRef>            Dependencies;
	struct FVkJobOutput                           StagedFiles;
	struct FVkBuildVersion                        SourceVersion;
	class FString                                 ContentType;
	TMap<EConsumerRole, bool>                     Relevance;
	class FString                                 ArtifactKey;
	class FString                                 Checksum;
	TArray<struct FVkArtifactOption>              Artifacts;
};
static_assert(alignof(FVkModuleVersionDoc) == 0x000008, "Wrong alignment on FVkModuleVersionDoc");
static_assert(sizeof(FVkModuleVersionDoc) == 0x000168, "Wrong size on FVkModuleVersionDoc");
static_assert(offsetof(FVkModuleVersionDoc, ModuleId) == 0x000000, "Member 'FVkModuleVersionDoc::ModuleId' has a wrong offset!");
static_assert(offsetof(FVkModuleVersionDoc, Version) == 0x000010, "Member 'FVkModuleVersionDoc::Version' has a wrong offset!");
static_assert(offsetof(FVkModuleVersionDoc, ProjectID) == 0x000018, "Member 'FVkModuleVersionDoc::ProjectID' has a wrong offset!");
static_assert(offsetof(FVkModuleVersionDoc, Access) == 0x000028, "Member 'FVkModuleVersionDoc::Access' has a wrong offset!");
static_assert(offsetof(FVkModuleVersionDoc, Created) == 0x000030, "Member 'FVkModuleVersionDoc::Created' has a wrong offset!");
static_assert(offsetof(FVkModuleVersionDoc, Author) == 0x000038, "Member 'FVkModuleVersionDoc::Author' has a wrong offset!");
static_assert(offsetof(FVkModuleVersionDoc, Meta) == 0x000050, "Member 'FVkModuleVersionDoc::Meta' has a wrong offset!");
static_assert(offsetof(FVkModuleVersionDoc, Dependencies) == 0x000070, "Member 'FVkModuleVersionDoc::Dependencies' has a wrong offset!");
static_assert(offsetof(FVkModuleVersionDoc, StagedFiles) == 0x000080, "Member 'FVkModuleVersionDoc::StagedFiles' has a wrong offset!");
static_assert(offsetof(FVkModuleVersionDoc, SourceVersion) == 0x0000C0, "Member 'FVkModuleVersionDoc::SourceVersion' has a wrong offset!");
static_assert(offsetof(FVkModuleVersionDoc, ContentType) == 0x0000D8, "Member 'FVkModuleVersionDoc::ContentType' has a wrong offset!");
static_assert(offsetof(FVkModuleVersionDoc, Relevance) == 0x0000E8, "Member 'FVkModuleVersionDoc::Relevance' has a wrong offset!");
static_assert(offsetof(FVkModuleVersionDoc, ArtifactKey) == 0x000138, "Member 'FVkModuleVersionDoc::ArtifactKey' has a wrong offset!");
static_assert(offsetof(FVkModuleVersionDoc, Checksum) == 0x000148, "Member 'FVkModuleVersionDoc::Checksum' has a wrong offset!");
static_assert(offsetof(FVkModuleVersionDoc, Artifacts) == 0x000158, "Member 'FVkModuleVersionDoc::Artifacts' has a wrong offset!");

struct FVkProjectDoc final
{
public:
	class FString                                 ProjectID;
	struct FDateTime                              Created;
	struct FVkTypedId                             Author;
	struct FVkTypedId                             Owner;
	struct FJsonObjectWrapper                     Meta;
	struct FJsonObjectWrapper                     SysMeta;
	struct FVkPublishedLink                       LiveLink;
};
static_assert(alignof(FVkProjectDoc) == 0x000008, "Wrong alignment on FVkProjectDoc");
static_assert(sizeof(FVkProjectDoc) == 0x0000C8, "Wrong size on FVkProjectDoc");
static_assert(offsetof(FVkProjectDoc, ProjectID) == 0x000000, "Member 'FVkProjectDoc::ProjectID' has a wrong offset!");
static_assert(offsetof(FVkProjectDoc, Created) == 0x000010, "Member 'FVkProjectDoc::Created' has a wrong offset!");
static_assert(offsetof(FVkProjectDoc, Author) == 0x000018, "Member 'FVkProjectDoc::Author' has a wrong offset!");
static_assert(offsetof(FVkProjectDoc, Owner) == 0x000030, "Member 'FVkProjectDoc::Owner' has a wrong offset!");
static_assert(offsetof(FVkProjectDoc, Meta) == 0x000048, "Member 'FVkProjectDoc::Meta' has a wrong offset!");
static_assert(offsetof(FVkProjectDoc, SysMeta) == 0x000068, "Member 'FVkProjectDoc::SysMeta' has a wrong offset!");
static_assert(offsetof(FVkProjectDoc, LiveLink) == 0x000088, "Member 'FVkProjectDoc::LiveLink' has a wrong offset!");

struct FVkProjectLimitsDoc final
{
public:
	int64                                         PublishingMemorySize;
	int64                                         PublishingDownloadSize;
	int64                                         ProjectUploadSize;
	int32                                         ModuleUploadConcurrencyLimit;
	uint8                                         Pad_1C[0x4];
	int64                                         FileCount;
	int64                                         IndividualFileSizeKb;
};
static_assert(alignof(FVkProjectLimitsDoc) == 0x000008, "Wrong alignment on FVkProjectLimitsDoc");
static_assert(sizeof(FVkProjectLimitsDoc) == 0x000030, "Wrong size on FVkProjectLimitsDoc");
static_assert(offsetof(FVkProjectLimitsDoc, PublishingMemorySize) == 0x000000, "Member 'FVkProjectLimitsDoc::PublishingMemorySize' has a wrong offset!");
static_assert(offsetof(FVkProjectLimitsDoc, PublishingDownloadSize) == 0x000008, "Member 'FVkProjectLimitsDoc::PublishingDownloadSize' has a wrong offset!");
static_assert(offsetof(FVkProjectLimitsDoc, ProjectUploadSize) == 0x000010, "Member 'FVkProjectLimitsDoc::ProjectUploadSize' has a wrong offset!");
static_assert(offsetof(FVkProjectLimitsDoc, ModuleUploadConcurrencyLimit) == 0x000018, "Member 'FVkProjectLimitsDoc::ModuleUploadConcurrencyLimit' has a wrong offset!");
static_assert(offsetof(FVkProjectLimitsDoc, FileCount) == 0x000020, "Member 'FVkProjectLimitsDoc::FileCount' has a wrong offset!");
static_assert(offsetof(FVkProjectLimitsDoc, IndividualFileSizeKb) == 0x000028, "Member 'FVkProjectLimitsDoc::IndividualFileSizeKb' has a wrong offset!");

struct FVkProjectUserInfo final
{
public:
	class FString                                 ProjectID;
	class FString                                 AccountId;
	class FString                                 Title;
	bool                                          HasStar;
	uint8                                         Pad_31[0x7];
	TMap<class FString, bool>                     Access;
	struct FVkPublishedLink                       PlaytestLink;
	TArray<class FString>                         Permissions;
};
static_assert(alignof(FVkProjectUserInfo) == 0x000008, "Wrong alignment on FVkProjectUserInfo");
static_assert(sizeof(FVkProjectUserInfo) == 0x0000D8, "Wrong size on FVkProjectUserInfo");
static_assert(offsetof(FVkProjectUserInfo, ProjectID) == 0x000000, "Member 'FVkProjectUserInfo::ProjectID' has a wrong offset!");
static_assert(offsetof(FVkProjectUserInfo, AccountId) == 0x000010, "Member 'FVkProjectUserInfo::AccountId' has a wrong offset!");
static_assert(offsetof(FVkProjectUserInfo, Title) == 0x000020, "Member 'FVkProjectUserInfo::Title' has a wrong offset!");
static_assert(offsetof(FVkProjectUserInfo, HasStar) == 0x000030, "Member 'FVkProjectUserInfo::HasStar' has a wrong offset!");
static_assert(offsetof(FVkProjectUserInfo, Access) == 0x000038, "Member 'FVkProjectUserInfo::Access' has a wrong offset!");
static_assert(offsetof(FVkProjectUserInfo, PlaytestLink) == 0x000088, "Member 'FVkProjectUserInfo::PlaytestLink' has a wrong offset!");
static_assert(offsetof(FVkProjectUserInfo, Permissions) == 0x0000C8, "Member 'FVkProjectUserInfo::Permissions' has a wrong offset!");

struct FVkCreateProjectRequest final
{
public:
	class FString                                 DesiredProjectId;
	struct FJsonObjectWrapper                     Meta;
	struct FJsonObjectWrapper                     SysMeta;
};
static_assert(alignof(FVkCreateProjectRequest) == 0x000008, "Wrong alignment on FVkCreateProjectRequest");
static_assert(sizeof(FVkCreateProjectRequest) == 0x000050, "Wrong size on FVkCreateProjectRequest");
static_assert(offsetof(FVkCreateProjectRequest, DesiredProjectId) == 0x000000, "Member 'FVkCreateProjectRequest::DesiredProjectId' has a wrong offset!");
static_assert(offsetof(FVkCreateProjectRequest, Meta) == 0x000010, "Member 'FVkCreateProjectRequest::Meta' has a wrong offset!");
static_assert(offsetof(FVkCreateProjectRequest, SysMeta) == 0x000030, "Member 'FVkCreateProjectRequest::SysMeta' has a wrong offset!");

struct FVkTransferProjectRequest final
{
public:
	class FString                                 TeamId;
};
static_assert(alignof(FVkTransferProjectRequest) == 0x000008, "Wrong alignment on FVkTransferProjectRequest");
static_assert(sizeof(FVkTransferProjectRequest) == 0x000010, "Wrong size on FVkTransferProjectRequest");
static_assert(offsetof(FVkTransferProjectRequest, TeamId) == 0x000000, "Member 'FVkTransferProjectRequest::TeamId' has a wrong offset!");

struct FVkCreateModuleVersionRequest final
{
public:
	TMap<class FString, class FString>            RawFiles;
	TArray<struct FVkModuleVersionRef>            Dependencies;
	struct FJsonObjectWrapper                     Meta;
	class FString                                 Checksum;
	class FString                                 ManifestLink;
};
static_assert(alignof(FVkCreateModuleVersionRequest) == 0x000008, "Wrong alignment on FVkCreateModuleVersionRequest");
static_assert(sizeof(FVkCreateModuleVersionRequest) == 0x0000A0, "Wrong size on FVkCreateModuleVersionRequest");
static_assert(offsetof(FVkCreateModuleVersionRequest, RawFiles) == 0x000000, "Member 'FVkCreateModuleVersionRequest::RawFiles' has a wrong offset!");
static_assert(offsetof(FVkCreateModuleVersionRequest, Dependencies) == 0x000050, "Member 'FVkCreateModuleVersionRequest::Dependencies' has a wrong offset!");
static_assert(offsetof(FVkCreateModuleVersionRequest, Meta) == 0x000060, "Member 'FVkCreateModuleVersionRequest::Meta' has a wrong offset!");
static_assert(offsetof(FVkCreateModuleVersionRequest, Checksum) == 0x000080, "Member 'FVkCreateModuleVersionRequest::Checksum' has a wrong offset!");
static_assert(offsetof(FVkCreateModuleVersionRequest, ManifestLink) == 0x000090, "Member 'FVkCreateModuleVersionRequest::ManifestLink' has a wrong offset!");

struct FVkResolvedContent
{
public:
	struct FVkModuleVersionRef                    Root;
	TMap<class FString, int32>                    Resolutions;
};
static_assert(alignof(FVkResolvedContent) == 0x000008, "Wrong alignment on FVkResolvedContent");
static_assert(sizeof(FVkResolvedContent) == 0x000068, "Wrong size on FVkResolvedContent");
static_assert(offsetof(FVkResolvedContent, Root) == 0x000000, "Member 'FVkResolvedContent::Root' has a wrong offset!");
static_assert(offsetof(FVkResolvedContent, Resolutions) == 0x000018, "Member 'FVkResolvedContent::Resolutions' has a wrong offset!");

struct FVkSnapshotSaveRequest final
{
public:
	struct FVkResolvedContent                     Content;
	TArray<struct FVkVersionedLinkCode>           Palette;
	class FString                                 MapPath;
	struct FJsonObjectWrapper                     MatchmakingConfig;
};
static_assert(alignof(FVkSnapshotSaveRequest) == 0x000008, "Wrong alignment on FVkSnapshotSaveRequest");
static_assert(sizeof(FVkSnapshotSaveRequest) == 0x0000A8, "Wrong size on FVkSnapshotSaveRequest");
static_assert(offsetof(FVkSnapshotSaveRequest, Content) == 0x000000, "Member 'FVkSnapshotSaveRequest::Content' has a wrong offset!");
static_assert(offsetof(FVkSnapshotSaveRequest, Palette) == 0x000068, "Member 'FVkSnapshotSaveRequest::Palette' has a wrong offset!");
static_assert(offsetof(FVkSnapshotSaveRequest, MapPath) == 0x000078, "Member 'FVkSnapshotSaveRequest::MapPath' has a wrong offset!");
static_assert(offsetof(FVkSnapshotSaveRequest, MatchmakingConfig) == 0x000088, "Member 'FVkSnapshotSaveRequest::MatchmakingConfig' has a wrong offset!");

struct FVkProjectSnapshot final
{
public:
	class FString                                 UniqueId;
	class FString                                 ProjectID;
	class FString                                 AccountId;
	struct FDateTime                              CreatedAt;
	int32                                         DeltaFileIndex;
	uint8                                         Pad_3C[0x4];
	struct FVkResolvedContent                     Content;
	TArray<struct FVkVersionedLinkCode>           Palette;
	class FString                                 MapPath;
	struct FJsonObjectWrapper                     MatchmakingConfig;
};
static_assert(alignof(FVkProjectSnapshot) == 0x000008, "Wrong alignment on FVkProjectSnapshot");
static_assert(sizeof(FVkProjectSnapshot) == 0x0000E8, "Wrong size on FVkProjectSnapshot");
static_assert(offsetof(FVkProjectSnapshot, UniqueId) == 0x000000, "Member 'FVkProjectSnapshot::UniqueId' has a wrong offset!");
static_assert(offsetof(FVkProjectSnapshot, ProjectID) == 0x000010, "Member 'FVkProjectSnapshot::ProjectID' has a wrong offset!");
static_assert(offsetof(FVkProjectSnapshot, AccountId) == 0x000020, "Member 'FVkProjectSnapshot::AccountId' has a wrong offset!");
static_assert(offsetof(FVkProjectSnapshot, CreatedAt) == 0x000030, "Member 'FVkProjectSnapshot::CreatedAt' has a wrong offset!");
static_assert(offsetof(FVkProjectSnapshot, DeltaFileIndex) == 0x000038, "Member 'FVkProjectSnapshot::DeltaFileIndex' has a wrong offset!");
static_assert(offsetof(FVkProjectSnapshot, Content) == 0x000040, "Member 'FVkProjectSnapshot::Content' has a wrong offset!");
static_assert(offsetof(FVkProjectSnapshot, Palette) == 0x0000A8, "Member 'FVkProjectSnapshot::Palette' has a wrong offset!");
static_assert(offsetof(FVkProjectSnapshot, MapPath) == 0x0000B8, "Member 'FVkProjectSnapshot::MapPath' has a wrong offset!");
static_assert(offsetof(FVkProjectSnapshot, MatchmakingConfig) == 0x0000C8, "Member 'FVkProjectSnapshot::MatchmakingConfig' has a wrong offset!");

struct FVkGenerateTestcodeRequest final
{
public:
	struct FVkResolvedContent                     Content;
	class FString                                 CommitMessage;
	struct FJsonObjectWrapper                     MatchmakingConfig;
	class FString                                 MatchmakingScheme;
};
static_assert(alignof(FVkGenerateTestcodeRequest) == 0x000008, "Wrong alignment on FVkGenerateTestcodeRequest");
static_assert(sizeof(FVkGenerateTestcodeRequest) == 0x0000A8, "Wrong size on FVkGenerateTestcodeRequest");
static_assert(offsetof(FVkGenerateTestcodeRequest, Content) == 0x000000, "Member 'FVkGenerateTestcodeRequest::Content' has a wrong offset!");
static_assert(offsetof(FVkGenerateTestcodeRequest, CommitMessage) == 0x000068, "Member 'FVkGenerateTestcodeRequest::CommitMessage' has a wrong offset!");
static_assert(offsetof(FVkGenerateTestcodeRequest, MatchmakingConfig) == 0x000078, "Member 'FVkGenerateTestcodeRequest::MatchmakingConfig' has a wrong offset!");
static_assert(offsetof(FVkGenerateTestcodeRequest, MatchmakingScheme) == 0x000098, "Member 'FVkGenerateTestcodeRequest::MatchmakingScheme' has a wrong offset!");

struct FVkProjectSearchResult final
{
public:
	class FString                                 ProjectID;
	struct FDateTime                              Created;
	struct FDateTime                              Accessed;
	struct FJsonObjectWrapper                     Meta;
	struct FJsonObjectWrapper                     SysMeta;
	class FString                                 LinkCode;
};
static_assert(alignof(FVkProjectSearchResult) == 0x000008, "Wrong alignment on FVkProjectSearchResult");
static_assert(sizeof(FVkProjectSearchResult) == 0x000070, "Wrong size on FVkProjectSearchResult");
static_assert(offsetof(FVkProjectSearchResult, ProjectID) == 0x000000, "Member 'FVkProjectSearchResult::ProjectID' has a wrong offset!");
static_assert(offsetof(FVkProjectSearchResult, Created) == 0x000010, "Member 'FVkProjectSearchResult::Created' has a wrong offset!");
static_assert(offsetof(FVkProjectSearchResult, Accessed) == 0x000018, "Member 'FVkProjectSearchResult::Accessed' has a wrong offset!");
static_assert(offsetof(FVkProjectSearchResult, Meta) == 0x000020, "Member 'FVkProjectSearchResult::Meta' has a wrong offset!");
static_assert(offsetof(FVkProjectSearchResult, SysMeta) == 0x000040, "Member 'FVkProjectSearchResult::SysMeta' has a wrong offset!");
static_assert(offsetof(FVkProjectSearchResult, LinkCode) == 0x000060, "Member 'FVkProjectSearchResult::LinkCode' has a wrong offset!");

struct FVkProjectInfoSlim final
{
public:
	struct FVkTypedId                             Owner;
	class FString                                 Title;
	class FString                                 Description;
	class FString                                 RcsProvider;
	struct FJsonObjectWrapper                     SysMeta;
};
static_assert(alignof(FVkProjectInfoSlim) == 0x000008, "Wrong alignment on FVkProjectInfoSlim");
static_assert(sizeof(FVkProjectInfoSlim) == 0x000068, "Wrong size on FVkProjectInfoSlim");
static_assert(offsetof(FVkProjectInfoSlim, Owner) == 0x000000, "Member 'FVkProjectInfoSlim::Owner' has a wrong offset!");
static_assert(offsetof(FVkProjectInfoSlim, Title) == 0x000018, "Member 'FVkProjectInfoSlim::Title' has a wrong offset!");
static_assert(offsetof(FVkProjectInfoSlim, Description) == 0x000028, "Member 'FVkProjectInfoSlim::Description' has a wrong offset!");
static_assert(offsetof(FVkProjectInfoSlim, RcsProvider) == 0x000038, "Member 'FVkProjectInfoSlim::RcsProvider' has a wrong offset!");
static_assert(offsetof(FVkProjectInfoSlim, SysMeta) == 0x000048, "Member 'FVkProjectInfoSlim::SysMeta' has a wrong offset!");

struct FVkProjectSearchResultSlim final
{
public:
	class FString                                 ProjectID;
	struct FDateTime                              Date;
	struct FVkProjectInfoSlim                     Info;
	bool                                          is_starred;
	bool                                          is_new;
	uint8                                         Pad_82[0x6];
};
static_assert(alignof(FVkProjectSearchResultSlim) == 0x000008, "Wrong alignment on FVkProjectSearchResultSlim");
static_assert(sizeof(FVkProjectSearchResultSlim) == 0x000088, "Wrong size on FVkProjectSearchResultSlim");
static_assert(offsetof(FVkProjectSearchResultSlim, ProjectID) == 0x000000, "Member 'FVkProjectSearchResultSlim::ProjectID' has a wrong offset!");
static_assert(offsetof(FVkProjectSearchResultSlim, Date) == 0x000010, "Member 'FVkProjectSearchResultSlim::Date' has a wrong offset!");
static_assert(offsetof(FVkProjectSearchResultSlim, Info) == 0x000018, "Member 'FVkProjectSearchResultSlim::Info' has a wrong offset!");
static_assert(offsetof(FVkProjectSearchResultSlim, is_starred) == 0x000080, "Member 'FVkProjectSearchResultSlim::is_starred' has a wrong offset!");
static_assert(offsetof(FVkProjectSearchResultSlim, is_new) == 0x000081, "Member 'FVkProjectSearchResultSlim::is_new' has a wrong offset!");

struct FVkTeamMembershipResult final
{
public:
	class FString                                 Name;
	TMap<class FString, bool>                     Access;
	class FString                                 Status;
	class FString                                 MembershipId;
	class FString                                 TeamId;
	class FString                                 AccountId;
	struct FDateTime                              Updated;
};
static_assert(alignof(FVkTeamMembershipResult) == 0x000008, "Wrong alignment on FVkTeamMembershipResult");
static_assert(sizeof(FVkTeamMembershipResult) == 0x0000A8, "Wrong size on FVkTeamMembershipResult");
static_assert(offsetof(FVkTeamMembershipResult, Name) == 0x000000, "Member 'FVkTeamMembershipResult::Name' has a wrong offset!");
static_assert(offsetof(FVkTeamMembershipResult, Access) == 0x000010, "Member 'FVkTeamMembershipResult::Access' has a wrong offset!");
static_assert(offsetof(FVkTeamMembershipResult, Status) == 0x000060, "Member 'FVkTeamMembershipResult::Status' has a wrong offset!");
static_assert(offsetof(FVkTeamMembershipResult, MembershipId) == 0x000070, "Member 'FVkTeamMembershipResult::MembershipId' has a wrong offset!");
static_assert(offsetof(FVkTeamMembershipResult, TeamId) == 0x000080, "Member 'FVkTeamMembershipResult::TeamId' has a wrong offset!");
static_assert(offsetof(FVkTeamMembershipResult, AccountId) == 0x000090, "Member 'FVkTeamMembershipResult::AccountId' has a wrong offset!");
static_assert(offsetof(FVkTeamMembershipResult, Updated) == 0x0000A0, "Member 'FVkTeamMembershipResult::Updated' has a wrong offset!");

struct FVkTeamAccessControl final
{
public:
	bool                                          Admin;
	bool                                          Edit;
	bool                                          Operate;
	bool                                          Publish;
};
static_assert(alignof(FVkTeamAccessControl) == 0x000001, "Wrong alignment on FVkTeamAccessControl");
static_assert(sizeof(FVkTeamAccessControl) == 0x000004, "Wrong size on FVkTeamAccessControl");
static_assert(offsetof(FVkTeamAccessControl, Admin) == 0x000000, "Member 'FVkTeamAccessControl::Admin' has a wrong offset!");
static_assert(offsetof(FVkTeamAccessControl, Edit) == 0x000001, "Member 'FVkTeamAccessControl::Edit' has a wrong offset!");
static_assert(offsetof(FVkTeamAccessControl, Operate) == 0x000002, "Member 'FVkTeamAccessControl::Operate' has a wrong offset!");
static_assert(offsetof(FVkTeamAccessControl, Publish) == 0x000003, "Member 'FVkTeamAccessControl::Publish' has a wrong offset!");

struct FVkTeamAuthorizedEmailDomain final
{
public:
	class FString                                 Domain;
	struct FVkTeamAccessControl                   Access;
	uint8                                         Pad_14[0x4];
};
static_assert(alignof(FVkTeamAuthorizedEmailDomain) == 0x000008, "Wrong alignment on FVkTeamAuthorizedEmailDomain");
static_assert(sizeof(FVkTeamAuthorizedEmailDomain) == 0x000018, "Wrong size on FVkTeamAuthorizedEmailDomain");
static_assert(offsetof(FVkTeamAuthorizedEmailDomain, Domain) == 0x000000, "Member 'FVkTeamAuthorizedEmailDomain::Domain' has a wrong offset!");
static_assert(offsetof(FVkTeamAuthorizedEmailDomain, Access) == 0x000010, "Member 'FVkTeamAuthorizedEmailDomain::Access' has a wrong offset!");

struct FVkTeamPublicProperties final
{
public:
	class FString                                 Name;
	class FString                                 Description;
	TArray<struct FVkTeamAuthorizedEmailDomain>   EmailDomains;
};
static_assert(alignof(FVkTeamPublicProperties) == 0x000008, "Wrong alignment on FVkTeamPublicProperties");
static_assert(sizeof(FVkTeamPublicProperties) == 0x000030, "Wrong size on FVkTeamPublicProperties");
static_assert(offsetof(FVkTeamPublicProperties, Name) == 0x000000, "Member 'FVkTeamPublicProperties::Name' has a wrong offset!");
static_assert(offsetof(FVkTeamPublicProperties, Description) == 0x000010, "Member 'FVkTeamPublicProperties::Description' has a wrong offset!");
static_assert(offsetof(FVkTeamPublicProperties, EmailDomains) == 0x000020, "Member 'FVkTeamPublicProperties::EmailDomains' has a wrong offset!");

struct FVkTeamDoc final
{
public:
	class FString                                 TeamId;
	struct FDateTime                              Created;
	struct FDateTime                              Updated;
	struct FVkTypedId                             Owner;
	struct FVkTeamPublicProperties                PublicProps;
	int32                                         MemberCount;
	uint8                                         Pad_6C[0x4];
	struct FJsonObjectWrapper                     SysMeta;
};
static_assert(alignof(FVkTeamDoc) == 0x000008, "Wrong alignment on FVkTeamDoc");
static_assert(sizeof(FVkTeamDoc) == 0x000090, "Wrong size on FVkTeamDoc");
static_assert(offsetof(FVkTeamDoc, TeamId) == 0x000000, "Member 'FVkTeamDoc::TeamId' has a wrong offset!");
static_assert(offsetof(FVkTeamDoc, Created) == 0x000010, "Member 'FVkTeamDoc::Created' has a wrong offset!");
static_assert(offsetof(FVkTeamDoc, Updated) == 0x000018, "Member 'FVkTeamDoc::Updated' has a wrong offset!");
static_assert(offsetof(FVkTeamDoc, Owner) == 0x000020, "Member 'FVkTeamDoc::Owner' has a wrong offset!");
static_assert(offsetof(FVkTeamDoc, PublicProps) == 0x000038, "Member 'FVkTeamDoc::PublicProps' has a wrong offset!");
static_assert(offsetof(FVkTeamDoc, MemberCount) == 0x000068, "Member 'FVkTeamDoc::MemberCount' has a wrong offset!");
static_assert(offsetof(FVkTeamDoc, SysMeta) == 0x000070, "Member 'FVkTeamDoc::SysMeta' has a wrong offset!");

struct FVkLaunchData_Link final
{
public:
	class FString                                 LinkCode;
	int32                                         Version;
	uint8                                         Pad_14[0x4];
};
static_assert(alignof(FVkLaunchData_Link) == 0x000008, "Wrong alignment on FVkLaunchData_Link");
static_assert(sizeof(FVkLaunchData_Link) == 0x000018, "Wrong size on FVkLaunchData_Link");
static_assert(offsetof(FVkLaunchData_Link, LinkCode) == 0x000000, "Member 'FVkLaunchData_Link::LinkCode' has a wrong offset!");
static_assert(offsetof(FVkLaunchData_Link, Version) == 0x000010, "Member 'FVkLaunchData_Link::Version' has a wrong offset!");

struct FVkProjectPlaytestAccessRequest final
{
public:
	TArray<class FString>                         Users;
	class FString                                 PlaytestGroupId;
};
static_assert(alignof(FVkProjectPlaytestAccessRequest) == 0x000008, "Wrong alignment on FVkProjectPlaytestAccessRequest");
static_assert(sizeof(FVkProjectPlaytestAccessRequest) == 0x000020, "Wrong size on FVkProjectPlaytestAccessRequest");
static_assert(offsetof(FVkProjectPlaytestAccessRequest, Users) == 0x000000, "Member 'FVkProjectPlaytestAccessRequest::Users' has a wrong offset!");
static_assert(offsetof(FVkProjectPlaytestAccessRequest, PlaytestGroupId) == 0x000010, "Member 'FVkProjectPlaytestAccessRequest::PlaytestGroupId' has a wrong offset!");

struct FVkProjectAccessControl final
{
public:
	bool                                          Read;
	bool                                          Edit;
	bool                                          Operate;
	bool                                          Publish;
	bool                                          Admin;
};
static_assert(alignof(FVkProjectAccessControl) == 0x000001, "Wrong alignment on FVkProjectAccessControl");
static_assert(sizeof(FVkProjectAccessControl) == 0x000005, "Wrong size on FVkProjectAccessControl");
static_assert(offsetof(FVkProjectAccessControl, Read) == 0x000000, "Member 'FVkProjectAccessControl::Read' has a wrong offset!");
static_assert(offsetof(FVkProjectAccessControl, Edit) == 0x000001, "Member 'FVkProjectAccessControl::Edit' has a wrong offset!");
static_assert(offsetof(FVkProjectAccessControl, Operate) == 0x000002, "Member 'FVkProjectAccessControl::Operate' has a wrong offset!");
static_assert(offsetof(FVkProjectAccessControl, Publish) == 0x000003, "Member 'FVkProjectAccessControl::Publish' has a wrong offset!");
static_assert(offsetof(FVkProjectAccessControl, Admin) == 0x000004, "Member 'FVkProjectAccessControl::Admin' has a wrong offset!");

struct FVkProjectPlaytestAccessResult final
{
public:
	struct FVkNamedId                             Owner;
	class FString                                 OwnerType;
	TMap<class FString, struct FVkProjectAccessControl> Playtesters;
};
static_assert(alignof(FVkProjectPlaytestAccessResult) == 0x000008, "Wrong alignment on FVkProjectPlaytestAccessResult");
static_assert(sizeof(FVkProjectPlaytestAccessResult) == 0x000080, "Wrong size on FVkProjectPlaytestAccessResult");
static_assert(offsetof(FVkProjectPlaytestAccessResult, Owner) == 0x000000, "Member 'FVkProjectPlaytestAccessResult::Owner' has a wrong offset!");
static_assert(offsetof(FVkProjectPlaytestAccessResult, OwnerType) == 0x000020, "Member 'FVkProjectPlaytestAccessResult::OwnerType' has a wrong offset!");
static_assert(offsetof(FVkProjectPlaytestAccessResult, Playtesters) == 0x000030, "Member 'FVkProjectPlaytestAccessResult::Playtesters' has a wrong offset!");

struct FVkSnapshotDeltaFiles final
{
public:
	class FString                                 SnapshotId;
	TMap<class FString, class FString>            DeltaFileLinks;
};
static_assert(alignof(FVkSnapshotDeltaFiles) == 0x000008, "Wrong alignment on FVkSnapshotDeltaFiles");
static_assert(sizeof(FVkSnapshotDeltaFiles) == 0x000060, "Wrong size on FVkSnapshotDeltaFiles");
static_assert(offsetof(FVkSnapshotDeltaFiles, SnapshotId) == 0x000000, "Member 'FVkSnapshotDeltaFiles::SnapshotId' has a wrong offset!");
static_assert(offsetof(FVkSnapshotDeltaFiles, DeltaFileLinks) == 0x000010, "Member 'FVkSnapshotDeltaFiles::DeltaFileLinks' has a wrong offset!");

struct FVkProfileBuildResult_Duration final
{
public:
	struct FDateTime                              Start;
	struct FDateTime                              End;
};
static_assert(alignof(FVkProfileBuildResult_Duration) == 0x000008, "Wrong alignment on FVkProfileBuildResult_Duration");
static_assert(sizeof(FVkProfileBuildResult_Duration) == 0x000010, "Wrong size on FVkProfileBuildResult_Duration");
static_assert(offsetof(FVkProfileBuildResult_Duration, Start) == 0x000000, "Member 'FVkProfileBuildResult_Duration::Start' has a wrong offset!");
static_assert(offsetof(FVkProfileBuildResult_Duration, End) == 0x000008, "Member 'FVkProfileBuildResult_Duration::End' has a wrong offset!");

struct FVkProfileBuildResult_Server final
{
public:
	class FString                                 BuildId;
	class FString                                 Platform;
	TMap<class FString, float>                    Stat;
};
static_assert(alignof(FVkProfileBuildResult_Server) == 0x000008, "Wrong alignment on FVkProfileBuildResult_Server");
static_assert(sizeof(FVkProfileBuildResult_Server) == 0x000070, "Wrong size on FVkProfileBuildResult_Server");
static_assert(offsetof(FVkProfileBuildResult_Server, BuildId) == 0x000000, "Member 'FVkProfileBuildResult_Server::BuildId' has a wrong offset!");
static_assert(offsetof(FVkProfileBuildResult_Server, Platform) == 0x000010, "Member 'FVkProfileBuildResult_Server::Platform' has a wrong offset!");
static_assert(offsetof(FVkProfileBuildResult_Server, Stat) == 0x000020, "Member 'FVkProfileBuildResult_Server::Stat' has a wrong offset!");

struct FVkProfileBuildResult_Client final
{
public:
	class FString                                 AccountId;
	class FString                                 BuildId;
	class FString                                 Platform;
	TMap<class FString, float>                    Stat;
};
static_assert(alignof(FVkProfileBuildResult_Client) == 0x000008, "Wrong alignment on FVkProfileBuildResult_Client");
static_assert(sizeof(FVkProfileBuildResult_Client) == 0x000080, "Wrong size on FVkProfileBuildResult_Client");
static_assert(offsetof(FVkProfileBuildResult_Client, AccountId) == 0x000000, "Member 'FVkProfileBuildResult_Client::AccountId' has a wrong offset!");
static_assert(offsetof(FVkProfileBuildResult_Client, BuildId) == 0x000010, "Member 'FVkProfileBuildResult_Client::BuildId' has a wrong offset!");
static_assert(offsetof(FVkProfileBuildResult_Client, Platform) == 0x000020, "Member 'FVkProfileBuildResult_Client::Platform' has a wrong offset!");
static_assert(offsetof(FVkProfileBuildResult_Client, Stat) == 0x000030, "Member 'FVkProfileBuildResult_Client::Stat' has a wrong offset!");

struct FVkProfileBuildResult final
{
public:
	float                                         Score;
	uint8                                         Pad_4[0x4];
	class FString                                 SessionId;
	struct FVkProfileBuildResult_Duration         Duration;
	struct FVkProfileBuildResult_Server           Server;
	TArray<struct FVkProfileBuildResult_Client>   Clients;
};
static_assert(alignof(FVkProfileBuildResult) == 0x000008, "Wrong alignment on FVkProfileBuildResult");
static_assert(sizeof(FVkProfileBuildResult) == 0x0000A8, "Wrong size on FVkProfileBuildResult");
static_assert(offsetof(FVkProfileBuildResult, Score) == 0x000000, "Member 'FVkProfileBuildResult::Score' has a wrong offset!");
static_assert(offsetof(FVkProfileBuildResult, SessionId) == 0x000008, "Member 'FVkProfileBuildResult::SessionId' has a wrong offset!");
static_assert(offsetof(FVkProfileBuildResult, Duration) == 0x000018, "Member 'FVkProfileBuildResult::Duration' has a wrong offset!");
static_assert(offsetof(FVkProfileBuildResult, Server) == 0x000028, "Member 'FVkProfileBuildResult::Server' has a wrong offset!");
static_assert(offsetof(FVkProfileBuildResult, Clients) == 0x000098, "Member 'FVkProfileBuildResult::Clients' has a wrong offset!");

struct FVkMetaDataFlags final
{
public:
	TMap<class FString, class FString>            _validation_flags;
};
static_assert(alignof(FVkMetaDataFlags) == 0x000008, "Wrong alignment on FVkMetaDataFlags");
static_assert(sizeof(FVkMetaDataFlags) == 0x000050, "Wrong size on FVkMetaDataFlags");
static_assert(offsetof(FVkMetaDataFlags, _validation_flags) == 0x000000, "Member 'FVkMetaDataFlags::_validation_flags' has a wrong offset!");

}
