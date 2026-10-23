#pragma once

#include "Basic.hpp"

#include "SlateCore_structs.hpp"
#include "Engine_structs.hpp"
#include "UMG_structs.hpp"

namespace SDK::Params
{

struct PowerToastWidget_C_ExecuteUbergraph_PowerToastWidget final
{
public:
	int32                                         EntryPoint;
	bool                                          CallFunc_GetDisplayTime_bOutDisplayTimeOverridden;
	uint8                                         Pad_5[0x3];
	float                                         CallFunc_GetDisplayTime_ReturnValue;
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;
	struct FTimerHandle                           CallFunc_K2_SetTimerDelegate_ReturnValue;
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;
	struct FGeometry                              K2Node_Event_MyGeometry;
	struct FPointerEvent                          K2Node_Event_MouseEvent_1;
	struct FPointerEvent                          K2Node_Event_MouseEvent;
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue_1;
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue_2;
	bool                                          CallFunc_IsAnimationPlaying_ReturnValue;
	uint8                                         Pad_1A9[0x7];
	class UFortRuntimeOptions*                    CallFunc_GetRuntimeOptions_ReturnValue;
	ESlateVisibility                              CallFunc_GetVisibility_ReturnValue;
};
static_assert(alignof(PowerToastWidget_C_ExecuteUbergraph_PowerToastWidget) == 0x000008, "Wrong alignment on PowerToastWidget_C_ExecuteUbergraph_PowerToastWidget");
static_assert(sizeof(PowerToastWidget_C_ExecuteUbergraph_PowerToastWidget) == 0x0001C0, "Wrong size on PowerToastWidget_C_ExecuteUbergraph_PowerToastWidget");
static_assert(offsetof(PowerToastWidget_C_ExecuteUbergraph_PowerToastWidget, EntryPoint) == 0x000000, "Member 'PowerToastWidget_C_ExecuteUbergraph_PowerToastWidget::EntryPoint' has a wrong offset!");
static_assert(offsetof(PowerToastWidget_C_ExecuteUbergraph_PowerToastWidget, CallFunc_GetDisplayTime_bOutDisplayTimeOverridden) == 0x000004, "Member 'PowerToastWidget_C_ExecuteUbergraph_PowerToastWidget::CallFunc_GetDisplayTime_bOutDisplayTimeOverridden' has a wrong offset!");
static_assert(offsetof(PowerToastWidget_C_ExecuteUbergraph_PowerToastWidget, CallFunc_GetDisplayTime_ReturnValue) == 0x000008, "Member 'PowerToastWidget_C_ExecuteUbergraph_PowerToastWidget::CallFunc_GetDisplayTime_ReturnValue' has a wrong offset!");
static_assert(offsetof(PowerToastWidget_C_ExecuteUbergraph_PowerToastWidget, K2Node_CreateDelegate_OutputDelegate) == 0x00000C, "Member 'PowerToastWidget_C_ExecuteUbergraph_PowerToastWidget::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(PowerToastWidget_C_ExecuteUbergraph_PowerToastWidget, CallFunc_K2_SetTimerDelegate_ReturnValue) == 0x000018, "Member 'PowerToastWidget_C_ExecuteUbergraph_PowerToastWidget::CallFunc_K2_SetTimerDelegate_ReturnValue' has a wrong offset!");
static_assert(offsetof(PowerToastWidget_C_ExecuteUbergraph_PowerToastWidget, CallFunc_PlayAnimation_ReturnValue) == 0x000020, "Member 'PowerToastWidget_C_ExecuteUbergraph_PowerToastWidget::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");
static_assert(offsetof(PowerToastWidget_C_ExecuteUbergraph_PowerToastWidget, K2Node_Event_MyGeometry) == 0x000028, "Member 'PowerToastWidget_C_ExecuteUbergraph_PowerToastWidget::K2Node_Event_MyGeometry' has a wrong offset!");
static_assert(offsetof(PowerToastWidget_C_ExecuteUbergraph_PowerToastWidget, K2Node_Event_MouseEvent_1) == 0x000068, "Member 'PowerToastWidget_C_ExecuteUbergraph_PowerToastWidget::K2Node_Event_MouseEvent_1' has a wrong offset!");
static_assert(offsetof(PowerToastWidget_C_ExecuteUbergraph_PowerToastWidget, K2Node_Event_MouseEvent) == 0x000100, "Member 'PowerToastWidget_C_ExecuteUbergraph_PowerToastWidget::K2Node_Event_MouseEvent' has a wrong offset!");
static_assert(offsetof(PowerToastWidget_C_ExecuteUbergraph_PowerToastWidget, CallFunc_PlayAnimation_ReturnValue_1) == 0x000198, "Member 'PowerToastWidget_C_ExecuteUbergraph_PowerToastWidget::CallFunc_PlayAnimation_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(PowerToastWidget_C_ExecuteUbergraph_PowerToastWidget, CallFunc_PlayAnimation_ReturnValue_2) == 0x0001A0, "Member 'PowerToastWidget_C_ExecuteUbergraph_PowerToastWidget::CallFunc_PlayAnimation_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(PowerToastWidget_C_ExecuteUbergraph_PowerToastWidget, CallFunc_IsAnimationPlaying_ReturnValue) == 0x0001A8, "Member 'PowerToastWidget_C_ExecuteUbergraph_PowerToastWidget::CallFunc_IsAnimationPlaying_ReturnValue' has a wrong offset!");
static_assert(offsetof(PowerToastWidget_C_ExecuteUbergraph_PowerToastWidget, CallFunc_GetRuntimeOptions_ReturnValue) == 0x0001B0, "Member 'PowerToastWidget_C_ExecuteUbergraph_PowerToastWidget::CallFunc_GetRuntimeOptions_ReturnValue' has a wrong offset!");
static_assert(offsetof(PowerToastWidget_C_ExecuteUbergraph_PowerToastWidget, CallFunc_GetVisibility_ReturnValue) == 0x0001B8, "Member 'PowerToastWidget_C_ExecuteUbergraph_PowerToastWidget::CallFunc_GetVisibility_ReturnValue' has a wrong offset!");

struct PowerToastWidget_C_OnMouseEnter final
{
public:
	struct FGeometry                              MyGeometry;
	struct FPointerEvent                          MouseEvent;
};
static_assert(alignof(PowerToastWidget_C_OnMouseEnter) == 0x000008, "Wrong alignment on PowerToastWidget_C_OnMouseEnter");
static_assert(sizeof(PowerToastWidget_C_OnMouseEnter) == 0x0000D8, "Wrong size on PowerToastWidget_C_OnMouseEnter");
static_assert(offsetof(PowerToastWidget_C_OnMouseEnter, MyGeometry) == 0x000000, "Member 'PowerToastWidget_C_OnMouseEnter::MyGeometry' has a wrong offset!");
static_assert(offsetof(PowerToastWidget_C_OnMouseEnter, MouseEvent) == 0x000040, "Member 'PowerToastWidget_C_OnMouseEnter::MouseEvent' has a wrong offset!");

struct PowerToastWidget_C_OnMouseLeave final
{
public:
	struct FPointerEvent                          MouseEvent;
};
static_assert(alignof(PowerToastWidget_C_OnMouseLeave) == 0x000008, "Wrong alignment on PowerToastWidget_C_OnMouseLeave");
static_assert(sizeof(PowerToastWidget_C_OnMouseLeave) == 0x000098, "Wrong size on PowerToastWidget_C_OnMouseLeave");
static_assert(offsetof(PowerToastWidget_C_OnMouseLeave, MouseEvent) == 0x000000, "Member 'PowerToastWidget_C_OnMouseLeave::MouseEvent' has a wrong offset!");

}
