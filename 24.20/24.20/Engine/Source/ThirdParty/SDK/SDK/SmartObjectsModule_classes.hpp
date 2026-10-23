#pragma once

#include "Basic.hpp"

#include "AIModule_classes.hpp"
#include "SmartObjectsModule_structs.hpp"
#include "DeveloperSettings_classes.hpp"
#include "WorldConditions_structs.hpp"
#include "WorldConditions_classes.hpp"
#include "GameplayTags_structs.hpp"
#include "Engine_classes.hpp"
#include "CoreUObject_structs.hpp"
#include "CoreUObject_classes.hpp"

namespace SDK
{

class USmartObjectSettings final : public UDeveloperSettings
{
public:
	ESmartObjectTagFilteringPolicy                DefaultUserTagsFilteringPolicy;
	ESmartObjectTagMergingPolicy                  DefaultActivityTagsMergingPolicy;
	uint8                                         Pad_32[0x6];
	TSubclassOf<class USmartObjectWorldConditionSchema> DefaultWorldConditionSchemaClass;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"SmartObjectSettings">();
	}
	static class USmartObjectSettings* GetDefaultObj()
	{
		return GetDefaultObjImpl<USmartObjectSettings>();
	}
};
static_assert(alignof(USmartObjectSettings) == 0x000008, "Wrong alignment on USmartObjectSettings");
static_assert(sizeof(USmartObjectSettings) == 0x000040, "Wrong size on USmartObjectSettings");
static_assert(offsetof(USmartObjectSettings, DefaultUserTagsFilteringPolicy) == 0x000030, "Member 'USmartObjectSettings::DefaultUserTagsFilteringPolicy' has a wrong offset!");
static_assert(offsetof(USmartObjectSettings, DefaultActivityTagsMergingPolicy) == 0x000031, "Member 'USmartObjectSettings::DefaultActivityTagsMergingPolicy' has a wrong offset!");
static_assert(offsetof(USmartObjectSettings, DefaultWorldConditionSchemaClass) == 0x000038, "Member 'USmartObjectSettings::DefaultWorldConditionSchemaClass' has a wrong offset!");

class UBlackboardKeyType_SOClaimHandle final : public UBlackboardKeyType
{
public:
	struct FSmartObjectClaimHandle                Handle;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"BlackboardKeyType_SOClaimHandle">();
	}
	static class UBlackboardKeyType_SOClaimHandle* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBlackboardKeyType_SOClaimHandle>();
	}
};
static_assert(alignof(UBlackboardKeyType_SOClaimHandle) == 0x000008, "Wrong alignment on UBlackboardKeyType_SOClaimHandle");
static_assert(sizeof(UBlackboardKeyType_SOClaimHandle) == 0x000048, "Wrong size on UBlackboardKeyType_SOClaimHandle");
static_assert(offsetof(UBlackboardKeyType_SOClaimHandle, Handle) == 0x000030, "Member 'UBlackboardKeyType_SOClaimHandle::Handle' has a wrong offset!");

class AGenericSmartObject final : public AActor
{
public:
	class USmartObjectComponent*                  SOComponent;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"GenericSmartObject">();
	}
	static class AGenericSmartObject* GetDefaultObj()
	{
		return GetDefaultObjImpl<AGenericSmartObject>();
	}
};
static_assert(alignof(AGenericSmartObject) == 0x000008, "Wrong alignment on AGenericSmartObject");
static_assert(sizeof(AGenericSmartObject) == 0x000290, "Wrong size on AGenericSmartObject");
static_assert(offsetof(AGenericSmartObject, SOComponent) == 0x000288, "Member 'AGenericSmartObject::SOComponent' has a wrong offset!");

