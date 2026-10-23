#pragma once

#include "Basic.hpp"

#include "InputCore_structs.hpp"
#include "CoreUObject_structs.hpp"

namespace SDK::Params
{

struct HeroesCamera_Blueprint_C_ReceiveTick final
{
public:
	float                                         DeltaSeconds;
};
static_assert(alignof(HeroesCamera_Blueprint_C_ReceiveTick) == 0x000004, "Wrong alignment on HeroesCamera_Blueprint_C_ReceiveTick");
static_assert(sizeof(HeroesCamera_Blueprint_C_ReceiveTick) == 0x000004, "Wrong size on HeroesCamera_Blueprint_C_ReceiveTick");
static_assert(offsetof(HeroesCamera_Blueprint_C_ReceiveTick, DeltaSeconds) == 0x000000, "Member 'HeroesCamera_Blueprint_C_ReceiveTick::DeltaSeconds' has a wrong offset!");

struct HeroesCamera_Blueprint_C_InpActEvt_RightMouseButton_K2Node_InputKeyEvent_1 final
{
public:
	struct FKey                                   Key;
};
static_assert(alignof(HeroesCamera_Blueprint_C_InpActEvt_RightMouseButton_K2Node_InputKeyEvent_1) == 0x000008, "Wrong alignment on HeroesCamera_Blueprint_C_InpActEvt_RightMouseButton_K2Node_InputKeyEvent_1");
static_assert(sizeof(HeroesCamera_Blueprint_C_InpActEvt_RightMouseButton_K2Node_InputKeyEvent_1) == 0x000018, "Wrong size on HeroesCamera_Blueprint_C_InpActEvt_RightMouseButton_K2Node_InputKeyEvent_1");
static_assert(offsetof(HeroesCamera_Blueprint_C_InpActEvt_RightMouseButton_K2Node_InputKeyEvent_1, Key) == 0x000000, "Member 'HeroesCamera_Blueprint_C_InpActEvt_RightMouseButton_K2Node_InputKeyEvent_1::Key' has a wrong offset!");

struct HeroesCamera_Blueprint_C_InpActEvt_RightMouseButton_K2Node_InputKeyEvent_0 final
{
public:
	struct FKey                                   Key;
};
static_assert(alignof(HeroesCamera_Blueprint_C_InpActEvt_RightMouseButton_K2Node_InputKeyEvent_0) == 0x000008, "Wrong alignment on HeroesCamera_Blueprint_C_InpActEvt_RightMouseButton_K2Node_InputKeyEvent_0");
static_assert(sizeof(HeroesCamera_Blueprint_C_InpActEvt_RightMouseButton_K2Node_InputKeyEvent_0) == 0x000018, "Wrong size on HeroesCamera_Blueprint_C_InpActEvt_RightMouseButton_K2Node_InputKeyEvent_0");
static_assert(offsetof(HeroesCamera_Blueprint_C_InpActEvt_RightMouseButton_K2Node_InputKeyEvent_0, Key) == 0x000000, "Member 'HeroesCamera_Blueprint_C_InpActEvt_RightMouseButton_K2Node_InputKeyEvent_0::Key' has a wrong offset!");

struct HeroesCamera_Blueprint_C_InpActEvt_LeftMouseButton_K2Node_InputKeyEvent_3 final
{
public:
	struct FKey                                   Key;
};
static_assert(alignof(HeroesCamera_Blueprint_C_InpActEvt_LeftMouseButton_K2Node_InputKeyEvent_3) == 0x000008, "Wrong alignment on HeroesCamera_Blueprint_C_InpActEvt_LeftMouseButton_K2Node_InputKeyEvent_3");
static_assert(sizeof(HeroesCamera_Blueprint_C_InpActEvt_LeftMouseButton_K2Node_InputKeyEvent_3) == 0x000018, "Wrong size on HeroesCamera_Blueprint_C_InpActEvt_LeftMouseButton_K2Node_InputKeyEvent_3");
static_assert(offsetof(HeroesCamera_Blueprint_C_InpActEvt_LeftMouseButton_K2Node_InputKeyEvent_3, Key) == 0x000000, "Member 'HeroesCamera_Blueprint_C_InpActEvt_LeftMouseButton_K2Node_InputKeyEvent_3::Key' has a wrong offset!");

struct HeroesCamera_Blueprint_C_InpActEvt_LeftMouseButton_K2Node_InputKeyEvent_2 final
{
public:
	struct FKey                                   Key;
};
static_assert(alignof(HeroesCamera_Blueprint_C_InpActEvt_LeftMouseButton_K2Node_InputKeyEvent_2) == 0x000008, "Wrong alignment on HeroesCamera_Blueprint_C_InpActEvt_LeftMouseButton_K2Node_InputKeyEvent_2");
static_assert(sizeof(HeroesCamera_Blueprint_C_InpActEvt_LeftMouseButton_K2Node_InputKeyEvent_2) == 0x000018, "Wrong size on HeroesCamera_Blueprint_C_InpActEvt_LeftMouseButton_K2Node_InputKeyEvent_2");
static_assert(offsetof(HeroesCamera_Blueprint_C_InpActEvt_LeftMouseButton_K2Node_InputKeyEvent_2, Key) == 0x000000, "Member 'HeroesCamera_Blueprint_C_InpActEvt_LeftMouseButton_K2Node_InputKeyEvent_2::Key' has a wrong offset!");

struct HeroesCamera_Blueprint_C_HandleMousePress final
{
public:
	class UFortFrontEndContext*                   CallFunc_GetContext_ReturnValue;
	class AFortPlayerPawn*                        CallFunc_GetHeroPlayerPawnByIndex_ReturnValue;
	bool                                          CallFunc_IsValid_ReturnValue;
};
static_assert(alignof(HeroesCamera_Blueprint_C_HandleMousePress) == 0x000008, "Wrong alignment on HeroesCamera_Blueprint_C_HandleMousePress");
static_assert(sizeof(HeroesCamera_Blueprint_C_HandleMousePress) == 0x000018, "Wrong size on HeroesCamera_Blueprint_C_HandleMousePress");
static_assert(offsetof(HeroesCamera_Blueprint_C_HandleMousePress, CallFunc_GetContext_ReturnValue) == 0x000000, "Member 'HeroesCamera_Blueprint_C_HandleMousePress::CallFunc_GetContext_ReturnValue' has a wrong offset!");
static_assert(offsetof(HeroesCamera_Blueprint_C_HandleMousePress, CallFunc_GetHeroPlayerPawnByIndex_ReturnValue) == 0x000008, "Member 'HeroesCamera_Blueprint_C_HandleMousePress::CallFunc_GetHeroPlayerPawnByIndex_ReturnValue' has a wrong offset!");
static_assert(offsetof(HeroesCamera_Blueprint_C_HandleMousePress, CallFunc_IsValid_ReturnValue) == 0x000010, "Member 'HeroesCamera_Blueprint_C_HandleMousePress::CallFunc_IsValid_ReturnValue' has a wrong offset!");

struct HeroesCamera_Blueprint_C_ExecuteUbergraph_HeroesCamera_Blueprint final
{
public:
	int32                                         EntryPoint;
	uint8                                         Pad_4[0x4];
	TScriptInterface<class IFortTimeOfDayManagerInterface> CallFunc_GetContextualTimeOfDayManager_ReturnValue;
	struct FKey                                   Temp_struct_Variable;
	struct FKey                                   K2Node_InputKeyEvent_Key_1;
	struct FKey                                   K2Node_InputKeyEvent_Key;
	struct FKey                                   Temp_struct_Variable_1;
	int32                                         Temp_int_Array_Index_Variable;
	uint8                                         Pad_7C[0x4];
	struct FKey                                   K2Node_InputKeyEvent_Key_2;
	class AFortPlayerController*                  K2Node_Event_PlayerController_1;
	class AFortPlayerController*                  K2Node_Event_PlayerController;
	class APlayerController*                      CallFunc_GetPlayerController_ReturnValue;
	struct FKey                                   K2Node_InputKeyEvent_Key_3;
	float                                         K2Node_Event_DeltaSeconds;
	uint8                                         Pad_CC[0x4];
	class APlayerController*                      CallFunc_GetPlayerController_ReturnValue_1;
	float                                         CallFunc_GetInputMouseDelta_DeltaX;
	float                                         CallFunc_GetInputMouseDelta_DeltaY;
	double                                        CallFunc_Multiply_DoubleDouble_ReturnValue;
	TArray<class ATVPostProcessBP_C*>             CallFunc_GetAllActorsOfClass_OutActors;
	bool                                          CallFunc_IsValid_ReturnValue;
	uint8                                         Pad_F9[0x7];
	class ATVPostProcessBP_C*                     CallFunc_Array_Get_Item;
	int32                                         CallFunc_Array_Length_ReturnValue;
	uint8                                         Pad_10C[0x4];
	struct FRotator                               CallFunc_K2_GetActorRotation_ReturnValue;
	class APlayerController*                      CallFunc_GetPlayerController_ReturnValue_2;
	float                                         CallFunc_BreakRotator_Roll;
	float                                         CallFunc_BreakRotator_Pitch;
	float                                         CallFunc_BreakRotator_Yaw;
	uint8                                         Pad_13C[0x4];
	double                                        CallFunc_Subtract_DoubleDouble_ReturnValue;
	int32                                         Temp_int_Loop_Counter_Variable;
	uint8                                         Pad_14C[0x4];
	struct FRotator                               CallFunc_MakeRotator_ReturnValue;
	bool                                          CallFunc_K2_SetActorRotation_ReturnValue;
	bool                                          CallFunc_Less_IntInt_ReturnValue;
	uint8                                         Pad_16A[0x2];
	int32                                         CallFunc_Add_IntInt_ReturnValue;
	double                                        CallFunc_Multiply_DoubleDouble_A_ImplicitCast;
	double                                        CallFunc_Subtract_DoubleDouble_A_ImplicitCast;
	float                                         CallFunc_MakeRotator_Yaw_ImplicitCast;
};
static_assert(alignof(HeroesCamera_Blueprint_C_ExecuteUbergraph_HeroesCamera_Blueprint) == 0x000008, "Wrong alignment on HeroesCamera_Blueprint_C_ExecuteUbergraph_HeroesCamera_Blueprint");
static_assert(sizeof(HeroesCamera_Blueprint_C_ExecuteUbergraph_HeroesCamera_Blueprint) == 0x000188, "Wrong size on HeroesCamera_Blueprint_C_ExecuteUbergraph_HeroesCamera_Blueprint");
static_assert(offsetof(HeroesCamera_Blueprint_C_ExecuteUbergraph_HeroesCamera_Blueprint, EntryPoint) == 0x000000, "Member 'HeroesCamera_Blueprint_C_ExecuteUbergraph_HeroesCamera_Blueprint::EntryPoint' has a wrong offset!");
static_assert(offsetof(HeroesCamera_Blueprint_C_ExecuteUbergraph_HeroesCamera_Blueprint, CallFunc_GetContextualTimeOfDayManager_ReturnValue) == 0x000008, "Member 'HeroesCamera_Blueprint_C_ExecuteUbergraph_HeroesCamera_Blueprint::CallFunc_GetContextualTimeOfDayManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(HeroesCamera_Blueprint_C_ExecuteUbergraph_HeroesCamera_Blueprint, Temp_struct_Variable) == 0x000018, "Member 'HeroesCamera_Blueprint_C_ExecuteUbergraph_HeroesCamera_Blueprint::Temp_struct_Variable' has a wrong offset!");
static_assert(offsetof(HeroesCamera_Blueprint_C_ExecuteUbergraph_HeroesCamera_Blueprint, K2Node_InputKeyEvent_Key_1) == 0x000030, "Member 'HeroesCamera_Blueprint_C_ExecuteUbergraph_HeroesCamera_Blueprint::K2Node_InputKeyEvent_Key_1' has a wrong offset!");
static_assert(offsetof(HeroesCamera_Blueprint_C_ExecuteUbergraph_HeroesCamera_Blueprint, K2Node_InputKeyEvent_Key) == 0x000048, "Member 'HeroesCamera_Blueprint_C_ExecuteUbergraph_HeroesCamera_Blueprint::K2Node_InputKeyEvent_Key' has a wrong offset!");
static_assert(offsetof(HeroesCamera_Blueprint_C_ExecuteUbergraph_HeroesCamera_Blueprint, Temp_struct_Variable_1) == 0x000060, "Member 'HeroesCamera_Blueprint_C_ExecuteUbergraph_HeroesCamera_Blueprint::Temp_struct_Variable_1' has a wrong offset!");
static_assert(offsetof(HeroesCamera_Blueprint_C_ExecuteUbergraph_HeroesCamera_Blueprint, Temp_int_Array_Index_Variable) == 0x000078, "Member 'HeroesCamera_Blueprint_C_ExecuteUbergraph_HeroesCamera_Blueprint::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(HeroesCamera_Blueprint_C_ExecuteUbergraph_HeroesCamera_Blueprint, K2Node_InputKeyEvent_Key_2) == 0x000080, "Member 'HeroesCamera_Blueprint_C_ExecuteUbergraph_HeroesCamera_Blueprint::K2Node_InputKeyEvent_Key_2' has a wrong offset!");
static_assert(offsetof(HeroesCamera_Blueprint_C_ExecuteUbergraph_HeroesCamera_Blueprint, K2Node_Event_PlayerController_1) == 0x000098, "Member 'HeroesCamera_Blueprint_C_ExecuteUbergraph_HeroesCamera_Blueprint::K2Node_Event_PlayerController_1' has a wrong offset!");
static_assert(offsetof(HeroesCamera_Blueprint_C_ExecuteUbergraph_HeroesCamera_Blueprint, K2Node_Event_PlayerController) == 0x0000A0, "Member 'HeroesCamera_Blueprint_C_ExecuteUbergraph_HeroesCamera_Blueprint::K2Node_Event_PlayerController' has a wrong offset!");
static_assert(offsetof(HeroesCamera_Blueprint_C_ExecuteUbergraph_HeroesCamera_Blueprint, CallFunc_GetPlayerController_ReturnValue) == 0x0000A8, "Member 'HeroesCamera_Blueprint_C_ExecuteUbergraph_HeroesCamera_Blueprint::CallFunc_GetPlayerController_ReturnValue' has a wrong offset!");
static_assert(offsetof(HeroesCamera_Blueprint_C_ExecuteUbergraph_HeroesCamera_Blueprint, K2Node_InputKeyEvent_Key_3) == 0x0000B0, "Member 'HeroesCamera_Blueprint_C_ExecuteUbergraph_HeroesCamera_Blueprint::K2Node_InputKeyEvent_Key_3' has a wrong offset!");
static_assert(offsetof(HeroesCamera_Blueprint_C_ExecuteUbergraph_HeroesCamera_Blueprint, K2Node_Event_DeltaSeconds) == 0x0000C8, "Member 'HeroesCamera_Blueprint_C_ExecuteUbergraph_HeroesCamera_Blueprint::K2Node_Event_DeltaSeconds' has a wrong offset!");
static_assert(offsetof(HeroesCamera_Blueprint_C_ExecuteUbergraph_HeroesCamera_Blueprint, CallFunc_GetPlayerController_ReturnValue_1) == 0x0000D0, "Member 'HeroesCamera_Blueprint_C_ExecuteUbergraph_HeroesCamera_Blueprint::CallFunc_GetPlayerController_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(HeroesCamera_Blueprint_C_ExecuteUbergraph_HeroesCamera_Blueprint, CallFunc_GetInputMouseDelta_DeltaX) == 0x0000D8, "Member 'HeroesCamera_Blueprint_C_ExecuteUbergraph_HeroesCamera_Blueprint::CallFunc_GetInputMouseDelta_DeltaX' has a wrong offset!");
static_assert(offsetof(HeroesCamera_Blueprint_C_ExecuteUbergraph_HeroesCamera_Blueprint, CallFunc_GetInputMouseDelta_DeltaY) == 0x0000DC, "Member 'HeroesCamera_Blueprint_C_ExecuteUbergraph_HeroesCamera_Blueprint::CallFunc_GetInputMouseDelta_DeltaY' has a wrong offset!");
static_assert(offsetof(HeroesCamera_Blueprint_C_ExecuteUbergraph_HeroesCamera_Blueprint, CallFunc_Multiply_DoubleDouble_ReturnValue) == 0x0000E0, "Member 'HeroesCamera_Blueprint_C_ExecuteUbergraph_HeroesCamera_Blueprint::CallFunc_Multiply_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(HeroesCamera_Blueprint_C_ExecuteUbergraph_HeroesCamera_Blueprint, CallFunc_GetAllActorsOfClass_OutActors) == 0x0000E8, "Member 'HeroesCamera_Blueprint_C_ExecuteUbergraph_HeroesCamera_Blueprint::CallFunc_GetAllActorsOfClass_OutActors' has a wrong offset!");
static_assert(offsetof(HeroesCamera_Blueprint_C_ExecuteUbergraph_HeroesCamera_Blueprint, CallFunc_IsValid_ReturnValue) == 0x0000F8, "Member 'HeroesCamera_Blueprint_C_ExecuteUbergraph_HeroesCamera_Blueprint::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(HeroesCamera_Blueprint_C_ExecuteUbergraph_HeroesCamera_Blueprint, CallFunc_Array_Get_Item) == 0x000100, "Member 'HeroesCamera_Blueprint_C_ExecuteUbergraph_HeroesCamera_Blueprint::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(HeroesCamera_Blueprint_C_ExecuteUbergraph_HeroesCamera_Blueprint, CallFunc_Array_Length_ReturnValue) == 0x000108, "Member 'HeroesCamera_Blueprint_C_ExecuteUbergraph_HeroesCamera_Blueprint::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(HeroesCamera_Blueprint_C_ExecuteUbergraph_HeroesCamera_Blueprint, CallFunc_K2_GetActorRotation_ReturnValue) == 0x000110, "Member 'HeroesCamera_Blueprint_C_ExecuteUbergraph_HeroesCamera_Blueprint::CallFunc_K2_GetActorRotation_ReturnValue' has a wrong offset!");
static_assert(offsetof(HeroesCamera_Blueprint_C_ExecuteUbergraph_HeroesCamera_Blueprint, CallFunc_GetPlayerController_ReturnValue_2) == 0x000128, "Member 'HeroesCamera_Blueprint_C_ExecuteUbergraph_HeroesCamera_Blueprint::CallFunc_GetPlayerController_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(HeroesCamera_Blueprint_C_ExecuteUbergraph_HeroesCamera_Blueprint, CallFunc_BreakRotator_Roll) == 0x000130, "Member 'HeroesCamera_Blueprint_C_ExecuteUbergraph_HeroesCamera_Blueprint::CallFunc_BreakRotator_Roll' has a wrong offset!");
static_assert(offsetof(HeroesCamera_Blueprint_C_ExecuteUbergraph_HeroesCamera_Blueprint, CallFunc_BreakRotator_Pitch) == 0x000134, "Member 'HeroesCamera_Blueprint_C_ExecuteUbergraph_HeroesCamera_Blueprint::CallFunc_BreakRotator_Pitch' has a wrong offset!");
static_assert(offsetof(HeroesCamera_Blueprint_C_ExecuteUbergraph_HeroesCamera_Blueprint, CallFunc_BreakRotator_Yaw) == 0x000138, "Member 'HeroesCamera_Blueprint_C_ExecuteUbergraph_HeroesCamera_Blueprint::CallFunc_BreakRotator_Yaw' has a wrong offset!");
static_assert(offsetof(HeroesCamera_Blueprint_C_ExecuteUbergraph_HeroesCamera_Blueprint, CallFunc_Subtract_DoubleDouble_ReturnValue) == 0x000140, "Member 'HeroesCamera_Blueprint_C_ExecuteUbergraph_HeroesCamera_Blueprint::CallFunc_Subtract_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(HeroesCamera_Blueprint_C_ExecuteUbergraph_HeroesCamera_Blueprint, Temp_int_Loop_Counter_Variable) == 0x000148, "Member 'HeroesCamera_Blueprint_C_ExecuteUbergraph_HeroesCamera_Blueprint::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(HeroesCamera_Blueprint_C_ExecuteUbergraph_HeroesCamera_Blueprint, CallFunc_MakeRotator_ReturnValue) == 0x000150, "Member 'HeroesCamera_Blueprint_C_ExecuteUbergraph_HeroesCamera_Blueprint::CallFunc_MakeRotator_ReturnValue' has a wrong offset!");
static_assert(offsetof(HeroesCamera_Blueprint_C_ExecuteUbergraph_HeroesCamera_Blueprint, CallFunc_K2_SetActorRotation_ReturnValue) == 0x000168, "Member 'HeroesCamera_Blueprint_C_ExecuteUbergraph_HeroesCamera_Blueprint::CallFunc_K2_SetActorRotation_ReturnValue' has a wrong offset!");
static_assert(offsetof(HeroesCamera_Blueprint_C_ExecuteUbergraph_HeroesCamera_Blueprint, CallFunc_Less_IntInt_ReturnValue) == 0x000169, "Member 'HeroesCamera_Blueprint_C_ExecuteUbergraph_HeroesCamera_Blueprint::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(HeroesCamera_Blueprint_C_ExecuteUbergraph_HeroesCamera_Blueprint, CallFunc_Add_IntInt_ReturnValue) == 0x00016C, "Member 'HeroesCamera_Blueprint_C_ExecuteUbergraph_HeroesCamera_Blueprint::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(HeroesCamera_Blueprint_C_ExecuteUbergraph_HeroesCamera_Blueprint, CallFunc_Multiply_DoubleDouble_A_ImplicitCast) == 0x000170, "Member 'HeroesCamera_Blueprint_C_ExecuteUbergraph_HeroesCamera_Blueprint::CallFunc_Multiply_DoubleDouble_A_ImplicitCast' has a wrong offset!");
static_assert(offsetof(HeroesCamera_Blueprint_C_ExecuteUbergraph_HeroesCamera_Blueprint, CallFunc_Subtract_DoubleDouble_A_ImplicitCast) == 0x000178, "Member 'HeroesCamera_Blueprint_C_ExecuteUbergraph_HeroesCamera_Blueprint::CallFunc_Subtract_DoubleDouble_A_ImplicitCast' has a wrong offset!");
static_assert(offsetof(HeroesCamera_Blueprint_C_ExecuteUbergraph_HeroesCamera_Blueprint, CallFunc_MakeRotator_Yaw_ImplicitCast) == 0x000180, "Member 'HeroesCamera_Blueprint_C_ExecuteUbergraph_HeroesCamera_Blueprint::CallFunc_MakeRotator_Yaw_ImplicitCast' has a wrong offset!");

struct HeroesCamera_Blueprint_C_BP_OnDeactivated final
{
public:
	class AFortPlayerController*                  PlayerController;
};
static_assert(alignof(HeroesCamera_Blueprint_C_BP_OnDeactivated) == 0x000008, "Wrong alignment on HeroesCamera_Blueprint_C_BP_OnDeactivated");
static_assert(sizeof(HeroesCamera_Blueprint_C_BP_OnDeactivated) == 0x000008, "Wrong size on HeroesCamera_Blueprint_C_BP_OnDeactivated");
static_assert(offsetof(HeroesCamera_Blueprint_C_BP_OnDeactivated, PlayerController) == 0x000000, "Member 'HeroesCamera_Blueprint_C_BP_OnDeactivated::PlayerController' has a wrong offset!");

struct HeroesCamera_Blueprint_C_BP_OnActivated final
{
public:
	class AFortPlayerController*                  PlayerController;
};
static_assert(alignof(HeroesCamera_Blueprint_C_BP_OnActivated) == 0x000008, "Wrong alignment on HeroesCamera_Blueprint_C_BP_OnActivated");
static_assert(sizeof(HeroesCamera_Blueprint_C_BP_OnActivated) == 0x000008, "Wrong size on HeroesCamera_Blueprint_C_BP_OnActivated");
static_assert(offsetof(HeroesCamera_Blueprint_C_BP_OnActivated, PlayerController) == 0x000000, "Member 'HeroesCamera_Blueprint_C_BP_OnActivated::PlayerController' has a wrong offset!");

}
