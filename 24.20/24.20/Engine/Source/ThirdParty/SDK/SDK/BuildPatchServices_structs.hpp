#pragma once

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"

namespace SDK
{

struct FCustomFieldData final
{
public:
	class FString                                 Key;
	class FString                                 Value;
};
static_assert(alignof(FCustomFieldData) == 0x000008, "Wrong alignment on FCustomFieldData");
static_assert(sizeof(FCustomFieldData) == 0x000020, "Wrong size on FCustomFieldData");
static_assert(offsetof(FCustomFieldData, Key) == 0x000000, "Member 'FCustomFieldData::Key' has a wrong offset!");
static_assert(offsetof(FCustomFieldData, Value) == 0x000010, "Member 'FCustomFieldData::Value' has a wrong offset!");

struct FSHAHashData final
{
public:
	uint8                                         Hash[0x14];
};
static_assert(alignof(FSHAHashData) == 0x000001, "Wrong alignment on FSHAHashData");
static_assert(sizeof(FSHAHashData) == 0x000014, "Wrong size on FSHAHashData");
static_assert(offsetof(FSHAHashData, Hash) == 0x000000, "Member 'FSHAHashData::Hash' has a wrong offset!");

struct FChunkInfoData final
{
public:
	struct FGuid                                  Guid;
	uint64                                        Hash;
	struct FSHAHashData                           ShaHash;
	uint8                                         Pad_2C[0x4];
	int64                                         FileSize;
	uint8                                         GroupNumber;
	uint8                                         Pad_39[0x7];
};
static_assert(alignof(FChunkInfoData) == 0x000008, "Wrong alignment on FChunkInfoData");
static_assert(sizeof(FChunkInfoData) == 0x000040, "Wrong size on FChunkInfoData");
static_assert(offsetof(FChunkInfoData, Guid) == 0x000000, "Member 'FChunkInfoData::Guid' has a wrong offset!");
static_assert(offsetof(FChunkInfoData, Hash) == 0x000010, "Member 'FChunkInfoData::Hash' has a wrong offset!");
static_assert(offsetof(FChunkInfoData, ShaHash) == 0x000018, "Member 'FChunkInfoData::ShaHash' has a wrong offset!");
static_assert(offsetof(FChunkInfoData, FileSize) == 0x000030, "Member 'FChunkInfoData::FileSize' has a wrong offset!");
static_assert(offsetof(FChunkInfoData, GroupNumber) == 0x000038, "Member 'FChunkInfoData::GroupNumber' has a wrong offset!");

struct FChunkPartData final
{
public:
	struct FGuid                                  Guid;
	uint32                                        Offset;
	uint32                                        Size;
};
static_assert(alignof(FChunkPartData) == 0x000004, "Wrong alignment on FChunkPartData");
static_assert(sizeof(FChunkPartData) == 0x000018, "Wrong size on FChunkPartData");
static_assert(offsetof(FChunkPartData, Guid) == 0x000000, "Member 'FChunkPartData::Guid' has a wrong offset!");
static_assert(offsetof(FChunkPartData, Offset) == 0x000010, "Member 'FChunkPartData::Offset' has a wrong offset!");
static_assert(offsetof(FChunkPartData, Size) == 0x000014, "Member 'FChunkPartData::Size' has a wrong offset!");

struct FFileManifestData final
{
public:
	class FString                                 Filename;
	struct FSHAHashData                           FileHash;
	uint8                                         Pad_24[0x4];
	TArray<struct FChunkPartData>                 FileChunkParts;
	TArray<class FString>                         InstallTags;
	bool                                          bIsUnixExecutable;
	uint8                                         Pad_49[0x7];
	class FString                                 SymlinkTarget;
	bool                                          bIsReadOnly;
	bool                                          bIsCompressed;
	uint8                                         Pad_62[0x6];
};
static_assert(alignof(FFileManifestData) == 0x000008, "Wrong alignment on FFileManifestData");
static_assert(sizeof(FFileManifestData) == 0x000068, "Wrong size on FFileManifestData");
static_assert(offsetof(FFileManifestData, Filename) == 0x000000, "Member 'FFileManifestData::Filename' has a wrong offset!");
static_assert(offsetof(FFileManifestData, FileHash) == 0x000010, "Member 'FFileManifestData::FileHash' has a wrong offset!");
static_assert(offsetof(FFileManifestData, FileChunkParts) == 0x000028, "Member 'FFileManifestData::FileChunkParts' has a wrong offset!");
static_assert(offsetof(FFileManifestData, InstallTags) == 0x000038, "Member 'FFileManifestData::InstallTags' has a wrong offset!");
static_assert(offsetof(FFileManifestData, bIsUnixExecutable) == 0x000048, "Member 'FFileManifestData::bIsUnixExecutable' has a wrong offset!");
static_assert(offsetof(FFileManifestData, SymlinkTarget) == 0x000050, "Member 'FFileManifestData::SymlinkTarget' has a wrong offset!");
static_assert(offsetof(FFileManifestData, bIsReadOnly) == 0x000060, "Member 'FFileManifestData::bIsReadOnly' has a wrong offset!");
static_assert(offsetof(FFileManifestData, bIsCompressed) == 0x000061, "Member 'FFileManifestData::bIsCompressed' has a wrong offset!");

}
