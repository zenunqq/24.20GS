#pragma once

#include "Basic.hpp"

#include "Hotfix_classes.hpp"

namespace SDK
{

void UOnlineHotfixManager::StartHotfixProcess()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("OnlineHotfixManager", "StartHotfixProcess");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

}
