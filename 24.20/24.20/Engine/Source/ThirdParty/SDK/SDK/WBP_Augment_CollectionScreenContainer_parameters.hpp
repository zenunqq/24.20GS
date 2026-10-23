#pragma once

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "UMG_structs.hpp"
#include "SlateCore_structs.hpp"

namespace SDK::Params
{

struct WBP_Augment_CollectionScreenContainer_C_BP_OnShowTabsSet final
{
public:
	bool                                          bShowTabs;
};
static_assert(alignof(WBP_Augment_CollectionScreenContainer_C_BP_OnShowTabsSet) == 0x000001, "Wrong alignment on WBP_Augment_CollectionScreenContainer_C_BP_OnShowTabsSet");
static_assert(sizeof(WBP_Augment_CollectionScreenContainer_C_BP_OnShowTabsSet) == 0x000001, "Wrong size on WBP_Augment_CollectionScreenContainer_C_BP_OnShowTabsSet");
static_assert(offsetof(WBP_Augment_CollectionScreenContainer_C_BP_OnShowTabsSet, bShowTabs) == 0x000000, "Member 'WBP_Augment_CollectionScreenContainer_C_BP_OnShowTabsSet::bShowTabs' has a wrong offset!");

struct WBP_Augment_CollectionScreenContainer_C_ExecuteUbergraph_WBP_Augment_CollectionScreenContainer final
{
public:
	int32                                         EntryPoint;
	bool                                          CallFunc_IsMobileGame_ReturnValue;
	bool                                          Temp_bool_Variable;
	ESlateVisibility                              Temp_byte_Variable;
	ESlateVisibility                              Temp_byte_Variable_1;
	struct FSlateColor                            K2Node_MakeStruct_SlateColor;
	bool                                          Temp_bool_Variable_1;
	uint8                                         Pad_1D[0x3];
	struct FVector2D                              Temp_struct_Variable;
	struct FVector2D                              Temp_struct_Variable_1;
	bool                                          K2Node_Event_IsDesignTime;
	uint8                                         Pad_41[0x7];
	struct FVector2D                              K2Node_Select_Default;
	uint8                                         Pad_58[0x8];
	struct FSlateBrush                            K2Node_MakeStruct_SlateBrush;
	bool                                          K2Node_Event_bShowTabs;
	ESlateVisibility                              K2Node_Select_Default_1;
};
static_assert(alignof(WBP_Augment_CollectionScreenContainer_C_ExecuteUbergraph_WBP_Augment_CollectionScreenContainer) == 0x000010, "Wrong alignment on WBP_Augment_CollectionScreenContainer_C_ExecuteUbergraph_WBP_Augment_CollectionScreenContainer");
static_assert(sizeof(WBP_Augment_CollectionScreenContainer_C_ExecuteUbergraph_WBP_Augment_CollectionScreenContainer) == 0x000130, "Wrong size on WBP_Augment_CollectionScreenContainer_C_ExecuteUbergraph_WBP_Augment_CollectionScreenContainer");
static_assert(offsetof(WBP_Augment_CollectionScreenContainer_C_ExecuteUbergraph_WBP_Augment_CollectionScreenContainer, EntryPoint) == 0x000000, "Member 'WBP_Augment_CollectionScreenContainer_C_ExecuteUbergraph_WBP_Augment_CollectionScreenContainer::EntryPoint' has a wrong offset!");
static_assert(offsetof(WBP_Augment_CollectionScreenContainer_C_ExecuteUbergraph_WBP_Augment_CollectionScreenContainer, CallFunc_IsMobileGame_ReturnValue) == 0x000004, "Member 'WBP_Augment_CollectionScreenContainer_C_ExecuteUbergraph_WBP_Augment_CollectionScreenContainer::CallFunc_IsMobileGame_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Augment_CollectionScreenContainer_C_ExecuteUbergraph_WBP_Augment_CollectionScreenContainer, Temp_bool_Variable) == 0x000005, "Member 'WBP_Augment_CollectionScreenContainer_C_ExecuteUbergraph_WBP_Augment_CollectionScreenContainer::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(WBP_Augment_CollectionScreenContainer_C_ExecuteUbergraph_WBP_Augment_CollectionScreenContainer, Temp_byte_Variable) == 0x000006, "Member 'WBP_Augment_CollectionScreenContainer_C_ExecuteUbergraph_WBP_Augment_CollectionScreenContainer::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(WBP_Augment_CollectionScreenContainer_C_ExecuteUbergraph_WBP_Augment_CollectionScreenContainer, Temp_byte_Variable_1) == 0x000007, "Member 'WBP_Augment_CollectionScreenContainer_C_ExecuteUbergraph_WBP_Augment_CollectionScreenContainer::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(WBP_Augment_CollectionScreenContainer_C_ExecuteUbergraph_WBP_Augment_CollectionScreenContainer, K2Node_MakeStruct_SlateColor) == 0x000008, "Member 'WBP_Augment_CollectionScreenContainer_C_ExecuteUbergraph_WBP_Augment_CollectionScreenContainer::K2Node_MakeStruct_SlateColor' has a wrong offset!");
static_assert(offsetof(WBP_Augment_CollectionScreenContainer_C_ExecuteUbergraph_WBP_Augment_CollectionScreenContainer, Temp_bool_Variable_1) == 0x00001C, "Member 'WBP_Augment_CollectionScreenContainer_C_ExecuteUbergraph_WBP_Augment_CollectionScreenContainer::Temp_bool_Variable_1' has a wrong offset!");
static_assert(offsetof(WBP_Augment_CollectionScreenContainer_C_ExecuteUbergraph_WBP_Augment_CollectionScreenContainer, Temp_struct_Variable) == 0x000020, "Member 'WBP_Augment_CollectionScreenContainer_C_ExecuteUbergraph_WBP_Augment_CollectionScreenContainer::Temp_struct_Variable' has a wrong offset!");
static_assert(offsetof(WBP_Augment_CollectionScreenContainer_C_ExecuteUbergraph_WBP_Augment_CollectionScreenContainer, Temp_struct_Variable_1) == 0x000030, "Member 'WBP_Augment_CollectionScreenContainer_C_ExecuteUbergraph_WBP_Augment_CollectionScreenContainer::Temp_struct_Variable_1' has a wrong offset!");
static_assert(offsetof(WBP_Augment_CollectionScreenContainer_C_ExecuteUbergraph_WBP_Augment_CollectionScreenContainer, K2Node_Event_IsDesignTime) == 0x000040, "Member 'WBP_Augment_CollectionScreenContainer_C_ExecuteUbergraph_WBP_Augment_CollectionScreenContainer::K2Node_Event_IsDesignTime' has a wrong offset!");
static_assert(offsetof(WBP_Augment_CollectionScreenContainer_C_ExecuteUbergraph_WBP_Augment_CollectionScreenContainer, K2Node_Select_Default) == 0x000048, "Member 'WBP_Augment_CollectionScreenContainer_C_ExecuteUbergraph_WBP_Augment_CollectionScreenContainer::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(WBP_Augment_CollectionScreenContainer_C_ExecuteUbergraph_WBP_Augment_CollectionScreenContainer, K2Node_MakeStruct_SlateBrush) == 0x000060, "Member 'WBP_Augment_CollectionScreenContainer_C_ExecuteUbergraph_WBP_Augment_CollectionScreenContainer::K2Node_MakeStruct_SlateBrush' has a wrong offset!");
static_assert(offsetof(WBP_Augment_CollectionScreenContainer_C_ExecuteUbergraph_WBP_Augment_CollectionScreenContainer, K2Node_Event_bShowTabs) == 0x000120, "Member 'WBP_Augment_CollectionScreenContainer_C_ExecuteUbergraph_WBP_Augment_CollectionScreenContainer::K2Node_Event_bShowTabs' has a wrong offset!");
static_assert(offsetof(WBP_Augment_CollectionScreenContainer_C_ExecuteUbergraph_WBP_Augment_CollectionScreenContainer, K2Node_Select_Default_1) == 0x000121, "Member 'WBP_Augment_CollectionScreenContainer_C_ExecuteUbergraph_WBP_Augment_CollectionScreenContainer::K2Node_Select_Default_1' has a wrong offset!");

struct WBP_Augment_CollectionScreenContainer_C_PreConstruct final
{
public:
	bool                                          IsDesignTime;
};
static_assert(alignof(WBP_Augment_CollectionScreenContainer_C_PreConstruct) == 0x000001, "Wrong alignment on WBP_Augment_CollectionScreenContainer_C_PreConstruct");
static_assert(sizeof(WBP_Augment_CollectionScreenContainer_C_PreConstruct) == 0x000001, "Wrong size on WBP_Augment_CollectionScreenContainer_C_PreConstruct");
static_assert(offsetof(WBP_Augment_CollectionScreenContainer_C_PreConstruct, IsDesignTime) == 0x000000, "Member 'WBP_Augment_CollectionScreenContainer_C_PreConstruct::IsDesignTime' has a wrong offset!");

}
