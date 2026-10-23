#pragma once

#include "Basic.hpp"

#include "TemplateSequence_classes.hpp"
#include "TemplateSequence_parameters.hpp"

namespace SDK
{

void ATemplateSequenceActor::SetBinding(class AActor* Actor, bool bOverridesDefault)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TemplateSequenceActor", "SetBinding");

	Params::TemplateSequenceActor_SetBinding Parms{};

	Parms.Actor = Actor;
	Parms.bOverridesDefault = bOverridesDefault;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void ATemplateSequenceActor::SetSequence(class UTemplateSequence* InSequence)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TemplateSequenceActor", "SetSequence");

	Params::TemplateSequenceActor_SetSequence Parms{};

	Parms.InSequence = InSequence;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

class UTemplateSequence* ATemplateSequenceActor::GetSequence() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TemplateSequenceActor", "GetSequence");

	Params::TemplateSequenceActor_GetSequence Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

class UTemplateSequencePlayer* ATemplateSequenceActor::GetSequencePlayer() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TemplateSequenceActor", "GetSequencePlayer");

	Params::TemplateSequenceActor_GetSequencePlayer Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

class UTemplateSequence* ATemplateSequenceActor::LoadSequence() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TemplateSequenceActor", "LoadSequence");

	Params::TemplateSequenceActor_LoadSequence Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

class UTemplateSequencePlayer* UTemplateSequencePlayer::CreateTemplateSequencePlayer(class UObject* WorldContextObject, class UTemplateSequence* TemplateSequence, const struct FMovieSceneSequencePlaybackSettings& Settings, class ATemplateSequenceActor** OutActor)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("TemplateSequencePlayer", "CreateTemplateSequencePlayer");

	Params::TemplateSequencePlayer_CreateTemplateSequencePlayer Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.TemplateSequence = TemplateSequence;
	Parms.Settings = std::move(Settings);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	if (OutActor != nullptr)
		*OutActor = Parms.OutActor;

	return Parms.ReturnValue;
}

struct FMinimalViewInfo USequenceCameraShakeTestUtil::GetCameraCachePOV(class APlayerController* PlayerController)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("SequenceCameraShakeTestUtil", "GetCameraCachePOV");

	Params::SequenceCameraShakeTestUtil_GetCameraCachePOV Parms{};

	Parms.PlayerController = PlayerController;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

struct FMinimalViewInfo USequenceCameraShakeTestUtil::GetLastFrameCameraCachePOV(class APlayerController* PlayerController)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("SequenceCameraShakeTestUtil", "GetLastFrameCameraCachePOV");

	Params::SequenceCameraShakeTestUtil_GetLastFrameCameraCachePOV Parms{};

	Parms.PlayerController = PlayerController;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

bool USequenceCameraShakeTestUtil::GetPostProcessBlendCache(class APlayerController* PlayerController, int32 PPIndex, struct FPostProcessSettings* OutPPSettings, float* OutPPBlendWeight)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("SequenceCameraShakeTestUtil", "GetPostProcessBlendCache");

	Params::SequenceCameraShakeTestUtil_GetPostProcessBlendCache Parms{};

	Parms.PlayerController = PlayerController;
	Parms.PPIndex = PPIndex;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	if (OutPPSettings != nullptr)
		*OutPPSettings = std::move(Parms.OutPPSettings);

	if (OutPPBlendWeight != nullptr)
		*OutPPBlendWeight = Parms.OutPPBlendWeight;

	return Parms.ReturnValue;
}

}
