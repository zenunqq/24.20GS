#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"

namespace SDK::Params
{

struct AnimNotifyState_AttachAsset_C_Received_NotifyBegin final
{
public:
	class USkeletalMeshComponent*                 MeshComp;
	class UAnimSequenceBase*                      Animation_0;
	float                                         TotalDuration;
	uint8                                         Pad_14[0x4];
	struct FAnimNotifyEventReference              EventReference;
	bool                                          ReturnValue;
	uint8                                         Pad_41[0x7];
	class AActor*                                 CallFunc_GetOwner_ReturnValue;
	class AFortPawn*                              K2Node_DynamicCast_AsFort_Pawn;
	bool                                          K2Node_DynamicCast_bSuccess;
	uint8                                         Pad_59[0x7];
	TScriptInterface<class IGameplayTagAssetInterface> CallFunc_HasAnyMatchingGameplayTags_self_CastInput;
	bool                                          CallFunc_HasAnyMatchingGameplayTags_ReturnValue;
	bool                                          CallFunc_IsLocallyControlled_ReturnValue;
	bool                                          CallFunc_Not_PreBool_ReturnValue;
	bool                                          CallFunc_BooleanOR_ReturnValue;
	uint8                                         Pad_74[0x4];
	class USkeletalMeshComponent*                 CallFunc_GetAssetSkeletalMeshComponentAttachment_ReturnValue;
	bool                                          CallFunc_IsValid_ReturnValue;
	bool                                          CallFunc_IsValid_ReturnValue_1;
	uint8                                         Pad_82[0x2];
	float                                         CallFunc_SetPlayRate_Rate_ImplicitCast;
};
static_assert(alignof(AnimNotifyState_AttachAsset_C_Received_NotifyBegin) == 0x000008, "Wrong alignment on AnimNotifyState_AttachAsset_C_Received_NotifyBegin");
static_assert(sizeof(AnimNotifyState_AttachAsset_C_Received_NotifyBegin) == 0x000088, "Wrong size on AnimNotifyState_AttachAsset_C_Received_NotifyBegin");
static_assert(offsetof(AnimNotifyState_AttachAsset_C_Received_NotifyBegin, MeshComp) == 0x000000, "Member 'AnimNotifyState_AttachAsset_C_Received_NotifyBegin::MeshComp' has a wrong offset!");
static_assert(offsetof(AnimNotifyState_AttachAsset_C_Received_NotifyBegin, Animation_0) == 0x000008, "Member 'AnimNotifyState_AttachAsset_C_Received_NotifyBegin::Animation_0' has a wrong offset!");
static_assert(offsetof(AnimNotifyState_AttachAsset_C_Received_NotifyBegin, TotalDuration) == 0x000010, "Member 'AnimNotifyState_AttachAsset_C_Received_NotifyBegin::TotalDuration' has a wrong offset!");
static_assert(offsetof(AnimNotifyState_AttachAsset_C_Received_NotifyBegin, EventReference) == 0x000018, "Member 'AnimNotifyState_AttachAsset_C_Received_NotifyBegin::EventReference' has a wrong offset!");
static_assert(offsetof(AnimNotifyState_AttachAsset_C_Received_NotifyBegin, ReturnValue) == 0x000040, "Member 'AnimNotifyState_AttachAsset_C_Received_NotifyBegin::ReturnValue' has a wrong offset!");
static_assert(offsetof(AnimNotifyState_AttachAsset_C_Received_NotifyBegin, CallFunc_GetOwner_ReturnValue) == 0x000048, "Member 'AnimNotifyState_AttachAsset_C_Received_NotifyBegin::CallFunc_GetOwner_ReturnValue' has a wrong offset!");
static_assert(offsetof(AnimNotifyState_AttachAsset_C_Received_NotifyBegin, K2Node_DynamicCast_AsFort_Pawn) == 0x000050, "Member 'AnimNotifyState_AttachAsset_C_Received_NotifyBegin::K2Node_DynamicCast_AsFort_Pawn' has a wrong offset!");
static_assert(offsetof(AnimNotifyState_AttachAsset_C_Received_NotifyBegin, K2Node_DynamicCast_bSuccess) == 0x000058, "Member 'AnimNotifyState_AttachAsset_C_Received_NotifyBegin::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(AnimNotifyState_AttachAsset_C_Received_NotifyBegin, CallFunc_HasAnyMatchingGameplayTags_self_CastInput) == 0x000060, "Member 'AnimNotifyState_AttachAsset_C_Received_NotifyBegin::CallFunc_HasAnyMatchingGameplayTags_self_CastInput' has a wrong offset!");
static_assert(offsetof(AnimNotifyState_AttachAsset_C_Received_NotifyBegin, CallFunc_HasAnyMatchingGameplayTags_ReturnValue) == 0x000070, "Member 'AnimNotifyState_AttachAsset_C_Received_NotifyBegin::CallFunc_HasAnyMatchingGameplayTags_ReturnValue' has a wrong offset!");
static_assert(offsetof(AnimNotifyState_AttachAsset_C_Received_NotifyBegin, CallFunc_IsLocallyControlled_ReturnValue) == 0x000071, "Member 'AnimNotifyState_AttachAsset_C_Received_NotifyBegin::CallFunc_IsLocallyControlled_ReturnValue' has a wrong offset!");
static_assert(offsetof(AnimNotifyState_AttachAsset_C_Received_NotifyBegin, CallFunc_Not_PreBool_ReturnValue) == 0x000072, "Member 'AnimNotifyState_AttachAsset_C_Received_NotifyBegin::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(AnimNotifyState_AttachAsset_C_Received_NotifyBegin, CallFunc_BooleanOR_ReturnValue) == 0x000073, "Member 'AnimNotifyState_AttachAsset_C_Received_NotifyBegin::CallFunc_BooleanOR_ReturnValue' has a wrong offset!");
static_assert(offsetof(AnimNotifyState_AttachAsset_C_Received_NotifyBegin, CallFunc_GetAssetSkeletalMeshComponentAttachment_ReturnValue) == 0x000078, "Member 'AnimNotifyState_AttachAsset_C_Received_NotifyBegin::CallFunc_GetAssetSkeletalMeshComponentAttachment_ReturnValue' has a wrong offset!");
static_assert(offsetof(AnimNotifyState_AttachAsset_C_Received_NotifyBegin, CallFunc_IsValid_ReturnValue) == 0x000080, "Member 'AnimNotifyState_AttachAsset_C_Received_NotifyBegin::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(AnimNotifyState_AttachAsset_C_Received_NotifyBegin, CallFunc_IsValid_ReturnValue_1) == 0x000081, "Member 'AnimNotifyState_AttachAsset_C_Received_NotifyBegin::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(AnimNotifyState_AttachAsset_C_Received_NotifyBegin, CallFunc_SetPlayRate_Rate_ImplicitCast) == 0x000084, "Member 'AnimNotifyState_AttachAsset_C_Received_NotifyBegin::CallFunc_SetPlayRate_Rate_ImplicitCast' has a wrong offset!");

struct AnimNotifyState_AttachAsset_C_Received_NotifyEnd final
{
public:
	class USkeletalMeshComponent*                 MeshComp;
	class UAnimSequenceBase*                      Animation_0;
	struct FAnimNotifyEventReference              EventReference;
	bool                                          ReturnValue;
	uint8                                         Pad_39[0x7];
	class AActor*                                 CallFunc_GetOwner_ReturnValue;
	class AFortPawn*                              K2Node_DynamicCast_AsFort_Pawn;
	bool                                          K2Node_DynamicCast_bSuccess;
};
static_assert(alignof(AnimNotifyState_AttachAsset_C_Received_NotifyEnd) == 0x000008, "Wrong alignment on AnimNotifyState_AttachAsset_C_Received_NotifyEnd");
static_assert(sizeof(AnimNotifyState_AttachAsset_C_Received_NotifyEnd) == 0x000058, "Wrong size on AnimNotifyState_AttachAsset_C_Received_NotifyEnd");
static_assert(offsetof(AnimNotifyState_AttachAsset_C_Received_NotifyEnd, MeshComp) == 0x000000, "Member 'AnimNotifyState_AttachAsset_C_Received_NotifyEnd::MeshComp' has a wrong offset!");
static_assert(offsetof(AnimNotifyState_AttachAsset_C_Received_NotifyEnd, Animation_0) == 0x000008, "Member 'AnimNotifyState_AttachAsset_C_Received_NotifyEnd::Animation_0' has a wrong offset!");
static_assert(offsetof(AnimNotifyState_AttachAsset_C_Received_NotifyEnd, EventReference) == 0x000010, "Member 'AnimNotifyState_AttachAsset_C_Received_NotifyEnd::EventReference' has a wrong offset!");
static_assert(offsetof(AnimNotifyState_AttachAsset_C_Received_NotifyEnd, ReturnValue) == 0x000038, "Member 'AnimNotifyState_AttachAsset_C_Received_NotifyEnd::ReturnValue' has a wrong offset!");
static_assert(offsetof(AnimNotifyState_AttachAsset_C_Received_NotifyEnd, CallFunc_GetOwner_ReturnValue) == 0x000040, "Member 'AnimNotifyState_AttachAsset_C_Received_NotifyEnd::CallFunc_GetOwner_ReturnValue' has a wrong offset!");
static_assert(offsetof(AnimNotifyState_AttachAsset_C_Received_NotifyEnd, K2Node_DynamicCast_AsFort_Pawn) == 0x000048, "Member 'AnimNotifyState_AttachAsset_C_Received_NotifyEnd::K2Node_DynamicCast_AsFort_Pawn' has a wrong offset!");
static_assert(offsetof(AnimNotifyState_AttachAsset_C_Received_NotifyEnd, K2Node_DynamicCast_bSuccess) == 0x000050, "Member 'AnimNotifyState_AttachAsset_C_Received_NotifyEnd::K2Node_DynamicCast_bSuccess' has a wrong offset!");

}
