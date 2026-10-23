#pragma once

#include "Basic.hpp"

#include "SOMRuntime_structs.hpp"
#include "CoreUObject_classes.hpp"
#include "FortniteGame_classes.hpp"
#include "GameplayAbilities_structs.hpp"
#include "GameplayTags_structs.hpp"
#include "Engine_classes.hpp"

namespace SDK
{

class IFortScriptedObjectMovement_GridProviderInterface final : public IInterface
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortScriptedObjectMovement_GridProviderInterface">();
	}
	static class IFortScriptedObjectMovement_GridProviderInterface* GetDefaultObj()
	{
		return GetDefaultObjImpl<IFortScriptedObjectMovement_GridProviderInterface>();
	}
};
static_assert(alignof(IFortScriptedObjectMovement_GridProviderInterface) == 0x000008, "Wrong alignment on IFortScriptedObjectMovement_GridProviderInterface");
static_assert(sizeof(IFortScriptedObjectMovement_GridProviderInterface) == 0x000028, "Wrong size on IFortScriptedObjectMovement_GridProviderInterface");

class AFortScriptedObjectMovement_WorldPhaseSite final : public AActor
{
public:
	uint8                                         Pad_288[0x8];
	TArray<struct FFortScriptedObjectMovementPhaseData> Phases;
	struct FScalableFloat                         NumSimulatenousMovingObjects;
	struct FScalableFloat                         PhaseIntervalSeconds;
	uint8                                         Pad_2F0[0x20];
	struct FScriptedObjectMovement_Grid           BaseGrid;
	struct FScriptedObjectMovement_DynamicPathContext InProgressPath;
	TArray<class UFortScriptedObjectMovement_Slot*> LeavingSlotStack;
	TArray<class UFortScriptedObjectMovement_Slot*> DestinationSlotStack;
	TArray<class UFortScriptedObjectMovement_Slot*> OverflowSlotStack;
	TArray<class AFortScriptedObjectMovement_MovableObjectBase*> CurrentlyMovingObjects;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortScriptedObjectMovement_WorldPhaseSite">();
	}
	static class AFortScriptedObjectMovement_WorldPhaseSite* GetDefaultObj()
	{
		return GetDefaultObjImpl<AFortScriptedObjectMovement_WorldPhaseSite>();
	}
};
static_assert(alignof(AFortScriptedObjectMovement_WorldPhaseSite) == 0x000008, "Wrong alignment on AFortScriptedObjectMovement_WorldPhaseSite");
static_assert(sizeof(AFortScriptedObjectMovement_WorldPhaseSite) == 0x000450, "Wrong size on AFortScriptedObjectMovement_WorldPhaseSite");
static_assert(offsetof(AFortScriptedObjectMovement_WorldPhaseSite, Phases) == 0x000290, "Member 'AFortScriptedObjectMovement_WorldPhaseSite::Phases' has a wrong offset!");
static_assert(offsetof(AFortScriptedObjectMovement_WorldPhaseSite, NumSimulatenousMovingObjects) == 0x0002A0, "Member 'AFortScriptedObjectMovement_WorldPhaseSite::NumSimulatenousMovingObjects' has a wrong offset!");
static_assert(offsetof(AFortScriptedObjectMovement_WorldPhaseSite, PhaseIntervalSeconds) == 0x0002C8, "Member 'AFortScriptedObjectMovement_WorldPhaseSite::PhaseIntervalSeconds' has a wrong offset!");
static_assert(offsetof(AFortScriptedObjectMovement_WorldPhaseSite, BaseGrid) == 0x000310, "Member 'AFortScriptedObjectMovement_WorldPhaseSite::BaseGrid' has a wrong offset!");
static_assert(offsetof(AFortScriptedObjectMovement_WorldPhaseSite, InProgressPath) == 0x0003D8, "Member 'AFortScriptedObjectMovement_WorldPhaseSite::InProgressPath' has a wrong offset!");
static_assert(offsetof(AFortScriptedObjectMovement_WorldPhaseSite, LeavingSlotStack) == 0x000410, "Member 'AFortScriptedObjectMovement_WorldPhaseSite::LeavingSlotStack' has a wrong offset!");
static_assert(offsetof(AFortScriptedObjectMovement_WorldPhaseSite, DestinationSlotStack) == 0x000420, "Member 'AFortScriptedObjectMovement_WorldPhaseSite::DestinationSlotStack' has a wrong offset!");
static_assert(offsetof(AFortScriptedObjectMovement_WorldPhaseSite, OverflowSlotStack) == 0x000430, "Member 'AFortScriptedObjectMovement_WorldPhaseSite::OverflowSlotStack' has a wrong offset!");
static_assert(offsetof(AFortScriptedObjectMovement_WorldPhaseSite, CurrentlyMovingObjects) == 0x000440, "Member 'AFortScriptedObjectMovement_WorldPhaseSite::CurrentlyMovingObjects' has a wrong offset!");

