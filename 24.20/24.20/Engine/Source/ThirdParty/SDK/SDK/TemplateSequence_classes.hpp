#pragma once

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "CoreUObject_classes.hpp"
#include "MovieScene_structs.hpp"
#include "MovieScene_classes.hpp"
#include "CinematicCamera_structs.hpp"
#include "Engine_structs.hpp"
#include "Engine_classes.hpp"
#include "TemplateSequence_structs.hpp"

namespace SDK
{

class UTemplateSequence : public UMovieSceneSequence
{
public:
	class UMovieScene*                            MovieScene;
	TSoftClassPtr<class UClass>                   BoundActorClass;
	TSoftObjectPtr<class AActor>                  BoundPreviewActor;
	TMap<struct FGuid, class FName>               BoundActorComponents;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"TemplateSequence">();
	}
	static class UTemplateSequence* GetDefaultObj()
	{
		return GetDefaultObjImpl<UTemplateSequence>();
	}
};
static_assert(alignof(UTemplateSequence) == 0x000008, "Wrong alignment on UTemplateSequence");
static_assert(sizeof(UTemplateSequence) == 0x000110, "Wrong size on UTemplateSequence");
static_assert(offsetof(UTemplateSequence, MovieScene) == 0x000068, "Member 'UTemplateSequence::MovieScene' has a wrong offset!");
static_assert(offsetof(UTemplateSequence, BoundActorClass) == 0x000070, "Member 'UTemplateSequence::BoundActorClass' has a wrong offset!");
static_assert(offsetof(UTemplateSequence, BoundPreviewActor) == 0x000098, "Member 'UTemplateSequence::BoundPreviewActor' has a wrong offset!");
static_assert(offsetof(UTemplateSequence, BoundActorComponents) == 0x0000C0, "Member 'UTemplateSequence::BoundActorComponents' has a wrong offset!");

class UCameraAnimationSequence final : public UTemplateSequence
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"CameraAnimationSequence">();
	}
	static class UCameraAnimationSequence* GetDefaultObj()
	{
		return GetDefaultObjImpl<UCameraAnimationSequence>();
	}
};
static_assert(alignof(UCameraAnimationSequence) == 0x000008, "Wrong alignment on UCameraAnimationSequence");
static_assert(sizeof(UCameraAnimationSequence) == 0x000110, "Wrong size on UCameraAnimationSequence");

