#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"

namespace SDK::Params
{

struct AnimNotify_Irwin_Footfalls_C_Received_Notify final
{
public:
	class USkeletalMeshComponent*                 MeshComp;
	class UAnimSequenceBase*                      Animation;
	struct FAnimNotifyEventReference              EventReference;
	bool                                          ReturnValue;
	uint8                                         Pad_39[0x7];
	struct FVector                                CallFunc_GetRightVector_ReturnValue;
	class AActor*                                 CallFunc_GetOwner_ReturnValue;
	class ANPC_Pawn_Wildlife_Parent_C*            K2Node_DynamicCast_AsNPC_Pawn_Wildlife_Parent;
	bool                                          K2Node_DynamicCast_bSuccess;
	bool                                          CallFunc_IsValid_ReturnValue;
};
static_assert(alignof(AnimNotify_Irwin_Footfalls_C_Received_Notify) == 0x000008, "Wrong alignment on AnimNotify_Irwin_Footfalls_C_Received_Notify");
static_assert(sizeof(AnimNotify_Irwin_Footfalls_C_Received_Notify) == 0x000070, "Wrong size on AnimNotify_Irwin_Footfalls_C_Received_Notify");
static_assert(offsetof(AnimNotify_Irwin_Footfalls_C_Received_Notify, MeshComp) == 0x000000, "Member 'AnimNotify_Irwin_Footfalls_C_Received_Notify::MeshComp' has a wrong offset!");
static_assert(offsetof(AnimNotify_Irwin_Footfalls_C_Received_Notify, Animation) == 0x000008, "Member 'AnimNotify_Irwin_Footfalls_C_Received_Notify::Animation' has a wrong offset!");
static_assert(offsetof(AnimNotify_Irwin_Footfalls_C_Received_Notify, EventReference) == 0x000010, "Member 'AnimNotify_Irwin_Footfalls_C_Received_Notify::EventReference' has a wrong offset!");
static_assert(offsetof(AnimNotify_Irwin_Footfalls_C_Received_Notify, ReturnValue) == 0x000038, "Member 'AnimNotify_Irwin_Footfalls_C_Received_Notify::ReturnValue' has a wrong offset!");
static_assert(offsetof(AnimNotify_Irwin_Footfalls_C_Received_Notify, CallFunc_GetRightVector_ReturnValue) == 0x000040, "Member 'AnimNotify_Irwin_Footfalls_C_Received_Notify::CallFunc_GetRightVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(AnimNotify_Irwin_Footfalls_C_Received_Notify, CallFunc_GetOwner_ReturnValue) == 0x000058, "Member 'AnimNotify_Irwin_Footfalls_C_Received_Notify::CallFunc_GetOwner_ReturnValue' has a wrong offset!");
static_assert(offsetof(AnimNotify_Irwin_Footfalls_C_Received_Notify, K2Node_DynamicCast_AsNPC_Pawn_Wildlife_Parent) == 0x000060, "Member 'AnimNotify_Irwin_Footfalls_C_Received_Notify::K2Node_DynamicCast_AsNPC_Pawn_Wildlife_Parent' has a wrong offset!");
static_assert(offsetof(AnimNotify_Irwin_Footfalls_C_Received_Notify, K2Node_DynamicCast_bSuccess) == 0x000068, "Member 'AnimNotify_Irwin_Footfalls_C_Received_Notify::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(AnimNotify_Irwin_Footfalls_C_Received_Notify, CallFunc_IsValid_ReturnValue) == 0x000069, "Member 'AnimNotify_Irwin_Footfalls_C_Received_Notify::CallFunc_IsValid_ReturnValue' has a wrong offset!");

}
