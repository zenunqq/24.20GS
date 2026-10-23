#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"

namespace SDK::Params
{

struct NavigationPath_EnableDebugDrawing final
{
public:
	bool                                          bShouldDrawDebugData;
	uint8                                         Pad_1[0x3];
	struct FLinearColor                           PathColor;
};
static_assert(alignof(NavigationPath_EnableDebugDrawing) == 0x000004, "Wrong alignment on NavigationPath_EnableDebugDrawing");
static_assert(sizeof(NavigationPath_EnableDebugDrawing) == 0x000014, "Wrong size on NavigationPath_EnableDebugDrawing");
static_assert(offsetof(NavigationPath_EnableDebugDrawing, bShouldDrawDebugData) == 0x000000, "Member 'NavigationPath_EnableDebugDrawing::bShouldDrawDebugData' has a wrong offset!");
static_assert(offsetof(NavigationPath_EnableDebugDrawing, PathColor) == 0x000004, "Member 'NavigationPath_EnableDebugDrawing::PathColor' has a wrong offset!");

struct NavigationPath_EnableRecalculationOnInvalidation final
{
public:
	ENavigationOptionFlag                         DoRecalculation;
};
static_assert(alignof(NavigationPath_EnableRecalculationOnInvalidation) == 0x000001, "Wrong alignment on NavigationPath_EnableRecalculationOnInvalidation");
static_assert(sizeof(NavigationPath_EnableRecalculationOnInvalidation) == 0x000001, "Wrong size on NavigationPath_EnableRecalculationOnInvalidation");
static_assert(offsetof(NavigationPath_EnableRecalculationOnInvalidation, DoRecalculation) == 0x000000, "Member 'NavigationPath_EnableRecalculationOnInvalidation::DoRecalculation' has a wrong offset!");

struct NavigationPath_GetDebugString final
{
public:
	class FString                                 ReturnValue;
};
static_assert(alignof(NavigationPath_GetDebugString) == 0x000008, "Wrong alignment on NavigationPath_GetDebugString");
static_assert(sizeof(NavigationPath_GetDebugString) == 0x000010, "Wrong size on NavigationPath_GetDebugString");
static_assert(offsetof(NavigationPath_GetDebugString, ReturnValue) == 0x000000, "Member 'NavigationPath_GetDebugString::ReturnValue' has a wrong offset!");

struct NavigationPath_GetPathCost final
{
public:
	float                                         ReturnValue;
};
static_assert(alignof(NavigationPath_GetPathCost) == 0x000004, "Wrong alignment on NavigationPath_GetPathCost");
static_assert(sizeof(NavigationPath_GetPathCost) == 0x000004, "Wrong size on NavigationPath_GetPathCost");
static_assert(offsetof(NavigationPath_GetPathCost, ReturnValue) == 0x000000, "Member 'NavigationPath_GetPathCost::ReturnValue' has a wrong offset!");

struct NavigationPath_GetPathLength final
{
public:
	float                                         ReturnValue;
};
static_assert(alignof(NavigationPath_GetPathLength) == 0x000004, "Wrong alignment on NavigationPath_GetPathLength");
static_assert(sizeof(NavigationPath_GetPathLength) == 0x000004, "Wrong size on NavigationPath_GetPathLength");
static_assert(offsetof(NavigationPath_GetPathLength, ReturnValue) == 0x000000, "Member 'NavigationPath_GetPathLength::ReturnValue' has a wrong offset!");

struct NavigationPath_IsPartial final
{
public:
	bool                                          ReturnValue;
};
static_assert(alignof(NavigationPath_IsPartial) == 0x000001, "Wrong alignment on NavigationPath_IsPartial");
static_assert(sizeof(NavigationPath_IsPartial) == 0x000001, "Wrong size on NavigationPath_IsPartial");
static_assert(offsetof(NavigationPath_IsPartial, ReturnValue) == 0x000000, "Member 'NavigationPath_IsPartial::ReturnValue' has a wrong offset!");

struct NavigationPath_IsStringPulled final
{
public:
	bool                                          ReturnValue;
};
static_assert(alignof(NavigationPath_IsStringPulled) == 0x000001, "Wrong alignment on NavigationPath_IsStringPulled");
static_assert(sizeof(NavigationPath_IsStringPulled) == 0x000001, "Wrong size on NavigationPath_IsStringPulled");
static_assert(offsetof(NavigationPath_IsStringPulled, ReturnValue) == 0x000000, "Member 'NavigationPath_IsStringPulled::ReturnValue' has a wrong offset!");

struct NavigationPath_IsValid final
{
public:
	bool                                          ReturnValue;
};
static_assert(alignof(NavigationPath_IsValid) == 0x000001, "Wrong alignment on NavigationPath_IsValid");
static_assert(sizeof(NavigationPath_IsValid) == 0x000001, "Wrong size on NavigationPath_IsValid");
static_assert(offsetof(NavigationPath_IsValid, ReturnValue) == 0x000000, "Member 'NavigationPath_IsValid::ReturnValue' has a wrong offset!");

struct NavigationSystemV1_FindPathToActorSynchronously final
{
public:
	class UObject*                                WorldContextObject;
	struct FVector                                PathStart;
	class AActor*                                 GoalActor;
	float                                         TetherDistance;
	uint8                                         Pad_2C[0x4];
	class AActor*                                 PathfindingContext;
	TSubclassOf<class UNavigationQueryFilter>     FilterClass;
	class UNavigationPath*                        ReturnValue;
};
static_assert(alignof(NavigationSystemV1_FindPathToActorSynchronously) == 0x000008, "Wrong alignment on NavigationSystemV1_FindPathToActorSynchronously");
static_assert(sizeof(NavigationSystemV1_FindPathToActorSynchronously) == 0x000048, "Wrong size on NavigationSystemV1_FindPathToActorSynchronously");
static_assert(offsetof(NavigationSystemV1_FindPathToActorSynchronously, WorldContextObject) == 0x000000, "Member 'NavigationSystemV1_FindPathToActorSynchronously::WorldContextObject' has a wrong offset!");
static_assert(offsetof(NavigationSystemV1_FindPathToActorSynchronously, PathStart) == 0x000008, "Member 'NavigationSystemV1_FindPathToActorSynchronously::PathStart' has a wrong offset!");
static_assert(offsetof(NavigationSystemV1_FindPathToActorSynchronously, GoalActor) == 0x000020, "Member 'NavigationSystemV1_FindPathToActorSynchronously::GoalActor' has a wrong offset!");
static_assert(offsetof(NavigationSystemV1_FindPathToActorSynchronously, TetherDistance) == 0x000028, "Member 'NavigationSystemV1_FindPathToActorSynchronously::TetherDistance' has a wrong offset!");
static_assert(offsetof(NavigationSystemV1_FindPathToActorSynchronously, PathfindingContext) == 0x000030, "Member 'NavigationSystemV1_FindPathToActorSynchronously::PathfindingContext' has a wrong offset!");
static_assert(offsetof(NavigationSystemV1_FindPathToActorSynchronously, FilterClass) == 0x000038, "Member 'NavigationSystemV1_FindPathToActorSynchronously::FilterClass' has a wrong offset!");
static_assert(offsetof(NavigationSystemV1_FindPathToActorSynchronously, ReturnValue) == 0x000040, "Member 'NavigationSystemV1_FindPathToActorSynchronously::ReturnValue' has a wrong offset!");

struct NavigationSystemV1_FindPathToLocationSynchronously final
{
public:
	class UObject*                                WorldContextObject;
	struct FVector                                PathStart;
	struct FVector                                PathEnd;
	class AActor*                                 PathfindingContext;
	TSubclassOf<class UNavigationQueryFilter>     FilterClass;
	class UNavigationPath*                        ReturnValue;
};
static_assert(alignof(NavigationSystemV1_FindPathToLocationSynchronously) == 0x000008, "Wrong alignment on NavigationSystemV1_FindPathToLocationSynchronously");
static_assert(sizeof(NavigationSystemV1_FindPathToLocationSynchronously) == 0x000050, "Wrong size on NavigationSystemV1_FindPathToLocationSynchronously");
static_assert(offsetof(NavigationSystemV1_FindPathToLocationSynchronously, WorldContextObject) == 0x000000, "Member 'NavigationSystemV1_FindPathToLocationSynchronously::WorldContextObject' has a wrong offset!");
static_assert(offsetof(NavigationSystemV1_FindPathToLocationSynchronously, PathStart) == 0x000008, "Member 'NavigationSystemV1_FindPathToLocationSynchronously::PathStart' has a wrong offset!");
static_assert(offsetof(NavigationSystemV1_FindPathToLocationSynchronously, PathEnd) == 0x000020, "Member 'NavigationSystemV1_FindPathToLocationSynchronously::PathEnd' has a wrong offset!");
static_assert(offsetof(NavigationSystemV1_FindPathToLocationSynchronously, PathfindingContext) == 0x000038, "Member 'NavigationSystemV1_FindPathToLocationSynchronously::PathfindingContext' has a wrong offset!");
static_assert(offsetof(NavigationSystemV1_FindPathToLocationSynchronously, FilterClass) == 0x000040, "Member 'NavigationSystemV1_FindPathToLocationSynchronously::FilterClass' has a wrong offset!");
static_assert(offsetof(NavigationSystemV1_FindPathToLocationSynchronously, ReturnValue) == 0x000048, "Member 'NavigationSystemV1_FindPathToLocationSynchronously::ReturnValue' has a wrong offset!");

struct NavigationSystemV1_GetNavigationSystem final
{
public:
	class UObject*                                WorldContextObject;
	class UNavigationSystemV1*                    ReturnValue;
};
static_assert(alignof(NavigationSystemV1_GetNavigationSystem) == 0x000008, "Wrong alignment on NavigationSystemV1_GetNavigationSystem");
static_assert(sizeof(NavigationSystemV1_GetNavigationSystem) == 0x000010, "Wrong size on NavigationSystemV1_GetNavigationSystem");
static_assert(offsetof(NavigationSystemV1_GetNavigationSystem, WorldContextObject) == 0x000000, "Member 'NavigationSystemV1_GetNavigationSystem::WorldContextObject' has a wrong offset!");
static_assert(offsetof(NavigationSystemV1_GetNavigationSystem, ReturnValue) == 0x000008, "Member 'NavigationSystemV1_GetNavigationSystem::ReturnValue' has a wrong offset!");

struct NavigationSystemV1_GetPathCost final
{
public:
	class UObject*                                WorldContextObject;
	struct FVector                                PathStart;
	struct FVector                                PathEnd;
	float                                         PathCost;
	uint8                                         Pad_3C[0x4];
	class ANavigationData*                        NavData;
	TSubclassOf<class UNavigationQueryFilter>     FilterClass;
	ENavigationQueryResult                        ReturnValue;
	uint8                                         Pad_51[0x7];
};
static_assert(alignof(NavigationSystemV1_GetPathCost) == 0x000008, "Wrong alignment on NavigationSystemV1_GetPathCost");
static_assert(sizeof(NavigationSystemV1_GetPathCost) == 0x000058, "Wrong size on NavigationSystemV1_GetPathCost");
static_assert(offsetof(NavigationSystemV1_GetPathCost, WorldContextObject) == 0x000000, "Member 'NavigationSystemV1_GetPathCost::WorldContextObject' has a wrong offset!");
static_assert(offsetof(NavigationSystemV1_GetPathCost, PathStart) == 0x000008, "Member 'NavigationSystemV1_GetPathCost::PathStart' has a wrong offset!");
static_assert(offsetof(NavigationSystemV1_GetPathCost, PathEnd) == 0x000020, "Member 'NavigationSystemV1_GetPathCost::PathEnd' has a wrong offset!");
static_assert(offsetof(NavigationSystemV1_GetPathCost, PathCost) == 0x000038, "Member 'NavigationSystemV1_GetPathCost::PathCost' has a wrong offset!");
static_assert(offsetof(NavigationSystemV1_GetPathCost, NavData) == 0x000040, "Member 'NavigationSystemV1_GetPathCost::NavData' has a wrong offset!");
static_assert(offsetof(NavigationSystemV1_GetPathCost, FilterClass) == 0x000048, "Member 'NavigationSystemV1_GetPathCost::FilterClass' has a wrong offset!");
static_assert(offsetof(NavigationSystemV1_GetPathCost, ReturnValue) == 0x000050, "Member 'NavigationSystemV1_GetPathCost::ReturnValue' has a wrong offset!");

struct NavigationSystemV1_GetPathLength final
{
public:
	class UObject*                                WorldContextObject;
	struct FVector                                PathStart;
	struct FVector                                PathEnd;
	float                                         PathLength;
	uint8                                         Pad_3C[0x4];
	class ANavigationData*                        NavData;
	TSubclassOf<class UNavigationQueryFilter>     FilterClass;
	ENavigationQueryResult                        ReturnValue;
	uint8                                         Pad_51[0x7];
};
static_assert(alignof(NavigationSystemV1_GetPathLength) == 0x000008, "Wrong alignment on NavigationSystemV1_GetPathLength");
static_assert(sizeof(NavigationSystemV1_GetPathLength) == 0x000058, "Wrong size on NavigationSystemV1_GetPathLength");
static_assert(offsetof(NavigationSystemV1_GetPathLength, WorldContextObject) == 0x000000, "Member 'NavigationSystemV1_GetPathLength::WorldContextObject' has a wrong offset!");
static_assert(offsetof(NavigationSystemV1_GetPathLength, PathStart) == 0x000008, "Member 'NavigationSystemV1_GetPathLength::PathStart' has a wrong offset!");
static_assert(offsetof(NavigationSystemV1_GetPathLength, PathEnd) == 0x000020, "Member 'NavigationSystemV1_GetPathLength::PathEnd' has a wrong offset!");
static_assert(offsetof(NavigationSystemV1_GetPathLength, PathLength) == 0x000038, "Member 'NavigationSystemV1_GetPathLength::PathLength' has a wrong offset!");
static_assert(offsetof(NavigationSystemV1_GetPathLength, NavData) == 0x000040, "Member 'NavigationSystemV1_GetPathLength::NavData' has a wrong offset!");
static_assert(offsetof(NavigationSystemV1_GetPathLength, FilterClass) == 0x000048, "Member 'NavigationSystemV1_GetPathLength::FilterClass' has a wrong offset!");
static_assert(offsetof(NavigationSystemV1_GetPathLength, ReturnValue) == 0x000050, "Member 'NavigationSystemV1_GetPathLength::ReturnValue' has a wrong offset!");

struct NavigationSystemV1_IsNavigationBeingBuilt final
{
public:
	class UObject*                                WorldContextObject;
	bool                                          ReturnValue;
	uint8                                         Pad_9[0x7];
};
static_assert(alignof(NavigationSystemV1_IsNavigationBeingBuilt) == 0x000008, "Wrong alignment on NavigationSystemV1_IsNavigationBeingBuilt");
static_assert(sizeof(NavigationSystemV1_IsNavigationBeingBuilt) == 0x000010, "Wrong size on NavigationSystemV1_IsNavigationBeingBuilt");
static_assert(offsetof(NavigationSystemV1_IsNavigationBeingBuilt, WorldContextObject) == 0x000000, "Member 'NavigationSystemV1_IsNavigationBeingBuilt::WorldContextObject' has a wrong offset!");
static_assert(offsetof(NavigationSystemV1_IsNavigationBeingBuilt, ReturnValue) == 0x000008, "Member 'NavigationSystemV1_IsNavigationBeingBuilt::ReturnValue' has a wrong offset!");

struct NavigationSystemV1_IsNavigationBeingBuiltOrLocked final
{
public:
	class UObject*                                WorldContextObject;
	bool                                          ReturnValue;
	uint8                                         Pad_9[0x7];
};
static_assert(alignof(NavigationSystemV1_IsNavigationBeingBuiltOrLocked) == 0x000008, "Wrong alignment on NavigationSystemV1_IsNavigationBeingBuiltOrLocked");
static_assert(sizeof(NavigationSystemV1_IsNavigationBeingBuiltOrLocked) == 0x000010, "Wrong size on NavigationSystemV1_IsNavigationBeingBuiltOrLocked");
static_assert(offsetof(NavigationSystemV1_IsNavigationBeingBuiltOrLocked, WorldContextObject) == 0x000000, "Member 'NavigationSystemV1_IsNavigationBeingBuiltOrLocked::WorldContextObject' has a wrong offset!");
static_assert(offsetof(NavigationSystemV1_IsNavigationBeingBuiltOrLocked, ReturnValue) == 0x000008, "Member 'NavigationSystemV1_IsNavigationBeingBuiltOrLocked::ReturnValue' has a wrong offset!");

struct NavigationSystemV1_K2_GetRandomLocationInNavigableRadius final
{
public:
	class UObject*                                WorldContextObject;
	struct FVector                                Origin;
	struct FVector                                RandomLocation;
	float                                         Radius;
	uint8                                         Pad_3C[0x4];
	class ANavigationData*                        NavData;
	TSubclassOf<class UNavigationQueryFilter>     FilterClass;
	bool                                          ReturnValue;
	uint8                                         Pad_51[0x7];
};
static_assert(alignof(NavigationSystemV1_K2_GetRandomLocationInNavigableRadius) == 0x000008, "Wrong alignment on NavigationSystemV1_K2_GetRandomLocationInNavigableRadius");
static_assert(sizeof(NavigationSystemV1_K2_GetRandomLocationInNavigableRadius) == 0x000058, "Wrong size on NavigationSystemV1_K2_GetRandomLocationInNavigableRadius");
static_assert(offsetof(NavigationSystemV1_K2_GetRandomLocationInNavigableRadius, WorldContextObject) == 0x000000, "Member 'NavigationSystemV1_K2_GetRandomLocationInNavigableRadius::WorldContextObject' has a wrong offset!");
static_assert(offsetof(NavigationSystemV1_K2_GetRandomLocationInNavigableRadius, Origin) == 0x000008, "Member 'NavigationSystemV1_K2_GetRandomLocationInNavigableRadius::Origin' has a wrong offset!");
static_assert(offsetof(NavigationSystemV1_K2_GetRandomLocationInNavigableRadius, RandomLocation) == 0x000020, "Member 'NavigationSystemV1_K2_GetRandomLocationInNavigableRadius::RandomLocation' has a wrong offset!");
static_assert(offsetof(NavigationSystemV1_K2_GetRandomLocationInNavigableRadius, Radius) == 0x000038, "Member 'NavigationSystemV1_K2_GetRandomLocationInNavigableRadius::Radius' has a wrong offset!");
static_assert(offsetof(NavigationSystemV1_K2_GetRandomLocationInNavigableRadius, NavData) == 0x000040, "Member 'NavigationSystemV1_K2_GetRandomLocationInNavigableRadius::NavData' has a wrong offset!");
static_assert(offsetof(NavigationSystemV1_K2_GetRandomLocationInNavigableRadius, FilterClass) == 0x000048, "Member 'NavigationSystemV1_K2_GetRandomLocationInNavigableRadius::FilterClass' has a wrong offset!");
static_assert(offsetof(NavigationSystemV1_K2_GetRandomLocationInNavigableRadius, ReturnValue) == 0x000050, "Member 'NavigationSystemV1_K2_GetRandomLocationInNavigableRadius::ReturnValue' has a wrong offset!");

struct NavigationSystemV1_K2_GetRandomPointInNavigableRadius final
{
public:
	class UObject*                                WorldContextObject;
	struct FVector                                Origin;
	struct FVector                                RandomLocation;
	float                                         Radius;
	uint8                                         Pad_3C[0x4];
	class ANavigationData*                        NavData;
	TSubclassOf<class UNavigationQueryFilter>     FilterClass;
	bool                                          ReturnValue;
	uint8                                         Pad_51[0x7];
};
static_assert(alignof(NavigationSystemV1_K2_GetRandomPointInNavigableRadius) == 0x000008, "Wrong alignment on NavigationSystemV1_K2_GetRandomPointInNavigableRadius");
static_assert(sizeof(NavigationSystemV1_K2_GetRandomPointInNavigableRadius) == 0x000058, "Wrong size on NavigationSystemV1_K2_GetRandomPointInNavigableRadius");
static_assert(offsetof(NavigationSystemV1_K2_GetRandomPointInNavigableRadius, WorldContextObject) == 0x000000, "Member 'NavigationSystemV1_K2_GetRandomPointInNavigableRadius::WorldContextObject' has a wrong offset!");
static_assert(offsetof(NavigationSystemV1_K2_GetRandomPointInNavigableRadius, Origin) == 0x000008, "Member 'NavigationSystemV1_K2_GetRandomPointInNavigableRadius::Origin' has a wrong offset!");
static_assert(offsetof(NavigationSystemV1_K2_GetRandomPointInNavigableRadius, RandomLocation) == 0x000020, "Member 'NavigationSystemV1_K2_GetRandomPointInNavigableRadius::RandomLocation' has a wrong offset!");
static_assert(offsetof(NavigationSystemV1_K2_GetRandomPointInNavigableRadius, Radius) == 0x000038, "Member 'NavigationSystemV1_K2_GetRandomPointInNavigableRadius::Radius' has a wrong offset!");
static_assert(offsetof(NavigationSystemV1_K2_GetRandomPointInNavigableRadius, NavData) == 0x000040, "Member 'NavigationSystemV1_K2_GetRandomPointInNavigableRadius::NavData' has a wrong offset!");
static_assert(offsetof(NavigationSystemV1_K2_GetRandomPointInNavigableRadius, FilterClass) == 0x000048, "Member 'NavigationSystemV1_K2_GetRandomPointInNavigableRadius::FilterClass' has a wrong offset!");
static_assert(offsetof(NavigationSystemV1_K2_GetRandomPointInNavigableRadius, ReturnValue) == 0x000050, "Member 'NavigationSystemV1_K2_GetRandomPointInNavigableRadius::ReturnValue' has a wrong offset!");

struct NavigationSystemV1_K2_GetRandomReachablePointInRadius final
{
public:
	class UObject*                                WorldContextObject;
	struct FVector                                Origin;
	struct FVector                                RandomLocation;
	float                                         Radius;
	uint8                                         Pad_3C[0x4];
	class ANavigationData*                        NavData;
	TSubclassOf<class UNavigationQueryFilter>     FilterClass;
	bool                                          ReturnValue;
	uint8                                         Pad_51[0x7];
};
static_assert(alignof(NavigationSystemV1_K2_GetRandomReachablePointInRadius) == 0x000008, "Wrong alignment on NavigationSystemV1_K2_GetRandomReachablePointInRadius");
static_assert(sizeof(NavigationSystemV1_K2_GetRandomReachablePointInRadius) == 0x000058, "Wrong size on NavigationSystemV1_K2_GetRandomReachablePointInRadius");
static_assert(offsetof(NavigationSystemV1_K2_GetRandomReachablePointInRadius, WorldContextObject) == 0x000000, "Member 'NavigationSystemV1_K2_GetRandomReachablePointInRadius::WorldContextObject' has a wrong offset!");
static_assert(offsetof(NavigationSystemV1_K2_GetRandomReachablePointInRadius, Origin) == 0x000008, "Member 'NavigationSystemV1_K2_GetRandomReachablePointInRadius::Origin' has a wrong offset!");
static_assert(offsetof(NavigationSystemV1_K2_GetRandomReachablePointInRadius, RandomLocation) == 0x000020, "Member 'NavigationSystemV1_K2_GetRandomReachablePointInRadius::RandomLocation' has a wrong offset!");
static_assert(offsetof(NavigationSystemV1_K2_GetRandomReachablePointInRadius, Radius) == 0x000038, "Member 'NavigationSystemV1_K2_GetRandomReachablePointInRadius::Radius' has a wrong offset!");
static_assert(offsetof(NavigationSystemV1_K2_GetRandomReachablePointInRadius, NavData) == 0x000040, "Member 'NavigationSystemV1_K2_GetRandomReachablePointInRadius::NavData' has a wrong offset!");
static_assert(offsetof(NavigationSystemV1_K2_GetRandomReachablePointInRadius, FilterClass) == 0x000048, "Member 'NavigationSystemV1_K2_GetRandomReachablePointInRadius::FilterClass' has a wrong offset!");
static_assert(offsetof(NavigationSystemV1_K2_GetRandomReachablePointInRadius, ReturnValue) == 0x000050, "Member 'NavigationSystemV1_K2_GetRandomReachablePointInRadius::ReturnValue' has a wrong offset!");

struct NavigationSystemV1_K2_ProjectPointToNavigation final
{
public:
	class UObject*                                WorldContextObject;
	struct FVector                                Point;
	struct FVector                                ProjectedLocation;
	class ANavigationData*                        NavData;
	TSubclassOf<class UNavigationQueryFilter>     FilterClass;
	struct FVector                                QueryExtent;
	bool                                          ReturnValue;
	uint8                                         Pad_61[0x7];
};
static_assert(alignof(NavigationSystemV1_K2_ProjectPointToNavigation) == 0x000008, "Wrong alignment on NavigationSystemV1_K2_ProjectPointToNavigation");
static_assert(sizeof(NavigationSystemV1_K2_ProjectPointToNavigation) == 0x000068, "Wrong size on NavigationSystemV1_K2_ProjectPointToNavigation");
static_assert(offsetof(NavigationSystemV1_K2_ProjectPointToNavigation, WorldContextObject) == 0x000000, "Member 'NavigationSystemV1_K2_ProjectPointToNavigation::WorldContextObject' has a wrong offset!");
static_assert(offsetof(NavigationSystemV1_K2_ProjectPointToNavigation, Point) == 0x000008, "Member 'NavigationSystemV1_K2_ProjectPointToNavigation::Point' has a wrong offset!");
static_assert(offsetof(NavigationSystemV1_K2_ProjectPointToNavigation, ProjectedLocation) == 0x000020, "Member 'NavigationSystemV1_K2_ProjectPointToNavigation::ProjectedLocation' has a wrong offset!");
static_assert(offsetof(NavigationSystemV1_K2_ProjectPointToNavigation, NavData) == 0x000038, "Member 'NavigationSystemV1_K2_ProjectPointToNavigation::NavData' has a wrong offset!");
static_assert(offsetof(NavigationSystemV1_K2_ProjectPointToNavigation, FilterClass) == 0x000040, "Member 'NavigationSystemV1_K2_ProjectPointToNavigation::FilterClass' has a wrong offset!");
static_assert(offsetof(NavigationSystemV1_K2_ProjectPointToNavigation, QueryExtent) == 0x000048, "Member 'NavigationSystemV1_K2_ProjectPointToNavigation::QueryExtent' has a wrong offset!");
static_assert(offsetof(NavigationSystemV1_K2_ProjectPointToNavigation, ReturnValue) == 0x000060, "Member 'NavigationSystemV1_K2_ProjectPointToNavigation::ReturnValue' has a wrong offset!");

struct NavigationSystemV1_NavigationRaycast final
{
public:
	class UObject*                                WorldContextObject;
	struct FVector                                RayStart;
	struct FVector                                RayEnd;
	struct FVector                                HitLocation;
	TSubclassOf<class UNavigationQueryFilter>     FilterClass;
	class AController*                            Querier;
	bool                                          ReturnValue;
	uint8                                         Pad_61[0x7];
};
static_assert(alignof(NavigationSystemV1_NavigationRaycast) == 0x000008, "Wrong alignment on NavigationSystemV1_NavigationRaycast");
static_assert(sizeof(NavigationSystemV1_NavigationRaycast) == 0x000068, "Wrong size on NavigationSystemV1_NavigationRaycast");
static_assert(offsetof(NavigationSystemV1_NavigationRaycast, WorldContextObject) == 0x000000, "Member 'NavigationSystemV1_NavigationRaycast::WorldContextObject' has a wrong offset!");
static_assert(offsetof(NavigationSystemV1_NavigationRaycast, RayStart) == 0x000008, "Member 'NavigationSystemV1_NavigationRaycast::RayStart' has a wrong offset!");
static_assert(offsetof(NavigationSystemV1_NavigationRaycast, RayEnd) == 0x000020, "Member 'NavigationSystemV1_NavigationRaycast::RayEnd' has a wrong offset!");
static_assert(offsetof(NavigationSystemV1_NavigationRaycast, HitLocation) == 0x000038, "Member 'NavigationSystemV1_NavigationRaycast::HitLocation' has a wrong offset!");
static_assert(offsetof(NavigationSystemV1_NavigationRaycast, FilterClass) == 0x000050, "Member 'NavigationSystemV1_NavigationRaycast::FilterClass' has a wrong offset!");
static_assert(offsetof(NavigationSystemV1_NavigationRaycast, Querier) == 0x000058, "Member 'NavigationSystemV1_NavigationRaycast::Querier' has a wrong offset!");
static_assert(offsetof(NavigationSystemV1_NavigationRaycast, ReturnValue) == 0x000060, "Member 'NavigationSystemV1_NavigationRaycast::ReturnValue' has a wrong offset!");

struct NavigationSystemV1_K2_ReplaceAreaInOctreeData final
{
public:
	const class UObject*                          Object;
	TSubclassOf<class UNavArea>                   OldArea;
	TSubclassOf<class UNavArea>                   NewArea;
	bool                                          ReturnValue;
	uint8                                         Pad_19[0x7];
};
static_assert(alignof(NavigationSystemV1_K2_ReplaceAreaInOctreeData) == 0x000008, "Wrong alignment on NavigationSystemV1_K2_ReplaceAreaInOctreeData");
static_assert(sizeof(NavigationSystemV1_K2_ReplaceAreaInOctreeData) == 0x000020, "Wrong size on NavigationSystemV1_K2_ReplaceAreaInOctreeData");
static_assert(offsetof(NavigationSystemV1_K2_ReplaceAreaInOctreeData, Object) == 0x000000, "Member 'NavigationSystemV1_K2_ReplaceAreaInOctreeData::Object' has a wrong offset!");
static_assert(offsetof(NavigationSystemV1_K2_ReplaceAreaInOctreeData, OldArea) == 0x000008, "Member 'NavigationSystemV1_K2_ReplaceAreaInOctreeData::OldArea' has a wrong offset!");
static_assert(offsetof(NavigationSystemV1_K2_ReplaceAreaInOctreeData, NewArea) == 0x000010, "Member 'NavigationSystemV1_K2_ReplaceAreaInOctreeData::NewArea' has a wrong offset!");
static_assert(offsetof(NavigationSystemV1_K2_ReplaceAreaInOctreeData, ReturnValue) == 0x000018, "Member 'NavigationSystemV1_K2_ReplaceAreaInOctreeData::ReturnValue' has a wrong offset!");

struct NavigationSystemV1_OnNavigationBoundsUpdated final
{
public:
	class ANavMeshBoundsVolume*                   NavVolume;
};
static_assert(alignof(NavigationSystemV1_OnNavigationBoundsUpdated) == 0x000008, "Wrong alignment on NavigationSystemV1_OnNavigationBoundsUpdated");
static_assert(sizeof(NavigationSystemV1_OnNavigationBoundsUpdated) == 0x000008, "Wrong size on NavigationSystemV1_OnNavigationBoundsUpdated");
static_assert(offsetof(NavigationSystemV1_OnNavigationBoundsUpdated, NavVolume) == 0x000000, "Member 'NavigationSystemV1_OnNavigationBoundsUpdated::NavVolume' has a wrong offset!");

struct NavigationSystemV1_RegisterNavigationInvoker final
{
public:
	class AActor*                                 Invoker;
	float                                         TileGenerationRadius;
	float                                         TileRemovalRadius;
};
static_assert(alignof(NavigationSystemV1_RegisterNavigationInvoker) == 0x000008, "Wrong alignment on NavigationSystemV1_RegisterNavigationInvoker");
static_assert(sizeof(NavigationSystemV1_RegisterNavigationInvoker) == 0x000010, "Wrong size on NavigationSystemV1_RegisterNavigationInvoker");
static_assert(offsetof(NavigationSystemV1_RegisterNavigationInvoker, Invoker) == 0x000000, "Member 'NavigationSystemV1_RegisterNavigationInvoker::Invoker' has a wrong offset!");
static_assert(offsetof(NavigationSystemV1_RegisterNavigationInvoker, TileGenerationRadius) == 0x000008, "Member 'NavigationSystemV1_RegisterNavigationInvoker::TileGenerationRadius' has a wrong offset!");
static_assert(offsetof(NavigationSystemV1_RegisterNavigationInvoker, TileRemovalRadius) == 0x00000C, "Member 'NavigationSystemV1_RegisterNavigationInvoker::TileRemovalRadius' has a wrong offset!");

struct NavigationSystemV1_SetGeometryGatheringMode final
{
public:
	ENavDataGatheringModeConfig                   NewMode;
};
static_assert(alignof(NavigationSystemV1_SetGeometryGatheringMode) == 0x000001, "Wrong alignment on NavigationSystemV1_SetGeometryGatheringMode");
static_assert(sizeof(NavigationSystemV1_SetGeometryGatheringMode) == 0x000001, "Wrong size on NavigationSystemV1_SetGeometryGatheringMode");
static_assert(offsetof(NavigationSystemV1_SetGeometryGatheringMode, NewMode) == 0x000000, "Member 'NavigationSystemV1_SetGeometryGatheringMode::NewMode' has a wrong offset!");

struct NavigationSystemV1_SetMaxSimultaneousTileGenerationJobsCount final
{
public:
	int32                                         MaxNumberOfJobs;
};
static_assert(alignof(NavigationSystemV1_SetMaxSimultaneousTileGenerationJobsCount) == 0x000004, "Wrong alignment on NavigationSystemV1_SetMaxSimultaneousTileGenerationJobsCount");
static_assert(sizeof(NavigationSystemV1_SetMaxSimultaneousTileGenerationJobsCount) == 0x000004, "Wrong size on NavigationSystemV1_SetMaxSimultaneousTileGenerationJobsCount");
static_assert(offsetof(NavigationSystemV1_SetMaxSimultaneousTileGenerationJobsCount, MaxNumberOfJobs) == 0x000000, "Member 'NavigationSystemV1_SetMaxSimultaneousTileGenerationJobsCount::MaxNumberOfJobs' has a wrong offset!");

struct NavigationSystemV1_UnregisterNavigationInvoker final
{
public:
	class AActor*                                 Invoker;
};
static_assert(alignof(NavigationSystemV1_UnregisterNavigationInvoker) == 0x000008, "Wrong alignment on NavigationSystemV1_UnregisterNavigationInvoker");
static_assert(sizeof(NavigationSystemV1_UnregisterNavigationInvoker) == 0x000008, "Wrong size on NavigationSystemV1_UnregisterNavigationInvoker");
static_assert(offsetof(NavigationSystemV1_UnregisterNavigationInvoker, Invoker) == 0x000000, "Member 'NavigationSystemV1_UnregisterNavigationInvoker::Invoker' has a wrong offset!");

struct NavRelevantComponent_SetNavigationRelevancy final
{
public:
	bool                                          bRelevant;
};
static_assert(alignof(NavRelevantComponent_SetNavigationRelevancy) == 0x000001, "Wrong alignment on NavRelevantComponent_SetNavigationRelevancy");
static_assert(sizeof(NavRelevantComponent_SetNavigationRelevancy) == 0x000001, "Wrong size on NavRelevantComponent_SetNavigationRelevancy");
static_assert(offsetof(NavRelevantComponent_SetNavigationRelevancy, bRelevant) == 0x000000, "Member 'NavRelevantComponent_SetNavigationRelevancy::bRelevant' has a wrong offset!");

struct RecastNavMesh_K2_ReplaceAreaInTileBounds final
{
public:
	struct FBox                                   Bounds;
	TSubclassOf<class UNavArea>                   OldArea;
	TSubclassOf<class UNavArea>                   NewArea;
	bool                                          ReplaceLinks;
	bool                                          ReturnValue;
	uint8                                         Pad_4A[0x6];
};
static_assert(alignof(RecastNavMesh_K2_ReplaceAreaInTileBounds) == 0x000008, "Wrong alignment on RecastNavMesh_K2_ReplaceAreaInTileBounds");
static_assert(sizeof(RecastNavMesh_K2_ReplaceAreaInTileBounds) == 0x000050, "Wrong size on RecastNavMesh_K2_ReplaceAreaInTileBounds");
static_assert(offsetof(RecastNavMesh_K2_ReplaceAreaInTileBounds, Bounds) == 0x000000, "Member 'RecastNavMesh_K2_ReplaceAreaInTileBounds::Bounds' has a wrong offset!");
static_assert(offsetof(RecastNavMesh_K2_ReplaceAreaInTileBounds, OldArea) == 0x000038, "Member 'RecastNavMesh_K2_ReplaceAreaInTileBounds::OldArea' has a wrong offset!");
static_assert(offsetof(RecastNavMesh_K2_ReplaceAreaInTileBounds, NewArea) == 0x000040, "Member 'RecastNavMesh_K2_ReplaceAreaInTileBounds::NewArea' has a wrong offset!");
static_assert(offsetof(RecastNavMesh_K2_ReplaceAreaInTileBounds, ReplaceLinks) == 0x000048, "Member 'RecastNavMesh_K2_ReplaceAreaInTileBounds::ReplaceLinks' has a wrong offset!");
static_assert(offsetof(RecastNavMesh_K2_ReplaceAreaInTileBounds, ReturnValue) == 0x000049, "Member 'RecastNavMesh_K2_ReplaceAreaInTileBounds::ReturnValue' has a wrong offset!");

struct NavModifierComponent_SetAreaClass final
{
public:
	TSubclassOf<class UNavArea>                   NewAreaClass;
};
static_assert(alignof(NavModifierComponent_SetAreaClass) == 0x000008, "Wrong alignment on NavModifierComponent_SetAreaClass");
static_assert(sizeof(NavModifierComponent_SetAreaClass) == 0x000008, "Wrong size on NavModifierComponent_SetAreaClass");
static_assert(offsetof(NavModifierComponent_SetAreaClass, NewAreaClass) == 0x000000, "Member 'NavModifierComponent_SetAreaClass::NewAreaClass' has a wrong offset!");

struct NavModifierVolume_SetAreaClass final
{
public:
	TSubclassOf<class UNavArea>                   NewAreaClass;
};
static_assert(alignof(NavModifierVolume_SetAreaClass) == 0x000008, "Wrong alignment on NavModifierVolume_SetAreaClass");
static_assert(sizeof(NavModifierVolume_SetAreaClass) == 0x000008, "Wrong size on NavModifierVolume_SetAreaClass");
static_assert(offsetof(NavModifierVolume_SetAreaClass, NewAreaClass) == 0x000000, "Member 'NavModifierVolume_SetAreaClass::NewAreaClass' has a wrong offset!");

}
