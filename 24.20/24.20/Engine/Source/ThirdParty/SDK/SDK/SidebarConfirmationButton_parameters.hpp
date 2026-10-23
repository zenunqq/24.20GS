#pragma once

#include "Basic.hpp"

namespace SDK::Params
{

struct SidebarConfirmationButton_C_ExecuteUbergraph_SidebarConfirmationButton final
{
public:
	int32                                         EntryPoint;
	uint8                                         Pad_4[0x4];
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue_1;
	bool                                          K2Node_Event_IsDesignTime;
};
static_assert(alignof(SidebarConfirmationButton_C_ExecuteUbergraph_SidebarConfirmationButton) == 0x000008, "Wrong alignment on SidebarConfirmationButton_C_ExecuteUbergraph_SidebarConfirmationButton");
static_assert(sizeof(SidebarConfirmationButton_C_ExecuteUbergraph_SidebarConfirmationButton) == 0x000020, "Wrong size on SidebarConfirmationButton_C_ExecuteUbergraph_SidebarConfirmationButton");
static_assert(offsetof(SidebarConfirmationButton_C_ExecuteUbergraph_SidebarConfirmationButton, EntryPoint) == 0x000000, "Member 'SidebarConfirmationButton_C_ExecuteUbergraph_SidebarConfirmationButton::EntryPoint' has a wrong offset!");
static_assert(offsetof(SidebarConfirmationButton_C_ExecuteUbergraph_SidebarConfirmationButton, CallFunc_PlayAnimation_ReturnValue) == 0x000008, "Member 'SidebarConfirmationButton_C_ExecuteUbergraph_SidebarConfirmationButton::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");
static_assert(offsetof(SidebarConfirmationButton_C_ExecuteUbergraph_SidebarConfirmationButton, CallFunc_PlayAnimation_ReturnValue_1) == 0x000010, "Member 'SidebarConfirmationButton_C_ExecuteUbergraph_SidebarConfirmationButton::CallFunc_PlayAnimation_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(SidebarConfirmationButton_C_ExecuteUbergraph_SidebarConfirmationButton, K2Node_Event_IsDesignTime) == 0x000018, "Member 'SidebarConfirmationButton_C_ExecuteUbergraph_SidebarConfirmationButton::K2Node_Event_IsDesignTime' has a wrong offset!");

struct SidebarConfirmationButton_C_PreConstruct final
{
public:
	bool                                          IsDesignTime;
};
static_assert(alignof(SidebarConfirmationButton_C_PreConstruct) == 0x000001, "Wrong alignment on SidebarConfirmationButton_C_PreConstruct");
static_assert(sizeof(SidebarConfirmationButton_C_PreConstruct) == 0x000001, "Wrong size on SidebarConfirmationButton_C_PreConstruct");
static_assert(offsetof(SidebarConfirmationButton_C_PreConstruct, IsDesignTime) == 0x000000, "Member 'SidebarConfirmationButton_C_PreConstruct::IsDesignTime' has a wrong offset!");

}