class USmartObjectBlueprintFunctionLibrary final : public UBlueprintFunctionLibrary
{
public:
	static bool AddMultipleSmartObjects(const TArray<class AActor*>& SmartObjectActors);
	static bool AddOrRemoveMultipleSmartObjects(const TArray<class AActor*>& SmartObjectActors, const bool bAdd);
	static bool AddOrRemoveSmartObject(class AActor* SmartObject, const bool bEnabled);
	static bool AddSmartObject(class AActor* SmartObjectActor);
	static struct FSmartObjectClaimHandle GetBlackboardValueAsSOClaimHandle(class UBTNode* NodeOwner, const struct FBlackboardKeySelector& Key);
	static struct FSmartObjectClaimHandle GetValueAsSOClaimHandle(class UBlackboardComponent* BlackboardComponent, const class FName& KeyName);
	static bool IsValidSmartObjectClaimHandle(const struct FSmartObjectClaimHandle& Handle);
	static bool RemoveMultipleSmartObjects(const TArray<class AActor*>& SmartObjectActors);
	static bool RemoveSmartObject(class AActor* SmartObjectActor);
	static void SetBlackboardValueAsSOClaimHandle(class UBTNode* NodeOwner, const struct FBlackboardKeySelector& Key, const struct FSmartObjectClaimHandle& Value);
	static bool SetMultipleSmartObjectsEnabled(const TArray<class AActor*>& SmartObjectActors, const bool bEnabled);
	static bool SetSmartObjectEnabled(class AActor* SmartObjectActor, const bool bEnabled);
	static void SetValueAsSOClaimHandle(class UBlackboardComponent* BlackboardComponent, const class FName& KeyName, const struct FSmartObjectClaimHandle& Value);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"SmartObjectBlueprintFunctionLibrary">();
	}
	static class USmartObjectBlueprintFunctionLibrary* GetDefaultObj()
	{
		return GetDefaultObjImpl<USmartObjectBlueprintFunctionLibrary>();
	}
};
static_assert(alignof(USmartObjectBlueprintFunctionLibrary) == 0x000008, "Wrong alignment on USmartObjectBlueprintFunctionLibrary");
static_assert(sizeof(USmartObjectBlueprintFunctionLibrary) == 0x000028, "Wrong size on USmartObjectBlueprintFunctionLibrary");

class ASmartObjectCollection final : public AActor
{
public:
	struct FBox                                   Bounds;
	TArray<struct FSmartObjectCollectionEntry>    CollectionEntries;
	TMap<struct FSmartObjectHandle, struct FSoftObjectPath> RegisteredIdToObjectMap;
	TArray<class USmartObjectDefinition*>         Definitions;
	uint8                                         Pad_330[0x8];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"SmartObjectCollection">();
	}
	static class ASmartObjectCollection* GetDefaultObj()
	{
		return GetDefaultObjImpl<ASmartObjectCollection>();
	}
};
static_assert(alignof(ASmartObjectCollection) == 0x000008, "Wrong alignment on ASmartObjectCollection");
static_assert(sizeof(ASmartObjectCollection) == 0x000338, "Wrong size on ASmartObjectCollection");
static_assert(offsetof(ASmartObjectCollection, Bounds) == 0x000288, "Member 'ASmartObjectCollection::Bounds' has a wrong offset!");
static_assert(offsetof(ASmartObjectCollection, CollectionEntries) == 0x0002C0, "Member 'ASmartObjectCollection::CollectionEntries' has a wrong offset!");
static_assert(offsetof(ASmartObjectCollection, RegisteredIdToObjectMap) == 0x0002D0, "Member 'ASmartObjectCollection::RegisteredIdToObjectMap' has a wrong offset!");
static_assert(offsetof(ASmartObjectCollection, Definitions) == 0x000320, "Member 'ASmartObjectCollection::Definitions' has a wrong offset!");

