#pragma once

#include "Basic.hpp"

#include "MovieSceneTracks_classes.hpp"
#include "MovieSceneTracks_parameters.hpp"

namespace SDK
{

struct FTransform IMovieSceneTransformOrigin::BP_GetTransformOrigin() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MovieSceneTransformOrigin", "BP_GetTransformOrigin");

	Params::MovieSceneTransformOrigin_BP_GetTransformOrigin Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

void UMovieScene3DConstraintSection::SetConstraintBindingID(const struct FMovieSceneObjectBindingID& InConstraintBindingID)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MovieScene3DConstraintSection", "SetConstraintBindingID");

	Params::MovieScene3DConstraintSection_SetConstraintBindingID Parms{};

	Parms.InConstraintBindingID = std::move(InConstraintBindingID);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

const struct FMovieSceneObjectBindingID UMovieScene3DConstraintSection::GetConstraintBindingID() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MovieScene3DConstraintSection", "GetConstraintBindingID");

	Params::MovieScene3DConstraintSection_GetConstraintBindingID Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

void UMovieSceneAudioSection::SetSound(class USoundBase* InSound)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MovieSceneAudioSection", "SetSound");

	Params::MovieSceneAudioSection_SetSound Parms{};

	Parms.InSound = InSound;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UMovieSceneAudioSection::SetStartOffset(const struct FFrameNumber& InStartOffset)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MovieSceneAudioSection", "SetStartOffset");

	Params::MovieSceneAudioSection_SetStartOffset Parms{};

	Parms.InStartOffset = std::move(InStartOffset);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

class USoundBase* UMovieSceneAudioSection::GetSound() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MovieSceneAudioSection", "GetSound");

	Params::MovieSceneAudioSection_GetSound Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

struct FFrameNumber UMovieSceneAudioSection::GetStartOffset() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MovieSceneAudioSection", "GetStartOffset");

	Params::MovieSceneAudioSection_GetStartOffset Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

void UMovieSceneCameraCutSection::SetCameraBindingID(const struct FMovieSceneObjectBindingID& InCameraBindingID)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MovieSceneCameraCutSection", "SetCameraBindingID");

	Params::MovieSceneCameraCutSection_SetCameraBindingID Parms{};

	Parms.InCameraBindingID = std::move(InCameraBindingID);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

const struct FMovieSceneObjectBindingID UMovieSceneCameraCutSection::GetCameraBindingID() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MovieSceneCameraCutSection", "GetCameraBindingID");

