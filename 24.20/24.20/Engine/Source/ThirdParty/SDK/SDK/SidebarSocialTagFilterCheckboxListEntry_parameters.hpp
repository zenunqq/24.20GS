#pragma once

#include "Basic.hpp"

namespace SDK::Params
{

struct SidebarSocialTagFilterCheckboxListEntry_C_ExecuteUbergraph_SidebarSocialTagFilterCheckboxListEntry final
{
public:
	int32                                         EntryPoint;
	bool                                          CallFunc_IsUsingTouch_ReturnValue;
	uint8                                         Pad_5[0x3];
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue_1;
	bool                                          CallFunc_IsMobileGame_ReturnValue;
	uint8                                         Pad_19[0x7];
	class USidebarSocialTagWidget_C*              K2Node_DynamicCast_AsSidebar_Social_Tag_Widget;
	bool                                          K2Node_DynamicCast_bSuccess;
	uint8                                         Pad_29[0x7];
	class USidebarSocialTagWidget_C*              K2Node_DynamicCast_AsSidebar_Social_Tag_Widget_1;
	bool                                          K2Node_DynamicCast_bSuccess_1;
	bool                                          CallFunc_IsUsingTouch_ReturnValue_1;
};
static_assert(alignof(SidebarSocialTagFilterCheckboxListEntry_C_ExecuteUbergraph_SidebarSocialTagFilterCheckboxListEntry) == 0x000008, "Wrong alignment on SidebarSocialTagFilterCheckboxListEntry_C_ExecuteUbergraph_SidebarSocialTagFilterCheckboxListEntry");
static_assert(sizeof(SidebarSocialTagFilterCheckboxListEntry_C_ExecuteUbergraph_SidebarSocialTagFilterCheckboxListEntry) == 0x000040, "Wrong size on SidebarSocialTagFilterCheckboxListEntry_C_ExecuteUbergraph_SidebarSocialTagFilterCheckboxListEntry");
static_assert(offsetof(SidebarSocialTagFilterCheckboxListEntry_C_ExecuteUbergraph_SidebarSocialTagFilterCheckboxListEntry, EntryPoint) == 0x000000, "Member 'SidebarSocialTagFilterCheckboxListEntry_C_ExecuteUbergraph_SidebarSocialTagFilterCheckboxListEntry::EntryPoint' has a wrong offset!");
static_assert(offsetof(SidebarSocialTagFilterCheckboxListEntry_C_ExecuteUbergraph_SidebarSocialTagFilterCheckboxListEntry, CallFunc_IsUsingTouch_ReturnValue) == 0x000004, "Member 'SidebarSocialTagFilterCheckboxListEntry_C_ExecuteUbergraph_SidebarSocialTagFilterCheckboxListEntry::CallFunc_IsUsingTouch_ReturnValue' has a wrong offset!");
static_assert(offsetof(SidebarSocialTagFilterCheckboxListEntry_C_ExecuteUbergraph_SidebarSocialTagFilterCheckboxListEntry, CallFunc_PlayAnimation_ReturnValue) == 0x000008, "Member 'SidebarSocialTagFilterCheckboxListEntry_C_ExecuteUbergraph_SidebarSocialTagFilterCheckboxListEntry::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");
static_assert(offsetof(SidebarSocialTagFilterCheckboxListEntry_C_ExecuteUbergraph_SidebarSocialTagFilterCheckboxListEntry, CallFunc_PlayAnimation_ReturnValue_1) == 0x000010, "Member 'SidebarSocialTagFilterCheckboxListEntry_C_ExecuteUbergraph_SidebarSocialTagFilterCheckboxListEntry::CallFunc_PlayAnimation_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(SidebarSocialTagFilterCheckboxListEntry_C_ExecuteUbergraph_SidebarSocialTagFilterCheckboxListEntry, CallFunc_IsMobileGame_ReturnValue) == 0x000018, "Member 'SidebarSocialTagFilterCheckboxListEntry_C_ExecuteUbergraph_SidebarSocialTagFilterCheckboxListEntry::CallFunc_IsMobileGame_ReturnValue' has a wrong offset!");
static_assert(offsetof(SidebarSocialTagFilterCheckboxListEntry_C_ExecuteUbergraph_SidebarSocialTagFilterCheckboxListEntry, K2Node_DynamicCast_AsSidebar_Social_Tag_Widget) == 0x000020, "Member 'SidebarSocialTagFilterCheckboxListEntry_C_ExecuteUbergraph_SidebarSocialTagFilterCheckboxListEntry::K2Node_DynamicCast_AsSidebar_Social_Tag_Widget' has a wrong offset!");
static_assert(offsetof(SidebarSocialTagFilterCheckboxListEntry_C_ExecuteUbergraph_SidebarSocialTagFilterCheckboxListEntry, K2Node_DynamicCast_bSuccess) == 0x000028, "Member 'SidebarSocialTagFilterCheckboxListEntry_C_ExecuteUbergraph_SidebarSocialTagFilterCheckboxListEntry::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(SidebarSocialTagFilterCheckboxListEntry_C_ExecuteUbergraph_SidebarSocialTagFilterCheckboxListEntry, K2Node_DynamicCast_AsSidebar_Social_Tag_Widget_1) == 0x000030, "Member 'SidebarSocialTagFilterCheckboxListEntry_C_ExecuteUbergraph_SidebarSocialTagFilterCheckboxListEntry::K2Node_DynamicCast_AsSidebar_Social_Tag_Widget_1' has a wrong offset!");
static_assert(offsetof(SidebarSocialTagFilterCheckboxListEntry_C_ExecuteUbergraph_SidebarSocialTagFilterCheckboxListEntry, K2Node_DynamicCast_bSuccess_1) == 0x000038, "Member 'SidebarSocialTagFilterCheckboxListEntry_C_ExecuteUbergraph_SidebarSocialTagFilterCheckboxListEntry::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(SidebarSocialTagFilterCheckboxListEntry_C_ExecuteUbergraph_SidebarSocialTagFilterCheckboxListEntry, CallFunc_IsUsingTouch_ReturnValue_1) == 0x000039, "Member 'SidebarSocialTagFilterCheckboxListEntry_C_ExecuteUbergraph_SidebarSocialTagFilterCheckboxListEntry::CallFunc_IsUsingTouch_ReturnValue_1' has a wrong offset!");

}
