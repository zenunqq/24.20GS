#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "WorldConditions_structs.hpp"
#include "GameplayTags_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "StructUtils_structs.hpp"
#include "MassEntity_structs.hpp"

namespace SDK
{

enum class ESmartObjectChangeReason : uint8
{
	None                                     = 0,
	OnEvent                                  = 1,
	OnTagAdded                               = 2,
	OnTagRemoved                             = 3,
	OnClaimed                                = 4,
	OnOccupied                               = 5,
	OnReleased                               = 6,
	OnSlotEnabled                            = 7,
	OnSlotDisabled                           = 8,
	OnObjectEnabled                          = 9,
	OnObjectDisabled                         = 10,
	ESmartObjectChangeReason_MAX             = 11,
};

enum class ESmartObjectSlotShape : uint8
{
	Circle                                   = 0,
	Rectangle                                = 1,
	ESmartObjectSlotShape_MAX                = 2,
};

enum class ESmartObjectSlotState : uint8
{
	Invalid                                  = 0,
	Free                                     = 1,
	Claimed                                  = 2,
	Occupied                                 = 3,
	Disabled                                 = 4,
	ESmartObjectSlotState_MAX                = 5,
};

enum class EFSmartObjectSlotEntrySelectionMethod : uint8
{
	First                                    = 0,
	NearestToSearchLocation                  = 1,
	FSmartObjectSlotEntrySelectionMethod_MAX = 2,
};

enum class ESmartObjectCollectionRegistrationResult : uint8
{
	Failed_InvalidCollection                 = 0,
	Failed_AlreadyRegistered                 = 1,
	Failed_NotFromPersistentLevel            = 2,
	Succeeded                                = 3,
	ESmartObjectCollectionRegistrationResult_MAX = 4,
};

enum class ESmartObjectUnregistrationMode : uint8
{
	KeepRuntimeInstanceActiveIfPartOfCollection = 0,
	DestroyRuntimeInstance                   = 1,
	ESmartObjectUnregistrationMode_MAX       = 2,
};

enum class ESmartObjectTagMergingPolicy : uint8
{
	Combine                                  = 0,
	Override                                 = 1,
	ESmartObjectTagMergingPolicy_MAX         = 2,
};

enum class ESmartObjectTagFilteringPolicy : uint8
{
	NoFilter                                 = 0,
	Combine                                  = 1,
	Override                                 = 2,
	ESmartObjectTagFilteringPolicy_MAX       = 3,
};

struct alignas(0x08) FSmartObjectSlotDefinitionData
{
public:
	uint8                                         Pad_0[0x8];
};
static_assert(alignof(FSmartObjectSlotDefinitionData) == 0x000008, "Wrong alignment on FSmartObjectSlotDefinitionData");
static_assert(sizeof(FSmartObjectSlotDefinitionData) == 0x000008, "Wrong size on FSmartObjectSlotDefinitionData");

struct FSmartObjectSlotAnnotation : public FSmartObjectSlotDefinitionData
{
};
static_assert(alignof(FSmartObjectSlotAnnotation) == 0x000008, "Wrong alignment on FSmartObjectSlotAnnotation");
static_assert(sizeof(FSmartObjectSlotAnnotation) == 0x000008, "Wrong size on FSmartObjectSlotAnnotation");

struct FSmartObjectSlotEntryAnnotation final : public FSmartObjectSlotAnnotation
{
public:
	struct FVector3f                              Offset;
	struct FRotator3f                             Rotation;
	struct FGameplayTag                           tag;
	uint8                                         bIsEntry : 1;
	uint8                                         bIsExit : 1;
	uint8                                         Pad_25[0x3];
};
static_assert(alignof(FSmartObjectSlotEntryAnnotation) == 0x000008, "Wrong alignment on FSmartObjectSlotEntryAnnotation");
static_assert(sizeof(FSmartObjectSlotEntryAnnotation) == 0x000028, "Wrong size on FSmartObjectSlotEntryAnnotation");
static_assert(offsetof(FSmartObjectSlotEntryAnnotation, Offset) == 0x000008, "Member 'FSmartObjectSlotEntryAnnotation::Offset' has a wrong offset!");
static_assert(offsetof(FSmartObjectSlotEntryAnnotation, Rotation) == 0x000014, "Member 'FSmartObjectSlotEntryAnnotation::Rotation' has a wrong offset!");
static_assert(offsetof(FSmartObjectSlotEntryAnnotation, tag) == 0x000020, "Member 'FSmartObjectSlotEntryAnnotation::tag' has a wrong offset!");

struct alignas(0x10) FSmartObjectRuntime final
{
public:
	struct FWorldConditionQueryState              PreconditionState;
	uint8                                         Pad_30[0x10];
	class USmartObjectDefinition*                 Definition;
	TWeakObjectPtr<class USmartObjectComponent>   OwnerComponent;
	uint8                                         Pad_50[0xB0];
	struct FInstancedStruct                       SpatialEntryData;
	uint8                                         Pad_110[0x10];
};
static_assert(alignof(FSmartObjectRuntime) == 0x000010, "Wrong alignment on FSmartObjectRuntime");
static_assert(sizeof(FSmartObjectRuntime) == 0x000120, "Wrong size on FSmartObjectRuntime");
static_assert(offsetof(FSmartObjectRuntime, PreconditionState) == 0x000000, "Member 'FSmartObjectRuntime::PreconditionState' has a wrong offset!");
static_assert(offsetof(FSmartObjectRuntime, Definition) == 0x000040, "Member 'FSmartObjectRuntime::Definition' has a wrong offset!");
static_assert(offsetof(FSmartObjectRuntime, OwnerComponent) == 0x000048, "Member 'FSmartObjectRuntime::OwnerComponent' has a wrong offset!");
static_assert(offsetof(FSmartObjectRuntime, SpatialEntryData) == 0x000100, "Member 'FSmartObjectRuntime::SpatialEntryData' has a wrong offset!");

struct FSmartObjectHandle final
{
public:
	uint32                                        ID;
};
static_assert(alignof(FSmartObjectHandle) == 0x000004, "Wrong alignment on FSmartObjectHandle");
static_assert(sizeof(FSmartObjectHandle) == 0x000004, "Wrong size on FSmartObjectHandle");
static_assert(offsetof(FSmartObjectHandle, ID) == 0x000000, "Member 'FSmartObjectHandle::ID' has a wrong offset!");

struct alignas(0x08) FSmartObjectSlotHandle final
{
public:
	uint8                                         Pad_0[0x8];
};
static_assert(alignof(FSmartObjectSlotHandle) == 0x000008, "Wrong alignment on FSmartObjectSlotHandle");
static_assert(sizeof(FSmartObjectSlotHandle) == 0x000008, "Wrong size on FSmartObjectSlotHandle");

struct FSmartObjectEventData final
{
public:
	struct FSmartObjectHandle                     SmartObjectHandle;
	uint8                                         Pad_4[0x4];
	struct FSmartObjectSlotHandle                 SlotHandle;
	ESmartObjectChangeReason                      Reason;
	uint8                                         Pad_11[0x3];
	struct FGameplayTag                           tag;
	uint8                                         Pad_18[0x10];
};
static_assert(alignof(FSmartObjectEventData) == 0x000008, "Wrong alignment on FSmartObjectEventData");
static_assert(sizeof(FSmartObjectEventData) == 0x000028, "Wrong size on FSmartObjectEventData");
static_assert(offsetof(FSmartObjectEventData, SmartObjectHandle) == 0x000000, "Member 'FSmartObjectEventData::SmartObjectHandle' has a wrong offset!");
static_assert(offsetof(FSmartObjectEventData, SlotHandle) == 0x000008, "Member 'FSmartObjectEventData::SlotHandle' has a wrong offset!");
static_assert(offsetof(FSmartObjectEventData, Reason) == 0x000010, "Member 'FSmartObjectEventData::Reason' has a wrong offset!");
static_assert(offsetof(FSmartObjectEventData, tag) == 0x000014, "Member 'FSmartObjectEventData::tag' has a wrong offset!");

struct FSmartObjectUserHandle final
{
public:
	uint32                                        ID;
};
static_assert(alignof(FSmartObjectUserHandle) == 0x000004, "Wrong alignment on FSmartObjectUserHandle");
static_assert(sizeof(FSmartObjectUserHandle) == 0x000004, "Wrong size on FSmartObjectUserHandle");
static_assert(offsetof(FSmartObjectUserHandle, ID) == 0x000000, "Member 'FSmartObjectUserHandle::ID' has a wrong offset!");

struct FSmartObjectWorldConditionBase : public FWorldConditionBase
{
};
static_assert(alignof(FSmartObjectWorldConditionBase) == 0x000008, "Wrong alignment on FSmartObjectWorldConditionBase");
static_assert(sizeof(FSmartObjectWorldConditionBase) == 0x000010, "Wrong size on FSmartObjectWorldConditionBase");

struct FSmartObjectSlotReference final
{
public:
	uint8                                         Index;
};
static_assert(alignof(FSmartObjectSlotReference) == 0x000001, "Wrong alignment on FSmartObjectSlotReference");
static_assert(sizeof(FSmartObjectSlotReference) == 0x000001, "Wrong size on FSmartObjectSlotReference");
static_assert(offsetof(FSmartObjectSlotReference, Index) == 0x000000, "Member 'FSmartObjectSlotReference::Index' has a wrong offset!");

struct FSmartObjectSlotLinkAnnotation final : public FSmartObjectSlotAnnotation
{
public:
	struct FGameplayTag                           tag;
	struct FSmartObjectSlotReference              LinkedSlot;
	uint8                                         Pad_D[0x3];
};
static_assert(alignof(FSmartObjectSlotLinkAnnotation) == 0x000008, "Wrong alignment on FSmartObjectSlotLinkAnnotation");
static_assert(sizeof(FSmartObjectSlotLinkAnnotation) == 0x000010, "Wrong size on FSmartObjectSlotLinkAnnotation");
static_assert(offsetof(FSmartObjectSlotLinkAnnotation, tag) == 0x000008, "Member 'FSmartObjectSlotLinkAnnotation::tag' has a wrong offset!");
static_assert(offsetof(FSmartObjectSlotLinkAnnotation, LinkedSlot) == 0x00000C, "Member 'FSmartObjectSlotLinkAnnotation::LinkedSlot' has a wrong offset!");

struct FSmartObjectComponentInstanceData final : public FActorComponentInstanceData
{
public:
	class USmartObjectDefinition*                 DefinitionAsset;
};
static_assert(alignof(FSmartObjectComponentInstanceData) == 0x000008, "Wrong alignment on FSmartObjectComponentInstanceData");
static_assert(sizeof(FSmartObjectComponentInstanceData) == 0x000070, "Wrong size on FSmartObjectComponentInstanceData");
static_assert(offsetof(FSmartObjectComponentInstanceData, DefinitionAsset) == 0x000068, "Member 'FSmartObjectComponentInstanceData::DefinitionAsset' has a wrong offset!");

struct FSmartObjectSlotDefinition final
{
public:
	bool                                          bEnabled;
	uint8                                         Pad_1[0x7];
	struct FGameplayTagContainer                  RuntimeTags;
	struct FGameplayTagQuery                      UserTagFilter;
	struct FGameplayTagContainer                  ActivityTags;
	struct FWorldConditionQueryDefinition         SelectionPreconditions;
	struct FVector                                Offset;
	struct FRotator                               Rotation;
	TArray<struct FInstancedStruct>               Data;
	TArray<class USmartObjectBehaviorDefinition*> BehaviorDefinitions;
};
static_assert(alignof(FSmartObjectSlotDefinition) == 0x000008, "Wrong alignment on FSmartObjectSlotDefinition");
static_assert(sizeof(FSmartObjectSlotDefinition) == 0x0000F8, "Wrong size on FSmartObjectSlotDefinition");
static_assert(offsetof(FSmartObjectSlotDefinition, bEnabled) == 0x000000, "Member 'FSmartObjectSlotDefinition::bEnabled' has a wrong offset!");
static_assert(offsetof(FSmartObjectSlotDefinition, RuntimeTags) == 0x000008, "Member 'FSmartObjectSlotDefinition::RuntimeTags' has a wrong offset!");
static_assert(offsetof(FSmartObjectSlotDefinition, UserTagFilter) == 0x000028, "Member 'FSmartObjectSlotDefinition::UserTagFilter' has a wrong offset!");
static_assert(offsetof(FSmartObjectSlotDefinition, ActivityTags) == 0x000070, "Member 'FSmartObjectSlotDefinition::ActivityTags' has a wrong offset!");
static_assert(offsetof(FSmartObjectSlotDefinition, SelectionPreconditions) == 0x000090, "Member 'FSmartObjectSlotDefinition::SelectionPreconditions' has a wrong offset!");
static_assert(offsetof(FSmartObjectSlotDefinition, Offset) == 0x0000A8, "Member 'FSmartObjectSlotDefinition::Offset' has a wrong offset!");
static_assert(offsetof(FSmartObjectSlotDefinition, Rotation) == 0x0000C0, "Member 'FSmartObjectSlotDefinition::Rotation' has a wrong offset!");
static_assert(offsetof(FSmartObjectSlotDefinition, Data) == 0x0000D8, "Member 'FSmartObjectSlotDefinition::Data' has a wrong offset!");
static_assert(offsetof(FSmartObjectSlotDefinition, BehaviorDefinitions) == 0x0000E8, "Member 'FSmartObjectSlotDefinition::BehaviorDefinitions' has a wrong offset!");

struct FSmartObjectSlotDefinitionFragment final : public FMassSharedFragment
{
public:
	class USmartObjectDefinition*                 SmartObjectDefinition;
	uint8                                         Pad_8[0x8];
};
static_assert(alignof(FSmartObjectSlotDefinitionFragment) == 0x000008, "Wrong alignment on FSmartObjectSlotDefinitionFragment");
static_assert(sizeof(FSmartObjectSlotDefinitionFragment) == 0x000010, "Wrong size on FSmartObjectSlotDefinitionFragment");
static_assert(offsetof(FSmartObjectSlotDefinitionFragment, SmartObjectDefinition) == 0x000000, "Member 'FSmartObjectSlotDefinitionFragment::SmartObjectDefinition' has a wrong offset!");

struct FSmartObjectSpatialEntryData
{
public:
	uint8                                         Pad_0[0x1];
};
static_assert(alignof(FSmartObjectSpatialEntryData) == 0x000001, "Wrong alignment on FSmartObjectSpatialEntryData");
static_assert(sizeof(FSmartObjectSpatialEntryData) == 0x000001, "Wrong size on FSmartObjectSpatialEntryData");

struct alignas(0x04) FSmartObjectHashGridEntryData final : public FSmartObjectSpatialEntryData
{
public:
	uint8                                         Pad_1[0xB];
};
static_assert(alignof(FSmartObjectHashGridEntryData) == 0x000004, "Wrong alignment on FSmartObjectHashGridEntryData");
static_assert(sizeof(FSmartObjectHashGridEntryData) == 0x00000C, "Wrong size on FSmartObjectHashGridEntryData");

struct alignas(0x08) FSmartObjectOctreeEntryData final : public FSmartObjectSpatialEntryData
{
public:
	uint8                                         Pad_1[0xF];
};
static_assert(alignof(FSmartObjectOctreeEntryData) == 0x000008, "Wrong alignment on FSmartObjectOctreeEntryData");
static_assert(sizeof(FSmartObjectOctreeEntryData) == 0x000010, "Wrong size on FSmartObjectOctreeEntryData");

struct FSmartObjectCollectionEntry final
{
public:
	struct FGameplayTagContainer                  Tags;
	struct FSoftObjectPath                        Path;
	uint8                                         Pad_38[0x8];
	struct FTransform                             Transform;
	struct FBox                                   Bounds;
	struct FSmartObjectHandle                     Handle;
	uint32                                        DefinitionIdx;
};
static_assert(alignof(FSmartObjectCollectionEntry) == 0x000010, "Wrong alignment on FSmartObjectCollectionEntry");
static_assert(sizeof(FSmartObjectCollectionEntry) == 0x0000E0, "Wrong size on FSmartObjectCollectionEntry");
static_assert(offsetof(FSmartObjectCollectionEntry, Tags) == 0x000000, "Member 'FSmartObjectCollectionEntry::Tags' has a wrong offset!");
static_assert(offsetof(FSmartObjectCollectionEntry, Path) == 0x000020, "Member 'FSmartObjectCollectionEntry::Path' has a wrong offset!");
static_assert(offsetof(FSmartObjectCollectionEntry, Transform) == 0x000040, "Member 'FSmartObjectCollectionEntry::Transform' has a wrong offset!");
static_assert(offsetof(FSmartObjectCollectionEntry, Bounds) == 0x0000A0, "Member 'FSmartObjectCollectionEntry::Bounds' has a wrong offset!");
static_assert(offsetof(FSmartObjectCollectionEntry, Handle) == 0x0000D8, "Member 'FSmartObjectCollectionEntry::Handle' has a wrong offset!");
static_assert(offsetof(FSmartObjectCollectionEntry, DefinitionIdx) == 0x0000DC, "Member 'FSmartObjectCollectionEntry::DefinitionIdx' has a wrong offset!");

struct FSmartObjectContainer final
{
public:
	struct FBox                                   Bounds;
	TArray<struct FSmartObjectCollectionEntry>    CollectionEntries;
	TMap<struct FSmartObjectHandle, struct FSoftObjectPath> RegisteredIdToObjectMap;
	TArray<class USmartObjectDefinition*>         Definitions;
	class UObject*                                Owner;
};
static_assert(alignof(FSmartObjectContainer) == 0x000008, "Wrong alignment on FSmartObjectContainer");
static_assert(sizeof(FSmartObjectContainer) == 0x0000B0, "Wrong size on FSmartObjectContainer");
static_assert(offsetof(FSmartObjectContainer, Bounds) == 0x000000, "Member 'FSmartObjectContainer::Bounds' has a wrong offset!");
static_assert(offsetof(FSmartObjectContainer, CollectionEntries) == 0x000038, "Member 'FSmartObjectContainer::CollectionEntries' has a wrong offset!");
static_assert(offsetof(FSmartObjectContainer, RegisteredIdToObjectMap) == 0x000048, "Member 'FSmartObjectContainer::RegisteredIdToObjectMap' has a wrong offset!");
static_assert(offsetof(FSmartObjectContainer, Definitions) == 0x000098, "Member 'FSmartObjectContainer::Definitions' has a wrong offset!");
static_assert(offsetof(FSmartObjectContainer, Owner) == 0x0000A8, "Member 'FSmartObjectContainer::Owner' has a wrong offset!");

struct FSmartObjectClaimHandle final
{
public:
	struct FSmartObjectHandle                     SmartObjectHandle;
	uint8                                         Pad_4[0x4];
	struct FSmartObjectSlotHandle                 SlotHandle;
	struct FSmartObjectUserHandle                 UserHandle;
	uint8                                         Pad_14[0x4];
};
static_assert(alignof(FSmartObjectClaimHandle) == 0x000008, "Wrong alignment on FSmartObjectClaimHandle");
static_assert(sizeof(FSmartObjectClaimHandle) == 0x000018, "Wrong size on FSmartObjectClaimHandle");
static_assert(offsetof(FSmartObjectClaimHandle, SmartObjectHandle) == 0x000000, "Member 'FSmartObjectClaimHandle::SmartObjectHandle' has a wrong offset!");
static_assert(offsetof(FSmartObjectClaimHandle, SlotHandle) == 0x000008, "Member 'FSmartObjectClaimHandle::SlotHandle' has a wrong offset!");
static_assert(offsetof(FSmartObjectClaimHandle, UserHandle) == 0x000010, "Member 'FSmartObjectClaimHandle::UserHandle' has a wrong offset!");

#pragma pack(push, 0x1)
struct alignas(0x01) FSmartObjectSlotStateData : public FMassFragment
{
};
#pragma pack(pop)
static_assert(alignof(FSmartObjectSlotStateData) == 0x000001, "Wrong alignment on FSmartObjectSlotStateData");
static_assert(sizeof(FSmartObjectSlotStateData) == 0x000001, "Wrong size on FSmartObjectSlotStateData");

struct FSmartObjectSlotTransform final : public FSmartObjectSlotStateData
{
public:
	struct FTransform                             Transform;
};
static_assert(alignof(FSmartObjectSlotTransform) == 0x000010, "Wrong alignment on FSmartObjectSlotTransform");
static_assert(sizeof(FSmartObjectSlotTransform) == 0x000060, "Wrong size on FSmartObjectSlotTransform");
static_assert(offsetof(FSmartObjectSlotTransform, Transform) == 0x000000, "Member 'FSmartObjectSlotTransform::Transform' has a wrong offset!");

struct FSmartObjectRuntimeSlot final
{
public:
	uint8                                         Pad_0[0x50];
	struct FWorldConditionQueryState              PreconditionState;
	uint8                                         Pad_80[0x8];
};
static_assert(alignof(FSmartObjectRuntimeSlot) == 0x000008, "Wrong alignment on FSmartObjectRuntimeSlot");
static_assert(sizeof(FSmartObjectRuntimeSlot) == 0x000088, "Wrong size on FSmartObjectRuntimeSlot");
static_assert(offsetof(FSmartObjectRuntimeSlot, PreconditionState) == 0x000050, "Member 'FSmartObjectRuntimeSlot::PreconditionState' has a wrong offset!");

struct alignas(0x08) FSmartObjectSlotView final
{
public:
	uint8                                         Pad_0[0x28];
};
static_assert(alignof(FSmartObjectSlotView) == 0x000008, "Wrong alignment on FSmartObjectSlotView");
static_assert(sizeof(FSmartObjectSlotView) == 0x000028, "Wrong size on FSmartObjectSlotView");

struct alignas(0x10) FSmartObjectRequestFilter final
{
public:
	class AActor*                                 UserActor;
	struct FGameplayTagContainer                  UserTags;
	struct FGameplayTagQuery                      ActivityRequirements;
	TSubclassOf<class USmartObjectBehaviorDefinition> BehaviorDefinitionClass;
	TArray<TSubclassOf<class USmartObjectBehaviorDefinition>> BehaviorDefinitionClasses;
	uint8                                         Pad_88[0x68];
};
static_assert(alignof(FSmartObjectRequestFilter) == 0x000010, "Wrong alignment on FSmartObjectRequestFilter");
static_assert(sizeof(FSmartObjectRequestFilter) == 0x0000F0, "Wrong size on FSmartObjectRequestFilter");
static_assert(offsetof(FSmartObjectRequestFilter, UserActor) == 0x000000, "Member 'FSmartObjectRequestFilter::UserActor' has a wrong offset!");
static_assert(offsetof(FSmartObjectRequestFilter, UserTags) == 0x000008, "Member 'FSmartObjectRequestFilter::UserTags' has a wrong offset!");
static_assert(offsetof(FSmartObjectRequestFilter, ActivityRequirements) == 0x000028, "Member 'FSmartObjectRequestFilter::ActivityRequirements' has a wrong offset!");
static_assert(offsetof(FSmartObjectRequestFilter, BehaviorDefinitionClass) == 0x000070, "Member 'FSmartObjectRequestFilter::BehaviorDefinitionClass' has a wrong offset!");
static_assert(offsetof(FSmartObjectRequestFilter, BehaviorDefinitionClasses) == 0x000078, "Member 'FSmartObjectRequestFilter::BehaviorDefinitionClasses' has a wrong offset!");

struct FSmartObjectRequest final
{
public:
	struct FBox                                   QueryBox;
	uint8                                         Pad_38[0x8];
	struct FSmartObjectRequestFilter              Filter;
};
static_assert(alignof(FSmartObjectRequest) == 0x000010, "Wrong alignment on FSmartObjectRequest");
static_assert(sizeof(FSmartObjectRequest) == 0x000130, "Wrong size on FSmartObjectRequest");
static_assert(offsetof(FSmartObjectRequest, QueryBox) == 0x000000, "Member 'FSmartObjectRequest::QueryBox' has a wrong offset!");
static_assert(offsetof(FSmartObjectRequest, Filter) == 0x000040, "Member 'FSmartObjectRequest::Filter' has a wrong offset!");

struct FSmartObjectRequestResult final
{
public:
	struct FSmartObjectHandle                     SmartObjectHandle;
	uint8                                         Pad_4[0x4];
	struct FSmartObjectSlotHandle                 SlotHandle;
};
static_assert(alignof(FSmartObjectRequestResult) == 0x000008, "Wrong alignment on FSmartObjectRequestResult");
static_assert(sizeof(FSmartObjectRequestResult) == 0x000010, "Wrong size on FSmartObjectRequestResult");
static_assert(offsetof(FSmartObjectRequestResult, SmartObjectHandle) == 0x000000, "Member 'FSmartObjectRequestResult::SmartObjectHandle' has a wrong offset!");
static_assert(offsetof(FSmartObjectRequestResult, SlotHandle) == 0x000008, "Member 'FSmartObjectRequestResult::SlotHandle' has a wrong offset!");

struct alignas(0x08) FSmartObjectSlotEntryRequest final
{
public:
	uint8                                         Pad_0[0x50];
};
static_assert(alignof(FSmartObjectSlotEntryRequest) == 0x000008, "Wrong alignment on FSmartObjectSlotEntryRequest");
static_assert(sizeof(FSmartObjectSlotEntryRequest) == 0x000050, "Wrong size on FSmartObjectSlotEntryRequest");

struct alignas(0x08) FSmartObjectSlotEntryLocationResult final
{
public:
	uint8                                         Pad_0[0x40];
};
static_assert(alignof(FSmartObjectSlotEntryLocationResult) == 0x000008, "Wrong alignment on FSmartObjectSlotEntryLocationResult");
static_assert(sizeof(FSmartObjectSlotEntryLocationResult) == 0x000040, "Wrong size on FSmartObjectSlotEntryLocationResult");

struct FSmartObjectSlotIndex final
{
public:
	int32                                         Index;
};
static_assert(alignof(FSmartObjectSlotIndex) == 0x000004, "Wrong alignment on FSmartObjectSlotIndex");
static_assert(sizeof(FSmartObjectSlotIndex) == 0x000004, "Wrong size on FSmartObjectSlotIndex");
static_assert(offsetof(FSmartObjectSlotIndex, Index) == 0x000000, "Member 'FSmartObjectSlotIndex::Index' has a wrong offset!");

struct FSmartObjectActorUserData final
{
public:
	TWeakObjectPtr<class AActor>                  UserActor;
};
static_assert(alignof(FSmartObjectActorUserData) == 0x000004, "Wrong alignment on FSmartObjectActorUserData");
static_assert(sizeof(FSmartObjectActorUserData) == 0x000008, "Wrong size on FSmartObjectActorUserData");
static_assert(offsetof(FSmartObjectActorUserData, UserActor) == 0x000000, "Member 'FSmartObjectActorUserData::UserActor' has a wrong offset!");

struct alignas(0x08) FSmartObjectWorldConditionObjectTagQueryState final
{
public:
	uint8                                         Pad_0[0x8];
};
static_assert(alignof(FSmartObjectWorldConditionObjectTagQueryState) == 0x000008, "Wrong alignment on FSmartObjectWorldConditionObjectTagQueryState");
static_assert(sizeof(FSmartObjectWorldConditionObjectTagQueryState) == 0x000008, "Wrong size on FSmartObjectWorldConditionObjectTagQueryState");

struct FSmartObjectWorldConditionObjectTagQuery final : public FSmartObjectWorldConditionBase
{
public:
	uint8                                         Pad_10[0x10];
	struct FGameplayTagQuery                      TagQuery;
};
static_assert(alignof(FSmartObjectWorldConditionObjectTagQuery) == 0x000008, "Wrong alignment on FSmartObjectWorldConditionObjectTagQuery");
static_assert(sizeof(FSmartObjectWorldConditionObjectTagQuery) == 0x000068, "Wrong size on FSmartObjectWorldConditionObjectTagQuery");
static_assert(offsetof(FSmartObjectWorldConditionObjectTagQuery, TagQuery) == 0x000020, "Member 'FSmartObjectWorldConditionObjectTagQuery::TagQuery' has a wrong offset!");

struct alignas(0x08) FSmartObjectWorldConditionSlotTagQueryState final
{
public:
	uint8                                         Pad_0[0x10];
};
static_assert(alignof(FSmartObjectWorldConditionSlotTagQueryState) == 0x000008, "Wrong alignment on FSmartObjectWorldConditionSlotTagQueryState");
static_assert(sizeof(FSmartObjectWorldConditionSlotTagQueryState) == 0x000010, "Wrong size on FSmartObjectWorldConditionSlotTagQueryState");

struct FSmartObjectWorldConditionSlotTagQuery final : public FSmartObjectWorldConditionBase
{
public:
	uint8                                         Pad_10[0x10];
	struct FGameplayTagQuery                      TagQuery;
};
static_assert(alignof(FSmartObjectWorldConditionSlotTagQuery) == 0x000008, "Wrong alignment on FSmartObjectWorldConditionSlotTagQuery");
static_assert(sizeof(FSmartObjectWorldConditionSlotTagQuery) == 0x000068, "Wrong size on FSmartObjectWorldConditionSlotTagQuery");
static_assert(offsetof(FSmartObjectWorldConditionSlotTagQuery, TagQuery) == 0x000020, "Member 'FSmartObjectWorldConditionSlotTagQuery::TagQuery' has a wrong offset!");

struct alignas(0x08) FWorldCondition_SmartObjectActorTagQueryState final
{
public:
	uint8                                         Pad_0[0x8];
};
static_assert(alignof(FWorldCondition_SmartObjectActorTagQueryState) == 0x000008, "Wrong alignment on FWorldCondition_SmartObjectActorTagQueryState");
static_assert(sizeof(FWorldCondition_SmartObjectActorTagQueryState) == 0x000008, "Wrong size on FWorldCondition_SmartObjectActorTagQueryState");

struct FWorldCondition_SmartObjectActorTagQuery final : public FSmartObjectWorldConditionBase
{
public:
	uint8                                         Pad_10[0x8];
	struct FGameplayTagQuery                      TagQuery;
};
static_assert(alignof(FWorldCondition_SmartObjectActorTagQuery) == 0x000008, "Wrong alignment on FWorldCondition_SmartObjectActorTagQuery");
static_assert(sizeof(FWorldCondition_SmartObjectActorTagQuery) == 0x000060, "Wrong size on FWorldCondition_SmartObjectActorTagQuery");
static_assert(offsetof(FWorldCondition_SmartObjectActorTagQuery, TagQuery) == 0x000018, "Member 'FWorldCondition_SmartObjectActorTagQuery::TagQuery' has a wrong offset!");

}