class USmartObjectComponent final : public USceneComponent
{
public:
	TMulticastInlineDelegate<void(struct FSmartObjectEventData& EventData, class AActor* Interactor)> OnSmartObjectEvent;
	uint8                                         Pad_2B0[0x18];
	class USmartObjectDefinition*                 DefinitionAsset;
	struct FSmartObjectHandle                     RegisteredHandle;
	uint8                                         Pad_2D4[0xC];
	bool                                          bCanBePartOfCollection;
	uint8                                         Pad_2E1[0xF];

public:
	void ReceiveOnEvent(const struct FSmartObjectEventData& EventData, const class AActor* Interactor);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"SmartObjectComponent">();
	}
	static class USmartObjectComponent* GetDefaultObj()
	{
		return GetDefaultObjImpl<USmartObjectComponent>();
	}
};
static_assert(alignof(USmartObjectComponent) == 0x000010, "Wrong alignment on USmartObjectComponent");
static_assert(sizeof(USmartObjectComponent) == 0x0002F0, "Wrong size on USmartObjectComponent");
static_assert(offsetof(USmartObjectComponent, OnSmartObjectEvent) == 0x0002A0, "Member 'USmartObjectComponent::OnSmartObjectEvent' has a wrong offset!");
static_assert(offsetof(USmartObjectComponent, DefinitionAsset) == 0x0002C8, "Member 'USmartObjectComponent::DefinitionAsset' has a wrong offset!");
static_assert(offsetof(USmartObjectComponent, RegisteredHandle) == 0x0002D0, "Member 'USmartObjectComponent::RegisteredHandle' has a wrong offset!");
static_assert(offsetof(USmartObjectComponent, bCanBePartOfCollection) == 0x0002E0, "Member 'USmartObjectComponent::bCanBePartOfCollection' has a wrong offset!");

class USmartObjectContainerRenderingComponent final : public UPrimitiveComponent
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"SmartObjectContainerRenderingComponent">();
	}
	static class USmartObjectContainerRenderingComponent* GetDefaultObj()
	{
		return GetDefaultObjImpl<USmartObjectContainerRenderingComponent>();
	}
};
static_assert(alignof(USmartObjectContainerRenderingComponent) == 0x000010, "Wrong alignment on USmartObjectContainerRenderingComponent");
static_assert(sizeof(USmartObjectContainerRenderingComponent) == 0x000570, "Wrong size on USmartObjectContainerRenderingComponent");

class USmartObjectDebugRenderingComponent : public UDebugDrawComponent
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"SmartObjectDebugRenderingComponent">();
	}
	static class USmartObjectDebugRenderingComponent* GetDefaultObj()
	{
		return GetDefaultObjImpl<USmartObjectDebugRenderingComponent>();
	}
};
static_assert(alignof(USmartObjectDebugRenderingComponent) == 0x000010, "Wrong alignment on USmartObjectDebugRenderingComponent");
static_assert(sizeof(USmartObjectDebugRenderingComponent) == 0x0005C0, "Wrong size on USmartObjectDebugRenderingComponent");

class USmartObjectBehaviorDefinition : public UObject
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"SmartObjectBehaviorDefinition">();
	}
	static class USmartObjectBehaviorDefinition* GetDefaultObj()
	{
		return GetDefaultObjImpl<USmartObjectBehaviorDefinition>();
	}
};
static_assert(alignof(USmartObjectBehaviorDefinition) == 0x000008, "Wrong alignment on USmartObjectBehaviorDefinition");
static_assert(sizeof(USmartObjectBehaviorDefinition) == 0x000028, "Wrong size on USmartObjectBehaviorDefinition");

class USmartObjectDefinition final : public UDataAsset
{
public:
	TArray<struct FSmartObjectSlotDefinition>     Slots;
	TArray<class USmartObjectBehaviorDefinition*> DefaultBehaviorDefinitions;
	struct FGameplayTagQuery                      UserTagFilter;
	struct FWorldConditionQueryDefinition         Preconditions;
	struct FGameplayTagContainer                  ActivityTags;
	TSubclassOf<class USmartObjectWorldConditionSchema> WorldConditionSchemaClass;
	ESmartObjectTagMergingPolicy                  ActivityTagsMergingPolicy;
	ESmartObjectTagFilteringPolicy                UserTagsFilteringPolicy;
	uint8                                         Pad_DA[0x6];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"SmartObjectDefinition">();
	}
	static class USmartObjectDefinition* GetDefaultObj()
	{
		return GetDefaultObjImpl<USmartObjectDefinition>();
	}
};
static_assert(alignof(USmartObjectDefinition) == 0x000008, "Wrong alignment on USmartObjectDefinition");
static_assert(sizeof(USmartObjectDefinition) == 0x0000E0, "Wrong size on USmartObjectDefinition");
static_assert(offsetof(USmartObjectDefinition, Slots) == 0x000030, "Member 'USmartObjectDefinition::Slots' has a wrong offset!");
static_assert(offsetof(USmartObjectDefinition, DefaultBehaviorDefinitions) == 0x000040, "Member 'USmartObjectDefinition::DefaultBehaviorDefinitions' has a wrong offset!");
static_assert(offsetof(USmartObjectDefinition, UserTagFilter) == 0x000050, "Member 'USmartObjectDefinition::UserTagFilter' has a wrong offset!");
static_assert(offsetof(USmartObjectDefinition, Preconditions) == 0x000098, "Member 'USmartObjectDefinition::Preconditions' has a wrong offset!");
static_assert(offsetof(USmartObjectDefinition, ActivityTags) == 0x0000B0, "Member 'USmartObjectDefinition::ActivityTags' has a wrong offset!");
static_assert(offsetof(USmartObjectDefinition, WorldConditionSchemaClass) == 0x0000D0, "Member 'USmartObjectDefinition::WorldConditionSchemaClass' has a wrong offset!");
static_assert(offsetof(USmartObjectDefinition, ActivityTagsMergingPolicy) == 0x0000D8, "Member 'USmartObjectDefinition::ActivityTagsMergingPolicy' has a wrong offset!");
static_assert(offsetof(USmartObjectDefinition, UserTagsFilteringPolicy) == 0x0000D9, "Member 'USmartObjectDefinition::UserTagsFilteringPolicy' has a wrong offset!");

