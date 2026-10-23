#pragma once

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "Engine_structs.hpp"
#include "UMG_structs.hpp"
#include "SlateCore_structs.hpp"
#include "SidebarSocialTagCategoryStructure_structs.hpp"

namespace SDK::Params
{

struct SidebarSocialAddTagWidget_C_EventSetTag final
{
public:
	struct FSlateColor                            K2Node_MakeStruct_SlateColor;
	uint8                                         Pad_14[0x4];
	struct FSidebarSocialTagCategoryStructure     CallFunc_Get_Sidebar_Social_Tag_Category_Structure_SidebarSocialTagCategoryStructure;
	struct FSidebarSocialTagCategoryStructure     CallFunc_Get_Sidebar_Social_Tag_Category_Structure_SidebarSocialTagCategoryStructure_1;
	class UMaterialInstanceDynamic*               CallFunc_GetDynamicMaterial_ReturnValue;
	bool                                          CallFunc_IsValid_ReturnValue;
	uint8                                         Pad_101[0x7];
	class UMaterialInstanceDynamic*               CallFunc_GetDynamicMaterial_ReturnValue_1;
	bool                                          CallFunc_IsValid_ReturnValue_1;
};
static_assert(alignof(SidebarSocialAddTagWidget_C_EventSetTag) == 0x000008, "Wrong alignment on SidebarSocialAddTagWidget_C_EventSetTag");
static_assert(sizeof(SidebarSocialAddTagWidget_C_EventSetTag) == 0x000118, "Wrong size on SidebarSocialAddTagWidget_C_EventSetTag");
static_assert(offsetof(SidebarSocialAddTagWidget_C_EventSetTag, K2Node_MakeStruct_SlateColor) == 0x000000, "Member 'SidebarSocialAddTagWidget_C_EventSetTag::K2Node_MakeStruct_SlateColor' has a wrong offset!");
static_assert(offsetof(SidebarSocialAddTagWidget_C_EventSetTag, CallFunc_Get_Sidebar_Social_Tag_Category_Structure_SidebarSocialTagCategoryStructure) == 0x000018, "Member 'SidebarSocialAddTagWidget_C_EventSetTag::CallFunc_Get_Sidebar_Social_Tag_Category_Structure_SidebarSocialTagCategoryStructure' has a wrong offset!");
static_assert(offsetof(SidebarSocialAddTagWidget_C_EventSetTag, CallFunc_Get_Sidebar_Social_Tag_Category_Structure_SidebarSocialTagCategoryStructure_1) == 0x000088, "Member 'SidebarSocialAddTagWidget_C_EventSetTag::CallFunc_Get_Sidebar_Social_Tag_Category_Structure_SidebarSocialTagCategoryStructure_1' has a wrong offset!");
static_assert(offsetof(SidebarSocialAddTagWidget_C_EventSetTag, CallFunc_GetDynamicMaterial_ReturnValue) == 0x0000F8, "Member 'SidebarSocialAddTagWidget_C_EventSetTag::CallFunc_GetDynamicMaterial_ReturnValue' has a wrong offset!");
static_assert(offsetof(SidebarSocialAddTagWidget_C_EventSetTag, CallFunc_IsValid_ReturnValue) == 0x000100, "Member 'SidebarSocialAddTagWidget_C_EventSetTag::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(SidebarSocialAddTagWidget_C_EventSetTag, CallFunc_GetDynamicMaterial_ReturnValue_1) == 0x000108, "Member 'SidebarSocialAddTagWidget_C_EventSetTag::CallFunc_GetDynamicMaterial_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(SidebarSocialAddTagWidget_C_EventSetTag, CallFunc_IsValid_ReturnValue_1) == 0x000110, "Member 'SidebarSocialAddTagWidget_C_EventSetTag::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");

struct SidebarSocialAddTagWidget_C_ExecuteUbergraph_SidebarSocialAddTagWidget final
{
public:
	int32                                         EntryPoint;
	bool                                          CallFunc_IsValid_ReturnValue;
};
static_assert(alignof(SidebarSocialAddTagWidget_C_ExecuteUbergraph_SidebarSocialAddTagWidget) == 0x000004, "Wrong alignment on SidebarSocialAddTagWidget_C_ExecuteUbergraph_SidebarSocialAddTagWidget");
static_assert(sizeof(SidebarSocialAddTagWidget_C_ExecuteUbergraph_SidebarSocialAddTagWidget) == 0x000008, "Wrong size on SidebarSocialAddTagWidget_C_ExecuteUbergraph_SidebarSocialAddTagWidget");
static_assert(offsetof(SidebarSocialAddTagWidget_C_ExecuteUbergraph_SidebarSocialAddTagWidget, EntryPoint) == 0x000000, "Member 'SidebarSocialAddTagWidget_C_ExecuteUbergraph_SidebarSocialAddTagWidget::EntryPoint' has a wrong offset!");
static_assert(offsetof(SidebarSocialAddTagWidget_C_ExecuteUbergraph_SidebarSocialAddTagWidget, CallFunc_IsValid_ReturnValue) == 0x000004, "Member 'SidebarSocialAddTagWidget_C_ExecuteUbergraph_SidebarSocialAddTagWidget::CallFunc_IsValid_ReturnValue' has a wrong offset!");

struct SidebarSocialAddTagWidget_C_FunctionOnHovered final
{
public:
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;
	uint8                                         Pad_C[0x4];
	struct FTimerHandle                           CallFunc_K2_SetTimerDelegate_ReturnValue;
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;
	float                                         CallFunc_K2_SetTimerDelegate_Time_ImplicitCast;
};
static_assert(alignof(SidebarSocialAddTagWidget_C_FunctionOnHovered) == 0x000008, "Wrong alignment on SidebarSocialAddTagWidget_C_FunctionOnHovered");
static_assert(sizeof(SidebarSocialAddTagWidget_C_FunctionOnHovered) == 0x000028, "Wrong size on SidebarSocialAddTagWidget_C_FunctionOnHovered");
static_assert(offsetof(SidebarSocialAddTagWidget_C_FunctionOnHovered, K2Node_CreateDelegate_OutputDelegate) == 0x000000, "Member 'SidebarSocialAddTagWidget_C_FunctionOnHovered::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(SidebarSocialAddTagWidget_C_FunctionOnHovered, CallFunc_K2_SetTimerDelegate_ReturnValue) == 0x000010, "Member 'SidebarSocialAddTagWidget_C_FunctionOnHovered::CallFunc_K2_SetTimerDelegate_ReturnValue' has a wrong offset!");
static_assert(offsetof(SidebarSocialAddTagWidget_C_FunctionOnHovered, CallFunc_PlayAnimation_ReturnValue) == 0x000018, "Member 'SidebarSocialAddTagWidget_C_FunctionOnHovered::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");
static_assert(offsetof(SidebarSocialAddTagWidget_C_FunctionOnHovered, CallFunc_K2_SetTimerDelegate_Time_ImplicitCast) == 0x000020, "Member 'SidebarSocialAddTagWidget_C_FunctionOnHovered::CallFunc_K2_SetTimerDelegate_Time_ImplicitCast' has a wrong offset!");

struct SidebarSocialAddTagWidget_C_FunctionOnUnhovered final
{
public:
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;
	uint8                                         Pad_C[0x4];
	struct FTimerHandle                           CallFunc_K2_SetTimerDelegate_ReturnValue;
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;
	float                                         CallFunc_K2_SetTimerDelegate_Time_ImplicitCast;
};
static_assert(alignof(SidebarSocialAddTagWidget_C_FunctionOnUnhovered) == 0x000008, "Wrong alignment on SidebarSocialAddTagWidget_C_FunctionOnUnhovered");
static_assert(sizeof(SidebarSocialAddTagWidget_C_FunctionOnUnhovered) == 0x000028, "Wrong size on SidebarSocialAddTagWidget_C_FunctionOnUnhovered");
static_assert(offsetof(SidebarSocialAddTagWidget_C_FunctionOnUnhovered, K2Node_CreateDelegate_OutputDelegate) == 0x000000, "Member 'SidebarSocialAddTagWidget_C_FunctionOnUnhovered::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(SidebarSocialAddTagWidget_C_FunctionOnUnhovered, CallFunc_K2_SetTimerDelegate_ReturnValue) == 0x000010, "Member 'SidebarSocialAddTagWidget_C_FunctionOnUnhovered::CallFunc_K2_SetTimerDelegate_ReturnValue' has a wrong offset!");
static_assert(offsetof(SidebarSocialAddTagWidget_C_FunctionOnUnhovered, CallFunc_PlayAnimation_ReturnValue) == 0x000018, "Member 'SidebarSocialAddTagWidget_C_FunctionOnUnhovered::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");
static_assert(offsetof(SidebarSocialAddTagWidget_C_FunctionOnUnhovered, CallFunc_K2_SetTimerDelegate_Time_ImplicitCast) == 0x000020, "Member 'SidebarSocialAddTagWidget_C_FunctionOnUnhovered::CallFunc_K2_SetTimerDelegate_Time_ImplicitCast' has a wrong offset!");

struct SidebarSocialAddTagWidget_C_FunctionSetCategoryCustomizationVisibility final
{
public:
	ESlateVisibility                              CategoryCustomizationVisibility;
};
static_assert(alignof(SidebarSocialAddTagWidget_C_FunctionSetCategoryCustomizationVisibility) == 0x000001, "Wrong alignment on SidebarSocialAddTagWidget_C_FunctionSetCategoryCustomizationVisibility");
static_assert(sizeof(SidebarSocialAddTagWidget_C_FunctionSetCategoryCustomizationVisibility) == 0x000001, "Wrong size on SidebarSocialAddTagWidget_C_FunctionSetCategoryCustomizationVisibility");
static_assert(offsetof(SidebarSocialAddTagWidget_C_FunctionSetCategoryCustomizationVisibility, CategoryCustomizationVisibility) == 0x000000, "Member 'SidebarSocialAddTagWidget_C_FunctionSetCategoryCustomizationVisibility::CategoryCustomizationVisibility' has a wrong offset!");

struct SidebarSocialAddTagWidget_C_GetCurrentTagBorderColors final
{
public:
	bool                                          CallFunc_IsValid_ReturnValue;
	uint8                                         Pad_1[0x3];
	struct FLinearColor                           CallFunc_K2_GetVectorParameterValue_ReturnValue;
	struct FLinearColor                           CallFunc_K2_GetVectorParameterValue_ReturnValue_1;
};
static_assert(alignof(SidebarSocialAddTagWidget_C_GetCurrentTagBorderColors) == 0x000004, "Wrong alignment on SidebarSocialAddTagWidget_C_GetCurrentTagBorderColors");
static_assert(sizeof(SidebarSocialAddTagWidget_C_GetCurrentTagBorderColors) == 0x000024, "Wrong size on SidebarSocialAddTagWidget_C_GetCurrentTagBorderColors");
static_assert(offsetof(SidebarSocialAddTagWidget_C_GetCurrentTagBorderColors, CallFunc_IsValid_ReturnValue) == 0x000000, "Member 'SidebarSocialAddTagWidget_C_GetCurrentTagBorderColors::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(SidebarSocialAddTagWidget_C_GetCurrentTagBorderColors, CallFunc_K2_GetVectorParameterValue_ReturnValue) == 0x000004, "Member 'SidebarSocialAddTagWidget_C_GetCurrentTagBorderColors::CallFunc_K2_GetVectorParameterValue_ReturnValue' has a wrong offset!");
static_assert(offsetof(SidebarSocialAddTagWidget_C_GetCurrentTagBorderColors, CallFunc_K2_GetVectorParameterValue_ReturnValue_1) == 0x000014, "Member 'SidebarSocialAddTagWidget_C_GetCurrentTagBorderColors::CallFunc_K2_GetVectorParameterValue_ReturnValue_1' has a wrong offset!");

}
