#pragma once

#include "Basic.hpp"

#include "NavigationSystem_classes.hpp"
#include "AIModule_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "CoreUObject_classes.hpp"
#include "GameplayTags_structs.hpp"
#include "Engine_structs.hpp"
#include "Engine_classes.hpp"
#include "GameplayTasks_classes.hpp"

namespace SDK
{

class UBTNode : public UObject
{
public:
	uint8                                         Pad_28[0x8];
	class FString                                 NodeName;
	class UBehaviorTree*                          TreeAsset;
	class UBTCompositeNode*                       ParentNode;
	uint8                                         Pad_50[0x8];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"BTNode">();
	}
	static class UBTNode* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBTNode>();
	}
};
static_assert(alignof(UBTNode) == 0x000008, "Wrong alignment on UBTNode");
static_assert(sizeof(UBTNode) == 0x000058, "Wrong size on UBTNode");
static_assert(offsetof(UBTNode, NodeName) == 0x000030, "Member 'UBTNode::NodeName' has a wrong offset!");
static_assert(offsetof(UBTNode, TreeAsset) == 0x000040, "Member 'UBTNode::TreeAsset' has a wrong offset!");
static_assert(offsetof(UBTNode, ParentNode) == 0x000048, "Member 'UBTNode::ParentNode' has a wrong offset!");

class UBTCompositeNode : public UBTNode
{
public:
	TArray<struct FBTCompositeChild>              Children;
	TArray<class UBTService*>                     Services;
	uint8                                         Pad_78[0x10];
	uint8                                         bApplyDecoratorScope : 1;
	uint8                                         Pad_89[0x7];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"BTCompositeNode">();
	}
	static class UBTCompositeNode* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBTCompositeNode>();
	}
};
static_assert(alignof(UBTCompositeNode) == 0x000008, "Wrong alignment on UBTCompositeNode");
static_assert(sizeof(UBTCompositeNode) == 0x000090, "Wrong size on UBTCompositeNode");
static_assert(offsetof(UBTCompositeNode, Children) == 0x000058, "Member 'UBTCompositeNode::Children' has a wrong offset!");
static_assert(offsetof(UBTCompositeNode, Services) == 0x000068, "Member 'UBTCompositeNode::Services' has a wrong offset!");

class UBTComposite_Sequence final : public UBTCompositeNode
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"BTComposite_Sequence">();
	}
	static class UBTComposite_Sequence* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBTComposite_Sequence>();
	}
};
static_assert(alignof(UBTComposite_Sequence) == 0x000008, "Wrong alignment on UBTComposite_Sequence");
static_assert(sizeof(UBTComposite_Sequence) == 0x000090, "Wrong size on UBTComposite_Sequence");

class UEnvQueryNode : public UObject
{
public:
	int32                                         VerNum;
	uint8                                         Pad_2C[0x4];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"EnvQueryNode">();
	}
	static class UEnvQueryNode* GetDefaultObj()
	{
		return GetDefaultObjImpl<UEnvQueryNode>();
	}
};
static_assert(alignof(UEnvQueryNode) == 0x000008, "Wrong alignment on UEnvQueryNode");
static_assert(sizeof(UEnvQueryNode) == 0x000030, "Wrong size on UEnvQueryNode");
static_assert(offsetof(UEnvQueryNode, VerNum) == 0x000028, "Member 'UEnvQueryNode::VerNum' has a wrong offset!");

class UEnvQueryGenerator : public UEnvQueryNode
{
public:
	class FString                                 OptionName;
	TSubclassOf<class UEnvQueryItemType>          ItemType;
	uint8                                         bAutoSortTests : 1;
	uint8                                         Pad_49[0x7];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"EnvQueryGenerator">();
	}
	static class UEnvQueryGenerator* GetDefaultObj()
	{
		return GetDefaultObjImpl<UEnvQueryGenerator>();
	}
};
static_assert(alignof(UEnvQueryGenerator) == 0x000008, "Wrong alignment on UEnvQueryGenerator");
static_assert(sizeof(UEnvQueryGenerator) == 0x000050, "Wrong size on UEnvQueryGenerator");
static_assert(offsetof(UEnvQueryGenerator, OptionName) == 0x000030, "Member 'UEnvQueryGenerator::OptionName' has a wrong offset!");
static_assert(offsetof(UEnvQueryGenerator, ItemType) == 0x000040, "Member 'UEnvQueryGenerator::ItemType' has a wrong offset!");

class UEnvQueryGenerator_ProjectedPoints : public UEnvQueryGenerator
{
public:
	struct FEnvTraceData                          ProjectionData;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"EnvQueryGenerator_ProjectedPoints">();
	}
	static class UEnvQueryGenerator_ProjectedPoints* GetDefaultObj()
	{
		return GetDefaultObjImpl<UEnvQueryGenerator_ProjectedPoints>();
	}
};
static_assert(alignof(UEnvQueryGenerator_ProjectedPoints) == 0x000008, "Wrong alignment on UEnvQueryGenerator_ProjectedPoints");
static_assert(sizeof(UEnvQueryGenerator_ProjectedPoints) == 0x000088, "Wrong size on UEnvQueryGenerator_ProjectedPoints");
static_assert(offsetof(UEnvQueryGenerator_ProjectedPoints, ProjectionData) == 0x000050, "Member 'UEnvQueryGenerator_ProjectedPoints::ProjectionData' has a wrong offset!");

class UAIAsyncTaskBlueprintProxy final : public UObject
{
public:
	TMulticastInlineDelegate<void(EPathFollowingResult MovementResult)> OnSuccess;
	TMulticastInlineDelegate<void(EPathFollowingResult MovementResult)> OnFail;
	uint8                                         Pad_48[0x20];

public:
	void OnMoveCompleted(const struct FAIRequestID& RequestID, EPathFollowingResult MovementResult);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"AIAsyncTaskBlueprintProxy">();
	}
	static class UAIAsyncTaskBlueprintProxy* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAIAsyncTaskBlueprintProxy>();
	}
};
static_assert(alignof(UAIAsyncTaskBlueprintProxy) == 0x000008, "Wrong alignment on UAIAsyncTaskBlueprintProxy");
static_assert(sizeof(UAIAsyncTaskBlueprintProxy) == 0x000068, "Wrong size on UAIAsyncTaskBlueprintProxy");
static_assert(offsetof(UAIAsyncTaskBlueprintProxy, OnSuccess) == 0x000028, "Member 'UAIAsyncTaskBlueprintProxy::OnSuccess' has a wrong offset!");
static_assert(offsetof(UAIAsyncTaskBlueprintProxy, OnFail) == 0x000038, "Member 'UAIAsyncTaskBlueprintProxy::OnFail' has a wrong offset!");

class UAISenseConfig : public UObject
{
public:
	struct FColor                                 DebugColor;
	float                                         MaxAge;
	uint8                                         bStartsEnabled : 1;
	uint8                                         Pad_31[0x17];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"AISenseConfig">();
	}
	static class UAISenseConfig* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAISenseConfig>();
	}
};
static_assert(alignof(UAISenseConfig) == 0x000008, "Wrong alignment on UAISenseConfig");
static_assert(sizeof(UAISenseConfig) == 0x000048, "Wrong size on UAISenseConfig");
static_assert(offsetof(UAISenseConfig, DebugColor) == 0x000028, "Member 'UAISenseConfig::DebugColor' has a wrong offset!");
static_assert(offsetof(UAISenseConfig, MaxAge) == 0x00002C, "Member 'UAISenseConfig::MaxAge' has a wrong offset!");

class UAISenseConfig_Team final : public UAISenseConfig
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"AISenseConfig_Team">();
	}
	static class UAISenseConfig_Team* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAISenseConfig_Team>();
	}
};
static_assert(alignof(UAISenseConfig_Team) == 0x000008, "Wrong alignment on UAISenseConfig_Team");
static_assert(sizeof(UAISenseConfig_Team) == 0x000048, "Wrong size on UAISenseConfig_Team");

class IAIResourceInterface final : public IInterface
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"AIResourceInterface">();
	}
	static class IAIResourceInterface* GetDefaultObj()
	{
		return GetDefaultObjImpl<IAIResourceInterface>();
	}
};
static_assert(alignof(IAIResourceInterface) == 0x000008, "Wrong alignment on IAIResourceInterface");
static_assert(sizeof(IAIResourceInterface) == 0x000028, "Wrong size on IAIResourceInterface");

class UEnvQueryTest : public UEnvQueryNode
{
public:
	int32                                         TestOrder;
	EEnvTestPurpose                               TestPurpose;
	uint8                                         Pad_35[0x3];
	class FString                                 TestComment;
	EEnvTestFilterOperator                        MultipleContextFilterOp;
	EEnvTestScoreOperator                         MultipleContextScoreOp;
	EEnvTestFilterType                            FilterType;
	uint8                                         Pad_4B[0x5];
	struct FAIDataProviderBoolValue               BoolValue;
	struct FAIDataProviderFloatValue              FloatValueMin;
	struct FAIDataProviderFloatValue              FloatValueMax;
	uint8                                         Pad_F8[0x1];
	EEnvTestScoreEquation                         ScoringEquation;
	EEnvQueryTestClamping                         ClampMinType;
	EEnvQueryTestClamping                         ClampMaxType;
	EEQSNormalizationType                         NormalizationType;
	uint8                                         Pad_FD[0x3];
	struct FAIDataProviderFloatValue              ScoreClampMin;
	struct FAIDataProviderFloatValue              ScoreClampMax;
	struct FAIDataProviderFloatValue              ScoringFactor;
	struct FAIDataProviderFloatValue              ReferenceValue;
	bool                                          bDefineReferenceValue;
	uint8                                         Pad_1E1[0xF];
	uint8                                         bWorkOnFloatValues : 1;
	uint8                                         Pad_1F1[0x7];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"EnvQueryTest">();
	}
	static class UEnvQueryTest* GetDefaultObj()
	{
		return GetDefaultObjImpl<UEnvQueryTest>();
	}
};
static_assert(alignof(UEnvQueryTest) == 0x000008, "Wrong alignment on UEnvQueryTest");
static_assert(sizeof(UEnvQueryTest) == 0x0001F8, "Wrong size on UEnvQueryTest");
static_assert(offsetof(UEnvQueryTest, TestOrder) == 0x000030, "Member 'UEnvQueryTest::TestOrder' has a wrong offset!");
static_assert(offsetof(UEnvQueryTest, TestPurpose) == 0x000034, "Member 'UEnvQueryTest::TestPurpose' has a wrong offset!");
static_assert(offsetof(UEnvQueryTest, TestComment) == 0x000038, "Member 'UEnvQueryTest::TestComment' has a wrong offset!");
static_assert(offsetof(UEnvQueryTest, MultipleContextFilterOp) == 0x000048, "Member 'UEnvQueryTest::MultipleContextFilterOp' has a wrong offset!");
static_assert(offsetof(UEnvQueryTest, MultipleContextScoreOp) == 0x000049, "Member 'UEnvQueryTest::MultipleContextScoreOp' has a wrong offset!");
static_assert(offsetof(UEnvQueryTest, FilterType) == 0x00004A, "Member 'UEnvQueryTest::FilterType' has a wrong offset!");
static_assert(offsetof(UEnvQueryTest, BoolValue) == 0x000050, "Member 'UEnvQueryTest::BoolValue' has a wrong offset!");
static_assert(offsetof(UEnvQueryTest, FloatValueMin) == 0x000088, "Member 'UEnvQueryTest::FloatValueMin' has a wrong offset!");
static_assert(offsetof(UEnvQueryTest, FloatValueMax) == 0x0000C0, "Member 'UEnvQueryTest::FloatValueMax' has a wrong offset!");
static_assert(offsetof(UEnvQueryTest, ScoringEquation) == 0x0000F9, "Member 'UEnvQueryTest::ScoringEquation' has a wrong offset!");
static_assert(offsetof(UEnvQueryTest, ClampMinType) == 0x0000FA, "Member 'UEnvQueryTest::ClampMinType' has a wrong offset!");
static_assert(offsetof(UEnvQueryTest, ClampMaxType) == 0x0000FB, "Member 'UEnvQueryTest::ClampMaxType' has a wrong offset!");
static_assert(offsetof(UEnvQueryTest, NormalizationType) == 0x0000FC, "Member 'UEnvQueryTest::NormalizationType' has a wrong offset!");
static_assert(offsetof(UEnvQueryTest, ScoreClampMin) == 0x000100, "Member 'UEnvQueryTest::ScoreClampMin' has a wrong offset!");
static_assert(offsetof(UEnvQueryTest, ScoreClampMax) == 0x000138, "Member 'UEnvQueryTest::ScoreClampMax' has a wrong offset!");
static_assert(offsetof(UEnvQueryTest, ScoringFactor) == 0x000170, "Member 'UEnvQueryTest::ScoringFactor' has a wrong offset!");
static_assert(offsetof(UEnvQueryTest, ReferenceValue) == 0x0001A8, "Member 'UEnvQueryTest::ReferenceValue' has a wrong offset!");
static_assert(offsetof(UEnvQueryTest, bDefineReferenceValue) == 0x0001E0, "Member 'UEnvQueryTest::bDefineReferenceValue' has a wrong offset!");

class UAISenseBlueprintListener final : public UUserDefinedStruct
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"AISenseBlueprintListener">();
	}
	static class UAISenseBlueprintListener* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAISenseBlueprintListener>();
	}
};
static_assert(alignof(UAISenseBlueprintListener) == 0x000008, "Wrong alignment on UAISenseBlueprintListener");
static_assert(sizeof(UAISenseBlueprintListener) == 0x000108, "Wrong size on UAISenseBlueprintListener");

class UAISenseConfig_Blueprint final : public UAISenseConfig
{
public:
	TSubclassOf<class UAISense_Blueprint>         Implementation;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"AISenseConfig_Blueprint">();
	}
	static class UAISenseConfig_Blueprint* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAISenseConfig_Blueprint>();
	}
};
static_assert(alignof(UAISenseConfig_Blueprint) == 0x000008, "Wrong alignment on UAISenseConfig_Blueprint");
static_assert(sizeof(UAISenseConfig_Blueprint) == 0x000050, "Wrong size on UAISenseConfig_Blueprint");
static_assert(offsetof(UAISenseConfig_Blueprint, Implementation) == 0x000048, "Member 'UAISenseConfig_Blueprint::Implementation' has a wrong offset!");

class UAISenseConfig_Hearing final : public UAISenseConfig
{
public:
	TSubclassOf<class UAISense_Hearing>           Implementation;
	float                                         HearingRange;
	float                                         LoSHearingRange;
	uint8                                         bUseLoSHearing : 1;
	uint8                                         Pad_59[0x3];
	struct FAISenseAffiliationFilter              DetectionByAffiliation;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"AISenseConfig_Hearing">();
	}
	static class UAISenseConfig_Hearing* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAISenseConfig_Hearing>();
	}
};
static_assert(alignof(UAISenseConfig_Hearing) == 0x000008, "Wrong alignment on UAISenseConfig_Hearing");
static_assert(sizeof(UAISenseConfig_Hearing) == 0x000060, "Wrong size on UAISenseConfig_Hearing");
static_assert(offsetof(UAISenseConfig_Hearing, Implementation) == 0x000048, "Member 'UAISenseConfig_Hearing::Implementation' has a wrong offset!");
static_assert(offsetof(UAISenseConfig_Hearing, HearingRange) == 0x000050, "Member 'UAISenseConfig_Hearing::HearingRange' has a wrong offset!");
static_assert(offsetof(UAISenseConfig_Hearing, LoSHearingRange) == 0x000054, "Member 'UAISenseConfig_Hearing::LoSHearingRange' has a wrong offset!");
static_assert(offsetof(UAISenseConfig_Hearing, DetectionByAffiliation) == 0x00005C, "Member 'UAISenseConfig_Hearing::DetectionByAffiliation' has a wrong offset!");

class UAISenseConfig_Prediction final : public UAISenseConfig
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"AISenseConfig_Prediction">();
	}
	static class UAISenseConfig_Prediction* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAISenseConfig_Prediction>();
	}
};
static_assert(alignof(UAISenseConfig_Prediction) == 0x000008, "Wrong alignment on UAISenseConfig_Prediction");
static_assert(sizeof(UAISenseConfig_Prediction) == 0x000048, "Wrong size on UAISenseConfig_Prediction");

class UAISenseConfig_Sight final : public UAISenseConfig
{
public:
	TSubclassOf<class UAISense_Sight>             Implementation;
	float                                         SightRadius;
	float                                         LoseSightRadius;
	float                                         PeripheralVisionAngleDegrees;
	struct FAISenseAffiliationFilter              DetectionByAffiliation;
	float                                         AutoSuccessRangeFromLastSeenLocation;
	float                                         PointOfViewBackwardOffset;
	float                                         NearClippingRadius;
	uint8                                         Pad_6C[0x4];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"AISenseConfig_Sight">();
	}
	static class UAISenseConfig_Sight* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAISenseConfig_Sight>();
	}
};
static_assert(alignof(UAISenseConfig_Sight) == 0x000008, "Wrong alignment on UAISenseConfig_Sight");
static_assert(sizeof(UAISenseConfig_Sight) == 0x000070, "Wrong size on UAISenseConfig_Sight");
static_assert(offsetof(UAISenseConfig_Sight, Implementation) == 0x000048, "Member 'UAISenseConfig_Sight::Implementation' has a wrong offset!");
static_assert(offsetof(UAISenseConfig_Sight, SightRadius) == 0x000050, "Member 'UAISenseConfig_Sight::SightRadius' has a wrong offset!");
static_assert(offsetof(UAISenseConfig_Sight, LoseSightRadius) == 0x000054, "Member 'UAISenseConfig_Sight::LoseSightRadius' has a wrong offset!");
static_assert(offsetof(UAISenseConfig_Sight, PeripheralVisionAngleDegrees) == 0x000058, "Member 'UAISenseConfig_Sight::PeripheralVisionAngleDegrees' has a wrong offset!");
static_assert(offsetof(UAISenseConfig_Sight, DetectionByAffiliation) == 0x00005C, "Member 'UAISenseConfig_Sight::DetectionByAffiliation' has a wrong offset!");
static_assert(offsetof(UAISenseConfig_Sight, AutoSuccessRangeFromLastSeenLocation) == 0x000060, "Member 'UAISenseConfig_Sight::AutoSuccessRangeFromLastSeenLocation' has a wrong offset!");
static_assert(offsetof(UAISenseConfig_Sight, PointOfViewBackwardOffset) == 0x000064, "Member 'UAISenseConfig_Sight::PointOfViewBackwardOffset' has a wrong offset!");
static_assert(offsetof(UAISenseConfig_Sight, NearClippingRadius) == 0x000068, "Member 'UAISenseConfig_Sight::NearClippingRadius' has a wrong offset!");

class UAISenseConfig_Touch final : public UAISenseConfig
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"AISenseConfig_Touch">();
	}
	static class UAISenseConfig_Touch* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAISenseConfig_Touch>();
	}
};
static_assert(alignof(UAISenseConfig_Touch) == 0x000008, "Wrong alignment on UAISenseConfig_Touch");
static_assert(sizeof(UAISenseConfig_Touch) == 0x000048, "Wrong size on UAISenseConfig_Touch");

class UAISenseEvent : public UObject
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"AISenseEvent">();
	}
	static class UAISenseEvent* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAISenseEvent>();
	}
};
static_assert(alignof(UAISenseEvent) == 0x000008, "Wrong alignment on UAISenseEvent");
static_assert(sizeof(UAISenseEvent) == 0x000028, "Wrong size on UAISenseEvent");

class UAISenseEvent_Damage final : public UAISenseEvent
{
public:
	struct FAIDamageEvent                         Event;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"AISenseEvent_Damage">();
	}
	static class UAISenseEvent_Damage* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAISenseEvent_Damage>();
	}
};
static_assert(alignof(UAISenseEvent_Damage) == 0x000008, "Wrong alignment on UAISenseEvent_Damage");
static_assert(sizeof(UAISenseEvent_Damage) == 0x000078, "Wrong size on UAISenseEvent_Damage");
static_assert(offsetof(UAISenseEvent_Damage, Event) == 0x000028, "Member 'UAISenseEvent_Damage::Event' has a wrong offset!");

class UAISenseEvent_Hearing final : public UAISenseEvent
{
public:
	struct FAINoiseEvent                          Event;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"AISenseEvent_Hearing">();
	}
	static class UAISenseEvent_Hearing* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAISenseEvent_Hearing>();
	}
};
static_assert(alignof(UAISenseEvent_Hearing) == 0x000008, "Wrong alignment on UAISenseEvent_Hearing");
static_assert(sizeof(UAISenseEvent_Hearing) == 0x000060, "Wrong size on UAISenseEvent_Hearing");
static_assert(offsetof(UAISenseEvent_Hearing, Event) == 0x000028, "Member 'UAISenseEvent_Hearing::Event' has a wrong offset!");

class ICrowdAgentInterface final : public IInterface
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"CrowdAgentInterface">();
	}
	static class ICrowdAgentInterface* GetDefaultObj()
	{
		return GetDefaultObjImpl<ICrowdAgentInterface>();
	}
};
static_assert(alignof(ICrowdAgentInterface) == 0x000008, "Wrong alignment on ICrowdAgentInterface");
static_assert(sizeof(ICrowdAgentInterface) == 0x000028, "Wrong size on ICrowdAgentInterface");

class UEnvQueryTypes final : public UObject
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"EnvQueryTypes">();
	}
	static class UEnvQueryTypes* GetDefaultObj()
	{
		return GetDefaultObjImpl<UEnvQueryTypes>();
	}
};
static_assert(alignof(UEnvQueryTypes) == 0x000008, "Wrong alignment on UEnvQueryTypes");
static_assert(sizeof(UEnvQueryTypes) == 0x000028, "Wrong size on UEnvQueryTypes");

class IEQSQueryResultSourceInterface final : public IInterface
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"EQSQueryResultSourceInterface">();
	}
	static class IEQSQueryResultSourceInterface* GetDefaultObj()
	{
		return GetDefaultObjImpl<IEQSQueryResultSourceInterface>();
	}
};
static_assert(alignof(IEQSQueryResultSourceInterface) == 0x000008, "Wrong alignment on IEQSQueryResultSourceInterface");
static_assert(sizeof(IEQSQueryResultSourceInterface) == 0x000028, "Wrong size on IEQSQueryResultSourceInterface");

class IGenericTeamAgentInterface : public IInterface
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"GenericTeamAgentInterface">();
	}
	static class IGenericTeamAgentInterface* GetDefaultObj()
	{
		return GetDefaultObjImpl<IGenericTeamAgentInterface>();
	}
};
static_assert(alignof(IGenericTeamAgentInterface) == 0x000008, "Wrong alignment on IGenericTeamAgentInterface");
static_assert(sizeof(IGenericTeamAgentInterface) == 0x000028, "Wrong size on IGenericTeamAgentInterface");

class UPawnAction : public UObject
{
public:
	class UPawnAction*                            ChildAction;
	class UPawnAction*                            ParentAction;
	class UPawnActionsComponent*                  OwnerComponent;
	class UObject*                                Instigator;
	class UBrainComponent*                        BrainComp;
	uint8                                         Pad_50[0x30];
	uint8                                         bAllowNewSameClassInstance : 1;
	uint8                                         bReplaceActiveSameClassInstance : 1;
	uint8                                         bShouldPauseMovement : 1;
	uint8                                         bAlwaysNotifyOnFinished : 1;
	uint8                                         Pad_81[0xF];

public:
	static class UPawnAction* CreateActionInstance(class UObject* WorldContextObject, TSubclassOf<class UPawnAction> ActionClass);

	void Finish(EPawnActionResult WithResult);
	EAIRequestPriority GetActionPriority();

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PawnAction">();
	}
	static class UPawnAction* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPawnAction>();
	}
};
static_assert(alignof(UPawnAction) == 0x000008, "Wrong alignment on UPawnAction");
static_assert(sizeof(UPawnAction) == 0x000090, "Wrong size on UPawnAction");
static_assert(offsetof(UPawnAction, ChildAction) == 0x000028, "Member 'UPawnAction::ChildAction' has a wrong offset!");
static_assert(offsetof(UPawnAction, ParentAction) == 0x000030, "Member 'UPawnAction::ParentAction' has a wrong offset!");
static_assert(offsetof(UPawnAction, OwnerComponent) == 0x000038, "Member 'UPawnAction::OwnerComponent' has a wrong offset!");
static_assert(offsetof(UPawnAction, Instigator) == 0x000040, "Member 'UPawnAction::Instigator' has a wrong offset!");
static_assert(offsetof(UPawnAction, BrainComp) == 0x000048, "Member 'UPawnAction::BrainComp' has a wrong offset!");

class UPawnActionsComponent final : public UActorComponent
{
public:
	class APawn*                                  ControlledPawn;
	TArray<struct FPawnActionStack>               ActionStacks;
	TArray<struct FPawnActionEvent>               ActionEvents;
	class UPawnAction*                            CurrentAction;
	uint8                                         Pad_D0[0x8];

public:
	static bool K2_PerformAction(class APawn* Pawn, class UPawnAction* Action, EAIRequestPriority Priority);

