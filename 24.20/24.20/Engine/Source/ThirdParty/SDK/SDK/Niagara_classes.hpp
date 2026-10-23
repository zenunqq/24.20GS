#pragma once

#include "Basic.hpp"

#include "Niagara_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "CoreUObject_classes.hpp"
#include "DeveloperSettings_classes.hpp"
#include "NiagaraCore_classes.hpp"
#include "Engine_structs.hpp"
#include "Engine_classes.hpp"
#include "MovieScene_classes.hpp"
#include "NiagaraShader_structs.hpp"
#include "NiagaraShader_classes.hpp"

namespace SDK
{

class UNiagaraConvertInPlaceUtilityBase final : public UObject
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"NiagaraConvertInPlaceUtilityBase">();
	}
	static class UNiagaraConvertInPlaceUtilityBase* GetDefaultObj()
	{
		return GetDefaultObjImpl<UNiagaraConvertInPlaceUtilityBase>();
	}
};
static_assert(alignof(UNiagaraConvertInPlaceUtilityBase) == 0x000008, "Wrong alignment on UNiagaraConvertInPlaceUtilityBase");
static_assert(sizeof(UNiagaraConvertInPlaceUtilityBase) == 0x000028, "Wrong size on UNiagaraConvertInPlaceUtilityBase");

class UNiagaraDataChannelReader final : public UObject
{
public:
	uint8                                         Pad_28[0x10];
	class UNiagaraDataChannelHandler*             Owner;

public:
	bool InitAccess(class UActorComponent* OwningComponent);

	int32 Num() const;
	bool ReadBool(class FName VarName, int32 Index_0) const;
	double ReadFloat(class FName VarName, int32 Index_0) const;
	int32 ReadInt(class FName VarName, int32 Index_0) const;
	struct FLinearColor ReadLinearColor(class FName VarName, int32 Index_0) const;
	struct FQuat ReadQuat(class FName VarName, int32 Index_0) const;
	struct FVector ReadVector(class FName VarName, int32 Index_0) const;
	struct FVector2D ReadVector2D(class FName VarName, int32 Index_0) const;
	struct FVector4 ReadVector4(class FName VarName, int32 Index_0) const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"NiagaraDataChannelReader">();
	}
	static class UNiagaraDataChannelReader* GetDefaultObj()
	{
		return GetDefaultObjImpl<UNiagaraDataChannelReader>();
	}
};
static_assert(alignof(UNiagaraDataChannelReader) == 0x000008, "Wrong alignment on UNiagaraDataChannelReader");
static_assert(sizeof(UNiagaraDataChannelReader) == 0x000040, "Wrong size on UNiagaraDataChannelReader");
static_assert(offsetof(UNiagaraDataChannelReader, Owner) == 0x000038, "Member 'UNiagaraDataChannelReader::Owner' has a wrong offset!");

class UNiagaraDataChannelWriter final : public UObject
{
public:
	uint8                                         Pad_28[0x10];
	class UNiagaraDataChannelHandler*             Owner;

public:
	bool InitWrite(class UActorComponent* OwningComponent, int32 Count, bool bVisibleToGame, bool bVisibleToCPU, bool bVisibleToGPU);
	void WriteBool(class FName VarName, int32 Index_0, bool InData);
	void WriteFloat(class FName VarName, int32 Index_0, double InData);
	void WriteInt(class FName VarName, int32 Index_0, int32 InData);
	void WriteLinearColor(class FName VarName, int32 Index_0, const struct FLinearColor& InData);
	void WriteQuat(class FName VarName, int32 Index_0, const struct FQuat& InData);
	void WriteSpawnInfo(class FName VarName, int32 Index_0, const struct FNiagaraSpawnInfo& InData);
	void WriteVector(class FName VarName, int32 Index_0, const struct FVector& InData);
	void WriteVector2D(class FName VarName, int32 Index_0, const struct FVector2D& InData);
	void WriteVector4(class FName VarName, int32 Index_0, const struct FVector4& InData);

	int32 Num() const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"NiagaraDataChannelWriter">();
	}
	static class UNiagaraDataChannelWriter* GetDefaultObj()
	{
		return GetDefaultObjImpl<UNiagaraDataChannelWriter>();
	}
};
static_assert(alignof(UNiagaraDataChannelWriter) == 0x000008, "Wrong alignment on UNiagaraDataChannelWriter");
static_assert(sizeof(UNiagaraDataChannelWriter) == 0x000040, "Wrong size on UNiagaraDataChannelWriter");
static_assert(offsetof(UNiagaraDataChannelWriter, Owner) == 0x000038, "Member 'UNiagaraDataChannelWriter::Owner' has a wrong offset!");

class UNiagaraDataChannelDefinitions final : public UObject
{
public:
	TArray<class UNiagaraDataChannel*>            DataChannels;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"NiagaraDataChannelDefinitions">();
	}
	static class UNiagaraDataChannelDefinitions* GetDefaultObj()
	{
		return GetDefaultObjImpl<UNiagaraDataChannelDefinitions>();
	}
};
static_assert(alignof(UNiagaraDataChannelDefinitions) == 0x000008, "Wrong alignment on UNiagaraDataChannelDefinitions");
static_assert(sizeof(UNiagaraDataChannelDefinitions) == 0x000038, "Wrong size on UNiagaraDataChannelDefinitions");
static_assert(offsetof(UNiagaraDataChannelDefinitions, DataChannels) == 0x000028, "Member 'UNiagaraDataChannelDefinitions::DataChannels' has a wrong offset!");

class UNiagaraDataChannelHandler : public UObject
{
public:
	class UNiagaraDataChannel*                    DataChannel;
	uint8                                         Pad_30[0x28];
	class UNiagaraDataChannelWriter*              Writer;
	class UNiagaraDataChannelReader*              Reader;

public:
	class UNiagaraDataChannelReader* GetDataChannelReader();
	class UNiagaraDataChannelWriter* GetDataChannelWriter();

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"NiagaraDataChannelHandler">();
	}
	static class UNiagaraDataChannelHandler* GetDefaultObj()
	{
		return GetDefaultObjImpl<UNiagaraDataChannelHandler>();
	}
};
static_assert(alignof(UNiagaraDataChannelHandler) == 0x000008, "Wrong alignment on UNiagaraDataChannelHandler");
static_assert(sizeof(UNiagaraDataChannelHandler) == 0x000068, "Wrong size on UNiagaraDataChannelHandler");
static_assert(offsetof(UNiagaraDataChannelHandler, DataChannel) == 0x000028, "Member 'UNiagaraDataChannelHandler::DataChannel' has a wrong offset!");
static_assert(offsetof(UNiagaraDataChannelHandler, Writer) == 0x000058, "Member 'UNiagaraDataChannelHandler::Writer' has a wrong offset!");
static_assert(offsetof(UNiagaraDataChannelHandler, Reader) == 0x000060, "Member 'UNiagaraDataChannelHandler::Reader' has a wrong offset!");

class UNiagaraDataChannel : public UObject
{
public:
	class FName                                   ChannelName;
	uint8                                         Pad_2C[0x4];
	TArray<struct FNiagaraVariable>               Variables;
	bool                                          bKeepPreviousFrameData;
	uint8                                         Pad_41[0x7];
	struct FNiagaraDataSetCompiledData            CompiledData;
	struct FNiagaraDataSetCompiledData            CompiledDataGPU;
	struct FNiagaraDataChannelGameDataLayout      GameDataLayout;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"NiagaraDataChannel">();
	}
	static class UNiagaraDataChannel* GetDefaultObj()
	{
		return GetDefaultObjImpl<UNiagaraDataChannel>();
	}
};
static_assert(alignof(UNiagaraDataChannel) == 0x000008, "Wrong alignment on UNiagaraDataChannel");
static_assert(sizeof(UNiagaraDataChannel) == 0x000128, "Wrong size on UNiagaraDataChannel");
static_assert(offsetof(UNiagaraDataChannel, ChannelName) == 0x000028, "Member 'UNiagaraDataChannel::ChannelName' has a wrong offset!");
static_assert(offsetof(UNiagaraDataChannel, Variables) == 0x000030, "Member 'UNiagaraDataChannel::Variables' has a wrong offset!");
static_assert(offsetof(UNiagaraDataChannel, bKeepPreviousFrameData) == 0x000040, "Member 'UNiagaraDataChannel::bKeepPreviousFrameData' has a wrong offset!");
static_assert(offsetof(UNiagaraDataChannel, CompiledData) == 0x000048, "Member 'UNiagaraDataChannel::CompiledData' has a wrong offset!");
static_assert(offsetof(UNiagaraDataChannel, CompiledDataGPU) == 0x000088, "Member 'UNiagaraDataChannel::CompiledDataGPU' has a wrong offset!");
static_assert(offsetof(UNiagaraDataChannel, GameDataLayout) == 0x0000C8, "Member 'UNiagaraDataChannel::GameDataLayout' has a wrong offset!");

class UNiagaraDataChannel_Global final : public UNiagaraDataChannel
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"NiagaraDataChannel_Global">();
	}
	static class UNiagaraDataChannel_Global* GetDefaultObj()
	{
		return GetDefaultObjImpl<UNiagaraDataChannel_Global>();
	}
};
static_assert(alignof(UNiagaraDataChannel_Global) == 0x000008, "Wrong alignment on UNiagaraDataChannel_Global");
static_assert(sizeof(UNiagaraDataChannel_Global) == 0x000128, "Wrong size on UNiagaraDataChannel_Global");

class UNiagaraDataChannelHandler_Global final : public UNiagaraDataChannelHandler
{
public:
	uint8                                         Pad_68[0x38];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"NiagaraDataChannelHandler_Global">();
	}
	static class UNiagaraDataChannelHandler_Global* GetDefaultObj()
	{
		return GetDefaultObjImpl<UNiagaraDataChannelHandler_Global>();
	}
};
static_assert(alignof(UNiagaraDataChannelHandler_Global) == 0x000008, "Wrong alignment on UNiagaraDataChannelHandler_Global");
static_assert(sizeof(UNiagaraDataChannelHandler_Global) == 0x0000A0, "Wrong size on UNiagaraDataChannelHandler_Global");

class UNiagaraDataInterface : public UNiagaraDataInterfaceBase
{
public:
	uint8                                         Pad_28[0x10];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"NiagaraDataInterface">();
	}
	static class UNiagaraDataInterface* GetDefaultObj()
	{
		return GetDefaultObjImpl<UNiagaraDataInterface>();
	}
};
static_assert(alignof(UNiagaraDataInterface) == 0x000008, "Wrong alignment on UNiagaraDataInterface");
static_assert(sizeof(UNiagaraDataInterface) == 0x000038, "Wrong size on UNiagaraDataInterface");

class UNiagaraDataInterfaceDataChannelRead : public UNiagaraDataInterface
{
public:
	struct FNiagaraDataChannelReference           Channel;
	bool                                          bReadCurrentFrame;
	uint8                                         Pad_3D[0x3];
	struct FNDIDataChannelCompiledData            CompiledData;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"NiagaraDataInterfaceDataChannelRead">();
	}
	static class UNiagaraDataInterfaceDataChannelRead* GetDefaultObj()
	{
		return GetDefaultObjImpl<UNiagaraDataInterfaceDataChannelRead>();
	}
};
static_assert(alignof(UNiagaraDataInterfaceDataChannelRead) == 0x000008, "Wrong alignment on UNiagaraDataInterfaceDataChannelRead");
static_assert(sizeof(UNiagaraDataInterfaceDataChannelRead) == 0x0000A8, "Wrong size on UNiagaraDataInterfaceDataChannelRead");
static_assert(offsetof(UNiagaraDataInterfaceDataChannelRead, Channel) == 0x000038, "Member 'UNiagaraDataInterfaceDataChannelRead::Channel' has a wrong offset!");
static_assert(offsetof(UNiagaraDataInterfaceDataChannelRead, bReadCurrentFrame) == 0x00003C, "Member 'UNiagaraDataInterfaceDataChannelRead::bReadCurrentFrame' has a wrong offset!");
static_assert(offsetof(UNiagaraDataInterfaceDataChannelRead, CompiledData) == 0x000040, "Member 'UNiagaraDataInterfaceDataChannelRead::CompiledData' has a wrong offset!");

class UNiagaraDataInterfaceDataChannelSpawn final : public UNiagaraDataInterfaceDataChannelRead
{
public:
	struct FNiagaraDataInterfaceEmitterBinding    EmitterBinding;
	bool                                          bOverrideSpawnGroupToDataChannelIndex;
	uint8                                         Pad_B1[0x7];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"NiagaraDataInterfaceDataChannelSpawn">();
	}
	static class UNiagaraDataInterfaceDataChannelSpawn* GetDefaultObj()
	{
		return GetDefaultObjImpl<UNiagaraDataInterfaceDataChannelSpawn>();
	}
};
static_assert(alignof(UNiagaraDataInterfaceDataChannelSpawn) == 0x000008, "Wrong alignment on UNiagaraDataInterfaceDataChannelSpawn");
static_assert(sizeof(UNiagaraDataInterfaceDataChannelSpawn) == 0x0000B8, "Wrong size on UNiagaraDataInterfaceDataChannelSpawn");
static_assert(offsetof(UNiagaraDataInterfaceDataChannelSpawn, EmitterBinding) == 0x0000A8, "Member 'UNiagaraDataInterfaceDataChannelSpawn::EmitterBinding' has a wrong offset!");
static_assert(offsetof(UNiagaraDataInterfaceDataChannelSpawn, bOverrideSpawnGroupToDataChannelIndex) == 0x0000B0, "Member 'UNiagaraDataInterfaceDataChannelSpawn::bOverrideSpawnGroupToDataChannelIndex' has a wrong offset!");

class UNiagaraDataInterfaceDataChannelWrite final : public UNiagaraDataInterface
{
public:
	ENiagaraDataChannelAllocationMode             AllocationMode;
	uint8                                         Pad_39[0x3];
	uint32                                        AllocationCount;
	bool                                          bPublishToGame;
	bool                                          bPublishToCPU;
	bool                                          bPublishToGPU;
	uint8                                         Pad_43[0x1];
	struct FNiagaraDataChannelReference           Channel;
	struct FNDIDataChannelWriteCompiledData       CompiledData;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"NiagaraDataInterfaceDataChannelWrite">();
	}
	static class UNiagaraDataInterfaceDataChannelWrite* GetDefaultObj()
	{
		return GetDefaultObjImpl<UNiagaraDataInterfaceDataChannelWrite>();
	}
};
static_assert(alignof(UNiagaraDataInterfaceDataChannelWrite) == 0x000008, "Wrong alignment on UNiagaraDataInterfaceDataChannelWrite");
static_assert(sizeof(UNiagaraDataInterfaceDataChannelWrite) == 0x0000F0, "Wrong size on UNiagaraDataInterfaceDataChannelWrite");
static_assert(offsetof(UNiagaraDataInterfaceDataChannelWrite, AllocationMode) == 0x000038, "Member 'UNiagaraDataInterfaceDataChannelWrite::AllocationMode' has a wrong offset!");
static_assert(offsetof(UNiagaraDataInterfaceDataChannelWrite, AllocationCount) == 0x00003C, "Member 'UNiagaraDataInterfaceDataChannelWrite::AllocationCount' has a wrong offset!");
static_assert(offsetof(UNiagaraDataInterfaceDataChannelWrite, bPublishToGame) == 0x000040, "Member 'UNiagaraDataInterfaceDataChannelWrite::bPublishToGame' has a wrong offset!");
static_assert(offsetof(UNiagaraDataInterfaceDataChannelWrite, bPublishToCPU) == 0x000041, "Member 'UNiagaraDataInterfaceDataChannelWrite::bPublishToCPU' has a wrong offset!");
static_assert(offsetof(UNiagaraDataInterfaceDataChannelWrite, bPublishToGPU) == 0x000042, "Member 'UNiagaraDataInterfaceDataChannelWrite::bPublishToGPU' has a wrong offset!");
static_assert(offsetof(UNiagaraDataInterfaceDataChannelWrite, Channel) == 0x000044, "Member 'UNiagaraDataInterfaceDataChannelWrite::Channel' has a wrong offset!");
static_assert(offsetof(UNiagaraDataInterfaceDataChannelWrite, CompiledData) == 0x000048, "Member 'UNiagaraDataInterfaceDataChannelWrite::CompiledData' has a wrong offset!");

class UNiagaraMessageDataBase final : public UObject
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"NiagaraMessageDataBase">();
	}
	static class UNiagaraMessageDataBase* GetDefaultObj()
	{
		return GetDefaultObjImpl<UNiagaraMessageDataBase>();
	}
};
static_assert(alignof(UNiagaraMessageDataBase) == 0x000008, "Wrong alignment on UNiagaraMessageDataBase");
static_assert(sizeof(UNiagaraMessageDataBase) == 0x000028, "Wrong size on UNiagaraMessageDataBase");

class UNiagaraParameterDefinitionsBase final : public UObject
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"NiagaraParameterDefinitionsBase">();
	}
	static class UNiagaraParameterDefinitionsBase* GetDefaultObj()
	{
		return GetDefaultObjImpl<UNiagaraParameterDefinitionsBase>();
	}
};
static_assert(alignof(UNiagaraParameterDefinitionsBase) == 0x000008, "Wrong alignment on UNiagaraParameterDefinitionsBase");
static_assert(sizeof(UNiagaraParameterDefinitionsBase) == 0x000028, "Wrong size on UNiagaraParameterDefinitionsBase");

class UNiagaraScriptSourceBase final : public UObject
{
public:
	uint8                                         Pad_28[0x20];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"NiagaraScriptSourceBase">();
	}
	static class UNiagaraScriptSourceBase* GetDefaultObj()
	{
		return GetDefaultObjImpl<UNiagaraScriptSourceBase>();
	}
};
static_assert(alignof(UNiagaraScriptSourceBase) == 0x000008, "Wrong alignment on UNiagaraScriptSourceBase");
static_assert(sizeof(UNiagaraScriptSourceBase) == 0x000048, "Wrong size on UNiagaraScriptSourceBase");

class UNiagaraValidationRuleSet final : public UObject
{
public:
	TArray<class UNiagaraValidationRule*>         ValidationRules;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"NiagaraValidationRuleSet">();
	}
	static class UNiagaraValidationRuleSet* GetDefaultObj()
	{
		return GetDefaultObjImpl<UNiagaraValidationRuleSet>();
	}
};
static_assert(alignof(UNiagaraValidationRuleSet) == 0x000008, "Wrong alignment on UNiagaraValidationRuleSet");
static_assert(sizeof(UNiagaraValidationRuleSet) == 0x000038, "Wrong size on UNiagaraValidationRuleSet");
static_assert(offsetof(UNiagaraValidationRuleSet, ValidationRules) == 0x000028, "Member 'UNiagaraValidationRuleSet::ValidationRules' has a wrong offset!");

class UNiagaraDataInterfaceActorComponent final : public UNiagaraDataInterface
{
public:
	bool                                          bRequireCurrentFrameData;
	ENDIActorComponentSourceMode                  SourceMode;
	uint8                                         Pad_3A[0x2];
	int32                                         LocalPlayerIndex;
	TLazyObjectPtr<class AActor>                  SourceActor;
	uint8                                         Pad_5C[0x4];
	struct FNiagaraUserParameterBinding           ActorOrComponentParameter;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"NiagaraDataInterfaceActorComponent">();
	}
	static class UNiagaraDataInterfaceActorComponent* GetDefaultObj()
	{
		return GetDefaultObjImpl<UNiagaraDataInterfaceActorComponent>();
	}
};
static_assert(alignof(UNiagaraDataInterfaceActorComponent) == 0x000008, "Wrong alignment on UNiagaraDataInterfaceActorComponent");
static_assert(sizeof(UNiagaraDataInterfaceActorComponent) == 0x000078, "Wrong size on UNiagaraDataInterfaceActorComponent");
static_assert(offsetof(UNiagaraDataInterfaceActorComponent, bRequireCurrentFrameData) == 0x000038, "Member 'UNiagaraDataInterfaceActorComponent::bRequireCurrentFrameData' has a wrong offset!");
static_assert(offsetof(UNiagaraDataInterfaceActorComponent, SourceMode) == 0x000039, "Member 'UNiagaraDataInterfaceActorComponent::SourceMode' has a wrong offset!");
static_assert(offsetof(UNiagaraDataInterfaceActorComponent, LocalPlayerIndex) == 0x00003C, "Member 'UNiagaraDataInterfaceActorComponent::LocalPlayerIndex' has a wrong offset!");
static_assert(offsetof(UNiagaraDataInterfaceActorComponent, SourceActor) == 0x000040, "Member 'UNiagaraDataInterfaceActorComponent::SourceActor' has a wrong offset!");
static_assert(offsetof(UNiagaraDataInterfaceActorComponent, ActorOrComponentParameter) == 0x000060, "Member 'UNiagaraDataInterfaceActorComponent::ActorOrComponentParameter' has a wrong offset!");

class UNiagaraDataInterfaceAsyncGpuTrace final : public UNiagaraDataInterface
{
public:
	int32                                         MaxTracesPerParticle;
	int32                                         MaxRetraces;
	ENDICollisionQuery_AsyncGpuTraceProvider      TraceProvider;
	uint8                                         Pad_41[0x7];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"NiagaraDataInterfaceAsyncGpuTrace">();
	}
	static class UNiagaraDataInterfaceAsyncGpuTrace* GetDefaultObj()
	{
		return GetDefaultObjImpl<UNiagaraDataInterfaceAsyncGpuTrace>();
	}
};
static_assert(alignof(UNiagaraDataInterfaceAsyncGpuTrace) == 0x000008, "Wrong alignment on UNiagaraDataInterfaceAsyncGpuTrace");
static_assert(sizeof(UNiagaraDataInterfaceAsyncGpuTrace) == 0x000048, "Wrong size on UNiagaraDataInterfaceAsyncGpuTrace");
static_assert(offsetof(UNiagaraDataInterfaceAsyncGpuTrace, MaxTracesPerParticle) == 0x000038, "Member 'UNiagaraDataInterfaceAsyncGpuTrace::MaxTracesPerParticle' has a wrong offset!");
static_assert(offsetof(UNiagaraDataInterfaceAsyncGpuTrace, MaxRetraces) == 0x00003C, "Member 'UNiagaraDataInterfaceAsyncGpuTrace::MaxRetraces' has a wrong offset!");
static_assert(offsetof(UNiagaraDataInterfaceAsyncGpuTrace, TraceProvider) == 0x000040, "Member 'UNiagaraDataInterfaceAsyncGpuTrace::TraceProvider' has a wrong offset!");

class UNiagaraDataInterfaceDebugDraw final : public UNiagaraDataInterface
{
public:
	uint32                                        OverrideMaxLineInstances;
	uint8                                         Pad_3C[0x4];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"NiagaraDataInterfaceDebugDraw">();
	}
	static class UNiagaraDataInterfaceDebugDraw* GetDefaultObj()
	{
		return GetDefaultObjImpl<UNiagaraDataInterfaceDebugDraw>();
	}
};
static_assert(alignof(UNiagaraDataInterfaceDebugDraw) == 0x000008, "Wrong alignment on UNiagaraDataInterfaceDebugDraw");
static_assert(sizeof(UNiagaraDataInterfaceDebugDraw) == 0x000040, "Wrong size on UNiagaraDataInterfaceDebugDraw");
static_assert(offsetof(UNiagaraDataInterfaceDebugDraw, OverrideMaxLineInstances) == 0x000038, "Member 'UNiagaraDataInterfaceDebugDraw::OverrideMaxLineInstances' has a wrong offset!");

class UNiagaraDataInterfaceEmitterProperties final : public UNiagaraDataInterface
{
public:
	struct FNiagaraDataInterfaceEmitterBinding    EmitterBinding;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"NiagaraDataInterfaceEmitterProperties">();
	}
	static class UNiagaraDataInterfaceEmitterProperties* GetDefaultObj()
	{
		return GetDefaultObjImpl<UNiagaraDataInterfaceEmitterProperties>();
	}
};
static_assert(alignof(UNiagaraDataInterfaceEmitterProperties) == 0x000008, "Wrong alignment on UNiagaraDataInterfaceEmitterProperties");
static_assert(sizeof(UNiagaraDataInterfaceEmitterProperties) == 0x000040, "Wrong size on UNiagaraDataInterfaceEmitterProperties");
static_assert(offsetof(UNiagaraDataInterfaceEmitterProperties, EmitterBinding) == 0x000038, "Member 'UNiagaraDataInterfaceEmitterProperties::EmitterBinding' has a wrong offset!");

class UNiagaraDataInterfaceGBuffer final : public UNiagaraDataInterface
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"NiagaraDataInterfaceGBuffer">();
	}
	static class UNiagaraDataInterfaceGBuffer* GetDefaultObj()
	{
		return GetDefaultObjImpl<UNiagaraDataInterfaceGBuffer>();
	}
};
static_assert(alignof(UNiagaraDataInterfaceGBuffer) == 0x000008, "Wrong alignment on UNiagaraDataInterfaceGBuffer");
static_assert(sizeof(UNiagaraDataInterfaceGBuffer) == 0x000038, "Wrong size on UNiagaraDataInterfaceGBuffer");

class UNiagaraDataInterfacePhysicsAsset final : public UNiagaraDataInterface
{
public:
	class UPhysicsAsset*                          DefaultSource;
	TSoftObjectPtr<class AActor>                  SoftSourceActor;
	struct FNiagaraUserParameterBinding           MeshUserParameter;
	uint8                                         Pad_80[0x20];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"NiagaraDataInterfacePhysicsAsset">();
	}
	static class UNiagaraDataInterfacePhysicsAsset* GetDefaultObj()
	{
		return GetDefaultObjImpl<UNiagaraDataInterfacePhysicsAsset>();
	}
};
static_assert(alignof(UNiagaraDataInterfacePhysicsAsset) == 0x000008, "Wrong alignment on UNiagaraDataInterfacePhysicsAsset");
static_assert(sizeof(UNiagaraDataInterfacePhysicsAsset) == 0x0000A0, "Wrong size on UNiagaraDataInterfacePhysicsAsset");
static_assert(offsetof(UNiagaraDataInterfacePhysicsAsset, DefaultSource) == 0x000038, "Member 'UNiagaraDataInterfacePhysicsAsset::DefaultSource' has a wrong offset!");
static_assert(offsetof(UNiagaraDataInterfacePhysicsAsset, SoftSourceActor) == 0x000040, "Member 'UNiagaraDataInterfacePhysicsAsset::SoftSourceActor' has a wrong offset!");
static_assert(offsetof(UNiagaraDataInterfacePhysicsAsset, MeshUserParameter) == 0x000068, "Member 'UNiagaraDataInterfacePhysicsAsset::MeshUserParameter' has a wrong offset!");

class INiagaraPhysicsAssetDICollectorInterface final : public IInterface
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"NiagaraPhysicsAssetDICollectorInterface">();
	}
	static class INiagaraPhysicsAssetDICollectorInterface* GetDefaultObj()
	{
		return GetDefaultObjImpl<INiagaraPhysicsAssetDICollectorInterface>();
	}
};
static_assert(alignof(INiagaraPhysicsAssetDICollectorInterface) == 0x000008, "Wrong alignment on INiagaraPhysicsAssetDICollectorInterface");
static_assert(sizeof(INiagaraPhysicsAssetDICollectorInterface) == 0x000028, "Wrong size on INiagaraPhysicsAssetDICollectorInterface");

class UNiagaraDataInterfaceSimCacheReader final : public UNiagaraDataInterface
{
public:
	struct FNiagaraUserParameterBinding           SimCacheBinding;
	class UNiagaraSimCache*                       SimCache;
	class FName                                   EmitterBinding;
	uint8                                         Pad_5C[0x4];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"NiagaraDataInterfaceSimCacheReader">();
	}
	static class UNiagaraDataInterfaceSimCacheReader* GetDefaultObj()
	{
		return GetDefaultObjImpl<UNiagaraDataInterfaceSimCacheReader>();
	}
};
static_assert(alignof(UNiagaraDataInterfaceSimCacheReader) == 0x000008, "Wrong alignment on UNiagaraDataInterfaceSimCacheReader");
static_assert(sizeof(UNiagaraDataInterfaceSimCacheReader) == 0x000060, "Wrong size on UNiagaraDataInterfaceSimCacheReader");
static_assert(offsetof(UNiagaraDataInterfaceSimCacheReader, SimCacheBinding) == 0x000038, "Member 'UNiagaraDataInterfaceSimCacheReader::SimCacheBinding' has a wrong offset!");
static_assert(offsetof(UNiagaraDataInterfaceSimCacheReader, SimCache) == 0x000050, "Member 'UNiagaraDataInterfaceSimCacheReader::SimCache' has a wrong offset!");
static_assert(offsetof(UNiagaraDataInterfaceSimCacheReader, EmitterBinding) == 0x000058, "Member 'UNiagaraDataInterfaceSimCacheReader::EmitterBinding' has a wrong offset!");

class UNiagaraDataInterfaceSimpleCounter final : public UNiagaraDataInterface
{
public:
	ENiagaraGpuSyncMode                           GpuSyncMode;
	int32                                         InitialValue;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"NiagaraDataInterfaceSimpleCounter">();
	}
	static class UNiagaraDataInterfaceSimpleCounter* GetDefaultObj()
	{
		return GetDefaultObjImpl<UNiagaraDataInterfaceSimpleCounter>();
	}
};
static_assert(alignof(UNiagaraDataInterfaceSimpleCounter) == 0x000008, "Wrong alignment on UNiagaraDataInterfaceSimpleCounter");
static_assert(sizeof(UNiagaraDataInterfaceSimpleCounter) == 0x000040, "Wrong size on UNiagaraDataInterfaceSimpleCounter");
static_assert(offsetof(UNiagaraDataInterfaceSimpleCounter, GpuSyncMode) == 0x000038, "Member 'UNiagaraDataInterfaceSimpleCounter::GpuSyncMode' has a wrong offset!");
static_assert(offsetof(UNiagaraDataInterfaceSimpleCounter, InitialValue) == 0x00003C, "Member 'UNiagaraDataInterfaceSimpleCounter::InitialValue' has a wrong offset!");

class UNiagaraDataInterfaceStaticMesh final : public UNiagaraDataInterface
{
public:
	ENDIStaticMesh_SourceMode                     SourceMode;
	uint8                                         Pad_39[0x7];
	class UStaticMesh*                            DefaultMesh;
	TSoftObjectPtr<class AActor>                  SoftSourceActor;
	class UStaticMeshComponent*                   SourceComponent;
	struct FNDIStaticMeshSectionFilter            SectionFilter;
	bool                                          bUsePhysicsBodyVelocity;
	bool                                          bAllowSamplingFromStreamingLODs;
	uint8                                         Pad_8A[0x2];
	int32                                         LODIndex;
	struct FNiagaraUserParameterBinding           LODIndexUserParameter;
	TArray<class FName>                           FilteredSockets;
	uint8                                         Pad_B8[0x8];

public:
	void OnSourceEndPlay(class AActor* InSource, EEndPlayReason Reason);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"NiagaraDataInterfaceStaticMesh">();
	}
	static class UNiagaraDataInterfaceStaticMesh* GetDefaultObj()
	{
		return GetDefaultObjImpl<UNiagaraDataInterfaceStaticMesh>();
	}
};
static_assert(alignof(UNiagaraDataInterfaceStaticMesh) == 0x000008, "Wrong alignment on UNiagaraDataInterfaceStaticMesh");
static_assert(sizeof(UNiagaraDataInterfaceStaticMesh) == 0x0000C0, "Wrong size on UNiagaraDataInterfaceStaticMesh");
static_assert(offsetof(UNiagaraDataInterfaceStaticMesh, SourceMode) == 0x000038, "Member 'UNiagaraDataInterfaceStaticMesh::SourceMode' has a wrong offset!");
static_assert(offsetof(UNiagaraDataInterfaceStaticMesh, DefaultMesh) == 0x000040, "Member 'UNiagaraDataInterfaceStaticMesh::DefaultMesh' has a wrong offset!");
static_assert(offsetof(UNiagaraDataInterfaceStaticMesh, SoftSourceActor) == 0x000048, "Member 'UNiagaraDataInterfaceStaticMesh::SoftSourceActor' has a wrong offset!");
static_assert(offsetof(UNiagaraDataInterfaceStaticMesh, SourceComponent) == 0x000070, "Member 'UNiagaraDataInterfaceStaticMesh::SourceComponent' has a wrong offset!");
static_assert(offsetof(UNiagaraDataInterfaceStaticMesh, SectionFilter) == 0x000078, "Member 'UNiagaraDataInterfaceStaticMesh::SectionFilter' has a wrong offset!");
static_assert(offsetof(UNiagaraDataInterfaceStaticMesh, bUsePhysicsBodyVelocity) == 0x000088, "Member 'UNiagaraDataInterfaceStaticMesh::bUsePhysicsBodyVelocity' has a wrong offset!");
static_assert(offsetof(UNiagaraDataInterfaceStaticMesh, bAllowSamplingFromStreamingLODs) == 0x000089, "Member 'UNiagaraDataInterfaceStaticMesh::bAllowSamplingFromStreamingLODs' has a wrong offset!");
static_assert(offsetof(UNiagaraDataInterfaceStaticMesh, LODIndex) == 0x00008C, "Member 'UNiagaraDataInterfaceStaticMesh::LODIndex' has a wrong offset!");
static_assert(offsetof(UNiagaraDataInterfaceStaticMesh, LODIndexUserParameter) == 0x000090, "Member 'UNiagaraDataInterfaceStaticMesh::LODIndexUserParameter' has a wrong offset!");
static_assert(offsetof(UNiagaraDataInterfaceStaticMesh, FilteredSockets) == 0x0000A8, "Member 'UNiagaraDataInterfaceStaticMesh::FilteredSockets' has a wrong offset!");

class UNiagaraDataInterfaceUObjectPropertyReader final : public UNiagaraDataInterface
{
public:
	struct FNiagaraUserParameterBinding           UObjectParameterBinding;
	TArray<struct FNiagaraUObjectPropertyReaderRemap> PropertyRemap;
	TSoftObjectPtr<class AActor>                  SourceActor;
	TSubclassOf<class UObject>                    SourceActorComponentClass;
	uint8                                         Pad_90[0x8];

public:
	static void SetUObjectReaderPropertyRemap(class UNiagaraComponent* NiagaraComponent, class FName UserParameterName, class FName GraphName, class FName RemapName);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"NiagaraDataInterfaceUObjectPropertyReader">();
	}
	static class UNiagaraDataInterfaceUObjectPropertyReader* GetDefaultObj()
	{
		return GetDefaultObjImpl<UNiagaraDataInterfaceUObjectPropertyReader>();
	}
};
static_assert(alignof(UNiagaraDataInterfaceUObjectPropertyReader) == 0x000008, "Wrong alignment on UNiagaraDataInterfaceUObjectPropertyReader");
static_assert(sizeof(UNiagaraDataInterfaceUObjectPropertyReader) == 0x000098, "Wrong size on UNiagaraDataInterfaceUObjectPropertyReader");
static_assert(offsetof(UNiagaraDataInterfaceUObjectPropertyReader, UObjectParameterBinding) == 0x000038, "Member 'UNiagaraDataInterfaceUObjectPropertyReader::UObjectParameterBinding' has a wrong offset!");
static_assert(offsetof(UNiagaraDataInterfaceUObjectPropertyReader, PropertyRemap) == 0x000050, "Member 'UNiagaraDataInterfaceUObjectPropertyReader::PropertyRemap' has a wrong offset!");
static_assert(offsetof(UNiagaraDataInterfaceUObjectPropertyReader, SourceActor) == 0x000060, "Member 'UNiagaraDataInterfaceUObjectPropertyReader::SourceActor' has a wrong offset!");
static_assert(offsetof(UNiagaraDataInterfaceUObjectPropertyReader, SourceActorComponentClass) == 0x000088, "Member 'UNiagaraDataInterfaceUObjectPropertyReader::SourceActorComponentClass' has a wrong offset!");

