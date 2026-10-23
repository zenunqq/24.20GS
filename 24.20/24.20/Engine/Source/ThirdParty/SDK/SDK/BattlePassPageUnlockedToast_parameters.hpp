#pragma once

#include "Basic.hpp"

#include "FortniteGame_structs.hpp"
#include "UMG_structs.hpp"
#include "SlateCore_structs.hpp"
#include "Engine_structs.hpp"

namespace SDK::Params
{

struct BattlePassPageUnlockedToast_C_ApplyAdditionalStyling final
{
public:
	class UClass*                                 NewLocalVar_2;
	class UClass*                                 NewLocalVar_1;
	class UClass*                                 NewLocalVar_0;
	EFortNotificationType                         CallFunc_GetNotificationType_ReturnValue;
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;
};
static_assert(alignof(BattlePassPageUnlockedToast_C_ApplyAdditionalStyling) == 0x000008, "Wrong alignment on BattlePassPageUnlockedToast_C_ApplyAdditionalStyling");
static_assert(sizeof(BattlePassPageUnlockedToast_C_ApplyAdditionalStyling) == 0x000020, "Wrong size on BattlePassPageUnlockedToast_C_ApplyAdditionalStyling");
static_assert(offsetof(BattlePassPageUnlockedToast_C_ApplyAdditionalStyling, NewLocalVar_2) == 0x000000, "Member 'BattlePassPageUnlockedToast_C_ApplyAdditionalStyling::NewLocalVar_2' has a wrong offset!");
static_assert(offsetof(BattlePassPageUnlockedToast_C_ApplyAdditionalStyling, NewLocalVar_1) == 0x000008, "Member 'BattlePassPageUnlockedToast_C_ApplyAdditionalStyling::NewLocalVar_1' has a wrong offset!");
static_assert(offsetof(BattlePassPageUnlockedToast_C_ApplyAdditionalStyling, NewLocalVar_0) == 0x000010, "Member 'BattlePassPageUnlockedToast_C_ApplyAdditionalStyling::NewLocalVar_0' has a wrong offset!");
static_assert(offsetof(BattlePassPageUnlockedToast_C_ApplyAdditionalStyling, CallFunc_GetNotificationType_ReturnValue) == 0x000018, "Member 'BattlePassPageUnlockedToast_C_ApplyAdditionalStyling::CallFunc_GetNotificationType_ReturnValue' has a wrong offset!");
static_assert(offsetof(BattlePassPageUnlockedToast_C_ApplyAdditionalStyling, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x000019, "Member 'BattlePassPageUnlockedToast_C_ApplyAdditionalStyling::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");

struct BattlePassPageUnlockedToast_C_ExecuteUbergraph_BattlePassPageUnlockedToast final
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
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;
	class UFortUINotification*                    K2Node_Event_Notification_1;
	class UFortUINotification*                    K2Node_Event_Notification;
};
static_assert(alignof(BattlePassPageUnlockedToast_C_ExecuteUbergraph_BattlePassPageUnlockedToast) == 0x000008, "Wrong alignment on BattlePassPageUnlockedToast_C_ExecuteUbergraph_BattlePassPageUnlockedToast");
static_assert(sizeof(BattlePassPageUnlockedToast_C_ExecuteUbergraph_BattlePassPageUnlockedToast) == 0x0001A8, "Wrong size on BattlePassPageUnlockedToast_C_ExecuteUbergraph_BattlePassPageUnlockedToast");
static_assert(offsetof(BattlePassPageUnlockedToast_C_ExecuteUbergraph_BattlePassPageUnlockedToast, EntryPoint) == 0x000000, "Member 'BattlePassPageUnlockedToast_C_ExecuteUbergraph_BattlePassPageUnlockedToast::EntryPoint' has a wrong offset!");
static_assert(offsetof(BattlePassPageUnlockedToast_C_ExecuteUbergraph_BattlePassPageUnlockedToast, CallFunc_GetDisplayTime_bOutDisplayTimeOverridden) == 0x000004, "Member 'BattlePassPageUnlockedToast_C_ExecuteUbergraph_BattlePassPageUnlockedToast::CallFunc_GetDisplayTime_bOutDisplayTimeOverridden' has a wrong offset!");
static_assert(offsetof(BattlePassPageUnlockedToast_C_ExecuteUbergraph_BattlePassPageUnlockedToast, CallFunc_GetDisplayTime_ReturnValue) == 0x000008, "Member 'BattlePassPageUnlockedToast_C_ExecuteUbergraph_BattlePassPageUnlockedToast::CallFunc_GetDisplayTime_ReturnValue' has a wrong offset!");
static_assert(offsetof(BattlePassPageUnlockedToast_C_ExecuteUbergraph_BattlePassPageUnlockedToast, K2Node_CreateDelegate_OutputDelegate) == 0x00000C, "Member 'BattlePassPageUnlockedToast_C_ExecuteUbergraph_BattlePassPageUnlockedToast::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(BattlePassPageUnlockedToast_C_ExecuteUbergraph_BattlePassPageUnlockedToast, CallFunc_K2_SetTimerDelegate_ReturnValue) == 0x000018, "Member 'BattlePassPageUnlockedToast_C_ExecuteUbergraph_BattlePassPageUnlockedToast::CallFunc_K2_SetTimerDelegate_ReturnValue' has a wrong offset!");
static_assert(offsetof(BattlePassPageUnlockedToast_C_ExecuteUbergraph_BattlePassPageUnlockedToast, K2Node_Event_MyGeometry) == 0x000020, "Member 'BattlePassPageUnlockedToast_C_ExecuteUbergraph_BattlePassPageUnlockedToast::K2Node_Event_MyGeometry' has a wrong offset!");
static_assert(offsetof(BattlePassPageUnlockedToast_C_ExecuteUbergraph_BattlePassPageUnlockedToast, K2Node_Event_MouseEvent_1) == 0x000060, "Member 'BattlePassPageUnlockedToast_C_ExecuteUbergraph_BattlePassPageUnlockedToast::K2Node_Event_MouseEvent_1' has a wrong offset!");
static_assert(offsetof(BattlePassPageUnlockedToast_C_ExecuteUbergraph_BattlePassPageUnlockedToast, K2Node_Event_MouseEvent) == 0x0000F8, "Member 'BattlePassPageUnlockedToast_C_ExecuteUbergraph_BattlePassPageUnlockedToast::K2Node_Event_MouseEvent' has a wrong offset!");
static_assert(offsetof(BattlePassPageUnlockedToast_C_ExecuteUbergraph_BattlePassPageUnlockedToast, CallFunc_PlayAnimation_ReturnValue) == 0x000190, "Member 'BattlePassPageUnlockedToast_C_ExecuteUbergraph_BattlePassPageUnlockedToast::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BattlePassPageUnlockedToast_C_ExecuteUbergraph_BattlePassPageUnlockedToast, K2Node_Event_Notification_1) == 0x000198, "Member 'BattlePassPageUnlockedToast_C_ExecuteUbergraph_BattlePassPageUnlockedToast::K2Node_Event_Notification_1' has a wrong offset!");
static_assert(offsetof(BattlePassPageUnlockedToast_C_ExecuteUbergraph_BattlePassPageUnlockedToast, K2Node_Event_Notification) == 0x0001A0, "Member 'BattlePassPageUnlockedToast_C_ExecuteUbergraph_BattlePassPageUnlockedToast::K2Node_Event_Notification' has a wrong offset!");

struct BattlePassPageUnlockedToast_C_GetOpenButtonVisibility final
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
static_assert(alignof(BattlePassPageUnlockedToast_C_GetOpenButtonVisibility) == 0x000008, "Wrong alignment on BattlePassPageUnlockedToast_C_GetOpenButtonVisibility");
static_assert(sizeof(BattlePassPageUnlockedToast_C_GetOpenButtonVisibility) == 0x000018, "Wrong size on BattlePassPageUnlockedToast_C_GetOpenButtonVisibility");
static_assert(offsetof(BattlePassPageUnlockedToast_C_GetOpenButtonVisibility, ReturnValue) == 0x000000, "Member 'BattlePassPageUnlockedToast_C_GetOpenButtonVisibility::ReturnValue' has a wrong offset!");
static_assert(offsetof(BattlePassPageUnlockedToast_C_GetOpenButtonVisibility, Temp_bool_Variable) == 0x000001, "Member 'BattlePassPageUnlockedToast_C_GetOpenButtonVisibility::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(BattlePassPageUnlockedToast_C_GetOpenButtonVisibility, Temp_byte_Variable) == 0x000002, "Member 'BattlePassPageUnlockedToast_C_GetOpenButtonVisibility::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(BattlePassPageUnlockedToast_C_GetOpenButtonVisibility, Temp_byte_Variable_1) == 0x000003, "Member 'BattlePassPageUnlockedToast_C_GetOpenButtonVisibility::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(BattlePassPageUnlockedToast_C_GetOpenButtonVisibility, CallFunc_GetLocalPlayerSubsystem_ReturnValue) == 0x000008, "Member 'BattlePassPageUnlockedToast_C_GetOpenButtonVisibility::CallFunc_GetLocalPlayerSubsystem_ReturnValue' has a wrong offset!");
static_assert(offsetof(BattlePassPageUnlockedToast_C_GetOpenButtonVisibility, CallFunc_HasAction_ReturnValue) == 0x000010, "Member 'BattlePassPageUnlockedToast_C_GetOpenButtonVisibility::CallFunc_HasAction_ReturnValue' has a wrong offset!");
static_assert(offsetof(BattlePassPageUnlockedToast_C_GetOpenButtonVisibility, CallFunc_IsInZone_ReturnValue) == 0x000011, "Member 'BattlePassPageUnlockedToast_C_GetOpenButtonVisibility::CallFunc_IsInZone_ReturnValue' has a wrong offset!");
static_assert(offsetof(BattlePassPageUnlockedToast_C_GetOpenButtonVisibility, CallFunc_Not_PreBool_ReturnValue) == 0x000012, "Member 'BattlePassPageUnlockedToast_C_GetOpenButtonVisibility::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(BattlePassPageUnlockedToast_C_GetOpenButtonVisibility, CallFunc_BooleanAND_ReturnValue) == 0x000013, "Member 'BattlePassPageUnlockedToast_C_GetOpenButtonVisibility::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(BattlePassPageUnlockedToast_C_GetOpenButtonVisibility, K2Node_Select_Default) == 0x000014, "Member 'BattlePassPageUnlockedToast_C_GetOpenButtonVisibility::K2Node_Select_Default' has a wrong offset!");

struct BattlePassPageUnlockedToast_C_OnMouseEnter final
{
public:
	struct FGeometry                              MyGeometry;
	struct FPointerEvent                          MouseEvent;
};
static_assert(alignof(BattlePassPageUnlockedToast_C_OnMouseEnter) == 0x000008, "Wrong alignment on BattlePassPageUnlockedToast_C_OnMouseEnter");
static_assert(sizeof(BattlePassPageUnlockedToast_C_OnMouseEnter) == 0x0000D8, "Wrong size on BattlePassPageUnlockedToast_C_OnMouseEnter");
static_assert(offsetof(BattlePassPageUnlockedToast_C_OnMouseEnter, MyGeometry) == 0x000000, "Member 'BattlePassPageUnlockedToast_C_OnMouseEnter::MyGeometry' has a wrong offset!");
static_assert(offsetof(BattlePassPageUnlockedToast_C_OnMouseEnter, MouseEvent) == 0x000040, "Member 'BattlePassPageUnlockedToast_C_OnMouseEnter::MouseEvent' has a wrong offset!");

struct BattlePassPageUnlockedToast_C_OnMouseLeave final
{
public:
	struct FPointerEvent                          MouseEvent;
};
static_assert(alignof(BattlePassPageUnlockedToast_C_OnMouseLeave) == 0x000008, "Wrong alignment on BattlePassPageUnlockedToast_C_OnMouseLeave");
static_assert(sizeof(BattlePassPageUnlockedToast_C_OnMouseLeave) == 0x000098, "Wrong size on BattlePassPageUnlockedToast_C_OnMouseLeave");
static_assert(offsetof(BattlePassPageUnlockedToast_C_OnMouseLeave, MouseEvent) == 0x000000, "Member 'BattlePassPageUnlockedToast_C_OnMouseLeave::MouseEvent' has a wrong offset!");

struct BattlePassPageUnlockedToast_C_OnNotificationSet final
{
public:
	class UFortUINotification*                    Notification;
};
static_assert(alignof(BattlePassPageUnlockedToast_C_OnNotificationSet) == 0x000008, "Wrong alignment on BattlePassPageUnlockedToast_C_OnNotificationSet");
static_assert(sizeof(BattlePassPageUnlockedToast_C_OnNotificationSet) == 0x000008, "Wrong size on BattlePassPageUnlockedToast_C_OnNotificationSet");
static_assert(offsetof(BattlePassPageUnlockedToast_C_OnNotificationSet, Notification) == 0x000000, "Member 'BattlePassPageUnlockedToast_C_OnNotificationSet::Notification' has a wrong offset!");

struct BattlePassPageUnlockedToast_C_OnNotificationUpdated final
{
public:
	class UFortUINotification*                    Notification;
};
static_assert(alignof(BattlePassPageUnlockedToast_C_OnNotificationUpdated) == 0x000008, "Wrong alignment on BattlePassPageUnlockedToast_C_OnNotificationUpdated");
static_assert(sizeof(BattlePassPageUnlockedToast_C_OnNotificationUpdated) == 0x000008, "Wrong size on BattlePassPageUnlockedToast_C_OnNotificationUpdated");
static_assert(offsetof(BattlePassPageUnlockedToast_C_OnNotificationUpdated, Notification) == 0x000000, "Member 'BattlePassPageUnlockedToast_C_OnNotificationUpdated::Notification' has a wrong offset!");

struct BattlePassPageUnlockedToast_C_SetImage final
{
public:
	TSoftObjectPtr<class UObject>                 CallFunc_GetDisplayAsset_ReturnValue;
	class UTwitchNotification_C*                  K2Node_DynamicCast_AsTwitch_Notification;
	bool                                          K2Node_DynamicCast_bSuccess;
	bool                                          CallFunc_IsValidSoftObjectReference_ReturnValue;
};
static_assert(alignof(BattlePassPageUnlockedToast_C_SetImage) == 0x000008, "Wrong alignment on BattlePassPageUnlockedToast_C_SetImage");
static_assert(sizeof(BattlePassPageUnlockedToast_C_SetImage) == 0x000038, "Wrong size on BattlePassPageUnlockedToast_C_SetImage");
static_assert(offsetof(BattlePassPageUnlockedToast_C_SetImage, CallFunc_GetDisplayAsset_ReturnValue) == 0x000000, "Member 'BattlePassPageUnlockedToast_C_SetImage::CallFunc_GetDisplayAsset_ReturnValue' has a wrong offset!");
static_assert(offsetof(BattlePassPageUnlockedToast_C_SetImage, K2Node_DynamicCast_AsTwitch_Notification) == 0x000028, "Member 'BattlePassPageUnlockedToast_C_SetImage::K2Node_DynamicCast_AsTwitch_Notification' has a wrong offset!");
static_assert(offsetof(BattlePassPageUnlockedToast_C_SetImage, K2Node_DynamicCast_bSuccess) == 0x000030, "Member 'BattlePassPageUnlockedToast_C_SetImage::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BattlePassPageUnlockedToast_C_SetImage, CallFunc_IsValidSoftObjectReference_ReturnValue) == 0x000031, "Member 'BattlePassPageUnlockedToast_C_SetImage::CallFunc_IsValidSoftObjectReference_ReturnValue' has a wrong offset!");

struct BattlePassPageUnlockedToast_C_SetupAnimBindings final
{
public:
	bool                                          Unbind;
	uint8                                         Pad_1[0x3];
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_1;
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_2;
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_3;
};
static_assert(alignof(BattlePassPageUnlockedToast_C_SetupAnimBindings) == 0x000004, "Wrong alignment on BattlePassPageUnlockedToast_C_SetupAnimBindings");
static_assert(sizeof(BattlePassPageUnlockedToast_C_SetupAnimBindings) == 0x000034, "Wrong size on BattlePassPageUnlockedToast_C_SetupAnimBindings");
static_assert(offsetof(BattlePassPageUnlockedToast_C_SetupAnimBindings, Unbind) == 0x000000, "Member 'BattlePassPageUnlockedToast_C_SetupAnimBindings::Unbind' has a wrong offset!");
static_assert(offsetof(BattlePassPageUnlockedToast_C_SetupAnimBindings, K2Node_CreateDelegate_OutputDelegate) == 0x000004, "Member 'BattlePassPageUnlockedToast_C_SetupAnimBindings::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(BattlePassPageUnlockedToast_C_SetupAnimBindings, K2Node_CreateDelegate_OutputDelegate_1) == 0x000010, "Member 'BattlePassPageUnlockedToast_C_SetupAnimBindings::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(BattlePassPageUnlockedToast_C_SetupAnimBindings, K2Node_CreateDelegate_OutputDelegate_2) == 0x00001C, "Member 'BattlePassPageUnlockedToast_C_SetupAnimBindings::K2Node_CreateDelegate_OutputDelegate_2' has a wrong offset!");
static_assert(offsetof(BattlePassPageUnlockedToast_C_SetupAnimBindings, K2Node_CreateDelegate_OutputDelegate_3) == 0x000028, "Member 'BattlePassPageUnlockedToast_C_SetupAnimBindings::K2Node_CreateDelegate_OutputDelegate_3' has a wrong offset!");

struct BattlePassPageUnlockedToast_C_StartIntro final
{
public:
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;
};
static_assert(alignof(BattlePassPageUnlockedToast_C_StartIntro) == 0x000008, "Wrong alignment on BattlePassPageUnlockedToast_C_StartIntro");
static_assert(sizeof(BattlePassPageUnlockedToast_C_StartIntro) == 0x000008, "Wrong size on BattlePassPageUnlockedToast_C_StartIntro");
static_assert(offsetof(BattlePassPageUnlockedToast_C_StartIntro, CallFunc_PlayAnimation_ReturnValue) == 0x000000, "Member 'BattlePassPageUnlockedToast_C_StartIntro::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");

struct BattlePassPageUnlockedToast_C_UpdateToast final
{
public:
	class UFortUINotification*                    Notification;
	class FText                                   CallFunc_GetDescription_ReturnValue;
	class FText                                   CallFunc_GetTitle_ReturnValue;
	ESlateVisibility                              CallFunc_GetOpenButtonVisibility_ReturnValue;
};
static_assert(alignof(BattlePassPageUnlockedToast_C_UpdateToast) == 0x000008, "Wrong alignment on BattlePassPageUnlockedToast_C_UpdateToast");
static_assert(sizeof(BattlePassPageUnlockedToast_C_UpdateToast) == 0x000040, "Wrong size on BattlePassPageUnlockedToast_C_UpdateToast");
static_assert(offsetof(BattlePassPageUnlockedToast_C_UpdateToast, Notification) == 0x000000, "Member 'BattlePassPageUnlockedToast_C_UpdateToast::Notification' has a wrong offset!");
static_assert(offsetof(BattlePassPageUnlockedToast_C_UpdateToast, CallFunc_GetDescription_ReturnValue) == 0x000008, "Member 'BattlePassPageUnlockedToast_C_UpdateToast::CallFunc_GetDescription_ReturnValue' has a wrong offset!");
static_assert(offsetof(BattlePassPageUnlockedToast_C_UpdateToast, CallFunc_GetTitle_ReturnValue) == 0x000020, "Member 'BattlePassPageUnlockedToast_C_UpdateToast::CallFunc_GetTitle_ReturnValue' has a wrong offset!");
static_assert(offsetof(BattlePassPageUnlockedToast_C_UpdateToast, CallFunc_GetOpenButtonVisibility_ReturnValue) == 0x000038, "Member 'BattlePassPageUnlockedToast_C_UpdateToast::CallFunc_GetOpenButtonVisibility_ReturnValue' has a wrong offset!");

}
