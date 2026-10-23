#pragma once

#include "Basic.hpp"

#include "CommonInput_structs.hpp"
#include "UMG_structs.hpp"

namespace SDK::Params
{

struct BPS24_AboutModal_C_BndEvt__Button_Accept_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature final
{
public:
	class UCommonButtonLegacy*                    Button;
};
static_assert(alignof(BPS24_AboutModal_C_BndEvt__Button_Accept_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature) == 0x000008, "Wrong alignment on BPS24_AboutModal_C_BndEvt__Button_Accept_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature");
static_assert(sizeof(BPS24_AboutModal_C_BndEvt__Button_Accept_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature) == 0x000008, "Wrong size on BPS24_AboutModal_C_BndEvt__Button_Accept_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature");
static_assert(offsetof(BPS24_AboutModal_C_BndEvt__Button_Accept_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature, Button) == 0x000000, "Member 'BPS24_AboutModal_C_BndEvt__Button_Accept_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature::Button' has a wrong offset!");

struct BPS24_AboutModal_C_BndEvt__Button_CloseMobile_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature final
{
public:
	class UCommonButtonLegacy*                    Button;
};
static_assert(alignof(BPS24_AboutModal_C_BndEvt__Button_CloseMobile_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature) == 0x000008, "Wrong alignment on BPS24_AboutModal_C_BndEvt__Button_CloseMobile_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature");
static_assert(sizeof(BPS24_AboutModal_C_BndEvt__Button_CloseMobile_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature) == 0x000008, "Wrong size on BPS24_AboutModal_C_BndEvt__Button_CloseMobile_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature");
static_assert(offsetof(BPS24_AboutModal_C_BndEvt__Button_CloseMobile_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature, Button) == 0x000000, "Member 'BPS24_AboutModal_C_BndEvt__Button_CloseMobile_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature::Button' has a wrong offset!");

struct BPS24_AboutModal_C_BndEvt__Button_HoldCloseController_K2Node_ComponentBoundEvent_4_CommonButtonClicked__DelegateSignature final
{
public:
	class UCommonButtonLegacy*                    Button;
};
static_assert(alignof(BPS24_AboutModal_C_BndEvt__Button_HoldCloseController_K2Node_ComponentBoundEvent_4_CommonButtonClicked__DelegateSignature) == 0x000008, "Wrong alignment on BPS24_AboutModal_C_BndEvt__Button_HoldCloseController_K2Node_ComponentBoundEvent_4_CommonButtonClicked__DelegateSignature");
static_assert(sizeof(BPS24_AboutModal_C_BndEvt__Button_HoldCloseController_K2Node_ComponentBoundEvent_4_CommonButtonClicked__DelegateSignature) == 0x000008, "Wrong size on BPS24_AboutModal_C_BndEvt__Button_HoldCloseController_K2Node_ComponentBoundEvent_4_CommonButtonClicked__DelegateSignature");
static_assert(offsetof(BPS24_AboutModal_C_BndEvt__Button_HoldCloseController_K2Node_ComponentBoundEvent_4_CommonButtonClicked__DelegateSignature, Button) == 0x000000, "Member 'BPS24_AboutModal_C_BndEvt__Button_HoldCloseController_K2Node_ComponentBoundEvent_4_CommonButtonClicked__DelegateSignature::Button' has a wrong offset!");

struct BPS24_AboutModal_C_BndEvt__Button_Next_K2Node_ComponentBoundEvent_2_CommonButtonClicked__DelegateSignature final
{
public:
	class UCommonButtonLegacy*                    Button;
};
static_assert(alignof(BPS24_AboutModal_C_BndEvt__Button_Next_K2Node_ComponentBoundEvent_2_CommonButtonClicked__DelegateSignature) == 0x000008, "Wrong alignment on BPS24_AboutModal_C_BndEvt__Button_Next_K2Node_ComponentBoundEvent_2_CommonButtonClicked__DelegateSignature");
static_assert(sizeof(BPS24_AboutModal_C_BndEvt__Button_Next_K2Node_ComponentBoundEvent_2_CommonButtonClicked__DelegateSignature) == 0x000008, "Wrong size on BPS24_AboutModal_C_BndEvt__Button_Next_K2Node_ComponentBoundEvent_2_CommonButtonClicked__DelegateSignature");
static_assert(offsetof(BPS24_AboutModal_C_BndEvt__Button_Next_K2Node_ComponentBoundEvent_2_CommonButtonClicked__DelegateSignature, Button) == 0x000000, "Member 'BPS24_AboutModal_C_BndEvt__Button_Next_K2Node_ComponentBoundEvent_2_CommonButtonClicked__DelegateSignature::Button' has a wrong offset!");

struct BPS24_AboutModal_C_ExecuteUbergraph_BPS24_AboutModal final
{
public:
	int32                                         EntryPoint;
	ESlateVisibility                              Temp_byte_Variable;
	uint8                                         Pad_5[0x3];
	class UCommonInputSubsystem*                  CallFunc_GetContext_ReturnValue;
	ECommonInputType                              CallFunc_GetCurrentInputType_ReturnValue;
	uint8                                         Pad_11[0x7];
	class UCommonInputSubsystem*                  CallFunc_GetContext_ReturnValue_1;
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;
	uint8                                         Pad_2C[0x4];
	class UCommonButtonLegacy*                    K2Node_ComponentBoundEvent_Button_3;
	class UCommonButtonLegacy*                    K2Node_ComponentBoundEvent_Button_2;
	int32                                         CallFunc_GetActiveWidgetIndex_ReturnValue;
	bool                                          K2Node_SwitchInteger_CmpSuccess;
	bool                                          K2Node_Event_IsDesignTime;
	uint8                                         Pad_46[0x2];
	class UCommonButtonLegacy*                    K2Node_ComponentBoundEvent_Button_1;
	ESlateVisibility                              Temp_byte_Variable_1;
	uint8                                         Pad_51[0x3];
	TDelegate<void(ECommonInputType bNewInputType)> K2Node_CreateDelegate_OutputDelegate_1;
	ECommonInputType                              K2Node_CustomEvent_Input;
	uint8                                         Pad_61[0x7];
	class UCommonButtonLegacy*                    K2Node_ComponentBoundEvent_Button;
	bool                                          Temp_bool_Variable;
	ESlateVisibility                              K2Node_Select_Default;
	uint8                                         Pad_72[0x6];
	class UUMGSequencePlayer*                     CallFunc_PlayAnimationForward_ReturnValue;
};
static_assert(alignof(BPS24_AboutModal_C_ExecuteUbergraph_BPS24_AboutModal) == 0x000008, "Wrong alignment on BPS24_AboutModal_C_ExecuteUbergraph_BPS24_AboutModal");
static_assert(sizeof(BPS24_AboutModal_C_ExecuteUbergraph_BPS24_AboutModal) == 0x000080, "Wrong size on BPS24_AboutModal_C_ExecuteUbergraph_BPS24_AboutModal");
static_assert(offsetof(BPS24_AboutModal_C_ExecuteUbergraph_BPS24_AboutModal, EntryPoint) == 0x000000, "Member 'BPS24_AboutModal_C_ExecuteUbergraph_BPS24_AboutModal::EntryPoint' has a wrong offset!");
static_assert(offsetof(BPS24_AboutModal_C_ExecuteUbergraph_BPS24_AboutModal, Temp_byte_Variable) == 0x000004, "Member 'BPS24_AboutModal_C_ExecuteUbergraph_BPS24_AboutModal::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(BPS24_AboutModal_C_ExecuteUbergraph_BPS24_AboutModal, CallFunc_GetContext_ReturnValue) == 0x000008, "Member 'BPS24_AboutModal_C_ExecuteUbergraph_BPS24_AboutModal::CallFunc_GetContext_ReturnValue' has a wrong offset!");
static_assert(offsetof(BPS24_AboutModal_C_ExecuteUbergraph_BPS24_AboutModal, CallFunc_GetCurrentInputType_ReturnValue) == 0x000010, "Member 'BPS24_AboutModal_C_ExecuteUbergraph_BPS24_AboutModal::CallFunc_GetCurrentInputType_ReturnValue' has a wrong offset!");
static_assert(offsetof(BPS24_AboutModal_C_ExecuteUbergraph_BPS24_AboutModal, CallFunc_GetContext_ReturnValue_1) == 0x000018, "Member 'BPS24_AboutModal_C_ExecuteUbergraph_BPS24_AboutModal::CallFunc_GetContext_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BPS24_AboutModal_C_ExecuteUbergraph_BPS24_AboutModal, K2Node_CreateDelegate_OutputDelegate) == 0x000020, "Member 'BPS24_AboutModal_C_ExecuteUbergraph_BPS24_AboutModal::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(BPS24_AboutModal_C_ExecuteUbergraph_BPS24_AboutModal, K2Node_ComponentBoundEvent_Button_3) == 0x000030, "Member 'BPS24_AboutModal_C_ExecuteUbergraph_BPS24_AboutModal::K2Node_ComponentBoundEvent_Button_3' has a wrong offset!");
static_assert(offsetof(BPS24_AboutModal_C_ExecuteUbergraph_BPS24_AboutModal, K2Node_ComponentBoundEvent_Button_2) == 0x000038, "Member 'BPS24_AboutModal_C_ExecuteUbergraph_BPS24_AboutModal::K2Node_ComponentBoundEvent_Button_2' has a wrong offset!");
static_assert(offsetof(BPS24_AboutModal_C_ExecuteUbergraph_BPS24_AboutModal, CallFunc_GetActiveWidgetIndex_ReturnValue) == 0x000040, "Member 'BPS24_AboutModal_C_ExecuteUbergraph_BPS24_AboutModal::CallFunc_GetActiveWidgetIndex_ReturnValue' has a wrong offset!");
static_assert(offsetof(BPS24_AboutModal_C_ExecuteUbergraph_BPS24_AboutModal, K2Node_SwitchInteger_CmpSuccess) == 0x000044, "Member 'BPS24_AboutModal_C_ExecuteUbergraph_BPS24_AboutModal::K2Node_SwitchInteger_CmpSuccess' has a wrong offset!");
static_assert(offsetof(BPS24_AboutModal_C_ExecuteUbergraph_BPS24_AboutModal, K2Node_Event_IsDesignTime) == 0x000045, "Member 'BPS24_AboutModal_C_ExecuteUbergraph_BPS24_AboutModal::K2Node_Event_IsDesignTime' has a wrong offset!");
static_assert(offsetof(BPS24_AboutModal_C_ExecuteUbergraph_BPS24_AboutModal, K2Node_ComponentBoundEvent_Button_1) == 0x000048, "Member 'BPS24_AboutModal_C_ExecuteUbergraph_BPS24_AboutModal::K2Node_ComponentBoundEvent_Button_1' has a wrong offset!");
static_assert(offsetof(BPS24_AboutModal_C_ExecuteUbergraph_BPS24_AboutModal, Temp_byte_Variable_1) == 0x000050, "Member 'BPS24_AboutModal_C_ExecuteUbergraph_BPS24_AboutModal::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(BPS24_AboutModal_C_ExecuteUbergraph_BPS24_AboutModal, K2Node_CreateDelegate_OutputDelegate_1) == 0x000054, "Member 'BPS24_AboutModal_C_ExecuteUbergraph_BPS24_AboutModal::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(BPS24_AboutModal_C_ExecuteUbergraph_BPS24_AboutModal, K2Node_CustomEvent_Input) == 0x000060, "Member 'BPS24_AboutModal_C_ExecuteUbergraph_BPS24_AboutModal::K2Node_CustomEvent_Input' has a wrong offset!");
static_assert(offsetof(BPS24_AboutModal_C_ExecuteUbergraph_BPS24_AboutModal, K2Node_ComponentBoundEvent_Button) == 0x000068, "Member 'BPS24_AboutModal_C_ExecuteUbergraph_BPS24_AboutModal::K2Node_ComponentBoundEvent_Button' has a wrong offset!");
static_assert(offsetof(BPS24_AboutModal_C_ExecuteUbergraph_BPS24_AboutModal, Temp_bool_Variable) == 0x000070, "Member 'BPS24_AboutModal_C_ExecuteUbergraph_BPS24_AboutModal::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(BPS24_AboutModal_C_ExecuteUbergraph_BPS24_AboutModal, K2Node_Select_Default) == 0x000071, "Member 'BPS24_AboutModal_C_ExecuteUbergraph_BPS24_AboutModal::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(BPS24_AboutModal_C_ExecuteUbergraph_BPS24_AboutModal, CallFunc_PlayAnimationForward_ReturnValue) == 0x000078, "Member 'BPS24_AboutModal_C_ExecuteUbergraph_BPS24_AboutModal::CallFunc_PlayAnimationForward_ReturnValue' has a wrong offset!");

struct BPS24_AboutModal_C_PreConstruct final
{
public:
	bool                                          IsDesignTime;
};
static_assert(alignof(BPS24_AboutModal_C_PreConstruct) == 0x000001, "Wrong alignment on BPS24_AboutModal_C_PreConstruct");
static_assert(sizeof(BPS24_AboutModal_C_PreConstruct) == 0x000001, "Wrong size on BPS24_AboutModal_C_PreConstruct");
static_assert(offsetof(BPS24_AboutModal_C_PreConstruct, IsDesignTime) == 0x000000, "Member 'BPS24_AboutModal_C_PreConstruct::IsDesignTime' has a wrong offset!");

struct BPS24_AboutModal_C_Set_pips final
{
public:
	bool                                          Pip_1_focused;
	bool                                          Pip_2_Focused;
	bool                                          Pip_3_Focused;
	bool                                          Pip_4_Focused;
};
static_assert(alignof(BPS24_AboutModal_C_Set_pips) == 0x000001, "Wrong alignment on BPS24_AboutModal_C_Set_pips");
static_assert(sizeof(BPS24_AboutModal_C_Set_pips) == 0x000004, "Wrong size on BPS24_AboutModal_C_Set_pips");
static_assert(offsetof(BPS24_AboutModal_C_Set_pips, Pip_1_focused) == 0x000000, "Member 'BPS24_AboutModal_C_Set_pips::Pip_1_focused' has a wrong offset!");
static_assert(offsetof(BPS24_AboutModal_C_Set_pips, Pip_2_Focused) == 0x000001, "Member 'BPS24_AboutModal_C_Set_pips::Pip_2_Focused' has a wrong offset!");
static_assert(offsetof(BPS24_AboutModal_C_Set_pips, Pip_3_Focused) == 0x000002, "Member 'BPS24_AboutModal_C_Set_pips::Pip_3_Focused' has a wrong offset!");
static_assert(offsetof(BPS24_AboutModal_C_Set_pips, Pip_4_Focused) == 0x000003, "Member 'BPS24_AboutModal_C_Set_pips::Pip_4_Focused' has a wrong offset!");

struct BPS24_AboutModal_C_Set_randomizer final
{
public:
	double                                        CallFunc_RandomFloatInRange_ReturnValue;
	double                                        CallFunc_RandomFloatInRange_ReturnValue_1;
	class UMaterialInstanceDynamic*               CallFunc_GetDynamicMaterial_ReturnValue;
	class UMaterialInstanceDynamic*               CallFunc_GetDynamicMaterial_ReturnValue_1;
	double                                        CallFunc_RandomFloatInRange_ReturnValue_2;
	class UMaterialInstanceDynamic*               CallFunc_GetDynamicMaterial_ReturnValue_2;
	float                                         CallFunc_SetScalarParameterValue_Value_ImplicitCast;
	float                                         CallFunc_SetScalarParameterValue_Value_ImplicitCast_1;
	float                                         CallFunc_SetScalarParameterValue_Value_ImplicitCast_2;
};
static_assert(alignof(BPS24_AboutModal_C_Set_randomizer) == 0x000008, "Wrong alignment on BPS24_AboutModal_C_Set_randomizer");
static_assert(sizeof(BPS24_AboutModal_C_Set_randomizer) == 0x000040, "Wrong size on BPS24_AboutModal_C_Set_randomizer");
static_assert(offsetof(BPS24_AboutModal_C_Set_randomizer, CallFunc_RandomFloatInRange_ReturnValue) == 0x000000, "Member 'BPS24_AboutModal_C_Set_randomizer::CallFunc_RandomFloatInRange_ReturnValue' has a wrong offset!");
static_assert(offsetof(BPS24_AboutModal_C_Set_randomizer, CallFunc_RandomFloatInRange_ReturnValue_1) == 0x000008, "Member 'BPS24_AboutModal_C_Set_randomizer::CallFunc_RandomFloatInRange_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BPS24_AboutModal_C_Set_randomizer, CallFunc_GetDynamicMaterial_ReturnValue) == 0x000010, "Member 'BPS24_AboutModal_C_Set_randomizer::CallFunc_GetDynamicMaterial_ReturnValue' has a wrong offset!");
static_assert(offsetof(BPS24_AboutModal_C_Set_randomizer, CallFunc_GetDynamicMaterial_ReturnValue_1) == 0x000018, "Member 'BPS24_AboutModal_C_Set_randomizer::CallFunc_GetDynamicMaterial_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BPS24_AboutModal_C_Set_randomizer, CallFunc_RandomFloatInRange_ReturnValue_2) == 0x000020, "Member 'BPS24_AboutModal_C_Set_randomizer::CallFunc_RandomFloatInRange_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BPS24_AboutModal_C_Set_randomizer, CallFunc_GetDynamicMaterial_ReturnValue_2) == 0x000028, "Member 'BPS24_AboutModal_C_Set_randomizer::CallFunc_GetDynamicMaterial_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BPS24_AboutModal_C_Set_randomizer, CallFunc_SetScalarParameterValue_Value_ImplicitCast) == 0x000030, "Member 'BPS24_AboutModal_C_Set_randomizer::CallFunc_SetScalarParameterValue_Value_ImplicitCast' has a wrong offset!");
static_assert(offsetof(BPS24_AboutModal_C_Set_randomizer, CallFunc_SetScalarParameterValue_Value_ImplicitCast_1) == 0x000034, "Member 'BPS24_AboutModal_C_Set_randomizer::CallFunc_SetScalarParameterValue_Value_ImplicitCast_1' has a wrong offset!");
static_assert(offsetof(BPS24_AboutModal_C_Set_randomizer, CallFunc_SetScalarParameterValue_Value_ImplicitCast_2) == 0x000038, "Member 'BPS24_AboutModal_C_Set_randomizer::CallFunc_SetScalarParameterValue_Value_ImplicitCast_2' has a wrong offset!");

struct BPS24_AboutModal_C_Set_to_page_1 final
{
public:
	class UUMGSequencePlayer*                     CallFunc_PlayAnimationForward_ReturnValue;
	class UUMGSequencePlayer*                     CallFunc_PlayAnimationForward_ReturnValue_1;
};
static_assert(alignof(BPS24_AboutModal_C_Set_to_page_1) == 0x000008, "Wrong alignment on BPS24_AboutModal_C_Set_to_page_1");
static_assert(sizeof(BPS24_AboutModal_C_Set_to_page_1) == 0x000010, "Wrong size on BPS24_AboutModal_C_Set_to_page_1");
static_assert(offsetof(BPS24_AboutModal_C_Set_to_page_1, CallFunc_PlayAnimationForward_ReturnValue) == 0x000000, "Member 'BPS24_AboutModal_C_Set_to_page_1::CallFunc_PlayAnimationForward_ReturnValue' has a wrong offset!");
static_assert(offsetof(BPS24_AboutModal_C_Set_to_page_1, CallFunc_PlayAnimationForward_ReturnValue_1) == 0x000008, "Member 'BPS24_AboutModal_C_Set_to_page_1::CallFunc_PlayAnimationForward_ReturnValue_1' has a wrong offset!");

struct BPS24_AboutModal_C_Set_to_Page_2 final
{
public:
	class UUMGSequencePlayer*                     CallFunc_PlayAnimationForward_ReturnValue;
	class UUMGSequencePlayer*                     CallFunc_PlayAnimationForward_ReturnValue_1;
};
static_assert(alignof(BPS24_AboutModal_C_Set_to_Page_2) == 0x000008, "Wrong alignment on BPS24_AboutModal_C_Set_to_Page_2");
static_assert(sizeof(BPS24_AboutModal_C_Set_to_Page_2) == 0x000010, "Wrong size on BPS24_AboutModal_C_Set_to_Page_2");
static_assert(offsetof(BPS24_AboutModal_C_Set_to_Page_2, CallFunc_PlayAnimationForward_ReturnValue) == 0x000000, "Member 'BPS24_AboutModal_C_Set_to_Page_2::CallFunc_PlayAnimationForward_ReturnValue' has a wrong offset!");
static_assert(offsetof(BPS24_AboutModal_C_Set_to_Page_2, CallFunc_PlayAnimationForward_ReturnValue_1) == 0x000008, "Member 'BPS24_AboutModal_C_Set_to_Page_2::CallFunc_PlayAnimationForward_ReturnValue_1' has a wrong offset!");

struct BPS24_AboutModal_C_Set_to_Page_3 final
{
public:
	class UUMGSequencePlayer*                     CallFunc_PlayAnimationForward_ReturnValue;
	class UUMGSequencePlayer*                     CallFunc_PlayAnimationForward_ReturnValue_1;
};
static_assert(alignof(BPS24_AboutModal_C_Set_to_Page_3) == 0x000008, "Wrong alignment on BPS24_AboutModal_C_Set_to_Page_3");
static_assert(sizeof(BPS24_AboutModal_C_Set_to_Page_3) == 0x000010, "Wrong size on BPS24_AboutModal_C_Set_to_Page_3");
static_assert(offsetof(BPS24_AboutModal_C_Set_to_Page_3, CallFunc_PlayAnimationForward_ReturnValue) == 0x000000, "Member 'BPS24_AboutModal_C_Set_to_Page_3::CallFunc_PlayAnimationForward_ReturnValue' has a wrong offset!");
static_assert(offsetof(BPS24_AboutModal_C_Set_to_Page_3, CallFunc_PlayAnimationForward_ReturnValue_1) == 0x000008, "Member 'BPS24_AboutModal_C_Set_to_Page_3::CallFunc_PlayAnimationForward_ReturnValue_1' has a wrong offset!");

struct BPS24_AboutModal_C_Set_to_Page_4 final
{
public:
	class UUMGSequencePlayer*                     CallFunc_PlayAnimationForward_ReturnValue;
	class UUMGSequencePlayer*                     CallFunc_PlayAnimationForward_ReturnValue_1;
};
static_assert(alignof(BPS24_AboutModal_C_Set_to_Page_4) == 0x000008, "Wrong alignment on BPS24_AboutModal_C_Set_to_Page_4");
static_assert(sizeof(BPS24_AboutModal_C_Set_to_Page_4) == 0x000010, "Wrong size on BPS24_AboutModal_C_Set_to_Page_4");
static_assert(offsetof(BPS24_AboutModal_C_Set_to_Page_4, CallFunc_PlayAnimationForward_ReturnValue) == 0x000000, "Member 'BPS24_AboutModal_C_Set_to_Page_4::CallFunc_PlayAnimationForward_ReturnValue' has a wrong offset!");
static_assert(offsetof(BPS24_AboutModal_C_Set_to_Page_4, CallFunc_PlayAnimationForward_ReturnValue_1) == 0x000008, "Member 'BPS24_AboutModal_C_Set_to_Page_4::CallFunc_PlayAnimationForward_ReturnValue_1' has a wrong offset!");

struct BPS24_AboutModal_C_UpdateInput final
{
public:
	ECommonInputType                              Input;
};
static_assert(alignof(BPS24_AboutModal_C_UpdateInput) == 0x000001, "Wrong alignment on BPS24_AboutModal_C_UpdateInput");
static_assert(sizeof(BPS24_AboutModal_C_UpdateInput) == 0x000001, "Wrong size on BPS24_AboutModal_C_UpdateInput");
static_assert(offsetof(BPS24_AboutModal_C_UpdateInput, Input) == 0x000000, "Member 'BPS24_AboutModal_C_UpdateInput::Input' has a wrong offset!");

}
