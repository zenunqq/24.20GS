#pragma once

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "SlateCore_structs.hpp"

namespace SDK::Params
{

struct PageNavigatorButton_C_ExecuteUbergraph_PageNavigatorButton final
{
public:
	int32                                         EntryPoint;
	bool                                          Temp_bool_Variable;
	uint8                                         Pad_5[0x3];
	struct FVector2D                              Temp_struct_Variable;
	struct FVector2D                              Temp_struct_Variable_1;
	bool                                          Temp_bool_Variable_1;
	bool                                          Temp_bool_Variable_2;
	uint8                                         Pad_2A[0x6];
	struct FVector2D                              Temp_struct_Variable_2;
	struct FVector2D                              Temp_struct_Variable_3;
	bool                                          Temp_bool_Variable_3;
	EVerticalAlignment                            Temp_byte_Variable;
	EVerticalAlignment                            Temp_byte_Variable_1;
	bool                                          K2Node_Event_IsDesignTime;
	uint8                                         Pad_54[0x4];
	class UUMGSequencePlayer*                     CallFunc_PlayAnimationReverse_ReturnValue;
	class UUMGSequencePlayer*                     CallFunc_PlayAnimationForward_ReturnValue;
	class UWidgetAnimation*                       K2Node_Select_Default;
	class UUMGSequencePlayer*                     CallFunc_PlayAnimationReverse_ReturnValue_1;
	class UUMGSequencePlayer*                     CallFunc_PlayAnimationReverse_ReturnValue_2;
	class UUMGSequencePlayer*                     CallFunc_PlayAnimationForward_ReturnValue_1;
	class UUMGSequencePlayer*                     CallFunc_PlayAnimationForward_ReturnValue_2;
	bool                                          Temp_bool_Variable_4;
	uint8                                         Pad_91[0x7];
	struct FVector2D                              K2Node_Select_Default_1;
	struct FVector2D                              K2Node_Select_Default_2;
	class UMaterialInterface*                     Temp_object_Variable;
	EVerticalAlignment                            K2Node_Select_Default_3;
	uint8                                         Pad_C1[0x7];
	class UMaterialInstanceDynamic*               CallFunc_GetDynamicMaterial_ReturnValue;
	class UMaterialInstanceDynamic*               CallFunc_GetDynamicMaterial_ReturnValue_1;
	struct FLinearColor                           K2Node_CustomEvent_Color1;
	struct FLinearColor                           K2Node_CustomEvent_Color2;
	struct FLinearColor                           K2Node_CustomEvent_Color3;
	struct FLinearColor                           K2Node_CustomEvent_Color4;
	struct FLinearColor                           K2Node_CustomEvent_Color5;
	class UMaterialInterface*                     Temp_object_Variable_1;
	bool                                          Temp_bool_Variable_5;
	uint8                                         Pad_131[0x7];
	class UMaterialInterface*                     Temp_object_Variable_2;
	class UMaterialInterface*                     K2Node_Select_Default_4;
	class UMaterialInterface*                     Temp_object_Variable_3;
	class UMaterialInterface*                     K2Node_Select_Default_5;
	class UMaterialInstanceDynamic*               CallFunc_GetDynamicFontMaterial_ReturnValue;
};
static_assert(alignof(PageNavigatorButton_C_ExecuteUbergraph_PageNavigatorButton) == 0x000008, "Wrong alignment on PageNavigatorButton_C_ExecuteUbergraph_PageNavigatorButton");
static_assert(sizeof(PageNavigatorButton_C_ExecuteUbergraph_PageNavigatorButton) == 0x000160, "Wrong size on PageNavigatorButton_C_ExecuteUbergraph_PageNavigatorButton");
static_assert(offsetof(PageNavigatorButton_C_ExecuteUbergraph_PageNavigatorButton, EntryPoint) == 0x000000, "Member 'PageNavigatorButton_C_ExecuteUbergraph_PageNavigatorButton::EntryPoint' has a wrong offset!");
static_assert(offsetof(PageNavigatorButton_C_ExecuteUbergraph_PageNavigatorButton, Temp_bool_Variable) == 0x000004, "Member 'PageNavigatorButton_C_ExecuteUbergraph_PageNavigatorButton::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(PageNavigatorButton_C_ExecuteUbergraph_PageNavigatorButton, Temp_struct_Variable) == 0x000008, "Member 'PageNavigatorButton_C_ExecuteUbergraph_PageNavigatorButton::Temp_struct_Variable' has a wrong offset!");
static_assert(offsetof(PageNavigatorButton_C_ExecuteUbergraph_PageNavigatorButton, Temp_struct_Variable_1) == 0x000018, "Member 'PageNavigatorButton_C_ExecuteUbergraph_PageNavigatorButton::Temp_struct_Variable_1' has a wrong offset!");
static_assert(offsetof(PageNavigatorButton_C_ExecuteUbergraph_PageNavigatorButton, Temp_bool_Variable_1) == 0x000028, "Member 'PageNavigatorButton_C_ExecuteUbergraph_PageNavigatorButton::Temp_bool_Variable_1' has a wrong offset!");
static_assert(offsetof(PageNavigatorButton_C_ExecuteUbergraph_PageNavigatorButton, Temp_bool_Variable_2) == 0x000029, "Member 'PageNavigatorButton_C_ExecuteUbergraph_PageNavigatorButton::Temp_bool_Variable_2' has a wrong offset!");
static_assert(offsetof(PageNavigatorButton_C_ExecuteUbergraph_PageNavigatorButton, Temp_struct_Variable_2) == 0x000030, "Member 'PageNavigatorButton_C_ExecuteUbergraph_PageNavigatorButton::Temp_struct_Variable_2' has a wrong offset!");
static_assert(offsetof(PageNavigatorButton_C_ExecuteUbergraph_PageNavigatorButton, Temp_struct_Variable_3) == 0x000040, "Member 'PageNavigatorButton_C_ExecuteUbergraph_PageNavigatorButton::Temp_struct_Variable_3' has a wrong offset!");
static_assert(offsetof(PageNavigatorButton_C_ExecuteUbergraph_PageNavigatorButton, Temp_bool_Variable_3) == 0x000050, "Member 'PageNavigatorButton_C_ExecuteUbergraph_PageNavigatorButton::Temp_bool_Variable_3' has a wrong offset!");
static_assert(offsetof(PageNavigatorButton_C_ExecuteUbergraph_PageNavigatorButton, Temp_byte_Variable) == 0x000051, "Member 'PageNavigatorButton_C_ExecuteUbergraph_PageNavigatorButton::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(PageNavigatorButton_C_ExecuteUbergraph_PageNavigatorButton, Temp_byte_Variable_1) == 0x000052, "Member 'PageNavigatorButton_C_ExecuteUbergraph_PageNavigatorButton::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(PageNavigatorButton_C_ExecuteUbergraph_PageNavigatorButton, K2Node_Event_IsDesignTime) == 0x000053, "Member 'PageNavigatorButton_C_ExecuteUbergraph_PageNavigatorButton::K2Node_Event_IsDesignTime' has a wrong offset!");
static_assert(offsetof(PageNavigatorButton_C_ExecuteUbergraph_PageNavigatorButton, CallFunc_PlayAnimationReverse_ReturnValue) == 0x000058, "Member 'PageNavigatorButton_C_ExecuteUbergraph_PageNavigatorButton::CallFunc_PlayAnimationReverse_ReturnValue' has a wrong offset!");
static_assert(offsetof(PageNavigatorButton_C_ExecuteUbergraph_PageNavigatorButton, CallFunc_PlayAnimationForward_ReturnValue) == 0x000060, "Member 'PageNavigatorButton_C_ExecuteUbergraph_PageNavigatorButton::CallFunc_PlayAnimationForward_ReturnValue' has a wrong offset!");
static_assert(offsetof(PageNavigatorButton_C_ExecuteUbergraph_PageNavigatorButton, K2Node_Select_Default) == 0x000068, "Member 'PageNavigatorButton_C_ExecuteUbergraph_PageNavigatorButton::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(PageNavigatorButton_C_ExecuteUbergraph_PageNavigatorButton, CallFunc_PlayAnimationReverse_ReturnValue_1) == 0x000070, "Member 'PageNavigatorButton_C_ExecuteUbergraph_PageNavigatorButton::CallFunc_PlayAnimationReverse_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(PageNavigatorButton_C_ExecuteUbergraph_PageNavigatorButton, CallFunc_PlayAnimationReverse_ReturnValue_2) == 0x000078, "Member 'PageNavigatorButton_C_ExecuteUbergraph_PageNavigatorButton::CallFunc_PlayAnimationReverse_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(PageNavigatorButton_C_ExecuteUbergraph_PageNavigatorButton, CallFunc_PlayAnimationForward_ReturnValue_1) == 0x000080, "Member 'PageNavigatorButton_C_ExecuteUbergraph_PageNavigatorButton::CallFunc_PlayAnimationForward_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(PageNavigatorButton_C_ExecuteUbergraph_PageNavigatorButton, CallFunc_PlayAnimationForward_ReturnValue_2) == 0x000088, "Member 'PageNavigatorButton_C_ExecuteUbergraph_PageNavigatorButton::CallFunc_PlayAnimationForward_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(PageNavigatorButton_C_ExecuteUbergraph_PageNavigatorButton, Temp_bool_Variable_4) == 0x000090, "Member 'PageNavigatorButton_C_ExecuteUbergraph_PageNavigatorButton::Temp_bool_Variable_4' has a wrong offset!");
static_assert(offsetof(PageNavigatorButton_C_ExecuteUbergraph_PageNavigatorButton, K2Node_Select_Default_1) == 0x000098, "Member 'PageNavigatorButton_C_ExecuteUbergraph_PageNavigatorButton::K2Node_Select_Default_1' has a wrong offset!");
static_assert(offsetof(PageNavigatorButton_C_ExecuteUbergraph_PageNavigatorButton, K2Node_Select_Default_2) == 0x0000A8, "Member 'PageNavigatorButton_C_ExecuteUbergraph_PageNavigatorButton::K2Node_Select_Default_2' has a wrong offset!");
static_assert(offsetof(PageNavigatorButton_C_ExecuteUbergraph_PageNavigatorButton, Temp_object_Variable) == 0x0000B8, "Member 'PageNavigatorButton_C_ExecuteUbergraph_PageNavigatorButton::Temp_object_Variable' has a wrong offset!");
static_assert(offsetof(PageNavigatorButton_C_ExecuteUbergraph_PageNavigatorButton, K2Node_Select_Default_3) == 0x0000C0, "Member 'PageNavigatorButton_C_ExecuteUbergraph_PageNavigatorButton::K2Node_Select_Default_3' has a wrong offset!");
static_assert(offsetof(PageNavigatorButton_C_ExecuteUbergraph_PageNavigatorButton, CallFunc_GetDynamicMaterial_ReturnValue) == 0x0000C8, "Member 'PageNavigatorButton_C_ExecuteUbergraph_PageNavigatorButton::CallFunc_GetDynamicMaterial_ReturnValue' has a wrong offset!");
static_assert(offsetof(PageNavigatorButton_C_ExecuteUbergraph_PageNavigatorButton, CallFunc_GetDynamicMaterial_ReturnValue_1) == 0x0000D0, "Member 'PageNavigatorButton_C_ExecuteUbergraph_PageNavigatorButton::CallFunc_GetDynamicMaterial_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(PageNavigatorButton_C_ExecuteUbergraph_PageNavigatorButton, K2Node_CustomEvent_Color1) == 0x0000D8, "Member 'PageNavigatorButton_C_ExecuteUbergraph_PageNavigatorButton::K2Node_CustomEvent_Color1' has a wrong offset!");
static_assert(offsetof(PageNavigatorButton_C_ExecuteUbergraph_PageNavigatorButton, K2Node_CustomEvent_Color2) == 0x0000E8, "Member 'PageNavigatorButton_C_ExecuteUbergraph_PageNavigatorButton::K2Node_CustomEvent_Color2' has a wrong offset!");
static_assert(offsetof(PageNavigatorButton_C_ExecuteUbergraph_PageNavigatorButton, K2Node_CustomEvent_Color3) == 0x0000F8, "Member 'PageNavigatorButton_C_ExecuteUbergraph_PageNavigatorButton::K2Node_CustomEvent_Color3' has a wrong offset!");
static_assert(offsetof(PageNavigatorButton_C_ExecuteUbergraph_PageNavigatorButton, K2Node_CustomEvent_Color4) == 0x000108, "Member 'PageNavigatorButton_C_ExecuteUbergraph_PageNavigatorButton::K2Node_CustomEvent_Color4' has a wrong offset!");
static_assert(offsetof(PageNavigatorButton_C_ExecuteUbergraph_PageNavigatorButton, K2Node_CustomEvent_Color5) == 0x000118, "Member 'PageNavigatorButton_C_ExecuteUbergraph_PageNavigatorButton::K2Node_CustomEvent_Color5' has a wrong offset!");
static_assert(offsetof(PageNavigatorButton_C_ExecuteUbergraph_PageNavigatorButton, Temp_object_Variable_1) == 0x000128, "Member 'PageNavigatorButton_C_ExecuteUbergraph_PageNavigatorButton::Temp_object_Variable_1' has a wrong offset!");
static_assert(offsetof(PageNavigatorButton_C_ExecuteUbergraph_PageNavigatorButton, Temp_bool_Variable_5) == 0x000130, "Member 'PageNavigatorButton_C_ExecuteUbergraph_PageNavigatorButton::Temp_bool_Variable_5' has a wrong offset!");
static_assert(offsetof(PageNavigatorButton_C_ExecuteUbergraph_PageNavigatorButton, Temp_object_Variable_2) == 0x000138, "Member 'PageNavigatorButton_C_ExecuteUbergraph_PageNavigatorButton::Temp_object_Variable_2' has a wrong offset!");
static_assert(offsetof(PageNavigatorButton_C_ExecuteUbergraph_PageNavigatorButton, K2Node_Select_Default_4) == 0x000140, "Member 'PageNavigatorButton_C_ExecuteUbergraph_PageNavigatorButton::K2Node_Select_Default_4' has a wrong offset!");
static_assert(offsetof(PageNavigatorButton_C_ExecuteUbergraph_PageNavigatorButton, Temp_object_Variable_3) == 0x000148, "Member 'PageNavigatorButton_C_ExecuteUbergraph_PageNavigatorButton::Temp_object_Variable_3' has a wrong offset!");
static_assert(offsetof(PageNavigatorButton_C_ExecuteUbergraph_PageNavigatorButton, K2Node_Select_Default_5) == 0x000150, "Member 'PageNavigatorButton_C_ExecuteUbergraph_PageNavigatorButton::K2Node_Select_Default_5' has a wrong offset!");
static_assert(offsetof(PageNavigatorButton_C_ExecuteUbergraph_PageNavigatorButton, CallFunc_GetDynamicFontMaterial_ReturnValue) == 0x000158, "Member 'PageNavigatorButton_C_ExecuteUbergraph_PageNavigatorButton::CallFunc_GetDynamicFontMaterial_ReturnValue' has a wrong offset!");

struct PageNavigatorButton_C_PreConstruct final
{
public:
	bool                                          IsDesignTime;
};
static_assert(alignof(PageNavigatorButton_C_PreConstruct) == 0x000001, "Wrong alignment on PageNavigatorButton_C_PreConstruct");
static_assert(sizeof(PageNavigatorButton_C_PreConstruct) == 0x000001, "Wrong size on PageNavigatorButton_C_PreConstruct");
static_assert(offsetof(PageNavigatorButton_C_PreConstruct, IsDesignTime) == 0x000000, "Member 'PageNavigatorButton_C_PreConstruct::IsDesignTime' has a wrong offset!");

struct PageNavigatorButton_C_Set_Button_colors final
{
public:
	struct FLinearColor                           Color1;
	struct FLinearColor                           Color2;
	struct FLinearColor                           Color3;
	struct FLinearColor                           Color4;
	struct FLinearColor                           Color5;
};
static_assert(alignof(PageNavigatorButton_C_Set_Button_colors) == 0x000004, "Wrong alignment on PageNavigatorButton_C_Set_Button_colors");
static_assert(sizeof(PageNavigatorButton_C_Set_Button_colors) == 0x000050, "Wrong size on PageNavigatorButton_C_Set_Button_colors");
static_assert(offsetof(PageNavigatorButton_C_Set_Button_colors, Color1) == 0x000000, "Member 'PageNavigatorButton_C_Set_Button_colors::Color1' has a wrong offset!");
static_assert(offsetof(PageNavigatorButton_C_Set_Button_colors, Color2) == 0x000010, "Member 'PageNavigatorButton_C_Set_Button_colors::Color2' has a wrong offset!");
static_assert(offsetof(PageNavigatorButton_C_Set_Button_colors, Color3) == 0x000020, "Member 'PageNavigatorButton_C_Set_Button_colors::Color3' has a wrong offset!");
static_assert(offsetof(PageNavigatorButton_C_Set_Button_colors, Color4) == 0x000030, "Member 'PageNavigatorButton_C_Set_Button_colors::Color4' has a wrong offset!");
static_assert(offsetof(PageNavigatorButton_C_Set_Button_colors, Color5) == 0x000040, "Member 'PageNavigatorButton_C_Set_Button_colors::Color5' has a wrong offset!");

}
