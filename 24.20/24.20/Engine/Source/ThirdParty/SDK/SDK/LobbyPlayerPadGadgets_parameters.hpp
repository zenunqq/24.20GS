#pragma once

#include "Basic.hpp"

#include "SlateCore_structs.hpp"
#include "InputCore_structs.hpp"
#include "UMG_structs.hpp"
#include "FortniteGame_structs.hpp"

namespace SDK::Params
{

struct LobbyPlayerPadGadgets_C_Refresh final
{
public:
	struct FFortTeamMemberInfo                    TeamMemberInfo;
	class UFortItem*                              CallFunc_Array_Get_Item;
	class UFortItem*                              CallFunc_Array_Get_Item_1;
	class UFortWorldItem*                         K2Node_DynamicCast_AsFort_World_Item;
	bool                                          K2Node_DynamicCast_bSuccess;
	uint8                                         Pad_269[0x7];
	class UFortWorldItem*                         K2Node_DynamicCast_AsFort_World_Item_1;
	bool                                          K2Node_DynamicCast_bSuccess_1;
	bool                                          CallFunc_Array_IsValidIndex_ReturnValue;
	bool                                          CallFunc_Array_IsValidIndex_ReturnValue_1;
};
static_assert(alignof(LobbyPlayerPadGadgets_C_Refresh) == 0x000010, "Wrong alignment on LobbyPlayerPadGadgets_C_Refresh");
static_assert(sizeof(LobbyPlayerPadGadgets_C_Refresh) == 0x000280, "Wrong size on LobbyPlayerPadGadgets_C_Refresh");
static_assert(offsetof(LobbyPlayerPadGadgets_C_Refresh, TeamMemberInfo) == 0x000000, "Member 'LobbyPlayerPadGadgets_C_Refresh::TeamMemberInfo' has a wrong offset!");
static_assert(offsetof(LobbyPlayerPadGadgets_C_Refresh, CallFunc_Array_Get_Item) == 0x000250, "Member 'LobbyPlayerPadGadgets_C_Refresh::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(LobbyPlayerPadGadgets_C_Refresh, CallFunc_Array_Get_Item_1) == 0x000258, "Member 'LobbyPlayerPadGadgets_C_Refresh::CallFunc_Array_Get_Item_1' has a wrong offset!");
static_assert(offsetof(LobbyPlayerPadGadgets_C_Refresh, K2Node_DynamicCast_AsFort_World_Item) == 0x000260, "Member 'LobbyPlayerPadGadgets_C_Refresh::K2Node_DynamicCast_AsFort_World_Item' has a wrong offset!");
static_assert(offsetof(LobbyPlayerPadGadgets_C_Refresh, K2Node_DynamicCast_bSuccess) == 0x000268, "Member 'LobbyPlayerPadGadgets_C_Refresh::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(LobbyPlayerPadGadgets_C_Refresh, K2Node_DynamicCast_AsFort_World_Item_1) == 0x000270, "Member 'LobbyPlayerPadGadgets_C_Refresh::K2Node_DynamicCast_AsFort_World_Item_1' has a wrong offset!");
static_assert(offsetof(LobbyPlayerPadGadgets_C_Refresh, K2Node_DynamicCast_bSuccess_1) == 0x000278, "Member 'LobbyPlayerPadGadgets_C_Refresh::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(LobbyPlayerPadGadgets_C_Refresh, CallFunc_Array_IsValidIndex_ReturnValue) == 0x000279, "Member 'LobbyPlayerPadGadgets_C_Refresh::CallFunc_Array_IsValidIndex_ReturnValue' has a wrong offset!");
static_assert(offsetof(LobbyPlayerPadGadgets_C_Refresh, CallFunc_Array_IsValidIndex_ReturnValue_1) == 0x00027A, "Member 'LobbyPlayerPadGadgets_C_Refresh::CallFunc_Array_IsValidIndex_ReturnValue_1' has a wrong offset!");

struct LobbyPlayerPadGadgets_C_OnMouseLeave final
{
public:
	struct FPointerEvent                          MouseEvent;
};
static_assert(alignof(LobbyPlayerPadGadgets_C_OnMouseLeave) == 0x000008, "Wrong alignment on LobbyPlayerPadGadgets_C_OnMouseLeave");
static_assert(sizeof(LobbyPlayerPadGadgets_C_OnMouseLeave) == 0x000098, "Wrong size on LobbyPlayerPadGadgets_C_OnMouseLeave");
static_assert(offsetof(LobbyPlayerPadGadgets_C_OnMouseLeave, MouseEvent) == 0x000000, "Member 'LobbyPlayerPadGadgets_C_OnMouseLeave::MouseEvent' has a wrong offset!");

struct LobbyPlayerPadGadgets_C_OnMouseEnter final
{
public:
	struct FGeometry                              MyGeometry;
	struct FPointerEvent                          MouseEvent;
};
static_assert(alignof(LobbyPlayerPadGadgets_C_OnMouseEnter) == 0x000008, "Wrong alignment on LobbyPlayerPadGadgets_C_OnMouseEnter");
static_assert(sizeof(LobbyPlayerPadGadgets_C_OnMouseEnter) == 0x0000D8, "Wrong size on LobbyPlayerPadGadgets_C_OnMouseEnter");
static_assert(offsetof(LobbyPlayerPadGadgets_C_OnMouseEnter, MyGeometry) == 0x000000, "Member 'LobbyPlayerPadGadgets_C_OnMouseEnter::MyGeometry' has a wrong offset!");
static_assert(offsetof(LobbyPlayerPadGadgets_C_OnMouseEnter, MouseEvent) == 0x000040, "Member 'LobbyPlayerPadGadgets_C_OnMouseEnter::MouseEvent' has a wrong offset!");

struct LobbyPlayerPadGadgets_C_OnMouseButtonDown final
{
public:
	struct FGeometry                              MyGeometry;
	struct FPointerEvent                          MouseEvent;
	struct FEventReply                            ReturnValue;
	struct FKey                                   CallFunc_PointerEvent_GetEffectingButton_ReturnValue;
	struct FEventReply                            CallFunc_Handled_ReturnValue;
	bool                                          CallFunc_EqualEqual_KeyKey_ReturnValue;
};
static_assert(alignof(LobbyPlayerPadGadgets_C_OnMouseButtonDown) == 0x000008, "Wrong alignment on LobbyPlayerPadGadgets_C_OnMouseButtonDown");
static_assert(sizeof(LobbyPlayerPadGadgets_C_OnMouseButtonDown) == 0x000268, "Wrong size on LobbyPlayerPadGadgets_C_OnMouseButtonDown");
static_assert(offsetof(LobbyPlayerPadGadgets_C_OnMouseButtonDown, MyGeometry) == 0x000000, "Member 'LobbyPlayerPadGadgets_C_OnMouseButtonDown::MyGeometry' has a wrong offset!");
static_assert(offsetof(LobbyPlayerPadGadgets_C_OnMouseButtonDown, MouseEvent) == 0x000040, "Member 'LobbyPlayerPadGadgets_C_OnMouseButtonDown::MouseEvent' has a wrong offset!");
static_assert(offsetof(LobbyPlayerPadGadgets_C_OnMouseButtonDown, ReturnValue) == 0x0000D8, "Member 'LobbyPlayerPadGadgets_C_OnMouseButtonDown::ReturnValue' has a wrong offset!");
static_assert(offsetof(LobbyPlayerPadGadgets_C_OnMouseButtonDown, CallFunc_PointerEvent_GetEffectingButton_ReturnValue) == 0x000190, "Member 'LobbyPlayerPadGadgets_C_OnMouseButtonDown::CallFunc_PointerEvent_GetEffectingButton_ReturnValue' has a wrong offset!");
static_assert(offsetof(LobbyPlayerPadGadgets_C_OnMouseButtonDown, CallFunc_Handled_ReturnValue) == 0x0001A8, "Member 'LobbyPlayerPadGadgets_C_OnMouseButtonDown::CallFunc_Handled_ReturnValue' has a wrong offset!");
static_assert(offsetof(LobbyPlayerPadGadgets_C_OnMouseButtonDown, CallFunc_EqualEqual_KeyKey_ReturnValue) == 0x000260, "Member 'LobbyPlayerPadGadgets_C_OnMouseButtonDown::CallFunc_EqualEqual_KeyKey_ReturnValue' has a wrong offset!");

struct LobbyPlayerPadGadgets_C_OnInputClicked final
{
public:
	class UFortFrontEndContext*                   CallFunc_GetContext_ReturnValue;
};
static_assert(alignof(LobbyPlayerPadGadgets_C_OnInputClicked) == 0x000008, "Wrong alignment on LobbyPlayerPadGadgets_C_OnInputClicked");
static_assert(sizeof(LobbyPlayerPadGadgets_C_OnInputClicked) == 0x000008, "Wrong size on LobbyPlayerPadGadgets_C_OnInputClicked");
static_assert(offsetof(LobbyPlayerPadGadgets_C_OnInputClicked, CallFunc_GetContext_ReturnValue) == 0x000000, "Member 'LobbyPlayerPadGadgets_C_OnInputClicked::CallFunc_GetContext_ReturnValue' has a wrong offset!");

struct LobbyPlayerPadGadgets_C_Initialize final
{
public:
	int32                                         PlayerIndex_0;
};
static_assert(alignof(LobbyPlayerPadGadgets_C_Initialize) == 0x000004, "Wrong alignment on LobbyPlayerPadGadgets_C_Initialize");
static_assert(sizeof(LobbyPlayerPadGadgets_C_Initialize) == 0x000004, "Wrong size on LobbyPlayerPadGadgets_C_Initialize");
static_assert(offsetof(LobbyPlayerPadGadgets_C_Initialize, PlayerIndex_0) == 0x000000, "Member 'LobbyPlayerPadGadgets_C_Initialize::PlayerIndex_0' has a wrong offset!");

struct LobbyPlayerPadGadgets_C_ExecuteUbergraph_LobbyPlayerPadGadgets final
{
public:
	int32                                         EntryPoint;
	uint8                                         Pad_4[0x4];
	struct FGeometry                              K2Node_Event_MyGeometry;
	struct FPointerEvent                          K2Node_Event_MouseEvent_1;
	struct FPointerEvent                          K2Node_Event_MouseEvent;
};
static_assert(alignof(LobbyPlayerPadGadgets_C_ExecuteUbergraph_LobbyPlayerPadGadgets) == 0x000008, "Wrong alignment on LobbyPlayerPadGadgets_C_ExecuteUbergraph_LobbyPlayerPadGadgets");
static_assert(sizeof(LobbyPlayerPadGadgets_C_ExecuteUbergraph_LobbyPlayerPadGadgets) == 0x000178, "Wrong size on LobbyPlayerPadGadgets_C_ExecuteUbergraph_LobbyPlayerPadGadgets");
static_assert(offsetof(LobbyPlayerPadGadgets_C_ExecuteUbergraph_LobbyPlayerPadGadgets, EntryPoint) == 0x000000, "Member 'LobbyPlayerPadGadgets_C_ExecuteUbergraph_LobbyPlayerPadGadgets::EntryPoint' has a wrong offset!");
static_assert(offsetof(LobbyPlayerPadGadgets_C_ExecuteUbergraph_LobbyPlayerPadGadgets, K2Node_Event_MyGeometry) == 0x000008, "Member 'LobbyPlayerPadGadgets_C_ExecuteUbergraph_LobbyPlayerPadGadgets::K2Node_Event_MyGeometry' has a wrong offset!");
static_assert(offsetof(LobbyPlayerPadGadgets_C_ExecuteUbergraph_LobbyPlayerPadGadgets, K2Node_Event_MouseEvent_1) == 0x000048, "Member 'LobbyPlayerPadGadgets_C_ExecuteUbergraph_LobbyPlayerPadGadgets::K2Node_Event_MouseEvent_1' has a wrong offset!");
static_assert(offsetof(LobbyPlayerPadGadgets_C_ExecuteUbergraph_LobbyPlayerPadGadgets, K2Node_Event_MouseEvent) == 0x0000E0, "Member 'LobbyPlayerPadGadgets_C_ExecuteUbergraph_LobbyPlayerPadGadgets::K2Node_Event_MouseEvent' has a wrong offset!");

}
