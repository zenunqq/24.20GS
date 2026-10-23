#pragma once

#include "Basic.hpp"

#include "VKEditGameplay_classes.hpp"
#include "VKEditGameplay_parameters.hpp"

namespace SDK
{

void AVKEditPlayspace::OnClientActivatedContent(const struct FUniqueNetIdRepl& ClientNetId) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("VKEditPlayspace", "OnClientActivatedContent");

	Params::VKEditPlayspace_OnClientActivatedContent Parms{};

	Parms.ClientNetId = std::move(ClientNetId);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UPlayspaceComponent_EditConnectionManager::OnRep_EditConnections() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlayspaceComponent_EditConnectionManager", "OnRep_EditConnections");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void UPlayspaceComponent_EditConnectionManager::OnRep_VkEditStatus() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlayspaceComponent_EditConnectionManager", "OnRep_VkEditStatus");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

}
