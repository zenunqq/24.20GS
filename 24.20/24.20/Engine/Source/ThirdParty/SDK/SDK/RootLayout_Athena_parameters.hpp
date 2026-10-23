#pragma once

#include "Basic.hpp"

#include "FortniteGame_structs.hpp"

namespace SDK::Params
{

struct RootLayout_Athena_C_DialogResult_0099D78247C40A9775C753A2024EA419 final
{
public:
	EFortDialogResult                             Result;
	uint8                                         Pad_1[0x3];
	class FName                                   ResultName;
};
static_assert(alignof(RootLayout_Athena_C_DialogResult_0099D78247C40A9775C753A2024EA419) == 0x000004, "Wrong alignment on RootLayout_Athena_C_DialogResult_0099D78247C40A9775C753A2024EA419");
static_assert(sizeof(RootLayout_Athena_C_DialogResult_0099D78247C40A9775C753A2024EA419) == 0x000008, "Wrong size on RootLayout_Athena_C_DialogResult_0099D78247C40A9775C753A2024EA419");
static_assert(offsetof(RootLayout_Athena_C_DialogResult_0099D78247C40A9775C753A2024EA419, Result) == 0x000000, "Member 'RootLayout_Athena_C_DialogResult_0099D78247C40A9775C753A2024EA419::Result' has a wrong offset!");
static_assert(offsetof(RootLayout_Athena_C_DialogResult_0099D78247C40A9775C753A2024EA419, ResultName) == 0x000004, "Member 'RootLayout_Athena_C_DialogResult_0099D78247C40A9775C753A2024EA419::ResultName' has a wrong offset!");

struct RootLayout_Athena_C_ExecuteUbergraph_RootLayout_Athena final
{
public:
	int32                                         EntryPoint;
	uint8                                         Pad_4[0x4];
	class UFortGlobalUIContext*                   CallFunc_GetContext_ReturnValue;
	TDelegate<void(EFortDialogResult Result, class FName ResultName)> K2Node_CreateDelegate_OutputDelegate;
	EFortDialogResult                             K2Node_CustomEvent_Result;
	uint8                                         Pad_1D[0x3];
	class FName                                   K2Node_CustomEvent_ResultName;
	class FName                                   Temp_name_Variable;
	EFortDialogResult                             Temp_byte_Variable;
	bool                                          K2Node_SwitchEnum_CmpSuccess;
	uint8                                         Pad_2A[0x2];
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_1;
	class UFortAsyncAction_ShowConfirmation_NUI*  CallFunc_ShowSimpleConfirmationDialog_CustomInput_ReturnValue;
	bool                                          CallFunc_IsValid_ReturnValue;
};
static_assert(alignof(RootLayout_Athena_C_ExecuteUbergraph_RootLayout_Athena) == 0x000008, "Wrong alignment on RootLayout_Athena_C_ExecuteUbergraph_RootLayout_Athena");
static_assert(sizeof(RootLayout_Athena_C_ExecuteUbergraph_RootLayout_Athena) == 0x000048, "Wrong size on RootLayout_Athena_C_ExecuteUbergraph_RootLayout_Athena");
static_assert(offsetof(RootLayout_Athena_C_ExecuteUbergraph_RootLayout_Athena, EntryPoint) == 0x000000, "Member 'RootLayout_Athena_C_ExecuteUbergraph_RootLayout_Athena::EntryPoint' has a wrong offset!");
static_assert(offsetof(RootLayout_Athena_C_ExecuteUbergraph_RootLayout_Athena, CallFunc_GetContext_ReturnValue) == 0x000008, "Member 'RootLayout_Athena_C_ExecuteUbergraph_RootLayout_Athena::CallFunc_GetContext_ReturnValue' has a wrong offset!");
static_assert(offsetof(RootLayout_Athena_C_ExecuteUbergraph_RootLayout_Athena, K2Node_CreateDelegate_OutputDelegate) == 0x000010, "Member 'RootLayout_Athena_C_ExecuteUbergraph_RootLayout_Athena::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(RootLayout_Athena_C_ExecuteUbergraph_RootLayout_Athena, K2Node_CustomEvent_Result) == 0x00001C, "Member 'RootLayout_Athena_C_ExecuteUbergraph_RootLayout_Athena::K2Node_CustomEvent_Result' has a wrong offset!");
static_assert(offsetof(RootLayout_Athena_C_ExecuteUbergraph_RootLayout_Athena, K2Node_CustomEvent_ResultName) == 0x000020, "Member 'RootLayout_Athena_C_ExecuteUbergraph_RootLayout_Athena::K2Node_CustomEvent_ResultName' has a wrong offset!");
static_assert(offsetof(RootLayout_Athena_C_ExecuteUbergraph_RootLayout_Athena, Temp_name_Variable) == 0x000024, "Member 'RootLayout_Athena_C_ExecuteUbergraph_RootLayout_Athena::Temp_name_Variable' has a wrong offset!");
static_assert(offsetof(RootLayout_Athena_C_ExecuteUbergraph_RootLayout_Athena, Temp_byte_Variable) == 0x000028, "Member 'RootLayout_Athena_C_ExecuteUbergraph_RootLayout_Athena::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(RootLayout_Athena_C_ExecuteUbergraph_RootLayout_Athena, K2Node_SwitchEnum_CmpSuccess) == 0x000029, "Member 'RootLayout_Athena_C_ExecuteUbergraph_RootLayout_Athena::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");
static_assert(offsetof(RootLayout_Athena_C_ExecuteUbergraph_RootLayout_Athena, K2Node_CreateDelegate_OutputDelegate_1) == 0x00002C, "Member 'RootLayout_Athena_C_ExecuteUbergraph_RootLayout_Athena::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(RootLayout_Athena_C_ExecuteUbergraph_RootLayout_Athena, CallFunc_ShowSimpleConfirmationDialog_CustomInput_ReturnValue) == 0x000038, "Member 'RootLayout_Athena_C_ExecuteUbergraph_RootLayout_Athena::CallFunc_ShowSimpleConfirmationDialog_CustomInput_ReturnValue' has a wrong offset!");
static_assert(offsetof(RootLayout_Athena_C_ExecuteUbergraph_RootLayout_Athena, CallFunc_IsValid_ReturnValue) == 0x000040, "Member 'RootLayout_Athena_C_ExecuteUbergraph_RootLayout_Athena::CallFunc_IsValid_ReturnValue' has a wrong offset!");

struct RootLayout_Athena_C_IsConsole final
{
public:
	bool                                          ReturnValue;
	uint8                                         Pad_1[0x7];
	class FString                                 CallFunc_GetPlatformName_ReturnValue;
	bool                                          CallFunc_EqualEqual_StrStr_ReturnValue;
	bool                                          CallFunc_EqualEqual_StrStr_ReturnValue_1;
	bool                                          CallFunc_BooleanOR_ReturnValue;
};
static_assert(alignof(RootLayout_Athena_C_IsConsole) == 0x000008, "Wrong alignment on RootLayout_Athena_C_IsConsole");
static_assert(sizeof(RootLayout_Athena_C_IsConsole) == 0x000020, "Wrong size on RootLayout_Athena_C_IsConsole");
static_assert(offsetof(RootLayout_Athena_C_IsConsole, ReturnValue) == 0x000000, "Member 'RootLayout_Athena_C_IsConsole::ReturnValue' has a wrong offset!");
static_assert(offsetof(RootLayout_Athena_C_IsConsole, CallFunc_GetPlatformName_ReturnValue) == 0x000008, "Member 'RootLayout_Athena_C_IsConsole::CallFunc_GetPlatformName_ReturnValue' has a wrong offset!");
static_assert(offsetof(RootLayout_Athena_C_IsConsole, CallFunc_EqualEqual_StrStr_ReturnValue) == 0x000018, "Member 'RootLayout_Athena_C_IsConsole::CallFunc_EqualEqual_StrStr_ReturnValue' has a wrong offset!");
static_assert(offsetof(RootLayout_Athena_C_IsConsole, CallFunc_EqualEqual_StrStr_ReturnValue_1) == 0x000019, "Member 'RootLayout_Athena_C_IsConsole::CallFunc_EqualEqual_StrStr_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(RootLayout_Athena_C_IsConsole, CallFunc_BooleanOR_ReturnValue) == 0x00001A, "Member 'RootLayout_Athena_C_IsConsole::CallFunc_BooleanOR_ReturnValue' has a wrong offset!");

}