class UCameraAnimationSequenceCameraStandIn final : public UObject
{
public:
	float                                         FieldOfView;
	uint8                                         bConstrainAspectRatio : 1;
	uint8                                         Pad_2D[0x3];
	float                                         AspectRatio;
	uint8                                         Pad_34[0xC];
	struct FPostProcessSettings                   PostProcessSettings;
	float                                         PostProcessBlendWeight;
	struct FCameraFilmbackSettings                Filmback;
	struct FCameraLensSettings                    LensSettings;
	uint8                                         Pad_74C[0x4];
	struct FCameraFocusSettings                   FocusSettings;
	float                                         CurrentFocalLength;
	float                                         CurrentAperture;
	float                                         CurrentFocusDistance;
	uint8                                         Pad_7BC[0x74];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"CameraAnimationSequenceCameraStandIn">();
	}
	static class UCameraAnimationSequenceCameraStandIn* GetDefaultObj()
	{
		return GetDefaultObjImpl<UCameraAnimationSequenceCameraStandIn>();
	}
};
static_assert(alignof(UCameraAnimationSequenceCameraStandIn) == 0x000010, "Wrong alignment on UCameraAnimationSequenceCameraStandIn");
static_assert(sizeof(UCameraAnimationSequenceCameraStandIn) == 0x000830, "Wrong size on UCameraAnimationSequenceCameraStandIn");
static_assert(offsetof(UCameraAnimationSequenceCameraStandIn, FieldOfView) == 0x000028, "Member 'UCameraAnimationSequenceCameraStandIn::FieldOfView' has a wrong offset!");
static_assert(offsetof(UCameraAnimationSequenceCameraStandIn, AspectRatio) == 0x000030, "Member 'UCameraAnimationSequenceCameraStandIn::AspectRatio' has a wrong offset!");
static_assert(offsetof(UCameraAnimationSequenceCameraStandIn, PostProcessSettings) == 0x000040, "Member 'UCameraAnimationSequenceCameraStandIn::PostProcessSettings' has a wrong offset!");
static_assert(offsetof(UCameraAnimationSequenceCameraStandIn, PostProcessBlendWeight) == 0x000720, "Member 'UCameraAnimationSequenceCameraStandIn::PostProcessBlendWeight' has a wrong offset!");
static_assert(offsetof(UCameraAnimationSequenceCameraStandIn, Filmback) == 0x000724, "Member 'UCameraAnimationSequenceCameraStandIn::Filmback' has a wrong offset!");
static_assert(offsetof(UCameraAnimationSequenceCameraStandIn, LensSettings) == 0x000730, "Member 'UCameraAnimationSequenceCameraStandIn::LensSettings' has a wrong offset!");
static_assert(offsetof(UCameraAnimationSequenceCameraStandIn, FocusSettings) == 0x000750, "Member 'UCameraAnimationSequenceCameraStandIn::FocusSettings' has a wrong offset!");
static_assert(offsetof(UCameraAnimationSequenceCameraStandIn, CurrentFocalLength) == 0x0007B0, "Member 'UCameraAnimationSequenceCameraStandIn::CurrentFocalLength' has a wrong offset!");
static_assert(offsetof(UCameraAnimationSequenceCameraStandIn, CurrentAperture) == 0x0007B4, "Member 'UCameraAnimationSequenceCameraStandIn::CurrentAperture' has a wrong offset!");
static_assert(offsetof(UCameraAnimationSequenceCameraStandIn, CurrentFocusDistance) == 0x0007B8, "Member 'UCameraAnimationSequenceCameraStandIn::CurrentFocusDistance' has a wrong offset!");

class UCameraAnimationSequencePlayer final : public UObject
{
public:
	uint8                                         Pad_28[0x260];
	class UObject*                                BoundObjectOverride;
	class UMovieSceneSequence*                    Sequence;
	struct FMovieSceneRootEvaluationTemplateInstance RootTemplateInstance;
	uint8                                         Pad_320[0x60];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"CameraAnimationSequencePlayer">();
	}
	static class UCameraAnimationSequencePlayer* GetDefaultObj()
	{
		return GetDefaultObjImpl<UCameraAnimationSequencePlayer>();
	}
};
static_assert(alignof(UCameraAnimationSequencePlayer) == 0x000008, "Wrong alignment on UCameraAnimationSequencePlayer");
static_assert(sizeof(UCameraAnimationSequencePlayer) == 0x000380, "Wrong size on UCameraAnimationSequencePlayer");
static_assert(offsetof(UCameraAnimationSequencePlayer, BoundObjectOverride) == 0x000288, "Member 'UCameraAnimationSequencePlayer::BoundObjectOverride' has a wrong offset!");
static_assert(offsetof(UCameraAnimationSequencePlayer, Sequence) == 0x000290, "Member 'UCameraAnimationSequencePlayer::Sequence' has a wrong offset!");
static_assert(offsetof(UCameraAnimationSequencePlayer, RootTemplateInstance) == 0x000298, "Member 'UCameraAnimationSequencePlayer::RootTemplateInstance' has a wrong offset!");

class UCameraAnimationSpawnableSystem final : public UMovieSceneEntitySystem
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"CameraAnimationSpawnableSystem">();
	}
	static class UCameraAnimationSpawnableSystem* GetDefaultObj()
	{
		return GetDefaultObjImpl<UCameraAnimationSpawnableSystem>();
	}
};
static_assert(alignof(UCameraAnimationSpawnableSystem) == 0x000008, "Wrong alignment on UCameraAnimationSpawnableSystem");
static_assert(sizeof(UCameraAnimationSpawnableSystem) == 0x000040, "Wrong size on UCameraAnimationSpawnableSystem");

