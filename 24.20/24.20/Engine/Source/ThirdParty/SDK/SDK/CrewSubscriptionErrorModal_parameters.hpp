#pragma once

#include "Basic.hpp"

namespace SDK::Params
{

struct CrewSubscriptionErrorModal_C_ExecuteUbergraph_CrewSubscriptionErrorModal final
{
public:
	int32                                         EntryPoint;
	uint8                                         Pad_4[0x4];
	class UUMGSequencePlayer*                     CallFunc_PlayAnimationForward_ReturnValue;
};
static_assert(alignof(CrewSubscriptionErrorModal_C_ExecuteUbergraph_CrewSubscriptionErrorModal) == 0x000008, "Wrong alignment on CrewSubscriptionErrorModal_C_ExecuteUbergraph_CrewSubscriptionErrorModal");
static_assert(sizeof(CrewSubscriptionErrorModal_C_ExecuteUbergraph_CrewSubscriptionErrorModal) == 0x000010, "Wrong size on CrewSubscriptionErrorModal_C_ExecuteUbergraph_CrewSubscriptionErrorModal");
static_assert(offsetof(CrewSubscriptionErrorModal_C_ExecuteUbergraph_CrewSubscriptionErrorModal, EntryPoint) == 0x000000, "Member 'CrewSubscriptionErrorModal_C_ExecuteUbergraph_CrewSubscriptionErrorModal::EntryPoint' has a wrong offset!");
static_assert(offsetof(CrewSubscriptionErrorModal_C_ExecuteUbergraph_CrewSubscriptionErrorModal, CallFunc_PlayAnimationForward_ReturnValue) == 0x000008, "Member 'CrewSubscriptionErrorModal_C_ExecuteUbergraph_CrewSubscriptionErrorModal::CallFunc_PlayAnimationForward_ReturnValue' has a wrong offset!");

}
