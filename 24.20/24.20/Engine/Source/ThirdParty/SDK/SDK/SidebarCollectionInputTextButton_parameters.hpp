#pragma once

#include "Basic.hpp"

#include "CommonInput_structs.hpp"

namespace SDK::Params
{

struct SidebarCollectionInputTextButton_C_ExecuteUbergraph_SidebarCollectionInputTextButton final
{
public:
	int32                                         EntryPoint;
	ECommonInputType                              Temp_byte_Variable;
	uint8                                         Pad_5[0x3];
	TSubclassOf<class UCommonButtonStyle>         Temp_class_Variable;
	TSubclassOf<class UCommonButtonStyle>         Temp_class_Variable_1;
	TSubclassOf<class UCommonButtonStyle>         Temp_class_Variable_2;
	TSubclassOf<class UCommonButtonStyle>         Temp_class_Variable_3;
	class UCommonInputSubsystem*                  CallFunc_GetContext_ReturnValue;
	TDelegate<void(ECommonInputType bNewInputType)> K2Node_CreateDelegate_OutputDelegate;
	ECommonInputType                              CallFunc_GetCurrentInputType_ReturnValue;
	ECommonInputType                              K2Node_CustomEvent_CurrentInputType;
	uint8                                         Pad_3E[0x2];
	TSubclassOf<class UCommonButtonStyle>         K2Node_Select_Default;
};
static_assert(alignof(SidebarCollectionInputTextButton_C_ExecuteUbergraph_SidebarCollectionInputTextButton) == 0x000008, "Wrong alignment on SidebarCollectionInputTextButton_C_ExecuteUbergraph_SidebarCollectionInputTextButton");
static_assert(sizeof(SidebarCollectionInputTextButton_C_ExecuteUbergraph_SidebarCollectionInputTextButton) == 0x000048, "Wrong size on SidebarCollectionInputTextButton_C_ExecuteUbergraph_SidebarCollectionInputTextButton");
static_assert(offsetof(SidebarCollectionInputTextButton_C_ExecuteUbergraph_SidebarCollectionInputTextButton, EntryPoint) == 0x000000, "Member 'SidebarCollectionInputTextButton_C_ExecuteUbergraph_SidebarCollectionInputTextButton::EntryPoint' has a wrong offset!");
static_assert(offsetof(SidebarCollectionInputTextButton_C_ExecuteUbergraph_SidebarCollectionInputTextButton, Temp_byte_Variable) == 0x000004, "Member 'SidebarCollectionInputTextButton_C_ExecuteUbergraph_SidebarCollectionInputTextButton::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(SidebarCollectionInputTextButton_C_ExecuteUbergraph_SidebarCollectionInputTextButton, Temp_class_Variable) == 0x000008, "Member 'SidebarCollectionInputTextButton_C_ExecuteUbergraph_SidebarCollectionInputTextButton::Temp_class_Variable' has a wrong offset!");
static_assert(offsetof(SidebarCollectionInputTextButton_C_ExecuteUbergraph_SidebarCollectionInputTextButton, Temp_class_Variable_1) == 0x000010, "Member 'SidebarCollectionInputTextButton_C_ExecuteUbergraph_SidebarCollectionInputTextButton::Temp_class_Variable_1' has a wrong offset!");
static_assert(offsetof(SidebarCollectionInputTextButton_C_ExecuteUbergraph_SidebarCollectionInputTextButton, Temp_class_Variable_2) == 0x000018, "Member 'SidebarCollectionInputTextButton_C_ExecuteUbergraph_SidebarCollectionInputTextButton::Temp_class_Variable_2' has a wrong offset!");
static_assert(offsetof(SidebarCollectionInputTextButton_C_ExecuteUbergraph_SidebarCollectionInputTextButton, Temp_class_Variable_3) == 0x000020, "Member 'SidebarCollectionInputTextButton_C_ExecuteUbergraph_SidebarCollectionInputTextButton::Temp_class_Variable_3' has a wrong offset!");
static_assert(offsetof(SidebarCollectionInputTextButton_C_ExecuteUbergraph_SidebarCollectionInputTextButton, CallFunc_GetContext_ReturnValue) == 0x000028, "Member 'SidebarCollectionInputTextButton_C_ExecuteUbergraph_SidebarCollectionInputTextButton::CallFunc_GetContext_ReturnValue' has a wrong offset!");
static_assert(offsetof(SidebarCollectionInputTextButton_C_ExecuteUbergraph_SidebarCollectionInputTextButton, K2Node_CreateDelegate_OutputDelegate) == 0x000030, "Member 'SidebarCollectionInputTextButton_C_ExecuteUbergraph_SidebarCollectionInputTextButton::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(SidebarCollectionInputTextButton_C_ExecuteUbergraph_SidebarCollectionInputTextButton, CallFunc_GetCurrentInputType_ReturnValue) == 0x00003C, "Member 'SidebarCollectionInputTextButton_C_ExecuteUbergraph_SidebarCollectionInputTextButton::CallFunc_GetCurrentInputType_ReturnValue' has a wrong offset!");
static_assert(offsetof(SidebarCollectionInputTextButton_C_ExecuteUbergraph_SidebarCollectionInputTextButton, K2Node_CustomEvent_CurrentInputType) == 0x00003D, "Member 'SidebarCollectionInputTextButton_C_ExecuteUbergraph_SidebarCollectionInputTextButton::K2Node_CustomEvent_CurrentInputType' has a wrong offset!");
static_assert(offsetof(SidebarCollectionInputTextButton_C_ExecuteUbergraph_SidebarCollectionInputTextButton, K2Node_Select_Default) == 0x000040, "Member 'SidebarCollectionInputTextButton_C_ExecuteUbergraph_SidebarCollectionInputTextButton::K2Node_Select_Default' has a wrong offset!");

struct SidebarCollectionInputTextButton_C_HandleInputMethodChanged final
{
public:
	ECommonInputType                              CurrentInputType;
};
static_assert(alignof(SidebarCollectionInputTextButton_C_HandleInputMethodChanged) == 0x000001, "Wrong alignment on SidebarCollectionInputTextButton_C_HandleInputMethodChanged");
static_assert(sizeof(SidebarCollectionInputTextButton_C_HandleInputMethodChanged) == 0x000001, "Wrong size on SidebarCollectionInputTextButton_C_HandleInputMethodChanged");
static_assert(offsetof(SidebarCollectionInputTextButton_C_HandleInputMethodChanged, CurrentInputType) == 0x000000, "Member 'SidebarCollectionInputTextButton_C_HandleInputMethodChanged::CurrentInputType' has a wrong offset!");

}
