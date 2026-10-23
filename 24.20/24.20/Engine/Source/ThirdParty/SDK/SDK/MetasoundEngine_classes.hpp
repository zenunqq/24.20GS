#pragma once

#include "Basic.hpp"

#include "MetasoundFrontend_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "CoreUObject_classes.hpp"
#include "MetasoundEngine_structs.hpp"
#include "DeveloperSettings_classes.hpp"
#include "Engine_classes.hpp"

namespace SDK
{

class UMetasoundGeneratorHandle final : public UObject
{
public:
	class UAudioComponent*                        AudioComponent;
	uint8                                         Pad_30[0x8];
	class UMetaSoundSource*                       CachedMetasoundSource;
	uint8                                         Pad_40[0x30];

public:
	static class UMetasoundGeneratorHandle* CreateMetaSoundGeneratorHandle(class UAudioComponent* OnComponent);

	bool ApplyParameterPack(class UMetasoundParameterPack* pack);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"MetasoundGeneratorHandle">();
	}
	static class UMetasoundGeneratorHandle* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMetasoundGeneratorHandle>();
	}
};
static_assert(alignof(UMetasoundGeneratorHandle) == 0x000008, "Wrong alignment on UMetasoundGeneratorHandle");
static_assert(sizeof(UMetasoundGeneratorHandle) == 0x000070, "Wrong size on UMetasoundGeneratorHandle");
static_assert(offsetof(UMetasoundGeneratorHandle, AudioComponent) == 0x000028, "Member 'UMetasoundGeneratorHandle::AudioComponent' has a wrong offset!");
static_assert(offsetof(UMetasoundGeneratorHandle, CachedMetasoundSource) == 0x000038, "Member 'UMetasoundGeneratorHandle::CachedMetasoundSource' has a wrong offset!");

class UMetaSoundSettings final : public UDeveloperSettings
{
public:
	bool                                          bAutoUpdateEnabled;
	uint8                                         Pad_31[0x7];
	TArray<struct FMetasoundFrontendClassName>    AutoUpdateDenylist;
	TArray<struct FDefaultMetaSoundAssetAutoUpdateSettings> AutoUpdateAssetDenylist;
	bool                                          bAutoUpdateLogWarningOnDroppedConnection;
	uint8                                         Pad_59[0x7];
	TArray<struct FDirectoryPath>                 DirectoriesToRegister;
	int32                                         DenyListCacheChangeID;
	uint8                                         Pad_74[0x4];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"MetaSoundSettings">();
	}
	static class UMetaSoundSettings* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMetaSoundSettings>();
	}
};
static_assert(alignof(UMetaSoundSettings) == 0x000008, "Wrong alignment on UMetaSoundSettings");
static_assert(sizeof(UMetaSoundSettings) == 0x000078, "Wrong size on UMetaSoundSettings");
static_assert(offsetof(UMetaSoundSettings, bAutoUpdateEnabled) == 0x000030, "Member 'UMetaSoundSettings::bAutoUpdateEnabled' has a wrong offset!");
static_assert(offsetof(UMetaSoundSettings, AutoUpdateDenylist) == 0x000038, "Member 'UMetaSoundSettings::AutoUpdateDenylist' has a wrong offset!");
static_assert(offsetof(UMetaSoundSettings, AutoUpdateAssetDenylist) == 0x000048, "Member 'UMetaSoundSettings::AutoUpdateAssetDenylist' has a wrong offset!");
static_assert(offsetof(UMetaSoundSettings, bAutoUpdateLogWarningOnDroppedConnection) == 0x000058, "Member 'UMetaSoundSettings::bAutoUpdateLogWarningOnDroppedConnection' has a wrong offset!");
static_assert(offsetof(UMetaSoundSettings, DirectoriesToRegister) == 0x000060, "Member 'UMetaSoundSettings::DirectoriesToRegister' has a wrong offset!");
static_assert(offsetof(UMetaSoundSettings, DenyListCacheChangeID) == 0x000070, "Member 'UMetaSoundSettings::DenyListCacheChangeID' has a wrong offset!");

class UMetasoundEditorGraphBase final : public UEdGraph
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"MetasoundEditorGraphBase">();
	}
	static class UMetasoundEditorGraphBase* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMetasoundEditorGraphBase>();
	}
};
static_assert(alignof(UMetasoundEditorGraphBase) == 0x000008, "Wrong alignment on UMetasoundEditorGraphBase");
static_assert(sizeof(UMetasoundEditorGraphBase) == 0x000060, "Wrong size on UMetasoundEditorGraphBase");