	EPawnActionAbortState K2_AbortAction(class UPawnAction* ActionToAbort);
	EPawnActionAbortState K2_ForceAbortAction(class UPawnAction* ActionToAbort);
	bool K2_PushAction(class UPawnAction* NewAction, EAIRequestPriority Priority, class UObject* Instigator);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PawnActionsComponent">();
	}
	static class UPawnActionsComponent* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPawnActionsComponent>();
	}
};
static_assert(alignof(UPawnActionsComponent) == 0x000008, "Wrong alignment on UPawnActionsComponent");
static_assert(sizeof(UPawnActionsComponent) == 0x0000D8, "Wrong size on UPawnActionsComponent");
static_assert(offsetof(UPawnActionsComponent, ControlledPawn) == 0x0000A0, "Member 'UPawnActionsComponent::ControlledPawn' has a wrong offset!");
static_assert(offsetof(UPawnActionsComponent, ActionStacks) == 0x0000A8, "Member 'UPawnActionsComponent::ActionStacks' has a wrong offset!");
static_assert(offsetof(UPawnActionsComponent, ActionEvents) == 0x0000B8, "Member 'UPawnActionsComponent::ActionEvents' has a wrong offset!");
static_assert(offsetof(UPawnActionsComponent, CurrentAction) == 0x0000C8, "Member 'UPawnActionsComponent::CurrentAction' has a wrong offset!");

class UPawnAction_BlueprintBase final : public UPawnAction
{
public:
	void ActionFinished(class APawn* ControlledPawn, EPawnActionResult WithResult);
	void ActionPause(class APawn* ControlledPawn);
	void ActionResume(class APawn* ControlledPawn);
	void ActionStart(class APawn* ControlledPawn);
	void ActionTick(class APawn* ControlledPawn, float DeltaSeconds);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PawnAction_BlueprintBase">();
	}
	static class UPawnAction_BlueprintBase* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPawnAction_BlueprintBase>();
	}
};
static_assert(alignof(UPawnAction_BlueprintBase) == 0x000008, "Wrong alignment on UPawnAction_BlueprintBase");
static_assert(sizeof(UPawnAction_BlueprintBase) == 0x000090, "Wrong size on UPawnAction_BlueprintBase");

class UPawnAction_Move final : public UPawnAction
{
public:
	class AActor*                                 GoalActor;
	struct FVector                                GoalLocation;
	float                                         AcceptableRadius;
	uint8                                         Pad_B4[0x4];
	TSubclassOf<class UNavigationQueryFilter>     FilterClass;
	uint8                                         bAllowStrafe : 1;
	uint8                                         bFinishOnOverlap : 1;
	uint8                                         bUsePathfinding : 1;
	uint8                                         bAllowPartialPath : 1;
	uint8                                         bProjectGoalToNavigation : 1;
	uint8                                         bUpdatePathToGoal : 1;
	uint8                                         bAbortSubActionOnPathChange : 1;
	uint8                                         Pad_C1[0x2F];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PawnAction_Move">();
	}
	static class UPawnAction_Move* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPawnAction_Move>();
	}
};
static_assert(alignof(UPawnAction_Move) == 0x000008, "Wrong alignment on UPawnAction_Move");
static_assert(sizeof(UPawnAction_Move) == 0x0000F0, "Wrong size on UPawnAction_Move");
static_assert(offsetof(UPawnAction_Move, GoalActor) == 0x000090, "Member 'UPawnAction_Move::GoalActor' has a wrong offset!");
static_assert(offsetof(UPawnAction_Move, GoalLocation) == 0x000098, "Member 'UPawnAction_Move::GoalLocation' has a wrong offset!");
static_assert(offsetof(UPawnAction_Move, AcceptableRadius) == 0x0000B0, "Member 'UPawnAction_Move::AcceptableRadius' has a wrong offset!");
static_assert(offsetof(UPawnAction_Move, FilterClass) == 0x0000B8, "Member 'UPawnAction_Move::FilterClass' has a wrong offset!");

class UPawnAction_Repeat final : public UPawnAction
{
public:
	class UPawnAction*                            ActionToRepeat;
	class UPawnAction*                            RecentActionCopy;
	EPawnActionFailHandling                       ChildFailureHandlingMode;
	uint8                                         Pad_A1[0xF];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PawnAction_Repeat">();
	}
	static class UPawnAction_Repeat* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPawnAction_Repeat>();
	}
};
static_assert(alignof(UPawnAction_Repeat) == 0x000008, "Wrong alignment on UPawnAction_Repeat");
static_assert(sizeof(UPawnAction_Repeat) == 0x0000B0, "Wrong size on UPawnAction_Repeat");
static_assert(offsetof(UPawnAction_Repeat, ActionToRepeat) == 0x000090, "Member 'UPawnAction_Repeat::ActionToRepeat' has a wrong offset!");
static_assert(offsetof(UPawnAction_Repeat, RecentActionCopy) == 0x000098, "Member 'UPawnAction_Repeat::RecentActionCopy' has a wrong offset!");
static_assert(offsetof(UPawnAction_Repeat, ChildFailureHandlingMode) == 0x0000A0, "Member 'UPawnAction_Repeat::ChildFailureHandlingMode' has a wrong offset!");

class UPawnAction_Sequence final : public UPawnAction
{
public:
	TArray<class UPawnAction*>                    ActionSequence;
	EPawnActionFailHandling                       ChildFailureHandlingMode;
	uint8                                         Pad_A1[0x7];
	class UPawnAction*                            RecentActionCopy;
	uint8                                         Pad_B0[0x8];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PawnAction_Sequence">();
	}
	static class UPawnAction_Sequence* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPawnAction_Sequence>();
	}
};
static_assert(alignof(UPawnAction_Sequence) == 0x000008, "Wrong alignment on UPawnAction_Sequence");
static_assert(sizeof(UPawnAction_Sequence) == 0x0000B8, "Wrong size on UPawnAction_Sequence");
static_assert(offsetof(UPawnAction_Sequence, ActionSequence) == 0x000090, "Member 'UPawnAction_Sequence::ActionSequence' has a wrong offset!");
static_assert(offsetof(UPawnAction_Sequence, ChildFailureHandlingMode) == 0x0000A0, "Member 'UPawnAction_Sequence::ChildFailureHandlingMode' has a wrong offset!");
static_assert(offsetof(UPawnAction_Sequence, RecentActionCopy) == 0x0000A8, "Member 'UPawnAction_Sequence::RecentActionCopy' has a wrong offset!");

class UPawnAction_Wait final : public UPawnAction
{
public:
	float                                         TimeToWait;
	uint8                                         Pad_94[0xC];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PawnAction_Wait">();
	}
	static class UPawnAction_Wait* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPawnAction_Wait>();
	}
};
static_assert(alignof(UPawnAction_Wait) == 0x000008, "Wrong alignment on UPawnAction_Wait");
static_assert(sizeof(UPawnAction_Wait) == 0x0000A0, "Wrong size on UPawnAction_Wait");
static_assert(offsetof(UPawnAction_Wait, TimeToWait) == 0x000090, "Member 'UPawnAction_Wait::TimeToWait' has a wrong offset!");

class AAIController : public AController
{
public:
	uint8                                         Pad_320[0x38];
	uint8                                         bStartAILogicOnPossess : 1;
	uint8                                         bStopAILogicOnUnposses : 1;
	uint8                                         bLOSflag : 1;
	uint8                                         bSkipExtraLOSChecks : 1;
	uint8                                         bAllowStrafe : 1;
	uint8                                         bWantsPlayerState : 1;
	uint8                                         bSetControlRotationFromPawnOrientation : 1;
	uint8                                         Pad_359[0x7];
	class UPathFollowingComponent*                PathFollowingComponent;
	class UBrainComponent*                        BrainComponent;
	class UAIPerceptionComponent*                 PerceptionComponent;
	class UPawnActionsComponent*                  ActionsComp;
	class UBlackboardComponent*                   Blackboard;
	class UGameplayTasksComponent*                CachedGameplayTasksComponent;
	TSubclassOf<class UNavigationQueryFilter>     DefaultNavigationFilterClass;
	TMulticastInlineDelegate<void(const struct FAIRequestID& RequestID, EPathFollowingResult Result)> ReceiveMoveCompleted;
	uint8                                         Pad_3A8[0x8];

public:
	void ClaimTaskResource(TSubclassOf<class UGameplayTaskResource> ResourceClass);
	class UAIPerceptionComponent* GetAIPerceptionComponent();
	void K2_ClearFocus();
	void K2_SetFocalPoint(const struct FVector& FP);
	void K2_SetFocus(class AActor* NewFocus);
	EPathFollowingRequestResult MoveToActor(class AActor* Goal, float AcceptanceRadius, bool bStopOnOverlap, bool bUsePathfinding, bool bCanStrafe, TSubclassOf<class UNavigationQueryFilter> FilterClass, bool bAllowPartialPath);
	EPathFollowingRequestResult MoveToLocation(const struct FVector& Dest, float AcceptanceRadius, bool bStopOnOverlap, bool bUsePathfinding, bool bProjectDestinationToNavigation, bool bCanStrafe, TSubclassOf<class UNavigationQueryFilter> FilterClass, bool bAllowPartialPath);
	void OnGameplayTaskResourcesClaimed(const struct FGameplayResourceSet& NewlyClaimed, const struct FGameplayResourceSet& FreshlyReleased);
	void OnUsingBlackBoard(class UBlackboardComponent* BlackboardComp, class UBlackboardData* BlackboardAsset);
	bool RunBehaviorTree(class UBehaviorTree* BTAsset);
	void SetMoveBlockDetection(bool bEnable);
	void SetPathFollowingComponent(class UPathFollowingComponent* NewPFComponent);
	void UnclaimTaskResource(TSubclassOf<class UGameplayTaskResource> ResourceClass);
	bool UseBlackboard(class UBlackboardData* BlackboardAsset, class UBlackboardComponent** BlackboardComponent);

	struct FVector GetFocalPoint() const;
	struct FVector GetFocalPointOnActor(const class AActor* Actor) const;
	class AActor* GetFocusActor() const;
	struct FVector GetImmediateMoveDestination() const;
	EPathFollowingStatus GetMoveStatus() const;
	class UPathFollowingComponent* GetPathFollowingComponent() const;
	bool HasPartialPath() const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"AIController">();
	}
	static class AAIController* GetDefaultObj()
	{
		return GetDefaultObjImpl<AAIController>();
	}
};
static_assert(alignof(AAIController) == 0x000008, "Wrong alignment on AAIController");
static_assert(sizeof(AAIController) == 0x0003B0, "Wrong size on AAIController");
static_assert(offsetof(AAIController, PathFollowingComponent) == 0x000360, "Member 'AAIController::PathFollowingComponent' has a wrong offset!");
static_assert(offsetof(AAIController, BrainComponent) == 0x000368, "Member 'AAIController::BrainComponent' has a wrong offset!");
static_assert(offsetof(AAIController, PerceptionComponent) == 0x000370, "Member 'AAIController::PerceptionComponent' has a wrong offset!");
static_assert(offsetof(AAIController, ActionsComp) == 0x000378, "Member 'AAIController::ActionsComp' has a wrong offset!");
static_assert(offsetof(AAIController, Blackboard) == 0x000380, "Member 'AAIController::Blackboard' has a wrong offset!");
static_assert(offsetof(AAIController, CachedGameplayTasksComponent) == 0x000388, "Member 'AAIController::CachedGameplayTasksComponent' has a wrong offset!");
static_assert(offsetof(AAIController, DefaultNavigationFilterClass) == 0x000390, "Member 'AAIController::DefaultNavigationFilterClass' has a wrong offset!");
static_assert(offsetof(AAIController, ReceiveMoveCompleted) == 0x000398, "Member 'AAIController::ReceiveMoveCompleted' has a wrong offset!");

class UAIResource_Movement final : public UGameplayTaskResource
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"AIResource_Movement">();
	}
	static class UAIResource_Movement* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAIResource_Movement>();
	}
};
static_assert(alignof(UAIResource_Movement) == 0x000008, "Wrong alignment on UAIResource_Movement");
static_assert(sizeof(UAIResource_Movement) == 0x000038, "Wrong size on UAIResource_Movement");

class UAIResource_Logic final : public UGameplayTaskResource
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"AIResource_Logic">();
	}
	static class UAIResource_Logic* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAIResource_Logic>();
	}
};
static_assert(alignof(UAIResource_Logic) == 0x000008, "Wrong alignment on UAIResource_Logic");
static_assert(sizeof(UAIResource_Logic) == 0x000038, "Wrong size on UAIResource_Logic");

class UAISubsystem : public UObject
{
public:
	uint8                                         Pad_28[0x8];
	class UAISystem*                              AISystem;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"AISubsystem">();
	}
	static class UAISubsystem* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAISubsystem>();
	}
};
static_assert(alignof(UAISubsystem) == 0x000008, "Wrong alignment on UAISubsystem");
static_assert(sizeof(UAISubsystem) == 0x000038, "Wrong size on UAISubsystem");
static_assert(offsetof(UAISubsystem, AISystem) == 0x000030, "Member 'UAISubsystem::AISystem' has a wrong offset!");

class UAISystem : public UAISystemBase
{
public:
	struct FSoftClassPath                         PerceptionSystemClassName;
	struct FSoftClassPath                         HotSpotManagerClassName;
	struct FSoftClassPath                         EnvQueryManagerClassName;
	float                                         AcceptanceRadius;
	float                                         PathfollowingRegularPathPointAcceptanceRadius;
	float                                         PathfollowingNavLinkAcceptanceRadius;
	bool                                          bFinishMoveOnGoalOverlap;
	bool                                          bAcceptPartialPaths;
	bool                                          bAllowStrafing;
	bool                                          bEnableBTAITasks;
	bool                                          bAllowControllersAsEQSQuerier;
	bool                                          bEnableDebuggerPlugin;
	bool                                          bForgetStaleActors;
	bool                                          bAddBlackboardSelfKey;
	bool                                          bClearBBEntryOnBTEQSFail;
	ECollisionChannel                             DefaultSightCollisionChannel;
	uint8                                         Pad_B6[0x2];
	class UBehaviorTreeManager*                   BehaviorTreeManager;
	class UEnvQueryManager*                       EnvironmentQueryManager;
	class UAIPerceptionSystem*                    PerceptionSystem;
	TArray<class UAIAsyncTaskBlueprintProxy*>     AllProxyObjects;
	class UAIHotSpotManager*                      HotSpotManager;
	class UNavLocalGridManager*                   NavLocalGrids;
	uint8                                         Pad_F0[0x58];

public:
	void AIIgnorePlayers();
	void AILoggingVerbose();

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"AISystem">();
	}
	static class UAISystem* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAISystem>();
	}
};
static_assert(alignof(UAISystem) == 0x000008, "Wrong alignment on UAISystem");
static_assert(sizeof(UAISystem) == 0x000148, "Wrong size on UAISystem");
static_assert(offsetof(UAISystem, PerceptionSystemClassName) == 0x000058, "Member 'UAISystem::PerceptionSystemClassName' has a wrong offset!");
static_assert(offsetof(UAISystem, HotSpotManagerClassName) == 0x000070, "Member 'UAISystem::HotSpotManagerClassName' has a wrong offset!");
static_assert(offsetof(UAISystem, EnvQueryManagerClassName) == 0x000088, "Member 'UAISystem::EnvQueryManagerClassName' has a wrong offset!");
static_assert(offsetof(UAISystem, AcceptanceRadius) == 0x0000A0, "Member 'UAISystem::AcceptanceRadius' has a wrong offset!");
static_assert(offsetof(UAISystem, PathfollowingRegularPathPointAcceptanceRadius) == 0x0000A4, "Member 'UAISystem::PathfollowingRegularPathPointAcceptanceRadius' has a wrong offset!");
static_assert(offsetof(UAISystem, PathfollowingNavLinkAcceptanceRadius) == 0x0000A8, "Member 'UAISystem::PathfollowingNavLinkAcceptanceRadius' has a wrong offset!");
static_assert(offsetof(UAISystem, bFinishMoveOnGoalOverlap) == 0x0000AC, "Member 'UAISystem::bFinishMoveOnGoalOverlap' has a wrong offset!");
static_assert(offsetof(UAISystem, bAcceptPartialPaths) == 0x0000AD, "Member 'UAISystem::bAcceptPartialPaths' has a wrong offset!");
static_assert(offsetof(UAISystem, bAllowStrafing) == 0x0000AE, "Member 'UAISystem::bAllowStrafing' has a wrong offset!");
static_assert(offsetof(UAISystem, bEnableBTAITasks) == 0x0000AF, "Member 'UAISystem::bEnableBTAITasks' has a wrong offset!");
static_assert(offsetof(UAISystem, bAllowControllersAsEQSQuerier) == 0x0000B0, "Member 'UAISystem::bAllowControllersAsEQSQuerier' has a wrong offset!");
static_assert(offsetof(UAISystem, bEnableDebuggerPlugin) == 0x0000B1, "Member 'UAISystem::bEnableDebuggerPlugin' has a wrong offset!");
static_assert(offsetof(UAISystem, bForgetStaleActors) == 0x0000B2, "Member 'UAISystem::bForgetStaleActors' has a wrong offset!");
static_assert(offsetof(UAISystem, bAddBlackboardSelfKey) == 0x0000B3, "Member 'UAISystem::bAddBlackboardSelfKey' has a wrong offset!");
static_assert(offsetof(UAISystem, bClearBBEntryOnBTEQSFail) == 0x0000B4, "Member 'UAISystem::bClearBBEntryOnBTEQSFail' has a wrong offset!");
static_assert(offsetof(UAISystem, DefaultSightCollisionChannel) == 0x0000B5, "Member 'UAISystem::DefaultSightCollisionChannel' has a wrong offset!");
static_assert(offsetof(UAISystem, BehaviorTreeManager) == 0x0000B8, "Member 'UAISystem::BehaviorTreeManager' has a wrong offset!");
static_assert(offsetof(UAISystem, EnvironmentQueryManager) == 0x0000C0, "Member 'UAISystem::EnvironmentQueryManager' has a wrong offset!");
static_assert(offsetof(UAISystem, PerceptionSystem) == 0x0000C8, "Member 'UAISystem::PerceptionSystem' has a wrong offset!");
static_assert(offsetof(UAISystem, AllProxyObjects) == 0x0000D0, "Member 'UAISystem::AllProxyObjects' has a wrong offset!");
static_assert(offsetof(UAISystem, HotSpotManager) == 0x0000E0, "Member 'UAISystem::HotSpotManager' has a wrong offset!");
static_assert(offsetof(UAISystem, NavLocalGrids) == 0x0000E8, "Member 'UAISystem::NavLocalGrids' has a wrong offset!");

class UBehaviorTree final : public UObject
{
public:
	uint8                                         Pad_28[0x8];
	class UBTCompositeNode*                       RootNode;
	class UBlackboardData*                        BlackboardAsset;
	TArray<class UBTDecorator*>                   RootDecorators;
	TArray<struct FBTDecoratorLogic>              RootDecoratorOps;
	uint8                                         Pad_60[0x8];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"BehaviorTree">();
	}
	static class UBehaviorTree* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBehaviorTree>();
	}
};
static_assert(alignof(UBehaviorTree) == 0x000008, "Wrong alignment on UBehaviorTree");
static_assert(sizeof(UBehaviorTree) == 0x000068, "Wrong size on UBehaviorTree");
static_assert(offsetof(UBehaviorTree, RootNode) == 0x000030, "Member 'UBehaviorTree::RootNode' has a wrong offset!");
static_assert(offsetof(UBehaviorTree, BlackboardAsset) == 0x000038, "Member 'UBehaviorTree::BlackboardAsset' has a wrong offset!");
static_assert(offsetof(UBehaviorTree, RootDecorators) == 0x000040, "Member 'UBehaviorTree::RootDecorators' has a wrong offset!");
static_assert(offsetof(UBehaviorTree, RootDecoratorOps) == 0x000050, "Member 'UBehaviorTree::RootDecoratorOps' has a wrong offset!");

class UBrainComponent : public UActorComponent
{
public:
	uint8                                         Pad_A0[0x8];
	class UBlackboardComponent*                   BlackboardComp;
	class AAIController*                          AIOwner;
	uint8                                         Pad_B8[0x40];

public:
	void RestartLogic();
	void StartLogic();
	void StopLogic(const class FString& Reason);

	bool IsPaused() const;
	bool IsRunning() const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"BrainComponent">();
	}
	static class UBrainComponent* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBrainComponent>();
	}
};
static_assert(alignof(UBrainComponent) == 0x000008, "Wrong alignment on UBrainComponent");
static_assert(sizeof(UBrainComponent) == 0x0000F8, "Wrong size on UBrainComponent");
static_assert(offsetof(UBrainComponent, BlackboardComp) == 0x0000A8, "Member 'UBrainComponent::BlackboardComp' has a wrong offset!");
static_assert(offsetof(UBrainComponent, AIOwner) == 0x0000B0, "Member 'UBrainComponent::AIOwner' has a wrong offset!");

class UBehaviorTreeComponent : public UBrainComponent
{
public:
	uint8                                         Pad_F8[0x20];
	TArray<class UBTNode*>                        NodeInstances;
	uint8                                         Pad_128[0x148];
	class UBehaviorTree*                          DefaultBehaviorTreeAsset;
	uint8                                         Pad_278[0x18];

public:
	void AddCooldownTagDuration(const struct FGameplayTag& CooldownTag, float CooldownDuration, bool bAddToExistingDuration);
	void SetDynamicSubtree(const struct FGameplayTag& InjectTag, class UBehaviorTree* BehaviorAsset);

	float GetTagCooldownEndTime(const struct FGameplayTag& CooldownTag) const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"BehaviorTreeComponent">();
	}
	static class UBehaviorTreeComponent* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBehaviorTreeComponent>();
	}
};
static_assert(alignof(UBehaviorTreeComponent) == 0x000008, "Wrong alignment on UBehaviorTreeComponent");
static_assert(sizeof(UBehaviorTreeComponent) == 0x000290, "Wrong size on UBehaviorTreeComponent");
static_assert(offsetof(UBehaviorTreeComponent, NodeInstances) == 0x000118, "Member 'UBehaviorTreeComponent::NodeInstances' has a wrong offset!");
static_assert(offsetof(UBehaviorTreeComponent, DefaultBehaviorTreeAsset) == 0x000270, "Member 'UBehaviorTreeComponent::DefaultBehaviorTreeAsset' has a wrong offset!");

class UBehaviorTreeManager final : public UObject
{
public:
	int32                                         MaxDebuggerSteps;
	uint8                                         Pad_2C[0x4];
	TArray<struct FBehaviorTreeTemplateInfo>      LoadedTemplates;
	TArray<class UBehaviorTreeComponent*>         ActiveComponents;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"BehaviorTreeManager">();
	}
	static class UBehaviorTreeManager* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBehaviorTreeManager>();
	}
};
static_assert(alignof(UBehaviorTreeManager) == 0x000008, "Wrong alignment on UBehaviorTreeManager");
static_assert(sizeof(UBehaviorTreeManager) == 0x000050, "Wrong size on UBehaviorTreeManager");
static_assert(offsetof(UBehaviorTreeManager, MaxDebuggerSteps) == 0x000028, "Member 'UBehaviorTreeManager::MaxDebuggerSteps' has a wrong offset!");
static_assert(offsetof(UBehaviorTreeManager, LoadedTemplates) == 0x000030, "Member 'UBehaviorTreeManager::LoadedTemplates' has a wrong offset!");
static_assert(offsetof(UBehaviorTreeManager, ActiveComponents) == 0x000040, "Member 'UBehaviorTreeManager::ActiveComponents' has a wrong offset!");

class UBehaviorTreeTypes final : public UObject
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"BehaviorTreeTypes">();
	}
	static class UBehaviorTreeTypes* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBehaviorTreeTypes>();
	}
};
static_assert(alignof(UBehaviorTreeTypes) == 0x000008, "Wrong alignment on UBehaviorTreeTypes");
static_assert(sizeof(UBehaviorTreeTypes) == 0x000028, "Wrong size on UBehaviorTreeTypes");

class IBlackboardAssetProvider final : public IInterface
{
public:
	class UBlackboardData* GetBlackboardAsset() const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"BlackboardAssetProvider">();
	}
	static class IBlackboardAssetProvider* GetDefaultObj()
	{
		return GetDefaultObjImpl<IBlackboardAssetProvider>();
	}
};
static_assert(alignof(IBlackboardAssetProvider) == 0x000008, "Wrong alignment on IBlackboardAssetProvider");
static_assert(sizeof(IBlackboardAssetProvider) == 0x000028, "Wrong size on IBlackboardAssetProvider");

class UBlackboardComponent : public UActorComponent
{
public:
	class UBrainComponent*                        BrainComp;
	class UBlackboardData*                        DefaultBlackboardAsset;
	class UBlackboardData*                        BlackboardAsset;
	uint8                                         Pad_B8[0x20];
	TArray<class UBlackboardKeyType*>             KeyInstances;
	uint8                                         Pad_E8[0xC0];

public:
	void ClearValue(const class FName& KeyName);
	void SetValueAsBool(const class FName& KeyName, bool BoolValue);
	void SetValueAsClass(const class FName& KeyName, class UClass* ClassValue);
	void SetValueAsEnum(const class FName& KeyName, uint8 EnumValue);
	void SetValueAsFloat(const class FName& KeyName, float FloatValue);
	void SetValueAsInt(const class FName& KeyName, int32 IntValue);
	void SetValueAsName(const class FName& KeyName, class FName NameValue);
	void SetValueAsObject(const class FName& KeyName, class UObject* ObjectValue);
	void SetValueAsRotator(const class FName& KeyName, const struct FRotator& VectorValue);
	void SetValueAsString(const class FName& KeyName, const class FString& StringValue);
	void SetValueAsVector(const class FName& KeyName, const struct FVector& VectorValue);

