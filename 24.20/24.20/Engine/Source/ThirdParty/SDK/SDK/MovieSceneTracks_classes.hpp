#pragma once

#include "Basic.hpp"

#include "Constraints_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "CoreUObject_classes.hpp"
#include "MovieSceneTracks_structs.hpp"
#include "MovieScene_structs.hpp"
#include "MovieScene_classes.hpp"
#include "Engine_structs.hpp"
#include "Engine_classes.hpp"

namespace SDK
{

class IMovieSceneTransformOrigin final : public IInterface
{
public:
	struct FTransform BP_GetTransformOrigin() const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"MovieSceneTransformOrigin">();
	}
	static class IMovieSceneTransformOrigin* GetDefaultObj()
	{
		return GetDefaultObjImpl<IMovieSceneTransformOrigin>();
	}
};
static_assert(alignof(IMovieSceneTransformOrigin) == 0x000008, "Wrong alignment on IMovieSceneTransformOrigin");
static_assert(sizeof(IMovieSceneTransformOrigin) == 0x000028, "Wrong size on IMovieSceneTransformOrigin");

class IMovieSceneConsoleVariableTrackInterface final : public IInterface
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"MovieSceneConsoleVariableTrackInterface">();
	}
	static class IMovieSceneConsoleVariableTrackInterface* GetDefaultObj()
	{
		return GetDefaultObjImpl<IMovieSceneConsoleVariableTrackInterface>();
	}
};
static_assert(alignof(IMovieSceneConsoleVariableTrackInterface) == 0x000008, "Wrong alignment on IMovieSceneConsoleVariableTrackInterface");
static_assert(sizeof(IMovieSceneConsoleVariableTrackInterface) == 0x000028, "Wrong size on IMovieSceneConsoleVariableTrackInterface");

class UMovieSceneDoublePerlinNoiseChannelContainer final : public UMovieSceneChannelOverrideContainer
{
public:
	struct FMovieSceneDoublePerlinNoiseChannel    PerlinNoiseChannel;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"MovieSceneDoublePerlinNoiseChannelContainer">();
	}
	static class UMovieSceneDoublePerlinNoiseChannelContainer* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMovieSceneDoublePerlinNoiseChannelContainer>();
	}
};
static_assert(alignof(UMovieSceneDoublePerlinNoiseChannelContainer) == 0x000008, "Wrong alignment on UMovieSceneDoublePerlinNoiseChannelContainer");
static_assert(sizeof(UMovieSceneDoublePerlinNoiseChannelContainer) == 0x0000C0, "Wrong size on UMovieSceneDoublePerlinNoiseChannelContainer");
static_assert(offsetof(UMovieSceneDoublePerlinNoiseChannelContainer, PerlinNoiseChannel) == 0x000058, "Member 'UMovieSceneDoublePerlinNoiseChannelContainer::PerlinNoiseChannel' has a wrong offset!");

class UMovieSceneFloatPerlinNoiseChannelContainer final : public UMovieSceneChannelOverrideContainer
{
public:
	struct FMovieSceneFloatPerlinNoiseChannel     PerlinNoiseChannel;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"MovieSceneFloatPerlinNoiseChannelContainer">();
	}
	static class UMovieSceneFloatPerlinNoiseChannelContainer* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMovieSceneFloatPerlinNoiseChannelContainer>();
	}
};
static_assert(alignof(UMovieSceneFloatPerlinNoiseChannelContainer) == 0x000008, "Wrong alignment on UMovieSceneFloatPerlinNoiseChannelContainer");
static_assert(sizeof(UMovieSceneFloatPerlinNoiseChannelContainer) == 0x0000C0, "Wrong size on UMovieSceneFloatPerlinNoiseChannelContainer");
static_assert(offsetof(UMovieSceneFloatPerlinNoiseChannelContainer, PerlinNoiseChannel) == 0x000058, "Member 'UMovieSceneFloatPerlinNoiseChannelContainer::PerlinNoiseChannel' has a wrong offset!");

class UMovieSceneInterrogatedPropertyInstantiatorSystem final : public UMovieSceneEntityInstantiatorSystem
{
public:
	uint8                                         Pad_40[0x1B0];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"MovieSceneInterrogatedPropertyInstantiatorSystem">();
	}
	static class UMovieSceneInterrogatedPropertyInstantiatorSystem* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMovieSceneInterrogatedPropertyInstantiatorSystem>();
	}
};
static_assert(alignof(UMovieSceneInterrogatedPropertyInstantiatorSystem) == 0x000008, "Wrong alignment on UMovieSceneInterrogatedPropertyInstantiatorSystem");
static_assert(sizeof(UMovieSceneInterrogatedPropertyInstantiatorSystem) == 0x0001F0, "Wrong size on UMovieSceneInterrogatedPropertyInstantiatorSystem");

class UMovieSceneCameraShakeEvaluator final : public UObject
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"MovieSceneCameraShakeEvaluator">();
	}
	static class UMovieSceneCameraShakeEvaluator* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMovieSceneCameraShakeEvaluator>();
	}
};
static_assert(alignof(UMovieSceneCameraShakeEvaluator) == 0x000008, "Wrong alignment on UMovieSceneCameraShakeEvaluator");
static_assert(sizeof(UMovieSceneCameraShakeEvaluator) == 0x000028, "Wrong size on UMovieSceneCameraShakeEvaluator");

class UMovieScene3DConstraintSection : public UMovieSceneSection
{
public:
	struct FGuid                                  ConstraintId;
	struct FMovieSceneObjectBindingID             ConstraintBindingID;

public:
	void SetConstraintBindingID(const struct FMovieSceneObjectBindingID& InConstraintBindingID);

	const struct FMovieSceneObjectBindingID GetConstraintBindingID() const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"MovieScene3DConstraintSection">();
	}
	static class UMovieScene3DConstraintSection* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMovieScene3DConstraintSection>();
	}
};
static_assert(alignof(UMovieScene3DConstraintSection) == 0x000008, "Wrong alignment on UMovieScene3DConstraintSection");
static_assert(sizeof(UMovieScene3DConstraintSection) == 0x000118, "Wrong size on UMovieScene3DConstraintSection");
static_assert(offsetof(UMovieScene3DConstraintSection, ConstraintId) == 0x0000F0, "Member 'UMovieScene3DConstraintSection::ConstraintId' has a wrong offset!");
static_assert(offsetof(UMovieScene3DConstraintSection, ConstraintBindingID) == 0x000100, "Member 'UMovieScene3DConstraintSection::ConstraintBindingID' has a wrong offset!");

class UMovieScene3DAttachSection final : public UMovieScene3DConstraintSection
{
public:
	uint8                                         Pad_118[0x8];
	class FName                                   AttachSocketName;
	class FName                                   AttachComponentName;
	EAttachmentRule                               AttachmentLocationRule;
	EAttachmentRule                               AttachmentRotationRule;
	EAttachmentRule                               AttachmentScaleRule;
	EDetachmentRule                               DetachmentLocationRule;
	EDetachmentRule                               DetachmentRotationRule;
	EDetachmentRule                               DetachmentScaleRule;
	uint8                                         Pad_12E[0x2];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"MovieScene3DAttachSection">();
	}
	static class UMovieScene3DAttachSection* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMovieScene3DAttachSection>();
	}
};
static_assert(alignof(UMovieScene3DAttachSection) == 0x000008, "Wrong alignment on UMovieScene3DAttachSection");
static_assert(sizeof(UMovieScene3DAttachSection) == 0x000130, "Wrong size on UMovieScene3DAttachSection");
static_assert(offsetof(UMovieScene3DAttachSection, AttachSocketName) == 0x000120, "Member 'UMovieScene3DAttachSection::AttachSocketName' has a wrong offset!");
static_assert(offsetof(UMovieScene3DAttachSection, AttachComponentName) == 0x000124, "Member 'UMovieScene3DAttachSection::AttachComponentName' has a wrong offset!");
static_assert(offsetof(UMovieScene3DAttachSection, AttachmentLocationRule) == 0x000128, "Member 'UMovieScene3DAttachSection::AttachmentLocationRule' has a wrong offset!");
static_assert(offsetof(UMovieScene3DAttachSection, AttachmentRotationRule) == 0x000129, "Member 'UMovieScene3DAttachSection::AttachmentRotationRule' has a wrong offset!");
static_assert(offsetof(UMovieScene3DAttachSection, AttachmentScaleRule) == 0x00012A, "Member 'UMovieScene3DAttachSection::AttachmentScaleRule' has a wrong offset!");
static_assert(offsetof(UMovieScene3DAttachSection, DetachmentLocationRule) == 0x00012B, "Member 'UMovieScene3DAttachSection::DetachmentLocationRule' has a wrong offset!");
static_assert(offsetof(UMovieScene3DAttachSection, DetachmentRotationRule) == 0x00012C, "Member 'UMovieScene3DAttachSection::DetachmentRotationRule' has a wrong offset!");
static_assert(offsetof(UMovieScene3DAttachSection, DetachmentScaleRule) == 0x00012D, "Member 'UMovieScene3DAttachSection::DetachmentScaleRule' has a wrong offset!");

class UMovieScene3DPathSection final : public UMovieScene3DConstraintSection
{
public:
	struct FMovieSceneFloatChannel                TimingCurve;
	EMovieScene3DPathSection_Axis                 FrontAxisEnum;
	EMovieScene3DPathSection_Axis                 UpAxisEnum;
	uint8                                         Pad_22A[0x2];
	uint8                                         bFollow : 1;
	uint8                                         bReverse : 1;
	uint8                                         bForceUpright : 1;
	uint8                                         Pad_22D[0x3];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"MovieScene3DPathSection">();
	}
	static class UMovieScene3DPathSection* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMovieScene3DPathSection>();
	}
};
static_assert(alignof(UMovieScene3DPathSection) == 0x000008, "Wrong alignment on UMovieScene3DPathSection");
static_assert(sizeof(UMovieScene3DPathSection) == 0x000230, "Wrong size on UMovieScene3DPathSection");
static_assert(offsetof(UMovieScene3DPathSection, TimingCurve) == 0x000118, "Member 'UMovieScene3DPathSection::TimingCurve' has a wrong offset!");
static_assert(offsetof(UMovieScene3DPathSection, FrontAxisEnum) == 0x000228, "Member 'UMovieScene3DPathSection::FrontAxisEnum' has a wrong offset!");
static_assert(offsetof(UMovieScene3DPathSection, UpAxisEnum) == 0x000229, "Member 'UMovieScene3DPathSection::UpAxisEnum' has a wrong offset!");

class UMovieScene3DTransformSectionConstraints final : public UObject
{
public:
	TArray<struct FConstraintAndActiveChannel>    ConstraintsChannels;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"MovieScene3DTransformSectionConstraints">();
	}
	static class UMovieScene3DTransformSectionConstraints* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMovieScene3DTransformSectionConstraints>();
	}
};
static_assert(alignof(UMovieScene3DTransformSectionConstraints) == 0x000008, "Wrong alignment on UMovieScene3DTransformSectionConstraints");
static_assert(sizeof(UMovieScene3DTransformSectionConstraints) == 0x000038, "Wrong size on UMovieScene3DTransformSectionConstraints");
static_assert(offsetof(UMovieScene3DTransformSectionConstraints, ConstraintsChannels) == 0x000028, "Member 'UMovieScene3DTransformSectionConstraints::ConstraintsChannels' has a wrong offset!");

class UMovieScene3DTransformSection final : public UMovieSceneSection
{
public:
	uint8                                         Pad_F0[0x40];
	struct FMovieSceneTransformMask               TransformMask;
	uint8                                         Pad_134[0x4];
	struct FMovieSceneDoubleChannel               Translation[0x3];
	struct FMovieSceneDoubleChannel               Rotation[0x3];
	struct FMovieSceneDoubleChannel               Scale[0x3];
	struct FMovieSceneFloatChannel                ManualWeight;
	class UMovieSceneSectionChannelOverrideRegistry* OverrideRegistry;
	class UMovieScene3DTransformSectionConstraints* Constraints;
	bool                                          bUseQuaternionInterpolation;
	uint8                                         Pad_C31[0x7];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"MovieScene3DTransformSection">();
	}
	static class UMovieScene3DTransformSection* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMovieScene3DTransformSection>();
	}
};
static_assert(alignof(UMovieScene3DTransformSection) == 0x000008, "Wrong alignment on UMovieScene3DTransformSection");
static_assert(sizeof(UMovieScene3DTransformSection) == 0x000C38, "Wrong size on UMovieScene3DTransformSection");
static_assert(offsetof(UMovieScene3DTransformSection, TransformMask) == 0x000130, "Member 'UMovieScene3DTransformSection::TransformMask' has a wrong offset!");
static_assert(offsetof(UMovieScene3DTransformSection, Translation) == 0x000138, "Member 'UMovieScene3DTransformSection::Translation' has a wrong offset!");
static_assert(offsetof(UMovieScene3DTransformSection, Rotation) == 0x000480, "Member 'UMovieScene3DTransformSection::Rotation' has a wrong offset!");
static_assert(offsetof(UMovieScene3DTransformSection, Scale) == 0x0007C8, "Member 'UMovieScene3DTransformSection::Scale' has a wrong offset!");
static_assert(offsetof(UMovieScene3DTransformSection, ManualWeight) == 0x000B10, "Member 'UMovieScene3DTransformSection::ManualWeight' has a wrong offset!");
static_assert(offsetof(UMovieScene3DTransformSection, OverrideRegistry) == 0x000C20, "Member 'UMovieScene3DTransformSection::OverrideRegistry' has a wrong offset!");
static_assert(offsetof(UMovieScene3DTransformSection, Constraints) == 0x000C28, "Member 'UMovieScene3DTransformSection::Constraints' has a wrong offset!");
static_assert(offsetof(UMovieScene3DTransformSection, bUseQuaternionInterpolation) == 0x000C30, "Member 'UMovieScene3DTransformSection::bUseQuaternionInterpolation' has a wrong offset!");

class UMovieSceneActorReferenceSection final : public UMovieSceneSection
{
public:
	struct FMovieSceneActorReferenceData          ActorReferenceData;
	struct FIntegralCurve                         ActorGuidIndexCurve;
	TArray<class FString>                         ActorGuidStrings;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"MovieSceneActorReferenceSection">();
	}
	static class UMovieSceneActorReferenceSection* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMovieSceneActorReferenceSection>();
	}
};
static_assert(alignof(UMovieSceneActorReferenceSection) == 0x000008, "Wrong alignment on UMovieSceneActorReferenceSection");
static_assert(sizeof(UMovieSceneActorReferenceSection) == 0x000298, "Wrong size on UMovieSceneActorReferenceSection");
static_assert(offsetof(UMovieSceneActorReferenceSection, ActorReferenceData) == 0x0000F0, "Member 'UMovieSceneActorReferenceSection::ActorReferenceData' has a wrong offset!");
static_assert(offsetof(UMovieSceneActorReferenceSection, ActorGuidIndexCurve) == 0x000208, "Member 'UMovieSceneActorReferenceSection::ActorGuidIndexCurve' has a wrong offset!");
static_assert(offsetof(UMovieSceneActorReferenceSection, ActorGuidStrings) == 0x000288, "Member 'UMovieSceneActorReferenceSection::ActorGuidStrings' has a wrong offset!");

