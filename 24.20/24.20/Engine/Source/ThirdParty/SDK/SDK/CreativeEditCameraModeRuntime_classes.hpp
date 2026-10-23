#pragma once

#include "Basic.hpp"

#include "FortniteGame_structs.hpp"
#include "FortniteGame_classes.hpp"

namespace SDK
{

class AFortCreativeEditCameraController final : public AFortFirstPersonCameraController
{
public:
	struct FCreativeOptionVariableBase            WantsToImmersiveEdit;
	uint8                                         Pad_2E0[0x28];

public:
	void HandleWeaponEquipped(class AFortWeapon* NewWeapon, class AFortWeapon* PrevWeapon);
	void OnCreativeEditModeChanged(bool bIsCreativeEditModeEnabled);
	void OnWantsToImmersiveEditChanged(class UFortCreativeOption* CreativeOption, uint8 IndexValue);
	void ServerSetImmersiveEdit(const bool bWantsToImmersiveEdit, const bool bIsCreativeEditModeEnabled);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortCreativeEditCameraController">();
	}
	static class AFortCreativeEditCameraController* GetDefaultObj()
	{
		return GetDefaultObjImpl<AFortCreativeEditCameraController>();
	}
};
static_assert(alignof(AFortCreativeEditCameraController) == 0x000008, "Wrong alignment on AFortCreativeEditCameraController");
static_assert(sizeof(AFortCreativeEditCameraController) == 0x000308, "Wrong size on AFortCreativeEditCameraController");
static_assert(offsetof(AFortCreativeEditCameraController, WantsToImmersiveEdit) == 0x0002D8, "Member 'AFortCreativeEditCameraController::WantsToImmersiveEdit' has a wrong offset!");

}
