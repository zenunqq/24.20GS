#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "InputCore_structs.hpp"
#include "CoreUObject_structs.hpp"

namespace SDK::Params
{

struct FortnitePartyHeroSelect_Camera_C_ReceiveTick final
{
public:
	float                                         DeltaSeconds;
};
static_assert(alignof(FortnitePartyHeroSelect_Camera_C_ReceiveTick) == 0x000004, "Wrong alignment on FortnitePartyHeroSelect_Camera_C_ReceiveTick");
static_assert(sizeof(FortnitePartyHeroSelect_Camera_C_ReceiveTick) == 0x000004, "Wrong size on FortnitePartyHeroSelect_Camera_C_ReceiveTick");
static_assert(offsetof(FortnitePartyHeroSelect_Camera_C_ReceiveTick, DeltaSeconds) == 0x000000, "Member 'FortnitePartyHeroSelect_Camera_C_ReceiveTick::DeltaSeconds' has a wrong offset!");

struct FortnitePartyHeroSelect_Camera_C_BP_OnActivated final
{
public:
	class AFortPlayerController*                  PlayerController;
};
static_assert(alignof(FortnitePartyHeroSelect_Camera_C_BP_OnActivated) == 0x000008, "Wrong alignment on FortnitePartyHeroSelect_Camera_C_BP_OnActivated");
static_assert(sizeof(FortnitePartyHeroSelect_Camera_C_BP_OnActivated) == 0x000008, "Wrong size on FortnitePartyHeroSelect_Camera_C_BP_OnActivated");
static_assert(offsetof(FortnitePartyHeroSelect_Camera_C_BP_OnActivated, PlayerController) == 0x000000, "Member 'FortnitePartyHeroSelect_Camera_C_BP_OnActivated::PlayerController' has a wrong offset!");

struct FortnitePartyHeroSelect_Camera_C_InpActEvt_RightMouseButton_K2Node_InputKeyEvent_1 final
{
public:
	struct FKey                                   Key;
};
static_assert(alignof(FortnitePartyHeroSelect_Camera_C_InpActEvt_RightMouseButton_K2Node_InputKeyEvent_1) == 0x000008, "Wrong alignment on FortnitePartyHeroSelect_Camera_C_InpActEvt_RightMouseButton_K2Node_InputKeyEvent_1");
static_assert(sizeof(FortnitePartyHeroSelect_Camera_C_InpActEvt_RightMouseButton_K2Node_InputKeyEvent_1) == 0x000018, "Wrong size on FortnitePartyHeroSelect_Camera_C_InpActEvt_RightMouseButton_K2Node_InputKeyEvent_1");
static_assert(offsetof(FortnitePartyHeroSelect_Camera_C_InpActEvt_RightMouseButton_K2Node_InputKeyEvent_1, Key) == 0x000000, "Member 'FortnitePartyHeroSelect_Camera_C_InpActEvt_RightMouseButton_K2Node_InputKeyEvent_1::Key' has a wrong offset!");

struct FortnitePartyHeroSelect_Camera_C_InpActEvt_RightMouseButton_K2Node_InputKeyEvent_0 final
{
public:
	struct FKey                                   Key;
};
static_assert(alignof(FortnitePartyHeroSelect_Camera_C_InpActEvt_RightMouseButton_K2Node_InputKeyEvent_0) == 0x000008, "Wrong alignment on FortnitePartyHeroSelect_Camera_C_InpActEvt_RightMouseButton_K2Node_InputKeyEvent_0");
static_assert(sizeof(FortnitePartyHeroSelect_Camera_C_InpActEvt_RightMouseButton_K2Node_InputKeyEvent_0) == 0x000018, "Wrong size on FortnitePartyHeroSelect_Camera_C_InpActEvt_RightMouseButton_K2Node_InputKeyEvent_0");
static_assert(offsetof(FortnitePartyHeroSelect_Camera_C_InpActEvt_RightMouseButton_K2Node_InputKeyEvent_0, Key) == 0x000000, "Member 'FortnitePartyHeroSelect_Camera_C_InpActEvt_RightMouseButton_K2Node_InputKeyEvent_0::Key' has a wrong offset!");

struct FortnitePartyHeroSelect_Camera_C_InpActEvt_LeftMouseButton_K2Node_InputKeyEvent_3 final
{
public:
	struct FKey                                   Key;
};
static_assert(alignof(FortnitePartyHeroSelect_Camera_C_InpActEvt_LeftMouseButton_K2Node_InputKeyEvent_3) == 0x000008, "Wrong alignment on FortnitePartyHeroSelect_Camera_C_InpActEvt_LeftMouseButton_K2Node_InputKeyEvent_3");
static_assert(sizeof(FortnitePartyHeroSelect_Camera_C_InpActEvt_LeftMouseButton_K2Node_InputKeyEvent_3) == 0x000018, "Wrong size on FortnitePartyHeroSelect_Camera_C_InpActEvt_LeftMouseButton_K2Node_InputKeyEvent_3");
static_assert(offsetof(FortnitePartyHeroSelect_Camera_C_InpActEvt_LeftMouseButton_K2Node_InputKeyEvent_3, Key) == 0x000000, "Member 'FortnitePartyHeroSelect_Camera_C_InpActEvt_LeftMouseButton_K2Node_InputKeyEvent_3::Key' has a wrong offset!");

struct FortnitePartyHeroSelect_Camera_C_InpActEvt_LeftMouseButton_K2Node_InputKeyEvent_2 final
{
public:
	struct FKey                                   Key;
};
static_assert(alignof(FortnitePartyHeroSelect_Camera_C_InpActEvt_LeftMouseButton_K2Node_InputKeyEvent_2) == 0x000008, "Wrong alignment on FortnitePartyHeroSelect_Camera_C_InpActEvt_LeftMouseButton_K2Node_InputKeyEvent_2");
static_assert(sizeof(FortnitePartyHeroSelect_Camera_C_InpActEvt_LeftMouseButton_K2Node_InputKeyEvent_2) == 0x000018, "Wrong size on FortnitePartyHeroSelect_Camera_C_InpActEvt_LeftMouseButton_K2Node_InputKeyEvent_2");
static_assert(offsetof(FortnitePartyHeroSelect_Camera_C_InpActEvt_LeftMouseButton_K2Node_InputKeyEvent_2, Key) == 0x000000, "Member 'FortnitePartyHeroSelect_Camera_C_InpActEvt_LeftMouseButton_K2Node_InputKeyEvent_2::Key' has a wrong offset!");

struct FortnitePartyHeroSelect_Camera_C_HandleMousePress final
{
public:
	class UFortFrontEndContext*                   CallFunc_GetContext_ReturnValue;
	class AFortPlayerPawn*                        CallFunc_GetHeroPlayerPawnByIndex_ReturnValue;
	bool                                          CallFunc_IsValid_ReturnValue;
};
static_assert(alignof(FortnitePartyHeroSelect_Camera_C_HandleMousePress) == 0x000008, "Wrong alignment on FortnitePartyHeroSelect_Camera_C_HandleMousePress");
static_assert(sizeof(FortnitePartyHeroSelect_Camera_C_HandleMousePress) == 0x000018, "Wrong size on FortnitePartyHeroSelect_Camera_C_HandleMousePress");
static_assert(offsetof(FortnitePartyHeroSelect_Camera_C_HandleMousePress, CallFunc_GetContext_ReturnValue) == 0x000000, "Member 'FortnitePartyHeroSelect_Camera_C_HandleMousePress::CallFunc_GetContext_ReturnValue' has a wrong offset!");
static_assert(offsetof(FortnitePartyHeroSelect_Camera_C_HandleMousePress, CallFunc_GetHeroPlayerPawnByIndex_ReturnValue) == 0x000008, "Member 'FortnitePartyHeroSelect_Camera_C_HandleMousePress::CallFunc_GetHeroPlayerPawnByIndex_ReturnValue' has a wrong offset!");
static_assert(offsetof(FortnitePartyHeroSelect_Camera_C_HandleMousePress, CallFunc_IsValid_ReturnValue) == 0x000010, "Member 'FortnitePartyHeroSelect_Camera_C_HandleMousePress::CallFunc_IsValid_ReturnValue' has a wrong offset!");

struct FortnitePartyHeroSelect_Camera_C_ExecuteUbergraph_FortnitePartyHeroSelect_Camera final
{
public:
	int32                                         EntryPoint;
	uint8                                         Pad_4[0x4];
	TScriptInterface<class IFortTimeOfDayManagerInterface> CallFunc_GetContextualTimeOfDayManager_ReturnValue;
	struct FKey                                   K2Node_InputKeyEvent_Key_1;
	struct FKey                                   K2Node_InputKeyEvent_Key;
	struct FKey                                   Temp_struct_Variable;
	int32                                         Temp_int_Array_Index_Variable;
	uint8                                         Pad_64[0x4];
	struct FKey                                   Temp_struct_Variable_1;
	class AFortPlayerController*                  K2Node_Event_PlayerController_1;
	class APlayerController*                      CallFunc_GetPlayerController_ReturnValue;
	class AFortPlayerController*                  K2Node_Event_PlayerController;
	struct FKey                                   K2Node_InputKeyEvent_Key_3;
	float                                         K2Node_Event_DeltaSeconds;
	uint8                                         Pad_B4[0x4];
	class APlayerController*                      CallFunc_GetPlayerController_ReturnValue_1;
	float                                         CallFunc_GetInputMouseDelta_DeltaX;
	float                                         CallFunc_GetInputMouseDelta_DeltaY;
	double                                        CallFunc_Multiply_DoubleDouble_ReturnValue;
	bool                                          CallFunc_IsValid_ReturnValue;
	uint8                                         Pad_D1[0x7];
	struct FRotator                               CallFunc_K2_GetActorRotation_ReturnValue;
	float                                         CallFunc_BreakRotator_Roll;
	float                                         CallFunc_BreakRotator_Pitch;
	float                                         CallFunc_BreakRotator_Yaw;
	uint8                                         Pad_FC[0x4];
	double                                        CallFunc_Subtract_DoubleDouble_ReturnValue;
	struct FRotator                               CallFunc_MakeRotator_ReturnValue;
	struct FKey                                   K2Node_InputKeyEvent_Key_2;
	bool                                          CallFunc_K2_SetActorRotation_ReturnValue;
	uint8                                         Pad_139[0x7];
	TArray<class ATVPostProcessBP_C*>             CallFunc_GetAllActorsOfClass_OutActors;
	class ATVPostProcessBP_C*                     CallFunc_Array_Get_Item;
	struct FHitResult                             CallFunc_K2_SetRelativeRotation_SweepHitResult;
	int32                                         CallFunc_Array_Length_ReturnValue;
	int32                                         Temp_int_Loop_Counter_Variable;
	bool                                          CallFunc_Less_IntInt_ReturnValue;
	uint8                                         Pad_241[0x3];
	int32                                         CallFunc_Add_IntInt_ReturnValue;
	class APlayerController*                      CallFunc_GetPlayerController_ReturnValue_2;
	double                                        CallFunc_Multiply_DoubleDouble_A_ImplicitCast;
	double                                        CallFunc_Subtract_DoubleDouble_A_ImplicitCast;
	float                                         CallFunc_MakeRotator_Yaw_ImplicitCast;
};
static_assert(alignof(FortnitePartyHeroSelect_Camera_C_ExecuteUbergraph_FortnitePartyHeroSelect_Camera) == 0x000008, "Wrong alignment on FortnitePartyHeroSelect_Camera_C_ExecuteUbergraph_FortnitePartyHeroSelect_Camera");
static_assert(sizeof(FortnitePartyHeroSelect_Camera_C_ExecuteUbergraph_FortnitePartyHeroSelect_Camera) == 0x000268, "Wrong size on FortnitePartyHeroSelect_Camera_C_ExecuteUbergraph_FortnitePartyHeroSelect_Camera");
static_assert(offsetof(FortnitePartyHeroSelect_Camera_C_ExecuteUbergraph_FortnitePartyHeroSelect_Camera, EntryPoint) == 0x000000, "Member 'FortnitePartyHeroSelect_Camera_C_ExecuteUbergraph_FortnitePartyHeroSelect_Camera::EntryPoint' has a wrong offset!");
static_assert(offsetof(FortnitePartyHeroSelect_Camera_C_ExecuteUbergraph_FortnitePartyHeroSelect_Camera, CallFunc_GetContextualTimeOfDayManager_ReturnValue) == 0x000008, "Member 'FortnitePartyHeroSelect_Camera_C_ExecuteUbergraph_FortnitePartyHeroSelect_Camera::CallFunc_GetContextualTimeOfDayManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(FortnitePartyHeroSelect_Camera_C_ExecuteUbergraph_FortnitePartyHeroSelect_Camera, K2Node_InputKeyEvent_Key_1) == 0x000018, "Member 'FortnitePartyHeroSelect_Camera_C_ExecuteUbergraph_FortnitePartyHeroSelect_Camera::K2Node_InputKeyEvent_Key_1' has a wrong offset!");
static_assert(offsetof(FortnitePartyHeroSelect_Camera_C_ExecuteUbergraph_FortnitePartyHeroSelect_Camera, K2Node_InputKeyEvent_Key) == 0x000030, "Member 'FortnitePartyHeroSelect_Camera_C_ExecuteUbergraph_FortnitePartyHeroSelect_Camera::K2Node_InputKeyEvent_Key' has a wrong offset!");
static_assert(offsetof(FortnitePartyHeroSelect_Camera_C_ExecuteUbergraph_FortnitePartyHeroSelect_Camera, Temp_struct_Variable) == 0x000048, "Member 'FortnitePartyHeroSelect_Camera_C_ExecuteUbergraph_FortnitePartyHeroSelect_Camera::Temp_struct_Variable' has a wrong offset!");
static_assert(offsetof(FortnitePartyHeroSelect_Camera_C_ExecuteUbergraph_FortnitePartyHeroSelect_Camera, Temp_int_Array_Index_Variable) == 0x000060, "Member 'FortnitePartyHeroSelect_Camera_C_ExecuteUbergraph_FortnitePartyHeroSelect_Camera::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(FortnitePartyHeroSelect_Camera_C_ExecuteUbergraph_FortnitePartyHeroSelect_Camera, Temp_struct_Variable_1) == 0x000068, "Member 'FortnitePartyHeroSelect_Camera_C_ExecuteUbergraph_FortnitePartyHeroSelect_Camera::Temp_struct_Variable_1' has a wrong offset!");
static_assert(offsetof(FortnitePartyHeroSelect_Camera_C_ExecuteUbergraph_FortnitePartyHeroSelect_Camera, K2Node_Event_PlayerController_1) == 0x000080, "Member 'FortnitePartyHeroSelect_Camera_C_ExecuteUbergraph_FortnitePartyHeroSelect_Camera::K2Node_Event_PlayerController_1' has a wrong offset!");
static_assert(offsetof(FortnitePartyHeroSelect_Camera_C_ExecuteUbergraph_FortnitePartyHeroSelect_Camera, CallFunc_GetPlayerController_ReturnValue) == 0x000088, "Member 'FortnitePartyHeroSelect_Camera_C_ExecuteUbergraph_FortnitePartyHeroSelect_Camera::CallFunc_GetPlayerController_ReturnValue' has a wrong offset!");
static_assert(offsetof(FortnitePartyHeroSelect_Camera_C_ExecuteUbergraph_FortnitePartyHeroSelect_Camera, K2Node_Event_PlayerController) == 0x000090, "Member 'FortnitePartyHeroSelect_Camera_C_ExecuteUbergraph_FortnitePartyHeroSelect_Camera::K2Node_Event_PlayerController' has a wrong offset!");
static_assert(offsetof(FortnitePartyHeroSelect_Camera_C_ExecuteUbergraph_FortnitePartyHeroSelect_Camera, K2Node_InputKeyEvent_Key_3) == 0x000098, "Member 'FortnitePartyHeroSelect_Camera_C_ExecuteUbergraph_FortnitePartyHeroSelect_Camera::K2Node_InputKeyEvent_Key_3' has a wrong offset!");
static_assert(offsetof(FortnitePartyHeroSelect_Camera_C_ExecuteUbergraph_FortnitePartyHeroSelect_Camera, K2Node_Event_DeltaSeconds) == 0x0000B0, "Member 'FortnitePartyHeroSelect_Camera_C_ExecuteUbergraph_FortnitePartyHeroSelect_Camera::K2Node_Event_DeltaSeconds' has a wrong offset!");
static_assert(offsetof(FortnitePartyHeroSelect_Camera_C_ExecuteUbergraph_FortnitePartyHeroSelect_Camera, CallFunc_GetPlayerController_ReturnValue_1) == 0x0000B8, "Member 'FortnitePartyHeroSelect_Camera_C_ExecuteUbergraph_FortnitePartyHeroSelect_Camera::CallFunc_GetPlayerController_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(FortnitePartyHeroSelect_Camera_C_ExecuteUbergraph_FortnitePartyHeroSelect_Camera, CallFunc_GetInputMouseDelta_DeltaX) == 0x0000C0, "Member 'FortnitePartyHeroSelect_Camera_C_ExecuteUbergraph_FortnitePartyHeroSelect_Camera::CallFunc_GetInputMouseDelta_DeltaX' has a wrong offset!");
static_assert(offsetof(FortnitePartyHeroSelect_Camera_C_ExecuteUbergraph_FortnitePartyHeroSelect_Camera, CallFunc_GetInputMouseDelta_DeltaY) == 0x0000C4, "Member 'FortnitePartyHeroSelect_Camera_C_ExecuteUbergraph_FortnitePartyHeroSelect_Camera::CallFunc_GetInputMouseDelta_DeltaY' has a wrong offset!");
static_assert(offsetof(FortnitePartyHeroSelect_Camera_C_ExecuteUbergraph_FortnitePartyHeroSelect_Camera, CallFunc_Multiply_DoubleDouble_ReturnValue) == 0x0000C8, "Member 'FortnitePartyHeroSelect_Camera_C_ExecuteUbergraph_FortnitePartyHeroSelect_Camera::CallFunc_Multiply_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(FortnitePartyHeroSelect_Camera_C_ExecuteUbergraph_FortnitePartyHeroSelect_Camera, CallFunc_IsValid_ReturnValue) == 0x0000D0, "Member 'FortnitePartyHeroSelect_Camera_C_ExecuteUbergraph_FortnitePartyHeroSelect_Camera::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(FortnitePartyHeroSelect_Camera_C_ExecuteUbergraph_FortnitePartyHeroSelect_Camera, CallFunc_K2_GetActorRotation_ReturnValue) == 0x0000D8, "Member 'FortnitePartyHeroSelect_Camera_C_ExecuteUbergraph_FortnitePartyHeroSelect_Camera::CallFunc_K2_GetActorRotation_ReturnValue' has a wrong offset!");
static_assert(offsetof(FortnitePartyHeroSelect_Camera_C_ExecuteUbergraph_FortnitePartyHeroSelect_Camera, CallFunc_BreakRotator_Roll) == 0x0000F0, "Member 'FortnitePartyHeroSelect_Camera_C_ExecuteUbergraph_FortnitePartyHeroSelect_Camera::CallFunc_BreakRotator_Roll' has a wrong offset!");
static_assert(offsetof(FortnitePartyHeroSelect_Camera_C_ExecuteUbergraph_FortnitePartyHeroSelect_Camera, CallFunc_BreakRotator_Pitch) == 0x0000F4, "Member 'FortnitePartyHeroSelect_Camera_C_ExecuteUbergraph_FortnitePartyHeroSelect_Camera::CallFunc_BreakRotator_Pitch' has a wrong offset!");
static_assert(offsetof(FortnitePartyHeroSelect_Camera_C_ExecuteUbergraph_FortnitePartyHeroSelect_Camera, CallFunc_BreakRotator_Yaw) == 0x0000F8, "Member 'FortnitePartyHeroSelect_Camera_C_ExecuteUbergraph_FortnitePartyHeroSelect_Camera::CallFunc_BreakRotator_Yaw' has a wrong offset!");
static_assert(offsetof(FortnitePartyHeroSelect_Camera_C_ExecuteUbergraph_FortnitePartyHeroSelect_Camera, CallFunc_Subtract_DoubleDouble_ReturnValue) == 0x000100, "Member 'FortnitePartyHeroSelect_Camera_C_ExecuteUbergraph_FortnitePartyHeroSelect_Camera::CallFunc_Subtract_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(FortnitePartyHeroSelect_Camera_C_ExecuteUbergraph_FortnitePartyHeroSelect_Camera, CallFunc_MakeRotator_ReturnValue) == 0x000108, "Member 'FortnitePartyHeroSelect_Camera_C_ExecuteUbergraph_FortnitePartyHeroSelect_Camera::CallFunc_MakeRotator_ReturnValue' has a wrong offset!");
static_assert(offsetof(FortnitePartyHeroSelect_Camera_C_ExecuteUbergraph_FortnitePartyHeroSelect_Camera, K2Node_InputKeyEvent_Key_2) == 0x000120, "Member 'FortnitePartyHeroSelect_Camera_C_ExecuteUbergraph_FortnitePartyHeroSelect_Camera::K2Node_InputKeyEvent_Key_2' has a wrong offset!");
static_assert(offsetof(FortnitePartyHeroSelect_Camera_C_ExecuteUbergraph_FortnitePartyHeroSelect_Camera, CallFunc_K2_SetActorRotation_ReturnValue) == 0x000138, "Member 'FortnitePartyHeroSelect_Camera_C_ExecuteUbergraph_FortnitePartyHeroSelect_Camera::CallFunc_K2_SetActorRotation_ReturnValue' has a wrong offset!");
static_assert(offsetof(FortnitePartyHeroSelect_Camera_C_ExecuteUbergraph_FortnitePartyHeroSelect_Camera, CallFunc_GetAllActorsOfClass_OutActors) == 0x000140, "Member 'FortnitePartyHeroSelect_Camera_C_ExecuteUbergraph_FortnitePartyHeroSelect_Camera::CallFunc_GetAllActorsOfClass_OutActors' has a wrong offset!");
static_assert(offsetof(FortnitePartyHeroSelect_Camera_C_ExecuteUbergraph_FortnitePartyHeroSelect_Camera, CallFunc_Array_Get_Item) == 0x000150, "Member 'FortnitePartyHeroSelect_Camera_C_ExecuteUbergraph_FortnitePartyHeroSelect_Camera::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(FortnitePartyHeroSelect_Camera_C_ExecuteUbergraph_FortnitePartyHeroSelect_Camera, CallFunc_K2_SetRelativeRotation_SweepHitResult) == 0x000158, "Member 'FortnitePartyHeroSelect_Camera_C_ExecuteUbergraph_FortnitePartyHeroSelect_Camera::CallFunc_K2_SetRelativeRotation_SweepHitResult' has a wrong offset!");
static_assert(offsetof(FortnitePartyHeroSelect_Camera_C_ExecuteUbergraph_FortnitePartyHeroSelect_Camera, CallFunc_Array_Length_ReturnValue) == 0x000238, "Member 'FortnitePartyHeroSelect_Camera_C_ExecuteUbergraph_FortnitePartyHeroSelect_Camera::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(FortnitePartyHeroSelect_Camera_C_ExecuteUbergraph_FortnitePartyHeroSelect_Camera, Temp_int_Loop_Counter_Variable) == 0x00023C, "Member 'FortnitePartyHeroSelect_Camera_C_ExecuteUbergraph_FortnitePartyHeroSelect_Camera::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(FortnitePartyHeroSelect_Camera_C_ExecuteUbergraph_FortnitePartyHeroSelect_Camera, CallFunc_Less_IntInt_ReturnValue) == 0x000240, "Member 'FortnitePartyHeroSelect_Camera_C_ExecuteUbergraph_FortnitePartyHeroSelect_Camera::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(FortnitePartyHeroSelect_Camera_C_ExecuteUbergraph_FortnitePartyHeroSelect_Camera, CallFunc_Add_IntInt_ReturnValue) == 0x000244, "Member 'FortnitePartyHeroSelect_Camera_C_ExecuteUbergraph_FortnitePartyHeroSelect_Camera::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(FortnitePartyHeroSelect_Camera_C_ExecuteUbergraph_FortnitePartyHeroSelect_Camera, CallFunc_GetPlayerController_ReturnValue_2) == 0x000248, "Member 'FortnitePartyHeroSelect_Camera_C_ExecuteUbergraph_FortnitePartyHeroSelect_Camera::CallFunc_GetPlayerController_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(FortnitePartyHeroSelect_Camera_C_ExecuteUbergraph_FortnitePartyHeroSelect_Camera, CallFunc_Multiply_DoubleDouble_A_ImplicitCast) == 0x000250, "Member 'FortnitePartyHeroSelect_Camera_C_ExecuteUbergraph_FortnitePartyHeroSelect_Camera::CallFunc_Multiply_DoubleDouble_A_ImplicitCast' has a wrong offset!");
static_assert(offsetof(FortnitePartyHeroSelect_Camera_C_ExecuteUbergraph_FortnitePartyHeroSelect_Camera, CallFunc_Subtract_DoubleDouble_A_ImplicitCast) == 0x000258, "Member 'FortnitePartyHeroSelect_Camera_C_ExecuteUbergraph_FortnitePartyHeroSelect_Camera::CallFunc_Subtract_DoubleDouble_A_ImplicitCast' has a wrong offset!");
static_assert(offsetof(FortnitePartyHeroSelect_Camera_C_ExecuteUbergraph_FortnitePartyHeroSelect_Camera, CallFunc_MakeRotator_Yaw_ImplicitCast) == 0x000260, "Member 'FortnitePartyHeroSelect_Camera_C_ExecuteUbergraph_FortnitePartyHeroSelect_Camera::CallFunc_MakeRotator_Yaw_ImplicitCast' has a wrong offset!");

struct FortnitePartyHeroSelect_Camera_C_BP_OnDeactivated final
{
public:
	class AFortPlayerController*                  PlayerController;
};
static_assert(alignof(FortnitePartyHeroSelect_Camera_C_BP_OnDeactivated) == 0x000008, "Wrong alignment on FortnitePartyHeroSelect_Camera_C_BP_OnDeactivated");
static_assert(sizeof(FortnitePartyHeroSelect_Camera_C_BP_OnDeactivated) == 0x000008, "Wrong size on FortnitePartyHeroSelect_Camera_C_BP_OnDeactivated");
static_assert(offsetof(FortnitePartyHeroSelect_Camera_C_BP_OnDeactivated, PlayerController) == 0x000000, "Member 'FortnitePartyHeroSelect_Camera_C_BP_OnDeactivated::PlayerController' has a wrong offset!");

}