class UMovieSceneAudioSection final : public UMovieSceneSection
{
public:
	class USoundBase*                             sound;
	struct FFrameNumber                           StartFrameOffset;
	float                                         StartOffset;
	float                                         AudioStartTime;
	float                                         AudioDilationFactor;
	float                                         AudioVolume;
	uint8                                         Pad_10C[0x4];
	struct FMovieSceneFloatChannel                SoundVolume;
	struct FMovieSceneFloatChannel                PitchMultiplier;
	TMap<class FName, struct FMovieSceneFloatChannel> Inputs_Float;
	TMap<class FName, struct FMovieSceneStringChannel> Inputs_String;
	TMap<class FName, struct FMovieSceneBoolChannel> Inputs_Bool;
	TMap<class FName, struct FMovieSceneIntegerChannel> Inputs_Int;
	TMap<class FName, struct FMovieSceneAudioTriggerChannel> Inputs_Trigger;
	struct FMovieSceneActorReferenceData          AttachActorData;
	bool                                          bLooping;
	bool                                          bSuppressSubtitles;
	bool                                          bOverrideAttenuation;
	uint8                                         Pad_5DB[0x5];
	class USoundAttenuation*                      AttenuationSettings;
	TDelegate<void(TArray<struct FSubtitleCue>& Subtitles, float CueDuration)> OnQueueSubtitles;
	uint8                                         Pad_5F4[0x4];
	TMulticastInlineDelegate<void()>              OnAudioFinished;
	TMulticastInlineDelegate<void(class USoundWave* PlayingSoundWave, float PlaybackPercent)> OnAudioPlaybackPercent;

public:
	void SetSound(class USoundBase* InSound);
	void SetStartOffset(const struct FFrameNumber& InStartOffset);

	class USoundBase* GetSound() const;
	struct FFrameNumber GetStartOffset() const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"MovieSceneAudioSection">();
	}
	static class UMovieSceneAudioSection* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMovieSceneAudioSection>();
	}
};
static_assert(alignof(UMovieSceneAudioSection) == 0x000008, "Wrong alignment on UMovieSceneAudioSection");
static_assert(sizeof(UMovieSceneAudioSection) == 0x000618, "Wrong size on UMovieSceneAudioSection");
static_assert(offsetof(UMovieSceneAudioSection, sound) == 0x0000F0, "Member 'UMovieSceneAudioSection::sound' has a wrong offset!");
static_assert(offsetof(UMovieSceneAudioSection, StartFrameOffset) == 0x0000F8, "Member 'UMovieSceneAudioSection::StartFrameOffset' has a wrong offset!");
static_assert(offsetof(UMovieSceneAudioSection, StartOffset) == 0x0000FC, "Member 'UMovieSceneAudioSection::StartOffset' has a wrong offset!");
static_assert(offsetof(UMovieSceneAudioSection, AudioStartTime) == 0x000100, "Member 'UMovieSceneAudioSection::AudioStartTime' has a wrong offset!");
static_assert(offsetof(UMovieSceneAudioSection, AudioDilationFactor) == 0x000104, "Member 'UMovieSceneAudioSection::AudioDilationFactor' has a wrong offset!");
static_assert(offsetof(UMovieSceneAudioSection, AudioVolume) == 0x000108, "Member 'UMovieSceneAudioSection::AudioVolume' has a wrong offset!");
static_assert(offsetof(UMovieSceneAudioSection, SoundVolume) == 0x000110, "Member 'UMovieSceneAudioSection::SoundVolume' has a wrong offset!");
static_assert(offsetof(UMovieSceneAudioSection, PitchMultiplier) == 0x000220, "Member 'UMovieSceneAudioSection::PitchMultiplier' has a wrong offset!");
static_assert(offsetof(UMovieSceneAudioSection, Inputs_Float) == 0x000330, "Member 'UMovieSceneAudioSection::Inputs_Float' has a wrong offset!");
static_assert(offsetof(UMovieSceneAudioSection, Inputs_String) == 0x000380, "Member 'UMovieSceneAudioSection::Inputs_String' has a wrong offset!");
static_assert(offsetof(UMovieSceneAudioSection, Inputs_Bool) == 0x0003D0, "Member 'UMovieSceneAudioSection::Inputs_Bool' has a wrong offset!");
static_assert(offsetof(UMovieSceneAudioSection, Inputs_Int) == 0x000420, "Member 'UMovieSceneAudioSection::Inputs_Int' has a wrong offset!");
static_assert(offsetof(UMovieSceneAudioSection, Inputs_Trigger) == 0x000470, "Member 'UMovieSceneAudioSection::Inputs_Trigger' has a wrong offset!");
static_assert(offsetof(UMovieSceneAudioSection, AttachActorData) == 0x0004C0, "Member 'UMovieSceneAudioSection::AttachActorData' has a wrong offset!");
static_assert(offsetof(UMovieSceneAudioSection, bLooping) == 0x0005D8, "Member 'UMovieSceneAudioSection::bLooping' has a wrong offset!");
static_assert(offsetof(UMovieSceneAudioSection, bSuppressSubtitles) == 0x0005D9, "Member 'UMovieSceneAudioSection::bSuppressSubtitles' has a wrong offset!");
static_assert(offsetof(UMovieSceneAudioSection, bOverrideAttenuation) == 0x0005DA, "Member 'UMovieSceneAudioSection::bOverrideAttenuation' has a wrong offset!");
static_assert(offsetof(UMovieSceneAudioSection, AttenuationSettings) == 0x0005E0, "Member 'UMovieSceneAudioSection::AttenuationSettings' has a wrong offset!");
static_assert(offsetof(UMovieSceneAudioSection, OnQueueSubtitles) == 0x0005E8, "Member 'UMovieSceneAudioSection::OnQueueSubtitles' has a wrong offset!");
static_assert(offsetof(UMovieSceneAudioSection, OnAudioFinished) == 0x0005F8, "Member 'UMovieSceneAudioSection::OnAudioFinished' has a wrong offset!");
static_assert(offsetof(UMovieSceneAudioSection, OnAudioPlaybackPercent) == 0x000608, "Member 'UMovieSceneAudioSection::OnAudioPlaybackPercent' has a wrong offset!");

class UMovieSceneBaseCacheSection : public UMovieSceneSection
{
public:
	uint8                                         Pad_F0[0x8];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"MovieSceneBaseCacheSection">();
	}
	static class UMovieSceneBaseCacheSection* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMovieSceneBaseCacheSection>();
	}
};
static_assert(alignof(UMovieSceneBaseCacheSection) == 0x000008, "Wrong alignment on UMovieSceneBaseCacheSection");
static_assert(sizeof(UMovieSceneBaseCacheSection) == 0x0000F8, "Wrong size on UMovieSceneBaseCacheSection");

class UMovieSceneByteSection final : public UMovieSceneSection
{
public:
	uint8                                         Pad_F0[0x8];
	struct FMovieSceneByteChannel                 ByteCurve;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"MovieSceneByteSection">();
	}
	static class UMovieSceneByteSection* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMovieSceneByteSection>();
	}
};
static_assert(alignof(UMovieSceneByteSection) == 0x000008, "Wrong alignment on UMovieSceneByteSection");
static_assert(sizeof(UMovieSceneByteSection) == 0x000200, "Wrong size on UMovieSceneByteSection");
static_assert(offsetof(UMovieSceneByteSection, ByteCurve) == 0x0000F8, "Member 'UMovieSceneByteSection::ByteCurve' has a wrong offset!");

class UMovieSceneCameraCutSection final : public UMovieSceneSection
{
public:
	uint8                                         Pad_F0[0x8];
	bool                                          bLockPreviousCamera;
	uint8                                         Pad_F9[0x3];
	struct FGuid                                  CameraGuid;
	struct FMovieSceneObjectBindingID             CameraBindingID;
	uint8                                         Pad_124[0xC];
	struct FTransform                             InitialCameraCutTransform;
	bool                                          bHasInitialCameraCutTransform;
	uint8                                         Pad_191[0xF];

public:
	void SetCameraBindingID(const struct FMovieSceneObjectBindingID& InCameraBindingID);

	const struct FMovieSceneObjectBindingID GetCameraBindingID() const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"MovieSceneCameraCutSection">();
	}
	static class UMovieSceneCameraCutSection* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMovieSceneCameraCutSection>();
	}
};
static_assert(alignof(UMovieSceneCameraCutSection) == 0x000010, "Wrong alignment on UMovieSceneCameraCutSection");
static_assert(sizeof(UMovieSceneCameraCutSection) == 0x0001A0, "Wrong size on UMovieSceneCameraCutSection");
static_assert(offsetof(UMovieSceneCameraCutSection, bLockPreviousCamera) == 0x0000F8, "Member 'UMovieSceneCameraCutSection::bLockPreviousCamera' has a wrong offset!");
static_assert(offsetof(UMovieSceneCameraCutSection, CameraGuid) == 0x0000FC, "Member 'UMovieSceneCameraCutSection::CameraGuid' has a wrong offset!");
static_assert(offsetof(UMovieSceneCameraCutSection, CameraBindingID) == 0x00010C, "Member 'UMovieSceneCameraCutSection::CameraBindingID' has a wrong offset!");
static_assert(offsetof(UMovieSceneCameraCutSection, InitialCameraCutTransform) == 0x000130, "Member 'UMovieSceneCameraCutSection::InitialCameraCutTransform' has a wrong offset!");
static_assert(offsetof(UMovieSceneCameraCutSection, bHasInitialCameraCutTransform) == 0x000190, "Member 'UMovieSceneCameraCutSection::bHasInitialCameraCutTransform' has a wrong offset!");

class UMovieSceneCameraShakeSection final : public UMovieSceneSection
{
public:
	struct FMovieSceneCameraShakeSectionData      ShakeData;
	TSubclassOf<class UCameraShakeBase>           ShakeClass;
	float                                         PlayScale;
	ECameraShakePlaySpace                         Playspace;
	uint8                                         Pad_125[0x3];
	struct FRotator                               UserDefinedPlaySpace;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"MovieSceneCameraShakeSection">();
	}
	static class UMovieSceneCameraShakeSection* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMovieSceneCameraShakeSection>();
	}
};
static_assert(alignof(UMovieSceneCameraShakeSection) == 0x000008, "Wrong alignment on UMovieSceneCameraShakeSection");
static_assert(sizeof(UMovieSceneCameraShakeSection) == 0x000140, "Wrong size on UMovieSceneCameraShakeSection");
static_assert(offsetof(UMovieSceneCameraShakeSection, ShakeData) == 0x0000F0, "Member 'UMovieSceneCameraShakeSection::ShakeData' has a wrong offset!");
static_assert(offsetof(UMovieSceneCameraShakeSection, ShakeClass) == 0x000118, "Member 'UMovieSceneCameraShakeSection::ShakeClass' has a wrong offset!");
static_assert(offsetof(UMovieSceneCameraShakeSection, PlayScale) == 0x000120, "Member 'UMovieSceneCameraShakeSection::PlayScale' has a wrong offset!");
static_assert(offsetof(UMovieSceneCameraShakeSection, Playspace) == 0x000124, "Member 'UMovieSceneCameraShakeSection::Playspace' has a wrong offset!");
static_assert(offsetof(UMovieSceneCameraShakeSection, UserDefinedPlaySpace) == 0x000128, "Member 'UMovieSceneCameraShakeSection::UserDefinedPlaySpace' has a wrong offset!");

class UMovieSceneCameraShakeSourceShakeSection final : public UMovieSceneSection
{
public:
	struct FMovieSceneCameraShakeSectionData      ShakeData;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"MovieSceneCameraShakeSourceShakeSection">();
	}
	static class UMovieSceneCameraShakeSourceShakeSection* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMovieSceneCameraShakeSourceShakeSection>();
	}
};
static_assert(alignof(UMovieSceneCameraShakeSourceShakeSection) == 0x000008, "Wrong alignment on UMovieSceneCameraShakeSourceShakeSection");
static_assert(sizeof(UMovieSceneCameraShakeSourceShakeSection) == 0x000118, "Wrong size on UMovieSceneCameraShakeSourceShakeSection");
static_assert(offsetof(UMovieSceneCameraShakeSourceShakeSection, ShakeData) == 0x0000F0, "Member 'UMovieSceneCameraShakeSourceShakeSection::ShakeData' has a wrong offset!");

class UMovieSceneCameraShakeSourceTriggerSection final : public UMovieSceneSection
{
public:
	struct FMovieSceneCameraShakeSourceTriggerChannel Channel;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"MovieSceneCameraShakeSourceTriggerSection">();
	}
	static class UMovieSceneCameraShakeSourceTriggerSection* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMovieSceneCameraShakeSourceTriggerSection>();
	}
};
static_assert(alignof(UMovieSceneCameraShakeSourceTriggerSection) == 0x000008, "Wrong alignment on UMovieSceneCameraShakeSourceTriggerSection");
static_assert(sizeof(UMovieSceneCameraShakeSourceTriggerSection) == 0x0001E8, "Wrong size on UMovieSceneCameraShakeSourceTriggerSection");
static_assert(offsetof(UMovieSceneCameraShakeSourceTriggerSection, Channel) == 0x0000F0, "Member 'UMovieSceneCameraShakeSourceTriggerSection::Channel' has a wrong offset!");

class UMovieSceneCinematicShotSection final : public UMovieSceneSubSection
{
public:
	class FString                                 ShotDisplayName;
	class FText                                   DisplayName;

public:
	void SetShotDisplayName(const class FString& InShotDisplayName);

	class FString GetShotDisplayName() const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"MovieSceneCinematicShotSection">();
	}
	static class UMovieSceneCinematicShotSection* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMovieSceneCinematicShotSection>();
	}
};
static_assert(alignof(UMovieSceneCinematicShotSection) == 0x000008, "Wrong alignment on UMovieSceneCinematicShotSection");
static_assert(sizeof(UMovieSceneCinematicShotSection) == 0x000160, "Wrong size on UMovieSceneCinematicShotSection");
static_assert(offsetof(UMovieSceneCinematicShotSection, ShotDisplayName) == 0x000138, "Member 'UMovieSceneCinematicShotSection::ShotDisplayName' has a wrong offset!");
static_assert(offsetof(UMovieSceneCinematicShotSection, DisplayName) == 0x000148, "Member 'UMovieSceneCinematicShotSection::DisplayName' has a wrong offset!");

class UMovieSceneColorSection final : public UMovieSceneSection
{
public:
	uint8                                         Pad_F0[0x8];
	struct FMovieSceneFloatChannel                RedCurve;
	struct FMovieSceneFloatChannel                GreenCurve;
	struct FMovieSceneFloatChannel                BlueCurve;
	struct FMovieSceneFloatChannel                AlphaCurve;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"MovieSceneColorSection">();
	}
	static class UMovieSceneColorSection* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMovieSceneColorSection>();
	}
};
static_assert(alignof(UMovieSceneColorSection) == 0x000008, "Wrong alignment on UMovieSceneColorSection");
static_assert(sizeof(UMovieSceneColorSection) == 0x000538, "Wrong size on UMovieSceneColorSection");
static_assert(offsetof(UMovieSceneColorSection, RedCurve) == 0x0000F8, "Member 'UMovieSceneColorSection::RedCurve' has a wrong offset!");
static_assert(offsetof(UMovieSceneColorSection, GreenCurve) == 0x000208, "Member 'UMovieSceneColorSection::GreenCurve' has a wrong offset!");
static_assert(offsetof(UMovieSceneColorSection, BlueCurve) == 0x000318, "Member 'UMovieSceneColorSection::BlueCurve' has a wrong offset!");
static_assert(offsetof(UMovieSceneColorSection, AlphaCurve) == 0x000428, "Member 'UMovieSceneColorSection::AlphaCurve' has a wrong offset!");

class IMovieSceneConstrainedSection final : public IInterface
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"MovieSceneConstrainedSection">();
	}
	static class IMovieSceneConstrainedSection* GetDefaultObj()
	{
		return GetDefaultObjImpl<IMovieSceneConstrainedSection>();
	}
};
static_assert(alignof(IMovieSceneConstrainedSection) == 0x000008, "Wrong alignment on IMovieSceneConstrainedSection");
static_assert(sizeof(IMovieSceneConstrainedSection) == 0x000028, "Wrong size on IMovieSceneConstrainedSection");

