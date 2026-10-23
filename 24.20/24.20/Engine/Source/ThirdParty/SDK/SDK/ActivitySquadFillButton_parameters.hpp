#pragma once

#include "Basic.hpp"

namespace SDK::Params
{

struct ActivitySquadFillButton_C_ExecuteUbergraph_ActivitySquadFillButton final
{
public:
	int32                                         EntryPoint;
	bool                                          Temp_bool_Variable;
	bool                                          Temp_bool_Variable_1;
	bool                                          Temp_bool_Variable_2;
	uint8                                         Pad_7[0x1];
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
	bool                                          K2Node_Event_bIsFillOnlyEnabled;
	bool                                          K2Node_Select_Default;
	uint8                                         Pad_7D[0x3];
	int32                                         CallFunc_SelectInt_ReturnValue;
};
static_assert(alignof(ActivitySquadFillButton_C_ExecuteUbergraph_ActivitySquadFillButton) == 0x000008, "Wrong alignment on ActivitySquadFillButton_C_ExecuteUbergraph_ActivitySquadFillButton");
static_assert(sizeof(ActivitySquadFillButton_C_ExecuteUbergraph_ActivitySquadFillButton) == 0x000088, "Wrong size on ActivitySquadFillButton_C_ExecuteUbergraph_ActivitySquadFillButton");
static_assert(offsetof(ActivitySquadFillButton_C_ExecuteUbergraph_ActivitySquadFillButton, EntryPoint) == 0x000000, "Member 'ActivitySquadFillButton_C_ExecuteUbergraph_ActivitySquadFillButton::EntryPoint' has a wrong offset!");
static_assert(offsetof(ActivitySquadFillButton_C_ExecuteUbergraph_ActivitySquadFillButton, Temp_bool_Variable) == 0x000004, "Member 'ActivitySquadFillButton_C_ExecuteUbergraph_ActivitySquadFillButton::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(ActivitySquadFillButton_C_ExecuteUbergraph_ActivitySquadFillButton, Temp_bool_Variable_1) == 0x000005, "Member 'ActivitySquadFillButton_C_ExecuteUbergraph_ActivitySquadFillButton::Temp_bool_Variable_1' has a wrong offset!");
static_assert(offsetof(ActivitySquadFillButton_C_ExecuteUbergraph_ActivitySquadFillButton, Temp_bool_Variable_2) == 0x000006, "Member 'ActivitySquadFillButton_C_ExecuteUbergraph_ActivitySquadFillButton::Temp_bool_Variable_2' has a wrong offset!");
static_assert(offsetof(ActivitySquadFillButton_C_ExecuteUbergraph_ActivitySquadFillButton, CallFunc_PlayAnimationForward_ReturnValue) == 0x000008, "Member 'ActivitySquadFillButton_C_ExecuteUbergraph_ActivitySquadFillButton::CallFunc_PlayAnimationForward_ReturnValue' has a wrong offset!");
static_assert(offsetof(ActivitySquadFillButton_C_ExecuteUbergraph_ActivitySquadFillButton, CallFunc_PlayAnimationReverse_ReturnValue) == 0x000010, "Member 'ActivitySquadFillButton_C_ExecuteUbergraph_ActivitySquadFillButton::CallFunc_PlayAnimationReverse_ReturnValue' has a wrong offset!");
static_assert(offsetof(ActivitySquadFillButton_C_ExecuteUbergraph_ActivitySquadFillButton, CallFunc_PlayAnimationForward_ReturnValue_1) == 0x000018, "Member 'ActivitySquadFillButton_C_ExecuteUbergraph_ActivitySquadFillButton::CallFunc_PlayAnimationForward_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(ActivitySquadFillButton_C_ExecuteUbergraph_ActivitySquadFillButton, CallFunc_PlayAnimationReverse_ReturnValue_1) == 0x000020, "Member 'ActivitySquadFillButton_C_ExecuteUbergraph_ActivitySquadFillButton::CallFunc_PlayAnimationReverse_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(ActivitySquadFillButton_C_ExecuteUbergraph_ActivitySquadFillButton, CallFunc_GetAnimationCurrentTime_ReturnValue) == 0x000028, "Member 'ActivitySquadFillButton_C_ExecuteUbergraph_ActivitySquadFillButton::CallFunc_GetAnimationCurrentTime_ReturnValue' has a wrong offset!");
static_assert(offsetof(ActivitySquadFillButton_C_ExecuteUbergraph_ActivitySquadFillButton, K2Node_CreateDelegate_OutputDelegate) == 0x00002C, "Member 'ActivitySquadFillButton_C_ExecuteUbergraph_ActivitySquadFillButton::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(ActivitySquadFillButton_C_ExecuteUbergraph_ActivitySquadFillButton, CallFunc_CreatePlayAnimationTimeRangeProxyObject_Result) == 0x000038, "Member 'ActivitySquadFillButton_C_ExecuteUbergraph_ActivitySquadFillButton::CallFunc_CreatePlayAnimationTimeRangeProxyObject_Result' has a wrong offset!");
static_assert(offsetof(ActivitySquadFillButton_C_ExecuteUbergraph_ActivitySquadFillButton, CallFunc_CreatePlayAnimationTimeRangeProxyObject_ReturnValue) == 0x000040, "Member 'ActivitySquadFillButton_C_ExecuteUbergraph_ActivitySquadFillButton::CallFunc_CreatePlayAnimationTimeRangeProxyObject_ReturnValue' has a wrong offset!");
static_assert(offsetof(ActivitySquadFillButton_C_ExecuteUbergraph_ActivitySquadFillButton, CallFunc_IsValid_ReturnValue) == 0x000048, "Member 'ActivitySquadFillButton_C_ExecuteUbergraph_ActivitySquadFillButton::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(ActivitySquadFillButton_C_ExecuteUbergraph_ActivitySquadFillButton, CallFunc_IsValid_ReturnValue_1) == 0x000049, "Member 'ActivitySquadFillButton_C_ExecuteUbergraph_ActivitySquadFillButton::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(ActivitySquadFillButton_C_ExecuteUbergraph_ActivitySquadFillButton, K2Node_DynamicCast_AsSound_Base) == 0x000050, "Member 'ActivitySquadFillButton_C_ExecuteUbergraph_ActivitySquadFillButton::K2Node_DynamicCast_AsSound_Base' has a wrong offset!");
static_assert(offsetof(ActivitySquadFillButton_C_ExecuteUbergraph_ActivitySquadFillButton, K2Node_DynamicCast_bSuccess) == 0x000058, "Member 'ActivitySquadFillButton_C_ExecuteUbergraph_ActivitySquadFillButton::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(ActivitySquadFillButton_C_ExecuteUbergraph_ActivitySquadFillButton, CallFunc_GetFirstLocalFortPlayerController_ReturnValue) == 0x000060, "Member 'ActivitySquadFillButton_C_ExecuteUbergraph_ActivitySquadFillButton::CallFunc_GetFirstLocalFortPlayerController_ReturnValue' has a wrong offset!");
static_assert(offsetof(ActivitySquadFillButton_C_ExecuteUbergraph_ActivitySquadFillButton, CallFunc_IsUsingGamepad_ReturnValue) == 0x000068, "Member 'ActivitySquadFillButton_C_ExecuteUbergraph_ActivitySquadFillButton::CallFunc_IsUsingGamepad_ReturnValue' has a wrong offset!");
static_assert(offsetof(ActivitySquadFillButton_C_ExecuteUbergraph_ActivitySquadFillButton, CallFunc_PlayAnimationReverse_ReturnValue_2) == 0x000070, "Member 'ActivitySquadFillButton_C_ExecuteUbergraph_ActivitySquadFillButton::CallFunc_PlayAnimationReverse_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(ActivitySquadFillButton_C_ExecuteUbergraph_ActivitySquadFillButton, K2Node_Event_bIsSelected) == 0x000078, "Member 'ActivitySquadFillButton_C_ExecuteUbergraph_ActivitySquadFillButton::K2Node_Event_bIsSelected' has a wrong offset!");
static_assert(offsetof(ActivitySquadFillButton_C_ExecuteUbergraph_ActivitySquadFillButton, K2Node_Event_bIsAvailable) == 0x000079, "Member 'ActivitySquadFillButton_C_ExecuteUbergraph_ActivitySquadFillButton::K2Node_Event_bIsAvailable' has a wrong offset!");
static_assert(offsetof(ActivitySquadFillButton_C_ExecuteUbergraph_ActivitySquadFillButton, K2Node_Event_IsDesignTime) == 0x00007A, "Member 'ActivitySquadFillButton_C_ExecuteUbergraph_ActivitySquadFillButton::K2Node_Event_IsDesignTime' has a wrong offset!");
static_assert(offsetof(ActivitySquadFillButton_C_ExecuteUbergraph_ActivitySquadFillButton, K2Node_Event_bIsFillOnlyEnabled) == 0x00007B, "Member 'ActivitySquadFillButton_C_ExecuteUbergraph_ActivitySquadFillButton::K2Node_Event_bIsFillOnlyEnabled' has a wrong offset!");
static_assert(offsetof(ActivitySquadFillButton_C_ExecuteUbergraph_ActivitySquadFillButton, K2Node_Select_Default) == 0x00007C, "Member 'ActivitySquadFillButton_C_ExecuteUbergraph_ActivitySquadFillButton::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(ActivitySquadFillButton_C_ExecuteUbergraph_ActivitySquadFillButton, CallFunc_SelectInt_ReturnValue) == 0x000080, "Member 'ActivitySquadFillButton_C_ExecuteUbergraph_ActivitySquadFillButton::CallFunc_SelectInt_ReturnValue' has a wrong offset!");

struct ActivitySquadFillButton_C_OnDesiredSquadFillSelectionChanged final
{
public:
	bool                                          bIsSelected;
};
static_assert(alignof(ActivitySquadFillButton_C_OnDesiredSquadFillSelectionChanged) == 0x000001, "Wrong alignment on ActivitySquadFillButton_C_OnDesiredSquadFillSelectionChanged");
static_assert(sizeof(ActivitySquadFillButton_C_OnDesiredSquadFillSelectionChanged) == 0x000001, "Wrong size on ActivitySquadFillButton_C_OnDesiredSquadFillSelectionChanged");
static_assert(offsetof(ActivitySquadFillButton_C_OnDesiredSquadFillSelectionChanged, bIsSelected) == 0x000000, "Member 'ActivitySquadFillButton_C_OnDesiredSquadFillSelectionChanged::bIsSelected' has a wrong offset!");

struct ActivitySquadFillButton_C_OnSquadFillAvailabilityChanged final
{
public:
	bool                                          bIsAvailable;
};
static_assert(alignof(ActivitySquadFillButton_C_OnSquadFillAvailabilityChanged) == 0x000001, "Wrong alignment on ActivitySquadFillButton_C_OnSquadFillAvailabilityChanged");
static_assert(sizeof(ActivitySquadFillButton_C_OnSquadFillAvailabilityChanged) == 0x000001, "Wrong size on ActivitySquadFillButton_C_OnSquadFillAvailabilityChanged");
static_assert(offsetof(ActivitySquadFillButton_C_OnSquadFillAvailabilityChanged, bIsAvailable) == 0x000000, "Member 'ActivitySquadFillButton_C_OnSquadFillAvailabilityChanged::bIsAvailable' has a wrong offset!");

struct ActivitySquadFillButton_C_PreConstruct final
{
public:
	bool                                          IsDesignTime;
};
static_assert(alignof(ActivitySquadFillButton_C_PreConstruct) == 0x000001, "Wrong alignment on ActivitySquadFillButton_C_PreConstruct");
static_assert(sizeof(ActivitySquadFillButton_C_PreConstruct) == 0x000001, "Wrong size on ActivitySquadFillButton_C_PreConstruct");
static_assert(offsetof(ActivitySquadFillButton_C_PreConstruct, IsDesignTime) == 0x000000, "Member 'ActivitySquadFillButton_C_PreConstruct::IsDesignTime' has a wrong offset!");

struct ActivitySquadFillButton_C_ToggleFillOnlyVisibility final
{
public:
	bool                                          bIsFillOnlyEnabled;
};
static_assert(alignof(ActivitySquadFillButton_C_ToggleFillOnlyVisibility) == 0x000001, "Wrong alignment on ActivitySquadFillButton_C_ToggleFillOnlyVisibility");
static_assert(sizeof(ActivitySquadFillButton_C_ToggleFillOnlyVisibility) == 0x000001, "Wrong size on ActivitySquadFillButton_C_ToggleFillOnlyVisibility");
static_assert(offsetof(ActivitySquadFillButton_C_ToggleFillOnlyVisibility, bIsFillOnlyEnabled) == 0x000000, "Member 'ActivitySquadFillButton_C_ToggleFillOnlyVisibility::bIsFillOnlyEnabled' has a wrong offset!");

}
