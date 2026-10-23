#pragma once

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "CrewUI_structs.hpp"
#include "Engine_structs.hpp"

namespace SDK::Params
{

struct BattlePassCrewPurchaseContainer_C_BattlePassMusic final
{
public:
	bool                                          CallFunc_IsValid_ReturnValue;
};
static_assert(alignof(BattlePassCrewPurchaseContainer_C_BattlePassMusic) == 0x000001, "Wrong alignment on BattlePassCrewPurchaseContainer_C_BattlePassMusic");
static_assert(sizeof(BattlePassCrewPurchaseContainer_C_BattlePassMusic) == 0x000001, "Wrong size on BattlePassCrewPurchaseContainer_C_BattlePassMusic");
static_assert(offsetof(BattlePassCrewPurchaseContainer_C_BattlePassMusic, CallFunc_IsValid_ReturnValue) == 0x000000, "Member 'BattlePassCrewPurchaseContainer_C_BattlePassMusic::CallFunc_IsValid_ReturnValue' has a wrong offset!");

struct BattlePassCrewPurchaseContainer_C_ExecuteUbergraph_BattlePassCrewPurchaseContainer final
{
public:
	int32                                         EntryPoint;
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;
	bool                                          CallFunc_IsValid_ReturnValue;
	uint8                                         Pad_11[0x7];
	struct FTimerHandle                           CallFunc_K2_SetTimerDelegate_ReturnValue;
	bool                                          CallFunc_IsPlaying_ReturnValue;
	bool                                          CallFunc_IsValid_ReturnValue_1;
	bool                                          CallFunc_IsPlaying_ReturnValue_1;
	bool                                          K2Node_CustomEvent_isLeft;
	bool                                          K2Node_Event_bCanClaimRewards;
	EBattlePassCrewContentState                   K2Node_CustomEvent_TransitionState_1;
	bool                                          K2Node_SwitchEnum_CmpSuccess;
	uint8                                         Pad_27[0x1];
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;
	class UBattlePassPurchaseScreen_C*            K2Node_DynamicCast_AsBattle_Pass_Purchase_Screen;
	bool                                          K2Node_DynamicCast_bSuccess;
	uint8                                         Pad_39[0x7];
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue_1;
	bool                                          Temp_bool_Variable;
	EBattlePassCrewContentState                   K2Node_CustomEvent_TransitionState;
	uint8                                         Pad_4A[0x6];
	class UWidgetAnimation*                       K2Node_Select_Default;
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue_2;
	float                                         CallFunc_GetEndTime_ReturnValue;
	bool                                          Temp_bool_Variable_1;
	uint8                                         Pad_65[0x3];
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue_3;
	bool                                          CallFunc_IsValid_ReturnValue_2;
	uint8                                         Pad_71[0xF];
	struct FTransform                             CallFunc_MakeTransform_ReturnValue;
	class AActor*                                 CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue;
	class ABattlepass_MusicController_Quartz_C*   CallFunc_FinishSpawningActor_ReturnValue;
	bool                                          Temp_bool_Variable_2;
	uint8                                         Pad_F1[0x7];
	class UWidget*                                K2Node_Select_Default_1;
	class UAudioComponent*                        CallFunc_SpawnSound2D_ReturnValue;
	class UAudioComponent*                        CallFunc_SpawnSound2D_ReturnValue_1;
	EBattlePassCrewContentState                   Temp_byte_Variable;
	EBattlePassCrewContentState                   Temp_byte_Variable_1;
	EBattlePassCrewContentState                   K2Node_Select_Default_2;
	uint8                                         Pad_113[0x1];
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_1;
	class UBattlePassPurchaseScreen_C*            K2Node_DynamicCast_AsBattle_Pass_Purchase_Screen_1;
	bool                                          K2Node_DynamicCast_bSuccess_1;
	uint8                                         Pad_129[0x3];
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_2;
	bool                                          K2Node_SwitchEnum_CmpSuccess_1;
};
static_assert(alignof(BattlePassCrewPurchaseContainer_C_ExecuteUbergraph_BattlePassCrewPurchaseContainer) == 0x000010, "Wrong alignment on BattlePassCrewPurchaseContainer_C_ExecuteUbergraph_BattlePassCrewPurchaseContainer");
static_assert(sizeof(BattlePassCrewPurchaseContainer_C_ExecuteUbergraph_BattlePassCrewPurchaseContainer) == 0x000140, "Wrong size on BattlePassCrewPurchaseContainer_C_ExecuteUbergraph_BattlePassCrewPurchaseContainer");
static_assert(offsetof(BattlePassCrewPurchaseContainer_C_ExecuteUbergraph_BattlePassCrewPurchaseContainer, EntryPoint) == 0x000000, "Member 'BattlePassCrewPurchaseContainer_C_ExecuteUbergraph_BattlePassCrewPurchaseContainer::EntryPoint' has a wrong offset!");
static_assert(offsetof(BattlePassCrewPurchaseContainer_C_ExecuteUbergraph_BattlePassCrewPurchaseContainer, K2Node_CreateDelegate_OutputDelegate) == 0x000004, "Member 'BattlePassCrewPurchaseContainer_C_ExecuteUbergraph_BattlePassCrewPurchaseContainer::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(BattlePassCrewPurchaseContainer_C_ExecuteUbergraph_BattlePassCrewPurchaseContainer, CallFunc_IsValid_ReturnValue) == 0x000010, "Member 'BattlePassCrewPurchaseContainer_C_ExecuteUbergraph_BattlePassCrewPurchaseContainer::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BattlePassCrewPurchaseContainer_C_ExecuteUbergraph_BattlePassCrewPurchaseContainer, CallFunc_K2_SetTimerDelegate_ReturnValue) == 0x000018, "Member 'BattlePassCrewPurchaseContainer_C_ExecuteUbergraph_BattlePassCrewPurchaseContainer::CallFunc_K2_SetTimerDelegate_ReturnValue' has a wrong offset!");
static_assert(offsetof(BattlePassCrewPurchaseContainer_C_ExecuteUbergraph_BattlePassCrewPurchaseContainer, CallFunc_IsPlaying_ReturnValue) == 0x000020, "Member 'BattlePassCrewPurchaseContainer_C_ExecuteUbergraph_BattlePassCrewPurchaseContainer::CallFunc_IsPlaying_ReturnValue' has a wrong offset!");
static_assert(offsetof(BattlePassCrewPurchaseContainer_C_ExecuteUbergraph_BattlePassCrewPurchaseContainer, CallFunc_IsValid_ReturnValue_1) == 0x000021, "Member 'BattlePassCrewPurchaseContainer_C_ExecuteUbergraph_BattlePassCrewPurchaseContainer::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BattlePassCrewPurchaseContainer_C_ExecuteUbergraph_BattlePassCrewPurchaseContainer, CallFunc_IsPlaying_ReturnValue_1) == 0x000022, "Member 'BattlePassCrewPurchaseContainer_C_ExecuteUbergraph_BattlePassCrewPurchaseContainer::CallFunc_IsPlaying_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BattlePassCrewPurchaseContainer_C_ExecuteUbergraph_BattlePassCrewPurchaseContainer, K2Node_CustomEvent_isLeft) == 0x000023, "Member 'BattlePassCrewPurchaseContainer_C_ExecuteUbergraph_BattlePassCrewPurchaseContainer::K2Node_CustomEvent_isLeft' has a wrong offset!");
static_assert(offsetof(BattlePassCrewPurchaseContainer_C_ExecuteUbergraph_BattlePassCrewPurchaseContainer, K2Node_Event_bCanClaimRewards) == 0x000024, "Member 'BattlePassCrewPurchaseContainer_C_ExecuteUbergraph_BattlePassCrewPurchaseContainer::K2Node_Event_bCanClaimRewards' has a wrong offset!");
static_assert(offsetof(BattlePassCrewPurchaseContainer_C_ExecuteUbergraph_BattlePassCrewPurchaseContainer, K2Node_CustomEvent_TransitionState_1) == 0x000025, "Member 'BattlePassCrewPurchaseContainer_C_ExecuteUbergraph_BattlePassCrewPurchaseContainer::K2Node_CustomEvent_TransitionState_1' has a wrong offset!");
static_assert(offsetof(BattlePassCrewPurchaseContainer_C_ExecuteUbergraph_BattlePassCrewPurchaseContainer, K2Node_SwitchEnum_CmpSuccess) == 0x000026, "Member 'BattlePassCrewPurchaseContainer_C_ExecuteUbergraph_BattlePassCrewPurchaseContainer::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");
static_assert(offsetof(BattlePassCrewPurchaseContainer_C_ExecuteUbergraph_BattlePassCrewPurchaseContainer, CallFunc_PlayAnimation_ReturnValue) == 0x000028, "Member 'BattlePassCrewPurchaseContainer_C_ExecuteUbergraph_BattlePassCrewPurchaseContainer::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BattlePassCrewPurchaseContainer_C_ExecuteUbergraph_BattlePassCrewPurchaseContainer, K2Node_DynamicCast_AsBattle_Pass_Purchase_Screen) == 0x000030, "Member 'BattlePassCrewPurchaseContainer_C_ExecuteUbergraph_BattlePassCrewPurchaseContainer::K2Node_DynamicCast_AsBattle_Pass_Purchase_Screen' has a wrong offset!");
static_assert(offsetof(BattlePassCrewPurchaseContainer_C_ExecuteUbergraph_BattlePassCrewPurchaseContainer, K2Node_DynamicCast_bSuccess) == 0x000038, "Member 'BattlePassCrewPurchaseContainer_C_ExecuteUbergraph_BattlePassCrewPurchaseContainer::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BattlePassCrewPurchaseContainer_C_ExecuteUbergraph_BattlePassCrewPurchaseContainer, CallFunc_PlayAnimation_ReturnValue_1) == 0x000040, "Member 'BattlePassCrewPurchaseContainer_C_ExecuteUbergraph_BattlePassCrewPurchaseContainer::CallFunc_PlayAnimation_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BattlePassCrewPurchaseContainer_C_ExecuteUbergraph_BattlePassCrewPurchaseContainer, Temp_bool_Variable) == 0x000048, "Member 'BattlePassCrewPurchaseContainer_C_ExecuteUbergraph_BattlePassCrewPurchaseContainer::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(BattlePassCrewPurchaseContainer_C_ExecuteUbergraph_BattlePassCrewPurchaseContainer, K2Node_CustomEvent_TransitionState) == 0x000049, "Member 'BattlePassCrewPurchaseContainer_C_ExecuteUbergraph_BattlePassCrewPurchaseContainer::K2Node_CustomEvent_TransitionState' has a wrong offset!");
static_assert(offsetof(BattlePassCrewPurchaseContainer_C_ExecuteUbergraph_BattlePassCrewPurchaseContainer, K2Node_Select_Default) == 0x000050, "Member 'BattlePassCrewPurchaseContainer_C_ExecuteUbergraph_BattlePassCrewPurchaseContainer::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(BattlePassCrewPurchaseContainer_C_ExecuteUbergraph_BattlePassCrewPurchaseContainer, CallFunc_PlayAnimation_ReturnValue_2) == 0x000058, "Member 'BattlePassCrewPurchaseContainer_C_ExecuteUbergraph_BattlePassCrewPurchaseContainer::CallFunc_PlayAnimation_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BattlePassCrewPurchaseContainer_C_ExecuteUbergraph_BattlePassCrewPurchaseContainer, CallFunc_GetEndTime_ReturnValue) == 0x000060, "Member 'BattlePassCrewPurchaseContainer_C_ExecuteUbergraph_BattlePassCrewPurchaseContainer::CallFunc_GetEndTime_ReturnValue' has a wrong offset!");
static_assert(offsetof(BattlePassCrewPurchaseContainer_C_ExecuteUbergraph_BattlePassCrewPurchaseContainer, Temp_bool_Variable_1) == 0x000064, "Member 'BattlePassCrewPurchaseContainer_C_ExecuteUbergraph_BattlePassCrewPurchaseContainer::Temp_bool_Variable_1' has a wrong offset!");
static_assert(offsetof(BattlePassCrewPurchaseContainer_C_ExecuteUbergraph_BattlePassCrewPurchaseContainer, CallFunc_PlayAnimation_ReturnValue_3) == 0x000068, "Member 'BattlePassCrewPurchaseContainer_C_ExecuteUbergraph_BattlePassCrewPurchaseContainer::CallFunc_PlayAnimation_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(BattlePassCrewPurchaseContainer_C_ExecuteUbergraph_BattlePassCrewPurchaseContainer, CallFunc_IsValid_ReturnValue_2) == 0x000070, "Member 'BattlePassCrewPurchaseContainer_C_ExecuteUbergraph_BattlePassCrewPurchaseContainer::CallFunc_IsValid_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BattlePassCrewPurchaseContainer_C_ExecuteUbergraph_BattlePassCrewPurchaseContainer, CallFunc_MakeTransform_ReturnValue) == 0x000080, "Member 'BattlePassCrewPurchaseContainer_C_ExecuteUbergraph_BattlePassCrewPurchaseContainer::CallFunc_MakeTransform_ReturnValue' has a wrong offset!");
static_assert(offsetof(BattlePassCrewPurchaseContainer_C_ExecuteUbergraph_BattlePassCrewPurchaseContainer, CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue) == 0x0000E0, "Member 'BattlePassCrewPurchaseContainer_C_ExecuteUbergraph_BattlePassCrewPurchaseContainer::CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(BattlePassCrewPurchaseContainer_C_ExecuteUbergraph_BattlePassCrewPurchaseContainer, CallFunc_FinishSpawningActor_ReturnValue) == 0x0000E8, "Member 'BattlePassCrewPurchaseContainer_C_ExecuteUbergraph_BattlePassCrewPurchaseContainer::CallFunc_FinishSpawningActor_ReturnValue' has a wrong offset!");
static_assert(offsetof(BattlePassCrewPurchaseContainer_C_ExecuteUbergraph_BattlePassCrewPurchaseContainer, Temp_bool_Variable_2) == 0x0000F0, "Member 'BattlePassCrewPurchaseContainer_C_ExecuteUbergraph_BattlePassCrewPurchaseContainer::Temp_bool_Variable_2' has a wrong offset!");
static_assert(offsetof(BattlePassCrewPurchaseContainer_C_ExecuteUbergraph_BattlePassCrewPurchaseContainer, K2Node_Select_Default_1) == 0x0000F8, "Member 'BattlePassCrewPurchaseContainer_C_ExecuteUbergraph_BattlePassCrewPurchaseContainer::K2Node_Select_Default_1' has a wrong offset!");
static_assert(offsetof(BattlePassCrewPurchaseContainer_C_ExecuteUbergraph_BattlePassCrewPurchaseContainer, CallFunc_SpawnSound2D_ReturnValue) == 0x000100, "Member 'BattlePassCrewPurchaseContainer_C_ExecuteUbergraph_BattlePassCrewPurchaseContainer::CallFunc_SpawnSound2D_ReturnValue' has a wrong offset!");
static_assert(offsetof(BattlePassCrewPurchaseContainer_C_ExecuteUbergraph_BattlePassCrewPurchaseContainer, CallFunc_SpawnSound2D_ReturnValue_1) == 0x000108, "Member 'BattlePassCrewPurchaseContainer_C_ExecuteUbergraph_BattlePassCrewPurchaseContainer::CallFunc_SpawnSound2D_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BattlePassCrewPurchaseContainer_C_ExecuteUbergraph_BattlePassCrewPurchaseContainer, Temp_byte_Variable) == 0x000110, "Member 'BattlePassCrewPurchaseContainer_C_ExecuteUbergraph_BattlePassCrewPurchaseContainer::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(BattlePassCrewPurchaseContainer_C_ExecuteUbergraph_BattlePassCrewPurchaseContainer, Temp_byte_Variable_1) == 0x000111, "Member 'BattlePassCrewPurchaseContainer_C_ExecuteUbergraph_BattlePassCrewPurchaseContainer::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(BattlePassCrewPurchaseContainer_C_ExecuteUbergraph_BattlePassCrewPurchaseContainer, K2Node_Select_Default_2) == 0x000112, "Member 'BattlePassCrewPurchaseContainer_C_ExecuteUbergraph_BattlePassCrewPurchaseContainer::K2Node_Select_Default_2' has a wrong offset!");
static_assert(offsetof(BattlePassCrewPurchaseContainer_C_ExecuteUbergraph_BattlePassCrewPurchaseContainer, K2Node_CreateDelegate_OutputDelegate_1) == 0x000114, "Member 'BattlePassCrewPurchaseContainer_C_ExecuteUbergraph_BattlePassCrewPurchaseContainer::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(BattlePassCrewPurchaseContainer_C_ExecuteUbergraph_BattlePassCrewPurchaseContainer, K2Node_DynamicCast_AsBattle_Pass_Purchase_Screen_1) == 0x000120, "Member 'BattlePassCrewPurchaseContainer_C_ExecuteUbergraph_BattlePassCrewPurchaseContainer::K2Node_DynamicCast_AsBattle_Pass_Purchase_Screen_1' has a wrong offset!");
static_assert(offsetof(BattlePassCrewPurchaseContainer_C_ExecuteUbergraph_BattlePassCrewPurchaseContainer, K2Node_DynamicCast_bSuccess_1) == 0x000128, "Member 'BattlePassCrewPurchaseContainer_C_ExecuteUbergraph_BattlePassCrewPurchaseContainer::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(BattlePassCrewPurchaseContainer_C_ExecuteUbergraph_BattlePassCrewPurchaseContainer, K2Node_CreateDelegate_OutputDelegate_2) == 0x00012C, "Member 'BattlePassCrewPurchaseContainer_C_ExecuteUbergraph_BattlePassCrewPurchaseContainer::K2Node_CreateDelegate_OutputDelegate_2' has a wrong offset!");
static_assert(offsetof(BattlePassCrewPurchaseContainer_C_ExecuteUbergraph_BattlePassCrewPurchaseContainer, K2Node_SwitchEnum_CmpSuccess_1) == 0x000138, "Member 'BattlePassCrewPurchaseContainer_C_ExecuteUbergraph_BattlePassCrewPurchaseContainer::K2Node_SwitchEnum_CmpSuccess_1' has a wrong offset!");

struct BattlePassCrewPurchaseContainer_C_OnContentStateUpdated final
{
public:
	EBattlePassCrewContentState                   InState;
	bool                                          bInScreenOpened;
	uint8                                         Pad_2[0x6];
	class UWidget*                                Temp_object_Variable;
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;
	EBattlePassCrewContentState                   Temp_byte_Variable;
	uint8                                         Pad_12[0x6];
	class UWidgetAnimation*                       Temp_object_Variable_1;
	EBattlePassCrewContentState                   Temp_byte_Variable_1;
	uint8                                         Pad_21[0x3];
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;
	class UWidget*                                K2Node_Select_Default;
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;
	class UWidgetAnimation*                       K2Node_Select_Default_1;
};
static_assert(alignof(BattlePassCrewPurchaseContainer_C_OnContentStateUpdated) == 0x000008, "Wrong alignment on BattlePassCrewPurchaseContainer_C_OnContentStateUpdated");
static_assert(sizeof(BattlePassCrewPurchaseContainer_C_OnContentStateUpdated) == 0x000048, "Wrong size on BattlePassCrewPurchaseContainer_C_OnContentStateUpdated");
static_assert(offsetof(BattlePassCrewPurchaseContainer_C_OnContentStateUpdated, InState) == 0x000000, "Member 'BattlePassCrewPurchaseContainer_C_OnContentStateUpdated::InState' has a wrong offset!");
static_assert(offsetof(BattlePassCrewPurchaseContainer_C_OnContentStateUpdated, bInScreenOpened) == 0x000001, "Member 'BattlePassCrewPurchaseContainer_C_OnContentStateUpdated::bInScreenOpened' has a wrong offset!");
static_assert(offsetof(BattlePassCrewPurchaseContainer_C_OnContentStateUpdated, Temp_object_Variable) == 0x000008, "Member 'BattlePassCrewPurchaseContainer_C_OnContentStateUpdated::Temp_object_Variable' has a wrong offset!");
static_assert(offsetof(BattlePassCrewPurchaseContainer_C_OnContentStateUpdated, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x000010, "Member 'BattlePassCrewPurchaseContainer_C_OnContentStateUpdated::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(BattlePassCrewPurchaseContainer_C_OnContentStateUpdated, Temp_byte_Variable) == 0x000011, "Member 'BattlePassCrewPurchaseContainer_C_OnContentStateUpdated::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(BattlePassCrewPurchaseContainer_C_OnContentStateUpdated, Temp_object_Variable_1) == 0x000018, "Member 'BattlePassCrewPurchaseContainer_C_OnContentStateUpdated::Temp_object_Variable_1' has a wrong offset!");
static_assert(offsetof(BattlePassCrewPurchaseContainer_C_OnContentStateUpdated, Temp_byte_Variable_1) == 0x000020, "Member 'BattlePassCrewPurchaseContainer_C_OnContentStateUpdated::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(BattlePassCrewPurchaseContainer_C_OnContentStateUpdated, K2Node_CreateDelegate_OutputDelegate) == 0x000024, "Member 'BattlePassCrewPurchaseContainer_C_OnContentStateUpdated::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(BattlePassCrewPurchaseContainer_C_OnContentStateUpdated, K2Node_Select_Default) == 0x000030, "Member 'BattlePassCrewPurchaseContainer_C_OnContentStateUpdated::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(BattlePassCrewPurchaseContainer_C_OnContentStateUpdated, CallFunc_PlayAnimation_ReturnValue) == 0x000038, "Member 'BattlePassCrewPurchaseContainer_C_OnContentStateUpdated::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BattlePassCrewPurchaseContainer_C_OnContentStateUpdated, K2Node_Select_Default_1) == 0x000040, "Member 'BattlePassCrewPurchaseContainer_C_OnContentStateUpdated::K2Node_Select_Default_1' has a wrong offset!");

struct BattlePassCrewPurchaseContainer_C_OnTransitionLeftEvaluated final
{
public:
	float                                         CallFunc_GetEndTime_ReturnValue;
	float                                         CallFunc_GetAnimationCurrentTime_ReturnValue;
	double                                        CallFunc_Divide_DoubleDouble_ReturnValue;
	double                                        CallFunc_Subtract_DoubleDouble_ReturnValue;
	double                                        CallFunc_Divide_DoubleDouble_B_ImplicitCast;
	double                                        CallFunc_Divide_DoubleDouble_A_ImplicitCast;
};
static_assert(alignof(BattlePassCrewPurchaseContainer_C_OnTransitionLeftEvaluated) == 0x000008, "Wrong alignment on BattlePassCrewPurchaseContainer_C_OnTransitionLeftEvaluated");
static_assert(sizeof(BattlePassCrewPurchaseContainer_C_OnTransitionLeftEvaluated) == 0x000028, "Wrong size on BattlePassCrewPurchaseContainer_C_OnTransitionLeftEvaluated");
static_assert(offsetof(BattlePassCrewPurchaseContainer_C_OnTransitionLeftEvaluated, CallFunc_GetEndTime_ReturnValue) == 0x000000, "Member 'BattlePassCrewPurchaseContainer_C_OnTransitionLeftEvaluated::CallFunc_GetEndTime_ReturnValue' has a wrong offset!");
static_assert(offsetof(BattlePassCrewPurchaseContainer_C_OnTransitionLeftEvaluated, CallFunc_GetAnimationCurrentTime_ReturnValue) == 0x000004, "Member 'BattlePassCrewPurchaseContainer_C_OnTransitionLeftEvaluated::CallFunc_GetAnimationCurrentTime_ReturnValue' has a wrong offset!");
static_assert(offsetof(BattlePassCrewPurchaseContainer_C_OnTransitionLeftEvaluated, CallFunc_Divide_DoubleDouble_ReturnValue) == 0x000008, "Member 'BattlePassCrewPurchaseContainer_C_OnTransitionLeftEvaluated::CallFunc_Divide_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(BattlePassCrewPurchaseContainer_C_OnTransitionLeftEvaluated, CallFunc_Subtract_DoubleDouble_ReturnValue) == 0x000010, "Member 'BattlePassCrewPurchaseContainer_C_OnTransitionLeftEvaluated::CallFunc_Subtract_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(BattlePassCrewPurchaseContainer_C_OnTransitionLeftEvaluated, CallFunc_Divide_DoubleDouble_B_ImplicitCast) == 0x000018, "Member 'BattlePassCrewPurchaseContainer_C_OnTransitionLeftEvaluated::CallFunc_Divide_DoubleDouble_B_ImplicitCast' has a wrong offset!");
static_assert(offsetof(BattlePassCrewPurchaseContainer_C_OnTransitionLeftEvaluated, CallFunc_Divide_DoubleDouble_A_ImplicitCast) == 0x000020, "Member 'BattlePassCrewPurchaseContainer_C_OnTransitionLeftEvaluated::CallFunc_Divide_DoubleDouble_A_ImplicitCast' has a wrong offset!");

struct BattlePassCrewPurchaseContainer_C_OnTransitionRightEvaluated final
{
public:
	float                                         CallFunc_GetEndTime_ReturnValue;
	float                                         CallFunc_GetAnimationCurrentTime_ReturnValue;
	double                                        CallFunc_Divide_DoubleDouble_ReturnValue;
	double                                        CallFunc_Subtract_DoubleDouble_ReturnValue;
	double                                        CallFunc_Divide_DoubleDouble_B_ImplicitCast;
	double                                        CallFunc_Divide_DoubleDouble_A_ImplicitCast;
};
static_assert(alignof(BattlePassCrewPurchaseContainer_C_OnTransitionRightEvaluated) == 0x000008, "Wrong alignment on BattlePassCrewPurchaseContainer_C_OnTransitionRightEvaluated");
static_assert(sizeof(BattlePassCrewPurchaseContainer_C_OnTransitionRightEvaluated) == 0x000028, "Wrong size on BattlePassCrewPurchaseContainer_C_OnTransitionRightEvaluated");
static_assert(offsetof(BattlePassCrewPurchaseContainer_C_OnTransitionRightEvaluated, CallFunc_GetEndTime_ReturnValue) == 0x000000, "Member 'BattlePassCrewPurchaseContainer_C_OnTransitionRightEvaluated::CallFunc_GetEndTime_ReturnValue' has a wrong offset!");
static_assert(offsetof(BattlePassCrewPurchaseContainer_C_OnTransitionRightEvaluated, CallFunc_GetAnimationCurrentTime_ReturnValue) == 0x000004, "Member 'BattlePassCrewPurchaseContainer_C_OnTransitionRightEvaluated::CallFunc_GetAnimationCurrentTime_ReturnValue' has a wrong offset!");
static_assert(offsetof(BattlePassCrewPurchaseContainer_C_OnTransitionRightEvaluated, CallFunc_Divide_DoubleDouble_ReturnValue) == 0x000008, "Member 'BattlePassCrewPurchaseContainer_C_OnTransitionRightEvaluated::CallFunc_Divide_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(BattlePassCrewPurchaseContainer_C_OnTransitionRightEvaluated, CallFunc_Subtract_DoubleDouble_ReturnValue) == 0x000010, "Member 'BattlePassCrewPurchaseContainer_C_OnTransitionRightEvaluated::CallFunc_Subtract_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(BattlePassCrewPurchaseContainer_C_OnTransitionRightEvaluated, CallFunc_Divide_DoubleDouble_B_ImplicitCast) == 0x000018, "Member 'BattlePassCrewPurchaseContainer_C_OnTransitionRightEvaluated::CallFunc_Divide_DoubleDouble_B_ImplicitCast' has a wrong offset!");
static_assert(offsetof(BattlePassCrewPurchaseContainer_C_OnTransitionRightEvaluated, CallFunc_Divide_DoubleDouble_A_ImplicitCast) == 0x000020, "Member 'BattlePassCrewPurchaseContainer_C_OnTransitionRightEvaluated::CallFunc_Divide_DoubleDouble_A_ImplicitCast' has a wrong offset!");

struct BattlePassCrewPurchaseContainer_C_OnTriggerIntroAnimation final
{
public:
	bool                                          bCanClaimRewards;
};
static_assert(alignof(BattlePassCrewPurchaseContainer_C_OnTriggerIntroAnimation) == 0x000001, "Wrong alignment on BattlePassCrewPurchaseContainer_C_OnTriggerIntroAnimation");
static_assert(sizeof(BattlePassCrewPurchaseContainer_C_OnTriggerIntroAnimation) == 0x000001, "Wrong size on BattlePassCrewPurchaseContainer_C_OnTriggerIntroAnimation");
static_assert(offsetof(BattlePassCrewPurchaseContainer_C_OnTriggerIntroAnimation, bCanClaimRewards) == 0x000000, "Member 'BattlePassCrewPurchaseContainer_C_OnTriggerIntroAnimation::bCanClaimRewards' has a wrong offset!");

struct BattlePassCrewPurchaseContainer_C_SequenceEvent_ToggleScreens final
{
public:
	bool                                          isLeft;
};
static_assert(alignof(BattlePassCrewPurchaseContainer_C_SequenceEvent_ToggleScreens) == 0x000001, "Wrong alignment on BattlePassCrewPurchaseContainer_C_SequenceEvent_ToggleScreens");
static_assert(sizeof(BattlePassCrewPurchaseContainer_C_SequenceEvent_ToggleScreens) == 0x000001, "Wrong size on BattlePassCrewPurchaseContainer_C_SequenceEvent_ToggleScreens");
static_assert(offsetof(BattlePassCrewPurchaseContainer_C_SequenceEvent_ToggleScreens, isLeft) == 0x000000, "Member 'BattlePassCrewPurchaseContainer_C_SequenceEvent_ToggleScreens::isLeft' has a wrong offset!");

struct BattlePassCrewPurchaseContainer_C_StopAllBattlePassMusic final
{
public:
	bool                                          CallFunc_IsValid_ReturnValue;
	bool                                          CallFunc_IsValid_ReturnValue_1;
	bool                                          CallFunc_IsValid_ReturnValue_2;
	bool                                          CallFunc_IsPlaying_ReturnValue;
	bool                                          CallFunc_IsPlaying_ReturnValue_1;
	bool                                          CallFunc_K2_IsValidTimerHandle_ReturnValue;
};
static_assert(alignof(BattlePassCrewPurchaseContainer_C_StopAllBattlePassMusic) == 0x000001, "Wrong alignment on BattlePassCrewPurchaseContainer_C_StopAllBattlePassMusic");
static_assert(sizeof(BattlePassCrewPurchaseContainer_C_StopAllBattlePassMusic) == 0x000006, "Wrong size on BattlePassCrewPurchaseContainer_C_StopAllBattlePassMusic");
static_assert(offsetof(BattlePassCrewPurchaseContainer_C_StopAllBattlePassMusic, CallFunc_IsValid_ReturnValue) == 0x000000, "Member 'BattlePassCrewPurchaseContainer_C_StopAllBattlePassMusic::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BattlePassCrewPurchaseContainer_C_StopAllBattlePassMusic, CallFunc_IsValid_ReturnValue_1) == 0x000001, "Member 'BattlePassCrewPurchaseContainer_C_StopAllBattlePassMusic::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BattlePassCrewPurchaseContainer_C_StopAllBattlePassMusic, CallFunc_IsValid_ReturnValue_2) == 0x000002, "Member 'BattlePassCrewPurchaseContainer_C_StopAllBattlePassMusic::CallFunc_IsValid_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BattlePassCrewPurchaseContainer_C_StopAllBattlePassMusic, CallFunc_IsPlaying_ReturnValue) == 0x000003, "Member 'BattlePassCrewPurchaseContainer_C_StopAllBattlePassMusic::CallFunc_IsPlaying_ReturnValue' has a wrong offset!");
static_assert(offsetof(BattlePassCrewPurchaseContainer_C_StopAllBattlePassMusic, CallFunc_IsPlaying_ReturnValue_1) == 0x000004, "Member 'BattlePassCrewPurchaseContainer_C_StopAllBattlePassMusic::CallFunc_IsPlaying_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BattlePassCrewPurchaseContainer_C_StopAllBattlePassMusic, CallFunc_K2_IsValidTimerHandle_ReturnValue) == 0x000005, "Member 'BattlePassCrewPurchaseContainer_C_StopAllBattlePassMusic::CallFunc_K2_IsValidTimerHandle_ReturnValue' has a wrong offset!");

struct BattlePassCrewPurchaseContainer_C_SubscriptionMusic final
{
public:
	bool                                          CallFunc_IsValid_ReturnValue;
};
static_assert(alignof(BattlePassCrewPurchaseContainer_C_SubscriptionMusic) == 0x000001, "Wrong alignment on BattlePassCrewPurchaseContainer_C_SubscriptionMusic");
static_assert(sizeof(BattlePassCrewPurchaseContainer_C_SubscriptionMusic) == 0x000001, "Wrong size on BattlePassCrewPurchaseContainer_C_SubscriptionMusic");
static_assert(offsetof(BattlePassCrewPurchaseContainer_C_SubscriptionMusic, CallFunc_IsValid_ReturnValue) == 0x000000, "Member 'BattlePassCrewPurchaseContainer_C_SubscriptionMusic::CallFunc_IsValid_ReturnValue' has a wrong offset!");

struct BattlePassCrewPurchaseContainer_C_TriggerSubTransitionIn final
{
public:
	EBattlePassCrewContentState                   TransitionState;
};
static_assert(alignof(BattlePassCrewPurchaseContainer_C_TriggerSubTransitionIn) == 0x000001, "Wrong alignment on BattlePassCrewPurchaseContainer_C_TriggerSubTransitionIn");
static_assert(sizeof(BattlePassCrewPurchaseContainer_C_TriggerSubTransitionIn) == 0x000001, "Wrong size on BattlePassCrewPurchaseContainer_C_TriggerSubTransitionIn");
static_assert(offsetof(BattlePassCrewPurchaseContainer_C_TriggerSubTransitionIn, TransitionState) == 0x000000, "Member 'BattlePassCrewPurchaseContainer_C_TriggerSubTransitionIn::TransitionState' has a wrong offset!");

struct BattlePassCrewPurchaseContainer_C_TriggerSubTransitionOut final
{
public:
	EBattlePassCrewContentState                   TransitionState;
};
static_assert(alignof(BattlePassCrewPurchaseContainer_C_TriggerSubTransitionOut) == 0x000001, "Wrong alignment on BattlePassCrewPurchaseContainer_C_TriggerSubTransitionOut");
static_assert(sizeof(BattlePassCrewPurchaseContainer_C_TriggerSubTransitionOut) == 0x000001, "Wrong size on BattlePassCrewPurchaseContainer_C_TriggerSubTransitionOut");
static_assert(offsetof(BattlePassCrewPurchaseContainer_C_TriggerSubTransitionOut, TransitionState) == 0x000000, "Member 'BattlePassCrewPurchaseContainer_C_TriggerSubTransitionOut::TransitionState' has a wrong offset!");

struct BattlePassCrewPurchaseContainer_C_UpSellMusic final
{
public:
	bool                                          CallFunc_IsValid_ReturnValue;
};
static_assert(alignof(BattlePassCrewPurchaseContainer_C_UpSellMusic) == 0x000001, "Wrong alignment on BattlePassCrewPurchaseContainer_C_UpSellMusic");
static_assert(sizeof(BattlePassCrewPurchaseContainer_C_UpSellMusic) == 0x000001, "Wrong size on BattlePassCrewPurchaseContainer_C_UpSellMusic");
static_assert(offsetof(BattlePassCrewPurchaseContainer_C_UpSellMusic, CallFunc_IsValid_ReturnValue) == 0x000000, "Member 'BattlePassCrewPurchaseContainer_C_UpSellMusic::CallFunc_IsValid_ReturnValue' has a wrong offset!");

}
