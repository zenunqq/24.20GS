#pragma once

#include "Basic.hpp"

#include "ThrowingToyRuntime_classes.hpp"
#include "ThrowingToyRuntime_parameters.hpp"

namespace SDK
{

void UThrowingToyTrackerComponent::AddThrowingToy(class AActor* ThrowingToyActor, const struct FGuid& WorldItemGuid)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ThrowingToyTrackerComponent", "AddThrowingToy");

	Params::ThrowingToyTrackerComponent_AddThrowingToy Parms{};

	Parms.ThrowingToyActor = ThrowingToyActor;
	Parms.WorldItemGuid = std::move(WorldItemGuid);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

class AActor* UThrowingToyTrackerComponent::GetAndReleaseThrowingToy(const struct FGuid& WorldItemGuid)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ThrowingToyTrackerComponent", "GetAndReleaseThrowingToy");

	Params::ThrowingToyTrackerComponent_GetAndReleaseThrowingToy Parms{};

	Parms.WorldItemGuid = std::move(WorldItemGuid);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

EThrowingToyItemRemovedReason UThrowingToyTrackerComponent::GetRecentThrowingToyItemRemovedReason()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ThrowingToyTrackerComponent", "GetRecentThrowingToyItemRemovedReason");

	Params::ThrowingToyTrackerComponent_GetRecentThrowingToyItemRemovedReason Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

class AActor* UThrowingToyTrackerComponent::GetThrowingToy(const struct FGuid& WorldItemGuid)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ThrowingToyTrackerComponent", "GetThrowingToy");

	Params::ThrowingToyTrackerComponent_GetThrowingToy Parms{};

	Parms.WorldItemGuid = std::move(WorldItemGuid);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

void UThrowingToyTrackerComponent::SetRecentThrowingToyItemRemovedReason(EThrowingToyItemRemovedReason RemovedReason)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ThrowingToyTrackerComponent", "SetRecentThrowingToyItemRemovedReason");

	Params::ThrowingToyTrackerComponent_SetRecentThrowingToyItemRemovedReason Parms{};

	Parms.RemovedReason = RemovedReason;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

}
