#pragma once

#include "Basic.hpp"

#include "FortniteUI_structs.hpp"
#include "CommonInput_structs.hpp"
#include "UMG_structs.hpp"
#include "FortniteGame_structs.hpp"
#include "Engine_structs.hpp"

namespace SDK::Params
{

struct BP_LocalPlayerBannerEditor_C_Attempt_Leave_Picker final
{
public:
	bool                                          Left;
	bool                                          LeftPicker;
};
static_assert(alignof(BP_LocalPlayerBannerEditor_C_Attempt_Leave_Picker) == 0x000001, "Wrong alignment on BP_LocalPlayerBannerEditor_C_Attempt_Leave_Picker");
static_assert(sizeof(BP_LocalPlayerBannerEditor_C_Attempt_Leave_Picker) == 0x000002, "Wrong size on BP_LocalPlayerBannerEditor_C_Attempt_Leave_Picker");
static_assert(offsetof(BP_LocalPlayerBannerEditor_C_Attempt_Leave_Picker, Left) == 0x000000, "Member 'BP_LocalPlayerBannerEditor_C_Attempt_Leave_Picker::Left' has a wrong offset!");
static_assert(offsetof(BP_LocalPlayerBannerEditor_C_Attempt_Leave_Picker, LeftPicker) == 0x000001, "Member 'BP_LocalPlayerBannerEditor_C_Attempt_Leave_Picker::LeftPicker' has a wrong offset!");

struct BP_LocalPlayerBannerEditor_C_BndEvt__BP_LocalPlayerBannerEditor_ApplyButton_K2Node_ComponentBoundEvent_6_CommonButtonBaseClicked__DelegateSignature final
{
public:
	class UCommonButtonBase*                      Button;
};
static_assert(alignof(BP_LocalPlayerBannerEditor_C_BndEvt__BP_LocalPlayerBannerEditor_ApplyButton_K2Node_ComponentBoundEvent_6_CommonButtonBaseClicked__DelegateSignature) == 0x000008, "Wrong alignment on BP_LocalPlayerBannerEditor_C_BndEvt__BP_LocalPlayerBannerEditor_ApplyButton_K2Node_ComponentBoundEvent_6_CommonButtonBaseClicked__DelegateSignature");
static_assert(sizeof(BP_LocalPlayerBannerEditor_C_BndEvt__BP_LocalPlayerBannerEditor_ApplyButton_K2Node_ComponentBoundEvent_6_CommonButtonBaseClicked__DelegateSignature) == 0x000008, "Wrong size on BP_LocalPlayerBannerEditor_C_BndEvt__BP_LocalPlayerBannerEditor_ApplyButton_K2Node_ComponentBoundEvent_6_CommonButtonBaseClicked__DelegateSignature");
static_assert(offsetof(BP_LocalPlayerBannerEditor_C_BndEvt__BP_LocalPlayerBannerEditor_ApplyButton_K2Node_ComponentBoundEvent_6_CommonButtonBaseClicked__DelegateSignature, Button) == 0x000000, "Member 'BP_LocalPlayerBannerEditor_C_BndEvt__BP_LocalPlayerBannerEditor_ApplyButton_K2Node_ComponentBoundEvent_6_CommonButtonBaseClicked__DelegateSignature::Button' has a wrong offset!");

struct BP_LocalPlayerBannerEditor_C_BndEvt__BP_LocalPlayerBannerEditor_Button_CloseEditorButton_K2Node_ComponentBoundEvent_2_CommonButtonBaseClicked__DelegateSignature final
{
public:
	class UCommonButtonBase*                      Button;
};
static_assert(alignof(BP_LocalPlayerBannerEditor_C_BndEvt__BP_LocalPlayerBannerEditor_Button_CloseEditorButton_K2Node_ComponentBoundEvent_2_CommonButtonBaseClicked__DelegateSignature) == 0x000008, "Wrong alignment on BP_LocalPlayerBannerEditor_C_BndEvt__BP_LocalPlayerBannerEditor_Button_CloseEditorButton_K2Node_ComponentBoundEvent_2_CommonButtonBaseClicked__DelegateSignature");
static_assert(sizeof(BP_LocalPlayerBannerEditor_C_BndEvt__BP_LocalPlayerBannerEditor_Button_CloseEditorButton_K2Node_ComponentBoundEvent_2_CommonButtonBaseClicked__DelegateSignature) == 0x000008, "Wrong size on BP_LocalPlayerBannerEditor_C_BndEvt__BP_LocalPlayerBannerEditor_Button_CloseEditorButton_K2Node_ComponentBoundEvent_2_CommonButtonBaseClicked__DelegateSignature");
static_assert(offsetof(BP_LocalPlayerBannerEditor_C_BndEvt__BP_LocalPlayerBannerEditor_Button_CloseEditorButton_K2Node_ComponentBoundEvent_2_CommonButtonBaseClicked__DelegateSignature, Button) == 0x000000, "Member 'BP_LocalPlayerBannerEditor_C_BndEvt__BP_LocalPlayerBannerEditor_Button_CloseEditorButton_K2Node_ComponentBoundEvent_2_CommonButtonBaseClicked__DelegateSignature::Button' has a wrong offset!");

struct BP_LocalPlayerBannerEditor_C_BndEvt__BP_LocalPlayerBannerEditor_Button_EditIcon_K2Node_ComponentBoundEvent_8_CommonButtonClicked__DelegateSignature final
{
public:
	class UCommonButtonLegacy*                    Button;
};
static_assert(alignof(BP_LocalPlayerBannerEditor_C_BndEvt__BP_LocalPlayerBannerEditor_Button_EditIcon_K2Node_ComponentBoundEvent_8_CommonButtonClicked__DelegateSignature) == 0x000008, "Wrong alignment on BP_LocalPlayerBannerEditor_C_BndEvt__BP_LocalPlayerBannerEditor_Button_EditIcon_K2Node_ComponentBoundEvent_8_CommonButtonClicked__DelegateSignature");
static_assert(sizeof(BP_LocalPlayerBannerEditor_C_BndEvt__BP_LocalPlayerBannerEditor_Button_EditIcon_K2Node_ComponentBoundEvent_8_CommonButtonClicked__DelegateSignature) == 0x000008, "Wrong size on BP_LocalPlayerBannerEditor_C_BndEvt__BP_LocalPlayerBannerEditor_Button_EditIcon_K2Node_ComponentBoundEvent_8_CommonButtonClicked__DelegateSignature");
static_assert(offsetof(BP_LocalPlayerBannerEditor_C_BndEvt__BP_LocalPlayerBannerEditor_Button_EditIcon_K2Node_ComponentBoundEvent_8_CommonButtonClicked__DelegateSignature, Button) == 0x000000, "Member 'BP_LocalPlayerBannerEditor_C_BndEvt__BP_LocalPlayerBannerEditor_Button_EditIcon_K2Node_ComponentBoundEvent_8_CommonButtonClicked__DelegateSignature::Button' has a wrong offset!");

struct BP_LocalPlayerBannerEditor_C_BndEvt__BP_LocalPlayerBannerEditor_Button_LeftTab_K2Node_ComponentBoundEvent_3_CommonButtonClicked__DelegateSignature final
{
public:
	class UCommonButtonLegacy*                    Button;
};
static_assert(alignof(BP_LocalPlayerBannerEditor_C_BndEvt__BP_LocalPlayerBannerEditor_Button_LeftTab_K2Node_ComponentBoundEvent_3_CommonButtonClicked__DelegateSignature) == 0x000008, "Wrong alignment on BP_LocalPlayerBannerEditor_C_BndEvt__BP_LocalPlayerBannerEditor_Button_LeftTab_K2Node_ComponentBoundEvent_3_CommonButtonClicked__DelegateSignature");
static_assert(sizeof(BP_LocalPlayerBannerEditor_C_BndEvt__BP_LocalPlayerBannerEditor_Button_LeftTab_K2Node_ComponentBoundEvent_3_CommonButtonClicked__DelegateSignature) == 0x000008, "Wrong size on BP_LocalPlayerBannerEditor_C_BndEvt__BP_LocalPlayerBannerEditor_Button_LeftTab_K2Node_ComponentBoundEvent_3_CommonButtonClicked__DelegateSignature");
static_assert(offsetof(BP_LocalPlayerBannerEditor_C_BndEvt__BP_LocalPlayerBannerEditor_Button_LeftTab_K2Node_ComponentBoundEvent_3_CommonButtonClicked__DelegateSignature, Button) == 0x000000, "Member 'BP_LocalPlayerBannerEditor_C_BndEvt__BP_LocalPlayerBannerEditor_Button_LeftTab_K2Node_ComponentBoundEvent_3_CommonButtonClicked__DelegateSignature::Button' has a wrong offset!");

struct BP_LocalPlayerBannerEditor_C_BndEvt__BP_LocalPlayerBannerEditor_Button_RightTab_K2Node_ComponentBoundEvent_4_CommonButtonClicked__DelegateSignature final
{
public:
	class UCommonButtonLegacy*                    Button;
};
static_assert(alignof(BP_LocalPlayerBannerEditor_C_BndEvt__BP_LocalPlayerBannerEditor_Button_RightTab_K2Node_ComponentBoundEvent_4_CommonButtonClicked__DelegateSignature) == 0x000008, "Wrong alignment on BP_LocalPlayerBannerEditor_C_BndEvt__BP_LocalPlayerBannerEditor_Button_RightTab_K2Node_ComponentBoundEvent_4_CommonButtonClicked__DelegateSignature");
static_assert(sizeof(BP_LocalPlayerBannerEditor_C_BndEvt__BP_LocalPlayerBannerEditor_Button_RightTab_K2Node_ComponentBoundEvent_4_CommonButtonClicked__DelegateSignature) == 0x000008, "Wrong size on BP_LocalPlayerBannerEditor_C_BndEvt__BP_LocalPlayerBannerEditor_Button_RightTab_K2Node_ComponentBoundEvent_4_CommonButtonClicked__DelegateSignature");
static_assert(offsetof(BP_LocalPlayerBannerEditor_C_BndEvt__BP_LocalPlayerBannerEditor_Button_RightTab_K2Node_ComponentBoundEvent_4_CommonButtonClicked__DelegateSignature, Button) == 0x000000, "Member 'BP_LocalPlayerBannerEditor_C_BndEvt__BP_LocalPlayerBannerEditor_Button_RightTab_K2Node_ComponentBoundEvent_4_CommonButtonClicked__DelegateSignature::Button' has a wrong offset!");

struct BP_LocalPlayerBannerEditor_C_BndEvt__BP_LocalPlayerBannerEditor_EditColorButton_K2Node_ComponentBoundEvent_9_CommonButtonClicked__DelegateSignature final
{
public:
	class UCommonButtonLegacy*                    Button;
};
static_assert(alignof(BP_LocalPlayerBannerEditor_C_BndEvt__BP_LocalPlayerBannerEditor_EditColorButton_K2Node_ComponentBoundEvent_9_CommonButtonClicked__DelegateSignature) == 0x000008, "Wrong alignment on BP_LocalPlayerBannerEditor_C_BndEvt__BP_LocalPlayerBannerEditor_EditColorButton_K2Node_ComponentBoundEvent_9_CommonButtonClicked__DelegateSignature");
static_assert(sizeof(BP_LocalPlayerBannerEditor_C_BndEvt__BP_LocalPlayerBannerEditor_EditColorButton_K2Node_ComponentBoundEvent_9_CommonButtonClicked__DelegateSignature) == 0x000008, "Wrong size on BP_LocalPlayerBannerEditor_C_BndEvt__BP_LocalPlayerBannerEditor_EditColorButton_K2Node_ComponentBoundEvent_9_CommonButtonClicked__DelegateSignature");
static_assert(offsetof(BP_LocalPlayerBannerEditor_C_BndEvt__BP_LocalPlayerBannerEditor_EditColorButton_K2Node_ComponentBoundEvent_9_CommonButtonClicked__DelegateSignature, Button) == 0x000000, "Member 'BP_LocalPlayerBannerEditor_C_BndEvt__BP_LocalPlayerBannerEditor_EditColorButton_K2Node_ComponentBoundEvent_9_CommonButtonClicked__DelegateSignature::Button' has a wrong offset!");

struct BP_LocalPlayerBannerEditor_C_BndEvt__CloseButton_97_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature final
{
public:
	class UCommonButtonLegacy*                    Button;
};
static_assert(alignof(BP_LocalPlayerBannerEditor_C_BndEvt__CloseButton_97_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature) == 0x000008, "Wrong alignment on BP_LocalPlayerBannerEditor_C_BndEvt__CloseButton_97_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature");
static_assert(sizeof(BP_LocalPlayerBannerEditor_C_BndEvt__CloseButton_97_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature) == 0x000008, "Wrong size on BP_LocalPlayerBannerEditor_C_BndEvt__CloseButton_97_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature");
static_assert(offsetof(BP_LocalPlayerBannerEditor_C_BndEvt__CloseButton_97_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature, Button) == 0x000000, "Member 'BP_LocalPlayerBannerEditor_C_BndEvt__CloseButton_97_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature::Button' has a wrong offset!");

struct BP_LocalPlayerBannerEditor_C_BndEvt__CommonTileView_0_K2Node_ComponentBoundEvent_306_OnListViewItemWidgetCreated__DelegateSignature final
{
public:
	class UUserWidget*                            Widget;
};
static_assert(alignof(BP_LocalPlayerBannerEditor_C_BndEvt__CommonTileView_0_K2Node_ComponentBoundEvent_306_OnListViewItemWidgetCreated__DelegateSignature) == 0x000008, "Wrong alignment on BP_LocalPlayerBannerEditor_C_BndEvt__CommonTileView_0_K2Node_ComponentBoundEvent_306_OnListViewItemWidgetCreated__DelegateSignature");
static_assert(sizeof(BP_LocalPlayerBannerEditor_C_BndEvt__CommonTileView_0_K2Node_ComponentBoundEvent_306_OnListViewItemWidgetCreated__DelegateSignature) == 0x000008, "Wrong size on BP_LocalPlayerBannerEditor_C_BndEvt__CommonTileView_0_K2Node_ComponentBoundEvent_306_OnListViewItemWidgetCreated__DelegateSignature");
static_assert(offsetof(BP_LocalPlayerBannerEditor_C_BndEvt__CommonTileView_0_K2Node_ComponentBoundEvent_306_OnListViewItemWidgetCreated__DelegateSignature, Widget) == 0x000000, "Member 'BP_LocalPlayerBannerEditor_C_BndEvt__CommonTileView_0_K2Node_ComponentBoundEvent_306_OnListViewItemWidgetCreated__DelegateSignature::Widget' has a wrong offset!");

struct BP_LocalPlayerBannerEditor_C_BndEvt__CommonTileView_0_K2Node_ComponentBoundEvent_66_OnListViewItemSelected__DelegateSignature final
{
public:
	class UObject*                                Item;
	bool                                          bIsSelected;
};
static_assert(alignof(BP_LocalPlayerBannerEditor_C_BndEvt__CommonTileView_0_K2Node_ComponentBoundEvent_66_OnListViewItemSelected__DelegateSignature) == 0x000008, "Wrong alignment on BP_LocalPlayerBannerEditor_C_BndEvt__CommonTileView_0_K2Node_ComponentBoundEvent_66_OnListViewItemSelected__DelegateSignature");
static_assert(sizeof(BP_LocalPlayerBannerEditor_C_BndEvt__CommonTileView_0_K2Node_ComponentBoundEvent_66_OnListViewItemSelected__DelegateSignature) == 0x000010, "Wrong size on BP_LocalPlayerBannerEditor_C_BndEvt__CommonTileView_0_K2Node_ComponentBoundEvent_66_OnListViewItemSelected__DelegateSignature");
static_assert(offsetof(BP_LocalPlayerBannerEditor_C_BndEvt__CommonTileView_0_K2Node_ComponentBoundEvent_66_OnListViewItemSelected__DelegateSignature, Item) == 0x000000, "Member 'BP_LocalPlayerBannerEditor_C_BndEvt__CommonTileView_0_K2Node_ComponentBoundEvent_66_OnListViewItemSelected__DelegateSignature::Item' has a wrong offset!");
static_assert(offsetof(BP_LocalPlayerBannerEditor_C_BndEvt__CommonTileView_0_K2Node_ComponentBoundEvent_66_OnListViewItemSelected__DelegateSignature, bIsSelected) == 0x000008, "Member 'BP_LocalPlayerBannerEditor_C_BndEvt__CommonTileView_0_K2Node_ComponentBoundEvent_66_OnListViewItemSelected__DelegateSignature::bIsSelected' has a wrong offset!");

struct BP_LocalPlayerBannerEditor_C_BndEvt__CommonTileView_0_K2Node_ComponentBoundEvent_888_OnListViewItemClicked__DelegateSignature final
{
public:
	class UObject*                                Item;
};
static_assert(alignof(BP_LocalPlayerBannerEditor_C_BndEvt__CommonTileView_0_K2Node_ComponentBoundEvent_888_OnListViewItemClicked__DelegateSignature) == 0x000008, "Wrong alignment on BP_LocalPlayerBannerEditor_C_BndEvt__CommonTileView_0_K2Node_ComponentBoundEvent_888_OnListViewItemClicked__DelegateSignature");
static_assert(sizeof(BP_LocalPlayerBannerEditor_C_BndEvt__CommonTileView_0_K2Node_ComponentBoundEvent_888_OnListViewItemClicked__DelegateSignature) == 0x000008, "Wrong size on BP_LocalPlayerBannerEditor_C_BndEvt__CommonTileView_0_K2Node_ComponentBoundEvent_888_OnListViewItemClicked__DelegateSignature");
static_assert(offsetof(BP_LocalPlayerBannerEditor_C_BndEvt__CommonTileView_0_K2Node_ComponentBoundEvent_888_OnListViewItemClicked__DelegateSignature, Item) == 0x000000, "Member 'BP_LocalPlayerBannerEditor_C_BndEvt__CommonTileView_0_K2Node_ComponentBoundEvent_888_OnListViewItemClicked__DelegateSignature::Item' has a wrong offset!");

struct BP_LocalPlayerBannerEditor_C_BndEvt__LeftArrowButton_K2Node_ComponentBoundEvent_16_CommonButtonClicked__DelegateSignature final
{
public:
	class UCommonButtonLegacy*                    Button;
};
static_assert(alignof(BP_LocalPlayerBannerEditor_C_BndEvt__LeftArrowButton_K2Node_ComponentBoundEvent_16_CommonButtonClicked__DelegateSignature) == 0x000008, "Wrong alignment on BP_LocalPlayerBannerEditor_C_BndEvt__LeftArrowButton_K2Node_ComponentBoundEvent_16_CommonButtonClicked__DelegateSignature");
static_assert(sizeof(BP_LocalPlayerBannerEditor_C_BndEvt__LeftArrowButton_K2Node_ComponentBoundEvent_16_CommonButtonClicked__DelegateSignature) == 0x000008, "Wrong size on BP_LocalPlayerBannerEditor_C_BndEvt__LeftArrowButton_K2Node_ComponentBoundEvent_16_CommonButtonClicked__DelegateSignature");
static_assert(offsetof(BP_LocalPlayerBannerEditor_C_BndEvt__LeftArrowButton_K2Node_ComponentBoundEvent_16_CommonButtonClicked__DelegateSignature, Button) == 0x000000, "Member 'BP_LocalPlayerBannerEditor_C_BndEvt__LeftArrowButton_K2Node_ComponentBoundEvent_16_CommonButtonClicked__DelegateSignature::Button' has a wrong offset!");

struct BP_LocalPlayerBannerEditor_C_BndEvt__RightArrowButton_K2Node_ComponentBoundEvent_39_CommonButtonClicked__DelegateSignature final
{
public:
	class UCommonButtonLegacy*                    Button;
};
static_assert(alignof(BP_LocalPlayerBannerEditor_C_BndEvt__RightArrowButton_K2Node_ComponentBoundEvent_39_CommonButtonClicked__DelegateSignature) == 0x000008, "Wrong alignment on BP_LocalPlayerBannerEditor_C_BndEvt__RightArrowButton_K2Node_ComponentBoundEvent_39_CommonButtonClicked__DelegateSignature");
static_assert(sizeof(BP_LocalPlayerBannerEditor_C_BndEvt__RightArrowButton_K2Node_ComponentBoundEvent_39_CommonButtonClicked__DelegateSignature) == 0x000008, "Wrong size on BP_LocalPlayerBannerEditor_C_BndEvt__RightArrowButton_K2Node_ComponentBoundEvent_39_CommonButtonClicked__DelegateSignature");
static_assert(offsetof(BP_LocalPlayerBannerEditor_C_BndEvt__RightArrowButton_K2Node_ComponentBoundEvent_39_CommonButtonClicked__DelegateSignature, Button) == 0x000000, "Member 'BP_LocalPlayerBannerEditor_C_BndEvt__RightArrowButton_K2Node_ComponentBoundEvent_39_CommonButtonClicked__DelegateSignature::Button' has a wrong offset!");

struct BP_LocalPlayerBannerEditor_C_Decrement_Color_Category_Index final
{
public:
	int32                                         CallFunc_Get_Prev_Color_Category_Index_ReturnValue;
};
static_assert(alignof(BP_LocalPlayerBannerEditor_C_Decrement_Color_Category_Index) == 0x000004, "Wrong alignment on BP_LocalPlayerBannerEditor_C_Decrement_Color_Category_Index");
static_assert(sizeof(BP_LocalPlayerBannerEditor_C_Decrement_Color_Category_Index) == 0x000004, "Wrong size on BP_LocalPlayerBannerEditor_C_Decrement_Color_Category_Index");
static_assert(offsetof(BP_LocalPlayerBannerEditor_C_Decrement_Color_Category_Index, CallFunc_Get_Prev_Color_Category_Index_ReturnValue) == 0x000000, "Member 'BP_LocalPlayerBannerEditor_C_Decrement_Color_Category_Index::CallFunc_Get_Prev_Color_Category_Index_ReturnValue' has a wrong offset!");

struct BP_LocalPlayerBannerEditor_C_Decrement_Icon_Category_Index final
{
public:
	int32                                         CallFunc_Get_Prev_Icon_Category_Index_ReturnValue;
};
static_assert(alignof(BP_LocalPlayerBannerEditor_C_Decrement_Icon_Category_Index) == 0x000004, "Wrong alignment on BP_LocalPlayerBannerEditor_C_Decrement_Icon_Category_Index");
static_assert(sizeof(BP_LocalPlayerBannerEditor_C_Decrement_Icon_Category_Index) == 0x000004, "Wrong size on BP_LocalPlayerBannerEditor_C_Decrement_Icon_Category_Index");
static_assert(offsetof(BP_LocalPlayerBannerEditor_C_Decrement_Icon_Category_Index, CallFunc_Get_Prev_Icon_Category_Index_ReturnValue) == 0x000000, "Member 'BP_LocalPlayerBannerEditor_C_Decrement_Icon_Category_Index::CallFunc_Get_Prev_Icon_Category_Index_ReturnValue' has a wrong offset!");

struct BP_LocalPlayerBannerEditor_C_ExecuteUbergraph_BP_LocalPlayerBannerEditor final
{
public:
	int32                                         EntryPoint;
	TDelegate<void(ECommonInputType bNewInputType)> K2Node_CreateDelegate_OutputDelegate;
	class UObject*                                K2Node_ComponentBoundEvent_Item_1;
	bool                                          CallFunc_Attempt_Leave_Picker_Left;
	uint8                                         Pad_19[0x7];
	class UUserWidget*                            K2Node_ComponentBoundEvent_Widget;
	class UBP_BannerEditorTile_C*                 K2Node_DynamicCast_AsBP_Banner_Editor_Tile;
	bool                                          K2Node_DynamicCast_bSuccess;
	uint8                                         Pad_31[0x3];
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_1;
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_2;
	uint8                                         Pad_4C[0x4];
	struct FTimerHandle                           CallFunc_K2_SetTimerDelegate_ReturnValue;
	bool                                          CallFunc_K2_IsValidTimerHandle_ReturnValue;
	bool                                          CallFunc_Not_PreBool_ReturnValue;
	uint8                                         Pad_5A[0x6];
	class UCommonInputSubsystem*                  CallFunc_GetContext_ReturnValue;
	class UCommonInputSubsystem*                  CallFunc_GetLocalPlayerSubsystem_ReturnValue;
	ECommonInputType                              CallFunc_GetCurrentInputType_ReturnValue;
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;
	uint8                                         Pad_72[0x6];
	class UCommonInputSubsystem*                  CallFunc_GetContext_ReturnValue_1;
	ECommonInputType                              CallFunc_GetCurrentInputType_ReturnValue_1;
	bool                                          CallFunc_Attempt_Leave_Picker_Left_1;
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_1;
	bool                                          CallFunc_IsErebus_ReturnValue;
	bool                                          CallFunc_Not_PreBool_ReturnValue_1;
	uint8                                         Pad_85[0x3];
	class UObject*                                K2Node_ComponentBoundEvent_Item;
	bool                                          K2Node_ComponentBoundEvent_bIsSelected;
	uint8                                         Pad_91[0x7];
	class UCommonInputSubsystem*                  CallFunc_GetContext_ReturnValue_2;
	bool                                          CallFunc_IsMobileGame_ReturnValue;
	ECommonInputType                              CallFunc_GetCurrentInputType_ReturnValue_2;
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_2;
	uint8                                         Pad_A3[0x5];
	class UCommonButtonLegacy*                    K2Node_ComponentBoundEvent_Button_8;
	bool                                          Temp_bool_Variable;
	bool                                          Temp_bool_Variable_1;
	bool                                          K2Node_Select_Default;
	uint8                                         Pad_B3[0x5];
	class UCommonButtonBase*                      K2Node_ComponentBoundEvent_Button_7;
	bool                                          CallFunc_GetIsEnabled_ReturnValue;
	bool                                          CallFunc_BooleanAND_ReturnValue;
	uint8                                         Pad_C2[0x6];
	class UCommonButtonLegacy*                    K2Node_ComponentBoundEvent_Button_6;
	class UCommonButtonLegacy*                    K2Node_ComponentBoundEvent_Button_5;
	class UCommonButtonLegacy*                    K2Node_ComponentBoundEvent_Button_4;
	class UCommonButtonLegacy*                    K2Node_ComponentBoundEvent_Button_3;
	class UCommonButtonBase*                      K2Node_ComponentBoundEvent_Button_2;
	class UCommonButtonLegacy*                    K2Node_ComponentBoundEvent_Button_1;
	class UCommonButtonLegacy*                    K2Node_ComponentBoundEvent_Button;
};
static_assert(alignof(BP_LocalPlayerBannerEditor_C_ExecuteUbergraph_BP_LocalPlayerBannerEditor) == 0x000008, "Wrong alignment on BP_LocalPlayerBannerEditor_C_ExecuteUbergraph_BP_LocalPlayerBannerEditor");
static_assert(sizeof(BP_LocalPlayerBannerEditor_C_ExecuteUbergraph_BP_LocalPlayerBannerEditor) == 0x000100, "Wrong size on BP_LocalPlayerBannerEditor_C_ExecuteUbergraph_BP_LocalPlayerBannerEditor");
static_assert(offsetof(BP_LocalPlayerBannerEditor_C_ExecuteUbergraph_BP_LocalPlayerBannerEditor, EntryPoint) == 0x000000, "Member 'BP_LocalPlayerBannerEditor_C_ExecuteUbergraph_BP_LocalPlayerBannerEditor::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_LocalPlayerBannerEditor_C_ExecuteUbergraph_BP_LocalPlayerBannerEditor, K2Node_CreateDelegate_OutputDelegate) == 0x000004, "Member 'BP_LocalPlayerBannerEditor_C_ExecuteUbergraph_BP_LocalPlayerBannerEditor::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(BP_LocalPlayerBannerEditor_C_ExecuteUbergraph_BP_LocalPlayerBannerEditor, K2Node_ComponentBoundEvent_Item_1) == 0x000010, "Member 'BP_LocalPlayerBannerEditor_C_ExecuteUbergraph_BP_LocalPlayerBannerEditor::K2Node_ComponentBoundEvent_Item_1' has a wrong offset!");
static_assert(offsetof(BP_LocalPlayerBannerEditor_C_ExecuteUbergraph_BP_LocalPlayerBannerEditor, CallFunc_Attempt_Leave_Picker_Left) == 0x000018, "Member 'BP_LocalPlayerBannerEditor_C_ExecuteUbergraph_BP_LocalPlayerBannerEditor::CallFunc_Attempt_Leave_Picker_Left' has a wrong offset!");
static_assert(offsetof(BP_LocalPlayerBannerEditor_C_ExecuteUbergraph_BP_LocalPlayerBannerEditor, K2Node_ComponentBoundEvent_Widget) == 0x000020, "Member 'BP_LocalPlayerBannerEditor_C_ExecuteUbergraph_BP_LocalPlayerBannerEditor::K2Node_ComponentBoundEvent_Widget' has a wrong offset!");
static_assert(offsetof(BP_LocalPlayerBannerEditor_C_ExecuteUbergraph_BP_LocalPlayerBannerEditor, K2Node_DynamicCast_AsBP_Banner_Editor_Tile) == 0x000028, "Member 'BP_LocalPlayerBannerEditor_C_ExecuteUbergraph_BP_LocalPlayerBannerEditor::K2Node_DynamicCast_AsBP_Banner_Editor_Tile' has a wrong offset!");
static_assert(offsetof(BP_LocalPlayerBannerEditor_C_ExecuteUbergraph_BP_LocalPlayerBannerEditor, K2Node_DynamicCast_bSuccess) == 0x000030, "Member 'BP_LocalPlayerBannerEditor_C_ExecuteUbergraph_BP_LocalPlayerBannerEditor::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BP_LocalPlayerBannerEditor_C_ExecuteUbergraph_BP_LocalPlayerBannerEditor, K2Node_CreateDelegate_OutputDelegate_1) == 0x000034, "Member 'BP_LocalPlayerBannerEditor_C_ExecuteUbergraph_BP_LocalPlayerBannerEditor::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(BP_LocalPlayerBannerEditor_C_ExecuteUbergraph_BP_LocalPlayerBannerEditor, K2Node_CreateDelegate_OutputDelegate_2) == 0x000040, "Member 'BP_LocalPlayerBannerEditor_C_ExecuteUbergraph_BP_LocalPlayerBannerEditor::K2Node_CreateDelegate_OutputDelegate_2' has a wrong offset!");
static_assert(offsetof(BP_LocalPlayerBannerEditor_C_ExecuteUbergraph_BP_LocalPlayerBannerEditor, CallFunc_K2_SetTimerDelegate_ReturnValue) == 0x000050, "Member 'BP_LocalPlayerBannerEditor_C_ExecuteUbergraph_BP_LocalPlayerBannerEditor::CallFunc_K2_SetTimerDelegate_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_LocalPlayerBannerEditor_C_ExecuteUbergraph_BP_LocalPlayerBannerEditor, CallFunc_K2_IsValidTimerHandle_ReturnValue) == 0x000058, "Member 'BP_LocalPlayerBannerEditor_C_ExecuteUbergraph_BP_LocalPlayerBannerEditor::CallFunc_K2_IsValidTimerHandle_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_LocalPlayerBannerEditor_C_ExecuteUbergraph_BP_LocalPlayerBannerEditor, CallFunc_Not_PreBool_ReturnValue) == 0x000059, "Member 'BP_LocalPlayerBannerEditor_C_ExecuteUbergraph_BP_LocalPlayerBannerEditor::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_LocalPlayerBannerEditor_C_ExecuteUbergraph_BP_LocalPlayerBannerEditor, CallFunc_GetContext_ReturnValue) == 0x000060, "Member 'BP_LocalPlayerBannerEditor_C_ExecuteUbergraph_BP_LocalPlayerBannerEditor::CallFunc_GetContext_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_LocalPlayerBannerEditor_C_ExecuteUbergraph_BP_LocalPlayerBannerEditor, CallFunc_GetLocalPlayerSubsystem_ReturnValue) == 0x000068, "Member 'BP_LocalPlayerBannerEditor_C_ExecuteUbergraph_BP_LocalPlayerBannerEditor::CallFunc_GetLocalPlayerSubsystem_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_LocalPlayerBannerEditor_C_ExecuteUbergraph_BP_LocalPlayerBannerEditor, CallFunc_GetCurrentInputType_ReturnValue) == 0x000070, "Member 'BP_LocalPlayerBannerEditor_C_ExecuteUbergraph_BP_LocalPlayerBannerEditor::CallFunc_GetCurrentInputType_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_LocalPlayerBannerEditor_C_ExecuteUbergraph_BP_LocalPlayerBannerEditor, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x000071, "Member 'BP_LocalPlayerBannerEditor_C_ExecuteUbergraph_BP_LocalPlayerBannerEditor::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_LocalPlayerBannerEditor_C_ExecuteUbergraph_BP_LocalPlayerBannerEditor, CallFunc_GetContext_ReturnValue_1) == 0x000078, "Member 'BP_LocalPlayerBannerEditor_C_ExecuteUbergraph_BP_LocalPlayerBannerEditor::CallFunc_GetContext_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_LocalPlayerBannerEditor_C_ExecuteUbergraph_BP_LocalPlayerBannerEditor, CallFunc_GetCurrentInputType_ReturnValue_1) == 0x000080, "Member 'BP_LocalPlayerBannerEditor_C_ExecuteUbergraph_BP_LocalPlayerBannerEditor::CallFunc_GetCurrentInputType_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_LocalPlayerBannerEditor_C_ExecuteUbergraph_BP_LocalPlayerBannerEditor, CallFunc_Attempt_Leave_Picker_Left_1) == 0x000081, "Member 'BP_LocalPlayerBannerEditor_C_ExecuteUbergraph_BP_LocalPlayerBannerEditor::CallFunc_Attempt_Leave_Picker_Left_1' has a wrong offset!");
static_assert(offsetof(BP_LocalPlayerBannerEditor_C_ExecuteUbergraph_BP_LocalPlayerBannerEditor, CallFunc_EqualEqual_ByteByte_ReturnValue_1) == 0x000082, "Member 'BP_LocalPlayerBannerEditor_C_ExecuteUbergraph_BP_LocalPlayerBannerEditor::CallFunc_EqualEqual_ByteByte_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_LocalPlayerBannerEditor_C_ExecuteUbergraph_BP_LocalPlayerBannerEditor, CallFunc_IsErebus_ReturnValue) == 0x000083, "Member 'BP_LocalPlayerBannerEditor_C_ExecuteUbergraph_BP_LocalPlayerBannerEditor::CallFunc_IsErebus_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_LocalPlayerBannerEditor_C_ExecuteUbergraph_BP_LocalPlayerBannerEditor, CallFunc_Not_PreBool_ReturnValue_1) == 0x000084, "Member 'BP_LocalPlayerBannerEditor_C_ExecuteUbergraph_BP_LocalPlayerBannerEditor::CallFunc_Not_PreBool_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_LocalPlayerBannerEditor_C_ExecuteUbergraph_BP_LocalPlayerBannerEditor, K2Node_ComponentBoundEvent_Item) == 0x000088, "Member 'BP_LocalPlayerBannerEditor_C_ExecuteUbergraph_BP_LocalPlayerBannerEditor::K2Node_ComponentBoundEvent_Item' has a wrong offset!");
static_assert(offsetof(BP_LocalPlayerBannerEditor_C_ExecuteUbergraph_BP_LocalPlayerBannerEditor, K2Node_ComponentBoundEvent_bIsSelected) == 0x000090, "Member 'BP_LocalPlayerBannerEditor_C_ExecuteUbergraph_BP_LocalPlayerBannerEditor::K2Node_ComponentBoundEvent_bIsSelected' has a wrong offset!");
static_assert(offsetof(BP_LocalPlayerBannerEditor_C_ExecuteUbergraph_BP_LocalPlayerBannerEditor, CallFunc_GetContext_ReturnValue_2) == 0x000098, "Member 'BP_LocalPlayerBannerEditor_C_ExecuteUbergraph_BP_LocalPlayerBannerEditor::CallFunc_GetContext_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_LocalPlayerBannerEditor_C_ExecuteUbergraph_BP_LocalPlayerBannerEditor, CallFunc_IsMobileGame_ReturnValue) == 0x0000A0, "Member 'BP_LocalPlayerBannerEditor_C_ExecuteUbergraph_BP_LocalPlayerBannerEditor::CallFunc_IsMobileGame_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_LocalPlayerBannerEditor_C_ExecuteUbergraph_BP_LocalPlayerBannerEditor, CallFunc_GetCurrentInputType_ReturnValue_2) == 0x0000A1, "Member 'BP_LocalPlayerBannerEditor_C_ExecuteUbergraph_BP_LocalPlayerBannerEditor::CallFunc_GetCurrentInputType_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_LocalPlayerBannerEditor_C_ExecuteUbergraph_BP_LocalPlayerBannerEditor, CallFunc_EqualEqual_ByteByte_ReturnValue_2) == 0x0000A2, "Member 'BP_LocalPlayerBannerEditor_C_ExecuteUbergraph_BP_LocalPlayerBannerEditor::CallFunc_EqualEqual_ByteByte_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_LocalPlayerBannerEditor_C_ExecuteUbergraph_BP_LocalPlayerBannerEditor, K2Node_ComponentBoundEvent_Button_8) == 0x0000A8, "Member 'BP_LocalPlayerBannerEditor_C_ExecuteUbergraph_BP_LocalPlayerBannerEditor::K2Node_ComponentBoundEvent_Button_8' has a wrong offset!");
static_assert(offsetof(BP_LocalPlayerBannerEditor_C_ExecuteUbergraph_BP_LocalPlayerBannerEditor, Temp_bool_Variable) == 0x0000B0, "Member 'BP_LocalPlayerBannerEditor_C_ExecuteUbergraph_BP_LocalPlayerBannerEditor::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(BP_LocalPlayerBannerEditor_C_ExecuteUbergraph_BP_LocalPlayerBannerEditor, Temp_bool_Variable_1) == 0x0000B1, "Member 'BP_LocalPlayerBannerEditor_C_ExecuteUbergraph_BP_LocalPlayerBannerEditor::Temp_bool_Variable_1' has a wrong offset!");
static_assert(offsetof(BP_LocalPlayerBannerEditor_C_ExecuteUbergraph_BP_LocalPlayerBannerEditor, K2Node_Select_Default) == 0x0000B2, "Member 'BP_LocalPlayerBannerEditor_C_ExecuteUbergraph_BP_LocalPlayerBannerEditor::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(BP_LocalPlayerBannerEditor_C_ExecuteUbergraph_BP_LocalPlayerBannerEditor, K2Node_ComponentBoundEvent_Button_7) == 0x0000B8, "Member 'BP_LocalPlayerBannerEditor_C_ExecuteUbergraph_BP_LocalPlayerBannerEditor::K2Node_ComponentBoundEvent_Button_7' has a wrong offset!");
static_assert(offsetof(BP_LocalPlayerBannerEditor_C_ExecuteUbergraph_BP_LocalPlayerBannerEditor, CallFunc_GetIsEnabled_ReturnValue) == 0x0000C0, "Member 'BP_LocalPlayerBannerEditor_C_ExecuteUbergraph_BP_LocalPlayerBannerEditor::CallFunc_GetIsEnabled_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_LocalPlayerBannerEditor_C_ExecuteUbergraph_BP_LocalPlayerBannerEditor, CallFunc_BooleanAND_ReturnValue) == 0x0000C1, "Member 'BP_LocalPlayerBannerEditor_C_ExecuteUbergraph_BP_LocalPlayerBannerEditor::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_LocalPlayerBannerEditor_C_ExecuteUbergraph_BP_LocalPlayerBannerEditor, K2Node_ComponentBoundEvent_Button_6) == 0x0000C8, "Member 'BP_LocalPlayerBannerEditor_C_ExecuteUbergraph_BP_LocalPlayerBannerEditor::K2Node_ComponentBoundEvent_Button_6' has a wrong offset!");
static_assert(offsetof(BP_LocalPlayerBannerEditor_C_ExecuteUbergraph_BP_LocalPlayerBannerEditor, K2Node_ComponentBoundEvent_Button_5) == 0x0000D0, "Member 'BP_LocalPlayerBannerEditor_C_ExecuteUbergraph_BP_LocalPlayerBannerEditor::K2Node_ComponentBoundEvent_Button_5' has a wrong offset!");
static_assert(offsetof(BP_LocalPlayerBannerEditor_C_ExecuteUbergraph_BP_LocalPlayerBannerEditor, K2Node_ComponentBoundEvent_Button_4) == 0x0000D8, "Member 'BP_LocalPlayerBannerEditor_C_ExecuteUbergraph_BP_LocalPlayerBannerEditor::K2Node_ComponentBoundEvent_Button_4' has a wrong offset!");
static_assert(offsetof(BP_LocalPlayerBannerEditor_C_ExecuteUbergraph_BP_LocalPlayerBannerEditor, K2Node_ComponentBoundEvent_Button_3) == 0x0000E0, "Member 'BP_LocalPlayerBannerEditor_C_ExecuteUbergraph_BP_LocalPlayerBannerEditor::K2Node_ComponentBoundEvent_Button_3' has a wrong offset!");
static_assert(offsetof(BP_LocalPlayerBannerEditor_C_ExecuteUbergraph_BP_LocalPlayerBannerEditor, K2Node_ComponentBoundEvent_Button_2) == 0x0000E8, "Member 'BP_LocalPlayerBannerEditor_C_ExecuteUbergraph_BP_LocalPlayerBannerEditor::K2Node_ComponentBoundEvent_Button_2' has a wrong offset!");
static_assert(offsetof(BP_LocalPlayerBannerEditor_C_ExecuteUbergraph_BP_LocalPlayerBannerEditor, K2Node_ComponentBoundEvent_Button_1) == 0x0000F0, "Member 'BP_LocalPlayerBannerEditor_C_ExecuteUbergraph_BP_LocalPlayerBannerEditor::K2Node_ComponentBoundEvent_Button_1' has a wrong offset!");
static_assert(offsetof(BP_LocalPlayerBannerEditor_C_ExecuteUbergraph_BP_LocalPlayerBannerEditor, K2Node_ComponentBoundEvent_Button) == 0x0000F8, "Member 'BP_LocalPlayerBannerEditor_C_ExecuteUbergraph_BP_LocalPlayerBannerEditor::K2Node_ComponentBoundEvent_Button' has a wrong offset!");

struct BP_LocalPlayerBannerEditor_C_FoundsPackTextUpdate final
{
public:
	ESlateVisibility                              Temp_byte_Variable;
	ESlateVisibility                              Temp_byte_Variable_1;
	ESlateVisibility                              Temp_byte_Variable_2;
	ESlateVisibility                              Temp_byte_Variable_3;
	ESlateVisibility                              Temp_byte_Variable_4;
	uint8                                         Pad_5[0x3];
	class UFortGlobalUIContext*                   CallFunc_GetContext_ReturnValue;
	ESubGame                                      CallFunc_GetSubGame_ReturnValue;
	uint8                                         Pad_11[0x7];
	class UFortFrontEndContext*                   CallFunc_GetContext_ReturnValue_1;
	ESubGame                                      Temp_byte_Variable_5;
	EFortFrontEndFeatureState                     CallFunc_GetFeatureState_OutFeatureState;
	EFortFrontEndFeatureStateReason               CallFunc_GetFeatureState_OutReason;
	bool                                          K2Node_SwitchEnum_CmpSuccess;
	ESlateVisibility                              K2Node_Select_Default;
};
static_assert(alignof(BP_LocalPlayerBannerEditor_C_FoundsPackTextUpdate) == 0x000008, "Wrong alignment on BP_LocalPlayerBannerEditor_C_FoundsPackTextUpdate");
static_assert(sizeof(BP_LocalPlayerBannerEditor_C_FoundsPackTextUpdate) == 0x000028, "Wrong size on BP_LocalPlayerBannerEditor_C_FoundsPackTextUpdate");
static_assert(offsetof(BP_LocalPlayerBannerEditor_C_FoundsPackTextUpdate, Temp_byte_Variable) == 0x000000, "Member 'BP_LocalPlayerBannerEditor_C_FoundsPackTextUpdate::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(BP_LocalPlayerBannerEditor_C_FoundsPackTextUpdate, Temp_byte_Variable_1) == 0x000001, "Member 'BP_LocalPlayerBannerEditor_C_FoundsPackTextUpdate::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(BP_LocalPlayerBannerEditor_C_FoundsPackTextUpdate, Temp_byte_Variable_2) == 0x000002, "Member 'BP_LocalPlayerBannerEditor_C_FoundsPackTextUpdate::Temp_byte_Variable_2' has a wrong offset!");
static_assert(offsetof(BP_LocalPlayerBannerEditor_C_FoundsPackTextUpdate, Temp_byte_Variable_3) == 0x000003, "Member 'BP_LocalPlayerBannerEditor_C_FoundsPackTextUpdate::Temp_byte_Variable_3' has a wrong offset!");
static_assert(offsetof(BP_LocalPlayerBannerEditor_C_FoundsPackTextUpdate, Temp_byte_Variable_4) == 0x000004, "Member 'BP_LocalPlayerBannerEditor_C_FoundsPackTextUpdate::Temp_byte_Variable_4' has a wrong offset!");
static_assert(offsetof(BP_LocalPlayerBannerEditor_C_FoundsPackTextUpdate, CallFunc_GetContext_ReturnValue) == 0x000008, "Member 'BP_LocalPlayerBannerEditor_C_FoundsPackTextUpdate::CallFunc_GetContext_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_LocalPlayerBannerEditor_C_FoundsPackTextUpdate, CallFunc_GetSubGame_ReturnValue) == 0x000010, "Member 'BP_LocalPlayerBannerEditor_C_FoundsPackTextUpdate::CallFunc_GetSubGame_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_LocalPlayerBannerEditor_C_FoundsPackTextUpdate, CallFunc_GetContext_ReturnValue_1) == 0x000018, "Member 'BP_LocalPlayerBannerEditor_C_FoundsPackTextUpdate::CallFunc_GetContext_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_LocalPlayerBannerEditor_C_FoundsPackTextUpdate, Temp_byte_Variable_5) == 0x000020, "Member 'BP_LocalPlayerBannerEditor_C_FoundsPackTextUpdate::Temp_byte_Variable_5' has a wrong offset!");
static_assert(offsetof(BP_LocalPlayerBannerEditor_C_FoundsPackTextUpdate, CallFunc_GetFeatureState_OutFeatureState) == 0x000021, "Member 'BP_LocalPlayerBannerEditor_C_FoundsPackTextUpdate::CallFunc_GetFeatureState_OutFeatureState' has a wrong offset!");
static_assert(offsetof(BP_LocalPlayerBannerEditor_C_FoundsPackTextUpdate, CallFunc_GetFeatureState_OutReason) == 0x000022, "Member 'BP_LocalPlayerBannerEditor_C_FoundsPackTextUpdate::CallFunc_GetFeatureState_OutReason' has a wrong offset!");
static_assert(offsetof(BP_LocalPlayerBannerEditor_C_FoundsPackTextUpdate, K2Node_SwitchEnum_CmpSuccess) == 0x000023, "Member 'BP_LocalPlayerBannerEditor_C_FoundsPackTextUpdate::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");
static_assert(offsetof(BP_LocalPlayerBannerEditor_C_FoundsPackTextUpdate, K2Node_Select_Default) == 0x000024, "Member 'BP_LocalPlayerBannerEditor_C_FoundsPackTextUpdate::K2Node_Select_Default' has a wrong offset!");

struct BP_LocalPlayerBannerEditor_C_Get_Next_Color_Category_Index final
{
public:
	int32                                         ReturnValue;
	bool                                          Temp_bool_Variable;
	uint8                                         Pad_5[0x3];
	int32                                         Temp_int_Variable;
	int32                                         CallFunc_Array_Length_ReturnValue;
	int32                                         CallFunc_Add_IntInt_ReturnValue;
	bool                                          CallFunc_GreaterEqual_IntInt_ReturnValue;
	uint8                                         Pad_15[0x3];
	int32                                         K2Node_Select_Default;
};
static_assert(alignof(BP_LocalPlayerBannerEditor_C_Get_Next_Color_Category_Index) == 0x000004, "Wrong alignment on BP_LocalPlayerBannerEditor_C_Get_Next_Color_Category_Index");
static_assert(sizeof(BP_LocalPlayerBannerEditor_C_Get_Next_Color_Category_Index) == 0x00001C, "Wrong size on BP_LocalPlayerBannerEditor_C_Get_Next_Color_Category_Index");
static_assert(offsetof(BP_LocalPlayerBannerEditor_C_Get_Next_Color_Category_Index, ReturnValue) == 0x000000, "Member 'BP_LocalPlayerBannerEditor_C_Get_Next_Color_Category_Index::ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_LocalPlayerBannerEditor_C_Get_Next_Color_Category_Index, Temp_bool_Variable) == 0x000004, "Member 'BP_LocalPlayerBannerEditor_C_Get_Next_Color_Category_Index::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(BP_LocalPlayerBannerEditor_C_Get_Next_Color_Category_Index, Temp_int_Variable) == 0x000008, "Member 'BP_LocalPlayerBannerEditor_C_Get_Next_Color_Category_Index::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(BP_LocalPlayerBannerEditor_C_Get_Next_Color_Category_Index, CallFunc_Array_Length_ReturnValue) == 0x00000C, "Member 'BP_LocalPlayerBannerEditor_C_Get_Next_Color_Category_Index::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_LocalPlayerBannerEditor_C_Get_Next_Color_Category_Index, CallFunc_Add_IntInt_ReturnValue) == 0x000010, "Member 'BP_LocalPlayerBannerEditor_C_Get_Next_Color_Category_Index::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_LocalPlayerBannerEditor_C_Get_Next_Color_Category_Index, CallFunc_GreaterEqual_IntInt_ReturnValue) == 0x000014, "Member 'BP_LocalPlayerBannerEditor_C_Get_Next_Color_Category_Index::CallFunc_GreaterEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_LocalPlayerBannerEditor_C_Get_Next_Color_Category_Index, K2Node_Select_Default) == 0x000018, "Member 'BP_LocalPlayerBannerEditor_C_Get_Next_Color_Category_Index::K2Node_Select_Default' has a wrong offset!");

struct BP_LocalPlayerBannerEditor_C_Get_Next_Icon_Category_Index final
{
public:
	int32                                         ReturnValue;
	bool                                          Temp_bool_Variable;
	uint8                                         Pad_5[0x3];
	int32                                         Temp_int_Variable;
	int32                                         CallFunc_Add_IntInt_ReturnValue;
	int32                                         CallFunc_Array_Length_ReturnValue;
	bool                                          CallFunc_GreaterEqual_IntInt_ReturnValue;
	uint8                                         Pad_15[0x3];
	int32                                         K2Node_Select_Default;
};
static_assert(alignof(BP_LocalPlayerBannerEditor_C_Get_Next_Icon_Category_Index) == 0x000004, "Wrong alignment on BP_LocalPlayerBannerEditor_C_Get_Next_Icon_Category_Index");
static_assert(sizeof(BP_LocalPlayerBannerEditor_C_Get_Next_Icon_Category_Index) == 0x00001C, "Wrong size on BP_LocalPlayerBannerEditor_C_Get_Next_Icon_Category_Index");
static_assert(offsetof(BP_LocalPlayerBannerEditor_C_Get_Next_Icon_Category_Index, ReturnValue) == 0x000000, "Member 'BP_LocalPlayerBannerEditor_C_Get_Next_Icon_Category_Index::ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_LocalPlayerBannerEditor_C_Get_Next_Icon_Category_Index, Temp_bool_Variable) == 0x000004, "Member 'BP_LocalPlayerBannerEditor_C_Get_Next_Icon_Category_Index::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(BP_LocalPlayerBannerEditor_C_Get_Next_Icon_Category_Index, Temp_int_Variable) == 0x000008, "Member 'BP_LocalPlayerBannerEditor_C_Get_Next_Icon_Category_Index::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(BP_LocalPlayerBannerEditor_C_Get_Next_Icon_Category_Index, CallFunc_Add_IntInt_ReturnValue) == 0x00000C, "Member 'BP_LocalPlayerBannerEditor_C_Get_Next_Icon_Category_Index::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_LocalPlayerBannerEditor_C_Get_Next_Icon_Category_Index, CallFunc_Array_Length_ReturnValue) == 0x000010, "Member 'BP_LocalPlayerBannerEditor_C_Get_Next_Icon_Category_Index::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_LocalPlayerBannerEditor_C_Get_Next_Icon_Category_Index, CallFunc_GreaterEqual_IntInt_ReturnValue) == 0x000014, "Member 'BP_LocalPlayerBannerEditor_C_Get_Next_Icon_Category_Index::CallFunc_GreaterEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_LocalPlayerBannerEditor_C_Get_Next_Icon_Category_Index, K2Node_Select_Default) == 0x000018, "Member 'BP_LocalPlayerBannerEditor_C_Get_Next_Icon_Category_Index::K2Node_Select_Default' has a wrong offset!");

struct BP_LocalPlayerBannerEditor_C_Get_Prev_Color_Category_Index final
{
public:
	int32                                         ReturnValue;
	bool                                          Temp_bool_Variable;
	uint8                                         Pad_5[0x3];
	int32                                         CallFunc_Array_Length_ReturnValue;
	int32                                         CallFunc_Subtract_IntInt_ReturnValue;
	int32                                         CallFunc_Subtract_IntInt_ReturnValue_1;
	bool                                          CallFunc_Less_IntInt_ReturnValue;
	uint8                                         Pad_15[0x3];
	int32                                         K2Node_Select_Default;
};
static_assert(alignof(BP_LocalPlayerBannerEditor_C_Get_Prev_Color_Category_Index) == 0x000004, "Wrong alignment on BP_LocalPlayerBannerEditor_C_Get_Prev_Color_Category_Index");
static_assert(sizeof(BP_LocalPlayerBannerEditor_C_Get_Prev_Color_Category_Index) == 0x00001C, "Wrong size on BP_LocalPlayerBannerEditor_C_Get_Prev_Color_Category_Index");
static_assert(offsetof(BP_LocalPlayerBannerEditor_C_Get_Prev_Color_Category_Index, ReturnValue) == 0x000000, "Member 'BP_LocalPlayerBannerEditor_C_Get_Prev_Color_Category_Index::ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_LocalPlayerBannerEditor_C_Get_Prev_Color_Category_Index, Temp_bool_Variable) == 0x000004, "Member 'BP_LocalPlayerBannerEditor_C_Get_Prev_Color_Category_Index::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(BP_LocalPlayerBannerEditor_C_Get_Prev_Color_Category_Index, CallFunc_Array_Length_ReturnValue) == 0x000008, "Member 'BP_LocalPlayerBannerEditor_C_Get_Prev_Color_Category_Index::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_LocalPlayerBannerEditor_C_Get_Prev_Color_Category_Index, CallFunc_Subtract_IntInt_ReturnValue) == 0x00000C, "Member 'BP_LocalPlayerBannerEditor_C_Get_Prev_Color_Category_Index::CallFunc_Subtract_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_LocalPlayerBannerEditor_C_Get_Prev_Color_Category_Index, CallFunc_Subtract_IntInt_ReturnValue_1) == 0x000010, "Member 'BP_LocalPlayerBannerEditor_C_Get_Prev_Color_Category_Index::CallFunc_Subtract_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_LocalPlayerBannerEditor_C_Get_Prev_Color_Category_Index, CallFunc_Less_IntInt_ReturnValue) == 0x000014, "Member 'BP_LocalPlayerBannerEditor_C_Get_Prev_Color_Category_Index::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_LocalPlayerBannerEditor_C_Get_Prev_Color_Category_Index, K2Node_Select_Default) == 0x000018, "Member 'BP_LocalPlayerBannerEditor_C_Get_Prev_Color_Category_Index::K2Node_Select_Default' has a wrong offset!");

