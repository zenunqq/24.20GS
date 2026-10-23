#pragma once

#include "Basic.hpp"

#include "SlateCore_structs.hpp"
#include "UMG_structs.hpp"

namespace SDK::Params
{

struct AthenaBannerSelectModal_C_BndEvt__BP_LocalPlayerBannerEditor_K2Node_ComponentBoundEvent_18_CloseBannerEditor__DelegateSignature final
{
public:
	class FName                                   IconId;
	class FName                                   ColorId;
};
static_assert(alignof(AthenaBannerSelectModal_C_BndEvt__BP_LocalPlayerBannerEditor_K2Node_ComponentBoundEvent_18_CloseBannerEditor__DelegateSignature) == 0x000004, "Wrong alignment on AthenaBannerSelectModal_C_BndEvt__BP_LocalPlayerBannerEditor_K2Node_ComponentBoundEvent_18_CloseBannerEditor__DelegateSignature");
static_assert(sizeof(AthenaBannerSelectModal_C_BndEvt__BP_LocalPlayerBannerEditor_K2Node_ComponentBoundEvent_18_CloseBannerEditor__DelegateSignature) == 0x000008, "Wrong size on AthenaBannerSelectModal_C_BndEvt__BP_LocalPlayerBannerEditor_K2Node_ComponentBoundEvent_18_CloseBannerEditor__DelegateSignature");
static_assert(offsetof(AthenaBannerSelectModal_C_BndEvt__BP_LocalPlayerBannerEditor_K2Node_ComponentBoundEvent_18_CloseBannerEditor__DelegateSignature, IconId) == 0x000000, "Member 'AthenaBannerSelectModal_C_BndEvt__BP_LocalPlayerBannerEditor_K2Node_ComponentBoundEvent_18_CloseBannerEditor__DelegateSignature::IconId' has a wrong offset!");
static_assert(offsetof(AthenaBannerSelectModal_C_BndEvt__BP_LocalPlayerBannerEditor_K2Node_ComponentBoundEvent_18_CloseBannerEditor__DelegateSignature, ColorId) == 0x000004, "Member 'AthenaBannerSelectModal_C_BndEvt__BP_LocalPlayerBannerEditor_K2Node_ComponentBoundEvent_18_CloseBannerEditor__DelegateSignature::ColorId' has a wrong offset!");

struct AthenaBannerSelectModal_C_ExecuteUbergraph_AthenaBannerSelectModal final
{
public:
	int32                                         EntryPoint;
	bool                                          CallFunc_HandleCloseAction_PassThrough;
	uint8                                         Pad_5[0x3];
	class UUMGSequencePlayer*                     CallFunc_PlayAnimationForward_ReturnValue;
	bool                                          CallFunc_HandleCloseAction_PassThrough_1;
	uint8                                         Pad_11[0x7];
	class UOverlaySlot*                           CallFunc_SlotAsOverlaySlot_ReturnValue;
	struct FMargin                                K2Node_MakeStruct_Margin;
	class FName                                   K2Node_ComponentBoundEvent_IconId;
	class FName                                   K2Node_ComponentBoundEvent_ColorId;
	bool                                          CallFunc_IsMobileGame_ReturnValue;
};
static_assert(alignof(AthenaBannerSelectModal_C_ExecuteUbergraph_AthenaBannerSelectModal) == 0x000008, "Wrong alignment on AthenaBannerSelectModal_C_ExecuteUbergraph_AthenaBannerSelectModal");
static_assert(sizeof(AthenaBannerSelectModal_C_ExecuteUbergraph_AthenaBannerSelectModal) == 0x000040, "Wrong size on AthenaBannerSelectModal_C_ExecuteUbergraph_AthenaBannerSelectModal");
static_assert(offsetof(AthenaBannerSelectModal_C_ExecuteUbergraph_AthenaBannerSelectModal, EntryPoint) == 0x000000, "Member 'AthenaBannerSelectModal_C_ExecuteUbergraph_AthenaBannerSelectModal::EntryPoint' has a wrong offset!");
static_assert(offsetof(AthenaBannerSelectModal_C_ExecuteUbergraph_AthenaBannerSelectModal, CallFunc_HandleCloseAction_PassThrough) == 0x000004, "Member 'AthenaBannerSelectModal_C_ExecuteUbergraph_AthenaBannerSelectModal::CallFunc_HandleCloseAction_PassThrough' has a wrong offset!");
static_assert(offsetof(AthenaBannerSelectModal_C_ExecuteUbergraph_AthenaBannerSelectModal, CallFunc_PlayAnimationForward_ReturnValue) == 0x000008, "Member 'AthenaBannerSelectModal_C_ExecuteUbergraph_AthenaBannerSelectModal::CallFunc_PlayAnimationForward_ReturnValue' has a wrong offset!");
static_assert(offsetof(AthenaBannerSelectModal_C_ExecuteUbergraph_AthenaBannerSelectModal, CallFunc_HandleCloseAction_PassThrough_1) == 0x000010, "Member 'AthenaBannerSelectModal_C_ExecuteUbergraph_AthenaBannerSelectModal::CallFunc_HandleCloseAction_PassThrough_1' has a wrong offset!");
static_assert(offsetof(AthenaBannerSelectModal_C_ExecuteUbergraph_AthenaBannerSelectModal, CallFunc_SlotAsOverlaySlot_ReturnValue) == 0x000018, "Member 'AthenaBannerSelectModal_C_ExecuteUbergraph_AthenaBannerSelectModal::CallFunc_SlotAsOverlaySlot_ReturnValue' has a wrong offset!");
static_assert(offsetof(AthenaBannerSelectModal_C_ExecuteUbergraph_AthenaBannerSelectModal, K2Node_MakeStruct_Margin) == 0x000020, "Member 'AthenaBannerSelectModal_C_ExecuteUbergraph_AthenaBannerSelectModal::K2Node_MakeStruct_Margin' has a wrong offset!");
static_assert(offsetof(AthenaBannerSelectModal_C_ExecuteUbergraph_AthenaBannerSelectModal, K2Node_ComponentBoundEvent_IconId) == 0x000030, "Member 'AthenaBannerSelectModal_C_ExecuteUbergraph_AthenaBannerSelectModal::K2Node_ComponentBoundEvent_IconId' has a wrong offset!");
static_assert(offsetof(AthenaBannerSelectModal_C_ExecuteUbergraph_AthenaBannerSelectModal, K2Node_ComponentBoundEvent_ColorId) == 0x000034, "Member 'AthenaBannerSelectModal_C_ExecuteUbergraph_AthenaBannerSelectModal::K2Node_ComponentBoundEvent_ColorId' has a wrong offset!");
static_assert(offsetof(AthenaBannerSelectModal_C_ExecuteUbergraph_AthenaBannerSelectModal, CallFunc_IsMobileGame_ReturnValue) == 0x000038, "Member 'AthenaBannerSelectModal_C_ExecuteUbergraph_AthenaBannerSelectModal::CallFunc_IsMobileGame_ReturnValue' has a wrong offset!");

struct AthenaBannerSelectModal_C_HandleCloseAction final
{
public:
	bool                                          PassThrough;
	bool                                          CallFunc_Attempt_Leave_Picker_Left;
};
static_assert(alignof(AthenaBannerSelectModal_C_HandleCloseAction) == 0x000001, "Wrong alignment on AthenaBannerSelectModal_C_HandleCloseAction");
static_assert(sizeof(AthenaBannerSelectModal_C_HandleCloseAction) == 0x000002, "Wrong size on AthenaBannerSelectModal_C_HandleCloseAction");
static_assert(offsetof(AthenaBannerSelectModal_C_HandleCloseAction, PassThrough) == 0x000000, "Member 'AthenaBannerSelectModal_C_HandleCloseAction::PassThrough' has a wrong offset!");
static_assert(offsetof(AthenaBannerSelectModal_C_HandleCloseAction, CallFunc_Attempt_Leave_Picker_Left) == 0x000001, "Member 'AthenaBannerSelectModal_C_HandleCloseAction::CallFunc_Attempt_Leave_Picker_Left' has a wrong offset!");

struct AthenaBannerSelectModal_C_On_BorderTouch_MouseButtonDown_0 final
{
public:
	struct FGeometry                              MyGeometry;
	struct FPointerEvent                          MouseEvent;
	struct FEventReply                            ReturnValue;
	struct FEventReply                            CallFunc_Unhandled_ReturnValue;
	bool                                          CallFunc_IsMobileGame_ReturnValue;
	uint8                                         Pad_249[0x7];
	struct FEventReply                            CallFunc_Handled_ReturnValue;
};
static_assert(alignof(AthenaBannerSelectModal_C_On_BorderTouch_MouseButtonDown_0) == 0x000008, "Wrong alignment on AthenaBannerSelectModal_C_On_BorderTouch_MouseButtonDown_0");
static_assert(sizeof(AthenaBannerSelectModal_C_On_BorderTouch_MouseButtonDown_0) == 0x000308, "Wrong size on AthenaBannerSelectModal_C_On_BorderTouch_MouseButtonDown_0");
static_assert(offsetof(AthenaBannerSelectModal_C_On_BorderTouch_MouseButtonDown_0, MyGeometry) == 0x000000, "Member 'AthenaBannerSelectModal_C_On_BorderTouch_MouseButtonDown_0::MyGeometry' has a wrong offset!");
static_assert(offsetof(AthenaBannerSelectModal_C_On_BorderTouch_MouseButtonDown_0, MouseEvent) == 0x000040, "Member 'AthenaBannerSelectModal_C_On_BorderTouch_MouseButtonDown_0::MouseEvent' has a wrong offset!");
static_assert(offsetof(AthenaBannerSelectModal_C_On_BorderTouch_MouseButtonDown_0, ReturnValue) == 0x0000D8, "Member 'AthenaBannerSelectModal_C_On_BorderTouch_MouseButtonDown_0::ReturnValue' has a wrong offset!");
static_assert(offsetof(AthenaBannerSelectModal_C_On_BorderTouch_MouseButtonDown_0, CallFunc_Unhandled_ReturnValue) == 0x000190, "Member 'AthenaBannerSelectModal_C_On_BorderTouch_MouseButtonDown_0::CallFunc_Unhandled_ReturnValue' has a wrong offset!");
static_assert(offsetof(AthenaBannerSelectModal_C_On_BorderTouch_MouseButtonDown_0, CallFunc_IsMobileGame_ReturnValue) == 0x000248, "Member 'AthenaBannerSelectModal_C_On_BorderTouch_MouseButtonDown_0::CallFunc_IsMobileGame_ReturnValue' has a wrong offset!");
static_assert(offsetof(AthenaBannerSelectModal_C_On_BorderTouch_MouseButtonDown_0, CallFunc_Handled_ReturnValue) == 0x000250, "Member 'AthenaBannerSelectModal_C_On_BorderTouch_MouseButtonDown_0::CallFunc_Handled_ReturnValue' has a wrong offset!");

struct AthenaBannerSelectModal_C_Setup_Input_Action_Handlers final
{
public:
	TDelegate<void(bool* bPassThrough)>           K2Node_CreateDelegate_OutputDelegate;
};
static_assert(alignof(AthenaBannerSelectModal_C_Setup_Input_Action_Handlers) == 0x000004, "Wrong alignment on AthenaBannerSelectModal_C_Setup_Input_Action_Handlers");
static_assert(sizeof(AthenaBannerSelectModal_C_Setup_Input_Action_Handlers) == 0x00000C, "Wrong size on AthenaBannerSelectModal_C_Setup_Input_Action_Handlers");
static_assert(offsetof(AthenaBannerSelectModal_C_Setup_Input_Action_Handlers, K2Node_CreateDelegate_OutputDelegate) == 0x000000, "Member 'AthenaBannerSelectModal_C_Setup_Input_Action_Handlers::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");

}