class UFortScriptedObjectMovement_SlotDefinition final : public UPrimaryDataAsset
{
public:
	TSubclassOf<class AFortScriptedObjectMovement_MovableObjectBase> ScriptedObjectClass;
	float                                         ObjectScale;
	uint8                                         Pad_3C[0x4];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortScriptedObjectMovement_SlotDefinition">();
	}
	static class UFortScriptedObjectMovement_SlotDefinition* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortScriptedObjectMovement_SlotDefinition>();
	}
};
static_assert(alignof(UFortScriptedObjectMovement_SlotDefinition) == 0x000008, "Wrong alignment on UFortScriptedObjectMovement_SlotDefinition");
static_assert(sizeof(UFortScriptedObjectMovement_SlotDefinition) == 0x000040, "Wrong size on UFortScriptedObjectMovement_SlotDefinition");
static_assert(offsetof(UFortScriptedObjectMovement_SlotDefinition, ScriptedObjectClass) == 0x000030, "Member 'UFortScriptedObjectMovement_SlotDefinition::ScriptedObjectClass' has a wrong offset!");
static_assert(offsetof(UFortScriptedObjectMovement_SlotDefinition, ObjectScale) == 0x000038, "Member 'UFortScriptedObjectMovement_SlotDefinition::ObjectScale' has a wrong offset!");

class UFortScriptedObjectMovement_Slot final : public UStaticMeshComponent
{
public:
	class UFortScriptedObjectMovement_SlotDefinition* SlotDefinition;
	int32                                         ObjectRemoveOrder;
	uint8                                         Pad_62C[0x4];
	class AFortScriptedObjectMovement_MovableObjectBase* SlottedObject;
	uint8                                         Pad_638[0x8];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortScriptedObjectMovement_Slot">();
	}
	static class UFortScriptedObjectMovement_Slot* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortScriptedObjectMovement_Slot>();
	}
};
static_assert(alignof(UFortScriptedObjectMovement_Slot) == 0x000010, "Wrong alignment on UFortScriptedObjectMovement_Slot");
static_assert(sizeof(UFortScriptedObjectMovement_Slot) == 0x000640, "Wrong size on UFortScriptedObjectMovement_Slot");
static_assert(offsetof(UFortScriptedObjectMovement_Slot, SlotDefinition) == 0x000620, "Member 'UFortScriptedObjectMovement_Slot::SlotDefinition' has a wrong offset!");
static_assert(offsetof(UFortScriptedObjectMovement_Slot, ObjectRemoveOrder) == 0x000628, "Member 'UFortScriptedObjectMovement_Slot::ObjectRemoveOrder' has a wrong offset!");
static_assert(offsetof(UFortScriptedObjectMovement_Slot, SlottedObject) == 0x000630, "Member 'UFortScriptedObjectMovement_Slot::SlottedObject' has a wrong offset!");

