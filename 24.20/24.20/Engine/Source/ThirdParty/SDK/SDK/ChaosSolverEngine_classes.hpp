#pragma once

#include "Basic.hpp"

#include "Engine_classes.hpp"
#include "DeveloperSettings_classes.hpp"
#include "ChaosSolverEngine_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "CoreUObject_classes.hpp"
#include "Chaos_structs.hpp"

namespace SDK
{

class UChaosDebugDrawComponent final : public UActorComponent
{
public:
	uint8                                         Pad_A0[0x8];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"ChaosDebugDrawComponent">();
	}
	static class UChaosDebugDrawComponent* GetDefaultObj()
	{
		return GetDefaultObjImpl<UChaosDebugDrawComponent>();
	}
};
static_assert(alignof(UChaosDebugDrawComponent) == 0x000008, "Wrong alignment on UChaosDebugDrawComponent");
static_assert(sizeof(UChaosDebugDrawComponent) == 0x0000A8, "Wrong size on UChaosDebugDrawComponent");

class UChaosEventListenerComponent : public UActorComponent
{
public:
	uint8                                         Pad_A0[0x8];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"ChaosEventListenerComponent">();
	}
	static class UChaosEventListenerComponent* GetDefaultObj()
	{
		return GetDefaultObjImpl<UChaosEventListenerComponent>();
	}
};
static_assert(alignof(UChaosEventListenerComponent) == 0x000008, "Wrong alignment on UChaosEventListenerComponent");
static_assert(sizeof(UChaosEventListenerComponent) == 0x0000A8, "Wrong size on UChaosEventListenerComponent");

class UChaosGameplayEventDispatcher final : public UChaosEventListenerComponent
{
public:
	uint8                                         Pad_A8[0x110];
	TMap<class UPrimitiveComponent*, struct FChaosHandlerSet> CollisionEventRegistrations;
	TMap<class UPrimitiveComponent*, struct FBreakEventCallbackWrapper> BreakEventRegistrations;
	TMap<class UPrimitiveComponent*, struct FRemovalEventCallbackWrapper> RemovalEventRegistrations;
	TMap<class UPrimitiveComponent*, struct FCrumblingEventCallbackWrapper> CrumblingEventRegistrations;
	uint8                                         Pad_2F8[0x10];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"ChaosGameplayEventDispatcher">();
	}
	static class UChaosGameplayEventDispatcher* GetDefaultObj()
	{
		return GetDefaultObjImpl<UChaosGameplayEventDispatcher>();
	}
};
static_assert(alignof(UChaosGameplayEventDispatcher) == 0x000008, "Wrong alignment on UChaosGameplayEventDispatcher");
static_assert(sizeof(UChaosGameplayEventDispatcher) == 0x000308, "Wrong size on UChaosGameplayEventDispatcher");
static_assert(offsetof(UChaosGameplayEventDispatcher, CollisionEventRegistrations) == 0x0001B8, "Member 'UChaosGameplayEventDispatcher::CollisionEventRegistrations' has a wrong offset!");
static_assert(offsetof(UChaosGameplayEventDispatcher, BreakEventRegistrations) == 0x000208, "Member 'UChaosGameplayEventDispatcher::BreakEventRegistrations' has a wrong offset!");
static_assert(offsetof(UChaosGameplayEventDispatcher, RemovalEventRegistrations) == 0x000258, "Member 'UChaosGameplayEventDispatcher::RemovalEventRegistrations' has a wrong offset!");
static_assert(offsetof(UChaosGameplayEventDispatcher, CrumblingEventRegistrations) == 0x0002A8, "Member 'UChaosGameplayEventDispatcher::CrumblingEventRegistrations' has a wrong offset!");

