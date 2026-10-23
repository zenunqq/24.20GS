#pragma once

#include "Basic.hpp"

#include "SlateCore_structs.hpp"
#include "UMG_structs.hpp"
#include "FortniteGame_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "CommonInput_structs.hpp"

namespace SDK::Params
{

struct TeamMemberPedestal_Nameplate_C_UpdateInputActionVisibility final
{
public:
	ESlateVisibility                              CallFunc_GetInputActionVisibility_ReturnValue;
	uint8                                         Pad_1[0x7];
	class UTeamMemberPedestal_Nameplate_AddFriendButton_C* K2Node_DynamicCast_AsTeam_Member_Pedestal_Nameplate_Add_Friend_Button;
	bool                                          K2Node_DynamicCast_bSuccess;
};
static_assert(alignof(TeamMemberPedestal_Nameplate_C_UpdateInputActionVisibility) == 0x000008, "Wrong alignment on TeamMemberPedestal_Nameplate_C_UpdateInputActionVisibility");
static_assert(sizeof(TeamMemberPedestal_Nameplate_C_UpdateInputActionVisibility) == 0x000018, "Wrong size on TeamMemberPedestal_Nameplate_C_UpdateInputActionVisibility");
static_assert(offsetof(TeamMemberPedestal_Nameplate_C_UpdateInputActionVisibility, CallFunc_GetInputActionVisibility_ReturnValue) == 0x000000, "Member 'TeamMemberPedestal_Nameplate_C_UpdateInputActionVisibility::CallFunc_GetInputActionVisibility_ReturnValue' has a wrong offset!");
static_assert(offsetof(TeamMemberPedestal_Nameplate_C_UpdateInputActionVisibility, K2Node_DynamicCast_AsTeam_Member_Pedestal_Nameplate_Add_Friend_Button) == 0x000008, "Member 'TeamMemberPedestal_Nameplate_C_UpdateInputActionVisibility::K2Node_DynamicCast_AsTeam_Member_Pedestal_Nameplate_Add_Friend_Button' has a wrong offset!");
static_assert(offsetof(TeamMemberPedestal_Nameplate_C_UpdateInputActionVisibility, K2Node_DynamicCast_bSuccess) == 0x000010, "Member 'TeamMemberPedestal_Nameplate_C_UpdateInputActionVisibility::K2Node_DynamicCast_bSuccess' has a wrong offset!");

struct TeamMemberPedestal_Nameplate_C_Update_Add_Friend_Button_Visuals final
{
public:
	bool                                          IsUsingTouch;
	uint8                                         Pad_1[0x7];
	class UTeamMemberPedestal_Nameplate_AddFriendButton_C* K2Node_DynamicCast_AsTeam_Member_Pedestal_Nameplate_Add_Friend_Button;
	bool                                          K2Node_DynamicCast_bSuccess;
	uint8                                         Pad_11[0x3];
	struct FMargin                                K2Node_MakeStruct_Margin;
	struct FMargin                                K2Node_MakeStruct_Margin_1;
	uint8                                         Pad_34[0x4];
	class UOverlaySlot*                           CallFunc_SlotAsOverlaySlot_ReturnValue;
};
static_assert(alignof(TeamMemberPedestal_Nameplate_C_Update_Add_Friend_Button_Visuals) == 0x000008, "Wrong alignment on TeamMemberPedestal_Nameplate_C_Update_Add_Friend_Button_Visuals");
static_assert(sizeof(TeamMemberPedestal_Nameplate_C_Update_Add_Friend_Button_Visuals) == 0x000040, "Wrong size on TeamMemberPedestal_Nameplate_C_Update_Add_Friend_Button_Visuals");
static_assert(offsetof(TeamMemberPedestal_Nameplate_C_Update_Add_Friend_Button_Visuals, IsUsingTouch) == 0x000000, "Member 'TeamMemberPedestal_Nameplate_C_Update_Add_Friend_Button_Visuals::IsUsingTouch' has a wrong offset!");
static_assert(offsetof(TeamMemberPedestal_Nameplate_C_Update_Add_Friend_Button_Visuals, K2Node_DynamicCast_AsTeam_Member_Pedestal_Nameplate_Add_Friend_Button) == 0x000008, "Member 'TeamMemberPedestal_Nameplate_C_Update_Add_Friend_Button_Visuals::K2Node_DynamicCast_AsTeam_Member_Pedestal_Nameplate_Add_Friend_Button' has a wrong offset!");
static_assert(offsetof(TeamMemberPedestal_Nameplate_C_Update_Add_Friend_Button_Visuals, K2Node_DynamicCast_bSuccess) == 0x000010, "Member 'TeamMemberPedestal_Nameplate_C_Update_Add_Friend_Button_Visuals::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(TeamMemberPedestal_Nameplate_C_Update_Add_Friend_Button_Visuals, K2Node_MakeStruct_Margin) == 0x000014, "Member 'TeamMemberPedestal_Nameplate_C_Update_Add_Friend_Button_Visuals::K2Node_MakeStruct_Margin' has a wrong offset!");
static_assert(offsetof(TeamMemberPedestal_Nameplate_C_Update_Add_Friend_Button_Visuals, K2Node_MakeStruct_Margin_1) == 0x000024, "Member 'TeamMemberPedestal_Nameplate_C_Update_Add_Friend_Button_Visuals::K2Node_MakeStruct_Margin_1' has a wrong offset!");
static_assert(offsetof(TeamMemberPedestal_Nameplate_C_Update_Add_Friend_Button_Visuals, CallFunc_SlotAsOverlaySlot_ReturnValue) == 0x000038, "Member 'TeamMemberPedestal_Nameplate_C_Update_Add_Friend_Button_Visuals::CallFunc_SlotAsOverlaySlot_ReturnValue' has a wrong offset!");

struct TeamMemberPedestal_Nameplate_C_OnReadyStatusChanged final
{
public:
	EGameReadiness                                GameReadiness;
	bool                                          bIsDownloading;
};
static_assert(alignof(TeamMemberPedestal_Nameplate_C_OnReadyStatusChanged) == 0x000001, "Wrong alignment on TeamMemberPedestal_Nameplate_C_OnReadyStatusChanged");
static_assert(sizeof(TeamMemberPedestal_Nameplate_C_OnReadyStatusChanged) == 0x000002, "Wrong size on TeamMemberPedestal_Nameplate_C_OnReadyStatusChanged");
static_assert(offsetof(TeamMemberPedestal_Nameplate_C_OnReadyStatusChanged, GameReadiness) == 0x000000, "Member 'TeamMemberPedestal_Nameplate_C_OnReadyStatusChanged::GameReadiness' has a wrong offset!");
static_assert(offsetof(TeamMemberPedestal_Nameplate_C_OnReadyStatusChanged, bIsDownloading) == 0x000001, "Member 'TeamMemberPedestal_Nameplate_C_OnReadyStatusChanged::bIsDownloading' has a wrong offset!");

struct TeamMemberPedestal_Nameplate_C_OnPlayReadyAudio final
{
public:
	bool                                          bIsReadyForMatchmaking;
};
static_assert(alignof(TeamMemberPedestal_Nameplate_C_OnPlayReadyAudio) == 0x000001, "Wrong alignment on TeamMemberPedestal_Nameplate_C_OnPlayReadyAudio");
static_assert(sizeof(TeamMemberPedestal_Nameplate_C_OnPlayReadyAudio) == 0x000001, "Wrong size on TeamMemberPedestal_Nameplate_C_OnPlayReadyAudio");
static_assert(offsetof(TeamMemberPedestal_Nameplate_C_OnPlayReadyAudio, bIsReadyForMatchmaking) == 0x000000, "Member 'TeamMemberPedestal_Nameplate_C_OnPlayReadyAudio::bIsReadyForMatchmaking' has a wrong offset!");

struct TeamMemberPedestal_Nameplate_C_OnInputChanged final
{
public:
	ECommonInputType                              bNewInputType;
};
static_assert(alignof(TeamMemberPedestal_Nameplate_C_OnInputChanged) == 0x000001, "Wrong alignment on TeamMemberPedestal_Nameplate_C_OnInputChanged");
static_assert(sizeof(TeamMemberPedestal_Nameplate_C_OnInputChanged) == 0x000001, "Wrong size on TeamMemberPedestal_Nameplate_C_OnInputChanged");
static_assert(offsetof(TeamMemberPedestal_Nameplate_C_OnInputChanged, bNewInputType) == 0x000000, "Member 'TeamMemberPedestal_Nameplate_C_OnInputChanged::bNewInputType' has a wrong offset!");

struct TeamMemberPedestal_Nameplate_C_OnFrontEndCameraChanged final
{
public:
	EFrontEndCamera                               NewCamera;
	EFrontEndCamera                               OldCamera;
};
static_assert(alignof(TeamMemberPedestal_Nameplate_C_OnFrontEndCameraChanged) == 0x000001, "Wrong alignment on TeamMemberPedestal_Nameplate_C_OnFrontEndCameraChanged");
static_assert(sizeof(TeamMemberPedestal_Nameplate_C_OnFrontEndCameraChanged) == 0x000002, "Wrong size on TeamMemberPedestal_Nameplate_C_OnFrontEndCameraChanged");
static_assert(offsetof(TeamMemberPedestal_Nameplate_C_OnFrontEndCameraChanged, NewCamera) == 0x000000, "Member 'TeamMemberPedestal_Nameplate_C_OnFrontEndCameraChanged::NewCamera' has a wrong offset!");
static_assert(offsetof(TeamMemberPedestal_Nameplate_C_OnFrontEndCameraChanged, OldCamera) == 0x000001, "Member 'TeamMemberPedestal_Nameplate_C_OnFrontEndCameraChanged::OldCamera' has a wrong offset!");

struct TeamMemberPedestal_Nameplate_C_OnFriendStatusUpdated final
{
public:
	EFortFriendRequestStatus                      FriendRequestStatus;
};
static_assert(alignof(TeamMemberPedestal_Nameplate_C_OnFriendStatusUpdated) == 0x000001, "Wrong alignment on TeamMemberPedestal_Nameplate_C_OnFriendStatusUpdated");
static_assert(sizeof(TeamMemberPedestal_Nameplate_C_OnFriendStatusUpdated) == 0x000001, "Wrong size on TeamMemberPedestal_Nameplate_C_OnFriendStatusUpdated");
static_assert(offsetof(TeamMemberPedestal_Nameplate_C_OnFriendStatusUpdated, FriendRequestStatus) == 0x000000, "Member 'TeamMemberPedestal_Nameplate_C_OnFriendStatusUpdated::FriendRequestStatus' has a wrong offset!");

struct TeamMemberPedestal_Nameplate_C_OnCurrentSubGameChanged final
{
public:
	ESubGame                                      NewSubGame;
};
static_assert(alignof(TeamMemberPedestal_Nameplate_C_OnCurrentSubGameChanged) == 0x000001, "Wrong alignment on TeamMemberPedestal_Nameplate_C_OnCurrentSubGameChanged");
static_assert(sizeof(TeamMemberPedestal_Nameplate_C_OnCurrentSubGameChanged) == 0x000001, "Wrong size on TeamMemberPedestal_Nameplate_C_OnCurrentSubGameChanged");
static_assert(offsetof(TeamMemberPedestal_Nameplate_C_OnCurrentSubGameChanged, NewSubGame) == 0x000000, "Member 'TeamMemberPedestal_Nameplate_C_OnCurrentSubGameChanged::NewSubGame' has a wrong offset!");

struct TeamMemberPedestal_Nameplate_C_HandleInputMethodChanged final
{
public:
	ECommonInputType                              bNewInputType;
};
static_assert(alignof(TeamMemberPedestal_Nameplate_C_HandleInputMethodChanged) == 0x000001, "Wrong alignment on TeamMemberPedestal_Nameplate_C_HandleInputMethodChanged");
static_assert(sizeof(TeamMemberPedestal_Nameplate_C_HandleInputMethodChanged) == 0x000001, "Wrong size on TeamMemberPedestal_Nameplate_C_HandleInputMethodChanged");
static_assert(offsetof(TeamMemberPedestal_Nameplate_C_HandleInputMethodChanged, bNewInputType) == 0x000000, "Member 'TeamMemberPedestal_Nameplate_C_HandleInputMethodChanged::bNewInputType' has a wrong offset!");

struct TeamMemberPedestal_Nameplate_C_GetInputActionVisibility final
{
public:
	ESlateVisibility                              ReturnValue;
	bool                                          Temp_bool_Variable;
	ESlateVisibility                              Temp_byte_Variable;
	ESlateVisibility                              Temp_byte_Variable_1;
	uint8                                         Pad_4[0x4];
	class UFortGlobalUIContext*                   CallFunc_GetContext_ReturnValue;
	bool                                          CallFunc_IsUsingGamepad_ReturnValue;
	bool                                          CallFunc_BooleanAND_ReturnValue;
	ESlateVisibility                              K2Node_Select_Default;
};
static_assert(alignof(TeamMemberPedestal_Nameplate_C_GetInputActionVisibility) == 0x000008, "Wrong alignment on TeamMemberPedestal_Nameplate_C_GetInputActionVisibility");
static_assert(sizeof(TeamMemberPedestal_Nameplate_C_GetInputActionVisibility) == 0x000018, "Wrong size on TeamMemberPedestal_Nameplate_C_GetInputActionVisibility");
static_assert(offsetof(TeamMemberPedestal_Nameplate_C_GetInputActionVisibility, ReturnValue) == 0x000000, "Member 'TeamMemberPedestal_Nameplate_C_GetInputActionVisibility::ReturnValue' has a wrong offset!");
static_assert(offsetof(TeamMemberPedestal_Nameplate_C_GetInputActionVisibility, Temp_bool_Variable) == 0x000001, "Member 'TeamMemberPedestal_Nameplate_C_GetInputActionVisibility::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(TeamMemberPedestal_Nameplate_C_GetInputActionVisibility, Temp_byte_Variable) == 0x000002, "Member 'TeamMemberPedestal_Nameplate_C_GetInputActionVisibility::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(TeamMemberPedestal_Nameplate_C_GetInputActionVisibility, Temp_byte_Variable_1) == 0x000003, "Member 'TeamMemberPedestal_Nameplate_C_GetInputActionVisibility::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(TeamMemberPedestal_Nameplate_C_GetInputActionVisibility, CallFunc_GetContext_ReturnValue) == 0x000008, "Member 'TeamMemberPedestal_Nameplate_C_GetInputActionVisibility::CallFunc_GetContext_ReturnValue' has a wrong offset!");
static_assert(offsetof(TeamMemberPedestal_Nameplate_C_GetInputActionVisibility, CallFunc_IsUsingGamepad_ReturnValue) == 0x000010, "Member 'TeamMemberPedestal_Nameplate_C_GetInputActionVisibility::CallFunc_IsUsingGamepad_ReturnValue' has a wrong offset!");
static_assert(offsetof(TeamMemberPedestal_Nameplate_C_GetInputActionVisibility, CallFunc_BooleanAND_ReturnValue) == 0x000011, "Member 'TeamMemberPedestal_Nameplate_C_GetInputActionVisibility::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(TeamMemberPedestal_Nameplate_C_GetInputActionVisibility, K2Node_Select_Default) == 0x000012, "Member 'TeamMemberPedestal_Nameplate_C_GetInputActionVisibility::K2Node_Select_Default' has a wrong offset!");

struct TeamMemberPedestal_Nameplate_C_ExecuteUbergraph_TeamMemberPedestal_Nameplate final
{
public:
	int32                                         EntryPoint;
	bool                                          CallFunc_IsUsingTouch_ReturnValue;
	ESlateVisibility                              Temp_byte_Variable;
	ESlateVisibility                              Temp_byte_Variable_1;
	ESlateVisibility                              Temp_byte_Variable_2;
	ESlateVisibility                              Temp_byte_Variable_3;
	uint8                                         Pad_9[0x7];
	class UCommonInputSubsystem*                  CallFunc_GetLocalPlayerSubsystem_ReturnValue;
	bool                                          CallFunc_IsValid_ReturnValue;
	uint8                                         Pad_19[0x7];
	class UCommonInputSubsystem*                  CallFunc_GetLocalPlayerSubsystem_ReturnValue_1;
	ECommonInputType                              Temp_byte_Variable_4;
	uint8                                         Pad_29[0x3];
	TDelegate<void(ECommonInputType bNewInputType)> K2Node_CreateDelegate_OutputDelegate;
	bool                                          Temp_bool_Variable;
	bool                                          Temp_bool_Variable_1;
	bool                                          Temp_bool_Variable_2;
	bool                                          Temp_bool_Variable_3;
	EGameReadiness                                K2Node_Event_GameReadiness;
	bool                                          K2Node_Event_bIsDownloading;
	bool                                          CallFunc_Not_PreBool_ReturnValue;
	uint8                                         Pad_3F[0x1];
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;
	bool                                          K2Node_Event_bHasValidMember;
	EFrontEndCamera                               K2Node_CustomEvent_NewCamera;
	EFrontEndCamera                               K2Node_CustomEvent_OldCamera;
	EFortFriendRequestStatus                      Temp_byte_Variable_5;
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_1;
	bool                                          CallFunc_BooleanOR_ReturnValue;
	bool                                          CallFunc_Not_PreBool_ReturnValue_1;
	bool                                          K2Node_Event_bIsReadyForMatchmaking;
	ESubGame                                      K2Node_Event_NewSubGame;
	EFortFriendRequestStatus                      Temp_byte_Variable_6;
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_2;
	uint8                                         Pad_54[0x4];
	class UTeamMemberPedestal_Nameplate_AddFriendButton_C* K2Node_DynamicCast_AsTeam_Member_Pedestal_Nameplate_Add_Friend_Button;
	bool                                          K2Node_DynamicCast_bSuccess;
	ESlateVisibility                              Temp_byte_Variable_7;
	bool                                          CallFunc_IsValid_ReturnValue_1;
	EFortFriendRequestStatus                      K2Node_Event_FriendRequestStatus;
	uint8                                         Pad_64[0x4];
	class FText                                   CallFunc_GetEmptyText_ReturnValue;
	class FText                                   K2Node_Select_Default;
	ESlateVisibility                              K2Node_Select_Default_1;
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_3;
	ESlateVisibility                              Temp_byte_Variable_8;
	bool                                          Temp_bool_Variable_4;
	ESlateVisibility                              K2Node_Select_Default_2;
	uint8                                         Pad_9D[0x3];
	TDelegate<void(ECommonInputType bNewInputType)> K2Node_CreateDelegate_OutputDelegate_1;
	TDelegate<void(EFrontEndCamera NewCamera, EFrontEndCamera OldCamera)> K2Node_CreateDelegate_OutputDelegate_2;
	ECommonInputType                              K2Node_CustomEvent_bNewInputType_1;
	bool                                          Temp_bool_Variable_5;
	bool                                          CallFunc_IsCurrentMemberValid_ReturnValue;
	EGameReadiness                                Temp_byte_Variable_9;
	bool                                          CallFunc_Not_PreBool_ReturnValue_2;
	bool                                          CallFunc_BooleanOR_ReturnValue_1;
	uint8                                         Pad_BE[0x2];
	struct FLinearColor                           K2Node_Select_Default_3;
	struct FSlateColor                            K2Node_MakeStruct_SlateColor;
	bool                                          Temp_bool_Variable_6;
	uint8                                         Pad_E5[0x3];
	class USoundBase*                             K2Node_Select_Default_4;
	bool                                          CallFunc_IsMobileGame_ReturnValue;
	uint8                                         Pad_F1[0x7];
	class UFortFrontEndContext*                   CallFunc_GetContext_ReturnValue;
	bool                                          CallFunc_IsValid_ReturnValue_2;
	EFrontEndCamera                               CallFunc_GetFrontEndCamera_ReturnValue;
	ESlateVisibility                              Temp_byte_Variable_10;
	ESlateVisibility                              Temp_byte_Variable_11;
	ECommonInputType                              K2Node_CustomEvent_bNewInputType;
	ESlateVisibility                              K2Node_Select_Default_5;
	bool                                          K2Node_Select_Default_6;
};
static_assert(alignof(TeamMemberPedestal_Nameplate_C_ExecuteUbergraph_TeamMemberPedestal_Nameplate) == 0x000008, "Wrong alignment on TeamMemberPedestal_Nameplate_C_ExecuteUbergraph_TeamMemberPedestal_Nameplate");
static_assert(sizeof(TeamMemberPedestal_Nameplate_C_ExecuteUbergraph_TeamMemberPedestal_Nameplate) == 0x000108, "Wrong size on TeamMemberPedestal_Nameplate_C_ExecuteUbergraph_TeamMemberPedestal_Nameplate");
static_assert(offsetof(TeamMemberPedestal_Nameplate_C_ExecuteUbergraph_TeamMemberPedestal_Nameplate, EntryPoint) == 0x000000, "Member 'TeamMemberPedestal_Nameplate_C_ExecuteUbergraph_TeamMemberPedestal_Nameplate::EntryPoint' has a wrong offset!");
static_assert(offsetof(TeamMemberPedestal_Nameplate_C_ExecuteUbergraph_TeamMemberPedestal_Nameplate, CallFunc_IsUsingTouch_ReturnValue) == 0x000004, "Member 'TeamMemberPedestal_Nameplate_C_ExecuteUbergraph_TeamMemberPedestal_Nameplate::CallFunc_IsUsingTouch_ReturnValue' has a wrong offset!");
static_assert(offsetof(TeamMemberPedestal_Nameplate_C_ExecuteUbergraph_TeamMemberPedestal_Nameplate, Temp_byte_Variable) == 0x000005, "Member 'TeamMemberPedestal_Nameplate_C_ExecuteUbergraph_TeamMemberPedestal_Nameplate::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(TeamMemberPedestal_Nameplate_C_ExecuteUbergraph_TeamMemberPedestal_Nameplate, Temp_byte_Variable_1) == 0x000006, "Member 'TeamMemberPedestal_Nameplate_C_ExecuteUbergraph_TeamMemberPedestal_Nameplate::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(TeamMemberPedestal_Nameplate_C_ExecuteUbergraph_TeamMemberPedestal_Nameplate, Temp_byte_Variable_2) == 0x000007, "Member 'TeamMemberPedestal_Nameplate_C_ExecuteUbergraph_TeamMemberPedestal_Nameplate::Temp_byte_Variable_2' has a wrong offset!");
static_assert(offsetof(TeamMemberPedestal_Nameplate_C_ExecuteUbergraph_TeamMemberPedestal_Nameplate, Temp_byte_Variable_3) == 0x000008, "Member 'TeamMemberPedestal_Nameplate_C_ExecuteUbergraph_TeamMemberPedestal_Nameplate::Temp_byte_Variable_3' has a wrong offset!");
static_assert(offsetof(TeamMemberPedestal_Nameplate_C_ExecuteUbergraph_TeamMemberPedestal_Nameplate, CallFunc_GetLocalPlayerSubsystem_ReturnValue) == 0x000010, "Member 'TeamMemberPedestal_Nameplate_C_ExecuteUbergraph_TeamMemberPedestal_Nameplate::CallFunc_GetLocalPlayerSubsystem_ReturnValue' has a wrong offset!");
static_assert(offsetof(TeamMemberPedestal_Nameplate_C_ExecuteUbergraph_TeamMemberPedestal_Nameplate, CallFunc_IsValid_ReturnValue) == 0x000018, "Member 'TeamMemberPedestal_Nameplate_C_ExecuteUbergraph_TeamMemberPedestal_Nameplate::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(TeamMemberPedestal_Nameplate_C_ExecuteUbergraph_TeamMemberPedestal_Nameplate, CallFunc_GetLocalPlayerSubsystem_ReturnValue_1) == 0x000020, "Member 'TeamMemberPedestal_Nameplate_C_ExecuteUbergraph_TeamMemberPedestal_Nameplate::CallFunc_GetLocalPlayerSubsystem_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(TeamMemberPedestal_Nameplate_C_ExecuteUbergraph_TeamMemberPedestal_Nameplate, Temp_byte_Variable_4) == 0x000028, "Member 'TeamMemberPedestal_Nameplate_C_ExecuteUbergraph_TeamMemberPedestal_Nameplate::Temp_byte_Variable_4' has a wrong offset!");
static_assert(offsetof(TeamMemberPedestal_Nameplate_C_ExecuteUbergraph_TeamMemberPedestal_Nameplate, K2Node_CreateDelegate_OutputDelegate) == 0x00002C, "Member 'TeamMemberPedestal_Nameplate_C_ExecuteUbergraph_TeamMemberPedestal_Nameplate::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(TeamMemberPedestal_Nameplate_C_ExecuteUbergraph_TeamMemberPedestal_Nameplate, Temp_bool_Variable) == 0x000038, "Member 'TeamMemberPedestal_Nameplate_C_ExecuteUbergraph_TeamMemberPedestal_Nameplate::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(TeamMemberPedestal_Nameplate_C_ExecuteUbergraph_TeamMemberPedestal_Nameplate, Temp_bool_Variable_1) == 0x000039, "Member 'TeamMemberPedestal_Nameplate_C_ExecuteUbergraph_TeamMemberPedestal_Nameplate::Temp_bool_Variable_1' has a wrong offset!");
static_assert(offsetof(TeamMemberPedestal_Nameplate_C_ExecuteUbergraph_TeamMemberPedestal_Nameplate, Temp_bool_Variable_2) == 0x00003A, "Member 'TeamMemberPedestal_Nameplate_C_ExecuteUbergraph_TeamMemberPedestal_Nameplate::Temp_bool_Variable_2' has a wrong offset!");
static_assert(offsetof(TeamMemberPedestal_Nameplate_C_ExecuteUbergraph_TeamMemberPedestal_Nameplate, Temp_bool_Variable_3) == 0x00003B, "Member 'TeamMemberPedestal_Nameplate_C_ExecuteUbergraph_TeamMemberPedestal_Nameplate::Temp_bool_Variable_3' has a wrong offset!");
static_assert(offsetof(TeamMemberPedestal_Nameplate_C_ExecuteUbergraph_TeamMemberPedestal_Nameplate, K2Node_Event_GameReadiness) == 0x00003C, "Member 'TeamMemberPedestal_Nameplate_C_ExecuteUbergraph_TeamMemberPedestal_Nameplate::K2Node_Event_GameReadiness' has a wrong offset!");
static_assert(offsetof(TeamMemberPedestal_Nameplate_C_ExecuteUbergraph_TeamMemberPedestal_Nameplate, K2Node_Event_bIsDownloading) == 0x00003D, "Member 'TeamMemberPedestal_Nameplate_C_ExecuteUbergraph_TeamMemberPedestal_Nameplate::K2Node_Event_bIsDownloading' has a wrong offset!");
static_assert(offsetof(TeamMemberPedestal_Nameplate_C_ExecuteUbergraph_TeamMemberPedestal_Nameplate, CallFunc_Not_PreBool_ReturnValue) == 0x00003E, "Member 'TeamMemberPedestal_Nameplate_C_ExecuteUbergraph_TeamMemberPedestal_Nameplate::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(TeamMemberPedestal_Nameplate_C_ExecuteUbergraph_TeamMemberPedestal_Nameplate, CallFunc_PlayAnimation_ReturnValue) == 0x000040, "Member 'TeamMemberPedestal_Nameplate_C_ExecuteUbergraph_TeamMemberPedestal_Nameplate::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");
static_assert(offsetof(TeamMemberPedestal_Nameplate_C_ExecuteUbergraph_TeamMemberPedestal_Nameplate, K2Node_Event_bHasValidMember) == 0x000048, "Member 'TeamMemberPedestal_Nameplate_C_ExecuteUbergraph_TeamMemberPedestal_Nameplate::K2Node_Event_bHasValidMember' has a wrong offset!");
static_assert(offsetof(TeamMemberPedestal_Nameplate_C_ExecuteUbergraph_TeamMemberPedestal_Nameplate, K2Node_CustomEvent_NewCamera) == 0x000049, "Member 'TeamMemberPedestal_Nameplate_C_ExecuteUbergraph_TeamMemberPedestal_Nameplate::K2Node_CustomEvent_NewCamera' has a wrong offset!");
static_assert(offsetof(TeamMemberPedestal_Nameplate_C_ExecuteUbergraph_TeamMemberPedestal_Nameplate, K2Node_CustomEvent_OldCamera) == 0x00004A, "Member 'TeamMemberPedestal_Nameplate_C_ExecuteUbergraph_TeamMemberPedestal_Nameplate::K2Node_CustomEvent_OldCamera' has a wrong offset!");
static_assert(offsetof(TeamMemberPedestal_Nameplate_C_ExecuteUbergraph_TeamMemberPedestal_Nameplate, Temp_byte_Variable_5) == 0x00004B, "Member 'TeamMemberPedestal_Nameplate_C_ExecuteUbergraph_TeamMemberPedestal_Nameplate::Temp_byte_Variable_5' has a wrong offset!");
static_assert(offsetof(TeamMemberPedestal_Nameplate_C_ExecuteUbergraph_TeamMemberPedestal_Nameplate, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x00004C, "Member 'TeamMemberPedestal_Nameplate_C_ExecuteUbergraph_TeamMemberPedestal_Nameplate::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(TeamMemberPedestal_Nameplate_C_ExecuteUbergraph_TeamMemberPedestal_Nameplate, CallFunc_EqualEqual_ByteByte_ReturnValue_1) == 0x00004D, "Member 'TeamMemberPedestal_Nameplate_C_ExecuteUbergraph_TeamMemberPedestal_Nameplate::CallFunc_EqualEqual_ByteByte_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(TeamMemberPedestal_Nameplate_C_ExecuteUbergraph_TeamMemberPedestal_Nameplate, CallFunc_BooleanOR_ReturnValue) == 0x00004E, "Member 'TeamMemberPedestal_Nameplate_C_ExecuteUbergraph_TeamMemberPedestal_Nameplate::CallFunc_BooleanOR_ReturnValue' has a wrong offset!");
static_assert(offsetof(TeamMemberPedestal_Nameplate_C_ExecuteUbergraph_TeamMemberPedestal_Nameplate, CallFunc_Not_PreBool_ReturnValue_1) == 0x00004F, "Member 'TeamMemberPedestal_Nameplate_C_ExecuteUbergraph_TeamMemberPedestal_Nameplate::CallFunc_Not_PreBool_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(TeamMemberPedestal_Nameplate_C_ExecuteUbergraph_TeamMemberPedestal_Nameplate, K2Node_Event_bIsReadyForMatchmaking) == 0x000050, "Member 'TeamMemberPedestal_Nameplate_C_ExecuteUbergraph_TeamMemberPedestal_Nameplate::K2Node_Event_bIsReadyForMatchmaking' has a wrong offset!");
static_assert(offsetof(TeamMemberPedestal_Nameplate_C_ExecuteUbergraph_TeamMemberPedestal_Nameplate, K2Node_Event_NewSubGame) == 0x000051, "Member 'TeamMemberPedestal_Nameplate_C_ExecuteUbergraph_TeamMemberPedestal_Nameplate::K2Node_Event_NewSubGame' has a wrong offset!");
static_assert(offsetof(TeamMemberPedestal_Nameplate_C_ExecuteUbergraph_TeamMemberPedestal_Nameplate, Temp_byte_Variable_6) == 0x000052, "Member 'TeamMemberPedestal_Nameplate_C_ExecuteUbergraph_TeamMemberPedestal_Nameplate::Temp_byte_Variable_6' has a wrong offset!");
static_assert(offsetof(TeamMemberPedestal_Nameplate_C_ExecuteUbergraph_TeamMemberPedestal_Nameplate, CallFunc_EqualEqual_ByteByte_ReturnValue_2) == 0x000053, "Member 'TeamMemberPedestal_Nameplate_C_ExecuteUbergraph_TeamMemberPedestal_Nameplate::CallFunc_EqualEqual_ByteByte_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(TeamMemberPedestal_Nameplate_C_ExecuteUbergraph_TeamMemberPedestal_Nameplate, K2Node_DynamicCast_AsTeam_Member_Pedestal_Nameplate_Add_Friend_Button) == 0x000058, "Member 'TeamMemberPedestal_Nameplate_C_ExecuteUbergraph_TeamMemberPedestal_Nameplate::K2Node_DynamicCast_AsTeam_Member_Pedestal_Nameplate_Add_Friend_Button' has a wrong offset!");
static_assert(offsetof(TeamMemberPedestal_Nameplate_C_ExecuteUbergraph_TeamMemberPedestal_Nameplate, K2Node_DynamicCast_bSuccess) == 0x000060, "Member 'TeamMemberPedestal_Nameplate_C_ExecuteUbergraph_TeamMemberPedestal_Nameplate::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(TeamMemberPedestal_Nameplate_C_ExecuteUbergraph_TeamMemberPedestal_Nameplate, Temp_byte_Variable_7) == 0x000061, "Member 'TeamMemberPedestal_Nameplate_C_ExecuteUbergraph_TeamMemberPedestal_Nameplate::Temp_byte_Variable_7' has a wrong offset!");
static_assert(offsetof(TeamMemberPedestal_Nameplate_C_ExecuteUbergraph_TeamMemberPedestal_Nameplate, CallFunc_IsValid_ReturnValue_1) == 0x000062, "Member 'TeamMemberPedestal_Nameplate_C_ExecuteUbergraph_TeamMemberPedestal_Nameplate::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(TeamMemberPedestal_Nameplate_C_ExecuteUbergraph_TeamMemberPedestal_Nameplate, K2Node_Event_FriendRequestStatus) == 0x000063, "Member 'TeamMemberPedestal_Nameplate_C_ExecuteUbergraph_TeamMemberPedestal_Nameplate::K2Node_Event_FriendRequestStatus' has a wrong offset!");
static_assert(offsetof(TeamMemberPedestal_Nameplate_C_ExecuteUbergraph_TeamMemberPedestal_Nameplate, CallFunc_GetEmptyText_ReturnValue) == 0x000068, "Member 'TeamMemberPedestal_Nameplate_C_ExecuteUbergraph_TeamMemberPedestal_Nameplate::CallFunc_GetEmptyText_ReturnValue' has a wrong offset!");
static_assert(offsetof(TeamMemberPedestal_Nameplate_C_ExecuteUbergraph_TeamMemberPedestal_Nameplate, K2Node_Select_Default) == 0x000080, "Member 'TeamMemberPedestal_Nameplate_C_ExecuteUbergraph_TeamMemberPedestal_Nameplate::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(TeamMemberPedestal_Nameplate_C_ExecuteUbergraph_TeamMemberPedestal_Nameplate, K2Node_Select_Default_1) == 0x000098, "Member 'TeamMemberPedestal_Nameplate_C_ExecuteUbergraph_TeamMemberPedestal_Nameplate::K2Node_Select_Default_1' has a wrong offset!");
static_assert(offsetof(TeamMemberPedestal_Nameplate_C_ExecuteUbergraph_TeamMemberPedestal_Nameplate, CallFunc_EqualEqual_ByteByte_ReturnValue_3) == 0x000099, "Member 'TeamMemberPedestal_Nameplate_C_ExecuteUbergraph_TeamMemberPedestal_Nameplate::CallFunc_EqualEqual_ByteByte_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(TeamMemberPedestal_Nameplate_C_ExecuteUbergraph_TeamMemberPedestal_Nameplate, Temp_byte_Variable_8) == 0x00009A, "Member 'TeamMemberPedestal_Nameplate_C_ExecuteUbergraph_TeamMemberPedestal_Nameplate::Temp_byte_Variable_8' has a wrong offset!");
static_assert(offsetof(TeamMemberPedestal_Nameplate_C_ExecuteUbergraph_TeamMemberPedestal_Nameplate, Temp_bool_Variable_4) == 0x00009B, "Member 'TeamMemberPedestal_Nameplate_C_ExecuteUbergraph_TeamMemberPedestal_Nameplate::Temp_bool_Variable_4' has a wrong offset!");
static_assert(offsetof(TeamMemberPedestal_Nameplate_C_ExecuteUbergraph_TeamMemberPedestal_Nameplate, K2Node_Select_Default_2) == 0x00009C, "Member 'TeamMemberPedestal_Nameplate_C_ExecuteUbergraph_TeamMemberPedestal_Nameplate::K2Node_Select_Default_2' has a wrong offset!");
static_assert(offsetof(TeamMemberPedestal_Nameplate_C_ExecuteUbergraph_TeamMemberPedestal_Nameplate, K2Node_CreateDelegate_OutputDelegate_1) == 0x0000A0, "Member 'TeamMemberPedestal_Nameplate_C_ExecuteUbergraph_TeamMemberPedestal_Nameplate::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(TeamMemberPedestal_Nameplate_C_ExecuteUbergraph_TeamMemberPedestal_Nameplate, K2Node_CreateDelegate_OutputDelegate_2) == 0x0000AC, "Member 'TeamMemberPedestal_Nameplate_C_ExecuteUbergraph_TeamMemberPedestal_Nameplate::K2Node_CreateDelegate_OutputDelegate_2' has a wrong offset!");
static_assert(offsetof(TeamMemberPedestal_Nameplate_C_ExecuteUbergraph_TeamMemberPedestal_Nameplate, K2Node_CustomEvent_bNewInputType_1) == 0x0000B8, "Member 'TeamMemberPedestal_Nameplate_C_ExecuteUbergraph_TeamMemberPedestal_Nameplate::K2Node_CustomEvent_bNewInputType_1' has a wrong offset!");
static_assert(offsetof(TeamMemberPedestal_Nameplate_C_ExecuteUbergraph_TeamMemberPedestal_Nameplate, Temp_bool_Variable_5) == 0x0000B9, "Member 'TeamMemberPedestal_Nameplate_C_ExecuteUbergraph_TeamMemberPedestal_Nameplate::Temp_bool_Variable_5' has a wrong offset!");
static_assert(offsetof(TeamMemberPedestal_Nameplate_C_ExecuteUbergraph_TeamMemberPedestal_Nameplate, CallFunc_IsCurrentMemberValid_ReturnValue) == 0x0000BA, "Member 'TeamMemberPedestal_Nameplate_C_ExecuteUbergraph_TeamMemberPedestal_Nameplate::CallFunc_IsCurrentMemberValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(TeamMemberPedestal_Nameplate_C_ExecuteUbergraph_TeamMemberPedestal_Nameplate, Temp_byte_Variable_9) == 0x0000BB, "Member 'TeamMemberPedestal_Nameplate_C_ExecuteUbergraph_TeamMemberPedestal_Nameplate::Temp_byte_Variable_9' has a wrong offset!");
static_assert(offsetof(TeamMemberPedestal_Nameplate_C_ExecuteUbergraph_TeamMemberPedestal_Nameplate, CallFunc_Not_PreBool_ReturnValue_2) == 0x0000BC, "Member 'TeamMemberPedestal_Nameplate_C_ExecuteUbergraph_TeamMemberPedestal_Nameplate::CallFunc_Not_PreBool_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(TeamMemberPedestal_Nameplate_C_ExecuteUbergraph_TeamMemberPedestal_Nameplate, CallFunc_BooleanOR_ReturnValue_1) == 0x0000BD, "Member 'TeamMemberPedestal_Nameplate_C_ExecuteUbergraph_TeamMemberPedestal_Nameplate::CallFunc_BooleanOR_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(TeamMemberPedestal_Nameplate_C_ExecuteUbergraph_TeamMemberPedestal_Nameplate, K2Node_Select_Default_3) == 0x0000C0, "Member 'TeamMemberPedestal_Nameplate_C_ExecuteUbergraph_TeamMemberPedestal_Nameplate::K2Node_Select_Default_3' has a wrong offset!");
static_assert(offsetof(TeamMemberPedestal_Nameplate_C_ExecuteUbergraph_TeamMemberPedestal_Nameplate, K2Node_MakeStruct_SlateColor) == 0x0000D0, "Member 'TeamMemberPedestal_Nameplate_C_ExecuteUbergraph_TeamMemberPedestal_Nameplate::K2Node_MakeStruct_SlateColor' has a wrong offset!");
static_assert(offsetof(TeamMemberPedestal_Nameplate_C_ExecuteUbergraph_TeamMemberPedestal_Nameplate, Temp_bool_Variable_6) == 0x0000E4, "Member 'TeamMemberPedestal_Nameplate_C_ExecuteUbergraph_TeamMemberPedestal_Nameplate::Temp_bool_Variable_6' has a wrong offset!");
static_assert(offsetof(TeamMemberPedestal_Nameplate_C_ExecuteUbergraph_TeamMemberPedestal_Nameplate, K2Node_Select_Default_4) == 0x0000E8, "Member 'TeamMemberPedestal_Nameplate_C_ExecuteUbergraph_TeamMemberPedestal_Nameplate::K2Node_Select_Default_4' has a wrong offset!");
static_assert(offsetof(TeamMemberPedestal_Nameplate_C_ExecuteUbergraph_TeamMemberPedestal_Nameplate, CallFunc_IsMobileGame_ReturnValue) == 0x0000F0, "Member 'TeamMemberPedestal_Nameplate_C_ExecuteUbergraph_TeamMemberPedestal_Nameplate::CallFunc_IsMobileGame_ReturnValue' has a wrong offset!");
static_assert(offsetof(TeamMemberPedestal_Nameplate_C_ExecuteUbergraph_TeamMemberPedestal_Nameplate, CallFunc_GetContext_ReturnValue) == 0x0000F8, "Member 'TeamMemberPedestal_Nameplate_C_ExecuteUbergraph_TeamMemberPedestal_Nameplate::CallFunc_GetContext_ReturnValue' has a wrong offset!");
static_assert(offsetof(TeamMemberPedestal_Nameplate_C_ExecuteUbergraph_TeamMemberPedestal_Nameplate, CallFunc_IsValid_ReturnValue_2) == 0x000100, "Member 'TeamMemberPedestal_Nameplate_C_ExecuteUbergraph_TeamMemberPedestal_Nameplate::CallFunc_IsValid_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(TeamMemberPedestal_Nameplate_C_ExecuteUbergraph_TeamMemberPedestal_Nameplate, CallFunc_GetFrontEndCamera_ReturnValue) == 0x000101, "Member 'TeamMemberPedestal_Nameplate_C_ExecuteUbergraph_TeamMemberPedestal_Nameplate::CallFunc_GetFrontEndCamera_ReturnValue' has a wrong offset!");
static_assert(offsetof(TeamMemberPedestal_Nameplate_C_ExecuteUbergraph_TeamMemberPedestal_Nameplate, Temp_byte_Variable_10) == 0x000102, "Member 'TeamMemberPedestal_Nameplate_C_ExecuteUbergraph_TeamMemberPedestal_Nameplate::Temp_byte_Variable_10' has a wrong offset!");
static_assert(offsetof(TeamMemberPedestal_Nameplate_C_ExecuteUbergraph_TeamMemberPedestal_Nameplate, Temp_byte_Variable_11) == 0x000103, "Member 'TeamMemberPedestal_Nameplate_C_ExecuteUbergraph_TeamMemberPedestal_Nameplate::Temp_byte_Variable_11' has a wrong offset!");
static_assert(offsetof(TeamMemberPedestal_Nameplate_C_ExecuteUbergraph_TeamMemberPedestal_Nameplate, K2Node_CustomEvent_bNewInputType) == 0x000104, "Member 'TeamMemberPedestal_Nameplate_C_ExecuteUbergraph_TeamMemberPedestal_Nameplate::K2Node_CustomEvent_bNewInputType' has a wrong offset!");
static_assert(offsetof(TeamMemberPedestal_Nameplate_C_ExecuteUbergraph_TeamMemberPedestal_Nameplate, K2Node_Select_Default_5) == 0x000105, "Member 'TeamMemberPedestal_Nameplate_C_ExecuteUbergraph_TeamMemberPedestal_Nameplate::K2Node_Select_Default_5' has a wrong offset!");
static_assert(offsetof(TeamMemberPedestal_Nameplate_C_ExecuteUbergraph_TeamMemberPedestal_Nameplate, K2Node_Select_Default_6) == 0x000106, "Member 'TeamMemberPedestal_Nameplate_C_ExecuteUbergraph_TeamMemberPedestal_Nameplate::K2Node_Select_Default_6' has a wrong offset!");

struct TeamMemberPedestal_Nameplate_C_BP_OnTeamMemberEstablished final
{
public:
	bool                                          bHasValidMember;
};
static_assert(alignof(TeamMemberPedestal_Nameplate_C_BP_OnTeamMemberEstablished) == 0x000001, "Wrong alignment on TeamMemberPedestal_Nameplate_C_BP_OnTeamMemberEstablished");
static_assert(sizeof(TeamMemberPedestal_Nameplate_C_BP_OnTeamMemberEstablished) == 0x000001, "Wrong size on TeamMemberPedestal_Nameplate_C_BP_OnTeamMemberEstablished");
static_assert(offsetof(TeamMemberPedestal_Nameplate_C_BP_OnTeamMemberEstablished, bHasValidMember) == 0x000000, "Member 'TeamMemberPedestal_Nameplate_C_BP_OnTeamMemberEstablished::bHasValidMember' has a wrong offset!");

}
