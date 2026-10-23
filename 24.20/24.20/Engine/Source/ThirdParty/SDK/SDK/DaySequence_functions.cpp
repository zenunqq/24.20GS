#pragma once

#include "Basic.hpp"

#include "DaySequence_classes.hpp"
#include "DaySequence_parameters.hpp"

namespace SDK
{

void UDaySequenceModifierComponent::AddBoolOverride(class UObject* Object, class FName PropertyName, bool bValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DaySequenceModifierComponent", "AddBoolOverride");

	Params::DaySequenceModifierComponent_AddBoolOverride Parms{};

	Parms.Object = Object;
	Parms.PropertyName = PropertyName;
	Parms.bValue = bValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UDaySequenceModifierComponent::AddColorMaterialParameterOverride(class UObject* Object, int32 MaterialIndex, class FName ParameterName, const struct FLinearColor& Value)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DaySequenceModifierComponent", "AddColorMaterialParameterOverride");

	Params::DaySequenceModifierComponent_AddColorMaterialParameterOverride Parms{};

	Parms.Object = Object;
	Parms.MaterialIndex = MaterialIndex;
	Parms.ParameterName = ParameterName;
	Parms.Value = std::move(Value);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UDaySequenceModifierComponent::AddColorOverride(class UObject* Object, class FName PropertyName, const struct FLinearColor& Value)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DaySequenceModifierComponent", "AddColorOverride");

	Params::DaySequenceModifierComponent_AddColorOverride Parms{};

	Parms.Object = Object;
	Parms.PropertyName = PropertyName;
	Parms.Value = std::move(Value);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UDaySequenceModifierComponent::AddMaterialOverride(class UObject* Object, int32 MaterialIndex, class UMaterialInterface* Value)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DaySequenceModifierComponent", "AddMaterialOverride");

	Params::DaySequenceModifierComponent_AddMaterialOverride Parms{};

	Parms.Object = Object;
	Parms.MaterialIndex = MaterialIndex;
	Parms.Value = Value;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UDaySequenceModifierComponent::AddScalarMaterialParameterOverride(class UObject* Object, int32 MaterialIndex, class FName ParameterName, float Value)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DaySequenceModifierComponent", "AddScalarMaterialParameterOverride");

	Params::DaySequenceModifierComponent_AddScalarMaterialParameterOverride Parms{};

	Parms.Object = Object;
	Parms.MaterialIndex = MaterialIndex;
	Parms.ParameterName = ParameterName;
	Parms.Value = Value;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UDaySequenceModifierComponent::AddScalarOverride(class UObject* Object, class FName PropertyName, double Value)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DaySequenceModifierComponent", "AddScalarOverride");

	Params::DaySequenceModifierComponent_AddScalarOverride Parms{};

	Parms.Object = Object;
	Parms.PropertyName = PropertyName;
	Parms.Value = Value;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UDaySequenceModifierComponent::AddStaticTimeOfDayOverride(class ADaySequenceActor* Actor, float Hours)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DaySequenceModifierComponent", "AddStaticTimeOfDayOverride");

	Params::DaySequenceModifierComponent_AddStaticTimeOfDayOverride Parms{};

	Parms.Actor = Actor;
	Parms.Hours = Hours;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UDaySequenceModifierComponent::AddTransformOverride(class UObject* Object, const struct FTransform& Value)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DaySequenceModifierComponent", "AddTransformOverride");

	Params::DaySequenceModifierComponent_AddTransformOverride Parms{};

	Parms.Object = Object;
	Parms.Value = std::move(Value);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UDaySequenceModifierComponent::AddVectorOverride(class UObject* Object, class FName PropertyName, const struct FVector& Value)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DaySequenceModifierComponent", "AddVectorOverride");

	Params::DaySequenceModifierComponent_AddVectorOverride Parms{};

	Parms.Object = Object;
	Parms.PropertyName = PropertyName;
	Parms.Value = std::move(Value);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UDaySequenceModifierComponent::AddVisibilityOverride(class UObject* Object, bool bValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DaySequenceModifierComponent", "AddVisibilityOverride");

	Params::DaySequenceModifierComponent_AddVisibilityOverride Parms{};

	Parms.Object = Object;
	Parms.bValue = bValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UDaySequenceModifierComponent::BindToDaySequenceActor(class ADaySequenceActor* DaySequenceActor)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DaySequenceModifierComponent", "BindToDaySequenceActor");

	Params::DaySequenceModifierComponent_BindToDaySequenceActor Parms{};

	Parms.DaySequenceActor = DaySequenceActor;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UDaySequenceModifierComponent::DisableModifier()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DaySequenceModifierComponent", "DisableModifier");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void UDaySequenceModifierComponent::EnableModifier()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DaySequenceModifierComponent", "EnableModifier");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void UDaySequenceModifierComponent::ResetOverrides()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DaySequenceModifierComponent", "ResetOverrides");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void UDaySequenceModifierComponent::UnbindFromDaySequenceActor()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DaySequenceModifierComponent", "UnbindFromDaySequenceActor");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

bool ADaySequenceActor::ContainsDaySequence(const class UDaySequence* InDaySequence)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DaySequenceActor", "ContainsDaySequence");

