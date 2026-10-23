#pragma once

#include "Basic.hpp"

#include "UMG_structs.hpp"
#include "SlateCore_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "FortniteUI_structs.hpp"

namespace SDK::Params
{

struct AthenaMOTDTileMainPage_C_BP_OnItemSelectionChanged final
{
public:
	bool                                          bIsSelected;
};
static_assert(alignof(AthenaMOTDTileMainPage_C_BP_OnItemSelectionChanged) == 0x000001, "Wrong alignment on AthenaMOTDTileMainPage_C_BP_OnItemSelectionChanged");
static_assert(sizeof(AthenaMOTDTileMainPage_C_BP_OnItemSelectionChanged) == 0x000001, "Wrong size on AthenaMOTDTileMainPage_C_BP_OnItemSelectionChanged");
static_assert(offsetof(AthenaMOTDTileMainPage_C_BP_OnItemSelectionChanged, bIsSelected) == 0x000000, "Member 'AthenaMOTDTileMainPage_C_BP_OnItemSelectionChanged::bIsSelected' has a wrong offset!");

struct AthenaMOTDTileMainPage_C_ExecuteUbergraph_AthenaMOTDTileMainPage final
{
public:
	int32                                         EntryPoint;
	bool                                          Temp_bool_Variable;
	bool                                          Temp_bool_Variable_1;
	uint8                                         Pad_6[0x2];
	struct FLinearColor                           Temp_struct_Variable;
	struct FLinearColor                           Temp_struct_Variable_1;
	bool                                          Temp_bool_Variable_2;
	uint8                                         Pad_29[0x3];
	float                                         Temp_real_Variable;
	float                                         Temp_real_Variable_1;
	bool                                          Temp_bool_Variable_3;
	uint8                                         Pad_35[0x3];
	float                                         Temp_real_Variable_2;
	float                                         Temp_real_Variable_3;
	bool                                          Temp_bool_Variable_4;
	uint8                                         Pad_41[0x7];
	struct FVector2D                              Temp_struct_Variable_2;
	struct FVector2D                              Temp_struct_Variable_3;
	struct FGeometry                              K2Node_Event_MyGeometry;
	struct FPointerEvent                          K2Node_Event_MouseEvent_1;
	struct FPointerEvent                          K2Node_Event_MouseEvent;
	bool                                          CallFunc_IsListItemSelected_ReturnValue;
	bool                                          K2Node_Event_bIsSelected;
	uint8                                         Pad_1DA[0x6];
	class UMaterialInstanceDynamic*               CallFunc_GetDynamicMaterial_ReturnValue;
	class UMaterialInstanceDynamic*               CallFunc_CreateDynamicMaterialInstance_ReturnValue;
	bool                                          CallFunc_IsValid_ReturnValue;
	uint8                                         Pad_1F1[0x3];
	struct FSlateColor                            K2Node_MakeStruct_SlateColor;
	struct FAthenaMOTDBase                        K2Node_Event_NewsEntry;
	struct FLinearColor                           CallFunc_Conv_ColorToLinearColor_ReturnValue;
	struct FLinearColor                           CallFunc_Conv_ColorToLinearColor_ReturnValue_1;
	bool                                          CallFunc_GetSelected_ReturnValue;
	uint8                                         Pad_2F9[0x3];
	struct FLinearColor                           K2Node_Select_Default;
	bool                                          CallFunc_BooleanOR_ReturnValue;
	bool                                          CallFunc_Not_PreBool_ReturnValue;
	uint8                                         Pad_30E[0x2];
	struct FFontOutlineSettings                   K2Node_MakeStruct_FontOutlineSettings;
	struct FSlateFontInfo                         K2Node_MakeStruct_SlateFontInfo;
	uint8                                         Pad_388[0x8];
	struct FTextBlockStyle                        K2Node_MakeStruct_TextBlockStyle;
	bool                                          CallFunc_IsMobileGame_ReturnValue;
	uint8                                         Pad_6A1[0x3];
	struct FLinearColor                           K2Node_Select_Default_1;
	float                                         K2Node_Select_Default_2;
	struct FSlateColor                            K2Node_MakeStruct_SlateColor_1;
	uint8                                         Pad_6CC[0x4];
	struct FSlateBrush                            K2Node_MakeStruct_SlateBrush;
	float                                         K2Node_Select_Default_3;
	uint8                                         Pad_794[0x4];
	struct FVector2D                              K2Node_Select_Default_4;
	bool                                          Temp_bool_Variable_5;
	uint8                                         Pad_7A9[0x3];
	struct FLinearColor                           Temp_struct_Variable_4;
	struct FLinearColor                           Temp_struct_Variable_5;
	bool                                          Temp_bool_Variable_6;
	bool                                          Temp_bool_Variable_7;
	uint8                                         Pad_7CE[0x2];
	struct FLinearColor                           K2Node_Select_Default_5;
	bool                                          Temp_bool_Variable_8;
	uint8                                         Pad_7E1[0x7];
	class UBorderSlot*                            CallFunc_SlotAsBorderSlot_ReturnValue;
	bool                                          CallFunc_IsMobileGame_ReturnValue_1;
	bool                                          Temp_bool_Variable_9;
	bool                                          CallFunc_IsMobileGame_ReturnValue_2;
	uint8                                         Pad_7F3[0x1];
	float                                         Temp_real_Variable_4;
	class UWidgetAnimation*                       K2Node_Select_Default_6;
	class UUMGSequencePlayer*                     CallFunc_PlayAnimationForward_ReturnValue;
	class UWidgetAnimation*                       K2Node_Select_Default_7;
	float                                         Temp_real_Variable_5;
	uint8                                         Pad_814[0x4];
	class UUMGSequencePlayer*                     CallFunc_PlayAnimationReverse_ReturnValue;
	bool                                          CallFunc_IsMobileGame_ReturnValue_3;
	uint8                                         Pad_821[0x7];
	class UWidgetAnimation*                       K2Node_Select_Default_8;
	class UUMGSequencePlayer*                     CallFunc_PlayAnimationForward_ReturnValue_1;
	class UUMGSequencePlayer*                     CallFunc_PlayAnimationReverse_ReturnValue_1;
	bool                                          Temp_bool_Variable_10;
	uint8                                         Pad_841[0x7];
	class UMaterialInstanceDynamic*               CallFunc_GetDynamicMaterial_ReturnValue_1;
	float                                         K2Node_Select_Default_9;
	struct FMargin                                K2Node_MakeStruct_Margin;
	struct FLinearColor                           K2Node_Select_Default_10;
	struct FLinearColor                           Temp_struct_Variable_6;
	bool                                          CallFunc_IsValid_ReturnValue_1;
	uint8                                         Pad_885[0x3];
	struct FLinearColor                           Temp_struct_Variable_7;
	bool                                          Temp_bool_Variable_11;
	uint8                                         Pad_899[0x7];
	double                                        Temp_real_Variable_6;
	struct FLinearColor                           K2Node_Select_Default_11;
	double                                        Temp_real_Variable_7;
	bool                                          Temp_bool_Variable_12;
	uint8                                         Pad_8C1[0x7];
	double                                        K2Node_Select_Default_12;
	bool                                          K2Node_Event_IsDesignTime;
	uint8                                         Pad_8D1[0x7];
	struct FVector2D                              CallFunc_MakeVector2D_ReturnValue;
	bool                                          Temp_bool_Variable_13;
	ESlateVisibility                              Temp_byte_Variable;
	uint8                                         Pad_8EA[0x6];
	struct FTextBlockStyle                        K2Node_Select_Default_13;
	class UUMGSequencePlayer*                     CallFunc_PlayAnimationForward_ReturnValue_2;
	ESlateVisibility                              Temp_byte_Variable_1;
	bool                                          Temp_bool_Variable_14;
	ESlateVisibility                              K2Node_Select_Default_14;
};
static_assert(alignof(AthenaMOTDTileMainPage_C_ExecuteUbergraph_AthenaMOTDTileMainPage) == 0x000010, "Wrong alignment on AthenaMOTDTileMainPage_C_ExecuteUbergraph_AthenaMOTDTileMainPage");
static_assert(sizeof(AthenaMOTDTileMainPage_C_ExecuteUbergraph_AthenaMOTDTileMainPage) == 0x000C10, "Wrong size on AthenaMOTDTileMainPage_C_ExecuteUbergraph_AthenaMOTDTileMainPage");
static_assert(offsetof(AthenaMOTDTileMainPage_C_ExecuteUbergraph_AthenaMOTDTileMainPage, EntryPoint) == 0x000000, "Member 'AthenaMOTDTileMainPage_C_ExecuteUbergraph_AthenaMOTDTileMainPage::EntryPoint' has a wrong offset!");
static_assert(offsetof(AthenaMOTDTileMainPage_C_ExecuteUbergraph_AthenaMOTDTileMainPage, Temp_bool_Variable) == 0x000004, "Member 'AthenaMOTDTileMainPage_C_ExecuteUbergraph_AthenaMOTDTileMainPage::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(AthenaMOTDTileMainPage_C_ExecuteUbergraph_AthenaMOTDTileMainPage, Temp_bool_Variable_1) == 0x000005, "Member 'AthenaMOTDTileMainPage_C_ExecuteUbergraph_AthenaMOTDTileMainPage::Temp_bool_Variable_1' has a wrong offset!");
static_assert(offsetof(AthenaMOTDTileMainPage_C_ExecuteUbergraph_AthenaMOTDTileMainPage, Temp_struct_Variable) == 0x000008, "Member 'AthenaMOTDTileMainPage_C_ExecuteUbergraph_AthenaMOTDTileMainPage::Temp_struct_Variable' has a wrong offset!");
static_assert(offsetof(AthenaMOTDTileMainPage_C_ExecuteUbergraph_AthenaMOTDTileMainPage, Temp_struct_Variable_1) == 0x000018, "Member 'AthenaMOTDTileMainPage_C_ExecuteUbergraph_AthenaMOTDTileMainPage::Temp_struct_Variable_1' has a wrong offset!");
static_assert(offsetof(AthenaMOTDTileMainPage_C_ExecuteUbergraph_AthenaMOTDTileMainPage, Temp_bool_Variable_2) == 0x000028, "Member 'AthenaMOTDTileMainPage_C_ExecuteUbergraph_AthenaMOTDTileMainPage::Temp_bool_Variable_2' has a wrong offset!");
static_assert(offsetof(AthenaMOTDTileMainPage_C_ExecuteUbergraph_AthenaMOTDTileMainPage, Temp_real_Variable) == 0x00002C, "Member 'AthenaMOTDTileMainPage_C_ExecuteUbergraph_AthenaMOTDTileMainPage::Temp_real_Variable' has a wrong offset!");
static_assert(offsetof(AthenaMOTDTileMainPage_C_ExecuteUbergraph_AthenaMOTDTileMainPage, Temp_real_Variable_1) == 0x000030, "Member 'AthenaMOTDTileMainPage_C_ExecuteUbergraph_AthenaMOTDTileMainPage::Temp_real_Variable_1' has a wrong offset!");
static_assert(offsetof(AthenaMOTDTileMainPage_C_ExecuteUbergraph_AthenaMOTDTileMainPage, Temp_bool_Variable_3) == 0x000034, "Member 'AthenaMOTDTileMainPage_C_ExecuteUbergraph_AthenaMOTDTileMainPage::Temp_bool_Variable_3' has a wrong offset!");
static_assert(offsetof(AthenaMOTDTileMainPage_C_ExecuteUbergraph_AthenaMOTDTileMainPage, Temp_real_Variable_2) == 0x000038, "Member 'AthenaMOTDTileMainPage_C_ExecuteUbergraph_AthenaMOTDTileMainPage::Temp_real_Variable_2' has a wrong offset!");
static_assert(offsetof(AthenaMOTDTileMainPage_C_ExecuteUbergraph_AthenaMOTDTileMainPage, Temp_real_Variable_3) == 0x00003C, "Member 'AthenaMOTDTileMainPage_C_ExecuteUbergraph_AthenaMOTDTileMainPage::Temp_real_Variable_3' has a wrong offset!");
static_assert(offsetof(AthenaMOTDTileMainPage_C_ExecuteUbergraph_AthenaMOTDTileMainPage, Temp_bool_Variable_4) == 0x000040, "Member 'AthenaMOTDTileMainPage_C_ExecuteUbergraph_AthenaMOTDTileMainPage::Temp_bool_Variable_4' has a wrong offset!");
static_assert(offsetof(AthenaMOTDTileMainPage_C_ExecuteUbergraph_AthenaMOTDTileMainPage, Temp_struct_Variable_2) == 0x000048, "Member 'AthenaMOTDTileMainPage_C_ExecuteUbergraph_AthenaMOTDTileMainPage::Temp_struct_Variable_2' has a wrong offset!");
static_assert(offsetof(AthenaMOTDTileMainPage_C_ExecuteUbergraph_AthenaMOTDTileMainPage, Temp_struct_Variable_3) == 0x000058, "Member 'AthenaMOTDTileMainPage_C_ExecuteUbergraph_AthenaMOTDTileMainPage::Temp_struct_Variable_3' has a wrong offset!");
static_assert(offsetof(AthenaMOTDTileMainPage_C_ExecuteUbergraph_AthenaMOTDTileMainPage, K2Node_Event_MyGeometry) == 0x000068, "Member 'AthenaMOTDTileMainPage_C_ExecuteUbergraph_AthenaMOTDTileMainPage::K2Node_Event_MyGeometry' has a wrong offset!");
static_assert(offsetof(AthenaMOTDTileMainPage_C_ExecuteUbergraph_AthenaMOTDTileMainPage, K2Node_Event_MouseEvent_1) == 0x0000A8, "Member 'AthenaMOTDTileMainPage_C_ExecuteUbergraph_AthenaMOTDTileMainPage::K2Node_Event_MouseEvent_1' has a wrong offset!");
static_assert(offsetof(AthenaMOTDTileMainPage_C_ExecuteUbergraph_AthenaMOTDTileMainPage, K2Node_Event_MouseEvent) == 0x000140, "Member 'AthenaMOTDTileMainPage_C_ExecuteUbergraph_AthenaMOTDTileMainPage::K2Node_Event_MouseEvent' has a wrong offset!");
static_assert(offsetof(AthenaMOTDTileMainPage_C_ExecuteUbergraph_AthenaMOTDTileMainPage, CallFunc_IsListItemSelected_ReturnValue) == 0x0001D8, "Member 'AthenaMOTDTileMainPage_C_ExecuteUbergraph_AthenaMOTDTileMainPage::CallFunc_IsListItemSelected_ReturnValue' has a wrong offset!");
static_assert(offsetof(AthenaMOTDTileMainPage_C_ExecuteUbergraph_AthenaMOTDTileMainPage, K2Node_Event_bIsSelected) == 0x0001D9, "Member 'AthenaMOTDTileMainPage_C_ExecuteUbergraph_AthenaMOTDTileMainPage::K2Node_Event_bIsSelected' has a wrong offset!");
static_assert(offsetof(AthenaMOTDTileMainPage_C_ExecuteUbergraph_AthenaMOTDTileMainPage, CallFunc_GetDynamicMaterial_ReturnValue) == 0x0001E0, "Member 'AthenaMOTDTileMainPage_C_ExecuteUbergraph_AthenaMOTDTileMainPage::CallFunc_GetDynamicMaterial_ReturnValue' has a wrong offset!");
static_assert(offsetof(AthenaMOTDTileMainPage_C_ExecuteUbergraph_AthenaMOTDTileMainPage, CallFunc_CreateDynamicMaterialInstance_ReturnValue) == 0x0001E8, "Member 'AthenaMOTDTileMainPage_C_ExecuteUbergraph_AthenaMOTDTileMainPage::CallFunc_CreateDynamicMaterialInstance_ReturnValue' has a wrong offset!");
static_assert(offsetof(AthenaMOTDTileMainPage_C_ExecuteUbergraph_AthenaMOTDTileMainPage, CallFunc_IsValid_ReturnValue) == 0x0001F0, "Member 'AthenaMOTDTileMainPage_C_ExecuteUbergraph_AthenaMOTDTileMainPage::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(AthenaMOTDTileMainPage_C_ExecuteUbergraph_AthenaMOTDTileMainPage, K2Node_MakeStruct_SlateColor) == 0x0001F4, "Member 'AthenaMOTDTileMainPage_C_ExecuteUbergraph_AthenaMOTDTileMainPage::K2Node_MakeStruct_SlateColor' has a wrong offset!");
static_assert(offsetof(AthenaMOTDTileMainPage_C_ExecuteUbergraph_AthenaMOTDTileMainPage, K2Node_Event_NewsEntry) == 0x000208, "Member 'AthenaMOTDTileMainPage_C_ExecuteUbergraph_AthenaMOTDTileMainPage::K2Node_Event_NewsEntry' has a wrong offset!");
static_assert(offsetof(AthenaMOTDTileMainPage_C_ExecuteUbergraph_AthenaMOTDTileMainPage, CallFunc_Conv_ColorToLinearColor_ReturnValue) == 0x0002D8, "Member 'AthenaMOTDTileMainPage_C_ExecuteUbergraph_AthenaMOTDTileMainPage::CallFunc_Conv_ColorToLinearColor_ReturnValue' has a wrong offset!");
static_assert(offsetof(AthenaMOTDTileMainPage_C_ExecuteUbergraph_AthenaMOTDTileMainPage, CallFunc_Conv_ColorToLinearColor_ReturnValue_1) == 0x0002E8, "Member 'AthenaMOTDTileMainPage_C_ExecuteUbergraph_AthenaMOTDTileMainPage::CallFunc_Conv_ColorToLinearColor_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(AthenaMOTDTileMainPage_C_ExecuteUbergraph_AthenaMOTDTileMainPage, CallFunc_GetSelected_ReturnValue) == 0x0002F8, "Member 'AthenaMOTDTileMainPage_C_ExecuteUbergraph_AthenaMOTDTileMainPage::CallFunc_GetSelected_ReturnValue' has a wrong offset!");
static_assert(offsetof(AthenaMOTDTileMainPage_C_ExecuteUbergraph_AthenaMOTDTileMainPage, K2Node_Select_Default) == 0x0002FC, "Member 'AthenaMOTDTileMainPage_C_ExecuteUbergraph_AthenaMOTDTileMainPage::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(AthenaMOTDTileMainPage_C_ExecuteUbergraph_AthenaMOTDTileMainPage, CallFunc_BooleanOR_ReturnValue) == 0x00030C, "Member 'AthenaMOTDTileMainPage_C_ExecuteUbergraph_AthenaMOTDTileMainPage::CallFunc_BooleanOR_ReturnValue' has a wrong offset!");
static_assert(offsetof(AthenaMOTDTileMainPage_C_ExecuteUbergraph_AthenaMOTDTileMainPage, CallFunc_Not_PreBool_ReturnValue) == 0x00030D, "Member 'AthenaMOTDTileMainPage_C_ExecuteUbergraph_AthenaMOTDTileMainPage::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(AthenaMOTDTileMainPage_C_ExecuteUbergraph_AthenaMOTDTileMainPage, K2Node_MakeStruct_FontOutlineSettings) == 0x000310, "Member 'AthenaMOTDTileMainPage_C_ExecuteUbergraph_AthenaMOTDTileMainPage::K2Node_MakeStruct_FontOutlineSettings' has a wrong offset!");
static_assert(offsetof(AthenaMOTDTileMainPage_C_ExecuteUbergraph_AthenaMOTDTileMainPage, K2Node_MakeStruct_SlateFontInfo) == 0x000330, "Member 'AthenaMOTDTileMainPage_C_ExecuteUbergraph_AthenaMOTDTileMainPage::K2Node_MakeStruct_SlateFontInfo' has a wrong offset!");
static_assert(offsetof(AthenaMOTDTileMainPage_C_ExecuteUbergraph_AthenaMOTDTileMainPage, K2Node_MakeStruct_TextBlockStyle) == 0x000390, "Member 'AthenaMOTDTileMainPage_C_ExecuteUbergraph_AthenaMOTDTileMainPage::K2Node_MakeStruct_TextBlockStyle' has a wrong offset!");
static_assert(offsetof(AthenaMOTDTileMainPage_C_ExecuteUbergraph_AthenaMOTDTileMainPage, CallFunc_IsMobileGame_ReturnValue) == 0x0006A0, "Member 'AthenaMOTDTileMainPage_C_ExecuteUbergraph_AthenaMOTDTileMainPage::CallFunc_IsMobileGame_ReturnValue' has a wrong offset!");
static_assert(offsetof(AthenaMOTDTileMainPage_C_ExecuteUbergraph_AthenaMOTDTileMainPage, K2Node_Select_Default_1) == 0x0006A4, "Member 'AthenaMOTDTileMainPage_C_ExecuteUbergraph_AthenaMOTDTileMainPage::K2Node_Select_Default_1' has a wrong offset!");
static_assert(offsetof(AthenaMOTDTileMainPage_C_ExecuteUbergraph_AthenaMOTDTileMainPage, K2Node_Select_Default_2) == 0x0006B4, "Member 'AthenaMOTDTileMainPage_C_ExecuteUbergraph_AthenaMOTDTileMainPage::K2Node_Select_Default_2' has a wrong offset!");
static_assert(offsetof(AthenaMOTDTileMainPage_C_ExecuteUbergraph_AthenaMOTDTileMainPage, K2Node_MakeStruct_SlateColor_1) == 0x0006B8, "Member 'AthenaMOTDTileMainPage_C_ExecuteUbergraph_AthenaMOTDTileMainPage::K2Node_MakeStruct_SlateColor_1' has a wrong offset!");
static_assert(offsetof(AthenaMOTDTileMainPage_C_ExecuteUbergraph_AthenaMOTDTileMainPage, K2Node_MakeStruct_SlateBrush) == 0x0006D0, "Member 'AthenaMOTDTileMainPage_C_ExecuteUbergraph_AthenaMOTDTileMainPage::K2Node_MakeStruct_SlateBrush' has a wrong offset!");
static_assert(offsetof(AthenaMOTDTileMainPage_C_ExecuteUbergraph_AthenaMOTDTileMainPage, K2Node_Select_Default_3) == 0x000790, "Member 'AthenaMOTDTileMainPage_C_ExecuteUbergraph_AthenaMOTDTileMainPage::K2Node_Select_Default_3' has a wrong offset!");
static_assert(offsetof(AthenaMOTDTileMainPage_C_ExecuteUbergraph_AthenaMOTDTileMainPage, K2Node_Select_Default_4) == 0x000798, "Member 'AthenaMOTDTileMainPage_C_ExecuteUbergraph_AthenaMOTDTileMainPage::K2Node_Select_Default_4' has a wrong offset!");
static_assert(offsetof(AthenaMOTDTileMainPage_C_ExecuteUbergraph_AthenaMOTDTileMainPage, Temp_bool_Variable_5) == 0x0007A8, "Member 'AthenaMOTDTileMainPage_C_ExecuteUbergraph_AthenaMOTDTileMainPage::Temp_bool_Variable_5' has a wrong offset!");
static_assert(offsetof(AthenaMOTDTileMainPage_C_ExecuteUbergraph_AthenaMOTDTileMainPage, Temp_struct_Variable_4) == 0x0007AC, "Member 'AthenaMOTDTileMainPage_C_ExecuteUbergraph_AthenaMOTDTileMainPage::Temp_struct_Variable_4' has a wrong offset!");
static_assert(offsetof(AthenaMOTDTileMainPage_C_ExecuteUbergraph_AthenaMOTDTileMainPage, Temp_struct_Variable_5) == 0x0007BC, "Member 'AthenaMOTDTileMainPage_C_ExecuteUbergraph_AthenaMOTDTileMainPage::Temp_struct_Variable_5' has a wrong offset!");
static_assert(offsetof(AthenaMOTDTileMainPage_C_ExecuteUbergraph_AthenaMOTDTileMainPage, Temp_bool_Variable_6) == 0x0007CC, "Member 'AthenaMOTDTileMainPage_C_ExecuteUbergraph_AthenaMOTDTileMainPage::Temp_bool_Variable_6' has a wrong offset!");
static_assert(offsetof(AthenaMOTDTileMainPage_C_ExecuteUbergraph_AthenaMOTDTileMainPage, Temp_bool_Variable_7) == 0x0007CD, "Member 'AthenaMOTDTileMainPage_C_ExecuteUbergraph_AthenaMOTDTileMainPage::Temp_bool_Variable_7' has a wrong offset!");
static_assert(offsetof(AthenaMOTDTileMainPage_C_ExecuteUbergraph_AthenaMOTDTileMainPage, K2Node_Select_Default_5) == 0x0007D0, "Member 'AthenaMOTDTileMainPage_C_ExecuteUbergraph_AthenaMOTDTileMainPage::K2Node_Select_Default_5' has a wrong offset!");
static_assert(offsetof(AthenaMOTDTileMainPage_C_ExecuteUbergraph_AthenaMOTDTileMainPage, Temp_bool_Variable_8) == 0x0007E0, "Member 'AthenaMOTDTileMainPage_C_ExecuteUbergraph_AthenaMOTDTileMainPage::Temp_bool_Variable_8' has a wrong offset!");
static_assert(offsetof(AthenaMOTDTileMainPage_C_ExecuteUbergraph_AthenaMOTDTileMainPage, CallFunc_SlotAsBorderSlot_ReturnValue) == 0x0007E8, "Member 'AthenaMOTDTileMainPage_C_ExecuteUbergraph_AthenaMOTDTileMainPage::CallFunc_SlotAsBorderSlot_ReturnValue' has a wrong offset!");
static_assert(offsetof(AthenaMOTDTileMainPage_C_ExecuteUbergraph_AthenaMOTDTileMainPage, CallFunc_IsMobileGame_ReturnValue_1) == 0x0007F0, "Member 'AthenaMOTDTileMainPage_C_ExecuteUbergraph_AthenaMOTDTileMainPage::CallFunc_IsMobileGame_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(AthenaMOTDTileMainPage_C_ExecuteUbergraph_AthenaMOTDTileMainPage, Temp_bool_Variable_9) == 0x0007F1, "Member 'AthenaMOTDTileMainPage_C_ExecuteUbergraph_AthenaMOTDTileMainPage::Temp_bool_Variable_9' has a wrong offset!");
static_assert(offsetof(AthenaMOTDTileMainPage_C_ExecuteUbergraph_AthenaMOTDTileMainPage, CallFunc_IsMobileGame_ReturnValue_2) == 0x0007F2, "Member 'AthenaMOTDTileMainPage_C_ExecuteUbergraph_AthenaMOTDTileMainPage::CallFunc_IsMobileGame_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(AthenaMOTDTileMainPage_C_ExecuteUbergraph_AthenaMOTDTileMainPage, Temp_real_Variable_4) == 0x0007F4, "Member 'AthenaMOTDTileMainPage_C_ExecuteUbergraph_AthenaMOTDTileMainPage::Temp_real_Variable_4' has a wrong offset!");
static_assert(offsetof(AthenaMOTDTileMainPage_C_ExecuteUbergraph_AthenaMOTDTileMainPage, K2Node_Select_Default_6) == 0x0007F8, "Member 'AthenaMOTDTileMainPage_C_ExecuteUbergraph_AthenaMOTDTileMainPage::K2Node_Select_Default_6' has a wrong offset!");
static_assert(offsetof(AthenaMOTDTileMainPage_C_ExecuteUbergraph_AthenaMOTDTileMainPage, CallFunc_PlayAnimationForward_ReturnValue) == 0x000800, "Member 'AthenaMOTDTileMainPage_C_ExecuteUbergraph_AthenaMOTDTileMainPage::CallFunc_PlayAnimationForward_ReturnValue' has a wrong offset!");
static_assert(offsetof(AthenaMOTDTileMainPage_C_ExecuteUbergraph_AthenaMOTDTileMainPage, K2Node_Select_Default_7) == 0x000808, "Member 'AthenaMOTDTileMainPage_C_ExecuteUbergraph_AthenaMOTDTileMainPage::K2Node_Select_Default_7' has a wrong offset!");
static_assert(offsetof(AthenaMOTDTileMainPage_C_ExecuteUbergraph_AthenaMOTDTileMainPage, Temp_real_Variable_5) == 0x000810, "Member 'AthenaMOTDTileMainPage_C_ExecuteUbergraph_AthenaMOTDTileMainPage::Temp_real_Variable_5' has a wrong offset!");
static_assert(offsetof(AthenaMOTDTileMainPage_C_ExecuteUbergraph_AthenaMOTDTileMainPage, CallFunc_PlayAnimationReverse_ReturnValue) == 0x000818, "Member 'AthenaMOTDTileMainPage_C_ExecuteUbergraph_AthenaMOTDTileMainPage::CallFunc_PlayAnimationReverse_ReturnValue' has a wrong offset!");
static_assert(offsetof(AthenaMOTDTileMainPage_C_ExecuteUbergraph_AthenaMOTDTileMainPage, CallFunc_IsMobileGame_ReturnValue_3) == 0x000820, "Member 'AthenaMOTDTileMainPage_C_ExecuteUbergraph_AthenaMOTDTileMainPage::CallFunc_IsMobileGame_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(AthenaMOTDTileMainPage_C_ExecuteUbergraph_AthenaMOTDTileMainPage, K2Node_Select_Default_8) == 0x000828, "Member 'AthenaMOTDTileMainPage_C_ExecuteUbergraph_AthenaMOTDTileMainPage::K2Node_Select_Default_8' has a wrong offset!");
static_assert(offsetof(AthenaMOTDTileMainPage_C_ExecuteUbergraph_AthenaMOTDTileMainPage, CallFunc_PlayAnimationForward_ReturnValue_1) == 0x000830, "Member 'AthenaMOTDTileMainPage_C_ExecuteUbergraph_AthenaMOTDTileMainPage::CallFunc_PlayAnimationForward_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(AthenaMOTDTileMainPage_C_ExecuteUbergraph_AthenaMOTDTileMainPage, CallFunc_PlayAnimationReverse_ReturnValue_1) == 0x000838, "Member 'AthenaMOTDTileMainPage_C_ExecuteUbergraph_AthenaMOTDTileMainPage::CallFunc_PlayAnimationReverse_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(AthenaMOTDTileMainPage_C_ExecuteUbergraph_AthenaMOTDTileMainPage, Temp_bool_Variable_10) == 0x000840, "Member 'AthenaMOTDTileMainPage_C_ExecuteUbergraph_AthenaMOTDTileMainPage::Temp_bool_Variable_10' has a wrong offset!");
static_assert(offsetof(AthenaMOTDTileMainPage_C_ExecuteUbergraph_AthenaMOTDTileMainPage, CallFunc_GetDynamicMaterial_ReturnValue_1) == 0x000848, "Member 'AthenaMOTDTileMainPage_C_ExecuteUbergraph_AthenaMOTDTileMainPage::CallFunc_GetDynamicMaterial_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(AthenaMOTDTileMainPage_C_ExecuteUbergraph_AthenaMOTDTileMainPage, K2Node_Select_Default_9) == 0x000850, "Member 'AthenaMOTDTileMainPage_C_ExecuteUbergraph_AthenaMOTDTileMainPage::K2Node_Select_Default_9' has a wrong offset!");
static_assert(offsetof(AthenaMOTDTileMainPage_C_ExecuteUbergraph_AthenaMOTDTileMainPage, K2Node_MakeStruct_Margin) == 0x000854, "Member 'AthenaMOTDTileMainPage_C_ExecuteUbergraph_AthenaMOTDTileMainPage::K2Node_MakeStruct_Margin' has a wrong offset!");
static_assert(offsetof(AthenaMOTDTileMainPage_C_ExecuteUbergraph_AthenaMOTDTileMainPage, K2Node_Select_Default_10) == 0x000864, "Member 'AthenaMOTDTileMainPage_C_ExecuteUbergraph_AthenaMOTDTileMainPage::K2Node_Select_Default_10' has a wrong offset!");
static_assert(offsetof(AthenaMOTDTileMainPage_C_ExecuteUbergraph_AthenaMOTDTileMainPage, Temp_struct_Variable_6) == 0x000874, "Member 'AthenaMOTDTileMainPage_C_ExecuteUbergraph_AthenaMOTDTileMainPage::Temp_struct_Variable_6' has a wrong offset!");
static_assert(offsetof(AthenaMOTDTileMainPage_C_ExecuteUbergraph_AthenaMOTDTileMainPage, CallFunc_IsValid_ReturnValue_1) == 0x000884, "Member 'AthenaMOTDTileMainPage_C_ExecuteUbergraph_AthenaMOTDTileMainPage::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(AthenaMOTDTileMainPage_C_ExecuteUbergraph_AthenaMOTDTileMainPage, Temp_struct_Variable_7) == 0x000888, "Member 'AthenaMOTDTileMainPage_C_ExecuteUbergraph_AthenaMOTDTileMainPage::Temp_struct_Variable_7' has a wrong offset!");
static_assert(offsetof(AthenaMOTDTileMainPage_C_ExecuteUbergraph_AthenaMOTDTileMainPage, Temp_bool_Variable_11) == 0x000898, "Member 'AthenaMOTDTileMainPage_C_ExecuteUbergraph_AthenaMOTDTileMainPage::Temp_bool_Variable_11' has a wrong offset!");
static_assert(offsetof(AthenaMOTDTileMainPage_C_ExecuteUbergraph_AthenaMOTDTileMainPage, Temp_real_Variable_6) == 0x0008A0, "Member 'AthenaMOTDTileMainPage_C_ExecuteUbergraph_AthenaMOTDTileMainPage::Temp_real_Variable_6' has a wrong offset!");
static_assert(offsetof(AthenaMOTDTileMainPage_C_ExecuteUbergraph_AthenaMOTDTileMainPage, K2Node_Select_Default_11) == 0x0008A8, "Member 'AthenaMOTDTileMainPage_C_ExecuteUbergraph_AthenaMOTDTileMainPage::K2Node_Select_Default_11' has a wrong offset!");
static_assert(offsetof(AthenaMOTDTileMainPage_C_ExecuteUbergraph_AthenaMOTDTileMainPage, Temp_real_Variable_7) == 0x0008B8, "Member 'AthenaMOTDTileMainPage_C_ExecuteUbergraph_AthenaMOTDTileMainPage::Temp_real_Variable_7' has a wrong offset!");
static_assert(offsetof(AthenaMOTDTileMainPage_C_ExecuteUbergraph_AthenaMOTDTileMainPage, Temp_bool_Variable_12) == 0x0008C0, "Member 'AthenaMOTDTileMainPage_C_ExecuteUbergraph_AthenaMOTDTileMainPage::Temp_bool_Variable_12' has a wrong offset!");
static_assert(offsetof(AthenaMOTDTileMainPage_C_ExecuteUbergraph_AthenaMOTDTileMainPage, K2Node_Select_Default_12) == 0x0008C8, "Member 'AthenaMOTDTileMainPage_C_ExecuteUbergraph_AthenaMOTDTileMainPage::K2Node_Select_Default_12' has a wrong offset!");
static_assert(offsetof(AthenaMOTDTileMainPage_C_ExecuteUbergraph_AthenaMOTDTileMainPage, K2Node_Event_IsDesignTime) == 0x0008D0, "Member 'AthenaMOTDTileMainPage_C_ExecuteUbergraph_AthenaMOTDTileMainPage::K2Node_Event_IsDesignTime' has a wrong offset!");
static_assert(offsetof(AthenaMOTDTileMainPage_C_ExecuteUbergraph_AthenaMOTDTileMainPage, CallFunc_MakeVector2D_ReturnValue) == 0x0008D8, "Member 'AthenaMOTDTileMainPage_C_ExecuteUbergraph_AthenaMOTDTileMainPage::CallFunc_MakeVector2D_ReturnValue' has a wrong offset!");
static_assert(offsetof(AthenaMOTDTileMainPage_C_ExecuteUbergraph_AthenaMOTDTileMainPage, Temp_bool_Variable_13) == 0x0008E8, "Member 'AthenaMOTDTileMainPage_C_ExecuteUbergraph_AthenaMOTDTileMainPage::Temp_bool_Variable_13' has a wrong offset!");
static_assert(offsetof(AthenaMOTDTileMainPage_C_ExecuteUbergraph_AthenaMOTDTileMainPage, Temp_byte_Variable) == 0x0008E9, "Member 'AthenaMOTDTileMainPage_C_ExecuteUbergraph_AthenaMOTDTileMainPage::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(AthenaMOTDTileMainPage_C_ExecuteUbergraph_AthenaMOTDTileMainPage, K2Node_Select_Default_13) == 0x0008F0, "Member 'AthenaMOTDTileMainPage_C_ExecuteUbergraph_AthenaMOTDTileMainPage::K2Node_Select_Default_13' has a wrong offset!");
static_assert(offsetof(AthenaMOTDTileMainPage_C_ExecuteUbergraph_AthenaMOTDTileMainPage, CallFunc_PlayAnimationForward_ReturnValue_2) == 0x000C00, "Member 'AthenaMOTDTileMainPage_C_ExecuteUbergraph_AthenaMOTDTileMainPage::CallFunc_PlayAnimationForward_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(AthenaMOTDTileMainPage_C_ExecuteUbergraph_AthenaMOTDTileMainPage, Temp_byte_Variable_1) == 0x000C08, "Member 'AthenaMOTDTileMainPage_C_ExecuteUbergraph_AthenaMOTDTileMainPage::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(AthenaMOTDTileMainPage_C_ExecuteUbergraph_AthenaMOTDTileMainPage, Temp_bool_Variable_14) == 0x000C09, "Member 'AthenaMOTDTileMainPage_C_ExecuteUbergraph_AthenaMOTDTileMainPage::Temp_bool_Variable_14' has a wrong offset!");
static_assert(offsetof(AthenaMOTDTileMainPage_C_ExecuteUbergraph_AthenaMOTDTileMainPage, K2Node_Select_Default_14) == 0x000C0A, "Member 'AthenaMOTDTileMainPage_C_ExecuteUbergraph_AthenaMOTDTileMainPage::K2Node_Select_Default_14' has a wrong offset!");

struct AthenaMOTDTileMainPage_C_OnMouseEnter final
{
public:
	struct FGeometry                              MyGeometry;
	struct FPointerEvent                          MouseEvent;
};
static_assert(alignof(AthenaMOTDTileMainPage_C_OnMouseEnter) == 0x000008, "Wrong alignment on AthenaMOTDTileMainPage_C_OnMouseEnter");
static_assert(sizeof(AthenaMOTDTileMainPage_C_OnMouseEnter) == 0x0000D8, "Wrong size on AthenaMOTDTileMainPage_C_OnMouseEnter");
static_assert(offsetof(AthenaMOTDTileMainPage_C_OnMouseEnter, MyGeometry) == 0x000000, "Member 'AthenaMOTDTileMainPage_C_OnMouseEnter::MyGeometry' has a wrong offset!");
static_assert(offsetof(AthenaMOTDTileMainPage_C_OnMouseEnter, MouseEvent) == 0x000040, "Member 'AthenaMOTDTileMainPage_C_OnMouseEnter::MouseEvent' has a wrong offset!");

struct AthenaMOTDTileMainPage_C_OnMouseLeave final
{
public:
	struct FPointerEvent                          MouseEvent;
};
static_assert(alignof(AthenaMOTDTileMainPage_C_OnMouseLeave) == 0x000008, "Wrong alignment on AthenaMOTDTileMainPage_C_OnMouseLeave");
static_assert(sizeof(AthenaMOTDTileMainPage_C_OnMouseLeave) == 0x000098, "Wrong size on AthenaMOTDTileMainPage_C_OnMouseLeave");
static_assert(offsetof(AthenaMOTDTileMainPage_C_OnMouseLeave, MouseEvent) == 0x000000, "Member 'AthenaMOTDTileMainPage_C_OnMouseLeave::MouseEvent' has a wrong offset!");

struct AthenaMOTDTileMainPage_C_OnPopulateNews final
{
public:
	struct FAthenaMOTDBase                        NewsEntry;
};
static_assert(alignof(AthenaMOTDTileMainPage_C_OnPopulateNews) == 0x000008, "Wrong alignment on AthenaMOTDTileMainPage_C_OnPopulateNews");
static_assert(sizeof(AthenaMOTDTileMainPage_C_OnPopulateNews) == 0x0000D0, "Wrong size on AthenaMOTDTileMainPage_C_OnPopulateNews");
static_assert(offsetof(AthenaMOTDTileMainPage_C_OnPopulateNews, NewsEntry) == 0x000000, "Member 'AthenaMOTDTileMainPage_C_OnPopulateNews::NewsEntry' has a wrong offset!");

struct AthenaMOTDTileMainPage_C_PreConstruct final
{
public:
	bool                                          IsDesignTime;
};
static_assert(alignof(AthenaMOTDTileMainPage_C_PreConstruct) == 0x000001, "Wrong alignment on AthenaMOTDTileMainPage_C_PreConstruct");
static_assert(sizeof(AthenaMOTDTileMainPage_C_PreConstruct) == 0x000001, "Wrong size on AthenaMOTDTileMainPage_C_PreConstruct");
static_assert(offsetof(AthenaMOTDTileMainPage_C_PreConstruct, IsDesignTime) == 0x000000, "Member 'AthenaMOTDTileMainPage_C_PreConstruct::IsDesignTime' has a wrong offset!");

struct AthenaMOTDTileMainPage_C_ShowImageOnly final
{
public:
	bool                                          Temp_bool_Variable;
	ESlateVisibility                              Temp_byte_Variable;
	ESlateVisibility                              Temp_byte_Variable_1;
	ESlateVisibility                              K2Node_Select_Default;
};
static_assert(alignof(AthenaMOTDTileMainPage_C_ShowImageOnly) == 0x000001, "Wrong alignment on AthenaMOTDTileMainPage_C_ShowImageOnly");
static_assert(sizeof(AthenaMOTDTileMainPage_C_ShowImageOnly) == 0x000004, "Wrong size on AthenaMOTDTileMainPage_C_ShowImageOnly");
static_assert(offsetof(AthenaMOTDTileMainPage_C_ShowImageOnly, Temp_bool_Variable) == 0x000000, "Member 'AthenaMOTDTileMainPage_C_ShowImageOnly::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(AthenaMOTDTileMainPage_C_ShowImageOnly, Temp_byte_Variable) == 0x000001, "Member 'AthenaMOTDTileMainPage_C_ShowImageOnly::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(AthenaMOTDTileMainPage_C_ShowImageOnly, Temp_byte_Variable_1) == 0x000002, "Member 'AthenaMOTDTileMainPage_C_ShowImageOnly::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(AthenaMOTDTileMainPage_C_ShowImageOnly, K2Node_Select_Default) == 0x000003, "Member 'AthenaMOTDTileMainPage_C_ShowImageOnly::K2Node_Select_Default' has a wrong offset!");

struct AthenaMOTDTileMainPage_C_UpdateDisplay final
{
public:
	bool                                          Temp_bool_Variable;
	ESlateVisibility                              Temp_byte_Variable;
	ESlateVisibility                              Temp_byte_Variable_1;
	ESlateVisibility                              K2Node_Select_Default;
};
static_assert(alignof(AthenaMOTDTileMainPage_C_UpdateDisplay) == 0x000001, "Wrong alignment on AthenaMOTDTileMainPage_C_UpdateDisplay");
static_assert(sizeof(AthenaMOTDTileMainPage_C_UpdateDisplay) == 0x000004, "Wrong size on AthenaMOTDTileMainPage_C_UpdateDisplay");
static_assert(offsetof(AthenaMOTDTileMainPage_C_UpdateDisplay, Temp_bool_Variable) == 0x000000, "Member 'AthenaMOTDTileMainPage_C_UpdateDisplay::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(AthenaMOTDTileMainPage_C_UpdateDisplay, Temp_byte_Variable) == 0x000001, "Member 'AthenaMOTDTileMainPage_C_UpdateDisplay::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(AthenaMOTDTileMainPage_C_UpdateDisplay, Temp_byte_Variable_1) == 0x000002, "Member 'AthenaMOTDTileMainPage_C_UpdateDisplay::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(AthenaMOTDTileMainPage_C_UpdateDisplay, K2Node_Select_Default) == 0x000003, "Member 'AthenaMOTDTileMainPage_C_UpdateDisplay::K2Node_Select_Default' has a wrong offset!");

}
