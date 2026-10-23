#pragma once

#include "Basic.hpp"

#include "SlateCore_structs.hpp"
#include "Engine_structs.hpp"
#include "InputCore_structs.hpp"
#include "UMG_structs.hpp"
#include "FortniteUI_structs.hpp"

namespace SDK::Params
{

struct FancyToastWidget_C_ExecuteUbergraph_FancyToastWidget final
{
public:
	int32                                         EntryPoint;
	uint8                                         Pad_4[0x4];
	class UObject*                                K2Node_CustomEvent_Loaded;
	class UObject*                                Temp_object_Variable;
	class UTexture2D*                             K2Node_DynamicCast_AsTexture_2D;
	bool                                          K2Node_DynamicCast_bSuccess;
	uint8                                         Pad_21[0x7];
	struct FFortToastDisplayInfo                  K2Node_CustomEvent_DispalyInfo;
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;
	bool                                          CallFunc_IsAssetNull_ReturnValue;
	uint8                                         Pad_91[0x7];
	class UMaterialInstanceDynamic*               CallFunc_GetDynamicMaterial_ReturnValue;
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;
	uint8                                         Pad_AC[0x4];
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue_1;
	struct FTimerHandle                           CallFunc_K2_SetTimerDelegate_ReturnValue;
	struct FFortToastDisplayInfo                  K2Node_MakeStruct_FortToastDisplayInfo;
	TDelegate<void(class UObject* Loaded)>        K2Node_CreateDelegate_OutputDelegate_1;
};
static_assert(alignof(FancyToastWidget_C_ExecuteUbergraph_FancyToastWidget) == 0x000008, "Wrong alignment on FancyToastWidget_C_ExecuteUbergraph_FancyToastWidget");
static_assert(sizeof(FancyToastWidget_C_ExecuteUbergraph_FancyToastWidget) == 0x000130, "Wrong size on FancyToastWidget_C_ExecuteUbergraph_FancyToastWidget");
static_assert(offsetof(FancyToastWidget_C_ExecuteUbergraph_FancyToastWidget, EntryPoint) == 0x000000, "Member 'FancyToastWidget_C_ExecuteUbergraph_FancyToastWidget::EntryPoint' has a wrong offset!");
static_assert(offsetof(FancyToastWidget_C_ExecuteUbergraph_FancyToastWidget, K2Node_CustomEvent_Loaded) == 0x000008, "Member 'FancyToastWidget_C_ExecuteUbergraph_FancyToastWidget::K2Node_CustomEvent_Loaded' has a wrong offset!");
static_assert(offsetof(FancyToastWidget_C_ExecuteUbergraph_FancyToastWidget, Temp_object_Variable) == 0x000010, "Member 'FancyToastWidget_C_ExecuteUbergraph_FancyToastWidget::Temp_object_Variable' has a wrong offset!");
static_assert(offsetof(FancyToastWidget_C_ExecuteUbergraph_FancyToastWidget, K2Node_DynamicCast_AsTexture_2D) == 0x000018, "Member 'FancyToastWidget_C_ExecuteUbergraph_FancyToastWidget::K2Node_DynamicCast_AsTexture_2D' has a wrong offset!");
static_assert(offsetof(FancyToastWidget_C_ExecuteUbergraph_FancyToastWidget, K2Node_DynamicCast_bSuccess) == 0x000020, "Member 'FancyToastWidget_C_ExecuteUbergraph_FancyToastWidget::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(FancyToastWidget_C_ExecuteUbergraph_FancyToastWidget, K2Node_CustomEvent_DispalyInfo) == 0x000028, "Member 'FancyToastWidget_C_ExecuteUbergraph_FancyToastWidget::K2Node_CustomEvent_DispalyInfo' has a wrong offset!");
static_assert(offsetof(FancyToastWidget_C_ExecuteUbergraph_FancyToastWidget, CallFunc_PlayAnimation_ReturnValue) == 0x000088, "Member 'FancyToastWidget_C_ExecuteUbergraph_FancyToastWidget::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");
static_assert(offsetof(FancyToastWidget_C_ExecuteUbergraph_FancyToastWidget, CallFunc_IsAssetNull_ReturnValue) == 0x000090, "Member 'FancyToastWidget_C_ExecuteUbergraph_FancyToastWidget::CallFunc_IsAssetNull_ReturnValue' has a wrong offset!");
static_assert(offsetof(FancyToastWidget_C_ExecuteUbergraph_FancyToastWidget, CallFunc_GetDynamicMaterial_ReturnValue) == 0x000098, "Member 'FancyToastWidget_C_ExecuteUbergraph_FancyToastWidget::CallFunc_GetDynamicMaterial_ReturnValue' has a wrong offset!");
static_assert(offsetof(FancyToastWidget_C_ExecuteUbergraph_FancyToastWidget, K2Node_CreateDelegate_OutputDelegate) == 0x0000A0, "Member 'FancyToastWidget_C_ExecuteUbergraph_FancyToastWidget::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(FancyToastWidget_C_ExecuteUbergraph_FancyToastWidget, CallFunc_PlayAnimation_ReturnValue_1) == 0x0000B0, "Member 'FancyToastWidget_C_ExecuteUbergraph_FancyToastWidget::CallFunc_PlayAnimation_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(FancyToastWidget_C_ExecuteUbergraph_FancyToastWidget, CallFunc_K2_SetTimerDelegate_ReturnValue) == 0x0000B8, "Member 'FancyToastWidget_C_ExecuteUbergraph_FancyToastWidget::CallFunc_K2_SetTimerDelegate_ReturnValue' has a wrong offset!");
static_assert(offsetof(FancyToastWidget_C_ExecuteUbergraph_FancyToastWidget, K2Node_MakeStruct_FortToastDisplayInfo) == 0x0000C0, "Member 'FancyToastWidget_C_ExecuteUbergraph_FancyToastWidget::K2Node_MakeStruct_FortToastDisplayInfo' has a wrong offset!");
static_assert(offsetof(FancyToastWidget_C_ExecuteUbergraph_FancyToastWidget, K2Node_CreateDelegate_OutputDelegate_1) == 0x000120, "Member 'FancyToastWidget_C_ExecuteUbergraph_FancyToastWidget::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");

struct FancyToastWidget_C_OnLoaded_9A8F5ACC4328AC430C10CEB22D17B3C8 final
{
public:
	class UObject*                                Loaded;
};
static_assert(alignof(FancyToastWidget_C_OnLoaded_9A8F5ACC4328AC430C10CEB22D17B3C8) == 0x000008, "Wrong alignment on FancyToastWidget_C_OnLoaded_9A8F5ACC4328AC430C10CEB22D17B3C8");
static_assert(sizeof(FancyToastWidget_C_OnLoaded_9A8F5ACC4328AC430C10CEB22D17B3C8) == 0x000008, "Wrong size on FancyToastWidget_C_OnLoaded_9A8F5ACC4328AC430C10CEB22D17B3C8");
static_assert(offsetof(FancyToastWidget_C_OnLoaded_9A8F5ACC4328AC430C10CEB22D17B3C8, Loaded) == 0x000000, "Member 'FancyToastWidget_C_OnLoaded_9A8F5ACC4328AC430C10CEB22D17B3C8::Loaded' has a wrong offset!");

struct FancyToastWidget_C_OnMouseButtonDown final
{
public:
	struct FGeometry                              MyGeometry;
	struct FPointerEvent                          MouseEvent;
	struct FEventReply                            ReturnValue;
	struct FEventReply                            CallFunc_Unhandled_ReturnValue;
	struct FKey                                   CallFunc_PointerEvent_GetEffectingButton_ReturnValue;
	bool                                          CallFunc_EqualEqual_KeyKey_ReturnValue;
	uint8                                         Pad_261[0x7];
	struct FEventReply                            CallFunc_Handled_ReturnValue;
	struct FEventReply                            CallFunc_CaptureMouse_ReturnValue;
};
static_assert(alignof(FancyToastWidget_C_OnMouseButtonDown) == 0x000008, "Wrong alignment on FancyToastWidget_C_OnMouseButtonDown");
static_assert(sizeof(FancyToastWidget_C_OnMouseButtonDown) == 0x0003D8, "Wrong size on FancyToastWidget_C_OnMouseButtonDown");
static_assert(offsetof(FancyToastWidget_C_OnMouseButtonDown, MyGeometry) == 0x000000, "Member 'FancyToastWidget_C_OnMouseButtonDown::MyGeometry' has a wrong offset!");
static_assert(offsetof(FancyToastWidget_C_OnMouseButtonDown, MouseEvent) == 0x000040, "Member 'FancyToastWidget_C_OnMouseButtonDown::MouseEvent' has a wrong offset!");
static_assert(offsetof(FancyToastWidget_C_OnMouseButtonDown, ReturnValue) == 0x0000D8, "Member 'FancyToastWidget_C_OnMouseButtonDown::ReturnValue' has a wrong offset!");
static_assert(offsetof(FancyToastWidget_C_OnMouseButtonDown, CallFunc_Unhandled_ReturnValue) == 0x000190, "Member 'FancyToastWidget_C_OnMouseButtonDown::CallFunc_Unhandled_ReturnValue' has a wrong offset!");
static_assert(offsetof(FancyToastWidget_C_OnMouseButtonDown, CallFunc_PointerEvent_GetEffectingButton_ReturnValue) == 0x000248, "Member 'FancyToastWidget_C_OnMouseButtonDown::CallFunc_PointerEvent_GetEffectingButton_ReturnValue' has a wrong offset!");
static_assert(offsetof(FancyToastWidget_C_OnMouseButtonDown, CallFunc_EqualEqual_KeyKey_ReturnValue) == 0x000260, "Member 'FancyToastWidget_C_OnMouseButtonDown::CallFunc_EqualEqual_KeyKey_ReturnValue' has a wrong offset!");
static_assert(offsetof(FancyToastWidget_C_OnMouseButtonDown, CallFunc_Handled_ReturnValue) == 0x000268, "Member 'FancyToastWidget_C_OnMouseButtonDown::CallFunc_Handled_ReturnValue' has a wrong offset!");
static_assert(offsetof(FancyToastWidget_C_OnMouseButtonDown, CallFunc_CaptureMouse_ReturnValue) == 0x000320, "Member 'FancyToastWidget_C_OnMouseButtonDown::CallFunc_CaptureMouse_ReturnValue' has a wrong offset!");

struct FancyToastWidget_C_OnMouseButtonUp final
{
public:
	struct FGeometry                              MyGeometry;
	struct FPointerEvent                          MouseEvent;
	struct FEventReply                            ReturnValue;
	struct FEventReply                            CallFunc_Unhandled_ReturnValue;
	int32                                         CallFunc_PointerEvent_GetPointerIndex_ReturnValue;
	int32                                         CallFunc_PointerEvent_GetUserIndex_ReturnValue;
	struct FKey                                   CallFunc_PointerEvent_GetEffectingButton_ReturnValue;
	bool                                          CallFunc_HasMouseCaptureByUser_ReturnValue;
	bool                                          CallFunc_EqualEqual_KeyKey_ReturnValue;
	uint8                                         Pad_26A[0x6];
	struct FEventReply                            CallFunc_Handled_ReturnValue;
	struct FEventReply                            CallFunc_ReleaseMouseCapture_ReturnValue;
};
static_assert(alignof(FancyToastWidget_C_OnMouseButtonUp) == 0x000008, "Wrong alignment on FancyToastWidget_C_OnMouseButtonUp");
static_assert(sizeof(FancyToastWidget_C_OnMouseButtonUp) == 0x0003E0, "Wrong size on FancyToastWidget_C_OnMouseButtonUp");
static_assert(offsetof(FancyToastWidget_C_OnMouseButtonUp, MyGeometry) == 0x000000, "Member 'FancyToastWidget_C_OnMouseButtonUp::MyGeometry' has a wrong offset!");
static_assert(offsetof(FancyToastWidget_C_OnMouseButtonUp, MouseEvent) == 0x000040, "Member 'FancyToastWidget_C_OnMouseButtonUp::MouseEvent' has a wrong offset!");
static_assert(offsetof(FancyToastWidget_C_OnMouseButtonUp, ReturnValue) == 0x0000D8, "Member 'FancyToastWidget_C_OnMouseButtonUp::ReturnValue' has a wrong offset!");
static_assert(offsetof(FancyToastWidget_C_OnMouseButtonUp, CallFunc_Unhandled_ReturnValue) == 0x000190, "Member 'FancyToastWidget_C_OnMouseButtonUp::CallFunc_Unhandled_ReturnValue' has a wrong offset!");
static_assert(offsetof(FancyToastWidget_C_OnMouseButtonUp, CallFunc_PointerEvent_GetPointerIndex_ReturnValue) == 0x000248, "Member 'FancyToastWidget_C_OnMouseButtonUp::CallFunc_PointerEvent_GetPointerIndex_ReturnValue' has a wrong offset!");
static_assert(offsetof(FancyToastWidget_C_OnMouseButtonUp, CallFunc_PointerEvent_GetUserIndex_ReturnValue) == 0x00024C, "Member 'FancyToastWidget_C_OnMouseButtonUp::CallFunc_PointerEvent_GetUserIndex_ReturnValue' has a wrong offset!");
static_assert(offsetof(FancyToastWidget_C_OnMouseButtonUp, CallFunc_PointerEvent_GetEffectingButton_ReturnValue) == 0x000250, "Member 'FancyToastWidget_C_OnMouseButtonUp::CallFunc_PointerEvent_GetEffectingButton_ReturnValue' has a wrong offset!");
static_assert(offsetof(FancyToastWidget_C_OnMouseButtonUp, CallFunc_HasMouseCaptureByUser_ReturnValue) == 0x000268, "Member 'FancyToastWidget_C_OnMouseButtonUp::CallFunc_HasMouseCaptureByUser_ReturnValue' has a wrong offset!");
static_assert(offsetof(FancyToastWidget_C_OnMouseButtonUp, CallFunc_EqualEqual_KeyKey_ReturnValue) == 0x000269, "Member 'FancyToastWidget_C_OnMouseButtonUp::CallFunc_EqualEqual_KeyKey_ReturnValue' has a wrong offset!");
static_assert(offsetof(FancyToastWidget_C_OnMouseButtonUp, CallFunc_Handled_ReturnValue) == 0x000270, "Member 'FancyToastWidget_C_OnMouseButtonUp::CallFunc_Handled_ReturnValue' has a wrong offset!");
static_assert(offsetof(FancyToastWidget_C_OnMouseButtonUp, CallFunc_ReleaseMouseCapture_ReturnValue) == 0x000328, "Member 'FancyToastWidget_C_OnMouseButtonUp::CallFunc_ReleaseMouseCapture_ReturnValue' has a wrong offset!");

struct FancyToastWidget_C_OnShowToast final
{
public:
	struct FFortToastDisplayInfo                  DispalyInfo;
};
static_assert(alignof(FancyToastWidget_C_OnShowToast) == 0x000008, "Wrong alignment on FancyToastWidget_C_OnShowToast");
static_assert(sizeof(FancyToastWidget_C_OnShowToast) == 0x000060, "Wrong size on FancyToastWidget_C_OnShowToast");
static_assert(offsetof(FancyToastWidget_C_OnShowToast, DispalyInfo) == 0x000000, "Member 'FancyToastWidget_C_OnShowToast::DispalyInfo' has a wrong offset!");

struct FancyToastWidget_C_SetAndShowText final
{
public:
	class FText                                   Text;
	class UCommonTextBlock*                       TextBlock;
	class UCommonTextBlock*                       LocalTextBlock;
	class FText                                   LocalText;
	bool                                          CallFunc_TextIsEmpty_ReturnValue;
	uint8                                         Pad_41[0x7];
	class FText                                   CallFunc_TextToUpper_ReturnValue;
};
static_assert(alignof(FancyToastWidget_C_SetAndShowText) == 0x000008, "Wrong alignment on FancyToastWidget_C_SetAndShowText");
static_assert(sizeof(FancyToastWidget_C_SetAndShowText) == 0x000060, "Wrong size on FancyToastWidget_C_SetAndShowText");
static_assert(offsetof(FancyToastWidget_C_SetAndShowText, Text) == 0x000000, "Member 'FancyToastWidget_C_SetAndShowText::Text' has a wrong offset!");
static_assert(offsetof(FancyToastWidget_C_SetAndShowText, TextBlock) == 0x000018, "Member 'FancyToastWidget_C_SetAndShowText::TextBlock' has a wrong offset!");
static_assert(offsetof(FancyToastWidget_C_SetAndShowText, LocalTextBlock) == 0x000020, "Member 'FancyToastWidget_C_SetAndShowText::LocalTextBlock' has a wrong offset!");
static_assert(offsetof(FancyToastWidget_C_SetAndShowText, LocalText) == 0x000028, "Member 'FancyToastWidget_C_SetAndShowText::LocalText' has a wrong offset!");
static_assert(offsetof(FancyToastWidget_C_SetAndShowText, CallFunc_TextIsEmpty_ReturnValue) == 0x000040, "Member 'FancyToastWidget_C_SetAndShowText::CallFunc_TextIsEmpty_ReturnValue' has a wrong offset!");
static_assert(offsetof(FancyToastWidget_C_SetAndShowText, CallFunc_TextToUpper_ReturnValue) == 0x000048, "Member 'FancyToastWidget_C_SetAndShowText::CallFunc_TextToUpper_ReturnValue' has a wrong offset!");

struct FancyToastWidget_C_ShowToast final
{
public:
	struct FFortToastDisplayInfo                  DisplayInfo;
	uint8                                         Temp_byte_Variable;
	uint8                                         Pad_61[0x7];
	class UWidget*                                K2Node_Select_Default;
};
static_assert(alignof(FancyToastWidget_C_ShowToast) == 0x000008, "Wrong alignment on FancyToastWidget_C_ShowToast");
static_assert(sizeof(FancyToastWidget_C_ShowToast) == 0x000070, "Wrong size on FancyToastWidget_C_ShowToast");
static_assert(offsetof(FancyToastWidget_C_ShowToast, DisplayInfo) == 0x000000, "Member 'FancyToastWidget_C_ShowToast::DisplayInfo' has a wrong offset!");
static_assert(offsetof(FancyToastWidget_C_ShowToast, Temp_byte_Variable) == 0x000060, "Member 'FancyToastWidget_C_ShowToast::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(FancyToastWidget_C_ShowToast, K2Node_Select_Default) == 0x000068, "Member 'FancyToastWidget_C_ShowToast::K2Node_Select_Default' has a wrong offset!");

}
