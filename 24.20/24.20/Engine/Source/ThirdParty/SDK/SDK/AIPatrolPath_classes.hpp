#pragma once

#include "Basic.hpp"

#include "FortniteAI_structs.hpp"
#include "GameplayTags_structs.hpp"
#include "Engine_structs.hpp"
#include "Engine_classes.hpp"
#include "AIPatrolPath_structs.hpp"

namespace SDK
{

class UAIPatrolPathComponent final : public UActorComponent
{
public:
	uint8                                         Pad_A0[0x20];
	TSoftClassPtr<class UClass>                   DefaultAIPawn;
	TSubclassOf<class ABuildingActor>             PathRendererClass;
	bool                                          bAllowPartialPaths;
	uint8                                         Pad_F1[0x7];
	struct FGameplayTagContainer                  UnableToPlaceNewDeviceTags;
	struct FNavAgentProperties                    CachedAIAgentProperties;
	class UNavigationSystemV1*                    CachedNavSystem;
	class ANavigationData*                        CachedNavData;
	TSubclassOf<class UNavigationQueryFilter>     CachedFilterClass;
	uint8                                         Pad_160[0x10];
	TMulticastInlineDelegate<void(class AFortAthenaPatrolPoint* PatrolPathPoint, class AAIController* Instigator)> OnPatrolPointFailedToReach;
	TMulticastInlineDelegate<void(class AFortAthenaPatrolPoint* PatrolPathPoint, class AAIController* Instigator)> OnPatrolPointReached;
	TMulticastInlineDelegate<void(class AAIController* Instigator)> OnPatrolPathStarted;
	TMulticastInlineDelegate<void(class AAIController* Instigator)> OnPatrolPathStopped;
	uint8                                         Pad_1B0[0x8];
	TArray<class UAIPatrolPathComponent*>         PatrolPath;
	struct FPatrolPathSegmentDetails              PathSegmentDetails;
	uint8                                         Pad_2D0[0x10];
	class UAIPatrolPathComponent*                 CopiedFrom;
	uint8                                         Pad_2E8[0x8];
	class UAIPatrolPathComponent*                 CopiedFromCut;
	class AFortCreativePatrolPath*                PatrolPathActor;
	class AFortAthenaPatrolPoint*                 PatrolPointActor;
	TArray<class UAIPatrolPathComponent*>         MultiSelectActorToEnterList;
	uint8                                         Pad_318[0x30];

public:
	void GeneratePathPoints(const EFortCreativePatrolPathGroup PatrolPathGroup);
	TSubclassOf<class UNavigationQueryFilter> GetPatrolFilterOptions();
	void OnPathExtremitiesChanged(const bool bIsStart, const bool bIsEnd);
	void OnPatrolPathActorAssigned();
	void OnPatrolPathGroupsMerged();
	void PatrolPathStarted(class AAIController* Instigator);
	void PatrolPathStopped(class AAIController* Instigator);
	void PatrolPointFailedToReach(class AFortAthenaPatrolPoint* PathPoint, class AAIController* Instigator);
	void PatrolPointReached(class AFortAthenaPatrolPoint* PathPoint, class AAIController* Instigator);
	bool RemovePoint();
	void RenderToNextAndPreviousPoint();
	void RenderToNextPoint();
	void RequestRenderPath();
	void SetPatrollingMode(const EPatrollingMode NewMode);
	void SetPatrolPathEnabled(const bool bIsEnabled);
	void SetPatrolPathGroup(const EFortCreativePatrolPathGroup PatrolPathGroup);
	void SetRenderPath(const bool bRenderPath);
	bool ShouldRenderPath();
	bool SyncSharedUserOptions(class UAIPatrolPathComponent* CopyToAIPatrolPathComp, const TMap<class FString, class FString>& UserOptionValues);