	bool GetLocationFromEntry(const class FName& KeyName, struct FVector* ResultLocation) const;
	bool GetRotationFromEntry(const class FName& KeyName, struct FRotator* ResultRotation) const;
	bool GetValueAsBool(const class FName& KeyName) const;
	class UClass* GetValueAsClass(const class FName& KeyName) const;
	uint8 GetValueAsEnum(const class FName& KeyName) const;
	float GetValueAsFloat(const class FName& KeyName) const;
	int32 GetValueAsInt(const class FName& KeyName) const;
	class FName GetValueAsName(const class FName& KeyName) const;
	class UObject* GetValueAsObject(const class FName& KeyName) const;
	struct FRotator GetValueAsRotator(const class FName& KeyName) const;
	class FString GetValueAsString(const class FName& KeyName) const;
	struct FVector GetValueAsVector(const class FName& KeyName) const;
	bool IsVectorValueSet(const class FName& KeyName) const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"BlackboardComponent">();
	}
	static class UBlackboardComponent* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBlackboardComponent>();
	}
};
static_assert(alignof(UBlackboardComponent) == 0x000008, "Wrong alignment on UBlackboardComponent");
static_assert(sizeof(UBlackboardComponent) == 0x0001A8, "Wrong size on UBlackboardComponent");
static_assert(offsetof(UBlackboardComponent, BrainComp) == 0x0000A0, "Member 'UBlackboardComponent::BrainComp' has a wrong offset!");
static_assert(offsetof(UBlackboardComponent, DefaultBlackboardAsset) == 0x0000A8, "Member 'UBlackboardComponent::DefaultBlackboardAsset' has a wrong offset!");
static_assert(offsetof(UBlackboardComponent, BlackboardAsset) == 0x0000B0, "Member 'UBlackboardComponent::BlackboardAsset' has a wrong offset!");
static_assert(offsetof(UBlackboardComponent, KeyInstances) == 0x0000D8, "Member 'UBlackboardComponent::KeyInstances' has a wrong offset!");

class UBlackboardData final : public UDataAsset
{
public:
	class UBlackboardData*                        Parent;
	TArray<struct FBlackboardEntry>               Keys;
	uint8                                         bHasSynchronizedKeys : 1;
	uint8                                         Pad_49[0x7];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"BlackboardData">();
	}
	static class UBlackboardData* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBlackboardData>();
	}
};
static_assert(alignof(UBlackboardData) == 0x000008, "Wrong alignment on UBlackboardData");
static_assert(sizeof(UBlackboardData) == 0x000050, "Wrong size on UBlackboardData");
static_assert(offsetof(UBlackboardData, Parent) == 0x000030, "Member 'UBlackboardData::Parent' has a wrong offset!");
static_assert(offsetof(UBlackboardData, Keys) == 0x000038, "Member 'UBlackboardData::Keys' has a wrong offset!");

class UBlackboardKeyType : public UObject
{
public:
	uint8                                         Pad_28[0x8];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"BlackboardKeyType">();
	}
	static class UBlackboardKeyType* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBlackboardKeyType>();
	}
};
static_assert(alignof(UBlackboardKeyType) == 0x000008, "Wrong alignment on UBlackboardKeyType");
static_assert(sizeof(UBlackboardKeyType) == 0x000030, "Wrong size on UBlackboardKeyType");

class UBlackboardKeyType_Bool final : public UBlackboardKeyType
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"BlackboardKeyType_Bool">();
	}
	static class UBlackboardKeyType_Bool* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBlackboardKeyType_Bool>();
	}
};
static_assert(alignof(UBlackboardKeyType_Bool) == 0x000008, "Wrong alignment on UBlackboardKeyType_Bool");
static_assert(sizeof(UBlackboardKeyType_Bool) == 0x000030, "Wrong size on UBlackboardKeyType_Bool");

class UBlackboardKeyType_Class final : public UBlackboardKeyType
{
public:
	TSubclassOf<class UObject>                    BaseClass;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"BlackboardKeyType_Class">();
	}
	static class UBlackboardKeyType_Class* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBlackboardKeyType_Class>();
	}
};
static_assert(alignof(UBlackboardKeyType_Class) == 0x000008, "Wrong alignment on UBlackboardKeyType_Class");
static_assert(sizeof(UBlackboardKeyType_Class) == 0x000038, "Wrong size on UBlackboardKeyType_Class");
static_assert(offsetof(UBlackboardKeyType_Class, BaseClass) == 0x000030, "Member 'UBlackboardKeyType_Class::BaseClass' has a wrong offset!");

class UBlackboardKeyType_Enum final : public UBlackboardKeyType
{
public:
	class UEnum*                                  EnumType;
	class FString                                 EnumName;
	uint8                                         bIsEnumNameValid : 1;
	uint8                                         Pad_49[0x7];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"BlackboardKeyType_Enum">();
	}
	static class UBlackboardKeyType_Enum* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBlackboardKeyType_Enum>();
	}
};
static_assert(alignof(UBlackboardKeyType_Enum) == 0x000008, "Wrong alignment on UBlackboardKeyType_Enum");
static_assert(sizeof(UBlackboardKeyType_Enum) == 0x000050, "Wrong size on UBlackboardKeyType_Enum");
static_assert(offsetof(UBlackboardKeyType_Enum, EnumType) == 0x000030, "Member 'UBlackboardKeyType_Enum::EnumType' has a wrong offset!");
static_assert(offsetof(UBlackboardKeyType_Enum, EnumName) == 0x000038, "Member 'UBlackboardKeyType_Enum::EnumName' has a wrong offset!");

class UBlackboardKeyType_Float final : public UBlackboardKeyType
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"BlackboardKeyType_Float">();
	}
	static class UBlackboardKeyType_Float* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBlackboardKeyType_Float>();
	}
};
static_assert(alignof(UBlackboardKeyType_Float) == 0x000008, "Wrong alignment on UBlackboardKeyType_Float");
static_assert(sizeof(UBlackboardKeyType_Float) == 0x000030, "Wrong size on UBlackboardKeyType_Float");

class UBlackboardKeyType_Int final : public UBlackboardKeyType
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"BlackboardKeyType_Int">();
	}
	static class UBlackboardKeyType_Int* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBlackboardKeyType_Int>();
	}
};
static_assert(alignof(UBlackboardKeyType_Int) == 0x000008, "Wrong alignment on UBlackboardKeyType_Int");
static_assert(sizeof(UBlackboardKeyType_Int) == 0x000030, "Wrong size on UBlackboardKeyType_Int");

class UBlackboardKeyType_Name final : public UBlackboardKeyType
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"BlackboardKeyType_Name">();
	}
	static class UBlackboardKeyType_Name* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBlackboardKeyType_Name>();
	}
};
static_assert(alignof(UBlackboardKeyType_Name) == 0x000008, "Wrong alignment on UBlackboardKeyType_Name");
static_assert(sizeof(UBlackboardKeyType_Name) == 0x000030, "Wrong size on UBlackboardKeyType_Name");

class UBlackboardKeyType_NativeEnum final : public UBlackboardKeyType
{
public:
	class FString                                 EnumName;
	class UEnum*                                  EnumType;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"BlackboardKeyType_NativeEnum">();
	}
	static class UBlackboardKeyType_NativeEnum* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBlackboardKeyType_NativeEnum>();
	}
};
static_assert(alignof(UBlackboardKeyType_NativeEnum) == 0x000008, "Wrong alignment on UBlackboardKeyType_NativeEnum");
static_assert(sizeof(UBlackboardKeyType_NativeEnum) == 0x000048, "Wrong size on UBlackboardKeyType_NativeEnum");
static_assert(offsetof(UBlackboardKeyType_NativeEnum, EnumName) == 0x000030, "Member 'UBlackboardKeyType_NativeEnum::EnumName' has a wrong offset!");
static_assert(offsetof(UBlackboardKeyType_NativeEnum, EnumType) == 0x000040, "Member 'UBlackboardKeyType_NativeEnum::EnumType' has a wrong offset!");

class UBlackboardKeyType_Object final : public UBlackboardKeyType
{
public:
	TSubclassOf<class UObject>                    BaseClass;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"BlackboardKeyType_Object">();
	}
	static class UBlackboardKeyType_Object* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBlackboardKeyType_Object>();
	}
};
static_assert(alignof(UBlackboardKeyType_Object) == 0x000008, "Wrong alignment on UBlackboardKeyType_Object");
static_assert(sizeof(UBlackboardKeyType_Object) == 0x000038, "Wrong size on UBlackboardKeyType_Object");
static_assert(offsetof(UBlackboardKeyType_Object, BaseClass) == 0x000030, "Member 'UBlackboardKeyType_Object::BaseClass' has a wrong offset!");

class UBlackboardKeyType_Rotator final : public UBlackboardKeyType
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"BlackboardKeyType_Rotator">();
	}
	static class UBlackboardKeyType_Rotator* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBlackboardKeyType_Rotator>();
	}
};
static_assert(alignof(UBlackboardKeyType_Rotator) == 0x000008, "Wrong alignment on UBlackboardKeyType_Rotator");
static_assert(sizeof(UBlackboardKeyType_Rotator) == 0x000030, "Wrong size on UBlackboardKeyType_Rotator");

class UBlackboardKeyType_String final : public UBlackboardKeyType
{
public:
	class FString                                 StringValue;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"BlackboardKeyType_String">();
	}
	static class UBlackboardKeyType_String* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBlackboardKeyType_String>();
	}
};
static_assert(alignof(UBlackboardKeyType_String) == 0x000008, "Wrong alignment on UBlackboardKeyType_String");
static_assert(sizeof(UBlackboardKeyType_String) == 0x000040, "Wrong size on UBlackboardKeyType_String");
static_assert(offsetof(UBlackboardKeyType_String, StringValue) == 0x000030, "Member 'UBlackboardKeyType_String::StringValue' has a wrong offset!");

class UBlackboardKeyType_Vector final : public UBlackboardKeyType
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"BlackboardKeyType_Vector">();
	}
	static class UBlackboardKeyType_Vector* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBlackboardKeyType_Vector>();
	}
};
static_assert(alignof(UBlackboardKeyType_Vector) == 0x000008, "Wrong alignment on UBlackboardKeyType_Vector");
static_assert(sizeof(UBlackboardKeyType_Vector) == 0x000030, "Wrong size on UBlackboardKeyType_Vector");

class UBTAuxiliaryNode : public UBTNode
{
public:
	uint8                                         Pad_58[0x8];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"BTAuxiliaryNode">();
	}
	static class UBTAuxiliaryNode* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBTAuxiliaryNode>();
	}
};
static_assert(alignof(UBTAuxiliaryNode) == 0x000008, "Wrong alignment on UBTAuxiliaryNode");
static_assert(sizeof(UBTAuxiliaryNode) == 0x000060, "Wrong size on UBTAuxiliaryNode");

class UBTDecorator : public UBTAuxiliaryNode
{
public:
	uint8                                         BitPad_60_0 : 7;
	uint8                                         bInverseCondition : 1;
	uint8                                         Pad_61[0x3];
	EBTFlowAbortMode                              FlowAbortMode;
	uint8                                         Pad_65[0x3];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"BTDecorator">();
	}
	static class UBTDecorator* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBTDecorator>();
	}
};
static_assert(alignof(UBTDecorator) == 0x000008, "Wrong alignment on UBTDecorator");
static_assert(sizeof(UBTDecorator) == 0x000068, "Wrong size on UBTDecorator");
static_assert(offsetof(UBTDecorator, FlowAbortMode) == 0x000064, "Member 'UBTDecorator::FlowAbortMode' has a wrong offset!");

class UBTFunctionLibrary final : public UBlueprintFunctionLibrary
{
public:
	static void ClearBlackboardValue(class UBTNode* NodeOwner, const struct FBlackboardKeySelector& Key);
	static void ClearBlackboardValueAsVector(class UBTNode* NodeOwner, const struct FBlackboardKeySelector& Key);
	static class AActor* GetBlackboardValueAsActor(class UBTNode* NodeOwner, const struct FBlackboardKeySelector& Key);
	static bool GetBlackboardValueAsBool(class UBTNode* NodeOwner, const struct FBlackboardKeySelector& Key);
	static class UClass* GetBlackboardValueAsClass(class UBTNode* NodeOwner, const struct FBlackboardKeySelector& Key);
	static uint8 GetBlackboardValueAsEnum(class UBTNode* NodeOwner, const struct FBlackboardKeySelector& Key);
	static float GetBlackboardValueAsFloat(class UBTNode* NodeOwner, const struct FBlackboardKeySelector& Key);
	static int32 GetBlackboardValueAsInt(class UBTNode* NodeOwner, const struct FBlackboardKeySelector& Key);
	static class FName GetBlackboardValueAsName(class UBTNode* NodeOwner, const struct FBlackboardKeySelector& Key);
	static class UObject* GetBlackboardValueAsObject(class UBTNode* NodeOwner, const struct FBlackboardKeySelector& Key);
	static struct FRotator GetBlackboardValueAsRotator(class UBTNode* NodeOwner, const struct FBlackboardKeySelector& Key);
	static class FString GetBlackboardValueAsString(class UBTNode* NodeOwner, const struct FBlackboardKeySelector& Key);
	static struct FVector GetBlackboardValueAsVector(class UBTNode* NodeOwner, const struct FBlackboardKeySelector& Key);
	static class UBehaviorTreeComponent* GetOwnerComponent(class UBTNode* NodeOwner);
	static class UBlackboardComponent* GetOwnersBlackboard(class UBTNode* NodeOwner);
	static void SetBlackboardValueAsBool(class UBTNode* NodeOwner, const struct FBlackboardKeySelector& Key, bool Value);
	static void SetBlackboardValueAsClass(class UBTNode* NodeOwner, const struct FBlackboardKeySelector& Key, class UClass* Value);
	static void SetBlackboardValueAsEnum(class UBTNode* NodeOwner, const struct FBlackboardKeySelector& Key, uint8 Value);
	static void SetBlackboardValueAsFloat(class UBTNode* NodeOwner, const struct FBlackboardKeySelector& Key, float Value);
	static void SetBlackboardValueAsInt(class UBTNode* NodeOwner, const struct FBlackboardKeySelector& Key, int32 Value);
	static void SetBlackboardValueAsName(class UBTNode* NodeOwner, const struct FBlackboardKeySelector& Key, class FName Value);
	static void SetBlackboardValueAsObject(class UBTNode* NodeOwner, const struct FBlackboardKeySelector& Key, class UObject* Value);
	static void SetBlackboardValueAsRotator(class UBTNode* NodeOwner, const struct FBlackboardKeySelector& Key, const struct FRotator& Value);
	static void SetBlackboardValueAsString(class UBTNode* NodeOwner, const struct FBlackboardKeySelector& Key, const class FString& Value);
	static void SetBlackboardValueAsVector(class UBTNode* NodeOwner, const struct FBlackboardKeySelector& Key, const struct FVector& Value);
	static void StartUsingExternalEvent(class UBTNode* NodeOwner, class AActor* OwningActor);
	static void StopUsingExternalEvent(class UBTNode* NodeOwner);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"BTFunctionLibrary">();
	}
	static class UBTFunctionLibrary* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBTFunctionLibrary>();
	}
};
static_assert(alignof(UBTFunctionLibrary) == 0x000008, "Wrong alignment on UBTFunctionLibrary");
static_assert(sizeof(UBTFunctionLibrary) == 0x000028, "Wrong size on UBTFunctionLibrary");

class UBTService : public UBTAuxiliaryNode
{
public:
	float                                         Interval;
	float                                         RandomDeviation;
	uint8                                         bCallTickOnSearchStart : 1;
	uint8                                         bRestartTimerOnEachActivation : 1;
	uint8                                         Pad_69[0x7];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"BTService">();
	}
	static class UBTService* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBTService>();
	}
};
static_assert(alignof(UBTService) == 0x000008, "Wrong alignment on UBTService");
static_assert(sizeof(UBTService) == 0x000070, "Wrong size on UBTService");
static_assert(offsetof(UBTService, Interval) == 0x000060, "Member 'UBTService::Interval' has a wrong offset!");
static_assert(offsetof(UBTService, RandomDeviation) == 0x000064, "Member 'UBTService::RandomDeviation' has a wrong offset!");

class UBTTaskNode : public UBTNode
{
public:
	TArray<class UBTService*>                     Services;
	uint8                                         bIgnoreRestartSelf : 1;
	uint8                                         Pad_69[0x7];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"BTTaskNode">();
	}
	static class UBTTaskNode* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBTTaskNode>();
	}
};
static_assert(alignof(UBTTaskNode) == 0x000008, "Wrong alignment on UBTTaskNode");
static_assert(sizeof(UBTTaskNode) == 0x000070, "Wrong size on UBTTaskNode");
static_assert(offsetof(UBTTaskNode, Services) == 0x000058, "Member 'UBTTaskNode::Services' has a wrong offset!");

class UBTComposite_Selector final : public UBTCompositeNode
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"BTComposite_Selector">();
	}
	static class UBTComposite_Selector* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBTComposite_Selector>();
	}
};
static_assert(alignof(UBTComposite_Selector) == 0x000008, "Wrong alignment on UBTComposite_Selector");
static_assert(sizeof(UBTComposite_Selector) == 0x000090, "Wrong size on UBTComposite_Selector");

class UBTComposite_SimpleParallel final : public UBTCompositeNode
{
public:
	EBTParallelMode                               FinishMode;
	uint8                                         Pad_91[0x7];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"BTComposite_SimpleParallel">();
	}
	static class UBTComposite_SimpleParallel* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBTComposite_SimpleParallel>();
	}
};
static_assert(alignof(UBTComposite_SimpleParallel) == 0x000008, "Wrong alignment on UBTComposite_SimpleParallel");
static_assert(sizeof(UBTComposite_SimpleParallel) == 0x000098, "Wrong size on UBTComposite_SimpleParallel");
static_assert(offsetof(UBTComposite_SimpleParallel, FinishMode) == 0x000090, "Member 'UBTComposite_SimpleParallel::FinishMode' has a wrong offset!");

class UBTDecorator_BlackboardBase : public UBTDecorator
{
public:
	struct FBlackboardKeySelector                 BlackboardKey;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"BTDecorator_BlackboardBase">();
	}
	static class UBTDecorator_BlackboardBase* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBTDecorator_BlackboardBase>();
	}
};
static_assert(alignof(UBTDecorator_BlackboardBase) == 0x000008, "Wrong alignment on UBTDecorator_BlackboardBase");
static_assert(sizeof(UBTDecorator_BlackboardBase) == 0x000090, "Wrong size on UBTDecorator_BlackboardBase");
static_assert(offsetof(UBTDecorator_BlackboardBase, BlackboardKey) == 0x000068, "Member 'UBTDecorator_BlackboardBase::BlackboardKey' has a wrong offset!");

class UBTDecorator_Blackboard : public UBTDecorator_BlackboardBase
{
public:
	int32                                         IntValue;
	float                                         FloatValue;
	class FString                                 StringValue;
	class FString                                 CachedDescription;
	uint8                                         OperationType;
	EBTBlackboardRestart                          NotifyObserver;
	uint8                                         Pad_BA[0x6];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"BTDecorator_Blackboard">();
	}
	static class UBTDecorator_Blackboard* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBTDecorator_Blackboard>();
	}
};
static_assert(alignof(UBTDecorator_Blackboard) == 0x000008, "Wrong alignment on UBTDecorator_Blackboard");
static_assert(sizeof(UBTDecorator_Blackboard) == 0x0000C0, "Wrong size on UBTDecorator_Blackboard");
static_assert(offsetof(UBTDecorator_Blackboard, IntValue) == 0x000090, "Member 'UBTDecorator_Blackboard::IntValue' has a wrong offset!");
static_assert(offsetof(UBTDecorator_Blackboard, FloatValue) == 0x000094, "Member 'UBTDecorator_Blackboard::FloatValue' has a wrong offset!");
static_assert(offsetof(UBTDecorator_Blackboard, StringValue) == 0x000098, "Member 'UBTDecorator_Blackboard::StringValue' has a wrong offset!");
static_assert(offsetof(UBTDecorator_Blackboard, CachedDescription) == 0x0000A8, "Member 'UBTDecorator_Blackboard::CachedDescription' has a wrong offset!");
static_assert(offsetof(UBTDecorator_Blackboard, OperationType) == 0x0000B8, "Member 'UBTDecorator_Blackboard::OperationType' has a wrong offset!");
static_assert(offsetof(UBTDecorator_Blackboard, NotifyObserver) == 0x0000B9, "Member 'UBTDecorator_Blackboard::NotifyObserver' has a wrong offset!");

class UBTDecorator_BlueprintBase final : public UBTDecorator
{
public:
	class AAIController*                          AIOwner;
	class AActor*                                 ActorOwner;
	TArray<class FName>                           ObservedKeyNames;
	uint8                                         Pad_88[0x10];
	uint8                                         bShowPropertyDetails : 1;
	uint8                                         bCheckConditionOnlyBlackBoardChanges : 1;
	uint8                                         bIsObservingBB : 1;
	uint8                                         Pad_99[0x7];

public:
	bool PerformConditionCheck(class AActor* OwnerActor);
	bool PerformConditionCheckAI(class AAIController* OwnerController, class APawn* ControlledPawn);
	void ReceiveExecutionFinish(class AActor* OwnerActor, EBTNodeResult NodeResult);
	void ReceiveExecutionFinishAI(class AAIController* OwnerController, class APawn* ControlledPawn, EBTNodeResult NodeResult);
	void ReceiveExecutionStart(class AActor* OwnerActor);
	void ReceiveExecutionStartAI(class AAIController* OwnerController, class APawn* ControlledPawn);
	void ReceiveObserverActivated(class AActor* OwnerActor);
	void ReceiveObserverActivatedAI(class AAIController* OwnerController, class APawn* ControlledPawn);
	void ReceiveObserverDeactivated(class AActor* OwnerActor);
	void ReceiveObserverDeactivatedAI(class AAIController* OwnerController, class APawn* ControlledPawn);
	void ReceiveTick(class AActor* OwnerActor, float DeltaSeconds);
	void ReceiveTickAI(class AAIController* OwnerController, class APawn* ControlledPawn, float DeltaSeconds);

	bool IsDecoratorExecutionActive() const;
	bool IsDecoratorObserverActive() const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"BTDecorator_BlueprintBase">();
	}
	static class UBTDecorator_BlueprintBase* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBTDecorator_BlueprintBase>();
	}
};
static_assert(alignof(UBTDecorator_BlueprintBase) == 0x000008, "Wrong alignment on UBTDecorator_BlueprintBase");
static_assert(sizeof(UBTDecorator_BlueprintBase) == 0x0000A0, "Wrong size on UBTDecorator_BlueprintBase");
static_assert(offsetof(UBTDecorator_BlueprintBase, AIOwner) == 0x000068, "Member 'UBTDecorator_BlueprintBase::AIOwner' has a wrong offset!");
static_assert(offsetof(UBTDecorator_BlueprintBase, ActorOwner) == 0x000070, "Member 'UBTDecorator_BlueprintBase::ActorOwner' has a wrong offset!");
static_assert(offsetof(UBTDecorator_BlueprintBase, ObservedKeyNames) == 0x000078, "Member 'UBTDecorator_BlueprintBase::ObservedKeyNames' has a wrong offset!");

class UBTDecorator_CheckGameplayTagsOnActor final : public UBTDecorator
{
public:
	struct FBlackboardKeySelector                 ActorToCheck;
	EGameplayContainerMatchType                   TagsToMatch;
	uint8                                         Pad_91[0x7];
	struct FGameplayTagContainer                  GameplayTags;
	class FString                                 CachedDescription;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"BTDecorator_CheckGameplayTagsOnActor">();
	}
	static class UBTDecorator_CheckGameplayTagsOnActor* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBTDecorator_CheckGameplayTagsOnActor>();
	}
};
static_assert(alignof(UBTDecorator_CheckGameplayTagsOnActor) == 0x000008, "Wrong alignment on UBTDecorator_CheckGameplayTagsOnActor");
static_assert(sizeof(UBTDecorator_CheckGameplayTagsOnActor) == 0x0000C8, "Wrong size on UBTDecorator_CheckGameplayTagsOnActor");
static_assert(offsetof(UBTDecorator_CheckGameplayTagsOnActor, ActorToCheck) == 0x000068, "Member 'UBTDecorator_CheckGameplayTagsOnActor::ActorToCheck' has a wrong offset!");
static_assert(offsetof(UBTDecorator_CheckGameplayTagsOnActor, TagsToMatch) == 0x000090, "Member 'UBTDecorator_CheckGameplayTagsOnActor::TagsToMatch' has a wrong offset!");
static_assert(offsetof(UBTDecorator_CheckGameplayTagsOnActor, GameplayTags) == 0x000098, "Member 'UBTDecorator_CheckGameplayTagsOnActor::GameplayTags' has a wrong offset!");
static_assert(offsetof(UBTDecorator_CheckGameplayTagsOnActor, CachedDescription) == 0x0000B8, "Member 'UBTDecorator_CheckGameplayTagsOnActor::CachedDescription' has a wrong offset!");

class UBTDecorator_CompareBBEntries final : public UBTDecorator
{
public:
	EBlackBoardEntryComparison                    Operator;
	uint8                                         Pad_69[0x7];
	struct FBlackboardKeySelector                 BlackboardKeyA;
	struct FBlackboardKeySelector                 BlackboardKeyB;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"BTDecorator_CompareBBEntries">();
	}
	static class UBTDecorator_CompareBBEntries* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBTDecorator_CompareBBEntries>();
	}
};
static_assert(alignof(UBTDecorator_CompareBBEntries) == 0x000008, "Wrong alignment on UBTDecorator_CompareBBEntries");
static_assert(sizeof(UBTDecorator_CompareBBEntries) == 0x0000C0, "Wrong size on UBTDecorator_CompareBBEntries");
static_assert(offsetof(UBTDecorator_CompareBBEntries, Operator) == 0x000068, "Member 'UBTDecorator_CompareBBEntries::Operator' has a wrong offset!");
static_assert(offsetof(UBTDecorator_CompareBBEntries, BlackboardKeyA) == 0x000070, "Member 'UBTDecorator_CompareBBEntries::BlackboardKeyA' has a wrong offset!");
static_assert(offsetof(UBTDecorator_CompareBBEntries, BlackboardKeyB) == 0x000098, "Member 'UBTDecorator_CompareBBEntries::BlackboardKeyB' has a wrong offset!");

