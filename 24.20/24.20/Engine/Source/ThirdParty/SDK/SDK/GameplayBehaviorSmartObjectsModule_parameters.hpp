#pragma once

#include "Basic.hpp"

#include "SmartObjectsModule_structs.hpp"

namespace SDK::Params
{

struct AITask_UseGameplayBehaviorSmartObject_UseClaimedGameplayBehaviorSmartObject final
{
public:
	class AAIController*                          Controller;
	struct FSmartObjectClaimHandle                ClaimHandle;
	bool                                          bLockAILogic;
	uint8                                         Pad_21[0x7];
	class UAITask_UseGameplayBehaviorSmartObject* ReturnValue;
};
static_assert(alignof(AITask_UseGameplayBehaviorSmartObject_UseClaimedGameplayBehaviorSmartObject) == 0x000008, "Wrong alignment on AITask_UseGameplayBehaviorSmartObject_UseClaimedGameplayBehaviorSmartObject");
static_assert(sizeof(AITask_UseGameplayBehaviorSmartObject_UseClaimedGameplayBehaviorSmartObject) == 0x000030, "Wrong size on AITask_UseGameplayBehaviorSmartObject_UseClaimedGameplayBehaviorSmartObject");
static_assert(offsetof(AITask_UseGameplayBehaviorSmartObject_UseClaimedGameplayBehaviorSmartObject, Controller) == 0x000000, "Member 'AITask_UseGameplayBehaviorSmartObject_UseClaimedGameplayBehaviorSmartObject::Controller' has a wrong offset!");
static_assert(offsetof(AITask_UseGameplayBehaviorSmartObject_UseClaimedGameplayBehaviorSmartObject, ClaimHandle) == 0x000008, "Member 'AITask_UseGameplayBehaviorSmartObject_UseClaimedGameplayBehaviorSmartObject::ClaimHandle' has a wrong offset!");
static_assert(offsetof(AITask_UseGameplayBehaviorSmartObject_UseClaimedGameplayBehaviorSmartObject, bLockAILogic) == 0x000020, "Member 'AITask_UseGameplayBehaviorSmartObject_UseClaimedGameplayBehaviorSmartObject::bLockAILogic' has a wrong offset!");
static_assert(offsetof(AITask_UseGameplayBehaviorSmartObject_UseClaimedGameplayBehaviorSmartObject, ReturnValue) == 0x000028, "Member 'AITask_UseGameplayBehaviorSmartObject_UseClaimedGameplayBehaviorSmartObject::ReturnValue' has a wrong offset!");

struct AITask_UseGameplayBehaviorSmartObject_UseGameplayBehaviorSmartObject final
{
public:
	class AAIController*                          Controller;
	class AActor*                                 SmartObjectActor;
	class USmartObjectComponent*                  SmartObjectComponent;
	bool                                          bLockAILogic;
	uint8                                         Pad_19[0x7];
	class UAITask_UseGameplayBehaviorSmartObject* ReturnValue;
};
static_assert(alignof(AITask_UseGameplayBehaviorSmartObject_UseGameplayBehaviorSmartObject) == 0x000008, "Wrong alignment on AITask_UseGameplayBehaviorSmartObject_UseGameplayBehaviorSmartObject");
static_assert(sizeof(AITask_UseGameplayBehaviorSmartObject_UseGameplayBehaviorSmartObject) == 0x000028, "Wrong size on AITask_UseGameplayBehaviorSmartObject_UseGameplayBehaviorSmartObject");
static_assert(offsetof(AITask_UseGameplayBehaviorSmartObject_UseGameplayBehaviorSmartObject, Controller) == 0x000000, "Member 'AITask_UseGameplayBehaviorSmartObject_UseGameplayBehaviorSmartObject::Controller' has a wrong offset!");
static_assert(offsetof(AITask_UseGameplayBehaviorSmartObject_UseGameplayBehaviorSmartObject, SmartObjectActor) == 0x000008, "Member 'AITask_UseGameplayBehaviorSmartObject_UseGameplayBehaviorSmartObject::SmartObjectActor' has a wrong offset!");
static_assert(offsetof(AITask_UseGameplayBehaviorSmartObject_UseGameplayBehaviorSmartObject, SmartObjectComponent) == 0x000010, "Member 'AITask_UseGameplayBehaviorSmartObject_UseGameplayBehaviorSmartObject::SmartObjectComponent' has a wrong offset!");
static_assert(offsetof(AITask_UseGameplayBehaviorSmartObject_UseGameplayBehaviorSmartObject, bLockAILogic) == 0x000018, "Member 'AITask_UseGameplayBehaviorSmartObject_UseGameplayBehaviorSmartObject::bLockAILogic' has a wrong offset!");
static_assert(offsetof(AITask_UseGameplayBehaviorSmartObject_UseGameplayBehaviorSmartObject, ReturnValue) == 0x000020, "Member 'AITask_UseGameplayBehaviorSmartObject_UseGameplayBehaviorSmartObject::ReturnValue' has a wrong offset!");

struct GameplayBehaviorSmartObjectsBlueprintFunctionLibrary_UseGameplayBehaviorSmartObject final
{
public:
	class AActor*                                 Avatar;
	class AActor*                                 SmartObject;
	bool                                          ReturnValue;
	uint8                                         Pad_11[0x7];
};
static_assert(alignof(GameplayBehaviorSmartObjectsBlueprintFunctionLibrary_UseGameplayBehaviorSmartObject) == 0x000008, "Wrong alignment on GameplayBehaviorSmartObjectsBlueprintFunctionLibrary_UseGameplayBehaviorSmartObject");
static_assert(sizeof(GameplayBehaviorSmartObjectsBlueprintFunctionLibrary_UseGameplayBehaviorSmartObject) == 0x000018, "Wrong size on GameplayBehaviorSmartObjectsBlueprintFunctionLibrary_UseGameplayBehaviorSmartObject");
static_assert(offsetof(GameplayBehaviorSmartObjectsBlueprintFunctionLibrary_UseGameplayBehaviorSmartObject, Avatar) == 0x000000, "Member 'GameplayBehaviorSmartObjectsBlueprintFunctionLibrary_UseGameplayBehaviorSmartObject::Avatar' has a wrong offset!");
static_assert(offsetof(GameplayBehaviorSmartObjectsBlueprintFunctionLibrary_UseGameplayBehaviorSmartObject, SmartObject) == 0x000008, "Member 'GameplayBehaviorSmartObjectsBlueprintFunctionLibrary_UseGameplayBehaviorSmartObject::SmartObject' has a wrong offset!");
static_assert(offsetof(GameplayBehaviorSmartObjectsBlueprintFunctionLibrary_UseGameplayBehaviorSmartObject, ReturnValue) == 0x000010, "Member 'GameplayBehaviorSmartObjectsBlueprintFunctionLibrary_UseGameplayBehaviorSmartObject::ReturnValue' has a wrong offset!");

}
