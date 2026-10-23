#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteUI_structs.hpp"
#include "S12_CineTransitionData_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "FortniteGame_structs.hpp"
#include "SlateCore_structs.hpp"
#include "UMG_structs.hpp"

namespace SDK::Params
{

struct AthenaFrontend_C_BndEvt__ButtonToggleChat_K2Node_ComponentBoundEvent_39_CommonSelectedStateChanged__DelegateSignature final
{
public:
	class UCommonButtonLegacy*                    Button;
	bool                                          Selected;
};
static_assert(alignof(AthenaFrontend_C_BndEvt__ButtonToggleChat_K2Node_ComponentBoundEvent_39_CommonSelectedStateChanged__DelegateSignature) == 0x000008, "Wrong alignment on AthenaFrontend_C_BndEvt__ButtonToggleChat_K2Node_ComponentBoundEvent_39_CommonSelectedStateChanged__DelegateSignature");
static_assert(sizeof(AthenaFrontend_C_BndEvt__ButtonToggleChat_K2Node_ComponentBoundEvent_39_CommonSelectedStateChanged__DelegateSignature) == 0x000010, "Wrong size on AthenaFrontend_C_BndEvt__ButtonToggleChat_K2Node_ComponentBoundEvent_39_CommonSelectedStateChanged__DelegateSignature");
static_assert(offsetof(AthenaFrontend_C_BndEvt__ButtonToggleChat_K2Node_ComponentBoundEvent_39_CommonSelectedStateChanged__DelegateSignature, Button) == 0x000000, "Member 'AthenaFrontend_C_BndEvt__ButtonToggleChat_K2Node_ComponentBoundEvent_39_CommonSelectedStateChanged__DelegateSignature::Button' has a wrong offset!");
static_assert(offsetof(AthenaFrontend_C_BndEvt__ButtonToggleChat_K2Node_ComponentBoundEvent_39_CommonSelectedStateChanged__DelegateSignature, Selected) == 0x000008, "Member 'AthenaFrontend_C_BndEvt__ButtonToggleChat_K2Node_ComponentBoundEvent_39_CommonSelectedStateChanged__DelegateSignature::Selected' has a wrong offset!");

struct AthenaFrontend_C_DisplayDebugFlowText final
{
public:
	class FText                                   DebugFlowText;
};
static_assert(alignof(AthenaFrontend_C_DisplayDebugFlowText) == 0x000008, "Wrong alignment on AthenaFrontend_C_DisplayDebugFlowText");
static_assert(sizeof(AthenaFrontend_C_DisplayDebugFlowText) == 0x000018, "Wrong size on AthenaFrontend_C_DisplayDebugFlowText");
static_assert(offsetof(AthenaFrontend_C_DisplayDebugFlowText, DebugFlowText) == 0x000000, "Member 'AthenaFrontend_C_DisplayDebugFlowText::DebugFlowText' has a wrong offset!");

struct AthenaFrontend_C_ExecuteUbergraph_AthenaFrontend final
{
public:
	int32                                         EntryPoint;
	EPTTState                                     Temp_byte_Variable;
	EPTTState                                     Temp_byte_Variable_1;
	EPTTState                                     Temp_byte_Variable_2;
	uint8                                         Pad_7[0x1];
	class UAthenaHUDContext*                      CallFunc_GetContext_ReturnValue;
	class UAthenaHUDContext*                      CallFunc_GetContext_ReturnValue_1;
	class UAthenaHUDContext*                      CallFunc_GetContext_ReturnValue_2;
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;
	EPTTState                                     CallFunc_GetPTTState_ReturnValue;
	uint8                                         Pad_2D[0x3];
	class UAthenaHUDContext*                      CallFunc_GetContext_ReturnValue_3;
	EPTTState                                     CallFunc_GetPTTState_ReturnValue_1;
	uint8                                         Pad_39[0x7];
	class UCommonButtonLegacy*                    K2Node_ComponentBoundEvent_Button;
	bool                                          K2Node_ComponentBoundEvent_Selected;
	EPTTState                                     Temp_byte_Variable_3;
	uint8                                         Pad_4A[0x6];
	class UAthenaHUDContext*                      CallFunc_GetContext_ReturnValue_4;
	class UClass*                                 Temp_class_Variable;
	EPTTState                                     CallFunc_GetPTTState_ReturnValue_2;
	EPTTState                                     K2Node_Select_Default;
	uint8                                         Pad_62[0x2];
	TDelegate<void(EPTTState NewPushToTalkState)> K2Node_CreateDelegate_OutputDelegate_1;
	class UClass*                                 Temp_class_Variable_1;
	EFrontendVisibilityMode                       K2Node_Event_InFrontendVisibilityMode;
	bool                                          K2Node_SwitchEnum_CmpSuccess;
	uint8                                         Pad_7A[0x6];
	class UMediaPlayer*                           K2Node_Event_MediaPlayer;
	TDelegate<void(const class FString& OpenedUrl)> K2Node_CreateDelegate_OutputDelegate_2;
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_3;
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_4;
	uint8                                         Pad_AC[0x4];
	struct FTimerHandle                           CallFunc_K2_SetTimerDelegate_ReturnValue;
	bool                                          Temp_bool_Variable;
	uint8                                         Pad_B9[0x3];
	int32                                         CallFunc_Array_Add_ReturnValue;
	ESlateVisibility                              Temp_byte_Variable_4;
	uint8                                         Pad_C1[0x7];
	class UClass*                                 K2Node_Select_Default_1;
	class UTopBar_C*                              K2Node_DynamicCast_AsTop_Bar;
	bool                                          K2Node_DynamicCast_bSuccess;
	uint8                                         Pad_D9[0x7];
	class UTopBar_C*                              K2Node_DynamicCast_AsTop_Bar_1;
	bool                                          K2Node_DynamicCast_bSuccess_1;
	ESlateVisibility                              Temp_byte_Variable_5;
	uint8                                         Pad_EA[0x6];
	class FText                                   K2Node_Event_DebugFlowText;
	bool                                          Temp_bool_Variable_1;
	ESlateVisibility                              K2Node_Select_Default_2;
	uint8                                         Pad_10A[0x6];
	class UTopBar_C*                              K2Node_DynamicCast_AsTop_Bar_2;
	bool                                          K2Node_DynamicCast_bSuccess_2;
	uint8                                         Pad_119[0x7];
	class UTopBar_C*                              K2Node_DynamicCast_AsTop_Bar_3;
	bool                                          K2Node_DynamicCast_bSuccess_3;
};
static_assert(alignof(AthenaFrontend_C_ExecuteUbergraph_AthenaFrontend) == 0x000008, "Wrong alignment on AthenaFrontend_C_ExecuteUbergraph_AthenaFrontend");
static_assert(sizeof(AthenaFrontend_C_ExecuteUbergraph_AthenaFrontend) == 0x000130, "Wrong size on AthenaFrontend_C_ExecuteUbergraph_AthenaFrontend");
static_assert(offsetof(AthenaFrontend_C_ExecuteUbergraph_AthenaFrontend, EntryPoint) == 0x000000, "Member 'AthenaFrontend_C_ExecuteUbergraph_AthenaFrontend::EntryPoint' has a wrong offset!");
static_assert(offsetof(AthenaFrontend_C_ExecuteUbergraph_AthenaFrontend, Temp_byte_Variable) == 0x000004, "Member 'AthenaFrontend_C_ExecuteUbergraph_AthenaFrontend::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(AthenaFrontend_C_ExecuteUbergraph_AthenaFrontend, Temp_byte_Variable_1) == 0x000005, "Member 'AthenaFrontend_C_ExecuteUbergraph_AthenaFrontend::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(AthenaFrontend_C_ExecuteUbergraph_AthenaFrontend, Temp_byte_Variable_2) == 0x000006, "Member 'AthenaFrontend_C_ExecuteUbergraph_AthenaFrontend::Temp_byte_Variable_2' has a wrong offset!");
static_assert(offsetof(AthenaFrontend_C_ExecuteUbergraph_AthenaFrontend, CallFunc_GetContext_ReturnValue) == 0x000008, "Member 'AthenaFrontend_C_ExecuteUbergraph_AthenaFrontend::CallFunc_GetContext_ReturnValue' has a wrong offset!");
static_assert(offsetof(AthenaFrontend_C_ExecuteUbergraph_AthenaFrontend, CallFunc_GetContext_ReturnValue_1) == 0x000010, "Member 'AthenaFrontend_C_ExecuteUbergraph_AthenaFrontend::CallFunc_GetContext_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(AthenaFrontend_C_ExecuteUbergraph_AthenaFrontend, CallFunc_GetContext_ReturnValue_2) == 0x000018, "Member 'AthenaFrontend_C_ExecuteUbergraph_AthenaFrontend::CallFunc_GetContext_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(AthenaFrontend_C_ExecuteUbergraph_AthenaFrontend, K2Node_CreateDelegate_OutputDelegate) == 0x000020, "Member 'AthenaFrontend_C_ExecuteUbergraph_AthenaFrontend::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(AthenaFrontend_C_ExecuteUbergraph_AthenaFrontend, CallFunc_GetPTTState_ReturnValue) == 0x00002C, "Member 'AthenaFrontend_C_ExecuteUbergraph_AthenaFrontend::CallFunc_GetPTTState_ReturnValue' has a wrong offset!");
static_assert(offsetof(AthenaFrontend_C_ExecuteUbergraph_AthenaFrontend, CallFunc_GetContext_ReturnValue_3) == 0x000030, "Member 'AthenaFrontend_C_ExecuteUbergraph_AthenaFrontend::CallFunc_GetContext_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(AthenaFrontend_C_ExecuteUbergraph_AthenaFrontend, CallFunc_GetPTTState_ReturnValue_1) == 0x000038, "Member 'AthenaFrontend_C_ExecuteUbergraph_AthenaFrontend::CallFunc_GetPTTState_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(AthenaFrontend_C_ExecuteUbergraph_AthenaFrontend, K2Node_ComponentBoundEvent_Button) == 0x000040, "Member 'AthenaFrontend_C_ExecuteUbergraph_AthenaFrontend::K2Node_ComponentBoundEvent_Button' has a wrong offset!");
static_assert(offsetof(AthenaFrontend_C_ExecuteUbergraph_AthenaFrontend, K2Node_ComponentBoundEvent_Selected) == 0x000048, "Member 'AthenaFrontend_C_ExecuteUbergraph_AthenaFrontend::K2Node_ComponentBoundEvent_Selected' has a wrong offset!");
static_assert(offsetof(AthenaFrontend_C_ExecuteUbergraph_AthenaFrontend, Temp_byte_Variable_3) == 0x000049, "Member 'AthenaFrontend_C_ExecuteUbergraph_AthenaFrontend::Temp_byte_Variable_3' has a wrong offset!");
static_assert(offsetof(AthenaFrontend_C_ExecuteUbergraph_AthenaFrontend, CallFunc_GetContext_ReturnValue_4) == 0x000050, "Member 'AthenaFrontend_C_ExecuteUbergraph_AthenaFrontend::CallFunc_GetContext_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(AthenaFrontend_C_ExecuteUbergraph_AthenaFrontend, Temp_class_Variable) == 0x000058, "Member 'AthenaFrontend_C_ExecuteUbergraph_AthenaFrontend::Temp_class_Variable' has a wrong offset!");
static_assert(offsetof(AthenaFrontend_C_ExecuteUbergraph_AthenaFrontend, CallFunc_GetPTTState_ReturnValue_2) == 0x000060, "Member 'AthenaFrontend_C_ExecuteUbergraph_AthenaFrontend::CallFunc_GetPTTState_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(AthenaFrontend_C_ExecuteUbergraph_AthenaFrontend, K2Node_Select_Default) == 0x000061, "Member 'AthenaFrontend_C_ExecuteUbergraph_AthenaFrontend::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(AthenaFrontend_C_ExecuteUbergraph_AthenaFrontend, K2Node_CreateDelegate_OutputDelegate_1) == 0x000064, "Member 'AthenaFrontend_C_ExecuteUbergraph_AthenaFrontend::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(AthenaFrontend_C_ExecuteUbergraph_AthenaFrontend, Temp_class_Variable_1) == 0x000070, "Member 'AthenaFrontend_C_ExecuteUbergraph_AthenaFrontend::Temp_class_Variable_1' has a wrong offset!");
static_assert(offsetof(AthenaFrontend_C_ExecuteUbergraph_AthenaFrontend, K2Node_Event_InFrontendVisibilityMode) == 0x000078, "Member 'AthenaFrontend_C_ExecuteUbergraph_AthenaFrontend::K2Node_Event_InFrontendVisibilityMode' has a wrong offset!");
static_assert(offsetof(AthenaFrontend_C_ExecuteUbergraph_AthenaFrontend, K2Node_SwitchEnum_CmpSuccess) == 0x000079, "Member 'AthenaFrontend_C_ExecuteUbergraph_AthenaFrontend::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");
static_assert(offsetof(AthenaFrontend_C_ExecuteUbergraph_AthenaFrontend, K2Node_Event_MediaPlayer) == 0x000080, "Member 'AthenaFrontend_C_ExecuteUbergraph_AthenaFrontend::K2Node_Event_MediaPlayer' has a wrong offset!");
static_assert(offsetof(AthenaFrontend_C_ExecuteUbergraph_AthenaFrontend, K2Node_CreateDelegate_OutputDelegate_2) == 0x000088, "Member 'AthenaFrontend_C_ExecuteUbergraph_AthenaFrontend::K2Node_CreateDelegate_OutputDelegate_2' has a wrong offset!");
static_assert(offsetof(AthenaFrontend_C_ExecuteUbergraph_AthenaFrontend, K2Node_CreateDelegate_OutputDelegate_3) == 0x000094, "Member 'AthenaFrontend_C_ExecuteUbergraph_AthenaFrontend::K2Node_CreateDelegate_OutputDelegate_3' has a wrong offset!");
static_assert(offsetof(AthenaFrontend_C_ExecuteUbergraph_AthenaFrontend, K2Node_CreateDelegate_OutputDelegate_4) == 0x0000A0, "Member 'AthenaFrontend_C_ExecuteUbergraph_AthenaFrontend::K2Node_CreateDelegate_OutputDelegate_4' has a wrong offset!");
static_assert(offsetof(AthenaFrontend_C_ExecuteUbergraph_AthenaFrontend, CallFunc_K2_SetTimerDelegate_ReturnValue) == 0x0000B0, "Member 'AthenaFrontend_C_ExecuteUbergraph_AthenaFrontend::CallFunc_K2_SetTimerDelegate_ReturnValue' has a wrong offset!");
static_assert(offsetof(AthenaFrontend_C_ExecuteUbergraph_AthenaFrontend, Temp_bool_Variable) == 0x0000B8, "Member 'AthenaFrontend_C_ExecuteUbergraph_AthenaFrontend::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(AthenaFrontend_C_ExecuteUbergraph_AthenaFrontend, CallFunc_Array_Add_ReturnValue) == 0x0000BC, "Member 'AthenaFrontend_C_ExecuteUbergraph_AthenaFrontend::CallFunc_Array_Add_ReturnValue' has a wrong offset!");
static_assert(offsetof(AthenaFrontend_C_ExecuteUbergraph_AthenaFrontend, Temp_byte_Variable_4) == 0x0000C0, "Member 'AthenaFrontend_C_ExecuteUbergraph_AthenaFrontend::Temp_byte_Variable_4' has a wrong offset!");
static_assert(offsetof(AthenaFrontend_C_ExecuteUbergraph_AthenaFrontend, K2Node_Select_Default_1) == 0x0000C8, "Member 'AthenaFrontend_C_ExecuteUbergraph_AthenaFrontend::K2Node_Select_Default_1' has a wrong offset!");
static_assert(offsetof(AthenaFrontend_C_ExecuteUbergraph_AthenaFrontend, K2Node_DynamicCast_AsTop_Bar) == 0x0000D0, "Member 'AthenaFrontend_C_ExecuteUbergraph_AthenaFrontend::K2Node_DynamicCast_AsTop_Bar' has a wrong offset!");
static_assert(offsetof(AthenaFrontend_C_ExecuteUbergraph_AthenaFrontend, K2Node_DynamicCast_bSuccess) == 0x0000D8, "Member 'AthenaFrontend_C_ExecuteUbergraph_AthenaFrontend::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(AthenaFrontend_C_ExecuteUbergraph_AthenaFrontend, K2Node_DynamicCast_AsTop_Bar_1) == 0x0000E0, "Member 'AthenaFrontend_C_ExecuteUbergraph_AthenaFrontend::K2Node_DynamicCast_AsTop_Bar_1' has a wrong offset!");
static_assert(offsetof(AthenaFrontend_C_ExecuteUbergraph_AthenaFrontend, K2Node_DynamicCast_bSuccess_1) == 0x0000E8, "Member 'AthenaFrontend_C_ExecuteUbergraph_AthenaFrontend::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(AthenaFrontend_C_ExecuteUbergraph_AthenaFrontend, Temp_byte_Variable_5) == 0x0000E9, "Member 'AthenaFrontend_C_ExecuteUbergraph_AthenaFrontend::Temp_byte_Variable_5' has a wrong offset!");
static_assert(offsetof(AthenaFrontend_C_ExecuteUbergraph_AthenaFrontend, K2Node_Event_DebugFlowText) == 0x0000F0, "Member 'AthenaFrontend_C_ExecuteUbergraph_AthenaFrontend::K2Node_Event_DebugFlowText' has a wrong offset!");
static_assert(offsetof(AthenaFrontend_C_ExecuteUbergraph_AthenaFrontend, Temp_bool_Variable_1) == 0x000108, "Member 'AthenaFrontend_C_ExecuteUbergraph_AthenaFrontend::Temp_bool_Variable_1' has a wrong offset!");
static_assert(offsetof(AthenaFrontend_C_ExecuteUbergraph_AthenaFrontend, K2Node_Select_Default_2) == 0x000109, "Member 'AthenaFrontend_C_ExecuteUbergraph_AthenaFrontend::K2Node_Select_Default_2' has a wrong offset!");
static_assert(offsetof(AthenaFrontend_C_ExecuteUbergraph_AthenaFrontend, K2Node_DynamicCast_AsTop_Bar_2) == 0x000110, "Member 'AthenaFrontend_C_ExecuteUbergraph_AthenaFrontend::K2Node_DynamicCast_AsTop_Bar_2' has a wrong offset!");
static_assert(offsetof(AthenaFrontend_C_ExecuteUbergraph_AthenaFrontend, K2Node_DynamicCast_bSuccess_2) == 0x000118, "Member 'AthenaFrontend_C_ExecuteUbergraph_AthenaFrontend::K2Node_DynamicCast_bSuccess_2' has a wrong offset!");
static_assert(offsetof(AthenaFrontend_C_ExecuteUbergraph_AthenaFrontend, K2Node_DynamicCast_AsTop_Bar_3) == 0x000120, "Member 'AthenaFrontend_C_ExecuteUbergraph_AthenaFrontend::K2Node_DynamicCast_AsTop_Bar_3' has a wrong offset!");
static_assert(offsetof(AthenaFrontend_C_ExecuteUbergraph_AthenaFrontend, K2Node_DynamicCast_bSuccess_3) == 0x000128, "Member 'AthenaFrontend_C_ExecuteUbergraph_AthenaFrontend::K2Node_DynamicCast_bSuccess_3' has a wrong offset!");

struct AthenaFrontend_C_InitChatVisibilityButton final
{
public:
	bool                                          CallFunc_IsMobileGame_ReturnValue;
	ESubGame                                      CallFunc_GetSubGame_ReturnValue;
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;
	bool                                          CallFunc_BooleanAND_ReturnValue;
};
static_assert(alignof(AthenaFrontend_C_InitChatVisibilityButton) == 0x000001, "Wrong alignment on AthenaFrontend_C_InitChatVisibilityButton");
static_assert(sizeof(AthenaFrontend_C_InitChatVisibilityButton) == 0x000004, "Wrong size on AthenaFrontend_C_InitChatVisibilityButton");
static_assert(offsetof(AthenaFrontend_C_InitChatVisibilityButton, CallFunc_IsMobileGame_ReturnValue) == 0x000000, "Member 'AthenaFrontend_C_InitChatVisibilityButton::CallFunc_IsMobileGame_ReturnValue' has a wrong offset!");
static_assert(offsetof(AthenaFrontend_C_InitChatVisibilityButton, CallFunc_GetSubGame_ReturnValue) == 0x000001, "Member 'AthenaFrontend_C_InitChatVisibilityButton::CallFunc_GetSubGame_ReturnValue' has a wrong offset!");
static_assert(offsetof(AthenaFrontend_C_InitChatVisibilityButton, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x000002, "Member 'AthenaFrontend_C_InitChatVisibilityButton::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(AthenaFrontend_C_InitChatVisibilityButton, CallFunc_BooleanAND_ReturnValue) == 0x000003, "Member 'AthenaFrontend_C_InitChatVisibilityButton::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");

struct AthenaFrontend_C_OnSetFrontendVisibilityMode final
{
public:
	EFrontendVisibilityMode                       InFrontendVisibilityMode;
};
static_assert(alignof(AthenaFrontend_C_OnSetFrontendVisibilityMode) == 0x000001, "Wrong alignment on AthenaFrontend_C_OnSetFrontendVisibilityMode");
static_assert(sizeof(AthenaFrontend_C_OnSetFrontendVisibilityMode) == 0x000001, "Wrong size on AthenaFrontend_C_OnSetFrontendVisibilityMode");
static_assert(offsetof(AthenaFrontend_C_OnSetFrontendVisibilityMode, InFrontendVisibilityMode) == 0x000000, "Member 'AthenaFrontend_C_OnSetFrontendVisibilityMode::InFrontendVisibilityMode' has a wrong offset!");

struct AthenaFrontend_C_OnTrailerMediaEnded final
{
public:
	int32                                         Temp_int_Array_Index_Variable;
	int32                                         Temp_int_Loop_Counter_Variable;
	int32                                         CallFunc_Add_IntInt_ReturnValue;
	uint8                                         Pad_C[0x4];
	struct FTimerHandle                           CallFunc_Array_Get_Item;
	int32                                         CallFunc_Array_Length_ReturnValue;
	bool                                          CallFunc_Less_IntInt_ReturnValue;
};
static_assert(alignof(AthenaFrontend_C_OnTrailerMediaEnded) == 0x000008, "Wrong alignment on AthenaFrontend_C_OnTrailerMediaEnded");
static_assert(sizeof(AthenaFrontend_C_OnTrailerMediaEnded) == 0x000020, "Wrong size on AthenaFrontend_C_OnTrailerMediaEnded");
static_assert(offsetof(AthenaFrontend_C_OnTrailerMediaEnded, Temp_int_Array_Index_Variable) == 0x000000, "Member 'AthenaFrontend_C_OnTrailerMediaEnded::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(AthenaFrontend_C_OnTrailerMediaEnded, Temp_int_Loop_Counter_Variable) == 0x000004, "Member 'AthenaFrontend_C_OnTrailerMediaEnded::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(AthenaFrontend_C_OnTrailerMediaEnded, CallFunc_Add_IntInt_ReturnValue) == 0x000008, "Member 'AthenaFrontend_C_OnTrailerMediaEnded::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(AthenaFrontend_C_OnTrailerMediaEnded, CallFunc_Array_Get_Item) == 0x000010, "Member 'AthenaFrontend_C_OnTrailerMediaEnded::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(AthenaFrontend_C_OnTrailerMediaEnded, CallFunc_Array_Length_ReturnValue) == 0x000018, "Member 'AthenaFrontend_C_OnTrailerMediaEnded::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(AthenaFrontend_C_OnTrailerMediaEnded, CallFunc_Less_IntInt_ReturnValue) == 0x00001C, "Member 'AthenaFrontend_C_OnTrailerMediaEnded::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");

struct AthenaFrontend_C_OnTrailerMediaOpened final
{
public:
	class FString                                 OpenedUrl;
	class UFortRuntimeOptions*                    CallFunc_GetRuntimeOptions_ReturnValue;
	struct FTimespan                              CallFunc_GetDuration_ReturnValue;
	float                                         CallFunc_GetTotalSeconds_ReturnValue;
	uint8                                         Pad_24[0x4];
	class UFortRuntimeOptions*                    CallFunc_GetRuntimeOptions_ReturnValue_1;
	double                                        CallFunc_Subtract_DoubleDouble_ReturnValue;
	double                                        CallFunc_Subtract_DoubleDouble_ReturnValue_1;
	struct FS12_CineTransitionData                K2Node_MakeStruct_S12_CineTransitionData;
	struct FS12_CineTransitionData                K2Node_MakeStruct_S12_CineTransitionData_1;
	int32                                         CallFunc_Array_Add_ReturnValue;
	int32                                         CallFunc_Array_Add_ReturnValue_1;
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;
	uint8                                         Pad_74[0x4];
	struct FTimerHandle                           CallFunc_K2_SetTimerDelegate_ReturnValue;
	int32                                         CallFunc_Array_Add_ReturnValue_2;
	uint8                                         Pad_84[0x4];
	double                                        CallFunc_Subtract_DoubleDouble_B_ImplicitCast;
	double                                        CallFunc_Subtract_DoubleDouble_A_ImplicitCast;
	float                                         K2Node_MakeStruct_Offset_8_666511AB4581BEDE8FBD39BD6B910118_ImplicitCast;
	uint8                                         Pad_9C[0x4];
	double                                        CallFunc_Subtract_DoubleDouble_A_ImplicitCast_1;
	double                                        CallFunc_Subtract_DoubleDouble_B_ImplicitCast_1;
	float                                         K2Node_MakeStruct_Offset_8_666511AB4581BEDE8FBD39BD6B910118_ImplicitCast_1;
};
static_assert(alignof(AthenaFrontend_C_OnTrailerMediaOpened) == 0x000008, "Wrong alignment on AthenaFrontend_C_OnTrailerMediaOpened");
static_assert(sizeof(AthenaFrontend_C_OnTrailerMediaOpened) == 0x0000B8, "Wrong size on AthenaFrontend_C_OnTrailerMediaOpened");
static_assert(offsetof(AthenaFrontend_C_OnTrailerMediaOpened, OpenedUrl) == 0x000000, "Member 'AthenaFrontend_C_OnTrailerMediaOpened::OpenedUrl' has a wrong offset!");
static_assert(offsetof(AthenaFrontend_C_OnTrailerMediaOpened, CallFunc_GetRuntimeOptions_ReturnValue) == 0x000010, "Member 'AthenaFrontend_C_OnTrailerMediaOpened::CallFunc_GetRuntimeOptions_ReturnValue' has a wrong offset!");
static_assert(offsetof(AthenaFrontend_C_OnTrailerMediaOpened, CallFunc_GetDuration_ReturnValue) == 0x000018, "Member 'AthenaFrontend_C_OnTrailerMediaOpened::CallFunc_GetDuration_ReturnValue' has a wrong offset!");
static_assert(offsetof(AthenaFrontend_C_OnTrailerMediaOpened, CallFunc_GetTotalSeconds_ReturnValue) == 0x000020, "Member 'AthenaFrontend_C_OnTrailerMediaOpened::CallFunc_GetTotalSeconds_ReturnValue' has a wrong offset!");
static_assert(offsetof(AthenaFrontend_C_OnTrailerMediaOpened, CallFunc_GetRuntimeOptions_ReturnValue_1) == 0x000028, "Member 'AthenaFrontend_C_OnTrailerMediaOpened::CallFunc_GetRuntimeOptions_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(AthenaFrontend_C_OnTrailerMediaOpened, CallFunc_Subtract_DoubleDouble_ReturnValue) == 0x000030, "Member 'AthenaFrontend_C_OnTrailerMediaOpened::CallFunc_Subtract_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(AthenaFrontend_C_OnTrailerMediaOpened, CallFunc_Subtract_DoubleDouble_ReturnValue_1) == 0x000038, "Member 'AthenaFrontend_C_OnTrailerMediaOpened::CallFunc_Subtract_DoubleDouble_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(AthenaFrontend_C_OnTrailerMediaOpened, K2Node_MakeStruct_S12_CineTransitionData) == 0x000040, "Member 'AthenaFrontend_C_OnTrailerMediaOpened::K2Node_MakeStruct_S12_CineTransitionData' has a wrong offset!");
static_assert(offsetof(AthenaFrontend_C_OnTrailerMediaOpened, K2Node_MakeStruct_S12_CineTransitionData_1) == 0x000050, "Member 'AthenaFrontend_C_OnTrailerMediaOpened::K2Node_MakeStruct_S12_CineTransitionData_1' has a wrong offset!");
static_assert(offsetof(AthenaFrontend_C_OnTrailerMediaOpened, CallFunc_Array_Add_ReturnValue) == 0x000060, "Member 'AthenaFrontend_C_OnTrailerMediaOpened::CallFunc_Array_Add_ReturnValue' has a wrong offset!");
static_assert(offsetof(AthenaFrontend_C_OnTrailerMediaOpened, CallFunc_Array_Add_ReturnValue_1) == 0x000064, "Member 'AthenaFrontend_C_OnTrailerMediaOpened::CallFunc_Array_Add_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(AthenaFrontend_C_OnTrailerMediaOpened, K2Node_CreateDelegate_OutputDelegate) == 0x000068, "Member 'AthenaFrontend_C_OnTrailerMediaOpened::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(AthenaFrontend_C_OnTrailerMediaOpened, CallFunc_K2_SetTimerDelegate_ReturnValue) == 0x000078, "Member 'AthenaFrontend_C_OnTrailerMediaOpened::CallFunc_K2_SetTimerDelegate_ReturnValue' has a wrong offset!");
static_assert(offsetof(AthenaFrontend_C_OnTrailerMediaOpened, CallFunc_Array_Add_ReturnValue_2) == 0x000080, "Member 'AthenaFrontend_C_OnTrailerMediaOpened::CallFunc_Array_Add_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(AthenaFrontend_C_OnTrailerMediaOpened, CallFunc_Subtract_DoubleDouble_B_ImplicitCast) == 0x000088, "Member 'AthenaFrontend_C_OnTrailerMediaOpened::CallFunc_Subtract_DoubleDouble_B_ImplicitCast' has a wrong offset!");
static_assert(offsetof(AthenaFrontend_C_OnTrailerMediaOpened, CallFunc_Subtract_DoubleDouble_A_ImplicitCast) == 0x000090, "Member 'AthenaFrontend_C_OnTrailerMediaOpened::CallFunc_Subtract_DoubleDouble_A_ImplicitCast' has a wrong offset!");
static_assert(offsetof(AthenaFrontend_C_OnTrailerMediaOpened, K2Node_MakeStruct_Offset_8_666511AB4581BEDE8FBD39BD6B910118_ImplicitCast) == 0x000098, "Member 'AthenaFrontend_C_OnTrailerMediaOpened::K2Node_MakeStruct_Offset_8_666511AB4581BEDE8FBD39BD6B910118_ImplicitCast' has a wrong offset!");
static_assert(offsetof(AthenaFrontend_C_OnTrailerMediaOpened, CallFunc_Subtract_DoubleDouble_A_ImplicitCast_1) == 0x0000A0, "Member 'AthenaFrontend_C_OnTrailerMediaOpened::CallFunc_Subtract_DoubleDouble_A_ImplicitCast_1' has a wrong offset!");
static_assert(offsetof(AthenaFrontend_C_OnTrailerMediaOpened, CallFunc_Subtract_DoubleDouble_B_ImplicitCast_1) == 0x0000A8, "Member 'AthenaFrontend_C_OnTrailerMediaOpened::CallFunc_Subtract_DoubleDouble_B_ImplicitCast_1' has a wrong offset!");
static_assert(offsetof(AthenaFrontend_C_OnTrailerMediaOpened, K2Node_MakeStruct_Offset_8_666511AB4581BEDE8FBD39BD6B910118_ImplicitCast_1) == 0x0000B0, "Member 'AthenaFrontend_C_OnTrailerMediaOpened::K2Node_MakeStruct_Offset_8_666511AB4581BEDE8FBD39BD6B910118_ImplicitCast_1' has a wrong offset!");

struct AthenaFrontend_C_OnTrailerTransitionAudioCheck final
{
public:
	bool                                          CallFunc_IsValid_ReturnValue;
	uint8                                         Pad_1[0x7];
	struct FTimespan                              CallFunc_GetTime_ReturnValue;
	float                                         CallFunc_GetTotalSeconds_ReturnValue;
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;
	int32                                         CallFunc_Array_Length_ReturnValue;
	uint8                                         Pad_24[0x4];
	struct FTimerHandle                           CallFunc_K2_SetTimerDelegate_ReturnValue;
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue;
	uint8                                         Pad_31[0x3];
	int32                                         CallFunc_Array_Add_ReturnValue;
	int32                                         CallFunc_Add_IntInt_ReturnValue;
	bool                                          CallFunc_GreaterEqual_DoubleDouble_ReturnValue;
	uint8                                         Pad_3D[0x3];
	double                                        CallFunc_GreaterEqual_DoubleDouble_A_ImplicitCast;
	double                                        CallFunc_GreaterEqual_DoubleDouble_B_ImplicitCast;
};
static_assert(alignof(AthenaFrontend_C_OnTrailerTransitionAudioCheck) == 0x000008, "Wrong alignment on AthenaFrontend_C_OnTrailerTransitionAudioCheck");
static_assert(sizeof(AthenaFrontend_C_OnTrailerTransitionAudioCheck) == 0x000050, "Wrong size on AthenaFrontend_C_OnTrailerTransitionAudioCheck");
static_assert(offsetof(AthenaFrontend_C_OnTrailerTransitionAudioCheck, CallFunc_IsValid_ReturnValue) == 0x000000, "Member 'AthenaFrontend_C_OnTrailerTransitionAudioCheck::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(AthenaFrontend_C_OnTrailerTransitionAudioCheck, CallFunc_GetTime_ReturnValue) == 0x000008, "Member 'AthenaFrontend_C_OnTrailerTransitionAudioCheck::CallFunc_GetTime_ReturnValue' has a wrong offset!");
static_assert(offsetof(AthenaFrontend_C_OnTrailerTransitionAudioCheck, CallFunc_GetTotalSeconds_ReturnValue) == 0x000010, "Member 'AthenaFrontend_C_OnTrailerTransitionAudioCheck::CallFunc_GetTotalSeconds_ReturnValue' has a wrong offset!");
static_assert(offsetof(AthenaFrontend_C_OnTrailerTransitionAudioCheck, K2Node_CreateDelegate_OutputDelegate) == 0x000014, "Member 'AthenaFrontend_C_OnTrailerTransitionAudioCheck::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(AthenaFrontend_C_OnTrailerTransitionAudioCheck, CallFunc_Array_Length_ReturnValue) == 0x000020, "Member 'AthenaFrontend_C_OnTrailerTransitionAudioCheck::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(AthenaFrontend_C_OnTrailerTransitionAudioCheck, CallFunc_K2_SetTimerDelegate_ReturnValue) == 0x000028, "Member 'AthenaFrontend_C_OnTrailerTransitionAudioCheck::CallFunc_K2_SetTimerDelegate_ReturnValue' has a wrong offset!");
static_assert(offsetof(AthenaFrontend_C_OnTrailerTransitionAudioCheck, CallFunc_EqualEqual_IntInt_ReturnValue) == 0x000030, "Member 'AthenaFrontend_C_OnTrailerTransitionAudioCheck::CallFunc_EqualEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(AthenaFrontend_C_OnTrailerTransitionAudioCheck, CallFunc_Array_Add_ReturnValue) == 0x000034, "Member 'AthenaFrontend_C_OnTrailerTransitionAudioCheck::CallFunc_Array_Add_ReturnValue' has a wrong offset!");
static_assert(offsetof(AthenaFrontend_C_OnTrailerTransitionAudioCheck, CallFunc_Add_IntInt_ReturnValue) == 0x000038, "Member 'AthenaFrontend_C_OnTrailerTransitionAudioCheck::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(AthenaFrontend_C_OnTrailerTransitionAudioCheck, CallFunc_GreaterEqual_DoubleDouble_ReturnValue) == 0x00003C, "Member 'AthenaFrontend_C_OnTrailerTransitionAudioCheck::CallFunc_GreaterEqual_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(AthenaFrontend_C_OnTrailerTransitionAudioCheck, CallFunc_GreaterEqual_DoubleDouble_A_ImplicitCast) == 0x000040, "Member 'AthenaFrontend_C_OnTrailerTransitionAudioCheck::CallFunc_GreaterEqual_DoubleDouble_A_ImplicitCast' has a wrong offset!");
static_assert(offsetof(AthenaFrontend_C_OnTrailerTransitionAudioCheck, CallFunc_GreaterEqual_DoubleDouble_B_ImplicitCast) == 0x000048, "Member 'AthenaFrontend_C_OnTrailerTransitionAudioCheck::CallFunc_GreaterEqual_DoubleDouble_B_ImplicitCast' has a wrong offset!");

struct AthenaFrontend_C_SetChatWidgetVisibility final
{
public:
	bool                                          Visible;
	uint8                                         Pad_1[0x7];
	class UFortGlobalUIContext*                   CallFunc_GetContext_ReturnValue;
	ESlateVisibility                              CallFunc_GetVisibility_ReturnValue;
	EFortUIFeatureState                           CallFunc_GetFeatureState_OutFeatureState;
	EFortUIFeatureStateReason                     CallFunc_GetFeatureState_OutReason;
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_1;
	bool                                          CallFunc_GetSelected_ReturnValue;
	bool                                          CallFunc_BooleanAND_ReturnValue;
	bool                                          CallFunc_Not_PreBool_ReturnValue;
	bool                                          CallFunc_BooleanOR_ReturnValue;
};
static_assert(alignof(AthenaFrontend_C_SetChatWidgetVisibility) == 0x000008, "Wrong alignment on AthenaFrontend_C_SetChatWidgetVisibility");
static_assert(sizeof(AthenaFrontend_C_SetChatWidgetVisibility) == 0x000020, "Wrong size on AthenaFrontend_C_SetChatWidgetVisibility");
static_assert(offsetof(AthenaFrontend_C_SetChatWidgetVisibility, Visible) == 0x000000, "Member 'AthenaFrontend_C_SetChatWidgetVisibility::Visible' has a wrong offset!");
static_assert(offsetof(AthenaFrontend_C_SetChatWidgetVisibility, CallFunc_GetContext_ReturnValue) == 0x000008, "Member 'AthenaFrontend_C_SetChatWidgetVisibility::CallFunc_GetContext_ReturnValue' has a wrong offset!");
static_assert(offsetof(AthenaFrontend_C_SetChatWidgetVisibility, CallFunc_GetVisibility_ReturnValue) == 0x000010, "Member 'AthenaFrontend_C_SetChatWidgetVisibility::CallFunc_GetVisibility_ReturnValue' has a wrong offset!");
static_assert(offsetof(AthenaFrontend_C_SetChatWidgetVisibility, CallFunc_GetFeatureState_OutFeatureState) == 0x000011, "Member 'AthenaFrontend_C_SetChatWidgetVisibility::CallFunc_GetFeatureState_OutFeatureState' has a wrong offset!");
static_assert(offsetof(AthenaFrontend_C_SetChatWidgetVisibility, CallFunc_GetFeatureState_OutReason) == 0x000012, "Member 'AthenaFrontend_C_SetChatWidgetVisibility::CallFunc_GetFeatureState_OutReason' has a wrong offset!");
static_assert(offsetof(AthenaFrontend_C_SetChatWidgetVisibility, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x000013, "Member 'AthenaFrontend_C_SetChatWidgetVisibility::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(AthenaFrontend_C_SetChatWidgetVisibility, CallFunc_EqualEqual_ByteByte_ReturnValue_1) == 0x000014, "Member 'AthenaFrontend_C_SetChatWidgetVisibility::CallFunc_EqualEqual_ByteByte_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(AthenaFrontend_C_SetChatWidgetVisibility, CallFunc_GetSelected_ReturnValue) == 0x000015, "Member 'AthenaFrontend_C_SetChatWidgetVisibility::CallFunc_GetSelected_ReturnValue' has a wrong offset!");
static_assert(offsetof(AthenaFrontend_C_SetChatWidgetVisibility, CallFunc_BooleanAND_ReturnValue) == 0x000016, "Member 'AthenaFrontend_C_SetChatWidgetVisibility::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(AthenaFrontend_C_SetChatWidgetVisibility, CallFunc_Not_PreBool_ReturnValue) == 0x000017, "Member 'AthenaFrontend_C_SetChatWidgetVisibility::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(AthenaFrontend_C_SetChatWidgetVisibility, CallFunc_BooleanOR_ReturnValue) == 0x000018, "Member 'AthenaFrontend_C_SetChatWidgetVisibility::CallFunc_BooleanOR_ReturnValue' has a wrong offset!");

struct AthenaFrontend_C_SetOverlayTitleBarVisibility final
{
public:
	bool                                          Visible;
};
static_assert(alignof(AthenaFrontend_C_SetOverlayTitleBarVisibility) == 0x000001, "Wrong alignment on AthenaFrontend_C_SetOverlayTitleBarVisibility");
static_assert(sizeof(AthenaFrontend_C_SetOverlayTitleBarVisibility) == 0x000001, "Wrong size on AthenaFrontend_C_SetOverlayTitleBarVisibility");
static_assert(offsetof(AthenaFrontend_C_SetOverlayTitleBarVisibility, Visible) == 0x000000, "Member 'AthenaFrontend_C_SetOverlayTitleBarVisibility::Visible' has a wrong offset!");

struct AthenaFrontend_C_StartTrailerTransitionAudioCheck final
{
public:
	class UMediaPlayer*                           MediaPlayer;
};
static_assert(alignof(AthenaFrontend_C_StartTrailerTransitionAudioCheck) == 0x000008, "Wrong alignment on AthenaFrontend_C_StartTrailerTransitionAudioCheck");
static_assert(sizeof(AthenaFrontend_C_StartTrailerTransitionAudioCheck) == 0x000008, "Wrong size on AthenaFrontend_C_StartTrailerTransitionAudioCheck");
static_assert(offsetof(AthenaFrontend_C_StartTrailerTransitionAudioCheck, MediaPlayer) == 0x000000, "Member 'AthenaFrontend_C_StartTrailerTransitionAudioCheck::MediaPlayer' has a wrong offset!");

struct AthenaFrontend_C_UpdatePttVisibility final
{
public:
	EPTTState                                     PTTState;
	uint8                                         Pad_1[0x7];
	class UAthenaHUDContext*                      CallFunc_GetContext_ReturnValue;
	bool                                          CallFunc_GetCanPTT_ReturnValue;
	uint8                                         Pad_11[0xF];
	struct FSlateBrush                            K2Node_MakeStruct_SlateBrush;
	struct FSlateBrush                            K2Node_MakeStruct_SlateBrush_1;
	struct FSlateBrush                            K2Node_MakeStruct_SlateBrush_2;
	bool                                          CallFunc_IsMobileGame_ReturnValue;
	ESubGame                                      CallFunc_GetSubGame_ReturnValue;
	bool                                          CallFunc_BooleanAND_ReturnValue;
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;
	EPTTState                                     Temp_byte_Variable;
	bool                                          CallFunc_BooleanAND_ReturnValue_1;
	uint8                                         Pad_266[0xA];
	struct FSlateBrush                            K2Node_Select_Default;
};
static_assert(alignof(AthenaFrontend_C_UpdatePttVisibility) == 0x000010, "Wrong alignment on AthenaFrontend_C_UpdatePttVisibility");
static_assert(sizeof(AthenaFrontend_C_UpdatePttVisibility) == 0x000330, "Wrong size on AthenaFrontend_C_UpdatePttVisibility");
static_assert(offsetof(AthenaFrontend_C_UpdatePttVisibility, PTTState) == 0x000000, "Member 'AthenaFrontend_C_UpdatePttVisibility::PTTState' has a wrong offset!");
static_assert(offsetof(AthenaFrontend_C_UpdatePttVisibility, CallFunc_GetContext_ReturnValue) == 0x000008, "Member 'AthenaFrontend_C_UpdatePttVisibility::CallFunc_GetContext_ReturnValue' has a wrong offset!");
static_assert(offsetof(AthenaFrontend_C_UpdatePttVisibility, CallFunc_GetCanPTT_ReturnValue) == 0x000010, "Member 'AthenaFrontend_C_UpdatePttVisibility::CallFunc_GetCanPTT_ReturnValue' has a wrong offset!");
static_assert(offsetof(AthenaFrontend_C_UpdatePttVisibility, K2Node_MakeStruct_SlateBrush) == 0x000020, "Member 'AthenaFrontend_C_UpdatePttVisibility::K2Node_MakeStruct_SlateBrush' has a wrong offset!");
static_assert(offsetof(AthenaFrontend_C_UpdatePttVisibility, K2Node_MakeStruct_SlateBrush_1) == 0x0000E0, "Member 'AthenaFrontend_C_UpdatePttVisibility::K2Node_MakeStruct_SlateBrush_1' has a wrong offset!");
static_assert(offsetof(AthenaFrontend_C_UpdatePttVisibility, K2Node_MakeStruct_SlateBrush_2) == 0x0001A0, "Member 'AthenaFrontend_C_UpdatePttVisibility::K2Node_MakeStruct_SlateBrush_2' has a wrong offset!");
static_assert(offsetof(AthenaFrontend_C_UpdatePttVisibility, CallFunc_IsMobileGame_ReturnValue) == 0x000260, "Member 'AthenaFrontend_C_UpdatePttVisibility::CallFunc_IsMobileGame_ReturnValue' has a wrong offset!");
static_assert(offsetof(AthenaFrontend_C_UpdatePttVisibility, CallFunc_GetSubGame_ReturnValue) == 0x000261, "Member 'AthenaFrontend_C_UpdatePttVisibility::CallFunc_GetSubGame_ReturnValue' has a wrong offset!");
static_assert(offsetof(AthenaFrontend_C_UpdatePttVisibility, CallFunc_BooleanAND_ReturnValue) == 0x000262, "Member 'AthenaFrontend_C_UpdatePttVisibility::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(AthenaFrontend_C_UpdatePttVisibility, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x000263, "Member 'AthenaFrontend_C_UpdatePttVisibility::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(AthenaFrontend_C_UpdatePttVisibility, Temp_byte_Variable) == 0x000264, "Member 'AthenaFrontend_C_UpdatePttVisibility::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(AthenaFrontend_C_UpdatePttVisibility, CallFunc_BooleanAND_ReturnValue_1) == 0x000265, "Member 'AthenaFrontend_C_UpdatePttVisibility::CallFunc_BooleanAND_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(AthenaFrontend_C_UpdatePttVisibility, K2Node_Select_Default) == 0x000270, "Member 'AthenaFrontend_C_UpdatePttVisibility::K2Node_Select_Default' has a wrong offset!");

}
