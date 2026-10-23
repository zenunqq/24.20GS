#pragma once

#include "Basic.hpp"

#include "FortniteGame_structs.hpp"

namespace SDK::Params
{

struct VaultWeaponPlacementHelper_C_OnFrontEndCameraChanged final
{
public:
	EFrontEndCamera                               NewCamera;
	EFrontEndCamera                               OldCamera;
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;
};
static_assert(alignof(VaultWeaponPlacementHelper_C_OnFrontEndCameraChanged) == 0x000001, "Wrong alignment on VaultWeaponPlacementHelper_C_OnFrontEndCameraChanged");
static_assert(sizeof(VaultWeaponPlacementHelper_C_OnFrontEndCameraChanged) == 0x000003, "Wrong size on VaultWeaponPlacementHelper_C_OnFrontEndCameraChanged");
static_assert(offsetof(VaultWeaponPlacementHelper_C_OnFrontEndCameraChanged, NewCamera) == 0x000000, "Member 'VaultWeaponPlacementHelper_C_OnFrontEndCameraChanged::NewCamera' has a wrong offset!");
static_assert(offsetof(VaultWeaponPlacementHelper_C_OnFrontEndCameraChanged, OldCamera) == 0x000001, "Member 'VaultWeaponPlacementHelper_C_OnFrontEndCameraChanged::OldCamera' has a wrong offset!");
static_assert(offsetof(VaultWeaponPlacementHelper_C_OnFrontEndCameraChanged, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x000002, "Member 'VaultWeaponPlacementHelper_C_OnFrontEndCameraChanged::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");

struct VaultWeaponPlacementHelper_C_ExecuteUbergraph_VaultWeaponPlacementHelper final
{
public:
	int32                                         EntryPoint;
};
static_assert(alignof(VaultWeaponPlacementHelper_C_ExecuteUbergraph_VaultWeaponPlacementHelper) == 0x000004, "Wrong alignment on VaultWeaponPlacementHelper_C_ExecuteUbergraph_VaultWeaponPlacementHelper");
static_assert(sizeof(VaultWeaponPlacementHelper_C_ExecuteUbergraph_VaultWeaponPlacementHelper) == 0x000004, "Wrong size on VaultWeaponPlacementHelper_C_ExecuteUbergraph_VaultWeaponPlacementHelper");
static_assert(offsetof(VaultWeaponPlacementHelper_C_ExecuteUbergraph_VaultWeaponPlacementHelper, EntryPoint) == 0x000000, "Member 'VaultWeaponPlacementHelper_C_ExecuteUbergraph_VaultWeaponPlacementHelper::EntryPoint' has a wrong offset!");

struct VaultWeaponPlacementHelper_C_InitializeContextEvents final
{
public:
	TDelegate<void(EFrontEndCamera NewCamera, EFrontEndCamera OldCamera)> K2Node_CreateDelegate_OutputDelegate;
	uint8                                         Pad_C[0x4];
	class UFortFrontEndContext*                   CallFunc_GetContext_ReturnValue;
};
static_assert(alignof(VaultWeaponPlacementHelper_C_InitializeContextEvents) == 0x000008, "Wrong alignment on VaultWeaponPlacementHelper_C_InitializeContextEvents");
static_assert(sizeof(VaultWeaponPlacementHelper_C_InitializeContextEvents) == 0x000018, "Wrong size on VaultWeaponPlacementHelper_C_InitializeContextEvents");
static_assert(offsetof(VaultWeaponPlacementHelper_C_InitializeContextEvents, K2Node_CreateDelegate_OutputDelegate) == 0x000000, "Member 'VaultWeaponPlacementHelper_C_InitializeContextEvents::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(VaultWeaponPlacementHelper_C_InitializeContextEvents, CallFunc_GetContext_ReturnValue) == 0x000010, "Member 'VaultWeaponPlacementHelper_C_InitializeContextEvents::CallFunc_GetContext_ReturnValue' has a wrong offset!");

}