class UNiagaraDataInterfaceVirtualTexture final : public UNiagaraDataInterface
{
public:
	class URuntimeVirtualTexture*                 Texture;
	struct FNiagaraUserParameterBinding           TextureUserParameter;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"NiagaraDataInterfaceVirtualTexture">();
	}
	static class UNiagaraDataInterfaceVirtualTexture* GetDefaultObj()
	{
		return GetDefaultObjImpl<UNiagaraDataInterfaceVirtualTexture>();
	}
};
static_assert(alignof(UNiagaraDataInterfaceVirtualTexture) == 0x000008, "Wrong alignment on UNiagaraDataInterfaceVirtualTexture");
static_assert(sizeof(UNiagaraDataInterfaceVirtualTexture) == 0x000058, "Wrong size on UNiagaraDataInterfaceVirtualTexture");
static_assert(offsetof(UNiagaraDataInterfaceVirtualTexture, Texture) == 0x000038, "Member 'UNiagaraDataInterfaceVirtualTexture::Texture' has a wrong offset!");
static_assert(offsetof(UNiagaraDataInterfaceVirtualTexture, TextureUserParameter) == 0x000040, "Member 'UNiagaraDataInterfaceVirtualTexture::TextureUserParameter' has a wrong offset!");

class UMovieSceneNiagaraSystemSpawnSection final : public UMovieSceneSection
{
public:
	ENiagaraSystemSpawnSectionStartBehavior       SectionStartBehavior;
	ENiagaraSystemSpawnSectionEvaluateBehavior    SectionEvaluateBehavior;
	ENiagaraSystemSpawnSectionEndBehavior         SectionEndBehavior;
	ENiagaraAgeUpdateMode                         AgeUpdateMode;
	bool                                          bAllowScalability;
	uint8                                         Pad_FE[0x2];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"MovieSceneNiagaraSystemSpawnSection">();
	}
	static class UMovieSceneNiagaraSystemSpawnSection* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMovieSceneNiagaraSystemSpawnSection>();
	}
};
static_assert(alignof(UMovieSceneNiagaraSystemSpawnSection) == 0x000008, "Wrong alignment on UMovieSceneNiagaraSystemSpawnSection");
static_assert(sizeof(UMovieSceneNiagaraSystemSpawnSection) == 0x000100, "Wrong size on UMovieSceneNiagaraSystemSpawnSection");
static_assert(offsetof(UMovieSceneNiagaraSystemSpawnSection, SectionStartBehavior) == 0x0000F0, "Member 'UMovieSceneNiagaraSystemSpawnSection::SectionStartBehavior' has a wrong offset!");
static_assert(offsetof(UMovieSceneNiagaraSystemSpawnSection, SectionEvaluateBehavior) == 0x0000F4, "Member 'UMovieSceneNiagaraSystemSpawnSection::SectionEvaluateBehavior' has a wrong offset!");
static_assert(offsetof(UMovieSceneNiagaraSystemSpawnSection, SectionEndBehavior) == 0x0000F8, "Member 'UMovieSceneNiagaraSystemSpawnSection::SectionEndBehavior' has a wrong offset!");
static_assert(offsetof(UMovieSceneNiagaraSystemSpawnSection, AgeUpdateMode) == 0x0000FC, "Member 'UMovieSceneNiagaraSystemSpawnSection::AgeUpdateMode' has a wrong offset!");
static_assert(offsetof(UMovieSceneNiagaraSystemSpawnSection, bAllowScalability) == 0x0000FD, "Member 'UMovieSceneNiagaraSystemSpawnSection::bAllowScalability' has a wrong offset!");

class UMovieSceneNiagaraTrack : public UMovieSceneNameableTrack
{
public:
	TArray<class UMovieSceneSection*>             Sections;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"MovieSceneNiagaraTrack">();
	}
	static class UMovieSceneNiagaraTrack* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMovieSceneNiagaraTrack>();
	}
};
static_assert(alignof(UMovieSceneNiagaraTrack) == 0x000008, "Wrong alignment on UMovieSceneNiagaraTrack");
static_assert(sizeof(UMovieSceneNiagaraTrack) == 0x0000A8, "Wrong size on UMovieSceneNiagaraTrack");
static_assert(offsetof(UMovieSceneNiagaraTrack, Sections) == 0x000098, "Member 'UMovieSceneNiagaraTrack::Sections' has a wrong offset!");

class UMovieSceneNiagaraSystemTrack final : public UMovieSceneNiagaraTrack
{
public:
	uint8                                         Pad_A8[0x8];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"MovieSceneNiagaraSystemTrack">();
	}
	static class UMovieSceneNiagaraSystemTrack* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMovieSceneNiagaraSystemTrack>();
	}
};
static_assert(alignof(UMovieSceneNiagaraSystemTrack) == 0x000008, "Wrong alignment on UMovieSceneNiagaraSystemTrack");
static_assert(sizeof(UMovieSceneNiagaraSystemTrack) == 0x0000B0, "Wrong size on UMovieSceneNiagaraSystemTrack");

class UMovieSceneNiagaraParameterTrack : public UMovieSceneNiagaraTrack
{
public:
	struct FNiagaraVariable                       Parameter;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"MovieSceneNiagaraParameterTrack">();
	}
	static class UMovieSceneNiagaraParameterTrack* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMovieSceneNiagaraParameterTrack>();
	}
};
static_assert(alignof(UMovieSceneNiagaraParameterTrack) == 0x000008, "Wrong alignment on UMovieSceneNiagaraParameterTrack");
static_assert(sizeof(UMovieSceneNiagaraParameterTrack) == 0x0000C0, "Wrong size on UMovieSceneNiagaraParameterTrack");
static_assert(offsetof(UMovieSceneNiagaraParameterTrack, Parameter) == 0x0000A8, "Member 'UMovieSceneNiagaraParameterTrack::Parameter' has a wrong offset!");

class UMovieSceneNiagaraBoolParameterTrack final : public UMovieSceneNiagaraParameterTrack
{
public:
	uint8                                         Pad_C0[0x8];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"MovieSceneNiagaraBoolParameterTrack">();
	}
	static class UMovieSceneNiagaraBoolParameterTrack* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMovieSceneNiagaraBoolParameterTrack>();
	}
};
static_assert(alignof(UMovieSceneNiagaraBoolParameterTrack) == 0x000008, "Wrong alignment on UMovieSceneNiagaraBoolParameterTrack");
static_assert(sizeof(UMovieSceneNiagaraBoolParameterTrack) == 0x0000C8, "Wrong size on UMovieSceneNiagaraBoolParameterTrack");

class UMovieSceneNiagaraColorParameterTrack final : public UMovieSceneNiagaraParameterTrack
{
public:
	uint8                                         Pad_C0[0x8];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"MovieSceneNiagaraColorParameterTrack">();
	}
	static class UMovieSceneNiagaraColorParameterTrack* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMovieSceneNiagaraColorParameterTrack>();
	}
};
static_assert(alignof(UMovieSceneNiagaraColorParameterTrack) == 0x000008, "Wrong alignment on UMovieSceneNiagaraColorParameterTrack");
static_assert(sizeof(UMovieSceneNiagaraColorParameterTrack) == 0x0000C8, "Wrong size on UMovieSceneNiagaraColorParameterTrack");

class UMovieSceneNiagaraFloatParameterTrack final : public UMovieSceneNiagaraParameterTrack
{
public:
	uint8                                         Pad_C0[0x8];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"MovieSceneNiagaraFloatParameterTrack">();
	}
	static class UMovieSceneNiagaraFloatParameterTrack* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMovieSceneNiagaraFloatParameterTrack>();
	}
};
static_assert(alignof(UMovieSceneNiagaraFloatParameterTrack) == 0x000008, "Wrong alignment on UMovieSceneNiagaraFloatParameterTrack");
static_assert(sizeof(UMovieSceneNiagaraFloatParameterTrack) == 0x0000C8, "Wrong size on UMovieSceneNiagaraFloatParameterTrack");

class UMovieSceneNiagaraIntegerParameterTrack final : public UMovieSceneNiagaraParameterTrack
{
public:
	uint8                                         Pad_C0[0x8];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"MovieSceneNiagaraIntegerParameterTrack">();
	}
	static class UMovieSceneNiagaraIntegerParameterTrack* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMovieSceneNiagaraIntegerParameterTrack>();
	}
};
static_assert(alignof(UMovieSceneNiagaraIntegerParameterTrack) == 0x000008, "Wrong alignment on UMovieSceneNiagaraIntegerParameterTrack");
static_assert(sizeof(UMovieSceneNiagaraIntegerParameterTrack) == 0x0000C8, "Wrong size on UMovieSceneNiagaraIntegerParameterTrack");

class UMovieSceneNiagaraVectorParameterTrack final : public UMovieSceneNiagaraParameterTrack
{
public:
	uint8                                         Pad_C0[0x8];
	int32                                         ChannelsUsed;
	uint8                                         Pad_CC[0x4];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"MovieSceneNiagaraVectorParameterTrack">();
	}
	static class UMovieSceneNiagaraVectorParameterTrack* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMovieSceneNiagaraVectorParameterTrack>();
	}
};
static_assert(alignof(UMovieSceneNiagaraVectorParameterTrack) == 0x000008, "Wrong alignment on UMovieSceneNiagaraVectorParameterTrack");
static_assert(sizeof(UMovieSceneNiagaraVectorParameterTrack) == 0x0000D0, "Wrong size on UMovieSceneNiagaraVectorParameterTrack");
static_assert(offsetof(UMovieSceneNiagaraVectorParameterTrack, ChannelsUsed) == 0x0000C8, "Member 'UMovieSceneNiagaraVectorParameterTrack::ChannelsUsed' has a wrong offset!");

class ANiagaraActor : public AActor
{
public:
	class UNiagaraComponent*                      NiagaraComponent;
	uint8                                         bDestroyOnSystemFinish : 1;
	uint8                                         Pad_291[0x7];

public:
	void OnNiagaraSystemFinished(class UNiagaraComponent* FinishedComponent);
	void SetDestroyOnSystemFinish(bool bShouldDestroyOnSystemFinish);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"NiagaraActor">();
	}
	static class ANiagaraActor* GetDefaultObj()
	{
		return GetDefaultObjImpl<ANiagaraActor>();
	}
};
static_assert(alignof(ANiagaraActor) == 0x000008, "Wrong alignment on ANiagaraActor");
static_assert(sizeof(ANiagaraActor) == 0x000298, "Wrong size on ANiagaraActor");
static_assert(offsetof(ANiagaraActor, NiagaraComponent) == 0x000288, "Member 'ANiagaraActor::NiagaraComponent' has a wrong offset!");

class UNiagaraBakerOutput : public UObject
{
public:
	class FString                                 OutputName;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"NiagaraBakerOutput">();
	}
	static class UNiagaraBakerOutput* GetDefaultObj()
	{
		return GetDefaultObjImpl<UNiagaraBakerOutput>();
	}
};
static_assert(alignof(UNiagaraBakerOutput) == 0x000008, "Wrong alignment on UNiagaraBakerOutput");
static_assert(sizeof(UNiagaraBakerOutput) == 0x000038, "Wrong size on UNiagaraBakerOutput");
static_assert(offsetof(UNiagaraBakerOutput, OutputName) == 0x000028, "Member 'UNiagaraBakerOutput::OutputName' has a wrong offset!");

class UNiagaraBakerOutputSimCache final : public UNiagaraBakerOutput
{
public:
	class FString                                 SimCacheAssetPathFormat;
	struct FNiagaraSimCacheCreateParameters       CreateParameters;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"NiagaraBakerOutputSimCache">();
	}
	static class UNiagaraBakerOutputSimCache* GetDefaultObj()
	{
		return GetDefaultObjImpl<UNiagaraBakerOutputSimCache>();
	}
};
static_assert(alignof(UNiagaraBakerOutputSimCache) == 0x000008, "Wrong alignment on UNiagaraBakerOutputSimCache");
static_assert(sizeof(UNiagaraBakerOutputSimCache) == 0x000080, "Wrong size on UNiagaraBakerOutputSimCache");
static_assert(offsetof(UNiagaraBakerOutputSimCache, SimCacheAssetPathFormat) == 0x000038, "Member 'UNiagaraBakerOutputSimCache::SimCacheAssetPathFormat' has a wrong offset!");
static_assert(offsetof(UNiagaraBakerOutputSimCache, CreateParameters) == 0x000048, "Member 'UNiagaraBakerOutputSimCache::CreateParameters' has a wrong offset!");

class UNiagaraBakerOutputTexture2D final : public UNiagaraBakerOutput
{
public:
	struct FNiagaraBakerTextureSource             SourceBinding;
	uint8                                         bGenerateAtlas : 1;
	uint8                                         bGenerateFrames : 1;
	uint8                                         bExportFrames : 1;
	uint8                                         bSetTextureAddressX : 1;
	uint8                                         bSetTextureAddressY : 1;
	uint8                                         Pad_51[0x3];
	struct FIntPoint                              FrameSize;
	struct FIntPoint                              AtlasTextureSize;
	uint8                                         Pad_64[0x8];
	ETextureAddress                               TextureAddressX;
	ETextureAddress                               TextureAddressY;
	uint8                                         Pad_6E[0x2];
	class FString                                 AtlasAssetPathFormat;
	class FString                                 FramesAssetPathFormat;
	class FString                                 FramesExportPathFormat;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"NiagaraBakerOutputTexture2D">();
	}
	static class UNiagaraBakerOutputTexture2D* GetDefaultObj()
	{
		return GetDefaultObjImpl<UNiagaraBakerOutputTexture2D>();
	}
};
static_assert(alignof(UNiagaraBakerOutputTexture2D) == 0x000008, "Wrong alignment on UNiagaraBakerOutputTexture2D");
static_assert(sizeof(UNiagaraBakerOutputTexture2D) == 0x0000A0, "Wrong size on UNiagaraBakerOutputTexture2D");
static_assert(offsetof(UNiagaraBakerOutputTexture2D, SourceBinding) == 0x000038, "Member 'UNiagaraBakerOutputTexture2D::SourceBinding' has a wrong offset!");
static_assert(offsetof(UNiagaraBakerOutputTexture2D, FrameSize) == 0x000054, "Member 'UNiagaraBakerOutputTexture2D::FrameSize' has a wrong offset!");
static_assert(offsetof(UNiagaraBakerOutputTexture2D, AtlasTextureSize) == 0x00005C, "Member 'UNiagaraBakerOutputTexture2D::AtlasTextureSize' has a wrong offset!");
static_assert(offsetof(UNiagaraBakerOutputTexture2D, TextureAddressX) == 0x00006C, "Member 'UNiagaraBakerOutputTexture2D::TextureAddressX' has a wrong offset!");
static_assert(offsetof(UNiagaraBakerOutputTexture2D, TextureAddressY) == 0x00006D, "Member 'UNiagaraBakerOutputTexture2D::TextureAddressY' has a wrong offset!");
static_assert(offsetof(UNiagaraBakerOutputTexture2D, AtlasAssetPathFormat) == 0x000070, "Member 'UNiagaraBakerOutputTexture2D::AtlasAssetPathFormat' has a wrong offset!");
static_assert(offsetof(UNiagaraBakerOutputTexture2D, FramesAssetPathFormat) == 0x000080, "Member 'UNiagaraBakerOutputTexture2D::FramesAssetPathFormat' has a wrong offset!");
static_assert(offsetof(UNiagaraBakerOutputTexture2D, FramesExportPathFormat) == 0x000090, "Member 'UNiagaraBakerOutputTexture2D::FramesExportPathFormat' has a wrong offset!");

class UNiagaraBakerOutputVolumeTexture final : public UNiagaraBakerOutput
{
public:
	struct FNiagaraBakerTextureSource             SourceBinding;
	uint8                                         bGenerateAtlas : 1;
	uint8                                         bGenerateFrames : 1;
	uint8                                         bExportFrames : 1;
	uint8                                         Pad_51[0x7];
	class FString                                 AtlasAssetPathFormat;
	class FString                                 FramesAssetPathFormat;
	class FString                                 FramesExportPathFormat;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"NiagaraBakerOutputVolumeTexture">();
	}
	static class UNiagaraBakerOutputVolumeTexture* GetDefaultObj()
	{
		return GetDefaultObjImpl<UNiagaraBakerOutputVolumeTexture>();
	}
};
static_assert(alignof(UNiagaraBakerOutputVolumeTexture) == 0x000008, "Wrong alignment on UNiagaraBakerOutputVolumeTexture");
static_assert(sizeof(UNiagaraBakerOutputVolumeTexture) == 0x000088, "Wrong size on UNiagaraBakerOutputVolumeTexture");
static_assert(offsetof(UNiagaraBakerOutputVolumeTexture, SourceBinding) == 0x000038, "Member 'UNiagaraBakerOutputVolumeTexture::SourceBinding' has a wrong offset!");
static_assert(offsetof(UNiagaraBakerOutputVolumeTexture, AtlasAssetPathFormat) == 0x000058, "Member 'UNiagaraBakerOutputVolumeTexture::AtlasAssetPathFormat' has a wrong offset!");
static_assert(offsetof(UNiagaraBakerOutputVolumeTexture, FramesAssetPathFormat) == 0x000068, "Member 'UNiagaraBakerOutputVolumeTexture::FramesAssetPathFormat' has a wrong offset!");
static_assert(offsetof(UNiagaraBakerOutputVolumeTexture, FramesExportPathFormat) == 0x000078, "Member 'UNiagaraBakerOutputVolumeTexture::FramesExportPathFormat' has a wrong offset!");

class UNiagaraBakerSettings final : public UObject
{
public:
	float                                         StartSeconds;
	float                                         DurationSeconds;
	int32                                         FramesPerSecond;
	uint8                                         bPreviewLooping : 1;
	uint8                                         Pad_35[0x3];
	struct FIntPoint                              FramesPerDimension;
	TArray<class UNiagaraBakerOutput*>            Outputs;
	TArray<struct FNiagaraBakerCameraSettings>    CameraSettings;
	int32                                         CurrentCameraIndex;
	class FName                                   BakeQualityLevel;
	uint8                                         bRenderComponentOnly : 1;
	uint8                                         Pad_69[0x7];
	TArray<struct FNiagaraBakerTextureSettings>   OutputTextures;
	ENiagaraBakerViewMode                         CameraViewportMode;
	uint8                                         Pad_84[0x4];
	struct FVector                                CameraViewportLocation[0x7];
	struct FRotator                               CameraViewportRotation[0x7];
	float                                         CameraOrbitDistance;
	float                                         CameraFOV;
	float                                         CameraOrthoWidth;
	uint8                                         bUseCameraAspectRatio : 1;
	uint8                                         Pad_1E5[0x3];
	float                                         CameraAspectRatio;
	uint8                                         Pad_1EC[0x4];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"NiagaraBakerSettings">();
	}
	static class UNiagaraBakerSettings* GetDefaultObj()
	{
		return GetDefaultObjImpl<UNiagaraBakerSettings>();
	}
};
static_assert(alignof(UNiagaraBakerSettings) == 0x000008, "Wrong alignment on UNiagaraBakerSettings");
static_assert(sizeof(UNiagaraBakerSettings) == 0x0001F0, "Wrong size on UNiagaraBakerSettings");
static_assert(offsetof(UNiagaraBakerSettings, StartSeconds) == 0x000028, "Member 'UNiagaraBakerSettings::StartSeconds' has a wrong offset!");
static_assert(offsetof(UNiagaraBakerSettings, DurationSeconds) == 0x00002C, "Member 'UNiagaraBakerSettings::DurationSeconds' has a wrong offset!");
static_assert(offsetof(UNiagaraBakerSettings, FramesPerSecond) == 0x000030, "Member 'UNiagaraBakerSettings::FramesPerSecond' has a wrong offset!");
static_assert(offsetof(UNiagaraBakerSettings, FramesPerDimension) == 0x000038, "Member 'UNiagaraBakerSettings::FramesPerDimension' has a wrong offset!");
static_assert(offsetof(UNiagaraBakerSettings, Outputs) == 0x000040, "Member 'UNiagaraBakerSettings::Outputs' has a wrong offset!");
static_assert(offsetof(UNiagaraBakerSettings, CameraSettings) == 0x000050, "Member 'UNiagaraBakerSettings::CameraSettings' has a wrong offset!");
static_assert(offsetof(UNiagaraBakerSettings, CurrentCameraIndex) == 0x000060, "Member 'UNiagaraBakerSettings::CurrentCameraIndex' has a wrong offset!");
static_assert(offsetof(UNiagaraBakerSettings, BakeQualityLevel) == 0x000064, "Member 'UNiagaraBakerSettings::BakeQualityLevel' has a wrong offset!");
static_assert(offsetof(UNiagaraBakerSettings, OutputTextures) == 0x000070, "Member 'UNiagaraBakerSettings::OutputTextures' has a wrong offset!");
static_assert(offsetof(UNiagaraBakerSettings, CameraViewportMode) == 0x000080, "Member 'UNiagaraBakerSettings::CameraViewportMode' has a wrong offset!");
static_assert(offsetof(UNiagaraBakerSettings, CameraViewportLocation) == 0x000088, "Member 'UNiagaraBakerSettings::CameraViewportLocation' has a wrong offset!");
static_assert(offsetof(UNiagaraBakerSettings, CameraViewportRotation) == 0x000130, "Member 'UNiagaraBakerSettings::CameraViewportRotation' has a wrong offset!");
static_assert(offsetof(UNiagaraBakerSettings, CameraOrbitDistance) == 0x0001D8, "Member 'UNiagaraBakerSettings::CameraOrbitDistance' has a wrong offset!");
static_assert(offsetof(UNiagaraBakerSettings, CameraFOV) == 0x0001DC, "Member 'UNiagaraBakerSettings::CameraFOV' has a wrong offset!");
static_assert(offsetof(UNiagaraBakerSettings, CameraOrthoWidth) == 0x0001E0, "Member 'UNiagaraBakerSettings::CameraOrthoWidth' has a wrong offset!");
static_assert(offsetof(UNiagaraBakerSettings, CameraAspectRatio) == 0x0001E8, "Member 'UNiagaraBakerSettings::CameraAspectRatio' has a wrong offset!");

class UNiagaraComponent : public UFXSystemComponent
{
public:
	class UNiagaraSystem*                         Asset;
	ENiagaraTickBehavior                          TickBehavior;
	uint8                                         Pad_571[0x3];
	int32                                         RandomSeedOffset;
	struct FNiagaraUserRedirectionParameterStore  OverrideParameters;
	uint8                                         bForceSolo : 1;
	uint8                                         bEnableGpuComputeDebug : 1;
	uint8                                         BitPad_650_2 : 6;
	uint8                                         Pad_651[0x37];
	uint8                                         bAutoDestroy : 1;
	uint8                                         bRenderingEnabled : 1;
	uint8                                         bAutoManageAttachment : 1;
	uint8                                         bAutoAttachWeldSimulatedBodies : 1;
	uint8                                         Pad_689[0x3];
	float                                         MaxTimeBeforeForceUpdateTransform;
	uint8                                         Pad_690[0x8];
	TMulticastInlineDelegate<void(class UNiagaraComponent* PSystem)> OnSystemFinished;
	TWeakObjectPtr<class USceneComponent>         AutoAttachParent;
	class FName                                   AutoAttachSocketName;
	EAttachmentRule                               AutoAttachLocationRule;
	EAttachmentRule                               AutoAttachRotationRule;
	EAttachmentRule                               AutoAttachScaleRule;
	uint8                                         Pad_6B7[0x9];
	uint8                                         BitPad_6C0_0 : 4;
	uint8                                         bAllowScalability : 1;
	uint8                                         Pad_6C1[0x12F];
	class UNiagaraSimCache*                       SimCache;
	class UNiagaraCullProxyComponent*             CullProxy;

public:
	void AdvanceSimulation(int32 TickCount, float TickDeltaSeconds);
	void AdvanceSimulationByTime(float SimulateTime, float TickDeltaSeconds);
	void ClearEmitterFixedBounds(class FName EmitterName);
	void ClearSimCache(bool bResetSystem);
	void ClearSystemFixedBounds();
	class UNiagaraDataInterface* GetDataInterface(const class FString& Name_0);
	TArray<struct FVector> GetNiagaraParticlePositions_DebugOnly(const class FString& InEmitterName);
	TArray<float> GetNiagaraParticleValues_DebugOnly(const class FString& InEmitterName, const class FString& InValueName);
	TArray<struct FVector> GetNiagaraParticleValueVec3_DebugOnly(const class FString& InEmitterName, const class FString& InValueName);
	void InitForPerformanceBaseline();
	void ReinitializeSystem();
	void ResetSystem();
	void SeekToDesiredAge(float InDesiredAge);
	void SetAgeUpdateMode(ENiagaraAgeUpdateMode InAgeUpdateMode);
	void SetAllowScalability(bool bAllow);
	void SetAsset(class UNiagaraSystem* InAsset, bool bResetExistingOverrideParameters);
	void SetAutoDestroy(bool bInAutoDestroy);
	void SetCanRenderWhileSeeking(bool bInCanRenderWhileSeeking);
	void SetCustomTimeDilation(float Dilation);
	void SetDesiredAge(float InDesiredAge);
	void SetEmitterFixedBounds(class FName EmitterName, const struct FBox& LocalBounds);
	void SetForceLocalPlayerEffect(bool bIsPlayerEffect);
	void SetForceSolo(bool bInForceSolo);
	void SetGpuComputeDebug(bool bEnableDebug);
	void SetLockDesiredAgeDeltaTimeToSeekDelta(bool bLock);
	void SetMaxSimTime(float InMaxTime);
	void SetNiagaraVariableActor(const class FString& InVariableName, class AActor* Actor);
	void SetNiagaraVariableBool(const class FString& InVariableName, bool InValue);
	void SetNiagaraVariableFloat(const class FString& InVariableName, float InValue);
	void SetNiagaraVariableInt(const class FString& InVariableName, int32 InValue);
	void SetNiagaraVariableLinearColor(const class FString& InVariableName, const struct FLinearColor& InValue);
	void SetNiagaraVariableMatrix(const class FString& InVariableName, const struct FMatrix& InValue);
	void SetNiagaraVariableObject(const class FString& InVariableName, class UObject* Object);
	void SetNiagaraVariablePosition(const class FString& InVariableName, const struct FVector& InValue);
	void SetNiagaraVariableQuat(const class FString& InVariableName, const struct FQuat& InValue);
	void SetNiagaraVariableVec2(const class FString& InVariableName, const struct FVector2D& InValue);
	void SetNiagaraVariableVec3(const class FString& InVariableName, const struct FVector& InValue);
	void SetNiagaraVariableVec4(const class FString& InVariableName, const struct FVector4& InValue);
	void SetPaused(bool bInPaused);
	void SetPreviewLODDistance(bool bEnablePreviewLODDistance, float PreviewLODDistance, float PreviewMaxDistance);
	void SetRandomSeedOffset(int32 NewRandomSeedOffset);
	void SetRenderingEnabled(bool bInRenderingEnabled);
	void SetSeekDelta(float InSeekDelta);
	void SetSimCache(class UNiagaraSimCache* SimCache_0, bool bResetSystem);
	void SetSystemFixedBounds(const struct FBox& LocalBounds);
	void SetTickBehavior(ENiagaraTickBehavior NewTickBehavior);
	void SetVariableActor(class FName InVariableName, class AActor* Actor);
	void SetVariableBool(class FName InVariableName, bool InValue);
	void SetVariableFloat(class FName InVariableName, float InValue);
	void SetVariableInt(class FName InVariableName, int32 InValue);
	void SetVariableLinearColor(class FName InVariableName, const struct FLinearColor& InValue);
	void SetVariableMaterial(class FName InVariableName, class UMaterialInterface* Object);
	void SetVariableMatrix(class FName InVariableName, const struct FMatrix& InValue);
	void SetVariableObject(class FName InVariableName, class UObject* Object);
	void SetVariablePosition(class FName InVariableName, const struct FVector& InValue);
	void SetVariableQuat(class FName InVariableName, const struct FQuat& InValue);
	void SetVariableStaticMesh(class FName InVariableName, class UStaticMesh* InValue);
	void SetVariableTexture(class FName InVariableName, class UTexture* Texture);
	void SetVariableTextureRenderTarget(class FName InVariableName, class UTextureRenderTarget* TextureRenderTarget);
	void SetVariableVec2(class FName InVariableName, const struct FVector2D& InValue);
	void SetVariableVec3(class FName InVariableName, const struct FVector& InValue);
	void SetVariableVec4(class FName InVariableName, const struct FVector4& InValue);

	ENiagaraAgeUpdateMode GetAgeUpdateMode() const;
	bool GetAllowScalability() const;
	class UNiagaraSystem* GetAsset() const;
	float GetCustomTimeDilation() const;
	float GetDesiredAge() const;
	struct FBox GetEmitterFixedBounds(class FName EmitterName) const;
	bool GetForceLocalPlayerEffect() const;
	bool GetForceSolo() const;
	bool GetLockDesiredAgeDeltaTimeToSeekDelta() const;
	float GetMaxSimTime() const;
	float GetPreviewLODDistance() const;
	bool GetPreviewLODDistanceEnabled() const;
	int32 GetRandomSeedOffset() const;
	float GetSeekDelta() const;
	class UNiagaraSimCache* GetSimCache() const;
	struct FBox GetSystemFixedBounds() const;
	ENiagaraTickBehavior GetTickBehavior() const;
	bool IsPaused() const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"NiagaraComponent">();
	}
	static class UNiagaraComponent* GetDefaultObj()
	{
		return GetDefaultObjImpl<UNiagaraComponent>();
	}
};
static_assert(alignof(UNiagaraComponent) == 0x000010, "Wrong alignment on UNiagaraComponent");
static_assert(sizeof(UNiagaraComponent) == 0x000800, "Wrong size on UNiagaraComponent");
static_assert(offsetof(UNiagaraComponent, Asset) == 0x000568, "Member 'UNiagaraComponent::Asset' has a wrong offset!");
static_assert(offsetof(UNiagaraComponent, TickBehavior) == 0x000570, "Member 'UNiagaraComponent::TickBehavior' has a wrong offset!");
static_assert(offsetof(UNiagaraComponent, RandomSeedOffset) == 0x000574, "Member 'UNiagaraComponent::RandomSeedOffset' has a wrong offset!");
static_assert(offsetof(UNiagaraComponent, OverrideParameters) == 0x000578, "Member 'UNiagaraComponent::OverrideParameters' has a wrong offset!");
static_assert(offsetof(UNiagaraComponent, MaxTimeBeforeForceUpdateTransform) == 0x00068C, "Member 'UNiagaraComponent::MaxTimeBeforeForceUpdateTransform' has a wrong offset!");
static_assert(offsetof(UNiagaraComponent, OnSystemFinished) == 0x000698, "Member 'UNiagaraComponent::OnSystemFinished' has a wrong offset!");
static_assert(offsetof(UNiagaraComponent, AutoAttachParent) == 0x0006A8, "Member 'UNiagaraComponent::AutoAttachParent' has a wrong offset!");
static_assert(offsetof(UNiagaraComponent, AutoAttachSocketName) == 0x0006B0, "Member 'UNiagaraComponent::AutoAttachSocketName' has a wrong offset!");
static_assert(offsetof(UNiagaraComponent, AutoAttachLocationRule) == 0x0006B4, "Member 'UNiagaraComponent::AutoAttachLocationRule' has a wrong offset!");
static_assert(offsetof(UNiagaraComponent, AutoAttachRotationRule) == 0x0006B5, "Member 'UNiagaraComponent::AutoAttachRotationRule' has a wrong offset!");
static_assert(offsetof(UNiagaraComponent, AutoAttachScaleRule) == 0x0006B6, "Member 'UNiagaraComponent::AutoAttachScaleRule' has a wrong offset!");
static_assert(offsetof(UNiagaraComponent, SimCache) == 0x0007F0, "Member 'UNiagaraComponent::SimCache' has a wrong offset!");
static_assert(offsetof(UNiagaraComponent, CullProxy) == 0x0007F8, "Member 'UNiagaraComponent::CullProxy' has a wrong offset!");

class UNiagaraComponentPool final : public UObject
{
public:
	TMap<class UNiagaraSystem*, struct FNCPool>   WorldParticleSystemPools;
	uint8                                         Pad_78[0x8];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"NiagaraComponentPool">();
	}
	static class UNiagaraComponentPool* GetDefaultObj()
	{
		return GetDefaultObjImpl<UNiagaraComponentPool>();
	}
};
static_assert(alignof(UNiagaraComponentPool) == 0x000008, "Wrong alignment on UNiagaraComponentPool");
static_assert(sizeof(UNiagaraComponentPool) == 0x000080, "Wrong size on UNiagaraComponentPool");
static_assert(offsetof(UNiagaraComponentPool, WorldParticleSystemPools) == 0x000028, "Member 'UNiagaraComponentPool::WorldParticleSystemPools' has a wrong offset!");

class UNiagaraRendererProperties : public UNiagaraMergeable
{
public:
	struct FNiagaraPlatformSet                    Platforms;
	int32                                         SortOrderHint;
	ENiagaraRendererMotionVectorSetting           MotionVectorSetting;
	struct FNiagaraVariableAttributeBinding       RendererEnabledBinding;
	bool                                          bIsEnabled;
	bool                                          bAllowInCullProxies;
	uint8                                         Pad_A2[0x2];
	struct FGuid                                  OuterEmitterVersion;
	bool                                          bMotionBlurEnabled;
	uint8                                         Pad_B5[0x13];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"NiagaraRendererProperties">();
	}
	static class UNiagaraRendererProperties* GetDefaultObj()
	{
		return GetDefaultObjImpl<UNiagaraRendererProperties>();
	}
};
static_assert(alignof(UNiagaraRendererProperties) == 0x000008, "Wrong alignment on UNiagaraRendererProperties");
static_assert(sizeof(UNiagaraRendererProperties) == 0x0000C8, "Wrong size on UNiagaraRendererProperties");
static_assert(offsetof(UNiagaraRendererProperties, Platforms) == 0x000028, "Member 'UNiagaraRendererProperties::Platforms' has a wrong offset!");
static_assert(offsetof(UNiagaraRendererProperties, SortOrderHint) == 0x000058, "Member 'UNiagaraRendererProperties::SortOrderHint' has a wrong offset!");
static_assert(offsetof(UNiagaraRendererProperties, MotionVectorSetting) == 0x00005C, "Member 'UNiagaraRendererProperties::MotionVectorSetting' has a wrong offset!");
static_assert(offsetof(UNiagaraRendererProperties, RendererEnabledBinding) == 0x000060, "Member 'UNiagaraRendererProperties::RendererEnabledBinding' has a wrong offset!");
static_assert(offsetof(UNiagaraRendererProperties, bIsEnabled) == 0x0000A0, "Member 'UNiagaraRendererProperties::bIsEnabled' has a wrong offset!");
static_assert(offsetof(UNiagaraRendererProperties, bAllowInCullProxies) == 0x0000A1, "Member 'UNiagaraRendererProperties::bAllowInCullProxies' has a wrong offset!");
static_assert(offsetof(UNiagaraRendererProperties, OuterEmitterVersion) == 0x0000A4, "Member 'UNiagaraRendererProperties::OuterEmitterVersion' has a wrong offset!");
static_assert(offsetof(UNiagaraRendererProperties, bMotionBlurEnabled) == 0x0000B4, "Member 'UNiagaraRendererProperties::bMotionBlurEnabled' has a wrong offset!");