	Params::DaySequenceActor_ContainsDaySequence Parms{};

	Parms.InDaySequence = InDaySequence;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

int32 ADaySequenceActor::GetBias(class FName SequenceKey)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DaySequenceActor", "GetBias");

	Params::DaySequenceActor_GetBias Parms{};

	Parms.SequenceKey = SequenceKey;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

bool ADaySequenceActor::IsMuteSequence(class FName SequenceKey)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DaySequenceActor", "IsMuteSequence");

	Params::DaySequenceActor_IsMuteSequence Parms{};

	Parms.SequenceKey = SequenceKey;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

void ADaySequenceActor::Multicast_SetTimePerCycle(float InHours)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DaySequenceActor", "Multicast_SetTimePerCycle");

	Params::DaySequenceActor_Multicast_SetTimePerCycle Parms{};

	Parms.InHours = InHours;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void ADaySequenceActor::MuteSequence(class FName SequenceKey, bool bState)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DaySequenceActor", "MuteSequence");

	Params::DaySequenceActor_MuteSequence Parms{};

	Parms.SequenceKey = SequenceKey;
	Parms.bState = bState;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void ADaySequenceActor::Pause()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DaySequenceActor", "Pause");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void ADaySequenceActor::Play()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DaySequenceActor", "Play");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void ADaySequenceActor::RemoveStaticTimeOfDay(bool bResumeFromStaticTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DaySequenceActor", "RemoveStaticTimeOfDay");

	Params::DaySequenceActor_RemoveStaticTimeOfDay Parms{};

	Parms.bResumeFromStaticTime = bResumeFromStaticTime;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void ADaySequenceActor::SetBias(class FName SequenceKey, int32 Bias)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DaySequenceActor", "SetBias");

	Params::DaySequenceActor_SetBias Parms{};

	Parms.SequenceKey = SequenceKey;
	Parms.Bias = Bias;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void ADaySequenceActor::SetDaySequence(class FName SequenceName, class UDaySequence* InDaySequence)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DaySequenceActor", "SetDaySequence");

	Params::DaySequenceActor_SetDaySequence Parms{};

	Parms.SequenceName = SequenceName;
	Parms.InDaySequence = InDaySequence;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void ADaySequenceActor::SetReplicatePlayback(bool ReplicatePlayback)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DaySequenceActor", "SetReplicatePlayback");

	Params::DaySequenceActor_SetReplicatePlayback Parms{};

	Parms.ReplicatePlayback = ReplicatePlayback;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void ADaySequenceActor::SetStaticTimeOfDay(float InHours)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DaySequenceActor", "SetStaticTimeOfDay");

	Params::DaySequenceActor_SetStaticTimeOfDay Parms{};

	Parms.InHours = InHours;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

bool ADaySequenceActor::SetTimeOfDay(float InHours)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DaySequenceActor", "SetTimeOfDay");

	Params::DaySequenceActor_SetTimeOfDay Parms{};

	Parms.InHours = InHours;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

float ADaySequenceActor::GetDayLength() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DaySequenceActor", "GetDayLength");

	Params::DaySequenceActor_GetDayLength Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

class UDaySequence* ADaySequenceActor::GetDaySequence(class FName SequenceName) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DaySequenceActor", "GetDaySequence");

	Params::DaySequenceActor_GetDaySequence Parms{};

	Parms.SequenceName = SequenceName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

class UDaySequence* ADaySequenceActor::GetFirstDaySequence() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DaySequenceActor", "GetFirstDaySequence");

	Params::DaySequenceActor_GetFirstDaySequence Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

float ADaySequenceActor::GetInitialTimeOfDay() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DaySequenceActor", "GetInitialTimeOfDay");

	Params::DaySequenceActor_GetInitialTimeOfDay Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

class UDaySequencePlayer* ADaySequenceActor::GetSequencePlayer() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DaySequenceActor", "GetSequencePlayer");

	Params::DaySequenceActor_GetSequencePlayer Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

float ADaySequenceActor::GetStaticTimeOfDay() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DaySequenceActor", "GetStaticTimeOfDay");

	Params::DaySequenceActor_GetStaticTimeOfDay Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

float ADaySequenceActor::GetTimeOfDay() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DaySequenceActor", "GetTimeOfDay");

	Params::DaySequenceActor_GetTimeOfDay Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

float ADaySequenceActor::GetTimePerCycle() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DaySequenceActor", "GetTimePerCycle");

	Params::DaySequenceActor_GetTimePerCycle Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

bool ADaySequenceActor::HasStaticTimeOfDay() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DaySequenceActor", "HasStaticTimeOfDay");

	Params::DaySequenceActor_HasStaticTimeOfDay Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

bool ADaySequenceActor::IsPaused() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DaySequenceActor", "IsPaused");

	Params::DaySequenceActor_IsPaused Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

bool ADaySequenceActor::IsPlaying() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DaySequenceActor", "IsPlaying");

	Params::DaySequenceActor_IsPlaying Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

class AActor* UDaySequenceDirector::GetBoundActor(const struct FMovieSceneObjectBindingID& ObjectBinding)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DaySequenceDirector", "GetBoundActor");

	Params::DaySequenceDirector_GetBoundActor Parms{};

	Parms.ObjectBinding = std::move(ObjectBinding);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

TArray<class AActor*> UDaySequenceDirector::GetBoundActors(const struct FMovieSceneObjectBindingID& ObjectBinding)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DaySequenceDirector", "GetBoundActors");

	Params::DaySequenceDirector_GetBoundActors Parms{};

	Parms.ObjectBinding = std::move(ObjectBinding);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

class UObject* UDaySequenceDirector::GetBoundObject(const struct FMovieSceneObjectBindingID& ObjectBinding)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DaySequenceDirector", "GetBoundObject");

	Params::DaySequenceDirector_GetBoundObject Parms{};

	Parms.ObjectBinding = std::move(ObjectBinding);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

TArray<class UObject*> UDaySequenceDirector::GetBoundObjects(const struct FMovieSceneObjectBindingID& ObjectBinding)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DaySequenceDirector", "GetBoundObjects");

	Params::DaySequenceDirector_GetBoundObjects Parms{};

	Parms.ObjectBinding = std::move(ObjectBinding);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

class UMovieSceneSequence* UDaySequenceDirector::GetSequence()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DaySequenceDirector", "GetSequence");

	Params::DaySequenceDirector_GetSequence Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

void UDaySequenceDirector::OnCreated()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DaySequenceDirector", "OnCreated");

	UObject::ProcessEvent(Func, nullptr);
}

struct FQualifiedFrameTime UDaySequenceDirector::GetCurrentTime() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DaySequenceDirector", "GetCurrentTime");

	Params::DaySequenceDirector_GetCurrentTime Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

struct FQualifiedFrameTime UDaySequenceDirector::GetMasterSequenceTime() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DaySequenceDirector", "GetMasterSequenceTime");

	Params::DaySequenceDirector_GetMasterSequenceTime Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

struct FQualifiedFrameTime UDaySequenceDirector::GetRootSequenceTime() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DaySequenceDirector", "GetRootSequenceTime");

	Params::DaySequenceDirector_GetRootSequenceTime Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

class ADaySequenceActor* UDaySequenceSubsystem::GetDaySequenceActor() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DaySequenceSubsystem", "GetDaySequenceActor");

	Params::DaySequenceSubsystem_GetDaySequenceActor Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

}