struct BP_LocalPlayerBannerEditor_C_Get_Prev_Icon_Category_Index final
{
public:
	int32                                         ReturnValue;
	bool                                          Temp_bool_Variable;
	uint8                                         Pad_5[0x3];
	int32                                         CallFunc_Array_Length_ReturnValue;
	int32                                         CallFunc_Subtract_IntInt_ReturnValue;
	int32                                         CallFunc_Subtract_IntInt_ReturnValue_1;
	bool                                          CallFunc_Less_IntInt_ReturnValue;
	uint8                                         Pad_15[0x3];
	int32                                         K2Node_Select_Default;
};
static_assert(alignof(BP_LocalPlayerBannerEditor_C_Get_Prev_Icon_Category_Index) == 0x000004, "Wrong alignment on BP_LocalPlayerBannerEditor_C_Get_Prev_Icon_Category_Index");
static_assert(sizeof(BP_LocalPlayerBannerEditor_C_Get_Prev_Icon_Category_Index) == 0x00001C, "Wrong size on BP_LocalPlayerBannerEditor_C_Get_Prev_Icon_Category_Index");
static_assert(offsetof(BP_LocalPlayerBannerEditor_C_Get_Prev_Icon_Category_Index, ReturnValue) == 0x000000, "Member 'BP_LocalPlayerBannerEditor_C_Get_Prev_Icon_Category_Index::ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_LocalPlayerBannerEditor_C_Get_Prev_Icon_Category_Index, Temp_bool_Variable) == 0x000004, "Member 'BP_LocalPlayerBannerEditor_C_Get_Prev_Icon_Category_Index::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(BP_LocalPlayerBannerEditor_C_Get_Prev_Icon_Category_Index, CallFunc_Array_Length_ReturnValue) == 0x000008, "Member 'BP_LocalPlayerBannerEditor_C_Get_Prev_Icon_Category_Index::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_LocalPlayerBannerEditor_C_Get_Prev_Icon_Category_Index, CallFunc_Subtract_IntInt_ReturnValue) == 0x00000C, "Member 'BP_LocalPlayerBannerEditor_C_Get_Prev_Icon_Category_Index::CallFunc_Subtract_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_LocalPlayerBannerEditor_C_Get_Prev_Icon_Category_Index, CallFunc_Subtract_IntInt_ReturnValue_1) == 0x000010, "Member 'BP_LocalPlayerBannerEditor_C_Get_Prev_Icon_Category_Index::CallFunc_Subtract_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_LocalPlayerBannerEditor_C_Get_Prev_Icon_Category_Index, CallFunc_Less_IntInt_ReturnValue) == 0x000014, "Member 'BP_LocalPlayerBannerEditor_C_Get_Prev_Icon_Category_Index::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_LocalPlayerBannerEditor_C_Get_Prev_Icon_Category_Index, K2Node_Select_Default) == 0x000018, "Member 'BP_LocalPlayerBannerEditor_C_Get_Prev_Icon_Category_Index::K2Node_Select_Default' has a wrong offset!");

