#pragma once

#include "Basic.hpp"

#include "FrontendCamera_VaultRotator_classes.hpp"
#include "FrontendCamera_VaultRotator_parameters.hpp"

namespace SDK
{

void AFrontendCamera_VaultRotator_C::BP_OnDeactivated(class AFortPlayerController* PlayerController)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FrontendCamera_VaultRotator_C", "BP_OnDeactivated");

	Params::FrontendCamera_VaultRotator_C_BP_OnDeactivated Parms{};

	Parms.PlayerController = PlayerController;

	UObject::ProcessEvent(Func, &Parms);
}

void AFrontendCamera_VaultRotator_C::SetVaultRotatorLighting(class FName ItemRotatorTag)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FrontendCamera_VaultRotator_C", "SetVaultRotatorLighting");

	Params::FrontendCamera_VaultRotator_C_SetVaultRotatorLighting Parms{};

	Parms.ItemRotatorTag = ItemRotatorTag;

	UObject::ProcessEvent(Func, &Parms);
}

void AFrontendCamera_VaultRotator_C::BP_OnActivated(class AFortPlayerController* PlayerController)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FrontendCamera_VaultRotator_C", "BP_OnActivated");

	Params::FrontendCamera_VaultRotator_C_BP_OnActivated Parms{};

	Parms.PlayerController = PlayerController;

	UObject::ProcessEvent(Func, &Parms);
}

void AFrontendCamera_VaultRotator_C::ExecuteUbergraph_FrontendCamera_VaultRotator(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FrontendCamera_VaultRotator_C", "ExecuteUbergraph_FrontendCamera_VaultRotator");

	Params::FrontendCamera_VaultRotator_C_ExecuteUbergraph_FrontendCamera_VaultRotator Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

}
