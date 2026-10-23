#pragma once

#include "Basic.hpp"

#include "FortniteAI_classes.hpp"

namespace SDK
{

class UNPC_VoiceComponent_C final : public UFortAIComponent_Voice
{
public:
	class UFortTaggedSoundBank*                   DeprecatedBPSoundBank;
	class USceneComponent*                        AttachComponent;
	double                                        TriggerTimeThreshold;
	double                                        LastTriggerTime;
	class UAudioComponent*                        Audio_Component;
	class USoundEffectSourcePresetChain*          SourceChainToApply;

public:
	void Deprecated_Set_Sound_Bank(class UFortTaggedSoundBank* SoundBank);
	void Internal_Get_Voice_Sound_Bank(class UFortTaggedSoundBank** Sound_Bank);
	void PlaySoundCue(class USoundCue* SoundToPlay, class UAudioComponent* AudioComponent, bool* Success);
	void PlayVoiceLine(const struct FGameplayTag& Gameplay_Tag, class UAudioComponent* AudioComponent, bool* Success);
	void SetSourceEffectChainToApply(class USoundEffectSourcePresetChain* SourceEffectChain);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"NPC_VoiceComponent_C">();
	}
	static class UNPC_VoiceComponent_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UNPC_VoiceComponent_C>();
	}
};
static_assert(alignof(UNPC_VoiceComponent_C) == 0x000008, "Wrong alignment on UNPC_VoiceComponent_C");
static_assert(sizeof(UNPC_VoiceComponent_C) == 0x0000D8, "Wrong size on UNPC_VoiceComponent_C");
static_assert(offsetof(UNPC_VoiceComponent_C, DeprecatedBPSoundBank) == 0x0000A8, "Member 'UNPC_VoiceComponent_C::DeprecatedBPSoundBank' has a wrong offset!");
static_assert(offsetof(UNPC_VoiceComponent_C, AttachComponent) == 0x0000B0, "Member 'UNPC_VoiceComponent_C::AttachComponent' has a wrong offset!");
static_assert(offsetof(UNPC_VoiceComponent_C, TriggerTimeThreshold) == 0x0000B8, "Member 'UNPC_VoiceComponent_C::TriggerTimeThreshold' has a wrong offset!");
static_assert(offsetof(UNPC_VoiceComponent_C, LastTriggerTime) == 0x0000C0, "Member 'UNPC_VoiceComponent_C::LastTriggerTime' has a wrong offset!");
static_assert(offsetof(UNPC_VoiceComponent_C, Audio_Component) == 0x0000C8, "Member 'UNPC_VoiceComponent_C::Audio_Component' has a wrong offset!");
static_assert(offsetof(UNPC_VoiceComponent_C, SourceChainToApply) == 0x0000D0, "Member 'UNPC_VoiceComponent_C::SourceChainToApply' has a wrong offset!");

}