	bool CanNextPointBeReached() const;
	TArray<class UAIPatrolPathComponent*> GetLinkedPatrolPoints() const;
	bool GetNextAvailablePatrolPathIndex(int32* NextAvailableIndex) const;
	int32 GetPatrolPathIndex() const;
	class UAIPatrolPathComponent* GetPatrolPathPoint(const int32 InPatrolPathIndex, const int32 InPatrolPathPointIndex) const;
	int32 GetPatrolPathPointIndex() const;
	bool HasValidPatrolPath() const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"AIPatrolPathComponent">();
	}
	static class UAIPatrolPathComponent* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAIPatrolPathComponent>();
	}
};
static_assert(alignof(UAIPatrolPathComponent) == 0x000008, "Wrong alignment on UAIPatrolPathComponent");
static_assert(sizeof(UAIPatrolPathComponent) == 0x000348, "Wrong size on UAIPatrolPathComponent");
static_assert(offsetof(UAIPatrolPathComponent, DefaultAIPawn) == 0x0000C0, "Member 'UAIPatrolPathComponent::DefaultAIPawn' has a wrong offset!");
static_assert(offsetof(UAIPatrolPathComponent, PathRendererClass) == 0x0000E8, "Member 'UAIPatrolPathComponent::PathRendererClass' has a wrong offset!");
static_assert(offsetof(UAIPatrolPathComponent, bAllowPartialPaths) == 0x0000F0, "Member 'UAIPatrolPathComponent::bAllowPartialPaths' has a wrong offset!");
static_assert(offsetof(UAIPatrolPathComponent, UnableToPlaceNewDeviceTags) == 0x0000F8, "Member 'UAIPatrolPathComponent::UnableToPlaceNewDeviceTags' has a wrong offset!");
static_assert(offsetof(UAIPatrolPathComponent, CachedAIAgentProperties) == 0x000118, "Member 'UAIPatrolPathComponent::CachedAIAgentProperties' has a wrong offset!");
static_assert(offsetof(UAIPatrolPathComponent, CachedNavSystem) == 0x000148, "Member 'UAIPatrolPathComponent::CachedNavSystem' has a wrong offset!");
static_assert(offsetof(UAIPatrolPathComponent, CachedNavData) == 0x000150, "Member 'UAIPatrolPathComponent::CachedNavData' has a wrong offset!");
static_assert(offsetof(UAIPatrolPathComponent, CachedFilterClass) == 0x000158, "Member 'UAIPatrolPathComponent::CachedFilterClass' has a wrong offset!");
static_assert(offsetof(UAIPatrolPathComponent, OnPatrolPointFailedToReach) == 0x000170, "Member 'UAIPatrolPathComponent::OnPatrolPointFailedToReach' has a wrong offset!");
static_assert(offsetof(UAIPatrolPathComponent, OnPatrolPointReached) == 0x000180, "Member 'UAIPatrolPathComponent::OnPatrolPointReached' has a wrong offset!");
static_assert(offsetof(UAIPatrolPathComponent, OnPatrolPathStarted) == 0x000190, "Member 'UAIPatrolPathComponent::OnPatrolPathStarted' has a wrong offset!");
static_assert(offsetof(UAIPatrolPathComponent, OnPatrolPathStopped) == 0x0001A0, "Member 'UAIPatrolPathComponent::OnPatrolPathStopped' has a wrong offset!");
static_assert(offsetof(UAIPatrolPathComponent, PatrolPath) == 0x0001B8, "Member 'UAIPatrolPathComponent::PatrolPath' has a wrong offset!");
static_assert(offsetof(UAIPatrolPathComponent, PathSegmentDetails) == 0x0001C8, "Member 'UAIPatrolPathComponent::PathSegmentDetails' has a wrong offset!");
static_assert(offsetof(UAIPatrolPathComponent, CopiedFrom) == 0x0002E0, "Member 'UAIPatrolPathComponent::CopiedFrom' has a wrong offset!");
static_assert(offsetof(UAIPatrolPathComponent, CopiedFromCut) == 0x0002F0, "Member 'UAIPatrolPathComponent::CopiedFromCut' has a wrong offset!");
static_assert(offsetof(UAIPatrolPathComponent, PatrolPathActor) == 0x0002F8, "Member 'UAIPatrolPathComponent::PatrolPathActor' has a wrong offset!");
static_assert(offsetof(UAIPatrolPathComponent, PatrolPointActor) == 0x000300, "Member 'UAIPatrolPathComponent::PatrolPointActor' has a wrong offset!");
static_assert(offsetof(UAIPatrolPathComponent, MultiSelectActorToEnterList) == 0x000308, "Member 'UAIPatrolPathComponent::MultiSelectActorToEnterList' has a wrong offset!");

}
