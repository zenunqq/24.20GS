#pragma once

#include "Basic.hpp"

#include "NPC_VoiceComponent_classes.hpp"
#include "NPC_VoiceComponent_parameters.hpp"

namespace SDK
{

void UNPC_VoiceComponent_C::Deprecated_Set_Sound_Bank(class UFortTaggedSoundBank* SoundBank)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NPC_VoiceComponent_C", "Deprecated Set Sound Bank");

	Params::NPC_VoiceComponent_C_Deprecated_Set_Sound_Bank Parms{};

	Parms.SoundBank = SoundBank;

	UObject::ProcessEvent(Func, &Parms);
}

void UNPC_VoiceComponent_C::Internal_Get_Voice_Sound_Bank(class UFortTaggedSoundBank** Sound_Bank)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NPC_VoiceComponent_C", "Internal Get Voice Sound Bank");

	Params::NPC_VoiceComponent_C_Internal_Get_Voice_Sound_Bank Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Sound_Bank != nullptr)
		*Sound_Bank = Parms.Sound_Bank;
}

void UNPC_VoiceComponent_C::PlaySoundCue(class USoundCue* SoundToPlay, class UAudioComponent* AudioComponent, bool* Success)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NPC_VoiceComponent_C", "PlaySoundCue");

	Params::NPC_VoiceComponent_C_PlaySoundCue Parms{};

	Parms.SoundToPlay = SoundToPlay;
	Parms.AudioComponent = AudioComponent;

	UObject::ProcessEvent(Func, &Parms);

	if (Success != nullptr)
		*Success = Parms.Success;
}

void UNPC_VoiceComponent_C::PlayVoiceLine(const struct FGameplayTag& Gameplay_Tag, class UAudioComponent* AudioComponent, bool* Success)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NPC_VoiceComponent_C", "PlayVoiceLine");

	Params::NPC_VoiceComponent_C_PlayVoiceLine Parms{};

	Parms.Gameplay_Tag = std::move(Gameplay_Tag);
	Parms.AudioComponent = AudioComponent;

	UObject::ProcessEvent(Func, &Parms);

	if (Success != nullptr)
		*Success = Parms.Success;
}

void UNPC_VoiceComponent_C::SetSourceEffectChainToApply(class USoundEffectSourcePresetChain* SourceEffectChain)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NPC_VoiceComponent_C", "SetSourceEffectChainToApply");

	Params::NPC_VoiceComponent_C_SetSourceEffectChainToApply Parms{};

	Parms.SourceEffectChain = SourceEffectChain;

	UObject::ProcessEvent(Func, &Parms);
}

}
