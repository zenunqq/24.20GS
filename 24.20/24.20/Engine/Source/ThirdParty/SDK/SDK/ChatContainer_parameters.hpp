#pragma once

#include "Basic.hpp"

#include "FortniteGame_structs.hpp"
#include "SlateCore_structs.hpp"
#include "InputCore_structs.hpp"
#include "UMG_structs.hpp"

namespace SDK::Params
{

struct ChatContainer_C_BndEvt__ChatContainer_ChatList_Messages_K2Node_ComponentBoundEvent_1_OnListEntryGeneratedDynamic__DelegateSignature final
{
public:
	class UUserWidget*                            Widget;
};
static_assert(alignof(ChatContainer_C_BndEvt__ChatContainer_ChatList_Messages_K2Node_ComponentBoundEvent_1_OnListEntryGeneratedDynamic__DelegateSignature) == 0x000008, "Wrong alignment on ChatContainer_C_BndEvt__ChatContainer_ChatList_Messages_K2Node_ComponentBoundEvent_1_OnListEntryGeneratedDynamic__DelegateSignature");
static_assert(sizeof(ChatContainer_C_BndEvt__ChatContainer_ChatList_Messages_K2Node_ComponentBoundEvent_1_OnListEntryGeneratedDynamic__DelegateSignature) == 0x000008, "Wrong size on ChatContainer_C_BndEvt__ChatContainer_ChatList_Messages_K2Node_ComponentBoundEvent_1_OnListEntryGeneratedDynamic__DelegateSignature");
static_assert(offsetof(ChatContainer_C_BndEvt__ChatContainer_ChatList_Messages_K2Node_ComponentBoundEvent_1_OnListEntryGeneratedDynamic__DelegateSignature, Widget) == 0x000000, "Member 'ChatContainer_C_BndEvt__ChatContainer_ChatList_Messages_K2Node_ComponentBoundEvent_1_OnListEntryGeneratedDynamic__DelegateSignature::Widget' has a wrong offset!");

struct ChatContainer_C_BndEvt__ChatContainer_ConsoleChatShortcut_K2Node_ComponentBoundEvent_2_CommonButtonBaseClicked__DelegateSignature final
{
public:
	class UCommonButtonBase*                      Button;
};
static_assert(alignof(ChatContainer_C_BndEvt__ChatContainer_ConsoleChatShortcut_K2Node_ComponentBoundEvent_2_CommonButtonBaseClicked__DelegateSignature) == 0x000008, "Wrong alignment on ChatContainer_C_BndEvt__ChatContainer_ConsoleChatShortcut_K2Node_ComponentBoundEvent_2_CommonButtonBaseClicked__DelegateSignature");
static_assert(sizeof(ChatContainer_C_BndEvt__ChatContainer_ConsoleChatShortcut_K2Node_ComponentBoundEvent_2_CommonButtonBaseClicked__DelegateSignature) == 0x000008, "Wrong size on ChatContainer_C_BndEvt__ChatContainer_ConsoleChatShortcut_K2Node_ComponentBoundEvent_2_CommonButtonBaseClicked__DelegateSignature");
static_assert(offsetof(ChatContainer_C_BndEvt__ChatContainer_ConsoleChatShortcut_K2Node_ComponentBoundEvent_2_CommonButtonBaseClicked__DelegateSignature, Button) == 0x000000, "Member 'ChatContainer_C_BndEvt__ChatContainer_ConsoleChatShortcut_K2Node_ComponentBoundEvent_2_CommonButtonBaseClicked__DelegateSignature::Button' has a wrong offset!");

struct ChatContainer_C_ExecuteUbergraph_ChatContainer final
{
public:
	int32                                         EntryPoint;
	uint8                                         Pad_4[0x4];
	class UFortHUDContext*                        CallFunc_GetContext_ReturnValue;
	bool                                          Temp_bool_Variable;
	bool                                          CallFunc_IsInCursorMode_ReturnValue;
	ESlateVisibility                              Temp_byte_Variable;
	bool                                          CallFunc_Not_PreBool_ReturnValue;
	ESlateVisibility                              Temp_byte_Variable_1;
	uint8                                         Pad_15[0x3];
	class UFortGlobalUIContext*                   CallFunc_GetContext_ReturnValue_1;
	bool                                          CallFunc_IsUsingGamepad_ReturnValue;
	uint8                                         Pad_21[0x7];
	class UFortHUDContext*                        CallFunc_GetContext_ReturnValue_2;
	bool                                          Temp_bool_Variable_1;
	uint8                                         Pad_31[0x3];
	TDelegate<void(bool bCursorModeEnabled, class FName ActionName, class UUserWidget* CursorModeContentWidget)> K2Node_CreateDelegate_OutputDelegate;
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_1;
	uint8                                         Pad_4C[0x4];
	class UFortHUDContext*                        CallFunc_GetContext_ReturnValue_3;
	class UFortGlobalUIContext*                   CallFunc_GetContext_ReturnValue_4;
	bool                                          Temp_bool_Variable_2;
	bool                                          CallFunc_IsInZone_ReturnValue;
	uint8                                         Pad_62[0x6];
	struct FGeometry                              K2Node_Event_MyGeometry_1;
	float                                         K2Node_Event_InDeltaTime;
	bool                                          CallFunc_BooleanAND_ReturnValue;
	bool                                          K2Node_Event_bShouldBeOpen;
	uint8                                         Pad_AE[0x2];
	class UUserWidget*                            K2Node_ComponentBoundEvent_Widget;
	bool                                          K2Node_Event_bShowSendButton;
	uint8                                         Pad_B9[0x7];
	class UWidget*                                K2Node_Select_Default;
	ESlateVisibility                              K2Node_Select_Default_1;
	uint8                                         Pad_C9[0x7];
	class UCommonButtonBase*                      K2Node_ComponentBoundEvent_Button;
	struct FGeometry                              K2Node_Event_MyGeometry;
	struct FPointerEvent                          K2Node_Event_MouseEvent_1;
	class UWidget*                                K2Node_Select_Default_2;
	struct FPointerEvent                          K2Node_Event_MouseEvent;
};
static_assert(alignof(ChatContainer_C_ExecuteUbergraph_ChatContainer) == 0x000008, "Wrong alignment on ChatContainer_C_ExecuteUbergraph_ChatContainer");
static_assert(sizeof(ChatContainer_C_ExecuteUbergraph_ChatContainer) == 0x000250, "Wrong size on ChatContainer_C_ExecuteUbergraph_ChatContainer");
static_assert(offsetof(ChatContainer_C_ExecuteUbergraph_ChatContainer, EntryPoint) == 0x000000, "Member 'ChatContainer_C_ExecuteUbergraph_ChatContainer::EntryPoint' has a wrong offset!");
static_assert(offsetof(ChatContainer_C_ExecuteUbergraph_ChatContainer, CallFunc_GetContext_ReturnValue) == 0x000008, "Member 'ChatContainer_C_ExecuteUbergraph_ChatContainer::CallFunc_GetContext_ReturnValue' has a wrong offset!");
static_assert(offsetof(ChatContainer_C_ExecuteUbergraph_ChatContainer, Temp_bool_Variable) == 0x000010, "Member 'ChatContainer_C_ExecuteUbergraph_ChatContainer::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(ChatContainer_C_ExecuteUbergraph_ChatContainer, CallFunc_IsInCursorMode_ReturnValue) == 0x000011, "Member 'ChatContainer_C_ExecuteUbergraph_ChatContainer::CallFunc_IsInCursorMode_ReturnValue' has a wrong offset!");
static_assert(offsetof(ChatContainer_C_ExecuteUbergraph_ChatContainer, Temp_byte_Variable) == 0x000012, "Member 'ChatContainer_C_ExecuteUbergraph_ChatContainer::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(ChatContainer_C_ExecuteUbergraph_ChatContainer, CallFunc_Not_PreBool_ReturnValue) == 0x000013, "Member 'ChatContainer_C_ExecuteUbergraph_ChatContainer::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(ChatContainer_C_ExecuteUbergraph_ChatContainer, Temp_byte_Variable_1) == 0x000014, "Member 'ChatContainer_C_ExecuteUbergraph_ChatContainer::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(ChatContainer_C_ExecuteUbergraph_ChatContainer, CallFunc_GetContext_ReturnValue_1) == 0x000018, "Member 'ChatContainer_C_ExecuteUbergraph_ChatContainer::CallFunc_GetContext_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(ChatContainer_C_ExecuteUbergraph_ChatContainer, CallFunc_IsUsingGamepad_ReturnValue) == 0x000020, "Member 'ChatContainer_C_ExecuteUbergraph_ChatContainer::CallFunc_IsUsingGamepad_ReturnValue' has a wrong offset!");
static_assert(offsetof(ChatContainer_C_ExecuteUbergraph_ChatContainer, CallFunc_GetContext_ReturnValue_2) == 0x000028, "Member 'ChatContainer_C_ExecuteUbergraph_ChatContainer::CallFunc_GetContext_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(ChatContainer_C_ExecuteUbergraph_ChatContainer, Temp_bool_Variable_1) == 0x000030, "Member 'ChatContainer_C_ExecuteUbergraph_ChatContainer::Temp_bool_Variable_1' has a wrong offset!");
static_assert(offsetof(ChatContainer_C_ExecuteUbergraph_ChatContainer, K2Node_CreateDelegate_OutputDelegate) == 0x000034, "Member 'ChatContainer_C_ExecuteUbergraph_ChatContainer::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(ChatContainer_C_ExecuteUbergraph_ChatContainer, K2Node_CreateDelegate_OutputDelegate_1) == 0x000040, "Member 'ChatContainer_C_ExecuteUbergraph_ChatContainer::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(ChatContainer_C_ExecuteUbergraph_ChatContainer, CallFunc_GetContext_ReturnValue_3) == 0x000050, "Member 'ChatContainer_C_ExecuteUbergraph_ChatContainer::CallFunc_GetContext_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(ChatContainer_C_ExecuteUbergraph_ChatContainer, CallFunc_GetContext_ReturnValue_4) == 0x000058, "Member 'ChatContainer_C_ExecuteUbergraph_ChatContainer::CallFunc_GetContext_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(ChatContainer_C_ExecuteUbergraph_ChatContainer, Temp_bool_Variable_2) == 0x000060, "Member 'ChatContainer_C_ExecuteUbergraph_ChatContainer::Temp_bool_Variable_2' has a wrong offset!");
static_assert(offsetof(ChatContainer_C_ExecuteUbergraph_ChatContainer, CallFunc_IsInZone_ReturnValue) == 0x000061, "Member 'ChatContainer_C_ExecuteUbergraph_ChatContainer::CallFunc_IsInZone_ReturnValue' has a wrong offset!");
static_assert(offsetof(ChatContainer_C_ExecuteUbergraph_ChatContainer, K2Node_Event_MyGeometry_1) == 0x000068, "Member 'ChatContainer_C_ExecuteUbergraph_ChatContainer::K2Node_Event_MyGeometry_1' has a wrong offset!");
static_assert(offsetof(ChatContainer_C_ExecuteUbergraph_ChatContainer, K2Node_Event_InDeltaTime) == 0x0000A8, "Member 'ChatContainer_C_ExecuteUbergraph_ChatContainer::K2Node_Event_InDeltaTime' has a wrong offset!");
static_assert(offsetof(ChatContainer_C_ExecuteUbergraph_ChatContainer, CallFunc_BooleanAND_ReturnValue) == 0x0000AC, "Member 'ChatContainer_C_ExecuteUbergraph_ChatContainer::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(ChatContainer_C_ExecuteUbergraph_ChatContainer, K2Node_Event_bShouldBeOpen) == 0x0000AD, "Member 'ChatContainer_C_ExecuteUbergraph_ChatContainer::K2Node_Event_bShouldBeOpen' has a wrong offset!");
static_assert(offsetof(ChatContainer_C_ExecuteUbergraph_ChatContainer, K2Node_ComponentBoundEvent_Widget) == 0x0000B0, "Member 'ChatContainer_C_ExecuteUbergraph_ChatContainer::K2Node_ComponentBoundEvent_Widget' has a wrong offset!");
static_assert(offsetof(ChatContainer_C_ExecuteUbergraph_ChatContainer, K2Node_Event_bShowSendButton) == 0x0000B8, "Member 'ChatContainer_C_ExecuteUbergraph_ChatContainer::K2Node_Event_bShowSendButton' has a wrong offset!");
static_assert(offsetof(ChatContainer_C_ExecuteUbergraph_ChatContainer, K2Node_Select_Default) == 0x0000C0, "Member 'ChatContainer_C_ExecuteUbergraph_ChatContainer::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(ChatContainer_C_ExecuteUbergraph_ChatContainer, K2Node_Select_Default_1) == 0x0000C8, "Member 'ChatContainer_C_ExecuteUbergraph_ChatContainer::K2Node_Select_Default_1' has a wrong offset!");
static_assert(offsetof(ChatContainer_C_ExecuteUbergraph_ChatContainer, K2Node_ComponentBoundEvent_Button) == 0x0000D0, "Member 'ChatContainer_C_ExecuteUbergraph_ChatContainer::K2Node_ComponentBoundEvent_Button' has a wrong offset!");
static_assert(offsetof(ChatContainer_C_ExecuteUbergraph_ChatContainer, K2Node_Event_MyGeometry) == 0x0000D8, "Member 'ChatContainer_C_ExecuteUbergraph_ChatContainer::K2Node_Event_MyGeometry' has a wrong offset!");
static_assert(offsetof(ChatContainer_C_ExecuteUbergraph_ChatContainer, K2Node_Event_MouseEvent_1) == 0x000118, "Member 'ChatContainer_C_ExecuteUbergraph_ChatContainer::K2Node_Event_MouseEvent_1' has a wrong offset!");
static_assert(offsetof(ChatContainer_C_ExecuteUbergraph_ChatContainer, K2Node_Select_Default_2) == 0x0001B0, "Member 'ChatContainer_C_ExecuteUbergraph_ChatContainer::K2Node_Select_Default_2' has a wrong offset!");
static_assert(offsetof(ChatContainer_C_ExecuteUbergraph_ChatContainer, K2Node_Event_MouseEvent) == 0x0001B8, "Member 'ChatContainer_C_ExecuteUbergraph_ChatContainer::K2Node_Event_MouseEvent' has a wrong offset!");

struct ChatContainer_C_HandleChatOpenChanged final
{
public:
	bool                                          bChatShouldBeOpen;
	bool                                          NewLocalVar_0;
	ESlateVisibility                              Temp_byte_Variable;
	ESlateVisibility                              Temp_byte_Variable_1;
	bool                                          Temp_bool_Variable;
	ESlateVisibility                              Temp_byte_Variable_2;
	ESlateVisibility                              Temp_byte_Variable_3;
	bool                                          Temp_bool_Variable_1;
	EUMGSequencePlayMode                          Temp_byte_Variable_4;
	ESlateVisibility                              K2Node_Select_Default;
	EUMGSequencePlayMode                          Temp_byte_Variable_5;
	bool                                          Temp_bool_Variable_2;
	EUMGSequencePlayMode                          Temp_byte_Variable_6;
	EUMGSequencePlayMode                          Temp_byte_Variable_7;
	uint8                                         Pad_E[0x2];
	class FText                                   CallFunc_GetTextChatDisabledText_ReturnValue;
	bool                                          CallFunc_IsTextChatRestricted_ReturnValue;
	bool                                          CallFunc_BooleanAND_ReturnValue;
	bool                                          CallFunc_Not_PreBool_ReturnValue;
	EUMGSequencePlayMode                          K2Node_Select_Default_1;
	EUMGSequencePlayMode                          K2Node_Select_Default_2;
	uint8                                         Pad_2D[0x3];
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;
	bool                                          Temp_bool_Variable_3;
	bool                                          CallFunc_IsAnimationPlaying_ReturnValue;
	ESlateVisibility                              K2Node_Select_Default_3;
	uint8                                         Pad_3B[0x5];
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue_1;
	bool                                          CallFunc_IsAnimationPlaying_ReturnValue_1;
};
static_assert(alignof(ChatContainer_C_HandleChatOpenChanged) == 0x000008, "Wrong alignment on ChatContainer_C_HandleChatOpenChanged");
static_assert(sizeof(ChatContainer_C_HandleChatOpenChanged) == 0x000050, "Wrong size on ChatContainer_C_HandleChatOpenChanged");
static_assert(offsetof(ChatContainer_C_HandleChatOpenChanged, bChatShouldBeOpen) == 0x000000, "Member 'ChatContainer_C_HandleChatOpenChanged::bChatShouldBeOpen' has a wrong offset!");
static_assert(offsetof(ChatContainer_C_HandleChatOpenChanged, NewLocalVar_0) == 0x000001, "Member 'ChatContainer_C_HandleChatOpenChanged::NewLocalVar_0' has a wrong offset!");
static_assert(offsetof(ChatContainer_C_HandleChatOpenChanged, Temp_byte_Variable) == 0x000002, "Member 'ChatContainer_C_HandleChatOpenChanged::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(ChatContainer_C_HandleChatOpenChanged, Temp_byte_Variable_1) == 0x000003, "Member 'ChatContainer_C_HandleChatOpenChanged::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(ChatContainer_C_HandleChatOpenChanged, Temp_bool_Variable) == 0x000004, "Member 'ChatContainer_C_HandleChatOpenChanged::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(ChatContainer_C_HandleChatOpenChanged, Temp_byte_Variable_2) == 0x000005, "Member 'ChatContainer_C_HandleChatOpenChanged::Temp_byte_Variable_2' has a wrong offset!");
static_assert(offsetof(ChatContainer_C_HandleChatOpenChanged, Temp_byte_Variable_3) == 0x000006, "Member 'ChatContainer_C_HandleChatOpenChanged::Temp_byte_Variable_3' has a wrong offset!");
static_assert(offsetof(ChatContainer_C_HandleChatOpenChanged, Temp_bool_Variable_1) == 0x000007, "Member 'ChatContainer_C_HandleChatOpenChanged::Temp_bool_Variable_1' has a wrong offset!");
static_assert(offsetof(ChatContainer_C_HandleChatOpenChanged, Temp_byte_Variable_4) == 0x000008, "Member 'ChatContainer_C_HandleChatOpenChanged::Temp_byte_Variable_4' has a wrong offset!");
static_assert(offsetof(ChatContainer_C_HandleChatOpenChanged, K2Node_Select_Default) == 0x000009, "Member 'ChatContainer_C_HandleChatOpenChanged::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(ChatContainer_C_HandleChatOpenChanged, Temp_byte_Variable_5) == 0x00000A, "Member 'ChatContainer_C_HandleChatOpenChanged::Temp_byte_Variable_5' has a wrong offset!");
static_assert(offsetof(ChatContainer_C_HandleChatOpenChanged, Temp_bool_Variable_2) == 0x00000B, "Member 'ChatContainer_C_HandleChatOpenChanged::Temp_bool_Variable_2' has a wrong offset!");
static_assert(offsetof(ChatContainer_C_HandleChatOpenChanged, Temp_byte_Variable_6) == 0x00000C, "Member 'ChatContainer_C_HandleChatOpenChanged::Temp_byte_Variable_6' has a wrong offset!");
static_assert(offsetof(ChatContainer_C_HandleChatOpenChanged, Temp_byte_Variable_7) == 0x00000D, "Member 'ChatContainer_C_HandleChatOpenChanged::Temp_byte_Variable_7' has a wrong offset!");
static_assert(offsetof(ChatContainer_C_HandleChatOpenChanged, CallFunc_GetTextChatDisabledText_ReturnValue) == 0x000010, "Member 'ChatContainer_C_HandleChatOpenChanged::CallFunc_GetTextChatDisabledText_ReturnValue' has a wrong offset!");
static_assert(offsetof(ChatContainer_C_HandleChatOpenChanged, CallFunc_IsTextChatRestricted_ReturnValue) == 0x000028, "Member 'ChatContainer_C_HandleChatOpenChanged::CallFunc_IsTextChatRestricted_ReturnValue' has a wrong offset!");
static_assert(offsetof(ChatContainer_C_HandleChatOpenChanged, CallFunc_BooleanAND_ReturnValue) == 0x000029, "Member 'ChatContainer_C_HandleChatOpenChanged::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(ChatContainer_C_HandleChatOpenChanged, CallFunc_Not_PreBool_ReturnValue) == 0x00002A, "Member 'ChatContainer_C_HandleChatOpenChanged::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(ChatContainer_C_HandleChatOpenChanged, K2Node_Select_Default_1) == 0x00002B, "Member 'ChatContainer_C_HandleChatOpenChanged::K2Node_Select_Default_1' has a wrong offset!");
static_assert(offsetof(ChatContainer_C_HandleChatOpenChanged, K2Node_Select_Default_2) == 0x00002C, "Member 'ChatContainer_C_HandleChatOpenChanged::K2Node_Select_Default_2' has a wrong offset!");
static_assert(offsetof(ChatContainer_C_HandleChatOpenChanged, CallFunc_PlayAnimation_ReturnValue) == 0x000030, "Member 'ChatContainer_C_HandleChatOpenChanged::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");
static_assert(offsetof(ChatContainer_C_HandleChatOpenChanged, Temp_bool_Variable_3) == 0x000038, "Member 'ChatContainer_C_HandleChatOpenChanged::Temp_bool_Variable_3' has a wrong offset!");
static_assert(offsetof(ChatContainer_C_HandleChatOpenChanged, CallFunc_IsAnimationPlaying_ReturnValue) == 0x000039, "Member 'ChatContainer_C_HandleChatOpenChanged::CallFunc_IsAnimationPlaying_ReturnValue' has a wrong offset!");
static_assert(offsetof(ChatContainer_C_HandleChatOpenChanged, K2Node_Select_Default_3) == 0x00003A, "Member 'ChatContainer_C_HandleChatOpenChanged::K2Node_Select_Default_3' has a wrong offset!");
static_assert(offsetof(ChatContainer_C_HandleChatOpenChanged, CallFunc_PlayAnimation_ReturnValue_1) == 0x000040, "Member 'ChatContainer_C_HandleChatOpenChanged::CallFunc_PlayAnimation_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(ChatContainer_C_HandleChatOpenChanged, CallFunc_IsAnimationPlaying_ReturnValue_1) == 0x000048, "Member 'ChatContainer_C_HandleChatOpenChanged::CallFunc_IsAnimationPlaying_ReturnValue_1' has a wrong offset!");

struct ChatContainer_C_HandleCursorModeChanged final
{
public:
	bool                                          bEnabled;
	uint8                                         Pad_1[0x3];
	class FName                                   ActionName;
	class UUserWidget*                            Widget;
	bool                                          Temp_bool_Variable;
	uint8                                         Pad_11[0x7];
	class UWidget*                                K2Node_Select_Default;
};
static_assert(alignof(ChatContainer_C_HandleCursorModeChanged) == 0x000008, "Wrong alignment on ChatContainer_C_HandleCursorModeChanged");
static_assert(sizeof(ChatContainer_C_HandleCursorModeChanged) == 0x000020, "Wrong size on ChatContainer_C_HandleCursorModeChanged");
static_assert(offsetof(ChatContainer_C_HandleCursorModeChanged, bEnabled) == 0x000000, "Member 'ChatContainer_C_HandleCursorModeChanged::bEnabled' has a wrong offset!");
static_assert(offsetof(ChatContainer_C_HandleCursorModeChanged, ActionName) == 0x000004, "Member 'ChatContainer_C_HandleCursorModeChanged::ActionName' has a wrong offset!");
static_assert(offsetof(ChatContainer_C_HandleCursorModeChanged, Widget) == 0x000008, "Member 'ChatContainer_C_HandleCursorModeChanged::Widget' has a wrong offset!");
static_assert(offsetof(ChatContainer_C_HandleCursorModeChanged, Temp_bool_Variable) == 0x000010, "Member 'ChatContainer_C_HandleCursorModeChanged::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(ChatContainer_C_HandleCursorModeChanged, K2Node_Select_Default) == 0x000018, "Member 'ChatContainer_C_HandleCursorModeChanged::K2Node_Select_Default' has a wrong offset!");

struct ChatContainer_C_OnChatOpenChanged final
{
public:
	bool                                          bShouldBeOpen;
};
static_assert(alignof(ChatContainer_C_OnChatOpenChanged) == 0x000001, "Wrong alignment on ChatContainer_C_OnChatOpenChanged");
static_assert(sizeof(ChatContainer_C_OnChatOpenChanged) == 0x000001, "Wrong size on ChatContainer_C_OnChatOpenChanged");
static_assert(offsetof(ChatContainer_C_OnChatOpenChanged, bShouldBeOpen) == 0x000000, "Member 'ChatContainer_C_OnChatOpenChanged::bShouldBeOpen' has a wrong offset!");

struct ChatContainer_C_OnKeyDown final
{
public:
	struct FGeometry                              MyGeometry;
	struct FKeyEvent                              InKeyEvent;
	struct FEventReply                            ReturnValue;
	struct FEventReply                            CallFunc_Handled_ReturnValue;
	struct FKey                                   CallFunc_GetKey_ReturnValue;
	bool                                          CallFunc_EqualEqual_KeyKey_ReturnValue;
	uint8                                         Pad_209[0x7];
	struct FEventReply                            CallFunc_Unhandled_ReturnValue;
};
static_assert(alignof(ChatContainer_C_OnKeyDown) == 0x000008, "Wrong alignment on ChatContainer_C_OnKeyDown");
static_assert(sizeof(ChatContainer_C_OnKeyDown) == 0x0002C8, "Wrong size on ChatContainer_C_OnKeyDown");
static_assert(offsetof(ChatContainer_C_OnKeyDown, MyGeometry) == 0x000000, "Member 'ChatContainer_C_OnKeyDown::MyGeometry' has a wrong offset!");
static_assert(offsetof(ChatContainer_C_OnKeyDown, InKeyEvent) == 0x000040, "Member 'ChatContainer_C_OnKeyDown::InKeyEvent' has a wrong offset!");
static_assert(offsetof(ChatContainer_C_OnKeyDown, ReturnValue) == 0x000080, "Member 'ChatContainer_C_OnKeyDown::ReturnValue' has a wrong offset!");
static_assert(offsetof(ChatContainer_C_OnKeyDown, CallFunc_Handled_ReturnValue) == 0x000138, "Member 'ChatContainer_C_OnKeyDown::CallFunc_Handled_ReturnValue' has a wrong offset!");
static_assert(offsetof(ChatContainer_C_OnKeyDown, CallFunc_GetKey_ReturnValue) == 0x0001F0, "Member 'ChatContainer_C_OnKeyDown::CallFunc_GetKey_ReturnValue' has a wrong offset!");
static_assert(offsetof(ChatContainer_C_OnKeyDown, CallFunc_EqualEqual_KeyKey_ReturnValue) == 0x000208, "Member 'ChatContainer_C_OnKeyDown::CallFunc_EqualEqual_KeyKey_ReturnValue' has a wrong offset!");
static_assert(offsetof(ChatContainer_C_OnKeyDown, CallFunc_Unhandled_ReturnValue) == 0x000210, "Member 'ChatContainer_C_OnKeyDown::CallFunc_Unhandled_ReturnValue' has a wrong offset!");

struct ChatContainer_C_OnMouseEnter final
{
public:
	struct FGeometry                              MyGeometry;
	struct FPointerEvent                          MouseEvent;
};
static_assert(alignof(ChatContainer_C_OnMouseEnter) == 0x000008, "Wrong alignment on ChatContainer_C_OnMouseEnter");
static_assert(sizeof(ChatContainer_C_OnMouseEnter) == 0x0000D8, "Wrong size on ChatContainer_C_OnMouseEnter");
static_assert(offsetof(ChatContainer_C_OnMouseEnter, MyGeometry) == 0x000000, "Member 'ChatContainer_C_OnMouseEnter::MyGeometry' has a wrong offset!");
static_assert(offsetof(ChatContainer_C_OnMouseEnter, MouseEvent) == 0x000040, "Member 'ChatContainer_C_OnMouseEnter::MouseEvent' has a wrong offset!");

struct ChatContainer_C_OnMouseLeave final
{
public:
	struct FPointerEvent                          MouseEvent;
};
static_assert(alignof(ChatContainer_C_OnMouseLeave) == 0x000008, "Wrong alignment on ChatContainer_C_OnMouseLeave");
static_assert(sizeof(ChatContainer_C_OnMouseLeave) == 0x000098, "Wrong size on ChatContainer_C_OnMouseLeave");
static_assert(offsetof(ChatContainer_C_OnMouseLeave, MouseEvent) == 0x000000, "Member 'ChatContainer_C_OnMouseLeave::MouseEvent' has a wrong offset!");

struct ChatContainer_C_OnSendButtonDisplayChanged final
{
public:
	bool                                          bShowSendButton;
};
static_assert(alignof(ChatContainer_C_OnSendButtonDisplayChanged) == 0x000001, "Wrong alignment on ChatContainer_C_OnSendButtonDisplayChanged");
static_assert(sizeof(ChatContainer_C_OnSendButtonDisplayChanged) == 0x000001, "Wrong size on ChatContainer_C_OnSendButtonDisplayChanged");
static_assert(offsetof(ChatContainer_C_OnSendButtonDisplayChanged, bShowSendButton) == 0x000000, "Member 'ChatContainer_C_OnSendButtonDisplayChanged::bShowSendButton' has a wrong offset!");

struct ChatContainer_C_SetChatBoxStyle final
{
public:
	ESubGame                                      Temp_byte_Variable;
	uint8                                         Pad_1[0x7];
	class UMaterialInterface*                     Temp_object_Variable;
	class UMaterialInterface*                     Temp_object_Variable_1;
	class UMaterialInterface*                     Temp_object_Variable_2;
	class UMaterialInterface*                     Temp_object_Variable_3;
	class UMaterialInterface*                     Temp_object_Variable_4;
	ESubGame                                      CallFunc_GetCurrentSubGame_ReturnValue;
	uint8                                         Pad_31[0x7];
	class UMaterialInterface*                     K2Node_Select_Default;
};
static_assert(alignof(ChatContainer_C_SetChatBoxStyle) == 0x000008, "Wrong alignment on ChatContainer_C_SetChatBoxStyle");
static_assert(sizeof(ChatContainer_C_SetChatBoxStyle) == 0x000040, "Wrong size on ChatContainer_C_SetChatBoxStyle");
static_assert(offsetof(ChatContainer_C_SetChatBoxStyle, Temp_byte_Variable) == 0x000000, "Member 'ChatContainer_C_SetChatBoxStyle::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(ChatContainer_C_SetChatBoxStyle, Temp_object_Variable) == 0x000008, "Member 'ChatContainer_C_SetChatBoxStyle::Temp_object_Variable' has a wrong offset!");
static_assert(offsetof(ChatContainer_C_SetChatBoxStyle, Temp_object_Variable_1) == 0x000010, "Member 'ChatContainer_C_SetChatBoxStyle::Temp_object_Variable_1' has a wrong offset!");
static_assert(offsetof(ChatContainer_C_SetChatBoxStyle, Temp_object_Variable_2) == 0x000018, "Member 'ChatContainer_C_SetChatBoxStyle::Temp_object_Variable_2' has a wrong offset!");
static_assert(offsetof(ChatContainer_C_SetChatBoxStyle, Temp_object_Variable_3) == 0x000020, "Member 'ChatContainer_C_SetChatBoxStyle::Temp_object_Variable_3' has a wrong offset!");
static_assert(offsetof(ChatContainer_C_SetChatBoxStyle, Temp_object_Variable_4) == 0x000028, "Member 'ChatContainer_C_SetChatBoxStyle::Temp_object_Variable_4' has a wrong offset!");
static_assert(offsetof(ChatContainer_C_SetChatBoxStyle, CallFunc_GetCurrentSubGame_ReturnValue) == 0x000030, "Member 'ChatContainer_C_SetChatBoxStyle::CallFunc_GetCurrentSubGame_ReturnValue' has a wrong offset!");
static_assert(offsetof(ChatContainer_C_SetChatBoxStyle, K2Node_Select_Default) == 0x000038, "Member 'ChatContainer_C_SetChatBoxStyle::K2Node_Select_Default' has a wrong offset!");

struct ChatContainer_C_Tick final
{
public:
	struct FGeometry                              MyGeometry;
	float                                         InDeltaTime;
};
static_assert(alignof(ChatContainer_C_Tick) == 0x000008, "Wrong alignment on ChatContainer_C_Tick");
static_assert(sizeof(ChatContainer_C_Tick) == 0x000048, "Wrong size on ChatContainer_C_Tick");
static_assert(offsetof(ChatContainer_C_Tick, MyGeometry) == 0x000000, "Member 'ChatContainer_C_Tick::MyGeometry' has a wrong offset!");
static_assert(offsetof(ChatContainer_C_Tick, InDeltaTime) == 0x000040, "Member 'ChatContainer_C_Tick::InDeltaTime' has a wrong offset!");

struct ChatContainer_C_TransitionState final
{
public:
	class UWidgetAnimation*                       TransitionAnimation;
	double                                        TransitionTime;
	bool                                          PlayForward;
	bool                                          CallFunc_NotEqual_DoubleDouble_ReturnValue;
	uint8                                         Pad_12[0x6];
	double                                        CallFunc_SafeDivide_ReturnValue;
	double                                        CallFunc_SelectFloat_ReturnValue;
	class UUMGSequencePlayer*                     CallFunc_PlayAnimationForward_ReturnValue;
	class UUMGSequencePlayer*                     CallFunc_PlayAnimationReverse_ReturnValue;
	float                                         CallFunc_PlayAnimationForward_PlaybackSpeed_ImplicitCast;
	float                                         CallFunc_PlayAnimationReverse_PlaybackSpeed_ImplicitCast;
};
static_assert(alignof(ChatContainer_C_TransitionState) == 0x000008, "Wrong alignment on ChatContainer_C_TransitionState");
static_assert(sizeof(ChatContainer_C_TransitionState) == 0x000040, "Wrong size on ChatContainer_C_TransitionState");
static_assert(offsetof(ChatContainer_C_TransitionState, TransitionAnimation) == 0x000000, "Member 'ChatContainer_C_TransitionState::TransitionAnimation' has a wrong offset!");
static_assert(offsetof(ChatContainer_C_TransitionState, TransitionTime) == 0x000008, "Member 'ChatContainer_C_TransitionState::TransitionTime' has a wrong offset!");
static_assert(offsetof(ChatContainer_C_TransitionState, PlayForward) == 0x000010, "Member 'ChatContainer_C_TransitionState::PlayForward' has a wrong offset!");
static_assert(offsetof(ChatContainer_C_TransitionState, CallFunc_NotEqual_DoubleDouble_ReturnValue) == 0x000011, "Member 'ChatContainer_C_TransitionState::CallFunc_NotEqual_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(ChatContainer_C_TransitionState, CallFunc_SafeDivide_ReturnValue) == 0x000018, "Member 'ChatContainer_C_TransitionState::CallFunc_SafeDivide_ReturnValue' has a wrong offset!");
static_assert(offsetof(ChatContainer_C_TransitionState, CallFunc_SelectFloat_ReturnValue) == 0x000020, "Member 'ChatContainer_C_TransitionState::CallFunc_SelectFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(ChatContainer_C_TransitionState, CallFunc_PlayAnimationForward_ReturnValue) == 0x000028, "Member 'ChatContainer_C_TransitionState::CallFunc_PlayAnimationForward_ReturnValue' has a wrong offset!");
static_assert(offsetof(ChatContainer_C_TransitionState, CallFunc_PlayAnimationReverse_ReturnValue) == 0x000030, "Member 'ChatContainer_C_TransitionState::CallFunc_PlayAnimationReverse_ReturnValue' has a wrong offset!");
static_assert(offsetof(ChatContainer_C_TransitionState, CallFunc_PlayAnimationForward_PlaybackSpeed_ImplicitCast) == 0x000038, "Member 'ChatContainer_C_TransitionState::CallFunc_PlayAnimationForward_PlaybackSpeed_ImplicitCast' has a wrong offset!");
static_assert(offsetof(ChatContainer_C_TransitionState, CallFunc_PlayAnimationReverse_PlaybackSpeed_ImplicitCast) == 0x00003C, "Member 'ChatContainer_C_TransitionState::CallFunc_PlayAnimationReverse_PlaybackSpeed_ImplicitCast' has a wrong offset!");

}
