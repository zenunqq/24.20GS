#pragma once

#include "Basic.hpp"

#include "ChaosCaching_classes.hpp"
#include "ChaosCaching_parameters.hpp"

namespace SDK
{

void AChaosCacheManager::ResetAllComponentTransforms()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ChaosCacheManager", "ResetAllComponentTransforms");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void AChaosCacheManager::ResetSingleTransform(int32 InIndex)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ChaosCacheManager", "ResetSingleTransform");

	Params::ChaosCacheManager_ResetSingleTransform Parms{};

	Parms.InIndex = InIndex;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void AChaosCacheManager::SetStartTime(float InStartTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ChaosCacheManager", "SetStartTime");

	Params::ChaosCacheManager_SetStartTime Parms{};

	Parms.InStartTime = InStartTime;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void AChaosCacheManager::TriggerAll()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ChaosCacheManager", "TriggerAll");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void AChaosCacheManager::TriggerComponent(class UPrimitiveComponent* InComponent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ChaosCacheManager", "TriggerComponent");

	Params::ChaosCacheManager_TriggerComponent Parms{};

	Parms.InComponent = InComponent;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void AChaosCacheManager::TriggerComponentByCache(class FName InCacheName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ChaosCacheManager", "TriggerComponentByCache");

	Params::ChaosCacheManager_TriggerComponentByCache Parms{};

	Parms.InCacheName = InCacheName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

}
