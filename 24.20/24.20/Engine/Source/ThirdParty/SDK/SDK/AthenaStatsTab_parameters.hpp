#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteGame_structs.hpp"
#include "CommonInput_structs.hpp"
#include "UMG_structs.hpp"

namespace SDK::Params
{

struct AthenaStatsTab_C_BndEvt__CloseButton_K2Node_ComponentBoundEvent_2_CommonButtonClicked__DelegateSignature final
{
public:
	class UCommonButtonLegacy*                    Button;
};
static_assert(alignof(AthenaStatsTab_C_BndEvt__CloseButton_K2Node_ComponentBoundEvent_2_CommonButtonClicked__DelegateSignature) == 0x000008, "Wrong alignment on AthenaStatsTab_C_BndEvt__CloseButton_K2Node_ComponentBoundEvent_2_CommonButtonClicked__DelegateSignature");
static_assert(sizeof(AthenaStatsTab_C_BndEvt__CloseButton_K2Node_ComponentBoundEvent_2_CommonButtonClicked__DelegateSignature) == 0x000008, "Wrong size on AthenaStatsTab_C_BndEvt__CloseButton_K2Node_ComponentBoundEvent_2_CommonButtonClicked__DelegateSignature");
static_assert(offsetof(AthenaStatsTab_C_BndEvt__CloseButton_K2Node_ComponentBoundEvent_2_CommonButtonClicked__DelegateSignature, Button) == 0x000000, "Member 'AthenaStatsTab_C_BndEvt__CloseButton_K2Node_ComponentBoundEvent_2_CommonButtonClicked__DelegateSignature::Button' has a wrong offset!");

struct AthenaStatsTab_C_BndEvt__IconTextButton_K2Node_ComponentBoundEvent_3_CommonButtonClicked__DelegateSignature final
{
public:
	class UCommonButtonLegacy*                    Button;
};
static_assert(alignof(AthenaStatsTab_C_BndEvt__IconTextButton_K2Node_ComponentBoundEvent_3_CommonButtonClicked__DelegateSignature) == 0x000008, "Wrong alignment on AthenaStatsTab_C_BndEvt__IconTextButton_K2Node_ComponentBoundEvent_3_CommonButtonClicked__DelegateSignature");
static_assert(sizeof(AthenaStatsTab_C_BndEvt__IconTextButton_K2Node_ComponentBoundEvent_3_CommonButtonClicked__DelegateSignature) == 0x000008, "Wrong size on AthenaStatsTab_C_BndEvt__IconTextButton_K2Node_ComponentBoundEvent_3_CommonButtonClicked__DelegateSignature");
static_assert(offsetof(AthenaStatsTab_C_BndEvt__IconTextButton_K2Node_ComponentBoundEvent_3_CommonButtonClicked__DelegateSignature, Button) == 0x000000, "Member 'AthenaStatsTab_C_BndEvt__IconTextButton_K2Node_ComponentBoundEvent_3_CommonButtonClicked__DelegateSignature::Button' has a wrong offset!");

struct AthenaStatsTab_C_BndEvt__MobileCloseButton2_K2Node_ComponentBoundEvent_4_CommonButtonClicked__DelegateSignature final
{
public:
	class UCommonButtonLegacy*                    Button;
};
static_assert(alignof(AthenaStatsTab_C_BndEvt__MobileCloseButton2_K2Node_ComponentBoundEvent_4_CommonButtonClicked__DelegateSignature) == 0x000008, "Wrong alignment on AthenaStatsTab_C_BndEvt__MobileCloseButton2_K2Node_ComponentBoundEvent_4_CommonButtonClicked__DelegateSignature");
static_assert(sizeof(AthenaStatsTab_C_BndEvt__MobileCloseButton2_K2Node_ComponentBoundEvent_4_CommonButtonClicked__DelegateSignature) == 0x000008, "Wrong size on AthenaStatsTab_C_BndEvt__MobileCloseButton2_K2Node_ComponentBoundEvent_4_CommonButtonClicked__DelegateSignature");
static_assert(offsetof(AthenaStatsTab_C_BndEvt__MobileCloseButton2_K2Node_ComponentBoundEvent_4_CommonButtonClicked__DelegateSignature, Button) == 0x000000, "Member 'AthenaStatsTab_C_BndEvt__MobileCloseButton2_K2Node_ComponentBoundEvent_4_CommonButtonClicked__DelegateSignature::Button' has a wrong offset!");

struct AthenaStatsTab_C_BndEvt__StatsTabList_K2Node_ComponentBoundEvent_0_OnTabSelected__DelegateSignature final
{
public:
	class FName                                   TabId;
};
static_assert(alignof(AthenaStatsTab_C_BndEvt__StatsTabList_K2Node_ComponentBoundEvent_0_OnTabSelected__DelegateSignature) == 0x000004, "Wrong alignment on AthenaStatsTab_C_BndEvt__StatsTabList_K2Node_ComponentBoundEvent_0_OnTabSelected__DelegateSignature");
static_assert(sizeof(AthenaStatsTab_C_BndEvt__StatsTabList_K2Node_ComponentBoundEvent_0_OnTabSelected__DelegateSignature) == 0x000004, "Wrong size on AthenaStatsTab_C_BndEvt__StatsTabList_K2Node_ComponentBoundEvent_0_OnTabSelected__DelegateSignature");
static_assert(offsetof(AthenaStatsTab_C_BndEvt__StatsTabList_K2Node_ComponentBoundEvent_0_OnTabSelected__DelegateSignature, TabId) == 0x000000, "Member 'AthenaStatsTab_C_BndEvt__StatsTabList_K2Node_ComponentBoundEvent_0_OnTabSelected__DelegateSignature::TabId' has a wrong offset!");

struct AthenaStatsTab_C_ExecuteUbergraph_AthenaStatsTab final
{
public:
	int32                                         EntryPoint;
	uint8                                         Pad_4[0x4];
	class UCommonButtonLegacy*                    K2Node_ComponentBoundEvent_Button;
	ESlateVisibility                              Temp_byte_Variable;
	bool                                          Temp_bool_Variable;
	ESlateVisibility                              Temp_byte_Variable_1;
	ESlateVisibility                              Temp_byte_Variable_2;
	uint8                                         Pad_14[0x4];
	class UCommonInputSubsystem*                  CallFunc_GetLocalPlayerSubsystem_ReturnValue;
	bool                                          Temp_bool_Variable_1;
	uint8                                         Pad_21[0x3];
	TDelegate<void(ECommonInputType bNewInputType)> K2Node_CreateDelegate_OutputDelegate;
	ESlateVisibility                              Temp_byte_Variable_3;
	ESlateVisibility                              Temp_byte_Variable_4;
	bool                                          K2Node_Event_bWasSuccessful;
	bool                                          K2Node_Event_bHasStatsToDisplay;
	bool                                          CallFunc_Not_PreBool_ReturnValue;
	uint8                                         Pad_35[0x3];
	class FName                                   K2Node_ComponentBoundEvent_TabId;
	int32                                         CallFunc_Conv_BoolToInt_ReturnValue;
	bool                                          CallFunc_IsActivated_ReturnValue;
	ESlateVisibility                              Temp_byte_Variable_5;
	bool                                          Temp_bool_Variable_2;
	uint8                                         Pad_43[0x5];
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue_1;
	class UFortLeaderboardContext*                CallFunc_GetContext_ReturnValue;
	bool                                          CallFunc_CanShowStats_ReturnValue;
	ESlateVisibility                              K2Node_Select_Default;
	ESlateVisibility                              K2Node_Select_Default_1;
	uint8                                         Pad_63[0x5];
	class UFortMcpContext*                        CallFunc_GetContext_ReturnValue_1;
	bool                                          CallFunc_HandleBack_PassThrough;
	uint8                                         Pad_71[0x7];
	class UFortMcpProfileAthena*                  CallFunc_GetAthenaProfile_ReturnValue;
	int32                                         CallFunc_GetSeasonMatchXpBoost_ReturnValue;
	uint8                                         Pad_84[0x4];
	class FText                                   CallFunc_Conv_IntToText_ReturnValue;
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData;
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array;
	class FText                                   CallFunc_Format_ReturnValue;
	ECommonInputType                              K2Node_CustomEvent_bNewInputType;
	uint8                                         Pad_119[0x7];
	class UCommonButtonLegacy*                    K2Node_ComponentBoundEvent_Button_2;
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue_2;
	class FText                                   K2Node_Event_PlatformButtonText;
	class UCommonButtonLegacy*                    K2Node_ComponentBoundEvent_Button_1;
	class UIconTextButton_C*                      K2Node_DynamicCast_AsIcon_Text_Button;
	bool                                          K2Node_DynamicCast_bSuccess;
	uint8                                         Pad_159[0x7];
	class UFortRuntimeOptions*                    CallFunc_GetRuntimeOptions_ReturnValue;
	class FText                                   CallFunc_GetAccountLevelText_ReturnValue;
	ESlateVisibility                              K2Node_Select_Default_2;
	uint8                                         Pad_181[0x7];
	class FText                                   CallFunc_GetFriendMatchXpBoostText_Result;
	class UAthenaAccountContext*                  CallFunc_GetContext_ReturnValue_2;
	class FText                                   CallFunc_GetCurrentSeasonNumberAsText_ReturnValue;
	class UFortFrontEndContext*                   CallFunc_GetContext_ReturnValue_3;
};
static_assert(alignof(AthenaStatsTab_C_ExecuteUbergraph_AthenaStatsTab) == 0x000008, "Wrong alignment on AthenaStatsTab_C_ExecuteUbergraph_AthenaStatsTab");
static_assert(sizeof(AthenaStatsTab_C_ExecuteUbergraph_AthenaStatsTab) == 0x0001C8, "Wrong size on AthenaStatsTab_C_ExecuteUbergraph_AthenaStatsTab");
static_assert(offsetof(AthenaStatsTab_C_ExecuteUbergraph_AthenaStatsTab, EntryPoint) == 0x000000, "Member 'AthenaStatsTab_C_ExecuteUbergraph_AthenaStatsTab::EntryPoint' has a wrong offset!");
static_assert(offsetof(AthenaStatsTab_C_ExecuteUbergraph_AthenaStatsTab, K2Node_ComponentBoundEvent_Button) == 0x000008, "Member 'AthenaStatsTab_C_ExecuteUbergraph_AthenaStatsTab::K2Node_ComponentBoundEvent_Button' has a wrong offset!");
static_assert(offsetof(AthenaStatsTab_C_ExecuteUbergraph_AthenaStatsTab, Temp_byte_Variable) == 0x000010, "Member 'AthenaStatsTab_C_ExecuteUbergraph_AthenaStatsTab::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(AthenaStatsTab_C_ExecuteUbergraph_AthenaStatsTab, Temp_bool_Variable) == 0x000011, "Member 'AthenaStatsTab_C_ExecuteUbergraph_AthenaStatsTab::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(AthenaStatsTab_C_ExecuteUbergraph_AthenaStatsTab, Temp_byte_Variable_1) == 0x000012, "Member 'AthenaStatsTab_C_ExecuteUbergraph_AthenaStatsTab::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(AthenaStatsTab_C_ExecuteUbergraph_AthenaStatsTab, Temp_byte_Variable_2) == 0x000013, "Member 'AthenaStatsTab_C_ExecuteUbergraph_AthenaStatsTab::Temp_byte_Variable_2' has a wrong offset!");
static_assert(offsetof(AthenaStatsTab_C_ExecuteUbergraph_AthenaStatsTab, CallFunc_GetLocalPlayerSubsystem_ReturnValue) == 0x000018, "Member 'AthenaStatsTab_C_ExecuteUbergraph_AthenaStatsTab::CallFunc_GetLocalPlayerSubsystem_ReturnValue' has a wrong offset!");
static_assert(offsetof(AthenaStatsTab_C_ExecuteUbergraph_AthenaStatsTab, Temp_bool_Variable_1) == 0x000020, "Member 'AthenaStatsTab_C_ExecuteUbergraph_AthenaStatsTab::Temp_bool_Variable_1' has a wrong offset!");
static_assert(offsetof(AthenaStatsTab_C_ExecuteUbergraph_AthenaStatsTab, K2Node_CreateDelegate_OutputDelegate) == 0x000024, "Member 'AthenaStatsTab_C_ExecuteUbergraph_AthenaStatsTab::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(AthenaStatsTab_C_ExecuteUbergraph_AthenaStatsTab, Temp_byte_Variable_3) == 0x000030, "Member 'AthenaStatsTab_C_ExecuteUbergraph_AthenaStatsTab::Temp_byte_Variable_3' has a wrong offset!");
static_assert(offsetof(AthenaStatsTab_C_ExecuteUbergraph_AthenaStatsTab, Temp_byte_Variable_4) == 0x000031, "Member 'AthenaStatsTab_C_ExecuteUbergraph_AthenaStatsTab::Temp_byte_Variable_4' has a wrong offset!");
static_assert(offsetof(AthenaStatsTab_C_ExecuteUbergraph_AthenaStatsTab, K2Node_Event_bWasSuccessful) == 0x000032, "Member 'AthenaStatsTab_C_ExecuteUbergraph_AthenaStatsTab::K2Node_Event_bWasSuccessful' has a wrong offset!");
static_assert(offsetof(AthenaStatsTab_C_ExecuteUbergraph_AthenaStatsTab, K2Node_Event_bHasStatsToDisplay) == 0x000033, "Member 'AthenaStatsTab_C_ExecuteUbergraph_AthenaStatsTab::K2Node_Event_bHasStatsToDisplay' has a wrong offset!");
static_assert(offsetof(AthenaStatsTab_C_ExecuteUbergraph_AthenaStatsTab, CallFunc_Not_PreBool_ReturnValue) == 0x000034, "Member 'AthenaStatsTab_C_ExecuteUbergraph_AthenaStatsTab::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(AthenaStatsTab_C_ExecuteUbergraph_AthenaStatsTab, K2Node_ComponentBoundEvent_TabId) == 0x000038, "Member 'AthenaStatsTab_C_ExecuteUbergraph_AthenaStatsTab::K2Node_ComponentBoundEvent_TabId' has a wrong offset!");
static_assert(offsetof(AthenaStatsTab_C_ExecuteUbergraph_AthenaStatsTab, CallFunc_Conv_BoolToInt_ReturnValue) == 0x00003C, "Member 'AthenaStatsTab_C_ExecuteUbergraph_AthenaStatsTab::CallFunc_Conv_BoolToInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(AthenaStatsTab_C_ExecuteUbergraph_AthenaStatsTab, CallFunc_IsActivated_ReturnValue) == 0x000040, "Member 'AthenaStatsTab_C_ExecuteUbergraph_AthenaStatsTab::CallFunc_IsActivated_ReturnValue' has a wrong offset!");
static_assert(offsetof(AthenaStatsTab_C_ExecuteUbergraph_AthenaStatsTab, Temp_byte_Variable_5) == 0x000041, "Member 'AthenaStatsTab_C_ExecuteUbergraph_AthenaStatsTab::Temp_byte_Variable_5' has a wrong offset!");
static_assert(offsetof(AthenaStatsTab_C_ExecuteUbergraph_AthenaStatsTab, Temp_bool_Variable_2) == 0x000042, "Member 'AthenaStatsTab_C_ExecuteUbergraph_AthenaStatsTab::Temp_bool_Variable_2' has a wrong offset!");
static_assert(offsetof(AthenaStatsTab_C_ExecuteUbergraph_AthenaStatsTab, CallFunc_PlayAnimation_ReturnValue) == 0x000048, "Member 'AthenaStatsTab_C_ExecuteUbergraph_AthenaStatsTab::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");
static_assert(offsetof(AthenaStatsTab_C_ExecuteUbergraph_AthenaStatsTab, CallFunc_PlayAnimation_ReturnValue_1) == 0x000050, "Member 'AthenaStatsTab_C_ExecuteUbergraph_AthenaStatsTab::CallFunc_PlayAnimation_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(AthenaStatsTab_C_ExecuteUbergraph_AthenaStatsTab, CallFunc_GetContext_ReturnValue) == 0x000058, "Member 'AthenaStatsTab_C_ExecuteUbergraph_AthenaStatsTab::CallFunc_GetContext_ReturnValue' has a wrong offset!");
static_assert(offsetof(AthenaStatsTab_C_ExecuteUbergraph_AthenaStatsTab, CallFunc_CanShowStats_ReturnValue) == 0x000060, "Member 'AthenaStatsTab_C_ExecuteUbergraph_AthenaStatsTab::CallFunc_CanShowStats_ReturnValue' has a wrong offset!");
static_assert(offsetof(AthenaStatsTab_C_ExecuteUbergraph_AthenaStatsTab, K2Node_Select_Default) == 0x000061, "Member 'AthenaStatsTab_C_ExecuteUbergraph_AthenaStatsTab::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(AthenaStatsTab_C_ExecuteUbergraph_AthenaStatsTab, K2Node_Select_Default_1) == 0x000062, "Member 'AthenaStatsTab_C_ExecuteUbergraph_AthenaStatsTab::K2Node_Select_Default_1' has a wrong offset!");
static_assert(offsetof(AthenaStatsTab_C_ExecuteUbergraph_AthenaStatsTab, CallFunc_GetContext_ReturnValue_1) == 0x000068, "Member 'AthenaStatsTab_C_ExecuteUbergraph_AthenaStatsTab::CallFunc_GetContext_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(AthenaStatsTab_C_ExecuteUbergraph_AthenaStatsTab, CallFunc_HandleBack_PassThrough) == 0x000070, "Member 'AthenaStatsTab_C_ExecuteUbergraph_AthenaStatsTab::CallFunc_HandleBack_PassThrough' has a wrong offset!");
static_assert(offsetof(AthenaStatsTab_C_ExecuteUbergraph_AthenaStatsTab, CallFunc_GetAthenaProfile_ReturnValue) == 0x000078, "Member 'AthenaStatsTab_C_ExecuteUbergraph_AthenaStatsTab::CallFunc_GetAthenaProfile_ReturnValue' has a wrong offset!");
static_assert(offsetof(AthenaStatsTab_C_ExecuteUbergraph_AthenaStatsTab, CallFunc_GetSeasonMatchXpBoost_ReturnValue) == 0x000080, "Member 'AthenaStatsTab_C_ExecuteUbergraph_AthenaStatsTab::CallFunc_GetSeasonMatchXpBoost_ReturnValue' has a wrong offset!");
static_assert(offsetof(AthenaStatsTab_C_ExecuteUbergraph_AthenaStatsTab, CallFunc_Conv_IntToText_ReturnValue) == 0x000088, "Member 'AthenaStatsTab_C_ExecuteUbergraph_AthenaStatsTab::CallFunc_Conv_IntToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(AthenaStatsTab_C_ExecuteUbergraph_AthenaStatsTab, K2Node_MakeStruct_FormatArgumentData) == 0x0000A0, "Member 'AthenaStatsTab_C_ExecuteUbergraph_AthenaStatsTab::K2Node_MakeStruct_FormatArgumentData' has a wrong offset!");
static_assert(offsetof(AthenaStatsTab_C_ExecuteUbergraph_AthenaStatsTab, K2Node_MakeArray_Array) == 0x0000F0, "Member 'AthenaStatsTab_C_ExecuteUbergraph_AthenaStatsTab::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(AthenaStatsTab_C_ExecuteUbergraph_AthenaStatsTab, CallFunc_Format_ReturnValue) == 0x000100, "Member 'AthenaStatsTab_C_ExecuteUbergraph_AthenaStatsTab::CallFunc_Format_ReturnValue' has a wrong offset!");
static_assert(offsetof(AthenaStatsTab_C_ExecuteUbergraph_AthenaStatsTab, K2Node_CustomEvent_bNewInputType) == 0x000118, "Member 'AthenaStatsTab_C_ExecuteUbergraph_AthenaStatsTab::K2Node_CustomEvent_bNewInputType' has a wrong offset!");
static_assert(offsetof(AthenaStatsTab_C_ExecuteUbergraph_AthenaStatsTab, K2Node_ComponentBoundEvent_Button_2) == 0x000120, "Member 'AthenaStatsTab_C_ExecuteUbergraph_AthenaStatsTab::K2Node_ComponentBoundEvent_Button_2' has a wrong offset!");
static_assert(offsetof(AthenaStatsTab_C_ExecuteUbergraph_AthenaStatsTab, CallFunc_PlayAnimation_ReturnValue_2) == 0x000128, "Member 'AthenaStatsTab_C_ExecuteUbergraph_AthenaStatsTab::CallFunc_PlayAnimation_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(AthenaStatsTab_C_ExecuteUbergraph_AthenaStatsTab, K2Node_Event_PlatformButtonText) == 0x000130, "Member 'AthenaStatsTab_C_ExecuteUbergraph_AthenaStatsTab::K2Node_Event_PlatformButtonText' has a wrong offset!");
static_assert(offsetof(AthenaStatsTab_C_ExecuteUbergraph_AthenaStatsTab, K2Node_ComponentBoundEvent_Button_1) == 0x000148, "Member 'AthenaStatsTab_C_ExecuteUbergraph_AthenaStatsTab::K2Node_ComponentBoundEvent_Button_1' has a wrong offset!");
static_assert(offsetof(AthenaStatsTab_C_ExecuteUbergraph_AthenaStatsTab, K2Node_DynamicCast_AsIcon_Text_Button) == 0x000150, "Member 'AthenaStatsTab_C_ExecuteUbergraph_AthenaStatsTab::K2Node_DynamicCast_AsIcon_Text_Button' has a wrong offset!");
static_assert(offsetof(AthenaStatsTab_C_ExecuteUbergraph_AthenaStatsTab, K2Node_DynamicCast_bSuccess) == 0x000158, "Member 'AthenaStatsTab_C_ExecuteUbergraph_AthenaStatsTab::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(AthenaStatsTab_C_ExecuteUbergraph_AthenaStatsTab, CallFunc_GetRuntimeOptions_ReturnValue) == 0x000160, "Member 'AthenaStatsTab_C_ExecuteUbergraph_AthenaStatsTab::CallFunc_GetRuntimeOptions_ReturnValue' has a wrong offset!");
static_assert(offsetof(AthenaStatsTab_C_ExecuteUbergraph_AthenaStatsTab, CallFunc_GetAccountLevelText_ReturnValue) == 0x000168, "Member 'AthenaStatsTab_C_ExecuteUbergraph_AthenaStatsTab::CallFunc_GetAccountLevelText_ReturnValue' has a wrong offset!");
static_assert(offsetof(AthenaStatsTab_C_ExecuteUbergraph_AthenaStatsTab, K2Node_Select_Default_2) == 0x000180, "Member 'AthenaStatsTab_C_ExecuteUbergraph_AthenaStatsTab::K2Node_Select_Default_2' has a wrong offset!");
static_assert(offsetof(AthenaStatsTab_C_ExecuteUbergraph_AthenaStatsTab, CallFunc_GetFriendMatchXpBoostText_Result) == 0x000188, "Member 'AthenaStatsTab_C_ExecuteUbergraph_AthenaStatsTab::CallFunc_GetFriendMatchXpBoostText_Result' has a wrong offset!");
static_assert(offsetof(AthenaStatsTab_C_ExecuteUbergraph_AthenaStatsTab, CallFunc_GetContext_ReturnValue_2) == 0x0001A0, "Member 'AthenaStatsTab_C_ExecuteUbergraph_AthenaStatsTab::CallFunc_GetContext_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(AthenaStatsTab_C_ExecuteUbergraph_AthenaStatsTab, CallFunc_GetCurrentSeasonNumberAsText_ReturnValue) == 0x0001A8, "Member 'AthenaStatsTab_C_ExecuteUbergraph_AthenaStatsTab::CallFunc_GetCurrentSeasonNumberAsText_ReturnValue' has a wrong offset!");
static_assert(offsetof(AthenaStatsTab_C_ExecuteUbergraph_AthenaStatsTab, CallFunc_GetContext_ReturnValue_3) == 0x0001C0, "Member 'AthenaStatsTab_C_ExecuteUbergraph_AthenaStatsTab::CallFunc_GetContext_ReturnValue_3' has a wrong offset!");

struct AthenaStatsTab_C_GetAccountLevelText final
{
public:
	class FText                                   ReturnValue;
	class UFortMcpContext*                        CallFunc_GetContext_ReturnValue;
	struct FFortPublicAccountInfo                 CallFunc_GetCurrentlyViewedAccountInfo_Result;
	uint8                                         Pad_54[0x4];
	class FText                                   CallFunc_Conv_IntToText_ReturnValue;
};
static_assert(alignof(AthenaStatsTab_C_GetAccountLevelText) == 0x000008, "Wrong alignment on AthenaStatsTab_C_GetAccountLevelText");
static_assert(sizeof(AthenaStatsTab_C_GetAccountLevelText) == 0x000070, "Wrong size on AthenaStatsTab_C_GetAccountLevelText");
static_assert(offsetof(AthenaStatsTab_C_GetAccountLevelText, ReturnValue) == 0x000000, "Member 'AthenaStatsTab_C_GetAccountLevelText::ReturnValue' has a wrong offset!");
static_assert(offsetof(AthenaStatsTab_C_GetAccountLevelText, CallFunc_GetContext_ReturnValue) == 0x000018, "Member 'AthenaStatsTab_C_GetAccountLevelText::CallFunc_GetContext_ReturnValue' has a wrong offset!");
static_assert(offsetof(AthenaStatsTab_C_GetAccountLevelText, CallFunc_GetCurrentlyViewedAccountInfo_Result) == 0x000020, "Member 'AthenaStatsTab_C_GetAccountLevelText::CallFunc_GetCurrentlyViewedAccountInfo_Result' has a wrong offset!");
static_assert(offsetof(AthenaStatsTab_C_GetAccountLevelText, CallFunc_Conv_IntToText_ReturnValue) == 0x000058, "Member 'AthenaStatsTab_C_GetAccountLevelText::CallFunc_Conv_IntToText_ReturnValue' has a wrong offset!");

struct AthenaStatsTab_C_GetFriendMatchXpBoostText final
{
public:
	class FText                                   Result;
	class UFortMcpContext*                        CallFunc_GetContext_ReturnValue;
	class UFortMcpProfileAthena*                  CallFunc_GetAthenaProfile_ReturnValue;
	int32                                         CallFunc_GetSeasonFriendMatchXpBoost_ReturnValue;
	uint8                                         Pad_2C[0x4];
	class FText                                   CallFunc_Conv_IntToText_ReturnValue;
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData;
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array;
	class FText                                   CallFunc_Format_ReturnValue;
};
static_assert(alignof(AthenaStatsTab_C_GetFriendMatchXpBoostText) == 0x000008, "Wrong alignment on AthenaStatsTab_C_GetFriendMatchXpBoostText");
static_assert(sizeof(AthenaStatsTab_C_GetFriendMatchXpBoostText) == 0x0000C0, "Wrong size on AthenaStatsTab_C_GetFriendMatchXpBoostText");
static_assert(offsetof(AthenaStatsTab_C_GetFriendMatchXpBoostText, Result) == 0x000000, "Member 'AthenaStatsTab_C_GetFriendMatchXpBoostText::Result' has a wrong offset!");
static_assert(offsetof(AthenaStatsTab_C_GetFriendMatchXpBoostText, CallFunc_GetContext_ReturnValue) == 0x000018, "Member 'AthenaStatsTab_C_GetFriendMatchXpBoostText::CallFunc_GetContext_ReturnValue' has a wrong offset!");
static_assert(offsetof(AthenaStatsTab_C_GetFriendMatchXpBoostText, CallFunc_GetAthenaProfile_ReturnValue) == 0x000020, "Member 'AthenaStatsTab_C_GetFriendMatchXpBoostText::CallFunc_GetAthenaProfile_ReturnValue' has a wrong offset!");
static_assert(offsetof(AthenaStatsTab_C_GetFriendMatchXpBoostText, CallFunc_GetSeasonFriendMatchXpBoost_ReturnValue) == 0x000028, "Member 'AthenaStatsTab_C_GetFriendMatchXpBoostText::CallFunc_GetSeasonFriendMatchXpBoost_ReturnValue' has a wrong offset!");
static_assert(offsetof(AthenaStatsTab_C_GetFriendMatchXpBoostText, CallFunc_Conv_IntToText_ReturnValue) == 0x000030, "Member 'AthenaStatsTab_C_GetFriendMatchXpBoostText::CallFunc_Conv_IntToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(AthenaStatsTab_C_GetFriendMatchXpBoostText, K2Node_MakeStruct_FormatArgumentData) == 0x000048, "Member 'AthenaStatsTab_C_GetFriendMatchXpBoostText::K2Node_MakeStruct_FormatArgumentData' has a wrong offset!");
static_assert(offsetof(AthenaStatsTab_C_GetFriendMatchXpBoostText, K2Node_MakeArray_Array) == 0x000098, "Member 'AthenaStatsTab_C_GetFriendMatchXpBoostText::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(AthenaStatsTab_C_GetFriendMatchXpBoostText, CallFunc_Format_ReturnValue) == 0x0000A8, "Member 'AthenaStatsTab_C_GetFriendMatchXpBoostText::CallFunc_Format_ReturnValue' has a wrong offset!");

struct AthenaStatsTab_C_HandleBack final
{
public:
	bool                                          PassThrough;
};
static_assert(alignof(AthenaStatsTab_C_HandleBack) == 0x000001, "Wrong alignment on AthenaStatsTab_C_HandleBack");
static_assert(sizeof(AthenaStatsTab_C_HandleBack) == 0x000001, "Wrong size on AthenaStatsTab_C_HandleBack");
static_assert(offsetof(AthenaStatsTab_C_HandleBack, PassThrough) == 0x000000, "Member 'AthenaStatsTab_C_HandleBack::PassThrough' has a wrong offset!");

struct AthenaStatsTab_C_Init_Back_Action final
{
public:
	bool                                          CallFunc_HasInputActionHandler_ReturnValue;
	uint8                                         Pad_1[0x7];
	class UCommonInputSubsystem*                  CallFunc_GetLocalPlayerSubsystem_ReturnValue;
	ECommonInputType                              CallFunc_GetCurrentInputType_ReturnValue;
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;
	uint8                                         Pad_12[0x2];
	TDelegate<void(bool* bPassThrough)>           K2Node_CreateDelegate_OutputDelegate;
};
static_assert(alignof(AthenaStatsTab_C_Init_Back_Action) == 0x000008, "Wrong alignment on AthenaStatsTab_C_Init_Back_Action");
static_assert(sizeof(AthenaStatsTab_C_Init_Back_Action) == 0x000020, "Wrong size on AthenaStatsTab_C_Init_Back_Action");
static_assert(offsetof(AthenaStatsTab_C_Init_Back_Action, CallFunc_HasInputActionHandler_ReturnValue) == 0x000000, "Member 'AthenaStatsTab_C_Init_Back_Action::CallFunc_HasInputActionHandler_ReturnValue' has a wrong offset!");
static_assert(offsetof(AthenaStatsTab_C_Init_Back_Action, CallFunc_GetLocalPlayerSubsystem_ReturnValue) == 0x000008, "Member 'AthenaStatsTab_C_Init_Back_Action::CallFunc_GetLocalPlayerSubsystem_ReturnValue' has a wrong offset!");
static_assert(offsetof(AthenaStatsTab_C_Init_Back_Action, CallFunc_GetCurrentInputType_ReturnValue) == 0x000010, "Member 'AthenaStatsTab_C_Init_Back_Action::CallFunc_GetCurrentInputType_ReturnValue' has a wrong offset!");
static_assert(offsetof(AthenaStatsTab_C_Init_Back_Action, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x000011, "Member 'AthenaStatsTab_C_Init_Back_Action::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(AthenaStatsTab_C_Init_Back_Action, K2Node_CreateDelegate_OutputDelegate) == 0x000014, "Member 'AthenaStatsTab_C_Init_Back_Action::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");

struct AthenaStatsTab_C_OnInputMethodChanged_Event_0 final
{
public:
	ECommonInputType                              bNewInputType;
};
static_assert(alignof(AthenaStatsTab_C_OnInputMethodChanged_Event_0) == 0x000001, "Wrong alignment on AthenaStatsTab_C_OnInputMethodChanged_Event_0");
static_assert(sizeof(AthenaStatsTab_C_OnInputMethodChanged_Event_0) == 0x000001, "Wrong size on AthenaStatsTab_C_OnInputMethodChanged_Event_0");
static_assert(offsetof(AthenaStatsTab_C_OnInputMethodChanged_Event_0, bNewInputType) == 0x000000, "Member 'AthenaStatsTab_C_OnInputMethodChanged_Event_0::bNewInputType' has a wrong offset!");

struct AthenaStatsTab_C_OnQueryFinished final
{
public:
	bool                                          bWasSuccessful;
	bool                                          bHasStatsToDisplay;
};
static_assert(alignof(AthenaStatsTab_C_OnQueryFinished) == 0x000001, "Wrong alignment on AthenaStatsTab_C_OnQueryFinished");
static_assert(sizeof(AthenaStatsTab_C_OnQueryFinished) == 0x000002, "Wrong size on AthenaStatsTab_C_OnQueryFinished");
static_assert(offsetof(AthenaStatsTab_C_OnQueryFinished, bWasSuccessful) == 0x000000, "Member 'AthenaStatsTab_C_OnQueryFinished::bWasSuccessful' has a wrong offset!");
static_assert(offsetof(AthenaStatsTab_C_OnQueryFinished, bHasStatsToDisplay) == 0x000001, "Member 'AthenaStatsTab_C_OnQueryFinished::bHasStatsToDisplay' has a wrong offset!");

struct AthenaStatsTab_C_SetPlatformButtonText final
{
public:
	class FText                                   PlatformButtonText;
};
static_assert(alignof(AthenaStatsTab_C_SetPlatformButtonText) == 0x000008, "Wrong alignment on AthenaStatsTab_C_SetPlatformButtonText");
static_assert(sizeof(AthenaStatsTab_C_SetPlatformButtonText) == 0x000018, "Wrong size on AthenaStatsTab_C_SetPlatformButtonText");
static_assert(offsetof(AthenaStatsTab_C_SetPlatformButtonText, PlatformButtonText) == 0x000000, "Member 'AthenaStatsTab_C_SetPlatformButtonText::PlatformButtonText' has a wrong offset!");

}