class UMetaSoundPatch final : public UObject
{
public:
	uint8                                         Pad_28[0x70];
	struct FMetasoundFrontendDocument             RootMetaSoundDocument;
	TSet<class FString>                           ReferencedAssetClassKeys;
	TSet<class UObject*>                          ReferencedAssetClassObjects;
	TSet<struct FSoftObjectPath>                  ReferenceAssetClassCache;
	struct FGuid                                  AssetClassID;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"MetaSoundPatch">();
	}
	static class UMetaSoundPatch* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMetaSoundPatch>();
	}
};
static_assert(alignof(UMetaSoundPatch) == 0x000008, "Wrong alignment on UMetaSoundPatch");
static_assert(sizeof(UMetaSoundPatch) == 0x000350, "Wrong size on UMetaSoundPatch");
static_assert(offsetof(UMetaSoundPatch, RootMetaSoundDocument) == 0x000098, "Member 'UMetaSoundPatch::RootMetaSoundDocument' has a wrong offset!");
static_assert(offsetof(UMetaSoundPatch, ReferencedAssetClassKeys) == 0x000250, "Member 'UMetaSoundPatch::ReferencedAssetClassKeys' has a wrong offset!");
static_assert(offsetof(UMetaSoundPatch, ReferencedAssetClassObjects) == 0x0002A0, "Member 'UMetaSoundPatch::ReferencedAssetClassObjects' has a wrong offset!");
static_assert(offsetof(UMetaSoundPatch, ReferenceAssetClassCache) == 0x0002F0, "Member 'UMetaSoundPatch::ReferenceAssetClassCache' has a wrong offset!");
static_assert(offsetof(UMetaSoundPatch, AssetClassID) == 0x000340, "Member 'UMetaSoundPatch::AssetClassID' has a wrong offset!");

class UMetaSoundAssetSubsystem final : public UEngineSubsystem
{
public:
	uint8                                         Pad_30[0x8];
	TArray<struct FMetaSoundAsyncAssetDependencies> LoadingDependencies;
	uint8                                         Pad_48[0x198];

public:
	void RegisterAssetClassesInDirectories(const TArray<struct FMetaSoundAssetDirectory>& Directories);
	void UnregisterAssetClassesInDirectories(const TArray<struct FMetaSoundAssetDirectory>& Directories);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"MetaSoundAssetSubsystem">();
	}
	static class UMetaSoundAssetSubsystem* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMetaSoundAssetSubsystem>();
	}
};
static_assert(alignof(UMetaSoundAssetSubsystem) == 0x000008, "Wrong alignment on UMetaSoundAssetSubsystem");
static_assert(sizeof(UMetaSoundAssetSubsystem) == 0x0001E0, "Wrong size on UMetaSoundAssetSubsystem");
static_assert(offsetof(UMetaSoundAssetSubsystem, LoadingDependencies) == 0x000038, "Member 'UMetaSoundAssetSubsystem::LoadingDependencies' has a wrong offset!");

