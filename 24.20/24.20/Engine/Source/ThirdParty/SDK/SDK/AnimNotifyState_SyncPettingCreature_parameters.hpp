#pragma once

#include "Basic.hpp"

#include "RidingCodeRuntime_structs.hpp"
#include "FortniteGame_structs.hpp"
#include "Engine_structs.hpp"

namespace SDK::Params
{

struct AnimNotifyState_SyncPettingCreature_C_GetRiderPettingMontage final
{
public:
	class AActor*                                 RiderActor;
	class UAnimMontage*                           RiderPettingMontage;
	class AFortPlayerPawn*                        K2Node_DynamicCast_AsFort_Player_Pawn;
	bool                                          K2Node_DynamicCast_bSuccess;
	uint8                                         Pad_19[0x7];
	class URiderComponent*                        CallFunc_GetComponentByClass_ReturnValue;
	EFortCustomGender                             CallFunc_GetCharacterGender_ReturnValue;
	bool                                          CallFunc_IsValid_ReturnValue;
	bool                                          K2Node_SwitchEnum_CmpSuccess;
	uint8                                         Pad_2B[0x5];
	struct FRidingPettingData                     CallFunc_GetPettingData_ReturnValue;
	struct FRidingPettingData                     CallFunc_GetPettingData_ReturnValue_1;
	bool                                          CallFunc_IsValid_ReturnValue_1;
};
static_assert(alignof(AnimNotifyState_SyncPettingCreature_C_GetRiderPettingMontage) == 0x000008, "Wrong alignment on AnimNotifyState_SyncPettingCreature_C_GetRiderPettingMontage");
static_assert(sizeof(AnimNotifyState_SyncPettingCreature_C_GetRiderPettingMontage) == 0x000248, "Wrong size on AnimNotifyState_SyncPettingCreature_C_GetRiderPettingMontage");
static_assert(offsetof(AnimNotifyState_SyncPettingCreature_C_GetRiderPettingMontage, RiderActor) == 0x000000, "Member 'AnimNotifyState_SyncPettingCreature_C_GetRiderPettingMontage::RiderActor' has a wrong offset!");
static_assert(offsetof(AnimNotifyState_SyncPettingCreature_C_GetRiderPettingMontage, RiderPettingMontage) == 0x000008, "Member 'AnimNotifyState_SyncPettingCreature_C_GetRiderPettingMontage::RiderPettingMontage' has a wrong offset!");
static_assert(offsetof(AnimNotifyState_SyncPettingCreature_C_GetRiderPettingMontage, K2Node_DynamicCast_AsFort_Player_Pawn) == 0x000010, "Member 'AnimNotifyState_SyncPettingCreature_C_GetRiderPettingMontage::K2Node_DynamicCast_AsFort_Player_Pawn' has a wrong offset!");
static_assert(offsetof(AnimNotifyState_SyncPettingCreature_C_GetRiderPettingMontage, K2Node_DynamicCast_bSuccess) == 0x000018, "Member 'AnimNotifyState_SyncPettingCreature_C_GetRiderPettingMontage::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(AnimNotifyState_SyncPettingCreature_C_GetRiderPettingMontage, CallFunc_GetComponentByClass_ReturnValue) == 0x000020, "Member 'AnimNotifyState_SyncPettingCreature_C_GetRiderPettingMontage::CallFunc_GetComponentByClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(AnimNotifyState_SyncPettingCreature_C_GetRiderPettingMontage, CallFunc_GetCharacterGender_ReturnValue) == 0x000028, "Member 'AnimNotifyState_SyncPettingCreature_C_GetRiderPettingMontage::CallFunc_GetCharacterGender_ReturnValue' has a wrong offset!");
static_assert(offsetof(AnimNotifyState_SyncPettingCreature_C_GetRiderPettingMontage, CallFunc_IsValid_ReturnValue) == 0x000029, "Member 'AnimNotifyState_SyncPettingCreature_C_GetRiderPettingMontage::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(AnimNotifyState_SyncPettingCreature_C_GetRiderPettingMontage, K2Node_SwitchEnum_CmpSuccess) == 0x00002A, "Member 'AnimNotifyState_SyncPettingCreature_C_GetRiderPettingMontage::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");
static_assert(offsetof(AnimNotifyState_SyncPettingCreature_C_GetRiderPettingMontage, CallFunc_GetPettingData_ReturnValue) == 0x000030, "Member 'AnimNotifyState_SyncPettingCreature_C_GetRiderPettingMontage::CallFunc_GetPettingData_ReturnValue' has a wrong offset!");
static_assert(offsetof(AnimNotifyState_SyncPettingCreature_C_GetRiderPettingMontage, CallFunc_GetPettingData_ReturnValue_1) == 0x000138, "Member 'AnimNotifyState_SyncPettingCreature_C_GetRiderPettingMontage::CallFunc_GetPettingData_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(AnimNotifyState_SyncPettingCreature_C_GetRiderPettingMontage, CallFunc_IsValid_ReturnValue_1) == 0x000240, "Member 'AnimNotifyState_SyncPettingCreature_C_GetRiderPettingMontage::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");

struct AnimNotifyState_SyncPettingCreature_C_Received_NotifyBegin final
{
public:
	class USkeletalMeshComponent*                 MeshComp;
	class UAnimSequenceBase*                      Animation;
	float                                         TotalDuration;
	uint8                                         Pad_14[0x4];
	struct FAnimNotifyEventReference              EventReference;
	bool                                          ReturnValue;
	uint8                                         Pad_41[0x7];
	class UAnimInstance*                          CallFunc_GetAnimInstance_ReturnValue;
	class AActor*                                 CallFunc_GetOwner_ReturnValue;
	class URiderComponent*                        CallFunc_GetComponentByClass_ReturnValue;
	class UAnimMontage*                           CallFunc_GetRiderPettingMontage_RiderPettingMontage;
	struct FRidingPettingData                     CallFunc_GetPettingData_ReturnValue;
	class AActor*                                 CallFunc_GetOwner_ReturnValue_1;
	class USkeletalMeshComponent*                 CallFunc_GetComponentByClass_ReturnValue_1;
	class UAnimInstance*                          CallFunc_GetAnimInstance_ReturnValue_1;
};
static_assert(alignof(AnimNotifyState_SyncPettingCreature_C_Received_NotifyBegin) == 0x000008, "Wrong alignment on AnimNotifyState_SyncPettingCreature_C_Received_NotifyBegin");
static_assert(sizeof(AnimNotifyState_SyncPettingCreature_C_Received_NotifyBegin) == 0x000188, "Wrong size on AnimNotifyState_SyncPettingCreature_C_Received_NotifyBegin");
static_assert(offsetof(AnimNotifyState_SyncPettingCreature_C_Received_NotifyBegin, MeshComp) == 0x000000, "Member 'AnimNotifyState_SyncPettingCreature_C_Received_NotifyBegin::MeshComp' has a wrong offset!");
static_assert(offsetof(AnimNotifyState_SyncPettingCreature_C_Received_NotifyBegin, Animation) == 0x000008, "Member 'AnimNotifyState_SyncPettingCreature_C_Received_NotifyBegin::Animation' has a wrong offset!");
static_assert(offsetof(AnimNotifyState_SyncPettingCreature_C_Received_NotifyBegin, TotalDuration) == 0x000010, "Member 'AnimNotifyState_SyncPettingCreature_C_Received_NotifyBegin::TotalDuration' has a wrong offset!");
static_assert(offsetof(AnimNotifyState_SyncPettingCreature_C_Received_NotifyBegin, EventReference) == 0x000018, "Member 'AnimNotifyState_SyncPettingCreature_C_Received_NotifyBegin::EventReference' has a wrong offset!");
static_assert(offsetof(AnimNotifyState_SyncPettingCreature_C_Received_NotifyBegin, ReturnValue) == 0x000040, "Member 'AnimNotifyState_SyncPettingCreature_C_Received_NotifyBegin::ReturnValue' has a wrong offset!");
static_assert(offsetof(AnimNotifyState_SyncPettingCreature_C_Received_NotifyBegin, CallFunc_GetAnimInstance_ReturnValue) == 0x000048, "Member 'AnimNotifyState_SyncPettingCreature_C_Received_NotifyBegin::CallFunc_GetAnimInstance_ReturnValue' has a wrong offset!");
static_assert(offsetof(AnimNotifyState_SyncPettingCreature_C_Received_NotifyBegin, CallFunc_GetOwner_ReturnValue) == 0x000050, "Member 'AnimNotifyState_SyncPettingCreature_C_Received_NotifyBegin::CallFunc_GetOwner_ReturnValue' has a wrong offset!");
static_assert(offsetof(AnimNotifyState_SyncPettingCreature_C_Received_NotifyBegin, CallFunc_GetComponentByClass_ReturnValue) == 0x000058, "Member 'AnimNotifyState_SyncPettingCreature_C_Received_NotifyBegin::CallFunc_GetComponentByClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(AnimNotifyState_SyncPettingCreature_C_Received_NotifyBegin, CallFunc_GetRiderPettingMontage_RiderPettingMontage) == 0x000060, "Member 'AnimNotifyState_SyncPettingCreature_C_Received_NotifyBegin::CallFunc_GetRiderPettingMontage_RiderPettingMontage' has a wrong offset!");
static_assert(offsetof(AnimNotifyState_SyncPettingCreature_C_Received_NotifyBegin, CallFunc_GetPettingData_ReturnValue) == 0x000068, "Member 'AnimNotifyState_SyncPettingCreature_C_Received_NotifyBegin::CallFunc_GetPettingData_ReturnValue' has a wrong offset!");
static_assert(offsetof(AnimNotifyState_SyncPettingCreature_C_Received_NotifyBegin, CallFunc_GetOwner_ReturnValue_1) == 0x000170, "Member 'AnimNotifyState_SyncPettingCreature_C_Received_NotifyBegin::CallFunc_GetOwner_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(AnimNotifyState_SyncPettingCreature_C_Received_NotifyBegin, CallFunc_GetComponentByClass_ReturnValue_1) == 0x000178, "Member 'AnimNotifyState_SyncPettingCreature_C_Received_NotifyBegin::CallFunc_GetComponentByClass_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(AnimNotifyState_SyncPettingCreature_C_Received_NotifyBegin, CallFunc_GetAnimInstance_ReturnValue_1) == 0x000180, "Member 'AnimNotifyState_SyncPettingCreature_C_Received_NotifyBegin::CallFunc_GetAnimInstance_ReturnValue_1' has a wrong offset!");

struct AnimNotifyState_SyncPettingCreature_C_Received_NotifyEnd final
{
public:
	class USkeletalMeshComponent*                 MeshComp;
	class UAnimSequenceBase*                      Animation;
	struct FAnimNotifyEventReference              EventReference;
	bool                                          ReturnValue;
	uint8                                         Pad_39[0x7];
	class AActor*                                 CallFunc_GetOwner_ReturnValue;
	class URiderComponent*                        CallFunc_GetComponentByClass_ReturnValue;
	struct FRidingPettingData                     CallFunc_GetPettingData_ReturnValue;
	class AActor*                                 CallFunc_GetOwner_ReturnValue_1;
	class USkeletalMeshComponent*                 CallFunc_GetComponentByClass_ReturnValue_1;
	class UAnimInstance*                          CallFunc_GetAnimInstance_ReturnValue;
};
static_assert(alignof(AnimNotifyState_SyncPettingCreature_C_Received_NotifyEnd) == 0x000008, "Wrong alignment on AnimNotifyState_SyncPettingCreature_C_Received_NotifyEnd");
static_assert(sizeof(AnimNotifyState_SyncPettingCreature_C_Received_NotifyEnd) == 0x000170, "Wrong size on AnimNotifyState_SyncPettingCreature_C_Received_NotifyEnd");
static_assert(offsetof(AnimNotifyState_SyncPettingCreature_C_Received_NotifyEnd, MeshComp) == 0x000000, "Member 'AnimNotifyState_SyncPettingCreature_C_Received_NotifyEnd::MeshComp' has a wrong offset!");
static_assert(offsetof(AnimNotifyState_SyncPettingCreature_C_Received_NotifyEnd, Animation) == 0x000008, "Member 'AnimNotifyState_SyncPettingCreature_C_Received_NotifyEnd::Animation' has a wrong offset!");
static_assert(offsetof(AnimNotifyState_SyncPettingCreature_C_Received_NotifyEnd, EventReference) == 0x000010, "Member 'AnimNotifyState_SyncPettingCreature_C_Received_NotifyEnd::EventReference' has a wrong offset!");
static_assert(offsetof(AnimNotifyState_SyncPettingCreature_C_Received_NotifyEnd, ReturnValue) == 0x000038, "Member 'AnimNotifyState_SyncPettingCreature_C_Received_NotifyEnd::ReturnValue' has a wrong offset!");
static_assert(offsetof(AnimNotifyState_SyncPettingCreature_C_Received_NotifyEnd, CallFunc_GetOwner_ReturnValue) == 0x000040, "Member 'AnimNotifyState_SyncPettingCreature_C_Received_NotifyEnd::CallFunc_GetOwner_ReturnValue' has a wrong offset!");
static_assert(offsetof(AnimNotifyState_SyncPettingCreature_C_Received_NotifyEnd, CallFunc_GetComponentByClass_ReturnValue) == 0x000048, "Member 'AnimNotifyState_SyncPettingCreature_C_Received_NotifyEnd::CallFunc_GetComponentByClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(AnimNotifyState_SyncPettingCreature_C_Received_NotifyEnd, CallFunc_GetPettingData_ReturnValue) == 0x000050, "Member 'AnimNotifyState_SyncPettingCreature_C_Received_NotifyEnd::CallFunc_GetPettingData_ReturnValue' has a wrong offset!");
static_assert(offsetof(AnimNotifyState_SyncPettingCreature_C_Received_NotifyEnd, CallFunc_GetOwner_ReturnValue_1) == 0x000158, "Member 'AnimNotifyState_SyncPettingCreature_C_Received_NotifyEnd::CallFunc_GetOwner_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(AnimNotifyState_SyncPettingCreature_C_Received_NotifyEnd, CallFunc_GetComponentByClass_ReturnValue_1) == 0x000160, "Member 'AnimNotifyState_SyncPettingCreature_C_Received_NotifyEnd::CallFunc_GetComponentByClass_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(AnimNotifyState_SyncPettingCreature_C_Received_NotifyEnd, CallFunc_GetAnimInstance_ReturnValue) == 0x000168, "Member 'AnimNotifyState_SyncPettingCreature_C_Received_NotifyEnd::CallFunc_GetAnimInstance_ReturnValue' has a wrong offset!");

}
