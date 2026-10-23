#pragma once

#include "Basic.hpp"

#include "LootController_classes.hpp"
#include "LootController_parameters.hpp"

namespace SDK
{

void AFortAthenaMutator_CR_CreativeAllowLootItem::SetItemGameplayTagsNotAllowed(const struct FGameplayTagContainer& InItemGameplayTagsNotAllowed)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortAthenaMutator_CR_CreativeAllowLootItem", "SetItemGameplayTagsNotAllowed");

	Params::FortAthenaMutator_CR_CreativeAllowLootItem_SetItemGameplayTagsNotAllowed Parms{};

	Parms.InItemGameplayTagsNotAllowed = std::move(InItemGameplayTagsNotAllowed);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

struct FGameplayTagContainer AFortAthenaMutator_CR_LootChoice::GetContextTagsToAdd() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortAthenaMutator_CR_LootChoice", "GetContextTagsToAdd");

	Params::FortAthenaMutator_CR_LootChoice_GetContextTagsToAdd Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

struct FGameplayTagContainer AFortAthenaMutator_CR_LootChoice::GetContextTagsToRemove() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortAthenaMutator_CR_LootChoice", "GetContextTagsToRemove");

	Params::FortAthenaMutator_CR_LootChoice_GetContextTagsToRemove Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

class UDataTable* AFortAthenaMutator_CR_LootChoice::GetLootPackageTable() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortAthenaMutator_CR_LootChoice", "GetLootPackageTable");

	Params::FortAthenaMutator_CR_LootChoice_GetLootPackageTable Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

class FString AFortAthenaMutator_CR_LootChoice::GetLootSelectionString() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortAthenaMutator_CR_LootChoice", "GetLootSelectionString");

	Params::FortAthenaMutator_CR_LootChoice_GetLootSelectionString Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

class UDataTable* AFortAthenaMutator_CR_LootChoice::GetLootTierDataTable() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortAthenaMutator_CR_LootChoice", "GetLootTierDataTable");

	Params::FortAthenaMutator_CR_LootChoice_GetLootTierDataTable Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

void ULootControllerNativeComponent::AddToArray(TArray<struct FBuildingContainersFoundEntry>& InOutBuildingContainersFoundArray, const int32 InBuildingContainerFoundIndex, const struct FBuildingContainersArrayEntry& InBuildingContainerToAdd)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LootControllerNativeComponent", "AddToArray");

	Params::LootControllerNativeComponent_AddToArray Parms{};

	Parms.InOutBuildingContainersFoundArray = std::move(InOutBuildingContainersFoundArray);
	Parms.InBuildingContainerFoundIndex = InBuildingContainerFoundIndex;
	Parms.InBuildingContainerToAdd = std::move(InBuildingContainerToAdd);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	InOutBuildingContainersFoundArray = std::move(Parms.InOutBuildingContainersFoundArray);
}

void ULootControllerNativeComponent::AsyncGetActorsOfClass(const class UObject* WorldContextObject, TSubclassOf<class AActor> ActorClass)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LootControllerNativeComponent", "AsyncGetActorsOfClass");

	Params::LootControllerNativeComponent_AsyncGetActorsOfClass Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.ActorClass = ActorClass;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void ULootControllerNativeComponent::PrintDebugString(const class FString& DebugString, const bool LogWarning)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LootControllerNativeComponent", "PrintDebugString");

	Params::LootControllerNativeComponent_PrintDebugString Parms{};

	Parms.DebugString = std::move(DebugString);
	Parms.LogWarning = LogWarning;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

bool ULootControllerNativeComponent::IsRemoveLootEnabled() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LootControllerNativeComponent", "IsRemoveLootEnabled");

	Params::LootControllerNativeComponent_IsRemoveLootEnabled Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

bool ULootControllerNativeComponent::IsThrottleEnabled() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LootControllerNativeComponent", "IsThrottleEnabled");

	Params::LootControllerNativeComponent_IsThrottleEnabled Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

}