class UBTDecorator_ConditionalLoop final : public UBTDecorator_Blackboard
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"BTDecorator_ConditionalLoop">();
	}
	static class UBTDecorator_ConditionalLoop* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBTDecorator_ConditionalLoop>();
	}
};
static_assert(alignof(UBTDecorator_ConditionalLoop) == 0x000008, "Wrong alignment on UBTDecorator_ConditionalLoop");
static_assert(sizeof(UBTDecorator_ConditionalLoop) == 0x0000C0, "Wrong size on UBTDecorator_ConditionalLoop");

class UBTDecorator_ConeCheck final : public UBTDecorator
{
public:
	float                                         ConeHalfAngle;
	uint8                                         Pad_6C[0x4];
	struct FBlackboardKeySelector                 ConeOrigin;
	struct FBlackboardKeySelector                 ConeDirection;
	struct FBlackboardKeySelector                 Observed;
	uint8                                         Pad_E8[0x8];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"BTDecorator_ConeCheck">();
	}
	static class UBTDecorator_ConeCheck* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBTDecorator_ConeCheck>();
	}
};
static_assert(alignof(UBTDecorator_ConeCheck) == 0x000008, "Wrong alignment on UBTDecorator_ConeCheck");
static_assert(sizeof(UBTDecorator_ConeCheck) == 0x0000F0, "Wrong size on UBTDecorator_ConeCheck");
static_assert(offsetof(UBTDecorator_ConeCheck, ConeHalfAngle) == 0x000068, "Member 'UBTDecorator_ConeCheck::ConeHalfAngle' has a wrong offset!");
static_assert(offsetof(UBTDecorator_ConeCheck, ConeOrigin) == 0x000070, "Member 'UBTDecorator_ConeCheck::ConeOrigin' has a wrong offset!");
static_assert(offsetof(UBTDecorator_ConeCheck, ConeDirection) == 0x000098, "Member 'UBTDecorator_ConeCheck::ConeDirection' has a wrong offset!");
static_assert(offsetof(UBTDecorator_ConeCheck, Observed) == 0x0000C0, "Member 'UBTDecorator_ConeCheck::Observed' has a wrong offset!");

class UBTDecorator_Cooldown final : public UBTDecorator
{
public:
	float                                         CoolDownTime;
	uint8                                         Pad_6C[0x4];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"BTDecorator_Cooldown">();
	}
	static class UBTDecorator_Cooldown* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBTDecorator_Cooldown>();
	}
};
static_assert(alignof(UBTDecorator_Cooldown) == 0x000008, "Wrong alignment on UBTDecorator_Cooldown");
static_assert(sizeof(UBTDecorator_Cooldown) == 0x000070, "Wrong size on UBTDecorator_Cooldown");
static_assert(offsetof(UBTDecorator_Cooldown, CoolDownTime) == 0x000068, "Member 'UBTDecorator_Cooldown::CoolDownTime' has a wrong offset!");

class UBTDecorator_DoesPathExist final : public UBTDecorator
{
public:
	struct FBlackboardKeySelector                 BlackboardKeyA;
	struct FBlackboardKeySelector                 BlackboardKeyB;
	uint8                                         bUseSelf : 1;
	uint8                                         Pad_B9[0x3];
	EPathExistanceQueryType                       PathQueryType;
	uint8                                         Pad_BD[0x3];
	TSubclassOf<class UNavigationQueryFilter>     FilterClass;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"BTDecorator_DoesPathExist">();
	}
	static class UBTDecorator_DoesPathExist* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBTDecorator_DoesPathExist>();
	}
};
static_assert(alignof(UBTDecorator_DoesPathExist) == 0x000008, "Wrong alignment on UBTDecorator_DoesPathExist");
static_assert(sizeof(UBTDecorator_DoesPathExist) == 0x0000C8, "Wrong size on UBTDecorator_DoesPathExist");
static_assert(offsetof(UBTDecorator_DoesPathExist, BlackboardKeyA) == 0x000068, "Member 'UBTDecorator_DoesPathExist::BlackboardKeyA' has a wrong offset!");
static_assert(offsetof(UBTDecorator_DoesPathExist, BlackboardKeyB) == 0x000090, "Member 'UBTDecorator_DoesPathExist::BlackboardKeyB' has a wrong offset!");
static_assert(offsetof(UBTDecorator_DoesPathExist, PathQueryType) == 0x0000BC, "Member 'UBTDecorator_DoesPathExist::PathQueryType' has a wrong offset!");
static_assert(offsetof(UBTDecorator_DoesPathExist, FilterClass) == 0x0000C0, "Member 'UBTDecorator_DoesPathExist::FilterClass' has a wrong offset!");

class UBTDecorator_ForceSuccess final : public UBTDecorator
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"BTDecorator_ForceSuccess">();
	}
	static class UBTDecorator_ForceSuccess* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBTDecorator_ForceSuccess>();
	}
};
static_assert(alignof(UBTDecorator_ForceSuccess) == 0x000008, "Wrong alignment on UBTDecorator_ForceSuccess");
static_assert(sizeof(UBTDecorator_ForceSuccess) == 0x000068, "Wrong size on UBTDecorator_ForceSuccess");

class UBTDecorator_IsAtLocation final : public UBTDecorator_BlackboardBase
{
public:
	float                                         AcceptableRadius;
	uint8                                         Pad_94[0x4];
	struct FAIDataProviderFloatValue              ParametrizedAcceptableRadius;
	EFAIDistanceType                              GeometricDistanceType;
	uint8                                         Pad_D1[0x3];
	uint8                                         bUseParametrizedRadius : 1;
	uint8                                         bUseNavAgentGoalLocation : 1;
	uint8                                         bPathFindingBasedTest : 1;
	uint8                                         Pad_D5[0x3];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"BTDecorator_IsAtLocation">();
	}
	static class UBTDecorator_IsAtLocation* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBTDecorator_IsAtLocation>();
	}
};
static_assert(alignof(UBTDecorator_IsAtLocation) == 0x000008, "Wrong alignment on UBTDecorator_IsAtLocation");
static_assert(sizeof(UBTDecorator_IsAtLocation) == 0x0000D8, "Wrong size on UBTDecorator_IsAtLocation");
static_assert(offsetof(UBTDecorator_IsAtLocation, AcceptableRadius) == 0x000090, "Member 'UBTDecorator_IsAtLocation::AcceptableRadius' has a wrong offset!");
static_assert(offsetof(UBTDecorator_IsAtLocation, ParametrizedAcceptableRadius) == 0x000098, "Member 'UBTDecorator_IsAtLocation::ParametrizedAcceptableRadius' has a wrong offset!");
static_assert(offsetof(UBTDecorator_IsAtLocation, GeometricDistanceType) == 0x0000D0, "Member 'UBTDecorator_IsAtLocation::GeometricDistanceType' has a wrong offset!");

class UBTDecorator_IsBBEntryOfClass final : public UBTDecorator_BlackboardBase
{
public:
	TSubclassOf<class UObject>                    TestClass;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"BTDecorator_IsBBEntryOfClass">();
	}
	static class UBTDecorator_IsBBEntryOfClass* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBTDecorator_IsBBEntryOfClass>();
	}
};
static_assert(alignof(UBTDecorator_IsBBEntryOfClass) == 0x000008, "Wrong alignment on UBTDecorator_IsBBEntryOfClass");
static_assert(sizeof(UBTDecorator_IsBBEntryOfClass) == 0x000098, "Wrong size on UBTDecorator_IsBBEntryOfClass");
static_assert(offsetof(UBTDecorator_IsBBEntryOfClass, TestClass) == 0x000090, "Member 'UBTDecorator_IsBBEntryOfClass::TestClass' has a wrong offset!");

class UBTDecorator_KeepInCone final : public UBTDecorator
{
public:
	float                                         ConeHalfAngle;
	uint8                                         Pad_6C[0x4];
	struct FBlackboardKeySelector                 ConeOrigin;
	struct FBlackboardKeySelector                 Observed;
	uint8                                         bUseSelfAsOrigin : 1;
	uint8                                         bUseSelfAsObserved : 1;
	uint8                                         Pad_C1[0x7];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"BTDecorator_KeepInCone">();
	}
	static class UBTDecorator_KeepInCone* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBTDecorator_KeepInCone>();
	}
};
static_assert(alignof(UBTDecorator_KeepInCone) == 0x000008, "Wrong alignment on UBTDecorator_KeepInCone");
static_assert(sizeof(UBTDecorator_KeepInCone) == 0x0000C8, "Wrong size on UBTDecorator_KeepInCone");
static_assert(offsetof(UBTDecorator_KeepInCone, ConeHalfAngle) == 0x000068, "Member 'UBTDecorator_KeepInCone::ConeHalfAngle' has a wrong offset!");
static_assert(offsetof(UBTDecorator_KeepInCone, ConeOrigin) == 0x000070, "Member 'UBTDecorator_KeepInCone::ConeOrigin' has a wrong offset!");
static_assert(offsetof(UBTDecorator_KeepInCone, Observed) == 0x000098, "Member 'UBTDecorator_KeepInCone::Observed' has a wrong offset!");

class UBTDecorator_Loop final : public UBTDecorator
{
public:
	int32                                         NumLoops;
	bool                                          bInfiniteLoop;
	uint8                                         Pad_6D[0x3];
	float                                         InfiniteLoopTimeoutTime;
	uint8                                         Pad_74[0x4];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"BTDecorator_Loop">();
	}
	static class UBTDecorator_Loop* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBTDecorator_Loop>();
	}
};
static_assert(alignof(UBTDecorator_Loop) == 0x000008, "Wrong alignment on UBTDecorator_Loop");
static_assert(sizeof(UBTDecorator_Loop) == 0x000078, "Wrong size on UBTDecorator_Loop");
static_assert(offsetof(UBTDecorator_Loop, NumLoops) == 0x000068, "Member 'UBTDecorator_Loop::NumLoops' has a wrong offset!");
static_assert(offsetof(UBTDecorator_Loop, bInfiniteLoop) == 0x00006C, "Member 'UBTDecorator_Loop::bInfiniteLoop' has a wrong offset!");
static_assert(offsetof(UBTDecorator_Loop, InfiniteLoopTimeoutTime) == 0x000070, "Member 'UBTDecorator_Loop::InfiniteLoopTimeoutTime' has a wrong offset!");

class UBTDecorator_ReachedMoveGoal final : public UBTDecorator
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"BTDecorator_ReachedMoveGoal">();
	}
	static class UBTDecorator_ReachedMoveGoal* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBTDecorator_ReachedMoveGoal>();
	}
};
static_assert(alignof(UBTDecorator_ReachedMoveGoal) == 0x000008, "Wrong alignment on UBTDecorator_ReachedMoveGoal");
static_assert(sizeof(UBTDecorator_ReachedMoveGoal) == 0x000068, "Wrong size on UBTDecorator_ReachedMoveGoal");

class UBTDecorator_SetTagCooldown final : public UBTDecorator
{
public:
	struct FGameplayTag                           CooldownTag;
	float                                         CooldownDuration;
	bool                                          bAddToExistingDuration;
	uint8                                         Pad_71[0x7];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"BTDecorator_SetTagCooldown">();
	}
	static class UBTDecorator_SetTagCooldown* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBTDecorator_SetTagCooldown>();
	}
};
static_assert(alignof(UBTDecorator_SetTagCooldown) == 0x000008, "Wrong alignment on UBTDecorator_SetTagCooldown");
static_assert(sizeof(UBTDecorator_SetTagCooldown) == 0x000078, "Wrong size on UBTDecorator_SetTagCooldown");
static_assert(offsetof(UBTDecorator_SetTagCooldown, CooldownTag) == 0x000068, "Member 'UBTDecorator_SetTagCooldown::CooldownTag' has a wrong offset!");
static_assert(offsetof(UBTDecorator_SetTagCooldown, CooldownDuration) == 0x00006C, "Member 'UBTDecorator_SetTagCooldown::CooldownDuration' has a wrong offset!");
static_assert(offsetof(UBTDecorator_SetTagCooldown, bAddToExistingDuration) == 0x000070, "Member 'UBTDecorator_SetTagCooldown::bAddToExistingDuration' has a wrong offset!");

class UBTDecorator_TagCooldown final : public UBTDecorator
{
public:
	struct FGameplayTag                           CooldownTag;
	float                                         CooldownDuration;
	bool                                          bAddToExistingDuration;
	bool                                          bActivatesCooldown;
	uint8                                         Pad_72[0x6];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"BTDecorator_TagCooldown">();
	}
	static class UBTDecorator_TagCooldown* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBTDecorator_TagCooldown>();
	}
};
static_assert(alignof(UBTDecorator_TagCooldown) == 0x000008, "Wrong alignment on UBTDecorator_TagCooldown");
static_assert(sizeof(UBTDecorator_TagCooldown) == 0x000078, "Wrong size on UBTDecorator_TagCooldown");
static_assert(offsetof(UBTDecorator_TagCooldown, CooldownTag) == 0x000068, "Member 'UBTDecorator_TagCooldown::CooldownTag' has a wrong offset!");
static_assert(offsetof(UBTDecorator_TagCooldown, CooldownDuration) == 0x00006C, "Member 'UBTDecorator_TagCooldown::CooldownDuration' has a wrong offset!");
static_assert(offsetof(UBTDecorator_TagCooldown, bAddToExistingDuration) == 0x000070, "Member 'UBTDecorator_TagCooldown::bAddToExistingDuration' has a wrong offset!");
static_assert(offsetof(UBTDecorator_TagCooldown, bActivatesCooldown) == 0x000071, "Member 'UBTDecorator_TagCooldown::bActivatesCooldown' has a wrong offset!");

class UBTDecorator_TimeLimit final : public UBTDecorator
{
public:
	float                                         TimeLimit;
	uint8                                         Pad_6C[0x4];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"BTDecorator_TimeLimit">();
	}
	static class UBTDecorator_TimeLimit* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBTDecorator_TimeLimit>();
	}
};
static_assert(alignof(UBTDecorator_TimeLimit) == 0x000008, "Wrong alignment on UBTDecorator_TimeLimit");
static_assert(sizeof(UBTDecorator_TimeLimit) == 0x000070, "Wrong size on UBTDecorator_TimeLimit");
static_assert(offsetof(UBTDecorator_TimeLimit, TimeLimit) == 0x000068, "Member 'UBTDecorator_TimeLimit::TimeLimit' has a wrong offset!");

class UBTService_BlackboardBase : public UBTService
{
public:
	struct FBlackboardKeySelector                 BlackboardKey;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"BTService_BlackboardBase">();
	}
	static class UBTService_BlackboardBase* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBTService_BlackboardBase>();
	}
};
static_assert(alignof(UBTService_BlackboardBase) == 0x000008, "Wrong alignment on UBTService_BlackboardBase");
static_assert(sizeof(UBTService_BlackboardBase) == 0x000098, "Wrong size on UBTService_BlackboardBase");
static_assert(offsetof(UBTService_BlackboardBase, BlackboardKey) == 0x000070, "Member 'UBTService_BlackboardBase::BlackboardKey' has a wrong offset!");

class UBTService_BlueprintBase final : public UBTService
{
public:
	class AAIController*                          AIOwner;
	class AActor*                                 ActorOwner;
	uint8                                         Pad_80[0x10];
	uint8                                         bShowPropertyDetails : 1;
	uint8                                         bShowEventDetails : 1;
	uint8                                         Pad_91[0x7];

public:
	void ReceiveActivation(class AActor* OwnerActor);
	void ReceiveActivationAI(class AAIController* OwnerController, class APawn* ControlledPawn);
	void ReceiveDeactivation(class AActor* OwnerActor);
	void ReceiveDeactivationAI(class AAIController* OwnerController, class APawn* ControlledPawn);
	void ReceiveSearchStart(class AActor* OwnerActor);
	void ReceiveSearchStartAI(class AAIController* OwnerController, class APawn* ControlledPawn);
	void ReceiveTick(class AActor* OwnerActor, float DeltaSeconds);
	void ReceiveTickAI(class AAIController* OwnerController, class APawn* ControlledPawn, float DeltaSeconds);

	bool IsServiceActive() const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"BTService_BlueprintBase">();
	}
	static class UBTService_BlueprintBase* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBTService_BlueprintBase>();
	}
};
static_assert(alignof(UBTService_BlueprintBase) == 0x000008, "Wrong alignment on UBTService_BlueprintBase");
static_assert(sizeof(UBTService_BlueprintBase) == 0x000098, "Wrong size on UBTService_BlueprintBase");
static_assert(offsetof(UBTService_BlueprintBase, AIOwner) == 0x000070, "Member 'UBTService_BlueprintBase::AIOwner' has a wrong offset!");
static_assert(offsetof(UBTService_BlueprintBase, ActorOwner) == 0x000078, "Member 'UBTService_BlueprintBase::ActorOwner' has a wrong offset!");

class UBTService_DefaultFocus final : public UBTService_BlackboardBase
{
public:
	uint8                                         FocusPriority;
	uint8                                         Pad_99[0x7];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"BTService_DefaultFocus">();
	}
	static class UBTService_DefaultFocus* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBTService_DefaultFocus>();
	}
};
static_assert(alignof(UBTService_DefaultFocus) == 0x000008, "Wrong alignment on UBTService_DefaultFocus");
static_assert(sizeof(UBTService_DefaultFocus) == 0x0000A0, "Wrong size on UBTService_DefaultFocus");
static_assert(offsetof(UBTService_DefaultFocus, FocusPriority) == 0x000098, "Member 'UBTService_DefaultFocus::FocusPriority' has a wrong offset!");

class UBTService_RunEQS final : public UBTService_BlackboardBase
{
public:
	struct FEQSParametrizedQueryExecutionRequest  EQSRequest;
	bool                                          bUpdateBBOnFail;
	uint8                                         Pad_E1[0x17];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"BTService_RunEQS">();
	}
	static class UBTService_RunEQS* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBTService_RunEQS>();
	}
};
static_assert(alignof(UBTService_RunEQS) == 0x000008, "Wrong alignment on UBTService_RunEQS");
static_assert(sizeof(UBTService_RunEQS) == 0x0000F8, "Wrong size on UBTService_RunEQS");
static_assert(offsetof(UBTService_RunEQS, EQSRequest) == 0x000098, "Member 'UBTService_RunEQS::EQSRequest' has a wrong offset!");
static_assert(offsetof(UBTService_RunEQS, bUpdateBBOnFail) == 0x0000E0, "Member 'UBTService_RunEQS::bUpdateBBOnFail' has a wrong offset!");

class UBTTask_BlackboardBase : public UBTTaskNode
{
public:
	struct FBlackboardKeySelector                 BlackboardKey;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"BTTask_BlackboardBase">();
	}
	static class UBTTask_BlackboardBase* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBTTask_BlackboardBase>();
	}
};
static_assert(alignof(UBTTask_BlackboardBase) == 0x000008, "Wrong alignment on UBTTask_BlackboardBase");
static_assert(sizeof(UBTTask_BlackboardBase) == 0x000098, "Wrong size on UBTTask_BlackboardBase");
static_assert(offsetof(UBTTask_BlackboardBase, BlackboardKey) == 0x000070, "Member 'UBTTask_BlackboardBase::BlackboardKey' has a wrong offset!");

class UBTTask_BlueprintBase final : public UBTTaskNode
{
public:
	class AAIController*                          AIOwner;
	class AActor*                                 ActorOwner;
	struct FIntervalCountdown                     TickInterval;
	uint8                                         Pad_88[0x18];
	uint8                                         bShowPropertyDetails : 1;
	uint8                                         Pad_A1[0x7];

public:
	void FinishAbort();
	void FinishExecute(bool bSuccess);
	void ReceiveAbort(class AActor* OwnerActor);
	void ReceiveAbortAI(class AAIController* OwnerController, class APawn* ControlledPawn);
	void ReceiveExecute(class AActor* OwnerActor);
	void ReceiveExecuteAI(class AAIController* OwnerController, class APawn* ControlledPawn);
	void ReceiveTick(class AActor* OwnerActor, float DeltaSeconds);
	void ReceiveTickAI(class AAIController* OwnerController, class APawn* ControlledPawn, float DeltaSeconds);
	void SetFinishOnMessage(class FName MessageName);
	void SetFinishOnMessageWithId(class FName MessageName, int32 RequestID);

	bool IsTaskAborting() const;
	bool IsTaskExecuting() const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"BTTask_BlueprintBase">();
	}
	static class UBTTask_BlueprintBase* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBTTask_BlueprintBase>();
	}
};
static_assert(alignof(UBTTask_BlueprintBase) == 0x000008, "Wrong alignment on UBTTask_BlueprintBase");
static_assert(sizeof(UBTTask_BlueprintBase) == 0x0000A8, "Wrong size on UBTTask_BlueprintBase");
static_assert(offsetof(UBTTask_BlueprintBase, AIOwner) == 0x000070, "Member 'UBTTask_BlueprintBase::AIOwner' has a wrong offset!");
static_assert(offsetof(UBTTask_BlueprintBase, ActorOwner) == 0x000078, "Member 'UBTTask_BlueprintBase::ActorOwner' has a wrong offset!");
static_assert(offsetof(UBTTask_BlueprintBase, TickInterval) == 0x000080, "Member 'UBTTask_BlueprintBase::TickInterval' has a wrong offset!");

class UBTTask_FinishWithResult final : public UBTTaskNode
{
public:
	EBTNodeResult                                 Result;
	uint8                                         Pad_71[0x7];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"BTTask_FinishWithResult">();
	}
	static class UBTTask_FinishWithResult* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBTTask_FinishWithResult>();
	}
};
static_assert(alignof(UBTTask_FinishWithResult) == 0x000008, "Wrong alignment on UBTTask_FinishWithResult");
static_assert(sizeof(UBTTask_FinishWithResult) == 0x000078, "Wrong size on UBTTask_FinishWithResult");
static_assert(offsetof(UBTTask_FinishWithResult, Result) == 0x000070, "Member 'UBTTask_FinishWithResult::Result' has a wrong offset!");

class UBTTask_GameplayTaskBase : public UBTTaskNode
{
public:
	uint8                                         bWaitForGameplayTask : 1;
	uint8                                         Pad_71[0x7];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"BTTask_GameplayTaskBase">();
	}
	static class UBTTask_GameplayTaskBase* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBTTask_GameplayTaskBase>();
	}
};
static_assert(alignof(UBTTask_GameplayTaskBase) == 0x000008, "Wrong alignment on UBTTask_GameplayTaskBase");
static_assert(sizeof(UBTTask_GameplayTaskBase) == 0x000078, "Wrong size on UBTTask_GameplayTaskBase");

class UBTTask_MakeNoise final : public UBTTaskNode
{
public:
	float                                         Loudnes;
	uint8                                         Pad_74[0x4];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"BTTask_MakeNoise">();
	}
	static class UBTTask_MakeNoise* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBTTask_MakeNoise>();
	}
};
static_assert(alignof(UBTTask_MakeNoise) == 0x000008, "Wrong alignment on UBTTask_MakeNoise");
static_assert(sizeof(UBTTask_MakeNoise) == 0x000078, "Wrong size on UBTTask_MakeNoise");
static_assert(offsetof(UBTTask_MakeNoise, Loudnes) == 0x000070, "Member 'UBTTask_MakeNoise::Loudnes' has a wrong offset!");

class UBTTask_MoveTo : public UBTTask_BlackboardBase
{
public:
	float                                         AcceptableRadius;
	uint8                                         Pad_9C[0x4];
	TSubclassOf<class UNavigationQueryFilter>     FilterClass;
	float                                         ObservedBlackboardValueTolerance;
	uint8                                         bObserveBlackboardValue : 1;
	uint8                                         bAllowStrafe : 1;
	uint8                                         bAllowPartialPath : 1;
	uint8                                         bTrackMovingGoal : 1;
	uint8                                         bProjectGoalLocation : 1;
	uint8                                         bReachTestIncludesAgentRadius : 1;
	uint8                                         bReachTestIncludesGoalRadius : 1;
	uint8                                         bStopOnOverlap : 1;
	uint8                                         bStopOnOverlapNeedsUpdate : 1;
	uint8                                         Pad_AE[0x2];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"BTTask_MoveTo">();
	}
	static class UBTTask_MoveTo* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBTTask_MoveTo>();
	}
};
static_assert(alignof(UBTTask_MoveTo) == 0x000008, "Wrong alignment on UBTTask_MoveTo");
static_assert(sizeof(UBTTask_MoveTo) == 0x0000B0, "Wrong size on UBTTask_MoveTo");
static_assert(offsetof(UBTTask_MoveTo, AcceptableRadius) == 0x000098, "Member 'UBTTask_MoveTo::AcceptableRadius' has a wrong offset!");
static_assert(offsetof(UBTTask_MoveTo, FilterClass) == 0x0000A0, "Member 'UBTTask_MoveTo::FilterClass' has a wrong offset!");
static_assert(offsetof(UBTTask_MoveTo, ObservedBlackboardValueTolerance) == 0x0000A8, "Member 'UBTTask_MoveTo::ObservedBlackboardValueTolerance' has a wrong offset!");

