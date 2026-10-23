#pragma once

#include "Basic.hpp"

#include "UIChart_classes.hpp"
#include "UIChart_parameters.hpp"

namespace SDK
{

void UUIStateChartContext::BP_ApplyCommonChanges(const struct FUIStateChartContextChangeSet& ContextChanges)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UIStateChartContext", "BP_ApplyCommonChanges");

	Params::UIStateChartContext_BP_ApplyCommonChanges Parms{};

	Parms.ContextChanges = std::move(ContextChanges);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UUIStateChartContext::BP_ApplyPlayerChanges(const class ULocalPlayer* LocalPlayer, const struct FUIStateChartContextChangeSet& ContextChanges)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UIStateChartContext", "BP_ApplyPlayerChanges");

	Params::UIStateChartContext_BP_ApplyPlayerChanges Parms{};

	Parms.LocalPlayer = LocalPlayer;
	Parms.ContextChanges = std::move(ContextChanges);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UUIStateChartContext::BP_ClearCommonValue(const struct FGameplayTag& Key)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UIStateChartContext", "BP_ClearCommonValue");

	Params::UIStateChartContext_BP_ClearCommonValue Parms{};

	Parms.Key = std::move(Key);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UUIStateChartContext::BP_ClearEntry(const struct FGameplayTag& Key)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UIStateChartContext", "BP_ClearEntry");

	Params::UIStateChartContext_BP_ClearEntry Parms{};

	Parms.Key = std::move(Key);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UUIStateChartContext::BP_ClearPlayerValue(const class ULocalPlayer* LocalPlayer, const struct FGameplayTag& Key)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UIStateChartContext", "BP_ClearPlayerValue");

	Params::UIStateChartContext_BP_ClearPlayerValue Parms{};

	Parms.LocalPlayer = LocalPlayer;
	Parms.Key = std::move(Key);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UUIStateChartContext::BP_SetCommonBoolValue(const struct FGameplayTag& Key, bool Value)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UIStateChartContext", "BP_SetCommonBoolValue");

	Params::UIStateChartContext_BP_SetCommonBoolValue Parms{};

	Parms.Key = std::move(Key);
	Parms.Value = Value;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UUIStateChartContext::BP_SetCommonFloatValue(const struct FGameplayTag& Key, float Value)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UIStateChartContext", "BP_SetCommonFloatValue");

	Params::UIStateChartContext_BP_SetCommonFloatValue Parms{};

	Parms.Key = std::move(Key);
	Parms.Value = Value;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UUIStateChartContext::BP_SetCommonIntValue(const struct FGameplayTag& Key, int32 Value)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UIStateChartContext", "BP_SetCommonIntValue");

	Params::UIStateChartContext_BP_SetCommonIntValue Parms{};

	Parms.Key = std::move(Key);
	Parms.Value = Value;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UUIStateChartContext::BP_SetCommonStringValue(const struct FGameplayTag& Key, const class FString& Value)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UIStateChartContext", "BP_SetCommonStringValue");

	Params::UIStateChartContext_BP_SetCommonStringValue Parms{};

	Parms.Key = std::move(Key);
	Parms.Value = std::move(Value);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UUIStateChartContext::BP_SetPlayerBoolValue(const class ULocalPlayer* LocalPlayer, const struct FGameplayTag& Key, bool Value)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UIStateChartContext", "BP_SetPlayerBoolValue");

	Params::UIStateChartContext_BP_SetPlayerBoolValue Parms{};

	Parms.LocalPlayer = LocalPlayer;
	Parms.Key = std::move(Key);
	Parms.Value = Value;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UUIStateChartContext::BP_SetPlayerFloatValue(const class ULocalPlayer* LocalPlayer, const struct FGameplayTag& Key, float Value)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UIStateChartContext", "BP_SetPlayerFloatValue");

	Params::UIStateChartContext_BP_SetPlayerFloatValue Parms{};

	Parms.LocalPlayer = LocalPlayer;
	Parms.Key = std::move(Key);
	Parms.Value = Value;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UUIStateChartContext::BP_SetPlayerStringValue(const class ULocalPlayer* LocalPlayer, const struct FGameplayTag& Key, const class FString& Value)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UIStateChartContext", "BP_SetPlayerStringValue");

	Params::UIStateChartContext_BP_SetPlayerStringValue Parms{};

	Parms.LocalPlayer = LocalPlayer;
	Parms.Key = std::move(Key);
	Parms.Value = std::move(Value);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UUIStateChartContext::BP_SetPlayerValue(const class ULocalPlayer* LocalPlayer, const struct FGameplayTag& Key, int32 Value)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UIStateChartContext", "BP_SetPlayerValue");

	Params::UIStateChartContext_BP_SetPlayerValue Parms{};

	Parms.LocalPlayer = LocalPlayer;
	Parms.Key = std::move(Key);
	Parms.Value = Value;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

class UUIStateChartContextEntry* UUIStateChartContext::BP_FindEntry(const struct FGameplayTag& Key) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UIStateChartContext", "BP_FindEntry");

	Params::UIStateChartContext_BP_FindEntry Parms{};

	Parms.Key = std::move(Key);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

bool UUIStateChartContextEntry::GetCommonValueAsBool() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UIStateChartContextEntry", "GetCommonValueAsBool");

	Params::UIStateChartContextEntry_GetCommonValueAsBool Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

float UUIStateChartContextEntry::GetCommonValueAsFloat() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UIStateChartContextEntry", "GetCommonValueAsFloat");