class UNiagaraComponentRendererProperties final : public UNiagaraRendererProperties
{
public:
	TSubclassOf<class USceneComponent>            ComponentType;
	uint32                                        ComponentCountLimit;
	uint8                                         Pad_D4[0x4];
	struct FNiagaraVariableAttributeBinding       EnabledBinding;
	struct FNiagaraVariableAttributeBinding       RendererVisibilityTagBinding;
	bool                                          bAssignComponentsOnParticleID;
	bool                                          bCreateComponentFirstParticleFrame;
	bool                                          bOnlyActivateNewlyAquiredComponents;
	uint8                                         Pad_15B[0x1];
	int32                                         RendererVisibility;
	class USceneComponent*                        TemplateComponent;
	TArray<struct FNiagaraComponentPropertyBinding> PropertyBindings;
	uint8                                         Pad_178[0x70];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"NiagaraComponentRendererProperties">();
	}
	static class UNiagaraComponentRendererProperties* GetDefaultObj()
	{
		return GetDefaultObjImpl<UNiagaraComponentRendererProperties>();
	}
};
static_assert(alignof(UNiagaraComponentRendererProperties) == 0x000008, "Wrong alignment on UNiagaraComponentRendererProperties");
static_assert(sizeof(UNiagaraComponentRendererProperties) == 0x0001E8, "Wrong size on UNiagaraComponentRendererProperties");
static_assert(offsetof(UNiagaraComponentRendererProperties, ComponentType) == 0x0000C8, "Member 'UNiagaraComponentRendererProperties::ComponentType' has a wrong offset!");
static_assert(offsetof(UNiagaraComponentRendererProperties, ComponentCountLimit) == 0x0000D0, "Member 'UNiagaraComponentRendererProperties::ComponentCountLimit' has a wrong offset!");
static_assert(offsetof(UNiagaraComponentRendererProperties, EnabledBinding) == 0x0000D8, "Member 'UNiagaraComponentRendererProperties::EnabledBinding' has a wrong offset!");
static_assert(offsetof(UNiagaraComponentRendererProperties, RendererVisibilityTagBinding) == 0x000118, "Member 'UNiagaraComponentRendererProperties::RendererVisibilityTagBinding' has a wrong offset!");
static_assert(offsetof(UNiagaraComponentRendererProperties, bAssignComponentsOnParticleID) == 0x000158, "Member 'UNiagaraComponentRendererProperties::bAssignComponentsOnParticleID' has a wrong offset!");
static_assert(offsetof(UNiagaraComponentRendererProperties, bCreateComponentFirstParticleFrame) == 0x000159, "Member 'UNiagaraComponentRendererProperties::bCreateComponentFirstParticleFrame' has a wrong offset!");
static_assert(offsetof(UNiagaraComponentRendererProperties, bOnlyActivateNewlyAquiredComponents) == 0x00015A, "Member 'UNiagaraComponentRendererProperties::bOnlyActivateNewlyAquiredComponents' has a wrong offset!");
static_assert(offsetof(UNiagaraComponentRendererProperties, RendererVisibility) == 0x00015C, "Member 'UNiagaraComponentRendererProperties::RendererVisibility' has a wrong offset!");
static_assert(offsetof(UNiagaraComponentRendererProperties, TemplateComponent) == 0x000160, "Member 'UNiagaraComponentRendererProperties::TemplateComponent' has a wrong offset!");
static_assert(offsetof(UNiagaraComponentRendererProperties, PropertyBindings) == 0x000168, "Member 'UNiagaraComponentRendererProperties::PropertyBindings' has a wrong offset!");

class UNiagaraCullProxyComponent final : public UNiagaraComponent
{
public:
	TArray<struct FNiagaraCulledComponentInfo>    Instances;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"NiagaraCullProxyComponent">();
	}
	static class UNiagaraCullProxyComponent* GetDefaultObj()
	{
		return GetDefaultObjImpl<UNiagaraCullProxyComponent>();
	}
};
static_assert(alignof(UNiagaraCullProxyComponent) == 0x000010, "Wrong alignment on UNiagaraCullProxyComponent");
static_assert(sizeof(UNiagaraCullProxyComponent) == 0x000810, "Wrong size on UNiagaraCullProxyComponent");
static_assert(offsetof(UNiagaraCullProxyComponent, Instances) == 0x000800, "Member 'UNiagaraCullProxyComponent::Instances' has a wrong offset!");

class UNiagaraDataChannelLibrary final : public UBlueprintFunctionLibrary
{
public:
	static class UNiagaraDataChannelHandler* GetNiagaraDataChannel(const class UObject* WorldContextObject, class FName Channel);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"NiagaraDataChannelLibrary">();
	}
	static class UNiagaraDataChannelLibrary* GetDefaultObj()
	{
		return GetDefaultObjImpl<UNiagaraDataChannelLibrary>();
	}
};
static_assert(alignof(UNiagaraDataChannelLibrary) == 0x000008, "Wrong alignment on UNiagaraDataChannelLibrary");
static_assert(sizeof(UNiagaraDataChannelLibrary) == 0x000028, "Wrong size on UNiagaraDataChannelLibrary");

class UNiagaraDataInterface2DArrayTexture final : public UNiagaraDataInterface
{
public:
	class UTexture*                               Texture;
	struct FNiagaraUserParameterBinding           TextureUserParameter;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"NiagaraDataInterface2DArrayTexture">();
	}
	static class UNiagaraDataInterface2DArrayTexture* GetDefaultObj()
	{
		return GetDefaultObjImpl<UNiagaraDataInterface2DArrayTexture>();
	}
};
static_assert(alignof(UNiagaraDataInterface2DArrayTexture) == 0x000008, "Wrong alignment on UNiagaraDataInterface2DArrayTexture");
static_assert(sizeof(UNiagaraDataInterface2DArrayTexture) == 0x000058, "Wrong size on UNiagaraDataInterface2DArrayTexture");
static_assert(offsetof(UNiagaraDataInterface2DArrayTexture, Texture) == 0x000038, "Member 'UNiagaraDataInterface2DArrayTexture::Texture' has a wrong offset!");
static_assert(offsetof(UNiagaraDataInterface2DArrayTexture, TextureUserParameter) == 0x000040, "Member 'UNiagaraDataInterface2DArrayTexture::TextureUserParameter' has a wrong offset!");

class UNiagaraDataInterfaceRWBase : public UNiagaraDataInterface
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"NiagaraDataInterfaceRWBase">();
	}
	static class UNiagaraDataInterfaceRWBase* GetDefaultObj()
	{
		return GetDefaultObjImpl<UNiagaraDataInterfaceRWBase>();
	}
};
static_assert(alignof(UNiagaraDataInterfaceRWBase) == 0x000008, "Wrong alignment on UNiagaraDataInterfaceRWBase");
static_assert(sizeof(UNiagaraDataInterfaceRWBase) == 0x000038, "Wrong size on UNiagaraDataInterfaceRWBase");

class UNiagaraDataInterfaceArray : public UNiagaraDataInterfaceRWBase
{
public:
	uint8                                         Pad_38[0x8];
	ENiagaraGpuSyncMode                           GpuSyncMode;
	int32                                         MaxElements;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"NiagaraDataInterfaceArray">();
	}
	static class UNiagaraDataInterfaceArray* GetDefaultObj()
	{
		return GetDefaultObjImpl<UNiagaraDataInterfaceArray>();
	}
};
static_assert(alignof(UNiagaraDataInterfaceArray) == 0x000008, "Wrong alignment on UNiagaraDataInterfaceArray");
static_assert(sizeof(UNiagaraDataInterfaceArray) == 0x000048, "Wrong size on UNiagaraDataInterfaceArray");
static_assert(offsetof(UNiagaraDataInterfaceArray, GpuSyncMode) == 0x000040, "Member 'UNiagaraDataInterfaceArray::GpuSyncMode' has a wrong offset!");
static_assert(offsetof(UNiagaraDataInterfaceArray, MaxElements) == 0x000044, "Member 'UNiagaraDataInterfaceArray::MaxElements' has a wrong offset!");

class UNiagaraDataInterfaceArrayFloat final : public UNiagaraDataInterfaceArray
{
public:
	TArray<float>                                 FloatData;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"NiagaraDataInterfaceArrayFloat">();
	}
	static class UNiagaraDataInterfaceArrayFloat* GetDefaultObj()
	{
		return GetDefaultObjImpl<UNiagaraDataInterfaceArrayFloat>();
	}
};
static_assert(alignof(UNiagaraDataInterfaceArrayFloat) == 0x000008, "Wrong alignment on UNiagaraDataInterfaceArrayFloat");
static_assert(sizeof(UNiagaraDataInterfaceArrayFloat) == 0x000058, "Wrong size on UNiagaraDataInterfaceArrayFloat");
static_assert(offsetof(UNiagaraDataInterfaceArrayFloat, FloatData) == 0x000048, "Member 'UNiagaraDataInterfaceArrayFloat::FloatData' has a wrong offset!");

class UNiagaraDataInterfaceArrayFloat2 final : public UNiagaraDataInterfaceArray
{
public:
	TArray<struct FVector2f>                      InternalFloatData;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"NiagaraDataInterfaceArrayFloat2">();
	}
	static class UNiagaraDataInterfaceArrayFloat2* GetDefaultObj()
	{
		return GetDefaultObjImpl<UNiagaraDataInterfaceArrayFloat2>();
	}
};
static_assert(alignof(UNiagaraDataInterfaceArrayFloat2) == 0x000008, "Wrong alignment on UNiagaraDataInterfaceArrayFloat2");
static_assert(sizeof(UNiagaraDataInterfaceArrayFloat2) == 0x000058, "Wrong size on UNiagaraDataInterfaceArrayFloat2");
static_assert(offsetof(UNiagaraDataInterfaceArrayFloat2, InternalFloatData) == 0x000048, "Member 'UNiagaraDataInterfaceArrayFloat2::InternalFloatData' has a wrong offset!");

class UNiagaraDataInterfaceArrayFloat3 final : public UNiagaraDataInterfaceArray
{
public:
	TArray<struct FVector3f>                      InternalFloatData;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"NiagaraDataInterfaceArrayFloat3">();
	}
	static class UNiagaraDataInterfaceArrayFloat3* GetDefaultObj()
	{
		return GetDefaultObjImpl<UNiagaraDataInterfaceArrayFloat3>();
	}
};
static_assert(alignof(UNiagaraDataInterfaceArrayFloat3) == 0x000008, "Wrong alignment on UNiagaraDataInterfaceArrayFloat3");
static_assert(sizeof(UNiagaraDataInterfaceArrayFloat3) == 0x000058, "Wrong size on UNiagaraDataInterfaceArrayFloat3");
static_assert(offsetof(UNiagaraDataInterfaceArrayFloat3, InternalFloatData) == 0x000048, "Member 'UNiagaraDataInterfaceArrayFloat3::InternalFloatData' has a wrong offset!");

class UNiagaraDataInterfaceArrayPosition final : public UNiagaraDataInterfaceArray
{
public:
	TArray<struct FNiagaraPosition>               PositionData;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"NiagaraDataInterfaceArrayPosition">();
	}
	static class UNiagaraDataInterfaceArrayPosition* GetDefaultObj()
	{
		return GetDefaultObjImpl<UNiagaraDataInterfaceArrayPosition>();
	}
};
static_assert(alignof(UNiagaraDataInterfaceArrayPosition) == 0x000008, "Wrong alignment on UNiagaraDataInterfaceArrayPosition");
static_assert(sizeof(UNiagaraDataInterfaceArrayPosition) == 0x000058, "Wrong size on UNiagaraDataInterfaceArrayPosition");
static_assert(offsetof(UNiagaraDataInterfaceArrayPosition, PositionData) == 0x000048, "Member 'UNiagaraDataInterfaceArrayPosition::PositionData' has a wrong offset!");

class UNiagaraDataInterfaceArrayFloat4 final : public UNiagaraDataInterfaceArray
{
public:
	TArray<struct FVector4f>                      InternalFloatData;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"NiagaraDataInterfaceArrayFloat4">();
	}
	static class UNiagaraDataInterfaceArrayFloat4* GetDefaultObj()
	{
		return GetDefaultObjImpl<UNiagaraDataInterfaceArrayFloat4>();
	}
};
static_assert(alignof(UNiagaraDataInterfaceArrayFloat4) == 0x000008, "Wrong alignment on UNiagaraDataInterfaceArrayFloat4");
static_assert(sizeof(UNiagaraDataInterfaceArrayFloat4) == 0x000058, "Wrong size on UNiagaraDataInterfaceArrayFloat4");
static_assert(offsetof(UNiagaraDataInterfaceArrayFloat4, InternalFloatData) == 0x000048, "Member 'UNiagaraDataInterfaceArrayFloat4::InternalFloatData' has a wrong offset!");

class UNiagaraDataInterfaceArrayColor final : public UNiagaraDataInterfaceArray
{
public:
	TArray<struct FLinearColor>                   ColorData;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"NiagaraDataInterfaceArrayColor">();
	}
	static class UNiagaraDataInterfaceArrayColor* GetDefaultObj()
	{
		return GetDefaultObjImpl<UNiagaraDataInterfaceArrayColor>();
	}
};
static_assert(alignof(UNiagaraDataInterfaceArrayColor) == 0x000008, "Wrong alignment on UNiagaraDataInterfaceArrayColor");
static_assert(sizeof(UNiagaraDataInterfaceArrayColor) == 0x000058, "Wrong size on UNiagaraDataInterfaceArrayColor");
static_assert(offsetof(UNiagaraDataInterfaceArrayColor, ColorData) == 0x000048, "Member 'UNiagaraDataInterfaceArrayColor::ColorData' has a wrong offset!");

class UNiagaraDataInterfaceArrayQuat final : public UNiagaraDataInterfaceArray
{
public:
	TArray<struct FQuat4f>                        InternalQuatData;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"NiagaraDataInterfaceArrayQuat">();
	}
	static class UNiagaraDataInterfaceArrayQuat* GetDefaultObj()
	{
		return GetDefaultObjImpl<UNiagaraDataInterfaceArrayQuat>();
	}
};
static_assert(alignof(UNiagaraDataInterfaceArrayQuat) == 0x000008, "Wrong alignment on UNiagaraDataInterfaceArrayQuat");
static_assert(sizeof(UNiagaraDataInterfaceArrayQuat) == 0x000058, "Wrong size on UNiagaraDataInterfaceArrayQuat");
static_assert(offsetof(UNiagaraDataInterfaceArrayQuat, InternalQuatData) == 0x000048, "Member 'UNiagaraDataInterfaceArrayQuat::InternalQuatData' has a wrong offset!");

class UNiagaraDataInterfaceArrayFunctionLibrary final : public UBlueprintFunctionLibrary
{
public:
	static TArray<bool> GetNiagaraArrayBool(class UNiagaraComponent* NiagaraSystem, class FName OverrideName);
	static bool GetNiagaraArrayBoolValue(class UNiagaraComponent* NiagaraSystem, class FName OverrideName, int32 Index_0);
	static TArray<struct FLinearColor> GetNiagaraArrayColor(class UNiagaraComponent* NiagaraSystem, class FName OverrideName);
	static struct FLinearColor GetNiagaraArrayColorValue(class UNiagaraComponent* NiagaraSystem, class FName OverrideName, int32 Index_0);
	static TArray<float> GetNiagaraArrayFloat(class UNiagaraComponent* NiagaraSystem, class FName OverrideName);
	static float GetNiagaraArrayFloatValue(class UNiagaraComponent* NiagaraSystem, class FName OverrideName, int32 Index_0);
	static TArray<int32> GetNiagaraArrayInt32(class UNiagaraComponent* NiagaraSystem, class FName OverrideName);
	static int32 GetNiagaraArrayInt32Value(class UNiagaraComponent* NiagaraSystem, class FName OverrideName, int32 Index_0);
	static TArray<struct FVector> GetNiagaraArrayPosition(class UNiagaraComponent* NiagaraSystem, class FName OverrideName);
	static struct FVector GetNiagaraArrayPositionValue(class UNiagaraComponent* NiagaraSystem, class FName OverrideName, int32 Index_0);
	static TArray<struct FQuat> GetNiagaraArrayQuat(class UNiagaraComponent* NiagaraSystem, class FName OverrideName);
	static struct FQuat GetNiagaraArrayQuatValue(class UNiagaraComponent* NiagaraSystem, class FName OverrideName, int32 Index_0);
	static TArray<int32> GetNiagaraArrayUInt8(class UNiagaraComponent* NiagaraSystem, class FName OverrideName);
	static int32 GetNiagaraArrayUInt8Value(class UNiagaraComponent* NiagaraSystem, class FName OverrideName, int32 Index_0);
	static TArray<struct FVector> GetNiagaraArrayVector(class UNiagaraComponent* NiagaraSystem, class FName OverrideName);
	static TArray<struct FVector2D> GetNiagaraArrayVector2D(class UNiagaraComponent* NiagaraSystem, class FName OverrideName);
	static struct FVector2D GetNiagaraArrayVector2DValue(class UNiagaraComponent* NiagaraSystem, class FName OverrideName, int32 Index_0);
	static TArray<struct FVector4> GetNiagaraArrayVector4(class UNiagaraComponent* NiagaraSystem, class FName OverrideName);
	static struct FVector4 GetNiagaraArrayVector4Value(class UNiagaraComponent* NiagaraSystem, class FName OverrideName, int32 Index_0);
	static struct FVector GetNiagaraArrayVectorValue(class UNiagaraComponent* NiagaraSystem, class FName OverrideName, int32 Index_0);
	static void SetNiagaraArrayBool(class UNiagaraComponent* NiagaraSystem, class FName OverrideName, const TArray<bool>& ArrayData);
	static void SetNiagaraArrayBoolValue(class UNiagaraComponent* NiagaraSystem, class FName OverrideName, int32 Index_0, const bool& Value, bool bSizeToFit);
	static void SetNiagaraArrayColor(class UNiagaraComponent* NiagaraSystem, class FName OverrideName, const TArray<struct FLinearColor>& ArrayData);
	static void SetNiagaraArrayColorValue(class UNiagaraComponent* NiagaraSystem, class FName OverrideName, int32 Index_0, const struct FLinearColor& Value, bool bSizeToFit);
	static void SetNiagaraArrayFloat(class UNiagaraComponent* NiagaraSystem, class FName OverrideName, const TArray<float>& ArrayData);
	static void SetNiagaraArrayFloatValue(class UNiagaraComponent* NiagaraSystem, class FName OverrideName, int32 Index_0, float Value, bool bSizeToFit);
	static void SetNiagaraArrayInt32(class UNiagaraComponent* NiagaraSystem, class FName OverrideName, const TArray<int32>& ArrayData);
	static void SetNiagaraArrayInt32Value(class UNiagaraComponent* NiagaraSystem, class FName OverrideName, int32 Index_0, int32 Value, bool bSizeToFit);
	static void SetNiagaraArrayPosition(class UNiagaraComponent* NiagaraSystem, class FName OverrideName, const TArray<struct FVector>& ArrayData);
	static void SetNiagaraArrayPositionValue(class UNiagaraComponent* NiagaraSystem, class FName OverrideName, int32 Index_0, const struct FVector& Value, bool bSizeToFit);
	static void SetNiagaraArrayQuat(class UNiagaraComponent* NiagaraSystem, class FName OverrideName, const TArray<struct FQuat>& ArrayData);
	static void SetNiagaraArrayQuatValue(class UNiagaraComponent* NiagaraSystem, class FName OverrideName, int32 Index_0, const struct FQuat& Value, bool bSizeToFit);
	static void SetNiagaraArrayUInt8(class UNiagaraComponent* NiagaraSystem, class FName OverrideName, const TArray<int32>& ArrayData);
	static void SetNiagaraArrayUInt8Value(class UNiagaraComponent* NiagaraSystem, class FName OverrideName, int32 Index_0, int32 Value, bool bSizeToFit);
	static void SetNiagaraArrayVector(class UNiagaraComponent* NiagaraSystem, class FName OverrideName, const TArray<struct FVector>& ArrayData);
	static void SetNiagaraArrayVector2D(class UNiagaraComponent* NiagaraSystem, class FName OverrideName, const TArray<struct FVector2D>& ArrayData);
	static void SetNiagaraArrayVector2DValue(class UNiagaraComponent* NiagaraSystem, class FName OverrideName, int32 Index_0, const struct FVector2D& Value, bool bSizeToFit);
	static void SetNiagaraArrayVector4(class UNiagaraComponent* NiagaraSystem, class FName OverrideName, const TArray<struct FVector4>& ArrayData);
	static void SetNiagaraArrayVector4Value(class UNiagaraComponent* NiagaraSystem, class FName OverrideName, int32 Index_0, const struct FVector4& Value, bool bSizeToFit);
	static void SetNiagaraArrayVectorValue(class UNiagaraComponent* NiagaraSystem, class FName OverrideName, int32 Index_0, const struct FVector& Value, bool bSizeToFit);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"NiagaraDataInterfaceArrayFunctionLibrary">();
	}
	static class UNiagaraDataInterfaceArrayFunctionLibrary* GetDefaultObj()
	{
		return GetDefaultObjImpl<UNiagaraDataInterfaceArrayFunctionLibrary>();
	}
};
static_assert(alignof(UNiagaraDataInterfaceArrayFunctionLibrary) == 0x000008, "Wrong alignment on UNiagaraDataInterfaceArrayFunctionLibrary");
static_assert(sizeof(UNiagaraDataInterfaceArrayFunctionLibrary) == 0x000028, "Wrong size on UNiagaraDataInterfaceArrayFunctionLibrary");

class UNiagaraDataInterfaceArrayInt32 final : public UNiagaraDataInterfaceArray
{
public:
	TArray<int32>                                 IntData;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"NiagaraDataInterfaceArrayInt32">();
	}
	static class UNiagaraDataInterfaceArrayInt32* GetDefaultObj()
	{
		return GetDefaultObjImpl<UNiagaraDataInterfaceArrayInt32>();
	}
};
static_assert(alignof(UNiagaraDataInterfaceArrayInt32) == 0x000008, "Wrong alignment on UNiagaraDataInterfaceArrayInt32");
static_assert(sizeof(UNiagaraDataInterfaceArrayInt32) == 0x000058, "Wrong size on UNiagaraDataInterfaceArrayInt32");
static_assert(offsetof(UNiagaraDataInterfaceArrayInt32, IntData) == 0x000048, "Member 'UNiagaraDataInterfaceArrayInt32::IntData' has a wrong offset!");

class UNiagaraDataInterfaceArrayUInt8 final : public UNiagaraDataInterfaceArray
{
public:
	TArray<uint8>                                 InternalIntData;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"NiagaraDataInterfaceArrayUInt8">();
	}
	static class UNiagaraDataInterfaceArrayUInt8* GetDefaultObj()
	{
		return GetDefaultObjImpl<UNiagaraDataInterfaceArrayUInt8>();
	}
};
static_assert(alignof(UNiagaraDataInterfaceArrayUInt8) == 0x000008, "Wrong alignment on UNiagaraDataInterfaceArrayUInt8");
static_assert(sizeof(UNiagaraDataInterfaceArrayUInt8) == 0x000058, "Wrong size on UNiagaraDataInterfaceArrayUInt8");
static_assert(offsetof(UNiagaraDataInterfaceArrayUInt8, InternalIntData) == 0x000048, "Member 'UNiagaraDataInterfaceArrayUInt8::InternalIntData' has a wrong offset!");

class UNiagaraDataInterfaceArrayBool final : public UNiagaraDataInterfaceArray
{
public:
	TArray<bool>                                  BoolData;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"NiagaraDataInterfaceArrayBool">();
	}
	static class UNiagaraDataInterfaceArrayBool* GetDefaultObj()
	{
		return GetDefaultObjImpl<UNiagaraDataInterfaceArrayBool>();
	}
};
static_assert(alignof(UNiagaraDataInterfaceArrayBool) == 0x000008, "Wrong alignment on UNiagaraDataInterfaceArrayBool");
static_assert(sizeof(UNiagaraDataInterfaceArrayBool) == 0x000058, "Wrong size on UNiagaraDataInterfaceArrayBool");
static_assert(offsetof(UNiagaraDataInterfaceArrayBool, BoolData) == 0x000048, "Member 'UNiagaraDataInterfaceArrayBool::BoolData' has a wrong offset!");

class UNiagaraDataInterfaceArrayNiagaraID final : public UNiagaraDataInterfaceArray
{
public:
	TArray<struct FNiagaraID>                     IntData;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"NiagaraDataInterfaceArrayNiagaraID">();
	}
	static class UNiagaraDataInterfaceArrayNiagaraID* GetDefaultObj()
	{
		return GetDefaultObjImpl<UNiagaraDataInterfaceArrayNiagaraID>();
	}
};
static_assert(alignof(UNiagaraDataInterfaceArrayNiagaraID) == 0x000008, "Wrong alignment on UNiagaraDataInterfaceArrayNiagaraID");
static_assert(sizeof(UNiagaraDataInterfaceArrayNiagaraID) == 0x000058, "Wrong size on UNiagaraDataInterfaceArrayNiagaraID");
static_assert(offsetof(UNiagaraDataInterfaceArrayNiagaraID, IntData) == 0x000048, "Member 'UNiagaraDataInterfaceArrayNiagaraID::IntData' has a wrong offset!");

class UNiagaraDataInterfaceAudioSubmix : public UNiagaraDataInterface
{
public:
	class USoundSubmix*                           Submix;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"NiagaraDataInterfaceAudioSubmix">();
	}
	static class UNiagaraDataInterfaceAudioSubmix* GetDefaultObj()
	{
		return GetDefaultObjImpl<UNiagaraDataInterfaceAudioSubmix>();
	}
};
static_assert(alignof(UNiagaraDataInterfaceAudioSubmix) == 0x000008, "Wrong alignment on UNiagaraDataInterfaceAudioSubmix");
static_assert(sizeof(UNiagaraDataInterfaceAudioSubmix) == 0x000040, "Wrong size on UNiagaraDataInterfaceAudioSubmix");
static_assert(offsetof(UNiagaraDataInterfaceAudioSubmix, Submix) == 0x000038, "Member 'UNiagaraDataInterfaceAudioSubmix::Submix' has a wrong offset!");

class UNiagaraDataInterfaceAudioOscilloscope final : public UNiagaraDataInterface
{
public:
	class USoundSubmix*                           Submix;
	int32                                         Resolution;
	float                                         ScopeInMilliseconds;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"NiagaraDataInterfaceAudioOscilloscope">();
	}
	static class UNiagaraDataInterfaceAudioOscilloscope* GetDefaultObj()
	{
		return GetDefaultObjImpl<UNiagaraDataInterfaceAudioOscilloscope>();
	}
};
static_assert(alignof(UNiagaraDataInterfaceAudioOscilloscope) == 0x000008, "Wrong alignment on UNiagaraDataInterfaceAudioOscilloscope");
static_assert(sizeof(UNiagaraDataInterfaceAudioOscilloscope) == 0x000048, "Wrong size on UNiagaraDataInterfaceAudioOscilloscope");
static_assert(offsetof(UNiagaraDataInterfaceAudioOscilloscope, Submix) == 0x000038, "Member 'UNiagaraDataInterfaceAudioOscilloscope::Submix' has a wrong offset!");
static_assert(offsetof(UNiagaraDataInterfaceAudioOscilloscope, Resolution) == 0x000040, "Member 'UNiagaraDataInterfaceAudioOscilloscope::Resolution' has a wrong offset!");
static_assert(offsetof(UNiagaraDataInterfaceAudioOscilloscope, ScopeInMilliseconds) == 0x000044, "Member 'UNiagaraDataInterfaceAudioOscilloscope::ScopeInMilliseconds' has a wrong offset!");

class UNiagaraDataInterfaceAudioPlayerSettings final : public UObject
{
public:
	bool                                          bOverrideConcurrency;
	uint8                                         Pad_29[0x7];
	class USoundConcurrency*                      Concurrency;
	bool                                          bOverrideAttenuationSettings;
	uint8                                         Pad_39[0x7];
	struct FSoundAttenuationSettings              AttenuationSettings;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"NiagaraDataInterfaceAudioPlayerSettings">();
	}
	static class UNiagaraDataInterfaceAudioPlayerSettings* GetDefaultObj()
	{
		return GetDefaultObjImpl<UNiagaraDataInterfaceAudioPlayerSettings>();
	}
};
static_assert(alignof(UNiagaraDataInterfaceAudioPlayerSettings) == 0x000008, "Wrong alignment on UNiagaraDataInterfaceAudioPlayerSettings");
static_assert(sizeof(UNiagaraDataInterfaceAudioPlayerSettings) == 0x000410, "Wrong size on UNiagaraDataInterfaceAudioPlayerSettings");
static_assert(offsetof(UNiagaraDataInterfaceAudioPlayerSettings, bOverrideConcurrency) == 0x000028, "Member 'UNiagaraDataInterfaceAudioPlayerSettings::bOverrideConcurrency' has a wrong offset!");
static_assert(offsetof(UNiagaraDataInterfaceAudioPlayerSettings, Concurrency) == 0x000030, "Member 'UNiagaraDataInterfaceAudioPlayerSettings::Concurrency' has a wrong offset!");
static_assert(offsetof(UNiagaraDataInterfaceAudioPlayerSettings, bOverrideAttenuationSettings) == 0x000038, "Member 'UNiagaraDataInterfaceAudioPlayerSettings::bOverrideAttenuationSettings' has a wrong offset!");
static_assert(offsetof(UNiagaraDataInterfaceAudioPlayerSettings, AttenuationSettings) == 0x000040, "Member 'UNiagaraDataInterfaceAudioPlayerSettings::AttenuationSettings' has a wrong offset!");

class UNiagaraDataInterfaceAudioPlayer final : public UNiagaraDataInterface
{
public:
	class USoundBase*                             SoundToPlay;
	class USoundAttenuation*                      Attenuation;
	class USoundConcurrency*                      Concurrency;
	TArray<class FName>                           ParameterNames;
	struct FNiagaraUserParameterBinding           ConfigurationUserParameter;
	bool                                          bLimitPlaysPerTick;
	uint8                                         Pad_79[0x3];
	int32                                         MaxPlaysPerTick;
	bool                                          bStopWhenComponentIsDestroyed;
	bool                                          bAllowLoopingOneShotSounds;
	uint8                                         Pad_82[0x6];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"NiagaraDataInterfaceAudioPlayer">();
	}
	static class UNiagaraDataInterfaceAudioPlayer* GetDefaultObj()
	{
		return GetDefaultObjImpl<UNiagaraDataInterfaceAudioPlayer>();
	}
};
static_assert(alignof(UNiagaraDataInterfaceAudioPlayer) == 0x000008, "Wrong alignment on UNiagaraDataInterfaceAudioPlayer");
static_assert(sizeof(UNiagaraDataInterfaceAudioPlayer) == 0x000088, "Wrong size on UNiagaraDataInterfaceAudioPlayer");
static_assert(offsetof(UNiagaraDataInterfaceAudioPlayer, SoundToPlay) == 0x000038, "Member 'UNiagaraDataInterfaceAudioPlayer::SoundToPlay' has a wrong offset!");
static_assert(offsetof(UNiagaraDataInterfaceAudioPlayer, Attenuation) == 0x000040, "Member 'UNiagaraDataInterfaceAudioPlayer::Attenuation' has a wrong offset!");
static_assert(offsetof(UNiagaraDataInterfaceAudioPlayer, Concurrency) == 0x000048, "Member 'UNiagaraDataInterfaceAudioPlayer::Concurrency' has a wrong offset!");
static_assert(offsetof(UNiagaraDataInterfaceAudioPlayer, ParameterNames) == 0x000050, "Member 'UNiagaraDataInterfaceAudioPlayer::ParameterNames' has a wrong offset!");
static_assert(offsetof(UNiagaraDataInterfaceAudioPlayer, ConfigurationUserParameter) == 0x000060, "Member 'UNiagaraDataInterfaceAudioPlayer::ConfigurationUserParameter' has a wrong offset!");
static_assert(offsetof(UNiagaraDataInterfaceAudioPlayer, bLimitPlaysPerTick) == 0x000078, "Member 'UNiagaraDataInterfaceAudioPlayer::bLimitPlaysPerTick' has a wrong offset!");
static_assert(offsetof(UNiagaraDataInterfaceAudioPlayer, MaxPlaysPerTick) == 0x00007C, "Member 'UNiagaraDataInterfaceAudioPlayer::MaxPlaysPerTick' has a wrong offset!");
static_assert(offsetof(UNiagaraDataInterfaceAudioPlayer, bStopWhenComponentIsDestroyed) == 0x000080, "Member 'UNiagaraDataInterfaceAudioPlayer::bStopWhenComponentIsDestroyed' has a wrong offset!");
static_assert(offsetof(UNiagaraDataInterfaceAudioPlayer, bAllowLoopingOneShotSounds) == 0x000081, "Member 'UNiagaraDataInterfaceAudioPlayer::bAllowLoopingOneShotSounds' has a wrong offset!");

class UNiagaraDataInterfaceAudioSpectrum final : public UNiagaraDataInterfaceAudioSubmix
{
public:
	int32                                         Resolution;
	float                                         MinimumFrequency;
	float                                         MaximumFrequency;
	float                                         NoiseFloorDb;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"NiagaraDataInterfaceAudioSpectrum">();
	}
	static class UNiagaraDataInterfaceAudioSpectrum* GetDefaultObj()
	{
		return GetDefaultObjImpl<UNiagaraDataInterfaceAudioSpectrum>();
	}
};
static_assert(alignof(UNiagaraDataInterfaceAudioSpectrum) == 0x000008, "Wrong alignment on UNiagaraDataInterfaceAudioSpectrum");
static_assert(sizeof(UNiagaraDataInterfaceAudioSpectrum) == 0x000050, "Wrong size on UNiagaraDataInterfaceAudioSpectrum");
static_assert(offsetof(UNiagaraDataInterfaceAudioSpectrum, Resolution) == 0x000040, "Member 'UNiagaraDataInterfaceAudioSpectrum::Resolution' has a wrong offset!");
static_assert(offsetof(UNiagaraDataInterfaceAudioSpectrum, MinimumFrequency) == 0x000044, "Member 'UNiagaraDataInterfaceAudioSpectrum::MinimumFrequency' has a wrong offset!");
static_assert(offsetof(UNiagaraDataInterfaceAudioSpectrum, MaximumFrequency) == 0x000048, "Member 'UNiagaraDataInterfaceAudioSpectrum::MaximumFrequency' has a wrong offset!");
static_assert(offsetof(UNiagaraDataInterfaceAudioSpectrum, NoiseFloorDb) == 0x00004C, "Member 'UNiagaraDataInterfaceAudioSpectrum::NoiseFloorDb' has a wrong offset!");

class UNiagaraDataInterfaceCamera final : public UNiagaraDataInterface
{
public:
	int32                                         PlayerControllerIndex;
	bool                                          bRequireCurrentFrameData;
	uint8                                         Pad_3D[0x3];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"NiagaraDataInterfaceCamera">();
	}
	static class UNiagaraDataInterfaceCamera* GetDefaultObj()
	{
		return GetDefaultObjImpl<UNiagaraDataInterfaceCamera>();
	}
};
static_assert(alignof(UNiagaraDataInterfaceCamera) == 0x000008, "Wrong alignment on UNiagaraDataInterfaceCamera");
static_assert(sizeof(UNiagaraDataInterfaceCamera) == 0x000040, "Wrong size on UNiagaraDataInterfaceCamera");
static_assert(offsetof(UNiagaraDataInterfaceCamera, PlayerControllerIndex) == 0x000038, "Member 'UNiagaraDataInterfaceCamera::PlayerControllerIndex' has a wrong offset!");
static_assert(offsetof(UNiagaraDataInterfaceCamera, bRequireCurrentFrameData) == 0x00003C, "Member 'UNiagaraDataInterfaceCamera::bRequireCurrentFrameData' has a wrong offset!");

