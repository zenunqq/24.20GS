#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"

namespace SDK::Params
{

struct BP_AnimNotify_CameraShake_C_Received_Notify final
{
public:
	class USkeletalMeshComponent*                 MeshComp;
	class UAnimSequenceBase*                      Animation;
	struct FAnimNotifyEventReference              EventReference;
	bool                                          ReturnValue;
	bool                                          CallFunc_IsDedicatedServer_ReturnValue;
	uint8                                         Pad_3A[0x6];
	class AActor*                                 CallFunc_GetOwner_ReturnValue;
	class AFortPawn*                              K2Node_DynamicCast_AsFort_Pawn;
	bool                                          K2Node_DynamicCast_bSuccess;
	uint8                                         Pad_51[0x7];
	class AController*                            CallFunc_GetController_ReturnValue;
	class AFortPlayerController*                  K2Node_DynamicCast_AsFort_Player_Controller;
	bool                                          K2Node_DynamicCast_bSuccess_1;
	uint8                                         Pad_69[0x3];
	float                                         CallFunc_ClientStartCameraShake_Scale_ImplicitCast;
};
static_assert(alignof(BP_AnimNotify_CameraShake_C_Received_Notify) == 0x000008, "Wrong alignment on BP_AnimNotify_CameraShake_C_Received_Notify");
static_assert(sizeof(BP_AnimNotify_CameraShake_C_Received_Notify) == 0x000070, "Wrong size on BP_AnimNotify_CameraShake_C_Received_Notify");
static_assert(offsetof(BP_AnimNotify_CameraShake_C_Received_Notify, MeshComp) == 0x000000, "Member 'BP_AnimNotify_CameraShake_C_Received_Notify::MeshComp' has a wrong offset!");
static_assert(offsetof(BP_AnimNotify_CameraShake_C_Received_Notify, Animation) == 0x000008, "Member 'BP_AnimNotify_CameraShake_C_Received_Notify::Animation' has a wrong offset!");
static_assert(offsetof(BP_AnimNotify_CameraShake_C_Received_Notify, EventReference) == 0x000010, "Member 'BP_AnimNotify_CameraShake_C_Received_Notify::EventReference' has a wrong offset!");
static_assert(offsetof(BP_AnimNotify_CameraShake_C_Received_Notify, ReturnValue) == 0x000038, "Member 'BP_AnimNotify_CameraShake_C_Received_Notify::ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AnimNotify_CameraShake_C_Received_Notify, CallFunc_IsDedicatedServer_ReturnValue) == 0x000039, "Member 'BP_AnimNotify_CameraShake_C_Received_Notify::CallFunc_IsDedicatedServer_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AnimNotify_CameraShake_C_Received_Notify, CallFunc_GetOwner_ReturnValue) == 0x000040, "Member 'BP_AnimNotify_CameraShake_C_Received_Notify::CallFunc_GetOwner_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AnimNotify_CameraShake_C_Received_Notify, K2Node_DynamicCast_AsFort_Pawn) == 0x000048, "Member 'BP_AnimNotify_CameraShake_C_Received_Notify::K2Node_DynamicCast_AsFort_Pawn' has a wrong offset!");
static_assert(offsetof(BP_AnimNotify_CameraShake_C_Received_Notify, K2Node_DynamicCast_bSuccess) == 0x000050, "Member 'BP_AnimNotify_CameraShake_C_Received_Notify::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BP_AnimNotify_CameraShake_C_Received_Notify, CallFunc_GetController_ReturnValue) == 0x000058, "Member 'BP_AnimNotify_CameraShake_C_Received_Notify::CallFunc_GetController_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AnimNotify_CameraShake_C_Received_Notify, K2Node_DynamicCast_AsFort_Player_Controller) == 0x000060, "Member 'BP_AnimNotify_CameraShake_C_Received_Notify::K2Node_DynamicCast_AsFort_Player_Controller' has a wrong offset!");
static_assert(offsetof(BP_AnimNotify_CameraShake_C_Received_Notify, K2Node_DynamicCast_bSuccess_1) == 0x000068, "Member 'BP_AnimNotify_CameraShake_C_Received_Notify::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(BP_AnimNotify_CameraShake_C_Received_Notify, CallFunc_ClientStartCameraShake_Scale_ImplicitCast) == 0x00006C, "Member 'BP_AnimNotify_CameraShake_C_Received_Notify::CallFunc_ClientStartCameraShake_Scale_ImplicitCast' has a wrong offset!");

}