class AFortScriptedObjectMovement_Structure final : public AActor
{
public:
	TArray<class UFortScriptedObjectMovement_Slot*> CachedObjectSlots;
	TArray<class UFortScriptedObjectMovement_SlotDefinition*> CachedSlotDefinitions;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortScriptedObjectMovement_Structure">();
	}
	static class AFortScriptedObjectMovement_Structure* GetDefaultObj()
	{
		return GetDefaultObjImpl<AFortScriptedObjectMovement_Structure>();
	}
};
static_assert(alignof(AFortScriptedObjectMovement_Structure) == 0x000008, "Wrong alignment on AFortScriptedObjectMovement_Structure");
static_assert(sizeof(AFortScriptedObjectMovement_Structure) == 0x0002A8, "Wrong size on AFortScriptedObjectMovement_Structure");
static_assert(offsetof(AFortScriptedObjectMovement_Structure, CachedObjectSlots) == 0x000288, "Member 'AFortScriptedObjectMovement_Structure::CachedObjectSlots' has a wrong offset!");
static_assert(offsetof(AFortScriptedObjectMovement_Structure, CachedSlotDefinitions) == 0x000298, "Member 'AFortScriptedObjectMovement_Structure::CachedSlotDefinitions' has a wrong offset!");

class alignas(0x10) UFortGameStateComponent_ScriptedObjectMovementManager final : public UFortGameStateComponent
{
public:
	uint8                                         Pad_A0[0x8];
	TArray<class AFortScriptedObjectMovement_WorldPhaseSite*> WorldPhaseSites;
	uint8                                         Pad_B8[0x98];
	TArray<class AScriptedObjectMovement_StaticPath*> RegisteredStaticPaths;
	class AScriptedObjectMovement_StaticPath*     CurrentlyMovingStaticPath;
	uint8                                         Pad_168[0x28];
	struct FScalableFloat                         StaticPathCooldownBetweenMoves;
	uint8                                         Pad_1B8[0x8];

public:
	void HandleCurrentPlaylistReady(class AFortGameStateAthena* GameState, const class UFortPlaylist* Playlist, const struct FGameplayTagContainer& PlaylistContextTags);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortGameStateComponent_ScriptedObjectMovementManager">();
	}
	static class UFortGameStateComponent_ScriptedObjectMovementManager* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortGameStateComponent_ScriptedObjectMovementManager>();
	}
};
static_assert(alignof(UFortGameStateComponent_ScriptedObjectMovementManager) == 0x000010, "Wrong alignment on UFortGameStateComponent_ScriptedObjectMovementManager");
static_assert(sizeof(UFortGameStateComponent_ScriptedObjectMovementManager) == 0x0001C0, "Wrong size on UFortGameStateComponent_ScriptedObjectMovementManager");
static_assert(offsetof(UFortGameStateComponent_ScriptedObjectMovementManager, WorldPhaseSites) == 0x0000A8, "Member 'UFortGameStateComponent_ScriptedObjectMovementManager::WorldPhaseSites' has a wrong offset!");
static_assert(offsetof(UFortGameStateComponent_ScriptedObjectMovementManager, RegisteredStaticPaths) == 0x000150, "Member 'UFortGameStateComponent_ScriptedObjectMovementManager::RegisteredStaticPaths' has a wrong offset!");
static_assert(offsetof(UFortGameStateComponent_ScriptedObjectMovementManager, CurrentlyMovingStaticPath) == 0x000160, "Member 'UFortGameStateComponent_ScriptedObjectMovementManager::CurrentlyMovingStaticPath' has a wrong offset!");
static_assert(offsetof(UFortGameStateComponent_ScriptedObjectMovementManager, StaticPathCooldownBetweenMoves) == 0x000190, "Member 'UFortGameStateComponent_ScriptedObjectMovementManager::StaticPathCooldownBetweenMoves' has a wrong offset!");

