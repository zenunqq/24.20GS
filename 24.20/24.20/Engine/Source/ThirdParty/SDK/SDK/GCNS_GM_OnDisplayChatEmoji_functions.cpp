#pragma once

#include "Basic.hpp"

#include "GCNS_GM_OnDisplayChatEmoji_classes.hpp"
#include "GCNS_GM_OnDisplayChatEmoji_parameters.hpp"

namespace SDK
{

void UGCNS_GM_OnDisplayChatEmoji_C::K2_HandleGameplayCue(class AActor* MyTarget, EGameplayCueEvent EventType, const struct FGameplayCueParameters& Parameters) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GCNS_GM_OnDisplayChatEmoji_C", "K2_HandleGameplayCue");

	Params::GCNS_GM_OnDisplayChatEmoji_C_K2_HandleGameplayCue Parms{};

	Parms.MyTarget = MyTarget;
	Parms.EventType = EventType;
	Parms.Parameters = std::move(Parameters);

	UObject::ProcessEvent(Func, &Parms);
}

bool UGCNS_GM_OnDisplayChatEmoji_C::OnActive(class AActor* MyTarget, const struct FGameplayCueParameters& Parameters) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GCNS_GM_OnDisplayChatEmoji_C", "OnActive");

	Params::GCNS_GM_OnDisplayChatEmoji_C_OnActive Parms{};

	Parms.MyTarget = MyTarget;
	Parms.Parameters = std::move(Parameters);

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

bool UGCNS_GM_OnDisplayChatEmoji_C::OnExecute(class AActor* MyTarget, const struct FGameplayCueParameters& Parameters) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GCNS_GM_OnDisplayChatEmoji_C", "OnExecute");

	Params::GCNS_GM_OnDisplayChatEmoji_C_OnExecute Parms{};

	Parms.MyTarget = MyTarget;
	Parms.Parameters = std::move(Parameters);

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

bool UGCNS_GM_OnDisplayChatEmoji_C::OnRemove(class AActor* MyTarget, const struct FGameplayCueParameters& Parameters) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GCNS_GM_OnDisplayChatEmoji_C", "OnRemove");

	Params::GCNS_GM_OnDisplayChatEmoji_C_OnRemove Parms{};

	Parms.MyTarget = MyTarget;
	Parms.Parameters = std::move(Parameters);

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

void UGCNS_GM_OnDisplayChatEmoji_C::OnStartParticleSystemSpawned(class UParticleSystemComponent* SpawnedParticleSysComponent, const struct FGameplayCueParameters& Parameters) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GCNS_GM_OnDisplayChatEmoji_C", "OnStartParticleSystemSpawned");

	Params::GCNS_GM_OnDisplayChatEmoji_C_OnStartParticleSystemSpawned Parms{};

	Parms.SpawnedParticleSysComponent = SpawnedParticleSysComponent;
	Parms.Parameters = std::move(Parameters);

	UObject::ProcessEvent(Func, &Parms);
}

}
