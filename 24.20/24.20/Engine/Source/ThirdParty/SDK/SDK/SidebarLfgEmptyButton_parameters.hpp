#pragma once

#include "Basic.hpp"

namespace SDK::Params
{

struct SidebarLfgEmptyButton_C_ExecuteUbergraph_SidebarLfgEmptyButton final
{
public:
	int32                                         EntryPoint;
	uint8                                         Pad_4[0x4];
	class UUMGSequencePlayer*                     CallFunc_PlayAnimationReverse_ReturnValue;
	class UUMGSequencePlayer*                     CallFunc_PlayAnimationForward_ReturnValue;
	bool                                          K2Node_Event_IsDesignTime;
};
static_assert(alignof(SidebarLfgEmptyButton_C_ExecuteUbergraph_SidebarLfgEmptyButton) == 0x000008, "Wrong alignment on SidebarLfgEmptyButton_C_ExecuteUbergraph_SidebarLfgEmptyButton");
static_assert(sizeof(SidebarLfgEmptyButton_C_ExecuteUbergraph_SidebarLfgEmptyButton) == 0x000020, "Wrong size on SidebarLfgEmptyButton_C_ExecuteUbergraph_SidebarLfgEmptyButton");
static_assert(offsetof(SidebarLfgEmptyButton_C_ExecuteUbergraph_SidebarLfgEmptyButton, EntryPoint) == 0x000000, "Member 'SidebarLfgEmptyButton_C_ExecuteUbergraph_SidebarLfgEmptyButton::EntryPoint' has a wrong offset!");
static_assert(offsetof(SidebarLfgEmptyButton_C_ExecuteUbergraph_SidebarLfgEmptyButton, CallFunc_PlayAnimationReverse_ReturnValue) == 0x000008, "Member 'SidebarLfgEmptyButton_C_ExecuteUbergraph_SidebarLfgEmptyButton::CallFunc_PlayAnimationReverse_ReturnValue' has a wrong offset!");
static_assert(offsetof(SidebarLfgEmptyButton_C_ExecuteUbergraph_SidebarLfgEmptyButton, CallFunc_PlayAnimationForward_ReturnValue) == 0x000010, "Member 'SidebarLfgEmptyButton_C_ExecuteUbergraph_SidebarLfgEmptyButton::CallFunc_PlayAnimationForward_ReturnValue' has a wrong offset!");
static_assert(offsetof(SidebarLfgEmptyButton_C_ExecuteUbergraph_SidebarLfgEmptyButton, K2Node_Event_IsDesignTime) == 0x000018, "Member 'SidebarLfgEmptyButton_C_ExecuteUbergraph_SidebarLfgEmptyButton::K2Node_Event_IsDesignTime' has a wrong offset!");

struct SidebarLfgEmptyButton_C_PreConstruct final
{
public:
	bool                                          IsDesignTime;
};
static_assert(alignof(SidebarLfgEmptyButton_C_PreConstruct) == 0x000001, "Wrong alignment on SidebarLfgEmptyButton_C_PreConstruct");
static_assert(sizeof(SidebarLfgEmptyButton_C_PreConstruct) == 0x000001, "Wrong size on SidebarLfgEmptyButton_C_PreConstruct");
static_assert(offsetof(SidebarLfgEmptyButton_C_PreConstruct, IsDesignTime) == 0x000000, "Member 'SidebarLfgEmptyButton_C_PreConstruct::IsDesignTime' has a wrong offset!");

}