class UMovieSceneCVarSection final : public UMovieSceneSection
{
public:
	uint8                                         Pad_F0[0x8];
	TArray<struct FMovieSceneConsoleVariableCollection> ConsoleVariableCollections;
	struct FMovieSceneCVarOverrides               ConsoleVariables;

public:
	void SetFromString(const class FString& InString);

	class FString GetString() const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"MovieSceneCVarSection">();
	}
	static class UMovieSceneCVarSection* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMovieSceneCVarSection>();
	}
};
static_assert(alignof(UMovieSceneCVarSection) == 0x000008, "Wrong alignment on UMovieSceneCVarSection");
static_assert(sizeof(UMovieSceneCVarSection) == 0x000158, "Wrong size on UMovieSceneCVarSection");
static_assert(offsetof(UMovieSceneCVarSection, ConsoleVariableCollections) == 0x0000F8, "Member 'UMovieSceneCVarSection::ConsoleVariableCollections' has a wrong offset!");
static_assert(offsetof(UMovieSceneCVarSection, ConsoleVariables) == 0x000108, "Member 'UMovieSceneCVarSection::ConsoleVariables' has a wrong offset!");

class UMovieSceneDataLayerSection final : public UMovieSceneSection
{
public:
	uint8                                         Pad_F0[0x8];
	TArray<struct FActorDataLayer>                DataLayers;
	TArray<class UDataLayerAsset*>                DataLayerAssets;
	EDataLayerRuntimeState                        DesiredState;
	EDataLayerRuntimeState                        PrerollState;
	bool                                          bFlushOnUnload;
	uint8                                         Pad_11B[0x5];

public:
	void SetDataLayerAssets(const TArray<class UDataLayerAsset*>& InDataLayerAssets);
	void SetDataLayers(const TArray<struct FActorDataLayer>& InDataLayers);
	void SetDesiredState(EDataLayerRuntimeState InDesiredState);
	void SetFlushOnUnload(bool bFlushOnUnload_0);
	void SetPrerollState(EDataLayerRuntimeState InPrerollState);

	const TArray<class UDataLayerAsset*> GetDataLayerAssets() const;
	const TArray<struct FActorDataLayer> GetDataLayers() const;
	EDataLayerRuntimeState GetDesiredState() const;
	bool GetFlushOnUnload() const;
	EDataLayerRuntimeState GetPrerollState() const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"MovieSceneDataLayerSection">();
	}
	static class UMovieSceneDataLayerSection* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMovieSceneDataLayerSection>();
	}
};
static_assert(alignof(UMovieSceneDataLayerSection) == 0x000008, "Wrong alignment on UMovieSceneDataLayerSection");
static_assert(sizeof(UMovieSceneDataLayerSection) == 0x000120, "Wrong size on UMovieSceneDataLayerSection");
static_assert(offsetof(UMovieSceneDataLayerSection, DataLayers) == 0x0000F8, "Member 'UMovieSceneDataLayerSection::DataLayers' has a wrong offset!");
static_assert(offsetof(UMovieSceneDataLayerSection, DataLayerAssets) == 0x000108, "Member 'UMovieSceneDataLayerSection::DataLayerAssets' has a wrong offset!");
static_assert(offsetof(UMovieSceneDataLayerSection, DesiredState) == 0x000118, "Member 'UMovieSceneDataLayerSection::DesiredState' has a wrong offset!");
static_assert(offsetof(UMovieSceneDataLayerSection, PrerollState) == 0x000119, "Member 'UMovieSceneDataLayerSection::PrerollState' has a wrong offset!");
static_assert(offsetof(UMovieSceneDataLayerSection, bFlushOnUnload) == 0x00011A, "Member 'UMovieSceneDataLayerSection::bFlushOnUnload' has a wrong offset!");

class UMovieSceneDoubleSection final : public UMovieSceneSection
{
public:
	uint8                                         Pad_F0[0x8];
	struct FMovieSceneDoubleChannel               DoubleCurve;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"MovieSceneDoubleSection">();
	}
	static class UMovieSceneDoubleSection* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMovieSceneDoubleSection>();
	}
};
static_assert(alignof(UMovieSceneDoubleSection) == 0x000008, "Wrong alignment on UMovieSceneDoubleSection");
static_assert(sizeof(UMovieSceneDoubleSection) == 0x000210, "Wrong size on UMovieSceneDoubleSection");
static_assert(offsetof(UMovieSceneDoubleSection, DoubleCurve) == 0x0000F8, "Member 'UMovieSceneDoubleSection::DoubleCurve' has a wrong offset!");

class UMovieSceneEnumSection final : public UMovieSceneSection
{
public:
	uint8                                         Pad_F0[0x8];
	struct FMovieSceneByteChannel                 EnumCurve;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"MovieSceneEnumSection">();
	}
	static class UMovieSceneEnumSection* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMovieSceneEnumSection>();
	}
};
static_assert(alignof(UMovieSceneEnumSection) == 0x000008, "Wrong alignment on UMovieSceneEnumSection");
static_assert(sizeof(UMovieSceneEnumSection) == 0x000200, "Wrong size on UMovieSceneEnumSection");
static_assert(offsetof(UMovieSceneEnumSection, EnumCurve) == 0x0000F8, "Member 'UMovieSceneEnumSection::EnumCurve' has a wrong offset!");

class UMovieSceneEventSectionBase : public UMovieSceneSection
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"MovieSceneEventSectionBase">();
	}
	static class UMovieSceneEventSectionBase* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMovieSceneEventSectionBase>();
	}
};
static_assert(alignof(UMovieSceneEventSectionBase) == 0x000008, "Wrong alignment on UMovieSceneEventSectionBase");
static_assert(sizeof(UMovieSceneEventSectionBase) == 0x0000F0, "Wrong size on UMovieSceneEventSectionBase");

class UMovieSceneEventRepeaterSection final : public UMovieSceneEventSectionBase
{
public:
	uint8                                         Pad_F0[0x8];
	struct FMovieSceneEvent                       Event;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"MovieSceneEventRepeaterSection">();
	}
	static class UMovieSceneEventRepeaterSection* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMovieSceneEventRepeaterSection>();
	}
};
static_assert(alignof(UMovieSceneEventRepeaterSection) == 0x000008, "Wrong alignment on UMovieSceneEventRepeaterSection");
static_assert(sizeof(UMovieSceneEventRepeaterSection) == 0x000120, "Wrong size on UMovieSceneEventRepeaterSection");
static_assert(offsetof(UMovieSceneEventRepeaterSection, Event) == 0x0000F8, "Member 'UMovieSceneEventRepeaterSection::Event' has a wrong offset!");

class UMovieSceneEventSection final : public UMovieSceneSection
{
public:
	struct FNameCurve                             Events;
	struct FMovieSceneEventSectionData            EventData;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"MovieSceneEventSection">();
	}
	static class UMovieSceneEventSection* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMovieSceneEventSection>();
	}
};
static_assert(alignof(UMovieSceneEventSection) == 0x000008, "Wrong alignment on UMovieSceneEventSection");
static_assert(sizeof(UMovieSceneEventSection) == 0x000260, "Wrong size on UMovieSceneEventSection");
static_assert(offsetof(UMovieSceneEventSection, Events) == 0x0000F0, "Member 'UMovieSceneEventSection::Events' has a wrong offset!");
static_assert(offsetof(UMovieSceneEventSection, EventData) == 0x000168, "Member 'UMovieSceneEventSection::EventData' has a wrong offset!");

class UMovieSceneEventTriggerSection final : public UMovieSceneEventSectionBase
{
public:
	uint8                                         Pad_F0[0x8];
	struct FMovieSceneEventChannel                EventChannel;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"MovieSceneEventTriggerSection">();
	}
	static class UMovieSceneEventTriggerSection* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMovieSceneEventTriggerSection>();
	}
};
static_assert(alignof(UMovieSceneEventTriggerSection) == 0x000008, "Wrong alignment on UMovieSceneEventTriggerSection");
static_assert(sizeof(UMovieSceneEventTriggerSection) == 0x0001F0, "Wrong size on UMovieSceneEventTriggerSection");
static_assert(offsetof(UMovieSceneEventTriggerSection, EventChannel) == 0x0000F8, "Member 'UMovieSceneEventTriggerSection::EventChannel' has a wrong offset!");

class UMovieSceneFadeSection final : public UMovieSceneSection
{
public:
	struct FMovieSceneFloatChannel                FloatCurve;
	struct FLinearColor                           FadeColor;
	uint8                                         bFadeAudio : 1;
	uint8                                         Pad_211[0x7];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"MovieSceneFadeSection">();
	}
	static class UMovieSceneFadeSection* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMovieSceneFadeSection>();
	}
};
static_assert(alignof(UMovieSceneFadeSection) == 0x000008, "Wrong alignment on UMovieSceneFadeSection");
static_assert(sizeof(UMovieSceneFadeSection) == 0x000218, "Wrong size on UMovieSceneFadeSection");
static_assert(offsetof(UMovieSceneFadeSection, FloatCurve) == 0x0000F0, "Member 'UMovieSceneFadeSection::FloatCurve' has a wrong offset!");
static_assert(offsetof(UMovieSceneFadeSection, FadeColor) == 0x000200, "Member 'UMovieSceneFadeSection::FadeColor' has a wrong offset!");

class UMovieSceneFloatSection final : public UMovieSceneSection
{
public:
	uint8                                         Pad_F0[0x10];
	struct FMovieSceneFloatChannel                FloatCurve;
	class UMovieSceneSectionChannelOverrideRegistry* OverrideRegistry;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"MovieSceneFloatSection">();
	}
	static class UMovieSceneFloatSection* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMovieSceneFloatSection>();
	}
};
static_assert(alignof(UMovieSceneFloatSection) == 0x000008, "Wrong alignment on UMovieSceneFloatSection");
static_assert(sizeof(UMovieSceneFloatSection) == 0x000218, "Wrong size on UMovieSceneFloatSection");
static_assert(offsetof(UMovieSceneFloatSection, FloatCurve) == 0x000100, "Member 'UMovieSceneFloatSection::FloatCurve' has a wrong offset!");
static_assert(offsetof(UMovieSceneFloatSection, OverrideRegistry) == 0x000210, "Member 'UMovieSceneFloatSection::OverrideRegistry' has a wrong offset!");

class UMovieSceneIntegerSection final : public UMovieSceneSection
{
public:
	uint8                                         Pad_F0[0x8];
	struct FMovieSceneIntegerChannel              IntegerCurve;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"MovieSceneIntegerSection">();
	}
	static class UMovieSceneIntegerSection* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMovieSceneIntegerSection>();
	}
};
static_assert(alignof(UMovieSceneIntegerSection) == 0x000008, "Wrong alignment on UMovieSceneIntegerSection");
static_assert(sizeof(UMovieSceneIntegerSection) == 0x0001F8, "Wrong size on UMovieSceneIntegerSection");
static_assert(offsetof(UMovieSceneIntegerSection, IntegerCurve) == 0x0000F8, "Member 'UMovieSceneIntegerSection::IntegerCurve' has a wrong offset!");

class UMovieSceneLevelVisibilitySection final : public UMovieSceneSection
{
public:
	uint8                                         Pad_F0[0x8];
	ELevelVisibility                              Visibility;
	uint8                                         Pad_F9[0x7];
	TArray<class FName>                           LevelNames;

public:
	void SetLevelNames(const TArray<class FName>& InLevelNames);
	void SetVisibility(ELevelVisibility InVisibility);

	const TArray<class FName> GetLevelNames() const;
	ELevelVisibility GetVisibility() const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"MovieSceneLevelVisibilitySection">();
	}
	static class UMovieSceneLevelVisibilitySection* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMovieSceneLevelVisibilitySection>();
	}
};
static_assert(alignof(UMovieSceneLevelVisibilitySection) == 0x000008, "Wrong alignment on UMovieSceneLevelVisibilitySection");
static_assert(sizeof(UMovieSceneLevelVisibilitySection) == 0x000110, "Wrong size on UMovieSceneLevelVisibilitySection");
static_assert(offsetof(UMovieSceneLevelVisibilitySection, Visibility) == 0x0000F8, "Member 'UMovieSceneLevelVisibilitySection::Visibility' has a wrong offset!");
static_assert(offsetof(UMovieSceneLevelVisibilitySection, LevelNames) == 0x000100, "Member 'UMovieSceneLevelVisibilitySection::LevelNames' has a wrong offset!");

class UMovieSceneObjectPropertySection final : public UMovieSceneSection
{
public:
	struct FMovieSceneObjectPathChannel           ObjectChannel;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"MovieSceneObjectPropertySection">();
	}
	static class UMovieSceneObjectPropertySection* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMovieSceneObjectPropertySection>();
	}
};
static_assert(alignof(UMovieSceneObjectPropertySection) == 0x000008, "Wrong alignment on UMovieSceneObjectPropertySection");
static_assert(sizeof(UMovieSceneObjectPropertySection) == 0x000220, "Wrong size on UMovieSceneObjectPropertySection");
static_assert(offsetof(UMovieSceneObjectPropertySection, ObjectChannel) == 0x0000F0, "Member 'UMovieSceneObjectPropertySection::ObjectChannel' has a wrong offset!");

class IMovieSceneParameterSectionExtender final : public IInterface
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"MovieSceneParameterSectionExtender">();
	}
	static class IMovieSceneParameterSectionExtender* GetDefaultObj()
	{
		return GetDefaultObjImpl<IMovieSceneParameterSectionExtender>();
	}
};
static_assert(alignof(IMovieSceneParameterSectionExtender) == 0x000008, "Wrong alignment on IMovieSceneParameterSectionExtender");
static_assert(sizeof(IMovieSceneParameterSectionExtender) == 0x000028, "Wrong size on IMovieSceneParameterSectionExtender");

class UMovieSceneParameterSection : public UMovieSceneSection
{
public:
	uint8                                         Pad_F0[0x8];
	TArray<struct FBoolParameterNameAndCurve>     BoolParameterNamesAndCurves;
	TArray<struct FScalarParameterNameAndCurve>   ScalarParameterNamesAndCurves;
	TArray<struct FVector2DParameterNameAndCurves> Vector2DParameterNamesAndCurves;
	TArray<struct FVectorParameterNameAndCurves>  VectorParameterNamesAndCurves;
	TArray<struct FColorParameterNameAndCurves>   ColorParameterNamesAndCurves;
	TArray<struct FTransformParameterNameAndCurves> TransformParameterNamesAndCurves;

public:
	void AddBoolParameterKey(class FName InParameterName, const struct FFrameNumber& InTime, bool InValue);
	void AddColorParameterKey(class FName InParameterName, const struct FFrameNumber& InTime, const struct FLinearColor& InValue);
	void AddScalarParameterKey(class FName InParameterName, const struct FFrameNumber& InTime, float InValue);
	void AddTransformParameterKey(class FName InParameterName, const struct FFrameNumber& InTime, const struct FTransform& InValue);
	void AddVector2DParameterKey(class FName InParameterName, const struct FFrameNumber& InTime, const struct FVector2D& InValue);
	void AddVectorParameterKey(class FName InParameterName, const struct FFrameNumber& InTime, const struct FVector& InValue);
	bool RemoveBoolParameter(class FName InParameterName);
	bool RemoveColorParameter(class FName InParameterName);
	bool RemoveScalarParameter(class FName InParameterName);
	bool RemoveTransformParameter(class FName InParameterName);
	bool RemoveVector2DParameter(class FName InParameterName);
	bool RemoveVectorParameter(class FName InParameterName);

