#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"

namespace SDK::Params
{

struct AnimNotify_FootStep_Right_C_Received_Notify final
{
public:
	class USkeletalMeshComponent*                 MeshComp;
	class UAnimSequenceBase*                      Animation;
	struct FAnimNotifyEventReference              EventReference;
	bool                                          ReturnValue;
	uint8                                         Pad_39[0x7];
	class AActor*                                 CallFunc_GetOwner_ReturnValue;
	bool                                          CallFunc_Received_Notify_ReturnValue;
	uint8                                         Pad_49[0x7];
	class AFortPawn*                              K2Node_DynamicCast_AsFort_Pawn;
	bool                                          K2Node_DynamicCast_bSuccess;
	uint8                                         Pad_59[0x7];
	TScriptInterface<class IInterfacePlayerPawn_C> K2Node_DynamicCast_AsInterface_Player_Pawn;
	bool                                          K2Node_DynamicCast_bSuccess_1;
};
static_assert(alignof(AnimNotify_FootStep_Right_C_Received_Notify) == 0x000008, "Wrong alignment on AnimNotify_FootStep_Right_C_Received_Notify");
static_assert(sizeof(AnimNotify_FootStep_Right_C_Received_Notify) == 0x000078, "Wrong size on AnimNotify_FootStep_Right_C_Received_Notify");
static_assert(offsetof(AnimNotify_FootStep_Right_C_Received_Notify, MeshComp) == 0x000000, "Member 'AnimNotify_FootStep_Right_C_Received_Notify::MeshComp' has a wrong offset!");
static_assert(offsetof(AnimNotify_FootStep_Right_C_Received_Notify, Animation) == 0x000008, "Member 'AnimNotify_FootStep_Right_C_Received_Notify::Animation' has a wrong offset!");
static_assert(offsetof(AnimNotify_FootStep_Right_C_Received_Notify, EventReference) == 0x000010, "Member 'AnimNotify_FootStep_Right_C_Received_Notify::EventReference' has a wrong offset!");
static_assert(offsetof(AnimNotify_FootStep_Right_C_Received_Notify, ReturnValue) == 0x000038, "Member 'AnimNotify_FootStep_Right_C_Received_Notify::ReturnValue' has a wrong offset!");
static_assert(offsetof(AnimNotify_FootStep_Right_C_Received_Notify, CallFunc_GetOwner_ReturnValue) == 0x000040, "Member 'AnimNotify_FootStep_Right_C_Received_Notify::CallFunc_GetOwner_ReturnValue' has a wrong offset!");
static_assert(offsetof(AnimNotify_FootStep_Right_C_Received_Notify, CallFunc_Received_Notify_ReturnValue) == 0x000048, "Member 'AnimNotify_FootStep_Right_C_Received_Notify::CallFunc_Received_Notify_ReturnValue' has a wrong offset!");
static_assert(offsetof(AnimNotify_FootStep_Right_C_Received_Notify, K2Node_DynamicCast_AsFort_Pawn) == 0x000050, "Member 'AnimNotify_FootStep_Right_C_Received_Notify::K2Node_DynamicCast_AsFort_Pawn' has a wrong offset!");
static_assert(offsetof(AnimNotify_FootStep_Right_C_Received_Notify, K2Node_DynamicCast_bSuccess) == 0x000058, "Member 'AnimNotify_FootStep_Right_C_Received_Notify::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(AnimNotify_FootStep_Right_C_Received_Notify, K2Node_DynamicCast_AsInterface_Player_Pawn) == 0x000060, "Member 'AnimNotify_FootStep_Right_C_Received_Notify::K2Node_DynamicCast_AsInterface_Player_Pawn' has a wrong offset!");
static_assert(offsetof(AnimNotify_FootStep_Right_C_Received_Notify, K2Node_DynamicCast_bSuccess_1) == 0x000070, "Member 'AnimNotify_FootStep_Right_C_Received_Notify::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");

}
