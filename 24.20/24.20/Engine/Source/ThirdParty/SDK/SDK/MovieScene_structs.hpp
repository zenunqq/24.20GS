#pragma once

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "Engine_structs.hpp"

namespace SDK
{

enum class EMovieSceneKeyInterpolation : uint8
{
	Auto                                     = 0,
	User                                     = 1,
	Break                                    = 2,
	Linear                                   = 3,
	Constant                                 = 4,
	EMovieSceneKeyInterpolation_MAX          = 5,
};

enum class EMovieSceneCompletionMode : uint8
{
	KeepState                                = 0,
	RestoreState                             = 1,
	ProjectDefault                           = 2,
	EMovieSceneCompletionMode_MAX            = 3,
};

enum class EMovieScenePlayerStatus : uint8
{
	Stopped                                  = 0,
	Playing                                  = 1,
	Scrubbing                                = 2,
	Jumping                                  = 3,
	Stepping                                 = 4,
	Paused                                   = 5,
	MAX                                      = 6,
};

enum class EMovieSceneEvaluationType : uint8
{
	FrameLocked                              = 0,
	WithSubFrames                            = 1,
	EMovieSceneEvaluationType_MAX            = 2,
};

enum class EUpdateClockSource : uint8
{
	Tick                                     = 0,
	Platform                                 = 1,
	Audio                                    = 2,
	RelativeTimecode                         = 3,
	Timecode                                 = 4,
	PlayEveryFrame                           = 5,
	Custom                                   = 6,
	EUpdateClockSource_MAX                   = 7,
};

enum class EMovieSceneSequenceFlags : uint8
{
	None                                     = 0,
	Volatile                                 = 1,
	BlockingEvaluation                       = 2,
	DynamicWeighting                         = 4,
	InheritedFlags                           = 1,
	EMovieSceneSequenceFlags_MAX             = 5,
};

enum class EMovieSceneServerClientMask : uint8
{
	None                                     = 0,
	Server                                   = 1,
	Client                                   = 2,
	All                                      = 3,
	EMovieSceneServerClientMask_MAX          = 4,
};

enum class EMovieSceneSubSectionFlags : uint32
{
	None                                     = 0,
	OverrideKeepState                        = 1,
	OverrideRestoreState                     = 2,
	IgnoreHierarchicalBias                   = 4,
	AnyRestoreStateOverride                  = 3,
	EMovieSceneSubSectionFlags_MAX           = 5,
};

enum class ESectionEvaluationFlags : uint8
{
	None                                     = 0,
	PreRoll                                  = 1,
	PostRoll                                 = 2,
	ForceKeepState                           = 4,
	ForceRestoreState                        = 8,
	ESectionEvaluationFlags_MAX              = 9,
};

enum class EMovieSceneBlendType : uint8
{
	Invalid                                  = 0,
	Absolute                                 = 1,
	Additive                                 = 2,
	Relative                                 = 4,
	AdditiveFromBase                         = 8,
	EMovieSceneBlendType_MAX                 = 9,
};

enum class EEvaluationMethod : uint8
{
	Static                                   = 0,
	Swept                                    = 1,
	EEvaluationMethod_MAX                    = 2,
};

enum class EMovieSceneBuiltInEasing : uint8
{
	Linear                                   = 0,
	SinIn                                    = 1,
	SinOut                                   = 2,
	SinInOut                                 = 3,
	QuadIn                                   = 4,
	QuadOut                                  = 5,
	QuadInOut                                = 6,
	CubicIn                                  = 7,
	CubicOut                                 = 8,
	CubicInOut                               = 9,
	QuartIn                                  = 10,
	QuartOut                                 = 11,
	QuartInOut                               = 12,
	QuintIn                                  = 13,
	QuintOut                                 = 14,
	QuintInOut                               = 15,
	ExpoIn                                   = 16,
	ExpoOut                                  = 17,
	ExpoInOut                                = 18,
	CircIn                                   = 19,
	CircOut                                  = 20,
	CircInOut                                = 21,
	EMovieSceneBuiltInEasing_MAX             = 22,
};

enum class EMovieSceneObjectBindingSpace : uint8
{
	Local                                    = 0,
	Root                                     = 1,
	Unused                                   = 2,
	EMovieSceneObjectBindingSpace_MAX        = 3,
};

enum class EUpdatePositionMethod : uint8
{
	Play                                     = 0,
	Jump                                     = 1,
	Scrub                                    = 2,
	EUpdatePositionMethod_MAX                = 3,
};

enum class EMovieScenePositionType : uint8
{
	Frame                                    = 0,
	Time                                     = 1,
	MarkedFrame                              = 2,
	EMovieScenePositionType_MAX              = 3,
};

enum class ESpawnOwnership : uint8
{
	InnerSequence                            = 0,
	RootSequence                             = 1,
	External                                 = 2,
	ESpawnOwnership_MAX                      = 3,
};

struct FMovieSceneSequenceID final
{
public:
	uint32                                        Value;
};
static_assert(alignof(FMovieSceneSequenceID) == 0x000004, "Wrong alignment on FMovieSceneSequenceID");
static_assert(sizeof(FMovieSceneSequenceID) == 0x000004, "Wrong size on FMovieSceneSequenceID");
static_assert(offsetof(FMovieSceneSequenceID, Value) == 0x000000, "Member 'FMovieSceneSequenceID::Value' has a wrong offset!");

struct FMovieSceneTrackIdentifier final
{
public:
	uint32                                        Value;
};
static_assert(alignof(FMovieSceneTrackIdentifier) == 0x000004, "Wrong alignment on FMovieSceneTrackIdentifier");
static_assert(sizeof(FMovieSceneTrackIdentifier) == 0x000004, "Wrong size on FMovieSceneTrackIdentifier");
static_assert(offsetof(FMovieSceneTrackIdentifier, Value) == 0x000000, "Member 'FMovieSceneTrackIdentifier::Value' has a wrong offset!");

struct FMovieSceneEvaluationKey final
{
public:
	struct FMovieSceneSequenceID                  SequenceID;
	struct FMovieSceneTrackIdentifier             TrackIdentifier;
	uint32                                        SectionIndex;
};
static_assert(alignof(FMovieSceneEvaluationKey) == 0x000004, "Wrong alignment on FMovieSceneEvaluationKey");
static_assert(sizeof(FMovieSceneEvaluationKey) == 0x00000C, "Wrong size on FMovieSceneEvaluationKey");
static_assert(offsetof(FMovieSceneEvaluationKey, SequenceID) == 0x000000, "Member 'FMovieSceneEvaluationKey::SequenceID' has a wrong offset!");
static_assert(offsetof(FMovieSceneEvaluationKey, TrackIdentifier) == 0x000004, "Member 'FMovieSceneEvaluationKey::TrackIdentifier' has a wrong offset!");
static_assert(offsetof(FMovieSceneEvaluationKey, SectionIndex) == 0x000008, "Member 'FMovieSceneEvaluationKey::SectionIndex' has a wrong offset!");

struct FMovieSceneOrderedEvaluationKey final
{
public:
	struct FMovieSceneEvaluationKey               Key;
	uint16                                        SetupIndex;
	uint16                                        TearDownIndex;
};
static_assert(alignof(FMovieSceneOrderedEvaluationKey) == 0x000004, "Wrong alignment on FMovieSceneOrderedEvaluationKey");
static_assert(sizeof(FMovieSceneOrderedEvaluationKey) == 0x000010, "Wrong size on FMovieSceneOrderedEvaluationKey");
static_assert(offsetof(FMovieSceneOrderedEvaluationKey, Key) == 0x000000, "Member 'FMovieSceneOrderedEvaluationKey::Key' has a wrong offset!");
static_assert(offsetof(FMovieSceneOrderedEvaluationKey, SetupIndex) == 0x00000C, "Member 'FMovieSceneOrderedEvaluationKey::SetupIndex' has a wrong offset!");
static_assert(offsetof(FMovieSceneOrderedEvaluationKey, TearDownIndex) == 0x00000E, "Member 'FMovieSceneOrderedEvaluationKey::TearDownIndex' has a wrong offset!");

struct FMovieSceneEvaluationMetaData final
{
public:
	TArray<struct FMovieSceneSequenceID>          ActiveSequences;
	TArray<struct FMovieSceneOrderedEvaluationKey> ActiveEntities;
};
static_assert(alignof(FMovieSceneEvaluationMetaData) == 0x000008, "Wrong alignment on FMovieSceneEvaluationMetaData");
static_assert(sizeof(FMovieSceneEvaluationMetaData) == 0x000020, "Wrong size on FMovieSceneEvaluationMetaData");
static_assert(offsetof(FMovieSceneEvaluationMetaData, ActiveSequences) == 0x000000, "Member 'FMovieSceneEvaluationMetaData::ActiveSequences' has a wrong offset!");
static_assert(offsetof(FMovieSceneEvaluationMetaData, ActiveEntities) == 0x000010, "Member 'FMovieSceneEvaluationMetaData::ActiveEntities' has a wrong offset!");

struct FActorForWorldTransforms final
{
public:
	TWeakObjectPtr<class AActor>                  Actor;
	TWeakObjectPtr<class USceneComponent>         Component;
	class FName                                   SocketName;
};
static_assert(alignof(FActorForWorldTransforms) == 0x000004, "Wrong alignment on FActorForWorldTransforms");
static_assert(sizeof(FActorForWorldTransforms) == 0x000014, "Wrong size on FActorForWorldTransforms");
static_assert(offsetof(FActorForWorldTransforms, Actor) == 0x000000, "Member 'FActorForWorldTransforms::Actor' has a wrong offset!");
static_assert(offsetof(FActorForWorldTransforms, Component) == 0x000008, "Member 'FActorForWorldTransforms::Component' has a wrong offset!");
static_assert(offsetof(FActorForWorldTransforms, SocketName) == 0x000010, "Member 'FActorForWorldTransforms::SocketName' has a wrong offset!");

struct FMovieSceneDeterminismData final
{
public:
	TArray<struct FFrameTime>                     Fences;
	bool                                          bParentSequenceRequiresLowerFence;
	bool                                          bParentSequenceRequiresUpperFence;
	uint8                                         Pad_12[0x6];
};
static_assert(alignof(FMovieSceneDeterminismData) == 0x000008, "Wrong alignment on FMovieSceneDeterminismData");
static_assert(sizeof(FMovieSceneDeterminismData) == 0x000018, "Wrong size on FMovieSceneDeterminismData");
static_assert(offsetof(FMovieSceneDeterminismData, Fences) == 0x000000, "Member 'FMovieSceneDeterminismData::Fences' has a wrong offset!");
static_assert(offsetof(FMovieSceneDeterminismData, bParentSequenceRequiresLowerFence) == 0x000010, "Member 'FMovieSceneDeterminismData::bParentSequenceRequiresLowerFence' has a wrong offset!");
static_assert(offsetof(FMovieSceneDeterminismData, bParentSequenceRequiresUpperFence) == 0x000011, "Member 'FMovieSceneDeterminismData::bParentSequenceRequiresUpperFence' has a wrong offset!");

struct FMovieSceneEmptyStruct final
{
public:
	uint8                                         Pad_0[0x1];
};
static_assert(alignof(FMovieSceneEmptyStruct) == 0x000001, "Wrong alignment on FMovieSceneEmptyStruct");
static_assert(sizeof(FMovieSceneEmptyStruct) == 0x000001, "Wrong size on FMovieSceneEmptyStruct");

struct alignas(0x08) FMovieSceneEvalTemplateBase
{
public:
	uint8                                         Pad_0[0x10];
};
static_assert(alignof(FMovieSceneEvalTemplateBase) == 0x000008, "Wrong alignment on FMovieSceneEvalTemplateBase");
static_assert(sizeof(FMovieSceneEvalTemplateBase) == 0x000010, "Wrong size on FMovieSceneEvalTemplateBase");

struct FMovieSceneEvaluationOperand final
{
public:
	struct FGuid                                  ObjectBindingID;
	struct FMovieSceneSequenceID                  SequenceID;
};
static_assert(alignof(FMovieSceneEvaluationOperand) == 0x000004, "Wrong alignment on FMovieSceneEvaluationOperand");
static_assert(sizeof(FMovieSceneEvaluationOperand) == 0x000014, "Wrong size on FMovieSceneEvaluationOperand");
static_assert(offsetof(FMovieSceneEvaluationOperand, ObjectBindingID) == 0x000000, "Member 'FMovieSceneEvaluationOperand::ObjectBindingID' has a wrong offset!");
static_assert(offsetof(FMovieSceneEvaluationOperand, SequenceID) == 0x000010, "Member 'FMovieSceneEvaluationOperand::SequenceID' has a wrong offset!");

struct alignas(0x08) FMovieSceneKeyStruct
{
public:
	uint8                                         Pad_0[0x8];
};
static_assert(alignof(FMovieSceneKeyStruct) == 0x000008, "Wrong alignment on FMovieSceneKeyStruct");
static_assert(sizeof(FMovieSceneKeyStruct) == 0x000008, "Wrong size on FMovieSceneKeyStruct");

struct alignas(0x10) FGeneratedMovieSceneKeyStruct final
{
public:
	uint8                                         Pad_0[0x50];
};
static_assert(alignof(FGeneratedMovieSceneKeyStruct) == 0x000010, "Wrong alignment on FGeneratedMovieSceneKeyStruct");
static_assert(sizeof(FGeneratedMovieSceneKeyStruct) == 0x000050, "Wrong size on FGeneratedMovieSceneKeyStruct");

struct FMovieSceneKeyTimeStruct final : public FMovieSceneKeyStruct
{
public:
	struct FFrameNumber                           Time;
	uint8                                         Pad_C[0x1C];
};
static_assert(alignof(FMovieSceneKeyTimeStruct) == 0x000008, "Wrong alignment on FMovieSceneKeyTimeStruct");
static_assert(sizeof(FMovieSceneKeyTimeStruct) == 0x000028, "Wrong size on FMovieSceneKeyTimeStruct");
static_assert(offsetof(FMovieSceneKeyTimeStruct, Time) == 0x000008, "Member 'FMovieSceneKeyTimeStruct::Time' has a wrong offset!");

struct FMovieScenePropertyBinding final
{
public:
	class FName                                   PropertyName;
	class FName                                   PropertyPath;
	bool                                          bCanUseClassLookup;
	uint8                                         Pad_9[0x3];
};
static_assert(alignof(FMovieScenePropertyBinding) == 0x000004, "Wrong alignment on FMovieScenePropertyBinding");
static_assert(sizeof(FMovieScenePropertyBinding) == 0x00000C, "Wrong size on FMovieScenePropertyBinding");
static_assert(offsetof(FMovieScenePropertyBinding, PropertyName) == 0x000000, "Member 'FMovieScenePropertyBinding::PropertyName' has a wrong offset!");
static_assert(offsetof(FMovieScenePropertyBinding, PropertyPath) == 0x000004, "Member 'FMovieScenePropertyBinding::PropertyPath' has a wrong offset!");
static_assert(offsetof(FMovieScenePropertyBinding, bCanUseClassLookup) == 0x000008, "Member 'FMovieScenePropertyBinding::bCanUseClassLookup' has a wrong offset!");

struct FMovieSceneSectionParameters final
{
public:
	struct FFrameNumber                           StartFrameOffset;
	bool                                          bCanLoop;
	uint8                                         Pad_5[0x3];
	struct FFrameNumber                           EndFrameOffset;
	struct FFrameNumber                           FirstLoopStartFrameOffset;
	float                                         TimeScale;
	int32                                         HierarchicalBias;
	EMovieSceneSubSectionFlags                    Flags;
	float                                         StartOffset;
	float                                         PrerollTime;
	float                                         PostrollTime;
};
static_assert(alignof(FMovieSceneSectionParameters) == 0x000004, "Wrong alignment on FMovieSceneSectionParameters");
static_assert(sizeof(FMovieSceneSectionParameters) == 0x000028, "Wrong size on FMovieSceneSectionParameters");
static_assert(offsetof(FMovieSceneSectionParameters, StartFrameOffset) == 0x000000, "Member 'FMovieSceneSectionParameters::StartFrameOffset' has a wrong offset!");
static_assert(offsetof(FMovieSceneSectionParameters, bCanLoop) == 0x000004, "Member 'FMovieSceneSectionParameters::bCanLoop' has a wrong offset!");
static_assert(offsetof(FMovieSceneSectionParameters, EndFrameOffset) == 0x000008, "Member 'FMovieSceneSectionParameters::EndFrameOffset' has a wrong offset!");
static_assert(offsetof(FMovieSceneSectionParameters, FirstLoopStartFrameOffset) == 0x00000C, "Member 'FMovieSceneSectionParameters::FirstLoopStartFrameOffset' has a wrong offset!");
static_assert(offsetof(FMovieSceneSectionParameters, TimeScale) == 0x000010, "Member 'FMovieSceneSectionParameters::TimeScale' has a wrong offset!");
static_assert(offsetof(FMovieSceneSectionParameters, HierarchicalBias) == 0x000014, "Member 'FMovieSceneSectionParameters::HierarchicalBias' has a wrong offset!");
static_assert(offsetof(FMovieSceneSectionParameters, Flags) == 0x000018, "Member 'FMovieSceneSectionParameters::Flags' has a wrong offset!");
static_assert(offsetof(FMovieSceneSectionParameters, StartOffset) == 0x00001C, "Member 'FMovieSceneSectionParameters::StartOffset' has a wrong offset!");
static_assert(offsetof(FMovieSceneSectionParameters, PrerollTime) == 0x000020, "Member 'FMovieSceneSectionParameters::PrerollTime' has a wrong offset!");
static_assert(offsetof(FMovieSceneSectionParameters, PostrollTime) == 0x000024, "Member 'FMovieSceneSectionParameters::PostrollTime' has a wrong offset!");

struct FMovieSceneSegmentIdentifier final
{
public:
	int32                                         IdentifierIndex;
};
static_assert(alignof(FMovieSceneSegmentIdentifier) == 0x000004, "Wrong alignment on FMovieSceneSegmentIdentifier");
static_assert(sizeof(FMovieSceneSegmentIdentifier) == 0x000004, "Wrong size on FMovieSceneSegmentIdentifier");
static_assert(offsetof(FMovieSceneSegmentIdentifier, IdentifierIndex) == 0x000000, "Member 'FMovieSceneSegmentIdentifier::IdentifierIndex' has a wrong offset!");

struct FSectionEvaluationData final
{
public:
	int32                                         ImplIndex;
	struct FFrameNumber                           ForcedTime;
	ESectionEvaluationFlags                       Flags;
	uint8                                         Pad_9[0x3];
};
static_assert(alignof(FSectionEvaluationData) == 0x000004, "Wrong alignment on FSectionEvaluationData");
static_assert(sizeof(FSectionEvaluationData) == 0x00000C, "Wrong size on FSectionEvaluationData");
static_assert(offsetof(FSectionEvaluationData, ImplIndex) == 0x000000, "Member 'FSectionEvaluationData::ImplIndex' has a wrong offset!");
static_assert(offsetof(FSectionEvaluationData, ForcedTime) == 0x000004, "Member 'FSectionEvaluationData::ForcedTime' has a wrong offset!");
static_assert(offsetof(FSectionEvaluationData, Flags) == 0x000008, "Member 'FSectionEvaluationData::Flags' has a wrong offset!");

struct alignas(0x08) FMovieSceneSegment final
{
public:
	uint8                                         Pad_0[0x58];
};
static_assert(alignof(FMovieSceneSegment) == 0x000008, "Wrong alignment on FMovieSceneSegment");
static_assert(sizeof(FMovieSceneSegment) == 0x000058, "Wrong size on FMovieSceneSegment");

struct FMovieSceneSequenceLoopCount final
{
public:
	int32                                         Value;
};
static_assert(alignof(FMovieSceneSequenceLoopCount) == 0x000004, "Wrong alignment on FMovieSceneSequenceLoopCount");
static_assert(sizeof(FMovieSceneSequenceLoopCount) == 0x000004, "Wrong size on FMovieSceneSequenceLoopCount");
static_assert(offsetof(FMovieSceneSequenceLoopCount, Value) == 0x000000, "Member 'FMovieSceneSequenceLoopCount::Value' has a wrong offset!");

struct FMovieSceneSequenceTickInterval final
{
public:
	float                                         TickIntervalSeconds;
	float                                         EvaluationBudgetMicroseconds;
	bool                                          bTickWhenPaused;
	bool                                          bAllowRounding;
	uint8                                         Pad_A[0x2];
};
static_assert(alignof(FMovieSceneSequenceTickInterval) == 0x000004, "Wrong alignment on FMovieSceneSequenceTickInterval");
static_assert(sizeof(FMovieSceneSequenceTickInterval) == 0x00000C, "Wrong size on FMovieSceneSequenceTickInterval");
static_assert(offsetof(FMovieSceneSequenceTickInterval, TickIntervalSeconds) == 0x000000, "Member 'FMovieSceneSequenceTickInterval::TickIntervalSeconds' has a wrong offset!");
static_assert(offsetof(FMovieSceneSequenceTickInterval, EvaluationBudgetMicroseconds) == 0x000004, "Member 'FMovieSceneSequenceTickInterval::EvaluationBudgetMicroseconds' has a wrong offset!");
static_assert(offsetof(FMovieSceneSequenceTickInterval, bTickWhenPaused) == 0x000008, "Member 'FMovieSceneSequenceTickInterval::bTickWhenPaused' has a wrong offset!");
static_assert(offsetof(FMovieSceneSequenceTickInterval, bAllowRounding) == 0x000009, "Member 'FMovieSceneSequenceTickInterval::bAllowRounding' has a wrong offset!");

struct FMovieSceneSequencePlaybackSettings final
{
public:
	uint8                                         bAutoPlay : 1;
	uint8                                         Pad_1[0x3];
	struct FMovieSceneSequenceLoopCount           LoopCount;
	struct FMovieSceneSequenceTickInterval        TickInterval;
	float                                         PlayRate;
	float                                         StartTime;
	uint8                                         bRandomStartTime : 1;
	uint8                                         bRestoreState : 1;
	uint8                                         bDisableMovementInput : 1;
	uint8                                         bDisableLookAtInput : 1;
	uint8                                         bHidePlayer : 1;
	uint8                                         bHideHUD : 1;
	uint8                                         bDisableCameraCuts : 1;
	uint8                                         bPauseAtEnd : 1;
	uint8                                         bInheritTickIntervalFromOwner : 1;
	uint8                                         bDynamicWeighting : 1;
	uint8                                         Pad_1E[0x2];
};
static_assert(alignof(FMovieSceneSequencePlaybackSettings) == 0x000004, "Wrong alignment on FMovieSceneSequencePlaybackSettings");
static_assert(sizeof(FMovieSceneSequencePlaybackSettings) == 0x000020, "Wrong size on FMovieSceneSequencePlaybackSettings");
static_assert(offsetof(FMovieSceneSequencePlaybackSettings, LoopCount) == 0x000004, "Member 'FMovieSceneSequencePlaybackSettings::LoopCount' has a wrong offset!");
static_assert(offsetof(FMovieSceneSequencePlaybackSettings, TickInterval) == 0x000008, "Member 'FMovieSceneSequencePlaybackSettings::TickInterval' has a wrong offset!");
static_assert(offsetof(FMovieSceneSequencePlaybackSettings, PlayRate) == 0x000014, "Member 'FMovieSceneSequencePlaybackSettings::PlayRate' has a wrong offset!");
static_assert(offsetof(FMovieSceneSequencePlaybackSettings, StartTime) == 0x000018, "Member 'FMovieSceneSequencePlaybackSettings::StartTime' has a wrong offset!");

struct FMovieSceneTimeTransform final
{
public:
	float                                         TimeScale;
	struct FFrameTime                             Offset;
};
static_assert(alignof(FMovieSceneTimeTransform) == 0x000004, "Wrong alignment on FMovieSceneTimeTransform");
static_assert(sizeof(FMovieSceneTimeTransform) == 0x00000C, "Wrong size on FMovieSceneTimeTransform");
static_assert(offsetof(FMovieSceneTimeTransform, TimeScale) == 0x000000, "Member 'FMovieSceneTimeTransform::TimeScale' has a wrong offset!");
static_assert(offsetof(FMovieSceneTimeTransform, Offset) == 0x000004, "Member 'FMovieSceneTimeTransform::Offset' has a wrong offset!");

struct alignas(0x08) FMovieSceneChannel
{
public:
	uint8                                         Pad_0[0x50];
};
static_assert(alignof(FMovieSceneChannel) == 0x000008, "Wrong alignment on FMovieSceneChannel");
static_assert(sizeof(FMovieSceneChannel) == 0x000050, "Wrong size on FMovieSceneChannel");

struct FMovieSceneKeyHandleMap final : public FKeyHandleLookupTable
{
};
static_assert(alignof(FMovieSceneKeyHandleMap) == 0x000008, "Wrong alignment on FMovieSceneKeyHandleMap");
static_assert(sizeof(FMovieSceneKeyHandleMap) == 0x000088, "Wrong size on FMovieSceneKeyHandleMap");

struct FMovieSceneAudioTriggerChannel final : public FMovieSceneChannel
{
public:
	TArray<struct FFrameNumber>                   Times;
	TArray<bool>                                  Values;
	struct FMovieSceneKeyHandleMap                KeyHandles;
};
static_assert(alignof(FMovieSceneAudioTriggerChannel) == 0x000008, "Wrong alignment on FMovieSceneAudioTriggerChannel");
static_assert(sizeof(FMovieSceneAudioTriggerChannel) == 0x0000F8, "Wrong size on FMovieSceneAudioTriggerChannel");
static_assert(offsetof(FMovieSceneAudioTriggerChannel, Times) == 0x000050, "Member 'FMovieSceneAudioTriggerChannel::Times' has a wrong offset!");
static_assert(offsetof(FMovieSceneAudioTriggerChannel, Values) == 0x000060, "Member 'FMovieSceneAudioTriggerChannel::Values' has a wrong offset!");
static_assert(offsetof(FMovieSceneAudioTriggerChannel, KeyHandles) == 0x000070, "Member 'FMovieSceneAudioTriggerChannel::KeyHandles' has a wrong offset!");

struct FMovieSceneBoolChannel : public FMovieSceneChannel
{
public:
	TArray<struct FFrameNumber>                   Times;
	bool                                          DefaultValue;
	bool                                          bHasDefaultValue;
	uint8                                         Pad_62[0x6];
	TArray<bool>                                  Values;
	struct FMovieSceneKeyHandleMap                KeyHandles;
};
static_assert(alignof(FMovieSceneBoolChannel) == 0x000008, "Wrong alignment on FMovieSceneBoolChannel");
static_assert(sizeof(FMovieSceneBoolChannel) == 0x000100, "Wrong size on FMovieSceneBoolChannel");
static_assert(offsetof(FMovieSceneBoolChannel, Times) == 0x000050, "Member 'FMovieSceneBoolChannel::Times' has a wrong offset!");
static_assert(offsetof(FMovieSceneBoolChannel, DefaultValue) == 0x000060, "Member 'FMovieSceneBoolChannel::DefaultValue' has a wrong offset!");
static_assert(offsetof(FMovieSceneBoolChannel, bHasDefaultValue) == 0x000061, "Member 'FMovieSceneBoolChannel::bHasDefaultValue' has a wrong offset!");
static_assert(offsetof(FMovieSceneBoolChannel, Values) == 0x000068, "Member 'FMovieSceneBoolChannel::Values' has a wrong offset!");
static_assert(offsetof(FMovieSceneBoolChannel, KeyHandles) == 0x000078, "Member 'FMovieSceneBoolChannel::KeyHandles' has a wrong offset!");

struct FMovieSceneByteChannel : public FMovieSceneChannel
{
public:
	TArray<struct FFrameNumber>                   Times;
	uint8                                         DefaultValue;
	bool                                          bHasDefaultValue;
	uint8                                         Pad_62[0x6];
	TArray<uint8>                                 Values;
	class UEnum*                                  Enum;
	struct FMovieSceneKeyHandleMap                KeyHandles;
};
static_assert(alignof(FMovieSceneByteChannel) == 0x000008, "Wrong alignment on FMovieSceneByteChannel");
static_assert(sizeof(FMovieSceneByteChannel) == 0x000108, "Wrong size on FMovieSceneByteChannel");
static_assert(offsetof(FMovieSceneByteChannel, Times) == 0x000050, "Member 'FMovieSceneByteChannel::Times' has a wrong offset!");
static_assert(offsetof(FMovieSceneByteChannel, DefaultValue) == 0x000060, "Member 'FMovieSceneByteChannel::DefaultValue' has a wrong offset!");
static_assert(offsetof(FMovieSceneByteChannel, bHasDefaultValue) == 0x000061, "Member 'FMovieSceneByteChannel::bHasDefaultValue' has a wrong offset!");
static_assert(offsetof(FMovieSceneByteChannel, Values) == 0x000068, "Member 'FMovieSceneByteChannel::Values' has a wrong offset!");
static_assert(offsetof(FMovieSceneByteChannel, Enum) == 0x000078, "Member 'FMovieSceneByteChannel::Enum' has a wrong offset!");
static_assert(offsetof(FMovieSceneByteChannel, KeyHandles) == 0x000080, "Member 'FMovieSceneByteChannel::KeyHandles' has a wrong offset!");

struct FMovieSceneTangentData final
{
public:
	float                                         ArriveTangent;
	float                                         LeaveTangent;
	float                                         ArriveTangentWeight;
	float                                         LeaveTangentWeight;
	ERichCurveTangentWeightMode                   TangentWeightMode;
	uint8                                         Pad_11[0x3];
};
static_assert(alignof(FMovieSceneTangentData) == 0x000004, "Wrong alignment on FMovieSceneTangentData");
static_assert(sizeof(FMovieSceneTangentData) == 0x000014, "Wrong size on FMovieSceneTangentData");
static_assert(offsetof(FMovieSceneTangentData, ArriveTangent) == 0x000000, "Member 'FMovieSceneTangentData::ArriveTangent' has a wrong offset!");
static_assert(offsetof(FMovieSceneTangentData, LeaveTangent) == 0x000004, "Member 'FMovieSceneTangentData::LeaveTangent' has a wrong offset!");
static_assert(offsetof(FMovieSceneTangentData, ArriveTangentWeight) == 0x000008, "Member 'FMovieSceneTangentData::ArriveTangentWeight' has a wrong offset!");
static_assert(offsetof(FMovieSceneTangentData, LeaveTangentWeight) == 0x00000C, "Member 'FMovieSceneTangentData::LeaveTangentWeight' has a wrong offset!");
static_assert(offsetof(FMovieSceneTangentData, TangentWeightMode) == 0x000010, "Member 'FMovieSceneTangentData::TangentWeightMode' has a wrong offset!");

struct FMovieSceneDoubleValue final
{
public:
	double                                        Value;
	struct FMovieSceneTangentData                 Tangent;
	ERichCurveInterpMode                          InterpMode;
	ERichCurveTangentMode                         TangentMode;
	uint8                                         PaddingByte;
	uint8                                         Pad_1F[0x1];
};
static_assert(alignof(FMovieSceneDoubleValue) == 0x000008, "Wrong alignment on FMovieSceneDoubleValue");
static_assert(sizeof(FMovieSceneDoubleValue) == 0x000020, "Wrong size on FMovieSceneDoubleValue");
static_assert(offsetof(FMovieSceneDoubleValue, Value) == 0x000000, "Member 'FMovieSceneDoubleValue::Value' has a wrong offset!");
static_assert(offsetof(FMovieSceneDoubleValue, Tangent) == 0x000008, "Member 'FMovieSceneDoubleValue::Tangent' has a wrong offset!");
static_assert(offsetof(FMovieSceneDoubleValue, InterpMode) == 0x00001C, "Member 'FMovieSceneDoubleValue::InterpMode' has a wrong offset!");
static_assert(offsetof(FMovieSceneDoubleValue, TangentMode) == 0x00001D, "Member 'FMovieSceneDoubleValue::TangentMode' has a wrong offset!");
static_assert(offsetof(FMovieSceneDoubleValue, PaddingByte) == 0x00001E, "Member 'FMovieSceneDoubleValue::PaddingByte' has a wrong offset!");

struct FMovieSceneDoubleChannel final : public FMovieSceneChannel
{
public:
	ERichCurveExtrapolation                       PreInfinityExtrap;
	ERichCurveExtrapolation                       PostInfinityExtrap;
	uint8                                         Pad_52[0x6];
	TArray<struct FFrameNumber>                   Times;
	TArray<struct FMovieSceneDoubleValue>         Values;
	double                                        DefaultValue;
	bool                                          bHasDefaultValue;
	uint8                                         Pad_81[0x7];
	struct FMovieSceneKeyHandleMap                KeyHandles;
	struct FFrameRate                             TickResolution;
};
static_assert(alignof(FMovieSceneDoubleChannel) == 0x000008, "Wrong alignment on FMovieSceneDoubleChannel");
static_assert(sizeof(FMovieSceneDoubleChannel) == 0x000118, "Wrong size on FMovieSceneDoubleChannel");
static_assert(offsetof(FMovieSceneDoubleChannel, PreInfinityExtrap) == 0x000050, "Member 'FMovieSceneDoubleChannel::PreInfinityExtrap' has a wrong offset!");
static_assert(offsetof(FMovieSceneDoubleChannel, PostInfinityExtrap) == 0x000051, "Member 'FMovieSceneDoubleChannel::PostInfinityExtrap' has a wrong offset!");
static_assert(offsetof(FMovieSceneDoubleChannel, Times) == 0x000058, "Member 'FMovieSceneDoubleChannel::Times' has a wrong offset!");
static_assert(offsetof(FMovieSceneDoubleChannel, Values) == 0x000068, "Member 'FMovieSceneDoubleChannel::Values' has a wrong offset!");
static_assert(offsetof(FMovieSceneDoubleChannel, DefaultValue) == 0x000078, "Member 'FMovieSceneDoubleChannel::DefaultValue' has a wrong offset!");
static_assert(offsetof(FMovieSceneDoubleChannel, bHasDefaultValue) == 0x000080, "Member 'FMovieSceneDoubleChannel::bHasDefaultValue' has a wrong offset!");
static_assert(offsetof(FMovieSceneDoubleChannel, KeyHandles) == 0x000088, "Member 'FMovieSceneDoubleChannel::KeyHandles' has a wrong offset!");
static_assert(offsetof(FMovieSceneDoubleChannel, TickResolution) == 0x000110, "Member 'FMovieSceneDoubleChannel::TickResolution' has a wrong offset!");

struct FMovieSceneFloatValue final
{
public:
	float                                         Value;
	struct FMovieSceneTangentData                 Tangent;
	ERichCurveInterpMode                          InterpMode;
	ERichCurveTangentMode                         TangentMode;
	uint8                                         PaddingByte;
	uint8                                         Pad_1B[0x1];
};
static_assert(alignof(FMovieSceneFloatValue) == 0x000004, "Wrong alignment on FMovieSceneFloatValue");
static_assert(sizeof(FMovieSceneFloatValue) == 0x00001C, "Wrong size on FMovieSceneFloatValue");
static_assert(offsetof(FMovieSceneFloatValue, Value) == 0x000000, "Member 'FMovieSceneFloatValue::Value' has a wrong offset!");
static_assert(offsetof(FMovieSceneFloatValue, Tangent) == 0x000004, "Member 'FMovieSceneFloatValue::Tangent' has a wrong offset!");
static_assert(offsetof(FMovieSceneFloatValue, InterpMode) == 0x000018, "Member 'FMovieSceneFloatValue::InterpMode' has a wrong offset!");
static_assert(offsetof(FMovieSceneFloatValue, TangentMode) == 0x000019, "Member 'FMovieSceneFloatValue::TangentMode' has a wrong offset!");
static_assert(offsetof(FMovieSceneFloatValue, PaddingByte) == 0x00001A, "Member 'FMovieSceneFloatValue::PaddingByte' has a wrong offset!");

struct FMovieSceneFloatChannel final : public FMovieSceneChannel
{
public:
	ERichCurveExtrapolation                       PreInfinityExtrap;
	ERichCurveExtrapolation                       PostInfinityExtrap;
	uint8                                         Pad_52[0x6];
	TArray<struct FFrameNumber>                   Times;
	TArray<struct FMovieSceneFloatValue>          Values;
	float                                         DefaultValue;
	bool                                          bHasDefaultValue;
	uint8                                         Pad_7D[0x3];
	struct FMovieSceneKeyHandleMap                KeyHandles;
	struct FFrameRate                             TickResolution;
};
static_assert(alignof(FMovieSceneFloatChannel) == 0x000008, "Wrong alignment on FMovieSceneFloatChannel");
static_assert(sizeof(FMovieSceneFloatChannel) == 0x000110, "Wrong size on FMovieSceneFloatChannel");
static_assert(offsetof(FMovieSceneFloatChannel, PreInfinityExtrap) == 0x000050, "Member 'FMovieSceneFloatChannel::PreInfinityExtrap' has a wrong offset!");
static_assert(offsetof(FMovieSceneFloatChannel, PostInfinityExtrap) == 0x000051, "Member 'FMovieSceneFloatChannel::PostInfinityExtrap' has a wrong offset!");
static_assert(offsetof(FMovieSceneFloatChannel, Times) == 0x000058, "Member 'FMovieSceneFloatChannel::Times' has a wrong offset!");
static_assert(offsetof(FMovieSceneFloatChannel, Values) == 0x000068, "Member 'FMovieSceneFloatChannel::Values' has a wrong offset!");
static_assert(offsetof(FMovieSceneFloatChannel, DefaultValue) == 0x000078, "Member 'FMovieSceneFloatChannel::DefaultValue' has a wrong offset!");
static_assert(offsetof(FMovieSceneFloatChannel, bHasDefaultValue) == 0x00007C, "Member 'FMovieSceneFloatChannel::bHasDefaultValue' has a wrong offset!");
static_assert(offsetof(FMovieSceneFloatChannel, KeyHandles) == 0x000080, "Member 'FMovieSceneFloatChannel::KeyHandles' has a wrong offset!");
static_assert(offsetof(FMovieSceneFloatChannel, TickResolution) == 0x000108, "Member 'FMovieSceneFloatChannel::TickResolution' has a wrong offset!");

struct FMovieSceneIntegerChannel final : public FMovieSceneChannel
{
public:
	TArray<struct FFrameNumber>                   Times;
	int32                                         DefaultValue;
	bool                                          bHasDefaultValue;
	uint8                                         Pad_65[0x3];
	TArray<int32>                                 Values;
	struct FMovieSceneKeyHandleMap                KeyHandles;
};
static_assert(alignof(FMovieSceneIntegerChannel) == 0x000008, "Wrong alignment on FMovieSceneIntegerChannel");
static_assert(sizeof(FMovieSceneIntegerChannel) == 0x000100, "Wrong size on FMovieSceneIntegerChannel");
static_assert(offsetof(FMovieSceneIntegerChannel, Times) == 0x000050, "Member 'FMovieSceneIntegerChannel::Times' has a wrong offset!");
static_assert(offsetof(FMovieSceneIntegerChannel, DefaultValue) == 0x000060, "Member 'FMovieSceneIntegerChannel::DefaultValue' has a wrong offset!");
static_assert(offsetof(FMovieSceneIntegerChannel, bHasDefaultValue) == 0x000064, "Member 'FMovieSceneIntegerChannel::bHasDefaultValue' has a wrong offset!");
static_assert(offsetof(FMovieSceneIntegerChannel, Values) == 0x000068, "Member 'FMovieSceneIntegerChannel::Values' has a wrong offset!");
static_assert(offsetof(FMovieSceneIntegerChannel, KeyHandles) == 0x000078, "Member 'FMovieSceneIntegerChannel::KeyHandles' has a wrong offset!");

struct FMovieSceneObjectPathChannelKeyValue final
{
public:
	TSoftObjectPtr<class UObject>                 SoftPtr;
	class UObject*                                HardPtr;
};
static_assert(alignof(FMovieSceneObjectPathChannelKeyValue) == 0x000008, "Wrong alignment on FMovieSceneObjectPathChannelKeyValue");
static_assert(sizeof(FMovieSceneObjectPathChannelKeyValue) == 0x000030, "Wrong size on FMovieSceneObjectPathChannelKeyValue");
static_assert(offsetof(FMovieSceneObjectPathChannelKeyValue, SoftPtr) == 0x000000, "Member 'FMovieSceneObjectPathChannelKeyValue::SoftPtr' has a wrong offset!");
static_assert(offsetof(FMovieSceneObjectPathChannelKeyValue, HardPtr) == 0x000028, "Member 'FMovieSceneObjectPathChannelKeyValue::HardPtr' has a wrong offset!");

struct FMovieSceneObjectPathChannel final : public FMovieSceneChannel
{
public:
	TSubclassOf<class UObject>                    PropertyClass;
	TArray<struct FFrameNumber>                   Times;
	TArray<struct FMovieSceneObjectPathChannelKeyValue> Values;
	struct FMovieSceneObjectPathChannelKeyValue   DefaultValue;
	struct FMovieSceneKeyHandleMap                KeyHandles;
};
static_assert(alignof(FMovieSceneObjectPathChannel) == 0x000008, "Wrong alignment on FMovieSceneObjectPathChannel");
static_assert(sizeof(FMovieSceneObjectPathChannel) == 0x000130, "Wrong size on FMovieSceneObjectPathChannel");
static_assert(offsetof(FMovieSceneObjectPathChannel, PropertyClass) == 0x000050, "Member 'FMovieSceneObjectPathChannel::PropertyClass' has a wrong offset!");
static_assert(offsetof(FMovieSceneObjectPathChannel, Times) == 0x000058, "Member 'FMovieSceneObjectPathChannel::Times' has a wrong offset!");
static_assert(offsetof(FMovieSceneObjectPathChannel, Values) == 0x000068, "Member 'FMovieSceneObjectPathChannel::Values' has a wrong offset!");
static_assert(offsetof(FMovieSceneObjectPathChannel, DefaultValue) == 0x000078, "Member 'FMovieSceneObjectPathChannel::DefaultValue' has a wrong offset!");
static_assert(offsetof(FMovieSceneObjectPathChannel, KeyHandles) == 0x0000A8, "Member 'FMovieSceneObjectPathChannel::KeyHandles' has a wrong offset!");

struct FMovieSceneSequenceCompilerMaskStruct final
{
public:
	uint8                                         bHierarchy : 1;
	uint8                                         bEvaluationTemplate : 1;
	uint8                                         bEvaluationTemplateField : 1;
	uint8                                         bEntityComponentField : 1;
};
static_assert(alignof(FMovieSceneSequenceCompilerMaskStruct) == 0x000001, "Wrong alignment on FMovieSceneSequenceCompilerMaskStruct");
static_assert(sizeof(FMovieSceneSequenceCompilerMaskStruct) == 0x000001, "Wrong size on FMovieSceneSequenceCompilerMaskStruct");

struct FMovieSceneCompiledSequenceFlagStruct final
{
public:
	uint8                                         bParentSequenceRequiresLowerFence : 1;
	uint8                                         bParentSequenceRequiresUpperFence : 1;
};
static_assert(alignof(FMovieSceneCompiledSequenceFlagStruct) == 0x000001, "Wrong alignment on FMovieSceneCompiledSequenceFlagStruct");
static_assert(sizeof(FMovieSceneCompiledSequenceFlagStruct) == 0x000001, "Wrong size on FMovieSceneCompiledSequenceFlagStruct");

struct FEasingComponentData final
{
public:
	class UMovieSceneSection*                     Section;
};
static_assert(alignof(FEasingComponentData) == 0x000008, "Wrong alignment on FEasingComponentData");
static_assert(sizeof(FEasingComponentData) == 0x000008, "Wrong size on FEasingComponentData");
static_assert(offsetof(FEasingComponentData, Section) == 0x000000, "Member 'FEasingComponentData::Section' has a wrong offset!");

struct FMovieSceneTrackInstanceComponent final
{
public:
	class UMovieSceneSection*                     Owner;
	TSubclassOf<class UMovieSceneTrackInstance>   TrackInstanceClass;
};
static_assert(alignof(FMovieSceneTrackInstanceComponent) == 0x000008, "Wrong alignment on FMovieSceneTrackInstanceComponent");
static_assert(sizeof(FMovieSceneTrackInstanceComponent) == 0x000010, "Wrong size on FMovieSceneTrackInstanceComponent");
static_assert(offsetof(FMovieSceneTrackInstanceComponent, Owner) == 0x000000, "Member 'FMovieSceneTrackInstanceComponent::Owner' has a wrong offset!");
static_assert(offsetof(FMovieSceneTrackInstanceComponent, TrackInstanceClass) == 0x000008, "Member 'FMovieSceneTrackInstanceComponent::TrackInstanceClass' has a wrong offset!");

struct FMovieSceneEvaluationHookComponent final
{
public:
	TScriptInterface<class IMovieSceneEvaluationHook> Interface;
	uint8                                         Pad_10[0x10];
};
static_assert(alignof(FMovieSceneEvaluationHookComponent) == 0x000008, "Wrong alignment on FMovieSceneEvaluationHookComponent");
static_assert(sizeof(FMovieSceneEvaluationHookComponent) == 0x000020, "Wrong size on FMovieSceneEvaluationHookComponent");
static_assert(offsetof(FMovieSceneEvaluationHookComponent, Interface) == 0x000000, "Member 'FMovieSceneEvaluationHookComponent::Interface' has a wrong offset!");

struct FTrackInstanceInputComponent final
{
public:
	class UMovieSceneSection*                     Section;
	int32                                         OutputIndex;
	uint8                                         Pad_C[0x4];
};
static_assert(alignof(FTrackInstanceInputComponent) == 0x000008, "Wrong alignment on FTrackInstanceInputComponent");
static_assert(sizeof(FTrackInstanceInputComponent) == 0x000010, "Wrong size on FTrackInstanceInputComponent");
static_assert(offsetof(FTrackInstanceInputComponent, Section) == 0x000000, "Member 'FTrackInstanceInputComponent::Section' has a wrong offset!");
static_assert(offsetof(FTrackInstanceInputComponent, OutputIndex) == 0x000008, "Member 'FTrackInstanceInputComponent::OutputIndex' has a wrong offset!");

struct FMovieSceneEntitySystemGraphNode final
{
public:
	uint8                                         Pad_0[0x20];
	class UMovieSceneEntitySystem*                System;
};
static_assert(alignof(FMovieSceneEntitySystemGraphNode) == 0x000008, "Wrong alignment on FMovieSceneEntitySystemGraphNode");
static_assert(sizeof(FMovieSceneEntitySystemGraphNode) == 0x000028, "Wrong size on FMovieSceneEntitySystemGraphNode");
static_assert(offsetof(FMovieSceneEntitySystemGraphNode, System) == 0x000020, "Member 'FMovieSceneEntitySystemGraphNode::System' has a wrong offset!");

struct alignas(0x08) FMovieSceneEntitySystemGraphNodes final
{
public:
	uint8                                         Pad_0[0x38];
};
static_assert(alignof(FMovieSceneEntitySystemGraphNodes) == 0x000008, "Wrong alignment on FMovieSceneEntitySystemGraphNodes");
static_assert(sizeof(FMovieSceneEntitySystemGraphNodes) == 0x000038, "Wrong size on FMovieSceneEntitySystemGraphNodes");

struct FMovieSceneEntitySystemGraph final
{
public:
	uint8                                         Pad_0[0x80];
	struct FMovieSceneEntitySystemGraphNodes      Nodes;
	uint8                                         Pad_B8[0x98];
};
static_assert(alignof(FMovieSceneEntitySystemGraph) == 0x000008, "Wrong alignment on FMovieSceneEntitySystemGraph");
static_assert(sizeof(FMovieSceneEntitySystemGraph) == 0x000150, "Wrong size on FMovieSceneEntitySystemGraph");
static_assert(offsetof(FMovieSceneEntitySystemGraph, Nodes) == 0x000080, "Member 'FMovieSceneEntitySystemGraph::Nodes' has a wrong offset!");

struct FMovieSceneEvaluationHookEvent final
{
public:
	struct FMovieSceneEvaluationHookComponent     Hook;
	uint8                                         Pad_20[0x18];
};
static_assert(alignof(FMovieSceneEvaluationHookEvent) == 0x000008, "Wrong alignment on FMovieSceneEvaluationHookEvent");
static_assert(sizeof(FMovieSceneEvaluationHookEvent) == 0x000038, "Wrong size on FMovieSceneEvaluationHookEvent");
static_assert(offsetof(FMovieSceneEvaluationHookEvent, Hook) == 0x000000, "Member 'FMovieSceneEvaluationHookEvent::Hook' has a wrong offset!");

struct FMovieSceneEvaluationHookEventContainer final
{
public:
	TArray<struct FMovieSceneEvaluationHookEvent> Events;
};
static_assert(alignof(FMovieSceneEvaluationHookEventContainer) == 0x000008, "Wrong alignment on FMovieSceneEvaluationHookEventContainer");
static_assert(sizeof(FMovieSceneEvaluationHookEventContainer) == 0x000010, "Wrong size on FMovieSceneEvaluationHookEventContainer");
static_assert(offsetof(FMovieSceneEvaluationHookEventContainer, Events) == 0x000000, "Member 'FMovieSceneEvaluationHookEventContainer::Events' has a wrong offset!");

struct alignas(0x02) FMovieSceneEvaluationInstanceKey final
{
public:
	uint8                                         Pad_0[0x4];
};
static_assert(alignof(FMovieSceneEvaluationInstanceKey) == 0x000002, "Wrong alignment on FMovieSceneEvaluationInstanceKey");
static_assert(sizeof(FMovieSceneEvaluationInstanceKey) == 0x000004, "Wrong size on FMovieSceneEvaluationInstanceKey");

struct FMovieSceneTrackInstanceInput final
{
public:
	class UMovieSceneSection*                     Section;
	uint8                                         Pad_8[0x8];
};
static_assert(alignof(FMovieSceneTrackInstanceInput) == 0x000008, "Wrong alignment on FMovieSceneTrackInstanceInput");
static_assert(sizeof(FMovieSceneTrackInstanceInput) == 0x000010, "Wrong size on FMovieSceneTrackInstanceInput");
static_assert(offsetof(FMovieSceneTrackInstanceInput, Section) == 0x000000, "Member 'FMovieSceneTrackInstanceInput::Section' has a wrong offset!");

struct FMovieSceneTrackInstanceEntry final
{
public:
	class UObject*                                BoundObject;
	class UMovieSceneTrackInstance*               TrackInstance;
};
static_assert(alignof(FMovieSceneTrackInstanceEntry) == 0x000008, "Wrong alignment on FMovieSceneTrackInstanceEntry");
static_assert(sizeof(FMovieSceneTrackInstanceEntry) == 0x000010, "Wrong size on FMovieSceneTrackInstanceEntry");
static_assert(offsetof(FMovieSceneTrackInstanceEntry, BoundObject) == 0x000000, "Member 'FMovieSceneTrackInstanceEntry::BoundObject' has a wrong offset!");
static_assert(offsetof(FMovieSceneTrackInstanceEntry, TrackInstance) == 0x000008, "Member 'FMovieSceneTrackInstanceEntry::TrackInstance' has a wrong offset!");

struct FOptionalMovieSceneBlendType final
{
public:
	EMovieSceneBlendType                          BlendType;
	bool                                          bIsValid;
};
static_assert(alignof(FOptionalMovieSceneBlendType) == 0x000001, "Wrong alignment on FOptionalMovieSceneBlendType");
static_assert(sizeof(FOptionalMovieSceneBlendType) == 0x000002, "Wrong size on FOptionalMovieSceneBlendType");
static_assert(offsetof(FOptionalMovieSceneBlendType, BlendType) == 0x000000, "Member 'FOptionalMovieSceneBlendType::BlendType' has a wrong offset!");
static_assert(offsetof(FOptionalMovieSceneBlendType, bIsValid) == 0x000001, "Member 'FOptionalMovieSceneBlendType::bIsValid' has a wrong offset!");

struct FMovieSceneEvalTemplate : public FMovieSceneEvalTemplateBase
{
public:
	EMovieSceneCompletionMode                     CompletionMode;
	uint8                                         Pad_11[0x3];
	TWeakObjectPtr<class UMovieSceneSection>      SourceSectionPtr;
	uint8                                         Pad_1C[0x4];
};
static_assert(alignof(FMovieSceneEvalTemplate) == 0x000008, "Wrong alignment on FMovieSceneEvalTemplate");
static_assert(sizeof(FMovieSceneEvalTemplate) == 0x000020, "Wrong size on FMovieSceneEvalTemplate");
static_assert(offsetof(FMovieSceneEvalTemplate, CompletionMode) == 0x000010, "Member 'FMovieSceneEvalTemplate::CompletionMode' has a wrong offset!");
static_assert(offsetof(FMovieSceneEvalTemplate, SourceSectionPtr) == 0x000014, "Member 'FMovieSceneEvalTemplate::SourceSectionPtr' has a wrong offset!");

struct alignas(0x08) FMovieSceneEvalTemplatePtr final
{
public:
	uint8                                         Pad_0[0x88];
};
static_assert(alignof(FMovieSceneEvalTemplatePtr) == 0x000008, "Wrong alignment on FMovieSceneEvalTemplatePtr");
static_assert(sizeof(FMovieSceneEvalTemplatePtr) == 0x000088, "Wrong size on FMovieSceneEvalTemplatePtr");

struct FMovieSceneEvaluationFieldEntityKey final
{
public:
	TWeakObjectPtr<class UObject>                 EntityOwner;
	uint32                                        EntityID;
};
static_assert(alignof(FMovieSceneEvaluationFieldEntityKey) == 0x000004, "Wrong alignment on FMovieSceneEvaluationFieldEntityKey");
static_assert(sizeof(FMovieSceneEvaluationFieldEntityKey) == 0x00000C, "Wrong size on FMovieSceneEvaluationFieldEntityKey");
static_assert(offsetof(FMovieSceneEvaluationFieldEntityKey, EntityOwner) == 0x000000, "Member 'FMovieSceneEvaluationFieldEntityKey::EntityOwner' has a wrong offset!");
static_assert(offsetof(FMovieSceneEvaluationFieldEntityKey, EntityID) == 0x000008, "Member 'FMovieSceneEvaluationFieldEntityKey::EntityID' has a wrong offset!");

struct FMovieSceneEvaluationFieldEntity final
{
public:
	struct FMovieSceneEvaluationFieldEntityKey    Key;
	int32                                         SharedMetaDataIndex;
};
static_assert(alignof(FMovieSceneEvaluationFieldEntity) == 0x000004, "Wrong alignment on FMovieSceneEvaluationFieldEntity");
static_assert(sizeof(FMovieSceneEvaluationFieldEntity) == 0x000010, "Wrong size on FMovieSceneEvaluationFieldEntity");
static_assert(offsetof(FMovieSceneEvaluationFieldEntity, Key) == 0x000000, "Member 'FMovieSceneEvaluationFieldEntity::Key' has a wrong offset!");
static_assert(offsetof(FMovieSceneEvaluationFieldEntity, SharedMetaDataIndex) == 0x00000C, "Member 'FMovieSceneEvaluationFieldEntity::SharedMetaDataIndex' has a wrong offset!");

struct FMovieSceneEvaluationFieldSharedEntityMetaData final
{
public:
	struct FGuid                                  ObjectBindingID;
};
static_assert(alignof(FMovieSceneEvaluationFieldSharedEntityMetaData) == 0x000004, "Wrong alignment on FMovieSceneEvaluationFieldSharedEntityMetaData");
static_assert(sizeof(FMovieSceneEvaluationFieldSharedEntityMetaData) == 0x000010, "Wrong size on FMovieSceneEvaluationFieldSharedEntityMetaData");
static_assert(offsetof(FMovieSceneEvaluationFieldSharedEntityMetaData, ObjectBindingID) == 0x000000, "Member 'FMovieSceneEvaluationFieldSharedEntityMetaData::ObjectBindingID' has a wrong offset!");

struct FMovieSceneEvaluationFieldEntityMetaData final
{
public:
	class FString                                 OverrideBoundPropertyPath;
	struct FFrameNumber                           ForcedTime;
	uint8                                         Pad_14[0x4];
	ESectionEvaluationFlags                       Flags;
	uint8                                         bEvaluateInSequencePreRoll : 1;
	uint8                                         bEvaluateInSequencePostRoll : 1;
	uint8                                         Pad_1A[0x6];
};
static_assert(alignof(FMovieSceneEvaluationFieldEntityMetaData) == 0x000008, "Wrong alignment on FMovieSceneEvaluationFieldEntityMetaData");
static_assert(sizeof(FMovieSceneEvaluationFieldEntityMetaData) == 0x000020, "Wrong size on FMovieSceneEvaluationFieldEntityMetaData");
static_assert(offsetof(FMovieSceneEvaluationFieldEntityMetaData, OverrideBoundPropertyPath) == 0x000000, "Member 'FMovieSceneEvaluationFieldEntityMetaData::OverrideBoundPropertyPath' has a wrong offset!");
static_assert(offsetof(FMovieSceneEvaluationFieldEntityMetaData, ForcedTime) == 0x000010, "Member 'FMovieSceneEvaluationFieldEntityMetaData::ForcedTime' has a wrong offset!");
static_assert(offsetof(FMovieSceneEvaluationFieldEntityMetaData, Flags) == 0x000018, "Member 'FMovieSceneEvaluationFieldEntityMetaData::Flags' has a wrong offset!");

struct alignas(0x08) FMovieSceneEvaluationFieldEntityTree final
{
public:
	uint8                                         Pad_0[0x60];
};
static_assert(alignof(FMovieSceneEvaluationFieldEntityTree) == 0x000008, "Wrong alignment on FMovieSceneEvaluationFieldEntityTree");
static_assert(sizeof(FMovieSceneEvaluationFieldEntityTree) == 0x000060, "Wrong size on FMovieSceneEvaluationFieldEntityTree");

struct FMovieSceneEntityComponentField final
{
public:
	struct FMovieSceneEvaluationFieldEntityTree   PersistentEntityTree;
	struct FMovieSceneEvaluationFieldEntityTree   OneShotEntityTree;
	TArray<struct FMovieSceneEvaluationFieldEntity> Entities;
	TArray<struct FMovieSceneEvaluationFieldEntityMetaData> EntityMetaData;
	TArray<struct FMovieSceneEvaluationFieldSharedEntityMetaData> SharedMetaData;
};
static_assert(alignof(FMovieSceneEntityComponentField) == 0x000008, "Wrong alignment on FMovieSceneEntityComponentField");
static_assert(sizeof(FMovieSceneEntityComponentField) == 0x0000F0, "Wrong size on FMovieSceneEntityComponentField");
static_assert(offsetof(FMovieSceneEntityComponentField, PersistentEntityTree) == 0x000000, "Member 'FMovieSceneEntityComponentField::PersistentEntityTree' has a wrong offset!");
static_assert(offsetof(FMovieSceneEntityComponentField, OneShotEntityTree) == 0x000060, "Member 'FMovieSceneEntityComponentField::OneShotEntityTree' has a wrong offset!");
static_assert(offsetof(FMovieSceneEntityComponentField, Entities) == 0x0000C0, "Member 'FMovieSceneEntityComponentField::Entities' has a wrong offset!");
static_assert(offsetof(FMovieSceneEntityComponentField, EntityMetaData) == 0x0000D0, "Member 'FMovieSceneEntityComponentField::EntityMetaData' has a wrong offset!");
static_assert(offsetof(FMovieSceneEntityComponentField, SharedMetaData) == 0x0000E0, "Member 'FMovieSceneEntityComponentField::SharedMetaData' has a wrong offset!");

struct FMovieSceneEvaluationFieldTrackPtr
{
public:
	struct FMovieSceneSequenceID                  SequenceID;
	struct FMovieSceneTrackIdentifier             TrackIdentifier;
};
static_assert(alignof(FMovieSceneEvaluationFieldTrackPtr) == 0x000004, "Wrong alignment on FMovieSceneEvaluationFieldTrackPtr");
static_assert(sizeof(FMovieSceneEvaluationFieldTrackPtr) == 0x000008, "Wrong size on FMovieSceneEvaluationFieldTrackPtr");
static_assert(offsetof(FMovieSceneEvaluationFieldTrackPtr, SequenceID) == 0x000000, "Member 'FMovieSceneEvaluationFieldTrackPtr::SequenceID' has a wrong offset!");
static_assert(offsetof(FMovieSceneEvaluationFieldTrackPtr, TrackIdentifier) == 0x000004, "Member 'FMovieSceneEvaluationFieldTrackPtr::TrackIdentifier' has a wrong offset!");

struct FMovieSceneEvaluationFieldSegmentPtr final : public FMovieSceneEvaluationFieldTrackPtr
{
public:
	struct FMovieSceneSegmentIdentifier           SegmentID;
};
static_assert(alignof(FMovieSceneEvaluationFieldSegmentPtr) == 0x000004, "Wrong alignment on FMovieSceneEvaluationFieldSegmentPtr");
static_assert(sizeof(FMovieSceneEvaluationFieldSegmentPtr) == 0x00000C, "Wrong size on FMovieSceneEvaluationFieldSegmentPtr");
static_assert(offsetof(FMovieSceneEvaluationFieldSegmentPtr, SegmentID) == 0x000008, "Member 'FMovieSceneEvaluationFieldSegmentPtr::SegmentID' has a wrong offset!");

struct FMovieSceneFieldEntry_EvaluationTrack final
{
public:
	struct FMovieSceneEvaluationFieldTrackPtr     TrackPtr;
	uint16                                        NumChildren;
	uint8                                         Pad_A[0x2];
};
static_assert(alignof(FMovieSceneFieldEntry_EvaluationTrack) == 0x000004, "Wrong alignment on FMovieSceneFieldEntry_EvaluationTrack");
static_assert(sizeof(FMovieSceneFieldEntry_EvaluationTrack) == 0x00000C, "Wrong size on FMovieSceneFieldEntry_EvaluationTrack");
static_assert(offsetof(FMovieSceneFieldEntry_EvaluationTrack, TrackPtr) == 0x000000, "Member 'FMovieSceneFieldEntry_EvaluationTrack::TrackPtr' has a wrong offset!");
static_assert(offsetof(FMovieSceneFieldEntry_EvaluationTrack, NumChildren) == 0x000008, "Member 'FMovieSceneFieldEntry_EvaluationTrack::NumChildren' has a wrong offset!");

struct FMovieSceneFieldEntry_ChildTemplate final
{
public:
	uint16                                        ChildIndex;
	ESectionEvaluationFlags                       Flags;
	uint8                                         Pad_3[0x1];
	struct FFrameNumber                           ForcedTime;
};
static_assert(alignof(FMovieSceneFieldEntry_ChildTemplate) == 0x000004, "Wrong alignment on FMovieSceneFieldEntry_ChildTemplate");
static_assert(sizeof(FMovieSceneFieldEntry_ChildTemplate) == 0x000008, "Wrong size on FMovieSceneFieldEntry_ChildTemplate");
static_assert(offsetof(FMovieSceneFieldEntry_ChildTemplate, ChildIndex) == 0x000000, "Member 'FMovieSceneFieldEntry_ChildTemplate::ChildIndex' has a wrong offset!");
static_assert(offsetof(FMovieSceneFieldEntry_ChildTemplate, Flags) == 0x000002, "Member 'FMovieSceneFieldEntry_ChildTemplate::Flags' has a wrong offset!");
static_assert(offsetof(FMovieSceneFieldEntry_ChildTemplate, ForcedTime) == 0x000004, "Member 'FMovieSceneFieldEntry_ChildTemplate::ForcedTime' has a wrong offset!");

struct FMovieSceneEvaluationGroupLUTIndex final
{
public:
	int32                                         NumInitPtrs;
	int32                                         NumEvalPtrs;
};
static_assert(alignof(FMovieSceneEvaluationGroupLUTIndex) == 0x000004, "Wrong alignment on FMovieSceneEvaluationGroupLUTIndex");
static_assert(sizeof(FMovieSceneEvaluationGroupLUTIndex) == 0x000008, "Wrong size on FMovieSceneEvaluationGroupLUTIndex");
static_assert(offsetof(FMovieSceneEvaluationGroupLUTIndex, NumInitPtrs) == 0x000000, "Member 'FMovieSceneEvaluationGroupLUTIndex::NumInitPtrs' has a wrong offset!");
static_assert(offsetof(FMovieSceneEvaluationGroupLUTIndex, NumEvalPtrs) == 0x000004, "Member 'FMovieSceneEvaluationGroupLUTIndex::NumEvalPtrs' has a wrong offset!");

struct FMovieSceneEvaluationGroup final
{
public:
	TArray<struct FMovieSceneEvaluationGroupLUTIndex> LUTIndices;
	TArray<struct FMovieSceneFieldEntry_EvaluationTrack> TrackLUT;
	TArray<struct FMovieSceneFieldEntry_ChildTemplate> SectionLUT;
};
static_assert(alignof(FMovieSceneEvaluationGroup) == 0x000008, "Wrong alignment on FMovieSceneEvaluationGroup");
static_assert(sizeof(FMovieSceneEvaluationGroup) == 0x000030, "Wrong size on FMovieSceneEvaluationGroup");
static_assert(offsetof(FMovieSceneEvaluationGroup, LUTIndices) == 0x000000, "Member 'FMovieSceneEvaluationGroup::LUTIndices' has a wrong offset!");
static_assert(offsetof(FMovieSceneEvaluationGroup, TrackLUT) == 0x000010, "Member 'FMovieSceneEvaluationGroup::TrackLUT' has a wrong offset!");
static_assert(offsetof(FMovieSceneEvaluationGroup, SectionLUT) == 0x000020, "Member 'FMovieSceneEvaluationGroup::SectionLUT' has a wrong offset!");

struct alignas(0x04) FMovieSceneFrameRange final
{
public:
	uint8                                         Pad_0[0x10];
};
static_assert(alignof(FMovieSceneFrameRange) == 0x000004, "Wrong alignment on FMovieSceneFrameRange");
static_assert(sizeof(FMovieSceneFrameRange) == 0x000010, "Wrong size on FMovieSceneFrameRange");

struct FMovieSceneEvaluationField final
{
public:
	TArray<struct FMovieSceneFrameRange>          Ranges;
	TArray<struct FMovieSceneEvaluationGroup>     Groups;
	TArray<struct FMovieSceneEvaluationMetaData>  MetaData;
};
static_assert(alignof(FMovieSceneEvaluationField) == 0x000008, "Wrong alignment on FMovieSceneEvaluationField");
static_assert(sizeof(FMovieSceneEvaluationField) == 0x000030, "Wrong size on FMovieSceneEvaluationField");
static_assert(offsetof(FMovieSceneEvaluationField, Ranges) == 0x000000, "Member 'FMovieSceneEvaluationField::Ranges' has a wrong offset!");
static_assert(offsetof(FMovieSceneEvaluationField, Groups) == 0x000010, "Member 'FMovieSceneEvaluationField::Groups' has a wrong offset!");
static_assert(offsetof(FMovieSceneEvaluationField, MetaData) == 0x000020, "Member 'FMovieSceneEvaluationField::MetaData' has a wrong offset!");

struct FMovieSceneTemplateGenerationLedger final
{
public:
	struct FMovieSceneTrackIdentifier             LastTrackIdentifier;
	uint8                                         Pad_4[0x4];
	TMap<struct FGuid, struct FMovieSceneTrackIdentifier> TrackSignatureToTrackIdentifier;
	TMap<struct FGuid, struct FMovieSceneFrameRange> SubSectionRanges;
};
static_assert(alignof(FMovieSceneTemplateGenerationLedger) == 0x000008, "Wrong alignment on FMovieSceneTemplateGenerationLedger");
static_assert(sizeof(FMovieSceneTemplateGenerationLedger) == 0x0000A8, "Wrong size on FMovieSceneTemplateGenerationLedger");
static_assert(offsetof(FMovieSceneTemplateGenerationLedger, LastTrackIdentifier) == 0x000000, "Member 'FMovieSceneTemplateGenerationLedger::LastTrackIdentifier' has a wrong offset!");
static_assert(offsetof(FMovieSceneTemplateGenerationLedger, TrackSignatureToTrackIdentifier) == 0x000008, "Member 'FMovieSceneTemplateGenerationLedger::TrackSignatureToTrackIdentifier' has a wrong offset!");
static_assert(offsetof(FMovieSceneTemplateGenerationLedger, SubSectionRanges) == 0x000058, "Member 'FMovieSceneTemplateGenerationLedger::SubSectionRanges' has a wrong offset!");

struct FMovieSceneSubSectionData final
{
public:
	TWeakObjectPtr<class UMovieSceneSubSection>   Section;
	struct FGuid                                  ObjectBindingID;
	ESectionEvaluationFlags                       Flags;
	uint8                                         Pad_19[0x3];
};
static_assert(alignof(FMovieSceneSubSectionData) == 0x000004, "Wrong alignment on FMovieSceneSubSectionData");
static_assert(sizeof(FMovieSceneSubSectionData) == 0x00001C, "Wrong size on FMovieSceneSubSectionData");
static_assert(offsetof(FMovieSceneSubSectionData, Section) == 0x000000, "Member 'FMovieSceneSubSectionData::Section' has a wrong offset!");
static_assert(offsetof(FMovieSceneSubSectionData, ObjectBindingID) == 0x000008, "Member 'FMovieSceneSubSectionData::ObjectBindingID' has a wrong offset!");
static_assert(offsetof(FMovieSceneSubSectionData, Flags) == 0x000018, "Member 'FMovieSceneSubSectionData::Flags' has a wrong offset!");

struct FMovieSceneEvaluationTemplateSerialNumber final
{
public:
	uint32                                        Value;
};
static_assert(alignof(FMovieSceneEvaluationTemplateSerialNumber) == 0x000004, "Wrong alignment on FMovieSceneEvaluationTemplateSerialNumber");
static_assert(sizeof(FMovieSceneEvaluationTemplateSerialNumber) == 0x000004, "Wrong size on FMovieSceneEvaluationTemplateSerialNumber");
static_assert(offsetof(FMovieSceneEvaluationTemplateSerialNumber, Value) == 0x000000, "Member 'FMovieSceneEvaluationTemplateSerialNumber::Value' has a wrong offset!");

struct alignas(0x08) FMovieSceneTrackImplementationPtr final
{
public:
	uint8                                         Pad_0[0x38];
};
static_assert(alignof(FMovieSceneTrackImplementationPtr) == 0x000008, "Wrong alignment on FMovieSceneTrackImplementationPtr");
static_assert(sizeof(FMovieSceneTrackImplementationPtr) == 0x000038, "Wrong size on FMovieSceneTrackImplementationPtr");

struct FMovieSceneEvaluationTrack final
{
public:
	struct FGuid                                  ObjectBindingID;
	uint16                                        EvaluationPriority;
	EEvaluationMethod                             EvaluationMethod;
	uint8                                         Pad_13[0x1];
	TWeakObjectPtr<class UMovieSceneTrack>        SourceTrack;
	uint8                                         Pad_1C[0x4];
	TArray<struct FMovieSceneEvalTemplatePtr>     ChildTemplates;
	struct FMovieSceneTrackImplementationPtr      TrackTemplate;
	class FName                                   EvaluationGroup;
	uint8                                         bEvaluateInPreroll : 1;
	uint8                                         bEvaluateInPostroll : 1;
	uint8                                         bTearDownPriority : 1;
	uint8                                         Pad_6D[0x3];
};
static_assert(alignof(FMovieSceneEvaluationTrack) == 0x000008, "Wrong alignment on FMovieSceneEvaluationTrack");
static_assert(sizeof(FMovieSceneEvaluationTrack) == 0x000070, "Wrong size on FMovieSceneEvaluationTrack");
static_assert(offsetof(FMovieSceneEvaluationTrack, ObjectBindingID) == 0x000000, "Member 'FMovieSceneEvaluationTrack::ObjectBindingID' has a wrong offset!");
static_assert(offsetof(FMovieSceneEvaluationTrack, EvaluationPriority) == 0x000010, "Member 'FMovieSceneEvaluationTrack::EvaluationPriority' has a wrong offset!");
static_assert(offsetof(FMovieSceneEvaluationTrack, EvaluationMethod) == 0x000012, "Member 'FMovieSceneEvaluationTrack::EvaluationMethod' has a wrong offset!");
static_assert(offsetof(FMovieSceneEvaluationTrack, SourceTrack) == 0x000014, "Member 'FMovieSceneEvaluationTrack::SourceTrack' has a wrong offset!");
static_assert(offsetof(FMovieSceneEvaluationTrack, ChildTemplates) == 0x000020, "Member 'FMovieSceneEvaluationTrack::ChildTemplates' has a wrong offset!");
static_assert(offsetof(FMovieSceneEvaluationTrack, TrackTemplate) == 0x000030, "Member 'FMovieSceneEvaluationTrack::TrackTemplate' has a wrong offset!");
static_assert(offsetof(FMovieSceneEvaluationTrack, EvaluationGroup) == 0x000068, "Member 'FMovieSceneEvaluationTrack::EvaluationGroup' has a wrong offset!");

struct FMovieSceneEvaluationTemplate final
{
public:
	TMap<struct FMovieSceneTrackIdentifier, struct FMovieSceneEvaluationTrack> Tracks;
	uint8                                         Pad_50[0x50];
	struct FGuid                                  SequenceSignature;
	struct FMovieSceneEvaluationTemplateSerialNumber TemplateSerialNumber;
	uint8                                         Pad_B4[0x4];
	struct FMovieSceneTemplateGenerationLedger    TemplateLedger;
};
static_assert(alignof(FMovieSceneEvaluationTemplate) == 0x000008, "Wrong alignment on FMovieSceneEvaluationTemplate");
static_assert(sizeof(FMovieSceneEvaluationTemplate) == 0x000160, "Wrong size on FMovieSceneEvaluationTemplate");
static_assert(offsetof(FMovieSceneEvaluationTemplate, Tracks) == 0x000000, "Member 'FMovieSceneEvaluationTemplate::Tracks' has a wrong offset!");
static_assert(offsetof(FMovieSceneEvaluationTemplate, SequenceSignature) == 0x0000A0, "Member 'FMovieSceneEvaluationTemplate::SequenceSignature' has a wrong offset!");
static_assert(offsetof(FMovieSceneEvaluationTemplate, TemplateSerialNumber) == 0x0000B0, "Member 'FMovieSceneEvaluationTemplate::TemplateSerialNumber' has a wrong offset!");
static_assert(offsetof(FMovieSceneEvaluationTemplate, TemplateLedger) == 0x0000B8, "Member 'FMovieSceneEvaluationTemplate::TemplateLedger' has a wrong offset!");

struct FMovieSceneRootEvaluationTemplateInstance final
{
public:
	TWeakObjectPtr<class UMovieSceneSequence>     WeakRootSequence;
	class UMovieSceneCompiledDataManager*         CompiledDataManager;
	uint8                                         Pad_10[0x18];
	class UMovieSceneEntitySystemLinker*          EntitySystemLinker;
	TMap<struct FMovieSceneSequenceID, class UObject*> DirectorInstances;
	uint8                                         Pad_80[0x8];
};
static_assert(alignof(FMovieSceneRootEvaluationTemplateInstance) == 0x000008, "Wrong alignment on FMovieSceneRootEvaluationTemplateInstance");
static_assert(sizeof(FMovieSceneRootEvaluationTemplateInstance) == 0x000088, "Wrong size on FMovieSceneRootEvaluationTemplateInstance");
static_assert(offsetof(FMovieSceneRootEvaluationTemplateInstance, WeakRootSequence) == 0x000000, "Member 'FMovieSceneRootEvaluationTemplateInstance::WeakRootSequence' has a wrong offset!");
static_assert(offsetof(FMovieSceneRootEvaluationTemplateInstance, CompiledDataManager) == 0x000008, "Member 'FMovieSceneRootEvaluationTemplateInstance::CompiledDataManager' has a wrong offset!");
static_assert(offsetof(FMovieSceneRootEvaluationTemplateInstance, EntitySystemLinker) == 0x000028, "Member 'FMovieSceneRootEvaluationTemplateInstance::EntitySystemLinker' has a wrong offset!");
static_assert(offsetof(FMovieSceneRootEvaluationTemplateInstance, DirectorInstances) == 0x000030, "Member 'FMovieSceneRootEvaluationTemplateInstance::DirectorInstances' has a wrong offset!");

struct FMovieScenePropertySectionData final
{
public:
	class FName                                   PropertyName;
	uint8                                         Pad_4[0x4];
	class FString                                 PropertyPath;
};
static_assert(alignof(FMovieScenePropertySectionData) == 0x000008, "Wrong alignment on FMovieScenePropertySectionData");
static_assert(sizeof(FMovieScenePropertySectionData) == 0x000018, "Wrong size on FMovieScenePropertySectionData");
static_assert(offsetof(FMovieScenePropertySectionData, PropertyName) == 0x000000, "Member 'FMovieScenePropertySectionData::PropertyName' has a wrong offset!");
static_assert(offsetof(FMovieScenePropertySectionData, PropertyPath) == 0x000008, "Member 'FMovieScenePropertySectionData::PropertyPath' has a wrong offset!");

struct FMovieScenePropertySectionTemplate : public FMovieSceneEvalTemplate
{
public:
	struct FMovieScenePropertySectionData         PropertyData;
};
static_assert(alignof(FMovieScenePropertySectionTemplate) == 0x000008, "Wrong alignment on FMovieScenePropertySectionTemplate");
static_assert(sizeof(FMovieScenePropertySectionTemplate) == 0x000038, "Wrong size on FMovieScenePropertySectionTemplate");
static_assert(offsetof(FMovieScenePropertySectionTemplate, PropertyData) == 0x000020, "Member 'FMovieScenePropertySectionTemplate::PropertyData' has a wrong offset!");

struct FMovieSceneTimeWarping final
{
public:
	struct FFrameNumber                           Start;
	struct FFrameNumber                           End;
};
static_assert(alignof(FMovieSceneTimeWarping) == 0x000004, "Wrong alignment on FMovieSceneTimeWarping");
static_assert(sizeof(FMovieSceneTimeWarping) == 0x000008, "Wrong size on FMovieSceneTimeWarping");
static_assert(offsetof(FMovieSceneTimeWarping, Start) == 0x000000, "Member 'FMovieSceneTimeWarping::Start' has a wrong offset!");
static_assert(offsetof(FMovieSceneTimeWarping, End) == 0x000004, "Member 'FMovieSceneTimeWarping::End' has a wrong offset!");

struct FMovieSceneNestedSequenceTransform final
{
public:
	struct FMovieSceneTimeTransform               LinearTransform;
	struct FMovieSceneTimeWarping                 Warping;
};
static_assert(alignof(FMovieSceneNestedSequenceTransform) == 0x000004, "Wrong alignment on FMovieSceneNestedSequenceTransform");
static_assert(sizeof(FMovieSceneNestedSequenceTransform) == 0x000014, "Wrong size on FMovieSceneNestedSequenceTransform");
static_assert(offsetof(FMovieSceneNestedSequenceTransform, LinearTransform) == 0x000000, "Member 'FMovieSceneNestedSequenceTransform::LinearTransform' has a wrong offset!");
static_assert(offsetof(FMovieSceneNestedSequenceTransform, Warping) == 0x00000C, "Member 'FMovieSceneNestedSequenceTransform::Warping' has a wrong offset!");

struct FMovieSceneSequenceTransform final
{
public:
	struct FMovieSceneTimeTransform               LinearTransform;
	uint8                                         Pad_C[0x4];
	TArray<struct FMovieSceneNestedSequenceTransform> NestedTransforms;
};
static_assert(alignof(FMovieSceneSequenceTransform) == 0x000008, "Wrong alignment on FMovieSceneSequenceTransform");
static_assert(sizeof(FMovieSceneSequenceTransform) == 0x000020, "Wrong size on FMovieSceneSequenceTransform");
static_assert(offsetof(FMovieSceneSequenceTransform, LinearTransform) == 0x000000, "Member 'FMovieSceneSequenceTransform::LinearTransform' has a wrong offset!");
static_assert(offsetof(FMovieSceneSequenceTransform, NestedTransforms) == 0x000010, "Member 'FMovieSceneSequenceTransform::NestedTransforms' has a wrong offset!");

struct alignas(0x08) FMovieSceneSequenceInstanceDataPtr final
{
public:
	uint8                                         Pad_0[0x18];
};
static_assert(alignof(FMovieSceneSequenceInstanceDataPtr) == 0x000008, "Wrong alignment on FMovieSceneSequenceInstanceDataPtr");
static_assert(sizeof(FMovieSceneSequenceInstanceDataPtr) == 0x000018, "Wrong size on FMovieSceneSequenceInstanceDataPtr");

struct FMovieSceneSubSequenceData final
{
public:
	struct FSoftObjectPath                        Sequence;
	struct FMovieSceneSequenceTransform           OuterToInnerTransform;
	struct FMovieSceneSequenceTransform           RootToSequenceTransform;
	struct FFrameRate                             TickResolution;
	struct FMovieSceneSequenceID                  DeterministicSequenceID;
	struct FMovieSceneFrameRange                  ParentPlayRange;
	struct FFrameNumber                           ParentStartFrameOffset;
	struct FFrameNumber                           ParentEndFrameOffset;
	struct FFrameNumber                           ParentFirstLoopStartFrameOffset;
	bool                                          bCanLoop;
	uint8                                         Pad_81[0x3];
	struct FMovieSceneFrameRange                  PlayRange;
	struct FMovieSceneFrameRange                  FullPlayRange;
	struct FMovieSceneFrameRange                  UnwarpedPlayRange;
	struct FMovieSceneFrameRange                  PreRollRange;
	struct FMovieSceneFrameRange                  PostRollRange;
	int16                                         HierarchicalBias;
	uint8                                         Pad_D6[0x2];
	EMovieSceneSubSectionFlags                    AccumulatedFlags;
	uint8                                         Pad_DC[0x4];
	struct FMovieSceneSequenceInstanceDataPtr     InstanceData;
	uint8                                         Pad_F8[0x8];
	struct FGuid                                  SubSectionSignature;
};
static_assert(alignof(FMovieSceneSubSequenceData) == 0x000008, "Wrong alignment on FMovieSceneSubSequenceData");
static_assert(sizeof(FMovieSceneSubSequenceData) == 0x000110, "Wrong size on FMovieSceneSubSequenceData");
static_assert(offsetof(FMovieSceneSubSequenceData, Sequence) == 0x000000, "Member 'FMovieSceneSubSequenceData::Sequence' has a wrong offset!");
static_assert(offsetof(FMovieSceneSubSequenceData, OuterToInnerTransform) == 0x000018, "Member 'FMovieSceneSubSequenceData::OuterToInnerTransform' has a wrong offset!");
static_assert(offsetof(FMovieSceneSubSequenceData, RootToSequenceTransform) == 0x000038, "Member 'FMovieSceneSubSequenceData::RootToSequenceTransform' has a wrong offset!");
static_assert(offsetof(FMovieSceneSubSequenceData, TickResolution) == 0x000058, "Member 'FMovieSceneSubSequenceData::TickResolution' has a wrong offset!");
static_assert(offsetof(FMovieSceneSubSequenceData, DeterministicSequenceID) == 0x000060, "Member 'FMovieSceneSubSequenceData::DeterministicSequenceID' has a wrong offset!");
static_assert(offsetof(FMovieSceneSubSequenceData, ParentPlayRange) == 0x000064, "Member 'FMovieSceneSubSequenceData::ParentPlayRange' has a wrong offset!");
static_assert(offsetof(FMovieSceneSubSequenceData, ParentStartFrameOffset) == 0x000074, "Member 'FMovieSceneSubSequenceData::ParentStartFrameOffset' has a wrong offset!");
static_assert(offsetof(FMovieSceneSubSequenceData, ParentEndFrameOffset) == 0x000078, "Member 'FMovieSceneSubSequenceData::ParentEndFrameOffset' has a wrong offset!");
static_assert(offsetof(FMovieSceneSubSequenceData, ParentFirstLoopStartFrameOffset) == 0x00007C, "Member 'FMovieSceneSubSequenceData::ParentFirstLoopStartFrameOffset' has a wrong offset!");
static_assert(offsetof(FMovieSceneSubSequenceData, bCanLoop) == 0x000080, "Member 'FMovieSceneSubSequenceData::bCanLoop' has a wrong offset!");
static_assert(offsetof(FMovieSceneSubSequenceData, PlayRange) == 0x000084, "Member 'FMovieSceneSubSequenceData::PlayRange' has a wrong offset!");
static_assert(offsetof(FMovieSceneSubSequenceData, FullPlayRange) == 0x000094, "Member 'FMovieSceneSubSequenceData::FullPlayRange' has a wrong offset!");
static_assert(offsetof(FMovieSceneSubSequenceData, UnwarpedPlayRange) == 0x0000A4, "Member 'FMovieSceneSubSequenceData::UnwarpedPlayRange' has a wrong offset!");
static_assert(offsetof(FMovieSceneSubSequenceData, PreRollRange) == 0x0000B4, "Member 'FMovieSceneSubSequenceData::PreRollRange' has a wrong offset!");
static_assert(offsetof(FMovieSceneSubSequenceData, PostRollRange) == 0x0000C4, "Member 'FMovieSceneSubSequenceData::PostRollRange' has a wrong offset!");
static_assert(offsetof(FMovieSceneSubSequenceData, HierarchicalBias) == 0x0000D4, "Member 'FMovieSceneSubSequenceData::HierarchicalBias' has a wrong offset!");
static_assert(offsetof(FMovieSceneSubSequenceData, AccumulatedFlags) == 0x0000D8, "Member 'FMovieSceneSubSequenceData::AccumulatedFlags' has a wrong offset!");
static_assert(offsetof(FMovieSceneSubSequenceData, InstanceData) == 0x0000E0, "Member 'FMovieSceneSubSequenceData::InstanceData' has a wrong offset!");
static_assert(offsetof(FMovieSceneSubSequenceData, SubSectionSignature) == 0x000100, "Member 'FMovieSceneSubSequenceData::SubSectionSignature' has a wrong offset!");

struct FMovieSceneSequenceHierarchyNode final
{
public:
	struct FMovieSceneSequenceID                  ParentID;
	uint8                                         Pad_4[0x4];
	TArray<struct FMovieSceneSequenceID>          Children;
};
static_assert(alignof(FMovieSceneSequenceHierarchyNode) == 0x000008, "Wrong alignment on FMovieSceneSequenceHierarchyNode");
static_assert(sizeof(FMovieSceneSequenceHierarchyNode) == 0x000018, "Wrong size on FMovieSceneSequenceHierarchyNode");
static_assert(offsetof(FMovieSceneSequenceHierarchyNode, ParentID) == 0x000000, "Member 'FMovieSceneSequenceHierarchyNode::ParentID' has a wrong offset!");
static_assert(offsetof(FMovieSceneSequenceHierarchyNode, Children) == 0x000008, "Member 'FMovieSceneSequenceHierarchyNode::Children' has a wrong offset!");

struct alignas(0x08) FMovieSceneSubSequenceTreeEntry final
{
public:
	uint8                                         Pad_0[0x18];
};
static_assert(alignof(FMovieSceneSubSequenceTreeEntry) == 0x000008, "Wrong alignment on FMovieSceneSubSequenceTreeEntry");
static_assert(sizeof(FMovieSceneSubSequenceTreeEntry) == 0x000018, "Wrong size on FMovieSceneSubSequenceTreeEntry");

struct alignas(0x08) FMovieSceneSubSequenceTree final
{
public:
	uint8                                         Pad_0[0x60];
};
static_assert(alignof(FMovieSceneSubSequenceTree) == 0x000008, "Wrong alignment on FMovieSceneSubSequenceTree");
static_assert(sizeof(FMovieSceneSubSequenceTree) == 0x000060, "Wrong size on FMovieSceneSubSequenceTree");

struct FMovieSceneSequenceHierarchy final
{
public:
	struct FMovieSceneSequenceHierarchyNode       RootNode;
	struct FMovieSceneSubSequenceTree             Tree;
	TMap<struct FMovieSceneSequenceID, struct FMovieSceneSubSequenceData> SubSequences;
	TMap<struct FMovieSceneSequenceID, struct FMovieSceneSequenceHierarchyNode> Hierarchy;
};
static_assert(alignof(FMovieSceneSequenceHierarchy) == 0x000008, "Wrong alignment on FMovieSceneSequenceHierarchy");
static_assert(sizeof(FMovieSceneSequenceHierarchy) == 0x000118, "Wrong size on FMovieSceneSequenceHierarchy");
static_assert(offsetof(FMovieSceneSequenceHierarchy, RootNode) == 0x000000, "Member 'FMovieSceneSequenceHierarchy::RootNode' has a wrong offset!");
static_assert(offsetof(FMovieSceneSequenceHierarchy, Tree) == 0x000018, "Member 'FMovieSceneSequenceHierarchy::Tree' has a wrong offset!");
static_assert(offsetof(FMovieSceneSequenceHierarchy, SubSequences) == 0x000078, "Member 'FMovieSceneSequenceHierarchy::SubSequences' has a wrong offset!");
static_assert(offsetof(FMovieSceneSequenceHierarchy, Hierarchy) == 0x0000C8, "Member 'FMovieSceneSequenceHierarchy::Hierarchy' has a wrong offset!");

struct FMovieSceneWarpCounter final
{
public:
	TArray<uint32>                                WarpCounts;
};
static_assert(alignof(FMovieSceneWarpCounter) == 0x000008, "Wrong alignment on FMovieSceneWarpCounter");
static_assert(sizeof(FMovieSceneWarpCounter) == 0x000010, "Wrong size on FMovieSceneWarpCounter");
static_assert(offsetof(FMovieSceneWarpCounter, WarpCounts) == 0x000000, "Member 'FMovieSceneWarpCounter::WarpCounts' has a wrong offset!");

struct FMovieSceneTrackImplementation : public FMovieSceneEvalTemplateBase
{
};
static_assert(alignof(FMovieSceneTrackImplementation) == 0x000008, "Wrong alignment on FMovieSceneTrackImplementation");
static_assert(sizeof(FMovieSceneTrackImplementation) == 0x000010, "Wrong size on FMovieSceneTrackImplementation");

struct FMovieSceneExpansionState final
{
public:
	bool                                          bExpanded;
};
static_assert(alignof(FMovieSceneExpansionState) == 0x000001, "Wrong alignment on FMovieSceneExpansionState");
static_assert(sizeof(FMovieSceneExpansionState) == 0x000001, "Wrong size on FMovieSceneExpansionState");
static_assert(offsetof(FMovieSceneExpansionState, bExpanded) == 0x000000, "Member 'FMovieSceneExpansionState::bExpanded' has a wrong offset!");

struct FMovieSceneEditorData final
{
public:
	TMap<class FString, struct FMovieSceneExpansionState> ExpansionStates;
	TArray<class FString>                         PinnedNodes;
	double                                        ViewStart;
	double                                        ViewEnd;
	double                                        WorkStart;
	double                                        WorkEnd;
	TSet<struct FFrameNumber>                     MarkedFrames;
	struct FFloatRange                            WorkingRange;
	struct FFloatRange                            ViewRange;
};
static_assert(alignof(FMovieSceneEditorData) == 0x000008, "Wrong alignment on FMovieSceneEditorData");
static_assert(sizeof(FMovieSceneEditorData) == 0x0000F0, "Wrong size on FMovieSceneEditorData");
static_assert(offsetof(FMovieSceneEditorData, ExpansionStates) == 0x000000, "Member 'FMovieSceneEditorData::ExpansionStates' has a wrong offset!");
static_assert(offsetof(FMovieSceneEditorData, PinnedNodes) == 0x000050, "Member 'FMovieSceneEditorData::PinnedNodes' has a wrong offset!");
static_assert(offsetof(FMovieSceneEditorData, ViewStart) == 0x000060, "Member 'FMovieSceneEditorData::ViewStart' has a wrong offset!");
static_assert(offsetof(FMovieSceneEditorData, ViewEnd) == 0x000068, "Member 'FMovieSceneEditorData::ViewEnd' has a wrong offset!");
static_assert(offsetof(FMovieSceneEditorData, WorkStart) == 0x000070, "Member 'FMovieSceneEditorData::WorkStart' has a wrong offset!");
static_assert(offsetof(FMovieSceneEditorData, WorkEnd) == 0x000078, "Member 'FMovieSceneEditorData::WorkEnd' has a wrong offset!");
static_assert(offsetof(FMovieSceneEditorData, MarkedFrames) == 0x000080, "Member 'FMovieSceneEditorData::MarkedFrames' has a wrong offset!");
static_assert(offsetof(FMovieSceneEditorData, WorkingRange) == 0x0000D0, "Member 'FMovieSceneEditorData::WorkingRange' has a wrong offset!");
static_assert(offsetof(FMovieSceneEditorData, ViewRange) == 0x0000E0, "Member 'FMovieSceneEditorData::ViewRange' has a wrong offset!");

struct FMovieSceneTrackLabels final
{
public:
	TArray<class FString>                         Strings;
};
static_assert(alignof(FMovieSceneTrackLabels) == 0x000008, "Wrong alignment on FMovieSceneTrackLabels");
static_assert(sizeof(FMovieSceneTrackLabels) == 0x000010, "Wrong size on FMovieSceneTrackLabels");
static_assert(offsetof(FMovieSceneTrackLabels, Strings) == 0x000000, "Member 'FMovieSceneTrackLabels::Strings' has a wrong offset!");

struct FMovieSceneObjectBindingID final
{
public:
	struct FGuid                                  Guid;
	int32                                         SequenceID;
	int32                                         ResolveParentIndex;
};
static_assert(alignof(FMovieSceneObjectBindingID) == 0x000004, "Wrong alignment on FMovieSceneObjectBindingID");
static_assert(sizeof(FMovieSceneObjectBindingID) == 0x000018, "Wrong size on FMovieSceneObjectBindingID");
static_assert(offsetof(FMovieSceneObjectBindingID, Guid) == 0x000000, "Member 'FMovieSceneObjectBindingID::Guid' has a wrong offset!");
static_assert(offsetof(FMovieSceneObjectBindingID, SequenceID) == 0x000010, "Member 'FMovieSceneObjectBindingID::SequenceID' has a wrong offset!");
static_assert(offsetof(FMovieSceneObjectBindingID, ResolveParentIndex) == 0x000014, "Member 'FMovieSceneObjectBindingID::ResolveParentIndex' has a wrong offset!");

struct FMovieSceneObjectBindingIDs final
{
public:
	TArray<struct FMovieSceneObjectBindingID>     Ids;
};
static_assert(alignof(FMovieSceneObjectBindingIDs) == 0x000008, "Wrong alignment on FMovieSceneObjectBindingIDs");
static_assert(sizeof(FMovieSceneObjectBindingIDs) == 0x000010, "Wrong size on FMovieSceneObjectBindingIDs");
static_assert(offsetof(FMovieSceneObjectBindingIDs, Ids) == 0x000000, "Member 'FMovieSceneObjectBindingIDs::Ids' has a wrong offset!");

struct FMovieSceneSectionGroup final
{
public:
	TArray<TWeakObjectPtr<class UMovieSceneSection>> Sections;
};
static_assert(alignof(FMovieSceneSectionGroup) == 0x000008, "Wrong alignment on FMovieSceneSectionGroup");
static_assert(sizeof(FMovieSceneSectionGroup) == 0x000010, "Wrong size on FMovieSceneSectionGroup");
static_assert(offsetof(FMovieSceneSectionGroup, Sections) == 0x000000, "Member 'FMovieSceneSectionGroup::Sections' has a wrong offset!");

struct FMovieSceneMarkedFrame final
{
public:
	struct FFrameNumber                           FrameNumber;
	uint8                                         Pad_4[0x4];
	class FString                                 Label;
	bool                                          bIsDeterminismFence;
	uint8                                         Pad_19[0x7];
};
static_assert(alignof(FMovieSceneMarkedFrame) == 0x000008, "Wrong alignment on FMovieSceneMarkedFrame");
static_assert(sizeof(FMovieSceneMarkedFrame) == 0x000020, "Wrong size on FMovieSceneMarkedFrame");
static_assert(offsetof(FMovieSceneMarkedFrame, FrameNumber) == 0x000000, "Member 'FMovieSceneMarkedFrame::FrameNumber' has a wrong offset!");
static_assert(offsetof(FMovieSceneMarkedFrame, Label) == 0x000008, "Member 'FMovieSceneMarkedFrame::Label' has a wrong offset!");
static_assert(offsetof(FMovieSceneMarkedFrame, bIsDeterminismFence) == 0x000018, "Member 'FMovieSceneMarkedFrame::bIsDeterminismFence' has a wrong offset!");

struct FMovieSceneBinding final
{
public:
	struct FGuid                                  ObjectGuid;
	class FString                                 BindingName;
	TArray<class UMovieSceneTrack*>               Tracks;
};
static_assert(alignof(FMovieSceneBinding) == 0x000008, "Wrong alignment on FMovieSceneBinding");
static_assert(sizeof(FMovieSceneBinding) == 0x000030, "Wrong size on FMovieSceneBinding");
static_assert(offsetof(FMovieSceneBinding, ObjectGuid) == 0x000000, "Member 'FMovieSceneBinding::ObjectGuid' has a wrong offset!");
static_assert(offsetof(FMovieSceneBinding, BindingName) == 0x000010, "Member 'FMovieSceneBinding::BindingName' has a wrong offset!");
static_assert(offsetof(FMovieSceneBinding, Tracks) == 0x000020, "Member 'FMovieSceneBinding::Tracks' has a wrong offset!");

struct FMovieSceneBindingOverrideData final
{
public:
	struct FMovieSceneObjectBindingID             ObjectBindingID;
	TSoftObjectPtr<class UObject>                 Object;
	bool                                          bOverridesDefault;
	uint8                                         Pad_41[0x7];
};
static_assert(alignof(FMovieSceneBindingOverrideData) == 0x000008, "Wrong alignment on FMovieSceneBindingOverrideData");
static_assert(sizeof(FMovieSceneBindingOverrideData) == 0x000048, "Wrong size on FMovieSceneBindingOverrideData");
static_assert(offsetof(FMovieSceneBindingOverrideData, ObjectBindingID) == 0x000000, "Member 'FMovieSceneBindingOverrideData::ObjectBindingID' has a wrong offset!");
static_assert(offsetof(FMovieSceneBindingOverrideData, Object) == 0x000018, "Member 'FMovieSceneBindingOverrideData::Object' has a wrong offset!");
static_assert(offsetof(FMovieSceneBindingOverrideData, bOverridesDefault) == 0x000040, "Member 'FMovieSceneBindingOverrideData::bOverridesDefault' has a wrong offset!");

struct FMovieSceneBindingProxy final
{
public:
	struct FGuid                                  BindingID;
	class UMovieSceneSequence*                    Sequence;
};
static_assert(alignof(FMovieSceneBindingProxy) == 0x000008, "Wrong alignment on FMovieSceneBindingProxy");
static_assert(sizeof(FMovieSceneBindingProxy) == 0x000018, "Wrong size on FMovieSceneBindingProxy");
static_assert(offsetof(FMovieSceneBindingProxy, BindingID) == 0x000000, "Member 'FMovieSceneBindingProxy::BindingID' has a wrong offset!");
static_assert(offsetof(FMovieSceneBindingProxy, Sequence) == 0x000010, "Member 'FMovieSceneBindingProxy::Sequence' has a wrong offset!");

struct FMovieScenePossessable final
{
public:
	TArray<class FName>                           Tags;
	struct FGuid                                  Guid;
	class FString                                 Name;
	struct FGuid                                  ParentGuid;
	struct FMovieSceneObjectBindingID             SpawnableObjectBindingID;
};
static_assert(alignof(FMovieScenePossessable) == 0x000008, "Wrong alignment on FMovieScenePossessable");
static_assert(sizeof(FMovieScenePossessable) == 0x000058, "Wrong size on FMovieScenePossessable");
static_assert(offsetof(FMovieScenePossessable, Tags) == 0x000000, "Member 'FMovieScenePossessable::Tags' has a wrong offset!");
static_assert(offsetof(FMovieScenePossessable, Guid) == 0x000010, "Member 'FMovieScenePossessable::Guid' has a wrong offset!");
static_assert(offsetof(FMovieScenePossessable, Name) == 0x000020, "Member 'FMovieScenePossessable::Name' has a wrong offset!");
static_assert(offsetof(FMovieScenePossessable, ParentGuid) == 0x000030, "Member 'FMovieScenePossessable::ParentGuid' has a wrong offset!");
static_assert(offsetof(FMovieScenePossessable, SpawnableObjectBindingID) == 0x000040, "Member 'FMovieScenePossessable::SpawnableObjectBindingID' has a wrong offset!");

struct FMovieSceneSectionEvalOptions final
{
public:
	bool                                          bCanEditCompletionMode;
	EMovieSceneCompletionMode                     CompletionMode;
};
static_assert(alignof(FMovieSceneSectionEvalOptions) == 0x000001, "Wrong alignment on FMovieSceneSectionEvalOptions");
static_assert(sizeof(FMovieSceneSectionEvalOptions) == 0x000002, "Wrong size on FMovieSceneSectionEvalOptions");
static_assert(offsetof(FMovieSceneSectionEvalOptions, bCanEditCompletionMode) == 0x000000, "Member 'FMovieSceneSectionEvalOptions::bCanEditCompletionMode' has a wrong offset!");
static_assert(offsetof(FMovieSceneSectionEvalOptions, CompletionMode) == 0x000001, "Member 'FMovieSceneSectionEvalOptions::CompletionMode' has a wrong offset!");

struct FMovieSceneEasingSettings final
{
public:
	int32                                         AutoEaseInDuration;
	int32                                         AutoEaseOutDuration;
	TScriptInterface<class IMovieSceneEasingFunction> EaseIn;
	bool                                          bManualEaseIn;
	uint8                                         Pad_19[0x3];
	int32                                         ManualEaseInDuration;
	TScriptInterface<class IMovieSceneEasingFunction> EaseOut;
	bool                                          bManualEaseOut;
	uint8                                         Pad_31[0x3];
	int32                                         ManualEaseOutDuration;
};
static_assert(alignof(FMovieSceneEasingSettings) == 0x000008, "Wrong alignment on FMovieSceneEasingSettings");
static_assert(sizeof(FMovieSceneEasingSettings) == 0x000038, "Wrong size on FMovieSceneEasingSettings");
static_assert(offsetof(FMovieSceneEasingSettings, AutoEaseInDuration) == 0x000000, "Member 'FMovieSceneEasingSettings::AutoEaseInDuration' has a wrong offset!");
static_assert(offsetof(FMovieSceneEasingSettings, AutoEaseOutDuration) == 0x000004, "Member 'FMovieSceneEasingSettings::AutoEaseOutDuration' has a wrong offset!");
static_assert(offsetof(FMovieSceneEasingSettings, EaseIn) == 0x000008, "Member 'FMovieSceneEasingSettings::EaseIn' has a wrong offset!");
static_assert(offsetof(FMovieSceneEasingSettings, bManualEaseIn) == 0x000018, "Member 'FMovieSceneEasingSettings::bManualEaseIn' has a wrong offset!");
static_assert(offsetof(FMovieSceneEasingSettings, ManualEaseInDuration) == 0x00001C, "Member 'FMovieSceneEasingSettings::ManualEaseInDuration' has a wrong offset!");
static_assert(offsetof(FMovieSceneEasingSettings, EaseOut) == 0x000020, "Member 'FMovieSceneEasingSettings::EaseOut' has a wrong offset!");
static_assert(offsetof(FMovieSceneEasingSettings, bManualEaseOut) == 0x000030, "Member 'FMovieSceneEasingSettings::bManualEaseOut' has a wrong offset!");
static_assert(offsetof(FMovieSceneEasingSettings, ManualEaseOutDuration) == 0x000034, "Member 'FMovieSceneEasingSettings::ManualEaseOutDuration' has a wrong offset!");

struct FMovieSceneTimecodeSource final
{
public:
	struct FTimecode                              Timecode;
};
static_assert(alignof(FMovieSceneTimecodeSource) == 0x000004, "Wrong alignment on FMovieSceneTimecodeSource");
static_assert(sizeof(FMovieSceneTimecodeSource) == 0x000014, "Wrong size on FMovieSceneTimecodeSource");
static_assert(offsetof(FMovieSceneTimecodeSource, Timecode) == 0x000000, "Member 'FMovieSceneTimecodeSource::Timecode' has a wrong offset!");

struct alignas(0x08) FMovieSceneSequenceInstanceData
{
public:
	uint8                                         Pad_0[0x8];
};
static_assert(alignof(FMovieSceneSequenceInstanceData) == 0x000008, "Wrong alignment on FMovieSceneSequenceInstanceData");
static_assert(sizeof(FMovieSceneSequenceInstanceData) == 0x000008, "Wrong size on FMovieSceneSequenceInstanceData");

struct FMovieSceneSequenceReplProperties final
{
public:
	struct FFrameTime                             LastKnownPosition;
	EMovieScenePlayerStatus                       LastKnownStatus;
	uint8                                         Pad_9[0x3];
	int32                                         LastKnownNumLoops;
};
static_assert(alignof(FMovieSceneSequenceReplProperties) == 0x000004, "Wrong alignment on FMovieSceneSequenceReplProperties");
static_assert(sizeof(FMovieSceneSequenceReplProperties) == 0x000010, "Wrong size on FMovieSceneSequenceReplProperties");
static_assert(offsetof(FMovieSceneSequenceReplProperties, LastKnownPosition) == 0x000000, "Member 'FMovieSceneSequenceReplProperties::LastKnownPosition' has a wrong offset!");
static_assert(offsetof(FMovieSceneSequenceReplProperties, LastKnownStatus) == 0x000008, "Member 'FMovieSceneSequenceReplProperties::LastKnownStatus' has a wrong offset!");
static_assert(offsetof(FMovieSceneSequenceReplProperties, LastKnownNumLoops) == 0x00000C, "Member 'FMovieSceneSequenceReplProperties::LastKnownNumLoops' has a wrong offset!");

struct FMovieSceneSequencePlaybackParams final
{
public:
	struct FFrameTime                             Frame;
	float                                         Time;
	uint8                                         Pad_C[0x4];
	class FString                                 MarkedFrame;
	EMovieScenePositionType                       PositionType;
	EUpdatePositionMethod                         UpdateMethod;
	bool                                          bHasJumped;
	uint8                                         Pad_23[0x5];
};
static_assert(alignof(FMovieSceneSequencePlaybackParams) == 0x000008, "Wrong alignment on FMovieSceneSequencePlaybackParams");
static_assert(sizeof(FMovieSceneSequencePlaybackParams) == 0x000028, "Wrong size on FMovieSceneSequencePlaybackParams");
static_assert(offsetof(FMovieSceneSequencePlaybackParams, Frame) == 0x000000, "Member 'FMovieSceneSequencePlaybackParams::Frame' has a wrong offset!");
static_assert(offsetof(FMovieSceneSequencePlaybackParams, Time) == 0x000008, "Member 'FMovieSceneSequencePlaybackParams::Time' has a wrong offset!");
static_assert(offsetof(FMovieSceneSequencePlaybackParams, MarkedFrame) == 0x000010, "Member 'FMovieSceneSequencePlaybackParams::MarkedFrame' has a wrong offset!");
static_assert(offsetof(FMovieSceneSequencePlaybackParams, PositionType) == 0x000020, "Member 'FMovieSceneSequencePlaybackParams::PositionType' has a wrong offset!");
static_assert(offsetof(FMovieSceneSequencePlaybackParams, UpdateMethod) == 0x000021, "Member 'FMovieSceneSequencePlaybackParams::UpdateMethod' has a wrong offset!");
static_assert(offsetof(FMovieSceneSequencePlaybackParams, bHasJumped) == 0x000022, "Member 'FMovieSceneSequencePlaybackParams::bHasJumped' has a wrong offset!");

struct FMovieSceneSequencePlayToParams final
{
public:
	bool                                          bExclusive;
};
static_assert(alignof(FMovieSceneSequencePlayToParams) == 0x000001, "Wrong alignment on FMovieSceneSequencePlayToParams");
static_assert(sizeof(FMovieSceneSequencePlayToParams) == 0x000001, "Wrong size on FMovieSceneSequencePlayToParams");
static_assert(offsetof(FMovieSceneSequencePlayToParams, bExclusive) == 0x000000, "Member 'FMovieSceneSequencePlayToParams::bExclusive' has a wrong offset!");

struct FMovieSceneSpawnable final
{
public:
	struct FTransform                             SpawnTransform;
	TArray<class FName>                           Tags;
	bool                                          bContinuouslyRespawn;
	bool                                          bNetAddressableName;
	bool                                          bEvaluateTracksWhenNotSpawned;
	uint8                                         Pad_73[0x1];
	struct FGuid                                  Guid;
	uint8                                         Pad_84[0x4];
	class FString                                 Name;
	class UObject*                                ObjectTemplate;
	TArray<struct FGuid>                          ChildPossessables;
	ESpawnOwnership                               Ownership;
	uint8                                         Pad_B1[0x3];
	class FName                                   LevelName;
	uint8                                         Pad_B8[0x8];
};
static_assert(alignof(FMovieSceneSpawnable) == 0x000010, "Wrong alignment on FMovieSceneSpawnable");
static_assert(sizeof(FMovieSceneSpawnable) == 0x0000C0, "Wrong size on FMovieSceneSpawnable");
static_assert(offsetof(FMovieSceneSpawnable, SpawnTransform) == 0x000000, "Member 'FMovieSceneSpawnable::SpawnTransform' has a wrong offset!");
static_assert(offsetof(FMovieSceneSpawnable, Tags) == 0x000060, "Member 'FMovieSceneSpawnable::Tags' has a wrong offset!");
static_assert(offsetof(FMovieSceneSpawnable, bContinuouslyRespawn) == 0x000070, "Member 'FMovieSceneSpawnable::bContinuouslyRespawn' has a wrong offset!");
static_assert(offsetof(FMovieSceneSpawnable, bNetAddressableName) == 0x000071, "Member 'FMovieSceneSpawnable::bNetAddressableName' has a wrong offset!");
static_assert(offsetof(FMovieSceneSpawnable, bEvaluateTracksWhenNotSpawned) == 0x000072, "Member 'FMovieSceneSpawnable::bEvaluateTracksWhenNotSpawned' has a wrong offset!");
static_assert(offsetof(FMovieSceneSpawnable, Guid) == 0x000074, "Member 'FMovieSceneSpawnable::Guid' has a wrong offset!");
static_assert(offsetof(FMovieSceneSpawnable, Name) == 0x000088, "Member 'FMovieSceneSpawnable::Name' has a wrong offset!");
static_assert(offsetof(FMovieSceneSpawnable, ObjectTemplate) == 0x000098, "Member 'FMovieSceneSpawnable::ObjectTemplate' has a wrong offset!");
static_assert(offsetof(FMovieSceneSpawnable, ChildPossessables) == 0x0000A0, "Member 'FMovieSceneSpawnable::ChildPossessables' has a wrong offset!");
static_assert(offsetof(FMovieSceneSpawnable, Ownership) == 0x0000B0, "Member 'FMovieSceneSpawnable::Ownership' has a wrong offset!");
static_assert(offsetof(FMovieSceneSpawnable, LevelName) == 0x0000B4, "Member 'FMovieSceneSpawnable::LevelName' has a wrong offset!");

struct alignas(0x04) FMovieSceneTrackEvalOptions final
{
public:
	uint8                                         bCanEvaluateNearestSection : 1;
	uint8                                         bEvalNearestSection : 1;
	uint8                                         bEvaluateInPreroll : 1;
	uint8                                         bEvaluateInPostroll : 1;
	uint8                                         bEvaluateNearestSection : 1;
	uint8                                         Pad_1[0x3];
};
static_assert(alignof(FMovieSceneTrackEvalOptions) == 0x000004, "Wrong alignment on FMovieSceneTrackEvalOptions");
static_assert(sizeof(FMovieSceneTrackEvalOptions) == 0x000004, "Wrong size on FMovieSceneTrackEvalOptions");

struct alignas(0x04) FMovieSceneTrackDisplayOptions final
{
public:
	uint8                                         bShowVerticalFrames : 1;
	uint8                                         Pad_1[0x3];
};
static_assert(alignof(FMovieSceneTrackDisplayOptions) == 0x000004, "Wrong alignment on FMovieSceneTrackDisplayOptions");
static_assert(sizeof(FMovieSceneTrackDisplayOptions) == 0x000004, "Wrong size on FMovieSceneTrackDisplayOptions");

struct FMovieSceneTrackEvaluationFieldEntry final
{
public:
	class UMovieSceneSection*                     Section;
	struct FFrameNumberRange                      Range;
	struct FFrameNumber                           ForcedTime;
	ESectionEvaluationFlags                       Flags;
	uint8                                         Pad_1D[0x1];
	int16                                         LegacySortOrder;
};
static_assert(alignof(FMovieSceneTrackEvaluationFieldEntry) == 0x000008, "Wrong alignment on FMovieSceneTrackEvaluationFieldEntry");
static_assert(sizeof(FMovieSceneTrackEvaluationFieldEntry) == 0x000020, "Wrong size on FMovieSceneTrackEvaluationFieldEntry");
static_assert(offsetof(FMovieSceneTrackEvaluationFieldEntry, Section) == 0x000000, "Member 'FMovieSceneTrackEvaluationFieldEntry::Section' has a wrong offset!");
static_assert(offsetof(FMovieSceneTrackEvaluationFieldEntry, Range) == 0x000008, "Member 'FMovieSceneTrackEvaluationFieldEntry::Range' has a wrong offset!");
static_assert(offsetof(FMovieSceneTrackEvaluationFieldEntry, ForcedTime) == 0x000018, "Member 'FMovieSceneTrackEvaluationFieldEntry::ForcedTime' has a wrong offset!");
static_assert(offsetof(FMovieSceneTrackEvaluationFieldEntry, Flags) == 0x00001C, "Member 'FMovieSceneTrackEvaluationFieldEntry::Flags' has a wrong offset!");
static_assert(offsetof(FMovieSceneTrackEvaluationFieldEntry, LegacySortOrder) == 0x00001E, "Member 'FMovieSceneTrackEvaluationFieldEntry::LegacySortOrder' has a wrong offset!");

struct FMovieSceneTrackEvaluationField final
{
public:
	TArray<struct FMovieSceneTrackEvaluationFieldEntry> Entries;
};
static_assert(alignof(FMovieSceneTrackEvaluationField) == 0x000008, "Wrong alignment on FMovieSceneTrackEvaluationField");
static_assert(sizeof(FMovieSceneTrackEvaluationField) == 0x000010, "Wrong size on FMovieSceneTrackEvaluationField");
static_assert(offsetof(FMovieSceneTrackEvaluationField, Entries) == 0x000000, "Member 'FMovieSceneTrackEvaluationField::Entries' has a wrong offset!");

struct FTestMovieSceneEvalTemplate final : public FMovieSceneEvalTemplate
{
};
static_assert(alignof(FTestMovieSceneEvalTemplate) == 0x000008, "Wrong alignment on FTestMovieSceneEvalTemplate");
static_assert(sizeof(FTestMovieSceneEvalTemplate) == 0x000020, "Wrong size on FTestMovieSceneEvalTemplate");

}