	void GetParameterNames(TSet<class FName>* ParameterNames) const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"MovieSceneParameterSection">();
	}
	static class UMovieSceneParameterSection* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMovieSceneParameterSection>();
	}
};
static_assert(alignof(UMovieSceneParameterSection) == 0x000008, "Wrong alignment on UMovieSceneParameterSection");
static_assert(sizeof(UMovieSceneParameterSection) == 0x000158, "Wrong size on UMovieSceneParameterSection");
static_assert(offsetof(UMovieSceneParameterSection, BoolParameterNamesAndCurves) == 0x0000F8, "Member 'UMovieSceneParameterSection::BoolParameterNamesAndCurves' has a wrong offset!");
static_assert(offsetof(UMovieSceneParameterSection, ScalarParameterNamesAndCurves) == 0x000108, "Member 'UMovieSceneParameterSection::ScalarParameterNamesAndCurves' has a wrong offset!");
static_assert(offsetof(UMovieSceneParameterSection, Vector2DParameterNamesAndCurves) == 0x000118, "Member 'UMovieSceneParameterSection::Vector2DParameterNamesAndCurves' has a wrong offset!");
static_assert(offsetof(UMovieSceneParameterSection, VectorParameterNamesAndCurves) == 0x000128, "Member 'UMovieSceneParameterSection::VectorParameterNamesAndCurves' has a wrong offset!");
static_assert(offsetof(UMovieSceneParameterSection, ColorParameterNamesAndCurves) == 0x000138, "Member 'UMovieSceneParameterSection::ColorParameterNamesAndCurves' has a wrong offset!");
static_assert(offsetof(UMovieSceneParameterSection, TransformParameterNamesAndCurves) == 0x000148, "Member 'UMovieSceneParameterSection::TransformParameterNamesAndCurves' has a wrong offset!");

class UMovieSceneParticleSection final : public UMovieSceneSection
{
public:
	struct FMovieSceneParticleChannel             ParticleKeys;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"MovieSceneParticleSection">();
	}
	static class UMovieSceneParticleSection* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMovieSceneParticleSection>();
	}
};
static_assert(alignof(UMovieSceneParticleSection) == 0x000008, "Wrong alignment on UMovieSceneParticleSection");
static_assert(sizeof(UMovieSceneParticleSection) == 0x0001F8, "Wrong size on UMovieSceneParticleSection");
static_assert(offsetof(UMovieSceneParticleSection, ParticleKeys) == 0x0000F0, "Member 'UMovieSceneParticleSection::ParticleKeys' has a wrong offset!");

class UMovieScenePrimitiveMaterialSection final : public UMovieSceneSection
{
public:
	uint8                                         Pad_F0[0x8];
	struct FMovieSceneObjectPathChannel           MaterialChannel;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"MovieScenePrimitiveMaterialSection">();
	}
	static class UMovieScenePrimitiveMaterialSection* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMovieScenePrimitiveMaterialSection>();
	}
};
static_assert(alignof(UMovieScenePrimitiveMaterialSection) == 0x000008, "Wrong alignment on UMovieScenePrimitiveMaterialSection");
static_assert(sizeof(UMovieScenePrimitiveMaterialSection) == 0x000228, "Wrong size on UMovieScenePrimitiveMaterialSection");
static_assert(offsetof(UMovieScenePrimitiveMaterialSection, MaterialChannel) == 0x0000F8, "Member 'UMovieScenePrimitiveMaterialSection::MaterialChannel' has a wrong offset!");

class alignas(0x10) UMovieSceneSkeletalAnimationSection final : public UMovieSceneSection
{
public:
	struct FMovieSceneSkeletalAnimationParams     Params_0;
	class UAnimSequence*                          AnimSequence;
	class UAnimSequenceBase*                      Animation;
	float                                         StartOffset;
	float                                         EndOffset;
	float                                         PlayRate;
	uint8                                         bReverse : 1;
	uint8                                         Pad_255[0x3];
	class FName                                   SlotName;
	uint8                                         Pad_25C[0x4];
	struct FVector                                StartLocationOffset;
	struct FRotator                               StartRotationOffset;
	bool                                          bMatchWithPrevious;
	uint8                                         Pad_291[0x3];
	class FName                                   MatchedBoneName;
	struct FVector                                MatchedLocationOffset;
	struct FRotator                               MatchedRotationOffset;
	bool                                          bMatchTranslation;
	bool                                          bMatchIncludeZHeight;
	bool                                          bMatchRotationYaw;
	bool                                          bMatchRotationPitch;
	bool                                          bMatchRotationRoll;
	uint8                                         Pad_2CD[0x73];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"MovieSceneSkeletalAnimationSection">();
	}
	static class UMovieSceneSkeletalAnimationSection* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMovieSceneSkeletalAnimationSection>();
	}
};
static_assert(alignof(UMovieSceneSkeletalAnimationSection) == 0x000010, "Wrong alignment on UMovieSceneSkeletalAnimationSection");
static_assert(sizeof(UMovieSceneSkeletalAnimationSection) == 0x000340, "Wrong size on UMovieSceneSkeletalAnimationSection");
static_assert(offsetof(UMovieSceneSkeletalAnimationSection, Params_0) == 0x0000F0, "Member 'UMovieSceneSkeletalAnimationSection::Params_0' has a wrong offset!");
static_assert(offsetof(UMovieSceneSkeletalAnimationSection, AnimSequence) == 0x000238, "Member 'UMovieSceneSkeletalAnimationSection::AnimSequence' has a wrong offset!");
static_assert(offsetof(UMovieSceneSkeletalAnimationSection, Animation) == 0x000240, "Member 'UMovieSceneSkeletalAnimationSection::Animation' has a wrong offset!");
static_assert(offsetof(UMovieSceneSkeletalAnimationSection, StartOffset) == 0x000248, "Member 'UMovieSceneSkeletalAnimationSection::StartOffset' has a wrong offset!");
static_assert(offsetof(UMovieSceneSkeletalAnimationSection, EndOffset) == 0x00024C, "Member 'UMovieSceneSkeletalAnimationSection::EndOffset' has a wrong offset!");
static_assert(offsetof(UMovieSceneSkeletalAnimationSection, PlayRate) == 0x000250, "Member 'UMovieSceneSkeletalAnimationSection::PlayRate' has a wrong offset!");
static_assert(offsetof(UMovieSceneSkeletalAnimationSection, SlotName) == 0x000258, "Member 'UMovieSceneSkeletalAnimationSection::SlotName' has a wrong offset!");
static_assert(offsetof(UMovieSceneSkeletalAnimationSection, StartLocationOffset) == 0x000260, "Member 'UMovieSceneSkeletalAnimationSection::StartLocationOffset' has a wrong offset!");
static_assert(offsetof(UMovieSceneSkeletalAnimationSection, StartRotationOffset) == 0x000278, "Member 'UMovieSceneSkeletalAnimationSection::StartRotationOffset' has a wrong offset!");
static_assert(offsetof(UMovieSceneSkeletalAnimationSection, bMatchWithPrevious) == 0x000290, "Member 'UMovieSceneSkeletalAnimationSection::bMatchWithPrevious' has a wrong offset!");
static_assert(offsetof(UMovieSceneSkeletalAnimationSection, MatchedBoneName) == 0x000294, "Member 'UMovieSceneSkeletalAnimationSection::MatchedBoneName' has a wrong offset!");
static_assert(offsetof(UMovieSceneSkeletalAnimationSection, MatchedLocationOffset) == 0x000298, "Member 'UMovieSceneSkeletalAnimationSection::MatchedLocationOffset' has a wrong offset!");
static_assert(offsetof(UMovieSceneSkeletalAnimationSection, MatchedRotationOffset) == 0x0002B0, "Member 'UMovieSceneSkeletalAnimationSection::MatchedRotationOffset' has a wrong offset!");
static_assert(offsetof(UMovieSceneSkeletalAnimationSection, bMatchTranslation) == 0x0002C8, "Member 'UMovieSceneSkeletalAnimationSection::bMatchTranslation' has a wrong offset!");
static_assert(offsetof(UMovieSceneSkeletalAnimationSection, bMatchIncludeZHeight) == 0x0002C9, "Member 'UMovieSceneSkeletalAnimationSection::bMatchIncludeZHeight' has a wrong offset!");
static_assert(offsetof(UMovieSceneSkeletalAnimationSection, bMatchRotationYaw) == 0x0002CA, "Member 'UMovieSceneSkeletalAnimationSection::bMatchRotationYaw' has a wrong offset!");
static_assert(offsetof(UMovieSceneSkeletalAnimationSection, bMatchRotationPitch) == 0x0002CB, "Member 'UMovieSceneSkeletalAnimationSection::bMatchRotationPitch' has a wrong offset!");
static_assert(offsetof(UMovieSceneSkeletalAnimationSection, bMatchRotationRoll) == 0x0002CC, "Member 'UMovieSceneSkeletalAnimationSection::bMatchRotationRoll' has a wrong offset!");

class UMovieSceneSlomoSection final : public UMovieSceneSection
{
public:
	struct FMovieSceneFloatChannel                FloatCurve;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"MovieSceneSlomoSection">();
	}
	static class UMovieSceneSlomoSection* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMovieSceneSlomoSection>();
	}
};
static_assert(alignof(UMovieSceneSlomoSection) == 0x000008, "Wrong alignment on UMovieSceneSlomoSection");
static_assert(sizeof(UMovieSceneSlomoSection) == 0x000200, "Wrong size on UMovieSceneSlomoSection");
static_assert(offsetof(UMovieSceneSlomoSection, FloatCurve) == 0x0000F0, "Member 'UMovieSceneSlomoSection::FloatCurve' has a wrong offset!");

class UMovieSceneStringSection final : public UMovieSceneSection
{
public:
	struct FMovieSceneStringChannel               StringCurve;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"MovieSceneStringSection">();
	}
	static class UMovieSceneStringSection* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMovieSceneStringSection>();
	}
};
static_assert(alignof(UMovieSceneStringSection) == 0x000008, "Wrong alignment on UMovieSceneStringSection");
static_assert(sizeof(UMovieSceneStringSection) == 0x000200, "Wrong size on UMovieSceneStringSection");
static_assert(offsetof(UMovieSceneStringSection, StringCurve) == 0x0000F0, "Member 'UMovieSceneStringSection::StringCurve' has a wrong offset!");

class UMovieSceneFloatVectorSection final : public UMovieSceneSection
{
public:
	uint8                                         Pad_F0[0x8];
	struct FMovieSceneFloatChannel                Curves[0x4];
	int32                                         ChannelsUsed;
	uint8                                         Pad_53C[0x4];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"MovieSceneFloatVectorSection">();
	}
	static class UMovieSceneFloatVectorSection* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMovieSceneFloatVectorSection>();
	}
};
static_assert(alignof(UMovieSceneFloatVectorSection) == 0x000008, "Wrong alignment on UMovieSceneFloatVectorSection");
static_assert(sizeof(UMovieSceneFloatVectorSection) == 0x000540, "Wrong size on UMovieSceneFloatVectorSection");
static_assert(offsetof(UMovieSceneFloatVectorSection, Curves) == 0x0000F8, "Member 'UMovieSceneFloatVectorSection::Curves' has a wrong offset!");
static_assert(offsetof(UMovieSceneFloatVectorSection, ChannelsUsed) == 0x000538, "Member 'UMovieSceneFloatVectorSection::ChannelsUsed' has a wrong offset!");

class UMovieSceneDoubleVectorSection final : public UMovieSceneSection
{
public:
	uint8                                         Pad_F0[0x8];
	struct FMovieSceneDoubleChannel               Curves[0x4];
	int32                                         ChannelsUsed;
	uint8                                         Pad_55C[0x4];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"MovieSceneDoubleVectorSection">();
	}
	static class UMovieSceneDoubleVectorSection* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMovieSceneDoubleVectorSection>();
	}
};
static_assert(alignof(UMovieSceneDoubleVectorSection) == 0x000008, "Wrong alignment on UMovieSceneDoubleVectorSection");
static_assert(sizeof(UMovieSceneDoubleVectorSection) == 0x000560, "Wrong size on UMovieSceneDoubleVectorSection");
static_assert(offsetof(UMovieSceneDoubleVectorSection, Curves) == 0x0000F8, "Member 'UMovieSceneDoubleVectorSection::Curves' has a wrong offset!");
static_assert(offsetof(UMovieSceneDoubleVectorSection, ChannelsUsed) == 0x000558, "Member 'UMovieSceneDoubleVectorSection::ChannelsUsed' has a wrong offset!");

class UBoolChannelEvaluatorSystem final : public UMovieSceneEntitySystem
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"BoolChannelEvaluatorSystem">();
	}
	static class UBoolChannelEvaluatorSystem* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBoolChannelEvaluatorSystem>();
	}
};
static_assert(alignof(UBoolChannelEvaluatorSystem) == 0x000008, "Wrong alignment on UBoolChannelEvaluatorSystem");
static_assert(sizeof(UBoolChannelEvaluatorSystem) == 0x000040, "Wrong size on UBoolChannelEvaluatorSystem");

class UByteChannelEvaluatorSystem final : public UMovieSceneEntitySystem
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"ByteChannelEvaluatorSystem">();
	}
	static class UByteChannelEvaluatorSystem* GetDefaultObj()
	{
		return GetDefaultObjImpl<UByteChannelEvaluatorSystem>();
	}
};
static_assert(alignof(UByteChannelEvaluatorSystem) == 0x000008, "Wrong alignment on UByteChannelEvaluatorSystem");
static_assert(sizeof(UByteChannelEvaluatorSystem) == 0x000040, "Wrong size on UByteChannelEvaluatorSystem");

class UDoubleChannelEvaluatorSystem final : public UMovieSceneEntitySystem
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"DoubleChannelEvaluatorSystem">();
	}
	static class UDoubleChannelEvaluatorSystem* GetDefaultObj()
	{
		return GetDefaultObjImpl<UDoubleChannelEvaluatorSystem>();
	}
};
static_assert(alignof(UDoubleChannelEvaluatorSystem) == 0x000008, "Wrong alignment on UDoubleChannelEvaluatorSystem");
static_assert(sizeof(UDoubleChannelEvaluatorSystem) == 0x000040, "Wrong size on UDoubleChannelEvaluatorSystem");

class UDoublePerlinNoiseChannelEvaluatorSystem final : public UMovieSceneEntitySystem
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"DoublePerlinNoiseChannelEvaluatorSystem">();
	}
	static class UDoublePerlinNoiseChannelEvaluatorSystem* GetDefaultObj()
	{
		return GetDefaultObjImpl<UDoublePerlinNoiseChannelEvaluatorSystem>();
	}
};
static_assert(alignof(UDoublePerlinNoiseChannelEvaluatorSystem) == 0x000008, "Wrong alignment on UDoublePerlinNoiseChannelEvaluatorSystem");
static_assert(sizeof(UDoublePerlinNoiseChannelEvaluatorSystem) == 0x000040, "Wrong size on UDoublePerlinNoiseChannelEvaluatorSystem");

class UFloatChannelEvaluatorSystem final : public UMovieSceneEntitySystem
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FloatChannelEvaluatorSystem">();
	}
	static class UFloatChannelEvaluatorSystem* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFloatChannelEvaluatorSystem>();
	}
};
static_assert(alignof(UFloatChannelEvaluatorSystem) == 0x000008, "Wrong alignment on UFloatChannelEvaluatorSystem");
static_assert(sizeof(UFloatChannelEvaluatorSystem) == 0x000040, "Wrong size on UFloatChannelEvaluatorSystem");

class UFloatPerlinNoiseChannelEvaluatorSystem final : public UMovieSceneEntitySystem
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FloatPerlinNoiseChannelEvaluatorSystem">();
	}
	static class UFloatPerlinNoiseChannelEvaluatorSystem* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFloatPerlinNoiseChannelEvaluatorSystem>();
	}
};
static_assert(alignof(UFloatPerlinNoiseChannelEvaluatorSystem) == 0x000008, "Wrong alignment on UFloatPerlinNoiseChannelEvaluatorSystem");
static_assert(sizeof(UFloatPerlinNoiseChannelEvaluatorSystem) == 0x000040, "Wrong size on UFloatPerlinNoiseChannelEvaluatorSystem");

