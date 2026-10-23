#pragma once

#include "Basic.hpp"

namespace SDK::Params
{

struct FortCreativeEditCameraController_HandleWeaponEquipped final
{
public:
	class AFortWeapon*                            NewWeapon;
	class AFortWeapon*                            PrevWeapon;
};
static_assert(alignof(FortCreativeEditCameraController_HandleWeaponEquipped) == 0x000008, "Wrong alignment on FortCreativeEditCameraController_HandleWeaponEquipped");
static_assert(sizeof(FortCreativeEditCameraController_HandleWeaponEquipped) == 0x000010, "Wrong size on FortCreativeEditCameraController_HandleWeaponEquipped");
static_assert(offsetof(FortCreativeEditCameraController_HandleWeaponEquipped, NewWeapon) == 0x000000, "Member 'FortCreativeEditCameraController_HandleWeaponEquipped::NewWeapon' has a wrong offset!");
static_assert(offsetof(FortCreativeEditCameraController_HandleWeaponEquipped, PrevWeapon) == 0x000008, "Member 'FortCreativeEditCameraController_HandleWeaponEquipped::PrevWeapon' has a wrong offset!");

struct FortCreativeEditCameraController_OnCreativeEditModeChanged final
{
public:
	bool                                          bIsCreativeEditModeEnabled;
};
static_assert(alignof(FortCreativeEditCameraController_OnCreativeEditModeChanged) == 0x000001, "Wrong alignment on FortCreativeEditCameraController_OnCreativeEditModeChanged");
static_assert(sizeof(FortCreativeEditCameraController_OnCreativeEditModeChanged) == 0x000001, "Wrong size on FortCreativeEditCameraController_OnCreativeEditModeChanged");
static_assert(offsetof(FortCreativeEditCameraController_OnCreativeEditModeChanged, bIsCreativeEditModeEnabled) == 0x000000, "Member 'FortCreativeEditCameraController_OnCreativeEditModeChanged::bIsCreativeEditModeEnabled' has a wrong offset!");

struct FortCreativeEditCameraController_OnWantsToImmersiveEditChanged final
{
public:
	class UFortCreativeOption*                    CreativeOption;
	uint8                                         IndexValue;
	uint8                                         Pad_9[0x7];
};
static_assert(alignof(FortCreativeEditCameraController_OnWantsToImmersiveEditChanged) == 0x000008, "Wrong alignment on FortCreativeEditCameraController_OnWantsToImmersiveEditChanged");
static_assert(sizeof(FortCreativeEditCameraController_OnWantsToImmersiveEditChanged) == 0x000010, "Wrong size on FortCreativeEditCameraController_OnWantsToImmersiveEditChanged");
static_assert(offsetof(FortCreativeEditCameraController_OnWantsToImmersiveEditChanged, CreativeOption) == 0x000000, "Member 'FortCreativeEditCameraController_OnWantsToImmersiveEditChanged::CreativeOption' has a wrong offset!");
static_assert(offsetof(FortCreativeEditCameraController_OnWantsToImmersiveEditChanged, IndexValue) == 0x000008, "Member 'FortCreativeEditCameraController_OnWantsToImmersiveEditChanged::IndexValue' has a wrong offset!");

struct FortCreativeEditCameraController_ServerSetImmersiveEdit final
{
public:
	bool                                          bWantsToImmersiveEdit;
	bool                                          bIsCreativeEditModeEnabled;
};
static_assert(alignof(FortCreativeEditCameraController_ServerSetImmersiveEdit) == 0x000001, "Wrong alignment on FortCreativeEditCameraController_ServerSetImmersiveEdit");
static_assert(sizeof(FortCreativeEditCameraController_ServerSetImmersiveEdit) == 0x000002, "Wrong size on FortCreativeEditCameraController_ServerSetImmersiveEdit");
static_assert(offsetof(FortCreativeEditCameraController_ServerSetImmersiveEdit, bWantsToImmersiveEdit) == 0x000000, "Member 'FortCreativeEditCameraController_ServerSetImmersiveEdit::bWantsToImmersiveEdit' has a wrong offset!");
static_assert(offsetof(FortCreativeEditCameraController_ServerSetImmersiveEdit, bIsCreativeEditModeEnabled) == 0x000001, "Member 'FortCreativeEditCameraController_ServerSetImmersiveEdit::bIsCreativeEditModeEnabled' has a wrong offset!");

}
