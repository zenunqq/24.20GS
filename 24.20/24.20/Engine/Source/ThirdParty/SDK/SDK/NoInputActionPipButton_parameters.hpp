#pragma once

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "UMG_structs.hpp"

namespace SDK::Params
{

struct NoInputActionPipButton_C_ExecuteUbergraph_NoInputActionPipButton final
{
public:
	int32                                         EntryPoint;
	bool                                          Temp_bool_Variable;
	uint8                                         Pad_5[0x3];
	class UUMGSequencePlayer*                     CallFunc_PlayAnimationReverse_ReturnValue;
	class UUMGSequencePlayer*                     CallFunc_PlayAnimationForward_ReturnValue;
	bool                                          K2Node_Event_IsDesignTime;
	bool                                          CallFunc_IsMobileGame_ReturnValue;
	uint8                                         Pad_1A[0x6];
	class UFortRuntimeOptions*                    CallFunc_GetRuntimeOptions_ReturnValue;
	struct FLinearColor                           K2Node_CustomEvent_Base_Color;
	struct FLinearColor                           K2Node_CustomEvent_Hover_Color;
	struct FLinearColor                           K2Node_CustomEvent_Select_Color;
	bool                                          CallFunc_BooleanAND_ReturnValue;
	uint8                                         Pad_59[0x7];
	class UMaterialInstanceDynamic*               CallFunc_GetDynamicMaterial_ReturnValue;
	ESlateVisibility                              Temp_byte_Variable;
	ESlateVisibility                              Temp_byte_Variable_1;
	ESlateVisibility                              K2Node_Select_Default;
};
static_assert(alignof(NoInputActionPipButton_C_ExecuteUbergraph_NoInputActionPipButton) == 0x000008, "Wrong alignment on NoInputActionPipButton_C_ExecuteUbergraph_NoInputActionPipButton");
static_assert(sizeof(NoInputActionPipButton_C_ExecuteUbergraph_NoInputActionPipButton) == 0x000070, "Wrong size on NoInputActionPipButton_C_ExecuteUbergraph_NoInputActionPipButton");
static_assert(offsetof(NoInputActionPipButton_C_ExecuteUbergraph_NoInputActionPipButton, EntryPoint) == 0x000000, "Member 'NoInputActionPipButton_C_ExecuteUbergraph_NoInputActionPipButton::EntryPoint' has a wrong offset!");
static_assert(offsetof(NoInputActionPipButton_C_ExecuteUbergraph_NoInputActionPipButton, Temp_bool_Variable) == 0x000004, "Member 'NoInputActionPipButton_C_ExecuteUbergraph_NoInputActionPipButton::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(NoInputActionPipButton_C_ExecuteUbergraph_NoInputActionPipButton, CallFunc_PlayAnimationReverse_ReturnValue) == 0x000008, "Member 'NoInputActionPipButton_C_ExecuteUbergraph_NoInputActionPipButton::CallFunc_PlayAnimationReverse_ReturnValue' has a wrong offset!");
static_assert(offsetof(NoInputActionPipButton_C_ExecuteUbergraph_NoInputActionPipButton, CallFunc_PlayAnimationForward_ReturnValue) == 0x000010, "Member 'NoInputActionPipButton_C_ExecuteUbergraph_NoInputActionPipButton::CallFunc_PlayAnimationForward_ReturnValue' has a wrong offset!");
static_assert(offsetof(NoInputActionPipButton_C_ExecuteUbergraph_NoInputActionPipButton, K2Node_Event_IsDesignTime) == 0x000018, "Member 'NoInputActionPipButton_C_ExecuteUbergraph_NoInputActionPipButton::K2Node_Event_IsDesignTime' has a wrong offset!");
static_assert(offsetof(NoInputActionPipButton_C_ExecuteUbergraph_NoInputActionPipButton, CallFunc_IsMobileGame_ReturnValue) == 0x000019, "Member 'NoInputActionPipButton_C_ExecuteUbergraph_NoInputActionPipButton::CallFunc_IsMobileGame_ReturnValue' has a wrong offset!");
static_assert(offsetof(NoInputActionPipButton_C_ExecuteUbergraph_NoInputActionPipButton, CallFunc_GetRuntimeOptions_ReturnValue) == 0x000020, "Member 'NoInputActionPipButton_C_ExecuteUbergraph_NoInputActionPipButton::CallFunc_GetRuntimeOptions_ReturnValue' has a wrong offset!");
static_assert(offsetof(NoInputActionPipButton_C_ExecuteUbergraph_NoInputActionPipButton, K2Node_CustomEvent_Base_Color) == 0x000028, "Member 'NoInputActionPipButton_C_ExecuteUbergraph_NoInputActionPipButton::K2Node_CustomEvent_Base_Color' has a wrong offset!");
static_assert(offsetof(NoInputActionPipButton_C_ExecuteUbergraph_NoInputActionPipButton, K2Node_CustomEvent_Hover_Color) == 0x000038, "Member 'NoInputActionPipButton_C_ExecuteUbergraph_NoInputActionPipButton::K2Node_CustomEvent_Hover_Color' has a wrong offset!");
static_assert(offsetof(NoInputActionPipButton_C_ExecuteUbergraph_NoInputActionPipButton, K2Node_CustomEvent_Select_Color) == 0x000048, "Member 'NoInputActionPipButton_C_ExecuteUbergraph_NoInputActionPipButton::K2Node_CustomEvent_Select_Color' has a wrong offset!");
static_assert(offsetof(NoInputActionPipButton_C_ExecuteUbergraph_NoInputActionPipButton, CallFunc_BooleanAND_ReturnValue) == 0x000058, "Member 'NoInputActionPipButton_C_ExecuteUbergraph_NoInputActionPipButton::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(NoInputActionPipButton_C_ExecuteUbergraph_NoInputActionPipButton, CallFunc_GetDynamicMaterial_ReturnValue) == 0x000060, "Member 'NoInputActionPipButton_C_ExecuteUbergraph_NoInputActionPipButton::CallFunc_GetDynamicMaterial_ReturnValue' has a wrong offset!");
static_assert(offsetof(NoInputActionPipButton_C_ExecuteUbergraph_NoInputActionPipButton, Temp_byte_Variable) == 0x000068, "Member 'NoInputActionPipButton_C_ExecuteUbergraph_NoInputActionPipButton::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(NoInputActionPipButton_C_ExecuteUbergraph_NoInputActionPipButton, Temp_byte_Variable_1) == 0x000069, "Member 'NoInputActionPipButton_C_ExecuteUbergraph_NoInputActionPipButton::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(NoInputActionPipButton_C_ExecuteUbergraph_NoInputActionPipButton, K2Node_Select_Default) == 0x00006A, "Member 'NoInputActionPipButton_C_ExecuteUbergraph_NoInputActionPipButton::K2Node_Select_Default' has a wrong offset!");

struct NoInputActionPipButton_C_PreConstruct final
{
public:
	bool                                          IsDesignTime;
};
static_assert(alignof(NoInputActionPipButton_C_PreConstruct) == 0x000001, "Wrong alignment on NoInputActionPipButton_C_PreConstruct");
static_assert(sizeof(NoInputActionPipButton_C_PreConstruct) == 0x000001, "Wrong size on NoInputActionPipButton_C_PreConstruct");
static_assert(offsetof(NoInputActionPipButton_C_PreConstruct, IsDesignTime) == 0x000000, "Member 'NoInputActionPipButton_C_PreConstruct::IsDesignTime' has a wrong offset!");

struct NoInputActionPipButton_C_Set_Pip_Colors final
{
public:
	struct FLinearColor                           Base_Color;
	struct FLinearColor                           Hover_Color;
	struct FLinearColor                           Select_Color;
};
static_assert(alignof(NoInputActionPipButton_C_Set_Pip_Colors) == 0x000004, "Wrong alignment on NoInputActionPipButton_C_Set_Pip_Colors");
static_assert(sizeof(NoInputActionPipButton_C_Set_Pip_Colors) == 0x000030, "Wrong size on NoInputActionPipButton_C_Set_Pip_Colors");
static_assert(offsetof(NoInputActionPipButton_C_Set_Pip_Colors, Base_Color) == 0x000000, "Member 'NoInputActionPipButton_C_Set_Pip_Colors::Base_Color' has a wrong offset!");
static_assert(offsetof(NoInputActionPipButton_C_Set_Pip_Colors, Hover_Color) == 0x000010, "Member 'NoInputActionPipButton_C_Set_Pip_Colors::Hover_Color' has a wrong offset!");
static_assert(offsetof(NoInputActionPipButton_C_Set_Pip_Colors, Select_Color) == 0x000020, "Member 'NoInputActionPipButton_C_Set_Pip_Colors::Select_Color' has a wrong offset!");

}
