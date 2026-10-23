#pragma once

#include "Basic.hpp"

#include "B_CreatureAnimSoundLibraryContext_classes.hpp"
#include "B_CreatureAnimSoundLibraryContext_parameters.hpp"

namespace SDK
{

bool UB_CreatureAnimSoundLibraryContext_C::PlaySound(class USoundBase* sound, struct FSoundLibraryPlaySoundResult& OutResults)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_CreatureAnimSoundLibraryContext_C", "PlaySound");

	Params::B_CreatureAnimSoundLibraryContext_C_PlaySound Parms{};

	Parms.sound = sound;
	Parms.OutResults = std::move(OutResults);

	UObject::ProcessEvent(Func, &Parms);

	OutResults = std::move(Parms.OutResults);

	return Parms.ReturnValue;
}

}
