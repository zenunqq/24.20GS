#pragma once

#include "Basic.hpp"

#include "UMG_structs.hpp"

namespace SDK::Params
{

struct LoginScreen_C_SetKeyArtVisibility final
{
public:
	int32                                         NewActiveWidgetIndex;
};
static_assert(alignof(LoginScreen_C_SetKeyArtVisibility) == 0x000004, "Wrong alignment on LoginScreen_C_SetKeyArtVisibility");
static_assert(sizeof(LoginScreen_C_SetKeyArtVisibility) == 0x000004, "Wrong size on LoginScreen_C_SetKeyArtVisibility");
static_assert(offsetof(LoginScreen_C_SetKeyArtVisibility, NewActiveWidgetIndex) == 0x000000, "Member 'LoginScreen_C_SetKeyArtVisibility::NewActiveWidgetIndex' has a wrong offset!");

struct LoginScreen_C_ExecuteUbergraph_LoginScreen final
{
public:
	int32                                         EntryPoint;
	uint8                                         Pad_4[0x4];
	class UFortGlobalUIContext*                   CallFunc_GetContext_ReturnValue;
	ESlateVisibility                              Temp_byte_Variable;
	ESlateVisibility                              Temp_byte_Variable_1;
	uint8                                         Pad_12[0x6];
	class UFortRuntimeOptions*                    CallFunc_GetRuntimeOptions_ReturnValue;
	class FString                                 CallFunc_GetGameVersion_ReturnValue;
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;
	int32                                         K2Node_Event_NewActiveWidgetIndex;
	bool                                          Temp_bool_Variable;
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue;
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue_1;
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue_2;
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue_3;
	bool                                          CallFunc_BooleanOR_ReturnValue;
	bool                                          CallFunc_BooleanOR_ReturnValue_1;
	uint8                                         Pad_53[0x5];
	class UFortFrontEndContext*                   CallFunc_GetContext_ReturnValue_1;
	bool                                          CallFunc_IsMobileGame_ReturnValue;
	bool                                          CallFunc_BooleanAND_ReturnValue;
	bool                                          CallFunc_BooleanOR_ReturnValue_2;
	ESlateVisibility                              K2Node_Select_Default;
};
static_assert(alignof(LoginScreen_C_ExecuteUbergraph_LoginScreen) == 0x000008, "Wrong alignment on LoginScreen_C_ExecuteUbergraph_LoginScreen");
static_assert(sizeof(LoginScreen_C_ExecuteUbergraph_LoginScreen) == 0x000068, "Wrong size on LoginScreen_C_ExecuteUbergraph_LoginScreen");
static_assert(offsetof(LoginScreen_C_ExecuteUbergraph_LoginScreen, EntryPoint) == 0x000000, "Member 'LoginScreen_C_ExecuteUbergraph_LoginScreen::EntryPoint' has a wrong offset!");
static_assert(offsetof(LoginScreen_C_ExecuteUbergraph_LoginScreen, CallFunc_GetContext_ReturnValue) == 0x000008, "Member 'LoginScreen_C_ExecuteUbergraph_LoginScreen::CallFunc_GetContext_ReturnValue' has a wrong offset!");
static_assert(offsetof(LoginScreen_C_ExecuteUbergraph_LoginScreen, Temp_byte_Variable) == 0x000010, "Member 'LoginScreen_C_ExecuteUbergraph_LoginScreen::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(LoginScreen_C_ExecuteUbergraph_LoginScreen, Temp_byte_Variable_1) == 0x000011, "Member 'LoginScreen_C_ExecuteUbergraph_LoginScreen::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(LoginScreen_C_ExecuteUbergraph_LoginScreen, CallFunc_GetRuntimeOptions_ReturnValue) == 0x000018, "Member 'LoginScreen_C_ExecuteUbergraph_LoginScreen::CallFunc_GetRuntimeOptions_ReturnValue' has a wrong offset!");
static_assert(offsetof(LoginScreen_C_ExecuteUbergraph_LoginScreen, CallFunc_GetGameVersion_ReturnValue) == 0x000020, "Member 'LoginScreen_C_ExecuteUbergraph_LoginScreen::CallFunc_GetGameVersion_ReturnValue' has a wrong offset!");
static_assert(offsetof(LoginScreen_C_ExecuteUbergraph_LoginScreen, CallFunc_Conv_StringToText_ReturnValue) == 0x000030, "Member 'LoginScreen_C_ExecuteUbergraph_LoginScreen::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(LoginScreen_C_ExecuteUbergraph_LoginScreen, K2Node_Event_NewActiveWidgetIndex) == 0x000048, "Member 'LoginScreen_C_ExecuteUbergraph_LoginScreen::K2Node_Event_NewActiveWidgetIndex' has a wrong offset!");
static_assert(offsetof(LoginScreen_C_ExecuteUbergraph_LoginScreen, Temp_bool_Variable) == 0x00004C, "Member 'LoginScreen_C_ExecuteUbergraph_LoginScreen::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(LoginScreen_C_ExecuteUbergraph_LoginScreen, CallFunc_EqualEqual_IntInt_ReturnValue) == 0x00004D, "Member 'LoginScreen_C_ExecuteUbergraph_LoginScreen::CallFunc_EqualEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(LoginScreen_C_ExecuteUbergraph_LoginScreen, CallFunc_EqualEqual_IntInt_ReturnValue_1) == 0x00004E, "Member 'LoginScreen_C_ExecuteUbergraph_LoginScreen::CallFunc_EqualEqual_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(LoginScreen_C_ExecuteUbergraph_LoginScreen, CallFunc_EqualEqual_IntInt_ReturnValue_2) == 0x00004F, "Member 'LoginScreen_C_ExecuteUbergraph_LoginScreen::CallFunc_EqualEqual_IntInt_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(LoginScreen_C_ExecuteUbergraph_LoginScreen, CallFunc_EqualEqual_IntInt_ReturnValue_3) == 0x000050, "Member 'LoginScreen_C_ExecuteUbergraph_LoginScreen::CallFunc_EqualEqual_IntInt_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(LoginScreen_C_ExecuteUbergraph_LoginScreen, CallFunc_BooleanOR_ReturnValue) == 0x000051, "Member 'LoginScreen_C_ExecuteUbergraph_LoginScreen::CallFunc_BooleanOR_ReturnValue' has a wrong offset!");
static_assert(offsetof(LoginScreen_C_ExecuteUbergraph_LoginScreen, CallFunc_BooleanOR_ReturnValue_1) == 0x000052, "Member 'LoginScreen_C_ExecuteUbergraph_LoginScreen::CallFunc_BooleanOR_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(LoginScreen_C_ExecuteUbergraph_LoginScreen, CallFunc_GetContext_ReturnValue_1) == 0x000058, "Member 'LoginScreen_C_ExecuteUbergraph_LoginScreen::CallFunc_GetContext_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(LoginScreen_C_ExecuteUbergraph_LoginScreen, CallFunc_IsMobileGame_ReturnValue) == 0x000060, "Member 'LoginScreen_C_ExecuteUbergraph_LoginScreen::CallFunc_IsMobileGame_ReturnValue' has a wrong offset!");
static_assert(offsetof(LoginScreen_C_ExecuteUbergraph_LoginScreen, CallFunc_BooleanAND_ReturnValue) == 0x000061, "Member 'LoginScreen_C_ExecuteUbergraph_LoginScreen::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(LoginScreen_C_ExecuteUbergraph_LoginScreen, CallFunc_BooleanOR_ReturnValue_2) == 0x000062, "Member 'LoginScreen_C_ExecuteUbergraph_LoginScreen::CallFunc_BooleanOR_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(LoginScreen_C_ExecuteUbergraph_LoginScreen, K2Node_Select_Default) == 0x000063, "Member 'LoginScreen_C_ExecuteUbergraph_LoginScreen::K2Node_Select_Default' has a wrong offset!");

}