class UNiagaraDataInterfaceCollisionQuery final : public UNiagaraDataInterface
{
public:
	uint8                                         Pad_38[0x8];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"NiagaraDataInterfaceCollisionQuery">();
	}
	static class UNiagaraDataInterfaceCollisionQuery* GetDefaultObj()
	{
		return GetDefaultObjImpl<UNiagaraDataInterfaceCollisionQuery>();
	}
};
static_assert(alignof(UNiagaraDataInterfaceCollisionQuery) == 0x000008, "Wrong alignment on UNiagaraDataInterfaceCollisionQuery");
static_assert(sizeof(UNiagaraDataInterfaceCollisionQuery) == 0x000040, "Wrong size on UNiagaraDataInterfaceCollisionQuery");

class UNiagaraDataInterfaceCurveBase : public UNiagaraDataInterface
{
public:
	TArray<float>                                 ShaderLUT;
	float                                         LUTMinTime;
	float                                         LUTMaxTime;
	float                                         LUTInvTimeRange;
	float                                         LUTNumSamplesMinusOne;
	uint8                                         Pad_58[0x4];
	uint8                                         bUseLUT : 1;
	uint8                                         bExposeCurve : 1;
	uint8                                         Pad_5D[0x3];
	class FName                                   ExposedName;
	uint8                                         Pad_64[0x4];
	class UTexture2D*                             ExposedTexture;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"NiagaraDataInterfaceCurveBase">();
	}
	static class UNiagaraDataInterfaceCurveBase* GetDefaultObj()
	{
		return GetDefaultObjImpl<UNiagaraDataInterfaceCurveBase>();
	}
};
static_assert(alignof(UNiagaraDataInterfaceCurveBase) == 0x000008, "Wrong alignment on UNiagaraDataInterfaceCurveBase");
static_assert(sizeof(UNiagaraDataInterfaceCurveBase) == 0x000070, "Wrong size on UNiagaraDataInterfaceCurveBase");
static_assert(offsetof(UNiagaraDataInterfaceCurveBase, ShaderLUT) == 0x000038, "Member 'UNiagaraDataInterfaceCurveBase::ShaderLUT' has a wrong offset!");
static_assert(offsetof(UNiagaraDataInterfaceCurveBase, LUTMinTime) == 0x000048, "Member 'UNiagaraDataInterfaceCurveBase::LUTMinTime' has a wrong offset!");
static_assert(offsetof(UNiagaraDataInterfaceCurveBase, LUTMaxTime) == 0x00004C, "Member 'UNiagaraDataInterfaceCurveBase::LUTMaxTime' has a wrong offset!");
static_assert(offsetof(UNiagaraDataInterfaceCurveBase, LUTInvTimeRange) == 0x000050, "Member 'UNiagaraDataInterfaceCurveBase::LUTInvTimeRange' has a wrong offset!");
static_assert(offsetof(UNiagaraDataInterfaceCurveBase, LUTNumSamplesMinusOne) == 0x000054, "Member 'UNiagaraDataInterfaceCurveBase::LUTNumSamplesMinusOne' has a wrong offset!");
static_assert(offsetof(UNiagaraDataInterfaceCurveBase, ExposedName) == 0x000060, "Member 'UNiagaraDataInterfaceCurveBase::ExposedName' has a wrong offset!");
static_assert(offsetof(UNiagaraDataInterfaceCurveBase, ExposedTexture) == 0x000068, "Member 'UNiagaraDataInterfaceCurveBase::ExposedTexture' has a wrong offset!");

class UNiagaraDataInterfaceColorCurve final : public UNiagaraDataInterfaceCurveBase
{
public:
	struct FRichCurve                             RedCurve;
	struct FRichCurve                             GreenCurve;
	struct FRichCurve                             BlueCurve;
	struct FRichCurve                             AlphaCurve;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"NiagaraDataInterfaceColorCurve">();
	}
	static class UNiagaraDataInterfaceColorCurve* GetDefaultObj()
	{
		return GetDefaultObjImpl<UNiagaraDataInterfaceColorCurve>();
	}
};
static_assert(alignof(UNiagaraDataInterfaceColorCurve) == 0x000008, "Wrong alignment on UNiagaraDataInterfaceColorCurve");
static_assert(sizeof(UNiagaraDataInterfaceColorCurve) == 0x000270, "Wrong size on UNiagaraDataInterfaceColorCurve");
static_assert(offsetof(UNiagaraDataInterfaceColorCurve, RedCurve) == 0x000070, "Member 'UNiagaraDataInterfaceColorCurve::RedCurve' has a wrong offset!");
static_assert(offsetof(UNiagaraDataInterfaceColorCurve, GreenCurve) == 0x0000F0, "Member 'UNiagaraDataInterfaceColorCurve::GreenCurve' has a wrong offset!");
static_assert(offsetof(UNiagaraDataInterfaceColorCurve, BlueCurve) == 0x000170, "Member 'UNiagaraDataInterfaceColorCurve::BlueCurve' has a wrong offset!");
static_assert(offsetof(UNiagaraDataInterfaceColorCurve, AlphaCurve) == 0x0001F0, "Member 'UNiagaraDataInterfaceColorCurve::AlphaCurve' has a wrong offset!");

class UNiagaraDataInterfaceCubeTexture final : public UNiagaraDataInterface
{
public:
	class UTexture*                               Texture;
	struct FNiagaraUserParameterBinding           TextureUserParameter;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"NiagaraDataInterfaceCubeTexture">();
	}
	static class UNiagaraDataInterfaceCubeTexture* GetDefaultObj()
	{
		return GetDefaultObjImpl<UNiagaraDataInterfaceCubeTexture>();
	}
};
static_assert(alignof(UNiagaraDataInterfaceCubeTexture) == 0x000008, "Wrong alignment on UNiagaraDataInterfaceCubeTexture");
static_assert(sizeof(UNiagaraDataInterfaceCubeTexture) == 0x000058, "Wrong size on UNiagaraDataInterfaceCubeTexture");
static_assert(offsetof(UNiagaraDataInterfaceCubeTexture, Texture) == 0x000038, "Member 'UNiagaraDataInterfaceCubeTexture::Texture' has a wrong offset!");
static_assert(offsetof(UNiagaraDataInterfaceCubeTexture, TextureUserParameter) == 0x000040, "Member 'UNiagaraDataInterfaceCubeTexture::TextureUserParameter' has a wrong offset!");

class UNiagaraDataInterfaceCurlNoise final : public UNiagaraDataInterface
{
public:
	uint32                                        Seed;
	uint8                                         Pad_3C[0x1C];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"NiagaraDataInterfaceCurlNoise">();
	}
	static class UNiagaraDataInterfaceCurlNoise* GetDefaultObj()
	{
		return GetDefaultObjImpl<UNiagaraDataInterfaceCurlNoise>();
	}
};
static_assert(alignof(UNiagaraDataInterfaceCurlNoise) == 0x000008, "Wrong alignment on UNiagaraDataInterfaceCurlNoise");
static_assert(sizeof(UNiagaraDataInterfaceCurlNoise) == 0x000058, "Wrong size on UNiagaraDataInterfaceCurlNoise");
static_assert(offsetof(UNiagaraDataInterfaceCurlNoise, Seed) == 0x000038, "Member 'UNiagaraDataInterfaceCurlNoise::Seed' has a wrong offset!");

class UNiagaraDataInterfaceCurve final : public UNiagaraDataInterfaceCurveBase
{
public:
	struct FRichCurve                             Curve;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"NiagaraDataInterfaceCurve">();
	}
	static class UNiagaraDataInterfaceCurve* GetDefaultObj()
	{
		return GetDefaultObjImpl<UNiagaraDataInterfaceCurve>();
	}
};
static_assert(alignof(UNiagaraDataInterfaceCurve) == 0x000008, "Wrong alignment on UNiagaraDataInterfaceCurve");
static_assert(sizeof(UNiagaraDataInterfaceCurve) == 0x0000F0, "Wrong size on UNiagaraDataInterfaceCurve");
static_assert(offsetof(UNiagaraDataInterfaceCurve, Curve) == 0x000070, "Member 'UNiagaraDataInterfaceCurve::Curve' has a wrong offset!");

class INiagaraParticleCallbackHandler final : public IInterface
{
public:
	void ReceiveParticleData(const TArray<struct FBasicParticleData>& Data, class UNiagaraSystem* NiagaraSystem, const struct FVector& SimulationPositionOffset);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"NiagaraParticleCallbackHandler">();
	}
	static class INiagaraParticleCallbackHandler* GetDefaultObj()
	{
		return GetDefaultObjImpl<INiagaraParticleCallbackHandler>();
	}
};
static_assert(alignof(INiagaraParticleCallbackHandler) == 0x000008, "Wrong alignment on INiagaraParticleCallbackHandler");
static_assert(sizeof(INiagaraParticleCallbackHandler) == 0x000028, "Wrong size on INiagaraParticleCallbackHandler");

class UNiagaraDataInterfaceExport final : public UNiagaraDataInterface
{
public:
	struct FNiagaraUserParameterBinding           CallbackHandlerParameter;
	ENDIExport_GPUAllocationMode                  GPUAllocationMode;
	uint8                                         Pad_51[0x3];
	int32                                         GPUAllocationFixedSize;
	float                                         GPUAllocationPerParticleSize;
	uint8                                         Pad_5C[0x4];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"NiagaraDataInterfaceExport">();
	}
	static class UNiagaraDataInterfaceExport* GetDefaultObj()
	{
		return GetDefaultObjImpl<UNiagaraDataInterfaceExport>();
	}
};
static_assert(alignof(UNiagaraDataInterfaceExport) == 0x000008, "Wrong alignment on UNiagaraDataInterfaceExport");
static_assert(sizeof(UNiagaraDataInterfaceExport) == 0x000060, "Wrong size on UNiagaraDataInterfaceExport");
static_assert(offsetof(UNiagaraDataInterfaceExport, CallbackHandlerParameter) == 0x000038, "Member 'UNiagaraDataInterfaceExport::CallbackHandlerParameter' has a wrong offset!");
static_assert(offsetof(UNiagaraDataInterfaceExport, GPUAllocationMode) == 0x000050, "Member 'UNiagaraDataInterfaceExport::GPUAllocationMode' has a wrong offset!");
static_assert(offsetof(UNiagaraDataInterfaceExport, GPUAllocationFixedSize) == 0x000054, "Member 'UNiagaraDataInterfaceExport::GPUAllocationFixedSize' has a wrong offset!");
static_assert(offsetof(UNiagaraDataInterfaceExport, GPUAllocationPerParticleSize) == 0x000058, "Member 'UNiagaraDataInterfaceExport::GPUAllocationPerParticleSize' has a wrong offset!");

class UNiagaraDataInterfaceGrid2D : public UNiagaraDataInterfaceRWBase
{
public:
	int32                                         NumCellsX;
	int32                                         NumCellsY;
	int32                                         NumCellsMaxAxis;
	int32                                         NumAttributes;
	bool                                          SetGridFromMaxAxis;
	uint8                                         Pad_49[0x7];
	struct FVector2D                              WorldBBoxSize;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"NiagaraDataInterfaceGrid2D">();
	}
	static class UNiagaraDataInterfaceGrid2D* GetDefaultObj()
	{
		return GetDefaultObjImpl<UNiagaraDataInterfaceGrid2D>();
	}
};
static_assert(alignof(UNiagaraDataInterfaceGrid2D) == 0x000008, "Wrong alignment on UNiagaraDataInterfaceGrid2D");
static_assert(sizeof(UNiagaraDataInterfaceGrid2D) == 0x000060, "Wrong size on UNiagaraDataInterfaceGrid2D");
static_assert(offsetof(UNiagaraDataInterfaceGrid2D, NumCellsX) == 0x000038, "Member 'UNiagaraDataInterfaceGrid2D::NumCellsX' has a wrong offset!");
static_assert(offsetof(UNiagaraDataInterfaceGrid2D, NumCellsY) == 0x00003C, "Member 'UNiagaraDataInterfaceGrid2D::NumCellsY' has a wrong offset!");
static_assert(offsetof(UNiagaraDataInterfaceGrid2D, NumCellsMaxAxis) == 0x000040, "Member 'UNiagaraDataInterfaceGrid2D::NumCellsMaxAxis' has a wrong offset!");
static_assert(offsetof(UNiagaraDataInterfaceGrid2D, NumAttributes) == 0x000044, "Member 'UNiagaraDataInterfaceGrid2D::NumAttributes' has a wrong offset!");
static_assert(offsetof(UNiagaraDataInterfaceGrid2D, SetGridFromMaxAxis) == 0x000048, "Member 'UNiagaraDataInterfaceGrid2D::SetGridFromMaxAxis' has a wrong offset!");
static_assert(offsetof(UNiagaraDataInterfaceGrid2D, WorldBBoxSize) == 0x000050, "Member 'UNiagaraDataInterfaceGrid2D::WorldBBoxSize' has a wrong offset!");

class UNiagaraDataInterfaceGrid2DCollection : public UNiagaraDataInterfaceGrid2D
{
public:
	struct FNiagaraUserParameterBinding           RenderTargetUserParameter;
	ENiagaraGpuBufferFormat                       OverrideBufferFormat;
	uint8                                         bOverrideFormat : 1;
	uint8                                         Pad_7A[0x56];
	TMap<uint64, class UTextureRenderTarget2DArray*> ManagedRenderTargets;

public:
	bool FillRawTexture2D(const class UNiagaraComponent* Component, class UTextureRenderTarget2D* Dest, int32* TilesX, int32* TilesY);
	bool FillTexture2D(const class UNiagaraComponent* Component, class UTextureRenderTarget2D* Dest, int32 AttributeIndex);
	void GetRawTextureSize(const class UNiagaraComponent* Component, int32* SizeX, int32* SizeY);
	void GetTextureSize(const class UNiagaraComponent* Component, int32* SizeX, int32* SizeY);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"NiagaraDataInterfaceGrid2DCollection">();
	}
	static class UNiagaraDataInterfaceGrid2DCollection* GetDefaultObj()
	{
		return GetDefaultObjImpl<UNiagaraDataInterfaceGrid2DCollection>();
	}
};
static_assert(alignof(UNiagaraDataInterfaceGrid2DCollection) == 0x000008, "Wrong alignment on UNiagaraDataInterfaceGrid2DCollection");
static_assert(sizeof(UNiagaraDataInterfaceGrid2DCollection) == 0x000120, "Wrong size on UNiagaraDataInterfaceGrid2DCollection");
static_assert(offsetof(UNiagaraDataInterfaceGrid2DCollection, RenderTargetUserParameter) == 0x000060, "Member 'UNiagaraDataInterfaceGrid2DCollection::RenderTargetUserParameter' has a wrong offset!");
static_assert(offsetof(UNiagaraDataInterfaceGrid2DCollection, OverrideBufferFormat) == 0x000078, "Member 'UNiagaraDataInterfaceGrid2DCollection::OverrideBufferFormat' has a wrong offset!");
static_assert(offsetof(UNiagaraDataInterfaceGrid2DCollection, ManagedRenderTargets) == 0x0000D0, "Member 'UNiagaraDataInterfaceGrid2DCollection::ManagedRenderTargets' has a wrong offset!");

class UNiagaraDataInterfaceGrid2DCollectionReader final : public UNiagaraDataInterfaceGrid2DCollection
{
public:
	class FString                                 EmitterName;
	class FString                                 DIName;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"NiagaraDataInterfaceGrid2DCollectionReader">();
	}
	static class UNiagaraDataInterfaceGrid2DCollectionReader* GetDefaultObj()
	{
		return GetDefaultObjImpl<UNiagaraDataInterfaceGrid2DCollectionReader>();
	}
};
static_assert(alignof(UNiagaraDataInterfaceGrid2DCollectionReader) == 0x000008, "Wrong alignment on UNiagaraDataInterfaceGrid2DCollectionReader");
static_assert(sizeof(UNiagaraDataInterfaceGrid2DCollectionReader) == 0x000140, "Wrong size on UNiagaraDataInterfaceGrid2DCollectionReader");
static_assert(offsetof(UNiagaraDataInterfaceGrid2DCollectionReader, EmitterName) == 0x000120, "Member 'UNiagaraDataInterfaceGrid2DCollectionReader::EmitterName' has a wrong offset!");
static_assert(offsetof(UNiagaraDataInterfaceGrid2DCollectionReader, DIName) == 0x000130, "Member 'UNiagaraDataInterfaceGrid2DCollectionReader::DIName' has a wrong offset!");

class UNiagaraDataInterfaceGrid3D : public UNiagaraDataInterfaceRWBase
{
public:
	struct FIntVector                             NumCells;
	float                                         CellSize;
	int32                                         NumCellsMaxAxis;
	ESetResolutionMethod                          SetResolutionMethod;
	struct FVector                                WorldBBoxSize;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"NiagaraDataInterfaceGrid3D">();
	}
	static class UNiagaraDataInterfaceGrid3D* GetDefaultObj()
	{
		return GetDefaultObjImpl<UNiagaraDataInterfaceGrid3D>();
	}
};
static_assert(alignof(UNiagaraDataInterfaceGrid3D) == 0x000008, "Wrong alignment on UNiagaraDataInterfaceGrid3D");
static_assert(sizeof(UNiagaraDataInterfaceGrid3D) == 0x000068, "Wrong size on UNiagaraDataInterfaceGrid3D");
static_assert(offsetof(UNiagaraDataInterfaceGrid3D, NumCells) == 0x000038, "Member 'UNiagaraDataInterfaceGrid3D::NumCells' has a wrong offset!");
static_assert(offsetof(UNiagaraDataInterfaceGrid3D, CellSize) == 0x000044, "Member 'UNiagaraDataInterfaceGrid3D::CellSize' has a wrong offset!");
static_assert(offsetof(UNiagaraDataInterfaceGrid3D, NumCellsMaxAxis) == 0x000048, "Member 'UNiagaraDataInterfaceGrid3D::NumCellsMaxAxis' has a wrong offset!");
static_assert(offsetof(UNiagaraDataInterfaceGrid3D, SetResolutionMethod) == 0x00004C, "Member 'UNiagaraDataInterfaceGrid3D::SetResolutionMethod' has a wrong offset!");
static_assert(offsetof(UNiagaraDataInterfaceGrid3D, WorldBBoxSize) == 0x000050, "Member 'UNiagaraDataInterfaceGrid3D::WorldBBoxSize' has a wrong offset!");

class UNiagaraDataInterfaceGrid3DCollection : public UNiagaraDataInterfaceGrid3D
{
public:
	int32                                         NumAttributes;
	uint8                                         Pad_6C[0x4];
	struct FNiagaraUserParameterBinding           RenderTargetUserParameter;
	ENiagaraGpuBufferFormat                       OverrideBufferFormat;
	uint8                                         bOverrideFormat : 1;
	uint8                                         Pad_8A[0x56];

public:
	bool FillRawVolumeTexture(const class UNiagaraComponent* Component, class UVolumeTexture* Dest, int32* TilesX, int32* TilesY, int32* TileZ);
	bool FillVolumeTexture(const class UNiagaraComponent* Component, class UVolumeTexture* Dest, int32 AttributeIndex);
	void GetRawTextureSize(const class UNiagaraComponent* Component, int32* SizeX, int32* SizeY, int32* SizeZ);
	void GetTextureSize(const class UNiagaraComponent* Component, int32* SizeX, int32* SizeY, int32* SizeZ);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"NiagaraDataInterfaceGrid3DCollection">();
	}
	static class UNiagaraDataInterfaceGrid3DCollection* GetDefaultObj()
	{
		return GetDefaultObjImpl<UNiagaraDataInterfaceGrid3DCollection>();
	}
};
static_assert(alignof(UNiagaraDataInterfaceGrid3DCollection) == 0x000008, "Wrong alignment on UNiagaraDataInterfaceGrid3DCollection");
static_assert(sizeof(UNiagaraDataInterfaceGrid3DCollection) == 0x0000E0, "Wrong size on UNiagaraDataInterfaceGrid3DCollection");
static_assert(offsetof(UNiagaraDataInterfaceGrid3DCollection, NumAttributes) == 0x000068, "Member 'UNiagaraDataInterfaceGrid3DCollection::NumAttributes' has a wrong offset!");
static_assert(offsetof(UNiagaraDataInterfaceGrid3DCollection, RenderTargetUserParameter) == 0x000070, "Member 'UNiagaraDataInterfaceGrid3DCollection::RenderTargetUserParameter' has a wrong offset!");
static_assert(offsetof(UNiagaraDataInterfaceGrid3DCollection, OverrideBufferFormat) == 0x000088, "Member 'UNiagaraDataInterfaceGrid3DCollection::OverrideBufferFormat' has a wrong offset!");

class UNiagaraDataInterfaceGrid3DCollectionReader final : public UNiagaraDataInterfaceGrid3DCollection
{
public:
	class FString                                 EmitterName;
	class FString                                 DIName;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"NiagaraDataInterfaceGrid3DCollectionReader">();
	}
	static class UNiagaraDataInterfaceGrid3DCollectionReader* GetDefaultObj()
	{
		return GetDefaultObjImpl<UNiagaraDataInterfaceGrid3DCollectionReader>();
	}
};
static_assert(alignof(UNiagaraDataInterfaceGrid3DCollectionReader) == 0x000008, "Wrong alignment on UNiagaraDataInterfaceGrid3DCollectionReader");
static_assert(sizeof(UNiagaraDataInterfaceGrid3DCollectionReader) == 0x000100, "Wrong size on UNiagaraDataInterfaceGrid3DCollectionReader");
static_assert(offsetof(UNiagaraDataInterfaceGrid3DCollectionReader, EmitterName) == 0x0000E0, "Member 'UNiagaraDataInterfaceGrid3DCollectionReader::EmitterName' has a wrong offset!");
static_assert(offsetof(UNiagaraDataInterfaceGrid3DCollectionReader, DIName) == 0x0000F0, "Member 'UNiagaraDataInterfaceGrid3DCollectionReader::DIName' has a wrong offset!");

class UNiagaraDataInterfaceIntRenderTarget2D final : public UNiagaraDataInterfaceRWBase
{
public:
	struct FIntPoint                              Size;
	struct FNiagaraUserParameterBinding           RenderTargetUserParameter;
	TMap<uint64, class UTextureRenderTarget2D*>   ManagedRenderTargets;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"NiagaraDataInterfaceIntRenderTarget2D">();
	}
	static class UNiagaraDataInterfaceIntRenderTarget2D* GetDefaultObj()
	{
		return GetDefaultObjImpl<UNiagaraDataInterfaceIntRenderTarget2D>();
	}
};
static_assert(alignof(UNiagaraDataInterfaceIntRenderTarget2D) == 0x000008, "Wrong alignment on UNiagaraDataInterfaceIntRenderTarget2D");
static_assert(sizeof(UNiagaraDataInterfaceIntRenderTarget2D) == 0x0000A8, "Wrong size on UNiagaraDataInterfaceIntRenderTarget2D");
static_assert(offsetof(UNiagaraDataInterfaceIntRenderTarget2D, Size) == 0x000038, "Member 'UNiagaraDataInterfaceIntRenderTarget2D::Size' has a wrong offset!");
static_assert(offsetof(UNiagaraDataInterfaceIntRenderTarget2D, RenderTargetUserParameter) == 0x000040, "Member 'UNiagaraDataInterfaceIntRenderTarget2D::RenderTargetUserParameter' has a wrong offset!");
static_assert(offsetof(UNiagaraDataInterfaceIntRenderTarget2D, ManagedRenderTargets) == 0x000058, "Member 'UNiagaraDataInterfaceIntRenderTarget2D::ManagedRenderTargets' has a wrong offset!");

class UNiagaraDataInterfaceLandscape final : public UNiagaraDataInterface
{
public:
	class AActor*                                 SourceLandscape;
	ENDILandscape_SourceMode                      SourceMode;
	uint8                                         Pad_41[0x7];
	TArray<class UPhysicalMaterial*>              PhysicalMaterials;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"NiagaraDataInterfaceLandscape">();
	}
	static class UNiagaraDataInterfaceLandscape* GetDefaultObj()
	{
		return GetDefaultObjImpl<UNiagaraDataInterfaceLandscape>();
	}
};
static_assert(alignof(UNiagaraDataInterfaceLandscape) == 0x000008, "Wrong alignment on UNiagaraDataInterfaceLandscape");
static_assert(sizeof(UNiagaraDataInterfaceLandscape) == 0x000058, "Wrong size on UNiagaraDataInterfaceLandscape");
static_assert(offsetof(UNiagaraDataInterfaceLandscape, SourceLandscape) == 0x000038, "Member 'UNiagaraDataInterfaceLandscape::SourceLandscape' has a wrong offset!");
static_assert(offsetof(UNiagaraDataInterfaceLandscape, SourceMode) == 0x000040, "Member 'UNiagaraDataInterfaceLandscape::SourceMode' has a wrong offset!");
static_assert(offsetof(UNiagaraDataInterfaceLandscape, PhysicalMaterials) == 0x000048, "Member 'UNiagaraDataInterfaceLandscape::PhysicalMaterials' has a wrong offset!");

class UNiagaraDataInterfaceMeshRendererInfo final : public UNiagaraDataInterface
{
public:
	class UNiagaraMeshRendererProperties*         MeshRenderer;
	uint8                                         Pad_40[0x10];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"NiagaraDataInterfaceMeshRendererInfo">();
	}
	static class UNiagaraDataInterfaceMeshRendererInfo* GetDefaultObj()
	{
		return GetDefaultObjImpl<UNiagaraDataInterfaceMeshRendererInfo>();
	}
};
static_assert(alignof(UNiagaraDataInterfaceMeshRendererInfo) == 0x000008, "Wrong alignment on UNiagaraDataInterfaceMeshRendererInfo");
static_assert(sizeof(UNiagaraDataInterfaceMeshRendererInfo) == 0x000050, "Wrong size on UNiagaraDataInterfaceMeshRendererInfo");
static_assert(offsetof(UNiagaraDataInterfaceMeshRendererInfo, MeshRenderer) == 0x000038, "Member 'UNiagaraDataInterfaceMeshRendererInfo::MeshRenderer' has a wrong offset!");

class UNiagaraDataInterfaceNeighborGrid3D final : public UNiagaraDataInterfaceGrid3D
{
public:
	uint32                                        MaxNeighborsPerCell;
	uint8                                         Pad_6C[0x4];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"NiagaraDataInterfaceNeighborGrid3D">();
	}
	static class UNiagaraDataInterfaceNeighborGrid3D* GetDefaultObj()
	{
		return GetDefaultObjImpl<UNiagaraDataInterfaceNeighborGrid3D>();
	}
};
static_assert(alignof(UNiagaraDataInterfaceNeighborGrid3D) == 0x000008, "Wrong alignment on UNiagaraDataInterfaceNeighborGrid3D");
static_assert(sizeof(UNiagaraDataInterfaceNeighborGrid3D) == 0x000070, "Wrong size on UNiagaraDataInterfaceNeighborGrid3D");
static_assert(offsetof(UNiagaraDataInterfaceNeighborGrid3D, MaxNeighborsPerCell) == 0x000068, "Member 'UNiagaraDataInterfaceNeighborGrid3D::MaxNeighborsPerCell' has a wrong offset!");

class UNiagaraDataInterfaceOcclusion final : public UNiagaraDataInterface
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"NiagaraDataInterfaceOcclusion">();
	}
	static class UNiagaraDataInterfaceOcclusion* GetDefaultObj()
	{
		return GetDefaultObjImpl<UNiagaraDataInterfaceOcclusion>();
	}
};
static_assert(alignof(UNiagaraDataInterfaceOcclusion) == 0x000008, "Wrong alignment on UNiagaraDataInterfaceOcclusion");
static_assert(sizeof(UNiagaraDataInterfaceOcclusion) == 0x000038, "Wrong size on UNiagaraDataInterfaceOcclusion");

class UNiagaraDataInterfaceParticleRead final : public UNiagaraDataInterfaceRWBase
{
public:
	class FString                                 EmitterName;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"NiagaraDataInterfaceParticleRead">();
	}
	static class UNiagaraDataInterfaceParticleRead* GetDefaultObj()
	{
		return GetDefaultObjImpl<UNiagaraDataInterfaceParticleRead>();
	}
};
static_assert(alignof(UNiagaraDataInterfaceParticleRead) == 0x000008, "Wrong alignment on UNiagaraDataInterfaceParticleRead");
static_assert(sizeof(UNiagaraDataInterfaceParticleRead) == 0x000048, "Wrong size on UNiagaraDataInterfaceParticleRead");
static_assert(offsetof(UNiagaraDataInterfaceParticleRead, EmitterName) == 0x000038, "Member 'UNiagaraDataInterfaceParticleRead::EmitterName' has a wrong offset!");

class UNiagaraDataInterfacePlatformSet final : public UNiagaraDataInterface
{
public:
	struct FNiagaraPlatformSet                    Platforms;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"NiagaraDataInterfacePlatformSet">();
	}
	static class UNiagaraDataInterfacePlatformSet* GetDefaultObj()
	{
		return GetDefaultObjImpl<UNiagaraDataInterfacePlatformSet>();
	}
};
static_assert(alignof(UNiagaraDataInterfacePlatformSet) == 0x000008, "Wrong alignment on UNiagaraDataInterfacePlatformSet");
static_assert(sizeof(UNiagaraDataInterfacePlatformSet) == 0x000068, "Wrong size on UNiagaraDataInterfacePlatformSet");
static_assert(offsetof(UNiagaraDataInterfacePlatformSet, Platforms) == 0x000038, "Member 'UNiagaraDataInterfacePlatformSet::Platforms' has a wrong offset!");

class UNiagaraDataInterfaceRasterizationGrid3D final : public UNiagaraDataInterfaceGrid3D
{
public:
	int32                                         NumAttributes;
	float                                         Precision;
	int32                                         ResetValue;
	uint8                                         Pad_74[0x4];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"NiagaraDataInterfaceRasterizationGrid3D">();
	}
	static class UNiagaraDataInterfaceRasterizationGrid3D* GetDefaultObj()
	{
		return GetDefaultObjImpl<UNiagaraDataInterfaceRasterizationGrid3D>();
	}
};
static_assert(alignof(UNiagaraDataInterfaceRasterizationGrid3D) == 0x000008, "Wrong alignment on UNiagaraDataInterfaceRasterizationGrid3D");
static_assert(sizeof(UNiagaraDataInterfaceRasterizationGrid3D) == 0x000078, "Wrong size on UNiagaraDataInterfaceRasterizationGrid3D");
static_assert(offsetof(UNiagaraDataInterfaceRasterizationGrid3D, NumAttributes) == 0x000068, "Member 'UNiagaraDataInterfaceRasterizationGrid3D::NumAttributes' has a wrong offset!");
static_assert(offsetof(UNiagaraDataInterfaceRasterizationGrid3D, Precision) == 0x00006C, "Member 'UNiagaraDataInterfaceRasterizationGrid3D::Precision' has a wrong offset!");
static_assert(offsetof(UNiagaraDataInterfaceRasterizationGrid3D, ResetValue) == 0x000070, "Member 'UNiagaraDataInterfaceRasterizationGrid3D::ResetValue' has a wrong offset!");

class UNiagaraDataInterfaceRenderTarget2D final : public UNiagaraDataInterfaceRWBase
{
public:
	struct FIntPoint                              Size;
	ENiagaraMipMapGeneration                      MipMapGeneration;
	ENiagaraMipMapGenerationType                  MipMapGenerationType;
	ETextureRenderTargetFormat                    OverrideRenderTargetFormat;
	uint8                                         bInheritUserParameterSettings : 1;
	uint8                                         bOverrideFormat : 1;
	uint8                                         Pad_44[0x4];
	struct FNiagaraUserParameterBinding           RenderTargetUserParameter;
	uint8                                         Pad_60[0x50];
	TMap<uint64, class UTextureRenderTarget2D*>   ManagedRenderTargets;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"NiagaraDataInterfaceRenderTarget2D">();
	}
	static class UNiagaraDataInterfaceRenderTarget2D* GetDefaultObj()
	{
		return GetDefaultObjImpl<UNiagaraDataInterfaceRenderTarget2D>();
	}
};
static_assert(alignof(UNiagaraDataInterfaceRenderTarget2D) == 0x000008, "Wrong alignment on UNiagaraDataInterfaceRenderTarget2D");
static_assert(sizeof(UNiagaraDataInterfaceRenderTarget2D) == 0x000100, "Wrong size on UNiagaraDataInterfaceRenderTarget2D");
static_assert(offsetof(UNiagaraDataInterfaceRenderTarget2D, Size) == 0x000038, "Member 'UNiagaraDataInterfaceRenderTarget2D::Size' has a wrong offset!");
static_assert(offsetof(UNiagaraDataInterfaceRenderTarget2D, MipMapGeneration) == 0x000040, "Member 'UNiagaraDataInterfaceRenderTarget2D::MipMapGeneration' has a wrong offset!");
static_assert(offsetof(UNiagaraDataInterfaceRenderTarget2D, MipMapGenerationType) == 0x000041, "Member 'UNiagaraDataInterfaceRenderTarget2D::MipMapGenerationType' has a wrong offset!");
static_assert(offsetof(UNiagaraDataInterfaceRenderTarget2D, OverrideRenderTargetFormat) == 0x000042, "Member 'UNiagaraDataInterfaceRenderTarget2D::OverrideRenderTargetFormat' has a wrong offset!");
static_assert(offsetof(UNiagaraDataInterfaceRenderTarget2D, RenderTargetUserParameter) == 0x000048, "Member 'UNiagaraDataInterfaceRenderTarget2D::RenderTargetUserParameter' has a wrong offset!");
static_assert(offsetof(UNiagaraDataInterfaceRenderTarget2D, ManagedRenderTargets) == 0x0000B0, "Member 'UNiagaraDataInterfaceRenderTarget2D::ManagedRenderTargets' has a wrong offset!");

class UNiagaraDataInterfaceRenderTarget2DArray final : public UNiagaraDataInterfaceRWBase
{
public:
	struct FIntVector                             Size;
	ETextureRenderTargetFormat                    OverrideRenderTargetFormat;
	uint8                                         bInheritUserParameterSettings : 1;
	uint8                                         bOverrideFormat : 1;
	uint8                                         Pad_46[0x2];
	struct FNiagaraUserParameterBinding           RenderTargetUserParameter;
	TMap<uint64, class UTextureRenderTarget2DArray*> ManagedRenderTargets;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"NiagaraDataInterfaceRenderTarget2DArray">();
	}
	static class UNiagaraDataInterfaceRenderTarget2DArray* GetDefaultObj()
	{
		return GetDefaultObjImpl<UNiagaraDataInterfaceRenderTarget2DArray>();
	}
};
static_assert(alignof(UNiagaraDataInterfaceRenderTarget2DArray) == 0x000008, "Wrong alignment on UNiagaraDataInterfaceRenderTarget2DArray");
static_assert(sizeof(UNiagaraDataInterfaceRenderTarget2DArray) == 0x0000B0, "Wrong size on UNiagaraDataInterfaceRenderTarget2DArray");
static_assert(offsetof(UNiagaraDataInterfaceRenderTarget2DArray, Size) == 0x000038, "Member 'UNiagaraDataInterfaceRenderTarget2DArray::Size' has a wrong offset!");
static_assert(offsetof(UNiagaraDataInterfaceRenderTarget2DArray, OverrideRenderTargetFormat) == 0x000044, "Member 'UNiagaraDataInterfaceRenderTarget2DArray::OverrideRenderTargetFormat' has a wrong offset!");
static_assert(offsetof(UNiagaraDataInterfaceRenderTarget2DArray, RenderTargetUserParameter) == 0x000048, "Member 'UNiagaraDataInterfaceRenderTarget2DArray::RenderTargetUserParameter' has a wrong offset!");
static_assert(offsetof(UNiagaraDataInterfaceRenderTarget2DArray, ManagedRenderTargets) == 0x000060, "Member 'UNiagaraDataInterfaceRenderTarget2DArray::ManagedRenderTargets' has a wrong offset!");

