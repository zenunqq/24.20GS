#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CommonInput_structs.hpp"
#include "FortniteUI_structs.hpp"
#include "UMG_structs.hpp"
#include "SlateCore_structs.hpp"

namespace SDK::Params
{

struct ShowdownDivisionLobbyPanel_C_BndEvt__EventDetailsButton_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature final
{
public:
	class UCommonButtonLegacy*                    Button;
};
static_assert(alignof(ShowdownDivisionLobbyPanel_C_BndEvt__EventDetailsButton_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature) == 0x000008, "Wrong alignment on ShowdownDivisionLobbyPanel_C_BndEvt__EventDetailsButton_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature");
static_assert(sizeof(ShowdownDivisionLobbyPanel_C_BndEvt__EventDetailsButton_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature) == 0x000008, "Wrong size on ShowdownDivisionLobbyPanel_C_BndEvt__EventDetailsButton_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature");
static_assert(offsetof(ShowdownDivisionLobbyPanel_C_BndEvt__EventDetailsButton_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature, Button) == 0x000000, "Member 'ShowdownDivisionLobbyPanel_C_BndEvt__EventDetailsButton_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature::Button' has a wrong offset!");

struct ShowdownDivisionLobbyPanel_C_BndEvt__EventDetailsButton_K2Node_ComponentBoundEvent_2_CommonButtonClicked__DelegateSignature final
{
public:
	class UCommonButtonLegacy*                    Button;
};
static_assert(alignof(ShowdownDivisionLobbyPanel_C_BndEvt__EventDetailsButton_K2Node_ComponentBoundEvent_2_CommonButtonClicked__DelegateSignature) == 0x000008, "Wrong alignment on ShowdownDivisionLobbyPanel_C_BndEvt__EventDetailsButton_K2Node_ComponentBoundEvent_2_CommonButtonClicked__DelegateSignature");
static_assert(sizeof(ShowdownDivisionLobbyPanel_C_BndEvt__EventDetailsButton_K2Node_ComponentBoundEvent_2_CommonButtonClicked__DelegateSignature) == 0x000008, "Wrong size on ShowdownDivisionLobbyPanel_C_BndEvt__EventDetailsButton_K2Node_ComponentBoundEvent_2_CommonButtonClicked__DelegateSignature");
static_assert(offsetof(ShowdownDivisionLobbyPanel_C_BndEvt__EventDetailsButton_K2Node_ComponentBoundEvent_2_CommonButtonClicked__DelegateSignature, Button) == 0x000000, "Member 'ShowdownDivisionLobbyPanel_C_BndEvt__EventDetailsButton_K2Node_ComponentBoundEvent_2_CommonButtonClicked__DelegateSignature::Button' has a wrong offset!");

struct ShowdownDivisionLobbyPanel_C_BndEvt__EventDetailsButton_K2Node_ComponentBoundEvent_3_CommonButtonClicked__DelegateSignature final
{
public:
	class UCommonButtonLegacy*                    Button;
};
static_assert(alignof(ShowdownDivisionLobbyPanel_C_BndEvt__EventDetailsButton_K2Node_ComponentBoundEvent_3_CommonButtonClicked__DelegateSignature) == 0x000008, "Wrong alignment on ShowdownDivisionLobbyPanel_C_BndEvt__EventDetailsButton_K2Node_ComponentBoundEvent_3_CommonButtonClicked__DelegateSignature");
static_assert(sizeof(ShowdownDivisionLobbyPanel_C_BndEvt__EventDetailsButton_K2Node_ComponentBoundEvent_3_CommonButtonClicked__DelegateSignature) == 0x000008, "Wrong size on ShowdownDivisionLobbyPanel_C_BndEvt__EventDetailsButton_K2Node_ComponentBoundEvent_3_CommonButtonClicked__DelegateSignature");
static_assert(offsetof(ShowdownDivisionLobbyPanel_C_BndEvt__EventDetailsButton_K2Node_ComponentBoundEvent_3_CommonButtonClicked__DelegateSignature, Button) == 0x000000, "Member 'ShowdownDivisionLobbyPanel_C_BndEvt__EventDetailsButton_K2Node_ComponentBoundEvent_3_CommonButtonClicked__DelegateSignature::Button' has a wrong offset!");

struct ShowdownDivisionLobbyPanel_C_EventSwitchUI final
{
public:
	ECommonInputType                              bNewInputType;
};
static_assert(alignof(ShowdownDivisionLobbyPanel_C_EventSwitchUI) == 0x000001, "Wrong alignment on ShowdownDivisionLobbyPanel_C_EventSwitchUI");
static_assert(sizeof(ShowdownDivisionLobbyPanel_C_EventSwitchUI) == 0x000001, "Wrong size on ShowdownDivisionLobbyPanel_C_EventSwitchUI");
static_assert(offsetof(ShowdownDivisionLobbyPanel_C_EventSwitchUI, bNewInputType) == 0x000000, "Member 'ShowdownDivisionLobbyPanel_C_EventSwitchUI::bNewInputType' has a wrong offset!");

struct ShowdownDivisionLobbyPanel_C_ExecuteUbergraph_ShowdownDivisionLobbyPanel final
{
public:
	int32                                         EntryPoint;
	uint8                                         Pad_4[0x4];
	double                                        Temp_real_Variable;
	class UCommonInputSubsystem*                  CallFunc_GetLocalPlayerSubsystem_ReturnValue;
	TDelegate<void(ECommonInputType bNewInputType)> K2Node_CreateDelegate_OutputDelegate;
	uint8                                         Pad_24[0x4];
	class UFortGlobalUIContext*                   CallFunc_GetContext_ReturnValue;
	bool                                          CallFunc_IsUsingGamepad_ReturnValue;
	uint8                                         Pad_31[0x7];
	double                                        Temp_real_Variable_1;
	double                                        Temp_real_Variable_2;
	bool                                          Temp_bool_Variable;
	uint8                                         Pad_49[0x7];
	double                                        K2Node_Select_Default;
	struct FMargin                                K2Node_MakeStruct_Margin;
	class UCommonButtonLegacy*                    K2Node_ComponentBoundEvent_Button_2;
	class UCommonButtonLegacy*                    K2Node_ComponentBoundEvent_Button_1;
	float                                         CallFunc_GetStartTime_ReturnValue;
	float                                         CallFunc_GetEndTime_ReturnValue;
	float                                         CallFunc_GetStartTime_ReturnValue_1;
	float                                         CallFunc_GetEndTime_ReturnValue_1;
	bool                                          Temp_bool_Variable_1;
	uint8                                         Pad_89[0x7];
	class UFortPartyContext*                      CallFunc_GetContext_ReturnValue_1;
	float                                         CallFunc_PauseAnimation_ReturnValue;
	float                                         CallFunc_PauseAnimation_ReturnValue_1;
	bool                                          CallFunc_LessEqual_DoubleDouble_ReturnValue;
	uint8                                         Pad_A1[0x7];
	double                                        CallFunc_Add_DoubleDouble_ReturnValue;
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;
	double                                        CallFunc_Subtract_DoubleDouble_ReturnValue;
	float                                         CallFunc_PauseAnimation_ReturnValue_2;
	uint8                                         Pad_C4[0x4];
	double                                        K2Node_Select_Default_1;
	bool                                          CallFunc_LessEqual_DoubleDouble_ReturnValue_1;
	uint8                                         Pad_D1[0x7];
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue_1;
	double                                        CallFunc_Subtract_DoubleDouble_ReturnValue_1;
	float                                         CallFunc_PauseAnimation_ReturnValue_3;
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_1;
	double                                        CallFunc_Add_DoubleDouble_ReturnValue_1;
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue_2;
	class APlayerController*                      CallFunc_GetOwningPlayer_ReturnValue;
	class UOverlaySlot*                           CallFunc_SlotAsOverlaySlot_ReturnValue;
	class UDivisionDetailsScreen_C*               CallFunc_Create_ReturnValue;
	class UCommonButtonLegacy*                    K2Node_ComponentBoundEvent_Button;
	double                                        Temp_real_Variable_3;
	class FString                                 CallFunc_GetTournamentId_ReturnValue;
	class FString                                 CallFunc_GetEventId_ReturnValue;
	bool                                          Temp_bool_Variable_2;
	uint8                                         Pad_151[0x7];
	double                                        K2Node_Select_Default_2;
	class UMaterialInstanceDynamic*               CallFunc_GetDynamicMaterial_ReturnValue;
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue_3;
	ECommonInputType                              K2Node_CustomEvent_bNewInputType;
	uint8                                         Pad_171[0x3];
	float                                         K2Node_MakeStruct_Right_ImplicitCast;
	double                                        CallFunc_Add_DoubleDouble_B_ImplicitCast;
	double                                        CallFunc_LessEqual_DoubleDouble_B_ImplicitCast;
	double                                        CallFunc_Subtract_DoubleDouble_A_ImplicitCast;
	double                                        CallFunc_Add_DoubleDouble_B_ImplicitCast_1;
	double                                        CallFunc_LessEqual_DoubleDouble_B_ImplicitCast_1;
	double                                        CallFunc_Subtract_DoubleDouble_A_ImplicitCast_1;
	double                                        CallFunc_Subtract_DoubleDouble_B_ImplicitCast;
	double                                        CallFunc_LessEqual_DoubleDouble_A_ImplicitCast;
	double                                        CallFunc_Add_DoubleDouble_A_ImplicitCast;
	float                                         CallFunc_PlayAnimation_StartAtTime_ImplicitCast;
	uint8                                         Pad_1C4[0x4];
	double                                        CallFunc_Subtract_DoubleDouble_B_ImplicitCast_1;
	double                                        CallFunc_LessEqual_DoubleDouble_A_ImplicitCast_1;
	float                                         CallFunc_PlayAnimation_StartAtTime_ImplicitCast_1;
	uint8                                         Pad_1DC[0x4];
	double                                        CallFunc_Add_DoubleDouble_A_ImplicitCast_1;
	float                                         CallFunc_PlayAnimation_StartAtTime_ImplicitCast_2;
	float                                         CallFunc_PlayAnimation_StartAtTime_ImplicitCast_3;
};
static_assert(alignof(ShowdownDivisionLobbyPanel_C_ExecuteUbergraph_ShowdownDivisionLobbyPanel) == 0x000008, "Wrong alignment on ShowdownDivisionLobbyPanel_C_ExecuteUbergraph_ShowdownDivisionLobbyPanel");
static_assert(sizeof(ShowdownDivisionLobbyPanel_C_ExecuteUbergraph_ShowdownDivisionLobbyPanel) == 0x0001F0, "Wrong size on ShowdownDivisionLobbyPanel_C_ExecuteUbergraph_ShowdownDivisionLobbyPanel");
static_assert(offsetof(ShowdownDivisionLobbyPanel_C_ExecuteUbergraph_ShowdownDivisionLobbyPanel, EntryPoint) == 0x000000, "Member 'ShowdownDivisionLobbyPanel_C_ExecuteUbergraph_ShowdownDivisionLobbyPanel::EntryPoint' has a wrong offset!");
static_assert(offsetof(ShowdownDivisionLobbyPanel_C_ExecuteUbergraph_ShowdownDivisionLobbyPanel, Temp_real_Variable) == 0x000008, "Member 'ShowdownDivisionLobbyPanel_C_ExecuteUbergraph_ShowdownDivisionLobbyPanel::Temp_real_Variable' has a wrong offset!");
static_assert(offsetof(ShowdownDivisionLobbyPanel_C_ExecuteUbergraph_ShowdownDivisionLobbyPanel, CallFunc_GetLocalPlayerSubsystem_ReturnValue) == 0x000010, "Member 'ShowdownDivisionLobbyPanel_C_ExecuteUbergraph_ShowdownDivisionLobbyPanel::CallFunc_GetLocalPlayerSubsystem_ReturnValue' has a wrong offset!");
static_assert(offsetof(ShowdownDivisionLobbyPanel_C_ExecuteUbergraph_ShowdownDivisionLobbyPanel, K2Node_CreateDelegate_OutputDelegate) == 0x000018, "Member 'ShowdownDivisionLobbyPanel_C_ExecuteUbergraph_ShowdownDivisionLobbyPanel::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(ShowdownDivisionLobbyPanel_C_ExecuteUbergraph_ShowdownDivisionLobbyPanel, CallFunc_GetContext_ReturnValue) == 0x000028, "Member 'ShowdownDivisionLobbyPanel_C_ExecuteUbergraph_ShowdownDivisionLobbyPanel::CallFunc_GetContext_ReturnValue' has a wrong offset!");
static_assert(offsetof(ShowdownDivisionLobbyPanel_C_ExecuteUbergraph_ShowdownDivisionLobbyPanel, CallFunc_IsUsingGamepad_ReturnValue) == 0x000030, "Member 'ShowdownDivisionLobbyPanel_C_ExecuteUbergraph_ShowdownDivisionLobbyPanel::CallFunc_IsUsingGamepad_ReturnValue' has a wrong offset!");
static_assert(offsetof(ShowdownDivisionLobbyPanel_C_ExecuteUbergraph_ShowdownDivisionLobbyPanel, Temp_real_Variable_1) == 0x000038, "Member 'ShowdownDivisionLobbyPanel_C_ExecuteUbergraph_ShowdownDivisionLobbyPanel::Temp_real_Variable_1' has a wrong offset!");
static_assert(offsetof(ShowdownDivisionLobbyPanel_C_ExecuteUbergraph_ShowdownDivisionLobbyPanel, Temp_real_Variable_2) == 0x000040, "Member 'ShowdownDivisionLobbyPanel_C_ExecuteUbergraph_ShowdownDivisionLobbyPanel::Temp_real_Variable_2' has a wrong offset!");
static_assert(offsetof(ShowdownDivisionLobbyPanel_C_ExecuteUbergraph_ShowdownDivisionLobbyPanel, Temp_bool_Variable) == 0x000048, "Member 'ShowdownDivisionLobbyPanel_C_ExecuteUbergraph_ShowdownDivisionLobbyPanel::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(ShowdownDivisionLobbyPanel_C_ExecuteUbergraph_ShowdownDivisionLobbyPanel, K2Node_Select_Default) == 0x000050, "Member 'ShowdownDivisionLobbyPanel_C_ExecuteUbergraph_ShowdownDivisionLobbyPanel::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(ShowdownDivisionLobbyPanel_C_ExecuteUbergraph_ShowdownDivisionLobbyPanel, K2Node_MakeStruct_Margin) == 0x000058, "Member 'ShowdownDivisionLobbyPanel_C_ExecuteUbergraph_ShowdownDivisionLobbyPanel::K2Node_MakeStruct_Margin' has a wrong offset!");
static_assert(offsetof(ShowdownDivisionLobbyPanel_C_ExecuteUbergraph_ShowdownDivisionLobbyPanel, K2Node_ComponentBoundEvent_Button_2) == 0x000068, "Member 'ShowdownDivisionLobbyPanel_C_ExecuteUbergraph_ShowdownDivisionLobbyPanel::K2Node_ComponentBoundEvent_Button_2' has a wrong offset!");
static_assert(offsetof(ShowdownDivisionLobbyPanel_C_ExecuteUbergraph_ShowdownDivisionLobbyPanel, K2Node_ComponentBoundEvent_Button_1) == 0x000070, "Member 'ShowdownDivisionLobbyPanel_C_ExecuteUbergraph_ShowdownDivisionLobbyPanel::K2Node_ComponentBoundEvent_Button_1' has a wrong offset!");
static_assert(offsetof(ShowdownDivisionLobbyPanel_C_ExecuteUbergraph_ShowdownDivisionLobbyPanel, CallFunc_GetStartTime_ReturnValue) == 0x000078, "Member 'ShowdownDivisionLobbyPanel_C_ExecuteUbergraph_ShowdownDivisionLobbyPanel::CallFunc_GetStartTime_ReturnValue' has a wrong offset!");
static_assert(offsetof(ShowdownDivisionLobbyPanel_C_ExecuteUbergraph_ShowdownDivisionLobbyPanel, CallFunc_GetEndTime_ReturnValue) == 0x00007C, "Member 'ShowdownDivisionLobbyPanel_C_ExecuteUbergraph_ShowdownDivisionLobbyPanel::CallFunc_GetEndTime_ReturnValue' has a wrong offset!");
static_assert(offsetof(ShowdownDivisionLobbyPanel_C_ExecuteUbergraph_ShowdownDivisionLobbyPanel, CallFunc_GetStartTime_ReturnValue_1) == 0x000080, "Member 'ShowdownDivisionLobbyPanel_C_ExecuteUbergraph_ShowdownDivisionLobbyPanel::CallFunc_GetStartTime_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(ShowdownDivisionLobbyPanel_C_ExecuteUbergraph_ShowdownDivisionLobbyPanel, CallFunc_GetEndTime_ReturnValue_1) == 0x000084, "Member 'ShowdownDivisionLobbyPanel_C_ExecuteUbergraph_ShowdownDivisionLobbyPanel::CallFunc_GetEndTime_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(ShowdownDivisionLobbyPanel_C_ExecuteUbergraph_ShowdownDivisionLobbyPanel, Temp_bool_Variable_1) == 0x000088, "Member 'ShowdownDivisionLobbyPanel_C_ExecuteUbergraph_ShowdownDivisionLobbyPanel::Temp_bool_Variable_1' has a wrong offset!");
static_assert(offsetof(ShowdownDivisionLobbyPanel_C_ExecuteUbergraph_ShowdownDivisionLobbyPanel, CallFunc_GetContext_ReturnValue_1) == 0x000090, "Member 'ShowdownDivisionLobbyPanel_C_ExecuteUbergraph_ShowdownDivisionLobbyPanel::CallFunc_GetContext_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(ShowdownDivisionLobbyPanel_C_ExecuteUbergraph_ShowdownDivisionLobbyPanel, CallFunc_PauseAnimation_ReturnValue) == 0x000098, "Member 'ShowdownDivisionLobbyPanel_C_ExecuteUbergraph_ShowdownDivisionLobbyPanel::CallFunc_PauseAnimation_ReturnValue' has a wrong offset!");
static_assert(offsetof(ShowdownDivisionLobbyPanel_C_ExecuteUbergraph_ShowdownDivisionLobbyPanel, CallFunc_PauseAnimation_ReturnValue_1) == 0x00009C, "Member 'ShowdownDivisionLobbyPanel_C_ExecuteUbergraph_ShowdownDivisionLobbyPanel::CallFunc_PauseAnimation_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(ShowdownDivisionLobbyPanel_C_ExecuteUbergraph_ShowdownDivisionLobbyPanel, CallFunc_LessEqual_DoubleDouble_ReturnValue) == 0x0000A0, "Member 'ShowdownDivisionLobbyPanel_C_ExecuteUbergraph_ShowdownDivisionLobbyPanel::CallFunc_LessEqual_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(ShowdownDivisionLobbyPanel_C_ExecuteUbergraph_ShowdownDivisionLobbyPanel, CallFunc_Add_DoubleDouble_ReturnValue) == 0x0000A8, "Member 'ShowdownDivisionLobbyPanel_C_ExecuteUbergraph_ShowdownDivisionLobbyPanel::CallFunc_Add_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(ShowdownDivisionLobbyPanel_C_ExecuteUbergraph_ShowdownDivisionLobbyPanel, CallFunc_PlayAnimation_ReturnValue) == 0x0000B0, "Member 'ShowdownDivisionLobbyPanel_C_ExecuteUbergraph_ShowdownDivisionLobbyPanel::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");
static_assert(offsetof(ShowdownDivisionLobbyPanel_C_ExecuteUbergraph_ShowdownDivisionLobbyPanel, CallFunc_Subtract_DoubleDouble_ReturnValue) == 0x0000B8, "Member 'ShowdownDivisionLobbyPanel_C_ExecuteUbergraph_ShowdownDivisionLobbyPanel::CallFunc_Subtract_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(ShowdownDivisionLobbyPanel_C_ExecuteUbergraph_ShowdownDivisionLobbyPanel, CallFunc_PauseAnimation_ReturnValue_2) == 0x0000C0, "Member 'ShowdownDivisionLobbyPanel_C_ExecuteUbergraph_ShowdownDivisionLobbyPanel::CallFunc_PauseAnimation_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(ShowdownDivisionLobbyPanel_C_ExecuteUbergraph_ShowdownDivisionLobbyPanel, K2Node_Select_Default_1) == 0x0000C8, "Member 'ShowdownDivisionLobbyPanel_C_ExecuteUbergraph_ShowdownDivisionLobbyPanel::K2Node_Select_Default_1' has a wrong offset!");
static_assert(offsetof(ShowdownDivisionLobbyPanel_C_ExecuteUbergraph_ShowdownDivisionLobbyPanel, CallFunc_LessEqual_DoubleDouble_ReturnValue_1) == 0x0000D0, "Member 'ShowdownDivisionLobbyPanel_C_ExecuteUbergraph_ShowdownDivisionLobbyPanel::CallFunc_LessEqual_DoubleDouble_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(ShowdownDivisionLobbyPanel_C_ExecuteUbergraph_ShowdownDivisionLobbyPanel, CallFunc_PlayAnimation_ReturnValue_1) == 0x0000D8, "Member 'ShowdownDivisionLobbyPanel_C_ExecuteUbergraph_ShowdownDivisionLobbyPanel::CallFunc_PlayAnimation_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(ShowdownDivisionLobbyPanel_C_ExecuteUbergraph_ShowdownDivisionLobbyPanel, CallFunc_Subtract_DoubleDouble_ReturnValue_1) == 0x0000E0, "Member 'ShowdownDivisionLobbyPanel_C_ExecuteUbergraph_ShowdownDivisionLobbyPanel::CallFunc_Subtract_DoubleDouble_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(ShowdownDivisionLobbyPanel_C_ExecuteUbergraph_ShowdownDivisionLobbyPanel, CallFunc_PauseAnimation_ReturnValue_3) == 0x0000E8, "Member 'ShowdownDivisionLobbyPanel_C_ExecuteUbergraph_ShowdownDivisionLobbyPanel::CallFunc_PauseAnimation_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(ShowdownDivisionLobbyPanel_C_ExecuteUbergraph_ShowdownDivisionLobbyPanel, K2Node_CreateDelegate_OutputDelegate_1) == 0x0000EC, "Member 'ShowdownDivisionLobbyPanel_C_ExecuteUbergraph_ShowdownDivisionLobbyPanel::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(ShowdownDivisionLobbyPanel_C_ExecuteUbergraph_ShowdownDivisionLobbyPanel, CallFunc_Add_DoubleDouble_ReturnValue_1) == 0x0000F8, "Member 'ShowdownDivisionLobbyPanel_C_ExecuteUbergraph_ShowdownDivisionLobbyPanel::CallFunc_Add_DoubleDouble_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(ShowdownDivisionLobbyPanel_C_ExecuteUbergraph_ShowdownDivisionLobbyPanel, CallFunc_PlayAnimation_ReturnValue_2) == 0x000100, "Member 'ShowdownDivisionLobbyPanel_C_ExecuteUbergraph_ShowdownDivisionLobbyPanel::CallFunc_PlayAnimation_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(ShowdownDivisionLobbyPanel_C_ExecuteUbergraph_ShowdownDivisionLobbyPanel, CallFunc_GetOwningPlayer_ReturnValue) == 0x000108, "Member 'ShowdownDivisionLobbyPanel_C_ExecuteUbergraph_ShowdownDivisionLobbyPanel::CallFunc_GetOwningPlayer_ReturnValue' has a wrong offset!");
static_assert(offsetof(ShowdownDivisionLobbyPanel_C_ExecuteUbergraph_ShowdownDivisionLobbyPanel, CallFunc_SlotAsOverlaySlot_ReturnValue) == 0x000110, "Member 'ShowdownDivisionLobbyPanel_C_ExecuteUbergraph_ShowdownDivisionLobbyPanel::CallFunc_SlotAsOverlaySlot_ReturnValue' has a wrong offset!");
static_assert(offsetof(ShowdownDivisionLobbyPanel_C_ExecuteUbergraph_ShowdownDivisionLobbyPanel, CallFunc_Create_ReturnValue) == 0x000118, "Member 'ShowdownDivisionLobbyPanel_C_ExecuteUbergraph_ShowdownDivisionLobbyPanel::CallFunc_Create_ReturnValue' has a wrong offset!");
static_assert(offsetof(ShowdownDivisionLobbyPanel_C_ExecuteUbergraph_ShowdownDivisionLobbyPanel, K2Node_ComponentBoundEvent_Button) == 0x000120, "Member 'ShowdownDivisionLobbyPanel_C_ExecuteUbergraph_ShowdownDivisionLobbyPanel::K2Node_ComponentBoundEvent_Button' has a wrong offset!");
static_assert(offsetof(ShowdownDivisionLobbyPanel_C_ExecuteUbergraph_ShowdownDivisionLobbyPanel, Temp_real_Variable_3) == 0x000128, "Member 'ShowdownDivisionLobbyPanel_C_ExecuteUbergraph_ShowdownDivisionLobbyPanel::Temp_real_Variable_3' has a wrong offset!");
static_assert(offsetof(ShowdownDivisionLobbyPanel_C_ExecuteUbergraph_ShowdownDivisionLobbyPanel, CallFunc_GetTournamentId_ReturnValue) == 0x000130, "Member 'ShowdownDivisionLobbyPanel_C_ExecuteUbergraph_ShowdownDivisionLobbyPanel::CallFunc_GetTournamentId_ReturnValue' has a wrong offset!");
static_assert(offsetof(ShowdownDivisionLobbyPanel_C_ExecuteUbergraph_ShowdownDivisionLobbyPanel, CallFunc_GetEventId_ReturnValue) == 0x000140, "Member 'ShowdownDivisionLobbyPanel_C_ExecuteUbergraph_ShowdownDivisionLobbyPanel::CallFunc_GetEventId_ReturnValue' has a wrong offset!");
static_assert(offsetof(ShowdownDivisionLobbyPanel_C_ExecuteUbergraph_ShowdownDivisionLobbyPanel, Temp_bool_Variable_2) == 0x000150, "Member 'ShowdownDivisionLobbyPanel_C_ExecuteUbergraph_ShowdownDivisionLobbyPanel::Temp_bool_Variable_2' has a wrong offset!");
static_assert(offsetof(ShowdownDivisionLobbyPanel_C_ExecuteUbergraph_ShowdownDivisionLobbyPanel, K2Node_Select_Default_2) == 0x000158, "Member 'ShowdownDivisionLobbyPanel_C_ExecuteUbergraph_ShowdownDivisionLobbyPanel::K2Node_Select_Default_2' has a wrong offset!");
static_assert(offsetof(ShowdownDivisionLobbyPanel_C_ExecuteUbergraph_ShowdownDivisionLobbyPanel, CallFunc_GetDynamicMaterial_ReturnValue) == 0x000160, "Member 'ShowdownDivisionLobbyPanel_C_ExecuteUbergraph_ShowdownDivisionLobbyPanel::CallFunc_GetDynamicMaterial_ReturnValue' has a wrong offset!");
static_assert(offsetof(ShowdownDivisionLobbyPanel_C_ExecuteUbergraph_ShowdownDivisionLobbyPanel, CallFunc_PlayAnimation_ReturnValue_3) == 0x000168, "Member 'ShowdownDivisionLobbyPanel_C_ExecuteUbergraph_ShowdownDivisionLobbyPanel::CallFunc_PlayAnimation_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(ShowdownDivisionLobbyPanel_C_ExecuteUbergraph_ShowdownDivisionLobbyPanel, K2Node_CustomEvent_bNewInputType) == 0x000170, "Member 'ShowdownDivisionLobbyPanel_C_ExecuteUbergraph_ShowdownDivisionLobbyPanel::K2Node_CustomEvent_bNewInputType' has a wrong offset!");
static_assert(offsetof(ShowdownDivisionLobbyPanel_C_ExecuteUbergraph_ShowdownDivisionLobbyPanel, K2Node_MakeStruct_Right_ImplicitCast) == 0x000174, "Member 'ShowdownDivisionLobbyPanel_C_ExecuteUbergraph_ShowdownDivisionLobbyPanel::K2Node_MakeStruct_Right_ImplicitCast' has a wrong offset!");
static_assert(offsetof(ShowdownDivisionLobbyPanel_C_ExecuteUbergraph_ShowdownDivisionLobbyPanel, CallFunc_Add_DoubleDouble_B_ImplicitCast) == 0x000178, "Member 'ShowdownDivisionLobbyPanel_C_ExecuteUbergraph_ShowdownDivisionLobbyPanel::CallFunc_Add_DoubleDouble_B_ImplicitCast' has a wrong offset!");
static_assert(offsetof(ShowdownDivisionLobbyPanel_C_ExecuteUbergraph_ShowdownDivisionLobbyPanel, CallFunc_LessEqual_DoubleDouble_B_ImplicitCast) == 0x000180, "Member 'ShowdownDivisionLobbyPanel_C_ExecuteUbergraph_ShowdownDivisionLobbyPanel::CallFunc_LessEqual_DoubleDouble_B_ImplicitCast' has a wrong offset!");
static_assert(offsetof(ShowdownDivisionLobbyPanel_C_ExecuteUbergraph_ShowdownDivisionLobbyPanel, CallFunc_Subtract_DoubleDouble_A_ImplicitCast) == 0x000188, "Member 'ShowdownDivisionLobbyPanel_C_ExecuteUbergraph_ShowdownDivisionLobbyPanel::CallFunc_Subtract_DoubleDouble_A_ImplicitCast' has a wrong offset!");
static_assert(offsetof(ShowdownDivisionLobbyPanel_C_ExecuteUbergraph_ShowdownDivisionLobbyPanel, CallFunc_Add_DoubleDouble_B_ImplicitCast_1) == 0x000190, "Member 'ShowdownDivisionLobbyPanel_C_ExecuteUbergraph_ShowdownDivisionLobbyPanel::CallFunc_Add_DoubleDouble_B_ImplicitCast_1' has a wrong offset!");
static_assert(offsetof(ShowdownDivisionLobbyPanel_C_ExecuteUbergraph_ShowdownDivisionLobbyPanel, CallFunc_LessEqual_DoubleDouble_B_ImplicitCast_1) == 0x000198, "Member 'ShowdownDivisionLobbyPanel_C_ExecuteUbergraph_ShowdownDivisionLobbyPanel::CallFunc_LessEqual_DoubleDouble_B_ImplicitCast_1' has a wrong offset!");
static_assert(offsetof(ShowdownDivisionLobbyPanel_C_ExecuteUbergraph_ShowdownDivisionLobbyPanel, CallFunc_Subtract_DoubleDouble_A_ImplicitCast_1) == 0x0001A0, "Member 'ShowdownDivisionLobbyPanel_C_ExecuteUbergraph_ShowdownDivisionLobbyPanel::CallFunc_Subtract_DoubleDouble_A_ImplicitCast_1' has a wrong offset!");
static_assert(offsetof(ShowdownDivisionLobbyPanel_C_ExecuteUbergraph_ShowdownDivisionLobbyPanel, CallFunc_Subtract_DoubleDouble_B_ImplicitCast) == 0x0001A8, "Member 'ShowdownDivisionLobbyPanel_C_ExecuteUbergraph_ShowdownDivisionLobbyPanel::CallFunc_Subtract_DoubleDouble_B_ImplicitCast' has a wrong offset!");
static_assert(offsetof(ShowdownDivisionLobbyPanel_C_ExecuteUbergraph_ShowdownDivisionLobbyPanel, CallFunc_LessEqual_DoubleDouble_A_ImplicitCast) == 0x0001B0, "Member 'ShowdownDivisionLobbyPanel_C_ExecuteUbergraph_ShowdownDivisionLobbyPanel::CallFunc_LessEqual_DoubleDouble_A_ImplicitCast' has a wrong offset!");
static_assert(offsetof(ShowdownDivisionLobbyPanel_C_ExecuteUbergraph_ShowdownDivisionLobbyPanel, CallFunc_Add_DoubleDouble_A_ImplicitCast) == 0x0001B8, "Member 'ShowdownDivisionLobbyPanel_C_ExecuteUbergraph_ShowdownDivisionLobbyPanel::CallFunc_Add_DoubleDouble_A_ImplicitCast' has a wrong offset!");
static_assert(offsetof(ShowdownDivisionLobbyPanel_C_ExecuteUbergraph_ShowdownDivisionLobbyPanel, CallFunc_PlayAnimation_StartAtTime_ImplicitCast) == 0x0001C0, "Member 'ShowdownDivisionLobbyPanel_C_ExecuteUbergraph_ShowdownDivisionLobbyPanel::CallFunc_PlayAnimation_StartAtTime_ImplicitCast' has a wrong offset!");
static_assert(offsetof(ShowdownDivisionLobbyPanel_C_ExecuteUbergraph_ShowdownDivisionLobbyPanel, CallFunc_Subtract_DoubleDouble_B_ImplicitCast_1) == 0x0001C8, "Member 'ShowdownDivisionLobbyPanel_C_ExecuteUbergraph_ShowdownDivisionLobbyPanel::CallFunc_Subtract_DoubleDouble_B_ImplicitCast_1' has a wrong offset!");
static_assert(offsetof(ShowdownDivisionLobbyPanel_C_ExecuteUbergraph_ShowdownDivisionLobbyPanel, CallFunc_LessEqual_DoubleDouble_A_ImplicitCast_1) == 0x0001D0, "Member 'ShowdownDivisionLobbyPanel_C_ExecuteUbergraph_ShowdownDivisionLobbyPanel::CallFunc_LessEqual_DoubleDouble_A_ImplicitCast_1' has a wrong offset!");
static_assert(offsetof(ShowdownDivisionLobbyPanel_C_ExecuteUbergraph_ShowdownDivisionLobbyPanel, CallFunc_PlayAnimation_StartAtTime_ImplicitCast_1) == 0x0001D8, "Member 'ShowdownDivisionLobbyPanel_C_ExecuteUbergraph_ShowdownDivisionLobbyPanel::CallFunc_PlayAnimation_StartAtTime_ImplicitCast_1' has a wrong offset!");
static_assert(offsetof(ShowdownDivisionLobbyPanel_C_ExecuteUbergraph_ShowdownDivisionLobbyPanel, CallFunc_Add_DoubleDouble_A_ImplicitCast_1) == 0x0001E0, "Member 'ShowdownDivisionLobbyPanel_C_ExecuteUbergraph_ShowdownDivisionLobbyPanel::CallFunc_Add_DoubleDouble_A_ImplicitCast_1' has a wrong offset!");
static_assert(offsetof(ShowdownDivisionLobbyPanel_C_ExecuteUbergraph_ShowdownDivisionLobbyPanel, CallFunc_PlayAnimation_StartAtTime_ImplicitCast_2) == 0x0001E8, "Member 'ShowdownDivisionLobbyPanel_C_ExecuteUbergraph_ShowdownDivisionLobbyPanel::CallFunc_PlayAnimation_StartAtTime_ImplicitCast_2' has a wrong offset!");
static_assert(offsetof(ShowdownDivisionLobbyPanel_C_ExecuteUbergraph_ShowdownDivisionLobbyPanel, CallFunc_PlayAnimation_StartAtTime_ImplicitCast_3) == 0x0001EC, "Member 'ShowdownDivisionLobbyPanel_C_ExecuteUbergraph_ShowdownDivisionLobbyPanel::CallFunc_PlayAnimation_StartAtTime_ImplicitCast_3' has a wrong offset!");

struct ShowdownDivisionLobbyPanel_C_InputTypeChanged final
{
public:
	bool                                          isGamepad;
};
static_assert(alignof(ShowdownDivisionLobbyPanel_C_InputTypeChanged) == 0x000001, "Wrong alignment on ShowdownDivisionLobbyPanel_C_InputTypeChanged");
static_assert(sizeof(ShowdownDivisionLobbyPanel_C_InputTypeChanged) == 0x000001, "Wrong size on ShowdownDivisionLobbyPanel_C_InputTypeChanged");
static_assert(offsetof(ShowdownDivisionLobbyPanel_C_InputTypeChanged, isGamepad) == 0x000000, "Member 'ShowdownDivisionLobbyPanel_C_InputTypeChanged::isGamepad' has a wrong offset!");

struct ShowdownDivisionLobbyPanel_C_Refresh final
{
public:
	EFortShowdownEventState                       Temp_byte_Variable;
	uint8                                         Pad_1[0x7];
	class FText                                   Temp_text_Variable;
	class FText                                   Temp_text_Variable_1;
	class FText                                   Temp_text_Variable_2;
	class FText                                   Temp_text_Variable_3;
	class FText                                   Temp_text_Variable_4;
	class FText                                   Temp_text_Variable_5;
	bool                                          Temp_bool_Variable;
	uint8                                         Pad_99[0x7];
	double                                        Temp_real_Variable;
	double                                        Temp_real_Variable_1;
	ESlateVisibility                              Temp_byte_Variable_1;
	uint8                                         Pad_B1[0x7];
	double                                        K2Node_Select_Default;
	class FText                                   CallFunc_GetLeagueDisplayName_ReturnValue;
	class FText                                   CallFunc_MakeLiteralText_ReturnValue;
	class FText                                   CallFunc_TextToUpper_ReturnValue;
	bool                                          CallFunc_IsDivisionEvent_ReturnValue;
	EFortShowdownEventState                       CallFunc_GetEventTimeState_ReturnValue;
	bool                                          CallFunc_DoCalloutMFARequirement_ReturnValue;
	bool                                          CallFunc_DoCalloutMFARequirement_ReturnValue_1;
	int32                                         CallFunc_GetTournamentMatchCap_ReturnValue;
	bool                                          CallFunc_Greater_IntInt_ReturnValue;
	uint8                                         Pad_111[0x3];
	int32                                         CallFunc_GetCurrentEventTeamNumMatchesPlayed_ReturnValue;
	int32                                         CallFunc_GetTournamentMatchCap_ReturnValue_1;
	ESlateVisibility                              Temp_byte_Variable_2;
	uint8                                         Pad_11D[0x3];
	int32                                         CallFunc_Subtract_IntInt_ReturnValue;
	uint8                                         Pad_124[0x4];
	int64                                         CallFunc_Conv_IntToInt64_ReturnValue;
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData;
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array;
	int32                                         CallFunc_GetCurrentEventTeamNumMatchesPlayed_ReturnValue_1;
	uint8                                         Pad_194[0x4];
	class FText                                   CallFunc_Format_ReturnValue;
	int32                                         CallFunc_GetTournamentMatchCap_ReturnValue_2;
	int32                                         CallFunc_Subtract_IntInt_ReturnValue_1;
	bool                                          CallFunc_GreaterEqual_IntInt_ReturnValue;
	bool                                          CallFunc_BooleanAND_ReturnValue;
	bool                                          CallFunc_BooleanOR_ReturnValue;
	bool                                          Temp_bool_Variable_1;
	uint8                                         Pad_1BC[0x4];
	double                                        Temp_real_Variable_2;
	ESlateVisibility                              K2Node_Select_Default_1;
	uint8                                         Pad_1C9[0x7];
	class FText                                   CallFunc_MakeLiteralText_ReturnValue_1;
	class FText                                   CallFunc_MakeLiteralText_ReturnValue_2;
	class FText                                   K2Node_Select_Default_2;
	class UVerticalBoxSlot*                       CallFunc_SlotAsVerticalBoxSlot_ReturnValue;
	float                                         CallFunc_PauseAnimation_ReturnValue;
	struct FMargin                                K2Node_MakeStruct_Margin;
	float                                         CallFunc_GetStartTime_ReturnValue;
	bool                                          CallFunc_LessEqual_DoubleDouble_ReturnValue;
	uint8                                         Pad_239[0x3];
	float                                         CallFunc_PauseAnimation_ReturnValue_1;
	float                                         CallFunc_GetEndTime_ReturnValue;
	uint8                                         Pad_244[0x4];
	double                                        CallFunc_Add_DoubleDouble_ReturnValue;
	double                                        CallFunc_Subtract_DoubleDouble_ReturnValue;
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;
	bool                                          Temp_bool_Variable_2;
	uint8                                         Pad_261[0x7];
	double                                        K2Node_Select_Default_3;
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue_1;
	class FString                                 CallFunc_GetEventId_ReturnValue;
	bool                                          CallFunc_EqualEqual_StrStr_ReturnValue;
	uint8                                         Pad_289[0x3];
	float                                         K2Node_MakeStruct_Top_ImplicitCast;
	double                                        CallFunc_Subtract_DoubleDouble_B_ImplicitCast;
	double                                        CallFunc_LessEqual_DoubleDouble_A_ImplicitCast;
	double                                        CallFunc_Add_DoubleDouble_B_ImplicitCast;
	double                                        CallFunc_LessEqual_DoubleDouble_B_ImplicitCast;
	double                                        CallFunc_Add_DoubleDouble_A_ImplicitCast;
	double                                        CallFunc_Subtract_DoubleDouble_A_ImplicitCast;
	float                                         CallFunc_PlayAnimation_StartAtTime_ImplicitCast;
	float                                         CallFunc_PlayAnimation_StartAtTime_ImplicitCast_1;
};
static_assert(alignof(ShowdownDivisionLobbyPanel_C_Refresh) == 0x000008, "Wrong alignment on ShowdownDivisionLobbyPanel_C_Refresh");
static_assert(sizeof(ShowdownDivisionLobbyPanel_C_Refresh) == 0x0002C8, "Wrong size on ShowdownDivisionLobbyPanel_C_Refresh");
static_assert(offsetof(ShowdownDivisionLobbyPanel_C_Refresh, Temp_byte_Variable) == 0x000000, "Member 'ShowdownDivisionLobbyPanel_C_Refresh::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(ShowdownDivisionLobbyPanel_C_Refresh, Temp_text_Variable) == 0x000008, "Member 'ShowdownDivisionLobbyPanel_C_Refresh::Temp_text_Variable' has a wrong offset!");
static_assert(offsetof(ShowdownDivisionLobbyPanel_C_Refresh, Temp_text_Variable_1) == 0x000020, "Member 'ShowdownDivisionLobbyPanel_C_Refresh::Temp_text_Variable_1' has a wrong offset!");
static_assert(offsetof(ShowdownDivisionLobbyPanel_C_Refresh, Temp_text_Variable_2) == 0x000038, "Member 'ShowdownDivisionLobbyPanel_C_Refresh::Temp_text_Variable_2' has a wrong offset!");
static_assert(offsetof(ShowdownDivisionLobbyPanel_C_Refresh, Temp_text_Variable_3) == 0x000050, "Member 'ShowdownDivisionLobbyPanel_C_Refresh::Temp_text_Variable_3' has a wrong offset!");
static_assert(offsetof(ShowdownDivisionLobbyPanel_C_Refresh, Temp_text_Variable_4) == 0x000068, "Member 'ShowdownDivisionLobbyPanel_C_Refresh::Temp_text_Variable_4' has a wrong offset!");
static_assert(offsetof(ShowdownDivisionLobbyPanel_C_Refresh, Temp_text_Variable_5) == 0x000080, "Member 'ShowdownDivisionLobbyPanel_C_Refresh::Temp_text_Variable_5' has a wrong offset!");
static_assert(offsetof(ShowdownDivisionLobbyPanel_C_Refresh, Temp_bool_Variable) == 0x000098, "Member 'ShowdownDivisionLobbyPanel_C_Refresh::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(ShowdownDivisionLobbyPanel_C_Refresh, Temp_real_Variable) == 0x0000A0, "Member 'ShowdownDivisionLobbyPanel_C_Refresh::Temp_real_Variable' has a wrong offset!");
static_assert(offsetof(ShowdownDivisionLobbyPanel_C_Refresh, Temp_real_Variable_1) == 0x0000A8, "Member 'ShowdownDivisionLobbyPanel_C_Refresh::Temp_real_Variable_1' has a wrong offset!");
static_assert(offsetof(ShowdownDivisionLobbyPanel_C_Refresh, Temp_byte_Variable_1) == 0x0000B0, "Member 'ShowdownDivisionLobbyPanel_C_Refresh::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(ShowdownDivisionLobbyPanel_C_Refresh, K2Node_Select_Default) == 0x0000B8, "Member 'ShowdownDivisionLobbyPanel_C_Refresh::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(ShowdownDivisionLobbyPanel_C_Refresh, CallFunc_GetLeagueDisplayName_ReturnValue) == 0x0000C0, "Member 'ShowdownDivisionLobbyPanel_C_Refresh::CallFunc_GetLeagueDisplayName_ReturnValue' has a wrong offset!");
static_assert(offsetof(ShowdownDivisionLobbyPanel_C_Refresh, CallFunc_MakeLiteralText_ReturnValue) == 0x0000D8, "Member 'ShowdownDivisionLobbyPanel_C_Refresh::CallFunc_MakeLiteralText_ReturnValue' has a wrong offset!");
static_assert(offsetof(ShowdownDivisionLobbyPanel_C_Refresh, CallFunc_TextToUpper_ReturnValue) == 0x0000F0, "Member 'ShowdownDivisionLobbyPanel_C_Refresh::CallFunc_TextToUpper_ReturnValue' has a wrong offset!");
static_assert(offsetof(ShowdownDivisionLobbyPanel_C_Refresh, CallFunc_IsDivisionEvent_ReturnValue) == 0x000108, "Member 'ShowdownDivisionLobbyPanel_C_Refresh::CallFunc_IsDivisionEvent_ReturnValue' has a wrong offset!");
static_assert(offsetof(ShowdownDivisionLobbyPanel_C_Refresh, CallFunc_GetEventTimeState_ReturnValue) == 0x000109, "Member 'ShowdownDivisionLobbyPanel_C_Refresh::CallFunc_GetEventTimeState_ReturnValue' has a wrong offset!");
static_assert(offsetof(ShowdownDivisionLobbyPanel_C_Refresh, CallFunc_DoCalloutMFARequirement_ReturnValue) == 0x00010A, "Member 'ShowdownDivisionLobbyPanel_C_Refresh::CallFunc_DoCalloutMFARequirement_ReturnValue' has a wrong offset!");
static_assert(offsetof(ShowdownDivisionLobbyPanel_C_Refresh, CallFunc_DoCalloutMFARequirement_ReturnValue_1) == 0x00010B, "Member 'ShowdownDivisionLobbyPanel_C_Refresh::CallFunc_DoCalloutMFARequirement_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(ShowdownDivisionLobbyPanel_C_Refresh, CallFunc_GetTournamentMatchCap_ReturnValue) == 0x00010C, "Member 'ShowdownDivisionLobbyPanel_C_Refresh::CallFunc_GetTournamentMatchCap_ReturnValue' has a wrong offset!");
static_assert(offsetof(ShowdownDivisionLobbyPanel_C_Refresh, CallFunc_Greater_IntInt_ReturnValue) == 0x000110, "Member 'ShowdownDivisionLobbyPanel_C_Refresh::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(ShowdownDivisionLobbyPanel_C_Refresh, CallFunc_GetCurrentEventTeamNumMatchesPlayed_ReturnValue) == 0x000114, "Member 'ShowdownDivisionLobbyPanel_C_Refresh::CallFunc_GetCurrentEventTeamNumMatchesPlayed_ReturnValue' has a wrong offset!");
static_assert(offsetof(ShowdownDivisionLobbyPanel_C_Refresh, CallFunc_GetTournamentMatchCap_ReturnValue_1) == 0x000118, "Member 'ShowdownDivisionLobbyPanel_C_Refresh::CallFunc_GetTournamentMatchCap_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(ShowdownDivisionLobbyPanel_C_Refresh, Temp_byte_Variable_2) == 0x00011C, "Member 'ShowdownDivisionLobbyPanel_C_Refresh::Temp_byte_Variable_2' has a wrong offset!");
static_assert(offsetof(ShowdownDivisionLobbyPanel_C_Refresh, CallFunc_Subtract_IntInt_ReturnValue) == 0x000120, "Member 'ShowdownDivisionLobbyPanel_C_Refresh::CallFunc_Subtract_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(ShowdownDivisionLobbyPanel_C_Refresh, CallFunc_Conv_IntToInt64_ReturnValue) == 0x000128, "Member 'ShowdownDivisionLobbyPanel_C_Refresh::CallFunc_Conv_IntToInt64_ReturnValue' has a wrong offset!");
static_assert(offsetof(ShowdownDivisionLobbyPanel_C_Refresh, K2Node_MakeStruct_FormatArgumentData) == 0x000130, "Member 'ShowdownDivisionLobbyPanel_C_Refresh::K2Node_MakeStruct_FormatArgumentData' has a wrong offset!");
static_assert(offsetof(ShowdownDivisionLobbyPanel_C_Refresh, K2Node_MakeArray_Array) == 0x000180, "Member 'ShowdownDivisionLobbyPanel_C_Refresh::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(ShowdownDivisionLobbyPanel_C_Refresh, CallFunc_GetCurrentEventTeamNumMatchesPlayed_ReturnValue_1) == 0x000190, "Member 'ShowdownDivisionLobbyPanel_C_Refresh::CallFunc_GetCurrentEventTeamNumMatchesPlayed_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(ShowdownDivisionLobbyPanel_C_Refresh, CallFunc_Format_ReturnValue) == 0x000198, "Member 'ShowdownDivisionLobbyPanel_C_Refresh::CallFunc_Format_ReturnValue' has a wrong offset!");
static_assert(offsetof(ShowdownDivisionLobbyPanel_C_Refresh, CallFunc_GetTournamentMatchCap_ReturnValue_2) == 0x0001B0, "Member 'ShowdownDivisionLobbyPanel_C_Refresh::CallFunc_GetTournamentMatchCap_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(ShowdownDivisionLobbyPanel_C_Refresh, CallFunc_Subtract_IntInt_ReturnValue_1) == 0x0001B4, "Member 'ShowdownDivisionLobbyPanel_C_Refresh::CallFunc_Subtract_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(ShowdownDivisionLobbyPanel_C_Refresh, CallFunc_GreaterEqual_IntInt_ReturnValue) == 0x0001B8, "Member 'ShowdownDivisionLobbyPanel_C_Refresh::CallFunc_GreaterEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(ShowdownDivisionLobbyPanel_C_Refresh, CallFunc_BooleanAND_ReturnValue) == 0x0001B9, "Member 'ShowdownDivisionLobbyPanel_C_Refresh::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(ShowdownDivisionLobbyPanel_C_Refresh, CallFunc_BooleanOR_ReturnValue) == 0x0001BA, "Member 'ShowdownDivisionLobbyPanel_C_Refresh::CallFunc_BooleanOR_ReturnValue' has a wrong offset!");
static_assert(offsetof(ShowdownDivisionLobbyPanel_C_Refresh, Temp_bool_Variable_1) == 0x0001BB, "Member 'ShowdownDivisionLobbyPanel_C_Refresh::Temp_bool_Variable_1' has a wrong offset!");
static_assert(offsetof(ShowdownDivisionLobbyPanel_C_Refresh, Temp_real_Variable_2) == 0x0001C0, "Member 'ShowdownDivisionLobbyPanel_C_Refresh::Temp_real_Variable_2' has a wrong offset!");
static_assert(offsetof(ShowdownDivisionLobbyPanel_C_Refresh, K2Node_Select_Default_1) == 0x0001C8, "Member 'ShowdownDivisionLobbyPanel_C_Refresh::K2Node_Select_Default_1' has a wrong offset!");
static_assert(offsetof(ShowdownDivisionLobbyPanel_C_Refresh, CallFunc_MakeLiteralText_ReturnValue_1) == 0x0001D0, "Member 'ShowdownDivisionLobbyPanel_C_Refresh::CallFunc_MakeLiteralText_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(ShowdownDivisionLobbyPanel_C_Refresh, CallFunc_MakeLiteralText_ReturnValue_2) == 0x0001E8, "Member 'ShowdownDivisionLobbyPanel_C_Refresh::CallFunc_MakeLiteralText_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(ShowdownDivisionLobbyPanel_C_Refresh, K2Node_Select_Default_2) == 0x000200, "Member 'ShowdownDivisionLobbyPanel_C_Refresh::K2Node_Select_Default_2' has a wrong offset!");
static_assert(offsetof(ShowdownDivisionLobbyPanel_C_Refresh, CallFunc_SlotAsVerticalBoxSlot_ReturnValue) == 0x000218, "Member 'ShowdownDivisionLobbyPanel_C_Refresh::CallFunc_SlotAsVerticalBoxSlot_ReturnValue' has a wrong offset!");
static_assert(offsetof(ShowdownDivisionLobbyPanel_C_Refresh, CallFunc_PauseAnimation_ReturnValue) == 0x000220, "Member 'ShowdownDivisionLobbyPanel_C_Refresh::CallFunc_PauseAnimation_ReturnValue' has a wrong offset!");
static_assert(offsetof(ShowdownDivisionLobbyPanel_C_Refresh, K2Node_MakeStruct_Margin) == 0x000224, "Member 'ShowdownDivisionLobbyPanel_C_Refresh::K2Node_MakeStruct_Margin' has a wrong offset!");
static_assert(offsetof(ShowdownDivisionLobbyPanel_C_Refresh, CallFunc_GetStartTime_ReturnValue) == 0x000234, "Member 'ShowdownDivisionLobbyPanel_C_Refresh::CallFunc_GetStartTime_ReturnValue' has a wrong offset!");
static_assert(offsetof(ShowdownDivisionLobbyPanel_C_Refresh, CallFunc_LessEqual_DoubleDouble_ReturnValue) == 0x000238, "Member 'ShowdownDivisionLobbyPanel_C_Refresh::CallFunc_LessEqual_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(ShowdownDivisionLobbyPanel_C_Refresh, CallFunc_PauseAnimation_ReturnValue_1) == 0x00023C, "Member 'ShowdownDivisionLobbyPanel_C_Refresh::CallFunc_PauseAnimation_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(ShowdownDivisionLobbyPanel_C_Refresh, CallFunc_GetEndTime_ReturnValue) == 0x000240, "Member 'ShowdownDivisionLobbyPanel_C_Refresh::CallFunc_GetEndTime_ReturnValue' has a wrong offset!");
static_assert(offsetof(ShowdownDivisionLobbyPanel_C_Refresh, CallFunc_Add_DoubleDouble_ReturnValue) == 0x000248, "Member 'ShowdownDivisionLobbyPanel_C_Refresh::CallFunc_Add_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(ShowdownDivisionLobbyPanel_C_Refresh, CallFunc_Subtract_DoubleDouble_ReturnValue) == 0x000250, "Member 'ShowdownDivisionLobbyPanel_C_Refresh::CallFunc_Subtract_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(ShowdownDivisionLobbyPanel_C_Refresh, CallFunc_PlayAnimation_ReturnValue) == 0x000258, "Member 'ShowdownDivisionLobbyPanel_C_Refresh::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");
static_assert(offsetof(ShowdownDivisionLobbyPanel_C_Refresh, Temp_bool_Variable_2) == 0x000260, "Member 'ShowdownDivisionLobbyPanel_C_Refresh::Temp_bool_Variable_2' has a wrong offset!");
static_assert(offsetof(ShowdownDivisionLobbyPanel_C_Refresh, K2Node_Select_Default_3) == 0x000268, "Member 'ShowdownDivisionLobbyPanel_C_Refresh::K2Node_Select_Default_3' has a wrong offset!");
static_assert(offsetof(ShowdownDivisionLobbyPanel_C_Refresh, CallFunc_PlayAnimation_ReturnValue_1) == 0x000270, "Member 'ShowdownDivisionLobbyPanel_C_Refresh::CallFunc_PlayAnimation_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(ShowdownDivisionLobbyPanel_C_Refresh, CallFunc_GetEventId_ReturnValue) == 0x000278, "Member 'ShowdownDivisionLobbyPanel_C_Refresh::CallFunc_GetEventId_ReturnValue' has a wrong offset!");
static_assert(offsetof(ShowdownDivisionLobbyPanel_C_Refresh, CallFunc_EqualEqual_StrStr_ReturnValue) == 0x000288, "Member 'ShowdownDivisionLobbyPanel_C_Refresh::CallFunc_EqualEqual_StrStr_ReturnValue' has a wrong offset!");
static_assert(offsetof(ShowdownDivisionLobbyPanel_C_Refresh, K2Node_MakeStruct_Top_ImplicitCast) == 0x00028C, "Member 'ShowdownDivisionLobbyPanel_C_Refresh::K2Node_MakeStruct_Top_ImplicitCast' has a wrong offset!");
static_assert(offsetof(ShowdownDivisionLobbyPanel_C_Refresh, CallFunc_Subtract_DoubleDouble_B_ImplicitCast) == 0x000290, "Member 'ShowdownDivisionLobbyPanel_C_Refresh::CallFunc_Subtract_DoubleDouble_B_ImplicitCast' has a wrong offset!");
static_assert(offsetof(ShowdownDivisionLobbyPanel_C_Refresh, CallFunc_LessEqual_DoubleDouble_A_ImplicitCast) == 0x000298, "Member 'ShowdownDivisionLobbyPanel_C_Refresh::CallFunc_LessEqual_DoubleDouble_A_ImplicitCast' has a wrong offset!");
static_assert(offsetof(ShowdownDivisionLobbyPanel_C_Refresh, CallFunc_Add_DoubleDouble_B_ImplicitCast) == 0x0002A0, "Member 'ShowdownDivisionLobbyPanel_C_Refresh::CallFunc_Add_DoubleDouble_B_ImplicitCast' has a wrong offset!");
static_assert(offsetof(ShowdownDivisionLobbyPanel_C_Refresh, CallFunc_LessEqual_DoubleDouble_B_ImplicitCast) == 0x0002A8, "Member 'ShowdownDivisionLobbyPanel_C_Refresh::CallFunc_LessEqual_DoubleDouble_B_ImplicitCast' has a wrong offset!");
static_assert(offsetof(ShowdownDivisionLobbyPanel_C_Refresh, CallFunc_Add_DoubleDouble_A_ImplicitCast) == 0x0002B0, "Member 'ShowdownDivisionLobbyPanel_C_Refresh::CallFunc_Add_DoubleDouble_A_ImplicitCast' has a wrong offset!");
static_assert(offsetof(ShowdownDivisionLobbyPanel_C_Refresh, CallFunc_Subtract_DoubleDouble_A_ImplicitCast) == 0x0002B8, "Member 'ShowdownDivisionLobbyPanel_C_Refresh::CallFunc_Subtract_DoubleDouble_A_ImplicitCast' has a wrong offset!");
static_assert(offsetof(ShowdownDivisionLobbyPanel_C_Refresh, CallFunc_PlayAnimation_StartAtTime_ImplicitCast) == 0x0002C0, "Member 'ShowdownDivisionLobbyPanel_C_Refresh::CallFunc_PlayAnimation_StartAtTime_ImplicitCast' has a wrong offset!");
static_assert(offsetof(ShowdownDivisionLobbyPanel_C_Refresh, CallFunc_PlayAnimation_StartAtTime_ImplicitCast_1) == 0x0002C4, "Member 'ShowdownDivisionLobbyPanel_C_Refresh::CallFunc_PlayAnimation_StartAtTime_ImplicitCast_1' has a wrong offset!");

struct ShowdownDivisionLobbyPanel_C_RefreshDivisionData final
{
public:
	int32                                         TotalHypeForNextDivision;
	int32                                         TotalHype;
	int32                                         TotalNumberDivisions;
	int32                                         DivsionRank;
	int32                                         CallFunc_GetAmountEarnedWithinDivision_ReturnValue;
	float                                         CallFunc_Conv_IntToFloat_ReturnValue;
	int64                                         CallFunc_Conv_IntToInt64_ReturnValue;
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData;
	int64                                         CallFunc_Conv_IntToInt64_ReturnValue_1;
	int32                                         CallFunc_Subtract_IntInt_ReturnValue;
	uint8                                         Pad_7C[0x4];
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData_1;
	class FText                                   CallFunc_Conv_IntToText_ReturnValue;
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array;
	class FText                                   CallFunc_Conv_IntToText_ReturnValue_1;
	class FText                                   CallFunc_Format_ReturnValue;
	int32                                         CallFunc_GetTotalDivisionPoints_ReturnValue;
	int32                                         CallFunc_GetNumericalDisplayAmountForNextDivision_ReturnValue;
	int32                                         CallFunc_Add_IntInt_ReturnValue;
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue;
	uint8                                         Pad_135[0x3];
	int32                                         CallFunc_GetTotalNumberOfDivisions_ReturnValue;
	int32                                         CallFunc_Add_IntInt_ReturnValue_1;
	int32                                         CallFunc_GetDivisionRank_ReturnValue;
	uint8                                         Pad_144[0x4];
	int64                                         CallFunc_Conv_IntToInt64_ReturnValue_2;
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData_2;
	int32                                         CallFunc_GetRequiredAmountToAdvanceDivision_ReturnValue;
	uint8                                         Pad_1A4[0x4];
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array_1;
	float                                         CallFunc_Conv_IntToFloat_ReturnValue_1;
	uint8                                         Pad_1BC[0x4];
	class FText                                   CallFunc_Format_ReturnValue_1;
	double                                        CallFunc_Divide_DoubleDouble_ReturnValue;
	double                                        CallFunc_Divide_DoubleDouble_A_ImplicitCast;
	double                                        CallFunc_Divide_DoubleDouble_B_ImplicitCast;
	float                                         CallFunc_SetPercent_InPercent_ImplicitCast;
};
static_assert(alignof(ShowdownDivisionLobbyPanel_C_RefreshDivisionData) == 0x000008, "Wrong alignment on ShowdownDivisionLobbyPanel_C_RefreshDivisionData");
static_assert(sizeof(ShowdownDivisionLobbyPanel_C_RefreshDivisionData) == 0x0001F8, "Wrong size on ShowdownDivisionLobbyPanel_C_RefreshDivisionData");
static_assert(offsetof(ShowdownDivisionLobbyPanel_C_RefreshDivisionData, TotalHypeForNextDivision) == 0x000000, "Member 'ShowdownDivisionLobbyPanel_C_RefreshDivisionData::TotalHypeForNextDivision' has a wrong offset!");
static_assert(offsetof(ShowdownDivisionLobbyPanel_C_RefreshDivisionData, TotalHype) == 0x000004, "Member 'ShowdownDivisionLobbyPanel_C_RefreshDivisionData::TotalHype' has a wrong offset!");
static_assert(offsetof(ShowdownDivisionLobbyPanel_C_RefreshDivisionData, TotalNumberDivisions) == 0x000008, "Member 'ShowdownDivisionLobbyPanel_C_RefreshDivisionData::TotalNumberDivisions' has a wrong offset!");
static_assert(offsetof(ShowdownDivisionLobbyPanel_C_RefreshDivisionData, DivsionRank) == 0x00000C, "Member 'ShowdownDivisionLobbyPanel_C_RefreshDivisionData::DivsionRank' has a wrong offset!");
static_assert(offsetof(ShowdownDivisionLobbyPanel_C_RefreshDivisionData, CallFunc_GetAmountEarnedWithinDivision_ReturnValue) == 0x000010, "Member 'ShowdownDivisionLobbyPanel_C_RefreshDivisionData::CallFunc_GetAmountEarnedWithinDivision_ReturnValue' has a wrong offset!");
static_assert(offsetof(ShowdownDivisionLobbyPanel_C_RefreshDivisionData, CallFunc_Conv_IntToFloat_ReturnValue) == 0x000014, "Member 'ShowdownDivisionLobbyPanel_C_RefreshDivisionData::CallFunc_Conv_IntToFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(ShowdownDivisionLobbyPanel_C_RefreshDivisionData, CallFunc_Conv_IntToInt64_ReturnValue) == 0x000018, "Member 'ShowdownDivisionLobbyPanel_C_RefreshDivisionData::CallFunc_Conv_IntToInt64_ReturnValue' has a wrong offset!");
static_assert(offsetof(ShowdownDivisionLobbyPanel_C_RefreshDivisionData, K2Node_MakeStruct_FormatArgumentData) == 0x000020, "Member 'ShowdownDivisionLobbyPanel_C_RefreshDivisionData::K2Node_MakeStruct_FormatArgumentData' has a wrong offset!");
static_assert(offsetof(ShowdownDivisionLobbyPanel_C_RefreshDivisionData, CallFunc_Conv_IntToInt64_ReturnValue_1) == 0x000070, "Member 'ShowdownDivisionLobbyPanel_C_RefreshDivisionData::CallFunc_Conv_IntToInt64_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(ShowdownDivisionLobbyPanel_C_RefreshDivisionData, CallFunc_Subtract_IntInt_ReturnValue) == 0x000078, "Member 'ShowdownDivisionLobbyPanel_C_RefreshDivisionData::CallFunc_Subtract_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(ShowdownDivisionLobbyPanel_C_RefreshDivisionData, K2Node_MakeStruct_FormatArgumentData_1) == 0x000080, "Member 'ShowdownDivisionLobbyPanel_C_RefreshDivisionData::K2Node_MakeStruct_FormatArgumentData_1' has a wrong offset!");
static_assert(offsetof(ShowdownDivisionLobbyPanel_C_RefreshDivisionData, CallFunc_Conv_IntToText_ReturnValue) == 0x0000D0, "Member 'ShowdownDivisionLobbyPanel_C_RefreshDivisionData::CallFunc_Conv_IntToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(ShowdownDivisionLobbyPanel_C_RefreshDivisionData, K2Node_MakeArray_Array) == 0x0000E8, "Member 'ShowdownDivisionLobbyPanel_C_RefreshDivisionData::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(ShowdownDivisionLobbyPanel_C_RefreshDivisionData, CallFunc_Conv_IntToText_ReturnValue_1) == 0x0000F8, "Member 'ShowdownDivisionLobbyPanel_C_RefreshDivisionData::CallFunc_Conv_IntToText_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(ShowdownDivisionLobbyPanel_C_RefreshDivisionData, CallFunc_Format_ReturnValue) == 0x000110, "Member 'ShowdownDivisionLobbyPanel_C_RefreshDivisionData::CallFunc_Format_ReturnValue' has a wrong offset!");
static_assert(offsetof(ShowdownDivisionLobbyPanel_C_RefreshDivisionData, CallFunc_GetTotalDivisionPoints_ReturnValue) == 0x000128, "Member 'ShowdownDivisionLobbyPanel_C_RefreshDivisionData::CallFunc_GetTotalDivisionPoints_ReturnValue' has a wrong offset!");
static_assert(offsetof(ShowdownDivisionLobbyPanel_C_RefreshDivisionData, CallFunc_GetNumericalDisplayAmountForNextDivision_ReturnValue) == 0x00012C, "Member 'ShowdownDivisionLobbyPanel_C_RefreshDivisionData::CallFunc_GetNumericalDisplayAmountForNextDivision_ReturnValue' has a wrong offset!");
static_assert(offsetof(ShowdownDivisionLobbyPanel_C_RefreshDivisionData, CallFunc_Add_IntInt_ReturnValue) == 0x000130, "Member 'ShowdownDivisionLobbyPanel_C_RefreshDivisionData::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(ShowdownDivisionLobbyPanel_C_RefreshDivisionData, CallFunc_EqualEqual_IntInt_ReturnValue) == 0x000134, "Member 'ShowdownDivisionLobbyPanel_C_RefreshDivisionData::CallFunc_EqualEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(ShowdownDivisionLobbyPanel_C_RefreshDivisionData, CallFunc_GetTotalNumberOfDivisions_ReturnValue) == 0x000138, "Member 'ShowdownDivisionLobbyPanel_C_RefreshDivisionData::CallFunc_GetTotalNumberOfDivisions_ReturnValue' has a wrong offset!");
static_assert(offsetof(ShowdownDivisionLobbyPanel_C_RefreshDivisionData, CallFunc_Add_IntInt_ReturnValue_1) == 0x00013C, "Member 'ShowdownDivisionLobbyPanel_C_RefreshDivisionData::CallFunc_Add_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(ShowdownDivisionLobbyPanel_C_RefreshDivisionData, CallFunc_GetDivisionRank_ReturnValue) == 0x000140, "Member 'ShowdownDivisionLobbyPanel_C_RefreshDivisionData::CallFunc_GetDivisionRank_ReturnValue' has a wrong offset!");
static_assert(offsetof(ShowdownDivisionLobbyPanel_C_RefreshDivisionData, CallFunc_Conv_IntToInt64_ReturnValue_2) == 0x000148, "Member 'ShowdownDivisionLobbyPanel_C_RefreshDivisionData::CallFunc_Conv_IntToInt64_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(ShowdownDivisionLobbyPanel_C_RefreshDivisionData, K2Node_MakeStruct_FormatArgumentData_2) == 0x000150, "Member 'ShowdownDivisionLobbyPanel_C_RefreshDivisionData::K2Node_MakeStruct_FormatArgumentData_2' has a wrong offset!");
static_assert(offsetof(ShowdownDivisionLobbyPanel_C_RefreshDivisionData, CallFunc_GetRequiredAmountToAdvanceDivision_ReturnValue) == 0x0001A0, "Member 'ShowdownDivisionLobbyPanel_C_RefreshDivisionData::CallFunc_GetRequiredAmountToAdvanceDivision_ReturnValue' has a wrong offset!");
static_assert(offsetof(ShowdownDivisionLobbyPanel_C_RefreshDivisionData, K2Node_MakeArray_Array_1) == 0x0001A8, "Member 'ShowdownDivisionLobbyPanel_C_RefreshDivisionData::K2Node_MakeArray_Array_1' has a wrong offset!");
static_assert(offsetof(ShowdownDivisionLobbyPanel_C_RefreshDivisionData, CallFunc_Conv_IntToFloat_ReturnValue_1) == 0x0001B8, "Member 'ShowdownDivisionLobbyPanel_C_RefreshDivisionData::CallFunc_Conv_IntToFloat_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(ShowdownDivisionLobbyPanel_C_RefreshDivisionData, CallFunc_Format_ReturnValue_1) == 0x0001C0, "Member 'ShowdownDivisionLobbyPanel_C_RefreshDivisionData::CallFunc_Format_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(ShowdownDivisionLobbyPanel_C_RefreshDivisionData, CallFunc_Divide_DoubleDouble_ReturnValue) == 0x0001D8, "Member 'ShowdownDivisionLobbyPanel_C_RefreshDivisionData::CallFunc_Divide_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(ShowdownDivisionLobbyPanel_C_RefreshDivisionData, CallFunc_Divide_DoubleDouble_A_ImplicitCast) == 0x0001E0, "Member 'ShowdownDivisionLobbyPanel_C_RefreshDivisionData::CallFunc_Divide_DoubleDouble_A_ImplicitCast' has a wrong offset!");
static_assert(offsetof(ShowdownDivisionLobbyPanel_C_RefreshDivisionData, CallFunc_Divide_DoubleDouble_B_ImplicitCast) == 0x0001E8, "Member 'ShowdownDivisionLobbyPanel_C_RefreshDivisionData::CallFunc_Divide_DoubleDouble_B_ImplicitCast' has a wrong offset!");
static_assert(offsetof(ShowdownDivisionLobbyPanel_C_RefreshDivisionData, CallFunc_SetPercent_InPercent_ImplicitCast) == 0x0001F0, "Member 'ShowdownDivisionLobbyPanel_C_RefreshDivisionData::CallFunc_SetPercent_InPercent_ImplicitCast' has a wrong offset!");

}
