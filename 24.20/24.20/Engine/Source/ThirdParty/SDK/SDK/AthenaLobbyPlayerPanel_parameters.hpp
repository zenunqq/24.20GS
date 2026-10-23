#pragma once

#include "Basic.hpp"

#include "SlateCore_structs.hpp"
#include "UMG_structs.hpp"
#include "FortniteGame_structs.hpp"

namespace SDK::Params
{

struct AthenaLobbyPlayerPanel_C_ExecuteUbergraph_AthenaLobbyPlayerPanel final
{
public:
	int32                                         EntryPoint;
	bool                                          Temp_bool_Variable;
	ESlateVisibility                              Temp_byte_Variable;
	ESlateVisibility                              Temp_byte_Variable_1;
	EFortFriendRequestStatus                      Temp_byte_Variable_2;
	EFortFriendRequestStatus                      Temp_byte_Variable_3;
	bool                                          Temp_bool_Variable_1;
	bool                                          Temp_bool_Variable_2;
	bool                                          Temp_bool_Variable_3;
	bool                                          Temp_bool_Variable_4;
	bool                                          Temp_bool_Variable_5;
	uint8                                         Pad_E[0x2];
	class FText                                   Temp_text_Variable;
	class FText                                   Temp_text_Variable_1;
	bool                                          K2Node_Event_bHasBattlePass;
	ESlateVisibility                              K2Node_Select_Default;
	bool                                          K2Node_Event_bIsMuted;
	uint8                                         Pad_43[0x5];
	class UWBP_UIKit_ButtonCTA_Base_C*            K2Node_DynamicCast_AsWBP_UIKit_Button_CTA_Base;
	bool                                          K2Node_DynamicCast_bSuccess;
	uint8                                         Pad_51[0x7];
	class FText                                   K2Node_Select_Default_1;
	EFortFriendRequestStatus                      K2Node_Event_FriendRequestStatus;
	uint8                                         Pad_71[0x7];
	class FText                                   K2Node_Select_Default_2;
	bool                                          K2Node_Select_Default_3;
	uint8                                         Pad_91[0x7];
	class UWBP_UIKit_ButtonCTA_Base_C*            K2Node_DynamicCast_AsWBP_UIKit_Button_CTA_Base_1;
	bool                                          K2Node_DynamicCast_bSuccess_1;
};
static_assert(alignof(AthenaLobbyPlayerPanel_C_ExecuteUbergraph_AthenaLobbyPlayerPanel) == 0x000008, "Wrong alignment on AthenaLobbyPlayerPanel_C_ExecuteUbergraph_AthenaLobbyPlayerPanel");
static_assert(sizeof(AthenaLobbyPlayerPanel_C_ExecuteUbergraph_AthenaLobbyPlayerPanel) == 0x0000A8, "Wrong size on AthenaLobbyPlayerPanel_C_ExecuteUbergraph_AthenaLobbyPlayerPanel");
static_assert(offsetof(AthenaLobbyPlayerPanel_C_ExecuteUbergraph_AthenaLobbyPlayerPanel, EntryPoint) == 0x000000, "Member 'AthenaLobbyPlayerPanel_C_ExecuteUbergraph_AthenaLobbyPlayerPanel::EntryPoint' has a wrong offset!");
static_assert(offsetof(AthenaLobbyPlayerPanel_C_ExecuteUbergraph_AthenaLobbyPlayerPanel, Temp_bool_Variable) == 0x000004, "Member 'AthenaLobbyPlayerPanel_C_ExecuteUbergraph_AthenaLobbyPlayerPanel::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(AthenaLobbyPlayerPanel_C_ExecuteUbergraph_AthenaLobbyPlayerPanel, Temp_byte_Variable) == 0x000005, "Member 'AthenaLobbyPlayerPanel_C_ExecuteUbergraph_AthenaLobbyPlayerPanel::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(AthenaLobbyPlayerPanel_C_ExecuteUbergraph_AthenaLobbyPlayerPanel, Temp_byte_Variable_1) == 0x000006, "Member 'AthenaLobbyPlayerPanel_C_ExecuteUbergraph_AthenaLobbyPlayerPanel::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(AthenaLobbyPlayerPanel_C_ExecuteUbergraph_AthenaLobbyPlayerPanel, Temp_byte_Variable_2) == 0x000007, "Member 'AthenaLobbyPlayerPanel_C_ExecuteUbergraph_AthenaLobbyPlayerPanel::Temp_byte_Variable_2' has a wrong offset!");
static_assert(offsetof(AthenaLobbyPlayerPanel_C_ExecuteUbergraph_AthenaLobbyPlayerPanel, Temp_byte_Variable_3) == 0x000008, "Member 'AthenaLobbyPlayerPanel_C_ExecuteUbergraph_AthenaLobbyPlayerPanel::Temp_byte_Variable_3' has a wrong offset!");
static_assert(offsetof(AthenaLobbyPlayerPanel_C_ExecuteUbergraph_AthenaLobbyPlayerPanel, Temp_bool_Variable_1) == 0x000009, "Member 'AthenaLobbyPlayerPanel_C_ExecuteUbergraph_AthenaLobbyPlayerPanel::Temp_bool_Variable_1' has a wrong offset!");
static_assert(offsetof(AthenaLobbyPlayerPanel_C_ExecuteUbergraph_AthenaLobbyPlayerPanel, Temp_bool_Variable_2) == 0x00000A, "Member 'AthenaLobbyPlayerPanel_C_ExecuteUbergraph_AthenaLobbyPlayerPanel::Temp_bool_Variable_2' has a wrong offset!");
static_assert(offsetof(AthenaLobbyPlayerPanel_C_ExecuteUbergraph_AthenaLobbyPlayerPanel, Temp_bool_Variable_3) == 0x00000B, "Member 'AthenaLobbyPlayerPanel_C_ExecuteUbergraph_AthenaLobbyPlayerPanel::Temp_bool_Variable_3' has a wrong offset!");
static_assert(offsetof(AthenaLobbyPlayerPanel_C_ExecuteUbergraph_AthenaLobbyPlayerPanel, Temp_bool_Variable_4) == 0x00000C, "Member 'AthenaLobbyPlayerPanel_C_ExecuteUbergraph_AthenaLobbyPlayerPanel::Temp_bool_Variable_4' has a wrong offset!");
static_assert(offsetof(AthenaLobbyPlayerPanel_C_ExecuteUbergraph_AthenaLobbyPlayerPanel, Temp_bool_Variable_5) == 0x00000D, "Member 'AthenaLobbyPlayerPanel_C_ExecuteUbergraph_AthenaLobbyPlayerPanel::Temp_bool_Variable_5' has a wrong offset!");
static_assert(offsetof(AthenaLobbyPlayerPanel_C_ExecuteUbergraph_AthenaLobbyPlayerPanel, Temp_text_Variable) == 0x000010, "Member 'AthenaLobbyPlayerPanel_C_ExecuteUbergraph_AthenaLobbyPlayerPanel::Temp_text_Variable' has a wrong offset!");
static_assert(offsetof(AthenaLobbyPlayerPanel_C_ExecuteUbergraph_AthenaLobbyPlayerPanel, Temp_text_Variable_1) == 0x000028, "Member 'AthenaLobbyPlayerPanel_C_ExecuteUbergraph_AthenaLobbyPlayerPanel::Temp_text_Variable_1' has a wrong offset!");
static_assert(offsetof(AthenaLobbyPlayerPanel_C_ExecuteUbergraph_AthenaLobbyPlayerPanel, K2Node_Event_bHasBattlePass) == 0x000040, "Member 'AthenaLobbyPlayerPanel_C_ExecuteUbergraph_AthenaLobbyPlayerPanel::K2Node_Event_bHasBattlePass' has a wrong offset!");
static_assert(offsetof(AthenaLobbyPlayerPanel_C_ExecuteUbergraph_AthenaLobbyPlayerPanel, K2Node_Select_Default) == 0x000041, "Member 'AthenaLobbyPlayerPanel_C_ExecuteUbergraph_AthenaLobbyPlayerPanel::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(AthenaLobbyPlayerPanel_C_ExecuteUbergraph_AthenaLobbyPlayerPanel, K2Node_Event_bIsMuted) == 0x000042, "Member 'AthenaLobbyPlayerPanel_C_ExecuteUbergraph_AthenaLobbyPlayerPanel::K2Node_Event_bIsMuted' has a wrong offset!");
static_assert(offsetof(AthenaLobbyPlayerPanel_C_ExecuteUbergraph_AthenaLobbyPlayerPanel, K2Node_DynamicCast_AsWBP_UIKit_Button_CTA_Base) == 0x000048, "Member 'AthenaLobbyPlayerPanel_C_ExecuteUbergraph_AthenaLobbyPlayerPanel::K2Node_DynamicCast_AsWBP_UIKit_Button_CTA_Base' has a wrong offset!");
static_assert(offsetof(AthenaLobbyPlayerPanel_C_ExecuteUbergraph_AthenaLobbyPlayerPanel, K2Node_DynamicCast_bSuccess) == 0x000050, "Member 'AthenaLobbyPlayerPanel_C_ExecuteUbergraph_AthenaLobbyPlayerPanel::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(AthenaLobbyPlayerPanel_C_ExecuteUbergraph_AthenaLobbyPlayerPanel, K2Node_Select_Default_1) == 0x000058, "Member 'AthenaLobbyPlayerPanel_C_ExecuteUbergraph_AthenaLobbyPlayerPanel::K2Node_Select_Default_1' has a wrong offset!");
static_assert(offsetof(AthenaLobbyPlayerPanel_C_ExecuteUbergraph_AthenaLobbyPlayerPanel, K2Node_Event_FriendRequestStatus) == 0x000070, "Member 'AthenaLobbyPlayerPanel_C_ExecuteUbergraph_AthenaLobbyPlayerPanel::K2Node_Event_FriendRequestStatus' has a wrong offset!");
static_assert(offsetof(AthenaLobbyPlayerPanel_C_ExecuteUbergraph_AthenaLobbyPlayerPanel, K2Node_Select_Default_2) == 0x000078, "Member 'AthenaLobbyPlayerPanel_C_ExecuteUbergraph_AthenaLobbyPlayerPanel::K2Node_Select_Default_2' has a wrong offset!");
static_assert(offsetof(AthenaLobbyPlayerPanel_C_ExecuteUbergraph_AthenaLobbyPlayerPanel, K2Node_Select_Default_3) == 0x000090, "Member 'AthenaLobbyPlayerPanel_C_ExecuteUbergraph_AthenaLobbyPlayerPanel::K2Node_Select_Default_3' has a wrong offset!");
static_assert(offsetof(AthenaLobbyPlayerPanel_C_ExecuteUbergraph_AthenaLobbyPlayerPanel, K2Node_DynamicCast_AsWBP_UIKit_Button_CTA_Base_1) == 0x000098, "Member 'AthenaLobbyPlayerPanel_C_ExecuteUbergraph_AthenaLobbyPlayerPanel::K2Node_DynamicCast_AsWBP_UIKit_Button_CTA_Base_1' has a wrong offset!");
static_assert(offsetof(AthenaLobbyPlayerPanel_C_ExecuteUbergraph_AthenaLobbyPlayerPanel, K2Node_DynamicCast_bSuccess_1) == 0x0000A0, "Member 'AthenaLobbyPlayerPanel_C_ExecuteUbergraph_AthenaLobbyPlayerPanel::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");

struct AthenaLobbyPlayerPanel_C_OnFriendStatusUpdated final
{
public:
	EFortFriendRequestStatus                      FriendRequestStatus;
};
static_assert(alignof(AthenaLobbyPlayerPanel_C_OnFriendStatusUpdated) == 0x000001, "Wrong alignment on AthenaLobbyPlayerPanel_C_OnFriendStatusUpdated");
static_assert(sizeof(AthenaLobbyPlayerPanel_C_OnFriendStatusUpdated) == 0x000001, "Wrong size on AthenaLobbyPlayerPanel_C_OnFriendStatusUpdated");
static_assert(offsetof(AthenaLobbyPlayerPanel_C_OnFriendStatusUpdated, FriendRequestStatus) == 0x000000, "Member 'AthenaLobbyPlayerPanel_C_OnFriendStatusUpdated::FriendRequestStatus' has a wrong offset!");

struct AthenaLobbyPlayerPanel_C_OnHasBattlePassUpdated final
{
public:
	bool                                          bHasBattlePass;
};
static_assert(alignof(AthenaLobbyPlayerPanel_C_OnHasBattlePassUpdated) == 0x000001, "Wrong alignment on AthenaLobbyPlayerPanel_C_OnHasBattlePassUpdated");
static_assert(sizeof(AthenaLobbyPlayerPanel_C_OnHasBattlePassUpdated) == 0x000001, "Wrong size on AthenaLobbyPlayerPanel_C_OnHasBattlePassUpdated");
static_assert(offsetof(AthenaLobbyPlayerPanel_C_OnHasBattlePassUpdated, bHasBattlePass) == 0x000000, "Member 'AthenaLobbyPlayerPanel_C_OnHasBattlePassUpdated::bHasBattlePass' has a wrong offset!");

struct AthenaLobbyPlayerPanel_C_OnIsMutedUpdated final
{
public:
	bool                                          bIsMuted;
};
static_assert(alignof(AthenaLobbyPlayerPanel_C_OnIsMutedUpdated) == 0x000001, "Wrong alignment on AthenaLobbyPlayerPanel_C_OnIsMutedUpdated");
static_assert(sizeof(AthenaLobbyPlayerPanel_C_OnIsMutedUpdated) == 0x000001, "Wrong size on AthenaLobbyPlayerPanel_C_OnIsMutedUpdated");
static_assert(offsetof(AthenaLobbyPlayerPanel_C_OnIsMutedUpdated, bIsMuted) == 0x000000, "Member 'AthenaLobbyPlayerPanel_C_OnIsMutedUpdated::bIsMuted' has a wrong offset!");

struct AthenaLobbyPlayerPanel_C_OnMouseButtonDown_0 final
{
public:
	struct FGeometry                              MyGeometry;
	struct FPointerEvent                          MouseEvent;
	struct FEventReply                            ReturnValue;
	struct FEventReply                            CallFunc_Handled_ReturnValue;
};
static_assert(alignof(AthenaLobbyPlayerPanel_C_OnMouseButtonDown_0) == 0x000008, "Wrong alignment on AthenaLobbyPlayerPanel_C_OnMouseButtonDown_0");
static_assert(sizeof(AthenaLobbyPlayerPanel_C_OnMouseButtonDown_0) == 0x000248, "Wrong size on AthenaLobbyPlayerPanel_C_OnMouseButtonDown_0");
static_assert(offsetof(AthenaLobbyPlayerPanel_C_OnMouseButtonDown_0, MyGeometry) == 0x000000, "Member 'AthenaLobbyPlayerPanel_C_OnMouseButtonDown_0::MyGeometry' has a wrong offset!");
static_assert(offsetof(AthenaLobbyPlayerPanel_C_OnMouseButtonDown_0, MouseEvent) == 0x000040, "Member 'AthenaLobbyPlayerPanel_C_OnMouseButtonDown_0::MouseEvent' has a wrong offset!");
static_assert(offsetof(AthenaLobbyPlayerPanel_C_OnMouseButtonDown_0, ReturnValue) == 0x0000D8, "Member 'AthenaLobbyPlayerPanel_C_OnMouseButtonDown_0::ReturnValue' has a wrong offset!");
static_assert(offsetof(AthenaLobbyPlayerPanel_C_OnMouseButtonDown_0, CallFunc_Handled_ReturnValue) == 0x000190, "Member 'AthenaLobbyPlayerPanel_C_OnMouseButtonDown_0::CallFunc_Handled_ReturnValue' has a wrong offset!");

}
