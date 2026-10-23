#pragma once

#include "Basic.hpp"

#include "FortniteUI_structs.hpp"
#include "SidebarSocialTagCategoryStructure_structs.hpp"
#include "UMG_structs.hpp"
#include "SlateCore_structs.hpp"

namespace SDK::Params
{

struct BP_SidebarCollectionScreenContainerEditTags_C_BndEvt__BP_SidebarCollectionScreenContainerEditTags_TagsInfoButton_K2Node_ComponentBoundEvent_2_CommonButtonClicked__DelegateSignature final
{
public:
	class UCommonButtonLegacy*                    Button;
};
static_assert(alignof(BP_SidebarCollectionScreenContainerEditTags_C_BndEvt__BP_SidebarCollectionScreenContainerEditTags_TagsInfoButton_K2Node_ComponentBoundEvent_2_CommonButtonClicked__DelegateSignature) == 0x000008, "Wrong alignment on BP_SidebarCollectionScreenContainerEditTags_C_BndEvt__BP_SidebarCollectionScreenContainerEditTags_TagsInfoButton_K2Node_ComponentBoundEvent_2_CommonButtonClicked__DelegateSignature");
static_assert(sizeof(BP_SidebarCollectionScreenContainerEditTags_C_BndEvt__BP_SidebarCollectionScreenContainerEditTags_TagsInfoButton_K2Node_ComponentBoundEvent_2_CommonButtonClicked__DelegateSignature) == 0x000008, "Wrong size on BP_SidebarCollectionScreenContainerEditTags_C_BndEvt__BP_SidebarCollectionScreenContainerEditTags_TagsInfoButton_K2Node_ComponentBoundEvent_2_CommonButtonClicked__DelegateSignature");
static_assert(offsetof(BP_SidebarCollectionScreenContainerEditTags_C_BndEvt__BP_SidebarCollectionScreenContainerEditTags_TagsInfoButton_K2Node_ComponentBoundEvent_2_CommonButtonClicked__DelegateSignature, Button) == 0x000000, "Member 'BP_SidebarCollectionScreenContainerEditTags_C_BndEvt__BP_SidebarCollectionScreenContainerEditTags_TagsInfoButton_K2Node_ComponentBoundEvent_2_CommonButtonClicked__DelegateSignature::Button' has a wrong offset!");

struct BP_SidebarCollectionScreenContainerEditTags_C_BndEvt__BP_SidebarCollectionScreenContainerEditTags_WhatAreTagsInputBlocker_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature final
{
public:
	class UCommonButtonLegacy*                    Button;
};
static_assert(alignof(BP_SidebarCollectionScreenContainerEditTags_C_BndEvt__BP_SidebarCollectionScreenContainerEditTags_WhatAreTagsInputBlocker_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature) == 0x000008, "Wrong alignment on BP_SidebarCollectionScreenContainerEditTags_C_BndEvt__BP_SidebarCollectionScreenContainerEditTags_WhatAreTagsInputBlocker_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature");
static_assert(sizeof(BP_SidebarCollectionScreenContainerEditTags_C_BndEvt__BP_SidebarCollectionScreenContainerEditTags_WhatAreTagsInputBlocker_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature) == 0x000008, "Wrong size on BP_SidebarCollectionScreenContainerEditTags_C_BndEvt__BP_SidebarCollectionScreenContainerEditTags_WhatAreTagsInputBlocker_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature");
static_assert(offsetof(BP_SidebarCollectionScreenContainerEditTags_C_BndEvt__BP_SidebarCollectionScreenContainerEditTags_WhatAreTagsInputBlocker_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature, Button) == 0x000000, "Member 'BP_SidebarCollectionScreenContainerEditTags_C_BndEvt__BP_SidebarCollectionScreenContainerEditTags_WhatAreTagsInputBlocker_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature::Button' has a wrong offset!");

struct BP_SidebarCollectionScreenContainerEditTags_C_BP_OnCollectionTabTitleChange final
{
public:
	ESocialTagCategory                            TagCategory;
};
static_assert(alignof(BP_SidebarCollectionScreenContainerEditTags_C_BP_OnCollectionTabTitleChange) == 0x000001, "Wrong alignment on BP_SidebarCollectionScreenContainerEditTags_C_BP_OnCollectionTabTitleChange");
static_assert(sizeof(BP_SidebarCollectionScreenContainerEditTags_C_BP_OnCollectionTabTitleChange) == 0x000001, "Wrong size on BP_SidebarCollectionScreenContainerEditTags_C_BP_OnCollectionTabTitleChange");
static_assert(offsetof(BP_SidebarCollectionScreenContainerEditTags_C_BP_OnCollectionTabTitleChange, TagCategory) == 0x000000, "Member 'BP_SidebarCollectionScreenContainerEditTags_C_BP_OnCollectionTabTitleChange::TagCategory' has a wrong offset!");

struct BP_SidebarCollectionScreenContainerEditTags_C_BP_OnShowTabsSet final
{
public:
	bool                                          bShowTabs;
};
static_assert(alignof(BP_SidebarCollectionScreenContainerEditTags_C_BP_OnShowTabsSet) == 0x000001, "Wrong alignment on BP_SidebarCollectionScreenContainerEditTags_C_BP_OnShowTabsSet");
static_assert(sizeof(BP_SidebarCollectionScreenContainerEditTags_C_BP_OnShowTabsSet) == 0x000001, "Wrong size on BP_SidebarCollectionScreenContainerEditTags_C_BP_OnShowTabsSet");
static_assert(offsetof(BP_SidebarCollectionScreenContainerEditTags_C_BP_OnShowTabsSet, bShowTabs) == 0x000000, "Member 'BP_SidebarCollectionScreenContainerEditTags_C_BP_OnShowTabsSet::bShowTabs' has a wrong offset!");

struct BP_SidebarCollectionScreenContainerEditTags_C_ExecuteUbergraph_BP_SidebarCollectionScreenContainerEditTags final
{
public:
	int32                                         EntryPoint;
	ESlateVisibility                              Temp_byte_Variable;
	uint8                                         Pad_5[0x3];
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;
	struct FMargin                                K2Node_MakeStruct_Margin;
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_1;
	bool                                          K2Node_Event_bShowTabs;
	ESlateVisibility                              Temp_byte_Variable_1;
	uint8                                         Pad_32[0x6];
	class UCommonButtonLegacy*                    K2Node_ComponentBoundEvent_Button_1;
	bool                                          CallFunc_IsActivated_ReturnValue;
	uint8                                         Pad_41[0x7];
	class UCommonButtonLegacy*                    K2Node_ComponentBoundEvent_Button;
	ESocialTagCategory                            K2Node_Event_TagCategory;
	uint8                                         Pad_51[0x7];
	class FString                                 CallFunc_GetEnumeratorUserFriendlyName_ReturnValue;
	bool                                          Temp_bool_Variable;
	uint8                                         Pad_69[0x7];
	struct FSidebarSocialTagCategoryStructure     CallFunc_Get_Sidebar_Social_Tag_Category_Structure_SidebarSocialTagCategoryStructure;
	ESlateVisibility                              K2Node_Select_Default;
	bool                                          K2Node_Event_IsDesignTime;
	uint8                                         Pad_E2[0x6];
	class UMaterialInstanceDynamic*               CallFunc_GetDynamicMaterial_ReturnValue;
	class UMaterialInstanceDynamic*               CallFunc_GetDynamicMaterial_ReturnValue_1;
	bool                                          CallFunc_IsMobileGame_ReturnValue;
	uint8                                         Pad_F9[0x7];
	class UBorderSlot*                            CallFunc_SlotAsBorderSlot_ReturnValue;
};
static_assert(alignof(BP_SidebarCollectionScreenContainerEditTags_C_ExecuteUbergraph_BP_SidebarCollectionScreenContainerEditTags) == 0x000008, "Wrong alignment on BP_SidebarCollectionScreenContainerEditTags_C_ExecuteUbergraph_BP_SidebarCollectionScreenContainerEditTags");
static_assert(sizeof(BP_SidebarCollectionScreenContainerEditTags_C_ExecuteUbergraph_BP_SidebarCollectionScreenContainerEditTags) == 0x000108, "Wrong size on BP_SidebarCollectionScreenContainerEditTags_C_ExecuteUbergraph_BP_SidebarCollectionScreenContainerEditTags");
static_assert(offsetof(BP_SidebarCollectionScreenContainerEditTags_C_ExecuteUbergraph_BP_SidebarCollectionScreenContainerEditTags, EntryPoint) == 0x000000, "Member 'BP_SidebarCollectionScreenContainerEditTags_C_ExecuteUbergraph_BP_SidebarCollectionScreenContainerEditTags::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_SidebarCollectionScreenContainerEditTags_C_ExecuteUbergraph_BP_SidebarCollectionScreenContainerEditTags, Temp_byte_Variable) == 0x000004, "Member 'BP_SidebarCollectionScreenContainerEditTags_C_ExecuteUbergraph_BP_SidebarCollectionScreenContainerEditTags::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(BP_SidebarCollectionScreenContainerEditTags_C_ExecuteUbergraph_BP_SidebarCollectionScreenContainerEditTags, K2Node_CreateDelegate_OutputDelegate) == 0x000008, "Member 'BP_SidebarCollectionScreenContainerEditTags_C_ExecuteUbergraph_BP_SidebarCollectionScreenContainerEditTags::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(BP_SidebarCollectionScreenContainerEditTags_C_ExecuteUbergraph_BP_SidebarCollectionScreenContainerEditTags, K2Node_MakeStruct_Margin) == 0x000014, "Member 'BP_SidebarCollectionScreenContainerEditTags_C_ExecuteUbergraph_BP_SidebarCollectionScreenContainerEditTags::K2Node_MakeStruct_Margin' has a wrong offset!");
static_assert(offsetof(BP_SidebarCollectionScreenContainerEditTags_C_ExecuteUbergraph_BP_SidebarCollectionScreenContainerEditTags, K2Node_CreateDelegate_OutputDelegate_1) == 0x000024, "Member 'BP_SidebarCollectionScreenContainerEditTags_C_ExecuteUbergraph_BP_SidebarCollectionScreenContainerEditTags::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(BP_SidebarCollectionScreenContainerEditTags_C_ExecuteUbergraph_BP_SidebarCollectionScreenContainerEditTags, K2Node_Event_bShowTabs) == 0x000030, "Member 'BP_SidebarCollectionScreenContainerEditTags_C_ExecuteUbergraph_BP_SidebarCollectionScreenContainerEditTags::K2Node_Event_bShowTabs' has a wrong offset!");
static_assert(offsetof(BP_SidebarCollectionScreenContainerEditTags_C_ExecuteUbergraph_BP_SidebarCollectionScreenContainerEditTags, Temp_byte_Variable_1) == 0x000031, "Member 'BP_SidebarCollectionScreenContainerEditTags_C_ExecuteUbergraph_BP_SidebarCollectionScreenContainerEditTags::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(BP_SidebarCollectionScreenContainerEditTags_C_ExecuteUbergraph_BP_SidebarCollectionScreenContainerEditTags, K2Node_ComponentBoundEvent_Button_1) == 0x000038, "Member 'BP_SidebarCollectionScreenContainerEditTags_C_ExecuteUbergraph_BP_SidebarCollectionScreenContainerEditTags::K2Node_ComponentBoundEvent_Button_1' has a wrong offset!");
static_assert(offsetof(BP_SidebarCollectionScreenContainerEditTags_C_ExecuteUbergraph_BP_SidebarCollectionScreenContainerEditTags, CallFunc_IsActivated_ReturnValue) == 0x000040, "Member 'BP_SidebarCollectionScreenContainerEditTags_C_ExecuteUbergraph_BP_SidebarCollectionScreenContainerEditTags::CallFunc_IsActivated_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SidebarCollectionScreenContainerEditTags_C_ExecuteUbergraph_BP_SidebarCollectionScreenContainerEditTags, K2Node_ComponentBoundEvent_Button) == 0x000048, "Member 'BP_SidebarCollectionScreenContainerEditTags_C_ExecuteUbergraph_BP_SidebarCollectionScreenContainerEditTags::K2Node_ComponentBoundEvent_Button' has a wrong offset!");
static_assert(offsetof(BP_SidebarCollectionScreenContainerEditTags_C_ExecuteUbergraph_BP_SidebarCollectionScreenContainerEditTags, K2Node_Event_TagCategory) == 0x000050, "Member 'BP_SidebarCollectionScreenContainerEditTags_C_ExecuteUbergraph_BP_SidebarCollectionScreenContainerEditTags::K2Node_Event_TagCategory' has a wrong offset!");
static_assert(offsetof(BP_SidebarCollectionScreenContainerEditTags_C_ExecuteUbergraph_BP_SidebarCollectionScreenContainerEditTags, CallFunc_GetEnumeratorUserFriendlyName_ReturnValue) == 0x000058, "Member 'BP_SidebarCollectionScreenContainerEditTags_C_ExecuteUbergraph_BP_SidebarCollectionScreenContainerEditTags::CallFunc_GetEnumeratorUserFriendlyName_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SidebarCollectionScreenContainerEditTags_C_ExecuteUbergraph_BP_SidebarCollectionScreenContainerEditTags, Temp_bool_Variable) == 0x000068, "Member 'BP_SidebarCollectionScreenContainerEditTags_C_ExecuteUbergraph_BP_SidebarCollectionScreenContainerEditTags::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(BP_SidebarCollectionScreenContainerEditTags_C_ExecuteUbergraph_BP_SidebarCollectionScreenContainerEditTags, CallFunc_Get_Sidebar_Social_Tag_Category_Structure_SidebarSocialTagCategoryStructure) == 0x000070, "Member 'BP_SidebarCollectionScreenContainerEditTags_C_ExecuteUbergraph_BP_SidebarCollectionScreenContainerEditTags::CallFunc_Get_Sidebar_Social_Tag_Category_Structure_SidebarSocialTagCategoryStructure' has a wrong offset!");
static_assert(offsetof(BP_SidebarCollectionScreenContainerEditTags_C_ExecuteUbergraph_BP_SidebarCollectionScreenContainerEditTags, K2Node_Select_Default) == 0x0000E0, "Member 'BP_SidebarCollectionScreenContainerEditTags_C_ExecuteUbergraph_BP_SidebarCollectionScreenContainerEditTags::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(BP_SidebarCollectionScreenContainerEditTags_C_ExecuteUbergraph_BP_SidebarCollectionScreenContainerEditTags, K2Node_Event_IsDesignTime) == 0x0000E1, "Member 'BP_SidebarCollectionScreenContainerEditTags_C_ExecuteUbergraph_BP_SidebarCollectionScreenContainerEditTags::K2Node_Event_IsDesignTime' has a wrong offset!");
static_assert(offsetof(BP_SidebarCollectionScreenContainerEditTags_C_ExecuteUbergraph_BP_SidebarCollectionScreenContainerEditTags, CallFunc_GetDynamicMaterial_ReturnValue) == 0x0000E8, "Member 'BP_SidebarCollectionScreenContainerEditTags_C_ExecuteUbergraph_BP_SidebarCollectionScreenContainerEditTags::CallFunc_GetDynamicMaterial_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SidebarCollectionScreenContainerEditTags_C_ExecuteUbergraph_BP_SidebarCollectionScreenContainerEditTags, CallFunc_GetDynamicMaterial_ReturnValue_1) == 0x0000F0, "Member 'BP_SidebarCollectionScreenContainerEditTags_C_ExecuteUbergraph_BP_SidebarCollectionScreenContainerEditTags::CallFunc_GetDynamicMaterial_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_SidebarCollectionScreenContainerEditTags_C_ExecuteUbergraph_BP_SidebarCollectionScreenContainerEditTags, CallFunc_IsMobileGame_ReturnValue) == 0x0000F8, "Member 'BP_SidebarCollectionScreenContainerEditTags_C_ExecuteUbergraph_BP_SidebarCollectionScreenContainerEditTags::CallFunc_IsMobileGame_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SidebarCollectionScreenContainerEditTags_C_ExecuteUbergraph_BP_SidebarCollectionScreenContainerEditTags, CallFunc_SlotAsBorderSlot_ReturnValue) == 0x000100, "Member 'BP_SidebarCollectionScreenContainerEditTags_C_ExecuteUbergraph_BP_SidebarCollectionScreenContainerEditTags::CallFunc_SlotAsBorderSlot_ReturnValue' has a wrong offset!");

struct BP_SidebarCollectionScreenContainerEditTags_C_PreConstruct final
{
public:
	bool                                          IsDesignTime;
};
static_assert(alignof(BP_SidebarCollectionScreenContainerEditTags_C_PreConstruct) == 0x000001, "Wrong alignment on BP_SidebarCollectionScreenContainerEditTags_C_PreConstruct");
static_assert(sizeof(BP_SidebarCollectionScreenContainerEditTags_C_PreConstruct) == 0x000001, "Wrong size on BP_SidebarCollectionScreenContainerEditTags_C_PreConstruct");
static_assert(offsetof(BP_SidebarCollectionScreenContainerEditTags_C_PreConstruct, IsDesignTime) == 0x000000, "Member 'BP_SidebarCollectionScreenContainerEditTags_C_PreConstruct::IsDesignTime' has a wrong offset!");

}
