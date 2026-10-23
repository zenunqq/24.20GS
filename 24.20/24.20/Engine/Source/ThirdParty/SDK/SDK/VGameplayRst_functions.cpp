#pragma once

#include "Basic.hpp"

#include "VGameplayRst_classes.hpp"
#include "VGameplayRst_parameters.hpp"

namespace SDK
{

void UAudioComponentBase::OnRep_ActiveSoundInfo()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AudioComponentBase", "OnRep_ActiveSoundInfo");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void UAudioComponentBase::OnRep_SoundAsset()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AudioComponentBase", "OnRep_SoundAsset");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void UControllerStateComponent::OnRep_ActiveStates()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ControllerStateComponent", "OnRep_ActiveStates");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void UVerseLevelStreamingPlayerControllerRpcComponent::TellServer_ClientLevelLoaded(class UVerseLevelStreamingComponentBase* LevelStreamingComponent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("VerseLevelStreamingPlayerControllerRpcComponent", "TellServer_ClientLevelLoaded");

	Params::VerseLevelStreamingPlayerControllerRpcComponent_TellServer_ClientLevelLoaded Parms{};

	Parms.LevelStreamingComponent = LevelStreamingComponent;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UVerseLevelStreamingPlayerControllerRpcComponent::TellServer_ClientLevelUnloaded(class UVerseLevelStreamingComponentBase* LevelStreamingComponent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("VerseLevelStreamingPlayerControllerRpcComponent", "TellServer_ClientLevelUnloaded");

	Params::VerseLevelStreamingPlayerControllerRpcComponent_TellServer_ClientLevelUnloaded Parms{};

	Parms.LevelStreamingComponent = LevelStreamingComponent;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UVerseLevelStreamingComponentBase::OnLevelShown_Client()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("VerseLevelStreamingComponentBase", "OnLevelShown_Client");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void UVerseLevelStreamingComponentBase::OnLevelShown_Server()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("VerseLevelStreamingComponentBase", "OnLevelShown_Server");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void UVerseLevelStreamingComponentBase::OnLevelUnloaded_Client()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("VerseLevelStreamingComponentBase", "OnLevelUnloaded_Client");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void UVerseLevelStreamingComponentBase::OnLevelUnloaded_Server()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("VerseLevelStreamingComponentBase", "OnLevelUnloaded_Server");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void UVerseLevelStreamingComponentBase::OnRep_NewLevel()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("VerseLevelStreamingComponentBase", "OnRep_NewLevel");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void UVerseLightPropertiesBase::OnRep_Intensity()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("VerseLightPropertiesBase", "OnRep_Intensity");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void UVerseLightPropertiesBase::OnRep_LightColor()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("VerseLightPropertiesBase", "OnRep_LightColor");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void UVerseLightPropertiesBase::OnRep_LightComponent()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("VerseLightPropertiesBase", "OnRep_LightComponent");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void UVerseLocalLightProperties::OnRep_AttenuationRadius()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("VerseLocalLightProperties", "OnRep_AttenuationRadius");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void UVersePointLightProperties::OnRep_SourceLength()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("VersePointLightProperties", "OnRep_SourceLength");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void UVersePointLightProperties::OnRep_SourceRadius()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("VersePointLightProperties", "OnRep_SourceRadius");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void UVerseSpotLightProperties::OnRep_InnerConeAngle()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("VerseSpotLightProperties", "OnRep_InnerConeAngle");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void UVerseSpotLightProperties::OnRep_OuterConeAngle()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("VerseSpotLightProperties", "OnRep_OuterConeAngle");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void UParticleSystemComponentBase::OnRep_bActive()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ParticleSystemComponentBase", "OnRep_bActive");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void UParticleSystemComponentBase::OnRep_ParticleSystemAsset()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ParticleSystemComponentBase", "OnRep_ParticleSystemAsset");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

}