class UIntegerChannelEvaluatorSystem final : public UMovieSceneEntitySystem
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"IntegerChannelEvaluatorSystem">();
	}
	static class UIntegerChannelEvaluatorSystem* GetDefaultObj()
	{
		return GetDefaultObjImpl<UIntegerChannelEvaluatorSystem>();
	}
};
static_assert(alignof(UIntegerChannelEvaluatorSystem) == 0x000008, "Wrong alignment on UIntegerChannelEvaluatorSystem");
static_assert(sizeof(UIntegerChannelEvaluatorSystem) == 0x000040, "Wrong size on UIntegerChannelEvaluatorSystem");

class UMovieScenePropertySystem : public UMovieSceneEntitySystem
{
public:
	uint8                                         Pad_40[0x8];
	class UMovieScenePropertyInstantiatorSystem*  InstantiatorSystem;
	uint8                                         Pad_50[0x8];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"MovieScenePropertySystem">();
	}
	static class UMovieScenePropertySystem* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMovieScenePropertySystem>();
	}
};
static_assert(alignof(UMovieScenePropertySystem) == 0x000008, "Wrong alignment on UMovieScenePropertySystem");
static_assert(sizeof(UMovieScenePropertySystem) == 0x000058, "Wrong size on UMovieScenePropertySystem");
static_assert(offsetof(UMovieScenePropertySystem, InstantiatorSystem) == 0x000048, "Member 'UMovieScenePropertySystem::InstantiatorSystem' has a wrong offset!");

class UMovieScene3DTransformPropertySystem final : public UMovieScenePropertySystem
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"MovieScene3DTransformPropertySystem">();
	}
	static class UMovieScene3DTransformPropertySystem* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMovieScene3DTransformPropertySystem>();
	}
};
static_assert(alignof(UMovieScene3DTransformPropertySystem) == 0x000008, "Wrong alignment on UMovieScene3DTransformPropertySystem");
static_assert(sizeof(UMovieScene3DTransformPropertySystem) == 0x000058, "Wrong size on UMovieScene3DTransformPropertySystem");

class UMovieSceneBaseValueEvaluatorSystem final : public UMovieSceneEntitySystem
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"MovieSceneBaseValueEvaluatorSystem">();
	}
	static class UMovieSceneBaseValueEvaluatorSystem* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMovieSceneBaseValueEvaluatorSystem>();
	}
};
static_assert(alignof(UMovieSceneBaseValueEvaluatorSystem) == 0x000008, "Wrong alignment on UMovieSceneBaseValueEvaluatorSystem");
static_assert(sizeof(UMovieSceneBaseValueEvaluatorSystem) == 0x000040, "Wrong size on UMovieSceneBaseValueEvaluatorSystem");

class UMovieSceneBoolPropertySystem final : public UMovieScenePropertySystem
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"MovieSceneBoolPropertySystem">();
	}
	static class UMovieSceneBoolPropertySystem* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMovieSceneBoolPropertySystem>();
	}
};
static_assert(alignof(UMovieSceneBoolPropertySystem) == 0x000008, "Wrong alignment on UMovieSceneBoolPropertySystem");
static_assert(sizeof(UMovieSceneBoolPropertySystem) == 0x000058, "Wrong size on UMovieSceneBoolPropertySystem");

class UMovieSceneBytePropertySystem final : public UMovieScenePropertySystem
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"MovieSceneBytePropertySystem">();
	}
	static class UMovieSceneBytePropertySystem* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMovieSceneBytePropertySystem>();
	}
};
static_assert(alignof(UMovieSceneBytePropertySystem) == 0x000008, "Wrong alignment on UMovieSceneBytePropertySystem");
static_assert(sizeof(UMovieSceneBytePropertySystem) == 0x000058, "Wrong size on UMovieSceneBytePropertySystem");

class UMovieSceneColorPropertySystem final : public UMovieScenePropertySystem
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"MovieSceneColorPropertySystem">();
	}
	static class UMovieSceneColorPropertySystem* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMovieSceneColorPropertySystem>();
	}
};
static_assert(alignof(UMovieSceneColorPropertySystem) == 0x000008, "Wrong alignment on UMovieSceneColorPropertySystem");
static_assert(sizeof(UMovieSceneColorPropertySystem) == 0x000058, "Wrong size on UMovieSceneColorPropertySystem");

class UMovieSceneComponentAttachmentInvalidatorSystem final : public UMovieSceneEntityInstantiatorSystem
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"MovieSceneComponentAttachmentInvalidatorSystem">();
	}
	static class UMovieSceneComponentAttachmentInvalidatorSystem* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMovieSceneComponentAttachmentInvalidatorSystem>();
	}
};
static_assert(alignof(UMovieSceneComponentAttachmentInvalidatorSystem) == 0x000008, "Wrong alignment on UMovieSceneComponentAttachmentInvalidatorSystem");
static_assert(sizeof(UMovieSceneComponentAttachmentInvalidatorSystem) == 0x000040, "Wrong size on UMovieSceneComponentAttachmentInvalidatorSystem");

class UMovieSceneComponentAttachmentSystem final : public UMovieSceneEntityInstantiatorSystem
{
public:
	uint8                                         Pad_40[0x190];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"MovieSceneComponentAttachmentSystem">();
	}
	static class UMovieSceneComponentAttachmentSystem* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMovieSceneComponentAttachmentSystem>();
	}
};
static_assert(alignof(UMovieSceneComponentAttachmentSystem) == 0x000008, "Wrong alignment on UMovieSceneComponentAttachmentSystem");
static_assert(sizeof(UMovieSceneComponentAttachmentSystem) == 0x0001D0, "Wrong size on UMovieSceneComponentAttachmentSystem");

class UMovieSceneComponentMaterialSystem final : public UMovieSceneEntitySystem
{
public:
	uint8                                         Pad_40[0x160];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"MovieSceneComponentMaterialSystem">();
	}
	static class UMovieSceneComponentMaterialSystem* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMovieSceneComponentMaterialSystem>();
	}
};
static_assert(alignof(UMovieSceneComponentMaterialSystem) == 0x000008, "Wrong alignment on UMovieSceneComponentMaterialSystem");
static_assert(sizeof(UMovieSceneComponentMaterialSystem) == 0x0001A0, "Wrong size on UMovieSceneComponentMaterialSystem");

class UMovieSceneComponentMobilitySystem final : public UMovieSceneEntityInstantiatorSystem
{
public:
	uint8                                         Pad_40[0x1F0];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"MovieSceneComponentMobilitySystem">();
	}
	static class UMovieSceneComponentMobilitySystem* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMovieSceneComponentMobilitySystem>();
	}
};
static_assert(alignof(UMovieSceneComponentMobilitySystem) == 0x000008, "Wrong alignment on UMovieSceneComponentMobilitySystem");
static_assert(sizeof(UMovieSceneComponentMobilitySystem) == 0x000230, "Wrong size on UMovieSceneComponentMobilitySystem");

class UMovieSceneComponentTransformSystem final : public UMovieScenePropertySystem
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"MovieSceneComponentTransformSystem">();
	}
	static class UMovieSceneComponentTransformSystem* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMovieSceneComponentTransformSystem>();
	}
};
static_assert(alignof(UMovieSceneComponentTransformSystem) == 0x000008, "Wrong alignment on UMovieSceneComponentTransformSystem");
static_assert(sizeof(UMovieSceneComponentTransformSystem) == 0x000058, "Wrong size on UMovieSceneComponentTransformSystem");

class UMovieSceneConstraintSystem final : public UMovieSceneEntitySystem
{
public:
	uint8                                         Pad_40[0x10];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"MovieSceneConstraintSystem">();
	}
	static class UMovieSceneConstraintSystem* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMovieSceneConstraintSystem>();
	}
};
static_assert(alignof(UMovieSceneConstraintSystem) == 0x000008, "Wrong alignment on UMovieSceneConstraintSystem");
static_assert(sizeof(UMovieSceneConstraintSystem) == 0x000050, "Wrong size on UMovieSceneConstraintSystem");

class UMovieSceneDataLayerSystem final : public UMovieSceneEntitySystem
{
public:
	uint8                                         Pad_40[0x90];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"MovieSceneDataLayerSystem">();
	}
	static class UMovieSceneDataLayerSystem* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMovieSceneDataLayerSystem>();
	}
};
static_assert(alignof(UMovieSceneDataLayerSystem) == 0x000008, "Wrong alignment on UMovieSceneDataLayerSystem");
static_assert(sizeof(UMovieSceneDataLayerSystem) == 0x0000D0, "Wrong size on UMovieSceneDataLayerSystem");

class UMovieSceneDeferredComponentMovementSystem final : public UMovieSceneEntitySystem
{
public:
	uint8                                         Pad_40[0x18];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"MovieSceneDeferredComponentMovementSystem">();
	}
	static class UMovieSceneDeferredComponentMovementSystem* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMovieSceneDeferredComponentMovementSystem>();
	}
};
static_assert(alignof(UMovieSceneDeferredComponentMovementSystem) == 0x000008, "Wrong alignment on UMovieSceneDeferredComponentMovementSystem");
static_assert(sizeof(UMovieSceneDeferredComponentMovementSystem) == 0x000058, "Wrong size on UMovieSceneDeferredComponentMovementSystem");

class UMovieSceneDoublePropertySystem final : public UMovieScenePropertySystem
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"MovieSceneDoublePropertySystem">();
	}
	static class UMovieSceneDoublePropertySystem* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMovieSceneDoublePropertySystem>();
	}
};
static_assert(alignof(UMovieSceneDoublePropertySystem) == 0x000008, "Wrong alignment on UMovieSceneDoublePropertySystem");
static_assert(sizeof(UMovieSceneDoublePropertySystem) == 0x000058, "Wrong size on UMovieSceneDoublePropertySystem");

class UMovieSceneEnumPropertySystem final : public UMovieScenePropertySystem
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"MovieSceneEnumPropertySystem">();
	}
	static class UMovieSceneEnumPropertySystem* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMovieSceneEnumPropertySystem>();
	}
};
static_assert(alignof(UMovieSceneEnumPropertySystem) == 0x000008, "Wrong alignment on UMovieSceneEnumPropertySystem");
static_assert(sizeof(UMovieSceneEnumPropertySystem) == 0x000058, "Wrong size on UMovieSceneEnumPropertySystem");

class UMovieSceneEulerTransformPropertySystem final : public UMovieScenePropertySystem
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"MovieSceneEulerTransformPropertySystem">();
	}
	static class UMovieSceneEulerTransformPropertySystem* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMovieSceneEulerTransformPropertySystem>();
	}
};
static_assert(alignof(UMovieSceneEulerTransformPropertySystem) == 0x000008, "Wrong alignment on UMovieSceneEulerTransformPropertySystem");
static_assert(sizeof(UMovieSceneEulerTransformPropertySystem) == 0x000058, "Wrong size on UMovieSceneEulerTransformPropertySystem");

class UMovieSceneEventSystem : public UMovieSceneEntitySystem
{
public:
	uint8                                         Pad_40[0x50];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"MovieSceneEventSystem">();
	}
	static class UMovieSceneEventSystem* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMovieSceneEventSystem>();
	}
};
static_assert(alignof(UMovieSceneEventSystem) == 0x000008, "Wrong alignment on UMovieSceneEventSystem");
static_assert(sizeof(UMovieSceneEventSystem) == 0x000090, "Wrong size on UMovieSceneEventSystem");

class UMovieScenePreSpawnEventSystem final : public UMovieSceneEventSystem
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"MovieScenePreSpawnEventSystem">();
	}
	static class UMovieScenePreSpawnEventSystem* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMovieScenePreSpawnEventSystem>();
	}
};
static_assert(alignof(UMovieScenePreSpawnEventSystem) == 0x000008, "Wrong alignment on UMovieScenePreSpawnEventSystem");
static_assert(sizeof(UMovieScenePreSpawnEventSystem) == 0x000090, "Wrong size on UMovieScenePreSpawnEventSystem");

class UMovieScenePostSpawnEventSystem final : public UMovieSceneEventSystem
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"MovieScenePostSpawnEventSystem">();
	}
	static class UMovieScenePostSpawnEventSystem* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMovieScenePostSpawnEventSystem>();
	}
};
static_assert(alignof(UMovieScenePostSpawnEventSystem) == 0x000008, "Wrong alignment on UMovieScenePostSpawnEventSystem");
static_assert(sizeof(UMovieScenePostSpawnEventSystem) == 0x000090, "Wrong size on UMovieScenePostSpawnEventSystem");

class UMovieScenePostEvalEventSystem final : public UMovieSceneEventSystem
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"MovieScenePostEvalEventSystem">();
	}
	static class UMovieScenePostEvalEventSystem* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMovieScenePostEvalEventSystem>();
	}
};
static_assert(alignof(UMovieScenePostEvalEventSystem) == 0x000008, "Wrong alignment on UMovieScenePostEvalEventSystem");
static_assert(sizeof(UMovieScenePostEvalEventSystem) == 0x000090, "Wrong size on UMovieScenePostEvalEventSystem");

class UMovieSceneFloatPropertySystem final : public UMovieScenePropertySystem
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"MovieSceneFloatPropertySystem">();
	}
	static class UMovieSceneFloatPropertySystem* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMovieSceneFloatPropertySystem>();
	}
};
static_assert(alignof(UMovieSceneFloatPropertySystem) == 0x000008, "Wrong alignment on UMovieSceneFloatPropertySystem");
static_assert(sizeof(UMovieSceneFloatPropertySystem) == 0x000058, "Wrong size on UMovieSceneFloatPropertySystem");

class UMovieSceneHierarchicalBiasSystem final : public UMovieSceneEntityInstantiatorSystem
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"MovieSceneHierarchicalBiasSystem">();
	}
	static class UMovieSceneHierarchicalBiasSystem* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMovieSceneHierarchicalBiasSystem>();
	}
};
static_assert(alignof(UMovieSceneHierarchicalBiasSystem) == 0x000008, "Wrong alignment on UMovieSceneHierarchicalBiasSystem");
static_assert(sizeof(UMovieSceneHierarchicalBiasSystem) == 0x000040, "Wrong size on UMovieSceneHierarchicalBiasSystem");

class UMovieSceneInitialValueSystem final : public UMovieSceneEntityInstantiatorSystem
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"MovieSceneInitialValueSystem">();
	}
	static class UMovieSceneInitialValueSystem* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMovieSceneInitialValueSystem>();
	}
};
static_assert(alignof(UMovieSceneInitialValueSystem) == 0x000008, "Wrong alignment on UMovieSceneInitialValueSystem");
static_assert(sizeof(UMovieSceneInitialValueSystem) == 0x000040, "Wrong size on UMovieSceneInitialValueSystem");

class UMovieSceneIntegerPropertySystem final : public UMovieScenePropertySystem
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"MovieSceneIntegerPropertySystem">();
	}
	static class UMovieSceneIntegerPropertySystem* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMovieSceneIntegerPropertySystem>();
	}
};
static_assert(alignof(UMovieSceneIntegerPropertySystem) == 0x000008, "Wrong alignment on UMovieSceneIntegerPropertySystem");
static_assert(sizeof(UMovieSceneIntegerPropertySystem) == 0x000058, "Wrong size on UMovieSceneIntegerPropertySystem");

class UMovieSceneLevelVisibilitySystem final : public UMovieSceneEntitySystem
{
public:
	uint8                                         Pad_40[0x148];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"MovieSceneLevelVisibilitySystem">();
	}
	static class UMovieSceneLevelVisibilitySystem* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMovieSceneLevelVisibilitySystem>();
	}
};
static_assert(alignof(UMovieSceneLevelVisibilitySystem) == 0x000008, "Wrong alignment on UMovieSceneLevelVisibilitySystem");
static_assert(sizeof(UMovieSceneLevelVisibilitySystem) == 0x000188, "Wrong size on UMovieSceneLevelVisibilitySystem");

