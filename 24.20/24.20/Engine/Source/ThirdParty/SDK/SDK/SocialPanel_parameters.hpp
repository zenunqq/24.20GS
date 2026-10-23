#pragma once

#include "Basic.hpp"

#include "SlateCore_structs.hpp"
#include "UMG_structs.hpp"

namespace SDK::Params
{

struct SocialPanel_C_BndEvt__SocialPanel_TopBarExtension_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature final
{
public:
	class UCommonButtonLegacy*                    Button;
};
static_assert(alignof(SocialPanel_C_BndEvt__SocialPanel_TopBarExtension_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature) == 0x000008, "Wrong alignment on SocialPanel_C_BndEvt__SocialPanel_TopBarExtension_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature");
static_assert(sizeof(SocialPanel_C_BndEvt__SocialPanel_TopBarExtension_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature) == 0x000008, "Wrong size on SocialPanel_C_BndEvt__SocialPanel_TopBarExtension_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature");
static_assert(offsetof(SocialPanel_C_BndEvt__SocialPanel_TopBarExtension_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature, Button) == 0x000000, "Member 'SocialPanel_C_BndEvt__SocialPanel_TopBarExtension_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature::Button' has a wrong offset!");

struct SocialPanel_C_ExecuteUbergraph_SocialPanel final
{
public:
	int32                                         EntryPoint;
	uint8                                         Pad_4[0x4];
	class UCommonButtonLegacy*                    K2Node_ComponentBoundEvent_Button;
	bool                                          CallFunc_IsAnySlideOutMenuOpen_ReturnValue;
	uint8                                         Pad_11[0x7];
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue_1;
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;
	bool                                          CallFunc_IsAnimationPlaying_ReturnValue;
	bool                                          CallFunc_IsAnimationPlayingForward_ReturnValue;
	uint8                                         Pad_36[0x2];
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_1;
};
static_assert(alignof(SocialPanel_C_ExecuteUbergraph_SocialPanel) == 0x000008, "Wrong alignment on SocialPanel_C_ExecuteUbergraph_SocialPanel");
static_assert(sizeof(SocialPanel_C_ExecuteUbergraph_SocialPanel) == 0x000048, "Wrong size on SocialPanel_C_ExecuteUbergraph_SocialPanel");
static_assert(offsetof(SocialPanel_C_ExecuteUbergraph_SocialPanel, EntryPoint) == 0x000000, "Member 'SocialPanel_C_ExecuteUbergraph_SocialPanel::EntryPoint' has a wrong offset!");
static_assert(offsetof(SocialPanel_C_ExecuteUbergraph_SocialPanel, K2Node_ComponentBoundEvent_Button) == 0x000008, "Member 'SocialPanel_C_ExecuteUbergraph_SocialPanel::K2Node_ComponentBoundEvent_Button' has a wrong offset!");
static_assert(offsetof(SocialPanel_C_ExecuteUbergraph_SocialPanel, CallFunc_IsAnySlideOutMenuOpen_ReturnValue) == 0x000010, "Member 'SocialPanel_C_ExecuteUbergraph_SocialPanel::CallFunc_IsAnySlideOutMenuOpen_ReturnValue' has a wrong offset!");
static_assert(offsetof(SocialPanel_C_ExecuteUbergraph_SocialPanel, CallFunc_PlayAnimation_ReturnValue) == 0x000018, "Member 'SocialPanel_C_ExecuteUbergraph_SocialPanel::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");
static_assert(offsetof(SocialPanel_C_ExecuteUbergraph_SocialPanel, CallFunc_PlayAnimation_ReturnValue_1) == 0x000020, "Member 'SocialPanel_C_ExecuteUbergraph_SocialPanel::CallFunc_PlayAnimation_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(SocialPanel_C_ExecuteUbergraph_SocialPanel, K2Node_CreateDelegate_OutputDelegate) == 0x000028, "Member 'SocialPanel_C_ExecuteUbergraph_SocialPanel::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(SocialPanel_C_ExecuteUbergraph_SocialPanel, CallFunc_IsAnimationPlaying_ReturnValue) == 0x000034, "Member 'SocialPanel_C_ExecuteUbergraph_SocialPanel::CallFunc_IsAnimationPlaying_ReturnValue' has a wrong offset!");
static_assert(offsetof(SocialPanel_C_ExecuteUbergraph_SocialPanel, CallFunc_IsAnimationPlayingForward_ReturnValue) == 0x000035, "Member 'SocialPanel_C_ExecuteUbergraph_SocialPanel::CallFunc_IsAnimationPlayingForward_ReturnValue' has a wrong offset!");
static_assert(offsetof(SocialPanel_C_ExecuteUbergraph_SocialPanel, K2Node_CreateDelegate_OutputDelegate_1) == 0x000038, "Member 'SocialPanel_C_ExecuteUbergraph_SocialPanel::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");

struct SocialPanel_C_OnMouseButtonDown_0 final
{
public:
	struct FGeometry                              MyGeometry;
	struct FPointerEvent                          MouseEvent;
	struct FEventReply                            ReturnValue;
	bool                                          CallFunc_IsActivated_ReturnValue;
	uint8                                         Pad_191[0x7];
	struct FEventReply                            CallFunc_Unhandled_ReturnValue;
	bool                                          CallFunc_Not_PreBool_ReturnValue;
	bool                                          CallFunc_IsAnySlideOutMenuOpen_ReturnValue;
	uint8                                         Pad_252[0x6];
	struct FEventReply                            CallFunc_Handled_ReturnValue;
	bool                                          CallFunc_BooleanOR_ReturnValue;
};
static_assert(alignof(SocialPanel_C_OnMouseButtonDown_0) == 0x000008, "Wrong alignment on SocialPanel_C_OnMouseButtonDown_0");
static_assert(sizeof(SocialPanel_C_OnMouseButtonDown_0) == 0x000318, "Wrong size on SocialPanel_C_OnMouseButtonDown_0");
static_assert(offsetof(SocialPanel_C_OnMouseButtonDown_0, MyGeometry) == 0x000000, "Member 'SocialPanel_C_OnMouseButtonDown_0::MyGeometry' has a wrong offset!");
static_assert(offsetof(SocialPanel_C_OnMouseButtonDown_0, MouseEvent) == 0x000040, "Member 'SocialPanel_C_OnMouseButtonDown_0::MouseEvent' has a wrong offset!");
static_assert(offsetof(SocialPanel_C_OnMouseButtonDown_0, ReturnValue) == 0x0000D8, "Member 'SocialPanel_C_OnMouseButtonDown_0::ReturnValue' has a wrong offset!");
static_assert(offsetof(SocialPanel_C_OnMouseButtonDown_0, CallFunc_IsActivated_ReturnValue) == 0x000190, "Member 'SocialPanel_C_OnMouseButtonDown_0::CallFunc_IsActivated_ReturnValue' has a wrong offset!");
static_assert(offsetof(SocialPanel_C_OnMouseButtonDown_0, CallFunc_Unhandled_ReturnValue) == 0x000198, "Member 'SocialPanel_C_OnMouseButtonDown_0::CallFunc_Unhandled_ReturnValue' has a wrong offset!");
static_assert(offsetof(SocialPanel_C_OnMouseButtonDown_0, CallFunc_Not_PreBool_ReturnValue) == 0x000250, "Member 'SocialPanel_C_OnMouseButtonDown_0::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(SocialPanel_C_OnMouseButtonDown_0, CallFunc_IsAnySlideOutMenuOpen_ReturnValue) == 0x000251, "Member 'SocialPanel_C_OnMouseButtonDown_0::CallFunc_IsAnySlideOutMenuOpen_ReturnValue' has a wrong offset!");
static_assert(offsetof(SocialPanel_C_OnMouseButtonDown_0, CallFunc_Handled_ReturnValue) == 0x000258, "Member 'SocialPanel_C_OnMouseButtonDown_0::CallFunc_Handled_ReturnValue' has a wrong offset!");
static_assert(offsetof(SocialPanel_C_OnMouseButtonDown_0, CallFunc_BooleanOR_ReturnValue) == 0x000310, "Member 'SocialPanel_C_OnMouseButtonDown_0::CallFunc_BooleanOR_ReturnValue' has a wrong offset!");

struct SocialPanel_C_Play_Panel_Animation_Sound final
{
public:
	bool                                          CallFunc_IsAnimationPlaying_ReturnValue;
};
static_assert(alignof(SocialPanel_C_Play_Panel_Animation_Sound) == 0x000001, "Wrong alignment on SocialPanel_C_Play_Panel_Animation_Sound");
static_assert(sizeof(SocialPanel_C_Play_Panel_Animation_Sound) == 0x000001, "Wrong size on SocialPanel_C_Play_Panel_Animation_Sound");
static_assert(offsetof(SocialPanel_C_Play_Panel_Animation_Sound, CallFunc_IsAnimationPlaying_ReturnValue) == 0x000000, "Member 'SocialPanel_C_Play_Panel_Animation_Sound::CallFunc_IsAnimationPlaying_ReturnValue' has a wrong offset!");

}