class USmartObjectSpacePartition : public UObject
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"SmartObjectSpacePartition">();
	}
	static class USmartObjectSpacePartition* GetDefaultObj()
	{
		return GetDefaultObjImpl<USmartObjectSpacePartition>();
	}
};
static_assert(alignof(USmartObjectSpacePartition) == 0x000008, "Wrong alignment on USmartObjectSpacePartition");
static_assert(sizeof(USmartObjectSpacePartition) == 0x000028, "Wrong size on USmartObjectSpacePartition");

class USmartObjectHashGrid final : public USmartObjectSpacePartition
{
public:
	uint8                                         Pad_28[0xA8];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"SmartObjectHashGrid">();
	}
	static class USmartObjectHashGrid* GetDefaultObj()
	{
		return GetDefaultObjImpl<USmartObjectHashGrid>();
	}
};
static_assert(alignof(USmartObjectHashGrid) == 0x000008, "Wrong alignment on USmartObjectHashGrid");
static_assert(sizeof(USmartObjectHashGrid) == 0x0000D0, "Wrong size on USmartObjectHashGrid");

class USmartObjectOctree final : public USmartObjectSpacePartition
{
public:
	uint8                                         Pad_28[0xC8];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"SmartObjectOctree">();
	}
	static class USmartObjectOctree* GetDefaultObj()
	{
		return GetDefaultObjImpl<USmartObjectOctree>();
	}
};
static_assert(alignof(USmartObjectOctree) == 0x000008, "Wrong alignment on USmartObjectOctree");
static_assert(sizeof(USmartObjectOctree) == 0x0000F0, "Wrong size on USmartObjectOctree");

class ASmartObjectPersistentCollection final : public AActor
{
public:
	struct FSmartObjectContainer                  SmartObjectContainer;
	uint8                                         Pad_338[0x8];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"SmartObjectPersistentCollection">();
	}
	static class ASmartObjectPersistentCollection* GetDefaultObj()
	{
		return GetDefaultObjImpl<ASmartObjectPersistentCollection>();
	}
};
static_assert(alignof(ASmartObjectPersistentCollection) == 0x000008, "Wrong alignment on ASmartObjectPersistentCollection");
static_assert(sizeof(ASmartObjectPersistentCollection) == 0x000340, "Wrong size on ASmartObjectPersistentCollection");
static_assert(offsetof(ASmartObjectPersistentCollection, SmartObjectContainer) == 0x000288, "Member 'ASmartObjectPersistentCollection::SmartObjectContainer' has a wrong offset!");

class USmartObjectRenderingComponent final : public UPrimitiveComponent
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"SmartObjectRenderingComponent">();
	}
	static class USmartObjectRenderingComponent* GetDefaultObj()
	{
		return GetDefaultObjImpl<USmartObjectRenderingComponent>();
	}
};
static_assert(alignof(USmartObjectRenderingComponent) == 0x000010, "Wrong alignment on USmartObjectRenderingComponent");
static_assert(sizeof(USmartObjectRenderingComponent) == 0x000570, "Wrong size on USmartObjectRenderingComponent");