class UCameraAnimationBoundObjectInstantiator final : public UMovieSceneEntityInstantiatorSystem
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"CameraAnimationBoundObjectInstantiator">();
	}
	static class UCameraAnimationBoundObjectInstantiator* GetDefaultObj()
	{
		return GetDefaultObjImpl<UCameraAnimationBoundObjectInstantiator>();
	}
};
static_assert(alignof(UCameraAnimationBoundObjectInstantiator) == 0x000008, "Wrong alignment on UCameraAnimationBoundObjectInstantiator");
static_assert(sizeof(UCameraAnimationBoundObjectInstantiator) == 0x000040, "Wrong size on UCameraAnimationBoundObjectInstantiator");

class UCameraAnimationEntitySystemLinker final : public UMovieSceneEntitySystemLinker
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"CameraAnimationEntitySystemLinker">();
	}
	static class UCameraAnimationEntitySystemLinker* GetDefaultObj()
	{
		return GetDefaultObjImpl<UCameraAnimationEntitySystemLinker>();
	}
};
static_assert(alignof(UCameraAnimationEntitySystemLinker) == 0x000008, "Wrong alignment on UCameraAnimationEntitySystemLinker");
static_assert(sizeof(UCameraAnimationEntitySystemLinker) == 0x0006F8, "Wrong size on UCameraAnimationEntitySystemLinker");

class UCameraAnimationSequenceSubsystem final : public UWorldSubsystem
{
public:
	class UMovieSceneEntitySystemLinker*          Linker;
	uint8                                         Pad_38[0x10];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"CameraAnimationSequenceSubsystem">();
	}
	static class UCameraAnimationSequenceSubsystem* GetDefaultObj()
	{
		return GetDefaultObjImpl<UCameraAnimationSequenceSubsystem>();
	}
};
static_assert(alignof(UCameraAnimationSequenceSubsystem) == 0x000008, "Wrong alignment on UCameraAnimationSequenceSubsystem");
static_assert(sizeof(UCameraAnimationSequenceSubsystem) == 0x000048, "Wrong size on UCameraAnimationSequenceSubsystem");
static_assert(offsetof(UCameraAnimationSequenceSubsystem, Linker) == 0x000030, "Member 'UCameraAnimationSequenceSubsystem::Linker' has a wrong offset!");

class UTemplateSequenceSection final : public UMovieSceneSubSection
{
public:
	TArray<struct FTemplateSectionPropertyScale>  PropertyScales;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"TemplateSequenceSection">();
	}
	static class UTemplateSequenceSection* GetDefaultObj()
	{
		return GetDefaultObjImpl<UTemplateSequenceSection>();
	}
};
static_assert(alignof(UTemplateSequenceSection) == 0x000008, "Wrong alignment on UTemplateSequenceSection");
static_assert(sizeof(UTemplateSequenceSection) == 0x000148, "Wrong size on UTemplateSequenceSection");
static_assert(offsetof(UTemplateSequenceSection, PropertyScales) == 0x000138, "Member 'UTemplateSequenceSection::PropertyScales' has a wrong offset!");

