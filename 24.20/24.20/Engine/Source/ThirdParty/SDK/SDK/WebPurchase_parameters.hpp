#pragma once

#include "Basic.hpp"

namespace SDK::Params
{

struct WebPurchase_C_BndEvt__WebPurchase_Button_Back_K2Node_ComponentBoundEvent_0_CommonButtonBaseClicked__DelegateSignature final
{
public:
	class UCommonButtonBase*                      Button;
};
static_assert(alignof(WebPurchase_C_BndEvt__WebPurchase_Button_Back_K2Node_ComponentBoundEvent_0_CommonButtonBaseClicked__DelegateSignature) == 0x000008, "Wrong alignment on WebPurchase_C_BndEvt__WebPurchase_Button_Back_K2Node_ComponentBoundEvent_0_CommonButtonBaseClicked__DelegateSignature");
static_assert(sizeof(WebPurchase_C_BndEvt__WebPurchase_Button_Back_K2Node_ComponentBoundEvent_0_CommonButtonBaseClicked__DelegateSignature) == 0x000008, "Wrong size on WebPurchase_C_BndEvt__WebPurchase_Button_Back_K2Node_ComponentBoundEvent_0_CommonButtonBaseClicked__DelegateSignature");
static_assert(offsetof(WebPurchase_C_BndEvt__WebPurchase_Button_Back_K2Node_ComponentBoundEvent_0_CommonButtonBaseClicked__DelegateSignature, Button) == 0x000000, "Member 'WebPurchase_C_BndEvt__WebPurchase_Button_Back_K2Node_ComponentBoundEvent_0_CommonButtonBaseClicked__DelegateSignature::Button' has a wrong offset!");

struct WebPurchase_C_ExecuteUbergraph_WebPurchase final
{
public:
	int32                                         EntryPoint;
	uint8                                         Pad_4[0x4];
	class UFortMcpContext*                        CallFunc_GetContext_ReturnValue;
	class UCommonButtonBase*                      K2Node_ComponentBoundEvent_Button;
};
static_assert(alignof(WebPurchase_C_ExecuteUbergraph_WebPurchase) == 0x000008, "Wrong alignment on WebPurchase_C_ExecuteUbergraph_WebPurchase");
static_assert(sizeof(WebPurchase_C_ExecuteUbergraph_WebPurchase) == 0x000018, "Wrong size on WebPurchase_C_ExecuteUbergraph_WebPurchase");
static_assert(offsetof(WebPurchase_C_ExecuteUbergraph_WebPurchase, EntryPoint) == 0x000000, "Member 'WebPurchase_C_ExecuteUbergraph_WebPurchase::EntryPoint' has a wrong offset!");
static_assert(offsetof(WebPurchase_C_ExecuteUbergraph_WebPurchase, CallFunc_GetContext_ReturnValue) == 0x000008, "Member 'WebPurchase_C_ExecuteUbergraph_WebPurchase::CallFunc_GetContext_ReturnValue' has a wrong offset!");
static_assert(offsetof(WebPurchase_C_ExecuteUbergraph_WebPurchase, K2Node_ComponentBoundEvent_Button) == 0x000010, "Member 'WebPurchase_C_ExecuteUbergraph_WebPurchase::K2Node_ComponentBoundEvent_Button' has a wrong offset!");

}
