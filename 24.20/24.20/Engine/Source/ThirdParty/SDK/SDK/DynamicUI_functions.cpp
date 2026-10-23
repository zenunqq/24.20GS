#pragma once

#include "Basic.hpp"

#include "DynamicUI_classes.hpp"
#include "DynamicUI_parameters.hpp"

namespace SDK
{

void IDynamicUITransitionableWidgetInterface::BroadcastTransitionCompleted()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DynamicUITransitionableWidgetInterface", "BroadcastTransitionCompleted");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void ADynamicUIDirectorBase::AddScene(const class UDynamicUIScene* Scene)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DynamicUIDirectorBase", "AddScene");

	Params::DynamicUIDirectorBase_AddScene Parms{};

	Parms.Scene = Scene;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void ADynamicUIDirectorBase::RemoveScene(const class UDynamicUIScene* Scene)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DynamicUIDirectorBase", "RemoveScene");

	Params::DynamicUIDirectorBase_RemoveScene Parms{};

	Parms.Scene = Scene;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

class UGameplayEventRouterComponent* ADynamicUIDirectorBase::GetOwnedEventRouter() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DynamicUIDirectorBase", "GetOwnedEventRouter");

	Params::DynamicUIDirectorBase_GetOwnedEventRouter Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

class ULocalPlayer* ADynamicUIDirectorBase::GetOwningLocalPlayer() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DynamicUIDirectorBase", "GetOwningLocalPlayer");

	Params::DynamicUIDirectorBase_GetOwningLocalPlayer Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

class APlayerController* ADynamicUIDirectorBase::GetOwningLocalPlayerController() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DynamicUIDirectorBase", "GetOwningLocalPlayerController");

	Params::DynamicUIDirectorBase_GetOwningLocalPlayerController Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

void UDynamicUIManager::AddScene(const class UDynamicUIScene* Scene, class APlayerController*& Player)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DynamicUIManager", "AddScene");

	Params::DynamicUIManager_AddScene Parms{};

	Parms.Scene = Scene;
	Parms.Player = Player;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	Player = Parms.Player;
}

void UDynamicUIManager::AddScenes(const TArray<class UDynamicUIScene*>& Scenes, class APlayerController*& Player)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DynamicUIManager", "AddScenes");

	Params::DynamicUIManager_AddScenes Parms{};

	Parms.Scenes = std::move(Scenes);
	Parms.Player = Player;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	Player = Parms.Player;
}

void UDynamicUIManager::AddSceneToFirstLocalPlayer(const class UDynamicUIScene* Scene)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DynamicUIManager", "AddSceneToFirstLocalPlayer");

	Params::DynamicUIManager_AddSceneToFirstLocalPlayer Parms{};

	Parms.Scene = Scene;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UDynamicUIManager::RemoveScene(const class UDynamicUIScene* Scene, class APlayerController*& Player)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DynamicUIManager", "RemoveScene");

	Params::DynamicUIManager_RemoveScene Parms{};

	Parms.Scene = Scene;
	Parms.Player = Player;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	Player = Parms.Player;
}

void UDynamicUIManager::RemoveSceneFromFirstLocalPlayer(const class UDynamicUIScene* Scene)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DynamicUIManager", "RemoveSceneFromFirstLocalPlayer");

	Params::DynamicUIManager_RemoveSceneFromFirstLocalPlayer Parms{};

	Parms.Scene = Scene;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UDynamicUIManager::RemoveScenes(const TArray<class UDynamicUIScene*>& Scenes, class APlayerController*& Player)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DynamicUIManager", "RemoveScenes");

	Params::DynamicUIManager_RemoveScenes Parms{};

	Parms.Scenes = std::move(Scenes);
	Parms.Player = Player;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	Player = Parms.Player;
}

}
