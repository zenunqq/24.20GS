#pragma once

#include "Basic.hpp"

#include "GameplayTasks_structs.hpp"
#include "CoreUObject_classes.hpp"
#include "Engine_classes.hpp"

namespace SDK
{

class UGameplayTask : public UObject
{
public:
	uint8                                         Pad_28[0x8];
	class FName                                   InstanceName;
	uint8                                         Pad_34[0x2];
	ETaskResourceOverlapPolicy                    ResourceOverlapPolicy;
	uint8                                         Pad_37[0x21];
	class UGameplayTask*                          ChildTask;

public:
	void EndTask();
	void ReadyForActivation();

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"GameplayTask">();
	}
	static class UGameplayTask* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGameplayTask>();
	}
};
static_assert(alignof(UGameplayTask) == 0x000008, "Wrong alignment on UGameplayTask");
static_assert(sizeof(UGameplayTask) == 0x000060, "Wrong size on UGameplayTask");
static_assert(offsetof(UGameplayTask, InstanceName) == 0x000030, "Member 'UGameplayTask::InstanceName' has a wrong offset!");
static_assert(offsetof(UGameplayTask, ResourceOverlapPolicy) == 0x000036, "Member 'UGameplayTask::ResourceOverlapPolicy' has a wrong offset!");
static_assert(offsetof(UGameplayTask, ChildTask) == 0x000058, "Member 'UGameplayTask::ChildTask' has a wrong offset!");

class IGameplayTaskOwnerInterface final : public IInterface
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"GameplayTaskOwnerInterface">();
	}
	static class IGameplayTaskOwnerInterface* GetDefaultObj()
	{
		return GetDefaultObjImpl<IGameplayTaskOwnerInterface>();
	}
};
static_assert(alignof(IGameplayTaskOwnerInterface) == 0x000008, "Wrong alignment on IGameplayTaskOwnerInterface");
static_assert(sizeof(IGameplayTaskOwnerInterface) == 0x000028, "Wrong size on IGameplayTaskOwnerInterface");

class UGameplayTaskResource : public UObject
{
public:
	int32                                         ManualResourceID;
	int8                                          AutoResourceID;
	uint8                                         Pad_2D[0x3];
	uint8                                         bManuallySetID : 1;
	uint8                                         Pad_31[0x7];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"GameplayTaskResource">();
	}
	static class UGameplayTaskResource* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGameplayTaskResource>();
	}
};
static_assert(alignof(UGameplayTaskResource) == 0x000008, "Wrong alignment on UGameplayTaskResource");
static_assert(sizeof(UGameplayTaskResource) == 0x000038, "Wrong size on UGameplayTaskResource");
static_assert(offsetof(UGameplayTaskResource, ManualResourceID) == 0x000028, "Member 'UGameplayTaskResource::ManualResourceID' has a wrong offset!");
static_assert(offsetof(UGameplayTaskResource, AutoResourceID) == 0x00002C, "Member 'UGameplayTaskResource::AutoResourceID' has a wrong offset!");

class UGameplayTasksComponent : public UActorComponent
{
public:
	uint8                                         Pad_A0[0x14];
	uint8                                         BitPad_B4_0 : 1;
	uint8                                         bIsNetDirty : 1;
	uint8                                         Pad_B5[0x3];
	TArray<class UGameplayTask*>                  TaskPriorityQueue;
	uint8                                         Pad_C8[0x10];
	TArray<class UGameplayTask*>                  TickingTasks;
	TArray<class UGameplayTask*>                  KnownTasks;
	TMulticastInlineDelegate<void(const struct FGameplayResourceSet& NewlyClaimed, const struct FGameplayResourceSet& FreshlyReleased)> OnClaimedResourcesChange;
	TArray<class UGameplayTask*>                  SimulatedTasks;

public:
	static EGameplayTaskRunResult K2_RunGameplayTask(TScriptInterface<class IGameplayTaskOwnerInterface> TaskOwner, class UGameplayTask* Task, uint8 Priority, const TArray<TSubclassOf<class UGameplayTaskResource>>& AdditionalRequiredResources, const TArray<TSubclassOf<class UGameplayTaskResource>>& AdditionalClaimedResources);

	void OnRep_SimulatedTasks(const TArray<class UGameplayTask*>& PreviousSimulatedTasks);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"GameplayTasksComponent">();
	}
	static class UGameplayTasksComponent* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGameplayTasksComponent>();
	}
};
static_assert(alignof(UGameplayTasksComponent) == 0x000008, "Wrong alignment on UGameplayTasksComponent");
static_assert(sizeof(UGameplayTasksComponent) == 0x000118, "Wrong size on UGameplayTasksComponent");
static_assert(offsetof(UGameplayTasksComponent, TaskPriorityQueue) == 0x0000B8, "Member 'UGameplayTasksComponent::TaskPriorityQueue' has a wrong offset!");
static_assert(offsetof(UGameplayTasksComponent, TickingTasks) == 0x0000D8, "Member 'UGameplayTasksComponent::TickingTasks' has a wrong offset!");
static_assert(offsetof(UGameplayTasksComponent, KnownTasks) == 0x0000E8, "Member 'UGameplayTasksComponent::KnownTasks' has a wrong offset!");
static_assert(offsetof(UGameplayTasksComponent, OnClaimedResourcesChange) == 0x0000F8, "Member 'UGameplayTasksComponent::OnClaimedResourcesChange' has a wrong offset!");
static_assert(offsetof(UGameplayTasksComponent, SimulatedTasks) == 0x000108, "Member 'UGameplayTasksComponent::SimulatedTasks' has a wrong offset!");

