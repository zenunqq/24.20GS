#pragma once

#include "Basic.hpp"

#include "NavigationSystem_classes.hpp"
#include "NavigationSystem_parameters.hpp"

namespace SDK
{

void UNavigationPath::EnableDebugDrawing(bool bShouldDrawDebugData, const struct FLinearColor& PathColor)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NavigationPath", "EnableDebugDrawing");

	Params::NavigationPath_EnableDebugDrawing Parms{};

	Parms.bShouldDrawDebugData = bShouldDrawDebugData;
	Parms.PathColor = std::move(PathColor);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UNavigationPath::EnableRecalculationOnInvalidation(ENavigationOptionFlag DoRecalculation)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NavigationPath", "EnableRecalculationOnInvalidation");

	Params::NavigationPath_EnableRecalculationOnInvalidation Parms{};

	Parms.DoRecalculation = DoRecalculation;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

class FString UNavigationPath::GetDebugString() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NavigationPath", "GetDebugString");

	Params::NavigationPath_GetDebugString Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

float UNavigationPath::GetPathCost() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NavigationPath", "GetPathCost");

	Params::NavigationPath_GetPathCost Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

float UNavigationPath::GetPathLength() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NavigationPath", "GetPathLength");

	Params::NavigationPath_GetPathLength Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

bool UNavigationPath::IsPartial() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NavigationPath", "IsPartial");

	Params::NavigationPath_IsPartial Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

bool UNavigationPath::IsStringPulled() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NavigationPath", "IsStringPulled");

	Params::NavigationPath_IsStringPulled Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

bool UNavigationPath::IsValid() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NavigationPath", "IsValid");

	Params::NavigationPath_IsValid Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

class UNavigationPath* UNavigationSystemV1::FindPathToActorSynchronously(class UObject* WorldContextObject, const struct FVector& PathStart, class AActor* GoalActor, float TetherDistance, class AActor* PathfindingContext, TSubclassOf<class UNavigationQueryFilter> FilterClass)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("NavigationSystemV1", "FindPathToActorSynchronously");

	Params::NavigationSystemV1_FindPathToActorSynchronously Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.PathStart = std::move(PathStart);
	Parms.GoalActor = GoalActor;
	Parms.TetherDistance = TetherDistance;
	Parms.PathfindingContext = PathfindingContext;
	Parms.FilterClass = FilterClass;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

class UNavigationPath* UNavigationSystemV1::FindPathToLocationSynchronously(class UObject* WorldContextObject, const struct FVector& PathStart, const struct FVector& PathEnd, class AActor* PathfindingContext, TSubclassOf<class UNavigationQueryFilter> FilterClass)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("NavigationSystemV1", "FindPathToLocationSynchronously");

	Params::NavigationSystemV1_FindPathToLocationSynchronously Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.PathStart = std::move(PathStart);
	Parms.PathEnd = std::move(PathEnd);
	Parms.PathfindingContext = PathfindingContext;
	Parms.FilterClass = FilterClass;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

class UNavigationSystemV1* UNavigationSystemV1::GetNavigationSystem(class UObject* WorldContextObject)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("NavigationSystemV1", "GetNavigationSystem");

	Params::NavigationSystemV1_GetNavigationSystem Parms{};

	Parms.WorldContextObject = WorldContextObject;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

ENavigationQueryResult UNavigationSystemV1::GetPathCost(class UObject* WorldContextObject, const struct FVector& PathStart, const struct FVector& PathEnd, float* PathCost, class ANavigationData* NavData, TSubclassOf<class UNavigationQueryFilter> FilterClass)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("NavigationSystemV1", "GetPathCost");

	Params::NavigationSystemV1_GetPathCost Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.PathStart = std::move(PathStart);
	Parms.PathEnd = std::move(PathEnd);
	Parms.NavData = NavData;
	Parms.FilterClass = FilterClass;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	if (PathCost != nullptr)
		*PathCost = Parms.PathCost;

	return Parms.ReturnValue;
}