class UMovieSceneMaterialParameterCollectionSystem final : public UMovieSceneEntitySystem
{
public:
	uint8                                         Pad_40[0x20];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"MovieSceneMaterialParameterCollectionSystem">();
	}
	static class UMovieSceneMaterialParameterCollectionSystem* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMovieSceneMaterialParameterCollectionSystem>();
	}
};
static_assert(alignof(UMovieSceneMaterialParameterCollectionSystem) == 0x000008, "Wrong alignment on UMovieSceneMaterialParameterCollectionSystem");
static_assert(sizeof(UMovieSceneMaterialParameterCollectionSystem) == 0x000060, "Wrong size on UMovieSceneMaterialParameterCollectionSystem");

class UMovieSceneMaterialParameterSystem final : public UMovieSceneEntitySystem
{
public:
	uint8                                         Pad_40[0x300];
	class UMovieScenePiecewiseDoubleBlenderSystem* DoubleBlenderSystem;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"MovieSceneMaterialParameterSystem">();
	}
	static class UMovieSceneMaterialParameterSystem* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMovieSceneMaterialParameterSystem>();
	}
};
static_assert(alignof(UMovieSceneMaterialParameterSystem) == 0x000008, "Wrong alignment on UMovieSceneMaterialParameterSystem");
static_assert(sizeof(UMovieSceneMaterialParameterSystem) == 0x000348, "Wrong size on UMovieSceneMaterialParameterSystem");
static_assert(offsetof(UMovieSceneMaterialParameterSystem, DoubleBlenderSystem) == 0x000340, "Member 'UMovieSceneMaterialParameterSystem::DoubleBlenderSystem' has a wrong offset!");

class UMovieSceneMotionVectorSimulationSystem final : public UMovieSceneEntitySystem
{
public:
	uint8                                         Pad_40[0x58];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"MovieSceneMotionVectorSimulationSystem">();
	}
	static class UMovieSceneMotionVectorSimulationSystem* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMovieSceneMotionVectorSimulationSystem>();
	}
};
static_assert(alignof(UMovieSceneMotionVectorSimulationSystem) == 0x000008, "Wrong alignment on UMovieSceneMotionVectorSimulationSystem");
static_assert(sizeof(UMovieSceneMotionVectorSimulationSystem) == 0x000098, "Wrong size on UMovieSceneMotionVectorSimulationSystem");

class UMovieScenePiecewiseBoolBlenderSystem final : public UMovieSceneBlenderSystem
{
public:
	uint8                                         Pad_68[0x28];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"MovieScenePiecewiseBoolBlenderSystem">();
	}
	static class UMovieScenePiecewiseBoolBlenderSystem* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMovieScenePiecewiseBoolBlenderSystem>();
	}
};
static_assert(alignof(UMovieScenePiecewiseBoolBlenderSystem) == 0x000008, "Wrong alignment on UMovieScenePiecewiseBoolBlenderSystem");
static_assert(sizeof(UMovieScenePiecewiseBoolBlenderSystem) == 0x000090, "Wrong size on UMovieScenePiecewiseBoolBlenderSystem");

class UMovieScenePiecewiseByteBlenderSystem final : public UMovieSceneBlenderSystem
{
public:
	uint8                                         Pad_68[0x28];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"MovieScenePiecewiseByteBlenderSystem">();
	}
	static class UMovieScenePiecewiseByteBlenderSystem* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMovieScenePiecewiseByteBlenderSystem>();
	}
};
static_assert(alignof(UMovieScenePiecewiseByteBlenderSystem) == 0x000008, "Wrong alignment on UMovieScenePiecewiseByteBlenderSystem");
static_assert(sizeof(UMovieScenePiecewiseByteBlenderSystem) == 0x000090, "Wrong size on UMovieScenePiecewiseByteBlenderSystem");

class UMovieScenePiecewiseDoubleBlenderSystem final : public UMovieSceneBlenderSystem
{
public:
	uint8                                         Pad_68[0xC8];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"MovieScenePiecewiseDoubleBlenderSystem">();
	}
	static class UMovieScenePiecewiseDoubleBlenderSystem* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMovieScenePiecewiseDoubleBlenderSystem>();
	}
};
static_assert(alignof(UMovieScenePiecewiseDoubleBlenderSystem) == 0x000008, "Wrong alignment on UMovieScenePiecewiseDoubleBlenderSystem");
static_assert(sizeof(UMovieScenePiecewiseDoubleBlenderSystem) == 0x000130, "Wrong size on UMovieScenePiecewiseDoubleBlenderSystem");

class UMovieScenePiecewiseEnumBlenderSystem final : public UMovieSceneBlenderSystem
{
public:
	uint8                                         Pad_68[0x28];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"MovieScenePiecewiseEnumBlenderSystem">();
	}
	static class UMovieScenePiecewiseEnumBlenderSystem* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMovieScenePiecewiseEnumBlenderSystem>();
	}
};
static_assert(alignof(UMovieScenePiecewiseEnumBlenderSystem) == 0x000008, "Wrong alignment on UMovieScenePiecewiseEnumBlenderSystem");
static_assert(sizeof(UMovieScenePiecewiseEnumBlenderSystem) == 0x000090, "Wrong size on UMovieScenePiecewiseEnumBlenderSystem");

class UMovieScenePiecewiseIntegerBlenderSystem final : public UMovieSceneBlenderSystem
{
public:
	uint8                                         Pad_68[0x48];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"MovieScenePiecewiseIntegerBlenderSystem">();
	}
	static class UMovieScenePiecewiseIntegerBlenderSystem* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMovieScenePiecewiseIntegerBlenderSystem>();
	}
};
static_assert(alignof(UMovieScenePiecewiseIntegerBlenderSystem) == 0x000008, "Wrong alignment on UMovieScenePiecewiseIntegerBlenderSystem");
static_assert(sizeof(UMovieScenePiecewiseIntegerBlenderSystem) == 0x0000B0, "Wrong size on UMovieScenePiecewiseIntegerBlenderSystem");

class UMovieSceneAsyncAction_SequencePrediction final : public UBlueprintAsyncActionBase
{
public:
	TMulticastInlineDelegate<void(const struct FTransform& PredictedTransform)> Result;
	TMulticastInlineDelegate<void()>              Failure;
	uint8                                         Pad_50[0x10];
	class UMovieSceneSequencePlayer*              SequencePlayer;
	class USceneComponent*                        SceneComponent;
	uint8                                         Pad_70[0x10];

public:
	static class UMovieSceneAsyncAction_SequencePrediction* PredictLocalTransformAtFrame(class UMovieSceneSequencePlayer* Player, class USceneComponent* TargetComponent, const struct FFrameTime& FrameTime);
	static class UMovieSceneAsyncAction_SequencePrediction* PredictLocalTransformAtTime(class UMovieSceneSequencePlayer* Player, class USceneComponent* TargetComponent, float TimeInSeconds);
	static class UMovieSceneAsyncAction_SequencePrediction* PredictWorldTransformAtFrame(class UMovieSceneSequencePlayer* Player, class USceneComponent* TargetComponent, const struct FFrameTime& FrameTime);
	static class UMovieSceneAsyncAction_SequencePrediction* PredictWorldTransformAtTime(class UMovieSceneSequencePlayer* Player, class USceneComponent* TargetComponent, float TimeInSeconds);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"MovieSceneAsyncAction_SequencePrediction">();
	}
	static class UMovieSceneAsyncAction_SequencePrediction* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMovieSceneAsyncAction_SequencePrediction>();
	}
};
static_assert(alignof(UMovieSceneAsyncAction_SequencePrediction) == 0x000008, "Wrong alignment on UMovieSceneAsyncAction_SequencePrediction");
static_assert(sizeof(UMovieSceneAsyncAction_SequencePrediction) == 0x000080, "Wrong size on UMovieSceneAsyncAction_SequencePrediction");
static_assert(offsetof(UMovieSceneAsyncAction_SequencePrediction, Result) == 0x000030, "Member 'UMovieSceneAsyncAction_SequencePrediction::Result' has a wrong offset!");
static_assert(offsetof(UMovieSceneAsyncAction_SequencePrediction, Failure) == 0x000040, "Member 'UMovieSceneAsyncAction_SequencePrediction::Failure' has a wrong offset!");
static_assert(offsetof(UMovieSceneAsyncAction_SequencePrediction, SequencePlayer) == 0x000060, "Member 'UMovieSceneAsyncAction_SequencePrediction::SequencePlayer' has a wrong offset!");
static_assert(offsetof(UMovieSceneAsyncAction_SequencePrediction, SceneComponent) == 0x000068, "Member 'UMovieSceneAsyncAction_SequencePrediction::SceneComponent' has a wrong offset!");

class UMovieScenePredictionSystem final : public UMovieSceneEntitySystem
{
public:
	uint8                                         Pad_40[0x90];
	TArray<class UMovieSceneAsyncAction_SequencePrediction*> PendingPredictions;
	TArray<class UMovieSceneAsyncAction_SequencePrediction*> ProcessingPredictions;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"MovieScenePredictionSystem">();
	}
	static class UMovieScenePredictionSystem* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMovieScenePredictionSystem>();
	}
};
static_assert(alignof(UMovieScenePredictionSystem) == 0x000008, "Wrong alignment on UMovieScenePredictionSystem");
static_assert(sizeof(UMovieScenePredictionSystem) == 0x0000F0, "Wrong size on UMovieScenePredictionSystem");
static_assert(offsetof(UMovieScenePredictionSystem, PendingPredictions) == 0x0000D0, "Member 'UMovieScenePredictionSystem::PendingPredictions' has a wrong offset!");
static_assert(offsetof(UMovieScenePredictionSystem, ProcessingPredictions) == 0x0000E0, "Member 'UMovieScenePredictionSystem::ProcessingPredictions' has a wrong offset!");

class UMovieScenePropertyInstantiatorSystem final : public UMovieSceneEntityInstantiatorSystem
{
public:
	uint8                                         Pad_40[0x208];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"MovieScenePropertyInstantiatorSystem">();
	}
	static class UMovieScenePropertyInstantiatorSystem* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMovieScenePropertyInstantiatorSystem>();
	}
};
static_assert(alignof(UMovieScenePropertyInstantiatorSystem) == 0x000008, "Wrong alignment on UMovieScenePropertyInstantiatorSystem");
static_assert(sizeof(UMovieScenePropertyInstantiatorSystem) == 0x000248, "Wrong size on UMovieScenePropertyInstantiatorSystem");

class UMovieSceneQuaternionInterpolationRotationSystem final : public UMovieSceneEntitySystem
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"MovieSceneQuaternionInterpolationRotationSystem">();
	}
	static class UMovieSceneQuaternionInterpolationRotationSystem* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMovieSceneQuaternionInterpolationRotationSystem>();
	}
};
static_assert(alignof(UMovieSceneQuaternionInterpolationRotationSystem) == 0x000008, "Wrong alignment on UMovieSceneQuaternionInterpolationRotationSystem");
static_assert(sizeof(UMovieSceneQuaternionInterpolationRotationSystem) == 0x000040, "Wrong size on UMovieSceneQuaternionInterpolationRotationSystem");

class UMovieSceneTransformOriginInstantiatorSystem final : public UMovieSceneEntitySystem
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"MovieSceneTransformOriginInstantiatorSystem">();
	}
	static class UMovieSceneTransformOriginInstantiatorSystem* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMovieSceneTransformOriginInstantiatorSystem>();
	}
};
static_assert(alignof(UMovieSceneTransformOriginInstantiatorSystem) == 0x000008, "Wrong alignment on UMovieSceneTransformOriginInstantiatorSystem");
static_assert(sizeof(UMovieSceneTransformOriginInstantiatorSystem) == 0x000040, "Wrong size on UMovieSceneTransformOriginInstantiatorSystem");

class UMovieSceneTransformOriginSystem final : public UMovieSceneEntitySystem
{
public:
	uint8                                         Pad_40[0x38];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"MovieSceneTransformOriginSystem">();
	}
	static class UMovieSceneTransformOriginSystem* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMovieSceneTransformOriginSystem>();
	}
};
static_assert(alignof(UMovieSceneTransformOriginSystem) == 0x000008, "Wrong alignment on UMovieSceneTransformOriginSystem");
static_assert(sizeof(UMovieSceneTransformOriginSystem) == 0x000078, "Wrong size on UMovieSceneTransformOriginSystem");

class UMovieSceneFloatVectorPropertySystem final : public UMovieScenePropertySystem
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"MovieSceneFloatVectorPropertySystem">();
	}
	static class UMovieSceneFloatVectorPropertySystem* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMovieSceneFloatVectorPropertySystem>();
	}
};
static_assert(alignof(UMovieSceneFloatVectorPropertySystem) == 0x000008, "Wrong alignment on UMovieSceneFloatVectorPropertySystem");
static_assert(sizeof(UMovieSceneFloatVectorPropertySystem) == 0x000058, "Wrong size on UMovieSceneFloatVectorPropertySystem");

class UMovieSceneDoubleVectorPropertySystem final : public UMovieScenePropertySystem
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"MovieSceneDoubleVectorPropertySystem">();
	}
	static class UMovieSceneDoubleVectorPropertySystem* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMovieSceneDoubleVectorPropertySystem>();
	}
};
static_assert(alignof(UMovieSceneDoubleVectorPropertySystem) == 0x000008, "Wrong alignment on UMovieSceneDoubleVectorPropertySystem");
static_assert(sizeof(UMovieSceneDoubleVectorPropertySystem) == 0x000058, "Wrong size on UMovieSceneDoubleVectorPropertySystem");

class UObjectPathChannelEvaluatorSystem final : public UMovieSceneEntitySystem
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"ObjectPathChannelEvaluatorSystem">();
	}
	static class UObjectPathChannelEvaluatorSystem* GetDefaultObj()
	{
		return GetDefaultObjImpl<UObjectPathChannelEvaluatorSystem>();
	}
};
static_assert(alignof(UObjectPathChannelEvaluatorSystem) == 0x000008, "Wrong alignment on UObjectPathChannelEvaluatorSystem");
static_assert(sizeof(UObjectPathChannelEvaluatorSystem) == 0x000040, "Wrong size on UObjectPathChannelEvaluatorSystem");

class UMovieSceneHierarchicalEasingInstantiatorSystem final : public UMovieSceneEntityInstantiatorSystem
{
public:
	uint8                                         Pad_40[0x38];
	class UWeightAndEasingEvaluatorSystem*        EvaluatorSystem;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"MovieSceneHierarchicalEasingInstantiatorSystem">();
	}
	static class UMovieSceneHierarchicalEasingInstantiatorSystem* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMovieSceneHierarchicalEasingInstantiatorSystem>();
	}
};
static_assert(alignof(UMovieSceneHierarchicalEasingInstantiatorSystem) == 0x000008, "Wrong alignment on UMovieSceneHierarchicalEasingInstantiatorSystem");
static_assert(sizeof(UMovieSceneHierarchicalEasingInstantiatorSystem) == 0x000080, "Wrong size on UMovieSceneHierarchicalEasingInstantiatorSystem");
static_assert(offsetof(UMovieSceneHierarchicalEasingInstantiatorSystem, EvaluatorSystem) == 0x000078, "Member 'UMovieSceneHierarchicalEasingInstantiatorSystem::EvaluatorSystem' has a wrong offset!");

class UWeightAndEasingEvaluatorSystem final : public UMovieSceneEntitySystem
{
public:
	uint8                                         Pad_40[0x10];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"WeightAndEasingEvaluatorSystem">();
	}
	static class UWeightAndEasingEvaluatorSystem* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWeightAndEasingEvaluatorSystem>();
	}
};
static_assert(alignof(UWeightAndEasingEvaluatorSystem) == 0x000008, "Wrong alignment on UWeightAndEasingEvaluatorSystem");
static_assert(sizeof(UWeightAndEasingEvaluatorSystem) == 0x000050, "Wrong size on UWeightAndEasingEvaluatorSystem");

