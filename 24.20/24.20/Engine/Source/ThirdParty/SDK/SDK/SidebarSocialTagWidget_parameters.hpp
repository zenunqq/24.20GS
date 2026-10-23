#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteUI_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "UMG_structs.hpp"
#include "SlateCore_structs.hpp"
#include "SidebarSocialTagCategoryStructure_structs.hpp"

namespace SDK::Params
{

struct SidebarSocialTagWidget_C_ExecuteUbergraph_SidebarSocialTagWidget final
{
public:
	int32                                         EntryPoint;
	bool                                          Temp_bool_Variable;
	bool                                          Temp_bool_Variable_1;
	bool                                          CallFunc_IsMobileGame_ReturnValue;
	bool                                          K2Node_Event_bHighlighted;
	class UCommonButtonLegacy*                    CallFunc_FindParentWidgetOfType_ReturnValue;
	bool                                          CallFunc_IsValid_ReturnValue;
	bool                                          CallFunc_IsHovered_ReturnValue;
	uint8                                         Pad_12[0x6];
	class UWidgetAnimation*                       K2Node_Select_Default;
	bool                                          Temp_bool_Variable_2;
	bool                                          Temp_bool_Variable_3;
	uint8                                         Pad_22[0x2];
	struct FLinearColor                           K2Node_Select_Default_1;
	uint8                                         Pad_34[0x4];
	class UWidgetAnimation*                       K2Node_Select_Default_2;
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;
	struct FLinearColor                           K2Node_Select_Default_3;
	bool                                          CallFunc_IsValid_ReturnValue_1;
	uint8                                         Pad_59[0x3];
	struct FSlateColor                            K2Node_MakeStruct_SlateColor;
	ESlateVisibility                              K2Node_Event_CategoryCustomizationVisibility;
	uint8                                         Pad_71[0x7];
	class FText                                   K2Node_Event_InTagName;
	ESocialTagCategory                            K2Node_Event_InTagCategory;
	bool                                          K2Node_Event_bInIsSystemTag;
};
static_assert(alignof(SidebarSocialTagWidget_C_ExecuteUbergraph_SidebarSocialTagWidget) == 0x000008, "Wrong alignment on SidebarSocialTagWidget_C_ExecuteUbergraph_SidebarSocialTagWidget");
static_assert(sizeof(SidebarSocialTagWidget_C_ExecuteUbergraph_SidebarSocialTagWidget) == 0x000098, "Wrong size on SidebarSocialTagWidget_C_ExecuteUbergraph_SidebarSocialTagWidget");
static_assert(offsetof(SidebarSocialTagWidget_C_ExecuteUbergraph_SidebarSocialTagWidget, EntryPoint) == 0x000000, "Member 'SidebarSocialTagWidget_C_ExecuteUbergraph_SidebarSocialTagWidget::EntryPoint' has a wrong offset!");
static_assert(offsetof(SidebarSocialTagWidget_C_ExecuteUbergraph_SidebarSocialTagWidget, Temp_bool_Variable) == 0x000004, "Member 'SidebarSocialTagWidget_C_ExecuteUbergraph_SidebarSocialTagWidget::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(SidebarSocialTagWidget_C_ExecuteUbergraph_SidebarSocialTagWidget, Temp_bool_Variable_1) == 0x000005, "Member 'SidebarSocialTagWidget_C_ExecuteUbergraph_SidebarSocialTagWidget::Temp_bool_Variable_1' has a wrong offset!");
static_assert(offsetof(SidebarSocialTagWidget_C_ExecuteUbergraph_SidebarSocialTagWidget, CallFunc_IsMobileGame_ReturnValue) == 0x000006, "Member 'SidebarSocialTagWidget_C_ExecuteUbergraph_SidebarSocialTagWidget::CallFunc_IsMobileGame_ReturnValue' has a wrong offset!");
static_assert(offsetof(SidebarSocialTagWidget_C_ExecuteUbergraph_SidebarSocialTagWidget, K2Node_Event_bHighlighted) == 0x000007, "Member 'SidebarSocialTagWidget_C_ExecuteUbergraph_SidebarSocialTagWidget::K2Node_Event_bHighlighted' has a wrong offset!");
static_assert(offsetof(SidebarSocialTagWidget_C_ExecuteUbergraph_SidebarSocialTagWidget, CallFunc_FindParentWidgetOfType_ReturnValue) == 0x000008, "Member 'SidebarSocialTagWidget_C_ExecuteUbergraph_SidebarSocialTagWidget::CallFunc_FindParentWidgetOfType_ReturnValue' has a wrong offset!");
static_assert(offsetof(SidebarSocialTagWidget_C_ExecuteUbergraph_SidebarSocialTagWidget, CallFunc_IsValid_ReturnValue) == 0x000010, "Member 'SidebarSocialTagWidget_C_ExecuteUbergraph_SidebarSocialTagWidget::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(SidebarSocialTagWidget_C_ExecuteUbergraph_SidebarSocialTagWidget, CallFunc_IsHovered_ReturnValue) == 0x000011, "Member 'SidebarSocialTagWidget_C_ExecuteUbergraph_SidebarSocialTagWidget::CallFunc_IsHovered_ReturnValue' has a wrong offset!");
static_assert(offsetof(SidebarSocialTagWidget_C_ExecuteUbergraph_SidebarSocialTagWidget, K2Node_Select_Default) == 0x000018, "Member 'SidebarSocialTagWidget_C_ExecuteUbergraph_SidebarSocialTagWidget::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(SidebarSocialTagWidget_C_ExecuteUbergraph_SidebarSocialTagWidget, Temp_bool_Variable_2) == 0x000020, "Member 'SidebarSocialTagWidget_C_ExecuteUbergraph_SidebarSocialTagWidget::Temp_bool_Variable_2' has a wrong offset!");
static_assert(offsetof(SidebarSocialTagWidget_C_ExecuteUbergraph_SidebarSocialTagWidget, Temp_bool_Variable_3) == 0x000021, "Member 'SidebarSocialTagWidget_C_ExecuteUbergraph_SidebarSocialTagWidget::Temp_bool_Variable_3' has a wrong offset!");
static_assert(offsetof(SidebarSocialTagWidget_C_ExecuteUbergraph_SidebarSocialTagWidget, K2Node_Select_Default_1) == 0x000024, "Member 'SidebarSocialTagWidget_C_ExecuteUbergraph_SidebarSocialTagWidget::K2Node_Select_Default_1' has a wrong offset!");
static_assert(offsetof(SidebarSocialTagWidget_C_ExecuteUbergraph_SidebarSocialTagWidget, K2Node_Select_Default_2) == 0x000038, "Member 'SidebarSocialTagWidget_C_ExecuteUbergraph_SidebarSocialTagWidget::K2Node_Select_Default_2' has a wrong offset!");
static_assert(offsetof(SidebarSocialTagWidget_C_ExecuteUbergraph_SidebarSocialTagWidget, CallFunc_PlayAnimation_ReturnValue) == 0x000040, "Member 'SidebarSocialTagWidget_C_ExecuteUbergraph_SidebarSocialTagWidget::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");
static_assert(offsetof(SidebarSocialTagWidget_C_ExecuteUbergraph_SidebarSocialTagWidget, K2Node_Select_Default_3) == 0x000048, "Member 'SidebarSocialTagWidget_C_ExecuteUbergraph_SidebarSocialTagWidget::K2Node_Select_Default_3' has a wrong offset!");
static_assert(offsetof(SidebarSocialTagWidget_C_ExecuteUbergraph_SidebarSocialTagWidget, CallFunc_IsValid_ReturnValue_1) == 0x000058, "Member 'SidebarSocialTagWidget_C_ExecuteUbergraph_SidebarSocialTagWidget::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(SidebarSocialTagWidget_C_ExecuteUbergraph_SidebarSocialTagWidget, K2Node_MakeStruct_SlateColor) == 0x00005C, "Member 'SidebarSocialTagWidget_C_ExecuteUbergraph_SidebarSocialTagWidget::K2Node_MakeStruct_SlateColor' has a wrong offset!");
static_assert(offsetof(SidebarSocialTagWidget_C_ExecuteUbergraph_SidebarSocialTagWidget, K2Node_Event_CategoryCustomizationVisibility) == 0x000070, "Member 'SidebarSocialTagWidget_C_ExecuteUbergraph_SidebarSocialTagWidget::K2Node_Event_CategoryCustomizationVisibility' has a wrong offset!");
static_assert(offsetof(SidebarSocialTagWidget_C_ExecuteUbergraph_SidebarSocialTagWidget, K2Node_Event_InTagName) == 0x000078, "Member 'SidebarSocialTagWidget_C_ExecuteUbergraph_SidebarSocialTagWidget::K2Node_Event_InTagName' has a wrong offset!");
static_assert(offsetof(SidebarSocialTagWidget_C_ExecuteUbergraph_SidebarSocialTagWidget, K2Node_Event_InTagCategory) == 0x000090, "Member 'SidebarSocialTagWidget_C_ExecuteUbergraph_SidebarSocialTagWidget::K2Node_Event_InTagCategory' has a wrong offset!");
static_assert(offsetof(SidebarSocialTagWidget_C_ExecuteUbergraph_SidebarSocialTagWidget, K2Node_Event_bInIsSystemTag) == 0x000091, "Member 'SidebarSocialTagWidget_C_ExecuteUbergraph_SidebarSocialTagWidget::K2Node_Event_bInIsSystemTag' has a wrong offset!");

struct SidebarSocialTagWidget_C_FunctionOnHovered final
{
public:
	bool                                          CallFunc_IsAnimationPlaying_ReturnValue;
	uint8                                         Pad_1[0x7];
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue_1;
};
static_assert(alignof(SidebarSocialTagWidget_C_FunctionOnHovered) == 0x000008, "Wrong alignment on SidebarSocialTagWidget_C_FunctionOnHovered");
static_assert(sizeof(SidebarSocialTagWidget_C_FunctionOnHovered) == 0x000018, "Wrong size on SidebarSocialTagWidget_C_FunctionOnHovered");
static_assert(offsetof(SidebarSocialTagWidget_C_FunctionOnHovered, CallFunc_IsAnimationPlaying_ReturnValue) == 0x000000, "Member 'SidebarSocialTagWidget_C_FunctionOnHovered::CallFunc_IsAnimationPlaying_ReturnValue' has a wrong offset!");
static_assert(offsetof(SidebarSocialTagWidget_C_FunctionOnHovered, CallFunc_PlayAnimation_ReturnValue) == 0x000008, "Member 'SidebarSocialTagWidget_C_FunctionOnHovered::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");
static_assert(offsetof(SidebarSocialTagWidget_C_FunctionOnHovered, CallFunc_PlayAnimation_ReturnValue_1) == 0x000010, "Member 'SidebarSocialTagWidget_C_FunctionOnHovered::CallFunc_PlayAnimation_ReturnValue_1' has a wrong offset!");

struct SidebarSocialTagWidget_C_FunctionOnUnhovered final
{
public:
	bool                                          CallFunc_IsAnimationPlaying_ReturnValue;
	uint8                                         Pad_1[0x7];
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue_1;
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue_2;
};
static_assert(alignof(SidebarSocialTagWidget_C_FunctionOnUnhovered) == 0x000008, "Wrong alignment on SidebarSocialTagWidget_C_FunctionOnUnhovered");
static_assert(sizeof(SidebarSocialTagWidget_C_FunctionOnUnhovered) == 0x000020, "Wrong size on SidebarSocialTagWidget_C_FunctionOnUnhovered");
static_assert(offsetof(SidebarSocialTagWidget_C_FunctionOnUnhovered, CallFunc_IsAnimationPlaying_ReturnValue) == 0x000000, "Member 'SidebarSocialTagWidget_C_FunctionOnUnhovered::CallFunc_IsAnimationPlaying_ReturnValue' has a wrong offset!");
static_assert(offsetof(SidebarSocialTagWidget_C_FunctionOnUnhovered, CallFunc_PlayAnimation_ReturnValue) == 0x000008, "Member 'SidebarSocialTagWidget_C_FunctionOnUnhovered::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");
static_assert(offsetof(SidebarSocialTagWidget_C_FunctionOnUnhovered, CallFunc_PlayAnimation_ReturnValue_1) == 0x000010, "Member 'SidebarSocialTagWidget_C_FunctionOnUnhovered::CallFunc_PlayAnimation_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(SidebarSocialTagWidget_C_FunctionOnUnhovered, CallFunc_PlayAnimation_ReturnValue_2) == 0x000018, "Member 'SidebarSocialTagWidget_C_FunctionOnUnhovered::CallFunc_PlayAnimation_ReturnValue_2' has a wrong offset!");

struct SidebarSocialTagWidget_C_FunctionSetCategoryCustomizationVisibility final
{
public:
	ESlateVisibility                              CategoryCustomizationVisibility;
	uint8                                         Pad_1[0x7];
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;
};
static_assert(alignof(SidebarSocialTagWidget_C_FunctionSetCategoryCustomizationVisibility) == 0x000008, "Wrong alignment on SidebarSocialTagWidget_C_FunctionSetCategoryCustomizationVisibility");
static_assert(sizeof(SidebarSocialTagWidget_C_FunctionSetCategoryCustomizationVisibility) == 0x000010, "Wrong size on SidebarSocialTagWidget_C_FunctionSetCategoryCustomizationVisibility");
static_assert(offsetof(SidebarSocialTagWidget_C_FunctionSetCategoryCustomizationVisibility, CategoryCustomizationVisibility) == 0x000000, "Member 'SidebarSocialTagWidget_C_FunctionSetCategoryCustomizationVisibility::CategoryCustomizationVisibility' has a wrong offset!");
static_assert(offsetof(SidebarSocialTagWidget_C_FunctionSetCategoryCustomizationVisibility, CallFunc_PlayAnimation_ReturnValue) == 0x000008, "Member 'SidebarSocialTagWidget_C_FunctionSetCategoryCustomizationVisibility::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");

struct SidebarSocialTagWidget_C_FunctionSetTag final
{
public:
	class FText                                   InTagName;
	ESocialTagCategory                            InTagCategory;
	bool                                          InIsSystemTag;
	uint8                                         Pad_1A[0x6];
	class FString                                 CallFunc_GetEnumeratorUserFriendlyName_ReturnValue;
	struct FSlateColor                            K2Node_MakeStruct_SlateColor;
	uint8                                         Pad_44[0x4];
	struct FSidebarSocialTagCategoryStructure     CallFunc_Get_Sidebar_Social_Tag_Category_Structure_SidebarSocialTagCategoryStructure;
	struct FSidebarSocialTagCategoryStructure     CallFunc_Get_Sidebar_Social_Tag_Category_Structure_SidebarSocialTagCategoryStructure_1;
	TSoftObjectPtr<class UMaterialInstance>       CallFunc_Conv_ObjectToSoftObjectReference_ReturnValue;
	class UMaterialInstanceDynamic*               CallFunc_GetDynamicMaterial_ReturnValue;
	bool                                          CallFunc_IsValid_ReturnValue;
	bool                                          CallFunc_IsValid_ReturnValue_1;
};
static_assert(alignof(SidebarSocialTagWidget_C_FunctionSetTag) == 0x000008, "Wrong alignment on SidebarSocialTagWidget_C_FunctionSetTag");
static_assert(sizeof(SidebarSocialTagWidget_C_FunctionSetTag) == 0x000160, "Wrong size on SidebarSocialTagWidget_C_FunctionSetTag");
static_assert(offsetof(SidebarSocialTagWidget_C_FunctionSetTag, InTagName) == 0x000000, "Member 'SidebarSocialTagWidget_C_FunctionSetTag::InTagName' has a wrong offset!");
static_assert(offsetof(SidebarSocialTagWidget_C_FunctionSetTag, InTagCategory) == 0x000018, "Member 'SidebarSocialTagWidget_C_FunctionSetTag::InTagCategory' has a wrong offset!");
static_assert(offsetof(SidebarSocialTagWidget_C_FunctionSetTag, InIsSystemTag) == 0x000019, "Member 'SidebarSocialTagWidget_C_FunctionSetTag::InIsSystemTag' has a wrong offset!");
static_assert(offsetof(SidebarSocialTagWidget_C_FunctionSetTag, CallFunc_GetEnumeratorUserFriendlyName_ReturnValue) == 0x000020, "Member 'SidebarSocialTagWidget_C_FunctionSetTag::CallFunc_GetEnumeratorUserFriendlyName_ReturnValue' has a wrong offset!");
static_assert(offsetof(SidebarSocialTagWidget_C_FunctionSetTag, K2Node_MakeStruct_SlateColor) == 0x000030, "Member 'SidebarSocialTagWidget_C_FunctionSetTag::K2Node_MakeStruct_SlateColor' has a wrong offset!");
static_assert(offsetof(SidebarSocialTagWidget_C_FunctionSetTag, CallFunc_Get_Sidebar_Social_Tag_Category_Structure_SidebarSocialTagCategoryStructure) == 0x000048, "Member 'SidebarSocialTagWidget_C_FunctionSetTag::CallFunc_Get_Sidebar_Social_Tag_Category_Structure_SidebarSocialTagCategoryStructure' has a wrong offset!");
static_assert(offsetof(SidebarSocialTagWidget_C_FunctionSetTag, CallFunc_Get_Sidebar_Social_Tag_Category_Structure_SidebarSocialTagCategoryStructure_1) == 0x0000B8, "Member 'SidebarSocialTagWidget_C_FunctionSetTag::CallFunc_Get_Sidebar_Social_Tag_Category_Structure_SidebarSocialTagCategoryStructure_1' has a wrong offset!");
static_assert(offsetof(SidebarSocialTagWidget_C_FunctionSetTag, CallFunc_Conv_ObjectToSoftObjectReference_ReturnValue) == 0x000128, "Member 'SidebarSocialTagWidget_C_FunctionSetTag::CallFunc_Conv_ObjectToSoftObjectReference_ReturnValue' has a wrong offset!");
static_assert(offsetof(SidebarSocialTagWidget_C_FunctionSetTag, CallFunc_GetDynamicMaterial_ReturnValue) == 0x000150, "Member 'SidebarSocialTagWidget_C_FunctionSetTag::CallFunc_GetDynamicMaterial_ReturnValue' has a wrong offset!");
static_assert(offsetof(SidebarSocialTagWidget_C_FunctionSetTag, CallFunc_IsValid_ReturnValue) == 0x000158, "Member 'SidebarSocialTagWidget_C_FunctionSetTag::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(SidebarSocialTagWidget_C_FunctionSetTag, CallFunc_IsValid_ReturnValue_1) == 0x000159, "Member 'SidebarSocialTagWidget_C_FunctionSetTag::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");

struct SidebarSocialTagWidget_C_FunctionSetTagBorderColors final
{
public:
	struct FLinearColor                           InnerColor;
	struct FLinearColor                           OuterColor;
	struct FLinearColor                           CallFunc_SelectColor_ReturnValue;
	struct FLinearColor                           CallFunc_SelectColor_ReturnValue_1;
	struct FLinearColor                           CallFunc_SelectColor_ReturnValue_2;
	class UMaterialInstanceDynamic*               CallFunc_GetDynamicMaterial_ReturnValue;
	bool                                          CallFunc_IsValid_ReturnValue;
};
static_assert(alignof(SidebarSocialTagWidget_C_FunctionSetTagBorderColors) == 0x000008, "Wrong alignment on SidebarSocialTagWidget_C_FunctionSetTagBorderColors");
static_assert(sizeof(SidebarSocialTagWidget_C_FunctionSetTagBorderColors) == 0x000060, "Wrong size on SidebarSocialTagWidget_C_FunctionSetTagBorderColors");
static_assert(offsetof(SidebarSocialTagWidget_C_FunctionSetTagBorderColors, InnerColor) == 0x000000, "Member 'SidebarSocialTagWidget_C_FunctionSetTagBorderColors::InnerColor' has a wrong offset!");
static_assert(offsetof(SidebarSocialTagWidget_C_FunctionSetTagBorderColors, OuterColor) == 0x000010, "Member 'SidebarSocialTagWidget_C_FunctionSetTagBorderColors::OuterColor' has a wrong offset!");
static_assert(offsetof(SidebarSocialTagWidget_C_FunctionSetTagBorderColors, CallFunc_SelectColor_ReturnValue) == 0x000020, "Member 'SidebarSocialTagWidget_C_FunctionSetTagBorderColors::CallFunc_SelectColor_ReturnValue' has a wrong offset!");
static_assert(offsetof(SidebarSocialTagWidget_C_FunctionSetTagBorderColors, CallFunc_SelectColor_ReturnValue_1) == 0x000030, "Member 'SidebarSocialTagWidget_C_FunctionSetTagBorderColors::CallFunc_SelectColor_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(SidebarSocialTagWidget_C_FunctionSetTagBorderColors, CallFunc_SelectColor_ReturnValue_2) == 0x000040, "Member 'SidebarSocialTagWidget_C_FunctionSetTagBorderColors::CallFunc_SelectColor_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(SidebarSocialTagWidget_C_FunctionSetTagBorderColors, CallFunc_GetDynamicMaterial_ReturnValue) == 0x000050, "Member 'SidebarSocialTagWidget_C_FunctionSetTagBorderColors::CallFunc_GetDynamicMaterial_ReturnValue' has a wrong offset!");
static_assert(offsetof(SidebarSocialTagWidget_C_FunctionSetTagBorderColors, CallFunc_IsValid_ReturnValue) == 0x000058, "Member 'SidebarSocialTagWidget_C_FunctionSetTagBorderColors::CallFunc_IsValid_ReturnValue' has a wrong offset!");

struct SidebarSocialTagWidget_C_GetCurrentTagBorderColors final
{
public:
	bool                                          CallFunc_IsValid_ReturnValue;
	uint8                                         Pad_1[0x3];
	struct FLinearColor                           CallFunc_K2_GetVectorParameterValue_ReturnValue;
	struct FLinearColor                           CallFunc_K2_GetVectorParameterValue_ReturnValue_1;
};
static_assert(alignof(SidebarSocialTagWidget_C_GetCurrentTagBorderColors) == 0x000004, "Wrong alignment on SidebarSocialTagWidget_C_GetCurrentTagBorderColors");
static_assert(sizeof(SidebarSocialTagWidget_C_GetCurrentTagBorderColors) == 0x000024, "Wrong size on SidebarSocialTagWidget_C_GetCurrentTagBorderColors");
static_assert(offsetof(SidebarSocialTagWidget_C_GetCurrentTagBorderColors, CallFunc_IsValid_ReturnValue) == 0x000000, "Member 'SidebarSocialTagWidget_C_GetCurrentTagBorderColors::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(SidebarSocialTagWidget_C_GetCurrentTagBorderColors, CallFunc_K2_GetVectorParameterValue_ReturnValue) == 0x000004, "Member 'SidebarSocialTagWidget_C_GetCurrentTagBorderColors::CallFunc_K2_GetVectorParameterValue_ReturnValue' has a wrong offset!");
static_assert(offsetof(SidebarSocialTagWidget_C_GetCurrentTagBorderColors, CallFunc_K2_GetVectorParameterValue_ReturnValue_1) == 0x000014, "Member 'SidebarSocialTagWidget_C_GetCurrentTagBorderColors::CallFunc_K2_GetVectorParameterValue_ReturnValue_1' has a wrong offset!");

struct SidebarSocialTagWidget_C_OnTagListEntryHovered final
{
public:
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;
	bool                                          CallFunc_IsAnimationPlaying_ReturnValue;
	uint8                                         Pad_9[0x3];
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;
	struct FTimerHandle                           CallFunc_K2_SetTimerDelegate_ReturnValue;
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue_1;
	float                                         CallFunc_K2_SetTimerDelegate_Time_ImplicitCast;
};
static_assert(alignof(SidebarSocialTagWidget_C_OnTagListEntryHovered) == 0x000008, "Wrong alignment on SidebarSocialTagWidget_C_OnTagListEntryHovered");
static_assert(sizeof(SidebarSocialTagWidget_C_OnTagListEntryHovered) == 0x000030, "Wrong size on SidebarSocialTagWidget_C_OnTagListEntryHovered");
static_assert(offsetof(SidebarSocialTagWidget_C_OnTagListEntryHovered, CallFunc_PlayAnimation_ReturnValue) == 0x000000, "Member 'SidebarSocialTagWidget_C_OnTagListEntryHovered::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");
static_assert(offsetof(SidebarSocialTagWidget_C_OnTagListEntryHovered, CallFunc_IsAnimationPlaying_ReturnValue) == 0x000008, "Member 'SidebarSocialTagWidget_C_OnTagListEntryHovered::CallFunc_IsAnimationPlaying_ReturnValue' has a wrong offset!");
static_assert(offsetof(SidebarSocialTagWidget_C_OnTagListEntryHovered, K2Node_CreateDelegate_OutputDelegate) == 0x00000C, "Member 'SidebarSocialTagWidget_C_OnTagListEntryHovered::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(SidebarSocialTagWidget_C_OnTagListEntryHovered, CallFunc_K2_SetTimerDelegate_ReturnValue) == 0x000018, "Member 'SidebarSocialTagWidget_C_OnTagListEntryHovered::CallFunc_K2_SetTimerDelegate_ReturnValue' has a wrong offset!");
static_assert(offsetof(SidebarSocialTagWidget_C_OnTagListEntryHovered, CallFunc_PlayAnimation_ReturnValue_1) == 0x000020, "Member 'SidebarSocialTagWidget_C_OnTagListEntryHovered::CallFunc_PlayAnimation_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(SidebarSocialTagWidget_C_OnTagListEntryHovered, CallFunc_K2_SetTimerDelegate_Time_ImplicitCast) == 0x000028, "Member 'SidebarSocialTagWidget_C_OnTagListEntryHovered::CallFunc_K2_SetTimerDelegate_Time_ImplicitCast' has a wrong offset!");

struct SidebarSocialTagWidget_C_SetCategoryCustomizationVisibility final
{
public:
	ESlateVisibility                              CategoryCustomizationVisibility;
};
static_assert(alignof(SidebarSocialTagWidget_C_SetCategoryCustomizationVisibility) == 0x000001, "Wrong alignment on SidebarSocialTagWidget_C_SetCategoryCustomizationVisibility");
static_assert(sizeof(SidebarSocialTagWidget_C_SetCategoryCustomizationVisibility) == 0x000001, "Wrong size on SidebarSocialTagWidget_C_SetCategoryCustomizationVisibility");
static_assert(offsetof(SidebarSocialTagWidget_C_SetCategoryCustomizationVisibility, CategoryCustomizationVisibility) == 0x000000, "Member 'SidebarSocialTagWidget_C_SetCategoryCustomizationVisibility::CategoryCustomizationVisibility' has a wrong offset!");

struct SidebarSocialTagWidget_C_SetHighlightState final
{
public:
	bool                                          bHighlighted;
};
static_assert(alignof(SidebarSocialTagWidget_C_SetHighlightState) == 0x000001, "Wrong alignment on SidebarSocialTagWidget_C_SetHighlightState");
static_assert(sizeof(SidebarSocialTagWidget_C_SetHighlightState) == 0x000001, "Wrong size on SidebarSocialTagWidget_C_SetHighlightState");
static_assert(offsetof(SidebarSocialTagWidget_C_SetHighlightState, bHighlighted) == 0x000000, "Member 'SidebarSocialTagWidget_C_SetHighlightState::bHighlighted' has a wrong offset!");

struct SidebarSocialTagWidget_C_SetTag final
{
public:
	class FText                                   InTagName;
	ESocialTagCategory                            InTagCategory;
	bool                                          bInIsSystemTag;
};
static_assert(alignof(SidebarSocialTagWidget_C_SetTag) == 0x000008, "Wrong alignment on SidebarSocialTagWidget_C_SetTag");
static_assert(sizeof(SidebarSocialTagWidget_C_SetTag) == 0x000020, "Wrong size on SidebarSocialTagWidget_C_SetTag");
static_assert(offsetof(SidebarSocialTagWidget_C_SetTag, InTagName) == 0x000000, "Member 'SidebarSocialTagWidget_C_SetTag::InTagName' has a wrong offset!");
static_assert(offsetof(SidebarSocialTagWidget_C_SetTag, InTagCategory) == 0x000018, "Member 'SidebarSocialTagWidget_C_SetTag::InTagCategory' has a wrong offset!");
static_assert(offsetof(SidebarSocialTagWidget_C_SetTag, bInIsSystemTag) == 0x000019, "Member 'SidebarSocialTagWidget_C_SetTag::bInIsSystemTag' has a wrong offset!");

struct SidebarSocialTagWidget_C_SetTagHoverState final
{
public:
	bool                                          IsUserSocialTag;
	bool                                          IsHovering;
	uint8                                         Pad_2[0x6];
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue_1;
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue_2;
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue_3;
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue_4;
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue_5;
};
static_assert(alignof(SidebarSocialTagWidget_C_SetTagHoverState) == 0x000008, "Wrong alignment on SidebarSocialTagWidget_C_SetTagHoverState");
static_assert(sizeof(SidebarSocialTagWidget_C_SetTagHoverState) == 0x000038, "Wrong size on SidebarSocialTagWidget_C_SetTagHoverState");
static_assert(offsetof(SidebarSocialTagWidget_C_SetTagHoverState, IsUserSocialTag) == 0x000000, "Member 'SidebarSocialTagWidget_C_SetTagHoverState::IsUserSocialTag' has a wrong offset!");
static_assert(offsetof(SidebarSocialTagWidget_C_SetTagHoverState, IsHovering) == 0x000001, "Member 'SidebarSocialTagWidget_C_SetTagHoverState::IsHovering' has a wrong offset!");
static_assert(offsetof(SidebarSocialTagWidget_C_SetTagHoverState, CallFunc_PlayAnimation_ReturnValue) == 0x000008, "Member 'SidebarSocialTagWidget_C_SetTagHoverState::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");
static_assert(offsetof(SidebarSocialTagWidget_C_SetTagHoverState, CallFunc_PlayAnimation_ReturnValue_1) == 0x000010, "Member 'SidebarSocialTagWidget_C_SetTagHoverState::CallFunc_PlayAnimation_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(SidebarSocialTagWidget_C_SetTagHoverState, CallFunc_PlayAnimation_ReturnValue_2) == 0x000018, "Member 'SidebarSocialTagWidget_C_SetTagHoverState::CallFunc_PlayAnimation_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(SidebarSocialTagWidget_C_SetTagHoverState, CallFunc_PlayAnimation_ReturnValue_3) == 0x000020, "Member 'SidebarSocialTagWidget_C_SetTagHoverState::CallFunc_PlayAnimation_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(SidebarSocialTagWidget_C_SetTagHoverState, CallFunc_PlayAnimation_ReturnValue_4) == 0x000028, "Member 'SidebarSocialTagWidget_C_SetTagHoverState::CallFunc_PlayAnimation_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(SidebarSocialTagWidget_C_SetTagHoverState, CallFunc_PlayAnimation_ReturnValue_5) == 0x000030, "Member 'SidebarSocialTagWidget_C_SetTagHoverState::CallFunc_PlayAnimation_ReturnValue_5' has a wrong offset!");

struct SidebarSocialTagWidget_C_SetUnhoverState final
{
public:
	bool                                          bPlayAnimation;
	uint8                                         Pad_1[0x3];
	float                                         CallFunc_GetEndTime_ReturnValue;
	float                                         CallFunc_GetStartTime_ReturnValue;
	uint8                                         Pad_C[0x4];
	double                                        CallFunc_SelectFloat_ReturnValue;
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;
	bool                                          CallFunc_IsMobileGame_ReturnValue;
	uint8                                         Pad_21[0x3];
	float                                         CallFunc_GetEndTime_ReturnValue_1;
	bool                                          CallFunc_IsAnimationPlaying_ReturnValue;
	uint8                                         Pad_29[0x3];
	float                                         CallFunc_GetStartTime_ReturnValue_1;
	double                                        CallFunc_SelectFloat_ReturnValue_1;
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue_1;
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;
	uint8                                         Pad_4C[0x4];
	struct FTimerHandle                           CallFunc_K2_SetTimerDelegate_ReturnValue;
	double                                        CallFunc_SelectFloat_B_ImplicitCast;
	double                                        CallFunc_SelectFloat_A_ImplicitCast;
	float                                         CallFunc_PlayAnimation_StartAtTime_ImplicitCast;
	uint8                                         Pad_6C[0x4];
	double                                        CallFunc_SelectFloat_B_ImplicitCast_1;
	double                                        CallFunc_SelectFloat_A_ImplicitCast_1;
	float                                         CallFunc_PlayAnimation_StartAtTime_ImplicitCast_1;
	float                                         CallFunc_K2_SetTimerDelegate_Time_ImplicitCast;
};
static_assert(alignof(SidebarSocialTagWidget_C_SetUnhoverState) == 0x000008, "Wrong alignment on SidebarSocialTagWidget_C_SetUnhoverState");
static_assert(sizeof(SidebarSocialTagWidget_C_SetUnhoverState) == 0x000088, "Wrong size on SidebarSocialTagWidget_C_SetUnhoverState");
static_assert(offsetof(SidebarSocialTagWidget_C_SetUnhoverState, bPlayAnimation) == 0x000000, "Member 'SidebarSocialTagWidget_C_SetUnhoverState::bPlayAnimation' has a wrong offset!");
static_assert(offsetof(SidebarSocialTagWidget_C_SetUnhoverState, CallFunc_GetEndTime_ReturnValue) == 0x000004, "Member 'SidebarSocialTagWidget_C_SetUnhoverState::CallFunc_GetEndTime_ReturnValue' has a wrong offset!");
static_assert(offsetof(SidebarSocialTagWidget_C_SetUnhoverState, CallFunc_GetStartTime_ReturnValue) == 0x000008, "Member 'SidebarSocialTagWidget_C_SetUnhoverState::CallFunc_GetStartTime_ReturnValue' has a wrong offset!");
static_assert(offsetof(SidebarSocialTagWidget_C_SetUnhoverState, CallFunc_SelectFloat_ReturnValue) == 0x000010, "Member 'SidebarSocialTagWidget_C_SetUnhoverState::CallFunc_SelectFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(SidebarSocialTagWidget_C_SetUnhoverState, CallFunc_PlayAnimation_ReturnValue) == 0x000018, "Member 'SidebarSocialTagWidget_C_SetUnhoverState::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");
static_assert(offsetof(SidebarSocialTagWidget_C_SetUnhoverState, CallFunc_IsMobileGame_ReturnValue) == 0x000020, "Member 'SidebarSocialTagWidget_C_SetUnhoverState::CallFunc_IsMobileGame_ReturnValue' has a wrong offset!");
static_assert(offsetof(SidebarSocialTagWidget_C_SetUnhoverState, CallFunc_GetEndTime_ReturnValue_1) == 0x000024, "Member 'SidebarSocialTagWidget_C_SetUnhoverState::CallFunc_GetEndTime_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(SidebarSocialTagWidget_C_SetUnhoverState, CallFunc_IsAnimationPlaying_ReturnValue) == 0x000028, "Member 'SidebarSocialTagWidget_C_SetUnhoverState::CallFunc_IsAnimationPlaying_ReturnValue' has a wrong offset!");
static_assert(offsetof(SidebarSocialTagWidget_C_SetUnhoverState, CallFunc_GetStartTime_ReturnValue_1) == 0x00002C, "Member 'SidebarSocialTagWidget_C_SetUnhoverState::CallFunc_GetStartTime_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(SidebarSocialTagWidget_C_SetUnhoverState, CallFunc_SelectFloat_ReturnValue_1) == 0x000030, "Member 'SidebarSocialTagWidget_C_SetUnhoverState::CallFunc_SelectFloat_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(SidebarSocialTagWidget_C_SetUnhoverState, CallFunc_PlayAnimation_ReturnValue_1) == 0x000038, "Member 'SidebarSocialTagWidget_C_SetUnhoverState::CallFunc_PlayAnimation_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(SidebarSocialTagWidget_C_SetUnhoverState, K2Node_CreateDelegate_OutputDelegate) == 0x000040, "Member 'SidebarSocialTagWidget_C_SetUnhoverState::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(SidebarSocialTagWidget_C_SetUnhoverState, CallFunc_K2_SetTimerDelegate_ReturnValue) == 0x000050, "Member 'SidebarSocialTagWidget_C_SetUnhoverState::CallFunc_K2_SetTimerDelegate_ReturnValue' has a wrong offset!");
static_assert(offsetof(SidebarSocialTagWidget_C_SetUnhoverState, CallFunc_SelectFloat_B_ImplicitCast) == 0x000058, "Member 'SidebarSocialTagWidget_C_SetUnhoverState::CallFunc_SelectFloat_B_ImplicitCast' has a wrong offset!");
static_assert(offsetof(SidebarSocialTagWidget_C_SetUnhoverState, CallFunc_SelectFloat_A_ImplicitCast) == 0x000060, "Member 'SidebarSocialTagWidget_C_SetUnhoverState::CallFunc_SelectFloat_A_ImplicitCast' has a wrong offset!");
static_assert(offsetof(SidebarSocialTagWidget_C_SetUnhoverState, CallFunc_PlayAnimation_StartAtTime_ImplicitCast) == 0x000068, "Member 'SidebarSocialTagWidget_C_SetUnhoverState::CallFunc_PlayAnimation_StartAtTime_ImplicitCast' has a wrong offset!");
static_assert(offsetof(SidebarSocialTagWidget_C_SetUnhoverState, CallFunc_SelectFloat_B_ImplicitCast_1) == 0x000070, "Member 'SidebarSocialTagWidget_C_SetUnhoverState::CallFunc_SelectFloat_B_ImplicitCast_1' has a wrong offset!");
static_assert(offsetof(SidebarSocialTagWidget_C_SetUnhoverState, CallFunc_SelectFloat_A_ImplicitCast_1) == 0x000078, "Member 'SidebarSocialTagWidget_C_SetUnhoverState::CallFunc_SelectFloat_A_ImplicitCast_1' has a wrong offset!");
static_assert(offsetof(SidebarSocialTagWidget_C_SetUnhoverState, CallFunc_PlayAnimation_StartAtTime_ImplicitCast_1) == 0x000080, "Member 'SidebarSocialTagWidget_C_SetUnhoverState::CallFunc_PlayAnimation_StartAtTime_ImplicitCast_1' has a wrong offset!");
static_assert(offsetof(SidebarSocialTagWidget_C_SetUnhoverState, CallFunc_K2_SetTimerDelegate_Time_ImplicitCast) == 0x000084, "Member 'SidebarSocialTagWidget_C_SetUnhoverState::CallFunc_K2_SetTimerDelegate_Time_ImplicitCast' has a wrong offset!");

}
