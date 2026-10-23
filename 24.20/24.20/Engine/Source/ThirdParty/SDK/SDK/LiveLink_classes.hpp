#pragma once

#include "Basic.hpp"

#include "Engine_classes.hpp"
#include "LiveLinkInterface_structs.hpp"
#include "LiveLinkInterface_classes.hpp"
#include "LiveLink_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "CoreUObject_classes.hpp"
#include "TimeManagement_classes.hpp"

namespace SDK
{

class ULiveLinkBasicFrameInterpolationProcessor : public ULiveLinkFrameInterpolationProcessor
{
public:
	bool                                          bInterpolatePropertyValues;
	uint8                                         Pad_29[0x17];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"LiveLinkBasicFrameInterpolationProcessor">();
	}
	static class ULiveLinkBasicFrameInterpolationProcessor* GetDefaultObj()
	{
		return GetDefaultObjImpl<ULiveLinkBasicFrameInterpolationProcessor>();
	}
};
static_assert(alignof(ULiveLinkBasicFrameInterpolationProcessor) == 0x000008, "Wrong alignment on ULiveLinkBasicFrameInterpolationProcessor");
static_assert(sizeof(ULiveLinkBasicFrameInterpolationProcessor) == 0x000040, "Wrong size on ULiveLinkBasicFrameInterpolationProcessor");
static_assert(offsetof(ULiveLinkBasicFrameInterpolationProcessor, bInterpolatePropertyValues) == 0x000028, "Member 'ULiveLinkBasicFrameInterpolationProcessor::bInterpolatePropertyValues' has a wrong offset!");

class ULiveLinkAnimationFrameInterpolationProcessor final : public ULiveLinkBasicFrameInterpolationProcessor
{
public:
	uint8                                         Pad_40[0x10];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"LiveLinkAnimationFrameInterpolationProcessor">();
	}
	static class ULiveLinkAnimationFrameInterpolationProcessor* GetDefaultObj()
	{
		return GetDefaultObjImpl<ULiveLinkAnimationFrameInterpolationProcessor>();
	}
};
static_assert(alignof(ULiveLinkAnimationFrameInterpolationProcessor) == 0x000008, "Wrong alignment on ULiveLinkAnimationFrameInterpolationProcessor");
static_assert(sizeof(ULiveLinkAnimationFrameInterpolationProcessor) == 0x000050, "Wrong size on ULiveLinkAnimationFrameInterpolationProcessor");

class ULiveLinkAnimationVirtualSubject final : public ULiveLinkVirtualSubject
{
public:
	uint8                                         Pad_158[0x1];
	bool                                          bAppendSubjectNameToBones;
	uint8                                         Pad_15A[0x6];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"LiveLinkAnimationVirtualSubject">();
	}
	static class ULiveLinkAnimationVirtualSubject* GetDefaultObj()
	{
		return GetDefaultObjImpl<ULiveLinkAnimationVirtualSubject>();
	}
};
static_assert(alignof(ULiveLinkAnimationVirtualSubject) == 0x000008, "Wrong alignment on ULiveLinkAnimationVirtualSubject");
static_assert(sizeof(ULiveLinkAnimationVirtualSubject) == 0x000160, "Wrong size on ULiveLinkAnimationVirtualSubject");
static_assert(offsetof(ULiveLinkAnimationVirtualSubject, bAppendSubjectNameToBones) == 0x000159, "Member 'ULiveLinkAnimationVirtualSubject::bAppendSubjectNameToBones' has a wrong offset!");

