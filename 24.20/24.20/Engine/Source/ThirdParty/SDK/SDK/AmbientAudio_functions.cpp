#pragma once

#include "Basic.hpp"

#include "AmbientAudio_classes.hpp"
#include "AmbientAudio_parameters.hpp"

namespace SDK
{

void UAmbientAudioComponent::SetAmbientAsset(class UAmbientAudioDataAsset* InAmbientAsset)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AmbientAudioComponent", "SetAmbientAsset");

	Params::AmbientAudioComponent_SetAmbientAsset Parms{};

	Parms.InAmbientAsset = InAmbientAsset;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UAmbientAudioComponent::SetCrossfadeTime(float InCrossfadeTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AmbientAudioComponent", "SetCrossfadeTime");

	Params::AmbientAudioComponent_SetCrossfadeTime Parms{};

	Parms.InCrossfadeTime = InCrossfadeTime;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UAmbientAudioComponent::SetPriority(int32 InPriority)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AmbientAudioComponent", "SetPriority");

	Params::AmbientAudioComponent_SetPriority Parms{};

	Parms.InPriority = InPriority;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UAmbientAudioSubsystem::AddAmbientEntry(class FName AmbientName, class UAmbientAudioDataAsset* Asset, int32 Priority, float CrossfadeTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AmbientAudioSubsystem", "AddAmbientEntry");

	Params::AmbientAudioSubsystem_AddAmbientEntry Parms{};

	Parms.AmbientName = AmbientName;
	Parms.Asset = Asset;
	Parms.Priority = Priority;
	Parms.CrossfadeTime = CrossfadeTime;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UAmbientAudioSubsystem::AddGameplayTag(const struct FGameplayTag& GameplayTag)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AmbientAudioSubsystem", "AddGameplayTag");

	Params::AmbientAudioSubsystem_AddGameplayTag Parms{};

	Parms.GameplayTag = std::move(GameplayTag);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

class UAudioParameterComponent* UAmbientAudioSubsystem::GetAudioParameterComponent()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AmbientAudioSubsystem", "GetAudioParameterComponent");

	Params::AmbientAudioSubsystem_GetAudioParameterComponent Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

void UAmbientAudioSubsystem::RemoveAmbientEntry(class FName AmbientName, float CrossfadeOverride)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AmbientAudioSubsystem", "RemoveAmbientEntry");

	Params::AmbientAudioSubsystem_RemoveAmbientEntry Parms{};

	Parms.AmbientName = AmbientName;
	Parms.CrossfadeOverride = CrossfadeOverride;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UAmbientAudioSubsystem::RemoveGameplayTag(const struct FGameplayTag& GameplayTag)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AmbientAudioSubsystem", "RemoveGameplayTag");

	Params::AmbientAudioSubsystem_RemoveGameplayTag Parms{};

	Parms.GameplayTag = std::move(GameplayTag);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

}
