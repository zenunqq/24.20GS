#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"

namespace SDK::Params
{

struct AnimNotify_GrindRailLand_C_Received_Notify final
{
public:
	class USkeletalMeshComponent*                 MeshComp;
	class UAnimSequenceBase*                      Animation;
	struct FAnimNotifyEventReference              EventReference;
	bool                                          ReturnValue;
	uint8                                         Pad_39[0x7];
	class UBP_GrindingComponent_C*                GrindingComponent;
	class AActor*                                 CallFunc_GetOwner_ReturnValue;
	class UBP_GrindingComponent_C*                CallFunc_GetComponentByClass_ReturnValue;
	bool                                          CallFunc_IsValid_ReturnValue;
};
static_assert(alignof(AnimNotify_GrindRailLand_C_Received_Notify) == 0x000008, "Wrong alignment on AnimNotify_GrindRailLand_C_Received_Notify");
static_assert(sizeof(AnimNotify_GrindRailLand_C_Received_Notify) == 0x000060, "Wrong size on AnimNotify_GrindRailLand_C_Received_Notify");
static_assert(offsetof(AnimNotify_GrindRailLand_C_Received_Notify, MeshComp) == 0x000000, "Member 'AnimNotify_GrindRailLand_C_Received_Notify::MeshComp' has a wrong offset!");
static_assert(offsetof(AnimNotify_GrindRailLand_C_Received_Notify, Animation) == 0x000008, "Member 'AnimNotify_GrindRailLand_C_Received_Notify::Animation' has a wrong offset!");
static_assert(offsetof(AnimNotify_GrindRailLand_C_Received_Notify, EventReference) == 0x000010, "Member 'AnimNotify_GrindRailLand_C_Received_Notify::EventReference' has a wrong offset!");
static_assert(offsetof(AnimNotify_GrindRailLand_C_Received_Notify, ReturnValue) == 0x000038, "Member 'AnimNotify_GrindRailLand_C_Received_Notify::ReturnValue' has a wrong offset!");
static_assert(offsetof(AnimNotify_GrindRailLand_C_Received_Notify, GrindingComponent) == 0x000040, "Member 'AnimNotify_GrindRailLand_C_Received_Notify::GrindingComponent' has a wrong offset!");
static_assert(offsetof(AnimNotify_GrindRailLand_C_Received_Notify, CallFunc_GetOwner_ReturnValue) == 0x000048, "Member 'AnimNotify_GrindRailLand_C_Received_Notify::CallFunc_GetOwner_ReturnValue' has a wrong offset!");
static_assert(offsetof(AnimNotify_GrindRailLand_C_Received_Notify, CallFunc_GetComponentByClass_ReturnValue) == 0x000050, "Member 'AnimNotify_GrindRailLand_C_Received_Notify::CallFunc_GetComponentByClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(AnimNotify_GrindRailLand_C_Received_Notify, CallFunc_IsValid_ReturnValue) == 0x000058, "Member 'AnimNotify_GrindRailLand_C_Received_Notify::CallFunc_IsValid_ReturnValue' has a wrong offset!");

}
