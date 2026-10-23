#pragma once

#include "Basic.hpp"

#include "FortniteGame_structs.hpp"
#include "InputCore_structs.hpp"
#include "Engine_structs.hpp"
#include "SlateCore_structs.hpp"
#include "UMG_structs.hpp"

namespace SDK::Params
{

struct ConfirmationWindow_C_BndEvt__CloseButton_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature final
{
public:
	class UCommonButtonLegacy*                    Button;
};
static_assert(alignof(ConfirmationWindow_C_BndEvt__CloseButton_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature) == 0x000008, "Wrong alignment on ConfirmationWindow_C_BndEvt__CloseButton_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature");
static_assert(sizeof(ConfirmationWindow_C_BndEvt__CloseButton_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature) == 0x000008, "Wrong size on ConfirmationWindow_C_BndEvt__CloseButton_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature");
static_assert(offsetof(ConfirmationWindow_C_BndEvt__CloseButton_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature, Button) == 0x000000, "Member 'ConfirmationWindow_C_BndEvt__CloseButton_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature::Button' has a wrong offset!");

struct ConfirmationWindow_C_ConfigureConfirmationButton final
{
public:
	class UCommonButtonBase*                      Button;
	uint8                                         Pad_8[0x8];
	struct FConfirmationDialogAction              Action;
	bool                                          bSimpleConfirm;
	uint8                                         Pad_101[0x7];
	class UWBP_UIKit_ButtonCTA_Base_C*            CTAButton;
	class UFortGlobalUIContext*                   CallFunc_GetContext_ReturnValue;
	class UWBP_UIKit_ButtonCTA_Base_C*            K2Node_DynamicCast_AsWBP_UIKit_Button_CTA_Base;
	bool                                          K2Node_DynamicCast_bSuccess;
	uint8                                         Pad_121[0x7];
	struct FDataTableRowHandle                    CallFunc_GetInputAction_ReturnValue;
	bool                                          CallFunc_TextIsEmpty_ReturnValue;
	uint8                                         Pad_139[0x3];
	int32                                         CallFunc_GetInputPriority_ReturnValue;
};
static_assert(alignof(ConfirmationWindow_C_ConfigureConfirmationButton) == 0x000010, "Wrong alignment on ConfirmationWindow_C_ConfigureConfirmationButton");
static_assert(sizeof(ConfirmationWindow_C_ConfigureConfirmationButton) == 0x000140, "Wrong size on ConfirmationWindow_C_ConfigureConfirmationButton");
static_assert(offsetof(ConfirmationWindow_C_ConfigureConfirmationButton, Button) == 0x000000, "Member 'ConfirmationWindow_C_ConfigureConfirmationButton::Button' has a wrong offset!");
static_assert(offsetof(ConfirmationWindow_C_ConfigureConfirmationButton, Action) == 0x000010, "Member 'ConfirmationWindow_C_ConfigureConfirmationButton::Action' has a wrong offset!");
static_assert(offsetof(ConfirmationWindow_C_ConfigureConfirmationButton, bSimpleConfirm) == 0x000100, "Member 'ConfirmationWindow_C_ConfigureConfirmationButton::bSimpleConfirm' has a wrong offset!");
static_assert(offsetof(ConfirmationWindow_C_ConfigureConfirmationButton, CTAButton) == 0x000108, "Member 'ConfirmationWindow_C_ConfigureConfirmationButton::CTAButton' has a wrong offset!");
static_assert(offsetof(ConfirmationWindow_C_ConfigureConfirmationButton, CallFunc_GetContext_ReturnValue) == 0x000110, "Member 'ConfirmationWindow_C_ConfigureConfirmationButton::CallFunc_GetContext_ReturnValue' has a wrong offset!");
static_assert(offsetof(ConfirmationWindow_C_ConfigureConfirmationButton, K2Node_DynamicCast_AsWBP_UIKit_Button_CTA_Base) == 0x000118, "Member 'ConfirmationWindow_C_ConfigureConfirmationButton::K2Node_DynamicCast_AsWBP_UIKit_Button_CTA_Base' has a wrong offset!");
static_assert(offsetof(ConfirmationWindow_C_ConfigureConfirmationButton, K2Node_DynamicCast_bSuccess) == 0x000120, "Member 'ConfirmationWindow_C_ConfigureConfirmationButton::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(ConfirmationWindow_C_ConfigureConfirmationButton, CallFunc_GetInputAction_ReturnValue) == 0x000128, "Member 'ConfirmationWindow_C_ConfigureConfirmationButton::CallFunc_GetInputAction_ReturnValue' has a wrong offset!");
static_assert(offsetof(ConfirmationWindow_C_ConfigureConfirmationButton, CallFunc_TextIsEmpty_ReturnValue) == 0x000138, "Member 'ConfirmationWindow_C_ConfigureConfirmationButton::CallFunc_TextIsEmpty_ReturnValue' has a wrong offset!");
static_assert(offsetof(ConfirmationWindow_C_ConfigureConfirmationButton, CallFunc_GetInputPriority_ReturnValue) == 0x00013C, "Member 'ConfirmationWindow_C_ConfigureConfirmationButton::CallFunc_GetInputPriority_ReturnValue' has a wrong offset!");

struct ConfirmationWindow_C_ConfigureDeclineButton final
{
public:
	class UCommonButtonBase*                      Button;
};
static_assert(alignof(ConfirmationWindow_C_ConfigureDeclineButton) == 0x000008, "Wrong alignment on ConfirmationWindow_C_ConfigureDeclineButton");
static_assert(sizeof(ConfirmationWindow_C_ConfigureDeclineButton) == 0x000008, "Wrong size on ConfirmationWindow_C_ConfigureDeclineButton");
static_assert(offsetof(ConfirmationWindow_C_ConfigureDeclineButton, Button) == 0x000000, "Member 'ConfirmationWindow_C_ConfigureDeclineButton::Button' has a wrong offset!");

struct ConfirmationWindow_C_ExecuteUbergraph_ConfirmationWindow final
{
public:
	int32                                         EntryPoint;
	bool                                          Temp_bool_Variable;
	uint8                                         Pad_5[0x3];
	TArray<class UUserWidget*>                    CallFunc_GetAllEntries_ReturnValue;
	double                                        Temp_real_Variable;
	int32                                         CallFunc_Array_Length_ReturnValue;
	uint8                                         Pad_24[0x4];
	double                                        Temp_real_Variable_1;
	int32                                         Temp_int_Array_Index_Variable;
	uint8                                         Pad_34[0x4];
	class UUserWidget*                            CallFunc_Array_Get_Item;
	class UWBP_UIKit_ButtonCTA_Base_C*            K2Node_DynamicCast_AsWBP_UIKit_Button_CTA_Base;
	bool                                          K2Node_DynamicCast_bSuccess;
	uint8                                         Pad_49[0x7];
	struct FFortDialogDescription_NUI             CallFunc_GetConfirmationDescription_ReturnValue;
	class UCommonButtonBase*                      K2Node_Event_Button;
	class UCommonButtonLegacy*                    K2Node_ComponentBoundEvent_Button;
	bool                                          CallFunc_IsMobileGame_ReturnValue;
	bool                                          K2Node_Event_IsDesignTime;
	uint8                                         Pad_1C2[0x2];
	int32                                         Temp_int_Loop_Counter_Variable;
	double                                        K2Node_Select_Default;
	bool                                          CallFunc_Less_IntInt_ReturnValue;
	uint8                                         Pad_1D1[0x3];
	int32                                         CallFunc_Add_IntInt_ReturnValue;
	class UUMGSequencePlayer*                     CallFunc_PlayAnimationForward_ReturnValue;
	float                                         CallFunc_SetMinDesiredWidth_InMinDesiredWidth_ImplicitCast;
};
static_assert(alignof(ConfirmationWindow_C_ExecuteUbergraph_ConfirmationWindow) == 0x000010, "Wrong alignment on ConfirmationWindow_C_ExecuteUbergraph_ConfirmationWindow");
static_assert(sizeof(ConfirmationWindow_C_ExecuteUbergraph_ConfirmationWindow) == 0x0001F0, "Wrong size on ConfirmationWindow_C_ExecuteUbergraph_ConfirmationWindow");
static_assert(offsetof(ConfirmationWindow_C_ExecuteUbergraph_ConfirmationWindow, EntryPoint) == 0x000000, "Member 'ConfirmationWindow_C_ExecuteUbergraph_ConfirmationWindow::EntryPoint' has a wrong offset!");
static_assert(offsetof(ConfirmationWindow_C_ExecuteUbergraph_ConfirmationWindow, Temp_bool_Variable) == 0x000004, "Member 'ConfirmationWindow_C_ExecuteUbergraph_ConfirmationWindow::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(ConfirmationWindow_C_ExecuteUbergraph_ConfirmationWindow, CallFunc_GetAllEntries_ReturnValue) == 0x000008, "Member 'ConfirmationWindow_C_ExecuteUbergraph_ConfirmationWindow::CallFunc_GetAllEntries_ReturnValue' has a wrong offset!");
static_assert(offsetof(ConfirmationWindow_C_ExecuteUbergraph_ConfirmationWindow, Temp_real_Variable) == 0x000018, "Member 'ConfirmationWindow_C_ExecuteUbergraph_ConfirmationWindow::Temp_real_Variable' has a wrong offset!");
static_assert(offsetof(ConfirmationWindow_C_ExecuteUbergraph_ConfirmationWindow, CallFunc_Array_Length_ReturnValue) == 0x000020, "Member 'ConfirmationWindow_C_ExecuteUbergraph_ConfirmationWindow::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(ConfirmationWindow_C_ExecuteUbergraph_ConfirmationWindow, Temp_real_Variable_1) == 0x000028, "Member 'ConfirmationWindow_C_ExecuteUbergraph_ConfirmationWindow::Temp_real_Variable_1' has a wrong offset!");
static_assert(offsetof(ConfirmationWindow_C_ExecuteUbergraph_ConfirmationWindow, Temp_int_Array_Index_Variable) == 0x000030, "Member 'ConfirmationWindow_C_ExecuteUbergraph_ConfirmationWindow::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(ConfirmationWindow_C_ExecuteUbergraph_ConfirmationWindow, CallFunc_Array_Get_Item) == 0x000038, "Member 'ConfirmationWindow_C_ExecuteUbergraph_ConfirmationWindow::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(ConfirmationWindow_C_ExecuteUbergraph_ConfirmationWindow, K2Node_DynamicCast_AsWBP_UIKit_Button_CTA_Base) == 0x000040, "Member 'ConfirmationWindow_C_ExecuteUbergraph_ConfirmationWindow::K2Node_DynamicCast_AsWBP_UIKit_Button_CTA_Base' has a wrong offset!");
static_assert(offsetof(ConfirmationWindow_C_ExecuteUbergraph_ConfirmationWindow, K2Node_DynamicCast_bSuccess) == 0x000048, "Member 'ConfirmationWindow_C_ExecuteUbergraph_ConfirmationWindow::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(ConfirmationWindow_C_ExecuteUbergraph_ConfirmationWindow, CallFunc_GetConfirmationDescription_ReturnValue) == 0x000050, "Member 'ConfirmationWindow_C_ExecuteUbergraph_ConfirmationWindow::CallFunc_GetConfirmationDescription_ReturnValue' has a wrong offset!");
static_assert(offsetof(ConfirmationWindow_C_ExecuteUbergraph_ConfirmationWindow, K2Node_Event_Button) == 0x0001B0, "Member 'ConfirmationWindow_C_ExecuteUbergraph_ConfirmationWindow::K2Node_Event_Button' has a wrong offset!");
static_assert(offsetof(ConfirmationWindow_C_ExecuteUbergraph_ConfirmationWindow, K2Node_ComponentBoundEvent_Button) == 0x0001B8, "Member 'ConfirmationWindow_C_ExecuteUbergraph_ConfirmationWindow::K2Node_ComponentBoundEvent_Button' has a wrong offset!");
static_assert(offsetof(ConfirmationWindow_C_ExecuteUbergraph_ConfirmationWindow, CallFunc_IsMobileGame_ReturnValue) == 0x0001C0, "Member 'ConfirmationWindow_C_ExecuteUbergraph_ConfirmationWindow::CallFunc_IsMobileGame_ReturnValue' has a wrong offset!");
static_assert(offsetof(ConfirmationWindow_C_ExecuteUbergraph_ConfirmationWindow, K2Node_Event_IsDesignTime) == 0x0001C1, "Member 'ConfirmationWindow_C_ExecuteUbergraph_ConfirmationWindow::K2Node_Event_IsDesignTime' has a wrong offset!");
static_assert(offsetof(ConfirmationWindow_C_ExecuteUbergraph_ConfirmationWindow, Temp_int_Loop_Counter_Variable) == 0x0001C4, "Member 'ConfirmationWindow_C_ExecuteUbergraph_ConfirmationWindow::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(ConfirmationWindow_C_ExecuteUbergraph_ConfirmationWindow, K2Node_Select_Default) == 0x0001C8, "Member 'ConfirmationWindow_C_ExecuteUbergraph_ConfirmationWindow::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(ConfirmationWindow_C_ExecuteUbergraph_ConfirmationWindow, CallFunc_Less_IntInt_ReturnValue) == 0x0001D0, "Member 'ConfirmationWindow_C_ExecuteUbergraph_ConfirmationWindow::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(ConfirmationWindow_C_ExecuteUbergraph_ConfirmationWindow, CallFunc_Add_IntInt_ReturnValue) == 0x0001D4, "Member 'ConfirmationWindow_C_ExecuteUbergraph_ConfirmationWindow::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(ConfirmationWindow_C_ExecuteUbergraph_ConfirmationWindow, CallFunc_PlayAnimationForward_ReturnValue) == 0x0001D8, "Member 'ConfirmationWindow_C_ExecuteUbergraph_ConfirmationWindow::CallFunc_PlayAnimationForward_ReturnValue' has a wrong offset!");
static_assert(offsetof(ConfirmationWindow_C_ExecuteUbergraph_ConfirmationWindow, CallFunc_SetMinDesiredWidth_InMinDesiredWidth_ImplicitCast) == 0x0001E0, "Member 'ConfirmationWindow_C_ExecuteUbergraph_ConfirmationWindow::CallFunc_SetMinDesiredWidth_InMinDesiredWidth_ImplicitCast' has a wrong offset!");

struct ConfirmationWindow_C_GetInputAction final
{
public:
	class FName                                   RowName;
	bool                                          UseInputAction;
	uint8                                         Pad_5[0x3];
	struct FDataTableRowHandle                    ReturnValue;
	bool                                          Temp_bool_Variable;
	uint8                                         Pad_19[0x7];
	struct FDataTableRowHandle                    K2Node_MakeStruct_DataTableRowHandle;
	struct FDataTableRowHandle                    Temp_struct_Variable;
	struct FDataTableRowHandle                    K2Node_Select_Default;
};
static_assert(alignof(ConfirmationWindow_C_GetInputAction) == 0x000008, "Wrong alignment on ConfirmationWindow_C_GetInputAction");
static_assert(sizeof(ConfirmationWindow_C_GetInputAction) == 0x000050, "Wrong size on ConfirmationWindow_C_GetInputAction");
static_assert(offsetof(ConfirmationWindow_C_GetInputAction, RowName) == 0x000000, "Member 'ConfirmationWindow_C_GetInputAction::RowName' has a wrong offset!");
static_assert(offsetof(ConfirmationWindow_C_GetInputAction, UseInputAction) == 0x000004, "Member 'ConfirmationWindow_C_GetInputAction::UseInputAction' has a wrong offset!");
static_assert(offsetof(ConfirmationWindow_C_GetInputAction, ReturnValue) == 0x000008, "Member 'ConfirmationWindow_C_GetInputAction::ReturnValue' has a wrong offset!");
static_assert(offsetof(ConfirmationWindow_C_GetInputAction, Temp_bool_Variable) == 0x000018, "Member 'ConfirmationWindow_C_GetInputAction::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(ConfirmationWindow_C_GetInputAction, K2Node_MakeStruct_DataTableRowHandle) == 0x000020, "Member 'ConfirmationWindow_C_GetInputAction::K2Node_MakeStruct_DataTableRowHandle' has a wrong offset!");
static_assert(offsetof(ConfirmationWindow_C_GetInputAction, Temp_struct_Variable) == 0x000030, "Member 'ConfirmationWindow_C_GetInputAction::Temp_struct_Variable' has a wrong offset!");
static_assert(offsetof(ConfirmationWindow_C_GetInputAction, K2Node_Select_Default) == 0x000040, "Member 'ConfirmationWindow_C_GetInputAction::K2Node_Select_Default' has a wrong offset!");

struct ConfirmationWindow_C_Handle_Configure_Decline_Button final
{
public:
	class UCommonButtonBase*                      New_Button;
	class UWBP_UIKit_ButtonCTA_Base_C*            CTAButton;
	class UFortGlobalUIContext*                   CallFunc_GetContext_ReturnValue;
	class UWBP_UIKit_ButtonCTA_Base_C*            K2Node_DynamicCast_AsWBP_UIKit_Button_CTA_Base;
	bool                                          K2Node_DynamicCast_bSuccess;
	uint8                                         Pad_21[0xF];
	struct FFortDialogDescription_NUI             CallFunc_GetConfirmationDescription_ReturnValue;
	int32                                         CallFunc_GetInputPriority_ReturnValue;
	uint8                                         Pad_194[0x4];
	struct FDataTableRowHandle                    K2Node_MakeStruct_DataTableRowHandle;
};
static_assert(alignof(ConfirmationWindow_C_Handle_Configure_Decline_Button) == 0x000010, "Wrong alignment on ConfirmationWindow_C_Handle_Configure_Decline_Button");
static_assert(sizeof(ConfirmationWindow_C_Handle_Configure_Decline_Button) == 0x0001B0, "Wrong size on ConfirmationWindow_C_Handle_Configure_Decline_Button");
static_assert(offsetof(ConfirmationWindow_C_Handle_Configure_Decline_Button, New_Button) == 0x000000, "Member 'ConfirmationWindow_C_Handle_Configure_Decline_Button::New_Button' has a wrong offset!");
static_assert(offsetof(ConfirmationWindow_C_Handle_Configure_Decline_Button, CTAButton) == 0x000008, "Member 'ConfirmationWindow_C_Handle_Configure_Decline_Button::CTAButton' has a wrong offset!");
static_assert(offsetof(ConfirmationWindow_C_Handle_Configure_Decline_Button, CallFunc_GetContext_ReturnValue) == 0x000010, "Member 'ConfirmationWindow_C_Handle_Configure_Decline_Button::CallFunc_GetContext_ReturnValue' has a wrong offset!");
static_assert(offsetof(ConfirmationWindow_C_Handle_Configure_Decline_Button, K2Node_DynamicCast_AsWBP_UIKit_Button_CTA_Base) == 0x000018, "Member 'ConfirmationWindow_C_Handle_Configure_Decline_Button::K2Node_DynamicCast_AsWBP_UIKit_Button_CTA_Base' has a wrong offset!");
static_assert(offsetof(ConfirmationWindow_C_Handle_Configure_Decline_Button, K2Node_DynamicCast_bSuccess) == 0x000020, "Member 'ConfirmationWindow_C_Handle_Configure_Decline_Button::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(ConfirmationWindow_C_Handle_Configure_Decline_Button, CallFunc_GetConfirmationDescription_ReturnValue) == 0x000030, "Member 'ConfirmationWindow_C_Handle_Configure_Decline_Button::CallFunc_GetConfirmationDescription_ReturnValue' has a wrong offset!");
static_assert(offsetof(ConfirmationWindow_C_Handle_Configure_Decline_Button, CallFunc_GetInputPriority_ReturnValue) == 0x000190, "Member 'ConfirmationWindow_C_Handle_Configure_Decline_Button::CallFunc_GetInputPriority_ReturnValue' has a wrong offset!");
static_assert(offsetof(ConfirmationWindow_C_Handle_Configure_Decline_Button, K2Node_MakeStruct_DataTableRowHandle) == 0x000198, "Member 'ConfirmationWindow_C_Handle_Configure_Decline_Button::K2Node_MakeStruct_DataTableRowHandle' has a wrong offset!");

struct ConfirmationWindow_C_PlayShowSound final
{
public:
	struct FFortDialogDescription_NUI             CallFunc_GetConfirmationDescription_ReturnValue;
	bool                                          CallFunc_IsValid_ReturnValue;
};
static_assert(alignof(ConfirmationWindow_C_PlayShowSound) == 0x000010, "Wrong alignment on ConfirmationWindow_C_PlayShowSound");
static_assert(sizeof(ConfirmationWindow_C_PlayShowSound) == 0x000170, "Wrong size on ConfirmationWindow_C_PlayShowSound");
static_assert(offsetof(ConfirmationWindow_C_PlayShowSound, CallFunc_GetConfirmationDescription_ReturnValue) == 0x000000, "Member 'ConfirmationWindow_C_PlayShowSound::CallFunc_GetConfirmationDescription_ReturnValue' has a wrong offset!");
static_assert(offsetof(ConfirmationWindow_C_PlayShowSound, CallFunc_IsValid_ReturnValue) == 0x000160, "Member 'ConfirmationWindow_C_PlayShowSound::CallFunc_IsValid_ReturnValue' has a wrong offset!");

struct ConfirmationWindow_C_PreConstruct final
{
public:
	bool                                          IsDesignTime;
};
static_assert(alignof(ConfirmationWindow_C_PreConstruct) == 0x000001, "Wrong alignment on ConfirmationWindow_C_PreConstruct");
static_assert(sizeof(ConfirmationWindow_C_PreConstruct) == 0x000001, "Wrong size on ConfirmationWindow_C_PreConstruct");
static_assert(offsetof(ConfirmationWindow_C_PreConstruct, IsDesignTime) == 0x000000, "Member 'ConfirmationWindow_C_PreConstruct::IsDesignTime' has a wrong offset!");

struct ConfirmationWindow_C_TapToClose final
{
public:
	struct FGeometry                              MyGeometry;
	struct FPointerEvent                          MouseEvent;
	struct FEventReply                            ReturnValue;
	struct FKey                                   CallFunc_PointerEvent_GetEffectingButton_ReturnValue;
	bool                                          CallFunc_PointerEvent_IsTouchEvent_ReturnValue;
	bool                                          CallFunc_EqualEqual_KeyKey_ReturnValue;
	bool                                          Temp_bool_Variable;
	bool                                          CallFunc_BooleanOR_ReturnValue;
	uint8                                         Pad_1AC[0x4];
	struct FEventReply                            CallFunc_Handled_ReturnValue;
	bool                                          CallFunc_Not_PreBool_ReturnValue;
	uint8                                         Pad_269[0x7];
	struct FEventReply                            CallFunc_Unhandled_ReturnValue;
	struct FEventReply                            K2Node_Select_Default;
};
static_assert(alignof(ConfirmationWindow_C_TapToClose) == 0x000008, "Wrong alignment on ConfirmationWindow_C_TapToClose");
static_assert(sizeof(ConfirmationWindow_C_TapToClose) == 0x0003E0, "Wrong size on ConfirmationWindow_C_TapToClose");
static_assert(offsetof(ConfirmationWindow_C_TapToClose, MyGeometry) == 0x000000, "Member 'ConfirmationWindow_C_TapToClose::MyGeometry' has a wrong offset!");
static_assert(offsetof(ConfirmationWindow_C_TapToClose, MouseEvent) == 0x000040, "Member 'ConfirmationWindow_C_TapToClose::MouseEvent' has a wrong offset!");
static_assert(offsetof(ConfirmationWindow_C_TapToClose, ReturnValue) == 0x0000D8, "Member 'ConfirmationWindow_C_TapToClose::ReturnValue' has a wrong offset!");
static_assert(offsetof(ConfirmationWindow_C_TapToClose, CallFunc_PointerEvent_GetEffectingButton_ReturnValue) == 0x000190, "Member 'ConfirmationWindow_C_TapToClose::CallFunc_PointerEvent_GetEffectingButton_ReturnValue' has a wrong offset!");
static_assert(offsetof(ConfirmationWindow_C_TapToClose, CallFunc_PointerEvent_IsTouchEvent_ReturnValue) == 0x0001A8, "Member 'ConfirmationWindow_C_TapToClose::CallFunc_PointerEvent_IsTouchEvent_ReturnValue' has a wrong offset!");
static_assert(offsetof(ConfirmationWindow_C_TapToClose, CallFunc_EqualEqual_KeyKey_ReturnValue) == 0x0001A9, "Member 'ConfirmationWindow_C_TapToClose::CallFunc_EqualEqual_KeyKey_ReturnValue' has a wrong offset!");
static_assert(offsetof(ConfirmationWindow_C_TapToClose, Temp_bool_Variable) == 0x0001AA, "Member 'ConfirmationWindow_C_TapToClose::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(ConfirmationWindow_C_TapToClose, CallFunc_BooleanOR_ReturnValue) == 0x0001AB, "Member 'ConfirmationWindow_C_TapToClose::CallFunc_BooleanOR_ReturnValue' has a wrong offset!");
static_assert(offsetof(ConfirmationWindow_C_TapToClose, CallFunc_Handled_ReturnValue) == 0x0001B0, "Member 'ConfirmationWindow_C_TapToClose::CallFunc_Handled_ReturnValue' has a wrong offset!");
static_assert(offsetof(ConfirmationWindow_C_TapToClose, CallFunc_Not_PreBool_ReturnValue) == 0x000268, "Member 'ConfirmationWindow_C_TapToClose::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(ConfirmationWindow_C_TapToClose, CallFunc_Unhandled_ReturnValue) == 0x000270, "Member 'ConfirmationWindow_C_TapToClose::CallFunc_Unhandled_ReturnValue' has a wrong offset!");
static_assert(offsetof(ConfirmationWindow_C_TapToClose, K2Node_Select_Default) == 0x000328, "Member 'ConfirmationWindow_C_TapToClose::K2Node_Select_Default' has a wrong offset!");

}
