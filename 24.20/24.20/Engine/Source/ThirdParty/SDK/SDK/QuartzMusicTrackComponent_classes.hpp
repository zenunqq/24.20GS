#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "GameplayTags_structs.hpp"
#include "ModularGameplay_classes.hpp"

namespace SDK
{

class UQuartzMusicTrackComponent_C final : public UGameFrameworkComponent
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;
	class USoundCue*                              TrackSoundCue;
	class UMetaSoundSource*                       TrackMetaSound;
	double                                        TrackPriority;
	class UQuartzClockHandle*                     ClockInst;
	class FName                                   ClockName;
	uint8                                         Pad_CC[0x4];
	double                                        ClockBPM;
	struct FQuartzClockSettings                   ClockSettings;
	class ABP_QuartzMusicController_C*            ControllerActor;
	struct FQuartzQuantizationBoundary            ClockQuantizationBoundary;
	bool                                          bDebugEnabled;
	uint8                                         Pad_121[0x7];
	class UAudioComponent*                        AudioComponent;
	bool                                          bQueueStop;
	uint8                                         Pad_131[0x7];
	double                                        TrackFadeInTime;
	double                                        TrackFadeOutTime;
	TArray<class FName>                           TrackParameters;
	struct FGameplayTagContainer                  TrackDisableTags;
	struct FGameplayTag                           MusicEventTag;

public:
	void SetTrackParameter(int32 ParameterIndex, double InFloat);
	void SetStemVolume(int32 Index_0, double Value);
	void SetDebugEnabled(bool Debug);
	void ReceiveEndPlay(EEndPlayReason EndPlayReason);
	void ReceiveBeginPlay();
	void QueueTrackStop();
	void QueueTrackStart();
	void OnQuartzQuantizationEvent(class FName ClockName_0, EQuartzCommandQuantization QuantizationType, int32 NumBars, int32 Beat, float BeatFraction);
	void OnQuartzClockDelegate(EQuartzCommandDelegateSubType EventType, class FName Name_0);
	void GetTrackSound(class USoundBase** sound);
	void GetTrackPriority(double* Priority);
	EAudioComponentPlayState GetPlayState();
	void GetIsPlaying(bool* Is_Playing);
	void GetClockHandle(class UQuartzClockHandle** Clock_Handle);
	void GetAudioComponent(class UAudioComponent** AudioComponent_0);
	void ExecuteUbergraph_QuartzMusicTrackComponent(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"QuartzMusicTrackComponent_C">();
	}
	static class UQuartzMusicTrackComponent_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UQuartzMusicTrackComponent_C>();
	}
};
static_assert(alignof(UQuartzMusicTrackComponent_C) == 0x000008, "Wrong alignment on UQuartzMusicTrackComponent_C");
static_assert(sizeof(UQuartzMusicTrackComponent_C) == 0x000180, "Wrong size on UQuartzMusicTrackComponent_C");
static_assert(offsetof(UQuartzMusicTrackComponent_C, UberGraphFrame) == 0x0000A0, "Member 'UQuartzMusicTrackComponent_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UQuartzMusicTrackComponent_C, TrackSoundCue) == 0x0000A8, "Member 'UQuartzMusicTrackComponent_C::TrackSoundCue' has a wrong offset!");
static_assert(offsetof(UQuartzMusicTrackComponent_C, TrackMetaSound) == 0x0000B0, "Member 'UQuartzMusicTrackComponent_C::TrackMetaSound' has a wrong offset!");
static_assert(offsetof(UQuartzMusicTrackComponent_C, TrackPriority) == 0x0000B8, "Member 'UQuartzMusicTrackComponent_C::TrackPriority' has a wrong offset!");
static_assert(offsetof(UQuartzMusicTrackComponent_C, ClockInst) == 0x0000C0, "Member 'UQuartzMusicTrackComponent_C::ClockInst' has a wrong offset!");
static_assert(offsetof(UQuartzMusicTrackComponent_C, ClockName) == 0x0000C8, "Member 'UQuartzMusicTrackComponent_C::ClockName' has a wrong offset!");
static_assert(offsetof(UQuartzMusicTrackComponent_C, ClockBPM) == 0x0000D0, "Member 'UQuartzMusicTrackComponent_C::ClockBPM' has a wrong offset!");
static_assert(offsetof(UQuartzMusicTrackComponent_C, ClockSettings) == 0x0000D8, "Member 'UQuartzMusicTrackComponent_C::ClockSettings' has a wrong offset!");
static_assert(offsetof(UQuartzMusicTrackComponent_C, ControllerActor) == 0x0000F8, "Member 'UQuartzMusicTrackComponent_C::ControllerActor' has a wrong offset!");
static_assert(offsetof(UQuartzMusicTrackComponent_C, ClockQuantizationBoundary) == 0x000100, "Member 'UQuartzMusicTrackComponent_C::ClockQuantizationBoundary' has a wrong offset!");
static_assert(offsetof(UQuartzMusicTrackComponent_C, bDebugEnabled) == 0x000120, "Member 'UQuartzMusicTrackComponent_C::bDebugEnabled' has a wrong offset!");
static_assert(offsetof(UQuartzMusicTrackComponent_C, AudioComponent) == 0x000128, "Member 'UQuartzMusicTrackComponent_C::AudioComponent' has a wrong offset!");
static_assert(offsetof(UQuartzMusicTrackComponent_C, bQueueStop) == 0x000130, "Member 'UQuartzMusicTrackComponent_C::bQueueStop' has a wrong offset!");
static_assert(offsetof(UQuartzMusicTrackComponent_C, TrackFadeInTime) == 0x000138, "Member 'UQuartzMusicTrackComponent_C::TrackFadeInTime' has a wrong offset!");
static_assert(offsetof(UQuartzMusicTrackComponent_C, TrackFadeOutTime) == 0x000140, "Member 'UQuartzMusicTrackComponent_C::TrackFadeOutTime' has a wrong offset!");
static_assert(offsetof(UQuartzMusicTrackComponent_C, TrackParameters) == 0x000148, "Member 'UQuartzMusicTrackComponent_C::TrackParameters' has a wrong offset!");
static_assert(offsetof(UQuartzMusicTrackComponent_C, TrackDisableTags) == 0x000158, "Member 'UQuartzMusicTrackComponent_C::TrackDisableTags' has a wrong offset!");
static_assert(offsetof(UQuartzMusicTrackComponent_C, MusicEventTag) == 0x000178, "Member 'UQuartzMusicTrackComponent_C::MusicEventTag' has a wrong offset!");

}
