#pragma once

#include "Basic.hpp"

#include "CreativeEditCameraModeRuntime_classes.hpp"
#include "CreativeEditCameraModeRuntime_parameters.hpp"

namespace SDK
{

void AFortCreativeEditCameraController::HandleWeaponEquipped(class AFortWeapon* NewWeapon, class AFortWeapon* PrevWeapon)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortCreativeEditCameraController", "HandleWeaponEquipped");

	Params::FortCreativeEditCameraController_HandleWeaponEquipped Parms{};

	Parms.NewWeapon = NewWeapon;
	Parms.PrevWeapon = PrevWeapon;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void AFortCreativeEditCameraController::OnCreativeEditModeChanged(bool bIsCreativeEditModeEnabled)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortCreativeEditCameraController", "OnCreativeEditModeChanged");

	Params::FortCreativeEditCameraController_OnCreativeEditModeChanged Parms{};

	Parms.bIsCreativeEditModeEnabled = bIsCreativeEditModeEnabled;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void AFortCreativeEditCameraController::OnWantsToImmersiveEditChanged(class UFortCreativeOption* CreativeOption, uint8 IndexValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortCreativeEditCameraController", "OnWantsToImmersiveEditChanged");

	Params::FortCreativeEditCameraController_OnWantsToImmersiveEditChanged Parms{};

	Parms.CreativeOption = CreativeOption;
	Parms.IndexValue = IndexValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void AFortCreativeEditCameraController::ServerSetImmersiveEdit(const bool bWantsToImmersiveEdit, const bool bIsCreativeEditModeEnabled)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortCreativeEditCameraController", "ServerSetImmersiveEdit");

	Params::FortCreativeEditCameraController_ServerSetImmersiveEdit Parms{};

	Parms.bWantsToImmersiveEdit = bWantsToImmersiveEdit;
	Parms.bIsCreativeEditModeEnabled = bIsCreativeEditModeEnabled;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

}