class UMetaSoundBuilderBase : public UObject
{
public:
	struct FMetaSoundFrontendDocumentBuilder      Builder;

public:
	struct FMetaSoundBuilderNodeOutputHandle AddGraphInputNode(class FName Name_0, class FName DataType, const struct FMetasoundFrontendLiteral& DefaultValue, EMetaSoundBuilderResult* outResult, bool bIsConstructorInput);
	struct FMetaSoundBuilderNodeInputHandle AddGraphOutputNode(class FName Name_0, class FName DataType, const struct FMetasoundFrontendLiteral& DefaultValue, EMetaSoundBuilderResult* outResult, bool bIsConstructorInput);
	void AddInterface(class FName InterfaceName, EMetaSoundBuilderResult* outResult);
	struct FMetaSoundNodeHandle AddNode(TScriptInterface<class IMetaSoundDocumentInterface> NodeClass, EMetaSoundBuilderResult* outResult);
	TArray<struct FMetaSoundBuilderNodeOutputHandle> ConnectNodeInputsToMatchingGraphInterfaceInputs(const struct FMetaSoundNodeHandle& NodeHandle, EMetaSoundBuilderResult* outResult);
	void ConnectNodeInputToGraphInput(class FName GraphInputName, const struct FMetaSoundBuilderNodeInputHandle& NodeInputHandle, EMetaSoundBuilderResult* outResult);
	TArray<struct FMetaSoundBuilderNodeInputHandle> ConnectNodeOutputsToMatchingGraphInterfaceOutputs(const struct FMetaSoundNodeHandle& NodeHandle, EMetaSoundBuilderResult* outResult);
	void ConnectNodeOutputToGraphOutput(class FName GraphOutputName, const struct FMetaSoundBuilderNodeOutputHandle& NodeOutputHandle, EMetaSoundBuilderResult* outResult);
	void ConnectNodes(const struct FMetaSoundBuilderNodeOutputHandle& NodeOutputHandle, const struct FMetaSoundBuilderNodeInputHandle& NodeInputHandle, EMetaSoundBuilderResult* outResult);
	void ConnectNodesByInterfaceBindings(const struct FMetaSoundNodeHandle& FromNodeHandle, const struct FMetaSoundNodeHandle& ToNodeHandle, EMetaSoundBuilderResult* outResult);
	void DisconnectNodeInput(const struct FMetaSoundBuilderNodeInputHandle& NodeInputHandle, EMetaSoundBuilderResult* outResult);
	void DisconnectNodeOutput(const struct FMetaSoundBuilderNodeOutputHandle& NodeOutputHandle, EMetaSoundBuilderResult* outResult);
	void DisconnectNodes(const struct FMetaSoundBuilderNodeOutputHandle& NodeOutputHandle, const struct FMetaSoundBuilderNodeInputHandle& NodeInputHandle, EMetaSoundBuilderResult* outResult);
	void DisconnectNodesByInterfaceBindings(const struct FMetaSoundNodeHandle& FromNodeHandle, const struct FMetaSoundNodeHandle& ToNodeHandle, EMetaSoundBuilderResult* outResult);
	void RemoveInterface(class FName InterfaceName, EMetaSoundBuilderResult* outResult);
	void RemoveNode(const struct FMetaSoundNodeHandle& NodeHandle, EMetaSoundBuilderResult* outResult);
	void SetNodeInputDefault(const struct FMetaSoundBuilderNodeInputHandle& NodeInputHandle, const struct FMetasoundFrontendLiteral& Literal, EMetaSoundBuilderResult* outResult);

	bool ContainsNode(const struct FMetaSoundNodeHandle& Node) const;
	bool ContainsNodeInput(const struct FMetaSoundBuilderNodeInputHandle& Input) const;
	bool ContainsNodeOutput(const struct FMetaSoundBuilderNodeOutputHandle& Output) const;
	struct FMetaSoundNodeHandle FindGraphInputNode(class FName InputName, EMetaSoundBuilderResult* outResult) const;
	struct FMetaSoundNodeHandle FindGraphOutputNode(class FName OutputName, EMetaSoundBuilderResult* outResult) const;
	TArray<struct FMetaSoundNodeHandle> FindInterfaceInputNodes(class FName InterfaceName, EMetaSoundBuilderResult* outResult) const;
	TArray<struct FMetaSoundNodeHandle> FindInterfaceOutputNodes(class FName InterfaceName, EMetaSoundBuilderResult* outResult) const;
	struct FMetasoundFrontendVersion FindNodeClassVersion(const struct FMetaSoundNodeHandle& NodeHandle, EMetaSoundBuilderResult* outResult) const;
	struct FMetaSoundBuilderNodeInputHandle FindNodeInputByName(const struct FMetaSoundNodeHandle& NodeHandle, class FName InputName, EMetaSoundBuilderResult* outResult) const;
	struct FMetaSoundNodeHandle FindNodeInputParent(const struct FMetaSoundBuilderNodeInputHandle& InputHandle, EMetaSoundBuilderResult* outResult) const;
	TArray<struct FMetaSoundBuilderNodeInputHandle> FindNodeInputs(const struct FMetaSoundNodeHandle& NodeHandle, EMetaSoundBuilderResult* outResult) const;
	TArray<struct FMetaSoundBuilderNodeInputHandle> FindNodeInputsByDataType(const struct FMetaSoundNodeHandle& NodeHandle, EMetaSoundBuilderResult* outResult, class FName DataType) const;
	struct FMetaSoundBuilderNodeOutputHandle FindNodeOutputByName(const struct FMetaSoundNodeHandle& NodeHandle, class FName OutputName, EMetaSoundBuilderResult* outResult) const;
	struct FMetaSoundNodeHandle FindNodeOutputParent(const struct FMetaSoundBuilderNodeOutputHandle& OutputHandle, EMetaSoundBuilderResult* outResult) const;
	TArray<struct FMetaSoundBuilderNodeOutputHandle> FindNodeOutputs(const struct FMetaSoundNodeHandle& NodeHandle, EMetaSoundBuilderResult* outResult) const;
	TArray<struct FMetaSoundBuilderNodeOutputHandle> FindNodeOutputsByDataType(const struct FMetaSoundNodeHandle& NodeHandle, EMetaSoundBuilderResult* outResult, class FName DataType) const;
	void GetNodeInputData(const struct FMetaSoundBuilderNodeInputHandle& InputHandle, class FName* Name_0, class FName* DataType, EMetaSoundBuilderResult* outResult) const;
	void GetNodeOutputData(const struct FMetaSoundBuilderNodeOutputHandle& OutputHandle, class FName* Name_0, class FName* DataType, EMetaSoundBuilderResult* outResult) const;
	bool InterfaceIsDeclared(class FName InterfaceName) const;
	bool NodeInputIsConnected(const struct FMetaSoundBuilderNodeInputHandle& InputHandle) const;
	bool NodeOutputIsConnected(const struct FMetaSoundBuilderNodeOutputHandle& OutputHandle) const;
	bool NodesAreConnected(const struct FMetaSoundBuilderNodeOutputHandle& OutputHandle, const struct FMetaSoundBuilderNodeInputHandle& InputHandle) const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"MetaSoundBuilderBase">();
	}
	static class UMetaSoundBuilderBase* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMetaSoundBuilderBase>();
	}
};
static_assert(alignof(UMetaSoundBuilderBase) == 0x000008, "Wrong alignment on UMetaSoundBuilderBase");
static_assert(sizeof(UMetaSoundBuilderBase) == 0x000040, "Wrong size on UMetaSoundBuilderBase");
static_assert(offsetof(UMetaSoundBuilderBase, Builder) == 0x000028, "Member 'UMetaSoundBuilderBase::Builder' has a wrong offset!");

