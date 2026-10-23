#pragma once

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "Engine_structs.hpp"

namespace SDK::Params
{

struct GCN_NPC_Interaction_RezOut_Glitch_C_ExecuteUbergraph_GCN_NPC_Interaction_RezOut_Glitch final
{
public:
	int32                                         EntryPoint;
	bool                                          CallFunc_IsValid_ReturnValue;
	uint8                                         Pad_5[0x3];
	struct FVector                                CallFunc_K2_GetComponentLocation_ReturnValue;
	struct FRotator                               CallFunc_K2_GetComponentRotation_ReturnValue;
	struct FHitResult                             CallFunc_K2_SetWorldRotation_SweepHitResult;
};
static_assert(alignof(GCN_NPC_Interaction_RezOut_Glitch_C_ExecuteUbergraph_GCN_NPC_Interaction_RezOut_Glitch) == 0x000008, "Wrong alignment on GCN_NPC_Interaction_RezOut_Glitch_C_ExecuteUbergraph_GCN_NPC_Interaction_RezOut_Glitch");
static_assert(sizeof(GCN_NPC_Interaction_RezOut_Glitch_C_ExecuteUbergraph_GCN_NPC_Interaction_RezOut_Glitch) == 0x000118, "Wrong size on GCN_NPC_Interaction_RezOut_Glitch_C_ExecuteUbergraph_GCN_NPC_Interaction_RezOut_Glitch");
static_assert(offsetof(GCN_NPC_Interaction_RezOut_Glitch_C_ExecuteUbergraph_GCN_NPC_Interaction_RezOut_Glitch, EntryPoint) == 0x000000, "Member 'GCN_NPC_Interaction_RezOut_Glitch_C_ExecuteUbergraph_GCN_NPC_Interaction_RezOut_Glitch::EntryPoint' has a wrong offset!");
static_assert(offsetof(GCN_NPC_Interaction_RezOut_Glitch_C_ExecuteUbergraph_GCN_NPC_Interaction_RezOut_Glitch, CallFunc_IsValid_ReturnValue) == 0x000004, "Member 'GCN_NPC_Interaction_RezOut_Glitch_C_ExecuteUbergraph_GCN_NPC_Interaction_RezOut_Glitch::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(GCN_NPC_Interaction_RezOut_Glitch_C_ExecuteUbergraph_GCN_NPC_Interaction_RezOut_Glitch, CallFunc_K2_GetComponentLocation_ReturnValue) == 0x000008, "Member 'GCN_NPC_Interaction_RezOut_Glitch_C_ExecuteUbergraph_GCN_NPC_Interaction_RezOut_Glitch::CallFunc_K2_GetComponentLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(GCN_NPC_Interaction_RezOut_Glitch_C_ExecuteUbergraph_GCN_NPC_Interaction_RezOut_Glitch, CallFunc_K2_GetComponentRotation_ReturnValue) == 0x000020, "Member 'GCN_NPC_Interaction_RezOut_Glitch_C_ExecuteUbergraph_GCN_NPC_Interaction_RezOut_Glitch::CallFunc_K2_GetComponentRotation_ReturnValue' has a wrong offset!");
static_assert(offsetof(GCN_NPC_Interaction_RezOut_Glitch_C_ExecuteUbergraph_GCN_NPC_Interaction_RezOut_Glitch, CallFunc_K2_SetWorldRotation_SweepHitResult) == 0x000038, "Member 'GCN_NPC_Interaction_RezOut_Glitch_C_ExecuteUbergraph_GCN_NPC_Interaction_RezOut_Glitch::CallFunc_K2_SetWorldRotation_SweepHitResult' has a wrong offset!");

}