class UNiagaraDataInterfaceRenderTargetCube final : public UNiagaraDataInterfaceRWBase
{
public:
	int32                                         Size;
	ETextureRenderTargetFormat                    OverrideRenderTargetFormat;
	uint8                                         bInheritUserParameterSettings : 1;
	uint8                                         bOverrideFormat : 1;
	uint8                                         Pad_3E[0x2];
	struct FNiagaraUserParameterBinding           RenderTargetUserParameter;
	TMap<uint64, class UTextureRenderTargetCube*> ManagedRenderTargets;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"NiagaraDataInterfaceRenderTargetCube">();
	}
	static class UNiagaraDataInterfaceRenderTargetCube* GetDefaultObj()
	{
		return GetDefaultObjImpl<UNiagaraDataInterfaceRenderTargetCube>();
	}
};
static_assert(alignof(UNiagaraDataInterfaceRenderTargetCube) == 0x000008, "Wrong alignment on UNiagaraDataInterfaceRenderTargetCube");
static_assert(sizeof(UNiagaraDataInterfaceRenderTargetCube) == 0x0000A8, "Wrong size on UNiagaraDataInterfaceRenderTargetCube");
static_assert(offsetof(UNiagaraDataInterfaceRenderTargetCube, Size) == 0x000038, "Member 'UNiagaraDataInterfaceRenderTargetCube::Size' has a wrong offset!");
static_assert(offsetof(UNiagaraDataInterfaceRenderTargetCube, OverrideRenderTargetFormat) == 0x00003C, "Member 'UNiagaraDataInterfaceRenderTargetCube::OverrideRenderTargetFormat' has a wrong offset!");
static_assert(offsetof(UNiagaraDataInterfaceRenderTargetCube, RenderTargetUserParameter) == 0x000040, "Member 'UNiagaraDataInterfaceRenderTargetCube::RenderTargetUserParameter' has a wrong offset!");
static_assert(offsetof(UNiagaraDataInterfaceRenderTargetCube, ManagedRenderTargets) == 0x000058, "Member 'UNiagaraDataInterfaceRenderTargetCube::ManagedRenderTargets' has a wrong offset!");

class UNiagaraDataInterfaceRenderTargetVolume final : public UNiagaraDataInterfaceRWBase
{
public:
	struct FIntVector                             Size;
	ETextureRenderTargetFormat                    OverrideRenderTargetFormat;
	uint8                                         bInheritUserParameterSettings : 1;
	uint8                                         bOverrideFormat : 1;
	uint8                                         Pad_46[0x2];
	struct FNiagaraUserParameterBinding           RenderTargetUserParameter;
	TMap<uint64, class UTextureRenderTargetVolume*> ManagedRenderTargets;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"NiagaraDataInterfaceRenderTargetVolume">();
	}
	static class UNiagaraDataInterfaceRenderTargetVolume* GetDefaultObj()
	{
		return GetDefaultObjImpl<UNiagaraDataInterfaceRenderTargetVolume>();
	}
};
static_assert(alignof(UNiagaraDataInterfaceRenderTargetVolume) == 0x000008, "Wrong alignment on UNiagaraDataInterfaceRenderTargetVolume");
static_assert(sizeof(UNiagaraDataInterfaceRenderTargetVolume) == 0x0000B0, "Wrong size on UNiagaraDataInterfaceRenderTargetVolume");
static_assert(offsetof(UNiagaraDataInterfaceRenderTargetVolume, Size) == 0x000038, "Member 'UNiagaraDataInterfaceRenderTargetVolume::Size' has a wrong offset!");
static_assert(offsetof(UNiagaraDataInterfaceRenderTargetVolume, OverrideRenderTargetFormat) == 0x000044, "Member 'UNiagaraDataInterfaceRenderTargetVolume::OverrideRenderTargetFormat' has a wrong offset!");
static_assert(offsetof(UNiagaraDataInterfaceRenderTargetVolume, RenderTargetUserParameter) == 0x000048, "Member 'UNiagaraDataInterfaceRenderTargetVolume::RenderTargetUserParameter' has a wrong offset!");
static_assert(offsetof(UNiagaraDataInterfaceRenderTargetVolume, ManagedRenderTargets) == 0x000060, "Member 'UNiagaraDataInterfaceRenderTargetVolume::ManagedRenderTargets' has a wrong offset!");

class UNiagaraDataInterfaceRigidMeshCollisionQuery final : public UNiagaraDataInterface
{
public:
	TArray<class FName>                           ActorTags;
	TArray<class FName>                           ComponentTags;
	TArray<TSoftObjectPtr<class AActor>>          SourceActors;
	bool                                          OnlyUseMoveable;
	bool                                          GlobalSearchAllowed;
	bool                                          GlobalSearchForced;
	bool                                          GlobalSearchFallback_Unscripted;
	int32                                         MaxNumPrimitives;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"NiagaraDataInterfaceRigidMeshCollisionQuery">();
	}
	static class UNiagaraDataInterfaceRigidMeshCollisionQuery* GetDefaultObj()
	{
		return GetDefaultObjImpl<UNiagaraDataInterfaceRigidMeshCollisionQuery>();
	}
};
static_assert(alignof(UNiagaraDataInterfaceRigidMeshCollisionQuery) == 0x000008, "Wrong alignment on UNiagaraDataInterfaceRigidMeshCollisionQuery");
static_assert(sizeof(UNiagaraDataInterfaceRigidMeshCollisionQuery) == 0x000070, "Wrong size on UNiagaraDataInterfaceRigidMeshCollisionQuery");
static_assert(offsetof(UNiagaraDataInterfaceRigidMeshCollisionQuery, ActorTags) == 0x000038, "Member 'UNiagaraDataInterfaceRigidMeshCollisionQuery::ActorTags' has a wrong offset!");
static_assert(offsetof(UNiagaraDataInterfaceRigidMeshCollisionQuery, ComponentTags) == 0x000048, "Member 'UNiagaraDataInterfaceRigidMeshCollisionQuery::ComponentTags' has a wrong offset!");
static_assert(offsetof(UNiagaraDataInterfaceRigidMeshCollisionQuery, SourceActors) == 0x000058, "Member 'UNiagaraDataInterfaceRigidMeshCollisionQuery::SourceActors' has a wrong offset!");
static_assert(offsetof(UNiagaraDataInterfaceRigidMeshCollisionQuery, OnlyUseMoveable) == 0x000068, "Member 'UNiagaraDataInterfaceRigidMeshCollisionQuery::OnlyUseMoveable' has a wrong offset!");
static_assert(offsetof(UNiagaraDataInterfaceRigidMeshCollisionQuery, GlobalSearchAllowed) == 0x000069, "Member 'UNiagaraDataInterfaceRigidMeshCollisionQuery::GlobalSearchAllowed' has a wrong offset!");
static_assert(offsetof(UNiagaraDataInterfaceRigidMeshCollisionQuery, GlobalSearchForced) == 0x00006A, "Member 'UNiagaraDataInterfaceRigidMeshCollisionQuery::GlobalSearchForced' has a wrong offset!");
static_assert(offsetof(UNiagaraDataInterfaceRigidMeshCollisionQuery, GlobalSearchFallback_Unscripted) == 0x00006B, "Member 'UNiagaraDataInterfaceRigidMeshCollisionQuery::GlobalSearchFallback_Unscripted' has a wrong offset!");
static_assert(offsetof(UNiagaraDataInterfaceRigidMeshCollisionQuery, MaxNumPrimitives) == 0x00006C, "Member 'UNiagaraDataInterfaceRigidMeshCollisionQuery::MaxNumPrimitives' has a wrong offset!");

class UNiagaraDIRigidMeshCollisionFunctionLibrary final : public UBlueprintFunctionLibrary
{
public:
	static void SetSourceActors(class UNiagaraComponent* NiagaraSystem, class FName OverrideName, const TArray<class AActor*>& SourceActors);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"NiagaraDIRigidMeshCollisionFunctionLibrary">();
	}
	static class UNiagaraDIRigidMeshCollisionFunctionLibrary* GetDefaultObj()
	{
		return GetDefaultObjImpl<UNiagaraDIRigidMeshCollisionFunctionLibrary>();
	}
};
static_assert(alignof(UNiagaraDIRigidMeshCollisionFunctionLibrary) == 0x000008, "Wrong alignment on UNiagaraDIRigidMeshCollisionFunctionLibrary");
static_assert(sizeof(UNiagaraDIRigidMeshCollisionFunctionLibrary) == 0x000028, "Wrong size on UNiagaraDIRigidMeshCollisionFunctionLibrary");

class UNiagaraDataInterfaceSkeletalMesh final : public UNiagaraDataInterface
{
public:
	ENDISkeletalMesh_SourceMode                   SourceMode;
	uint8                                         Pad_39[0x7];
	TSoftObjectPtr<class AActor>                  SoftSourceActor;
	TArray<class FName>                           ComponentTags;
	class USkeletalMeshComponent*                 SourceComponent;
	struct FNiagaraUserParameterBinding           MeshUserParameter;
	ENDISkeletalMesh_SkinningMode                 SkinningMode;
	uint8                                         Pad_99[0x7];
	TArray<class FName>                           SamplingRegions;
	int32                                         WholeMeshLOD;
	uint8                                         Pad_B4[0x4];
	TArray<class FName>                           FilteredBones;
	TArray<class FName>                           FilteredSockets;
	class FName                                   ExcludeBoneName;
	uint8                                         bExcludeBone : 1;
	uint8                                         Pad_DD[0x3];
	int32                                         UvSetIndex;
	bool                                          bRequireCurrentFrameData;
	uint8                                         Pad_E5[0xB];

public:
	void OnSourceEndPlay(class AActor* InSource, EEndPlayReason Reason);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"NiagaraDataInterfaceSkeletalMesh">();
	}
	static class UNiagaraDataInterfaceSkeletalMesh* GetDefaultObj()
	{
		return GetDefaultObjImpl<UNiagaraDataInterfaceSkeletalMesh>();
	}
};
static_assert(alignof(UNiagaraDataInterfaceSkeletalMesh) == 0x000008, "Wrong alignment on UNiagaraDataInterfaceSkeletalMesh");
static_assert(sizeof(UNiagaraDataInterfaceSkeletalMesh) == 0x0000F0, "Wrong size on UNiagaraDataInterfaceSkeletalMesh");
static_assert(offsetof(UNiagaraDataInterfaceSkeletalMesh, SourceMode) == 0x000038, "Member 'UNiagaraDataInterfaceSkeletalMesh::SourceMode' has a wrong offset!");
static_assert(offsetof(UNiagaraDataInterfaceSkeletalMesh, SoftSourceActor) == 0x000040, "Member 'UNiagaraDataInterfaceSkeletalMesh::SoftSourceActor' has a wrong offset!");
static_assert(offsetof(UNiagaraDataInterfaceSkeletalMesh, ComponentTags) == 0x000068, "Member 'UNiagaraDataInterfaceSkeletalMesh::ComponentTags' has a wrong offset!");
static_assert(offsetof(UNiagaraDataInterfaceSkeletalMesh, SourceComponent) == 0x000078, "Member 'UNiagaraDataInterfaceSkeletalMesh::SourceComponent' has a wrong offset!");
static_assert(offsetof(UNiagaraDataInterfaceSkeletalMesh, MeshUserParameter) == 0x000080, "Member 'UNiagaraDataInterfaceSkeletalMesh::MeshUserParameter' has a wrong offset!");
static_assert(offsetof(UNiagaraDataInterfaceSkeletalMesh, SkinningMode) == 0x000098, "Member 'UNiagaraDataInterfaceSkeletalMesh::SkinningMode' has a wrong offset!");
static_assert(offsetof(UNiagaraDataInterfaceSkeletalMesh, SamplingRegions) == 0x0000A0, "Member 'UNiagaraDataInterfaceSkeletalMesh::SamplingRegions' has a wrong offset!");
static_assert(offsetof(UNiagaraDataInterfaceSkeletalMesh, WholeMeshLOD) == 0x0000B0, "Member 'UNiagaraDataInterfaceSkeletalMesh::WholeMeshLOD' has a wrong offset!");
static_assert(offsetof(UNiagaraDataInterfaceSkeletalMesh, FilteredBones) == 0x0000B8, "Member 'UNiagaraDataInterfaceSkeletalMesh::FilteredBones' has a wrong offset!");
static_assert(offsetof(UNiagaraDataInterfaceSkeletalMesh, FilteredSockets) == 0x0000C8, "Member 'UNiagaraDataInterfaceSkeletalMesh::FilteredSockets' has a wrong offset!");
static_assert(offsetof(UNiagaraDataInterfaceSkeletalMesh, ExcludeBoneName) == 0x0000D8, "Member 'UNiagaraDataInterfaceSkeletalMesh::ExcludeBoneName' has a wrong offset!");
static_assert(offsetof(UNiagaraDataInterfaceSkeletalMesh, UvSetIndex) == 0x0000E0, "Member 'UNiagaraDataInterfaceSkeletalMesh::UvSetIndex' has a wrong offset!");
static_assert(offsetof(UNiagaraDataInterfaceSkeletalMesh, bRequireCurrentFrameData) == 0x0000E4, "Member 'UNiagaraDataInterfaceSkeletalMesh::bRequireCurrentFrameData' has a wrong offset!");

class UNiagaraDataInterfaceSpline final : public UNiagaraDataInterface
{
public:
	class AActor*                                 Source;
	struct FNiagaraUserParameterBinding           SplineUserParameter;
	bool                                          bUseLUT;
	uint8                                         Pad_59[0x3];
	int32                                         NumLUTSteps;
	uint8                                         Pad_60[0x50];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"NiagaraDataInterfaceSpline">();
	}
	static class UNiagaraDataInterfaceSpline* GetDefaultObj()
	{
		return GetDefaultObjImpl<UNiagaraDataInterfaceSpline>();
	}
};
static_assert(alignof(UNiagaraDataInterfaceSpline) == 0x000008, "Wrong alignment on UNiagaraDataInterfaceSpline");
static_assert(sizeof(UNiagaraDataInterfaceSpline) == 0x0000B0, "Wrong size on UNiagaraDataInterfaceSpline");
static_assert(offsetof(UNiagaraDataInterfaceSpline, Source) == 0x000038, "Member 'UNiagaraDataInterfaceSpline::Source' has a wrong offset!");
static_assert(offsetof(UNiagaraDataInterfaceSpline, SplineUserParameter) == 0x000040, "Member 'UNiagaraDataInterfaceSpline::SplineUserParameter' has a wrong offset!");
static_assert(offsetof(UNiagaraDataInterfaceSpline, bUseLUT) == 0x000058, "Member 'UNiagaraDataInterfaceSpline::bUseLUT' has a wrong offset!");
static_assert(offsetof(UNiagaraDataInterfaceSpline, NumLUTSteps) == 0x00005C, "Member 'UNiagaraDataInterfaceSpline::NumLUTSteps' has a wrong offset!");

class UNiagaraDataInterfaceSpriteRendererInfo final : public UNiagaraDataInterface
{
public:
	class UNiagaraSpriteRendererProperties*       SpriteRenderer;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"NiagaraDataInterfaceSpriteRendererInfo">();
	}
	static class UNiagaraDataInterfaceSpriteRendererInfo* GetDefaultObj()
	{
		return GetDefaultObjImpl<UNiagaraDataInterfaceSpriteRendererInfo>();
	}
};
static_assert(alignof(UNiagaraDataInterfaceSpriteRendererInfo) == 0x000008, "Wrong alignment on UNiagaraDataInterfaceSpriteRendererInfo");
static_assert(sizeof(UNiagaraDataInterfaceSpriteRendererInfo) == 0x000040, "Wrong size on UNiagaraDataInterfaceSpriteRendererInfo");
static_assert(offsetof(UNiagaraDataInterfaceSpriteRendererInfo, SpriteRenderer) == 0x000038, "Member 'UNiagaraDataInterfaceSpriteRendererInfo::SpriteRenderer' has a wrong offset!");

class UNiagaraDataInterfaceTexture final : public UNiagaraDataInterface
{
public:
	class UTexture*                               Texture;
	struct FNiagaraUserParameterBinding           TextureUserParameter;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"NiagaraDataInterfaceTexture">();
	}
	static class UNiagaraDataInterfaceTexture* GetDefaultObj()
	{
		return GetDefaultObjImpl<UNiagaraDataInterfaceTexture>();
	}
};
static_assert(alignof(UNiagaraDataInterfaceTexture) == 0x000008, "Wrong alignment on UNiagaraDataInterfaceTexture");
static_assert(sizeof(UNiagaraDataInterfaceTexture) == 0x000058, "Wrong size on UNiagaraDataInterfaceTexture");
static_assert(offsetof(UNiagaraDataInterfaceTexture, Texture) == 0x000038, "Member 'UNiagaraDataInterfaceTexture::Texture' has a wrong offset!");
static_assert(offsetof(UNiagaraDataInterfaceTexture, TextureUserParameter) == 0x000040, "Member 'UNiagaraDataInterfaceTexture::TextureUserParameter' has a wrong offset!");

class UNiagaraDataInterfaceVector2DCurve final : public UNiagaraDataInterfaceCurveBase
{
public:
	struct FRichCurve                             XCurve;
	struct FRichCurve                             YCurve;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"NiagaraDataInterfaceVector2DCurve">();
	}
	static class UNiagaraDataInterfaceVector2DCurve* GetDefaultObj()
	{
		return GetDefaultObjImpl<UNiagaraDataInterfaceVector2DCurve>();
	}
};
static_assert(alignof(UNiagaraDataInterfaceVector2DCurve) == 0x000008, "Wrong alignment on UNiagaraDataInterfaceVector2DCurve");
static_assert(sizeof(UNiagaraDataInterfaceVector2DCurve) == 0x000170, "Wrong size on UNiagaraDataInterfaceVector2DCurve");
static_assert(offsetof(UNiagaraDataInterfaceVector2DCurve, XCurve) == 0x000070, "Member 'UNiagaraDataInterfaceVector2DCurve::XCurve' has a wrong offset!");
static_assert(offsetof(UNiagaraDataInterfaceVector2DCurve, YCurve) == 0x0000F0, "Member 'UNiagaraDataInterfaceVector2DCurve::YCurve' has a wrong offset!");

class UNiagaraDataInterfaceVector4Curve final : public UNiagaraDataInterfaceCurveBase
{
public:
	struct FRichCurve                             XCurve;
	struct FRichCurve                             YCurve;
	struct FRichCurve                             ZCurve;
	struct FRichCurve                             WCurve;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"NiagaraDataInterfaceVector4Curve">();
	}
	static class UNiagaraDataInterfaceVector4Curve* GetDefaultObj()
	{
		return GetDefaultObjImpl<UNiagaraDataInterfaceVector4Curve>();
	}
};
static_assert(alignof(UNiagaraDataInterfaceVector4Curve) == 0x000008, "Wrong alignment on UNiagaraDataInterfaceVector4Curve");
static_assert(sizeof(UNiagaraDataInterfaceVector4Curve) == 0x000270, "Wrong size on UNiagaraDataInterfaceVector4Curve");
static_assert(offsetof(UNiagaraDataInterfaceVector4Curve, XCurve) == 0x000070, "Member 'UNiagaraDataInterfaceVector4Curve::XCurve' has a wrong offset!");
static_assert(offsetof(UNiagaraDataInterfaceVector4Curve, YCurve) == 0x0000F0, "Member 'UNiagaraDataInterfaceVector4Curve::YCurve' has a wrong offset!");
static_assert(offsetof(UNiagaraDataInterfaceVector4Curve, ZCurve) == 0x000170, "Member 'UNiagaraDataInterfaceVector4Curve::ZCurve' has a wrong offset!");
static_assert(offsetof(UNiagaraDataInterfaceVector4Curve, WCurve) == 0x0001F0, "Member 'UNiagaraDataInterfaceVector4Curve::WCurve' has a wrong offset!");

class UNiagaraDataInterfaceVectorCurve final : public UNiagaraDataInterfaceCurveBase
{
public:
	struct FRichCurve                             XCurve;
	struct FRichCurve                             YCurve;
	struct FRichCurve                             ZCurve;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"NiagaraDataInterfaceVectorCurve">();
	}
	static class UNiagaraDataInterfaceVectorCurve* GetDefaultObj()
	{
		return GetDefaultObjImpl<UNiagaraDataInterfaceVectorCurve>();
	}
};
static_assert(alignof(UNiagaraDataInterfaceVectorCurve) == 0x000008, "Wrong alignment on UNiagaraDataInterfaceVectorCurve");
static_assert(sizeof(UNiagaraDataInterfaceVectorCurve) == 0x0001F0, "Wrong size on UNiagaraDataInterfaceVectorCurve");
static_assert(offsetof(UNiagaraDataInterfaceVectorCurve, XCurve) == 0x000070, "Member 'UNiagaraDataInterfaceVectorCurve::XCurve' has a wrong offset!");
static_assert(offsetof(UNiagaraDataInterfaceVectorCurve, YCurve) == 0x0000F0, "Member 'UNiagaraDataInterfaceVectorCurve::YCurve' has a wrong offset!");
static_assert(offsetof(UNiagaraDataInterfaceVectorCurve, ZCurve) == 0x000170, "Member 'UNiagaraDataInterfaceVectorCurve::ZCurve' has a wrong offset!");

class UNiagaraDataInterfaceVectorField final : public UNiagaraDataInterface
{
public:
	class UVectorField*                           Field;
	bool                                          bTileX;
	bool                                          bTileY;
	bool                                          bTileZ;
	uint8                                         Pad_43[0x5];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"NiagaraDataInterfaceVectorField">();
	}
	static class UNiagaraDataInterfaceVectorField* GetDefaultObj()
	{
		return GetDefaultObjImpl<UNiagaraDataInterfaceVectorField>();
	}
};
static_assert(alignof(UNiagaraDataInterfaceVectorField) == 0x000008, "Wrong alignment on UNiagaraDataInterfaceVectorField");
static_assert(sizeof(UNiagaraDataInterfaceVectorField) == 0x000048, "Wrong size on UNiagaraDataInterfaceVectorField");
static_assert(offsetof(UNiagaraDataInterfaceVectorField, Field) == 0x000038, "Member 'UNiagaraDataInterfaceVectorField::Field' has a wrong offset!");
static_assert(offsetof(UNiagaraDataInterfaceVectorField, bTileX) == 0x000040, "Member 'UNiagaraDataInterfaceVectorField::bTileX' has a wrong offset!");
static_assert(offsetof(UNiagaraDataInterfaceVectorField, bTileY) == 0x000041, "Member 'UNiagaraDataInterfaceVectorField::bTileY' has a wrong offset!");
static_assert(offsetof(UNiagaraDataInterfaceVectorField, bTileZ) == 0x000042, "Member 'UNiagaraDataInterfaceVectorField::bTileZ' has a wrong offset!");

class UNiagaraDataInterfaceVolumeCache final : public UNiagaraDataInterface
{
public:
	class UVolumeCache*                           VolumeCache;
	uint8                                         Pad_40[0x50];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"NiagaraDataInterfaceVolumeCache">();
	}
	static class UNiagaraDataInterfaceVolumeCache* GetDefaultObj()
	{
		return GetDefaultObjImpl<UNiagaraDataInterfaceVolumeCache>();
	}
};
static_assert(alignof(UNiagaraDataInterfaceVolumeCache) == 0x000008, "Wrong alignment on UNiagaraDataInterfaceVolumeCache");
static_assert(sizeof(UNiagaraDataInterfaceVolumeCache) == 0x000090, "Wrong size on UNiagaraDataInterfaceVolumeCache");
static_assert(offsetof(UNiagaraDataInterfaceVolumeCache, VolumeCache) == 0x000038, "Member 'UNiagaraDataInterfaceVolumeCache::VolumeCache' has a wrong offset!");

class UNiagaraDataInterfaceVolumeTexture final : public UNiagaraDataInterface
{
public:
	class UTexture*                               Texture;
	struct FNiagaraUserParameterBinding           TextureUserParameter;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"NiagaraDataInterfaceVolumeTexture">();
	}
	static class UNiagaraDataInterfaceVolumeTexture* GetDefaultObj()
	{
		return GetDefaultObjImpl<UNiagaraDataInterfaceVolumeTexture>();
	}
};
static_assert(alignof(UNiagaraDataInterfaceVolumeTexture) == 0x000008, "Wrong alignment on UNiagaraDataInterfaceVolumeTexture");
static_assert(sizeof(UNiagaraDataInterfaceVolumeTexture) == 0x000058, "Wrong size on UNiagaraDataInterfaceVolumeTexture");
static_assert(offsetof(UNiagaraDataInterfaceVolumeTexture, Texture) == 0x000038, "Member 'UNiagaraDataInterfaceVolumeTexture::Texture' has a wrong offset!");
static_assert(offsetof(UNiagaraDataInterfaceVolumeTexture, TextureUserParameter) == 0x000040, "Member 'UNiagaraDataInterfaceVolumeTexture::TextureUserParameter' has a wrong offset!");

class UNiagaraDebugHUDSettings final : public UObject
{
public:
	uint8                                         Pad_28[0x20];
	struct FNiagaraDebugHUDSettingsData           Data;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"NiagaraDebugHUDSettings">();
	}
	static class UNiagaraDebugHUDSettings* GetDefaultObj()
	{
		return GetDefaultObjImpl<UNiagaraDebugHUDSettings>();
	}
};
static_assert(alignof(UNiagaraDebugHUDSettings) == 0x000008, "Wrong alignment on UNiagaraDebugHUDSettings");
static_assert(sizeof(UNiagaraDebugHUDSettings) == 0x000280, "Wrong size on UNiagaraDebugHUDSettings");
static_assert(offsetof(UNiagaraDebugHUDSettings, Data) == 0x000048, "Member 'UNiagaraDebugHUDSettings::Data' has a wrong offset!");

class UNiagaraEditorDataBase final : public UObject
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"NiagaraEditorDataBase">();
	}
	static class UNiagaraEditorDataBase* GetDefaultObj()
	{
		return GetDefaultObjImpl<UNiagaraEditorDataBase>();
	}
};
static_assert(alignof(UNiagaraEditorDataBase) == 0x000008, "Wrong alignment on UNiagaraEditorDataBase");
static_assert(sizeof(UNiagaraEditorDataBase) == 0x000028, "Wrong size on UNiagaraEditorDataBase");

class UNiagaraEditorParametersAdapterBase final : public UObject
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"NiagaraEditorParametersAdapterBase">();
	}
	static class UNiagaraEditorParametersAdapterBase* GetDefaultObj()
	{
		return GetDefaultObjImpl<UNiagaraEditorParametersAdapterBase>();
	}
};
static_assert(alignof(UNiagaraEditorParametersAdapterBase) == 0x000008, "Wrong alignment on UNiagaraEditorParametersAdapterBase");
static_assert(sizeof(UNiagaraEditorParametersAdapterBase) == 0x000028, "Wrong size on UNiagaraEditorParametersAdapterBase");

class UNiagaraSignificanceHandler : public UObject
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"NiagaraSignificanceHandler">();
	}
	static class UNiagaraSignificanceHandler* GetDefaultObj()
	{
		return GetDefaultObjImpl<UNiagaraSignificanceHandler>();
	}
};
static_assert(alignof(UNiagaraSignificanceHandler) == 0x000008, "Wrong alignment on UNiagaraSignificanceHandler");
static_assert(sizeof(UNiagaraSignificanceHandler) == 0x000028, "Wrong size on UNiagaraSignificanceHandler");

class UNiagaraSignificanceHandlerDistance final : public UNiagaraSignificanceHandler
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"NiagaraSignificanceHandlerDistance">();
	}
	static class UNiagaraSignificanceHandlerDistance* GetDefaultObj()
	{
		return GetDefaultObjImpl<UNiagaraSignificanceHandlerDistance>();
	}
};
static_assert(alignof(UNiagaraSignificanceHandlerDistance) == 0x000008, "Wrong alignment on UNiagaraSignificanceHandlerDistance");
static_assert(sizeof(UNiagaraSignificanceHandlerDistance) == 0x000028, "Wrong size on UNiagaraSignificanceHandlerDistance");

class UNiagaraSignificanceHandlerAge final : public UNiagaraSignificanceHandler
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"NiagaraSignificanceHandlerAge">();
	}
	static class UNiagaraSignificanceHandlerAge* GetDefaultObj()
	{
		return GetDefaultObjImpl<UNiagaraSignificanceHandlerAge>();
	}
};
static_assert(alignof(UNiagaraSignificanceHandlerAge) == 0x000008, "Wrong alignment on UNiagaraSignificanceHandlerAge");
static_assert(sizeof(UNiagaraSignificanceHandlerAge) == 0x000028, "Wrong size on UNiagaraSignificanceHandlerAge");

class UNiagaraEffectType final : public UObject
{
public:
	bool                                          bAllowCullingForLocalPlayers;
	uint8                                         Pad_29[0x3];
	ENiagaraScalabilityUpdateFrequency            UpdateFrequency;
	ENiagaraCullReaction                          CullReaction;
	uint8                                         Pad_34[0x4];
	class UNiagaraSignificanceHandler*            SignificanceHandler;
	TArray<struct FNiagaraSystemScalabilitySettings> DetailLevelScalabilitySettings;
	struct FNiagaraSystemScalabilitySettingsArray SystemScalabilitySettings;
	struct FNiagaraEmitterScalabilitySettingsArray EmitterScalabilitySettings;
	uint8                                         Pad_70[0x8];
	class UNiagaraBaselineController*             PerformanceBaselineController;
	struct FNiagaraPerfBaselineStats              PerfBaselineStats;
	struct FGuid                                  PerfBaselineVersion;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"NiagaraEffectType">();
	}
	static class UNiagaraEffectType* GetDefaultObj()
	{
		return GetDefaultObjImpl<UNiagaraEffectType>();
	}
};
static_assert(alignof(UNiagaraEffectType) == 0x000008, "Wrong alignment on UNiagaraEffectType");
static_assert(sizeof(UNiagaraEffectType) == 0x0000A0, "Wrong size on UNiagaraEffectType");
static_assert(offsetof(UNiagaraEffectType, bAllowCullingForLocalPlayers) == 0x000028, "Member 'UNiagaraEffectType::bAllowCullingForLocalPlayers' has a wrong offset!");
static_assert(offsetof(UNiagaraEffectType, UpdateFrequency) == 0x00002C, "Member 'UNiagaraEffectType::UpdateFrequency' has a wrong offset!");
static_assert(offsetof(UNiagaraEffectType, CullReaction) == 0x000030, "Member 'UNiagaraEffectType::CullReaction' has a wrong offset!");
static_assert(offsetof(UNiagaraEffectType, SignificanceHandler) == 0x000038, "Member 'UNiagaraEffectType::SignificanceHandler' has a wrong offset!");
static_assert(offsetof(UNiagaraEffectType, DetailLevelScalabilitySettings) == 0x000040, "Member 'UNiagaraEffectType::DetailLevelScalabilitySettings' has a wrong offset!");
static_assert(offsetof(UNiagaraEffectType, SystemScalabilitySettings) == 0x000050, "Member 'UNiagaraEffectType::SystemScalabilitySettings' has a wrong offset!");
static_assert(offsetof(UNiagaraEffectType, EmitterScalabilitySettings) == 0x000060, "Member 'UNiagaraEffectType::EmitterScalabilitySettings' has a wrong offset!");
static_assert(offsetof(UNiagaraEffectType, PerformanceBaselineController) == 0x000078, "Member 'UNiagaraEffectType::PerformanceBaselineController' has a wrong offset!");
static_assert(offsetof(UNiagaraEffectType, PerfBaselineStats) == 0x000080, "Member 'UNiagaraEffectType::PerfBaselineStats' has a wrong offset!");
static_assert(offsetof(UNiagaraEffectType, PerfBaselineVersion) == 0x000090, "Member 'UNiagaraEffectType::PerfBaselineVersion' has a wrong offset!");

class UNiagaraEmitter final : public UObject
{
public:
	uint8                                         Pad_28[0x8];
	struct FGuid                                  ExposedVersion;
	bool                                          bVersioningEnabled;
	uint8                                         Pad_41[0x7];
	TArray<struct FVersionedNiagaraEmitterData>   VersionData;
	uint8                                         Pad_58[0x8];
	class FString                                 UniqueEmitterName;
	TArray<class UNiagaraRendererProperties*>     RendererProperties;
	TArray<struct FNiagaraEventScriptProperties>  EventHandlerScriptProps;
	TArray<class UNiagaraSimulationStageBase*>    SimulationStages;
	class UNiagaraScript*                         GPUComputeScript;
	TArray<class FName>                           SharedEventGeneratorIds;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"NiagaraEmitter">();
	}
	static class UNiagaraEmitter* GetDefaultObj()
	{
		return GetDefaultObjImpl<UNiagaraEmitter>();
	}
};
static_assert(alignof(UNiagaraEmitter) == 0x000008, "Wrong alignment on UNiagaraEmitter");
static_assert(sizeof(UNiagaraEmitter) == 0x0000B8, "Wrong size on UNiagaraEmitter");
static_assert(offsetof(UNiagaraEmitter, ExposedVersion) == 0x000030, "Member 'UNiagaraEmitter::ExposedVersion' has a wrong offset!");
static_assert(offsetof(UNiagaraEmitter, bVersioningEnabled) == 0x000040, "Member 'UNiagaraEmitter::bVersioningEnabled' has a wrong offset!");
static_assert(offsetof(UNiagaraEmitter, VersionData) == 0x000048, "Member 'UNiagaraEmitter::VersionData' has a wrong offset!");
static_assert(offsetof(UNiagaraEmitter, UniqueEmitterName) == 0x000060, "Member 'UNiagaraEmitter::UniqueEmitterName' has a wrong offset!");
static_assert(offsetof(UNiagaraEmitter, RendererProperties) == 0x000070, "Member 'UNiagaraEmitter::RendererProperties' has a wrong offset!");
static_assert(offsetof(UNiagaraEmitter, EventHandlerScriptProps) == 0x000080, "Member 'UNiagaraEmitter::EventHandlerScriptProps' has a wrong offset!");
static_assert(offsetof(UNiagaraEmitter, SimulationStages) == 0x000090, "Member 'UNiagaraEmitter::SimulationStages' has a wrong offset!");
static_assert(offsetof(UNiagaraEmitter, GPUComputeScript) == 0x0000A0, "Member 'UNiagaraEmitter::GPUComputeScript' has a wrong offset!");
static_assert(offsetof(UNiagaraEmitter, SharedEventGeneratorIds) == 0x0000A8, "Member 'UNiagaraEmitter::SharedEventGeneratorIds' has a wrong offset!");

class UNiagaraEventReceiverEmitterAction : public UObject
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"NiagaraEventReceiverEmitterAction">();
	}
	static class UNiagaraEventReceiverEmitterAction* GetDefaultObj()
	{
		return GetDefaultObjImpl<UNiagaraEventReceiverEmitterAction>();
	}
};
static_assert(alignof(UNiagaraEventReceiverEmitterAction) == 0x000008, "Wrong alignment on UNiagaraEventReceiverEmitterAction");
static_assert(sizeof(UNiagaraEventReceiverEmitterAction) == 0x000028, "Wrong size on UNiagaraEventReceiverEmitterAction");

class UNiagaraEventReceiverEmitterAction_SpawnParticles final : public UNiagaraEventReceiverEmitterAction
{
public:
	uint32                                        NumParticles;
	uint8                                         Pad_2C[0x4];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"NiagaraEventReceiverEmitterAction_SpawnParticles">();
	}
	static class UNiagaraEventReceiverEmitterAction_SpawnParticles* GetDefaultObj()
	{
		return GetDefaultObjImpl<UNiagaraEventReceiverEmitterAction_SpawnParticles>();
	}
};
static_assert(alignof(UNiagaraEventReceiverEmitterAction_SpawnParticles) == 0x000008, "Wrong alignment on UNiagaraEventReceiverEmitterAction_SpawnParticles");
static_assert(sizeof(UNiagaraEventReceiverEmitterAction_SpawnParticles) == 0x000030, "Wrong size on UNiagaraEventReceiverEmitterAction_SpawnParticles");
static_assert(offsetof(UNiagaraEventReceiverEmitterAction_SpawnParticles, NumParticles) == 0x000028, "Member 'UNiagaraEventReceiverEmitterAction_SpawnParticles::NumParticles' has a wrong offset!");