class UMetaSoundPatchBuilder final : public UMetaSoundBuilderBase
{
public:
	TScriptInterface<class IMetaSoundDocumentInterface> Build(class UObject* Parent, const struct FMetaSoundBuilderOptions& Options) const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"MetaSoundPatchBuilder">();
	}
	static class UMetaSoundPatchBuilder* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMetaSoundPatchBuilder>();
	}
};
static_assert(alignof(UMetaSoundPatchBuilder) == 0x000008, "Wrong alignment on UMetaSoundPatchBuilder");
static_assert(sizeof(UMetaSoundPatchBuilder) == 0x000040, "Wrong size on UMetaSoundPatchBuilder");

class UMetaSoundSourceBuilder final : public UMetaSoundBuilderBase
{
public:
	uint8                                         Pad_40[0x8];

public:
	void Audition(class UObject* Parent, class UAudioComponent* AudioComponent, TDelegate<void(class UMetasoundGeneratorHandle* GeneratorHandle)> OnCreateGenerator);
	void SetFormat(EMetaSoundOutputAudioFormat OutputFormat, EMetaSoundBuilderResult* outResult);

	TScriptInterface<class IMetaSoundDocumentInterface> Build(class UObject* Parent, const struct FMetaSoundBuilderOptions& Options) const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"MetaSoundSourceBuilder">();
	}
	static class UMetaSoundSourceBuilder* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMetaSoundSourceBuilder>();
	}
};
static_assert(alignof(UMetaSoundSourceBuilder) == 0x000008, "Wrong alignment on UMetaSoundSourceBuilder");
static_assert(sizeof(UMetaSoundSourceBuilder) == 0x000048, "Wrong size on UMetaSoundSourceBuilder");