class IChaosNotifyHandlerInterface final : public IInterface
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"ChaosNotifyHandlerInterface">();
	}
	static class IChaosNotifyHandlerInterface* GetDefaultObj()
	{
		return GetDefaultObjImpl<IChaosNotifyHandlerInterface>();
	}
};
static_assert(alignof(IChaosNotifyHandlerInterface) == 0x000008, "Wrong alignment on IChaosNotifyHandlerInterface");
static_assert(sizeof(IChaosNotifyHandlerInterface) == 0x000028, "Wrong size on IChaosNotifyHandlerInterface");

class UChaosSolverEngineBlueprintLibrary final : public UBlueprintFunctionLibrary
{
public:
	static struct FHitResult ConvertPhysicsCollisionToHitResult(const struct FChaosPhysicsCollisionInfo& PhysicsCollision);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"ChaosSolverEngineBlueprintLibrary">();
	}
	static class UChaosSolverEngineBlueprintLibrary* GetDefaultObj()
	{
		return GetDefaultObjImpl<UChaosSolverEngineBlueprintLibrary>();
	}
};
static_assert(alignof(UChaosSolverEngineBlueprintLibrary) == 0x000008, "Wrong alignment on UChaosSolverEngineBlueprintLibrary");
static_assert(sizeof(UChaosSolverEngineBlueprintLibrary) == 0x000028, "Wrong size on UChaosSolverEngineBlueprintLibrary");

class UChaosSolver final : public UObject
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"ChaosSolver">();
	}
	static class UChaosSolver* GetDefaultObj()
	{
		return GetDefaultObjImpl<UChaosSolver>();
	}
};
static_assert(alignof(UChaosSolver) == 0x000008, "Wrong alignment on UChaosSolver");
static_assert(sizeof(UChaosSolver) == 0x000028, "Wrong size on UChaosSolver");

