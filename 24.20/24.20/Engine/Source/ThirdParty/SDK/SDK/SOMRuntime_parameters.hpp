#pragma once

#include "Basic.hpp"

#include "GameplayTags_structs.hpp"
#include "SOMRuntime_structs.hpp"
#include "CoreUObject_structs.hpp"

namespace SDK::Params
{

struct FortGameStateComponent_ScriptedObjectMovementManager_HandleCurrentPlaylistReady final
{
public:
	class AFortGameStateAthena*                   GameState;
	const class UFortPlaylist*                    Playlist;
	struct FGameplayTagContainer                  PlaylistContextTags;
};
static_assert(alignof(FortGameStateComponent_ScriptedObjectMovementManager_HandleCurrentPlaylistReady) == 0x000008, "Wrong alignment on FortGameStateComponent_ScriptedObjectMovementManager_HandleCurrentPlaylistReady");
static_assert(sizeof(FortGameStateComponent_ScriptedObjectMovementManager_HandleCurrentPlaylistReady) == 0x000030, "Wrong size on FortGameStateComponent_ScriptedObjectMovementManager_HandleCurrentPlaylistReady");
static_assert(offsetof(FortGameStateComponent_ScriptedObjectMovementManager_HandleCurrentPlaylistReady, GameState) == 0x000000, "Member 'FortGameStateComponent_ScriptedObjectMovementManager_HandleCurrentPlaylistReady::GameState' has a wrong offset!");
static_assert(offsetof(FortGameStateComponent_ScriptedObjectMovementManager_HandleCurrentPlaylistReady, Playlist) == 0x000008, "Member 'FortGameStateComponent_ScriptedObjectMovementManager_HandleCurrentPlaylistReady::Playlist' has a wrong offset!");
static_assert(offsetof(FortGameStateComponent_ScriptedObjectMovementManager_HandleCurrentPlaylistReady, PlaylistContextTags) == 0x000010, "Member 'FortGameStateComponent_ScriptedObjectMovementManager_HandleCurrentPlaylistReady::PlaylistContextTags' has a wrong offset!");

struct FortScriptedObjectMovement_MovableObjectBase_BeginMovingToStaticPathNode final
{
public:
	struct FScriptedObjectMovement_StaticPathStepData StepData;
};
static_assert(alignof(FortScriptedObjectMovement_MovableObjectBase_BeginMovingToStaticPathNode) == 0x000010, "Wrong alignment on FortScriptedObjectMovement_MovableObjectBase_BeginMovingToStaticPathNode");
static_assert(sizeof(FortScriptedObjectMovement_MovableObjectBase_BeginMovingToStaticPathNode) == 0x0000F0, "Wrong size on FortScriptedObjectMovement_MovableObjectBase_BeginMovingToStaticPathNode");
static_assert(offsetof(FortScriptedObjectMovement_MovableObjectBase_BeginMovingToStaticPathNode, StepData) == 0x000000, "Member 'FortScriptedObjectMovement_MovableObjectBase_BeginMovingToStaticPathNode::StepData' has a wrong offset!");

struct FortScriptedObjectMovement_MovableObjectBase_Cheat_NetMulticast_SendDebugTimerInfo final
{
public:
	float                                         ServerTimeWhenQueryInvoked;
	float                                         RemainingTime;
};
static_assert(alignof(FortScriptedObjectMovement_MovableObjectBase_Cheat_NetMulticast_SendDebugTimerInfo) == 0x000004, "Wrong alignment on FortScriptedObjectMovement_MovableObjectBase_Cheat_NetMulticast_SendDebugTimerInfo");
static_assert(sizeof(FortScriptedObjectMovement_MovableObjectBase_Cheat_NetMulticast_SendDebugTimerInfo) == 0x000008, "Wrong size on FortScriptedObjectMovement_MovableObjectBase_Cheat_NetMulticast_SendDebugTimerInfo");
static_assert(offsetof(FortScriptedObjectMovement_MovableObjectBase_Cheat_NetMulticast_SendDebugTimerInfo, ServerTimeWhenQueryInvoked) == 0x000000, "Member 'FortScriptedObjectMovement_MovableObjectBase_Cheat_NetMulticast_SendDebugTimerInfo::ServerTimeWhenQueryInvoked' has a wrong offset!");
static_assert(offsetof(FortScriptedObjectMovement_MovableObjectBase_Cheat_NetMulticast_SendDebugTimerInfo, RemainingTime) == 0x000004, "Member 'FortScriptedObjectMovement_MovableObjectBase_Cheat_NetMulticast_SendDebugTimerInfo::RemainingTime' has a wrong offset!");

struct FortScriptedObjectMovement_MovableObjectBase_ConfigureStaticMeshToSlotDefinition final
{
public:
	class UFortScriptedObjectMovement_SlotDefinition* SlotDefinition;
	class UStaticMeshComponent*                   StaticMeshComponent;
};
static_assert(alignof(FortScriptedObjectMovement_MovableObjectBase_ConfigureStaticMeshToSlotDefinition) == 0x000008, "Wrong alignment on FortScriptedObjectMovement_MovableObjectBase_ConfigureStaticMeshToSlotDefinition");
static_assert(sizeof(FortScriptedObjectMovement_MovableObjectBase_ConfigureStaticMeshToSlotDefinition) == 0x000010, "Wrong size on FortScriptedObjectMovement_MovableObjectBase_ConfigureStaticMeshToSlotDefinition");
static_assert(offsetof(FortScriptedObjectMovement_MovableObjectBase_ConfigureStaticMeshToSlotDefinition, SlotDefinition) == 0x000000, "Member 'FortScriptedObjectMovement_MovableObjectBase_ConfigureStaticMeshToSlotDefinition::SlotDefinition' has a wrong offset!");
static_assert(offsetof(FortScriptedObjectMovement_MovableObjectBase_ConfigureStaticMeshToSlotDefinition, StaticMeshComponent) == 0x000008, "Member 'FortScriptedObjectMovement_MovableObjectBase_ConfigureStaticMeshToSlotDefinition::StaticMeshComponent' has a wrong offset!");

struct FortScriptedObjectMovement_MovableObjectBase_GetScriptedObjectStaticMeshComponent final
{
public:
	class UStaticMeshComponent*                   ReturnValue;
};
static_assert(alignof(FortScriptedObjectMovement_MovableObjectBase_GetScriptedObjectStaticMeshComponent) == 0x000008, "Wrong alignment on FortScriptedObjectMovement_MovableObjectBase_GetScriptedObjectStaticMeshComponent");
static_assert(sizeof(FortScriptedObjectMovement_MovableObjectBase_GetScriptedObjectStaticMeshComponent) == 0x000008, "Wrong size on FortScriptedObjectMovement_MovableObjectBase_GetScriptedObjectStaticMeshComponent");
static_assert(offsetof(FortScriptedObjectMovement_MovableObjectBase_GetScriptedObjectStaticMeshComponent, ReturnValue) == 0x000000, "Member 'FortScriptedObjectMovement_MovableObjectBase_GetScriptedObjectStaticMeshComponent::ReturnValue' has a wrong offset!");

struct FortScriptedObjectMovement_MovableObjectBase_HandleSlotDefinitionSlotted final
{
public:
	class UFortScriptedObjectMovement_SlotDefinition* SlotDefinition;
};
static_assert(alignof(FortScriptedObjectMovement_MovableObjectBase_HandleSlotDefinitionSlotted) == 0x000008, "Wrong alignment on FortScriptedObjectMovement_MovableObjectBase_HandleSlotDefinitionSlotted");
static_assert(sizeof(FortScriptedObjectMovement_MovableObjectBase_HandleSlotDefinitionSlotted) == 0x000008, "Wrong size on FortScriptedObjectMovement_MovableObjectBase_HandleSlotDefinitionSlotted");
static_assert(offsetof(FortScriptedObjectMovement_MovableObjectBase_HandleSlotDefinitionSlotted, SlotDefinition) == 0x000000, "Member 'FortScriptedObjectMovement_MovableObjectBase_HandleSlotDefinitionSlotted::SlotDefinition' has a wrong offset!");

struct FortScriptedObjectMovement_MovableObjectBase_NotifyStaticPathStepComplete final
{
public:
	bool                                          bReachedBeginPlaySkipStep;
};
static_assert(alignof(FortScriptedObjectMovement_MovableObjectBase_NotifyStaticPathStepComplete) == 0x000001, "Wrong alignment on FortScriptedObjectMovement_MovableObjectBase_NotifyStaticPathStepComplete");
static_assert(sizeof(FortScriptedObjectMovement_MovableObjectBase_NotifyStaticPathStepComplete) == 0x000001, "Wrong size on FortScriptedObjectMovement_MovableObjectBase_NotifyStaticPathStepComplete");
static_assert(offsetof(FortScriptedObjectMovement_MovableObjectBase_NotifyStaticPathStepComplete, bReachedBeginPlaySkipStep) == 0x000000, "Member 'FortScriptedObjectMovement_MovableObjectBase_NotifyStaticPathStepComplete::bReachedBeginPlaySkipStep' has a wrong offset!");

struct FortScriptedObjectMovement_MovableObjectBase_SetCanEverAffectNavigation final
{
public:
	bool                                          bCanEverAffectNavigation;
	uint8                                         Pad_1[0x7];
	class UActorComponent*                        TargetActorComponent;
};
static_assert(alignof(FortScriptedObjectMovement_MovableObjectBase_SetCanEverAffectNavigation) == 0x000008, "Wrong alignment on FortScriptedObjectMovement_MovableObjectBase_SetCanEverAffectNavigation");
static_assert(sizeof(FortScriptedObjectMovement_MovableObjectBase_SetCanEverAffectNavigation) == 0x000010, "Wrong size on FortScriptedObjectMovement_MovableObjectBase_SetCanEverAffectNavigation");
static_assert(offsetof(FortScriptedObjectMovement_MovableObjectBase_SetCanEverAffectNavigation, bCanEverAffectNavigation) == 0x000000, "Member 'FortScriptedObjectMovement_MovableObjectBase_SetCanEverAffectNavigation::bCanEverAffectNavigation' has a wrong offset!");
static_assert(offsetof(FortScriptedObjectMovement_MovableObjectBase_SetCanEverAffectNavigation, TargetActorComponent) == 0x000008, "Member 'FortScriptedObjectMovement_MovableObjectBase_SetCanEverAffectNavigation::TargetActorComponent' has a wrong offset!");

struct FortScriptedObjectMovement_MovableObjectBase_BlockOverlappingStaticPathSteps final
{
public:
	bool                                          ReturnValue;
};
static_assert(alignof(FortScriptedObjectMovement_MovableObjectBase_BlockOverlappingStaticPathSteps) == 0x000001, "Wrong alignment on FortScriptedObjectMovement_MovableObjectBase_BlockOverlappingStaticPathSteps");
static_assert(sizeof(FortScriptedObjectMovement_MovableObjectBase_BlockOverlappingStaticPathSteps) == 0x000001, "Wrong size on FortScriptedObjectMovement_MovableObjectBase_BlockOverlappingStaticPathSteps");
static_assert(offsetof(FortScriptedObjectMovement_MovableObjectBase_BlockOverlappingStaticPathSteps, ReturnValue) == 0x000000, "Member 'FortScriptedObjectMovement_MovableObjectBase_BlockOverlappingStaticPathSteps::ReturnValue' has a wrong offset!");

struct FortScriptedObjectMovement_MovableObjectBase_GetStaticPathTravelingBounds final
{
public:
	struct FVector                                OutBoxExtent;
};
static_assert(alignof(FortScriptedObjectMovement_MovableObjectBase_GetStaticPathTravelingBounds) == 0x000008, "Wrong alignment on FortScriptedObjectMovement_MovableObjectBase_GetStaticPathTravelingBounds");
static_assert(sizeof(FortScriptedObjectMovement_MovableObjectBase_GetStaticPathTravelingBounds) == 0x000018, "Wrong size on FortScriptedObjectMovement_MovableObjectBase_GetStaticPathTravelingBounds");
static_assert(offsetof(FortScriptedObjectMovement_MovableObjectBase_GetStaticPathTravelingBounds, OutBoxExtent) == 0x000000, "Member 'FortScriptedObjectMovement_MovableObjectBase_GetStaticPathTravelingBounds::OutBoxExtent' has a wrong offset!");

struct FortScriptedObjectMovement_MovableObjectBase_GetStaticPathZOffsetHeight final
{
public:
	float                                         ReturnValue;
};
static_assert(alignof(FortScriptedObjectMovement_MovableObjectBase_GetStaticPathZOffsetHeight) == 0x000004, "Wrong alignment on FortScriptedObjectMovement_MovableObjectBase_GetStaticPathZOffsetHeight");
static_assert(sizeof(FortScriptedObjectMovement_MovableObjectBase_GetStaticPathZOffsetHeight) == 0x000004, "Wrong size on FortScriptedObjectMovement_MovableObjectBase_GetStaticPathZOffsetHeight");
static_assert(offsetof(FortScriptedObjectMovement_MovableObjectBase_GetStaticPathZOffsetHeight, ReturnValue) == 0x000000, "Member 'FortScriptedObjectMovement_MovableObjectBase_GetStaticPathZOffsetHeight::ReturnValue' has a wrong offset!");

struct ScriptedObjectMovement_StaticPath_HandleCalendarEventActive final
{
public:
	class FString                                 EventName;
	struct FTimespan                              TimeUntilEnd;
	struct FTimespan                              TimeSinceBegin;
	float                                         TimespanRatio;
	uint8                                         Pad_24[0x4];
};
static_assert(alignof(ScriptedObjectMovement_StaticPath_HandleCalendarEventActive) == 0x000008, "Wrong alignment on ScriptedObjectMovement_StaticPath_HandleCalendarEventActive");
static_assert(sizeof(ScriptedObjectMovement_StaticPath_HandleCalendarEventActive) == 0x000028, "Wrong size on ScriptedObjectMovement_StaticPath_HandleCalendarEventActive");
static_assert(offsetof(ScriptedObjectMovement_StaticPath_HandleCalendarEventActive, EventName) == 0x000000, "Member 'ScriptedObjectMovement_StaticPath_HandleCalendarEventActive::EventName' has a wrong offset!");
static_assert(offsetof(ScriptedObjectMovement_StaticPath_HandleCalendarEventActive, TimeUntilEnd) == 0x000010, "Member 'ScriptedObjectMovement_StaticPath_HandleCalendarEventActive::TimeUntilEnd' has a wrong offset!");
static_assert(offsetof(ScriptedObjectMovement_StaticPath_HandleCalendarEventActive, TimeSinceBegin) == 0x000018, "Member 'ScriptedObjectMovement_StaticPath_HandleCalendarEventActive::TimeSinceBegin' has a wrong offset!");
static_assert(offsetof(ScriptedObjectMovement_StaticPath_HandleCalendarEventActive, TimespanRatio) == 0x000020, "Member 'ScriptedObjectMovement_StaticPath_HandleCalendarEventActive::TimespanRatio' has a wrong offset!");

struct ScriptedObjectMovement_StaticPath_HandleCalendarEventEnded final
{
public:
	class FString                                 EventName;
	struct FTimespan                              TimeUntilEnd;
	struct FTimespan                              TimeSinceBegin;
	float                                         TimespanRatio;
	uint8                                         Pad_24[0x4];
};
static_assert(alignof(ScriptedObjectMovement_StaticPath_HandleCalendarEventEnded) == 0x000008, "Wrong alignment on ScriptedObjectMovement_StaticPath_HandleCalendarEventEnded");
static_assert(sizeof(ScriptedObjectMovement_StaticPath_HandleCalendarEventEnded) == 0x000028, "Wrong size on ScriptedObjectMovement_StaticPath_HandleCalendarEventEnded");
static_assert(offsetof(ScriptedObjectMovement_StaticPath_HandleCalendarEventEnded, EventName) == 0x000000, "Member 'ScriptedObjectMovement_StaticPath_HandleCalendarEventEnded::EventName' has a wrong offset!");
static_assert(offsetof(ScriptedObjectMovement_StaticPath_HandleCalendarEventEnded, TimeUntilEnd) == 0x000010, "Member 'ScriptedObjectMovement_StaticPath_HandleCalendarEventEnded::TimeUntilEnd' has a wrong offset!");
static_assert(offsetof(ScriptedObjectMovement_StaticPath_HandleCalendarEventEnded, TimeSinceBegin) == 0x000018, "Member 'ScriptedObjectMovement_StaticPath_HandleCalendarEventEnded::TimeSinceBegin' has a wrong offset!");
static_assert(offsetof(ScriptedObjectMovement_StaticPath_HandleCalendarEventEnded, TimespanRatio) == 0x000020, "Member 'ScriptedObjectMovement_StaticPath_HandleCalendarEventEnded::TimespanRatio' has a wrong offset!");

struct ScriptedObjectMovement_StaticPath_HandleCalendarEventUpdated final
{
public:
	class FString                                 EventName;
	struct FTimespan                              TimeUntilEnd;
	struct FTimespan                              TimeSinceBegin;
	float                                         TimespanRatio;
	uint8                                         Pad_24[0x4];
};
static_assert(alignof(ScriptedObjectMovement_StaticPath_HandleCalendarEventUpdated) == 0x000008, "Wrong alignment on ScriptedObjectMovement_StaticPath_HandleCalendarEventUpdated");
static_assert(sizeof(ScriptedObjectMovement_StaticPath_HandleCalendarEventUpdated) == 0x000028, "Wrong size on ScriptedObjectMovement_StaticPath_HandleCalendarEventUpdated");
static_assert(offsetof(ScriptedObjectMovement_StaticPath_HandleCalendarEventUpdated, EventName) == 0x000000, "Member 'ScriptedObjectMovement_StaticPath_HandleCalendarEventUpdated::EventName' has a wrong offset!");
static_assert(offsetof(ScriptedObjectMovement_StaticPath_HandleCalendarEventUpdated, TimeUntilEnd) == 0x000010, "Member 'ScriptedObjectMovement_StaticPath_HandleCalendarEventUpdated::TimeUntilEnd' has a wrong offset!");
static_assert(offsetof(ScriptedObjectMovement_StaticPath_HandleCalendarEventUpdated, TimeSinceBegin) == 0x000018, "Member 'ScriptedObjectMovement_StaticPath_HandleCalendarEventUpdated::TimeSinceBegin' has a wrong offset!");
static_assert(offsetof(ScriptedObjectMovement_StaticPath_HandleCalendarEventUpdated, TimespanRatio) == 0x000020, "Member 'ScriptedObjectMovement_StaticPath_HandleCalendarEventUpdated::TimespanRatio' has a wrong offset!");

}
