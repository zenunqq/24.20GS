#pragma once

#include "Basic.hpp"

#include "CommonInput_structs.hpp"
#include "Engine_structs.hpp"

namespace SDK::Params
{

struct SidebarPanelKoala_C_ExecuteUbergraph_SidebarPanelKoala final
{
public:
	int32                                         EntryPoint;
	TDelegate<void(ECommonInputType bNewInputType)> K2Node_CreateDelegate_OutputDelegate;
	bool                                          CallFunc_GetConsoleVariableBoolValue_ReturnValue;
	uint8                                         Pad_11[0x7];
	class APlayerController*                      CallFunc_GetOwningPlayer_ReturnValue;
	int32                                         CallFunc_GetPlayerControllerID_ReturnValue;
	bool                                          K2Node_Event_bConnected;
	uint8                                         Pad_25[0x3];
	class APlayerController*                      CallFunc_GetPlayerController_ReturnValue;
	class FString                                 CallFunc_GetPlayerNameSafe_ReturnValue;
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData;
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array;
	class FText                                   CallFunc_Format_ReturnValue;
	class APlayerController*                      CallFunc_GetOwningPlayer_ReturnValue_1;
	ECommonInputType                              K2Node_CustomEvent_bNewInputType;
	uint8                                         Pad_D9[0x7];
	class UCommonInputSubsystem*                  CallFunc_GetLocalPlayerSubSystemFromPlayerController_ReturnValue;
	ECommonInputType                              CallFunc_GetCurrentInputType_ReturnValue;
	uint8                                         Pad_E9[0x7];
	class UFortRuntimeOptions*                    CallFunc_GetRuntimeOptions_ReturnValue;
	int64                                         CallFunc_Conv_IntToInt64_ReturnValue;
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData_1;
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array_1;
	class FText                                   CallFunc_Format_ReturnValue_1;
};
static_assert(alignof(SidebarPanelKoala_C_ExecuteUbergraph_SidebarPanelKoala) == 0x000008, "Wrong alignment on SidebarPanelKoala_C_ExecuteUbergraph_SidebarPanelKoala");
static_assert(sizeof(SidebarPanelKoala_C_ExecuteUbergraph_SidebarPanelKoala) == 0x000178, "Wrong size on SidebarPanelKoala_C_ExecuteUbergraph_SidebarPanelKoala");
static_assert(offsetof(SidebarPanelKoala_C_ExecuteUbergraph_SidebarPanelKoala, EntryPoint) == 0x000000, "Member 'SidebarPanelKoala_C_ExecuteUbergraph_SidebarPanelKoala::EntryPoint' has a wrong offset!");
static_assert(offsetof(SidebarPanelKoala_C_ExecuteUbergraph_SidebarPanelKoala, K2Node_CreateDelegate_OutputDelegate) == 0x000004, "Member 'SidebarPanelKoala_C_ExecuteUbergraph_SidebarPanelKoala::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(SidebarPanelKoala_C_ExecuteUbergraph_SidebarPanelKoala, CallFunc_GetConsoleVariableBoolValue_ReturnValue) == 0x000010, "Member 'SidebarPanelKoala_C_ExecuteUbergraph_SidebarPanelKoala::CallFunc_GetConsoleVariableBoolValue_ReturnValue' has a wrong offset!");
static_assert(offsetof(SidebarPanelKoala_C_ExecuteUbergraph_SidebarPanelKoala, CallFunc_GetOwningPlayer_ReturnValue) == 0x000018, "Member 'SidebarPanelKoala_C_ExecuteUbergraph_SidebarPanelKoala::CallFunc_GetOwningPlayer_ReturnValue' has a wrong offset!");
static_assert(offsetof(SidebarPanelKoala_C_ExecuteUbergraph_SidebarPanelKoala, CallFunc_GetPlayerControllerID_ReturnValue) == 0x000020, "Member 'SidebarPanelKoala_C_ExecuteUbergraph_SidebarPanelKoala::CallFunc_GetPlayerControllerID_ReturnValue' has a wrong offset!");
static_assert(offsetof(SidebarPanelKoala_C_ExecuteUbergraph_SidebarPanelKoala, K2Node_Event_bConnected) == 0x000024, "Member 'SidebarPanelKoala_C_ExecuteUbergraph_SidebarPanelKoala::K2Node_Event_bConnected' has a wrong offset!");
static_assert(offsetof(SidebarPanelKoala_C_ExecuteUbergraph_SidebarPanelKoala, CallFunc_GetPlayerController_ReturnValue) == 0x000028, "Member 'SidebarPanelKoala_C_ExecuteUbergraph_SidebarPanelKoala::CallFunc_GetPlayerController_ReturnValue' has a wrong offset!");
static_assert(offsetof(SidebarPanelKoala_C_ExecuteUbergraph_SidebarPanelKoala, CallFunc_GetPlayerNameSafe_ReturnValue) == 0x000030, "Member 'SidebarPanelKoala_C_ExecuteUbergraph_SidebarPanelKoala::CallFunc_GetPlayerNameSafe_ReturnValue' has a wrong offset!");
static_assert(offsetof(SidebarPanelKoala_C_ExecuteUbergraph_SidebarPanelKoala, CallFunc_Conv_StringToText_ReturnValue) == 0x000040, "Member 'SidebarPanelKoala_C_ExecuteUbergraph_SidebarPanelKoala::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(SidebarPanelKoala_C_ExecuteUbergraph_SidebarPanelKoala, K2Node_MakeStruct_FormatArgumentData) == 0x000058, "Member 'SidebarPanelKoala_C_ExecuteUbergraph_SidebarPanelKoala::K2Node_MakeStruct_FormatArgumentData' has a wrong offset!");
static_assert(offsetof(SidebarPanelKoala_C_ExecuteUbergraph_SidebarPanelKoala, K2Node_MakeArray_Array) == 0x0000A8, "Member 'SidebarPanelKoala_C_ExecuteUbergraph_SidebarPanelKoala::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(SidebarPanelKoala_C_ExecuteUbergraph_SidebarPanelKoala, CallFunc_Format_ReturnValue) == 0x0000B8, "Member 'SidebarPanelKoala_C_ExecuteUbergraph_SidebarPanelKoala::CallFunc_Format_ReturnValue' has a wrong offset!");
static_assert(offsetof(SidebarPanelKoala_C_ExecuteUbergraph_SidebarPanelKoala, CallFunc_GetOwningPlayer_ReturnValue_1) == 0x0000D0, "Member 'SidebarPanelKoala_C_ExecuteUbergraph_SidebarPanelKoala::CallFunc_GetOwningPlayer_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(SidebarPanelKoala_C_ExecuteUbergraph_SidebarPanelKoala, K2Node_CustomEvent_bNewInputType) == 0x0000D8, "Member 'SidebarPanelKoala_C_ExecuteUbergraph_SidebarPanelKoala::K2Node_CustomEvent_bNewInputType' has a wrong offset!");
static_assert(offsetof(SidebarPanelKoala_C_ExecuteUbergraph_SidebarPanelKoala, CallFunc_GetLocalPlayerSubSystemFromPlayerController_ReturnValue) == 0x0000E0, "Member 'SidebarPanelKoala_C_ExecuteUbergraph_SidebarPanelKoala::CallFunc_GetLocalPlayerSubSystemFromPlayerController_ReturnValue' has a wrong offset!");
static_assert(offsetof(SidebarPanelKoala_C_ExecuteUbergraph_SidebarPanelKoala, CallFunc_GetCurrentInputType_ReturnValue) == 0x0000E8, "Member 'SidebarPanelKoala_C_ExecuteUbergraph_SidebarPanelKoala::CallFunc_GetCurrentInputType_ReturnValue' has a wrong offset!");
static_assert(offsetof(SidebarPanelKoala_C_ExecuteUbergraph_SidebarPanelKoala, CallFunc_GetRuntimeOptions_ReturnValue) == 0x0000F0, "Member 'SidebarPanelKoala_C_ExecuteUbergraph_SidebarPanelKoala::CallFunc_GetRuntimeOptions_ReturnValue' has a wrong offset!");
static_assert(offsetof(SidebarPanelKoala_C_ExecuteUbergraph_SidebarPanelKoala, CallFunc_Conv_IntToInt64_ReturnValue) == 0x0000F8, "Member 'SidebarPanelKoala_C_ExecuteUbergraph_SidebarPanelKoala::CallFunc_Conv_IntToInt64_ReturnValue' has a wrong offset!");
static_assert(offsetof(SidebarPanelKoala_C_ExecuteUbergraph_SidebarPanelKoala, K2Node_MakeStruct_FormatArgumentData_1) == 0x000100, "Member 'SidebarPanelKoala_C_ExecuteUbergraph_SidebarPanelKoala::K2Node_MakeStruct_FormatArgumentData_1' has a wrong offset!");
static_assert(offsetof(SidebarPanelKoala_C_ExecuteUbergraph_SidebarPanelKoala, K2Node_MakeArray_Array_1) == 0x000150, "Member 'SidebarPanelKoala_C_ExecuteUbergraph_SidebarPanelKoala::K2Node_MakeArray_Array_1' has a wrong offset!");
static_assert(offsetof(SidebarPanelKoala_C_ExecuteUbergraph_SidebarPanelKoala, CallFunc_Format_ReturnValue_1) == 0x000160, "Member 'SidebarPanelKoala_C_ExecuteUbergraph_SidebarPanelKoala::CallFunc_Format_ReturnValue_1' has a wrong offset!");

struct SidebarPanelKoala_C_OnConnectionChanged final
{
public:
	bool                                          bConnected;
};
static_assert(alignof(SidebarPanelKoala_C_OnConnectionChanged) == 0x000001, "Wrong alignment on SidebarPanelKoala_C_OnConnectionChanged");
static_assert(sizeof(SidebarPanelKoala_C_OnConnectionChanged) == 0x000001, "Wrong size on SidebarPanelKoala_C_OnConnectionChanged");
static_assert(offsetof(SidebarPanelKoala_C_OnConnectionChanged, bConnected) == 0x000000, "Member 'SidebarPanelKoala_C_OnConnectionChanged::bConnected' has a wrong offset!");

struct SidebarPanelKoala_C_OnInputMethodChanged final
{
public:
	ECommonInputType                              bNewInputType;
};
static_assert(alignof(SidebarPanelKoala_C_OnInputMethodChanged) == 0x000001, "Wrong alignment on SidebarPanelKoala_C_OnInputMethodChanged");
static_assert(sizeof(SidebarPanelKoala_C_OnInputMethodChanged) == 0x000001, "Wrong size on SidebarPanelKoala_C_OnInputMethodChanged");
static_assert(offsetof(SidebarPanelKoala_C_OnInputMethodChanged, bNewInputType) == 0x000000, "Member 'SidebarPanelKoala_C_OnInputMethodChanged::bNewInputType' has a wrong offset!");

struct SidebarPanelKoala_C_UpdateUsageDescription final
{
public:
	ECommonInputType                              Index_0;
	ECommonInputType                              Temp_byte_Variable;
	uint8                                         Pad_2[0x6];
	class FText                                   Temp_text_Variable;
	class FText                                   Temp_text_Variable_1;
	class FText                                   K2Node_Select_Default;
};
static_assert(alignof(SidebarPanelKoala_C_UpdateUsageDescription) == 0x000008, "Wrong alignment on SidebarPanelKoala_C_UpdateUsageDescription");
static_assert(sizeof(SidebarPanelKoala_C_UpdateUsageDescription) == 0x000050, "Wrong size on SidebarPanelKoala_C_UpdateUsageDescription");
static_assert(offsetof(SidebarPanelKoala_C_UpdateUsageDescription, Index_0) == 0x000000, "Member 'SidebarPanelKoala_C_UpdateUsageDescription::Index_0' has a wrong offset!");
static_assert(offsetof(SidebarPanelKoala_C_UpdateUsageDescription, Temp_byte_Variable) == 0x000001, "Member 'SidebarPanelKoala_C_UpdateUsageDescription::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(SidebarPanelKoala_C_UpdateUsageDescription, Temp_text_Variable) == 0x000008, "Member 'SidebarPanelKoala_C_UpdateUsageDescription::Temp_text_Variable' has a wrong offset!");
static_assert(offsetof(SidebarPanelKoala_C_UpdateUsageDescription, Temp_text_Variable_1) == 0x000020, "Member 'SidebarPanelKoala_C_UpdateUsageDescription::Temp_text_Variable_1' has a wrong offset!");
static_assert(offsetof(SidebarPanelKoala_C_UpdateUsageDescription, K2Node_Select_Default) == 0x000038, "Member 'SidebarPanelKoala_C_UpdateUsageDescription::K2Node_Select_Default' has a wrong offset!");

}
