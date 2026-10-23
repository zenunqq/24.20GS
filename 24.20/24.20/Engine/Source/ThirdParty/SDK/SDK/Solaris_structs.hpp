#pragma once

#include "Basic.hpp"

namespace SDK
{

enum class EVerseDigestVariant : uint8
{
	PublicOnly                               = 0,
	PublicAndEpicInternal                    = 1,
	EVerseDigestVariant_MAX                  = 2,
};

enum class EVerseEnumFlags : uint32
{
	None                                     = 0,
	NativeBound                              = 1,
	EVerseEnumFlags_MAX                      = 2,
};

enum class EVersePackageScope : uint8
{
	InternalAPI                              = 0,
	PublicAPI                                = 1,
	User                                     = 2,
	EVersePackageScope_MAX                   = 3,
};

enum class EVersePackageType : uint8
{
	VNI                                      = 0,
	Content                                  = 1,
	Assets                                   = 2,
	EVersePackageType_MAX                    = 3,
};

struct FVersePackageContainerSettings final
{
public:
	class FString                                 VersePath;
	EVersePackageScope                            VerseScope;
	uint8                                         Pad_11[0x7];
	TArray<class FString>                         DependencyPackages;
	class FString                                 VniDestDir;
};
static_assert(alignof(FVersePackageContainerSettings) == 0x000008, "Wrong alignment on FVersePackageContainerSettings");
static_assert(sizeof(FVersePackageContainerSettings) == 0x000038, "Wrong size on FVersePackageContainerSettings");
static_assert(offsetof(FVersePackageContainerSettings, VersePath) == 0x000000, "Member 'FVersePackageContainerSettings::VersePath' has a wrong offset!");
static_assert(offsetof(FVersePackageContainerSettings, VerseScope) == 0x000010, "Member 'FVersePackageContainerSettings::VerseScope' has a wrong offset!");
static_assert(offsetof(FVersePackageContainerSettings, DependencyPackages) == 0x000018, "Member 'FVersePackageContainerSettings::DependencyPackages' has a wrong offset!");
static_assert(offsetof(FVersePackageContainerSettings, VniDestDir) == 0x000028, "Member 'FVersePackageContainerSettings::VniDestDir' has a wrong offset!");

struct FVerseSourceFile final
{
public:
	class FString                                 Filename;
	TArray<uint8>                                 Code;
};
static_assert(alignof(FVerseSourceFile) == 0x000008, "Wrong alignment on FVerseSourceFile");
static_assert(sizeof(FVerseSourceFile) == 0x000020, "Wrong size on FVerseSourceFile");
static_assert(offsetof(FVerseSourceFile, Filename) == 0x000000, "Member 'FVerseSourceFile::Filename' has a wrong offset!");
static_assert(offsetof(FVerseSourceFile, Code) == 0x000010, "Member 'FVerseSourceFile::Code' has a wrong offset!");

struct FVersePackageContainer final
{
public:
	class FString                                 Name;
	class FString                                 DirPath;
	EVersePackageType                             PackageType;
	bool                                          bEnableVerseAssetReflection;
	uint8                                         Pad_22[0x6];
	struct FVersePackageContainerSettings         Settings;
	TArray<struct FVerseSourceFile>               SourceFiles;
	TArray<uint8>                                 AssetDigest;
	TArray<class FString>                         AssetDependencies;
};
static_assert(alignof(FVersePackageContainer) == 0x000008, "Wrong alignment on FVersePackageContainer");
static_assert(sizeof(FVersePackageContainer) == 0x000090, "Wrong size on FVersePackageContainer");
static_assert(offsetof(FVersePackageContainer, Name) == 0x000000, "Member 'FVersePackageContainer::Name' has a wrong offset!");
static_assert(offsetof(FVersePackageContainer, DirPath) == 0x000010, "Member 'FVersePackageContainer::DirPath' has a wrong offset!");
static_assert(offsetof(FVersePackageContainer, PackageType) == 0x000020, "Member 'FVersePackageContainer::PackageType' has a wrong offset!");
static_assert(offsetof(FVersePackageContainer, bEnableVerseAssetReflection) == 0x000021, "Member 'FVersePackageContainer::bEnableVerseAssetReflection' has a wrong offset!");
static_assert(offsetof(FVersePackageContainer, Settings) == 0x000028, "Member 'FVersePackageContainer::Settings' has a wrong offset!");
static_assert(offsetof(FVersePackageContainer, SourceFiles) == 0x000060, "Member 'FVersePackageContainer::SourceFiles' has a wrong offset!");
static_assert(offsetof(FVersePackageContainer, AssetDigest) == 0x000070, "Member 'FVersePackageContainer::AssetDigest' has a wrong offset!");
static_assert(offsetof(FVersePackageContainer, AssetDependencies) == 0x000080, "Member 'FVersePackageContainer::AssetDependencies' has a wrong offset!");

struct FVerseProjectContainer final
{
public:
	TArray<struct FVersePackageContainer>         Packages;
};
static_assert(alignof(FVerseProjectContainer) == 0x000008, "Wrong alignment on FVerseProjectContainer");
static_assert(sizeof(FVerseProjectContainer) == 0x000010, "Wrong size on FVerseProjectContainer");
static_assert(offsetof(FVerseProjectContainer, Packages) == 0x000000, "Member 'FVerseProjectContainer::Packages' has a wrong offset!");

struct FGenericElementType final
{
public:
	uint8                                         Pad_0[0x1];
};
static_assert(alignof(FGenericElementType) == 0x000001, "Wrong alignment on FGenericElementType");
static_assert(sizeof(FGenericElementType) == 0x000001, "Wrong size on FGenericElementType");

struct FGenericKeyType final
{
public:
	uint8                                         Pad_0[0x1];
};
static_assert(alignof(FGenericKeyType) == 0x000001, "Wrong alignment on FGenericKeyType");
static_assert(sizeof(FGenericKeyType) == 0x000001, "Wrong size on FGenericKeyType");

struct FGenericValueType final
{
public:
	uint8                                         Pad_0[0x1];
};
static_assert(alignof(FGenericValueType) == 0x000001, "Wrong alignment on FGenericValueType");
static_assert(sizeof(FGenericValueType) == 0x000001, "Wrong size on FGenericValueType");

}
