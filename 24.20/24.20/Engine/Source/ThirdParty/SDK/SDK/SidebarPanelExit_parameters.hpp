#pragma once

#include "Basic.hpp"

#include "FortniteGame_structs.hpp"

namespace SDK::Params
{

struct SidebarPanelExit_C_BndEvt__SidebarPanelExit_Button_ExitGame_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature final
{
public:
	class UCommonButtonLegacy*                    Button;
};
static_assert(alignof(SidebarPanelExit_C_BndEvt__SidebarPanelExit_Button_ExitGame_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature) == 0x000008, "Wrong alignment on SidebarPanelExit_C_BndEvt__SidebarPanelExit_Button_ExitGame_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature");
static_assert(sizeof(SidebarPanelExit_C_BndEvt__SidebarPanelExit_Button_ExitGame_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature) == 0x000008, "Wrong size on SidebarPanelExit_C_BndEvt__SidebarPanelExit_Button_ExitGame_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature");
static_assert(offsetof(SidebarPanelExit_C_BndEvt__SidebarPanelExit_Button_ExitGame_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature, Button) == 0x000000, "Member 'SidebarPanelExit_C_BndEvt__SidebarPanelExit_Button_ExitGame_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature::Button' has a wrong offset!");

struct SidebarPanelExit_C_BndEvt__SidebarPanelExit_Button_Logout_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature final
{
public:
	class UCommonButtonLegacy*                    Button;
};
static_assert(alignof(SidebarPanelExit_C_BndEvt__SidebarPanelExit_Button_Logout_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature) == 0x000008, "Wrong alignment on SidebarPanelExit_C_BndEvt__SidebarPanelExit_Button_Logout_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature");
static_assert(sizeof(SidebarPanelExit_C_BndEvt__SidebarPanelExit_Button_Logout_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature) == 0x000008, "Wrong size on SidebarPanelExit_C_BndEvt__SidebarPanelExit_Button_Logout_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature");
static_assert(offsetof(SidebarPanelExit_C_BndEvt__SidebarPanelExit_Button_Logout_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature, Button) == 0x000000, "Member 'SidebarPanelExit_C_BndEvt__SidebarPanelExit_Button_Logout_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature::Button' has a wrong offset!");

struct SidebarPanelExit_C_DialogResult_72E03FD949433FCC7FD537BE143F3FA1 final
{
public:
	EFortDialogResult                             Result;
	uint8                                         Pad_1[0x3];
	class FName                                   ResultName;
};
static_assert(alignof(SidebarPanelExit_C_DialogResult_72E03FD949433FCC7FD537BE143F3FA1) == 0x000004, "Wrong alignment on SidebarPanelExit_C_DialogResult_72E03FD949433FCC7FD537BE143F3FA1");
static_assert(sizeof(SidebarPanelExit_C_DialogResult_72E03FD949433FCC7FD537BE143F3FA1) == 0x000008, "Wrong size on SidebarPanelExit_C_DialogResult_72E03FD949433FCC7FD537BE143F3FA1");
static_assert(offsetof(SidebarPanelExit_C_DialogResult_72E03FD949433FCC7FD537BE143F3FA1, Result) == 0x000000, "Member 'SidebarPanelExit_C_DialogResult_72E03FD949433FCC7FD537BE143F3FA1::Result' has a wrong offset!");
static_assert(offsetof(SidebarPanelExit_C_DialogResult_72E03FD949433FCC7FD537BE143F3FA1, ResultName) == 0x000004, "Member 'SidebarPanelExit_C_DialogResult_72E03FD949433FCC7FD537BE143F3FA1::ResultName' has a wrong offset!");

struct SidebarPanelExit_C_DialogResult_D6C37C7D45574B8D0C2F22B5DE53C01B final
{
public:
	EFortDialogResult                             Result;
	uint8                                         Pad_1[0x3];
	class FName                                   ResultName;
};
static_assert(alignof(SidebarPanelExit_C_DialogResult_D6C37C7D45574B8D0C2F22B5DE53C01B) == 0x000004, "Wrong alignment on SidebarPanelExit_C_DialogResult_D6C37C7D45574B8D0C2F22B5DE53C01B");
static_assert(sizeof(SidebarPanelExit_C_DialogResult_D6C37C7D45574B8D0C2F22B5DE53C01B) == 0x000008, "Wrong size on SidebarPanelExit_C_DialogResult_D6C37C7D45574B8D0C2F22B5DE53C01B");
static_assert(offsetof(SidebarPanelExit_C_DialogResult_D6C37C7D45574B8D0C2F22B5DE53C01B, Result) == 0x000000, "Member 'SidebarPanelExit_C_DialogResult_D6C37C7D45574B8D0C2F22B5DE53C01B::Result' has a wrong offset!");
static_assert(offsetof(SidebarPanelExit_C_DialogResult_D6C37C7D45574B8D0C2F22B5DE53C01B, ResultName) == 0x000004, "Member 'SidebarPanelExit_C_DialogResult_D6C37C7D45574B8D0C2F22B5DE53C01B::ResultName' has a wrong offset!");

struct SidebarPanelExit_C_ExecuteUbergraph_SidebarPanelExit final
{
public:
	int32                                         EntryPoint;
	EFortDialogResult                             K2Node_CustomEvent_Result_1;
	uint8                                         Pad_5[0x3];
	class FName                                   K2Node_CustomEvent_ResultName_1;
	class FName                                   Temp_name_Variable;
	EFortDialogResult                             Temp_byte_Variable;
	bool                                          K2Node_SwitchEnum_CmpSuccess;
	uint8                                         Pad_12[0x6];
	class UFortAsyncAction_ShowConfirmation_NUI*  CallFunc_ShowSimpleConfirmationDialog_NUI_ReturnValue;
	TDelegate<void(EFortDialogResult Result, class FName ResultName)> K2Node_CreateDelegate_OutputDelegate;
	bool                                          CallFunc_IsValid_ReturnValue;
	EFortDialogResult                             K2Node_CustomEvent_Result;
	uint8                                         Pad_2E[0x2];
	class FName                                   K2Node_CustomEvent_ResultName;
	class FName                                   Temp_name_Variable_1;
	EFortDialogResult                             Temp_byte_Variable_1;
	bool                                          K2Node_SwitchEnum_CmpSuccess_1;
	uint8                                         Pad_3A[0x6];
	class UFortAsyncAction_ShowConfirmation_NUI*  CallFunc_ShowSimpleConfirmationDialog_NUI_ReturnValue_1;
	class UFortGlobalUIContext*                   CallFunc_GetContext_ReturnValue;
	bool                                          CallFunc_IsValid_ReturnValue_1;
	bool                                          Temp_bool_Variable;
	bool                                          Temp_bool_Variable_1;
	uint8                                         Pad_53[0x5];
	class UCommonButtonLegacy*                    K2Node_ComponentBoundEvent_Button_1;
	class UCommonButtonLegacy*                    K2Node_ComponentBoundEvent_Button;
	TDelegate<void(EFortDialogResult Result, class FName ResultName)> K2Node_CreateDelegate_OutputDelegate_1;
	uint8                                         Pad_74[0x4];
	class UFortGlobalUIContext*                   CallFunc_GetContext_ReturnValue_1;
	bool                                          K2Node_Event_bAllowLogout;
	bool                                          K2Node_Event_bAllowQuit;
	uint8                                         Pad_82[0x6];
	class FText                                   K2Node_Select_Default;
	class FText                                   K2Node_Select_Default_1;
};
static_assert(alignof(SidebarPanelExit_C_ExecuteUbergraph_SidebarPanelExit) == 0x000008, "Wrong alignment on SidebarPanelExit_C_ExecuteUbergraph_SidebarPanelExit");
static_assert(sizeof(SidebarPanelExit_C_ExecuteUbergraph_SidebarPanelExit) == 0x0000B8, "Wrong size on SidebarPanelExit_C_ExecuteUbergraph_SidebarPanelExit");
static_assert(offsetof(SidebarPanelExit_C_ExecuteUbergraph_SidebarPanelExit, EntryPoint) == 0x000000, "Member 'SidebarPanelExit_C_ExecuteUbergraph_SidebarPanelExit::EntryPoint' has a wrong offset!");
static_assert(offsetof(SidebarPanelExit_C_ExecuteUbergraph_SidebarPanelExit, K2Node_CustomEvent_Result_1) == 0x000004, "Member 'SidebarPanelExit_C_ExecuteUbergraph_SidebarPanelExit::K2Node_CustomEvent_Result_1' has a wrong offset!");
static_assert(offsetof(SidebarPanelExit_C_ExecuteUbergraph_SidebarPanelExit, K2Node_CustomEvent_ResultName_1) == 0x000008, "Member 'SidebarPanelExit_C_ExecuteUbergraph_SidebarPanelExit::K2Node_CustomEvent_ResultName_1' has a wrong offset!");
static_assert(offsetof(SidebarPanelExit_C_ExecuteUbergraph_SidebarPanelExit, Temp_name_Variable) == 0x00000C, "Member 'SidebarPanelExit_C_ExecuteUbergraph_SidebarPanelExit::Temp_name_Variable' has a wrong offset!");
static_assert(offsetof(SidebarPanelExit_C_ExecuteUbergraph_SidebarPanelExit, Temp_byte_Variable) == 0x000010, "Member 'SidebarPanelExit_C_ExecuteUbergraph_SidebarPanelExit::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(SidebarPanelExit_C_ExecuteUbergraph_SidebarPanelExit, K2Node_SwitchEnum_CmpSuccess) == 0x000011, "Member 'SidebarPanelExit_C_ExecuteUbergraph_SidebarPanelExit::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");
static_assert(offsetof(SidebarPanelExit_C_ExecuteUbergraph_SidebarPanelExit, CallFunc_ShowSimpleConfirmationDialog_NUI_ReturnValue) == 0x000018, "Member 'SidebarPanelExit_C_ExecuteUbergraph_SidebarPanelExit::CallFunc_ShowSimpleConfirmationDialog_NUI_ReturnValue' has a wrong offset!");
static_assert(offsetof(SidebarPanelExit_C_ExecuteUbergraph_SidebarPanelExit, K2Node_CreateDelegate_OutputDelegate) == 0x000020, "Member 'SidebarPanelExit_C_ExecuteUbergraph_SidebarPanelExit::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(SidebarPanelExit_C_ExecuteUbergraph_SidebarPanelExit, CallFunc_IsValid_ReturnValue) == 0x00002C, "Member 'SidebarPanelExit_C_ExecuteUbergraph_SidebarPanelExit::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(SidebarPanelExit_C_ExecuteUbergraph_SidebarPanelExit, K2Node_CustomEvent_Result) == 0x00002D, "Member 'SidebarPanelExit_C_ExecuteUbergraph_SidebarPanelExit::K2Node_CustomEvent_Result' has a wrong offset!");
static_assert(offsetof(SidebarPanelExit_C_ExecuteUbergraph_SidebarPanelExit, K2Node_CustomEvent_ResultName) == 0x000030, "Member 'SidebarPanelExit_C_ExecuteUbergraph_SidebarPanelExit::K2Node_CustomEvent_ResultName' has a wrong offset!");
static_assert(offsetof(SidebarPanelExit_C_ExecuteUbergraph_SidebarPanelExit, Temp_name_Variable_1) == 0x000034, "Member 'SidebarPanelExit_C_ExecuteUbergraph_SidebarPanelExit::Temp_name_Variable_1' has a wrong offset!");
static_assert(offsetof(SidebarPanelExit_C_ExecuteUbergraph_SidebarPanelExit, Temp_byte_Variable_1) == 0x000038, "Member 'SidebarPanelExit_C_ExecuteUbergraph_SidebarPanelExit::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(SidebarPanelExit_C_ExecuteUbergraph_SidebarPanelExit, K2Node_SwitchEnum_CmpSuccess_1) == 0x000039, "Member 'SidebarPanelExit_C_ExecuteUbergraph_SidebarPanelExit::K2Node_SwitchEnum_CmpSuccess_1' has a wrong offset!");
static_assert(offsetof(SidebarPanelExit_C_ExecuteUbergraph_SidebarPanelExit, CallFunc_ShowSimpleConfirmationDialog_NUI_ReturnValue_1) == 0x000040, "Member 'SidebarPanelExit_C_ExecuteUbergraph_SidebarPanelExit::CallFunc_ShowSimpleConfirmationDialog_NUI_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(SidebarPanelExit_C_ExecuteUbergraph_SidebarPanelExit, CallFunc_GetContext_ReturnValue) == 0x000048, "Member 'SidebarPanelExit_C_ExecuteUbergraph_SidebarPanelExit::CallFunc_GetContext_ReturnValue' has a wrong offset!");
static_assert(offsetof(SidebarPanelExit_C_ExecuteUbergraph_SidebarPanelExit, CallFunc_IsValid_ReturnValue_1) == 0x000050, "Member 'SidebarPanelExit_C_ExecuteUbergraph_SidebarPanelExit::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(SidebarPanelExit_C_ExecuteUbergraph_SidebarPanelExit, Temp_bool_Variable) == 0x000051, "Member 'SidebarPanelExit_C_ExecuteUbergraph_SidebarPanelExit::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(SidebarPanelExit_C_ExecuteUbergraph_SidebarPanelExit, Temp_bool_Variable_1) == 0x000052, "Member 'SidebarPanelExit_C_ExecuteUbergraph_SidebarPanelExit::Temp_bool_Variable_1' has a wrong offset!");
static_assert(offsetof(SidebarPanelExit_C_ExecuteUbergraph_SidebarPanelExit, K2Node_ComponentBoundEvent_Button_1) == 0x000058, "Member 'SidebarPanelExit_C_ExecuteUbergraph_SidebarPanelExit::K2Node_ComponentBoundEvent_Button_1' has a wrong offset!");
static_assert(offsetof(SidebarPanelExit_C_ExecuteUbergraph_SidebarPanelExit, K2Node_ComponentBoundEvent_Button) == 0x000060, "Member 'SidebarPanelExit_C_ExecuteUbergraph_SidebarPanelExit::K2Node_ComponentBoundEvent_Button' has a wrong offset!");
static_assert(offsetof(SidebarPanelExit_C_ExecuteUbergraph_SidebarPanelExit, K2Node_CreateDelegate_OutputDelegate_1) == 0x000068, "Member 'SidebarPanelExit_C_ExecuteUbergraph_SidebarPanelExit::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(SidebarPanelExit_C_ExecuteUbergraph_SidebarPanelExit, CallFunc_GetContext_ReturnValue_1) == 0x000078, "Member 'SidebarPanelExit_C_ExecuteUbergraph_SidebarPanelExit::CallFunc_GetContext_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(SidebarPanelExit_C_ExecuteUbergraph_SidebarPanelExit, K2Node_Event_bAllowLogout) == 0x000080, "Member 'SidebarPanelExit_C_ExecuteUbergraph_SidebarPanelExit::K2Node_Event_bAllowLogout' has a wrong offset!");
static_assert(offsetof(SidebarPanelExit_C_ExecuteUbergraph_SidebarPanelExit, K2Node_Event_bAllowQuit) == 0x000081, "Member 'SidebarPanelExit_C_ExecuteUbergraph_SidebarPanelExit::K2Node_Event_bAllowQuit' has a wrong offset!");
static_assert(offsetof(SidebarPanelExit_C_ExecuteUbergraph_SidebarPanelExit, K2Node_Select_Default) == 0x000088, "Member 'SidebarPanelExit_C_ExecuteUbergraph_SidebarPanelExit::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(SidebarPanelExit_C_ExecuteUbergraph_SidebarPanelExit, K2Node_Select_Default_1) == 0x0000A0, "Member 'SidebarPanelExit_C_ExecuteUbergraph_SidebarPanelExit::K2Node_Select_Default_1' has a wrong offset!");

struct SidebarPanelExit_C_UpdateNoEnabledButtonsText final
{
public:
	bool                                          bAllowLogout;
	bool                                          bAllowQuit;
};
static_assert(alignof(SidebarPanelExit_C_UpdateNoEnabledButtonsText) == 0x000001, "Wrong alignment on SidebarPanelExit_C_UpdateNoEnabledButtonsText");
static_assert(sizeof(SidebarPanelExit_C_UpdateNoEnabledButtonsText) == 0x000002, "Wrong size on SidebarPanelExit_C_UpdateNoEnabledButtonsText");
static_assert(offsetof(SidebarPanelExit_C_UpdateNoEnabledButtonsText, bAllowLogout) == 0x000000, "Member 'SidebarPanelExit_C_UpdateNoEnabledButtonsText::bAllowLogout' has a wrong offset!");
static_assert(offsetof(SidebarPanelExit_C_UpdateNoEnabledButtonsText, bAllowQuit) == 0x000001, "Member 'SidebarPanelExit_C_UpdateNoEnabledButtonsText::bAllowQuit' has a wrong offset!");

}