class ULiveLinkBlueprintLibrary final : public UBlueprintFunctionLibrary
{
public:
	static int32 ChildCount(struct FLiveLinkTransform& LiveLinkTransform);
	static void ComponentSpaceTransform(struct FLiveLinkTransform& LiveLinkTransform, struct FTransform* Transform);
	static bool EvaluateLiveLinkFrame(const struct FLiveLinkSubjectRepresentation& SubjectRepresentation, struct FLiveLinkBaseBlueprintData* OutBlueprintData);
	static bool EvaluateLiveLinkFrameAtSceneTime(const struct FLiveLinkSubjectName& SubjectName, TSubclassOf<class ULiveLinkRole> Role, const struct FTimecode& SceneTime, struct FLiveLinkBaseBlueprintData* OutBlueprintData);
	static bool EvaluateLiveLinkFrameAtWorldTimeOffset(const struct FLiveLinkSubjectName& SubjectName, TSubclassOf<class ULiveLinkRole> Role, float WorldTimeOffset, struct FLiveLinkBaseBlueprintData* OutBlueprintData);
	static bool EvaluateLiveLinkFrameWithSpecificRole(const struct FLiveLinkSubjectName& SubjectName, TSubclassOf<class ULiveLinkRole> Role, struct FLiveLinkBaseBlueprintData* OutBlueprintData);
	static bool GetAnimationFrameData(struct FSubjectFrameHandle& SubjectFrameHandle, struct FLiveLinkAnimationFrameData* AnimationFrameData);
	static bool GetAnimationStaticData(struct FSubjectFrameHandle& SubjectFrameHandle, struct FLiveLinkSkeletonStaticData* AnimationStaticData);
	static void GetBasicData(struct FSubjectFrameHandle& SubjectFrameHandle, struct FLiveLinkBasicBlueprintData* BasicBlueprintData);
	static void GetChildren(struct FLiveLinkTransform& LiveLinkTransform, TArray<struct FLiveLinkTransform>* Children);
	static void GetCurves(struct FSubjectFrameHandle& SubjectFrameHandle, TMap<class FName, float>* Curves);
	static TArray<struct FLiveLinkSubjectName> GetLiveLinkEnabledSubjectNames(bool bIncludeVirtualSubject);
	static TSubclassOf<class ULiveLinkRole> GetLiveLinkSubjectRole(const struct FLiveLinkSubjectName& SubjectName);
	static TArray<struct FLiveLinkSubjectKey> GetLiveLinkSubjects(bool bIncludeDisabledSubject, bool bIncludeVirtualSubject);
	static void GetMetadata(struct FSubjectFrameHandle& SubjectFrameHandle, struct FSubjectMetadata* MetaData);
	static void GetParent(struct FLiveLinkTransform& LiveLinkTransform, struct FLiveLinkTransform* Parent);
	static bool GetPropertyValue(struct FLiveLinkBasicBlueprintData& BasicData, class FName PropertyName, float* Value);
	static void GetRootTransform(struct FSubjectFrameHandle& SubjectFrameHandle, struct FLiveLinkTransform* LiveLinkTransform);
	static class FText GetSourceMachineName(struct FLiveLinkSourceHandle& SourceHandle);
	static class FText GetSourceStatus(struct FLiveLinkSourceHandle& SourceHandle);
	static class FText GetSourceType(struct FLiveLinkSourceHandle& SourceHandle);
	static class FText GetSourceTypeFromGuid(const struct FGuid& SourceGuid);
	static TSubclassOf<class ULiveLinkRole> GetSpecificLiveLinkSubjectRole(const struct FLiveLinkSubjectKey& SubjectKey);
	static void GetTransformByIndex(struct FSubjectFrameHandle& SubjectFrameHandle, int32 TransformIndex, struct FLiveLinkTransform* LiveLinkTransform);
	static void GetTransformByName(struct FSubjectFrameHandle& SubjectFrameHandle, class FName TransformName_0, struct FLiveLinkTransform* LiveLinkTransform);
	static bool HasParent(struct FLiveLinkTransform& LiveLinkTransform);
	static bool IsLiveLinkSubjectEnabled(const struct FLiveLinkSubjectName& SubjectName);
	static bool IsSourceStillValid(struct FLiveLinkSourceHandle& SourceHandle);
	static bool IsSpecificLiveLinkSubjectEnabled(const struct FLiveLinkSubjectKey& SubjectKey, bool bForThisFrame);
	static int32 NumberOfTransforms(struct FSubjectFrameHandle& SubjectFrameHandle);
	static void ParentBoneSpaceTransform(struct FLiveLinkTransform& LiveLinkTransform, struct FTransform* Transform);
	static bool RemoveSource(struct FLiveLinkSourceHandle& SourceHandle);
	static void SetLiveLinkSubjectEnabled(const struct FLiveLinkSubjectKey& SubjectKey, bool bEnabled);
	static void TransformName(struct FLiveLinkTransform& LiveLinkTransform, class FName* Name_0);
	static void TransformNames(struct FSubjectFrameHandle& SubjectFrameHandle, TArray<class FName>* TransformNames_0);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"LiveLinkBlueprintLibrary">();
	}
	static class ULiveLinkBlueprintLibrary* GetDefaultObj()
	{
		return GetDefaultObjImpl<ULiveLinkBlueprintLibrary>();
	}
};
static_assert(alignof(ULiveLinkBlueprintLibrary) == 0x000008, "Wrong alignment on ULiveLinkBlueprintLibrary");
static_assert(sizeof(ULiveLinkBlueprintLibrary) == 0x000028, "Wrong size on ULiveLinkBlueprintLibrary");