	Params::MovieSceneCameraCutSection_GetCameraBindingID Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

void UMovieSceneCinematicShotSection::SetShotDisplayName(const class FString& InShotDisplayName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MovieSceneCinematicShotSection", "SetShotDisplayName");

	Params::MovieSceneCinematicShotSection_SetShotDisplayName Parms{};

	Parms.InShotDisplayName = std::move(InShotDisplayName);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

class FString UMovieSceneCinematicShotSection::GetShotDisplayName() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MovieSceneCinematicShotSection", "GetShotDisplayName");

	Params::MovieSceneCinematicShotSection_GetShotDisplayName Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

void UMovieSceneCVarSection::SetFromString(const class FString& InString)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MovieSceneCVarSection", "SetFromString");

	Params::MovieSceneCVarSection_SetFromString Parms{};

	Parms.InString = std::move(InString);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

class FString UMovieSceneCVarSection::GetString() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MovieSceneCVarSection", "GetString");

	Params::MovieSceneCVarSection_GetString Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

void UMovieSceneDataLayerSection::SetDataLayerAssets(const TArray<class UDataLayerAsset*>& InDataLayerAssets)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MovieSceneDataLayerSection", "SetDataLayerAssets");

	Params::MovieSceneDataLayerSection_SetDataLayerAssets Parms{};

	Parms.InDataLayerAssets = std::move(InDataLayerAssets);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UMovieSceneDataLayerSection::SetDataLayers(const TArray<struct FActorDataLayer>& InDataLayers)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MovieSceneDataLayerSection", "SetDataLayers");

	Params::MovieSceneDataLayerSection_SetDataLayers Parms{};

	Parms.InDataLayers = std::move(InDataLayers);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UMovieSceneDataLayerSection::SetDesiredState(EDataLayerRuntimeState InDesiredState)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MovieSceneDataLayerSection", "SetDesiredState");

	Params::MovieSceneDataLayerSection_SetDesiredState Parms{};

	Parms.InDesiredState = InDesiredState;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UMovieSceneDataLayerSection::SetFlushOnUnload(bool bFlushOnUnload_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MovieSceneDataLayerSection", "SetFlushOnUnload");

	Params::MovieSceneDataLayerSection_SetFlushOnUnload Parms{};

	Parms.bFlushOnUnload_0 = bFlushOnUnload_0;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UMovieSceneDataLayerSection::SetPrerollState(EDataLayerRuntimeState InPrerollState)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MovieSceneDataLayerSection", "SetPrerollState");

	Params::MovieSceneDataLayerSection_SetPrerollState Parms{};

	Parms.InPrerollState = InPrerollState;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

const TArray<class UDataLayerAsset*> UMovieSceneDataLayerSection::GetDataLayerAssets() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MovieSceneDataLayerSection", "GetDataLayerAssets");

	Params::MovieSceneDataLayerSection_GetDataLayerAssets Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

const TArray<struct FActorDataLayer> UMovieSceneDataLayerSection::GetDataLayers() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MovieSceneDataLayerSection", "GetDataLayers");

	Params::MovieSceneDataLayerSection_GetDataLayers Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

EDataLayerRuntimeState UMovieSceneDataLayerSection::GetDesiredState() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MovieSceneDataLayerSection", "GetDesiredState");

	Params::MovieSceneDataLayerSection_GetDesiredState Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

bool UMovieSceneDataLayerSection::GetFlushOnUnload() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MovieSceneDataLayerSection", "GetFlushOnUnload");

	Params::MovieSceneDataLayerSection_GetFlushOnUnload Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

EDataLayerRuntimeState UMovieSceneDataLayerSection::GetPrerollState() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MovieSceneDataLayerSection", "GetPrerollState");

	Params::MovieSceneDataLayerSection_GetPrerollState Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

void UMovieSceneLevelVisibilitySection::SetLevelNames(const TArray<class FName>& InLevelNames)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MovieSceneLevelVisibilitySection", "SetLevelNames");

	Params::MovieSceneLevelVisibilitySection_SetLevelNames Parms{};

	Parms.InLevelNames = std::move(InLevelNames);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UMovieSceneLevelVisibilitySection::SetVisibility(ELevelVisibility InVisibility)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MovieSceneLevelVisibilitySection", "SetVisibility");

	Params::MovieSceneLevelVisibilitySection_SetVisibility Parms{};

	Parms.InVisibility = InVisibility;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

const TArray<class FName> UMovieSceneLevelVisibilitySection::GetLevelNames() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MovieSceneLevelVisibilitySection", "GetLevelNames");

	Params::MovieSceneLevelVisibilitySection_GetLevelNames Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

ELevelVisibility UMovieSceneLevelVisibilitySection::GetVisibility() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MovieSceneLevelVisibilitySection", "GetVisibility");

	Params::MovieSceneLevelVisibilitySection_GetVisibility Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

void UMovieSceneParameterSection::AddBoolParameterKey(class FName InParameterName, const struct FFrameNumber& InTime, bool InValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MovieSceneParameterSection", "AddBoolParameterKey");

	Params::MovieSceneParameterSection_AddBoolParameterKey Parms{};

	Parms.InParameterName = InParameterName;
	Parms.InTime = std::move(InTime);
	Parms.InValue = InValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UMovieSceneParameterSection::AddColorParameterKey(class FName InParameterName, const struct FFrameNumber& InTime, const struct FLinearColor& InValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MovieSceneParameterSection", "AddColorParameterKey");

	Params::MovieSceneParameterSection_AddColorParameterKey Parms{};

	Parms.InParameterName = InParameterName;
	Parms.InTime = std::move(InTime);
	Parms.InValue = std::move(InValue);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UMovieSceneParameterSection::AddScalarParameterKey(class FName InParameterName, const struct FFrameNumber& InTime, float InValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MovieSceneParameterSection", "AddScalarParameterKey");

	Params::MovieSceneParameterSection_AddScalarParameterKey Parms{};

	Parms.InParameterName = InParameterName;
	Parms.InTime = std::move(InTime);
	Parms.InValue = InValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UMovieSceneParameterSection::AddTransformParameterKey(class FName InParameterName, const struct FFrameNumber& InTime, const struct FTransform& InValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MovieSceneParameterSection", "AddTransformParameterKey");

	Params::MovieSceneParameterSection_AddTransformParameterKey Parms{};

	Parms.InParameterName = InParameterName;
	Parms.InTime = std::move(InTime);
	Parms.InValue = std::move(InValue);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UMovieSceneParameterSection::AddVector2DParameterKey(class FName InParameterName, const struct FFrameNumber& InTime, const struct FVector2D& InValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MovieSceneParameterSection", "AddVector2DParameterKey");

	Params::MovieSceneParameterSection_AddVector2DParameterKey Parms{};

	Parms.InParameterName = InParameterName;
	Parms.InTime = std::move(InTime);
	Parms.InValue = std::move(InValue);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UMovieSceneParameterSection::AddVectorParameterKey(class FName InParameterName, const struct FFrameNumber& InTime, const struct FVector& InValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MovieSceneParameterSection", "AddVectorParameterKey");

	Params::MovieSceneParameterSection_AddVectorParameterKey Parms{};

	Parms.InParameterName = InParameterName;
	Parms.InTime = std::move(InTime);
	Parms.InValue = std::move(InValue);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

bool UMovieSceneParameterSection::RemoveBoolParameter(class FName InParameterName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MovieSceneParameterSection", "RemoveBoolParameter");

	Params::MovieSceneParameterSection_RemoveBoolParameter Parms{};

	Parms.InParameterName = InParameterName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

bool UMovieSceneParameterSection::RemoveColorParameter(class FName InParameterName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MovieSceneParameterSection", "RemoveColorParameter");

	Params::MovieSceneParameterSection_RemoveColorParameter Parms{};

	Parms.InParameterName = InParameterName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

bool UMovieSceneParameterSection::RemoveScalarParameter(class FName InParameterName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MovieSceneParameterSection", "RemoveScalarParameter");

	Params::MovieSceneParameterSection_RemoveScalarParameter Parms{};

	Parms.InParameterName = InParameterName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

bool UMovieSceneParameterSection::RemoveTransformParameter(class FName InParameterName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MovieSceneParameterSection", "RemoveTransformParameter");

	Params::MovieSceneParameterSection_RemoveTransformParameter Parms{};

	Parms.InParameterName = InParameterName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

bool UMovieSceneParameterSection::RemoveVector2DParameter(class FName InParameterName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MovieSceneParameterSection", "RemoveVector2DParameter");

	Params::MovieSceneParameterSection_RemoveVector2DParameter Parms{};

	Parms.InParameterName = InParameterName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

bool UMovieSceneParameterSection::RemoveVectorParameter(class FName InParameterName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MovieSceneParameterSection", "RemoveVectorParameter");

	Params::MovieSceneParameterSection_RemoveVectorParameter Parms{};

	Parms.InParameterName = InParameterName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

void UMovieSceneParameterSection::GetParameterNames(TSet<class FName>* ParameterNames) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MovieSceneParameterSection", "GetParameterNames");

	Params::MovieSceneParameterSection_GetParameterNames Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	if (ParameterNames != nullptr)
		*ParameterNames = std::move(Parms.ParameterNames);
}

class UMovieSceneAsyncAction_SequencePrediction* UMovieSceneAsyncAction_SequencePrediction::PredictLocalTransformAtFrame(class UMovieSceneSequencePlayer* Player, class USceneComponent* TargetComponent, const struct FFrameTime& FrameTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("MovieSceneAsyncAction_SequencePrediction", "PredictLocalTransformAtFrame");

	Params::MovieSceneAsyncAction_SequencePrediction_PredictLocalTransformAtFrame Parms{};

	Parms.Player = Player;
	Parms.TargetComponent = TargetComponent;
	Parms.FrameTime = std::move(FrameTime);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

class UMovieSceneAsyncAction_SequencePrediction* UMovieSceneAsyncAction_SequencePrediction::PredictLocalTransformAtTime(class UMovieSceneSequencePlayer* Player, class USceneComponent* TargetComponent, float TimeInSeconds)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("MovieSceneAsyncAction_SequencePrediction", "PredictLocalTransformAtTime");

	Params::MovieSceneAsyncAction_SequencePrediction_PredictLocalTransformAtTime Parms{};

	Parms.Player = Player;
	Parms.TargetComponent = TargetComponent;
	Parms.TimeInSeconds = TimeInSeconds;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

class UMovieSceneAsyncAction_SequencePrediction* UMovieSceneAsyncAction_SequencePrediction::PredictWorldTransformAtFrame(class UMovieSceneSequencePlayer* Player, class USceneComponent* TargetComponent, const struct FFrameTime& FrameTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("MovieSceneAsyncAction_SequencePrediction", "PredictWorldTransformAtFrame");

	Params::MovieSceneAsyncAction_SequencePrediction_PredictWorldTransformAtFrame Parms{};

	Parms.Player = Player;
	Parms.TargetComponent = TargetComponent;
	Parms.FrameTime = std::move(FrameTime);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

class UMovieSceneAsyncAction_SequencePrediction* UMovieSceneAsyncAction_SequencePrediction::PredictWorldTransformAtTime(class UMovieSceneSequencePlayer* Player, class USceneComponent* TargetComponent, float TimeInSeconds)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("MovieSceneAsyncAction_SequencePrediction", "PredictWorldTransformAtTime");

	Params::MovieSceneAsyncAction_SequencePrediction_PredictWorldTransformAtTime Parms{};

	Parms.Player = Player;
	Parms.TargetComponent = TargetComponent;
	Parms.TimeInSeconds = TimeInSeconds;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

}