class AFortScriptedObjectMovement_MovableObjectBase final : public ABuildingGameplayActor
{
public:
	uint8                                         Pad_A30[0x70];
	int32                                         Editor_SkipMasterPathIndex;
	int32                                         Editor_SkipSubPathIndex;
	int32                                         Editor_NumStepsPerClick;
	uint8                                         Pad_AAC[0x24];
	class UFortScriptedObjectMovement_SlotDefinition* AssignedSlotDefinition;
	struct FScriptedObjectMovement_DynamicPathContext MovementPath;
	uint8                                         Pad_B10[0x8];
	class UStaticMesh*                            ScriptedObjectMesh;
	uint8                                         Pad_B20[0x18];
	bool                                          bDebugStaticMovement;
	bool                                          bWaitingForBeginPlaySkip;
	uint8                                         Pad_B3A[0x6];
	class AScriptedObjectMovement_StaticPath*     StaticFollowPath;
	uint8                                         Pad_B48[0x8];
	struct FScriptedObjectMovement_StaticPathStepData CurrentStepData;

public:
	void BeginMovingToStaticPathNode(const struct FScriptedObjectMovement_StaticPathStepData& StepData);
	void Cheat_NetMulticast_SendDebugTimerInfo(const float ServerTimeWhenQueryInvoked, const float RemainingTime);
	void CheatDrawKeyframes();
	void ConfigureStaticMeshToSlotDefinition(class UFortScriptedObjectMovement_SlotDefinition* SlotDefinition, class UStaticMeshComponent* StaticMeshComponent);
	void Editor_ClearResetObjectLocation();
	void Editor_DebugLogStaticPathTravelIndex();
	void Editor_NextStep();
	void Editor_PreviousStep();
	void Editor_ResetObject();
	void Editor_TryJumpToStartStep();
	class UStaticMeshComponent* GetScriptedObjectStaticMeshComponent();
	void HandleSlotDefinitionSlotted(class UFortScriptedObjectMovement_SlotDefinition* SlotDefinition);
	void NotifyStaticPathStepComplete(bool bReachedBeginPlaySkipStep);
	void OnRep_CurrentStepData();
	void SetCanEverAffectNavigation(bool bCanEverAffectNavigation, class UActorComponent* TargetActorComponent);