class ULiveLinkComponent final : public UActorComponent
{
public:
	TMulticastInlineDelegate<void(float DeltaTime)> OnLiveLinkUpdated;
	uint8                                         Pad_B0[0x10];

public:
	void GetAvailableSubjectNames(TArray<class FName>* SubjectNames);
	void GetSubjectData(const class FName SubjectName, bool* bSuccess, struct FSubjectFrameHandle* SubjectFrameHandle);
	void GetSubjectDataAtSceneTime(const class FName SubjectName, const struct FTimecode& SceneTime, bool* bSuccess, struct FSubjectFrameHandle* SubjectFrameHandle);
	void GetSubjectDataAtWorldTime(const class FName SubjectName, const float WorldTime, bool* bSuccess, struct FSubjectFrameHandle* SubjectFrameHandle);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"LiveLinkComponent">();
	}
	static class ULiveLinkComponent* GetDefaultObj()
	{
		return GetDefaultObjImpl<ULiveLinkComponent>();
	}
};
static_assert(alignof(ULiveLinkComponent) == 0x000008, "Wrong alignment on ULiveLinkComponent");
static_assert(sizeof(ULiveLinkComponent) == 0x0000C0, "Wrong size on ULiveLinkComponent");
static_assert(offsetof(ULiveLinkComponent, OnLiveLinkUpdated) == 0x0000A0, "Member 'ULiveLinkComponent::OnLiveLinkUpdated' has a wrong offset!");

class ULiveLinkDrivenComponent final : public UActorComponent
{
public:
	struct FLiveLinkSubjectName                   SubjectName;
	class FName                                   ActorTransformBone;
	bool                                          bModifyActorTransform;
	bool                                          bSetRelativeLocation;
	uint8                                         Pad_AA[0x6];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"LiveLinkDrivenComponent">();
	}
	static class ULiveLinkDrivenComponent* GetDefaultObj()
	{
		return GetDefaultObjImpl<ULiveLinkDrivenComponent>();
	}
};
static_assert(alignof(ULiveLinkDrivenComponent) == 0x000008, "Wrong alignment on ULiveLinkDrivenComponent");
static_assert(sizeof(ULiveLinkDrivenComponent) == 0x0000B0, "Wrong size on ULiveLinkDrivenComponent");
static_assert(offsetof(ULiveLinkDrivenComponent, SubjectName) == 0x0000A0, "Member 'ULiveLinkDrivenComponent::SubjectName' has a wrong offset!");
static_assert(offsetof(ULiveLinkDrivenComponent, ActorTransformBone) == 0x0000A4, "Member 'ULiveLinkDrivenComponent::ActorTransformBone' has a wrong offset!");
static_assert(offsetof(ULiveLinkDrivenComponent, bModifyActorTransform) == 0x0000A8, "Member 'ULiveLinkDrivenComponent::bModifyActorTransform' has a wrong offset!");
static_assert(offsetof(ULiveLinkDrivenComponent, bSetRelativeLocation) == 0x0000A9, "Member 'ULiveLinkDrivenComponent::bSetRelativeLocation' has a wrong offset!");

class ULiveLinkMessageBusFinder final : public UObject
{
public:
	uint8                                         Pad_28[0x58];

public:
	static void ConnectToProvider(struct FProviderPollResult& Provider, struct FLiveLinkSourceHandle* SourceHandle);
	static class ULiveLinkMessageBusFinder* ConstructMessageBusFinder();

	void GetAvailableProviders(class UObject* WorldContextObject, const struct FLatentActionInfo& LatentInfo, float Duration, TArray<struct FProviderPollResult>* AvailableProviders);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"LiveLinkMessageBusFinder">();
	}
	static class ULiveLinkMessageBusFinder* GetDefaultObj()
	{
		return GetDefaultObjImpl<ULiveLinkMessageBusFinder>();
	}
};
static_assert(alignof(ULiveLinkMessageBusFinder) == 0x000008, "Wrong alignment on ULiveLinkMessageBusFinder");
static_assert(sizeof(ULiveLinkMessageBusFinder) == 0x000080, "Wrong size on ULiveLinkMessageBusFinder");

