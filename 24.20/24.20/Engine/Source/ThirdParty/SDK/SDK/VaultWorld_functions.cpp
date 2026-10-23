#pragma once

#include "Basic.hpp"

#include "VaultWorld_classes.hpp"
#include "VaultWorld_parameters.hpp"

namespace SDK
{

void AVaultWorld_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("VaultWorld_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}

void AVaultWorld_C::OnUpdateDisplay(bool bShowFloor, bool bShowEffects)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("VaultWorld_C", "OnUpdateDisplay");

	Params::VaultWorld_C_OnUpdateDisplay Parms{};

	Parms.bShowFloor = bShowFloor;
	Parms.bShowEffects = bShowEffects;

	UObject::ProcessEvent(Func, &Parms);
}

void AVaultWorld_C::GetVaultRotator(class AVaultRotator_C** VaultRotator)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("VaultWorld_C", "GetVaultRotator");

	Params::VaultWorld_C_GetVaultRotator Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (VaultRotator != nullptr)
		*VaultRotator = Parms.VaultRotator;
}

void AVaultWorld_C::OnTransitionItemDetails(const bool bShowItemDetails)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("VaultWorld_C", "OnTransitionItemDetails");

	Params::VaultWorld_C_OnTransitionItemDetails Parms{};

	Parms.bShowItemDetails = bShowItemDetails;

	UObject::ProcessEvent(Func, &Parms);
}

void AVaultWorld_C::ExecuteUbergraph_VaultWorld(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("VaultWorld_C", "ExecuteUbergraph_VaultWorld");

	Params::VaultWorld_C_ExecuteUbergraph_VaultWorld Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

void AVaultWorld_C::OnTransitionBackground(bool bPlayForward, EBackgroundIntensityLevel IntensityTransition)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("VaultWorld_C", "OnTransitionBackground");

	Params::VaultWorld_C_OnTransitionBackground Parms{};

	Parms.bPlayForward = bPlayForward;
	Parms.IntensityTransition = IntensityTransition;

	UObject::ProcessEvent(Func, &Parms);
}

void AVaultWorld_C::OnSetupBackground(const class UTexture2D* LoadedBackgroundTexture, const struct FVaultWorldBackgroundData& BackgroundInfo)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("VaultWorld_C", "OnSetupBackground");

	Params::VaultWorld_C_OnSetupBackground Parms{};

	Parms.LoadedBackgroundTexture = LoadedBackgroundTexture;
	Parms.BackgroundInfo = std::move(BackgroundInfo);

	UObject::ProcessEvent(Func, &Parms);
}

}
