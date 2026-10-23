#pragma once

#include "Basic.hpp"

#include "MetasoundFrontend_structs.hpp"
#include "CoreUObject_structs.hpp"

namespace SDK
{

enum class EMetaSoundMessageLevel : uint8
{
	Error                                    = 0,
	Warning                                  = 1,
	Info                                     = 2,
	EMetaSoundMessageLevel_MAX               = 3,
};

enum class EMetaSoundOutputAudioFormat : uint8
{
	Mono                                     = 0,
	Stereo                                   = 1,
	Quad                                     = 2,
	FiveDotOne                               = 3,
	SevenDotOne                              = 4,
	COUNT                                    = 5,
	EMetaSoundOutputAudioFormat_MAX          = 6,
};

enum class EMetaSoundBuilderResult : uint8
{
	Succeeded                                = 0,
	Failed                                   = 1,
	EMetaSoundBuilderResult_MAX              = 2,
};

struct FDefaultMetaSoundAssetAutoUpdateSettings final
{
public:
	struct FSoftObjectPath                        Metasound;
};
static_assert(alignof(FDefaultMetaSoundAssetAutoUpdateSettings) == 0x000008, "Wrong alignment on FDefaultMetaSoundAssetAutoUpdateSettings");
static_assert(sizeof(FDefaultMetaSoundAssetAutoUpdateSettings) == 0x000018, "Wrong size on FDefaultMetaSoundAssetAutoUpdateSettings");
static_assert(offsetof(FDefaultMetaSoundAssetAutoUpdateSettings, Metasound) == 0x000000, "Member 'FDefaultMetaSoundAssetAutoUpdateSettings::Metasound' has a wrong offset!");

struct FMetaSoundAssetDirectory final
{
public:
	struct FDirectoryPath                         Directory;
};
static_assert(alignof(FMetaSoundAssetDirectory) == 0x000008, "Wrong alignment on FMetaSoundAssetDirectory");
static_assert(sizeof(FMetaSoundAssetDirectory) == 0x000010, "Wrong size on FMetaSoundAssetDirectory");
static_assert(offsetof(FMetaSoundAssetDirectory, Directory) == 0x000000, "Member 'FMetaSoundAssetDirectory::Directory' has a wrong offset!");

struct FMetaSoundAsyncAssetDependencies final
{
public:
	uint8                                         Pad_0[0x8];
	class UObject*                                Metasound;
	uint8                                         Pad_10[0x20];
};
static_assert(alignof(FMetaSoundAsyncAssetDependencies) == 0x000008, "Wrong alignment on FMetaSoundAsyncAssetDependencies");
static_assert(sizeof(FMetaSoundAsyncAssetDependencies) == 0x000030, "Wrong size on FMetaSoundAsyncAssetDependencies");
static_assert(offsetof(FMetaSoundAsyncAssetDependencies, Metasound) == 0x000008, "Member 'FMetaSoundAsyncAssetDependencies::Metasound' has a wrong offset!");

struct FMetaSoundBuilderNodeInputHandle final : public FMetasoundFrontendVertexHandle
{
};
static_assert(alignof(FMetaSoundBuilderNodeInputHandle) == 0x000004, "Wrong alignment on FMetaSoundBuilderNodeInputHandle");
static_assert(sizeof(FMetaSoundBuilderNodeInputHandle) == 0x000020, "Wrong size on FMetaSoundBuilderNodeInputHandle");

struct FMetaSoundBuilderNodeOutputHandle final : public FMetasoundFrontendVertexHandle
{
};
static_assert(alignof(FMetaSoundBuilderNodeOutputHandle) == 0x000004, "Wrong alignment on FMetaSoundBuilderNodeOutputHandle");
static_assert(sizeof(FMetaSoundBuilderNodeOutputHandle) == 0x000020, "Wrong size on FMetaSoundBuilderNodeOutputHandle");

struct FMetaSoundNodeHandle final
{
public:
	struct FGuid                                  NodeId;
};
static_assert(alignof(FMetaSoundNodeHandle) == 0x000004, "Wrong alignment on FMetaSoundNodeHandle");
static_assert(sizeof(FMetaSoundNodeHandle) == 0x000010, "Wrong size on FMetaSoundNodeHandle");
static_assert(offsetof(FMetaSoundNodeHandle, NodeId) == 0x000000, "Member 'FMetaSoundNodeHandle::NodeId' has a wrong offset!");

struct alignas(0x08) FMetaSoundBuilderOptions final
{
public:
	class FName                                   Name;
	bool                                          bAddToRegistry;
	uint8                                         Pad_5[0x13];
};
static_assert(alignof(FMetaSoundBuilderOptions) == 0x000008, "Wrong alignment on FMetaSoundBuilderOptions");
static_assert(sizeof(FMetaSoundBuilderOptions) == 0x000018, "Wrong size on FMetaSoundBuilderOptions");
static_assert(offsetof(FMetaSoundBuilderOptions, Name) == 0x000000, "Member 'FMetaSoundBuilderOptions::Name' has a wrong offset!");
static_assert(offsetof(FMetaSoundBuilderOptions, bAddToRegistry) == 0x000004, "Member 'FMetaSoundBuilderOptions::bAddToRegistry' has a wrong offset!");

}
