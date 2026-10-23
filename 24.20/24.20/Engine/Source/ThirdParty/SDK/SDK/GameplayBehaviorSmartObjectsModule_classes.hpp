#pragma once

#include "Basic.hpp"

#include "AIModule_classes.hpp"
#include "SmartObjectsModule_classes.hpp"
#include "Engine_classes.hpp"
#include "GameplayTags_structs.hpp"

namespace SDK
{

class UGameplayBehaviorSmartObjectBehaviorDefinition final : public USmartObjectBehaviorDefinition
{
public:
	class UGameplayBehaviorConfig*                GameplayBehaviorConfig;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"GameplayBehaviorSmartObjectBehaviorDefinition">();
	}
	static class UGameplayBehaviorSmartObjectBehaviorDefinition* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGameplayBehaviorSmartObjectBehaviorDefinition>();
	}
};
static_assert(alignof(UGameplayBehaviorSmartObjectBehaviorDefinition) == 0x000008, "Wrong alignment on UGameplayBehaviorSmartObjectBehaviorDefinition");
static_assert(sizeof(UGameplayBehaviorSmartObjectBehaviorDefinition) == 0x000030, "Wrong size on UGameplayBehaviorSmartObjectBehaviorDefinition");
static_assert(offsetof(UGameplayBehaviorSmartObjectBehaviorDefinition, GameplayBehaviorConfig) == 0x000028, "Member 'UGameplayBehaviorSmartObjectBehaviorDefinition::GameplayBehaviorConfig' has a wrong offset!");

class UAITask_UseGameplayBehaviorSmartObject final : public UAITask
{
public:
	TMulticastInlineDelegate<void()>              OnSucceeded;
	TMulticastInlineDelegate<void()>              OnFailed;
	TMulticastInlineDelegate<void()>              OnMoveToFailed;
	class UAITask_MoveTo*                         MoveToTask;
	class UGameplayBehavior*                      GameplayBehavior;
	uint8                                         Pad_A8[0x28];

public:
	static class UAITask_UseGameplayBehaviorSmartObject* UseClaimedGameplayBehaviorSmartObject(class AAIController* Controller, const struct FSmartObjectClaimHandle& ClaimHandle, bool bLockAILogic);
	static class UAITask_UseGameplayBehaviorSmartObject* UseGameplayBehaviorSmartObject(class AAIController* Controller, class AActor* SmartObjectActor, class USmartObjectComponent* SmartObjectComponent, bool bLockAILogic);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"AITask_UseGameplayBehaviorSmartObject">();
	}
	static class UAITask_UseGameplayBehaviorSmartObject* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAITask_UseGameplayBehaviorSmartObject>();
	}
};
static_assert(alignof(UAITask_UseGameplayBehaviorSmartObject) == 0x000008, "Wrong alignment on UAITask_UseGameplayBehaviorSmartObject");
static_assert(sizeof(UAITask_UseGameplayBehaviorSmartObject) == 0x0000D0, "Wrong size on UAITask_UseGameplayBehaviorSmartObject");
static_assert(offsetof(UAITask_UseGameplayBehaviorSmartObject, OnSucceeded) == 0x000068, "Member 'UAITask_UseGameplayBehaviorSmartObject::OnSucceeded' has a wrong offset!");
static_assert(offsetof(UAITask_UseGameplayBehaviorSmartObject, OnFailed) == 0x000078, "Member 'UAITask_UseGameplayBehaviorSmartObject::OnFailed' has a wrong offset!");
static_assert(offsetof(UAITask_UseGameplayBehaviorSmartObject, OnMoveToFailed) == 0x000088, "Member 'UAITask_UseGameplayBehaviorSmartObject::OnMoveToFailed' has a wrong offset!");
static_assert(offsetof(UAITask_UseGameplayBehaviorSmartObject, MoveToTask) == 0x000098, "Member 'UAITask_UseGameplayBehaviorSmartObject::MoveToTask' has a wrong offset!");
static_assert(offsetof(UAITask_UseGameplayBehaviorSmartObject, GameplayBehavior) == 0x0000A0, "Member 'UAITask_UseGameplayBehaviorSmartObject::GameplayBehavior' has a wrong offset!");

class UBTTask_FindAndUseGameplayBehaviorSmartObject final : public UBTTaskNode
{
public:
	struct FGameplayTagQuery                      ActivityRequirements;
	float                                         Radius;
	uint8                                         Pad_BC[0x4];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"BTTask_FindAndUseGameplayBehaviorSmartObject">();
	}
	static class UBTTask_FindAndUseGameplayBehaviorSmartObject* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBTTask_FindAndUseGameplayBehaviorSmartObject>();
	}
};
static_assert(alignof(UBTTask_FindAndUseGameplayBehaviorSmartObject) == 0x000008, "Wrong alignment on UBTTask_FindAndUseGameplayBehaviorSmartObject");
static_assert(sizeof(UBTTask_FindAndUseGameplayBehaviorSmartObject) == 0x0000C0, "Wrong size on UBTTask_FindAndUseGameplayBehaviorSmartObject");
static_assert(offsetof(UBTTask_FindAndUseGameplayBehaviorSmartObject, ActivityRequirements) == 0x000070, "Member 'UBTTask_FindAndUseGameplayBehaviorSmartObject::ActivityRequirements' has a wrong offset!");
static_assert(offsetof(UBTTask_FindAndUseGameplayBehaviorSmartObject, Radius) == 0x0000B8, "Member 'UBTTask_FindAndUseGameplayBehaviorSmartObject::Radius' has a wrong offset!");

class UGameplayBehaviorSmartObjectsBlueprintFunctionLibrary final : public UBlueprintFunctionLibrary
{
public:
	static bool UseGameplayBehaviorSmartObject(class AActor* Avatar, class AActor* SmartObject);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"GameplayBehaviorSmartObjectsBlueprintFunctionLibrary">();
	}
	static class UGameplayBehaviorSmartObjectsBlueprintFunctionLibrary* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGameplayBehaviorSmartObjectsBlueprintFunctionLibrary>();
	}
};
static_assert(alignof(UGameplayBehaviorSmartObjectsBlueprintFunctionLibrary) == 0x000008, "Wrong alignment on UGameplayBehaviorSmartObjectsBlueprintFunctionLibrary");
static_assert(sizeof(UGameplayBehaviorSmartObjectsBlueprintFunctionLibrary) == 0x000028, "Wrong size on UGameplayBehaviorSmartObjectsBlueprintFunctionLibrary");

}
