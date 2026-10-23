#pragma once

#include "Basic.hpp"

#include "AIModule_structs.hpp"
#include "SmartObjectsModule_structs.hpp"
#include "GameplayTags_structs.hpp"
#include "CoreUObject_structs.hpp"

namespace SDK::Params
{

struct SmartObjectBlueprintFunctionLibrary_AddMultipleSmartObjects final
{
public:
	TArray<class AActor*>                         SmartObjectActors;
	bool                                          ReturnValue;
	uint8                                         Pad_11[0x7];
};
static_assert(alignof(SmartObjectBlueprintFunctionLibrary_AddMultipleSmartObjects) == 0x000008, "Wrong alignment on SmartObjectBlueprintFunctionLibrary_AddMultipleSmartObjects");
static_assert(sizeof(SmartObjectBlueprintFunctionLibrary_AddMultipleSmartObjects) == 0x000018, "Wrong size on SmartObjectBlueprintFunctionLibrary_AddMultipleSmartObjects");
static_assert(offsetof(SmartObjectBlueprintFunctionLibrary_AddMultipleSmartObjects, SmartObjectActors) == 0x000000, "Member 'SmartObjectBlueprintFunctionLibrary_AddMultipleSmartObjects::SmartObjectActors' has a wrong offset!");
static_assert(offsetof(SmartObjectBlueprintFunctionLibrary_AddMultipleSmartObjects, ReturnValue) == 0x000010, "Member 'SmartObjectBlueprintFunctionLibrary_AddMultipleSmartObjects::ReturnValue' has a wrong offset!");

struct SmartObjectBlueprintFunctionLibrary_AddOrRemoveMultipleSmartObjects final
{
public:
	TArray<class AActor*>                         SmartObjectActors;
	bool                                          bAdd;
	bool                                          ReturnValue;
	uint8                                         Pad_12[0x6];
};
static_assert(alignof(SmartObjectBlueprintFunctionLibrary_AddOrRemoveMultipleSmartObjects) == 0x000008, "Wrong alignment on SmartObjectBlueprintFunctionLibrary_AddOrRemoveMultipleSmartObjects");
static_assert(sizeof(SmartObjectBlueprintFunctionLibrary_AddOrRemoveMultipleSmartObjects) == 0x000018, "Wrong size on SmartObjectBlueprintFunctionLibrary_AddOrRemoveMultipleSmartObjects");
static_assert(offsetof(SmartObjectBlueprintFunctionLibrary_AddOrRemoveMultipleSmartObjects, SmartObjectActors) == 0x000000, "Member 'SmartObjectBlueprintFunctionLibrary_AddOrRemoveMultipleSmartObjects::SmartObjectActors' has a wrong offset!");
static_assert(offsetof(SmartObjectBlueprintFunctionLibrary_AddOrRemoveMultipleSmartObjects, bAdd) == 0x000010, "Member 'SmartObjectBlueprintFunctionLibrary_AddOrRemoveMultipleSmartObjects::bAdd' has a wrong offset!");
static_assert(offsetof(SmartObjectBlueprintFunctionLibrary_AddOrRemoveMultipleSmartObjects, ReturnValue) == 0x000011, "Member 'SmartObjectBlueprintFunctionLibrary_AddOrRemoveMultipleSmartObjects::ReturnValue' has a wrong offset!");

struct SmartObjectBlueprintFunctionLibrary_AddOrRemoveSmartObject final
{
public:
	class AActor*                                 SmartObject;
	bool                                          bEnabled;
	bool                                          ReturnValue;
	uint8                                         Pad_A[0x6];
};
static_assert(alignof(SmartObjectBlueprintFunctionLibrary_AddOrRemoveSmartObject) == 0x000008, "Wrong alignment on SmartObjectBlueprintFunctionLibrary_AddOrRemoveSmartObject");
static_assert(sizeof(SmartObjectBlueprintFunctionLibrary_AddOrRemoveSmartObject) == 0x000010, "Wrong size on SmartObjectBlueprintFunctionLibrary_AddOrRemoveSmartObject");
static_assert(offsetof(SmartObjectBlueprintFunctionLibrary_AddOrRemoveSmartObject, SmartObject) == 0x000000, "Member 'SmartObjectBlueprintFunctionLibrary_AddOrRemoveSmartObject::SmartObject' has a wrong offset!");
static_assert(offsetof(SmartObjectBlueprintFunctionLibrary_AddOrRemoveSmartObject, bEnabled) == 0x000008, "Member 'SmartObjectBlueprintFunctionLibrary_AddOrRemoveSmartObject::bEnabled' has a wrong offset!");
static_assert(offsetof(SmartObjectBlueprintFunctionLibrary_AddOrRemoveSmartObject, ReturnValue) == 0x000009, "Member 'SmartObjectBlueprintFunctionLibrary_AddOrRemoveSmartObject::ReturnValue' has a wrong offset!");

struct SmartObjectBlueprintFunctionLibrary_AddSmartObject final
{
public:
	class AActor*                                 SmartObjectActor;
	bool                                          ReturnValue;
	uint8                                         Pad_9[0x7];
};
static_assert(alignof(SmartObjectBlueprintFunctionLibrary_AddSmartObject) == 0x000008, "Wrong alignment on SmartObjectBlueprintFunctionLibrary_AddSmartObject");
static_assert(sizeof(SmartObjectBlueprintFunctionLibrary_AddSmartObject) == 0x000010, "Wrong size on SmartObjectBlueprintFunctionLibrary_AddSmartObject");
static_assert(offsetof(SmartObjectBlueprintFunctionLibrary_AddSmartObject, SmartObjectActor) == 0x000000, "Member 'SmartObjectBlueprintFunctionLibrary_AddSmartObject::SmartObjectActor' has a wrong offset!");
static_assert(offsetof(SmartObjectBlueprintFunctionLibrary_AddSmartObject, ReturnValue) == 0x000008, "Member 'SmartObjectBlueprintFunctionLibrary_AddSmartObject::ReturnValue' has a wrong offset!");

struct SmartObjectBlueprintFunctionLibrary_GetBlackboardValueAsSOClaimHandle final
{
public:
	class UBTNode*                                NodeOwner;
	struct FBlackboardKeySelector                 Key;
	struct FSmartObjectClaimHandle                ReturnValue;
};
static_assert(alignof(SmartObjectBlueprintFunctionLibrary_GetBlackboardValueAsSOClaimHandle) == 0x000008, "Wrong alignment on SmartObjectBlueprintFunctionLibrary_GetBlackboardValueAsSOClaimHandle");
static_assert(sizeof(SmartObjectBlueprintFunctionLibrary_GetBlackboardValueAsSOClaimHandle) == 0x000048, "Wrong size on SmartObjectBlueprintFunctionLibrary_GetBlackboardValueAsSOClaimHandle");
static_assert(offsetof(SmartObjectBlueprintFunctionLibrary_GetBlackboardValueAsSOClaimHandle, NodeOwner) == 0x000000, "Member 'SmartObjectBlueprintFunctionLibrary_GetBlackboardValueAsSOClaimHandle::NodeOwner' has a wrong offset!");
static_assert(offsetof(SmartObjectBlueprintFunctionLibrary_GetBlackboardValueAsSOClaimHandle, Key) == 0x000008, "Member 'SmartObjectBlueprintFunctionLibrary_GetBlackboardValueAsSOClaimHandle::Key' has a wrong offset!");
static_assert(offsetof(SmartObjectBlueprintFunctionLibrary_GetBlackboardValueAsSOClaimHandle, ReturnValue) == 0x000030, "Member 'SmartObjectBlueprintFunctionLibrary_GetBlackboardValueAsSOClaimHandle::ReturnValue' has a wrong offset!");

struct SmartObjectBlueprintFunctionLibrary_GetValueAsSOClaimHandle final
{
public:
	class UBlackboardComponent*                   BlackboardComponent;
	class FName                                   KeyName;
	uint8                                         Pad_C[0x4];
	struct FSmartObjectClaimHandle                ReturnValue;
};
static_assert(alignof(SmartObjectBlueprintFunctionLibrary_GetValueAsSOClaimHandle) == 0x000008, "Wrong alignment on SmartObjectBlueprintFunctionLibrary_GetValueAsSOClaimHandle");
static_assert(sizeof(SmartObjectBlueprintFunctionLibrary_GetValueAsSOClaimHandle) == 0x000028, "Wrong size on SmartObjectBlueprintFunctionLibrary_GetValueAsSOClaimHandle");
static_assert(offsetof(SmartObjectBlueprintFunctionLibrary_GetValueAsSOClaimHandle, BlackboardComponent) == 0x000000, "Member 'SmartObjectBlueprintFunctionLibrary_GetValueAsSOClaimHandle::BlackboardComponent' has a wrong offset!");
static_assert(offsetof(SmartObjectBlueprintFunctionLibrary_GetValueAsSOClaimHandle, KeyName) == 0x000008, "Member 'SmartObjectBlueprintFunctionLibrary_GetValueAsSOClaimHandle::KeyName' has a wrong offset!");
static_assert(offsetof(SmartObjectBlueprintFunctionLibrary_GetValueAsSOClaimHandle, ReturnValue) == 0x000010, "Member 'SmartObjectBlueprintFunctionLibrary_GetValueAsSOClaimHandle::ReturnValue' has a wrong offset!");

struct SmartObjectBlueprintFunctionLibrary_IsValidSmartObjectClaimHandle final
{
public:
	struct FSmartObjectClaimHandle                Handle;
	bool                                          ReturnValue;
	uint8                                         Pad_19[0x7];
};
static_assert(alignof(SmartObjectBlueprintFunctionLibrary_IsValidSmartObjectClaimHandle) == 0x000008, "Wrong alignment on SmartObjectBlueprintFunctionLibrary_IsValidSmartObjectClaimHandle");
static_assert(sizeof(SmartObjectBlueprintFunctionLibrary_IsValidSmartObjectClaimHandle) == 0x000020, "Wrong size on SmartObjectBlueprintFunctionLibrary_IsValidSmartObjectClaimHandle");
static_assert(offsetof(SmartObjectBlueprintFunctionLibrary_IsValidSmartObjectClaimHandle, Handle) == 0x000000, "Member 'SmartObjectBlueprintFunctionLibrary_IsValidSmartObjectClaimHandle::Handle' has a wrong offset!");
static_assert(offsetof(SmartObjectBlueprintFunctionLibrary_IsValidSmartObjectClaimHandle, ReturnValue) == 0x000018, "Member 'SmartObjectBlueprintFunctionLibrary_IsValidSmartObjectClaimHandle::ReturnValue' has a wrong offset!");

struct SmartObjectBlueprintFunctionLibrary_RemoveMultipleSmartObjects final
{
public:
	TArray<class AActor*>                         SmartObjectActors;
	bool                                          ReturnValue;
	uint8                                         Pad_11[0x7];
};
static_assert(alignof(SmartObjectBlueprintFunctionLibrary_RemoveMultipleSmartObjects) == 0x000008, "Wrong alignment on SmartObjectBlueprintFunctionLibrary_RemoveMultipleSmartObjects");
static_assert(sizeof(SmartObjectBlueprintFunctionLibrary_RemoveMultipleSmartObjects) == 0x000018, "Wrong size on SmartObjectBlueprintFunctionLibrary_RemoveMultipleSmartObjects");
static_assert(offsetof(SmartObjectBlueprintFunctionLibrary_RemoveMultipleSmartObjects, SmartObjectActors) == 0x000000, "Member 'SmartObjectBlueprintFunctionLibrary_RemoveMultipleSmartObjects::SmartObjectActors' has a wrong offset!");
static_assert(offsetof(SmartObjectBlueprintFunctionLibrary_RemoveMultipleSmartObjects, ReturnValue) == 0x000010, "Member 'SmartObjectBlueprintFunctionLibrary_RemoveMultipleSmartObjects::ReturnValue' has a wrong offset!");

struct SmartObjectBlueprintFunctionLibrary_RemoveSmartObject final
{
public:
	class AActor*                                 SmartObjectActor;
	bool                                          ReturnValue;
	uint8                                         Pad_9[0x7];
};
static_assert(alignof(SmartObjectBlueprintFunctionLibrary_RemoveSmartObject) == 0x000008, "Wrong alignment on SmartObjectBlueprintFunctionLibrary_RemoveSmartObject");
static_assert(sizeof(SmartObjectBlueprintFunctionLibrary_RemoveSmartObject) == 0x000010, "Wrong size on SmartObjectBlueprintFunctionLibrary_RemoveSmartObject");
static_assert(offsetof(SmartObjectBlueprintFunctionLibrary_RemoveSmartObject, SmartObjectActor) == 0x000000, "Member 'SmartObjectBlueprintFunctionLibrary_RemoveSmartObject::SmartObjectActor' has a wrong offset!");
static_assert(offsetof(SmartObjectBlueprintFunctionLibrary_RemoveSmartObject, ReturnValue) == 0x000008, "Member 'SmartObjectBlueprintFunctionLibrary_RemoveSmartObject::ReturnValue' has a wrong offset!");

struct SmartObjectBlueprintFunctionLibrary_SetBlackboardValueAsSOClaimHandle final
{
public:
	class UBTNode*                                NodeOwner;
	struct FBlackboardKeySelector                 Key;
	struct FSmartObjectClaimHandle                Value;
};
static_assert(alignof(SmartObjectBlueprintFunctionLibrary_SetBlackboardValueAsSOClaimHandle) == 0x000008, "Wrong alignment on SmartObjectBlueprintFunctionLibrary_SetBlackboardValueAsSOClaimHandle");
static_assert(sizeof(SmartObjectBlueprintFunctionLibrary_SetBlackboardValueAsSOClaimHandle) == 0x000048, "Wrong size on SmartObjectBlueprintFunctionLibrary_SetBlackboardValueAsSOClaimHandle");
static_assert(offsetof(SmartObjectBlueprintFunctionLibrary_SetBlackboardValueAsSOClaimHandle, NodeOwner) == 0x000000, "Member 'SmartObjectBlueprintFunctionLibrary_SetBlackboardValueAsSOClaimHandle::NodeOwner' has a wrong offset!");
static_assert(offsetof(SmartObjectBlueprintFunctionLibrary_SetBlackboardValueAsSOClaimHandle, Key) == 0x000008, "Member 'SmartObjectBlueprintFunctionLibrary_SetBlackboardValueAsSOClaimHandle::Key' has a wrong offset!");
static_assert(offsetof(SmartObjectBlueprintFunctionLibrary_SetBlackboardValueAsSOClaimHandle, Value) == 0x000030, "Member 'SmartObjectBlueprintFunctionLibrary_SetBlackboardValueAsSOClaimHandle::Value' has a wrong offset!");

struct SmartObjectBlueprintFunctionLibrary_SetMultipleSmartObjectsEnabled final
{
public:
	TArray<class AActor*>                         SmartObjectActors;
	bool                                          bEnabled;
	bool                                          ReturnValue;
	uint8                                         Pad_12[0x6];
};
static_assert(alignof(SmartObjectBlueprintFunctionLibrary_SetMultipleSmartObjectsEnabled) == 0x000008, "Wrong alignment on SmartObjectBlueprintFunctionLibrary_SetMultipleSmartObjectsEnabled");
static_assert(sizeof(SmartObjectBlueprintFunctionLibrary_SetMultipleSmartObjectsEnabled) == 0x000018, "Wrong size on SmartObjectBlueprintFunctionLibrary_SetMultipleSmartObjectsEnabled");
static_assert(offsetof(SmartObjectBlueprintFunctionLibrary_SetMultipleSmartObjectsEnabled, SmartObjectActors) == 0x000000, "Member 'SmartObjectBlueprintFunctionLibrary_SetMultipleSmartObjectsEnabled::SmartObjectActors' has a wrong offset!");
static_assert(offsetof(SmartObjectBlueprintFunctionLibrary_SetMultipleSmartObjectsEnabled, bEnabled) == 0x000010, "Member 'SmartObjectBlueprintFunctionLibrary_SetMultipleSmartObjectsEnabled::bEnabled' has a wrong offset!");
static_assert(offsetof(SmartObjectBlueprintFunctionLibrary_SetMultipleSmartObjectsEnabled, ReturnValue) == 0x000011, "Member 'SmartObjectBlueprintFunctionLibrary_SetMultipleSmartObjectsEnabled::ReturnValue' has a wrong offset!");

struct SmartObjectBlueprintFunctionLibrary_SetSmartObjectEnabled final
{
public:
	class AActor*                                 SmartObjectActor;
	bool                                          bEnabled;
	bool                                          ReturnValue;
	uint8                                         Pad_A[0x6];
};
static_assert(alignof(SmartObjectBlueprintFunctionLibrary_SetSmartObjectEnabled) == 0x000008, "Wrong alignment on SmartObjectBlueprintFunctionLibrary_SetSmartObjectEnabled");
static_assert(sizeof(SmartObjectBlueprintFunctionLibrary_SetSmartObjectEnabled) == 0x000010, "Wrong size on SmartObjectBlueprintFunctionLibrary_SetSmartObjectEnabled");
static_assert(offsetof(SmartObjectBlueprintFunctionLibrary_SetSmartObjectEnabled, SmartObjectActor) == 0x000000, "Member 'SmartObjectBlueprintFunctionLibrary_SetSmartObjectEnabled::SmartObjectActor' has a wrong offset!");
static_assert(offsetof(SmartObjectBlueprintFunctionLibrary_SetSmartObjectEnabled, bEnabled) == 0x000008, "Member 'SmartObjectBlueprintFunctionLibrary_SetSmartObjectEnabled::bEnabled' has a wrong offset!");
static_assert(offsetof(SmartObjectBlueprintFunctionLibrary_SetSmartObjectEnabled, ReturnValue) == 0x000009, "Member 'SmartObjectBlueprintFunctionLibrary_SetSmartObjectEnabled::ReturnValue' has a wrong offset!");

struct SmartObjectBlueprintFunctionLibrary_SetValueAsSOClaimHandle final
{
public:
	class UBlackboardComponent*                   BlackboardComponent;
	class FName                                   KeyName;
	uint8                                         Pad_C[0x4];
	struct FSmartObjectClaimHandle                Value;
};
static_assert(alignof(SmartObjectBlueprintFunctionLibrary_SetValueAsSOClaimHandle) == 0x000008, "Wrong alignment on SmartObjectBlueprintFunctionLibrary_SetValueAsSOClaimHandle");
static_assert(sizeof(SmartObjectBlueprintFunctionLibrary_SetValueAsSOClaimHandle) == 0x000028, "Wrong size on SmartObjectBlueprintFunctionLibrary_SetValueAsSOClaimHandle");
static_assert(offsetof(SmartObjectBlueprintFunctionLibrary_SetValueAsSOClaimHandle, BlackboardComponent) == 0x000000, "Member 'SmartObjectBlueprintFunctionLibrary_SetValueAsSOClaimHandle::BlackboardComponent' has a wrong offset!");
static_assert(offsetof(SmartObjectBlueprintFunctionLibrary_SetValueAsSOClaimHandle, KeyName) == 0x000008, "Member 'SmartObjectBlueprintFunctionLibrary_SetValueAsSOClaimHandle::KeyName' has a wrong offset!");
static_assert(offsetof(SmartObjectBlueprintFunctionLibrary_SetValueAsSOClaimHandle, Value) == 0x000010, "Member 'SmartObjectBlueprintFunctionLibrary_SetValueAsSOClaimHandle::Value' has a wrong offset!");

struct SmartObjectComponent_ReceiveOnEvent final
{
public:
	struct FSmartObjectEventData                  EventData;
	const class AActor*                           Interactor;
};
static_assert(alignof(SmartObjectComponent_ReceiveOnEvent) == 0x000008, "Wrong alignment on SmartObjectComponent_ReceiveOnEvent");
static_assert(sizeof(SmartObjectComponent_ReceiveOnEvent) == 0x000030, "Wrong size on SmartObjectComponent_ReceiveOnEvent");
static_assert(offsetof(SmartObjectComponent_ReceiveOnEvent, EventData) == 0x000000, "Member 'SmartObjectComponent_ReceiveOnEvent::EventData' has a wrong offset!");
static_assert(offsetof(SmartObjectComponent_ReceiveOnEvent, Interactor) == 0x000028, "Member 'SmartObjectComponent_ReceiveOnEvent::Interactor' has a wrong offset!");

struct SmartObjectSubsystem_AddTagToInstance final
{
public:
	struct FSmartObjectHandle                     Handle;
	struct FGameplayTag                           tag;
};
static_assert(alignof(SmartObjectSubsystem_AddTagToInstance) == 0x000004, "Wrong alignment on SmartObjectSubsystem_AddTagToInstance");
static_assert(sizeof(SmartObjectSubsystem_AddTagToInstance) == 0x000008, "Wrong size on SmartObjectSubsystem_AddTagToInstance");
static_assert(offsetof(SmartObjectSubsystem_AddTagToInstance, Handle) == 0x000000, "Member 'SmartObjectSubsystem_AddTagToInstance::Handle' has a wrong offset!");
static_assert(offsetof(SmartObjectSubsystem_AddTagToInstance, tag) == 0x000004, "Member 'SmartObjectSubsystem_AddTagToInstance::tag' has a wrong offset!");

struct SmartObjectSubsystem_AddTagToSlot final
{
public:
	struct FSmartObjectSlotHandle                 SlotHandle;
	struct FGameplayTag                           tag;
	uint8                                         Pad_C[0x4];
};
static_assert(alignof(SmartObjectSubsystem_AddTagToSlot) == 0x000008, "Wrong alignment on SmartObjectSubsystem_AddTagToSlot");
static_assert(sizeof(SmartObjectSubsystem_AddTagToSlot) == 0x000010, "Wrong size on SmartObjectSubsystem_AddTagToSlot");
static_assert(offsetof(SmartObjectSubsystem_AddTagToSlot, SlotHandle) == 0x000000, "Member 'SmartObjectSubsystem_AddTagToSlot::SlotHandle' has a wrong offset!");
static_assert(offsetof(SmartObjectSubsystem_AddTagToSlot, tag) == 0x000008, "Member 'SmartObjectSubsystem_AddTagToSlot::tag' has a wrong offset!");

struct SmartObjectSubsystem_Claim final
{
public:
	struct FSmartObjectRequestResult              RequestResult;
	const class AActor*                           UserActor;
	struct FSmartObjectClaimHandle                ReturnValue;
};
static_assert(alignof(SmartObjectSubsystem_Claim) == 0x000008, "Wrong alignment on SmartObjectSubsystem_Claim");
static_assert(sizeof(SmartObjectSubsystem_Claim) == 0x000030, "Wrong size on SmartObjectSubsystem_Claim");
static_assert(offsetof(SmartObjectSubsystem_Claim, RequestResult) == 0x000000, "Member 'SmartObjectSubsystem_Claim::RequestResult' has a wrong offset!");
static_assert(offsetof(SmartObjectSubsystem_Claim, UserActor) == 0x000010, "Member 'SmartObjectSubsystem_Claim::UserActor' has a wrong offset!");
static_assert(offsetof(SmartObjectSubsystem_Claim, ReturnValue) == 0x000018, "Member 'SmartObjectSubsystem_Claim::ReturnValue' has a wrong offset!");

struct SmartObjectSubsystem_GetBehaviorDefinition final
{
public:
	struct FSmartObjectClaimHandle                ClaimHandle;
	TSubclassOf<class USmartObjectBehaviorDefinition> DefinitionClass;
	const class USmartObjectBehaviorDefinition*   ReturnValue;
};
static_assert(alignof(SmartObjectSubsystem_GetBehaviorDefinition) == 0x000008, "Wrong alignment on SmartObjectSubsystem_GetBehaviorDefinition");
static_assert(sizeof(SmartObjectSubsystem_GetBehaviorDefinition) == 0x000028, "Wrong size on SmartObjectSubsystem_GetBehaviorDefinition");
static_assert(offsetof(SmartObjectSubsystem_GetBehaviorDefinition, ClaimHandle) == 0x000000, "Member 'SmartObjectSubsystem_GetBehaviorDefinition::ClaimHandle' has a wrong offset!");
static_assert(offsetof(SmartObjectSubsystem_GetBehaviorDefinition, DefinitionClass) == 0x000018, "Member 'SmartObjectSubsystem_GetBehaviorDefinition::DefinitionClass' has a wrong offset!");
static_assert(offsetof(SmartObjectSubsystem_GetBehaviorDefinition, ReturnValue) == 0x000020, "Member 'SmartObjectSubsystem_GetBehaviorDefinition::ReturnValue' has a wrong offset!");

struct SmartObjectSubsystem_GetBehaviorDefinitionByRequestResult final
{
public:
	struct FSmartObjectRequestResult              RequestResult;
	TSubclassOf<class USmartObjectBehaviorDefinition> DefinitionClass;
	const class USmartObjectBehaviorDefinition*   ReturnValue;
};
static_assert(alignof(SmartObjectSubsystem_GetBehaviorDefinitionByRequestResult) == 0x000008, "Wrong alignment on SmartObjectSubsystem_GetBehaviorDefinitionByRequestResult");
static_assert(sizeof(SmartObjectSubsystem_GetBehaviorDefinitionByRequestResult) == 0x000020, "Wrong size on SmartObjectSubsystem_GetBehaviorDefinitionByRequestResult");
static_assert(offsetof(SmartObjectSubsystem_GetBehaviorDefinitionByRequestResult, RequestResult) == 0x000000, "Member 'SmartObjectSubsystem_GetBehaviorDefinitionByRequestResult::RequestResult' has a wrong offset!");
static_assert(offsetof(SmartObjectSubsystem_GetBehaviorDefinitionByRequestResult, DefinitionClass) == 0x000010, "Member 'SmartObjectSubsystem_GetBehaviorDefinitionByRequestResult::DefinitionClass' has a wrong offset!");
static_assert(offsetof(SmartObjectSubsystem_GetBehaviorDefinitionByRequestResult, ReturnValue) == 0x000018, "Member 'SmartObjectSubsystem_GetBehaviorDefinitionByRequestResult::ReturnValue' has a wrong offset!");

struct SmartObjectSubsystem_Release final
{
public:
	struct FSmartObjectClaimHandle                ClaimHandle;
	bool                                          ReturnValue;
	uint8                                         Pad_19[0x7];
};
static_assert(alignof(SmartObjectSubsystem_Release) == 0x000008, "Wrong alignment on SmartObjectSubsystem_Release");
static_assert(sizeof(SmartObjectSubsystem_Release) == 0x000020, "Wrong size on SmartObjectSubsystem_Release");
static_assert(offsetof(SmartObjectSubsystem_Release, ClaimHandle) == 0x000000, "Member 'SmartObjectSubsystem_Release::ClaimHandle' has a wrong offset!");
static_assert(offsetof(SmartObjectSubsystem_Release, ReturnValue) == 0x000018, "Member 'SmartObjectSubsystem_Release::ReturnValue' has a wrong offset!");

struct SmartObjectSubsystem_RemoveTagFromInstance final
{
public:
	struct FSmartObjectHandle                     Handle;
	struct FGameplayTag                           tag;
};
static_assert(alignof(SmartObjectSubsystem_RemoveTagFromInstance) == 0x000004, "Wrong alignment on SmartObjectSubsystem_RemoveTagFromInstance");
static_assert(sizeof(SmartObjectSubsystem_RemoveTagFromInstance) == 0x000008, "Wrong size on SmartObjectSubsystem_RemoveTagFromInstance");
static_assert(offsetof(SmartObjectSubsystem_RemoveTagFromInstance, Handle) == 0x000000, "Member 'SmartObjectSubsystem_RemoveTagFromInstance::Handle' has a wrong offset!");
static_assert(offsetof(SmartObjectSubsystem_RemoveTagFromInstance, tag) == 0x000004, "Member 'SmartObjectSubsystem_RemoveTagFromInstance::tag' has a wrong offset!");

struct SmartObjectSubsystem_RemoveTagFromSlot final
{
public:
	struct FSmartObjectSlotHandle                 SlotHandle;
	struct FGameplayTag                           tag;
	bool                                          ReturnValue;
	uint8                                         Pad_D[0x3];
};
static_assert(alignof(SmartObjectSubsystem_RemoveTagFromSlot) == 0x000008, "Wrong alignment on SmartObjectSubsystem_RemoveTagFromSlot");
static_assert(sizeof(SmartObjectSubsystem_RemoveTagFromSlot) == 0x000010, "Wrong size on SmartObjectSubsystem_RemoveTagFromSlot");
static_assert(offsetof(SmartObjectSubsystem_RemoveTagFromSlot, SlotHandle) == 0x000000, "Member 'SmartObjectSubsystem_RemoveTagFromSlot::SlotHandle' has a wrong offset!");
static_assert(offsetof(SmartObjectSubsystem_RemoveTagFromSlot, tag) == 0x000008, "Member 'SmartObjectSubsystem_RemoveTagFromSlot::tag' has a wrong offset!");
static_assert(offsetof(SmartObjectSubsystem_RemoveTagFromSlot, ReturnValue) == 0x00000C, "Member 'SmartObjectSubsystem_RemoveTagFromSlot::ReturnValue' has a wrong offset!");

struct SmartObjectSubsystem_SetEnabled final
{
public:
	struct FSmartObjectHandle                     Handle;
	bool                                          bEnabled;
	bool                                          ReturnValue;
	uint8                                         Pad_6[0x2];
};
static_assert(alignof(SmartObjectSubsystem_SetEnabled) == 0x000004, "Wrong alignment on SmartObjectSubsystem_SetEnabled");
static_assert(sizeof(SmartObjectSubsystem_SetEnabled) == 0x000008, "Wrong size on SmartObjectSubsystem_SetEnabled");
static_assert(offsetof(SmartObjectSubsystem_SetEnabled, Handle) == 0x000000, "Member 'SmartObjectSubsystem_SetEnabled::Handle' has a wrong offset!");
static_assert(offsetof(SmartObjectSubsystem_SetEnabled, bEnabled) == 0x000004, "Member 'SmartObjectSubsystem_SetEnabled::bEnabled' has a wrong offset!");
static_assert(offsetof(SmartObjectSubsystem_SetEnabled, ReturnValue) == 0x000005, "Member 'SmartObjectSubsystem_SetEnabled::ReturnValue' has a wrong offset!");

struct SmartObjectSubsystem_SetSlotEnabled final
{
public:
	struct FSmartObjectSlotHandle                 SlotHandle;
	bool                                          bEnabled;
	bool                                          ReturnValue;
	uint8                                         Pad_A[0x6];
};
static_assert(alignof(SmartObjectSubsystem_SetSlotEnabled) == 0x000008, "Wrong alignment on SmartObjectSubsystem_SetSlotEnabled");
static_assert(sizeof(SmartObjectSubsystem_SetSlotEnabled) == 0x000010, "Wrong size on SmartObjectSubsystem_SetSlotEnabled");
static_assert(offsetof(SmartObjectSubsystem_SetSlotEnabled, SlotHandle) == 0x000000, "Member 'SmartObjectSubsystem_SetSlotEnabled::SlotHandle' has a wrong offset!");
static_assert(offsetof(SmartObjectSubsystem_SetSlotEnabled, bEnabled) == 0x000008, "Member 'SmartObjectSubsystem_SetSlotEnabled::bEnabled' has a wrong offset!");
static_assert(offsetof(SmartObjectSubsystem_SetSlotEnabled, ReturnValue) == 0x000009, "Member 'SmartObjectSubsystem_SetSlotEnabled::ReturnValue' has a wrong offset!");

struct SmartObjectSubsystem_Use final
{
public:
	struct FSmartObjectClaimHandle                ClaimHandle;
	TSubclassOf<class USmartObjectBehaviorDefinition> DefinitionClass;
	const class USmartObjectBehaviorDefinition*   ReturnValue;
};
static_assert(alignof(SmartObjectSubsystem_Use) == 0x000008, "Wrong alignment on SmartObjectSubsystem_Use");
static_assert(sizeof(SmartObjectSubsystem_Use) == 0x000028, "Wrong size on SmartObjectSubsystem_Use");
static_assert(offsetof(SmartObjectSubsystem_Use, ClaimHandle) == 0x000000, "Member 'SmartObjectSubsystem_Use::ClaimHandle' has a wrong offset!");
static_assert(offsetof(SmartObjectSubsystem_Use, DefinitionClass) == 0x000018, "Member 'SmartObjectSubsystem_Use::DefinitionClass' has a wrong offset!");
static_assert(offsetof(SmartObjectSubsystem_Use, ReturnValue) == 0x000020, "Member 'SmartObjectSubsystem_Use::ReturnValue' has a wrong offset!");

struct SmartObjectSubsystem_FindSmartObject final
{
public:
	struct FSmartObjectRequest                    Request;
	const class AActor*                           UserActor;
	struct FSmartObjectRequestResult              ReturnValue;
	uint8                                         Pad_148[0x8];
};
static_assert(alignof(SmartObjectSubsystem_FindSmartObject) == 0x000010, "Wrong alignment on SmartObjectSubsystem_FindSmartObject");
static_assert(sizeof(SmartObjectSubsystem_FindSmartObject) == 0x000150, "Wrong size on SmartObjectSubsystem_FindSmartObject");
static_assert(offsetof(SmartObjectSubsystem_FindSmartObject, Request) == 0x000000, "Member 'SmartObjectSubsystem_FindSmartObject::Request' has a wrong offset!");
static_assert(offsetof(SmartObjectSubsystem_FindSmartObject, UserActor) == 0x000130, "Member 'SmartObjectSubsystem_FindSmartObject::UserActor' has a wrong offset!");
static_assert(offsetof(SmartObjectSubsystem_FindSmartObject, ReturnValue) == 0x000138, "Member 'SmartObjectSubsystem_FindSmartObject::ReturnValue' has a wrong offset!");

struct SmartObjectSubsystem_FindSmartObjects final
{
public:
	struct FSmartObjectRequest                    Request;
	TArray<struct FSmartObjectRequestResult>      OutResults;
	const class AActor*                           UserActor;
	bool                                          ReturnValue;
	uint8                                         Pad_149[0x7];
};
static_assert(alignof(SmartObjectSubsystem_FindSmartObjects) == 0x000010, "Wrong alignment on SmartObjectSubsystem_FindSmartObjects");
static_assert(sizeof(SmartObjectSubsystem_FindSmartObjects) == 0x000150, "Wrong size on SmartObjectSubsystem_FindSmartObjects");
static_assert(offsetof(SmartObjectSubsystem_FindSmartObjects, Request) == 0x000000, "Member 'SmartObjectSubsystem_FindSmartObjects::Request' has a wrong offset!");
static_assert(offsetof(SmartObjectSubsystem_FindSmartObjects, OutResults) == 0x000130, "Member 'SmartObjectSubsystem_FindSmartObjects::OutResults' has a wrong offset!");
static_assert(offsetof(SmartObjectSubsystem_FindSmartObjects, UserActor) == 0x000140, "Member 'SmartObjectSubsystem_FindSmartObjects::UserActor' has a wrong offset!");
static_assert(offsetof(SmartObjectSubsystem_FindSmartObjects, ReturnValue) == 0x000148, "Member 'SmartObjectSubsystem_FindSmartObjects::ReturnValue' has a wrong offset!");

struct SmartObjectSubsystem_GetInstanceTags final
{
public:
	struct FSmartObjectHandle                     Handle;
	uint8                                         Pad_4[0x4];
	struct FGameplayTagContainer                  ReturnValue;
};
static_assert(alignof(SmartObjectSubsystem_GetInstanceTags) == 0x000008, "Wrong alignment on SmartObjectSubsystem_GetInstanceTags");
static_assert(sizeof(SmartObjectSubsystem_GetInstanceTags) == 0x000028, "Wrong size on SmartObjectSubsystem_GetInstanceTags");
static_assert(offsetof(SmartObjectSubsystem_GetInstanceTags, Handle) == 0x000000, "Member 'SmartObjectSubsystem_GetInstanceTags::Handle' has a wrong offset!");
static_assert(offsetof(SmartObjectSubsystem_GetInstanceTags, ReturnValue) == 0x000008, "Member 'SmartObjectSubsystem_GetInstanceTags::ReturnValue' has a wrong offset!");

struct SmartObjectSubsystem_GetSlotLocation final
{
public:
	struct FSmartObjectClaimHandle                ClaimHandle;
	struct FVector                                OutSlotLocation;
	bool                                          ReturnValue;
	uint8                                         Pad_31[0x7];
};
static_assert(alignof(SmartObjectSubsystem_GetSlotLocation) == 0x000008, "Wrong alignment on SmartObjectSubsystem_GetSlotLocation");
static_assert(sizeof(SmartObjectSubsystem_GetSlotLocation) == 0x000038, "Wrong size on SmartObjectSubsystem_GetSlotLocation");
static_assert(offsetof(SmartObjectSubsystem_GetSlotLocation, ClaimHandle) == 0x000000, "Member 'SmartObjectSubsystem_GetSlotLocation::ClaimHandle' has a wrong offset!");
static_assert(offsetof(SmartObjectSubsystem_GetSlotLocation, OutSlotLocation) == 0x000018, "Member 'SmartObjectSubsystem_GetSlotLocation::OutSlotLocation' has a wrong offset!");
static_assert(offsetof(SmartObjectSubsystem_GetSlotLocation, ReturnValue) == 0x000030, "Member 'SmartObjectSubsystem_GetSlotLocation::ReturnValue' has a wrong offset!");

struct SmartObjectSubsystem_GetSlotTags final
{
public:
	struct FSmartObjectSlotHandle                 SlotHandle;
	struct FGameplayTagContainer                  ReturnValue;
};
static_assert(alignof(SmartObjectSubsystem_GetSlotTags) == 0x000008, "Wrong alignment on SmartObjectSubsystem_GetSlotTags");
static_assert(sizeof(SmartObjectSubsystem_GetSlotTags) == 0x000028, "Wrong size on SmartObjectSubsystem_GetSlotTags");
static_assert(offsetof(SmartObjectSubsystem_GetSlotTags, SlotHandle) == 0x000000, "Member 'SmartObjectSubsystem_GetSlotTags::SlotHandle' has a wrong offset!");
static_assert(offsetof(SmartObjectSubsystem_GetSlotTags, ReturnValue) == 0x000008, "Member 'SmartObjectSubsystem_GetSlotTags::ReturnValue' has a wrong offset!");

struct SmartObjectSubsystem_GetSlotTransform final
{
public:
	struct FSmartObjectClaimHandle                ClaimHandle;
	uint8                                         Pad_18[0x8];
	struct FTransform                             OutSlotTransform;
	bool                                          ReturnValue;
	uint8                                         Pad_81[0xF];
};
static_assert(alignof(SmartObjectSubsystem_GetSlotTransform) == 0x000010, "Wrong alignment on SmartObjectSubsystem_GetSlotTransform");
static_assert(sizeof(SmartObjectSubsystem_GetSlotTransform) == 0x000090, "Wrong size on SmartObjectSubsystem_GetSlotTransform");
static_assert(offsetof(SmartObjectSubsystem_GetSlotTransform, ClaimHandle) == 0x000000, "Member 'SmartObjectSubsystem_GetSlotTransform::ClaimHandle' has a wrong offset!");
static_assert(offsetof(SmartObjectSubsystem_GetSlotTransform, OutSlotTransform) == 0x000020, "Member 'SmartObjectSubsystem_GetSlotTransform::OutSlotTransform' has a wrong offset!");
static_assert(offsetof(SmartObjectSubsystem_GetSlotTransform, ReturnValue) == 0x000080, "Member 'SmartObjectSubsystem_GetSlotTransform::ReturnValue' has a wrong offset!");

struct SmartObjectSubsystem_GetSlotTransformFromRequestResult final
{
public:
	struct FSmartObjectRequestResult              RequestResult;
	struct FTransform                             OutSlotTransform;
	bool                                          ReturnValue;
	uint8                                         Pad_71[0xF];
};
static_assert(alignof(SmartObjectSubsystem_GetSlotTransformFromRequestResult) == 0x000010, "Wrong alignment on SmartObjectSubsystem_GetSlotTransformFromRequestResult");
static_assert(sizeof(SmartObjectSubsystem_GetSlotTransformFromRequestResult) == 0x000080, "Wrong size on SmartObjectSubsystem_GetSlotTransformFromRequestResult");
static_assert(offsetof(SmartObjectSubsystem_GetSlotTransformFromRequestResult, RequestResult) == 0x000000, "Member 'SmartObjectSubsystem_GetSlotTransformFromRequestResult::RequestResult' has a wrong offset!");
static_assert(offsetof(SmartObjectSubsystem_GetSlotTransformFromRequestResult, OutSlotTransform) == 0x000010, "Member 'SmartObjectSubsystem_GetSlotTransformFromRequestResult::OutSlotTransform' has a wrong offset!");
static_assert(offsetof(SmartObjectSubsystem_GetSlotTransformFromRequestResult, ReturnValue) == 0x000070, "Member 'SmartObjectSubsystem_GetSlotTransformFromRequestResult::ReturnValue' has a wrong offset!");

struct SmartObjectSubsystem_GetSmartObjectComponent final
{
public:
	struct FSmartObjectClaimHandle                ClaimHandle;
	class USmartObjectComponent*                  ReturnValue;
};
static_assert(alignof(SmartObjectSubsystem_GetSmartObjectComponent) == 0x000008, "Wrong alignment on SmartObjectSubsystem_GetSmartObjectComponent");
static_assert(sizeof(SmartObjectSubsystem_GetSmartObjectComponent) == 0x000020, "Wrong size on SmartObjectSubsystem_GetSmartObjectComponent");
static_assert(offsetof(SmartObjectSubsystem_GetSmartObjectComponent, ClaimHandle) == 0x000000, "Member 'SmartObjectSubsystem_GetSmartObjectComponent::ClaimHandle' has a wrong offset!");
static_assert(offsetof(SmartObjectSubsystem_GetSmartObjectComponent, ReturnValue) == 0x000018, "Member 'SmartObjectSubsystem_GetSmartObjectComponent::ReturnValue' has a wrong offset!");

struct SmartObjectSubsystem_GetSmartObjectComponentByRequestResult final
{
public:
	struct FSmartObjectRequestResult              Result;
	class USmartObjectComponent*                  ReturnValue;
};
static_assert(alignof(SmartObjectSubsystem_GetSmartObjectComponentByRequestResult) == 0x000008, "Wrong alignment on SmartObjectSubsystem_GetSmartObjectComponentByRequestResult");
static_assert(sizeof(SmartObjectSubsystem_GetSmartObjectComponentByRequestResult) == 0x000018, "Wrong size on SmartObjectSubsystem_GetSmartObjectComponentByRequestResult");
static_assert(offsetof(SmartObjectSubsystem_GetSmartObjectComponentByRequestResult, Result) == 0x000000, "Member 'SmartObjectSubsystem_GetSmartObjectComponentByRequestResult::Result' has a wrong offset!");
static_assert(offsetof(SmartObjectSubsystem_GetSmartObjectComponentByRequestResult, ReturnValue) == 0x000010, "Member 'SmartObjectSubsystem_GetSmartObjectComponentByRequestResult::ReturnValue' has a wrong offset!");

}