class USmartObjectSubsystem final : public UWorldSubsystem
{
public:
	struct FSoftClassPath                         SpacePartitionClassName;
	TSubclassOf<class USmartObjectSpacePartition> SpacePartitionClass;
	class USmartObjectSpacePartition*             SpacePartition;
	class ASmartObjectSubsystemRenderingActor*    RenderingActor;
	struct FSmartObjectContainer                  SmartObjectContainer;
	uint8                                         Pad_110[0x20];
	TMap<struct FSmartObjectHandle, struct FSmartObjectRuntime> RuntimeSmartObjects;
	TMap<struct FSmartObjectSlotHandle, struct FSmartObjectRuntimeSlot> RuntimeSlots;
	uint8                                         Pad_1D0[0x10];
	TArray<class USmartObjectComponent*>          RegisteredSOComponents;
	TArray<class USmartObjectComponent*>          PendingSmartObjectRegistration;
	uint8                                         Pad_200[0x8];

public:
	void AddTagToInstance(const struct FSmartObjectHandle& Handle, const struct FGameplayTag& tag);
	void AddTagToSlot(const struct FSmartObjectSlotHandle& SlotHandle, const struct FGameplayTag& tag);
	struct FSmartObjectClaimHandle Claim(const struct FSmartObjectRequestResult& RequestResult, const class AActor* UserActor);
	const class USmartObjectBehaviorDefinition* GetBehaviorDefinition(const struct FSmartObjectClaimHandle& ClaimHandle, const TSubclassOf<class USmartObjectBehaviorDefinition>& DefinitionClass);
	const class USmartObjectBehaviorDefinition* GetBehaviorDefinitionByRequestResult(const struct FSmartObjectRequestResult& RequestResult, const TSubclassOf<class USmartObjectBehaviorDefinition>& DefinitionClass);
	bool Release(const struct FSmartObjectClaimHandle& ClaimHandle);
	void RemoveTagFromInstance(const struct FSmartObjectHandle& Handle, const struct FGameplayTag& tag);
	bool RemoveTagFromSlot(const struct FSmartObjectSlotHandle& SlotHandle, const struct FGameplayTag& tag);
	bool SetEnabled(const struct FSmartObjectHandle& Handle, const bool bEnabled);
	bool SetSlotEnabled(const struct FSmartObjectSlotHandle& SlotHandle, const bool bEnabled);
	const class USmartObjectBehaviorDefinition* Use(const struct FSmartObjectClaimHandle& ClaimHandle, const TSubclassOf<class USmartObjectBehaviorDefinition>& DefinitionClass);

