#pragma once

#include "Basic.hpp"

#include "SidebarSocialTagCategoryStructure_structs.hpp"

namespace SDK::Params
{

struct SidebarSocialAddingTagWidget_C_EventSetTag final
{
public:
	struct FSidebarSocialTagCategoryStructure     CallFunc_Get_Sidebar_Social_Tag_Category_Structure_SidebarSocialTagCategoryStructure;
	class UMaterialInstanceDynamic*               CallFunc_GetDynamicMaterial_ReturnValue;
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;
};
static_assert(alignof(SidebarSocialAddingTagWidget_C_EventSetTag) == 0x000008, "Wrong alignment on SidebarSocialAddingTagWidget_C_EventSetTag");
static_assert(sizeof(SidebarSocialAddingTagWidget_C_EventSetTag) == 0x000080, "Wrong size on SidebarSocialAddingTagWidget_C_EventSetTag");
static_assert(offsetof(SidebarSocialAddingTagWidget_C_EventSetTag, CallFunc_Get_Sidebar_Social_Tag_Category_Structure_SidebarSocialTagCategoryStructure) == 0x000000, "Member 'SidebarSocialAddingTagWidget_C_EventSetTag::CallFunc_Get_Sidebar_Social_Tag_Category_Structure_SidebarSocialTagCategoryStructure' has a wrong offset!");
static_assert(offsetof(SidebarSocialAddingTagWidget_C_EventSetTag, CallFunc_GetDynamicMaterial_ReturnValue) == 0x000070, "Member 'SidebarSocialAddingTagWidget_C_EventSetTag::CallFunc_GetDynamicMaterial_ReturnValue' has a wrong offset!");
static_assert(offsetof(SidebarSocialAddingTagWidget_C_EventSetTag, CallFunc_PlayAnimation_ReturnValue) == 0x000078, "Member 'SidebarSocialAddingTagWidget_C_EventSetTag::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");

struct SidebarSocialAddingTagWidget_C_ExecuteUbergraph_SidebarSocialAddingTagWidget final
{
public:
	int32                                         EntryPoint;
};
static_assert(alignof(SidebarSocialAddingTagWidget_C_ExecuteUbergraph_SidebarSocialAddingTagWidget) == 0x000004, "Wrong alignment on SidebarSocialAddingTagWidget_C_ExecuteUbergraph_SidebarSocialAddingTagWidget");
static_assert(sizeof(SidebarSocialAddingTagWidget_C_ExecuteUbergraph_SidebarSocialAddingTagWidget) == 0x000004, "Wrong size on SidebarSocialAddingTagWidget_C_ExecuteUbergraph_SidebarSocialAddingTagWidget");
static_assert(offsetof(SidebarSocialAddingTagWidget_C_ExecuteUbergraph_SidebarSocialAddingTagWidget, EntryPoint) == 0x000000, "Member 'SidebarSocialAddingTagWidget_C_ExecuteUbergraph_SidebarSocialAddingTagWidget::EntryPoint' has a wrong offset!");

}
