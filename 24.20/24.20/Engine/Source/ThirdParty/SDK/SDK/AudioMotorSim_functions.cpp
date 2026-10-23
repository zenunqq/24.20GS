#pragma once

#include "Basic.hpp"

#include "AudioMotorSim_classes.hpp"
#include "AudioMotorSim_parameters.hpp"

namespace SDK
{

void UAudioMotorModelComponent::AddMotorAudioComponent(TScriptInterface<class IAudioMotorSimOutput> InComponent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AudioMotorModelComponent", "AddMotorAudioComponent");

	Params::AudioMotorModelComponent_AddMotorAudioComponent Parms{};

	Parms.InComponent = InComponent;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UAudioMotorModelComponent::AddMotorSimComponent(TScriptInterface<class IAudioMotorSim> InComponent, const int32 SortOrder)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AudioMotorModelComponent", "AddMotorSimComponent");

	Params::AudioMotorModelComponent_AddMotorSimComponent Parms{};

	Parms.InComponent = InComponent;
	Parms.SortOrder = SortOrder;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UAudioMotorModelComponent::RemoveMotorAudioComponent(TScriptInterface<class IAudioMotorSimOutput> InComponent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AudioMotorModelComponent", "RemoveMotorAudioComponent");

	Params::AudioMotorModelComponent_RemoveMotorAudioComponent Parms{};

	Parms.InComponent = InComponent;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UAudioMotorModelComponent::RemoveMotorSimComponent(TScriptInterface<class IAudioMotorSim> InComponent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AudioMotorModelComponent", "RemoveMotorSimComponent");

	Params::AudioMotorModelComponent_RemoveMotorSimComponent Parms{};

	Parms.InComponent = InComponent;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UAudioMotorModelComponent::Reset()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AudioMotorModelComponent", "Reset");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void UAudioMotorModelComponent::StartOutput()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AudioMotorModelComponent", "StartOutput");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void UAudioMotorModelComponent::StopOutput()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AudioMotorModelComponent", "StopOutput");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void UAudioMotorModelComponent::Update(const struct FAudioMotorSimInputContext& Input)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AudioMotorModelComponent", "Update");

	Params::AudioMotorModelComponent_Update Parms{};

	Parms.Input = std::move(Input);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

struct FAudioMotorSimInputContext UAudioMotorModelComponent::GetCachedInputData() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AudioMotorModelComponent", "GetCachedInputData");

	Params::AudioMotorModelComponent_GetCachedInputData Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

int32 UAudioMotorModelComponent::GetGear() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AudioMotorModelComponent", "GetGear");

	Params::AudioMotorModelComponent_GetGear Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

float UAudioMotorModelComponent::GetRpm() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AudioMotorModelComponent", "GetRpm");

	Params::AudioMotorModelComponent_GetRpm Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

struct FAudioMotorSimRuntimeContext UAudioMotorModelComponent::GetRuntimeInfo() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AudioMotorModelComponent", "GetRuntimeInfo");

	Params::AudioMotorModelComponent_GetRuntimeInfo Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

void UAudioMotorSimComponent::BP_Reset()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AudioMotorSimComponent", "BP_Reset");

	UObject::ProcessEvent(Func, nullptr);
}

bool UAudioMotorSimComponent::BP_Update(struct FAudioMotorSimInputContext& Input, struct FAudioMotorSimRuntimeContext& RuntimeInfo)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AudioMotorSimComponent", "BP_Update");

	Params::AudioMotorSimComponent_BP_Update Parms{};

	Parms.Input = std::move(Input);
	Parms.RuntimeInfo = std::move(RuntimeInfo);

	UObject::ProcessEvent(Func, &Parms);

	Input = std::move(Parms.Input);
	RuntimeInfo = std::move(Parms.RuntimeInfo);

	return Parms.ReturnValue;
}

}
