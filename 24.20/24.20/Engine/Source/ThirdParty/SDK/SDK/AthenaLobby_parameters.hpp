#pragma once

#include "Basic.hpp"

#include "FortniteUI_structs.hpp"
#include "CommonInput_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "FortniteGame_structs.hpp"
#include "UMG_structs.hpp"
#include "Engine_structs.hpp"
#include "SlateCore_structs.hpp"

namespace SDK::Params
{

struct AthenaLobby_C_ConfigureGenericLinkButton final
{
public:
	bool                                          Temp_bool_Variable;
	uint8                                         Pad_1[0x7];
	class FText                                   Temp_text_Variable;
	TScriptInterface<class IFortClientAnnouncement_TutorialInterface> K2Node_DynamicCast_AsFort_Client_Announcement_Tutorial_Interface;
	bool                                          K2Node_DynamicCast_bSuccess;
	uint8                                         Pad_31[0x7];
	class UFortRuntimeOptions*                    CallFunc_GetRuntimeOptions_ReturnValue;
	class FText                                   CallFunc_GetLobbyGenericLinkButtonOverrideText_ReturnValue;
	bool                                          CallFunc_TextIsEmpty_ReturnValue;
	uint8                                         Pad_59[0x7];
	class FText                                   K2Node_Select_Default;
};
static_assert(alignof(AthenaLobby_C_ConfigureGenericLinkButton) == 0x000008, "Wrong alignment on AthenaLobby_C_ConfigureGenericLinkButton");
static_assert(sizeof(AthenaLobby_C_ConfigureGenericLinkButton) == 0x000078, "Wrong size on AthenaLobby_C_ConfigureGenericLinkButton");
static_assert(offsetof(AthenaLobby_C_ConfigureGenericLinkButton, Temp_bool_Variable) == 0x000000, "Member 'AthenaLobby_C_ConfigureGenericLinkButton::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(AthenaLobby_C_ConfigureGenericLinkButton, Temp_text_Variable) == 0x000008, "Member 'AthenaLobby_C_ConfigureGenericLinkButton::Temp_text_Variable' has a wrong offset!");
static_assert(offsetof(AthenaLobby_C_ConfigureGenericLinkButton, K2Node_DynamicCast_AsFort_Client_Announcement_Tutorial_Interface) == 0x000020, "Member 'AthenaLobby_C_ConfigureGenericLinkButton::K2Node_DynamicCast_AsFort_Client_Announcement_Tutorial_Interface' has a wrong offset!");
static_assert(offsetof(AthenaLobby_C_ConfigureGenericLinkButton, K2Node_DynamicCast_bSuccess) == 0x000030, "Member 'AthenaLobby_C_ConfigureGenericLinkButton::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(AthenaLobby_C_ConfigureGenericLinkButton, CallFunc_GetRuntimeOptions_ReturnValue) == 0x000038, "Member 'AthenaLobby_C_ConfigureGenericLinkButton::CallFunc_GetRuntimeOptions_ReturnValue' has a wrong offset!");
static_assert(offsetof(AthenaLobby_C_ConfigureGenericLinkButton, CallFunc_GetLobbyGenericLinkButtonOverrideText_ReturnValue) == 0x000040, "Member 'AthenaLobby_C_ConfigureGenericLinkButton::CallFunc_GetLobbyGenericLinkButtonOverrideText_ReturnValue' has a wrong offset!");
static_assert(offsetof(AthenaLobby_C_ConfigureGenericLinkButton, CallFunc_TextIsEmpty_ReturnValue) == 0x000058, "Member 'AthenaLobby_C_ConfigureGenericLinkButton::CallFunc_TextIsEmpty_ReturnValue' has a wrong offset!");
static_assert(offsetof(AthenaLobby_C_ConfigureGenericLinkButton, K2Node_Select_Default) == 0x000060, "Member 'AthenaLobby_C_ConfigureGenericLinkButton::K2Node_Select_Default' has a wrong offset!");

struct AthenaLobby_C_DisplayGlyphQuestUpdated final
{
public:
	int32                                         NewGlyphs;
};
static_assert(alignof(AthenaLobby_C_DisplayGlyphQuestUpdated) == 0x000004, "Wrong alignment on AthenaLobby_C_DisplayGlyphQuestUpdated");
static_assert(sizeof(AthenaLobby_C_DisplayGlyphQuestUpdated) == 0x000004, "Wrong size on AthenaLobby_C_DisplayGlyphQuestUpdated");
static_assert(offsetof(AthenaLobby_C_DisplayGlyphQuestUpdated, NewGlyphs) == 0x000000, "Member 'AthenaLobby_C_DisplayGlyphQuestUpdated::NewGlyphs' has a wrong offset!");

struct AthenaLobby_C_DisplayStoreUpdated final
{
public:
	class UStoreToastRequest*                     StoreUpdatedRequest;
};
static_assert(alignof(AthenaLobby_C_DisplayStoreUpdated) == 0x000008, "Wrong alignment on AthenaLobby_C_DisplayStoreUpdated");
static_assert(sizeof(AthenaLobby_C_DisplayStoreUpdated) == 0x000008, "Wrong size on AthenaLobby_C_DisplayStoreUpdated");
static_assert(offsetof(AthenaLobby_C_DisplayStoreUpdated, StoreUpdatedRequest) == 0x000000, "Member 'AthenaLobby_C_DisplayStoreUpdated::StoreUpdatedRequest' has a wrong offset!");

struct AthenaLobby_C_ExecuteUbergraph_AthenaLobby final
{
public:
	int32                                         EntryPoint;
	EFortLobbyType                                Temp_byte_Variable;
	uint8                                         Pad_5[0x3];
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;
	ESlateVisibility                              Temp_byte_Variable_1;
	ESlateVisibility                              Temp_byte_Variable_2;
	ESlateVisibility                              Temp_byte_Variable_3;
	ESlateVisibility                              Temp_byte_Variable_4;
	EFortLobbyType                                Temp_byte_Variable_5;
	uint8                                         Pad_19[0x7];
	class UUserWidget*                            K2Node_CustomEvent_UserWidget;
	TDelegate<void(class UUserWidget* UserWidget)> K2Node_CreateDelegate_OutputDelegate_1;
	uint8                                         Pad_34[0x4];
	class UUserWidget*                            Temp_object_Variable;
	class UFortAsyncAction_CreateWidgetAsync*     CallFunc_CreateWidgetAsync_ReturnValue;
	bool                                          CallFunc_IsValid_ReturnValue;
	bool                                          CallFunc_IsValid_ReturnValue_1;
	bool                                          Temp_bool_Variable;
	uint8                                         Pad_4B[0x5];
	class UCommonInputSubsystem*                  CallFunc_GetContext_ReturnValue;
	ECommonInputType                              CallFunc_GetCurrentInputType_ReturnValue;
	bool                                          CallFunc_IsValid_ReturnValue_2;
	bool                                          CallFunc_NotEqual_ByteByte_ReturnValue;
	bool                                          Temp_bool_IsClosed_Variable;
	uint8                                         Pad_5C[0x4];
	class UFortPickerContext*                     CallFunc_GetContext_ReturnValue_1;
	class UStoreToastRequest*                     K2Node_Event_StoreUpdatedRequest;
	bool                                          CallFunc_ShouldBeginRequest_ReturnValue;
	uint8                                         Pad_71[0x7];
	struct FStoreCallout                          CallFunc_GetToast_ReturnValue;
	bool                                          CallFunc_IsRequestReady_ReturnValue;
	bool                                          CallFunc_IsValid_ReturnValue_3;
	uint8                                         Pad_11A[0x2];
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_2;
	bool                                          CallFunc_IsActivated_ReturnValue;
	bool                                          CallFunc_IsValid_ReturnValue_4;
	EFortLobbyType                                K2Node_Event_LobbyType;
	uint8                                         Pad_12B[0x5];
	const class UFortPlaylistAthena*              K2Node_Event_PlaylistData;
	ESlateVisibility                              K2Node_Select_Default;
	bool                                          K2Node_SwitchEnum_CmpSuccess;
	uint8                                         Pad_13A[0x2];
	int32                                         K2Node_Event_NewGlyphs;
	class UWidget*                                K2Node_Select_Default_1;
	bool                                          Temp_bool_Has_Been_Initd_Variable;
	uint8                                         Pad_149[0x3];
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_3;
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_4;
	uint8                                         Pad_164[0x4];
	struct FTimerHandle                           CallFunc_K2_SetTimerDelegate_ReturnValue;
	struct FTimerHandle                           CallFunc_K2_SetTimerDelegate_ReturnValue_1;
	class UAthenaLobbyMatchmakingPlay_C*          K2Node_DynamicCast_AsAthena_Lobby_Matchmaking_Play;
	bool                                          K2Node_DynamicCast_bSuccess;
	bool                                          CallFunc_IsBROnly_ReturnValue;
	bool                                          CallFunc_BooleanAND_ReturnValue;
	uint8                                         Pad_183[0x1];
	struct FMargin                                K2Node_MakeStruct_Margin;
	struct FMargin                                K2Node_MakeStruct_Margin_1;
	uint8                                         Pad_1A4[0x4];
	class UFortGlobalUIContext*                   CallFunc_GetContext_ReturnValue_2;
	struct FMargin                                K2Node_Select_Default_2;
	class UFortQuestManager*                      CallFunc_GetQuestManager_ReturnValue;
	class UFortAsyncAction_EnsureClientQuestLogin* CallFunc_SendEnsureClientQuestLogin_ReturnValue;
	class UFortFrontEndContext*                   CallFunc_GetContext_ReturnValue_3;
	bool                                          CallFunc_IsValid_ReturnValue_5;
	bool                                          K2Node_Event_bHasUnseenQuests;
	uint8                                         Pad_1DA[0x6];
	class FText                                   CallFunc_MakeLiteralText_ReturnValue;
	class UWBP_UIKit_ButtonCTA_Base_C*            K2Node_DynamicCast_AsWBP_UIKit_Button_CTA_Base;
	bool                                          K2Node_DynamicCast_bSuccess_1;
	uint8                                         Pad_201[0x7];
	class UWBP_UIKit_ButtonCTA_Base_C*            K2Node_DynamicCast_AsWBP_UIKit_Button_CTA_Base_1;
	bool                                          K2Node_DynamicCast_bSuccess_2;
	uint8                                         Pad_211[0x7];
	class FText                                   CallFunc_MakeLiteralText_ReturnValue_1;
	ESlateVisibility                              K2Node_Event_NewVisibility;
};
static_assert(alignof(AthenaLobby_C_ExecuteUbergraph_AthenaLobby) == 0x000008, "Wrong alignment on AthenaLobby_C_ExecuteUbergraph_AthenaLobby");
static_assert(sizeof(AthenaLobby_C_ExecuteUbergraph_AthenaLobby) == 0x000238, "Wrong size on AthenaLobby_C_ExecuteUbergraph_AthenaLobby");
static_assert(offsetof(AthenaLobby_C_ExecuteUbergraph_AthenaLobby, EntryPoint) == 0x000000, "Member 'AthenaLobby_C_ExecuteUbergraph_AthenaLobby::EntryPoint' has a wrong offset!");
static_assert(offsetof(AthenaLobby_C_ExecuteUbergraph_AthenaLobby, Temp_byte_Variable) == 0x000004, "Member 'AthenaLobby_C_ExecuteUbergraph_AthenaLobby::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(AthenaLobby_C_ExecuteUbergraph_AthenaLobby, K2Node_CreateDelegate_OutputDelegate) == 0x000008, "Member 'AthenaLobby_C_ExecuteUbergraph_AthenaLobby::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(AthenaLobby_C_ExecuteUbergraph_AthenaLobby, Temp_byte_Variable_1) == 0x000014, "Member 'AthenaLobby_C_ExecuteUbergraph_AthenaLobby::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(AthenaLobby_C_ExecuteUbergraph_AthenaLobby, Temp_byte_Variable_2) == 0x000015, "Member 'AthenaLobby_C_ExecuteUbergraph_AthenaLobby::Temp_byte_Variable_2' has a wrong offset!");
static_assert(offsetof(AthenaLobby_C_ExecuteUbergraph_AthenaLobby, Temp_byte_Variable_3) == 0x000016, "Member 'AthenaLobby_C_ExecuteUbergraph_AthenaLobby::Temp_byte_Variable_3' has a wrong offset!");
static_assert(offsetof(AthenaLobby_C_ExecuteUbergraph_AthenaLobby, Temp_byte_Variable_4) == 0x000017, "Member 'AthenaLobby_C_ExecuteUbergraph_AthenaLobby::Temp_byte_Variable_4' has a wrong offset!");
static_assert(offsetof(AthenaLobby_C_ExecuteUbergraph_AthenaLobby, Temp_byte_Variable_5) == 0x000018, "Member 'AthenaLobby_C_ExecuteUbergraph_AthenaLobby::Temp_byte_Variable_5' has a wrong offset!");
static_assert(offsetof(AthenaLobby_C_ExecuteUbergraph_AthenaLobby, K2Node_CustomEvent_UserWidget) == 0x000020, "Member 'AthenaLobby_C_ExecuteUbergraph_AthenaLobby::K2Node_CustomEvent_UserWidget' has a wrong offset!");
static_assert(offsetof(AthenaLobby_C_ExecuteUbergraph_AthenaLobby, K2Node_CreateDelegate_OutputDelegate_1) == 0x000028, "Member 'AthenaLobby_C_ExecuteUbergraph_AthenaLobby::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(AthenaLobby_C_ExecuteUbergraph_AthenaLobby, Temp_object_Variable) == 0x000038, "Member 'AthenaLobby_C_ExecuteUbergraph_AthenaLobby::Temp_object_Variable' has a wrong offset!");
static_assert(offsetof(AthenaLobby_C_ExecuteUbergraph_AthenaLobby, CallFunc_CreateWidgetAsync_ReturnValue) == 0x000040, "Member 'AthenaLobby_C_ExecuteUbergraph_AthenaLobby::CallFunc_CreateWidgetAsync_ReturnValue' has a wrong offset!");
static_assert(offsetof(AthenaLobby_C_ExecuteUbergraph_AthenaLobby, CallFunc_IsValid_ReturnValue) == 0x000048, "Member 'AthenaLobby_C_ExecuteUbergraph_AthenaLobby::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(AthenaLobby_C_ExecuteUbergraph_AthenaLobby, CallFunc_IsValid_ReturnValue_1) == 0x000049, "Member 'AthenaLobby_C_ExecuteUbergraph_AthenaLobby::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(AthenaLobby_C_ExecuteUbergraph_AthenaLobby, Temp_bool_Variable) == 0x00004A, "Member 'AthenaLobby_C_ExecuteUbergraph_AthenaLobby::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(AthenaLobby_C_ExecuteUbergraph_AthenaLobby, CallFunc_GetContext_ReturnValue) == 0x000050, "Member 'AthenaLobby_C_ExecuteUbergraph_AthenaLobby::CallFunc_GetContext_ReturnValue' has a wrong offset!");
static_assert(offsetof(AthenaLobby_C_ExecuteUbergraph_AthenaLobby, CallFunc_GetCurrentInputType_ReturnValue) == 0x000058, "Member 'AthenaLobby_C_ExecuteUbergraph_AthenaLobby::CallFunc_GetCurrentInputType_ReturnValue' has a wrong offset!");
static_assert(offsetof(AthenaLobby_C_ExecuteUbergraph_AthenaLobby, CallFunc_IsValid_ReturnValue_2) == 0x000059, "Member 'AthenaLobby_C_ExecuteUbergraph_AthenaLobby::CallFunc_IsValid_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(AthenaLobby_C_ExecuteUbergraph_AthenaLobby, CallFunc_NotEqual_ByteByte_ReturnValue) == 0x00005A, "Member 'AthenaLobby_C_ExecuteUbergraph_AthenaLobby::CallFunc_NotEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(AthenaLobby_C_ExecuteUbergraph_AthenaLobby, Temp_bool_IsClosed_Variable) == 0x00005B, "Member 'AthenaLobby_C_ExecuteUbergraph_AthenaLobby::Temp_bool_IsClosed_Variable' has a wrong offset!");
static_assert(offsetof(AthenaLobby_C_ExecuteUbergraph_AthenaLobby, CallFunc_GetContext_ReturnValue_1) == 0x000060, "Member 'AthenaLobby_C_ExecuteUbergraph_AthenaLobby::CallFunc_GetContext_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(AthenaLobby_C_ExecuteUbergraph_AthenaLobby, K2Node_Event_StoreUpdatedRequest) == 0x000068, "Member 'AthenaLobby_C_ExecuteUbergraph_AthenaLobby::K2Node_Event_StoreUpdatedRequest' has a wrong offset!");
static_assert(offsetof(AthenaLobby_C_ExecuteUbergraph_AthenaLobby, CallFunc_ShouldBeginRequest_ReturnValue) == 0x000070, "Member 'AthenaLobby_C_ExecuteUbergraph_AthenaLobby::CallFunc_ShouldBeginRequest_ReturnValue' has a wrong offset!");
static_assert(offsetof(AthenaLobby_C_ExecuteUbergraph_AthenaLobby, CallFunc_GetToast_ReturnValue) == 0x000078, "Member 'AthenaLobby_C_ExecuteUbergraph_AthenaLobby::CallFunc_GetToast_ReturnValue' has a wrong offset!");
static_assert(offsetof(AthenaLobby_C_ExecuteUbergraph_AthenaLobby, CallFunc_IsRequestReady_ReturnValue) == 0x000118, "Member 'AthenaLobby_C_ExecuteUbergraph_AthenaLobby::CallFunc_IsRequestReady_ReturnValue' has a wrong offset!");
static_assert(offsetof(AthenaLobby_C_ExecuteUbergraph_AthenaLobby, CallFunc_IsValid_ReturnValue_3) == 0x000119, "Member 'AthenaLobby_C_ExecuteUbergraph_AthenaLobby::CallFunc_IsValid_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(AthenaLobby_C_ExecuteUbergraph_AthenaLobby, K2Node_CreateDelegate_OutputDelegate_2) == 0x00011C, "Member 'AthenaLobby_C_ExecuteUbergraph_AthenaLobby::K2Node_CreateDelegate_OutputDelegate_2' has a wrong offset!");
static_assert(offsetof(AthenaLobby_C_ExecuteUbergraph_AthenaLobby, CallFunc_IsActivated_ReturnValue) == 0x000128, "Member 'AthenaLobby_C_ExecuteUbergraph_AthenaLobby::CallFunc_IsActivated_ReturnValue' has a wrong offset!");
static_assert(offsetof(AthenaLobby_C_ExecuteUbergraph_AthenaLobby, CallFunc_IsValid_ReturnValue_4) == 0x000129, "Member 'AthenaLobby_C_ExecuteUbergraph_AthenaLobby::CallFunc_IsValid_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(AthenaLobby_C_ExecuteUbergraph_AthenaLobby, K2Node_Event_LobbyType) == 0x00012A, "Member 'AthenaLobby_C_ExecuteUbergraph_AthenaLobby::K2Node_Event_LobbyType' has a wrong offset!");
static_assert(offsetof(AthenaLobby_C_ExecuteUbergraph_AthenaLobby, K2Node_Event_PlaylistData) == 0x000130, "Member 'AthenaLobby_C_ExecuteUbergraph_AthenaLobby::K2Node_Event_PlaylistData' has a wrong offset!");
static_assert(offsetof(AthenaLobby_C_ExecuteUbergraph_AthenaLobby, K2Node_Select_Default) == 0x000138, "Member 'AthenaLobby_C_ExecuteUbergraph_AthenaLobby::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(AthenaLobby_C_ExecuteUbergraph_AthenaLobby, K2Node_SwitchEnum_CmpSuccess) == 0x000139, "Member 'AthenaLobby_C_ExecuteUbergraph_AthenaLobby::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");
static_assert(offsetof(AthenaLobby_C_ExecuteUbergraph_AthenaLobby, K2Node_Event_NewGlyphs) == 0x00013C, "Member 'AthenaLobby_C_ExecuteUbergraph_AthenaLobby::K2Node_Event_NewGlyphs' has a wrong offset!");
static_assert(offsetof(AthenaLobby_C_ExecuteUbergraph_AthenaLobby, K2Node_Select_Default_1) == 0x000140, "Member 'AthenaLobby_C_ExecuteUbergraph_AthenaLobby::K2Node_Select_Default_1' has a wrong offset!");
static_assert(offsetof(AthenaLobby_C_ExecuteUbergraph_AthenaLobby, Temp_bool_Has_Been_Initd_Variable) == 0x000148, "Member 'AthenaLobby_C_ExecuteUbergraph_AthenaLobby::Temp_bool_Has_Been_Initd_Variable' has a wrong offset!");
static_assert(offsetof(AthenaLobby_C_ExecuteUbergraph_AthenaLobby, K2Node_CreateDelegate_OutputDelegate_3) == 0x00014C, "Member 'AthenaLobby_C_ExecuteUbergraph_AthenaLobby::K2Node_CreateDelegate_OutputDelegate_3' has a wrong offset!");
static_assert(offsetof(AthenaLobby_C_ExecuteUbergraph_AthenaLobby, K2Node_CreateDelegate_OutputDelegate_4) == 0x000158, "Member 'AthenaLobby_C_ExecuteUbergraph_AthenaLobby::K2Node_CreateDelegate_OutputDelegate_4' has a wrong offset!");
static_assert(offsetof(AthenaLobby_C_ExecuteUbergraph_AthenaLobby, CallFunc_K2_SetTimerDelegate_ReturnValue) == 0x000168, "Member 'AthenaLobby_C_ExecuteUbergraph_AthenaLobby::CallFunc_K2_SetTimerDelegate_ReturnValue' has a wrong offset!");
static_assert(offsetof(AthenaLobby_C_ExecuteUbergraph_AthenaLobby, CallFunc_K2_SetTimerDelegate_ReturnValue_1) == 0x000170, "Member 'AthenaLobby_C_ExecuteUbergraph_AthenaLobby::CallFunc_K2_SetTimerDelegate_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(AthenaLobby_C_ExecuteUbergraph_AthenaLobby, K2Node_DynamicCast_AsAthena_Lobby_Matchmaking_Play) == 0x000178, "Member 'AthenaLobby_C_ExecuteUbergraph_AthenaLobby::K2Node_DynamicCast_AsAthena_Lobby_Matchmaking_Play' has a wrong offset!");
static_assert(offsetof(AthenaLobby_C_ExecuteUbergraph_AthenaLobby, K2Node_DynamicCast_bSuccess) == 0x000180, "Member 'AthenaLobby_C_ExecuteUbergraph_AthenaLobby::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(AthenaLobby_C_ExecuteUbergraph_AthenaLobby, CallFunc_IsBROnly_ReturnValue) == 0x000181, "Member 'AthenaLobby_C_ExecuteUbergraph_AthenaLobby::CallFunc_IsBROnly_ReturnValue' has a wrong offset!");
static_assert(offsetof(AthenaLobby_C_ExecuteUbergraph_AthenaLobby, CallFunc_BooleanAND_ReturnValue) == 0x000182, "Member 'AthenaLobby_C_ExecuteUbergraph_AthenaLobby::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(AthenaLobby_C_ExecuteUbergraph_AthenaLobby, K2Node_MakeStruct_Margin) == 0x000184, "Member 'AthenaLobby_C_ExecuteUbergraph_AthenaLobby::K2Node_MakeStruct_Margin' has a wrong offset!");
static_assert(offsetof(AthenaLobby_C_ExecuteUbergraph_AthenaLobby, K2Node_MakeStruct_Margin_1) == 0x000194, "Member 'AthenaLobby_C_ExecuteUbergraph_AthenaLobby::K2Node_MakeStruct_Margin_1' has a wrong offset!");
static_assert(offsetof(AthenaLobby_C_ExecuteUbergraph_AthenaLobby, CallFunc_GetContext_ReturnValue_2) == 0x0001A8, "Member 'AthenaLobby_C_ExecuteUbergraph_AthenaLobby::CallFunc_GetContext_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(AthenaLobby_C_ExecuteUbergraph_AthenaLobby, K2Node_Select_Default_2) == 0x0001B0, "Member 'AthenaLobby_C_ExecuteUbergraph_AthenaLobby::K2Node_Select_Default_2' has a wrong offset!");
static_assert(offsetof(AthenaLobby_C_ExecuteUbergraph_AthenaLobby, CallFunc_GetQuestManager_ReturnValue) == 0x0001C0, "Member 'AthenaLobby_C_ExecuteUbergraph_AthenaLobby::CallFunc_GetQuestManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(AthenaLobby_C_ExecuteUbergraph_AthenaLobby, CallFunc_SendEnsureClientQuestLogin_ReturnValue) == 0x0001C8, "Member 'AthenaLobby_C_ExecuteUbergraph_AthenaLobby::CallFunc_SendEnsureClientQuestLogin_ReturnValue' has a wrong offset!");
static_assert(offsetof(AthenaLobby_C_ExecuteUbergraph_AthenaLobby, CallFunc_GetContext_ReturnValue_3) == 0x0001D0, "Member 'AthenaLobby_C_ExecuteUbergraph_AthenaLobby::CallFunc_GetContext_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(AthenaLobby_C_ExecuteUbergraph_AthenaLobby, CallFunc_IsValid_ReturnValue_5) == 0x0001D8, "Member 'AthenaLobby_C_ExecuteUbergraph_AthenaLobby::CallFunc_IsValid_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(AthenaLobby_C_ExecuteUbergraph_AthenaLobby, K2Node_Event_bHasUnseenQuests) == 0x0001D9, "Member 'AthenaLobby_C_ExecuteUbergraph_AthenaLobby::K2Node_Event_bHasUnseenQuests' has a wrong offset!");
static_assert(offsetof(AthenaLobby_C_ExecuteUbergraph_AthenaLobby, CallFunc_MakeLiteralText_ReturnValue) == 0x0001E0, "Member 'AthenaLobby_C_ExecuteUbergraph_AthenaLobby::CallFunc_MakeLiteralText_ReturnValue' has a wrong offset!");
static_assert(offsetof(AthenaLobby_C_ExecuteUbergraph_AthenaLobby, K2Node_DynamicCast_AsWBP_UIKit_Button_CTA_Base) == 0x0001F8, "Member 'AthenaLobby_C_ExecuteUbergraph_AthenaLobby::K2Node_DynamicCast_AsWBP_UIKit_Button_CTA_Base' has a wrong offset!");
static_assert(offsetof(AthenaLobby_C_ExecuteUbergraph_AthenaLobby, K2Node_DynamicCast_bSuccess_1) == 0x000200, "Member 'AthenaLobby_C_ExecuteUbergraph_AthenaLobby::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(AthenaLobby_C_ExecuteUbergraph_AthenaLobby, K2Node_DynamicCast_AsWBP_UIKit_Button_CTA_Base_1) == 0x000208, "Member 'AthenaLobby_C_ExecuteUbergraph_AthenaLobby::K2Node_DynamicCast_AsWBP_UIKit_Button_CTA_Base_1' has a wrong offset!");
static_assert(offsetof(AthenaLobby_C_ExecuteUbergraph_AthenaLobby, K2Node_DynamicCast_bSuccess_2) == 0x000210, "Member 'AthenaLobby_C_ExecuteUbergraph_AthenaLobby::K2Node_DynamicCast_bSuccess_2' has a wrong offset!");
static_assert(offsetof(AthenaLobby_C_ExecuteUbergraph_AthenaLobby, CallFunc_MakeLiteralText_ReturnValue_1) == 0x000218, "Member 'AthenaLobby_C_ExecuteUbergraph_AthenaLobby::CallFunc_MakeLiteralText_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(AthenaLobby_C_ExecuteUbergraph_AthenaLobby, K2Node_Event_NewVisibility) == 0x000230, "Member 'AthenaLobby_C_ExecuteUbergraph_AthenaLobby::K2Node_Event_NewVisibility' has a wrong offset!");

struct AthenaLobby_C_HandleLobbyColorSchemeChange final
{
public:
	struct FLinearColor                           NewColorScheme;
	bool                                          UseDefaultScheme;
	uint8                                         Pad_11[0x3];
	struct FLinearColor                           Temp_struct_Variable;
	uint8                                         Pad_24[0x4];
	class UAthenaLobbyMatchmakingPlay_C*          K2Node_DynamicCast_AsAthena_Lobby_Matchmaking_Play;
	bool                                          K2Node_DynamicCast_bSuccess;
	bool                                          Temp_bool_Variable;
	uint8                                         Pad_32[0x6];
	class UMaterialInstanceDynamic*               CallFunc_GetDynamicMaterial_ReturnValue;
	struct FLinearColor                           K2Node_Select_Default;
};
static_assert(alignof(AthenaLobby_C_HandleLobbyColorSchemeChange) == 0x000008, "Wrong alignment on AthenaLobby_C_HandleLobbyColorSchemeChange");
static_assert(sizeof(AthenaLobby_C_HandleLobbyColorSchemeChange) == 0x000050, "Wrong size on AthenaLobby_C_HandleLobbyColorSchemeChange");
static_assert(offsetof(AthenaLobby_C_HandleLobbyColorSchemeChange, NewColorScheme) == 0x000000, "Member 'AthenaLobby_C_HandleLobbyColorSchemeChange::NewColorScheme' has a wrong offset!");
static_assert(offsetof(AthenaLobby_C_HandleLobbyColorSchemeChange, UseDefaultScheme) == 0x000010, "Member 'AthenaLobby_C_HandleLobbyColorSchemeChange::UseDefaultScheme' has a wrong offset!");
static_assert(offsetof(AthenaLobby_C_HandleLobbyColorSchemeChange, Temp_struct_Variable) == 0x000014, "Member 'AthenaLobby_C_HandleLobbyColorSchemeChange::Temp_struct_Variable' has a wrong offset!");
static_assert(offsetof(AthenaLobby_C_HandleLobbyColorSchemeChange, K2Node_DynamicCast_AsAthena_Lobby_Matchmaking_Play) == 0x000028, "Member 'AthenaLobby_C_HandleLobbyColorSchemeChange::K2Node_DynamicCast_AsAthena_Lobby_Matchmaking_Play' has a wrong offset!");
static_assert(offsetof(AthenaLobby_C_HandleLobbyColorSchemeChange, K2Node_DynamicCast_bSuccess) == 0x000030, "Member 'AthenaLobby_C_HandleLobbyColorSchemeChange::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(AthenaLobby_C_HandleLobbyColorSchemeChange, Temp_bool_Variable) == 0x000031, "Member 'AthenaLobby_C_HandleLobbyColorSchemeChange::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(AthenaLobby_C_HandleLobbyColorSchemeChange, CallFunc_GetDynamicMaterial_ReturnValue) == 0x000038, "Member 'AthenaLobby_C_HandleLobbyColorSchemeChange::CallFunc_GetDynamicMaterial_ReturnValue' has a wrong offset!");
static_assert(offsetof(AthenaLobby_C_HandleLobbyColorSchemeChange, K2Node_Select_Default) == 0x000040, "Member 'AthenaLobby_C_HandleLobbyColorSchemeChange::K2Node_Select_Default' has a wrong offset!");

struct AthenaLobby_C_HandleUnseenQuestsChanged final
{
public:
	bool                                          bHasUnseenQuests;
};
static_assert(alignof(AthenaLobby_C_HandleUnseenQuestsChanged) == 0x000001, "Wrong alignment on AthenaLobby_C_HandleUnseenQuestsChanged");
static_assert(sizeof(AthenaLobby_C_HandleUnseenQuestsChanged) == 0x000001, "Wrong size on AthenaLobby_C_HandleUnseenQuestsChanged");
static_assert(offsetof(AthenaLobby_C_HandleUnseenQuestsChanged, bHasUnseenQuests) == 0x000000, "Member 'AthenaLobby_C_HandleUnseenQuestsChanged::bHasUnseenQuests' has a wrong offset!");

struct AthenaLobby_C_OnComplete_9036807A49B907A7A1B78EB727BAB97A final
{
public:
	class UUserWidget*                            UserWidget;
};
static_assert(alignof(AthenaLobby_C_OnComplete_9036807A49B907A7A1B78EB727BAB97A) == 0x000008, "Wrong alignment on AthenaLobby_C_OnComplete_9036807A49B907A7A1B78EB727BAB97A");
static_assert(sizeof(AthenaLobby_C_OnComplete_9036807A49B907A7A1B78EB727BAB97A) == 0x000008, "Wrong size on AthenaLobby_C_OnComplete_9036807A49B907A7A1B78EB727BAB97A");
static_assert(offsetof(AthenaLobby_C_OnComplete_9036807A49B907A7A1B78EB727BAB97A, UserWidget) == 0x000000, "Member 'AthenaLobby_C_OnComplete_9036807A49B907A7A1B78EB727BAB97A::UserWidget' has a wrong offset!");

struct AthenaLobby_C_OnPlaylistChanged final
{
public:
	EFortLobbyType                                LobbyType;
	uint8                                         Pad_1[0x7];
	const class UFortPlaylistAthena*              PlaylistData;
};
static_assert(alignof(AthenaLobby_C_OnPlaylistChanged) == 0x000008, "Wrong alignment on AthenaLobby_C_OnPlaylistChanged");
static_assert(sizeof(AthenaLobby_C_OnPlaylistChanged) == 0x000010, "Wrong size on AthenaLobby_C_OnPlaylistChanged");
static_assert(offsetof(AthenaLobby_C_OnPlaylistChanged, LobbyType) == 0x000000, "Member 'AthenaLobby_C_OnPlaylistChanged::LobbyType' has a wrong offset!");
static_assert(offsetof(AthenaLobby_C_OnPlaylistChanged, PlaylistData) == 0x000008, "Member 'AthenaLobby_C_OnPlaylistChanged::PlaylistData' has a wrong offset!");

struct AthenaLobby_C_OnQuestsButtonVisibilityChanged final
{
public:
	ESlateVisibility                              NewVisibility;
};
static_assert(alignof(AthenaLobby_C_OnQuestsButtonVisibilityChanged) == 0x000001, "Wrong alignment on AthenaLobby_C_OnQuestsButtonVisibilityChanged");
static_assert(sizeof(AthenaLobby_C_OnQuestsButtonVisibilityChanged) == 0x000001, "Wrong size on AthenaLobby_C_OnQuestsButtonVisibilityChanged");
static_assert(offsetof(AthenaLobby_C_OnQuestsButtonVisibilityChanged, NewVisibility) == 0x000000, "Member 'AthenaLobby_C_OnQuestsButtonVisibilityChanged::NewVisibility' has a wrong offset!");

struct AthenaLobby_C_StartAthenaLobbyMusic final
{
public:
	TArray<class AFort_Entry_Music_Controller_BP_C*> CallFunc_GetAllActorsOfClass_OutActors;
	class AFort_Entry_Music_Controller_BP_C*      CallFunc_Array_Get_Item;
	bool                                          CallFunc_IsValid_ReturnValue;
};
static_assert(alignof(AthenaLobby_C_StartAthenaLobbyMusic) == 0x000008, "Wrong alignment on AthenaLobby_C_StartAthenaLobbyMusic");
static_assert(sizeof(AthenaLobby_C_StartAthenaLobbyMusic) == 0x000020, "Wrong size on AthenaLobby_C_StartAthenaLobbyMusic");
static_assert(offsetof(AthenaLobby_C_StartAthenaLobbyMusic, CallFunc_GetAllActorsOfClass_OutActors) == 0x000000, "Member 'AthenaLobby_C_StartAthenaLobbyMusic::CallFunc_GetAllActorsOfClass_OutActors' has a wrong offset!");
static_assert(offsetof(AthenaLobby_C_StartAthenaLobbyMusic, CallFunc_Array_Get_Item) == 0x000010, "Member 'AthenaLobby_C_StartAthenaLobbyMusic::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(AthenaLobby_C_StartAthenaLobbyMusic, CallFunc_IsValid_ReturnValue) == 0x000018, "Member 'AthenaLobby_C_StartAthenaLobbyMusic::CallFunc_IsValid_ReturnValue' has a wrong offset!");

}