class UBTTask_MoveDirectlyToward final : public UBTTask_MoveTo
{
public:
	uint8                                         bDisablePathUpdateOnGoalLocationChange : 1;
	uint8                                         bProjectVectorGoalToNavigation : 1;
	uint8                                         bUpdatedDeprecatedProperties : 1;
	uint8                                         Pad_B1[0x7];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"BTTask_MoveDirectlyToward">();
	}
	static class UBTTask_MoveDirectlyToward* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBTTask_MoveDirectlyToward>();
	}
};
static_assert(alignof(UBTTask_MoveDirectlyToward) == 0x000008, "Wrong alignment on UBTTask_MoveDirectlyToward");
static_assert(sizeof(UBTTask_MoveDirectlyToward) == 0x0000B8, "Wrong size on UBTTask_MoveDirectlyToward");

class UBTTask_PawnActionBase : public UBTTaskNode
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"BTTask_PawnActionBase">();
	}
	static class UBTTask_PawnActionBase* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBTTask_PawnActionBase>();
	}
};
static_assert(alignof(UBTTask_PawnActionBase) == 0x000008, "Wrong alignment on UBTTask_PawnActionBase");
static_assert(sizeof(UBTTask_PawnActionBase) == 0x000070, "Wrong size on UBTTask_PawnActionBase");

class UBTTask_PlayAnimation final : public UBTTaskNode
{
public:
	class UAnimationAsset*                        AnimationToPlay;
	uint8                                         bLooping : 1;
	uint8                                         bNonBlocking : 1;
	uint8                                         Pad_79[0x7];
	class UBehaviorTreeComponent*                 MyOwnerComp;
	class USkeletalMeshComponent*                 CachedSkelMesh;
	uint8                                         Pad_90[0x20];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"BTTask_PlayAnimation">();
	}
	static class UBTTask_PlayAnimation* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBTTask_PlayAnimation>();
	}
};
static_assert(alignof(UBTTask_PlayAnimation) == 0x000008, "Wrong alignment on UBTTask_PlayAnimation");
static_assert(sizeof(UBTTask_PlayAnimation) == 0x0000B0, "Wrong size on UBTTask_PlayAnimation");
static_assert(offsetof(UBTTask_PlayAnimation, AnimationToPlay) == 0x000070, "Member 'UBTTask_PlayAnimation::AnimationToPlay' has a wrong offset!");
static_assert(offsetof(UBTTask_PlayAnimation, MyOwnerComp) == 0x000080, "Member 'UBTTask_PlayAnimation::MyOwnerComp' has a wrong offset!");
static_assert(offsetof(UBTTask_PlayAnimation, CachedSkelMesh) == 0x000088, "Member 'UBTTask_PlayAnimation::CachedSkelMesh' has a wrong offset!");

class UBTTask_PlaySound final : public UBTTaskNode
{
public:
	class USoundCue*                              SoundToPlay;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"BTTask_PlaySound">();
	}
	static class UBTTask_PlaySound* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBTTask_PlaySound>();
	}
};
static_assert(alignof(UBTTask_PlaySound) == 0x000008, "Wrong alignment on UBTTask_PlaySound");
static_assert(sizeof(UBTTask_PlaySound) == 0x000078, "Wrong size on UBTTask_PlaySound");
static_assert(offsetof(UBTTask_PlaySound, SoundToPlay) == 0x000070, "Member 'UBTTask_PlaySound::SoundToPlay' has a wrong offset!");

class UBTTask_PushPawnAction final : public UBTTask_PawnActionBase
{
public:
	class UPawnAction*                            Action;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"BTTask_PushPawnAction">();
	}
	static class UBTTask_PushPawnAction* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBTTask_PushPawnAction>();
	}
};
static_assert(alignof(UBTTask_PushPawnAction) == 0x000008, "Wrong alignment on UBTTask_PushPawnAction");
static_assert(sizeof(UBTTask_PushPawnAction) == 0x000078, "Wrong size on UBTTask_PushPawnAction");
static_assert(offsetof(UBTTask_PushPawnAction, Action) == 0x000070, "Member 'UBTTask_PushPawnAction::Action' has a wrong offset!");

class UBTTask_RotateToFaceBBEntry : public UBTTask_BlackboardBase
{
public:
	float                                         Precision;
	uint8                                         Pad_9C[0x4];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"BTTask_RotateToFaceBBEntry">();
	}
	static class UBTTask_RotateToFaceBBEntry* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBTTask_RotateToFaceBBEntry>();
	}
};
static_assert(alignof(UBTTask_RotateToFaceBBEntry) == 0x000008, "Wrong alignment on UBTTask_RotateToFaceBBEntry");
static_assert(sizeof(UBTTask_RotateToFaceBBEntry) == 0x0000A0, "Wrong size on UBTTask_RotateToFaceBBEntry");
static_assert(offsetof(UBTTask_RotateToFaceBBEntry, Precision) == 0x000098, "Member 'UBTTask_RotateToFaceBBEntry::Precision' has a wrong offset!");

class UBTTask_RunBehavior final : public UBTTaskNode
{
public:
	class UBehaviorTree*                          BehaviorAsset;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"BTTask_RunBehavior">();
	}
	static class UBTTask_RunBehavior* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBTTask_RunBehavior>();
	}
};
static_assert(alignof(UBTTask_RunBehavior) == 0x000008, "Wrong alignment on UBTTask_RunBehavior");
static_assert(sizeof(UBTTask_RunBehavior) == 0x000078, "Wrong size on UBTTask_RunBehavior");
static_assert(offsetof(UBTTask_RunBehavior, BehaviorAsset) == 0x000070, "Member 'UBTTask_RunBehavior::BehaviorAsset' has a wrong offset!");

class UBTTask_RunBehaviorDynamic : public UBTTaskNode
{
public:
	struct FGameplayTag                           InjectionTag;
	uint8                                         Pad_74[0x4];
	class UBehaviorTree*                          DefaultBehaviorAsset;
	class UBehaviorTree*                          BehaviorAsset;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"BTTask_RunBehaviorDynamic">();
	}
	static class UBTTask_RunBehaviorDynamic* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBTTask_RunBehaviorDynamic>();
	}
};
static_assert(alignof(UBTTask_RunBehaviorDynamic) == 0x000008, "Wrong alignment on UBTTask_RunBehaviorDynamic");
static_assert(sizeof(UBTTask_RunBehaviorDynamic) == 0x000088, "Wrong size on UBTTask_RunBehaviorDynamic");
static_assert(offsetof(UBTTask_RunBehaviorDynamic, InjectionTag) == 0x000070, "Member 'UBTTask_RunBehaviorDynamic::InjectionTag' has a wrong offset!");
static_assert(offsetof(UBTTask_RunBehaviorDynamic, DefaultBehaviorAsset) == 0x000078, "Member 'UBTTask_RunBehaviorDynamic::DefaultBehaviorAsset' has a wrong offset!");
static_assert(offsetof(UBTTask_RunBehaviorDynamic, BehaviorAsset) == 0x000080, "Member 'UBTTask_RunBehaviorDynamic::BehaviorAsset' has a wrong offset!");

class UBTTask_RunEQSQuery final : public UBTTask_BlackboardBase
{
public:
	class UEnvQuery*                              QueryTemplate;
	TArray<struct FEnvNamedValue>                 QueryParams;
	TArray<struct FAIDynamicParam>                QueryConfig;
	EEnvQueryRunMode                              RunMode;
	uint8                                         Pad_C1[0x7];
	struct FBlackboardKeySelector                 EQSQueryBlackboardKey;
	bool                                          bUseBBKey;
	uint8                                         Pad_F1[0x7];
	struct FEQSParametrizedQueryExecutionRequest  EQSRequest;
	bool                                          bUpdateBBOnFail;
	uint8                                         Pad_141[0x17];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"BTTask_RunEQSQuery">();
	}
	static class UBTTask_RunEQSQuery* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBTTask_RunEQSQuery>();
	}
};
static_assert(alignof(UBTTask_RunEQSQuery) == 0x000008, "Wrong alignment on UBTTask_RunEQSQuery");
static_assert(sizeof(UBTTask_RunEQSQuery) == 0x000158, "Wrong size on UBTTask_RunEQSQuery");
static_assert(offsetof(UBTTask_RunEQSQuery, QueryTemplate) == 0x000098, "Member 'UBTTask_RunEQSQuery::QueryTemplate' has a wrong offset!");
static_assert(offsetof(UBTTask_RunEQSQuery, QueryParams) == 0x0000A0, "Member 'UBTTask_RunEQSQuery::QueryParams' has a wrong offset!");
static_assert(offsetof(UBTTask_RunEQSQuery, QueryConfig) == 0x0000B0, "Member 'UBTTask_RunEQSQuery::QueryConfig' has a wrong offset!");
static_assert(offsetof(UBTTask_RunEQSQuery, RunMode) == 0x0000C0, "Member 'UBTTask_RunEQSQuery::RunMode' has a wrong offset!");
static_assert(offsetof(UBTTask_RunEQSQuery, EQSQueryBlackboardKey) == 0x0000C8, "Member 'UBTTask_RunEQSQuery::EQSQueryBlackboardKey' has a wrong offset!");
static_assert(offsetof(UBTTask_RunEQSQuery, bUseBBKey) == 0x0000F0, "Member 'UBTTask_RunEQSQuery::bUseBBKey' has a wrong offset!");
static_assert(offsetof(UBTTask_RunEQSQuery, EQSRequest) == 0x0000F8, "Member 'UBTTask_RunEQSQuery::EQSRequest' has a wrong offset!");
static_assert(offsetof(UBTTask_RunEQSQuery, bUpdateBBOnFail) == 0x000140, "Member 'UBTTask_RunEQSQuery::bUpdateBBOnFail' has a wrong offset!");

class UBTTask_SetTagCooldown final : public UBTTaskNode
{
public:
	struct FGameplayTag                           CooldownTag;
	bool                                          bAddToExistingDuration;
	uint8                                         Pad_75[0x3];
	float                                         CooldownDuration;
	uint8                                         Pad_7C[0x4];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"BTTask_SetTagCooldown">();
	}
	static class UBTTask_SetTagCooldown* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBTTask_SetTagCooldown>();
	}
};
static_assert(alignof(UBTTask_SetTagCooldown) == 0x000008, "Wrong alignment on UBTTask_SetTagCooldown");
static_assert(sizeof(UBTTask_SetTagCooldown) == 0x000080, "Wrong size on UBTTask_SetTagCooldown");
static_assert(offsetof(UBTTask_SetTagCooldown, CooldownTag) == 0x000070, "Member 'UBTTask_SetTagCooldown::CooldownTag' has a wrong offset!");
static_assert(offsetof(UBTTask_SetTagCooldown, bAddToExistingDuration) == 0x000074, "Member 'UBTTask_SetTagCooldown::bAddToExistingDuration' has a wrong offset!");
static_assert(offsetof(UBTTask_SetTagCooldown, CooldownDuration) == 0x000078, "Member 'UBTTask_SetTagCooldown::CooldownDuration' has a wrong offset!");

class UBTTask_Wait : public UBTTaskNode
{
public:
	float                                         WaitTime;
	float                                         RandomDeviation;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"BTTask_Wait">();
	}
	static class UBTTask_Wait* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBTTask_Wait>();
	}
};
static_assert(alignof(UBTTask_Wait) == 0x000008, "Wrong alignment on UBTTask_Wait");
static_assert(sizeof(UBTTask_Wait) == 0x000078, "Wrong size on UBTTask_Wait");
static_assert(offsetof(UBTTask_Wait, WaitTime) == 0x000070, "Member 'UBTTask_Wait::WaitTime' has a wrong offset!");
static_assert(offsetof(UBTTask_Wait, RandomDeviation) == 0x000074, "Member 'UBTTask_Wait::RandomDeviation' has a wrong offset!");

class UBTTask_WaitBlackboardTime final : public UBTTask_Wait
{
public:
	struct FBlackboardKeySelector                 BlackboardKey;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"BTTask_WaitBlackboardTime">();
	}
	static class UBTTask_WaitBlackboardTime* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBTTask_WaitBlackboardTime>();
	}
};
static_assert(alignof(UBTTask_WaitBlackboardTime) == 0x000008, "Wrong alignment on UBTTask_WaitBlackboardTime");
static_assert(sizeof(UBTTask_WaitBlackboardTime) == 0x0000A0, "Wrong size on UBTTask_WaitBlackboardTime");
static_assert(offsetof(UBTTask_WaitBlackboardTime, BlackboardKey) == 0x000078, "Member 'UBTTask_WaitBlackboardTime::BlackboardKey' has a wrong offset!");

class UAIBlueprintHelperLibrary final : public UBlueprintFunctionLibrary
{
public:
	static class UAIAsyncTaskBlueprintProxy* CreateMoveToProxyObject(class UObject* WorldContextObject, class APawn* Pawn, const struct FVector& Destination, class AActor* TargetActor, float AcceptanceRadius, bool bStopOnOverlap);
	static class AAIController* GetAIController(class AActor* ControlledActor);
	static class UBlackboardComponent* GetBlackboard(class AActor* Target);
	static class UNavigationPath* GetCurrentPath(class AController* Controller);
	static int32 GetCurrentPathIndex(const class AController* Controller);
	static const TArray<struct FVector> GetCurrentPathPoints(class AController* Controller);
	static int32 GetNextNavLinkIndex(const class AController* Controller);
	static bool IsValidAIDirection(const struct FVector& DirectionVector);
	static bool IsValidAILocation(const struct FVector& Location);
	static bool IsValidAIRotation(const struct FRotator& Rotation);
	static void LockAIResourcesWithAnimation(class UAnimInstance* AnimInstance, bool bLockMovement, bool LockAILogic);
	static void SendAIMessage(class APawn* Target, class FName message, class UObject* MessageSource, bool bSuccess);
	static void SimpleMoveToActor(class AController* Controller, const class AActor* Goal);
	static void SimpleMoveToLocation(class AController* Controller, const struct FVector& Goal);
	static class APawn* SpawnAIFromClass(class UObject* WorldContextObject, TSubclassOf<class APawn> PawnClass, class UBehaviorTree* BehaviorTree, const struct FVector& Location, const struct FRotator& Rotation, bool bNoCollisionFail, class AActor* Owner);
	static void UnlockAIResourcesWithAnimation(class UAnimInstance* AnimInstance, bool bUnlockMovement, bool UnlockAILogic);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"AIBlueprintHelperLibrary">();
	}
	static class UAIBlueprintHelperLibrary* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAIBlueprintHelperLibrary>();
	}
};
static_assert(alignof(UAIBlueprintHelperLibrary) == 0x000008, "Wrong alignment on UAIBlueprintHelperLibrary");
static_assert(sizeof(UAIBlueprintHelperLibrary) == 0x000028, "Wrong size on UAIBlueprintHelperLibrary");

class UAIDataProvider : public UObject
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"AIDataProvider">();
	}
	static class UAIDataProvider* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAIDataProvider>();
	}
};
static_assert(alignof(UAIDataProvider) == 0x000008, "Wrong alignment on UAIDataProvider");
static_assert(sizeof(UAIDataProvider) == 0x000028, "Wrong size on UAIDataProvider");

class UAIDataProvider_QueryParams : public UAIDataProvider
{
public:
	class FName                                   ParamName;
	float                                         FloatValue;
	int32                                         IntValue;
	bool                                          BoolValue;
	uint8                                         Pad_35[0x3];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"AIDataProvider_QueryParams">();
	}
	static class UAIDataProvider_QueryParams* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAIDataProvider_QueryParams>();
	}
};
static_assert(alignof(UAIDataProvider_QueryParams) == 0x000008, "Wrong alignment on UAIDataProvider_QueryParams");
static_assert(sizeof(UAIDataProvider_QueryParams) == 0x000038, "Wrong size on UAIDataProvider_QueryParams");
static_assert(offsetof(UAIDataProvider_QueryParams, ParamName) == 0x000028, "Member 'UAIDataProvider_QueryParams::ParamName' has a wrong offset!");
static_assert(offsetof(UAIDataProvider_QueryParams, FloatValue) == 0x00002C, "Member 'UAIDataProvider_QueryParams::FloatValue' has a wrong offset!");
static_assert(offsetof(UAIDataProvider_QueryParams, IntValue) == 0x000030, "Member 'UAIDataProvider_QueryParams::IntValue' has a wrong offset!");
static_assert(offsetof(UAIDataProvider_QueryParams, BoolValue) == 0x000034, "Member 'UAIDataProvider_QueryParams::BoolValue' has a wrong offset!");

class UAIDataProvider_Random final : public UAIDataProvider_QueryParams
{
public:
	float                                         min_0;
	float                                         max_0;
	uint8                                         bInteger : 1;
	uint8                                         Pad_41[0x7];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"AIDataProvider_Random">();
	}
	static class UAIDataProvider_Random* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAIDataProvider_Random>();
	}
};
static_assert(alignof(UAIDataProvider_Random) == 0x000008, "Wrong alignment on UAIDataProvider_Random");
static_assert(sizeof(UAIDataProvider_Random) == 0x000048, "Wrong size on UAIDataProvider_Random");
static_assert(offsetof(UAIDataProvider_Random, min_0) == 0x000038, "Member 'UAIDataProvider_Random::min_0' has a wrong offset!");
static_assert(offsetof(UAIDataProvider_Random, max_0) == 0x00003C, "Member 'UAIDataProvider_Random::max_0' has a wrong offset!");

class ADetourCrowdAIController final : public AAIController
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"DetourCrowdAIController">();
	}
	static class ADetourCrowdAIController* GetDefaultObj()
	{
		return GetDefaultObjImpl<ADetourCrowdAIController>();
	}
};
static_assert(alignof(ADetourCrowdAIController) == 0x000008, "Wrong alignment on ADetourCrowdAIController");
static_assert(sizeof(ADetourCrowdAIController) == 0x0003B0, "Wrong size on ADetourCrowdAIController");

class UEnvQueryContext : public UObject
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"EnvQueryContext">();
	}
	static class UEnvQueryContext* GetDefaultObj()
	{
		return GetDefaultObjImpl<UEnvQueryContext>();
	}
};
static_assert(alignof(UEnvQueryContext) == 0x000008, "Wrong alignment on UEnvQueryContext");
static_assert(sizeof(UEnvQueryContext) == 0x000028, "Wrong size on UEnvQueryContext");

class UEnvQueryContext_BlueprintBase final : public UEnvQueryContext
{
public:
	uint8                                         Pad_28[0x8];

public:
	void ProvideActorsSet(class UObject* QuerierObject, class AActor* QuerierActor, TArray<class AActor*>* ResultingActorsSet) const;
	void ProvideLocationsSet(class UObject* QuerierObject, class AActor* QuerierActor, TArray<struct FVector>* ResultingLocationSet) const;
	void ProvideSingleActor(class UObject* QuerierObject, class AActor* QuerierActor, class AActor** ResultingActor) const;
	void ProvideSingleLocation(class UObject* QuerierObject, class AActor* QuerierActor, struct FVector* ResultingLocation) const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"EnvQueryContext_BlueprintBase">();
	}
	static class UEnvQueryContext_BlueprintBase* GetDefaultObj()
	{
		return GetDefaultObjImpl<UEnvQueryContext_BlueprintBase>();
	}
};
static_assert(alignof(UEnvQueryContext_BlueprintBase) == 0x000008, "Wrong alignment on UEnvQueryContext_BlueprintBase");
static_assert(sizeof(UEnvQueryContext_BlueprintBase) == 0x000030, "Wrong size on UEnvQueryContext_BlueprintBase");

class UEnvQueryContext_Item final : public UEnvQueryContext
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"EnvQueryContext_Item">();
	}
	static class UEnvQueryContext_Item* GetDefaultObj()
	{
		return GetDefaultObjImpl<UEnvQueryContext_Item>();
	}
};
static_assert(alignof(UEnvQueryContext_Item) == 0x000008, "Wrong alignment on UEnvQueryContext_Item");
static_assert(sizeof(UEnvQueryContext_Item) == 0x000028, "Wrong size on UEnvQueryContext_Item");

class UEnvQueryContext_Querier final : public UEnvQueryContext
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"EnvQueryContext_Querier">();
	}
	static class UEnvQueryContext_Querier* GetDefaultObj()
	{
		return GetDefaultObjImpl<UEnvQueryContext_Querier>();
	}
};
static_assert(alignof(UEnvQueryContext_Querier) == 0x000008, "Wrong alignment on UEnvQueryContext_Querier");
static_assert(sizeof(UEnvQueryContext_Querier) == 0x000028, "Wrong size on UEnvQueryContext_Querier");

class UEnvQuery final : public UDataAsset
{
public:
	class FName                                   QueryName;
	uint8                                         Pad_34[0x4];
	TArray<class UEnvQueryOption*>                Options;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"EnvQuery">();
	}
	static class UEnvQuery* GetDefaultObj()
	{
		return GetDefaultObjImpl<UEnvQuery>();
	}
};
static_assert(alignof(UEnvQuery) == 0x000008, "Wrong alignment on UEnvQuery");
static_assert(sizeof(UEnvQuery) == 0x000048, "Wrong size on UEnvQuery");
static_assert(offsetof(UEnvQuery, QueryName) == 0x000030, "Member 'UEnvQuery::QueryName' has a wrong offset!");
static_assert(offsetof(UEnvQuery, Options) == 0x000038, "Member 'UEnvQuery::Options' has a wrong offset!");

class UEnvQueryDebugHelpers final : public UObject
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"EnvQueryDebugHelpers">();
	}
	static class UEnvQueryDebugHelpers* GetDefaultObj()
	{
		return GetDefaultObjImpl<UEnvQueryDebugHelpers>();
	}
};
static_assert(alignof(UEnvQueryDebugHelpers) == 0x000008, "Wrong alignment on UEnvQueryDebugHelpers");
static_assert(sizeof(UEnvQueryDebugHelpers) == 0x000028, "Wrong size on UEnvQueryDebugHelpers");

class UEnvQueryInstanceBlueprintWrapper final : public UObject
{
public:
	uint8                                         Pad_28[0x8];
	int32                                         QueryID;
	uint8                                         Pad_34[0x24];
	TSubclassOf<class UEnvQueryItemType>          ItemType;
	int32                                         OptionIndex;
	uint8                                         Pad_64[0x4];
	TMulticastInlineDelegate<void(class UEnvQueryInstanceBlueprintWrapper* QueryInstance, EEnvQueryStatus QueryStatus)> OnQueryFinishedEvent;

public:
	void SetNamedParam(class FName ParamName, float Value);

	float GetItemScore(int32 ItemIndex) const;
	bool GetQueryResultsAsActors(TArray<class AActor*>* ResultActors) const;
	bool GetQueryResultsAsLocations(TArray<struct FVector>* ResultLocations) const;
	TArray<class AActor*> GetResultsAsActors() const;
	TArray<struct FVector> GetResultsAsLocations() const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"EnvQueryInstanceBlueprintWrapper">();
	}
	static class UEnvQueryInstanceBlueprintWrapper* GetDefaultObj()
	{
		return GetDefaultObjImpl<UEnvQueryInstanceBlueprintWrapper>();
	}
};
static_assert(alignof(UEnvQueryInstanceBlueprintWrapper) == 0x000008, "Wrong alignment on UEnvQueryInstanceBlueprintWrapper");
static_assert(sizeof(UEnvQueryInstanceBlueprintWrapper) == 0x000078, "Wrong size on UEnvQueryInstanceBlueprintWrapper");
static_assert(offsetof(UEnvQueryInstanceBlueprintWrapper, QueryID) == 0x000030, "Member 'UEnvQueryInstanceBlueprintWrapper::QueryID' has a wrong offset!");
static_assert(offsetof(UEnvQueryInstanceBlueprintWrapper, ItemType) == 0x000058, "Member 'UEnvQueryInstanceBlueprintWrapper::ItemType' has a wrong offset!");
static_assert(offsetof(UEnvQueryInstanceBlueprintWrapper, OptionIndex) == 0x000060, "Member 'UEnvQueryInstanceBlueprintWrapper::OptionIndex' has a wrong offset!");
static_assert(offsetof(UEnvQueryInstanceBlueprintWrapper, OnQueryFinishedEvent) == 0x000068, "Member 'UEnvQueryInstanceBlueprintWrapper::OnQueryFinishedEvent' has a wrong offset!");

class UEnvQueryManager : public UAISubsystem
{
public:
	uint8                                         Pad_38[0x70];
	TArray<struct FEnvQueryInstanceCache>         InstanceCache;
	TArray<class UEnvQueryContext*>               LocalContexts;
	TArray<class UEnvQueryInstanceBlueprintWrapper*> GCShieldedWrappers;
	uint8                                         Pad_D8[0x54];
	float                                         MaxAllowedTestingTime;
	bool                                          bTestQueriesUsingBreadth;
	uint8                                         Pad_131[0x3];
	int32                                         QueryCountWarningThreshold;
	double                                        QueryCountWarningInterval;
	double                                        ExecutionTimeWarningSeconds;
	double                                        HandlingResultTimeWarningSeconds;
	double                                        GenerationTimeWarningSeconds;

public:
	static class UEnvQueryInstanceBlueprintWrapper* RunEQSQuery(class UObject* WorldContextObject, class UEnvQuery* QueryTemplate, class UObject* Querier, EEnvQueryRunMode RunMode, TSubclassOf<class UEnvQueryInstanceBlueprintWrapper> WrapperClass);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"EnvQueryManager">();
	}
	static class UEnvQueryManager* GetDefaultObj()
	{
		return GetDefaultObjImpl<UEnvQueryManager>();
	}
};
static_assert(alignof(UEnvQueryManager) == 0x000008, "Wrong alignment on UEnvQueryManager");
static_assert(sizeof(UEnvQueryManager) == 0x000158, "Wrong size on UEnvQueryManager");
static_assert(offsetof(UEnvQueryManager, InstanceCache) == 0x0000A8, "Member 'UEnvQueryManager::InstanceCache' has a wrong offset!");
static_assert(offsetof(UEnvQueryManager, LocalContexts) == 0x0000B8, "Member 'UEnvQueryManager::LocalContexts' has a wrong offset!");
static_assert(offsetof(UEnvQueryManager, GCShieldedWrappers) == 0x0000C8, "Member 'UEnvQueryManager::GCShieldedWrappers' has a wrong offset!");
static_assert(offsetof(UEnvQueryManager, MaxAllowedTestingTime) == 0x00012C, "Member 'UEnvQueryManager::MaxAllowedTestingTime' has a wrong offset!");
static_assert(offsetof(UEnvQueryManager, bTestQueriesUsingBreadth) == 0x000130, "Member 'UEnvQueryManager::bTestQueriesUsingBreadth' has a wrong offset!");
static_assert(offsetof(UEnvQueryManager, QueryCountWarningThreshold) == 0x000134, "Member 'UEnvQueryManager::QueryCountWarningThreshold' has a wrong offset!");
static_assert(offsetof(UEnvQueryManager, QueryCountWarningInterval) == 0x000138, "Member 'UEnvQueryManager::QueryCountWarningInterval' has a wrong offset!");
static_assert(offsetof(UEnvQueryManager, ExecutionTimeWarningSeconds) == 0x000140, "Member 'UEnvQueryManager::ExecutionTimeWarningSeconds' has a wrong offset!");
static_assert(offsetof(UEnvQueryManager, HandlingResultTimeWarningSeconds) == 0x000148, "Member 'UEnvQueryManager::HandlingResultTimeWarningSeconds' has a wrong offset!");
static_assert(offsetof(UEnvQueryManager, GenerationTimeWarningSeconds) == 0x000150, "Member 'UEnvQueryManager::GenerationTimeWarningSeconds' has a wrong offset!");

