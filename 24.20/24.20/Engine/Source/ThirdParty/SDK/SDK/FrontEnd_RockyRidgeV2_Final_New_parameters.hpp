#pragma once

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "FortniteGame_structs.hpp"
#include "SlateCore_structs.hpp"

namespace SDK::Params
{

struct FrontEnd_RockyRidgeV2_Final_New_C_BndEvt__CloseButton_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature final
{
public:
	class UCommonButtonLegacy*                    Button;
};
static_assert(alignof(FrontEnd_RockyRidgeV2_Final_New_C_BndEvt__CloseButton_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature) == 0x000008, "Wrong alignment on FrontEnd_RockyRidgeV2_Final_New_C_BndEvt__CloseButton_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature");
static_assert(sizeof(FrontEnd_RockyRidgeV2_Final_New_C_BndEvt__CloseButton_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature) == 0x000008, "Wrong size on FrontEnd_RockyRidgeV2_Final_New_C_BndEvt__CloseButton_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature");
static_assert(offsetof(FrontEnd_RockyRidgeV2_Final_New_C_BndEvt__CloseButton_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature, Button) == 0x000000, "Member 'FrontEnd_RockyRidgeV2_Final_New_C_BndEvt__CloseButton_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature::Button' has a wrong offset!");

struct FrontEnd_RockyRidgeV2_Final_New_C_BndEvt__CloseButton_K2Node_ComponentBoundEvent_2_CommonButtonClicked__DelegateSignature final
{
public:
	class UCommonButtonLegacy*                    Button;
};
static_assert(alignof(FrontEnd_RockyRidgeV2_Final_New_C_BndEvt__CloseButton_K2Node_ComponentBoundEvent_2_CommonButtonClicked__DelegateSignature) == 0x000008, "Wrong alignment on FrontEnd_RockyRidgeV2_Final_New_C_BndEvt__CloseButton_K2Node_ComponentBoundEvent_2_CommonButtonClicked__DelegateSignature");
static_assert(sizeof(FrontEnd_RockyRidgeV2_Final_New_C_BndEvt__CloseButton_K2Node_ComponentBoundEvent_2_CommonButtonClicked__DelegateSignature) == 0x000008, "Wrong size on FrontEnd_RockyRidgeV2_Final_New_C_BndEvt__CloseButton_K2Node_ComponentBoundEvent_2_CommonButtonClicked__DelegateSignature");
static_assert(offsetof(FrontEnd_RockyRidgeV2_Final_New_C_BndEvt__CloseButton_K2Node_ComponentBoundEvent_2_CommonButtonClicked__DelegateSignature, Button) == 0x000000, "Member 'FrontEnd_RockyRidgeV2_Final_New_C_BndEvt__CloseButton_K2Node_ComponentBoundEvent_2_CommonButtonClicked__DelegateSignature::Button' has a wrong offset!");

struct FrontEnd_RockyRidgeV2_Final_New_C_BndEvt__SkewButton_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature final
{
public:
	class UCommonButtonLegacy*                    Button;
};
static_assert(alignof(FrontEnd_RockyRidgeV2_Final_New_C_BndEvt__SkewButton_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature) == 0x000008, "Wrong alignment on FrontEnd_RockyRidgeV2_Final_New_C_BndEvt__SkewButton_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature");
static_assert(sizeof(FrontEnd_RockyRidgeV2_Final_New_C_BndEvt__SkewButton_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature) == 0x000008, "Wrong size on FrontEnd_RockyRidgeV2_Final_New_C_BndEvt__SkewButton_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature");
static_assert(offsetof(FrontEnd_RockyRidgeV2_Final_New_C_BndEvt__SkewButton_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature, Button) == 0x000000, "Member 'FrontEnd_RockyRidgeV2_Final_New_C_BndEvt__SkewButton_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature::Button' has a wrong offset!");

struct FrontEnd_RockyRidgeV2_Final_New_C_DialogResult_F5CDF2014834DA2289AC4A9C8C219485 final
{
public:
	EFortDialogResult                             Result;
	uint8                                         Pad_1[0x3];
	class FName                                   ResultName;
};
static_assert(alignof(FrontEnd_RockyRidgeV2_Final_New_C_DialogResult_F5CDF2014834DA2289AC4A9C8C219485) == 0x000004, "Wrong alignment on FrontEnd_RockyRidgeV2_Final_New_C_DialogResult_F5CDF2014834DA2289AC4A9C8C219485");
static_assert(sizeof(FrontEnd_RockyRidgeV2_Final_New_C_DialogResult_F5CDF2014834DA2289AC4A9C8C219485) == 0x000008, "Wrong size on FrontEnd_RockyRidgeV2_Final_New_C_DialogResult_F5CDF2014834DA2289AC4A9C8C219485");
static_assert(offsetof(FrontEnd_RockyRidgeV2_Final_New_C_DialogResult_F5CDF2014834DA2289AC4A9C8C219485, Result) == 0x000000, "Member 'FrontEnd_RockyRidgeV2_Final_New_C_DialogResult_F5CDF2014834DA2289AC4A9C8C219485::Result' has a wrong offset!");
static_assert(offsetof(FrontEnd_RockyRidgeV2_Final_New_C_DialogResult_F5CDF2014834DA2289AC4A9C8C219485, ResultName) == 0x000004, "Member 'FrontEnd_RockyRidgeV2_Final_New_C_DialogResult_F5CDF2014834DA2289AC4A9C8C219485::ResultName' has a wrong offset!");

struct FrontEnd_RockyRidgeV2_Final_New_C_ExecuteUbergraph_FrontEnd_RockyRidgeV2_Final_New final
{
public:
	int32                                         EntryPoint;
	uint8                                         Pad_4[0x4];
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_1;
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_2;
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_3;
	class UFortGlobalUIContext*                   CallFunc_GetContext_ReturnValue;
	TDelegate<void(EFortDialogResult Result, class FName ResultName)> K2Node_CreateDelegate_OutputDelegate_4;
	EFortDialogResult                             K2Node_CustomEvent_Result;
	uint8                                         Pad_55[0x3];
	class FName                                   K2Node_CustomEvent_ResultName;
	class FName                                   Temp_name_Variable;
	EFortDialogResult                             Temp_byte_Variable;
	bool                                          K2Node_SwitchEnum_CmpSuccess;
	uint8                                         Pad_62[0x6];
	class UFortAsyncAction_ShowConfirmation_NUI*  CallFunc_ShowSimpleConfirmationDialog_CustomInput_ReturnValue;
	bool                                          CallFunc_IsValid_ReturnValue;
	uint8                                         Pad_71[0x3];
	int32                                         Temp_int_Array_Index_Variable;
	bool                                          K2Node_Event_IsDesignTime;
	uint8                                         Pad_79[0x7];
	class FString                                 CallFunc_Conv_TextToString_ReturnValue;
	TArray<class UWidget*>                        CallFunc_GetAllChildren_ReturnValue;
	TArray<class FString>                         CallFunc_ParseIntoArray_ReturnValue;
	class UWidget*                                CallFunc_Array_Get_Item;
	class UCommonTextBlock*                       K2Node_DynamicCast_AsCommon_Text;
	bool                                          K2Node_DynamicCast_bSuccess;
	uint8                                         Pad_C1[0x3];
	int32                                         CallFunc_Array_Length_ReturnValue;
	class FString                                 CallFunc_Array_Get_Item_1;
	int32                                         CallFunc_Array_Length_ReturnValue_1;
	uint8                                         Pad_DC[0x4];
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;
	bool                                          CallFunc_Greater_IntInt_ReturnValue;
	bool                                          CallFunc_Greater_IntInt_ReturnValue_1;
	bool                                          CallFunc_Greater_IntInt_ReturnValue_2;
	uint8                                         Pad_FB[0x1];
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_5;
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_6;
	int32                                         Temp_int_Loop_Counter_Variable;
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_7;
	bool                                          CallFunc_Less_IntInt_ReturnValue;
	uint8                                         Pad_125[0x3];
	int32                                         CallFunc_Add_IntInt_ReturnValue;
	uint8                                         Pad_12C[0x4];
	class UCommonButtonLegacy*                    K2Node_ComponentBoundEvent_Button_2;
	class UUMGSequencePlayer*                     CallFunc_CreatePlayAnimationProxyObject_Result;
	class UWidgetAnimationPlayCallbackProxy*      CallFunc_CreatePlayAnimationProxyObject_ReturnValue;
	class UUMGSequencePlayer*                     CallFunc_CreatePlayAnimationProxyObject_Result_1;
	class UWidgetAnimationPlayCallbackProxy*      CallFunc_CreatePlayAnimationProxyObject_ReturnValue_1;
	bool                                          CallFunc_IsValid_ReturnValue_1;
	bool                                          CallFunc_IsValid_ReturnValue_2;
	uint8                                         Pad_15A[0x6];
	class UUMGSequencePlayer*                     CallFunc_CreatePlayAnimationProxyObject_Result_2;
	class UWidgetAnimationPlayCallbackProxy*      CallFunc_CreatePlayAnimationProxyObject_ReturnValue_2;
	class UUMGSequencePlayer*                     CallFunc_CreatePlayAnimationProxyObject_Result_3;
	class UWidgetAnimationPlayCallbackProxy*      CallFunc_CreatePlayAnimationProxyObject_ReturnValue_3;
	bool                                          CallFunc_IsValid_ReturnValue_3;
	bool                                          CallFunc_IsValid_ReturnValue_4;
	uint8                                         Pad_182[0x6];
	class UUMGSequencePlayer*                     CallFunc_CreatePlayAnimationProxyObject_Result_4;
	class UWidgetAnimationPlayCallbackProxy*      CallFunc_CreatePlayAnimationProxyObject_ReturnValue_4;
	class UUMGSequencePlayer*                     CallFunc_CreatePlayAnimationProxyObject_Result_5;
	class UWidgetAnimationPlayCallbackProxy*      CallFunc_CreatePlayAnimationProxyObject_ReturnValue_5;
	bool                                          CallFunc_IsValid_ReturnValue_5;
	bool                                          CallFunc_IsValid_ReturnValue_6;
	uint8                                         Pad_1AA[0x6];
	class UCommonButtonLegacy*                    K2Node_ComponentBoundEvent_Button_1;
	class UUMGSequencePlayer*                     CallFunc_CreatePlayAnimationProxyObject_Result_6;
	class UWidgetAnimationPlayCallbackProxy*      CallFunc_CreatePlayAnimationProxyObject_ReturnValue_6;
	class UCommonButtonLegacy*                    K2Node_ComponentBoundEvent_Button;
	bool                                          CallFunc_IsValid_ReturnValue_7;
	uint8                                         Pad_1D1[0x3];
	struct FSlateColor                            K2Node_MakeStruct_SlateColor;
	struct FSlateColor                            K2Node_MakeStruct_SlateColor_1;
	uint8                                         Pad_1FC[0x4];
	struct FGeometry                              K2Node_Event_MyGeometry;
	float                                         K2Node_Event_InDeltaTime;
};
static_assert(alignof(FrontEnd_RockyRidgeV2_Final_New_C_ExecuteUbergraph_FrontEnd_RockyRidgeV2_Final_New) == 0x000008, "Wrong alignment on FrontEnd_RockyRidgeV2_Final_New_C_ExecuteUbergraph_FrontEnd_RockyRidgeV2_Final_New");
static_assert(sizeof(FrontEnd_RockyRidgeV2_Final_New_C_ExecuteUbergraph_FrontEnd_RockyRidgeV2_Final_New) == 0x000248, "Wrong size on FrontEnd_RockyRidgeV2_Final_New_C_ExecuteUbergraph_FrontEnd_RockyRidgeV2_Final_New");
static_assert(offsetof(FrontEnd_RockyRidgeV2_Final_New_C_ExecuteUbergraph_FrontEnd_RockyRidgeV2_Final_New, EntryPoint) == 0x000000, "Member 'FrontEnd_RockyRidgeV2_Final_New_C_ExecuteUbergraph_FrontEnd_RockyRidgeV2_Final_New::EntryPoint' has a wrong offset!");
static_assert(offsetof(FrontEnd_RockyRidgeV2_Final_New_C_ExecuteUbergraph_FrontEnd_RockyRidgeV2_Final_New, CallFunc_PlayAnimation_ReturnValue) == 0x000008, "Member 'FrontEnd_RockyRidgeV2_Final_New_C_ExecuteUbergraph_FrontEnd_RockyRidgeV2_Final_New::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");
static_assert(offsetof(FrontEnd_RockyRidgeV2_Final_New_C_ExecuteUbergraph_FrontEnd_RockyRidgeV2_Final_New, K2Node_CreateDelegate_OutputDelegate) == 0x000010, "Member 'FrontEnd_RockyRidgeV2_Final_New_C_ExecuteUbergraph_FrontEnd_RockyRidgeV2_Final_New::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(FrontEnd_RockyRidgeV2_Final_New_C_ExecuteUbergraph_FrontEnd_RockyRidgeV2_Final_New, K2Node_CreateDelegate_OutputDelegate_1) == 0x00001C, "Member 'FrontEnd_RockyRidgeV2_Final_New_C_ExecuteUbergraph_FrontEnd_RockyRidgeV2_Final_New::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(FrontEnd_RockyRidgeV2_Final_New_C_ExecuteUbergraph_FrontEnd_RockyRidgeV2_Final_New, K2Node_CreateDelegate_OutputDelegate_2) == 0x000028, "Member 'FrontEnd_RockyRidgeV2_Final_New_C_ExecuteUbergraph_FrontEnd_RockyRidgeV2_Final_New::K2Node_CreateDelegate_OutputDelegate_2' has a wrong offset!");
static_assert(offsetof(FrontEnd_RockyRidgeV2_Final_New_C_ExecuteUbergraph_FrontEnd_RockyRidgeV2_Final_New, K2Node_CreateDelegate_OutputDelegate_3) == 0x000034, "Member 'FrontEnd_RockyRidgeV2_Final_New_C_ExecuteUbergraph_FrontEnd_RockyRidgeV2_Final_New::K2Node_CreateDelegate_OutputDelegate_3' has a wrong offset!");
static_assert(offsetof(FrontEnd_RockyRidgeV2_Final_New_C_ExecuteUbergraph_FrontEnd_RockyRidgeV2_Final_New, CallFunc_GetContext_ReturnValue) == 0x000040, "Member 'FrontEnd_RockyRidgeV2_Final_New_C_ExecuteUbergraph_FrontEnd_RockyRidgeV2_Final_New::CallFunc_GetContext_ReturnValue' has a wrong offset!");
static_assert(offsetof(FrontEnd_RockyRidgeV2_Final_New_C_ExecuteUbergraph_FrontEnd_RockyRidgeV2_Final_New, K2Node_CreateDelegate_OutputDelegate_4) == 0x000048, "Member 'FrontEnd_RockyRidgeV2_Final_New_C_ExecuteUbergraph_FrontEnd_RockyRidgeV2_Final_New::K2Node_CreateDelegate_OutputDelegate_4' has a wrong offset!");
static_assert(offsetof(FrontEnd_RockyRidgeV2_Final_New_C_ExecuteUbergraph_FrontEnd_RockyRidgeV2_Final_New, K2Node_CustomEvent_Result) == 0x000054, "Member 'FrontEnd_RockyRidgeV2_Final_New_C_ExecuteUbergraph_FrontEnd_RockyRidgeV2_Final_New::K2Node_CustomEvent_Result' has a wrong offset!");
static_assert(offsetof(FrontEnd_RockyRidgeV2_Final_New_C_ExecuteUbergraph_FrontEnd_RockyRidgeV2_Final_New, K2Node_CustomEvent_ResultName) == 0x000058, "Member 'FrontEnd_RockyRidgeV2_Final_New_C_ExecuteUbergraph_FrontEnd_RockyRidgeV2_Final_New::K2Node_CustomEvent_ResultName' has a wrong offset!");
static_assert(offsetof(FrontEnd_RockyRidgeV2_Final_New_C_ExecuteUbergraph_FrontEnd_RockyRidgeV2_Final_New, Temp_name_Variable) == 0x00005C, "Member 'FrontEnd_RockyRidgeV2_Final_New_C_ExecuteUbergraph_FrontEnd_RockyRidgeV2_Final_New::Temp_name_Variable' has a wrong offset!");
static_assert(offsetof(FrontEnd_RockyRidgeV2_Final_New_C_ExecuteUbergraph_FrontEnd_RockyRidgeV2_Final_New, Temp_byte_Variable) == 0x000060, "Member 'FrontEnd_RockyRidgeV2_Final_New_C_ExecuteUbergraph_FrontEnd_RockyRidgeV2_Final_New::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(FrontEnd_RockyRidgeV2_Final_New_C_ExecuteUbergraph_FrontEnd_RockyRidgeV2_Final_New, K2Node_SwitchEnum_CmpSuccess) == 0x000061, "Member 'FrontEnd_RockyRidgeV2_Final_New_C_ExecuteUbergraph_FrontEnd_RockyRidgeV2_Final_New::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");
static_assert(offsetof(FrontEnd_RockyRidgeV2_Final_New_C_ExecuteUbergraph_FrontEnd_RockyRidgeV2_Final_New, CallFunc_ShowSimpleConfirmationDialog_CustomInput_ReturnValue) == 0x000068, "Member 'FrontEnd_RockyRidgeV2_Final_New_C_ExecuteUbergraph_FrontEnd_RockyRidgeV2_Final_New::CallFunc_ShowSimpleConfirmationDialog_CustomInput_ReturnValue' has a wrong offset!");
static_assert(offsetof(FrontEnd_RockyRidgeV2_Final_New_C_ExecuteUbergraph_FrontEnd_RockyRidgeV2_Final_New, CallFunc_IsValid_ReturnValue) == 0x000070, "Member 'FrontEnd_RockyRidgeV2_Final_New_C_ExecuteUbergraph_FrontEnd_RockyRidgeV2_Final_New::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(FrontEnd_RockyRidgeV2_Final_New_C_ExecuteUbergraph_FrontEnd_RockyRidgeV2_Final_New, Temp_int_Array_Index_Variable) == 0x000074, "Member 'FrontEnd_RockyRidgeV2_Final_New_C_ExecuteUbergraph_FrontEnd_RockyRidgeV2_Final_New::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(FrontEnd_RockyRidgeV2_Final_New_C_ExecuteUbergraph_FrontEnd_RockyRidgeV2_Final_New, K2Node_Event_IsDesignTime) == 0x000078, "Member 'FrontEnd_RockyRidgeV2_Final_New_C_ExecuteUbergraph_FrontEnd_RockyRidgeV2_Final_New::K2Node_Event_IsDesignTime' has a wrong offset!");
static_assert(offsetof(FrontEnd_RockyRidgeV2_Final_New_C_ExecuteUbergraph_FrontEnd_RockyRidgeV2_Final_New, CallFunc_Conv_TextToString_ReturnValue) == 0x000080, "Member 'FrontEnd_RockyRidgeV2_Final_New_C_ExecuteUbergraph_FrontEnd_RockyRidgeV2_Final_New::CallFunc_Conv_TextToString_ReturnValue' has a wrong offset!");
static_assert(offsetof(FrontEnd_RockyRidgeV2_Final_New_C_ExecuteUbergraph_FrontEnd_RockyRidgeV2_Final_New, CallFunc_GetAllChildren_ReturnValue) == 0x000090, "Member 'FrontEnd_RockyRidgeV2_Final_New_C_ExecuteUbergraph_FrontEnd_RockyRidgeV2_Final_New::CallFunc_GetAllChildren_ReturnValue' has a wrong offset!");
static_assert(offsetof(FrontEnd_RockyRidgeV2_Final_New_C_ExecuteUbergraph_FrontEnd_RockyRidgeV2_Final_New, CallFunc_ParseIntoArray_ReturnValue) == 0x0000A0, "Member 'FrontEnd_RockyRidgeV2_Final_New_C_ExecuteUbergraph_FrontEnd_RockyRidgeV2_Final_New::CallFunc_ParseIntoArray_ReturnValue' has a wrong offset!");
static_assert(offsetof(FrontEnd_RockyRidgeV2_Final_New_C_ExecuteUbergraph_FrontEnd_RockyRidgeV2_Final_New, CallFunc_Array_Get_Item) == 0x0000B0, "Member 'FrontEnd_RockyRidgeV2_Final_New_C_ExecuteUbergraph_FrontEnd_RockyRidgeV2_Final_New::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(FrontEnd_RockyRidgeV2_Final_New_C_ExecuteUbergraph_FrontEnd_RockyRidgeV2_Final_New, K2Node_DynamicCast_AsCommon_Text) == 0x0000B8, "Member 'FrontEnd_RockyRidgeV2_Final_New_C_ExecuteUbergraph_FrontEnd_RockyRidgeV2_Final_New::K2Node_DynamicCast_AsCommon_Text' has a wrong offset!");
static_assert(offsetof(FrontEnd_RockyRidgeV2_Final_New_C_ExecuteUbergraph_FrontEnd_RockyRidgeV2_Final_New, K2Node_DynamicCast_bSuccess) == 0x0000C0, "Member 'FrontEnd_RockyRidgeV2_Final_New_C_ExecuteUbergraph_FrontEnd_RockyRidgeV2_Final_New::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(FrontEnd_RockyRidgeV2_Final_New_C_ExecuteUbergraph_FrontEnd_RockyRidgeV2_Final_New, CallFunc_Array_Length_ReturnValue) == 0x0000C4, "Member 'FrontEnd_RockyRidgeV2_Final_New_C_ExecuteUbergraph_FrontEnd_RockyRidgeV2_Final_New::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(FrontEnd_RockyRidgeV2_Final_New_C_ExecuteUbergraph_FrontEnd_RockyRidgeV2_Final_New, CallFunc_Array_Get_Item_1) == 0x0000C8, "Member 'FrontEnd_RockyRidgeV2_Final_New_C_ExecuteUbergraph_FrontEnd_RockyRidgeV2_Final_New::CallFunc_Array_Get_Item_1' has a wrong offset!");
static_assert(offsetof(FrontEnd_RockyRidgeV2_Final_New_C_ExecuteUbergraph_FrontEnd_RockyRidgeV2_Final_New, CallFunc_Array_Length_ReturnValue_1) == 0x0000D8, "Member 'FrontEnd_RockyRidgeV2_Final_New_C_ExecuteUbergraph_FrontEnd_RockyRidgeV2_Final_New::CallFunc_Array_Length_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(FrontEnd_RockyRidgeV2_Final_New_C_ExecuteUbergraph_FrontEnd_RockyRidgeV2_Final_New, CallFunc_Conv_StringToText_ReturnValue) == 0x0000E0, "Member 'FrontEnd_RockyRidgeV2_Final_New_C_ExecuteUbergraph_FrontEnd_RockyRidgeV2_Final_New::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(FrontEnd_RockyRidgeV2_Final_New_C_ExecuteUbergraph_FrontEnd_RockyRidgeV2_Final_New, CallFunc_Greater_IntInt_ReturnValue) == 0x0000F8, "Member 'FrontEnd_RockyRidgeV2_Final_New_C_ExecuteUbergraph_FrontEnd_RockyRidgeV2_Final_New::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(FrontEnd_RockyRidgeV2_Final_New_C_ExecuteUbergraph_FrontEnd_RockyRidgeV2_Final_New, CallFunc_Greater_IntInt_ReturnValue_1) == 0x0000F9, "Member 'FrontEnd_RockyRidgeV2_Final_New_C_ExecuteUbergraph_FrontEnd_RockyRidgeV2_Final_New::CallFunc_Greater_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(FrontEnd_RockyRidgeV2_Final_New_C_ExecuteUbergraph_FrontEnd_RockyRidgeV2_Final_New, CallFunc_Greater_IntInt_ReturnValue_2) == 0x0000FA, "Member 'FrontEnd_RockyRidgeV2_Final_New_C_ExecuteUbergraph_FrontEnd_RockyRidgeV2_Final_New::CallFunc_Greater_IntInt_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(FrontEnd_RockyRidgeV2_Final_New_C_ExecuteUbergraph_FrontEnd_RockyRidgeV2_Final_New, K2Node_CreateDelegate_OutputDelegate_5) == 0x0000FC, "Member 'FrontEnd_RockyRidgeV2_Final_New_C_ExecuteUbergraph_FrontEnd_RockyRidgeV2_Final_New::K2Node_CreateDelegate_OutputDelegate_5' has a wrong offset!");
static_assert(offsetof(FrontEnd_RockyRidgeV2_Final_New_C_ExecuteUbergraph_FrontEnd_RockyRidgeV2_Final_New, K2Node_CreateDelegate_OutputDelegate_6) == 0x000108, "Member 'FrontEnd_RockyRidgeV2_Final_New_C_ExecuteUbergraph_FrontEnd_RockyRidgeV2_Final_New::K2Node_CreateDelegate_OutputDelegate_6' has a wrong offset!");
static_assert(offsetof(FrontEnd_RockyRidgeV2_Final_New_C_ExecuteUbergraph_FrontEnd_RockyRidgeV2_Final_New, Temp_int_Loop_Counter_Variable) == 0x000114, "Member 'FrontEnd_RockyRidgeV2_Final_New_C_ExecuteUbergraph_FrontEnd_RockyRidgeV2_Final_New::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(FrontEnd_RockyRidgeV2_Final_New_C_ExecuteUbergraph_FrontEnd_RockyRidgeV2_Final_New, K2Node_CreateDelegate_OutputDelegate_7) == 0x000118, "Member 'FrontEnd_RockyRidgeV2_Final_New_C_ExecuteUbergraph_FrontEnd_RockyRidgeV2_Final_New::K2Node_CreateDelegate_OutputDelegate_7' has a wrong offset!");
static_assert(offsetof(FrontEnd_RockyRidgeV2_Final_New_C_ExecuteUbergraph_FrontEnd_RockyRidgeV2_Final_New, CallFunc_Less_IntInt_ReturnValue) == 0x000124, "Member 'FrontEnd_RockyRidgeV2_Final_New_C_ExecuteUbergraph_FrontEnd_RockyRidgeV2_Final_New::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(FrontEnd_RockyRidgeV2_Final_New_C_ExecuteUbergraph_FrontEnd_RockyRidgeV2_Final_New, CallFunc_Add_IntInt_ReturnValue) == 0x000128, "Member 'FrontEnd_RockyRidgeV2_Final_New_C_ExecuteUbergraph_FrontEnd_RockyRidgeV2_Final_New::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(FrontEnd_RockyRidgeV2_Final_New_C_ExecuteUbergraph_FrontEnd_RockyRidgeV2_Final_New, K2Node_ComponentBoundEvent_Button_2) == 0x000130, "Member 'FrontEnd_RockyRidgeV2_Final_New_C_ExecuteUbergraph_FrontEnd_RockyRidgeV2_Final_New::K2Node_ComponentBoundEvent_Button_2' has a wrong offset!");
static_assert(offsetof(FrontEnd_RockyRidgeV2_Final_New_C_ExecuteUbergraph_FrontEnd_RockyRidgeV2_Final_New, CallFunc_CreatePlayAnimationProxyObject_Result) == 0x000138, "Member 'FrontEnd_RockyRidgeV2_Final_New_C_ExecuteUbergraph_FrontEnd_RockyRidgeV2_Final_New::CallFunc_CreatePlayAnimationProxyObject_Result' has a wrong offset!");
static_assert(offsetof(FrontEnd_RockyRidgeV2_Final_New_C_ExecuteUbergraph_FrontEnd_RockyRidgeV2_Final_New, CallFunc_CreatePlayAnimationProxyObject_ReturnValue) == 0x000140, "Member 'FrontEnd_RockyRidgeV2_Final_New_C_ExecuteUbergraph_FrontEnd_RockyRidgeV2_Final_New::CallFunc_CreatePlayAnimationProxyObject_ReturnValue' has a wrong offset!");
static_assert(offsetof(FrontEnd_RockyRidgeV2_Final_New_C_ExecuteUbergraph_FrontEnd_RockyRidgeV2_Final_New, CallFunc_CreatePlayAnimationProxyObject_Result_1) == 0x000148, "Member 'FrontEnd_RockyRidgeV2_Final_New_C_ExecuteUbergraph_FrontEnd_RockyRidgeV2_Final_New::CallFunc_CreatePlayAnimationProxyObject_Result_1' has a wrong offset!");
static_assert(offsetof(FrontEnd_RockyRidgeV2_Final_New_C_ExecuteUbergraph_FrontEnd_RockyRidgeV2_Final_New, CallFunc_CreatePlayAnimationProxyObject_ReturnValue_1) == 0x000150, "Member 'FrontEnd_RockyRidgeV2_Final_New_C_ExecuteUbergraph_FrontEnd_RockyRidgeV2_Final_New::CallFunc_CreatePlayAnimationProxyObject_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(FrontEnd_RockyRidgeV2_Final_New_C_ExecuteUbergraph_FrontEnd_RockyRidgeV2_Final_New, CallFunc_IsValid_ReturnValue_1) == 0x000158, "Member 'FrontEnd_RockyRidgeV2_Final_New_C_ExecuteUbergraph_FrontEnd_RockyRidgeV2_Final_New::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(FrontEnd_RockyRidgeV2_Final_New_C_ExecuteUbergraph_FrontEnd_RockyRidgeV2_Final_New, CallFunc_IsValid_ReturnValue_2) == 0x000159, "Member 'FrontEnd_RockyRidgeV2_Final_New_C_ExecuteUbergraph_FrontEnd_RockyRidgeV2_Final_New::CallFunc_IsValid_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(FrontEnd_RockyRidgeV2_Final_New_C_ExecuteUbergraph_FrontEnd_RockyRidgeV2_Final_New, CallFunc_CreatePlayAnimationProxyObject_Result_2) == 0x000160, "Member 'FrontEnd_RockyRidgeV2_Final_New_C_ExecuteUbergraph_FrontEnd_RockyRidgeV2_Final_New::CallFunc_CreatePlayAnimationProxyObject_Result_2' has a wrong offset!");
static_assert(offsetof(FrontEnd_RockyRidgeV2_Final_New_C_ExecuteUbergraph_FrontEnd_RockyRidgeV2_Final_New, CallFunc_CreatePlayAnimationProxyObject_ReturnValue_2) == 0x000168, "Member 'FrontEnd_RockyRidgeV2_Final_New_C_ExecuteUbergraph_FrontEnd_RockyRidgeV2_Final_New::CallFunc_CreatePlayAnimationProxyObject_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(FrontEnd_RockyRidgeV2_Final_New_C_ExecuteUbergraph_FrontEnd_RockyRidgeV2_Final_New, CallFunc_CreatePlayAnimationProxyObject_Result_3) == 0x000170, "Member 'FrontEnd_RockyRidgeV2_Final_New_C_ExecuteUbergraph_FrontEnd_RockyRidgeV2_Final_New::CallFunc_CreatePlayAnimationProxyObject_Result_3' has a wrong offset!");
static_assert(offsetof(FrontEnd_RockyRidgeV2_Final_New_C_ExecuteUbergraph_FrontEnd_RockyRidgeV2_Final_New, CallFunc_CreatePlayAnimationProxyObject_ReturnValue_3) == 0x000178, "Member 'FrontEnd_RockyRidgeV2_Final_New_C_ExecuteUbergraph_FrontEnd_RockyRidgeV2_Final_New::CallFunc_CreatePlayAnimationProxyObject_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(FrontEnd_RockyRidgeV2_Final_New_C_ExecuteUbergraph_FrontEnd_RockyRidgeV2_Final_New, CallFunc_IsValid_ReturnValue_3) == 0x000180, "Member 'FrontEnd_RockyRidgeV2_Final_New_C_ExecuteUbergraph_FrontEnd_RockyRidgeV2_Final_New::CallFunc_IsValid_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(FrontEnd_RockyRidgeV2_Final_New_C_ExecuteUbergraph_FrontEnd_RockyRidgeV2_Final_New, CallFunc_IsValid_ReturnValue_4) == 0x000181, "Member 'FrontEnd_RockyRidgeV2_Final_New_C_ExecuteUbergraph_FrontEnd_RockyRidgeV2_Final_New::CallFunc_IsValid_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(FrontEnd_RockyRidgeV2_Final_New_C_ExecuteUbergraph_FrontEnd_RockyRidgeV2_Final_New, CallFunc_CreatePlayAnimationProxyObject_Result_4) == 0x000188, "Member 'FrontEnd_RockyRidgeV2_Final_New_C_ExecuteUbergraph_FrontEnd_RockyRidgeV2_Final_New::CallFunc_CreatePlayAnimationProxyObject_Result_4' has a wrong offset!");
static_assert(offsetof(FrontEnd_RockyRidgeV2_Final_New_C_ExecuteUbergraph_FrontEnd_RockyRidgeV2_Final_New, CallFunc_CreatePlayAnimationProxyObject_ReturnValue_4) == 0x000190, "Member 'FrontEnd_RockyRidgeV2_Final_New_C_ExecuteUbergraph_FrontEnd_RockyRidgeV2_Final_New::CallFunc_CreatePlayAnimationProxyObject_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(FrontEnd_RockyRidgeV2_Final_New_C_ExecuteUbergraph_FrontEnd_RockyRidgeV2_Final_New, CallFunc_CreatePlayAnimationProxyObject_Result_5) == 0x000198, "Member 'FrontEnd_RockyRidgeV2_Final_New_C_ExecuteUbergraph_FrontEnd_RockyRidgeV2_Final_New::CallFunc_CreatePlayAnimationProxyObject_Result_5' has a wrong offset!");
static_assert(offsetof(FrontEnd_RockyRidgeV2_Final_New_C_ExecuteUbergraph_FrontEnd_RockyRidgeV2_Final_New, CallFunc_CreatePlayAnimationProxyObject_ReturnValue_5) == 0x0001A0, "Member 'FrontEnd_RockyRidgeV2_Final_New_C_ExecuteUbergraph_FrontEnd_RockyRidgeV2_Final_New::CallFunc_CreatePlayAnimationProxyObject_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(FrontEnd_RockyRidgeV2_Final_New_C_ExecuteUbergraph_FrontEnd_RockyRidgeV2_Final_New, CallFunc_IsValid_ReturnValue_5) == 0x0001A8, "Member 'FrontEnd_RockyRidgeV2_Final_New_C_ExecuteUbergraph_FrontEnd_RockyRidgeV2_Final_New::CallFunc_IsValid_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(FrontEnd_RockyRidgeV2_Final_New_C_ExecuteUbergraph_FrontEnd_RockyRidgeV2_Final_New, CallFunc_IsValid_ReturnValue_6) == 0x0001A9, "Member 'FrontEnd_RockyRidgeV2_Final_New_C_ExecuteUbergraph_FrontEnd_RockyRidgeV2_Final_New::CallFunc_IsValid_ReturnValue_6' has a wrong offset!");
static_assert(offsetof(FrontEnd_RockyRidgeV2_Final_New_C_ExecuteUbergraph_FrontEnd_RockyRidgeV2_Final_New, K2Node_ComponentBoundEvent_Button_1) == 0x0001B0, "Member 'FrontEnd_RockyRidgeV2_Final_New_C_ExecuteUbergraph_FrontEnd_RockyRidgeV2_Final_New::K2Node_ComponentBoundEvent_Button_1' has a wrong offset!");
static_assert(offsetof(FrontEnd_RockyRidgeV2_Final_New_C_ExecuteUbergraph_FrontEnd_RockyRidgeV2_Final_New, CallFunc_CreatePlayAnimationProxyObject_Result_6) == 0x0001B8, "Member 'FrontEnd_RockyRidgeV2_Final_New_C_ExecuteUbergraph_FrontEnd_RockyRidgeV2_Final_New::CallFunc_CreatePlayAnimationProxyObject_Result_6' has a wrong offset!");
static_assert(offsetof(FrontEnd_RockyRidgeV2_Final_New_C_ExecuteUbergraph_FrontEnd_RockyRidgeV2_Final_New, CallFunc_CreatePlayAnimationProxyObject_ReturnValue_6) == 0x0001C0, "Member 'FrontEnd_RockyRidgeV2_Final_New_C_ExecuteUbergraph_FrontEnd_RockyRidgeV2_Final_New::CallFunc_CreatePlayAnimationProxyObject_ReturnValue_6' has a wrong offset!");
static_assert(offsetof(FrontEnd_RockyRidgeV2_Final_New_C_ExecuteUbergraph_FrontEnd_RockyRidgeV2_Final_New, K2Node_ComponentBoundEvent_Button) == 0x0001C8, "Member 'FrontEnd_RockyRidgeV2_Final_New_C_ExecuteUbergraph_FrontEnd_RockyRidgeV2_Final_New::K2Node_ComponentBoundEvent_Button' has a wrong offset!");
static_assert(offsetof(FrontEnd_RockyRidgeV2_Final_New_C_ExecuteUbergraph_FrontEnd_RockyRidgeV2_Final_New, CallFunc_IsValid_ReturnValue_7) == 0x0001D0, "Member 'FrontEnd_RockyRidgeV2_Final_New_C_ExecuteUbergraph_FrontEnd_RockyRidgeV2_Final_New::CallFunc_IsValid_ReturnValue_7' has a wrong offset!");
static_assert(offsetof(FrontEnd_RockyRidgeV2_Final_New_C_ExecuteUbergraph_FrontEnd_RockyRidgeV2_Final_New, K2Node_MakeStruct_SlateColor) == 0x0001D4, "Member 'FrontEnd_RockyRidgeV2_Final_New_C_ExecuteUbergraph_FrontEnd_RockyRidgeV2_Final_New::K2Node_MakeStruct_SlateColor' has a wrong offset!");
static_assert(offsetof(FrontEnd_RockyRidgeV2_Final_New_C_ExecuteUbergraph_FrontEnd_RockyRidgeV2_Final_New, K2Node_MakeStruct_SlateColor_1) == 0x0001E8, "Member 'FrontEnd_RockyRidgeV2_Final_New_C_ExecuteUbergraph_FrontEnd_RockyRidgeV2_Final_New::K2Node_MakeStruct_SlateColor_1' has a wrong offset!");
static_assert(offsetof(FrontEnd_RockyRidgeV2_Final_New_C_ExecuteUbergraph_FrontEnd_RockyRidgeV2_Final_New, K2Node_Event_MyGeometry) == 0x000200, "Member 'FrontEnd_RockyRidgeV2_Final_New_C_ExecuteUbergraph_FrontEnd_RockyRidgeV2_Final_New::K2Node_Event_MyGeometry' has a wrong offset!");
static_assert(offsetof(FrontEnd_RockyRidgeV2_Final_New_C_ExecuteUbergraph_FrontEnd_RockyRidgeV2_Final_New, K2Node_Event_InDeltaTime) == 0x000240, "Member 'FrontEnd_RockyRidgeV2_Final_New_C_ExecuteUbergraph_FrontEnd_RockyRidgeV2_Final_New::K2Node_Event_InDeltaTime' has a wrong offset!");

struct FrontEnd_RockyRidgeV2_Final_New_C_PreConstruct final
{
public:
	bool                                          IsDesignTime;
};
static_assert(alignof(FrontEnd_RockyRidgeV2_Final_New_C_PreConstruct) == 0x000001, "Wrong alignment on FrontEnd_RockyRidgeV2_Final_New_C_PreConstruct");
static_assert(sizeof(FrontEnd_RockyRidgeV2_Final_New_C_PreConstruct) == 0x000001, "Wrong size on FrontEnd_RockyRidgeV2_Final_New_C_PreConstruct");
static_assert(offsetof(FrontEnd_RockyRidgeV2_Final_New_C_PreConstruct, IsDesignTime) == 0x000000, "Member 'FrontEnd_RockyRidgeV2_Final_New_C_PreConstruct::IsDesignTime' has a wrong offset!");

struct FrontEnd_RockyRidgeV2_Final_New_C_SoundMaybe final
{
public:
	int32                                         Index_0;
	uint8                                         Pad_4[0x4];
	class USoundBase*                             sound;
	int32                                         CallFunc_Array_LastIndex_ReturnValue;
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue;
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue_1;
	bool                                          CallFunc_BooleanOR_ReturnValue;
};
static_assert(alignof(FrontEnd_RockyRidgeV2_Final_New_C_SoundMaybe) == 0x000008, "Wrong alignment on FrontEnd_RockyRidgeV2_Final_New_C_SoundMaybe");
static_assert(sizeof(FrontEnd_RockyRidgeV2_Final_New_C_SoundMaybe) == 0x000018, "Wrong size on FrontEnd_RockyRidgeV2_Final_New_C_SoundMaybe");
static_assert(offsetof(FrontEnd_RockyRidgeV2_Final_New_C_SoundMaybe, Index_0) == 0x000000, "Member 'FrontEnd_RockyRidgeV2_Final_New_C_SoundMaybe::Index_0' has a wrong offset!");
static_assert(offsetof(FrontEnd_RockyRidgeV2_Final_New_C_SoundMaybe, sound) == 0x000008, "Member 'FrontEnd_RockyRidgeV2_Final_New_C_SoundMaybe::sound' has a wrong offset!");
static_assert(offsetof(FrontEnd_RockyRidgeV2_Final_New_C_SoundMaybe, CallFunc_Array_LastIndex_ReturnValue) == 0x000010, "Member 'FrontEnd_RockyRidgeV2_Final_New_C_SoundMaybe::CallFunc_Array_LastIndex_ReturnValue' has a wrong offset!");
static_assert(offsetof(FrontEnd_RockyRidgeV2_Final_New_C_SoundMaybe, CallFunc_EqualEqual_IntInt_ReturnValue) == 0x000014, "Member 'FrontEnd_RockyRidgeV2_Final_New_C_SoundMaybe::CallFunc_EqualEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(FrontEnd_RockyRidgeV2_Final_New_C_SoundMaybe, CallFunc_EqualEqual_IntInt_ReturnValue_1) == 0x000015, "Member 'FrontEnd_RockyRidgeV2_Final_New_C_SoundMaybe::CallFunc_EqualEqual_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(FrontEnd_RockyRidgeV2_Final_New_C_SoundMaybe, CallFunc_BooleanOR_ReturnValue) == 0x000016, "Member 'FrontEnd_RockyRidgeV2_Final_New_C_SoundMaybe::CallFunc_BooleanOR_ReturnValue' has a wrong offset!");

struct FrontEnd_RockyRidgeV2_Final_New_C_Tick final
{
public:
	struct FGeometry                              MyGeometry;
	float                                         InDeltaTime;
};
static_assert(alignof(FrontEnd_RockyRidgeV2_Final_New_C_Tick) == 0x000008, "Wrong alignment on FrontEnd_RockyRidgeV2_Final_New_C_Tick");
static_assert(sizeof(FrontEnd_RockyRidgeV2_Final_New_C_Tick) == 0x000048, "Wrong size on FrontEnd_RockyRidgeV2_Final_New_C_Tick");
static_assert(offsetof(FrontEnd_RockyRidgeV2_Final_New_C_Tick, MyGeometry) == 0x000000, "Member 'FrontEnd_RockyRidgeV2_Final_New_C_Tick::MyGeometry' has a wrong offset!");
static_assert(offsetof(FrontEnd_RockyRidgeV2_Final_New_C_Tick, InDeltaTime) == 0x000040, "Member 'FrontEnd_RockyRidgeV2_Final_New_C_Tick::InDeltaTime' has a wrong offset!");

struct FrontEnd_RockyRidgeV2_Final_New_C_UpdateCountdown final
{
public:
	bool                                          Temp_bool_Variable;
	uint8                                         Pad_1[0x7];
	struct FTimespan                              CallFunc_MakeTimespan_ReturnValue;
	struct FTimespan                              CallFunc_MakeTimespan_ReturnValue_1;
	struct FDateTime                              CallFunc_UtcNow_ReturnValue;
	class UFortRuntimeOptions*                    CallFunc_GetRuntimeOptions_ReturnValue;
	struct FTimespan                              CallFunc_Subtract_DateTimeDateTime_ReturnValue;
	bool                                          CallFunc_GreaterEqual_TimespanTimespan_ReturnValue;
	uint8                                         Pad_31[0x7];
	struct FTimespan                              K2Node_Select_Default;
	class FText                                   CallFunc_GetTimespanAsText_ReturnValue;
};
static_assert(alignof(FrontEnd_RockyRidgeV2_Final_New_C_UpdateCountdown) == 0x000008, "Wrong alignment on FrontEnd_RockyRidgeV2_Final_New_C_UpdateCountdown");
static_assert(sizeof(FrontEnd_RockyRidgeV2_Final_New_C_UpdateCountdown) == 0x000058, "Wrong size on FrontEnd_RockyRidgeV2_Final_New_C_UpdateCountdown");
static_assert(offsetof(FrontEnd_RockyRidgeV2_Final_New_C_UpdateCountdown, Temp_bool_Variable) == 0x000000, "Member 'FrontEnd_RockyRidgeV2_Final_New_C_UpdateCountdown::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(FrontEnd_RockyRidgeV2_Final_New_C_UpdateCountdown, CallFunc_MakeTimespan_ReturnValue) == 0x000008, "Member 'FrontEnd_RockyRidgeV2_Final_New_C_UpdateCountdown::CallFunc_MakeTimespan_ReturnValue' has a wrong offset!");
static_assert(offsetof(FrontEnd_RockyRidgeV2_Final_New_C_UpdateCountdown, CallFunc_MakeTimespan_ReturnValue_1) == 0x000010, "Member 'FrontEnd_RockyRidgeV2_Final_New_C_UpdateCountdown::CallFunc_MakeTimespan_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(FrontEnd_RockyRidgeV2_Final_New_C_UpdateCountdown, CallFunc_UtcNow_ReturnValue) == 0x000018, "Member 'FrontEnd_RockyRidgeV2_Final_New_C_UpdateCountdown::CallFunc_UtcNow_ReturnValue' has a wrong offset!");
static_assert(offsetof(FrontEnd_RockyRidgeV2_Final_New_C_UpdateCountdown, CallFunc_GetRuntimeOptions_ReturnValue) == 0x000020, "Member 'FrontEnd_RockyRidgeV2_Final_New_C_UpdateCountdown::CallFunc_GetRuntimeOptions_ReturnValue' has a wrong offset!");
static_assert(offsetof(FrontEnd_RockyRidgeV2_Final_New_C_UpdateCountdown, CallFunc_Subtract_DateTimeDateTime_ReturnValue) == 0x000028, "Member 'FrontEnd_RockyRidgeV2_Final_New_C_UpdateCountdown::CallFunc_Subtract_DateTimeDateTime_ReturnValue' has a wrong offset!");
static_assert(offsetof(FrontEnd_RockyRidgeV2_Final_New_C_UpdateCountdown, CallFunc_GreaterEqual_TimespanTimespan_ReturnValue) == 0x000030, "Member 'FrontEnd_RockyRidgeV2_Final_New_C_UpdateCountdown::CallFunc_GreaterEqual_TimespanTimespan_ReturnValue' has a wrong offset!");
static_assert(offsetof(FrontEnd_RockyRidgeV2_Final_New_C_UpdateCountdown, K2Node_Select_Default) == 0x000038, "Member 'FrontEnd_RockyRidgeV2_Final_New_C_UpdateCountdown::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(FrontEnd_RockyRidgeV2_Final_New_C_UpdateCountdown, CallFunc_GetTimespanAsText_ReturnValue) == 0x000040, "Member 'FrontEnd_RockyRidgeV2_Final_New_C_UpdateCountdown::CallFunc_GetTimespanAsText_ReturnValue' has a wrong offset!");

}
