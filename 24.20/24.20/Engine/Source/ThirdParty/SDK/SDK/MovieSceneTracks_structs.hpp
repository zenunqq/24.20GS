#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "MovieScene_structs.hpp"
#include "AnimGraphRuntime_structs.hpp"

namespace SDK
{

enum class EMovieScene3DPathSection_Axis : uint8
{
	X                                        = 0,
	Y                                        = 1,
	Z                                        = 2,
	NEG_X                                    = 3,
	NEG_Y                                    = 4,
	NEG_Z                                    = 5,
	MovieScene3DPathSection_MAX              = 6,
};

enum class ELevelVisibility : uint8
{
	Visible                                  = 0,
	Hidden                                   = 1,
	ELevelVisibility_MAX                     = 2,
};

enum class EParticleKey : uint8
{
	Activate                                 = 0,
	Deactivate                               = 1,
	Trigger                                  = 2,
	EParticleKey_MAX                         = 3,
};

enum class EFireEventsAtPosition : uint8
{
	AtStartOfEvaluation                      = 0,
	AtEndOfEvaluation                        = 1,
	AfterSpawn                               = 2,
	EFireEventsAtPosition_MAX                = 3,
};

struct FMovieScenePreAnimatedMaterialParameters final
{
public:
	class UMaterialInterface*                     PreviousMaterial;
	TSoftObjectPtr<class UMaterialInterface>      SoftPreviousMaterial;
};
static_assert(alignof(FMovieScenePreAnimatedMaterialParameters) == 0x000008, "Wrong alignment on FMovieScenePreAnimatedMaterialParameters");
static_assert(sizeof(FMovieScenePreAnimatedMaterialParameters) == 0x000030, "Wrong size on FMovieScenePreAnimatedMaterialParameters");
static_assert(offsetof(FMovieScenePreAnimatedMaterialParameters, PreviousMaterial) == 0x000000, "Member 'FMovieScenePreAnimatedMaterialParameters::PreviousMaterial' has a wrong offset!");
static_assert(offsetof(FMovieScenePreAnimatedMaterialParameters, SoftPreviousMaterial) == 0x000008, "Member 'FMovieScenePreAnimatedMaterialParameters::SoftPreviousMaterial' has a wrong offset!");

struct FMovieSceneCameraShakeSourceTrigger final
{
public:
	TSubclassOf<class UCameraShakeBase>           ShakeClass;
	float                                         PlayScale;
	ECameraShakePlaySpace                         Playspace;
	uint8                                         Pad_D[0x3];
	struct FRotator                               UserDefinedPlaySpace;
};
static_assert(alignof(FMovieSceneCameraShakeSourceTrigger) == 0x000008, "Wrong alignment on FMovieSceneCameraShakeSourceTrigger");
static_assert(sizeof(FMovieSceneCameraShakeSourceTrigger) == 0x000028, "Wrong size on FMovieSceneCameraShakeSourceTrigger");
static_assert(offsetof(FMovieSceneCameraShakeSourceTrigger, ShakeClass) == 0x000000, "Member 'FMovieSceneCameraShakeSourceTrigger::ShakeClass' has a wrong offset!");
static_assert(offsetof(FMovieSceneCameraShakeSourceTrigger, PlayScale) == 0x000008, "Member 'FMovieSceneCameraShakeSourceTrigger::PlayScale' has a wrong offset!");
static_assert(offsetof(FMovieSceneCameraShakeSourceTrigger, Playspace) == 0x00000C, "Member 'FMovieSceneCameraShakeSourceTrigger::Playspace' has a wrong offset!");
static_assert(offsetof(FMovieSceneCameraShakeSourceTrigger, UserDefinedPlaySpace) == 0x000010, "Member 'FMovieSceneCameraShakeSourceTrigger::UserDefinedPlaySpace' has a wrong offset!");

struct FMovieSceneCameraShakeSourceTriggerChannel final : public FMovieSceneChannel
{
public:
	TArray<struct FFrameNumber>                   KeyTimes;
	TArray<struct FMovieSceneCameraShakeSourceTrigger> KeyValues;
	struct FMovieSceneKeyHandleMap                KeyHandles;
};
static_assert(alignof(FMovieSceneCameraShakeSourceTriggerChannel) == 0x000008, "Wrong alignment on FMovieSceneCameraShakeSourceTriggerChannel");
static_assert(sizeof(FMovieSceneCameraShakeSourceTriggerChannel) == 0x0000F8, "Wrong size on FMovieSceneCameraShakeSourceTriggerChannel");
static_assert(offsetof(FMovieSceneCameraShakeSourceTriggerChannel, KeyTimes) == 0x000050, "Member 'FMovieSceneCameraShakeSourceTriggerChannel::KeyTimes' has a wrong offset!");
static_assert(offsetof(FMovieSceneCameraShakeSourceTriggerChannel, KeyValues) == 0x000060, "Member 'FMovieSceneCameraShakeSourceTriggerChannel::KeyValues' has a wrong offset!");
static_assert(offsetof(FMovieSceneCameraShakeSourceTriggerChannel, KeyHandles) == 0x000070, "Member 'FMovieSceneCameraShakeSourceTriggerChannel::KeyHandles' has a wrong offset!");

struct FPerlinNoiseParams final
{
public:
	float                                         Frequency;
	uint8                                         Pad_4[0x4];
	double                                        Amplitude;
	float                                         Offset;
	uint8                                         Pad_14[0x4];
};
static_assert(alignof(FPerlinNoiseParams) == 0x000008, "Wrong alignment on FPerlinNoiseParams");
static_assert(sizeof(FPerlinNoiseParams) == 0x000018, "Wrong size on FPerlinNoiseParams");
static_assert(offsetof(FPerlinNoiseParams, Frequency) == 0x000000, "Member 'FPerlinNoiseParams::Frequency' has a wrong offset!");
static_assert(offsetof(FPerlinNoiseParams, Amplitude) == 0x000008, "Member 'FPerlinNoiseParams::Amplitude' has a wrong offset!");
static_assert(offsetof(FPerlinNoiseParams, Offset) == 0x000010, "Member 'FPerlinNoiseParams::Offset' has a wrong offset!");

struct FMovieSceneDoublePerlinNoiseChannel final : public FMovieSceneChannel
{
public:
	struct FPerlinNoiseParams                     PerlinNoiseParams;
};
static_assert(alignof(FMovieSceneDoublePerlinNoiseChannel) == 0x000008, "Wrong alignment on FMovieSceneDoublePerlinNoiseChannel");
static_assert(sizeof(FMovieSceneDoublePerlinNoiseChannel) == 0x000068, "Wrong size on FMovieSceneDoublePerlinNoiseChannel");
static_assert(offsetof(FMovieSceneDoublePerlinNoiseChannel, PerlinNoiseParams) == 0x000050, "Member 'FMovieSceneDoublePerlinNoiseChannel::PerlinNoiseParams' has a wrong offset!");

struct FMovieSceneEventPayloadVariable final
{
public:
	class FString                                 Value;
};
static_assert(alignof(FMovieSceneEventPayloadVariable) == 0x000008, "Wrong alignment on FMovieSceneEventPayloadVariable");
static_assert(sizeof(FMovieSceneEventPayloadVariable) == 0x000010, "Wrong size on FMovieSceneEventPayloadVariable");
static_assert(offsetof(FMovieSceneEventPayloadVariable, Value) == 0x000000, "Member 'FMovieSceneEventPayloadVariable::Value' has a wrong offset!");

struct FMovieSceneEventPtrs final
{
public:
	class UFunction*                              Function;
	TFieldPath<class FProperty>                   BoundObjectProperty;
};
static_assert(alignof(FMovieSceneEventPtrs) == 0x000008, "Wrong alignment on FMovieSceneEventPtrs");
static_assert(sizeof(FMovieSceneEventPtrs) == 0x000028, "Wrong size on FMovieSceneEventPtrs");
static_assert(offsetof(FMovieSceneEventPtrs, Function) == 0x000000, "Member 'FMovieSceneEventPtrs::Function' has a wrong offset!");
static_assert(offsetof(FMovieSceneEventPtrs, BoundObjectProperty) == 0x000008, "Member 'FMovieSceneEventPtrs::BoundObjectProperty' has a wrong offset!");

struct FMovieSceneEvent final
{
public:
	struct FMovieSceneEventPtrs                   Ptrs;
};
static_assert(alignof(FMovieSceneEvent) == 0x000008, "Wrong alignment on FMovieSceneEvent");
static_assert(sizeof(FMovieSceneEvent) == 0x000028, "Wrong size on FMovieSceneEvent");
static_assert(offsetof(FMovieSceneEvent, Ptrs) == 0x000000, "Member 'FMovieSceneEvent::Ptrs' has a wrong offset!");

struct FMovieSceneEventChannel final : public FMovieSceneChannel
{
public:
	TArray<struct FFrameNumber>                   KeyTimes;
	TArray<struct FMovieSceneEvent>               KeyValues;
	struct FMovieSceneKeyHandleMap                KeyHandles;
};
static_assert(alignof(FMovieSceneEventChannel) == 0x000008, "Wrong alignment on FMovieSceneEventChannel");
static_assert(sizeof(FMovieSceneEventChannel) == 0x0000F8, "Wrong size on FMovieSceneEventChannel");
static_assert(offsetof(FMovieSceneEventChannel, KeyTimes) == 0x000050, "Member 'FMovieSceneEventChannel::KeyTimes' has a wrong offset!");
static_assert(offsetof(FMovieSceneEventChannel, KeyValues) == 0x000060, "Member 'FMovieSceneEventChannel::KeyValues' has a wrong offset!");
static_assert(offsetof(FMovieSceneEventChannel, KeyHandles) == 0x000070, "Member 'FMovieSceneEventChannel::KeyHandles' has a wrong offset!");

struct FMovieSceneFloatPerlinNoiseChannel final : public FMovieSceneChannel
{
public:
	struct FPerlinNoiseParams                     PerlinNoiseParams;
};
static_assert(alignof(FMovieSceneFloatPerlinNoiseChannel) == 0x000008, "Wrong alignment on FMovieSceneFloatPerlinNoiseChannel");
static_assert(sizeof(FMovieSceneFloatPerlinNoiseChannel) == 0x000068, "Wrong size on FMovieSceneFloatPerlinNoiseChannel");
static_assert(offsetof(FMovieSceneFloatPerlinNoiseChannel, PerlinNoiseParams) == 0x000050, "Member 'FMovieSceneFloatPerlinNoiseChannel::PerlinNoiseParams' has a wrong offset!");

struct FMovieSceneStringChannel final : public FMovieSceneChannel
{
public:
	TArray<struct FFrameNumber>                   Times;
	TArray<class FString>                         Values;
	class FString                                 DefaultValue;
	bool                                          bHasDefaultValue;
	uint8                                         Pad_81[0x7];
	struct FMovieSceneKeyHandleMap                KeyHandles;
};
static_assert(alignof(FMovieSceneStringChannel) == 0x000008, "Wrong alignment on FMovieSceneStringChannel");
static_assert(sizeof(FMovieSceneStringChannel) == 0x000110, "Wrong size on FMovieSceneStringChannel");
static_assert(offsetof(FMovieSceneStringChannel, Times) == 0x000050, "Member 'FMovieSceneStringChannel::Times' has a wrong offset!");
static_assert(offsetof(FMovieSceneStringChannel, Values) == 0x000060, "Member 'FMovieSceneStringChannel::Values' has a wrong offset!");
static_assert(offsetof(FMovieSceneStringChannel, DefaultValue) == 0x000070, "Member 'FMovieSceneStringChannel::DefaultValue' has a wrong offset!");
static_assert(offsetof(FMovieSceneStringChannel, bHasDefaultValue) == 0x000080, "Member 'FMovieSceneStringChannel::bHasDefaultValue' has a wrong offset!");
static_assert(offsetof(FMovieSceneStringChannel, KeyHandles) == 0x000088, "Member 'FMovieSceneStringChannel::KeyHandles' has a wrong offset!");

struct FMovieScene3DPathSectionTemplate final : public FMovieSceneEvalTemplate
{
public:
	struct FMovieSceneObjectBindingID             PathBindingID;
	struct FMovieSceneFloatChannel                TimingCurve;
	EMovieScene3DPathSection_Axis                 FrontAxisEnum;
	EMovieScene3DPathSection_Axis                 UpAxisEnum;
	uint8                                         Pad_14A[0x2];
	uint8                                         bFollow : 1;
	uint8                                         bReverse : 1;
	uint8                                         bForceUpright : 1;
	uint8                                         Pad_14D[0x3];
};
static_assert(alignof(FMovieScene3DPathSectionTemplate) == 0x000008, "Wrong alignment on FMovieScene3DPathSectionTemplate");
static_assert(sizeof(FMovieScene3DPathSectionTemplate) == 0x000150, "Wrong size on FMovieScene3DPathSectionTemplate");
static_assert(offsetof(FMovieScene3DPathSectionTemplate, PathBindingID) == 0x000020, "Member 'FMovieScene3DPathSectionTemplate::PathBindingID' has a wrong offset!");
static_assert(offsetof(FMovieScene3DPathSectionTemplate, TimingCurve) == 0x000038, "Member 'FMovieScene3DPathSectionTemplate::TimingCurve' has a wrong offset!");
static_assert(offsetof(FMovieScene3DPathSectionTemplate, FrontAxisEnum) == 0x000148, "Member 'FMovieScene3DPathSectionTemplate::FrontAxisEnum' has a wrong offset!");
static_assert(offsetof(FMovieScene3DPathSectionTemplate, UpAxisEnum) == 0x000149, "Member 'FMovieScene3DPathSectionTemplate::UpAxisEnum' has a wrong offset!");

struct FMovieSceneActorReferenceKey final
{
public:
	struct FMovieSceneObjectBindingID             Object;
	class FName                                   ComponentName;
	class FName                                   SocketName;
};
static_assert(alignof(FMovieSceneActorReferenceKey) == 0x000004, "Wrong alignment on FMovieSceneActorReferenceKey");
static_assert(sizeof(FMovieSceneActorReferenceKey) == 0x000020, "Wrong size on FMovieSceneActorReferenceKey");
static_assert(offsetof(FMovieSceneActorReferenceKey, Object) == 0x000000, "Member 'FMovieSceneActorReferenceKey::Object' has a wrong offset!");
static_assert(offsetof(FMovieSceneActorReferenceKey, ComponentName) == 0x000018, "Member 'FMovieSceneActorReferenceKey::ComponentName' has a wrong offset!");
static_assert(offsetof(FMovieSceneActorReferenceKey, SocketName) == 0x00001C, "Member 'FMovieSceneActorReferenceKey::SocketName' has a wrong offset!");

struct FMovieSceneActorReferenceData final : public FMovieSceneChannel
{
public:
	TArray<struct FFrameNumber>                   KeyTimes;
	struct FMovieSceneActorReferenceKey           DefaultValue;
	TArray<struct FMovieSceneActorReferenceKey>   KeyValues;
	struct FMovieSceneKeyHandleMap                KeyHandles;
};
static_assert(alignof(FMovieSceneActorReferenceData) == 0x000008, "Wrong alignment on FMovieSceneActorReferenceData");
static_assert(sizeof(FMovieSceneActorReferenceData) == 0x000118, "Wrong size on FMovieSceneActorReferenceData");
static_assert(offsetof(FMovieSceneActorReferenceData, KeyTimes) == 0x000050, "Member 'FMovieSceneActorReferenceData::KeyTimes' has a wrong offset!");
static_assert(offsetof(FMovieSceneActorReferenceData, DefaultValue) == 0x000060, "Member 'FMovieSceneActorReferenceData::DefaultValue' has a wrong offset!");
static_assert(offsetof(FMovieSceneActorReferenceData, KeyValues) == 0x000080, "Member 'FMovieSceneActorReferenceData::KeyValues' has a wrong offset!");
static_assert(offsetof(FMovieSceneActorReferenceData, KeyHandles) == 0x000090, "Member 'FMovieSceneActorReferenceData::KeyHandles' has a wrong offset!");

struct FMovieSceneActorReferenceSectionTemplate final : public FMovieSceneEvalTemplate
{
public:
	struct FMovieScenePropertySectionData         PropertyData;
	struct FMovieSceneActorReferenceData          ActorReferenceData;
};
static_assert(alignof(FMovieSceneActorReferenceSectionTemplate) == 0x000008, "Wrong alignment on FMovieSceneActorReferenceSectionTemplate");
static_assert(sizeof(FMovieSceneActorReferenceSectionTemplate) == 0x000150, "Wrong size on FMovieSceneActorReferenceSectionTemplate");
static_assert(offsetof(FMovieSceneActorReferenceSectionTemplate, PropertyData) == 0x000020, "Member 'FMovieSceneActorReferenceSectionTemplate::PropertyData' has a wrong offset!");
static_assert(offsetof(FMovieSceneActorReferenceSectionTemplate, ActorReferenceData) == 0x000038, "Member 'FMovieSceneActorReferenceSectionTemplate::ActorReferenceData' has a wrong offset!");

struct FMovieSceneAudioSectionTemplate final : public FMovieSceneEvalTemplate
{
public:
	class UMovieSceneAudioSection*                AudioSection;
};
static_assert(alignof(FMovieSceneAudioSectionTemplate) == 0x000008, "Wrong alignment on FMovieSceneAudioSectionTemplate");
static_assert(sizeof(FMovieSceneAudioSectionTemplate) == 0x000028, "Wrong size on FMovieSceneAudioSectionTemplate");
static_assert(offsetof(FMovieSceneAudioSectionTemplate, AudioSection) == 0x000020, "Member 'FMovieSceneAudioSectionTemplate::AudioSection' has a wrong offset!");

struct FMovieSceneBaseCacheSectionTemplateParameters
{
public:
	struct FFrameNumber                           SectionStartTime;
	struct FFrameNumber                           SectionEndTime;
};
static_assert(alignof(FMovieSceneBaseCacheSectionTemplateParameters) == 0x000004, "Wrong alignment on FMovieSceneBaseCacheSectionTemplateParameters");
static_assert(sizeof(FMovieSceneBaseCacheSectionTemplateParameters) == 0x000008, "Wrong size on FMovieSceneBaseCacheSectionTemplateParameters");
static_assert(offsetof(FMovieSceneBaseCacheSectionTemplateParameters, SectionStartTime) == 0x000000, "Member 'FMovieSceneBaseCacheSectionTemplateParameters::SectionStartTime' has a wrong offset!");
static_assert(offsetof(FMovieSceneBaseCacheSectionTemplateParameters, SectionEndTime) == 0x000004, "Member 'FMovieSceneBaseCacheSectionTemplateParameters::SectionEndTime' has a wrong offset!");

struct FMovieSceneCameraShakeSectionData final
{
public:
	TSubclassOf<class UCameraShakeBase>           ShakeClass;
	float                                         PlayScale;
	ECameraShakePlaySpace                         Playspace;
	uint8                                         Pad_D[0x3];
	struct FRotator                               UserDefinedPlaySpace;
};
static_assert(alignof(FMovieSceneCameraShakeSectionData) == 0x000008, "Wrong alignment on FMovieSceneCameraShakeSectionData");
static_assert(sizeof(FMovieSceneCameraShakeSectionData) == 0x000028, "Wrong size on FMovieSceneCameraShakeSectionData");
static_assert(offsetof(FMovieSceneCameraShakeSectionData, ShakeClass) == 0x000000, "Member 'FMovieSceneCameraShakeSectionData::ShakeClass' has a wrong offset!");
static_assert(offsetof(FMovieSceneCameraShakeSectionData, PlayScale) == 0x000008, "Member 'FMovieSceneCameraShakeSectionData::PlayScale' has a wrong offset!");
static_assert(offsetof(FMovieSceneCameraShakeSectionData, Playspace) == 0x00000C, "Member 'FMovieSceneCameraShakeSectionData::Playspace' has a wrong offset!");
static_assert(offsetof(FMovieSceneCameraShakeSectionData, UserDefinedPlaySpace) == 0x000010, "Member 'FMovieSceneCameraShakeSectionData::UserDefinedPlaySpace' has a wrong offset!");

struct FMovieSceneCameraShakeSourceShakeSectionTemplate final : public FMovieSceneEvalTemplate
{
public:
	struct FMovieSceneCameraShakeSectionData      SourceData;
	struct FFrameNumber                           SectionStartTime;
	struct FFrameNumber                           SectionEndTime;
};
static_assert(alignof(FMovieSceneCameraShakeSourceShakeSectionTemplate) == 0x000008, "Wrong alignment on FMovieSceneCameraShakeSourceShakeSectionTemplate");
static_assert(sizeof(FMovieSceneCameraShakeSourceShakeSectionTemplate) == 0x000050, "Wrong size on FMovieSceneCameraShakeSourceShakeSectionTemplate");
static_assert(offsetof(FMovieSceneCameraShakeSourceShakeSectionTemplate, SourceData) == 0x000020, "Member 'FMovieSceneCameraShakeSourceShakeSectionTemplate::SourceData' has a wrong offset!");
static_assert(offsetof(FMovieSceneCameraShakeSourceShakeSectionTemplate, SectionStartTime) == 0x000048, "Member 'FMovieSceneCameraShakeSourceShakeSectionTemplate::SectionStartTime' has a wrong offset!");
static_assert(offsetof(FMovieSceneCameraShakeSourceShakeSectionTemplate, SectionEndTime) == 0x00004C, "Member 'FMovieSceneCameraShakeSourceShakeSectionTemplate::SectionEndTime' has a wrong offset!");

struct FMovieSceneCameraShakeSourceTriggerSectionTemplate final : public FMovieSceneEvalTemplate
{
public:
	TArray<struct FFrameNumber>                   TriggerTimes;
	TArray<struct FMovieSceneCameraShakeSourceTrigger> TriggerValues;
};
static_assert(alignof(FMovieSceneCameraShakeSourceTriggerSectionTemplate) == 0x000008, "Wrong alignment on FMovieSceneCameraShakeSourceTriggerSectionTemplate");
static_assert(sizeof(FMovieSceneCameraShakeSourceTriggerSectionTemplate) == 0x000040, "Wrong size on FMovieSceneCameraShakeSourceTriggerSectionTemplate");
static_assert(offsetof(FMovieSceneCameraShakeSourceTriggerSectionTemplate, TriggerTimes) == 0x000020, "Member 'FMovieSceneCameraShakeSourceTriggerSectionTemplate::TriggerTimes' has a wrong offset!");
static_assert(offsetof(FMovieSceneCameraShakeSourceTriggerSectionTemplate, TriggerValues) == 0x000030, "Member 'FMovieSceneCameraShakeSourceTriggerSectionTemplate::TriggerValues' has a wrong offset!");

struct FMovieSceneCameraShakeSectionTemplate final : public FMovieSceneEvalTemplate
{
public:
	struct FMovieSceneCameraShakeSectionData      SourceData;
	struct FFrameNumber                           SectionStartTime;
	uint8                                         Pad_4C[0x4];
};
static_assert(alignof(FMovieSceneCameraShakeSectionTemplate) == 0x000008, "Wrong alignment on FMovieSceneCameraShakeSectionTemplate");
static_assert(sizeof(FMovieSceneCameraShakeSectionTemplate) == 0x000050, "Wrong size on FMovieSceneCameraShakeSectionTemplate");
static_assert(offsetof(FMovieSceneCameraShakeSectionTemplate, SourceData) == 0x000020, "Member 'FMovieSceneCameraShakeSectionTemplate::SourceData' has a wrong offset!");
static_assert(offsetof(FMovieSceneCameraShakeSectionTemplate, SectionStartTime) == 0x000048, "Member 'FMovieSceneCameraShakeSectionTemplate::SectionStartTime' has a wrong offset!");

struct FMovieSceneColorSectionTemplate final : public FMovieScenePropertySectionTemplate
{
public:
	struct FMovieSceneFloatChannel                Curves[0x4];
	EMovieSceneBlendType                          BlendType;
	uint8                                         Pad_479[0x7];
};
static_assert(alignof(FMovieSceneColorSectionTemplate) == 0x000008, "Wrong alignment on FMovieSceneColorSectionTemplate");
static_assert(sizeof(FMovieSceneColorSectionTemplate) == 0x000480, "Wrong size on FMovieSceneColorSectionTemplate");
static_assert(offsetof(FMovieSceneColorSectionTemplate, Curves) == 0x000038, "Member 'FMovieSceneColorSectionTemplate::Curves' has a wrong offset!");
static_assert(offsetof(FMovieSceneColorSectionTemplate, BlendType) == 0x000478, "Member 'FMovieSceneColorSectionTemplate::BlendType' has a wrong offset!");

struct alignas(0x08) FMovieSceneEventParameters final
{
public:
	uint8                                         Pad_0[0x28];
};
static_assert(alignof(FMovieSceneEventParameters) == 0x000008, "Wrong alignment on FMovieSceneEventParameters");
static_assert(sizeof(FMovieSceneEventParameters) == 0x000028, "Wrong size on FMovieSceneEventParameters");

struct FEventPayload final
{
public:
	class FName                                   EventName;
	uint8                                         Pad_4[0x4];
	struct FMovieSceneEventParameters             Parameters;
};
static_assert(alignof(FEventPayload) == 0x000008, "Wrong alignment on FEventPayload");
static_assert(sizeof(FEventPayload) == 0x000030, "Wrong size on FEventPayload");
static_assert(offsetof(FEventPayload, EventName) == 0x000000, "Member 'FEventPayload::EventName' has a wrong offset!");
static_assert(offsetof(FEventPayload, Parameters) == 0x000008, "Member 'FEventPayload::Parameters' has a wrong offset!");

struct FMovieSceneEventSectionData final : public FMovieSceneChannel
{
public:
	TArray<struct FFrameNumber>                   Times;
	TArray<struct FEventPayload>                  KeyValues;
	struct FMovieSceneKeyHandleMap                KeyHandles;
};
static_assert(alignof(FMovieSceneEventSectionData) == 0x000008, "Wrong alignment on FMovieSceneEventSectionData");
static_assert(sizeof(FMovieSceneEventSectionData) == 0x0000F8, "Wrong size on FMovieSceneEventSectionData");
static_assert(offsetof(FMovieSceneEventSectionData, Times) == 0x000050, "Member 'FMovieSceneEventSectionData::Times' has a wrong offset!");
static_assert(offsetof(FMovieSceneEventSectionData, KeyValues) == 0x000060, "Member 'FMovieSceneEventSectionData::KeyValues' has a wrong offset!");
static_assert(offsetof(FMovieSceneEventSectionData, KeyHandles) == 0x000070, "Member 'FMovieSceneEventSectionData::KeyHandles' has a wrong offset!");

struct FMovieSceneEventSectionTemplate final : public FMovieSceneEvalTemplate
{
public:
	struct FMovieSceneEventSectionData            EventData;
	uint8                                         bFireEventsWhenForwards : 1;
	uint8                                         bFireEventsWhenBackwards : 1;
	uint8                                         Pad_119[0x7];
};
static_assert(alignof(FMovieSceneEventSectionTemplate) == 0x000008, "Wrong alignment on FMovieSceneEventSectionTemplate");
static_assert(sizeof(FMovieSceneEventSectionTemplate) == 0x000120, "Wrong size on FMovieSceneEventSectionTemplate");
static_assert(offsetof(FMovieSceneEventSectionTemplate, EventData) == 0x000020, "Member 'FMovieSceneEventSectionTemplate::EventData' has a wrong offset!");

struct FMovieSceneFadeSectionTemplate final : public FMovieSceneEvalTemplate
{
public:
	struct FMovieSceneFloatChannel                FadeCurve;
	struct FLinearColor                           FadeColor;
	uint8                                         bFadeAudio : 1;
	uint8                                         Pad_141[0x7];
};
static_assert(alignof(FMovieSceneFadeSectionTemplate) == 0x000008, "Wrong alignment on FMovieSceneFadeSectionTemplate");
static_assert(sizeof(FMovieSceneFadeSectionTemplate) == 0x000148, "Wrong size on FMovieSceneFadeSectionTemplate");
static_assert(offsetof(FMovieSceneFadeSectionTemplate, FadeCurve) == 0x000020, "Member 'FMovieSceneFadeSectionTemplate::FadeCurve' has a wrong offset!");
static_assert(offsetof(FMovieSceneFadeSectionTemplate, FadeColor) == 0x000130, "Member 'FMovieSceneFadeSectionTemplate::FadeColor' has a wrong offset!");

struct FMovieSceneObjectPropertyTemplate final : public FMovieScenePropertySectionTemplate
{
public:
	struct FMovieSceneObjectPathChannel           ObjectChannel;
};
static_assert(alignof(FMovieSceneObjectPropertyTemplate) == 0x000008, "Wrong alignment on FMovieSceneObjectPropertyTemplate");
static_assert(sizeof(FMovieSceneObjectPropertyTemplate) == 0x000168, "Wrong size on FMovieSceneObjectPropertyTemplate");
static_assert(offsetof(FMovieSceneObjectPropertyTemplate, ObjectChannel) == 0x000038, "Member 'FMovieSceneObjectPropertyTemplate::ObjectChannel' has a wrong offset!");

struct FScalarParameterNameAndCurve final
{
public:
	class FName                                   ParameterName;
	uint8                                         Pad_4[0x4];
	struct FMovieSceneFloatChannel                ParameterCurve;
};
static_assert(alignof(FScalarParameterNameAndCurve) == 0x000008, "Wrong alignment on FScalarParameterNameAndCurve");
static_assert(sizeof(FScalarParameterNameAndCurve) == 0x000118, "Wrong size on FScalarParameterNameAndCurve");
static_assert(offsetof(FScalarParameterNameAndCurve, ParameterName) == 0x000000, "Member 'FScalarParameterNameAndCurve::ParameterName' has a wrong offset!");
static_assert(offsetof(FScalarParameterNameAndCurve, ParameterCurve) == 0x000008, "Member 'FScalarParameterNameAndCurve::ParameterCurve' has a wrong offset!");

struct FBoolParameterNameAndCurve final
{
public:
	class FName                                   ParameterName;
	uint8                                         Pad_4[0x4];
	struct FMovieSceneBoolChannel                 ParameterCurve;
};
static_assert(alignof(FBoolParameterNameAndCurve) == 0x000008, "Wrong alignment on FBoolParameterNameAndCurve");
static_assert(sizeof(FBoolParameterNameAndCurve) == 0x000108, "Wrong size on FBoolParameterNameAndCurve");
static_assert(offsetof(FBoolParameterNameAndCurve, ParameterName) == 0x000000, "Member 'FBoolParameterNameAndCurve::ParameterName' has a wrong offset!");
static_assert(offsetof(FBoolParameterNameAndCurve, ParameterCurve) == 0x000008, "Member 'FBoolParameterNameAndCurve::ParameterCurve' has a wrong offset!");

struct FVector2DParameterNameAndCurves final
{
public:
	class FName                                   ParameterName;
	uint8                                         Pad_4[0x4];
	struct FMovieSceneFloatChannel                XCurve;
	struct FMovieSceneFloatChannel                YCurve;
};
static_assert(alignof(FVector2DParameterNameAndCurves) == 0x000008, "Wrong alignment on FVector2DParameterNameAndCurves");
static_assert(sizeof(FVector2DParameterNameAndCurves) == 0x000228, "Wrong size on FVector2DParameterNameAndCurves");
static_assert(offsetof(FVector2DParameterNameAndCurves, ParameterName) == 0x000000, "Member 'FVector2DParameterNameAndCurves::ParameterName' has a wrong offset!");
static_assert(offsetof(FVector2DParameterNameAndCurves, XCurve) == 0x000008, "Member 'FVector2DParameterNameAndCurves::XCurve' has a wrong offset!");
static_assert(offsetof(FVector2DParameterNameAndCurves, YCurve) == 0x000118, "Member 'FVector2DParameterNameAndCurves::YCurve' has a wrong offset!");

struct FVectorParameterNameAndCurves final
{
public:
	class FName                                   ParameterName;
	uint8                                         Pad_4[0x4];
	struct FMovieSceneFloatChannel                XCurve;
	struct FMovieSceneFloatChannel                YCurve;
	struct FMovieSceneFloatChannel                ZCurve;
};
static_assert(alignof(FVectorParameterNameAndCurves) == 0x000008, "Wrong alignment on FVectorParameterNameAndCurves");
static_assert(sizeof(FVectorParameterNameAndCurves) == 0x000338, "Wrong size on FVectorParameterNameAndCurves");
static_assert(offsetof(FVectorParameterNameAndCurves, ParameterName) == 0x000000, "Member 'FVectorParameterNameAndCurves::ParameterName' has a wrong offset!");
static_assert(offsetof(FVectorParameterNameAndCurves, XCurve) == 0x000008, "Member 'FVectorParameterNameAndCurves::XCurve' has a wrong offset!");
static_assert(offsetof(FVectorParameterNameAndCurves, YCurve) == 0x000118, "Member 'FVectorParameterNameAndCurves::YCurve' has a wrong offset!");
static_assert(offsetof(FVectorParameterNameAndCurves, ZCurve) == 0x000228, "Member 'FVectorParameterNameAndCurves::ZCurve' has a wrong offset!");

struct FColorParameterNameAndCurves final
{
public:
	class FName                                   ParameterName;
	uint8                                         Pad_4[0x4];
	struct FMovieSceneFloatChannel                RedCurve;
	struct FMovieSceneFloatChannel                GreenCurve;
	struct FMovieSceneFloatChannel                BlueCurve;
	struct FMovieSceneFloatChannel                AlphaCurve;
};
static_assert(alignof(FColorParameterNameAndCurves) == 0x000008, "Wrong alignment on FColorParameterNameAndCurves");
static_assert(sizeof(FColorParameterNameAndCurves) == 0x000448, "Wrong size on FColorParameterNameAndCurves");
static_assert(offsetof(FColorParameterNameAndCurves, ParameterName) == 0x000000, "Member 'FColorParameterNameAndCurves::ParameterName' has a wrong offset!");
static_assert(offsetof(FColorParameterNameAndCurves, RedCurve) == 0x000008, "Member 'FColorParameterNameAndCurves::RedCurve' has a wrong offset!");
static_assert(offsetof(FColorParameterNameAndCurves, GreenCurve) == 0x000118, "Member 'FColorParameterNameAndCurves::GreenCurve' has a wrong offset!");
static_assert(offsetof(FColorParameterNameAndCurves, BlueCurve) == 0x000228, "Member 'FColorParameterNameAndCurves::BlueCurve' has a wrong offset!");
static_assert(offsetof(FColorParameterNameAndCurves, AlphaCurve) == 0x000338, "Member 'FColorParameterNameAndCurves::AlphaCurve' has a wrong offset!");

struct FTransformParameterNameAndCurves final
{
public:
	class FName                                   ParameterName;
	uint8                                         Pad_4[0x4];
	struct FMovieSceneFloatChannel                Translation[0x3];
	struct FMovieSceneFloatChannel                Rotation[0x3];
	struct FMovieSceneFloatChannel                Scale[0x3];
};
static_assert(alignof(FTransformParameterNameAndCurves) == 0x000008, "Wrong alignment on FTransformParameterNameAndCurves");
static_assert(sizeof(FTransformParameterNameAndCurves) == 0x000998, "Wrong size on FTransformParameterNameAndCurves");
static_assert(offsetof(FTransformParameterNameAndCurves, ParameterName) == 0x000000, "Member 'FTransformParameterNameAndCurves::ParameterName' has a wrong offset!");
static_assert(offsetof(FTransformParameterNameAndCurves, Translation) == 0x000008, "Member 'FTransformParameterNameAndCurves::Translation' has a wrong offset!");
static_assert(offsetof(FTransformParameterNameAndCurves, Rotation) == 0x000338, "Member 'FTransformParameterNameAndCurves::Rotation' has a wrong offset!");
static_assert(offsetof(FTransformParameterNameAndCurves, Scale) == 0x000668, "Member 'FTransformParameterNameAndCurves::Scale' has a wrong offset!");

struct FMovieSceneParameterSectionTemplate : public FMovieSceneEvalTemplate
{
public:
	TArray<struct FScalarParameterNameAndCurve>   Scalars;
	TArray<struct FBoolParameterNameAndCurve>     Bools;
	TArray<struct FVector2DParameterNameAndCurves> Vector2Ds;
	TArray<struct FVectorParameterNameAndCurves>  Vectors;
	TArray<struct FColorParameterNameAndCurves>   Colors;
	TArray<struct FTransformParameterNameAndCurves> Transforms;
};
static_assert(alignof(FMovieSceneParameterSectionTemplate) == 0x000008, "Wrong alignment on FMovieSceneParameterSectionTemplate");
static_assert(sizeof(FMovieSceneParameterSectionTemplate) == 0x000080, "Wrong size on FMovieSceneParameterSectionTemplate");
static_assert(offsetof(FMovieSceneParameterSectionTemplate, Scalars) == 0x000020, "Member 'FMovieSceneParameterSectionTemplate::Scalars' has a wrong offset!");
static_assert(offsetof(FMovieSceneParameterSectionTemplate, Bools) == 0x000030, "Member 'FMovieSceneParameterSectionTemplate::Bools' has a wrong offset!");
static_assert(offsetof(FMovieSceneParameterSectionTemplate, Vector2Ds) == 0x000040, "Member 'FMovieSceneParameterSectionTemplate::Vector2Ds' has a wrong offset!");
static_assert(offsetof(FMovieSceneParameterSectionTemplate, Vectors) == 0x000050, "Member 'FMovieSceneParameterSectionTemplate::Vectors' has a wrong offset!");
static_assert(offsetof(FMovieSceneParameterSectionTemplate, Colors) == 0x000060, "Member 'FMovieSceneParameterSectionTemplate::Colors' has a wrong offset!");
static_assert(offsetof(FMovieSceneParameterSectionTemplate, Transforms) == 0x000070, "Member 'FMovieSceneParameterSectionTemplate::Transforms' has a wrong offset!");

struct FMovieSceneParticleParameterSectionTemplate final : public FMovieSceneParameterSectionTemplate
{
};
static_assert(alignof(FMovieSceneParticleParameterSectionTemplate) == 0x000008, "Wrong alignment on FMovieSceneParticleParameterSectionTemplate");
static_assert(sizeof(FMovieSceneParticleParameterSectionTemplate) == 0x000080, "Wrong size on FMovieSceneParticleParameterSectionTemplate");

struct FMovieSceneParticleChannel final : public FMovieSceneByteChannel
{
};
static_assert(alignof(FMovieSceneParticleChannel) == 0x000008, "Wrong alignment on FMovieSceneParticleChannel");
static_assert(sizeof(FMovieSceneParticleChannel) == 0x000108, "Wrong size on FMovieSceneParticleChannel");

struct FMovieSceneParticleSectionTemplate final : public FMovieSceneEvalTemplate
{
public:
	struct FMovieSceneParticleChannel             ParticleKeys;
};
static_assert(alignof(FMovieSceneParticleSectionTemplate) == 0x000008, "Wrong alignment on FMovieSceneParticleSectionTemplate");
static_assert(sizeof(FMovieSceneParticleSectionTemplate) == 0x000128, "Wrong size on FMovieSceneParticleSectionTemplate");
static_assert(offsetof(FMovieSceneParticleSectionTemplate, ParticleKeys) == 0x000020, "Member 'FMovieSceneParticleSectionTemplate::ParticleKeys' has a wrong offset!");

struct FMovieSceneBoolPropertySectionTemplate : public FMovieScenePropertySectionTemplate
{
public:
	struct FMovieSceneBoolChannel                 BoolCurve;
};
static_assert(alignof(FMovieSceneBoolPropertySectionTemplate) == 0x000008, "Wrong alignment on FMovieSceneBoolPropertySectionTemplate");
static_assert(sizeof(FMovieSceneBoolPropertySectionTemplate) == 0x000138, "Wrong size on FMovieSceneBoolPropertySectionTemplate");
static_assert(offsetof(FMovieSceneBoolPropertySectionTemplate, BoolCurve) == 0x000038, "Member 'FMovieSceneBoolPropertySectionTemplate::BoolCurve' has a wrong offset!");

struct FMovieSceneStringPropertySectionTemplate final : public FMovieScenePropertySectionTemplate
{
public:
	struct FMovieSceneStringChannel               StringCurve;
};
static_assert(alignof(FMovieSceneStringPropertySectionTemplate) == 0x000008, "Wrong alignment on FMovieSceneStringPropertySectionTemplate");
static_assert(sizeof(FMovieSceneStringPropertySectionTemplate) == 0x000148, "Wrong size on FMovieSceneStringPropertySectionTemplate");
static_assert(offsetof(FMovieSceneStringPropertySectionTemplate, StringCurve) == 0x000038, "Member 'FMovieSceneStringPropertySectionTemplate::StringCurve' has a wrong offset!");

struct FMovieSceneSkeletalAnimationParams
{
public:
	class UAnimSequenceBase*                      Animation;
	struct FFrameNumber                           FirstLoopStartFrameOffset;
	struct FFrameNumber                           StartFrameOffset;
	struct FFrameNumber                           EndFrameOffset;
	float                                         PlayRate;
	uint8                                         bReverse : 1;
	uint8                                         Pad_19[0x3];
	class FName                                   SlotName;
	class UMirrorDataTable*                       MirrorDataTable;
	struct FMovieSceneFloatChannel                Weight;
	bool                                          bSkipAnimNotifiers;
	bool                                          bForceCustomMode;
	ESwapRootBone                                 SwapRootBone;
	uint8                                         Pad_13B[0x1];
	float                                         StartOffset;
	float                                         EndOffset;
	uint8                                         Pad_144[0x4];
};
static_assert(alignof(FMovieSceneSkeletalAnimationParams) == 0x000008, "Wrong alignment on FMovieSceneSkeletalAnimationParams");
static_assert(sizeof(FMovieSceneSkeletalAnimationParams) == 0x000148, "Wrong size on FMovieSceneSkeletalAnimationParams");
static_assert(offsetof(FMovieSceneSkeletalAnimationParams, Animation) == 0x000000, "Member 'FMovieSceneSkeletalAnimationParams::Animation' has a wrong offset!");
static_assert(offsetof(FMovieSceneSkeletalAnimationParams, FirstLoopStartFrameOffset) == 0x000008, "Member 'FMovieSceneSkeletalAnimationParams::FirstLoopStartFrameOffset' has a wrong offset!");
static_assert(offsetof(FMovieSceneSkeletalAnimationParams, StartFrameOffset) == 0x00000C, "Member 'FMovieSceneSkeletalAnimationParams::StartFrameOffset' has a wrong offset!");
static_assert(offsetof(FMovieSceneSkeletalAnimationParams, EndFrameOffset) == 0x000010, "Member 'FMovieSceneSkeletalAnimationParams::EndFrameOffset' has a wrong offset!");
static_assert(offsetof(FMovieSceneSkeletalAnimationParams, PlayRate) == 0x000014, "Member 'FMovieSceneSkeletalAnimationParams::PlayRate' has a wrong offset!");
static_assert(offsetof(FMovieSceneSkeletalAnimationParams, SlotName) == 0x00001C, "Member 'FMovieSceneSkeletalAnimationParams::SlotName' has a wrong offset!");
static_assert(offsetof(FMovieSceneSkeletalAnimationParams, MirrorDataTable) == 0x000020, "Member 'FMovieSceneSkeletalAnimationParams::MirrorDataTable' has a wrong offset!");
static_assert(offsetof(FMovieSceneSkeletalAnimationParams, Weight) == 0x000028, "Member 'FMovieSceneSkeletalAnimationParams::Weight' has a wrong offset!");
static_assert(offsetof(FMovieSceneSkeletalAnimationParams, bSkipAnimNotifiers) == 0x000138, "Member 'FMovieSceneSkeletalAnimationParams::bSkipAnimNotifiers' has a wrong offset!");
static_assert(offsetof(FMovieSceneSkeletalAnimationParams, bForceCustomMode) == 0x000139, "Member 'FMovieSceneSkeletalAnimationParams::bForceCustomMode' has a wrong offset!");
static_assert(offsetof(FMovieSceneSkeletalAnimationParams, SwapRootBone) == 0x00013A, "Member 'FMovieSceneSkeletalAnimationParams::SwapRootBone' has a wrong offset!");
static_assert(offsetof(FMovieSceneSkeletalAnimationParams, StartOffset) == 0x00013C, "Member 'FMovieSceneSkeletalAnimationParams::StartOffset' has a wrong offset!");
static_assert(offsetof(FMovieSceneSkeletalAnimationParams, EndOffset) == 0x000140, "Member 'FMovieSceneSkeletalAnimationParams::EndOffset' has a wrong offset!");

struct FMovieSceneSkeletalAnimationSectionTemplateParameters final : public FMovieSceneSkeletalAnimationParams
{
public:
	struct FFrameNumber                           SectionStartTime;
	struct FFrameNumber                           SectionEndTime;
};
static_assert(alignof(FMovieSceneSkeletalAnimationSectionTemplateParameters) == 0x000008, "Wrong alignment on FMovieSceneSkeletalAnimationSectionTemplateParameters");
static_assert(sizeof(FMovieSceneSkeletalAnimationSectionTemplateParameters) == 0x000150, "Wrong size on FMovieSceneSkeletalAnimationSectionTemplateParameters");
static_assert(offsetof(FMovieSceneSkeletalAnimationSectionTemplateParameters, SectionStartTime) == 0x000148, "Member 'FMovieSceneSkeletalAnimationSectionTemplateParameters::SectionStartTime' has a wrong offset!");
static_assert(offsetof(FMovieSceneSkeletalAnimationSectionTemplateParameters, SectionEndTime) == 0x00014C, "Member 'FMovieSceneSkeletalAnimationSectionTemplateParameters::SectionEndTime' has a wrong offset!");

struct FMovieSceneSkeletalAnimationSectionTemplate final : public FMovieSceneEvalTemplate
{
public:
	struct FMovieSceneSkeletalAnimationSectionTemplateParameters Params;
};
static_assert(alignof(FMovieSceneSkeletalAnimationSectionTemplate) == 0x000008, "Wrong alignment on FMovieSceneSkeletalAnimationSectionTemplate");
static_assert(sizeof(FMovieSceneSkeletalAnimationSectionTemplate) == 0x000170, "Wrong size on FMovieSceneSkeletalAnimationSectionTemplate");
static_assert(offsetof(FMovieSceneSkeletalAnimationSectionTemplate, Params) == 0x000020, "Member 'FMovieSceneSkeletalAnimationSectionTemplate::Params' has a wrong offset!");

struct FMovieSceneSlomoSectionTemplate final : public FMovieSceneEvalTemplate
{
public:
	struct FMovieSceneFloatChannel                SlomoCurve;
};
static_assert(alignof(FMovieSceneSlomoSectionTemplate) == 0x000008, "Wrong alignment on FMovieSceneSlomoSectionTemplate");
static_assert(sizeof(FMovieSceneSlomoSectionTemplate) == 0x000130, "Wrong size on FMovieSceneSlomoSectionTemplate");
static_assert(offsetof(FMovieSceneSlomoSectionTemplate, SlomoCurve) == 0x000020, "Member 'FMovieSceneSlomoSectionTemplate::SlomoCurve' has a wrong offset!");

struct FMovieSceneVisibilitySectionTemplate final : public FMovieSceneBoolPropertySectionTemplate
{
};
static_assert(alignof(FMovieSceneVisibilitySectionTemplate) == 0x000008, "Wrong alignment on FMovieSceneVisibilitySectionTemplate");
static_assert(sizeof(FMovieSceneVisibilitySectionTemplate) == 0x000138, "Wrong size on FMovieSceneVisibilitySectionTemplate");

struct FLevelVisibilityComponentData final
{
public:
	class UMovieSceneLevelVisibilitySection*      Section;
};
static_assert(alignof(FLevelVisibilityComponentData) == 0x000008, "Wrong alignment on FLevelVisibilityComponentData");
static_assert(sizeof(FLevelVisibilityComponentData) == 0x000008, "Wrong size on FLevelVisibilityComponentData");
static_assert(offsetof(FLevelVisibilityComponentData, Section) == 0x000000, "Member 'FLevelVisibilityComponentData::Section' has a wrong offset!");

struct FMovieSceneDataLayerComponentData final
{
public:
	class UMovieSceneDataLayerSection*            Section;
};
static_assert(alignof(FMovieSceneDataLayerComponentData) == 0x000008, "Wrong alignment on FMovieSceneDataLayerComponentData");
static_assert(sizeof(FMovieSceneDataLayerComponentData) == 0x000008, "Wrong size on FMovieSceneDataLayerComponentData");
static_assert(offsetof(FMovieSceneDataLayerComponentData, Section) == 0x000000, "Member 'FMovieSceneDataLayerComponentData::Section' has a wrong offset!");

struct alignas(0x08) FConstraintComponentData final
{
public:
	class FName                                   ConstraintName;
	uint8                                         Pad_4[0xC];
};
static_assert(alignof(FConstraintComponentData) == 0x000008, "Wrong alignment on FConstraintComponentData");
static_assert(sizeof(FConstraintComponentData) == 0x000010, "Wrong size on FConstraintComponentData");
static_assert(offsetof(FConstraintComponentData, ConstraintName) == 0x000000, "Member 'FConstraintComponentData::ConstraintName' has a wrong offset!");

struct FMovieScene3DLocationKeyStruct final : public FMovieSceneKeyStruct
{
public:
	struct FVector                                Location;
	struct FFrameNumber                           Time;
	uint8                                         Pad_24[0x1C];
};
static_assert(alignof(FMovieScene3DLocationKeyStruct) == 0x000008, "Wrong alignment on FMovieScene3DLocationKeyStruct");
static_assert(sizeof(FMovieScene3DLocationKeyStruct) == 0x000040, "Wrong size on FMovieScene3DLocationKeyStruct");
static_assert(offsetof(FMovieScene3DLocationKeyStruct, Location) == 0x000008, "Member 'FMovieScene3DLocationKeyStruct::Location' has a wrong offset!");
static_assert(offsetof(FMovieScene3DLocationKeyStruct, Time) == 0x000020, "Member 'FMovieScene3DLocationKeyStruct::Time' has a wrong offset!");

struct FMovieScene3DRotationKeyStruct final : public FMovieSceneKeyStruct
{
public:
	struct FRotator                               Rotation;
	struct FFrameNumber                           Time;
	uint8                                         Pad_24[0x1C];
};
static_assert(alignof(FMovieScene3DRotationKeyStruct) == 0x000008, "Wrong alignment on FMovieScene3DRotationKeyStruct");
static_assert(sizeof(FMovieScene3DRotationKeyStruct) == 0x000040, "Wrong size on FMovieScene3DRotationKeyStruct");
static_assert(offsetof(FMovieScene3DRotationKeyStruct, Rotation) == 0x000008, "Member 'FMovieScene3DRotationKeyStruct::Rotation' has a wrong offset!");
static_assert(offsetof(FMovieScene3DRotationKeyStruct, Time) == 0x000020, "Member 'FMovieScene3DRotationKeyStruct::Time' has a wrong offset!");

struct FMovieScene3DScaleKeyStruct final : public FMovieSceneKeyStruct
{
public:
	struct FVector3f                              Scale;
	struct FFrameNumber                           Time;
	uint8                                         Pad_18[0x18];
};
static_assert(alignof(FMovieScene3DScaleKeyStruct) == 0x000008, "Wrong alignment on FMovieScene3DScaleKeyStruct");
static_assert(sizeof(FMovieScene3DScaleKeyStruct) == 0x000030, "Wrong size on FMovieScene3DScaleKeyStruct");
static_assert(offsetof(FMovieScene3DScaleKeyStruct, Scale) == 0x000008, "Member 'FMovieScene3DScaleKeyStruct::Scale' has a wrong offset!");
static_assert(offsetof(FMovieScene3DScaleKeyStruct, Time) == 0x000014, "Member 'FMovieScene3DScaleKeyStruct::Time' has a wrong offset!");

struct FMovieScene3DTransformKeyStruct final : public FMovieSceneKeyStruct
{
public:
	struct FVector                                Location;
	struct FRotator                               Rotation;
	struct FVector3f                              Scale;
	struct FFrameNumber                           Time;
	uint8                                         Pad_48[0x18];
};
static_assert(alignof(FMovieScene3DTransformKeyStruct) == 0x000008, "Wrong alignment on FMovieScene3DTransformKeyStruct");
static_assert(sizeof(FMovieScene3DTransformKeyStruct) == 0x000060, "Wrong size on FMovieScene3DTransformKeyStruct");
static_assert(offsetof(FMovieScene3DTransformKeyStruct, Location) == 0x000008, "Member 'FMovieScene3DTransformKeyStruct::Location' has a wrong offset!");
static_assert(offsetof(FMovieScene3DTransformKeyStruct, Rotation) == 0x000020, "Member 'FMovieScene3DTransformKeyStruct::Rotation' has a wrong offset!");
static_assert(offsetof(FMovieScene3DTransformKeyStruct, Scale) == 0x000038, "Member 'FMovieScene3DTransformKeyStruct::Scale' has a wrong offset!");
static_assert(offsetof(FMovieScene3DTransformKeyStruct, Time) == 0x000044, "Member 'FMovieScene3DTransformKeyStruct::Time' has a wrong offset!");

struct FMovieSceneTransformMask final
{
public:
	uint32                                        Mask;
};
static_assert(alignof(FMovieSceneTransformMask) == 0x000004, "Wrong alignment on FMovieSceneTransformMask");
static_assert(sizeof(FMovieSceneTransformMask) == 0x000004, "Wrong size on FMovieSceneTransformMask");
static_assert(offsetof(FMovieSceneTransformMask, Mask) == 0x000000, "Member 'FMovieSceneTransformMask::Mask' has a wrong offset!");

struct alignas(0x08) FMovieSceneBaseCacheParams
{
public:
	uint8                                         Pad_0[0x8];
	struct FFrameNumber                           FirstLoopStartFrameOffset;
	struct FFrameNumber                           StartFrameOffset;
	struct FFrameNumber                           EndFrameOffset;
	float                                         PlayRate;
	uint8                                         bReverse : 1;
	uint8                                         Pad_19[0x7];
};
static_assert(alignof(FMovieSceneBaseCacheParams) == 0x000008, "Wrong alignment on FMovieSceneBaseCacheParams");
static_assert(sizeof(FMovieSceneBaseCacheParams) == 0x000020, "Wrong size on FMovieSceneBaseCacheParams");
static_assert(offsetof(FMovieSceneBaseCacheParams, FirstLoopStartFrameOffset) == 0x000008, "Member 'FMovieSceneBaseCacheParams::FirstLoopStartFrameOffset' has a wrong offset!");
static_assert(offsetof(FMovieSceneBaseCacheParams, StartFrameOffset) == 0x00000C, "Member 'FMovieSceneBaseCacheParams::StartFrameOffset' has a wrong offset!");
static_assert(offsetof(FMovieSceneBaseCacheParams, EndFrameOffset) == 0x000010, "Member 'FMovieSceneBaseCacheParams::EndFrameOffset' has a wrong offset!");
static_assert(offsetof(FMovieSceneBaseCacheParams, PlayRate) == 0x000014, "Member 'FMovieSceneBaseCacheParams::PlayRate' has a wrong offset!");

struct FMovieSceneColorKeyStruct final : public FMovieSceneKeyStruct
{
public:
	struct FLinearColor                           Color;
	struct FFrameNumber                           Time;
	uint8                                         Pad_1C[0x1C];
};
static_assert(alignof(FMovieSceneColorKeyStruct) == 0x000008, "Wrong alignment on FMovieSceneColorKeyStruct");
static_assert(sizeof(FMovieSceneColorKeyStruct) == 0x000038, "Wrong size on FMovieSceneColorKeyStruct");
static_assert(offsetof(FMovieSceneColorKeyStruct, Color) == 0x000008, "Member 'FMovieSceneColorKeyStruct::Color' has a wrong offset!");
static_assert(offsetof(FMovieSceneColorKeyStruct, Time) == 0x000018, "Member 'FMovieSceneColorKeyStruct::Time' has a wrong offset!");

struct FMovieSceneConsoleVariableCollection final
{
public:
	TScriptInterface<class IMovieSceneConsoleVariableTrackInterface> Interface;
	bool                                          bOnlyIncludeChecked;
	uint8                                         Pad_11[0x7];
};
static_assert(alignof(FMovieSceneConsoleVariableCollection) == 0x000008, "Wrong alignment on FMovieSceneConsoleVariableCollection");
static_assert(sizeof(FMovieSceneConsoleVariableCollection) == 0x000018, "Wrong size on FMovieSceneConsoleVariableCollection");
static_assert(offsetof(FMovieSceneConsoleVariableCollection, Interface) == 0x000000, "Member 'FMovieSceneConsoleVariableCollection::Interface' has a wrong offset!");
static_assert(offsetof(FMovieSceneConsoleVariableCollection, bOnlyIncludeChecked) == 0x000010, "Member 'FMovieSceneConsoleVariableCollection::bOnlyIncludeChecked' has a wrong offset!");

struct FMovieSceneCVarOverrides final
{
public:
	TMap<class FString, class FString>            ValuesByCVar;
};
static_assert(alignof(FMovieSceneCVarOverrides) == 0x000008, "Wrong alignment on FMovieSceneCVarOverrides");
static_assert(sizeof(FMovieSceneCVarOverrides) == 0x000050, "Wrong size on FMovieSceneCVarOverrides");
static_assert(offsetof(FMovieSceneCVarOverrides, ValuesByCVar) == 0x000000, "Member 'FMovieSceneCVarOverrides::ValuesByCVar' has a wrong offset!");

struct FMovieSceneFloatVectorKeyStructBase : public FMovieSceneKeyStruct
{
public:
	struct FFrameNumber                           Time;
	uint8                                         Pad_C[0x1C];
};
static_assert(alignof(FMovieSceneFloatVectorKeyStructBase) == 0x000008, "Wrong alignment on FMovieSceneFloatVectorKeyStructBase");
static_assert(sizeof(FMovieSceneFloatVectorKeyStructBase) == 0x000028, "Wrong size on FMovieSceneFloatVectorKeyStructBase");
static_assert(offsetof(FMovieSceneFloatVectorKeyStructBase, Time) == 0x000008, "Member 'FMovieSceneFloatVectorKeyStructBase::Time' has a wrong offset!");

struct FMovieSceneVector2fKeyStruct final : public FMovieSceneFloatVectorKeyStructBase
{
public:
	struct FVector2f                              Vector;
};
static_assert(alignof(FMovieSceneVector2fKeyStruct) == 0x000008, "Wrong alignment on FMovieSceneVector2fKeyStruct");
static_assert(sizeof(FMovieSceneVector2fKeyStruct) == 0x000030, "Wrong size on FMovieSceneVector2fKeyStruct");
static_assert(offsetof(FMovieSceneVector2fKeyStruct, Vector) == 0x000028, "Member 'FMovieSceneVector2fKeyStruct::Vector' has a wrong offset!");

struct FMovieSceneVector3fKeyStruct final : public FMovieSceneFloatVectorKeyStructBase
{
public:
	struct FVector3f                              Vector;
	uint8                                         Pad_34[0x4];
};
static_assert(alignof(FMovieSceneVector3fKeyStruct) == 0x000008, "Wrong alignment on FMovieSceneVector3fKeyStruct");
static_assert(sizeof(FMovieSceneVector3fKeyStruct) == 0x000038, "Wrong size on FMovieSceneVector3fKeyStruct");
static_assert(offsetof(FMovieSceneVector3fKeyStruct, Vector) == 0x000028, "Member 'FMovieSceneVector3fKeyStruct::Vector' has a wrong offset!");

struct FMovieSceneVector4fKeyStruct final : public FMovieSceneFloatVectorKeyStructBase
{
public:
	uint8                                         Pad_28[0x8];
	struct FVector4f                              Vector;
};
static_assert(alignof(FMovieSceneVector4fKeyStruct) == 0x000010, "Wrong alignment on FMovieSceneVector4fKeyStruct");
static_assert(sizeof(FMovieSceneVector4fKeyStruct) == 0x000040, "Wrong size on FMovieSceneVector4fKeyStruct");
static_assert(offsetof(FMovieSceneVector4fKeyStruct, Vector) == 0x000030, "Member 'FMovieSceneVector4fKeyStruct::Vector' has a wrong offset!");

struct FMovieSceneDoubleVectorKeyStructBase : public FMovieSceneKeyStruct
{
public:
	struct FFrameNumber                           Time;
	uint8                                         Pad_C[0x1C];
};
static_assert(alignof(FMovieSceneDoubleVectorKeyStructBase) == 0x000008, "Wrong alignment on FMovieSceneDoubleVectorKeyStructBase");
static_assert(sizeof(FMovieSceneDoubleVectorKeyStructBase) == 0x000028, "Wrong size on FMovieSceneDoubleVectorKeyStructBase");
static_assert(offsetof(FMovieSceneDoubleVectorKeyStructBase, Time) == 0x000008, "Member 'FMovieSceneDoubleVectorKeyStructBase::Time' has a wrong offset!");

struct FMovieSceneVector2DKeyStruct final : public FMovieSceneDoubleVectorKeyStructBase
{
public:
	struct FVector2D                              Vector;
};
static_assert(alignof(FMovieSceneVector2DKeyStruct) == 0x000008, "Wrong alignment on FMovieSceneVector2DKeyStruct");
static_assert(sizeof(FMovieSceneVector2DKeyStruct) == 0x000038, "Wrong size on FMovieSceneVector2DKeyStruct");
static_assert(offsetof(FMovieSceneVector2DKeyStruct, Vector) == 0x000028, "Member 'FMovieSceneVector2DKeyStruct::Vector' has a wrong offset!");

struct FMovieSceneVector3dKeyStruct final : public FMovieSceneDoubleVectorKeyStructBase
{
public:
	struct FVector3d                              Vector;
};
static_assert(alignof(FMovieSceneVector3dKeyStruct) == 0x000008, "Wrong alignment on FMovieSceneVector3dKeyStruct");
static_assert(sizeof(FMovieSceneVector3dKeyStruct) == 0x000040, "Wrong size on FMovieSceneVector3dKeyStruct");
static_assert(offsetof(FMovieSceneVector3dKeyStruct, Vector) == 0x000028, "Member 'FMovieSceneVector3dKeyStruct::Vector' has a wrong offset!");

struct FMovieSceneVector4dKeyStruct final : public FMovieSceneDoubleVectorKeyStructBase
{
public:
	uint8                                         Pad_28[0x8];
	struct FVector4d                              Vector;
};
static_assert(alignof(FMovieSceneVector4dKeyStruct) == 0x000010, "Wrong alignment on FMovieSceneVector4dKeyStruct");
static_assert(sizeof(FMovieSceneVector4dKeyStruct) == 0x000050, "Wrong size on FMovieSceneVector4dKeyStruct");
static_assert(offsetof(FMovieSceneVector4dKeyStruct, Vector) == 0x000030, "Member 'FMovieSceneVector4dKeyStruct::Vector' has a wrong offset!");

struct FMovieSceneEventTriggerData final
{
public:
	struct FMovieSceneEventPtrs                   Ptrs;
	struct FGuid                                  ObjectBindingID;
	uint8                                         Pad_38[0x10];
};
static_assert(alignof(FMovieSceneEventTriggerData) == 0x000008, "Wrong alignment on FMovieSceneEventTriggerData");
static_assert(sizeof(FMovieSceneEventTriggerData) == 0x000048, "Wrong size on FMovieSceneEventTriggerData");
static_assert(offsetof(FMovieSceneEventTriggerData, Ptrs) == 0x000000, "Member 'FMovieSceneEventTriggerData::Ptrs' has a wrong offset!");
static_assert(offsetof(FMovieSceneEventTriggerData, ObjectBindingID) == 0x000028, "Member 'FMovieSceneEventTriggerData::ObjectBindingID' has a wrong offset!");

struct alignas(0x10) FMovieSceneSkeletalAnimRootMotionTrackParams final
{
public:
	uint8                                         Pad_0[0x90];
};
static_assert(alignof(FMovieSceneSkeletalAnimRootMotionTrackParams) == 0x000010, "Wrong alignment on FMovieSceneSkeletalAnimRootMotionTrackParams");
static_assert(sizeof(FMovieSceneSkeletalAnimRootMotionTrackParams) == 0x000090, "Wrong size on FMovieSceneSkeletalAnimRootMotionTrackParams");

}