class UEnvQueryOption final : public UObject
{
public:
	class UEnvQueryGenerator*                     Generator;
	TArray<class UEnvQueryTest*>                  Tests;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"EnvQueryOption">();
	}
	static class UEnvQueryOption* GetDefaultObj()
	{
		return GetDefaultObjImpl<UEnvQueryOption>();
	}
};
static_assert(alignof(UEnvQueryOption) == 0x000008, "Wrong alignment on UEnvQueryOption");
static_assert(sizeof(UEnvQueryOption) == 0x000040, "Wrong size on UEnvQueryOption");
static_assert(offsetof(UEnvQueryOption, Generator) == 0x000028, "Member 'UEnvQueryOption::Generator' has a wrong offset!");
static_assert(offsetof(UEnvQueryOption, Tests) == 0x000030, "Member 'UEnvQueryOption::Tests' has a wrong offset!");

class UEQSRenderingComponent final : public UDebugDrawComponent
{
public:
	uint8                                         Pad_5B8[0x38];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"EQSRenderingComponent">();
	}
	static class UEQSRenderingComponent* GetDefaultObj()
	{
		return GetDefaultObjImpl<UEQSRenderingComponent>();
	}
};
static_assert(alignof(UEQSRenderingComponent) == 0x000010, "Wrong alignment on UEQSRenderingComponent");
static_assert(sizeof(UEQSRenderingComponent) == 0x0005F0, "Wrong size on UEQSRenderingComponent");

class AEQSTestingPawn final : public ACharacter
{
public:
	uint8                                         Pad_620[0x8];
	class UEnvQuery*                              QueryTemplate;
	TArray<struct FEnvNamedValue>                 QueryParams;
	TArray<struct FAIDynamicParam>                QueryConfig;
	float                                         TimeLimitPerStep;
	int32                                         StepToDebugDraw;
	EEnvQueryHightlightMode                       HighlightMode;
	uint8                                         Pad_659[0x3];
	uint8                                         bDrawLabels : 1;
	uint8                                         bDrawFailedItems : 1;
	uint8                                         bReRunQueryOnlyOnFinishedMove : 1;
	uint8                                         bShouldBeVisibleInGame : 1;
	uint8                                         bTickDuringGame : 1;
	uint8                                         Pad_65D[0x3];
	EEnvQueryRunMode                              QueryingMode;
	uint8                                         Pad_661[0x7];
	struct FNavAgentProperties                    NavAgentProperties;
	uint8                                         Pad_698[0x28];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"EQSTestingPawn">();
	}
	static class AEQSTestingPawn* GetDefaultObj()
	{
		return GetDefaultObjImpl<AEQSTestingPawn>();
	}
};
static_assert(alignof(AEQSTestingPawn) == 0x000010, "Wrong alignment on AEQSTestingPawn");
static_assert(sizeof(AEQSTestingPawn) == 0x0006C0, "Wrong size on AEQSTestingPawn");
static_assert(offsetof(AEQSTestingPawn, QueryTemplate) == 0x000628, "Member 'AEQSTestingPawn::QueryTemplate' has a wrong offset!");
static_assert(offsetof(AEQSTestingPawn, QueryParams) == 0x000630, "Member 'AEQSTestingPawn::QueryParams' has a wrong offset!");
static_assert(offsetof(AEQSTestingPawn, QueryConfig) == 0x000640, "Member 'AEQSTestingPawn::QueryConfig' has a wrong offset!");
static_assert(offsetof(AEQSTestingPawn, TimeLimitPerStep) == 0x000650, "Member 'AEQSTestingPawn::TimeLimitPerStep' has a wrong offset!");
static_assert(offsetof(AEQSTestingPawn, StepToDebugDraw) == 0x000654, "Member 'AEQSTestingPawn::StepToDebugDraw' has a wrong offset!");
static_assert(offsetof(AEQSTestingPawn, HighlightMode) == 0x000658, "Member 'AEQSTestingPawn::HighlightMode' has a wrong offset!");
static_assert(offsetof(AEQSTestingPawn, QueryingMode) == 0x000660, "Member 'AEQSTestingPawn::QueryingMode' has a wrong offset!");
static_assert(offsetof(AEQSTestingPawn, NavAgentProperties) == 0x000668, "Member 'AEQSTestingPawn::NavAgentProperties' has a wrong offset!");

class UEnvQueryGenerator_ActorsOfClass : public UEnvQueryGenerator
{
public:
	TSubclassOf<class AActor>                     SearchedActorClass;
	struct FAIDataProviderBoolValue               GenerateOnlyActorsInRadius;
	struct FAIDataProviderFloatValue              SearchRadius;
	TSubclassOf<class UEnvQueryContext>           SearchCenter;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"EnvQueryGenerator_ActorsOfClass">();
	}
	static class UEnvQueryGenerator_ActorsOfClass* GetDefaultObj()
	{
		return GetDefaultObjImpl<UEnvQueryGenerator_ActorsOfClass>();
	}
};
static_assert(alignof(UEnvQueryGenerator_ActorsOfClass) == 0x000008, "Wrong alignment on UEnvQueryGenerator_ActorsOfClass");
static_assert(sizeof(UEnvQueryGenerator_ActorsOfClass) == 0x0000D0, "Wrong size on UEnvQueryGenerator_ActorsOfClass");
static_assert(offsetof(UEnvQueryGenerator_ActorsOfClass, SearchedActorClass) == 0x000050, "Member 'UEnvQueryGenerator_ActorsOfClass::SearchedActorClass' has a wrong offset!");
static_assert(offsetof(UEnvQueryGenerator_ActorsOfClass, GenerateOnlyActorsInRadius) == 0x000058, "Member 'UEnvQueryGenerator_ActorsOfClass::GenerateOnlyActorsInRadius' has a wrong offset!");
static_assert(offsetof(UEnvQueryGenerator_ActorsOfClass, SearchRadius) == 0x000090, "Member 'UEnvQueryGenerator_ActorsOfClass::SearchRadius' has a wrong offset!");
static_assert(offsetof(UEnvQueryGenerator_ActorsOfClass, SearchCenter) == 0x0000C8, "Member 'UEnvQueryGenerator_ActorsOfClass::SearchCenter' has a wrong offset!");

class UEnvQueryGenerator_BlueprintBase final : public UEnvQueryGenerator
{
public:
	class FText                                   GeneratorsActionDescription;
	TSubclassOf<class UEnvQueryContext>           Context;
	TSubclassOf<class UEnvQueryItemType>          GeneratedItemType;
	uint8                                         Pad_78[0x10];

public:
	void AddGeneratedActor(class AActor* GeneratedActor) const;
	void AddGeneratedVector(const struct FVector& GeneratedVector) const;
	void DoItemGeneration(const TArray<struct FVector>& ContextLocations) const;
	void DoItemGenerationFromActors(const TArray<class AActor*>& ContextActors) const;
	class UObject* GetQuerier() const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"EnvQueryGenerator_BlueprintBase">();
	}
	static class UEnvQueryGenerator_BlueprintBase* GetDefaultObj()
	{
		return GetDefaultObjImpl<UEnvQueryGenerator_BlueprintBase>();
	}
};
static_assert(alignof(UEnvQueryGenerator_BlueprintBase) == 0x000008, "Wrong alignment on UEnvQueryGenerator_BlueprintBase");
static_assert(sizeof(UEnvQueryGenerator_BlueprintBase) == 0x000088, "Wrong size on UEnvQueryGenerator_BlueprintBase");
static_assert(offsetof(UEnvQueryGenerator_BlueprintBase, GeneratorsActionDescription) == 0x000050, "Member 'UEnvQueryGenerator_BlueprintBase::GeneratorsActionDescription' has a wrong offset!");
static_assert(offsetof(UEnvQueryGenerator_BlueprintBase, Context) == 0x000068, "Member 'UEnvQueryGenerator_BlueprintBase::Context' has a wrong offset!");
static_assert(offsetof(UEnvQueryGenerator_BlueprintBase, GeneratedItemType) == 0x000070, "Member 'UEnvQueryGenerator_BlueprintBase::GeneratedItemType' has a wrong offset!");

class UEnvQueryGenerator_Composite final : public UEnvQueryGenerator
{
public:
	TArray<class UEnvQueryGenerator*>             Generators;
	uint8                                         bAllowDifferentItemTypes : 1;
	uint8                                         bHasMatchingItemType : 1;
	uint8                                         Pad_61[0x7];
	TSubclassOf<class UEnvQueryItemType>          ForcedItemType;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"EnvQueryGenerator_Composite">();
	}
	static class UEnvQueryGenerator_Composite* GetDefaultObj()
	{
		return GetDefaultObjImpl<UEnvQueryGenerator_Composite>();
	}
};
static_assert(alignof(UEnvQueryGenerator_Composite) == 0x000008, "Wrong alignment on UEnvQueryGenerator_Composite");
static_assert(sizeof(UEnvQueryGenerator_Composite) == 0x000070, "Wrong size on UEnvQueryGenerator_Composite");
static_assert(offsetof(UEnvQueryGenerator_Composite, Generators) == 0x000050, "Member 'UEnvQueryGenerator_Composite::Generators' has a wrong offset!");
static_assert(offsetof(UEnvQueryGenerator_Composite, ForcedItemType) == 0x000068, "Member 'UEnvQueryGenerator_Composite::ForcedItemType' has a wrong offset!");

class UEnvQueryGenerator_Cone final : public UEnvQueryGenerator_ProjectedPoints
{
public:
	struct FAIDataProviderFloatValue              AlignedPointsDistance;
	struct FAIDataProviderFloatValue              ConeDegrees;
	struct FAIDataProviderFloatValue              AngleStep;
	struct FAIDataProviderFloatValue              Range;
	TSubclassOf<class UEnvQueryContext>           CenterActor;
	uint8                                         bIncludeContextLocation : 1;
	uint8                                         Pad_171[0x7];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"EnvQueryGenerator_Cone">();
	}
	static class UEnvQueryGenerator_Cone* GetDefaultObj()
	{
		return GetDefaultObjImpl<UEnvQueryGenerator_Cone>();
	}
};
static_assert(alignof(UEnvQueryGenerator_Cone) == 0x000008, "Wrong alignment on UEnvQueryGenerator_Cone");
static_assert(sizeof(UEnvQueryGenerator_Cone) == 0x000178, "Wrong size on UEnvQueryGenerator_Cone");
static_assert(offsetof(UEnvQueryGenerator_Cone, AlignedPointsDistance) == 0x000088, "Member 'UEnvQueryGenerator_Cone::AlignedPointsDistance' has a wrong offset!");
static_assert(offsetof(UEnvQueryGenerator_Cone, ConeDegrees) == 0x0000C0, "Member 'UEnvQueryGenerator_Cone::ConeDegrees' has a wrong offset!");
static_assert(offsetof(UEnvQueryGenerator_Cone, AngleStep) == 0x0000F8, "Member 'UEnvQueryGenerator_Cone::AngleStep' has a wrong offset!");
static_assert(offsetof(UEnvQueryGenerator_Cone, Range) == 0x000130, "Member 'UEnvQueryGenerator_Cone::Range' has a wrong offset!");
static_assert(offsetof(UEnvQueryGenerator_Cone, CenterActor) == 0x000168, "Member 'UEnvQueryGenerator_Cone::CenterActor' has a wrong offset!");

class UEnvQueryGenerator_CurrentLocation final : public UEnvQueryGenerator
{
public:
	TSubclassOf<class UEnvQueryContext>           QueryContext;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"EnvQueryGenerator_CurrentLocation">();
	}
	static class UEnvQueryGenerator_CurrentLocation* GetDefaultObj()
	{
		return GetDefaultObjImpl<UEnvQueryGenerator_CurrentLocation>();
	}
};
static_assert(alignof(UEnvQueryGenerator_CurrentLocation) == 0x000008, "Wrong alignment on UEnvQueryGenerator_CurrentLocation");
static_assert(sizeof(UEnvQueryGenerator_CurrentLocation) == 0x000058, "Wrong size on UEnvQueryGenerator_CurrentLocation");
static_assert(offsetof(UEnvQueryGenerator_CurrentLocation, QueryContext) == 0x000050, "Member 'UEnvQueryGenerator_CurrentLocation::QueryContext' has a wrong offset!");

class UEnvQueryGenerator_Donut final : public UEnvQueryGenerator_ProjectedPoints
{
public:
	struct FAIDataProviderFloatValue              InnerRadius;
	struct FAIDataProviderFloatValue              OuterRadius;
	struct FAIDataProviderIntValue                NumberOfRings;
	struct FAIDataProviderIntValue                PointsPerRing;
	struct FEnvDirection                          ArcDirection;
	struct FAIDataProviderFloatValue              ArcAngle;
	bool                                          bUseSpiralPattern;
	uint8                                         Pad_1C1[0x7];
	TSubclassOf<class UEnvQueryContext>           Center;
	uint8                                         bDefineArc : 1;
	uint8                                         Pad_1D1[0x7];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"EnvQueryGenerator_Donut">();
	}
	static class UEnvQueryGenerator_Donut* GetDefaultObj()
	{
		return GetDefaultObjImpl<UEnvQueryGenerator_Donut>();
	}
};
static_assert(alignof(UEnvQueryGenerator_Donut) == 0x000008, "Wrong alignment on UEnvQueryGenerator_Donut");
static_assert(sizeof(UEnvQueryGenerator_Donut) == 0x0001D8, "Wrong size on UEnvQueryGenerator_Donut");
static_assert(offsetof(UEnvQueryGenerator_Donut, InnerRadius) == 0x000088, "Member 'UEnvQueryGenerator_Donut::InnerRadius' has a wrong offset!");
static_assert(offsetof(UEnvQueryGenerator_Donut, OuterRadius) == 0x0000C0, "Member 'UEnvQueryGenerator_Donut::OuterRadius' has a wrong offset!");
static_assert(offsetof(UEnvQueryGenerator_Donut, NumberOfRings) == 0x0000F8, "Member 'UEnvQueryGenerator_Donut::NumberOfRings' has a wrong offset!");
static_assert(offsetof(UEnvQueryGenerator_Donut, PointsPerRing) == 0x000130, "Member 'UEnvQueryGenerator_Donut::PointsPerRing' has a wrong offset!");
static_assert(offsetof(UEnvQueryGenerator_Donut, ArcDirection) == 0x000168, "Member 'UEnvQueryGenerator_Donut::ArcDirection' has a wrong offset!");
static_assert(offsetof(UEnvQueryGenerator_Donut, ArcAngle) == 0x000188, "Member 'UEnvQueryGenerator_Donut::ArcAngle' has a wrong offset!");
static_assert(offsetof(UEnvQueryGenerator_Donut, bUseSpiralPattern) == 0x0001C0, "Member 'UEnvQueryGenerator_Donut::bUseSpiralPattern' has a wrong offset!");
static_assert(offsetof(UEnvQueryGenerator_Donut, Center) == 0x0001C8, "Member 'UEnvQueryGenerator_Donut::Center' has a wrong offset!");

class UEnvQueryGenerator_OnCircle : public UEnvQueryGenerator_ProjectedPoints
{
public:
	struct FAIDataProviderFloatValue              CircleRadius;
	struct FAIDataProviderFloatValue              SpaceBetween;
	struct FAIDataProviderIntValue                NumberOfPoints;
	EPointOnCircleSpacingMethod                   PointOnCircleSpacingMethod;
	uint8                                         Pad_131[0x7];
	struct FEnvDirection                          ArcDirection;
	struct FAIDataProviderFloatValue              ArcAngle;
	float                                         AngleRadians;
	uint8                                         Pad_194[0x4];
	TSubclassOf<class UEnvQueryContext>           CircleCenter;
	bool                                          bIgnoreAnyContextActorsWhenGeneratingCircle;
	uint8                                         Pad_1A1[0x7];
	struct FAIDataProviderFloatValue              CircleCenterZOffset;
	struct FEnvTraceData                          TraceData;
	uint8                                         bDefineArc : 1;
	uint8                                         Pad_219[0x7];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"EnvQueryGenerator_OnCircle">();
	}
	static class UEnvQueryGenerator_OnCircle* GetDefaultObj()
	{
		return GetDefaultObjImpl<UEnvQueryGenerator_OnCircle>();
	}
};
static_assert(alignof(UEnvQueryGenerator_OnCircle) == 0x000008, "Wrong alignment on UEnvQueryGenerator_OnCircle");
static_assert(sizeof(UEnvQueryGenerator_OnCircle) == 0x000220, "Wrong size on UEnvQueryGenerator_OnCircle");
static_assert(offsetof(UEnvQueryGenerator_OnCircle, CircleRadius) == 0x000088, "Member 'UEnvQueryGenerator_OnCircle::CircleRadius' has a wrong offset!");
static_assert(offsetof(UEnvQueryGenerator_OnCircle, SpaceBetween) == 0x0000C0, "Member 'UEnvQueryGenerator_OnCircle::SpaceBetween' has a wrong offset!");
static_assert(offsetof(UEnvQueryGenerator_OnCircle, NumberOfPoints) == 0x0000F8, "Member 'UEnvQueryGenerator_OnCircle::NumberOfPoints' has a wrong offset!");
static_assert(offsetof(UEnvQueryGenerator_OnCircle, PointOnCircleSpacingMethod) == 0x000130, "Member 'UEnvQueryGenerator_OnCircle::PointOnCircleSpacingMethod' has a wrong offset!");
static_assert(offsetof(UEnvQueryGenerator_OnCircle, ArcDirection) == 0x000138, "Member 'UEnvQueryGenerator_OnCircle::ArcDirection' has a wrong offset!");
static_assert(offsetof(UEnvQueryGenerator_OnCircle, ArcAngle) == 0x000158, "Member 'UEnvQueryGenerator_OnCircle::ArcAngle' has a wrong offset!");
static_assert(offsetof(UEnvQueryGenerator_OnCircle, AngleRadians) == 0x000190, "Member 'UEnvQueryGenerator_OnCircle::AngleRadians' has a wrong offset!");
static_assert(offsetof(UEnvQueryGenerator_OnCircle, CircleCenter) == 0x000198, "Member 'UEnvQueryGenerator_OnCircle::CircleCenter' has a wrong offset!");
static_assert(offsetof(UEnvQueryGenerator_OnCircle, bIgnoreAnyContextActorsWhenGeneratingCircle) == 0x0001A0, "Member 'UEnvQueryGenerator_OnCircle::bIgnoreAnyContextActorsWhenGeneratingCircle' has a wrong offset!");
static_assert(offsetof(UEnvQueryGenerator_OnCircle, CircleCenterZOffset) == 0x0001A8, "Member 'UEnvQueryGenerator_OnCircle::CircleCenterZOffset' has a wrong offset!");
static_assert(offsetof(UEnvQueryGenerator_OnCircle, TraceData) == 0x0001E0, "Member 'UEnvQueryGenerator_OnCircle::TraceData' has a wrong offset!");

class UEnvQueryGenerator_SimpleGrid : public UEnvQueryGenerator_ProjectedPoints
{
public:
	struct FAIDataProviderFloatValue              GridSize;
	struct FAIDataProviderFloatValue              SpaceBetween;
	TSubclassOf<class UEnvQueryContext>           GenerateAround;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"EnvQueryGenerator_SimpleGrid">();
	}
	static class UEnvQueryGenerator_SimpleGrid* GetDefaultObj()
	{
		return GetDefaultObjImpl<UEnvQueryGenerator_SimpleGrid>();
	}
};
static_assert(alignof(UEnvQueryGenerator_SimpleGrid) == 0x000008, "Wrong alignment on UEnvQueryGenerator_SimpleGrid");
static_assert(sizeof(UEnvQueryGenerator_SimpleGrid) == 0x000100, "Wrong size on UEnvQueryGenerator_SimpleGrid");
static_assert(offsetof(UEnvQueryGenerator_SimpleGrid, GridSize) == 0x000088, "Member 'UEnvQueryGenerator_SimpleGrid::GridSize' has a wrong offset!");
static_assert(offsetof(UEnvQueryGenerator_SimpleGrid, SpaceBetween) == 0x0000C0, "Member 'UEnvQueryGenerator_SimpleGrid::SpaceBetween' has a wrong offset!");
static_assert(offsetof(UEnvQueryGenerator_SimpleGrid, GenerateAround) == 0x0000F8, "Member 'UEnvQueryGenerator_SimpleGrid::GenerateAround' has a wrong offset!");

class UEnvQueryGenerator_PathingGrid final : public UEnvQueryGenerator_SimpleGrid
{
public:
	struct FAIDataProviderBoolValue               PathToItem;
	TSubclassOf<class UNavigationQueryFilter>     NavigationFilter;
	struct FAIDataProviderFloatValue              ScanRangeMultiplier;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"EnvQueryGenerator_PathingGrid">();
	}
	static class UEnvQueryGenerator_PathingGrid* GetDefaultObj()
	{
		return GetDefaultObjImpl<UEnvQueryGenerator_PathingGrid>();
	}
};
static_assert(alignof(UEnvQueryGenerator_PathingGrid) == 0x000008, "Wrong alignment on UEnvQueryGenerator_PathingGrid");
static_assert(sizeof(UEnvQueryGenerator_PathingGrid) == 0x000178, "Wrong size on UEnvQueryGenerator_PathingGrid");
static_assert(offsetof(UEnvQueryGenerator_PathingGrid, PathToItem) == 0x000100, "Member 'UEnvQueryGenerator_PathingGrid::PathToItem' has a wrong offset!");
static_assert(offsetof(UEnvQueryGenerator_PathingGrid, NavigationFilter) == 0x000138, "Member 'UEnvQueryGenerator_PathingGrid::NavigationFilter' has a wrong offset!");
static_assert(offsetof(UEnvQueryGenerator_PathingGrid, ScanRangeMultiplier) == 0x000140, "Member 'UEnvQueryGenerator_PathingGrid::ScanRangeMultiplier' has a wrong offset!");

class UEnvQueryGenerator_PerceivedActors final : public UEnvQueryGenerator
{
public:
	TSubclassOf<class AActor>                     AllowedActorClass;
	struct FAIDataProviderFloatValue              SearchRadius;
	TSubclassOf<class UEnvQueryContext>           ListenerContext;
	TSubclassOf<class UAISense>                   SenseToUse;
	bool                                          bIncludeKnownActors;
	uint8                                         Pad_A1[0x7];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"EnvQueryGenerator_PerceivedActors">();
	}
	static class UEnvQueryGenerator_PerceivedActors* GetDefaultObj()
	{
		return GetDefaultObjImpl<UEnvQueryGenerator_PerceivedActors>();
	}
};
static_assert(alignof(UEnvQueryGenerator_PerceivedActors) == 0x000008, "Wrong alignment on UEnvQueryGenerator_PerceivedActors");
static_assert(sizeof(UEnvQueryGenerator_PerceivedActors) == 0x0000A8, "Wrong size on UEnvQueryGenerator_PerceivedActors");
static_assert(offsetof(UEnvQueryGenerator_PerceivedActors, AllowedActorClass) == 0x000050, "Member 'UEnvQueryGenerator_PerceivedActors::AllowedActorClass' has a wrong offset!");
static_assert(offsetof(UEnvQueryGenerator_PerceivedActors, SearchRadius) == 0x000058, "Member 'UEnvQueryGenerator_PerceivedActors::SearchRadius' has a wrong offset!");
static_assert(offsetof(UEnvQueryGenerator_PerceivedActors, ListenerContext) == 0x000090, "Member 'UEnvQueryGenerator_PerceivedActors::ListenerContext' has a wrong offset!");
static_assert(offsetof(UEnvQueryGenerator_PerceivedActors, SenseToUse) == 0x000098, "Member 'UEnvQueryGenerator_PerceivedActors::SenseToUse' has a wrong offset!");
static_assert(offsetof(UEnvQueryGenerator_PerceivedActors, bIncludeKnownActors) == 0x0000A0, "Member 'UEnvQueryGenerator_PerceivedActors::bIncludeKnownActors' has a wrong offset!");

