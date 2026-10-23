#pragma once

#include "Basic.hpp"

namespace SDK::Params
{

struct RebootRallyEligiblePlayersOnboardingTooltip_C_ExecuteUbergraph_RebootRallyEligiblePlayersOnboardingTooltip final
{
public:
	int32                                         EntryPoint;
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;
	class UUMGSequencePlayer*                     CallFunc_CreatePlayAnimationProxyObject_Result;
	class UWidgetAnimationPlayCallbackProxy*      CallFunc_CreatePlayAnimationProxyObject_ReturnValue;
	bool                                          CallFunc_IsValid_ReturnValue;
	uint8                                         Pad_21[0x7];
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;
};
static_assert(alignof(RebootRallyEligiblePlayersOnboardingTooltip_C_ExecuteUbergraph_RebootRallyEligiblePlayersOnboardingTooltip) == 0x000008, "Wrong alignment on RebootRallyEligiblePlayersOnboardingTooltip_C_ExecuteUbergraph_RebootRallyEligiblePlayersOnboardingTooltip");
static_assert(sizeof(RebootRallyEligiblePlayersOnboardingTooltip_C_ExecuteUbergraph_RebootRallyEligiblePlayersOnboardingTooltip) == 0x000030, "Wrong size on RebootRallyEligiblePlayersOnboardingTooltip_C_ExecuteUbergraph_RebootRallyEligiblePlayersOnboardingTooltip");
static_assert(offsetof(RebootRallyEligiblePlayersOnboardingTooltip_C_ExecuteUbergraph_RebootRallyEligiblePlayersOnboardingTooltip, EntryPoint) == 0x000000, "Member 'RebootRallyEligiblePlayersOnboardingTooltip_C_ExecuteUbergraph_RebootRallyEligiblePlayersOnboardingTooltip::EntryPoint' has a wrong offset!");
static_assert(offsetof(RebootRallyEligiblePlayersOnboardingTooltip_C_ExecuteUbergraph_RebootRallyEligiblePlayersOnboardingTooltip, K2Node_CreateDelegate_OutputDelegate) == 0x000004, "Member 'RebootRallyEligiblePlayersOnboardingTooltip_C_ExecuteUbergraph_RebootRallyEligiblePlayersOnboardingTooltip::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(RebootRallyEligiblePlayersOnboardingTooltip_C_ExecuteUbergraph_RebootRallyEligiblePlayersOnboardingTooltip, CallFunc_CreatePlayAnimationProxyObject_Result) == 0x000010, "Member 'RebootRallyEligiblePlayersOnboardingTooltip_C_ExecuteUbergraph_RebootRallyEligiblePlayersOnboardingTooltip::CallFunc_CreatePlayAnimationProxyObject_Result' has a wrong offset!");
static_assert(offsetof(RebootRallyEligiblePlayersOnboardingTooltip_C_ExecuteUbergraph_RebootRallyEligiblePlayersOnboardingTooltip, CallFunc_CreatePlayAnimationProxyObject_ReturnValue) == 0x000018, "Member 'RebootRallyEligiblePlayersOnboardingTooltip_C_ExecuteUbergraph_RebootRallyEligiblePlayersOnboardingTooltip::CallFunc_CreatePlayAnimationProxyObject_ReturnValue' has a wrong offset!");
static_assert(offsetof(RebootRallyEligiblePlayersOnboardingTooltip_C_ExecuteUbergraph_RebootRallyEligiblePlayersOnboardingTooltip, CallFunc_IsValid_ReturnValue) == 0x000020, "Member 'RebootRallyEligiblePlayersOnboardingTooltip_C_ExecuteUbergraph_RebootRallyEligiblePlayersOnboardingTooltip::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(RebootRallyEligiblePlayersOnboardingTooltip_C_ExecuteUbergraph_RebootRallyEligiblePlayersOnboardingTooltip, CallFunc_PlayAnimation_ReturnValue) == 0x000028, "Member 'RebootRallyEligiblePlayersOnboardingTooltip_C_ExecuteUbergraph_RebootRallyEligiblePlayersOnboardingTooltip::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");

}
