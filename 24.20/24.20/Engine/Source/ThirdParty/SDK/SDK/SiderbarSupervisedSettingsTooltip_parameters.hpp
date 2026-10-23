#pragma once

#include "Basic.hpp"

namespace SDK::Params
{

struct SiderbarSupervisedSettingsTooltip_C_ExecuteUbergraph_SiderbarSupervisedSettingsTooltip final
{
public:
	int32                                         EntryPoint;
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;
	class UUMGSequencePlayer*                     CallFunc_CreatePlayAnimationProxyObject_Result;
	class UWidgetAnimationPlayCallbackProxy*      CallFunc_CreatePlayAnimationProxyObject_ReturnValue;
	bool                                          CallFunc_IsValid_ReturnValue;
	uint8                                         Pad_21[0x7];
	class UUMGSequencePlayer*                     CallFunc_PlayAnimationReverse_ReturnValue;
};
static_assert(alignof(SiderbarSupervisedSettingsTooltip_C_ExecuteUbergraph_SiderbarSupervisedSettingsTooltip) == 0x000008, "Wrong alignment on SiderbarSupervisedSettingsTooltip_C_ExecuteUbergraph_SiderbarSupervisedSettingsTooltip");
static_assert(sizeof(SiderbarSupervisedSettingsTooltip_C_ExecuteUbergraph_SiderbarSupervisedSettingsTooltip) == 0x000030, "Wrong size on SiderbarSupervisedSettingsTooltip_C_ExecuteUbergraph_SiderbarSupervisedSettingsTooltip");
static_assert(offsetof(SiderbarSupervisedSettingsTooltip_C_ExecuteUbergraph_SiderbarSupervisedSettingsTooltip, EntryPoint) == 0x000000, "Member 'SiderbarSupervisedSettingsTooltip_C_ExecuteUbergraph_SiderbarSupervisedSettingsTooltip::EntryPoint' has a wrong offset!");
static_assert(offsetof(SiderbarSupervisedSettingsTooltip_C_ExecuteUbergraph_SiderbarSupervisedSettingsTooltip, K2Node_CreateDelegate_OutputDelegate) == 0x000004, "Member 'SiderbarSupervisedSettingsTooltip_C_ExecuteUbergraph_SiderbarSupervisedSettingsTooltip::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(SiderbarSupervisedSettingsTooltip_C_ExecuteUbergraph_SiderbarSupervisedSettingsTooltip, CallFunc_CreatePlayAnimationProxyObject_Result) == 0x000010, "Member 'SiderbarSupervisedSettingsTooltip_C_ExecuteUbergraph_SiderbarSupervisedSettingsTooltip::CallFunc_CreatePlayAnimationProxyObject_Result' has a wrong offset!");
static_assert(offsetof(SiderbarSupervisedSettingsTooltip_C_ExecuteUbergraph_SiderbarSupervisedSettingsTooltip, CallFunc_CreatePlayAnimationProxyObject_ReturnValue) == 0x000018, "Member 'SiderbarSupervisedSettingsTooltip_C_ExecuteUbergraph_SiderbarSupervisedSettingsTooltip::CallFunc_CreatePlayAnimationProxyObject_ReturnValue' has a wrong offset!");
static_assert(offsetof(SiderbarSupervisedSettingsTooltip_C_ExecuteUbergraph_SiderbarSupervisedSettingsTooltip, CallFunc_IsValid_ReturnValue) == 0x000020, "Member 'SiderbarSupervisedSettingsTooltip_C_ExecuteUbergraph_SiderbarSupervisedSettingsTooltip::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(SiderbarSupervisedSettingsTooltip_C_ExecuteUbergraph_SiderbarSupervisedSettingsTooltip, CallFunc_PlayAnimationReverse_ReturnValue) == 0x000028, "Member 'SiderbarSupervisedSettingsTooltip_C_ExecuteUbergraph_SiderbarSupervisedSettingsTooltip::CallFunc_PlayAnimationReverse_ReturnValue' has a wrong offset!");

}
