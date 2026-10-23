#pragma once

#include "Basic.hpp"

#include "CommonInput_structs.hpp"

namespace SDK::Params
{

struct WBP_ContentPurchaseBlocker_C_SetVisuals final
{
public:
	int32                                         MaxWidth;
};
static_assert(alignof(WBP_ContentPurchaseBlocker_C_SetVisuals) == 0x000004, "Wrong alignment on WBP_ContentPurchaseBlocker_C_SetVisuals");
static_assert(sizeof(WBP_ContentPurchaseBlocker_C_SetVisuals) == 0x000004, "Wrong size on WBP_ContentPurchaseBlocker_C_SetVisuals");
static_assert(offsetof(WBP_ContentPurchaseBlocker_C_SetVisuals, MaxWidth) == 0x000000, "Member 'WBP_ContentPurchaseBlocker_C_SetVisuals::MaxWidth' has a wrong offset!");

struct WBP_ContentPurchaseBlocker_C_Set_Data final
{
public:
	class FText                                   InText;
};
static_assert(alignof(WBP_ContentPurchaseBlocker_C_Set_Data) == 0x000008, "Wrong alignment on WBP_ContentPurchaseBlocker_C_Set_Data");
static_assert(sizeof(WBP_ContentPurchaseBlocker_C_Set_Data) == 0x000018, "Wrong size on WBP_ContentPurchaseBlocker_C_Set_Data");
static_assert(offsetof(WBP_ContentPurchaseBlocker_C_Set_Data, InText) == 0x000000, "Member 'WBP_ContentPurchaseBlocker_C_Set_Data::InText' has a wrong offset!");

struct WBP_ContentPurchaseBlocker_C_PreConstruct final
{
public:
	bool                                          IsDesignTime;
};
static_assert(alignof(WBP_ContentPurchaseBlocker_C_PreConstruct) == 0x000001, "Wrong alignment on WBP_ContentPurchaseBlocker_C_PreConstruct");
static_assert(sizeof(WBP_ContentPurchaseBlocker_C_PreConstruct) == 0x000001, "Wrong size on WBP_ContentPurchaseBlocker_C_PreConstruct");
static_assert(offsetof(WBP_ContentPurchaseBlocker_C_PreConstruct, IsDesignTime) == 0x000000, "Member 'WBP_ContentPurchaseBlocker_C_PreConstruct::IsDesignTime' has a wrong offset!");

struct WBP_ContentPurchaseBlocker_C_OnInputMethodChanged final
{
public:
	ECommonInputType                              bNewInputType;
};
static_assert(alignof(WBP_ContentPurchaseBlocker_C_OnInputMethodChanged) == 0x000001, "Wrong alignment on WBP_ContentPurchaseBlocker_C_OnInputMethodChanged");
static_assert(sizeof(WBP_ContentPurchaseBlocker_C_OnInputMethodChanged) == 0x000001, "Wrong size on WBP_ContentPurchaseBlocker_C_OnInputMethodChanged");
static_assert(offsetof(WBP_ContentPurchaseBlocker_C_OnInputMethodChanged, bNewInputType) == 0x000000, "Member 'WBP_ContentPurchaseBlocker_C_OnInputMethodChanged::bNewInputType' has a wrong offset!");

struct WBP_ContentPurchaseBlocker_C_OnComplete_EDE27478404080C54EDC0D863BB58408 final
{
public:
	class UUserWidget*                            UserWidget;
};
static_assert(alignof(WBP_ContentPurchaseBlocker_C_OnComplete_EDE27478404080C54EDC0D863BB58408) == 0x000008, "Wrong alignment on WBP_ContentPurchaseBlocker_C_OnComplete_EDE27478404080C54EDC0D863BB58408");
static_assert(sizeof(WBP_ContentPurchaseBlocker_C_OnComplete_EDE27478404080C54EDC0D863BB58408) == 0x000008, "Wrong size on WBP_ContentPurchaseBlocker_C_OnComplete_EDE27478404080C54EDC0D863BB58408");
static_assert(offsetof(WBP_ContentPurchaseBlocker_C_OnComplete_EDE27478404080C54EDC0D863BB58408, UserWidget) == 0x000000, "Member 'WBP_ContentPurchaseBlocker_C_OnComplete_EDE27478404080C54EDC0D863BB58408::UserWidget' has a wrong offset!");

struct WBP_ContentPurchaseBlocker_C_BndEvt__WBP_ContentPurchaseBlocker_WBP_UIKit_Button_Loud_K2Node_ComponentBoundEvent_0_CommonButtonBaseClicked__DelegateSignature final
{
public:
	class UCommonButtonBase*                      Button;
};
static_assert(alignof(WBP_ContentPurchaseBlocker_C_BndEvt__WBP_ContentPurchaseBlocker_WBP_UIKit_Button_Loud_K2Node_ComponentBoundEvent_0_CommonButtonBaseClicked__DelegateSignature) == 0x000008, "Wrong alignment on WBP_ContentPurchaseBlocker_C_BndEvt__WBP_ContentPurchaseBlocker_WBP_UIKit_Button_Loud_K2Node_ComponentBoundEvent_0_CommonButtonBaseClicked__DelegateSignature");
static_assert(sizeof(WBP_ContentPurchaseBlocker_C_BndEvt__WBP_ContentPurchaseBlocker_WBP_UIKit_Button_Loud_K2Node_ComponentBoundEvent_0_CommonButtonBaseClicked__DelegateSignature) == 0x000008, "Wrong size on WBP_ContentPurchaseBlocker_C_BndEvt__WBP_ContentPurchaseBlocker_WBP_UIKit_Button_Loud_K2Node_ComponentBoundEvent_0_CommonButtonBaseClicked__DelegateSignature");
static_assert(offsetof(WBP_ContentPurchaseBlocker_C_BndEvt__WBP_ContentPurchaseBlocker_WBP_UIKit_Button_Loud_K2Node_ComponentBoundEvent_0_CommonButtonBaseClicked__DelegateSignature, Button) == 0x000000, "Member 'WBP_ContentPurchaseBlocker_C_BndEvt__WBP_ContentPurchaseBlocker_WBP_UIKit_Button_Loud_K2Node_ComponentBoundEvent_0_CommonButtonBaseClicked__DelegateSignature::Button' has a wrong offset!");

struct WBP_ContentPurchaseBlocker_C_ExecuteUbergraph_WBP_ContentPurchaseBlocker final
{
public:
	int32                                         EntryPoint;
	uint8                                         Pad_4[0x4];
	class UUserWidget*                            Temp_object_Variable;
	class UCommonInputSubsystem*                  CallFunc_GetLocalPlayerSubsystem_ReturnValue;
	ECommonInputType                              Temp_byte_Variable;
	uint8                                         Pad_19[0x3];
	TDelegate<void(ECommonInputType bNewInputType)> K2Node_CreateDelegate_OutputDelegate;
	bool                                          Temp_bool_Variable;
	bool                                          Temp_bool_Variable_1;
	bool                                          Temp_bool_Variable_2;
	bool                                          Temp_bool_Variable_3;
	uint8                                         Pad_2C[0x4];
	class UCommonInputSubsystem*                  CallFunc_GetLocalPlayerSubsystem_ReturnValue_1;
	ECommonInputType                              CallFunc_GetCurrentInputType_ReturnValue;
	uint8                                         Pad_39[0x7];
	class UCommonInputSubsystem*                  CallFunc_GetLocalPlayerSubsystem_ReturnValue_2;
	bool                                          K2Node_Event_IsDesignTime;
	uint8                                         Pad_49[0x7];
	class UCommonButtonBase*                      K2Node_ComponentBoundEvent_Button;
	class APlayerController*                      CallFunc_GetOwningPlayer_ReturnValue;
	class UFortAsyncAction_CreateWidgetAsync*     CallFunc_CreateWidgetAsync_ReturnValue;
	ECommonInputType                              K2Node_CustomEvent_bNewInputType;
	bool                                          CallFunc_IsValid_ReturnValue;
	bool                                          K2Node_Select_Default;
	uint8                                         Pad_6B[0x5];
	class UUserWidget*                            K2Node_CustomEvent_UserWidget;
	TDelegate<void(class UUserWidget* UserWidget)> K2Node_CreateDelegate_OutputDelegate_1;
};
static_assert(alignof(WBP_ContentPurchaseBlocker_C_ExecuteUbergraph_WBP_ContentPurchaseBlocker) == 0x000008, "Wrong alignment on WBP_ContentPurchaseBlocker_C_ExecuteUbergraph_WBP_ContentPurchaseBlocker");
static_assert(sizeof(WBP_ContentPurchaseBlocker_C_ExecuteUbergraph_WBP_ContentPurchaseBlocker) == 0x000088, "Wrong size on WBP_ContentPurchaseBlocker_C_ExecuteUbergraph_WBP_ContentPurchaseBlocker");
static_assert(offsetof(WBP_ContentPurchaseBlocker_C_ExecuteUbergraph_WBP_ContentPurchaseBlocker, EntryPoint) == 0x000000, "Member 'WBP_ContentPurchaseBlocker_C_ExecuteUbergraph_WBP_ContentPurchaseBlocker::EntryPoint' has a wrong offset!");
static_assert(offsetof(WBP_ContentPurchaseBlocker_C_ExecuteUbergraph_WBP_ContentPurchaseBlocker, Temp_object_Variable) == 0x000008, "Member 'WBP_ContentPurchaseBlocker_C_ExecuteUbergraph_WBP_ContentPurchaseBlocker::Temp_object_Variable' has a wrong offset!");
static_assert(offsetof(WBP_ContentPurchaseBlocker_C_ExecuteUbergraph_WBP_ContentPurchaseBlocker, CallFunc_GetLocalPlayerSubsystem_ReturnValue) == 0x000010, "Member 'WBP_ContentPurchaseBlocker_C_ExecuteUbergraph_WBP_ContentPurchaseBlocker::CallFunc_GetLocalPlayerSubsystem_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_ContentPurchaseBlocker_C_ExecuteUbergraph_WBP_ContentPurchaseBlocker, Temp_byte_Variable) == 0x000018, "Member 'WBP_ContentPurchaseBlocker_C_ExecuteUbergraph_WBP_ContentPurchaseBlocker::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(WBP_ContentPurchaseBlocker_C_ExecuteUbergraph_WBP_ContentPurchaseBlocker, K2Node_CreateDelegate_OutputDelegate) == 0x00001C, "Member 'WBP_ContentPurchaseBlocker_C_ExecuteUbergraph_WBP_ContentPurchaseBlocker::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(WBP_ContentPurchaseBlocker_C_ExecuteUbergraph_WBP_ContentPurchaseBlocker, Temp_bool_Variable) == 0x000028, "Member 'WBP_ContentPurchaseBlocker_C_ExecuteUbergraph_WBP_ContentPurchaseBlocker::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(WBP_ContentPurchaseBlocker_C_ExecuteUbergraph_WBP_ContentPurchaseBlocker, Temp_bool_Variable_1) == 0x000029, "Member 'WBP_ContentPurchaseBlocker_C_ExecuteUbergraph_WBP_ContentPurchaseBlocker::Temp_bool_Variable_1' has a wrong offset!");
static_assert(offsetof(WBP_ContentPurchaseBlocker_C_ExecuteUbergraph_WBP_ContentPurchaseBlocker, Temp_bool_Variable_2) == 0x00002A, "Member 'WBP_ContentPurchaseBlocker_C_ExecuteUbergraph_WBP_ContentPurchaseBlocker::Temp_bool_Variable_2' has a wrong offset!");
static_assert(offsetof(WBP_ContentPurchaseBlocker_C_ExecuteUbergraph_WBP_ContentPurchaseBlocker, Temp_bool_Variable_3) == 0x00002B, "Member 'WBP_ContentPurchaseBlocker_C_ExecuteUbergraph_WBP_ContentPurchaseBlocker::Temp_bool_Variable_3' has a wrong offset!");
static_assert(offsetof(WBP_ContentPurchaseBlocker_C_ExecuteUbergraph_WBP_ContentPurchaseBlocker, CallFunc_GetLocalPlayerSubsystem_ReturnValue_1) == 0x000030, "Member 'WBP_ContentPurchaseBlocker_C_ExecuteUbergraph_WBP_ContentPurchaseBlocker::CallFunc_GetLocalPlayerSubsystem_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_ContentPurchaseBlocker_C_ExecuteUbergraph_WBP_ContentPurchaseBlocker, CallFunc_GetCurrentInputType_ReturnValue) == 0x000038, "Member 'WBP_ContentPurchaseBlocker_C_ExecuteUbergraph_WBP_ContentPurchaseBlocker::CallFunc_GetCurrentInputType_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_ContentPurchaseBlocker_C_ExecuteUbergraph_WBP_ContentPurchaseBlocker, CallFunc_GetLocalPlayerSubsystem_ReturnValue_2) == 0x000040, "Member 'WBP_ContentPurchaseBlocker_C_ExecuteUbergraph_WBP_ContentPurchaseBlocker::CallFunc_GetLocalPlayerSubsystem_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(WBP_ContentPurchaseBlocker_C_ExecuteUbergraph_WBP_ContentPurchaseBlocker, K2Node_Event_IsDesignTime) == 0x000048, "Member 'WBP_ContentPurchaseBlocker_C_ExecuteUbergraph_WBP_ContentPurchaseBlocker::K2Node_Event_IsDesignTime' has a wrong offset!");
static_assert(offsetof(WBP_ContentPurchaseBlocker_C_ExecuteUbergraph_WBP_ContentPurchaseBlocker, K2Node_ComponentBoundEvent_Button) == 0x000050, "Member 'WBP_ContentPurchaseBlocker_C_ExecuteUbergraph_WBP_ContentPurchaseBlocker::K2Node_ComponentBoundEvent_Button' has a wrong offset!");
static_assert(offsetof(WBP_ContentPurchaseBlocker_C_ExecuteUbergraph_WBP_ContentPurchaseBlocker, CallFunc_GetOwningPlayer_ReturnValue) == 0x000058, "Member 'WBP_ContentPurchaseBlocker_C_ExecuteUbergraph_WBP_ContentPurchaseBlocker::CallFunc_GetOwningPlayer_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_ContentPurchaseBlocker_C_ExecuteUbergraph_WBP_ContentPurchaseBlocker, CallFunc_CreateWidgetAsync_ReturnValue) == 0x000060, "Member 'WBP_ContentPurchaseBlocker_C_ExecuteUbergraph_WBP_ContentPurchaseBlocker::CallFunc_CreateWidgetAsync_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_ContentPurchaseBlocker_C_ExecuteUbergraph_WBP_ContentPurchaseBlocker, K2Node_CustomEvent_bNewInputType) == 0x000068, "Member 'WBP_ContentPurchaseBlocker_C_ExecuteUbergraph_WBP_ContentPurchaseBlocker::K2Node_CustomEvent_bNewInputType' has a wrong offset!");
static_assert(offsetof(WBP_ContentPurchaseBlocker_C_ExecuteUbergraph_WBP_ContentPurchaseBlocker, CallFunc_IsValid_ReturnValue) == 0x000069, "Member 'WBP_ContentPurchaseBlocker_C_ExecuteUbergraph_WBP_ContentPurchaseBlocker::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_ContentPurchaseBlocker_C_ExecuteUbergraph_WBP_ContentPurchaseBlocker, K2Node_Select_Default) == 0x00006A, "Member 'WBP_ContentPurchaseBlocker_C_ExecuteUbergraph_WBP_ContentPurchaseBlocker::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(WBP_ContentPurchaseBlocker_C_ExecuteUbergraph_WBP_ContentPurchaseBlocker, K2Node_CustomEvent_UserWidget) == 0x000070, "Member 'WBP_ContentPurchaseBlocker_C_ExecuteUbergraph_WBP_ContentPurchaseBlocker::K2Node_CustomEvent_UserWidget' has a wrong offset!");
static_assert(offsetof(WBP_ContentPurchaseBlocker_C_ExecuteUbergraph_WBP_ContentPurchaseBlocker, K2Node_CreateDelegate_OutputDelegate_1) == 0x000078, "Member 'WBP_ContentPurchaseBlocker_C_ExecuteUbergraph_WBP_ContentPurchaseBlocker::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");

}
