#pragma once

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "Engine_structs.hpp"

namespace SDK::Params
{

struct PlayerPawn_Athena_Generic_Parent_C_ExecuteUbergraph_PlayerPawn_Athena_Generic_Parent final
{
public:
	int32                                         EntryPoint;
	uint8                                         Pad_4[0xC];
	struct FTransform                             Temp_struct_Variable;
	bool                                          CallFunc_IsLocallyControlled_ReturnValue;
	uint8                                         Pad_71[0x7];
	class UPostProcessComponent*                  CallFunc_AddComponent_ReturnValue;
	bool                                          CallFunc_IsDedicatedServer_ReturnValue;
	uint8                                         Pad_81[0x3];
	float                                         K2Node_Event_HalfHeightAdjust_1;
	float                                         K2Node_Event_ScaledHalfHeightAdjust_1;
	float                                         K2Node_Event_HalfHeightAdjust;
	float                                         K2Node_Event_ScaledHalfHeightAdjust;
};
static_assert(alignof(PlayerPawn_Athena_Generic_Parent_C_ExecuteUbergraph_PlayerPawn_Athena_Generic_Parent) == 0x000010, "Wrong alignment on PlayerPawn_Athena_Generic_Parent_C_ExecuteUbergraph_PlayerPawn_Athena_Generic_Parent");
static_assert(sizeof(PlayerPawn_Athena_Generic_Parent_C_ExecuteUbergraph_PlayerPawn_Athena_Generic_Parent) == 0x0000A0, "Wrong size on PlayerPawn_Athena_Generic_Parent_C_ExecuteUbergraph_PlayerPawn_Athena_Generic_Parent");
static_assert(offsetof(PlayerPawn_Athena_Generic_Parent_C_ExecuteUbergraph_PlayerPawn_Athena_Generic_Parent, EntryPoint) == 0x000000, "Member 'PlayerPawn_Athena_Generic_Parent_C_ExecuteUbergraph_PlayerPawn_Athena_Generic_Parent::EntryPoint' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_Generic_Parent_C_ExecuteUbergraph_PlayerPawn_Athena_Generic_Parent, Temp_struct_Variable) == 0x000010, "Member 'PlayerPawn_Athena_Generic_Parent_C_ExecuteUbergraph_PlayerPawn_Athena_Generic_Parent::Temp_struct_Variable' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_Generic_Parent_C_ExecuteUbergraph_PlayerPawn_Athena_Generic_Parent, CallFunc_IsLocallyControlled_ReturnValue) == 0x000070, "Member 'PlayerPawn_Athena_Generic_Parent_C_ExecuteUbergraph_PlayerPawn_Athena_Generic_Parent::CallFunc_IsLocallyControlled_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_Generic_Parent_C_ExecuteUbergraph_PlayerPawn_Athena_Generic_Parent, CallFunc_AddComponent_ReturnValue) == 0x000078, "Member 'PlayerPawn_Athena_Generic_Parent_C_ExecuteUbergraph_PlayerPawn_Athena_Generic_Parent::CallFunc_AddComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_Generic_Parent_C_ExecuteUbergraph_PlayerPawn_Athena_Generic_Parent, CallFunc_IsDedicatedServer_ReturnValue) == 0x000080, "Member 'PlayerPawn_Athena_Generic_Parent_C_ExecuteUbergraph_PlayerPawn_Athena_Generic_Parent::CallFunc_IsDedicatedServer_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_Generic_Parent_C_ExecuteUbergraph_PlayerPawn_Athena_Generic_Parent, K2Node_Event_HalfHeightAdjust_1) == 0x000084, "Member 'PlayerPawn_Athena_Generic_Parent_C_ExecuteUbergraph_PlayerPawn_Athena_Generic_Parent::K2Node_Event_HalfHeightAdjust_1' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_Generic_Parent_C_ExecuteUbergraph_PlayerPawn_Athena_Generic_Parent, K2Node_Event_ScaledHalfHeightAdjust_1) == 0x000088, "Member 'PlayerPawn_Athena_Generic_Parent_C_ExecuteUbergraph_PlayerPawn_Athena_Generic_Parent::K2Node_Event_ScaledHalfHeightAdjust_1' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_Generic_Parent_C_ExecuteUbergraph_PlayerPawn_Athena_Generic_Parent, K2Node_Event_HalfHeightAdjust) == 0x00008C, "Member 'PlayerPawn_Athena_Generic_Parent_C_ExecuteUbergraph_PlayerPawn_Athena_Generic_Parent::K2Node_Event_HalfHeightAdjust' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_Generic_Parent_C_ExecuteUbergraph_PlayerPawn_Athena_Generic_Parent, K2Node_Event_ScaledHalfHeightAdjust) == 0x000090, "Member 'PlayerPawn_Athena_Generic_Parent_C_ExecuteUbergraph_PlayerPawn_Athena_Generic_Parent::K2Node_Event_ScaledHalfHeightAdjust' has a wrong offset!");

struct PlayerPawn_Athena_Generic_Parent_C_K2_OnEndCrouch final
{
public:
	float                                         HalfHeightAdjust;
	float                                         ScaledHalfHeightAdjust;
};
static_assert(alignof(PlayerPawn_Athena_Generic_Parent_C_K2_OnEndCrouch) == 0x000004, "Wrong alignment on PlayerPawn_Athena_Generic_Parent_C_K2_OnEndCrouch");
static_assert(sizeof(PlayerPawn_Athena_Generic_Parent_C_K2_OnEndCrouch) == 0x000008, "Wrong size on PlayerPawn_Athena_Generic_Parent_C_K2_OnEndCrouch");
static_assert(offsetof(PlayerPawn_Athena_Generic_Parent_C_K2_OnEndCrouch, HalfHeightAdjust) == 0x000000, "Member 'PlayerPawn_Athena_Generic_Parent_C_K2_OnEndCrouch::HalfHeightAdjust' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_Generic_Parent_C_K2_OnEndCrouch, ScaledHalfHeightAdjust) == 0x000004, "Member 'PlayerPawn_Athena_Generic_Parent_C_K2_OnEndCrouch::ScaledHalfHeightAdjust' has a wrong offset!");

struct PlayerPawn_Athena_Generic_Parent_C_K2_OnStartCrouch final
{
public:
	float                                         HalfHeightAdjust;
	float                                         ScaledHalfHeightAdjust;
};
static_assert(alignof(PlayerPawn_Athena_Generic_Parent_C_K2_OnStartCrouch) == 0x000004, "Wrong alignment on PlayerPawn_Athena_Generic_Parent_C_K2_OnStartCrouch");
static_assert(sizeof(PlayerPawn_Athena_Generic_Parent_C_K2_OnStartCrouch) == 0x000008, "Wrong size on PlayerPawn_Athena_Generic_Parent_C_K2_OnStartCrouch");
static_assert(offsetof(PlayerPawn_Athena_Generic_Parent_C_K2_OnStartCrouch, HalfHeightAdjust) == 0x000000, "Member 'PlayerPawn_Athena_Generic_Parent_C_K2_OnStartCrouch::HalfHeightAdjust' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_Generic_Parent_C_K2_OnStartCrouch, ScaledHalfHeightAdjust) == 0x000004, "Member 'PlayerPawn_Athena_Generic_Parent_C_K2_OnStartCrouch::ScaledHalfHeightAdjust' has a wrong offset!");

}
