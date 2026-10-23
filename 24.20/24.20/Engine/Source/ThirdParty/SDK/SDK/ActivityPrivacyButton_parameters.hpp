#pragma once

#include "Basic.hpp"

namespace SDK::Params
{

struct ActivityPrivacyButton_C_ExecuteUbergraph_ActivityPrivacyButton final
{
public:
	int32                                         EntryPoint;
	uint8                                         Pad_4[0x4];
	class UUMGSequencePlayer*                     CallFunc_PlayAnimationForward_ReturnValue;
	class UUMGSequencePlayer*                     CallFunc_PlayAnimationReverse_ReturnValue;
	class UUMGSequencePlayer*                     CallFunc_PlayAnimationForward_ReturnValue_1;
	class UUMGSequencePlayer*                     CallFunc_PlayAnimationReverse_ReturnValue_1;
	float                                         CallFunc_GetAnimationCurrentTime_ReturnValue;
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;
	class UUMGSequencePlayer*                     CallFunc_CreatePlayAnimationTimeRangeProxyObject_Result;
	class UWidgetAnimationPlayCallbackProxy*      CallFunc_CreatePlayAnimationTimeRangeProxyObject_ReturnValue;
	bool                                          CallFunc_IsValid_ReturnValue;
	bool                                          CallFunc_IsValid_ReturnValue_1;
	uint8                                         Pad_4A[0x6];
	class USoundBase*                             K2Node_DynamicCast_AsSound_Base;
	bool                                          K2Node_DynamicCast_bSuccess;
	uint8                                         Pad_59[0x7];
	class AFortPlayerController*                  CallFunc_GetFirstLocalFortPlayerController_ReturnValue;
	bool                                          CallFunc_IsUsingGamepad_ReturnValue;
	uint8                                         Pad_69[0x7];
	class UUMGSequencePlayer*                     CallFunc_PlayAnimationReverse_ReturnValue_2;
	bool                                          K2Node_Event_bIsSelected;
	bool                                          K2Node_Event_bIsAvailable;
	bool                                          K2Node_Event_IsDesignTime;
};
static_assert(alignof(ActivityPrivacyButton_C_ExecuteUbergraph_ActivityPrivacyButton) == 0x000008, "Wrong alignment on ActivityPrivacyButton_C_ExecuteUbergraph_ActivityPrivacyButton");
static_assert(sizeof(ActivityPrivacyButton_C_ExecuteUbergraph_ActivityPrivacyButton) == 0x000080, "Wrong size on ActivityPrivacyButton_C_ExecuteUbergraph_ActivityPrivacyButton");
static_assert(offsetof(ActivityPrivacyButton_C_ExecuteUbergraph_ActivityPrivacyButton, EntryPoint) == 0x000000, "Member 'ActivityPrivacyButton_C_ExecuteUbergraph_ActivityPrivacyButton::EntryPoint' has a wrong offset!");
static_assert(offsetof(ActivityPrivacyButton_C_ExecuteUbergraph_ActivityPrivacyButton, CallFunc_PlayAnimationForward_ReturnValue) == 0x000008, "Member 'ActivityPrivacyButton_C_ExecuteUbergraph_ActivityPrivacyButton::CallFunc_PlayAnimationForward_ReturnValue' has a wrong offset!");
static_assert(offsetof(ActivityPrivacyButton_C_ExecuteUbergraph_ActivityPrivacyButton, CallFunc_PlayAnimationReverse_ReturnValue) == 0x000010, "Member 'ActivityPrivacyButton_C_ExecuteUbergraph_ActivityPrivacyButton::CallFunc_PlayAnimationReverse_ReturnValue' has a wrong offset!");
static_assert(offsetof(ActivityPrivacyButton_C_ExecuteUbergraph_ActivityPrivacyButton, CallFunc_PlayAnimationForward_ReturnValue_1) == 0x000018, "Member 'ActivityPrivacyButton_C_ExecuteUbergraph_ActivityPrivacyButton::CallFunc_PlayAnimationForward_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(ActivityPrivacyButton_C_ExecuteUbergraph_ActivityPrivacyButton, CallFunc_PlayAnimationReverse_ReturnValue_1) == 0x000020, "Member 'ActivityPrivacyButton_C_ExecuteUbergraph_ActivityPrivacyButton::CallFunc_PlayAnimationReverse_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(ActivityPrivacyButton_C_ExecuteUbergraph_ActivityPrivacyButton, CallFunc_GetAnimationCurrentTime_ReturnValue) == 0x000028, "Member 'ActivityPrivacyButton_C_ExecuteUbergraph_ActivityPrivacyButton::CallFunc_GetAnimationCurrentTime_ReturnValue' has a wrong offset!");
static_assert(offsetof(ActivityPrivacyButton_C_ExecuteUbergraph_ActivityPrivacyButton, K2Node_CreateDelegate_OutputDelegate) == 0x00002C, "Member 'ActivityPrivacyButton_C_ExecuteUbergraph_ActivityPrivacyButton::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(ActivityPrivacyButton_C_ExecuteUbergraph_ActivityPrivacyButton, CallFunc_CreatePlayAnimationTimeRangeProxyObject_Result) == 0x000038, "Member 'ActivityPrivacyButton_C_ExecuteUbergraph_ActivityPrivacyButton::CallFunc_CreatePlayAnimationTimeRangeProxyObject_Result' has a wrong offset!");
static_assert(offsetof(ActivityPrivacyButton_C_ExecuteUbergraph_ActivityPrivacyButton, CallFunc_CreatePlayAnimationTimeRangeProxyObject_ReturnValue) == 0x000040, "Member 'ActivityPrivacyButton_C_ExecuteUbergraph_ActivityPrivacyButton::CallFunc_CreatePlayAnimationTimeRangeProxyObject_ReturnValue' has a wrong offset!");
static_assert(offsetof(ActivityPrivacyButton_C_ExecuteUbergraph_ActivityPrivacyButton, CallFunc_IsValid_ReturnValue) == 0x000048, "Member 'ActivityPrivacyButton_C_ExecuteUbergraph_ActivityPrivacyButton::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(ActivityPrivacyButton_C_ExecuteUbergraph_ActivityPrivacyButton, CallFunc_IsValid_ReturnValue_1) == 0x000049, "Member 'ActivityPrivacyButton_C_ExecuteUbergraph_ActivityPrivacyButton::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(ActivityPrivacyButton_C_ExecuteUbergraph_ActivityPrivacyButton, K2Node_DynamicCast_AsSound_Base) == 0x000050, "Member 'ActivityPrivacyButton_C_ExecuteUbergraph_ActivityPrivacyButton::K2Node_DynamicCast_AsSound_Base' has a wrong offset!");
static_assert(offsetof(ActivityPrivacyButton_C_ExecuteUbergraph_ActivityPrivacyButton, K2Node_DynamicCast_bSuccess) == 0x000058, "Member 'ActivityPrivacyButton_C_ExecuteUbergraph_ActivityPrivacyButton::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(ActivityPrivacyButton_C_ExecuteUbergraph_ActivityPrivacyButton, CallFunc_GetFirstLocalFortPlayerController_ReturnValue) == 0x000060, "Member 'ActivityPrivacyButton_C_ExecuteUbergraph_ActivityPrivacyButton::CallFunc_GetFirstLocalFortPlayerController_ReturnValue' has a wrong offset!");
static_assert(offsetof(ActivityPrivacyButton_C_ExecuteUbergraph_ActivityPrivacyButton, CallFunc_IsUsingGamepad_ReturnValue) == 0x000068, "Member 'ActivityPrivacyButton_C_ExecuteUbergraph_ActivityPrivacyButton::CallFunc_IsUsingGamepad_ReturnValue' has a wrong offset!");
static_assert(offsetof(ActivityPrivacyButton_C_ExecuteUbergraph_ActivityPrivacyButton, CallFunc_PlayAnimationReverse_ReturnValue_2) == 0x000070, "Member 'ActivityPrivacyButton_C_ExecuteUbergraph_ActivityPrivacyButton::CallFunc_PlayAnimationReverse_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(ActivityPrivacyButton_C_ExecuteUbergraph_ActivityPrivacyButton, K2Node_Event_bIsSelected) == 0x000078, "Member 'ActivityPrivacyButton_C_ExecuteUbergraph_ActivityPrivacyButton::K2Node_Event_bIsSelected' has a wrong offset!");
static_assert(offsetof(ActivityPrivacyButton_C_ExecuteUbergraph_ActivityPrivacyButton, K2Node_Event_bIsAvailable) == 0x000079, "Member 'ActivityPrivacyButton_C_ExecuteUbergraph_ActivityPrivacyButton::K2Node_Event_bIsAvailable' has a wrong offset!");
static_assert(offsetof(ActivityPrivacyButton_C_ExecuteUbergraph_ActivityPrivacyButton, K2Node_Event_IsDesignTime) == 0x00007A, "Member 'ActivityPrivacyButton_C_ExecuteUbergraph_ActivityPrivacyButton::K2Node_Event_IsDesignTime' has a wrong offset!");

struct ActivityPrivacyButton_C_OnDesiredPrivacySelectionChanged final
{
public:
	bool                                          bIsSelected;
};
static_assert(alignof(ActivityPrivacyButton_C_OnDesiredPrivacySelectionChanged) == 0x000001, "Wrong alignment on ActivityPrivacyButton_C_OnDesiredPrivacySelectionChanged");
static_assert(sizeof(ActivityPrivacyButton_C_OnDesiredPrivacySelectionChanged) == 0x000001, "Wrong size on ActivityPrivacyButton_C_OnDesiredPrivacySelectionChanged");
static_assert(offsetof(ActivityPrivacyButton_C_OnDesiredPrivacySelectionChanged, bIsSelected) == 0x000000, "Member 'ActivityPrivacyButton_C_OnDesiredPrivacySelectionChanged::bIsSelected' has a wrong offset!");

struct ActivityPrivacyButton_C_OnPrivacyAvailabilityChanged final
{
public:
	bool                                          bIsAvailable;
};
static_assert(alignof(ActivityPrivacyButton_C_OnPrivacyAvailabilityChanged) == 0x000001, "Wrong alignment on ActivityPrivacyButton_C_OnPrivacyAvailabilityChanged");
static_assert(sizeof(ActivityPrivacyButton_C_OnPrivacyAvailabilityChanged) == 0x000001, "Wrong size on ActivityPrivacyButton_C_OnPrivacyAvailabilityChanged");
static_assert(offsetof(ActivityPrivacyButton_C_OnPrivacyAvailabilityChanged, bIsAvailable) == 0x000000, "Member 'ActivityPrivacyButton_C_OnPrivacyAvailabilityChanged::bIsAvailable' has a wrong offset!");

struct ActivityPrivacyButton_C_PreConstruct final
{
public:
	bool                                          IsDesignTime;
};
static_assert(alignof(ActivityPrivacyButton_C_PreConstruct) == 0x000001, "Wrong alignment on ActivityPrivacyButton_C_PreConstruct");
static_assert(sizeof(ActivityPrivacyButton_C_PreConstruct) == 0x000001, "Wrong size on ActivityPrivacyButton_C_PreConstruct");
static_assert(offsetof(ActivityPrivacyButton_C_PreConstruct, IsDesignTime) == 0x000000, "Member 'ActivityPrivacyButton_C_PreConstruct::IsDesignTime' has a wrong offset!");

}