ENavigationQueryResult UNavigationSystemV1::GetPathLength(class UObject* WorldContextObject, const struct FVector& PathStart, const struct FVector& PathEnd, float* PathLength, class ANavigationData* NavData, TSubclassOf<class UNavigationQueryFilter> FilterClass)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("NavigationSystemV1", "GetPathLength");

	Params::NavigationSystemV1_GetPathLength Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.PathStart = std::move(PathStart);
	Parms.PathEnd = std::move(PathEnd);
	Parms.NavData = NavData;
	Parms.FilterClass = FilterClass;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	if (PathLength != nullptr)
		*PathLength = Parms.PathLength;

	return Parms.ReturnValue;
}

bool UNavigationSystemV1::IsNavigationBeingBuilt(class UObject* WorldContextObject)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("NavigationSystemV1", "IsNavigationBeingBuilt");

	Params::NavigationSystemV1_IsNavigationBeingBuilt Parms{};

	Parms.WorldContextObject = WorldContextObject;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

bool UNavigationSystemV1::IsNavigationBeingBuiltOrLocked(class UObject* WorldContextObject)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("NavigationSystemV1", "IsNavigationBeingBuiltOrLocked");

	Params::NavigationSystemV1_IsNavigationBeingBuiltOrLocked Parms{};

	Parms.WorldContextObject = WorldContextObject;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

bool UNavigationSystemV1::K2_GetRandomLocationInNavigableRadius(class UObject* WorldContextObject, const struct FVector& Origin, struct FVector* RandomLocation, float Radius, class ANavigationData* NavData, TSubclassOf<class UNavigationQueryFilter> FilterClass)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("NavigationSystemV1", "K2_GetRandomLocationInNavigableRadius");

	Params::NavigationSystemV1_K2_GetRandomLocationInNavigableRadius Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.Origin = std::move(Origin);
	Parms.Radius = Radius;
	Parms.NavData = NavData;
	Parms.FilterClass = FilterClass;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	if (RandomLocation != nullptr)
		*RandomLocation = std::move(Parms.RandomLocation);

	return Parms.ReturnValue;
}

bool UNavigationSystemV1::K2_GetRandomPointInNavigableRadius(class UObject* WorldContextObject, const struct FVector& Origin, struct FVector* RandomLocation, float Radius, class ANavigationData* NavData, TSubclassOf<class UNavigationQueryFilter> FilterClass)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("NavigationSystemV1", "K2_GetRandomPointInNavigableRadius");

	Params::NavigationSystemV1_K2_GetRandomPointInNavigableRadius Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.Origin = std::move(Origin);
	Parms.Radius = Radius;
	Parms.NavData = NavData;
	Parms.FilterClass = FilterClass;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	if (RandomLocation != nullptr)
		*RandomLocation = std::move(Parms.RandomLocation);

	return Parms.ReturnValue;
}

bool UNavigationSystemV1::K2_GetRandomReachablePointInRadius(class UObject* WorldContextObject, const struct FVector& Origin, struct FVector* RandomLocation, float Radius, class ANavigationData* NavData, TSubclassOf<class UNavigationQueryFilter> FilterClass)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("NavigationSystemV1", "K2_GetRandomReachablePointInRadius");

	Params::NavigationSystemV1_K2_GetRandomReachablePointInRadius Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.Origin = std::move(Origin);
	Parms.Radius = Radius;
	Parms.NavData = NavData;
	Parms.FilterClass = FilterClass;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	if (RandomLocation != nullptr)
		*RandomLocation = std::move(Parms.RandomLocation);

	return Parms.ReturnValue;
}

bool UNavigationSystemV1::K2_ProjectPointToNavigation(class UObject* WorldContextObject, const struct FVector& Point, struct FVector* ProjectedLocation, class ANavigationData* NavData, TSubclassOf<class UNavigationQueryFilter> FilterClass, const struct FVector& QueryExtent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("NavigationSystemV1", "K2_ProjectPointToNavigation");

	Params::NavigationSystemV1_K2_ProjectPointToNavigation Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.Point = std::move(Point);
	Parms.NavData = NavData;
	Parms.FilterClass = FilterClass;
	Parms.QueryExtent = std::move(QueryExtent);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	if (ProjectedLocation != nullptr)
		*ProjectedLocation = std::move(Parms.ProjectedLocation);

	return Parms.ReturnValue;
}