class UMetaSoundBuilderSubsystem final : public UEngineSubsystem
{
public:
	TMap<class FName, class UMetaSoundPatchBuilder*> PatchBuilders;
	TMap<class FName, class UMetaSoundSourceBuilder*> SourceBuilders;

public:
	struct FMetasoundFrontendLiteral CreateBoolArrayMetaSoundLiteral(const TArray<bool>& Value, class FName* DataType);
	struct FMetasoundFrontendLiteral CreateBoolMetaSoundLiteral(bool Value, class FName* DataType);
	struct FMetasoundFrontendLiteral CreateFloatArrayMetaSoundLiteral(const TArray<float>& Value, class FName* DataType);
	struct FMetasoundFrontendLiteral CreateFloatMetaSoundLiteral(float Value, class FName* DataType);
	struct FMetasoundFrontendLiteral CreateIntArrayMetaSoundLiteral(const TArray<int32>& Value, class FName* DataType);
	struct FMetasoundFrontendLiteral CreateIntMetaSoundLiteral(int32 Value, class FName* DataType);
	struct FMetasoundFrontendLiteral CreateMetaSoundLiteralFromParam(const struct FAudioParameter& Param);
	struct FMetasoundFrontendLiteral CreateObjectArrayMetaSoundLiteral(const TArray<class UObject*>& Value);
	struct FMetasoundFrontendLiteral CreateObjectMetaSoundLiteral(class UObject* Value);
	class UMetaSoundPatchBuilder* CreatePatchBuilder(class FName BuilderName, EMetaSoundBuilderResult* outResult);
	class UMetaSoundSourceBuilder* CreateSourceBuilder(class FName BuilderName, struct FMetaSoundBuilderNodeOutputHandle* OnPlayNodeOutput, struct FMetaSoundBuilderNodeInputHandle* OnFinishedNodeInput, TArray<struct FMetaSoundBuilderNodeInputHandle>* AudioOutNodeInputs, EMetaSoundBuilderResult* outResult, EMetaSoundOutputAudioFormat OutputFormat, bool bIsOneShot);
	struct FMetasoundFrontendLiteral CreateStringArrayMetaSoundLiteral(const TArray<class FString>& Value, class FName* DataType);
	struct FMetasoundFrontendLiteral CreateStringMetaSoundLiteral(const class FString& Value, class FName* DataType);
	class UMetaSoundPatchBuilder* FindPatchBuilder(class FName BuilderName);
	class UMetaSoundSourceBuilder* FindSourceBuilder(class FName BuilderName);
	void RegisterPatchBuilder(class FName BuilderName, class UMetaSoundPatchBuilder* Builder);
	void RegisterSourceBuilder(class FName BuilderName, class UMetaSoundSourceBuilder* Builder);
	bool UnregisterPatchBuilder(class FName BuilderName);
	bool UnregisterSourceBuilder(class FName BuilderName);

	bool IsInterfaceRegistered(class FName InInterfaceName) const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"MetaSoundBuilderSubsystem">();
	}
	static class UMetaSoundBuilderSubsystem* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMetaSoundBuilderSubsystem>();
	}
};
static_assert(alignof(UMetaSoundBuilderSubsystem) == 0x000008, "Wrong alignment on UMetaSoundBuilderSubsystem");
static_assert(sizeof(UMetaSoundBuilderSubsystem) == 0x0000D0, "Wrong size on UMetaSoundBuilderSubsystem");
static_assert(offsetof(UMetaSoundBuilderSubsystem, PatchBuilders) == 0x000030, "Member 'UMetaSoundBuilderSubsystem::PatchBuilders' has a wrong offset!");
static_assert(offsetof(UMetaSoundBuilderSubsystem, SourceBuilders) == 0x000080, "Member 'UMetaSoundBuilderSubsystem::SourceBuilders' has a wrong offset!");

class alignas(0x10) UMetaSoundSource final : public USoundWaveProcedural
{
public:
	uint8                                         Pad_4A0[0x70];
	struct FMetasoundFrontendDocument             RootMetaSoundDocument;
	TSet<class FString>                           ReferencedAssetClassKeys;
	TSet<class UObject*>                          ReferencedAssetClassObjects;
	TSet<struct FSoftObjectPath>                  ReferenceAssetClassCache;
	EMetaSoundOutputAudioFormat                   OutputFormat;
	uint8                                         Pad_7B9[0x3];
	struct FGuid                                  AssetClassID;
	uint8                                         Pad_7CC[0x74];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"MetaSoundSource">();
	}
	static class UMetaSoundSource* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMetaSoundSource>();
	}
};
static_assert(alignof(UMetaSoundSource) == 0x000010, "Wrong alignment on UMetaSoundSource");
static_assert(sizeof(UMetaSoundSource) == 0x000840, "Wrong size on UMetaSoundSource");
static_assert(offsetof(UMetaSoundSource, RootMetaSoundDocument) == 0x000510, "Member 'UMetaSoundSource::RootMetaSoundDocument' has a wrong offset!");
static_assert(offsetof(UMetaSoundSource, ReferencedAssetClassKeys) == 0x0006C8, "Member 'UMetaSoundSource::ReferencedAssetClassKeys' has a wrong offset!");
static_assert(offsetof(UMetaSoundSource, ReferencedAssetClassObjects) == 0x000718, "Member 'UMetaSoundSource::ReferencedAssetClassObjects' has a wrong offset!");
static_assert(offsetof(UMetaSoundSource, ReferenceAssetClassCache) == 0x000768, "Member 'UMetaSoundSource::ReferenceAssetClassCache' has a wrong offset!");
static_assert(offsetof(UMetaSoundSource, OutputFormat) == 0x0007B8, "Member 'UMetaSoundSource::OutputFormat' has a wrong offset!");
static_assert(offsetof(UMetaSoundSource, AssetClassID) == 0x0007BC, "Member 'UMetaSoundSource::AssetClassID' has a wrong offset!");

}