	struct FSmartObjectRequestResult FindSmartObject(const struct FSmartObjectRequest& Request, const class AActor* UserActor) const;
	bool FindSmartObjects(const struct FSmartObjectRequest& Request, TArray<struct FSmartObjectRequestResult>* OutResults, const class AActor* UserActor) const;
	const struct FGameplayTagContainer GetInstanceTags(const struct FSmartObjectHandle& Handle) const;
	bool GetSlotLocation(const struct FSmartObjectClaimHandle& ClaimHandle, struct FVector* OutSlotLocation) const;
	const struct FGameplayTagContainer GetSlotTags(const struct FSmartObjectSlotHandle& SlotHandle) const;
	bool GetSlotTransform(const struct FSmartObjectClaimHandle& ClaimHandle, struct FTransform* OutSlotTransform) const;
	bool GetSlotTransformFromRequestResult(const struct FSmartObjectRequestResult& RequestResult, struct FTransform* OutSlotTransform) const;
	class USmartObjectComponent* GetSmartObjectComponent(const struct FSmartObjectClaimHandle& ClaimHandle) const;
	class USmartObjectComponent* GetSmartObjectComponentByRequestResult(const struct FSmartObjectRequestResult& Result) const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"SmartObjectSubsystem">();
	}
	static class USmartObjectSubsystem* GetDefaultObj()
	{
		return GetDefaultObjImpl<USmartObjectSubsystem>();
	}
};
static_assert(alignof(USmartObjectSubsystem) == 0x000008, "Wrong alignment on USmartObjectSubsystem");
static_assert(sizeof(USmartObjectSubsystem) == 0x000208, "Wrong size on USmartObjectSubsystem");
static_assert(offsetof(USmartObjectSubsystem, SpacePartitionClassName) == 0x000030, "Member 'USmartObjectSubsystem::SpacePartitionClassName' has a wrong offset!");
static_assert(offsetof(USmartObjectSubsystem, SpacePartitionClass) == 0x000048, "Member 'USmartObjectSubsystem::SpacePartitionClass' has a wrong offset!");
static_assert(offsetof(USmartObjectSubsystem, SpacePartition) == 0x000050, "Member 'USmartObjectSubsystem::SpacePartition' has a wrong offset!");
static_assert(offsetof(USmartObjectSubsystem, RenderingActor) == 0x000058, "Member 'USmartObjectSubsystem::RenderingActor' has a wrong offset!");
static_assert(offsetof(USmartObjectSubsystem, SmartObjectContainer) == 0x000060, "Member 'USmartObjectSubsystem::SmartObjectContainer' has a wrong offset!");
static_assert(offsetof(USmartObjectSubsystem, RuntimeSmartObjects) == 0x000130, "Member 'USmartObjectSubsystem::RuntimeSmartObjects' has a wrong offset!");
static_assert(offsetof(USmartObjectSubsystem, RuntimeSlots) == 0x000180, "Member 'USmartObjectSubsystem::RuntimeSlots' has a wrong offset!");
static_assert(offsetof(USmartObjectSubsystem, RegisteredSOComponents) == 0x0001E0, "Member 'USmartObjectSubsystem::RegisteredSOComponents' has a wrong offset!");
static_assert(offsetof(USmartObjectSubsystem, PendingSmartObjectRegistration) == 0x0001F0, "Member 'USmartObjectSubsystem::PendingSmartObjectRegistration' has a wrong offset!");

class USmartObjectSubsystemRenderingComponent final : public USmartObjectDebugRenderingComponent
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"SmartObjectSubsystemRenderingComponent">();
	}
	static class USmartObjectSubsystemRenderingComponent* GetDefaultObj()
	{
		return GetDefaultObjImpl<USmartObjectSubsystemRenderingComponent>();
	}
};
static_assert(alignof(USmartObjectSubsystemRenderingComponent) == 0x000010, "Wrong alignment on USmartObjectSubsystemRenderingComponent");
static_assert(sizeof(USmartObjectSubsystemRenderingComponent) == 0x0005C0, "Wrong size on USmartObjectSubsystemRenderingComponent");

class ASmartObjectSubsystemRenderingActor final : public AActor
{
public:
	class USmartObjectSubsystemRenderingComponent* RenderingComponent;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"SmartObjectSubsystemRenderingActor">();
	}
	static class ASmartObjectSubsystemRenderingActor* GetDefaultObj()
	{
		return GetDefaultObjImpl<ASmartObjectSubsystemRenderingActor>();
	}
};
static_assert(alignof(ASmartObjectSubsystemRenderingActor) == 0x000008, "Wrong alignment on ASmartObjectSubsystemRenderingActor");
static_assert(sizeof(ASmartObjectSubsystemRenderingActor) == 0x000290, "Wrong size on ASmartObjectSubsystemRenderingActor");
static_assert(offsetof(ASmartObjectSubsystemRenderingActor, RenderingComponent) == 0x000288, "Member 'ASmartObjectSubsystemRenderingActor::RenderingComponent' has a wrong offset!");

class USmartObjectTest : public UObject
{
public:
	class ASmartObjectTestingActor*               SmartObjectTestingActor;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"SmartObjectTest">();
	}
	static class USmartObjectTest* GetDefaultObj()
	{
		return GetDefaultObjImpl<USmartObjectTest>();
	}
};
static_assert(alignof(USmartObjectTest) == 0x000008, "Wrong alignment on USmartObjectTest");
static_assert(sizeof(USmartObjectTest) == 0x000030, "Wrong size on USmartObjectTest");
static_assert(offsetof(USmartObjectTest, SmartObjectTestingActor) == 0x000028, "Member 'USmartObjectTest::SmartObjectTestingActor' has a wrong offset!");