bool UNavigationSystemV1::NavigationRaycast(class UObject* WorldContextObject, const struct FVector& RayStart, const struct FVector& RayEnd, struct FVector* HitLocation, TSubclassOf<class UNavigationQueryFilter> FilterClass, class AController* Querier)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("NavigationSystemV1", "NavigationRaycast");

	Params::NavigationSystemV1_NavigationRaycast Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.RayStart = std::move(RayStart);
	Parms.RayEnd = std::move(RayEnd);
	Parms.FilterClass = FilterClass;
	Parms.Querier = Querier;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	if (HitLocation != nullptr)
		*HitLocation = std::move(Parms.HitLocation);

	return Parms.ReturnValue;
}

bool UNavigationSystemV1::K2_ReplaceAreaInOctreeData(const class UObject* Object, TSubclassOf<class UNavArea> OldArea, TSubclassOf<class UNavArea> NewArea)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NavigationSystemV1", "K2_ReplaceAreaInOctreeData");

	Params::NavigationSystemV1_K2_ReplaceAreaInOctreeData Parms{};

	Parms.Object = Object;
	Parms.OldArea = OldArea;
	Parms.NewArea = NewArea;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

void UNavigationSystemV1::OnNavigationBoundsUpdated(class ANavMeshBoundsVolume* NavVolume)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NavigationSystemV1", "OnNavigationBoundsUpdated");

	Params::NavigationSystemV1_OnNavigationBoundsUpdated Parms{};

	Parms.NavVolume = NavVolume;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UNavigationSystemV1::RegisterNavigationInvoker(class AActor* Invoker, float TileGenerationRadius, float TileRemovalRadius)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NavigationSystemV1", "RegisterNavigationInvoker");

	Params::NavigationSystemV1_RegisterNavigationInvoker Parms{};

	Parms.Invoker = Invoker;
	Parms.TileGenerationRadius = TileGenerationRadius;
	Parms.TileRemovalRadius = TileRemovalRadius;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UNavigationSystemV1::ResetMaxSimultaneousTileGenerationJobsCount()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NavigationSystemV1", "ResetMaxSimultaneousTileGenerationJobsCount");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void UNavigationSystemV1::SetGeometryGatheringMode(ENavDataGatheringModeConfig NewMode)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NavigationSystemV1", "SetGeometryGatheringMode");

	Params::NavigationSystemV1_SetGeometryGatheringMode Parms{};

	Parms.NewMode = NewMode;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UNavigationSystemV1::SetMaxSimultaneousTileGenerationJobsCount(int32 MaxNumberOfJobs)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NavigationSystemV1", "SetMaxSimultaneousTileGenerationJobsCount");

	Params::NavigationSystemV1_SetMaxSimultaneousTileGenerationJobsCount Parms{};

	Parms.MaxNumberOfJobs = MaxNumberOfJobs;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UNavigationSystemV1::UnregisterNavigationInvoker(class AActor* Invoker)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NavigationSystemV1", "UnregisterNavigationInvoker");

	Params::NavigationSystemV1_UnregisterNavigationInvoker Parms{};

	Parms.Invoker = Invoker;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UNavRelevantComponent::SetNavigationRelevancy(bool bRelevant)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NavRelevantComponent", "SetNavigationRelevancy");

	Params::NavRelevantComponent_SetNavigationRelevancy Parms{};

	Parms.bRelevant = bRelevant;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

bool ARecastNavMesh::K2_ReplaceAreaInTileBounds(const struct FBox& Bounds, TSubclassOf<class UNavArea> OldArea, TSubclassOf<class UNavArea> NewArea, bool ReplaceLinks)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RecastNavMesh", "K2_ReplaceAreaInTileBounds");

	Params::RecastNavMesh_K2_ReplaceAreaInTileBounds Parms{};

	Parms.Bounds = std::move(Bounds);
	Parms.OldArea = OldArea;
	Parms.NewArea = NewArea;
	Parms.ReplaceLinks = ReplaceLinks;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

void UNavModifierComponent::SetAreaClass(TSubclassOf<class UNavArea> NewAreaClass)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NavModifierComponent", "SetAreaClass");

	Params::NavModifierComponent_SetAreaClass Parms{};

	Parms.NewAreaClass = NewAreaClass;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void ANavModifierVolume::SetAreaClass(TSubclassOf<class UNavArea> NewAreaClass)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NavModifierVolume", "SetAreaClass");

	Params::NavModifierVolume_SetAreaClass Parms{};

	Parms.NewAreaClass = NewAreaClass;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

}
