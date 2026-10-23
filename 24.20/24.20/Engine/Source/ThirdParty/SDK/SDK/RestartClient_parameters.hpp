#pragma once

#include "Basic.hpp"

#include "UMG_structs.hpp"

namespace SDK::Params
{

struct RestartClient_C_BndEvt__Button_Confirm_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature final
{
public:
	class UCommonButtonLegacy*                    Button;
};
static_assert(alignof(RestartClient_C_BndEvt__Button_Confirm_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature) == 0x000008, "Wrong alignment on RestartClient_C_BndEvt__Button_Confirm_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature");
static_assert(sizeof(RestartClient_C_BndEvt__Button_Confirm_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature) == 0x000008, "Wrong size on RestartClient_C_BndEvt__Button_Confirm_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature");
static_assert(offsetof(RestartClient_C_BndEvt__Button_Confirm_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature, Button) == 0x000000, "Member 'RestartClient_C_BndEvt__Button_Confirm_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature::Button' has a wrong offset!");

struct RestartClient_C_ExecuteUbergraph_RestartClient final
{
public:
	int32                                         EntryPoint;
	bool                                          Temp_bool_Variable;
	uint8                                         Pad_5[0x3];
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;
	bool                                          Temp_bool_Variable_1;
	ESlateVisibility                              Temp_byte_Variable;
	ESlateVisibility                              Temp_byte_Variable_1;
	bool                                          K2Node_Event_InbShouldExit;
	bool                                          K2Node_Event_bShouldShow;
	ESlateVisibility                              K2Node_Select_Default;
	uint8                                         Pad_16[0x2];
	class FText                                   CallFunc_MakeLiteralText_ReturnValue;
	class FText                                   CallFunc_MakeLiteralText_ReturnValue_1;
	class UCommonButtonLegacy*                    K2Node_ComponentBoundEvent_Button;
	class FText                                   K2Node_Select_Default_1;
};
static_assert(alignof(RestartClient_C_ExecuteUbergraph_RestartClient) == 0x000008, "Wrong alignment on RestartClient_C_ExecuteUbergraph_RestartClient");
static_assert(sizeof(RestartClient_C_ExecuteUbergraph_RestartClient) == 0x000068, "Wrong size on RestartClient_C_ExecuteUbergraph_RestartClient");
static_assert(offsetof(RestartClient_C_ExecuteUbergraph_RestartClient, EntryPoint) == 0x000000, "Member 'RestartClient_C_ExecuteUbergraph_RestartClient::EntryPoint' has a wrong offset!");
static_assert(offsetof(RestartClient_C_ExecuteUbergraph_RestartClient, Temp_bool_Variable) == 0x000004, "Member 'RestartClient_C_ExecuteUbergraph_RestartClient::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(RestartClient_C_ExecuteUbergraph_RestartClient, CallFunc_PlayAnimation_ReturnValue) == 0x000008, "Member 'RestartClient_C_ExecuteUbergraph_RestartClient::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");
static_assert(offsetof(RestartClient_C_ExecuteUbergraph_RestartClient, Temp_bool_Variable_1) == 0x000010, "Member 'RestartClient_C_ExecuteUbergraph_RestartClient::Temp_bool_Variable_1' has a wrong offset!");
static_assert(offsetof(RestartClient_C_ExecuteUbergraph_RestartClient, Temp_byte_Variable) == 0x000011, "Member 'RestartClient_C_ExecuteUbergraph_RestartClient::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(RestartClient_C_ExecuteUbergraph_RestartClient, Temp_byte_Variable_1) == 0x000012, "Member 'RestartClient_C_ExecuteUbergraph_RestartClient::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(RestartClient_C_ExecuteUbergraph_RestartClient, K2Node_Event_InbShouldExit) == 0x000013, "Member 'RestartClient_C_ExecuteUbergraph_RestartClient::K2Node_Event_InbShouldExit' has a wrong offset!");
static_assert(offsetof(RestartClient_C_ExecuteUbergraph_RestartClient, K2Node_Event_bShouldShow) == 0x000014, "Member 'RestartClient_C_ExecuteUbergraph_RestartClient::K2Node_Event_bShouldShow' has a wrong offset!");
static_assert(offsetof(RestartClient_C_ExecuteUbergraph_RestartClient, K2Node_Select_Default) == 0x000015, "Member 'RestartClient_C_ExecuteUbergraph_RestartClient::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(RestartClient_C_ExecuteUbergraph_RestartClient, CallFunc_MakeLiteralText_ReturnValue) == 0x000018, "Member 'RestartClient_C_ExecuteUbergraph_RestartClient::CallFunc_MakeLiteralText_ReturnValue' has a wrong offset!");
static_assert(offsetof(RestartClient_C_ExecuteUbergraph_RestartClient, CallFunc_MakeLiteralText_ReturnValue_1) == 0x000030, "Member 'RestartClient_C_ExecuteUbergraph_RestartClient::CallFunc_MakeLiteralText_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(RestartClient_C_ExecuteUbergraph_RestartClient, K2Node_ComponentBoundEvent_Button) == 0x000048, "Member 'RestartClient_C_ExecuteUbergraph_RestartClient::K2Node_ComponentBoundEvent_Button' has a wrong offset!");
static_assert(offsetof(RestartClient_C_ExecuteUbergraph_RestartClient, K2Node_Select_Default_1) == 0x000050, "Member 'RestartClient_C_ExecuteUbergraph_RestartClient::K2Node_Select_Default_1' has a wrong offset!");

struct RestartClient_C_OnButtonSet final
{
public:
	bool                                          InbShouldExit;
	bool                                          bShouldShow;
};
static_assert(alignof(RestartClient_C_OnButtonSet) == 0x000001, "Wrong alignment on RestartClient_C_OnButtonSet");
static_assert(sizeof(RestartClient_C_OnButtonSet) == 0x000002, "Wrong size on RestartClient_C_OnButtonSet");
static_assert(offsetof(RestartClient_C_OnButtonSet, InbShouldExit) == 0x000000, "Member 'RestartClient_C_OnButtonSet::InbShouldExit' has a wrong offset!");
static_assert(offsetof(RestartClient_C_OnButtonSet, bShouldShow) == 0x000001, "Member 'RestartClient_C_OnButtonSet::bShouldShow' has a wrong offset!");

}
