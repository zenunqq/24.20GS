#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Struc_NiagaraParameters_structs.hpp"

namespace SDK::Params
{

struct AnimNotifyState_NiagaraNotify_SetParameters_C_Received_NotifyTick final
{
public:
	class USkeletalMeshComponent*                 MeshComp;
	class UAnimSequenceBase*                      Animation;
	float                                         FrameDeltaTime;
	uint8                                         Pad_14[0x4];
	struct FAnimNotifyEventReference              EventReference;
	bool                                          ReturnValue;
	uint8                                         Pad_41[0x7];
	class UFXSystemComponent*                     CallFunc_GetSpawnedEffect_ReturnValue;
	class UFXSystemComponent*                     CallFunc_GetSpawnedEffect_ReturnValue_1;
	class UFXSystemComponent*                     CallFunc_GetSpawnedEffect_ReturnValue_2;
	class UFXSystemComponent*                     CallFunc_GetSpawnedEffect_ReturnValue_3;
	int32                                         Temp_int_Loop_Counter_Variable;
	int32                                         CallFunc_Add_IntInt_ReturnValue;
	int32                                         Temp_int_Array_Index_Variable;
	bool                                          Temp_bool_Has_Been_Initd_Variable;
	bool                                          Temp_bool_IsClosed_Variable;
	uint8                                         Pad_76[0x2];
	struct FStruc_NiagaraParameters               CallFunc_Array_Get_Item;
	int32                                         CallFunc_Array_Length_ReturnValue;
	bool                                          CallFunc_Less_IntInt_ReturnValue;
	bool                                          K2Node_SwitchEnum_CmpSuccess;
};
static_assert(alignof(AnimNotifyState_NiagaraNotify_SetParameters_C_Received_NotifyTick) == 0x000008, "Wrong alignment on AnimNotifyState_NiagaraNotify_SetParameters_C_Received_NotifyTick");
static_assert(sizeof(AnimNotifyState_NiagaraNotify_SetParameters_C_Received_NotifyTick) == 0x0000C8, "Wrong size on AnimNotifyState_NiagaraNotify_SetParameters_C_Received_NotifyTick");
static_assert(offsetof(AnimNotifyState_NiagaraNotify_SetParameters_C_Received_NotifyTick, MeshComp) == 0x000000, "Member 'AnimNotifyState_NiagaraNotify_SetParameters_C_Received_NotifyTick::MeshComp' has a wrong offset!");
static_assert(offsetof(AnimNotifyState_NiagaraNotify_SetParameters_C_Received_NotifyTick, Animation) == 0x000008, "Member 'AnimNotifyState_NiagaraNotify_SetParameters_C_Received_NotifyTick::Animation' has a wrong offset!");
static_assert(offsetof(AnimNotifyState_NiagaraNotify_SetParameters_C_Received_NotifyTick, FrameDeltaTime) == 0x000010, "Member 'AnimNotifyState_NiagaraNotify_SetParameters_C_Received_NotifyTick::FrameDeltaTime' has a wrong offset!");
static_assert(offsetof(AnimNotifyState_NiagaraNotify_SetParameters_C_Received_NotifyTick, EventReference) == 0x000018, "Member 'AnimNotifyState_NiagaraNotify_SetParameters_C_Received_NotifyTick::EventReference' has a wrong offset!");
static_assert(offsetof(AnimNotifyState_NiagaraNotify_SetParameters_C_Received_NotifyTick, ReturnValue) == 0x000040, "Member 'AnimNotifyState_NiagaraNotify_SetParameters_C_Received_NotifyTick::ReturnValue' has a wrong offset!");
static_assert(offsetof(AnimNotifyState_NiagaraNotify_SetParameters_C_Received_NotifyTick, CallFunc_GetSpawnedEffect_ReturnValue) == 0x000048, "Member 'AnimNotifyState_NiagaraNotify_SetParameters_C_Received_NotifyTick::CallFunc_GetSpawnedEffect_ReturnValue' has a wrong offset!");
static_assert(offsetof(AnimNotifyState_NiagaraNotify_SetParameters_C_Received_NotifyTick, CallFunc_GetSpawnedEffect_ReturnValue_1) == 0x000050, "Member 'AnimNotifyState_NiagaraNotify_SetParameters_C_Received_NotifyTick::CallFunc_GetSpawnedEffect_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(AnimNotifyState_NiagaraNotify_SetParameters_C_Received_NotifyTick, CallFunc_GetSpawnedEffect_ReturnValue_2) == 0x000058, "Member 'AnimNotifyState_NiagaraNotify_SetParameters_C_Received_NotifyTick::CallFunc_GetSpawnedEffect_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(AnimNotifyState_NiagaraNotify_SetParameters_C_Received_NotifyTick, CallFunc_GetSpawnedEffect_ReturnValue_3) == 0x000060, "Member 'AnimNotifyState_NiagaraNotify_SetParameters_C_Received_NotifyTick::CallFunc_GetSpawnedEffect_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(AnimNotifyState_NiagaraNotify_SetParameters_C_Received_NotifyTick, Temp_int_Loop_Counter_Variable) == 0x000068, "Member 'AnimNotifyState_NiagaraNotify_SetParameters_C_Received_NotifyTick::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(AnimNotifyState_NiagaraNotify_SetParameters_C_Received_NotifyTick, CallFunc_Add_IntInt_ReturnValue) == 0x00006C, "Member 'AnimNotifyState_NiagaraNotify_SetParameters_C_Received_NotifyTick::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(AnimNotifyState_NiagaraNotify_SetParameters_C_Received_NotifyTick, Temp_int_Array_Index_Variable) == 0x000070, "Member 'AnimNotifyState_NiagaraNotify_SetParameters_C_Received_NotifyTick::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(AnimNotifyState_NiagaraNotify_SetParameters_C_Received_NotifyTick, Temp_bool_Has_Been_Initd_Variable) == 0x000074, "Member 'AnimNotifyState_NiagaraNotify_SetParameters_C_Received_NotifyTick::Temp_bool_Has_Been_Initd_Variable' has a wrong offset!");
static_assert(offsetof(AnimNotifyState_NiagaraNotify_SetParameters_C_Received_NotifyTick, Temp_bool_IsClosed_Variable) == 0x000075, "Member 'AnimNotifyState_NiagaraNotify_SetParameters_C_Received_NotifyTick::Temp_bool_IsClosed_Variable' has a wrong offset!");
static_assert(offsetof(AnimNotifyState_NiagaraNotify_SetParameters_C_Received_NotifyTick, CallFunc_Array_Get_Item) == 0x000078, "Member 'AnimNotifyState_NiagaraNotify_SetParameters_C_Received_NotifyTick::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(AnimNotifyState_NiagaraNotify_SetParameters_C_Received_NotifyTick, CallFunc_Array_Length_ReturnValue) == 0x0000C0, "Member 'AnimNotifyState_NiagaraNotify_SetParameters_C_Received_NotifyTick::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(AnimNotifyState_NiagaraNotify_SetParameters_C_Received_NotifyTick, CallFunc_Less_IntInt_ReturnValue) == 0x0000C4, "Member 'AnimNotifyState_NiagaraNotify_SetParameters_C_Received_NotifyTick::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(AnimNotifyState_NiagaraNotify_SetParameters_C_Received_NotifyTick, K2Node_SwitchEnum_CmpSuccess) == 0x0000C5, "Member 'AnimNotifyState_NiagaraNotify_SetParameters_C_Received_NotifyTick::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");

}