class ULiveLinkMessageBusSourceFactory final : public ULiveLinkSourceFactory
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"LiveLinkMessageBusSourceFactory">();
	}
	static class ULiveLinkMessageBusSourceFactory* GetDefaultObj()
	{
		return GetDefaultObjImpl<ULiveLinkMessageBusSourceFactory>();
	}
};
static_assert(alignof(ULiveLinkMessageBusSourceFactory) == 0x000008, "Wrong alignment on ULiveLinkMessageBusSourceFactory");
static_assert(sizeof(ULiveLinkMessageBusSourceFactory) == 0x000028, "Wrong size on ULiveLinkMessageBusSourceFactory");

class ULiveLinkMessageBusSourceSettings final : public ULiveLinkSourceSettings
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"LiveLinkMessageBusSourceSettings">();
	}
	static class ULiveLinkMessageBusSourceSettings* GetDefaultObj()
	{
		return GetDefaultObjImpl<ULiveLinkMessageBusSourceSettings>();
	}
};
static_assert(alignof(ULiveLinkMessageBusSourceSettings) == 0x000008, "Wrong alignment on ULiveLinkMessageBusSourceSettings");
static_assert(sizeof(ULiveLinkMessageBusSourceSettings) == 0x0000A8, "Wrong size on ULiveLinkMessageBusSourceSettings");

class ULiveLinkPreset final : public UObject
{
public:
	TArray<struct FLiveLinkSourcePreset>          Sources;
	TArray<struct FLiveLinkSubjectPreset>         Subjects;
	uint8                                         Pad_48[0x8];

public:
	void ApplyToClientLatent(class UObject* WorldContextObject, const struct FLatentActionInfo& LatentInfo);
	void BuildFromClient();

	bool AddToClient(const bool bRecreatePresets) const;
	bool ApplyToClient() const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"LiveLinkPreset">();
	}
	static class ULiveLinkPreset* GetDefaultObj()
	{
		return GetDefaultObjImpl<ULiveLinkPreset>();
	}
};
static_assert(alignof(ULiveLinkPreset) == 0x000008, "Wrong alignment on ULiveLinkPreset");
static_assert(sizeof(ULiveLinkPreset) == 0x000050, "Wrong size on ULiveLinkPreset");
static_assert(offsetof(ULiveLinkPreset, Sources) == 0x000028, "Member 'ULiveLinkPreset::Sources' has a wrong offset!");
static_assert(offsetof(ULiveLinkPreset, Subjects) == 0x000038, "Member 'ULiveLinkPreset::Subjects' has a wrong offset!");

class ULiveLinkUserSettings final : public UObject
{
public:
	struct FDirectoryPath                         PresetSaveDir;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"LiveLinkUserSettings">();
	}
	static class ULiveLinkUserSettings* GetDefaultObj()
	{
		return GetDefaultObjImpl<ULiveLinkUserSettings>();
	}
};
static_assert(alignof(ULiveLinkUserSettings) == 0x000008, "Wrong alignment on ULiveLinkUserSettings");
static_assert(sizeof(ULiveLinkUserSettings) == 0x000038, "Wrong size on ULiveLinkUserSettings");
static_assert(offsetof(ULiveLinkUserSettings, PresetSaveDir) == 0x000028, "Member 'ULiveLinkUserSettings::PresetSaveDir' has a wrong offset!");

