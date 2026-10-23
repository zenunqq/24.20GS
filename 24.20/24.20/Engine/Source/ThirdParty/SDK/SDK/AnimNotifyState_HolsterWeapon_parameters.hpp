#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"

namespace SDK::Params
{

struct AnimNotifyState_HolsterWeapon_C_CanApplyHolster final
{
public:
	class FName                                   HolsterId;
	bool                                          ReturnValue;
};
static_assert(alignof(AnimNotifyState_HolsterWeapon_C_CanApplyHolster) == 0x000004, "Wrong alignment on AnimNotifyState_HolsterWeapon_C_CanApplyHolster");
static_assert(sizeof(AnimNotifyState_HolsterWeapon_C_CanApplyHolster) == 0x000008, "Wrong size on AnimNotifyState_HolsterWeapon_C_CanApplyHolster");
static_assert(offsetof(AnimNotifyState_HolsterWeapon_C_CanApplyHolster, HolsterId) == 0x000000, "Member 'AnimNotifyState_HolsterWeapon_C_CanApplyHolster::HolsterId' has a wrong offset!");
static_assert(offsetof(AnimNotifyState_HolsterWeapon_C_CanApplyHolster, ReturnValue) == 0x000004, "Member 'AnimNotifyState_HolsterWeapon_C_CanApplyHolster::ReturnValue' has a wrong offset!");

struct AnimNotifyState_HolsterWeapon_C_Received_NotifyBegin final
{
public:
	class USkeletalMeshComponent*                 MeshComp;
	class UAnimSequenceBase*                      Animation;
	float                                         TotalDuration;
	uint8                                         Pad_14[0x4];
	struct FAnimNotifyEventReference              EventReference;
	bool                                          ReturnValue;
	uint8                                         Pad_41[0x7];
	class FString                                 CallFunc_GetObjectName_ReturnValue;
	class AActor*                                 CallFunc_GetOwner_ReturnValue;
	class FName                                   CallFunc_Conv_StringToName_ReturnValue;
	uint8                                         Pad_64[0x4];
	class AFortPawn*                              K2Node_DynamicCast_AsFort_Pawn;
	bool                                          K2Node_DynamicCast_bSuccess;
};
static_assert(alignof(AnimNotifyState_HolsterWeapon_C_Received_NotifyBegin) == 0x000008, "Wrong alignment on AnimNotifyState_HolsterWeapon_C_Received_NotifyBegin");
static_assert(sizeof(AnimNotifyState_HolsterWeapon_C_Received_NotifyBegin) == 0x000078, "Wrong size on AnimNotifyState_HolsterWeapon_C_Received_NotifyBegin");
static_assert(offsetof(AnimNotifyState_HolsterWeapon_C_Received_NotifyBegin, MeshComp) == 0x000000, "Member 'AnimNotifyState_HolsterWeapon_C_Received_NotifyBegin::MeshComp' has a wrong offset!");
static_assert(offsetof(AnimNotifyState_HolsterWeapon_C_Received_NotifyBegin, Animation) == 0x000008, "Member 'AnimNotifyState_HolsterWeapon_C_Received_NotifyBegin::Animation' has a wrong offset!");
static_assert(offsetof(AnimNotifyState_HolsterWeapon_C_Received_NotifyBegin, TotalDuration) == 0x000010, "Member 'AnimNotifyState_HolsterWeapon_C_Received_NotifyBegin::TotalDuration' has a wrong offset!");
static_assert(offsetof(AnimNotifyState_HolsterWeapon_C_Received_NotifyBegin, EventReference) == 0x000018, "Member 'AnimNotifyState_HolsterWeapon_C_Received_NotifyBegin::EventReference' has a wrong offset!");
static_assert(offsetof(AnimNotifyState_HolsterWeapon_C_Received_NotifyBegin, ReturnValue) == 0x000040, "Member 'AnimNotifyState_HolsterWeapon_C_Received_NotifyBegin::ReturnValue' has a wrong offset!");
static_assert(offsetof(AnimNotifyState_HolsterWeapon_C_Received_NotifyBegin, CallFunc_GetObjectName_ReturnValue) == 0x000048, "Member 'AnimNotifyState_HolsterWeapon_C_Received_NotifyBegin::CallFunc_GetObjectName_ReturnValue' has a wrong offset!");
static_assert(offsetof(AnimNotifyState_HolsterWeapon_C_Received_NotifyBegin, CallFunc_GetOwner_ReturnValue) == 0x000058, "Member 'AnimNotifyState_HolsterWeapon_C_Received_NotifyBegin::CallFunc_GetOwner_ReturnValue' has a wrong offset!");
static_assert(offsetof(AnimNotifyState_HolsterWeapon_C_Received_NotifyBegin, CallFunc_Conv_StringToName_ReturnValue) == 0x000060, "Member 'AnimNotifyState_HolsterWeapon_C_Received_NotifyBegin::CallFunc_Conv_StringToName_ReturnValue' has a wrong offset!");
static_assert(offsetof(AnimNotifyState_HolsterWeapon_C_Received_NotifyBegin, K2Node_DynamicCast_AsFort_Pawn) == 0x000068, "Member 'AnimNotifyState_HolsterWeapon_C_Received_NotifyBegin::K2Node_DynamicCast_AsFort_Pawn' has a wrong offset!");
static_assert(offsetof(AnimNotifyState_HolsterWeapon_C_Received_NotifyBegin, K2Node_DynamicCast_bSuccess) == 0x000070, "Member 'AnimNotifyState_HolsterWeapon_C_Received_NotifyBegin::K2Node_DynamicCast_bSuccess' has a wrong offset!");

struct AnimNotifyState_HolsterWeapon_C_Received_NotifyEnd final
{
public:
	class USkeletalMeshComponent*                 MeshComp;
	class UAnimSequenceBase*                      Animation;
	struct FAnimNotifyEventReference              EventReference;
	bool                                          ReturnValue;
	uint8                                         Pad_39[0x7];
	class FString                                 CallFunc_GetObjectName_ReturnValue;
	class AActor*                                 CallFunc_GetOwner_ReturnValue;
	class FName                                   CallFunc_Conv_StringToName_ReturnValue;
	uint8                                         Pad_5C[0x4];
	class AFortPawn*                              K2Node_DynamicCast_AsFort_Pawn;
	bool                                          K2Node_DynamicCast_bSuccess;
};
static_assert(alignof(AnimNotifyState_HolsterWeapon_C_Received_NotifyEnd) == 0x000008, "Wrong alignment on AnimNotifyState_HolsterWeapon_C_Received_NotifyEnd");
static_assert(sizeof(AnimNotifyState_HolsterWeapon_C_Received_NotifyEnd) == 0x000070, "Wrong size on AnimNotifyState_HolsterWeapon_C_Received_NotifyEnd");
static_assert(offsetof(AnimNotifyState_HolsterWeapon_C_Received_NotifyEnd, MeshComp) == 0x000000, "Member 'AnimNotifyState_HolsterWeapon_C_Received_NotifyEnd::MeshComp' has a wrong offset!");
static_assert(offsetof(AnimNotifyState_HolsterWeapon_C_Received_NotifyEnd, Animation) == 0x000008, "Member 'AnimNotifyState_HolsterWeapon_C_Received_NotifyEnd::Animation' has a wrong offset!");
static_assert(offsetof(AnimNotifyState_HolsterWeapon_C_Received_NotifyEnd, EventReference) == 0x000010, "Member 'AnimNotifyState_HolsterWeapon_C_Received_NotifyEnd::EventReference' has a wrong offset!");
static_assert(offsetof(AnimNotifyState_HolsterWeapon_C_Received_NotifyEnd, ReturnValue) == 0x000038, "Member 'AnimNotifyState_HolsterWeapon_C_Received_NotifyEnd::ReturnValue' has a wrong offset!");
static_assert(offsetof(AnimNotifyState_HolsterWeapon_C_Received_NotifyEnd, CallFunc_GetObjectName_ReturnValue) == 0x000040, "Member 'AnimNotifyState_HolsterWeapon_C_Received_NotifyEnd::CallFunc_GetObjectName_ReturnValue' has a wrong offset!");
static_assert(offsetof(AnimNotifyState_HolsterWeapon_C_Received_NotifyEnd, CallFunc_GetOwner_ReturnValue) == 0x000050, "Member 'AnimNotifyState_HolsterWeapon_C_Received_NotifyEnd::CallFunc_GetOwner_ReturnValue' has a wrong offset!");
static_assert(offsetof(AnimNotifyState_HolsterWeapon_C_Received_NotifyEnd, CallFunc_Conv_StringToName_ReturnValue) == 0x000058, "Member 'AnimNotifyState_HolsterWeapon_C_Received_NotifyEnd::CallFunc_Conv_StringToName_ReturnValue' has a wrong offset!");
static_assert(offsetof(AnimNotifyState_HolsterWeapon_C_Received_NotifyEnd, K2Node_DynamicCast_AsFort_Pawn) == 0x000060, "Member 'AnimNotifyState_HolsterWeapon_C_Received_NotifyEnd::K2Node_DynamicCast_AsFort_Pawn' has a wrong offset!");
static_assert(offsetof(AnimNotifyState_HolsterWeapon_C_Received_NotifyEnd, K2Node_DynamicCast_bSuccess) == 0x000068, "Member 'AnimNotifyState_HolsterWeapon_C_Received_NotifyEnd::K2Node_DynamicCast_bSuccess' has a wrong offset!");

}
