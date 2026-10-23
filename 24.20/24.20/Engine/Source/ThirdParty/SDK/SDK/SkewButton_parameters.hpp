#pragma once

#include "Basic.hpp"

#include "SlateCore_structs.hpp"
#include "UMG_structs.hpp"
#include "CoreUObject_structs.hpp"

namespace SDK::Params
{

struct SkewButton_C_PreConstruct final
{
public:
	bool                                          IsDesignTime;
};
static_assert(alignof(SkewButton_C_PreConstruct) == 0x000001, "Wrong alignment on SkewButton_C_PreConstruct");
static_assert(sizeof(SkewButton_C_PreConstruct) == 0x000001, "Wrong size on SkewButton_C_PreConstruct");
static_assert(offsetof(SkewButton_C_PreConstruct, IsDesignTime) == 0x000000, "Member 'SkewButton_C_PreConstruct::IsDesignTime' has a wrong offset!");

struct SkewButton_C_OnMouseEnter final
{
public:
	struct FGeometry                              MyGeometry;
	struct FPointerEvent                          MouseEvent;
};
static_assert(alignof(SkewButton_C_OnMouseEnter) == 0x000008, "Wrong alignment on SkewButton_C_OnMouseEnter");
static_assert(sizeof(SkewButton_C_OnMouseEnter) == 0x0000D8, "Wrong size on SkewButton_C_OnMouseEnter");
static_assert(offsetof(SkewButton_C_OnMouseEnter, MyGeometry) == 0x000000, "Member 'SkewButton_C_OnMouseEnter::MyGeometry' has a wrong offset!");
static_assert(offsetof(SkewButton_C_OnMouseEnter, MouseEvent) == 0x000040, "Member 'SkewButton_C_OnMouseEnter::MouseEvent' has a wrong offset!");

struct SkewButton_C_OnTouchStarted final
{
public:
	struct FGeometry                              MyGeometry;
	struct FPointerEvent                          InTouchEvent;
	struct FEventReply                            ReturnValue;
	struct FEventReply                            CallFunc_Unhandled_ReturnValue;
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;
};
static_assert(alignof(SkewButton_C_OnTouchStarted) == 0x000008, "Wrong alignment on SkewButton_C_OnTouchStarted");
static_assert(sizeof(SkewButton_C_OnTouchStarted) == 0x000250, "Wrong size on SkewButton_C_OnTouchStarted");
static_assert(offsetof(SkewButton_C_OnTouchStarted, MyGeometry) == 0x000000, "Member 'SkewButton_C_OnTouchStarted::MyGeometry' has a wrong offset!");
static_assert(offsetof(SkewButton_C_OnTouchStarted, InTouchEvent) == 0x000040, "Member 'SkewButton_C_OnTouchStarted::InTouchEvent' has a wrong offset!");
static_assert(offsetof(SkewButton_C_OnTouchStarted, ReturnValue) == 0x0000D8, "Member 'SkewButton_C_OnTouchStarted::ReturnValue' has a wrong offset!");
static_assert(offsetof(SkewButton_C_OnTouchStarted, CallFunc_Unhandled_ReturnValue) == 0x000190, "Member 'SkewButton_C_OnTouchStarted::CallFunc_Unhandled_ReturnValue' has a wrong offset!");
static_assert(offsetof(SkewButton_C_OnTouchStarted, CallFunc_PlayAnimation_ReturnValue) == 0x000248, "Member 'SkewButton_C_OnTouchStarted::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");

struct SkewButton_C_OnMouseButtonUp final
{
public:
	struct FGeometry                              MyGeometry;
	struct FPointerEvent                          MouseEvent;
	struct FEventReply                            ReturnValue;
	struct FEventReply                            CallFunc_Unhandled_ReturnValue;
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;
};
static_assert(alignof(SkewButton_C_OnMouseButtonUp) == 0x000008, "Wrong alignment on SkewButton_C_OnMouseButtonUp");
static_assert(sizeof(SkewButton_C_OnMouseButtonUp) == 0x000250, "Wrong size on SkewButton_C_OnMouseButtonUp");
static_assert(offsetof(SkewButton_C_OnMouseButtonUp, MyGeometry) == 0x000000, "Member 'SkewButton_C_OnMouseButtonUp::MyGeometry' has a wrong offset!");
static_assert(offsetof(SkewButton_C_OnMouseButtonUp, MouseEvent) == 0x000040, "Member 'SkewButton_C_OnMouseButtonUp::MouseEvent' has a wrong offset!");
static_assert(offsetof(SkewButton_C_OnMouseButtonUp, ReturnValue) == 0x0000D8, "Member 'SkewButton_C_OnMouseButtonUp::ReturnValue' has a wrong offset!");
static_assert(offsetof(SkewButton_C_OnMouseButtonUp, CallFunc_Unhandled_ReturnValue) == 0x000190, "Member 'SkewButton_C_OnMouseButtonUp::CallFunc_Unhandled_ReturnValue' has a wrong offset!");
static_assert(offsetof(SkewButton_C_OnMouseButtonUp, CallFunc_PlayAnimation_ReturnValue) == 0x000248, "Member 'SkewButton_C_OnMouseButtonUp::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");

struct SkewButton_C_OnTouchEnded final
{
public:
	struct FGeometry                              MyGeometry;
	struct FPointerEvent                          InTouchEvent;
	struct FEventReply                            ReturnValue;
	struct FEventReply                            CallFunc_Unhandled_ReturnValue;
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;
};
static_assert(alignof(SkewButton_C_OnTouchEnded) == 0x000008, "Wrong alignment on SkewButton_C_OnTouchEnded");
static_assert(sizeof(SkewButton_C_OnTouchEnded) == 0x000250, "Wrong size on SkewButton_C_OnTouchEnded");
static_assert(offsetof(SkewButton_C_OnTouchEnded, MyGeometry) == 0x000000, "Member 'SkewButton_C_OnTouchEnded::MyGeometry' has a wrong offset!");
static_assert(offsetof(SkewButton_C_OnTouchEnded, InTouchEvent) == 0x000040, "Member 'SkewButton_C_OnTouchEnded::InTouchEvent' has a wrong offset!");
static_assert(offsetof(SkewButton_C_OnTouchEnded, ReturnValue) == 0x0000D8, "Member 'SkewButton_C_OnTouchEnded::ReturnValue' has a wrong offset!");
static_assert(offsetof(SkewButton_C_OnTouchEnded, CallFunc_Unhandled_ReturnValue) == 0x000190, "Member 'SkewButton_C_OnTouchEnded::CallFunc_Unhandled_ReturnValue' has a wrong offset!");
static_assert(offsetof(SkewButton_C_OnTouchEnded, CallFunc_PlayAnimation_ReturnValue) == 0x000248, "Member 'SkewButton_C_OnTouchEnded::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");

struct SkewButton_C_OnMouseButtonDown final
{
public:
	struct FGeometry                              MyGeometry;
	struct FPointerEvent                          MouseEvent;
	struct FEventReply                            ReturnValue;
	struct FEventReply                            CallFunc_Unhandled_ReturnValue;
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;
};
static_assert(alignof(SkewButton_C_OnMouseButtonDown) == 0x000008, "Wrong alignment on SkewButton_C_OnMouseButtonDown");
static_assert(sizeof(SkewButton_C_OnMouseButtonDown) == 0x000250, "Wrong size on SkewButton_C_OnMouseButtonDown");
static_assert(offsetof(SkewButton_C_OnMouseButtonDown, MyGeometry) == 0x000000, "Member 'SkewButton_C_OnMouseButtonDown::MyGeometry' has a wrong offset!");
static_assert(offsetof(SkewButton_C_OnMouseButtonDown, MouseEvent) == 0x000040, "Member 'SkewButton_C_OnMouseButtonDown::MouseEvent' has a wrong offset!");
static_assert(offsetof(SkewButton_C_OnMouseButtonDown, ReturnValue) == 0x0000D8, "Member 'SkewButton_C_OnMouseButtonDown::ReturnValue' has a wrong offset!");
static_assert(offsetof(SkewButton_C_OnMouseButtonDown, CallFunc_Unhandled_ReturnValue) == 0x000190, "Member 'SkewButton_C_OnMouseButtonDown::CallFunc_Unhandled_ReturnValue' has a wrong offset!");
static_assert(offsetof(SkewButton_C_OnMouseButtonDown, CallFunc_PlayAnimation_ReturnValue) == 0x000248, "Member 'SkewButton_C_OnMouseButtonDown::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");

struct SkewButton_C_OnMouseLeave final
{
public:
	struct FPointerEvent                          MouseEvent;
};
static_assert(alignof(SkewButton_C_OnMouseLeave) == 0x000008, "Wrong alignment on SkewButton_C_OnMouseLeave");
static_assert(sizeof(SkewButton_C_OnMouseLeave) == 0x000098, "Wrong size on SkewButton_C_OnMouseLeave");
static_assert(offsetof(SkewButton_C_OnMouseLeave, MouseEvent) == 0x000000, "Member 'SkewButton_C_OnMouseLeave::MouseEvent' has a wrong offset!");

struct SkewButton_C_ExecuteUbergraph_SkewButton final
{
public:
	int32                                         EntryPoint;
	bool                                          Temp_bool_Variable;
	uint8                                         Pad_5[0x3];
	double                                        CallFunc_RandomFloatInRange_ReturnValue;
	double                                        CallFunc_RandomFloatInRange_ReturnValue_1;
	struct FVector2D                              CallFunc_MakeVector2D_ReturnValue;
	float                                         CallFunc_RGBToHSV_H;
	float                                         CallFunc_RGBToHSV_S;
	float                                         CallFunc_RGBToHSV_V;
	float                                         CallFunc_RGBToHSV_A;
	class UMaterialInstanceDynamic*               CallFunc_GetDynamicMaterial_ReturnValue;
	double                                        CallFunc_Multiply_DoubleDouble_ReturnValue;
	double                                        CallFunc_Multiply_DoubleDouble_ReturnValue_1;
	struct FLinearColor                           CallFunc_HSVToRGB_ReturnValue;
	bool                                          Temp_bool_Variable_1;
	uint8                                         Pad_61[0x7];
	class UMaterialInterface*                     Temp_object_Variable;
	class UMaterialInterface*                     Temp_object_Variable_1;
	struct FGeometry                              K2Node_Event_MyGeometry;
	struct FPointerEvent                          K2Node_Event_MouseEvent_1;
	class UMaterialInterface*                     K2Node_Select_Default;
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue_1;
	struct FPointerEvent                          K2Node_Event_MouseEvent;
	bool                                          K2Node_Event_IsDesignTime;
	uint8                                         Pad_201[0x3];
	float                                         CallFunc_BreakColor_R;
	float                                         CallFunc_BreakColor_G;
	float                                         CallFunc_BreakColor_B;
	float                                         CallFunc_BreakColor_A;
	bool                                          CallFunc_EqualEqual_DoubleDouble_ReturnValue;
	uint8                                         Pad_215[0x3];
	struct FLinearColor                           K2Node_Select_Default_1;
	double                                        CallFunc_Multiply_DoubleDouble_A_ImplicitCast;
	double                                        CallFunc_Multiply_DoubleDouble_A_ImplicitCast_1;
	float                                         CallFunc_HSVToRGB_V_ImplicitCast;
	float                                         CallFunc_HSVToRGB_S_ImplicitCast;
	double                                        CallFunc_EqualEqual_DoubleDouble_A_ImplicitCast;
};
static_assert(alignof(SkewButton_C_ExecuteUbergraph_SkewButton) == 0x000008, "Wrong alignment on SkewButton_C_ExecuteUbergraph_SkewButton");
static_assert(sizeof(SkewButton_C_ExecuteUbergraph_SkewButton) == 0x000248, "Wrong size on SkewButton_C_ExecuteUbergraph_SkewButton");
static_assert(offsetof(SkewButton_C_ExecuteUbergraph_SkewButton, EntryPoint) == 0x000000, "Member 'SkewButton_C_ExecuteUbergraph_SkewButton::EntryPoint' has a wrong offset!");
static_assert(offsetof(SkewButton_C_ExecuteUbergraph_SkewButton, Temp_bool_Variable) == 0x000004, "Member 'SkewButton_C_ExecuteUbergraph_SkewButton::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(SkewButton_C_ExecuteUbergraph_SkewButton, CallFunc_RandomFloatInRange_ReturnValue) == 0x000008, "Member 'SkewButton_C_ExecuteUbergraph_SkewButton::CallFunc_RandomFloatInRange_ReturnValue' has a wrong offset!");
static_assert(offsetof(SkewButton_C_ExecuteUbergraph_SkewButton, CallFunc_RandomFloatInRange_ReturnValue_1) == 0x000010, "Member 'SkewButton_C_ExecuteUbergraph_SkewButton::CallFunc_RandomFloatInRange_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(SkewButton_C_ExecuteUbergraph_SkewButton, CallFunc_MakeVector2D_ReturnValue) == 0x000018, "Member 'SkewButton_C_ExecuteUbergraph_SkewButton::CallFunc_MakeVector2D_ReturnValue' has a wrong offset!");
static_assert(offsetof(SkewButton_C_ExecuteUbergraph_SkewButton, CallFunc_RGBToHSV_H) == 0x000028, "Member 'SkewButton_C_ExecuteUbergraph_SkewButton::CallFunc_RGBToHSV_H' has a wrong offset!");
static_assert(offsetof(SkewButton_C_ExecuteUbergraph_SkewButton, CallFunc_RGBToHSV_S) == 0x00002C, "Member 'SkewButton_C_ExecuteUbergraph_SkewButton::CallFunc_RGBToHSV_S' has a wrong offset!");
static_assert(offsetof(SkewButton_C_ExecuteUbergraph_SkewButton, CallFunc_RGBToHSV_V) == 0x000030, "Member 'SkewButton_C_ExecuteUbergraph_SkewButton::CallFunc_RGBToHSV_V' has a wrong offset!");
static_assert(offsetof(SkewButton_C_ExecuteUbergraph_SkewButton, CallFunc_RGBToHSV_A) == 0x000034, "Member 'SkewButton_C_ExecuteUbergraph_SkewButton::CallFunc_RGBToHSV_A' has a wrong offset!");
static_assert(offsetof(SkewButton_C_ExecuteUbergraph_SkewButton, CallFunc_GetDynamicMaterial_ReturnValue) == 0x000038, "Member 'SkewButton_C_ExecuteUbergraph_SkewButton::CallFunc_GetDynamicMaterial_ReturnValue' has a wrong offset!");
static_assert(offsetof(SkewButton_C_ExecuteUbergraph_SkewButton, CallFunc_Multiply_DoubleDouble_ReturnValue) == 0x000040, "Member 'SkewButton_C_ExecuteUbergraph_SkewButton::CallFunc_Multiply_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(SkewButton_C_ExecuteUbergraph_SkewButton, CallFunc_Multiply_DoubleDouble_ReturnValue_1) == 0x000048, "Member 'SkewButton_C_ExecuteUbergraph_SkewButton::CallFunc_Multiply_DoubleDouble_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(SkewButton_C_ExecuteUbergraph_SkewButton, CallFunc_HSVToRGB_ReturnValue) == 0x000050, "Member 'SkewButton_C_ExecuteUbergraph_SkewButton::CallFunc_HSVToRGB_ReturnValue' has a wrong offset!");
static_assert(offsetof(SkewButton_C_ExecuteUbergraph_SkewButton, Temp_bool_Variable_1) == 0x000060, "Member 'SkewButton_C_ExecuteUbergraph_SkewButton::Temp_bool_Variable_1' has a wrong offset!");
static_assert(offsetof(SkewButton_C_ExecuteUbergraph_SkewButton, Temp_object_Variable) == 0x000068, "Member 'SkewButton_C_ExecuteUbergraph_SkewButton::Temp_object_Variable' has a wrong offset!");
static_assert(offsetof(SkewButton_C_ExecuteUbergraph_SkewButton, Temp_object_Variable_1) == 0x000070, "Member 'SkewButton_C_ExecuteUbergraph_SkewButton::Temp_object_Variable_1' has a wrong offset!");
static_assert(offsetof(SkewButton_C_ExecuteUbergraph_SkewButton, K2Node_Event_MyGeometry) == 0x000078, "Member 'SkewButton_C_ExecuteUbergraph_SkewButton::K2Node_Event_MyGeometry' has a wrong offset!");
static_assert(offsetof(SkewButton_C_ExecuteUbergraph_SkewButton, K2Node_Event_MouseEvent_1) == 0x0000B8, "Member 'SkewButton_C_ExecuteUbergraph_SkewButton::K2Node_Event_MouseEvent_1' has a wrong offset!");
static_assert(offsetof(SkewButton_C_ExecuteUbergraph_SkewButton, K2Node_Select_Default) == 0x000150, "Member 'SkewButton_C_ExecuteUbergraph_SkewButton::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(SkewButton_C_ExecuteUbergraph_SkewButton, CallFunc_PlayAnimation_ReturnValue) == 0x000158, "Member 'SkewButton_C_ExecuteUbergraph_SkewButton::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");
static_assert(offsetof(SkewButton_C_ExecuteUbergraph_SkewButton, CallFunc_PlayAnimation_ReturnValue_1) == 0x000160, "Member 'SkewButton_C_ExecuteUbergraph_SkewButton::CallFunc_PlayAnimation_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(SkewButton_C_ExecuteUbergraph_SkewButton, K2Node_Event_MouseEvent) == 0x000168, "Member 'SkewButton_C_ExecuteUbergraph_SkewButton::K2Node_Event_MouseEvent' has a wrong offset!");
static_assert(offsetof(SkewButton_C_ExecuteUbergraph_SkewButton, K2Node_Event_IsDesignTime) == 0x000200, "Member 'SkewButton_C_ExecuteUbergraph_SkewButton::K2Node_Event_IsDesignTime' has a wrong offset!");
static_assert(offsetof(SkewButton_C_ExecuteUbergraph_SkewButton, CallFunc_BreakColor_R) == 0x000204, "Member 'SkewButton_C_ExecuteUbergraph_SkewButton::CallFunc_BreakColor_R' has a wrong offset!");
static_assert(offsetof(SkewButton_C_ExecuteUbergraph_SkewButton, CallFunc_BreakColor_G) == 0x000208, "Member 'SkewButton_C_ExecuteUbergraph_SkewButton::CallFunc_BreakColor_G' has a wrong offset!");
static_assert(offsetof(SkewButton_C_ExecuteUbergraph_SkewButton, CallFunc_BreakColor_B) == 0x00020C, "Member 'SkewButton_C_ExecuteUbergraph_SkewButton::CallFunc_BreakColor_B' has a wrong offset!");
static_assert(offsetof(SkewButton_C_ExecuteUbergraph_SkewButton, CallFunc_BreakColor_A) == 0x000210, "Member 'SkewButton_C_ExecuteUbergraph_SkewButton::CallFunc_BreakColor_A' has a wrong offset!");
static_assert(offsetof(SkewButton_C_ExecuteUbergraph_SkewButton, CallFunc_EqualEqual_DoubleDouble_ReturnValue) == 0x000214, "Member 'SkewButton_C_ExecuteUbergraph_SkewButton::CallFunc_EqualEqual_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(SkewButton_C_ExecuteUbergraph_SkewButton, K2Node_Select_Default_1) == 0x000218, "Member 'SkewButton_C_ExecuteUbergraph_SkewButton::K2Node_Select_Default_1' has a wrong offset!");
static_assert(offsetof(SkewButton_C_ExecuteUbergraph_SkewButton, CallFunc_Multiply_DoubleDouble_A_ImplicitCast) == 0x000228, "Member 'SkewButton_C_ExecuteUbergraph_SkewButton::CallFunc_Multiply_DoubleDouble_A_ImplicitCast' has a wrong offset!");
static_assert(offsetof(SkewButton_C_ExecuteUbergraph_SkewButton, CallFunc_Multiply_DoubleDouble_A_ImplicitCast_1) == 0x000230, "Member 'SkewButton_C_ExecuteUbergraph_SkewButton::CallFunc_Multiply_DoubleDouble_A_ImplicitCast_1' has a wrong offset!");
static_assert(offsetof(SkewButton_C_ExecuteUbergraph_SkewButton, CallFunc_HSVToRGB_V_ImplicitCast) == 0x000238, "Member 'SkewButton_C_ExecuteUbergraph_SkewButton::CallFunc_HSVToRGB_V_ImplicitCast' has a wrong offset!");
static_assert(offsetof(SkewButton_C_ExecuteUbergraph_SkewButton, CallFunc_HSVToRGB_S_ImplicitCast) == 0x00023C, "Member 'SkewButton_C_ExecuteUbergraph_SkewButton::CallFunc_HSVToRGB_S_ImplicitCast' has a wrong offset!");
static_assert(offsetof(SkewButton_C_ExecuteUbergraph_SkewButton, CallFunc_EqualEqual_DoubleDouble_A_ImplicitCast) == 0x000240, "Member 'SkewButton_C_ExecuteUbergraph_SkewButton::CallFunc_EqualEqual_DoubleDouble_A_ImplicitCast' has a wrong offset!");

}