class AChaosSolverActor final : public AActor
{
public:
	struct FChaosSolverConfiguration              Properties;
	float                                         TimeStepMultiplier;
	int32                                         CollisionIterations;
	int32                                         PushOutIterations;
	int32                                         PushOutPairIterations;
	float                                         ClusterConnectionFactor;
	EClusterConnectionTypeEnum                    ClusterUnionConnectionType;
	bool                                          DoGenerateCollisionData;
	uint8                                         Pad_306[0x2];
	struct FSolverCollisionFilterSettings         CollisionFilterSettings;
	bool                                          DoGenerateBreakingData;
	uint8                                         Pad_319[0x3];
	struct FSolverBreakingFilterSettings          BreakingFilterSettings;
	bool                                          DoGenerateTrailingData;
	uint8                                         Pad_32D[0x3];
	struct FSolverTrailingFilterSettings          TrailingFilterSettings;
	float                                         MassScale;
	bool                                          bHasFloor;
	uint8                                         Pad_345[0x3];
	float                                         FloorHeight;
	struct FChaosDebugSubstepControl              ChaosDebugSubstepControl;
	uint8                                         Pad_34F[0x1];
	class UBillboardComponent*                    SpriteComponent;
	uint8                                         Pad_358[0x18];
	class UChaosGameplayEventDispatcher*          GameplayEventDispatcherComponent;
	uint8                                         Pad_378[0x8];

public:
	void SetAsCurrentWorldSolver();
	void SetSolverActive(bool bActive);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"ChaosSolverActor">();
	}
	static class AChaosSolverActor* GetDefaultObj()
	{
		return GetDefaultObjImpl<AChaosSolverActor>();
	}
};
static_assert(alignof(AChaosSolverActor) == 0x000008, "Wrong alignment on AChaosSolverActor");
static_assert(sizeof(AChaosSolverActor) == 0x000380, "Wrong size on AChaosSolverActor");
static_assert(offsetof(AChaosSolverActor, Properties) == 0x000288, "Member 'AChaosSolverActor::Properties' has a wrong offset!");
static_assert(offsetof(AChaosSolverActor, TimeStepMultiplier) == 0x0002F0, "Member 'AChaosSolverActor::TimeStepMultiplier' has a wrong offset!");
static_assert(offsetof(AChaosSolverActor, CollisionIterations) == 0x0002F4, "Member 'AChaosSolverActor::CollisionIterations' has a wrong offset!");
static_assert(offsetof(AChaosSolverActor, PushOutIterations) == 0x0002F8, "Member 'AChaosSolverActor::PushOutIterations' has a wrong offset!");
static_assert(offsetof(AChaosSolverActor, PushOutPairIterations) == 0x0002FC, "Member 'AChaosSolverActor::PushOutPairIterations' has a wrong offset!");
static_assert(offsetof(AChaosSolverActor, ClusterConnectionFactor) == 0x000300, "Member 'AChaosSolverActor::ClusterConnectionFactor' has a wrong offset!");
static_assert(offsetof(AChaosSolverActor, ClusterUnionConnectionType) == 0x000304, "Member 'AChaosSolverActor::ClusterUnionConnectionType' has a wrong offset!");
static_assert(offsetof(AChaosSolverActor, DoGenerateCollisionData) == 0x000305, "Member 'AChaosSolverActor::DoGenerateCollisionData' has a wrong offset!");
static_assert(offsetof(AChaosSolverActor, CollisionFilterSettings) == 0x000308, "Member 'AChaosSolverActor::CollisionFilterSettings' has a wrong offset!");
static_assert(offsetof(AChaosSolverActor, DoGenerateBreakingData) == 0x000318, "Member 'AChaosSolverActor::DoGenerateBreakingData' has a wrong offset!");
static_assert(offsetof(AChaosSolverActor, BreakingFilterSettings) == 0x00031C, "Member 'AChaosSolverActor::BreakingFilterSettings' has a wrong offset!");
static_assert(offsetof(AChaosSolverActor, DoGenerateTrailingData) == 0x00032C, "Member 'AChaosSolverActor::DoGenerateTrailingData' has a wrong offset!");
static_assert(offsetof(AChaosSolverActor, TrailingFilterSettings) == 0x000330, "Member 'AChaosSolverActor::TrailingFilterSettings' has a wrong offset!");
static_assert(offsetof(AChaosSolverActor, MassScale) == 0x000340, "Member 'AChaosSolverActor::MassScale' has a wrong offset!");
static_assert(offsetof(AChaosSolverActor, bHasFloor) == 0x000344, "Member 'AChaosSolverActor::bHasFloor' has a wrong offset!");
static_assert(offsetof(AChaosSolverActor, FloorHeight) == 0x000348, "Member 'AChaosSolverActor::FloorHeight' has a wrong offset!");
static_assert(offsetof(AChaosSolverActor, ChaosDebugSubstepControl) == 0x00034C, "Member 'AChaosSolverActor::ChaosDebugSubstepControl' has a wrong offset!");
static_assert(offsetof(AChaosSolverActor, SpriteComponent) == 0x000350, "Member 'AChaosSolverActor::SpriteComponent' has a wrong offset!");
static_assert(offsetof(AChaosSolverActor, GameplayEventDispatcherComponent) == 0x000370, "Member 'AChaosSolverActor::GameplayEventDispatcherComponent' has a wrong offset!");

class UChaosSolverSettings final : public UDeveloperSettings
{
public:
	uint8                                         Pad_30[0x8];
	struct FSoftClassPath                         DefaultChaosSolverActorClass;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"ChaosSolverSettings">();
	}
	static class UChaosSolverSettings* GetDefaultObj()
	{
		return GetDefaultObjImpl<UChaosSolverSettings>();
	}
};
static_assert(alignof(UChaosSolverSettings) == 0x000008, "Wrong alignment on UChaosSolverSettings");
static_assert(sizeof(UChaosSolverSettings) == 0x000050, "Wrong size on UChaosSolverSettings");
static_assert(offsetof(UChaosSolverSettings, DefaultChaosSolverActorClass) == 0x000038, "Member 'UChaosSolverSettings::DefaultChaosSolverActorClass' has a wrong offset!");

}
