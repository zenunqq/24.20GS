#pragma once

#include "Basic.hpp"

#include "FortniteGame_structs.hpp"
#include "UMG_structs.hpp"
#include "Engine_structs.hpp"

namespace SDK::Params
{

struct ToastWidgetDonut_C_ApplyAdditionalStyling final
{
public:
	class UClass*                                 Temp_class_Variable;
	bool                                          Temp_bool_Variable;
	uint8                                         Pad_9[0x7];
	class UClass*                                 Temp_class_Variable_1;
	class UClass*                                 Temp_class_Variable_2;
	bool                                          Temp_bool_Variable_1;
	uint8                                         Pad_21[0x7];
	class UClass*                                 Temp_class_Variable_3;
	class UClass*                                 Temp_class_Variable_4;
	EFortNotificationType                         CallFunc_GetNotificationType_ReturnValue;
	uint8                                         Pad_39[0x7];
	class UClass*                                 Temp_class_Variable_5;
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;
	uint8                                         Pad_49[0x7];
	class UClass*                                 K2Node_Select_Default;
	class UClass*                                 K2Node_Select_Default_1;
	bool                                          Temp_bool_Variable_2;
	uint8                                         Pad_61[0x7];
	class UClass*                                 K2Node_Select_Default_2;
};
static_assert(alignof(ToastWidgetDonut_C_ApplyAdditionalStyling) == 0x000008, "Wrong alignment on ToastWidgetDonut_C_ApplyAdditionalStyling");
static_assert(sizeof(ToastWidgetDonut_C_ApplyAdditionalStyling) == 0x000070, "Wrong size on ToastWidgetDonut_C_ApplyAdditionalStyling");
static_assert(offsetof(ToastWidgetDonut_C_ApplyAdditionalStyling, Temp_class_Variable) == 0x000000, "Member 'ToastWidgetDonut_C_ApplyAdditionalStyling::Temp_class_Variable' has a wrong offset!");
static_assert(offsetof(ToastWidgetDonut_C_ApplyAdditionalStyling, Temp_bool_Variable) == 0x000008, "Member 'ToastWidgetDonut_C_ApplyAdditionalStyling::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(ToastWidgetDonut_C_ApplyAdditionalStyling, Temp_class_Variable_1) == 0x000010, "Member 'ToastWidgetDonut_C_ApplyAdditionalStyling::Temp_class_Variable_1' has a wrong offset!");
static_assert(offsetof(ToastWidgetDonut_C_ApplyAdditionalStyling, Temp_class_Variable_2) == 0x000018, "Member 'ToastWidgetDonut_C_ApplyAdditionalStyling::Temp_class_Variable_2' has a wrong offset!");
static_assert(offsetof(ToastWidgetDonut_C_ApplyAdditionalStyling, Temp_bool_Variable_1) == 0x000020, "Member 'ToastWidgetDonut_C_ApplyAdditionalStyling::Temp_bool_Variable_1' has a wrong offset!");
static_assert(offsetof(ToastWidgetDonut_C_ApplyAdditionalStyling, Temp_class_Variable_3) == 0x000028, "Member 'ToastWidgetDonut_C_ApplyAdditionalStyling::Temp_class_Variable_3' has a wrong offset!");
static_assert(offsetof(ToastWidgetDonut_C_ApplyAdditionalStyling, Temp_class_Variable_4) == 0x000030, "Member 'ToastWidgetDonut_C_ApplyAdditionalStyling::Temp_class_Variable_4' has a wrong offset!");
static_assert(offsetof(ToastWidgetDonut_C_ApplyAdditionalStyling, CallFunc_GetNotificationType_ReturnValue) == 0x000038, "Member 'ToastWidgetDonut_C_ApplyAdditionalStyling::CallFunc_GetNotificationType_ReturnValue' has a wrong offset!");
static_assert(offsetof(ToastWidgetDonut_C_ApplyAdditionalStyling, Temp_class_Variable_5) == 0x000040, "Member 'ToastWidgetDonut_C_ApplyAdditionalStyling::Temp_class_Variable_5' has a wrong offset!");
static_assert(offsetof(ToastWidgetDonut_C_ApplyAdditionalStyling, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x000048, "Member 'ToastWidgetDonut_C_ApplyAdditionalStyling::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(ToastWidgetDonut_C_ApplyAdditionalStyling, K2Node_Select_Default) == 0x000050, "Member 'ToastWidgetDonut_C_ApplyAdditionalStyling::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(ToastWidgetDonut_C_ApplyAdditionalStyling, K2Node_Select_Default_1) == 0x000058, "Member 'ToastWidgetDonut_C_ApplyAdditionalStyling::K2Node_Select_Default_1' has a wrong offset!");
static_assert(offsetof(ToastWidgetDonut_C_ApplyAdditionalStyling, Temp_bool_Variable_2) == 0x000060, "Member 'ToastWidgetDonut_C_ApplyAdditionalStyling::Temp_bool_Variable_2' has a wrong offset!");
static_assert(offsetof(ToastWidgetDonut_C_ApplyAdditionalStyling, K2Node_Select_Default_2) == 0x000068, "Member 'ToastWidgetDonut_C_ApplyAdditionalStyling::K2Node_Select_Default_2' has a wrong offset!");

struct ToastWidgetDonut_C_ExecuteUbergraph_ToastWidgetDonut final
{
public:
	int32                                         EntryPoint;
	bool                                          CallFunc_GetDisplayTime_bOutDisplayTimeOverridden;
	uint8                                         Pad_5[0x3];
	float                                         CallFunc_GetDisplayTime_ReturnValue;
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;
	struct FTimerHandle                           CallFunc_K2_SetTimerDelegate_ReturnValue;
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;
	class UFortUINotification*                    K2Node_Event_Notification_1;
	class UFortUINotification*                    K2Node_Event_Notification;
};
static_assert(alignof(ToastWidgetDonut_C_ExecuteUbergraph_ToastWidgetDonut) == 0x000008, "Wrong alignment on ToastWidgetDonut_C_ExecuteUbergraph_ToastWidgetDonut");
static_assert(sizeof(ToastWidgetDonut_C_ExecuteUbergraph_ToastWidgetDonut) == 0x000038, "Wrong size on ToastWidgetDonut_C_ExecuteUbergraph_ToastWidgetDonut");
static_assert(offsetof(ToastWidgetDonut_C_ExecuteUbergraph_ToastWidgetDonut, EntryPoint) == 0x000000, "Member 'ToastWidgetDonut_C_ExecuteUbergraph_ToastWidgetDonut::EntryPoint' has a wrong offset!");
static_assert(offsetof(ToastWidgetDonut_C_ExecuteUbergraph_ToastWidgetDonut, CallFunc_GetDisplayTime_bOutDisplayTimeOverridden) == 0x000004, "Member 'ToastWidgetDonut_C_ExecuteUbergraph_ToastWidgetDonut::CallFunc_GetDisplayTime_bOutDisplayTimeOverridden' has a wrong offset!");
static_assert(offsetof(ToastWidgetDonut_C_ExecuteUbergraph_ToastWidgetDonut, CallFunc_GetDisplayTime_ReturnValue) == 0x000008, "Member 'ToastWidgetDonut_C_ExecuteUbergraph_ToastWidgetDonut::CallFunc_GetDisplayTime_ReturnValue' has a wrong offset!");
static_assert(offsetof(ToastWidgetDonut_C_ExecuteUbergraph_ToastWidgetDonut, K2Node_CreateDelegate_OutputDelegate) == 0x00000C, "Member 'ToastWidgetDonut_C_ExecuteUbergraph_ToastWidgetDonut::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(ToastWidgetDonut_C_ExecuteUbergraph_ToastWidgetDonut, CallFunc_K2_SetTimerDelegate_ReturnValue) == 0x000018, "Member 'ToastWidgetDonut_C_ExecuteUbergraph_ToastWidgetDonut::CallFunc_K2_SetTimerDelegate_ReturnValue' has a wrong offset!");
static_assert(offsetof(ToastWidgetDonut_C_ExecuteUbergraph_ToastWidgetDonut, CallFunc_PlayAnimation_ReturnValue) == 0x000020, "Member 'ToastWidgetDonut_C_ExecuteUbergraph_ToastWidgetDonut::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");
static_assert(offsetof(ToastWidgetDonut_C_ExecuteUbergraph_ToastWidgetDonut, K2Node_Event_Notification_1) == 0x000028, "Member 'ToastWidgetDonut_C_ExecuteUbergraph_ToastWidgetDonut::K2Node_Event_Notification_1' has a wrong offset!");
static_assert(offsetof(ToastWidgetDonut_C_ExecuteUbergraph_ToastWidgetDonut, K2Node_Event_Notification) == 0x000030, "Member 'ToastWidgetDonut_C_ExecuteUbergraph_ToastWidgetDonut::K2Node_Event_Notification' has a wrong offset!");

struct ToastWidgetDonut_C_GetOpenButtonVisibility final
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
static_assert(alignof(ToastWidgetDonut_C_GetOpenButtonVisibility) == 0x000008, "Wrong alignment on ToastWidgetDonut_C_GetOpenButtonVisibility");
static_assert(sizeof(ToastWidgetDonut_C_GetOpenButtonVisibility) == 0x000018, "Wrong size on ToastWidgetDonut_C_GetOpenButtonVisibility");
static_assert(offsetof(ToastWidgetDonut_C_GetOpenButtonVisibility, ReturnValue) == 0x000000, "Member 'ToastWidgetDonut_C_GetOpenButtonVisibility::ReturnValue' has a wrong offset!");
static_assert(offsetof(ToastWidgetDonut_C_GetOpenButtonVisibility, Temp_bool_Variable) == 0x000001, "Member 'ToastWidgetDonut_C_GetOpenButtonVisibility::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(ToastWidgetDonut_C_GetOpenButtonVisibility, Temp_byte_Variable) == 0x000002, "Member 'ToastWidgetDonut_C_GetOpenButtonVisibility::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(ToastWidgetDonut_C_GetOpenButtonVisibility, Temp_byte_Variable_1) == 0x000003, "Member 'ToastWidgetDonut_C_GetOpenButtonVisibility::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(ToastWidgetDonut_C_GetOpenButtonVisibility, CallFunc_GetLocalPlayerSubsystem_ReturnValue) == 0x000008, "Member 'ToastWidgetDonut_C_GetOpenButtonVisibility::CallFunc_GetLocalPlayerSubsystem_ReturnValue' has a wrong offset!");
static_assert(offsetof(ToastWidgetDonut_C_GetOpenButtonVisibility, CallFunc_HasAction_ReturnValue) == 0x000010, "Member 'ToastWidgetDonut_C_GetOpenButtonVisibility::CallFunc_HasAction_ReturnValue' has a wrong offset!");
static_assert(offsetof(ToastWidgetDonut_C_GetOpenButtonVisibility, CallFunc_IsInZone_ReturnValue) == 0x000011, "Member 'ToastWidgetDonut_C_GetOpenButtonVisibility::CallFunc_IsInZone_ReturnValue' has a wrong offset!");
static_assert(offsetof(ToastWidgetDonut_C_GetOpenButtonVisibility, CallFunc_Not_PreBool_ReturnValue) == 0x000012, "Member 'ToastWidgetDonut_C_GetOpenButtonVisibility::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(ToastWidgetDonut_C_GetOpenButtonVisibility, CallFunc_BooleanAND_ReturnValue) == 0x000013, "Member 'ToastWidgetDonut_C_GetOpenButtonVisibility::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(ToastWidgetDonut_C_GetOpenButtonVisibility, K2Node_Select_Default) == 0x000014, "Member 'ToastWidgetDonut_C_GetOpenButtonVisibility::K2Node_Select_Default' has a wrong offset!");

struct ToastWidgetDonut_C_OnNotificationSet final
{
public:
	class UFortUINotification*                    Notification;
};
static_assert(alignof(ToastWidgetDonut_C_OnNotificationSet) == 0x000008, "Wrong alignment on ToastWidgetDonut_C_OnNotificationSet");
static_assert(sizeof(ToastWidgetDonut_C_OnNotificationSet) == 0x000008, "Wrong size on ToastWidgetDonut_C_OnNotificationSet");
static_assert(offsetof(ToastWidgetDonut_C_OnNotificationSet, Notification) == 0x000000, "Member 'ToastWidgetDonut_C_OnNotificationSet::Notification' has a wrong offset!");

struct ToastWidgetDonut_C_OnNotificationUpdated final
{
public:
	class UFortUINotification*                    Notification;
};
static_assert(alignof(ToastWidgetDonut_C_OnNotificationUpdated) == 0x000008, "Wrong alignment on ToastWidgetDonut_C_OnNotificationUpdated");
static_assert(sizeof(ToastWidgetDonut_C_OnNotificationUpdated) == 0x000008, "Wrong size on ToastWidgetDonut_C_OnNotificationUpdated");
static_assert(offsetof(ToastWidgetDonut_C_OnNotificationUpdated, Notification) == 0x000000, "Member 'ToastWidgetDonut_C_OnNotificationUpdated::Notification' has a wrong offset!");

struct ToastWidgetDonut_C_SetupAnimBindings final
{
public:
	bool                                          Unbind;
	uint8                                         Pad_1[0x3];
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_1;
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_2;
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_3;
};
static_assert(alignof(ToastWidgetDonut_C_SetupAnimBindings) == 0x000004, "Wrong alignment on ToastWidgetDonut_C_SetupAnimBindings");
static_assert(sizeof(ToastWidgetDonut_C_SetupAnimBindings) == 0x000034, "Wrong size on ToastWidgetDonut_C_SetupAnimBindings");
static_assert(offsetof(ToastWidgetDonut_C_SetupAnimBindings, Unbind) == 0x000000, "Member 'ToastWidgetDonut_C_SetupAnimBindings::Unbind' has a wrong offset!");
static_assert(offsetof(ToastWidgetDonut_C_SetupAnimBindings, K2Node_CreateDelegate_OutputDelegate) == 0x000004, "Member 'ToastWidgetDonut_C_SetupAnimBindings::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(ToastWidgetDonut_C_SetupAnimBindings, K2Node_CreateDelegate_OutputDelegate_1) == 0x000010, "Member 'ToastWidgetDonut_C_SetupAnimBindings::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(ToastWidgetDonut_C_SetupAnimBindings, K2Node_CreateDelegate_OutputDelegate_2) == 0x00001C, "Member 'ToastWidgetDonut_C_SetupAnimBindings::K2Node_CreateDelegate_OutputDelegate_2' has a wrong offset!");
static_assert(offsetof(ToastWidgetDonut_C_SetupAnimBindings, K2Node_CreateDelegate_OutputDelegate_3) == 0x000028, "Member 'ToastWidgetDonut_C_SetupAnimBindings::K2Node_CreateDelegate_OutputDelegate_3' has a wrong offset!");

struct ToastWidgetDonut_C_StartIntro final
{
public:
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;
};
static_assert(alignof(ToastWidgetDonut_C_StartIntro) == 0x000008, "Wrong alignment on ToastWidgetDonut_C_StartIntro");
static_assert(sizeof(ToastWidgetDonut_C_StartIntro) == 0x000008, "Wrong size on ToastWidgetDonut_C_StartIntro");
static_assert(offsetof(ToastWidgetDonut_C_StartIntro, CallFunc_PlayAnimation_ReturnValue) == 0x000000, "Member 'ToastWidgetDonut_C_StartIntro::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");

struct ToastWidgetDonut_C_UpdateToast final
{
public:
	class UFortUINotification*                    Notification;
	class UFortGlobalUIContext*                   CallFunc_GetLocalPlayerSubsystem_ReturnValue;
	class FText                                   CallFunc_GetDescription_ReturnValue;
	bool                                          CallFunc_IsInZone_ReturnValue;
	uint8                                         Pad_29[0x7];
	class FText                                   CallFunc_GetDescription_ReturnValue_1;
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData;
	class UFortUIFriendNotification*              K2Node_DynamicCast_AsFort_UIFriend_Notification;
	bool                                          K2Node_DynamicCast_bSuccess;
	bool                                          CallFunc_HasAction_ReturnValue;
	bool                                          K2Node_SwitchEnum_CmpSuccess;
	uint8                                         Pad_A3[0x5];
	class FText                                   CallFunc_MakeLiteralText_ReturnValue;
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData_1;
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array;
	class FText                                   CallFunc_Format_ReturnValue;
};
static_assert(alignof(ToastWidgetDonut_C_UpdateToast) == 0x000008, "Wrong alignment on ToastWidgetDonut_C_UpdateToast");
static_assert(sizeof(ToastWidgetDonut_C_UpdateToast) == 0x000138, "Wrong size on ToastWidgetDonut_C_UpdateToast");
static_assert(offsetof(ToastWidgetDonut_C_UpdateToast, Notification) == 0x000000, "Member 'ToastWidgetDonut_C_UpdateToast::Notification' has a wrong offset!");
static_assert(offsetof(ToastWidgetDonut_C_UpdateToast, CallFunc_GetLocalPlayerSubsystem_ReturnValue) == 0x000008, "Member 'ToastWidgetDonut_C_UpdateToast::CallFunc_GetLocalPlayerSubsystem_ReturnValue' has a wrong offset!");
static_assert(offsetof(ToastWidgetDonut_C_UpdateToast, CallFunc_GetDescription_ReturnValue) == 0x000010, "Member 'ToastWidgetDonut_C_UpdateToast::CallFunc_GetDescription_ReturnValue' has a wrong offset!");
static_assert(offsetof(ToastWidgetDonut_C_UpdateToast, CallFunc_IsInZone_ReturnValue) == 0x000028, "Member 'ToastWidgetDonut_C_UpdateToast::CallFunc_IsInZone_ReturnValue' has a wrong offset!");
static_assert(offsetof(ToastWidgetDonut_C_UpdateToast, CallFunc_GetDescription_ReturnValue_1) == 0x000030, "Member 'ToastWidgetDonut_C_UpdateToast::CallFunc_GetDescription_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(ToastWidgetDonut_C_UpdateToast, K2Node_MakeStruct_FormatArgumentData) == 0x000048, "Member 'ToastWidgetDonut_C_UpdateToast::K2Node_MakeStruct_FormatArgumentData' has a wrong offset!");
static_assert(offsetof(ToastWidgetDonut_C_UpdateToast, K2Node_DynamicCast_AsFort_UIFriend_Notification) == 0x000098, "Member 'ToastWidgetDonut_C_UpdateToast::K2Node_DynamicCast_AsFort_UIFriend_Notification' has a wrong offset!");
static_assert(offsetof(ToastWidgetDonut_C_UpdateToast, K2Node_DynamicCast_bSuccess) == 0x0000A0, "Member 'ToastWidgetDonut_C_UpdateToast::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(ToastWidgetDonut_C_UpdateToast, CallFunc_HasAction_ReturnValue) == 0x0000A1, "Member 'ToastWidgetDonut_C_UpdateToast::CallFunc_HasAction_ReturnValue' has a wrong offset!");
static_assert(offsetof(ToastWidgetDonut_C_UpdateToast, K2Node_SwitchEnum_CmpSuccess) == 0x0000A2, "Member 'ToastWidgetDonut_C_UpdateToast::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");
static_assert(offsetof(ToastWidgetDonut_C_UpdateToast, CallFunc_MakeLiteralText_ReturnValue) == 0x0000A8, "Member 'ToastWidgetDonut_C_UpdateToast::CallFunc_MakeLiteralText_ReturnValue' has a wrong offset!");
static_assert(offsetof(ToastWidgetDonut_C_UpdateToast, K2Node_MakeStruct_FormatArgumentData_1) == 0x0000C0, "Member 'ToastWidgetDonut_C_UpdateToast::K2Node_MakeStruct_FormatArgumentData_1' has a wrong offset!");
static_assert(offsetof(ToastWidgetDonut_C_UpdateToast, K2Node_MakeArray_Array) == 0x000110, "Member 'ToastWidgetDonut_C_UpdateToast::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(ToastWidgetDonut_C_UpdateToast, CallFunc_Format_ReturnValue) == 0x000120, "Member 'ToastWidgetDonut_C_UpdateToast::CallFunc_Format_ReturnValue' has a wrong offset!");

}
