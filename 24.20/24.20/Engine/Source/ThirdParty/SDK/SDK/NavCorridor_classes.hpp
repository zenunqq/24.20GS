#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Engine_classes.hpp"
#include "NavCorridor_structs.hpp"

namespace SDK
{

class UNavCorridorTestingComponent final : public UDebugDrawComponent
{
public:
	struct FNavAgentProperties                    NavAgentProps;
	TSubclassOf<class UNavigationQueryFilter>     FilterClass;
	bool                                          bFindCorridorToGoal;
	bool                                          bFollowPathOnGoalCorridor;
	uint8                                         Pad_5F2[0x2];
	float                                         FollowLookAheadDistance;
	class AActor*                                 GoalActor;
	class ANavigationData*                        NavData;
	struct FNavCorridorParams                     CorridorParams;
	bool                                          bUpdateParametersFromWidth;
	uint8                                         Pad_621[0x3];
	float                                         PathOffset;
	float                                         PathfindingTimeUs;
	float                                         CorridorTimeUs;
	uint8                                         Pad_630[0xA0];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"NavCorridorTestingComponent">();
	}
	static class UNavCorridorTestingComponent* GetDefaultObj()
	{
		return GetDefaultObjImpl<UNavCorridorTestingComponent>();
	}
};
static_assert(alignof(UNavCorridorTestingComponent) == 0x000010, "Wrong alignment on UNavCorridorTestingComponent");
static_assert(sizeof(UNavCorridorTestingComponent) == 0x0006D0, "Wrong size on UNavCorridorTestingComponent");
static_assert(offsetof(UNavCorridorTestingComponent, NavAgentProps) == 0x0005B8, "Member 'UNavCorridorTestingComponent::NavAgentProps' has a wrong offset!");
static_assert(offsetof(UNavCorridorTestingComponent, FilterClass) == 0x0005E8, "Member 'UNavCorridorTestingComponent::FilterClass' has a wrong offset!");
static_assert(offsetof(UNavCorridorTestingComponent, bFindCorridorToGoal) == 0x0005F0, "Member 'UNavCorridorTestingComponent::bFindCorridorToGoal' has a wrong offset!");
static_assert(offsetof(UNavCorridorTestingComponent, bFollowPathOnGoalCorridor) == 0x0005F1, "Member 'UNavCorridorTestingComponent::bFollowPathOnGoalCorridor' has a wrong offset!");
static_assert(offsetof(UNavCorridorTestingComponent, FollowLookAheadDistance) == 0x0005F4, "Member 'UNavCorridorTestingComponent::FollowLookAheadDistance' has a wrong offset!");
static_assert(offsetof(UNavCorridorTestingComponent, GoalActor) == 0x0005F8, "Member 'UNavCorridorTestingComponent::GoalActor' has a wrong offset!");
static_assert(offsetof(UNavCorridorTestingComponent, NavData) == 0x000600, "Member 'UNavCorridorTestingComponent::NavData' has a wrong offset!");
static_assert(offsetof(UNavCorridorTestingComponent, CorridorParams) == 0x000608, "Member 'UNavCorridorTestingComponent::CorridorParams' has a wrong offset!");
static_assert(offsetof(UNavCorridorTestingComponent, bUpdateParametersFromWidth) == 0x000620, "Member 'UNavCorridorTestingComponent::bUpdateParametersFromWidth' has a wrong offset!");
static_assert(offsetof(UNavCorridorTestingComponent, PathOffset) == 0x000624, "Member 'UNavCorridorTestingComponent::PathOffset' has a wrong offset!");
static_assert(offsetof(UNavCorridorTestingComponent, PathfindingTimeUs) == 0x000628, "Member 'UNavCorridorTestingComponent::PathfindingTimeUs' has a wrong offset!");
static_assert(offsetof(UNavCorridorTestingComponent, CorridorTimeUs) == 0x00062C, "Member 'UNavCorridorTestingComponent::CorridorTimeUs' has a wrong offset!");

class ANavCorridorTestingActor final : public AActor
{
public:
	class UNavCorridorTestingComponent*           DebugComp;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"NavCorridorTestingActor">();
	}
	static class ANavCorridorTestingActor* GetDefaultObj()
	{
		return GetDefaultObjImpl<ANavCorridorTestingActor>();
	}
};
static_assert(alignof(ANavCorridorTestingActor) == 0x000008, "Wrong alignment on ANavCorridorTestingActor");
static_assert(sizeof(ANavCorridorTestingActor) == 0x000290, "Wrong size on ANavCorridorTestingActor");
static_assert(offsetof(ANavCorridorTestingActor, DebugComp) == 0x000288, "Member 'ANavCorridorTestingActor::DebugComp' has a wrong offset!");

}