class USequenceCameraShakePattern final : public UCameraShakePattern
{
public:
	class UCameraAnimationSequence*               Sequence;
	float                                         PlayRate;
	float                                         Scale;
	float                                         BlendInTime;
	float                                         BlendOutTime;
	float                                         RandomSegmentDuration;
	bool                                          bRandomSegment;
	uint8                                         Pad_45[0x3];
	class UCameraAnimationSequencePlayer*         Player;
	class UCameraAnimationSequenceCameraStandIn*  CameraStandIn;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"SequenceCameraShakePattern">();
	}
	static class USequenceCameraShakePattern* GetDefaultObj()
	{
		return GetDefaultObjImpl<USequenceCameraShakePattern>();
	}
};
static_assert(alignof(USequenceCameraShakePattern) == 0x000008, "Wrong alignment on USequenceCameraShakePattern");
static_assert(sizeof(USequenceCameraShakePattern) == 0x000058, "Wrong size on USequenceCameraShakePattern");
static_assert(offsetof(USequenceCameraShakePattern, Sequence) == 0x000028, "Member 'USequenceCameraShakePattern::Sequence' has a wrong offset!");
static_assert(offsetof(USequenceCameraShakePattern, PlayRate) == 0x000030, "Member 'USequenceCameraShakePattern::PlayRate' has a wrong offset!");
static_assert(offsetof(USequenceCameraShakePattern, Scale) == 0x000034, "Member 'USequenceCameraShakePattern::Scale' has a wrong offset!");
static_assert(offsetof(USequenceCameraShakePattern, BlendInTime) == 0x000038, "Member 'USequenceCameraShakePattern::BlendInTime' has a wrong offset!");
static_assert(offsetof(USequenceCameraShakePattern, BlendOutTime) == 0x00003C, "Member 'USequenceCameraShakePattern::BlendOutTime' has a wrong offset!");
static_assert(offsetof(USequenceCameraShakePattern, RandomSegmentDuration) == 0x000040, "Member 'USequenceCameraShakePattern::RandomSegmentDuration' has a wrong offset!");
static_assert(offsetof(USequenceCameraShakePattern, bRandomSegment) == 0x000044, "Member 'USequenceCameraShakePattern::bRandomSegment' has a wrong offset!");
static_assert(offsetof(USequenceCameraShakePattern, Player) == 0x000048, "Member 'USequenceCameraShakePattern::Player' has a wrong offset!");
static_assert(offsetof(USequenceCameraShakePattern, CameraStandIn) == 0x000050, "Member 'USequenceCameraShakePattern::CameraStandIn' has a wrong offset!");

class UTemplateSequenceSystem final : public UMovieSceneEntitySystem
{
public:
	uint8                                         Pad_40[0x70];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"TemplateSequenceSystem">();
	}
	static class UTemplateSequenceSystem* GetDefaultObj()
	{
		return GetDefaultObjImpl<UTemplateSequenceSystem>();
	}
};
static_assert(alignof(UTemplateSequenceSystem) == 0x000008, "Wrong alignment on UTemplateSequenceSystem");
static_assert(sizeof(UTemplateSequenceSystem) == 0x0000B0, "Wrong size on UTemplateSequenceSystem");

class UTemplateSequencePropertyScalingInstantiatorSystem final : public UMovieSceneEntitySystem
{
public:
	uint8                                         Pad_40[0x58];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"TemplateSequencePropertyScalingInstantiatorSystem">();
	}
	static class UTemplateSequencePropertyScalingInstantiatorSystem* GetDefaultObj()
	{
		return GetDefaultObjImpl<UTemplateSequencePropertyScalingInstantiatorSystem>();
	}
};
static_assert(alignof(UTemplateSequencePropertyScalingInstantiatorSystem) == 0x000008, "Wrong alignment on UTemplateSequencePropertyScalingInstantiatorSystem");
static_assert(sizeof(UTemplateSequencePropertyScalingInstantiatorSystem) == 0x000098, "Wrong size on UTemplateSequencePropertyScalingInstantiatorSystem");

class UTemplateSequencePropertyScalingEvaluatorSystem final : public UMovieSceneEntitySystem
{
public:
	uint8                                         Pad_40[0x50];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"TemplateSequencePropertyScalingEvaluatorSystem">();
	}
	static class UTemplateSequencePropertyScalingEvaluatorSystem* GetDefaultObj()
	{
		return GetDefaultObjImpl<UTemplateSequencePropertyScalingEvaluatorSystem>();
	}
};
static_assert(alignof(UTemplateSequencePropertyScalingEvaluatorSystem) == 0x000008, "Wrong alignment on UTemplateSequencePropertyScalingEvaluatorSystem");
static_assert(sizeof(UTemplateSequencePropertyScalingEvaluatorSystem) == 0x000090, "Wrong size on UTemplateSequencePropertyScalingEvaluatorSystem");

class ATemplateSequenceActor final : public AActor
{
public:
	uint8                                         Pad_288[0x8];
	struct FMovieSceneSequencePlaybackSettings    PlaybackSettings;
	class UTemplateSequencePlayer*                SequencePlayer;
	struct FSoftObjectPath                        TemplateSequence;
	struct FTemplateSequenceBindingOverrideData   BindingOverride;
	uint8                                         Pad_2DC[0x4];

public:
	void SetBinding(class AActor* Actor, bool bOverridesDefault);
	void SetSequence(class UTemplateSequence* InSequence);