class UMovieSceneCameraCutTrackInstance final : public UMovieSceneTrackInstance
{
public:
	uint8                                         Pad_50[0x78];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"MovieSceneCameraCutTrackInstance">();
	}
	static class UMovieSceneCameraCutTrackInstance* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMovieSceneCameraCutTrackInstance>();
	}
};
static_assert(alignof(UMovieSceneCameraCutTrackInstance) == 0x000008, "Wrong alignment on UMovieSceneCameraCutTrackInstance");
static_assert(sizeof(UMovieSceneCameraCutTrackInstance) == 0x0000C8, "Wrong size on UMovieSceneCameraCutTrackInstance");

class UMovieSceneCVarTrackInstance final : public UMovieSceneTrackInstance
{
public:
	uint8                                         Pad_50[0x50];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"MovieSceneCVarTrackInstance">();
	}
	static class UMovieSceneCVarTrackInstance* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMovieSceneCVarTrackInstance>();
	}
};
static_assert(alignof(UMovieSceneCVarTrackInstance) == 0x000008, "Wrong alignment on UMovieSceneCVarTrackInstance");
static_assert(sizeof(UMovieSceneCVarTrackInstance) == 0x0000A0, "Wrong size on UMovieSceneCVarTrackInstance");

class UMovieScene3DConstraintTrack : public UMovieSceneTrack
{
public:
	TArray<class UMovieSceneSection*>             ConstraintSections;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"MovieScene3DConstraintTrack">();
	}
	static class UMovieScene3DConstraintTrack* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMovieScene3DConstraintTrack>();
	}
};
static_assert(alignof(UMovieScene3DConstraintTrack) == 0x000008, "Wrong alignment on UMovieScene3DConstraintTrack");
static_assert(sizeof(UMovieScene3DConstraintTrack) == 0x0000A8, "Wrong size on UMovieScene3DConstraintTrack");
static_assert(offsetof(UMovieScene3DConstraintTrack, ConstraintSections) == 0x000098, "Member 'UMovieScene3DConstraintTrack::ConstraintSections' has a wrong offset!");

class UMovieScene3DAttachTrack final : public UMovieScene3DConstraintTrack
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"MovieScene3DAttachTrack">();
	}
	static class UMovieScene3DAttachTrack* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMovieScene3DAttachTrack>();
	}
};
static_assert(alignof(UMovieScene3DAttachTrack) == 0x000008, "Wrong alignment on UMovieScene3DAttachTrack");
static_assert(sizeof(UMovieScene3DAttachTrack) == 0x0000A8, "Wrong size on UMovieScene3DAttachTrack");

class UMovieScene3DPathTrack final : public UMovieScene3DConstraintTrack
{
public:
	uint8                                         Pad_A8[0x8];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"MovieScene3DPathTrack">();
	}
	static class UMovieScene3DPathTrack* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMovieScene3DPathTrack>();
	}
};
static_assert(alignof(UMovieScene3DPathTrack) == 0x000008, "Wrong alignment on UMovieScene3DPathTrack");
static_assert(sizeof(UMovieScene3DPathTrack) == 0x0000B0, "Wrong size on UMovieScene3DPathTrack");

class UMovieScenePropertyTrack : public UMovieSceneNameableTrack
{
public:
	class UMovieSceneSection*                     SectionToKey;
	struct FMovieScenePropertyBinding             PropertyBinding;
	uint8                                         Pad_AC[0x4];
	TArray<class UMovieSceneSection*>             Sections;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"MovieScenePropertyTrack">();
	}
	static class UMovieScenePropertyTrack* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMovieScenePropertyTrack>();
	}
};
static_assert(alignof(UMovieScenePropertyTrack) == 0x000008, "Wrong alignment on UMovieScenePropertyTrack");
static_assert(sizeof(UMovieScenePropertyTrack) == 0x0000C0, "Wrong size on UMovieScenePropertyTrack");
static_assert(offsetof(UMovieScenePropertyTrack, SectionToKey) == 0x000098, "Member 'UMovieScenePropertyTrack::SectionToKey' has a wrong offset!");
static_assert(offsetof(UMovieScenePropertyTrack, PropertyBinding) == 0x0000A0, "Member 'UMovieScenePropertyTrack::PropertyBinding' has a wrong offset!");
static_assert(offsetof(UMovieScenePropertyTrack, Sections) == 0x0000B0, "Member 'UMovieScenePropertyTrack::Sections' has a wrong offset!");

class UMovieScene3DTransformTrack final : public UMovieScenePropertyTrack
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"MovieScene3DTransformTrack">();
	}
	static class UMovieScene3DTransformTrack* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMovieScene3DTransformTrack>();
	}
};
static_assert(alignof(UMovieScene3DTransformTrack) == 0x000008, "Wrong alignment on UMovieScene3DTransformTrack");
static_assert(sizeof(UMovieScene3DTransformTrack) == 0x0000C0, "Wrong size on UMovieScene3DTransformTrack");

class UMovieSceneActorReferenceTrack final : public UMovieScenePropertyTrack
{
public:
	uint8                                         Pad_C0[0x8];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"MovieSceneActorReferenceTrack">();
	}
	static class UMovieSceneActorReferenceTrack* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMovieSceneActorReferenceTrack>();
	}
};
static_assert(alignof(UMovieSceneActorReferenceTrack) == 0x000008, "Wrong alignment on UMovieSceneActorReferenceTrack");
static_assert(sizeof(UMovieSceneActorReferenceTrack) == 0x0000C8, "Wrong size on UMovieSceneActorReferenceTrack");

class UMovieSceneAudioTrack final : public UMovieSceneNameableTrack
{
public:
	uint8                                         Pad_98[0x8];
	TArray<class UMovieSceneSection*>             AudioSections;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"MovieSceneAudioTrack">();
	}
	static class UMovieSceneAudioTrack* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMovieSceneAudioTrack>();
	}
};
static_assert(alignof(UMovieSceneAudioTrack) == 0x000008, "Wrong alignment on UMovieSceneAudioTrack");
static_assert(sizeof(UMovieSceneAudioTrack) == 0x0000B0, "Wrong size on UMovieSceneAudioTrack");
static_assert(offsetof(UMovieSceneAudioTrack, AudioSections) == 0x0000A0, "Member 'UMovieSceneAudioTrack::AudioSections' has a wrong offset!");

class UMovieSceneBoolTrack : public UMovieScenePropertyTrack
{
public:
	uint8                                         Pad_C0[0x8];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"MovieSceneBoolTrack">();
	}
	static class UMovieSceneBoolTrack* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMovieSceneBoolTrack>();
	}
};
static_assert(alignof(UMovieSceneBoolTrack) == 0x000008, "Wrong alignment on UMovieSceneBoolTrack");
static_assert(sizeof(UMovieSceneBoolTrack) == 0x0000C8, "Wrong size on UMovieSceneBoolTrack");

class UMovieSceneByteTrack final : public UMovieScenePropertyTrack
{
public:
	class UEnum*                                  Enum;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"MovieSceneByteTrack">();
	}
	static class UMovieSceneByteTrack* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMovieSceneByteTrack>();
	}
};
static_assert(alignof(UMovieSceneByteTrack) == 0x000008, "Wrong alignment on UMovieSceneByteTrack");
static_assert(sizeof(UMovieSceneByteTrack) == 0x0000C8, "Wrong size on UMovieSceneByteTrack");
static_assert(offsetof(UMovieSceneByteTrack, Enum) == 0x0000C0, "Member 'UMovieSceneByteTrack::Enum' has a wrong offset!");

class UMovieSceneCameraCutTrack final : public UMovieSceneNameableTrack
{
public:
	bool                                          bCanBlend;
	uint8                                         Pad_99[0x7];
	TArray<class UMovieSceneSection*>             Sections;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"MovieSceneCameraCutTrack">();
	}
	static class UMovieSceneCameraCutTrack* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMovieSceneCameraCutTrack>();
	}
};
static_assert(alignof(UMovieSceneCameraCutTrack) == 0x000008, "Wrong alignment on UMovieSceneCameraCutTrack");
static_assert(sizeof(UMovieSceneCameraCutTrack) == 0x0000B0, "Wrong size on UMovieSceneCameraCutTrack");
static_assert(offsetof(UMovieSceneCameraCutTrack, bCanBlend) == 0x000098, "Member 'UMovieSceneCameraCutTrack::bCanBlend' has a wrong offset!");
static_assert(offsetof(UMovieSceneCameraCutTrack, Sections) == 0x0000A0, "Member 'UMovieSceneCameraCutTrack::Sections' has a wrong offset!");

class UMovieSceneCameraShakeSourceShakeTrack final : public UMovieSceneNameableTrack
{
public:
	uint8                                         Pad_98[0x8];
	TArray<class UMovieSceneSection*>             CameraShakeSections;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"MovieSceneCameraShakeSourceShakeTrack">();
	}
	static class UMovieSceneCameraShakeSourceShakeTrack* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMovieSceneCameraShakeSourceShakeTrack>();
	}
};
static_assert(alignof(UMovieSceneCameraShakeSourceShakeTrack) == 0x000008, "Wrong alignment on UMovieSceneCameraShakeSourceShakeTrack");
static_assert(sizeof(UMovieSceneCameraShakeSourceShakeTrack) == 0x0000B0, "Wrong size on UMovieSceneCameraShakeSourceShakeTrack");
static_assert(offsetof(UMovieSceneCameraShakeSourceShakeTrack, CameraShakeSections) == 0x0000A0, "Member 'UMovieSceneCameraShakeSourceShakeTrack::CameraShakeSections' has a wrong offset!");

class UMovieSceneCameraShakeSourceTriggerTrack final : public UMovieSceneTrack
{
public:
	uint8                                         Pad_98[0x8];
	TArray<class UMovieSceneSection*>             Sections;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"MovieSceneCameraShakeSourceTriggerTrack">();
	}
	static class UMovieSceneCameraShakeSourceTriggerTrack* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMovieSceneCameraShakeSourceTriggerTrack>();
	}
};
static_assert(alignof(UMovieSceneCameraShakeSourceTriggerTrack) == 0x000008, "Wrong alignment on UMovieSceneCameraShakeSourceTriggerTrack");
static_assert(sizeof(UMovieSceneCameraShakeSourceTriggerTrack) == 0x0000B0, "Wrong size on UMovieSceneCameraShakeSourceTriggerTrack");
static_assert(offsetof(UMovieSceneCameraShakeSourceTriggerTrack, Sections) == 0x0000A0, "Member 'UMovieSceneCameraShakeSourceTriggerTrack::Sections' has a wrong offset!");

class UMovieSceneCameraShakeTrack final : public UMovieSceneNameableTrack
{
public:
	uint8                                         Pad_98[0x8];
	TArray<class UMovieSceneSection*>             CameraShakeSections;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"MovieSceneCameraShakeTrack">();
	}
	static class UMovieSceneCameraShakeTrack* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMovieSceneCameraShakeTrack>();
	}
};
static_assert(alignof(UMovieSceneCameraShakeTrack) == 0x000008, "Wrong alignment on UMovieSceneCameraShakeTrack");
static_assert(sizeof(UMovieSceneCameraShakeTrack) == 0x0000B0, "Wrong size on UMovieSceneCameraShakeTrack");
static_assert(offsetof(UMovieSceneCameraShakeTrack, CameraShakeSections) == 0x0000A0, "Member 'UMovieSceneCameraShakeTrack::CameraShakeSections' has a wrong offset!");

class UMovieSceneCinematicShotTrack final : public UMovieSceneSubTrack
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"MovieSceneCinematicShotTrack">();
	}
	static class UMovieSceneCinematicShotTrack* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMovieSceneCinematicShotTrack>();
	}
};
static_assert(alignof(UMovieSceneCinematicShotTrack) == 0x000008, "Wrong alignment on UMovieSceneCinematicShotTrack");
static_assert(sizeof(UMovieSceneCinematicShotTrack) == 0x0000A8, "Wrong size on UMovieSceneCinematicShotTrack");

class UMovieSceneColorTrack final : public UMovieScenePropertyTrack
{
public:
	bool                                          bIsSlateColor;
	uint8                                         Pad_C1[0x7];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"MovieSceneColorTrack">();
	}
	static class UMovieSceneColorTrack* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMovieSceneColorTrack>();
	}
};
static_assert(alignof(UMovieSceneColorTrack) == 0x000008, "Wrong alignment on UMovieSceneColorTrack");
static_assert(sizeof(UMovieSceneColorTrack) == 0x0000C8, "Wrong size on UMovieSceneColorTrack");
static_assert(offsetof(UMovieSceneColorTrack, bIsSlateColor) == 0x0000C0, "Member 'UMovieSceneColorTrack::bIsSlateColor' has a wrong offset!");

class UMovieSceneCVarTrack final : public UMovieSceneNameableTrack
{
public:
	TArray<class UMovieSceneSection*>             Sections;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"MovieSceneCVarTrack">();
	}
	static class UMovieSceneCVarTrack* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMovieSceneCVarTrack>();
	}
};
static_assert(alignof(UMovieSceneCVarTrack) == 0x000008, "Wrong alignment on UMovieSceneCVarTrack");
static_assert(sizeof(UMovieSceneCVarTrack) == 0x0000A8, "Wrong size on UMovieSceneCVarTrack");
static_assert(offsetof(UMovieSceneCVarTrack, Sections) == 0x000098, "Member 'UMovieSceneCVarTrack::Sections' has a wrong offset!");

class UMovieSceneDataLayerTrack final : public UMovieSceneNameableTrack
{
public:
	TArray<class UMovieSceneSection*>             Sections;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"MovieSceneDataLayerTrack">();
	}
	static class UMovieSceneDataLayerTrack* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMovieSceneDataLayerTrack>();
	}
};
static_assert(alignof(UMovieSceneDataLayerTrack) == 0x000008, "Wrong alignment on UMovieSceneDataLayerTrack");
static_assert(sizeof(UMovieSceneDataLayerTrack) == 0x0000A8, "Wrong size on UMovieSceneDataLayerTrack");
static_assert(offsetof(UMovieSceneDataLayerTrack, Sections) == 0x000098, "Member 'UMovieSceneDataLayerTrack::Sections' has a wrong offset!");

class UMovieSceneDoubleTrack final : public UMovieScenePropertyTrack
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"MovieSceneDoubleTrack">();
	}
	static class UMovieSceneDoubleTrack* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMovieSceneDoubleTrack>();
	}
};
static_assert(alignof(UMovieSceneDoubleTrack) == 0x000008, "Wrong alignment on UMovieSceneDoubleTrack");
static_assert(sizeof(UMovieSceneDoubleTrack) == 0x0000C0, "Wrong size on UMovieSceneDoubleTrack");

class UMovieSceneEnumTrack final : public UMovieScenePropertyTrack
{
public:
	class UEnum*                                  Enum;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"MovieSceneEnumTrack">();
	}
	static class UMovieSceneEnumTrack* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMovieSceneEnumTrack>();
	}
};
static_assert(alignof(UMovieSceneEnumTrack) == 0x000008, "Wrong alignment on UMovieSceneEnumTrack");
static_assert(sizeof(UMovieSceneEnumTrack) == 0x0000C8, "Wrong size on UMovieSceneEnumTrack");
static_assert(offsetof(UMovieSceneEnumTrack, Enum) == 0x0000C0, "Member 'UMovieSceneEnumTrack::Enum' has a wrong offset!");

