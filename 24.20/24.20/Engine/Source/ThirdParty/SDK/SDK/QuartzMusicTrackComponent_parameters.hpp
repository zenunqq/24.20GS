#pragma once

#include "Basic.hpp"

#include "GameplayTags_structs.hpp"
#include "Engine_structs.hpp"

namespace SDK::Params
{

struct QuartzMusicTrackComponent_C_SetTrackParameter final
{
public:
	int32                                         ParameterIndex;
	uint8                                         Pad_4[0x4];
	double                                        InFloat;
	class UAudioComponent*                        CallFunc_GetAudioComponent_AudioComponent;
	TScriptInterface<class IAudioParameterControllerInterface> CallFunc_SetFloatParameter_self_CastInput;
	float                                         CallFunc_SetFloatParameter_InFloat_ImplicitCast;
};
static_assert(alignof(QuartzMusicTrackComponent_C_SetTrackParameter) == 0x000008, "Wrong alignment on QuartzMusicTrackComponent_C_SetTrackParameter");
static_assert(sizeof(QuartzMusicTrackComponent_C_SetTrackParameter) == 0x000030, "Wrong size on QuartzMusicTrackComponent_C_SetTrackParameter");
static_assert(offsetof(QuartzMusicTrackComponent_C_SetTrackParameter, ParameterIndex) == 0x000000, "Member 'QuartzMusicTrackComponent_C_SetTrackParameter::ParameterIndex' has a wrong offset!");
static_assert(offsetof(QuartzMusicTrackComponent_C_SetTrackParameter, InFloat) == 0x000008, "Member 'QuartzMusicTrackComponent_C_SetTrackParameter::InFloat' has a wrong offset!");
static_assert(offsetof(QuartzMusicTrackComponent_C_SetTrackParameter, CallFunc_GetAudioComponent_AudioComponent) == 0x000010, "Member 'QuartzMusicTrackComponent_C_SetTrackParameter::CallFunc_GetAudioComponent_AudioComponent' has a wrong offset!");
static_assert(offsetof(QuartzMusicTrackComponent_C_SetTrackParameter, CallFunc_SetFloatParameter_self_CastInput) == 0x000018, "Member 'QuartzMusicTrackComponent_C_SetTrackParameter::CallFunc_SetFloatParameter_self_CastInput' has a wrong offset!");
static_assert(offsetof(QuartzMusicTrackComponent_C_SetTrackParameter, CallFunc_SetFloatParameter_InFloat_ImplicitCast) == 0x000028, "Member 'QuartzMusicTrackComponent_C_SetTrackParameter::CallFunc_SetFloatParameter_InFloat_ImplicitCast' has a wrong offset!");

struct QuartzMusicTrackComponent_C_SetStemVolume final
{
public:
	int32                                         Index_0;
	uint8                                         Pad_4[0x4];
	double                                        Value;
};
static_assert(alignof(QuartzMusicTrackComponent_C_SetStemVolume) == 0x000008, "Wrong alignment on QuartzMusicTrackComponent_C_SetStemVolume");
static_assert(sizeof(QuartzMusicTrackComponent_C_SetStemVolume) == 0x000010, "Wrong size on QuartzMusicTrackComponent_C_SetStemVolume");
static_assert(offsetof(QuartzMusicTrackComponent_C_SetStemVolume, Index_0) == 0x000000, "Member 'QuartzMusicTrackComponent_C_SetStemVolume::Index_0' has a wrong offset!");
static_assert(offsetof(QuartzMusicTrackComponent_C_SetStemVolume, Value) == 0x000008, "Member 'QuartzMusicTrackComponent_C_SetStemVolume::Value' has a wrong offset!");

struct QuartzMusicTrackComponent_C_SetDebugEnabled final
{
public:
	bool                                          Debug;
};
static_assert(alignof(QuartzMusicTrackComponent_C_SetDebugEnabled) == 0x000001, "Wrong alignment on QuartzMusicTrackComponent_C_SetDebugEnabled");
static_assert(sizeof(QuartzMusicTrackComponent_C_SetDebugEnabled) == 0x000001, "Wrong size on QuartzMusicTrackComponent_C_SetDebugEnabled");
static_assert(offsetof(QuartzMusicTrackComponent_C_SetDebugEnabled, Debug) == 0x000000, "Member 'QuartzMusicTrackComponent_C_SetDebugEnabled::Debug' has a wrong offset!");

struct QuartzMusicTrackComponent_C_ReceiveEndPlay final
{
public:
	EEndPlayReason                                EndPlayReason;
};
static_assert(alignof(QuartzMusicTrackComponent_C_ReceiveEndPlay) == 0x000001, "Wrong alignment on QuartzMusicTrackComponent_C_ReceiveEndPlay");
static_assert(sizeof(QuartzMusicTrackComponent_C_ReceiveEndPlay) == 0x000001, "Wrong size on QuartzMusicTrackComponent_C_ReceiveEndPlay");
static_assert(offsetof(QuartzMusicTrackComponent_C_ReceiveEndPlay, EndPlayReason) == 0x000000, "Member 'QuartzMusicTrackComponent_C_ReceiveEndPlay::EndPlayReason' has a wrong offset!");

struct QuartzMusicTrackComponent_C_QueueTrackStop final
{
public:
	class UMusicEventSubsystem*                   CallFunc_GetGameInstanceSubsystem_ReturnValue;
	class UAudioComponent*                        CallFunc_GetAudioComponent_AudioComponent;
	class UFortAudioAnalysisSubsystem*            CallFunc_GetWorldSubsystem_ReturnValue;
};
static_assert(alignof(QuartzMusicTrackComponent_C_QueueTrackStop) == 0x000008, "Wrong alignment on QuartzMusicTrackComponent_C_QueueTrackStop");
static_assert(sizeof(QuartzMusicTrackComponent_C_QueueTrackStop) == 0x000018, "Wrong size on QuartzMusicTrackComponent_C_QueueTrackStop");
static_assert(offsetof(QuartzMusicTrackComponent_C_QueueTrackStop, CallFunc_GetGameInstanceSubsystem_ReturnValue) == 0x000000, "Member 'QuartzMusicTrackComponent_C_QueueTrackStop::CallFunc_GetGameInstanceSubsystem_ReturnValue' has a wrong offset!");
static_assert(offsetof(QuartzMusicTrackComponent_C_QueueTrackStop, CallFunc_GetAudioComponent_AudioComponent) == 0x000008, "Member 'QuartzMusicTrackComponent_C_QueueTrackStop::CallFunc_GetAudioComponent_AudioComponent' has a wrong offset!");
static_assert(offsetof(QuartzMusicTrackComponent_C_QueueTrackStop, CallFunc_GetWorldSubsystem_ReturnValue) == 0x000010, "Member 'QuartzMusicTrackComponent_C_QueueTrackStop::CallFunc_GetWorldSubsystem_ReturnValue' has a wrong offset!");

struct QuartzMusicTrackComponent_C_QueueTrackStart final
{
public:
	class USoundBase*                             CallFunc_GetTrackSound_Sound;
	class USoundBase*                             CallFunc_GetTrackSound_Sound_1;
	bool                                          CallFunc_IsValid_ReturnValue;
	uint8                                         Pad_11[0x7];
	class FString                                 CallFunc_GetDisplayName_ReturnValue;
	class FName                                   CallFunc_Conv_StringToName_ReturnValue;
	uint8                                         Pad_2C[0x4];
	class USoundBase*                             CallFunc_GetTrackSound_Sound_2;
	class UAudioComponent*                        CallFunc_CreateSound2D_ReturnValue;
	class UQuartzSubsystem*                       CallFunc_GetWorldSubsystem_ReturnValue;
	class UAudioComponent*                        CallFunc_GetAudioComponent_AudioComponent;
	bool                                          CallFunc_IsGameplayTagValid_ReturnValue;
	bool                                          CallFunc_IsValid_ReturnValue_1;
	uint8                                         Pad_52[0x6];
	struct FQuartzQuantizationBoundary            Temp_struct_Variable;
	TDelegate<void(EQuartzCommandDelegateSubType EventType, class FName Name)> Temp_delegate_Variable;
	bool                                          CallFunc_IsValid_ReturnValue_2;
	uint8                                         Pad_85[0x3];
	class AFortGameStateAthena*                   CallFunc_GetGameStateAthena_ReturnValue;
	bool                                          CallFunc_IsValid_ReturnValue_3;
	bool                                          CallFunc_IsValid_ReturnValue_4;
	uint8                                         Pad_92[0x6];
	struct FGameplayTagContainer                  CallFunc_GetAthenaPlaylistContextTags_ReturnValue;
	bool                                          CallFunc_HasAnyTags_ReturnValue;
	uint8                                         Pad_B9[0x7];
	class UMusicEventSubsystem*                   CallFunc_GetGameInstanceSubsystem_ReturnValue;
	bool                                          CallFunc_Not_PreBool_ReturnValue;
	uint8                                         Pad_C9[0x3];
	TDelegate<void(EQuartzCommandDelegateSubType EventType, class FName Name)> K2Node_CreateDelegate_OutputDelegate;
	TDelegate<void(class FName ClockName, EQuartzCommandQuantization QuantizationType, int32 NumBars, int32 Beat, float BeatFraction)> K2Node_CreateDelegate_OutputDelegate_1;
	uint8                                         Pad_E4[0x4];
	class UQuartzClockHandle*                     CallFunc_SubscribeToAllQuantizationEvents_ClockHandle;
	class UQuartzClockHandle*                     CallFunc_SetBeatsPerMinute_ClockHandle;
	class UFortAudioAnalysisSubsystem*            CallFunc_GetWorldSubsystem_ReturnValue_1;
	class UQuartzClockHandle*                     CallFunc_CreateNewClock_ReturnValue;
	float                                         CallFunc_PlayQuantized_InFadeInDuration_ImplicitCast;
	float                                         CallFunc_SetBeatsPerMinute_BeatsPerMinute_ImplicitCast;
};
static_assert(alignof(QuartzMusicTrackComponent_C_QueueTrackStart) == 0x000008, "Wrong alignment on QuartzMusicTrackComponent_C_QueueTrackStart");
static_assert(sizeof(QuartzMusicTrackComponent_C_QueueTrackStart) == 0x000110, "Wrong size on QuartzMusicTrackComponent_C_QueueTrackStart");
static_assert(offsetof(QuartzMusicTrackComponent_C_QueueTrackStart, CallFunc_GetTrackSound_Sound) == 0x000000, "Member 'QuartzMusicTrackComponent_C_QueueTrackStart::CallFunc_GetTrackSound_Sound' has a wrong offset!");
static_assert(offsetof(QuartzMusicTrackComponent_C_QueueTrackStart, CallFunc_GetTrackSound_Sound_1) == 0x000008, "Member 'QuartzMusicTrackComponent_C_QueueTrackStart::CallFunc_GetTrackSound_Sound_1' has a wrong offset!");
static_assert(offsetof(QuartzMusicTrackComponent_C_QueueTrackStart, CallFunc_IsValid_ReturnValue) == 0x000010, "Member 'QuartzMusicTrackComponent_C_QueueTrackStart::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(QuartzMusicTrackComponent_C_QueueTrackStart, CallFunc_GetDisplayName_ReturnValue) == 0x000018, "Member 'QuartzMusicTrackComponent_C_QueueTrackStart::CallFunc_GetDisplayName_ReturnValue' has a wrong offset!");
static_assert(offsetof(QuartzMusicTrackComponent_C_QueueTrackStart, CallFunc_Conv_StringToName_ReturnValue) == 0x000028, "Member 'QuartzMusicTrackComponent_C_QueueTrackStart::CallFunc_Conv_StringToName_ReturnValue' has a wrong offset!");
static_assert(offsetof(QuartzMusicTrackComponent_C_QueueTrackStart, CallFunc_GetTrackSound_Sound_2) == 0x000030, "Member 'QuartzMusicTrackComponent_C_QueueTrackStart::CallFunc_GetTrackSound_Sound_2' has a wrong offset!");
static_assert(offsetof(QuartzMusicTrackComponent_C_QueueTrackStart, CallFunc_CreateSound2D_ReturnValue) == 0x000038, "Member 'QuartzMusicTrackComponent_C_QueueTrackStart::CallFunc_CreateSound2D_ReturnValue' has a wrong offset!");
static_assert(offsetof(QuartzMusicTrackComponent_C_QueueTrackStart, CallFunc_GetWorldSubsystem_ReturnValue) == 0x000040, "Member 'QuartzMusicTrackComponent_C_QueueTrackStart::CallFunc_GetWorldSubsystem_ReturnValue' has a wrong offset!");
static_assert(offsetof(QuartzMusicTrackComponent_C_QueueTrackStart, CallFunc_GetAudioComponent_AudioComponent) == 0x000048, "Member 'QuartzMusicTrackComponent_C_QueueTrackStart::CallFunc_GetAudioComponent_AudioComponent' has a wrong offset!");
static_assert(offsetof(QuartzMusicTrackComponent_C_QueueTrackStart, CallFunc_IsGameplayTagValid_ReturnValue) == 0x000050, "Member 'QuartzMusicTrackComponent_C_QueueTrackStart::CallFunc_IsGameplayTagValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(QuartzMusicTrackComponent_C_QueueTrackStart, CallFunc_IsValid_ReturnValue_1) == 0x000051, "Member 'QuartzMusicTrackComponent_C_QueueTrackStart::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(QuartzMusicTrackComponent_C_QueueTrackStart, Temp_struct_Variable) == 0x000058, "Member 'QuartzMusicTrackComponent_C_QueueTrackStart::Temp_struct_Variable' has a wrong offset!");
static_assert(offsetof(QuartzMusicTrackComponent_C_QueueTrackStart, Temp_delegate_Variable) == 0x000078, "Member 'QuartzMusicTrackComponent_C_QueueTrackStart::Temp_delegate_Variable' has a wrong offset!");
static_assert(offsetof(QuartzMusicTrackComponent_C_QueueTrackStart, CallFunc_IsValid_ReturnValue_2) == 0x000084, "Member 'QuartzMusicTrackComponent_C_QueueTrackStart::CallFunc_IsValid_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(QuartzMusicTrackComponent_C_QueueTrackStart, CallFunc_GetGameStateAthena_ReturnValue) == 0x000088, "Member 'QuartzMusicTrackComponent_C_QueueTrackStart::CallFunc_GetGameStateAthena_ReturnValue' has a wrong offset!");
static_assert(offsetof(QuartzMusicTrackComponent_C_QueueTrackStart, CallFunc_IsValid_ReturnValue_3) == 0x000090, "Member 'QuartzMusicTrackComponent_C_QueueTrackStart::CallFunc_IsValid_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(QuartzMusicTrackComponent_C_QueueTrackStart, CallFunc_IsValid_ReturnValue_4) == 0x000091, "Member 'QuartzMusicTrackComponent_C_QueueTrackStart::CallFunc_IsValid_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(QuartzMusicTrackComponent_C_QueueTrackStart, CallFunc_GetAthenaPlaylistContextTags_ReturnValue) == 0x000098, "Member 'QuartzMusicTrackComponent_C_QueueTrackStart::CallFunc_GetAthenaPlaylistContextTags_ReturnValue' has a wrong offset!");
static_assert(offsetof(QuartzMusicTrackComponent_C_QueueTrackStart, CallFunc_HasAnyTags_ReturnValue) == 0x0000B8, "Member 'QuartzMusicTrackComponent_C_QueueTrackStart::CallFunc_HasAnyTags_ReturnValue' has a wrong offset!");
static_assert(offsetof(QuartzMusicTrackComponent_C_QueueTrackStart, CallFunc_GetGameInstanceSubsystem_ReturnValue) == 0x0000C0, "Member 'QuartzMusicTrackComponent_C_QueueTrackStart::CallFunc_GetGameInstanceSubsystem_ReturnValue' has a wrong offset!");
static_assert(offsetof(QuartzMusicTrackComponent_C_QueueTrackStart, CallFunc_Not_PreBool_ReturnValue) == 0x0000C8, "Member 'QuartzMusicTrackComponent_C_QueueTrackStart::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(QuartzMusicTrackComponent_C_QueueTrackStart, K2Node_CreateDelegate_OutputDelegate) == 0x0000CC, "Member 'QuartzMusicTrackComponent_C_QueueTrackStart::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(QuartzMusicTrackComponent_C_QueueTrackStart, K2Node_CreateDelegate_OutputDelegate_1) == 0x0000D8, "Member 'QuartzMusicTrackComponent_C_QueueTrackStart::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(QuartzMusicTrackComponent_C_QueueTrackStart, CallFunc_SubscribeToAllQuantizationEvents_ClockHandle) == 0x0000E8, "Member 'QuartzMusicTrackComponent_C_QueueTrackStart::CallFunc_SubscribeToAllQuantizationEvents_ClockHandle' has a wrong offset!");
static_assert(offsetof(QuartzMusicTrackComponent_C_QueueTrackStart, CallFunc_SetBeatsPerMinute_ClockHandle) == 0x0000F0, "Member 'QuartzMusicTrackComponent_C_QueueTrackStart::CallFunc_SetBeatsPerMinute_ClockHandle' has a wrong offset!");
static_assert(offsetof(QuartzMusicTrackComponent_C_QueueTrackStart, CallFunc_GetWorldSubsystem_ReturnValue_1) == 0x0000F8, "Member 'QuartzMusicTrackComponent_C_QueueTrackStart::CallFunc_GetWorldSubsystem_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(QuartzMusicTrackComponent_C_QueueTrackStart, CallFunc_CreateNewClock_ReturnValue) == 0x000100, "Member 'QuartzMusicTrackComponent_C_QueueTrackStart::CallFunc_CreateNewClock_ReturnValue' has a wrong offset!");
static_assert(offsetof(QuartzMusicTrackComponent_C_QueueTrackStart, CallFunc_PlayQuantized_InFadeInDuration_ImplicitCast) == 0x000108, "Member 'QuartzMusicTrackComponent_C_QueueTrackStart::CallFunc_PlayQuantized_InFadeInDuration_ImplicitCast' has a wrong offset!");
static_assert(offsetof(QuartzMusicTrackComponent_C_QueueTrackStart, CallFunc_SetBeatsPerMinute_BeatsPerMinute_ImplicitCast) == 0x00010C, "Member 'QuartzMusicTrackComponent_C_QueueTrackStart::CallFunc_SetBeatsPerMinute_BeatsPerMinute_ImplicitCast' has a wrong offset!");

struct QuartzMusicTrackComponent_C_OnQuartzQuantizationEvent final
{
public:
	class FName                                   ClockName_0;
	EQuartzCommandQuantization                    QuantizationType;
	uint8                                         Pad_5[0x3];
	int32                                         NumBars;
	int32                                         Beat;
	float                                         BeatFraction;
	bool                                          K2Node_SwitchEnum_CmpSuccess;
	bool                                          CallFunc_IsValid_ReturnValue;
	uint8                                         Pad_16[0x2];
	class UQuartzClockHandle*                     CallFunc_PauseClock_ClockHandle;
	bool                                          CallFunc_EqualEqual_NameName_ReturnValue;
	uint8                                         Pad_21[0x3];
	float                                         CallFunc_FadeOut_FadeOutDuration_ImplicitCast;
};
static_assert(alignof(QuartzMusicTrackComponent_C_OnQuartzQuantizationEvent) == 0x000008, "Wrong alignment on QuartzMusicTrackComponent_C_OnQuartzQuantizationEvent");
static_assert(sizeof(QuartzMusicTrackComponent_C_OnQuartzQuantizationEvent) == 0x000028, "Wrong size on QuartzMusicTrackComponent_C_OnQuartzQuantizationEvent");
static_assert(offsetof(QuartzMusicTrackComponent_C_OnQuartzQuantizationEvent, ClockName_0) == 0x000000, "Member 'QuartzMusicTrackComponent_C_OnQuartzQuantizationEvent::ClockName_0' has a wrong offset!");
static_assert(offsetof(QuartzMusicTrackComponent_C_OnQuartzQuantizationEvent, QuantizationType) == 0x000004, "Member 'QuartzMusicTrackComponent_C_OnQuartzQuantizationEvent::QuantizationType' has a wrong offset!");
static_assert(offsetof(QuartzMusicTrackComponent_C_OnQuartzQuantizationEvent, NumBars) == 0x000008, "Member 'QuartzMusicTrackComponent_C_OnQuartzQuantizationEvent::NumBars' has a wrong offset!");
static_assert(offsetof(QuartzMusicTrackComponent_C_OnQuartzQuantizationEvent, Beat) == 0x00000C, "Member 'QuartzMusicTrackComponent_C_OnQuartzQuantizationEvent::Beat' has a wrong offset!");
static_assert(offsetof(QuartzMusicTrackComponent_C_OnQuartzQuantizationEvent, BeatFraction) == 0x000010, "Member 'QuartzMusicTrackComponent_C_OnQuartzQuantizationEvent::BeatFraction' has a wrong offset!");
static_assert(offsetof(QuartzMusicTrackComponent_C_OnQuartzQuantizationEvent, K2Node_SwitchEnum_CmpSuccess) == 0x000014, "Member 'QuartzMusicTrackComponent_C_OnQuartzQuantizationEvent::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");
static_assert(offsetof(QuartzMusicTrackComponent_C_OnQuartzQuantizationEvent, CallFunc_IsValid_ReturnValue) == 0x000015, "Member 'QuartzMusicTrackComponent_C_OnQuartzQuantizationEvent::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(QuartzMusicTrackComponent_C_OnQuartzQuantizationEvent, CallFunc_PauseClock_ClockHandle) == 0x000018, "Member 'QuartzMusicTrackComponent_C_OnQuartzQuantizationEvent::CallFunc_PauseClock_ClockHandle' has a wrong offset!");
static_assert(offsetof(QuartzMusicTrackComponent_C_OnQuartzQuantizationEvent, CallFunc_EqualEqual_NameName_ReturnValue) == 0x000020, "Member 'QuartzMusicTrackComponent_C_OnQuartzQuantizationEvent::CallFunc_EqualEqual_NameName_ReturnValue' has a wrong offset!");
static_assert(offsetof(QuartzMusicTrackComponent_C_OnQuartzQuantizationEvent, CallFunc_FadeOut_FadeOutDuration_ImplicitCast) == 0x000024, "Member 'QuartzMusicTrackComponent_C_OnQuartzQuantizationEvent::CallFunc_FadeOut_FadeOutDuration_ImplicitCast' has a wrong offset!");

struct QuartzMusicTrackComponent_C_OnQuartzClockDelegate final
{
public:
	EQuartzCommandDelegateSubType                 EventType;
	uint8                                         Pad_1[0x3];
	class FName                                   Name_0;
	bool                                          K2Node_SwitchEnum_CmpSuccess;
	uint8                                         Pad_9[0x7];
	class UQuartzClockHandle*                     CallFunc_ResumeClock_ClockHandle;
};
static_assert(alignof(QuartzMusicTrackComponent_C_OnQuartzClockDelegate) == 0x000008, "Wrong alignment on QuartzMusicTrackComponent_C_OnQuartzClockDelegate");
static_assert(sizeof(QuartzMusicTrackComponent_C_OnQuartzClockDelegate) == 0x000018, "Wrong size on QuartzMusicTrackComponent_C_OnQuartzClockDelegate");
static_assert(offsetof(QuartzMusicTrackComponent_C_OnQuartzClockDelegate, EventType) == 0x000000, "Member 'QuartzMusicTrackComponent_C_OnQuartzClockDelegate::EventType' has a wrong offset!");
static_assert(offsetof(QuartzMusicTrackComponent_C_OnQuartzClockDelegate, Name_0) == 0x000004, "Member 'QuartzMusicTrackComponent_C_OnQuartzClockDelegate::Name_0' has a wrong offset!");
static_assert(offsetof(QuartzMusicTrackComponent_C_OnQuartzClockDelegate, K2Node_SwitchEnum_CmpSuccess) == 0x000008, "Member 'QuartzMusicTrackComponent_C_OnQuartzClockDelegate::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");
static_assert(offsetof(QuartzMusicTrackComponent_C_OnQuartzClockDelegate, CallFunc_ResumeClock_ClockHandle) == 0x000010, "Member 'QuartzMusicTrackComponent_C_OnQuartzClockDelegate::CallFunc_ResumeClock_ClockHandle' has a wrong offset!");

struct QuartzMusicTrackComponent_C_GetTrackSound final
{
public:
	class USoundBase*                             sound;
	bool                                          CallFunc_IsValid_ReturnValue;
};
static_assert(alignof(QuartzMusicTrackComponent_C_GetTrackSound) == 0x000008, "Wrong alignment on QuartzMusicTrackComponent_C_GetTrackSound");
static_assert(sizeof(QuartzMusicTrackComponent_C_GetTrackSound) == 0x000010, "Wrong size on QuartzMusicTrackComponent_C_GetTrackSound");
static_assert(offsetof(QuartzMusicTrackComponent_C_GetTrackSound, sound) == 0x000000, "Member 'QuartzMusicTrackComponent_C_GetTrackSound::sound' has a wrong offset!");
static_assert(offsetof(QuartzMusicTrackComponent_C_GetTrackSound, CallFunc_IsValid_ReturnValue) == 0x000008, "Member 'QuartzMusicTrackComponent_C_GetTrackSound::CallFunc_IsValid_ReturnValue' has a wrong offset!");

struct QuartzMusicTrackComponent_C_GetTrackPriority final
{
public:
	double                                        Priority;
};
static_assert(alignof(QuartzMusicTrackComponent_C_GetTrackPriority) == 0x000008, "Wrong alignment on QuartzMusicTrackComponent_C_GetTrackPriority");
static_assert(sizeof(QuartzMusicTrackComponent_C_GetTrackPriority) == 0x000008, "Wrong size on QuartzMusicTrackComponent_C_GetTrackPriority");
static_assert(offsetof(QuartzMusicTrackComponent_C_GetTrackPriority, Priority) == 0x000000, "Member 'QuartzMusicTrackComponent_C_GetTrackPriority::Priority' has a wrong offset!");

struct QuartzMusicTrackComponent_C_GetPlayState final
{
public:
	EAudioComponentPlayState                      ReturnValue;
	bool                                          CallFunc_IsValid_ReturnValue;
	EAudioComponentPlayState                      CallFunc_GetPlayState_ReturnValue;
};
static_assert(alignof(QuartzMusicTrackComponent_C_GetPlayState) == 0x000001, "Wrong alignment on QuartzMusicTrackComponent_C_GetPlayState");
static_assert(sizeof(QuartzMusicTrackComponent_C_GetPlayState) == 0x000003, "Wrong size on QuartzMusicTrackComponent_C_GetPlayState");
static_assert(offsetof(QuartzMusicTrackComponent_C_GetPlayState, ReturnValue) == 0x000000, "Member 'QuartzMusicTrackComponent_C_GetPlayState::ReturnValue' has a wrong offset!");
static_assert(offsetof(QuartzMusicTrackComponent_C_GetPlayState, CallFunc_IsValid_ReturnValue) == 0x000001, "Member 'QuartzMusicTrackComponent_C_GetPlayState::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(QuartzMusicTrackComponent_C_GetPlayState, CallFunc_GetPlayState_ReturnValue) == 0x000002, "Member 'QuartzMusicTrackComponent_C_GetPlayState::CallFunc_GetPlayState_ReturnValue' has a wrong offset!");

struct QuartzMusicTrackComponent_C_GetIsPlaying final
{
public:
	bool                                          Is_Playing;
	bool                                          CallFunc_IsValid_ReturnValue;
	bool                                          CallFunc_IsPlaying_ReturnValue;
};
static_assert(alignof(QuartzMusicTrackComponent_C_GetIsPlaying) == 0x000001, "Wrong alignment on QuartzMusicTrackComponent_C_GetIsPlaying");
static_assert(sizeof(QuartzMusicTrackComponent_C_GetIsPlaying) == 0x000003, "Wrong size on QuartzMusicTrackComponent_C_GetIsPlaying");
static_assert(offsetof(QuartzMusicTrackComponent_C_GetIsPlaying, Is_Playing) == 0x000000, "Member 'QuartzMusicTrackComponent_C_GetIsPlaying::Is_Playing' has a wrong offset!");
static_assert(offsetof(QuartzMusicTrackComponent_C_GetIsPlaying, CallFunc_IsValid_ReturnValue) == 0x000001, "Member 'QuartzMusicTrackComponent_C_GetIsPlaying::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(QuartzMusicTrackComponent_C_GetIsPlaying, CallFunc_IsPlaying_ReturnValue) == 0x000002, "Member 'QuartzMusicTrackComponent_C_GetIsPlaying::CallFunc_IsPlaying_ReturnValue' has a wrong offset!");

struct QuartzMusicTrackComponent_C_GetClockHandle final
{
public:
	class UQuartzClockHandle*                     Clock_Handle;
};
static_assert(alignof(QuartzMusicTrackComponent_C_GetClockHandle) == 0x000008, "Wrong alignment on QuartzMusicTrackComponent_C_GetClockHandle");
static_assert(sizeof(QuartzMusicTrackComponent_C_GetClockHandle) == 0x000008, "Wrong size on QuartzMusicTrackComponent_C_GetClockHandle");
static_assert(offsetof(QuartzMusicTrackComponent_C_GetClockHandle, Clock_Handle) == 0x000000, "Member 'QuartzMusicTrackComponent_C_GetClockHandle::Clock_Handle' has a wrong offset!");

struct QuartzMusicTrackComponent_C_GetAudioComponent final
{
public:
	class UAudioComponent*                        AudioComponent_0;
};
static_assert(alignof(QuartzMusicTrackComponent_C_GetAudioComponent) == 0x000008, "Wrong alignment on QuartzMusicTrackComponent_C_GetAudioComponent");
static_assert(sizeof(QuartzMusicTrackComponent_C_GetAudioComponent) == 0x000008, "Wrong size on QuartzMusicTrackComponent_C_GetAudioComponent");
static_assert(offsetof(QuartzMusicTrackComponent_C_GetAudioComponent, AudioComponent_0) == 0x000000, "Member 'QuartzMusicTrackComponent_C_GetAudioComponent::AudioComponent_0' has a wrong offset!");

struct QuartzMusicTrackComponent_C_ExecuteUbergraph_QuartzMusicTrackComponent final
{
public:
	int32                                         EntryPoint;
	int32                                         K2Node_CustomEvent_Index;
	double                                        K2Node_CustomEvent_Value;
	bool                                          CallFunc_IsValid_ReturnValue;
	bool                                          CallFunc_IsValid_ReturnValue_1;
	bool                                          K2Node_CustomEvent_Debug;
	uint8                                         Pad_13[0x5];
	TScriptInterface<class IAudioParameterControllerInterface> CallFunc_SetFloatParameter_self_CastInput;
	class AActor*                                 CallFunc_GetOwner_ReturnValue;
	EEndPlayReason                                K2Node_Event_EndPlayReason;
	uint8                                         Pad_31[0x7];
	class ABP_QuartzMusicController_C*            K2Node_DynamicCast_AsBP_Quartz_Music_Controller;
	bool                                          K2Node_DynamicCast_bSuccess;
	uint8                                         Pad_41[0x3];
	float                                         CallFunc_SetFloatParameter_InFloat_ImplicitCast;
	float                                         CallFunc_FadeOut_FadeOutDuration_ImplicitCast;
};
static_assert(alignof(QuartzMusicTrackComponent_C_ExecuteUbergraph_QuartzMusicTrackComponent) == 0x000008, "Wrong alignment on QuartzMusicTrackComponent_C_ExecuteUbergraph_QuartzMusicTrackComponent");
static_assert(sizeof(QuartzMusicTrackComponent_C_ExecuteUbergraph_QuartzMusicTrackComponent) == 0x000050, "Wrong size on QuartzMusicTrackComponent_C_ExecuteUbergraph_QuartzMusicTrackComponent");
static_assert(offsetof(QuartzMusicTrackComponent_C_ExecuteUbergraph_QuartzMusicTrackComponent, EntryPoint) == 0x000000, "Member 'QuartzMusicTrackComponent_C_ExecuteUbergraph_QuartzMusicTrackComponent::EntryPoint' has a wrong offset!");
static_assert(offsetof(QuartzMusicTrackComponent_C_ExecuteUbergraph_QuartzMusicTrackComponent, K2Node_CustomEvent_Index) == 0x000004, "Member 'QuartzMusicTrackComponent_C_ExecuteUbergraph_QuartzMusicTrackComponent::K2Node_CustomEvent_Index' has a wrong offset!");
static_assert(offsetof(QuartzMusicTrackComponent_C_ExecuteUbergraph_QuartzMusicTrackComponent, K2Node_CustomEvent_Value) == 0x000008, "Member 'QuartzMusicTrackComponent_C_ExecuteUbergraph_QuartzMusicTrackComponent::K2Node_CustomEvent_Value' has a wrong offset!");
static_assert(offsetof(QuartzMusicTrackComponent_C_ExecuteUbergraph_QuartzMusicTrackComponent, CallFunc_IsValid_ReturnValue) == 0x000010, "Member 'QuartzMusicTrackComponent_C_ExecuteUbergraph_QuartzMusicTrackComponent::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(QuartzMusicTrackComponent_C_ExecuteUbergraph_QuartzMusicTrackComponent, CallFunc_IsValid_ReturnValue_1) == 0x000011, "Member 'QuartzMusicTrackComponent_C_ExecuteUbergraph_QuartzMusicTrackComponent::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(QuartzMusicTrackComponent_C_ExecuteUbergraph_QuartzMusicTrackComponent, K2Node_CustomEvent_Debug) == 0x000012, "Member 'QuartzMusicTrackComponent_C_ExecuteUbergraph_QuartzMusicTrackComponent::K2Node_CustomEvent_Debug' has a wrong offset!");
static_assert(offsetof(QuartzMusicTrackComponent_C_ExecuteUbergraph_QuartzMusicTrackComponent, CallFunc_SetFloatParameter_self_CastInput) == 0x000018, "Member 'QuartzMusicTrackComponent_C_ExecuteUbergraph_QuartzMusicTrackComponent::CallFunc_SetFloatParameter_self_CastInput' has a wrong offset!");
static_assert(offsetof(QuartzMusicTrackComponent_C_ExecuteUbergraph_QuartzMusicTrackComponent, CallFunc_GetOwner_ReturnValue) == 0x000028, "Member 'QuartzMusicTrackComponent_C_ExecuteUbergraph_QuartzMusicTrackComponent::CallFunc_GetOwner_ReturnValue' has a wrong offset!");
static_assert(offsetof(QuartzMusicTrackComponent_C_ExecuteUbergraph_QuartzMusicTrackComponent, K2Node_Event_EndPlayReason) == 0x000030, "Member 'QuartzMusicTrackComponent_C_ExecuteUbergraph_QuartzMusicTrackComponent::K2Node_Event_EndPlayReason' has a wrong offset!");
static_assert(offsetof(QuartzMusicTrackComponent_C_ExecuteUbergraph_QuartzMusicTrackComponent, K2Node_DynamicCast_AsBP_Quartz_Music_Controller) == 0x000038, "Member 'QuartzMusicTrackComponent_C_ExecuteUbergraph_QuartzMusicTrackComponent::K2Node_DynamicCast_AsBP_Quartz_Music_Controller' has a wrong offset!");
static_assert(offsetof(QuartzMusicTrackComponent_C_ExecuteUbergraph_QuartzMusicTrackComponent, K2Node_DynamicCast_bSuccess) == 0x000040, "Member 'QuartzMusicTrackComponent_C_ExecuteUbergraph_QuartzMusicTrackComponent::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(QuartzMusicTrackComponent_C_ExecuteUbergraph_QuartzMusicTrackComponent, CallFunc_SetFloatParameter_InFloat_ImplicitCast) == 0x000044, "Member 'QuartzMusicTrackComponent_C_ExecuteUbergraph_QuartzMusicTrackComponent::CallFunc_SetFloatParameter_InFloat_ImplicitCast' has a wrong offset!");
static_assert(offsetof(QuartzMusicTrackComponent_C_ExecuteUbergraph_QuartzMusicTrackComponent, CallFunc_FadeOut_FadeOutDuration_ImplicitCast) == 0x000048, "Member 'QuartzMusicTrackComponent_C_ExecuteUbergraph_QuartzMusicTrackComponent::CallFunc_FadeOut_FadeOutDuration_ImplicitCast' has a wrong offset!");

}
