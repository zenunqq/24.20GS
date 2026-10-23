#pragma once

#include "Basic.hpp"

#include "SequencerScripting_classes.hpp"
#include "SequencerScripting_parameters.hpp"

namespace SDK
{

void UMovieSceneScriptingActorReferenceKey::SetTime(const struct FFrameNumber& NewFrameNumber, float SubFrame, ESequenceTimeUnit TimeUnit)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MovieSceneScriptingActorReferenceKey", "SetTime");

	Params::MovieSceneScriptingActorReferenceKey_SetTime Parms{};

	Parms.NewFrameNumber = std::move(NewFrameNumber);
	Parms.SubFrame = SubFrame;
	Parms.TimeUnit = TimeUnit;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UMovieSceneScriptingActorReferenceKey::SetValue(const struct FMovieSceneObjectBindingID& InNewValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MovieSceneScriptingActorReferenceKey", "SetValue");

	Params::MovieSceneScriptingActorReferenceKey_SetValue Parms{};

	Parms.InNewValue = std::move(InNewValue);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

struct FFrameTime UMovieSceneScriptingActorReferenceKey::GetTime(ESequenceTimeUnit TimeUnit) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MovieSceneScriptingActorReferenceKey", "GetTime");

	Params::MovieSceneScriptingActorReferenceKey_GetTime Parms{};

	Parms.TimeUnit = TimeUnit;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

struct FMovieSceneObjectBindingID UMovieSceneScriptingActorReferenceKey::GetValue() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MovieSceneScriptingActorReferenceKey", "GetValue");

	Params::MovieSceneScriptingActorReferenceKey_GetValue Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

class UMovieSceneScriptingActorReferenceKey* UMovieSceneScriptingActorReferenceChannel::AddKey(const struct FFrameNumber& InTime, const struct FMovieSceneObjectBindingID& NewValue, float SubFrame, ESequenceTimeUnit TimeUnit)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MovieSceneScriptingActorReferenceChannel", "AddKey");

	Params::MovieSceneScriptingActorReferenceChannel_AddKey Parms{};

	Parms.InTime = std::move(InTime);
	Parms.NewValue = std::move(NewValue);
	Parms.SubFrame = SubFrame;
	Parms.TimeUnit = TimeUnit;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

void UMovieSceneScriptingActorReferenceChannel::RemoveDefault()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MovieSceneScriptingActorReferenceChannel", "RemoveDefault");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void UMovieSceneScriptingActorReferenceChannel::RemoveKey(class UMovieSceneScriptingKey* Key)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MovieSceneScriptingActorReferenceChannel", "RemoveKey");

	Params::MovieSceneScriptingActorReferenceChannel_RemoveKey Parms{};