class USmartObjectSimpleQueryTest final : public USmartObjectTest
{
public:
	struct FSmartObjectRequest                    Request;
	TArray<struct FSmartObjectRequestResult>      Results;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"SmartObjectSimpleQueryTest">();
	}
	static class USmartObjectSimpleQueryTest* GetDefaultObj()
	{
		return GetDefaultObjImpl<USmartObjectSimpleQueryTest>();
	}
};
static_assert(alignof(USmartObjectSimpleQueryTest) == 0x000010, "Wrong alignment on USmartObjectSimpleQueryTest");
static_assert(sizeof(USmartObjectSimpleQueryTest) == 0x000170, "Wrong size on USmartObjectSimpleQueryTest");
static_assert(offsetof(USmartObjectSimpleQueryTest, Request) == 0x000030, "Member 'USmartObjectSimpleQueryTest::Request' has a wrong offset!");
static_assert(offsetof(USmartObjectSimpleQueryTest, Results) == 0x000160, "Member 'USmartObjectSimpleQueryTest::Results' has a wrong offset!");

class USmartObjectTestRenderingComponent final : public USmartObjectDebugRenderingComponent
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"SmartObjectTestRenderingComponent">();
	}
	static class USmartObjectTestRenderingComponent* GetDefaultObj()
	{
		return GetDefaultObjImpl<USmartObjectTestRenderingComponent>();
	}
};
static_assert(alignof(USmartObjectTestRenderingComponent) == 0x000010, "Wrong alignment on USmartObjectTestRenderingComponent");
static_assert(sizeof(USmartObjectTestRenderingComponent) == 0x0005C0, "Wrong size on USmartObjectTestRenderingComponent");

class ASmartObjectTestingActor final : public AActor
{
public:
	TArray<class USmartObjectTest*>               Tests;
	class USmartObjectTestRenderingComponent*     RenderingComponent;
	class USmartObjectSubsystem*                  SmartObjectSubsystem;
	bool                                          bRunTestsEachFrame;
	uint8                                         Pad_2A9[0x7];

public:
	void ResetTests();
	void RunTests();

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"SmartObjectTestingActor">();
	}
	static class ASmartObjectTestingActor* GetDefaultObj()
	{
		return GetDefaultObjImpl<ASmartObjectTestingActor>();
	}
};
static_assert(alignof(ASmartObjectTestingActor) == 0x000008, "Wrong alignment on ASmartObjectTestingActor");
static_assert(sizeof(ASmartObjectTestingActor) == 0x0002B0, "Wrong size on ASmartObjectTestingActor");
static_assert(offsetof(ASmartObjectTestingActor, Tests) == 0x000288, "Member 'ASmartObjectTestingActor::Tests' has a wrong offset!");
static_assert(offsetof(ASmartObjectTestingActor, RenderingComponent) == 0x000298, "Member 'ASmartObjectTestingActor::RenderingComponent' has a wrong offset!");
static_assert(offsetof(ASmartObjectTestingActor, SmartObjectSubsystem) == 0x0002A0, "Member 'ASmartObjectTestingActor::SmartObjectSubsystem' has a wrong offset!");
static_assert(offsetof(ASmartObjectTestingActor, bRunTestsEachFrame) == 0x0002A8, "Member 'ASmartObjectTestingActor::bRunTestsEachFrame' has a wrong offset!");

class USmartObjectWorldConditionSchema final : public UWorldConditionSchema
{
public:
	uint8                                         Pad_38[0x28];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"SmartObjectWorldConditionSchema">();
	}
	static class USmartObjectWorldConditionSchema* GetDefaultObj()
	{
		return GetDefaultObjImpl<USmartObjectWorldConditionSchema>();
	}
};
static_assert(alignof(USmartObjectWorldConditionSchema) == 0x000008, "Wrong alignment on USmartObjectWorldConditionSchema");
static_assert(sizeof(USmartObjectWorldConditionSchema) == 0x000060, "Wrong size on USmartObjectWorldConditionSchema");

}