class UNiagaraFunctionLibrary final : public UBlueprintFunctionLibrary
{
public:
	static int32 AcquireNiagaraGPURayTracedCollisionGroup(class UObject* WorldContextObject);
	static class UNiagaraParameterCollectionInstance* GetNiagaraParameterCollection(class UObject* WorldContextObject, class UNiagaraParameterCollection* Collection);
	static void OverrideSystemUserVariableSkeletalMeshComponent(class UNiagaraComponent* NiagaraSystem, const class FString& OverrideName, class USkeletalMeshComponent* SkeletalMeshComponent);
	static void OverrideSystemUserVariableStaticMesh(class UNiagaraComponent* NiagaraSystem, const class FString& OverrideName, class UStaticMesh* StaticMesh);
	static void OverrideSystemUserVariableStaticMeshComponent(class UNiagaraComponent* NiagaraSystem, const class FString& OverrideName, class UStaticMeshComponent* StaticMeshComponent);
	static void ReleaseNiagaraGPURayTracedCollisionGroup(class UObject* WorldContextObject, int32 CollisionGroup);
	static void SetActorNiagaraGPURayTracedCollisionGroup(class UObject* WorldContextObject, class AActor* Actor, int32 CollisionGroup);
	static void SetComponentNiagaraGPURayTracedCollisionGroup(class UObject* WorldContextObject, class UPrimitiveComponent* Primitive, int32 CollisionGroup);
	static void SetSkeletalMeshDataInterfaceFilteredBones(class UNiagaraComponent* NiagaraSystem, const class FString& OverrideName, const TArray<class FName>& FilteredBones);
	static void SetSkeletalMeshDataInterfaceFilteredSockets(class UNiagaraComponent* NiagaraSystem, const class FString& OverrideName, const TArray<class FName>& FilteredSockets);
	static void SetSkeletalMeshDataInterfaceSamplingRegions(class UNiagaraComponent* NiagaraSystem, const class FString& OverrideName, const TArray<class FName>& SamplingRegions);
	static void SetTexture2DArrayObject(class UNiagaraComponent* NiagaraSystem, const class FString& OverrideName, class UTexture2DArray* Texture);
	static void SetTextureObject(class UNiagaraComponent* NiagaraSystem, const class FString& OverrideName, class UTexture* Texture);
	static void SetVolumeTextureObject(class UNiagaraComponent* NiagaraSystem, const class FString& OverrideName, class UVolumeTexture* Texture);
	static class UNiagaraComponent* SpawnSystemAtLocation(const class UObject* WorldContextObject, class UNiagaraSystem* SystemTemplate, const struct FVector& Location, const struct FRotator& Rotation, const struct FVector& Scale, bool bAutoDestroy, bool bAutoActivate, ENCPoolMethod PoolingMethod, bool bPreCullCheck);
	static class UNiagaraComponent* SpawnSystemAtLocationWithParams(struct FFXSystemSpawnParameters* SpawnParams);
	static class UNiagaraComponent* SpawnSystemAttached(class UNiagaraSystem* SystemTemplate, class USceneComponent* AttachToComponent, class FName AttachPointName, const struct FVector& Location, const struct FRotator& Rotation, EAttachLocation LocationType, bool bAutoDestroy, bool bAutoActivate, ENCPoolMethod PoolingMethod, bool bPreCullCheck);
	static class UNiagaraComponent* SpawnSystemAttachedWithParams(struct FFXSystemSpawnParameters* SpawnParams);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"NiagaraFunctionLibrary">();
	}
	static class UNiagaraFunctionLibrary* GetDefaultObj()
	{
		return GetDefaultObjImpl<UNiagaraFunctionLibrary>();
	}
};
static_assert(alignof(UNiagaraFunctionLibrary) == 0x000008, "Wrong alignment on UNiagaraFunctionLibrary");
static_assert(sizeof(UNiagaraFunctionLibrary) == 0x000028, "Wrong size on UNiagaraFunctionLibrary");

class ANiagaraLensEffectBase : public ANiagaraActor
{
public:
	uint8                                         Pad_298[0x8];
	struct FTransform                             DesiredRelativeTransform;
	float                                         BaseAuthoredFOV;
	uint8                                         bAllowMultipleInstances : 1;
	uint8                                         bResetWhenRetriggered : 1;
	uint8                                         Pad_305[0x3];
	TArray<TSubclassOf<class AActor>>             EmittersToTreatAsSame;
	class APlayerCameraManager*                   OwningCameraManager;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"NiagaraLensEffectBase">();
	}
	static class ANiagaraLensEffectBase* GetDefaultObj()
	{
		return GetDefaultObjImpl<ANiagaraLensEffectBase>();
	}
};
static_assert(alignof(ANiagaraLensEffectBase) == 0x000010, "Wrong alignment on ANiagaraLensEffectBase");
static_assert(sizeof(ANiagaraLensEffectBase) == 0x000320, "Wrong size on ANiagaraLensEffectBase");
static_assert(offsetof(ANiagaraLensEffectBase, DesiredRelativeTransform) == 0x0002A0, "Member 'ANiagaraLensEffectBase::DesiredRelativeTransform' has a wrong offset!");
static_assert(offsetof(ANiagaraLensEffectBase, BaseAuthoredFOV) == 0x000300, "Member 'ANiagaraLensEffectBase::BaseAuthoredFOV' has a wrong offset!");
static_assert(offsetof(ANiagaraLensEffectBase, EmittersToTreatAsSame) == 0x000308, "Member 'ANiagaraLensEffectBase::EmittersToTreatAsSame' has a wrong offset!");
static_assert(offsetof(ANiagaraLensEffectBase, OwningCameraManager) == 0x000318, "Member 'ANiagaraLensEffectBase::OwningCameraManager' has a wrong offset!");

class UNiagaraLightRendererProperties final : public UNiagaraRendererProperties
{
public:
	uint8                                         bUseInverseSquaredFalloff : 1;
	uint8                                         bAffectsTranslucency : 1;
	uint8                                         bAlphaScalesBrightness : 1;
	uint8                                         bOverrideInverseExposureBlend : 1;
	uint8                                         Pad_C9[0x3];
	float                                         RadiusScale;
	float                                         DefaultExponent;
	struct FVector3f                              ColorAdd;
	float                                         InverseExposureBlend;
	int32                                         RendererVisibility;
	struct FNiagaraVariableAttributeBinding       LightRenderingEnabledBinding;
	struct FNiagaraVariableAttributeBinding       LightExponentBinding;
	struct FNiagaraVariableAttributeBinding       PositionBinding;
	struct FNiagaraVariableAttributeBinding       ColorBinding;
	struct FNiagaraVariableAttributeBinding       RadiusBinding;
	struct FNiagaraVariableAttributeBinding       VolumetricScatteringBinding;
	struct FNiagaraVariableAttributeBinding       RendererVisibilityTagBinding;
	uint8                                         Pad_2A8[0x30];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"NiagaraLightRendererProperties">();
	}
	static class UNiagaraLightRendererProperties* GetDefaultObj()
	{
		return GetDefaultObjImpl<UNiagaraLightRendererProperties>();
	}
};
static_assert(alignof(UNiagaraLightRendererProperties) == 0x000008, "Wrong alignment on UNiagaraLightRendererProperties");
static_assert(sizeof(UNiagaraLightRendererProperties) == 0x0002D8, "Wrong size on UNiagaraLightRendererProperties");
static_assert(offsetof(UNiagaraLightRendererProperties, RadiusScale) == 0x0000CC, "Member 'UNiagaraLightRendererProperties::RadiusScale' has a wrong offset!");
static_assert(offsetof(UNiagaraLightRendererProperties, DefaultExponent) == 0x0000D0, "Member 'UNiagaraLightRendererProperties::DefaultExponent' has a wrong offset!");
static_assert(offsetof(UNiagaraLightRendererProperties, ColorAdd) == 0x0000D4, "Member 'UNiagaraLightRendererProperties::ColorAdd' has a wrong offset!");
static_assert(offsetof(UNiagaraLightRendererProperties, InverseExposureBlend) == 0x0000E0, "Member 'UNiagaraLightRendererProperties::InverseExposureBlend' has a wrong offset!");
static_assert(offsetof(UNiagaraLightRendererProperties, RendererVisibility) == 0x0000E4, "Member 'UNiagaraLightRendererProperties::RendererVisibility' has a wrong offset!");
static_assert(offsetof(UNiagaraLightRendererProperties, LightRenderingEnabledBinding) == 0x0000E8, "Member 'UNiagaraLightRendererProperties::LightRenderingEnabledBinding' has a wrong offset!");
static_assert(offsetof(UNiagaraLightRendererProperties, LightExponentBinding) == 0x000128, "Member 'UNiagaraLightRendererProperties::LightExponentBinding' has a wrong offset!");
static_assert(offsetof(UNiagaraLightRendererProperties, PositionBinding) == 0x000168, "Member 'UNiagaraLightRendererProperties::PositionBinding' has a wrong offset!");
static_assert(offsetof(UNiagaraLightRendererProperties, ColorBinding) == 0x0001A8, "Member 'UNiagaraLightRendererProperties::ColorBinding' has a wrong offset!");
static_assert(offsetof(UNiagaraLightRendererProperties, RadiusBinding) == 0x0001E8, "Member 'UNiagaraLightRendererProperties::RadiusBinding' has a wrong offset!");
static_assert(offsetof(UNiagaraLightRendererProperties, VolumetricScatteringBinding) == 0x000228, "Member 'UNiagaraLightRendererProperties::VolumetricScatteringBinding' has a wrong offset!");
static_assert(offsetof(UNiagaraLightRendererProperties, RendererVisibilityTagBinding) == 0x000268, "Member 'UNiagaraLightRendererProperties::RendererVisibilityTagBinding' has a wrong offset!");

class UNiagaraMeshRendererProperties final : public UNiagaraRendererProperties
{
public:
	TArray<struct FNiagaraMeshRendererMeshProperties> Meshes;
	ENiagaraRendererSourceDataMode                SourceMode;
	ENiagaraSortMode                              SortMode;
	uint8                                         Pad_DA[0x2];
	uint8                                         bOverrideMaterials : 1;
	uint8                                         bSortOnlyWhenTranslucent : 1;
	uint8                                         Pad_DD[0x3];
	ENiagaraRendererSortPrecision                 SortPrecision;
	ENiagaraRendererGpuTranslucentLatency         GpuTranslucentLatency;
	uint8                                         Pad_E2[0x2];
	uint8                                         bSubImageBlend : 1;
	uint8                                         bEnableFrustumCulling : 1;
	uint8                                         bEnableCameraDistanceCulling : 1;
	uint8                                         bEnableMeshFlipbook : 1;
	uint8                                         Pad_E5[0x3];
	TArray<struct FNiagaraMeshMaterialOverride>   OverrideMaterials;
	struct FVector2D                              SubImageSize;
	ENiagaraMeshFacingMode                        FacingMode;
	uint8                                         Pad_109[0x3];
	uint8                                         bLockedAxisEnable : 1;
	uint8                                         Pad_10D[0x3];
	struct FVector                                LockedAxis;
	ENiagaraMeshLockedAxisSpace                   LockedAxisSpace;
	uint8                                         Pad_129[0x3];
	float                                         MinCameraDistance;
	float                                         MaxCameraDistance;
	uint32                                        RendererVisibility;
	struct FNiagaraVariableAttributeBinding       PositionBinding;
	struct FNiagaraVariableAttributeBinding       ColorBinding;
	struct FNiagaraVariableAttributeBinding       VelocityBinding;
	struct FNiagaraVariableAttributeBinding       MeshOrientationBinding;
	struct FNiagaraVariableAttributeBinding       ScaleBinding;
	struct FNiagaraVariableAttributeBinding       SubImageIndexBinding;
	struct FNiagaraVariableAttributeBinding       DynamicMaterialBinding;
	struct FNiagaraVariableAttributeBinding       DynamicMaterial1Binding;
	struct FNiagaraVariableAttributeBinding       DynamicMaterial2Binding;
	struct FNiagaraVariableAttributeBinding       DynamicMaterial3Binding;
	struct FNiagaraVariableAttributeBinding       MaterialRandomBinding;
	struct FNiagaraVariableAttributeBinding       CustomSortingBinding;
	struct FNiagaraVariableAttributeBinding       NormalizedAgeBinding;
	struct FNiagaraVariableAttributeBinding       CameraOffsetBinding;
	struct FNiagaraVariableAttributeBinding       RendererVisibilityTagBinding;
	struct FNiagaraVariableAttributeBinding       MeshIndexBinding;
	struct FNiagaraRendererMaterialParameters     MaterialParameters;
	struct FNiagaraVariableAttributeBinding       PrevPositionBinding;
	struct FNiagaraVariableAttributeBinding       PrevScaleBinding;
	struct FNiagaraVariableAttributeBinding       PrevMeshOrientationBinding;
	struct FNiagaraVariableAttributeBinding       PrevCameraOffsetBinding;
	struct FNiagaraVariableAttributeBinding       PrevVelocityBinding;
	uint8                                         Pad_6B8[0x68];
	class UStaticMesh*                            ParticleMesh;
	struct FVector                                PivotOffset;
	ENiagaraMeshPivotOffsetSpace                  PivotOffsetSpace;
	uint8                                         Pad_741[0x7];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"NiagaraMeshRendererProperties">();
	}
	static class UNiagaraMeshRendererProperties* GetDefaultObj()
	{
		return GetDefaultObjImpl<UNiagaraMeshRendererProperties>();
	}
};
static_assert(alignof(UNiagaraMeshRendererProperties) == 0x000008, "Wrong alignment on UNiagaraMeshRendererProperties");
static_assert(sizeof(UNiagaraMeshRendererProperties) == 0x000748, "Wrong size on UNiagaraMeshRendererProperties");
static_assert(offsetof(UNiagaraMeshRendererProperties, Meshes) == 0x0000C8, "Member 'UNiagaraMeshRendererProperties::Meshes' has a wrong offset!");
static_assert(offsetof(UNiagaraMeshRendererProperties, SourceMode) == 0x0000D8, "Member 'UNiagaraMeshRendererProperties::SourceMode' has a wrong offset!");
static_assert(offsetof(UNiagaraMeshRendererProperties, SortMode) == 0x0000D9, "Member 'UNiagaraMeshRendererProperties::SortMode' has a wrong offset!");
static_assert(offsetof(UNiagaraMeshRendererProperties, SortPrecision) == 0x0000E0, "Member 'UNiagaraMeshRendererProperties::SortPrecision' has a wrong offset!");
static_assert(offsetof(UNiagaraMeshRendererProperties, GpuTranslucentLatency) == 0x0000E1, "Member 'UNiagaraMeshRendererProperties::GpuTranslucentLatency' has a wrong offset!");
static_assert(offsetof(UNiagaraMeshRendererProperties, OverrideMaterials) == 0x0000E8, "Member 'UNiagaraMeshRendererProperties::OverrideMaterials' has a wrong offset!");
static_assert(offsetof(UNiagaraMeshRendererProperties, SubImageSize) == 0x0000F8, "Member 'UNiagaraMeshRendererProperties::SubImageSize' has a wrong offset!");
static_assert(offsetof(UNiagaraMeshRendererProperties, FacingMode) == 0x000108, "Member 'UNiagaraMeshRendererProperties::FacingMode' has a wrong offset!");
static_assert(offsetof(UNiagaraMeshRendererProperties, LockedAxis) == 0x000110, "Member 'UNiagaraMeshRendererProperties::LockedAxis' has a wrong offset!");
static_assert(offsetof(UNiagaraMeshRendererProperties, LockedAxisSpace) == 0x000128, "Member 'UNiagaraMeshRendererProperties::LockedAxisSpace' has a wrong offset!");
static_assert(offsetof(UNiagaraMeshRendererProperties, MinCameraDistance) == 0x00012C, "Member 'UNiagaraMeshRendererProperties::MinCameraDistance' has a wrong offset!");
static_assert(offsetof(UNiagaraMeshRendererProperties, MaxCameraDistance) == 0x000130, "Member 'UNiagaraMeshRendererProperties::MaxCameraDistance' has a wrong offset!");
static_assert(offsetof(UNiagaraMeshRendererProperties, RendererVisibility) == 0x000134, "Member 'UNiagaraMeshRendererProperties::RendererVisibility' has a wrong offset!");
static_assert(offsetof(UNiagaraMeshRendererProperties, PositionBinding) == 0x000138, "Member 'UNiagaraMeshRendererProperties::PositionBinding' has a wrong offset!");
static_assert(offsetof(UNiagaraMeshRendererProperties, ColorBinding) == 0x000178, "Member 'UNiagaraMeshRendererProperties::ColorBinding' has a wrong offset!");
static_assert(offsetof(UNiagaraMeshRendererProperties, VelocityBinding) == 0x0001B8, "Member 'UNiagaraMeshRendererProperties::VelocityBinding' has a wrong offset!");
static_assert(offsetof(UNiagaraMeshRendererProperties, MeshOrientationBinding) == 0x0001F8, "Member 'UNiagaraMeshRendererProperties::MeshOrientationBinding' has a wrong offset!");
static_assert(offsetof(UNiagaraMeshRendererProperties, ScaleBinding) == 0x000238, "Member 'UNiagaraMeshRendererProperties::ScaleBinding' has a wrong offset!");
static_assert(offsetof(UNiagaraMeshRendererProperties, SubImageIndexBinding) == 0x000278, "Member 'UNiagaraMeshRendererProperties::SubImageIndexBinding' has a wrong offset!");
static_assert(offsetof(UNiagaraMeshRendererProperties, DynamicMaterialBinding) == 0x0002B8, "Member 'UNiagaraMeshRendererProperties::DynamicMaterialBinding' has a wrong offset!");
static_assert(offsetof(UNiagaraMeshRendererProperties, DynamicMaterial1Binding) == 0x0002F8, "Member 'UNiagaraMeshRendererProperties::DynamicMaterial1Binding' has a wrong offset!");
static_assert(offsetof(UNiagaraMeshRendererProperties, DynamicMaterial2Binding) == 0x000338, "Member 'UNiagaraMeshRendererProperties::DynamicMaterial2Binding' has a wrong offset!");
static_assert(offsetof(UNiagaraMeshRendererProperties, DynamicMaterial3Binding) == 0x000378, "Member 'UNiagaraMeshRendererProperties::DynamicMaterial3Binding' has a wrong offset!");
static_assert(offsetof(UNiagaraMeshRendererProperties, MaterialRandomBinding) == 0x0003B8, "Member 'UNiagaraMeshRendererProperties::MaterialRandomBinding' has a wrong offset!");
static_assert(offsetof(UNiagaraMeshRendererProperties, CustomSortingBinding) == 0x0003F8, "Member 'UNiagaraMeshRendererProperties::CustomSortingBinding' has a wrong offset!");
static_assert(offsetof(UNiagaraMeshRendererProperties, NormalizedAgeBinding) == 0x000438, "Member 'UNiagaraMeshRendererProperties::NormalizedAgeBinding' has a wrong offset!");
static_assert(offsetof(UNiagaraMeshRendererProperties, CameraOffsetBinding) == 0x000478, "Member 'UNiagaraMeshRendererProperties::CameraOffsetBinding' has a wrong offset!");
static_assert(offsetof(UNiagaraMeshRendererProperties, RendererVisibilityTagBinding) == 0x0004B8, "Member 'UNiagaraMeshRendererProperties::RendererVisibilityTagBinding' has a wrong offset!");
static_assert(offsetof(UNiagaraMeshRendererProperties, MeshIndexBinding) == 0x0004F8, "Member 'UNiagaraMeshRendererProperties::MeshIndexBinding' has a wrong offset!");
static_assert(offsetof(UNiagaraMeshRendererProperties, MaterialParameters) == 0x000538, "Member 'UNiagaraMeshRendererProperties::MaterialParameters' has a wrong offset!");
static_assert(offsetof(UNiagaraMeshRendererProperties, PrevPositionBinding) == 0x000578, "Member 'UNiagaraMeshRendererProperties::PrevPositionBinding' has a wrong offset!");
static_assert(offsetof(UNiagaraMeshRendererProperties, PrevScaleBinding) == 0x0005B8, "Member 'UNiagaraMeshRendererProperties::PrevScaleBinding' has a wrong offset!");
static_assert(offsetof(UNiagaraMeshRendererProperties, PrevMeshOrientationBinding) == 0x0005F8, "Member 'UNiagaraMeshRendererProperties::PrevMeshOrientationBinding' has a wrong offset!");
static_assert(offsetof(UNiagaraMeshRendererProperties, PrevCameraOffsetBinding) == 0x000638, "Member 'UNiagaraMeshRendererProperties::PrevCameraOffsetBinding' has a wrong offset!");
static_assert(offsetof(UNiagaraMeshRendererProperties, PrevVelocityBinding) == 0x000678, "Member 'UNiagaraMeshRendererProperties::PrevVelocityBinding' has a wrong offset!");
static_assert(offsetof(UNiagaraMeshRendererProperties, ParticleMesh) == 0x000720, "Member 'UNiagaraMeshRendererProperties::ParticleMesh' has a wrong offset!");
static_assert(offsetof(UNiagaraMeshRendererProperties, PivotOffset) == 0x000728, "Member 'UNiagaraMeshRendererProperties::PivotOffset' has a wrong offset!");
static_assert(offsetof(UNiagaraMeshRendererProperties, PivotOffsetSpace) == 0x000740, "Member 'UNiagaraMeshRendererProperties::PivotOffsetSpace' has a wrong offset!");

class UNiagaraParameterCollectionInstance final : public UObject
{
public:
	class UNiagaraParameterCollection*            Collection;
	TArray<struct FNiagaraVariable>               OverridenParameters;
	struct FNiagaraParameterStore                 ParameterStorage;
	uint8                                         Pad_C8[0x28];

public:
	bool GetBoolParameter(const class FString& InVariableName);
	struct FLinearColor GetColorParameter(const class FString& InVariableName);
	float GetFloatParameter(const class FString& InVariableName);
	int32 GetIntParameter(const class FString& InVariableName);
	struct FQuat GetQuatParameter(const class FString& InVariableName);
	struct FVector2D GetVector2DParameter(const class FString& InVariableName);
	struct FVector4 GetVector4Parameter(const class FString& InVariableName);
	struct FVector GetVectorParameter(const class FString& InVariableName);
	void SetBoolParameter(const class FString& InVariableName, bool InValue);
	void SetColorParameter(const class FString& InVariableName, const struct FLinearColor& InValue);
	void SetFloatParameter(const class FString& InVariableName, float InValue);
	void SetIntParameter(const class FString& InVariableName, int32 InValue);
	void SetQuatParameter(const class FString& InVariableName, const struct FQuat& InValue);
	void SetVector2DParameter(const class FString& InVariableName, const struct FVector2D& InValue);
	void SetVector4Parameter(const class FString& InVariableName, const struct FVector4& InValue);
	void SetVectorParameter(const class FString& InVariableName, const struct FVector& InValue);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"NiagaraParameterCollectionInstance">();
	}
	static class UNiagaraParameterCollectionInstance* GetDefaultObj()
	{
		return GetDefaultObjImpl<UNiagaraParameterCollectionInstance>();
	}
};
static_assert(alignof(UNiagaraParameterCollectionInstance) == 0x000008, "Wrong alignment on UNiagaraParameterCollectionInstance");
static_assert(sizeof(UNiagaraParameterCollectionInstance) == 0x0000F0, "Wrong size on UNiagaraParameterCollectionInstance");
static_assert(offsetof(UNiagaraParameterCollectionInstance, Collection) == 0x000028, "Member 'UNiagaraParameterCollectionInstance::Collection' has a wrong offset!");
static_assert(offsetof(UNiagaraParameterCollectionInstance, OverridenParameters) == 0x000030, "Member 'UNiagaraParameterCollectionInstance::OverridenParameters' has a wrong offset!");
static_assert(offsetof(UNiagaraParameterCollectionInstance, ParameterStorage) == 0x000040, "Member 'UNiagaraParameterCollectionInstance::ParameterStorage' has a wrong offset!");

class UNiagaraParameterCollection final : public UObject
{
public:
	class FName                                   Namespace;
	uint8                                         Pad_2C[0x4];
	TArray<struct FNiagaraVariable>               Parameters;
	class UMaterialParameterCollection*           SourceMaterialCollection;
	class UNiagaraParameterCollectionInstance*    DefaultInstance;
	struct FGuid                                  CompileId;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"NiagaraParameterCollection">();
	}
	static class UNiagaraParameterCollection* GetDefaultObj()
	{
		return GetDefaultObjImpl<UNiagaraParameterCollection>();
	}
};
static_assert(alignof(UNiagaraParameterCollection) == 0x000008, "Wrong alignment on UNiagaraParameterCollection");
static_assert(sizeof(UNiagaraParameterCollection) == 0x000060, "Wrong size on UNiagaraParameterCollection");
static_assert(offsetof(UNiagaraParameterCollection, Namespace) == 0x000028, "Member 'UNiagaraParameterCollection::Namespace' has a wrong offset!");
static_assert(offsetof(UNiagaraParameterCollection, Parameters) == 0x000030, "Member 'UNiagaraParameterCollection::Parameters' has a wrong offset!");
static_assert(offsetof(UNiagaraParameterCollection, SourceMaterialCollection) == 0x000040, "Member 'UNiagaraParameterCollection::SourceMaterialCollection' has a wrong offset!");
static_assert(offsetof(UNiagaraParameterCollection, DefaultInstance) == 0x000048, "Member 'UNiagaraParameterCollection::DefaultInstance' has a wrong offset!");
static_assert(offsetof(UNiagaraParameterCollection, CompileId) == 0x000050, "Member 'UNiagaraParameterCollection::CompileId' has a wrong offset!");

class UNiagaraBaselineController : public UObject
{
public:
	float                                         TestDuration;
	uint8                                         Pad_2C[0x4];
	class UNiagaraEffectType*                     EffectType;
	class ANiagaraPerfBaselineActor*              Owner;
	TSoftObjectPtr<class UNiagaraSystem>          System;

public:
	class UNiagaraSystem* GetSystem();
	void OnBeginTest();
	void OnEndTest(const struct FNiagaraPerfBaselineStats& Stats);
	void OnOwnerTick(float DeltaTime);
	bool OnTickTest();

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"NiagaraBaselineController">();
	}
	static class UNiagaraBaselineController* GetDefaultObj()
	{
		return GetDefaultObjImpl<UNiagaraBaselineController>();
	}
};
static_assert(alignof(UNiagaraBaselineController) == 0x000008, "Wrong alignment on UNiagaraBaselineController");
static_assert(sizeof(UNiagaraBaselineController) == 0x000068, "Wrong size on UNiagaraBaselineController");
static_assert(offsetof(UNiagaraBaselineController, TestDuration) == 0x000028, "Member 'UNiagaraBaselineController::TestDuration' has a wrong offset!");
static_assert(offsetof(UNiagaraBaselineController, EffectType) == 0x000030, "Member 'UNiagaraBaselineController::EffectType' has a wrong offset!");
static_assert(offsetof(UNiagaraBaselineController, Owner) == 0x000038, "Member 'UNiagaraBaselineController::Owner' has a wrong offset!");
static_assert(offsetof(UNiagaraBaselineController, System) == 0x000040, "Member 'UNiagaraBaselineController::System' has a wrong offset!");

class UNiagaraBaselineController_Basic final : public UNiagaraBaselineController
{
public:
	int32                                         NumInstances;
	uint8                                         Pad_6C[0x4];
	TArray<class UNiagaraComponent*>              SpawnedComponents;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"NiagaraBaselineController_Basic">();
	}
	static class UNiagaraBaselineController_Basic* GetDefaultObj()
	{
		return GetDefaultObjImpl<UNiagaraBaselineController_Basic>();
	}
};
static_assert(alignof(UNiagaraBaselineController_Basic) == 0x000008, "Wrong alignment on UNiagaraBaselineController_Basic");
static_assert(sizeof(UNiagaraBaselineController_Basic) == 0x000080, "Wrong size on UNiagaraBaselineController_Basic");
static_assert(offsetof(UNiagaraBaselineController_Basic, NumInstances) == 0x000068, "Member 'UNiagaraBaselineController_Basic::NumInstances' has a wrong offset!");
static_assert(offsetof(UNiagaraBaselineController_Basic, SpawnedComponents) == 0x000070, "Member 'UNiagaraBaselineController_Basic::SpawnedComponents' has a wrong offset!");

class ANiagaraPerfBaselineActor final : public AActor
{
public:
	class UNiagaraBaselineController*             Controller;
	class UTextRenderComponent*                   Label;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"NiagaraPerfBaselineActor">();
	}
	static class ANiagaraPerfBaselineActor* GetDefaultObj()
	{
		return GetDefaultObjImpl<ANiagaraPerfBaselineActor>();
	}
};
static_assert(alignof(ANiagaraPerfBaselineActor) == 0x000008, "Wrong alignment on ANiagaraPerfBaselineActor");
static_assert(sizeof(ANiagaraPerfBaselineActor) == 0x000298, "Wrong size on ANiagaraPerfBaselineActor");
static_assert(offsetof(ANiagaraPerfBaselineActor, Controller) == 0x000288, "Member 'ANiagaraPerfBaselineActor::Controller' has a wrong offset!");
static_assert(offsetof(ANiagaraPerfBaselineActor, Label) == 0x000290, "Member 'ANiagaraPerfBaselineActor::Label' has a wrong offset!");

class UNiagaraPrecompileContainer final : public UObject
{
public:
	TArray<class UNiagaraScript*>                 Scripts;
	class UNiagaraSystem*                         System;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"NiagaraPrecompileContainer">();
	}
	static class UNiagaraPrecompileContainer* GetDefaultObj()
	{
		return GetDefaultObjImpl<UNiagaraPrecompileContainer>();
	}
};
static_assert(alignof(UNiagaraPrecompileContainer) == 0x000008, "Wrong alignment on UNiagaraPrecompileContainer");
static_assert(sizeof(UNiagaraPrecompileContainer) == 0x000040, "Wrong size on UNiagaraPrecompileContainer");
static_assert(offsetof(UNiagaraPrecompileContainer, Scripts) == 0x000028, "Member 'UNiagaraPrecompileContainer::Scripts' has a wrong offset!");
static_assert(offsetof(UNiagaraPrecompileContainer, System) == 0x000038, "Member 'UNiagaraPrecompileContainer::System' has a wrong offset!");

class ANiagaraPreviewBase final : public AActor
{
public:
	void SetLabelText(const class FText& InXAxisText, const class FText& InYAxisText);
	void SetSystem(class UNiagaraSystem* InSystem);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"NiagaraPreviewBase">();
	}
	static class ANiagaraPreviewBase* GetDefaultObj()
	{
		return GetDefaultObjImpl<ANiagaraPreviewBase>();
	}
};
static_assert(alignof(ANiagaraPreviewBase) == 0x000008, "Wrong alignment on ANiagaraPreviewBase");
static_assert(sizeof(ANiagaraPreviewBase) == 0x000288, "Wrong size on ANiagaraPreviewBase");

class UNiagaraPreviewAxis : public UObject
{
public:
	void ApplyToPreview(class UNiagaraComponent* PreviewComponent, int32 PreviewIndex, bool bIsXAxis, class FString* OutLabelText);
	int32 Num();

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"NiagaraPreviewAxis">();
	}
	static class UNiagaraPreviewAxis* GetDefaultObj()
	{
		return GetDefaultObjImpl<UNiagaraPreviewAxis>();
	}
};
static_assert(alignof(UNiagaraPreviewAxis) == 0x000008, "Wrong alignment on UNiagaraPreviewAxis");
static_assert(sizeof(UNiagaraPreviewAxis) == 0x000028, "Wrong size on UNiagaraPreviewAxis");

class UNiagaraPreviewAxis_InterpParamBase : public UNiagaraPreviewAxis
{
public:
	class FName                                   Param;
	int32                                         Count;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"NiagaraPreviewAxis_InterpParamBase">();
	}
	static class UNiagaraPreviewAxis_InterpParamBase* GetDefaultObj()
	{
		return GetDefaultObjImpl<UNiagaraPreviewAxis_InterpParamBase>();
	}
};
static_assert(alignof(UNiagaraPreviewAxis_InterpParamBase) == 0x000008, "Wrong alignment on UNiagaraPreviewAxis_InterpParamBase");
static_assert(sizeof(UNiagaraPreviewAxis_InterpParamBase) == 0x000030, "Wrong size on UNiagaraPreviewAxis_InterpParamBase");
static_assert(offsetof(UNiagaraPreviewAxis_InterpParamBase, Param) == 0x000028, "Member 'UNiagaraPreviewAxis_InterpParamBase::Param' has a wrong offset!");
static_assert(offsetof(UNiagaraPreviewAxis_InterpParamBase, Count) == 0x00002C, "Member 'UNiagaraPreviewAxis_InterpParamBase::Count' has a wrong offset!");

class UNiagaraPreviewAxis_InterpParamInt32 final : public UNiagaraPreviewAxis_InterpParamBase
{
public:
	int32                                         min_0;
	int32                                         max_0;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"NiagaraPreviewAxis_InterpParamInt32">();
	}
	static class UNiagaraPreviewAxis_InterpParamInt32* GetDefaultObj()
	{
		return GetDefaultObjImpl<UNiagaraPreviewAxis_InterpParamInt32>();
	}
};
static_assert(alignof(UNiagaraPreviewAxis_InterpParamInt32) == 0x000008, "Wrong alignment on UNiagaraPreviewAxis_InterpParamInt32");
static_assert(sizeof(UNiagaraPreviewAxis_InterpParamInt32) == 0x000038, "Wrong size on UNiagaraPreviewAxis_InterpParamInt32");
static_assert(offsetof(UNiagaraPreviewAxis_InterpParamInt32, min_0) == 0x000030, "Member 'UNiagaraPreviewAxis_InterpParamInt32::min_0' has a wrong offset!");
static_assert(offsetof(UNiagaraPreviewAxis_InterpParamInt32, max_0) == 0x000034, "Member 'UNiagaraPreviewAxis_InterpParamInt32::max_0' has a wrong offset!");

class UNiagaraPreviewAxis_InterpParamFloat final : public UNiagaraPreviewAxis_InterpParamBase
{
public:
	float                                         min_0;
	float                                         max_0;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"NiagaraPreviewAxis_InterpParamFloat">();
	}
	static class UNiagaraPreviewAxis_InterpParamFloat* GetDefaultObj()
	{
		return GetDefaultObjImpl<UNiagaraPreviewAxis_InterpParamFloat>();
	}
};
static_assert(alignof(UNiagaraPreviewAxis_InterpParamFloat) == 0x000008, "Wrong alignment on UNiagaraPreviewAxis_InterpParamFloat");
static_assert(sizeof(UNiagaraPreviewAxis_InterpParamFloat) == 0x000038, "Wrong size on UNiagaraPreviewAxis_InterpParamFloat");
static_assert(offsetof(UNiagaraPreviewAxis_InterpParamFloat, min_0) == 0x000030, "Member 'UNiagaraPreviewAxis_InterpParamFloat::min_0' has a wrong offset!");
static_assert(offsetof(UNiagaraPreviewAxis_InterpParamFloat, max_0) == 0x000034, "Member 'UNiagaraPreviewAxis_InterpParamFloat::max_0' has a wrong offset!");

