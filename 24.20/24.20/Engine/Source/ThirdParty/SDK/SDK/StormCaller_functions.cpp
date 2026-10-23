#pragma once

#include "Basic.hpp"

#include "StormCaller_classes.hpp"
#include "StormCaller_parameters.hpp"

namespace SDK
{

void UStormCallerComponent::ApplyPOINamesToDataRegistry(const class UPlaylistUserOptions* UserOptions, const struct FGameplayTag& GameplayTagForPOI, const class FText& MapCenterText, const class FText& RandomText)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("StormCallerComponent", "ApplyPOINamesToDataRegistry");

	Params::StormCallerComponent_ApplyPOINamesToDataRegistry Parms{};

	Parms.UserOptions = UserOptions;
	Parms.GameplayTagForPOI = std::move(GameplayTagForPOI);
	Parms.MapCenterText = std::move(MapCenterText);
	Parms.RandomText = std::move(RandomText);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UStormCallerComponent::ApplySavedPoiOptions(const TArray<class FString>& PoiSavedOptionKeys, const TArray<class FText>& PoiSavedOptionName, class UFortActorOptionsComponent* ToyOptionsComponent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("StormCallerComponent", "ApplySavedPoiOptions");

	Params::StormCallerComponent_ApplySavedPoiOptions Parms{};

	Parms.PoiSavedOptionKeys = std::move(PoiSavedOptionKeys);
	Parms.PoiSavedOptionName = std::move(PoiSavedOptionName);
	Parms.ToyOptionsComponent = ToyOptionsComponent;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

class AFortPoiVolume* UStormCallerComponent::GetPoiVolumeFromOptionIndex(int32 OptionIndex)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("StormCallerComponent", "GetPoiVolumeFromOptionIndex");

	Params::StormCallerComponent_GetPoiVolumeFromOptionIndex Parms{};

	Parms.OptionIndex = OptionIndex;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

void UStormCallerComponent::SpawnInitialSafeZone()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("StormCallerComponent", "SpawnInitialSafeZone");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void UStormCallerComponent::UpdatePoiSavedOptions(TArray<class FString>& InOutPoiSavedOptionKeys, TArray<class FText>& InOutPoiSavedOptionNames, const class UPlaylistUserOptions* UserOptions, const struct FGameplayTag& GameplayTagForPOI)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("StormCallerComponent", "UpdatePoiSavedOptions");

	Params::StormCallerComponent_UpdatePoiSavedOptions Parms{};

	Parms.InOutPoiSavedOptionKeys = std::move(InOutPoiSavedOptionKeys);
	Parms.InOutPoiSavedOptionNames = std::move(InOutPoiSavedOptionNames);
	Parms.UserOptions = UserOptions;
	Parms.GameplayTagForPOI = std::move(GameplayTagForPOI);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	InOutPoiSavedOptionKeys = std::move(Parms.InOutPoiSavedOptionKeys);
	InOutPoiSavedOptionNames = std::move(Parms.InOutPoiSavedOptionNames);
}

const TArray<struct FVector4> UStormCallerComponent::GetSafeZoneLocationBlockList() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("StormCallerComponent", "GetSafeZoneLocationBlockList");

	Params::StormCallerComponent_GetSafeZoneLocationBlockList Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

}
