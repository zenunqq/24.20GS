#pragma once

#include "Basic.hpp"

#include "CommonInput_structs.hpp"

namespace SDK::Params
{

struct SplashScreenWidget_C_OnInputMethodChanged final
{
public:
	ECommonInputType                              InputType;
};
static_assert(alignof(SplashScreenWidget_C_OnInputMethodChanged) == 0x000001, "Wrong alignment on SplashScreenWidget_C_OnInputMethodChanged");
static_assert(sizeof(SplashScreenWidget_C_OnInputMethodChanged) == 0x000001, "Wrong size on SplashScreenWidget_C_OnInputMethodChanged");
static_assert(offsetof(SplashScreenWidget_C_OnInputMethodChanged, InputType) == 0x000000, "Member 'SplashScreenWidget_C_OnInputMethodChanged::InputType' has a wrong offset!");

struct SplashScreenWidget_C_ExecuteUbergraph_SplashScreenWidget final
{
public:
	int32                                         EntryPoint;
	bool                                          CallFunc_IsTouchInputPlatform_ReturnValue;
	ECommonInputType                              K2Node_Event_InputType;
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;
	bool                                          CallFunc_BooleanOR_ReturnValue;
	class UFortGlobalUIContext*                   CallFunc_GetContext_ReturnValue;
	bool                                          Temp_bool_Variable;
	bool                                          CallFunc_IsMobileApp_ReturnValue;
	uint8                                         Pad_12[0x6];
	class FText                                   K2Node_Select_Default;
	class UMusicEventSubsystem*                   CallFunc_GetGameInstanceSubsystem_ReturnValue;
	class UAudioComponent*                        CallFunc_AddEvent_ReturnValue;
};
static_assert(alignof(SplashScreenWidget_C_ExecuteUbergraph_SplashScreenWidget) == 0x000008, "Wrong alignment on SplashScreenWidget_C_ExecuteUbergraph_SplashScreenWidget");
static_assert(sizeof(SplashScreenWidget_C_ExecuteUbergraph_SplashScreenWidget) == 0x000040, "Wrong size on SplashScreenWidget_C_ExecuteUbergraph_SplashScreenWidget");
static_assert(offsetof(SplashScreenWidget_C_ExecuteUbergraph_SplashScreenWidget, EntryPoint) == 0x000000, "Member 'SplashScreenWidget_C_ExecuteUbergraph_SplashScreenWidget::EntryPoint' has a wrong offset!");
static_assert(offsetof(SplashScreenWidget_C_ExecuteUbergraph_SplashScreenWidget, CallFunc_IsTouchInputPlatform_ReturnValue) == 0x000004, "Member 'SplashScreenWidget_C_ExecuteUbergraph_SplashScreenWidget::CallFunc_IsTouchInputPlatform_ReturnValue' has a wrong offset!");
static_assert(offsetof(SplashScreenWidget_C_ExecuteUbergraph_SplashScreenWidget, K2Node_Event_InputType) == 0x000005, "Member 'SplashScreenWidget_C_ExecuteUbergraph_SplashScreenWidget::K2Node_Event_InputType' has a wrong offset!");
static_assert(offsetof(SplashScreenWidget_C_ExecuteUbergraph_SplashScreenWidget, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x000006, "Member 'SplashScreenWidget_C_ExecuteUbergraph_SplashScreenWidget::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(SplashScreenWidget_C_ExecuteUbergraph_SplashScreenWidget, CallFunc_BooleanOR_ReturnValue) == 0x000007, "Member 'SplashScreenWidget_C_ExecuteUbergraph_SplashScreenWidget::CallFunc_BooleanOR_ReturnValue' has a wrong offset!");
static_assert(offsetof(SplashScreenWidget_C_ExecuteUbergraph_SplashScreenWidget, CallFunc_GetContext_ReturnValue) == 0x000008, "Member 'SplashScreenWidget_C_ExecuteUbergraph_SplashScreenWidget::CallFunc_GetContext_ReturnValue' has a wrong offset!");
static_assert(offsetof(SplashScreenWidget_C_ExecuteUbergraph_SplashScreenWidget, Temp_bool_Variable) == 0x000010, "Member 'SplashScreenWidget_C_ExecuteUbergraph_SplashScreenWidget::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(SplashScreenWidget_C_ExecuteUbergraph_SplashScreenWidget, CallFunc_IsMobileApp_ReturnValue) == 0x000011, "Member 'SplashScreenWidget_C_ExecuteUbergraph_SplashScreenWidget::CallFunc_IsMobileApp_ReturnValue' has a wrong offset!");
static_assert(offsetof(SplashScreenWidget_C_ExecuteUbergraph_SplashScreenWidget, K2Node_Select_Default) == 0x000018, "Member 'SplashScreenWidget_C_ExecuteUbergraph_SplashScreenWidget::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(SplashScreenWidget_C_ExecuteUbergraph_SplashScreenWidget, CallFunc_GetGameInstanceSubsystem_ReturnValue) == 0x000030, "Member 'SplashScreenWidget_C_ExecuteUbergraph_SplashScreenWidget::CallFunc_GetGameInstanceSubsystem_ReturnValue' has a wrong offset!");
static_assert(offsetof(SplashScreenWidget_C_ExecuteUbergraph_SplashScreenWidget, CallFunc_AddEvent_ReturnValue) == 0x000038, "Member 'SplashScreenWidget_C_ExecuteUbergraph_SplashScreenWidget::CallFunc_AddEvent_ReturnValue' has a wrong offset!");

}
