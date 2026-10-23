#pragma once

#include "Basic.hpp"

#include "CRD_CinematicSequence_classes.hpp"
#include "CRD_CinematicSequence_parameters.hpp"

namespace SDK
{

void ACinematicSequenceDeviceBase::HandleSequencePlayerCreated(class ULevelSequencePlayer* Player)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CinematicSequenceDeviceBase", "HandleSequencePlayerCreated");

	Params::CinematicSequenceDeviceBase_HandleSequencePlayerCreated Parms{};

	Parms.Player = Player;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void ACinematicSequenceDeviceBase::Pause()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CinematicSequenceDeviceBase", "Pause");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void ACinematicSequenceDeviceBase::Play()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CinematicSequenceDeviceBase", "Play");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void ACinematicSequenceDeviceBase::Stop()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CinematicSequenceDeviceBase", "Stop");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

class UMovieSceneSequencePlayer* ACinematicSequenceDeviceBase::GetSequencePlayer() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CinematicSequenceDeviceBase", "GetSequencePlayer");

	Params::CinematicSequenceDeviceBase_GetSequencePlayer Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

}
