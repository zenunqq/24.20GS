#pragma once

#include "Basic.hpp"

#include "AudioClustersRuntime_classes.hpp"
#include "AudioClustersRuntime_parameters.hpp"

namespace SDK
{

void UAudioClusterBehavior::OnActorAdded(class AActor* Actor)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AudioClusterBehavior", "OnActorAdded");

	Params::AudioClusterBehavior_OnActorAdded Parms{};

	Parms.Actor = Actor;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UAudioClusterBehavior::OnActorRemoved(class AActor* Actor)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AudioClusterBehavior", "OnActorRemoved");

	Params::AudioClusterBehavior_OnActorRemoved Parms{};

	Parms.Actor = Actor;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UAudioClusterBehavior::OnPositionUpdated(const struct FVector& Position)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AudioClusterBehavior", "OnPositionUpdated");

	Params::AudioClusterBehavior_OnPositionUpdated Parms{};

	Parms.Position = std::move(Position);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UAudioClusterBehavior::OnSizeUpdated(int32 Size)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AudioClusterBehavior", "OnSizeUpdated");

	Params::AudioClusterBehavior_OnSizeUpdated Parms{};

	Parms.Size = Size;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UAudioClusterBehavior::OnStart()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AudioClusterBehavior", "OnStart");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void UAudioClusterBehavior::OnStop()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AudioClusterBehavior", "OnStop");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

bool UAudioClustersSubsystem::AddConfigMap(class UAudioClusterConfigMap* Map)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AudioClustersSubsystem", "AddConfigMap");

	Params::AudioClustersSubsystem_AddConfigMap Parms{};

	Parms.Map = Map;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

bool UAudioClustersSubsystem::Register(const struct FAudioClusterActorInfo& ActorInfo)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AudioClustersSubsystem", "Register");

	Params::AudioClustersSubsystem_Register Parms{};

	Parms.ActorInfo = std::move(ActorInfo);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

bool UAudioClustersSubsystem::RegisterOneShot(const struct FAudioClusterOneShotInfo& OneShotInfo)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AudioClustersSubsystem", "RegisterOneShot");

	Params::AudioClustersSubsystem_RegisterOneShot Parms{};

	Parms.OneShotInfo = std::move(OneShotInfo);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

bool UAudioClustersSubsystem::RemoveConfigMap(class UAudioClusterConfigMap* Map)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AudioClustersSubsystem", "RemoveConfigMap");

	Params::AudioClustersSubsystem_RemoveConfigMap Parms{};

	Parms.Map = Map;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

void UAudioClustersSubsystem::SetListenerPosition(const struct FVector& InListenerPosition)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AudioClustersSubsystem", "SetListenerPosition");

	Params::AudioClustersSubsystem_SetListenerPosition Parms{};

	Parms.InListenerPosition = std::move(InListenerPosition);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

bool UAudioClustersSubsystem::SetParam(const struct FGameplayTag& tag, double Value)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AudioClustersSubsystem", "SetParam");

	Params::AudioClustersSubsystem_SetParam Parms{};

	Parms.tag = std::move(tag);
	Parms.Value = Value;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

bool UAudioClustersSubsystem::Unregister(const struct FAudioClusterActorInfo& ActorInfo)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AudioClustersSubsystem", "Unregister");

	Params::AudioClustersSubsystem_Unregister Parms{};

	Parms.ActorInfo = std::move(ActorInfo);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

void UAudioClustersSubsystem::UpdateClusters(float DeltaTimeSeconds)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AudioClustersSubsystem", "UpdateClusters");

	Params::AudioClustersSubsystem_UpdateClusters Parms{};

	Parms.DeltaTimeSeconds = DeltaTimeSeconds;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

}
