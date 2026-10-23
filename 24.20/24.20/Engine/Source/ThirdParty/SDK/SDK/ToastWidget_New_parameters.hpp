#pragma once

#include "Basic.hpp"

#include "UMG_structs.hpp"
#include "Engine_structs.hpp"
#include "SlateCore_structs.hpp"

namespace SDK::Params
{

struct ToastWidget_New_C_BndEvt__OpenButton_K2Node_ComponentBoundEvent_5_CommonButtonClicked__DelegateSignature final
{
public:
	class UCommonButtonLegacy*                    Button;
};
static_assert(alignof(ToastWidget_New_C_BndEvt__OpenButton_K2Node_ComponentBoundEvent_5_CommonButtonClicked__DelegateSignature) == 0x000008, "Wrong alignment on ToastWidget_New_C_BndEvt__OpenButton_K2Node_ComponentBoundEvent_5_CommonButtonClicked__DelegateSignature");
static_assert(sizeof(ToastWidget_New_C_BndEvt__OpenButton_K2Node_ComponentBoundEvent_5_CommonButtonClicked__DelegateSignature) == 0x000008, "Wrong size on ToastWidget_New_C_BndEvt__OpenButton_K2Node_ComponentBoundEvent_5_CommonButtonClicked__DelegateSignature");
static_assert(offsetof(ToastWidget_New_C_BndEvt__OpenButton_K2Node_ComponentBoundEvent_5_CommonButtonClicked__DelegateSignature, Button) == 0x000000, "Member 'ToastWidget_New_C_BndEvt__OpenButton_K2Node_ComponentBoundEvent_5_CommonButtonClicked__DelegateSignature::Button' has a wrong offset!");

struct ToastWidget_New_C_ExecuteUbergraph_ToastWidget_New final
{
public:
	int32                                         EntryPoint;
	bool                                          CallFunc_GetDisplayTime_bOutDisplayTimeOverridden;
	uint8                                         Pad_5[0x3];
	float                                         CallFunc_GetDisplayTime_ReturnValue;
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;
	struct FTimerHandle                           CallFunc_K2_SetTimerDelegate_ReturnValue;
	struct FGeometry                              K2Node_Event_MyGeometry;
	struct FPointerEvent                          K2Node_Event_MouseEvent_1;
	struct FPointerEvent                          K2Node_Event_MouseEvent;
	class UCommonButtonLegacy*                    K2Node_ComponentBoundEvent_Button;
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;
	class UFortUINotification*                    K2Node_Event_Notification_1;
	class UFortUINotification*                    K2Node_Event_Notification;
	bool                                          CallFunc_HasAction_ReturnValue;
};
static_assert(alignof(ToastWidget_New_C_ExecuteUbergraph_ToastWidget_New) == 0x000008, "Wrong alignment on ToastWidget_New_C_ExecuteUbergraph_ToastWidget_New");
static_assert(sizeof(ToastWidget_New_C_ExecuteUbergraph_ToastWidget_New) == 0x0001B8, "Wrong size on ToastWidget_New_C_ExecuteUbergraph_ToastWidget_New");
static_assert(offsetof(ToastWidget_New_C_ExecuteUbergraph_ToastWidget_New, EntryPoint) == 0x000000, "Member 'ToastWidget_New_C_ExecuteUbergraph_ToastWidget_New::EntryPoint' has a wrong offset!");
static_assert(offsetof(ToastWidget_New_C_ExecuteUbergraph_ToastWidget_New, CallFunc_GetDisplayTime_bOutDisplayTimeOverridden) == 0x000004, "Member 'ToastWidget_New_C_ExecuteUbergraph_ToastWidget_New::CallFunc_GetDisplayTime_bOutDisplayTimeOverridden' has a wrong offset!");
static_assert(offsetof(ToastWidget_New_C_ExecuteUbergraph_ToastWidget_New, CallFunc_GetDisplayTime_ReturnValue) == 0x000008, "Member 'ToastWidget_New_C_ExecuteUbergraph_ToastWidget_New::CallFunc_GetDisplayTime_ReturnValue' has a wrong offset!");
static_assert(offsetof(ToastWidget_New_C_ExecuteUbergraph_ToastWidget_New, K2Node_CreateDelegate_OutputDelegate) == 0x00000C, "Member 'ToastWidget_New_C_ExecuteUbergraph_ToastWidget_New::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(ToastWidget_New_C_ExecuteUbergraph_ToastWidget_New, CallFunc_K2_SetTimerDelegate_ReturnValue) == 0x000018, "Member 'ToastWidget_New_C_ExecuteUbergraph_ToastWidget_New::CallFunc_K2_SetTimerDelegate_ReturnValue' has a wrong offset!");
static_assert(offsetof(ToastWidget_New_C_ExecuteUbergraph_ToastWidget_New, K2Node_Event_MyGeometry) == 0x000020, "Member 'ToastWidget_New_C_ExecuteUbergraph_ToastWidget_New::K2Node_Event_MyGeometry' has a wrong offset!");
static_assert(offsetof(ToastWidget_New_C_ExecuteUbergraph_ToastWidget_New, K2Node_Event_MouseEvent_1) == 0x000060, "Member 'ToastWidget_New_C_ExecuteUbergraph_ToastWidget_New::K2Node_Event_MouseEvent_1' has a wrong offset!");
static_assert(offsetof(ToastWidget_New_C_ExecuteUbergraph_ToastWidget_New, K2Node_Event_MouseEvent) == 0x0000F8, "Member 'ToastWidget_New_C_ExecuteUbergraph_ToastWidget_New::K2Node_Event_MouseEvent' has a wrong offset!");
static_assert(offsetof(ToastWidget_New_C_ExecuteUbergraph_ToastWidget_New, K2Node_ComponentBoundEvent_Button) == 0x000190, "Member 'ToastWidget_New_C_ExecuteUbergraph_ToastWidget_New::K2Node_ComponentBoundEvent_Button' has a wrong offset!");
static_assert(offsetof(ToastWidget_New_C_ExecuteUbergraph_ToastWidget_New, CallFunc_PlayAnimation_ReturnValue) == 0x000198, "Member 'ToastWidget_New_C_ExecuteUbergraph_ToastWidget_New::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");
static_assert(offsetof(ToastWidget_New_C_ExecuteUbergraph_ToastWidget_New, K2Node_Event_Notification_1) == 0x0001A0, "Member 'ToastWidget_New_C_ExecuteUbergraph_ToastWidget_New::K2Node_Event_Notification_1' has a wrong offset!");
static_assert(offsetof(ToastWidget_New_C_ExecuteUbergraph_ToastWidget_New, K2Node_Event_Notification) == 0x0001A8, "Member 'ToastWidget_New_C_ExecuteUbergraph_ToastWidget_New::K2Node_Event_Notification' has a wrong offset!");
static_assert(offsetof(ToastWidget_New_C_ExecuteUbergraph_ToastWidget_New, CallFunc_HasAction_ReturnValue) == 0x0001B0, "Member 'ToastWidget_New_C_ExecuteUbergraph_ToastWidget_New::CallFunc_HasAction_ReturnValue' has a wrong offset!");

struct ToastWidget_New_C_GetOpenButtonVisibility final
{
public:
	ESlateVisibility                              ReturnValue;
	bool                                          Temp_bool_Variable;
	ESlateVisibility                              Temp_byte_Variable;
	ESlateVisibility                              Temp_byte_Variable_1;
	uint8                                         Pad_4[0x4];
	class UFortGlobalUIContext*                   CallFunc_GetLocalPlayerSubsystem_ReturnValue;
	bool                                          CallFunc_HasAction_ReturnValue;
	bool                                          CallFunc_IsInZone_ReturnValue;
	bool                                          CallFunc_Not_PreBool_ReturnValue;
	bool                                          CallFunc_BooleanAND_ReturnValue;
	ESlateVisibility                              K2Node_Select_Default;
};
static_assert(alignof(ToastWidget_New_C_GetOpenButtonVisibility) == 0x000008, "Wrong alignment on ToastWidget_New_C_GetOpenButtonVisibility");
static_assert(sizeof(ToastWidget_New_C_GetOpenButtonVisibility) == 0x000018, "Wrong size on ToastWidget_New_C_GetOpenButtonVisibility");
static_assert(offsetof(ToastWidget_New_C_GetOpenButtonVisibility, ReturnValue) == 0x000000, "Member 'ToastWidget_New_C_GetOpenButtonVisibility::ReturnValue' has a wrong offset!");
static_assert(offsetof(ToastWidget_New_C_GetOpenButtonVisibility, Temp_bool_Variable) == 0x000001, "Member 'ToastWidget_New_C_GetOpenButtonVisibility::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(ToastWidget_New_C_GetOpenButtonVisibility, Temp_byte_Variable) == 0x000002, "Member 'ToastWidget_New_C_GetOpenButtonVisibility::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(ToastWidget_New_C_GetOpenButtonVisibility, Temp_byte_Variable_1) == 0x000003, "Member 'ToastWidget_New_C_GetOpenButtonVisibility::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(ToastWidget_New_C_GetOpenButtonVisibility, CallFunc_GetLocalPlayerSubsystem_ReturnValue) == 0x000008, "Member 'ToastWidget_New_C_GetOpenButtonVisibility::CallFunc_GetLocalPlayerSubsystem_ReturnValue' has a wrong offset!");
static_assert(offsetof(ToastWidget_New_C_GetOpenButtonVisibility, CallFunc_HasAction_ReturnValue) == 0x000010, "Member 'ToastWidget_New_C_GetOpenButtonVisibility::CallFunc_HasAction_ReturnValue' has a wrong offset!");
static_assert(offsetof(ToastWidget_New_C_GetOpenButtonVisibility, CallFunc_IsInZone_ReturnValue) == 0x000011, "Member 'ToastWidget_New_C_GetOpenButtonVisibility::CallFunc_IsInZone_ReturnValue' has a wrong offset!");
static_assert(offsetof(ToastWidget_New_C_GetOpenButtonVisibility, CallFunc_Not_PreBool_ReturnValue) == 0x000012, "Member 'ToastWidget_New_C_GetOpenButtonVisibility::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(ToastWidget_New_C_GetOpenButtonVisibility, CallFunc_BooleanAND_ReturnValue) == 0x000013, "Member 'ToastWidget_New_C_GetOpenButtonVisibility::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(ToastWidget_New_C_GetOpenButtonVisibility, K2Node_Select_Default) == 0x000014, "Member 'ToastWidget_New_C_GetOpenButtonVisibility::K2Node_Select_Default' has a wrong offset!");

struct ToastWidget_New_C_OnMouseEnter final
{
public:
	struct FGeometry                              MyGeometry;
	struct FPointerEvent                          MouseEvent;
};
static_assert(alignof(ToastWidget_New_C_OnMouseEnter) == 0x000008, "Wrong alignment on ToastWidget_New_C_OnMouseEnter");
static_assert(sizeof(ToastWidget_New_C_OnMouseEnter) == 0x0000D8, "Wrong size on ToastWidget_New_C_OnMouseEnter");
static_assert(offsetof(ToastWidget_New_C_OnMouseEnter, MyGeometry) == 0x000000, "Member 'ToastWidget_New_C_OnMouseEnter::MyGeometry' has a wrong offset!");
static_assert(offsetof(ToastWidget_New_C_OnMouseEnter, MouseEvent) == 0x000040, "Member 'ToastWidget_New_C_OnMouseEnter::MouseEvent' has a wrong offset!");

struct ToastWidget_New_C_OnMouseLeave final
{
public:
	struct FPointerEvent                          MouseEvent;
};
static_assert(alignof(ToastWidget_New_C_OnMouseLeave) == 0x000008, "Wrong alignment on ToastWidget_New_C_OnMouseLeave");
static_assert(sizeof(ToastWidget_New_C_OnMouseLeave) == 0x000098, "Wrong size on ToastWidget_New_C_OnMouseLeave");
static_assert(offsetof(ToastWidget_New_C_OnMouseLeave, MouseEvent) == 0x000000, "Member 'ToastWidget_New_C_OnMouseLeave::MouseEvent' has a wrong offset!");

struct ToastWidget_New_C_OnNotificationSet final
{
public:
	class UFortUINotification*                    Notification;
};
static_assert(alignof(ToastWidget_New_C_OnNotificationSet) == 0x000008, "Wrong alignment on ToastWidget_New_C_OnNotificationSet");
static_assert(sizeof(ToastWidget_New_C_OnNotificationSet) == 0x000008, "Wrong size on ToastWidget_New_C_OnNotificationSet");
static_assert(offsetof(ToastWidget_New_C_OnNotificationSet, Notification) == 0x000000, "Member 'ToastWidget_New_C_OnNotificationSet::Notification' has a wrong offset!");

struct ToastWidget_New_C_OnNotificationUpdated final
{
public:
	class UFortUINotification*                    Notification;
};
static_assert(alignof(ToastWidget_New_C_OnNotificationUpdated) == 0x000008, "Wrong alignment on ToastWidget_New_C_OnNotificationUpdated");
static_assert(sizeof(ToastWidget_New_C_OnNotificationUpdated) == 0x000008, "Wrong size on ToastWidget_New_C_OnNotificationUpdated");
static_assert(offsetof(ToastWidget_New_C_OnNotificationUpdated, Notification) == 0x000000, "Member 'ToastWidget_New_C_OnNotificationUpdated::Notification' has a wrong offset!");

struct ToastWidget_New_C_SetImage final
{
public:
	TSoftObjectPtr<class UObject>                 CallFunc_GetDisplayAsset_ReturnValue;
	class UTwitchNotification_C*                  K2Node_DynamicCast_AsTwitch_Notification;
	bool                                          K2Node_DynamicCast_bSuccess;
	bool                                          CallFunc_IsValidSoftObjectReference_ReturnValue;
};
static_assert(alignof(ToastWidget_New_C_SetImage) == 0x000008, "Wrong alignment on ToastWidget_New_C_SetImage");
static_assert(sizeof(ToastWidget_New_C_SetImage) == 0x000038, "Wrong size on ToastWidget_New_C_SetImage");
static_assert(offsetof(ToastWidget_New_C_SetImage, CallFunc_GetDisplayAsset_ReturnValue) == 0x000000, "Member 'ToastWidget_New_C_SetImage::CallFunc_GetDisplayAsset_ReturnValue' has a wrong offset!");
static_assert(offsetof(ToastWidget_New_C_SetImage, K2Node_DynamicCast_AsTwitch_Notification) == 0x000028, "Member 'ToastWidget_New_C_SetImage::K2Node_DynamicCast_AsTwitch_Notification' has a wrong offset!");
static_assert(offsetof(ToastWidget_New_C_SetImage, K2Node_DynamicCast_bSuccess) == 0x000030, "Member 'ToastWidget_New_C_SetImage::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(ToastWidget_New_C_SetImage, CallFunc_IsValidSoftObjectReference_ReturnValue) == 0x000031, "Member 'ToastWidget_New_C_SetImage::CallFunc_IsValidSoftObjectReference_ReturnValue' has a wrong offset!");

struct ToastWidget_New_C_SetupAnimBindings final
{
public:
	bool                                          Unbind;
	uint8                                         Pad_1[0x3];
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_1;
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_2;
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_3;
};
static_assert(alignof(ToastWidget_New_C_SetupAnimBindings) == 0x000004, "Wrong alignment on ToastWidget_New_C_SetupAnimBindings");
static_assert(sizeof(ToastWidget_New_C_SetupAnimBindings) == 0x000034, "Wrong size on ToastWidget_New_C_SetupAnimBindings");
static_assert(offsetof(ToastWidget_New_C_SetupAnimBindings, Unbind) == 0x000000, "Member 'ToastWidget_New_C_SetupAnimBindings::Unbind' has a wrong offset!");
static_assert(offsetof(ToastWidget_New_C_SetupAnimBindings, K2Node_CreateDelegate_OutputDelegate) == 0x000004, "Member 'ToastWidget_New_C_SetupAnimBindings::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(ToastWidget_New_C_SetupAnimBindings, K2Node_CreateDelegate_OutputDelegate_1) == 0x000010, "Member 'ToastWidget_New_C_SetupAnimBindings::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(ToastWidget_New_C_SetupAnimBindings, K2Node_CreateDelegate_OutputDelegate_2) == 0x00001C, "Member 'ToastWidget_New_C_SetupAnimBindings::K2Node_CreateDelegate_OutputDelegate_2' has a wrong offset!");
static_assert(offsetof(ToastWidget_New_C_SetupAnimBindings, K2Node_CreateDelegate_OutputDelegate_3) == 0x000028, "Member 'ToastWidget_New_C_SetupAnimBindings::K2Node_CreateDelegate_OutputDelegate_3' has a wrong offset!");

struct ToastWidget_New_C_StartIntro final
{
public:
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;
};
static_assert(alignof(ToastWidget_New_C_StartIntro) == 0x000008, "Wrong alignment on ToastWidget_New_C_StartIntro");
static_assert(sizeof(ToastWidget_New_C_StartIntro) == 0x000008, "Wrong size on ToastWidget_New_C_StartIntro");
static_assert(offsetof(ToastWidget_New_C_StartIntro, CallFunc_PlayAnimation_ReturnValue) == 0x000000, "Member 'ToastWidget_New_C_StartIntro::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");

struct ToastWidget_New_C_UpdateToast final
{
public:
	class UFortUINotification*                    Notification;
	class FText                                   CallFunc_GetDescription_ReturnValue;
	class UFortUIFriendNotification*              K2Node_DynamicCast_AsFort_UIFriend_Notification;
	bool                                          K2Node_DynamicCast_bSuccess;
	uint8                                         Pad_29[0x7];
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData;
	bool                                          K2Node_SwitchEnum_CmpSuccess;
	bool                                          CallFunc_HasAction_ReturnValue;
	uint8                                         Pad_82[0x6];
	class FText                                   CallFunc_GetDescription_ReturnValue_1;
	class FText                                   CallFunc_GetTitle_ReturnValue;
	class FText                                   CallFunc_MakeLiteralText_ReturnValue;
	class UFortGlobalUIContext*                   CallFunc_GetLocalPlayerSubsystem_ReturnValue;
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData_1;
	bool                                          CallFunc_IsInZone_ReturnValue;
	uint8                                         Pad_129[0x7];
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array;
	class FText                                   CallFunc_Format_ReturnValue;
	ESlateVisibility                              CallFunc_GetOpenButtonVisibility_ReturnValue;
};
static_assert(alignof(ToastWidget_New_C_UpdateToast) == 0x000008, "Wrong alignment on ToastWidget_New_C_UpdateToast");
static_assert(sizeof(ToastWidget_New_C_UpdateToast) == 0x000160, "Wrong size on ToastWidget_New_C_UpdateToast");
static_assert(offsetof(ToastWidget_New_C_UpdateToast, Notification) == 0x000000, "Member 'ToastWidget_New_C_UpdateToast::Notification' has a wrong offset!");
static_assert(offsetof(ToastWidget_New_C_UpdateToast, CallFunc_GetDescription_ReturnValue) == 0x000008, "Member 'ToastWidget_New_C_UpdateToast::CallFunc_GetDescription_ReturnValue' has a wrong offset!");
static_assert(offsetof(ToastWidget_New_C_UpdateToast, K2Node_DynamicCast_AsFort_UIFriend_Notification) == 0x000020, "Member 'ToastWidget_New_C_UpdateToast::K2Node_DynamicCast_AsFort_UIFriend_Notification' has a wrong offset!");
static_assert(offsetof(ToastWidget_New_C_UpdateToast, K2Node_DynamicCast_bSuccess) == 0x000028, "Member 'ToastWidget_New_C_UpdateToast::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(ToastWidget_New_C_UpdateToast, K2Node_MakeStruct_FormatArgumentData) == 0x000030, "Member 'ToastWidget_New_C_UpdateToast::K2Node_MakeStruct_FormatArgumentData' has a wrong offset!");
static_assert(offsetof(ToastWidget_New_C_UpdateToast, K2Node_SwitchEnum_CmpSuccess) == 0x000080, "Member 'ToastWidget_New_C_UpdateToast::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");
static_assert(offsetof(ToastWidget_New_C_UpdateToast, CallFunc_HasAction_ReturnValue) == 0x000081, "Member 'ToastWidget_New_C_UpdateToast::CallFunc_HasAction_ReturnValue' has a wrong offset!");
static_assert(offsetof(ToastWidget_New_C_UpdateToast, CallFunc_GetDescription_ReturnValue_1) == 0x000088, "Member 'ToastWidget_New_C_UpdateToast::CallFunc_GetDescription_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(ToastWidget_New_C_UpdateToast, CallFunc_GetTitle_ReturnValue) == 0x0000A0, "Member 'ToastWidget_New_C_UpdateToast::CallFunc_GetTitle_ReturnValue' has a wrong offset!");
static_assert(offsetof(ToastWidget_New_C_UpdateToast, CallFunc_MakeLiteralText_ReturnValue) == 0x0000B8, "Member 'ToastWidget_New_C_UpdateToast::CallFunc_MakeLiteralText_ReturnValue' has a wrong offset!");
static_assert(offsetof(ToastWidget_New_C_UpdateToast, CallFunc_GetLocalPlayerSubsystem_ReturnValue) == 0x0000D0, "Member 'ToastWidget_New_C_UpdateToast::CallFunc_GetLocalPlayerSubsystem_ReturnValue' has a wrong offset!");
static_assert(offsetof(ToastWidget_New_C_UpdateToast, K2Node_MakeStruct_FormatArgumentData_1) == 0x0000D8, "Member 'ToastWidget_New_C_UpdateToast::K2Node_MakeStruct_FormatArgumentData_1' has a wrong offset!");
static_assert(offsetof(ToastWidget_New_C_UpdateToast, CallFunc_IsInZone_ReturnValue) == 0x000128, "Member 'ToastWidget_New_C_UpdateToast::CallFunc_IsInZone_ReturnValue' has a wrong offset!");
static_assert(offsetof(ToastWidget_New_C_UpdateToast, K2Node_MakeArray_Array) == 0x000130, "Member 'ToastWidget_New_C_UpdateToast::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(ToastWidget_New_C_UpdateToast, CallFunc_Format_ReturnValue) == 0x000140, "Member 'ToastWidget_New_C_UpdateToast::CallFunc_Format_ReturnValue' has a wrong offset!");
static_assert(offsetof(ToastWidget_New_C_UpdateToast, CallFunc_GetOpenButtonVisibility_ReturnValue) == 0x000158, "Member 'ToastWidget_New_C_UpdateToast::CallFunc_GetOpenButtonVisibility_ReturnValue' has a wrong offset!");

struct ToastWidget_New_C_GetDisplayTime final
{
public:
	bool                                          bOutDisplayTimeOverridden;
	uint8                                         Pad_1[0x3];
	float                                         ReturnValue;
	bool                                          CallFunc_GetDisplayTime_bOutDisplayTimeOverridden;
	uint8                                         Pad_9[0x3];
	float                                         CallFunc_GetDisplayTime_ReturnValue;
	class UFortUIFriendNotification*              K2Node_DynamicCast_AsFort_UIFriend_Notification;
	bool                                          K2Node_DynamicCast_bSuccess;
	bool                                          K2Node_SwitchEnum_CmpSuccess;
};
static_assert(alignof(ToastWidget_New_C_GetDisplayTime) == 0x000008, "Wrong alignment on ToastWidget_New_C_GetDisplayTime");
static_assert(sizeof(ToastWidget_New_C_GetDisplayTime) == 0x000020, "Wrong size on ToastWidget_New_C_GetDisplayTime");
static_assert(offsetof(ToastWidget_New_C_GetDisplayTime, bOutDisplayTimeOverridden) == 0x000000, "Member 'ToastWidget_New_C_GetDisplayTime::bOutDisplayTimeOverridden' has a wrong offset!");
static_assert(offsetof(ToastWidget_New_C_GetDisplayTime, ReturnValue) == 0x000004, "Member 'ToastWidget_New_C_GetDisplayTime::ReturnValue' has a wrong offset!");
static_assert(offsetof(ToastWidget_New_C_GetDisplayTime, CallFunc_GetDisplayTime_bOutDisplayTimeOverridden) == 0x000008, "Member 'ToastWidget_New_C_GetDisplayTime::CallFunc_GetDisplayTime_bOutDisplayTimeOverridden' has a wrong offset!");
static_assert(offsetof(ToastWidget_New_C_GetDisplayTime, CallFunc_GetDisplayTime_ReturnValue) == 0x00000C, "Member 'ToastWidget_New_C_GetDisplayTime::CallFunc_GetDisplayTime_ReturnValue' has a wrong offset!");
static_assert(offsetof(ToastWidget_New_C_GetDisplayTime, K2Node_DynamicCast_AsFort_UIFriend_Notification) == 0x000010, "Member 'ToastWidget_New_C_GetDisplayTime::K2Node_DynamicCast_AsFort_UIFriend_Notification' has a wrong offset!");
static_assert(offsetof(ToastWidget_New_C_GetDisplayTime, K2Node_DynamicCast_bSuccess) == 0x000018, "Member 'ToastWidget_New_C_GetDisplayTime::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(ToastWidget_New_C_GetDisplayTime, K2Node_SwitchEnum_CmpSuccess) == 0x000019, "Member 'ToastWidget_New_C_GetDisplayTime::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");

}
