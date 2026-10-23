#pragma once

#include "Basic.hpp"

#include "CRD_GameStreamRuntime_classes.hpp"
#include "CRD_GameStreamRuntime_parameters.hpp"

namespace SDK
{

void UCreativeGameStreamDeviceComponent::AddToEndGameQueue()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CreativeGameStreamDeviceComponent", "AddToEndGameQueue");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void UCreativeGameStreamDeviceComponent::Init(class UFortMinigameLogicComponent* InMinigameLogicComponent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CreativeGameStreamDeviceComponent", "Init");

	Params::CreativeGameStreamDeviceComponent_Init Parms{};

	Parms.InMinigameLogicComponent = InMinigameLogicComponent;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UCreativeGameStreamDeviceComponent::OnMinigameStateChanged(class AFortMinigame* Minigame, const EFortMinigameState NewMinigameState)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CreativeGameStreamDeviceComponent", "OnMinigameStateChanged");

	Params::CreativeGameStreamDeviceComponent_OnMinigameStateChanged Parms{};

	Parms.Minigame = Minigame;
	Parms.NewMinigameState = NewMinigameState;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UCreativeGameStreamDeviceComponent::RemoveFromEndGameQueue()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CreativeGameStreamDeviceComponent", "RemoveFromEndGameQueue");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

bool UCreativeGameStreamDeviceComponent::IsWithinPublishedPlayspace() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CreativeGameStreamDeviceComponent", "IsWithinPublishedPlayspace");

	Params::CreativeGameStreamDeviceComponent_IsWithinPublishedPlayspace Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

void UCreativeGameStreamDeviceCoordinatorComponent::OnMinigameStateChanged(class AFortMinigame* InMinigame, const EFortMinigameState NewMinigameState)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CreativeGameStreamDeviceCoordinatorComponent", "OnMinigameStateChanged");

	Params::CreativeGameStreamDeviceCoordinatorComponent_OnMinigameStateChanged Parms{};

	Parms.InMinigame = InMinigame;
	Parms.NewMinigameState = NewMinigameState;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

}
