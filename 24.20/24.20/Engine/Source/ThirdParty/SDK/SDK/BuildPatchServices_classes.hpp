#pragma once

#include "Basic.hpp"

#include "BuildPatchServices_structs.hpp"
#include "CoreUObject_classes.hpp"

namespace SDK
{

class UBuildPatchManifest final : public UObject
{
public:
	uint8                                         ManifestFileVersion;
	bool                                          bIsFileData;
	uint8                                         Pad_2A[0x2];
	uint32                                        AppID;
	class FString                                 AppName;
	class FString                                 BuildVersion;
	class FString                                 LaunchExe;
	class FString                                 LaunchCommand;
	TSet<class FString>                           PrereqIds;
	class FString                                 PrereqName;
	class FString                                 PrereqPath;
	class FString                                 PrereqArgs;
	TArray<struct FFileManifestData>              FileManifestList;
	TArray<struct FChunkInfoData>                 ChunkList;
	TArray<struct FCustomFieldData>               CustomFields;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"BuildPatchManifest">();
	}
	static class UBuildPatchManifest* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBuildPatchManifest>();
	}
};
static_assert(alignof(UBuildPatchManifest) == 0x000008, "Wrong alignment on UBuildPatchManifest");
static_assert(sizeof(UBuildPatchManifest) == 0x000120, "Wrong size on UBuildPatchManifest");
static_assert(offsetof(UBuildPatchManifest, ManifestFileVersion) == 0x000028, "Member 'UBuildPatchManifest::ManifestFileVersion' has a wrong offset!");
static_assert(offsetof(UBuildPatchManifest, bIsFileData) == 0x000029, "Member 'UBuildPatchManifest::bIsFileData' has a wrong offset!");
static_assert(offsetof(UBuildPatchManifest, AppID) == 0x00002C, "Member 'UBuildPatchManifest::AppID' has a wrong offset!");
static_assert(offsetof(UBuildPatchManifest, AppName) == 0x000030, "Member 'UBuildPatchManifest::AppName' has a wrong offset!");
static_assert(offsetof(UBuildPatchManifest, BuildVersion) == 0x000040, "Member 'UBuildPatchManifest::BuildVersion' has a wrong offset!");
static_assert(offsetof(UBuildPatchManifest, LaunchExe) == 0x000050, "Member 'UBuildPatchManifest::LaunchExe' has a wrong offset!");
static_assert(offsetof(UBuildPatchManifest, LaunchCommand) == 0x000060, "Member 'UBuildPatchManifest::LaunchCommand' has a wrong offset!");
static_assert(offsetof(UBuildPatchManifest, PrereqIds) == 0x000070, "Member 'UBuildPatchManifest::PrereqIds' has a wrong offset!");
static_assert(offsetof(UBuildPatchManifest, PrereqName) == 0x0000C0, "Member 'UBuildPatchManifest::PrereqName' has a wrong offset!");
static_assert(offsetof(UBuildPatchManifest, PrereqPath) == 0x0000D0, "Member 'UBuildPatchManifest::PrereqPath' has a wrong offset!");
static_assert(offsetof(UBuildPatchManifest, PrereqArgs) == 0x0000E0, "Member 'UBuildPatchManifest::PrereqArgs' has a wrong offset!");
static_assert(offsetof(UBuildPatchManifest, FileManifestList) == 0x0000F0, "Member 'UBuildPatchManifest::FileManifestList' has a wrong offset!");
static_assert(offsetof(UBuildPatchManifest, ChunkList) == 0x000100, "Member 'UBuildPatchManifest::ChunkList' has a wrong offset!");
static_assert(offsetof(UBuildPatchManifest, CustomFields) == 0x000110, "Member 'UBuildPatchManifest::CustomFields' has a wrong offset!");

}