class UNiagaraPreviewAxis_InterpParamVector2D final : public UNiagaraPreviewAxis_InterpParamBase
{
public:
	struct FVector2D                              min_0;
	struct FVector2D                              max_0;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"NiagaraPreviewAxis_InterpParamVector2D">();
	}
	static class UNiagaraPreviewAxis_InterpParamVector2D* GetDefaultObj()
	{
		return GetDefaultObjImpl<UNiagaraPreviewAxis_InterpParamVector2D>();
	}
};
static_assert(alignof(UNiagaraPreviewAxis_InterpParamVector2D) == 0x000008, "Wrong alignment on UNiagaraPreviewAxis_InterpParamVector2D");
static_assert(sizeof(UNiagaraPreviewAxis_InterpParamVector2D) == 0x000050, "Wrong size on UNiagaraPreviewAxis_InterpParamVector2D");
static_assert(offsetof(UNiagaraPreviewAxis_InterpParamVector2D, min_0) == 0x000030, "Member 'UNiagaraPreviewAxis_InterpParamVector2D::min_0' has a wrong offset!");
static_assert(offsetof(UNiagaraPreviewAxis_InterpParamVector2D, max_0) == 0x000040, "Member 'UNiagaraPreviewAxis_InterpParamVector2D::max_0' has a wrong offset!");

class UNiagaraPreviewAxis_InterpParamVector final : public UNiagaraPreviewAxis_InterpParamBase
{
public:
	struct FVector                                min_0;
	struct FVector                                max_0;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"NiagaraPreviewAxis_InterpParamVector">();
	}
	static class UNiagaraPreviewAxis_InterpParamVector* GetDefaultObj()
	{
		return GetDefaultObjImpl<UNiagaraPreviewAxis_InterpParamVector>();
	}
};
static_assert(alignof(UNiagaraPreviewAxis_InterpParamVector) == 0x000008, "Wrong alignment on UNiagaraPreviewAxis_InterpParamVector");
static_assert(sizeof(UNiagaraPreviewAxis_InterpParamVector) == 0x000060, "Wrong size on UNiagaraPreviewAxis_InterpParamVector");
static_assert(offsetof(UNiagaraPreviewAxis_InterpParamVector, min_0) == 0x000030, "Member 'UNiagaraPreviewAxis_InterpParamVector::min_0' has a wrong offset!");
static_assert(offsetof(UNiagaraPreviewAxis_InterpParamVector, max_0) == 0x000048, "Member 'UNiagaraPreviewAxis_InterpParamVector::max_0' has a wrong offset!");

class UNiagaraPreviewAxis_InterpParamVector4 final : public UNiagaraPreviewAxis_InterpParamBase
{
public:
	struct FVector4                               min_0;
	struct FVector4                               max_0;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"NiagaraPreviewAxis_InterpParamVector4">();
	}
	static class UNiagaraPreviewAxis_InterpParamVector4* GetDefaultObj()
	{
		return GetDefaultObjImpl<UNiagaraPreviewAxis_InterpParamVector4>();
	}
};
static_assert(alignof(UNiagaraPreviewAxis_InterpParamVector4) == 0x000010, "Wrong alignment on UNiagaraPreviewAxis_InterpParamVector4");
static_assert(sizeof(UNiagaraPreviewAxis_InterpParamVector4) == 0x000070, "Wrong size on UNiagaraPreviewAxis_InterpParamVector4");
static_assert(offsetof(UNiagaraPreviewAxis_InterpParamVector4, min_0) == 0x000030, "Member 'UNiagaraPreviewAxis_InterpParamVector4::min_0' has a wrong offset!");
static_assert(offsetof(UNiagaraPreviewAxis_InterpParamVector4, max_0) == 0x000050, "Member 'UNiagaraPreviewAxis_InterpParamVector4::max_0' has a wrong offset!");

class UNiagaraPreviewAxis_InterpParamLinearColor final : public UNiagaraPreviewAxis_InterpParamBase
{
public:
	struct FLinearColor                           min_0;
	struct FLinearColor                           max_0;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"NiagaraPreviewAxis_InterpParamLinearColor">();
	}
	static class UNiagaraPreviewAxis_InterpParamLinearColor* GetDefaultObj()
	{
		return GetDefaultObjImpl<UNiagaraPreviewAxis_InterpParamLinearColor>();
	}
};
static_assert(alignof(UNiagaraPreviewAxis_InterpParamLinearColor) == 0x000008, "Wrong alignment on UNiagaraPreviewAxis_InterpParamLinearColor");
static_assert(sizeof(UNiagaraPreviewAxis_InterpParamLinearColor) == 0x000050, "Wrong size on UNiagaraPreviewAxis_InterpParamLinearColor");
static_assert(offsetof(UNiagaraPreviewAxis_InterpParamLinearColor, min_0) == 0x000030, "Member 'UNiagaraPreviewAxis_InterpParamLinearColor::min_0' has a wrong offset!");
static_assert(offsetof(UNiagaraPreviewAxis_InterpParamLinearColor, max_0) == 0x000040, "Member 'UNiagaraPreviewAxis_InterpParamLinearColor::max_0' has a wrong offset!");

class ANiagaraPreviewGrid final : public AActor
{
public:
	class UNiagaraSystem*                         System;
	ENiagaraPreviewGridResetMode                  ResetMode;
	uint8                                         Pad_291[0x7];
	class UNiagaraPreviewAxis*                    PreviewAxisX;
	class UNiagaraPreviewAxis*                    PreviewAxisY;
	TSubclassOf<class ANiagaraPreviewBase>        PreviewClass;
	float                                         SpacingX;
	float                                         SpacingY;
	int32                                         NumX;
	int32                                         NumY;
	TArray<class UChildActorComponent*>           PreviewComponents;
	uint8                                         Pad_2D0[0x8];

public:
	void ActivatePreviews(bool bReset);
	void DeactivatePreviews();
	void GetPreviews(TArray<class UNiagaraComponent*>* OutPreviews);
	void SetPaused(bool bPaused);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"NiagaraPreviewGrid">();
	}
	static class ANiagaraPreviewGrid* GetDefaultObj()
	{
		return GetDefaultObjImpl<ANiagaraPreviewGrid>();
	}
};
static_assert(alignof(ANiagaraPreviewGrid) == 0x000008, "Wrong alignment on ANiagaraPreviewGrid");
static_assert(sizeof(ANiagaraPreviewGrid) == 0x0002D8, "Wrong size on ANiagaraPreviewGrid");
static_assert(offsetof(ANiagaraPreviewGrid, System) == 0x000288, "Member 'ANiagaraPreviewGrid::System' has a wrong offset!");
static_assert(offsetof(ANiagaraPreviewGrid, ResetMode) == 0x000290, "Member 'ANiagaraPreviewGrid::ResetMode' has a wrong offset!");
static_assert(offsetof(ANiagaraPreviewGrid, PreviewAxisX) == 0x000298, "Member 'ANiagaraPreviewGrid::PreviewAxisX' has a wrong offset!");
static_assert(offsetof(ANiagaraPreviewGrid, PreviewAxisY) == 0x0002A0, "Member 'ANiagaraPreviewGrid::PreviewAxisY' has a wrong offset!");
static_assert(offsetof(ANiagaraPreviewGrid, PreviewClass) == 0x0002A8, "Member 'ANiagaraPreviewGrid::PreviewClass' has a wrong offset!");
static_assert(offsetof(ANiagaraPreviewGrid, SpacingX) == 0x0002B0, "Member 'ANiagaraPreviewGrid::SpacingX' has a wrong offset!");
static_assert(offsetof(ANiagaraPreviewGrid, SpacingY) == 0x0002B4, "Member 'ANiagaraPreviewGrid::SpacingY' has a wrong offset!");
static_assert(offsetof(ANiagaraPreviewGrid, NumX) == 0x0002B8, "Member 'ANiagaraPreviewGrid::NumX' has a wrong offset!");
static_assert(offsetof(ANiagaraPreviewGrid, NumY) == 0x0002BC, "Member 'ANiagaraPreviewGrid::NumY' has a wrong offset!");
static_assert(offsetof(ANiagaraPreviewGrid, PreviewComponents) == 0x0002C0, "Member 'ANiagaraPreviewGrid::PreviewComponents' has a wrong offset!");

class UNiagaraRibbonRendererProperties final : public UNiagaraRendererProperties
{
public:
	class UMaterialInterface*                     Material;
	struct FNiagaraUserParameterBinding           MaterialUserParamBinding;
	ENiagaraRibbonFacingMode                      FacingMode;
	uint8                                         Pad_E9[0x7];
	struct FNiagaraRibbonUVSettings               UV0Settings;
	struct FNiagaraRibbonUVSettings               UV1Settings;
	int32                                         MaxNumRibbons;
	bool                                          bUseGPUInit;
	ENiagaraRibbonDrawDirection                   DrawDirection;
	ENiagaraRibbonShapeMode                       Shape;
	bool                                          bEnableAccurateGeometry;
	int32                                         WidthSegmentationCount;
	int32                                         MultiPlaneCount;
	int32                                         TubeSubdivisions;
	uint8                                         Pad_174[0x4];
	TArray<struct FNiagaraRibbonShapeCustomVertex> CustomVertices;
	float                                         CurveTension;
	ENiagaraRibbonTessellationMode                TessellationMode;
	uint8                                         Pad_18D[0x3];
	int32                                         TessellationFactor;
	bool                                          bUseConstantFactor;
	uint8                                         Pad_195[0x3];
	float                                         TessellationAngle;
	bool                                          bScreenSpaceTessellation;
	uint8                                         Pad_19D[0x3];
	struct FNiagaraVariableAttributeBinding       PositionBinding;
	struct FNiagaraVariableAttributeBinding       ColorBinding;
	struct FNiagaraVariableAttributeBinding       VelocityBinding;
	struct FNiagaraVariableAttributeBinding       NormalizedAgeBinding;
	struct FNiagaraVariableAttributeBinding       RibbonTwistBinding;
	struct FNiagaraVariableAttributeBinding       RibbonWidthBinding;
	struct FNiagaraVariableAttributeBinding       RibbonFacingBinding;
	struct FNiagaraVariableAttributeBinding       RibbonIdBinding;
	struct FNiagaraVariableAttributeBinding       RibbonLinkOrderBinding;
	struct FNiagaraVariableAttributeBinding       MaterialRandomBinding;
	struct FNiagaraVariableAttributeBinding       DynamicMaterialBinding;
	struct FNiagaraVariableAttributeBinding       DynamicMaterial1Binding;
	struct FNiagaraVariableAttributeBinding       DynamicMaterial2Binding;
	struct FNiagaraVariableAttributeBinding       DynamicMaterial3Binding;
	struct FNiagaraVariableAttributeBinding       RibbonUVDistance;
	struct FNiagaraVariableAttributeBinding       U0OverrideBinding;
	struct FNiagaraVariableAttributeBinding       V0RangeOverrideBinding;
	struct FNiagaraVariableAttributeBinding       U1OverrideBinding;
	struct FNiagaraVariableAttributeBinding       V1RangeOverrideBinding;
	struct FNiagaraRendererMaterialParameters     MaterialParameters;
	struct FNiagaraVariableAttributeBinding       PrevPositionBinding;
	struct FNiagaraVariableAttributeBinding       PrevRibbonWidthBinding;
	struct FNiagaraVariableAttributeBinding       PrevRibbonFacingBinding;
	struct FNiagaraVariableAttributeBinding       PrevRibbonTwistBinding;
	uint8                                         Pad_7A0[0xA8];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"NiagaraRibbonRendererProperties">();
	}
	static class UNiagaraRibbonRendererProperties* GetDefaultObj()
	{
		return GetDefaultObjImpl<UNiagaraRibbonRendererProperties>();
	}
};
static_assert(alignof(UNiagaraRibbonRendererProperties) == 0x000008, "Wrong alignment on UNiagaraRibbonRendererProperties");
static_assert(sizeof(UNiagaraRibbonRendererProperties) == 0x000848, "Wrong size on UNiagaraRibbonRendererProperties");
static_assert(offsetof(UNiagaraRibbonRendererProperties, Material) == 0x0000C8, "Member 'UNiagaraRibbonRendererProperties::Material' has a wrong offset!");
static_assert(offsetof(UNiagaraRibbonRendererProperties, MaterialUserParamBinding) == 0x0000D0, "Member 'UNiagaraRibbonRendererProperties::MaterialUserParamBinding' has a wrong offset!");
static_assert(offsetof(UNiagaraRibbonRendererProperties, FacingMode) == 0x0000E8, "Member 'UNiagaraRibbonRendererProperties::FacingMode' has a wrong offset!");
static_assert(offsetof(UNiagaraRibbonRendererProperties, UV0Settings) == 0x0000F0, "Member 'UNiagaraRibbonRendererProperties::UV0Settings' has a wrong offset!");
static_assert(offsetof(UNiagaraRibbonRendererProperties, UV1Settings) == 0x000128, "Member 'UNiagaraRibbonRendererProperties::UV1Settings' has a wrong offset!");
static_assert(offsetof(UNiagaraRibbonRendererProperties, MaxNumRibbons) == 0x000160, "Member 'UNiagaraRibbonRendererProperties::MaxNumRibbons' has a wrong offset!");
static_assert(offsetof(UNiagaraRibbonRendererProperties, bUseGPUInit) == 0x000164, "Member 'UNiagaraRibbonRendererProperties::bUseGPUInit' has a wrong offset!");
static_assert(offsetof(UNiagaraRibbonRendererProperties, DrawDirection) == 0x000165, "Member 'UNiagaraRibbonRendererProperties::DrawDirection' has a wrong offset!");
static_assert(offsetof(UNiagaraRibbonRendererProperties, Shape) == 0x000166, "Member 'UNiagaraRibbonRendererProperties::Shape' has a wrong offset!");
static_assert(offsetof(UNiagaraRibbonRendererProperties, bEnableAccurateGeometry) == 0x000167, "Member 'UNiagaraRibbonRendererProperties::bEnableAccurateGeometry' has a wrong offset!");
static_assert(offsetof(UNiagaraRibbonRendererProperties, WidthSegmentationCount) == 0x000168, "Member 'UNiagaraRibbonRendererProperties::WidthSegmentationCount' has a wrong offset!");
static_assert(offsetof(UNiagaraRibbonRendererProperties, MultiPlaneCount) == 0x00016C, "Member 'UNiagaraRibbonRendererProperties::MultiPlaneCount' has a wrong offset!");
static_assert(offsetof(UNiagaraRibbonRendererProperties, TubeSubdivisions) == 0x000170, "Member 'UNiagaraRibbonRendererProperties::TubeSubdivisions' has a wrong offset!");
static_assert(offsetof(UNiagaraRibbonRendererProperties, CustomVertices) == 0x000178, "Member 'UNiagaraRibbonRendererProperties::CustomVertices' has a wrong offset!");
static_assert(offsetof(UNiagaraRibbonRendererProperties, CurveTension) == 0x000188, "Member 'UNiagaraRibbonRendererProperties::CurveTension' has a wrong offset!");
static_assert(offsetof(UNiagaraRibbonRendererProperties, TessellationMode) == 0x00018C, "Member 'UNiagaraRibbonRendererProperties::TessellationMode' has a wrong offset!");
static_assert(offsetof(UNiagaraRibbonRendererProperties, TessellationFactor) == 0x000190, "Member 'UNiagaraRibbonRendererProperties::TessellationFactor' has a wrong offset!");
static_assert(offsetof(UNiagaraRibbonRendererProperties, bUseConstantFactor) == 0x000194, "Member 'UNiagaraRibbonRendererProperties::bUseConstantFactor' has a wrong offset!");
static_assert(offsetof(UNiagaraRibbonRendererProperties, TessellationAngle) == 0x000198, "Member 'UNiagaraRibbonRendererProperties::TessellationAngle' has a wrong offset!");
static_assert(offsetof(UNiagaraRibbonRendererProperties, bScreenSpaceTessellation) == 0x00019C, "Member 'UNiagaraRibbonRendererProperties::bScreenSpaceTessellation' has a wrong offset!");
static_assert(offsetof(UNiagaraRibbonRendererProperties, PositionBinding) == 0x0001A0, "Member 'UNiagaraRibbonRendererProperties::PositionBinding' has a wrong offset!");
static_assert(offsetof(UNiagaraRibbonRendererProperties, ColorBinding) == 0x0001E0, "Member 'UNiagaraRibbonRendererProperties::ColorBinding' has a wrong offset!");
static_assert(offsetof(UNiagaraRibbonRendererProperties, VelocityBinding) == 0x000220, "Member 'UNiagaraRibbonRendererProperties::VelocityBinding' has a wrong offset!");
static_assert(offsetof(UNiagaraRibbonRendererProperties, NormalizedAgeBinding) == 0x000260, "Member 'UNiagaraRibbonRendererProperties::NormalizedAgeBinding' has a wrong offset!");
static_assert(offsetof(UNiagaraRibbonRendererProperties, RibbonTwistBinding) == 0x0002A0, "Member 'UNiagaraRibbonRendererProperties::RibbonTwistBinding' has a wrong offset!");
static_assert(offsetof(UNiagaraRibbonRendererProperties, RibbonWidthBinding) == 0x0002E0, "Member 'UNiagaraRibbonRendererProperties::RibbonWidthBinding' has a wrong offset!");
static_assert(offsetof(UNiagaraRibbonRendererProperties, RibbonFacingBinding) == 0x000320, "Member 'UNiagaraRibbonRendererProperties::RibbonFacingBinding' has a wrong offset!");
static_assert(offsetof(UNiagaraRibbonRendererProperties, RibbonIdBinding) == 0x000360, "Member 'UNiagaraRibbonRendererProperties::RibbonIdBinding' has a wrong offset!");
static_assert(offsetof(UNiagaraRibbonRendererProperties, RibbonLinkOrderBinding) == 0x0003A0, "Member 'UNiagaraRibbonRendererProperties::RibbonLinkOrderBinding' has a wrong offset!");
static_assert(offsetof(UNiagaraRibbonRendererProperties, MaterialRandomBinding) == 0x0003E0, "Member 'UNiagaraRibbonRendererProperties::MaterialRandomBinding' has a wrong offset!");
static_assert(offsetof(UNiagaraRibbonRendererProperties, DynamicMaterialBinding) == 0x000420, "Member 'UNiagaraRibbonRendererProperties::DynamicMaterialBinding' has a wrong offset!");
static_assert(offsetof(UNiagaraRibbonRendererProperties, DynamicMaterial1Binding) == 0x000460, "Member 'UNiagaraRibbonRendererProperties::DynamicMaterial1Binding' has a wrong offset!");
static_assert(offsetof(UNiagaraRibbonRendererProperties, DynamicMaterial2Binding) == 0x0004A0, "Member 'UNiagaraRibbonRendererProperties::DynamicMaterial2Binding' has a wrong offset!");
static_assert(offsetof(UNiagaraRibbonRendererProperties, DynamicMaterial3Binding) == 0x0004E0, "Member 'UNiagaraRibbonRendererProperties::DynamicMaterial3Binding' has a wrong offset!");
static_assert(offsetof(UNiagaraRibbonRendererProperties, RibbonUVDistance) == 0x000520, "Member 'UNiagaraRibbonRendererProperties::RibbonUVDistance' has a wrong offset!");
static_assert(offsetof(UNiagaraRibbonRendererProperties, U0OverrideBinding) == 0x000560, "Member 'UNiagaraRibbonRendererProperties::U0OverrideBinding' has a wrong offset!");
static_assert(offsetof(UNiagaraRibbonRendererProperties, V0RangeOverrideBinding) == 0x0005A0, "Member 'UNiagaraRibbonRendererProperties::V0RangeOverrideBinding' has a wrong offset!");
static_assert(offsetof(UNiagaraRibbonRendererProperties, U1OverrideBinding) == 0x0005E0, "Member 'UNiagaraRibbonRendererProperties::U1OverrideBinding' has a wrong offset!");
static_assert(offsetof(UNiagaraRibbonRendererProperties, V1RangeOverrideBinding) == 0x000620, "Member 'UNiagaraRibbonRendererProperties::V1RangeOverrideBinding' has a wrong offset!");
static_assert(offsetof(UNiagaraRibbonRendererProperties, MaterialParameters) == 0x000660, "Member 'UNiagaraRibbonRendererProperties::MaterialParameters' has a wrong offset!");
static_assert(offsetof(UNiagaraRibbonRendererProperties, PrevPositionBinding) == 0x0006A0, "Member 'UNiagaraRibbonRendererProperties::PrevPositionBinding' has a wrong offset!");
static_assert(offsetof(UNiagaraRibbonRendererProperties, PrevRibbonWidthBinding) == 0x0006E0, "Member 'UNiagaraRibbonRendererProperties::PrevRibbonWidthBinding' has a wrong offset!");
static_assert(offsetof(UNiagaraRibbonRendererProperties, PrevRibbonFacingBinding) == 0x000720, "Member 'UNiagaraRibbonRendererProperties::PrevRibbonFacingBinding' has a wrong offset!");
static_assert(offsetof(UNiagaraRibbonRendererProperties, PrevRibbonTwistBinding) == 0x000760, "Member 'UNiagaraRibbonRendererProperties::PrevRibbonTwistBinding' has a wrong offset!");

class UNiagaraScratchPadContainer final : public UObject
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"NiagaraScratchPadContainer">();
	}
	static class UNiagaraScratchPadContainer* GetDefaultObj()
	{
		return GetDefaultObjImpl<UNiagaraScratchPadContainer>();
	}
};
static_assert(alignof(UNiagaraScratchPadContainer) == 0x000008, "Wrong alignment on UNiagaraScratchPadContainer");
static_assert(sizeof(UNiagaraScratchPadContainer) == 0x000028, "Wrong size on UNiagaraScratchPadContainer");

class UNiagaraScript final : public UNiagaraScriptBase
{
public:
	uint8                                         Pad_28[0x8];
	ENiagaraScriptUsage                           Usage;
	uint8                                         Pad_31[0x3];
	struct FGuid                                  UsageId;
	uint8                                         Pad_44[0x4];
	struct FNiagaraParameterStore                 RapidIterationParameters;
	struct FNiagaraScriptExecutionParameterStore  ScriptExecutionParamStore;
	TArray<struct FNiagaraBoundParameter>         ScriptExecutionBoundParameters;
	struct FNiagaraVMExecutableDataId             CachedScriptVMId;
	uint8                                         Pad_1E0[0x18];
	struct FNiagaraVMExecutableData               CachedScriptVM;
	TArray<class UNiagaraParameterCollection*>    CachedParameterCollectionReferences;
	TArray<struct FNiagaraScriptDataInterfaceInfo> CachedDefaultDataInterfaces;
	uint8                                         Pad_3A8[0x8];

public:
	void RaiseOnGPUCompilationComplete();

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"NiagaraScript">();
	}
	static class UNiagaraScript* GetDefaultObj()
	{
		return GetDefaultObjImpl<UNiagaraScript>();
	}
};
static_assert(alignof(UNiagaraScript) == 0x000008, "Wrong alignment on UNiagaraScript");
static_assert(sizeof(UNiagaraScript) == 0x0003B0, "Wrong size on UNiagaraScript");
static_assert(offsetof(UNiagaraScript, Usage) == 0x000030, "Member 'UNiagaraScript::Usage' has a wrong offset!");
static_assert(offsetof(UNiagaraScript, UsageId) == 0x000034, "Member 'UNiagaraScript::UsageId' has a wrong offset!");
static_assert(offsetof(UNiagaraScript, RapidIterationParameters) == 0x000048, "Member 'UNiagaraScript::RapidIterationParameters' has a wrong offset!");
static_assert(offsetof(UNiagaraScript, ScriptExecutionParamStore) == 0x0000D0, "Member 'UNiagaraScript::ScriptExecutionParamStore' has a wrong offset!");
static_assert(offsetof(UNiagaraScript, ScriptExecutionBoundParameters) == 0x000178, "Member 'UNiagaraScript::ScriptExecutionBoundParameters' has a wrong offset!");
static_assert(offsetof(UNiagaraScript, CachedScriptVMId) == 0x000188, "Member 'UNiagaraScript::CachedScriptVMId' has a wrong offset!");
static_assert(offsetof(UNiagaraScript, CachedScriptVM) == 0x0001F8, "Member 'UNiagaraScript::CachedScriptVM' has a wrong offset!");
static_assert(offsetof(UNiagaraScript, CachedParameterCollectionReferences) == 0x000388, "Member 'UNiagaraScript::CachedParameterCollectionReferences' has a wrong offset!");
static_assert(offsetof(UNiagaraScript, CachedDefaultDataInterfaces) == 0x000398, "Member 'UNiagaraScript::CachedDefaultDataInterfaces' has a wrong offset!");

class UNiagaraSettings final : public UDeveloperSettings
{
public:
	bool                                          bSystemsSupportLargeWorldCoordinates;
	bool                                          bEnforceStrictStackTypes;
	bool                                          bExperimentalVMEnabled;
	uint8                                         Pad_33[0x5];
	struct FSoftObjectPath                        DefaultEffectType;
	struct FSoftObjectPath                        RequiredEffectType;
	struct FLinearColor                           PositionPinTypeColor;
	TArray<class FText>                           QualityLevels;
	TMap<class FString, class FText>              ComponentRendererWarningsPerClass;
	ETextureRenderTargetFormat                    DefaultRenderTargetFormat;
	ENiagaraGpuBufferFormat                       DefaultGridFormat;
	uint8                                         Pad_DA[0x2];
	ENiagaraDefaultRendererMotionVectorSetting    DefaultRendererMotionVectorSetting;
	ENiagaraDefaultRendererPixelCoverageMode      DefaultPixelCoverageMode;
	ENiagaraDefaultSortPrecision                  DefaultSortPrecision;
	ENiagaraDefaultGpuTranslucentLatency          DefaultGpuTranslucentLatency;
	uint8                                         Pad_E3[0x1];
	float                                         DefaultLightInverseExposureBlend;
	ENDISkelMesh_GpuMaxInfluences                 NDISkelMesh_GpuMaxInfluences;
	ENDISkelMesh_GpuUniformSamplingFormat         NDISkelMesh_GpuUniformSamplingFormat;
	ENDISkelMesh_AdjacencyTriangleIndexFormat     NDISkelMesh_AdjacencyTriangleIndexFormat;
	bool                                          NDIStaticMesh_AllowDistanceFields;
	uint8                                         Pad_EC[0x4];
	TArray<ENDICollisionQuery_AsyncGpuTraceProvider> NDICollisionQuery_AsyncGpuTraceProviderOrder;
	TArray<struct FNiagaraPlatformSetRedirect>    PlatformSetRedirects;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"NiagaraSettings">();
	}
	static class UNiagaraSettings* GetDefaultObj()
	{
		return GetDefaultObjImpl<UNiagaraSettings>();
	}
};
static_assert(alignof(UNiagaraSettings) == 0x000008, "Wrong alignment on UNiagaraSettings");
static_assert(sizeof(UNiagaraSettings) == 0x000110, "Wrong size on UNiagaraSettings");
static_assert(offsetof(UNiagaraSettings, bSystemsSupportLargeWorldCoordinates) == 0x000030, "Member 'UNiagaraSettings::bSystemsSupportLargeWorldCoordinates' has a wrong offset!");
static_assert(offsetof(UNiagaraSettings, bEnforceStrictStackTypes) == 0x000031, "Member 'UNiagaraSettings::bEnforceStrictStackTypes' has a wrong offset!");
static_assert(offsetof(UNiagaraSettings, bExperimentalVMEnabled) == 0x000032, "Member 'UNiagaraSettings::bExperimentalVMEnabled' has a wrong offset!");
static_assert(offsetof(UNiagaraSettings, DefaultEffectType) == 0x000038, "Member 'UNiagaraSettings::DefaultEffectType' has a wrong offset!");
static_assert(offsetof(UNiagaraSettings, RequiredEffectType) == 0x000050, "Member 'UNiagaraSettings::RequiredEffectType' has a wrong offset!");
static_assert(offsetof(UNiagaraSettings, PositionPinTypeColor) == 0x000068, "Member 'UNiagaraSettings::PositionPinTypeColor' has a wrong offset!");
static_assert(offsetof(UNiagaraSettings, QualityLevels) == 0x000078, "Member 'UNiagaraSettings::QualityLevels' has a wrong offset!");
static_assert(offsetof(UNiagaraSettings, ComponentRendererWarningsPerClass) == 0x000088, "Member 'UNiagaraSettings::ComponentRendererWarningsPerClass' has a wrong offset!");
static_assert(offsetof(UNiagaraSettings, DefaultRenderTargetFormat) == 0x0000D8, "Member 'UNiagaraSettings::DefaultRenderTargetFormat' has a wrong offset!");
static_assert(offsetof(UNiagaraSettings, DefaultGridFormat) == 0x0000D9, "Member 'UNiagaraSettings::DefaultGridFormat' has a wrong offset!");
static_assert(offsetof(UNiagaraSettings, DefaultRendererMotionVectorSetting) == 0x0000DC, "Member 'UNiagaraSettings::DefaultRendererMotionVectorSetting' has a wrong offset!");
static_assert(offsetof(UNiagaraSettings, DefaultPixelCoverageMode) == 0x0000E0, "Member 'UNiagaraSettings::DefaultPixelCoverageMode' has a wrong offset!");
static_assert(offsetof(UNiagaraSettings, DefaultSortPrecision) == 0x0000E1, "Member 'UNiagaraSettings::DefaultSortPrecision' has a wrong offset!");
static_assert(offsetof(UNiagaraSettings, DefaultGpuTranslucentLatency) == 0x0000E2, "Member 'UNiagaraSettings::DefaultGpuTranslucentLatency' has a wrong offset!");
static_assert(offsetof(UNiagaraSettings, DefaultLightInverseExposureBlend) == 0x0000E4, "Member 'UNiagaraSettings::DefaultLightInverseExposureBlend' has a wrong offset!");
static_assert(offsetof(UNiagaraSettings, NDISkelMesh_GpuMaxInfluences) == 0x0000E8, "Member 'UNiagaraSettings::NDISkelMesh_GpuMaxInfluences' has a wrong offset!");
static_assert(offsetof(UNiagaraSettings, NDISkelMesh_GpuUniformSamplingFormat) == 0x0000E9, "Member 'UNiagaraSettings::NDISkelMesh_GpuUniformSamplingFormat' has a wrong offset!");
static_assert(offsetof(UNiagaraSettings, NDISkelMesh_AdjacencyTriangleIndexFormat) == 0x0000EA, "Member 'UNiagaraSettings::NDISkelMesh_AdjacencyTriangleIndexFormat' has a wrong offset!");
static_assert(offsetof(UNiagaraSettings, NDIStaticMesh_AllowDistanceFields) == 0x0000EB, "Member 'UNiagaraSettings::NDIStaticMesh_AllowDistanceFields' has a wrong offset!");
static_assert(offsetof(UNiagaraSettings, NDICollisionQuery_AsyncGpuTraceProviderOrder) == 0x0000F0, "Member 'UNiagaraSettings::NDICollisionQuery_AsyncGpuTraceProviderOrder' has a wrong offset!");
static_assert(offsetof(UNiagaraSettings, PlatformSetRedirects) == 0x000100, "Member 'UNiagaraSettings::PlatformSetRedirects' has a wrong offset!");

class UNiagaraSimCache final : public UObject
{
public:
	TSoftObjectPtr<class UNiagaraSystem>          SoftNiagaraSystem;
	float                                         StartSeconds;
	float                                         DurationSeconds;
	struct FNiagaraSimCacheCreateParameters       CreateParameters;
	bool                                          bNeedsReadComponentMappingRecache;
	uint8                                         Pad_91[0x7];
	struct FNiagaraSimCacheLayout                 CacheLayout;
	TArray<struct FNiagaraSimCacheFrame>          CacheFrames;
	TMap<struct FNiagaraVariableBase, class UObject*> DataInterfaceStorage;
	uint8                                         Pad_168[0x8];

public:
	ENiagaraSimCacheAttributeCaptureMode GetAttributeCaptureMode() const;
	class FName GetEmitterName(int32 EmitterIndex) const;
	TArray<class FName> GetEmitterNames() const;
	int32 GetNumEmitters() const;
	int32 GetNumFrames() const;
	float GetStartSeconds() const;
	bool IsCacheValid() const;
	bool IsEmpty() const;
	void ReadColorAttribute(TArray<struct FLinearColor>* OutValues, class FName AttributeName, class FName EmitterName, int32 FrameIndex) const;
	void ReadFloatAttribute(TArray<float>* OutValues, class FName AttributeName, class FName EmitterName, int32 FrameIndex) const;
	void ReadIntAttribute(TArray<int32>* OutValues, class FName AttributeName, class FName EmitterName, int32 FrameIndex) const;
	void ReadPositionAttribute(TArray<struct FVector>* OutValues, class FName AttributeName, class FName EmitterName, bool bLocalSpaceToWorld, int32 FrameIndex) const;
	void ReadPositionAttributeWithRebase(TArray<struct FVector>* OutValues, const struct FTransform& Transform, class FName AttributeName, class FName EmitterName, int32 FrameIndex) const;
	void ReadQuatAttribute(TArray<struct FQuat>* OutValues, class FName AttributeName, class FName EmitterName, bool bLocalSpaceToWorld, int32 FrameIndex) const;
	void ReadQuatAttributeWithRebase(TArray<struct FQuat>* OutValues, const struct FQuat& Quat, class FName AttributeName, class FName EmitterName, int32 FrameIndex) const;
	void ReadVector2Attribute(TArray<struct FVector2D>* OutValues, class FName AttributeName, class FName EmitterName, int32 FrameIndex) const;
	void ReadVector4Attribute(TArray<struct FVector4>* OutValues, class FName AttributeName, class FName EmitterName, int32 FrameIndex) const;
	void ReadVectorAttribute(TArray<struct FVector>* OutValues, class FName AttributeName, class FName EmitterName, int32 FrameIndex) const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"NiagaraSimCache">();
	}
	static class UNiagaraSimCache* GetDefaultObj()
	{
		return GetDefaultObjImpl<UNiagaraSimCache>();
	}
};
static_assert(alignof(UNiagaraSimCache) == 0x000008, "Wrong alignment on UNiagaraSimCache");
static_assert(sizeof(UNiagaraSimCache) == 0x000170, "Wrong size on UNiagaraSimCache");
static_assert(offsetof(UNiagaraSimCache, SoftNiagaraSystem) == 0x000028, "Member 'UNiagaraSimCache::SoftNiagaraSystem' has a wrong offset!");
static_assert(offsetof(UNiagaraSimCache, StartSeconds) == 0x000050, "Member 'UNiagaraSimCache::StartSeconds' has a wrong offset!");
static_assert(offsetof(UNiagaraSimCache, DurationSeconds) == 0x000054, "Member 'UNiagaraSimCache::DurationSeconds' has a wrong offset!");
static_assert(offsetof(UNiagaraSimCache, CreateParameters) == 0x000058, "Member 'UNiagaraSimCache::CreateParameters' has a wrong offset!");
static_assert(offsetof(UNiagaraSimCache, bNeedsReadComponentMappingRecache) == 0x000090, "Member 'UNiagaraSimCache::bNeedsReadComponentMappingRecache' has a wrong offset!");
static_assert(offsetof(UNiagaraSimCache, CacheLayout) == 0x000098, "Member 'UNiagaraSimCache::CacheLayout' has a wrong offset!");
static_assert(offsetof(UNiagaraSimCache, CacheFrames) == 0x000108, "Member 'UNiagaraSimCache::CacheFrames' has a wrong offset!");
static_assert(offsetof(UNiagaraSimCache, DataInterfaceStorage) == 0x000118, "Member 'UNiagaraSimCache::DataInterfaceStorage' has a wrong offset!");