class UEnvQueryItemType : public UObject
{
public:
	uint8                                         Pad_28[0x8];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"EnvQueryItemType">();
	}
	static class UEnvQueryItemType* GetDefaultObj()
	{
		return GetDefaultObjImpl<UEnvQueryItemType>();
	}
};
static_assert(alignof(UEnvQueryItemType) == 0x000008, "Wrong alignment on UEnvQueryItemType");
static_assert(sizeof(UEnvQueryItemType) == 0x000030, "Wrong size on UEnvQueryItemType");

class UEnvQueryItemType_VectorBase : public UEnvQueryItemType
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"EnvQueryItemType_VectorBase">();
	}
	static class UEnvQueryItemType_VectorBase* GetDefaultObj()
	{
		return GetDefaultObjImpl<UEnvQueryItemType_VectorBase>();
	}
};
static_assert(alignof(UEnvQueryItemType_VectorBase) == 0x000008, "Wrong alignment on UEnvQueryItemType_VectorBase");
static_assert(sizeof(UEnvQueryItemType_VectorBase) == 0x000030, "Wrong size on UEnvQueryItemType_VectorBase");

class UEnvQueryItemType_ActorBase : public UEnvQueryItemType_VectorBase
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"EnvQueryItemType_ActorBase">();
	}
	static class UEnvQueryItemType_ActorBase* GetDefaultObj()
	{
		return GetDefaultObjImpl<UEnvQueryItemType_ActorBase>();
	}
};
static_assert(alignof(UEnvQueryItemType_ActorBase) == 0x000008, "Wrong alignment on UEnvQueryItemType_ActorBase");
static_assert(sizeof(UEnvQueryItemType_ActorBase) == 0x000030, "Wrong size on UEnvQueryItemType_ActorBase");

class UEnvQueryItemType_Actor final : public UEnvQueryItemType_ActorBase
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"EnvQueryItemType_Actor">();
	}
	static class UEnvQueryItemType_Actor* GetDefaultObj()
	{
		return GetDefaultObjImpl<UEnvQueryItemType_Actor>();
	}
};
static_assert(alignof(UEnvQueryItemType_Actor) == 0x000008, "Wrong alignment on UEnvQueryItemType_Actor");
static_assert(sizeof(UEnvQueryItemType_Actor) == 0x000030, "Wrong size on UEnvQueryItemType_Actor");

class UEnvQueryItemType_Direction final : public UEnvQueryItemType_VectorBase
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"EnvQueryItemType_Direction">();
	}
	static class UEnvQueryItemType_Direction* GetDefaultObj()
	{
		return GetDefaultObjImpl<UEnvQueryItemType_Direction>();
	}
};
static_assert(alignof(UEnvQueryItemType_Direction) == 0x000008, "Wrong alignment on UEnvQueryItemType_Direction");
static_assert(sizeof(UEnvQueryItemType_Direction) == 0x000030, "Wrong size on UEnvQueryItemType_Direction");

class UEnvQueryItemType_Point : public UEnvQueryItemType_VectorBase
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"EnvQueryItemType_Point">();
	}
	static class UEnvQueryItemType_Point* GetDefaultObj()
	{
		return GetDefaultObjImpl<UEnvQueryItemType_Point>();
	}
};
static_assert(alignof(UEnvQueryItemType_Point) == 0x000008, "Wrong alignment on UEnvQueryItemType_Point");
static_assert(sizeof(UEnvQueryItemType_Point) == 0x000030, "Wrong size on UEnvQueryItemType_Point");

class UEnvQueryTest_Distance final : public UEnvQueryTest
{
public:
	EEnvTestDistance                              TestMode;
	uint8                                         Pad_1F9[0x7];
	TSubclassOf<class UEnvQueryContext>           DistanceTo;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"EnvQueryTest_Distance">();
	}
	static class UEnvQueryTest_Distance* GetDefaultObj()
	{
		return GetDefaultObjImpl<UEnvQueryTest_Distance>();
	}
};
static_assert(alignof(UEnvQueryTest_Distance) == 0x000008, "Wrong alignment on UEnvQueryTest_Distance");
static_assert(sizeof(UEnvQueryTest_Distance) == 0x000208, "Wrong size on UEnvQueryTest_Distance");
static_assert(offsetof(UEnvQueryTest_Distance, TestMode) == 0x0001F8, "Member 'UEnvQueryTest_Distance::TestMode' has a wrong offset!");
static_assert(offsetof(UEnvQueryTest_Distance, DistanceTo) == 0x000200, "Member 'UEnvQueryTest_Distance::DistanceTo' has a wrong offset!");

class UEnvQueryTest_Dot final : public UEnvQueryTest
{
public:
	struct FEnvDirection                          LineA;
	struct FEnvDirection                          LineB;
	EEnvTestDot                                   TestMode;
	bool                                          bAbsoluteValue;
	uint8                                         Pad_23A[0x6];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"EnvQueryTest_Dot">();
	}
	static class UEnvQueryTest_Dot* GetDefaultObj()
	{
		return GetDefaultObjImpl<UEnvQueryTest_Dot>();
	}
};
static_assert(alignof(UEnvQueryTest_Dot) == 0x000008, "Wrong alignment on UEnvQueryTest_Dot");
static_assert(sizeof(UEnvQueryTest_Dot) == 0x000240, "Wrong size on UEnvQueryTest_Dot");
static_assert(offsetof(UEnvQueryTest_Dot, LineA) == 0x0001F8, "Member 'UEnvQueryTest_Dot::LineA' has a wrong offset!");
static_assert(offsetof(UEnvQueryTest_Dot, LineB) == 0x000218, "Member 'UEnvQueryTest_Dot::LineB' has a wrong offset!");
static_assert(offsetof(UEnvQueryTest_Dot, TestMode) == 0x000238, "Member 'UEnvQueryTest_Dot::TestMode' has a wrong offset!");
static_assert(offsetof(UEnvQueryTest_Dot, bAbsoluteValue) == 0x000239, "Member 'UEnvQueryTest_Dot::bAbsoluteValue' has a wrong offset!");

class UEnvQueryTest_GameplayTags final : public UEnvQueryTest
{
public:
	struct FGameplayTagQuery                      TagQueryToMatch;
	bool                                          bRejectIncompatibleItems;
	bool                                          bUpdatedToUseQuery;
	EGameplayContainerMatchType                   TagsToMatch;
	uint8                                         Pad_243[0x5];
	struct FGameplayTagContainer                  GameplayTags;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"EnvQueryTest_GameplayTags">();
	}
	static class UEnvQueryTest_GameplayTags* GetDefaultObj()
	{
		return GetDefaultObjImpl<UEnvQueryTest_GameplayTags>();
	}
};
static_assert(alignof(UEnvQueryTest_GameplayTags) == 0x000008, "Wrong alignment on UEnvQueryTest_GameplayTags");
static_assert(sizeof(UEnvQueryTest_GameplayTags) == 0x000268, "Wrong size on UEnvQueryTest_GameplayTags");
static_assert(offsetof(UEnvQueryTest_GameplayTags, TagQueryToMatch) == 0x0001F8, "Member 'UEnvQueryTest_GameplayTags::TagQueryToMatch' has a wrong offset!");
static_assert(offsetof(UEnvQueryTest_GameplayTags, bRejectIncompatibleItems) == 0x000240, "Member 'UEnvQueryTest_GameplayTags::bRejectIncompatibleItems' has a wrong offset!");
static_assert(offsetof(UEnvQueryTest_GameplayTags, bUpdatedToUseQuery) == 0x000241, "Member 'UEnvQueryTest_GameplayTags::bUpdatedToUseQuery' has a wrong offset!");
static_assert(offsetof(UEnvQueryTest_GameplayTags, TagsToMatch) == 0x000242, "Member 'UEnvQueryTest_GameplayTags::TagsToMatch' has a wrong offset!");
static_assert(offsetof(UEnvQueryTest_GameplayTags, GameplayTags) == 0x000248, "Member 'UEnvQueryTest_GameplayTags::GameplayTags' has a wrong offset!");

class UEnvQueryTest_Overlap final : public UEnvQueryTest
{
public:
	struct FEnvOverlapData                        OverlapData;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"EnvQueryTest_Overlap">();
	}
	static class UEnvQueryTest_Overlap* GetDefaultObj()
	{
		return GetDefaultObjImpl<UEnvQueryTest_Overlap>();
	}
};
static_assert(alignof(UEnvQueryTest_Overlap) == 0x000008, "Wrong alignment on UEnvQueryTest_Overlap");
static_assert(sizeof(UEnvQueryTest_Overlap) == 0x000228, "Wrong size on UEnvQueryTest_Overlap");
static_assert(offsetof(UEnvQueryTest_Overlap, OverlapData) == 0x0001F8, "Member 'UEnvQueryTest_Overlap::OverlapData' has a wrong offset!");

class UEnvQueryTest_Pathfinding : public UEnvQueryTest
{
public:
	EEnvTestPathfinding                           TestMode;
	uint8                                         Pad_1F9[0x7];
	TSubclassOf<class UEnvQueryContext>           Context;
	struct FAIDataProviderBoolValue               PathFromContext;
	struct FAIDataProviderBoolValue               SkipUnreachable;
	TSubclassOf<class UNavigationQueryFilter>     FilterClass;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"EnvQueryTest_Pathfinding">();
	}
	static class UEnvQueryTest_Pathfinding* GetDefaultObj()
	{
		return GetDefaultObjImpl<UEnvQueryTest_Pathfinding>();
	}
};
static_assert(alignof(UEnvQueryTest_Pathfinding) == 0x000008, "Wrong alignment on UEnvQueryTest_Pathfinding");
static_assert(sizeof(UEnvQueryTest_Pathfinding) == 0x000280, "Wrong size on UEnvQueryTest_Pathfinding");
static_assert(offsetof(UEnvQueryTest_Pathfinding, TestMode) == 0x0001F8, "Member 'UEnvQueryTest_Pathfinding::TestMode' has a wrong offset!");
static_assert(offsetof(UEnvQueryTest_Pathfinding, Context) == 0x000200, "Member 'UEnvQueryTest_Pathfinding::Context' has a wrong offset!");
static_assert(offsetof(UEnvQueryTest_Pathfinding, PathFromContext) == 0x000208, "Member 'UEnvQueryTest_Pathfinding::PathFromContext' has a wrong offset!");
static_assert(offsetof(UEnvQueryTest_Pathfinding, SkipUnreachable) == 0x000240, "Member 'UEnvQueryTest_Pathfinding::SkipUnreachable' has a wrong offset!");
static_assert(offsetof(UEnvQueryTest_Pathfinding, FilterClass) == 0x000278, "Member 'UEnvQueryTest_Pathfinding::FilterClass' has a wrong offset!");

class UEnvQueryTest_PathfindingBatch : public UEnvQueryTest_Pathfinding
{
public:
	struct FAIDataProviderFloatValue              ScanRangeMultiplier;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"EnvQueryTest_PathfindingBatch">();
	}
	static class UEnvQueryTest_PathfindingBatch* GetDefaultObj()
	{
		return GetDefaultObjImpl<UEnvQueryTest_PathfindingBatch>();
	}
};
static_assert(alignof(UEnvQueryTest_PathfindingBatch) == 0x000008, "Wrong alignment on UEnvQueryTest_PathfindingBatch");
static_assert(sizeof(UEnvQueryTest_PathfindingBatch) == 0x0002B8, "Wrong size on UEnvQueryTest_PathfindingBatch");
static_assert(offsetof(UEnvQueryTest_PathfindingBatch, ScanRangeMultiplier) == 0x000280, "Member 'UEnvQueryTest_PathfindingBatch::ScanRangeMultiplier' has a wrong offset!");

class UEnvQueryTest_Project final : public UEnvQueryTest
{
public:
	struct FEnvTraceData                          ProjectionData;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"EnvQueryTest_Project">();
	}
	static class UEnvQueryTest_Project* GetDefaultObj()
	{
		return GetDefaultObjImpl<UEnvQueryTest_Project>();
	}
};
static_assert(alignof(UEnvQueryTest_Project) == 0x000008, "Wrong alignment on UEnvQueryTest_Project");
static_assert(sizeof(UEnvQueryTest_Project) == 0x000230, "Wrong size on UEnvQueryTest_Project");
static_assert(offsetof(UEnvQueryTest_Project, ProjectionData) == 0x0001F8, "Member 'UEnvQueryTest_Project::ProjectionData' has a wrong offset!");

class UEnvQueryTest_Random final : public UEnvQueryTest
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"EnvQueryTest_Random">();
	}
	static class UEnvQueryTest_Random* GetDefaultObj()
	{
		return GetDefaultObjImpl<UEnvQueryTest_Random>();
	}
};
static_assert(alignof(UEnvQueryTest_Random) == 0x000008, "Wrong alignment on UEnvQueryTest_Random");
static_assert(sizeof(UEnvQueryTest_Random) == 0x0001F8, "Wrong size on UEnvQueryTest_Random");

class UEnvQueryTest_Trace : public UEnvQueryTest
{
public:
	struct FEnvTraceData                          TraceData;
	struct FAIDataProviderBoolValue               TraceFromContext;
	struct FAIDataProviderFloatValue              ItemHeightOffset;
	struct FAIDataProviderFloatValue              ContextHeightOffset;
	TSubclassOf<class UEnvQueryContext>           Context;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"EnvQueryTest_Trace">();
	}
	static class UEnvQueryTest_Trace* GetDefaultObj()
	{
		return GetDefaultObjImpl<UEnvQueryTest_Trace>();
	}
};
static_assert(alignof(UEnvQueryTest_Trace) == 0x000008, "Wrong alignment on UEnvQueryTest_Trace");
static_assert(sizeof(UEnvQueryTest_Trace) == 0x0002E0, "Wrong size on UEnvQueryTest_Trace");
static_assert(offsetof(UEnvQueryTest_Trace, TraceData) == 0x0001F8, "Member 'UEnvQueryTest_Trace::TraceData' has a wrong offset!");
static_assert(offsetof(UEnvQueryTest_Trace, TraceFromContext) == 0x000230, "Member 'UEnvQueryTest_Trace::TraceFromContext' has a wrong offset!");
static_assert(offsetof(UEnvQueryTest_Trace, ItemHeightOffset) == 0x000268, "Member 'UEnvQueryTest_Trace::ItemHeightOffset' has a wrong offset!");
static_assert(offsetof(UEnvQueryTest_Trace, ContextHeightOffset) == 0x0002A0, "Member 'UEnvQueryTest_Trace::ContextHeightOffset' has a wrong offset!");
static_assert(offsetof(UEnvQueryTest_Trace, Context) == 0x0002D8, "Member 'UEnvQueryTest_Trace::Context' has a wrong offset!");

class UEnvQueryTest_Volume final : public UEnvQueryTest
{
public:
	TSubclassOf<class UEnvQueryContext>           VolumeContext;
	TSubclassOf<class AVolume>                    VolumeClass;
	uint8                                         bDoComplexVolumeTest : 1;
	uint8                                         bSkipTestIfNoVolumes : 1;
	uint8                                         Pad_209[0x7];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"EnvQueryTest_Volume">();
	}
	static class UEnvQueryTest_Volume* GetDefaultObj()
	{
		return GetDefaultObjImpl<UEnvQueryTest_Volume>();
	}
};
static_assert(alignof(UEnvQueryTest_Volume) == 0x000008, "Wrong alignment on UEnvQueryTest_Volume");
static_assert(sizeof(UEnvQueryTest_Volume) == 0x000210, "Wrong size on UEnvQueryTest_Volume");
static_assert(offsetof(UEnvQueryTest_Volume, VolumeContext) == 0x0001F8, "Member 'UEnvQueryTest_Volume::VolumeContext' has a wrong offset!");
static_assert(offsetof(UEnvQueryTest_Volume, VolumeClass) == 0x000200, "Member 'UEnvQueryTest_Volume::VolumeClass' has a wrong offset!");

class AGridPathAIController final : public AAIController
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"GridPathAIController">();
	}
	static class AGridPathAIController* GetDefaultObj()
	{
		return GetDefaultObjImpl<AGridPathAIController>();
	}
};
static_assert(alignof(AGridPathAIController) == 0x000008, "Wrong alignment on AGridPathAIController");
static_assert(sizeof(AGridPathAIController) == 0x0003B0, "Wrong size on AGridPathAIController");

class UAIHotSpotManager : public UObject
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"AIHotSpotManager">();
	}
	static class UAIHotSpotManager* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAIHotSpotManager>();
	}
};
static_assert(alignof(UAIHotSpotManager) == 0x000008, "Wrong alignment on UAIHotSpotManager");
static_assert(sizeof(UAIHotSpotManager) == 0x000028, "Wrong size on UAIHotSpotManager");

class UPathFollowingComponent : public UActorComponent
{
public:
	uint8                                         Pad_A0[0x38];
	class UNavMovementComponent*                  MovementComp;
	uint8                                         Pad_E0[0x8];
	class ANavigationData*                        MyNavData;
	uint8                                         Pad_F0[0x1C8];

public:
	void OnActorBump(class AActor* SelfActor, class AActor* OtherActor, const struct FVector& NormalImpulse, const struct FHitResult& Hit);
	void OnNavDataRegistered(class ANavigationData* NavData);

	EPathFollowingAction GetPathActionType() const;
	struct FVector GetPathDestination() const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PathFollowingComponent">();
	}
	static class UPathFollowingComponent* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPathFollowingComponent>();
	}
};
static_assert(alignof(UPathFollowingComponent) == 0x000008, "Wrong alignment on UPathFollowingComponent");
static_assert(sizeof(UPathFollowingComponent) == 0x0002B8, "Wrong size on UPathFollowingComponent");
static_assert(offsetof(UPathFollowingComponent, MovementComp) == 0x0000D8, "Member 'UPathFollowingComponent::MovementComp' has a wrong offset!");
static_assert(offsetof(UPathFollowingComponent, MyNavData) == 0x0000E8, "Member 'UPathFollowingComponent::MyNavData' has a wrong offset!");

class UCrowdFollowingComponent : public UPathFollowingComponent
{
public:
	uint8                                         Pad_2B8[0x18];
	struct FVector                                CrowdAgentMoveDirection;
	uint8                                         Pad_2E8[0x20];

public:
	void SuspendCrowdSteering(bool bSuspend);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"CrowdFollowingComponent">();
	}
	static class UCrowdFollowingComponent* GetDefaultObj()
	{
		return GetDefaultObjImpl<UCrowdFollowingComponent>();
	}
};
static_assert(alignof(UCrowdFollowingComponent) == 0x000008, "Wrong alignment on UCrowdFollowingComponent");
static_assert(sizeof(UCrowdFollowingComponent) == 0x000308, "Wrong size on UCrowdFollowingComponent");
static_assert(offsetof(UCrowdFollowingComponent, CrowdAgentMoveDirection) == 0x0002D0, "Member 'UCrowdFollowingComponent::CrowdAgentMoveDirection' has a wrong offset!");

class UCrowdManager : public UCrowdManagerBase
{
public:
	class ANavigationData*                        MyNavData;
	TArray<struct FCrowdAvoidanceConfig>          AvoidanceConfig;
	TArray<struct FCrowdAvoidanceSamplingPattern> SamplingPatterns;
	int32                                         MaxAgents;
	float                                         MaxAgentRadius;
	int32                                         MaxAvoidedAgents;
	int32                                         MaxAvoidedWalls;
	float                                         NavmeshCheckInterval;
	float                                         PathOptimizationInterval;
	float                                         SeparationDirClamp;
	float                                         PathOffsetRadiusMultiplier;
	uint8                                         BitPad_70_0 : 4;
	uint8                                         bResolveCollisions : 1;
	uint8                                         Pad_71[0x7F];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"CrowdManager">();
	}
	static class UCrowdManager* GetDefaultObj()
	{
		return GetDefaultObjImpl<UCrowdManager>();
	}
};
static_assert(alignof(UCrowdManager) == 0x000008, "Wrong alignment on UCrowdManager");
static_assert(sizeof(UCrowdManager) == 0x0000F0, "Wrong size on UCrowdManager");
static_assert(offsetof(UCrowdManager, MyNavData) == 0x000028, "Member 'UCrowdManager::MyNavData' has a wrong offset!");
static_assert(offsetof(UCrowdManager, AvoidanceConfig) == 0x000030, "Member 'UCrowdManager::AvoidanceConfig' has a wrong offset!");
static_assert(offsetof(UCrowdManager, SamplingPatterns) == 0x000040, "Member 'UCrowdManager::SamplingPatterns' has a wrong offset!");
static_assert(offsetof(UCrowdManager, MaxAgents) == 0x000050, "Member 'UCrowdManager::MaxAgents' has a wrong offset!");
static_assert(offsetof(UCrowdManager, MaxAgentRadius) == 0x000054, "Member 'UCrowdManager::MaxAgentRadius' has a wrong offset!");
static_assert(offsetof(UCrowdManager, MaxAvoidedAgents) == 0x000058, "Member 'UCrowdManager::MaxAvoidedAgents' has a wrong offset!");
static_assert(offsetof(UCrowdManager, MaxAvoidedWalls) == 0x00005C, "Member 'UCrowdManager::MaxAvoidedWalls' has a wrong offset!");
static_assert(offsetof(UCrowdManager, NavmeshCheckInterval) == 0x000060, "Member 'UCrowdManager::NavmeshCheckInterval' has a wrong offset!");
static_assert(offsetof(UCrowdManager, PathOptimizationInterval) == 0x000064, "Member 'UCrowdManager::PathOptimizationInterval' has a wrong offset!");
static_assert(offsetof(UCrowdManager, SeparationDirClamp) == 0x000068, "Member 'UCrowdManager::SeparationDirClamp' has a wrong offset!");
static_assert(offsetof(UCrowdManager, PathOffsetRadiusMultiplier) == 0x00006C, "Member 'UCrowdManager::PathOffsetRadiusMultiplier' has a wrong offset!");

class UGridPathFollowingComponent final : public UPathFollowingComponent
{
public:
	class UNavLocalGridManager*                   GridManager;
	uint8                                         Pad_2C0[0x28];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"GridPathFollowingComponent">();
	}
	static class UGridPathFollowingComponent* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGridPathFollowingComponent>();
	}
};
static_assert(alignof(UGridPathFollowingComponent) == 0x000008, "Wrong alignment on UGridPathFollowingComponent");
static_assert(sizeof(UGridPathFollowingComponent) == 0x0002E8, "Wrong size on UGridPathFollowingComponent");
static_assert(offsetof(UGridPathFollowingComponent, GridManager) == 0x0002B8, "Member 'UGridPathFollowingComponent::GridManager' has a wrong offset!");

class UNavFilter_AIControllerDefault final : public UNavigationQueryFilter
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"NavFilter_AIControllerDefault">();
	}
	static class UNavFilter_AIControllerDefault* GetDefaultObj()
	{
		return GetDefaultObjImpl<UNavFilter_AIControllerDefault>();
	}
};
static_assert(alignof(UNavFilter_AIControllerDefault) == 0x000008, "Wrong alignment on UNavFilter_AIControllerDefault");
static_assert(sizeof(UNavFilter_AIControllerDefault) == 0x000048, "Wrong size on UNavFilter_AIControllerDefault");

class ANavLinkProxy : public AActor
{
public:
	uint8                                         Pad_288[0x10];
	TArray<struct FNavigationLink>                PointLinks;
	TArray<struct FNavigationSegmentLink>         SegmentLinks;
	class UNavLinkCustomComponent*                SmartLinkComp;
	bool                                          bSmartLinkIsRelevant;
	uint8                                         Pad_2C1[0x7];
	TMulticastInlineDelegate<void(class AActor* MovingActor, struct FVector& DestinationPoint)> OnSmartLinkReached;

public:
	void ReceiveSmartLinkReached(class AActor* Agent, const struct FVector& Destination);
	void ResumePathFollowing(class AActor* Agent);
	void SetSmartLinkEnabled(bool bEnabled);

	bool HasMovingAgents() const;
	bool IsSmartLinkEnabled() const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"NavLinkProxy">();
	}
	static class ANavLinkProxy* GetDefaultObj()
	{
		return GetDefaultObjImpl<ANavLinkProxy>();
	}
};
static_assert(alignof(ANavLinkProxy) == 0x000008, "Wrong alignment on ANavLinkProxy");
static_assert(sizeof(ANavLinkProxy) == 0x0002D8, "Wrong size on ANavLinkProxy");
static_assert(offsetof(ANavLinkProxy, PointLinks) == 0x000298, "Member 'ANavLinkProxy::PointLinks' has a wrong offset!");
static_assert(offsetof(ANavLinkProxy, SegmentLinks) == 0x0002A8, "Member 'ANavLinkProxy::SegmentLinks' has a wrong offset!");
static_assert(offsetof(ANavLinkProxy, SmartLinkComp) == 0x0002B8, "Member 'ANavLinkProxy::SmartLinkComp' has a wrong offset!");
static_assert(offsetof(ANavLinkProxy, bSmartLinkIsRelevant) == 0x0002C0, "Member 'ANavLinkProxy::bSmartLinkIsRelevant' has a wrong offset!");
static_assert(offsetof(ANavLinkProxy, OnSmartLinkReached) == 0x0002C8, "Member 'ANavLinkProxy::OnSmartLinkReached' has a wrong offset!");

