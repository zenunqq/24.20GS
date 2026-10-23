#pragma once

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "GameplayTags_structs.hpp"

namespace SDK::Params
{

struct NPC_VoiceComponent_C_Deprecated_Set_Sound_Bank final
{
public:
	class UFortTaggedSoundBank*                   SoundBank;
};
static_assert(alignof(NPC_VoiceComponent_C_Deprecated_Set_Sound_Bank) == 0x000008, "Wrong alignment on NPC_VoiceComponent_C_Deprecated_Set_Sound_Bank");
static_assert(sizeof(NPC_VoiceComponent_C_Deprecated_Set_Sound_Bank) == 0x000008, "Wrong size on NPC_VoiceComponent_C_Deprecated_Set_Sound_Bank");
static_assert(offsetof(NPC_VoiceComponent_C_Deprecated_Set_Sound_Bank, SoundBank) == 0x000000, "Member 'NPC_VoiceComponent_C_Deprecated_Set_Sound_Bank::SoundBank' has a wrong offset!");

struct NPC_VoiceComponent_C_Internal_Get_Voice_Sound_Bank final
{
public:
	class UFortTaggedSoundBank*                   Sound_Bank;
	class UFortTaggedSoundBank*                   CallFunc_GetVoiceSoundBank_ReturnValue;
	bool                                          CallFunc_IsValid_ReturnValue;
};
static_assert(alignof(NPC_VoiceComponent_C_Internal_Get_Voice_Sound_Bank) == 0x000008, "Wrong alignment on NPC_VoiceComponent_C_Internal_Get_Voice_Sound_Bank");
static_assert(sizeof(NPC_VoiceComponent_C_Internal_Get_Voice_Sound_Bank) == 0x000018, "Wrong size on NPC_VoiceComponent_C_Internal_Get_Voice_Sound_Bank");
static_assert(offsetof(NPC_VoiceComponent_C_Internal_Get_Voice_Sound_Bank, Sound_Bank) == 0x000000, "Member 'NPC_VoiceComponent_C_Internal_Get_Voice_Sound_Bank::Sound_Bank' has a wrong offset!");
static_assert(offsetof(NPC_VoiceComponent_C_Internal_Get_Voice_Sound_Bank, CallFunc_GetVoiceSoundBank_ReturnValue) == 0x000008, "Member 'NPC_VoiceComponent_C_Internal_Get_Voice_Sound_Bank::CallFunc_GetVoiceSoundBank_ReturnValue' has a wrong offset!");
static_assert(offsetof(NPC_VoiceComponent_C_Internal_Get_Voice_Sound_Bank, CallFunc_IsValid_ReturnValue) == 0x000010, "Member 'NPC_VoiceComponent_C_Internal_Get_Voice_Sound_Bank::CallFunc_IsValid_ReturnValue' has a wrong offset!");

struct NPC_VoiceComponent_C_PlaySoundCue final
{
public:
	class USoundCue*                              SoundToPlay;
	class UAudioComponent*                        AudioComponent;
	bool                                          Success;
	bool                                          CallFunc_IsValid_ReturnValue;
	uint8                                         Pad_12[0x6];
	class AActor*                                 CallFunc_GetOwner_ReturnValue;
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue;
	bool                                          CallFunc_IsValid_ReturnValue_1;
};
static_assert(alignof(NPC_VoiceComponent_C_PlaySoundCue) == 0x000008, "Wrong alignment on NPC_VoiceComponent_C_PlaySoundCue");
static_assert(sizeof(NPC_VoiceComponent_C_PlaySoundCue) == 0x000040, "Wrong size on NPC_VoiceComponent_C_PlaySoundCue");
static_assert(offsetof(NPC_VoiceComponent_C_PlaySoundCue, SoundToPlay) == 0x000000, "Member 'NPC_VoiceComponent_C_PlaySoundCue::SoundToPlay' has a wrong offset!");
static_assert(offsetof(NPC_VoiceComponent_C_PlaySoundCue, AudioComponent) == 0x000008, "Member 'NPC_VoiceComponent_C_PlaySoundCue::AudioComponent' has a wrong offset!");
static_assert(offsetof(NPC_VoiceComponent_C_PlaySoundCue, Success) == 0x000010, "Member 'NPC_VoiceComponent_C_PlaySoundCue::Success' has a wrong offset!");
static_assert(offsetof(NPC_VoiceComponent_C_PlaySoundCue, CallFunc_IsValid_ReturnValue) == 0x000011, "Member 'NPC_VoiceComponent_C_PlaySoundCue::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(NPC_VoiceComponent_C_PlaySoundCue, CallFunc_GetOwner_ReturnValue) == 0x000018, "Member 'NPC_VoiceComponent_C_PlaySoundCue::CallFunc_GetOwner_ReturnValue' has a wrong offset!");
static_assert(offsetof(NPC_VoiceComponent_C_PlaySoundCue, CallFunc_K2_GetActorLocation_ReturnValue) == 0x000020, "Member 'NPC_VoiceComponent_C_PlaySoundCue::CallFunc_K2_GetActorLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(NPC_VoiceComponent_C_PlaySoundCue, CallFunc_IsValid_ReturnValue_1) == 0x000038, "Member 'NPC_VoiceComponent_C_PlaySoundCue::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");

struct NPC_VoiceComponent_C_PlayVoiceLine final
{
public:
	struct FGameplayTag                           Gameplay_Tag;
	uint8                                         Pad_4[0x4];
	class UAudioComponent*                        AudioComponent;
	bool                                          Success;
	uint8                                         Pad_11[0x7];
	class USoundBase*                             SoundToPlay;
	struct FGameplayTag                           CurrentVOTag;
	uint8                                         Pad_24[0x4];
	class UFortTaggedSoundBank*                   SoundBankToUse;
	class AActor*                                 CallFunc_GetOwner_ReturnValue;
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue;
	bool                                          CallFunc_IsValid_ReturnValue;
	bool                                          CallFunc_IsValid_ReturnValue_1;
	uint8                                         Pad_52[0x6];
	class UFortTaggedSoundBank*                   CallFunc_Internal_Get_Voice_Sound_Bank_Sound_Bank;
	bool                                          CallFunc_IsValid_ReturnValue_2;
	bool                                          CallFunc_IsGameplayTagValid_ReturnValue;
	uint8                                         Pad_62[0x6];
	double                                        CallFunc_GetTimeSeconds_ReturnValue;
	double                                        CallFunc_Subtract_DoubleDouble_ReturnValue;
	bool                                          CallFunc_Greater_DoubleDouble_ReturnValue;
	bool                                          CallFunc_BooleanAND_ReturnValue;
	uint8                                         Pad_7A[0x6];
	struct FGameplayTagContainer                  CallFunc_MakeGameplayTagContainerFromTag_ReturnValue;
	double                                        CallFunc_GetTimeSeconds_ReturnValue_1;
	class USoundBase*                             CallFunc_GetSoundToPlay_ReturnValue;
};
static_assert(alignof(NPC_VoiceComponent_C_PlayVoiceLine) == 0x000008, "Wrong alignment on NPC_VoiceComponent_C_PlayVoiceLine");
static_assert(sizeof(NPC_VoiceComponent_C_PlayVoiceLine) == 0x0000B0, "Wrong size on NPC_VoiceComponent_C_PlayVoiceLine");
static_assert(offsetof(NPC_VoiceComponent_C_PlayVoiceLine, Gameplay_Tag) == 0x000000, "Member 'NPC_VoiceComponent_C_PlayVoiceLine::Gameplay_Tag' has a wrong offset!");
static_assert(offsetof(NPC_VoiceComponent_C_PlayVoiceLine, AudioComponent) == 0x000008, "Member 'NPC_VoiceComponent_C_PlayVoiceLine::AudioComponent' has a wrong offset!");
static_assert(offsetof(NPC_VoiceComponent_C_PlayVoiceLine, Success) == 0x000010, "Member 'NPC_VoiceComponent_C_PlayVoiceLine::Success' has a wrong offset!");
static_assert(offsetof(NPC_VoiceComponent_C_PlayVoiceLine, SoundToPlay) == 0x000018, "Member 'NPC_VoiceComponent_C_PlayVoiceLine::SoundToPlay' has a wrong offset!");
static_assert(offsetof(NPC_VoiceComponent_C_PlayVoiceLine, CurrentVOTag) == 0x000020, "Member 'NPC_VoiceComponent_C_PlayVoiceLine::CurrentVOTag' has a wrong offset!");
static_assert(offsetof(NPC_VoiceComponent_C_PlayVoiceLine, SoundBankToUse) == 0x000028, "Member 'NPC_VoiceComponent_C_PlayVoiceLine::SoundBankToUse' has a wrong offset!");
static_assert(offsetof(NPC_VoiceComponent_C_PlayVoiceLine, CallFunc_GetOwner_ReturnValue) == 0x000030, "Member 'NPC_VoiceComponent_C_PlayVoiceLine::CallFunc_GetOwner_ReturnValue' has a wrong offset!");
static_assert(offsetof(NPC_VoiceComponent_C_PlayVoiceLine, CallFunc_K2_GetActorLocation_ReturnValue) == 0x000038, "Member 'NPC_VoiceComponent_C_PlayVoiceLine::CallFunc_K2_GetActorLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(NPC_VoiceComponent_C_PlayVoiceLine, CallFunc_IsValid_ReturnValue) == 0x000050, "Member 'NPC_VoiceComponent_C_PlayVoiceLine::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(NPC_VoiceComponent_C_PlayVoiceLine, CallFunc_IsValid_ReturnValue_1) == 0x000051, "Member 'NPC_VoiceComponent_C_PlayVoiceLine::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(NPC_VoiceComponent_C_PlayVoiceLine, CallFunc_Internal_Get_Voice_Sound_Bank_Sound_Bank) == 0x000058, "Member 'NPC_VoiceComponent_C_PlayVoiceLine::CallFunc_Internal_Get_Voice_Sound_Bank_Sound_Bank' has a wrong offset!");
static_assert(offsetof(NPC_VoiceComponent_C_PlayVoiceLine, CallFunc_IsValid_ReturnValue_2) == 0x000060, "Member 'NPC_VoiceComponent_C_PlayVoiceLine::CallFunc_IsValid_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(NPC_VoiceComponent_C_PlayVoiceLine, CallFunc_IsGameplayTagValid_ReturnValue) == 0x000061, "Member 'NPC_VoiceComponent_C_PlayVoiceLine::CallFunc_IsGameplayTagValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(NPC_VoiceComponent_C_PlayVoiceLine, CallFunc_GetTimeSeconds_ReturnValue) == 0x000068, "Member 'NPC_VoiceComponent_C_PlayVoiceLine::CallFunc_GetTimeSeconds_ReturnValue' has a wrong offset!");
static_assert(offsetof(NPC_VoiceComponent_C_PlayVoiceLine, CallFunc_Subtract_DoubleDouble_ReturnValue) == 0x000070, "Member 'NPC_VoiceComponent_C_PlayVoiceLine::CallFunc_Subtract_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(NPC_VoiceComponent_C_PlayVoiceLine, CallFunc_Greater_DoubleDouble_ReturnValue) == 0x000078, "Member 'NPC_VoiceComponent_C_PlayVoiceLine::CallFunc_Greater_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(NPC_VoiceComponent_C_PlayVoiceLine, CallFunc_BooleanAND_ReturnValue) == 0x000079, "Member 'NPC_VoiceComponent_C_PlayVoiceLine::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(NPC_VoiceComponent_C_PlayVoiceLine, CallFunc_MakeGameplayTagContainerFromTag_ReturnValue) == 0x000080, "Member 'NPC_VoiceComponent_C_PlayVoiceLine::CallFunc_MakeGameplayTagContainerFromTag_ReturnValue' has a wrong offset!");
static_assert(offsetof(NPC_VoiceComponent_C_PlayVoiceLine, CallFunc_GetTimeSeconds_ReturnValue_1) == 0x0000A0, "Member 'NPC_VoiceComponent_C_PlayVoiceLine::CallFunc_GetTimeSeconds_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(NPC_VoiceComponent_C_PlayVoiceLine, CallFunc_GetSoundToPlay_ReturnValue) == 0x0000A8, "Member 'NPC_VoiceComponent_C_PlayVoiceLine::CallFunc_GetSoundToPlay_ReturnValue' has a wrong offset!");

struct NPC_VoiceComponent_C_SetSourceEffectChainToApply final
{
public:
	class USoundEffectSourcePresetChain*          SourceEffectChain;
};
static_assert(alignof(NPC_VoiceComponent_C_SetSourceEffectChainToApply) == 0x000008, "Wrong alignment on NPC_VoiceComponent_C_SetSourceEffectChainToApply");
static_assert(sizeof(NPC_VoiceComponent_C_SetSourceEffectChainToApply) == 0x000008, "Wrong size on NPC_VoiceComponent_C_SetSourceEffectChainToApply");
static_assert(offsetof(NPC_VoiceComponent_C_SetSourceEffectChainToApply, SourceEffectChain) == 0x000000, "Member 'NPC_VoiceComponent_C_SetSourceEffectChainToApply::SourceEffectChain' has a wrong offset!");

}