class UAsyncNiagaraCaptureSimCache final : public UBlueprintAsyncActionBase
{
public:
	class UNiagaraSimCache*                       CaptureSimCache;
	class UNiagaraComponent*                      CaptureComponent;
	int32                                         CaptureNumFrames;
	int32                                         CaptureFrameRate;
	int32                                         CaptureFrameCounter;
	int32                                         TimeOutCounter;
	TMulticastInlineDelegate<void(bool bSuccess)> CaptureComplete;
	uint8                                         Pad_60[0x10];
	bool                                          bAdvanceSimulation;
	uint8                                         Pad_71[0x3];
	float                                         AdvanceDeltaTime;

public:
	static class UAsyncNiagaraCaptureSimCache* CaptureNiagaraSimCacheMultiFrame(class UNiagaraSimCache* SimCache, const struct FNiagaraSimCacheCreateParameters& CreateParameters, class UNiagaraComponent* NiagaraComponent, class UNiagaraSimCache** OutSimCache, int32 NumFrames, int32 CaptureRate, bool bAdvanceSimulation_0, float AdvanceDeltaTime_0);
	static class UAsyncNiagaraCaptureSimCache* CaptureNiagaraSimCacheUntilComplete(class UNiagaraSimCache* SimCache, const struct FNiagaraSimCacheCreateParameters& CreateParameters, class UNiagaraComponent* NiagaraComponent, class UNiagaraSimCache** OutSimCache, int32 CaptureRate, bool bAdvanceSimulation_0, float AdvanceDeltaTime_0);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"AsyncNiagaraCaptureSimCache">();
	}
	static class UAsyncNiagaraCaptureSimCache* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAsyncNiagaraCaptureSimCache>();
	}
};
static_assert(alignof(UAsyncNiagaraCaptureSimCache) == 0x000008, "Wrong alignment on UAsyncNiagaraCaptureSimCache");
static_assert(sizeof(UAsyncNiagaraCaptureSimCache) == 0x000078, "Wrong size on UAsyncNiagaraCaptureSimCache");
static_assert(offsetof(UAsyncNiagaraCaptureSimCache, CaptureSimCache) == 0x000030, "Member 'UAsyncNiagaraCaptureSimCache::CaptureSimCache' has a wrong offset!");
static_assert(offsetof(UAsyncNiagaraCaptureSimCache, CaptureComponent) == 0x000038, "Member 'UAsyncNiagaraCaptureSimCache::CaptureComponent' has a wrong offset!");
static_assert(offsetof(UAsyncNiagaraCaptureSimCache, CaptureNumFrames) == 0x000040, "Member 'UAsyncNiagaraCaptureSimCache::CaptureNumFrames' has a wrong offset!");
static_assert(offsetof(UAsyncNiagaraCaptureSimCache, CaptureFrameRate) == 0x000044, "Member 'UAsyncNiagaraCaptureSimCache::CaptureFrameRate' has a wrong offset!");
static_assert(offsetof(UAsyncNiagaraCaptureSimCache, CaptureFrameCounter) == 0x000048, "Member 'UAsyncNiagaraCaptureSimCache::CaptureFrameCounter' has a wrong offset!");
static_assert(offsetof(UAsyncNiagaraCaptureSimCache, TimeOutCounter) == 0x00004C, "Member 'UAsyncNiagaraCaptureSimCache::TimeOutCounter' has a wrong offset!");
static_assert(offsetof(UAsyncNiagaraCaptureSimCache, CaptureComplete) == 0x000050, "Member 'UAsyncNiagaraCaptureSimCache::CaptureComplete' has a wrong offset!");
static_assert(offsetof(UAsyncNiagaraCaptureSimCache, bAdvanceSimulation) == 0x000070, "Member 'UAsyncNiagaraCaptureSimCache::bAdvanceSimulation' has a wrong offset!");
static_assert(offsetof(UAsyncNiagaraCaptureSimCache, AdvanceDeltaTime) == 0x000074, "Member 'UAsyncNiagaraCaptureSimCache::AdvanceDeltaTime' has a wrong offset!");

class UNiagaraSimCacheFunctionLibrary final : public UBlueprintFunctionLibrary
{
public:
	static bool CaptureNiagaraSimCacheImmediate(class UNiagaraSimCache* SimCache, const struct FNiagaraSimCacheCreateParameters& CreateParameters, class UNiagaraComponent* NiagaraComponent, class UNiagaraSimCache** OutSimCache, bool bAdvanceSimulation, float AdvanceDeltaTime);
	static class UNiagaraSimCache* CreateNiagaraSimCache(class UObject* WorldContextObject);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"NiagaraSimCacheFunctionLibrary">();
	}
	static class UNiagaraSimCacheFunctionLibrary* GetDefaultObj()
	{
		return GetDefaultObjImpl<UNiagaraSimCacheFunctionLibrary>();
	}
};
static_assert(alignof(UNiagaraSimCacheFunctionLibrary) == 0x000008, "Wrong alignment on UNiagaraSimCacheFunctionLibrary");
static_assert(sizeof(UNiagaraSimCacheFunctionLibrary) == 0x000028, "Wrong size on UNiagaraSimCacheFunctionLibrary");

class UNiagaraSimulationStageBase : public UNiagaraMergeable
{
public:
	class UNiagaraScript*                         Script;
	class FName                                   SimulationStageName;
	uint8                                         bEnabled : 1;
	uint8                                         Pad_35[0x3];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"NiagaraSimulationStageBase">();
	}
	static class UNiagaraSimulationStageBase* GetDefaultObj()
	{
		return GetDefaultObjImpl<UNiagaraSimulationStageBase>();
	}
};
static_assert(alignof(UNiagaraSimulationStageBase) == 0x000008, "Wrong alignment on UNiagaraSimulationStageBase");
static_assert(sizeof(UNiagaraSimulationStageBase) == 0x000038, "Wrong size on UNiagaraSimulationStageBase");
static_assert(offsetof(UNiagaraSimulationStageBase, Script) == 0x000028, "Member 'UNiagaraSimulationStageBase::Script' has a wrong offset!");
static_assert(offsetof(UNiagaraSimulationStageBase, SimulationStageName) == 0x000030, "Member 'UNiagaraSimulationStageBase::SimulationStageName' has a wrong offset!");

class UNiagaraSimulationStageGeneric final : public UNiagaraSimulationStageBase
{
public:
	struct FNiagaraVariableAttributeBinding       EnabledBinding;
	struct FNiagaraVariableAttributeBinding       ElementCountBinding;
	struct FNiagaraVariableAttributeBinding       ElementCountXBinding;
	struct FNiagaraVariableAttributeBinding       ElementCountYBinding;
	struct FNiagaraVariableAttributeBinding       ElementCountZBinding;
	ENiagaraIterationSource                       IterationSource;
	uint8                                         Pad_179[0x3];
	int32                                         Iterations;
	struct FNiagaraVariableAttributeBinding       NumIterationsBinding;
	uint8                                         bSpawnOnly : 1;
	uint8                                         Pad_1C1[0x3];
	ENiagaraSimStageExecuteBehavior               ExecuteBehavior;
	uint8                                         Pad_1C5[0x3];
	uint8                                         bDisablePartialParticleUpdate : 1;
	uint8                                         Pad_1C9[0x7];
	struct FNiagaraVariableDataInterfaceBinding   DataInterface;
	uint8                                         bParticleIterationStateEnabled : 1;
	uint8                                         Pad_1E9[0x7];
	struct FNiagaraVariableAttributeBinding       ParticleIterationStateBinding;
	struct FIntPoint                              ParticleIterationStateRange;
	uint8                                         bGpuDispatchForceLinear : 1;
	uint8                                         bOverrideGpuDispatchType : 1;
	uint8                                         Pad_239[0x3];
	ENiagaraGpuDispatchType                       OverrideGpuDispatchType;
	uint8                                         Pad_23D[0x3];
	uint8                                         bOverrideGpuDispatchNumThreads : 1;
	uint8                                         Pad_241[0x3];
	struct FIntVector                             OverrideGpuDispatchNumThreads;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"NiagaraSimulationStageGeneric">();
	}
	static class UNiagaraSimulationStageGeneric* GetDefaultObj()
	{
		return GetDefaultObjImpl<UNiagaraSimulationStageGeneric>();
	}
};
static_assert(alignof(UNiagaraSimulationStageGeneric) == 0x000008, "Wrong alignment on UNiagaraSimulationStageGeneric");
static_assert(sizeof(UNiagaraSimulationStageGeneric) == 0x000250, "Wrong size on UNiagaraSimulationStageGeneric");
static_assert(offsetof(UNiagaraSimulationStageGeneric, EnabledBinding) == 0x000038, "Member 'UNiagaraSimulationStageGeneric::EnabledBinding' has a wrong offset!");
static_assert(offsetof(UNiagaraSimulationStageGeneric, ElementCountBinding) == 0x000078, "Member 'UNiagaraSimulationStageGeneric::ElementCountBinding' has a wrong offset!");
static_assert(offsetof(UNiagaraSimulationStageGeneric, ElementCountXBinding) == 0x0000B8, "Member 'UNiagaraSimulationStageGeneric::ElementCountXBinding' has a wrong offset!");
static_assert(offsetof(UNiagaraSimulationStageGeneric, ElementCountYBinding) == 0x0000F8, "Member 'UNiagaraSimulationStageGeneric::ElementCountYBinding' has a wrong offset!");
static_assert(offsetof(UNiagaraSimulationStageGeneric, ElementCountZBinding) == 0x000138, "Member 'UNiagaraSimulationStageGeneric::ElementCountZBinding' has a wrong offset!");
static_assert(offsetof(UNiagaraSimulationStageGeneric, IterationSource) == 0x000178, "Member 'UNiagaraSimulationStageGeneric::IterationSource' has a wrong offset!");
static_assert(offsetof(UNiagaraSimulationStageGeneric, Iterations) == 0x00017C, "Member 'UNiagaraSimulationStageGeneric::Iterations' has a wrong offset!");
static_assert(offsetof(UNiagaraSimulationStageGeneric, NumIterationsBinding) == 0x000180, "Member 'UNiagaraSimulationStageGeneric::NumIterationsBinding' has a wrong offset!");
static_assert(offsetof(UNiagaraSimulationStageGeneric, ExecuteBehavior) == 0x0001C4, "Member 'UNiagaraSimulationStageGeneric::ExecuteBehavior' has a wrong offset!");
static_assert(offsetof(UNiagaraSimulationStageGeneric, DataInterface) == 0x0001D0, "Member 'UNiagaraSimulationStageGeneric::DataInterface' has a wrong offset!");
static_assert(offsetof(UNiagaraSimulationStageGeneric, ParticleIterationStateBinding) == 0x0001F0, "Member 'UNiagaraSimulationStageGeneric::ParticleIterationStateBinding' has a wrong offset!");
static_assert(offsetof(UNiagaraSimulationStageGeneric, ParticleIterationStateRange) == 0x000230, "Member 'UNiagaraSimulationStageGeneric::ParticleIterationStateRange' has a wrong offset!");
static_assert(offsetof(UNiagaraSimulationStageGeneric, OverrideGpuDispatchType) == 0x00023C, "Member 'UNiagaraSimulationStageGeneric::OverrideGpuDispatchType' has a wrong offset!");
static_assert(offsetof(UNiagaraSimulationStageGeneric, OverrideGpuDispatchNumThreads) == 0x000244, "Member 'UNiagaraSimulationStageGeneric::OverrideGpuDispatchNumThreads' has a wrong offset!");

class UNiagaraSpriteRendererProperties final : public UNiagaraRendererProperties
{
public:
	class UMaterialInterface*                     Material;
	ENiagaraRendererSourceDataMode                SourceMode;
	uint8                                         Pad_D1[0x7];
	struct FNiagaraUserParameterBinding           MaterialUserParamBinding;
	ENiagaraSpriteAlignment                       Alignment;
	ENiagaraSpriteFacingMode                      FacingMode;
	uint8                                         Pad_F2[0x6];
	struct FVector2D                              PivotInUVSpace;
	float                                         MacroUVRadius;
	ENiagaraSortMode                              SortMode;
	uint8                                         Pad_10D[0x3];
	struct FVector2D                              SubImageSize;
	uint8                                         bSubImageBlend : 1;
	uint8                                         bRemoveHMDRollInVR : 1;
	uint8                                         bSortOnlyWhenTranslucent : 1;
	uint8                                         Pad_121[0x3];
	ENiagaraRendererSortPrecision                 SortPrecision;
	ENiagaraRendererGpuTranslucentLatency         GpuTranslucentLatency;
	ENiagaraRendererPixelCoverageMode             PixelCoverageMode;
	uint8                                         Pad_127[0x1];
	float                                         PixelCoverageBlend;
	float                                         MinFacingCameraBlendDistance;
	float                                         MaxFacingCameraBlendDistance;
	uint8                                         bEnableCameraDistanceCulling : 1;
	uint8                                         Pad_135[0x3];
	float                                         MinCameraDistance;
	float                                         MaxCameraDistance;
	uint32                                        RendererVisibility;
	uint8                                         Pad_144[0x4];
	struct FNiagaraVariableAttributeBinding       PositionBinding;
	struct FNiagaraVariableAttributeBinding       ColorBinding;
	struct FNiagaraVariableAttributeBinding       VelocityBinding;
	struct FNiagaraVariableAttributeBinding       SpriteRotationBinding;
	struct FNiagaraVariableAttributeBinding       SpriteSizeBinding;
	struct FNiagaraVariableAttributeBinding       SpriteFacingBinding;
	struct FNiagaraVariableAttributeBinding       SpriteAlignmentBinding;
	struct FNiagaraVariableAttributeBinding       SubImageIndexBinding;
	struct FNiagaraVariableAttributeBinding       DynamicMaterialBinding;
	struct FNiagaraVariableAttributeBinding       DynamicMaterial1Binding;
	struct FNiagaraVariableAttributeBinding       DynamicMaterial2Binding;
	struct FNiagaraVariableAttributeBinding       DynamicMaterial3Binding;
	struct FNiagaraVariableAttributeBinding       CameraOffsetBinding;
	struct FNiagaraVariableAttributeBinding       UVScaleBinding;
	struct FNiagaraVariableAttributeBinding       PivotOffsetBinding;
	struct FNiagaraVariableAttributeBinding       MaterialRandomBinding;
	struct FNiagaraVariableAttributeBinding       CustomSortingBinding;
	struct FNiagaraVariableAttributeBinding       NormalizedAgeBinding;
	struct FNiagaraVariableAttributeBinding       RendererVisibilityTagBinding;
	struct FNiagaraRendererMaterialParameters     MaterialParameters;
	struct FNiagaraVariableAttributeBinding       PrevPositionBinding;
	struct FNiagaraVariableAttributeBinding       PrevVelocityBinding;
	struct FNiagaraVariableAttributeBinding       PrevSpriteRotationBinding;
	struct FNiagaraVariableAttributeBinding       PrevSpriteSizeBinding;
	struct FNiagaraVariableAttributeBinding       PrevSpriteFacingBinding;
	struct FNiagaraVariableAttributeBinding       PrevSpriteAlignmentBinding;
	struct FNiagaraVariableAttributeBinding       PrevCameraOffsetBinding;
	struct FNiagaraVariableAttributeBinding       PrevPivotOffsetBinding;
	uint8                                         Pad_848[0x78];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"NiagaraSpriteRendererProperties">();
	}
	static class UNiagaraSpriteRendererProperties* GetDefaultObj()
	{
		return GetDefaultObjImpl<UNiagaraSpriteRendererProperties>();
	}
};
static_assert(alignof(UNiagaraSpriteRendererProperties) == 0x000008, "Wrong alignment on UNiagaraSpriteRendererProperties");
static_assert(sizeof(UNiagaraSpriteRendererProperties) == 0x0008C0, "Wrong size on UNiagaraSpriteRendererProperties");
static_assert(offsetof(UNiagaraSpriteRendererProperties, Material) == 0x0000C8, "Member 'UNiagaraSpriteRendererProperties::Material' has a wrong offset!");
static_assert(offsetof(UNiagaraSpriteRendererProperties, SourceMode) == 0x0000D0, "Member 'UNiagaraSpriteRendererProperties::SourceMode' has a wrong offset!");
static_assert(offsetof(UNiagaraSpriteRendererProperties, MaterialUserParamBinding) == 0x0000D8, "Member 'UNiagaraSpriteRendererProperties::MaterialUserParamBinding' has a wrong offset!");
static_assert(offsetof(UNiagaraSpriteRendererProperties, Alignment) == 0x0000F0, "Member 'UNiagaraSpriteRendererProperties::Alignment' has a wrong offset!");
static_assert(offsetof(UNiagaraSpriteRendererProperties, FacingMode) == 0x0000F1, "Member 'UNiagaraSpriteRendererProperties::FacingMode' has a wrong offset!");
static_assert(offsetof(UNiagaraSpriteRendererProperties, PivotInUVSpace) == 0x0000F8, "Member 'UNiagaraSpriteRendererProperties::PivotInUVSpace' has a wrong offset!");
static_assert(offsetof(UNiagaraSpriteRendererProperties, MacroUVRadius) == 0x000108, "Member 'UNiagaraSpriteRendererProperties::MacroUVRadius' has a wrong offset!");
static_assert(offsetof(UNiagaraSpriteRendererProperties, SortMode) == 0x00010C, "Member 'UNiagaraSpriteRendererProperties::SortMode' has a wrong offset!");
static_assert(offsetof(UNiagaraSpriteRendererProperties, SubImageSize) == 0x000110, "Member 'UNiagaraSpriteRendererProperties::SubImageSize' has a wrong offset!");
static_assert(offsetof(UNiagaraSpriteRendererProperties, SortPrecision) == 0x000124, "Member 'UNiagaraSpriteRendererProperties::SortPrecision' has a wrong offset!");
static_assert(offsetof(UNiagaraSpriteRendererProperties, GpuTranslucentLatency) == 0x000125, "Member 'UNiagaraSpriteRendererProperties::GpuTranslucentLatency' has a wrong offset!");
static_assert(offsetof(UNiagaraSpriteRendererProperties, PixelCoverageMode) == 0x000126, "Member 'UNiagaraSpriteRendererProperties::PixelCoverageMode' has a wrong offset!");
static_assert(offsetof(UNiagaraSpriteRendererProperties, PixelCoverageBlend) == 0x000128, "Member 'UNiagaraSpriteRendererProperties::PixelCoverageBlend' has a wrong offset!");
static_assert(offsetof(UNiagaraSpriteRendererProperties, MinFacingCameraBlendDistance) == 0x00012C, "Member 'UNiagaraSpriteRendererProperties::MinFacingCameraBlendDistance' has a wrong offset!");
static_assert(offsetof(UNiagaraSpriteRendererProperties, MaxFacingCameraBlendDistance) == 0x000130, "Member 'UNiagaraSpriteRendererProperties::MaxFacingCameraBlendDistance' has a wrong offset!");
static_assert(offsetof(UNiagaraSpriteRendererProperties, MinCameraDistance) == 0x000138, "Member 'UNiagaraSpriteRendererProperties::MinCameraDistance' has a wrong offset!");
static_assert(offsetof(UNiagaraSpriteRendererProperties, MaxCameraDistance) == 0x00013C, "Member 'UNiagaraSpriteRendererProperties::MaxCameraDistance' has a wrong offset!");
static_assert(offsetof(UNiagaraSpriteRendererProperties, RendererVisibility) == 0x000140, "Member 'UNiagaraSpriteRendererProperties::RendererVisibility' has a wrong offset!");
static_assert(offsetof(UNiagaraSpriteRendererProperties, PositionBinding) == 0x000148, "Member 'UNiagaraSpriteRendererProperties::PositionBinding' has a wrong offset!");
static_assert(offsetof(UNiagaraSpriteRendererProperties, ColorBinding) == 0x000188, "Member 'UNiagaraSpriteRendererProperties::ColorBinding' has a wrong offset!");
static_assert(offsetof(UNiagaraSpriteRendererProperties, VelocityBinding) == 0x0001C8, "Member 'UNiagaraSpriteRendererProperties::VelocityBinding' has a wrong offset!");
static_assert(offsetof(UNiagaraSpriteRendererProperties, SpriteRotationBinding) == 0x000208, "Member 'UNiagaraSpriteRendererProperties::SpriteRotationBinding' has a wrong offset!");
static_assert(offsetof(UNiagaraSpriteRendererProperties, SpriteSizeBinding) == 0x000248, "Member 'UNiagaraSpriteRendererProperties::SpriteSizeBinding' has a wrong offset!");
static_assert(offsetof(UNiagaraSpriteRendererProperties, SpriteFacingBinding) == 0x000288, "Member 'UNiagaraSpriteRendererProperties::SpriteFacingBinding' has a wrong offset!");
static_assert(offsetof(UNiagaraSpriteRendererProperties, SpriteAlignmentBinding) == 0x0002C8, "Member 'UNiagaraSpriteRendererProperties::SpriteAlignmentBinding' has a wrong offset!");
static_assert(offsetof(UNiagaraSpriteRendererProperties, SubImageIndexBinding) == 0x000308, "Member 'UNiagaraSpriteRendererProperties::SubImageIndexBinding' has a wrong offset!");
static_assert(offsetof(UNiagaraSpriteRendererProperties, DynamicMaterialBinding) == 0x000348, "Member 'UNiagaraSpriteRendererProperties::DynamicMaterialBinding' has a wrong offset!");
static_assert(offsetof(UNiagaraSpriteRendererProperties, DynamicMaterial1Binding) == 0x000388, "Member 'UNiagaraSpriteRendererProperties::DynamicMaterial1Binding' has a wrong offset!");
static_assert(offsetof(UNiagaraSpriteRendererProperties, DynamicMaterial2Binding) == 0x0003C8, "Member 'UNiagaraSpriteRendererProperties::DynamicMaterial2Binding' has a wrong offset!");
static_assert(offsetof(UNiagaraSpriteRendererProperties, DynamicMaterial3Binding) == 0x000408, "Member 'UNiagaraSpriteRendererProperties::DynamicMaterial3Binding' has a wrong offset!");
static_assert(offsetof(UNiagaraSpriteRendererProperties, CameraOffsetBinding) == 0x000448, "Member 'UNiagaraSpriteRendererProperties::CameraOffsetBinding' has a wrong offset!");
static_assert(offsetof(UNiagaraSpriteRendererProperties, UVScaleBinding) == 0x000488, "Member 'UNiagaraSpriteRendererProperties::UVScaleBinding' has a wrong offset!");
static_assert(offsetof(UNiagaraSpriteRendererProperties, PivotOffsetBinding) == 0x0004C8, "Member 'UNiagaraSpriteRendererProperties::PivotOffsetBinding' has a wrong offset!");
static_assert(offsetof(UNiagaraSpriteRendererProperties, MaterialRandomBinding) == 0x000508, "Member 'UNiagaraSpriteRendererProperties::MaterialRandomBinding' has a wrong offset!");
static_assert(offsetof(UNiagaraSpriteRendererProperties, CustomSortingBinding) == 0x000548, "Member 'UNiagaraSpriteRendererProperties::CustomSortingBinding' has a wrong offset!");
static_assert(offsetof(UNiagaraSpriteRendererProperties, NormalizedAgeBinding) == 0x000588, "Member 'UNiagaraSpriteRendererProperties::NormalizedAgeBinding' has a wrong offset!");
static_assert(offsetof(UNiagaraSpriteRendererProperties, RendererVisibilityTagBinding) == 0x0005C8, "Member 'UNiagaraSpriteRendererProperties::RendererVisibilityTagBinding' has a wrong offset!");
static_assert(offsetof(UNiagaraSpriteRendererProperties, MaterialParameters) == 0x000608, "Member 'UNiagaraSpriteRendererProperties::MaterialParameters' has a wrong offset!");
static_assert(offsetof(UNiagaraSpriteRendererProperties, PrevPositionBinding) == 0x000648, "Member 'UNiagaraSpriteRendererProperties::PrevPositionBinding' has a wrong offset!");
static_assert(offsetof(UNiagaraSpriteRendererProperties, PrevVelocityBinding) == 0x000688, "Member 'UNiagaraSpriteRendererProperties::PrevVelocityBinding' has a wrong offset!");
static_assert(offsetof(UNiagaraSpriteRendererProperties, PrevSpriteRotationBinding) == 0x0006C8, "Member 'UNiagaraSpriteRendererProperties::PrevSpriteRotationBinding' has a wrong offset!");
static_assert(offsetof(UNiagaraSpriteRendererProperties, PrevSpriteSizeBinding) == 0x000708, "Member 'UNiagaraSpriteRendererProperties::PrevSpriteSizeBinding' has a wrong offset!");
static_assert(offsetof(UNiagaraSpriteRendererProperties, PrevSpriteFacingBinding) == 0x000748, "Member 'UNiagaraSpriteRendererProperties::PrevSpriteFacingBinding' has a wrong offset!");
static_assert(offsetof(UNiagaraSpriteRendererProperties, PrevSpriteAlignmentBinding) == 0x000788, "Member 'UNiagaraSpriteRendererProperties::PrevSpriteAlignmentBinding' has a wrong offset!");
static_assert(offsetof(UNiagaraSpriteRendererProperties, PrevCameraOffsetBinding) == 0x0007C8, "Member 'UNiagaraSpriteRendererProperties::PrevCameraOffsetBinding' has a wrong offset!");
static_assert(offsetof(UNiagaraSpriteRendererProperties, PrevPivotOffsetBinding) == 0x000808, "Member 'UNiagaraSpriteRendererProperties::PrevPivotOffsetBinding' has a wrong offset!");

class UNiagaraSystem final : public UFXSystemAsset
{
public:
	uint8                                         bSupportLargeWorldCoordinates : 1;
	uint8                                         bOverrideCastShadow : 1;
	uint8                                         bOverrideReceivesDecals : 1;
	uint8                                         bOverrideRenderCustomDepth : 1;
	uint8                                         bOverrideCustomDepthStencilValue : 1;
	uint8                                         bOverrideCustomDepthStencilWriteMask : 1;
	uint8                                         bOverrideTranslucencySortPriority : 1;
	uint8                                         bOverrideTranslucencySortDistanceOffset : 1;
	uint8                                         bCastShadow : 1;
	uint8                                         bReceivesDecals : 1;
	uint8                                         bRenderCustomDepth : 1;
	uint8                                         bDisableExperimentalVM : 1;
	ERendererStencilMask                          CustomDepthStencilWriteMask;
	uint8                                         Pad_73[0x1];
	int32                                         CustomDepthStencilValue;
	int32                                         TranslucencySortPriority;
	float                                         TranslucencySortDistanceOffset;
	bool                                          bDumpDebugSystemInfo;
	bool                                          bDumpDebugEmitterInfo;
	uint8                                         Pad_82[0x1];
	bool                                          bRequireCurrentFrameData;
	uint8                                         bFixedBounds : 1;
	uint8                                         Pad_85[0x3];
	class UNiagaraEffectType*                     EffectType;
	bool                                          bOverrideScalabilitySettings;
	uint8                                         Pad_91[0x3];
	uint8                                         bOverrideAllowCullingForLocalPlayers : 1;
	uint8                                         bAllowCullingForLocalPlayersOverride : 1;
	uint8                                         Pad_95[0x3];
	TArray<struct FNiagaraSystemScalabilityOverride> ScalabilityOverrides;
	struct FNiagaraSystemScalabilityOverrides     SystemScalabilityOverrides;
	TArray<struct FNiagaraEmitterHandle>          EmitterHandles;
	TArray<class UNiagaraParameterCollectionInstance*> ParameterCollectionOverrides;
	class UNiagaraScript*                         SystemSpawnScript;
	class UNiagaraScript*                         SystemUpdateScript;
	uint8                                         Pad_E8[0x10];
	struct FNiagaraSystemCompiledData             SystemCompiledData;
	struct FNiagaraUserRedirectionParameterStore  ExposedParameters;
	struct FBox                                   FixedBounds;
	bool                                          bAutoDeactivate;
	bool                                          bDeterminism;
	uint8                                         Pad_432[0x2];
	int32                                         RandomSeed;
	float                                         WarmupTime;
	int32                                         WarmupTickCount;
	float                                         WarmupTickDelta;
	bool                                          bFixedTickDelta;
	uint8                                         Pad_445[0x3];
	float                                         FixedTickDeltaTime;
	bool                                          bHasSystemScriptDIsWithPerInstanceData;
	bool                                          bNeedsGPUContextInitForDataInterfaces;
	uint8                                         Pad_44E[0x2];
	TArray<class FName>                           UserDINamesReadInSystemScripts;
	TArray<class UNiagaraDataChannelDefinitions*> ReferencedDataChannelDefinitions;
	uint8                                         Pad_470[0xB0];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"NiagaraSystem">();
	}
	static class UNiagaraSystem* GetDefaultObj()
	{
		return GetDefaultObjImpl<UNiagaraSystem>();
	}
};
static_assert(alignof(UNiagaraSystem) == 0x000008, "Wrong alignment on UNiagaraSystem");
static_assert(sizeof(UNiagaraSystem) == 0x000520, "Wrong size on UNiagaraSystem");
static_assert(offsetof(UNiagaraSystem, CustomDepthStencilWriteMask) == 0x000072, "Member 'UNiagaraSystem::CustomDepthStencilWriteMask' has a wrong offset!");
static_assert(offsetof(UNiagaraSystem, CustomDepthStencilValue) == 0x000074, "Member 'UNiagaraSystem::CustomDepthStencilValue' has a wrong offset!");
static_assert(offsetof(UNiagaraSystem, TranslucencySortPriority) == 0x000078, "Member 'UNiagaraSystem::TranslucencySortPriority' has a wrong offset!");
static_assert(offsetof(UNiagaraSystem, TranslucencySortDistanceOffset) == 0x00007C, "Member 'UNiagaraSystem::TranslucencySortDistanceOffset' has a wrong offset!");
static_assert(offsetof(UNiagaraSystem, bDumpDebugSystemInfo) == 0x000080, "Member 'UNiagaraSystem::bDumpDebugSystemInfo' has a wrong offset!");
static_assert(offsetof(UNiagaraSystem, bDumpDebugEmitterInfo) == 0x000081, "Member 'UNiagaraSystem::bDumpDebugEmitterInfo' has a wrong offset!");
static_assert(offsetof(UNiagaraSystem, bRequireCurrentFrameData) == 0x000083, "Member 'UNiagaraSystem::bRequireCurrentFrameData' has a wrong offset!");
static_assert(offsetof(UNiagaraSystem, EffectType) == 0x000088, "Member 'UNiagaraSystem::EffectType' has a wrong offset!");
static_assert(offsetof(UNiagaraSystem, bOverrideScalabilitySettings) == 0x000090, "Member 'UNiagaraSystem::bOverrideScalabilitySettings' has a wrong offset!");
static_assert(offsetof(UNiagaraSystem, ScalabilityOverrides) == 0x000098, "Member 'UNiagaraSystem::ScalabilityOverrides' has a wrong offset!");
static_assert(offsetof(UNiagaraSystem, SystemScalabilityOverrides) == 0x0000A8, "Member 'UNiagaraSystem::SystemScalabilityOverrides' has a wrong offset!");
static_assert(offsetof(UNiagaraSystem, EmitterHandles) == 0x0000B8, "Member 'UNiagaraSystem::EmitterHandles' has a wrong offset!");
static_assert(offsetof(UNiagaraSystem, ParameterCollectionOverrides) == 0x0000C8, "Member 'UNiagaraSystem::ParameterCollectionOverrides' has a wrong offset!");
static_assert(offsetof(UNiagaraSystem, SystemSpawnScript) == 0x0000D8, "Member 'UNiagaraSystem::SystemSpawnScript' has a wrong offset!");
static_assert(offsetof(UNiagaraSystem, SystemUpdateScript) == 0x0000E0, "Member 'UNiagaraSystem::SystemUpdateScript' has a wrong offset!");
static_assert(offsetof(UNiagaraSystem, SystemCompiledData) == 0x0000F8, "Member 'UNiagaraSystem::SystemCompiledData' has a wrong offset!");
static_assert(offsetof(UNiagaraSystem, ExposedParameters) == 0x000320, "Member 'UNiagaraSystem::ExposedParameters' has a wrong offset!");
static_assert(offsetof(UNiagaraSystem, FixedBounds) == 0x0003F8, "Member 'UNiagaraSystem::FixedBounds' has a wrong offset!");
static_assert(offsetof(UNiagaraSystem, bAutoDeactivate) == 0x000430, "Member 'UNiagaraSystem::bAutoDeactivate' has a wrong offset!");
static_assert(offsetof(UNiagaraSystem, bDeterminism) == 0x000431, "Member 'UNiagaraSystem::bDeterminism' has a wrong offset!");
static_assert(offsetof(UNiagaraSystem, RandomSeed) == 0x000434, "Member 'UNiagaraSystem::RandomSeed' has a wrong offset!");
static_assert(offsetof(UNiagaraSystem, WarmupTime) == 0x000438, "Member 'UNiagaraSystem::WarmupTime' has a wrong offset!");
static_assert(offsetof(UNiagaraSystem, WarmupTickCount) == 0x00043C, "Member 'UNiagaraSystem::WarmupTickCount' has a wrong offset!");
static_assert(offsetof(UNiagaraSystem, WarmupTickDelta) == 0x000440, "Member 'UNiagaraSystem::WarmupTickDelta' has a wrong offset!");
static_assert(offsetof(UNiagaraSystem, bFixedTickDelta) == 0x000444, "Member 'UNiagaraSystem::bFixedTickDelta' has a wrong offset!");
static_assert(offsetof(UNiagaraSystem, FixedTickDeltaTime) == 0x000448, "Member 'UNiagaraSystem::FixedTickDeltaTime' has a wrong offset!");
static_assert(offsetof(UNiagaraSystem, bHasSystemScriptDIsWithPerInstanceData) == 0x00044C, "Member 'UNiagaraSystem::bHasSystemScriptDIsWithPerInstanceData' has a wrong offset!");
static_assert(offsetof(UNiagaraSystem, bNeedsGPUContextInitForDataInterfaces) == 0x00044D, "Member 'UNiagaraSystem::bNeedsGPUContextInitForDataInterfaces' has a wrong offset!");
static_assert(offsetof(UNiagaraSystem, UserDINamesReadInSystemScripts) == 0x000450, "Member 'UNiagaraSystem::UserDINamesReadInSystemScripts' has a wrong offset!");
static_assert(offsetof(UNiagaraSystem, ReferencedDataChannelDefinitions) == 0x000460, "Member 'UNiagaraSystem::ReferencedDataChannelDefinitions' has a wrong offset!");

class UNiagaraValidationRule final : public UObject
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"NiagaraValidationRule">();
	}
	static class UNiagaraValidationRule* GetDefaultObj()
	{
		return GetDefaultObjImpl<UNiagaraValidationRule>();
	}
};
static_assert(alignof(UNiagaraValidationRule) == 0x000008, "Wrong alignment on UNiagaraValidationRule");
static_assert(sizeof(UNiagaraValidationRule) == 0x000028, "Wrong size on UNiagaraValidationRule");

class UVolumeCache final : public UObject
{
public:
	class FString                                 FilePath;
	EVolumeCacheType                              CacheType;
	uint8                                         Pad_39[0x3];
	struct FIntVector                             Resolution;
	int32                                         FrameRangeStart;
	int32                                         FrameRangeEnd;
	uint8                                         Pad_50[0x10];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"VolumeCache">();
	}
	static class UVolumeCache* GetDefaultObj()
	{
		return GetDefaultObjImpl<UVolumeCache>();
	}
};
static_assert(alignof(UVolumeCache) == 0x000008, "Wrong alignment on UVolumeCache");
static_assert(sizeof(UVolumeCache) == 0x000060, "Wrong size on UVolumeCache");
static_assert(offsetof(UVolumeCache, FilePath) == 0x000028, "Member 'UVolumeCache::FilePath' has a wrong offset!");
static_assert(offsetof(UVolumeCache, CacheType) == 0x000038, "Member 'UVolumeCache::CacheType' has a wrong offset!");
static_assert(offsetof(UVolumeCache, Resolution) == 0x00003C, "Member 'UVolumeCache::Resolution' has a wrong offset!");
static_assert(offsetof(UVolumeCache, FrameRangeStart) == 0x000048, "Member 'UVolumeCache::FrameRangeStart' has a wrong offset!");
static_assert(offsetof(UVolumeCache, FrameRangeEnd) == 0x00004C, "Member 'UVolumeCache::FrameRangeEnd' has a wrong offset!");

}
