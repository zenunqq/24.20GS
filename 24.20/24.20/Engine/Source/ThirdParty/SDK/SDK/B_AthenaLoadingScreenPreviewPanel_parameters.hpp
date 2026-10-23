#pragma once

#include "Basic.hpp"

namespace SDK::Params
{

struct B_AthenaLoadingScreenPreviewPanel_C_BndEvt__B_AthenaLoadingScreenPreviewPanel_Button_Close_K2Node_ComponentBoundEvent_2_CommonButtonBaseClicked__DelegateSignature final
{
public:
	class UCommonButtonBase*                      Button;
};
static_assert(alignof(B_AthenaLoadingScreenPreviewPanel_C_BndEvt__B_AthenaLoadingScreenPreviewPanel_Button_Close_K2Node_ComponentBoundEvent_2_CommonButtonBaseClicked__DelegateSignature) == 0x000008, "Wrong alignment on B_AthenaLoadingScreenPreviewPanel_C_BndEvt__B_AthenaLoadingScreenPreviewPanel_Button_Close_K2Node_ComponentBoundEvent_2_CommonButtonBaseClicked__DelegateSignature");
static_assert(sizeof(B_AthenaLoadingScreenPreviewPanel_C_BndEvt__B_AthenaLoadingScreenPreviewPanel_Button_Close_K2Node_ComponentBoundEvent_2_CommonButtonBaseClicked__DelegateSignature) == 0x000008, "Wrong size on B_AthenaLoadingScreenPreviewPanel_C_BndEvt__B_AthenaLoadingScreenPreviewPanel_Button_Close_K2Node_ComponentBoundEvent_2_CommonButtonBaseClicked__DelegateSignature");
static_assert(offsetof(B_AthenaLoadingScreenPreviewPanel_C_BndEvt__B_AthenaLoadingScreenPreviewPanel_Button_Close_K2Node_ComponentBoundEvent_2_CommonButtonBaseClicked__DelegateSignature, Button) == 0x000000, "Member 'B_AthenaLoadingScreenPreviewPanel_C_BndEvt__B_AthenaLoadingScreenPreviewPanel_Button_Close_K2Node_ComponentBoundEvent_2_CommonButtonBaseClicked__DelegateSignature::Button' has a wrong offset!");

struct B_AthenaLoadingScreenPreviewPanel_C_BndEvt__CloseButton_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature final
{
public:
	class UCommonButtonLegacy*                    Button;
};
static_assert(alignof(B_AthenaLoadingScreenPreviewPanel_C_BndEvt__CloseButton_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature) == 0x000008, "Wrong alignment on B_AthenaLoadingScreenPreviewPanel_C_BndEvt__CloseButton_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature");
static_assert(sizeof(B_AthenaLoadingScreenPreviewPanel_C_BndEvt__CloseButton_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature) == 0x000008, "Wrong size on B_AthenaLoadingScreenPreviewPanel_C_BndEvt__CloseButton_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature");
static_assert(offsetof(B_AthenaLoadingScreenPreviewPanel_C_BndEvt__CloseButton_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature, Button) == 0x000000, "Member 'B_AthenaLoadingScreenPreviewPanel_C_BndEvt__CloseButton_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature::Button' has a wrong offset!");

struct B_AthenaLoadingScreenPreviewPanel_C_ExecuteUbergraph_B_AthenaLoadingScreenPreviewPanel final
{
public:
	int32                                         EntryPoint;
	uint8                                         Pad_4[0x4];
	class UCommonButtonBase*                      K2Node_ComponentBoundEvent_Button;
	bool                                          CallFunc_HandleBack_PassThrough;
	uint8                                         Pad_11[0x7];
	class UCommonButtonLegacy*                    K2Node_ComponentBoundEvent_Button_1;
};
static_assert(alignof(B_AthenaLoadingScreenPreviewPanel_C_ExecuteUbergraph_B_AthenaLoadingScreenPreviewPanel) == 0x000008, "Wrong alignment on B_AthenaLoadingScreenPreviewPanel_C_ExecuteUbergraph_B_AthenaLoadingScreenPreviewPanel");
static_assert(sizeof(B_AthenaLoadingScreenPreviewPanel_C_ExecuteUbergraph_B_AthenaLoadingScreenPreviewPanel) == 0x000020, "Wrong size on B_AthenaLoadingScreenPreviewPanel_C_ExecuteUbergraph_B_AthenaLoadingScreenPreviewPanel");
static_assert(offsetof(B_AthenaLoadingScreenPreviewPanel_C_ExecuteUbergraph_B_AthenaLoadingScreenPreviewPanel, EntryPoint) == 0x000000, "Member 'B_AthenaLoadingScreenPreviewPanel_C_ExecuteUbergraph_B_AthenaLoadingScreenPreviewPanel::EntryPoint' has a wrong offset!");
static_assert(offsetof(B_AthenaLoadingScreenPreviewPanel_C_ExecuteUbergraph_B_AthenaLoadingScreenPreviewPanel, K2Node_ComponentBoundEvent_Button) == 0x000008, "Member 'B_AthenaLoadingScreenPreviewPanel_C_ExecuteUbergraph_B_AthenaLoadingScreenPreviewPanel::K2Node_ComponentBoundEvent_Button' has a wrong offset!");
static_assert(offsetof(B_AthenaLoadingScreenPreviewPanel_C_ExecuteUbergraph_B_AthenaLoadingScreenPreviewPanel, CallFunc_HandleBack_PassThrough) == 0x000010, "Member 'B_AthenaLoadingScreenPreviewPanel_C_ExecuteUbergraph_B_AthenaLoadingScreenPreviewPanel::CallFunc_HandleBack_PassThrough' has a wrong offset!");
static_assert(offsetof(B_AthenaLoadingScreenPreviewPanel_C_ExecuteUbergraph_B_AthenaLoadingScreenPreviewPanel, K2Node_ComponentBoundEvent_Button_1) == 0x000018, "Member 'B_AthenaLoadingScreenPreviewPanel_C_ExecuteUbergraph_B_AthenaLoadingScreenPreviewPanel::K2Node_ComponentBoundEvent_Button_1' has a wrong offset!");

struct B_AthenaLoadingScreenPreviewPanel_C_HandleBack final
{
public:
	bool                                          PassThrough;
};
static_assert(alignof(B_AthenaLoadingScreenPreviewPanel_C_HandleBack) == 0x000001, "Wrong alignment on B_AthenaLoadingScreenPreviewPanel_C_HandleBack");
static_assert(sizeof(B_AthenaLoadingScreenPreviewPanel_C_HandleBack) == 0x000001, "Wrong size on B_AthenaLoadingScreenPreviewPanel_C_HandleBack");
static_assert(offsetof(B_AthenaLoadingScreenPreviewPanel_C_HandleBack, PassThrough) == 0x000000, "Member 'B_AthenaLoadingScreenPreviewPanel_C_HandleBack::PassThrough' has a wrong offset!");

}