	Parms.Key = Key;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UMovieSceneScriptingActorReferenceChannel::SetDefault(const struct FMovieSceneObjectBindingID& InDefaultValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MovieSceneScriptingActorReferenceChannel", "SetDefault");

	Params::MovieSceneScriptingActorReferenceChannel_SetDefault Parms{};

	Parms.InDefaultValue = std::move(InDefaultValue);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

struct FMovieSceneObjectBindingID UMovieSceneScriptingActorReferenceChannel::GetDefault() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MovieSceneScriptingActorReferenceChannel", "GetDefault");

	Params::MovieSceneScriptingActorReferenceChannel_GetDefault Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

TArray<class UMovieSceneScriptingKey*> UMovieSceneScriptingActorReferenceChannel::GetKeys() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MovieSceneScriptingActorReferenceChannel", "GetKeys");

	Params::MovieSceneScriptingActorReferenceChannel_GetKeys Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

bool UMovieSceneScriptingActorReferenceChannel::HasDefault() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MovieSceneScriptingActorReferenceChannel", "HasDefault");

	Params::MovieSceneScriptingActorReferenceChannel_HasDefault Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

void UMovieSceneScriptingBoolKey::SetTime(const struct FFrameNumber& NewFrameNumber, float SubFrame, ESequenceTimeUnit TimeUnit)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MovieSceneScriptingBoolKey", "SetTime");

	Params::MovieSceneScriptingBoolKey_SetTime Parms{};

	Parms.NewFrameNumber = std::move(NewFrameNumber);
	Parms.SubFrame = SubFrame;
	Parms.TimeUnit = TimeUnit;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UMovieSceneScriptingBoolKey::SetValue(bool InNewValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MovieSceneScriptingBoolKey", "SetValue");

	Params::MovieSceneScriptingBoolKey_SetValue Parms{};

	Parms.InNewValue = InNewValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

struct FFrameTime UMovieSceneScriptingBoolKey::GetTime(ESequenceTimeUnit TimeUnit) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MovieSceneScriptingBoolKey", "GetTime");

	Params::MovieSceneScriptingBoolKey_GetTime Parms{};

	Parms.TimeUnit = TimeUnit;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

bool UMovieSceneScriptingBoolKey::GetValue() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MovieSceneScriptingBoolKey", "GetValue");

	Params::MovieSceneScriptingBoolKey_GetValue Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

class UMovieSceneScriptingBoolKey* UMovieSceneScriptingBoolChannel::AddKey(const struct FFrameNumber& InTime, bool NewValue, float SubFrame, ESequenceTimeUnit TimeUnit)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MovieSceneScriptingBoolChannel", "AddKey");

	Params::MovieSceneScriptingBoolChannel_AddKey Parms{};

	Parms.InTime = std::move(InTime);
	Parms.NewValue = NewValue;
	Parms.SubFrame = SubFrame;
	Parms.TimeUnit = TimeUnit;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

void UMovieSceneScriptingBoolChannel::RemoveDefault()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MovieSceneScriptingBoolChannel", "RemoveDefault");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void UMovieSceneScriptingBoolChannel::RemoveKey(class UMovieSceneScriptingKey* Key)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MovieSceneScriptingBoolChannel", "RemoveKey");

	Params::MovieSceneScriptingBoolChannel_RemoveKey Parms{};

	Parms.Key = Key;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UMovieSceneScriptingBoolChannel::SetDefault(bool InDefaultValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MovieSceneScriptingBoolChannel", "SetDefault");

	Params::MovieSceneScriptingBoolChannel_SetDefault Parms{};

	Parms.InDefaultValue = InDefaultValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

struct FSequencerScriptingRange UMovieSceneScriptingBoolChannel::ComputeEffectiveRange() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MovieSceneScriptingBoolChannel", "ComputeEffectiveRange");

	Params::MovieSceneScriptingBoolChannel_ComputeEffectiveRange Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

TArray<bool> UMovieSceneScriptingBoolChannel::EvaluateKeys(const struct FSequencerScriptingRange& Range, const struct FFrameRate& FrameRate) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MovieSceneScriptingBoolChannel", "EvaluateKeys");

	Params::MovieSceneScriptingBoolChannel_EvaluateKeys Parms{};

	Parms.Range = std::move(Range);
	Parms.FrameRate = std::move(FrameRate);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

bool UMovieSceneScriptingBoolChannel::GetDefault() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MovieSceneScriptingBoolChannel", "GetDefault");

	Params::MovieSceneScriptingBoolChannel_GetDefault Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

TArray<class UMovieSceneScriptingKey*> UMovieSceneScriptingBoolChannel::GetKeys() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MovieSceneScriptingBoolChannel", "GetKeys");

	Params::MovieSceneScriptingBoolChannel_GetKeys Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

int32 UMovieSceneScriptingBoolChannel::GetNumKeys() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MovieSceneScriptingBoolChannel", "GetNumKeys");

	Params::MovieSceneScriptingBoolChannel_GetNumKeys Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

bool UMovieSceneScriptingBoolChannel::HasDefault() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MovieSceneScriptingBoolChannel", "HasDefault");

	Params::MovieSceneScriptingBoolChannel_HasDefault Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

void UMovieSceneScriptingByteKey::SetTime(const struct FFrameNumber& NewFrameNumber, float SubFrame, ESequenceTimeUnit TimeUnit)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MovieSceneScriptingByteKey", "SetTime");

	Params::MovieSceneScriptingByteKey_SetTime Parms{};

	Parms.NewFrameNumber = std::move(NewFrameNumber);
	Parms.SubFrame = SubFrame;
	Parms.TimeUnit = TimeUnit;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UMovieSceneScriptingByteKey::SetValue(uint8 InNewValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MovieSceneScriptingByteKey", "SetValue");

	Params::MovieSceneScriptingByteKey_SetValue Parms{};

	Parms.InNewValue = InNewValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

struct FFrameTime UMovieSceneScriptingByteKey::GetTime(ESequenceTimeUnit TimeUnit) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MovieSceneScriptingByteKey", "GetTime");

	Params::MovieSceneScriptingByteKey_GetTime Parms{};

	Parms.TimeUnit = TimeUnit;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

uint8 UMovieSceneScriptingByteKey::GetValue() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MovieSceneScriptingByteKey", "GetValue");

	Params::MovieSceneScriptingByteKey_GetValue Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

class UMovieSceneScriptingByteKey* UMovieSceneScriptingByteChannel::AddKey(const struct FFrameNumber& InTime, uint8 NewValue, float SubFrame, ESequenceTimeUnit TimeUnit, EMovieSceneKeyInterpolation InInterpolation)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MovieSceneScriptingByteChannel", "AddKey");

	Params::MovieSceneScriptingByteChannel_AddKey Parms{};

	Parms.InTime = std::move(InTime);
	Parms.NewValue = NewValue;
	Parms.SubFrame = SubFrame;
	Parms.TimeUnit = TimeUnit;
	Parms.InInterpolation = InInterpolation;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

void UMovieSceneScriptingByteChannel::RemoveDefault()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MovieSceneScriptingByteChannel", "RemoveDefault");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void UMovieSceneScriptingByteChannel::RemoveKey(class UMovieSceneScriptingKey* Key)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MovieSceneScriptingByteChannel", "RemoveKey");

	Params::MovieSceneScriptingByteChannel_RemoveKey Parms{};

	Parms.Key = Key;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UMovieSceneScriptingByteChannel::SetDefault(uint8 InDefaultValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MovieSceneScriptingByteChannel", "SetDefault");

	Params::MovieSceneScriptingByteChannel_SetDefault Parms{};

	Parms.InDefaultValue = InDefaultValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

uint8 UMovieSceneScriptingByteChannel::GetDefault() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MovieSceneScriptingByteChannel", "GetDefault");

	Params::MovieSceneScriptingByteChannel_GetDefault Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

TArray<class UMovieSceneScriptingKey*> UMovieSceneScriptingByteChannel::GetKeys() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MovieSceneScriptingByteChannel", "GetKeys");

	Params::MovieSceneScriptingByteChannel_GetKeys Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

bool UMovieSceneScriptingByteChannel::HasDefault() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MovieSceneScriptingByteChannel", "HasDefault");

	Params::MovieSceneScriptingByteChannel_HasDefault Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

void UMovieSceneScriptingDoubleKey::SetArriveTangent(float InNewValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MovieSceneScriptingDoubleKey", "SetArriveTangent");

	Params::MovieSceneScriptingDoubleKey_SetArriveTangent Parms{};

	Parms.InNewValue = InNewValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UMovieSceneScriptingDoubleKey::SetArriveTangentWeight(float InNewValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MovieSceneScriptingDoubleKey", "SetArriveTangentWeight");

	Params::MovieSceneScriptingDoubleKey_SetArriveTangentWeight Parms{};

	Parms.InNewValue = InNewValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UMovieSceneScriptingDoubleKey::SetInterpolationMode(ERichCurveInterpMode InNewValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MovieSceneScriptingDoubleKey", "SetInterpolationMode");

	Params::MovieSceneScriptingDoubleKey_SetInterpolationMode Parms{};

	Parms.InNewValue = InNewValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UMovieSceneScriptingDoubleKey::SetLeaveTangent(float InNewValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MovieSceneScriptingDoubleKey", "SetLeaveTangent");

	Params::MovieSceneScriptingDoubleKey_SetLeaveTangent Parms{};

	Parms.InNewValue = InNewValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UMovieSceneScriptingDoubleKey::SetLeaveTangentWeight(float InNewValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MovieSceneScriptingDoubleKey", "SetLeaveTangentWeight");

	Params::MovieSceneScriptingDoubleKey_SetLeaveTangentWeight Parms{};

	Parms.InNewValue = InNewValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UMovieSceneScriptingDoubleKey::SetTangentMode(ERichCurveTangentMode InNewValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MovieSceneScriptingDoubleKey", "SetTangentMode");

	Params::MovieSceneScriptingDoubleKey_SetTangentMode Parms{};

	Parms.InNewValue = InNewValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UMovieSceneScriptingDoubleKey::SetTangentWeightMode(ERichCurveTangentWeightMode InNewValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MovieSceneScriptingDoubleKey", "SetTangentWeightMode");

	Params::MovieSceneScriptingDoubleKey_SetTangentWeightMode Parms{};

	Parms.InNewValue = InNewValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UMovieSceneScriptingDoubleKey::SetTime(const struct FFrameNumber& NewFrameNumber, float SubFrame, ESequenceTimeUnit TimeUnit)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MovieSceneScriptingDoubleKey", "SetTime");

	Params::MovieSceneScriptingDoubleKey_SetTime Parms{};

	Parms.NewFrameNumber = std::move(NewFrameNumber);
	Parms.SubFrame = SubFrame;
	Parms.TimeUnit = TimeUnit;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UMovieSceneScriptingDoubleKey::SetValue(double InNewValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MovieSceneScriptingDoubleKey", "SetValue");

	Params::MovieSceneScriptingDoubleKey_SetValue Parms{};

	Parms.InNewValue = InNewValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

float UMovieSceneScriptingDoubleKey::GetArriveTangent() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MovieSceneScriptingDoubleKey", "GetArriveTangent");

	Params::MovieSceneScriptingDoubleKey_GetArriveTangent Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

float UMovieSceneScriptingDoubleKey::GetArriveTangentWeight() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MovieSceneScriptingDoubleKey", "GetArriveTangentWeight");

	Params::MovieSceneScriptingDoubleKey_GetArriveTangentWeight Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

ERichCurveInterpMode UMovieSceneScriptingDoubleKey::GetInterpolationMode() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MovieSceneScriptingDoubleKey", "GetInterpolationMode");

	Params::MovieSceneScriptingDoubleKey_GetInterpolationMode Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

float UMovieSceneScriptingDoubleKey::GetLeaveTangent() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MovieSceneScriptingDoubleKey", "GetLeaveTangent");

	Params::MovieSceneScriptingDoubleKey_GetLeaveTangent Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

float UMovieSceneScriptingDoubleKey::GetLeaveTangentWeight() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MovieSceneScriptingDoubleKey", "GetLeaveTangentWeight");

	Params::MovieSceneScriptingDoubleKey_GetLeaveTangentWeight Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

ERichCurveTangentMode UMovieSceneScriptingDoubleKey::GetTangentMode() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MovieSceneScriptingDoubleKey", "GetTangentMode");

	Params::MovieSceneScriptingDoubleKey_GetTangentMode Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

ERichCurveTangentWeightMode UMovieSceneScriptingDoubleKey::GetTangentWeightMode() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MovieSceneScriptingDoubleKey", "GetTangentWeightMode");

	Params::MovieSceneScriptingDoubleKey_GetTangentWeightMode Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

struct FFrameTime UMovieSceneScriptingDoubleKey::GetTime(ESequenceTimeUnit TimeUnit) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MovieSceneScriptingDoubleKey", "GetTime");

	Params::MovieSceneScriptingDoubleKey_GetTime Parms{};

	Parms.TimeUnit = TimeUnit;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

double UMovieSceneScriptingDoubleKey::GetValue() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MovieSceneScriptingDoubleKey", "GetValue");

	Params::MovieSceneScriptingDoubleKey_GetValue Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

class UMovieSceneScriptingDoubleKey* UMovieSceneScriptingDoubleChannel::AddKey(const struct FFrameNumber& InTime, double NewValue, float SubFrame, ESequenceTimeUnit TimeUnit, EMovieSceneKeyInterpolation InInterpolation)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MovieSceneScriptingDoubleChannel", "AddKey");

	Params::MovieSceneScriptingDoubleChannel_AddKey Parms{};

	Parms.InTime = std::move(InTime);
	Parms.NewValue = NewValue;
	Parms.SubFrame = SubFrame;
	Parms.TimeUnit = TimeUnit;
	Parms.InInterpolation = InInterpolation;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

void UMovieSceneScriptingDoubleChannel::RemoveDefault()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MovieSceneScriptingDoubleChannel", "RemoveDefault");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void UMovieSceneScriptingDoubleChannel::RemoveKey(class UMovieSceneScriptingKey* Key)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MovieSceneScriptingDoubleChannel", "RemoveKey");

	Params::MovieSceneScriptingDoubleChannel_RemoveKey Parms{};

	Parms.Key = Key;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UMovieSceneScriptingDoubleChannel::SetDefault(double InDefaultValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MovieSceneScriptingDoubleChannel", "SetDefault");

	Params::MovieSceneScriptingDoubleChannel_SetDefault Parms{};

	Parms.InDefaultValue = InDefaultValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UMovieSceneScriptingDoubleChannel::SetPostInfinityExtrapolation(ERichCurveExtrapolation InExtrapolation)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MovieSceneScriptingDoubleChannel", "SetPostInfinityExtrapolation");

	Params::MovieSceneScriptingDoubleChannel_SetPostInfinityExtrapolation Parms{};

	Parms.InExtrapolation = InExtrapolation;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UMovieSceneScriptingDoubleChannel::SetPreInfinityExtrapolation(ERichCurveExtrapolation InExtrapolation)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MovieSceneScriptingDoubleChannel", "SetPreInfinityExtrapolation");

	Params::MovieSceneScriptingDoubleChannel_SetPreInfinityExtrapolation Parms{};

	Parms.InExtrapolation = InExtrapolation;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

struct FSequencerScriptingRange UMovieSceneScriptingDoubleChannel::ComputeEffectiveRange() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MovieSceneScriptingDoubleChannel", "ComputeEffectiveRange");

	Params::MovieSceneScriptingDoubleChannel_ComputeEffectiveRange Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

TArray<double> UMovieSceneScriptingDoubleChannel::EvaluateKeys(const struct FSequencerScriptingRange& Range, const struct FFrameRate& FrameRate) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MovieSceneScriptingDoubleChannel", "EvaluateKeys");

	Params::MovieSceneScriptingDoubleChannel_EvaluateKeys Parms{};

	Parms.Range = std::move(Range);
	Parms.FrameRate = std::move(FrameRate);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

double UMovieSceneScriptingDoubleChannel::GetDefault() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MovieSceneScriptingDoubleChannel", "GetDefault");

	Params::MovieSceneScriptingDoubleChannel_GetDefault Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

TArray<class UMovieSceneScriptingKey*> UMovieSceneScriptingDoubleChannel::GetKeys() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MovieSceneScriptingDoubleChannel", "GetKeys");

	Params::MovieSceneScriptingDoubleChannel_GetKeys Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

int32 UMovieSceneScriptingDoubleChannel::GetNumKeys() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MovieSceneScriptingDoubleChannel", "GetNumKeys");

	Params::MovieSceneScriptingDoubleChannel_GetNumKeys Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

ERichCurveExtrapolation UMovieSceneScriptingDoubleChannel::GetPostInfinityExtrapolation() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MovieSceneScriptingDoubleChannel", "GetPostInfinityExtrapolation");

	Params::MovieSceneScriptingDoubleChannel_GetPostInfinityExtrapolation Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

ERichCurveExtrapolation UMovieSceneScriptingDoubleChannel::GetPreInfinityExtrapolation() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MovieSceneScriptingDoubleChannel", "GetPreInfinityExtrapolation");

	Params::MovieSceneScriptingDoubleChannel_GetPreInfinityExtrapolation Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

bool UMovieSceneScriptingDoubleChannel::HasDefault() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MovieSceneScriptingDoubleChannel", "HasDefault");

	Params::MovieSceneScriptingDoubleChannel_HasDefault Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

void UMovieSceneScriptingEventKey::SetTime(const struct FFrameNumber& NewFrameNumber, float SubFrame, ESequenceTimeUnit TimeUnit)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MovieSceneScriptingEventKey", "SetTime");

	Params::MovieSceneScriptingEventKey_SetTime Parms{};

	Parms.NewFrameNumber = std::move(NewFrameNumber);
	Parms.SubFrame = SubFrame;
	Parms.TimeUnit = TimeUnit;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UMovieSceneScriptingEventKey::SetValue(const struct FMovieSceneEvent& InNewValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MovieSceneScriptingEventKey", "SetValue");

	Params::MovieSceneScriptingEventKey_SetValue Parms{};

	Parms.InNewValue = std::move(InNewValue);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

struct FFrameTime UMovieSceneScriptingEventKey::GetTime(ESequenceTimeUnit TimeUnit) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MovieSceneScriptingEventKey", "GetTime");

	Params::MovieSceneScriptingEventKey_GetTime Parms{};

	Parms.TimeUnit = TimeUnit;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

struct FMovieSceneEvent UMovieSceneScriptingEventKey::GetValue() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MovieSceneScriptingEventKey", "GetValue");

	Params::MovieSceneScriptingEventKey_GetValue Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

class UMovieSceneScriptingEventKey* UMovieSceneScriptingEventChannel::AddKey(const struct FFrameNumber& InTime, const struct FMovieSceneEvent& NewValue, float SubFrame, ESequenceTimeUnit TimeUnit)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MovieSceneScriptingEventChannel", "AddKey");

	Params::MovieSceneScriptingEventChannel_AddKey Parms{};

	Parms.InTime = std::move(InTime);
	Parms.NewValue = std::move(NewValue);
	Parms.SubFrame = SubFrame;
	Parms.TimeUnit = TimeUnit;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

void UMovieSceneScriptingEventChannel::RemoveKey(class UMovieSceneScriptingKey* Key)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MovieSceneScriptingEventChannel", "RemoveKey");

	Params::MovieSceneScriptingEventChannel_RemoveKey Parms{};

	Parms.Key = Key;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

TArray<class UMovieSceneScriptingKey*> UMovieSceneScriptingEventChannel::GetKeys() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MovieSceneScriptingEventChannel", "GetKeys");

	Params::MovieSceneScriptingEventChannel_GetKeys Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

void UMovieSceneScriptingFloatKey::SetArriveTangent(float InNewValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MovieSceneScriptingFloatKey", "SetArriveTangent");

	Params::MovieSceneScriptingFloatKey_SetArriveTangent Parms{};

	Parms.InNewValue = InNewValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UMovieSceneScriptingFloatKey::SetArriveTangentWeight(float InNewValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MovieSceneScriptingFloatKey", "SetArriveTangentWeight");

	Params::MovieSceneScriptingFloatKey_SetArriveTangentWeight Parms{};

	Parms.InNewValue = InNewValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UMovieSceneScriptingFloatKey::SetInterpolationMode(ERichCurveInterpMode InNewValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MovieSceneScriptingFloatKey", "SetInterpolationMode");

	Params::MovieSceneScriptingFloatKey_SetInterpolationMode Parms{};

	Parms.InNewValue = InNewValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UMovieSceneScriptingFloatKey::SetLeaveTangent(float InNewValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MovieSceneScriptingFloatKey", "SetLeaveTangent");

	Params::MovieSceneScriptingFloatKey_SetLeaveTangent Parms{};

	Parms.InNewValue = InNewValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UMovieSceneScriptingFloatKey::SetLeaveTangentWeight(float InNewValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MovieSceneScriptingFloatKey", "SetLeaveTangentWeight");

	Params::MovieSceneScriptingFloatKey_SetLeaveTangentWeight Parms{};

	Parms.InNewValue = InNewValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UMovieSceneScriptingFloatKey::SetTangentMode(ERichCurveTangentMode InNewValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MovieSceneScriptingFloatKey", "SetTangentMode");

	Params::MovieSceneScriptingFloatKey_SetTangentMode Parms{};

	Parms.InNewValue = InNewValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UMovieSceneScriptingFloatKey::SetTangentWeightMode(ERichCurveTangentWeightMode InNewValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MovieSceneScriptingFloatKey", "SetTangentWeightMode");

	Params::MovieSceneScriptingFloatKey_SetTangentWeightMode Parms{};

	Parms.InNewValue = InNewValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UMovieSceneScriptingFloatKey::SetTime(const struct FFrameNumber& NewFrameNumber, float SubFrame, ESequenceTimeUnit TimeUnit)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MovieSceneScriptingFloatKey", "SetTime");

	Params::MovieSceneScriptingFloatKey_SetTime Parms{};

	Parms.NewFrameNumber = std::move(NewFrameNumber);
	Parms.SubFrame = SubFrame;
	Parms.TimeUnit = TimeUnit;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UMovieSceneScriptingFloatKey::SetValue(float InNewValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MovieSceneScriptingFloatKey", "SetValue");

	Params::MovieSceneScriptingFloatKey_SetValue Parms{};

	Parms.InNewValue = InNewValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

float UMovieSceneScriptingFloatKey::GetArriveTangent() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MovieSceneScriptingFloatKey", "GetArriveTangent");

	Params::MovieSceneScriptingFloatKey_GetArriveTangent Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

float UMovieSceneScriptingFloatKey::GetArriveTangentWeight() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MovieSceneScriptingFloatKey", "GetArriveTangentWeight");

	Params::MovieSceneScriptingFloatKey_GetArriveTangentWeight Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

ERichCurveInterpMode UMovieSceneScriptingFloatKey::GetInterpolationMode() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MovieSceneScriptingFloatKey", "GetInterpolationMode");

	Params::MovieSceneScriptingFloatKey_GetInterpolationMode Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

float UMovieSceneScriptingFloatKey::GetLeaveTangent() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MovieSceneScriptingFloatKey", "GetLeaveTangent");

	Params::MovieSceneScriptingFloatKey_GetLeaveTangent Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

float UMovieSceneScriptingFloatKey::GetLeaveTangentWeight() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MovieSceneScriptingFloatKey", "GetLeaveTangentWeight");

	Params::MovieSceneScriptingFloatKey_GetLeaveTangentWeight Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

ERichCurveTangentMode UMovieSceneScriptingFloatKey::GetTangentMode() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MovieSceneScriptingFloatKey", "GetTangentMode");

	Params::MovieSceneScriptingFloatKey_GetTangentMode Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

ERichCurveTangentWeightMode UMovieSceneScriptingFloatKey::GetTangentWeightMode() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MovieSceneScriptingFloatKey", "GetTangentWeightMode");

	Params::MovieSceneScriptingFloatKey_GetTangentWeightMode Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

struct FFrameTime UMovieSceneScriptingFloatKey::GetTime(ESequenceTimeUnit TimeUnit) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MovieSceneScriptingFloatKey", "GetTime");

	Params::MovieSceneScriptingFloatKey_GetTime Parms{};

	Parms.TimeUnit = TimeUnit;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

float UMovieSceneScriptingFloatKey::GetValue() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MovieSceneScriptingFloatKey", "GetValue");

	Params::MovieSceneScriptingFloatKey_GetValue Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

class UMovieSceneScriptingFloatKey* UMovieSceneScriptingFloatChannel::AddKey(const struct FFrameNumber& InTime, float NewValue, float SubFrame, ESequenceTimeUnit TimeUnit, EMovieSceneKeyInterpolation InInterpolation)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MovieSceneScriptingFloatChannel", "AddKey");

	Params::MovieSceneScriptingFloatChannel_AddKey Parms{};

	Parms.InTime = std::move(InTime);
	Parms.NewValue = NewValue;
	Parms.SubFrame = SubFrame;
	Parms.TimeUnit = TimeUnit;
	Parms.InInterpolation = InInterpolation;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

void UMovieSceneScriptingFloatChannel::RemoveDefault()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MovieSceneScriptingFloatChannel", "RemoveDefault");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void UMovieSceneScriptingFloatChannel::RemoveKey(class UMovieSceneScriptingKey* Key)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MovieSceneScriptingFloatChannel", "RemoveKey");

	Params::MovieSceneScriptingFloatChannel_RemoveKey Parms{};

	Parms.Key = Key;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UMovieSceneScriptingFloatChannel::SetDefault(float InDefaultValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MovieSceneScriptingFloatChannel", "SetDefault");

	Params::MovieSceneScriptingFloatChannel_SetDefault Parms{};

	Parms.InDefaultValue = InDefaultValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UMovieSceneScriptingFloatChannel::SetPostInfinityExtrapolation(ERichCurveExtrapolation InExtrapolation)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MovieSceneScriptingFloatChannel", "SetPostInfinityExtrapolation");

	Params::MovieSceneScriptingFloatChannel_SetPostInfinityExtrapolation Parms{};

	Parms.InExtrapolation = InExtrapolation;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UMovieSceneScriptingFloatChannel::SetPreInfinityExtrapolation(ERichCurveExtrapolation InExtrapolation)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MovieSceneScriptingFloatChannel", "SetPreInfinityExtrapolation");

	Params::MovieSceneScriptingFloatChannel_SetPreInfinityExtrapolation Parms{};

	Parms.InExtrapolation = InExtrapolation;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

struct FSequencerScriptingRange UMovieSceneScriptingFloatChannel::ComputeEffectiveRange() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MovieSceneScriptingFloatChannel", "ComputeEffectiveRange");

	Params::MovieSceneScriptingFloatChannel_ComputeEffectiveRange Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

TArray<float> UMovieSceneScriptingFloatChannel::EvaluateKeys(const struct FSequencerScriptingRange& Range, const struct FFrameRate& FrameRate) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MovieSceneScriptingFloatChannel", "EvaluateKeys");

	Params::MovieSceneScriptingFloatChannel_EvaluateKeys Parms{};

	Parms.Range = std::move(Range);
	Parms.FrameRate = std::move(FrameRate);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

float UMovieSceneScriptingFloatChannel::GetDefault() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MovieSceneScriptingFloatChannel", "GetDefault");

	Params::MovieSceneScriptingFloatChannel_GetDefault Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

TArray<class UMovieSceneScriptingKey*> UMovieSceneScriptingFloatChannel::GetKeys() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MovieSceneScriptingFloatChannel", "GetKeys");

	Params::MovieSceneScriptingFloatChannel_GetKeys Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

int32 UMovieSceneScriptingFloatChannel::GetNumKeys() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MovieSceneScriptingFloatChannel", "GetNumKeys");

	Params::MovieSceneScriptingFloatChannel_GetNumKeys Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

ERichCurveExtrapolation UMovieSceneScriptingFloatChannel::GetPostInfinityExtrapolation() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MovieSceneScriptingFloatChannel", "GetPostInfinityExtrapolation");

	Params::MovieSceneScriptingFloatChannel_GetPostInfinityExtrapolation Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

ERichCurveExtrapolation UMovieSceneScriptingFloatChannel::GetPreInfinityExtrapolation() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MovieSceneScriptingFloatChannel", "GetPreInfinityExtrapolation");

	Params::MovieSceneScriptingFloatChannel_GetPreInfinityExtrapolation Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

bool UMovieSceneScriptingFloatChannel::HasDefault() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MovieSceneScriptingFloatChannel", "HasDefault");

	Params::MovieSceneScriptingFloatChannel_HasDefault Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

void UMovieSceneScriptingIntegerKey::SetTime(const struct FFrameNumber& NewFrameNumber, float SubFrame, ESequenceTimeUnit TimeUnit)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MovieSceneScriptingIntegerKey", "SetTime");

	Params::MovieSceneScriptingIntegerKey_SetTime Parms{};

	Parms.NewFrameNumber = std::move(NewFrameNumber);
	Parms.SubFrame = SubFrame;
	Parms.TimeUnit = TimeUnit;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UMovieSceneScriptingIntegerKey::SetValue(int32 InNewValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MovieSceneScriptingIntegerKey", "SetValue");

	Params::MovieSceneScriptingIntegerKey_SetValue Parms{};

	Parms.InNewValue = InNewValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

struct FFrameTime UMovieSceneScriptingIntegerKey::GetTime(ESequenceTimeUnit TimeUnit) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MovieSceneScriptingIntegerKey", "GetTime");

	Params::MovieSceneScriptingIntegerKey_GetTime Parms{};

	Parms.TimeUnit = TimeUnit;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

int32 UMovieSceneScriptingIntegerKey::GetValue() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MovieSceneScriptingIntegerKey", "GetValue");

	Params::MovieSceneScriptingIntegerKey_GetValue Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

class UMovieSceneScriptingIntegerKey* UMovieSceneScriptingIntegerChannel::AddKey(const struct FFrameNumber& InTime, int32 NewValue, float SubFrame, ESequenceTimeUnit TimeUnit)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MovieSceneScriptingIntegerChannel", "AddKey");

	Params::MovieSceneScriptingIntegerChannel_AddKey Parms{};

	Parms.InTime = std::move(InTime);
	Parms.NewValue = NewValue;
	Parms.SubFrame = SubFrame;
	Parms.TimeUnit = TimeUnit;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

void UMovieSceneScriptingIntegerChannel::RemoveDefault()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MovieSceneScriptingIntegerChannel", "RemoveDefault");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void UMovieSceneScriptingIntegerChannel::RemoveKey(class UMovieSceneScriptingKey* Key)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MovieSceneScriptingIntegerChannel", "RemoveKey");

	Params::MovieSceneScriptingIntegerChannel_RemoveKey Parms{};

	Parms.Key = Key;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UMovieSceneScriptingIntegerChannel::SetDefault(int32 InDefaultValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MovieSceneScriptingIntegerChannel", "SetDefault");

	Params::MovieSceneScriptingIntegerChannel_SetDefault Parms{};

	Parms.InDefaultValue = InDefaultValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

int32 UMovieSceneScriptingIntegerChannel::GetDefault() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MovieSceneScriptingIntegerChannel", "GetDefault");

	Params::MovieSceneScriptingIntegerChannel_GetDefault Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

TArray<class UMovieSceneScriptingKey*> UMovieSceneScriptingIntegerChannel::GetKeys() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MovieSceneScriptingIntegerChannel", "GetKeys");

	Params::MovieSceneScriptingIntegerChannel_GetKeys Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

bool UMovieSceneScriptingIntegerChannel::HasDefault() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MovieSceneScriptingIntegerChannel", "HasDefault");

	Params::MovieSceneScriptingIntegerChannel_HasDefault Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

void UMovieSceneScriptingObjectPathKey::SetTime(const struct FFrameNumber& NewFrameNumber, float SubFrame, ESequenceTimeUnit TimeUnit)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MovieSceneScriptingObjectPathKey", "SetTime");

	Params::MovieSceneScriptingObjectPathKey_SetTime Parms{};

	Parms.NewFrameNumber = std::move(NewFrameNumber);
	Parms.SubFrame = SubFrame;
	Parms.TimeUnit = TimeUnit;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UMovieSceneScriptingObjectPathKey::SetValue(class UObject* InNewValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MovieSceneScriptingObjectPathKey", "SetValue");

	Params::MovieSceneScriptingObjectPathKey_SetValue Parms{};

	Parms.InNewValue = InNewValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

struct FFrameTime UMovieSceneScriptingObjectPathKey::GetTime(ESequenceTimeUnit TimeUnit) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MovieSceneScriptingObjectPathKey", "GetTime");

	Params::MovieSceneScriptingObjectPathKey_GetTime Parms{};

	Parms.TimeUnit = TimeUnit;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

class UObject* UMovieSceneScriptingObjectPathKey::GetValue() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MovieSceneScriptingObjectPathKey", "GetValue");

	Params::MovieSceneScriptingObjectPathKey_GetValue Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

class UMovieSceneScriptingObjectPathKey* UMovieSceneScriptingObjectPathChannel::AddKey(const struct FFrameNumber& InTime, class UObject* NewValue, float SubFrame, ESequenceTimeUnit TimeUnit)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MovieSceneScriptingObjectPathChannel", "AddKey");

	Params::MovieSceneScriptingObjectPathChannel_AddKey Parms{};

	Parms.InTime = std::move(InTime);
	Parms.NewValue = NewValue;
	Parms.SubFrame = SubFrame;
	Parms.TimeUnit = TimeUnit;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

void UMovieSceneScriptingObjectPathChannel::RemoveDefault()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MovieSceneScriptingObjectPathChannel", "RemoveDefault");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void UMovieSceneScriptingObjectPathChannel::RemoveKey(class UMovieSceneScriptingKey* Key)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MovieSceneScriptingObjectPathChannel", "RemoveKey");

	Params::MovieSceneScriptingObjectPathChannel_RemoveKey Parms{};

	Parms.Key = Key;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UMovieSceneScriptingObjectPathChannel::SetDefault(class UObject* InDefaultValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MovieSceneScriptingObjectPathChannel", "SetDefault");

	Params::MovieSceneScriptingObjectPathChannel_SetDefault Parms{};

	Parms.InDefaultValue = InDefaultValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

class UObject* UMovieSceneScriptingObjectPathChannel::GetDefault() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MovieSceneScriptingObjectPathChannel", "GetDefault");

	Params::MovieSceneScriptingObjectPathChannel_GetDefault Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

TArray<class UMovieSceneScriptingKey*> UMovieSceneScriptingObjectPathChannel::GetKeys() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MovieSceneScriptingObjectPathChannel", "GetKeys");

	Params::MovieSceneScriptingObjectPathChannel_GetKeys Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

bool UMovieSceneScriptingObjectPathChannel::HasDefault() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MovieSceneScriptingObjectPathChannel", "HasDefault");

	Params::MovieSceneScriptingObjectPathChannel_HasDefault Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

void UMovieSceneScriptingStringKey::SetTime(const struct FFrameNumber& NewFrameNumber, float SubFrame, ESequenceTimeUnit TimeUnit)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MovieSceneScriptingStringKey", "SetTime");

	Params::MovieSceneScriptingStringKey_SetTime Parms{};

	Parms.NewFrameNumber = std::move(NewFrameNumber);
	Parms.SubFrame = SubFrame;
	Parms.TimeUnit = TimeUnit;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UMovieSceneScriptingStringKey::SetValue(const class FString& InNewValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MovieSceneScriptingStringKey", "SetValue");

	Params::MovieSceneScriptingStringKey_SetValue Parms{};

	Parms.InNewValue = std::move(InNewValue);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

struct FFrameTime UMovieSceneScriptingStringKey::GetTime(ESequenceTimeUnit TimeUnit) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MovieSceneScriptingStringKey", "GetTime");

	Params::MovieSceneScriptingStringKey_GetTime Parms{};

	Parms.TimeUnit = TimeUnit;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

class FString UMovieSceneScriptingStringKey::GetValue() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MovieSceneScriptingStringKey", "GetValue");

	Params::MovieSceneScriptingStringKey_GetValue Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

class UMovieSceneScriptingStringKey* UMovieSceneScriptingStringChannel::AddKey(const struct FFrameNumber& InTime, const class FString& NewValue, float SubFrame, ESequenceTimeUnit TimeUnit)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MovieSceneScriptingStringChannel", "AddKey");

	Params::MovieSceneScriptingStringChannel_AddKey Parms{};

	Parms.InTime = std::move(InTime);
	Parms.NewValue = std::move(NewValue);
	Parms.SubFrame = SubFrame;
	Parms.TimeUnit = TimeUnit;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

void UMovieSceneScriptingStringChannel::RemoveDefault()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MovieSceneScriptingStringChannel", "RemoveDefault");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void UMovieSceneScriptingStringChannel::RemoveKey(class UMovieSceneScriptingKey* Key)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MovieSceneScriptingStringChannel", "RemoveKey");

	Params::MovieSceneScriptingStringChannel_RemoveKey Parms{};

	Parms.Key = Key;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UMovieSceneScriptingStringChannel::SetDefault(const class FString& InDefaultValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MovieSceneScriptingStringChannel", "SetDefault");

	Params::MovieSceneScriptingStringChannel_SetDefault Parms{};

	Parms.InDefaultValue = std::move(InDefaultValue);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

class FString UMovieSceneScriptingStringChannel::GetDefault() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MovieSceneScriptingStringChannel", "GetDefault");

	Params::MovieSceneScriptingStringChannel_GetDefault Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

TArray<class UMovieSceneScriptingKey*> UMovieSceneScriptingStringChannel::GetKeys() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MovieSceneScriptingStringChannel", "GetKeys");

	Params::MovieSceneScriptingStringChannel_GetKeys Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

bool UMovieSceneScriptingStringChannel::HasDefault() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MovieSceneScriptingStringChannel", "HasDefault");

	Params::MovieSceneScriptingStringChannel_HasDefault Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

class UMovieSceneTrack* UMovieSceneBindingExtensions::AddTrack(const struct FMovieSceneBindingProxy& InBinding, TSubclassOf<class UMovieSceneTrack> TrackType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("MovieSceneBindingExtensions", "AddTrack");

	Params::MovieSceneBindingExtensions_AddTrack Parms{};

	Parms.InBinding = std::move(InBinding);
	Parms.TrackType = TrackType;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

TArray<class UMovieSceneTrack*> UMovieSceneBindingExtensions::FindTracksByExactType(const struct FMovieSceneBindingProxy& InBinding, TSubclassOf<class UMovieSceneTrack> TrackType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("MovieSceneBindingExtensions", "FindTracksByExactType");

	Params::MovieSceneBindingExtensions_FindTracksByExactType Parms{};

	Parms.InBinding = std::move(InBinding);
	Parms.TrackType = TrackType;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

TArray<class UMovieSceneTrack*> UMovieSceneBindingExtensions::FindTracksByType(const struct FMovieSceneBindingProxy& InBinding, TSubclassOf<class UMovieSceneTrack> TrackType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("MovieSceneBindingExtensions", "FindTracksByType");

	Params::MovieSceneBindingExtensions_FindTracksByType Parms{};

	Parms.InBinding = std::move(InBinding);
	Parms.TrackType = TrackType;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

TArray<struct FMovieSceneBindingProxy> UMovieSceneBindingExtensions::GetChildPossessables(const struct FMovieSceneBindingProxy& InBinding)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("MovieSceneBindingExtensions", "GetChildPossessables");

	Params::MovieSceneBindingExtensions_GetChildPossessables Parms{};

	Parms.InBinding = std::move(InBinding);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

class FText UMovieSceneBindingExtensions::GetDisplayName(const struct FMovieSceneBindingProxy& InBinding)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("MovieSceneBindingExtensions", "GetDisplayName");

	Params::MovieSceneBindingExtensions_GetDisplayName Parms{};

	Parms.InBinding = std::move(InBinding);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

struct FGuid UMovieSceneBindingExtensions::GetId(const struct FMovieSceneBindingProxy& InBinding)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("MovieSceneBindingExtensions", "GetId");

	Params::MovieSceneBindingExtensions_GetId Parms{};

	Parms.InBinding = std::move(InBinding);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

class FString UMovieSceneBindingExtensions::GetName(const struct FMovieSceneBindingProxy& InBinding)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("MovieSceneBindingExtensions", "GetName");

	Params::MovieSceneBindingExtensions_GetName Parms{};

	Parms.InBinding = std::move(InBinding);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

class UObject* UMovieSceneBindingExtensions::GetObjectTemplate(const struct FMovieSceneBindingProxy& InBinding)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("MovieSceneBindingExtensions", "GetObjectTemplate");

	Params::MovieSceneBindingExtensions_GetObjectTemplate Parms{};

	Parms.InBinding = std::move(InBinding);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

struct FMovieSceneBindingProxy UMovieSceneBindingExtensions::GetParent(const struct FMovieSceneBindingProxy& InBinding)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("MovieSceneBindingExtensions", "GetParent");

	Params::MovieSceneBindingExtensions_GetParent Parms{};

	Parms.InBinding = std::move(InBinding);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

class UClass* UMovieSceneBindingExtensions::GetPossessedObjectClass(const struct FMovieSceneBindingProxy& InBinding)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("MovieSceneBindingExtensions", "GetPossessedObjectClass");

	Params::MovieSceneBindingExtensions_GetPossessedObjectClass Parms{};

	Parms.InBinding = std::move(InBinding);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

TArray<class UMovieSceneTrack*> UMovieSceneBindingExtensions::GetTracks(const struct FMovieSceneBindingProxy& InBinding)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("MovieSceneBindingExtensions", "GetTracks");

	Params::MovieSceneBindingExtensions_GetTracks Parms{};

	Parms.InBinding = std::move(InBinding);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

bool UMovieSceneBindingExtensions::IsValid(const struct FMovieSceneBindingProxy& InBinding)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("MovieSceneBindingExtensions", "IsValid");

	Params::MovieSceneBindingExtensions_IsValid Parms{};

	Parms.InBinding = std::move(InBinding);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

void UMovieSceneBindingExtensions::MoveBindingContents(const struct FMovieSceneBindingProxy& SourceBindingId, const struct FMovieSceneBindingProxy& DestinationBindingId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("MovieSceneBindingExtensions", "MoveBindingContents");

	Params::MovieSceneBindingExtensions_MoveBindingContents Parms{};

	Parms.SourceBindingId = std::move(SourceBindingId);
	Parms.DestinationBindingId = std::move(DestinationBindingId);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UMovieSceneBindingExtensions::Remove(const struct FMovieSceneBindingProxy& InBinding)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("MovieSceneBindingExtensions", "Remove");

	Params::MovieSceneBindingExtensions_Remove Parms{};

	Parms.InBinding = std::move(InBinding);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UMovieSceneBindingExtensions::RemoveTrack(const struct FMovieSceneBindingProxy& InBinding, class UMovieSceneTrack* TrackToRemove)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("MovieSceneBindingExtensions", "RemoveTrack");

	Params::MovieSceneBindingExtensions_RemoveTrack Parms{};

	Parms.InBinding = std::move(InBinding);
	Parms.TrackToRemove = TrackToRemove;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UMovieSceneBindingExtensions::SetDisplayName(const struct FMovieSceneBindingProxy& InBinding, const class FText& InDisplayName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("MovieSceneBindingExtensions", "SetDisplayName");

	Params::MovieSceneBindingExtensions_SetDisplayName Parms{};

	Parms.InBinding = std::move(InBinding);
	Parms.InDisplayName = std::move(InDisplayName);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UMovieSceneBindingExtensions::SetName(const struct FMovieSceneBindingProxy& InBinding, const class FString& InName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("MovieSceneBindingExtensions", "SetName");

	Params::MovieSceneBindingExtensions_SetName Parms{};

	Parms.InBinding = std::move(InBinding);
	Parms.InName = std::move(InName);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UMovieSceneBindingExtensions::SetParent(const struct FMovieSceneBindingProxy& InBinding, const struct FMovieSceneBindingProxy& InParentBinding)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("MovieSceneBindingExtensions", "SetParent");

	Params::MovieSceneBindingExtensions_SetParent Parms{};

	Parms.InBinding = std::move(InBinding);
	Parms.InParentBinding = std::move(InParentBinding);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

class UMovieSceneEventRepeaterSection* UMovieSceneEventTrackExtensions::AddEventRepeaterSection(class UMovieSceneEventTrack* InTrack)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("MovieSceneEventTrackExtensions", "AddEventRepeaterSection");

	Params::MovieSceneEventTrackExtensions_AddEventRepeaterSection Parms{};

	Parms.InTrack = InTrack;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

class UMovieSceneEventTriggerSection* UMovieSceneEventTrackExtensions::AddEventTriggerSection(class UMovieSceneEventTrack* InTrack)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("MovieSceneEventTrackExtensions", "AddEventTriggerSection");

	Params::MovieSceneEventTrackExtensions_AddEventTriggerSection Parms{};

	Parms.InTrack = InTrack;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

class UClass* UMovieSceneEventTrackExtensions::GetBoundObjectPropertyClass(const struct FMovieSceneEvent& EventKey)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("MovieSceneEventTrackExtensions", "GetBoundObjectPropertyClass");

	Params::MovieSceneEventTrackExtensions_GetBoundObjectPropertyClass Parms{};

	Parms.EventKey = std::move(EventKey);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

bool UMovieSceneFolderExtensions::AddChildFolder(class UMovieSceneFolder* TargetFolder, class UMovieSceneFolder* FolderToAdd)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("MovieSceneFolderExtensions", "AddChildFolder");

	Params::MovieSceneFolderExtensions_AddChildFolder Parms{};

	Parms.TargetFolder = TargetFolder;
	Parms.FolderToAdd = FolderToAdd;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

bool UMovieSceneFolderExtensions::AddChildMasterTrack(class UMovieSceneFolder* Folder, class UMovieSceneTrack* InTrack)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("MovieSceneFolderExtensions", "AddChildMasterTrack");

	Params::MovieSceneFolderExtensions_AddChildMasterTrack Parms{};

	Parms.Folder = Folder;
	Parms.InTrack = InTrack;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

bool UMovieSceneFolderExtensions::AddChildObjectBinding(class UMovieSceneFolder* Folder, const struct FMovieSceneBindingProxy& InObjectBinding)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("MovieSceneFolderExtensions", "AddChildObjectBinding");

	Params::MovieSceneFolderExtensions_AddChildObjectBinding Parms{};

	Parms.Folder = Folder;
	Parms.InObjectBinding = std::move(InObjectBinding);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

bool UMovieSceneFolderExtensions::AddChildTrack(class UMovieSceneFolder* Folder, class UMovieSceneTrack* InTrack)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("MovieSceneFolderExtensions", "AddChildTrack");

	Params::MovieSceneFolderExtensions_AddChildTrack Parms{};

	Parms.Folder = Folder;
	Parms.InTrack = InTrack;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

TArray<class UMovieSceneFolder*> UMovieSceneFolderExtensions::GetChildFolders(class UMovieSceneFolder* Folder)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("MovieSceneFolderExtensions", "GetChildFolders");

	Params::MovieSceneFolderExtensions_GetChildFolders Parms{};

	Parms.Folder = Folder;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

TArray<class UMovieSceneTrack*> UMovieSceneFolderExtensions::GetChildMasterTracks(class UMovieSceneFolder* Folder)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("MovieSceneFolderExtensions", "GetChildMasterTracks");

	Params::MovieSceneFolderExtensions_GetChildMasterTracks Parms{};

	Parms.Folder = Folder;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

TArray<struct FMovieSceneBindingProxy> UMovieSceneFolderExtensions::GetChildObjectBindings(class UMovieSceneFolder* Folder)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("MovieSceneFolderExtensions", "GetChildObjectBindings");

	Params::MovieSceneFolderExtensions_GetChildObjectBindings Parms{};

	Parms.Folder = Folder;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

TArray<class UMovieSceneTrack*> UMovieSceneFolderExtensions::GetChildTracks(class UMovieSceneFolder* Folder)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("MovieSceneFolderExtensions", "GetChildTracks");

	Params::MovieSceneFolderExtensions_GetChildTracks Parms{};

	Parms.Folder = Folder;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

struct FColor UMovieSceneFolderExtensions::GetFolderColor(class UMovieSceneFolder* Folder)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("MovieSceneFolderExtensions", "GetFolderColor");

	Params::MovieSceneFolderExtensions_GetFolderColor Parms{};

	Parms.Folder = Folder;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

class FName UMovieSceneFolderExtensions::GetFolderName(class UMovieSceneFolder* Folder)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("MovieSceneFolderExtensions", "GetFolderName");

	Params::MovieSceneFolderExtensions_GetFolderName Parms{};

	Parms.Folder = Folder;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

bool UMovieSceneFolderExtensions::RemoveChildFolder(class UMovieSceneFolder* TargetFolder, class UMovieSceneFolder* FolderToRemove)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("MovieSceneFolderExtensions", "RemoveChildFolder");

	Params::MovieSceneFolderExtensions_RemoveChildFolder Parms{};

	Parms.TargetFolder = TargetFolder;
	Parms.FolderToRemove = FolderToRemove;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

bool UMovieSceneFolderExtensions::RemoveChildMasterTrack(class UMovieSceneFolder* Folder, class UMovieSceneTrack* InTrack)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("MovieSceneFolderExtensions", "RemoveChildMasterTrack");

	Params::MovieSceneFolderExtensions_RemoveChildMasterTrack Parms{};

	Parms.Folder = Folder;
	Parms.InTrack = InTrack;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

bool UMovieSceneFolderExtensions::RemoveChildObjectBinding(class UMovieSceneFolder* Folder, const struct FMovieSceneBindingProxy& InObjectBinding)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("MovieSceneFolderExtensions", "RemoveChildObjectBinding");

	Params::MovieSceneFolderExtensions_RemoveChildObjectBinding Parms{};

	Parms.Folder = Folder;
	Parms.InObjectBinding = std::move(InObjectBinding);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

bool UMovieSceneFolderExtensions::RemoveChildTrack(class UMovieSceneFolder* Folder, class UMovieSceneTrack* InTrack)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("MovieSceneFolderExtensions", "RemoveChildTrack");

	Params::MovieSceneFolderExtensions_RemoveChildTrack Parms{};

	Parms.Folder = Folder;
	Parms.InTrack = InTrack;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

bool UMovieSceneFolderExtensions::SetFolderColor(class UMovieSceneFolder* Folder, const struct FColor& InFolderColor)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("MovieSceneFolderExtensions", "SetFolderColor");

	Params::MovieSceneFolderExtensions_SetFolderColor Parms{};

	Parms.Folder = Folder;
	Parms.InFolderColor = std::move(InFolderColor);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

bool UMovieSceneFolderExtensions::SetFolderName(class UMovieSceneFolder* Folder, class FName InFolderName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("MovieSceneFolderExtensions", "SetFolderName");

	Params::MovieSceneFolderExtensions_SetFolderName Parms{};

	Parms.Folder = Folder;
	Parms.InFolderName = InFolderName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

int32 UMovieSceneMaterialTrackExtensions::GetMaterialIndex(class UMovieSceneComponentMaterialTrack* track)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("MovieSceneMaterialTrackExtensions", "GetMaterialIndex");

	Params::MovieSceneMaterialTrackExtensions_GetMaterialIndex Parms{};

	Parms.track = track;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

void UMovieSceneMaterialTrackExtensions::SetMaterialIndex(class UMovieSceneComponentMaterialTrack* track, const int32 MaterialIndex)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("MovieSceneMaterialTrackExtensions", "SetMaterialIndex");

	Params::MovieSceneMaterialTrackExtensions_SetMaterialIndex Parms{};

	Parms.track = track;
	Parms.MaterialIndex = MaterialIndex;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

int32 UMovieScenePrimitiveMaterialTrackExtensions::GetMaterialIndex(class UMovieScenePrimitiveMaterialTrack* track)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("MovieScenePrimitiveMaterialTrackExtensions", "GetMaterialIndex");

	Params::MovieScenePrimitiveMaterialTrackExtensions_GetMaterialIndex Parms{};

	Parms.track = track;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

void UMovieScenePrimitiveMaterialTrackExtensions::SetMaterialIndex(class UMovieScenePrimitiveMaterialTrack* track, const int32 MaterialIndex)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("MovieScenePrimitiveMaterialTrackExtensions", "SetMaterialIndex");

	Params::MovieScenePrimitiveMaterialTrackExtensions_SetMaterialIndex Parms{};

	Parms.track = track;
	Parms.MaterialIndex = MaterialIndex;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

class UEnum* UMovieScenePropertyTrackExtensions::GetByteTrackEnum(class UMovieSceneByteTrack* track)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("MovieScenePropertyTrackExtensions", "GetByteTrackEnum");

	Params::MovieScenePropertyTrackExtensions_GetByteTrackEnum Parms{};

	Parms.track = track;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

class UClass* UMovieScenePropertyTrackExtensions::GetObjectPropertyClass(class UMovieSceneObjectPropertyTrack* track)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("MovieScenePropertyTrackExtensions", "GetObjectPropertyClass");

	Params::MovieScenePropertyTrackExtensions_GetObjectPropertyClass Parms{};

	Parms.track = track;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

class FName UMovieScenePropertyTrackExtensions::GetPropertyName(class UMovieScenePropertyTrack* track)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("MovieScenePropertyTrackExtensions", "GetPropertyName");

	Params::MovieScenePropertyTrackExtensions_GetPropertyName Parms{};

	Parms.track = track;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

class FString UMovieScenePropertyTrackExtensions::GetPropertyPath(class UMovieScenePropertyTrack* track)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("MovieScenePropertyTrackExtensions", "GetPropertyPath");

	Params::MovieScenePropertyTrackExtensions_GetPropertyPath Parms{};

	Parms.track = track;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

class FName UMovieScenePropertyTrackExtensions::GetUniqueTrackName(class UMovieScenePropertyTrack* track)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("MovieScenePropertyTrackExtensions", "GetUniqueTrackName");

	Params::MovieScenePropertyTrackExtensions_GetUniqueTrackName Parms{};

	Parms.track = track;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

void UMovieScenePropertyTrackExtensions::SetByteTrackEnum(class UMovieSceneByteTrack* track, class UEnum* InEnum)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("MovieScenePropertyTrackExtensions", "SetByteTrackEnum");

	Params::MovieScenePropertyTrackExtensions_SetByteTrackEnum Parms{};

	Parms.track = track;
	Parms.InEnum = InEnum;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UMovieScenePropertyTrackExtensions::SetObjectPropertyClass(class UMovieSceneObjectPropertyTrack* track, class UClass* PropertyClass)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("MovieScenePropertyTrackExtensions", "SetObjectPropertyClass");

	Params::MovieScenePropertyTrackExtensions_SetObjectPropertyClass Parms{};

	Parms.track = track;
	Parms.PropertyClass = PropertyClass;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UMovieScenePropertyTrackExtensions::SetPropertyNameAndPath(class UMovieScenePropertyTrack* track, const class FName& InPropertyName, const class FString& InPropertyPath)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("MovieScenePropertyTrackExtensions", "SetPropertyNameAndPath");

	Params::MovieScenePropertyTrackExtensions_SetPropertyNameAndPath Parms{};

	Parms.track = track;
	Parms.InPropertyName = InPropertyName;
	Parms.InPropertyPath = std::move(InPropertyPath);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

TArray<class UMovieSceneScriptingChannel*> UMovieSceneSectionExtensions::FindChannelsByType(class UMovieSceneSection* Section, TSubclassOf<class UMovieSceneScriptingChannel> ChannelType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("MovieSceneSectionExtensions", "FindChannelsByType");

	Params::MovieSceneSectionExtensions_FindChannelsByType Parms{};

	Parms.Section = Section;
	Parms.ChannelType = ChannelType;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

TArray<class UMovieSceneScriptingChannel*> UMovieSceneSectionExtensions::GetAllChannels(class UMovieSceneSection* Section)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("MovieSceneSectionExtensions", "GetAllChannels");

	Params::MovieSceneSectionExtensions_GetAllChannels Parms{};

	Parms.Section = Section;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

int32 UMovieSceneSectionExtensions::GetAutoSizeEndFrame(class UMovieSceneSection* Section)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("MovieSceneSectionExtensions", "GetAutoSizeEndFrame");

	Params::MovieSceneSectionExtensions_GetAutoSizeEndFrame Parms{};

	Parms.Section = Section;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

float UMovieSceneSectionExtensions::GetAutoSizeEndFrameSeconds(class UMovieSceneSection* Section)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("MovieSceneSectionExtensions", "GetAutoSizeEndFrameSeconds");

	Params::MovieSceneSectionExtensions_GetAutoSizeEndFrameSeconds Parms{};

	Parms.Section = Section;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

bool UMovieSceneSectionExtensions::GetAutoSizeHasEndFrame(class UMovieSceneSection* Section)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("MovieSceneSectionExtensions", "GetAutoSizeHasEndFrame");

	Params::MovieSceneSectionExtensions_GetAutoSizeHasEndFrame Parms{};

	Parms.Section = Section;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

bool UMovieSceneSectionExtensions::GetAutoSizeHasStartFrame(class UMovieSceneSection* Section)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("MovieSceneSectionExtensions", "GetAutoSizeHasStartFrame");

	Params::MovieSceneSectionExtensions_GetAutoSizeHasStartFrame Parms{};

	Parms.Section = Section;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

int32 UMovieSceneSectionExtensions::GetAutoSizeStartFrame(class UMovieSceneSection* Section)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("MovieSceneSectionExtensions", "GetAutoSizeStartFrame");

	Params::MovieSceneSectionExtensions_GetAutoSizeStartFrame Parms{};

	Parms.Section = Section;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

float UMovieSceneSectionExtensions::GetAutoSizeStartFrameSeconds(class UMovieSceneSection* Section)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("MovieSceneSectionExtensions", "GetAutoSizeStartFrameSeconds");

	Params::MovieSceneSectionExtensions_GetAutoSizeStartFrameSeconds Parms{};

	Parms.Section = Section;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

TArray<class UMovieSceneScriptingChannel*> UMovieSceneSectionExtensions::GetChannels(class UMovieSceneSection* Section)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("MovieSceneSectionExtensions", "GetChannels");

	Params::MovieSceneSectionExtensions_GetChannels Parms{};

	Parms.Section = Section;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

TArray<class UMovieSceneScriptingChannel*> UMovieSceneSectionExtensions::GetChannelsByType(class UMovieSceneSection* Section, TSubclassOf<class UMovieSceneScriptingChannel> ChannelType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("MovieSceneSectionExtensions", "GetChannelsByType");

	Params::MovieSceneSectionExtensions_GetChannelsByType Parms{};

	Parms.Section = Section;
	Parms.ChannelType = ChannelType;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

int32 UMovieSceneSectionExtensions::GetEndFrame(class UMovieSceneSection* Section)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("MovieSceneSectionExtensions", "GetEndFrame");

	Params::MovieSceneSectionExtensions_GetEndFrame Parms{};

	Parms.Section = Section;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

float UMovieSceneSectionExtensions::GetEndFrameSeconds(class UMovieSceneSection* Section)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("MovieSceneSectionExtensions", "GetEndFrameSeconds");

	Params::MovieSceneSectionExtensions_GetEndFrameSeconds Parms{};

	Parms.Section = Section;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

int32 UMovieSceneSectionExtensions::GetParentSequenceFrame(class UMovieSceneSubSection* Section, int32 InFrame, class UMovieSceneSequence* ParentSequence)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("MovieSceneSectionExtensions", "GetParentSequenceFrame");

	Params::MovieSceneSectionExtensions_GetParentSequenceFrame Parms{};

	Parms.Section = Section;
	Parms.InFrame = InFrame;
	Parms.ParentSequence = ParentSequence;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

int32 UMovieSceneSectionExtensions::GetStartFrame(class UMovieSceneSection* Section)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("MovieSceneSectionExtensions", "GetStartFrame");

	Params::MovieSceneSectionExtensions_GetStartFrame Parms{};

	Parms.Section = Section;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

float UMovieSceneSectionExtensions::GetStartFrameSeconds(class UMovieSceneSection* Section)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("MovieSceneSectionExtensions", "GetStartFrameSeconds");

	Params::MovieSceneSectionExtensions_GetStartFrameSeconds Parms{};

	Parms.Section = Section;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

bool UMovieSceneSectionExtensions::HasEndFrame(class UMovieSceneSection* Section)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("MovieSceneSectionExtensions", "HasEndFrame");

	Params::MovieSceneSectionExtensions_HasEndFrame Parms{};

	Parms.Section = Section;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

bool UMovieSceneSectionExtensions::HasStartFrame(class UMovieSceneSection* Section)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("MovieSceneSectionExtensions", "HasStartFrame");

	Params::MovieSceneSectionExtensions_HasStartFrame Parms{};

	Parms.Section = Section;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

void UMovieSceneSectionExtensions::SetEndFrame(class UMovieSceneSection* Section, int32 EndFrame)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("MovieSceneSectionExtensions", "SetEndFrame");

	Params::MovieSceneSectionExtensions_SetEndFrame Parms{};

	Parms.Section = Section;
	Parms.EndFrame = EndFrame;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UMovieSceneSectionExtensions::SetEndFrameBounded(class UMovieSceneSection* Section, bool bIsBounded)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("MovieSceneSectionExtensions", "SetEndFrameBounded");

	Params::MovieSceneSectionExtensions_SetEndFrameBounded Parms{};

	Parms.Section = Section;
	Parms.bIsBounded = bIsBounded;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UMovieSceneSectionExtensions::SetEndFrameSeconds(class UMovieSceneSection* Section, float EndTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("MovieSceneSectionExtensions", "SetEndFrameSeconds");

	Params::MovieSceneSectionExtensions_SetEndFrameSeconds Parms{};

	Parms.Section = Section;
	Parms.EndTime = EndTime;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UMovieSceneSectionExtensions::SetRange(class UMovieSceneSection* Section, int32 StartFrame, int32 EndFrame)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("MovieSceneSectionExtensions", "SetRange");

	Params::MovieSceneSectionExtensions_SetRange Parms{};

	Parms.Section = Section;
	Parms.StartFrame = StartFrame;
	Parms.EndFrame = EndFrame;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UMovieSceneSectionExtensions::SetRangeSeconds(class UMovieSceneSection* Section, float StartTime, float EndTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("MovieSceneSectionExtensions", "SetRangeSeconds");

	Params::MovieSceneSectionExtensions_SetRangeSeconds Parms{};

	Parms.Section = Section;
	Parms.StartTime = StartTime;
	Parms.EndTime = EndTime;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UMovieSceneSectionExtensions::SetStartFrame(class UMovieSceneSection* Section, int32 StartFrame)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("MovieSceneSectionExtensions", "SetStartFrame");

	Params::MovieSceneSectionExtensions_SetStartFrame Parms{};

	Parms.Section = Section;
	Parms.StartFrame = StartFrame;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UMovieSceneSectionExtensions::SetStartFrameBounded(class UMovieSceneSection* Section, bool bIsBounded)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("MovieSceneSectionExtensions", "SetStartFrameBounded");

	Params::MovieSceneSectionExtensions_SetStartFrameBounded Parms{};

	Parms.Section = Section;
	Parms.bIsBounded = bIsBounded;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UMovieSceneSectionExtensions::SetStartFrameSeconds(class UMovieSceneSection* Section, float StartTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("MovieSceneSectionExtensions", "SetStartFrameSeconds");

	Params::MovieSceneSectionExtensions_SetStartFrameSeconds Parms{};

	Parms.Section = Section;
	Parms.StartTime = StartTime;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

int32 UMovieSceneSequenceExtensions::AddMarkedFrame(class UMovieSceneSequence* Sequence, const struct FMovieSceneMarkedFrame& InMarkedFrame)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("MovieSceneSequenceExtensions", "AddMarkedFrame");

	Params::MovieSceneSequenceExtensions_AddMarkedFrame Parms{};

	Parms.Sequence = Sequence;
	Parms.InMarkedFrame = std::move(InMarkedFrame);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

class UMovieSceneTrack* UMovieSceneSequenceExtensions::AddMasterTrack(class UMovieSceneSequence* Sequence, TSubclassOf<class UMovieSceneTrack> TrackType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("MovieSceneSequenceExtensions", "AddMasterTrack");

	Params::MovieSceneSequenceExtensions_AddMasterTrack Parms{};

	Parms.Sequence = Sequence;
	Parms.TrackType = TrackType;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

struct FMovieSceneBindingProxy UMovieSceneSequenceExtensions::AddPossessable(class UMovieSceneSequence* Sequence, class UObject* ObjectToPossess)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("MovieSceneSequenceExtensions", "AddPossessable");

	Params::MovieSceneSequenceExtensions_AddPossessable Parms{};

	Parms.Sequence = Sequence;
	Parms.ObjectToPossess = ObjectToPossess;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

class UMovieSceneFolder* UMovieSceneSequenceExtensions::AddRootFolderToSequence(class UMovieSceneSequence* Sequence, const class FString& NewFolderName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("MovieSceneSequenceExtensions", "AddRootFolderToSequence");

	Params::MovieSceneSequenceExtensions_AddRootFolderToSequence Parms{};

	Parms.Sequence = Sequence;
	Parms.NewFolderName = std::move(NewFolderName);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

struct FMovieSceneBindingProxy UMovieSceneSequenceExtensions::AddSpawnableFromClass(class UMovieSceneSequence* Sequence, class UClass* ClassToSpawn)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("MovieSceneSequenceExtensions", "AddSpawnableFromClass");

	Params::MovieSceneSequenceExtensions_AddSpawnableFromClass Parms{};

	Parms.Sequence = Sequence;
	Parms.ClassToSpawn = ClassToSpawn;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

struct FMovieSceneBindingProxy UMovieSceneSequenceExtensions::AddSpawnableFromInstance(class UMovieSceneSequence* Sequence, class UObject* ObjectToSpawn)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("MovieSceneSequenceExtensions", "AddSpawnableFromInstance");

	Params::MovieSceneSequenceExtensions_AddSpawnableFromInstance Parms{};

	Parms.Sequence = Sequence;
	Parms.ObjectToSpawn = ObjectToSpawn;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

class UMovieSceneTrack* UMovieSceneSequenceExtensions::AddTrack(class UMovieSceneSequence* Sequence, TSubclassOf<class UMovieSceneTrack> TrackType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("MovieSceneSequenceExtensions", "AddTrack");

	Params::MovieSceneSequenceExtensions_AddTrack Parms{};

	Parms.Sequence = Sequence;
	Parms.TrackType = TrackType;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

void UMovieSceneSequenceExtensions::DeleteMarkedFrame(class UMovieSceneSequence* Sequence, int32 DeleteIndex)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("MovieSceneSequenceExtensions", "DeleteMarkedFrame");

	Params::MovieSceneSequenceExtensions_DeleteMarkedFrame Parms{};

	Parms.Sequence = Sequence;
	Parms.DeleteIndex = DeleteIndex;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UMovieSceneSequenceExtensions::DeleteMarkedFrames(class UMovieSceneSequence* Sequence)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("MovieSceneSequenceExtensions", "DeleteMarkedFrames");

	Params::MovieSceneSequenceExtensions_DeleteMarkedFrames Parms{};

	Parms.Sequence = Sequence;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

struct FMovieSceneBindingProxy UMovieSceneSequenceExtensions::FindBindingById(class UMovieSceneSequence* Sequence, const struct FGuid& BindingID)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("MovieSceneSequenceExtensions", "FindBindingById");

	Params::MovieSceneSequenceExtensions_FindBindingById Parms{};

	Parms.Sequence = Sequence;
	Parms.BindingID = std::move(BindingID);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

struct FMovieSceneBindingProxy UMovieSceneSequenceExtensions::FindBindingByName(class UMovieSceneSequence* Sequence, const class FString& Name_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("MovieSceneSequenceExtensions", "FindBindingByName");

	Params::MovieSceneSequenceExtensions_FindBindingByName Parms{};

	Parms.Sequence = Sequence;
	Parms.Name_0 = std::move(Name_0);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

int32 UMovieSceneSequenceExtensions::FindMarkedFrameByFrameNumber(class UMovieSceneSequence* Sequence, const struct FFrameNumber& InFrameNumber)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("MovieSceneSequenceExtensions", "FindMarkedFrameByFrameNumber");

	Params::MovieSceneSequenceExtensions_FindMarkedFrameByFrameNumber Parms{};

	Parms.Sequence = Sequence;
	Parms.InFrameNumber = std::move(InFrameNumber);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

int32 UMovieSceneSequenceExtensions::FindMarkedFrameByLabel(class UMovieSceneSequence* Sequence, const class FString& InLabel)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("MovieSceneSequenceExtensions", "FindMarkedFrameByLabel");

	Params::MovieSceneSequenceExtensions_FindMarkedFrameByLabel Parms{};

	Parms.Sequence = Sequence;
	Parms.InLabel = std::move(InLabel);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

TArray<class UMovieSceneTrack*> UMovieSceneSequenceExtensions::FindMasterTracksByExactType(class UMovieSceneSequence* Sequence, TSubclassOf<class UMovieSceneTrack> TrackType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("MovieSceneSequenceExtensions", "FindMasterTracksByExactType");

	Params::MovieSceneSequenceExtensions_FindMasterTracksByExactType Parms{};

	Parms.Sequence = Sequence;
	Parms.TrackType = TrackType;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

TArray<class UMovieSceneTrack*> UMovieSceneSequenceExtensions::FindMasterTracksByType(class UMovieSceneSequence* Sequence, TSubclassOf<class UMovieSceneTrack> TrackType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("MovieSceneSequenceExtensions", "FindMasterTracksByType");

	Params::MovieSceneSequenceExtensions_FindMasterTracksByType Parms{};

	Parms.Sequence = Sequence;
	Parms.TrackType = TrackType;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

int32 UMovieSceneSequenceExtensions::FindNextMarkedFrame(class UMovieSceneSequence* Sequence, const struct FFrameNumber& InFrameNumber, bool bForward)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("MovieSceneSequenceExtensions", "FindNextMarkedFrame");

	Params::MovieSceneSequenceExtensions_FindNextMarkedFrame Parms{};

	Parms.Sequence = Sequence;
	Parms.InFrameNumber = std::move(InFrameNumber);
	Parms.bForward = bForward;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

TArray<class UMovieSceneTrack*> UMovieSceneSequenceExtensions::FindTracksByExactType(class UMovieSceneSequence* Sequence, TSubclassOf<class UMovieSceneTrack> TrackType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("MovieSceneSequenceExtensions", "FindTracksByExactType");

	Params::MovieSceneSequenceExtensions_FindTracksByExactType Parms{};

	Parms.Sequence = Sequence;
	Parms.TrackType = TrackType;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

TArray<class UMovieSceneTrack*> UMovieSceneSequenceExtensions::FindTracksByType(class UMovieSceneSequence* Sequence, TSubclassOf<class UMovieSceneTrack> TrackType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("MovieSceneSequenceExtensions", "FindTracksByType");

	Params::MovieSceneSequenceExtensions_FindTracksByType Parms{};

	Parms.Sequence = Sequence;
	Parms.TrackType = TrackType;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

struct FMovieSceneObjectBindingID UMovieSceneSequenceExtensions::GetBindingID(const struct FMovieSceneBindingProxy& InBinding)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("MovieSceneSequenceExtensions", "GetBindingID");

	Params::MovieSceneSequenceExtensions_GetBindingID Parms{};

	Parms.InBinding = std::move(InBinding);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

TArray<struct FMovieSceneBindingProxy> UMovieSceneSequenceExtensions::GetBindings(class UMovieSceneSequence* Sequence)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("MovieSceneSequenceExtensions", "GetBindings");

	Params::MovieSceneSequenceExtensions_GetBindings Parms{};

	Parms.Sequence = Sequence;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

EUpdateClockSource UMovieSceneSequenceExtensions::GetClockSource(class UMovieSceneSequence* InSequence)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("MovieSceneSequenceExtensions", "GetClockSource");

	Params::MovieSceneSequenceExtensions_GetClockSource Parms{};

	Parms.InSequence = InSequence;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

struct FFrameRate UMovieSceneSequenceExtensions::GetDisplayRate(class UMovieSceneSequence* Sequence)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("MovieSceneSequenceExtensions", "GetDisplayRate");

	Params::MovieSceneSequenceExtensions_GetDisplayRate Parms{};

	Parms.Sequence = Sequence;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

EMovieSceneEvaluationType UMovieSceneSequenceExtensions::GetEvaluationType(class UMovieSceneSequence* InSequence)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("MovieSceneSequenceExtensions", "GetEvaluationType");

	Params::MovieSceneSequenceExtensions_GetEvaluationType Parms{};

	Parms.InSequence = InSequence;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

TArray<struct FMovieSceneMarkedFrame> UMovieSceneSequenceExtensions::GetMarkedFrames(class UMovieSceneSequence* Sequence)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("MovieSceneSequenceExtensions", "GetMarkedFrames");

	Params::MovieSceneSequenceExtensions_GetMarkedFrames Parms{};

	Parms.Sequence = Sequence;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

TArray<class UMovieSceneTrack*> UMovieSceneSequenceExtensions::GetMasterTracks(class UMovieSceneSequence* Sequence)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("MovieSceneSequenceExtensions", "GetMasterTracks");

	Params::MovieSceneSequenceExtensions_GetMasterTracks Parms{};

	Parms.Sequence = Sequence;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

class UMovieScene* UMovieSceneSequenceExtensions::GetMovieScene(class UMovieSceneSequence* Sequence)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("MovieSceneSequenceExtensions", "GetMovieScene");

	Params::MovieSceneSequenceExtensions_GetMovieScene Parms{};

	Parms.Sequence = Sequence;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

int32 UMovieSceneSequenceExtensions::GetPlaybackEnd(class UMovieSceneSequence* Sequence)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("MovieSceneSequenceExtensions", "GetPlaybackEnd");

	Params::MovieSceneSequenceExtensions_GetPlaybackEnd Parms{};

	Parms.Sequence = Sequence;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

float UMovieSceneSequenceExtensions::GetPlaybackEndSeconds(class UMovieSceneSequence* Sequence)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("MovieSceneSequenceExtensions", "GetPlaybackEndSeconds");

	Params::MovieSceneSequenceExtensions_GetPlaybackEndSeconds Parms{};

	Parms.Sequence = Sequence;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

struct FSequencerScriptingRange UMovieSceneSequenceExtensions::GetPlaybackRange(class UMovieSceneSequence* Sequence)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("MovieSceneSequenceExtensions", "GetPlaybackRange");

	Params::MovieSceneSequenceExtensions_GetPlaybackRange Parms{};

	Parms.Sequence = Sequence;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

int32 UMovieSceneSequenceExtensions::GetPlaybackStart(class UMovieSceneSequence* Sequence)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("MovieSceneSequenceExtensions", "GetPlaybackStart");

	Params::MovieSceneSequenceExtensions_GetPlaybackStart Parms{};

	Parms.Sequence = Sequence;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

float UMovieSceneSequenceExtensions::GetPlaybackStartSeconds(class UMovieSceneSequence* Sequence)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("MovieSceneSequenceExtensions", "GetPlaybackStartSeconds");

	Params::MovieSceneSequenceExtensions_GetPlaybackStartSeconds Parms{};

	Parms.Sequence = Sequence;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

struct FMovieSceneObjectBindingID UMovieSceneSequenceExtensions::GetPortableBindingID(class UMovieSceneSequence* RootSequence, class UMovieSceneSequence* DestinationSequence, const struct FMovieSceneBindingProxy& InBinding)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("MovieSceneSequenceExtensions", "GetPortableBindingID");

	Params::MovieSceneSequenceExtensions_GetPortableBindingID Parms{};

	Parms.RootSequence = RootSequence;
	Parms.DestinationSequence = DestinationSequence;
	Parms.InBinding = std::move(InBinding);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

TArray<struct FMovieSceneBindingProxy> UMovieSceneSequenceExtensions::GetPossessables(class UMovieSceneSequence* Sequence)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("MovieSceneSequenceExtensions", "GetPossessables");

	Params::MovieSceneSequenceExtensions_GetPossessables Parms{};

	Parms.Sequence = Sequence;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

TArray<class UMovieSceneFolder*> UMovieSceneSequenceExtensions::GetRootFoldersInSequence(class UMovieSceneSequence* Sequence)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("MovieSceneSequenceExtensions", "GetRootFoldersInSequence");

	Params::MovieSceneSequenceExtensions_GetRootFoldersInSequence Parms{};

	Parms.Sequence = Sequence;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

TArray<struct FMovieSceneBindingProxy> UMovieSceneSequenceExtensions::GetSpawnables(class UMovieSceneSequence* Sequence)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("MovieSceneSequenceExtensions", "GetSpawnables");

	Params::MovieSceneSequenceExtensions_GetSpawnables Parms{};

	Parms.Sequence = Sequence;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

struct FFrameRate UMovieSceneSequenceExtensions::GetTickResolution(class UMovieSceneSequence* Sequence)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("MovieSceneSequenceExtensions", "GetTickResolution");

	Params::MovieSceneSequenceExtensions_GetTickResolution Parms{};

	Parms.Sequence = Sequence;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

struct FTimecode UMovieSceneSequenceExtensions::GetTimecodeSource(class UMovieSceneSequence* Sequence)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("MovieSceneSequenceExtensions", "GetTimecodeSource");

	Params::MovieSceneSequenceExtensions_GetTimecodeSource Parms{};

	Parms.Sequence = Sequence;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

TArray<class UMovieSceneTrack*> UMovieSceneSequenceExtensions::GetTracks(class UMovieSceneSequence* Sequence)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("MovieSceneSequenceExtensions", "GetTracks");

	Params::MovieSceneSequenceExtensions_GetTracks Parms{};

	Parms.Sequence = Sequence;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

float UMovieSceneSequenceExtensions::GetViewRangeEnd(class UMovieSceneSequence* InSequence)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("MovieSceneSequenceExtensions", "GetViewRangeEnd");

	Params::MovieSceneSequenceExtensions_GetViewRangeEnd Parms{};

	Parms.InSequence = InSequence;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

float UMovieSceneSequenceExtensions::GetViewRangeStart(class UMovieSceneSequence* InSequence)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("MovieSceneSequenceExtensions", "GetViewRangeStart");

	Params::MovieSceneSequenceExtensions_GetViewRangeStart Parms{};

	Parms.InSequence = InSequence;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

float UMovieSceneSequenceExtensions::GetWorkRangeEnd(class UMovieSceneSequence* InSequence)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("MovieSceneSequenceExtensions", "GetWorkRangeEnd");

	Params::MovieSceneSequenceExtensions_GetWorkRangeEnd Parms{};

	Parms.InSequence = InSequence;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

float UMovieSceneSequenceExtensions::GetWorkRangeStart(class UMovieSceneSequence* InSequence)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("MovieSceneSequenceExtensions", "GetWorkRangeStart");

	Params::MovieSceneSequenceExtensions_GetWorkRangeStart Parms{};

	Parms.InSequence = InSequence;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

bool UMovieSceneSequenceExtensions::IsReadOnly(class UMovieSceneSequence* Sequence)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("MovieSceneSequenceExtensions", "IsReadOnly");

	Params::MovieSceneSequenceExtensions_IsReadOnly Parms{};

	Parms.Sequence = Sequence;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

TArray<class UObject*> UMovieSceneSequenceExtensions::LocateBoundObjects(class UMovieSceneSequence* Sequence, const struct FMovieSceneBindingProxy& InBinding, class UObject* Context)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("MovieSceneSequenceExtensions", "LocateBoundObjects");

	Params::MovieSceneSequenceExtensions_LocateBoundObjects Parms{};

	Parms.Sequence = Sequence;
	Parms.InBinding = std::move(InBinding);
	Parms.Context = Context;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

struct FMovieSceneObjectBindingID UMovieSceneSequenceExtensions::MakeBindingID(class UMovieSceneSequence* Sequence, const struct FMovieSceneBindingProxy& InBinding, EMovieSceneObjectBindingSpace Space)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("MovieSceneSequenceExtensions", "MakeBindingID");

	Params::MovieSceneSequenceExtensions_MakeBindingID Parms{};

	Parms.Sequence = Sequence;
	Parms.InBinding = std::move(InBinding);
	Parms.Space = Space;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

struct FSequencerScriptingRange UMovieSceneSequenceExtensions::MakeRange(class UMovieSceneSequence* Sequence, int32 StartFrame, int32 Duration)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("MovieSceneSequenceExtensions", "MakeRange");

	Params::MovieSceneSequenceExtensions_MakeRange Parms{};

	Parms.Sequence = Sequence;
	Parms.StartFrame = StartFrame;
	Parms.Duration = Duration;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

struct FSequencerScriptingRange UMovieSceneSequenceExtensions::MakeRangeSeconds(class UMovieSceneSequence* Sequence, float StartTime, float Duration)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("MovieSceneSequenceExtensions", "MakeRangeSeconds");

	Params::MovieSceneSequenceExtensions_MakeRangeSeconds Parms{};

	Parms.Sequence = Sequence;
	Parms.StartTime = StartTime;
	Parms.Duration = Duration;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

bool UMovieSceneSequenceExtensions::RemoveMasterTrack(class UMovieSceneSequence* Sequence, class UMovieSceneTrack* track)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("MovieSceneSequenceExtensions", "RemoveMasterTrack");

	Params::MovieSceneSequenceExtensions_RemoveMasterTrack Parms{};

	Parms.Sequence = Sequence;
	Parms.track = track;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

void UMovieSceneSequenceExtensions::RemoveRootFolderFromSequence(class UMovieSceneSequence* Sequence, class UMovieSceneFolder* Folder)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("MovieSceneSequenceExtensions", "RemoveRootFolderFromSequence");

	Params::MovieSceneSequenceExtensions_RemoveRootFolderFromSequence Parms{};

	Parms.Sequence = Sequence;
	Parms.Folder = Folder;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

bool UMovieSceneSequenceExtensions::RemoveTrack(class UMovieSceneSequence* Sequence, class UMovieSceneTrack* track)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("MovieSceneSequenceExtensions", "RemoveTrack");

	Params::MovieSceneSequenceExtensions_RemoveTrack Parms{};

	Parms.Sequence = Sequence;
	Parms.track = track;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

struct FMovieSceneBindingProxy UMovieSceneSequenceExtensions::ResolveBindingID(class UMovieSceneSequence* RootSequence, const struct FMovieSceneObjectBindingID& InObjectBindingID)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("MovieSceneSequenceExtensions", "ResolveBindingID");

	Params::MovieSceneSequenceExtensions_ResolveBindingID Parms{};

	Parms.RootSequence = RootSequence;
	Parms.InObjectBindingID = std::move(InObjectBindingID);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

void UMovieSceneSequenceExtensions::SetClockSource(class UMovieSceneSequence* InSequence, EUpdateClockSource InClockSource)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("MovieSceneSequenceExtensions", "SetClockSource");

	Params::MovieSceneSequenceExtensions_SetClockSource Parms{};

	Parms.InSequence = InSequence;
	Parms.InClockSource = InClockSource;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UMovieSceneSequenceExtensions::SetDisplayRate(class UMovieSceneSequence* Sequence, const struct FFrameRate& DisplayRate)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("MovieSceneSequenceExtensions", "SetDisplayRate");

	Params::MovieSceneSequenceExtensions_SetDisplayRate Parms{};

	Parms.Sequence = Sequence;
	Parms.DisplayRate = std::move(DisplayRate);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UMovieSceneSequenceExtensions::SetEvaluationType(class UMovieSceneSequence* InSequence, EMovieSceneEvaluationType InEvaluationType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("MovieSceneSequenceExtensions", "SetEvaluationType");

	Params::MovieSceneSequenceExtensions_SetEvaluationType Parms{};

	Parms.InSequence = InSequence;
	Parms.InEvaluationType = InEvaluationType;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UMovieSceneSequenceExtensions::SetMarkedFrame(class UMovieSceneSequence* Sequence, int32 InMarkIndex, const struct FFrameNumber& InFrameNumber)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("MovieSceneSequenceExtensions", "SetMarkedFrame");

	Params::MovieSceneSequenceExtensions_SetMarkedFrame Parms{};

	Parms.Sequence = Sequence;
	Parms.InMarkIndex = InMarkIndex;
	Parms.InFrameNumber = std::move(InFrameNumber);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UMovieSceneSequenceExtensions::SetPlaybackEnd(class UMovieSceneSequence* Sequence, int32 EndFrame)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("MovieSceneSequenceExtensions", "SetPlaybackEnd");

	Params::MovieSceneSequenceExtensions_SetPlaybackEnd Parms{};

	Parms.Sequence = Sequence;
	Parms.EndFrame = EndFrame;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UMovieSceneSequenceExtensions::SetPlaybackEndSeconds(class UMovieSceneSequence* Sequence, float EndTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("MovieSceneSequenceExtensions", "SetPlaybackEndSeconds");

	Params::MovieSceneSequenceExtensions_SetPlaybackEndSeconds Parms{};

	Parms.Sequence = Sequence;
	Parms.EndTime = EndTime;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UMovieSceneSequenceExtensions::SetPlaybackStart(class UMovieSceneSequence* Sequence, int32 StartFrame)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("MovieSceneSequenceExtensions", "SetPlaybackStart");

	Params::MovieSceneSequenceExtensions_SetPlaybackStart Parms{};

	Parms.Sequence = Sequence;
	Parms.StartFrame = StartFrame;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UMovieSceneSequenceExtensions::SetPlaybackStartSeconds(class UMovieSceneSequence* Sequence, float StartTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("MovieSceneSequenceExtensions", "SetPlaybackStartSeconds");

	Params::MovieSceneSequenceExtensions_SetPlaybackStartSeconds Parms{};

	Parms.Sequence = Sequence;
	Parms.StartTime = StartTime;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UMovieSceneSequenceExtensions::SetReadOnly(class UMovieSceneSequence* Sequence, bool bInReadOnly)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("MovieSceneSequenceExtensions", "SetReadOnly");

	Params::MovieSceneSequenceExtensions_SetReadOnly Parms{};

	Parms.Sequence = Sequence;
	Parms.bInReadOnly = bInReadOnly;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UMovieSceneSequenceExtensions::SetTickResolution(class UMovieSceneSequence* Sequence, const struct FFrameRate& TickResolution)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("MovieSceneSequenceExtensions", "SetTickResolution");

	Params::MovieSceneSequenceExtensions_SetTickResolution Parms{};

	Parms.Sequence = Sequence;
	Parms.TickResolution = std::move(TickResolution);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UMovieSceneSequenceExtensions::SetTickResolutionDirectly(class UMovieSceneSequence* Sequence, const struct FFrameRate& TickResolution)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("MovieSceneSequenceExtensions", "SetTickResolutionDirectly");

	Params::MovieSceneSequenceExtensions_SetTickResolutionDirectly Parms{};

	Parms.Sequence = Sequence;
	Parms.TickResolution = std::move(TickResolution);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UMovieSceneSequenceExtensions::SetViewRangeEnd(class UMovieSceneSequence* InSequence, float EndTimeInSeconds)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("MovieSceneSequenceExtensions", "SetViewRangeEnd");

	Params::MovieSceneSequenceExtensions_SetViewRangeEnd Parms{};

	Parms.InSequence = InSequence;
	Parms.EndTimeInSeconds = EndTimeInSeconds;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UMovieSceneSequenceExtensions::SetViewRangeStart(class UMovieSceneSequence* InSequence, float StartTimeInSeconds)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("MovieSceneSequenceExtensions", "SetViewRangeStart");

	Params::MovieSceneSequenceExtensions_SetViewRangeStart Parms{};

	Parms.InSequence = InSequence;
	Parms.StartTimeInSeconds = StartTimeInSeconds;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UMovieSceneSequenceExtensions::SetWorkRangeEnd(class UMovieSceneSequence* InSequence, float EndTimeInSeconds)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("MovieSceneSequenceExtensions", "SetWorkRangeEnd");

	Params::MovieSceneSequenceExtensions_SetWorkRangeEnd Parms{};

	Parms.InSequence = InSequence;
	Parms.EndTimeInSeconds = EndTimeInSeconds;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UMovieSceneSequenceExtensions::SetWorkRangeStart(class UMovieSceneSequence* InSequence, float StartTimeInSeconds)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("MovieSceneSequenceExtensions", "SetWorkRangeStart");

	Params::MovieSceneSequenceExtensions_SetWorkRangeStart Parms{};

	Parms.InSequence = InSequence;
	Parms.StartTimeInSeconds = StartTimeInSeconds;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UMovieSceneSequenceExtensions::SortMarkedFrames(class UMovieSceneSequence* Sequence)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("MovieSceneSequenceExtensions", "SortMarkedFrames");

	Params::MovieSceneSequenceExtensions_SortMarkedFrames Parms{};

	Parms.Sequence = Sequence;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

class UMovieSceneSection* UMovieSceneTrackExtensions::AddSection(class UMovieSceneTrack* track)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("MovieSceneTrackExtensions", "AddSection");

	Params::MovieSceneTrackExtensions_AddSection Parms{};

	Parms.track = track;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

struct FColor UMovieSceneTrackExtensions::GetColorTint(class UMovieSceneTrack* track)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("MovieSceneTrackExtensions", "GetColorTint");

	Params::MovieSceneTrackExtensions_GetColorTint Parms{};

	Parms.track = track;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

class FText UMovieSceneTrackExtensions::GetDisplayName(class UMovieSceneTrack* track)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("MovieSceneTrackExtensions", "GetDisplayName");

	Params::MovieSceneTrackExtensions_GetDisplayName Parms{};

	Parms.track = track;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

TArray<class UMovieSceneSection*> UMovieSceneTrackExtensions::GetSections(class UMovieSceneTrack* track)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("MovieSceneTrackExtensions", "GetSections");

	Params::MovieSceneTrackExtensions_GetSections Parms{};

	Parms.track = track;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

class UMovieSceneSection* UMovieSceneTrackExtensions::GetSectionToKey(class UMovieSceneTrack* track)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("MovieSceneTrackExtensions", "GetSectionToKey");

	Params::MovieSceneTrackExtensions_GetSectionToKey Parms{};

	Parms.track = track;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

int32 UMovieSceneTrackExtensions::GetSortingOrder(class UMovieSceneTrack* track)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("MovieSceneTrackExtensions", "GetSortingOrder");

	Params::MovieSceneTrackExtensions_GetSortingOrder Parms{};

	Parms.track = track;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

class FText UMovieSceneTrackExtensions::GetTrackRowDisplayName(class UMovieSceneTrack* track, int32 RowIndex)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("MovieSceneTrackExtensions", "GetTrackRowDisplayName");

	Params::MovieSceneTrackExtensions_GetTrackRowDisplayName Parms{};

	Parms.track = track;
	Parms.RowIndex = RowIndex;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

void UMovieSceneTrackExtensions::RemoveSection(class UMovieSceneTrack* track, class UMovieSceneSection* Section)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("MovieSceneTrackExtensions", "RemoveSection");

	Params::MovieSceneTrackExtensions_RemoveSection Parms{};

	Parms.track = track;
	Parms.Section = Section;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UMovieSceneTrackExtensions::SetColorTint(class UMovieSceneTrack* track, const struct FColor& ColorTint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("MovieSceneTrackExtensions", "SetColorTint");

	Params::MovieSceneTrackExtensions_SetColorTint Parms{};

	Parms.track = track;
	Parms.ColorTint = std::move(ColorTint);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UMovieSceneTrackExtensions::SetDisplayName(class UMovieSceneTrack* track, const class FText& InName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("MovieSceneTrackExtensions", "SetDisplayName");

	Params::MovieSceneTrackExtensions_SetDisplayName Parms{};

	Parms.track = track;
	Parms.InName = std::move(InName);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UMovieSceneTrackExtensions::SetSectionToKey(class UMovieSceneTrack* track, class UMovieSceneSection* Section)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("MovieSceneTrackExtensions", "SetSectionToKey");

	Params::MovieSceneTrackExtensions_SetSectionToKey Parms{};

	Parms.track = track;
	Parms.Section = Section;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UMovieSceneTrackExtensions::SetSortingOrder(class UMovieSceneTrack* track, int32 SortingOrder)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("MovieSceneTrackExtensions", "SetSortingOrder");

	Params::MovieSceneTrackExtensions_SetSortingOrder Parms{};

	Parms.track = track;
	Parms.SortingOrder = SortingOrder;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UMovieSceneTrackExtensions::SetTrackRowDisplayName(class UMovieSceneTrack* track, const class FText& InName, int32 RowIndex)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("MovieSceneTrackExtensions", "SetTrackRowDisplayName");

	Params::MovieSceneTrackExtensions_SetTrackRowDisplayName Parms{};

	Parms.track = track;
	Parms.InName = std::move(InName);
	Parms.RowIndex = RowIndex;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

int32 UMovieSceneFloatVectorTrackExtensions::GetNumChannelsUsed(class UMovieSceneFloatVectorTrack* track)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("MovieSceneFloatVectorTrackExtensions", "GetNumChannelsUsed");

	Params::MovieSceneFloatVectorTrackExtensions_GetNumChannelsUsed Parms{};

	Parms.track = track;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

void UMovieSceneFloatVectorTrackExtensions::SetNumChannelsUsed(class UMovieSceneFloatVectorTrack* track, int32 InNumChannelsUsed)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("MovieSceneFloatVectorTrackExtensions", "SetNumChannelsUsed");

	Params::MovieSceneFloatVectorTrackExtensions_SetNumChannelsUsed Parms{};

	Parms.track = track;
	Parms.InNumChannelsUsed = InNumChannelsUsed;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

int32 UMovieSceneDoubleVectorTrackExtensions::GetNumChannelsUsed(class UMovieSceneDoubleVectorTrack* track)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("MovieSceneDoubleVectorTrackExtensions", "GetNumChannelsUsed");

	Params::MovieSceneDoubleVectorTrackExtensions_GetNumChannelsUsed Parms{};

	Parms.track = track;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

void UMovieSceneDoubleVectorTrackExtensions::SetNumChannelsUsed(class UMovieSceneDoubleVectorTrack* track, int32 InNumChannelsUsed)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("MovieSceneDoubleVectorTrackExtensions", "SetNumChannelsUsed");

	Params::MovieSceneDoubleVectorTrackExtensions_SetNumChannelsUsed Parms{};

	Parms.track = track;
	Parms.InNumChannelsUsed = InNumChannelsUsed;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

int32 USequencerScriptingRangeExtensions::GetEndFrame(const struct FSequencerScriptingRange& Range)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("SequencerScriptingRangeExtensions", "GetEndFrame");

	Params::SequencerScriptingRangeExtensions_GetEndFrame Parms{};

	Parms.Range = std::move(Range);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

float USequencerScriptingRangeExtensions::GetEndSeconds(const struct FSequencerScriptingRange& Range)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("SequencerScriptingRangeExtensions", "GetEndSeconds");

	Params::SequencerScriptingRangeExtensions_GetEndSeconds Parms{};

	Parms.Range = std::move(Range);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

int32 USequencerScriptingRangeExtensions::GetStartFrame(const struct FSequencerScriptingRange& Range)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("SequencerScriptingRangeExtensions", "GetStartFrame");

	Params::SequencerScriptingRangeExtensions_GetStartFrame Parms{};

	Parms.Range = std::move(Range);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

float USequencerScriptingRangeExtensions::GetStartSeconds(const struct FSequencerScriptingRange& Range)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("SequencerScriptingRangeExtensions", "GetStartSeconds");

	Params::SequencerScriptingRangeExtensions_GetStartSeconds Parms{};

	Parms.Range = std::move(Range);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

bool USequencerScriptingRangeExtensions::HasEnd(const struct FSequencerScriptingRange& Range)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("SequencerScriptingRangeExtensions", "HasEnd");

	Params::SequencerScriptingRangeExtensions_HasEnd Parms{};

	Parms.Range = std::move(Range);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

bool USequencerScriptingRangeExtensions::HasStart(const struct FSequencerScriptingRange& Range)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("SequencerScriptingRangeExtensions", "HasStart");

	Params::SequencerScriptingRangeExtensions_HasStart Parms{};

	Parms.Range = std::move(Range);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

void USequencerScriptingRangeExtensions::RemoveEnd(struct FSequencerScriptingRange& Range)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("SequencerScriptingRangeExtensions", "RemoveEnd");

	Params::SequencerScriptingRangeExtensions_RemoveEnd Parms{};

	Parms.Range = std::move(Range);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	Range = std::move(Parms.Range);
}

void USequencerScriptingRangeExtensions::RemoveStart(struct FSequencerScriptingRange& Range)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("SequencerScriptingRangeExtensions", "RemoveStart");

	Params::SequencerScriptingRangeExtensions_RemoveStart Parms{};

	Parms.Range = std::move(Range);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	Range = std::move(Parms.Range);
}

void USequencerScriptingRangeExtensions::SetEndFrame(struct FSequencerScriptingRange& Range, int32 End)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("SequencerScriptingRangeExtensions", "SetEndFrame");

	Params::SequencerScriptingRangeExtensions_SetEndFrame Parms{};

	Parms.Range = std::move(Range);
	Parms.End = End;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	Range = std::move(Parms.Range);
}

void USequencerScriptingRangeExtensions::SetEndSeconds(struct FSequencerScriptingRange& Range, float End)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("SequencerScriptingRangeExtensions", "SetEndSeconds");

	Params::SequencerScriptingRangeExtensions_SetEndSeconds Parms{};

	Parms.Range = std::move(Range);
	Parms.End = End;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	Range = std::move(Parms.Range);
}

void USequencerScriptingRangeExtensions::SetStartFrame(struct FSequencerScriptingRange& Range, int32 Start)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("SequencerScriptingRangeExtensions", "SetStartFrame");

	Params::SequencerScriptingRangeExtensions_SetStartFrame Parms{};

	Parms.Range = std::move(Range);
	Parms.Start = Start;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	Range = std::move(Parms.Range);
}

void USequencerScriptingRangeExtensions::SetStartSeconds(struct FSequencerScriptingRange& Range, float Start)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("SequencerScriptingRangeExtensions", "SetStartSeconds");

	Params::SequencerScriptingRangeExtensions_SetStartSeconds Parms{};

	Parms.Range = std::move(Range);
	Parms.Start = Start;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	Range = std::move(Parms.Range);
}

}
