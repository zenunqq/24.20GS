#pragma once

#include "Basic.hpp"

#include "FortniteGame_structs.hpp"
#include "Engine_structs.hpp"
#include "FortniteAI_structs.hpp"
#include "AIModule_structs.hpp"

namespace SDK::Params
{

struct FortAthenaAIEvaluator_BlueprintBase_OnEnter final
{
public:
	class UBehaviorTreeComponent*                 OwnerComp;
};
static_assert(alignof(FortAthenaAIEvaluator_BlueprintBase_OnEnter) == 0x000008, "Wrong alignment on FortAthenaAIEvaluator_BlueprintBase_OnEnter");
static_assert(sizeof(FortAthenaAIEvaluator_BlueprintBase_OnEnter) == 0x000008, "Wrong size on FortAthenaAIEvaluator_BlueprintBase_OnEnter");
static_assert(offsetof(FortAthenaAIEvaluator_BlueprintBase_OnEnter, OwnerComp) == 0x000000, "Member 'FortAthenaAIEvaluator_BlueprintBase_OnEnter::OwnerComp' has a wrong offset!");

struct FortAthenaAIEvaluator_BlueprintBase_OnExit final
{
public:
	class UBehaviorTreeComponent*                 OwnerComp;
};
static_assert(alignof(FortAthenaAIEvaluator_BlueprintBase_OnExit) == 0x000008, "Wrong alignment on FortAthenaAIEvaluator_BlueprintBase_OnExit");
static_assert(sizeof(FortAthenaAIEvaluator_BlueprintBase_OnExit) == 0x000008, "Wrong size on FortAthenaAIEvaluator_BlueprintBase_OnExit");
static_assert(offsetof(FortAthenaAIEvaluator_BlueprintBase_OnExit, OwnerComp) == 0x000000, "Member 'FortAthenaAIEvaluator_BlueprintBase_OnExit::OwnerComp' has a wrong offset!");

struct FortAthenaAIEvaluator_BlueprintBase_EvaluateOngoingConditions final
{
public:
	class UBehaviorTreeComponent*                 OwnerComp;
	bool                                          ReturnValue;
	uint8                                         Pad_9[0x7];
};
static_assert(alignof(FortAthenaAIEvaluator_BlueprintBase_EvaluateOngoingConditions) == 0x000008, "Wrong alignment on FortAthenaAIEvaluator_BlueprintBase_EvaluateOngoingConditions");
static_assert(sizeof(FortAthenaAIEvaluator_BlueprintBase_EvaluateOngoingConditions) == 0x000010, "Wrong size on FortAthenaAIEvaluator_BlueprintBase_EvaluateOngoingConditions");
static_assert(offsetof(FortAthenaAIEvaluator_BlueprintBase_EvaluateOngoingConditions, OwnerComp) == 0x000000, "Member 'FortAthenaAIEvaluator_BlueprintBase_EvaluateOngoingConditions::OwnerComp' has a wrong offset!");
static_assert(offsetof(FortAthenaAIEvaluator_BlueprintBase_EvaluateOngoingConditions, ReturnValue) == 0x000008, "Member 'FortAthenaAIEvaluator_BlueprintBase_EvaluateOngoingConditions::ReturnValue' has a wrong offset!");

struct FortAthenaAIEvaluator_BlueprintBase_EvaluateStartingConditions final
{
public:
	class UBehaviorTreeComponent*                 OwnerComp;
	bool                                          ReturnValue;
	uint8                                         Pad_9[0x7];
};
static_assert(alignof(FortAthenaAIEvaluator_BlueprintBase_EvaluateStartingConditions) == 0x000008, "Wrong alignment on FortAthenaAIEvaluator_BlueprintBase_EvaluateStartingConditions");
static_assert(sizeof(FortAthenaAIEvaluator_BlueprintBase_EvaluateStartingConditions) == 0x000010, "Wrong size on FortAthenaAIEvaluator_BlueprintBase_EvaluateStartingConditions");
static_assert(offsetof(FortAthenaAIEvaluator_BlueprintBase_EvaluateStartingConditions, OwnerComp) == 0x000000, "Member 'FortAthenaAIEvaluator_BlueprintBase_EvaluateStartingConditions::OwnerComp' has a wrong offset!");
static_assert(offsetof(FortAthenaAIEvaluator_BlueprintBase_EvaluateStartingConditions, ReturnValue) == 0x000008, "Member 'FortAthenaAIEvaluator_BlueprintBase_EvaluateStartingConditions::ReturnValue' has a wrong offset!");

struct FortWorldConditionTimeOfDayState_HandleTimeOfDayPhaseChange final
{
public:
	EFortDayPhase                                 CurrentDayPhase;
	EFortDayPhase                                 PreviousDayPhase;
	bool                                          bAtCreation;
};
static_assert(alignof(FortWorldConditionTimeOfDayState_HandleTimeOfDayPhaseChange) == 0x000001, "Wrong alignment on FortWorldConditionTimeOfDayState_HandleTimeOfDayPhaseChange");
static_assert(sizeof(FortWorldConditionTimeOfDayState_HandleTimeOfDayPhaseChange) == 0x000003, "Wrong size on FortWorldConditionTimeOfDayState_HandleTimeOfDayPhaseChange");
static_assert(offsetof(FortWorldConditionTimeOfDayState_HandleTimeOfDayPhaseChange, CurrentDayPhase) == 0x000000, "Member 'FortWorldConditionTimeOfDayState_HandleTimeOfDayPhaseChange::CurrentDayPhase' has a wrong offset!");
static_assert(offsetof(FortWorldConditionTimeOfDayState_HandleTimeOfDayPhaseChange, PreviousDayPhase) == 0x000001, "Member 'FortWorldConditionTimeOfDayState_HandleTimeOfDayPhaseChange::PreviousDayPhase' has a wrong offset!");
static_assert(offsetof(FortWorldConditionTimeOfDayState_HandleTimeOfDayPhaseChange, bAtCreation) == 0x000002, "Member 'FortWorldConditionTimeOfDayState_HandleTimeOfDayPhaseChange::bAtCreation' has a wrong offset!");

struct FortGameplayInteractionSmartObjectBehaviorDefinition_CanBeUsedBy final
{
public:
	const class AActor*                           User;
	const class AActor*                           SmartObjectActor;
	bool                                          ReturnValue;
	uint8                                         Pad_11[0x7];
};
static_assert(alignof(FortGameplayInteractionSmartObjectBehaviorDefinition_CanBeUsedBy) == 0x000008, "Wrong alignment on FortGameplayInteractionSmartObjectBehaviorDefinition_CanBeUsedBy");
static_assert(sizeof(FortGameplayInteractionSmartObjectBehaviorDefinition_CanBeUsedBy) == 0x000018, "Wrong size on FortGameplayInteractionSmartObjectBehaviorDefinition_CanBeUsedBy");
static_assert(offsetof(FortGameplayInteractionSmartObjectBehaviorDefinition_CanBeUsedBy, User) == 0x000000, "Member 'FortGameplayInteractionSmartObjectBehaviorDefinition_CanBeUsedBy::User' has a wrong offset!");
static_assert(offsetof(FortGameplayInteractionSmartObjectBehaviorDefinition_CanBeUsedBy, SmartObjectActor) == 0x000008, "Member 'FortGameplayInteractionSmartObjectBehaviorDefinition_CanBeUsedBy::SmartObjectActor' has a wrong offset!");
static_assert(offsetof(FortGameplayInteractionSmartObjectBehaviorDefinition_CanBeUsedBy, ReturnValue) == 0x000010, "Member 'FortGameplayInteractionSmartObjectBehaviorDefinition_CanBeUsedBy::ReturnValue' has a wrong offset!");

struct FortAthenaAIBotEvaluator_Conversation_OnPlayerPawnSpawned final
{
public:
	class AFortAthenaAIBotController*             BotController;
	class AFortPlayerPawnAthena*                  BotPawn;
};
static_assert(alignof(FortAthenaAIBotEvaluator_Conversation_OnPlayerPawnSpawned) == 0x000008, "Wrong alignment on FortAthenaAIBotEvaluator_Conversation_OnPlayerPawnSpawned");
static_assert(sizeof(FortAthenaAIBotEvaluator_Conversation_OnPlayerPawnSpawned) == 0x000010, "Wrong size on FortAthenaAIBotEvaluator_Conversation_OnPlayerPawnSpawned");
static_assert(offsetof(FortAthenaAIBotEvaluator_Conversation_OnPlayerPawnSpawned, BotController) == 0x000000, "Member 'FortAthenaAIBotEvaluator_Conversation_OnPlayerPawnSpawned::BotController' has a wrong offset!");
static_assert(offsetof(FortAthenaAIBotEvaluator_Conversation_OnPlayerPawnSpawned, BotPawn) == 0x000008, "Member 'FortAthenaAIBotEvaluator_Conversation_OnPlayerPawnSpawned::BotPawn' has a wrong offset!");

struct FortEQSPrevisActor_SetQueryTemplate final
{
public:
	class UEnvQuery*                              InPrevisQueryTemplate;
};
static_assert(alignof(FortEQSPrevisActor_SetQueryTemplate) == 0x000008, "Wrong alignment on FortEQSPrevisActor_SetQueryTemplate");
static_assert(sizeof(FortEQSPrevisActor_SetQueryTemplate) == 0x000008, "Wrong size on FortEQSPrevisActor_SetQueryTemplate");
static_assert(offsetof(FortEQSPrevisActor_SetQueryTemplate, InPrevisQueryTemplate) == 0x000000, "Member 'FortEQSPrevisActor_SetQueryTemplate::InPrevisQueryTemplate' has a wrong offset!");

struct FortAthenaBTService_ManageWeapon_ManageWeaponTargeting final
{
public:
	class UBehaviorTreeComponent*                 OwnerComp;
};
static_assert(alignof(FortAthenaBTService_ManageWeapon_ManageWeaponTargeting) == 0x000008, "Wrong alignment on FortAthenaBTService_ManageWeapon_ManageWeaponTargeting");
static_assert(sizeof(FortAthenaBTService_ManageWeapon_ManageWeaponTargeting) == 0x000008, "Wrong size on FortAthenaBTService_ManageWeapon_ManageWeaponTargeting");
static_assert(offsetof(FortAthenaBTService_ManageWeapon_ManageWeaponTargeting, OwnerComp) == 0x000000, "Member 'FortAthenaBTService_ManageWeapon_ManageWeaponTargeting::OwnerComp' has a wrong offset!");

struct FortAthenaAIBotEvaluator_Storm_OnSafeZoneStateChanged final
{
public:
	EFortSafeZoneState                            NewState;
};
static_assert(alignof(FortAthenaAIBotEvaluator_Storm_OnSafeZoneStateChanged) == 0x000001, "Wrong alignment on FortAthenaAIBotEvaluator_Storm_OnSafeZoneStateChanged");
static_assert(sizeof(FortAthenaAIBotEvaluator_Storm_OnSafeZoneStateChanged) == 0x000001, "Wrong size on FortAthenaAIBotEvaluator_Storm_OnSafeZoneStateChanged");
static_assert(offsetof(FortAthenaAIBotEvaluator_Storm_OnSafeZoneStateChanged, NewState) == 0x000000, "Member 'FortAthenaAIBotEvaluator_Storm_OnSafeZoneStateChanged::NewState' has a wrong offset!");

struct FortAthenaPlayMontageStateTreeTask_HandleMontageEnded final
{
public:
	const class UAnimMontage*                     EndedMontage;
	bool                                          bInterrupted;
	uint8                                         Pad_9[0x7];
};
static_assert(alignof(FortAthenaPlayMontageStateTreeTask_HandleMontageEnded) == 0x000008, "Wrong alignment on FortAthenaPlayMontageStateTreeTask_HandleMontageEnded");
static_assert(sizeof(FortAthenaPlayMontageStateTreeTask_HandleMontageEnded) == 0x000010, "Wrong size on FortAthenaPlayMontageStateTreeTask_HandleMontageEnded");
static_assert(offsetof(FortAthenaPlayMontageStateTreeTask_HandleMontageEnded, EndedMontage) == 0x000000, "Member 'FortAthenaPlayMontageStateTreeTask_HandleMontageEnded::EndedMontage' has a wrong offset!");
static_assert(offsetof(FortAthenaPlayMontageStateTreeTask_HandleMontageEnded, bInterrupted) == 0x000008, "Member 'FortAthenaPlayMontageStateTreeTask_HandleMontageEnded::bInterrupted' has a wrong offset!");

struct FortAthenaPlayMontageStateTreeTask_HandleNotifyBeginReceived final
{
public:
	class FName                                   NotifyName;
	uint8                                         Pad_4[0x4];
	struct FBranchingPointNotifyPayload           BranchingPointNotifyPayload;
};
static_assert(alignof(FortAthenaPlayMontageStateTreeTask_HandleNotifyBeginReceived) == 0x000008, "Wrong alignment on FortAthenaPlayMontageStateTreeTask_HandleNotifyBeginReceived");
static_assert(sizeof(FortAthenaPlayMontageStateTreeTask_HandleNotifyBeginReceived) == 0x000028, "Wrong size on FortAthenaPlayMontageStateTreeTask_HandleNotifyBeginReceived");
static_assert(offsetof(FortAthenaPlayMontageStateTreeTask_HandleNotifyBeginReceived, NotifyName) == 0x000000, "Member 'FortAthenaPlayMontageStateTreeTask_HandleNotifyBeginReceived::NotifyName' has a wrong offset!");
static_assert(offsetof(FortAthenaPlayMontageStateTreeTask_HandleNotifyBeginReceived, BranchingPointNotifyPayload) == 0x000008, "Member 'FortAthenaPlayMontageStateTreeTask_HandleNotifyBeginReceived::BranchingPointNotifyPayload' has a wrong offset!");

struct FortAthenaPlayContextualAnimTaskInstanceData_OnMontageEnded final
{
public:
	const class UAnimMontage*                     EndedMontage;
	bool                                          bInterrupted;
	uint8                                         Pad_9[0x7];
};
static_assert(alignof(FortAthenaPlayContextualAnimTaskInstanceData_OnMontageEnded) == 0x000008, "Wrong alignment on FortAthenaPlayContextualAnimTaskInstanceData_OnMontageEnded");
static_assert(sizeof(FortAthenaPlayContextualAnimTaskInstanceData_OnMontageEnded) == 0x000010, "Wrong size on FortAthenaPlayContextualAnimTaskInstanceData_OnMontageEnded");
static_assert(offsetof(FortAthenaPlayContextualAnimTaskInstanceData_OnMontageEnded, EndedMontage) == 0x000000, "Member 'FortAthenaPlayContextualAnimTaskInstanceData_OnMontageEnded::EndedMontage' has a wrong offset!");
static_assert(offsetof(FortAthenaPlayContextualAnimTaskInstanceData_OnMontageEnded, bInterrupted) == 0x000008, "Member 'FortAthenaPlayContextualAnimTaskInstanceData_OnMontageEnded::bInterrupted' has a wrong offset!");

struct FortAthenaPlayContextualAnimTaskInstanceData_OnNotifyBeginReceived final
{
public:
	class FName                                   NotifyName;
	uint8                                         Pad_4[0x4];
	struct FBranchingPointNotifyPayload           BranchingPointNotifyPayload;
};
static_assert(alignof(FortAthenaPlayContextualAnimTaskInstanceData_OnNotifyBeginReceived) == 0x000008, "Wrong alignment on FortAthenaPlayContextualAnimTaskInstanceData_OnNotifyBeginReceived");
static_assert(sizeof(FortAthenaPlayContextualAnimTaskInstanceData_OnNotifyBeginReceived) == 0x000028, "Wrong size on FortAthenaPlayContextualAnimTaskInstanceData_OnNotifyBeginReceived");
static_assert(offsetof(FortAthenaPlayContextualAnimTaskInstanceData_OnNotifyBeginReceived, NotifyName) == 0x000000, "Member 'FortAthenaPlayContextualAnimTaskInstanceData_OnNotifyBeginReceived::NotifyName' has a wrong offset!");
static_assert(offsetof(FortAthenaPlayContextualAnimTaskInstanceData_OnNotifyBeginReceived, BranchingPointNotifyPayload) == 0x000008, "Member 'FortAthenaPlayContextualAnimTaskInstanceData_OnNotifyBeginReceived::BranchingPointNotifyPayload' has a wrong offset!");

struct FortAthenaAIBotEvaluator_CharacterLaunched_OnZiplineStateChanged final
{
public:
	bool                                          bIsZiplining;
	uint8                                         Pad_1[0x7];
	class AFortPlayerPawn*                        FortPlayerPawn;
};
static_assert(alignof(FortAthenaAIBotEvaluator_CharacterLaunched_OnZiplineStateChanged) == 0x000008, "Wrong alignment on FortAthenaAIBotEvaluator_CharacterLaunched_OnZiplineStateChanged");
static_assert(sizeof(FortAthenaAIBotEvaluator_CharacterLaunched_OnZiplineStateChanged) == 0x000010, "Wrong size on FortAthenaAIBotEvaluator_CharacterLaunched_OnZiplineStateChanged");
static_assert(offsetof(FortAthenaAIBotEvaluator_CharacterLaunched_OnZiplineStateChanged, bIsZiplining) == 0x000000, "Member 'FortAthenaAIBotEvaluator_CharacterLaunched_OnZiplineStateChanged::bIsZiplining' has a wrong offset!");
static_assert(offsetof(FortAthenaAIBotEvaluator_CharacterLaunched_OnZiplineStateChanged, FortPlayerPawn) == 0x000008, "Member 'FortAthenaAIBotEvaluator_CharacterLaunched_OnZiplineStateChanged::FortPlayerPawn' has a wrong offset!");

struct FortAthenaAIBotEvaluator_Converted_OnConvertedEvent final
{
public:
	class AFortPawn*                              InstigatorPawn;
	class AFortPawn*                              ConvertedPawn;
};
static_assert(alignof(FortAthenaAIBotEvaluator_Converted_OnConvertedEvent) == 0x000008, "Wrong alignment on FortAthenaAIBotEvaluator_Converted_OnConvertedEvent");
static_assert(sizeof(FortAthenaAIBotEvaluator_Converted_OnConvertedEvent) == 0x000010, "Wrong size on FortAthenaAIBotEvaluator_Converted_OnConvertedEvent");
static_assert(offsetof(FortAthenaAIBotEvaluator_Converted_OnConvertedEvent, InstigatorPawn) == 0x000000, "Member 'FortAthenaAIBotEvaluator_Converted_OnConvertedEvent::InstigatorPawn' has a wrong offset!");
static_assert(offsetof(FortAthenaAIBotEvaluator_Converted_OnConvertedEvent, ConvertedPawn) == 0x000008, "Member 'FortAthenaAIBotEvaluator_Converted_OnConvertedEvent::ConvertedPawn' has a wrong offset!");

struct FortAthenaAIBotEvaluator_Converted_OnUnconvertedEvent final
{
public:
	class AFortPawn*                              UnconvertedPawn;
	EUnconvertReason                              UnconvertReason;
	uint8                                         Pad_9[0x7];
};
static_assert(alignof(FortAthenaAIBotEvaluator_Converted_OnUnconvertedEvent) == 0x000008, "Wrong alignment on FortAthenaAIBotEvaluator_Converted_OnUnconvertedEvent");
static_assert(sizeof(FortAthenaAIBotEvaluator_Converted_OnUnconvertedEvent) == 0x000010, "Wrong size on FortAthenaAIBotEvaluator_Converted_OnUnconvertedEvent");
static_assert(offsetof(FortAthenaAIBotEvaluator_Converted_OnUnconvertedEvent, UnconvertedPawn) == 0x000000, "Member 'FortAthenaAIBotEvaluator_Converted_OnUnconvertedEvent::UnconvertedPawn' has a wrong offset!");
static_assert(offsetof(FortAthenaAIBotEvaluator_Converted_OnUnconvertedEvent, UnconvertReason) == 0x000008, "Member 'FortAthenaAIBotEvaluator_Converted_OnUnconvertedEvent::UnconvertReason' has a wrong offset!");

struct FortAthenaAIBotEvaluator_DBNO_OnAllyPawnDBNOStateChanged final
{
public:
	class AFortPawn*                              InPlayer;
	bool                                          bInIsDBNO;
	uint8                                         Pad_9[0x7];
};
static_assert(alignof(FortAthenaAIBotEvaluator_DBNO_OnAllyPawnDBNOStateChanged) == 0x000008, "Wrong alignment on FortAthenaAIBotEvaluator_DBNO_OnAllyPawnDBNOStateChanged");
static_assert(sizeof(FortAthenaAIBotEvaluator_DBNO_OnAllyPawnDBNOStateChanged) == 0x000010, "Wrong size on FortAthenaAIBotEvaluator_DBNO_OnAllyPawnDBNOStateChanged");
static_assert(offsetof(FortAthenaAIBotEvaluator_DBNO_OnAllyPawnDBNOStateChanged, InPlayer) == 0x000000, "Member 'FortAthenaAIBotEvaluator_DBNO_OnAllyPawnDBNOStateChanged::InPlayer' has a wrong offset!");
static_assert(offsetof(FortAthenaAIBotEvaluator_DBNO_OnAllyPawnDBNOStateChanged, bInIsDBNO) == 0x000008, "Member 'FortAthenaAIBotEvaluator_DBNO_OnAllyPawnDBNOStateChanged::bInIsDBNO' has a wrong offset!");

struct FortAthenaAIBotEvaluator_EvasiveManeuvers_OnMoveCompleted final
{
public:
	struct FAIRequestID                           RequestID;
	EPathFollowingResult                          MovementResult;
	uint8                                         Pad_5[0x3];
};
static_assert(alignof(FortAthenaAIBotEvaluator_EvasiveManeuvers_OnMoveCompleted) == 0x000004, "Wrong alignment on FortAthenaAIBotEvaluator_EvasiveManeuvers_OnMoveCompleted");
static_assert(sizeof(FortAthenaAIBotEvaluator_EvasiveManeuvers_OnMoveCompleted) == 0x000008, "Wrong size on FortAthenaAIBotEvaluator_EvasiveManeuvers_OnMoveCompleted");
static_assert(offsetof(FortAthenaAIBotEvaluator_EvasiveManeuvers_OnMoveCompleted, RequestID) == 0x000000, "Member 'FortAthenaAIBotEvaluator_EvasiveManeuvers_OnMoveCompleted::RequestID' has a wrong offset!");
static_assert(offsetof(FortAthenaAIBotEvaluator_EvasiveManeuvers_OnMoveCompleted, MovementResult) == 0x000004, "Member 'FortAthenaAIBotEvaluator_EvasiveManeuvers_OnMoveCompleted::MovementResult' has a wrong offset!");

struct FortAthenaAIBotEvaluator_SandTunnel_OnBotControllerAlertLevelChanged final
{
public:
	class AFortAthenaAIBotController*             BotController;
	EAlertLevel                                   OldAlertLevel;
	EAlertLevel                                   NewAlertLevel;
	uint8                                         Pad_A[0x6];
};
static_assert(alignof(FortAthenaAIBotEvaluator_SandTunnel_OnBotControllerAlertLevelChanged) == 0x000008, "Wrong alignment on FortAthenaAIBotEvaluator_SandTunnel_OnBotControllerAlertLevelChanged");
static_assert(sizeof(FortAthenaAIBotEvaluator_SandTunnel_OnBotControllerAlertLevelChanged) == 0x000010, "Wrong size on FortAthenaAIBotEvaluator_SandTunnel_OnBotControllerAlertLevelChanged");
static_assert(offsetof(FortAthenaAIBotEvaluator_SandTunnel_OnBotControllerAlertLevelChanged, BotController) == 0x000000, "Member 'FortAthenaAIBotEvaluator_SandTunnel_OnBotControllerAlertLevelChanged::BotController' has a wrong offset!");
static_assert(offsetof(FortAthenaAIBotEvaluator_SandTunnel_OnBotControllerAlertLevelChanged, OldAlertLevel) == 0x000008, "Member 'FortAthenaAIBotEvaluator_SandTunnel_OnBotControllerAlertLevelChanged::OldAlertLevel' has a wrong offset!");
static_assert(offsetof(FortAthenaAIBotEvaluator_SandTunnel_OnBotControllerAlertLevelChanged, NewAlertLevel) == 0x000009, "Member 'FortAthenaAIBotEvaluator_SandTunnel_OnBotControllerAlertLevelChanged::NewAlertLevel' has a wrong offset!");

struct FortAthenaAIBotEvaluator_Zipline_OnZiplineStateChanged final
{
public:
	bool                                          bIsZiplining;
	uint8                                         Pad_1[0x7];
	class AFortPlayerPawn*                        FortPlayerPawn;
};
static_assert(alignof(FortAthenaAIBotEvaluator_Zipline_OnZiplineStateChanged) == 0x000008, "Wrong alignment on FortAthenaAIBotEvaluator_Zipline_OnZiplineStateChanged");
static_assert(sizeof(FortAthenaAIBotEvaluator_Zipline_OnZiplineStateChanged) == 0x000010, "Wrong size on FortAthenaAIBotEvaluator_Zipline_OnZiplineStateChanged");
static_assert(offsetof(FortAthenaAIBotEvaluator_Zipline_OnZiplineStateChanged, bIsZiplining) == 0x000000, "Member 'FortAthenaAIBotEvaluator_Zipline_OnZiplineStateChanged::bIsZiplining' has a wrong offset!");
static_assert(offsetof(FortAthenaAIBotEvaluator_Zipline_OnZiplineStateChanged, FortPlayerPawn) == 0x000008, "Member 'FortAthenaAIBotEvaluator_Zipline_OnZiplineStateChanged::FortPlayerPawn' has a wrong offset!");

struct FortAthenaAIEvaluator_DormantUntilPhase_HandleGamePhaseStepChanged final
{
public:
	TScriptInterface<class IFortSafeZoneInterface> SafeZoneInterface;
	EAthenaGamePhaseStep                          GamePhaseStep;
	uint8                                         Pad_11[0x7];
};
static_assert(alignof(FortAthenaAIEvaluator_DormantUntilPhase_HandleGamePhaseStepChanged) == 0x000008, "Wrong alignment on FortAthenaAIEvaluator_DormantUntilPhase_HandleGamePhaseStepChanged");
static_assert(sizeof(FortAthenaAIEvaluator_DormantUntilPhase_HandleGamePhaseStepChanged) == 0x000018, "Wrong size on FortAthenaAIEvaluator_DormantUntilPhase_HandleGamePhaseStepChanged");
static_assert(offsetof(FortAthenaAIEvaluator_DormantUntilPhase_HandleGamePhaseStepChanged, SafeZoneInterface) == 0x000000, "Member 'FortAthenaAIEvaluator_DormantUntilPhase_HandleGamePhaseStepChanged::SafeZoneInterface' has a wrong offset!");
static_assert(offsetof(FortAthenaAIEvaluator_DormantUntilPhase_HandleGamePhaseStepChanged, GamePhaseStep) == 0x000010, "Member 'FortAthenaAIEvaluator_DormantUntilPhase_HandleGamePhaseStepChanged::GamePhaseStep' has a wrong offset!");

struct FortAthenaBTService_Slide_OnStopSliding final
{
public:
	class AFortPlayerPawn*                        Pawn;
};
static_assert(alignof(FortAthenaBTService_Slide_OnStopSliding) == 0x000008, "Wrong alignment on FortAthenaBTService_Slide_OnStopSliding");
static_assert(sizeof(FortAthenaBTService_Slide_OnStopSliding) == 0x000008, "Wrong size on FortAthenaBTService_Slide_OnStopSliding");
static_assert(offsetof(FortAthenaBTService_Slide_OnStopSliding, Pawn) == 0x000000, "Member 'FortAthenaBTService_Slide_OnStopSliding::Pawn' has a wrong offset!");

struct FortAthenaBTTask_Zipline_OnZiplineStateChanged final
{
public:
	bool                                          bIsZiplining;
	uint8                                         Pad_1[0x7];
	class AFortPlayerPawn*                        FortPlayerPawn;
};
static_assert(alignof(FortAthenaBTTask_Zipline_OnZiplineStateChanged) == 0x000008, "Wrong alignment on FortAthenaBTTask_Zipline_OnZiplineStateChanged");
static_assert(sizeof(FortAthenaBTTask_Zipline_OnZiplineStateChanged) == 0x000010, "Wrong size on FortAthenaBTTask_Zipline_OnZiplineStateChanged");
static_assert(offsetof(FortAthenaBTTask_Zipline_OnZiplineStateChanged, bIsZiplining) == 0x000000, "Member 'FortAthenaBTTask_Zipline_OnZiplineStateChanged::bIsZiplining' has a wrong offset!");
static_assert(offsetof(FortAthenaBTTask_Zipline_OnZiplineStateChanged, FortPlayerPawn) == 0x000008, "Member 'FortAthenaBTTask_Zipline_OnZiplineStateChanged::FortPlayerPawn' has a wrong offset!");

struct FortAthenaPlayInteractionStateTreeTask_OnMontageEnded final
{
public:
	const class UAnimMontage*                     EndedMontage;
	bool                                          bInterrupted;
	uint8                                         Pad_9[0x7];
};
static_assert(alignof(FortAthenaPlayInteractionStateTreeTask_OnMontageEnded) == 0x000008, "Wrong alignment on FortAthenaPlayInteractionStateTreeTask_OnMontageEnded");
static_assert(sizeof(FortAthenaPlayInteractionStateTreeTask_OnMontageEnded) == 0x000010, "Wrong size on FortAthenaPlayInteractionStateTreeTask_OnMontageEnded");
static_assert(offsetof(FortAthenaPlayInteractionStateTreeTask_OnMontageEnded, EndedMontage) == 0x000000, "Member 'FortAthenaPlayInteractionStateTreeTask_OnMontageEnded::EndedMontage' has a wrong offset!");
static_assert(offsetof(FortAthenaPlayInteractionStateTreeTask_OnMontageEnded, bInterrupted) == 0x000008, "Member 'FortAthenaPlayInteractionStateTreeTask_OnMontageEnded::bInterrupted' has a wrong offset!");

struct FortAthenaPlayInteractionStateTreeTask_OnNotifyBeginReceived final
{
public:
	class FName                                   NotifyName;
	uint8                                         Pad_4[0x4];
	struct FBranchingPointNotifyPayload           BranchingPointNotifyPayload;
};
static_assert(alignof(FortAthenaPlayInteractionStateTreeTask_OnNotifyBeginReceived) == 0x000008, "Wrong alignment on FortAthenaPlayInteractionStateTreeTask_OnNotifyBeginReceived");
static_assert(sizeof(FortAthenaPlayInteractionStateTreeTask_OnNotifyBeginReceived) == 0x000028, "Wrong size on FortAthenaPlayInteractionStateTreeTask_OnNotifyBeginReceived");
static_assert(offsetof(FortAthenaPlayInteractionStateTreeTask_OnNotifyBeginReceived, NotifyName) == 0x000000, "Member 'FortAthenaPlayInteractionStateTreeTask_OnNotifyBeginReceived::NotifyName' has a wrong offset!");
static_assert(offsetof(FortAthenaPlayInteractionStateTreeTask_OnNotifyBeginReceived, BranchingPointNotifyPayload) == 0x000008, "Member 'FortAthenaPlayInteractionStateTreeTask_OnNotifyBeginReceived::BranchingPointNotifyPayload' has a wrong offset!");

}