class UNavLocalGridManager final : public UObject
{
public:
	uint8                                         Pad_28[0x30];

public:
	static int32 AddLocalNavigationGridForBox(class UObject* WorldContextObject, const struct FVector& Location, const struct FVector& Extent, const struct FRotator& Rotation, const int32 Radius2D, const float Height, bool bRebuildGrids);
	static int32 AddLocalNavigationGridForCapsule(class UObject* WorldContextObject, const struct FVector& Location, float CapsuleRadius, float CapsuleHalfHeight, const int32 Radius2D, const float Height, bool bRebuildGrids);
	static int32 AddLocalNavigationGridForPoint(class UObject* WorldContextObject, const struct FVector& Location, const int32 Radius2D, const float Height, bool bRebuildGrids);
	static int32 AddLocalNavigationGridForPoints(class UObject* WorldContextObject, const TArray<struct FVector>& Locations, const int32 Radius2D, const float Height, bool bRebuildGrids);
	static bool FindLocalNavigationGridPath(class UObject* WorldContextObject, const struct FVector& Start, const struct FVector& End, TArray<struct FVector>* PathPoints);
	static void RemoveLocalNavigationGrid(class UObject* WorldContextObject, int32 GridId, bool bRebuildGrids);
	static bool SetLocalNavigationGridDensity(class UObject* WorldContextObject, float CellSize);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"NavLocalGridManager">();
	}
	static class UNavLocalGridManager* GetDefaultObj()
	{
		return GetDefaultObjImpl<UNavLocalGridManager>();
	}
};
static_assert(alignof(UNavLocalGridManager) == 0x000008, "Wrong alignment on UNavLocalGridManager");
static_assert(sizeof(UNavLocalGridManager) == 0x000058, "Wrong size on UNavLocalGridManager");

class UPathFollowingManager final : public UObject
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PathFollowingManager">();
	}
	static class UPathFollowingManager* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPathFollowingManager>();
	}
};
static_assert(alignof(UPathFollowingManager) == 0x000008, "Wrong alignment on UPathFollowingManager");
static_assert(sizeof(UPathFollowingManager) == 0x000028, "Wrong size on UPathFollowingManager");

class UAIPerceptionComponent : public UActorComponent
{
public:
	TArray<class UAISenseConfig*>                 SensesConfig;
	TSubclassOf<class UAISense>                   DominantSense;
	uint8                                         Pad_B8[0x8];
	class AAIController*                          AIOwner;
	uint8                                         Pad_C8[0x80];
	TMulticastInlineDelegate<void(TArray<class AActor*>& UpdatedActors)> OnPerceptionUpdated;
	TMulticastInlineDelegate<void(class AActor* Actor, const struct FAIStimulus& Stimulus)> OnTargetPerceptionUpdated;
	TMulticastInlineDelegate<void(struct FActorPerceptionUpdateInfo& UpdateInfo)> OnTargetPerceptionInfoUpdated;

public:
	void ForgetAll();
	bool GetActorsPerception(class AActor* Actor, struct FActorPerceptionBlueprintInfo* Info);
	void OnOwnerEndPlay(class AActor* Actor, EEndPlayReason EndPlayReason);
	void RequestStimuliListenerUpdate();
	void SetSenseEnabled(TSubclassOf<class UAISense> SenseClass, const bool bEnable);

	void GetCurrentlyPerceivedActors(TSubclassOf<class UAISense> SenseToUse, TArray<class AActor*>* OutActors) const;
	void GetKnownPerceivedActors(TSubclassOf<class UAISense> SenseToUse, TArray<class AActor*>* OutActors) const;
	void GetPerceivedActors(TSubclassOf<class UAISense> SenseToUse, TArray<class AActor*>* OutActors) const;
	void GetPerceivedHostileActors(TArray<class AActor*>* OutActors) const;
	void GetPerceivedHostileActorsBySense(const TSubclassOf<class UAISense> SenseToUse, TArray<class AActor*>* OutActors) const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"AIPerceptionComponent">();
	}
	static class UAIPerceptionComponent* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAIPerceptionComponent>();
	}
};
static_assert(alignof(UAIPerceptionComponent) == 0x000008, "Wrong alignment on UAIPerceptionComponent");
static_assert(sizeof(UAIPerceptionComponent) == 0x000178, "Wrong size on UAIPerceptionComponent");
static_assert(offsetof(UAIPerceptionComponent, SensesConfig) == 0x0000A0, "Member 'UAIPerceptionComponent::SensesConfig' has a wrong offset!");
static_assert(offsetof(UAIPerceptionComponent, DominantSense) == 0x0000B0, "Member 'UAIPerceptionComponent::DominantSense' has a wrong offset!");
static_assert(offsetof(UAIPerceptionComponent, AIOwner) == 0x0000C0, "Member 'UAIPerceptionComponent::AIOwner' has a wrong offset!");
static_assert(offsetof(UAIPerceptionComponent, OnPerceptionUpdated) == 0x000148, "Member 'UAIPerceptionComponent::OnPerceptionUpdated' has a wrong offset!");
static_assert(offsetof(UAIPerceptionComponent, OnTargetPerceptionUpdated) == 0x000158, "Member 'UAIPerceptionComponent::OnTargetPerceptionUpdated' has a wrong offset!");
static_assert(offsetof(UAIPerceptionComponent, OnTargetPerceptionInfoUpdated) == 0x000168, "Member 'UAIPerceptionComponent::OnTargetPerceptionInfoUpdated' has a wrong offset!");

class IAIPerceptionListenerInterface final : public IInterface
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"AIPerceptionListenerInterface">();
	}
	static class IAIPerceptionListenerInterface* GetDefaultObj()
	{
		return GetDefaultObjImpl<IAIPerceptionListenerInterface>();
	}
};
static_assert(alignof(IAIPerceptionListenerInterface) == 0x000008, "Wrong alignment on IAIPerceptionListenerInterface");
static_assert(sizeof(IAIPerceptionListenerInterface) == 0x000028, "Wrong size on IAIPerceptionListenerInterface");

class UAIPerceptionStimuliSourceComponent : public UActorComponent
{
public:
	uint8                                         bAutoRegisterAsSource : 1;
	uint8                                         Pad_A1[0x7];
	TArray<TSubclassOf<class UAISense>>           RegisterAsSourceForSenses;

public:
	void RegisterForSense(TSubclassOf<class UAISense> SenseClass);
	void RegisterWithPerceptionSystem();
	void UnregisterFromPerceptionSystem();
	void UnregisterFromSense(TSubclassOf<class UAISense> SenseClass);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"AIPerceptionStimuliSourceComponent">();
	}
	static class UAIPerceptionStimuliSourceComponent* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAIPerceptionStimuliSourceComponent>();
	}
};
static_assert(alignof(UAIPerceptionStimuliSourceComponent) == 0x000008, "Wrong alignment on UAIPerceptionStimuliSourceComponent");
static_assert(sizeof(UAIPerceptionStimuliSourceComponent) == 0x0000B8, "Wrong size on UAIPerceptionStimuliSourceComponent");
static_assert(offsetof(UAIPerceptionStimuliSourceComponent, RegisterAsSourceForSenses) == 0x0000A8, "Member 'UAIPerceptionStimuliSourceComponent::RegisterAsSourceForSenses' has a wrong offset!");

class UAIPerceptionSystem : public UAISubsystem
{
public:
	uint8                                         Pad_38[0x50];
	TArray<class UAISense*>                       Senses;
	float                                         PerceptionAgingRate;
	uint8                                         Pad_9C[0x8C];

public:
	static TSubclassOf<class UAISense> GetSenseClassForStimulus(class UObject* WorldContextObject, const struct FAIStimulus& Stimulus);
	static bool RegisterPerceptionStimuliSource(class UObject* WorldContextObject, TSubclassOf<class UAISense> Sense, class AActor* Target);
	static void ReportPerceptionEvent(class UObject* WorldContextObject, class UAISenseEvent* PerceptionEvent);

	void OnPerceptionStimuliSourceEndPlay(class AActor* Actor, EEndPlayReason EndPlayReason);
	void ReportEvent(class UAISenseEvent* PerceptionEvent);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"AIPerceptionSystem">();
	}
	static class UAIPerceptionSystem* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAIPerceptionSystem>();
	}
};
static_assert(alignof(UAIPerceptionSystem) == 0x000008, "Wrong alignment on UAIPerceptionSystem");
static_assert(sizeof(UAIPerceptionSystem) == 0x000128, "Wrong size on UAIPerceptionSystem");
static_assert(offsetof(UAIPerceptionSystem, Senses) == 0x000088, "Member 'UAIPerceptionSystem::Senses' has a wrong offset!");
static_assert(offsetof(UAIPerceptionSystem, PerceptionAgingRate) == 0x000098, "Member 'UAIPerceptionSystem::PerceptionAgingRate' has a wrong offset!");

class UAISense : public UObject
{
public:
	float                                         DefaultExpirationAge;
	EAISenseNotifyType                            NotifyType;
	uint8                                         Pad_2D[0x3];
	uint8                                         bWantsNewPawnNotification : 1;
	uint8                                         bAutoRegisterAllPawnsAsSources : 1;
	uint8                                         Pad_31[0x7];
	class UAIPerceptionSystem*                    PerceptionSystemInstance;
	uint8                                         Pad_40[0x40];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"AISense">();
	}
	static class UAISense* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAISense>();
	}
};
static_assert(alignof(UAISense) == 0x000008, "Wrong alignment on UAISense");
static_assert(sizeof(UAISense) == 0x000080, "Wrong size on UAISense");
static_assert(offsetof(UAISense, DefaultExpirationAge) == 0x000028, "Member 'UAISense::DefaultExpirationAge' has a wrong offset!");
static_assert(offsetof(UAISense, NotifyType) == 0x00002C, "Member 'UAISense::NotifyType' has a wrong offset!");
static_assert(offsetof(UAISense, PerceptionSystemInstance) == 0x000038, "Member 'UAISense::PerceptionSystemInstance' has a wrong offset!");

class UAISenseConfig_Damage final : public UAISenseConfig
{
public:
	TSubclassOf<class UAISense_Damage>            Implementation;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"AISenseConfig_Damage">();
	}
	static class UAISenseConfig_Damage* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAISenseConfig_Damage>();
	}
};
static_assert(alignof(UAISenseConfig_Damage) == 0x000008, "Wrong alignment on UAISenseConfig_Damage");
static_assert(sizeof(UAISenseConfig_Damage) == 0x000050, "Wrong size on UAISenseConfig_Damage");
static_assert(offsetof(UAISenseConfig_Damage, Implementation) == 0x000048, "Member 'UAISenseConfig_Damage::Implementation' has a wrong offset!");

class UAISense_Blueprint final : public UAISense
{
public:
	TSubclassOf<class UUserDefinedStruct>         ListenerDataType;
	TArray<class UAIPerceptionComponent*>         ListenerContainer;
	TArray<class UAISenseEvent*>                  UnprocessedEvents;

public:
	void K2_OnNewPawn(class APawn* NewPawn);
	void OnListenerRegistered(class AActor* ActorListener, class UAIPerceptionComponent* PerceptionComponent);
	void OnListenerUnregistered(class AActor* ActorListener, class UAIPerceptionComponent* PerceptionComponent);
	void OnListenerUpdated(class AActor* ActorListener, class UAIPerceptionComponent* PerceptionComponent);
	float OnUpdate(const TArray<class UAISenseEvent*>& EventsToProcess);

	void GetAllListenerActors(TArray<class AActor*>* ListenerActors) const;
	void GetAllListenerComponents(TArray<class UAIPerceptionComponent*>* ListenerComponents) const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"AISense_Blueprint">();
	}
	static class UAISense_Blueprint* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAISense_Blueprint>();
	}
};
static_assert(alignof(UAISense_Blueprint) == 0x000008, "Wrong alignment on UAISense_Blueprint");
static_assert(sizeof(UAISense_Blueprint) == 0x0000A8, "Wrong size on UAISense_Blueprint");
static_assert(offsetof(UAISense_Blueprint, ListenerDataType) == 0x000080, "Member 'UAISense_Blueprint::ListenerDataType' has a wrong offset!");
static_assert(offsetof(UAISense_Blueprint, ListenerContainer) == 0x000088, "Member 'UAISense_Blueprint::ListenerContainer' has a wrong offset!");
static_assert(offsetof(UAISense_Blueprint, UnprocessedEvents) == 0x000098, "Member 'UAISense_Blueprint::UnprocessedEvents' has a wrong offset!");

class UAISense_Damage final : public UAISense
{
public:
	TArray<struct FAIDamageEvent>                 RegisteredEvents;

public:
	static void ReportDamageEvent(class UObject* WorldContextObject, class AActor* DamagedActor, class AActor* Instigator, float DamageAmount, const struct FVector& EventLocation, const struct FVector& HitLocation, class FName tag);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"AISense_Damage">();
	}
	static class UAISense_Damage* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAISense_Damage>();
	}
};
static_assert(alignof(UAISense_Damage) == 0x000008, "Wrong alignment on UAISense_Damage");
static_assert(sizeof(UAISense_Damage) == 0x000090, "Wrong size on UAISense_Damage");
static_assert(offsetof(UAISense_Damage, RegisteredEvents) == 0x000080, "Member 'UAISense_Damage::RegisteredEvents' has a wrong offset!");

class UAISense_Hearing : public UAISense
{
public:
	TArray<struct FAINoiseEvent>                  NoiseEvents;
	float                                         SpeedOfSoundSq;
	uint8                                         Pad_94[0x54];

public:
	static void ReportNoiseEvent(class UObject* WorldContextObject, const struct FVector& NoiseLocation, float Loudness, class AActor* Instigator, float MaxRange, class FName tag);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"AISense_Hearing">();
	}
	static class UAISense_Hearing* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAISense_Hearing>();
	}
};
static_assert(alignof(UAISense_Hearing) == 0x000008, "Wrong alignment on UAISense_Hearing");
static_assert(sizeof(UAISense_Hearing) == 0x0000E8, "Wrong size on UAISense_Hearing");
static_assert(offsetof(UAISense_Hearing, NoiseEvents) == 0x000080, "Member 'UAISense_Hearing::NoiseEvents' has a wrong offset!");
static_assert(offsetof(UAISense_Hearing, SpeedOfSoundSq) == 0x000090, "Member 'UAISense_Hearing::SpeedOfSoundSq' has a wrong offset!");

class UAISense_Prediction final : public UAISense
{
public:
	TArray<struct FAIPredictionEvent>             RegisteredEvents;

public:
	static void RequestControllerPredictionEvent(class AAIController* Requestor, class AActor* PredictedActor, float PredictionTime);
	static void RequestPawnPredictionEvent(class APawn* Requestor, class AActor* PredictedActor, float PredictionTime);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"AISense_Prediction">();
	}
	static class UAISense_Prediction* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAISense_Prediction>();
	}
};
static_assert(alignof(UAISense_Prediction) == 0x000008, "Wrong alignment on UAISense_Prediction");
static_assert(sizeof(UAISense_Prediction) == 0x000090, "Wrong size on UAISense_Prediction");
static_assert(offsetof(UAISense_Prediction, RegisteredEvents) == 0x000080, "Member 'UAISense_Prediction::RegisteredEvents' has a wrong offset!");

class UAISense_Sight final : public UAISense
{
public:
	uint8                                         Pad_80[0xD8];
	int32                                         MaxTracesPerTick;
	int32                                         MaxAsyncTracesPerTick;
	int32                                         MinQueriesPerTimeSliceCheck;
	uint8                                         Pad_164[0x4];
	double                                        MaxTimeSlicePerTick;
	float                                         HighImportanceQueryDistanceThreshold;
	uint8                                         Pad_174[0x4];
	float                                         MaxQueryImportance;
	float                                         SightLimitQueryImportance;
	float                                         PendingQueriesBudgetReductionRatio;
	bool                                          bUseAsynchronousTraceForDefaultSightQueries;
	uint8                                         Pad_185[0x2B];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"AISense_Sight">();
	}
	static class UAISense_Sight* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAISense_Sight>();
	}
};
static_assert(alignof(UAISense_Sight) == 0x000008, "Wrong alignment on UAISense_Sight");
static_assert(sizeof(UAISense_Sight) == 0x0001B0, "Wrong size on UAISense_Sight");
static_assert(offsetof(UAISense_Sight, MaxTracesPerTick) == 0x000158, "Member 'UAISense_Sight::MaxTracesPerTick' has a wrong offset!");
static_assert(offsetof(UAISense_Sight, MaxAsyncTracesPerTick) == 0x00015C, "Member 'UAISense_Sight::MaxAsyncTracesPerTick' has a wrong offset!");
static_assert(offsetof(UAISense_Sight, MinQueriesPerTimeSliceCheck) == 0x000160, "Member 'UAISense_Sight::MinQueriesPerTimeSliceCheck' has a wrong offset!");
static_assert(offsetof(UAISense_Sight, MaxTimeSlicePerTick) == 0x000168, "Member 'UAISense_Sight::MaxTimeSlicePerTick' has a wrong offset!");
static_assert(offsetof(UAISense_Sight, HighImportanceQueryDistanceThreshold) == 0x000170, "Member 'UAISense_Sight::HighImportanceQueryDistanceThreshold' has a wrong offset!");
static_assert(offsetof(UAISense_Sight, MaxQueryImportance) == 0x000178, "Member 'UAISense_Sight::MaxQueryImportance' has a wrong offset!");
static_assert(offsetof(UAISense_Sight, SightLimitQueryImportance) == 0x00017C, "Member 'UAISense_Sight::SightLimitQueryImportance' has a wrong offset!");
static_assert(offsetof(UAISense_Sight, PendingQueriesBudgetReductionRatio) == 0x000180, "Member 'UAISense_Sight::PendingQueriesBudgetReductionRatio' has a wrong offset!");
static_assert(offsetof(UAISense_Sight, bUseAsynchronousTraceForDefaultSightQueries) == 0x000184, "Member 'UAISense_Sight::bUseAsynchronousTraceForDefaultSightQueries' has a wrong offset!");

class UAISense_Team final : public UAISense
{
public:
	TArray<struct FAITeamStimulusEvent>           RegisteredEvents;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"AISense_Team">();
	}
	static class UAISense_Team* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAISense_Team>();
	}
};
static_assert(alignof(UAISense_Team) == 0x000008, "Wrong alignment on UAISense_Team");
static_assert(sizeof(UAISense_Team) == 0x000090, "Wrong size on UAISense_Team");
static_assert(offsetof(UAISense_Team, RegisteredEvents) == 0x000080, "Member 'UAISense_Team::RegisteredEvents' has a wrong offset!");

class UAISense_Touch final : public UAISense
{
public:
	TArray<struct FAITouchEvent>                  RegisteredEvents;

public:
	static void ReportTouchEvent(class UObject* WorldContextObject, class AActor* TouchReceiver, class AActor* OtherActor, const struct FVector& Location);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"AISense_Touch">();
	}
	static class UAISense_Touch* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAISense_Touch>();
	}
};
static_assert(alignof(UAISense_Touch) == 0x000008, "Wrong alignment on UAISense_Touch");
static_assert(sizeof(UAISense_Touch) == 0x000090, "Wrong size on UAISense_Touch");
static_assert(offsetof(UAISense_Touch, RegisteredEvents) == 0x000080, "Member 'UAISense_Touch::RegisteredEvents' has a wrong offset!");

class IAISightTargetInterface final : public IInterface
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"AISightTargetInterface">();
	}
	static class IAISightTargetInterface* GetDefaultObj()
	{
		return GetDefaultObjImpl<IAISightTargetInterface>();
	}
};
static_assert(alignof(IAISightTargetInterface) == 0x000008, "Wrong alignment on IAISightTargetInterface");
static_assert(sizeof(IAISightTargetInterface) == 0x000028, "Wrong size on IAISightTargetInterface");

class UPawnSensingComponent final : public UActorComponent
{
public:
	float                                         HearingThreshold;
	float                                         LOSHearingThreshold;
	float                                         SightRadius;
	float                                         SensingInterval;
	float                                         HearingMaxSoundAge;
	uint8                                         bEnableSensingUpdates : 1;
	uint8                                         bOnlySensePlayers : 1;
	uint8                                         bSeePawns : 1;
	uint8                                         bHearNoises : 1;
	uint8                                         Pad_B5[0xB];
	TMulticastInlineDelegate<void(class APawn* Pawn)> OnSeePawn;
	TMulticastInlineDelegate<void(class APawn* Instigator, struct FVector& Location, float Volume)> OnHearNoise;
	float                                         PeripheralVisionAngle;
	float                                         PeripheralVisionCosine;

public:
	void SetPeripheralVisionAngle(const float NewPeripheralVisionAngle);
	void SetSensingInterval(const float NewSensingInterval);
	void SetSensingUpdatesEnabled(const bool bEnabled);

	float GetPeripheralVisionAngle() const;
	float GetPeripheralVisionCosine() const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PawnSensingComponent">();
	}
	static class UPawnSensingComponent* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPawnSensingComponent>();
	}
};
static_assert(alignof(UPawnSensingComponent) == 0x000008, "Wrong alignment on UPawnSensingComponent");
static_assert(sizeof(UPawnSensingComponent) == 0x0000E8, "Wrong size on UPawnSensingComponent");
static_assert(offsetof(UPawnSensingComponent, HearingThreshold) == 0x0000A0, "Member 'UPawnSensingComponent::HearingThreshold' has a wrong offset!");
static_assert(offsetof(UPawnSensingComponent, LOSHearingThreshold) == 0x0000A4, "Member 'UPawnSensingComponent::LOSHearingThreshold' has a wrong offset!");
static_assert(offsetof(UPawnSensingComponent, SightRadius) == 0x0000A8, "Member 'UPawnSensingComponent::SightRadius' has a wrong offset!");
static_assert(offsetof(UPawnSensingComponent, SensingInterval) == 0x0000AC, "Member 'UPawnSensingComponent::SensingInterval' has a wrong offset!");
static_assert(offsetof(UPawnSensingComponent, HearingMaxSoundAge) == 0x0000B0, "Member 'UPawnSensingComponent::HearingMaxSoundAge' has a wrong offset!");
static_assert(offsetof(UPawnSensingComponent, OnSeePawn) == 0x0000C0, "Member 'UPawnSensingComponent::OnSeePawn' has a wrong offset!");
static_assert(offsetof(UPawnSensingComponent, OnHearNoise) == 0x0000D0, "Member 'UPawnSensingComponent::OnHearNoise' has a wrong offset!");
static_assert(offsetof(UPawnSensingComponent, PeripheralVisionAngle) == 0x0000E0, "Member 'UPawnSensingComponent::PeripheralVisionAngle' has a wrong offset!");
static_assert(offsetof(UPawnSensingComponent, PeripheralVisionCosine) == 0x0000E4, "Member 'UPawnSensingComponent::PeripheralVisionCosine' has a wrong offset!");

class UAITask : public UGameplayTask
{
public:
	class AAIController*                          OwnerController;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"AITask">();
	}
	static class UAITask* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAITask>();
	}
};
static_assert(alignof(UAITask) == 0x000008, "Wrong alignment on UAITask");
static_assert(sizeof(UAITask) == 0x000068, "Wrong size on UAITask");
static_assert(offsetof(UAITask, OwnerController) == 0x000060, "Member 'UAITask::OwnerController' has a wrong offset!");

class UAITask_LockLogic final : public UAITask
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"AITask_LockLogic">();
	}
	static class UAITask_LockLogic* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAITask_LockLogic>();
	}
};
static_assert(alignof(UAITask_LockLogic) == 0x000008, "Wrong alignment on UAITask_LockLogic");
static_assert(sizeof(UAITask_LockLogic) == 0x000068, "Wrong size on UAITask_LockLogic");

class UAITask_MoveTo : public UAITask
{
public:
	TMulticastInlineDelegate<void()>              OnRequestFailed;
	TMulticastInlineDelegate<void(EPathFollowingResult Result, class AAIController* AIController)> OnMoveFinished;
	struct FAIMoveRequest                         MoveRequest;
	uint8                                         Pad_D8[0x40];

public:
	static class UAITask_MoveTo* AIMoveTo(class AAIController* Controller, const struct FVector& GoalLocation, class AActor* GoalActor, float AcceptanceRadius, EAIOptionFlag StopOnOverlap, EAIOptionFlag AcceptPartialPath, bool bUsePathfinding, bool bLockAILogic, bool bUseContinuousGoalTracking, EAIOptionFlag ProjectGoalOnNavigation);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"AITask_MoveTo">();
	}
	static class UAITask_MoveTo* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAITask_MoveTo>();
	}
};
static_assert(alignof(UAITask_MoveTo) == 0x000008, "Wrong alignment on UAITask_MoveTo");
static_assert(sizeof(UAITask_MoveTo) == 0x000118, "Wrong size on UAITask_MoveTo");
static_assert(offsetof(UAITask_MoveTo, OnRequestFailed) == 0x000068, "Member 'UAITask_MoveTo::OnRequestFailed' has a wrong offset!");
static_assert(offsetof(UAITask_MoveTo, OnMoveFinished) == 0x000078, "Member 'UAITask_MoveTo::OnMoveFinished' has a wrong offset!");
static_assert(offsetof(UAITask_MoveTo, MoveRequest) == 0x000088, "Member 'UAITask_MoveTo::MoveRequest' has a wrong offset!");

class UAITask_RunEQS final : public UAITask
{
public:
	uint8                                         Pad_68[0x78];

public:
	static class UAITask_RunEQS* RunEQS(class AAIController* Controller, class UEnvQuery* QueryTemplate);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"AITask_RunEQS">();
	}
	static class UAITask_RunEQS* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAITask_RunEQS>();
	}
};
static_assert(alignof(UAITask_RunEQS) == 0x000008, "Wrong alignment on UAITask_RunEQS");
static_assert(sizeof(UAITask_RunEQS) == 0x0000E0, "Wrong size on UAITask_RunEQS");

class UVisualLoggerExtension final : public UObject
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"VisualLoggerExtension">();
	}
	static class UVisualLoggerExtension* GetDefaultObj()
	{
		return GetDefaultObjImpl<UVisualLoggerExtension>();
	}
};
static_assert(alignof(UVisualLoggerExtension) == 0x000008, "Wrong alignment on UVisualLoggerExtension");
static_assert(sizeof(UVisualLoggerExtension) == 0x000028, "Wrong size on UVisualLoggerExtension");

}
