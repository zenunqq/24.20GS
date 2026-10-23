#pragma once

#include "Basic.hpp"

#include "BPI_NonParticipant_classes.hpp"
#include "BPI_NonParticipant_parameters.hpp"

namespace SDK
{

void IBPI_NonParticipant_C::PlayVoiceSoundByTag(const struct FGameplayTag& SoundBankTag)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPI_NonParticipant_C", "PlayVoiceSoundByTag");

	Params::BPI_NonParticipant_C_PlayVoiceSoundByTag Parms{};

	Parms.SoundBankTag = std::move(SoundBankTag);

	UObject::ProcessEvent(Func, &Parms);
}

}