class UMovieSceneEulerTransformTrack final : public UMovieScenePropertyTrack
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"MovieSceneEulerTransformTrack">();
	}
	static class UMovieSceneEulerTransformTrack* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMovieSceneEulerTransformTrack>();
	}
};
static_assert(alignof(UMovieSceneEulerTransformTrack) == 0x000008, "Wrong alignment on UMovieSceneEulerTransformTrack");
static_assert(sizeof(UMovieSceneEulerTransformTrack) == 0x0000C0, "Wrong size on UMovieSceneEulerTransformTrack");

class UMovieSceneEventTrack final : public UMovieSceneNameableTrack
{
public:
	uint8                                         Pad_98[0x10];
	uint8                                         bFireEventsWhenForwards : 1;
	uint8                                         bFireEventsWhenBackwards : 1;
	uint8                                         Pad_A9[0x3];
	EFireEventsAtPosition                         EventPosition;
	uint8                                         Pad_AD[0x3];
	TArray<class UMovieSceneSection*>             Sections;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"MovieSceneEventTrack">();
	}
	static class UMovieSceneEventTrack* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMovieSceneEventTrack>();
	}
};
static_assert(alignof(UMovieSceneEventTrack) == 0x000008, "Wrong alignment on UMovieSceneEventTrack");
static_assert(sizeof(UMovieSceneEventTrack) == 0x0000C0, "Wrong size on UMovieSceneEventTrack");
static_assert(offsetof(UMovieSceneEventTrack, EventPosition) == 0x0000AC, "Member 'UMovieSceneEventTrack::EventPosition' has a wrong offset!");
static_assert(offsetof(UMovieSceneEventTrack, Sections) == 0x0000B0, "Member 'UMovieSceneEventTrack::Sections' has a wrong offset!");

class UMovieSceneFloatTrack : public UMovieScenePropertyTrack
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"MovieSceneFloatTrack">();
	}
	static class UMovieSceneFloatTrack* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMovieSceneFloatTrack>();
	}
};
static_assert(alignof(UMovieSceneFloatTrack) == 0x000008, "Wrong alignment on UMovieSceneFloatTrack");
static_assert(sizeof(UMovieSceneFloatTrack) == 0x0000C0, "Wrong size on UMovieSceneFloatTrack");

class UMovieSceneFadeTrack final : public UMovieSceneFloatTrack
{
public:
	uint8                                         Pad_C0[0x8];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"MovieSceneFadeTrack">();
	}
	static class UMovieSceneFadeTrack* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMovieSceneFadeTrack>();
	}
};
static_assert(alignof(UMovieSceneFadeTrack) == 0x000008, "Wrong alignment on UMovieSceneFadeTrack");
static_assert(sizeof(UMovieSceneFadeTrack) == 0x0000C8, "Wrong size on UMovieSceneFadeTrack");

class UMovieSceneIntegerTrack final : public UMovieScenePropertyTrack
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"MovieSceneIntegerTrack">();
	}
	static class UMovieSceneIntegerTrack* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMovieSceneIntegerTrack>();
	}
};
static_assert(alignof(UMovieSceneIntegerTrack) == 0x000008, "Wrong alignment on UMovieSceneIntegerTrack");
static_assert(sizeof(UMovieSceneIntegerTrack) == 0x0000C0, "Wrong size on UMovieSceneIntegerTrack");

class UMovieSceneLevelVisibilityTrack final : public UMovieSceneNameableTrack
{
public:
	TArray<class UMovieSceneSection*>             Sections;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"MovieSceneLevelVisibilityTrack">();
	}
	static class UMovieSceneLevelVisibilityTrack* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMovieSceneLevelVisibilityTrack>();
	}
};
static_assert(alignof(UMovieSceneLevelVisibilityTrack) == 0x000008, "Wrong alignment on UMovieSceneLevelVisibilityTrack");
static_assert(sizeof(UMovieSceneLevelVisibilityTrack) == 0x0000A8, "Wrong size on UMovieSceneLevelVisibilityTrack");
static_assert(offsetof(UMovieSceneLevelVisibilityTrack, Sections) == 0x000098, "Member 'UMovieSceneLevelVisibilityTrack::Sections' has a wrong offset!");

class UMovieSceneMaterialTrack : public UMovieSceneNameableTrack
{
public:
	TArray<class UMovieSceneSection*>             Sections;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"MovieSceneMaterialTrack">();
	}
	static class UMovieSceneMaterialTrack* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMovieSceneMaterialTrack>();
	}
};
static_assert(alignof(UMovieSceneMaterialTrack) == 0x000008, "Wrong alignment on UMovieSceneMaterialTrack");
static_assert(sizeof(UMovieSceneMaterialTrack) == 0x0000A8, "Wrong size on UMovieSceneMaterialTrack");
static_assert(offsetof(UMovieSceneMaterialTrack, Sections) == 0x000098, "Member 'UMovieSceneMaterialTrack::Sections' has a wrong offset!");

class UMovieSceneMaterialParameterCollectionTrack final : public UMovieSceneMaterialTrack
{
public:
	uint8                                         Pad_A8[0x10];
	class UMaterialParameterCollection*           MPC;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"MovieSceneMaterialParameterCollectionTrack">();
	}
	static class UMovieSceneMaterialParameterCollectionTrack* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMovieSceneMaterialParameterCollectionTrack>();
	}
};
static_assert(alignof(UMovieSceneMaterialParameterCollectionTrack) == 0x000008, "Wrong alignment on UMovieSceneMaterialParameterCollectionTrack");
static_assert(sizeof(UMovieSceneMaterialParameterCollectionTrack) == 0x0000C0, "Wrong size on UMovieSceneMaterialParameterCollectionTrack");
static_assert(offsetof(UMovieSceneMaterialParameterCollectionTrack, MPC) == 0x0000B8, "Member 'UMovieSceneMaterialParameterCollectionTrack::MPC' has a wrong offset!");

class UMovieSceneComponentMaterialTrack final : public UMovieSceneMaterialTrack
{
public:
	uint8                                         Pad_A8[0x10];
	int32                                         MaterialIndex;
	uint8                                         Pad_BC[0x4];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"MovieSceneComponentMaterialTrack">();
	}
	static class UMovieSceneComponentMaterialTrack* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMovieSceneComponentMaterialTrack>();
	}
};
static_assert(alignof(UMovieSceneComponentMaterialTrack) == 0x000008, "Wrong alignment on UMovieSceneComponentMaterialTrack");
static_assert(sizeof(UMovieSceneComponentMaterialTrack) == 0x0000C0, "Wrong size on UMovieSceneComponentMaterialTrack");
static_assert(offsetof(UMovieSceneComponentMaterialTrack, MaterialIndex) == 0x0000B8, "Member 'UMovieSceneComponentMaterialTrack::MaterialIndex' has a wrong offset!");

class UMovieSceneObjectPropertyTrack final : public UMovieScenePropertyTrack
{
public:
	uint8                                         Pad_C0[0x8];
	TSubclassOf<class UObject>                    PropertyClass;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"MovieSceneObjectPropertyTrack">();
	}
	static class UMovieSceneObjectPropertyTrack* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMovieSceneObjectPropertyTrack>();
	}
};
static_assert(alignof(UMovieSceneObjectPropertyTrack) == 0x000008, "Wrong alignment on UMovieSceneObjectPropertyTrack");
static_assert(sizeof(UMovieSceneObjectPropertyTrack) == 0x0000D0, "Wrong size on UMovieSceneObjectPropertyTrack");
static_assert(offsetof(UMovieSceneObjectPropertyTrack, PropertyClass) == 0x0000C8, "Member 'UMovieSceneObjectPropertyTrack::PropertyClass' has a wrong offset!");

class UMovieSceneParticleParameterTrack final : public UMovieSceneNameableTrack
{
public:
	uint8                                         Pad_98[0x8];
	TArray<class UMovieSceneSection*>             Sections;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"MovieSceneParticleParameterTrack">();
	}
	static class UMovieSceneParticleParameterTrack* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMovieSceneParticleParameterTrack>();
	}
};
static_assert(alignof(UMovieSceneParticleParameterTrack) == 0x000008, "Wrong alignment on UMovieSceneParticleParameterTrack");
static_assert(sizeof(UMovieSceneParticleParameterTrack) == 0x0000B0, "Wrong size on UMovieSceneParticleParameterTrack");
static_assert(offsetof(UMovieSceneParticleParameterTrack, Sections) == 0x0000A0, "Member 'UMovieSceneParticleParameterTrack::Sections' has a wrong offset!");

class UMovieSceneParticleTrack final : public UMovieSceneNameableTrack
{
public:
	uint8                                         Pad_98[0x8];
	TArray<class UMovieSceneSection*>             ParticleSections;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"MovieSceneParticleTrack">();
	}
	static class UMovieSceneParticleTrack* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMovieSceneParticleTrack>();
	}
};
static_assert(alignof(UMovieSceneParticleTrack) == 0x000008, "Wrong alignment on UMovieSceneParticleTrack");
static_assert(sizeof(UMovieSceneParticleTrack) == 0x0000B0, "Wrong size on UMovieSceneParticleTrack");
static_assert(offsetof(UMovieSceneParticleTrack, ParticleSections) == 0x0000A0, "Member 'UMovieSceneParticleTrack::ParticleSections' has a wrong offset!");

class UMovieScenePrimitiveMaterialTrack final : public UMovieScenePropertyTrack
{
public:
	int32                                         MaterialIndex;
	uint8                                         Pad_C4[0x4];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"MovieScenePrimitiveMaterialTrack">();
	}
	static class UMovieScenePrimitiveMaterialTrack* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMovieScenePrimitiveMaterialTrack>();
	}
};
static_assert(alignof(UMovieScenePrimitiveMaterialTrack) == 0x000008, "Wrong alignment on UMovieScenePrimitiveMaterialTrack");
static_assert(sizeof(UMovieScenePrimitiveMaterialTrack) == 0x0000C8, "Wrong size on UMovieScenePrimitiveMaterialTrack");
static_assert(offsetof(UMovieScenePrimitiveMaterialTrack, MaterialIndex) == 0x0000C0, "Member 'UMovieScenePrimitiveMaterialTrack::MaterialIndex' has a wrong offset!");

class UMovieSceneSkeletalAnimationTrack final : public UMovieSceneNameableTrack
{
public:
	uint8                                         Pad_98[0x8];
	TArray<class UMovieSceneSection*>             AnimationSections;
	bool                                          bUseLegacySectionIndexBlend;
	uint8                                         Pad_B1[0xF];
	struct FMovieSceneSkeletalAnimRootMotionTrackParams RootMotionParams;
	bool                                          bBlendFirstChildOfRoot;
	uint8                                         Pad_151[0xF];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"MovieSceneSkeletalAnimationTrack">();
	}
	static class UMovieSceneSkeletalAnimationTrack* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMovieSceneSkeletalAnimationTrack>();
	}
};
static_assert(alignof(UMovieSceneSkeletalAnimationTrack) == 0x000010, "Wrong alignment on UMovieSceneSkeletalAnimationTrack");
static_assert(sizeof(UMovieSceneSkeletalAnimationTrack) == 0x000160, "Wrong size on UMovieSceneSkeletalAnimationTrack");
static_assert(offsetof(UMovieSceneSkeletalAnimationTrack, AnimationSections) == 0x0000A0, "Member 'UMovieSceneSkeletalAnimationTrack::AnimationSections' has a wrong offset!");
static_assert(offsetof(UMovieSceneSkeletalAnimationTrack, bUseLegacySectionIndexBlend) == 0x0000B0, "Member 'UMovieSceneSkeletalAnimationTrack::bUseLegacySectionIndexBlend' has a wrong offset!");
static_assert(offsetof(UMovieSceneSkeletalAnimationTrack, RootMotionParams) == 0x0000C0, "Member 'UMovieSceneSkeletalAnimationTrack::RootMotionParams' has a wrong offset!");
static_assert(offsetof(UMovieSceneSkeletalAnimationTrack, bBlendFirstChildOfRoot) == 0x000150, "Member 'UMovieSceneSkeletalAnimationTrack::bBlendFirstChildOfRoot' has a wrong offset!");

class UMovieSceneSlomoTrack final : public UMovieSceneFloatTrack
{
public:
	uint8                                         Pad_C0[0x8];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"MovieSceneSlomoTrack">();
	}
	static class UMovieSceneSlomoTrack* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMovieSceneSlomoTrack>();
	}
};
static_assert(alignof(UMovieSceneSlomoTrack) == 0x000008, "Wrong alignment on UMovieSceneSlomoTrack");
static_assert(sizeof(UMovieSceneSlomoTrack) == 0x0000C8, "Wrong size on UMovieSceneSlomoTrack");

class UMovieSceneStringTrack final : public UMovieScenePropertyTrack
{
public:
	uint8                                         Pad_C0[0x8];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"MovieSceneStringTrack">();
	}
	static class UMovieSceneStringTrack* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMovieSceneStringTrack>();
	}
};
static_assert(alignof(UMovieSceneStringTrack) == 0x000008, "Wrong alignment on UMovieSceneStringTrack");
static_assert(sizeof(UMovieSceneStringTrack) == 0x0000C8, "Wrong size on UMovieSceneStringTrack");

class UMovieSceneTransformTrack final : public UMovieScenePropertyTrack
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"MovieSceneTransformTrack">();
	}
	static class UMovieSceneTransformTrack* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMovieSceneTransformTrack>();
	}
};
static_assert(alignof(UMovieSceneTransformTrack) == 0x000008, "Wrong alignment on UMovieSceneTransformTrack");
static_assert(sizeof(UMovieSceneTransformTrack) == 0x0000C0, "Wrong size on UMovieSceneTransformTrack");

class UMovieSceneFloatVectorTrack final : public UMovieScenePropertyTrack
{
public:
	int32                                         NumChannelsUsed;
	uint8                                         Pad_C4[0x4];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"MovieSceneFloatVectorTrack">();
	}
	static class UMovieSceneFloatVectorTrack* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMovieSceneFloatVectorTrack>();
	}
};
static_assert(alignof(UMovieSceneFloatVectorTrack) == 0x000008, "Wrong alignment on UMovieSceneFloatVectorTrack");
static_assert(sizeof(UMovieSceneFloatVectorTrack) == 0x0000C8, "Wrong size on UMovieSceneFloatVectorTrack");
static_assert(offsetof(UMovieSceneFloatVectorTrack, NumChannelsUsed) == 0x0000C0, "Member 'UMovieSceneFloatVectorTrack::NumChannelsUsed' has a wrong offset!");

class UMovieSceneDoubleVectorTrack final : public UMovieScenePropertyTrack
{
public:
	int32                                         NumChannelsUsed;
	uint8                                         Pad_C4[0x4];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"MovieSceneDoubleVectorTrack">();
	}
	static class UMovieSceneDoubleVectorTrack* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMovieSceneDoubleVectorTrack>();
	}
};
static_assert(alignof(UMovieSceneDoubleVectorTrack) == 0x000008, "Wrong alignment on UMovieSceneDoubleVectorTrack");
static_assert(sizeof(UMovieSceneDoubleVectorTrack) == 0x0000C8, "Wrong size on UMovieSceneDoubleVectorTrack");
static_assert(offsetof(UMovieSceneDoubleVectorTrack, NumChannelsUsed) == 0x0000C0, "Member 'UMovieSceneDoubleVectorTrack::NumChannelsUsed' has a wrong offset!");

class UMovieSceneVisibilityTrack final : public UMovieSceneBoolTrack
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"MovieSceneVisibilityTrack">();
	}
	static class UMovieSceneVisibilityTrack* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMovieSceneVisibilityTrack>();
	}
};
static_assert(alignof(UMovieSceneVisibilityTrack) == 0x000008, "Wrong alignment on UMovieSceneVisibilityTrack");
static_assert(sizeof(UMovieSceneVisibilityTrack) == 0x0000C8, "Wrong size on UMovieSceneVisibilityTrack");

}