	bool BlockOverlappingStaticPathSteps() const;
	void GetStaticPathTravelingBounds(struct FVector* OutBoxExtent) const;
	float GetStaticPathZOffsetHeight() const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortScriptedObjectMovement_MovableObjectBase">();
	}
	static class AFortScriptedObjectMovement_MovableObjectBase* GetDefaultObj()
	{
		return GetDefaultObjImpl<AFortScriptedObjectMovement_MovableObjectBase>();
	}
};
static_assert(alignof(AFortScriptedObjectMovement_MovableObjectBase) == 0x000010, "Wrong alignment on AFortScriptedObjectMovement_MovableObjectBase");
static_assert(sizeof(AFortScriptedObjectMovement_MovableObjectBase) == 0x000C40, "Wrong size on AFortScriptedObjectMovement_MovableObjectBase");
static_assert(offsetof(AFortScriptedObjectMovement_MovableObjectBase, Editor_SkipMasterPathIndex) == 0x000AA0, "Member 'AFortScriptedObjectMovement_MovableObjectBase::Editor_SkipMasterPathIndex' has a wrong offset!");
static_assert(offsetof(AFortScriptedObjectMovement_MovableObjectBase, Editor_SkipSubPathIndex) == 0x000AA4, "Member 'AFortScriptedObjectMovement_MovableObjectBase::Editor_SkipSubPathIndex' has a wrong offset!");
static_assert(offsetof(AFortScriptedObjectMovement_MovableObjectBase, Editor_NumStepsPerClick) == 0x000AA8, "Member 'AFortScriptedObjectMovement_MovableObjectBase::Editor_NumStepsPerClick' has a wrong offset!");
static_assert(offsetof(AFortScriptedObjectMovement_MovableObjectBase, AssignedSlotDefinition) == 0x000AD0, "Member 'AFortScriptedObjectMovement_MovableObjectBase::AssignedSlotDefinition' has a wrong offset!");
static_assert(offsetof(AFortScriptedObjectMovement_MovableObjectBase, MovementPath) == 0x000AD8, "Member 'AFortScriptedObjectMovement_MovableObjectBase::MovementPath' has a wrong offset!");
static_assert(offsetof(AFortScriptedObjectMovement_MovableObjectBase, ScriptedObjectMesh) == 0x000B18, "Member 'AFortScriptedObjectMovement_MovableObjectBase::ScriptedObjectMesh' has a wrong offset!");
static_assert(offsetof(AFortScriptedObjectMovement_MovableObjectBase, bDebugStaticMovement) == 0x000B38, "Member 'AFortScriptedObjectMovement_MovableObjectBase::bDebugStaticMovement' has a wrong offset!");
static_assert(offsetof(AFortScriptedObjectMovement_MovableObjectBase, bWaitingForBeginPlaySkip) == 0x000B39, "Member 'AFortScriptedObjectMovement_MovableObjectBase::bWaitingForBeginPlaySkip' has a wrong offset!");
static_assert(offsetof(AFortScriptedObjectMovement_MovableObjectBase, StaticFollowPath) == 0x000B40, "Member 'AFortScriptedObjectMovement_MovableObjectBase::StaticFollowPath' has a wrong offset!");
static_assert(offsetof(AFortScriptedObjectMovement_MovableObjectBase, CurrentStepData) == 0x000B50, "Member 'AFortScriptedObjectMovement_MovableObjectBase::CurrentStepData' has a wrong offset!");

class UScriptedObjectMovement_CalendarCheatDefinition final : public UPrimaryDataAsset
{
public:
	TArray<struct FScriptedObjectMovement_StaticPathCalendarCheatDefinitionData> CheatCalendarEvents;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"ScriptedObjectMovement_CalendarCheatDefinition">();
	}
	static class UScriptedObjectMovement_CalendarCheatDefinition* GetDefaultObj()
	{
		return GetDefaultObjImpl<UScriptedObjectMovement_CalendarCheatDefinition>();
	}
};
static_assert(alignof(UScriptedObjectMovement_CalendarCheatDefinition) == 0x000008, "Wrong alignment on UScriptedObjectMovement_CalendarCheatDefinition");
static_assert(sizeof(UScriptedObjectMovement_CalendarCheatDefinition) == 0x000040, "Wrong size on UScriptedObjectMovement_CalendarCheatDefinition");
static_assert(offsetof(UScriptedObjectMovement_CalendarCheatDefinition, CheatCalendarEvents) == 0x000030, "Member 'UScriptedObjectMovement_CalendarCheatDefinition::CheatCalendarEvents' has a wrong offset!");

