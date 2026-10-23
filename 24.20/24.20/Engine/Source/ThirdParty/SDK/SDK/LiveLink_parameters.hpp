#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "LiveLinkInterface_structs.hpp"
#include "LiveLink_structs.hpp"
#include "CoreUObject_structs.hpp"

namespace SDK::Params
{

struct LiveLinkBlueprintLibrary_ChildCount final
{
public:
	struct FLiveLinkTransform                     LiveLinkTransform;
	int32                                         ReturnValue;
	uint8                                         Pad_24[0x4];
};
static_assert(alignof(LiveLinkBlueprintLibrary_ChildCount) == 0x000008, "Wrong alignment on LiveLinkBlueprintLibrary_ChildCount");
static_assert(sizeof(LiveLinkBlueprintLibrary_ChildCount) == 0x000028, "Wrong size on LiveLinkBlueprintLibrary_ChildCount");
static_assert(offsetof(LiveLinkBlueprintLibrary_ChildCount, LiveLinkTransform) == 0x000000, "Member 'LiveLinkBlueprintLibrary_ChildCount::LiveLinkTransform' has a wrong offset!");
static_assert(offsetof(LiveLinkBlueprintLibrary_ChildCount, ReturnValue) == 0x000020, "Member 'LiveLinkBlueprintLibrary_ChildCount::ReturnValue' has a wrong offset!");

struct LiveLinkBlueprintLibrary_ComponentSpaceTransform final
{
public:
	struct FLiveLinkTransform                     LiveLinkTransform;
	struct FTransform                             Transform;
};
static_assert(alignof(LiveLinkBlueprintLibrary_ComponentSpaceTransform) == 0x000010, "Wrong alignment on LiveLinkBlueprintLibrary_ComponentSpaceTransform");
static_assert(sizeof(LiveLinkBlueprintLibrary_ComponentSpaceTransform) == 0x000080, "Wrong size on LiveLinkBlueprintLibrary_ComponentSpaceTransform");
static_assert(offsetof(LiveLinkBlueprintLibrary_ComponentSpaceTransform, LiveLinkTransform) == 0x000000, "Member 'LiveLinkBlueprintLibrary_ComponentSpaceTransform::LiveLinkTransform' has a wrong offset!");
static_assert(offsetof(LiveLinkBlueprintLibrary_ComponentSpaceTransform, Transform) == 0x000020, "Member 'LiveLinkBlueprintLibrary_ComponentSpaceTransform::Transform' has a wrong offset!");

struct LiveLinkBlueprintLibrary_EvaluateLiveLinkFrame final
{
public:
	struct FLiveLinkSubjectRepresentation         SubjectRepresentation;
	struct FLiveLinkBaseBlueprintData             OutBlueprintData;
	bool                                          ReturnValue;
	uint8                                         Pad_19[0x7];
};
static_assert(alignof(LiveLinkBlueprintLibrary_EvaluateLiveLinkFrame) == 0x000008, "Wrong alignment on LiveLinkBlueprintLibrary_EvaluateLiveLinkFrame");
static_assert(sizeof(LiveLinkBlueprintLibrary_EvaluateLiveLinkFrame) == 0x000020, "Wrong size on LiveLinkBlueprintLibrary_EvaluateLiveLinkFrame");
static_assert(offsetof(LiveLinkBlueprintLibrary_EvaluateLiveLinkFrame, SubjectRepresentation) == 0x000000, "Member 'LiveLinkBlueprintLibrary_EvaluateLiveLinkFrame::SubjectRepresentation' has a wrong offset!");
static_assert(offsetof(LiveLinkBlueprintLibrary_EvaluateLiveLinkFrame, OutBlueprintData) == 0x000010, "Member 'LiveLinkBlueprintLibrary_EvaluateLiveLinkFrame::OutBlueprintData' has a wrong offset!");
static_assert(offsetof(LiveLinkBlueprintLibrary_EvaluateLiveLinkFrame, ReturnValue) == 0x000018, "Member 'LiveLinkBlueprintLibrary_EvaluateLiveLinkFrame::ReturnValue' has a wrong offset!");

struct LiveLinkBlueprintLibrary_EvaluateLiveLinkFrameAtSceneTime final
{
public:
	struct FLiveLinkSubjectName                   SubjectName;
	uint8                                         Pad_4[0x4];
	TSubclassOf<class ULiveLinkRole>              Role;
	struct FTimecode                              SceneTime;
	uint8                                         Pad_24[0x4];
	struct FLiveLinkBaseBlueprintData             OutBlueprintData;
	bool                                          ReturnValue;
	uint8                                         Pad_31[0x7];
};
static_assert(alignof(LiveLinkBlueprintLibrary_EvaluateLiveLinkFrameAtSceneTime) == 0x000008, "Wrong alignment on LiveLinkBlueprintLibrary_EvaluateLiveLinkFrameAtSceneTime");
static_assert(sizeof(LiveLinkBlueprintLibrary_EvaluateLiveLinkFrameAtSceneTime) == 0x000038, "Wrong size on LiveLinkBlueprintLibrary_EvaluateLiveLinkFrameAtSceneTime");
static_assert(offsetof(LiveLinkBlueprintLibrary_EvaluateLiveLinkFrameAtSceneTime, SubjectName) == 0x000000, "Member 'LiveLinkBlueprintLibrary_EvaluateLiveLinkFrameAtSceneTime::SubjectName' has a wrong offset!");
static_assert(offsetof(LiveLinkBlueprintLibrary_EvaluateLiveLinkFrameAtSceneTime, Role) == 0x000008, "Member 'LiveLinkBlueprintLibrary_EvaluateLiveLinkFrameAtSceneTime::Role' has a wrong offset!");
static_assert(offsetof(LiveLinkBlueprintLibrary_EvaluateLiveLinkFrameAtSceneTime, SceneTime) == 0x000010, "Member 'LiveLinkBlueprintLibrary_EvaluateLiveLinkFrameAtSceneTime::SceneTime' has a wrong offset!");
static_assert(offsetof(LiveLinkBlueprintLibrary_EvaluateLiveLinkFrameAtSceneTime, OutBlueprintData) == 0x000028, "Member 'LiveLinkBlueprintLibrary_EvaluateLiveLinkFrameAtSceneTime::OutBlueprintData' has a wrong offset!");
static_assert(offsetof(LiveLinkBlueprintLibrary_EvaluateLiveLinkFrameAtSceneTime, ReturnValue) == 0x000030, "Member 'LiveLinkBlueprintLibrary_EvaluateLiveLinkFrameAtSceneTime::ReturnValue' has a wrong offset!");

struct LiveLinkBlueprintLibrary_EvaluateLiveLinkFrameAtWorldTimeOffset final
{
public:
	struct FLiveLinkSubjectName                   SubjectName;
	uint8                                         Pad_4[0x4];
	TSubclassOf<class ULiveLinkRole>              Role;
	float                                         WorldTimeOffset;
	uint8                                         Pad_14[0x4];
	struct FLiveLinkBaseBlueprintData             OutBlueprintData;
	bool                                          ReturnValue;
	uint8                                         Pad_21[0x7];
};
static_assert(alignof(LiveLinkBlueprintLibrary_EvaluateLiveLinkFrameAtWorldTimeOffset) == 0x000008, "Wrong alignment on LiveLinkBlueprintLibrary_EvaluateLiveLinkFrameAtWorldTimeOffset");
static_assert(sizeof(LiveLinkBlueprintLibrary_EvaluateLiveLinkFrameAtWorldTimeOffset) == 0x000028, "Wrong size on LiveLinkBlueprintLibrary_EvaluateLiveLinkFrameAtWorldTimeOffset");
static_assert(offsetof(LiveLinkBlueprintLibrary_EvaluateLiveLinkFrameAtWorldTimeOffset, SubjectName) == 0x000000, "Member 'LiveLinkBlueprintLibrary_EvaluateLiveLinkFrameAtWorldTimeOffset::SubjectName' has a wrong offset!");
static_assert(offsetof(LiveLinkBlueprintLibrary_EvaluateLiveLinkFrameAtWorldTimeOffset, Role) == 0x000008, "Member 'LiveLinkBlueprintLibrary_EvaluateLiveLinkFrameAtWorldTimeOffset::Role' has a wrong offset!");
static_assert(offsetof(LiveLinkBlueprintLibrary_EvaluateLiveLinkFrameAtWorldTimeOffset, WorldTimeOffset) == 0x000010, "Member 'LiveLinkBlueprintLibrary_EvaluateLiveLinkFrameAtWorldTimeOffset::WorldTimeOffset' has a wrong offset!");
static_assert(offsetof(LiveLinkBlueprintLibrary_EvaluateLiveLinkFrameAtWorldTimeOffset, OutBlueprintData) == 0x000018, "Member 'LiveLinkBlueprintLibrary_EvaluateLiveLinkFrameAtWorldTimeOffset::OutBlueprintData' has a wrong offset!");
static_assert(offsetof(LiveLinkBlueprintLibrary_EvaluateLiveLinkFrameAtWorldTimeOffset, ReturnValue) == 0x000020, "Member 'LiveLinkBlueprintLibrary_EvaluateLiveLinkFrameAtWorldTimeOffset::ReturnValue' has a wrong offset!");

struct LiveLinkBlueprintLibrary_EvaluateLiveLinkFrameWithSpecificRole final
{
public:
	struct FLiveLinkSubjectName                   SubjectName;
	uint8                                         Pad_4[0x4];
	TSubclassOf<class ULiveLinkRole>              Role;
	struct FLiveLinkBaseBlueprintData             OutBlueprintData;
	bool                                          ReturnValue;
	uint8                                         Pad_19[0x7];
};
static_assert(alignof(LiveLinkBlueprintLibrary_EvaluateLiveLinkFrameWithSpecificRole) == 0x000008, "Wrong alignment on LiveLinkBlueprintLibrary_EvaluateLiveLinkFrameWithSpecificRole");
static_assert(sizeof(LiveLinkBlueprintLibrary_EvaluateLiveLinkFrameWithSpecificRole) == 0x000020, "Wrong size on LiveLinkBlueprintLibrary_EvaluateLiveLinkFrameWithSpecificRole");
static_assert(offsetof(LiveLinkBlueprintLibrary_EvaluateLiveLinkFrameWithSpecificRole, SubjectName) == 0x000000, "Member 'LiveLinkBlueprintLibrary_EvaluateLiveLinkFrameWithSpecificRole::SubjectName' has a wrong offset!");
static_assert(offsetof(LiveLinkBlueprintLibrary_EvaluateLiveLinkFrameWithSpecificRole, Role) == 0x000008, "Member 'LiveLinkBlueprintLibrary_EvaluateLiveLinkFrameWithSpecificRole::Role' has a wrong offset!");
static_assert(offsetof(LiveLinkBlueprintLibrary_EvaluateLiveLinkFrameWithSpecificRole, OutBlueprintData) == 0x000010, "Member 'LiveLinkBlueprintLibrary_EvaluateLiveLinkFrameWithSpecificRole::OutBlueprintData' has a wrong offset!");
static_assert(offsetof(LiveLinkBlueprintLibrary_EvaluateLiveLinkFrameWithSpecificRole, ReturnValue) == 0x000018, "Member 'LiveLinkBlueprintLibrary_EvaluateLiveLinkFrameWithSpecificRole::ReturnValue' has a wrong offset!");

struct LiveLinkBlueprintLibrary_GetAnimationFrameData final
{
public:
	struct FSubjectFrameHandle                    SubjectFrameHandle;
	struct FLiveLinkAnimationFrameData            AnimationFrameData;
	bool                                          ReturnValue;
	uint8                                         Pad_C9[0x7];
};
static_assert(alignof(LiveLinkBlueprintLibrary_GetAnimationFrameData) == 0x000008, "Wrong alignment on LiveLinkBlueprintLibrary_GetAnimationFrameData");
static_assert(sizeof(LiveLinkBlueprintLibrary_GetAnimationFrameData) == 0x0000D0, "Wrong size on LiveLinkBlueprintLibrary_GetAnimationFrameData");
static_assert(offsetof(LiveLinkBlueprintLibrary_GetAnimationFrameData, SubjectFrameHandle) == 0x000000, "Member 'LiveLinkBlueprintLibrary_GetAnimationFrameData::SubjectFrameHandle' has a wrong offset!");
static_assert(offsetof(LiveLinkBlueprintLibrary_GetAnimationFrameData, AnimationFrameData) == 0x000018, "Member 'LiveLinkBlueprintLibrary_GetAnimationFrameData::AnimationFrameData' has a wrong offset!");
static_assert(offsetof(LiveLinkBlueprintLibrary_GetAnimationFrameData, ReturnValue) == 0x0000C8, "Member 'LiveLinkBlueprintLibrary_GetAnimationFrameData::ReturnValue' has a wrong offset!");

struct LiveLinkBlueprintLibrary_GetAnimationStaticData final
{
public:
	struct FSubjectFrameHandle                    SubjectFrameHandle;
	struct FLiveLinkSkeletonStaticData            AnimationStaticData;
	bool                                          ReturnValue;
	uint8                                         Pad_49[0x7];
};
static_assert(alignof(LiveLinkBlueprintLibrary_GetAnimationStaticData) == 0x000008, "Wrong alignment on LiveLinkBlueprintLibrary_GetAnimationStaticData");
static_assert(sizeof(LiveLinkBlueprintLibrary_GetAnimationStaticData) == 0x000050, "Wrong size on LiveLinkBlueprintLibrary_GetAnimationStaticData");
static_assert(offsetof(LiveLinkBlueprintLibrary_GetAnimationStaticData, SubjectFrameHandle) == 0x000000, "Member 'LiveLinkBlueprintLibrary_GetAnimationStaticData::SubjectFrameHandle' has a wrong offset!");
static_assert(offsetof(LiveLinkBlueprintLibrary_GetAnimationStaticData, AnimationStaticData) == 0x000018, "Member 'LiveLinkBlueprintLibrary_GetAnimationStaticData::AnimationStaticData' has a wrong offset!");
static_assert(offsetof(LiveLinkBlueprintLibrary_GetAnimationStaticData, ReturnValue) == 0x000048, "Member 'LiveLinkBlueprintLibrary_GetAnimationStaticData::ReturnValue' has a wrong offset!");

struct LiveLinkBlueprintLibrary_GetBasicData final
{
public:
	struct FSubjectFrameHandle                    SubjectFrameHandle;
	struct FLiveLinkBasicBlueprintData            BasicBlueprintData;
};
static_assert(alignof(LiveLinkBlueprintLibrary_GetBasicData) == 0x000008, "Wrong alignment on LiveLinkBlueprintLibrary_GetBasicData");
static_assert(sizeof(LiveLinkBlueprintLibrary_GetBasicData) == 0x0000D0, "Wrong size on LiveLinkBlueprintLibrary_GetBasicData");
static_assert(offsetof(LiveLinkBlueprintLibrary_GetBasicData, SubjectFrameHandle) == 0x000000, "Member 'LiveLinkBlueprintLibrary_GetBasicData::SubjectFrameHandle' has a wrong offset!");
static_assert(offsetof(LiveLinkBlueprintLibrary_GetBasicData, BasicBlueprintData) == 0x000018, "Member 'LiveLinkBlueprintLibrary_GetBasicData::BasicBlueprintData' has a wrong offset!");

struct LiveLinkBlueprintLibrary_GetChildren final
{
public:
	struct FLiveLinkTransform                     LiveLinkTransform;
	TArray<struct FLiveLinkTransform>             Children;
};
static_assert(alignof(LiveLinkBlueprintLibrary_GetChildren) == 0x000008, "Wrong alignment on LiveLinkBlueprintLibrary_GetChildren");
static_assert(sizeof(LiveLinkBlueprintLibrary_GetChildren) == 0x000030, "Wrong size on LiveLinkBlueprintLibrary_GetChildren");
static_assert(offsetof(LiveLinkBlueprintLibrary_GetChildren, LiveLinkTransform) == 0x000000, "Member 'LiveLinkBlueprintLibrary_GetChildren::LiveLinkTransform' has a wrong offset!");
static_assert(offsetof(LiveLinkBlueprintLibrary_GetChildren, Children) == 0x000020, "Member 'LiveLinkBlueprintLibrary_GetChildren::Children' has a wrong offset!");

struct LiveLinkBlueprintLibrary_GetCurves final
{
public:
	struct FSubjectFrameHandle                    SubjectFrameHandle;
	TMap<class FName, float>                      Curves;
};
static_assert(alignof(LiveLinkBlueprintLibrary_GetCurves) == 0x000008, "Wrong alignment on LiveLinkBlueprintLibrary_GetCurves");
static_assert(sizeof(LiveLinkBlueprintLibrary_GetCurves) == 0x000068, "Wrong size on LiveLinkBlueprintLibrary_GetCurves");
static_assert(offsetof(LiveLinkBlueprintLibrary_GetCurves, SubjectFrameHandle) == 0x000000, "Member 'LiveLinkBlueprintLibrary_GetCurves::SubjectFrameHandle' has a wrong offset!");
static_assert(offsetof(LiveLinkBlueprintLibrary_GetCurves, Curves) == 0x000018, "Member 'LiveLinkBlueprintLibrary_GetCurves::Curves' has a wrong offset!");

struct LiveLinkBlueprintLibrary_GetLiveLinkEnabledSubjectNames final
{
public:
	bool                                          bIncludeVirtualSubject;
	uint8                                         Pad_1[0x7];
	TArray<struct FLiveLinkSubjectName>           ReturnValue;
};
static_assert(alignof(LiveLinkBlueprintLibrary_GetLiveLinkEnabledSubjectNames) == 0x000008, "Wrong alignment on LiveLinkBlueprintLibrary_GetLiveLinkEnabledSubjectNames");
static_assert(sizeof(LiveLinkBlueprintLibrary_GetLiveLinkEnabledSubjectNames) == 0x000018, "Wrong size on LiveLinkBlueprintLibrary_GetLiveLinkEnabledSubjectNames");
static_assert(offsetof(LiveLinkBlueprintLibrary_GetLiveLinkEnabledSubjectNames, bIncludeVirtualSubject) == 0x000000, "Member 'LiveLinkBlueprintLibrary_GetLiveLinkEnabledSubjectNames::bIncludeVirtualSubject' has a wrong offset!");
static_assert(offsetof(LiveLinkBlueprintLibrary_GetLiveLinkEnabledSubjectNames, ReturnValue) == 0x000008, "Member 'LiveLinkBlueprintLibrary_GetLiveLinkEnabledSubjectNames::ReturnValue' has a wrong offset!");

struct LiveLinkBlueprintLibrary_GetLiveLinkSubjectRole final
{
public:
	struct FLiveLinkSubjectName                   SubjectName;
	uint8                                         Pad_4[0x4];
	TSubclassOf<class ULiveLinkRole>              ReturnValue;
};
static_assert(alignof(LiveLinkBlueprintLibrary_GetLiveLinkSubjectRole) == 0x000008, "Wrong alignment on LiveLinkBlueprintLibrary_GetLiveLinkSubjectRole");
static_assert(sizeof(LiveLinkBlueprintLibrary_GetLiveLinkSubjectRole) == 0x000010, "Wrong size on LiveLinkBlueprintLibrary_GetLiveLinkSubjectRole");
static_assert(offsetof(LiveLinkBlueprintLibrary_GetLiveLinkSubjectRole, SubjectName) == 0x000000, "Member 'LiveLinkBlueprintLibrary_GetLiveLinkSubjectRole::SubjectName' has a wrong offset!");
static_assert(offsetof(LiveLinkBlueprintLibrary_GetLiveLinkSubjectRole, ReturnValue) == 0x000008, "Member 'LiveLinkBlueprintLibrary_GetLiveLinkSubjectRole::ReturnValue' has a wrong offset!");

struct LiveLinkBlueprintLibrary_GetLiveLinkSubjects final
{
public:
	bool                                          bIncludeDisabledSubject;
	bool                                          bIncludeVirtualSubject;
	uint8                                         Pad_2[0x6];
	TArray<struct FLiveLinkSubjectKey>            ReturnValue;
};
static_assert(alignof(LiveLinkBlueprintLibrary_GetLiveLinkSubjects) == 0x000008, "Wrong alignment on LiveLinkBlueprintLibrary_GetLiveLinkSubjects");
static_assert(sizeof(LiveLinkBlueprintLibrary_GetLiveLinkSubjects) == 0x000018, "Wrong size on LiveLinkBlueprintLibrary_GetLiveLinkSubjects");
static_assert(offsetof(LiveLinkBlueprintLibrary_GetLiveLinkSubjects, bIncludeDisabledSubject) == 0x000000, "Member 'LiveLinkBlueprintLibrary_GetLiveLinkSubjects::bIncludeDisabledSubject' has a wrong offset!");
static_assert(offsetof(LiveLinkBlueprintLibrary_GetLiveLinkSubjects, bIncludeVirtualSubject) == 0x000001, "Member 'LiveLinkBlueprintLibrary_GetLiveLinkSubjects::bIncludeVirtualSubject' has a wrong offset!");
static_assert(offsetof(LiveLinkBlueprintLibrary_GetLiveLinkSubjects, ReturnValue) == 0x000008, "Member 'LiveLinkBlueprintLibrary_GetLiveLinkSubjects::ReturnValue' has a wrong offset!");

struct LiveLinkBlueprintLibrary_GetMetadata final
{
public:
	struct FSubjectFrameHandle                    SubjectFrameHandle;
	struct FSubjectMetadata                       MetaData;
};
static_assert(alignof(LiveLinkBlueprintLibrary_GetMetadata) == 0x000008, "Wrong alignment on LiveLinkBlueprintLibrary_GetMetadata");
static_assert(sizeof(LiveLinkBlueprintLibrary_GetMetadata) == 0x000088, "Wrong size on LiveLinkBlueprintLibrary_GetMetadata");
static_assert(offsetof(LiveLinkBlueprintLibrary_GetMetadata, SubjectFrameHandle) == 0x000000, "Member 'LiveLinkBlueprintLibrary_GetMetadata::SubjectFrameHandle' has a wrong offset!");
static_assert(offsetof(LiveLinkBlueprintLibrary_GetMetadata, MetaData) == 0x000018, "Member 'LiveLinkBlueprintLibrary_GetMetadata::MetaData' has a wrong offset!");

struct LiveLinkBlueprintLibrary_GetParent final
{
public:
	struct FLiveLinkTransform                     LiveLinkTransform;
	struct FLiveLinkTransform                     Parent;
};
static_assert(alignof(LiveLinkBlueprintLibrary_GetParent) == 0x000008, "Wrong alignment on LiveLinkBlueprintLibrary_GetParent");
static_assert(sizeof(LiveLinkBlueprintLibrary_GetParent) == 0x000040, "Wrong size on LiveLinkBlueprintLibrary_GetParent");
static_assert(offsetof(LiveLinkBlueprintLibrary_GetParent, LiveLinkTransform) == 0x000000, "Member 'LiveLinkBlueprintLibrary_GetParent::LiveLinkTransform' has a wrong offset!");
static_assert(offsetof(LiveLinkBlueprintLibrary_GetParent, Parent) == 0x000020, "Member 'LiveLinkBlueprintLibrary_GetParent::Parent' has a wrong offset!");

struct LiveLinkBlueprintLibrary_GetPropertyValue final
{
public:
	struct FLiveLinkBasicBlueprintData            BasicData;
	class FName                                   PropertyName;
	float                                         Value;
	bool                                          ReturnValue;
	uint8                                         Pad_C1[0x7];
};
static_assert(alignof(LiveLinkBlueprintLibrary_GetPropertyValue) == 0x000008, "Wrong alignment on LiveLinkBlueprintLibrary_GetPropertyValue");
static_assert(sizeof(LiveLinkBlueprintLibrary_GetPropertyValue) == 0x0000C8, "Wrong size on LiveLinkBlueprintLibrary_GetPropertyValue");
static_assert(offsetof(LiveLinkBlueprintLibrary_GetPropertyValue, BasicData) == 0x000000, "Member 'LiveLinkBlueprintLibrary_GetPropertyValue::BasicData' has a wrong offset!");
static_assert(offsetof(LiveLinkBlueprintLibrary_GetPropertyValue, PropertyName) == 0x0000B8, "Member 'LiveLinkBlueprintLibrary_GetPropertyValue::PropertyName' has a wrong offset!");
static_assert(offsetof(LiveLinkBlueprintLibrary_GetPropertyValue, Value) == 0x0000BC, "Member 'LiveLinkBlueprintLibrary_GetPropertyValue::Value' has a wrong offset!");
static_assert(offsetof(LiveLinkBlueprintLibrary_GetPropertyValue, ReturnValue) == 0x0000C0, "Member 'LiveLinkBlueprintLibrary_GetPropertyValue::ReturnValue' has a wrong offset!");

struct LiveLinkBlueprintLibrary_GetRootTransform final
{
public:
	struct FSubjectFrameHandle                    SubjectFrameHandle;
	struct FLiveLinkTransform                     LiveLinkTransform;
};
static_assert(alignof(LiveLinkBlueprintLibrary_GetRootTransform) == 0x000008, "Wrong alignment on LiveLinkBlueprintLibrary_GetRootTransform");
static_assert(sizeof(LiveLinkBlueprintLibrary_GetRootTransform) == 0x000038, "Wrong size on LiveLinkBlueprintLibrary_GetRootTransform");
static_assert(offsetof(LiveLinkBlueprintLibrary_GetRootTransform, SubjectFrameHandle) == 0x000000, "Member 'LiveLinkBlueprintLibrary_GetRootTransform::SubjectFrameHandle' has a wrong offset!");
static_assert(offsetof(LiveLinkBlueprintLibrary_GetRootTransform, LiveLinkTransform) == 0x000018, "Member 'LiveLinkBlueprintLibrary_GetRootTransform::LiveLinkTransform' has a wrong offset!");

struct LiveLinkBlueprintLibrary_GetSourceMachineName final
{
public:
	struct FLiveLinkSourceHandle                  SourceHandle;
	class FText                                   ReturnValue;
};
static_assert(alignof(LiveLinkBlueprintLibrary_GetSourceMachineName) == 0x000008, "Wrong alignment on LiveLinkBlueprintLibrary_GetSourceMachineName");
static_assert(sizeof(LiveLinkBlueprintLibrary_GetSourceMachineName) == 0x000030, "Wrong size on LiveLinkBlueprintLibrary_GetSourceMachineName");
static_assert(offsetof(LiveLinkBlueprintLibrary_GetSourceMachineName, SourceHandle) == 0x000000, "Member 'LiveLinkBlueprintLibrary_GetSourceMachineName::SourceHandle' has a wrong offset!");
static_assert(offsetof(LiveLinkBlueprintLibrary_GetSourceMachineName, ReturnValue) == 0x000018, "Member 'LiveLinkBlueprintLibrary_GetSourceMachineName::ReturnValue' has a wrong offset!");

struct LiveLinkBlueprintLibrary_GetSourceStatus final
{
public:
	struct FLiveLinkSourceHandle                  SourceHandle;
	class FText                                   ReturnValue;
};
static_assert(alignof(LiveLinkBlueprintLibrary_GetSourceStatus) == 0x000008, "Wrong alignment on LiveLinkBlueprintLibrary_GetSourceStatus");
static_assert(sizeof(LiveLinkBlueprintLibrary_GetSourceStatus) == 0x000030, "Wrong size on LiveLinkBlueprintLibrary_GetSourceStatus");
static_assert(offsetof(LiveLinkBlueprintLibrary_GetSourceStatus, SourceHandle) == 0x000000, "Member 'LiveLinkBlueprintLibrary_GetSourceStatus::SourceHandle' has a wrong offset!");
static_assert(offsetof(LiveLinkBlueprintLibrary_GetSourceStatus, ReturnValue) == 0x000018, "Member 'LiveLinkBlueprintLibrary_GetSourceStatus::ReturnValue' has a wrong offset!");

struct LiveLinkBlueprintLibrary_GetSourceType final
{
public:
	struct FLiveLinkSourceHandle                  SourceHandle;
	class FText                                   ReturnValue;
};
static_assert(alignof(LiveLinkBlueprintLibrary_GetSourceType) == 0x000008, "Wrong alignment on LiveLinkBlueprintLibrary_GetSourceType");
static_assert(sizeof(LiveLinkBlueprintLibrary_GetSourceType) == 0x000030, "Wrong size on LiveLinkBlueprintLibrary_GetSourceType");
static_assert(offsetof(LiveLinkBlueprintLibrary_GetSourceType, SourceHandle) == 0x000000, "Member 'LiveLinkBlueprintLibrary_GetSourceType::SourceHandle' has a wrong offset!");
static_assert(offsetof(LiveLinkBlueprintLibrary_GetSourceType, ReturnValue) == 0x000018, "Member 'LiveLinkBlueprintLibrary_GetSourceType::ReturnValue' has a wrong offset!");

struct LiveLinkBlueprintLibrary_GetSourceTypeFromGuid final
{
public:
	struct FGuid                                  SourceGuid;
	class FText                                   ReturnValue;
};
static_assert(alignof(LiveLinkBlueprintLibrary_GetSourceTypeFromGuid) == 0x000008, "Wrong alignment on LiveLinkBlueprintLibrary_GetSourceTypeFromGuid");
static_assert(sizeof(LiveLinkBlueprintLibrary_GetSourceTypeFromGuid) == 0x000028, "Wrong size on LiveLinkBlueprintLibrary_GetSourceTypeFromGuid");
static_assert(offsetof(LiveLinkBlueprintLibrary_GetSourceTypeFromGuid, SourceGuid) == 0x000000, "Member 'LiveLinkBlueprintLibrary_GetSourceTypeFromGuid::SourceGuid' has a wrong offset!");
static_assert(offsetof(LiveLinkBlueprintLibrary_GetSourceTypeFromGuid, ReturnValue) == 0x000010, "Member 'LiveLinkBlueprintLibrary_GetSourceTypeFromGuid::ReturnValue' has a wrong offset!");

struct LiveLinkBlueprintLibrary_GetSpecificLiveLinkSubjectRole final
{
public:
	struct FLiveLinkSubjectKey                    SubjectKey;
	uint8                                         Pad_14[0x4];
	TSubclassOf<class ULiveLinkRole>              ReturnValue;
};
static_assert(alignof(LiveLinkBlueprintLibrary_GetSpecificLiveLinkSubjectRole) == 0x000008, "Wrong alignment on LiveLinkBlueprintLibrary_GetSpecificLiveLinkSubjectRole");
static_assert(sizeof(LiveLinkBlueprintLibrary_GetSpecificLiveLinkSubjectRole) == 0x000020, "Wrong size on LiveLinkBlueprintLibrary_GetSpecificLiveLinkSubjectRole");
static_assert(offsetof(LiveLinkBlueprintLibrary_GetSpecificLiveLinkSubjectRole, SubjectKey) == 0x000000, "Member 'LiveLinkBlueprintLibrary_GetSpecificLiveLinkSubjectRole::SubjectKey' has a wrong offset!");
static_assert(offsetof(LiveLinkBlueprintLibrary_GetSpecificLiveLinkSubjectRole, ReturnValue) == 0x000018, "Member 'LiveLinkBlueprintLibrary_GetSpecificLiveLinkSubjectRole::ReturnValue' has a wrong offset!");

struct LiveLinkBlueprintLibrary_GetTransformByIndex final
{
public:
	struct FSubjectFrameHandle                    SubjectFrameHandle;
	int32                                         TransformIndex;
	uint8                                         Pad_1C[0x4];
	struct FLiveLinkTransform                     LiveLinkTransform;
};
static_assert(alignof(LiveLinkBlueprintLibrary_GetTransformByIndex) == 0x000008, "Wrong alignment on LiveLinkBlueprintLibrary_GetTransformByIndex");
static_assert(sizeof(LiveLinkBlueprintLibrary_GetTransformByIndex) == 0x000040, "Wrong size on LiveLinkBlueprintLibrary_GetTransformByIndex");
static_assert(offsetof(LiveLinkBlueprintLibrary_GetTransformByIndex, SubjectFrameHandle) == 0x000000, "Member 'LiveLinkBlueprintLibrary_GetTransformByIndex::SubjectFrameHandle' has a wrong offset!");
static_assert(offsetof(LiveLinkBlueprintLibrary_GetTransformByIndex, TransformIndex) == 0x000018, "Member 'LiveLinkBlueprintLibrary_GetTransformByIndex::TransformIndex' has a wrong offset!");
static_assert(offsetof(LiveLinkBlueprintLibrary_GetTransformByIndex, LiveLinkTransform) == 0x000020, "Member 'LiveLinkBlueprintLibrary_GetTransformByIndex::LiveLinkTransform' has a wrong offset!");

struct LiveLinkBlueprintLibrary_GetTransformByName final
{
public:
	struct FSubjectFrameHandle                    SubjectFrameHandle;
	class FName                                   TransformName_0;
	uint8                                         Pad_1C[0x4];
	struct FLiveLinkTransform                     LiveLinkTransform;
};
static_assert(alignof(LiveLinkBlueprintLibrary_GetTransformByName) == 0x000008, "Wrong alignment on LiveLinkBlueprintLibrary_GetTransformByName");
static_assert(sizeof(LiveLinkBlueprintLibrary_GetTransformByName) == 0x000040, "Wrong size on LiveLinkBlueprintLibrary_GetTransformByName");
static_assert(offsetof(LiveLinkBlueprintLibrary_GetTransformByName, SubjectFrameHandle) == 0x000000, "Member 'LiveLinkBlueprintLibrary_GetTransformByName::SubjectFrameHandle' has a wrong offset!");
static_assert(offsetof(LiveLinkBlueprintLibrary_GetTransformByName, TransformName_0) == 0x000018, "Member 'LiveLinkBlueprintLibrary_GetTransformByName::TransformName_0' has a wrong offset!");
static_assert(offsetof(LiveLinkBlueprintLibrary_GetTransformByName, LiveLinkTransform) == 0x000020, "Member 'LiveLinkBlueprintLibrary_GetTransformByName::LiveLinkTransform' has a wrong offset!");

struct LiveLinkBlueprintLibrary_HasParent final
{
public:
	struct FLiveLinkTransform                     LiveLinkTransform;
	bool                                          ReturnValue;
	uint8                                         Pad_21[0x7];
};
static_assert(alignof(LiveLinkBlueprintLibrary_HasParent) == 0x000008, "Wrong alignment on LiveLinkBlueprintLibrary_HasParent");
static_assert(sizeof(LiveLinkBlueprintLibrary_HasParent) == 0x000028, "Wrong size on LiveLinkBlueprintLibrary_HasParent");
static_assert(offsetof(LiveLinkBlueprintLibrary_HasParent, LiveLinkTransform) == 0x000000, "Member 'LiveLinkBlueprintLibrary_HasParent::LiveLinkTransform' has a wrong offset!");
static_assert(offsetof(LiveLinkBlueprintLibrary_HasParent, ReturnValue) == 0x000020, "Member 'LiveLinkBlueprintLibrary_HasParent::ReturnValue' has a wrong offset!");

struct LiveLinkBlueprintLibrary_IsLiveLinkSubjectEnabled final
{
public:
	struct FLiveLinkSubjectName                   SubjectName;
	bool                                          ReturnValue;
	uint8                                         Pad_5[0x3];
};
static_assert(alignof(LiveLinkBlueprintLibrary_IsLiveLinkSubjectEnabled) == 0x000004, "Wrong alignment on LiveLinkBlueprintLibrary_IsLiveLinkSubjectEnabled");
static_assert(sizeof(LiveLinkBlueprintLibrary_IsLiveLinkSubjectEnabled) == 0x000008, "Wrong size on LiveLinkBlueprintLibrary_IsLiveLinkSubjectEnabled");
static_assert(offsetof(LiveLinkBlueprintLibrary_IsLiveLinkSubjectEnabled, SubjectName) == 0x000000, "Member 'LiveLinkBlueprintLibrary_IsLiveLinkSubjectEnabled::SubjectName' has a wrong offset!");
static_assert(offsetof(LiveLinkBlueprintLibrary_IsLiveLinkSubjectEnabled, ReturnValue) == 0x000004, "Member 'LiveLinkBlueprintLibrary_IsLiveLinkSubjectEnabled::ReturnValue' has a wrong offset!");

struct LiveLinkBlueprintLibrary_IsSourceStillValid final
{
public:
	struct FLiveLinkSourceHandle                  SourceHandle;
	bool                                          ReturnValue;
	uint8                                         Pad_19[0x7];
};
static_assert(alignof(LiveLinkBlueprintLibrary_IsSourceStillValid) == 0x000008, "Wrong alignment on LiveLinkBlueprintLibrary_IsSourceStillValid");
static_assert(sizeof(LiveLinkBlueprintLibrary_IsSourceStillValid) == 0x000020, "Wrong size on LiveLinkBlueprintLibrary_IsSourceStillValid");
static_assert(offsetof(LiveLinkBlueprintLibrary_IsSourceStillValid, SourceHandle) == 0x000000, "Member 'LiveLinkBlueprintLibrary_IsSourceStillValid::SourceHandle' has a wrong offset!");
static_assert(offsetof(LiveLinkBlueprintLibrary_IsSourceStillValid, ReturnValue) == 0x000018, "Member 'LiveLinkBlueprintLibrary_IsSourceStillValid::ReturnValue' has a wrong offset!");

struct LiveLinkBlueprintLibrary_IsSpecificLiveLinkSubjectEnabled final
{
public:
	struct FLiveLinkSubjectKey                    SubjectKey;
	bool                                          bForThisFrame;
	bool                                          ReturnValue;
	uint8                                         Pad_16[0x2];
};
static_assert(alignof(LiveLinkBlueprintLibrary_IsSpecificLiveLinkSubjectEnabled) == 0x000004, "Wrong alignment on LiveLinkBlueprintLibrary_IsSpecificLiveLinkSubjectEnabled");
static_assert(sizeof(LiveLinkBlueprintLibrary_IsSpecificLiveLinkSubjectEnabled) == 0x000018, "Wrong size on LiveLinkBlueprintLibrary_IsSpecificLiveLinkSubjectEnabled");
static_assert(offsetof(LiveLinkBlueprintLibrary_IsSpecificLiveLinkSubjectEnabled, SubjectKey) == 0x000000, "Member 'LiveLinkBlueprintLibrary_IsSpecificLiveLinkSubjectEnabled::SubjectKey' has a wrong offset!");
static_assert(offsetof(LiveLinkBlueprintLibrary_IsSpecificLiveLinkSubjectEnabled, bForThisFrame) == 0x000014, "Member 'LiveLinkBlueprintLibrary_IsSpecificLiveLinkSubjectEnabled::bForThisFrame' has a wrong offset!");
static_assert(offsetof(LiveLinkBlueprintLibrary_IsSpecificLiveLinkSubjectEnabled, ReturnValue) == 0x000015, "Member 'LiveLinkBlueprintLibrary_IsSpecificLiveLinkSubjectEnabled::ReturnValue' has a wrong offset!");

struct LiveLinkBlueprintLibrary_NumberOfTransforms final
{
public:
	struct FSubjectFrameHandle                    SubjectFrameHandle;
	int32                                         ReturnValue;
	uint8                                         Pad_1C[0x4];
};
static_assert(alignof(LiveLinkBlueprintLibrary_NumberOfTransforms) == 0x000008, "Wrong alignment on LiveLinkBlueprintLibrary_NumberOfTransforms");
static_assert(sizeof(LiveLinkBlueprintLibrary_NumberOfTransforms) == 0x000020, "Wrong size on LiveLinkBlueprintLibrary_NumberOfTransforms");
static_assert(offsetof(LiveLinkBlueprintLibrary_NumberOfTransforms, SubjectFrameHandle) == 0x000000, "Member 'LiveLinkBlueprintLibrary_NumberOfTransforms::SubjectFrameHandle' has a wrong offset!");
static_assert(offsetof(LiveLinkBlueprintLibrary_NumberOfTransforms, ReturnValue) == 0x000018, "Member 'LiveLinkBlueprintLibrary_NumberOfTransforms::ReturnValue' has a wrong offset!");

struct LiveLinkBlueprintLibrary_ParentBoneSpaceTransform final
{
public:
	struct FLiveLinkTransform                     LiveLinkTransform;
	struct FTransform                             Transform;
};
static_assert(alignof(LiveLinkBlueprintLibrary_ParentBoneSpaceTransform) == 0x000010, "Wrong alignment on LiveLinkBlueprintLibrary_ParentBoneSpaceTransform");
static_assert(sizeof(LiveLinkBlueprintLibrary_ParentBoneSpaceTransform) == 0x000080, "Wrong size on LiveLinkBlueprintLibrary_ParentBoneSpaceTransform");
static_assert(offsetof(LiveLinkBlueprintLibrary_ParentBoneSpaceTransform, LiveLinkTransform) == 0x000000, "Member 'LiveLinkBlueprintLibrary_ParentBoneSpaceTransform::LiveLinkTransform' has a wrong offset!");
static_assert(offsetof(LiveLinkBlueprintLibrary_ParentBoneSpaceTransform, Transform) == 0x000020, "Member 'LiveLinkBlueprintLibrary_ParentBoneSpaceTransform::Transform' has a wrong offset!");

struct LiveLinkBlueprintLibrary_RemoveSource final
{
public:
	struct FLiveLinkSourceHandle                  SourceHandle;
	bool                                          ReturnValue;
	uint8                                         Pad_19[0x7];
};
static_assert(alignof(LiveLinkBlueprintLibrary_RemoveSource) == 0x000008, "Wrong alignment on LiveLinkBlueprintLibrary_RemoveSource");
static_assert(sizeof(LiveLinkBlueprintLibrary_RemoveSource) == 0x000020, "Wrong size on LiveLinkBlueprintLibrary_RemoveSource");
static_assert(offsetof(LiveLinkBlueprintLibrary_RemoveSource, SourceHandle) == 0x000000, "Member 'LiveLinkBlueprintLibrary_RemoveSource::SourceHandle' has a wrong offset!");
static_assert(offsetof(LiveLinkBlueprintLibrary_RemoveSource, ReturnValue) == 0x000018, "Member 'LiveLinkBlueprintLibrary_RemoveSource::ReturnValue' has a wrong offset!");

struct LiveLinkBlueprintLibrary_SetLiveLinkSubjectEnabled final
{
public:
	struct FLiveLinkSubjectKey                    SubjectKey;
	bool                                          bEnabled;
	uint8                                         Pad_15[0x3];
};
static_assert(alignof(LiveLinkBlueprintLibrary_SetLiveLinkSubjectEnabled) == 0x000004, "Wrong alignment on LiveLinkBlueprintLibrary_SetLiveLinkSubjectEnabled");
static_assert(sizeof(LiveLinkBlueprintLibrary_SetLiveLinkSubjectEnabled) == 0x000018, "Wrong size on LiveLinkBlueprintLibrary_SetLiveLinkSubjectEnabled");
static_assert(offsetof(LiveLinkBlueprintLibrary_SetLiveLinkSubjectEnabled, SubjectKey) == 0x000000, "Member 'LiveLinkBlueprintLibrary_SetLiveLinkSubjectEnabled::SubjectKey' has a wrong offset!");
static_assert(offsetof(LiveLinkBlueprintLibrary_SetLiveLinkSubjectEnabled, bEnabled) == 0x000014, "Member 'LiveLinkBlueprintLibrary_SetLiveLinkSubjectEnabled::bEnabled' has a wrong offset!");

struct LiveLinkBlueprintLibrary_TransformName final
{
public:
	struct FLiveLinkTransform                     LiveLinkTransform;
	class FName                                   Name_0;
	uint8                                         Pad_24[0x4];
};
static_assert(alignof(LiveLinkBlueprintLibrary_TransformName) == 0x000008, "Wrong alignment on LiveLinkBlueprintLibrary_TransformName");
static_assert(sizeof(LiveLinkBlueprintLibrary_TransformName) == 0x000028, "Wrong size on LiveLinkBlueprintLibrary_TransformName");
static_assert(offsetof(LiveLinkBlueprintLibrary_TransformName, LiveLinkTransform) == 0x000000, "Member 'LiveLinkBlueprintLibrary_TransformName::LiveLinkTransform' has a wrong offset!");
static_assert(offsetof(LiveLinkBlueprintLibrary_TransformName, Name_0) == 0x000020, "Member 'LiveLinkBlueprintLibrary_TransformName::Name_0' has a wrong offset!");

struct LiveLinkBlueprintLibrary_TransformNames final
{
public:
	struct FSubjectFrameHandle                    SubjectFrameHandle;
	TArray<class FName>                           TransformNames_0;
};
static_assert(alignof(LiveLinkBlueprintLibrary_TransformNames) == 0x000008, "Wrong alignment on LiveLinkBlueprintLibrary_TransformNames");
static_assert(sizeof(LiveLinkBlueprintLibrary_TransformNames) == 0x000028, "Wrong size on LiveLinkBlueprintLibrary_TransformNames");
static_assert(offsetof(LiveLinkBlueprintLibrary_TransformNames, SubjectFrameHandle) == 0x000000, "Member 'LiveLinkBlueprintLibrary_TransformNames::SubjectFrameHandle' has a wrong offset!");
static_assert(offsetof(LiveLinkBlueprintLibrary_TransformNames, TransformNames_0) == 0x000018, "Member 'LiveLinkBlueprintLibrary_TransformNames::TransformNames_0' has a wrong offset!");

struct LiveLinkComponent_GetAvailableSubjectNames final
{
public:
	TArray<class FName>                           SubjectNames;
};
static_assert(alignof(LiveLinkComponent_GetAvailableSubjectNames) == 0x000008, "Wrong alignment on LiveLinkComponent_GetAvailableSubjectNames");
static_assert(sizeof(LiveLinkComponent_GetAvailableSubjectNames) == 0x000010, "Wrong size on LiveLinkComponent_GetAvailableSubjectNames");
static_assert(offsetof(LiveLinkComponent_GetAvailableSubjectNames, SubjectNames) == 0x000000, "Member 'LiveLinkComponent_GetAvailableSubjectNames::SubjectNames' has a wrong offset!");

struct LiveLinkComponent_GetSubjectData final
{
public:
	class FName                                   SubjectName;
	bool                                          bSuccess;
	uint8                                         Pad_5[0x3];
	struct FSubjectFrameHandle                    SubjectFrameHandle;
};
static_assert(alignof(LiveLinkComponent_GetSubjectData) == 0x000008, "Wrong alignment on LiveLinkComponent_GetSubjectData");
static_assert(sizeof(LiveLinkComponent_GetSubjectData) == 0x000020, "Wrong size on LiveLinkComponent_GetSubjectData");
static_assert(offsetof(LiveLinkComponent_GetSubjectData, SubjectName) == 0x000000, "Member 'LiveLinkComponent_GetSubjectData::SubjectName' has a wrong offset!");
static_assert(offsetof(LiveLinkComponent_GetSubjectData, bSuccess) == 0x000004, "Member 'LiveLinkComponent_GetSubjectData::bSuccess' has a wrong offset!");
static_assert(offsetof(LiveLinkComponent_GetSubjectData, SubjectFrameHandle) == 0x000008, "Member 'LiveLinkComponent_GetSubjectData::SubjectFrameHandle' has a wrong offset!");

struct LiveLinkComponent_GetSubjectDataAtSceneTime final
{
public:
	class FName                                   SubjectName;
	struct FTimecode                              SceneTime;
	bool                                          bSuccess;
	uint8                                         Pad_19[0x7];
	struct FSubjectFrameHandle                    SubjectFrameHandle;
};
static_assert(alignof(LiveLinkComponent_GetSubjectDataAtSceneTime) == 0x000008, "Wrong alignment on LiveLinkComponent_GetSubjectDataAtSceneTime");
static_assert(sizeof(LiveLinkComponent_GetSubjectDataAtSceneTime) == 0x000038, "Wrong size on LiveLinkComponent_GetSubjectDataAtSceneTime");
static_assert(offsetof(LiveLinkComponent_GetSubjectDataAtSceneTime, SubjectName) == 0x000000, "Member 'LiveLinkComponent_GetSubjectDataAtSceneTime::SubjectName' has a wrong offset!");
static_assert(offsetof(LiveLinkComponent_GetSubjectDataAtSceneTime, SceneTime) == 0x000004, "Member 'LiveLinkComponent_GetSubjectDataAtSceneTime::SceneTime' has a wrong offset!");
static_assert(offsetof(LiveLinkComponent_GetSubjectDataAtSceneTime, bSuccess) == 0x000018, "Member 'LiveLinkComponent_GetSubjectDataAtSceneTime::bSuccess' has a wrong offset!");
static_assert(offsetof(LiveLinkComponent_GetSubjectDataAtSceneTime, SubjectFrameHandle) == 0x000020, "Member 'LiveLinkComponent_GetSubjectDataAtSceneTime::SubjectFrameHandle' has a wrong offset!");

struct LiveLinkComponent_GetSubjectDataAtWorldTime final
{
public:
	class FName                                   SubjectName;
	float                                         WorldTime;
	bool                                          bSuccess;
	uint8                                         Pad_9[0x7];
	struct FSubjectFrameHandle                    SubjectFrameHandle;
};
static_assert(alignof(LiveLinkComponent_GetSubjectDataAtWorldTime) == 0x000008, "Wrong alignment on LiveLinkComponent_GetSubjectDataAtWorldTime");
static_assert(sizeof(LiveLinkComponent_GetSubjectDataAtWorldTime) == 0x000028, "Wrong size on LiveLinkComponent_GetSubjectDataAtWorldTime");
static_assert(offsetof(LiveLinkComponent_GetSubjectDataAtWorldTime, SubjectName) == 0x000000, "Member 'LiveLinkComponent_GetSubjectDataAtWorldTime::SubjectName' has a wrong offset!");
static_assert(offsetof(LiveLinkComponent_GetSubjectDataAtWorldTime, WorldTime) == 0x000004, "Member 'LiveLinkComponent_GetSubjectDataAtWorldTime::WorldTime' has a wrong offset!");
static_assert(offsetof(LiveLinkComponent_GetSubjectDataAtWorldTime, bSuccess) == 0x000008, "Member 'LiveLinkComponent_GetSubjectDataAtWorldTime::bSuccess' has a wrong offset!");
static_assert(offsetof(LiveLinkComponent_GetSubjectDataAtWorldTime, SubjectFrameHandle) == 0x000010, "Member 'LiveLinkComponent_GetSubjectDataAtWorldTime::SubjectFrameHandle' has a wrong offset!");

struct LiveLinkMessageBusFinder_ConnectToProvider final
{
public:
	struct FProviderPollResult                    Provider;
	struct FLiveLinkSourceHandle                  SourceHandle;
};
static_assert(alignof(LiveLinkMessageBusFinder_ConnectToProvider) == 0x000008, "Wrong alignment on LiveLinkMessageBusFinder_ConnectToProvider");
static_assert(sizeof(LiveLinkMessageBusFinder_ConnectToProvider) == 0x000058, "Wrong size on LiveLinkMessageBusFinder_ConnectToProvider");
static_assert(offsetof(LiveLinkMessageBusFinder_ConnectToProvider, Provider) == 0x000000, "Member 'LiveLinkMessageBusFinder_ConnectToProvider::Provider' has a wrong offset!");
static_assert(offsetof(LiveLinkMessageBusFinder_ConnectToProvider, SourceHandle) == 0x000040, "Member 'LiveLinkMessageBusFinder_ConnectToProvider::SourceHandle' has a wrong offset!");

struct LiveLinkMessageBusFinder_ConstructMessageBusFinder final
{
public:
	class ULiveLinkMessageBusFinder*              ReturnValue;
};
static_assert(alignof(LiveLinkMessageBusFinder_ConstructMessageBusFinder) == 0x000008, "Wrong alignment on LiveLinkMessageBusFinder_ConstructMessageBusFinder");
static_assert(sizeof(LiveLinkMessageBusFinder_ConstructMessageBusFinder) == 0x000008, "Wrong size on LiveLinkMessageBusFinder_ConstructMessageBusFinder");
static_assert(offsetof(LiveLinkMessageBusFinder_ConstructMessageBusFinder, ReturnValue) == 0x000000, "Member 'LiveLinkMessageBusFinder_ConstructMessageBusFinder::ReturnValue' has a wrong offset!");

struct LiveLinkMessageBusFinder_GetAvailableProviders final
{
public:
	class UObject*                                WorldContextObject;
	struct FLatentActionInfo                      LatentInfo;
	float                                         Duration;
	uint8                                         Pad_24[0x4];
	TArray<struct FProviderPollResult>            AvailableProviders;
};
static_assert(alignof(LiveLinkMessageBusFinder_GetAvailableProviders) == 0x000008, "Wrong alignment on LiveLinkMessageBusFinder_GetAvailableProviders");
static_assert(sizeof(LiveLinkMessageBusFinder_GetAvailableProviders) == 0x000038, "Wrong size on LiveLinkMessageBusFinder_GetAvailableProviders");
static_assert(offsetof(LiveLinkMessageBusFinder_GetAvailableProviders, WorldContextObject) == 0x000000, "Member 'LiveLinkMessageBusFinder_GetAvailableProviders::WorldContextObject' has a wrong offset!");
static_assert(offsetof(LiveLinkMessageBusFinder_GetAvailableProviders, LatentInfo) == 0x000008, "Member 'LiveLinkMessageBusFinder_GetAvailableProviders::LatentInfo' has a wrong offset!");
static_assert(offsetof(LiveLinkMessageBusFinder_GetAvailableProviders, Duration) == 0x000020, "Member 'LiveLinkMessageBusFinder_GetAvailableProviders::Duration' has a wrong offset!");
static_assert(offsetof(LiveLinkMessageBusFinder_GetAvailableProviders, AvailableProviders) == 0x000028, "Member 'LiveLinkMessageBusFinder_GetAvailableProviders::AvailableProviders' has a wrong offset!");

struct LiveLinkPreset_ApplyToClientLatent final
{
public:
	class UObject*                                WorldContextObject;
	struct FLatentActionInfo                      LatentInfo;
};
static_assert(alignof(LiveLinkPreset_ApplyToClientLatent) == 0x000008, "Wrong alignment on LiveLinkPreset_ApplyToClientLatent");
static_assert(sizeof(LiveLinkPreset_ApplyToClientLatent) == 0x000020, "Wrong size on LiveLinkPreset_ApplyToClientLatent");
static_assert(offsetof(LiveLinkPreset_ApplyToClientLatent, WorldContextObject) == 0x000000, "Member 'LiveLinkPreset_ApplyToClientLatent::WorldContextObject' has a wrong offset!");
static_assert(offsetof(LiveLinkPreset_ApplyToClientLatent, LatentInfo) == 0x000008, "Member 'LiveLinkPreset_ApplyToClientLatent::LatentInfo' has a wrong offset!");

struct LiveLinkPreset_AddToClient final
{
public:
	bool                                          bRecreatePresets;
	bool                                          ReturnValue;
};
static_assert(alignof(LiveLinkPreset_AddToClient) == 0x000001, "Wrong alignment on LiveLinkPreset_AddToClient");
static_assert(sizeof(LiveLinkPreset_AddToClient) == 0x000002, "Wrong size on LiveLinkPreset_AddToClient");
static_assert(offsetof(LiveLinkPreset_AddToClient, bRecreatePresets) == 0x000000, "Member 'LiveLinkPreset_AddToClient::bRecreatePresets' has a wrong offset!");
static_assert(offsetof(LiveLinkPreset_AddToClient, ReturnValue) == 0x000001, "Member 'LiveLinkPreset_AddToClient::ReturnValue' has a wrong offset!");

struct LiveLinkPreset_ApplyToClient final
{
public:
	bool                                          ReturnValue;
};
static_assert(alignof(LiveLinkPreset_ApplyToClient) == 0x000001, "Wrong alignment on LiveLinkPreset_ApplyToClient");
static_assert(sizeof(LiveLinkPreset_ApplyToClient) == 0x000001, "Wrong size on LiveLinkPreset_ApplyToClient");
static_assert(offsetof(LiveLinkPreset_ApplyToClient, ReturnValue) == 0x000000, "Member 'LiveLinkPreset_ApplyToClient::ReturnValue' has a wrong offset!");

struct LiveLinkBlueprintVirtualSubject_UpdateVirtualSubjectFrameData_Internal final
{
public:
	struct FLiveLinkBaseFrameData                 InStruct;
	bool                                          bInShouldStampCurrentTime;
	bool                                          ReturnValue;
	uint8                                         Pad_A2[0x6];
};
static_assert(alignof(LiveLinkBlueprintVirtualSubject_UpdateVirtualSubjectFrameData_Internal) == 0x000008, "Wrong alignment on LiveLinkBlueprintVirtualSubject_UpdateVirtualSubjectFrameData_Internal");
static_assert(sizeof(LiveLinkBlueprintVirtualSubject_UpdateVirtualSubjectFrameData_Internal) == 0x0000A8, "Wrong size on LiveLinkBlueprintVirtualSubject_UpdateVirtualSubjectFrameData_Internal");
static_assert(offsetof(LiveLinkBlueprintVirtualSubject_UpdateVirtualSubjectFrameData_Internal, InStruct) == 0x000000, "Member 'LiveLinkBlueprintVirtualSubject_UpdateVirtualSubjectFrameData_Internal::InStruct' has a wrong offset!");
static_assert(offsetof(LiveLinkBlueprintVirtualSubject_UpdateVirtualSubjectFrameData_Internal, bInShouldStampCurrentTime) == 0x0000A0, "Member 'LiveLinkBlueprintVirtualSubject_UpdateVirtualSubjectFrameData_Internal::bInShouldStampCurrentTime' has a wrong offset!");
static_assert(offsetof(LiveLinkBlueprintVirtualSubject_UpdateVirtualSubjectFrameData_Internal, ReturnValue) == 0x0000A1, "Member 'LiveLinkBlueprintVirtualSubject_UpdateVirtualSubjectFrameData_Internal::ReturnValue' has a wrong offset!");

struct LiveLinkBlueprintVirtualSubject_UpdateVirtualSubjectStaticData_Internal final
{
public:
	struct FLiveLinkBaseStaticData                InStruct;
	bool                                          ReturnValue;
	uint8                                         Pad_11[0x7];
};
static_assert(alignof(LiveLinkBlueprintVirtualSubject_UpdateVirtualSubjectStaticData_Internal) == 0x000008, "Wrong alignment on LiveLinkBlueprintVirtualSubject_UpdateVirtualSubjectStaticData_Internal");
static_assert(sizeof(LiveLinkBlueprintVirtualSubject_UpdateVirtualSubjectStaticData_Internal) == 0x000018, "Wrong size on LiveLinkBlueprintVirtualSubject_UpdateVirtualSubjectStaticData_Internal");
static_assert(offsetof(LiveLinkBlueprintVirtualSubject_UpdateVirtualSubjectStaticData_Internal, InStruct) == 0x000000, "Member 'LiveLinkBlueprintVirtualSubject_UpdateVirtualSubjectStaticData_Internal::InStruct' has a wrong offset!");
static_assert(offsetof(LiveLinkBlueprintVirtualSubject_UpdateVirtualSubjectStaticData_Internal, ReturnValue) == 0x000010, "Member 'LiveLinkBlueprintVirtualSubject_UpdateVirtualSubjectStaticData_Internal::ReturnValue' has a wrong offset!");

}