class UGameplayTask_ClaimResource final : public UGameplayTask
{
public:
	static class UGameplayTask_ClaimResource* ClaimResource(TScriptInterface<class IGameplayTaskOwnerInterface> InTaskOwner, TSubclassOf<class UGameplayTaskResource> ResourceClass, const uint8 Priority, const class FName TaskInstanceName);
	static class UGameplayTask_ClaimResource* ClaimResources(TScriptInterface<class IGameplayTaskOwnerInterface> InTaskOwner, const TArray<TSubclassOf<class UGameplayTaskResource>>& ResourceClasses, const uint8 Priority, const class FName TaskInstanceName);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"GameplayTask_ClaimResource">();
	}
	static class UGameplayTask_ClaimResource* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGameplayTask_ClaimResource>();
	}
};
static_assert(alignof(UGameplayTask_ClaimResource) == 0x000008, "Wrong alignment on UGameplayTask_ClaimResource");
static_assert(sizeof(UGameplayTask_ClaimResource) == 0x000060, "Wrong size on UGameplayTask_ClaimResource");

class UGameplayTask_SpawnActor final : public UGameplayTask
{
public:
	TMulticastInlineDelegate<void(class AActor* SpawnedActor)> Success;
	TMulticastInlineDelegate<void(class AActor* SpawnedActor)> DidNotSpawn;
	uint8                                         Pad_80[0x30];
	TSubclassOf<class AActor>                     ClassToSpawn;

public:
	static class UGameplayTask_SpawnActor* SpawnActor(TScriptInterface<class IGameplayTaskOwnerInterface> TaskOwner, const struct FVector& SpawnLocation, const struct FRotator& SpawnRotation, TSubclassOf<class AActor> Class_0, bool bSpawnOnlyOnAuthority);

	bool BeginSpawningActor(class UObject* WorldContextObject, class AActor** SpawnedActor);
	void FinishSpawningActor(class UObject* WorldContextObject, class AActor* SpawnedActor);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"GameplayTask_SpawnActor">();
	}
	static class UGameplayTask_SpawnActor* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGameplayTask_SpawnActor>();
	}
};
static_assert(alignof(UGameplayTask_SpawnActor) == 0x000008, "Wrong alignment on UGameplayTask_SpawnActor");
static_assert(sizeof(UGameplayTask_SpawnActor) == 0x0000B8, "Wrong size on UGameplayTask_SpawnActor");
static_assert(offsetof(UGameplayTask_SpawnActor, Success) == 0x000060, "Member 'UGameplayTask_SpawnActor::Success' has a wrong offset!");
static_assert(offsetof(UGameplayTask_SpawnActor, DidNotSpawn) == 0x000070, "Member 'UGameplayTask_SpawnActor::DidNotSpawn' has a wrong offset!");
static_assert(offsetof(UGameplayTask_SpawnActor, ClassToSpawn) == 0x0000B0, "Member 'UGameplayTask_SpawnActor::ClassToSpawn' has a wrong offset!");

class UGameplayTask_TimeLimitedExecution final : public UGameplayTask
{
public:
	TMulticastInlineDelegate<void()>              OnFinished;
	TMulticastInlineDelegate<void()>              OnTimeExpired;
	uint8                                         Pad_80[0x10];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"GameplayTask_TimeLimitedExecution">();
	}
	static class UGameplayTask_TimeLimitedExecution* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGameplayTask_TimeLimitedExecution>();
	}
};
static_assert(alignof(UGameplayTask_TimeLimitedExecution) == 0x000008, "Wrong alignment on UGameplayTask_TimeLimitedExecution");
static_assert(sizeof(UGameplayTask_TimeLimitedExecution) == 0x000090, "Wrong size on UGameplayTask_TimeLimitedExecution");
static_assert(offsetof(UGameplayTask_TimeLimitedExecution, OnFinished) == 0x000060, "Member 'UGameplayTask_TimeLimitedExecution::OnFinished' has a wrong offset!");
static_assert(offsetof(UGameplayTask_TimeLimitedExecution, OnTimeExpired) == 0x000070, "Member 'UGameplayTask_TimeLimitedExecution::OnTimeExpired' has a wrong offset!");

class UGameplayTask_WaitDelay final : public UGameplayTask
{
public:
	TMulticastInlineDelegate<void()>              OnFinish;
	uint8                                         Pad_70[0x8];

public:
	static class UGameplayTask_WaitDelay* TaskWaitDelay(TScriptInterface<class IGameplayTaskOwnerInterface> TaskOwner, float Time, const uint8 Priority);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"GameplayTask_WaitDelay">();
	}
	static class UGameplayTask_WaitDelay* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGameplayTask_WaitDelay>();
	}
};
static_assert(alignof(UGameplayTask_WaitDelay) == 0x000008, "Wrong alignment on UGameplayTask_WaitDelay");
static_assert(sizeof(UGameplayTask_WaitDelay) == 0x000078, "Wrong size on UGameplayTask_WaitDelay");
static_assert(offsetof(UGameplayTask_WaitDelay, OnFinish) == 0x000060, "Member 'UGameplayTask_WaitDelay::OnFinish' has a wrong offset!");

}