class ULiveLinkSettings final : public UObject
{
public:
	TArray<struct FLiveLinkRoleProjectSetting>    DefaultRoleSettings;
	TSubclassOf<class ULiveLinkFrameInterpolationProcessor> FrameInterpolationProcessor;
	TSoftObjectPtr<class ULiveLinkPreset>         DefaultLiveLinkPreset;
	float                                         ClockOffsetCorrectionStep;
	ELiveLinkSourceMode                           DefaultMessageBusSourceMode;
	uint8                                         Pad_6D[0x3];
	double                                        MessageBusPingRequestFrequency;
	double                                        MessageBusHeartbeatFrequency;
	double                                        MessageBusHeartbeatTimeout;
	double                                        MessageBusTimeBeforeRemovingInactiveSource;
	double                                        TimeWithoutFrameToBeConsiderAsInvalid;
	struct FLinearColor                           ValidColor;
	struct FLinearColor                           InvalidColor;
	uint8                                         TextSizeSource;
	uint8                                         TextSizeSubject;
	uint8                                         Pad_BA[0x6];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"LiveLinkSettings">();
	}
	static class ULiveLinkSettings* GetDefaultObj()
	{
		return GetDefaultObjImpl<ULiveLinkSettings>();
	}
};
static_assert(alignof(ULiveLinkSettings) == 0x000008, "Wrong alignment on ULiveLinkSettings");
static_assert(sizeof(ULiveLinkSettings) == 0x0000C0, "Wrong size on ULiveLinkSettings");
static_assert(offsetof(ULiveLinkSettings, DefaultRoleSettings) == 0x000028, "Member 'ULiveLinkSettings::DefaultRoleSettings' has a wrong offset!");
static_assert(offsetof(ULiveLinkSettings, FrameInterpolationProcessor) == 0x000038, "Member 'ULiveLinkSettings::FrameInterpolationProcessor' has a wrong offset!");
static_assert(offsetof(ULiveLinkSettings, DefaultLiveLinkPreset) == 0x000040, "Member 'ULiveLinkSettings::DefaultLiveLinkPreset' has a wrong offset!");
static_assert(offsetof(ULiveLinkSettings, ClockOffsetCorrectionStep) == 0x000068, "Member 'ULiveLinkSettings::ClockOffsetCorrectionStep' has a wrong offset!");
static_assert(offsetof(ULiveLinkSettings, DefaultMessageBusSourceMode) == 0x00006C, "Member 'ULiveLinkSettings::DefaultMessageBusSourceMode' has a wrong offset!");
static_assert(offsetof(ULiveLinkSettings, MessageBusPingRequestFrequency) == 0x000070, "Member 'ULiveLinkSettings::MessageBusPingRequestFrequency' has a wrong offset!");
static_assert(offsetof(ULiveLinkSettings, MessageBusHeartbeatFrequency) == 0x000078, "Member 'ULiveLinkSettings::MessageBusHeartbeatFrequency' has a wrong offset!");
static_assert(offsetof(ULiveLinkSettings, MessageBusHeartbeatTimeout) == 0x000080, "Member 'ULiveLinkSettings::MessageBusHeartbeatTimeout' has a wrong offset!");
static_assert(offsetof(ULiveLinkSettings, MessageBusTimeBeforeRemovingInactiveSource) == 0x000088, "Member 'ULiveLinkSettings::MessageBusTimeBeforeRemovingInactiveSource' has a wrong offset!");
static_assert(offsetof(ULiveLinkSettings, TimeWithoutFrameToBeConsiderAsInvalid) == 0x000090, "Member 'ULiveLinkSettings::TimeWithoutFrameToBeConsiderAsInvalid' has a wrong offset!");
static_assert(offsetof(ULiveLinkSettings, ValidColor) == 0x000098, "Member 'ULiveLinkSettings::ValidColor' has a wrong offset!");
static_assert(offsetof(ULiveLinkSettings, InvalidColor) == 0x0000A8, "Member 'ULiveLinkSettings::InvalidColor' has a wrong offset!");
static_assert(offsetof(ULiveLinkSettings, TextSizeSource) == 0x0000B8, "Member 'ULiveLinkSettings::TextSizeSource' has a wrong offset!");
static_assert(offsetof(ULiveLinkSettings, TextSizeSubject) == 0x0000B9, "Member 'ULiveLinkSettings::TextSizeSubject' has a wrong offset!");

