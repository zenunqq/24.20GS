#pragma once

#include "Basic.hpp"

#include "FortniteUI_structs.hpp"
#include "SlateCore_structs.hpp"
#include "InputCore_structs.hpp"
#include "UMG_structs.hpp"

namespace SDK::Params
{

struct SidebarReferAFriendActionMenu_C_ExecuteUbergraph_SidebarReferAFriendActionMenu final
{
public:
	int32                                         EntryPoint;
	EReferFriendOrigin                            K2Node_Event_RequestOrigin;
	uint8                                         Pad_5[0x3];
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;
};
static_assert(alignof(SidebarReferAFriendActionMenu_C_ExecuteUbergraph_SidebarReferAFriendActionMenu) == 0x000008, "Wrong alignment on SidebarReferAFriendActionMenu_C_ExecuteUbergraph_SidebarReferAFriendActionMenu");
static_assert(sizeof(SidebarReferAFriendActionMenu_C_ExecuteUbergraph_SidebarReferAFriendActionMenu) == 0x000010, "Wrong size on SidebarReferAFriendActionMenu_C_ExecuteUbergraph_SidebarReferAFriendActionMenu");
static_assert(offsetof(SidebarReferAFriendActionMenu_C_ExecuteUbergraph_SidebarReferAFriendActionMenu, EntryPoint) == 0x000000, "Member 'SidebarReferAFriendActionMenu_C_ExecuteUbergraph_SidebarReferAFriendActionMenu::EntryPoint' has a wrong offset!");
static_assert(offsetof(SidebarReferAFriendActionMenu_C_ExecuteUbergraph_SidebarReferAFriendActionMenu, K2Node_Event_RequestOrigin) == 0x000004, "Member 'SidebarReferAFriendActionMenu_C_ExecuteUbergraph_SidebarReferAFriendActionMenu::K2Node_Event_RequestOrigin' has a wrong offset!");
static_assert(offsetof(SidebarReferAFriendActionMenu_C_ExecuteUbergraph_SidebarReferAFriendActionMenu, CallFunc_PlayAnimation_ReturnValue) == 0x000008, "Member 'SidebarReferAFriendActionMenu_C_ExecuteUbergraph_SidebarReferAFriendActionMenu::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");

struct SidebarReferAFriendActionMenu_C_OnKeyUp final
{
public:
	struct FGeometry                              MyGeometry;
	struct FKeyEvent                              InKeyEvent;
	struct FEventReply                            ReturnValue;
	struct FEventReply                            CallFunc_Unhandled_ReturnValue;
	struct FKey                                   CallFunc_GetKey_ReturnValue;
	bool                                          CallFunc_EqualEqual_KeyKey_ReturnValue;
	uint8                                         Pad_209[0x7];
	struct FEventReply                            CallFunc_Handled_ReturnValue;
};
static_assert(alignof(SidebarReferAFriendActionMenu_C_OnKeyUp) == 0x000008, "Wrong alignment on SidebarReferAFriendActionMenu_C_OnKeyUp");
static_assert(sizeof(SidebarReferAFriendActionMenu_C_OnKeyUp) == 0x0002C8, "Wrong size on SidebarReferAFriendActionMenu_C_OnKeyUp");
static_assert(offsetof(SidebarReferAFriendActionMenu_C_OnKeyUp, MyGeometry) == 0x000000, "Member 'SidebarReferAFriendActionMenu_C_OnKeyUp::MyGeometry' has a wrong offset!");
static_assert(offsetof(SidebarReferAFriendActionMenu_C_OnKeyUp, InKeyEvent) == 0x000040, "Member 'SidebarReferAFriendActionMenu_C_OnKeyUp::InKeyEvent' has a wrong offset!");
static_assert(offsetof(SidebarReferAFriendActionMenu_C_OnKeyUp, ReturnValue) == 0x000080, "Member 'SidebarReferAFriendActionMenu_C_OnKeyUp::ReturnValue' has a wrong offset!");
static_assert(offsetof(SidebarReferAFriendActionMenu_C_OnKeyUp, CallFunc_Unhandled_ReturnValue) == 0x000138, "Member 'SidebarReferAFriendActionMenu_C_OnKeyUp::CallFunc_Unhandled_ReturnValue' has a wrong offset!");
static_assert(offsetof(SidebarReferAFriendActionMenu_C_OnKeyUp, CallFunc_GetKey_ReturnValue) == 0x0001F0, "Member 'SidebarReferAFriendActionMenu_C_OnKeyUp::CallFunc_GetKey_ReturnValue' has a wrong offset!");
static_assert(offsetof(SidebarReferAFriendActionMenu_C_OnKeyUp, CallFunc_EqualEqual_KeyKey_ReturnValue) == 0x000208, "Member 'SidebarReferAFriendActionMenu_C_OnKeyUp::CallFunc_EqualEqual_KeyKey_ReturnValue' has a wrong offset!");
static_assert(offsetof(SidebarReferAFriendActionMenu_C_OnKeyUp, CallFunc_Handled_ReturnValue) == 0x000210, "Member 'SidebarReferAFriendActionMenu_C_OnKeyUp::CallFunc_Handled_ReturnValue' has a wrong offset!");

struct SidebarReferAFriendActionMenu_C_OnRequestOriginChanged final
{
public:
	EReferFriendOrigin                            RequestOrigin;
};
static_assert(alignof(SidebarReferAFriendActionMenu_C_OnRequestOriginChanged) == 0x000001, "Wrong alignment on SidebarReferAFriendActionMenu_C_OnRequestOriginChanged");
static_assert(sizeof(SidebarReferAFriendActionMenu_C_OnRequestOriginChanged) == 0x000001, "Wrong size on SidebarReferAFriendActionMenu_C_OnRequestOriginChanged");
static_assert(offsetof(SidebarReferAFriendActionMenu_C_OnRequestOriginChanged, RequestOrigin) == 0x000000, "Member 'SidebarReferAFriendActionMenu_C_OnRequestOriginChanged::RequestOrigin' has a wrong offset!");

struct SidebarReferAFriendActionMenu_C_Set_QRt_Image final
{
public:
	EReferFriendOrigin                            Origin;
	bool                                          K2Node_SwitchEnum_CmpSuccess;
};
static_assert(alignof(SidebarReferAFriendActionMenu_C_Set_QRt_Image) == 0x000001, "Wrong alignment on SidebarReferAFriendActionMenu_C_Set_QRt_Image");
static_assert(sizeof(SidebarReferAFriendActionMenu_C_Set_QRt_Image) == 0x000002, "Wrong size on SidebarReferAFriendActionMenu_C_Set_QRt_Image");
static_assert(offsetof(SidebarReferAFriendActionMenu_C_Set_QRt_Image, Origin) == 0x000000, "Member 'SidebarReferAFriendActionMenu_C_Set_QRt_Image::Origin' has a wrong offset!");
static_assert(offsetof(SidebarReferAFriendActionMenu_C_Set_QRt_Image, K2Node_SwitchEnum_CmpSuccess) == 0x000001, "Member 'SidebarReferAFriendActionMenu_C_Set_QRt_Image::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");

}