struct BP_LocalPlayerBannerEditor_C_HandleInputMethodChanged final
{
public:
	ECommonInputType                              InputType;
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;
};
static_assert(alignof(BP_LocalPlayerBannerEditor_C_HandleInputMethodChanged) == 0x000001, "Wrong alignment on BP_LocalPlayerBannerEditor_C_HandleInputMethodChanged");
static_assert(sizeof(BP_LocalPlayerBannerEditor_C_HandleInputMethodChanged) == 0x000002, "Wrong size on BP_LocalPlayerBannerEditor_C_HandleInputMethodChanged");
static_assert(offsetof(BP_LocalPlayerBannerEditor_C_HandleInputMethodChanged, InputType) == 0x000000, "Member 'BP_LocalPlayerBannerEditor_C_HandleInputMethodChanged::InputType' has a wrong offset!");
static_assert(offsetof(BP_LocalPlayerBannerEditor_C_HandleInputMethodChanged, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x000001, "Member 'BP_LocalPlayerBannerEditor_C_HandleInputMethodChanged::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");

struct BP_LocalPlayerBannerEditor_C_Increment_Color_Category_Index final
{
public:
	int32                                         CallFunc_Get_Next_Color_Category_Index_ReturnValue;
};
static_assert(alignof(BP_LocalPlayerBannerEditor_C_Increment_Color_Category_Index) == 0x000004, "Wrong alignment on BP_LocalPlayerBannerEditor_C_Increment_Color_Category_Index");
static_assert(sizeof(BP_LocalPlayerBannerEditor_C_Increment_Color_Category_Index) == 0x000004, "Wrong size on BP_LocalPlayerBannerEditor_C_Increment_Color_Category_Index");
static_assert(offsetof(BP_LocalPlayerBannerEditor_C_Increment_Color_Category_Index, CallFunc_Get_Next_Color_Category_Index_ReturnValue) == 0x000000, "Member 'BP_LocalPlayerBannerEditor_C_Increment_Color_Category_Index::CallFunc_Get_Next_Color_Category_Index_ReturnValue' has a wrong offset!");

struct BP_LocalPlayerBannerEditor_C_Increment_Icon_Category_Index final
{
public:
	int32                                         CallFunc_Get_Next_Icon_Category_Index_ReturnValue;
};
static_assert(alignof(BP_LocalPlayerBannerEditor_C_Increment_Icon_Category_Index) == 0x000004, "Wrong alignment on BP_LocalPlayerBannerEditor_C_Increment_Icon_Category_Index");
static_assert(sizeof(BP_LocalPlayerBannerEditor_C_Increment_Icon_Category_Index) == 0x000004, "Wrong size on BP_LocalPlayerBannerEditor_C_Increment_Icon_Category_Index");
static_assert(offsetof(BP_LocalPlayerBannerEditor_C_Increment_Icon_Category_Index, CallFunc_Get_Next_Icon_Category_Index_ReturnValue) == 0x000000, "Member 'BP_LocalPlayerBannerEditor_C_Increment_Icon_Category_Index::CallFunc_Get_Next_Icon_Category_Index_ReturnValue' has a wrong offset!");

struct BP_LocalPlayerBannerEditor_C_IsActiveWidget final
{
public:
	bool                                          IsActivated;
};
static_assert(alignof(BP_LocalPlayerBannerEditor_C_IsActiveWidget) == 0x000001, "Wrong alignment on BP_LocalPlayerBannerEditor_C_IsActiveWidget");
static_assert(sizeof(BP_LocalPlayerBannerEditor_C_IsActiveWidget) == 0x000001, "Wrong size on BP_LocalPlayerBannerEditor_C_IsActiveWidget");
static_assert(offsetof(BP_LocalPlayerBannerEditor_C_IsActiveWidget, IsActivated) == 0x000000, "Member 'BP_LocalPlayerBannerEditor_C_IsActiveWidget::IsActivated' has a wrong offset!");

struct BP_LocalPlayerBannerEditor_C_Navigate_to_Chosen_Color final
{
public:
	class UCommonInputSubsystem*                  CallFunc_GetContext_ReturnValue;
	ECommonInputType                              CallFunc_GetCurrentInputType_ReturnValue;
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;
	uint8                                         Pad_A[0x6];
	class APlayerController*                      CallFunc_GetOwningPlayer_ReturnValue;
	class AFortPlayerController*                  K2Node_DynamicCast_AsFort_Player_Controller;
	bool                                          K2Node_DynamicCast_bSuccess;
	uint8                                         Pad_21[0x7];
	class UFortHomebaseBannerColorItem*           CallFunc_GetBannerColorItemFromRowName_ReturnValue;
};
static_assert(alignof(BP_LocalPlayerBannerEditor_C_Navigate_to_Chosen_Color) == 0x000008, "Wrong alignment on BP_LocalPlayerBannerEditor_C_Navigate_to_Chosen_Color");
static_assert(sizeof(BP_LocalPlayerBannerEditor_C_Navigate_to_Chosen_Color) == 0x000030, "Wrong size on BP_LocalPlayerBannerEditor_C_Navigate_to_Chosen_Color");
static_assert(offsetof(BP_LocalPlayerBannerEditor_C_Navigate_to_Chosen_Color, CallFunc_GetContext_ReturnValue) == 0x000000, "Member 'BP_LocalPlayerBannerEditor_C_Navigate_to_Chosen_Color::CallFunc_GetContext_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_LocalPlayerBannerEditor_C_Navigate_to_Chosen_Color, CallFunc_GetCurrentInputType_ReturnValue) == 0x000008, "Member 'BP_LocalPlayerBannerEditor_C_Navigate_to_Chosen_Color::CallFunc_GetCurrentInputType_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_LocalPlayerBannerEditor_C_Navigate_to_Chosen_Color, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x000009, "Member 'BP_LocalPlayerBannerEditor_C_Navigate_to_Chosen_Color::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_LocalPlayerBannerEditor_C_Navigate_to_Chosen_Color, CallFunc_GetOwningPlayer_ReturnValue) == 0x000010, "Member 'BP_LocalPlayerBannerEditor_C_Navigate_to_Chosen_Color::CallFunc_GetOwningPlayer_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_LocalPlayerBannerEditor_C_Navigate_to_Chosen_Color, K2Node_DynamicCast_AsFort_Player_Controller) == 0x000018, "Member 'BP_LocalPlayerBannerEditor_C_Navigate_to_Chosen_Color::K2Node_DynamicCast_AsFort_Player_Controller' has a wrong offset!");
static_assert(offsetof(BP_LocalPlayerBannerEditor_C_Navigate_to_Chosen_Color, K2Node_DynamicCast_bSuccess) == 0x000020, "Member 'BP_LocalPlayerBannerEditor_C_Navigate_to_Chosen_Color::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BP_LocalPlayerBannerEditor_C_Navigate_to_Chosen_Color, CallFunc_GetBannerColorItemFromRowName_ReturnValue) == 0x000028, "Member 'BP_LocalPlayerBannerEditor_C_Navigate_to_Chosen_Color::CallFunc_GetBannerColorItemFromRowName_ReturnValue' has a wrong offset!");

struct BP_LocalPlayerBannerEditor_C_Navigate_to_Chosen_Icon final
{
public:
	class UCommonInputSubsystem*                  CallFunc_GetContext_ReturnValue;
	ECommonInputType                              CallFunc_GetCurrentInputType_ReturnValue;
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;
	uint8                                         Pad_A[0x6];
	class APlayerController*                      CallFunc_GetOwningPlayer_ReturnValue;
	class AFortPlayerController*                  K2Node_DynamicCast_AsFort_Player_Controller;
	bool                                          K2Node_DynamicCast_bSuccess;
	uint8                                         Pad_21[0x7];
	class UFortHomebaseBannerIconItem*            CallFunc_GetBannerIconItemFromRowName_ReturnValue;
};
static_assert(alignof(BP_LocalPlayerBannerEditor_C_Navigate_to_Chosen_Icon) == 0x000008, "Wrong alignment on BP_LocalPlayerBannerEditor_C_Navigate_to_Chosen_Icon");
static_assert(sizeof(BP_LocalPlayerBannerEditor_C_Navigate_to_Chosen_Icon) == 0x000030, "Wrong size on BP_LocalPlayerBannerEditor_C_Navigate_to_Chosen_Icon");
static_assert(offsetof(BP_LocalPlayerBannerEditor_C_Navigate_to_Chosen_Icon, CallFunc_GetContext_ReturnValue) == 0x000000, "Member 'BP_LocalPlayerBannerEditor_C_Navigate_to_Chosen_Icon::CallFunc_GetContext_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_LocalPlayerBannerEditor_C_Navigate_to_Chosen_Icon, CallFunc_GetCurrentInputType_ReturnValue) == 0x000008, "Member 'BP_LocalPlayerBannerEditor_C_Navigate_to_Chosen_Icon::CallFunc_GetCurrentInputType_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_LocalPlayerBannerEditor_C_Navigate_to_Chosen_Icon, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x000009, "Member 'BP_LocalPlayerBannerEditor_C_Navigate_to_Chosen_Icon::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_LocalPlayerBannerEditor_C_Navigate_to_Chosen_Icon, CallFunc_GetOwningPlayer_ReturnValue) == 0x000010, "Member 'BP_LocalPlayerBannerEditor_C_Navigate_to_Chosen_Icon::CallFunc_GetOwningPlayer_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_LocalPlayerBannerEditor_C_Navigate_to_Chosen_Icon, K2Node_DynamicCast_AsFort_Player_Controller) == 0x000018, "Member 'BP_LocalPlayerBannerEditor_C_Navigate_to_Chosen_Icon::K2Node_DynamicCast_AsFort_Player_Controller' has a wrong offset!");
static_assert(offsetof(BP_LocalPlayerBannerEditor_C_Navigate_to_Chosen_Icon, K2Node_DynamicCast_bSuccess) == 0x000020, "Member 'BP_LocalPlayerBannerEditor_C_Navigate_to_Chosen_Icon::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BP_LocalPlayerBannerEditor_C_Navigate_to_Chosen_Icon, CallFunc_GetBannerIconItemFromRowName_ReturnValue) == 0x000028, "Member 'BP_LocalPlayerBannerEditor_C_Navigate_to_Chosen_Icon::CallFunc_GetBannerIconItemFromRowName_ReturnValue' has a wrong offset!");

struct BP_LocalPlayerBannerEditor_C_Next_Category final
{
public:
	class UCommonInputSubsystem*                  CallFunc_GetContext_ReturnValue;
	ECommonInputType                              CallFunc_GetCurrentInputType_ReturnValue;
	bool                                          CallFunc_NotEqual_ByteByte_ReturnValue;
	bool                                          CallFunc_BooleanOR_ReturnValue;
	uint8                                         Pad_B[0x1];
	class FName                                   CallFunc_Array_Get_Item;
	class FName                                   CallFunc_Array_Get_Item_1;
};
static_assert(alignof(BP_LocalPlayerBannerEditor_C_Next_Category) == 0x000008, "Wrong alignment on BP_LocalPlayerBannerEditor_C_Next_Category");
static_assert(sizeof(BP_LocalPlayerBannerEditor_C_Next_Category) == 0x000018, "Wrong size on BP_LocalPlayerBannerEditor_C_Next_Category");
static_assert(offsetof(BP_LocalPlayerBannerEditor_C_Next_Category, CallFunc_GetContext_ReturnValue) == 0x000000, "Member 'BP_LocalPlayerBannerEditor_C_Next_Category::CallFunc_GetContext_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_LocalPlayerBannerEditor_C_Next_Category, CallFunc_GetCurrentInputType_ReturnValue) == 0x000008, "Member 'BP_LocalPlayerBannerEditor_C_Next_Category::CallFunc_GetCurrentInputType_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_LocalPlayerBannerEditor_C_Next_Category, CallFunc_NotEqual_ByteByte_ReturnValue) == 0x000009, "Member 'BP_LocalPlayerBannerEditor_C_Next_Category::CallFunc_NotEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_LocalPlayerBannerEditor_C_Next_Category, CallFunc_BooleanOR_ReturnValue) == 0x00000A, "Member 'BP_LocalPlayerBannerEditor_C_Next_Category::CallFunc_BooleanOR_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_LocalPlayerBannerEditor_C_Next_Category, CallFunc_Array_Get_Item) == 0x00000C, "Member 'BP_LocalPlayerBannerEditor_C_Next_Category::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(BP_LocalPlayerBannerEditor_C_Next_Category, CallFunc_Array_Get_Item_1) == 0x000010, "Member 'BP_LocalPlayerBannerEditor_C_Next_Category::CallFunc_Array_Get_Item_1' has a wrong offset!");

struct BP_LocalPlayerBannerEditor_C_Previous_Category final
{
public:
	class UCommonInputSubsystem*                  CallFunc_GetContext_ReturnValue;
	ECommonInputType                              CallFunc_GetCurrentInputType_ReturnValue;
	bool                                          CallFunc_NotEqual_ByteByte_ReturnValue;
	bool                                          CallFunc_BooleanOR_ReturnValue;
	uint8                                         Pad_B[0x1];
	class FName                                   CallFunc_Array_Get_Item;
	class FName                                   CallFunc_Array_Get_Item_1;
};
static_assert(alignof(BP_LocalPlayerBannerEditor_C_Previous_Category) == 0x000008, "Wrong alignment on BP_LocalPlayerBannerEditor_C_Previous_Category");
static_assert(sizeof(BP_LocalPlayerBannerEditor_C_Previous_Category) == 0x000018, "Wrong size on BP_LocalPlayerBannerEditor_C_Previous_Category");
static_assert(offsetof(BP_LocalPlayerBannerEditor_C_Previous_Category, CallFunc_GetContext_ReturnValue) == 0x000000, "Member 'BP_LocalPlayerBannerEditor_C_Previous_Category::CallFunc_GetContext_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_LocalPlayerBannerEditor_C_Previous_Category, CallFunc_GetCurrentInputType_ReturnValue) == 0x000008, "Member 'BP_LocalPlayerBannerEditor_C_Previous_Category::CallFunc_GetCurrentInputType_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_LocalPlayerBannerEditor_C_Previous_Category, CallFunc_NotEqual_ByteByte_ReturnValue) == 0x000009, "Member 'BP_LocalPlayerBannerEditor_C_Previous_Category::CallFunc_NotEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_LocalPlayerBannerEditor_C_Previous_Category, CallFunc_BooleanOR_ReturnValue) == 0x00000A, "Member 'BP_LocalPlayerBannerEditor_C_Previous_Category::CallFunc_BooleanOR_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_LocalPlayerBannerEditor_C_Previous_Category, CallFunc_Array_Get_Item) == 0x00000C, "Member 'BP_LocalPlayerBannerEditor_C_Previous_Category::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(BP_LocalPlayerBannerEditor_C_Previous_Category, CallFunc_Array_Get_Item_1) == 0x000010, "Member 'BP_LocalPlayerBannerEditor_C_Previous_Category::CallFunc_Array_Get_Item_1' has a wrong offset!");

struct BP_LocalPlayerBannerEditor_C_Refresh_Apply_Button_State final
{
public:
	class FText                                   DisabledReason;
	bool                                          CallFunc_NotEqual_NameName_ReturnValue;
	bool                                          CallFunc_NotEqual_NameName_ReturnValue_1;
	bool                                          CallFunc_BooleanOR_ReturnValue;
};
static_assert(alignof(BP_LocalPlayerBannerEditor_C_Refresh_Apply_Button_State) == 0x000008, "Wrong alignment on BP_LocalPlayerBannerEditor_C_Refresh_Apply_Button_State");
static_assert(sizeof(BP_LocalPlayerBannerEditor_C_Refresh_Apply_Button_State) == 0x000020, "Wrong size on BP_LocalPlayerBannerEditor_C_Refresh_Apply_Button_State");
static_assert(offsetof(BP_LocalPlayerBannerEditor_C_Refresh_Apply_Button_State, DisabledReason) == 0x000000, "Member 'BP_LocalPlayerBannerEditor_C_Refresh_Apply_Button_State::DisabledReason' has a wrong offset!");
static_assert(offsetof(BP_LocalPlayerBannerEditor_C_Refresh_Apply_Button_State, CallFunc_NotEqual_NameName_ReturnValue) == 0x000018, "Member 'BP_LocalPlayerBannerEditor_C_Refresh_Apply_Button_State::CallFunc_NotEqual_NameName_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_LocalPlayerBannerEditor_C_Refresh_Apply_Button_State, CallFunc_NotEqual_NameName_ReturnValue_1) == 0x000019, "Member 'BP_LocalPlayerBannerEditor_C_Refresh_Apply_Button_State::CallFunc_NotEqual_NameName_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_LocalPlayerBannerEditor_C_Refresh_Apply_Button_State, CallFunc_BooleanOR_ReturnValue) == 0x00001A, "Member 'BP_LocalPlayerBannerEditor_C_Refresh_Apply_Button_State::CallFunc_BooleanOR_ReturnValue' has a wrong offset!");

struct BP_LocalPlayerBannerEditor_C_Reset_Color_Category_Index final
{
public:
	int32                                         CallFunc_Array_Find_ReturnValue;
};
static_assert(alignof(BP_LocalPlayerBannerEditor_C_Reset_Color_Category_Index) == 0x000004, "Wrong alignment on BP_LocalPlayerBannerEditor_C_Reset_Color_Category_Index");
static_assert(sizeof(BP_LocalPlayerBannerEditor_C_Reset_Color_Category_Index) == 0x000004, "Wrong size on BP_LocalPlayerBannerEditor_C_Reset_Color_Category_Index");
static_assert(offsetof(BP_LocalPlayerBannerEditor_C_Reset_Color_Category_Index, CallFunc_Array_Find_ReturnValue) == 0x000000, "Member 'BP_LocalPlayerBannerEditor_C_Reset_Color_Category_Index::CallFunc_Array_Find_ReturnValue' has a wrong offset!");

struct BP_LocalPlayerBannerEditor_C_Reset_Icon_Category_Index final
{
public:
	int32                                         CallFunc_Array_Find_ReturnValue;
};
static_assert(alignof(BP_LocalPlayerBannerEditor_C_Reset_Icon_Category_Index) == 0x000004, "Wrong alignment on BP_LocalPlayerBannerEditor_C_Reset_Icon_Category_Index");
static_assert(sizeof(BP_LocalPlayerBannerEditor_C_Reset_Icon_Category_Index) == 0x000004, "Wrong size on BP_LocalPlayerBannerEditor_C_Reset_Icon_Category_Index");
static_assert(offsetof(BP_LocalPlayerBannerEditor_C_Reset_Icon_Category_Index, CallFunc_Array_Find_ReturnValue) == 0x000000, "Member 'BP_LocalPlayerBannerEditor_C_Reset_Icon_Category_Index::CallFunc_Array_Find_ReturnValue' has a wrong offset!");

struct BP_LocalPlayerBannerEditor_C_Set_Current_Category final
{
public:
	class FName                                   CurrentCategory_0;
	uint8                                         Pad_4[0x4];
	class FText                                   CategoryDisplayName;
	class FText                                   CallFunc_GetBannerColorCategoryName_ReturnValue;
	class FText                                   CallFunc_GetBannerIconCategoryName_ReturnValue;
};
static_assert(alignof(BP_LocalPlayerBannerEditor_C_Set_Current_Category) == 0x000008, "Wrong alignment on BP_LocalPlayerBannerEditor_C_Set_Current_Category");
static_assert(sizeof(BP_LocalPlayerBannerEditor_C_Set_Current_Category) == 0x000050, "Wrong size on BP_LocalPlayerBannerEditor_C_Set_Current_Category");
static_assert(offsetof(BP_LocalPlayerBannerEditor_C_Set_Current_Category, CurrentCategory_0) == 0x000000, "Member 'BP_LocalPlayerBannerEditor_C_Set_Current_Category::CurrentCategory_0' has a wrong offset!");
static_assert(offsetof(BP_LocalPlayerBannerEditor_C_Set_Current_Category, CategoryDisplayName) == 0x000008, "Member 'BP_LocalPlayerBannerEditor_C_Set_Current_Category::CategoryDisplayName' has a wrong offset!");
static_assert(offsetof(BP_LocalPlayerBannerEditor_C_Set_Current_Category, CallFunc_GetBannerColorCategoryName_ReturnValue) == 0x000020, "Member 'BP_LocalPlayerBannerEditor_C_Set_Current_Category::CallFunc_GetBannerColorCategoryName_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_LocalPlayerBannerEditor_C_Set_Current_Category, CallFunc_GetBannerIconCategoryName_ReturnValue) == 0x000038, "Member 'BP_LocalPlayerBannerEditor_C_Set_Current_Category::CallFunc_GetBannerIconCategoryName_ReturnValue' has a wrong offset!");

struct BP_LocalPlayerBannerEditor_C_Set_Picking_Tile_State final
{
public:
	bool                                          bPickingTile_0;
};
static_assert(alignof(BP_LocalPlayerBannerEditor_C_Set_Picking_Tile_State) == 0x000001, "Wrong alignment on BP_LocalPlayerBannerEditor_C_Set_Picking_Tile_State");
static_assert(sizeof(BP_LocalPlayerBannerEditor_C_Set_Picking_Tile_State) == 0x000001, "Wrong size on BP_LocalPlayerBannerEditor_C_Set_Picking_Tile_State");
static_assert(offsetof(BP_LocalPlayerBannerEditor_C_Set_Picking_Tile_State, bPickingTile_0) == 0x000000, "Member 'BP_LocalPlayerBannerEditor_C_Set_Picking_Tile_State::bPickingTile_0' has a wrong offset!");

struct BP_LocalPlayerBannerEditor_C_Setup_Tileview_For_Colorswatches final
{
public:
	class FName                                   CategoryRowName;
	uint8                                         Pad_4[0x4];
	class UObject*                                CallFunc_BP_GetSelectedItem_ReturnValue;
	class APlayerController*                      CallFunc_GetOwningPlayer_ReturnValue;
	class UCommonInputSubsystem*                  CallFunc_GetContext_ReturnValue;
	class AFortPlayerController*                  K2Node_DynamicCast_AsFort_Player_Controller;
	bool                                          K2Node_DynamicCast_bSuccess;
	ECommonInputType                              CallFunc_GetCurrentInputType_ReturnValue;
	uint8                                         Pad_2A[0x6];
	class UFortHomebaseBannerColorItem*           CallFunc_GetBannerColorItemFromRowName_ReturnValue;
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;
	uint8                                         Pad_39[0x7];
	class APlayerController*                      CallFunc_GetOwningPlayer_ReturnValue_1;
	class AFortPlayerController*                  K2Node_DynamicCast_AsFort_Player_Controller_1;
	bool                                          K2Node_DynamicCast_bSuccess_1;
	uint8                                         Pad_51[0x7];
	TArray<class UFortAccountItem*>               CallFunc_GetBannerColorsForCategory_BannerColors;
	bool                                          CallFunc_Array_Contains_ReturnValue;
};
static_assert(alignof(BP_LocalPlayerBannerEditor_C_Setup_Tileview_For_Colorswatches) == 0x000008, "Wrong alignment on BP_LocalPlayerBannerEditor_C_Setup_Tileview_For_Colorswatches");
static_assert(sizeof(BP_LocalPlayerBannerEditor_C_Setup_Tileview_For_Colorswatches) == 0x000070, "Wrong size on BP_LocalPlayerBannerEditor_C_Setup_Tileview_For_Colorswatches");
static_assert(offsetof(BP_LocalPlayerBannerEditor_C_Setup_Tileview_For_Colorswatches, CategoryRowName) == 0x000000, "Member 'BP_LocalPlayerBannerEditor_C_Setup_Tileview_For_Colorswatches::CategoryRowName' has a wrong offset!");
static_assert(offsetof(BP_LocalPlayerBannerEditor_C_Setup_Tileview_For_Colorswatches, CallFunc_BP_GetSelectedItem_ReturnValue) == 0x000008, "Member 'BP_LocalPlayerBannerEditor_C_Setup_Tileview_For_Colorswatches::CallFunc_BP_GetSelectedItem_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_LocalPlayerBannerEditor_C_Setup_Tileview_For_Colorswatches, CallFunc_GetOwningPlayer_ReturnValue) == 0x000010, "Member 'BP_LocalPlayerBannerEditor_C_Setup_Tileview_For_Colorswatches::CallFunc_GetOwningPlayer_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_LocalPlayerBannerEditor_C_Setup_Tileview_For_Colorswatches, CallFunc_GetContext_ReturnValue) == 0x000018, "Member 'BP_LocalPlayerBannerEditor_C_Setup_Tileview_For_Colorswatches::CallFunc_GetContext_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_LocalPlayerBannerEditor_C_Setup_Tileview_For_Colorswatches, K2Node_DynamicCast_AsFort_Player_Controller) == 0x000020, "Member 'BP_LocalPlayerBannerEditor_C_Setup_Tileview_For_Colorswatches::K2Node_DynamicCast_AsFort_Player_Controller' has a wrong offset!");
static_assert(offsetof(BP_LocalPlayerBannerEditor_C_Setup_Tileview_For_Colorswatches, K2Node_DynamicCast_bSuccess) == 0x000028, "Member 'BP_LocalPlayerBannerEditor_C_Setup_Tileview_For_Colorswatches::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BP_LocalPlayerBannerEditor_C_Setup_Tileview_For_Colorswatches, CallFunc_GetCurrentInputType_ReturnValue) == 0x000029, "Member 'BP_LocalPlayerBannerEditor_C_Setup_Tileview_For_Colorswatches::CallFunc_GetCurrentInputType_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_LocalPlayerBannerEditor_C_Setup_Tileview_For_Colorswatches, CallFunc_GetBannerColorItemFromRowName_ReturnValue) == 0x000030, "Member 'BP_LocalPlayerBannerEditor_C_Setup_Tileview_For_Colorswatches::CallFunc_GetBannerColorItemFromRowName_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_LocalPlayerBannerEditor_C_Setup_Tileview_For_Colorswatches, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x000038, "Member 'BP_LocalPlayerBannerEditor_C_Setup_Tileview_For_Colorswatches::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_LocalPlayerBannerEditor_C_Setup_Tileview_For_Colorswatches, CallFunc_GetOwningPlayer_ReturnValue_1) == 0x000040, "Member 'BP_LocalPlayerBannerEditor_C_Setup_Tileview_For_Colorswatches::CallFunc_GetOwningPlayer_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_LocalPlayerBannerEditor_C_Setup_Tileview_For_Colorswatches, K2Node_DynamicCast_AsFort_Player_Controller_1) == 0x000048, "Member 'BP_LocalPlayerBannerEditor_C_Setup_Tileview_For_Colorswatches::K2Node_DynamicCast_AsFort_Player_Controller_1' has a wrong offset!");
static_assert(offsetof(BP_LocalPlayerBannerEditor_C_Setup_Tileview_For_Colorswatches, K2Node_DynamicCast_bSuccess_1) == 0x000050, "Member 'BP_LocalPlayerBannerEditor_C_Setup_Tileview_For_Colorswatches::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(BP_LocalPlayerBannerEditor_C_Setup_Tileview_For_Colorswatches, CallFunc_GetBannerColorsForCategory_BannerColors) == 0x000058, "Member 'BP_LocalPlayerBannerEditor_C_Setup_Tileview_For_Colorswatches::CallFunc_GetBannerColorsForCategory_BannerColors' has a wrong offset!");
static_assert(offsetof(BP_LocalPlayerBannerEditor_C_Setup_Tileview_For_Colorswatches, CallFunc_Array_Contains_ReturnValue) == 0x000068, "Member 'BP_LocalPlayerBannerEditor_C_Setup_Tileview_For_Colorswatches::CallFunc_Array_Contains_ReturnValue' has a wrong offset!");

struct BP_LocalPlayerBannerEditor_C_Setup_Tileview_For_Icons final
{
public:
	class FName                                   CategoryRowName;
	uint8                                         Pad_4[0x4];
	class UCommonInputSubsystem*                  CallFunc_GetContext_ReturnValue;
	class UObject*                                CallFunc_BP_GetSelectedItem_ReturnValue;
	ECommonInputType                              CallFunc_GetCurrentInputType_ReturnValue;
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;
	uint8                                         Pad_1A[0x6];
	class APlayerController*                      CallFunc_GetOwningPlayer_ReturnValue;
	class APlayerController*                      CallFunc_GetOwningPlayer_ReturnValue_1;
	class AFortPlayerController*                  K2Node_DynamicCast_AsFort_Player_Controller;
	bool                                          K2Node_DynamicCast_bSuccess;
	uint8                                         Pad_39[0x7];
	class AFortPlayerController*                  K2Node_DynamicCast_AsFort_Player_Controller_1;
	bool                                          K2Node_DynamicCast_bSuccess_1;
	uint8                                         Pad_49[0x7];
	class UFortHomebaseBannerIconItem*            CallFunc_GetBannerIconItemFromRowName_ReturnValue;
	TArray<class UFortAccountItem*>               CallFunc_GetBannerIconsForCategory_BannerIcons;
	bool                                          CallFunc_Array_Contains_ReturnValue;
};
static_assert(alignof(BP_LocalPlayerBannerEditor_C_Setup_Tileview_For_Icons) == 0x000008, "Wrong alignment on BP_LocalPlayerBannerEditor_C_Setup_Tileview_For_Icons");
static_assert(sizeof(BP_LocalPlayerBannerEditor_C_Setup_Tileview_For_Icons) == 0x000070, "Wrong size on BP_LocalPlayerBannerEditor_C_Setup_Tileview_For_Icons");
static_assert(offsetof(BP_LocalPlayerBannerEditor_C_Setup_Tileview_For_Icons, CategoryRowName) == 0x000000, "Member 'BP_LocalPlayerBannerEditor_C_Setup_Tileview_For_Icons::CategoryRowName' has a wrong offset!");
static_assert(offsetof(BP_LocalPlayerBannerEditor_C_Setup_Tileview_For_Icons, CallFunc_GetContext_ReturnValue) == 0x000008, "Member 'BP_LocalPlayerBannerEditor_C_Setup_Tileview_For_Icons::CallFunc_GetContext_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_LocalPlayerBannerEditor_C_Setup_Tileview_For_Icons, CallFunc_BP_GetSelectedItem_ReturnValue) == 0x000010, "Member 'BP_LocalPlayerBannerEditor_C_Setup_Tileview_For_Icons::CallFunc_BP_GetSelectedItem_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_LocalPlayerBannerEditor_C_Setup_Tileview_For_Icons, CallFunc_GetCurrentInputType_ReturnValue) == 0x000018, "Member 'BP_LocalPlayerBannerEditor_C_Setup_Tileview_For_Icons::CallFunc_GetCurrentInputType_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_LocalPlayerBannerEditor_C_Setup_Tileview_For_Icons, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x000019, "Member 'BP_LocalPlayerBannerEditor_C_Setup_Tileview_For_Icons::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_LocalPlayerBannerEditor_C_Setup_Tileview_For_Icons, CallFunc_GetOwningPlayer_ReturnValue) == 0x000020, "Member 'BP_LocalPlayerBannerEditor_C_Setup_Tileview_For_Icons::CallFunc_GetOwningPlayer_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_LocalPlayerBannerEditor_C_Setup_Tileview_For_Icons, CallFunc_GetOwningPlayer_ReturnValue_1) == 0x000028, "Member 'BP_LocalPlayerBannerEditor_C_Setup_Tileview_For_Icons::CallFunc_GetOwningPlayer_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_LocalPlayerBannerEditor_C_Setup_Tileview_For_Icons, K2Node_DynamicCast_AsFort_Player_Controller) == 0x000030, "Member 'BP_LocalPlayerBannerEditor_C_Setup_Tileview_For_Icons::K2Node_DynamicCast_AsFort_Player_Controller' has a wrong offset!");
static_assert(offsetof(BP_LocalPlayerBannerEditor_C_Setup_Tileview_For_Icons, K2Node_DynamicCast_bSuccess) == 0x000038, "Member 'BP_LocalPlayerBannerEditor_C_Setup_Tileview_For_Icons::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BP_LocalPlayerBannerEditor_C_Setup_Tileview_For_Icons, K2Node_DynamicCast_AsFort_Player_Controller_1) == 0x000040, "Member 'BP_LocalPlayerBannerEditor_C_Setup_Tileview_For_Icons::K2Node_DynamicCast_AsFort_Player_Controller_1' has a wrong offset!");
static_assert(offsetof(BP_LocalPlayerBannerEditor_C_Setup_Tileview_For_Icons, K2Node_DynamicCast_bSuccess_1) == 0x000048, "Member 'BP_LocalPlayerBannerEditor_C_Setup_Tileview_For_Icons::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(BP_LocalPlayerBannerEditor_C_Setup_Tileview_For_Icons, CallFunc_GetBannerIconItemFromRowName_ReturnValue) == 0x000050, "Member 'BP_LocalPlayerBannerEditor_C_Setup_Tileview_For_Icons::CallFunc_GetBannerIconItemFromRowName_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_LocalPlayerBannerEditor_C_Setup_Tileview_For_Icons, CallFunc_GetBannerIconsForCategory_BannerIcons) == 0x000058, "Member 'BP_LocalPlayerBannerEditor_C_Setup_Tileview_For_Icons::CallFunc_GetBannerIconsForCategory_BannerIcons' has a wrong offset!");
static_assert(offsetof(BP_LocalPlayerBannerEditor_C_Setup_Tileview_For_Icons, CallFunc_Array_Contains_ReturnValue) == 0x000068, "Member 'BP_LocalPlayerBannerEditor_C_Setup_Tileview_For_Icons::CallFunc_Array_Contains_ReturnValue' has a wrong offset!");

struct BP_LocalPlayerBannerEditor_C_Update_Banner_Color_Tileview final
{
public:
	class FName                                   CurrentCategory_0;
};
static_assert(alignof(BP_LocalPlayerBannerEditor_C_Update_Banner_Color_Tileview) == 0x000004, "Wrong alignment on BP_LocalPlayerBannerEditor_C_Update_Banner_Color_Tileview");
static_assert(sizeof(BP_LocalPlayerBannerEditor_C_Update_Banner_Color_Tileview) == 0x000004, "Wrong size on BP_LocalPlayerBannerEditor_C_Update_Banner_Color_Tileview");
static_assert(offsetof(BP_LocalPlayerBannerEditor_C_Update_Banner_Color_Tileview, CurrentCategory_0) == 0x000000, "Member 'BP_LocalPlayerBannerEditor_C_Update_Banner_Color_Tileview::CurrentCategory_0' has a wrong offset!");

struct BP_LocalPlayerBannerEditor_C_Update_Banner_Icon_Tileview final
{
public:
	class FName                                   CurrentCategory_0;
};
static_assert(alignof(BP_LocalPlayerBannerEditor_C_Update_Banner_Icon_Tileview) == 0x000004, "Wrong alignment on BP_LocalPlayerBannerEditor_C_Update_Banner_Icon_Tileview");
static_assert(sizeof(BP_LocalPlayerBannerEditor_C_Update_Banner_Icon_Tileview) == 0x000004, "Wrong size on BP_LocalPlayerBannerEditor_C_Update_Banner_Icon_Tileview");
static_assert(offsetof(BP_LocalPlayerBannerEditor_C_Update_Banner_Icon_Tileview, CurrentCategory_0) == 0x000000, "Member 'BP_LocalPlayerBannerEditor_C_Update_Banner_Icon_Tileview::CurrentCategory_0' has a wrong offset!");

struct BP_LocalPlayerBannerEditor_C_Update_Category_Navigation_Visibility final
{
public:
	ESlateVisibility                              LocalVisibility;
	bool                                          Temp_bool_Variable;
	ESlateVisibility                              Temp_byte_Variable;
	ESlateVisibility                              Temp_byte_Variable_1;
	bool                                          Temp_bool_Variable_1;
	uint8                                         Pad_5[0x3];
	class UCommonInputSubsystem*                  CallFunc_GetContext_ReturnValue;
	ECommonInputType                              CallFunc_GetCurrentInputType_ReturnValue;
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;
	uint8                                         Pad_12[0x6];
	TArray<class FName>                           K2Node_Select_Default;
	int32                                         CallFunc_Array_Length_ReturnValue;
	bool                                          CallFunc_Greater_IntInt_ReturnValue;
	ESlateVisibility                              K2Node_Select_Default_1;
};
static_assert(alignof(BP_LocalPlayerBannerEditor_C_Update_Category_Navigation_Visibility) == 0x000008, "Wrong alignment on BP_LocalPlayerBannerEditor_C_Update_Category_Navigation_Visibility");
static_assert(sizeof(BP_LocalPlayerBannerEditor_C_Update_Category_Navigation_Visibility) == 0x000030, "Wrong size on BP_LocalPlayerBannerEditor_C_Update_Category_Navigation_Visibility");
static_assert(offsetof(BP_LocalPlayerBannerEditor_C_Update_Category_Navigation_Visibility, LocalVisibility) == 0x000000, "Member 'BP_LocalPlayerBannerEditor_C_Update_Category_Navigation_Visibility::LocalVisibility' has a wrong offset!");
static_assert(offsetof(BP_LocalPlayerBannerEditor_C_Update_Category_Navigation_Visibility, Temp_bool_Variable) == 0x000001, "Member 'BP_LocalPlayerBannerEditor_C_Update_Category_Navigation_Visibility::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(BP_LocalPlayerBannerEditor_C_Update_Category_Navigation_Visibility, Temp_byte_Variable) == 0x000002, "Member 'BP_LocalPlayerBannerEditor_C_Update_Category_Navigation_Visibility::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(BP_LocalPlayerBannerEditor_C_Update_Category_Navigation_Visibility, Temp_byte_Variable_1) == 0x000003, "Member 'BP_LocalPlayerBannerEditor_C_Update_Category_Navigation_Visibility::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(BP_LocalPlayerBannerEditor_C_Update_Category_Navigation_Visibility, Temp_bool_Variable_1) == 0x000004, "Member 'BP_LocalPlayerBannerEditor_C_Update_Category_Navigation_Visibility::Temp_bool_Variable_1' has a wrong offset!");
static_assert(offsetof(BP_LocalPlayerBannerEditor_C_Update_Category_Navigation_Visibility, CallFunc_GetContext_ReturnValue) == 0x000008, "Member 'BP_LocalPlayerBannerEditor_C_Update_Category_Navigation_Visibility::CallFunc_GetContext_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_LocalPlayerBannerEditor_C_Update_Category_Navigation_Visibility, CallFunc_GetCurrentInputType_ReturnValue) == 0x000010, "Member 'BP_LocalPlayerBannerEditor_C_Update_Category_Navigation_Visibility::CallFunc_GetCurrentInputType_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_LocalPlayerBannerEditor_C_Update_Category_Navigation_Visibility, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x000011, "Member 'BP_LocalPlayerBannerEditor_C_Update_Category_Navigation_Visibility::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_LocalPlayerBannerEditor_C_Update_Category_Navigation_Visibility, K2Node_Select_Default) == 0x000018, "Member 'BP_LocalPlayerBannerEditor_C_Update_Category_Navigation_Visibility::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(BP_LocalPlayerBannerEditor_C_Update_Category_Navigation_Visibility, CallFunc_Array_Length_ReturnValue) == 0x000028, "Member 'BP_LocalPlayerBannerEditor_C_Update_Category_Navigation_Visibility::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_LocalPlayerBannerEditor_C_Update_Category_Navigation_Visibility, CallFunc_Greater_IntInt_ReturnValue) == 0x00002C, "Member 'BP_LocalPlayerBannerEditor_C_Update_Category_Navigation_Visibility::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_LocalPlayerBannerEditor_C_Update_Category_Navigation_Visibility, K2Node_Select_Default_1) == 0x00002D, "Member 'BP_LocalPlayerBannerEditor_C_Update_Category_Navigation_Visibility::K2Node_Select_Default_1' has a wrong offset!");

struct BP_LocalPlayerBannerEditor_C_Update_Color_Button_Bang_State final
{
public:
	bool                                          bUnseen;
	bool                                          Temp_bool_True_if_break_was_hit_Variable;
	uint8                                         Pad_2[0x2];
	int32                                         Temp_int_Array_Index_Variable;
	bool                                          CallFunc_Not_PreBool_ReturnValue;
	uint8                                         Pad_9[0x3];
	int32                                         Temp_int_Loop_Counter_Variable;
	int32                                         CallFunc_Add_IntInt_ReturnValue;
	uint8                                         Pad_14[0x4];
	class UFortInventoryContext*                  CallFunc_GetContext_ReturnValue;
	TArray<class UFortAccountItem*>               CallFunc_GetAccountItemsByType_Items;
	int32                                         CallFunc_Array_Length_ReturnValue;
	uint8                                         Pad_34[0x4];
	class UFortAccountItem*                       CallFunc_Array_Get_Item;
	bool                                          CallFunc_Less_IntInt_ReturnValue;
	bool                                          CallFunc_HasBeenSeenLocally_ReturnValue;
	bool                                          CallFunc_BooleanAND_ReturnValue;
	bool                                          CallFunc_Not_PreBool_ReturnValue_1;
};
static_assert(alignof(BP_LocalPlayerBannerEditor_C_Update_Color_Button_Bang_State) == 0x000008, "Wrong alignment on BP_LocalPlayerBannerEditor_C_Update_Color_Button_Bang_State");
static_assert(sizeof(BP_LocalPlayerBannerEditor_C_Update_Color_Button_Bang_State) == 0x000048, "Wrong size on BP_LocalPlayerBannerEditor_C_Update_Color_Button_Bang_State");
static_assert(offsetof(BP_LocalPlayerBannerEditor_C_Update_Color_Button_Bang_State, bUnseen) == 0x000000, "Member 'BP_LocalPlayerBannerEditor_C_Update_Color_Button_Bang_State::bUnseen' has a wrong offset!");
static_assert(offsetof(BP_LocalPlayerBannerEditor_C_Update_Color_Button_Bang_State, Temp_bool_True_if_break_was_hit_Variable) == 0x000001, "Member 'BP_LocalPlayerBannerEditor_C_Update_Color_Button_Bang_State::Temp_bool_True_if_break_was_hit_Variable' has a wrong offset!");
static_assert(offsetof(BP_LocalPlayerBannerEditor_C_Update_Color_Button_Bang_State, Temp_int_Array_Index_Variable) == 0x000004, "Member 'BP_LocalPlayerBannerEditor_C_Update_Color_Button_Bang_State::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(BP_LocalPlayerBannerEditor_C_Update_Color_Button_Bang_State, CallFunc_Not_PreBool_ReturnValue) == 0x000008, "Member 'BP_LocalPlayerBannerEditor_C_Update_Color_Button_Bang_State::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_LocalPlayerBannerEditor_C_Update_Color_Button_Bang_State, Temp_int_Loop_Counter_Variable) == 0x00000C, "Member 'BP_LocalPlayerBannerEditor_C_Update_Color_Button_Bang_State::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(BP_LocalPlayerBannerEditor_C_Update_Color_Button_Bang_State, CallFunc_Add_IntInt_ReturnValue) == 0x000010, "Member 'BP_LocalPlayerBannerEditor_C_Update_Color_Button_Bang_State::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_LocalPlayerBannerEditor_C_Update_Color_Button_Bang_State, CallFunc_GetContext_ReturnValue) == 0x000018, "Member 'BP_LocalPlayerBannerEditor_C_Update_Color_Button_Bang_State::CallFunc_GetContext_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_LocalPlayerBannerEditor_C_Update_Color_Button_Bang_State, CallFunc_GetAccountItemsByType_Items) == 0x000020, "Member 'BP_LocalPlayerBannerEditor_C_Update_Color_Button_Bang_State::CallFunc_GetAccountItemsByType_Items' has a wrong offset!");
static_assert(offsetof(BP_LocalPlayerBannerEditor_C_Update_Color_Button_Bang_State, CallFunc_Array_Length_ReturnValue) == 0x000030, "Member 'BP_LocalPlayerBannerEditor_C_Update_Color_Button_Bang_State::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_LocalPlayerBannerEditor_C_Update_Color_Button_Bang_State, CallFunc_Array_Get_Item) == 0x000038, "Member 'BP_LocalPlayerBannerEditor_C_Update_Color_Button_Bang_State::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(BP_LocalPlayerBannerEditor_C_Update_Color_Button_Bang_State, CallFunc_Less_IntInt_ReturnValue) == 0x000040, "Member 'BP_LocalPlayerBannerEditor_C_Update_Color_Button_Bang_State::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_LocalPlayerBannerEditor_C_Update_Color_Button_Bang_State, CallFunc_HasBeenSeenLocally_ReturnValue) == 0x000041, "Member 'BP_LocalPlayerBannerEditor_C_Update_Color_Button_Bang_State::CallFunc_HasBeenSeenLocally_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_LocalPlayerBannerEditor_C_Update_Color_Button_Bang_State, CallFunc_BooleanAND_ReturnValue) == 0x000042, "Member 'BP_LocalPlayerBannerEditor_C_Update_Color_Button_Bang_State::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_LocalPlayerBannerEditor_C_Update_Color_Button_Bang_State, CallFunc_Not_PreBool_ReturnValue_1) == 0x000043, "Member 'BP_LocalPlayerBannerEditor_C_Update_Color_Button_Bang_State::CallFunc_Not_PreBool_ReturnValue_1' has a wrong offset!");

struct BP_LocalPlayerBannerEditor_C_Update_Icon_Button_Bang_State final
{
public:
	bool                                          bUnseen;
	bool                                          Temp_bool_True_if_break_was_hit_Variable;
	uint8                                         Pad_2[0x2];
	int32                                         Temp_int_Array_Index_Variable;
	bool                                          CallFunc_Not_PreBool_ReturnValue;
	uint8                                         Pad_9[0x3];
	int32                                         Temp_int_Loop_Counter_Variable;
	int32                                         CallFunc_Add_IntInt_ReturnValue;
	uint8                                         Pad_14[0x4];
	class UFortInventoryContext*                  CallFunc_GetContext_ReturnValue;
	TArray<class UFortAccountItem*>               CallFunc_GetAccountItemsByType_Items;
	int32                                         CallFunc_Array_Length_ReturnValue;
	uint8                                         Pad_34[0x4];
	class UFortAccountItem*                       CallFunc_Array_Get_Item;
	bool                                          CallFunc_Less_IntInt_ReturnValue;
	bool                                          CallFunc_HasBeenSeenLocally_ReturnValue;
	bool                                          CallFunc_BooleanAND_ReturnValue;
	bool                                          CallFunc_Not_PreBool_ReturnValue_1;
};
static_assert(alignof(BP_LocalPlayerBannerEditor_C_Update_Icon_Button_Bang_State) == 0x000008, "Wrong alignment on BP_LocalPlayerBannerEditor_C_Update_Icon_Button_Bang_State");
static_assert(sizeof(BP_LocalPlayerBannerEditor_C_Update_Icon_Button_Bang_State) == 0x000048, "Wrong size on BP_LocalPlayerBannerEditor_C_Update_Icon_Button_Bang_State");
static_assert(offsetof(BP_LocalPlayerBannerEditor_C_Update_Icon_Button_Bang_State, bUnseen) == 0x000000, "Member 'BP_LocalPlayerBannerEditor_C_Update_Icon_Button_Bang_State::bUnseen' has a wrong offset!");
static_assert(offsetof(BP_LocalPlayerBannerEditor_C_Update_Icon_Button_Bang_State, Temp_bool_True_if_break_was_hit_Variable) == 0x000001, "Member 'BP_LocalPlayerBannerEditor_C_Update_Icon_Button_Bang_State::Temp_bool_True_if_break_was_hit_Variable' has a wrong offset!");
static_assert(offsetof(BP_LocalPlayerBannerEditor_C_Update_Icon_Button_Bang_State, Temp_int_Array_Index_Variable) == 0x000004, "Member 'BP_LocalPlayerBannerEditor_C_Update_Icon_Button_Bang_State::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(BP_LocalPlayerBannerEditor_C_Update_Icon_Button_Bang_State, CallFunc_Not_PreBool_ReturnValue) == 0x000008, "Member 'BP_LocalPlayerBannerEditor_C_Update_Icon_Button_Bang_State::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_LocalPlayerBannerEditor_C_Update_Icon_Button_Bang_State, Temp_int_Loop_Counter_Variable) == 0x00000C, "Member 'BP_LocalPlayerBannerEditor_C_Update_Icon_Button_Bang_State::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(BP_LocalPlayerBannerEditor_C_Update_Icon_Button_Bang_State, CallFunc_Add_IntInt_ReturnValue) == 0x000010, "Member 'BP_LocalPlayerBannerEditor_C_Update_Icon_Button_Bang_State::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_LocalPlayerBannerEditor_C_Update_Icon_Button_Bang_State, CallFunc_GetContext_ReturnValue) == 0x000018, "Member 'BP_LocalPlayerBannerEditor_C_Update_Icon_Button_Bang_State::CallFunc_GetContext_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_LocalPlayerBannerEditor_C_Update_Icon_Button_Bang_State, CallFunc_GetAccountItemsByType_Items) == 0x000020, "Member 'BP_LocalPlayerBannerEditor_C_Update_Icon_Button_Bang_State::CallFunc_GetAccountItemsByType_Items' has a wrong offset!");
static_assert(offsetof(BP_LocalPlayerBannerEditor_C_Update_Icon_Button_Bang_State, CallFunc_Array_Length_ReturnValue) == 0x000030, "Member 'BP_LocalPlayerBannerEditor_C_Update_Icon_Button_Bang_State::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_LocalPlayerBannerEditor_C_Update_Icon_Button_Bang_State, CallFunc_Array_Get_Item) == 0x000038, "Member 'BP_LocalPlayerBannerEditor_C_Update_Icon_Button_Bang_State::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(BP_LocalPlayerBannerEditor_C_Update_Icon_Button_Bang_State, CallFunc_Less_IntInt_ReturnValue) == 0x000040, "Member 'BP_LocalPlayerBannerEditor_C_Update_Icon_Button_Bang_State::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_LocalPlayerBannerEditor_C_Update_Icon_Button_Bang_State, CallFunc_HasBeenSeenLocally_ReturnValue) == 0x000041, "Member 'BP_LocalPlayerBannerEditor_C_Update_Icon_Button_Bang_State::CallFunc_HasBeenSeenLocally_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_LocalPlayerBannerEditor_C_Update_Icon_Button_Bang_State, CallFunc_BooleanAND_ReturnValue) == 0x000042, "Member 'BP_LocalPlayerBannerEditor_C_Update_Icon_Button_Bang_State::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_LocalPlayerBannerEditor_C_Update_Icon_Button_Bang_State, CallFunc_Not_PreBool_ReturnValue_1) == 0x000043, "Member 'BP_LocalPlayerBannerEditor_C_Update_Icon_Button_Bang_State::CallFunc_Not_PreBool_ReturnValue_1' has a wrong offset!");

struct BP_LocalPlayerBannerEditor_C_Update_Left_Color_Category_Button_Bang_State final
{
public:
	int32                                         PrevIndex;
	bool                                          bUnseen;
	bool                                          Temp_bool_True_if_break_was_hit_Variable;
	uint8                                         Pad_6[0x2];
	int32                                         Temp_int_Array_Index_Variable;
	bool                                          CallFunc_Not_PreBool_ReturnValue;
	uint8                                         Pad_D[0x3];
	int32                                         Temp_int_Loop_Counter_Variable;
	int32                                         CallFunc_Add_IntInt_ReturnValue;
	int32                                         CallFunc_Get_Prev_Color_Category_Index_ReturnValue;
	class FName                                   CallFunc_Array_Get_Item;
	class APlayerController*                      CallFunc_GetOwningPlayer_ReturnValue;
	class AFortPlayerController*                  K2Node_DynamicCast_AsFort_Player_Controller;
	bool                                          K2Node_DynamicCast_bSuccess;
	uint8                                         Pad_31[0x7];
	TArray<class UFortAccountItem*>               CallFunc_GetBannerColorsForCategory_BannerColors;
	class UFortAccountItem*                       CallFunc_Array_Get_Item_1;
	int32                                         CallFunc_Array_Length_ReturnValue;
	bool                                          CallFunc_HasBeenSeenLocally_ReturnValue;
	bool                                          CallFunc_Less_IntInt_ReturnValue;
	bool                                          CallFunc_Not_PreBool_ReturnValue_1;
	bool                                          CallFunc_BooleanAND_ReturnValue;
	bool                                          CallFunc_NotEqual_IntInt_ReturnValue;
};
static_assert(alignof(BP_LocalPlayerBannerEditor_C_Update_Left_Color_Category_Button_Bang_State) == 0x000008, "Wrong alignment on BP_LocalPlayerBannerEditor_C_Update_Left_Color_Category_Button_Bang_State");
static_assert(sizeof(BP_LocalPlayerBannerEditor_C_Update_Left_Color_Category_Button_Bang_State) == 0x000060, "Wrong size on BP_LocalPlayerBannerEditor_C_Update_Left_Color_Category_Button_Bang_State");
static_assert(offsetof(BP_LocalPlayerBannerEditor_C_Update_Left_Color_Category_Button_Bang_State, PrevIndex) == 0x000000, "Member 'BP_LocalPlayerBannerEditor_C_Update_Left_Color_Category_Button_Bang_State::PrevIndex' has a wrong offset!");
static_assert(offsetof(BP_LocalPlayerBannerEditor_C_Update_Left_Color_Category_Button_Bang_State, bUnseen) == 0x000004, "Member 'BP_LocalPlayerBannerEditor_C_Update_Left_Color_Category_Button_Bang_State::bUnseen' has a wrong offset!");
static_assert(offsetof(BP_LocalPlayerBannerEditor_C_Update_Left_Color_Category_Button_Bang_State, Temp_bool_True_if_break_was_hit_Variable) == 0x000005, "Member 'BP_LocalPlayerBannerEditor_C_Update_Left_Color_Category_Button_Bang_State::Temp_bool_True_if_break_was_hit_Variable' has a wrong offset!");
static_assert(offsetof(BP_LocalPlayerBannerEditor_C_Update_Left_Color_Category_Button_Bang_State, Temp_int_Array_Index_Variable) == 0x000008, "Member 'BP_LocalPlayerBannerEditor_C_Update_Left_Color_Category_Button_Bang_State::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(BP_LocalPlayerBannerEditor_C_Update_Left_Color_Category_Button_Bang_State, CallFunc_Not_PreBool_ReturnValue) == 0x00000C, "Member 'BP_LocalPlayerBannerEditor_C_Update_Left_Color_Category_Button_Bang_State::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_LocalPlayerBannerEditor_C_Update_Left_Color_Category_Button_Bang_State, Temp_int_Loop_Counter_Variable) == 0x000010, "Member 'BP_LocalPlayerBannerEditor_C_Update_Left_Color_Category_Button_Bang_State::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(BP_LocalPlayerBannerEditor_C_Update_Left_Color_Category_Button_Bang_State, CallFunc_Add_IntInt_ReturnValue) == 0x000014, "Member 'BP_LocalPlayerBannerEditor_C_Update_Left_Color_Category_Button_Bang_State::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_LocalPlayerBannerEditor_C_Update_Left_Color_Category_Button_Bang_State, CallFunc_Get_Prev_Color_Category_Index_ReturnValue) == 0x000018, "Member 'BP_LocalPlayerBannerEditor_C_Update_Left_Color_Category_Button_Bang_State::CallFunc_Get_Prev_Color_Category_Index_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_LocalPlayerBannerEditor_C_Update_Left_Color_Category_Button_Bang_State, CallFunc_Array_Get_Item) == 0x00001C, "Member 'BP_LocalPlayerBannerEditor_C_Update_Left_Color_Category_Button_Bang_State::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(BP_LocalPlayerBannerEditor_C_Update_Left_Color_Category_Button_Bang_State, CallFunc_GetOwningPlayer_ReturnValue) == 0x000020, "Member 'BP_LocalPlayerBannerEditor_C_Update_Left_Color_Category_Button_Bang_State::CallFunc_GetOwningPlayer_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_LocalPlayerBannerEditor_C_Update_Left_Color_Category_Button_Bang_State, K2Node_DynamicCast_AsFort_Player_Controller) == 0x000028, "Member 'BP_LocalPlayerBannerEditor_C_Update_Left_Color_Category_Button_Bang_State::K2Node_DynamicCast_AsFort_Player_Controller' has a wrong offset!");
static_assert(offsetof(BP_LocalPlayerBannerEditor_C_Update_Left_Color_Category_Button_Bang_State, K2Node_DynamicCast_bSuccess) == 0x000030, "Member 'BP_LocalPlayerBannerEditor_C_Update_Left_Color_Category_Button_Bang_State::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BP_LocalPlayerBannerEditor_C_Update_Left_Color_Category_Button_Bang_State, CallFunc_GetBannerColorsForCategory_BannerColors) == 0x000038, "Member 'BP_LocalPlayerBannerEditor_C_Update_Left_Color_Category_Button_Bang_State::CallFunc_GetBannerColorsForCategory_BannerColors' has a wrong offset!");
static_assert(offsetof(BP_LocalPlayerBannerEditor_C_Update_Left_Color_Category_Button_Bang_State, CallFunc_Array_Get_Item_1) == 0x000048, "Member 'BP_LocalPlayerBannerEditor_C_Update_Left_Color_Category_Button_Bang_State::CallFunc_Array_Get_Item_1' has a wrong offset!");
static_assert(offsetof(BP_LocalPlayerBannerEditor_C_Update_Left_Color_Category_Button_Bang_State, CallFunc_Array_Length_ReturnValue) == 0x000050, "Member 'BP_LocalPlayerBannerEditor_C_Update_Left_Color_Category_Button_Bang_State::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_LocalPlayerBannerEditor_C_Update_Left_Color_Category_Button_Bang_State, CallFunc_HasBeenSeenLocally_ReturnValue) == 0x000054, "Member 'BP_LocalPlayerBannerEditor_C_Update_Left_Color_Category_Button_Bang_State::CallFunc_HasBeenSeenLocally_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_LocalPlayerBannerEditor_C_Update_Left_Color_Category_Button_Bang_State, CallFunc_Less_IntInt_ReturnValue) == 0x000055, "Member 'BP_LocalPlayerBannerEditor_C_Update_Left_Color_Category_Button_Bang_State::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_LocalPlayerBannerEditor_C_Update_Left_Color_Category_Button_Bang_State, CallFunc_Not_PreBool_ReturnValue_1) == 0x000056, "Member 'BP_LocalPlayerBannerEditor_C_Update_Left_Color_Category_Button_Bang_State::CallFunc_Not_PreBool_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_LocalPlayerBannerEditor_C_Update_Left_Color_Category_Button_Bang_State, CallFunc_BooleanAND_ReturnValue) == 0x000057, "Member 'BP_LocalPlayerBannerEditor_C_Update_Left_Color_Category_Button_Bang_State::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_LocalPlayerBannerEditor_C_Update_Left_Color_Category_Button_Bang_State, CallFunc_NotEqual_IntInt_ReturnValue) == 0x000058, "Member 'BP_LocalPlayerBannerEditor_C_Update_Left_Color_Category_Button_Bang_State::CallFunc_NotEqual_IntInt_ReturnValue' has a wrong offset!");

struct BP_LocalPlayerBannerEditor_C_Update_Left_Icon_Category_Button_Bang_State final
{
public:
	int32                                         PrevIndex;
	bool                                          bUnseen;
	bool                                          Temp_bool_True_if_break_was_hit_Variable;
	uint8                                         Pad_6[0x2];
	int32                                         Temp_int_Array_Index_Variable;
	bool                                          CallFunc_Not_PreBool_ReturnValue;
	uint8                                         Pad_D[0x3];
	int32                                         Temp_int_Loop_Counter_Variable;
	int32                                         CallFunc_Add_IntInt_ReturnValue;
	int32                                         CallFunc_Get_Prev_Icon_Category_Index_ReturnValue;
	class FName                                   CallFunc_Array_Get_Item;
	class APlayerController*                      CallFunc_GetOwningPlayer_ReturnValue;
	class AFortPlayerController*                  K2Node_DynamicCast_AsFort_Player_Controller;
	bool                                          K2Node_DynamicCast_bSuccess;
	uint8                                         Pad_31[0x7];
	TArray<class UFortAccountItem*>               CallFunc_GetBannerIconsForCategory_BannerIcons;
	class UFortAccountItem*                       CallFunc_Array_Get_Item_1;
	int32                                         CallFunc_Array_Length_ReturnValue;
	bool                                          CallFunc_HasBeenSeenLocally_ReturnValue;
	bool                                          CallFunc_Less_IntInt_ReturnValue;
	bool                                          CallFunc_Not_PreBool_ReturnValue_1;
	bool                                          CallFunc_BooleanAND_ReturnValue;
	bool                                          CallFunc_NotEqual_IntInt_ReturnValue;
};
static_assert(alignof(BP_LocalPlayerBannerEditor_C_Update_Left_Icon_Category_Button_Bang_State) == 0x000008, "Wrong alignment on BP_LocalPlayerBannerEditor_C_Update_Left_Icon_Category_Button_Bang_State");
static_assert(sizeof(BP_LocalPlayerBannerEditor_C_Update_Left_Icon_Category_Button_Bang_State) == 0x000060, "Wrong size on BP_LocalPlayerBannerEditor_C_Update_Left_Icon_Category_Button_Bang_State");
static_assert(offsetof(BP_LocalPlayerBannerEditor_C_Update_Left_Icon_Category_Button_Bang_State, PrevIndex) == 0x000000, "Member 'BP_LocalPlayerBannerEditor_C_Update_Left_Icon_Category_Button_Bang_State::PrevIndex' has a wrong offset!");
static_assert(offsetof(BP_LocalPlayerBannerEditor_C_Update_Left_Icon_Category_Button_Bang_State, bUnseen) == 0x000004, "Member 'BP_LocalPlayerBannerEditor_C_Update_Left_Icon_Category_Button_Bang_State::bUnseen' has a wrong offset!");
static_assert(offsetof(BP_LocalPlayerBannerEditor_C_Update_Left_Icon_Category_Button_Bang_State, Temp_bool_True_if_break_was_hit_Variable) == 0x000005, "Member 'BP_LocalPlayerBannerEditor_C_Update_Left_Icon_Category_Button_Bang_State::Temp_bool_True_if_break_was_hit_Variable' has a wrong offset!");
static_assert(offsetof(BP_LocalPlayerBannerEditor_C_Update_Left_Icon_Category_Button_Bang_State, Temp_int_Array_Index_Variable) == 0x000008, "Member 'BP_LocalPlayerBannerEditor_C_Update_Left_Icon_Category_Button_Bang_State::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(BP_LocalPlayerBannerEditor_C_Update_Left_Icon_Category_Button_Bang_State, CallFunc_Not_PreBool_ReturnValue) == 0x00000C, "Member 'BP_LocalPlayerBannerEditor_C_Update_Left_Icon_Category_Button_Bang_State::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_LocalPlayerBannerEditor_C_Update_Left_Icon_Category_Button_Bang_State, Temp_int_Loop_Counter_Variable) == 0x000010, "Member 'BP_LocalPlayerBannerEditor_C_Update_Left_Icon_Category_Button_Bang_State::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(BP_LocalPlayerBannerEditor_C_Update_Left_Icon_Category_Button_Bang_State, CallFunc_Add_IntInt_ReturnValue) == 0x000014, "Member 'BP_LocalPlayerBannerEditor_C_Update_Left_Icon_Category_Button_Bang_State::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_LocalPlayerBannerEditor_C_Update_Left_Icon_Category_Button_Bang_State, CallFunc_Get_Prev_Icon_Category_Index_ReturnValue) == 0x000018, "Member 'BP_LocalPlayerBannerEditor_C_Update_Left_Icon_Category_Button_Bang_State::CallFunc_Get_Prev_Icon_Category_Index_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_LocalPlayerBannerEditor_C_Update_Left_Icon_Category_Button_Bang_State, CallFunc_Array_Get_Item) == 0x00001C, "Member 'BP_LocalPlayerBannerEditor_C_Update_Left_Icon_Category_Button_Bang_State::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(BP_LocalPlayerBannerEditor_C_Update_Left_Icon_Category_Button_Bang_State, CallFunc_GetOwningPlayer_ReturnValue) == 0x000020, "Member 'BP_LocalPlayerBannerEditor_C_Update_Left_Icon_Category_Button_Bang_State::CallFunc_GetOwningPlayer_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_LocalPlayerBannerEditor_C_Update_Left_Icon_Category_Button_Bang_State, K2Node_DynamicCast_AsFort_Player_Controller) == 0x000028, "Member 'BP_LocalPlayerBannerEditor_C_Update_Left_Icon_Category_Button_Bang_State::K2Node_DynamicCast_AsFort_Player_Controller' has a wrong offset!");
static_assert(offsetof(BP_LocalPlayerBannerEditor_C_Update_Left_Icon_Category_Button_Bang_State, K2Node_DynamicCast_bSuccess) == 0x000030, "Member 'BP_LocalPlayerBannerEditor_C_Update_Left_Icon_Category_Button_Bang_State::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BP_LocalPlayerBannerEditor_C_Update_Left_Icon_Category_Button_Bang_State, CallFunc_GetBannerIconsForCategory_BannerIcons) == 0x000038, "Member 'BP_LocalPlayerBannerEditor_C_Update_Left_Icon_Category_Button_Bang_State::CallFunc_GetBannerIconsForCategory_BannerIcons' has a wrong offset!");
static_assert(offsetof(BP_LocalPlayerBannerEditor_C_Update_Left_Icon_Category_Button_Bang_State, CallFunc_Array_Get_Item_1) == 0x000048, "Member 'BP_LocalPlayerBannerEditor_C_Update_Left_Icon_Category_Button_Bang_State::CallFunc_Array_Get_Item_1' has a wrong offset!");
static_assert(offsetof(BP_LocalPlayerBannerEditor_C_Update_Left_Icon_Category_Button_Bang_State, CallFunc_Array_Length_ReturnValue) == 0x000050, "Member 'BP_LocalPlayerBannerEditor_C_Update_Left_Icon_Category_Button_Bang_State::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_LocalPlayerBannerEditor_C_Update_Left_Icon_Category_Button_Bang_State, CallFunc_HasBeenSeenLocally_ReturnValue) == 0x000054, "Member 'BP_LocalPlayerBannerEditor_C_Update_Left_Icon_Category_Button_Bang_State::CallFunc_HasBeenSeenLocally_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_LocalPlayerBannerEditor_C_Update_Left_Icon_Category_Button_Bang_State, CallFunc_Less_IntInt_ReturnValue) == 0x000055, "Member 'BP_LocalPlayerBannerEditor_C_Update_Left_Icon_Category_Button_Bang_State::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_LocalPlayerBannerEditor_C_Update_Left_Icon_Category_Button_Bang_State, CallFunc_Not_PreBool_ReturnValue_1) == 0x000056, "Member 'BP_LocalPlayerBannerEditor_C_Update_Left_Icon_Category_Button_Bang_State::CallFunc_Not_PreBool_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_LocalPlayerBannerEditor_C_Update_Left_Icon_Category_Button_Bang_State, CallFunc_BooleanAND_ReturnValue) == 0x000057, "Member 'BP_LocalPlayerBannerEditor_C_Update_Left_Icon_Category_Button_Bang_State::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_LocalPlayerBannerEditor_C_Update_Left_Icon_Category_Button_Bang_State, CallFunc_NotEqual_IntInt_ReturnValue) == 0x000058, "Member 'BP_LocalPlayerBannerEditor_C_Update_Left_Icon_Category_Button_Bang_State::CallFunc_NotEqual_IntInt_ReturnValue' has a wrong offset!");

struct BP_LocalPlayerBannerEditor_C_Update_Right_Color_Category_Button_Bang_State final
{
public:
	int32                                         NextIndex;
	bool                                          bUnseen;
	bool                                          Temp_bool_True_if_break_was_hit_Variable;
	uint8                                         Pad_6[0x2];
	int32                                         Temp_int_Array_Index_Variable;
	bool                                          CallFunc_Not_PreBool_ReturnValue;
	uint8                                         Pad_D[0x3];
	int32                                         Temp_int_Loop_Counter_Variable;
	int32                                         CallFunc_Add_IntInt_ReturnValue;
	int32                                         CallFunc_Get_Next_Color_Category_Index_ReturnValue;
	class FName                                   CallFunc_Array_Get_Item;
	class APlayerController*                      CallFunc_GetOwningPlayer_ReturnValue;
	class AFortPlayerController*                  K2Node_DynamicCast_AsFort_Player_Controller;
	bool                                          K2Node_DynamicCast_bSuccess;
	uint8                                         Pad_31[0x7];
	TArray<class UFortAccountItem*>               CallFunc_GetBannerColorsForCategory_BannerColors;
	class UFortAccountItem*                       CallFunc_Array_Get_Item_1;
	bool                                          CallFunc_NotEqual_IntInt_ReturnValue;
	bool                                          CallFunc_HasBeenSeenLocally_ReturnValue;
	bool                                          CallFunc_Not_PreBool_ReturnValue_1;
	uint8                                         Pad_53[0x1];
	int32                                         CallFunc_Array_Length_ReturnValue;
	bool                                          CallFunc_Less_IntInt_ReturnValue;
	bool                                          CallFunc_BooleanAND_ReturnValue;
};
static_assert(alignof(BP_LocalPlayerBannerEditor_C_Update_Right_Color_Category_Button_Bang_State) == 0x000008, "Wrong alignment on BP_LocalPlayerBannerEditor_C_Update_Right_Color_Category_Button_Bang_State");
static_assert(sizeof(BP_LocalPlayerBannerEditor_C_Update_Right_Color_Category_Button_Bang_State) == 0x000060, "Wrong size on BP_LocalPlayerBannerEditor_C_Update_Right_Color_Category_Button_Bang_State");
static_assert(offsetof(BP_LocalPlayerBannerEditor_C_Update_Right_Color_Category_Button_Bang_State, NextIndex) == 0x000000, "Member 'BP_LocalPlayerBannerEditor_C_Update_Right_Color_Category_Button_Bang_State::NextIndex' has a wrong offset!");
static_assert(offsetof(BP_LocalPlayerBannerEditor_C_Update_Right_Color_Category_Button_Bang_State, bUnseen) == 0x000004, "Member 'BP_LocalPlayerBannerEditor_C_Update_Right_Color_Category_Button_Bang_State::bUnseen' has a wrong offset!");
static_assert(offsetof(BP_LocalPlayerBannerEditor_C_Update_Right_Color_Category_Button_Bang_State, Temp_bool_True_if_break_was_hit_Variable) == 0x000005, "Member 'BP_LocalPlayerBannerEditor_C_Update_Right_Color_Category_Button_Bang_State::Temp_bool_True_if_break_was_hit_Variable' has a wrong offset!");
static_assert(offsetof(BP_LocalPlayerBannerEditor_C_Update_Right_Color_Category_Button_Bang_State, Temp_int_Array_Index_Variable) == 0x000008, "Member 'BP_LocalPlayerBannerEditor_C_Update_Right_Color_Category_Button_Bang_State::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(BP_LocalPlayerBannerEditor_C_Update_Right_Color_Category_Button_Bang_State, CallFunc_Not_PreBool_ReturnValue) == 0x00000C, "Member 'BP_LocalPlayerBannerEditor_C_Update_Right_Color_Category_Button_Bang_State::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_LocalPlayerBannerEditor_C_Update_Right_Color_Category_Button_Bang_State, Temp_int_Loop_Counter_Variable) == 0x000010, "Member 'BP_LocalPlayerBannerEditor_C_Update_Right_Color_Category_Button_Bang_State::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(BP_LocalPlayerBannerEditor_C_Update_Right_Color_Category_Button_Bang_State, CallFunc_Add_IntInt_ReturnValue) == 0x000014, "Member 'BP_LocalPlayerBannerEditor_C_Update_Right_Color_Category_Button_Bang_State::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_LocalPlayerBannerEditor_C_Update_Right_Color_Category_Button_Bang_State, CallFunc_Get_Next_Color_Category_Index_ReturnValue) == 0x000018, "Member 'BP_LocalPlayerBannerEditor_C_Update_Right_Color_Category_Button_Bang_State::CallFunc_Get_Next_Color_Category_Index_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_LocalPlayerBannerEditor_C_Update_Right_Color_Category_Button_Bang_State, CallFunc_Array_Get_Item) == 0x00001C, "Member 'BP_LocalPlayerBannerEditor_C_Update_Right_Color_Category_Button_Bang_State::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(BP_LocalPlayerBannerEditor_C_Update_Right_Color_Category_Button_Bang_State, CallFunc_GetOwningPlayer_ReturnValue) == 0x000020, "Member 'BP_LocalPlayerBannerEditor_C_Update_Right_Color_Category_Button_Bang_State::CallFunc_GetOwningPlayer_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_LocalPlayerBannerEditor_C_Update_Right_Color_Category_Button_Bang_State, K2Node_DynamicCast_AsFort_Player_Controller) == 0x000028, "Member 'BP_LocalPlayerBannerEditor_C_Update_Right_Color_Category_Button_Bang_State::K2Node_DynamicCast_AsFort_Player_Controller' has a wrong offset!");
static_assert(offsetof(BP_LocalPlayerBannerEditor_C_Update_Right_Color_Category_Button_Bang_State, K2Node_DynamicCast_bSuccess) == 0x000030, "Member 'BP_LocalPlayerBannerEditor_C_Update_Right_Color_Category_Button_Bang_State::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BP_LocalPlayerBannerEditor_C_Update_Right_Color_Category_Button_Bang_State, CallFunc_GetBannerColorsForCategory_BannerColors) == 0x000038, "Member 'BP_LocalPlayerBannerEditor_C_Update_Right_Color_Category_Button_Bang_State::CallFunc_GetBannerColorsForCategory_BannerColors' has a wrong offset!");
static_assert(offsetof(BP_LocalPlayerBannerEditor_C_Update_Right_Color_Category_Button_Bang_State, CallFunc_Array_Get_Item_1) == 0x000048, "Member 'BP_LocalPlayerBannerEditor_C_Update_Right_Color_Category_Button_Bang_State::CallFunc_Array_Get_Item_1' has a wrong offset!");
static_assert(offsetof(BP_LocalPlayerBannerEditor_C_Update_Right_Color_Category_Button_Bang_State, CallFunc_NotEqual_IntInt_ReturnValue) == 0x000050, "Member 'BP_LocalPlayerBannerEditor_C_Update_Right_Color_Category_Button_Bang_State::CallFunc_NotEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_LocalPlayerBannerEditor_C_Update_Right_Color_Category_Button_Bang_State, CallFunc_HasBeenSeenLocally_ReturnValue) == 0x000051, "Member 'BP_LocalPlayerBannerEditor_C_Update_Right_Color_Category_Button_Bang_State::CallFunc_HasBeenSeenLocally_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_LocalPlayerBannerEditor_C_Update_Right_Color_Category_Button_Bang_State, CallFunc_Not_PreBool_ReturnValue_1) == 0x000052, "Member 'BP_LocalPlayerBannerEditor_C_Update_Right_Color_Category_Button_Bang_State::CallFunc_Not_PreBool_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_LocalPlayerBannerEditor_C_Update_Right_Color_Category_Button_Bang_State, CallFunc_Array_Length_ReturnValue) == 0x000054, "Member 'BP_LocalPlayerBannerEditor_C_Update_Right_Color_Category_Button_Bang_State::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_LocalPlayerBannerEditor_C_Update_Right_Color_Category_Button_Bang_State, CallFunc_Less_IntInt_ReturnValue) == 0x000058, "Member 'BP_LocalPlayerBannerEditor_C_Update_Right_Color_Category_Button_Bang_State::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_LocalPlayerBannerEditor_C_Update_Right_Color_Category_Button_Bang_State, CallFunc_BooleanAND_ReturnValue) == 0x000059, "Member 'BP_LocalPlayerBannerEditor_C_Update_Right_Color_Category_Button_Bang_State::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");

struct BP_LocalPlayerBannerEditor_C_Update_Right_Icon_Category_Button_Bang_State final
{
public:
	int32                                         NextIndex;
	bool                                          bUnseen;
	bool                                          Temp_bool_True_if_break_was_hit_Variable;
	uint8                                         Pad_6[0x2];
	int32                                         Temp_int_Array_Index_Variable;
	bool                                          CallFunc_Not_PreBool_ReturnValue;
	uint8                                         Pad_D[0x3];
	int32                                         Temp_int_Loop_Counter_Variable;
	int32                                         CallFunc_Add_IntInt_ReturnValue;
	int32                                         CallFunc_Get_Next_Icon_Category_Index_ReturnValue;
	uint8                                         Pad_1C[0x4];
	class APlayerController*                      CallFunc_GetOwningPlayer_ReturnValue;
	class FName                                   CallFunc_Array_Get_Item;
	uint8                                         Pad_2C[0x4];
	class AFortPlayerController*                  K2Node_DynamicCast_AsFort_Player_Controller;
	bool                                          K2Node_DynamicCast_bSuccess;
	uint8                                         Pad_39[0x7];
	TArray<class UFortAccountItem*>               CallFunc_GetBannerIconsForCategory_BannerIcons;
	class UFortAccountItem*                       CallFunc_Array_Get_Item_1;
	int32                                         CallFunc_Array_Length_ReturnValue;
	bool                                          CallFunc_HasBeenSeenLocally_ReturnValue;
	bool                                          CallFunc_Less_IntInt_ReturnValue;
	bool                                          CallFunc_Not_PreBool_ReturnValue_1;
	bool                                          CallFunc_BooleanAND_ReturnValue;
	bool                                          CallFunc_NotEqual_IntInt_ReturnValue;
};
static_assert(alignof(BP_LocalPlayerBannerEditor_C_Update_Right_Icon_Category_Button_Bang_State) == 0x000008, "Wrong alignment on BP_LocalPlayerBannerEditor_C_Update_Right_Icon_Category_Button_Bang_State");
static_assert(sizeof(BP_LocalPlayerBannerEditor_C_Update_Right_Icon_Category_Button_Bang_State) == 0x000068, "Wrong size on BP_LocalPlayerBannerEditor_C_Update_Right_Icon_Category_Button_Bang_State");
static_assert(offsetof(BP_LocalPlayerBannerEditor_C_Update_Right_Icon_Category_Button_Bang_State, NextIndex) == 0x000000, "Member 'BP_LocalPlayerBannerEditor_C_Update_Right_Icon_Category_Button_Bang_State::NextIndex' has a wrong offset!");
static_assert(offsetof(BP_LocalPlayerBannerEditor_C_Update_Right_Icon_Category_Button_Bang_State, bUnseen) == 0x000004, "Member 'BP_LocalPlayerBannerEditor_C_Update_Right_Icon_Category_Button_Bang_State::bUnseen' has a wrong offset!");
static_assert(offsetof(BP_LocalPlayerBannerEditor_C_Update_Right_Icon_Category_Button_Bang_State, Temp_bool_True_if_break_was_hit_Variable) == 0x000005, "Member 'BP_LocalPlayerBannerEditor_C_Update_Right_Icon_Category_Button_Bang_State::Temp_bool_True_if_break_was_hit_Variable' has a wrong offset!");
static_assert(offsetof(BP_LocalPlayerBannerEditor_C_Update_Right_Icon_Category_Button_Bang_State, Temp_int_Array_Index_Variable) == 0x000008, "Member 'BP_LocalPlayerBannerEditor_C_Update_Right_Icon_Category_Button_Bang_State::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(BP_LocalPlayerBannerEditor_C_Update_Right_Icon_Category_Button_Bang_State, CallFunc_Not_PreBool_ReturnValue) == 0x00000C, "Member 'BP_LocalPlayerBannerEditor_C_Update_Right_Icon_Category_Button_Bang_State::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_LocalPlayerBannerEditor_C_Update_Right_Icon_Category_Button_Bang_State, Temp_int_Loop_Counter_Variable) == 0x000010, "Member 'BP_LocalPlayerBannerEditor_C_Update_Right_Icon_Category_Button_Bang_State::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(BP_LocalPlayerBannerEditor_C_Update_Right_Icon_Category_Button_Bang_State, CallFunc_Add_IntInt_ReturnValue) == 0x000014, "Member 'BP_LocalPlayerBannerEditor_C_Update_Right_Icon_Category_Button_Bang_State::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_LocalPlayerBannerEditor_C_Update_Right_Icon_Category_Button_Bang_State, CallFunc_Get_Next_Icon_Category_Index_ReturnValue) == 0x000018, "Member 'BP_LocalPlayerBannerEditor_C_Update_Right_Icon_Category_Button_Bang_State::CallFunc_Get_Next_Icon_Category_Index_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_LocalPlayerBannerEditor_C_Update_Right_Icon_Category_Button_Bang_State, CallFunc_GetOwningPlayer_ReturnValue) == 0x000020, "Member 'BP_LocalPlayerBannerEditor_C_Update_Right_Icon_Category_Button_Bang_State::CallFunc_GetOwningPlayer_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_LocalPlayerBannerEditor_C_Update_Right_Icon_Category_Button_Bang_State, CallFunc_Array_Get_Item) == 0x000028, "Member 'BP_LocalPlayerBannerEditor_C_Update_Right_Icon_Category_Button_Bang_State::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(BP_LocalPlayerBannerEditor_C_Update_Right_Icon_Category_Button_Bang_State, K2Node_DynamicCast_AsFort_Player_Controller) == 0x000030, "Member 'BP_LocalPlayerBannerEditor_C_Update_Right_Icon_Category_Button_Bang_State::K2Node_DynamicCast_AsFort_Player_Controller' has a wrong offset!");
static_assert(offsetof(BP_LocalPlayerBannerEditor_C_Update_Right_Icon_Category_Button_Bang_State, K2Node_DynamicCast_bSuccess) == 0x000038, "Member 'BP_LocalPlayerBannerEditor_C_Update_Right_Icon_Category_Button_Bang_State::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BP_LocalPlayerBannerEditor_C_Update_Right_Icon_Category_Button_Bang_State, CallFunc_GetBannerIconsForCategory_BannerIcons) == 0x000040, "Member 'BP_LocalPlayerBannerEditor_C_Update_Right_Icon_Category_Button_Bang_State::CallFunc_GetBannerIconsForCategory_BannerIcons' has a wrong offset!");
static_assert(offsetof(BP_LocalPlayerBannerEditor_C_Update_Right_Icon_Category_Button_Bang_State, CallFunc_Array_Get_Item_1) == 0x000050, "Member 'BP_LocalPlayerBannerEditor_C_Update_Right_Icon_Category_Button_Bang_State::CallFunc_Array_Get_Item_1' has a wrong offset!");
static_assert(offsetof(BP_LocalPlayerBannerEditor_C_Update_Right_Icon_Category_Button_Bang_State, CallFunc_Array_Length_ReturnValue) == 0x000058, "Member 'BP_LocalPlayerBannerEditor_C_Update_Right_Icon_Category_Button_Bang_State::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_LocalPlayerBannerEditor_C_Update_Right_Icon_Category_Button_Bang_State, CallFunc_HasBeenSeenLocally_ReturnValue) == 0x00005C, "Member 'BP_LocalPlayerBannerEditor_C_Update_Right_Icon_Category_Button_Bang_State::CallFunc_HasBeenSeenLocally_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_LocalPlayerBannerEditor_C_Update_Right_Icon_Category_Button_Bang_State, CallFunc_Less_IntInt_ReturnValue) == 0x00005D, "Member 'BP_LocalPlayerBannerEditor_C_Update_Right_Icon_Category_Button_Bang_State::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_LocalPlayerBannerEditor_C_Update_Right_Icon_Category_Button_Bang_State, CallFunc_Not_PreBool_ReturnValue_1) == 0x00005E, "Member 'BP_LocalPlayerBannerEditor_C_Update_Right_Icon_Category_Button_Bang_State::CallFunc_Not_PreBool_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_LocalPlayerBannerEditor_C_Update_Right_Icon_Category_Button_Bang_State, CallFunc_BooleanAND_ReturnValue) == 0x00005F, "Member 'BP_LocalPlayerBannerEditor_C_Update_Right_Icon_Category_Button_Bang_State::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_LocalPlayerBannerEditor_C_Update_Right_Icon_Category_Button_Bang_State, CallFunc_NotEqual_IntInt_ReturnValue) == 0x000060, "Member 'BP_LocalPlayerBannerEditor_C_Update_Right_Icon_Category_Button_Bang_State::CallFunc_NotEqual_IntInt_ReturnValue' has a wrong offset!");

struct BP_LocalPlayerBannerEditor_C_Update_Temp_State_On_Item_Selected final
{
public:
	class UObject*                                Item;
	class UFortHomebaseBannerColorItem*           K2Node_DynamicCast_AsFort_Homebase_Banner_Color_Item;
	bool                                          K2Node_DynamicCast_bSuccess;
	uint8                                         Pad_11[0x7];
	class UFortHomebaseBannerIconItem*            K2Node_DynamicCast_AsFort_Homebase_Banner_Icon_Item;
	bool                                          K2Node_DynamicCast_bSuccess_1;
	uint8                                         Pad_21[0x3];
	class FName                                   CallFunc_GetRowNameForBannerColorItem_ReturnValue;
	class FName                                   CallFunc_GetRowNameForBannerIconItem_ReturnValue;
};
static_assert(alignof(BP_LocalPlayerBannerEditor_C_Update_Temp_State_On_Item_Selected) == 0x000008, "Wrong alignment on BP_LocalPlayerBannerEditor_C_Update_Temp_State_On_Item_Selected");
static_assert(sizeof(BP_LocalPlayerBannerEditor_C_Update_Temp_State_On_Item_Selected) == 0x000030, "Wrong size on BP_LocalPlayerBannerEditor_C_Update_Temp_State_On_Item_Selected");
static_assert(offsetof(BP_LocalPlayerBannerEditor_C_Update_Temp_State_On_Item_Selected, Item) == 0x000000, "Member 'BP_LocalPlayerBannerEditor_C_Update_Temp_State_On_Item_Selected::Item' has a wrong offset!");
static_assert(offsetof(BP_LocalPlayerBannerEditor_C_Update_Temp_State_On_Item_Selected, K2Node_DynamicCast_AsFort_Homebase_Banner_Color_Item) == 0x000008, "Member 'BP_LocalPlayerBannerEditor_C_Update_Temp_State_On_Item_Selected::K2Node_DynamicCast_AsFort_Homebase_Banner_Color_Item' has a wrong offset!");
static_assert(offsetof(BP_LocalPlayerBannerEditor_C_Update_Temp_State_On_Item_Selected, K2Node_DynamicCast_bSuccess) == 0x000010, "Member 'BP_LocalPlayerBannerEditor_C_Update_Temp_State_On_Item_Selected::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BP_LocalPlayerBannerEditor_C_Update_Temp_State_On_Item_Selected, K2Node_DynamicCast_AsFort_Homebase_Banner_Icon_Item) == 0x000018, "Member 'BP_LocalPlayerBannerEditor_C_Update_Temp_State_On_Item_Selected::K2Node_DynamicCast_AsFort_Homebase_Banner_Icon_Item' has a wrong offset!");
static_assert(offsetof(BP_LocalPlayerBannerEditor_C_Update_Temp_State_On_Item_Selected, K2Node_DynamicCast_bSuccess_1) == 0x000020, "Member 'BP_LocalPlayerBannerEditor_C_Update_Temp_State_On_Item_Selected::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(BP_LocalPlayerBannerEditor_C_Update_Temp_State_On_Item_Selected, CallFunc_GetRowNameForBannerColorItem_ReturnValue) == 0x000024, "Member 'BP_LocalPlayerBannerEditor_C_Update_Temp_State_On_Item_Selected::CallFunc_GetRowNameForBannerColorItem_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_LocalPlayerBannerEditor_C_Update_Temp_State_On_Item_Selected, CallFunc_GetRowNameForBannerIconItem_ReturnValue) == 0x000028, "Member 'BP_LocalPlayerBannerEditor_C_Update_Temp_State_On_Item_Selected::CallFunc_GetRowNameForBannerIconItem_ReturnValue' has a wrong offset!");

}