#pragma pack(push, 0x1)
class alignas(0x10) AScriptedObjectMovement_StaticPath : public AActor
{
public:
	uint8                                         Pad_288[0x18];
	class USplineComponent*                       MasterSplinePath;
	TArray<struct FScriptedObjectMovement_StaticPathTravelerData> PathTravelers;
	TArray<struct FScriptedObjectMovement_StaticPathSplineInputKeyData> SplineData;
	float                                         StepSpacingDistance;
	uint8                                         Pad_2CC[0x4];
	TSoftObjectPtr<class UScriptedObjectMovement_CalendarCheatDefinition> CheatCalendarEventDefinition;
	struct FGameplayTag                           MovementStyleTag;
	uint8                                         Pad_2FC[0x7C];
	class FString                                 EnterSplineCalendarEvent;
	class FString                                 ExitSplineCalendarEvent;
	TArray<struct FStaticPathCalendarSplinePointGroup> OrderedCalendarEventPointGroups;
	uint8                                         Pad_3A8[0x128];
	class UFortAsyncAction_CalendarMultiEventWatcher* CalendarWatcherAction;

public:
	void GeneratePathData();
	void HandleCalendarEventActive(const class FString& EventName, const struct FTimespan& TimeUntilEnd, const struct FTimespan& TimeSinceBegin, float TimespanRatio);
	void HandleCalendarEventEnded(const class FString& EventName, const struct FTimespan& TimeUntilEnd, const struct FTimespan& TimeSinceBegin, float TimespanRatio);
	void HandleCalendarEventUpdated(const class FString& EventName, const struct FTimespan& TimeUntilEnd, const struct FTimespan& TimeSinceBegin, float TimespanRatio);
	void LockAllPathNodesFromBeingRegenerated();
	void UnlockAllPathsFromBeingRegenerated();

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"ScriptedObjectMovement_StaticPath">();
	}
	static class AScriptedObjectMovement_StaticPath* GetDefaultObj()
	{
		return GetDefaultObjImpl<AScriptedObjectMovement_StaticPath>();
	}
};
#pragma pack(pop)
static_assert(alignof(AScriptedObjectMovement_StaticPath) == 0x000010, "Wrong alignment on AScriptedObjectMovement_StaticPath");
static_assert(sizeof(AScriptedObjectMovement_StaticPath) == 0x0004E0, "Wrong size on AScriptedObjectMovement_StaticPath");
static_assert(offsetof(AScriptedObjectMovement_StaticPath, MasterSplinePath) == 0x0002A0, "Member 'AScriptedObjectMovement_StaticPath::MasterSplinePath' has a wrong offset!");
static_assert(offsetof(AScriptedObjectMovement_StaticPath, PathTravelers) == 0x0002A8, "Member 'AScriptedObjectMovement_StaticPath::PathTravelers' has a wrong offset!");
static_assert(offsetof(AScriptedObjectMovement_StaticPath, SplineData) == 0x0002B8, "Member 'AScriptedObjectMovement_StaticPath::SplineData' has a wrong offset!");
static_assert(offsetof(AScriptedObjectMovement_StaticPath, StepSpacingDistance) == 0x0002C8, "Member 'AScriptedObjectMovement_StaticPath::StepSpacingDistance' has a wrong offset!");
static_assert(offsetof(AScriptedObjectMovement_StaticPath, CheatCalendarEventDefinition) == 0x0002D0, "Member 'AScriptedObjectMovement_StaticPath::CheatCalendarEventDefinition' has a wrong offset!");
static_assert(offsetof(AScriptedObjectMovement_StaticPath, MovementStyleTag) == 0x0002F8, "Member 'AScriptedObjectMovement_StaticPath::MovementStyleTag' has a wrong offset!");
static_assert(offsetof(AScriptedObjectMovement_StaticPath, EnterSplineCalendarEvent) == 0x000378, "Member 'AScriptedObjectMovement_StaticPath::EnterSplineCalendarEvent' has a wrong offset!");
static_assert(offsetof(AScriptedObjectMovement_StaticPath, ExitSplineCalendarEvent) == 0x000388, "Member 'AScriptedObjectMovement_StaticPath::ExitSplineCalendarEvent' has a wrong offset!");
static_assert(offsetof(AScriptedObjectMovement_StaticPath, OrderedCalendarEventPointGroups) == 0x000398, "Member 'AScriptedObjectMovement_StaticPath::OrderedCalendarEventPointGroups' has a wrong offset!");
static_assert(offsetof(AScriptedObjectMovement_StaticPath, CalendarWatcherAction) == 0x0004D0, "Member 'AScriptedObjectMovement_StaticPath::CalendarWatcherAction' has a wrong offset!");

}
