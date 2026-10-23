#pragma once

#include "Basic.hpp"

namespace SDK::Params
{

struct SocialScreen_C_ExecuteUbergraph_SocialScreen final
{
public:
	int32                                         EntryPoint;
	bool                                          CallFunc_IsMobileGame_ReturnValue;
	uint8                                         Pad_5[0x3];
	class UOverlaySlot*                           CallFunc_SlotAsOverlaySlot_ReturnValue;
	class UOverlaySlot*                           CallFunc_SlotAsOverlaySlot_ReturnValue_1;
};
static_assert(alignof(SocialScreen_C_ExecuteUbergraph_SocialScreen) == 0x000008, "Wrong alignment on SocialScreen_C_ExecuteUbergraph_SocialScreen");
static_assert(sizeof(SocialScreen_C_ExecuteUbergraph_SocialScreen) == 0x000018, "Wrong size on SocialScreen_C_ExecuteUbergraph_SocialScreen");
static_assert(offsetof(SocialScreen_C_ExecuteUbergraph_SocialScreen, EntryPoint) == 0x000000, "Member 'SocialScreen_C_ExecuteUbergraph_SocialScreen::EntryPoint' has a wrong offset!");
static_assert(offsetof(SocialScreen_C_ExecuteUbergraph_SocialScreen, CallFunc_IsMobileGame_ReturnValue) == 0x000004, "Member 'SocialScreen_C_ExecuteUbergraph_SocialScreen::CallFunc_IsMobileGame_ReturnValue' has a wrong offset!");
static_assert(offsetof(SocialScreen_C_ExecuteUbergraph_SocialScreen, CallFunc_SlotAsOverlaySlot_ReturnValue) == 0x000008, "Member 'SocialScreen_C_ExecuteUbergraph_SocialScreen::CallFunc_SlotAsOverlaySlot_ReturnValue' has a wrong offset!");
static_assert(offsetof(SocialScreen_C_ExecuteUbergraph_SocialScreen, CallFunc_SlotAsOverlaySlot_ReturnValue_1) == 0x000010, "Member 'SocialScreen_C_ExecuteUbergraph_SocialScreen::CallFunc_SlotAsOverlaySlot_ReturnValue_1' has a wrong offset!");

struct SocialScreen_C_Show_Career_Screen_Event final
{
public:
	bool                                          bPassThrough;
};
static_assert(alignof(SocialScreen_C_Show_Career_Screen_Event) == 0x000001, "Wrong alignment on SocialScreen_C_Show_Career_Screen_Event");
static_assert(sizeof(SocialScreen_C_Show_Career_Screen_Event) == 0x000001, "Wrong size on SocialScreen_C_Show_Career_Screen_Event");
static_assert(offsetof(SocialScreen_C_Show_Career_Screen_Event, bPassThrough) == 0x000000, "Member 'SocialScreen_C_Show_Career_Screen_Event::bPassThrough' has a wrong offset!");

}
