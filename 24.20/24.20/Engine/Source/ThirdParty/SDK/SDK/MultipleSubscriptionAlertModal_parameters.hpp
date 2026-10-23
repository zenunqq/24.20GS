#pragma once

#include "Basic.hpp"

namespace SDK::Params
{

struct MultipleSubscriptionAlertModal_C_ExecuteUbergraph_MultipleSubscriptionAlertModal final
{
public:
	int32                                         EntryPoint;
	uint8                                         Pad_4[0x4];
	class FString                                 K2Node_Event_MoreInfoUrl;
	class URichTextButton_C*                      K2Node_DynamicCast_AsRich_Text_Button;
	bool                                          K2Node_DynamicCast_bSuccess;
	uint8                                         Pad_21[0x7];
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;
};
static_assert(alignof(MultipleSubscriptionAlertModal_C_ExecuteUbergraph_MultipleSubscriptionAlertModal) == 0x000008, "Wrong alignment on MultipleSubscriptionAlertModal_C_ExecuteUbergraph_MultipleSubscriptionAlertModal");
static_assert(sizeof(MultipleSubscriptionAlertModal_C_ExecuteUbergraph_MultipleSubscriptionAlertModal) == 0x000040, "Wrong size on MultipleSubscriptionAlertModal_C_ExecuteUbergraph_MultipleSubscriptionAlertModal");
static_assert(offsetof(MultipleSubscriptionAlertModal_C_ExecuteUbergraph_MultipleSubscriptionAlertModal, EntryPoint) == 0x000000, "Member 'MultipleSubscriptionAlertModal_C_ExecuteUbergraph_MultipleSubscriptionAlertModal::EntryPoint' has a wrong offset!");
static_assert(offsetof(MultipleSubscriptionAlertModal_C_ExecuteUbergraph_MultipleSubscriptionAlertModal, K2Node_Event_MoreInfoUrl) == 0x000008, "Member 'MultipleSubscriptionAlertModal_C_ExecuteUbergraph_MultipleSubscriptionAlertModal::K2Node_Event_MoreInfoUrl' has a wrong offset!");
static_assert(offsetof(MultipleSubscriptionAlertModal_C_ExecuteUbergraph_MultipleSubscriptionAlertModal, K2Node_DynamicCast_AsRich_Text_Button) == 0x000018, "Member 'MultipleSubscriptionAlertModal_C_ExecuteUbergraph_MultipleSubscriptionAlertModal::K2Node_DynamicCast_AsRich_Text_Button' has a wrong offset!");
static_assert(offsetof(MultipleSubscriptionAlertModal_C_ExecuteUbergraph_MultipleSubscriptionAlertModal, K2Node_DynamicCast_bSuccess) == 0x000020, "Member 'MultipleSubscriptionAlertModal_C_ExecuteUbergraph_MultipleSubscriptionAlertModal::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(MultipleSubscriptionAlertModal_C_ExecuteUbergraph_MultipleSubscriptionAlertModal, CallFunc_Conv_StringToText_ReturnValue) == 0x000028, "Member 'MultipleSubscriptionAlertModal_C_ExecuteUbergraph_MultipleSubscriptionAlertModal::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");

struct MultipleSubscriptionAlertModal_C_OnSetHowToCancelURL final
{
public:
	class FString                                 MoreInfoUrl;
};
static_assert(alignof(MultipleSubscriptionAlertModal_C_OnSetHowToCancelURL) == 0x000008, "Wrong alignment on MultipleSubscriptionAlertModal_C_OnSetHowToCancelURL");
static_assert(sizeof(MultipleSubscriptionAlertModal_C_OnSetHowToCancelURL) == 0x000010, "Wrong size on MultipleSubscriptionAlertModal_C_OnSetHowToCancelURL");
static_assert(offsetof(MultipleSubscriptionAlertModal_C_OnSetHowToCancelURL, MoreInfoUrl) == 0x000000, "Member 'MultipleSubscriptionAlertModal_C_OnSetHowToCancelURL::MoreInfoUrl' has a wrong offset!");

}
