#pragma once

#include "Basic.hpp"

namespace SDK::Params
{

struct GCL_BoostJumpPack_FuelRegen_C_ExecuteUbergraph_GCL_BoostJumpPack_FuelRegen final
{
public:
	int32                                         EntryPoint;
	uint8                                         Pad_4[0x4];
	class AFortPlayerPawn*                        K2Node_Event_PlayerPawn;
	class USkeletalMeshComponent*                 CallFunc_GetSkeletalMeshForPartType_ReturnValue;
};
static_assert(alignof(GCL_BoostJumpPack_FuelRegen_C_ExecuteUbergraph_GCL_BoostJumpPack_FuelRegen) == 0x000008, "Wrong alignment on GCL_BoostJumpPack_FuelRegen_C_ExecuteUbergraph_GCL_BoostJumpPack_FuelRegen");
static_assert(sizeof(GCL_BoostJumpPack_FuelRegen_C_ExecuteUbergraph_GCL_BoostJumpPack_FuelRegen) == 0x000018, "Wrong size on GCL_BoostJumpPack_FuelRegen_C_ExecuteUbergraph_GCL_BoostJumpPack_FuelRegen");
static_assert(offsetof(GCL_BoostJumpPack_FuelRegen_C_ExecuteUbergraph_GCL_BoostJumpPack_FuelRegen, EntryPoint) == 0x000000, "Member 'GCL_BoostJumpPack_FuelRegen_C_ExecuteUbergraph_GCL_BoostJumpPack_FuelRegen::EntryPoint' has a wrong offset!");
static_assert(offsetof(GCL_BoostJumpPack_FuelRegen_C_ExecuteUbergraph_GCL_BoostJumpPack_FuelRegen, K2Node_Event_PlayerPawn) == 0x000008, "Member 'GCL_BoostJumpPack_FuelRegen_C_ExecuteUbergraph_GCL_BoostJumpPack_FuelRegen::K2Node_Event_PlayerPawn' has a wrong offset!");
static_assert(offsetof(GCL_BoostJumpPack_FuelRegen_C_ExecuteUbergraph_GCL_BoostJumpPack_FuelRegen, CallFunc_GetSkeletalMeshForPartType_ReturnValue) == 0x000010, "Member 'GCL_BoostJumpPack_FuelRegen_C_ExecuteUbergraph_GCL_BoostJumpPack_FuelRegen::CallFunc_GetSkeletalMeshForPartType_ReturnValue' has a wrong offset!");

struct GCL_BoostJumpPack_FuelRegen_C_ResetBlink final
{
public:
	class AFortPlayerPawn*                        PlayerPawn;
};
static_assert(alignof(GCL_BoostJumpPack_FuelRegen_C_ResetBlink) == 0x000008, "Wrong alignment on GCL_BoostJumpPack_FuelRegen_C_ResetBlink");
static_assert(sizeof(GCL_BoostJumpPack_FuelRegen_C_ResetBlink) == 0x000008, "Wrong size on GCL_BoostJumpPack_FuelRegen_C_ResetBlink");
static_assert(offsetof(GCL_BoostJumpPack_FuelRegen_C_ResetBlink, PlayerPawn) == 0x000000, "Member 'GCL_BoostJumpPack_FuelRegen_C_ResetBlink::PlayerPawn' has a wrong offset!");

}