class ULiveLinkTimecodeProvider final : public UTimecodeProvider
{
public:
	struct FLiveLinkSubjectKey                    SubjectKey;
	ELiveLinkTimecodeProviderEvaluationType       Evaluation;
	bool                                          bOverrideFrameRate;
	uint8                                         Pad_49[0x3];
	struct FFrameRate                             OverrideFrameRate;
	int32                                         BufferSize;
	uint8                                         Pad_58[0x68];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"LiveLinkTimecodeProvider">();
	}
	static class ULiveLinkTimecodeProvider* GetDefaultObj()
	{
		return GetDefaultObjImpl<ULiveLinkTimecodeProvider>();
	}
};
static_assert(alignof(ULiveLinkTimecodeProvider) == 0x000008, "Wrong alignment on ULiveLinkTimecodeProvider");
static_assert(sizeof(ULiveLinkTimecodeProvider) == 0x0000C0, "Wrong size on ULiveLinkTimecodeProvider");
static_assert(offsetof(ULiveLinkTimecodeProvider, SubjectKey) == 0x000030, "Member 'ULiveLinkTimecodeProvider::SubjectKey' has a wrong offset!");
static_assert(offsetof(ULiveLinkTimecodeProvider, Evaluation) == 0x000044, "Member 'ULiveLinkTimecodeProvider::Evaluation' has a wrong offset!");
static_assert(offsetof(ULiveLinkTimecodeProvider, bOverrideFrameRate) == 0x000048, "Member 'ULiveLinkTimecodeProvider::bOverrideFrameRate' has a wrong offset!");
static_assert(offsetof(ULiveLinkTimecodeProvider, OverrideFrameRate) == 0x00004C, "Member 'ULiveLinkTimecodeProvider::OverrideFrameRate' has a wrong offset!");
static_assert(offsetof(ULiveLinkTimecodeProvider, BufferSize) == 0x000054, "Member 'ULiveLinkTimecodeProvider::BufferSize' has a wrong offset!");

class ULiveLinkTimeSynchronizationSource final : public UTimeSynchronizationSource
{
public:
	struct FLiveLinkSubjectName                   SubjectName;
	uint8                                         Pad_34[0x4C];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"LiveLinkTimeSynchronizationSource">();
	}
	static class ULiveLinkTimeSynchronizationSource* GetDefaultObj()
	{
		return GetDefaultObjImpl<ULiveLinkTimeSynchronizationSource>();
	}
};
static_assert(alignof(ULiveLinkTimeSynchronizationSource) == 0x000008, "Wrong alignment on ULiveLinkTimeSynchronizationSource");
static_assert(sizeof(ULiveLinkTimeSynchronizationSource) == 0x000080, "Wrong size on ULiveLinkTimeSynchronizationSource");
static_assert(offsetof(ULiveLinkTimeSynchronizationSource, SubjectName) == 0x000030, "Member 'ULiveLinkTimeSynchronizationSource::SubjectName' has a wrong offset!");

class ULiveLinkVirtualSubjectSourceSettings final : public ULiveLinkSourceSettings
{
public:
	class FName                                   SourceName;
	uint8                                         Pad_AC[0x4];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"LiveLinkVirtualSubjectSourceSettings">();
	}
	static class ULiveLinkVirtualSubjectSourceSettings* GetDefaultObj()
	{
		return GetDefaultObjImpl<ULiveLinkVirtualSubjectSourceSettings>();
	}
};
static_assert(alignof(ULiveLinkVirtualSubjectSourceSettings) == 0x000008, "Wrong alignment on ULiveLinkVirtualSubjectSourceSettings");
static_assert(sizeof(ULiveLinkVirtualSubjectSourceSettings) == 0x0000B0, "Wrong size on ULiveLinkVirtualSubjectSourceSettings");
static_assert(offsetof(ULiveLinkVirtualSubjectSourceSettings, SourceName) == 0x0000A8, "Member 'ULiveLinkVirtualSubjectSourceSettings::SourceName' has a wrong offset!");

