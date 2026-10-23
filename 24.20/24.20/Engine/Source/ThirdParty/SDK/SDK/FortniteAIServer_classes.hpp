#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Engine_classes.hpp"
#include "GameplayTags_structs.hpp"
#include "FortniteAI_structs.hpp"
#include "FortniteAI_classes.hpp"
#include "WorldConditions_structs.hpp"
#include "WorldConditions_classes.hpp"
#include "GameFeatures_classes.hpp"
#include "AIModule_structs.hpp"
#include "AIModule_classes.hpp"
#include "FortniteAIServer_structs.hpp"
#include "FortniteGame_structs.hpp"
#include "FortniteGame_classes.hpp"
#include "CoreUObject_structs.hpp"
#include "CoreUObject_classes.hpp"
#include "GameplayInteractionsModule_structs.hpp"
#include "GameplayInteractionsModule_classes.hpp"
#include "GameplayAbilities_structs.hpp"
#include "StateTreeModule_classes.hpp"
#include "ContextualAnimation_structs.hpp"

namespace SDK
{

class UFortBTWorldConditionSchema final : public UWorldConditionSchema
{
public:
	uint8                                         Pad_38[0x10];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortBTWorldConditionSchema">();
	}
	static class UFortBTWorldConditionSchema* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortBTWorldConditionSchema>();
	}
};
static_assert(alignof(UFortBTWorldConditionSchema) == 0x000008, "Wrong alignment on UFortBTWorldConditionSchema");
static_assert(sizeof(UFortBTWorldConditionSchema) == 0x000048, "Wrong size on UFortBTWorldConditionSchema");

class UFortAthenaBTService_WorldCondition final : public UBTService
{
public:
	struct FWorldConditionQueryDefinition         Conditions;
	class FName                                   ConditionsResultName;
	uint8                                         Pad_8C[0x4];
	struct FWorldConditionQueryState              QueryState;
	class AAIController*                          CachedOwnerController;
	class AActor*                                 CachedOwnerPawn;
	uint8                                         Pad_D0[0x8];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortAthenaBTService_WorldCondition">();
	}
	static class UFortAthenaBTService_WorldCondition* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortAthenaBTService_WorldCondition>();
	}
};
static_assert(alignof(UFortAthenaBTService_WorldCondition) == 0x000008, "Wrong alignment on UFortAthenaBTService_WorldCondition");
static_assert(sizeof(UFortAthenaBTService_WorldCondition) == 0x0000D8, "Wrong size on UFortAthenaBTService_WorldCondition");
static_assert(offsetof(UFortAthenaBTService_WorldCondition, Conditions) == 0x000070, "Member 'UFortAthenaBTService_WorldCondition::Conditions' has a wrong offset!");
static_assert(offsetof(UFortAthenaBTService_WorldCondition, ConditionsResultName) == 0x000088, "Member 'UFortAthenaBTService_WorldCondition::ConditionsResultName' has a wrong offset!");
static_assert(offsetof(UFortAthenaBTService_WorldCondition, QueryState) == 0x000090, "Member 'UFortAthenaBTService_WorldCondition::QueryState' has a wrong offset!");
static_assert(offsetof(UFortAthenaBTService_WorldCondition, CachedOwnerController) == 0x0000C0, "Member 'UFortAthenaBTService_WorldCondition::CachedOwnerController' has a wrong offset!");
static_assert(offsetof(UFortAthenaBTService_WorldCondition, CachedOwnerPawn) == 0x0000C8, "Member 'UFortAthenaBTService_WorldCondition::CachedOwnerPawn' has a wrong offset!");

class UFortAthenaAIEvaluator_BlueprintBase final : public UFortAthenaAIEvaluator
{
public:
	bool                                          bBlockWeaponActions;
	uint8                                         Pad_89[0x7];

public:
	void OnEnter(class UBehaviorTreeComponent* OwnerComp);
	void OnExit(class UBehaviorTreeComponent* OwnerComp);

	bool EvaluateOngoingConditions(class UBehaviorTreeComponent* OwnerComp) const;
	bool EvaluateStartingConditions(class UBehaviorTreeComponent* OwnerComp) const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortAthenaAIEvaluator_BlueprintBase">();
	}
	static class UFortAthenaAIEvaluator_BlueprintBase* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortAthenaAIEvaluator_BlueprintBase>();
	}
};
static_assert(alignof(UFortAthenaAIEvaluator_BlueprintBase) == 0x000008, "Wrong alignment on UFortAthenaAIEvaluator_BlueprintBase");
static_assert(sizeof(UFortAthenaAIEvaluator_BlueprintBase) == 0x000090, "Wrong size on UFortAthenaAIEvaluator_BlueprintBase");
static_assert(offsetof(UFortAthenaAIEvaluator_BlueprintBase, bBlockWeaponActions) == 0x000088, "Member 'UFortAthenaAIEvaluator_BlueprintBase::bBlockWeaponActions' has a wrong offset!");

class UFortAthenaBTTask_VehicleSwitchSeat final : public UBTTaskNode
{
public:
	ESwitchSeatType                               SwitchSeatType;
	uint8                                         Pad_71[0x7];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortAthenaBTTask_VehicleSwitchSeat">();
	}
	static class UFortAthenaBTTask_VehicleSwitchSeat* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortAthenaBTTask_VehicleSwitchSeat>();
	}
};
static_assert(alignof(UFortAthenaBTTask_VehicleSwitchSeat) == 0x000008, "Wrong alignment on UFortAthenaBTTask_VehicleSwitchSeat");
static_assert(sizeof(UFortAthenaBTTask_VehicleSwitchSeat) == 0x000078, "Wrong size on UFortAthenaBTTask_VehicleSwitchSeat");
static_assert(offsetof(UFortAthenaBTTask_VehicleSwitchSeat, SwitchSeatType) == 0x000070, "Member 'UFortAthenaBTTask_VehicleSwitchSeat::SwitchSeatType' has a wrong offset!");

class UFortStateTreeConditionSchema final : public UWorldConditionSchema
{
public:
	uint8                                         Pad_38[0x18];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortStateTreeConditionSchema">();
	}
	static class UFortStateTreeConditionSchema* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortStateTreeConditionSchema>();
	}
};
static_assert(alignof(UFortStateTreeConditionSchema) == 0x000008, "Wrong alignment on UFortStateTreeConditionSchema");
static_assert(sizeof(UFortStateTreeConditionSchema) == 0x000050, "Wrong size on UFortStateTreeConditionSchema");

class UFortBTDecorator_AIBotVehicleSeatStatus final : public UBTDecorator
{
public:
	ESeatStatusType                               SeatType;
	uint8                                         Pad_69[0x7];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortBTDecorator_AIBotVehicleSeatStatus">();
	}
	static class UFortBTDecorator_AIBotVehicleSeatStatus* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortBTDecorator_AIBotVehicleSeatStatus>();
	}
};
static_assert(alignof(UFortBTDecorator_AIBotVehicleSeatStatus) == 0x000008, "Wrong alignment on UFortBTDecorator_AIBotVehicleSeatStatus");
static_assert(sizeof(UFortBTDecorator_AIBotVehicleSeatStatus) == 0x000070, "Wrong size on UFortBTDecorator_AIBotVehicleSeatStatus");
static_assert(offsetof(UFortBTDecorator_AIBotVehicleSeatStatus, SeatType) == 0x000068, "Member 'UFortBTDecorator_AIBotVehicleSeatStatus::SeatType' has a wrong offset!");

class UFortBTService_AIEvaluatorsInjector final : public UBTService
{
public:
	TArray<class UObject*>                        ReferenceHolder;
	TArray<struct FFortBTService_InjectionTagKey> InjectionTagsKeys;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortBTService_AIEvaluatorsInjector">();
	}
	static class UFortBTService_AIEvaluatorsInjector* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortBTService_AIEvaluatorsInjector>();
	}
};
static_assert(alignof(UFortBTService_AIEvaluatorsInjector) == 0x000008, "Wrong alignment on UFortBTService_AIEvaluatorsInjector");
static_assert(sizeof(UFortBTService_AIEvaluatorsInjector) == 0x000090, "Wrong size on UFortBTService_AIEvaluatorsInjector");
static_assert(offsetof(UFortBTService_AIEvaluatorsInjector, ReferenceHolder) == 0x000070, "Member 'UFortBTService_AIEvaluatorsInjector::ReferenceHolder' has a wrong offset!");
static_assert(offsetof(UFortBTService_AIEvaluatorsInjector, InjectionTagsKeys) == 0x000080, "Member 'UFortBTService_AIEvaluatorsInjector::InjectionTagsKeys' has a wrong offset!");

class UFortAthenaNpcEvaluator_Encampment final : public UFortAthenaAIBotEvaluator_Movement
{
public:
	struct FScalableFloat                         EncampmentEnable;
	struct FScalableFloat                         EncampmentTentativeDelayMin;
	struct FScalableFloat                         EncampmentTentativeDelayMax;
	struct FScalableFloat                         EncampmentDurationMin;
	struct FScalableFloat                         EncampmentDurationMax;
	struct FScalableFloat                         BuilderPercentage;
	struct FScalableFloat                         BuilderMinDistance;
	struct FScalableFloat                         BuilderMaxDistance;
	struct FScalableFloat                         GuardMinDistance;
	struct FScalableFloat                         GuardMaxDistance;
	struct FScalableFloat                         AllowInSwimming;
	struct FScalableFloat                         AllowInFalling;
	struct FScalableFloat                         MinSquadMembersCountToBuild;
	class FName                                   EncampmentStatusKeyName;
	uint8                                         Pad_39C[0x4];
	class FName                                   EncampmentMovementStateKeyName;
	uint8                                         Pad_3A4[0x4];
	class FName                                   EncampmentCenterLocationKeyName;
	uint8                                         Pad_3AC[0x4];
	class FName                                   EncampmentDestinationKeyName;
	uint8                                         Pad_3B4[0x4];
	class FName                                   EncampmentAroundCampFireLocationKeyName;
	uint8                                         Pad_3BC[0x4];
	class FName                                   EncampmentRoleKeyName;
	uint8                                         Pad_3C4[0x4];
	class FName                                   DefensiveBuildName;
	uint8                                         Pad_3CC[0x6C];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortAthenaNpcEvaluator_Encampment">();
	}
	static class UFortAthenaNpcEvaluator_Encampment* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortAthenaNpcEvaluator_Encampment>();
	}
};
static_assert(alignof(UFortAthenaNpcEvaluator_Encampment) == 0x000008, "Wrong alignment on UFortAthenaNpcEvaluator_Encampment");
static_assert(sizeof(UFortAthenaNpcEvaluator_Encampment) == 0x000438, "Wrong size on UFortAthenaNpcEvaluator_Encampment");
static_assert(offsetof(UFortAthenaNpcEvaluator_Encampment, EncampmentEnable) == 0x000190, "Member 'UFortAthenaNpcEvaluator_Encampment::EncampmentEnable' has a wrong offset!");
static_assert(offsetof(UFortAthenaNpcEvaluator_Encampment, EncampmentTentativeDelayMin) == 0x0001B8, "Member 'UFortAthenaNpcEvaluator_Encampment::EncampmentTentativeDelayMin' has a wrong offset!");
static_assert(offsetof(UFortAthenaNpcEvaluator_Encampment, EncampmentTentativeDelayMax) == 0x0001E0, "Member 'UFortAthenaNpcEvaluator_Encampment::EncampmentTentativeDelayMax' has a wrong offset!");
static_assert(offsetof(UFortAthenaNpcEvaluator_Encampment, EncampmentDurationMin) == 0x000208, "Member 'UFortAthenaNpcEvaluator_Encampment::EncampmentDurationMin' has a wrong offset!");
static_assert(offsetof(UFortAthenaNpcEvaluator_Encampment, EncampmentDurationMax) == 0x000230, "Member 'UFortAthenaNpcEvaluator_Encampment::EncampmentDurationMax' has a wrong offset!");
static_assert(offsetof(UFortAthenaNpcEvaluator_Encampment, BuilderPercentage) == 0x000258, "Member 'UFortAthenaNpcEvaluator_Encampment::BuilderPercentage' has a wrong offset!");
static_assert(offsetof(UFortAthenaNpcEvaluator_Encampment, BuilderMinDistance) == 0x000280, "Member 'UFortAthenaNpcEvaluator_Encampment::BuilderMinDistance' has a wrong offset!");
static_assert(offsetof(UFortAthenaNpcEvaluator_Encampment, BuilderMaxDistance) == 0x0002A8, "Member 'UFortAthenaNpcEvaluator_Encampment::BuilderMaxDistance' has a wrong offset!");
static_assert(offsetof(UFortAthenaNpcEvaluator_Encampment, GuardMinDistance) == 0x0002D0, "Member 'UFortAthenaNpcEvaluator_Encampment::GuardMinDistance' has a wrong offset!");
static_assert(offsetof(UFortAthenaNpcEvaluator_Encampment, GuardMaxDistance) == 0x0002F8, "Member 'UFortAthenaNpcEvaluator_Encampment::GuardMaxDistance' has a wrong offset!");
static_assert(offsetof(UFortAthenaNpcEvaluator_Encampment, AllowInSwimming) == 0x000320, "Member 'UFortAthenaNpcEvaluator_Encampment::AllowInSwimming' has a wrong offset!");
static_assert(offsetof(UFortAthenaNpcEvaluator_Encampment, AllowInFalling) == 0x000348, "Member 'UFortAthenaNpcEvaluator_Encampment::AllowInFalling' has a wrong offset!");
static_assert(offsetof(UFortAthenaNpcEvaluator_Encampment, MinSquadMembersCountToBuild) == 0x000370, "Member 'UFortAthenaNpcEvaluator_Encampment::MinSquadMembersCountToBuild' has a wrong offset!");
static_assert(offsetof(UFortAthenaNpcEvaluator_Encampment, EncampmentStatusKeyName) == 0x000398, "Member 'UFortAthenaNpcEvaluator_Encampment::EncampmentStatusKeyName' has a wrong offset!");
static_assert(offsetof(UFortAthenaNpcEvaluator_Encampment, EncampmentMovementStateKeyName) == 0x0003A0, "Member 'UFortAthenaNpcEvaluator_Encampment::EncampmentMovementStateKeyName' has a wrong offset!");
static_assert(offsetof(UFortAthenaNpcEvaluator_Encampment, EncampmentCenterLocationKeyName) == 0x0003A8, "Member 'UFortAthenaNpcEvaluator_Encampment::EncampmentCenterLocationKeyName' has a wrong offset!");
static_assert(offsetof(UFortAthenaNpcEvaluator_Encampment, EncampmentDestinationKeyName) == 0x0003B0, "Member 'UFortAthenaNpcEvaluator_Encampment::EncampmentDestinationKeyName' has a wrong offset!");
static_assert(offsetof(UFortAthenaNpcEvaluator_Encampment, EncampmentAroundCampFireLocationKeyName) == 0x0003B8, "Member 'UFortAthenaNpcEvaluator_Encampment::EncampmentAroundCampFireLocationKeyName' has a wrong offset!");
static_assert(offsetof(UFortAthenaNpcEvaluator_Encampment, EncampmentRoleKeyName) == 0x0003C0, "Member 'UFortAthenaNpcEvaluator_Encampment::EncampmentRoleKeyName' has a wrong offset!");
static_assert(offsetof(UFortAthenaNpcEvaluator_Encampment, DefensiveBuildName) == 0x0003C8, "Member 'UFortAthenaNpcEvaluator_Encampment::DefensiveBuildName' has a wrong offset!");

class UFortBTService_ClearGoalAndAssignment final : public UBTService
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortBTService_ClearGoalAndAssignment">();
	}
	static class UFortBTService_ClearGoalAndAssignment* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortBTService_ClearGoalAndAssignment>();
	}
};
static_assert(alignof(UFortBTService_ClearGoalAndAssignment) == 0x000008, "Wrong alignment on UFortBTService_ClearGoalAndAssignment");
static_assert(sizeof(UFortBTService_ClearGoalAndAssignment) == 0x000070, "Wrong size on UFortBTService_ClearGoalAndAssignment");

class UFortAthenaAIBotEvaluator_DanceOnKill final : public UFortAthenaAIBotEvaluator
{
public:
	class FName                                   LastKillPositionKeyName;
	class FName                                   LastKillTimeKeyName;
	class FName                                   LastKillWasABotKeyName;
	class FName                                   PlayEmoteExecutionStatusKeyName;
	uint8                                         Pad_A0[0x10];
	class UFortAthenaAIBotEmoteDigestedSkillSet*  CacheEmoteDigestedSkillSet;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortAthenaAIBotEvaluator_DanceOnKill">();
	}
	static class UFortAthenaAIBotEvaluator_DanceOnKill* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortAthenaAIBotEvaluator_DanceOnKill>();
	}
};
static_assert(alignof(UFortAthenaAIBotEvaluator_DanceOnKill) == 0x000008, "Wrong alignment on UFortAthenaAIBotEvaluator_DanceOnKill");
static_assert(sizeof(UFortAthenaAIBotEvaluator_DanceOnKill) == 0x0000B8, "Wrong size on UFortAthenaAIBotEvaluator_DanceOnKill");
static_assert(offsetof(UFortAthenaAIBotEvaluator_DanceOnKill, LastKillPositionKeyName) == 0x000090, "Member 'UFortAthenaAIBotEvaluator_DanceOnKill::LastKillPositionKeyName' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotEvaluator_DanceOnKill, LastKillTimeKeyName) == 0x000094, "Member 'UFortAthenaAIBotEvaluator_DanceOnKill::LastKillTimeKeyName' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotEvaluator_DanceOnKill, LastKillWasABotKeyName) == 0x000098, "Member 'UFortAthenaAIBotEvaluator_DanceOnKill::LastKillWasABotKeyName' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotEvaluator_DanceOnKill, PlayEmoteExecutionStatusKeyName) == 0x00009C, "Member 'UFortAthenaAIBotEvaluator_DanceOnKill::PlayEmoteExecutionStatusKeyName' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotEvaluator_DanceOnKill, CacheEmoteDigestedSkillSet) == 0x0000B0, "Member 'UFortAthenaAIBotEvaluator_DanceOnKill::CacheEmoteDigestedSkillSet' has a wrong offset!");

class UFortGameFeatureAction_InjectAIBehavior final : public UFortGameInstanceGameFeatureAction
{
public:
	TArray<struct FFortAISpawnerTagQueryInjectedBehavior> InjectedBehaviors;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortGameFeatureAction_InjectAIBehavior">();
	}
	static class UFortGameFeatureAction_InjectAIBehavior* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortGameFeatureAction_InjectAIBehavior>();
	}
};
static_assert(alignof(UFortGameFeatureAction_InjectAIBehavior) == 0x000008, "Wrong alignment on UFortGameFeatureAction_InjectAIBehavior");
static_assert(sizeof(UFortGameFeatureAction_InjectAIBehavior) == 0x000048, "Wrong size on UFortGameFeatureAction_InjectAIBehavior");
static_assert(offsetof(UFortGameFeatureAction_InjectAIBehavior, InjectedBehaviors) == 0x000038, "Member 'UFortGameFeatureAction_InjectAIBehavior::InjectedBehaviors' has a wrong offset!");

class UFortInjectedBehaviorsComponent final : public UFortGameStateComponent
{
public:
	uint8                                         Pad_A0[0x50];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortInjectedBehaviorsComponent">();
	}
	static class UFortInjectedBehaviorsComponent* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortInjectedBehaviorsComponent>();
	}
};
static_assert(alignof(UFortInjectedBehaviorsComponent) == 0x000008, "Wrong alignment on UFortInjectedBehaviorsComponent");
static_assert(sizeof(UFortInjectedBehaviorsComponent) == 0x0000F0, "Wrong size on UFortInjectedBehaviorsComponent");

class UFortQueryContext_PlayspaceVolume final : public UEnvQueryContext
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortQueryContext_PlayspaceVolume">();
	}
	static class UFortQueryContext_PlayspaceVolume* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortQueryContext_PlayspaceVolume>();
	}
};
static_assert(alignof(UFortQueryContext_PlayspaceVolume) == 0x000008, "Wrong alignment on UFortQueryContext_PlayspaceVolume");
static_assert(sizeof(UFortQueryContext_PlayspaceVolume) == 0x000028, "Wrong size on UFortQueryContext_PlayspaceVolume");

class UFortQueryGenerator_GridInBox final : public UEnvQueryGenerator_ProjectedPoints
{
public:
	struct FAIDataProviderFloatValue              BoxWidth;
	struct FAIDataProviderFloatValue              BoxLength;
	struct FAIDataProviderFloatValue              SpaceBetween;
	TSubclassOf<class UEnvQueryContext>           GenerateAround;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortQueryGenerator_GridInBox">();
	}
	static class UFortQueryGenerator_GridInBox* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortQueryGenerator_GridInBox>();
	}
};
static_assert(alignof(UFortQueryGenerator_GridInBox) == 0x000008, "Wrong alignment on UFortQueryGenerator_GridInBox");
static_assert(sizeof(UFortQueryGenerator_GridInBox) == 0x000138, "Wrong size on UFortQueryGenerator_GridInBox");
static_assert(offsetof(UFortQueryGenerator_GridInBox, BoxWidth) == 0x000088, "Member 'UFortQueryGenerator_GridInBox::BoxWidth' has a wrong offset!");
static_assert(offsetof(UFortQueryGenerator_GridInBox, BoxLength) == 0x0000C0, "Member 'UFortQueryGenerator_GridInBox::BoxLength' has a wrong offset!");
static_assert(offsetof(UFortQueryGenerator_GridInBox, SpaceBetween) == 0x0000F8, "Member 'UFortQueryGenerator_GridInBox::SpaceBetween' has a wrong offset!");
static_assert(offsetof(UFortQueryGenerator_GridInBox, GenerateAround) == 0x000130, "Member 'UFortQueryGenerator_GridInBox::GenerateAround' has a wrong offset!");

class UFortQueryGenerator_GridInVolume final : public UEnvQueryGenerator_ProjectedPoints
{
public:
	struct FAIDataProviderFloatValue              SpaceBetween;
	TSubclassOf<class UEnvQueryContext>           GenerateInVolume;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortQueryGenerator_GridInVolume">();
	}
	static class UFortQueryGenerator_GridInVolume* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortQueryGenerator_GridInVolume>();
	}
};
static_assert(alignof(UFortQueryGenerator_GridInVolume) == 0x000008, "Wrong alignment on UFortQueryGenerator_GridInVolume");
static_assert(sizeof(UFortQueryGenerator_GridInVolume) == 0x0000C8, "Wrong size on UFortQueryGenerator_GridInVolume");
static_assert(offsetof(UFortQueryGenerator_GridInVolume, SpaceBetween) == 0x000088, "Member 'UFortQueryGenerator_GridInVolume::SpaceBetween' has a wrong offset!");
static_assert(offsetof(UFortQueryGenerator_GridInVolume, GenerateInVolume) == 0x0000C0, "Member 'UFortQueryGenerator_GridInVolume::GenerateInVolume' has a wrong offset!");

class UFortWorldConditionTimeOfDayState final : public UObject
{
public:
	uint8                                         Pad_28[0x38];

public:
	void HandleTimeOfDayPhaseChange(EFortDayPhase CurrentDayPhase, EFortDayPhase PreviousDayPhase, bool bAtCreation);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortWorldConditionTimeOfDayState">();
	}
	static class UFortWorldConditionTimeOfDayState* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortWorldConditionTimeOfDayState>();
	}
};
static_assert(alignof(UFortWorldConditionTimeOfDayState) == 0x000008, "Wrong alignment on UFortWorldConditionTimeOfDayState");
static_assert(sizeof(UFortWorldConditionTimeOfDayState) == 0x000060, "Wrong size on UFortWorldConditionTimeOfDayState");

class UFortQueryTest_NavGraphDistance final : public UEnvQueryTest
{
public:
	TSubclassOf<class UEnvQueryContext>           DistanceTo;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortQueryTest_NavGraphDistance">();
	}
	static class UFortQueryTest_NavGraphDistance* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortQueryTest_NavGraphDistance>();
	}
};
static_assert(alignof(UFortQueryTest_NavGraphDistance) == 0x000008, "Wrong alignment on UFortQueryTest_NavGraphDistance");
static_assert(sizeof(UFortQueryTest_NavGraphDistance) == 0x000200, "Wrong size on UFortQueryTest_NavGraphDistance");
static_assert(offsetof(UFortQueryTest_NavGraphDistance, DistanceTo) == 0x0001F8, "Member 'UFortQueryTest_NavGraphDistance::DistanceTo' has a wrong offset!");

class UFortGameFeatureAction_InjectAIEvaluators final : public UGameFeatureAction
{
public:
	TArray<struct FGameFeatureFortAIEvaluatorEntry> AIEvaluatorList;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortGameFeatureAction_InjectAIEvaluators">();
	}
	static class UFortGameFeatureAction_InjectAIEvaluators* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortGameFeatureAction_InjectAIEvaluators>();
	}
};
static_assert(alignof(UFortGameFeatureAction_InjectAIEvaluators) == 0x000008, "Wrong alignment on UFortGameFeatureAction_InjectAIEvaluators");
static_assert(sizeof(UFortGameFeatureAction_InjectAIEvaluators) == 0x000038, "Wrong size on UFortGameFeatureAction_InjectAIEvaluators");
static_assert(offsetof(UFortGameFeatureAction_InjectAIEvaluators, AIEvaluatorList) == 0x000028, "Member 'UFortGameFeatureAction_InjectAIEvaluators::AIEvaluatorList' has a wrong offset!");

class UFortEnvQueryGenerator_ProjectedPoints : public UEnvQueryGenerator_ProjectedPoints
{
public:
	class FName                                   OverridenAgentNameForNavmesh;
	uint8                                         Pad_8C[0x4];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortEnvQueryGenerator_ProjectedPoints">();
	}
	static class UFortEnvQueryGenerator_ProjectedPoints* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortEnvQueryGenerator_ProjectedPoints>();
	}
};
static_assert(alignof(UFortEnvQueryGenerator_ProjectedPoints) == 0x000008, "Wrong alignment on UFortEnvQueryGenerator_ProjectedPoints");
static_assert(sizeof(UFortEnvQueryGenerator_ProjectedPoints) == 0x000090, "Wrong size on UFortEnvQueryGenerator_ProjectedPoints");
static_assert(offsetof(UFortEnvQueryGenerator_ProjectedPoints, OverridenAgentNameForNavmesh) == 0x000088, "Member 'UFortEnvQueryGenerator_ProjectedPoints::OverridenAgentNameForNavmesh' has a wrong offset!");

class UFortEnvQueryGenerator_SimpleGrid final : public UFortEnvQueryGenerator_ProjectedPoints
{
public:
	struct FAIDataProviderFloatValue              GridSize;
	struct FAIDataProviderFloatValue              SpaceBetween;
	TSubclassOf<class UEnvQueryContext>           GenerateAround;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortEnvQueryGenerator_SimpleGrid">();
	}
	static class UFortEnvQueryGenerator_SimpleGrid* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortEnvQueryGenerator_SimpleGrid>();
	}
};
static_assert(alignof(UFortEnvQueryGenerator_SimpleGrid) == 0x000008, "Wrong alignment on UFortEnvQueryGenerator_SimpleGrid");
static_assert(sizeof(UFortEnvQueryGenerator_SimpleGrid) == 0x000108, "Wrong size on UFortEnvQueryGenerator_SimpleGrid");
static_assert(offsetof(UFortEnvQueryGenerator_SimpleGrid, GridSize) == 0x000090, "Member 'UFortEnvQueryGenerator_SimpleGrid::GridSize' has a wrong offset!");
static_assert(offsetof(UFortEnvQueryGenerator_SimpleGrid, SpaceBetween) == 0x0000C8, "Member 'UFortEnvQueryGenerator_SimpleGrid::SpaceBetween' has a wrong offset!");
static_assert(offsetof(UFortEnvQueryGenerator_SimpleGrid, GenerateAround) == 0x000100, "Member 'UFortEnvQueryGenerator_SimpleGrid::GenerateAround' has a wrong offset!");

class UFortBTService_ContextOverride : public UBTService
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortBTService_ContextOverride">();
	}
	static class UFortBTService_ContextOverride* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortBTService_ContextOverride>();
	}
};
static_assert(alignof(UFortBTService_ContextOverride) == 0x000008, "Wrong alignment on UFortBTService_ContextOverride");
static_assert(sizeof(UFortBTService_ContextOverride) == 0x000070, "Wrong size on UFortBTService_ContextOverride");

class UFortBTContext_MoveUrgency final : public UFortBTService_ContextOverride
{
public:
	EFortMovementUrgency                          MoveUrgency;
	uint8                                         Pad_71[0x7];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortBTContext_MoveUrgency">();
	}
	static class UFortBTContext_MoveUrgency* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortBTContext_MoveUrgency>();
	}
};
static_assert(alignof(UFortBTContext_MoveUrgency) == 0x000008, "Wrong alignment on UFortBTContext_MoveUrgency");
static_assert(sizeof(UFortBTContext_MoveUrgency) == 0x000078, "Wrong size on UFortBTContext_MoveUrgency");
static_assert(offsetof(UFortBTContext_MoveUrgency, MoveUrgency) == 0x000070, "Member 'UFortBTContext_MoveUrgency::MoveUrgency' has a wrong offset!");

class UFortBTContext_SkipNotPerceivedGoals final : public UFortBTService_ContextOverride
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortBTContext_SkipNotPerceivedGoals">();
	}
	static class UFortBTContext_SkipNotPerceivedGoals* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortBTContext_SkipNotPerceivedGoals>();
	}
};
static_assert(alignof(UFortBTContext_SkipNotPerceivedGoals) == 0x000008, "Wrong alignment on UFortBTContext_SkipNotPerceivedGoals");
static_assert(sizeof(UFortBTContext_SkipNotPerceivedGoals) == 0x000070, "Wrong size on UFortBTContext_SkipNotPerceivedGoals");

class UFortBTContext_SuppressGoalUpdate final : public UFortBTService_ContextOverride
{
public:
	bool                                          bUnregisterFromGoalManager;
	uint8                                         Pad_71[0x7];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortBTContext_SuppressGoalUpdate">();
	}
	static class UFortBTContext_SuppressGoalUpdate* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortBTContext_SuppressGoalUpdate>();
	}
};
static_assert(alignof(UFortBTContext_SuppressGoalUpdate) == 0x000008, "Wrong alignment on UFortBTContext_SuppressGoalUpdate");
static_assert(sizeof(UFortBTContext_SuppressGoalUpdate) == 0x000078, "Wrong size on UFortBTContext_SuppressGoalUpdate");
static_assert(offsetof(UFortBTContext_SuppressGoalUpdate, bUnregisterFromGoalManager) == 0x000070, "Member 'UFortBTContext_SuppressGoalUpdate::bUnregisterFromGoalManager' has a wrong offset!");

class UFortBTDecorator_CanBeConsideredAirborne final : public UBTDecorator_BlackboardBase
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortBTDecorator_CanBeConsideredAirborne">();
	}
	static class UFortBTDecorator_CanBeConsideredAirborne* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortBTDecorator_CanBeConsideredAirborne>();
	}
};
static_assert(alignof(UFortBTDecorator_CanBeConsideredAirborne) == 0x000008, "Wrong alignment on UFortBTDecorator_CanBeConsideredAirborne");
static_assert(sizeof(UFortBTDecorator_CanBeConsideredAirborne) == 0x000090, "Wrong size on UFortBTDecorator_CanBeConsideredAirborne");

class UFortBTDecorator_DistanceBetween final : public UBTDecorator
{
public:
	EArithmeticKeyOperation                       Operator;
	uint8                                         Pad_69[0x7];
	struct FBlackboardKeySelector                 BlackboardKeyA;
	struct FBlackboardKeySelector                 BlackboardKeyB;
	float                                         SpecifiedDistance;
	uint8                                         bUseSelf : 1;
	uint8                                         bCalculateAs2D : 1;
	uint8                                         Pad_C5[0x3];
	float                                         DistanceCalculationUpdateRate;
	uint8                                         Pad_CC[0x4];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortBTDecorator_DistanceBetween">();
	}
	static class UFortBTDecorator_DistanceBetween* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortBTDecorator_DistanceBetween>();
	}
};
static_assert(alignof(UFortBTDecorator_DistanceBetween) == 0x000008, "Wrong alignment on UFortBTDecorator_DistanceBetween");
static_assert(sizeof(UFortBTDecorator_DistanceBetween) == 0x0000D0, "Wrong size on UFortBTDecorator_DistanceBetween");
static_assert(offsetof(UFortBTDecorator_DistanceBetween, Operator) == 0x000068, "Member 'UFortBTDecorator_DistanceBetween::Operator' has a wrong offset!");
static_assert(offsetof(UFortBTDecorator_DistanceBetween, BlackboardKeyA) == 0x000070, "Member 'UFortBTDecorator_DistanceBetween::BlackboardKeyA' has a wrong offset!");
static_assert(offsetof(UFortBTDecorator_DistanceBetween, BlackboardKeyB) == 0x000098, "Member 'UFortBTDecorator_DistanceBetween::BlackboardKeyB' has a wrong offset!");
static_assert(offsetof(UFortBTDecorator_DistanceBetween, SpecifiedDistance) == 0x0000C0, "Member 'UFortBTDecorator_DistanceBetween::SpecifiedDistance' has a wrong offset!");
static_assert(offsetof(UFortBTDecorator_DistanceBetween, DistanceCalculationUpdateRate) == 0x0000C8, "Member 'UFortBTDecorator_DistanceBetween::DistanceCalculationUpdateRate' has a wrong offset!");

class UFortBTDecorator_GameplayAbility_CanActivate final : public UFortBTDecorator_QueryGameplayAbility
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortBTDecorator_GameplayAbility_CanActivate">();
	}
	static class UFortBTDecorator_GameplayAbility_CanActivate* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortBTDecorator_GameplayAbility_CanActivate>();
	}
};
static_assert(alignof(UFortBTDecorator_GameplayAbility_CanActivate) == 0x000008, "Wrong alignment on UFortBTDecorator_GameplayAbility_CanActivate");
static_assert(sizeof(UFortBTDecorator_GameplayAbility_CanActivate) == 0x000100, "Wrong size on UFortBTDecorator_GameplayAbility_CanActivate");

class UFortAthenaAIBotEvaluator_Attack : public UFortAthenaAIBotEvaluator_Movement
{
public:
	uint8                                         Pad_190[0x4];
	class FName                                   WeaponKeyName;
	class FName                                   MoveToDestinationKeyName;
	class FName                                   TargetActorName;
	uint8                                         Pad_1A0[0x8];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortAthenaAIBotEvaluator_Attack">();
	}
	static class UFortAthenaAIBotEvaluator_Attack* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortAthenaAIBotEvaluator_Attack>();
	}
};
static_assert(alignof(UFortAthenaAIBotEvaluator_Attack) == 0x000008, "Wrong alignment on UFortAthenaAIBotEvaluator_Attack");
static_assert(sizeof(UFortAthenaAIBotEvaluator_Attack) == 0x0001A8, "Wrong size on UFortAthenaAIBotEvaluator_Attack");
static_assert(offsetof(UFortAthenaAIBotEvaluator_Attack, WeaponKeyName) == 0x000194, "Member 'UFortAthenaAIBotEvaluator_Attack::WeaponKeyName' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotEvaluator_Attack, MoveToDestinationKeyName) == 0x000198, "Member 'UFortAthenaAIBotEvaluator_Attack::MoveToDestinationKeyName' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotEvaluator_Attack, TargetActorName) == 0x00019C, "Member 'UFortAthenaAIBotEvaluator_Attack::TargetActorName' has a wrong offset!");

class UFortAthenaAIBotEvaluator_MeleeAttack final : public UFortAthenaAIBotEvaluator_Attack
{
public:
	uint8                                         Pad_1A8[0x4];
	class FName                                   WeaponTriggerMeleeName;
	class FName                                   ThrowableAttacksAllowedName;
	class FName                                   TraversalBlockMeleeAttackName;
	uint8                                         Pad_1B8[0x8];
	class UFortAthenaAIBotAttackingDigestedSkillSet* AttackingSkillSet;
	uint8                                         Pad_1C8[0x8];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortAthenaAIBotEvaluator_MeleeAttack">();
	}
	static class UFortAthenaAIBotEvaluator_MeleeAttack* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortAthenaAIBotEvaluator_MeleeAttack>();
	}
};
static_assert(alignof(UFortAthenaAIBotEvaluator_MeleeAttack) == 0x000008, "Wrong alignment on UFortAthenaAIBotEvaluator_MeleeAttack");
static_assert(sizeof(UFortAthenaAIBotEvaluator_MeleeAttack) == 0x0001D0, "Wrong size on UFortAthenaAIBotEvaluator_MeleeAttack");
static_assert(offsetof(UFortAthenaAIBotEvaluator_MeleeAttack, WeaponTriggerMeleeName) == 0x0001AC, "Member 'UFortAthenaAIBotEvaluator_MeleeAttack::WeaponTriggerMeleeName' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotEvaluator_MeleeAttack, ThrowableAttacksAllowedName) == 0x0001B0, "Member 'UFortAthenaAIBotEvaluator_MeleeAttack::ThrowableAttacksAllowedName' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotEvaluator_MeleeAttack, TraversalBlockMeleeAttackName) == 0x0001B4, "Member 'UFortAthenaAIBotEvaluator_MeleeAttack::TraversalBlockMeleeAttackName' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotEvaluator_MeleeAttack, AttackingSkillSet) == 0x0001C0, "Member 'UFortAthenaAIBotEvaluator_MeleeAttack::AttackingSkillSet' has a wrong offset!");

class UFortBTDecorator_GameplayAbility_CanHitTarget final : public UFortBTDecorator_QueryGameplayAbility
{
public:
	uint8                                         UseIdealYawRotationToTarget : 1;
	uint8                                         Pad_101[0x7];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortBTDecorator_GameplayAbility_CanHitTarget">();
	}
	static class UFortBTDecorator_GameplayAbility_CanHitTarget* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortBTDecorator_GameplayAbility_CanHitTarget>();
	}
};
static_assert(alignof(UFortBTDecorator_GameplayAbility_CanHitTarget) == 0x000008, "Wrong alignment on UFortBTDecorator_GameplayAbility_CanHitTarget");
static_assert(sizeof(UFortBTDecorator_GameplayAbility_CanHitTarget) == 0x000108, "Wrong size on UFortBTDecorator_GameplayAbility_CanHitTarget");

class UFortBTDecorator_GameplayAbility_CompareDistance final : public UFortBTDecorator_QueryGameplayAbility
{
public:
	TArray<struct FDistanceToTargetComparison>    DistanceComparisons;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortBTDecorator_GameplayAbility_CompareDistance">();
	}
	static class UFortBTDecorator_GameplayAbility_CompareDistance* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortBTDecorator_GameplayAbility_CompareDistance>();
	}
};
static_assert(alignof(UFortBTDecorator_GameplayAbility_CompareDistance) == 0x000008, "Wrong alignment on UFortBTDecorator_GameplayAbility_CompareDistance");
static_assert(sizeof(UFortBTDecorator_GameplayAbility_CompareDistance) == 0x000110, "Wrong size on UFortBTDecorator_GameplayAbility_CompareDistance");
static_assert(offsetof(UFortBTDecorator_GameplayAbility_CompareDistance, DistanceComparisons) == 0x000100, "Member 'UFortBTDecorator_GameplayAbility_CompareDistance::DistanceComparisons' has a wrong offset!");

class UFortBTDecorator_GameplayAbility_DoesTargetHaveProhibitedTags final : public UFortBTDecorator_QueryGameplayAbility
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortBTDecorator_GameplayAbility_DoesTargetHaveProhibitedTags">();
	}
	static class UFortBTDecorator_GameplayAbility_DoesTargetHaveProhibitedTags* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortBTDecorator_GameplayAbility_DoesTargetHaveProhibitedTags>();
	}
};
static_assert(alignof(UFortBTDecorator_GameplayAbility_DoesTargetHaveProhibitedTags) == 0x000008, "Wrong alignment on UFortBTDecorator_GameplayAbility_DoesTargetHaveProhibitedTags");
static_assert(sizeof(UFortBTDecorator_GameplayAbility_DoesTargetHaveProhibitedTags) == 0x000100, "Wrong size on UFortBTDecorator_GameplayAbility_DoesTargetHaveProhibitedTags");

class UFortBTDecorator_GameplayAbility_HasGameplayAbility final : public UBTDecorator
{
public:
	struct FBlackboardKeySelector                 AbilityOwningActorKey;
	struct FGameplayTagContainer                  GameplayAbilityTag;
	struct FBlackboardKeySelector                 GameplayAbilityTagBlackboardKey;
	bool                                          bOnlyTestActiveAbility;
	uint8                                         Pad_D9[0x7];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortBTDecorator_GameplayAbility_HasGameplayAbility">();
	}
	static class UFortBTDecorator_GameplayAbility_HasGameplayAbility* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortBTDecorator_GameplayAbility_HasGameplayAbility>();
	}
};
static_assert(alignof(UFortBTDecorator_GameplayAbility_HasGameplayAbility) == 0x000008, "Wrong alignment on UFortBTDecorator_GameplayAbility_HasGameplayAbility");
static_assert(sizeof(UFortBTDecorator_GameplayAbility_HasGameplayAbility) == 0x0000E0, "Wrong size on UFortBTDecorator_GameplayAbility_HasGameplayAbility");
static_assert(offsetof(UFortBTDecorator_GameplayAbility_HasGameplayAbility, AbilityOwningActorKey) == 0x000068, "Member 'UFortBTDecorator_GameplayAbility_HasGameplayAbility::AbilityOwningActorKey' has a wrong offset!");
static_assert(offsetof(UFortBTDecorator_GameplayAbility_HasGameplayAbility, GameplayAbilityTag) == 0x000090, "Member 'UFortBTDecorator_GameplayAbility_HasGameplayAbility::GameplayAbilityTag' has a wrong offset!");
static_assert(offsetof(UFortBTDecorator_GameplayAbility_HasGameplayAbility, GameplayAbilityTagBlackboardKey) == 0x0000B0, "Member 'UFortBTDecorator_GameplayAbility_HasGameplayAbility::GameplayAbilityTagBlackboardKey' has a wrong offset!");
static_assert(offsetof(UFortBTDecorator_GameplayAbility_HasGameplayAbility, bOnlyTestActiveAbility) == 0x0000D8, "Member 'UFortBTDecorator_GameplayAbility_HasGameplayAbility::bOnlyTestActiveAbility' has a wrong offset!");

class UFortBTDecorator_GameplayAbility_HasNearbyPawns final : public UFortBTDecorator_QueryGameplayAbility
{
public:
	float                                         NearbyPawnDistance;
	bool                                          bFilterAIPawns;
	bool                                          bFilterPlayerPawns;
	uint8                                         Pad_106[0x2];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortBTDecorator_GameplayAbility_HasNearbyPawns">();
	}
	static class UFortBTDecorator_GameplayAbility_HasNearbyPawns* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortBTDecorator_GameplayAbility_HasNearbyPawns>();
	}
};
static_assert(alignof(UFortBTDecorator_GameplayAbility_HasNearbyPawns) == 0x000008, "Wrong alignment on UFortBTDecorator_GameplayAbility_HasNearbyPawns");
static_assert(sizeof(UFortBTDecorator_GameplayAbility_HasNearbyPawns) == 0x000108, "Wrong size on UFortBTDecorator_GameplayAbility_HasNearbyPawns");
static_assert(offsetof(UFortBTDecorator_GameplayAbility_HasNearbyPawns, NearbyPawnDistance) == 0x000100, "Member 'UFortBTDecorator_GameplayAbility_HasNearbyPawns::NearbyPawnDistance' has a wrong offset!");
static_assert(offsetof(UFortBTDecorator_GameplayAbility_HasNearbyPawns, bFilterAIPawns) == 0x000104, "Member 'UFortBTDecorator_GameplayAbility_HasNearbyPawns::bFilterAIPawns' has a wrong offset!");
static_assert(offsetof(UFortBTDecorator_GameplayAbility_HasNearbyPawns, bFilterPlayerPawns) == 0x000105, "Member 'UFortBTDecorator_GameplayAbility_HasNearbyPawns::bFilterPlayerPawns' has a wrong offset!");

class UFortBTDecorator_GameplayAbility_IsClosestPawnInRange final : public UFortBTDecorator_QueryGameplayAbility
{
public:
	float                                         NearbyPawnDistance;
	bool                                          bFilterAIPawns;
	bool                                          bFilterPlayerPawns;
	uint8                                         Pad_106[0x2];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortBTDecorator_GameplayAbility_IsClosestPawnInRange">();
	}
	static class UFortBTDecorator_GameplayAbility_IsClosestPawnInRange* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortBTDecorator_GameplayAbility_IsClosestPawnInRange>();
	}
};
static_assert(alignof(UFortBTDecorator_GameplayAbility_IsClosestPawnInRange) == 0x000008, "Wrong alignment on UFortBTDecorator_GameplayAbility_IsClosestPawnInRange");
static_assert(sizeof(UFortBTDecorator_GameplayAbility_IsClosestPawnInRange) == 0x000108, "Wrong size on UFortBTDecorator_GameplayAbility_IsClosestPawnInRange");
static_assert(offsetof(UFortBTDecorator_GameplayAbility_IsClosestPawnInRange, NearbyPawnDistance) == 0x000100, "Member 'UFortBTDecorator_GameplayAbility_IsClosestPawnInRange::NearbyPawnDistance' has a wrong offset!");
static_assert(offsetof(UFortBTDecorator_GameplayAbility_IsClosestPawnInRange, bFilterAIPawns) == 0x000104, "Member 'UFortBTDecorator_GameplayAbility_IsClosestPawnInRange::bFilterAIPawns' has a wrong offset!");
static_assert(offsetof(UFortBTDecorator_GameplayAbility_IsClosestPawnInRange, bFilterPlayerPawns) == 0x000105, "Member 'UFortBTDecorator_GameplayAbility_IsClosestPawnInRange::bFilterPlayerPawns' has a wrong offset!");

#pragma pack(push, 0x1)
class alignas(0x10) UFortAthenaAIEvaluator_NearbyActorsPerception : public UFortAthenaAIEvaluator
{
public:
	class FName                                   FoundNearbyActorKeyName;
	uint8                                         Pad_8C[0x4];
	struct FScalableFloat                         MinimumUpdateInterval;
	int32                                         RequiredTypes;
	uint8                                         Pad_BC[0x4];
	struct FScalableFloat                         MinimumDistanceToActors;
	TArray<ETeamAttitude>                         RequiredAttitudes;
	bool                                          bRequireLoS;
	uint8                                         Pad_F9[0x7];
	struct FGameplayTagQuery                      RequiredTagsQuery;
	uint8                                         Pad_148[0xF0];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortAthenaAIEvaluator_NearbyActorsPerception">();
	}
	static class UFortAthenaAIEvaluator_NearbyActorsPerception* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortAthenaAIEvaluator_NearbyActorsPerception>();
	}
};
#pragma pack(pop)
static_assert(alignof(UFortAthenaAIEvaluator_NearbyActorsPerception) == 0x000010, "Wrong alignment on UFortAthenaAIEvaluator_NearbyActorsPerception");
static_assert(sizeof(UFortAthenaAIEvaluator_NearbyActorsPerception) == 0x000240, "Wrong size on UFortAthenaAIEvaluator_NearbyActorsPerception");
static_assert(offsetof(UFortAthenaAIEvaluator_NearbyActorsPerception, FoundNearbyActorKeyName) == 0x000088, "Member 'UFortAthenaAIEvaluator_NearbyActorsPerception::FoundNearbyActorKeyName' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIEvaluator_NearbyActorsPerception, MinimumUpdateInterval) == 0x000090, "Member 'UFortAthenaAIEvaluator_NearbyActorsPerception::MinimumUpdateInterval' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIEvaluator_NearbyActorsPerception, RequiredTypes) == 0x0000B8, "Member 'UFortAthenaAIEvaluator_NearbyActorsPerception::RequiredTypes' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIEvaluator_NearbyActorsPerception, MinimumDistanceToActors) == 0x0000C0, "Member 'UFortAthenaAIEvaluator_NearbyActorsPerception::MinimumDistanceToActors' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIEvaluator_NearbyActorsPerception, RequiredAttitudes) == 0x0000E8, "Member 'UFortAthenaAIEvaluator_NearbyActorsPerception::RequiredAttitudes' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIEvaluator_NearbyActorsPerception, bRequireLoS) == 0x0000F8, "Member 'UFortAthenaAIEvaluator_NearbyActorsPerception::bRequireLoS' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIEvaluator_NearbyActorsPerception, RequiredTagsQuery) == 0x000100, "Member 'UFortAthenaAIEvaluator_NearbyActorsPerception::RequiredTagsQuery' has a wrong offset!");

class UFortBTDecorator_GameplayAbility_IsOnCooldown final : public UFortBTDecorator_QueryGameplayAbility
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortBTDecorator_GameplayAbility_IsOnCooldown">();
	}
	static class UFortBTDecorator_GameplayAbility_IsOnCooldown* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortBTDecorator_GameplayAbility_IsOnCooldown>();
	}
};
static_assert(alignof(UFortBTDecorator_GameplayAbility_IsOnCooldown) == 0x000008, "Wrong alignment on UFortBTDecorator_GameplayAbility_IsOnCooldown");
static_assert(sizeof(UFortBTDecorator_GameplayAbility_IsOnCooldown) == 0x000100, "Wrong size on UFortBTDecorator_GameplayAbility_IsOnCooldown");

class UFortBTDecorator_GameplayAbility_IsRotatedToAttackTarget final : public UFortBTDecorator_QueryGameplayAbility
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortBTDecorator_GameplayAbility_IsRotatedToAttackTarget">();
	}
	static class UFortBTDecorator_GameplayAbility_IsRotatedToAttackTarget* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortBTDecorator_GameplayAbility_IsRotatedToAttackTarget>();
	}
};
static_assert(alignof(UFortBTDecorator_GameplayAbility_IsRotatedToAttackTarget) == 0x000008, "Wrong alignment on UFortBTDecorator_GameplayAbility_IsRotatedToAttackTarget");
static_assert(sizeof(UFortBTDecorator_GameplayAbility_IsRotatedToAttackTarget) == 0x000100, "Wrong size on UFortBTDecorator_GameplayAbility_IsRotatedToAttackTarget");

class UFortAthenaAIBotEvaluator_FreeFalling final : public UFortAthenaAIBotEvaluator
{
public:
	class FName                                   DiveExecutionStatusKeyName;
	class FName                                   DiveDestinationKeyName;
	class FName                                   GlideExecutionStatusKeyName;
	class FName                                   GlideDestinationKeyName;
	class FName                                   JumpOffBusDestinationName;
	uint8                                         Pad_A4[0xA];
	bool                                          bRandomlySelectFreeFallingMode;
	uint8                                         Pad_AF[0x1];
	struct FScalableFloat                         IdleWeight;
	struct FScalableFloat                         RandomWeight;
	struct FScalableFloat                         TowardNearestAllyWeight;
	EFreeFallingMode                              FreeFallingMode;
	uint8                                         Pad_129[0x3];
	float                                         MaxOffsetRangeFromNearestAlly;
	uint8                                         bShouldRecomputeDestinationWhenTowardNearestAlly : 1;
	uint8                                         bShouldSearchAllyInSquad : 1;
	uint8                                         bShouldSearchAllyInTeam : 1;
	uint8                                         bGlideAllowed : 1;
	uint8                                         Pad_131[0x3];
	float                                         SkyTubeDivingStuckTimeThreshold;
	uint8                                         Pad_138[0x20];
	class AFortPlayerStateAthena*                 NearestAlly;
	struct FVector                                CachedLatestDestination;
	class UFortAthenaAIBotMovementDigestedSkillSet* CacheMovementDigestedSkillSet;
	uint8                                         Pad_180[0x8];
	class AFortSkyTube*                           CachedSkyTube;
	uint8                                         Pad_190[0x8];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortAthenaAIBotEvaluator_FreeFalling">();
	}
	static class UFortAthenaAIBotEvaluator_FreeFalling* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortAthenaAIBotEvaluator_FreeFalling>();
	}
};
static_assert(alignof(UFortAthenaAIBotEvaluator_FreeFalling) == 0x000008, "Wrong alignment on UFortAthenaAIBotEvaluator_FreeFalling");
static_assert(sizeof(UFortAthenaAIBotEvaluator_FreeFalling) == 0x000198, "Wrong size on UFortAthenaAIBotEvaluator_FreeFalling");
static_assert(offsetof(UFortAthenaAIBotEvaluator_FreeFalling, DiveExecutionStatusKeyName) == 0x000090, "Member 'UFortAthenaAIBotEvaluator_FreeFalling::DiveExecutionStatusKeyName' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotEvaluator_FreeFalling, DiveDestinationKeyName) == 0x000094, "Member 'UFortAthenaAIBotEvaluator_FreeFalling::DiveDestinationKeyName' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotEvaluator_FreeFalling, GlideExecutionStatusKeyName) == 0x000098, "Member 'UFortAthenaAIBotEvaluator_FreeFalling::GlideExecutionStatusKeyName' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotEvaluator_FreeFalling, GlideDestinationKeyName) == 0x00009C, "Member 'UFortAthenaAIBotEvaluator_FreeFalling::GlideDestinationKeyName' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotEvaluator_FreeFalling, JumpOffBusDestinationName) == 0x0000A0, "Member 'UFortAthenaAIBotEvaluator_FreeFalling::JumpOffBusDestinationName' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotEvaluator_FreeFalling, bRandomlySelectFreeFallingMode) == 0x0000AE, "Member 'UFortAthenaAIBotEvaluator_FreeFalling::bRandomlySelectFreeFallingMode' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotEvaluator_FreeFalling, IdleWeight) == 0x0000B0, "Member 'UFortAthenaAIBotEvaluator_FreeFalling::IdleWeight' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotEvaluator_FreeFalling, RandomWeight) == 0x0000D8, "Member 'UFortAthenaAIBotEvaluator_FreeFalling::RandomWeight' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotEvaluator_FreeFalling, TowardNearestAllyWeight) == 0x000100, "Member 'UFortAthenaAIBotEvaluator_FreeFalling::TowardNearestAllyWeight' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotEvaluator_FreeFalling, FreeFallingMode) == 0x000128, "Member 'UFortAthenaAIBotEvaluator_FreeFalling::FreeFallingMode' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotEvaluator_FreeFalling, MaxOffsetRangeFromNearestAlly) == 0x00012C, "Member 'UFortAthenaAIBotEvaluator_FreeFalling::MaxOffsetRangeFromNearestAlly' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotEvaluator_FreeFalling, SkyTubeDivingStuckTimeThreshold) == 0x000134, "Member 'UFortAthenaAIBotEvaluator_FreeFalling::SkyTubeDivingStuckTimeThreshold' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotEvaluator_FreeFalling, NearestAlly) == 0x000158, "Member 'UFortAthenaAIBotEvaluator_FreeFalling::NearestAlly' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotEvaluator_FreeFalling, CachedLatestDestination) == 0x000160, "Member 'UFortAthenaAIBotEvaluator_FreeFalling::CachedLatestDestination' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotEvaluator_FreeFalling, CacheMovementDigestedSkillSet) == 0x000178, "Member 'UFortAthenaAIBotEvaluator_FreeFalling::CacheMovementDigestedSkillSet' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotEvaluator_FreeFalling, CachedSkyTube) == 0x000188, "Member 'UFortAthenaAIBotEvaluator_FreeFalling::CachedSkyTube' has a wrong offset!");

class UFortBTDecorator_GameplayAbility_IsWithinMaxTargetSelectionRange final : public UFortBTDecorator_QueryGameplayAbility
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortBTDecorator_GameplayAbility_IsWithinMaxTargetSelectionRange">();
	}
	static class UFortBTDecorator_GameplayAbility_IsWithinMaxTargetSelectionRange* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortBTDecorator_GameplayAbility_IsWithinMaxTargetSelectionRange>();
	}
};
static_assert(alignof(UFortBTDecorator_GameplayAbility_IsWithinMaxTargetSelectionRange) == 0x000008, "Wrong alignment on UFortBTDecorator_GameplayAbility_IsWithinMaxTargetSelectionRange");
static_assert(sizeof(UFortBTDecorator_GameplayAbility_IsWithinMaxTargetSelectionRange) == 0x000100, "Wrong size on UFortBTDecorator_GameplayAbility_IsWithinMaxTargetSelectionRange");

class UFortBTDecorator_IsGoalPawn final : public UBTDecorator_BlackboardBase
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortBTDecorator_IsGoalPawn">();
	}
	static class UFortBTDecorator_IsGoalPawn* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortBTDecorator_IsGoalPawn>();
	}
};
static_assert(alignof(UFortBTDecorator_IsGoalPawn) == 0x000008, "Wrong alignment on UFortBTDecorator_IsGoalPawn");
static_assert(sizeof(UFortBTDecorator_IsGoalPawn) == 0x000090, "Wrong size on UFortBTDecorator_IsGoalPawn");

class UFortBTDecorator_IsInBotEndGame final : public UBTDecorator
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortBTDecorator_IsInBotEndGame">();
	}
	static class UFortBTDecorator_IsInBotEndGame* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortBTDecorator_IsInBotEndGame>();
	}
};
static_assert(alignof(UFortBTDecorator_IsInBotEndGame) == 0x000008, "Wrong alignment on UFortBTDecorator_IsInBotEndGame");
static_assert(sizeof(UFortBTDecorator_IsInBotEndGame) == 0x000068, "Wrong size on UFortBTDecorator_IsInBotEndGame");

class UFortBTDecorator_IsMoving final : public UFortBTDecorator_QueryGameplayAbility
{
public:
	float                                         UpdateInterval;
	float                                         MinTime;
	bool                                          bUseMinDist;
	uint8                                         Pad_109[0x3];
	float                                         MinDistMinTime;
	struct FDistanceToTargetComparison            MinDistanceComparison;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortBTDecorator_IsMoving">();
	}
	static class UFortBTDecorator_IsMoving* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortBTDecorator_IsMoving>();
	}
};
static_assert(alignof(UFortBTDecorator_IsMoving) == 0x000008, "Wrong alignment on UFortBTDecorator_IsMoving");
static_assert(sizeof(UFortBTDecorator_IsMoving) == 0x000148, "Wrong size on UFortBTDecorator_IsMoving");
static_assert(offsetof(UFortBTDecorator_IsMoving, UpdateInterval) == 0x000100, "Member 'UFortBTDecorator_IsMoving::UpdateInterval' has a wrong offset!");
static_assert(offsetof(UFortBTDecorator_IsMoving, MinTime) == 0x000104, "Member 'UFortBTDecorator_IsMoving::MinTime' has a wrong offset!");
static_assert(offsetof(UFortBTDecorator_IsMoving, bUseMinDist) == 0x000108, "Member 'UFortBTDecorator_IsMoving::bUseMinDist' has a wrong offset!");
static_assert(offsetof(UFortBTDecorator_IsMoving, MinDistMinTime) == 0x00010C, "Member 'UFortBTDecorator_IsMoving::MinDistMinTime' has a wrong offset!");
static_assert(offsetof(UFortBTDecorator_IsMoving, MinDistanceComparison) == 0x000110, "Member 'UFortBTDecorator_IsMoving::MinDistanceComparison' has a wrong offset!");

class UFortGameplayInteractionSmartObjectBehaviorDefinition final : public UGameplayInteractionSmartObjectBehaviorDefinition
{
public:
	bool CanBeUsedBy(const class AActor* User, const class AActor* SmartObjectActor) const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortGameplayInteractionSmartObjectBehaviorDefinition">();
	}
	static class UFortGameplayInteractionSmartObjectBehaviorDefinition* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortGameplayInteractionSmartObjectBehaviorDefinition>();
	}
};
static_assert(alignof(UFortGameplayInteractionSmartObjectBehaviorDefinition) == 0x000008, "Wrong alignment on UFortGameplayInteractionSmartObjectBehaviorDefinition");
static_assert(sizeof(UFortGameplayInteractionSmartObjectBehaviorDefinition) == 0x000040, "Wrong size on UFortGameplayInteractionSmartObjectBehaviorDefinition");

class UFortBTDecorator_IsTakerAirborne final : public UBTDecorator
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortBTDecorator_IsTakerAirborne">();
	}
	static class UFortBTDecorator_IsTakerAirborne* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortBTDecorator_IsTakerAirborne>();
	}
};
static_assert(alignof(UFortBTDecorator_IsTakerAirborne) == 0x000008, "Wrong alignment on UFortBTDecorator_IsTakerAirborne");
static_assert(sizeof(UFortBTDecorator_IsTakerAirborne) == 0x000068, "Wrong size on UFortBTDecorator_IsTakerAirborne");

class UFortBTDecorator_WeaponStatus final : public UBTDecorator
{
public:
	float                                         WeaponStatusUpdateRate;
	uint8                                         bTestIfCurrentWeaponIsValid : 1;
	uint8                                         bCurrentWeaponShouldBeValid : 1;
	uint8                                         bTestAllowedCurrentWeaponTags : 1;
	uint8                                         Pad_6D[0x3];
	struct FGameplayTagContainer                  AllowedCurrentWeaponTags;
	uint8                                         bTestIfCurrentWeaponIsReloading : 1;
	uint8                                         bCurrentWeaponShouldBeReloading : 1;
	uint8                                         bTestIfCurrentWeaponHasAmmoInMagazine : 1;
	uint8                                         bCurrentWeaponShouldHaveAmmoInMagazine : 1;
	uint8                                         bTestIfCurrentWeaponHasExtraAmmo : 1;
	uint8                                         bCurrentWeaponShouldHaveExtraAmmo : 1;
	uint8                                         bAllInterestedTestsMustPass : 1;
	uint8                                         Pad_91[0x7];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortBTDecorator_WeaponStatus">();
	}
	static class UFortBTDecorator_WeaponStatus* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortBTDecorator_WeaponStatus>();
	}
};
static_assert(alignof(UFortBTDecorator_WeaponStatus) == 0x000008, "Wrong alignment on UFortBTDecorator_WeaponStatus");
static_assert(sizeof(UFortBTDecorator_WeaponStatus) == 0x000098, "Wrong size on UFortBTDecorator_WeaponStatus");
static_assert(offsetof(UFortBTDecorator_WeaponStatus, WeaponStatusUpdateRate) == 0x000068, "Member 'UFortBTDecorator_WeaponStatus::WeaponStatusUpdateRate' has a wrong offset!");
static_assert(offsetof(UFortBTDecorator_WeaponStatus, AllowedCurrentWeaponTags) == 0x000070, "Member 'UFortBTDecorator_WeaponStatus::AllowedCurrentWeaponTags' has a wrong offset!");

class UFortQueryTest_PerceptionExists final : public UEnvQueryTest
{
public:
	ECorePerceptionTypes                          Sense;
	uint8                                         Pad_1F9[0x7];
	TSubclassOf<class UAISense>                   SenseClass;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortQueryTest_PerceptionExists">();
	}
	static class UFortQueryTest_PerceptionExists* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortQueryTest_PerceptionExists>();
	}
};
static_assert(alignof(UFortQueryTest_PerceptionExists) == 0x000008, "Wrong alignment on UFortQueryTest_PerceptionExists");
static_assert(sizeof(UFortQueryTest_PerceptionExists) == 0x000208, "Wrong size on UFortQueryTest_PerceptionExists");
static_assert(offsetof(UFortQueryTest_PerceptionExists, Sense) == 0x0001F8, "Member 'UFortQueryTest_PerceptionExists::Sense' has a wrong offset!");
static_assert(offsetof(UFortQueryTest_PerceptionExists, SenseClass) == 0x000200, "Member 'UFortQueryTest_PerceptionExists::SenseClass' has a wrong offset!");

class UFortBTService_ActivateAbility final : public UBTService
{
public:
	struct FGameplayTagContainer                  AbilityTags;
	bool                                          bRequireCanHitTargetWithAbility;
	bool                                          bPawnTargetsOnly;
	uint8                                         Pad_92[0x6];
	struct FGameplayTagContainer                  ProhibitedTargetTags;
	bool                                          bCanActivateWhenMoving;
	uint8                                         Pad_B9[0x7];
	TArray<struct FDistanceToTargetComparison>    DistanceChecks;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortBTService_ActivateAbility">();
	}
	static class UFortBTService_ActivateAbility* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortBTService_ActivateAbility>();
	}
};
static_assert(alignof(UFortBTService_ActivateAbility) == 0x000008, "Wrong alignment on UFortBTService_ActivateAbility");
static_assert(sizeof(UFortBTService_ActivateAbility) == 0x0000D0, "Wrong size on UFortBTService_ActivateAbility");
static_assert(offsetof(UFortBTService_ActivateAbility, AbilityTags) == 0x000070, "Member 'UFortBTService_ActivateAbility::AbilityTags' has a wrong offset!");
static_assert(offsetof(UFortBTService_ActivateAbility, bRequireCanHitTargetWithAbility) == 0x000090, "Member 'UFortBTService_ActivateAbility::bRequireCanHitTargetWithAbility' has a wrong offset!");
static_assert(offsetof(UFortBTService_ActivateAbility, bPawnTargetsOnly) == 0x000091, "Member 'UFortBTService_ActivateAbility::bPawnTargetsOnly' has a wrong offset!");
static_assert(offsetof(UFortBTService_ActivateAbility, ProhibitedTargetTags) == 0x000098, "Member 'UFortBTService_ActivateAbility::ProhibitedTargetTags' has a wrong offset!");
static_assert(offsetof(UFortBTService_ActivateAbility, bCanActivateWhenMoving) == 0x0000B8, "Member 'UFortBTService_ActivateAbility::bCanActivateWhenMoving' has a wrong offset!");
static_assert(offsetof(UFortBTService_ActivateAbility, DistanceChecks) == 0x0000C0, "Member 'UFortBTService_ActivateAbility::DistanceChecks' has a wrong offset!");

class UFortBTService_UpdateBotMissionBuilding final : public UBTService
{
public:
	struct FBlackboardKeySelector                 InterestLocationKey;
	struct FBlackboardKeySelector                 BuildOrderKey;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortBTService_UpdateBotMissionBuilding">();
	}
	static class UFortBTService_UpdateBotMissionBuilding* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortBTService_UpdateBotMissionBuilding>();
	}
};
static_assert(alignof(UFortBTService_UpdateBotMissionBuilding) == 0x000008, "Wrong alignment on UFortBTService_UpdateBotMissionBuilding");
static_assert(sizeof(UFortBTService_UpdateBotMissionBuilding) == 0x0000C0, "Wrong size on UFortBTService_UpdateBotMissionBuilding");
static_assert(offsetof(UFortBTService_UpdateBotMissionBuilding, InterestLocationKey) == 0x000070, "Member 'UFortBTService_UpdateBotMissionBuilding::InterestLocationKey' has a wrong offset!");
static_assert(offsetof(UFortBTService_UpdateBotMissionBuilding, BuildOrderKey) == 0x000098, "Member 'UFortBTService_UpdateBotMissionBuilding::BuildOrderKey' has a wrong offset!");

class UFortAthenaAIBotEvaluator_Sprinting final : public UFortAthenaAIBotEvaluator
{
public:
	class FName                                   AllowSprintKeyName;
	class FName                                   AllowSlideKeyName;
	class FName                                   JumpExecutionStatusName;
	class FName                                   TacticalSprintExecutionStatusName;
	class FName                                   SlideExecutionStatusName;
	class FName                                   UrgentMovementKeyName;
	class FName                                   RangeAttackExecutionStatusName;
	class FName                                   MeleeAttackExecutionStatusName;
	class FName                                   ThrowableAttackExecutionStatusName;
	uint8                                         Pad_B4[0x12];
	bool                                          bSprintOnlyInWater;
	bool                                          bSprintOnlyInUrgentMode;
	class UFortAthenaAIBotMovementDigestedSkillSet* MovementSkillSet;
	class UFortAthenaAIBotAimingDigestedSkillSet* AimingSkillSet;
	float                                         TacticalSprintTriggerChance;
	float                                         TacticalSprintTriggerChanceInUrgentMovement;
	float                                         TacticalSprintJumpTriggerChance;
	uint8                                         Pad_E4[0x2C];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortAthenaAIBotEvaluator_Sprinting">();
	}
	static class UFortAthenaAIBotEvaluator_Sprinting* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortAthenaAIBotEvaluator_Sprinting>();
	}
};
static_assert(alignof(UFortAthenaAIBotEvaluator_Sprinting) == 0x000008, "Wrong alignment on UFortAthenaAIBotEvaluator_Sprinting");
static_assert(sizeof(UFortAthenaAIBotEvaluator_Sprinting) == 0x000110, "Wrong size on UFortAthenaAIBotEvaluator_Sprinting");
static_assert(offsetof(UFortAthenaAIBotEvaluator_Sprinting, AllowSprintKeyName) == 0x000090, "Member 'UFortAthenaAIBotEvaluator_Sprinting::AllowSprintKeyName' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotEvaluator_Sprinting, AllowSlideKeyName) == 0x000094, "Member 'UFortAthenaAIBotEvaluator_Sprinting::AllowSlideKeyName' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotEvaluator_Sprinting, JumpExecutionStatusName) == 0x000098, "Member 'UFortAthenaAIBotEvaluator_Sprinting::JumpExecutionStatusName' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotEvaluator_Sprinting, TacticalSprintExecutionStatusName) == 0x00009C, "Member 'UFortAthenaAIBotEvaluator_Sprinting::TacticalSprintExecutionStatusName' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotEvaluator_Sprinting, SlideExecutionStatusName) == 0x0000A0, "Member 'UFortAthenaAIBotEvaluator_Sprinting::SlideExecutionStatusName' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotEvaluator_Sprinting, UrgentMovementKeyName) == 0x0000A4, "Member 'UFortAthenaAIBotEvaluator_Sprinting::UrgentMovementKeyName' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotEvaluator_Sprinting, RangeAttackExecutionStatusName) == 0x0000A8, "Member 'UFortAthenaAIBotEvaluator_Sprinting::RangeAttackExecutionStatusName' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotEvaluator_Sprinting, MeleeAttackExecutionStatusName) == 0x0000AC, "Member 'UFortAthenaAIBotEvaluator_Sprinting::MeleeAttackExecutionStatusName' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotEvaluator_Sprinting, ThrowableAttackExecutionStatusName) == 0x0000B0, "Member 'UFortAthenaAIBotEvaluator_Sprinting::ThrowableAttackExecutionStatusName' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotEvaluator_Sprinting, bSprintOnlyInWater) == 0x0000C6, "Member 'UFortAthenaAIBotEvaluator_Sprinting::bSprintOnlyInWater' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotEvaluator_Sprinting, bSprintOnlyInUrgentMode) == 0x0000C7, "Member 'UFortAthenaAIBotEvaluator_Sprinting::bSprintOnlyInUrgentMode' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotEvaluator_Sprinting, MovementSkillSet) == 0x0000C8, "Member 'UFortAthenaAIBotEvaluator_Sprinting::MovementSkillSet' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotEvaluator_Sprinting, AimingSkillSet) == 0x0000D0, "Member 'UFortAthenaAIBotEvaluator_Sprinting::AimingSkillSet' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotEvaluator_Sprinting, TacticalSprintTriggerChance) == 0x0000D8, "Member 'UFortAthenaAIBotEvaluator_Sprinting::TacticalSprintTriggerChance' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotEvaluator_Sprinting, TacticalSprintTriggerChanceInUrgentMovement) == 0x0000DC, "Member 'UFortAthenaAIBotEvaluator_Sprinting::TacticalSprintTriggerChanceInUrgentMovement' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotEvaluator_Sprinting, TacticalSprintJumpTriggerChance) == 0x0000E0, "Member 'UFortAthenaAIBotEvaluator_Sprinting::TacticalSprintJumpTriggerChance' has a wrong offset!");

class UFortBTService_UpdateBotMissionGoal final : public UBTService_BlackboardBase
{
public:
	uint8                                         bRequireInteraction : 1;
	uint8                                         bRequireInteractionOrLocator : 1;
	uint8                                         bRequireEncounter : 1;
	uint8                                         bPickClosest : 1;
	uint8                                         Pad_99[0x7];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortBTService_UpdateBotMissionGoal">();
	}
	static class UFortBTService_UpdateBotMissionGoal* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortBTService_UpdateBotMissionGoal>();
	}
};
static_assert(alignof(UFortBTService_UpdateBotMissionGoal) == 0x000008, "Wrong alignment on UFortBTService_UpdateBotMissionGoal");
static_assert(sizeof(UFortBTService_UpdateBotMissionGoal) == 0x0000A0, "Wrong size on UFortBTService_UpdateBotMissionGoal");

class UFortBTTask_BotMissionBuild final : public UBTTask_BlackboardBase
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortBTTask_BotMissionBuild">();
	}
	static class UFortBTTask_BotMissionBuild* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortBTTask_BotMissionBuild>();
	}
};
static_assert(alignof(UFortBTTask_BotMissionBuild) == 0x000008, "Wrong alignment on UFortBTTask_BotMissionBuild");
static_assert(sizeof(UFortBTTask_BotMissionBuild) == 0x000098, "Wrong size on UFortBTTask_BotMissionBuild");

class UFortAthenaBTService_PropagatePatrolProgressToPassengers final : public UBTService
{
public:
	class FName                                   PatrollingAppendDestinationKeyName;
	uint8                                         Pad_74[0x4];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortAthenaBTService_PropagatePatrolProgressToPassengers">();
	}
	static class UFortAthenaBTService_PropagatePatrolProgressToPassengers* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortAthenaBTService_PropagatePatrolProgressToPassengers>();
	}
};
static_assert(alignof(UFortAthenaBTService_PropagatePatrolProgressToPassengers) == 0x000008, "Wrong alignment on UFortAthenaBTService_PropagatePatrolProgressToPassengers");
static_assert(sizeof(UFortAthenaBTService_PropagatePatrolProgressToPassengers) == 0x000078, "Wrong size on UFortAthenaBTService_PropagatePatrolProgressToPassengers");
static_assert(offsetof(UFortAthenaBTService_PropagatePatrolProgressToPassengers, PatrollingAppendDestinationKeyName) == 0x000070, "Member 'UFortAthenaBTService_PropagatePatrolProgressToPassengers::PatrollingAppendDestinationKeyName' has a wrong offset!");

class UFortBTTask_BotMissionInteract final : public UBTTask_BlackboardBase
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortBTTask_BotMissionInteract">();
	}
	static class UFortBTTask_BotMissionInteract* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortBTTask_BotMissionInteract>();
	}
};
static_assert(alignof(UFortBTTask_BotMissionInteract) == 0x000008, "Wrong alignment on UFortBTTask_BotMissionInteract");
static_assert(sizeof(UFortBTTask_BotMissionInteract) == 0x000098, "Wrong size on UFortBTTask_BotMissionInteract");

class UFortBTTask_ExecuteGameplayAbility final : public UBTTask_GameplayTaskBase
{
public:
	struct FGameplayTagContainer                  GameplayAbilityTag;
	struct FBlackboardKeySelector                 GameplayAbilityTagBlackboardKey;
	bool                                          bUseBlackboardTag;
	uint8                                         Pad_C1[0x7];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortBTTask_ExecuteGameplayAbility">();
	}
	static class UFortBTTask_ExecuteGameplayAbility* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortBTTask_ExecuteGameplayAbility>();
	}
};
static_assert(alignof(UFortBTTask_ExecuteGameplayAbility) == 0x000008, "Wrong alignment on UFortBTTask_ExecuteGameplayAbility");
static_assert(sizeof(UFortBTTask_ExecuteGameplayAbility) == 0x0000C8, "Wrong size on UFortBTTask_ExecuteGameplayAbility");
static_assert(offsetof(UFortBTTask_ExecuteGameplayAbility, GameplayAbilityTag) == 0x000078, "Member 'UFortBTTask_ExecuteGameplayAbility::GameplayAbilityTag' has a wrong offset!");
static_assert(offsetof(UFortBTTask_ExecuteGameplayAbility, GameplayAbilityTagBlackboardKey) == 0x000098, "Member 'UFortBTTask_ExecuteGameplayAbility::GameplayAbilityTagBlackboardKey' has a wrong offset!");
static_assert(offsetof(UFortBTTask_ExecuteGameplayAbility, bUseBlackboardTag) == 0x0000C0, "Member 'UFortBTTask_ExecuteGameplayAbility::bUseBlackboardTag' has a wrong offset!");

class UFortBTTask_GameMoveTo : public UBTTask_MoveTo
{
public:
	struct FBlackboardKeySelector                 FocalPointWhileMoving;
	EPathObstacleAction                           PathObstacleAction;
	uint8                                         Pad_D9[0x7];
	TSubclassOf<class AFortPawn>                  PushBumpedPawnClass;
	struct FGameplayTag                           NavFilterTag;
	uint8                                         bDetectUnexpectedPathBlockingObstacles : 1;
	uint8                                         bEnableSlowdownAtGoal : 1;
	uint8                                         bStopAtGoal : 1;
	uint8                                         bFinishMoveOnOverlap : 1;
	uint8                                         Pad_ED[0x3];
	struct FBlackboardKeySelector                 AcceptableRadiusKey;
	uint8                                         bDeimosFlavor : 1;
	uint8                                         Pad_119[0x7];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortBTTask_GameMoveTo">();
	}
	static class UFortBTTask_GameMoveTo* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortBTTask_GameMoveTo>();
	}
};
static_assert(alignof(UFortBTTask_GameMoveTo) == 0x000008, "Wrong alignment on UFortBTTask_GameMoveTo");
static_assert(sizeof(UFortBTTask_GameMoveTo) == 0x000120, "Wrong size on UFortBTTask_GameMoveTo");
static_assert(offsetof(UFortBTTask_GameMoveTo, FocalPointWhileMoving) == 0x0000B0, "Member 'UFortBTTask_GameMoveTo::FocalPointWhileMoving' has a wrong offset!");
static_assert(offsetof(UFortBTTask_GameMoveTo, PathObstacleAction) == 0x0000D8, "Member 'UFortBTTask_GameMoveTo::PathObstacleAction' has a wrong offset!");
static_assert(offsetof(UFortBTTask_GameMoveTo, PushBumpedPawnClass) == 0x0000E0, "Member 'UFortBTTask_GameMoveTo::PushBumpedPawnClass' has a wrong offset!");
static_assert(offsetof(UFortBTTask_GameMoveTo, NavFilterTag) == 0x0000E8, "Member 'UFortBTTask_GameMoveTo::NavFilterTag' has a wrong offset!");
static_assert(offsetof(UFortBTTask_GameMoveTo, AcceptableRadiusKey) == 0x0000F0, "Member 'UFortBTTask_GameMoveTo::AcceptableRadiusKey' has a wrong offset!");

class UFortBTTask_GameMoveDirectlyToward final : public UFortBTTask_GameMoveTo
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortBTTask_GameMoveDirectlyToward">();
	}
	static class UFortBTTask_GameMoveDirectlyToward* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortBTTask_GameMoveDirectlyToward>();
	}
};
static_assert(alignof(UFortBTTask_GameMoveDirectlyToward) == 0x000008, "Wrong alignment on UFortBTTask_GameMoveDirectlyToward");
static_assert(sizeof(UFortBTTask_GameMoveDirectlyToward) == 0x000120, "Wrong size on UFortBTTask_GameMoveDirectlyToward");

class UFortBTTask_RequestUndermining final : public UBTTaskNode
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortBTTask_RequestUndermining">();
	}
	static class UFortBTTask_RequestUndermining* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortBTTask_RequestUndermining>();
	}
};
static_assert(alignof(UFortBTTask_RequestUndermining) == 0x000008, "Wrong alignment on UFortBTTask_RequestUndermining");
static_assert(sizeof(UFortBTTask_RequestUndermining) == 0x000070, "Wrong size on UFortBTTask_RequestUndermining");

class UFortBTTask_RotateToFaceBBEntryWithTags final : public UBTTask_RotateToFaceBBEntry
{
public:
	struct FGameplayTagContainer                  TagsToApply;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortBTTask_RotateToFaceBBEntryWithTags">();
	}
	static class UFortBTTask_RotateToFaceBBEntryWithTags* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortBTTask_RotateToFaceBBEntryWithTags>();
	}
};
static_assert(alignof(UFortBTTask_RotateToFaceBBEntryWithTags) == 0x000008, "Wrong alignment on UFortBTTask_RotateToFaceBBEntryWithTags");
static_assert(sizeof(UFortBTTask_RotateToFaceBBEntryWithTags) == 0x0000C0, "Wrong size on UFortBTTask_RotateToFaceBBEntryWithTags");
static_assert(offsetof(UFortBTTask_RotateToFaceBBEntryWithTags, TagsToApply) == 0x0000A0, "Member 'UFortBTTask_RotateToFaceBBEntryWithTags::TagsToApply' has a wrong offset!");

class UFortAthenaAIBotEvaluator_ReloadWeapon final : public UFortAthenaAIBotEvaluator
{
public:
	class FName                                   WeaponKeyName;
	uint8                                         Pad_94[0x2];
	bool                                          bCanReloadWeaponsInInventory;
	uint8                                         Pad_97[0x1];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortAthenaAIBotEvaluator_ReloadWeapon">();
	}
	static class UFortAthenaAIBotEvaluator_ReloadWeapon* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortAthenaAIBotEvaluator_ReloadWeapon>();
	}
};
static_assert(alignof(UFortAthenaAIBotEvaluator_ReloadWeapon) == 0x000008, "Wrong alignment on UFortAthenaAIBotEvaluator_ReloadWeapon");
static_assert(sizeof(UFortAthenaAIBotEvaluator_ReloadWeapon) == 0x000098, "Wrong size on UFortAthenaAIBotEvaluator_ReloadWeapon");
static_assert(offsetof(UFortAthenaAIBotEvaluator_ReloadWeapon, WeaponKeyName) == 0x000090, "Member 'UFortAthenaAIBotEvaluator_ReloadWeapon::WeaponKeyName' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotEvaluator_ReloadWeapon, bCanReloadWeaponsInInventory) == 0x000096, "Member 'UFortAthenaAIBotEvaluator_ReloadWeapon::bCanReloadWeaponsInInventory' has a wrong offset!");

class UFortBTTask_SetFrustrationDiscouragement final : public UBTTaskNode
{
public:
	float                                         DiscouragementDuration;
	uint8                                         Pad_74[0x4];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortBTTask_SetFrustrationDiscouragement">();
	}
	static class UFortBTTask_SetFrustrationDiscouragement* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortBTTask_SetFrustrationDiscouragement>();
	}
};
static_assert(alignof(UFortBTTask_SetFrustrationDiscouragement) == 0x000008, "Wrong alignment on UFortBTTask_SetFrustrationDiscouragement");
static_assert(sizeof(UFortBTTask_SetFrustrationDiscouragement) == 0x000078, "Wrong size on UFortBTTask_SetFrustrationDiscouragement");
static_assert(offsetof(UFortBTTask_SetFrustrationDiscouragement, DiscouragementDuration) == 0x000070, "Member 'UFortBTTask_SetFrustrationDiscouragement::DiscouragementDuration' has a wrong offset!");

class UFortBTTask_Sleep final : public UBTTaskNode
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortBTTask_Sleep">();
	}
	static class UFortBTTask_Sleep* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortBTTask_Sleep>();
	}
};
static_assert(alignof(UFortBTTask_Sleep) == 0x000008, "Wrong alignment on UFortBTTask_Sleep");
static_assert(sizeof(UFortBTTask_Sleep) == 0x000070, "Wrong size on UFortBTTask_Sleep");

class alignas(0x10) UFortAthenaAIBotEvaluator_Conversation final : public UFortAthenaAIBotEvaluator
{
public:
	class FName                                   IsInConversationStateName;
	uint8                                         Pad_94[0x4];
	class FName                                   ExecutionStatusCheckedToAvoidStoppingWhenNearActorName;
	uint8                                         Pad_9C[0x2];
	bool                                          bForceStopIfNoPlayerNearby;
	uint8                                         Pad_9F[0x1];
	class UFortAthenaAIRuntimeParameters_Conversation* ConversationRuntimeParameters;
	class AActor*                                 ActorToFocus;
	uint8                                         Pad_B0[0x110];

public:
	void OnPlayerPawnSpawned(class AFortAthenaAIBotController* BotController, class AFortPlayerPawnAthena* BotPawn);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortAthenaAIBotEvaluator_Conversation">();
	}
	static class UFortAthenaAIBotEvaluator_Conversation* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortAthenaAIBotEvaluator_Conversation>();
	}
};
static_assert(alignof(UFortAthenaAIBotEvaluator_Conversation) == 0x000010, "Wrong alignment on UFortAthenaAIBotEvaluator_Conversation");
static_assert(sizeof(UFortAthenaAIBotEvaluator_Conversation) == 0x0001C0, "Wrong size on UFortAthenaAIBotEvaluator_Conversation");
static_assert(offsetof(UFortAthenaAIBotEvaluator_Conversation, IsInConversationStateName) == 0x000090, "Member 'UFortAthenaAIBotEvaluator_Conversation::IsInConversationStateName' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotEvaluator_Conversation, ExecutionStatusCheckedToAvoidStoppingWhenNearActorName) == 0x000098, "Member 'UFortAthenaAIBotEvaluator_Conversation::ExecutionStatusCheckedToAvoidStoppingWhenNearActorName' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotEvaluator_Conversation, bForceStopIfNoPlayerNearby) == 0x00009E, "Member 'UFortAthenaAIBotEvaluator_Conversation::bForceStopIfNoPlayerNearby' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotEvaluator_Conversation, ConversationRuntimeParameters) == 0x0000A0, "Member 'UFortAthenaAIBotEvaluator_Conversation::ConversationRuntimeParameters' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotEvaluator_Conversation, ActorToFocus) == 0x0000A8, "Member 'UFortAthenaAIBotEvaluator_Conversation::ActorToFocus' has a wrong offset!");

class UFortBTTask_TakerMoveToNavmesh final : public UBTTask_MoveTo
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortBTTask_TakerMoveToNavmesh">();
	}
	static class UFortBTTask_TakerMoveToNavmesh* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortBTTask_TakerMoveToNavmesh>();
	}
};
static_assert(alignof(UFortBTTask_TakerMoveToNavmesh) == 0x000008, "Wrong alignment on UFortBTTask_TakerMoveToNavmesh");
static_assert(sizeof(UFortBTTask_TakerMoveToNavmesh) == 0x0000B0, "Wrong size on UFortBTTask_TakerMoveToNavmesh");

class AFortEQSPrevisActor final : public AActor
{
public:
	uint8                                         Pad_288[0x10];
	class USceneComponent*                        SceneRoot;
	struct FGameplayTagContainer                  GameplayTags;

public:
	void PrepForPrevis();
	void SetQueryTemplate(class UEnvQuery* InPrevisQueryTemplate);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortEQSPrevisActor">();
	}
	static class AFortEQSPrevisActor* GetDefaultObj()
	{
		return GetDefaultObjImpl<AFortEQSPrevisActor>();
	}
};
static_assert(alignof(AFortEQSPrevisActor) == 0x000008, "Wrong alignment on AFortEQSPrevisActor");
static_assert(sizeof(AFortEQSPrevisActor) == 0x0002C0, "Wrong size on AFortEQSPrevisActor");
static_assert(offsetof(AFortEQSPrevisActor, SceneRoot) == 0x000298, "Member 'AFortEQSPrevisActor::SceneRoot' has a wrong offset!");
static_assert(offsetof(AFortEQSPrevisActor, GameplayTags) == 0x0002A0, "Member 'AFortEQSPrevisActor::GameplayTags' has a wrong offset!");

class UFortAthenaBTService_PauseVehicle final : public UBTService
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortAthenaBTService_PauseVehicle">();
	}
	static class UFortAthenaBTService_PauseVehicle* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortAthenaBTService_PauseVehicle>();
	}
};
static_assert(alignof(UFortAthenaBTService_PauseVehicle) == 0x000008, "Wrong alignment on UFortAthenaBTService_PauseVehicle");
static_assert(sizeof(UFortAthenaBTService_PauseVehicle) == 0x000070, "Wrong size on UFortAthenaBTService_PauseVehicle");

class UFortQueryContext_AIPawnSpawnLocation final : public UEnvQueryContext
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortQueryContext_AIPawnSpawnLocation">();
	}
	static class UFortQueryContext_AIPawnSpawnLocation* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortQueryContext_AIPawnSpawnLocation>();
	}
};
static_assert(alignof(UFortQueryContext_AIPawnSpawnLocation) == 0x000008, "Wrong alignment on UFortQueryContext_AIPawnSpawnLocation");
static_assert(sizeof(UFortQueryContext_AIPawnSpawnLocation) == 0x000028, "Wrong size on UFortQueryContext_AIPawnSpawnLocation");

class UFortQueryContext_AllBots final : public UEnvQueryContext
{
public:
	bool                                          bIncludeOnlyAthenaGameParticipantBots;
	uint8                                         Pad_29[0x7];
	struct FGameplayTagQuery                      BotTagQuery;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortQueryContext_AllBots">();
	}
	static class UFortQueryContext_AllBots* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortQueryContext_AllBots>();
	}
};
static_assert(alignof(UFortQueryContext_AllBots) == 0x000008, "Wrong alignment on UFortQueryContext_AllBots");
static_assert(sizeof(UFortQueryContext_AllBots) == 0x000078, "Wrong size on UFortQueryContext_AllBots");
static_assert(offsetof(UFortQueryContext_AllBots, bIncludeOnlyAthenaGameParticipantBots) == 0x000028, "Member 'UFortQueryContext_AllBots::bIncludeOnlyAthenaGameParticipantBots' has a wrong offset!");
static_assert(offsetof(UFortQueryContext_AllBots, BotTagQuery) == 0x000030, "Member 'UFortQueryContext_AllBots::BotTagQuery' has a wrong offset!");

class UFortAthenaAIBotEvaluator_AvoidThreat final : public UFortAthenaAIBotEvaluator_Movement
{
public:
	class FName                                   AvoidThreatKeyName;
	class FName                                   AvoidThreatMovementStateKeyName;
	class FName                                   AvoidThreatDestinationKeyName;
	uint8                                         Pad_19C[0xC];
	class AActor*                                 CurrentThreatActorAvoiding;
	class UFortAthenaAIBotEvasiveManeuversDigestedSkillSet* CacheEMDigestedSkillSet;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortAthenaAIBotEvaluator_AvoidThreat">();
	}
	static class UFortAthenaAIBotEvaluator_AvoidThreat* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortAthenaAIBotEvaluator_AvoidThreat>();
	}
};
static_assert(alignof(UFortAthenaAIBotEvaluator_AvoidThreat) == 0x000008, "Wrong alignment on UFortAthenaAIBotEvaluator_AvoidThreat");
static_assert(sizeof(UFortAthenaAIBotEvaluator_AvoidThreat) == 0x0001B8, "Wrong size on UFortAthenaAIBotEvaluator_AvoidThreat");
static_assert(offsetof(UFortAthenaAIBotEvaluator_AvoidThreat, AvoidThreatKeyName) == 0x000190, "Member 'UFortAthenaAIBotEvaluator_AvoidThreat::AvoidThreatKeyName' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotEvaluator_AvoidThreat, AvoidThreatMovementStateKeyName) == 0x000194, "Member 'UFortAthenaAIBotEvaluator_AvoidThreat::AvoidThreatMovementStateKeyName' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotEvaluator_AvoidThreat, AvoidThreatDestinationKeyName) == 0x000198, "Member 'UFortAthenaAIBotEvaluator_AvoidThreat::AvoidThreatDestinationKeyName' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotEvaluator_AvoidThreat, CurrentThreatActorAvoiding) == 0x0001A8, "Member 'UFortAthenaAIBotEvaluator_AvoidThreat::CurrentThreatActorAvoiding' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotEvaluator_AvoidThreat, CacheEMDigestedSkillSet) == 0x0001B0, "Member 'UFortAthenaAIBotEvaluator_AvoidThreat::CacheEMDigestedSkillSet' has a wrong offset!");

class UFortQueryContext_AllEnemies final : public UEnvQueryContext
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortQueryContext_AllEnemies">();
	}
	static class UFortQueryContext_AllEnemies* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortQueryContext_AllEnemies>();
	}
};
static_assert(alignof(UFortQueryContext_AllEnemies) == 0x000008, "Wrong alignment on UFortQueryContext_AllEnemies");
static_assert(sizeof(UFortQueryContext_AllEnemies) == 0x000028, "Wrong size on UFortQueryContext_AllEnemies");

class UFortQueryContext_AllGoals final : public UEnvQueryContext
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortQueryContext_AllGoals">();
	}
	static class UFortQueryContext_AllGoals* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortQueryContext_AllGoals>();
	}
};
static_assert(alignof(UFortQueryContext_AllGoals) == 0x000008, "Wrong alignment on UFortQueryContext_AllGoals");
static_assert(sizeof(UFortQueryContext_AllGoals) == 0x000028, "Wrong size on UFortQueryContext_AllGoals");

class UFortAthenaAIEvaluator_FollowGroupLeader final : public UFortAthenaAIBotEvaluator_Movement
{
public:
	class FName                                   FollowGroupLeaderStatusKeyName;
	class FName                                   FollowGroupLeaderMovementStateKeyName;
	class FName                                   FollowGroupLeaderDestinationKeyName;
	class FName                                   TooFarFromLeaderKeyName;
	uint8                                         Pad_1A0[0x8];
	class UFortPawnComponent_AIGroup*             CachedAIGroupComponent;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortAthenaAIEvaluator_FollowGroupLeader">();
	}
	static class UFortAthenaAIEvaluator_FollowGroupLeader* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortAthenaAIEvaluator_FollowGroupLeader>();
	}
};
static_assert(alignof(UFortAthenaAIEvaluator_FollowGroupLeader) == 0x000008, "Wrong alignment on UFortAthenaAIEvaluator_FollowGroupLeader");
static_assert(sizeof(UFortAthenaAIEvaluator_FollowGroupLeader) == 0x0001B0, "Wrong size on UFortAthenaAIEvaluator_FollowGroupLeader");
static_assert(offsetof(UFortAthenaAIEvaluator_FollowGroupLeader, FollowGroupLeaderStatusKeyName) == 0x000190, "Member 'UFortAthenaAIEvaluator_FollowGroupLeader::FollowGroupLeaderStatusKeyName' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIEvaluator_FollowGroupLeader, FollowGroupLeaderMovementStateKeyName) == 0x000194, "Member 'UFortAthenaAIEvaluator_FollowGroupLeader::FollowGroupLeaderMovementStateKeyName' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIEvaluator_FollowGroupLeader, FollowGroupLeaderDestinationKeyName) == 0x000198, "Member 'UFortAthenaAIEvaluator_FollowGroupLeader::FollowGroupLeaderDestinationKeyName' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIEvaluator_FollowGroupLeader, TooFarFromLeaderKeyName) == 0x00019C, "Member 'UFortAthenaAIEvaluator_FollowGroupLeader::TooFarFromLeaderKeyName' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIEvaluator_FollowGroupLeader, CachedAIGroupComponent) == 0x0001A8, "Member 'UFortAthenaAIEvaluator_FollowGroupLeader::CachedAIGroupComponent' has a wrong offset!");

class UFortQueryContext_AllPlayers final : public UEnvQueryContext
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortQueryContext_AllPlayers">();
	}
	static class UFortQueryContext_AllPlayers* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortQueryContext_AllPlayers>();
	}
};
static_assert(alignof(UFortQueryContext_AllPlayers) == 0x000008, "Wrong alignment on UFortQueryContext_AllPlayers");
static_assert(sizeof(UFortQueryContext_AllPlayers) == 0x000028, "Wrong size on UFortQueryContext_AllPlayers");

class UFortQueryContext_AllPOIVolumes final : public UEnvQueryContext
{
public:
	struct FGameplayTagQuery                      VolumeLocationTagQuery;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortQueryContext_AllPOIVolumes">();
	}
	static class UFortQueryContext_AllPOIVolumes* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortQueryContext_AllPOIVolumes>();
	}
};
static_assert(alignof(UFortQueryContext_AllPOIVolumes) == 0x000008, "Wrong alignment on UFortQueryContext_AllPOIVolumes");
static_assert(sizeof(UFortQueryContext_AllPOIVolumes) == 0x000070, "Wrong size on UFortQueryContext_AllPOIVolumes");
static_assert(offsetof(UFortQueryContext_AllPOIVolumes, VolumeLocationTagQuery) == 0x000028, "Member 'UFortQueryContext_AllPOIVolumes::VolumeLocationTagQuery' has a wrong offset!");

class UFortAthenaBTTask_Dive final : public UBTTaskNode
{
public:
	class FName                                   ExecutionStatusKeyName;
	class FName                                   DiveDestinationKeyName;
	uint8                                         Pad_78[0x8];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortAthenaBTTask_Dive">();
	}
	static class UFortAthenaBTTask_Dive* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortAthenaBTTask_Dive>();
	}
};
static_assert(alignof(UFortAthenaBTTask_Dive) == 0x000008, "Wrong alignment on UFortAthenaBTTask_Dive");
static_assert(sizeof(UFortAthenaBTTask_Dive) == 0x000080, "Wrong size on UFortAthenaBTTask_Dive");
static_assert(offsetof(UFortAthenaBTTask_Dive, ExecutionStatusKeyName) == 0x000070, "Member 'UFortAthenaBTTask_Dive::ExecutionStatusKeyName' has a wrong offset!");
static_assert(offsetof(UFortAthenaBTTask_Dive, DiveDestinationKeyName) == 0x000074, "Member 'UFortAthenaBTTask_Dive::DiveDestinationKeyName' has a wrong offset!");

class UFortQueryContext_AthenaCurrentSafeZoneCenter final : public UEnvQueryContext
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortQueryContext_AthenaCurrentSafeZoneCenter">();
	}
	static class UFortQueryContext_AthenaCurrentSafeZoneCenter* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortQueryContext_AthenaCurrentSafeZoneCenter>();
	}
};
static_assert(alignof(UFortQueryContext_AthenaCurrentSafeZoneCenter) == 0x000008, "Wrong alignment on UFortQueryContext_AthenaCurrentSafeZoneCenter");
static_assert(sizeof(UFortQueryContext_AthenaCurrentSafeZoneCenter) == 0x000028, "Wrong size on UFortQueryContext_AthenaCurrentSafeZoneCenter");

class UFortQueryContext_AthenaCurrentSafeZoneIndicatorCenter final : public UEnvQueryContext
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortQueryContext_AthenaCurrentSafeZoneIndicatorCenter">();
	}
	static class UFortQueryContext_AthenaCurrentSafeZoneIndicatorCenter* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortQueryContext_AthenaCurrentSafeZoneIndicatorCenter>();
	}
};
static_assert(alignof(UFortQueryContext_AthenaCurrentSafeZoneIndicatorCenter) == 0x000008, "Wrong alignment on UFortQueryContext_AthenaCurrentSafeZoneIndicatorCenter");
static_assert(sizeof(UFortQueryContext_AthenaCurrentSafeZoneIndicatorCenter) == 0x000028, "Wrong size on UFortQueryContext_AthenaCurrentSafeZoneIndicatorCenter");

class UFortQueryContext_BlackboardKeyLeader final : public UEnvQueryContext
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortQueryContext_BlackboardKeyLeader">();
	}
	static class UFortQueryContext_BlackboardKeyLeader* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortQueryContext_BlackboardKeyLeader>();
	}
};
static_assert(alignof(UFortQueryContext_BlackboardKeyLeader) == 0x000008, "Wrong alignment on UFortQueryContext_BlackboardKeyLeader");
static_assert(sizeof(UFortQueryContext_BlackboardKeyLeader) == 0x000028, "Wrong size on UFortQueryContext_BlackboardKeyLeader");

class UFortQueryContext_BuildingRifts final : public UEnvQueryContext
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortQueryContext_BuildingRifts">();
	}
	static class UFortQueryContext_BuildingRifts* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortQueryContext_BuildingRifts>();
	}
};
static_assert(alignof(UFortQueryContext_BuildingRifts) == 0x000008, "Wrong alignment on UFortQueryContext_BuildingRifts");
static_assert(sizeof(UFortQueryContext_BuildingRifts) == 0x000028, "Wrong size on UFortQueryContext_BuildingRifts");

class UFortAthenaBTTask_BotUnstuckTeleport final : public UBTTaskNode
{
public:
	struct FEQSParametrizedQueryExecutionRequest  EQSRequest;
	class FName                                   CanReachDestinationKeyName;
	class FName                                   TeleportExecutionStatusKeyName;
	class FName                                   LastPartialPathTimeKeyName;
	class FName                                   LastPartialPathCountKeyName;
	uint8                                         Pad_C8[0x20];
	class UFortAthenaAIBotUnstuckDigestedSkillSet* UnstuckSkillSet;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortAthenaBTTask_BotUnstuckTeleport">();
	}
	static class UFortAthenaBTTask_BotUnstuckTeleport* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortAthenaBTTask_BotUnstuckTeleport>();
	}
};
static_assert(alignof(UFortAthenaBTTask_BotUnstuckTeleport) == 0x000008, "Wrong alignment on UFortAthenaBTTask_BotUnstuckTeleport");
static_assert(sizeof(UFortAthenaBTTask_BotUnstuckTeleport) == 0x0000F0, "Wrong size on UFortAthenaBTTask_BotUnstuckTeleport");
static_assert(offsetof(UFortAthenaBTTask_BotUnstuckTeleport, EQSRequest) == 0x000070, "Member 'UFortAthenaBTTask_BotUnstuckTeleport::EQSRequest' has a wrong offset!");
static_assert(offsetof(UFortAthenaBTTask_BotUnstuckTeleport, CanReachDestinationKeyName) == 0x0000B8, "Member 'UFortAthenaBTTask_BotUnstuckTeleport::CanReachDestinationKeyName' has a wrong offset!");
static_assert(offsetof(UFortAthenaBTTask_BotUnstuckTeleport, TeleportExecutionStatusKeyName) == 0x0000BC, "Member 'UFortAthenaBTTask_BotUnstuckTeleport::TeleportExecutionStatusKeyName' has a wrong offset!");
static_assert(offsetof(UFortAthenaBTTask_BotUnstuckTeleport, LastPartialPathTimeKeyName) == 0x0000C0, "Member 'UFortAthenaBTTask_BotUnstuckTeleport::LastPartialPathTimeKeyName' has a wrong offset!");
static_assert(offsetof(UFortAthenaBTTask_BotUnstuckTeleport, LastPartialPathCountKeyName) == 0x0000C4, "Member 'UFortAthenaBTTask_BotUnstuckTeleport::LastPartialPathCountKeyName' has a wrong offset!");
static_assert(offsetof(UFortAthenaBTTask_BotUnstuckTeleport, UnstuckSkillSet) == 0x0000E8, "Member 'UFortAthenaBTTask_BotUnstuckTeleport::UnstuckSkillSet' has a wrong offset!");

class UFortQueryContext_EncounterFallbackTarget final : public UEnvQueryContext
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortQueryContext_EncounterFallbackTarget">();
	}
	static class UFortQueryContext_EncounterFallbackTarget* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortQueryContext_EncounterFallbackTarget>();
	}
};
static_assert(alignof(UFortQueryContext_EncounterFallbackTarget) == 0x000008, "Wrong alignment on UFortQueryContext_EncounterFallbackTarget");
static_assert(sizeof(UFortQueryContext_EncounterFallbackTarget) == 0x000028, "Wrong size on UFortQueryContext_EncounterFallbackTarget");

class UFortQueryContext_EncounterGoalsCenterLocation final : public UEnvQueryContext
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortQueryContext_EncounterGoalsCenterLocation">();
	}
	static class UFortQueryContext_EncounterGoalsCenterLocation* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortQueryContext_EncounterGoalsCenterLocation>();
	}
};
static_assert(alignof(UFortQueryContext_EncounterGoalsCenterLocation) == 0x000008, "Wrong alignment on UFortQueryContext_EncounterGoalsCenterLocation");
static_assert(sizeof(UFortQueryContext_EncounterGoalsCenterLocation) == 0x000028, "Wrong size on UFortQueryContext_EncounterGoalsCenterLocation");

class UFortQueryContext_EncounterGoalsOnGround final : public UEnvQueryContext
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortQueryContext_EncounterGoalsOnGround">();
	}
	static class UFortQueryContext_EncounterGoalsOnGround* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortQueryContext_EncounterGoalsOnGround>();
	}
};
static_assert(alignof(UFortQueryContext_EncounterGoalsOnGround) == 0x000008, "Wrong alignment on UFortQueryContext_EncounterGoalsOnGround");
static_assert(sizeof(UFortQueryContext_EncounterGoalsOnGround) == 0x000028, "Wrong size on UFortQueryContext_EncounterGoalsOnGround");

class UFortQueryContext_EncounterPrimaryAssignmentGoals final : public UEnvQueryContext
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortQueryContext_EncounterPrimaryAssignmentGoals">();
	}
	static class UFortQueryContext_EncounterPrimaryAssignmentGoals* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortQueryContext_EncounterPrimaryAssignmentGoals>();
	}
};
static_assert(alignof(UFortQueryContext_EncounterPrimaryAssignmentGoals) == 0x000008, "Wrong alignment on UFortQueryContext_EncounterPrimaryAssignmentGoals");
static_assert(sizeof(UFortQueryContext_EncounterPrimaryAssignmentGoals) == 0x000028, "Wrong size on UFortQueryContext_EncounterPrimaryAssignmentGoals");

class UFortQueryContext_EncounterProvidedQueryLocations final : public UEnvQueryContext
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortQueryContext_EncounterProvidedQueryLocations">();
	}
	static class UFortQueryContext_EncounterProvidedQueryLocations* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortQueryContext_EncounterProvidedQueryLocations>();
	}
};
static_assert(alignof(UFortQueryContext_EncounterProvidedQueryLocations) == 0x000008, "Wrong alignment on UFortQueryContext_EncounterProvidedQueryLocations");
static_assert(sizeof(UFortQueryContext_EncounterProvidedQueryLocations) == 0x000028, "Wrong size on UFortQueryContext_EncounterProvidedQueryLocations");

class UFortAthenaNpcEvaluator_Patrolling final : public UFortAthenaAIBotEvaluator_Movement
{
public:
	class FName                                   PatrollingKeyName;
	class FName                                   PatrollingMovementStateKeyName;
	class FName                                   PatrollingDestinationKeyName;
	class FName                                   DynamicBlueprintStatusKeyName;
	class FName                                   DynamicBlueprintActorKeyName;
	class FName                                   PatrollingShouldMoveKeyName;
	class FName                                   PatrollingAppendDestinationKeyName;
	uint8                                         Pad_1AC[0x10];
	float                                         DistanceToTestPoint;
	bool                                          bCanDisablePatrolling;
	bool                                          bCanReenablePatrolling;
	uint8                                         Pad_1C2[0x2];
	float                                         ReenableTimer;
	bool                                          bCanSelectNearestPatrolPointAtStart;
	uint8                                         Pad_1C9[0x7];
	class UFortAthenaNpcPatrollingComponent*      CachedNpcPatrollingComponent;
	uint8                                         Pad_1D8[0x8];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortAthenaNpcEvaluator_Patrolling">();
	}
	static class UFortAthenaNpcEvaluator_Patrolling* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortAthenaNpcEvaluator_Patrolling>();
	}
};
static_assert(alignof(UFortAthenaNpcEvaluator_Patrolling) == 0x000008, "Wrong alignment on UFortAthenaNpcEvaluator_Patrolling");
static_assert(sizeof(UFortAthenaNpcEvaluator_Patrolling) == 0x0001E0, "Wrong size on UFortAthenaNpcEvaluator_Patrolling");
static_assert(offsetof(UFortAthenaNpcEvaluator_Patrolling, PatrollingKeyName) == 0x000190, "Member 'UFortAthenaNpcEvaluator_Patrolling::PatrollingKeyName' has a wrong offset!");
static_assert(offsetof(UFortAthenaNpcEvaluator_Patrolling, PatrollingMovementStateKeyName) == 0x000194, "Member 'UFortAthenaNpcEvaluator_Patrolling::PatrollingMovementStateKeyName' has a wrong offset!");
static_assert(offsetof(UFortAthenaNpcEvaluator_Patrolling, PatrollingDestinationKeyName) == 0x000198, "Member 'UFortAthenaNpcEvaluator_Patrolling::PatrollingDestinationKeyName' has a wrong offset!");
static_assert(offsetof(UFortAthenaNpcEvaluator_Patrolling, DynamicBlueprintStatusKeyName) == 0x00019C, "Member 'UFortAthenaNpcEvaluator_Patrolling::DynamicBlueprintStatusKeyName' has a wrong offset!");
static_assert(offsetof(UFortAthenaNpcEvaluator_Patrolling, DynamicBlueprintActorKeyName) == 0x0001A0, "Member 'UFortAthenaNpcEvaluator_Patrolling::DynamicBlueprintActorKeyName' has a wrong offset!");
static_assert(offsetof(UFortAthenaNpcEvaluator_Patrolling, PatrollingShouldMoveKeyName) == 0x0001A4, "Member 'UFortAthenaNpcEvaluator_Patrolling::PatrollingShouldMoveKeyName' has a wrong offset!");
static_assert(offsetof(UFortAthenaNpcEvaluator_Patrolling, PatrollingAppendDestinationKeyName) == 0x0001A8, "Member 'UFortAthenaNpcEvaluator_Patrolling::PatrollingAppendDestinationKeyName' has a wrong offset!");
static_assert(offsetof(UFortAthenaNpcEvaluator_Patrolling, DistanceToTestPoint) == 0x0001BC, "Member 'UFortAthenaNpcEvaluator_Patrolling::DistanceToTestPoint' has a wrong offset!");
static_assert(offsetof(UFortAthenaNpcEvaluator_Patrolling, bCanDisablePatrolling) == 0x0001C0, "Member 'UFortAthenaNpcEvaluator_Patrolling::bCanDisablePatrolling' has a wrong offset!");
static_assert(offsetof(UFortAthenaNpcEvaluator_Patrolling, bCanReenablePatrolling) == 0x0001C1, "Member 'UFortAthenaNpcEvaluator_Patrolling::bCanReenablePatrolling' has a wrong offset!");
static_assert(offsetof(UFortAthenaNpcEvaluator_Patrolling, ReenableTimer) == 0x0001C4, "Member 'UFortAthenaNpcEvaluator_Patrolling::ReenableTimer' has a wrong offset!");
static_assert(offsetof(UFortAthenaNpcEvaluator_Patrolling, bCanSelectNearestPatrolPointAtStart) == 0x0001C8, "Member 'UFortAthenaNpcEvaluator_Patrolling::bCanSelectNearestPatrolPointAtStart' has a wrong offset!");
static_assert(offsetof(UFortAthenaNpcEvaluator_Patrolling, CachedNpcPatrollingComponent) == 0x0001D0, "Member 'UFortAthenaNpcEvaluator_Patrolling::CachedNpcPatrollingComponent' has a wrong offset!");

class UFortQueryContext_EncounterQueryActor final : public UEnvQueryContext
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortQueryContext_EncounterQueryActor">();
	}
	static class UFortQueryContext_EncounterQueryActor* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortQueryContext_EncounterQueryActor>();
	}
};
static_assert(alignof(UFortQueryContext_EncounterQueryActor) == 0x000008, "Wrong alignment on UFortQueryContext_EncounterQueryActor");
static_assert(sizeof(UFortQueryContext_EncounterQueryActor) == 0x000028, "Wrong size on UFortQueryContext_EncounterQueryActor");

class UFortAthenaAIBotEvaluator_PlayEmote final : public UFortAthenaAIBotEvaluator_Movement
{
public:
	class FName                                   PlayEmoteExecutionStatusKeyName;
	class FName                                   PlayEmoteDestinationKeyName;
	uint8                                         Pad_198[0x8];
	class AActor*                                 ExcludeReachingTarget;
	uint8                                         Pad_1A8[0x8];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortAthenaAIBotEvaluator_PlayEmote">();
	}
	static class UFortAthenaAIBotEvaluator_PlayEmote* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortAthenaAIBotEvaluator_PlayEmote>();
	}
};
static_assert(alignof(UFortAthenaAIBotEvaluator_PlayEmote) == 0x000008, "Wrong alignment on UFortAthenaAIBotEvaluator_PlayEmote");
static_assert(sizeof(UFortAthenaAIBotEvaluator_PlayEmote) == 0x0001B0, "Wrong size on UFortAthenaAIBotEvaluator_PlayEmote");
static_assert(offsetof(UFortAthenaAIBotEvaluator_PlayEmote, PlayEmoteExecutionStatusKeyName) == 0x000190, "Member 'UFortAthenaAIBotEvaluator_PlayEmote::PlayEmoteExecutionStatusKeyName' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotEvaluator_PlayEmote, PlayEmoteDestinationKeyName) == 0x000194, "Member 'UFortAthenaAIBotEvaluator_PlayEmote::PlayEmoteDestinationKeyName' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotEvaluator_PlayEmote, ExcludeReachingTarget) == 0x0001A0, "Member 'UFortAthenaAIBotEvaluator_PlayEmote::ExcludeReachingTarget' has a wrong offset!");

class UFortQueryContext_EncounterRandomDirection final : public UEnvQueryContext
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortQueryContext_EncounterRandomDirection">();
	}
	static class UFortQueryContext_EncounterRandomDirection* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortQueryContext_EncounterRandomDirection>();
	}
};
static_assert(alignof(UFortQueryContext_EncounterRandomDirection) == 0x000008, "Wrong alignment on UFortQueryContext_EncounterRandomDirection");
static_assert(sizeof(UFortQueryContext_EncounterRandomDirection) == 0x000028, "Wrong size on UFortQueryContext_EncounterRandomDirection");

class UFortQueryContext_EncounterTargetObjective final : public UEnvQueryContext
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortQueryContext_EncounterTargetObjective">();
	}
	static class UFortQueryContext_EncounterTargetObjective* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortQueryContext_EncounterTargetObjective>();
	}
};
static_assert(alignof(UFortQueryContext_EncounterTargetObjective) == 0x000008, "Wrong alignment on UFortQueryContext_EncounterTargetObjective");
static_assert(sizeof(UFortQueryContext_EncounterTargetObjective) == 0x000028, "Wrong size on UFortQueryContext_EncounterTargetObjective");

class UFortAthenaAIBotEvaluator_HandleFocusing final : public UFortAthenaAIBotEvaluator
{
public:
	class FName                                   TargetActorName;
	class FName                                   InteractActorName;
	class FName                                   TargetLocationName;
	class FName                                   FocusActorName;
	class FName                                   FocalPointName;
	class FName                                   WeaponFireName;
	class FName                                   RangeAttackIsReadyToFireName;
	class FName                                   WeaponTriggerMeleeName;
	class FName                                   LastKnownPositionName;
	class FName                                   TacticalSprintExecutionStatusName;
	uint8                                         Pad_B8[0x14];
	EFocusingBehavior                             FocusingBehavior;
	EFocusingBehavior                             NoRangedWeaponFocusBehavior;
	bool                                          bPrioritizeThreatOverCurrentTarget;
	bool                                          bUseTargetActorKeyAsFocusTarget;
	bool                                          bFocusOnTargetLocation;
	uint8                                         Pad_D1[0x3];
	float                                         AmbushMaxLKPLookAtAngleDegree;
	bool                                          bStopFocusingWhenMoving;
	uint8                                         Pad_D9[0x3];
	float                                         ResumeFocusingWhenMovingDist;
	float                                         StopFocusingWhenMovingDist;
	bool                                          bResumeFocusWhileSliding;
	uint8                                         Pad_E5[0x3];
	class UFortAthenaAIBotAimingDigestedSkillSet* CacheAimingDigestedSkillSet;
	class UFortAthenaAIBotMovementDigestedSkillSet* CacheMovementDigestedSkillSet;
	class AActor*                                 LastTargetedThreat;
	uint8                                         Pad_100[0x8];
	class AActor*                                 FocusActor;
	uint8                                         Pad_110[0x28];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortAthenaAIBotEvaluator_HandleFocusing">();
	}
	static class UFortAthenaAIBotEvaluator_HandleFocusing* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortAthenaAIBotEvaluator_HandleFocusing>();
	}
};
static_assert(alignof(UFortAthenaAIBotEvaluator_HandleFocusing) == 0x000008, "Wrong alignment on UFortAthenaAIBotEvaluator_HandleFocusing");
static_assert(sizeof(UFortAthenaAIBotEvaluator_HandleFocusing) == 0x000138, "Wrong size on UFortAthenaAIBotEvaluator_HandleFocusing");
static_assert(offsetof(UFortAthenaAIBotEvaluator_HandleFocusing, TargetActorName) == 0x000090, "Member 'UFortAthenaAIBotEvaluator_HandleFocusing::TargetActorName' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotEvaluator_HandleFocusing, InteractActorName) == 0x000094, "Member 'UFortAthenaAIBotEvaluator_HandleFocusing::InteractActorName' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotEvaluator_HandleFocusing, TargetLocationName) == 0x000098, "Member 'UFortAthenaAIBotEvaluator_HandleFocusing::TargetLocationName' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotEvaluator_HandleFocusing, FocusActorName) == 0x00009C, "Member 'UFortAthenaAIBotEvaluator_HandleFocusing::FocusActorName' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotEvaluator_HandleFocusing, FocalPointName) == 0x0000A0, "Member 'UFortAthenaAIBotEvaluator_HandleFocusing::FocalPointName' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotEvaluator_HandleFocusing, WeaponFireName) == 0x0000A4, "Member 'UFortAthenaAIBotEvaluator_HandleFocusing::WeaponFireName' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotEvaluator_HandleFocusing, RangeAttackIsReadyToFireName) == 0x0000A8, "Member 'UFortAthenaAIBotEvaluator_HandleFocusing::RangeAttackIsReadyToFireName' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotEvaluator_HandleFocusing, WeaponTriggerMeleeName) == 0x0000AC, "Member 'UFortAthenaAIBotEvaluator_HandleFocusing::WeaponTriggerMeleeName' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotEvaluator_HandleFocusing, LastKnownPositionName) == 0x0000B0, "Member 'UFortAthenaAIBotEvaluator_HandleFocusing::LastKnownPositionName' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotEvaluator_HandleFocusing, TacticalSprintExecutionStatusName) == 0x0000B4, "Member 'UFortAthenaAIBotEvaluator_HandleFocusing::TacticalSprintExecutionStatusName' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotEvaluator_HandleFocusing, FocusingBehavior) == 0x0000CC, "Member 'UFortAthenaAIBotEvaluator_HandleFocusing::FocusingBehavior' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotEvaluator_HandleFocusing, NoRangedWeaponFocusBehavior) == 0x0000CD, "Member 'UFortAthenaAIBotEvaluator_HandleFocusing::NoRangedWeaponFocusBehavior' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotEvaluator_HandleFocusing, bPrioritizeThreatOverCurrentTarget) == 0x0000CE, "Member 'UFortAthenaAIBotEvaluator_HandleFocusing::bPrioritizeThreatOverCurrentTarget' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotEvaluator_HandleFocusing, bUseTargetActorKeyAsFocusTarget) == 0x0000CF, "Member 'UFortAthenaAIBotEvaluator_HandleFocusing::bUseTargetActorKeyAsFocusTarget' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotEvaluator_HandleFocusing, bFocusOnTargetLocation) == 0x0000D0, "Member 'UFortAthenaAIBotEvaluator_HandleFocusing::bFocusOnTargetLocation' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotEvaluator_HandleFocusing, AmbushMaxLKPLookAtAngleDegree) == 0x0000D4, "Member 'UFortAthenaAIBotEvaluator_HandleFocusing::AmbushMaxLKPLookAtAngleDegree' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotEvaluator_HandleFocusing, bStopFocusingWhenMoving) == 0x0000D8, "Member 'UFortAthenaAIBotEvaluator_HandleFocusing::bStopFocusingWhenMoving' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotEvaluator_HandleFocusing, ResumeFocusingWhenMovingDist) == 0x0000DC, "Member 'UFortAthenaAIBotEvaluator_HandleFocusing::ResumeFocusingWhenMovingDist' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotEvaluator_HandleFocusing, StopFocusingWhenMovingDist) == 0x0000E0, "Member 'UFortAthenaAIBotEvaluator_HandleFocusing::StopFocusingWhenMovingDist' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotEvaluator_HandleFocusing, bResumeFocusWhileSliding) == 0x0000E4, "Member 'UFortAthenaAIBotEvaluator_HandleFocusing::bResumeFocusWhileSliding' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotEvaluator_HandleFocusing, CacheAimingDigestedSkillSet) == 0x0000E8, "Member 'UFortAthenaAIBotEvaluator_HandleFocusing::CacheAimingDigestedSkillSet' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotEvaluator_HandleFocusing, CacheMovementDigestedSkillSet) == 0x0000F0, "Member 'UFortAthenaAIBotEvaluator_HandleFocusing::CacheMovementDigestedSkillSet' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotEvaluator_HandleFocusing, LastTargetedThreat) == 0x0000F8, "Member 'UFortAthenaAIBotEvaluator_HandleFocusing::LastTargetedThreat' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotEvaluator_HandleFocusing, FocusActor) == 0x000108, "Member 'UFortAthenaAIBotEvaluator_HandleFocusing::FocusActor' has a wrong offset!");

class UFortQueryContext_Goal final : public UEnvQueryContext
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortQueryContext_Goal">();
	}
	static class UFortQueryContext_Goal* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortQueryContext_Goal>();
	}
};
static_assert(alignof(UFortQueryContext_Goal) == 0x000008, "Wrong alignment on UFortQueryContext_Goal");
static_assert(sizeof(UFortQueryContext_Goal) == 0x000028, "Wrong size on UFortQueryContext_Goal");

class UFortQueryContext_GoalProviderRootAssignmentGoals final : public UEnvQueryContext
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortQueryContext_GoalProviderRootAssignmentGoals">();
	}
	static class UFortQueryContext_GoalProviderRootAssignmentGoals* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortQueryContext_GoalProviderRootAssignmentGoals>();
	}
};
static_assert(alignof(UFortQueryContext_GoalProviderRootAssignmentGoals) == 0x000008, "Wrong alignment on UFortQueryContext_GoalProviderRootAssignmentGoals");
static_assert(sizeof(UFortQueryContext_GoalProviderRootAssignmentGoals) == 0x000028, "Wrong size on UFortQueryContext_GoalProviderRootAssignmentGoals");

class UFortAthenaBTService_ManageWeapon : public UBTService
{
public:
	class FName                                   WeaponFireName;
	class FName                                   WeaponTriggerMeleeName;
	class FName                                   WeaponTriggerThrowableName;
	class FName                                   WeaponReloadName;
	class FName                                   WeaponName;
	class FName                                   WeaponTargetingName;
	class FName                                   SprintExecutionStatusName;
	class FName                                   TacticalSprintExecutionStatusName;
	class FName                                   HealingStatusKeyName;
	class FName                                   BlockWeaponActionsKeyName;
	uint8                                         Pad_98[0x14];
	bool                                          bEndChargeOnFireStop;
	uint8                                         Pad_AD[0x3];

public:
	void ManageWeaponTargeting(class UBehaviorTreeComponent* OwnerComp) const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortAthenaBTService_ManageWeapon">();
	}
	static class UFortAthenaBTService_ManageWeapon* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortAthenaBTService_ManageWeapon>();
	}
};
static_assert(alignof(UFortAthenaBTService_ManageWeapon) == 0x000008, "Wrong alignment on UFortAthenaBTService_ManageWeapon");
static_assert(sizeof(UFortAthenaBTService_ManageWeapon) == 0x0000B0, "Wrong size on UFortAthenaBTService_ManageWeapon");
static_assert(offsetof(UFortAthenaBTService_ManageWeapon, WeaponFireName) == 0x000070, "Member 'UFortAthenaBTService_ManageWeapon::WeaponFireName' has a wrong offset!");
static_assert(offsetof(UFortAthenaBTService_ManageWeapon, WeaponTriggerMeleeName) == 0x000074, "Member 'UFortAthenaBTService_ManageWeapon::WeaponTriggerMeleeName' has a wrong offset!");
static_assert(offsetof(UFortAthenaBTService_ManageWeapon, WeaponTriggerThrowableName) == 0x000078, "Member 'UFortAthenaBTService_ManageWeapon::WeaponTriggerThrowableName' has a wrong offset!");
static_assert(offsetof(UFortAthenaBTService_ManageWeapon, WeaponReloadName) == 0x00007C, "Member 'UFortAthenaBTService_ManageWeapon::WeaponReloadName' has a wrong offset!");
static_assert(offsetof(UFortAthenaBTService_ManageWeapon, WeaponName) == 0x000080, "Member 'UFortAthenaBTService_ManageWeapon::WeaponName' has a wrong offset!");
static_assert(offsetof(UFortAthenaBTService_ManageWeapon, WeaponTargetingName) == 0x000084, "Member 'UFortAthenaBTService_ManageWeapon::WeaponTargetingName' has a wrong offset!");
static_assert(offsetof(UFortAthenaBTService_ManageWeapon, SprintExecutionStatusName) == 0x000088, "Member 'UFortAthenaBTService_ManageWeapon::SprintExecutionStatusName' has a wrong offset!");
static_assert(offsetof(UFortAthenaBTService_ManageWeapon, TacticalSprintExecutionStatusName) == 0x00008C, "Member 'UFortAthenaBTService_ManageWeapon::TacticalSprintExecutionStatusName' has a wrong offset!");
static_assert(offsetof(UFortAthenaBTService_ManageWeapon, HealingStatusKeyName) == 0x000090, "Member 'UFortAthenaBTService_ManageWeapon::HealingStatusKeyName' has a wrong offset!");
static_assert(offsetof(UFortAthenaBTService_ManageWeapon, BlockWeaponActionsKeyName) == 0x000094, "Member 'UFortAthenaBTService_ManageWeapon::BlockWeaponActionsKeyName' has a wrong offset!");
static_assert(offsetof(UFortAthenaBTService_ManageWeapon, bEndChargeOnFireStop) == 0x0000AC, "Member 'UFortAthenaBTService_ManageWeapon::bEndChargeOnFireStop' has a wrong offset!");

class UFortQueryContext_Goal_SpawnLocation final : public UEnvQueryContext
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortQueryContext_Goal_SpawnLocation">();
	}
	static class UFortQueryContext_Goal_SpawnLocation* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortQueryContext_Goal_SpawnLocation>();
	}
};
static_assert(alignof(UFortQueryContext_Goal_SpawnLocation) == 0x000008, "Wrong alignment on UFortQueryContext_Goal_SpawnLocation");
static_assert(sizeof(UFortQueryContext_Goal_SpawnLocation) == 0x000028, "Wrong size on UFortQueryContext_Goal_SpawnLocation");

class UFortQueryContext_NearbyAIPawns final : public UEnvQueryContext
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortQueryContext_NearbyAIPawns">();
	}
	static class UFortQueryContext_NearbyAIPawns* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortQueryContext_NearbyAIPawns>();
	}
};
static_assert(alignof(UFortQueryContext_NearbyAIPawns) == 0x000008, "Wrong alignment on UFortQueryContext_NearbyAIPawns");
static_assert(sizeof(UFortQueryContext_NearbyAIPawns) == 0x000028, "Wrong size on UFortQueryContext_NearbyAIPawns");

class UFortQueryTest_GoalBase : public UEnvQueryTest
{
public:
	uint8                                         bScoreEnemies : 1;
	uint8                                         bScoreEncounterGoals : 1;
	uint8                                         bScoreWorldGoals : 1;
	uint8                                         bScoreSpecificAssignments : 1;
	uint8                                         Pad_1F9[0x7];
	TArray<struct FFortAIAssignmentIdentifier>    AssignmentIDs;
	TArray<struct FFortAIAssignmentIdentifier>    ProhibitedAssignmentIDs;
	struct FGameplayTagQuery                      GoalActorTagQuery;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortQueryTest_GoalBase">();
	}
	static class UFortQueryTest_GoalBase* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortQueryTest_GoalBase>();
	}
};
static_assert(alignof(UFortQueryTest_GoalBase) == 0x000008, "Wrong alignment on UFortQueryTest_GoalBase");
static_assert(sizeof(UFortQueryTest_GoalBase) == 0x000268, "Wrong size on UFortQueryTest_GoalBase");
static_assert(offsetof(UFortQueryTest_GoalBase, AssignmentIDs) == 0x000200, "Member 'UFortQueryTest_GoalBase::AssignmentIDs' has a wrong offset!");
static_assert(offsetof(UFortQueryTest_GoalBase, ProhibitedAssignmentIDs) == 0x000210, "Member 'UFortQueryTest_GoalBase::ProhibitedAssignmentIDs' has a wrong offset!");
static_assert(offsetof(UFortQueryTest_GoalBase, GoalActorTagQuery) == 0x000220, "Member 'UFortQueryTest_GoalBase::GoalActorTagQuery' has a wrong offset!");

class UFortQueryTest_PawnHealth final : public UFortQueryTest_GoalBase
{
public:
	bool                                          bUsePercentHealth;
	uint8                                         Pad_269[0x7];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortQueryTest_PawnHealth">();
	}
	static class UFortQueryTest_PawnHealth* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortQueryTest_PawnHealth>();
	}
};
static_assert(alignof(UFortQueryTest_PawnHealth) == 0x000008, "Wrong alignment on UFortQueryTest_PawnHealth");
static_assert(sizeof(UFortQueryTest_PawnHealth) == 0x000270, "Wrong size on UFortQueryTest_PawnHealth");
static_assert(offsetof(UFortQueryTest_PawnHealth, bUsePercentHealth) == 0x000268, "Member 'UFortQueryTest_PawnHealth::bUsePercentHealth' has a wrong offset!");

class UFortQueryContext_NearbyAIPawnsMoveDestinations final : public UEnvQueryContext
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortQueryContext_NearbyAIPawnsMoveDestinations">();
	}
	static class UFortQueryContext_NearbyAIPawnsMoveDestinations* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortQueryContext_NearbyAIPawnsMoveDestinations>();
	}
};
static_assert(alignof(UFortQueryContext_NearbyAIPawnsMoveDestinations) == 0x000008, "Wrong alignment on UFortQueryContext_NearbyAIPawnsMoveDestinations");
static_assert(sizeof(UFortQueryContext_NearbyAIPawnsMoveDestinations) == 0x000028, "Wrong size on UFortQueryContext_NearbyAIPawnsMoveDestinations");

class UFortQueryContext_NearbyFriendlyAIPawns final : public UEnvQueryContext
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortQueryContext_NearbyFriendlyAIPawns">();
	}
	static class UFortQueryContext_NearbyFriendlyAIPawns* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortQueryContext_NearbyFriendlyAIPawns>();
	}
};
static_assert(alignof(UFortQueryContext_NearbyFriendlyAIPawns) == 0x000008, "Wrong alignment on UFortQueryContext_NearbyFriendlyAIPawns");
static_assert(sizeof(UFortQueryContext_NearbyFriendlyAIPawns) == 0x000028, "Wrong size on UFortQueryContext_NearbyFriendlyAIPawns");

class UFortQueryContext_NearbyFriendlyAIPawnsAndPlayerPawns final : public UEnvQueryContext
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortQueryContext_NearbyFriendlyAIPawnsAndPlayerPawns">();
	}
	static class UFortQueryContext_NearbyFriendlyAIPawnsAndPlayerPawns* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortQueryContext_NearbyFriendlyAIPawnsAndPlayerPawns>();
	}
};
static_assert(alignof(UFortQueryContext_NearbyFriendlyAIPawnsAndPlayerPawns) == 0x000008, "Wrong alignment on UFortQueryContext_NearbyFriendlyAIPawnsAndPlayerPawns");
static_assert(sizeof(UFortQueryContext_NearbyFriendlyAIPawnsAndPlayerPawns) == 0x000028, "Wrong size on UFortQueryContext_NearbyFriendlyAIPawnsAndPlayerPawns");

class UFortQueryContext_NearbyFriends final : public UEnvQueryContext
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortQueryContext_NearbyFriends">();
	}
	static class UFortQueryContext_NearbyFriends* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortQueryContext_NearbyFriends>();
	}
};
static_assert(alignof(UFortQueryContext_NearbyFriends) == 0x000008, "Wrong alignment on UFortQueryContext_NearbyFriends");
static_assert(sizeof(UFortQueryContext_NearbyFriends) == 0x000028, "Wrong size on UFortQueryContext_NearbyFriends");

class UFortAthenaAIBotEvaluator_Storm final : public UFortAthenaAIBotEvaluator_Movement
{
public:
	class FName                                   StormDestinationName;
	uint8                                         Pad_194[0xC];
	class AFortGameModeAthena*                    CacheAthenaGameMode;
	class UBehaviorTreeComponent*                 CachedBTComp;
	uint8                                         Pad_1B0[0x20];

public:
	void OnSafeZonePhaseChanged();
	void OnSafeZoneStateChanged(const EFortSafeZoneState NewState);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortAthenaAIBotEvaluator_Storm">();
	}
	static class UFortAthenaAIBotEvaluator_Storm* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortAthenaAIBotEvaluator_Storm>();
	}
};
static_assert(alignof(UFortAthenaAIBotEvaluator_Storm) == 0x000008, "Wrong alignment on UFortAthenaAIBotEvaluator_Storm");
static_assert(sizeof(UFortAthenaAIBotEvaluator_Storm) == 0x0001D0, "Wrong size on UFortAthenaAIBotEvaluator_Storm");
static_assert(offsetof(UFortAthenaAIBotEvaluator_Storm, StormDestinationName) == 0x000190, "Member 'UFortAthenaAIBotEvaluator_Storm::StormDestinationName' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotEvaluator_Storm, CacheAthenaGameMode) == 0x0001A0, "Member 'UFortAthenaAIBotEvaluator_Storm::CacheAthenaGameMode' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotEvaluator_Storm, CachedBTComp) == 0x0001A8, "Member 'UFortAthenaAIBotEvaluator_Storm::CachedBTComp' has a wrong offset!");

class UFortQueryContext_RandomDirectionXY final : public UEnvQueryContext
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortQueryContext_RandomDirectionXY">();
	}
	static class UFortQueryContext_RandomDirectionXY* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortQueryContext_RandomDirectionXY>();
	}
};
static_assert(alignof(UFortQueryContext_RandomDirectionXY) == 0x000008, "Wrong alignment on UFortQueryContext_RandomDirectionXY");
static_assert(sizeof(UFortQueryContext_RandomDirectionXY) == 0x000028, "Wrong size on UFortQueryContext_RandomDirectionXY");

class UFortQueryContext_SpawnSpotActorLocationOrAIPawnSpawnLocation final : public UEnvQueryContext
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortQueryContext_SpawnSpotActorLocationOrAIPawnSpawnLocation">();
	}
	static class UFortQueryContext_SpawnSpotActorLocationOrAIPawnSpawnLocation* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortQueryContext_SpawnSpotActorLocationOrAIPawnSpawnLocation>();
	}
};
static_assert(alignof(UFortQueryContext_SpawnSpotActorLocationOrAIPawnSpawnLocation) == 0x000008, "Wrong alignment on UFortQueryContext_SpawnSpotActorLocationOrAIPawnSpawnLocation");
static_assert(sizeof(UFortQueryContext_SpawnSpotActorLocationOrAIPawnSpawnLocation) == 0x000028, "Wrong size on UFortQueryContext_SpawnSpotActorLocationOrAIPawnSpawnLocation");

class UFortQueryContext_StWStormShield final : public UEnvQueryContext
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortQueryContext_StWStormShield">();
	}
	static class UFortQueryContext_StWStormShield* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortQueryContext_StWStormShield>();
	}
};
static_assert(alignof(UFortQueryContext_StWStormShield) == 0x000008, "Wrong alignment on UFortQueryContext_StWStormShield");
static_assert(sizeof(UFortQueryContext_StWStormShield) == 0x000028, "Wrong size on UFortQueryContext_StWStormShield");

class UFortQueryContext_TwoPointSolverPointA final : public UEnvQueryContext
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortQueryContext_TwoPointSolverPointA">();
	}
	static class UFortQueryContext_TwoPointSolverPointA* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortQueryContext_TwoPointSolverPointA>();
	}
};
static_assert(alignof(UFortQueryContext_TwoPointSolverPointA) == 0x000008, "Wrong alignment on UFortQueryContext_TwoPointSolverPointA");
static_assert(sizeof(UFortQueryContext_TwoPointSolverPointA) == 0x000028, "Wrong size on UFortQueryContext_TwoPointSolverPointA");

class UFortQueryContext_TwoPointSolverRotationA final : public UEnvQueryContext
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortQueryContext_TwoPointSolverRotationA">();
	}
	static class UFortQueryContext_TwoPointSolverRotationA* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortQueryContext_TwoPointSolverRotationA>();
	}
};
static_assert(alignof(UFortQueryContext_TwoPointSolverRotationA) == 0x000008, "Wrong alignment on UFortQueryContext_TwoPointSolverRotationA");
static_assert(sizeof(UFortQueryContext_TwoPointSolverRotationA) == 0x000028, "Wrong size on UFortQueryContext_TwoPointSolverRotationA");

class UFortQueryData_CurvesAroundLine final : public UDataAsset
{
public:
	struct FFortPointsOnCurve                     PointsOnSideA;
	struct FFortPointsOnCurve                     PointsOnSideB;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortQueryData_CurvesAroundLine">();
	}
	static class UFortQueryData_CurvesAroundLine* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortQueryData_CurvesAroundLine>();
	}
};
static_assert(alignof(UFortQueryData_CurvesAroundLine) == 0x000008, "Wrong alignment on UFortQueryData_CurvesAroundLine");
static_assert(sizeof(UFortQueryData_CurvesAroundLine) == 0x0000A0, "Wrong size on UFortQueryData_CurvesAroundLine");
static_assert(offsetof(UFortQueryData_CurvesAroundLine, PointsOnSideA) == 0x000030, "Member 'UFortQueryData_CurvesAroundLine::PointsOnSideA' has a wrong offset!");
static_assert(offsetof(UFortQueryData_CurvesAroundLine, PointsOnSideB) == 0x000068, "Member 'UFortQueryData_CurvesAroundLine::PointsOnSideB' has a wrong offset!");

class UFortQueryTest_OnFlatSurfaceNoNavMesh final : public UEnvQueryTest
{
public:
	float                                         Radius;
	float                                         ZTolerance;
	float                                         NormalTolerance;
	float                                         TraceOffset;
	TArray<TSubclassOf<class AActor>>             ActorClassesToIgnoreInTrace;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortQueryTest_OnFlatSurfaceNoNavMesh">();
	}
	static class UFortQueryTest_OnFlatSurfaceNoNavMesh* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortQueryTest_OnFlatSurfaceNoNavMesh>();
	}
};
static_assert(alignof(UFortQueryTest_OnFlatSurfaceNoNavMesh) == 0x000008, "Wrong alignment on UFortQueryTest_OnFlatSurfaceNoNavMesh");
static_assert(sizeof(UFortQueryTest_OnFlatSurfaceNoNavMesh) == 0x000218, "Wrong size on UFortQueryTest_OnFlatSurfaceNoNavMesh");
static_assert(offsetof(UFortQueryTest_OnFlatSurfaceNoNavMesh, Radius) == 0x0001F8, "Member 'UFortQueryTest_OnFlatSurfaceNoNavMesh::Radius' has a wrong offset!");
static_assert(offsetof(UFortQueryTest_OnFlatSurfaceNoNavMesh, ZTolerance) == 0x0001FC, "Member 'UFortQueryTest_OnFlatSurfaceNoNavMesh::ZTolerance' has a wrong offset!");
static_assert(offsetof(UFortQueryTest_OnFlatSurfaceNoNavMesh, NormalTolerance) == 0x000200, "Member 'UFortQueryTest_OnFlatSurfaceNoNavMesh::NormalTolerance' has a wrong offset!");
static_assert(offsetof(UFortQueryTest_OnFlatSurfaceNoNavMesh, TraceOffset) == 0x000204, "Member 'UFortQueryTest_OnFlatSurfaceNoNavMesh::TraceOffset' has a wrong offset!");
static_assert(offsetof(UFortQueryTest_OnFlatSurfaceNoNavMesh, ActorClassesToIgnoreInTrace) == 0x000208, "Member 'UFortQueryTest_OnFlatSurfaceNoNavMesh::ActorClassesToIgnoreInTrace' has a wrong offset!");

class UFortQueryGenerator_ActorsAround final : public UEnvQueryGenerator_ActorsOfClass
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortQueryGenerator_ActorsAround">();
	}
	static class UFortQueryGenerator_ActorsAround* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortQueryGenerator_ActorsAround>();
	}
};
static_assert(alignof(UFortQueryGenerator_ActorsAround) == 0x000008, "Wrong alignment on UFortQueryGenerator_ActorsAround");
static_assert(sizeof(UFortQueryGenerator_ActorsAround) == 0x0000D0, "Wrong size on UFortQueryGenerator_ActorsAround");

class UFortQueryGenerator_Allies final : public UEnvQueryGenerator
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortQueryGenerator_Allies">();
	}
	static class UFortQueryGenerator_Allies* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortQueryGenerator_Allies>();
	}
};
static_assert(alignof(UFortQueryGenerator_Allies) == 0x000008, "Wrong alignment on UFortQueryGenerator_Allies");
static_assert(sizeof(UFortQueryGenerator_Allies) == 0x000050, "Wrong size on UFortQueryGenerator_Allies");

class UFortAthenaAIBotEvaluator_Revive final : public UFortAthenaAIBotEvaluator_Movement
{
public:
	struct FScalableFloat                         LastReviveTargetExpiration;
	class FName                                   ReviveTargetKeyName;
	class FName                                   ReviveLastTargetKeyName;
	class UFortAthenaAIRuntimeParameters_ReviveBehavior* ReviveBehaviorRuntimeParameters;
	class AFortPlayerPawnAthena*                  CurrentReviveTarget;
	TArray<class AFortPlayerPawnAthena*>          DBNOAllyPawns;
	class UFortAthenaAIBotReviveDigestedSkillSet* ReviveSkillSet;
	uint8                                         Pad_1E8[0x10];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortAthenaAIBotEvaluator_Revive">();
	}
	static class UFortAthenaAIBotEvaluator_Revive* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortAthenaAIBotEvaluator_Revive>();
	}
};
static_assert(alignof(UFortAthenaAIBotEvaluator_Revive) == 0x000008, "Wrong alignment on UFortAthenaAIBotEvaluator_Revive");
static_assert(sizeof(UFortAthenaAIBotEvaluator_Revive) == 0x0001F8, "Wrong size on UFortAthenaAIBotEvaluator_Revive");
static_assert(offsetof(UFortAthenaAIBotEvaluator_Revive, LastReviveTargetExpiration) == 0x000190, "Member 'UFortAthenaAIBotEvaluator_Revive::LastReviveTargetExpiration' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotEvaluator_Revive, ReviveTargetKeyName) == 0x0001B8, "Member 'UFortAthenaAIBotEvaluator_Revive::ReviveTargetKeyName' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotEvaluator_Revive, ReviveLastTargetKeyName) == 0x0001BC, "Member 'UFortAthenaAIBotEvaluator_Revive::ReviveLastTargetKeyName' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotEvaluator_Revive, ReviveBehaviorRuntimeParameters) == 0x0001C0, "Member 'UFortAthenaAIBotEvaluator_Revive::ReviveBehaviorRuntimeParameters' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotEvaluator_Revive, CurrentReviveTarget) == 0x0001C8, "Member 'UFortAthenaAIBotEvaluator_Revive::CurrentReviveTarget' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotEvaluator_Revive, DBNOAllyPawns) == 0x0001D0, "Member 'UFortAthenaAIBotEvaluator_Revive::DBNOAllyPawns' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotEvaluator_Revive, ReviveSkillSet) == 0x0001E0, "Member 'UFortAthenaAIBotEvaluator_Revive::ReviveSkillSet' has a wrong offset!");

class UFortQueryGenerator_AssignmentGoal final : public UEnvQueryGenerator
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortQueryGenerator_AssignmentGoal">();
	}
	static class UFortQueryGenerator_AssignmentGoal* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortQueryGenerator_AssignmentGoal>();
	}
};
static_assert(alignof(UFortQueryGenerator_AssignmentGoal) == 0x000008, "Wrong alignment on UFortQueryGenerator_AssignmentGoal");
static_assert(sizeof(UFortQueryGenerator_AssignmentGoal) == 0x000050, "Wrong size on UFortQueryGenerator_AssignmentGoal");

class UFortQueryGenerator_BuildingRifts final : public UEnvQueryGenerator
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortQueryGenerator_BuildingRifts">();
	}
	static class UFortQueryGenerator_BuildingRifts* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortQueryGenerator_BuildingRifts>();
	}
};
static_assert(alignof(UFortQueryGenerator_BuildingRifts) == 0x000008, "Wrong alignment on UFortQueryGenerator_BuildingRifts");
static_assert(sizeof(UFortQueryGenerator_BuildingRifts) == 0x000050, "Wrong size on UFortQueryGenerator_BuildingRifts");

class UFortAthenaBTTask_MoveTo : public UBTTask_MoveTo
{
public:
	class FName                                   MovementResultKeyName;
	class FName                                   ExecutionStatusKeyName;
	uint8                                         Pad_B8[0x8];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortAthenaBTTask_MoveTo">();
	}
	static class UFortAthenaBTTask_MoveTo* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortAthenaBTTask_MoveTo>();
	}
};
static_assert(alignof(UFortAthenaBTTask_MoveTo) == 0x000008, "Wrong alignment on UFortAthenaBTTask_MoveTo");
static_assert(sizeof(UFortAthenaBTTask_MoveTo) == 0x0000C0, "Wrong size on UFortAthenaBTTask_MoveTo");
static_assert(offsetof(UFortAthenaBTTask_MoveTo, MovementResultKeyName) == 0x0000B0, "Member 'UFortAthenaBTTask_MoveTo::MovementResultKeyName' has a wrong offset!");
static_assert(offsetof(UFortAthenaBTTask_MoveTo, ExecutionStatusKeyName) == 0x0000B4, "Member 'UFortAthenaBTTask_MoveTo::ExecutionStatusKeyName' has a wrong offset!");

class UFortQueryGenerator_Buildings final : public UEnvQueryGenerator
{
public:
	struct FFortAIAssignmentIdentifier            AssignmentIdentifier;
	class UFortAIAssignmentSettings*              AssignmentSettings;
	TSubclassOf<class UEnvQueryContext>           BuildingGridVolumeCenter;
	struct FAIDataProviderIntValue                HorizontalBuildingCellRadius;
	struct FAIDataProviderIntValue                BuildingCellsAbove;
	struct FAIDataProviderIntValue                BuildingCellsBelow;
	struct FAIDataProviderBoolValue               bIncludeWalls;
	struct FAIDataProviderBoolValue               bIncludeFloors;
	struct FAIDataProviderBoolValue               bIncludeCenterCell;
	struct FAIDataProviderIntValue                MaxBuildingActorsPerVolumeCenterToCollect;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortQueryGenerator_Buildings">();
	}
	static class UFortQueryGenerator_Buildings* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortQueryGenerator_Buildings>();
	}
};
static_assert(alignof(UFortQueryGenerator_Buildings) == 0x000008, "Wrong alignment on UFortQueryGenerator_Buildings");
static_assert(sizeof(UFortQueryGenerator_Buildings) == 0x000218, "Wrong size on UFortQueryGenerator_Buildings");
static_assert(offsetof(UFortQueryGenerator_Buildings, AssignmentIdentifier) == 0x000050, "Member 'UFortQueryGenerator_Buildings::AssignmentIdentifier' has a wrong offset!");
static_assert(offsetof(UFortQueryGenerator_Buildings, AssignmentSettings) == 0x000080, "Member 'UFortQueryGenerator_Buildings::AssignmentSettings' has a wrong offset!");
static_assert(offsetof(UFortQueryGenerator_Buildings, BuildingGridVolumeCenter) == 0x000088, "Member 'UFortQueryGenerator_Buildings::BuildingGridVolumeCenter' has a wrong offset!");
static_assert(offsetof(UFortQueryGenerator_Buildings, HorizontalBuildingCellRadius) == 0x000090, "Member 'UFortQueryGenerator_Buildings::HorizontalBuildingCellRadius' has a wrong offset!");
static_assert(offsetof(UFortQueryGenerator_Buildings, BuildingCellsAbove) == 0x0000C8, "Member 'UFortQueryGenerator_Buildings::BuildingCellsAbove' has a wrong offset!");
static_assert(offsetof(UFortQueryGenerator_Buildings, BuildingCellsBelow) == 0x000100, "Member 'UFortQueryGenerator_Buildings::BuildingCellsBelow' has a wrong offset!");
static_assert(offsetof(UFortQueryGenerator_Buildings, bIncludeWalls) == 0x000138, "Member 'UFortQueryGenerator_Buildings::bIncludeWalls' has a wrong offset!");
static_assert(offsetof(UFortQueryGenerator_Buildings, bIncludeFloors) == 0x000170, "Member 'UFortQueryGenerator_Buildings::bIncludeFloors' has a wrong offset!");
static_assert(offsetof(UFortQueryGenerator_Buildings, bIncludeCenterCell) == 0x0001A8, "Member 'UFortQueryGenerator_Buildings::bIncludeCenterCell' has a wrong offset!");
static_assert(offsetof(UFortQueryGenerator_Buildings, MaxBuildingActorsPerVolumeCenterToCollect) == 0x0001E0, "Member 'UFortQueryGenerator_Buildings::MaxBuildingActorsPerVolumeCenterToCollect' has a wrong offset!");

class UFortQueryGenerator_BuildingsOnCachedPath final : public UEnvQueryGenerator
{
public:
	TSubclassOf<class UEnvQueryContext>           CachedPathSource;
	struct FAIDataProviderBoolValue               bIncludeWalls;
	struct FAIDataProviderBoolValue               bIncludeFloors;
	struct FAIDataProviderBoolValue               bIncludeCenterCell;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortQueryGenerator_BuildingsOnCachedPath">();
	}
	static class UFortQueryGenerator_BuildingsOnCachedPath* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortQueryGenerator_BuildingsOnCachedPath>();
	}
};
static_assert(alignof(UFortQueryGenerator_BuildingsOnCachedPath) == 0x000008, "Wrong alignment on UFortQueryGenerator_BuildingsOnCachedPath");
static_assert(sizeof(UFortQueryGenerator_BuildingsOnCachedPath) == 0x000100, "Wrong size on UFortQueryGenerator_BuildingsOnCachedPath");
static_assert(offsetof(UFortQueryGenerator_BuildingsOnCachedPath, CachedPathSource) == 0x000050, "Member 'UFortQueryGenerator_BuildingsOnCachedPath::CachedPathSource' has a wrong offset!");
static_assert(offsetof(UFortQueryGenerator_BuildingsOnCachedPath, bIncludeWalls) == 0x000058, "Member 'UFortQueryGenerator_BuildingsOnCachedPath::bIncludeWalls' has a wrong offset!");
static_assert(offsetof(UFortQueryGenerator_BuildingsOnCachedPath, bIncludeFloors) == 0x000090, "Member 'UFortQueryGenerator_BuildingsOnCachedPath::bIncludeFloors' has a wrong offset!");
static_assert(offsetof(UFortQueryGenerator_BuildingsOnCachedPath, bIncludeCenterCell) == 0x0000C8, "Member 'UFortQueryGenerator_BuildingsOnCachedPath::bIncludeCenterCell' has a wrong offset!");

class UFortAthenaBTDecorator_BehaviorControls final : public UBTDecorator
{
public:
	EBehaviorTreeBranches                         BehaviorTreeBranch;
	uint8                                         Pad_69[0x7];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortAthenaBTDecorator_BehaviorControls">();
	}
	static class UFortAthenaBTDecorator_BehaviorControls* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortAthenaBTDecorator_BehaviorControls>();
	}
};
static_assert(alignof(UFortAthenaBTDecorator_BehaviorControls) == 0x000008, "Wrong alignment on UFortAthenaBTDecorator_BehaviorControls");
static_assert(sizeof(UFortAthenaBTDecorator_BehaviorControls) == 0x000070, "Wrong size on UFortAthenaBTDecorator_BehaviorControls");
static_assert(offsetof(UFortAthenaBTDecorator_BehaviorControls, BehaviorTreeBranch) == 0x000068, "Member 'UFortAthenaBTDecorator_BehaviorControls::BehaviorTreeBranch' has a wrong offset!");

class UFortQueryGenerator_EncounterTargets final : public UEnvQueryGenerator
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortQueryGenerator_EncounterTargets">();
	}
	static class UFortQueryGenerator_EncounterTargets* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortQueryGenerator_EncounterTargets>();
	}
};
static_assert(alignof(UFortQueryGenerator_EncounterTargets) == 0x000008, "Wrong alignment on UFortQueryGenerator_EncounterTargets");
static_assert(sizeof(UFortQueryGenerator_EncounterTargets) == 0x000050, "Wrong size on UFortQueryGenerator_EncounterTargets");

class UFortQueryGenerator_Enemies final : public UEnvQueryGenerator
{
public:
	bool                                          bPerceivedEnemiesOnly;
	bool                                          bSleepCapableAIUsePerceivedEnemiesOnly;
	bool                                          bIgnoreDBNOPawns;
	bool                                          bIgnoreSleepingAIs;
	bool                                          bAddEnemiesFromAbilityRange;
	uint8                                         Pad_55[0x3];
	struct FGameplayTagContainer                  AbilityTags;
	struct FGameplayTagContainer                  DistanceTags;
	struct FAIDataProviderFloatValue              MaxTimeSincePerceived;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortQueryGenerator_Enemies">();
	}
	static class UFortQueryGenerator_Enemies* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortQueryGenerator_Enemies>();
	}
};
static_assert(alignof(UFortQueryGenerator_Enemies) == 0x000008, "Wrong alignment on UFortQueryGenerator_Enemies");
static_assert(sizeof(UFortQueryGenerator_Enemies) == 0x0000D0, "Wrong size on UFortQueryGenerator_Enemies");
static_assert(offsetof(UFortQueryGenerator_Enemies, bPerceivedEnemiesOnly) == 0x000050, "Member 'UFortQueryGenerator_Enemies::bPerceivedEnemiesOnly' has a wrong offset!");
static_assert(offsetof(UFortQueryGenerator_Enemies, bSleepCapableAIUsePerceivedEnemiesOnly) == 0x000051, "Member 'UFortQueryGenerator_Enemies::bSleepCapableAIUsePerceivedEnemiesOnly' has a wrong offset!");
static_assert(offsetof(UFortQueryGenerator_Enemies, bIgnoreDBNOPawns) == 0x000052, "Member 'UFortQueryGenerator_Enemies::bIgnoreDBNOPawns' has a wrong offset!");
static_assert(offsetof(UFortQueryGenerator_Enemies, bIgnoreSleepingAIs) == 0x000053, "Member 'UFortQueryGenerator_Enemies::bIgnoreSleepingAIs' has a wrong offset!");
static_assert(offsetof(UFortQueryGenerator_Enemies, bAddEnemiesFromAbilityRange) == 0x000054, "Member 'UFortQueryGenerator_Enemies::bAddEnemiesFromAbilityRange' has a wrong offset!");
static_assert(offsetof(UFortQueryGenerator_Enemies, AbilityTags) == 0x000058, "Member 'UFortQueryGenerator_Enemies::AbilityTags' has a wrong offset!");
static_assert(offsetof(UFortQueryGenerator_Enemies, DistanceTags) == 0x000078, "Member 'UFortQueryGenerator_Enemies::DistanceTags' has a wrong offset!");
static_assert(offsetof(UFortQueryGenerator_Enemies, MaxTimeSincePerceived) == 0x000098, "Member 'UFortQueryGenerator_Enemies::MaxTimeSincePerceived' has a wrong offset!");

class UFortQueryGenerator_GoalActorsOfClass final : public UEnvQueryGenerator
{
public:
	TSubclassOf<class AActor>                     SearchedActorClass;
	struct FAIDataProviderFloatValue              SearchRadius;
	TSubclassOf<class UEnvQueryContext>           SearchCenter;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortQueryGenerator_GoalActorsOfClass">();
	}
	static class UFortQueryGenerator_GoalActorsOfClass* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortQueryGenerator_GoalActorsOfClass>();
	}
};
static_assert(alignof(UFortQueryGenerator_GoalActorsOfClass) == 0x000008, "Wrong alignment on UFortQueryGenerator_GoalActorsOfClass");
static_assert(sizeof(UFortQueryGenerator_GoalActorsOfClass) == 0x000098, "Wrong size on UFortQueryGenerator_GoalActorsOfClass");
static_assert(offsetof(UFortQueryGenerator_GoalActorsOfClass, SearchedActorClass) == 0x000050, "Member 'UFortQueryGenerator_GoalActorsOfClass::SearchedActorClass' has a wrong offset!");
static_assert(offsetof(UFortQueryGenerator_GoalActorsOfClass, SearchRadius) == 0x000058, "Member 'UFortQueryGenerator_GoalActorsOfClass::SearchRadius' has a wrong offset!");
static_assert(offsetof(UFortQueryGenerator_GoalActorsOfClass, SearchCenter) == 0x000090, "Member 'UFortQueryGenerator_GoalActorsOfClass::SearchCenter' has a wrong offset!");

class UFortQueryGenerator_GoalOnCircle final : public UEnvQueryGenerator_OnCircle
{
public:
	bool                                          bIncludeCenterActorInGeneratedGoals;
	uint8                                         Pad_221[0x7];
	class UFortAIAssignmentSettings*              OptionalAssignmentSettings;
	struct FFortAIAssignmentIdentifier            OptionalAssignmentIdentifier;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortQueryGenerator_GoalOnCircle">();
	}
	static class UFortQueryGenerator_GoalOnCircle* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortQueryGenerator_GoalOnCircle>();
	}
};
static_assert(alignof(UFortQueryGenerator_GoalOnCircle) == 0x000008, "Wrong alignment on UFortQueryGenerator_GoalOnCircle");
static_assert(sizeof(UFortQueryGenerator_GoalOnCircle) == 0x000260, "Wrong size on UFortQueryGenerator_GoalOnCircle");
static_assert(offsetof(UFortQueryGenerator_GoalOnCircle, bIncludeCenterActorInGeneratedGoals) == 0x000220, "Member 'UFortQueryGenerator_GoalOnCircle::bIncludeCenterActorInGeneratedGoals' has a wrong offset!");
static_assert(offsetof(UFortQueryGenerator_GoalOnCircle, OptionalAssignmentSettings) == 0x000228, "Member 'UFortQueryGenerator_GoalOnCircle::OptionalAssignmentSettings' has a wrong offset!");
static_assert(offsetof(UFortQueryGenerator_GoalOnCircle, OptionalAssignmentIdentifier) == 0x000230, "Member 'UFortQueryGenerator_GoalOnCircle::OptionalAssignmentIdentifier' has a wrong offset!");

class UFortAthenaPlayMontageStateTreeTask final : public UStateTreeTaskBlueprintBase
{
public:
	class AActor*                                 Actor;
	class UAnimMontage*                           Montage;
	bool                                          bWaitForNotifyEventToEnd;
	uint8                                         Pad_59[0x3];
	class FName                                   NotifyEventNameToEnd;
	bool                                          bSetMovementModeToFlying;
	uint8                                         Pad_61[0x3];
	int32                                         LoopsToRun;
	bool                                          bLoopForever;
	uint8                                         Pad_69[0x3];
	float                                         DelayBetweenLoops;
	float                                         RandomDeviationBetweenLoops;
	bool                                          bStopAnimMontageOnExit;
	uint8                                         Pad_75[0x1B];

public:
	void HandleMontageEnded(const class UAnimMontage* EndedMontage, const bool bInterrupted);
	void HandleNotifyBeginReceived(class FName NotifyName, const struct FBranchingPointNotifyPayload& BranchingPointNotifyPayload);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortAthenaPlayMontageStateTreeTask">();
	}
	static class UFortAthenaPlayMontageStateTreeTask* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortAthenaPlayMontageStateTreeTask>();
	}
};
static_assert(alignof(UFortAthenaPlayMontageStateTreeTask) == 0x000008, "Wrong alignment on UFortAthenaPlayMontageStateTreeTask");
static_assert(sizeof(UFortAthenaPlayMontageStateTreeTask) == 0x000090, "Wrong size on UFortAthenaPlayMontageStateTreeTask");
static_assert(offsetof(UFortAthenaPlayMontageStateTreeTask, Actor) == 0x000048, "Member 'UFortAthenaPlayMontageStateTreeTask::Actor' has a wrong offset!");
static_assert(offsetof(UFortAthenaPlayMontageStateTreeTask, Montage) == 0x000050, "Member 'UFortAthenaPlayMontageStateTreeTask::Montage' has a wrong offset!");
static_assert(offsetof(UFortAthenaPlayMontageStateTreeTask, bWaitForNotifyEventToEnd) == 0x000058, "Member 'UFortAthenaPlayMontageStateTreeTask::bWaitForNotifyEventToEnd' has a wrong offset!");
static_assert(offsetof(UFortAthenaPlayMontageStateTreeTask, NotifyEventNameToEnd) == 0x00005C, "Member 'UFortAthenaPlayMontageStateTreeTask::NotifyEventNameToEnd' has a wrong offset!");
static_assert(offsetof(UFortAthenaPlayMontageStateTreeTask, bSetMovementModeToFlying) == 0x000060, "Member 'UFortAthenaPlayMontageStateTreeTask::bSetMovementModeToFlying' has a wrong offset!");
static_assert(offsetof(UFortAthenaPlayMontageStateTreeTask, LoopsToRun) == 0x000064, "Member 'UFortAthenaPlayMontageStateTreeTask::LoopsToRun' has a wrong offset!");
static_assert(offsetof(UFortAthenaPlayMontageStateTreeTask, bLoopForever) == 0x000068, "Member 'UFortAthenaPlayMontageStateTreeTask::bLoopForever' has a wrong offset!");
static_assert(offsetof(UFortAthenaPlayMontageStateTreeTask, DelayBetweenLoops) == 0x00006C, "Member 'UFortAthenaPlayMontageStateTreeTask::DelayBetweenLoops' has a wrong offset!");
static_assert(offsetof(UFortAthenaPlayMontageStateTreeTask, RandomDeviationBetweenLoops) == 0x000070, "Member 'UFortAthenaPlayMontageStateTreeTask::RandomDeviationBetweenLoops' has a wrong offset!");
static_assert(offsetof(UFortAthenaPlayMontageStateTreeTask, bStopAnimMontageOnExit) == 0x000074, "Member 'UFortAthenaPlayMontageStateTreeTask::bStopAnimMontageOnExit' has a wrong offset!");

class UFortQueryGenerator_GoalPlayerPawns final : public UEnvQueryGenerator
{
public:
	bool                                          bOnlyAthenaGameParticipants;
	uint8                                         Pad_51[0x7];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortQueryGenerator_GoalPlayerPawns">();
	}
	static class UFortQueryGenerator_GoalPlayerPawns* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortQueryGenerator_GoalPlayerPawns>();
	}
};
static_assert(alignof(UFortQueryGenerator_GoalPlayerPawns) == 0x000008, "Wrong alignment on UFortQueryGenerator_GoalPlayerPawns");
static_assert(sizeof(UFortQueryGenerator_GoalPlayerPawns) == 0x000058, "Wrong size on UFortQueryGenerator_GoalPlayerPawns");
static_assert(offsetof(UFortQueryGenerator_GoalPlayerPawns, bOnlyAthenaGameParticipants) == 0x000050, "Member 'UFortQueryGenerator_GoalPlayerPawns::bOnlyAthenaGameParticipants' has a wrong offset!");

class UFortQueryGenerator_GoalTrackableAIObjects final : public UEnvQueryGenerator
{
public:
	struct FFortAIAssignmentIdentifier            AssignmentIdentifier;
	TSubclassOf<class AActor>                     SearchedActorClass;
	struct FGameplayTag                           RequiredTag;
	uint8                                         Pad_8C[0x4];
	struct FAIDataProviderFloatValue              SearchRadius;
	TSubclassOf<class UEnvQueryContext>           SearchCenter;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortQueryGenerator_GoalTrackableAIObjects">();
	}
	static class UFortQueryGenerator_GoalTrackableAIObjects* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortQueryGenerator_GoalTrackableAIObjects>();
	}
};
static_assert(alignof(UFortQueryGenerator_GoalTrackableAIObjects) == 0x000008, "Wrong alignment on UFortQueryGenerator_GoalTrackableAIObjects");
static_assert(sizeof(UFortQueryGenerator_GoalTrackableAIObjects) == 0x0000D0, "Wrong size on UFortQueryGenerator_GoalTrackableAIObjects");
static_assert(offsetof(UFortQueryGenerator_GoalTrackableAIObjects, AssignmentIdentifier) == 0x000050, "Member 'UFortQueryGenerator_GoalTrackableAIObjects::AssignmentIdentifier' has a wrong offset!");
static_assert(offsetof(UFortQueryGenerator_GoalTrackableAIObjects, SearchedActorClass) == 0x000080, "Member 'UFortQueryGenerator_GoalTrackableAIObjects::SearchedActorClass' has a wrong offset!");
static_assert(offsetof(UFortQueryGenerator_GoalTrackableAIObjects, RequiredTag) == 0x000088, "Member 'UFortQueryGenerator_GoalTrackableAIObjects::RequiredTag' has a wrong offset!");
static_assert(offsetof(UFortQueryGenerator_GoalTrackableAIObjects, SearchRadius) == 0x000090, "Member 'UFortQueryGenerator_GoalTrackableAIObjects::SearchRadius' has a wrong offset!");
static_assert(offsetof(UFortQueryGenerator_GoalTrackableAIObjects, SearchCenter) == 0x0000C8, "Member 'UFortQueryGenerator_GoalTrackableAIObjects::SearchCenter' has a wrong offset!");

class UFortAthenaBTService_SetBlackboardBool final : public UBTService
{
public:
	struct FBlackboardKeySelector                 BlackboardKey;
	bool                                          bBlackboardValue;
	EBTSetBlackboardBoolExitActions               ExitAction;
	uint8                                         Pad_9A[0x6];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortAthenaBTService_SetBlackboardBool">();
	}
	static class UFortAthenaBTService_SetBlackboardBool* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortAthenaBTService_SetBlackboardBool>();
	}
};
static_assert(alignof(UFortAthenaBTService_SetBlackboardBool) == 0x000008, "Wrong alignment on UFortAthenaBTService_SetBlackboardBool");
static_assert(sizeof(UFortAthenaBTService_SetBlackboardBool) == 0x0000A0, "Wrong size on UFortAthenaBTService_SetBlackboardBool");
static_assert(offsetof(UFortAthenaBTService_SetBlackboardBool, BlackboardKey) == 0x000070, "Member 'UFortAthenaBTService_SetBlackboardBool::BlackboardKey' has a wrong offset!");
static_assert(offsetof(UFortAthenaBTService_SetBlackboardBool, bBlackboardValue) == 0x000098, "Member 'UFortAthenaBTService_SetBlackboardBool::bBlackboardValue' has a wrong offset!");
static_assert(offsetof(UFortAthenaBTService_SetBlackboardBool, ExitAction) == 0x000099, "Member 'UFortAthenaBTService_SetBlackboardBool::ExitAction' has a wrong offset!");

class UFortQueryGenerator_HotspotSlots final : public UEnvQueryGenerator
{
public:
	TSubclassOf<class UEnvQueryContext>           GenerateAround;
	struct FAIDataProviderFloatValue              Radius;
	uint8                                         bUseTetherZone : 1;
	uint8                                         Pad_91[0x7];
	TSubclassOf<class AFortAIHotSpot>             HotspotClass;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortQueryGenerator_HotspotSlots">();
	}
	static class UFortQueryGenerator_HotspotSlots* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortQueryGenerator_HotspotSlots>();
	}
};
static_assert(alignof(UFortQueryGenerator_HotspotSlots) == 0x000008, "Wrong alignment on UFortQueryGenerator_HotspotSlots");
static_assert(sizeof(UFortQueryGenerator_HotspotSlots) == 0x0000A0, "Wrong size on UFortQueryGenerator_HotspotSlots");
static_assert(offsetof(UFortQueryGenerator_HotspotSlots, GenerateAround) == 0x000050, "Member 'UFortQueryGenerator_HotspotSlots::GenerateAround' has a wrong offset!");
static_assert(offsetof(UFortQueryGenerator_HotspotSlots, Radius) == 0x000058, "Member 'UFortQueryGenerator_HotspotSlots::Radius' has a wrong offset!");
static_assert(offsetof(UFortQueryGenerator_HotspotSlots, HotspotClass) == 0x000098, "Member 'UFortQueryGenerator_HotspotSlots::HotspotClass' has a wrong offset!");

class UFortQueryGenerator_InfluenceMapPoints final : public UEnvQueryGenerator_ProjectedPoints
{
public:
	struct FAIDataProviderIntValue                Density;
	uint8                                         bOnlyFlatSurface : 1;
	uint8                                         Pad_C1[0x7];
	TSubclassOf<class UEnvQueryContext>           GenerateAround;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortQueryGenerator_InfluenceMapPoints">();
	}
	static class UFortQueryGenerator_InfluenceMapPoints* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortQueryGenerator_InfluenceMapPoints>();
	}
};
static_assert(alignof(UFortQueryGenerator_InfluenceMapPoints) == 0x000008, "Wrong alignment on UFortQueryGenerator_InfluenceMapPoints");
static_assert(sizeof(UFortQueryGenerator_InfluenceMapPoints) == 0x0000D0, "Wrong size on UFortQueryGenerator_InfluenceMapPoints");
static_assert(offsetof(UFortQueryGenerator_InfluenceMapPoints, Density) == 0x000088, "Member 'UFortQueryGenerator_InfluenceMapPoints::Density' has a wrong offset!");
static_assert(offsetof(UFortQueryGenerator_InfluenceMapPoints, GenerateAround) == 0x0000C8, "Member 'UFortQueryGenerator_InfluenceMapPoints::GenerateAround' has a wrong offset!");

class UFortQueryTest_ProjectOnNavMesh final : public UEnvQueryTest
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortQueryTest_ProjectOnNavMesh">();
	}
	static class UFortQueryTest_ProjectOnNavMesh* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortQueryTest_ProjectOnNavMesh>();
	}
};
static_assert(alignof(UFortQueryTest_ProjectOnNavMesh) == 0x000008, "Wrong alignment on UFortQueryTest_ProjectOnNavMesh");
static_assert(sizeof(UFortQueryTest_ProjectOnNavMesh) == 0x0001F8, "Wrong size on UFortQueryTest_ProjectOnNavMesh");

class UFortQueryGenerator_LootGoalsAthena final : public UEnvQueryGenerator
{
public:
	struct FFortAIAssignmentIdentifier            AssignmentIdentifier;
	class UFortAIAssignmentSettings*              AssignmentSettings;
	struct FAIDataProviderFloatValue              HorizontalHalfExtents;
	struct FAIDataProviderFloatValue              VerticalHalfExtents;
	TSubclassOf<class UEnvQueryContext>           SearchCenter;
	uint8                                         bAvailableLootOnly : 1;
	uint8                                         Pad_101[0x7];
	struct FGameplayTagContainer                  ExcludedAILootGameplayTags;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortQueryGenerator_LootGoalsAthena">();
	}
	static class UFortQueryGenerator_LootGoalsAthena* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortQueryGenerator_LootGoalsAthena>();
	}
};
static_assert(alignof(UFortQueryGenerator_LootGoalsAthena) == 0x000008, "Wrong alignment on UFortQueryGenerator_LootGoalsAthena");
static_assert(sizeof(UFortQueryGenerator_LootGoalsAthena) == 0x000128, "Wrong size on UFortQueryGenerator_LootGoalsAthena");
static_assert(offsetof(UFortQueryGenerator_LootGoalsAthena, AssignmentIdentifier) == 0x000050, "Member 'UFortQueryGenerator_LootGoalsAthena::AssignmentIdentifier' has a wrong offset!");
static_assert(offsetof(UFortQueryGenerator_LootGoalsAthena, AssignmentSettings) == 0x000080, "Member 'UFortQueryGenerator_LootGoalsAthena::AssignmentSettings' has a wrong offset!");
static_assert(offsetof(UFortQueryGenerator_LootGoalsAthena, HorizontalHalfExtents) == 0x000088, "Member 'UFortQueryGenerator_LootGoalsAthena::HorizontalHalfExtents' has a wrong offset!");
static_assert(offsetof(UFortQueryGenerator_LootGoalsAthena, VerticalHalfExtents) == 0x0000C0, "Member 'UFortQueryGenerator_LootGoalsAthena::VerticalHalfExtents' has a wrong offset!");
static_assert(offsetof(UFortQueryGenerator_LootGoalsAthena, SearchCenter) == 0x0000F8, "Member 'UFortQueryGenerator_LootGoalsAthena::SearchCenter' has a wrong offset!");
static_assert(offsetof(UFortQueryGenerator_LootGoalsAthena, ExcludedAILootGameplayTags) == 0x000108, "Member 'UFortQueryGenerator_LootGoalsAthena::ExcludedAILootGameplayTags' has a wrong offset!");

class UFortQueryGenerator_MissionPlacementActors final : public UEnvQueryGenerator
{
public:
	struct FGameplayTagQuery                      MissionPlacementActorTagQuery;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortQueryGenerator_MissionPlacementActors">();
	}
	static class UFortQueryGenerator_MissionPlacementActors* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortQueryGenerator_MissionPlacementActors>();
	}
};
static_assert(alignof(UFortQueryGenerator_MissionPlacementActors) == 0x000008, "Wrong alignment on UFortQueryGenerator_MissionPlacementActors");
static_assert(sizeof(UFortQueryGenerator_MissionPlacementActors) == 0x000098, "Wrong size on UFortQueryGenerator_MissionPlacementActors");
static_assert(offsetof(UFortQueryGenerator_MissionPlacementActors, MissionPlacementActorTagQuery) == 0x000050, "Member 'UFortQueryGenerator_MissionPlacementActors::MissionPlacementActorTagQuery' has a wrong offset!");

class UFortAthenaBTContext_SuppressAutomaticAttackCheck final : public UFortBTService_ContextOverride
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortAthenaBTContext_SuppressAutomaticAttackCheck">();
	}
	static class UFortAthenaBTContext_SuppressAutomaticAttackCheck* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortAthenaBTContext_SuppressAutomaticAttackCheck>();
	}
};
static_assert(alignof(UFortAthenaBTContext_SuppressAutomaticAttackCheck) == 0x000008, "Wrong alignment on UFortAthenaBTContext_SuppressAutomaticAttackCheck");
static_assert(sizeof(UFortAthenaBTContext_SuppressAutomaticAttackCheck) == 0x000070, "Wrong size on UFortAthenaBTContext_SuppressAutomaticAttackCheck");

class UFortQueryGenerator_MutatorActorQueryResults final : public UEnvQueryGenerator
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortQueryGenerator_MutatorActorQueryResults">();
	}
	static class UFortQueryGenerator_MutatorActorQueryResults* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortQueryGenerator_MutatorActorQueryResults>();
	}
};
static_assert(alignof(UFortQueryGenerator_MutatorActorQueryResults) == 0x000008, "Wrong alignment on UFortQueryGenerator_MutatorActorQueryResults");
static_assert(sizeof(UFortQueryGenerator_MutatorActorQueryResults) == 0x000050, "Wrong size on UFortQueryGenerator_MutatorActorQueryResults");

class UFortQueryGenerator_MutatorBaseQueryResults final : public UEnvQueryGenerator
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortQueryGenerator_MutatorBaseQueryResults">();
	}
	static class UFortQueryGenerator_MutatorBaseQueryResults* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortQueryGenerator_MutatorBaseQueryResults>();
	}
};
static_assert(alignof(UFortQueryGenerator_MutatorBaseQueryResults) == 0x000008, "Wrong alignment on UFortQueryGenerator_MutatorBaseQueryResults");
static_assert(sizeof(UFortQueryGenerator_MutatorBaseQueryResults) == 0x000050, "Wrong size on UFortQueryGenerator_MutatorBaseQueryResults");

class UFortAthenaAIBotEvaluator_Warmup final : public UFortAthenaAIBotEvaluator
{
public:
	class FName                                   WarmupPlayEmoteExecutionStatusKeyName;
	class FName                                   WarmupLootAndShootExecutionStatusKeyName;
	class FName                                   WarmupIdleExecutionStatusKeyName;
	uint8                                         Pad_9C[0xC];
	class UFortAthenaAIBotWarmupDigestedSkillSet* CacheWarmupDigestedSkillSet;
	uint8                                         Pad_B0[0x10];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortAthenaAIBotEvaluator_Warmup">();
	}
	static class UFortAthenaAIBotEvaluator_Warmup* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortAthenaAIBotEvaluator_Warmup>();
	}
};
static_assert(alignof(UFortAthenaAIBotEvaluator_Warmup) == 0x000008, "Wrong alignment on UFortAthenaAIBotEvaluator_Warmup");
static_assert(sizeof(UFortAthenaAIBotEvaluator_Warmup) == 0x0000C0, "Wrong size on UFortAthenaAIBotEvaluator_Warmup");
static_assert(offsetof(UFortAthenaAIBotEvaluator_Warmup, WarmupPlayEmoteExecutionStatusKeyName) == 0x000090, "Member 'UFortAthenaAIBotEvaluator_Warmup::WarmupPlayEmoteExecutionStatusKeyName' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotEvaluator_Warmup, WarmupLootAndShootExecutionStatusKeyName) == 0x000094, "Member 'UFortAthenaAIBotEvaluator_Warmup::WarmupLootAndShootExecutionStatusKeyName' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotEvaluator_Warmup, WarmupIdleExecutionStatusKeyName) == 0x000098, "Member 'UFortAthenaAIBotEvaluator_Warmup::WarmupIdleExecutionStatusKeyName' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotEvaluator_Warmup, CacheWarmupDigestedSkillSet) == 0x0000A8, "Member 'UFortAthenaAIBotEvaluator_Warmup::CacheWarmupDigestedSkillSet' has a wrong offset!");

class UFortQueryGenerator_PerceivedActors final : public UEnvQueryGenerator
{
public:
	bool                                          bGenerateHostileActorGoal;
	uint8                                         Pad_51[0x7];
	struct FFortQueryGenerator_PerceivedActors_Settings HostileActorSettings;
	bool                                          bGenerateNeutralActorGoal;
	uint8                                         Pad_99[0x7];
	struct FFortQueryGenerator_PerceivedActors_Settings NeutralActorSettings;
	bool                                          bGenerateFriendlyActorGoal;
	uint8                                         Pad_E1[0x7];
	struct FFortQueryGenerator_PerceivedActors_Settings FriendlyActorSettings;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortQueryGenerator_PerceivedActors">();
	}
	static class UFortQueryGenerator_PerceivedActors* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortQueryGenerator_PerceivedActors>();
	}
};
static_assert(alignof(UFortQueryGenerator_PerceivedActors) == 0x000008, "Wrong alignment on UFortQueryGenerator_PerceivedActors");
static_assert(sizeof(UFortQueryGenerator_PerceivedActors) == 0x000128, "Wrong size on UFortQueryGenerator_PerceivedActors");
static_assert(offsetof(UFortQueryGenerator_PerceivedActors, bGenerateHostileActorGoal) == 0x000050, "Member 'UFortQueryGenerator_PerceivedActors::bGenerateHostileActorGoal' has a wrong offset!");
static_assert(offsetof(UFortQueryGenerator_PerceivedActors, HostileActorSettings) == 0x000058, "Member 'UFortQueryGenerator_PerceivedActors::HostileActorSettings' has a wrong offset!");
static_assert(offsetof(UFortQueryGenerator_PerceivedActors, bGenerateNeutralActorGoal) == 0x000098, "Member 'UFortQueryGenerator_PerceivedActors::bGenerateNeutralActorGoal' has a wrong offset!");
static_assert(offsetof(UFortQueryGenerator_PerceivedActors, NeutralActorSettings) == 0x0000A0, "Member 'UFortQueryGenerator_PerceivedActors::NeutralActorSettings' has a wrong offset!");
static_assert(offsetof(UFortQueryGenerator_PerceivedActors, bGenerateFriendlyActorGoal) == 0x0000E0, "Member 'UFortQueryGenerator_PerceivedActors::bGenerateFriendlyActorGoal' has a wrong offset!");
static_assert(offsetof(UFortQueryGenerator_PerceivedActors, FriendlyActorSettings) == 0x0000E8, "Member 'UFortQueryGenerator_PerceivedActors::FriendlyActorSettings' has a wrong offset!");

class UFortQueryGenerator_PointsAroundLine final : public UEnvQueryGenerator_ProjectedPoints
{
public:
	TSubclassOf<class UEnvQueryContext>           GenerateAround;
	struct FAIDataProviderIntValue                MaxPointsPerClusterLocation;
	struct FAIDataProviderFloatValue              ClusterRadius;
	TSoftObjectPtr<class UFortQueryData_CurvesAroundLine> CurvesAroundLineAsset;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortQueryGenerator_PointsAroundLine">();
	}
	static class UFortQueryGenerator_PointsAroundLine* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortQueryGenerator_PointsAroundLine>();
	}
};
static_assert(alignof(UFortQueryGenerator_PointsAroundLine) == 0x000008, "Wrong alignment on UFortQueryGenerator_PointsAroundLine");
static_assert(sizeof(UFortQueryGenerator_PointsAroundLine) == 0x000128, "Wrong size on UFortQueryGenerator_PointsAroundLine");
static_assert(offsetof(UFortQueryGenerator_PointsAroundLine, GenerateAround) == 0x000088, "Member 'UFortQueryGenerator_PointsAroundLine::GenerateAround' has a wrong offset!");
static_assert(offsetof(UFortQueryGenerator_PointsAroundLine, MaxPointsPerClusterLocation) == 0x000090, "Member 'UFortQueryGenerator_PointsAroundLine::MaxPointsPerClusterLocation' has a wrong offset!");
static_assert(offsetof(UFortQueryGenerator_PointsAroundLine, ClusterRadius) == 0x0000C8, "Member 'UFortQueryGenerator_PointsAroundLine::ClusterRadius' has a wrong offset!");
static_assert(offsetof(UFortQueryGenerator_PointsAroundLine, CurvesAroundLineAsset) == 0x000100, "Member 'UFortQueryGenerator_PointsAroundLine::CurvesAroundLineAsset' has a wrong offset!");

class UFortAthenaBTTask_SetAggressiveDriving final : public UBTTaskNode
{
public:
	bool                                          bAggressiveDriving;
	uint8                                         Pad_71[0x7];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortAthenaBTTask_SetAggressiveDriving">();
	}
	static class UFortAthenaBTTask_SetAggressiveDriving* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortAthenaBTTask_SetAggressiveDriving>();
	}
};
static_assert(alignof(UFortAthenaBTTask_SetAggressiveDriving) == 0x000008, "Wrong alignment on UFortAthenaBTTask_SetAggressiveDriving");
static_assert(sizeof(UFortAthenaBTTask_SetAggressiveDriving) == 0x000078, "Wrong size on UFortAthenaBTTask_SetAggressiveDriving");
static_assert(offsetof(UFortAthenaBTTask_SetAggressiveDriving, bAggressiveDriving) == 0x000070, "Member 'UFortAthenaBTTask_SetAggressiveDriving::bAggressiveDriving' has a wrong offset!");

class UFortQueryGenerator_PointsFromNavGraph final : public UEnvQueryGenerator_ProjectedPoints
{
public:
	struct FAIDataProviderFloatValue              MinPathDistance;
	struct FAIDataProviderFloatValue              MaxPathDistance;
	struct FAIDataProviderIntValue                Density;
	struct FAIDataProviderFloatValue              ExploreDirectionYaw;
	struct FEnvDirection                          ExploreDirection;
	float                                         ExploreAngleDot;
	uint8                                         Pad_18C[0x4];
	struct FAIDataProviderFloatValue              ExploreInnerRadius;
	uint8                                         bLimitExplorationDirection : 1;
	uint8                                         bOnlyFlatSurface : 1;
	uint8                                         bUseParameterizedDirection : 1;
	uint8                                         bUseHeightCheck : 1;
	uint8                                         bFilterAllowTerrain : 1;
	uint8                                         bFilterAllowBuildings : 1;
	uint8                                         bFilterAllowDropdown : 1;
	uint8                                         bFilterAllowClimbup : 1;
	uint8                                         bFilterAllowSmash : 1;
	uint8                                         Pad_1CA[0x2];
	EFortPointsFromNavGraphGoalPathDistanceFilterOperator PathDistanceFilterOperator;
	uint8                                         Pad_1CD[0x3];
	TSubclassOf<class UEnvQueryContext>           GenerateAround;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortQueryGenerator_PointsFromNavGraph">();
	}
	static class UFortQueryGenerator_PointsFromNavGraph* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortQueryGenerator_PointsFromNavGraph>();
	}
};
static_assert(alignof(UFortQueryGenerator_PointsFromNavGraph) == 0x000008, "Wrong alignment on UFortQueryGenerator_PointsFromNavGraph");
static_assert(sizeof(UFortQueryGenerator_PointsFromNavGraph) == 0x0001D8, "Wrong size on UFortQueryGenerator_PointsFromNavGraph");
static_assert(offsetof(UFortQueryGenerator_PointsFromNavGraph, MinPathDistance) == 0x000088, "Member 'UFortQueryGenerator_PointsFromNavGraph::MinPathDistance' has a wrong offset!");
static_assert(offsetof(UFortQueryGenerator_PointsFromNavGraph, MaxPathDistance) == 0x0000C0, "Member 'UFortQueryGenerator_PointsFromNavGraph::MaxPathDistance' has a wrong offset!");
static_assert(offsetof(UFortQueryGenerator_PointsFromNavGraph, Density) == 0x0000F8, "Member 'UFortQueryGenerator_PointsFromNavGraph::Density' has a wrong offset!");
static_assert(offsetof(UFortQueryGenerator_PointsFromNavGraph, ExploreDirectionYaw) == 0x000130, "Member 'UFortQueryGenerator_PointsFromNavGraph::ExploreDirectionYaw' has a wrong offset!");
static_assert(offsetof(UFortQueryGenerator_PointsFromNavGraph, ExploreDirection) == 0x000168, "Member 'UFortQueryGenerator_PointsFromNavGraph::ExploreDirection' has a wrong offset!");
static_assert(offsetof(UFortQueryGenerator_PointsFromNavGraph, ExploreAngleDot) == 0x000188, "Member 'UFortQueryGenerator_PointsFromNavGraph::ExploreAngleDot' has a wrong offset!");
static_assert(offsetof(UFortQueryGenerator_PointsFromNavGraph, ExploreInnerRadius) == 0x000190, "Member 'UFortQueryGenerator_PointsFromNavGraph::ExploreInnerRadius' has a wrong offset!");
static_assert(offsetof(UFortQueryGenerator_PointsFromNavGraph, PathDistanceFilterOperator) == 0x0001CC, "Member 'UFortQueryGenerator_PointsFromNavGraph::PathDistanceFilterOperator' has a wrong offset!");
static_assert(offsetof(UFortQueryGenerator_PointsFromNavGraph, GenerateAround) == 0x0001D0, "Member 'UFortQueryGenerator_PointsFromNavGraph::GenerateAround' has a wrong offset!");

class UFortQueryGenerator_PointsInVolume final : public UEnvQueryGenerator
{
public:
	struct FAIDataProviderIntValue                NumberOfPoints;
	EFortNamedNavmesh                             NavMeshToUse;
	uint8                                         Pad_89[0x7];
	TSubclassOf<class UEnvQueryContext>           GenerateIn;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortQueryGenerator_PointsInVolume">();
	}
	static class UFortQueryGenerator_PointsInVolume* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortQueryGenerator_PointsInVolume>();
	}
};
static_assert(alignof(UFortQueryGenerator_PointsInVolume) == 0x000008, "Wrong alignment on UFortQueryGenerator_PointsInVolume");
static_assert(sizeof(UFortQueryGenerator_PointsInVolume) == 0x000098, "Wrong size on UFortQueryGenerator_PointsInVolume");
static_assert(offsetof(UFortQueryGenerator_PointsInVolume, NumberOfPoints) == 0x000050, "Member 'UFortQueryGenerator_PointsInVolume::NumberOfPoints' has a wrong offset!");
static_assert(offsetof(UFortQueryGenerator_PointsInVolume, NavMeshToUse) == 0x000088, "Member 'UFortQueryGenerator_PointsInVolume::NavMeshToUse' has a wrong offset!");
static_assert(offsetof(UFortQueryGenerator_PointsInVolume, GenerateIn) == 0x000090, "Member 'UFortQueryGenerator_PointsInVolume::GenerateIn' has a wrong offset!");

class UFortQueryGenerator_PointsOnBuildingActors final : public UEnvQueryGenerator_ProjectedPoints
{
public:
	struct FAIDataProviderFloatValue              BoundingBoxExtentXY;
	struct FAIDataProviderFloatValue              BoundingBoxExtentZ;
	struct FAIDataProviderFloatValue              PointDensity;
	struct FAIDataProviderIntValue                MaxGeneratedPoints;
	struct FFortTaggedActorOctreeFilter           ActorLookupFilter;
	struct FAIDataProviderFloatValue              RandomChanceToSkip;
	TSubclassOf<class UEnvQueryContext>           GenerateAround;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortQueryGenerator_PointsOnBuildingActors">();
	}
	static class UFortQueryGenerator_PointsOnBuildingActors* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortQueryGenerator_PointsOnBuildingActors>();
	}
};
static_assert(alignof(UFortQueryGenerator_PointsOnBuildingActors) == 0x000008, "Wrong alignment on UFortQueryGenerator_PointsOnBuildingActors");
static_assert(sizeof(UFortQueryGenerator_PointsOnBuildingActors) == 0x000250, "Wrong size on UFortQueryGenerator_PointsOnBuildingActors");
static_assert(offsetof(UFortQueryGenerator_PointsOnBuildingActors, BoundingBoxExtentXY) == 0x000088, "Member 'UFortQueryGenerator_PointsOnBuildingActors::BoundingBoxExtentXY' has a wrong offset!");
static_assert(offsetof(UFortQueryGenerator_PointsOnBuildingActors, BoundingBoxExtentZ) == 0x0000C0, "Member 'UFortQueryGenerator_PointsOnBuildingActors::BoundingBoxExtentZ' has a wrong offset!");
static_assert(offsetof(UFortQueryGenerator_PointsOnBuildingActors, PointDensity) == 0x0000F8, "Member 'UFortQueryGenerator_PointsOnBuildingActors::PointDensity' has a wrong offset!");
static_assert(offsetof(UFortQueryGenerator_PointsOnBuildingActors, MaxGeneratedPoints) == 0x000130, "Member 'UFortQueryGenerator_PointsOnBuildingActors::MaxGeneratedPoints' has a wrong offset!");
static_assert(offsetof(UFortQueryGenerator_PointsOnBuildingActors, ActorLookupFilter) == 0x000168, "Member 'UFortQueryGenerator_PointsOnBuildingActors::ActorLookupFilter' has a wrong offset!");
static_assert(offsetof(UFortQueryGenerator_PointsOnBuildingActors, RandomChanceToSkip) == 0x000210, "Member 'UFortQueryGenerator_PointsOnBuildingActors::RandomChanceToSkip' has a wrong offset!");
static_assert(offsetof(UFortQueryGenerator_PointsOnBuildingActors, GenerateAround) == 0x000248, "Member 'UFortQueryGenerator_PointsOnBuildingActors::GenerateAround' has a wrong offset!");

class UFortQueryGenerator_PointsOnBuildingGrid final : public UEnvQueryGenerator_ProjectedPoints
{
public:
	struct FAIDataProviderIntValue                HorizontalGridSize;
	struct FAIDataProviderIntValue                VerticalGridSize;
	bool                                          bStartGridFromBottom;
	bool                                          bUsePointInVerticalCenterOfCell;
	uint8                                         Pad_FA[0x6];
	TSubclassOf<class UEnvQueryContext>           GenerateAround;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortQueryGenerator_PointsOnBuildingGrid">();
	}
	static class UFortQueryGenerator_PointsOnBuildingGrid* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortQueryGenerator_PointsOnBuildingGrid>();
	}
};
static_assert(alignof(UFortQueryGenerator_PointsOnBuildingGrid) == 0x000008, "Wrong alignment on UFortQueryGenerator_PointsOnBuildingGrid");
static_assert(sizeof(UFortQueryGenerator_PointsOnBuildingGrid) == 0x000108, "Wrong size on UFortQueryGenerator_PointsOnBuildingGrid");
static_assert(offsetof(UFortQueryGenerator_PointsOnBuildingGrid, HorizontalGridSize) == 0x000088, "Member 'UFortQueryGenerator_PointsOnBuildingGrid::HorizontalGridSize' has a wrong offset!");
static_assert(offsetof(UFortQueryGenerator_PointsOnBuildingGrid, VerticalGridSize) == 0x0000C0, "Member 'UFortQueryGenerator_PointsOnBuildingGrid::VerticalGridSize' has a wrong offset!");
static_assert(offsetof(UFortQueryGenerator_PointsOnBuildingGrid, bStartGridFromBottom) == 0x0000F8, "Member 'UFortQueryGenerator_PointsOnBuildingGrid::bStartGridFromBottom' has a wrong offset!");
static_assert(offsetof(UFortQueryGenerator_PointsOnBuildingGrid, bUsePointInVerticalCenterOfCell) == 0x0000F9, "Member 'UFortQueryGenerator_PointsOnBuildingGrid::bUsePointInVerticalCenterOfCell' has a wrong offset!");
static_assert(offsetof(UFortQueryGenerator_PointsOnBuildingGrid, GenerateAround) == 0x000100, "Member 'UFortQueryGenerator_PointsOnBuildingGrid::GenerateAround' has a wrong offset!");

class UFortQueryTest_PointInBuildingFoundation final : public UEnvQueryTest
{
public:
	TSubclassOf<class UEnvQueryContext>           BuildingFoundationContext;
	TSubclassOf<class ABuildingFoundation>        BuildingFoundationClass;
	struct FVector                                BoundingBoxScale;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortQueryTest_PointInBuildingFoundation">();
	}
	static class UFortQueryTest_PointInBuildingFoundation* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortQueryTest_PointInBuildingFoundation>();
	}
};
static_assert(alignof(UFortQueryTest_PointInBuildingFoundation) == 0x000008, "Wrong alignment on UFortQueryTest_PointInBuildingFoundation");
static_assert(sizeof(UFortQueryTest_PointInBuildingFoundation) == 0x000220, "Wrong size on UFortQueryTest_PointInBuildingFoundation");
static_assert(offsetof(UFortQueryTest_PointInBuildingFoundation, BuildingFoundationContext) == 0x0001F8, "Member 'UFortQueryTest_PointInBuildingFoundation::BuildingFoundationContext' has a wrong offset!");
static_assert(offsetof(UFortQueryTest_PointInBuildingFoundation, BuildingFoundationClass) == 0x000200, "Member 'UFortQueryTest_PointInBuildingFoundation::BuildingFoundationClass' has a wrong offset!");
static_assert(offsetof(UFortQueryTest_PointInBuildingFoundation, BoundingBoxScale) == 0x000208, "Member 'UFortQueryTest_PointInBuildingFoundation::BoundingBoxScale' has a wrong offset!");

class UFortQueryGenerator_PointsOnWaterShoreLine final : public UEnvQueryGenerator_ProjectedPoints
{
public:
	TSubclassOf<class UEnvQueryContext>           GenerateAround;
	TSoftObjectPtr<class UFortQueryData_CurvesAroundLine> CurvesAroundLineAsset;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortQueryGenerator_PointsOnWaterShoreLine">();
	}
	static class UFortQueryGenerator_PointsOnWaterShoreLine* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortQueryGenerator_PointsOnWaterShoreLine>();
	}
};
static_assert(alignof(UFortQueryGenerator_PointsOnWaterShoreLine) == 0x000008, "Wrong alignment on UFortQueryGenerator_PointsOnWaterShoreLine");
static_assert(sizeof(UFortQueryGenerator_PointsOnWaterShoreLine) == 0x0000B8, "Wrong size on UFortQueryGenerator_PointsOnWaterShoreLine");
static_assert(offsetof(UFortQueryGenerator_PointsOnWaterShoreLine, GenerateAround) == 0x000088, "Member 'UFortQueryGenerator_PointsOnWaterShoreLine::GenerateAround' has a wrong offset!");
static_assert(offsetof(UFortQueryGenerator_PointsOnWaterShoreLine, CurvesAroundLineAsset) == 0x000090, "Member 'UFortQueryGenerator_PointsOnWaterShoreLine::CurvesAroundLineAsset' has a wrong offset!");

class UFortQueryGenerator_RandomPointsInBoundingVolume final : public UEnvQueryGenerator_ProjectedPoints
{
public:
	TSubclassOf<class UEnvQueryContext>           GenerateIn;
	struct FAIDataProviderFloatValue              RandomPointsCount;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortQueryGenerator_RandomPointsInBoundingVolume">();
	}
	static class UFortQueryGenerator_RandomPointsInBoundingVolume* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortQueryGenerator_RandomPointsInBoundingVolume>();
	}
};
static_assert(alignof(UFortQueryGenerator_RandomPointsInBoundingVolume) == 0x000008, "Wrong alignment on UFortQueryGenerator_RandomPointsInBoundingVolume");
static_assert(sizeof(UFortQueryGenerator_RandomPointsInBoundingVolume) == 0x0000C8, "Wrong size on UFortQueryGenerator_RandomPointsInBoundingVolume");
static_assert(offsetof(UFortQueryGenerator_RandomPointsInBoundingVolume, GenerateIn) == 0x000088, "Member 'UFortQueryGenerator_RandomPointsInBoundingVolume::GenerateIn' has a wrong offset!");
static_assert(offsetof(UFortQueryGenerator_RandomPointsInBoundingVolume, RandomPointsCount) == 0x000090, "Member 'UFortQueryGenerator_RandomPointsInBoundingVolume::RandomPointsCount' has a wrong offset!");

class UFortQueryGenerator_SpecificAssignmentGoals final : public UEnvQueryGenerator
{
public:
	struct FFortAIAssignmentIdentifier            AssignmentIdentifier;
	class UFortAIAssignmentSettings*              AssignmentSettings;
	TSubclassOf<class UFortAIGoalProvider>        GoalProvider;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortQueryGenerator_SpecificAssignmentGoals">();
	}
	static class UFortQueryGenerator_SpecificAssignmentGoals* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortQueryGenerator_SpecificAssignmentGoals>();
	}
};
static_assert(alignof(UFortQueryGenerator_SpecificAssignmentGoals) == 0x000008, "Wrong alignment on UFortQueryGenerator_SpecificAssignmentGoals");
static_assert(sizeof(UFortQueryGenerator_SpecificAssignmentGoals) == 0x000090, "Wrong size on UFortQueryGenerator_SpecificAssignmentGoals");
static_assert(offsetof(UFortQueryGenerator_SpecificAssignmentGoals, AssignmentIdentifier) == 0x000050, "Member 'UFortQueryGenerator_SpecificAssignmentGoals::AssignmentIdentifier' has a wrong offset!");
static_assert(offsetof(UFortQueryGenerator_SpecificAssignmentGoals, AssignmentSettings) == 0x000080, "Member 'UFortQueryGenerator_SpecificAssignmentGoals::AssignmentSettings' has a wrong offset!");
static_assert(offsetof(UFortQueryGenerator_SpecificAssignmentGoals, GoalProvider) == 0x000088, "Member 'UFortQueryGenerator_SpecificAssignmentGoals::GoalProvider' has a wrong offset!");

class UFortQueryGenerator_SquadMembers final : public UEnvQueryGenerator
{
public:
	struct FAIDataProviderBoolValue               LookingForHumanPlayers;
	struct FAIDataProviderBoolValue               LookingForPlayerBots;
	struct FAIDataProviderBoolValue               LookingForNpcs;
	struct FAIDataProviderBoolValue               LookingForAiPawns;
	struct FAIDataProviderBoolValue               IncludeSelf;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortQueryGenerator_SquadMembers">();
	}
	static class UFortQueryGenerator_SquadMembers* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortQueryGenerator_SquadMembers>();
	}
};
static_assert(alignof(UFortQueryGenerator_SquadMembers) == 0x000008, "Wrong alignment on UFortQueryGenerator_SquadMembers");
static_assert(sizeof(UFortQueryGenerator_SquadMembers) == 0x000168, "Wrong size on UFortQueryGenerator_SquadMembers");
static_assert(offsetof(UFortQueryGenerator_SquadMembers, LookingForHumanPlayers) == 0x000050, "Member 'UFortQueryGenerator_SquadMembers::LookingForHumanPlayers' has a wrong offset!");
static_assert(offsetof(UFortQueryGenerator_SquadMembers, LookingForPlayerBots) == 0x000088, "Member 'UFortQueryGenerator_SquadMembers::LookingForPlayerBots' has a wrong offset!");
static_assert(offsetof(UFortQueryGenerator_SquadMembers, LookingForNpcs) == 0x0000C0, "Member 'UFortQueryGenerator_SquadMembers::LookingForNpcs' has a wrong offset!");
static_assert(offsetof(UFortQueryGenerator_SquadMembers, LookingForAiPawns) == 0x0000F8, "Member 'UFortQueryGenerator_SquadMembers::LookingForAiPawns' has a wrong offset!");
static_assert(offsetof(UFortQueryGenerator_SquadMembers, IncludeSelf) == 0x000130, "Member 'UFortQueryGenerator_SquadMembers::IncludeSelf' has a wrong offset!");

class UFortAthenaBTTask_Glide final : public UBTTaskNode
{
public:
	class FName                                   ExecutionStatusKeyName;
	class FName                                   GlideDestinationKeyName;
	uint8                                         Pad_78[0x8];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortAthenaBTTask_Glide">();
	}
	static class UFortAthenaBTTask_Glide* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortAthenaBTTask_Glide>();
	}
};
static_assert(alignof(UFortAthenaBTTask_Glide) == 0x000008, "Wrong alignment on UFortAthenaBTTask_Glide");
static_assert(sizeof(UFortAthenaBTTask_Glide) == 0x000080, "Wrong size on UFortAthenaBTTask_Glide");
static_assert(offsetof(UFortAthenaBTTask_Glide, ExecutionStatusKeyName) == 0x000070, "Member 'UFortAthenaBTTask_Glide::ExecutionStatusKeyName' has a wrong offset!");
static_assert(offsetof(UFortAthenaBTTask_Glide, GlideDestinationKeyName) == 0x000074, "Member 'UFortAthenaBTTask_Glide::GlideDestinationKeyName' has a wrong offset!");

class UFortQueryGenerator_TerrainDonut final : public UEnvQueryGenerator
{
public:
	TSubclassOf<class UEnvQueryContext>           Center;
	struct FAIDataProviderFloatValue              Radius;
	struct FAIDataProviderFloatValue              RadiusWidth;
	struct FAIDataProviderFloatValue              SpacingArc;
	struct FAIDataProviderIntValue                NumRings;
	uint8                                         bFilterAllowTerrain : 1;
	uint8                                         bFilterAllowBuildings : 1;
	uint8                                         Pad_139[0x7];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortQueryGenerator_TerrainDonut">();
	}
	static class UFortQueryGenerator_TerrainDonut* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortQueryGenerator_TerrainDonut>();
	}
};
static_assert(alignof(UFortQueryGenerator_TerrainDonut) == 0x000008, "Wrong alignment on UFortQueryGenerator_TerrainDonut");
static_assert(sizeof(UFortQueryGenerator_TerrainDonut) == 0x000140, "Wrong size on UFortQueryGenerator_TerrainDonut");
static_assert(offsetof(UFortQueryGenerator_TerrainDonut, Center) == 0x000050, "Member 'UFortQueryGenerator_TerrainDonut::Center' has a wrong offset!");
static_assert(offsetof(UFortQueryGenerator_TerrainDonut, Radius) == 0x000058, "Member 'UFortQueryGenerator_TerrainDonut::Radius' has a wrong offset!");
static_assert(offsetof(UFortQueryGenerator_TerrainDonut, RadiusWidth) == 0x000090, "Member 'UFortQueryGenerator_TerrainDonut::RadiusWidth' has a wrong offset!");
static_assert(offsetof(UFortQueryGenerator_TerrainDonut, SpacingArc) == 0x0000C8, "Member 'UFortQueryGenerator_TerrainDonut::SpacingArc' has a wrong offset!");
static_assert(offsetof(UFortQueryGenerator_TerrainDonut, NumRings) == 0x000100, "Member 'UFortQueryGenerator_TerrainDonut::NumRings' has a wrong offset!");

class UFortQueryGenerator_ValidSpawnRiftActors final : public UEnvQueryGenerator
{
public:
	struct FAIDataProviderIntValue                NumAIForGroup;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortQueryGenerator_ValidSpawnRiftActors">();
	}
	static class UFortQueryGenerator_ValidSpawnRiftActors* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortQueryGenerator_ValidSpawnRiftActors>();
	}
};
static_assert(alignof(UFortQueryGenerator_ValidSpawnRiftActors) == 0x000008, "Wrong alignment on UFortQueryGenerator_ValidSpawnRiftActors");
static_assert(sizeof(UFortQueryGenerator_ValidSpawnRiftActors) == 0x000088, "Wrong size on UFortQueryGenerator_ValidSpawnRiftActors");
static_assert(offsetof(UFortQueryGenerator_ValidSpawnRiftActors, NumAIForGroup) == 0x000050, "Member 'UFortQueryGenerator_ValidSpawnRiftActors::NumAIForGroup' has a wrong offset!");

class UFortAthenaBTService_Jump : public UBTService
{
public:
	class FName                                   JumpExecutionStatusName;
	uint8                                         Pad_74[0x4];
	class FName                                   CrouchExecutionStatusName;
	uint8                                         Pad_7C[0x4];
	float                                         JumpInputReleaseDelay;
	uint8                                         Pad_84[0x4];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortAthenaBTService_Jump">();
	}
	static class UFortAthenaBTService_Jump* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortAthenaBTService_Jump>();
	}
};
static_assert(alignof(UFortAthenaBTService_Jump) == 0x000008, "Wrong alignment on UFortAthenaBTService_Jump");
static_assert(sizeof(UFortAthenaBTService_Jump) == 0x000088, "Wrong size on UFortAthenaBTService_Jump");
static_assert(offsetof(UFortAthenaBTService_Jump, JumpExecutionStatusName) == 0x000070, "Member 'UFortAthenaBTService_Jump::JumpExecutionStatusName' has a wrong offset!");
static_assert(offsetof(UFortAthenaBTService_Jump, CrouchExecutionStatusName) == 0x000078, "Member 'UFortAthenaBTService_Jump::CrouchExecutionStatusName' has a wrong offset!");
static_assert(offsetof(UFortAthenaBTService_Jump, JumpInputReleaseDelay) == 0x000080, "Member 'UFortAthenaBTService_Jump::JumpInputReleaseDelay' has a wrong offset!");

class UFortAthenaBTService_JetpackStrafe final : public UFortAthenaBTService_Jump
{
public:
	class FName                                   JetpackStrafeExecutionStatusName;
	uint8                                         Pad_8C[0x4];
	class UFortAthenaAIBotEvasiveManeuversDigestedSkillSet* CacheEMDigestedSkillSet;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortAthenaBTService_JetpackStrafe">();
	}
	static class UFortAthenaBTService_JetpackStrafe* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortAthenaBTService_JetpackStrafe>();
	}
};
static_assert(alignof(UFortAthenaBTService_JetpackStrafe) == 0x000008, "Wrong alignment on UFortAthenaBTService_JetpackStrafe");
static_assert(sizeof(UFortAthenaBTService_JetpackStrafe) == 0x000098, "Wrong size on UFortAthenaBTService_JetpackStrafe");
static_assert(offsetof(UFortAthenaBTService_JetpackStrafe, JetpackStrafeExecutionStatusName) == 0x000088, "Member 'UFortAthenaBTService_JetpackStrafe::JetpackStrafeExecutionStatusName' has a wrong offset!");
static_assert(offsetof(UFortAthenaBTService_JetpackStrafe, CacheEMDigestedSkillSet) == 0x000090, "Member 'UFortAthenaBTService_JetpackStrafe::CacheEMDigestedSkillSet' has a wrong offset!");

class UFortQueryItemType_PointOrSlot final : public UEnvQueryItemType_Point
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortQueryItemType_PointOrSlot">();
	}
	static class UFortQueryItemType_PointOrSlot* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortQueryItemType_PointOrSlot>();
	}
};
static_assert(alignof(UFortQueryItemType_PointOrSlot) == 0x000008, "Wrong alignment on UFortQueryItemType_PointOrSlot");
static_assert(sizeof(UFortQueryItemType_PointOrSlot) == 0x000030, "Wrong size on UFortQueryItemType_PointOrSlot");

class UFortQueryTest_AssignmentTypeInterest final : public UFortQueryTest_GoalBase
{
public:
	struct FAIDataProviderFloatValue              InvalidTypeStartInterest;
	struct FAIDataProviderFloatValue              InvalidTypeEndInterest;
	struct FAIDataProviderFloatValue              InvalidTypeTimeBeforeLerp;
	struct FAIDataProviderFloatValue              InvalidTypeLerpDuration;
	struct FAIDataProviderFloatValue              ValidTypeStartInterest;
	struct FAIDataProviderFloatValue              ValidTypeEndInterest;
	struct FAIDataProviderFloatValue              ValidTypeTimeBeforeLerp;
	struct FAIDataProviderFloatValue              ValidTypeLerpDuration;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortQueryTest_AssignmentTypeInterest">();
	}
	static class UFortQueryTest_AssignmentTypeInterest* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortQueryTest_AssignmentTypeInterest>();
	}
};
static_assert(alignof(UFortQueryTest_AssignmentTypeInterest) == 0x000008, "Wrong alignment on UFortQueryTest_AssignmentTypeInterest");
static_assert(sizeof(UFortQueryTest_AssignmentTypeInterest) == 0x000428, "Wrong size on UFortQueryTest_AssignmentTypeInterest");
static_assert(offsetof(UFortQueryTest_AssignmentTypeInterest, InvalidTypeStartInterest) == 0x000268, "Member 'UFortQueryTest_AssignmentTypeInterest::InvalidTypeStartInterest' has a wrong offset!");
static_assert(offsetof(UFortQueryTest_AssignmentTypeInterest, InvalidTypeEndInterest) == 0x0002A0, "Member 'UFortQueryTest_AssignmentTypeInterest::InvalidTypeEndInterest' has a wrong offset!");
static_assert(offsetof(UFortQueryTest_AssignmentTypeInterest, InvalidTypeTimeBeforeLerp) == 0x0002D8, "Member 'UFortQueryTest_AssignmentTypeInterest::InvalidTypeTimeBeforeLerp' has a wrong offset!");
static_assert(offsetof(UFortQueryTest_AssignmentTypeInterest, InvalidTypeLerpDuration) == 0x000310, "Member 'UFortQueryTest_AssignmentTypeInterest::InvalidTypeLerpDuration' has a wrong offset!");
static_assert(offsetof(UFortQueryTest_AssignmentTypeInterest, ValidTypeStartInterest) == 0x000348, "Member 'UFortQueryTest_AssignmentTypeInterest::ValidTypeStartInterest' has a wrong offset!");
static_assert(offsetof(UFortQueryTest_AssignmentTypeInterest, ValidTypeEndInterest) == 0x000380, "Member 'UFortQueryTest_AssignmentTypeInterest::ValidTypeEndInterest' has a wrong offset!");
static_assert(offsetof(UFortQueryTest_AssignmentTypeInterest, ValidTypeTimeBeforeLerp) == 0x0003B8, "Member 'UFortQueryTest_AssignmentTypeInterest::ValidTypeTimeBeforeLerp' has a wrong offset!");
static_assert(offsetof(UFortQueryTest_AssignmentTypeInterest, ValidTypeLerpDuration) == 0x0003F0, "Member 'UFortQueryTest_AssignmentTypeInterest::ValidTypeLerpDuration' has a wrong offset!");

class UFortQueryTest_BuildingCriteria final : public UFortQueryTest_GoalBase
{
public:
	struct FAIDataProviderFloatValue              ScoreForGroundSupportedFloor;
	struct FAIDataProviderFloatValue              ScoreForBeingGroundSupported;
	struct FAIDataProviderFloatValue              ScoreForTraps;
	struct FAIDataProviderFloatValue              ScoreForWalls;
	struct FAIDataProviderFloatValue              ScoreForNavigableOpening;
	struct FFortAIAssignmentIdentifier            RootAssignmentID;
	struct FAIDataProviderBoolValue               bPreferCloserToRootAssignment;
	struct FAIDataProviderFloatValue              ScoreForDistanceFromClosestRootAssignmentGoal;
	struct FAIDataProviderFloatValue              MinDistanceForDistanceScoring;
	struct FAIDataProviderFloatValue              MaxDistanceForDistanceScoring;
	struct FAIDataProviderFloatValue              MaxHealthScore;
	struct FAIDataProviderBoolValue               bPreferHigherHealth;
	struct FAIDataProviderFloatValue              ClampMaxHealthValue;
	struct FAIDataProviderFloatValue              ClampMinHealthValue;
	struct FAIDataProviderBoolValue               bPreferHigherHealthPercentage;
	struct FAIDataProviderFloatValue              MaxHealthPercentageScore;
	struct FAIDataProviderBoolValue               bWantsBuildingRepairableByOwner;
	struct FAIDataProviderFloatValue              RepairableBuildingScore;
	struct FAIDataProviderFloatValue              NotRepairableBuildingScore;
	struct FAIDataProviderFloatValue              NeedsRepairBuildingScore;
	struct FAIDataProviderFloatValue              DoesntNeedsRepairBuildingScore;
	struct FAIDataProviderBoolValue               bWantsDamagedByFriendly;
	struct FAIDataProviderFloatValue              DamagedByFriendlyMaxLifespan;
	struct FAIDataProviderFloatValue              DamagedByFriendlyMinDamage;
	struct FAIDataProviderFloatValue              DamagedByFriendlyScore;
	struct FAIDataProviderBoolValue               bWantsDamagedByEnemy;
	struct FAIDataProviderFloatValue              DamagedByEnemyMaxLifespan;
	struct FAIDataProviderFloatValue              DamagedByEnemyMinDamage;
	struct FAIDataProviderFloatValue              DamagedByEnemyScore;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortQueryTest_BuildingCriteria">();
	}
	static class UFortQueryTest_BuildingCriteria* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortQueryTest_BuildingCriteria>();
	}
};
static_assert(alignof(UFortQueryTest_BuildingCriteria) == 0x000008, "Wrong alignment on UFortQueryTest_BuildingCriteria");
static_assert(sizeof(UFortQueryTest_BuildingCriteria) == 0x0008B8, "Wrong size on UFortQueryTest_BuildingCriteria");
static_assert(offsetof(UFortQueryTest_BuildingCriteria, ScoreForGroundSupportedFloor) == 0x000268, "Member 'UFortQueryTest_BuildingCriteria::ScoreForGroundSupportedFloor' has a wrong offset!");
static_assert(offsetof(UFortQueryTest_BuildingCriteria, ScoreForBeingGroundSupported) == 0x0002A0, "Member 'UFortQueryTest_BuildingCriteria::ScoreForBeingGroundSupported' has a wrong offset!");
static_assert(offsetof(UFortQueryTest_BuildingCriteria, ScoreForTraps) == 0x0002D8, "Member 'UFortQueryTest_BuildingCriteria::ScoreForTraps' has a wrong offset!");
static_assert(offsetof(UFortQueryTest_BuildingCriteria, ScoreForWalls) == 0x000310, "Member 'UFortQueryTest_BuildingCriteria::ScoreForWalls' has a wrong offset!");
static_assert(offsetof(UFortQueryTest_BuildingCriteria, ScoreForNavigableOpening) == 0x000348, "Member 'UFortQueryTest_BuildingCriteria::ScoreForNavigableOpening' has a wrong offset!");
static_assert(offsetof(UFortQueryTest_BuildingCriteria, RootAssignmentID) == 0x000380, "Member 'UFortQueryTest_BuildingCriteria::RootAssignmentID' has a wrong offset!");
static_assert(offsetof(UFortQueryTest_BuildingCriteria, bPreferCloserToRootAssignment) == 0x0003B0, "Member 'UFortQueryTest_BuildingCriteria::bPreferCloserToRootAssignment' has a wrong offset!");
static_assert(offsetof(UFortQueryTest_BuildingCriteria, ScoreForDistanceFromClosestRootAssignmentGoal) == 0x0003E8, "Member 'UFortQueryTest_BuildingCriteria::ScoreForDistanceFromClosestRootAssignmentGoal' has a wrong offset!");
static_assert(offsetof(UFortQueryTest_BuildingCriteria, MinDistanceForDistanceScoring) == 0x000420, "Member 'UFortQueryTest_BuildingCriteria::MinDistanceForDistanceScoring' has a wrong offset!");
static_assert(offsetof(UFortQueryTest_BuildingCriteria, MaxDistanceForDistanceScoring) == 0x000458, "Member 'UFortQueryTest_BuildingCriteria::MaxDistanceForDistanceScoring' has a wrong offset!");
static_assert(offsetof(UFortQueryTest_BuildingCriteria, MaxHealthScore) == 0x000490, "Member 'UFortQueryTest_BuildingCriteria::MaxHealthScore' has a wrong offset!");
static_assert(offsetof(UFortQueryTest_BuildingCriteria, bPreferHigherHealth) == 0x0004C8, "Member 'UFortQueryTest_BuildingCriteria::bPreferHigherHealth' has a wrong offset!");
static_assert(offsetof(UFortQueryTest_BuildingCriteria, ClampMaxHealthValue) == 0x000500, "Member 'UFortQueryTest_BuildingCriteria::ClampMaxHealthValue' has a wrong offset!");
static_assert(offsetof(UFortQueryTest_BuildingCriteria, ClampMinHealthValue) == 0x000538, "Member 'UFortQueryTest_BuildingCriteria::ClampMinHealthValue' has a wrong offset!");
static_assert(offsetof(UFortQueryTest_BuildingCriteria, bPreferHigherHealthPercentage) == 0x000570, "Member 'UFortQueryTest_BuildingCriteria::bPreferHigherHealthPercentage' has a wrong offset!");
static_assert(offsetof(UFortQueryTest_BuildingCriteria, MaxHealthPercentageScore) == 0x0005A8, "Member 'UFortQueryTest_BuildingCriteria::MaxHealthPercentageScore' has a wrong offset!");
static_assert(offsetof(UFortQueryTest_BuildingCriteria, bWantsBuildingRepairableByOwner) == 0x0005E0, "Member 'UFortQueryTest_BuildingCriteria::bWantsBuildingRepairableByOwner' has a wrong offset!");
static_assert(offsetof(UFortQueryTest_BuildingCriteria, RepairableBuildingScore) == 0x000618, "Member 'UFortQueryTest_BuildingCriteria::RepairableBuildingScore' has a wrong offset!");
static_assert(offsetof(UFortQueryTest_BuildingCriteria, NotRepairableBuildingScore) == 0x000650, "Member 'UFortQueryTest_BuildingCriteria::NotRepairableBuildingScore' has a wrong offset!");
static_assert(offsetof(UFortQueryTest_BuildingCriteria, NeedsRepairBuildingScore) == 0x000688, "Member 'UFortQueryTest_BuildingCriteria::NeedsRepairBuildingScore' has a wrong offset!");
static_assert(offsetof(UFortQueryTest_BuildingCriteria, DoesntNeedsRepairBuildingScore) == 0x0006C0, "Member 'UFortQueryTest_BuildingCriteria::DoesntNeedsRepairBuildingScore' has a wrong offset!");
static_assert(offsetof(UFortQueryTest_BuildingCriteria, bWantsDamagedByFriendly) == 0x0006F8, "Member 'UFortQueryTest_BuildingCriteria::bWantsDamagedByFriendly' has a wrong offset!");
static_assert(offsetof(UFortQueryTest_BuildingCriteria, DamagedByFriendlyMaxLifespan) == 0x000730, "Member 'UFortQueryTest_BuildingCriteria::DamagedByFriendlyMaxLifespan' has a wrong offset!");
static_assert(offsetof(UFortQueryTest_BuildingCriteria, DamagedByFriendlyMinDamage) == 0x000768, "Member 'UFortQueryTest_BuildingCriteria::DamagedByFriendlyMinDamage' has a wrong offset!");
static_assert(offsetof(UFortQueryTest_BuildingCriteria, DamagedByFriendlyScore) == 0x0007A0, "Member 'UFortQueryTest_BuildingCriteria::DamagedByFriendlyScore' has a wrong offset!");
static_assert(offsetof(UFortQueryTest_BuildingCriteria, bWantsDamagedByEnemy) == 0x0007D8, "Member 'UFortQueryTest_BuildingCriteria::bWantsDamagedByEnemy' has a wrong offset!");
static_assert(offsetof(UFortQueryTest_BuildingCriteria, DamagedByEnemyMaxLifespan) == 0x000810, "Member 'UFortQueryTest_BuildingCriteria::DamagedByEnemyMaxLifespan' has a wrong offset!");
static_assert(offsetof(UFortQueryTest_BuildingCriteria, DamagedByEnemyMinDamage) == 0x000848, "Member 'UFortQueryTest_BuildingCriteria::DamagedByEnemyMinDamage' has a wrong offset!");
static_assert(offsetof(UFortQueryTest_BuildingCriteria, DamagedByEnemyScore) == 0x000880, "Member 'UFortQueryTest_BuildingCriteria::DamagedByEnemyScore' has a wrong offset!");

class UFortAthenaBTService_Crouch final : public UBTService
{
public:
	class FName                                   CrouchExecutionStatusName;
	uint8                                         Pad_74[0x4];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortAthenaBTService_Crouch">();
	}
	static class UFortAthenaBTService_Crouch* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortAthenaBTService_Crouch>();
	}
};
static_assert(alignof(UFortAthenaBTService_Crouch) == 0x000008, "Wrong alignment on UFortAthenaBTService_Crouch");
static_assert(sizeof(UFortAthenaBTService_Crouch) == 0x000078, "Wrong size on UFortAthenaBTService_Crouch");
static_assert(offsetof(UFortAthenaBTService_Crouch, CrouchExecutionStatusName) == 0x000070, "Member 'UFortAthenaBTService_Crouch::CrouchExecutionStatusName' has a wrong offset!");

class UFortQueryTest_CanAttackTarget final : public UFortQueryTest_GoalBase
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortQueryTest_CanAttackTarget">();
	}
	static class UFortQueryTest_CanAttackTarget* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortQueryTest_CanAttackTarget>();
	}
};
static_assert(alignof(UFortQueryTest_CanAttackTarget) == 0x000008, "Wrong alignment on UFortQueryTest_CanAttackTarget");
static_assert(sizeof(UFortQueryTest_CanAttackTarget) == 0x000268, "Wrong size on UFortQueryTest_CanAttackTarget");

class UFortQueryTest_CanBeDamaged final : public UFortQueryTest_GoalBase
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortQueryTest_CanBeDamaged">();
	}
	static class UFortQueryTest_CanBeDamaged* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortQueryTest_CanBeDamaged>();
	}
};
static_assert(alignof(UFortQueryTest_CanBeDamaged) == 0x000008, "Wrong alignment on UFortQueryTest_CanBeDamaged");
static_assert(sizeof(UFortQueryTest_CanBeDamaged) == 0x000268, "Wrong size on UFortQueryTest_CanBeDamaged");

class UFortAthenaPlayContextualAnimTaskInstanceData final : public UObject
{
public:
	class AActor*                                 PrimaryActor;
	class AActor*                                 SecondaryActor;
	class FName                                   SecondaryRole;
	uint8                                         Pad_3C[0x4];
	class AActor*                                 TertiaryActor;
	class FName                                   TertiaryRole;
	uint8                                         Pad_4C[0x4];
	class UContextualAnimSceneAsset*              SceneAsset;
	class FName                                   SectionName;
	EFortAthenaPlayContextualAnimExecutionMethod  ExecutionMethod;
	bool                                          bWaitForNotifyEventToEnd;
	uint8                                         Pad_5E[0x2];
	class FName                                   NotifyEventNameToEnd;
	int32                                         LoopsToRun;
	bool                                          bLoopForever;
	uint8                                         Pad_69[0x3];
	float                                         DelayBetweenLoops;
	float                                         RandomDeviationBetweenLoops;
	uint8                                         Pad_74[0x4];
	TArray<struct FContextualAnimWarpTarget>      WarpTargets;
	uint8                                         Pad_88[0x18];

public:
	void OnMontageEnded(const class UAnimMontage* EndedMontage, const bool bInterrupted);
	void OnNotifyBeginReceived(class FName NotifyName, const struct FBranchingPointNotifyPayload& BranchingPointNotifyPayload);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortAthenaPlayContextualAnimTaskInstanceData">();
	}
	static class UFortAthenaPlayContextualAnimTaskInstanceData* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortAthenaPlayContextualAnimTaskInstanceData>();
	}
};
static_assert(alignof(UFortAthenaPlayContextualAnimTaskInstanceData) == 0x000008, "Wrong alignment on UFortAthenaPlayContextualAnimTaskInstanceData");
static_assert(sizeof(UFortAthenaPlayContextualAnimTaskInstanceData) == 0x0000A0, "Wrong size on UFortAthenaPlayContextualAnimTaskInstanceData");
static_assert(offsetof(UFortAthenaPlayContextualAnimTaskInstanceData, PrimaryActor) == 0x000028, "Member 'UFortAthenaPlayContextualAnimTaskInstanceData::PrimaryActor' has a wrong offset!");
static_assert(offsetof(UFortAthenaPlayContextualAnimTaskInstanceData, SecondaryActor) == 0x000030, "Member 'UFortAthenaPlayContextualAnimTaskInstanceData::SecondaryActor' has a wrong offset!");
static_assert(offsetof(UFortAthenaPlayContextualAnimTaskInstanceData, SecondaryRole) == 0x000038, "Member 'UFortAthenaPlayContextualAnimTaskInstanceData::SecondaryRole' has a wrong offset!");
static_assert(offsetof(UFortAthenaPlayContextualAnimTaskInstanceData, TertiaryActor) == 0x000040, "Member 'UFortAthenaPlayContextualAnimTaskInstanceData::TertiaryActor' has a wrong offset!");
static_assert(offsetof(UFortAthenaPlayContextualAnimTaskInstanceData, TertiaryRole) == 0x000048, "Member 'UFortAthenaPlayContextualAnimTaskInstanceData::TertiaryRole' has a wrong offset!");
static_assert(offsetof(UFortAthenaPlayContextualAnimTaskInstanceData, SceneAsset) == 0x000050, "Member 'UFortAthenaPlayContextualAnimTaskInstanceData::SceneAsset' has a wrong offset!");
static_assert(offsetof(UFortAthenaPlayContextualAnimTaskInstanceData, SectionName) == 0x000058, "Member 'UFortAthenaPlayContextualAnimTaskInstanceData::SectionName' has a wrong offset!");
static_assert(offsetof(UFortAthenaPlayContextualAnimTaskInstanceData, ExecutionMethod) == 0x00005C, "Member 'UFortAthenaPlayContextualAnimTaskInstanceData::ExecutionMethod' has a wrong offset!");
static_assert(offsetof(UFortAthenaPlayContextualAnimTaskInstanceData, bWaitForNotifyEventToEnd) == 0x00005D, "Member 'UFortAthenaPlayContextualAnimTaskInstanceData::bWaitForNotifyEventToEnd' has a wrong offset!");
static_assert(offsetof(UFortAthenaPlayContextualAnimTaskInstanceData, NotifyEventNameToEnd) == 0x000060, "Member 'UFortAthenaPlayContextualAnimTaskInstanceData::NotifyEventNameToEnd' has a wrong offset!");
static_assert(offsetof(UFortAthenaPlayContextualAnimTaskInstanceData, LoopsToRun) == 0x000064, "Member 'UFortAthenaPlayContextualAnimTaskInstanceData::LoopsToRun' has a wrong offset!");
static_assert(offsetof(UFortAthenaPlayContextualAnimTaskInstanceData, bLoopForever) == 0x000068, "Member 'UFortAthenaPlayContextualAnimTaskInstanceData::bLoopForever' has a wrong offset!");
static_assert(offsetof(UFortAthenaPlayContextualAnimTaskInstanceData, DelayBetweenLoops) == 0x00006C, "Member 'UFortAthenaPlayContextualAnimTaskInstanceData::DelayBetweenLoops' has a wrong offset!");
static_assert(offsetof(UFortAthenaPlayContextualAnimTaskInstanceData, RandomDeviationBetweenLoops) == 0x000070, "Member 'UFortAthenaPlayContextualAnimTaskInstanceData::RandomDeviationBetweenLoops' has a wrong offset!");
static_assert(offsetof(UFortAthenaPlayContextualAnimTaskInstanceData, WarpTargets) == 0x000078, "Member 'UFortAthenaPlayContextualAnimTaskInstanceData::WarpTargets' has a wrong offset!");

class UFortQueryTest_CanHitWithGameplayAbility final : public UEnvQueryTest
{
public:
	TSubclassOf<class UEnvQueryContext>           AIsUsingAbility;
	TSubclassOf<class UEnvQueryContext>           AbilityTargets;
	struct FGameplayTagContainer                  GameplayAbilityTag;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortQueryTest_CanHitWithGameplayAbility">();
	}
	static class UFortQueryTest_CanHitWithGameplayAbility* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortQueryTest_CanHitWithGameplayAbility>();
	}
};
static_assert(alignof(UFortQueryTest_CanHitWithGameplayAbility) == 0x000008, "Wrong alignment on UFortQueryTest_CanHitWithGameplayAbility");
static_assert(sizeof(UFortQueryTest_CanHitWithGameplayAbility) == 0x000228, "Wrong size on UFortQueryTest_CanHitWithGameplayAbility");
static_assert(offsetof(UFortQueryTest_CanHitWithGameplayAbility, AIsUsingAbility) == 0x0001F8, "Member 'UFortQueryTest_CanHitWithGameplayAbility::AIsUsingAbility' has a wrong offset!");
static_assert(offsetof(UFortQueryTest_CanHitWithGameplayAbility, AbilityTargets) == 0x000200, "Member 'UFortQueryTest_CanHitWithGameplayAbility::AbilityTargets' has a wrong offset!");
static_assert(offsetof(UFortQueryTest_CanHitWithGameplayAbility, GameplayAbilityTag) == 0x000208, "Member 'UFortQueryTest_CanHitWithGameplayAbility::GameplayAbilityTag' has a wrong offset!");

class UFortQueryTest_CurieState final : public UEnvQueryTest
{
public:
	struct FGameplayTagQuery                      CurieStateQuery;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortQueryTest_CurieState">();
	}
	static class UFortQueryTest_CurieState* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortQueryTest_CurieState>();
	}
};
static_assert(alignof(UFortQueryTest_CurieState) == 0x000008, "Wrong alignment on UFortQueryTest_CurieState");
static_assert(sizeof(UFortQueryTest_CurieState) == 0x000240, "Wrong size on UFortQueryTest_CurieState");
static_assert(offsetof(UFortQueryTest_CurieState, CurieStateQuery) == 0x0001F8, "Member 'UFortQueryTest_CurieState::CurieStateQuery' has a wrong offset!");

class UFortQueryTest_DecoyDistance final : public UEnvQueryTest
{
public:
	TSubclassOf<class UEnvQueryContext>           DistanceTo;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortQueryTest_DecoyDistance">();
	}
	static class UFortQueryTest_DecoyDistance* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortQueryTest_DecoyDistance>();
	}
};
static_assert(alignof(UFortQueryTest_DecoyDistance) == 0x000008, "Wrong alignment on UFortQueryTest_DecoyDistance");
static_assert(sizeof(UFortQueryTest_DecoyDistance) == 0x000200, "Wrong size on UFortQueryTest_DecoyDistance");
static_assert(offsetof(UFortQueryTest_DecoyDistance, DistanceTo) == 0x0001F8, "Member 'UFortQueryTest_DecoyDistance::DistanceTo' has a wrong offset!");

class UFortQueryTest_DeltaDistance final : public UEnvQueryTest
{
public:
	TSubclassOf<class UEnvQueryContext>           LocationProviderContext;
	bool                                          bUseDistance2D;
	uint8                                         Pad_201[0x7];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortQueryTest_DeltaDistance">();
	}
	static class UFortQueryTest_DeltaDistance* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortQueryTest_DeltaDistance>();
	}
};
static_assert(alignof(UFortQueryTest_DeltaDistance) == 0x000008, "Wrong alignment on UFortQueryTest_DeltaDistance");
static_assert(sizeof(UFortQueryTest_DeltaDistance) == 0x000208, "Wrong size on UFortQueryTest_DeltaDistance");
static_assert(offsetof(UFortQueryTest_DeltaDistance, LocationProviderContext) == 0x0001F8, "Member 'UFortQueryTest_DeltaDistance::LocationProviderContext' has a wrong offset!");
static_assert(offsetof(UFortQueryTest_DeltaDistance, bUseDistance2D) == 0x000200, "Member 'UFortQueryTest_DeltaDistance::bUseDistance2D' has a wrong offset!");

class UFortAthenaAIBotEvaluator_CanMove final : public UFortAthenaAIBotEvaluator
{
public:
	class FName                                   CanMoveKeyName;
	uint8                                         Pad_94[0x4];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortAthenaAIBotEvaluator_CanMove">();
	}
	static class UFortAthenaAIBotEvaluator_CanMove* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortAthenaAIBotEvaluator_CanMove>();
	}
};
static_assert(alignof(UFortAthenaAIBotEvaluator_CanMove) == 0x000008, "Wrong alignment on UFortAthenaAIBotEvaluator_CanMove");
static_assert(sizeof(UFortAthenaAIBotEvaluator_CanMove) == 0x000098, "Wrong size on UFortAthenaAIBotEvaluator_CanMove");
static_assert(offsetof(UFortAthenaAIBotEvaluator_CanMove, CanMoveKeyName) == 0x000090, "Member 'UFortAthenaAIBotEvaluator_CanMove::CanMoveKeyName' has a wrong offset!");

class UFortQueryTest_DistanceToActorBound final : public UEnvQueryTest
{
public:
	TSubclassOf<class UEnvQueryContext>           DistanceTo;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortQueryTest_DistanceToActorBound">();
	}
	static class UFortQueryTest_DistanceToActorBound* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortQueryTest_DistanceToActorBound>();
	}
};
static_assert(alignof(UFortQueryTest_DistanceToActorBound) == 0x000008, "Wrong alignment on UFortQueryTest_DistanceToActorBound");
static_assert(sizeof(UFortQueryTest_DistanceToActorBound) == 0x000200, "Wrong size on UFortQueryTest_DistanceToActorBound");
static_assert(offsetof(UFortQueryTest_DistanceToActorBound, DistanceTo) == 0x0001F8, "Member 'UFortQueryTest_DistanceToActorBound::DistanceTo' has a wrong offset!");

class UFortQueryTest_DistanceToIndestructibleBuilding final : public UEnvQueryTest
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortQueryTest_DistanceToIndestructibleBuilding">();
	}
	static class UFortQueryTest_DistanceToIndestructibleBuilding* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortQueryTest_DistanceToIndestructibleBuilding>();
	}
};
static_assert(alignof(UFortQueryTest_DistanceToIndestructibleBuilding) == 0x000008, "Wrong alignment on UFortQueryTest_DistanceToIndestructibleBuilding");
static_assert(sizeof(UFortQueryTest_DistanceToIndestructibleBuilding) == 0x0001F8, "Wrong size on UFortQueryTest_DistanceToIndestructibleBuilding");

class UFortQueryTest_EnvironmentalDanger final : public UEnvQueryTest
{
public:
	bool                                          bUse3DBoundsCheck;
	uint8                                         Pad_1F9[0x3];
	struct FGameplayTag                           DangerSourceActorRegistryTag;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortQueryTest_EnvironmentalDanger">();
	}
	static class UFortQueryTest_EnvironmentalDanger* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortQueryTest_EnvironmentalDanger>();
	}
};
static_assert(alignof(UFortQueryTest_EnvironmentalDanger) == 0x000008, "Wrong alignment on UFortQueryTest_EnvironmentalDanger");
static_assert(sizeof(UFortQueryTest_EnvironmentalDanger) == 0x000200, "Wrong size on UFortQueryTest_EnvironmentalDanger");
static_assert(offsetof(UFortQueryTest_EnvironmentalDanger, bUse3DBoundsCheck) == 0x0001F8, "Member 'UFortQueryTest_EnvironmentalDanger::bUse3DBoundsCheck' has a wrong offset!");
static_assert(offsetof(UFortQueryTest_EnvironmentalDanger, DangerSourceActorRegistryTag) == 0x0001FC, "Member 'UFortQueryTest_EnvironmentalDanger::DangerSourceActorRegistryTag' has a wrong offset!");

class UFortQueryTest_GameplayTagsPerDifficulty final : public UEnvQueryTest
{
public:
	TArray<struct FFortGameplayTagQueryPerDifficulty> TagQueriesPerDifficulty;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortQueryTest_GameplayTagsPerDifficulty">();
	}
	static class UFortQueryTest_GameplayTagsPerDifficulty* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortQueryTest_GameplayTagsPerDifficulty>();
	}
};
static_assert(alignof(UFortQueryTest_GameplayTagsPerDifficulty) == 0x000008, "Wrong alignment on UFortQueryTest_GameplayTagsPerDifficulty");
static_assert(sizeof(UFortQueryTest_GameplayTagsPerDifficulty) == 0x000208, "Wrong size on UFortQueryTest_GameplayTagsPerDifficulty");
static_assert(offsetof(UFortQueryTest_GameplayTagsPerDifficulty, TagQueriesPerDifficulty) == 0x0001F8, "Member 'UFortQueryTest_GameplayTagsPerDifficulty::TagQueriesPerDifficulty' has a wrong offset!");

class UFortQueryTest_PerceptionAge final : public UEnvQueryTest
{
public:
	ECorePerceptionTypes                          Sense;
	uint8                                         Pad_1F9[0x7];
	TSubclassOf<class UAISense>                   SenseClass;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortQueryTest_PerceptionAge">();
	}
	static class UFortQueryTest_PerceptionAge* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortQueryTest_PerceptionAge>();
	}
};
static_assert(alignof(UFortQueryTest_PerceptionAge) == 0x000008, "Wrong alignment on UFortQueryTest_PerceptionAge");
static_assert(sizeof(UFortQueryTest_PerceptionAge) == 0x000208, "Wrong size on UFortQueryTest_PerceptionAge");
static_assert(offsetof(UFortQueryTest_PerceptionAge, Sense) == 0x0001F8, "Member 'UFortQueryTest_PerceptionAge::Sense' has a wrong offset!");
static_assert(offsetof(UFortQueryTest_PerceptionAge, SenseClass) == 0x000200, "Member 'UFortQueryTest_PerceptionAge::SenseClass' has a wrong offset!");

class UFortQueryTest_GoalActorDot final : public UFortQueryTest_GoalBase
{
public:
	TSubclassOf<class UEnvQueryContext>           LineATo;
	TSubclassOf<class UEnvQueryContext>           LineBTo;
	EFortTestGoalActorDot                         TestMode;
	bool                                          bAbsoluteValue;
	uint8                                         Pad_27A[0x6];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortQueryTest_GoalActorDot">();
	}
	static class UFortQueryTest_GoalActorDot* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortQueryTest_GoalActorDot>();
	}
};
static_assert(alignof(UFortQueryTest_GoalActorDot) == 0x000008, "Wrong alignment on UFortQueryTest_GoalActorDot");
static_assert(sizeof(UFortQueryTest_GoalActorDot) == 0x000280, "Wrong size on UFortQueryTest_GoalActorDot");
static_assert(offsetof(UFortQueryTest_GoalActorDot, LineATo) == 0x000268, "Member 'UFortQueryTest_GoalActorDot::LineATo' has a wrong offset!");
static_assert(offsetof(UFortQueryTest_GoalActorDot, LineBTo) == 0x000270, "Member 'UFortQueryTest_GoalActorDot::LineBTo' has a wrong offset!");
static_assert(offsetof(UFortQueryTest_GoalActorDot, TestMode) == 0x000278, "Member 'UFortQueryTest_GoalActorDot::TestMode' has a wrong offset!");
static_assert(offsetof(UFortQueryTest_GoalActorDot, bAbsoluteValue) == 0x000279, "Member 'UFortQueryTest_GoalActorDot::bAbsoluteValue' has a wrong offset!");

class UFortQueryTest_GoalActorTimeSinceSpawn final : public UFortQueryTest_GoalBase
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortQueryTest_GoalActorTimeSinceSpawn">();
	}
	static class UFortQueryTest_GoalActorTimeSinceSpawn* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortQueryTest_GoalActorTimeSinceSpawn>();
	}
};
static_assert(alignof(UFortQueryTest_GoalActorTimeSinceSpawn) == 0x000008, "Wrong alignment on UFortQueryTest_GoalActorTimeSinceSpawn");
static_assert(sizeof(UFortQueryTest_GoalActorTimeSinceSpawn) == 0x000268, "Wrong size on UFortQueryTest_GoalActorTimeSinceSpawn");

class UFortAthenaAIBotEvaluator_Investigate final : public UFortAthenaAIBotEvaluator_Movement
{
public:
	class FName                                   LastKnownPositionName;
	class FName                                   DestinationKeyName;
	class FName                                   MoveToDestinationKeyName;
	class FName                                   AggressivenessName;
	class FName                                   CautiousKeyName;
	uint8                                         Pad_1A4[0xC];
	class UFortAthenaAIBotAimingDigestedSkillSet* CacheAimingDigestedSkillSet;
	class UFortAthenaAIBotAttackingDigestedSkillSet* CacheAttackingDigestedSkillSet;
	class UFortAthenaAIBotUnstuckDigestedSkillSet* CachedUnstuckSkillSet;
	uint8                                         Pad_1C8[0x38];
	class AActor*                                 InvestigatingSupportingActor;
	uint8                                         Pad_208[0x8];
	class ABuildingSMActor*                       UnderminingBuildingActor;
	class AActor*                                 ExcludeReachingTarget;
	uint8                                         Pad_220[0x28];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortAthenaAIBotEvaluator_Investigate">();
	}
	static class UFortAthenaAIBotEvaluator_Investigate* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortAthenaAIBotEvaluator_Investigate>();
	}
};
static_assert(alignof(UFortAthenaAIBotEvaluator_Investigate) == 0x000008, "Wrong alignment on UFortAthenaAIBotEvaluator_Investigate");
static_assert(sizeof(UFortAthenaAIBotEvaluator_Investigate) == 0x000248, "Wrong size on UFortAthenaAIBotEvaluator_Investigate");
static_assert(offsetof(UFortAthenaAIBotEvaluator_Investigate, LastKnownPositionName) == 0x000190, "Member 'UFortAthenaAIBotEvaluator_Investigate::LastKnownPositionName' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotEvaluator_Investigate, DestinationKeyName) == 0x000194, "Member 'UFortAthenaAIBotEvaluator_Investigate::DestinationKeyName' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotEvaluator_Investigate, MoveToDestinationKeyName) == 0x000198, "Member 'UFortAthenaAIBotEvaluator_Investigate::MoveToDestinationKeyName' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotEvaluator_Investigate, AggressivenessName) == 0x00019C, "Member 'UFortAthenaAIBotEvaluator_Investigate::AggressivenessName' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotEvaluator_Investigate, CautiousKeyName) == 0x0001A0, "Member 'UFortAthenaAIBotEvaluator_Investigate::CautiousKeyName' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotEvaluator_Investigate, CacheAimingDigestedSkillSet) == 0x0001B0, "Member 'UFortAthenaAIBotEvaluator_Investigate::CacheAimingDigestedSkillSet' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotEvaluator_Investigate, CacheAttackingDigestedSkillSet) == 0x0001B8, "Member 'UFortAthenaAIBotEvaluator_Investigate::CacheAttackingDigestedSkillSet' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotEvaluator_Investigate, CachedUnstuckSkillSet) == 0x0001C0, "Member 'UFortAthenaAIBotEvaluator_Investigate::CachedUnstuckSkillSet' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotEvaluator_Investigate, InvestigatingSupportingActor) == 0x000200, "Member 'UFortAthenaAIBotEvaluator_Investigate::InvestigatingSupportingActor' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotEvaluator_Investigate, UnderminingBuildingActor) == 0x000210, "Member 'UFortAthenaAIBotEvaluator_Investigate::UnderminingBuildingActor' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotEvaluator_Investigate, ExcludeReachingTarget) == 0x000218, "Member 'UFortAthenaAIBotEvaluator_Investigate::ExcludeReachingTarget' has a wrong offset!");

class UFortQueryTest_GoalDiscouragement final : public UFortQueryTest_GoalBase
{
public:
	struct FAIDataProviderBoolValue               DisableDiscouragementWhenUndermining;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortQueryTest_GoalDiscouragement">();
	}
	static class UFortQueryTest_GoalDiscouragement* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortQueryTest_GoalDiscouragement>();
	}
};
static_assert(alignof(UFortQueryTest_GoalDiscouragement) == 0x000008, "Wrong alignment on UFortQueryTest_GoalDiscouragement");
static_assert(sizeof(UFortQueryTest_GoalDiscouragement) == 0x0002A0, "Wrong size on UFortQueryTest_GoalDiscouragement");
static_assert(offsetof(UFortQueryTest_GoalDiscouragement, DisableDiscouragementWhenUndermining) == 0x000268, "Member 'UFortQueryTest_GoalDiscouragement::DisableDiscouragementWhenUndermining' has a wrong offset!");

class UFortQueryTest_GoalDistance final : public UFortQueryTest_GoalBase
{
public:
	EDistanceMode                                 DistanceMode;
	uint8                                         Pad_269[0x7];
	TSubclassOf<class UEnvQueryContext>           DistanceTo;
	EEnvTestDistance                              TestMode;
	uint8                                         Pad_279[0x7];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortQueryTest_GoalDistance">();
	}
	static class UFortQueryTest_GoalDistance* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortQueryTest_GoalDistance>();
	}
};
static_assert(alignof(UFortQueryTest_GoalDistance) == 0x000008, "Wrong alignment on UFortQueryTest_GoalDistance");
static_assert(sizeof(UFortQueryTest_GoalDistance) == 0x000280, "Wrong size on UFortQueryTest_GoalDistance");
static_assert(offsetof(UFortQueryTest_GoalDistance, DistanceMode) == 0x000268, "Member 'UFortQueryTest_GoalDistance::DistanceMode' has a wrong offset!");
static_assert(offsetof(UFortQueryTest_GoalDistance, DistanceTo) == 0x000270, "Member 'UFortQueryTest_GoalDistance::DistanceTo' has a wrong offset!");
static_assert(offsetof(UFortQueryTest_GoalDistance, TestMode) == 0x000278, "Member 'UFortQueryTest_GoalDistance::TestMode' has a wrong offset!");

class UFortAthenaBTTask_Build final : public UBTTaskNode
{
public:
	class FName                                   ExecutionStatusKeyName;
	class FName                                   FocalPointName;
	uint8                                         Pad_78[0x8];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortAthenaBTTask_Build">();
	}
	static class UFortAthenaBTTask_Build* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortAthenaBTTask_Build>();
	}
};
static_assert(alignof(UFortAthenaBTTask_Build) == 0x000008, "Wrong alignment on UFortAthenaBTTask_Build");
static_assert(sizeof(UFortAthenaBTTask_Build) == 0x000080, "Wrong size on UFortAthenaBTTask_Build");
static_assert(offsetof(UFortAthenaBTTask_Build, ExecutionStatusKeyName) == 0x000070, "Member 'UFortAthenaBTTask_Build::ExecutionStatusKeyName' has a wrong offset!");
static_assert(offsetof(UFortAthenaBTTask_Build, FocalPointName) == 0x000074, "Member 'UFortAthenaBTTask_Build::FocalPointName' has a wrong offset!");

class UFortQueryTest_GoalDistanceRanges final : public UFortQueryTest_GoalBase
{
public:
	EDistanceMode                                 DistanceMode;
	uint8                                         Pad_269[0x7];
	TSubclassOf<class UEnvQueryContext>           DistanceTo;
	EEnvTestDistance                              ScreeningTestMode;
	EEnvTestDistance                              TestMode;
	uint8                                         Pad_27A[0x6];
	TArray<struct FGoalDistanceData>              GoalDistanceDataRanges;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortQueryTest_GoalDistanceRanges">();
	}
	static class UFortQueryTest_GoalDistanceRanges* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortQueryTest_GoalDistanceRanges>();
	}
};
static_assert(alignof(UFortQueryTest_GoalDistanceRanges) == 0x000008, "Wrong alignment on UFortQueryTest_GoalDistanceRanges");
static_assert(sizeof(UFortQueryTest_GoalDistanceRanges) == 0x000290, "Wrong size on UFortQueryTest_GoalDistanceRanges");
static_assert(offsetof(UFortQueryTest_GoalDistanceRanges, DistanceMode) == 0x000268, "Member 'UFortQueryTest_GoalDistanceRanges::DistanceMode' has a wrong offset!");
static_assert(offsetof(UFortQueryTest_GoalDistanceRanges, DistanceTo) == 0x000270, "Member 'UFortQueryTest_GoalDistanceRanges::DistanceTo' has a wrong offset!");
static_assert(offsetof(UFortQueryTest_GoalDistanceRanges, ScreeningTestMode) == 0x000278, "Member 'UFortQueryTest_GoalDistanceRanges::ScreeningTestMode' has a wrong offset!");
static_assert(offsetof(UFortQueryTest_GoalDistanceRanges, TestMode) == 0x000279, "Member 'UFortQueryTest_GoalDistanceRanges::TestMode' has a wrong offset!");
static_assert(offsetof(UFortQueryTest_GoalDistanceRanges, GoalDistanceDataRanges) == 0x000280, "Member 'UFortQueryTest_GoalDistanceRanges::GoalDistanceDataRanges' has a wrong offset!");

class UFortQueryTest_GoalFrustrationDiscouragement final : public UFortQueryTest_GoalBase
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortQueryTest_GoalFrustrationDiscouragement">();
	}
	static class UFortQueryTest_GoalFrustrationDiscouragement* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortQueryTest_GoalFrustrationDiscouragement>();
	}
};
static_assert(alignof(UFortQueryTest_GoalFrustrationDiscouragement) == 0x000008, "Wrong alignment on UFortQueryTest_GoalFrustrationDiscouragement");
static_assert(sizeof(UFortQueryTest_GoalFrustrationDiscouragement) == 0x000268, "Wrong size on UFortQueryTest_GoalFrustrationDiscouragement");

class UFortAthenaBTService_SmartObject final : public UBTService
{
public:
	class FName                                   SmartObjectStatusKeyName;
	class FName                                   SmartObjectDestinationKeyName;
	class FName                                   SmartObjectRequestEvaluateKeyName;
	uint8                                         Pad_7C[0xC];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortAthenaBTService_SmartObject">();
	}
	static class UFortAthenaBTService_SmartObject* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortAthenaBTService_SmartObject>();
	}
};
static_assert(alignof(UFortAthenaBTService_SmartObject) == 0x000008, "Wrong alignment on UFortAthenaBTService_SmartObject");
static_assert(sizeof(UFortAthenaBTService_SmartObject) == 0x000088, "Wrong size on UFortAthenaBTService_SmartObject");
static_assert(offsetof(UFortAthenaBTService_SmartObject, SmartObjectStatusKeyName) == 0x000070, "Member 'UFortAthenaBTService_SmartObject::SmartObjectStatusKeyName' has a wrong offset!");
static_assert(offsetof(UFortAthenaBTService_SmartObject, SmartObjectDestinationKeyName) == 0x000074, "Member 'UFortAthenaBTService_SmartObject::SmartObjectDestinationKeyName' has a wrong offset!");
static_assert(offsetof(UFortAthenaBTService_SmartObject, SmartObjectRequestEvaluateKeyName) == 0x000078, "Member 'UFortAthenaBTService_SmartObject::SmartObjectRequestEvaluateKeyName' has a wrong offset!");

class UFortQueryTest_GoalGameplayTags final : public UFortQueryTest_GoalBase
{
public:
	bool                                          bShouldLookupQueryByTag;
	uint8                                         Pad_269[0x7];
	struct FGameplayTagQuery                      TagQueryToMatch;
	struct FGameplayTag                           QueryLookupTag;
	bool                                          bShouldPassWhenQueryNotFound;
	bool                                          bRequireAllProvidedTagQueriesPass;
	uint8                                         Pad_2BE[0x2];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortQueryTest_GoalGameplayTags">();
	}
	static class UFortQueryTest_GoalGameplayTags* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortQueryTest_GoalGameplayTags>();
	}
};
static_assert(alignof(UFortQueryTest_GoalGameplayTags) == 0x000008, "Wrong alignment on UFortQueryTest_GoalGameplayTags");
static_assert(sizeof(UFortQueryTest_GoalGameplayTags) == 0x0002C0, "Wrong size on UFortQueryTest_GoalGameplayTags");
static_assert(offsetof(UFortQueryTest_GoalGameplayTags, bShouldLookupQueryByTag) == 0x000268, "Member 'UFortQueryTest_GoalGameplayTags::bShouldLookupQueryByTag' has a wrong offset!");
static_assert(offsetof(UFortQueryTest_GoalGameplayTags, TagQueryToMatch) == 0x000270, "Member 'UFortQueryTest_GoalGameplayTags::TagQueryToMatch' has a wrong offset!");
static_assert(offsetof(UFortQueryTest_GoalGameplayTags, QueryLookupTag) == 0x0002B8, "Member 'UFortQueryTest_GoalGameplayTags::QueryLookupTag' has a wrong offset!");
static_assert(offsetof(UFortQueryTest_GoalGameplayTags, bShouldPassWhenQueryNotFound) == 0x0002BC, "Member 'UFortQueryTest_GoalGameplayTags::bShouldPassWhenQueryNotFound' has a wrong offset!");
static_assert(offsetof(UFortQueryTest_GoalGameplayTags, bRequireAllProvidedTagQueriesPass) == 0x0002BD, "Member 'UFortQueryTest_GoalGameplayTags::bRequireAllProvidedTagQueriesPass' has a wrong offset!");

class UFortQueryTest_GoalMarkedByPlayer final : public UFortQueryTest_GoalBase
{
public:
	struct FGameplayTagQuery                      OwnerTagQuery;
	struct FAIDataProviderBoolValue               OnlyConverterMarkedTargets;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortQueryTest_GoalMarkedByPlayer">();
	}
	static class UFortQueryTest_GoalMarkedByPlayer* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortQueryTest_GoalMarkedByPlayer>();
	}
};
static_assert(alignof(UFortQueryTest_GoalMarkedByPlayer) == 0x000008, "Wrong alignment on UFortQueryTest_GoalMarkedByPlayer");
static_assert(sizeof(UFortQueryTest_GoalMarkedByPlayer) == 0x0002E8, "Wrong size on UFortQueryTest_GoalMarkedByPlayer");
static_assert(offsetof(UFortQueryTest_GoalMarkedByPlayer, OwnerTagQuery) == 0x000268, "Member 'UFortQueryTest_GoalMarkedByPlayer::OwnerTagQuery' has a wrong offset!");
static_assert(offsetof(UFortQueryTest_GoalMarkedByPlayer, OnlyConverterMarkedTargets) == 0x0002B0, "Member 'UFortQueryTest_GoalMarkedByPlayer::OnlyConverterMarkedTargets' has a wrong offset!");

class UFortQueryTest_GoalNumberOfAIAssigned final : public UFortQueryTest_GoalBase
{
public:
	ECountAIAssignedToType                        TypeOfMatchToCount;
	uint8                                         Pad_269[0x7];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortQueryTest_GoalNumberOfAIAssigned">();
	}
	static class UFortQueryTest_GoalNumberOfAIAssigned* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortQueryTest_GoalNumberOfAIAssigned>();
	}
};
static_assert(alignof(UFortQueryTest_GoalNumberOfAIAssigned) == 0x000008, "Wrong alignment on UFortQueryTest_GoalNumberOfAIAssigned");
static_assert(sizeof(UFortQueryTest_GoalNumberOfAIAssigned) == 0x000270, "Wrong size on UFortQueryTest_GoalNumberOfAIAssigned");
static_assert(offsetof(UFortQueryTest_GoalNumberOfAIAssigned, TypeOfMatchToCount) == 0x000268, "Member 'UFortQueryTest_GoalNumberOfAIAssigned::TypeOfMatchToCount' has a wrong offset!");

class UFortQueryTest_GoalOverallDamageCaused final : public UFortQueryTest_GoalBase
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortQueryTest_GoalOverallDamageCaused">();
	}
	static class UFortQueryTest_GoalOverallDamageCaused* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortQueryTest_GoalOverallDamageCaused>();
	}
};
static_assert(alignof(UFortQueryTest_GoalOverallDamageCaused) == 0x000008, "Wrong alignment on UFortQueryTest_GoalOverallDamageCaused");
static_assert(sizeof(UFortQueryTest_GoalOverallDamageCaused) == 0x000268, "Wrong size on UFortQueryTest_GoalOverallDamageCaused");

class UFortAthenaAIBotEvaluator_TrapOnPathDetected final : public UFortAthenaAIBotEvaluator
{
public:
	class UFortAthenaAIBotAimingDigestedSkillSet* CacheAimingDigestedSkillSet;
	class FName                                   TrapOnPathKeyName;
	class FName                                   TrapActorOnPathKeyName;
	class FName                                   TargetActorName;
	class FName                                   AlertLevelName;
	class FName                                   RangeAttackExecutionStatusName;
	uint8                                         Pad_AC[0xC];
	class ABuildingTrap*                          CurrentTrapTarget;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortAthenaAIBotEvaluator_TrapOnPathDetected">();
	}
	static class UFortAthenaAIBotEvaluator_TrapOnPathDetected* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortAthenaAIBotEvaluator_TrapOnPathDetected>();
	}
};
static_assert(alignof(UFortAthenaAIBotEvaluator_TrapOnPathDetected) == 0x000008, "Wrong alignment on UFortAthenaAIBotEvaluator_TrapOnPathDetected");
static_assert(sizeof(UFortAthenaAIBotEvaluator_TrapOnPathDetected) == 0x0000C0, "Wrong size on UFortAthenaAIBotEvaluator_TrapOnPathDetected");
static_assert(offsetof(UFortAthenaAIBotEvaluator_TrapOnPathDetected, CacheAimingDigestedSkillSet) == 0x000090, "Member 'UFortAthenaAIBotEvaluator_TrapOnPathDetected::CacheAimingDigestedSkillSet' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotEvaluator_TrapOnPathDetected, TrapOnPathKeyName) == 0x000098, "Member 'UFortAthenaAIBotEvaluator_TrapOnPathDetected::TrapOnPathKeyName' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotEvaluator_TrapOnPathDetected, TrapActorOnPathKeyName) == 0x00009C, "Member 'UFortAthenaAIBotEvaluator_TrapOnPathDetected::TrapActorOnPathKeyName' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotEvaluator_TrapOnPathDetected, TargetActorName) == 0x0000A0, "Member 'UFortAthenaAIBotEvaluator_TrapOnPathDetected::TargetActorName' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotEvaluator_TrapOnPathDetected, AlertLevelName) == 0x0000A4, "Member 'UFortAthenaAIBotEvaluator_TrapOnPathDetected::AlertLevelName' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotEvaluator_TrapOnPathDetected, RangeAttackExecutionStatusName) == 0x0000A8, "Member 'UFortAthenaAIBotEvaluator_TrapOnPathDetected::RangeAttackExecutionStatusName' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotEvaluator_TrapOnPathDetected, CurrentTrapTarget) == 0x0000B8, "Member 'UFortAthenaAIBotEvaluator_TrapOnPathDetected::CurrentTrapTarget' has a wrong offset!");

class UFortQueryTest_GoalPickupFilter final : public UFortQueryTest_GoalBase
{
public:
	float                                         MaxLifetime;
	EFortPickupSpawnSource                        RequiredPickupSpawnSource;
	uint8                                         Pad_26D[0x3];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortQueryTest_GoalPickupFilter">();
	}
	static class UFortQueryTest_GoalPickupFilter* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortQueryTest_GoalPickupFilter>();
	}
};
static_assert(alignof(UFortQueryTest_GoalPickupFilter) == 0x000008, "Wrong alignment on UFortQueryTest_GoalPickupFilter");
static_assert(sizeof(UFortQueryTest_GoalPickupFilter) == 0x000270, "Wrong size on UFortQueryTest_GoalPickupFilter");
static_assert(offsetof(UFortQueryTest_GoalPickupFilter, MaxLifetime) == 0x000268, "Member 'UFortQueryTest_GoalPickupFilter::MaxLifetime' has a wrong offset!");
static_assert(offsetof(UFortQueryTest_GoalPickupFilter, RequiredPickupSpawnSource) == 0x00026C, "Member 'UFortQueryTest_GoalPickupFilter::RequiredPickupSpawnSource' has a wrong offset!");

class UFortQueryTest_GoalProject final : public UFortQueryTest_GoalBase
{
public:
	struct FEnvTraceData                          ProjectionData;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortQueryTest_GoalProject">();
	}
	static class UFortQueryTest_GoalProject* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortQueryTest_GoalProject>();
	}
};
static_assert(alignof(UFortQueryTest_GoalProject) == 0x000008, "Wrong alignment on UFortQueryTest_GoalProject");
static_assert(sizeof(UFortQueryTest_GoalProject) == 0x0002A0, "Wrong size on UFortQueryTest_GoalProject");
static_assert(offsetof(UFortQueryTest_GoalProject, ProjectionData) == 0x000268, "Member 'UFortQueryTest_GoalProject::ProjectionData' has a wrong offset!");

class UFortAthenaAIBotEvaluator_HitAndRun final : public UFortAthenaAIBotEvaluator_Movement
{
public:
	struct FScalableFloat                         AttackDurationBeforeEvade;
	struct FScalableFloat                         MeleeAttackMaxDistToEvade;
	struct FScalableFloat                         ClampEvadeDistanceEnable;
	struct FScalableFloat                         MinDistanceToEvade;
	struct FScalableFloat                         MaxDistanceToEvade;
	class FName                                   EvadeKeyName;
	class FName                                   EvadeMovementStateKeyName;
	class FName                                   EvadeDestinationKeyName;
	class FName                                   WeaponTriggerMeleeName;
	uint8                                         Pad_268[0x10];
	float                                         MeleeAttackMaxDistToEvadeSqr;
	float                                         MaxDistanceToEvadeSqr;
	uint8                                         Pad_280[0x8];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortAthenaAIBotEvaluator_HitAndRun">();
	}
	static class UFortAthenaAIBotEvaluator_HitAndRun* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortAthenaAIBotEvaluator_HitAndRun>();
	}
};
static_assert(alignof(UFortAthenaAIBotEvaluator_HitAndRun) == 0x000008, "Wrong alignment on UFortAthenaAIBotEvaluator_HitAndRun");
static_assert(sizeof(UFortAthenaAIBotEvaluator_HitAndRun) == 0x000288, "Wrong size on UFortAthenaAIBotEvaluator_HitAndRun");
static_assert(offsetof(UFortAthenaAIBotEvaluator_HitAndRun, AttackDurationBeforeEvade) == 0x000190, "Member 'UFortAthenaAIBotEvaluator_HitAndRun::AttackDurationBeforeEvade' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotEvaluator_HitAndRun, MeleeAttackMaxDistToEvade) == 0x0001B8, "Member 'UFortAthenaAIBotEvaluator_HitAndRun::MeleeAttackMaxDistToEvade' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotEvaluator_HitAndRun, ClampEvadeDistanceEnable) == 0x0001E0, "Member 'UFortAthenaAIBotEvaluator_HitAndRun::ClampEvadeDistanceEnable' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotEvaluator_HitAndRun, MinDistanceToEvade) == 0x000208, "Member 'UFortAthenaAIBotEvaluator_HitAndRun::MinDistanceToEvade' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotEvaluator_HitAndRun, MaxDistanceToEvade) == 0x000230, "Member 'UFortAthenaAIBotEvaluator_HitAndRun::MaxDistanceToEvade' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotEvaluator_HitAndRun, EvadeKeyName) == 0x000258, "Member 'UFortAthenaAIBotEvaluator_HitAndRun::EvadeKeyName' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotEvaluator_HitAndRun, EvadeMovementStateKeyName) == 0x00025C, "Member 'UFortAthenaAIBotEvaluator_HitAndRun::EvadeMovementStateKeyName' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotEvaluator_HitAndRun, EvadeDestinationKeyName) == 0x000260, "Member 'UFortAthenaAIBotEvaluator_HitAndRun::EvadeDestinationKeyName' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotEvaluator_HitAndRun, WeaponTriggerMeleeName) == 0x000264, "Member 'UFortAthenaAIBotEvaluator_HitAndRun::WeaponTriggerMeleeName' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotEvaluator_HitAndRun, MeleeAttackMaxDistToEvadeSqr) == 0x000278, "Member 'UFortAthenaAIBotEvaluator_HitAndRun::MeleeAttackMaxDistToEvadeSqr' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotEvaluator_HitAndRun, MaxDistanceToEvadeSqr) == 0x00027C, "Member 'UFortAthenaAIBotEvaluator_HitAndRun::MaxDistanceToEvadeSqr' has a wrong offset!");

class UFortQueryTest_GoalStickiness final : public UFortQueryTest_GoalBase
{
public:
	struct FAIDataProviderFloatValue              StartValueForGoal;
	struct FAIDataProviderFloatValue              EndValueForGoal;
	struct FAIDataProviderFloatValue              TimeBeforeValueLerp;
	struct FAIDataProviderFloatValue              ValueLerpDuration;
	struct FAIDataProviderBoolValue               ApplyStickinessToAllGoalsWithSameActor;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortQueryTest_GoalStickiness">();
	}
	static class UFortQueryTest_GoalStickiness* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortQueryTest_GoalStickiness>();
	}
};
static_assert(alignof(UFortQueryTest_GoalStickiness) == 0x000008, "Wrong alignment on UFortQueryTest_GoalStickiness");
static_assert(sizeof(UFortQueryTest_GoalStickiness) == 0x000380, "Wrong size on UFortQueryTest_GoalStickiness");
static_assert(offsetof(UFortQueryTest_GoalStickiness, StartValueForGoal) == 0x000268, "Member 'UFortQueryTest_GoalStickiness::StartValueForGoal' has a wrong offset!");
static_assert(offsetof(UFortQueryTest_GoalStickiness, EndValueForGoal) == 0x0002A0, "Member 'UFortQueryTest_GoalStickiness::EndValueForGoal' has a wrong offset!");
static_assert(offsetof(UFortQueryTest_GoalStickiness, TimeBeforeValueLerp) == 0x0002D8, "Member 'UFortQueryTest_GoalStickiness::TimeBeforeValueLerp' has a wrong offset!");
static_assert(offsetof(UFortQueryTest_GoalStickiness, ValueLerpDuration) == 0x000310, "Member 'UFortQueryTest_GoalStickiness::ValueLerpDuration' has a wrong offset!");
static_assert(offsetof(UFortQueryTest_GoalStickiness, ApplyStickinessToAllGoalsWithSameActor) == 0x000348, "Member 'UFortQueryTest_GoalStickiness::ApplyStickinessToAllGoalsWithSameActor' has a wrong offset!");

class UFortQueryTest_GoalType final : public UFortQueryTest_GoalBase
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortQueryTest_GoalType">();
	}
	static class UFortQueryTest_GoalType* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortQueryTest_GoalType>();
	}
};
static_assert(alignof(UFortQueryTest_GoalType) == 0x000008, "Wrong alignment on UFortQueryTest_GoalType");
static_assert(sizeof(UFortQueryTest_GoalType) == 0x000268, "Wrong size on UFortQueryTest_GoalType");

class UFortAthenaBTTask_SteerMovement final : public UBTTaskNode
{
public:
	struct FBlackboardKeySelector                 SteerDirectionKeySelector;
	uint8                                         bSetControlRotation : 1;
	uint8                                         Pad_99[0x7];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortAthenaBTTask_SteerMovement">();
	}
	static class UFortAthenaBTTask_SteerMovement* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortAthenaBTTask_SteerMovement>();
	}
};
static_assert(alignof(UFortAthenaBTTask_SteerMovement) == 0x000008, "Wrong alignment on UFortAthenaBTTask_SteerMovement");
static_assert(sizeof(UFortAthenaBTTask_SteerMovement) == 0x0000A0, "Wrong size on UFortAthenaBTTask_SteerMovement");
static_assert(offsetof(UFortAthenaBTTask_SteerMovement, SteerDirectionKeySelector) == 0x000070, "Member 'UFortAthenaBTTask_SteerMovement::SteerDirectionKeySelector' has a wrong offset!");

class UFortQueryTest_GoalWithinTetheredBounds final : public UFortQueryTest_GoalBase
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortQueryTest_GoalWithinTetheredBounds">();
	}
	static class UFortQueryTest_GoalWithinTetheredBounds* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortQueryTest_GoalWithinTetheredBounds>();
	}
};
static_assert(alignof(UFortQueryTest_GoalWithinTetheredBounds) == 0x000008, "Wrong alignment on UFortQueryTest_GoalWithinTetheredBounds");
static_assert(sizeof(UFortQueryTest_GoalWithinTetheredBounds) == 0x000268, "Wrong size on UFortQueryTest_GoalWithinTetheredBounds");

class UFortQueryTest_HasNearbyBuildings final : public UEnvQueryTest
{
public:
	uint8                                         bIncludeCenter : 1;
	uint8                                         bIncludeFloors : 1;
	uint8                                         bIncludeFloorsAbove : 1;
	uint8                                         bIncludeWalls : 1;
	uint8                                         Pad_1F9[0x3];
	int32                                         ExtentXY;
	int32                                         ExtentZ;
	uint8                                         Pad_204[0x4];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortQueryTest_HasNearbyBuildings">();
	}
	static class UFortQueryTest_HasNearbyBuildings* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortQueryTest_HasNearbyBuildings>();
	}
};
static_assert(alignof(UFortQueryTest_HasNearbyBuildings) == 0x000008, "Wrong alignment on UFortQueryTest_HasNearbyBuildings");
static_assert(sizeof(UFortQueryTest_HasNearbyBuildings) == 0x000208, "Wrong size on UFortQueryTest_HasNearbyBuildings");
static_assert(offsetof(UFortQueryTest_HasNearbyBuildings, ExtentXY) == 0x0001FC, "Member 'UFortQueryTest_HasNearbyBuildings::ExtentXY' has a wrong offset!");
static_assert(offsetof(UFortQueryTest_HasNearbyBuildings, ExtentZ) == 0x000200, "Member 'UFortQueryTest_HasNearbyBuildings::ExtentZ' has a wrong offset!");

class UFortAthenaAIBotEvaluator_Ambush final : public UFortAthenaAIBotEvaluator_Movement
{
public:
	class FName                                   LastKnownPositionName;
	class FName                                   DestinationKeyName;
	class FName                                   MoveToDestinationKeyName;
	class FName                                   AggressivenessName;
	uint8                                         Pad_1A0[0x58];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortAthenaAIBotEvaluator_Ambush">();
	}
	static class UFortAthenaAIBotEvaluator_Ambush* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortAthenaAIBotEvaluator_Ambush>();
	}
};
static_assert(alignof(UFortAthenaAIBotEvaluator_Ambush) == 0x000008, "Wrong alignment on UFortAthenaAIBotEvaluator_Ambush");
static_assert(sizeof(UFortAthenaAIBotEvaluator_Ambush) == 0x0001F8, "Wrong size on UFortAthenaAIBotEvaluator_Ambush");
static_assert(offsetof(UFortAthenaAIBotEvaluator_Ambush, LastKnownPositionName) == 0x000190, "Member 'UFortAthenaAIBotEvaluator_Ambush::LastKnownPositionName' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotEvaluator_Ambush, DestinationKeyName) == 0x000194, "Member 'UFortAthenaAIBotEvaluator_Ambush::DestinationKeyName' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotEvaluator_Ambush, MoveToDestinationKeyName) == 0x000198, "Member 'UFortAthenaAIBotEvaluator_Ambush::MoveToDestinationKeyName' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotEvaluator_Ambush, AggressivenessName) == 0x00019C, "Member 'UFortAthenaAIBotEvaluator_Ambush::AggressivenessName' has a wrong offset!");

class UFortQueryTest_HasNearbyEncounterGoals final : public UEnvQueryTest
{
public:
	uint8                                         bOnlyActiveEncounters : 1;
	uint8                                         Pad_1F9[0x7];
	struct FAIDataProviderFloatValue              TestDistance;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortQueryTest_HasNearbyEncounterGoals">();
	}
	static class UFortQueryTest_HasNearbyEncounterGoals* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortQueryTest_HasNearbyEncounterGoals>();
	}
};
static_assert(alignof(UFortQueryTest_HasNearbyEncounterGoals) == 0x000008, "Wrong alignment on UFortQueryTest_HasNearbyEncounterGoals");
static_assert(sizeof(UFortQueryTest_HasNearbyEncounterGoals) == 0x000238, "Wrong size on UFortQueryTest_HasNearbyEncounterGoals");
static_assert(offsetof(UFortQueryTest_HasNearbyEncounterGoals, TestDistance) == 0x000200, "Member 'UFortQueryTest_HasNearbyEncounterGoals::TestDistance' has a wrong offset!");

class UFortQueryTest_Health final : public UEnvQueryTest
{
public:
	bool                                          bUsePercentHealth;
	uint8                                         Pad_1F9[0x7];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortQueryTest_Health">();
	}
	static class UFortQueryTest_Health* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortQueryTest_Health>();
	}
};
static_assert(alignof(UFortQueryTest_Health) == 0x000008, "Wrong alignment on UFortQueryTest_Health");
static_assert(sizeof(UFortQueryTest_Health) == 0x000200, "Wrong size on UFortQueryTest_Health");
static_assert(offsetof(UFortQueryTest_Health, bUsePercentHealth) == 0x0001F8, "Member 'UFortQueryTest_Health::bUsePercentHealth' has a wrong offset!");

class UFortQueryTest_IsInLeaderLOS final : public UEnvQueryTest
{
public:
	struct FGameplayTagQuery                      OwnerTagQuery;
	bool                                          bRequireLOSRayCast;
	uint8                                         Pad_241[0x3];
	float                                         RayCastLeaderVerticalOffset;
	float                                         RayCastItemVerticalOffset;
	float                                         MinDotProduct;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortQueryTest_IsInLeaderLOS">();
	}
	static class UFortQueryTest_IsInLeaderLOS* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortQueryTest_IsInLeaderLOS>();
	}
};
static_assert(alignof(UFortQueryTest_IsInLeaderLOS) == 0x000008, "Wrong alignment on UFortQueryTest_IsInLeaderLOS");
static_assert(sizeof(UFortQueryTest_IsInLeaderLOS) == 0x000250, "Wrong size on UFortQueryTest_IsInLeaderLOS");
static_assert(offsetof(UFortQueryTest_IsInLeaderLOS, OwnerTagQuery) == 0x0001F8, "Member 'UFortQueryTest_IsInLeaderLOS::OwnerTagQuery' has a wrong offset!");
static_assert(offsetof(UFortQueryTest_IsInLeaderLOS, bRequireLOSRayCast) == 0x000240, "Member 'UFortQueryTest_IsInLeaderLOS::bRequireLOSRayCast' has a wrong offset!");
static_assert(offsetof(UFortQueryTest_IsInLeaderLOS, RayCastLeaderVerticalOffset) == 0x000244, "Member 'UFortQueryTest_IsInLeaderLOS::RayCastLeaderVerticalOffset' has a wrong offset!");
static_assert(offsetof(UFortQueryTest_IsInLeaderLOS, RayCastItemVerticalOffset) == 0x000248, "Member 'UFortQueryTest_IsInLeaderLOS::RayCastItemVerticalOffset' has a wrong offset!");
static_assert(offsetof(UFortQueryTest_IsInLeaderLOS, MinDotProduct) == 0x00024C, "Member 'UFortQueryTest_IsInLeaderLOS::MinDotProduct' has a wrong offset!");

class UFortQueryTest_HealthAndShield final : public UEnvQueryTest
{
public:
	bool                                          bConsiderHealth;
	uint8                                         Pad_1F9[0x7];
	struct FAIDataProviderFloatValue              HealthMin;
	struct FAIDataProviderFloatValue              HealthMax;
	bool                                          bHealthAsPercent;
	bool                                          bConsiderShield;
	uint8                                         Pad_272[0x6];
	struct FAIDataProviderFloatValue              ShieldMin;
	struct FAIDataProviderFloatValue              ShieldMax;
	bool                                          bShieldAsPercent;
	uint8                                         Pad_2E9[0x7];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortQueryTest_HealthAndShield">();
	}
	static class UFortQueryTest_HealthAndShield* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortQueryTest_HealthAndShield>();
	}
};
static_assert(alignof(UFortQueryTest_HealthAndShield) == 0x000008, "Wrong alignment on UFortQueryTest_HealthAndShield");
static_assert(sizeof(UFortQueryTest_HealthAndShield) == 0x0002F0, "Wrong size on UFortQueryTest_HealthAndShield");
static_assert(offsetof(UFortQueryTest_HealthAndShield, bConsiderHealth) == 0x0001F8, "Member 'UFortQueryTest_HealthAndShield::bConsiderHealth' has a wrong offset!");
static_assert(offsetof(UFortQueryTest_HealthAndShield, HealthMin) == 0x000200, "Member 'UFortQueryTest_HealthAndShield::HealthMin' has a wrong offset!");
static_assert(offsetof(UFortQueryTest_HealthAndShield, HealthMax) == 0x000238, "Member 'UFortQueryTest_HealthAndShield::HealthMax' has a wrong offset!");
static_assert(offsetof(UFortQueryTest_HealthAndShield, bHealthAsPercent) == 0x000270, "Member 'UFortQueryTest_HealthAndShield::bHealthAsPercent' has a wrong offset!");
static_assert(offsetof(UFortQueryTest_HealthAndShield, bConsiderShield) == 0x000271, "Member 'UFortQueryTest_HealthAndShield::bConsiderShield' has a wrong offset!");
static_assert(offsetof(UFortQueryTest_HealthAndShield, ShieldMin) == 0x000278, "Member 'UFortQueryTest_HealthAndShield::ShieldMin' has a wrong offset!");
static_assert(offsetof(UFortQueryTest_HealthAndShield, ShieldMax) == 0x0002B0, "Member 'UFortQueryTest_HealthAndShield::ShieldMax' has a wrong offset!");
static_assert(offsetof(UFortQueryTest_HealthAndShield, bShieldAsPercent) == 0x0002E8, "Member 'UFortQueryTest_HealthAndShield::bShieldAsPercent' has a wrong offset!");

class UFortQueryTest_HotspotSlotOrientation final : public UEnvQueryTest
{
public:
	TSubclassOf<class UEnvQueryContext>           FaceToward;
	struct FAIDataProviderFloatValue              DotThreshold;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortQueryTest_HotspotSlotOrientation">();
	}
	static class UFortQueryTest_HotspotSlotOrientation* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortQueryTest_HotspotSlotOrientation>();
	}
};
static_assert(alignof(UFortQueryTest_HotspotSlotOrientation) == 0x000008, "Wrong alignment on UFortQueryTest_HotspotSlotOrientation");
static_assert(sizeof(UFortQueryTest_HotspotSlotOrientation) == 0x000238, "Wrong size on UFortQueryTest_HotspotSlotOrientation");
static_assert(offsetof(UFortQueryTest_HotspotSlotOrientation, FaceToward) == 0x0001F8, "Member 'UFortQueryTest_HotspotSlotOrientation::FaceToward' has a wrong offset!");
static_assert(offsetof(UFortQueryTest_HotspotSlotOrientation, DotThreshold) == 0x000200, "Member 'UFortQueryTest_HotspotSlotOrientation::DotThreshold' has a wrong offset!");

class UFortAthenaAIBotEvaluator_TakeCover final : public UFortAthenaAIBotEvaluator_Movement
{
public:
	class UFortAthenaAIBotRangeAttackDigestedSkillSet* CacheRangeAttackDigestedSkillSet;
	class UFortAthenaAIBotAimingDigestedSkillSet* CacheAimingDigestedSkillSet;
	class UAthenaAIServiceCover*                  CachedAIServiceCover;
	class FName                                   DestinationKeyName;
	class FName                                   MoveToDestinationKeyName;
	class FName                                   HealingStatusKeyName;
	class FName                                   WeaponFireName;
	class FName                                   TargetActorName;
	class FName                                   BunkerStatusKeyName;
	uint8                                         Pad_1C0[0x10];
	class ABuildingActor*                         CachedCoverBuildingActor;
	TArray<class ABuildingActor*>                 ExcludedBuildingActors;
	uint8                                         Pad_1E8[0x38];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortAthenaAIBotEvaluator_TakeCover">();
	}
	static class UFortAthenaAIBotEvaluator_TakeCover* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortAthenaAIBotEvaluator_TakeCover>();
	}
};
static_assert(alignof(UFortAthenaAIBotEvaluator_TakeCover) == 0x000008, "Wrong alignment on UFortAthenaAIBotEvaluator_TakeCover");
static_assert(sizeof(UFortAthenaAIBotEvaluator_TakeCover) == 0x000220, "Wrong size on UFortAthenaAIBotEvaluator_TakeCover");
static_assert(offsetof(UFortAthenaAIBotEvaluator_TakeCover, CacheRangeAttackDigestedSkillSet) == 0x000190, "Member 'UFortAthenaAIBotEvaluator_TakeCover::CacheRangeAttackDigestedSkillSet' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotEvaluator_TakeCover, CacheAimingDigestedSkillSet) == 0x000198, "Member 'UFortAthenaAIBotEvaluator_TakeCover::CacheAimingDigestedSkillSet' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotEvaluator_TakeCover, CachedAIServiceCover) == 0x0001A0, "Member 'UFortAthenaAIBotEvaluator_TakeCover::CachedAIServiceCover' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotEvaluator_TakeCover, DestinationKeyName) == 0x0001A8, "Member 'UFortAthenaAIBotEvaluator_TakeCover::DestinationKeyName' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotEvaluator_TakeCover, MoveToDestinationKeyName) == 0x0001AC, "Member 'UFortAthenaAIBotEvaluator_TakeCover::MoveToDestinationKeyName' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotEvaluator_TakeCover, HealingStatusKeyName) == 0x0001B0, "Member 'UFortAthenaAIBotEvaluator_TakeCover::HealingStatusKeyName' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotEvaluator_TakeCover, WeaponFireName) == 0x0001B4, "Member 'UFortAthenaAIBotEvaluator_TakeCover::WeaponFireName' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotEvaluator_TakeCover, TargetActorName) == 0x0001B8, "Member 'UFortAthenaAIBotEvaluator_TakeCover::TargetActorName' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotEvaluator_TakeCover, BunkerStatusKeyName) == 0x0001BC, "Member 'UFortAthenaAIBotEvaluator_TakeCover::BunkerStatusKeyName' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotEvaluator_TakeCover, CachedCoverBuildingActor) == 0x0001D0, "Member 'UFortAthenaAIBotEvaluator_TakeCover::CachedCoverBuildingActor' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotEvaluator_TakeCover, ExcludedBuildingActors) == 0x0001D8, "Member 'UFortAthenaAIBotEvaluator_TakeCover::ExcludedBuildingActors' has a wrong offset!");

class UFortQueryTest_HotspotSlotState final : public UEnvQueryTest
{
public:
	EAIHotSpotSlot                                SlotState;
	uint8                                         Pad_1F9[0x7];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortQueryTest_HotspotSlotState">();
	}
	static class UFortQueryTest_HotspotSlotState* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortQueryTest_HotspotSlotState>();
	}
};
static_assert(alignof(UFortQueryTest_HotspotSlotState) == 0x000008, "Wrong alignment on UFortQueryTest_HotspotSlotState");
static_assert(sizeof(UFortQueryTest_HotspotSlotState) == 0x000200, "Wrong size on UFortQueryTest_HotspotSlotState");
static_assert(offsetof(UFortQueryTest_HotspotSlotState, SlotState) == 0x0001F8, "Member 'UFortQueryTest_HotspotSlotState::SlotState' has a wrong offset!");

class UFortQueryTest_InfluenceScore final : public UEnvQueryTest
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortQueryTest_InfluenceScore">();
	}
	static class UFortQueryTest_InfluenceScore* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortQueryTest_InfluenceScore>();
	}
};
static_assert(alignof(UFortQueryTest_InfluenceScore) == 0x000008, "Wrong alignment on UFortQueryTest_InfluenceScore");
static_assert(sizeof(UFortQueryTest_InfluenceScore) == 0x0001F8, "Wrong size on UFortQueryTest_InfluenceScore");

class UFortAthenaBTTask_LeaveVehicle final : public UBTTaskNode
{
public:
	bool                                          bWaitVehicleStop;
	uint8                                         Pad_71[0x7];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortAthenaBTTask_LeaveVehicle">();
	}
	static class UFortAthenaBTTask_LeaveVehicle* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortAthenaBTTask_LeaveVehicle>();
	}
};
static_assert(alignof(UFortAthenaBTTask_LeaveVehicle) == 0x000008, "Wrong alignment on UFortAthenaBTTask_LeaveVehicle");
static_assert(sizeof(UFortAthenaBTTask_LeaveVehicle) == 0x000078, "Wrong size on UFortAthenaBTTask_LeaveVehicle");
static_assert(offsetof(UFortAthenaBTTask_LeaveVehicle, bWaitVehicleStop) == 0x000070, "Member 'UFortAthenaBTTask_LeaveVehicle::bWaitVehicleStop' has a wrong offset!");

class UFortQueryTest_InsideAIBotLeash final : public UEnvQueryTest
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortQueryTest_InsideAIBotLeash">();
	}
	static class UFortQueryTest_InsideAIBotLeash* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortQueryTest_InsideAIBotLeash>();
	}
};
static_assert(alignof(UFortQueryTest_InsideAIBotLeash) == 0x000008, "Wrong alignment on UFortQueryTest_InsideAIBotLeash");
static_assert(sizeof(UFortQueryTest_InsideAIBotLeash) == 0x0001F8, "Wrong size on UFortQueryTest_InsideAIBotLeash");

class UFortQueryTest_InsideAthenaLeash final : public UEnvQueryTest
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortQueryTest_InsideAthenaLeash">();
	}
	static class UFortQueryTest_InsideAthenaLeash* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortQueryTest_InsideAthenaLeash>();
	}
};
static_assert(alignof(UFortQueryTest_InsideAthenaLeash) == 0x000008, "Wrong alignment on UFortQueryTest_InsideAthenaLeash");
static_assert(sizeof(UFortQueryTest_InsideAthenaLeash) == 0x0001F8, "Wrong size on UFortQueryTest_InsideAthenaLeash");

class UFortQueryTest_InsideAthenaSafeZone final : public UEnvQueryTest
{
public:
	bool                                          bUseCurrentSafeZoneIndicatorRadius;
	uint8                                         Pad_1F9[0x7];
	struct FAIDataProviderIntValue                SafeZoneIndex;
	bool                                          bNextSafeZone;
	uint8                                         Pad_239[0x7];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortQueryTest_InsideAthenaSafeZone">();
	}
	static class UFortQueryTest_InsideAthenaSafeZone* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortQueryTest_InsideAthenaSafeZone>();
	}
};
static_assert(alignof(UFortQueryTest_InsideAthenaSafeZone) == 0x000008, "Wrong alignment on UFortQueryTest_InsideAthenaSafeZone");
static_assert(sizeof(UFortQueryTest_InsideAthenaSafeZone) == 0x000240, "Wrong size on UFortQueryTest_InsideAthenaSafeZone");
static_assert(offsetof(UFortQueryTest_InsideAthenaSafeZone, bUseCurrentSafeZoneIndicatorRadius) == 0x0001F8, "Member 'UFortQueryTest_InsideAthenaSafeZone::bUseCurrentSafeZoneIndicatorRadius' has a wrong offset!");
static_assert(offsetof(UFortQueryTest_InsideAthenaSafeZone, SafeZoneIndex) == 0x000200, "Member 'UFortQueryTest_InsideAthenaSafeZone::SafeZoneIndex' has a wrong offset!");
static_assert(offsetof(UFortQueryTest_InsideAthenaSafeZone, bNextSafeZone) == 0x000238, "Member 'UFortQueryTest_InsideAthenaSafeZone::bNextSafeZone' has a wrong offset!");

class UFortQueryTest_InsideBuilding final : public UEnvQueryTest
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortQueryTest_InsideBuilding">();
	}
	static class UFortQueryTest_InsideBuilding* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortQueryTest_InsideBuilding>();
	}
};
static_assert(alignof(UFortQueryTest_InsideBuilding) == 0x000008, "Wrong alignment on UFortQueryTest_InsideBuilding");
static_assert(sizeof(UFortQueryTest_InsideBuilding) == 0x0001F8, "Wrong size on UFortQueryTest_InsideBuilding");

class UFortAthenaBTService_ApplyGameplayTags final : public UBTService
{
public:
	struct FGameplayTagContainer                  GameplayTagsToApply;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortAthenaBTService_ApplyGameplayTags">();
	}
	static class UFortAthenaBTService_ApplyGameplayTags* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortAthenaBTService_ApplyGameplayTags>();
	}
};
static_assert(alignof(UFortAthenaBTService_ApplyGameplayTags) == 0x000008, "Wrong alignment on UFortAthenaBTService_ApplyGameplayTags");
static_assert(sizeof(UFortAthenaBTService_ApplyGameplayTags) == 0x000090, "Wrong size on UFortAthenaBTService_ApplyGameplayTags");
static_assert(offsetof(UFortAthenaBTService_ApplyGameplayTags, GameplayTagsToApply) == 0x000070, "Member 'UFortAthenaBTService_ApplyGameplayTags::GameplayTagsToApply' has a wrong offset!");

class UFortQueryTest_InsideWater final : public UEnvQueryTest
{
public:
	float                                         TestRadius;
	uint8                                         Pad_1FC[0x4];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortQueryTest_InsideWater">();
	}
	static class UFortQueryTest_InsideWater* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortQueryTest_InsideWater>();
	}
};
static_assert(alignof(UFortQueryTest_InsideWater) == 0x000008, "Wrong alignment on UFortQueryTest_InsideWater");
static_assert(sizeof(UFortQueryTest_InsideWater) == 0x000200, "Wrong size on UFortQueryTest_InsideWater");
static_assert(offsetof(UFortQueryTest_InsideWater, TestRadius) == 0x0001F8, "Member 'UFortQueryTest_InsideWater::TestRadius' has a wrong offset!");

class UFortQueryTest_IsCloseToHotspotSlot final : public UEnvQueryTest
{
public:
	TSubclassOf<class AFortAIHotSpot>             HotspotClass;
	struct FAIDataProviderFloatValue              Radius;
	bool                                          bIgnoreItemsWithSlotData;
	uint8                                         Pad_239[0x7];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortQueryTest_IsCloseToHotspotSlot">();
	}
	static class UFortQueryTest_IsCloseToHotspotSlot* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortQueryTest_IsCloseToHotspotSlot>();
	}
};
static_assert(alignof(UFortQueryTest_IsCloseToHotspotSlot) == 0x000008, "Wrong alignment on UFortQueryTest_IsCloseToHotspotSlot");
static_assert(sizeof(UFortQueryTest_IsCloseToHotspotSlot) == 0x000240, "Wrong size on UFortQueryTest_IsCloseToHotspotSlot");
static_assert(offsetof(UFortQueryTest_IsCloseToHotspotSlot, HotspotClass) == 0x0001F8, "Member 'UFortQueryTest_IsCloseToHotspotSlot::HotspotClass' has a wrong offset!");
static_assert(offsetof(UFortQueryTest_IsCloseToHotspotSlot, Radius) == 0x000200, "Member 'UFortQueryTest_IsCloseToHotspotSlot::Radius' has a wrong offset!");
static_assert(offsetof(UFortQueryTest_IsCloseToHotspotSlot, bIgnoreItemsWithSlotData) == 0x000238, "Member 'UFortQueryTest_IsCloseToHotspotSlot::bIgnoreItemsWithSlotData' has a wrong offset!");

class UFortAthenaAIBotEvaluator_SelectNextDynamicPOI final : public UFortAthenaAIBotEvaluator_Movement
{
public:
	class FName                                   DynamicPOIExecutionStatusKeyName;
	class FName                                   DynamicPOILocationKeyName;
	uint8                                         Pad_198[0x8];
	class AFortTeamInfoAthena*                    CachedTeamInfo;
	struct FTimerHandle                           NextSearchTimerHandle;
	TArray<struct FFailedToReachPOI>              FailedBotPOIList;
	int32                                         CachedSelectedBotPOIID;
	uint8                                         Pad_1C4[0x4];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortAthenaAIBotEvaluator_SelectNextDynamicPOI">();
	}
	static class UFortAthenaAIBotEvaluator_SelectNextDynamicPOI* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortAthenaAIBotEvaluator_SelectNextDynamicPOI>();
	}
};
static_assert(alignof(UFortAthenaAIBotEvaluator_SelectNextDynamicPOI) == 0x000008, "Wrong alignment on UFortAthenaAIBotEvaluator_SelectNextDynamicPOI");
static_assert(sizeof(UFortAthenaAIBotEvaluator_SelectNextDynamicPOI) == 0x0001C8, "Wrong size on UFortAthenaAIBotEvaluator_SelectNextDynamicPOI");
static_assert(offsetof(UFortAthenaAIBotEvaluator_SelectNextDynamicPOI, DynamicPOIExecutionStatusKeyName) == 0x000190, "Member 'UFortAthenaAIBotEvaluator_SelectNextDynamicPOI::DynamicPOIExecutionStatusKeyName' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotEvaluator_SelectNextDynamicPOI, DynamicPOILocationKeyName) == 0x000194, "Member 'UFortAthenaAIBotEvaluator_SelectNextDynamicPOI::DynamicPOILocationKeyName' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotEvaluator_SelectNextDynamicPOI, CachedTeamInfo) == 0x0001A0, "Member 'UFortAthenaAIBotEvaluator_SelectNextDynamicPOI::CachedTeamInfo' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotEvaluator_SelectNextDynamicPOI, NextSearchTimerHandle) == 0x0001A8, "Member 'UFortAthenaAIBotEvaluator_SelectNextDynamicPOI::NextSearchTimerHandle' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotEvaluator_SelectNextDynamicPOI, FailedBotPOIList) == 0x0001B0, "Member 'UFortAthenaAIBotEvaluator_SelectNextDynamicPOI::FailedBotPOIList' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotEvaluator_SelectNextDynamicPOI, CachedSelectedBotPOIID) == 0x0001C0, "Member 'UFortAthenaAIBotEvaluator_SelectNextDynamicPOI::CachedSelectedBotPOIID' has a wrong offset!");

class UFortQueryTest_IsCloseToPatrolWard final : public UEnvQueryTest
{
public:
	EWardAffectType                               WardEffectTypeFilter;
	uint8                                         Pad_1F9[0x7];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortQueryTest_IsCloseToPatrolWard">();
	}
	static class UFortQueryTest_IsCloseToPatrolWard* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortQueryTest_IsCloseToPatrolWard>();
	}
};
static_assert(alignof(UFortQueryTest_IsCloseToPatrolWard) == 0x000008, "Wrong alignment on UFortQueryTest_IsCloseToPatrolWard");
static_assert(sizeof(UFortQueryTest_IsCloseToPatrolWard) == 0x000200, "Wrong size on UFortQueryTest_IsCloseToPatrolWard");
static_assert(offsetof(UFortQueryTest_IsCloseToPatrolWard, WardEffectTypeFilter) == 0x0001F8, "Member 'UFortQueryTest_IsCloseToPatrolWard::WardEffectTypeFilter' has a wrong offset!");

class UFortQueryTest_IsGoalForAssignment final : public UEnvQueryTest
{
public:
	bool                                          bRetrieveRootAssignmentFromOwner;
	uint8                                         Pad_1F9[0x7];
	struct FFortAIAssignmentIdentifier            RootAssignmentID;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortQueryTest_IsGoalForAssignment">();
	}
	static class UFortQueryTest_IsGoalForAssignment* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortQueryTest_IsGoalForAssignment>();
	}
};
static_assert(alignof(UFortQueryTest_IsGoalForAssignment) == 0x000008, "Wrong alignment on UFortQueryTest_IsGoalForAssignment");
static_assert(sizeof(UFortQueryTest_IsGoalForAssignment) == 0x000230, "Wrong size on UFortQueryTest_IsGoalForAssignment");
static_assert(offsetof(UFortQueryTest_IsGoalForAssignment, bRetrieveRootAssignmentFromOwner) == 0x0001F8, "Member 'UFortQueryTest_IsGoalForAssignment::bRetrieveRootAssignmentFromOwner' has a wrong offset!");
static_assert(offsetof(UFortQueryTest_IsGoalForAssignment, RootAssignmentID) == 0x000200, "Member 'UFortQueryTest_IsGoalForAssignment::RootAssignmentID' has a wrong offset!");

class UFortQueryTest_IsGoalHostile final : public UFortQueryTest_GoalBase
{
public:
	struct FGameplayTagQuery                      OwnerTagQuery;
	struct FGameplayTagQuery                      EnemyPawnTagsToConsider;
	struct FGameplayTagContainer                  BuildingTagsToConsider;
	bool                                          bConsiderDefenders;
	uint8                                         Pad_319[0x7];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortQueryTest_IsGoalHostile">();
	}
	static class UFortQueryTest_IsGoalHostile* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortQueryTest_IsGoalHostile>();
	}
};
static_assert(alignof(UFortQueryTest_IsGoalHostile) == 0x000008, "Wrong alignment on UFortQueryTest_IsGoalHostile");
static_assert(sizeof(UFortQueryTest_IsGoalHostile) == 0x000320, "Wrong size on UFortQueryTest_IsGoalHostile");
static_assert(offsetof(UFortQueryTest_IsGoalHostile, OwnerTagQuery) == 0x000268, "Member 'UFortQueryTest_IsGoalHostile::OwnerTagQuery' has a wrong offset!");
static_assert(offsetof(UFortQueryTest_IsGoalHostile, EnemyPawnTagsToConsider) == 0x0002B0, "Member 'UFortQueryTest_IsGoalHostile::EnemyPawnTagsToConsider' has a wrong offset!");
static_assert(offsetof(UFortQueryTest_IsGoalHostile, BuildingTagsToConsider) == 0x0002F8, "Member 'UFortQueryTest_IsGoalHostile::BuildingTagsToConsider' has a wrong offset!");
static_assert(offsetof(UFortQueryTest_IsGoalHostile, bConsiderDefenders) == 0x000318, "Member 'UFortQueryTest_IsGoalHostile::bConsiderDefenders' has a wrong offset!");

class UFortQueryTest_IsObstructed final : public UEnvQueryTest_Trace
{
public:
	struct FAIDataProviderBoolValue               OverrideContextLocationXWithItemLocationX;
	struct FAIDataProviderBoolValue               OverrideContextLocationYWithItemLocationY;
	struct FAIDataProviderBoolValue               OverrideContextLocationZWithItemLocationZ;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortQueryTest_IsObstructed">();
	}
	static class UFortQueryTest_IsObstructed* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortQueryTest_IsObstructed>();
	}
};
static_assert(alignof(UFortQueryTest_IsObstructed) == 0x000008, "Wrong alignment on UFortQueryTest_IsObstructed");
static_assert(sizeof(UFortQueryTest_IsObstructed) == 0x000388, "Wrong size on UFortQueryTest_IsObstructed");
static_assert(offsetof(UFortQueryTest_IsObstructed, OverrideContextLocationXWithItemLocationX) == 0x0002E0, "Member 'UFortQueryTest_IsObstructed::OverrideContextLocationXWithItemLocationX' has a wrong offset!");
static_assert(offsetof(UFortQueryTest_IsObstructed, OverrideContextLocationYWithItemLocationY) == 0x000318, "Member 'UFortQueryTest_IsObstructed::OverrideContextLocationYWithItemLocationY' has a wrong offset!");
static_assert(offsetof(UFortQueryTest_IsObstructed, OverrideContextLocationZWithItemLocationZ) == 0x000350, "Member 'UFortQueryTest_IsObstructed::OverrideContextLocationZWithItemLocationZ' has a wrong offset!");

class UFortQueryTest_MissionGameplayTagMatch final : public UEnvQueryTest
{
public:
	struct FGameplayTagQuery                      MissionPlacementActorTagQuery;
	struct FGameplayTagContainer                  GameplayTagsToMatch;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortQueryTest_MissionGameplayTagMatch">();
	}
	static class UFortQueryTest_MissionGameplayTagMatch* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortQueryTest_MissionGameplayTagMatch>();
	}
};
static_assert(alignof(UFortQueryTest_MissionGameplayTagMatch) == 0x000008, "Wrong alignment on UFortQueryTest_MissionGameplayTagMatch");
static_assert(sizeof(UFortQueryTest_MissionGameplayTagMatch) == 0x000260, "Wrong size on UFortQueryTest_MissionGameplayTagMatch");
static_assert(offsetof(UFortQueryTest_MissionGameplayTagMatch, MissionPlacementActorTagQuery) == 0x0001F8, "Member 'UFortQueryTest_MissionGameplayTagMatch::MissionPlacementActorTagQuery' has a wrong offset!");
static_assert(offsetof(UFortQueryTest_MissionGameplayTagMatch, GameplayTagsToMatch) == 0x000240, "Member 'UFortQueryTest_MissionGameplayTagMatch::GameplayTagsToMatch' has a wrong offset!");

class UFortQueryTest_MissionSameMap final : public UEnvQueryTest
{
public:
	struct FGameplayTagQuery                      MissionPlacementActorTagQuery;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortQueryTest_MissionSameMap">();
	}
	static class UFortQueryTest_MissionSameMap* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortQueryTest_MissionSameMap>();
	}
};
static_assert(alignof(UFortQueryTest_MissionSameMap) == 0x000008, "Wrong alignment on UFortQueryTest_MissionSameMap");
static_assert(sizeof(UFortQueryTest_MissionSameMap) == 0x000240, "Wrong size on UFortQueryTest_MissionSameMap");
static_assert(offsetof(UFortQueryTest_MissionSameMap, MissionPlacementActorTagQuery) == 0x0001F8, "Member 'UFortQueryTest_MissionSameMap::MissionPlacementActorTagQuery' has a wrong offset!");

class UFortQueryTest_OnFlatSurface final : public UEnvQueryTest
{
public:
	float                                         Radius;
	float                                         ToleranceZ;
	float                                         TraceOffsetUp;
	float                                         TraceOffsetDown;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortQueryTest_OnFlatSurface">();
	}
	static class UFortQueryTest_OnFlatSurface* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortQueryTest_OnFlatSurface>();
	}
};
static_assert(alignof(UFortQueryTest_OnFlatSurface) == 0x000008, "Wrong alignment on UFortQueryTest_OnFlatSurface");
static_assert(sizeof(UFortQueryTest_OnFlatSurface) == 0x000208, "Wrong size on UFortQueryTest_OnFlatSurface");
static_assert(offsetof(UFortQueryTest_OnFlatSurface, Radius) == 0x0001F8, "Member 'UFortQueryTest_OnFlatSurface::Radius' has a wrong offset!");
static_assert(offsetof(UFortQueryTest_OnFlatSurface, ToleranceZ) == 0x0001FC, "Member 'UFortQueryTest_OnFlatSurface::ToleranceZ' has a wrong offset!");
static_assert(offsetof(UFortQueryTest_OnFlatSurface, TraceOffsetUp) == 0x000200, "Member 'UFortQueryTest_OnFlatSurface::TraceOffsetUp' has a wrong offset!");
static_assert(offsetof(UFortQueryTest_OnFlatSurface, TraceOffsetDown) == 0x000204, "Member 'UFortQueryTest_OnFlatSurface::TraceOffsetDown' has a wrong offset!");

class UFortQueryTest_PathfindingBatch final : public UEnvQueryTest_PathfindingBatch
{
public:
	struct FGameplayTag                           NavFilterTag;
	uint8                                         Pad_2BC[0x4];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortQueryTest_PathfindingBatch">();
	}
	static class UFortQueryTest_PathfindingBatch* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortQueryTest_PathfindingBatch>();
	}
};
static_assert(alignof(UFortQueryTest_PathfindingBatch) == 0x000008, "Wrong alignment on UFortQueryTest_PathfindingBatch");
static_assert(sizeof(UFortQueryTest_PathfindingBatch) == 0x0002C0, "Wrong size on UFortQueryTest_PathfindingBatch");
static_assert(offsetof(UFortQueryTest_PathfindingBatch, NavFilterTag) == 0x0002B8, "Member 'UFortQueryTest_PathfindingBatch::NavFilterTag' has a wrong offset!");

class UFortQueryTest_PawnIsDBNO final : public UFortQueryTest_GoalBase
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortQueryTest_PawnIsDBNO">();
	}
	static class UFortQueryTest_PawnIsDBNO* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortQueryTest_PawnIsDBNO>();
	}
};
static_assert(alignof(UFortQueryTest_PawnIsDBNO) == 0x000008, "Wrong alignment on UFortQueryTest_PawnIsDBNO");
static_assert(sizeof(UFortQueryTest_PawnIsDBNO) == 0x000268, "Wrong size on UFortQueryTest_PawnIsDBNO");

class UFortQueryTest_PerceptionAll final : public UFortQueryTest_GoalBase
{
public:
	struct FAIDataProviderFloatValue              SenseScores[0x6];
	TMap<TSubclassOf<class UAISense>, struct FAIDataProviderFloatValue> AdditionalSenseScores;
	struct FAIDataProviderFloatValue              MinSenseAge;
	struct FAIDataProviderFloatValue              MaxSenseAge;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortQueryTest_PerceptionAll">();
	}
	static class UFortQueryTest_PerceptionAll* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortQueryTest_PerceptionAll>();
	}
};
static_assert(alignof(UFortQueryTest_PerceptionAll) == 0x000008, "Wrong alignment on UFortQueryTest_PerceptionAll");
static_assert(sizeof(UFortQueryTest_PerceptionAll) == 0x000478, "Wrong size on UFortQueryTest_PerceptionAll");
static_assert(offsetof(UFortQueryTest_PerceptionAll, SenseScores) == 0x000268, "Member 'UFortQueryTest_PerceptionAll::SenseScores' has a wrong offset!");
static_assert(offsetof(UFortQueryTest_PerceptionAll, AdditionalSenseScores) == 0x0003B8, "Member 'UFortQueryTest_PerceptionAll::AdditionalSenseScores' has a wrong offset!");
static_assert(offsetof(UFortQueryTest_PerceptionAll, MinSenseAge) == 0x000408, "Member 'UFortQueryTest_PerceptionAll::MinSenseAge' has a wrong offset!");
static_assert(offsetof(UFortQueryTest_PerceptionAll, MaxSenseAge) == 0x000440, "Member 'UFortQueryTest_PerceptionAll::MaxSenseAge' has a wrong offset!");

class UFortQueryTest_PickupDropper final : public UFortQueryTest_GoalBase
{
public:
	struct FAIDataProviderFloatValue              ValueConverterDroppedPickup;
	struct FAIDataProviderFloatValue              ValueOtherDroppedPickupInitial;
	struct FAIDataProviderFloatValue              ValueOtherDroppedPickupFinal;
	struct FAIDataProviderFloatValue              TimeOtherDroppedPickupFinal;
	struct FAIDataProviderBoolValue               LerpFromInitialToFinal;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortQueryTest_PickupDropper">();
	}
	static class UFortQueryTest_PickupDropper* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortQueryTest_PickupDropper>();
	}
};
static_assert(alignof(UFortQueryTest_PickupDropper) == 0x000008, "Wrong alignment on UFortQueryTest_PickupDropper");
static_assert(sizeof(UFortQueryTest_PickupDropper) == 0x000380, "Wrong size on UFortQueryTest_PickupDropper");
static_assert(offsetof(UFortQueryTest_PickupDropper, ValueConverterDroppedPickup) == 0x000268, "Member 'UFortQueryTest_PickupDropper::ValueConverterDroppedPickup' has a wrong offset!");
static_assert(offsetof(UFortQueryTest_PickupDropper, ValueOtherDroppedPickupInitial) == 0x0002A0, "Member 'UFortQueryTest_PickupDropper::ValueOtherDroppedPickupInitial' has a wrong offset!");
static_assert(offsetof(UFortQueryTest_PickupDropper, ValueOtherDroppedPickupFinal) == 0x0002D8, "Member 'UFortQueryTest_PickupDropper::ValueOtherDroppedPickupFinal' has a wrong offset!");
static_assert(offsetof(UFortQueryTest_PickupDropper, TimeOtherDroppedPickupFinal) == 0x000310, "Member 'UFortQueryTest_PickupDropper::TimeOtherDroppedPickupFinal' has a wrong offset!");
static_assert(offsetof(UFortQueryTest_PickupDropper, LerpFromInitialToFinal) == 0x000348, "Member 'UFortQueryTest_PickupDropper::LerpFromInitialToFinal' has a wrong offset!");

class UFortQueryTest_PrimaryAssignment final : public UFortQueryTest_GoalBase
{
public:
	bool                                          bUseItemActorLocation;
	uint8                                         Pad_269[0x7];
	struct FAIDataProviderFloatValue              DistanceClose;
	struct FAIDataProviderFloatValue              DistanceFar;
	struct FAIDataProviderFloatValue              PercentValueClose;
	struct FAIDataProviderFloatValue              PercentValueRegular;
	struct FAIDataProviderFloatValue              PercentValueFar;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortQueryTest_PrimaryAssignment">();
	}
	static class UFortQueryTest_PrimaryAssignment* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortQueryTest_PrimaryAssignment>();
	}
};
static_assert(alignof(UFortQueryTest_PrimaryAssignment) == 0x000008, "Wrong alignment on UFortQueryTest_PrimaryAssignment");
static_assert(sizeof(UFortQueryTest_PrimaryAssignment) == 0x000388, "Wrong size on UFortQueryTest_PrimaryAssignment");
static_assert(offsetof(UFortQueryTest_PrimaryAssignment, bUseItemActorLocation) == 0x000268, "Member 'UFortQueryTest_PrimaryAssignment::bUseItemActorLocation' has a wrong offset!");
static_assert(offsetof(UFortQueryTest_PrimaryAssignment, DistanceClose) == 0x000270, "Member 'UFortQueryTest_PrimaryAssignment::DistanceClose' has a wrong offset!");
static_assert(offsetof(UFortQueryTest_PrimaryAssignment, DistanceFar) == 0x0002A8, "Member 'UFortQueryTest_PrimaryAssignment::DistanceFar' has a wrong offset!");
static_assert(offsetof(UFortQueryTest_PrimaryAssignment, PercentValueClose) == 0x0002E0, "Member 'UFortQueryTest_PrimaryAssignment::PercentValueClose' has a wrong offset!");
static_assert(offsetof(UFortQueryTest_PrimaryAssignment, PercentValueRegular) == 0x000318, "Member 'UFortQueryTest_PrimaryAssignment::PercentValueRegular' has a wrong offset!");
static_assert(offsetof(UFortQueryTest_PrimaryAssignment, PercentValueFar) == 0x000350, "Member 'UFortQueryTest_PrimaryAssignment::PercentValueFar' has a wrong offset!");

class UFortQueryTest_Random final : public UEnvQueryTest
{
public:
	uint8                                         bUseRandomSeedForAI : 1;
	uint8                                         bUseRandomSeedForOthers : 1;
	uint8                                         Pad_1F9[0x7];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortQueryTest_Random">();
	}
	static class UFortQueryTest_Random* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortQueryTest_Random>();
	}
};
static_assert(alignof(UFortQueryTest_Random) == 0x000008, "Wrong alignment on UFortQueryTest_Random");
static_assert(sizeof(UFortQueryTest_Random) == 0x000200, "Wrong size on UFortQueryTest_Random");

class UFortQueryTest_TowardNextAthenaSafeZone final : public UEnvQueryTest
{
public:
	struct FAIDataProviderIntValue                SafeZoneIndex;
	bool                                          bCheckAcceptanceAngleTowardNextCenter;
	uint8                                         Pad_231[0x3];
	float                                         AcceptanceAngleTowardNextCenter;
	TArray<int32>                                 ExclusionSafeZoneIndex;
	uint8                                         Pad_248[0x8];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortQueryTest_TowardNextAthenaSafeZone">();
	}
	static class UFortQueryTest_TowardNextAthenaSafeZone* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortQueryTest_TowardNextAthenaSafeZone>();
	}
};
static_assert(alignof(UFortQueryTest_TowardNextAthenaSafeZone) == 0x000008, "Wrong alignment on UFortQueryTest_TowardNextAthenaSafeZone");
static_assert(sizeof(UFortQueryTest_TowardNextAthenaSafeZone) == 0x000250, "Wrong size on UFortQueryTest_TowardNextAthenaSafeZone");
static_assert(offsetof(UFortQueryTest_TowardNextAthenaSafeZone, SafeZoneIndex) == 0x0001F8, "Member 'UFortQueryTest_TowardNextAthenaSafeZone::SafeZoneIndex' has a wrong offset!");
static_assert(offsetof(UFortQueryTest_TowardNextAthenaSafeZone, bCheckAcceptanceAngleTowardNextCenter) == 0x000230, "Member 'UFortQueryTest_TowardNextAthenaSafeZone::bCheckAcceptanceAngleTowardNextCenter' has a wrong offset!");
static_assert(offsetof(UFortQueryTest_TowardNextAthenaSafeZone, AcceptanceAngleTowardNextCenter) == 0x000234, "Member 'UFortQueryTest_TowardNextAthenaSafeZone::AcceptanceAngleTowardNextCenter' has a wrong offset!");
static_assert(offsetof(UFortQueryTest_TowardNextAthenaSafeZone, ExclusionSafeZoneIndex) == 0x000238, "Member 'UFortQueryTest_TowardNextAthenaSafeZone::ExclusionSafeZoneIndex' has a wrong offset!");

class UFortQueryTest_ValidSurface final : public UEnvQueryTest
{
public:
	struct FAIDataProviderFloatValue              Radius;
	struct FAIDataProviderFloatValue              TraceOffsetUp;
	struct FAIDataProviderFloatValue              TraceOffsetDown;
	ECollisionChannel                             TraceCollisionChannel;
	uint8                                         Pad_2A1[0x7];
	struct FAIDataProviderFloatValue              FlatSurfaceToleranceZ;
	TArray<TSoftObjectPtr<class UPhysicalMaterial>> SurfaceMaterials;
	bool                                          bAreSurfaceMaterialsValid;
	uint8                                         Pad_2F1[0x7];
	TArray<TSoftClassPtr<class UClass>>           ValidHitActorClasses;
	TArray<TSoftClassPtr<class UClass>>           InvalidHitActorClasses;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortQueryTest_ValidSurface">();
	}
	static class UFortQueryTest_ValidSurface* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortQueryTest_ValidSurface>();
	}
};
static_assert(alignof(UFortQueryTest_ValidSurface) == 0x000008, "Wrong alignment on UFortQueryTest_ValidSurface");
static_assert(sizeof(UFortQueryTest_ValidSurface) == 0x000318, "Wrong size on UFortQueryTest_ValidSurface");
static_assert(offsetof(UFortQueryTest_ValidSurface, Radius) == 0x0001F8, "Member 'UFortQueryTest_ValidSurface::Radius' has a wrong offset!");
static_assert(offsetof(UFortQueryTest_ValidSurface, TraceOffsetUp) == 0x000230, "Member 'UFortQueryTest_ValidSurface::TraceOffsetUp' has a wrong offset!");
static_assert(offsetof(UFortQueryTest_ValidSurface, TraceOffsetDown) == 0x000268, "Member 'UFortQueryTest_ValidSurface::TraceOffsetDown' has a wrong offset!");
static_assert(offsetof(UFortQueryTest_ValidSurface, TraceCollisionChannel) == 0x0002A0, "Member 'UFortQueryTest_ValidSurface::TraceCollisionChannel' has a wrong offset!");
static_assert(offsetof(UFortQueryTest_ValidSurface, FlatSurfaceToleranceZ) == 0x0002A8, "Member 'UFortQueryTest_ValidSurface::FlatSurfaceToleranceZ' has a wrong offset!");
static_assert(offsetof(UFortQueryTest_ValidSurface, SurfaceMaterials) == 0x0002E0, "Member 'UFortQueryTest_ValidSurface::SurfaceMaterials' has a wrong offset!");
static_assert(offsetof(UFortQueryTest_ValidSurface, bAreSurfaceMaterialsValid) == 0x0002F0, "Member 'UFortQueryTest_ValidSurface::bAreSurfaceMaterialsValid' has a wrong offset!");
static_assert(offsetof(UFortQueryTest_ValidSurface, ValidHitActorClasses) == 0x0002F8, "Member 'UFortQueryTest_ValidSurface::ValidHitActorClasses' has a wrong offset!");
static_assert(offsetof(UFortQueryTest_ValidSurface, InvalidHitActorClasses) == 0x000308, "Member 'UFortQueryTest_ValidSurface::InvalidHitActorClasses' has a wrong offset!");

class UFortQueryTest_WithinHotfixVolumeBounds final : public UEnvQueryTest
{
public:
	class UDataTable*                             BoundsTable;
	struct FVector                                BoundsExtentBuffer;
	bool                                          bXYOnly;
	uint8                                         Pad_219[0x7];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortQueryTest_WithinHotfixVolumeBounds">();
	}
	static class UFortQueryTest_WithinHotfixVolumeBounds* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortQueryTest_WithinHotfixVolumeBounds>();
	}
};
static_assert(alignof(UFortQueryTest_WithinHotfixVolumeBounds) == 0x000008, "Wrong alignment on UFortQueryTest_WithinHotfixVolumeBounds");
static_assert(sizeof(UFortQueryTest_WithinHotfixVolumeBounds) == 0x000220, "Wrong size on UFortQueryTest_WithinHotfixVolumeBounds");
static_assert(offsetof(UFortQueryTest_WithinHotfixVolumeBounds, BoundsTable) == 0x0001F8, "Member 'UFortQueryTest_WithinHotfixVolumeBounds::BoundsTable' has a wrong offset!");
static_assert(offsetof(UFortQueryTest_WithinHotfixVolumeBounds, BoundsExtentBuffer) == 0x000200, "Member 'UFortQueryTest_WithinHotfixVolumeBounds::BoundsExtentBuffer' has a wrong offset!");
static_assert(offsetof(UFortQueryTest_WithinHotfixVolumeBounds, bXYOnly) == 0x000218, "Member 'UFortQueryTest_WithinHotfixVolumeBounds::bXYOnly' has a wrong offset!");

class UFortQueryTest_WithinTaggedArea final : public UEnvQueryTest
{
public:
	struct FGameplayTagQuery                      TagQuery;
	struct FVector                                AreaExtentBuffer;
	bool                                          bAssumeInfiniteHeightForArea;
	uint8                                         Pad_259[0x7];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortQueryTest_WithinTaggedArea">();
	}
	static class UFortQueryTest_WithinTaggedArea* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortQueryTest_WithinTaggedArea>();
	}
};
static_assert(alignof(UFortQueryTest_WithinTaggedArea) == 0x000008, "Wrong alignment on UFortQueryTest_WithinTaggedArea");
static_assert(sizeof(UFortQueryTest_WithinTaggedArea) == 0x000260, "Wrong size on UFortQueryTest_WithinTaggedArea");
static_assert(offsetof(UFortQueryTest_WithinTaggedArea, TagQuery) == 0x0001F8, "Member 'UFortQueryTest_WithinTaggedArea::TagQuery' has a wrong offset!");
static_assert(offsetof(UFortQueryTest_WithinTaggedArea, AreaExtentBuffer) == 0x000240, "Member 'UFortQueryTest_WithinTaggedArea::AreaExtentBuffer' has a wrong offset!");
static_assert(offsetof(UFortQueryTest_WithinTaggedArea, bAssumeInfiniteHeightForArea) == 0x000258, "Member 'UFortQueryTest_WithinTaggedArea::bAssumeInfiniteHeightForArea' has a wrong offset!");

class UFortAthenaBTTask_BotAmbushPlayer final : public UBTTask_Wait
{
public:
	float                                         FacingPrecision;
	float                                         WeaponCooldown;
	bool                                          bClearBlackboardOnFinished;
	uint8                                         Pad_81[0x7];
	struct FBlackboardKeySelector                 TargetedPlayerKeySelector;
	struct FBlackboardKeySelector                 MaxLocationErrorKeySelector;
	struct FBlackboardKeySelector                 MinLocationErrorKeySelector;
	uint8                                         Pad_100[0x8];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortAthenaBTTask_BotAmbushPlayer">();
	}
	static class UFortAthenaBTTask_BotAmbushPlayer* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortAthenaBTTask_BotAmbushPlayer>();
	}
};
static_assert(alignof(UFortAthenaBTTask_BotAmbushPlayer) == 0x000008, "Wrong alignment on UFortAthenaBTTask_BotAmbushPlayer");
static_assert(sizeof(UFortAthenaBTTask_BotAmbushPlayer) == 0x000108, "Wrong size on UFortAthenaBTTask_BotAmbushPlayer");
static_assert(offsetof(UFortAthenaBTTask_BotAmbushPlayer, FacingPrecision) == 0x000078, "Member 'UFortAthenaBTTask_BotAmbushPlayer::FacingPrecision' has a wrong offset!");
static_assert(offsetof(UFortAthenaBTTask_BotAmbushPlayer, WeaponCooldown) == 0x00007C, "Member 'UFortAthenaBTTask_BotAmbushPlayer::WeaponCooldown' has a wrong offset!");
static_assert(offsetof(UFortAthenaBTTask_BotAmbushPlayer, bClearBlackboardOnFinished) == 0x000080, "Member 'UFortAthenaBTTask_BotAmbushPlayer::bClearBlackboardOnFinished' has a wrong offset!");
static_assert(offsetof(UFortAthenaBTTask_BotAmbushPlayer, TargetedPlayerKeySelector) == 0x000088, "Member 'UFortAthenaBTTask_BotAmbushPlayer::TargetedPlayerKeySelector' has a wrong offset!");
static_assert(offsetof(UFortAthenaBTTask_BotAmbushPlayer, MaxLocationErrorKeySelector) == 0x0000B0, "Member 'UFortAthenaBTTask_BotAmbushPlayer::MaxLocationErrorKeySelector' has a wrong offset!");
static_assert(offsetof(UFortAthenaBTTask_BotAmbushPlayer, MinLocationErrorKeySelector) == 0x0000D8, "Member 'UFortAthenaBTTask_BotAmbushPlayer::MinLocationErrorKeySelector' has a wrong offset!");

class UFortAthenaAIBotEvaluator_AimDownSight final : public UFortAthenaAIBotEvaluator
{
public:
	class FName                                   WeaponKeyName;
	class FName                                   ThrowableAttacksName;
	class FName                                   TargetActorName;
	class FName                                   UrgentMovementName;
	bool                                          bSkipTargetChecks;
	uint8                                         Pad_A1[0x7];
	class UFortAthenaAIBotAimingDigestedSkillSet* CacheAimingDigestedSkillSet;
	uint8                                         Pad_B0[0x10];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortAthenaAIBotEvaluator_AimDownSight">();
	}
	static class UFortAthenaAIBotEvaluator_AimDownSight* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortAthenaAIBotEvaluator_AimDownSight>();
	}
};
static_assert(alignof(UFortAthenaAIBotEvaluator_AimDownSight) == 0x000008, "Wrong alignment on UFortAthenaAIBotEvaluator_AimDownSight");
static_assert(sizeof(UFortAthenaAIBotEvaluator_AimDownSight) == 0x0000C0, "Wrong size on UFortAthenaAIBotEvaluator_AimDownSight");
static_assert(offsetof(UFortAthenaAIBotEvaluator_AimDownSight, WeaponKeyName) == 0x000090, "Member 'UFortAthenaAIBotEvaluator_AimDownSight::WeaponKeyName' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotEvaluator_AimDownSight, ThrowableAttacksName) == 0x000094, "Member 'UFortAthenaAIBotEvaluator_AimDownSight::ThrowableAttacksName' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotEvaluator_AimDownSight, TargetActorName) == 0x000098, "Member 'UFortAthenaAIBotEvaluator_AimDownSight::TargetActorName' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotEvaluator_AimDownSight, UrgentMovementName) == 0x00009C, "Member 'UFortAthenaAIBotEvaluator_AimDownSight::UrgentMovementName' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotEvaluator_AimDownSight, bSkipTargetChecks) == 0x0000A0, "Member 'UFortAthenaAIBotEvaluator_AimDownSight::bSkipTargetChecks' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotEvaluator_AimDownSight, CacheAimingDigestedSkillSet) == 0x0000A8, "Member 'UFortAthenaAIBotEvaluator_AimDownSight::CacheAimingDigestedSkillSet' has a wrong offset!");

class UFortAthenaAIBotEvaluator_Bunker final : public UFortAthenaAIBotEvaluator_Movement
{
public:
	class FName                                   BuildExecutionStatusKeyName;
	class FName                                   HealingStatusKeyName;
	struct FGameplayTagContainer                  DangerTags;
	uint8                                         Pad_1B8[0x90];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortAthenaAIBotEvaluator_Bunker">();
	}
	static class UFortAthenaAIBotEvaluator_Bunker* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortAthenaAIBotEvaluator_Bunker>();
	}
};
static_assert(alignof(UFortAthenaAIBotEvaluator_Bunker) == 0x000008, "Wrong alignment on UFortAthenaAIBotEvaluator_Bunker");
static_assert(sizeof(UFortAthenaAIBotEvaluator_Bunker) == 0x000248, "Wrong size on UFortAthenaAIBotEvaluator_Bunker");
static_assert(offsetof(UFortAthenaAIBotEvaluator_Bunker, BuildExecutionStatusKeyName) == 0x000190, "Member 'UFortAthenaAIBotEvaluator_Bunker::BuildExecutionStatusKeyName' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotEvaluator_Bunker, HealingStatusKeyName) == 0x000194, "Member 'UFortAthenaAIBotEvaluator_Bunker::HealingStatusKeyName' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotEvaluator_Bunker, DangerTags) == 0x000198, "Member 'UFortAthenaAIBotEvaluator_Bunker::DangerTags' has a wrong offset!");

class UFortAthenaAIBotEvaluator_CharacterLaunched final : public UFortAthenaAIBotEvaluator
{
public:
	bool                                          bSteerInSameDirectionAsLaunchVelocity;
	uint8                                         Pad_91[0x3];
	class FName                                   CharacterLaunchedExecutionStatusKeyName;
	class FName                                   SteerDirectionKeyName;
	uint8                                         Pad_9C[0x4];
	struct FVector                                LastLaunchVelocity;
	class UFortAthenaAIBotMovementDigestedSkillSet* CachedMovementSkillSet;
	uint8                                         Pad_C0[0x10];

public:
	void OnZiplineStateChanged(bool bIsZiplining, class AFortPlayerPawn* FortPlayerPawn);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortAthenaAIBotEvaluator_CharacterLaunched">();
	}
	static class UFortAthenaAIBotEvaluator_CharacterLaunched* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortAthenaAIBotEvaluator_CharacterLaunched>();
	}
};
static_assert(alignof(UFortAthenaAIBotEvaluator_CharacterLaunched) == 0x000008, "Wrong alignment on UFortAthenaAIBotEvaluator_CharacterLaunched");
static_assert(sizeof(UFortAthenaAIBotEvaluator_CharacterLaunched) == 0x0000D0, "Wrong size on UFortAthenaAIBotEvaluator_CharacterLaunched");
static_assert(offsetof(UFortAthenaAIBotEvaluator_CharacterLaunched, bSteerInSameDirectionAsLaunchVelocity) == 0x000090, "Member 'UFortAthenaAIBotEvaluator_CharacterLaunched::bSteerInSameDirectionAsLaunchVelocity' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotEvaluator_CharacterLaunched, CharacterLaunchedExecutionStatusKeyName) == 0x000094, "Member 'UFortAthenaAIBotEvaluator_CharacterLaunched::CharacterLaunchedExecutionStatusKeyName' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotEvaluator_CharacterLaunched, SteerDirectionKeyName) == 0x000098, "Member 'UFortAthenaAIBotEvaluator_CharacterLaunched::SteerDirectionKeyName' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotEvaluator_CharacterLaunched, LastLaunchVelocity) == 0x0000A0, "Member 'UFortAthenaAIBotEvaluator_CharacterLaunched::LastLaunchVelocity' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotEvaluator_CharacterLaunched, CachedMovementSkillSet) == 0x0000B8, "Member 'UFortAthenaAIBotEvaluator_CharacterLaunched::CachedMovementSkillSet' has a wrong offset!");

class UFortAthenaAIBotEvaluator_Converted final : public UFortAthenaAIBotEvaluator_Movement
{
public:
	class FName                                   ShouldMoveTowardsConverterName;
	class FName                                   ShouldTeleportTowardsConverterName;
	class FName                                   ConvertedAllowPatrolAroundName;
	class FName                                   ConvertedAllowScanAroundWhenWaitingName;
	class FName                                   ConvertedDestinationName;
	class FName                                   CrouchExecutionStatusName;
	struct FVector                                TeleportLocationProjectionExtent;
	struct FVector                                MovingFromLosLocationProjectionExtent;
	uint8                                         Pad_1D8[0x8];
	class AFortPawn*                              ConverterPawn;
	class UFortAthenaAIRuntimeParameters_AIBotConvert* CachedAIBotConvertParameters;
	uint8                                         Pad_1F0[0x10];

public:
	void OnConvertedEvent(class AFortPawn* InstigatorPawn, class AFortPawn* ConvertedPawn);
	void OnUnconvertedEvent(class AFortPawn* UnconvertedPawn, const EUnconvertReason UnconvertReason);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortAthenaAIBotEvaluator_Converted">();
	}
	static class UFortAthenaAIBotEvaluator_Converted* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortAthenaAIBotEvaluator_Converted>();
	}
};
static_assert(alignof(UFortAthenaAIBotEvaluator_Converted) == 0x000008, "Wrong alignment on UFortAthenaAIBotEvaluator_Converted");
static_assert(sizeof(UFortAthenaAIBotEvaluator_Converted) == 0x000200, "Wrong size on UFortAthenaAIBotEvaluator_Converted");
static_assert(offsetof(UFortAthenaAIBotEvaluator_Converted, ShouldMoveTowardsConverterName) == 0x000190, "Member 'UFortAthenaAIBotEvaluator_Converted::ShouldMoveTowardsConverterName' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotEvaluator_Converted, ShouldTeleportTowardsConverterName) == 0x000194, "Member 'UFortAthenaAIBotEvaluator_Converted::ShouldTeleportTowardsConverterName' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotEvaluator_Converted, ConvertedAllowPatrolAroundName) == 0x000198, "Member 'UFortAthenaAIBotEvaluator_Converted::ConvertedAllowPatrolAroundName' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotEvaluator_Converted, ConvertedAllowScanAroundWhenWaitingName) == 0x00019C, "Member 'UFortAthenaAIBotEvaluator_Converted::ConvertedAllowScanAroundWhenWaitingName' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotEvaluator_Converted, ConvertedDestinationName) == 0x0001A0, "Member 'UFortAthenaAIBotEvaluator_Converted::ConvertedDestinationName' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotEvaluator_Converted, CrouchExecutionStatusName) == 0x0001A4, "Member 'UFortAthenaAIBotEvaluator_Converted::CrouchExecutionStatusName' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotEvaluator_Converted, TeleportLocationProjectionExtent) == 0x0001A8, "Member 'UFortAthenaAIBotEvaluator_Converted::TeleportLocationProjectionExtent' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotEvaluator_Converted, MovingFromLosLocationProjectionExtent) == 0x0001C0, "Member 'UFortAthenaAIBotEvaluator_Converted::MovingFromLosLocationProjectionExtent' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotEvaluator_Converted, ConverterPawn) == 0x0001E0, "Member 'UFortAthenaAIBotEvaluator_Converted::ConverterPawn' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotEvaluator_Converted, CachedAIBotConvertParameters) == 0x0001E8, "Member 'UFortAthenaAIBotEvaluator_Converted::CachedAIBotConvertParameters' has a wrong offset!");

class UFortAthenaAIBotEvaluator_TagQuery : public UFortAthenaAIBotEvaluator
{
public:
	struct FGameplayTagQuery                      TagQuery;
	class UAbilitySystemComponent*                CachedAbilitySystemComponent;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortAthenaAIBotEvaluator_TagQuery">();
	}
	static class UFortAthenaAIBotEvaluator_TagQuery* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortAthenaAIBotEvaluator_TagQuery>();
	}
};
static_assert(alignof(UFortAthenaAIBotEvaluator_TagQuery) == 0x000008, "Wrong alignment on UFortAthenaAIBotEvaluator_TagQuery");
static_assert(sizeof(UFortAthenaAIBotEvaluator_TagQuery) == 0x0000E0, "Wrong size on UFortAthenaAIBotEvaluator_TagQuery");
static_assert(offsetof(UFortAthenaAIBotEvaluator_TagQuery, TagQuery) == 0x000090, "Member 'UFortAthenaAIBotEvaluator_TagQuery::TagQuery' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotEvaluator_TagQuery, CachedAbilitySystemComponent) == 0x0000D8, "Member 'UFortAthenaAIBotEvaluator_TagQuery::CachedAbilitySystemComponent' has a wrong offset!");

class UFortAthenaAIBotEvaluator_DangerDetection final : public UFortAthenaAIBotEvaluator_TagQuery
{
public:
	uint8                                         Pad_E0[0x10];
	TSubclassOf<class UFortNavArea>               DangerNavAreaClass;
	float                                         TimeToCheckForDangerAfterValidQuery;
	float                                         MaxRadiusToSearchForSafePlace;
	class FName                                   DangerZoneDetectedExecutionStatusName;
	class FName                                   DangerZoneDetectedSafeLocationKeyName;
	uint8                                         Pad_108[0x8];
	class UFortAthenaAIBotMovementDigestedSkillSet* CachedMovementSkillSet;
	class UAthenaAIServiceZoneManager*            CacheZoneManager;
	uint8                                         Pad_120[0x10];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortAthenaAIBotEvaluator_DangerDetection">();
	}
	static class UFortAthenaAIBotEvaluator_DangerDetection* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortAthenaAIBotEvaluator_DangerDetection>();
	}
};
static_assert(alignof(UFortAthenaAIBotEvaluator_DangerDetection) == 0x000008, "Wrong alignment on UFortAthenaAIBotEvaluator_DangerDetection");
static_assert(sizeof(UFortAthenaAIBotEvaluator_DangerDetection) == 0x000130, "Wrong size on UFortAthenaAIBotEvaluator_DangerDetection");
static_assert(offsetof(UFortAthenaAIBotEvaluator_DangerDetection, DangerNavAreaClass) == 0x0000F0, "Member 'UFortAthenaAIBotEvaluator_DangerDetection::DangerNavAreaClass' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotEvaluator_DangerDetection, TimeToCheckForDangerAfterValidQuery) == 0x0000F8, "Member 'UFortAthenaAIBotEvaluator_DangerDetection::TimeToCheckForDangerAfterValidQuery' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotEvaluator_DangerDetection, MaxRadiusToSearchForSafePlace) == 0x0000FC, "Member 'UFortAthenaAIBotEvaluator_DangerDetection::MaxRadiusToSearchForSafePlace' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotEvaluator_DangerDetection, DangerZoneDetectedExecutionStatusName) == 0x000100, "Member 'UFortAthenaAIBotEvaluator_DangerDetection::DangerZoneDetectedExecutionStatusName' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotEvaluator_DangerDetection, DangerZoneDetectedSafeLocationKeyName) == 0x000104, "Member 'UFortAthenaAIBotEvaluator_DangerDetection::DangerZoneDetectedSafeLocationKeyName' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotEvaluator_DangerDetection, CachedMovementSkillSet) == 0x000110, "Member 'UFortAthenaAIBotEvaluator_DangerDetection::CachedMovementSkillSet' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotEvaluator_DangerDetection, CacheZoneManager) == 0x000118, "Member 'UFortAthenaAIBotEvaluator_DangerDetection::CacheZoneManager' has a wrong offset!");

class UFortAthenaAIBotEvaluator_DBNO final : public UFortAthenaAIBotEvaluator_Movement
{
public:
	class FName                                   DBNODestinationKeyName;
	uint8                                         Pad_194[0x2];
	uint8                                         bAllowReachSquadmates : 1;
	uint8                                         bAllowReachSameFactionNPCs : 1;
	uint8                                         Pad_197[0x1];
	TArray<class AFortPlayerPawnAthena*>          AllyPawns;
	struct FVector                                CachedCurrentDestination;
	class UFortAthenaAIBotDBNODigestedSkillSet*   DBNOSkillSet;
	class UFortAthenaAICoverComponent*            CachedCoverComponent;
	class UFortAthenaAIRuntimeParameters_DBNOBehavior* DBNOBehaviorRuntimeParameters;
	uint8                                         Pad_1D8[0x10];

public:
	void OnAllyPawnDBNOStateChanged(class AFortPawn* InPlayer, bool bInIsDBNO);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortAthenaAIBotEvaluator_DBNO">();
	}
	static class UFortAthenaAIBotEvaluator_DBNO* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortAthenaAIBotEvaluator_DBNO>();
	}
};
static_assert(alignof(UFortAthenaAIBotEvaluator_DBNO) == 0x000008, "Wrong alignment on UFortAthenaAIBotEvaluator_DBNO");
static_assert(sizeof(UFortAthenaAIBotEvaluator_DBNO) == 0x0001E8, "Wrong size on UFortAthenaAIBotEvaluator_DBNO");
static_assert(offsetof(UFortAthenaAIBotEvaluator_DBNO, DBNODestinationKeyName) == 0x000190, "Member 'UFortAthenaAIBotEvaluator_DBNO::DBNODestinationKeyName' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotEvaluator_DBNO, AllyPawns) == 0x000198, "Member 'UFortAthenaAIBotEvaluator_DBNO::AllyPawns' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotEvaluator_DBNO, CachedCurrentDestination) == 0x0001A8, "Member 'UFortAthenaAIBotEvaluator_DBNO::CachedCurrentDestination' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotEvaluator_DBNO, DBNOSkillSet) == 0x0001C0, "Member 'UFortAthenaAIBotEvaluator_DBNO::DBNOSkillSet' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotEvaluator_DBNO, CachedCoverComponent) == 0x0001C8, "Member 'UFortAthenaAIBotEvaluator_DBNO::CachedCoverComponent' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotEvaluator_DBNO, DBNOBehaviorRuntimeParameters) == 0x0001D0, "Member 'UFortAthenaAIBotEvaluator_DBNO::DBNOBehaviorRuntimeParameters' has a wrong offset!");

class UFortAthenaAIBotEvaluator_DefensiveBuilding final : public UFortAthenaAIBotEvaluator
{
public:
	uint8                                         Pad_90[0x8];
	class UFortAthenaAIBotBuildingDigestedSkillSet* CachedBuildingDigestedSkillSet;
	class UFortAthenaAIBotBuildingComponent*      CachedBuildingComponent;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortAthenaAIBotEvaluator_DefensiveBuilding">();
	}
	static class UFortAthenaAIBotEvaluator_DefensiveBuilding* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortAthenaAIBotEvaluator_DefensiveBuilding>();
	}
};
static_assert(alignof(UFortAthenaAIBotEvaluator_DefensiveBuilding) == 0x000008, "Wrong alignment on UFortAthenaAIBotEvaluator_DefensiveBuilding");
static_assert(sizeof(UFortAthenaAIBotEvaluator_DefensiveBuilding) == 0x0000A8, "Wrong size on UFortAthenaAIBotEvaluator_DefensiveBuilding");
static_assert(offsetof(UFortAthenaAIBotEvaluator_DefensiveBuilding, CachedBuildingDigestedSkillSet) == 0x000098, "Member 'UFortAthenaAIBotEvaluator_DefensiveBuilding::CachedBuildingDigestedSkillSet' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotEvaluator_DefensiveBuilding, CachedBuildingComponent) == 0x0000A0, "Member 'UFortAthenaAIBotEvaluator_DefensiveBuilding::CachedBuildingComponent' has a wrong offset!");

class UFortAthenaAIBotEvaluator_Escape final : public UFortAthenaAIBotEvaluator_Movement
{
public:
	struct FGameplayTagContainer                  EscapeTags;
	float                                         CooldownBetweenAggressivenessChanges;
	class FName                                   AggressivenessName;
	uint8                                         Pad_1B8[0x8];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortAthenaAIBotEvaluator_Escape">();
	}
	static class UFortAthenaAIBotEvaluator_Escape* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortAthenaAIBotEvaluator_Escape>();
	}
};
static_assert(alignof(UFortAthenaAIBotEvaluator_Escape) == 0x000008, "Wrong alignment on UFortAthenaAIBotEvaluator_Escape");
static_assert(sizeof(UFortAthenaAIBotEvaluator_Escape) == 0x0001C0, "Wrong size on UFortAthenaAIBotEvaluator_Escape");
static_assert(offsetof(UFortAthenaAIBotEvaluator_Escape, EscapeTags) == 0x000190, "Member 'UFortAthenaAIBotEvaluator_Escape::EscapeTags' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotEvaluator_Escape, CooldownBetweenAggressivenessChanges) == 0x0001B0, "Member 'UFortAthenaAIBotEvaluator_Escape::CooldownBetweenAggressivenessChanges' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotEvaluator_Escape, AggressivenessName) == 0x0001B4, "Member 'UFortAthenaAIBotEvaluator_Escape::AggressivenessName' has a wrong offset!");

class UFortAthenaAIBotEvaluator_EvasiveManeuvers final : public UFortAthenaAIBotEvaluator
{
public:
	uint8                                         Pad_90[0xA8];
	class FName                                   CrouchExecutionStatusName;
	class FName                                   JumpExecutionStatusName;
	class FName                                   JetpackStrafeExecutionStatusName;
	class FName                                   DodgeName;
	class FName                                   DestinationKeyName;
	class FName                                   UrgentMoveKeyName;
	uint8                                         Pad_150[0xC];
	bool                                          bDoCrouching;
	bool                                          bDoDodging;
	bool                                          bDoJumping;
	bool                                          bDoJumpingDistanceCheck;
	bool                                          bDoJetpackStrafing;
	bool                                          bDoJetpackStrafingDistanceCheck;
	uint8                                         Pad_162[0x2];
	float                                         JetpackStrafingRequiredFuelPercent;
	float                                         JetpackStrafeNavPadding;
	uint8                                         Pad_16C[0x4];
	struct FGameplayTagQuery                      RequiredTagQuery;
	struct FGameplayTagQuery                      JetpackRequiredTagQuery;
	struct FGameplayTagQuery                      JumpRequiredTagQuery;
	TSubclassOf<class UFortAthenaAIPerk_EvasiveManeuvers> ForcedPerkClass;
	class UFortAthenaAIBotEvasiveManeuversDigestedSkillSet* CacheEMDigestedSkillSet;
	uint8                                         Pad_258[0x20];

public:
	void OnMoveCompleted(const struct FAIRequestID& RequestID, EPathFollowingResult MovementResult);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortAthenaAIBotEvaluator_EvasiveManeuvers">();
	}
	static class UFortAthenaAIBotEvaluator_EvasiveManeuvers* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortAthenaAIBotEvaluator_EvasiveManeuvers>();
	}
};
static_assert(alignof(UFortAthenaAIBotEvaluator_EvasiveManeuvers) == 0x000008, "Wrong alignment on UFortAthenaAIBotEvaluator_EvasiveManeuvers");
static_assert(sizeof(UFortAthenaAIBotEvaluator_EvasiveManeuvers) == 0x000278, "Wrong size on UFortAthenaAIBotEvaluator_EvasiveManeuvers");
static_assert(offsetof(UFortAthenaAIBotEvaluator_EvasiveManeuvers, CrouchExecutionStatusName) == 0x000138, "Member 'UFortAthenaAIBotEvaluator_EvasiveManeuvers::CrouchExecutionStatusName' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotEvaluator_EvasiveManeuvers, JumpExecutionStatusName) == 0x00013C, "Member 'UFortAthenaAIBotEvaluator_EvasiveManeuvers::JumpExecutionStatusName' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotEvaluator_EvasiveManeuvers, JetpackStrafeExecutionStatusName) == 0x000140, "Member 'UFortAthenaAIBotEvaluator_EvasiveManeuvers::JetpackStrafeExecutionStatusName' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotEvaluator_EvasiveManeuvers, DodgeName) == 0x000144, "Member 'UFortAthenaAIBotEvaluator_EvasiveManeuvers::DodgeName' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotEvaluator_EvasiveManeuvers, DestinationKeyName) == 0x000148, "Member 'UFortAthenaAIBotEvaluator_EvasiveManeuvers::DestinationKeyName' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotEvaluator_EvasiveManeuvers, UrgentMoveKeyName) == 0x00014C, "Member 'UFortAthenaAIBotEvaluator_EvasiveManeuvers::UrgentMoveKeyName' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotEvaluator_EvasiveManeuvers, bDoCrouching) == 0x00015C, "Member 'UFortAthenaAIBotEvaluator_EvasiveManeuvers::bDoCrouching' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotEvaluator_EvasiveManeuvers, bDoDodging) == 0x00015D, "Member 'UFortAthenaAIBotEvaluator_EvasiveManeuvers::bDoDodging' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotEvaluator_EvasiveManeuvers, bDoJumping) == 0x00015E, "Member 'UFortAthenaAIBotEvaluator_EvasiveManeuvers::bDoJumping' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotEvaluator_EvasiveManeuvers, bDoJumpingDistanceCheck) == 0x00015F, "Member 'UFortAthenaAIBotEvaluator_EvasiveManeuvers::bDoJumpingDistanceCheck' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotEvaluator_EvasiveManeuvers, bDoJetpackStrafing) == 0x000160, "Member 'UFortAthenaAIBotEvaluator_EvasiveManeuvers::bDoJetpackStrafing' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotEvaluator_EvasiveManeuvers, bDoJetpackStrafingDistanceCheck) == 0x000161, "Member 'UFortAthenaAIBotEvaluator_EvasiveManeuvers::bDoJetpackStrafingDistanceCheck' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotEvaluator_EvasiveManeuvers, JetpackStrafingRequiredFuelPercent) == 0x000164, "Member 'UFortAthenaAIBotEvaluator_EvasiveManeuvers::JetpackStrafingRequiredFuelPercent' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotEvaluator_EvasiveManeuvers, JetpackStrafeNavPadding) == 0x000168, "Member 'UFortAthenaAIBotEvaluator_EvasiveManeuvers::JetpackStrafeNavPadding' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotEvaluator_EvasiveManeuvers, RequiredTagQuery) == 0x000170, "Member 'UFortAthenaAIBotEvaluator_EvasiveManeuvers::RequiredTagQuery' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotEvaluator_EvasiveManeuvers, JetpackRequiredTagQuery) == 0x0001B8, "Member 'UFortAthenaAIBotEvaluator_EvasiveManeuvers::JetpackRequiredTagQuery' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotEvaluator_EvasiveManeuvers, JumpRequiredTagQuery) == 0x000200, "Member 'UFortAthenaAIBotEvaluator_EvasiveManeuvers::JumpRequiredTagQuery' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotEvaluator_EvasiveManeuvers, ForcedPerkClass) == 0x000248, "Member 'UFortAthenaAIBotEvaluator_EvasiveManeuvers::ForcedPerkClass' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotEvaluator_EvasiveManeuvers, CacheEMDigestedSkillSet) == 0x000250, "Member 'UFortAthenaAIBotEvaluator_EvasiveManeuvers::CacheEMDigestedSkillSet' has a wrong offset!");

class UFortAthenaAIBotEvaluator_Flee final : public UFortAthenaAIBotEvaluator_Movement
{
public:
	float                                         MinDistanceFromTarget;
	float                                         MinValidDistanceForFleeLocation;
	float                                         FleeDistance;
	float                                         MaxDistanceFromTargetWhenFleeing;
	float                                         MinDistanceHysteresisWhenChangingTarget;
	class FName                                   FleeKeyName;
	class FName                                   FleeMovementStateKeyName;
	class FName                                   FleeDestinationKeyName;
	class FName                                   FleeActorKeyName;
	uint8                                         Pad_1B4[0xC];
	class AActor*                                 CurrentActorFleeingFrom;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortAthenaAIBotEvaluator_Flee">();
	}
	static class UFortAthenaAIBotEvaluator_Flee* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortAthenaAIBotEvaluator_Flee>();
	}
};
static_assert(alignof(UFortAthenaAIBotEvaluator_Flee) == 0x000008, "Wrong alignment on UFortAthenaAIBotEvaluator_Flee");
static_assert(sizeof(UFortAthenaAIBotEvaluator_Flee) == 0x0001C8, "Wrong size on UFortAthenaAIBotEvaluator_Flee");
static_assert(offsetof(UFortAthenaAIBotEvaluator_Flee, MinDistanceFromTarget) == 0x000190, "Member 'UFortAthenaAIBotEvaluator_Flee::MinDistanceFromTarget' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotEvaluator_Flee, MinValidDistanceForFleeLocation) == 0x000194, "Member 'UFortAthenaAIBotEvaluator_Flee::MinValidDistanceForFleeLocation' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotEvaluator_Flee, FleeDistance) == 0x000198, "Member 'UFortAthenaAIBotEvaluator_Flee::FleeDistance' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotEvaluator_Flee, MaxDistanceFromTargetWhenFleeing) == 0x00019C, "Member 'UFortAthenaAIBotEvaluator_Flee::MaxDistanceFromTargetWhenFleeing' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotEvaluator_Flee, MinDistanceHysteresisWhenChangingTarget) == 0x0001A0, "Member 'UFortAthenaAIBotEvaluator_Flee::MinDistanceHysteresisWhenChangingTarget' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotEvaluator_Flee, FleeKeyName) == 0x0001A4, "Member 'UFortAthenaAIBotEvaluator_Flee::FleeKeyName' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotEvaluator_Flee, FleeMovementStateKeyName) == 0x0001A8, "Member 'UFortAthenaAIBotEvaluator_Flee::FleeMovementStateKeyName' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotEvaluator_Flee, FleeDestinationKeyName) == 0x0001AC, "Member 'UFortAthenaAIBotEvaluator_Flee::FleeDestinationKeyName' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotEvaluator_Flee, FleeActorKeyName) == 0x0001B0, "Member 'UFortAthenaAIBotEvaluator_Flee::FleeActorKeyName' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotEvaluator_Flee, CurrentActorFleeingFrom) == 0x0001C0, "Member 'UFortAthenaAIBotEvaluator_Flee::CurrentActorFleeingFrom' has a wrong offset!");

class UFortAthenaAIBotEvaluator_Ground final : public UFortAthenaAIBotEvaluator
{
public:
	struct FVector                                SurfaceTypeRaycastDir;
	uint8                                         Pad_A8[0x68];
	class UFortAthenaAIRuntimeParameters_Behavior* CachedBehaviorRuntimeParameters;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortAthenaAIBotEvaluator_Ground">();
	}
	static class UFortAthenaAIBotEvaluator_Ground* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortAthenaAIBotEvaluator_Ground>();
	}
};
static_assert(alignof(UFortAthenaAIBotEvaluator_Ground) == 0x000008, "Wrong alignment on UFortAthenaAIBotEvaluator_Ground");
static_assert(sizeof(UFortAthenaAIBotEvaluator_Ground) == 0x000118, "Wrong size on UFortAthenaAIBotEvaluator_Ground");
static_assert(offsetof(UFortAthenaAIBotEvaluator_Ground, SurfaceTypeRaycastDir) == 0x000090, "Member 'UFortAthenaAIBotEvaluator_Ground::SurfaceTypeRaycastDir' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotEvaluator_Ground, CachedBehaviorRuntimeParameters) == 0x000110, "Member 'UFortAthenaAIBotEvaluator_Ground::CachedBehaviorRuntimeParameters' has a wrong offset!");

class UFortAthenaAIBotEvaluator_Heal final : public UFortAthenaAIBotEvaluator
{
public:
	class FName                                   HealingObjectKeyName;
	uint8                                         Pad_94[0xC];
	struct FGameplayTagQuery                      RequiredTagQuery;
	bool                                          bAllowEvaluationRetry;
	uint8                                         Pad_E9[0x7];
	class UFortAthenaAIBotHealingDigestedSkillSet* HealingSkillSet;
	uint8                                         Pad_F8[0x8];

public:
	void HandlePlayerHealthOrShieldChanged();

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortAthenaAIBotEvaluator_Heal">();
	}
	static class UFortAthenaAIBotEvaluator_Heal* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortAthenaAIBotEvaluator_Heal>();
	}
};
static_assert(alignof(UFortAthenaAIBotEvaluator_Heal) == 0x000008, "Wrong alignment on UFortAthenaAIBotEvaluator_Heal");
static_assert(sizeof(UFortAthenaAIBotEvaluator_Heal) == 0x000100, "Wrong size on UFortAthenaAIBotEvaluator_Heal");
static_assert(offsetof(UFortAthenaAIBotEvaluator_Heal, HealingObjectKeyName) == 0x000090, "Member 'UFortAthenaAIBotEvaluator_Heal::HealingObjectKeyName' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotEvaluator_Heal, RequiredTagQuery) == 0x0000A0, "Member 'UFortAthenaAIBotEvaluator_Heal::RequiredTagQuery' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotEvaluator_Heal, bAllowEvaluationRetry) == 0x0000E8, "Member 'UFortAthenaAIBotEvaluator_Heal::bAllowEvaluationRetry' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotEvaluator_Heal, HealingSkillSet) == 0x0000F0, "Member 'UFortAthenaAIBotEvaluator_Heal::HealingSkillSet' has a wrong offset!");

class UFortAthenaAIBotEvaluator_HolsterWeapon final : public UFortAthenaAIBotEvaluator
{
public:
	class UFortAthenaAIRuntimeParameters_NPCBehavior* CachedNPCBehaviorParameters;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortAthenaAIBotEvaluator_HolsterWeapon">();
	}
	static class UFortAthenaAIBotEvaluator_HolsterWeapon* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortAthenaAIBotEvaluator_HolsterWeapon>();
	}
};
static_assert(alignof(UFortAthenaAIBotEvaluator_HolsterWeapon) == 0x000008, "Wrong alignment on UFortAthenaAIBotEvaluator_HolsterWeapon");
static_assert(sizeof(UFortAthenaAIBotEvaluator_HolsterWeapon) == 0x000098, "Wrong size on UFortAthenaAIBotEvaluator_HolsterWeapon");
static_assert(offsetof(UFortAthenaAIBotEvaluator_HolsterWeapon, CachedNPCBehaviorParameters) == 0x000090, "Member 'UFortAthenaAIBotEvaluator_HolsterWeapon::CachedNPCBehaviorParameters' has a wrong offset!");

class UFortAthenaAIBotEvaluator_JumpOffBus final : public UFortAthenaAIBotEvaluator
{
public:
	class FName                                   JumpOffBusDestinationName;
	class FName                                   JumpOffBusDestinationVolumeKeyName;
	uint8                                         Pad_98[0x20];
	class AFortPoiVolume*                         BusDroppingVolume;
	class AFortGameStateAthena*                   CachedAthenaGameState;
	class UFortAthenaAIBotMovementDigestedSkillSet* CacheMovementDigestedSkillSet;
	uint8                                         Pad_D0[0x8];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortAthenaAIBotEvaluator_JumpOffBus">();
	}
	static class UFortAthenaAIBotEvaluator_JumpOffBus* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortAthenaAIBotEvaluator_JumpOffBus>();
	}
};
static_assert(alignof(UFortAthenaAIBotEvaluator_JumpOffBus) == 0x000008, "Wrong alignment on UFortAthenaAIBotEvaluator_JumpOffBus");
static_assert(sizeof(UFortAthenaAIBotEvaluator_JumpOffBus) == 0x0000D8, "Wrong size on UFortAthenaAIBotEvaluator_JumpOffBus");
static_assert(offsetof(UFortAthenaAIBotEvaluator_JumpOffBus, JumpOffBusDestinationName) == 0x000090, "Member 'UFortAthenaAIBotEvaluator_JumpOffBus::JumpOffBusDestinationName' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotEvaluator_JumpOffBus, JumpOffBusDestinationVolumeKeyName) == 0x000094, "Member 'UFortAthenaAIBotEvaluator_JumpOffBus::JumpOffBusDestinationVolumeKeyName' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotEvaluator_JumpOffBus, BusDroppingVolume) == 0x0000B8, "Member 'UFortAthenaAIBotEvaluator_JumpOffBus::BusDroppingVolume' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotEvaluator_JumpOffBus, CachedAthenaGameState) == 0x0000C0, "Member 'UFortAthenaAIBotEvaluator_JumpOffBus::CachedAthenaGameState' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotEvaluator_JumpOffBus, CacheMovementDigestedSkillSet) == 0x0000C8, "Member 'UFortAthenaAIBotEvaluator_JumpOffBus::CacheMovementDigestedSkillSet' has a wrong offset!");

class UFortAthenaAIBotEvaluator_Observe final : public UFortAthenaAIBotEvaluator
{
public:
	class FName                                   AggressivenessName;
	class FName                                   ObserveDestinationKeyName;
	uint8                                         Pad_98[0x4];
	bool                                          bContinueMovementOnStart;
	uint8                                         Pad_9D[0x3];
	float                                         MaxMovementDuration;
	uint8                                         Pad_A4[0xC];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortAthenaAIBotEvaluator_Observe">();
	}
	static class UFortAthenaAIBotEvaluator_Observe* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortAthenaAIBotEvaluator_Observe>();
	}
};
static_assert(alignof(UFortAthenaAIBotEvaluator_Observe) == 0x000008, "Wrong alignment on UFortAthenaAIBotEvaluator_Observe");
static_assert(sizeof(UFortAthenaAIBotEvaluator_Observe) == 0x0000B0, "Wrong size on UFortAthenaAIBotEvaluator_Observe");
static_assert(offsetof(UFortAthenaAIBotEvaluator_Observe, AggressivenessName) == 0x000090, "Member 'UFortAthenaAIBotEvaluator_Observe::AggressivenessName' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotEvaluator_Observe, ObserveDestinationKeyName) == 0x000094, "Member 'UFortAthenaAIBotEvaluator_Observe::ObserveDestinationKeyName' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotEvaluator_Observe, bContinueMovementOnStart) == 0x00009C, "Member 'UFortAthenaAIBotEvaluator_Observe::bContinueMovementOnStart' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotEvaluator_Observe, MaxMovementDuration) == 0x0000A0, "Member 'UFortAthenaAIBotEvaluator_Observe::MaxMovementDuration' has a wrong offset!");

class UFortAthenaAIBotEvaluator_PathExists final : public UFortAthenaAIBotEvaluator
{
public:
	class FName                                   PathExistsKeyName;
	uint8                                         Pad_94[0x4];
	class FName                                   GoalKeyName;
	float                                         AcceptableRadius;
	TSubclassOf<class UNavigationQueryFilter>     FilterClass;
	EPathTestQueryType                            PathQueryType;
	uint8                                         Pad_A9[0x3];
	uint8                                         bProjectGoalLocation : 1;
	uint8                                         bReachTestIncludesAgentRadius : 1;
	uint8                                         bReachTestIncludesGoalRadius : 1;
	uint8                                         Pad_AD[0x3];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortAthenaAIBotEvaluator_PathExists">();
	}
	static class UFortAthenaAIBotEvaluator_PathExists* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortAthenaAIBotEvaluator_PathExists>();
	}
};
static_assert(alignof(UFortAthenaAIBotEvaluator_PathExists) == 0x000008, "Wrong alignment on UFortAthenaAIBotEvaluator_PathExists");
static_assert(sizeof(UFortAthenaAIBotEvaluator_PathExists) == 0x0000B0, "Wrong size on UFortAthenaAIBotEvaluator_PathExists");
static_assert(offsetof(UFortAthenaAIBotEvaluator_PathExists, PathExistsKeyName) == 0x000090, "Member 'UFortAthenaAIBotEvaluator_PathExists::PathExistsKeyName' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotEvaluator_PathExists, GoalKeyName) == 0x000098, "Member 'UFortAthenaAIBotEvaluator_PathExists::GoalKeyName' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotEvaluator_PathExists, AcceptableRadius) == 0x00009C, "Member 'UFortAthenaAIBotEvaluator_PathExists::AcceptableRadius' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotEvaluator_PathExists, FilterClass) == 0x0000A0, "Member 'UFortAthenaAIBotEvaluator_PathExists::FilterClass' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotEvaluator_PathExists, PathQueryType) == 0x0000A8, "Member 'UFortAthenaAIBotEvaluator_PathExists::PathQueryType' has a wrong offset!");

class UFortAthenaAIBotEvaluator_PatrolAround final : public UFortAthenaAIBotEvaluator_Movement
{
public:
	struct FEQSParametrizedQueryExecutionRequest  EQSRequest;
	TSubclassOf<class UNavigationQueryFilter>     NavigationQueryFilterClass;
	bool                                          bFallbackToPointWithNoCustomNavigationQueryFilter;
	uint8                                         Pad_1E1[0x3];
	class FName                                   PatrolDestinationName;
	class FName                                   PatrolExecutionStatusName;
	class FName                                   PatrolMovementStateName;
	class FName                                   BestTargetActorName;
	uint8                                         Pad_1F4[0x4];
	class AFortGameModeAthena*                    CacheAthenaGameMode;
	uint8                                         Pad_200[0x20];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortAthenaAIBotEvaluator_PatrolAround">();
	}
	static class UFortAthenaAIBotEvaluator_PatrolAround* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortAthenaAIBotEvaluator_PatrolAround>();
	}
};
static_assert(alignof(UFortAthenaAIBotEvaluator_PatrolAround) == 0x000008, "Wrong alignment on UFortAthenaAIBotEvaluator_PatrolAround");
static_assert(sizeof(UFortAthenaAIBotEvaluator_PatrolAround) == 0x000220, "Wrong size on UFortAthenaAIBotEvaluator_PatrolAround");
static_assert(offsetof(UFortAthenaAIBotEvaluator_PatrolAround, EQSRequest) == 0x000190, "Member 'UFortAthenaAIBotEvaluator_PatrolAround::EQSRequest' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotEvaluator_PatrolAround, NavigationQueryFilterClass) == 0x0001D8, "Member 'UFortAthenaAIBotEvaluator_PatrolAround::NavigationQueryFilterClass' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotEvaluator_PatrolAround, bFallbackToPointWithNoCustomNavigationQueryFilter) == 0x0001E0, "Member 'UFortAthenaAIBotEvaluator_PatrolAround::bFallbackToPointWithNoCustomNavigationQueryFilter' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotEvaluator_PatrolAround, PatrolDestinationName) == 0x0001E4, "Member 'UFortAthenaAIBotEvaluator_PatrolAround::PatrolDestinationName' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotEvaluator_PatrolAround, PatrolExecutionStatusName) == 0x0001E8, "Member 'UFortAthenaAIBotEvaluator_PatrolAround::PatrolExecutionStatusName' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotEvaluator_PatrolAround, PatrolMovementStateName) == 0x0001EC, "Member 'UFortAthenaAIBotEvaluator_PatrolAround::PatrolMovementStateName' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotEvaluator_PatrolAround, BestTargetActorName) == 0x0001F0, "Member 'UFortAthenaAIBotEvaluator_PatrolAround::BestTargetActorName' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotEvaluator_PatrolAround, CacheAthenaGameMode) == 0x0001F8, "Member 'UFortAthenaAIBotEvaluator_PatrolAround::CacheAthenaGameMode' has a wrong offset!");

class UFortAthenaAIBotEvaluator_PropagateAwareness final : public UFortAthenaAIBotEvaluator
{
public:
	struct FGameplayTagQuery                      AwarenessTagQuery;
	TSubclassOf<class UGameplayEffect>            AwarenessGameplayEffectClass;
	TArray<class AFortPlayerPawnAthena*>          AwareAllyPawns;
	TArray<class AFortPlayerPawnAthena*>          AlreadyTestedPawns;
	class UFortAthenaAIBotPropagateAwarenessDigestedSkillSet* PropagateAwarenessSkillSet;
	class UFortAthenaAIRuntimeParameters_BehaviorTreeControl* BehaviorControlsRuntimeParameters;
	class UFortAthenaAIRuntimeParameters_AffiliationBase* AffiliationRuntimeParameters;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortAthenaAIBotEvaluator_PropagateAwareness">();
	}
	static class UFortAthenaAIBotEvaluator_PropagateAwareness* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortAthenaAIBotEvaluator_PropagateAwareness>();
	}
};
static_assert(alignof(UFortAthenaAIBotEvaluator_PropagateAwareness) == 0x000008, "Wrong alignment on UFortAthenaAIBotEvaluator_PropagateAwareness");
static_assert(sizeof(UFortAthenaAIBotEvaluator_PropagateAwareness) == 0x000118, "Wrong size on UFortAthenaAIBotEvaluator_PropagateAwareness");
static_assert(offsetof(UFortAthenaAIBotEvaluator_PropagateAwareness, AwarenessTagQuery) == 0x000090, "Member 'UFortAthenaAIBotEvaluator_PropagateAwareness::AwarenessTagQuery' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotEvaluator_PropagateAwareness, AwarenessGameplayEffectClass) == 0x0000D8, "Member 'UFortAthenaAIBotEvaluator_PropagateAwareness::AwarenessGameplayEffectClass' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotEvaluator_PropagateAwareness, AwareAllyPawns) == 0x0000E0, "Member 'UFortAthenaAIBotEvaluator_PropagateAwareness::AwareAllyPawns' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotEvaluator_PropagateAwareness, AlreadyTestedPawns) == 0x0000F0, "Member 'UFortAthenaAIBotEvaluator_PropagateAwareness::AlreadyTestedPawns' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotEvaluator_PropagateAwareness, PropagateAwarenessSkillSet) == 0x000100, "Member 'UFortAthenaAIBotEvaluator_PropagateAwareness::PropagateAwarenessSkillSet' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotEvaluator_PropagateAwareness, BehaviorControlsRuntimeParameters) == 0x000108, "Member 'UFortAthenaAIBotEvaluator_PropagateAwareness::BehaviorControlsRuntimeParameters' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotEvaluator_PropagateAwareness, AffiliationRuntimeParameters) == 0x000110, "Member 'UFortAthenaAIBotEvaluator_PropagateAwareness::AffiliationRuntimeParameters' has a wrong offset!");

class UFortAthenaAIBotEvaluator_RangeAttack final : public UFortAthenaAIBotEvaluator_Attack
{
public:
	uint8                                         Pad_1A8[0x18];
	class FName                                   WeaponReloadName;
	class FName                                   WeaponFireName;
	class FName                                   RangeAttackIsReadyToFireName;
	class FName                                   WeaponTargetingName;
	class FName                                   AggressivenessName;
	class FName                                   HasLoSOnThreatName;
	class FName                                   UrgentMovementKeyName;
	uint8                                         Pad_1DC[0xE];
	bool                                          bAlwaysAllowTargetingEvaluation;
	bool                                          bSkipADSEvaluation;
	bool                                          bConsiderLoF;
	uint8                                         Pad_1ED[0x3];
	float                                         RangeReachHysteresisRatio;
	uint8                                         Pad_1F4[0x1C];
	class UFortAthenaAIBotRangeAttackDigestedSkillSet* CacheRangeAttackDigestedSkillSet;
	class UFortAthenaAIBotAimingDigestedSkillSet* CacheAimingDigestedSkillSet;
	class UFortAthenaAIBotPerceptionDigestedSkillSet* CachePerceptionDigestedSkillSet;
	class UFortAthenaAIBotAttackingDigestedSkillSet* CacheAttackingDigestedSkillSet;
	class UAthenaAIServiceZoneManager*            CacheZoneManager;
	class AActor*                                 ExcludeReachingTarget;
	uint8                                         Pad_240[0x38];
	class AActor*                                 CachedLastMoveToRangeTarget;
	uint8                                         Pad_280[0x70];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortAthenaAIBotEvaluator_RangeAttack">();
	}
	static class UFortAthenaAIBotEvaluator_RangeAttack* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortAthenaAIBotEvaluator_RangeAttack>();
	}
};
static_assert(alignof(UFortAthenaAIBotEvaluator_RangeAttack) == 0x000008, "Wrong alignment on UFortAthenaAIBotEvaluator_RangeAttack");
static_assert(sizeof(UFortAthenaAIBotEvaluator_RangeAttack) == 0x0002F0, "Wrong size on UFortAthenaAIBotEvaluator_RangeAttack");
static_assert(offsetof(UFortAthenaAIBotEvaluator_RangeAttack, WeaponReloadName) == 0x0001C0, "Member 'UFortAthenaAIBotEvaluator_RangeAttack::WeaponReloadName' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotEvaluator_RangeAttack, WeaponFireName) == 0x0001C4, "Member 'UFortAthenaAIBotEvaluator_RangeAttack::WeaponFireName' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotEvaluator_RangeAttack, RangeAttackIsReadyToFireName) == 0x0001C8, "Member 'UFortAthenaAIBotEvaluator_RangeAttack::RangeAttackIsReadyToFireName' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotEvaluator_RangeAttack, WeaponTargetingName) == 0x0001CC, "Member 'UFortAthenaAIBotEvaluator_RangeAttack::WeaponTargetingName' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotEvaluator_RangeAttack, AggressivenessName) == 0x0001D0, "Member 'UFortAthenaAIBotEvaluator_RangeAttack::AggressivenessName' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotEvaluator_RangeAttack, HasLoSOnThreatName) == 0x0001D4, "Member 'UFortAthenaAIBotEvaluator_RangeAttack::HasLoSOnThreatName' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotEvaluator_RangeAttack, UrgentMovementKeyName) == 0x0001D8, "Member 'UFortAthenaAIBotEvaluator_RangeAttack::UrgentMovementKeyName' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotEvaluator_RangeAttack, bAlwaysAllowTargetingEvaluation) == 0x0001EA, "Member 'UFortAthenaAIBotEvaluator_RangeAttack::bAlwaysAllowTargetingEvaluation' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotEvaluator_RangeAttack, bSkipADSEvaluation) == 0x0001EB, "Member 'UFortAthenaAIBotEvaluator_RangeAttack::bSkipADSEvaluation' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotEvaluator_RangeAttack, bConsiderLoF) == 0x0001EC, "Member 'UFortAthenaAIBotEvaluator_RangeAttack::bConsiderLoF' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotEvaluator_RangeAttack, RangeReachHysteresisRatio) == 0x0001F0, "Member 'UFortAthenaAIBotEvaluator_RangeAttack::RangeReachHysteresisRatio' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotEvaluator_RangeAttack, CacheRangeAttackDigestedSkillSet) == 0x000210, "Member 'UFortAthenaAIBotEvaluator_RangeAttack::CacheRangeAttackDigestedSkillSet' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotEvaluator_RangeAttack, CacheAimingDigestedSkillSet) == 0x000218, "Member 'UFortAthenaAIBotEvaluator_RangeAttack::CacheAimingDigestedSkillSet' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotEvaluator_RangeAttack, CachePerceptionDigestedSkillSet) == 0x000220, "Member 'UFortAthenaAIBotEvaluator_RangeAttack::CachePerceptionDigestedSkillSet' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotEvaluator_RangeAttack, CacheAttackingDigestedSkillSet) == 0x000228, "Member 'UFortAthenaAIBotEvaluator_RangeAttack::CacheAttackingDigestedSkillSet' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotEvaluator_RangeAttack, CacheZoneManager) == 0x000230, "Member 'UFortAthenaAIBotEvaluator_RangeAttack::CacheZoneManager' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotEvaluator_RangeAttack, ExcludeReachingTarget) == 0x000238, "Member 'UFortAthenaAIBotEvaluator_RangeAttack::ExcludeReachingTarget' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotEvaluator_RangeAttack, CachedLastMoveToRangeTarget) == 0x000278, "Member 'UFortAthenaAIBotEvaluator_RangeAttack::CachedLastMoveToRangeTarget' has a wrong offset!");

class UFortAthenaAIBotEvaluator_ReachBeacon final : public UFortAthenaAIBotEvaluator_Movement
{
public:
	class FName                                   ReachBeaconStatusKeyName;
	class FName                                   ReachBeaconMovementStateKeyName;
	class FName                                   ReachBeaconTargetKeyName;
	uint8                                         Pad_19C[0x8];
	TWeakObjectPtr<class UFortAthenaBeaconComponent> CurrentBeacon;
	uint8                                         Pad_1AC[0x4];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortAthenaAIBotEvaluator_ReachBeacon">();
	}
	static class UFortAthenaAIBotEvaluator_ReachBeacon* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortAthenaAIBotEvaluator_ReachBeacon>();
	}
};
static_assert(alignof(UFortAthenaAIBotEvaluator_ReachBeacon) == 0x000008, "Wrong alignment on UFortAthenaAIBotEvaluator_ReachBeacon");
static_assert(sizeof(UFortAthenaAIBotEvaluator_ReachBeacon) == 0x0001B0, "Wrong size on UFortAthenaAIBotEvaluator_ReachBeacon");
static_assert(offsetof(UFortAthenaAIBotEvaluator_ReachBeacon, ReachBeaconStatusKeyName) == 0x000190, "Member 'UFortAthenaAIBotEvaluator_ReachBeacon::ReachBeaconStatusKeyName' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotEvaluator_ReachBeacon, ReachBeaconMovementStateKeyName) == 0x000194, "Member 'UFortAthenaAIBotEvaluator_ReachBeacon::ReachBeaconMovementStateKeyName' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotEvaluator_ReachBeacon, ReachBeaconTargetKeyName) == 0x000198, "Member 'UFortAthenaAIBotEvaluator_ReachBeacon::ReachBeaconTargetKeyName' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotEvaluator_ReachBeacon, CurrentBeacon) == 0x0001A4, "Member 'UFortAthenaAIBotEvaluator_ReachBeacon::CurrentBeacon' has a wrong offset!");

class UFortAthenaAIBotEvaluator_Retreat final : public UFortAthenaAIBotEvaluator_Movement
{
public:
	class FName                                   RetreatDestinationName;
	uint8                                         Pad_194[0x4];
	class UFortAthenaAIBotAttackingDigestedSkillSet* CacheAttackingDigestedSkillSet;
	class UFortAthenaAICoverComponent*            CachedCoverComponent;
	uint8                                         Pad_1A8[0x10];

public:
	void HandlePlayerHealthOrShieldChanged();

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortAthenaAIBotEvaluator_Retreat">();
	}
	static class UFortAthenaAIBotEvaluator_Retreat* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortAthenaAIBotEvaluator_Retreat>();
	}
};
static_assert(alignof(UFortAthenaAIBotEvaluator_Retreat) == 0x000008, "Wrong alignment on UFortAthenaAIBotEvaluator_Retreat");
static_assert(sizeof(UFortAthenaAIBotEvaluator_Retreat) == 0x0001B8, "Wrong size on UFortAthenaAIBotEvaluator_Retreat");
static_assert(offsetof(UFortAthenaAIBotEvaluator_Retreat, RetreatDestinationName) == 0x000190, "Member 'UFortAthenaAIBotEvaluator_Retreat::RetreatDestinationName' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotEvaluator_Retreat, CacheAttackingDigestedSkillSet) == 0x000198, "Member 'UFortAthenaAIBotEvaluator_Retreat::CacheAttackingDigestedSkillSet' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotEvaluator_Retreat, CachedCoverComponent) == 0x0001A0, "Member 'UFortAthenaAIBotEvaluator_Retreat::CachedCoverComponent' has a wrong offset!");

class UFortAthenaAIBotEvaluator_SandTunnel final : public UFortAthenaAIBotEvaluator_TagQuery
{
public:
	class FName                                   JumpExecutionStatusName;
	class FName                                   LootInteractionExecutionStatusName;
	class FName                                   WeaponTriggerMeleeName;
	class FName                                   WeaponFireName;
	uint8                                         Pad_F0[0x8];
	struct FGameplayTagQuery                      BuriedTagQuery;
	class UFortAthenaAIBotMovementDigestedSkillSet* CacheMovementDigestedSkillSet;
	uint8                                         Pad_148[0x10];

public:
	void Jump();
	void OnBotControllerAlertLevelChanged(class AFortAthenaAIBotController* BotController, EAlertLevel OldAlertLevel, EAlertLevel NewAlertLevel);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortAthenaAIBotEvaluator_SandTunnel">();
	}
	static class UFortAthenaAIBotEvaluator_SandTunnel* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortAthenaAIBotEvaluator_SandTunnel>();
	}
};
static_assert(alignof(UFortAthenaAIBotEvaluator_SandTunnel) == 0x000008, "Wrong alignment on UFortAthenaAIBotEvaluator_SandTunnel");
static_assert(sizeof(UFortAthenaAIBotEvaluator_SandTunnel) == 0x000158, "Wrong size on UFortAthenaAIBotEvaluator_SandTunnel");
static_assert(offsetof(UFortAthenaAIBotEvaluator_SandTunnel, JumpExecutionStatusName) == 0x0000E0, "Member 'UFortAthenaAIBotEvaluator_SandTunnel::JumpExecutionStatusName' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotEvaluator_SandTunnel, LootInteractionExecutionStatusName) == 0x0000E4, "Member 'UFortAthenaAIBotEvaluator_SandTunnel::LootInteractionExecutionStatusName' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotEvaluator_SandTunnel, WeaponTriggerMeleeName) == 0x0000E8, "Member 'UFortAthenaAIBotEvaluator_SandTunnel::WeaponTriggerMeleeName' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotEvaluator_SandTunnel, WeaponFireName) == 0x0000EC, "Member 'UFortAthenaAIBotEvaluator_SandTunnel::WeaponFireName' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotEvaluator_SandTunnel, BuriedTagQuery) == 0x0000F8, "Member 'UFortAthenaAIBotEvaluator_SandTunnel::BuriedTagQuery' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotEvaluator_SandTunnel, CacheMovementDigestedSkillSet) == 0x000140, "Member 'UFortAthenaAIBotEvaluator_SandTunnel::CacheMovementDigestedSkillSet' has a wrong offset!");

class UFortAthenaAIBotEvaluator_SelectNextPOI final : public UFortAthenaAIBotEvaluator_Movement
{
public:
	class FName                                   NextPOIKeyName;
	class FName                                   MarkerLocationKeyName;
	uint8                                         Pad_198[0x8];
	class AFortPoiVolume*                         StartingGroundPOI;
	bool                                          bCheckForStartingGroundPOI;
	uint8                                         Pad_1A9[0x3];
	float                                         CurrentPOICompletionTime;
	float                                         DurationInsideCurrentPOI;
	uint8                                         Pad_1B4[0x4];
	class AFortTeamInfoAthena*                    CachedTeamInfo;
	class UFortAthenaAIBotLootingDigestedSkillSet* CachedLootingSkillSet;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortAthenaAIBotEvaluator_SelectNextPOI">();
	}
	static class UFortAthenaAIBotEvaluator_SelectNextPOI* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortAthenaAIBotEvaluator_SelectNextPOI>();
	}
};
static_assert(alignof(UFortAthenaAIBotEvaluator_SelectNextPOI) == 0x000008, "Wrong alignment on UFortAthenaAIBotEvaluator_SelectNextPOI");
static_assert(sizeof(UFortAthenaAIBotEvaluator_SelectNextPOI) == 0x0001C8, "Wrong size on UFortAthenaAIBotEvaluator_SelectNextPOI");
static_assert(offsetof(UFortAthenaAIBotEvaluator_SelectNextPOI, NextPOIKeyName) == 0x000190, "Member 'UFortAthenaAIBotEvaluator_SelectNextPOI::NextPOIKeyName' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotEvaluator_SelectNextPOI, MarkerLocationKeyName) == 0x000194, "Member 'UFortAthenaAIBotEvaluator_SelectNextPOI::MarkerLocationKeyName' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotEvaluator_SelectNextPOI, StartingGroundPOI) == 0x0001A0, "Member 'UFortAthenaAIBotEvaluator_SelectNextPOI::StartingGroundPOI' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotEvaluator_SelectNextPOI, bCheckForStartingGroundPOI) == 0x0001A8, "Member 'UFortAthenaAIBotEvaluator_SelectNextPOI::bCheckForStartingGroundPOI' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotEvaluator_SelectNextPOI, CurrentPOICompletionTime) == 0x0001AC, "Member 'UFortAthenaAIBotEvaluator_SelectNextPOI::CurrentPOICompletionTime' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotEvaluator_SelectNextPOI, DurationInsideCurrentPOI) == 0x0001B0, "Member 'UFortAthenaAIBotEvaluator_SelectNextPOI::DurationInsideCurrentPOI' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotEvaluator_SelectNextPOI, CachedTeamInfo) == 0x0001B8, "Member 'UFortAthenaAIBotEvaluator_SelectNextPOI::CachedTeamInfo' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotEvaluator_SelectNextPOI, CachedLootingSkillSet) == 0x0001C0, "Member 'UFortAthenaAIBotEvaluator_SelectNextPOI::CachedLootingSkillSet' has a wrong offset!");

class UFortAthenaAIBotEvaluator_SelectVehicle final : public UFortAthenaAIBotEvaluator_Movement
{
public:
	class FName                                   VehicleDestinationKeyName;
	class FName                                   SelectVehicleMovementStateKeyName;
	class FName                                   SelectVehicleStatusKeyName;
	class FName                                   SelectedVehicleKeyName;
	uint8                                         Pad_1A0[0x8];
	struct FScalableFloat                         Enabled;
	float                                         VehicleSearchRadius;
	bool                                          bCanEnterOnlyWithHisConverter;
	bool                                          bCanEnterAsDriver;
	bool                                          bCanEnterVehiclesInWater;
	bool                                          bCanEnterOutOfFuelVehicles;
	bool                                          bCanEnterWithPlayerDriver;
	bool                                          bCanEnterOnlyMatchingPatrols;
	uint8                                         Pad_1DA[0x6];
	struct FGameplayTagQuery                      VehiclesFilterTagQuery;
	struct FGameplayTagQuery                      SeatsFilterTagQuery;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortAthenaAIBotEvaluator_SelectVehicle">();
	}
	static class UFortAthenaAIBotEvaluator_SelectVehicle* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortAthenaAIBotEvaluator_SelectVehicle>();
	}
};
static_assert(alignof(UFortAthenaAIBotEvaluator_SelectVehicle) == 0x000008, "Wrong alignment on UFortAthenaAIBotEvaluator_SelectVehicle");
static_assert(sizeof(UFortAthenaAIBotEvaluator_SelectVehicle) == 0x000270, "Wrong size on UFortAthenaAIBotEvaluator_SelectVehicle");
static_assert(offsetof(UFortAthenaAIBotEvaluator_SelectVehicle, VehicleDestinationKeyName) == 0x000190, "Member 'UFortAthenaAIBotEvaluator_SelectVehicle::VehicleDestinationKeyName' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotEvaluator_SelectVehicle, SelectVehicleMovementStateKeyName) == 0x000194, "Member 'UFortAthenaAIBotEvaluator_SelectVehicle::SelectVehicleMovementStateKeyName' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotEvaluator_SelectVehicle, SelectVehicleStatusKeyName) == 0x000198, "Member 'UFortAthenaAIBotEvaluator_SelectVehicle::SelectVehicleStatusKeyName' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotEvaluator_SelectVehicle, SelectedVehicleKeyName) == 0x00019C, "Member 'UFortAthenaAIBotEvaluator_SelectVehicle::SelectedVehicleKeyName' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotEvaluator_SelectVehicle, Enabled) == 0x0001A8, "Member 'UFortAthenaAIBotEvaluator_SelectVehicle::Enabled' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotEvaluator_SelectVehicle, VehicleSearchRadius) == 0x0001D0, "Member 'UFortAthenaAIBotEvaluator_SelectVehicle::VehicleSearchRadius' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotEvaluator_SelectVehicle, bCanEnterOnlyWithHisConverter) == 0x0001D4, "Member 'UFortAthenaAIBotEvaluator_SelectVehicle::bCanEnterOnlyWithHisConverter' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotEvaluator_SelectVehicle, bCanEnterAsDriver) == 0x0001D5, "Member 'UFortAthenaAIBotEvaluator_SelectVehicle::bCanEnterAsDriver' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotEvaluator_SelectVehicle, bCanEnterVehiclesInWater) == 0x0001D6, "Member 'UFortAthenaAIBotEvaluator_SelectVehicle::bCanEnterVehiclesInWater' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotEvaluator_SelectVehicle, bCanEnterOutOfFuelVehicles) == 0x0001D7, "Member 'UFortAthenaAIBotEvaluator_SelectVehicle::bCanEnterOutOfFuelVehicles' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotEvaluator_SelectVehicle, bCanEnterWithPlayerDriver) == 0x0001D8, "Member 'UFortAthenaAIBotEvaluator_SelectVehicle::bCanEnterWithPlayerDriver' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotEvaluator_SelectVehicle, bCanEnterOnlyMatchingPatrols) == 0x0001D9, "Member 'UFortAthenaAIBotEvaluator_SelectVehicle::bCanEnterOnlyMatchingPatrols' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotEvaluator_SelectVehicle, VehiclesFilterTagQuery) == 0x0001E0, "Member 'UFortAthenaAIBotEvaluator_SelectVehicle::VehiclesFilterTagQuery' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotEvaluator_SelectVehicle, SeatsFilterTagQuery) == 0x000228, "Member 'UFortAthenaAIBotEvaluator_SelectVehicle::SeatsFilterTagQuery' has a wrong offset!");

class UFortAthenaAIBotEvaluator_SmartObjects final : public UFortAthenaAIBotEvaluator_Movement
{
public:
	class UFortAthenaAIRuntimeParameters_SmartObjectBase* SmartObjectRuntimeParameters;
	class USmartObjectSubsystem*                  SmartObjectSubsystem;
	bool                                          bEvaluateSOValidityAfterChosen;
	bool                                          bEnableEntryLocationsSupport;
	uint8                                         Pad_1A2[0x6];
	TSubclassOf<class UNavigationQueryFilter>     OverridenFilterClassForEntryPoints;
	class FName                                   SmartObjectExecutionStatusKeyName;
	class FName                                   SmartObjectMovementStateKeyName;
	class FName                                   SmartObjectDestinationKeyName;
	class FName                                   SmartObjectDestinationRotationKeyName;
	class FName                                   SmartObjectShouldMoveKeyName;
	class FName                                   SmartObjectRequestEvaluateKeyName;
	uint8                                         Pad_1C8[0x10];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortAthenaAIBotEvaluator_SmartObjects">();
	}
	static class UFortAthenaAIBotEvaluator_SmartObjects* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortAthenaAIBotEvaluator_SmartObjects>();
	}
};
static_assert(alignof(UFortAthenaAIBotEvaluator_SmartObjects) == 0x000008, "Wrong alignment on UFortAthenaAIBotEvaluator_SmartObjects");
static_assert(sizeof(UFortAthenaAIBotEvaluator_SmartObjects) == 0x0001D8, "Wrong size on UFortAthenaAIBotEvaluator_SmartObjects");
static_assert(offsetof(UFortAthenaAIBotEvaluator_SmartObjects, SmartObjectRuntimeParameters) == 0x000190, "Member 'UFortAthenaAIBotEvaluator_SmartObjects::SmartObjectRuntimeParameters' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotEvaluator_SmartObjects, SmartObjectSubsystem) == 0x000198, "Member 'UFortAthenaAIBotEvaluator_SmartObjects::SmartObjectSubsystem' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotEvaluator_SmartObjects, bEvaluateSOValidityAfterChosen) == 0x0001A0, "Member 'UFortAthenaAIBotEvaluator_SmartObjects::bEvaluateSOValidityAfterChosen' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotEvaluator_SmartObjects, bEnableEntryLocationsSupport) == 0x0001A1, "Member 'UFortAthenaAIBotEvaluator_SmartObjects::bEnableEntryLocationsSupport' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotEvaluator_SmartObjects, OverridenFilterClassForEntryPoints) == 0x0001A8, "Member 'UFortAthenaAIBotEvaluator_SmartObjects::OverridenFilterClassForEntryPoints' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotEvaluator_SmartObjects, SmartObjectExecutionStatusKeyName) == 0x0001B0, "Member 'UFortAthenaAIBotEvaluator_SmartObjects::SmartObjectExecutionStatusKeyName' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotEvaluator_SmartObjects, SmartObjectMovementStateKeyName) == 0x0001B4, "Member 'UFortAthenaAIBotEvaluator_SmartObjects::SmartObjectMovementStateKeyName' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotEvaluator_SmartObjects, SmartObjectDestinationKeyName) == 0x0001B8, "Member 'UFortAthenaAIBotEvaluator_SmartObjects::SmartObjectDestinationKeyName' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotEvaluator_SmartObjects, SmartObjectDestinationRotationKeyName) == 0x0001BC, "Member 'UFortAthenaAIBotEvaluator_SmartObjects::SmartObjectDestinationRotationKeyName' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotEvaluator_SmartObjects, SmartObjectShouldMoveKeyName) == 0x0001C0, "Member 'UFortAthenaAIBotEvaluator_SmartObjects::SmartObjectShouldMoveKeyName' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotEvaluator_SmartObjects, SmartObjectRequestEvaluateKeyName) == 0x0001C4, "Member 'UFortAthenaAIBotEvaluator_SmartObjects::SmartObjectRequestEvaluateKeyName' has a wrong offset!");

class alignas(0x10) UFortAthenaAIBotEvaluator_StealWall final : public UFortAthenaAIBotEvaluator
{
public:
	class FName                                   StealWallBuildTypeName;
	class FName                                   StealWallBuildGridCoordName;
	class FName                                   TargetActorName;
	uint8                                         Pad_9C[0xC];
	class UFortAthenaAIBotBuildingDigestedSkillSet* CacheBuildingDigestedSkillSet;
	class ABuildingActor*                         CurrentBuildingTarget;
	uint8                                         Pad_B8[0x78];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortAthenaAIBotEvaluator_StealWall">();
	}
	static class UFortAthenaAIBotEvaluator_StealWall* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortAthenaAIBotEvaluator_StealWall>();
	}
};
static_assert(alignof(UFortAthenaAIBotEvaluator_StealWall) == 0x000010, "Wrong alignment on UFortAthenaAIBotEvaluator_StealWall");
static_assert(sizeof(UFortAthenaAIBotEvaluator_StealWall) == 0x000130, "Wrong size on UFortAthenaAIBotEvaluator_StealWall");
static_assert(offsetof(UFortAthenaAIBotEvaluator_StealWall, StealWallBuildTypeName) == 0x000090, "Member 'UFortAthenaAIBotEvaluator_StealWall::StealWallBuildTypeName' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotEvaluator_StealWall, StealWallBuildGridCoordName) == 0x000094, "Member 'UFortAthenaAIBotEvaluator_StealWall::StealWallBuildGridCoordName' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotEvaluator_StealWall, TargetActorName) == 0x000098, "Member 'UFortAthenaAIBotEvaluator_StealWall::TargetActorName' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotEvaluator_StealWall, CacheBuildingDigestedSkillSet) == 0x0000A8, "Member 'UFortAthenaAIBotEvaluator_StealWall::CacheBuildingDigestedSkillSet' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotEvaluator_StealWall, CurrentBuildingTarget) == 0x0000B0, "Member 'UFortAthenaAIBotEvaluator_StealWall::CurrentBuildingTarget' has a wrong offset!");

class UFortAthenaAIBotEvaluator_TagQueryToBBKey final : public UFortAthenaAIBotEvaluator_TagQuery
{
public:
	class FName                                   LinkedBBKeyName;
	uint8                                         Pad_E4[0x4];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortAthenaAIBotEvaluator_TagQueryToBBKey">();
	}
	static class UFortAthenaAIBotEvaluator_TagQueryToBBKey* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortAthenaAIBotEvaluator_TagQueryToBBKey>();
	}
};
static_assert(alignof(UFortAthenaAIBotEvaluator_TagQueryToBBKey) == 0x000008, "Wrong alignment on UFortAthenaAIBotEvaluator_TagQueryToBBKey");
static_assert(sizeof(UFortAthenaAIBotEvaluator_TagQueryToBBKey) == 0x0000E8, "Wrong size on UFortAthenaAIBotEvaluator_TagQueryToBBKey");
static_assert(offsetof(UFortAthenaAIBotEvaluator_TagQueryToBBKey, LinkedBBKeyName) == 0x0000E0, "Member 'UFortAthenaAIBotEvaluator_TagQueryToBBKey::LinkedBBKeyName' has a wrong offset!");

class UFortAthenaAIBotEvaluator_ThrowableAttack final : public UFortAthenaAIBotEvaluator_Attack
{
public:
	class FName                                   WeaponTriggerThrowableName;
	class FName                                   ThrowableAttackIsReadyToThrowName;
	uint8                                         Pad_1B0[0x8];
	class UFortAthenaAIBotAttackingDigestedSkillSet* AttackingSkillSet;
	class UFortAthenaAIBotRangeAttackDigestedSkillSet* RangeAttackSkillSet;
	class UFortAthenaAIBotAimingDigestedSkillSet* AimingSkillSet;
	class UFortWorldItem*                         ChosenWeapon;
	class AFortPawn*                              CachedFortPawn;
	uint8                                         Pad_1E0[0x18];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortAthenaAIBotEvaluator_ThrowableAttack">();
	}
	static class UFortAthenaAIBotEvaluator_ThrowableAttack* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortAthenaAIBotEvaluator_ThrowableAttack>();
	}
};
static_assert(alignof(UFortAthenaAIBotEvaluator_ThrowableAttack) == 0x000008, "Wrong alignment on UFortAthenaAIBotEvaluator_ThrowableAttack");
static_assert(sizeof(UFortAthenaAIBotEvaluator_ThrowableAttack) == 0x0001F8, "Wrong size on UFortAthenaAIBotEvaluator_ThrowableAttack");
static_assert(offsetof(UFortAthenaAIBotEvaluator_ThrowableAttack, WeaponTriggerThrowableName) == 0x0001A8, "Member 'UFortAthenaAIBotEvaluator_ThrowableAttack::WeaponTriggerThrowableName' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotEvaluator_ThrowableAttack, ThrowableAttackIsReadyToThrowName) == 0x0001AC, "Member 'UFortAthenaAIBotEvaluator_ThrowableAttack::ThrowableAttackIsReadyToThrowName' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotEvaluator_ThrowableAttack, AttackingSkillSet) == 0x0001B8, "Member 'UFortAthenaAIBotEvaluator_ThrowableAttack::AttackingSkillSet' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotEvaluator_ThrowableAttack, RangeAttackSkillSet) == 0x0001C0, "Member 'UFortAthenaAIBotEvaluator_ThrowableAttack::RangeAttackSkillSet' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotEvaluator_ThrowableAttack, AimingSkillSet) == 0x0001C8, "Member 'UFortAthenaAIBotEvaluator_ThrowableAttack::AimingSkillSet' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotEvaluator_ThrowableAttack, ChosenWeapon) == 0x0001D0, "Member 'UFortAthenaAIBotEvaluator_ThrowableAttack::ChosenWeapon' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotEvaluator_ThrowableAttack, CachedFortPawn) == 0x0001D8, "Member 'UFortAthenaAIBotEvaluator_ThrowableAttack::CachedFortPawn' has a wrong offset!");

class UFortAthenaAIBotEvaluator_VehicleLeaveSeat final : public UFortAthenaAIBotEvaluator
{
public:
	class FName                                   LeaveSeatStatusKeyName;
	uint8                                         Pad_94[0x2];
	bool                                          bLeaveSeatWhenPlayerInVehicle;
	bool                                          bLeaveSeatWhenConverterLeave;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortAthenaAIBotEvaluator_VehicleLeaveSeat">();
	}
	static class UFortAthenaAIBotEvaluator_VehicleLeaveSeat* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortAthenaAIBotEvaluator_VehicleLeaveSeat>();
	}
};
static_assert(alignof(UFortAthenaAIBotEvaluator_VehicleLeaveSeat) == 0x000008, "Wrong alignment on UFortAthenaAIBotEvaluator_VehicleLeaveSeat");
static_assert(sizeof(UFortAthenaAIBotEvaluator_VehicleLeaveSeat) == 0x000098, "Wrong size on UFortAthenaAIBotEvaluator_VehicleLeaveSeat");
static_assert(offsetof(UFortAthenaAIBotEvaluator_VehicleLeaveSeat, LeaveSeatStatusKeyName) == 0x000090, "Member 'UFortAthenaAIBotEvaluator_VehicleLeaveSeat::LeaveSeatStatusKeyName' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotEvaluator_VehicleLeaveSeat, bLeaveSeatWhenPlayerInVehicle) == 0x000096, "Member 'UFortAthenaAIBotEvaluator_VehicleLeaveSeat::bLeaveSeatWhenPlayerInVehicle' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotEvaluator_VehicleLeaveSeat, bLeaveSeatWhenConverterLeave) == 0x000097, "Member 'UFortAthenaAIBotEvaluator_VehicleLeaveSeat::bLeaveSeatWhenConverterLeave' has a wrong offset!");

class UFortAthenaAIBotEvaluator_VehicleSwitchSeat final : public UFortAthenaAIBotEvaluator
{
public:
	class FName                                   SwitchSeatStatusKeyName;
	uint8                                         Pad_94[0x2];
	bool                                          bSwitchToEmptyDriverSeat;
	uint8                                         Pad_97[0x1];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortAthenaAIBotEvaluator_VehicleSwitchSeat">();
	}
	static class UFortAthenaAIBotEvaluator_VehicleSwitchSeat* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortAthenaAIBotEvaluator_VehicleSwitchSeat>();
	}
};
static_assert(alignof(UFortAthenaAIBotEvaluator_VehicleSwitchSeat) == 0x000008, "Wrong alignment on UFortAthenaAIBotEvaluator_VehicleSwitchSeat");
static_assert(sizeof(UFortAthenaAIBotEvaluator_VehicleSwitchSeat) == 0x000098, "Wrong size on UFortAthenaAIBotEvaluator_VehicleSwitchSeat");
static_assert(offsetof(UFortAthenaAIBotEvaluator_VehicleSwitchSeat, SwitchSeatStatusKeyName) == 0x000090, "Member 'UFortAthenaAIBotEvaluator_VehicleSwitchSeat::SwitchSeatStatusKeyName' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotEvaluator_VehicleSwitchSeat, bSwitchToEmptyDriverSeat) == 0x000096, "Member 'UFortAthenaAIBotEvaluator_VehicleSwitchSeat::bSwitchToEmptyDriverSeat' has a wrong offset!");

class UFortAthenaAIBotEvaluator_WaitForPassengers final : public UFortAthenaAIBotEvaluator
{
public:
	class FName                                   WaitForPassengersStatusKeyName;
	uint8                                         Pad_94[0x4];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortAthenaAIBotEvaluator_WaitForPassengers">();
	}
	static class UFortAthenaAIBotEvaluator_WaitForPassengers* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortAthenaAIBotEvaluator_WaitForPassengers>();
	}
};
static_assert(alignof(UFortAthenaAIBotEvaluator_WaitForPassengers) == 0x000008, "Wrong alignment on UFortAthenaAIBotEvaluator_WaitForPassengers");
static_assert(sizeof(UFortAthenaAIBotEvaluator_WaitForPassengers) == 0x000098, "Wrong size on UFortAthenaAIBotEvaluator_WaitForPassengers");
static_assert(offsetof(UFortAthenaAIBotEvaluator_WaitForPassengers, WaitForPassengersStatusKeyName) == 0x000090, "Member 'UFortAthenaAIBotEvaluator_WaitForPassengers::WaitForPassengersStatusKeyName' has a wrong offset!");

class UFortAthenaAIBotEvaluator_WeaponSelection final : public UFortAthenaAIBotEvaluator
{
public:
	class FName                                   ThrowableAttackIsReadyToThrowName;
	class FName                                   WeaponKeyName;
	class FName                                   TargetActorName;
	uint8                                         Pad_9C[0x14];
	class UFortAthenaAIBotRangeAttackDigestedSkillSet* CacheRangeAttackDigestedSkillSet;
	class UFortAthenaAIBotAttackingDigestedSkillSet* CacheAttackingDigestedSkillSet;
	class UFortAthenaAIBotAimingDigestedSkillSet* CacheAimingDigestedSkillSet;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortAthenaAIBotEvaluator_WeaponSelection">();
	}
	static class UFortAthenaAIBotEvaluator_WeaponSelection* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortAthenaAIBotEvaluator_WeaponSelection>();
	}
};
static_assert(alignof(UFortAthenaAIBotEvaluator_WeaponSelection) == 0x000008, "Wrong alignment on UFortAthenaAIBotEvaluator_WeaponSelection");
static_assert(sizeof(UFortAthenaAIBotEvaluator_WeaponSelection) == 0x0000C8, "Wrong size on UFortAthenaAIBotEvaluator_WeaponSelection");
static_assert(offsetof(UFortAthenaAIBotEvaluator_WeaponSelection, ThrowableAttackIsReadyToThrowName) == 0x000090, "Member 'UFortAthenaAIBotEvaluator_WeaponSelection::ThrowableAttackIsReadyToThrowName' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotEvaluator_WeaponSelection, WeaponKeyName) == 0x000094, "Member 'UFortAthenaAIBotEvaluator_WeaponSelection::WeaponKeyName' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotEvaluator_WeaponSelection, TargetActorName) == 0x000098, "Member 'UFortAthenaAIBotEvaluator_WeaponSelection::TargetActorName' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotEvaluator_WeaponSelection, CacheRangeAttackDigestedSkillSet) == 0x0000B0, "Member 'UFortAthenaAIBotEvaluator_WeaponSelection::CacheRangeAttackDigestedSkillSet' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotEvaluator_WeaponSelection, CacheAttackingDigestedSkillSet) == 0x0000B8, "Member 'UFortAthenaAIBotEvaluator_WeaponSelection::CacheAttackingDigestedSkillSet' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotEvaluator_WeaponSelection, CacheAimingDigestedSkillSet) == 0x0000C0, "Member 'UFortAthenaAIBotEvaluator_WeaponSelection::CacheAimingDigestedSkillSet' has a wrong offset!");

class UFortAthenaAIBotEvaluator_Zipline final : public UFortAthenaAIBotEvaluator_Movement
{
public:
	class FName                                   CurrentDestinationKeyName;
	class FName                                   ZiplineTargetKeyName;
	class FName                                   LastZiplineUsedName;
	class FName                                   ZiplineMoveExecutionStatusKeyName;
	class FName                                   ZiplineEntryLocationKeyName;
	class FName                                   ZiplineExitLocationKeyName;
	class FName                                   ZiplineLastUsageTimeName;
	class FName                                   ZiplineUsageExecutionStatusName;
	struct FScalableFloat                         WaitTimeBetweenZiplineRandomChoices;
	struct FScalableFloat                         ProbabilityToUseZipline;
	uint8                                         Pad_200[0x30];

public:
	void OnZiplineStateChanged(bool bIsZiplining, class AFortPlayerPawn* FortPlayerPawn);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortAthenaAIBotEvaluator_Zipline">();
	}
	static class UFortAthenaAIBotEvaluator_Zipline* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortAthenaAIBotEvaluator_Zipline>();
	}
};
static_assert(alignof(UFortAthenaAIBotEvaluator_Zipline) == 0x000008, "Wrong alignment on UFortAthenaAIBotEvaluator_Zipline");
static_assert(sizeof(UFortAthenaAIBotEvaluator_Zipline) == 0x000230, "Wrong size on UFortAthenaAIBotEvaluator_Zipline");
static_assert(offsetof(UFortAthenaAIBotEvaluator_Zipline, CurrentDestinationKeyName) == 0x000190, "Member 'UFortAthenaAIBotEvaluator_Zipline::CurrentDestinationKeyName' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotEvaluator_Zipline, ZiplineTargetKeyName) == 0x000194, "Member 'UFortAthenaAIBotEvaluator_Zipline::ZiplineTargetKeyName' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotEvaluator_Zipline, LastZiplineUsedName) == 0x000198, "Member 'UFortAthenaAIBotEvaluator_Zipline::LastZiplineUsedName' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotEvaluator_Zipline, ZiplineMoveExecutionStatusKeyName) == 0x00019C, "Member 'UFortAthenaAIBotEvaluator_Zipline::ZiplineMoveExecutionStatusKeyName' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotEvaluator_Zipline, ZiplineEntryLocationKeyName) == 0x0001A0, "Member 'UFortAthenaAIBotEvaluator_Zipline::ZiplineEntryLocationKeyName' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotEvaluator_Zipline, ZiplineExitLocationKeyName) == 0x0001A4, "Member 'UFortAthenaAIBotEvaluator_Zipline::ZiplineExitLocationKeyName' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotEvaluator_Zipline, ZiplineLastUsageTimeName) == 0x0001A8, "Member 'UFortAthenaAIBotEvaluator_Zipline::ZiplineLastUsageTimeName' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotEvaluator_Zipline, ZiplineUsageExecutionStatusName) == 0x0001AC, "Member 'UFortAthenaAIBotEvaluator_Zipline::ZiplineUsageExecutionStatusName' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotEvaluator_Zipline, WaitTimeBetweenZiplineRandomChoices) == 0x0001B0, "Member 'UFortAthenaAIBotEvaluator_Zipline::WaitTimeBetweenZiplineRandomChoices' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIBotEvaluator_Zipline, ProbabilityToUseZipline) == 0x0001D8, "Member 'UFortAthenaAIBotEvaluator_Zipline::ProbabilityToUseZipline' has a wrong offset!");

class UFortAthenaAIEvaluator_DormantUntilPhase final : public UFortAthenaAIEvaluator
{
public:
	struct FScalableFloat                         bIsEnabled;
	bool                                          bDisabledInCreative;
	EAthenaGamePhaseStep                          RequiredGamePhaseStep;
	uint8                                         Pad_B2[0x6];
	struct FScalableFloat                         DelayAfterPhase;
	struct FScalableFloat                         RandomDeviationAfterPhase;
	uint8                                         Pad_108[0x10];

public:
	void HandleGamePhaseStepChanged(const TScriptInterface<class IFortSafeZoneInterface>& SafeZoneInterface, const EAthenaGamePhaseStep GamePhaseStep);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortAthenaAIEvaluator_DormantUntilPhase">();
	}
	static class UFortAthenaAIEvaluator_DormantUntilPhase* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortAthenaAIEvaluator_DormantUntilPhase>();
	}
};
static_assert(alignof(UFortAthenaAIEvaluator_DormantUntilPhase) == 0x000008, "Wrong alignment on UFortAthenaAIEvaluator_DormantUntilPhase");
static_assert(sizeof(UFortAthenaAIEvaluator_DormantUntilPhase) == 0x000118, "Wrong size on UFortAthenaAIEvaluator_DormantUntilPhase");
static_assert(offsetof(UFortAthenaAIEvaluator_DormantUntilPhase, bIsEnabled) == 0x000088, "Member 'UFortAthenaAIEvaluator_DormantUntilPhase::bIsEnabled' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIEvaluator_DormantUntilPhase, bDisabledInCreative) == 0x0000B0, "Member 'UFortAthenaAIEvaluator_DormantUntilPhase::bDisabledInCreative' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIEvaluator_DormantUntilPhase, RequiredGamePhaseStep) == 0x0000B1, "Member 'UFortAthenaAIEvaluator_DormantUntilPhase::RequiredGamePhaseStep' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIEvaluator_DormantUntilPhase, DelayAfterPhase) == 0x0000B8, "Member 'UFortAthenaAIEvaluator_DormantUntilPhase::DelayAfterPhase' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIEvaluator_DormantUntilPhase, RandomDeviationAfterPhase) == 0x0000E0, "Member 'UFortAthenaAIEvaluator_DormantUntilPhase::RandomDeviationAfterPhase' has a wrong offset!");

class UFortAthenaAIEvaluator_FleeEnvDanger final : public UFortAthenaAIEvaluator
{
public:
	float                                         MaximumCheckDistance;
	float                                         AdditionalFleeDistance;
	class FName                                   EnvironmentalDangerExecutionStatusName;
	class FName                                   EnvironmentalDangerFleeDirectionFromKeyName;
	class FName                                   EnvironmentalDangerFleeDirectionToKeyName;
	class FName                                   EnvironmentalDangerFleeDistanceKeyName;
	uint8                                         Pad_A0[0x8];
	class AAIController*                          CachedController;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortAthenaAIEvaluator_FleeEnvDanger">();
	}
	static class UFortAthenaAIEvaluator_FleeEnvDanger* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortAthenaAIEvaluator_FleeEnvDanger>();
	}
};
static_assert(alignof(UFortAthenaAIEvaluator_FleeEnvDanger) == 0x000008, "Wrong alignment on UFortAthenaAIEvaluator_FleeEnvDanger");
static_assert(sizeof(UFortAthenaAIEvaluator_FleeEnvDanger) == 0x0000B0, "Wrong size on UFortAthenaAIEvaluator_FleeEnvDanger");
static_assert(offsetof(UFortAthenaAIEvaluator_FleeEnvDanger, MaximumCheckDistance) == 0x000088, "Member 'UFortAthenaAIEvaluator_FleeEnvDanger::MaximumCheckDistance' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIEvaluator_FleeEnvDanger, AdditionalFleeDistance) == 0x00008C, "Member 'UFortAthenaAIEvaluator_FleeEnvDanger::AdditionalFleeDistance' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIEvaluator_FleeEnvDanger, EnvironmentalDangerExecutionStatusName) == 0x000090, "Member 'UFortAthenaAIEvaluator_FleeEnvDanger::EnvironmentalDangerExecutionStatusName' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIEvaluator_FleeEnvDanger, EnvironmentalDangerFleeDirectionFromKeyName) == 0x000094, "Member 'UFortAthenaAIEvaluator_FleeEnvDanger::EnvironmentalDangerFleeDirectionFromKeyName' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIEvaluator_FleeEnvDanger, EnvironmentalDangerFleeDirectionToKeyName) == 0x000098, "Member 'UFortAthenaAIEvaluator_FleeEnvDanger::EnvironmentalDangerFleeDirectionToKeyName' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIEvaluator_FleeEnvDanger, EnvironmentalDangerFleeDistanceKeyName) == 0x00009C, "Member 'UFortAthenaAIEvaluator_FleeEnvDanger::EnvironmentalDangerFleeDistanceKeyName' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIEvaluator_FleeEnvDanger, CachedController) == 0x0000A8, "Member 'UFortAthenaAIEvaluator_FleeEnvDanger::CachedController' has a wrong offset!");

class UFortAthenaAIEvaluator_Leash final : public UFortAthenaAIEvaluator
{
public:
	class FName                                   GoalIsInsideLeashKeyName;
	class FName                                   AIIsInsideLeashKeyName;
	uint8                                         Pad_90[0x8];
	class UFortAthenaLeashComponent*              CachedLeashComponent;
	class UFortAIGoalComponent*                   CachedAIGoalComponent;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortAthenaAIEvaluator_Leash">();
	}
	static class UFortAthenaAIEvaluator_Leash* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortAthenaAIEvaluator_Leash>();
	}
};
static_assert(alignof(UFortAthenaAIEvaluator_Leash) == 0x000008, "Wrong alignment on UFortAthenaAIEvaluator_Leash");
static_assert(sizeof(UFortAthenaAIEvaluator_Leash) == 0x0000A8, "Wrong size on UFortAthenaAIEvaluator_Leash");
static_assert(offsetof(UFortAthenaAIEvaluator_Leash, GoalIsInsideLeashKeyName) == 0x000088, "Member 'UFortAthenaAIEvaluator_Leash::GoalIsInsideLeashKeyName' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIEvaluator_Leash, AIIsInsideLeashKeyName) == 0x00008C, "Member 'UFortAthenaAIEvaluator_Leash::AIIsInsideLeashKeyName' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIEvaluator_Leash, CachedLeashComponent) == 0x000098, "Member 'UFortAthenaAIEvaluator_Leash::CachedLeashComponent' has a wrong offset!");
static_assert(offsetof(UFortAthenaAIEvaluator_Leash, CachedAIGoalComponent) == 0x0000A0, "Member 'UFortAthenaAIEvaluator_Leash::CachedAIGoalComponent' has a wrong offset!");

class UFortAthenaAIEvaluator_SpeechBubble final : public UFortAthenaAIEvaluator_NearbyActorsPerception
{
public:
	class UFortPawnComponent_SpeechBubble*        CachedSpeechBubbleComponent;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortAthenaAIEvaluator_SpeechBubble">();
	}
	static class UFortAthenaAIEvaluator_SpeechBubble* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortAthenaAIEvaluator_SpeechBubble>();
	}
};
static_assert(alignof(UFortAthenaAIEvaluator_SpeechBubble) == 0x000010, "Wrong alignment on UFortAthenaAIEvaluator_SpeechBubble");
static_assert(sizeof(UFortAthenaAIEvaluator_SpeechBubble) == 0x000240, "Wrong size on UFortAthenaAIEvaluator_SpeechBubble");
static_assert(offsetof(UFortAthenaAIEvaluator_SpeechBubble, CachedSpeechBubbleComponent) == 0x000238, "Member 'UFortAthenaAIEvaluator_SpeechBubble::CachedSpeechBubbleComponent' has a wrong offset!");

class UFortAthenaBTService_AIEvaluator final : public UBTService
{
public:
	struct FGameplayTag                           InjectionTag;
	uint8                                         Pad_74[0x4];
	TSubclassOf<class UFortAthenaAIEvaluator>     AIEvaluatorClass;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortAthenaBTService_AIEvaluator">();
	}
	static class UFortAthenaBTService_AIEvaluator* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortAthenaBTService_AIEvaluator>();
	}
};
static_assert(alignof(UFortAthenaBTService_AIEvaluator) == 0x000008, "Wrong alignment on UFortAthenaBTService_AIEvaluator");
static_assert(sizeof(UFortAthenaBTService_AIEvaluator) == 0x000080, "Wrong size on UFortAthenaBTService_AIEvaluator");
static_assert(offsetof(UFortAthenaBTService_AIEvaluator, InjectionTag) == 0x000070, "Member 'UFortAthenaBTService_AIEvaluator::InjectionTag' has a wrong offset!");
static_assert(offsetof(UFortAthenaBTService_AIEvaluator, AIEvaluatorClass) == 0x000078, "Member 'UFortAthenaBTService_AIEvaluator::AIEvaluatorClass' has a wrong offset!");

class UFortAthenaBTService_BuildConstruction final : public UBTService
{
public:
	class FName                                   StealWallBuildName;
	class FName                                   StealWallBuildTypeName;
	class FName                                   StealWallBuildGridCoordName;
	uint8                                         Pad_7C[0xC];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortAthenaBTService_BuildConstruction">();
	}
	static class UFortAthenaBTService_BuildConstruction* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortAthenaBTService_BuildConstruction>();
	}
};
static_assert(alignof(UFortAthenaBTService_BuildConstruction) == 0x000008, "Wrong alignment on UFortAthenaBTService_BuildConstruction");
static_assert(sizeof(UFortAthenaBTService_BuildConstruction) == 0x000088, "Wrong size on UFortAthenaBTService_BuildConstruction");
static_assert(offsetof(UFortAthenaBTService_BuildConstruction, StealWallBuildName) == 0x000070, "Member 'UFortAthenaBTService_BuildConstruction::StealWallBuildName' has a wrong offset!");
static_assert(offsetof(UFortAthenaBTService_BuildConstruction, StealWallBuildTypeName) == 0x000074, "Member 'UFortAthenaBTService_BuildConstruction::StealWallBuildTypeName' has a wrong offset!");
static_assert(offsetof(UFortAthenaBTService_BuildConstruction, StealWallBuildGridCoordName) == 0x000078, "Member 'UFortAthenaBTService_BuildConstruction::StealWallBuildGridCoordName' has a wrong offset!");

class UFortAthenaBTService_Clamber final : public UBTService
{
public:
	class FName                                   ClamberExecutionStatusName;
	class FName                                   ClamberOriginLocationName;
	class FName                                   ClamberDestinationLocationName;
	class FName                                   ClamberAbilityStatusName;
	class FName                                   JumpExecutionStatusName;
	class FName                                   CrouchExecutionStatusName;
	uint8                                         Pad_88[0xC];
	uint32                                        FirstJumpRetryMaxCount;
	float                                         FirstJumpRetryDelay;
	float                                         FirstJumpClamberMaxStartDelay;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortAthenaBTService_Clamber">();
	}
	static class UFortAthenaBTService_Clamber* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortAthenaBTService_Clamber>();
	}
};
static_assert(alignof(UFortAthenaBTService_Clamber) == 0x000008, "Wrong alignment on UFortAthenaBTService_Clamber");
static_assert(sizeof(UFortAthenaBTService_Clamber) == 0x0000A0, "Wrong size on UFortAthenaBTService_Clamber");
static_assert(offsetof(UFortAthenaBTService_Clamber, ClamberExecutionStatusName) == 0x000070, "Member 'UFortAthenaBTService_Clamber::ClamberExecutionStatusName' has a wrong offset!");
static_assert(offsetof(UFortAthenaBTService_Clamber, ClamberOriginLocationName) == 0x000074, "Member 'UFortAthenaBTService_Clamber::ClamberOriginLocationName' has a wrong offset!");
static_assert(offsetof(UFortAthenaBTService_Clamber, ClamberDestinationLocationName) == 0x000078, "Member 'UFortAthenaBTService_Clamber::ClamberDestinationLocationName' has a wrong offset!");
static_assert(offsetof(UFortAthenaBTService_Clamber, ClamberAbilityStatusName) == 0x00007C, "Member 'UFortAthenaBTService_Clamber::ClamberAbilityStatusName' has a wrong offset!");
static_assert(offsetof(UFortAthenaBTService_Clamber, JumpExecutionStatusName) == 0x000080, "Member 'UFortAthenaBTService_Clamber::JumpExecutionStatusName' has a wrong offset!");
static_assert(offsetof(UFortAthenaBTService_Clamber, CrouchExecutionStatusName) == 0x000084, "Member 'UFortAthenaBTService_Clamber::CrouchExecutionStatusName' has a wrong offset!");
static_assert(offsetof(UFortAthenaBTService_Clamber, FirstJumpRetryMaxCount) == 0x000094, "Member 'UFortAthenaBTService_Clamber::FirstJumpRetryMaxCount' has a wrong offset!");
static_assert(offsetof(UFortAthenaBTService_Clamber, FirstJumpRetryDelay) == 0x000098, "Member 'UFortAthenaBTService_Clamber::FirstJumpRetryDelay' has a wrong offset!");
static_assert(offsetof(UFortAthenaBTService_Clamber, FirstJumpClamberMaxStartDelay) == 0x00009C, "Member 'UFortAthenaBTService_Clamber::FirstJumpClamberMaxStartDelay' has a wrong offset!");

class UFortAthenaBTService_CopyBlackboardVariable final : public UBTService
{
public:
	struct FBlackboardKeySelector                 SourceBlackboardKey;
	struct FBlackboardKeySelector                 DestinationBlackboardKey;
	uint8                                         bCopyOnBecomeRelevant : 1;
	uint8                                         bCopyOnCeaseRelevant : 1;
	uint8                                         bCopyWhenSourceValueChange : 1;
	uint8                                         Pad_C1[0x7];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortAthenaBTService_CopyBlackboardVariable">();
	}
	static class UFortAthenaBTService_CopyBlackboardVariable* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortAthenaBTService_CopyBlackboardVariable>();
	}
};
static_assert(alignof(UFortAthenaBTService_CopyBlackboardVariable) == 0x000008, "Wrong alignment on UFortAthenaBTService_CopyBlackboardVariable");
static_assert(sizeof(UFortAthenaBTService_CopyBlackboardVariable) == 0x0000C8, "Wrong size on UFortAthenaBTService_CopyBlackboardVariable");
static_assert(offsetof(UFortAthenaBTService_CopyBlackboardVariable, SourceBlackboardKey) == 0x000070, "Member 'UFortAthenaBTService_CopyBlackboardVariable::SourceBlackboardKey' has a wrong offset!");
static_assert(offsetof(UFortAthenaBTService_CopyBlackboardVariable, DestinationBlackboardKey) == 0x000098, "Member 'UFortAthenaBTService_CopyBlackboardVariable::DestinationBlackboardKey' has a wrong offset!");

class UFortAthenaBTService_Escape final : public UBTService
{
public:
	class FName                                   EscapeKeyName;
	uint8                                         Pad_74[0x4];
	class FName                                   EscapeFromStormKeyName;
	uint8                                         Pad_7C[0x4];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortAthenaBTService_Escape">();
	}
	static class UFortAthenaBTService_Escape* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortAthenaBTService_Escape>();
	}
};
static_assert(alignof(UFortAthenaBTService_Escape) == 0x000008, "Wrong alignment on UFortAthenaBTService_Escape");
static_assert(sizeof(UFortAthenaBTService_Escape) == 0x000080, "Wrong size on UFortAthenaBTService_Escape");
static_assert(offsetof(UFortAthenaBTService_Escape, EscapeKeyName) == 0x000070, "Member 'UFortAthenaBTService_Escape::EscapeKeyName' has a wrong offset!");
static_assert(offsetof(UFortAthenaBTService_Escape, EscapeFromStormKeyName) == 0x000078, "Member 'UFortAthenaBTService_Escape::EscapeFromStormKeyName' has a wrong offset!");

class UFortAthenaBTService_Interact final : public UBTService
{
public:
	struct FBlackboardKeySelector                 InteractExecutionStatusKeySelector;
	struct FBlackboardKeySelector                 InteractContextInfoKeySelector;
	struct FBlackboardKeySelector                 InteractObjectKeySelector;
	struct FBlackboardKeySelector                 ExecutionStatusKeySelector;
	struct FBlackboardKeySelector                 MovementStateKeySelector;
	EInteractionBeingAttempted                    InteractionBeingAttempted;
	bool                                          bRequireDistanceCheck;
	bool                                          bRequireBlockedCheck;
	uint8                                         Pad_13B[0x5];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortAthenaBTService_Interact">();
	}
	static class UFortAthenaBTService_Interact* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortAthenaBTService_Interact>();
	}
};
static_assert(alignof(UFortAthenaBTService_Interact) == 0x000008, "Wrong alignment on UFortAthenaBTService_Interact");
static_assert(sizeof(UFortAthenaBTService_Interact) == 0x000140, "Wrong size on UFortAthenaBTService_Interact");
static_assert(offsetof(UFortAthenaBTService_Interact, InteractExecutionStatusKeySelector) == 0x000070, "Member 'UFortAthenaBTService_Interact::InteractExecutionStatusKeySelector' has a wrong offset!");
static_assert(offsetof(UFortAthenaBTService_Interact, InteractContextInfoKeySelector) == 0x000098, "Member 'UFortAthenaBTService_Interact::InteractContextInfoKeySelector' has a wrong offset!");
static_assert(offsetof(UFortAthenaBTService_Interact, InteractObjectKeySelector) == 0x0000C0, "Member 'UFortAthenaBTService_Interact::InteractObjectKeySelector' has a wrong offset!");
static_assert(offsetof(UFortAthenaBTService_Interact, ExecutionStatusKeySelector) == 0x0000E8, "Member 'UFortAthenaBTService_Interact::ExecutionStatusKeySelector' has a wrong offset!");
static_assert(offsetof(UFortAthenaBTService_Interact, MovementStateKeySelector) == 0x000110, "Member 'UFortAthenaBTService_Interact::MovementStateKeySelector' has a wrong offset!");
static_assert(offsetof(UFortAthenaBTService_Interact, InteractionBeingAttempted) == 0x000138, "Member 'UFortAthenaBTService_Interact::InteractionBeingAttempted' has a wrong offset!");
static_assert(offsetof(UFortAthenaBTService_Interact, bRequireDistanceCheck) == 0x000139, "Member 'UFortAthenaBTService_Interact::bRequireDistanceCheck' has a wrong offset!");
static_assert(offsetof(UFortAthenaBTService_Interact, bRequireBlockedCheck) == 0x00013A, "Member 'UFortAthenaBTService_Interact::bRequireBlockedCheck' has a wrong offset!");

class UFortAthenaBTService_JumpOffBus final : public UBTService
{
public:
	class FName                                   JumpOffBusExecutionStatusName;
	uint8                                         Pad_74[0x4];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortAthenaBTService_JumpOffBus">();
	}
	static class UFortAthenaBTService_JumpOffBus* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortAthenaBTService_JumpOffBus>();
	}
};
static_assert(alignof(UFortAthenaBTService_JumpOffBus) == 0x000008, "Wrong alignment on UFortAthenaBTService_JumpOffBus");
static_assert(sizeof(UFortAthenaBTService_JumpOffBus) == 0x000078, "Wrong size on UFortAthenaBTService_JumpOffBus");
static_assert(offsetof(UFortAthenaBTService_JumpOffBus, JumpOffBusExecutionStatusName) == 0x000070, "Member 'UFortAthenaBTService_JumpOffBus::JumpOffBusExecutionStatusName' has a wrong offset!");

class UFortAthenaBTService_ManageVehicleWeapon final : public UFortAthenaBTService_ManageWeapon
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortAthenaBTService_ManageVehicleWeapon">();
	}
	static class UFortAthenaBTService_ManageVehicleWeapon* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortAthenaBTService_ManageVehicleWeapon>();
	}
};
static_assert(alignof(UFortAthenaBTService_ManageVehicleWeapon) == 0x000008, "Wrong alignment on UFortAthenaBTService_ManageVehicleWeapon");
static_assert(sizeof(UFortAthenaBTService_ManageVehicleWeapon) == 0x0000B0, "Wrong size on UFortAthenaBTService_ManageVehicleWeapon");

class UFortAthenaBTService_ModulateVehicleSpeedUsingDistBetween final : public UBTService
{
public:
	struct FBlackboardKeySelector                 BlackboardKeyA;
	struct FBlackboardKeySelector                 BlackboardKeyB;
	float                                         MinDistance;
	float                                         MaxDistance;
	float                                         MinDistanceSpeed;
	float                                         MaxDistanceSpeed;
	bool                                          bCalculateAs2D;
	uint8                                         Pad_D1[0xF];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortAthenaBTService_ModulateVehicleSpeedUsingDistBetween">();
	}
	static class UFortAthenaBTService_ModulateVehicleSpeedUsingDistBetween* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortAthenaBTService_ModulateVehicleSpeedUsingDistBetween>();
	}
};
static_assert(alignof(UFortAthenaBTService_ModulateVehicleSpeedUsingDistBetween) == 0x000008, "Wrong alignment on UFortAthenaBTService_ModulateVehicleSpeedUsingDistBetween");
static_assert(sizeof(UFortAthenaBTService_ModulateVehicleSpeedUsingDistBetween) == 0x0000E0, "Wrong size on UFortAthenaBTService_ModulateVehicleSpeedUsingDistBetween");
static_assert(offsetof(UFortAthenaBTService_ModulateVehicleSpeedUsingDistBetween, BlackboardKeyA) == 0x000070, "Member 'UFortAthenaBTService_ModulateVehicleSpeedUsingDistBetween::BlackboardKeyA' has a wrong offset!");
static_assert(offsetof(UFortAthenaBTService_ModulateVehicleSpeedUsingDistBetween, BlackboardKeyB) == 0x000098, "Member 'UFortAthenaBTService_ModulateVehicleSpeedUsingDistBetween::BlackboardKeyB' has a wrong offset!");
static_assert(offsetof(UFortAthenaBTService_ModulateVehicleSpeedUsingDistBetween, MinDistance) == 0x0000C0, "Member 'UFortAthenaBTService_ModulateVehicleSpeedUsingDistBetween::MinDistance' has a wrong offset!");
static_assert(offsetof(UFortAthenaBTService_ModulateVehicleSpeedUsingDistBetween, MaxDistance) == 0x0000C4, "Member 'UFortAthenaBTService_ModulateVehicleSpeedUsingDistBetween::MaxDistance' has a wrong offset!");
static_assert(offsetof(UFortAthenaBTService_ModulateVehicleSpeedUsingDistBetween, MinDistanceSpeed) == 0x0000C8, "Member 'UFortAthenaBTService_ModulateVehicleSpeedUsingDistBetween::MinDistanceSpeed' has a wrong offset!");
static_assert(offsetof(UFortAthenaBTService_ModulateVehicleSpeedUsingDistBetween, MaxDistanceSpeed) == 0x0000CC, "Member 'UFortAthenaBTService_ModulateVehicleSpeedUsingDistBetween::MaxDistanceSpeed' has a wrong offset!");
static_assert(offsetof(UFortAthenaBTService_ModulateVehicleSpeedUsingDistBetween, bCalculateAs2D) == 0x0000D0, "Member 'UFortAthenaBTService_ModulateVehicleSpeedUsingDistBetween::bCalculateAs2D' has a wrong offset!");

class UFortAthenaBTService_Patrolling final : public UBTService
{
public:
	class FName                                   PatrollingAppendDestinationKeyName;
	uint8                                         Pad_74[0x4];
	float                                         AcceptableRadius;
	uint8                                         Pad_7C[0x4];
	TSubclassOf<class UNavigationQueryFilter>     FilterClass;
	uint8                                         bAllowPartialPath : 1;
	uint8                                         bProjectGoalLocation : 1;
	uint8                                         Pad_89[0x7];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortAthenaBTService_Patrolling">();
	}
	static class UFortAthenaBTService_Patrolling* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortAthenaBTService_Patrolling>();
	}
};
static_assert(alignof(UFortAthenaBTService_Patrolling) == 0x000008, "Wrong alignment on UFortAthenaBTService_Patrolling");
static_assert(sizeof(UFortAthenaBTService_Patrolling) == 0x000090, "Wrong size on UFortAthenaBTService_Patrolling");
static_assert(offsetof(UFortAthenaBTService_Patrolling, PatrollingAppendDestinationKeyName) == 0x000070, "Member 'UFortAthenaBTService_Patrolling::PatrollingAppendDestinationKeyName' has a wrong offset!");
static_assert(offsetof(UFortAthenaBTService_Patrolling, AcceptableRadius) == 0x000078, "Member 'UFortAthenaBTService_Patrolling::AcceptableRadius' has a wrong offset!");
static_assert(offsetof(UFortAthenaBTService_Patrolling, FilterClass) == 0x000080, "Member 'UFortAthenaBTService_Patrolling::FilterClass' has a wrong offset!");

class UFortAthenaBTService_PickUpLoot final : public UBTService
{
public:
	class FName                                   LootObjectKeyName;
	class FName                                   ExecutionStatusName;
	class FName                                   InteractionExecutionStatusName;
	class FName                                   InteractionContextInfoName;
	class FName                                   MovementStateKeyName;
	uint8                                         Pad_84[0xC];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortAthenaBTService_PickUpLoot">();
	}
	static class UFortAthenaBTService_PickUpLoot* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortAthenaBTService_PickUpLoot>();
	}
};
static_assert(alignof(UFortAthenaBTService_PickUpLoot) == 0x000008, "Wrong alignment on UFortAthenaBTService_PickUpLoot");
static_assert(sizeof(UFortAthenaBTService_PickUpLoot) == 0x000090, "Wrong size on UFortAthenaBTService_PickUpLoot");
static_assert(offsetof(UFortAthenaBTService_PickUpLoot, LootObjectKeyName) == 0x000070, "Member 'UFortAthenaBTService_PickUpLoot::LootObjectKeyName' has a wrong offset!");
static_assert(offsetof(UFortAthenaBTService_PickUpLoot, ExecutionStatusName) == 0x000074, "Member 'UFortAthenaBTService_PickUpLoot::ExecutionStatusName' has a wrong offset!");
static_assert(offsetof(UFortAthenaBTService_PickUpLoot, InteractionExecutionStatusName) == 0x000078, "Member 'UFortAthenaBTService_PickUpLoot::InteractionExecutionStatusName' has a wrong offset!");
static_assert(offsetof(UFortAthenaBTService_PickUpLoot, InteractionContextInfoName) == 0x00007C, "Member 'UFortAthenaBTService_PickUpLoot::InteractionContextInfoName' has a wrong offset!");
static_assert(offsetof(UFortAthenaBTService_PickUpLoot, MovementStateKeyName) == 0x000080, "Member 'UFortAthenaBTService_PickUpLoot::MovementStateKeyName' has a wrong offset!");

class UFortAthenaBTService_Revive final : public UBTService
{
public:
	class FName                                   ReviveTargetKeyName;
	class FName                                   ExecutionStatusName;
	class FName                                   MoveToPathMovementStateName;
	class FName                                   InteractionExecutionStatusName;
	class FName                                   InteractionContextInfoName;
	bool                                          bDisableLeash;
	uint8                                         Pad_85[0xB];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortAthenaBTService_Revive">();
	}
	static class UFortAthenaBTService_Revive* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortAthenaBTService_Revive>();
	}
};
static_assert(alignof(UFortAthenaBTService_Revive) == 0x000008, "Wrong alignment on UFortAthenaBTService_Revive");
static_assert(sizeof(UFortAthenaBTService_Revive) == 0x000090, "Wrong size on UFortAthenaBTService_Revive");
static_assert(offsetof(UFortAthenaBTService_Revive, ReviveTargetKeyName) == 0x000070, "Member 'UFortAthenaBTService_Revive::ReviveTargetKeyName' has a wrong offset!");
static_assert(offsetof(UFortAthenaBTService_Revive, ExecutionStatusName) == 0x000074, "Member 'UFortAthenaBTService_Revive::ExecutionStatusName' has a wrong offset!");
static_assert(offsetof(UFortAthenaBTService_Revive, MoveToPathMovementStateName) == 0x000078, "Member 'UFortAthenaBTService_Revive::MoveToPathMovementStateName' has a wrong offset!");
static_assert(offsetof(UFortAthenaBTService_Revive, InteractionExecutionStatusName) == 0x00007C, "Member 'UFortAthenaBTService_Revive::InteractionExecutionStatusName' has a wrong offset!");
static_assert(offsetof(UFortAthenaBTService_Revive, InteractionContextInfoName) == 0x000080, "Member 'UFortAthenaBTService_Revive::InteractionContextInfoName' has a wrong offset!");
static_assert(offsetof(UFortAthenaBTService_Revive, bDisableLeash) == 0x000084, "Member 'UFortAthenaBTService_Revive::bDisableLeash' has a wrong offset!");

class UFortAthenaBTService_Slide final : public UBTService
{
public:
	class FName                                   SlideExecutionStatusName;
	uint8                                         Pad_74[0x4];

public:
	void OnStopSliding(class AFortPlayerPawn* Pawn);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortAthenaBTService_Slide">();
	}
	static class UFortAthenaBTService_Slide* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortAthenaBTService_Slide>();
	}
};
static_assert(alignof(UFortAthenaBTService_Slide) == 0x000008, "Wrong alignment on UFortAthenaBTService_Slide");
static_assert(sizeof(UFortAthenaBTService_Slide) == 0x000078, "Wrong size on UFortAthenaBTService_Slide");
static_assert(offsetof(UFortAthenaBTService_Slide, SlideExecutionStatusName) == 0x000070, "Member 'UFortAthenaBTService_Slide::SlideExecutionStatusName' has a wrong offset!");

class UFortAthenaBTService_Sprinting final : public UBTService
{
public:
	uint8                                         Pad_70[0x40];
	class FName                                   SprintExecutionStatusName;
	class FName                                   TacticalSprintExecutionStatusName;
	class FName                                   TacticalSprintOverridenName;
	uint8                                         Pad_BC[0xC];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortAthenaBTService_Sprinting">();
	}
	static class UFortAthenaBTService_Sprinting* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortAthenaBTService_Sprinting>();
	}
};
static_assert(alignof(UFortAthenaBTService_Sprinting) == 0x000008, "Wrong alignment on UFortAthenaBTService_Sprinting");
static_assert(sizeof(UFortAthenaBTService_Sprinting) == 0x0000C8, "Wrong size on UFortAthenaBTService_Sprinting");
static_assert(offsetof(UFortAthenaBTService_Sprinting, SprintExecutionStatusName) == 0x0000B0, "Member 'UFortAthenaBTService_Sprinting::SprintExecutionStatusName' has a wrong offset!");
static_assert(offsetof(UFortAthenaBTService_Sprinting, TacticalSprintExecutionStatusName) == 0x0000B4, "Member 'UFortAthenaBTService_Sprinting::TacticalSprintExecutionStatusName' has a wrong offset!");
static_assert(offsetof(UFortAthenaBTService_Sprinting, TacticalSprintOverridenName) == 0x0000B8, "Member 'UFortAthenaBTService_Sprinting::TacticalSprintOverridenName' has a wrong offset!");

class UFortAthenaBTService_UpdateTarget final : public UBTService
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortAthenaBTService_UpdateTarget">();
	}
	static class UFortAthenaBTService_UpdateTarget* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortAthenaBTService_UpdateTarget>();
	}
};
static_assert(alignof(UFortAthenaBTService_UpdateTarget) == 0x000008, "Wrong alignment on UFortAthenaBTService_UpdateTarget");
static_assert(sizeof(UFortAthenaBTService_UpdateTarget) == 0x000070, "Wrong size on UFortAthenaBTService_UpdateTarget");

class UFortAthenaBTService_WaitForPassengers final : public UBTService
{
public:
	class FName                                   WaitForPassengersStatusKeyName;
	uint8                                         Pad_74[0x4];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortAthenaBTService_WaitForPassengers">();
	}
	static class UFortAthenaBTService_WaitForPassengers* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortAthenaBTService_WaitForPassengers>();
	}
};
static_assert(alignof(UFortAthenaBTService_WaitForPassengers) == 0x000008, "Wrong alignment on UFortAthenaBTService_WaitForPassengers");
static_assert(sizeof(UFortAthenaBTService_WaitForPassengers) == 0x000078, "Wrong size on UFortAthenaBTService_WaitForPassengers");
static_assert(offsetof(UFortAthenaBTService_WaitForPassengers, WaitForPassengersStatusKeyName) == 0x000070, "Member 'UFortAthenaBTService_WaitForPassengers::WaitForPassengersStatusKeyName' has a wrong offset!");

class UFortAthenaBTService_Zipline final : public UBTService
{
public:
	class FName                                   ZiplineTargetName;
	class FName                                   InteractionExecutionStatusName;
	class FName                                   InteractionContextInfoName;
	class FName                                   UsageExecutionStatusName;
	class FName                                   ZiplineEntryLocationName;
	class FName                                   ZiplineExitLocationKeyName;
	class FName                                   MoveToPathMovementStateName;
	class FName                                   MoveExecutionStatusName;
	class FName                                   FocalPointName;
	uint8                                         Pad_94[0x24];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortAthenaBTService_Zipline">();
	}
	static class UFortAthenaBTService_Zipline* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortAthenaBTService_Zipline>();
	}
};
static_assert(alignof(UFortAthenaBTService_Zipline) == 0x000008, "Wrong alignment on UFortAthenaBTService_Zipline");
static_assert(sizeof(UFortAthenaBTService_Zipline) == 0x0000B8, "Wrong size on UFortAthenaBTService_Zipline");
static_assert(offsetof(UFortAthenaBTService_Zipline, ZiplineTargetName) == 0x000070, "Member 'UFortAthenaBTService_Zipline::ZiplineTargetName' has a wrong offset!");
static_assert(offsetof(UFortAthenaBTService_Zipline, InteractionExecutionStatusName) == 0x000074, "Member 'UFortAthenaBTService_Zipline::InteractionExecutionStatusName' has a wrong offset!");
static_assert(offsetof(UFortAthenaBTService_Zipline, InteractionContextInfoName) == 0x000078, "Member 'UFortAthenaBTService_Zipline::InteractionContextInfoName' has a wrong offset!");
static_assert(offsetof(UFortAthenaBTService_Zipline, UsageExecutionStatusName) == 0x00007C, "Member 'UFortAthenaBTService_Zipline::UsageExecutionStatusName' has a wrong offset!");
static_assert(offsetof(UFortAthenaBTService_Zipline, ZiplineEntryLocationName) == 0x000080, "Member 'UFortAthenaBTService_Zipline::ZiplineEntryLocationName' has a wrong offset!");
static_assert(offsetof(UFortAthenaBTService_Zipline, ZiplineExitLocationKeyName) == 0x000084, "Member 'UFortAthenaBTService_Zipline::ZiplineExitLocationKeyName' has a wrong offset!");
static_assert(offsetof(UFortAthenaBTService_Zipline, MoveToPathMovementStateName) == 0x000088, "Member 'UFortAthenaBTService_Zipline::MoveToPathMovementStateName' has a wrong offset!");
static_assert(offsetof(UFortAthenaBTService_Zipline, MoveExecutionStatusName) == 0x00008C, "Member 'UFortAthenaBTService_Zipline::MoveExecutionStatusName' has a wrong offset!");
static_assert(offsetof(UFortAthenaBTService_Zipline, FocalPointName) == 0x000090, "Member 'UFortAthenaBTService_Zipline::FocalPointName' has a wrong offset!");

class UFortAthenaBTTask_ActivateVehicleBoost final : public UBTTaskNode
{
public:
	bool                                          bActivateBoost;
	uint8                                         Pad_71[0x3];
	float                                         BoostLength;
	bool                                          bIgnoreMinimumDistanceLeft;
	uint8                                         Pad_79[0x7];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortAthenaBTTask_ActivateVehicleBoost">();
	}
	static class UFortAthenaBTTask_ActivateVehicleBoost* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortAthenaBTTask_ActivateVehicleBoost>();
	}
};
static_assert(alignof(UFortAthenaBTTask_ActivateVehicleBoost) == 0x000008, "Wrong alignment on UFortAthenaBTTask_ActivateVehicleBoost");
static_assert(sizeof(UFortAthenaBTTask_ActivateVehicleBoost) == 0x000080, "Wrong size on UFortAthenaBTTask_ActivateVehicleBoost");
static_assert(offsetof(UFortAthenaBTTask_ActivateVehicleBoost, bActivateBoost) == 0x000070, "Member 'UFortAthenaBTTask_ActivateVehicleBoost::bActivateBoost' has a wrong offset!");
static_assert(offsetof(UFortAthenaBTTask_ActivateVehicleBoost, BoostLength) == 0x000074, "Member 'UFortAthenaBTTask_ActivateVehicleBoost::BoostLength' has a wrong offset!");
static_assert(offsetof(UFortAthenaBTTask_ActivateVehicleBoost, bIgnoreMinimumDistanceLeft) == 0x000078, "Member 'UFortAthenaBTTask_ActivateVehicleBoost::bIgnoreMinimumDistanceLeft' has a wrong offset!");

class UFortAthenaBTTask_BotMoveTo final : public UFortAthenaBTTask_MoveTo
{
public:
	class FName                                   NoSmashMoveGoalActorKeyName;
	uint8                                         Pad_C4[0x2];
	uint8                                         bAllowRandomWobble : 1;
	uint8                                         bIsUrgentMovement : 1;
	uint8                                         Pad_C7[0x1];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortAthenaBTTask_BotMoveTo">();
	}
	static class UFortAthenaBTTask_BotMoveTo* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortAthenaBTTask_BotMoveTo>();
	}
};
static_assert(alignof(UFortAthenaBTTask_BotMoveTo) == 0x000008, "Wrong alignment on UFortAthenaBTTask_BotMoveTo");
static_assert(sizeof(UFortAthenaBTTask_BotMoveTo) == 0x0000C8, "Wrong size on UFortAthenaBTTask_BotMoveTo");
static_assert(offsetof(UFortAthenaBTTask_BotMoveTo, NoSmashMoveGoalActorKeyName) == 0x0000C0, "Member 'UFortAthenaBTTask_BotMoveTo::NoSmashMoveGoalActorKeyName' has a wrong offset!");

class UFortAthenaBTTask_BotWait final : public UBTTask_Wait
{
public:
	struct FBlackboardKeySelector                 WaitCompleteKeySelector;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortAthenaBTTask_BotWait">();
	}
	static class UFortAthenaBTTask_BotWait* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortAthenaBTTask_BotWait>();
	}
};
static_assert(alignof(UFortAthenaBTTask_BotWait) == 0x000008, "Wrong alignment on UFortAthenaBTTask_BotWait");
static_assert(sizeof(UFortAthenaBTTask_BotWait) == 0x0000A0, "Wrong size on UFortAthenaBTTask_BotWait");
static_assert(offsetof(UFortAthenaBTTask_BotWait, WaitCompleteKeySelector) == 0x000078, "Member 'UFortAthenaBTTask_BotWait::WaitCompleteKeySelector' has a wrong offset!");

class UFortAthenaBTTask_Conversation final : public UBTTaskNode
{
public:
	class FName                                   ConversationStatusKeyName;
	uint8                                         Pad_74[0x2];
	bool                                          bResetEvaluatorStatusKeyOnFinish;
	uint8                                         Pad_77[0x1];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortAthenaBTTask_Conversation">();
	}
	static class UFortAthenaBTTask_Conversation* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortAthenaBTTask_Conversation>();
	}
};
static_assert(alignof(UFortAthenaBTTask_Conversation) == 0x000008, "Wrong alignment on UFortAthenaBTTask_Conversation");
static_assert(sizeof(UFortAthenaBTTask_Conversation) == 0x000078, "Wrong size on UFortAthenaBTTask_Conversation");
static_assert(offsetof(UFortAthenaBTTask_Conversation, ConversationStatusKeyName) == 0x000070, "Member 'UFortAthenaBTTask_Conversation::ConversationStatusKeyName' has a wrong offset!");
static_assert(offsetof(UFortAthenaBTTask_Conversation, bResetEvaluatorStatusKeyOnFinish) == 0x000076, "Member 'UFortAthenaBTTask_Conversation::bResetEvaluatorStatusKeyOnFinish' has a wrong offset!");

class UFortAthenaBTTask_EnterVehicle final : public UBTTaskNode
{
public:
	class FName                                   SelectedVehicleKeyName;
	uint8                                         Pad_74[0x4];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortAthenaBTTask_EnterVehicle">();
	}
	static class UFortAthenaBTTask_EnterVehicle* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortAthenaBTTask_EnterVehicle>();
	}
};
static_assert(alignof(UFortAthenaBTTask_EnterVehicle) == 0x000008, "Wrong alignment on UFortAthenaBTTask_EnterVehicle");
static_assert(sizeof(UFortAthenaBTTask_EnterVehicle) == 0x000078, "Wrong size on UFortAthenaBTTask_EnterVehicle");
static_assert(offsetof(UFortAthenaBTTask_EnterVehicle, SelectedVehicleKeyName) == 0x000070, "Member 'UFortAthenaBTTask_EnterVehicle::SelectedVehicleKeyName' has a wrong offset!");

class UFortAthenaBTTask_Interact final : public UBTTaskNode
{
public:
	bool                                          bShouldFocusOnInteraction;
	uint8                                         Pad_71[0x7];
	struct FBlackboardKeySelector                 InteractExecutionStatusKeySelector;
	struct FBlackboardKeySelector                 InteractContextInfoKeySelector;
	class FName                                   FocalPointName;
	class FName                                   InteractActorName;
	class FName                                   JumpExecutionStatusName;
	class FName                                   WeaponTriggerMeleeName;
	uint8                                         Pad_D8[0x8];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortAthenaBTTask_Interact">();
	}
	static class UFortAthenaBTTask_Interact* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortAthenaBTTask_Interact>();
	}
};
static_assert(alignof(UFortAthenaBTTask_Interact) == 0x000008, "Wrong alignment on UFortAthenaBTTask_Interact");
static_assert(sizeof(UFortAthenaBTTask_Interact) == 0x0000E0, "Wrong size on UFortAthenaBTTask_Interact");
static_assert(offsetof(UFortAthenaBTTask_Interact, bShouldFocusOnInteraction) == 0x000070, "Member 'UFortAthenaBTTask_Interact::bShouldFocusOnInteraction' has a wrong offset!");
static_assert(offsetof(UFortAthenaBTTask_Interact, InteractExecutionStatusKeySelector) == 0x000078, "Member 'UFortAthenaBTTask_Interact::InteractExecutionStatusKeySelector' has a wrong offset!");
static_assert(offsetof(UFortAthenaBTTask_Interact, InteractContextInfoKeySelector) == 0x0000A0, "Member 'UFortAthenaBTTask_Interact::InteractContextInfoKeySelector' has a wrong offset!");
static_assert(offsetof(UFortAthenaBTTask_Interact, FocalPointName) == 0x0000C8, "Member 'UFortAthenaBTTask_Interact::FocalPointName' has a wrong offset!");
static_assert(offsetof(UFortAthenaBTTask_Interact, InteractActorName) == 0x0000CC, "Member 'UFortAthenaBTTask_Interact::InteractActorName' has a wrong offset!");
static_assert(offsetof(UFortAthenaBTTask_Interact, JumpExecutionStatusName) == 0x0000D0, "Member 'UFortAthenaBTTask_Interact::JumpExecutionStatusName' has a wrong offset!");
static_assert(offsetof(UFortAthenaBTTask_Interact, WeaponTriggerMeleeName) == 0x0000D4, "Member 'UFortAthenaBTTask_Interact::WeaponTriggerMeleeName' has a wrong offset!");

class UFortAthenaBTTask_ModulateVehicleSpeed final : public UBTTaskNode
{
public:
	float                                         NewDrivingSpeed;
	uint8                                         Pad_74[0x4];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortAthenaBTTask_ModulateVehicleSpeed">();
	}
	static class UFortAthenaBTTask_ModulateVehicleSpeed* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortAthenaBTTask_ModulateVehicleSpeed>();
	}
};
static_assert(alignof(UFortAthenaBTTask_ModulateVehicleSpeed) == 0x000008, "Wrong alignment on UFortAthenaBTTask_ModulateVehicleSpeed");
static_assert(sizeof(UFortAthenaBTTask_ModulateVehicleSpeed) == 0x000078, "Wrong size on UFortAthenaBTTask_ModulateVehicleSpeed");
static_assert(offsetof(UFortAthenaBTTask_ModulateVehicleSpeed, NewDrivingSpeed) == 0x000070, "Member 'UFortAthenaBTTask_ModulateVehicleSpeed::NewDrivingSpeed' has a wrong offset!");

class UFortAthenaBTTask_PauseVehicle final : public UBTTaskNode
{
public:
	bool                                          bPausePathFollow;
	uint8                                         Pad_71[0x7];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortAthenaBTTask_PauseVehicle">();
	}
	static class UFortAthenaBTTask_PauseVehicle* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortAthenaBTTask_PauseVehicle>();
	}
};
static_assert(alignof(UFortAthenaBTTask_PauseVehicle) == 0x000008, "Wrong alignment on UFortAthenaBTTask_PauseVehicle");
static_assert(sizeof(UFortAthenaBTTask_PauseVehicle) == 0x000078, "Wrong size on UFortAthenaBTTask_PauseVehicle");
static_assert(offsetof(UFortAthenaBTTask_PauseVehicle, bPausePathFollow) == 0x000070, "Member 'UFortAthenaBTTask_PauseVehicle::bPausePathFollow' has a wrong offset!");

class UFortAthenaBTTask_PlayEmote final : public UBTTaskNode
{
public:
	class FName                                   PlayEmoteExecutionStatusKeyName;
	uint8                                         Pad_74[0x4];
	TArray<class UAthenaDanceItemDefinition*>     BespokeEmotes;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortAthenaBTTask_PlayEmote">();
	}
	static class UFortAthenaBTTask_PlayEmote* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortAthenaBTTask_PlayEmote>();
	}
};
static_assert(alignof(UFortAthenaBTTask_PlayEmote) == 0x000008, "Wrong alignment on UFortAthenaBTTask_PlayEmote");
static_assert(sizeof(UFortAthenaBTTask_PlayEmote) == 0x000088, "Wrong size on UFortAthenaBTTask_PlayEmote");
static_assert(offsetof(UFortAthenaBTTask_PlayEmote, PlayEmoteExecutionStatusKeyName) == 0x000070, "Member 'UFortAthenaBTTask_PlayEmote::PlayEmoteExecutionStatusKeyName' has a wrong offset!");
static_assert(offsetof(UFortAthenaBTTask_PlayEmote, BespokeEmotes) == 0x000078, "Member 'UFortAthenaBTTask_PlayEmote::BespokeEmotes' has a wrong offset!");

class UFortAthenaBTTask_ReverseVehicle final : public UBTTaskNode
{
public:
	bool                                          bReverseVehicle;
	uint8                                         Pad_71[0x7];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortAthenaBTTask_ReverseVehicle">();
	}
	static class UFortAthenaBTTask_ReverseVehicle* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortAthenaBTTask_ReverseVehicle>();
	}
};
static_assert(alignof(UFortAthenaBTTask_ReverseVehicle) == 0x000008, "Wrong alignment on UFortAthenaBTTask_ReverseVehicle");
static_assert(sizeof(UFortAthenaBTTask_ReverseVehicle) == 0x000078, "Wrong size on UFortAthenaBTTask_ReverseVehicle");
static_assert(offsetof(UFortAthenaBTTask_ReverseVehicle, bReverseVehicle) == 0x000070, "Member 'UFortAthenaBTTask_ReverseVehicle::bReverseVehicle' has a wrong offset!");

class UFortAthenaBTTask_RunDynamicSubtree final : public UBTTask_RunBehaviorDynamic
{
public:
	uint8                                         bCallParentOnInstanceCreated : 1;
	uint8                                         bUpdateBlackboardAsset : 1;
	uint8                                         Pad_89[0x7];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortAthenaBTTask_RunDynamicSubtree">();
	}
	static class UFortAthenaBTTask_RunDynamicSubtree* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortAthenaBTTask_RunDynamicSubtree>();
	}
};
static_assert(alignof(UFortAthenaBTTask_RunDynamicSubtree) == 0x000008, "Wrong alignment on UFortAthenaBTTask_RunDynamicSubtree");
static_assert(sizeof(UFortAthenaBTTask_RunDynamicSubtree) == 0x000090, "Wrong size on UFortAthenaBTTask_RunDynamicSubtree");

class UFortAthenaBTTask_ShootTrap final : public UBTTask_Wait
{
public:
	struct FBlackboardKeySelector                 TargetActorKey;
	class FName                                   TrapOnPathKeyName;
	uint8                                         Pad_A4[0x4];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortAthenaBTTask_ShootTrap">();
	}
	static class UFortAthenaBTTask_ShootTrap* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortAthenaBTTask_ShootTrap>();
	}
};
static_assert(alignof(UFortAthenaBTTask_ShootTrap) == 0x000008, "Wrong alignment on UFortAthenaBTTask_ShootTrap");
static_assert(sizeof(UFortAthenaBTTask_ShootTrap) == 0x0000A8, "Wrong size on UFortAthenaBTTask_ShootTrap");
static_assert(offsetof(UFortAthenaBTTask_ShootTrap, TargetActorKey) == 0x000078, "Member 'UFortAthenaBTTask_ShootTrap::TargetActorKey' has a wrong offset!");
static_assert(offsetof(UFortAthenaBTTask_ShootTrap, TrapOnPathKeyName) == 0x0000A0, "Member 'UFortAthenaBTTask_ShootTrap::TrapOnPathKeyName' has a wrong offset!");

class UFortAthenaBTTask_Undermine final : public UBTTaskNode
{
public:
	class FName                                   UndermineTargetKeyName;
	class FName                                   UndermineLocationImpactName;
	class FName                                   UndermineExecutionStatusKeyName;
	uint8                                         Pad_7C[0xC];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortAthenaBTTask_Undermine">();
	}
	static class UFortAthenaBTTask_Undermine* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortAthenaBTTask_Undermine>();
	}
};
static_assert(alignof(UFortAthenaBTTask_Undermine) == 0x000008, "Wrong alignment on UFortAthenaBTTask_Undermine");
static_assert(sizeof(UFortAthenaBTTask_Undermine) == 0x000088, "Wrong size on UFortAthenaBTTask_Undermine");
static_assert(offsetof(UFortAthenaBTTask_Undermine, UndermineTargetKeyName) == 0x000070, "Member 'UFortAthenaBTTask_Undermine::UndermineTargetKeyName' has a wrong offset!");
static_assert(offsetof(UFortAthenaBTTask_Undermine, UndermineLocationImpactName) == 0x000074, "Member 'UFortAthenaBTTask_Undermine::UndermineLocationImpactName' has a wrong offset!");
static_assert(offsetof(UFortAthenaBTTask_Undermine, UndermineExecutionStatusKeyName) == 0x000078, "Member 'UFortAthenaBTTask_Undermine::UndermineExecutionStatusKeyName' has a wrong offset!");

class UFortAthenaBTTask_UseItem final : public UBTTaskNode
{
public:
	class FName                                   ActionObjectKeyName;
	class FName                                   ExecutionStatusKeyName;
	float                                         MinWaitTimeBetweenUses;
	float                                         MaxWaitTimeBetweenUses;
	uint8                                         Pad_80[0x8];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortAthenaBTTask_UseItem">();
	}
	static class UFortAthenaBTTask_UseItem* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortAthenaBTTask_UseItem>();
	}
};
static_assert(alignof(UFortAthenaBTTask_UseItem) == 0x000008, "Wrong alignment on UFortAthenaBTTask_UseItem");
static_assert(sizeof(UFortAthenaBTTask_UseItem) == 0x000088, "Wrong size on UFortAthenaBTTask_UseItem");
static_assert(offsetof(UFortAthenaBTTask_UseItem, ActionObjectKeyName) == 0x000070, "Member 'UFortAthenaBTTask_UseItem::ActionObjectKeyName' has a wrong offset!");
static_assert(offsetof(UFortAthenaBTTask_UseItem, ExecutionStatusKeyName) == 0x000074, "Member 'UFortAthenaBTTask_UseItem::ExecutionStatusKeyName' has a wrong offset!");
static_assert(offsetof(UFortAthenaBTTask_UseItem, MinWaitTimeBetweenUses) == 0x000078, "Member 'UFortAthenaBTTask_UseItem::MinWaitTimeBetweenUses' has a wrong offset!");
static_assert(offsetof(UFortAthenaBTTask_UseItem, MaxWaitTimeBetweenUses) == 0x00007C, "Member 'UFortAthenaBTTask_UseItem::MaxWaitTimeBetweenUses' has a wrong offset!");

class UFortAthenaBTTask_UseSmartObject final : public UBTTaskNode
{
public:
	class FName                                   SmartObjectsStatusKeyName;
	uint8                                         Pad_74[0x4];
	class FName                                   SmartObjectDestinationRotationKeyName;
	uint8                                         Pad_7C[0x2];
	bool                                          bHandleAbortWithSoftDisable;
	uint8                                         Pad_7F[0x29];
	struct FGameplayInteractionContext            GameplayInteractionContext;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortAthenaBTTask_UseSmartObject">();
	}
	static class UFortAthenaBTTask_UseSmartObject* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortAthenaBTTask_UseSmartObject>();
	}
};
static_assert(alignof(UFortAthenaBTTask_UseSmartObject) == 0x000008, "Wrong alignment on UFortAthenaBTTask_UseSmartObject");
static_assert(sizeof(UFortAthenaBTTask_UseSmartObject) == 0x0000F0, "Wrong size on UFortAthenaBTTask_UseSmartObject");
static_assert(offsetof(UFortAthenaBTTask_UseSmartObject, SmartObjectsStatusKeyName) == 0x000070, "Member 'UFortAthenaBTTask_UseSmartObject::SmartObjectsStatusKeyName' has a wrong offset!");
static_assert(offsetof(UFortAthenaBTTask_UseSmartObject, SmartObjectDestinationRotationKeyName) == 0x000078, "Member 'UFortAthenaBTTask_UseSmartObject::SmartObjectDestinationRotationKeyName' has a wrong offset!");
static_assert(offsetof(UFortAthenaBTTask_UseSmartObject, bHandleAbortWithSoftDisable) == 0x00007E, "Member 'UFortAthenaBTTask_UseSmartObject::bHandleAbortWithSoftDisable' has a wrong offset!");
static_assert(offsetof(UFortAthenaBTTask_UseSmartObject, GameplayInteractionContext) == 0x0000A8, "Member 'UFortAthenaBTTask_UseSmartObject::GameplayInteractionContext' has a wrong offset!");

class UFortAthenaBTTask_VehicleHonk final : public UBTTaskNode
{
public:
	float                                         MaxHonkTime;
	float                                         MinHonkTime;
	float                                         MaxFlickerTime;
	float                                         MinFlickerTime;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortAthenaBTTask_VehicleHonk">();
	}
	static class UFortAthenaBTTask_VehicleHonk* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortAthenaBTTask_VehicleHonk>();
	}
};
static_assert(alignof(UFortAthenaBTTask_VehicleHonk) == 0x000008, "Wrong alignment on UFortAthenaBTTask_VehicleHonk");
static_assert(sizeof(UFortAthenaBTTask_VehicleHonk) == 0x000080, "Wrong size on UFortAthenaBTTask_VehicleHonk");
static_assert(offsetof(UFortAthenaBTTask_VehicleHonk, MaxHonkTime) == 0x000070, "Member 'UFortAthenaBTTask_VehicleHonk::MaxHonkTime' has a wrong offset!");
static_assert(offsetof(UFortAthenaBTTask_VehicleHonk, MinHonkTime) == 0x000074, "Member 'UFortAthenaBTTask_VehicleHonk::MinHonkTime' has a wrong offset!");
static_assert(offsetof(UFortAthenaBTTask_VehicleHonk, MaxFlickerTime) == 0x000078, "Member 'UFortAthenaBTTask_VehicleHonk::MaxFlickerTime' has a wrong offset!");
static_assert(offsetof(UFortAthenaBTTask_VehicleHonk, MinFlickerTime) == 0x00007C, "Member 'UFortAthenaBTTask_VehicleHonk::MinFlickerTime' has a wrong offset!");

class UFortAthenaBTTask_VehicleTurnTo final : public UBTTask_BlackboardBase
{
public:
	float                                         Precision;
	uint8                                         Pad_9C[0x4];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortAthenaBTTask_VehicleTurnTo">();
	}
	static class UFortAthenaBTTask_VehicleTurnTo* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortAthenaBTTask_VehicleTurnTo>();
	}
};
static_assert(alignof(UFortAthenaBTTask_VehicleTurnTo) == 0x000008, "Wrong alignment on UFortAthenaBTTask_VehicleTurnTo");
static_assert(sizeof(UFortAthenaBTTask_VehicleTurnTo) == 0x0000A0, "Wrong size on UFortAthenaBTTask_VehicleTurnTo");
static_assert(offsetof(UFortAthenaBTTask_VehicleTurnTo, Precision) == 0x000098, "Member 'UFortAthenaBTTask_VehicleTurnTo::Precision' has a wrong offset!");

class UFortAthenaBTTask_Zipline final : public UBTTaskNode
{
public:
	class FName                                   UsageExecutionStatusName;
	uint8                                         Pad_74[0x4];
	class FName                                   ZiplineTargetName;
	uint8                                         Pad_7C[0x4];

public:
	void OnZiplineStateChanged(bool bIsZiplining, class AFortPlayerPawn* FortPlayerPawn);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortAthenaBTTask_Zipline">();
	}
	static class UFortAthenaBTTask_Zipline* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortAthenaBTTask_Zipline>();
	}
};
static_assert(alignof(UFortAthenaBTTask_Zipline) == 0x000008, "Wrong alignment on UFortAthenaBTTask_Zipline");
static_assert(sizeof(UFortAthenaBTTask_Zipline) == 0x000080, "Wrong size on UFortAthenaBTTask_Zipline");
static_assert(offsetof(UFortAthenaBTTask_Zipline, UsageExecutionStatusName) == 0x000070, "Member 'UFortAthenaBTTask_Zipline::UsageExecutionStatusName' has a wrong offset!");
static_assert(offsetof(UFortAthenaBTTask_Zipline, ZiplineTargetName) == 0x000078, "Member 'UFortAthenaBTTask_Zipline::ZiplineTargetName' has a wrong offset!");

class UFortAthenaNpcEvaluator_FollowPatrolPath final : public UFortAthenaAIBotEvaluator_Movement
{
public:
	class FName                                   FollowPatrolPathKeyName;
	class FName                                   FollowPatrolPathMovementStateKeyName;
	class FName                                   FollowPatrolPathDestinationKeyName;
	uint8                                         Pad_19C[0x8];
	float                                         ChanceToTakeABreak;
	float                                         BreakDurationMin;
	float                                         BreakDurationMax;
	uint8                                         Pad_1B0[0x18];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortAthenaNpcEvaluator_FollowPatrolPath">();
	}
	static class UFortAthenaNpcEvaluator_FollowPatrolPath* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortAthenaNpcEvaluator_FollowPatrolPath>();
	}
};
static_assert(alignof(UFortAthenaNpcEvaluator_FollowPatrolPath) == 0x000008, "Wrong alignment on UFortAthenaNpcEvaluator_FollowPatrolPath");
static_assert(sizeof(UFortAthenaNpcEvaluator_FollowPatrolPath) == 0x0001C8, "Wrong size on UFortAthenaNpcEvaluator_FollowPatrolPath");
static_assert(offsetof(UFortAthenaNpcEvaluator_FollowPatrolPath, FollowPatrolPathKeyName) == 0x000190, "Member 'UFortAthenaNpcEvaluator_FollowPatrolPath::FollowPatrolPathKeyName' has a wrong offset!");
static_assert(offsetof(UFortAthenaNpcEvaluator_FollowPatrolPath, FollowPatrolPathMovementStateKeyName) == 0x000194, "Member 'UFortAthenaNpcEvaluator_FollowPatrolPath::FollowPatrolPathMovementStateKeyName' has a wrong offset!");
static_assert(offsetof(UFortAthenaNpcEvaluator_FollowPatrolPath, FollowPatrolPathDestinationKeyName) == 0x000198, "Member 'UFortAthenaNpcEvaluator_FollowPatrolPath::FollowPatrolPathDestinationKeyName' has a wrong offset!");
static_assert(offsetof(UFortAthenaNpcEvaluator_FollowPatrolPath, ChanceToTakeABreak) == 0x0001A4, "Member 'UFortAthenaNpcEvaluator_FollowPatrolPath::ChanceToTakeABreak' has a wrong offset!");
static_assert(offsetof(UFortAthenaNpcEvaluator_FollowPatrolPath, BreakDurationMin) == 0x0001A8, "Member 'UFortAthenaNpcEvaluator_FollowPatrolPath::BreakDurationMin' has a wrong offset!");
static_assert(offsetof(UFortAthenaNpcEvaluator_FollowPatrolPath, BreakDurationMax) == 0x0001AC, "Member 'UFortAthenaNpcEvaluator_FollowPatrolPath::BreakDurationMax' has a wrong offset!");

class UFortAthenaNpcEvaluator_FollowSquadLeader final : public UFortAthenaAIBotEvaluator_Movement
{
public:
	struct FScalableFloat                         FormationOffsetRadiusMin;
	struct FScalableFloat                         FormationOffsetRadiusMax;
	struct FScalableFloat                         TooFarFromSquadLeaderDistance;
	struct FScalableFloat                         MaxNoiseRadius;
	struct FScalableFloat                         MinDurationNoiseEvaluate;
	struct FScalableFloat                         MaxDurationNoiseEvaluate;
	class FName                                   FollowSquadLeaderStatusKeyName;
	uint8                                         Pad_284[0x4];
	class FName                                   FollowSquadLeaderMovementStateKeyName;
	uint8                                         Pad_28C[0x4];
	class FName                                   FollowSquadLeaderDestinationKeyName;
	uint8                                         Pad_294[0x4];
	class FName                                   TooFarFromLeaderKeyName;
	uint8                                         Pad_29C[0x4];
	struct FVector                                CachedSquadFormationOffset;
	struct FVector                                CachedNoiseOffset;
	float                                         CachedTooFarFromSquadLeaderDistanceSqr;
	float                                         LastNoiseOffsetUpdateTime;
	float                                         DurationNoiseEvaluate;
	uint8                                         Pad_2DC[0x4];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortAthenaNpcEvaluator_FollowSquadLeader">();
	}
	static class UFortAthenaNpcEvaluator_FollowSquadLeader* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortAthenaNpcEvaluator_FollowSquadLeader>();
	}
};
static_assert(alignof(UFortAthenaNpcEvaluator_FollowSquadLeader) == 0x000008, "Wrong alignment on UFortAthenaNpcEvaluator_FollowSquadLeader");
static_assert(sizeof(UFortAthenaNpcEvaluator_FollowSquadLeader) == 0x0002E0, "Wrong size on UFortAthenaNpcEvaluator_FollowSquadLeader");
static_assert(offsetof(UFortAthenaNpcEvaluator_FollowSquadLeader, FormationOffsetRadiusMin) == 0x000190, "Member 'UFortAthenaNpcEvaluator_FollowSquadLeader::FormationOffsetRadiusMin' has a wrong offset!");
static_assert(offsetof(UFortAthenaNpcEvaluator_FollowSquadLeader, FormationOffsetRadiusMax) == 0x0001B8, "Member 'UFortAthenaNpcEvaluator_FollowSquadLeader::FormationOffsetRadiusMax' has a wrong offset!");
static_assert(offsetof(UFortAthenaNpcEvaluator_FollowSquadLeader, TooFarFromSquadLeaderDistance) == 0x0001E0, "Member 'UFortAthenaNpcEvaluator_FollowSquadLeader::TooFarFromSquadLeaderDistance' has a wrong offset!");
static_assert(offsetof(UFortAthenaNpcEvaluator_FollowSquadLeader, MaxNoiseRadius) == 0x000208, "Member 'UFortAthenaNpcEvaluator_FollowSquadLeader::MaxNoiseRadius' has a wrong offset!");
static_assert(offsetof(UFortAthenaNpcEvaluator_FollowSquadLeader, MinDurationNoiseEvaluate) == 0x000230, "Member 'UFortAthenaNpcEvaluator_FollowSquadLeader::MinDurationNoiseEvaluate' has a wrong offset!");
static_assert(offsetof(UFortAthenaNpcEvaluator_FollowSquadLeader, MaxDurationNoiseEvaluate) == 0x000258, "Member 'UFortAthenaNpcEvaluator_FollowSquadLeader::MaxDurationNoiseEvaluate' has a wrong offset!");
static_assert(offsetof(UFortAthenaNpcEvaluator_FollowSquadLeader, FollowSquadLeaderStatusKeyName) == 0x000280, "Member 'UFortAthenaNpcEvaluator_FollowSquadLeader::FollowSquadLeaderStatusKeyName' has a wrong offset!");
static_assert(offsetof(UFortAthenaNpcEvaluator_FollowSquadLeader, FollowSquadLeaderMovementStateKeyName) == 0x000288, "Member 'UFortAthenaNpcEvaluator_FollowSquadLeader::FollowSquadLeaderMovementStateKeyName' has a wrong offset!");
static_assert(offsetof(UFortAthenaNpcEvaluator_FollowSquadLeader, FollowSquadLeaderDestinationKeyName) == 0x000290, "Member 'UFortAthenaNpcEvaluator_FollowSquadLeader::FollowSquadLeaderDestinationKeyName' has a wrong offset!");
static_assert(offsetof(UFortAthenaNpcEvaluator_FollowSquadLeader, TooFarFromLeaderKeyName) == 0x000298, "Member 'UFortAthenaNpcEvaluator_FollowSquadLeader::TooFarFromLeaderKeyName' has a wrong offset!");
static_assert(offsetof(UFortAthenaNpcEvaluator_FollowSquadLeader, CachedSquadFormationOffset) == 0x0002A0, "Member 'UFortAthenaNpcEvaluator_FollowSquadLeader::CachedSquadFormationOffset' has a wrong offset!");
static_assert(offsetof(UFortAthenaNpcEvaluator_FollowSquadLeader, CachedNoiseOffset) == 0x0002B8, "Member 'UFortAthenaNpcEvaluator_FollowSquadLeader::CachedNoiseOffset' has a wrong offset!");
static_assert(offsetof(UFortAthenaNpcEvaluator_FollowSquadLeader, CachedTooFarFromSquadLeaderDistanceSqr) == 0x0002D0, "Member 'UFortAthenaNpcEvaluator_FollowSquadLeader::CachedTooFarFromSquadLeaderDistanceSqr' has a wrong offset!");
static_assert(offsetof(UFortAthenaNpcEvaluator_FollowSquadLeader, LastNoiseOffsetUpdateTime) == 0x0002D4, "Member 'UFortAthenaNpcEvaluator_FollowSquadLeader::LastNoiseOffsetUpdateTime' has a wrong offset!");
static_assert(offsetof(UFortAthenaNpcEvaluator_FollowSquadLeader, DurationNoiseEvaluate) == 0x0002D8, "Member 'UFortAthenaNpcEvaluator_FollowSquadLeader::DurationNoiseEvaluate' has a wrong offset!");

class UFortAthenaNpcEvaluator_Leash final : public UFortAthenaAIBotEvaluator_Movement
{
public:
	class FName                                   LeashKeyName;
	class FName                                   LeashMovementStateKeyName;
	class FName                                   LeashDestinationKeyName;
	class FName                                   LeashLocationKeyName;
	class FName                                   LeashOuterRadiusKeyName;
	bool                                          bAlwaysForceMoveToLeashCenter;
	uint8                                         Pad_1A5[0xB];
	class UFortAthenaAIRuntimeParameters_Leash*   LeashRuntimeParameters;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortAthenaNpcEvaluator_Leash">();
	}
	static class UFortAthenaNpcEvaluator_Leash* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortAthenaNpcEvaluator_Leash>();
	}
};
static_assert(alignof(UFortAthenaNpcEvaluator_Leash) == 0x000008, "Wrong alignment on UFortAthenaNpcEvaluator_Leash");
static_assert(sizeof(UFortAthenaNpcEvaluator_Leash) == 0x0001B8, "Wrong size on UFortAthenaNpcEvaluator_Leash");
static_assert(offsetof(UFortAthenaNpcEvaluator_Leash, LeashKeyName) == 0x000190, "Member 'UFortAthenaNpcEvaluator_Leash::LeashKeyName' has a wrong offset!");
static_assert(offsetof(UFortAthenaNpcEvaluator_Leash, LeashMovementStateKeyName) == 0x000194, "Member 'UFortAthenaNpcEvaluator_Leash::LeashMovementStateKeyName' has a wrong offset!");
static_assert(offsetof(UFortAthenaNpcEvaluator_Leash, LeashDestinationKeyName) == 0x000198, "Member 'UFortAthenaNpcEvaluator_Leash::LeashDestinationKeyName' has a wrong offset!");
static_assert(offsetof(UFortAthenaNpcEvaluator_Leash, LeashLocationKeyName) == 0x00019C, "Member 'UFortAthenaNpcEvaluator_Leash::LeashLocationKeyName' has a wrong offset!");
static_assert(offsetof(UFortAthenaNpcEvaluator_Leash, LeashOuterRadiusKeyName) == 0x0001A0, "Member 'UFortAthenaNpcEvaluator_Leash::LeashOuterRadiusKeyName' has a wrong offset!");
static_assert(offsetof(UFortAthenaNpcEvaluator_Leash, bAlwaysForceMoveToLeashCenter) == 0x0001A4, "Member 'UFortAthenaNpcEvaluator_Leash::bAlwaysForceMoveToLeashCenter' has a wrong offset!");
static_assert(offsetof(UFortAthenaNpcEvaluator_Leash, LeashRuntimeParameters) == 0x0001B0, "Member 'UFortAthenaNpcEvaluator_Leash::LeashRuntimeParameters' has a wrong offset!");

class UFortQueryContext_BotPOIVolume final : public UEnvQueryContext
{
public:
	bool                                          bSetProjectedToNavmeshLocationAsContext;
	uint8                                         Pad_29[0x7];
	struct FVector                                ProjectionExtent;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortQueryContext_BotPOIVolume">();
	}
	static class UFortQueryContext_BotPOIVolume* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortQueryContext_BotPOIVolume>();
	}
};
static_assert(alignof(UFortQueryContext_BotPOIVolume) == 0x000008, "Wrong alignment on UFortQueryContext_BotPOIVolume");
static_assert(sizeof(UFortQueryContext_BotPOIVolume) == 0x000048, "Wrong size on UFortQueryContext_BotPOIVolume");
static_assert(offsetof(UFortQueryContext_BotPOIVolume, bSetProjectedToNavmeshLocationAsContext) == 0x000028, "Member 'UFortQueryContext_BotPOIVolume::bSetProjectedToNavmeshLocationAsContext' has a wrong offset!");
static_assert(offsetof(UFortQueryContext_BotPOIVolume, ProjectionExtent) == 0x000030, "Member 'UFortQueryContext_BotPOIVolume::ProjectionExtent' has a wrong offset!");

class UFortAthenaAttachToActorStateTreeTask final : public UStateTreeTaskBlueprintBase
{
public:
	class AActor*                                 Actor;
	class AActor*                                 TargetActor;
	EFortAthenaStateTreeTaskFeatureExecutionMode  AttachExecutionMode;
	bool                                          bHandleAthenaMovComponent;
	bool                                          bSetPhysicsToQueryOnlyWhileAttached;
	bool                                          bTryToAttachToSkeletalMeshOnTargetActor;
	bool                                          bChangeBaseToSkeletalMeshOnTargetActor;
	EAttachmentRule                               AttachmentLocationRule;
	EAttachmentRule                               AttachmentRotationRule;
	EAttachmentRule                               AttachmentScaleRule;
	bool                                          bWeldSimulatedBodiesOnAttach;
	class FName                                   AttachmentSocketName;
	EFortAthenaStateTreeTaskFeatureExecutionMode  DetachExecutionMode;
	bool                                          bForceChangeBaseOnDetach;
	EDetachmentRule                               DetachmentLocationRule;
	EDetachmentRule                               DetachmentRotationRule;
	EDetachmentRule                               DetachmentScaleRule;
	bool                                          bCallModifyOnDetach;
	bool                                          bHandleLaunchCharacter;
	bool                                          bHasHandledLaunchCharacter;
	uint8                                         Pad_73[0x5];
	class AFortPawn*                              FortPawnActor;
	uint8                                         Pad_80[0x10];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortAthenaAttachToActorStateTreeTask">();
	}
	static class UFortAthenaAttachToActorStateTreeTask* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortAthenaAttachToActorStateTreeTask>();
	}
};
static_assert(alignof(UFortAthenaAttachToActorStateTreeTask) == 0x000008, "Wrong alignment on UFortAthenaAttachToActorStateTreeTask");
static_assert(sizeof(UFortAthenaAttachToActorStateTreeTask) == 0x000090, "Wrong size on UFortAthenaAttachToActorStateTreeTask");
static_assert(offsetof(UFortAthenaAttachToActorStateTreeTask, Actor) == 0x000048, "Member 'UFortAthenaAttachToActorStateTreeTask::Actor' has a wrong offset!");
static_assert(offsetof(UFortAthenaAttachToActorStateTreeTask, TargetActor) == 0x000050, "Member 'UFortAthenaAttachToActorStateTreeTask::TargetActor' has a wrong offset!");
static_assert(offsetof(UFortAthenaAttachToActorStateTreeTask, AttachExecutionMode) == 0x000058, "Member 'UFortAthenaAttachToActorStateTreeTask::AttachExecutionMode' has a wrong offset!");
static_assert(offsetof(UFortAthenaAttachToActorStateTreeTask, bHandleAthenaMovComponent) == 0x00005C, "Member 'UFortAthenaAttachToActorStateTreeTask::bHandleAthenaMovComponent' has a wrong offset!");
static_assert(offsetof(UFortAthenaAttachToActorStateTreeTask, bSetPhysicsToQueryOnlyWhileAttached) == 0x00005D, "Member 'UFortAthenaAttachToActorStateTreeTask::bSetPhysicsToQueryOnlyWhileAttached' has a wrong offset!");
static_assert(offsetof(UFortAthenaAttachToActorStateTreeTask, bTryToAttachToSkeletalMeshOnTargetActor) == 0x00005E, "Member 'UFortAthenaAttachToActorStateTreeTask::bTryToAttachToSkeletalMeshOnTargetActor' has a wrong offset!");
static_assert(offsetof(UFortAthenaAttachToActorStateTreeTask, bChangeBaseToSkeletalMeshOnTargetActor) == 0x00005F, "Member 'UFortAthenaAttachToActorStateTreeTask::bChangeBaseToSkeletalMeshOnTargetActor' has a wrong offset!");
static_assert(offsetof(UFortAthenaAttachToActorStateTreeTask, AttachmentLocationRule) == 0x000060, "Member 'UFortAthenaAttachToActorStateTreeTask::AttachmentLocationRule' has a wrong offset!");
static_assert(offsetof(UFortAthenaAttachToActorStateTreeTask, AttachmentRotationRule) == 0x000061, "Member 'UFortAthenaAttachToActorStateTreeTask::AttachmentRotationRule' has a wrong offset!");
static_assert(offsetof(UFortAthenaAttachToActorStateTreeTask, AttachmentScaleRule) == 0x000062, "Member 'UFortAthenaAttachToActorStateTreeTask::AttachmentScaleRule' has a wrong offset!");
static_assert(offsetof(UFortAthenaAttachToActorStateTreeTask, bWeldSimulatedBodiesOnAttach) == 0x000063, "Member 'UFortAthenaAttachToActorStateTreeTask::bWeldSimulatedBodiesOnAttach' has a wrong offset!");
static_assert(offsetof(UFortAthenaAttachToActorStateTreeTask, AttachmentSocketName) == 0x000064, "Member 'UFortAthenaAttachToActorStateTreeTask::AttachmentSocketName' has a wrong offset!");
static_assert(offsetof(UFortAthenaAttachToActorStateTreeTask, DetachExecutionMode) == 0x000068, "Member 'UFortAthenaAttachToActorStateTreeTask::DetachExecutionMode' has a wrong offset!");
static_assert(offsetof(UFortAthenaAttachToActorStateTreeTask, bForceChangeBaseOnDetach) == 0x00006C, "Member 'UFortAthenaAttachToActorStateTreeTask::bForceChangeBaseOnDetach' has a wrong offset!");
static_assert(offsetof(UFortAthenaAttachToActorStateTreeTask, DetachmentLocationRule) == 0x00006D, "Member 'UFortAthenaAttachToActorStateTreeTask::DetachmentLocationRule' has a wrong offset!");
static_assert(offsetof(UFortAthenaAttachToActorStateTreeTask, DetachmentRotationRule) == 0x00006E, "Member 'UFortAthenaAttachToActorStateTreeTask::DetachmentRotationRule' has a wrong offset!");
static_assert(offsetof(UFortAthenaAttachToActorStateTreeTask, DetachmentScaleRule) == 0x00006F, "Member 'UFortAthenaAttachToActorStateTreeTask::DetachmentScaleRule' has a wrong offset!");
static_assert(offsetof(UFortAthenaAttachToActorStateTreeTask, bCallModifyOnDetach) == 0x000070, "Member 'UFortAthenaAttachToActorStateTreeTask::bCallModifyOnDetach' has a wrong offset!");
static_assert(offsetof(UFortAthenaAttachToActorStateTreeTask, bHandleLaunchCharacter) == 0x000071, "Member 'UFortAthenaAttachToActorStateTreeTask::bHandleLaunchCharacter' has a wrong offset!");
static_assert(offsetof(UFortAthenaAttachToActorStateTreeTask, bHasHandledLaunchCharacter) == 0x000072, "Member 'UFortAthenaAttachToActorStateTreeTask::bHasHandledLaunchCharacter' has a wrong offset!");
static_assert(offsetof(UFortAthenaAttachToActorStateTreeTask, FortPawnActor) == 0x000078, "Member 'UFortAthenaAttachToActorStateTreeTask::FortPawnActor' has a wrong offset!");

class UFortAthenaPlayInteractionStateTreeTask final : public UStateTreeTaskBlueprintBase
{
public:
	class AActor*                                 InteractorActor;
	class AActor*                                 InteractableActor;
	class UAnimMontage*                           InteractorMontage;
	class UAnimMontage*                           InteractableMontage;
	bool                                          bWaitForNotifyEventToEnd;
	uint8                                         Pad_69[0x3];
	class FName                                   NotifyEventNameToEnd;
	bool                                          bAddMotionWarpingTargets;
	bool                                          bDisableCollisionBetweenActors;
	bool                                          bSetMovementModeToFlying;
	uint8                                         Pad_73[0x1];
	int32                                         LoopsToRun;
	bool                                          bLoopForever;
	uint8                                         Pad_79[0x3];
	float                                         DelayBetweenLoops;
	float                                         RandomDeviationBetweenLoops;
	bool                                          bStopInteractorAnimMontageOnExit;
	bool                                          bStopInteractableAnimMontageOnExit;
	uint8                                         Pad_86[0x42];

public:
	void OnMontageEnded(const class UAnimMontage* EndedMontage, const bool bInterrupted);
	void OnNotifyBeginReceived(class FName NotifyName, const struct FBranchingPointNotifyPayload& BranchingPointNotifyPayload);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortAthenaPlayInteractionStateTreeTask">();
	}
	static class UFortAthenaPlayInteractionStateTreeTask* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortAthenaPlayInteractionStateTreeTask>();
	}
};
static_assert(alignof(UFortAthenaPlayInteractionStateTreeTask) == 0x000008, "Wrong alignment on UFortAthenaPlayInteractionStateTreeTask");
static_assert(sizeof(UFortAthenaPlayInteractionStateTreeTask) == 0x0000C8, "Wrong size on UFortAthenaPlayInteractionStateTreeTask");
static_assert(offsetof(UFortAthenaPlayInteractionStateTreeTask, InteractorActor) == 0x000048, "Member 'UFortAthenaPlayInteractionStateTreeTask::InteractorActor' has a wrong offset!");
static_assert(offsetof(UFortAthenaPlayInteractionStateTreeTask, InteractableActor) == 0x000050, "Member 'UFortAthenaPlayInteractionStateTreeTask::InteractableActor' has a wrong offset!");
static_assert(offsetof(UFortAthenaPlayInteractionStateTreeTask, InteractorMontage) == 0x000058, "Member 'UFortAthenaPlayInteractionStateTreeTask::InteractorMontage' has a wrong offset!");
static_assert(offsetof(UFortAthenaPlayInteractionStateTreeTask, InteractableMontage) == 0x000060, "Member 'UFortAthenaPlayInteractionStateTreeTask::InteractableMontage' has a wrong offset!");
static_assert(offsetof(UFortAthenaPlayInteractionStateTreeTask, bWaitForNotifyEventToEnd) == 0x000068, "Member 'UFortAthenaPlayInteractionStateTreeTask::bWaitForNotifyEventToEnd' has a wrong offset!");
static_assert(offsetof(UFortAthenaPlayInteractionStateTreeTask, NotifyEventNameToEnd) == 0x00006C, "Member 'UFortAthenaPlayInteractionStateTreeTask::NotifyEventNameToEnd' has a wrong offset!");
static_assert(offsetof(UFortAthenaPlayInteractionStateTreeTask, bAddMotionWarpingTargets) == 0x000070, "Member 'UFortAthenaPlayInteractionStateTreeTask::bAddMotionWarpingTargets' has a wrong offset!");
static_assert(offsetof(UFortAthenaPlayInteractionStateTreeTask, bDisableCollisionBetweenActors) == 0x000071, "Member 'UFortAthenaPlayInteractionStateTreeTask::bDisableCollisionBetweenActors' has a wrong offset!");
static_assert(offsetof(UFortAthenaPlayInteractionStateTreeTask, bSetMovementModeToFlying) == 0x000072, "Member 'UFortAthenaPlayInteractionStateTreeTask::bSetMovementModeToFlying' has a wrong offset!");
static_assert(offsetof(UFortAthenaPlayInteractionStateTreeTask, LoopsToRun) == 0x000074, "Member 'UFortAthenaPlayInteractionStateTreeTask::LoopsToRun' has a wrong offset!");
static_assert(offsetof(UFortAthenaPlayInteractionStateTreeTask, bLoopForever) == 0x000078, "Member 'UFortAthenaPlayInteractionStateTreeTask::bLoopForever' has a wrong offset!");
static_assert(offsetof(UFortAthenaPlayInteractionStateTreeTask, DelayBetweenLoops) == 0x00007C, "Member 'UFortAthenaPlayInteractionStateTreeTask::DelayBetweenLoops' has a wrong offset!");
static_assert(offsetof(UFortAthenaPlayInteractionStateTreeTask, RandomDeviationBetweenLoops) == 0x000080, "Member 'UFortAthenaPlayInteractionStateTreeTask::RandomDeviationBetweenLoops' has a wrong offset!");
static_assert(offsetof(UFortAthenaPlayInteractionStateTreeTask, bStopInteractorAnimMontageOnExit) == 0x000084, "Member 'UFortAthenaPlayInteractionStateTreeTask::bStopInteractorAnimMontageOnExit' has a wrong offset!");
static_assert(offsetof(UFortAthenaPlayInteractionStateTreeTask, bStopInteractableAnimMontageOnExit) == 0x000085, "Member 'UFortAthenaPlayInteractionStateTreeTask::bStopInteractableAnimMontageOnExit' has a wrong offset!");

}
