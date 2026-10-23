#pragma once

#include "Basic.hpp"

#include "UMG_structs.hpp"
#include "FortniteUI_structs.hpp"
#include "FortniteGame_structs.hpp"

namespace SDK::Params
{

struct AthenaCustomizationSlotButtonWrapper_C_AnimPopulateInternal final
{
public:
	int32                                         ButtonIndex;
};
static_assert(alignof(AthenaCustomizationSlotButtonWrapper_C_AnimPopulateInternal) == 0x000004, "Wrong alignment on AthenaCustomizationSlotButtonWrapper_C_AnimPopulateInternal");
static_assert(sizeof(AthenaCustomizationSlotButtonWrapper_C_AnimPopulateInternal) == 0x000004, "Wrong size on AthenaCustomizationSlotButtonWrapper_C_AnimPopulateInternal");
static_assert(offsetof(AthenaCustomizationSlotButtonWrapper_C_AnimPopulateInternal, ButtonIndex) == 0x000000, "Member 'AthenaCustomizationSlotButtonWrapper_C_AnimPopulateInternal::ButtonIndex' has a wrong offset!");

struct AthenaCustomizationSlotButtonWrapper_C_BndEvt__SlotButton_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature final
{
public:
	class UCommonButtonLegacy*                    Button;
};
static_assert(alignof(AthenaCustomizationSlotButtonWrapper_C_BndEvt__SlotButton_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature) == 0x000008, "Wrong alignment on AthenaCustomizationSlotButtonWrapper_C_BndEvt__SlotButton_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature");
static_assert(sizeof(AthenaCustomizationSlotButtonWrapper_C_BndEvt__SlotButton_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature) == 0x000008, "Wrong size on AthenaCustomizationSlotButtonWrapper_C_BndEvt__SlotButton_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature");
static_assert(offsetof(AthenaCustomizationSlotButtonWrapper_C_BndEvt__SlotButton_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature, Button) == 0x000000, "Member 'AthenaCustomizationSlotButtonWrapper_C_BndEvt__SlotButton_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature::Button' has a wrong offset!");

struct AthenaCustomizationSlotButtonWrapper_C_BndEvt__SlotButton_K2Node_ComponentBoundEvent_13_CommonButtonClicked__DelegateSignature final
{
public:
	class UCommonButtonLegacy*                    Button;
};
static_assert(alignof(AthenaCustomizationSlotButtonWrapper_C_BndEvt__SlotButton_K2Node_ComponentBoundEvent_13_CommonButtonClicked__DelegateSignature) == 0x000008, "Wrong alignment on AthenaCustomizationSlotButtonWrapper_C_BndEvt__SlotButton_K2Node_ComponentBoundEvent_13_CommonButtonClicked__DelegateSignature");
static_assert(sizeof(AthenaCustomizationSlotButtonWrapper_C_BndEvt__SlotButton_K2Node_ComponentBoundEvent_13_CommonButtonClicked__DelegateSignature) == 0x000008, "Wrong size on AthenaCustomizationSlotButtonWrapper_C_BndEvt__SlotButton_K2Node_ComponentBoundEvent_13_CommonButtonClicked__DelegateSignature");
static_assert(offsetof(AthenaCustomizationSlotButtonWrapper_C_BndEvt__SlotButton_K2Node_ComponentBoundEvent_13_CommonButtonClicked__DelegateSignature, Button) == 0x000000, "Member 'AthenaCustomizationSlotButtonWrapper_C_BndEvt__SlotButton_K2Node_ComponentBoundEvent_13_CommonButtonClicked__DelegateSignature::Button' has a wrong offset!");

struct AthenaCustomizationSlotButtonWrapper_C_BndEvt__SlotButton_K2Node_ComponentBoundEvent_47_CommonButtonClicked__DelegateSignature final
{
public:
	class UCommonButtonLegacy*                    Button;
};
static_assert(alignof(AthenaCustomizationSlotButtonWrapper_C_BndEvt__SlotButton_K2Node_ComponentBoundEvent_47_CommonButtonClicked__DelegateSignature) == 0x000008, "Wrong alignment on AthenaCustomizationSlotButtonWrapper_C_BndEvt__SlotButton_K2Node_ComponentBoundEvent_47_CommonButtonClicked__DelegateSignature");
static_assert(sizeof(AthenaCustomizationSlotButtonWrapper_C_BndEvt__SlotButton_K2Node_ComponentBoundEvent_47_CommonButtonClicked__DelegateSignature) == 0x000008, "Wrong size on AthenaCustomizationSlotButtonWrapper_C_BndEvt__SlotButton_K2Node_ComponentBoundEvent_47_CommonButtonClicked__DelegateSignature");
static_assert(offsetof(AthenaCustomizationSlotButtonWrapper_C_BndEvt__SlotButton_K2Node_ComponentBoundEvent_47_CommonButtonClicked__DelegateSignature, Button) == 0x000000, "Member 'AthenaCustomizationSlotButtonWrapper_C_BndEvt__SlotButton_K2Node_ComponentBoundEvent_47_CommonButtonClicked__DelegateSignature::Button' has a wrong offset!");

struct AthenaCustomizationSlotButtonWrapper_C_ExecuteUbergraph_AthenaCustomizationSlotButtonWrapper final
{
public:
	int32                                         EntryPoint;
	bool                                          Temp_bool_Variable;
	ESlateVisibility                              Temp_byte_Variable;
	ESlateVisibility                              Temp_byte_Variable_1;
	uint8                                         Pad_7[0x1];
	class UFortFrontEndContext*                   CallFunc_GetContext_ReturnValue;
	class UCommonButtonLegacy*                    K2Node_ComponentBoundEvent_Button_2;
	bool                                          CallFunc_CanShowLockerSlotType_ReturnValue;
	uint8                                         Pad_19[0x7];
	class UCommonButtonLegacy*                    K2Node_ComponentBoundEvent_Button_1;
	ESlateVisibility                              K2Node_Select_Default;
	uint8                                         Pad_29[0x7];
	class UCommonButtonLegacy*                    K2Node_ComponentBoundEvent_Button;
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue_1;
	struct FAthenaCustomizationParams             K2Node_MakeStruct_AthenaCustomizationParams;
	int32                                         K2Node_CustomEvent_ButtonIndex;
	int32                                         CallFunc_Add_IntInt_ReturnValue;
	double                                        CallFunc_Multiply_IntFloat_ReturnValue;
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue_2;
	float                                         CallFunc_SetCardDefaultImageAndWidth_InWidth_ImplicitCast;
	float                                         CallFunc_Delay_Duration_ImplicitCast;
};
static_assert(alignof(AthenaCustomizationSlotButtonWrapper_C_ExecuteUbergraph_AthenaCustomizationSlotButtonWrapper) == 0x000008, "Wrong alignment on AthenaCustomizationSlotButtonWrapper_C_ExecuteUbergraph_AthenaCustomizationSlotButtonWrapper");
static_assert(sizeof(AthenaCustomizationSlotButtonWrapper_C_ExecuteUbergraph_AthenaCustomizationSlotButtonWrapper) == 0x0000B0, "Wrong size on AthenaCustomizationSlotButtonWrapper_C_ExecuteUbergraph_AthenaCustomizationSlotButtonWrapper");
static_assert(offsetof(AthenaCustomizationSlotButtonWrapper_C_ExecuteUbergraph_AthenaCustomizationSlotButtonWrapper, EntryPoint) == 0x000000, "Member 'AthenaCustomizationSlotButtonWrapper_C_ExecuteUbergraph_AthenaCustomizationSlotButtonWrapper::EntryPoint' has a wrong offset!");
static_assert(offsetof(AthenaCustomizationSlotButtonWrapper_C_ExecuteUbergraph_AthenaCustomizationSlotButtonWrapper, Temp_bool_Variable) == 0x000004, "Member 'AthenaCustomizationSlotButtonWrapper_C_ExecuteUbergraph_AthenaCustomizationSlotButtonWrapper::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(AthenaCustomizationSlotButtonWrapper_C_ExecuteUbergraph_AthenaCustomizationSlotButtonWrapper, Temp_byte_Variable) == 0x000005, "Member 'AthenaCustomizationSlotButtonWrapper_C_ExecuteUbergraph_AthenaCustomizationSlotButtonWrapper::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(AthenaCustomizationSlotButtonWrapper_C_ExecuteUbergraph_AthenaCustomizationSlotButtonWrapper, Temp_byte_Variable_1) == 0x000006, "Member 'AthenaCustomizationSlotButtonWrapper_C_ExecuteUbergraph_AthenaCustomizationSlotButtonWrapper::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(AthenaCustomizationSlotButtonWrapper_C_ExecuteUbergraph_AthenaCustomizationSlotButtonWrapper, CallFunc_GetContext_ReturnValue) == 0x000008, "Member 'AthenaCustomizationSlotButtonWrapper_C_ExecuteUbergraph_AthenaCustomizationSlotButtonWrapper::CallFunc_GetContext_ReturnValue' has a wrong offset!");
static_assert(offsetof(AthenaCustomizationSlotButtonWrapper_C_ExecuteUbergraph_AthenaCustomizationSlotButtonWrapper, K2Node_ComponentBoundEvent_Button_2) == 0x000010, "Member 'AthenaCustomizationSlotButtonWrapper_C_ExecuteUbergraph_AthenaCustomizationSlotButtonWrapper::K2Node_ComponentBoundEvent_Button_2' has a wrong offset!");
static_assert(offsetof(AthenaCustomizationSlotButtonWrapper_C_ExecuteUbergraph_AthenaCustomizationSlotButtonWrapper, CallFunc_CanShowLockerSlotType_ReturnValue) == 0x000018, "Member 'AthenaCustomizationSlotButtonWrapper_C_ExecuteUbergraph_AthenaCustomizationSlotButtonWrapper::CallFunc_CanShowLockerSlotType_ReturnValue' has a wrong offset!");
static_assert(offsetof(AthenaCustomizationSlotButtonWrapper_C_ExecuteUbergraph_AthenaCustomizationSlotButtonWrapper, K2Node_ComponentBoundEvent_Button_1) == 0x000020, "Member 'AthenaCustomizationSlotButtonWrapper_C_ExecuteUbergraph_AthenaCustomizationSlotButtonWrapper::K2Node_ComponentBoundEvent_Button_1' has a wrong offset!");
static_assert(offsetof(AthenaCustomizationSlotButtonWrapper_C_ExecuteUbergraph_AthenaCustomizationSlotButtonWrapper, K2Node_Select_Default) == 0x000028, "Member 'AthenaCustomizationSlotButtonWrapper_C_ExecuteUbergraph_AthenaCustomizationSlotButtonWrapper::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(AthenaCustomizationSlotButtonWrapper_C_ExecuteUbergraph_AthenaCustomizationSlotButtonWrapper, K2Node_ComponentBoundEvent_Button) == 0x000030, "Member 'AthenaCustomizationSlotButtonWrapper_C_ExecuteUbergraph_AthenaCustomizationSlotButtonWrapper::K2Node_ComponentBoundEvent_Button' has a wrong offset!");
static_assert(offsetof(AthenaCustomizationSlotButtonWrapper_C_ExecuteUbergraph_AthenaCustomizationSlotButtonWrapper, CallFunc_PlayAnimation_ReturnValue) == 0x000038, "Member 'AthenaCustomizationSlotButtonWrapper_C_ExecuteUbergraph_AthenaCustomizationSlotButtonWrapper::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");
static_assert(offsetof(AthenaCustomizationSlotButtonWrapper_C_ExecuteUbergraph_AthenaCustomizationSlotButtonWrapper, CallFunc_PlayAnimation_ReturnValue_1) == 0x000040, "Member 'AthenaCustomizationSlotButtonWrapper_C_ExecuteUbergraph_AthenaCustomizationSlotButtonWrapper::CallFunc_PlayAnimation_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(AthenaCustomizationSlotButtonWrapper_C_ExecuteUbergraph_AthenaCustomizationSlotButtonWrapper, K2Node_MakeStruct_AthenaCustomizationParams) == 0x000048, "Member 'AthenaCustomizationSlotButtonWrapper_C_ExecuteUbergraph_AthenaCustomizationSlotButtonWrapper::K2Node_MakeStruct_AthenaCustomizationParams' has a wrong offset!");
static_assert(offsetof(AthenaCustomizationSlotButtonWrapper_C_ExecuteUbergraph_AthenaCustomizationSlotButtonWrapper, K2Node_CustomEvent_ButtonIndex) == 0x000090, "Member 'AthenaCustomizationSlotButtonWrapper_C_ExecuteUbergraph_AthenaCustomizationSlotButtonWrapper::K2Node_CustomEvent_ButtonIndex' has a wrong offset!");
static_assert(offsetof(AthenaCustomizationSlotButtonWrapper_C_ExecuteUbergraph_AthenaCustomizationSlotButtonWrapper, CallFunc_Add_IntInt_ReturnValue) == 0x000094, "Member 'AthenaCustomizationSlotButtonWrapper_C_ExecuteUbergraph_AthenaCustomizationSlotButtonWrapper::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(AthenaCustomizationSlotButtonWrapper_C_ExecuteUbergraph_AthenaCustomizationSlotButtonWrapper, CallFunc_Multiply_IntFloat_ReturnValue) == 0x000098, "Member 'AthenaCustomizationSlotButtonWrapper_C_ExecuteUbergraph_AthenaCustomizationSlotButtonWrapper::CallFunc_Multiply_IntFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(AthenaCustomizationSlotButtonWrapper_C_ExecuteUbergraph_AthenaCustomizationSlotButtonWrapper, CallFunc_PlayAnimation_ReturnValue_2) == 0x0000A0, "Member 'AthenaCustomizationSlotButtonWrapper_C_ExecuteUbergraph_AthenaCustomizationSlotButtonWrapper::CallFunc_PlayAnimation_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(AthenaCustomizationSlotButtonWrapper_C_ExecuteUbergraph_AthenaCustomizationSlotButtonWrapper, CallFunc_SetCardDefaultImageAndWidth_InWidth_ImplicitCast) == 0x0000A8, "Member 'AthenaCustomizationSlotButtonWrapper_C_ExecuteUbergraph_AthenaCustomizationSlotButtonWrapper::CallFunc_SetCardDefaultImageAndWidth_InWidth_ImplicitCast' has a wrong offset!");
static_assert(offsetof(AthenaCustomizationSlotButtonWrapper_C_ExecuteUbergraph_AthenaCustomizationSlotButtonWrapper, CallFunc_Delay_Duration_ImplicitCast) == 0x0000AC, "Member 'AthenaCustomizationSlotButtonWrapper_C_ExecuteUbergraph_AthenaCustomizationSlotButtonWrapper::CallFunc_Delay_Duration_ImplicitCast' has a wrong offset!");

struct AthenaCustomizationSlotButtonWrapper_C_GetCustomizationSlotActiveState final
{
public:
	bool                                          bCosmeticAvaialble;
	bool                                          bActive;
	bool                                          CallFunc_GetCustomizationSlotActiveState_bOutAttachableCosmeticAvailable;
	bool                                          CallFunc_GetCustomizationSlotActiveState_bOutActive;
};
static_assert(alignof(AthenaCustomizationSlotButtonWrapper_C_GetCustomizationSlotActiveState) == 0x000001, "Wrong alignment on AthenaCustomizationSlotButtonWrapper_C_GetCustomizationSlotActiveState");
static_assert(sizeof(AthenaCustomizationSlotButtonWrapper_C_GetCustomizationSlotActiveState) == 0x000004, "Wrong size on AthenaCustomizationSlotButtonWrapper_C_GetCustomizationSlotActiveState");
static_assert(offsetof(AthenaCustomizationSlotButtonWrapper_C_GetCustomizationSlotActiveState, bCosmeticAvaialble) == 0x000000, "Member 'AthenaCustomizationSlotButtonWrapper_C_GetCustomizationSlotActiveState::bCosmeticAvaialble' has a wrong offset!");
static_assert(offsetof(AthenaCustomizationSlotButtonWrapper_C_GetCustomizationSlotActiveState, bActive) == 0x000001, "Member 'AthenaCustomizationSlotButtonWrapper_C_GetCustomizationSlotActiveState::bActive' has a wrong offset!");
static_assert(offsetof(AthenaCustomizationSlotButtonWrapper_C_GetCustomizationSlotActiveState, CallFunc_GetCustomizationSlotActiveState_bOutAttachableCosmeticAvailable) == 0x000002, "Member 'AthenaCustomizationSlotButtonWrapper_C_GetCustomizationSlotActiveState::CallFunc_GetCustomizationSlotActiveState_bOutAttachableCosmeticAvailable' has a wrong offset!");
static_assert(offsetof(AthenaCustomizationSlotButtonWrapper_C_GetCustomizationSlotActiveState, CallFunc_GetCustomizationSlotActiveState_bOutActive) == 0x000003, "Member 'AthenaCustomizationSlotButtonWrapper_C_GetCustomizationSlotActiveState::CallFunc_GetCustomizationSlotActiveState_bOutActive' has a wrong offset!");

struct AthenaCustomizationSlotButtonWrapper_C_ResetPopulateAnimVisual final
{
public:
	float                                         CallFunc_GetEndTime_ReturnValue;
	uint8                                         Pad_4[0x4];
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;
};
static_assert(alignof(AthenaCustomizationSlotButtonWrapper_C_ResetPopulateAnimVisual) == 0x000008, "Wrong alignment on AthenaCustomizationSlotButtonWrapper_C_ResetPopulateAnimVisual");
static_assert(sizeof(AthenaCustomizationSlotButtonWrapper_C_ResetPopulateAnimVisual) == 0x000010, "Wrong size on AthenaCustomizationSlotButtonWrapper_C_ResetPopulateAnimVisual");
static_assert(offsetof(AthenaCustomizationSlotButtonWrapper_C_ResetPopulateAnimVisual, CallFunc_GetEndTime_ReturnValue) == 0x000000, "Member 'AthenaCustomizationSlotButtonWrapper_C_ResetPopulateAnimVisual::CallFunc_GetEndTime_ReturnValue' has a wrong offset!");
static_assert(offsetof(AthenaCustomizationSlotButtonWrapper_C_ResetPopulateAnimVisual, CallFunc_PlayAnimation_ReturnValue) == 0x000008, "Member 'AthenaCustomizationSlotButtonWrapper_C_ResetPopulateAnimVisual::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");

}
