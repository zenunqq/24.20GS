#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"

namespace SDK::Params
{

struct AnimNotify_EliminationBotM2_C_Received_Notify final
{
public:
	class USkeletalMeshComponent*                 MeshComp;
	class UAnimSequenceBase*                      Animation;
	struct FAnimNotifyEventReference              EventReference;
	bool                                          ReturnValue;
	uint8                                         Pad_39[0x7];
	class AActor*                                 CallFunc_GetOwner_ReturnValue;
	class ABP_TeleportationDrone_C*               K2Node_DynamicCast_AsBP_Teleportation_Drone;
	bool                                          K2Node_DynamicCast_bSuccess;
	uint8                                         Pad_51[0x7];
	class AActor*                                 CallFunc_GetOwner_ReturnValue_1;
	class AGCN_RezOut_C*                          K2Node_DynamicCast_AsGCN_Rez_Out;
	bool                                          K2Node_DynamicCast_bSuccess_1;
	uint8                                         Pad_69[0x7];
	class AGCN_RezIn_C*                           K2Node_DynamicCast_AsGCN_Rez_In;
	bool                                          K2Node_DynamicCast_bSuccess_2;
};
static_assert(alignof(AnimNotify_EliminationBotM2_C_Received_Notify) == 0x000008, "Wrong alignment on AnimNotify_EliminationBotM2_C_Received_Notify");
static_assert(sizeof(AnimNotify_EliminationBotM2_C_Received_Notify) == 0x000080, "Wrong size on AnimNotify_EliminationBotM2_C_Received_Notify");
static_assert(offsetof(AnimNotify_EliminationBotM2_C_Received_Notify, MeshComp) == 0x000000, "Member 'AnimNotify_EliminationBotM2_C_Received_Notify::MeshComp' has a wrong offset!");
static_assert(offsetof(AnimNotify_EliminationBotM2_C_Received_Notify, Animation) == 0x000008, "Member 'AnimNotify_EliminationBotM2_C_Received_Notify::Animation' has a wrong offset!");
static_assert(offsetof(AnimNotify_EliminationBotM2_C_Received_Notify, EventReference) == 0x000010, "Member 'AnimNotify_EliminationBotM2_C_Received_Notify::EventReference' has a wrong offset!");
static_assert(offsetof(AnimNotify_EliminationBotM2_C_Received_Notify, ReturnValue) == 0x000038, "Member 'AnimNotify_EliminationBotM2_C_Received_Notify::ReturnValue' has a wrong offset!");
static_assert(offsetof(AnimNotify_EliminationBotM2_C_Received_Notify, CallFunc_GetOwner_ReturnValue) == 0x000040, "Member 'AnimNotify_EliminationBotM2_C_Received_Notify::CallFunc_GetOwner_ReturnValue' has a wrong offset!");
static_assert(offsetof(AnimNotify_EliminationBotM2_C_Received_Notify, K2Node_DynamicCast_AsBP_Teleportation_Drone) == 0x000048, "Member 'AnimNotify_EliminationBotM2_C_Received_Notify::K2Node_DynamicCast_AsBP_Teleportation_Drone' has a wrong offset!");
static_assert(offsetof(AnimNotify_EliminationBotM2_C_Received_Notify, K2Node_DynamicCast_bSuccess) == 0x000050, "Member 'AnimNotify_EliminationBotM2_C_Received_Notify::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(AnimNotify_EliminationBotM2_C_Received_Notify, CallFunc_GetOwner_ReturnValue_1) == 0x000058, "Member 'AnimNotify_EliminationBotM2_C_Received_Notify::CallFunc_GetOwner_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(AnimNotify_EliminationBotM2_C_Received_Notify, K2Node_DynamicCast_AsGCN_Rez_Out) == 0x000060, "Member 'AnimNotify_EliminationBotM2_C_Received_Notify::K2Node_DynamicCast_AsGCN_Rez_Out' has a wrong offset!");
static_assert(offsetof(AnimNotify_EliminationBotM2_C_Received_Notify, K2Node_DynamicCast_bSuccess_1) == 0x000068, "Member 'AnimNotify_EliminationBotM2_C_Received_Notify::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(AnimNotify_EliminationBotM2_C_Received_Notify, K2Node_DynamicCast_AsGCN_Rez_In) == 0x000070, "Member 'AnimNotify_EliminationBotM2_C_Received_Notify::K2Node_DynamicCast_AsGCN_Rez_In' has a wrong offset!");
static_assert(offsetof(AnimNotify_EliminationBotM2_C_Received_Notify, K2Node_DynamicCast_bSuccess_2) == 0x000078, "Member 'AnimNotify_EliminationBotM2_C_Received_Notify::K2Node_DynamicCast_bSuccess_2' has a wrong offset!");

}