	class UTemplateSequence* GetSequence() const;
	class UTemplateSequencePlayer* GetSequencePlayer() const;
	class UTemplateSequence* LoadSequence() const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"TemplateSequenceActor">();
	}
	static class ATemplateSequenceActor* GetDefaultObj()
	{
		return GetDefaultObjImpl<ATemplateSequenceActor>();
	}
};
static_assert(alignof(ATemplateSequenceActor) == 0x000008, "Wrong alignment on ATemplateSequenceActor");
static_assert(sizeof(ATemplateSequenceActor) == 0x0002E0, "Wrong size on ATemplateSequenceActor");
static_assert(offsetof(ATemplateSequenceActor, PlaybackSettings) == 0x000290, "Member 'ATemplateSequenceActor::PlaybackSettings' has a wrong offset!");
static_assert(offsetof(ATemplateSequenceActor, SequencePlayer) == 0x0002B0, "Member 'ATemplateSequenceActor::SequencePlayer' has a wrong offset!");
static_assert(offsetof(ATemplateSequenceActor, TemplateSequence) == 0x0002B8, "Member 'ATemplateSequenceActor::TemplateSequence' has a wrong offset!");
static_assert(offsetof(ATemplateSequenceActor, BindingOverride) == 0x0002D0, "Member 'ATemplateSequenceActor::BindingOverride' has a wrong offset!");

class UTemplateSequencePlayer final : public UMovieSceneSequencePlayer
{
public:
	uint8                                         Pad_4B0[0x8];

public:
	static class UTemplateSequencePlayer* CreateTemplateSequencePlayer(class UObject* WorldContextObject, class UTemplateSequence* TemplateSequence, const struct FMovieSceneSequencePlaybackSettings& Settings, class ATemplateSequenceActor** OutActor);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"TemplateSequencePlayer">();
	}
	static class UTemplateSequencePlayer* GetDefaultObj()
	{
		return GetDefaultObjImpl<UTemplateSequencePlayer>();
	}
};
static_assert(alignof(UTemplateSequencePlayer) == 0x000008, "Wrong alignment on UTemplateSequencePlayer");
static_assert(sizeof(UTemplateSequencePlayer) == 0x0004B8, "Wrong size on UTemplateSequencePlayer");

class USequenceCameraShakeTestUtil final : public UBlueprintFunctionLibrary
{
public:
	static struct FMinimalViewInfo GetCameraCachePOV(class APlayerController* PlayerController);
	static struct FMinimalViewInfo GetLastFrameCameraCachePOV(class APlayerController* PlayerController);
	static bool GetPostProcessBlendCache(class APlayerController* PlayerController, int32 PPIndex, struct FPostProcessSettings* OutPPSettings, float* OutPPBlendWeight);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"SequenceCameraShakeTestUtil">();
	}
	static class USequenceCameraShakeTestUtil* GetDefaultObj()
	{
		return GetDefaultObjImpl<USequenceCameraShakeTestUtil>();
	}
};
static_assert(alignof(USequenceCameraShakeTestUtil) == 0x000008, "Wrong alignment on USequenceCameraShakeTestUtil");
static_assert(sizeof(USequenceCameraShakeTestUtil) == 0x000028, "Wrong size on USequenceCameraShakeTestUtil");

class UTemplateSequenceTrack final : public UMovieSceneSubTrack
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"TemplateSequenceTrack">();
	}
	static class UTemplateSequenceTrack* GetDefaultObj()
	{
		return GetDefaultObjImpl<UTemplateSequenceTrack>();
	}
};
static_assert(alignof(UTemplateSequenceTrack) == 0x000008, "Wrong alignment on UTemplateSequenceTrack");
static_assert(sizeof(UTemplateSequenceTrack) == 0x0000A8, "Wrong size on UTemplateSequenceTrack");

}
