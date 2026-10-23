#pragma once

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "UMG_structs.hpp"
#include "SlateCore_structs.hpp"

namespace SDK::Params
{

struct CircleArrowButton_C_ExecuteUbergraph_CircleArrowButton final
{
public:
	int32                                         EntryPoint;
	bool                                          Temp_bool_Variable;
	uint8                                         Pad_5[0x3];
	struct FVector2D                              Temp_struct_Variable;
	bool                                          Temp_bool_Variable_1;
	ESlateVisibility                              Temp_byte_Variable;
	ESlateVisibility                              Temp_byte_Variable_1;
	bool                                          Temp_bool_Variable_2;
	EHorizontalAlignment                          Temp_byte_Variable_2;
	bool                                          Temp_bool_Variable_3;
	EHorizontalAlignment                          Temp_byte_Variable_3;
	EHorizontalAlignment                          Temp_byte_Variable_4;
	bool                                          Temp_bool_Variable_4;
	EVerticalAlignment                            Temp_byte_Variable_5;
	EVerticalAlignment                            Temp_byte_Variable_6;
	bool                                          K2Node_Event_IsDesignTime;
	uint8                                         Pad_24[0x4];
	class UMaterialInstanceDynamic*               CallFunc_GetDynamicMaterial_ReturnValue;
	class UMaterialInstanceDynamic*               CallFunc_GetDynamicMaterial_ReturnValue_1;
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue_1;
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue_2;
	struct FVector2D                              Temp_struct_Variable_1;
	struct FVector2D                              K2Node_Select_Default;
	ESlateVisibility                              K2Node_Select_Default_1;
	EHorizontalAlignment                          K2Node_Select_Default_2;
	uint8                                         Pad_72[0x6];
	class UOverlaySlot*                           CallFunc_SlotAsOverlaySlot_ReturnValue;
	EHorizontalAlignment                          K2Node_Select_Default_3;
	uint8                                         Pad_81[0x7];
	class UOverlaySlot*                           CallFunc_SlotAsOverlaySlot_ReturnValue_1;
	EVerticalAlignment                            K2Node_Select_Default_4;
	uint8                                         Pad_91[0x3];
	float                                         CallFunc_SetScalarParameterValue_Value_ImplicitCast;
	float                                         CallFunc_SetScalarParameterValue_Value_ImplicitCast_1;
};
static_assert(alignof(CircleArrowButton_C_ExecuteUbergraph_CircleArrowButton) == 0x000008, "Wrong alignment on CircleArrowButton_C_ExecuteUbergraph_CircleArrowButton");
static_assert(sizeof(CircleArrowButton_C_ExecuteUbergraph_CircleArrowButton) == 0x0000A0, "Wrong size on CircleArrowButton_C_ExecuteUbergraph_CircleArrowButton");
static_assert(offsetof(CircleArrowButton_C_ExecuteUbergraph_CircleArrowButton, EntryPoint) == 0x000000, "Member 'CircleArrowButton_C_ExecuteUbergraph_CircleArrowButton::EntryPoint' has a wrong offset!");
static_assert(offsetof(CircleArrowButton_C_ExecuteUbergraph_CircleArrowButton, Temp_bool_Variable) == 0x000004, "Member 'CircleArrowButton_C_ExecuteUbergraph_CircleArrowButton::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(CircleArrowButton_C_ExecuteUbergraph_CircleArrowButton, Temp_struct_Variable) == 0x000008, "Member 'CircleArrowButton_C_ExecuteUbergraph_CircleArrowButton::Temp_struct_Variable' has a wrong offset!");
static_assert(offsetof(CircleArrowButton_C_ExecuteUbergraph_CircleArrowButton, Temp_bool_Variable_1) == 0x000018, "Member 'CircleArrowButton_C_ExecuteUbergraph_CircleArrowButton::Temp_bool_Variable_1' has a wrong offset!");
static_assert(offsetof(CircleArrowButton_C_ExecuteUbergraph_CircleArrowButton, Temp_byte_Variable) == 0x000019, "Member 'CircleArrowButton_C_ExecuteUbergraph_CircleArrowButton::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(CircleArrowButton_C_ExecuteUbergraph_CircleArrowButton, Temp_byte_Variable_1) == 0x00001A, "Member 'CircleArrowButton_C_ExecuteUbergraph_CircleArrowButton::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(CircleArrowButton_C_ExecuteUbergraph_CircleArrowButton, Temp_bool_Variable_2) == 0x00001B, "Member 'CircleArrowButton_C_ExecuteUbergraph_CircleArrowButton::Temp_bool_Variable_2' has a wrong offset!");
static_assert(offsetof(CircleArrowButton_C_ExecuteUbergraph_CircleArrowButton, Temp_byte_Variable_2) == 0x00001C, "Member 'CircleArrowButton_C_ExecuteUbergraph_CircleArrowButton::Temp_byte_Variable_2' has a wrong offset!");
static_assert(offsetof(CircleArrowButton_C_ExecuteUbergraph_CircleArrowButton, Temp_bool_Variable_3) == 0x00001D, "Member 'CircleArrowButton_C_ExecuteUbergraph_CircleArrowButton::Temp_bool_Variable_3' has a wrong offset!");
static_assert(offsetof(CircleArrowButton_C_ExecuteUbergraph_CircleArrowButton, Temp_byte_Variable_3) == 0x00001E, "Member 'CircleArrowButton_C_ExecuteUbergraph_CircleArrowButton::Temp_byte_Variable_3' has a wrong offset!");
static_assert(offsetof(CircleArrowButton_C_ExecuteUbergraph_CircleArrowButton, Temp_byte_Variable_4) == 0x00001F, "Member 'CircleArrowButton_C_ExecuteUbergraph_CircleArrowButton::Temp_byte_Variable_4' has a wrong offset!");
static_assert(offsetof(CircleArrowButton_C_ExecuteUbergraph_CircleArrowButton, Temp_bool_Variable_4) == 0x000020, "Member 'CircleArrowButton_C_ExecuteUbergraph_CircleArrowButton::Temp_bool_Variable_4' has a wrong offset!");
static_assert(offsetof(CircleArrowButton_C_ExecuteUbergraph_CircleArrowButton, Temp_byte_Variable_5) == 0x000021, "Member 'CircleArrowButton_C_ExecuteUbergraph_CircleArrowButton::Temp_byte_Variable_5' has a wrong offset!");
static_assert(offsetof(CircleArrowButton_C_ExecuteUbergraph_CircleArrowButton, Temp_byte_Variable_6) == 0x000022, "Member 'CircleArrowButton_C_ExecuteUbergraph_CircleArrowButton::Temp_byte_Variable_6' has a wrong offset!");
static_assert(offsetof(CircleArrowButton_C_ExecuteUbergraph_CircleArrowButton, K2Node_Event_IsDesignTime) == 0x000023, "Member 'CircleArrowButton_C_ExecuteUbergraph_CircleArrowButton::K2Node_Event_IsDesignTime' has a wrong offset!");
static_assert(offsetof(CircleArrowButton_C_ExecuteUbergraph_CircleArrowButton, CallFunc_GetDynamicMaterial_ReturnValue) == 0x000028, "Member 'CircleArrowButton_C_ExecuteUbergraph_CircleArrowButton::CallFunc_GetDynamicMaterial_ReturnValue' has a wrong offset!");
static_assert(offsetof(CircleArrowButton_C_ExecuteUbergraph_CircleArrowButton, CallFunc_GetDynamicMaterial_ReturnValue_1) == 0x000030, "Member 'CircleArrowButton_C_ExecuteUbergraph_CircleArrowButton::CallFunc_GetDynamicMaterial_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(CircleArrowButton_C_ExecuteUbergraph_CircleArrowButton, CallFunc_PlayAnimation_ReturnValue) == 0x000038, "Member 'CircleArrowButton_C_ExecuteUbergraph_CircleArrowButton::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");
static_assert(offsetof(CircleArrowButton_C_ExecuteUbergraph_CircleArrowButton, CallFunc_PlayAnimation_ReturnValue_1) == 0x000040, "Member 'CircleArrowButton_C_ExecuteUbergraph_CircleArrowButton::CallFunc_PlayAnimation_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(CircleArrowButton_C_ExecuteUbergraph_CircleArrowButton, CallFunc_PlayAnimation_ReturnValue_2) == 0x000048, "Member 'CircleArrowButton_C_ExecuteUbergraph_CircleArrowButton::CallFunc_PlayAnimation_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(CircleArrowButton_C_ExecuteUbergraph_CircleArrowButton, Temp_struct_Variable_1) == 0x000050, "Member 'CircleArrowButton_C_ExecuteUbergraph_CircleArrowButton::Temp_struct_Variable_1' has a wrong offset!");
static_assert(offsetof(CircleArrowButton_C_ExecuteUbergraph_CircleArrowButton, K2Node_Select_Default) == 0x000060, "Member 'CircleArrowButton_C_ExecuteUbergraph_CircleArrowButton::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(CircleArrowButton_C_ExecuteUbergraph_CircleArrowButton, K2Node_Select_Default_1) == 0x000070, "Member 'CircleArrowButton_C_ExecuteUbergraph_CircleArrowButton::K2Node_Select_Default_1' has a wrong offset!");
static_assert(offsetof(CircleArrowButton_C_ExecuteUbergraph_CircleArrowButton, K2Node_Select_Default_2) == 0x000071, "Member 'CircleArrowButton_C_ExecuteUbergraph_CircleArrowButton::K2Node_Select_Default_2' has a wrong offset!");
static_assert(offsetof(CircleArrowButton_C_ExecuteUbergraph_CircleArrowButton, CallFunc_SlotAsOverlaySlot_ReturnValue) == 0x000078, "Member 'CircleArrowButton_C_ExecuteUbergraph_CircleArrowButton::CallFunc_SlotAsOverlaySlot_ReturnValue' has a wrong offset!");
static_assert(offsetof(CircleArrowButton_C_ExecuteUbergraph_CircleArrowButton, K2Node_Select_Default_3) == 0x000080, "Member 'CircleArrowButton_C_ExecuteUbergraph_CircleArrowButton::K2Node_Select_Default_3' has a wrong offset!");
static_assert(offsetof(CircleArrowButton_C_ExecuteUbergraph_CircleArrowButton, CallFunc_SlotAsOverlaySlot_ReturnValue_1) == 0x000088, "Member 'CircleArrowButton_C_ExecuteUbergraph_CircleArrowButton::CallFunc_SlotAsOverlaySlot_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(CircleArrowButton_C_ExecuteUbergraph_CircleArrowButton, K2Node_Select_Default_4) == 0x000090, "Member 'CircleArrowButton_C_ExecuteUbergraph_CircleArrowButton::K2Node_Select_Default_4' has a wrong offset!");
static_assert(offsetof(CircleArrowButton_C_ExecuteUbergraph_CircleArrowButton, CallFunc_SetScalarParameterValue_Value_ImplicitCast) == 0x000094, "Member 'CircleArrowButton_C_ExecuteUbergraph_CircleArrowButton::CallFunc_SetScalarParameterValue_Value_ImplicitCast' has a wrong offset!");
static_assert(offsetof(CircleArrowButton_C_ExecuteUbergraph_CircleArrowButton, CallFunc_SetScalarParameterValue_Value_ImplicitCast_1) == 0x000098, "Member 'CircleArrowButton_C_ExecuteUbergraph_CircleArrowButton::CallFunc_SetScalarParameterValue_Value_ImplicitCast_1' has a wrong offset!");

struct CircleArrowButton_C_PreConstruct final
{
public:
	bool                                          IsDesignTime;
};
static_assert(alignof(CircleArrowButton_C_PreConstruct) == 0x000001, "Wrong alignment on CircleArrowButton_C_PreConstruct");
static_assert(sizeof(CircleArrowButton_C_PreConstruct) == 0x000001, "Wrong size on CircleArrowButton_C_PreConstruct");
static_assert(offsetof(CircleArrowButton_C_PreConstruct, IsDesignTime) == 0x000000, "Member 'CircleArrowButton_C_PreConstruct::IsDesignTime' has a wrong offset!");

struct CircleArrowButton_C_UpdateArrowColor final
{
public:
	struct FLinearColor                           Color;
	struct FLinearColor                           HoverColor_0;
	class UMaterialInstanceDynamic*               CallFunc_GetDynamicMaterial_ReturnValue;
};
static_assert(alignof(CircleArrowButton_C_UpdateArrowColor) == 0x000008, "Wrong alignment on CircleArrowButton_C_UpdateArrowColor");
static_assert(sizeof(CircleArrowButton_C_UpdateArrowColor) == 0x000028, "Wrong size on CircleArrowButton_C_UpdateArrowColor");
static_assert(offsetof(CircleArrowButton_C_UpdateArrowColor, Color) == 0x000000, "Member 'CircleArrowButton_C_UpdateArrowColor::Color' has a wrong offset!");
static_assert(offsetof(CircleArrowButton_C_UpdateArrowColor, HoverColor_0) == 0x000010, "Member 'CircleArrowButton_C_UpdateArrowColor::HoverColor_0' has a wrong offset!");
static_assert(offsetof(CircleArrowButton_C_UpdateArrowColor, CallFunc_GetDynamicMaterial_ReturnValue) == 0x000020, "Member 'CircleArrowButton_C_UpdateArrowColor::CallFunc_GetDynamicMaterial_ReturnValue' has a wrong offset!");

}
