#pragma once

#include "Basic.hpp"

namespace SDK::Params
{

struct SidebarOnboardingTagsEditTooltip_C_ExecuteUbergraph_SidebarOnboardingTagsEditTooltip final
{
public:
	int32                                         EntryPoint;
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_1;
	uint8                                         Pad_1C[0x4];
	class UUMGSequencePlayer*                     CallFunc_CreatePlayAnimationProxyObject_Result;
	class UWidgetAnimationPlayCallbackProxy*      CallFunc_CreatePlayAnimationProxyObject_ReturnValue;
	class UUMGSequencePlayer*                     CallFunc_CreatePlayAnimationProxyObject_Result_1;
	class UWidgetAnimationPlayCallbackProxy*      CallFunc_CreatePlayAnimationProxyObject_ReturnValue_1;
	bool                                          CallFunc_IsValid_ReturnValue;
	bool                                          CallFunc_IsValid_ReturnValue_1;
	uint8                                         Pad_42[0x6];
	class UUMGSequencePlayer*                     CallFunc_PlayAnimationReverse_ReturnValue;
};
static_assert(alignof(SidebarOnboardingTagsEditTooltip_C_ExecuteUbergraph_SidebarOnboardingTagsEditTooltip) == 0x000008, "Wrong alignment on SidebarOnboardingTagsEditTooltip_C_ExecuteUbergraph_SidebarOnboardingTagsEditTooltip");
static_assert(sizeof(SidebarOnboardingTagsEditTooltip_C_ExecuteUbergraph_SidebarOnboardingTagsEditTooltip) == 0x000050, "Wrong size on SidebarOnboardingTagsEditTooltip_C_ExecuteUbergraph_SidebarOnboardingTagsEditTooltip");
static_assert(offsetof(SidebarOnboardingTagsEditTooltip_C_ExecuteUbergraph_SidebarOnboardingTagsEditTooltip, EntryPoint) == 0x000000, "Member 'SidebarOnboardingTagsEditTooltip_C_ExecuteUbergraph_SidebarOnboardingTagsEditTooltip::EntryPoint' has a wrong offset!");
static_assert(offsetof(SidebarOnboardingTagsEditTooltip_C_ExecuteUbergraph_SidebarOnboardingTagsEditTooltip, K2Node_CreateDelegate_OutputDelegate) == 0x000004, "Member 'SidebarOnboardingTagsEditTooltip_C_ExecuteUbergraph_SidebarOnboardingTagsEditTooltip::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(SidebarOnboardingTagsEditTooltip_C_ExecuteUbergraph_SidebarOnboardingTagsEditTooltip, K2Node_CreateDelegate_OutputDelegate_1) == 0x000010, "Member 'SidebarOnboardingTagsEditTooltip_C_ExecuteUbergraph_SidebarOnboardingTagsEditTooltip::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(SidebarOnboardingTagsEditTooltip_C_ExecuteUbergraph_SidebarOnboardingTagsEditTooltip, CallFunc_CreatePlayAnimationProxyObject_Result) == 0x000020, "Member 'SidebarOnboardingTagsEditTooltip_C_ExecuteUbergraph_SidebarOnboardingTagsEditTooltip::CallFunc_CreatePlayAnimationProxyObject_Result' has a wrong offset!");
static_assert(offsetof(SidebarOnboardingTagsEditTooltip_C_ExecuteUbergraph_SidebarOnboardingTagsEditTooltip, CallFunc_CreatePlayAnimationProxyObject_ReturnValue) == 0x000028, "Member 'SidebarOnboardingTagsEditTooltip_C_ExecuteUbergraph_SidebarOnboardingTagsEditTooltip::CallFunc_CreatePlayAnimationProxyObject_ReturnValue' has a wrong offset!");
static_assert(offsetof(SidebarOnboardingTagsEditTooltip_C_ExecuteUbergraph_SidebarOnboardingTagsEditTooltip, CallFunc_CreatePlayAnimationProxyObject_Result_1) == 0x000030, "Member 'SidebarOnboardingTagsEditTooltip_C_ExecuteUbergraph_SidebarOnboardingTagsEditTooltip::CallFunc_CreatePlayAnimationProxyObject_Result_1' has a wrong offset!");
static_assert(offsetof(SidebarOnboardingTagsEditTooltip_C_ExecuteUbergraph_SidebarOnboardingTagsEditTooltip, CallFunc_CreatePlayAnimationProxyObject_ReturnValue_1) == 0x000038, "Member 'SidebarOnboardingTagsEditTooltip_C_ExecuteUbergraph_SidebarOnboardingTagsEditTooltip::CallFunc_CreatePlayAnimationProxyObject_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(SidebarOnboardingTagsEditTooltip_C_ExecuteUbergraph_SidebarOnboardingTagsEditTooltip, CallFunc_IsValid_ReturnValue) == 0x000040, "Member 'SidebarOnboardingTagsEditTooltip_C_ExecuteUbergraph_SidebarOnboardingTagsEditTooltip::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(SidebarOnboardingTagsEditTooltip_C_ExecuteUbergraph_SidebarOnboardingTagsEditTooltip, CallFunc_IsValid_ReturnValue_1) == 0x000041, "Member 'SidebarOnboardingTagsEditTooltip_C_ExecuteUbergraph_SidebarOnboardingTagsEditTooltip::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(SidebarOnboardingTagsEditTooltip_C_ExecuteUbergraph_SidebarOnboardingTagsEditTooltip, CallFunc_PlayAnimationReverse_ReturnValue) == 0x000048, "Member 'SidebarOnboardingTagsEditTooltip_C_ExecuteUbergraph_SidebarOnboardingTagsEditTooltip::CallFunc_PlayAnimationReverse_ReturnValue' has a wrong offset!");

}
