#pragma once

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "SlateCore_structs.hpp"

namespace SDK::Params
{

struct SidebarButton_C_ExecuteUbergraph_SidebarButton final
{
public:
	int32                                         EntryPoint;
	uint8                                         Pad_4[0x4];
	double                                        Temp_real_Variable;
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue_1;
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue_2;
	bool                                          CallFunc_IsUsingTouch_ReturnValue;
	bool                                          CallFunc_Not_PreBool_ReturnValue;
	bool                                          CallFunc_IsMobileGame_ReturnValue;
	uint8                                         Pad_2B[0x5];
	double                                        Temp_real_Variable_1;
	bool                                          Temp_bool_Variable;
	uint8                                         Pad_39[0x7];
	double                                        K2Node_Select_Default;
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue_3;
	bool                                          K2Node_Event_IsDesignTime;
	bool                                          CallFunc_GetSelected_ReturnValue;
	uint8                                         Pad_52[0x2];
	struct FLinearColor                           CallFunc_SelectColor_ReturnValue;
	bool                                          CallFunc_IsHovered_ReturnValue;
	bool                                          CallFunc_GetSelected_ReturnValue_1;
	uint8                                         Pad_66[0x2];
	struct FLinearColor                           CallFunc_SelectColor_ReturnValue_1;
	struct FLinearColor                           CallFunc_SelectColor_ReturnValue_2;
	struct FLinearColor                           CallFunc_SelectColor_ReturnValue_3;
	struct FSlateColor                            K2Node_MakeStruct_SlateColor;
	struct FSlateColor                            K2Node_MakeStruct_SlateColor_1;
	double                                        Temp_real_Variable_2;
	struct FSlateColor                            K2Node_MakeStruct_SlateColor_2;
	uint8                                         Pad_DC[0x4];
	double                                        Temp_real_Variable_3;
	struct FLinearColor                           CallFunc_SelectColor_ReturnValue_4;
	bool                                          Temp_bool_Variable_1;
	uint8                                         Pad_F9[0x3];
	struct FSlateColor                            K2Node_MakeStruct_SlateColor_3;
	double                                        K2Node_Select_Default_1;
	struct FLinearColor                           CallFunc_SelectColor_ReturnValue_5;
	struct FSlateColor                            K2Node_MakeStruct_SlateColor_4;
	float                                         CallFunc_SetHeightOverride_InHeightOverride_ImplicitCast;
	float                                         CallFunc_SetWidthOverride_InWidthOverride_ImplicitCast;
};
static_assert(alignof(SidebarButton_C_ExecuteUbergraph_SidebarButton) == 0x000008, "Wrong alignment on SidebarButton_C_ExecuteUbergraph_SidebarButton");
static_assert(sizeof(SidebarButton_C_ExecuteUbergraph_SidebarButton) == 0x000148, "Wrong size on SidebarButton_C_ExecuteUbergraph_SidebarButton");
static_assert(offsetof(SidebarButton_C_ExecuteUbergraph_SidebarButton, EntryPoint) == 0x000000, "Member 'SidebarButton_C_ExecuteUbergraph_SidebarButton::EntryPoint' has a wrong offset!");
static_assert(offsetof(SidebarButton_C_ExecuteUbergraph_SidebarButton, Temp_real_Variable) == 0x000008, "Member 'SidebarButton_C_ExecuteUbergraph_SidebarButton::Temp_real_Variable' has a wrong offset!");
static_assert(offsetof(SidebarButton_C_ExecuteUbergraph_SidebarButton, CallFunc_PlayAnimation_ReturnValue) == 0x000010, "Member 'SidebarButton_C_ExecuteUbergraph_SidebarButton::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");
static_assert(offsetof(SidebarButton_C_ExecuteUbergraph_SidebarButton, CallFunc_PlayAnimation_ReturnValue_1) == 0x000018, "Member 'SidebarButton_C_ExecuteUbergraph_SidebarButton::CallFunc_PlayAnimation_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(SidebarButton_C_ExecuteUbergraph_SidebarButton, CallFunc_PlayAnimation_ReturnValue_2) == 0x000020, "Member 'SidebarButton_C_ExecuteUbergraph_SidebarButton::CallFunc_PlayAnimation_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(SidebarButton_C_ExecuteUbergraph_SidebarButton, CallFunc_IsUsingTouch_ReturnValue) == 0x000028, "Member 'SidebarButton_C_ExecuteUbergraph_SidebarButton::CallFunc_IsUsingTouch_ReturnValue' has a wrong offset!");
static_assert(offsetof(SidebarButton_C_ExecuteUbergraph_SidebarButton, CallFunc_Not_PreBool_ReturnValue) == 0x000029, "Member 'SidebarButton_C_ExecuteUbergraph_SidebarButton::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(SidebarButton_C_ExecuteUbergraph_SidebarButton, CallFunc_IsMobileGame_ReturnValue) == 0x00002A, "Member 'SidebarButton_C_ExecuteUbergraph_SidebarButton::CallFunc_IsMobileGame_ReturnValue' has a wrong offset!");
static_assert(offsetof(SidebarButton_C_ExecuteUbergraph_SidebarButton, Temp_real_Variable_1) == 0x000030, "Member 'SidebarButton_C_ExecuteUbergraph_SidebarButton::Temp_real_Variable_1' has a wrong offset!");
static_assert(offsetof(SidebarButton_C_ExecuteUbergraph_SidebarButton, Temp_bool_Variable) == 0x000038, "Member 'SidebarButton_C_ExecuteUbergraph_SidebarButton::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(SidebarButton_C_ExecuteUbergraph_SidebarButton, K2Node_Select_Default) == 0x000040, "Member 'SidebarButton_C_ExecuteUbergraph_SidebarButton::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(SidebarButton_C_ExecuteUbergraph_SidebarButton, CallFunc_PlayAnimation_ReturnValue_3) == 0x000048, "Member 'SidebarButton_C_ExecuteUbergraph_SidebarButton::CallFunc_PlayAnimation_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(SidebarButton_C_ExecuteUbergraph_SidebarButton, K2Node_Event_IsDesignTime) == 0x000050, "Member 'SidebarButton_C_ExecuteUbergraph_SidebarButton::K2Node_Event_IsDesignTime' has a wrong offset!");
static_assert(offsetof(SidebarButton_C_ExecuteUbergraph_SidebarButton, CallFunc_GetSelected_ReturnValue) == 0x000051, "Member 'SidebarButton_C_ExecuteUbergraph_SidebarButton::CallFunc_GetSelected_ReturnValue' has a wrong offset!");
static_assert(offsetof(SidebarButton_C_ExecuteUbergraph_SidebarButton, CallFunc_SelectColor_ReturnValue) == 0x000054, "Member 'SidebarButton_C_ExecuteUbergraph_SidebarButton::CallFunc_SelectColor_ReturnValue' has a wrong offset!");
static_assert(offsetof(SidebarButton_C_ExecuteUbergraph_SidebarButton, CallFunc_IsHovered_ReturnValue) == 0x000064, "Member 'SidebarButton_C_ExecuteUbergraph_SidebarButton::CallFunc_IsHovered_ReturnValue' has a wrong offset!");
static_assert(offsetof(SidebarButton_C_ExecuteUbergraph_SidebarButton, CallFunc_GetSelected_ReturnValue_1) == 0x000065, "Member 'SidebarButton_C_ExecuteUbergraph_SidebarButton::CallFunc_GetSelected_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(SidebarButton_C_ExecuteUbergraph_SidebarButton, CallFunc_SelectColor_ReturnValue_1) == 0x000068, "Member 'SidebarButton_C_ExecuteUbergraph_SidebarButton::CallFunc_SelectColor_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(SidebarButton_C_ExecuteUbergraph_SidebarButton, CallFunc_SelectColor_ReturnValue_2) == 0x000078, "Member 'SidebarButton_C_ExecuteUbergraph_SidebarButton::CallFunc_SelectColor_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(SidebarButton_C_ExecuteUbergraph_SidebarButton, CallFunc_SelectColor_ReturnValue_3) == 0x000088, "Member 'SidebarButton_C_ExecuteUbergraph_SidebarButton::CallFunc_SelectColor_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(SidebarButton_C_ExecuteUbergraph_SidebarButton, K2Node_MakeStruct_SlateColor) == 0x000098, "Member 'SidebarButton_C_ExecuteUbergraph_SidebarButton::K2Node_MakeStruct_SlateColor' has a wrong offset!");
static_assert(offsetof(SidebarButton_C_ExecuteUbergraph_SidebarButton, K2Node_MakeStruct_SlateColor_1) == 0x0000AC, "Member 'SidebarButton_C_ExecuteUbergraph_SidebarButton::K2Node_MakeStruct_SlateColor_1' has a wrong offset!");
static_assert(offsetof(SidebarButton_C_ExecuteUbergraph_SidebarButton, Temp_real_Variable_2) == 0x0000C0, "Member 'SidebarButton_C_ExecuteUbergraph_SidebarButton::Temp_real_Variable_2' has a wrong offset!");
static_assert(offsetof(SidebarButton_C_ExecuteUbergraph_SidebarButton, K2Node_MakeStruct_SlateColor_2) == 0x0000C8, "Member 'SidebarButton_C_ExecuteUbergraph_SidebarButton::K2Node_MakeStruct_SlateColor_2' has a wrong offset!");
static_assert(offsetof(SidebarButton_C_ExecuteUbergraph_SidebarButton, Temp_real_Variable_3) == 0x0000E0, "Member 'SidebarButton_C_ExecuteUbergraph_SidebarButton::Temp_real_Variable_3' has a wrong offset!");
static_assert(offsetof(SidebarButton_C_ExecuteUbergraph_SidebarButton, CallFunc_SelectColor_ReturnValue_4) == 0x0000E8, "Member 'SidebarButton_C_ExecuteUbergraph_SidebarButton::CallFunc_SelectColor_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(SidebarButton_C_ExecuteUbergraph_SidebarButton, Temp_bool_Variable_1) == 0x0000F8, "Member 'SidebarButton_C_ExecuteUbergraph_SidebarButton::Temp_bool_Variable_1' has a wrong offset!");
static_assert(offsetof(SidebarButton_C_ExecuteUbergraph_SidebarButton, K2Node_MakeStruct_SlateColor_3) == 0x0000FC, "Member 'SidebarButton_C_ExecuteUbergraph_SidebarButton::K2Node_MakeStruct_SlateColor_3' has a wrong offset!");
static_assert(offsetof(SidebarButton_C_ExecuteUbergraph_SidebarButton, K2Node_Select_Default_1) == 0x000110, "Member 'SidebarButton_C_ExecuteUbergraph_SidebarButton::K2Node_Select_Default_1' has a wrong offset!");
static_assert(offsetof(SidebarButton_C_ExecuteUbergraph_SidebarButton, CallFunc_SelectColor_ReturnValue_5) == 0x000118, "Member 'SidebarButton_C_ExecuteUbergraph_SidebarButton::CallFunc_SelectColor_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(SidebarButton_C_ExecuteUbergraph_SidebarButton, K2Node_MakeStruct_SlateColor_4) == 0x000128, "Member 'SidebarButton_C_ExecuteUbergraph_SidebarButton::K2Node_MakeStruct_SlateColor_4' has a wrong offset!");
static_assert(offsetof(SidebarButton_C_ExecuteUbergraph_SidebarButton, CallFunc_SetHeightOverride_InHeightOverride_ImplicitCast) == 0x00013C, "Member 'SidebarButton_C_ExecuteUbergraph_SidebarButton::CallFunc_SetHeightOverride_InHeightOverride_ImplicitCast' has a wrong offset!");
static_assert(offsetof(SidebarButton_C_ExecuteUbergraph_SidebarButton, CallFunc_SetWidthOverride_InWidthOverride_ImplicitCast) == 0x000140, "Member 'SidebarButton_C_ExecuteUbergraph_SidebarButton::CallFunc_SetWidthOverride_InWidthOverride_ImplicitCast' has a wrong offset!");

struct SidebarButton_C_PreConstruct final
{
public:
	bool                                          IsDesignTime;
};
static_assert(alignof(SidebarButton_C_PreConstruct) == 0x000001, "Wrong alignment on SidebarButton_C_PreConstruct");
static_assert(sizeof(SidebarButton_C_PreConstruct) == 0x000001, "Wrong size on SidebarButton_C_PreConstruct");
static_assert(offsetof(SidebarButton_C_PreConstruct, IsDesignTime) == 0x000000, "Member 'SidebarButton_C_PreConstruct::IsDesignTime' has a wrong offset!");

struct SidebarButton_C_SetSkewBoxColor final
{
public:
	struct FLinearColor                           InputPin;
	class UMaterialInstanceDynamic*               CallFunc_GetDynamicMaterial_ReturnValue;
};
static_assert(alignof(SidebarButton_C_SetSkewBoxColor) == 0x000008, "Wrong alignment on SidebarButton_C_SetSkewBoxColor");
static_assert(sizeof(SidebarButton_C_SetSkewBoxColor) == 0x000018, "Wrong size on SidebarButton_C_SetSkewBoxColor");
static_assert(offsetof(SidebarButton_C_SetSkewBoxColor, InputPin) == 0x000000, "Member 'SidebarButton_C_SetSkewBoxColor::InputPin' has a wrong offset!");
static_assert(offsetof(SidebarButton_C_SetSkewBoxColor, CallFunc_GetDynamicMaterial_ReturnValue) == 0x000010, "Member 'SidebarButton_C_SetSkewBoxColor::CallFunc_GetDynamicMaterial_ReturnValue' has a wrong offset!");

}