	Params::UIStateChartContextEntry_GetCommonValueAsFloat Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

int32 UUIStateChartContextEntry::GetCommonValueAsInt() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UIStateChartContextEntry", "GetCommonValueAsInt");

	Params::UIStateChartContextEntry_GetCommonValueAsInt Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

class FString UUIStateChartContextEntry::GetCommonValueAsString() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UIStateChartContextEntry", "GetCommonValueAsString");

	Params::UIStateChartContextEntry_GetCommonValueAsString Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

bool UUIStateChartContextEntry::GetPlayerValueAsBool(const class ULocalPlayer* InLocalPlayer) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UIStateChartContextEntry", "GetPlayerValueAsBool");

	Params::UIStateChartContextEntry_GetPlayerValueAsBool Parms{};

	Parms.InLocalPlayer = InLocalPlayer;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

float UUIStateChartContextEntry::GetPlayerValueAsFloat(const class ULocalPlayer* InLocalPlayer) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UIStateChartContextEntry", "GetPlayerValueAsFloat");

	Params::UIStateChartContextEntry_GetPlayerValueAsFloat Parms{};

	Parms.InLocalPlayer = InLocalPlayer;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

int32 UUIStateChartContextEntry::GetPlayerValueAsInt(const class ULocalPlayer* InLocalPlayer) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UIStateChartContextEntry", "GetPlayerValueAsInt");

	Params::UIStateChartContextEntry_GetPlayerValueAsInt Parms{};

	Parms.InLocalPlayer = InLocalPlayer;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

class FString UUIStateChartContextEntry::GetPlayerValueAsString(const class ULocalPlayer* InLocalPlayer) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UIStateChartContextEntry", "GetPlayerValueAsString");

	Params::UIStateChartContextEntry_GetPlayerValueAsString Parms{};

	Parms.InLocalPlayer = InLocalPlayer;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

bool UUIStateChartContextEntry::IsEmptyForPlayer(class ULocalPlayer* InLocalPlayer) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UIStateChartContextEntry", "IsEmptyForPlayer");

	Params::UIStateChartContextEntry_IsEmptyForPlayer Parms{};

	Parms.InLocalPlayer = InLocalPlayer;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

int32 UUIStateChartManager::BP_AddStateChart(const class UUIStateChart* StateChartAsset, class ULocalPlayer* OwningLocalPlayer, const struct FGameplayTagContainer& AnimationHints, const struct FGameplayTag& InitialStateTag, EUIStateTransitionUrgency Urgency)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UIStateChartManager", "BP_AddStateChart");

	Params::UIStateChartManager_BP_AddStateChart Parms{};

	Parms.StateChartAsset = StateChartAsset;
	Parms.OwningLocalPlayer = OwningLocalPlayer;
	Parms.AnimationHints = std::move(AnimationHints);
	Parms.InitialStateTag = std::move(InitialStateTag);
	Parms.Urgency = Urgency;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

bool UUIStateChartManager::BP_DeactivateStateChart(int32 Key, const struct FGameplayTagContainer& AnimationHints, const struct FUIStateChartContextChangeSet& ContextChanges, EUIStateTransitionUrgency Urgency)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UIStateChartManager", "BP_DeactivateStateChart");

	Params::UIStateChartManager_BP_DeactivateStateChart Parms{};

	Parms.Key = Key;
	Parms.AnimationHints = std::move(AnimationHints);
	Parms.ContextChanges = std::move(ContextChanges);
	Parms.Urgency = Urgency;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

bool UUIStateChartManager::BP_DispatchTransitionEvent(const struct FGameplayTag& TransitionTag, const class ULocalPlayer* StateChartOwner, const struct FGameplayTagContainer& AnimationHints, const struct FUIStateChartContextChangeSet& ContextChanges, EUIStateTransitionUrgency Urgency, bool bBacktrack)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UIStateChartManager", "BP_DispatchTransitionEvent");

	Params::UIStateChartManager_BP_DispatchTransitionEvent Parms{};

	Parms.TransitionTag = std::move(TransitionTag);
	Parms.StateChartOwner = StateChartOwner;
	Parms.AnimationHints = std::move(AnimationHints);
	Parms.ContextChanges = std::move(ContextChanges);
	Parms.Urgency = Urgency;
	Parms.bBacktrack = bBacktrack;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

void UUIStateChartManager::BP_ReactivateStateChart(int32 Key, const struct FGameplayTagContainer& AnimationHints, const struct FGameplayTag& StateTag, EUIStateTransitionUrgency Urgency)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UIStateChartManager", "BP_ReactivateStateChart");

	Params::UIStateChartManager_BP_ReactivateStateChart Parms{};

	Parms.Key = Key;
	Parms.AnimationHints = std::move(AnimationHints);
	Parms.StateTag = std::move(StateTag);
	Parms.Urgency = Urgency;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

bool UUIStateChartManager::BP_RemoveStateChart(int32 Key, const struct FGameplayTagContainer& AnimationHints, const struct FUIStateChartContextChangeSet& ContextChanges, EUIStateTransitionUrgency Urgency)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UIStateChartManager", "BP_RemoveStateChart");

	Params::UIStateChartManager_BP_RemoveStateChart Parms{};

	Parms.Key = Key;
	Parms.AnimationHints = std::move(AnimationHints);
	Parms.ContextChanges = std::move(ContextChanges);
	Parms.Urgency = Urgency;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

class UUIStateChartContext* UUIStateChartManager::GetContext() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UIStateChartManager", "GetContext");

	Params::UIStateChartManager_GetContext Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

}
