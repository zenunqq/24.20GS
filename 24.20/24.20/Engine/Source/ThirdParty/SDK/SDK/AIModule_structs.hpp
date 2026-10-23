#pragma once

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "Engine_structs.hpp"

namespace SDK
{

enum class EPathFollowingResult : uint8
{
	Success                                  = 0,
	Blocked                                  = 1,
	OffPath                                  = 2,
	Aborted                                  = 3,
	Skipped_DEPRECATED                       = 4,
	Invalid                                  = 5,
	EPathFollowingResult_MAX                 = 6,
};

enum class EEnvQueryStatus : uint8
{
	Processing                               = 0,
	Success                                  = 1,
	Failed                                   = 2,
	Aborted                                  = 3,
	OwnerLost                                = 4,
	MissingParam                             = 5,
	EEnvQueryStatus_MAX                      = 6,
};

enum class EAIOptionFlag : uint8
{
	Default                                  = 0,
	Enable                                   = 1,
	Disable                                  = 2,
	MAX                                      = 3,
};

enum class EFAIDistanceType : uint8
{
	Distance3D                               = 0,
	Distance2D                               = 1,
	DistanceZ                                = 2,
	MAX                                      = 3,
};

enum class EPawnActionAbortState : uint8
{
	NeverStarted                             = 0,
	NotBeingAborted                          = 1,
	MarkPendingAbort                         = 2,
	LatentAbortInProgress                    = 3,
	AbortDone                                = 4,
	MAX                                      = 5,
};

enum class EPawnActionResult : uint8
{
	NotStarted                               = 0,
	InProgress                               = 1,
	Success                                  = 2,
	Failed                                   = 3,
	Aborted                                  = 4,
	EPawnActionResult_MAX                    = 5,
};

enum class EPawnActionEventType : uint8
{
	Invalid                                  = 0,
	FailedToStart                            = 1,
	InstantAbort                             = 2,
	FinishedAborting                         = 3,
	FinishedExecution                        = 4,
	Push                                     = 5,
	EPawnActionEventType_MAX                 = 6,
};

enum class EAIRequestPriority : uint8
{
	SoftScript                               = 0,
	Logic                                    = 1,
	HardScript                               = 2,
	Reaction                                 = 3,
	Ultimate                                 = 4,
	MAX                                      = 5,
};

enum class EAILockSource : uint8
{
	Animation                                = 0,
	Logic                                    = 1,
	Script                                   = 2,
	Gameplay                                 = 3,
	MAX                                      = 4,
};

enum class EGenericAICheck : uint8
{
	Less                                     = 0,
	LessOrEqual                              = 1,
	Equal                                    = 2,
	NotEqual                                 = 3,
	GreaterOrEqual                           = 4,
	Greater                                  = 5,
	IsTrue                                   = 6,
	MAX                                      = 7,
};

enum class EBasicKeyOperation : uint8
{
	Set                                      = 0,
	NotSet                                   = 1,
	EBasicKeyOperation_MAX                   = 2,
};

enum class EArithmeticKeyOperation : uint8
{
	Equal                                    = 0,
	NotEqual                                 = 1,
	Less                                     = 2,
	LessOrEqual                              = 3,
	Greater                                  = 4,
	GreaterOrEqual                           = 5,
	EArithmeticKeyOperation_MAX              = 6,
};

enum class ETextKeyOperation : uint8
{
	Equal                                    = 0,
	NotEqual                                 = 1,
	Contain                                  = 2,
	NotContain                               = 3,
	ETextKeyOperation_MAX                    = 4,
};

enum class EEnvTestPurpose : uint8
{
	Filter                                   = 0,
	Score                                    = 1,
	FilterAndScore                           = 2,
	EEnvTestPurpose_MAX                      = 3,
};

enum class EEnvTestFilterType : uint8
{
	Minimum                                  = 0,
	Maximum                                  = 1,
	Range                                    = 2,
	Match                                    = 3,
	EEnvTestFilterType_MAX                   = 4,
};

enum class EEnvTestScoreEquation : uint8
{
	Linear                                   = 0,
	Square                                   = 1,
	InverseLinear                            = 2,
	SquareRoot                               = 3,
	Constant                                 = 4,
	EEnvTestScoreEquation_MAX                = 5,
};

enum class EEnvTestWeight : uint8
{
	None                                     = 0,
	Square                                   = 1,
	Inverse                                  = 2,
	Unused                                   = 3,
	Constant                                 = 4,
	Skip                                     = 5,
	EEnvTestWeight_MAX                       = 6,
};

enum class EEnvTestCost : uint8
{
	Low                                      = 0,
	Medium                                   = 1,
	High                                     = 2,
	EEnvTestCost_MAX                         = 3,
};

enum class EEnvTestFilterOperator : uint8
{
	AllPass                                  = 0,
	AnyPass                                  = 1,
	EEnvTestFilterOperator_MAX               = 2,
};

enum class EEnvTestScoreOperator : uint8
{
	AverageScore                             = 0,
	MinScore                                 = 1,
	MaxScore                                 = 2,
	Multiply                                 = 3,
	EEnvTestScoreOperator_MAX                = 4,
};

enum class EEnvQueryRunMode : uint8
{
	SingleResult                             = 0,
	RandomBest5Pct                           = 1,
	RandomBest25Pct                          = 2,
	AllMatching                              = 3,
	EEnvQueryRunMode_MAX                     = 4,
};

enum class EEnvQueryParam : uint8
{
	Float                                    = 0,
	Int                                      = 1,
	Bool                                     = 2,
	EEnvQueryParam_MAX                       = 3,
};

enum class EAIParamType : uint8
{
	Float                                    = 0,
	Int                                      = 1,
	Bool                                     = 2,
	MAX                                      = 3,
};

enum class EEnvQueryTrace : uint8
{
	None                                     = 0,
	Navigation                               = 1,
	GeometryByChannel                        = 2,
	GeometryByProfile                        = 3,
	NavigationOverLedges                     = 4,
	EEnvQueryTrace_MAX                       = 5,
};

enum class EEnvTraceShape : uint8
{
	Line                                     = 0,
	Box                                      = 1,
	Sphere                                   = 2,
	Capsule                                  = 3,
	EEnvTraceShape_MAX                       = 4,
};

enum class EEnvOverlapShape : uint8
{
	Box                                      = 0,
	Sphere                                   = 1,
	Capsule                                  = 2,
	EEnvOverlapShape_MAX                     = 3,
};

enum class EEnvDirection : uint8
{
	TwoPoints                                = 0,
	Rotation                                 = 1,
	EEnvDirection_MAX                        = 2,
};

enum class EEnvQueryTestClamping : uint8
{
	None                                     = 0,
	SpecifiedValue                           = 1,
	FilterThreshold                          = 2,
	EEnvQueryTestClamping_MAX                = 3,
};

enum class ETeamAttitude : uint8
{
	Friendly                                 = 0,
	Neutral                                  = 1,
	Hostile                                  = 2,
	ETeamAttitude_MAX                        = 3,
};

enum class EPawnSubActionTriggeringPolicy : uint8
{
	CopyBeforeTriggering                     = 0,
	ReuseInstances                           = 1,
	EPawnSubActionTriggeringPolicy_MAX       = 2,
};

enum class EPawnActionFailHandling : uint8
{
	RequireSuccess                           = 0,
	IgnoreFailure                            = 1,
	EPawnActionFailHandling_MAX              = 2,
};

enum class EPawnActionMoveMode : uint8
{
	UsePathfinding                           = 0,
	StraightLine                             = 1,
	EPawnActionMoveMode_MAX                  = 2,
};

enum class EBTNodeResult : uint8
{
	Succeeded                                = 0,
	Failed                                   = 1,
	Aborted                                  = 2,
	InProgress                               = 3,
	EBTNodeResult_MAX                        = 4,
};

enum class EBTFlowAbortMode : uint8
{
	None                                     = 0,
	LowerPriority                            = 1,
	Self                                     = 2,
	Both                                     = 3,
	EBTFlowAbortMode_MAX                     = 4,
};

enum class EBTChildIndex : uint8
{
	FirstNode                                = 0,
	TaskNode                                 = 1,
	EBTChildIndex_MAX                        = 2,
};

enum class EBTDecoratorLogic : uint8
{
	Invalid                                  = 0,
	Test                                     = 1,
	And                                      = 2,
	Or                                       = 3,
	Not                                      = 4,
	EBTDecoratorLogic_MAX                    = 5,
};

enum class EBTParallelMode : uint8
{
	AbortBackground                          = 0,
	WaitForBackground                        = 1,
	EBTParallelMode_MAX                      = 2,
};

enum class EBTBlackboardRestart : uint8
{
	ValueChange                              = 0,
	ResultChange                             = 1,
	EBTBlackboardRestart_MAX                 = 2,
};

enum class EBlackBoardEntryComparison : uint8
{
	Equal                                    = 0,
	NotEqual                                 = 1,
	EBlackBoardEntryComparison_MAX           = 2,
};

enum class EPathExistanceQueryType : uint8
{
	NavmeshRaycast2D                         = 0,
	HierarchicalQuery                        = 1,
	RegularPathFinding                       = 2,
	EPathExistanceQueryType_MAX              = 3,
};

enum class EEQSNormalizationType : uint8
{
	Absolute                                 = 0,
	RelativeToScores                         = 1,
	EEQSNormalizationType_MAX                = 2,
};

enum class EEnvQueryHightlightMode : uint8
{
	All                                      = 0,
	Best5Pct                                 = 1,
	Best25Pct                                = 2,
	EEnvQueryHightlightMode_MAX              = 3,
};

enum class EPointOnCircleSpacingMethod : uint8
{
	BySpaceBetween                           = 0,
	ByNumberOfPoints                         = 1,
	EPointOnCircleSpacingMethod_MAX          = 2,
};

enum class EEnvTestDistance : uint8
{
	Distance3D                               = 0,
	Distance2D                               = 1,
	DistanceZ                                = 2,
	DistanceAbsoluteZ                        = 3,
	EEnvTestDistance_MAX                     = 4,
};

enum class EEnvTestDot : uint8
{
	Dot3D                                    = 0,
	Dot2D                                    = 1,
	EEnvTestDot_MAX                          = 2,
};

enum class EEnvTestPathfinding : uint8
{
	PathExist                                = 0,
	PathCost                                 = 1,
	PathLength                               = 2,
	EEnvTestPathfinding_MAX                  = 3,
};

enum class EPathFollowingStatus : uint8
{
	Idle                                     = 0,
	Waiting                                  = 1,
	Paused                                   = 2,
	Moving                                   = 3,
	EPathFollowingStatus_MAX                 = 4,
};

enum class EPathFollowingAction : uint8
{
	Error                                    = 0,
	NoMove                                   = 1,
	DirectMove                               = 2,
	PartialPath                              = 3,
	PathToGoal                               = 4,
	EPathFollowingAction_MAX                 = 5,
};

enum class EPathFollowingRequestResult : uint8
{
	Failed                                   = 0,
	AlreadyAtGoal                            = 1,
	RequestSuccessful                        = 2,
	EPathFollowingRequestResult_MAX          = 3,
};

enum class EAISenseNotifyType : uint8
{
	OnEveryPerception                        = 0,
	OnPerceptionChange                       = 1,
	EAISenseNotifyType_MAX                   = 2,
};

enum class EAITaskPriority : uint8
{
	Lowest                                   = 0,
	Low                                      = 64,
	AutonomousAI                             = 127,
	High                                     = 192,
	Ultimate                                 = 254,
	EAITaskPriority_MAX                      = 255,
};

struct FAISightEvent final
{
public:
	uint8                                         Pad_0[0x8];
	class AActor*                                 SeenActor;
	class AActor*                                 Observer;
};
static_assert(alignof(FAISightEvent) == 0x000008, "Wrong alignment on FAISightEvent");
static_assert(sizeof(FAISightEvent) == 0x000018, "Wrong size on FAISightEvent");
static_assert(offsetof(FAISightEvent, SeenActor) == 0x000008, "Member 'FAISightEvent::SeenActor' has a wrong offset!");
static_assert(offsetof(FAISightEvent, Observer) == 0x000010, "Member 'FAISightEvent::Observer' has a wrong offset!");

struct FAIStimulus final
{
public:
	float                                         Age;
	float                                         ExpirationAge;
	float                                         Strength;
	uint8                                         Pad_C[0x4];
	struct FVector                                StimulusLocation;
	struct FVector                                ReceiverLocation;
	class FName                                   tag;
	uint8                                         Pad_44[0x8];
	uint8                                         BitPad_4C_0 : 1;
	uint8                                         bSuccessfullySensed : 1;
	uint8                                         Pad_4D[0x3];
};
static_assert(alignof(FAIStimulus) == 0x000008, "Wrong alignment on FAIStimulus");
static_assert(sizeof(FAIStimulus) == 0x000050, "Wrong size on FAIStimulus");
static_assert(offsetof(FAIStimulus, Age) == 0x000000, "Member 'FAIStimulus::Age' has a wrong offset!");
static_assert(offsetof(FAIStimulus, ExpirationAge) == 0x000004, "Member 'FAIStimulus::ExpirationAge' has a wrong offset!");
static_assert(offsetof(FAIStimulus, Strength) == 0x000008, "Member 'FAIStimulus::Strength' has a wrong offset!");
static_assert(offsetof(FAIStimulus, StimulusLocation) == 0x000010, "Member 'FAIStimulus::StimulusLocation' has a wrong offset!");
static_assert(offsetof(FAIStimulus, ReceiverLocation) == 0x000028, "Member 'FAIStimulus::ReceiverLocation' has a wrong offset!");
static_assert(offsetof(FAIStimulus, tag) == 0x000040, "Member 'FAIStimulus::tag' has a wrong offset!");

struct FActorPerceptionUpdateInfo final
{
public:
	int32                                         TargetId;
	TWeakObjectPtr<class AActor>                  Target;
	uint8                                         Pad_C[0x4];
	struct FAIStimulus                            Stimulus;
};
static_assert(alignof(FActorPerceptionUpdateInfo) == 0x000008, "Wrong alignment on FActorPerceptionUpdateInfo");
static_assert(sizeof(FActorPerceptionUpdateInfo) == 0x000060, "Wrong size on FActorPerceptionUpdateInfo");
static_assert(offsetof(FActorPerceptionUpdateInfo, TargetId) == 0x000000, "Member 'FActorPerceptionUpdateInfo::TargetId' has a wrong offset!");
static_assert(offsetof(FActorPerceptionUpdateInfo, Target) == 0x000004, "Member 'FActorPerceptionUpdateInfo::Target' has a wrong offset!");
static_assert(offsetof(FActorPerceptionUpdateInfo, Stimulus) == 0x000010, "Member 'FActorPerceptionUpdateInfo::Stimulus' has a wrong offset!");

struct FAIRequestID final
{
public:
	uint32                                        RequestID;
};
static_assert(alignof(FAIRequestID) == 0x000004, "Wrong alignment on FAIRequestID");
static_assert(sizeof(FAIRequestID) == 0x000004, "Wrong size on FAIRequestID");
static_assert(offsetof(FAIRequestID, RequestID) == 0x000000, "Member 'FAIRequestID::RequestID' has a wrong offset!");

struct FBlackboardEntry final
{
public:
	class FName                                   EntryName;
	uint8                                         Pad_4[0x4];
	class UBlackboardKeyType*                     KeyType;
	uint8                                         bInstanceSynced : 1;
	uint8                                         Pad_11[0x7];
};
static_assert(alignof(FBlackboardEntry) == 0x000008, "Wrong alignment on FBlackboardEntry");
static_assert(sizeof(FBlackboardEntry) == 0x000018, "Wrong size on FBlackboardEntry");
static_assert(offsetof(FBlackboardEntry, EntryName) == 0x000000, "Member 'FBlackboardEntry::EntryName' has a wrong offset!");
static_assert(offsetof(FBlackboardEntry, KeyType) == 0x000008, "Member 'FBlackboardEntry::KeyType' has a wrong offset!");

struct FEnvNamedValue final
{
public:
	class FName                                   ParamName;
	EAIParamType                                  ParamType;
	uint8                                         Pad_5[0x3];
	float                                         Value;
};
static_assert(alignof(FEnvNamedValue) == 0x000004, "Wrong alignment on FEnvNamedValue");
static_assert(sizeof(FEnvNamedValue) == 0x00000C, "Wrong size on FEnvNamedValue");
static_assert(offsetof(FEnvNamedValue, ParamName) == 0x000000, "Member 'FEnvNamedValue::ParamName' has a wrong offset!");
static_assert(offsetof(FEnvNamedValue, ParamType) == 0x000004, "Member 'FEnvNamedValue::ParamType' has a wrong offset!");
static_assert(offsetof(FEnvNamedValue, Value) == 0x000008, "Member 'FEnvNamedValue::Value' has a wrong offset!");

struct FIntervalCountdown final
{
public:
	float                                         Interval;
	uint8                                         Pad_4[0x4];
};
static_assert(alignof(FIntervalCountdown) == 0x000004, "Wrong alignment on FIntervalCountdown");
static_assert(sizeof(FIntervalCountdown) == 0x000008, "Wrong size on FIntervalCountdown");
static_assert(offsetof(FIntervalCountdown, Interval) == 0x000000, "Member 'FIntervalCountdown::Interval' has a wrong offset!");

struct FEnvQueryRequest final
{
public:
	class UEnvQuery*                              QueryTemplate;
	class UObject*                                Owner;
	class UWorld*                                 World;
	uint8                                         Pad_18[0x50];
};
static_assert(alignof(FEnvQueryRequest) == 0x000008, "Wrong alignment on FEnvQueryRequest");
static_assert(sizeof(FEnvQueryRequest) == 0x000068, "Wrong size on FEnvQueryRequest");
static_assert(offsetof(FEnvQueryRequest, QueryTemplate) == 0x000000, "Member 'FEnvQueryRequest::QueryTemplate' has a wrong offset!");
static_assert(offsetof(FEnvQueryRequest, Owner) == 0x000008, "Member 'FEnvQueryRequest::Owner' has a wrong offset!");
static_assert(offsetof(FEnvQueryRequest, World) == 0x000010, "Member 'FEnvQueryRequest::World' has a wrong offset!");

struct FBlackboardKeySelector final
{
public:
	TArray<class UBlackboardKeyType*>             AllowedTypes;
	class FName                                   SelectedKeyName;
	uint8                                         Pad_14[0x4];
	TSubclassOf<class UBlackboardKeyType>         SelectedKeyType;
	int32                                         SelectedKeyID;
	uint8                                         bNoneIsAllowedValue : 1;
	uint8                                         Pad_25[0x3];
};
static_assert(alignof(FBlackboardKeySelector) == 0x000008, "Wrong alignment on FBlackboardKeySelector");
static_assert(sizeof(FBlackboardKeySelector) == 0x000028, "Wrong size on FBlackboardKeySelector");
static_assert(offsetof(FBlackboardKeySelector, AllowedTypes) == 0x000000, "Member 'FBlackboardKeySelector::AllowedTypes' has a wrong offset!");
static_assert(offsetof(FBlackboardKeySelector, SelectedKeyName) == 0x000010, "Member 'FBlackboardKeySelector::SelectedKeyName' has a wrong offset!");
static_assert(offsetof(FBlackboardKeySelector, SelectedKeyType) == 0x000018, "Member 'FBlackboardKeySelector::SelectedKeyType' has a wrong offset!");
static_assert(offsetof(FBlackboardKeySelector, SelectedKeyID) == 0x000020, "Member 'FBlackboardKeySelector::SelectedKeyID' has a wrong offset!");

struct FAIDynamicParam final
{
public:
	class FName                                   ParamName;
	EAIParamType                                  ParamType;
	uint8                                         Pad_5[0x3];
	float                                         Value;
	uint8                                         Pad_C[0x4];
	struct FBlackboardKeySelector                 BBKey;
};
static_assert(alignof(FAIDynamicParam) == 0x000008, "Wrong alignment on FAIDynamicParam");
static_assert(sizeof(FAIDynamicParam) == 0x000038, "Wrong size on FAIDynamicParam");
static_assert(offsetof(FAIDynamicParam, ParamName) == 0x000000, "Member 'FAIDynamicParam::ParamName' has a wrong offset!");
static_assert(offsetof(FAIDynamicParam, ParamType) == 0x000004, "Member 'FAIDynamicParam::ParamType' has a wrong offset!");
static_assert(offsetof(FAIDynamicParam, Value) == 0x000008, "Member 'FAIDynamicParam::Value' has a wrong offset!");
static_assert(offsetof(FAIDynamicParam, BBKey) == 0x000010, "Member 'FAIDynamicParam::BBKey' has a wrong offset!");

struct alignas(0x08) FAIMoveRequest final
{
public:
	TWeakObjectPtr<class AActor>                  GoalActor;
	uint8                                         Pad_8[0x48];
};
static_assert(alignof(FAIMoveRequest) == 0x000008, "Wrong alignment on FAIMoveRequest");
static_assert(sizeof(FAIMoveRequest) == 0x000050, "Wrong size on FAIMoveRequest");
static_assert(offsetof(FAIMoveRequest, GoalActor) == 0x000000, "Member 'FAIMoveRequest::GoalActor' has a wrong offset!");

struct FBTDecoratorLogic final
{
public:
	EBTDecoratorLogic                             Operation;
	uint8                                         Pad_1[0x1];
	uint16                                        Number;
};
static_assert(alignof(FBTDecoratorLogic) == 0x000002, "Wrong alignment on FBTDecoratorLogic");
static_assert(sizeof(FBTDecoratorLogic) == 0x000004, "Wrong size on FBTDecoratorLogic");
static_assert(offsetof(FBTDecoratorLogic, Operation) == 0x000000, "Member 'FBTDecoratorLogic::Operation' has a wrong offset!");
static_assert(offsetof(FBTDecoratorLogic, Number) == 0x000002, "Member 'FBTDecoratorLogic::Number' has a wrong offset!");

struct FEnvDirection final
{
public:
	TSubclassOf<class UEnvQueryContext>           LineFrom;
	TSubclassOf<class UEnvQueryContext>           LineTo;
	TSubclassOf<class UEnvQueryContext>           Rotation;
	EEnvDirection                                 DirMode;
	uint8                                         Pad_19[0x7];
};
static_assert(alignof(FEnvDirection) == 0x000008, "Wrong alignment on FEnvDirection");
static_assert(sizeof(FEnvDirection) == 0x000020, "Wrong size on FEnvDirection");
static_assert(offsetof(FEnvDirection, LineFrom) == 0x000000, "Member 'FEnvDirection::LineFrom' has a wrong offset!");
static_assert(offsetof(FEnvDirection, LineTo) == 0x000008, "Member 'FEnvDirection::LineTo' has a wrong offset!");
static_assert(offsetof(FEnvDirection, Rotation) == 0x000010, "Member 'FEnvDirection::Rotation' has a wrong offset!");
static_assert(offsetof(FEnvDirection, DirMode) == 0x000018, "Member 'FEnvDirection::DirMode' has a wrong offset!");

struct FEnvTraceData final
{
public:
	int32                                         VersionNum;
	uint8                                         Pad_4[0x4];
	TSubclassOf<class UNavigationQueryFilter>     NavigationFilter;
	float                                         ProjectDown;
	float                                         ProjectUp;
	float                                         ExtentX;
	float                                         ExtentY;
	float                                         ExtentZ;
	float                                         PostProjectionVerticalOffset;
	ETraceTypeQuery                               TraceChannel;
	ECollisionChannel                             SerializedChannel;
	uint8                                         Pad_2A[0x2];
	class FName                                   TraceProfileName;
	EEnvTraceShape                                TraceShape;
	EEnvQueryTrace                                TraceMode;
	uint8                                         Pad_32[0x2];
	uint8                                         bTraceComplex : 1;
	uint8                                         bOnlyBlockingHits : 1;
	uint8                                         bCanTraceOnNavMesh : 1;
	uint8                                         bCanTraceOnGeometry : 1;
	uint8                                         bCanDisableTrace : 1;
	uint8                                         bCanProjectDown : 1;
	uint8                                         Pad_35[0x3];
};
static_assert(alignof(FEnvTraceData) == 0x000008, "Wrong alignment on FEnvTraceData");
static_assert(sizeof(FEnvTraceData) == 0x000038, "Wrong size on FEnvTraceData");
static_assert(offsetof(FEnvTraceData, VersionNum) == 0x000000, "Member 'FEnvTraceData::VersionNum' has a wrong offset!");
static_assert(offsetof(FEnvTraceData, NavigationFilter) == 0x000008, "Member 'FEnvTraceData::NavigationFilter' has a wrong offset!");
static_assert(offsetof(FEnvTraceData, ProjectDown) == 0x000010, "Member 'FEnvTraceData::ProjectDown' has a wrong offset!");
static_assert(offsetof(FEnvTraceData, ProjectUp) == 0x000014, "Member 'FEnvTraceData::ProjectUp' has a wrong offset!");
static_assert(offsetof(FEnvTraceData, ExtentX) == 0x000018, "Member 'FEnvTraceData::ExtentX' has a wrong offset!");
static_assert(offsetof(FEnvTraceData, ExtentY) == 0x00001C, "Member 'FEnvTraceData::ExtentY' has a wrong offset!");
static_assert(offsetof(FEnvTraceData, ExtentZ) == 0x000020, "Member 'FEnvTraceData::ExtentZ' has a wrong offset!");
static_assert(offsetof(FEnvTraceData, PostProjectionVerticalOffset) == 0x000024, "Member 'FEnvTraceData::PostProjectionVerticalOffset' has a wrong offset!");
static_assert(offsetof(FEnvTraceData, TraceChannel) == 0x000028, "Member 'FEnvTraceData::TraceChannel' has a wrong offset!");
static_assert(offsetof(FEnvTraceData, SerializedChannel) == 0x000029, "Member 'FEnvTraceData::SerializedChannel' has a wrong offset!");
static_assert(offsetof(FEnvTraceData, TraceProfileName) == 0x00002C, "Member 'FEnvTraceData::TraceProfileName' has a wrong offset!");
static_assert(offsetof(FEnvTraceData, TraceShape) == 0x000030, "Member 'FEnvTraceData::TraceShape' has a wrong offset!");
static_assert(offsetof(FEnvTraceData, TraceMode) == 0x000031, "Member 'FEnvTraceData::TraceMode' has a wrong offset!");

struct FEnvOverlapData final
{
public:
	float                                         ExtentX;
	float                                         ExtentY;
	float                                         ExtentZ;
	uint8                                         Pad_C[0x4];
	struct FVector                                ShapeOffset;
	ECollisionChannel                             OverlapChannel;
	EEnvOverlapShape                              OverlapShape;
	uint8                                         Pad_2A[0x2];
	uint8                                         bOnlyBlockingHits : 1;
	uint8                                         bOverlapComplex : 1;
	uint8                                         bSkipOverlapQuerier : 1;
	uint8                                         Pad_2D[0x3];
};
static_assert(alignof(FEnvOverlapData) == 0x000008, "Wrong alignment on FEnvOverlapData");
static_assert(sizeof(FEnvOverlapData) == 0x000030, "Wrong size on FEnvOverlapData");
static_assert(offsetof(FEnvOverlapData, ExtentX) == 0x000000, "Member 'FEnvOverlapData::ExtentX' has a wrong offset!");
static_assert(offsetof(FEnvOverlapData, ExtentY) == 0x000004, "Member 'FEnvOverlapData::ExtentY' has a wrong offset!");
static_assert(offsetof(FEnvOverlapData, ExtentZ) == 0x000008, "Member 'FEnvOverlapData::ExtentZ' has a wrong offset!");
static_assert(offsetof(FEnvOverlapData, ShapeOffset) == 0x000010, "Member 'FEnvOverlapData::ShapeOffset' has a wrong offset!");
static_assert(offsetof(FEnvOverlapData, OverlapChannel) == 0x000028, "Member 'FEnvOverlapData::OverlapChannel' has a wrong offset!");
static_assert(offsetof(FEnvOverlapData, OverlapShape) == 0x000029, "Member 'FEnvOverlapData::OverlapShape' has a wrong offset!");

struct FEnvQueryResult final
{
public:
	uint8                                         Pad_0[0x10];
	TSubclassOf<class UEnvQueryItemType>          ItemType;
	uint8                                         Pad_18[0x14];
	int32                                         OptionIndex;
	int32                                         QueryID;
	uint8                                         Pad_34[0xC];
};
static_assert(alignof(FEnvQueryResult) == 0x000008, "Wrong alignment on FEnvQueryResult");
static_assert(sizeof(FEnvQueryResult) == 0x000040, "Wrong size on FEnvQueryResult");
static_assert(offsetof(FEnvQueryResult, ItemType) == 0x000010, "Member 'FEnvQueryResult::ItemType' has a wrong offset!");
static_assert(offsetof(FEnvQueryResult, OptionIndex) == 0x00002C, "Member 'FEnvQueryResult::OptionIndex' has a wrong offset!");
static_assert(offsetof(FEnvQueryResult, QueryID) == 0x000030, "Member 'FEnvQueryResult::QueryID' has a wrong offset!");

struct FEQSParametrizedQueryExecutionRequest final
{
public:
	class UEnvQuery*                              QueryTemplate;
	TArray<struct FAIDynamicParam>                QueryConfig;
	struct FBlackboardKeySelector                 EQSQueryBlackboardKey;
	EEnvQueryRunMode                              RunMode;
	uint8                                         Pad_41[0x3];
	uint8                                         bUseBBKeyForQueryTemplate : 1;
	uint8                                         Pad_45[0x3];
};
static_assert(alignof(FEQSParametrizedQueryExecutionRequest) == 0x000008, "Wrong alignment on FEQSParametrizedQueryExecutionRequest");
static_assert(sizeof(FEQSParametrizedQueryExecutionRequest) == 0x000048, "Wrong size on FEQSParametrizedQueryExecutionRequest");
static_assert(offsetof(FEQSParametrizedQueryExecutionRequest, QueryTemplate) == 0x000000, "Member 'FEQSParametrizedQueryExecutionRequest::QueryTemplate' has a wrong offset!");
static_assert(offsetof(FEQSParametrizedQueryExecutionRequest, QueryConfig) == 0x000008, "Member 'FEQSParametrizedQueryExecutionRequest::QueryConfig' has a wrong offset!");
static_assert(offsetof(FEQSParametrizedQueryExecutionRequest, EQSQueryBlackboardKey) == 0x000018, "Member 'FEQSParametrizedQueryExecutionRequest::EQSQueryBlackboardKey' has a wrong offset!");
static_assert(offsetof(FEQSParametrizedQueryExecutionRequest, RunMode) == 0x000040, "Member 'FEQSParametrizedQueryExecutionRequest::RunMode' has a wrong offset!");

struct FGenericTeamId final
{
public:
	uint8                                         TeamId;
};
static_assert(alignof(FGenericTeamId) == 0x000001, "Wrong alignment on FGenericTeamId");
static_assert(sizeof(FGenericTeamId) == 0x000001, "Wrong size on FGenericTeamId");
static_assert(offsetof(FGenericTeamId, TeamId) == 0x000000, "Member 'FGenericTeamId::TeamId' has a wrong offset!");

struct alignas(0x04) FSimpleIndexedHandleBase
{
public:
	uint8                                         Pad_0[0x4];
};
static_assert(alignof(FSimpleIndexedHandleBase) == 0x000004, "Wrong alignment on FSimpleIndexedHandleBase");
static_assert(sizeof(FSimpleIndexedHandleBase) == 0x000004, "Wrong size on FSimpleIndexedHandleBase");

struct FIndexedHandleBase final : public FSimpleIndexedHandleBase
{
public:
	uint8                                         Pad_4[0x4];
};
static_assert(alignof(FIndexedHandleBase) == 0x000004, "Wrong alignment on FIndexedHandleBase");
static_assert(sizeof(FIndexedHandleBase) == 0x000008, "Wrong size on FIndexedHandleBase");

struct alignas(0x02) FCompactIndexedHandleBase final
{
public:
	uint8                                         Pad_0[0x4];
};
static_assert(alignof(FCompactIndexedHandleBase) == 0x000002, "Wrong alignment on FCompactIndexedHandleBase");
static_assert(sizeof(FCompactIndexedHandleBase) == 0x000004, "Wrong size on FCompactIndexedHandleBase");

struct FSequentialIDBase final
{
public:
	uint32                                        Value;
};
static_assert(alignof(FSequentialIDBase) == 0x000004, "Wrong alignment on FSequentialIDBase");
static_assert(sizeof(FSequentialIDBase) == 0x000004, "Wrong size on FSequentialIDBase");
static_assert(offsetof(FSequentialIDBase, Value) == 0x000000, "Member 'FSequentialIDBase::Value' has a wrong offset!");

struct FPawnActionEvent final
{
public:
	class UPawnAction*                            Action;
	uint8                                         Pad_8[0x10];
};
static_assert(alignof(FPawnActionEvent) == 0x000008, "Wrong alignment on FPawnActionEvent");
static_assert(sizeof(FPawnActionEvent) == 0x000018, "Wrong size on FPawnActionEvent");
static_assert(offsetof(FPawnActionEvent, Action) == 0x000000, "Member 'FPawnActionEvent::Action' has a wrong offset!");

struct FPawnActionStack final
{
public:
	class UPawnAction*                            TopAction;
};
static_assert(alignof(FPawnActionStack) == 0x000008, "Wrong alignment on FPawnActionStack");
static_assert(sizeof(FPawnActionStack) == 0x000008, "Wrong size on FPawnActionStack");
static_assert(offsetof(FPawnActionStack, TopAction) == 0x000000, "Member 'FPawnActionStack::TopAction' has a wrong offset!");

struct FBehaviorTreeTemplateInfo final
{
public:
	class UBehaviorTree*                          Asset;
	class UBTCompositeNode*                       Template;
	uint8                                         Pad_10[0x8];
};
static_assert(alignof(FBehaviorTreeTemplateInfo) == 0x000008, "Wrong alignment on FBehaviorTreeTemplateInfo");
static_assert(sizeof(FBehaviorTreeTemplateInfo) == 0x000018, "Wrong size on FBehaviorTreeTemplateInfo");
static_assert(offsetof(FBehaviorTreeTemplateInfo, Asset) == 0x000000, "Member 'FBehaviorTreeTemplateInfo::Asset' has a wrong offset!");
static_assert(offsetof(FBehaviorTreeTemplateInfo, Template) == 0x000008, "Member 'FBehaviorTreeTemplateInfo::Template' has a wrong offset!");

struct FBTCompositeChild final
{
public:
	class UBTCompositeNode*                       ChildComposite;
	class UBTTaskNode*                            ChildTask;
	TArray<class UBTDecorator*>                   Decorators;
	TArray<struct FBTDecoratorLogic>              DecoratorOps;
};
static_assert(alignof(FBTCompositeChild) == 0x000008, "Wrong alignment on FBTCompositeChild");
static_assert(sizeof(FBTCompositeChild) == 0x000030, "Wrong size on FBTCompositeChild");
static_assert(offsetof(FBTCompositeChild, ChildComposite) == 0x000000, "Member 'FBTCompositeChild::ChildComposite' has a wrong offset!");
static_assert(offsetof(FBTCompositeChild, ChildTask) == 0x000008, "Member 'FBTCompositeChild::ChildTask' has a wrong offset!");
static_assert(offsetof(FBTCompositeChild, Decorators) == 0x000010, "Member 'FBTCompositeChild::Decorators' has a wrong offset!");
static_assert(offsetof(FBTCompositeChild, DecoratorOps) == 0x000020, "Member 'FBTCompositeChild::DecoratorOps' has a wrong offset!");

struct FAIDataProviderValue
{
public:
	uint8                                         Pad_0[0x10];
	class UAIDataProvider*                        DataBinding;
	class FName                                   DataField;
	uint8                                         Pad_1C[0x4];
};
static_assert(alignof(FAIDataProviderValue) == 0x000008, "Wrong alignment on FAIDataProviderValue");
static_assert(sizeof(FAIDataProviderValue) == 0x000020, "Wrong size on FAIDataProviderValue");
static_assert(offsetof(FAIDataProviderValue, DataBinding) == 0x000010, "Member 'FAIDataProviderValue::DataBinding' has a wrong offset!");
static_assert(offsetof(FAIDataProviderValue, DataField) == 0x000018, "Member 'FAIDataProviderValue::DataField' has a wrong offset!");

struct FAIDataProviderTypedValue : public FAIDataProviderValue
{
public:
	TSubclassOf<class UObject>                    PropertyType;
	uint8                                         Pad_28[0x8];
};
static_assert(alignof(FAIDataProviderTypedValue) == 0x000008, "Wrong alignment on FAIDataProviderTypedValue");
static_assert(sizeof(FAIDataProviderTypedValue) == 0x000030, "Wrong size on FAIDataProviderTypedValue");
static_assert(offsetof(FAIDataProviderTypedValue, PropertyType) == 0x000020, "Member 'FAIDataProviderTypedValue::PropertyType' has a wrong offset!");

struct FAIDataProviderStructValue final : public FAIDataProviderValue
{
public:
	uint8                                         Pad_20[0x10];
};
static_assert(alignof(FAIDataProviderStructValue) == 0x000008, "Wrong alignment on FAIDataProviderStructValue");
static_assert(sizeof(FAIDataProviderStructValue) == 0x000030, "Wrong size on FAIDataProviderStructValue");

struct FAIDataProviderIntValue final : public FAIDataProviderTypedValue
{
public:
	int32                                         DefaultValue;
	uint8                                         Pad_34[0x4];
};
static_assert(alignof(FAIDataProviderIntValue) == 0x000008, "Wrong alignment on FAIDataProviderIntValue");
static_assert(sizeof(FAIDataProviderIntValue) == 0x000038, "Wrong size on FAIDataProviderIntValue");
static_assert(offsetof(FAIDataProviderIntValue, DefaultValue) == 0x000030, "Member 'FAIDataProviderIntValue::DefaultValue' has a wrong offset!");

struct FAIDataProviderFloatValue final : public FAIDataProviderTypedValue
{
public:
	float                                         DefaultValue;
	uint8                                         Pad_34[0x4];
};
static_assert(alignof(FAIDataProviderFloatValue) == 0x000008, "Wrong alignment on FAIDataProviderFloatValue");
static_assert(sizeof(FAIDataProviderFloatValue) == 0x000038, "Wrong size on FAIDataProviderFloatValue");
static_assert(offsetof(FAIDataProviderFloatValue, DefaultValue) == 0x000030, "Member 'FAIDataProviderFloatValue::DefaultValue' has a wrong offset!");

struct FAIDataProviderBoolValue final : public FAIDataProviderTypedValue
{
public:
	bool                                          DefaultValue;
	uint8                                         Pad_31[0x7];
};
static_assert(alignof(FAIDataProviderBoolValue) == 0x000008, "Wrong alignment on FAIDataProviderBoolValue");
static_assert(sizeof(FAIDataProviderBoolValue) == 0x000038, "Wrong size on FAIDataProviderBoolValue");
static_assert(offsetof(FAIDataProviderBoolValue, DefaultValue) == 0x000030, "Member 'FAIDataProviderBoolValue::DefaultValue' has a wrong offset!");

struct FEnvQueryManagerConfig final
{
public:
	float                                         MaxAllowedTestingTime;
	bool                                          bTestQueriesUsingBreadth;
	uint8                                         Pad_5[0x3];
	int32                                         QueryCountWarningThreshold;
	uint8                                         Pad_C[0x4];
	double                                        QueryCountWarningInterval;
	double                                        ExecutionTimeWarningSeconds;
	double                                        HandlingResultTimeWarningSeconds;
	double                                        GenerationTimeWarningSeconds;
};
static_assert(alignof(FEnvQueryManagerConfig) == 0x000008, "Wrong alignment on FEnvQueryManagerConfig");
static_assert(sizeof(FEnvQueryManagerConfig) == 0x000030, "Wrong size on FEnvQueryManagerConfig");
static_assert(offsetof(FEnvQueryManagerConfig, MaxAllowedTestingTime) == 0x000000, "Member 'FEnvQueryManagerConfig::MaxAllowedTestingTime' has a wrong offset!");
static_assert(offsetof(FEnvQueryManagerConfig, bTestQueriesUsingBreadth) == 0x000004, "Member 'FEnvQueryManagerConfig::bTestQueriesUsingBreadth' has a wrong offset!");
static_assert(offsetof(FEnvQueryManagerConfig, QueryCountWarningThreshold) == 0x000008, "Member 'FEnvQueryManagerConfig::QueryCountWarningThreshold' has a wrong offset!");
static_assert(offsetof(FEnvQueryManagerConfig, QueryCountWarningInterval) == 0x000010, "Member 'FEnvQueryManagerConfig::QueryCountWarningInterval' has a wrong offset!");
static_assert(offsetof(FEnvQueryManagerConfig, ExecutionTimeWarningSeconds) == 0x000018, "Member 'FEnvQueryManagerConfig::ExecutionTimeWarningSeconds' has a wrong offset!");
static_assert(offsetof(FEnvQueryManagerConfig, HandlingResultTimeWarningSeconds) == 0x000020, "Member 'FEnvQueryManagerConfig::HandlingResultTimeWarningSeconds' has a wrong offset!");
static_assert(offsetof(FEnvQueryManagerConfig, GenerationTimeWarningSeconds) == 0x000028, "Member 'FEnvQueryManagerConfig::GenerationTimeWarningSeconds' has a wrong offset!");

struct FEnvQueryInstanceCache final
{
public:
	class UEnvQuery*                              Template;
	uint8                                         Pad_8[0x170];
};
static_assert(alignof(FEnvQueryInstanceCache) == 0x000008, "Wrong alignment on FEnvQueryInstanceCache");
static_assert(sizeof(FEnvQueryInstanceCache) == 0x000178, "Wrong size on FEnvQueryInstanceCache");
static_assert(offsetof(FEnvQueryInstanceCache, Template) == 0x000000, "Member 'FEnvQueryInstanceCache::Template' has a wrong offset!");

struct FCrowdAvoidanceConfig final
{
public:
	float                                         VelocityBias;
	float                                         DesiredVelocityWeight;
	float                                         CurrentVelocityWeight;
	float                                         SideBiasWeight;
	float                                         ImpactTimeWeight;
	float                                         ImpactTimeRange;
	uint8                                         CustomPatternIdx;
	uint8                                         AdaptiveDivisions;
	uint8                                         AdaptiveRings;
	uint8                                         AdaptiveDepth;
};
static_assert(alignof(FCrowdAvoidanceConfig) == 0x000004, "Wrong alignment on FCrowdAvoidanceConfig");
static_assert(sizeof(FCrowdAvoidanceConfig) == 0x00001C, "Wrong size on FCrowdAvoidanceConfig");
static_assert(offsetof(FCrowdAvoidanceConfig, VelocityBias) == 0x000000, "Member 'FCrowdAvoidanceConfig::VelocityBias' has a wrong offset!");
static_assert(offsetof(FCrowdAvoidanceConfig, DesiredVelocityWeight) == 0x000004, "Member 'FCrowdAvoidanceConfig::DesiredVelocityWeight' has a wrong offset!");
static_assert(offsetof(FCrowdAvoidanceConfig, CurrentVelocityWeight) == 0x000008, "Member 'FCrowdAvoidanceConfig::CurrentVelocityWeight' has a wrong offset!");
static_assert(offsetof(FCrowdAvoidanceConfig, SideBiasWeight) == 0x00000C, "Member 'FCrowdAvoidanceConfig::SideBiasWeight' has a wrong offset!");
static_assert(offsetof(FCrowdAvoidanceConfig, ImpactTimeWeight) == 0x000010, "Member 'FCrowdAvoidanceConfig::ImpactTimeWeight' has a wrong offset!");
static_assert(offsetof(FCrowdAvoidanceConfig, ImpactTimeRange) == 0x000014, "Member 'FCrowdAvoidanceConfig::ImpactTimeRange' has a wrong offset!");
static_assert(offsetof(FCrowdAvoidanceConfig, CustomPatternIdx) == 0x000018, "Member 'FCrowdAvoidanceConfig::CustomPatternIdx' has a wrong offset!");
static_assert(offsetof(FCrowdAvoidanceConfig, AdaptiveDivisions) == 0x000019, "Member 'FCrowdAvoidanceConfig::AdaptiveDivisions' has a wrong offset!");
static_assert(offsetof(FCrowdAvoidanceConfig, AdaptiveRings) == 0x00001A, "Member 'FCrowdAvoidanceConfig::AdaptiveRings' has a wrong offset!");
static_assert(offsetof(FCrowdAvoidanceConfig, AdaptiveDepth) == 0x00001B, "Member 'FCrowdAvoidanceConfig::AdaptiveDepth' has a wrong offset!");

struct FCrowdAvoidanceSamplingPattern final
{
public:
	TArray<float>                                 Angles;
	TArray<float>                                 Radii;
};
static_assert(alignof(FCrowdAvoidanceSamplingPattern) == 0x000008, "Wrong alignment on FCrowdAvoidanceSamplingPattern");
static_assert(sizeof(FCrowdAvoidanceSamplingPattern) == 0x000020, "Wrong size on FCrowdAvoidanceSamplingPattern");
static_assert(offsetof(FCrowdAvoidanceSamplingPattern, Angles) == 0x000000, "Member 'FCrowdAvoidanceSamplingPattern::Angles' has a wrong offset!");
static_assert(offsetof(FCrowdAvoidanceSamplingPattern, Radii) == 0x000010, "Member 'FCrowdAvoidanceSamplingPattern::Radii' has a wrong offset!");

struct FRecastGraphWrapper final
{
public:
	class ARecastNavMesh*                         RecastNavMeshActor;
	uint8                                         Pad_8[0xB0];
};
static_assert(alignof(FRecastGraphWrapper) == 0x000008, "Wrong alignment on FRecastGraphWrapper");
static_assert(sizeof(FRecastGraphWrapper) == 0x0000B8, "Wrong size on FRecastGraphWrapper");
static_assert(offsetof(FRecastGraphWrapper, RecastNavMeshActor) == 0x000000, "Member 'FRecastGraphWrapper::RecastNavMeshActor' has a wrong offset!");

struct FActorPerceptionBlueprintInfo final
{
public:
	class AActor*                                 Target;
	TArray<struct FAIStimulus>                    LastSensedStimuli;
	uint8                                         bIsHostile : 1;
	uint8                                         Pad_19[0x7];
};
static_assert(alignof(FActorPerceptionBlueprintInfo) == 0x000008, "Wrong alignment on FActorPerceptionBlueprintInfo");
static_assert(sizeof(FActorPerceptionBlueprintInfo) == 0x000020, "Wrong size on FActorPerceptionBlueprintInfo");
static_assert(offsetof(FActorPerceptionBlueprintInfo, Target) == 0x000000, "Member 'FActorPerceptionBlueprintInfo::Target' has a wrong offset!");
static_assert(offsetof(FActorPerceptionBlueprintInfo, LastSensedStimuli) == 0x000008, "Member 'FActorPerceptionBlueprintInfo::LastSensedStimuli' has a wrong offset!");

struct alignas(0x04) FAISenseAffiliationFilter final
{
public:
	uint8                                         bDetectEnemies : 1;
	uint8                                         bDetectNeutrals : 1;
	uint8                                         bDetectFriendlies : 1;
	uint8                                         Pad_1[0x3];
};
static_assert(alignof(FAISenseAffiliationFilter) == 0x000004, "Wrong alignment on FAISenseAffiliationFilter");
static_assert(sizeof(FAISenseAffiliationFilter) == 0x000004, "Wrong size on FAISenseAffiliationFilter");

struct FAIDamageEvent final
{
public:
	float                                         Amount;
	uint8                                         Pad_4[0x4];
	struct FVector                                Location;
	struct FVector                                HitLocation;
	class AActor*                                 DamagedActor;
	class AActor*                                 Instigator;
	class FName                                   tag;
	uint8                                         Pad_4C[0x4];
};
static_assert(alignof(FAIDamageEvent) == 0x000008, "Wrong alignment on FAIDamageEvent");
static_assert(sizeof(FAIDamageEvent) == 0x000050, "Wrong size on FAIDamageEvent");
static_assert(offsetof(FAIDamageEvent, Amount) == 0x000000, "Member 'FAIDamageEvent::Amount' has a wrong offset!");
static_assert(offsetof(FAIDamageEvent, Location) == 0x000008, "Member 'FAIDamageEvent::Location' has a wrong offset!");
static_assert(offsetof(FAIDamageEvent, HitLocation) == 0x000020, "Member 'FAIDamageEvent::HitLocation' has a wrong offset!");
static_assert(offsetof(FAIDamageEvent, DamagedActor) == 0x000038, "Member 'FAIDamageEvent::DamagedActor' has a wrong offset!");
static_assert(offsetof(FAIDamageEvent, Instigator) == 0x000040, "Member 'FAIDamageEvent::Instigator' has a wrong offset!");
static_assert(offsetof(FAIDamageEvent, tag) == 0x000048, "Member 'FAIDamageEvent::tag' has a wrong offset!");

struct FAINoiseEvent final
{
public:
	uint8                                         Pad_0[0x8];
	struct FVector                                NoiseLocation;
	float                                         Loudness;
	float                                         MaxRange;
	class AActor*                                 Instigator;
	class FName                                   tag;
	uint8                                         Pad_34[0x4];
};
static_assert(alignof(FAINoiseEvent) == 0x000008, "Wrong alignment on FAINoiseEvent");
static_assert(sizeof(FAINoiseEvent) == 0x000038, "Wrong size on FAINoiseEvent");
static_assert(offsetof(FAINoiseEvent, NoiseLocation) == 0x000008, "Member 'FAINoiseEvent::NoiseLocation' has a wrong offset!");
static_assert(offsetof(FAINoiseEvent, Loudness) == 0x000020, "Member 'FAINoiseEvent::Loudness' has a wrong offset!");
static_assert(offsetof(FAINoiseEvent, MaxRange) == 0x000024, "Member 'FAINoiseEvent::MaxRange' has a wrong offset!");
static_assert(offsetof(FAINoiseEvent, Instigator) == 0x000028, "Member 'FAINoiseEvent::Instigator' has a wrong offset!");
static_assert(offsetof(FAINoiseEvent, tag) == 0x000030, "Member 'FAINoiseEvent::tag' has a wrong offset!");

struct FAIPredictionEvent final
{
public:
	class AActor*                                 Requestor;
	class AActor*                                 PredictedActor;
	uint8                                         Pad_10[0x8];
};
static_assert(alignof(FAIPredictionEvent) == 0x000008, "Wrong alignment on FAIPredictionEvent");
static_assert(sizeof(FAIPredictionEvent) == 0x000018, "Wrong size on FAIPredictionEvent");
static_assert(offsetof(FAIPredictionEvent, Requestor) == 0x000000, "Member 'FAIPredictionEvent::Requestor' has a wrong offset!");
static_assert(offsetof(FAIPredictionEvent, PredictedActor) == 0x000008, "Member 'FAIPredictionEvent::PredictedActor' has a wrong offset!");

struct FAITeamStimulusEvent final
{
public:
	uint8                                         Pad_0[0x40];
	class AActor*                                 Broadcaster;
	class AActor*                                 Enemy;
};
static_assert(alignof(FAITeamStimulusEvent) == 0x000008, "Wrong alignment on FAITeamStimulusEvent");
static_assert(sizeof(FAITeamStimulusEvent) == 0x000050, "Wrong size on FAITeamStimulusEvent");
static_assert(offsetof(FAITeamStimulusEvent, Broadcaster) == 0x000040, "Member 'FAITeamStimulusEvent::Broadcaster' has a wrong offset!");
static_assert(offsetof(FAITeamStimulusEvent, Enemy) == 0x000048, "Member 'FAITeamStimulusEvent::Enemy' has a wrong offset!");

struct FAITouchEvent final
{
public:
	uint8                                         Pad_0[0x18];
	class AActor*                                 TouchReceiver;
	class AActor*                                 OtherActor;
};
static_assert(alignof(FAITouchEvent) == 0x000008, "Wrong alignment on FAITouchEvent");
static_assert(sizeof(FAITouchEvent) == 0x000028, "Wrong size on FAITouchEvent");
static_assert(offsetof(FAITouchEvent, TouchReceiver) == 0x000018, "Member 'FAITouchEvent::TouchReceiver' has a wrong offset!");
static_assert(offsetof(FAITouchEvent, OtherActor) == 0x000020, "Member 'FAITouchEvent::OtherActor' has a wrong offset!");

}
