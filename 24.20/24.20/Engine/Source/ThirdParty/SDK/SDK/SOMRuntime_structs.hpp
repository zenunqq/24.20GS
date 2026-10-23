#pragma once

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "GameplayTags_structs.hpp"

namespace SDK
{

struct alignas(0x08) FStaticPathCalendarSplinePointGroup final
{
public:
	uint8                                         Pad_0[0x30];
};
static_assert(alignof(FStaticPathCalendarSplinePointGroup) == 0x000008, "Wrong alignment on FStaticPathCalendarSplinePointGroup");
static_assert(sizeof(FStaticPathCalendarSplinePointGroup) == 0x000030, "Wrong size on FStaticPathCalendarSplinePointGroup");

struct FScriptedObjectMovement_AStarGraphWrapper final
{
public:
	uint8                                         Pad_0[0x1];
};
static_assert(alignof(FScriptedObjectMovement_AStarGraphWrapper) == 0x000001, "Wrong alignment on FScriptedObjectMovement_AStarGraphWrapper");
static_assert(sizeof(FScriptedObjectMovement_AStarGraphWrapper) == 0x000001, "Wrong size on FScriptedObjectMovement_AStarGraphWrapper");

struct FScriptedObjectMovement_StaticPathStepData final
{
public:
	struct FTransform                             StartWorldTransform;
	struct FTransform                             EndWorldTransform;
	int32                                         MasterPathStartSplinePoint;
	int32                                         SubSplineStartPoint;
	float                                         MoveAtServerTimeSecs;
	uint8                                         Pad_CC[0x4];
	class AFortScriptedObjectMovement_MovableObjectBase* PathTraveler;
	uint8                                         Pad_D8[0x8];
	struct FGameplayTag                           MoveStyleTag;
	bool                                          bTeleport;
	bool                                          bIsSkipStep;
	uint8                                         Pad_E6[0xA];
};
static_assert(alignof(FScriptedObjectMovement_StaticPathStepData) == 0x000010, "Wrong alignment on FScriptedObjectMovement_StaticPathStepData");
static_assert(sizeof(FScriptedObjectMovement_StaticPathStepData) == 0x0000F0, "Wrong size on FScriptedObjectMovement_StaticPathStepData");
static_assert(offsetof(FScriptedObjectMovement_StaticPathStepData, StartWorldTransform) == 0x000000, "Member 'FScriptedObjectMovement_StaticPathStepData::StartWorldTransform' has a wrong offset!");
static_assert(offsetof(FScriptedObjectMovement_StaticPathStepData, EndWorldTransform) == 0x000060, "Member 'FScriptedObjectMovement_StaticPathStepData::EndWorldTransform' has a wrong offset!");
static_assert(offsetof(FScriptedObjectMovement_StaticPathStepData, MasterPathStartSplinePoint) == 0x0000C0, "Member 'FScriptedObjectMovement_StaticPathStepData::MasterPathStartSplinePoint' has a wrong offset!");
static_assert(offsetof(FScriptedObjectMovement_StaticPathStepData, SubSplineStartPoint) == 0x0000C4, "Member 'FScriptedObjectMovement_StaticPathStepData::SubSplineStartPoint' has a wrong offset!");
static_assert(offsetof(FScriptedObjectMovement_StaticPathStepData, MoveAtServerTimeSecs) == 0x0000C8, "Member 'FScriptedObjectMovement_StaticPathStepData::MoveAtServerTimeSecs' has a wrong offset!");
static_assert(offsetof(FScriptedObjectMovement_StaticPathStepData, PathTraveler) == 0x0000D0, "Member 'FScriptedObjectMovement_StaticPathStepData::PathTraveler' has a wrong offset!");
static_assert(offsetof(FScriptedObjectMovement_StaticPathStepData, MoveStyleTag) == 0x0000E0, "Member 'FScriptedObjectMovement_StaticPathStepData::MoveStyleTag' has a wrong offset!");
static_assert(offsetof(FScriptedObjectMovement_StaticPathStepData, bTeleport) == 0x0000E4, "Member 'FScriptedObjectMovement_StaticPathStepData::bTeleport' has a wrong offset!");
static_assert(offsetof(FScriptedObjectMovement_StaticPathStepData, bIsSkipStep) == 0x0000E5, "Member 'FScriptedObjectMovement_StaticPathStepData::bIsSkipStep' has a wrong offset!");

struct FScriptedObjectMovement_DynamicPathContext final
{
public:
	class UFortScriptedObjectMovement_Slot*       SourceSlot;
	class UFortScriptedObjectMovement_Slot*       DestinationSlot;
	TScriptInterface<class IFortScriptedObjectMovement_GridProviderInterface> GridProvider;
	uint8                                         Pad_20[0x18];
};
static_assert(alignof(FScriptedObjectMovement_DynamicPathContext) == 0x000008, "Wrong alignment on FScriptedObjectMovement_DynamicPathContext");
static_assert(sizeof(FScriptedObjectMovement_DynamicPathContext) == 0x000038, "Wrong size on FScriptedObjectMovement_DynamicPathContext");
static_assert(offsetof(FScriptedObjectMovement_DynamicPathContext, SourceSlot) == 0x000000, "Member 'FScriptedObjectMovement_DynamicPathContext::SourceSlot' has a wrong offset!");
static_assert(offsetof(FScriptedObjectMovement_DynamicPathContext, DestinationSlot) == 0x000008, "Member 'FScriptedObjectMovement_DynamicPathContext::DestinationSlot' has a wrong offset!");
static_assert(offsetof(FScriptedObjectMovement_DynamicPathContext, GridProvider) == 0x000010, "Member 'FScriptedObjectMovement_DynamicPathContext::GridProvider' has a wrong offset!");

struct FScriptedObjectMovement_StaticPathCalendarCheatDefinitionData final
{
public:
	class FString                                 EventName;
	float                                         DurationTimeSeconds;
	float                                         DelayStartTimeSeconds;
};
static_assert(alignof(FScriptedObjectMovement_StaticPathCalendarCheatDefinitionData) == 0x000008, "Wrong alignment on FScriptedObjectMovement_StaticPathCalendarCheatDefinitionData");
static_assert(sizeof(FScriptedObjectMovement_StaticPathCalendarCheatDefinitionData) == 0x000018, "Wrong size on FScriptedObjectMovement_StaticPathCalendarCheatDefinitionData");
static_assert(offsetof(FScriptedObjectMovement_StaticPathCalendarCheatDefinitionData, EventName) == 0x000000, "Member 'FScriptedObjectMovement_StaticPathCalendarCheatDefinitionData::EventName' has a wrong offset!");
static_assert(offsetof(FScriptedObjectMovement_StaticPathCalendarCheatDefinitionData, DurationTimeSeconds) == 0x000010, "Member 'FScriptedObjectMovement_StaticPathCalendarCheatDefinitionData::DurationTimeSeconds' has a wrong offset!");
static_assert(offsetof(FScriptedObjectMovement_StaticPathCalendarCheatDefinitionData, DelayStartTimeSeconds) == 0x000014, "Member 'FScriptedObjectMovement_StaticPathCalendarCheatDefinitionData::DelayStartTimeSeconds' has a wrong offset!");

struct FScriptedObjectMovement_Grid final
{
public:
	uint8                                         Pad_0[0x50];
	struct FVector                                CellSize;
	uint8                                         Pad_68[0x60];
};
static_assert(alignof(FScriptedObjectMovement_Grid) == 0x000008, "Wrong alignment on FScriptedObjectMovement_Grid");
static_assert(sizeof(FScriptedObjectMovement_Grid) == 0x0000C8, "Wrong size on FScriptedObjectMovement_Grid");
static_assert(offsetof(FScriptedObjectMovement_Grid, CellSize) == 0x000050, "Member 'FScriptedObjectMovement_Grid::CellSize' has a wrong offset!");

struct FFortScriptedObjectMovementPhaseData final
{
public:
	TArray<class AFortScriptedObjectMovement_Structure*> Structures;
};
static_assert(alignof(FFortScriptedObjectMovementPhaseData) == 0x000008, "Wrong alignment on FFortScriptedObjectMovementPhaseData");
static_assert(sizeof(FFortScriptedObjectMovementPhaseData) == 0x000010, "Wrong size on FFortScriptedObjectMovementPhaseData");
static_assert(offsetof(FFortScriptedObjectMovementPhaseData, Structures) == 0x000000, "Member 'FFortScriptedObjectMovementPhaseData::Structures' has a wrong offset!");

struct alignas(0x08) FScriptedObjectMovementCalendarEventData final
{
public:
	uint8                                         Pad_0[0x28];
};
static_assert(alignof(FScriptedObjectMovementCalendarEventData) == 0x000008, "Wrong alignment on FScriptedObjectMovementCalendarEventData");
static_assert(sizeof(FScriptedObjectMovementCalendarEventData) == 0x000028, "Wrong size on FScriptedObjectMovementCalendarEventData");

struct FScriptedObjectMovement_StaticPathSplineInputKeyData final
{
public:
	bool                                          bLockGeneratedData;
	uint8                                         Pad_1[0x7];
	class FString                                 CalendarEvent;
	class FString                                 PauseCalendarEvent;
};
static_assert(alignof(FScriptedObjectMovement_StaticPathSplineInputKeyData) == 0x000008, "Wrong alignment on FScriptedObjectMovement_StaticPathSplineInputKeyData");
static_assert(sizeof(FScriptedObjectMovement_StaticPathSplineInputKeyData) == 0x000028, "Wrong size on FScriptedObjectMovement_StaticPathSplineInputKeyData");
static_assert(offsetof(FScriptedObjectMovement_StaticPathSplineInputKeyData, bLockGeneratedData) == 0x000000, "Member 'FScriptedObjectMovement_StaticPathSplineInputKeyData::bLockGeneratedData' has a wrong offset!");
static_assert(offsetof(FScriptedObjectMovement_StaticPathSplineInputKeyData, CalendarEvent) == 0x000008, "Member 'FScriptedObjectMovement_StaticPathSplineInputKeyData::CalendarEvent' has a wrong offset!");
static_assert(offsetof(FScriptedObjectMovement_StaticPathSplineInputKeyData, PauseCalendarEvent) == 0x000018, "Member 'FScriptedObjectMovement_StaticPathSplineInputKeyData::PauseCalendarEvent' has a wrong offset!");

struct FScriptedObjectMovement_StepMetaData final
{
public:
	bool                                          bSkipStep;
};
static_assert(alignof(FScriptedObjectMovement_StepMetaData) == 0x000001, "Wrong alignment on FScriptedObjectMovement_StepMetaData");
static_assert(sizeof(FScriptedObjectMovement_StepMetaData) == 0x000001, "Wrong size on FScriptedObjectMovement_StepMetaData");
static_assert(offsetof(FScriptedObjectMovement_StepMetaData, bSkipStep) == 0x000000, "Member 'FScriptedObjectMovement_StepMetaData::bSkipStep' has a wrong offset!");

struct FScriptedObjectMovement_StaticPathTravelerData final
{
public:
	TArray<class USplineComponent*>               GeneratedSplinesArray;
	TArray<struct FScriptedObjectMovement_StepMetaData> StepMetaData;
	class USplineComponent*                       EnterSpline;
	class USplineComponent*                       ExitSpline;
	class AFortScriptedObjectMovement_MovableObjectBase* PathTraveler;
	int32                                         TravelOrder;
	float                                         LateralOffset;
	bool                                          bLocked;
	bool                                          bLockEnterSpline;
	bool                                          bLockExitSpline;
	uint8                                         Pad_43[0x5];
	struct FVector                                TravelerBounds;
	uint8                                         Pad_60[0x60];
};
static_assert(alignof(FScriptedObjectMovement_StaticPathTravelerData) == 0x000008, "Wrong alignment on FScriptedObjectMovement_StaticPathTravelerData");
static_assert(sizeof(FScriptedObjectMovement_StaticPathTravelerData) == 0x0000C0, "Wrong size on FScriptedObjectMovement_StaticPathTravelerData");
static_assert(offsetof(FScriptedObjectMovement_StaticPathTravelerData, GeneratedSplinesArray) == 0x000000, "Member 'FScriptedObjectMovement_StaticPathTravelerData::GeneratedSplinesArray' has a wrong offset!");
static_assert(offsetof(FScriptedObjectMovement_StaticPathTravelerData, StepMetaData) == 0x000010, "Member 'FScriptedObjectMovement_StaticPathTravelerData::StepMetaData' has a wrong offset!");
static_assert(offsetof(FScriptedObjectMovement_StaticPathTravelerData, EnterSpline) == 0x000020, "Member 'FScriptedObjectMovement_StaticPathTravelerData::EnterSpline' has a wrong offset!");
static_assert(offsetof(FScriptedObjectMovement_StaticPathTravelerData, ExitSpline) == 0x000028, "Member 'FScriptedObjectMovement_StaticPathTravelerData::ExitSpline' has a wrong offset!");
static_assert(offsetof(FScriptedObjectMovement_StaticPathTravelerData, PathTraveler) == 0x000030, "Member 'FScriptedObjectMovement_StaticPathTravelerData::PathTraveler' has a wrong offset!");
static_assert(offsetof(FScriptedObjectMovement_StaticPathTravelerData, TravelOrder) == 0x000038, "Member 'FScriptedObjectMovement_StaticPathTravelerData::TravelOrder' has a wrong offset!");
static_assert(offsetof(FScriptedObjectMovement_StaticPathTravelerData, LateralOffset) == 0x00003C, "Member 'FScriptedObjectMovement_StaticPathTravelerData::LateralOffset' has a wrong offset!");
static_assert(offsetof(FScriptedObjectMovement_StaticPathTravelerData, bLocked) == 0x000040, "Member 'FScriptedObjectMovement_StaticPathTravelerData::bLocked' has a wrong offset!");
static_assert(offsetof(FScriptedObjectMovement_StaticPathTravelerData, bLockEnterSpline) == 0x000041, "Member 'FScriptedObjectMovement_StaticPathTravelerData::bLockEnterSpline' has a wrong offset!");
static_assert(offsetof(FScriptedObjectMovement_StaticPathTravelerData, bLockExitSpline) == 0x000042, "Member 'FScriptedObjectMovement_StaticPathTravelerData::bLockExitSpline' has a wrong offset!");
static_assert(offsetof(FScriptedObjectMovement_StaticPathTravelerData, TravelerBounds) == 0x000048, "Member 'FScriptedObjectMovement_StaticPathTravelerData::TravelerBounds' has a wrong offset!");

}
