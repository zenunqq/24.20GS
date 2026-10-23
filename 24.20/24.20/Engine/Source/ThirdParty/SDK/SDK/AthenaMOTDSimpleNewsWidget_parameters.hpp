#pragma once

#include "Basic.hpp"

#include "FortniteUI_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "SlateCore_structs.hpp"

namespace SDK::Params
{

struct AthenaMOTDSimpleNewsWidget_C_ExecuteUbergraph_AthenaMOTDSimpleNewsWidget final
{
public:
	int32                                         EntryPoint;
	bool                                          Temp_bool_Variable;
	uint8                                         Pad_5[0x3];
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;
	bool                                          Temp_bool_Variable_1;
	bool                                          Temp_bool_Variable_2;
	bool                                          Temp_bool_Variable_3;
	bool                                          K2Node_Event_IsDesignTime;
	struct FColor                                 K2Node_Select_Default;
	struct FAthenaMOTDBase                        K2Node_Event_NewsEntry;
	struct FColor                                 K2Node_Select_Default_1;
	struct FColor                                 K2Node_Select_Default_2;
	struct FColor                                 K2Node_Select_Default_3;
};
static_assert(alignof(AthenaMOTDSimpleNewsWidget_C_ExecuteUbergraph_AthenaMOTDSimpleNewsWidget) == 0x000008, "Wrong alignment on AthenaMOTDSimpleNewsWidget_C_ExecuteUbergraph_AthenaMOTDSimpleNewsWidget");
static_assert(sizeof(AthenaMOTDSimpleNewsWidget_C_ExecuteUbergraph_AthenaMOTDSimpleNewsWidget) == 0x0000F8, "Wrong size on AthenaMOTDSimpleNewsWidget_C_ExecuteUbergraph_AthenaMOTDSimpleNewsWidget");
static_assert(offsetof(AthenaMOTDSimpleNewsWidget_C_ExecuteUbergraph_AthenaMOTDSimpleNewsWidget, EntryPoint) == 0x000000, "Member 'AthenaMOTDSimpleNewsWidget_C_ExecuteUbergraph_AthenaMOTDSimpleNewsWidget::EntryPoint' has a wrong offset!");
static_assert(offsetof(AthenaMOTDSimpleNewsWidget_C_ExecuteUbergraph_AthenaMOTDSimpleNewsWidget, Temp_bool_Variable) == 0x000004, "Member 'AthenaMOTDSimpleNewsWidget_C_ExecuteUbergraph_AthenaMOTDSimpleNewsWidget::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(AthenaMOTDSimpleNewsWidget_C_ExecuteUbergraph_AthenaMOTDSimpleNewsWidget, CallFunc_PlayAnimation_ReturnValue) == 0x000008, "Member 'AthenaMOTDSimpleNewsWidget_C_ExecuteUbergraph_AthenaMOTDSimpleNewsWidget::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");
static_assert(offsetof(AthenaMOTDSimpleNewsWidget_C_ExecuteUbergraph_AthenaMOTDSimpleNewsWidget, Temp_bool_Variable_1) == 0x000010, "Member 'AthenaMOTDSimpleNewsWidget_C_ExecuteUbergraph_AthenaMOTDSimpleNewsWidget::Temp_bool_Variable_1' has a wrong offset!");
static_assert(offsetof(AthenaMOTDSimpleNewsWidget_C_ExecuteUbergraph_AthenaMOTDSimpleNewsWidget, Temp_bool_Variable_2) == 0x000011, "Member 'AthenaMOTDSimpleNewsWidget_C_ExecuteUbergraph_AthenaMOTDSimpleNewsWidget::Temp_bool_Variable_2' has a wrong offset!");
static_assert(offsetof(AthenaMOTDSimpleNewsWidget_C_ExecuteUbergraph_AthenaMOTDSimpleNewsWidget, Temp_bool_Variable_3) == 0x000012, "Member 'AthenaMOTDSimpleNewsWidget_C_ExecuteUbergraph_AthenaMOTDSimpleNewsWidget::Temp_bool_Variable_3' has a wrong offset!");
static_assert(offsetof(AthenaMOTDSimpleNewsWidget_C_ExecuteUbergraph_AthenaMOTDSimpleNewsWidget, K2Node_Event_IsDesignTime) == 0x000013, "Member 'AthenaMOTDSimpleNewsWidget_C_ExecuteUbergraph_AthenaMOTDSimpleNewsWidget::K2Node_Event_IsDesignTime' has a wrong offset!");
static_assert(offsetof(AthenaMOTDSimpleNewsWidget_C_ExecuteUbergraph_AthenaMOTDSimpleNewsWidget, K2Node_Select_Default) == 0x000014, "Member 'AthenaMOTDSimpleNewsWidget_C_ExecuteUbergraph_AthenaMOTDSimpleNewsWidget::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(AthenaMOTDSimpleNewsWidget_C_ExecuteUbergraph_AthenaMOTDSimpleNewsWidget, K2Node_Event_NewsEntry) == 0x000018, "Member 'AthenaMOTDSimpleNewsWidget_C_ExecuteUbergraph_AthenaMOTDSimpleNewsWidget::K2Node_Event_NewsEntry' has a wrong offset!");
static_assert(offsetof(AthenaMOTDSimpleNewsWidget_C_ExecuteUbergraph_AthenaMOTDSimpleNewsWidget, K2Node_Select_Default_1) == 0x0000E8, "Member 'AthenaMOTDSimpleNewsWidget_C_ExecuteUbergraph_AthenaMOTDSimpleNewsWidget::K2Node_Select_Default_1' has a wrong offset!");
static_assert(offsetof(AthenaMOTDSimpleNewsWidget_C_ExecuteUbergraph_AthenaMOTDSimpleNewsWidget, K2Node_Select_Default_2) == 0x0000EC, "Member 'AthenaMOTDSimpleNewsWidget_C_ExecuteUbergraph_AthenaMOTDSimpleNewsWidget::K2Node_Select_Default_2' has a wrong offset!");
static_assert(offsetof(AthenaMOTDSimpleNewsWidget_C_ExecuteUbergraph_AthenaMOTDSimpleNewsWidget, K2Node_Select_Default_3) == 0x0000F0, "Member 'AthenaMOTDSimpleNewsWidget_C_ExecuteUbergraph_AthenaMOTDSimpleNewsWidget::K2Node_Select_Default_3' has a wrong offset!");

struct AthenaMOTDSimpleNewsWidget_C_OnPopulateNews final
{
public:
	struct FAthenaMOTDBase                        NewsEntry;
};
static_assert(alignof(AthenaMOTDSimpleNewsWidget_C_OnPopulateNews) == 0x000008, "Wrong alignment on AthenaMOTDSimpleNewsWidget_C_OnPopulateNews");
static_assert(sizeof(AthenaMOTDSimpleNewsWidget_C_OnPopulateNews) == 0x0000D0, "Wrong size on AthenaMOTDSimpleNewsWidget_C_OnPopulateNews");
static_assert(offsetof(AthenaMOTDSimpleNewsWidget_C_OnPopulateNews, NewsEntry) == 0x000000, "Member 'AthenaMOTDSimpleNewsWidget_C_OnPopulateNews::NewsEntry' has a wrong offset!");

struct AthenaMOTDSimpleNewsWidget_C_PreConstruct final
{
public:
	bool                                          IsDesignTime;
};
static_assert(alignof(AthenaMOTDSimpleNewsWidget_C_PreConstruct) == 0x000001, "Wrong alignment on AthenaMOTDSimpleNewsWidget_C_PreConstruct");
static_assert(sizeof(AthenaMOTDSimpleNewsWidget_C_PreConstruct) == 0x000001, "Wrong size on AthenaMOTDSimpleNewsWidget_C_PreConstruct");
static_assert(offsetof(AthenaMOTDSimpleNewsWidget_C_PreConstruct, IsDesignTime) == 0x000000, "Member 'AthenaMOTDSimpleNewsWidget_C_PreConstruct::IsDesignTime' has a wrong offset!");

struct AthenaMOTDSimpleNewsWidget_C_SetDynamicColors final
{
public:
	struct FColor                                 Dark;
	struct FColor                                 Light;
	struct FLinearColor                           CallFunc_Conv_ColorToLinearColor_ReturnValue;
	class UMaterialInstanceDynamic*               CallFunc_GetDynamicMaterial_ReturnValue;
	struct FSlateColor                            K2Node_MakeStruct_SlateColor;
	struct FLinearColor                           CallFunc_Conv_ColorToLinearColor_ReturnValue_1;
	struct FLinearColor                           CallFunc_Multiply_LinearColorFloat_ReturnValue;
	uint8                                         Pad_54[0x4];
	class UMaterialInstanceDynamic*               CallFunc_GetDynamicMaterial_ReturnValue_1;
	class UMaterialInstanceDynamic*               CallFunc_GetDynamicMaterial_ReturnValue_2;
};
static_assert(alignof(AthenaMOTDSimpleNewsWidget_C_SetDynamicColors) == 0x000008, "Wrong alignment on AthenaMOTDSimpleNewsWidget_C_SetDynamicColors");
static_assert(sizeof(AthenaMOTDSimpleNewsWidget_C_SetDynamicColors) == 0x000068, "Wrong size on AthenaMOTDSimpleNewsWidget_C_SetDynamicColors");
static_assert(offsetof(AthenaMOTDSimpleNewsWidget_C_SetDynamicColors, Dark) == 0x000000, "Member 'AthenaMOTDSimpleNewsWidget_C_SetDynamicColors::Dark' has a wrong offset!");
static_assert(offsetof(AthenaMOTDSimpleNewsWidget_C_SetDynamicColors, Light) == 0x000004, "Member 'AthenaMOTDSimpleNewsWidget_C_SetDynamicColors::Light' has a wrong offset!");
static_assert(offsetof(AthenaMOTDSimpleNewsWidget_C_SetDynamicColors, CallFunc_Conv_ColorToLinearColor_ReturnValue) == 0x000008, "Member 'AthenaMOTDSimpleNewsWidget_C_SetDynamicColors::CallFunc_Conv_ColorToLinearColor_ReturnValue' has a wrong offset!");
static_assert(offsetof(AthenaMOTDSimpleNewsWidget_C_SetDynamicColors, CallFunc_GetDynamicMaterial_ReturnValue) == 0x000018, "Member 'AthenaMOTDSimpleNewsWidget_C_SetDynamicColors::CallFunc_GetDynamicMaterial_ReturnValue' has a wrong offset!");
static_assert(offsetof(AthenaMOTDSimpleNewsWidget_C_SetDynamicColors, K2Node_MakeStruct_SlateColor) == 0x000020, "Member 'AthenaMOTDSimpleNewsWidget_C_SetDynamicColors::K2Node_MakeStruct_SlateColor' has a wrong offset!");
static_assert(offsetof(AthenaMOTDSimpleNewsWidget_C_SetDynamicColors, CallFunc_Conv_ColorToLinearColor_ReturnValue_1) == 0x000034, "Member 'AthenaMOTDSimpleNewsWidget_C_SetDynamicColors::CallFunc_Conv_ColorToLinearColor_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(AthenaMOTDSimpleNewsWidget_C_SetDynamicColors, CallFunc_Multiply_LinearColorFloat_ReturnValue) == 0x000044, "Member 'AthenaMOTDSimpleNewsWidget_C_SetDynamicColors::CallFunc_Multiply_LinearColorFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(AthenaMOTDSimpleNewsWidget_C_SetDynamicColors, CallFunc_GetDynamicMaterial_ReturnValue_1) == 0x000058, "Member 'AthenaMOTDSimpleNewsWidget_C_SetDynamicColors::CallFunc_GetDynamicMaterial_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(AthenaMOTDSimpleNewsWidget_C_SetDynamicColors, CallFunc_GetDynamicMaterial_ReturnValue_2) == 0x000060, "Member 'AthenaMOTDSimpleNewsWidget_C_SetDynamicColors::CallFunc_GetDynamicMaterial_ReturnValue_2' has a wrong offset!");

}
