#pragma once

#include "Basic.hpp"

#include "FortniteUI_structs.hpp"
#include "CommonInput_structs.hpp"
#include "UMG_structs.hpp"

namespace SDK::Params
{

struct MiniPartyBar_C_BndEvt__ButtonLocalPlayer_K2Node_ComponentBoundEvent_81_CommonButtonClicked__DelegateSignature final
{
public:
	class UCommonButtonLegacy*                    Button;
};
static_assert(alignof(MiniPartyBar_C_BndEvt__ButtonLocalPlayer_K2Node_ComponentBoundEvent_81_CommonButtonClicked__DelegateSignature) == 0x000008, "Wrong alignment on MiniPartyBar_C_BndEvt__ButtonLocalPlayer_K2Node_ComponentBoundEvent_81_CommonButtonClicked__DelegateSignature");
static_assert(sizeof(MiniPartyBar_C_BndEvt__ButtonLocalPlayer_K2Node_ComponentBoundEvent_81_CommonButtonClicked__DelegateSignature) == 0x000008, "Wrong size on MiniPartyBar_C_BndEvt__ButtonLocalPlayer_K2Node_ComponentBoundEvent_81_CommonButtonClicked__DelegateSignature");
static_assert(offsetof(MiniPartyBar_C_BndEvt__ButtonLocalPlayer_K2Node_ComponentBoundEvent_81_CommonButtonClicked__DelegateSignature, Button) == 0x000000, "Member 'MiniPartyBar_C_BndEvt__ButtonLocalPlayer_K2Node_ComponentBoundEvent_81_CommonButtonClicked__DelegateSignature::Button' has a wrong offset!");

struct MiniPartyBar_C_ExecuteUbergraph_MiniPartyBar final
{
public:
	int32                                         EntryPoint;
	int32                                         Temp_int_Array_Index_Variable;
	bool                                          CallFunc_IsActivated_ReturnValue;
	uint8                                         Pad_9[0x7];
	class UCommonButtonLegacy*                    K2Node_ComponentBoundEvent_Button;
	class APlayerController*                      CallFunc_GetOwningPlayer_ReturnValue;
	bool                                          CallFunc_IsValid_ReturnValue;
	uint8                                         Pad_21[0x7];
	class UTeamMemberManage_C*                    CallFunc_Create_ReturnValue;
	int32                                         Temp_int_Loop_Counter_Variable;
	int32                                         CallFunc_Add_IntInt_ReturnValue;
	class UFortUIDataConfigurationContext*        CallFunc_GetContext_ReturnValue;
	bool                                          CallFunc_ArePartyFeaturesEnabled_ReturnValue;
	uint8                                         Pad_41[0x7];
	TArray<class UWidget*>                        K2Node_MakeArray_Array;
	class UWidget*                                CallFunc_Array_Get_Item;
	int32                                         CallFunc_Array_Length_ReturnValue;
	bool                                          CallFunc_Less_IntInt_ReturnValue;
};
static_assert(alignof(MiniPartyBar_C_ExecuteUbergraph_MiniPartyBar) == 0x000008, "Wrong alignment on MiniPartyBar_C_ExecuteUbergraph_MiniPartyBar");
static_assert(sizeof(MiniPartyBar_C_ExecuteUbergraph_MiniPartyBar) == 0x000068, "Wrong size on MiniPartyBar_C_ExecuteUbergraph_MiniPartyBar");
static_assert(offsetof(MiniPartyBar_C_ExecuteUbergraph_MiniPartyBar, EntryPoint) == 0x000000, "Member 'MiniPartyBar_C_ExecuteUbergraph_MiniPartyBar::EntryPoint' has a wrong offset!");
static_assert(offsetof(MiniPartyBar_C_ExecuteUbergraph_MiniPartyBar, Temp_int_Array_Index_Variable) == 0x000004, "Member 'MiniPartyBar_C_ExecuteUbergraph_MiniPartyBar::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(MiniPartyBar_C_ExecuteUbergraph_MiniPartyBar, CallFunc_IsActivated_ReturnValue) == 0x000008, "Member 'MiniPartyBar_C_ExecuteUbergraph_MiniPartyBar::CallFunc_IsActivated_ReturnValue' has a wrong offset!");
static_assert(offsetof(MiniPartyBar_C_ExecuteUbergraph_MiniPartyBar, K2Node_ComponentBoundEvent_Button) == 0x000010, "Member 'MiniPartyBar_C_ExecuteUbergraph_MiniPartyBar::K2Node_ComponentBoundEvent_Button' has a wrong offset!");
static_assert(offsetof(MiniPartyBar_C_ExecuteUbergraph_MiniPartyBar, CallFunc_GetOwningPlayer_ReturnValue) == 0x000018, "Member 'MiniPartyBar_C_ExecuteUbergraph_MiniPartyBar::CallFunc_GetOwningPlayer_ReturnValue' has a wrong offset!");
static_assert(offsetof(MiniPartyBar_C_ExecuteUbergraph_MiniPartyBar, CallFunc_IsValid_ReturnValue) == 0x000020, "Member 'MiniPartyBar_C_ExecuteUbergraph_MiniPartyBar::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(MiniPartyBar_C_ExecuteUbergraph_MiniPartyBar, CallFunc_Create_ReturnValue) == 0x000028, "Member 'MiniPartyBar_C_ExecuteUbergraph_MiniPartyBar::CallFunc_Create_ReturnValue' has a wrong offset!");
static_assert(offsetof(MiniPartyBar_C_ExecuteUbergraph_MiniPartyBar, Temp_int_Loop_Counter_Variable) == 0x000030, "Member 'MiniPartyBar_C_ExecuteUbergraph_MiniPartyBar::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(MiniPartyBar_C_ExecuteUbergraph_MiniPartyBar, CallFunc_Add_IntInt_ReturnValue) == 0x000034, "Member 'MiniPartyBar_C_ExecuteUbergraph_MiniPartyBar::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(MiniPartyBar_C_ExecuteUbergraph_MiniPartyBar, CallFunc_GetContext_ReturnValue) == 0x000038, "Member 'MiniPartyBar_C_ExecuteUbergraph_MiniPartyBar::CallFunc_GetContext_ReturnValue' has a wrong offset!");
static_assert(offsetof(MiniPartyBar_C_ExecuteUbergraph_MiniPartyBar, CallFunc_ArePartyFeaturesEnabled_ReturnValue) == 0x000040, "Member 'MiniPartyBar_C_ExecuteUbergraph_MiniPartyBar::CallFunc_ArePartyFeaturesEnabled_ReturnValue' has a wrong offset!");
static_assert(offsetof(MiniPartyBar_C_ExecuteUbergraph_MiniPartyBar, K2Node_MakeArray_Array) == 0x000048, "Member 'MiniPartyBar_C_ExecuteUbergraph_MiniPartyBar::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(MiniPartyBar_C_ExecuteUbergraph_MiniPartyBar, CallFunc_Array_Get_Item) == 0x000058, "Member 'MiniPartyBar_C_ExecuteUbergraph_MiniPartyBar::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(MiniPartyBar_C_ExecuteUbergraph_MiniPartyBar, CallFunc_Array_Length_ReturnValue) == 0x000060, "Member 'MiniPartyBar_C_ExecuteUbergraph_MiniPartyBar::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(MiniPartyBar_C_ExecuteUbergraph_MiniPartyBar, CallFunc_Less_IntInt_ReturnValue) == 0x000064, "Member 'MiniPartyBar_C_ExecuteUbergraph_MiniPartyBar::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");

struct MiniPartyBar_C_Get_Banners_Tooltip_Widget final
{
public:
	class UWidget*                                ReturnValue;
	class UCommonInputSubsystem*                  CallFunc_GetContext_ReturnValue;
	class APlayerController*                      CallFunc_GetOwningPlayer_ReturnValue;
	ECommonInputType                              CallFunc_GetCurrentInputType_ReturnValue;
	uint8                                         Pad_19[0x7];
	class FText                                   CallFunc_MakeLiteralText_ReturnValue;
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;
	uint8                                         Pad_39[0x7];
	class FText                                   CallFunc_MakeLiteralText_ReturnValue_1;
	class UUserWidget*                            CallFunc_Create_Basic_Tooltip_Output;
};
static_assert(alignof(MiniPartyBar_C_Get_Banners_Tooltip_Widget) == 0x000008, "Wrong alignment on MiniPartyBar_C_Get_Banners_Tooltip_Widget");
static_assert(sizeof(MiniPartyBar_C_Get_Banners_Tooltip_Widget) == 0x000060, "Wrong size on MiniPartyBar_C_Get_Banners_Tooltip_Widget");
static_assert(offsetof(MiniPartyBar_C_Get_Banners_Tooltip_Widget, ReturnValue) == 0x000000, "Member 'MiniPartyBar_C_Get_Banners_Tooltip_Widget::ReturnValue' has a wrong offset!");
static_assert(offsetof(MiniPartyBar_C_Get_Banners_Tooltip_Widget, CallFunc_GetContext_ReturnValue) == 0x000008, "Member 'MiniPartyBar_C_Get_Banners_Tooltip_Widget::CallFunc_GetContext_ReturnValue' has a wrong offset!");
static_assert(offsetof(MiniPartyBar_C_Get_Banners_Tooltip_Widget, CallFunc_GetOwningPlayer_ReturnValue) == 0x000010, "Member 'MiniPartyBar_C_Get_Banners_Tooltip_Widget::CallFunc_GetOwningPlayer_ReturnValue' has a wrong offset!");
static_assert(offsetof(MiniPartyBar_C_Get_Banners_Tooltip_Widget, CallFunc_GetCurrentInputType_ReturnValue) == 0x000018, "Member 'MiniPartyBar_C_Get_Banners_Tooltip_Widget::CallFunc_GetCurrentInputType_ReturnValue' has a wrong offset!");
static_assert(offsetof(MiniPartyBar_C_Get_Banners_Tooltip_Widget, CallFunc_MakeLiteralText_ReturnValue) == 0x000020, "Member 'MiniPartyBar_C_Get_Banners_Tooltip_Widget::CallFunc_MakeLiteralText_ReturnValue' has a wrong offset!");
static_assert(offsetof(MiniPartyBar_C_Get_Banners_Tooltip_Widget, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x000038, "Member 'MiniPartyBar_C_Get_Banners_Tooltip_Widget::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(MiniPartyBar_C_Get_Banners_Tooltip_Widget, CallFunc_MakeLiteralText_ReturnValue_1) == 0x000040, "Member 'MiniPartyBar_C_Get_Banners_Tooltip_Widget::CallFunc_MakeLiteralText_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(MiniPartyBar_C_Get_Banners_Tooltip_Widget, CallFunc_Create_Basic_Tooltip_Output) == 0x000058, "Member 'MiniPartyBar_C_Get_Banners_Tooltip_Widget::CallFunc_Create_Basic_Tooltip_Output' has a wrong offset!");

struct MiniPartyBar_C_HandlePartybarUIFeatureChanged final
{
public:
	EFortUIFeature                                Feature;
	EFortUIFeatureState                           FeatureState;
	ESlateVisibility                              Temp_byte_Variable;
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;
	ESlateVisibility                              Temp_byte_Variable_1;
	ESlateVisibility                              Temp_byte_Variable_2;
	ESlateVisibility                              Temp_byte_Variable_3;
	EFortUIFeatureState                           Temp_byte_Variable_4;
	class UFortUIDataConfigurationContext*        CallFunc_GetContext_ReturnValue;
	ESlateVisibility                              K2Node_Select_Default;
	bool                                          CallFunc_ArePartyFeaturesEnabled_ReturnValue;
	bool                                          CallFunc_BooleanAND_ReturnValue;
};
static_assert(alignof(MiniPartyBar_C_HandlePartybarUIFeatureChanged) == 0x000008, "Wrong alignment on MiniPartyBar_C_HandlePartybarUIFeatureChanged");
static_assert(sizeof(MiniPartyBar_C_HandlePartybarUIFeatureChanged) == 0x000018, "Wrong size on MiniPartyBar_C_HandlePartybarUIFeatureChanged");
static_assert(offsetof(MiniPartyBar_C_HandlePartybarUIFeatureChanged, Feature) == 0x000000, "Member 'MiniPartyBar_C_HandlePartybarUIFeatureChanged::Feature' has a wrong offset!");
static_assert(offsetof(MiniPartyBar_C_HandlePartybarUIFeatureChanged, FeatureState) == 0x000001, "Member 'MiniPartyBar_C_HandlePartybarUIFeatureChanged::FeatureState' has a wrong offset!");
static_assert(offsetof(MiniPartyBar_C_HandlePartybarUIFeatureChanged, Temp_byte_Variable) == 0x000002, "Member 'MiniPartyBar_C_HandlePartybarUIFeatureChanged::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(MiniPartyBar_C_HandlePartybarUIFeatureChanged, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x000003, "Member 'MiniPartyBar_C_HandlePartybarUIFeatureChanged::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(MiniPartyBar_C_HandlePartybarUIFeatureChanged, Temp_byte_Variable_1) == 0x000004, "Member 'MiniPartyBar_C_HandlePartybarUIFeatureChanged::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(MiniPartyBar_C_HandlePartybarUIFeatureChanged, Temp_byte_Variable_2) == 0x000005, "Member 'MiniPartyBar_C_HandlePartybarUIFeatureChanged::Temp_byte_Variable_2' has a wrong offset!");
static_assert(offsetof(MiniPartyBar_C_HandlePartybarUIFeatureChanged, Temp_byte_Variable_3) == 0x000006, "Member 'MiniPartyBar_C_HandlePartybarUIFeatureChanged::Temp_byte_Variable_3' has a wrong offset!");
static_assert(offsetof(MiniPartyBar_C_HandlePartybarUIFeatureChanged, Temp_byte_Variable_4) == 0x000007, "Member 'MiniPartyBar_C_HandlePartybarUIFeatureChanged::Temp_byte_Variable_4' has a wrong offset!");
static_assert(offsetof(MiniPartyBar_C_HandlePartybarUIFeatureChanged, CallFunc_GetContext_ReturnValue) == 0x000008, "Member 'MiniPartyBar_C_HandlePartybarUIFeatureChanged::CallFunc_GetContext_ReturnValue' has a wrong offset!");
static_assert(offsetof(MiniPartyBar_C_HandlePartybarUIFeatureChanged, K2Node_Select_Default) == 0x000010, "Member 'MiniPartyBar_C_HandlePartybarUIFeatureChanged::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(MiniPartyBar_C_HandlePartybarUIFeatureChanged, CallFunc_ArePartyFeaturesEnabled_ReturnValue) == 0x000011, "Member 'MiniPartyBar_C_HandlePartybarUIFeatureChanged::CallFunc_ArePartyFeaturesEnabled_ReturnValue' has a wrong offset!");
static_assert(offsetof(MiniPartyBar_C_HandlePartybarUIFeatureChanged, CallFunc_BooleanAND_ReturnValue) == 0x000012, "Member 'MiniPartyBar_C_HandlePartybarUIFeatureChanged::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");

}