class ULiveLinkTransformAxisSwitchPreProcessor : public ULiveLinkFramePreProcessor
{
public:
	ELiveLinkAxis                                 FrontAxis;
	ELiveLinkAxis                                 RightAxis;
	ELiveLinkAxis                                 UpAxis;
	bool                                          bUseOffsetPosition;
	bool                                          bUseOffsetOrientation;
	uint8                                         Pad_2D[0x3];
	struct FVector                                OffsetPosition;
	struct FRotator                               OffsetOrientation;
	uint8                                         Pad_60[0x10];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"LiveLinkTransformAxisSwitchPreProcessor">();
	}
	static class ULiveLinkTransformAxisSwitchPreProcessor* GetDefaultObj()
	{
		return GetDefaultObjImpl<ULiveLinkTransformAxisSwitchPreProcessor>();
	}
};
static_assert(alignof(ULiveLinkTransformAxisSwitchPreProcessor) == 0x000008, "Wrong alignment on ULiveLinkTransformAxisSwitchPreProcessor");
static_assert(sizeof(ULiveLinkTransformAxisSwitchPreProcessor) == 0x000070, "Wrong size on ULiveLinkTransformAxisSwitchPreProcessor");
static_assert(offsetof(ULiveLinkTransformAxisSwitchPreProcessor, FrontAxis) == 0x000028, "Member 'ULiveLinkTransformAxisSwitchPreProcessor::FrontAxis' has a wrong offset!");
static_assert(offsetof(ULiveLinkTransformAxisSwitchPreProcessor, RightAxis) == 0x000029, "Member 'ULiveLinkTransformAxisSwitchPreProcessor::RightAxis' has a wrong offset!");
static_assert(offsetof(ULiveLinkTransformAxisSwitchPreProcessor, UpAxis) == 0x00002A, "Member 'ULiveLinkTransformAxisSwitchPreProcessor::UpAxis' has a wrong offset!");
static_assert(offsetof(ULiveLinkTransformAxisSwitchPreProcessor, bUseOffsetPosition) == 0x00002B, "Member 'ULiveLinkTransformAxisSwitchPreProcessor::bUseOffsetPosition' has a wrong offset!");
static_assert(offsetof(ULiveLinkTransformAxisSwitchPreProcessor, bUseOffsetOrientation) == 0x00002C, "Member 'ULiveLinkTransformAxisSwitchPreProcessor::bUseOffsetOrientation' has a wrong offset!");
static_assert(offsetof(ULiveLinkTransformAxisSwitchPreProcessor, OffsetPosition) == 0x000030, "Member 'ULiveLinkTransformAxisSwitchPreProcessor::OffsetPosition' has a wrong offset!");
static_assert(offsetof(ULiveLinkTransformAxisSwitchPreProcessor, OffsetOrientation) == 0x000048, "Member 'ULiveLinkTransformAxisSwitchPreProcessor::OffsetOrientation' has a wrong offset!");

class ULiveLinkAnimationAxisSwitchPreProcessor final : public ULiveLinkTransformAxisSwitchPreProcessor
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"LiveLinkAnimationAxisSwitchPreProcessor">();
	}
	static class ULiveLinkAnimationAxisSwitchPreProcessor* GetDefaultObj()
	{
		return GetDefaultObjImpl<ULiveLinkAnimationAxisSwitchPreProcessor>();
	}
};
static_assert(alignof(ULiveLinkAnimationAxisSwitchPreProcessor) == 0x000008, "Wrong alignment on ULiveLinkAnimationAxisSwitchPreProcessor");
static_assert(sizeof(ULiveLinkAnimationAxisSwitchPreProcessor) == 0x000070, "Wrong size on ULiveLinkAnimationAxisSwitchPreProcessor");

class ULiveLinkAnimationRoleToTransform final : public ULiveLinkFrameTranslator
{
public:
	class FName                                   BoneName;
	uint8                                         Pad_2C[0x14];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"LiveLinkAnimationRoleToTransform">();
	}
	static class ULiveLinkAnimationRoleToTransform* GetDefaultObj()
	{
		return GetDefaultObjImpl<ULiveLinkAnimationRoleToTransform>();
	}
};
static_assert(alignof(ULiveLinkAnimationRoleToTransform) == 0x000008, "Wrong alignment on ULiveLinkAnimationRoleToTransform");
static_assert(sizeof(ULiveLinkAnimationRoleToTransform) == 0x000040, "Wrong size on ULiveLinkAnimationRoleToTransform");
static_assert(offsetof(ULiveLinkAnimationRoleToTransform, BoneName) == 0x000028, "Member 'ULiveLinkAnimationRoleToTransform::BoneName' has a wrong offset!");

class ULiveLinkBlueprintVirtualSubject final : public ULiveLinkVirtualSubject
{
public:
	uint8                                         Pad_158[0x28];

public:
	void OnInitialize();
	void OnUpdate();
	bool UpdateVirtualSubjectFrameData_Internal(const struct FLiveLinkBaseFrameData& InStruct, bool bInShouldStampCurrentTime);
	bool UpdateVirtualSubjectStaticData_Internal(const struct FLiveLinkBaseStaticData& InStruct);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"LiveLinkBlueprintVirtualSubject">();
	}
	static class ULiveLinkBlueprintVirtualSubject* GetDefaultObj()
	{
		return GetDefaultObjImpl<ULiveLinkBlueprintVirtualSubject>();
	}
};
static_assert(alignof(ULiveLinkBlueprintVirtualSubject) == 0x000008, "Wrong alignment on ULiveLinkBlueprintVirtualSubject");
static_assert(sizeof(ULiveLinkBlueprintVirtualSubject) == 0x000180, "Wrong size on ULiveLinkBlueprintVirtualSubject");

}
