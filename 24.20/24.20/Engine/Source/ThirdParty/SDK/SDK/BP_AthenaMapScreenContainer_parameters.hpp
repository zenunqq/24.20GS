#pragma once

#include "Basic.hpp"

#include "UMG_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "SlateCore_structs.hpp"

namespace SDK::Params
{

struct BP_AthenaMapScreenContainer_C_BP_OnShowTabsSet final
{
public:
	bool                                          bShowTabs;
};
static_assert(alignof(BP_AthenaMapScreenContainer_C_BP_OnShowTabsSet) == 0x000001, "Wrong alignment on BP_AthenaMapScreenContainer_C_BP_OnShowTabsSet");
static_assert(sizeof(BP_AthenaMapScreenContainer_C_BP_OnShowTabsSet) == 0x000001, "Wrong size on BP_AthenaMapScreenContainer_C_BP_OnShowTabsSet");
static_assert(offsetof(BP_AthenaMapScreenContainer_C_BP_OnShowTabsSet, bShowTabs) == 0x000000, "Member 'BP_AthenaMapScreenContainer_C_BP_OnShowTabsSet::bShowTabs' has a wrong offset!");

struct BP_AthenaMapScreenContainer_C_ExecuteUbergraph_BP_AthenaMapScreenContainer final
{
public:
	int32                                         EntryPoint;
	bool                                          Temp_bool_Variable;
	uint8                                         Pad_5[0x3];
	struct FVector2D                              Temp_struct_Variable;
	struct FVector2D                              Temp_struct_Variable_1;
	bool                                          Temp_bool_Variable_1;
	ESlateVisibility                              Temp_byte_Variable;
	ESlateVisibility                              Temp_byte_Variable_1;
	bool                                          K2Node_Event_IsDesignTime;
	bool                                          K2Node_Event_bShowTabs;
	bool                                          K2Node_Event_bShowCreativeScoreboard;
	uint8                                         Pad_2E[0x2];
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;
	struct FSlateColor                            K2Node_MakeStruct_SlateColor;
	int32                                         Temp_int_Variable;
	int32                                         CallFunc_Add_IntInt_ReturnValue;
	bool                                          Temp_bool_Variable_2;
	uint8                                         Pad_55[0x3];
	class UBP_SkewedTabButton_C*                  CallFunc_Create_ReturnValue;
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue;
	uint8                                         Pad_61[0x7];
	class UHorizontalBoxSlot*                     CallFunc_AddChildToHorizontalBox_ReturnValue;
	bool                                          CallFunc_IsMobileGame_ReturnValue;
	uint8                                         Pad_71[0x7];
	struct FVector2D                              K2Node_Select_Default;
	uint8                                         Pad_88[0x8];
	struct FSlateBrush                            K2Node_MakeStruct_SlateBrush;
	ESlateVisibility                              Temp_byte_Variable_2;
	bool                                          CallFunc_IsMobileGame_ReturnValue_1;
	ESlateVisibility                              Temp_byte_Variable_3;
	ESlateVisibility                              K2Node_Select_Default_1;
	bool                                          CallFunc_IsQuestsTabActive_ReturnValue;
	ESlateVisibility                              K2Node_Select_Default_2;
};
static_assert(alignof(BP_AthenaMapScreenContainer_C_ExecuteUbergraph_BP_AthenaMapScreenContainer) == 0x000010, "Wrong alignment on BP_AthenaMapScreenContainer_C_ExecuteUbergraph_BP_AthenaMapScreenContainer");
static_assert(sizeof(BP_AthenaMapScreenContainer_C_ExecuteUbergraph_BP_AthenaMapScreenContainer) == 0x000160, "Wrong size on BP_AthenaMapScreenContainer_C_ExecuteUbergraph_BP_AthenaMapScreenContainer");
static_assert(offsetof(BP_AthenaMapScreenContainer_C_ExecuteUbergraph_BP_AthenaMapScreenContainer, EntryPoint) == 0x000000, "Member 'BP_AthenaMapScreenContainer_C_ExecuteUbergraph_BP_AthenaMapScreenContainer::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_AthenaMapScreenContainer_C_ExecuteUbergraph_BP_AthenaMapScreenContainer, Temp_bool_Variable) == 0x000004, "Member 'BP_AthenaMapScreenContainer_C_ExecuteUbergraph_BP_AthenaMapScreenContainer::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(BP_AthenaMapScreenContainer_C_ExecuteUbergraph_BP_AthenaMapScreenContainer, Temp_struct_Variable) == 0x000008, "Member 'BP_AthenaMapScreenContainer_C_ExecuteUbergraph_BP_AthenaMapScreenContainer::Temp_struct_Variable' has a wrong offset!");
static_assert(offsetof(BP_AthenaMapScreenContainer_C_ExecuteUbergraph_BP_AthenaMapScreenContainer, Temp_struct_Variable_1) == 0x000018, "Member 'BP_AthenaMapScreenContainer_C_ExecuteUbergraph_BP_AthenaMapScreenContainer::Temp_struct_Variable_1' has a wrong offset!");
static_assert(offsetof(BP_AthenaMapScreenContainer_C_ExecuteUbergraph_BP_AthenaMapScreenContainer, Temp_bool_Variable_1) == 0x000028, "Member 'BP_AthenaMapScreenContainer_C_ExecuteUbergraph_BP_AthenaMapScreenContainer::Temp_bool_Variable_1' has a wrong offset!");
static_assert(offsetof(BP_AthenaMapScreenContainer_C_ExecuteUbergraph_BP_AthenaMapScreenContainer, Temp_byte_Variable) == 0x000029, "Member 'BP_AthenaMapScreenContainer_C_ExecuteUbergraph_BP_AthenaMapScreenContainer::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(BP_AthenaMapScreenContainer_C_ExecuteUbergraph_BP_AthenaMapScreenContainer, Temp_byte_Variable_1) == 0x00002A, "Member 'BP_AthenaMapScreenContainer_C_ExecuteUbergraph_BP_AthenaMapScreenContainer::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(BP_AthenaMapScreenContainer_C_ExecuteUbergraph_BP_AthenaMapScreenContainer, K2Node_Event_IsDesignTime) == 0x00002B, "Member 'BP_AthenaMapScreenContainer_C_ExecuteUbergraph_BP_AthenaMapScreenContainer::K2Node_Event_IsDesignTime' has a wrong offset!");
static_assert(offsetof(BP_AthenaMapScreenContainer_C_ExecuteUbergraph_BP_AthenaMapScreenContainer, K2Node_Event_bShowTabs) == 0x00002C, "Member 'BP_AthenaMapScreenContainer_C_ExecuteUbergraph_BP_AthenaMapScreenContainer::K2Node_Event_bShowTabs' has a wrong offset!");
static_assert(offsetof(BP_AthenaMapScreenContainer_C_ExecuteUbergraph_BP_AthenaMapScreenContainer, K2Node_Event_bShowCreativeScoreboard) == 0x00002D, "Member 'BP_AthenaMapScreenContainer_C_ExecuteUbergraph_BP_AthenaMapScreenContainer::K2Node_Event_bShowCreativeScoreboard' has a wrong offset!");
static_assert(offsetof(BP_AthenaMapScreenContainer_C_ExecuteUbergraph_BP_AthenaMapScreenContainer, CallFunc_PlayAnimation_ReturnValue) == 0x000030, "Member 'BP_AthenaMapScreenContainer_C_ExecuteUbergraph_BP_AthenaMapScreenContainer::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AthenaMapScreenContainer_C_ExecuteUbergraph_BP_AthenaMapScreenContainer, K2Node_MakeStruct_SlateColor) == 0x000038, "Member 'BP_AthenaMapScreenContainer_C_ExecuteUbergraph_BP_AthenaMapScreenContainer::K2Node_MakeStruct_SlateColor' has a wrong offset!");
static_assert(offsetof(BP_AthenaMapScreenContainer_C_ExecuteUbergraph_BP_AthenaMapScreenContainer, Temp_int_Variable) == 0x00004C, "Member 'BP_AthenaMapScreenContainer_C_ExecuteUbergraph_BP_AthenaMapScreenContainer::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(BP_AthenaMapScreenContainer_C_ExecuteUbergraph_BP_AthenaMapScreenContainer, CallFunc_Add_IntInt_ReturnValue) == 0x000050, "Member 'BP_AthenaMapScreenContainer_C_ExecuteUbergraph_BP_AthenaMapScreenContainer::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AthenaMapScreenContainer_C_ExecuteUbergraph_BP_AthenaMapScreenContainer, Temp_bool_Variable_2) == 0x000054, "Member 'BP_AthenaMapScreenContainer_C_ExecuteUbergraph_BP_AthenaMapScreenContainer::Temp_bool_Variable_2' has a wrong offset!");
static_assert(offsetof(BP_AthenaMapScreenContainer_C_ExecuteUbergraph_BP_AthenaMapScreenContainer, CallFunc_Create_ReturnValue) == 0x000058, "Member 'BP_AthenaMapScreenContainer_C_ExecuteUbergraph_BP_AthenaMapScreenContainer::CallFunc_Create_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AthenaMapScreenContainer_C_ExecuteUbergraph_BP_AthenaMapScreenContainer, CallFunc_LessEqual_IntInt_ReturnValue) == 0x000060, "Member 'BP_AthenaMapScreenContainer_C_ExecuteUbergraph_BP_AthenaMapScreenContainer::CallFunc_LessEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AthenaMapScreenContainer_C_ExecuteUbergraph_BP_AthenaMapScreenContainer, CallFunc_AddChildToHorizontalBox_ReturnValue) == 0x000068, "Member 'BP_AthenaMapScreenContainer_C_ExecuteUbergraph_BP_AthenaMapScreenContainer::CallFunc_AddChildToHorizontalBox_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AthenaMapScreenContainer_C_ExecuteUbergraph_BP_AthenaMapScreenContainer, CallFunc_IsMobileGame_ReturnValue) == 0x000070, "Member 'BP_AthenaMapScreenContainer_C_ExecuteUbergraph_BP_AthenaMapScreenContainer::CallFunc_IsMobileGame_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AthenaMapScreenContainer_C_ExecuteUbergraph_BP_AthenaMapScreenContainer, K2Node_Select_Default) == 0x000078, "Member 'BP_AthenaMapScreenContainer_C_ExecuteUbergraph_BP_AthenaMapScreenContainer::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(BP_AthenaMapScreenContainer_C_ExecuteUbergraph_BP_AthenaMapScreenContainer, K2Node_MakeStruct_SlateBrush) == 0x000090, "Member 'BP_AthenaMapScreenContainer_C_ExecuteUbergraph_BP_AthenaMapScreenContainer::K2Node_MakeStruct_SlateBrush' has a wrong offset!");
static_assert(offsetof(BP_AthenaMapScreenContainer_C_ExecuteUbergraph_BP_AthenaMapScreenContainer, Temp_byte_Variable_2) == 0x000150, "Member 'BP_AthenaMapScreenContainer_C_ExecuteUbergraph_BP_AthenaMapScreenContainer::Temp_byte_Variable_2' has a wrong offset!");
static_assert(offsetof(BP_AthenaMapScreenContainer_C_ExecuteUbergraph_BP_AthenaMapScreenContainer, CallFunc_IsMobileGame_ReturnValue_1) == 0x000151, "Member 'BP_AthenaMapScreenContainer_C_ExecuteUbergraph_BP_AthenaMapScreenContainer::CallFunc_IsMobileGame_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_AthenaMapScreenContainer_C_ExecuteUbergraph_BP_AthenaMapScreenContainer, Temp_byte_Variable_3) == 0x000152, "Member 'BP_AthenaMapScreenContainer_C_ExecuteUbergraph_BP_AthenaMapScreenContainer::Temp_byte_Variable_3' has a wrong offset!");
static_assert(offsetof(BP_AthenaMapScreenContainer_C_ExecuteUbergraph_BP_AthenaMapScreenContainer, K2Node_Select_Default_1) == 0x000153, "Member 'BP_AthenaMapScreenContainer_C_ExecuteUbergraph_BP_AthenaMapScreenContainer::K2Node_Select_Default_1' has a wrong offset!");
static_assert(offsetof(BP_AthenaMapScreenContainer_C_ExecuteUbergraph_BP_AthenaMapScreenContainer, CallFunc_IsQuestsTabActive_ReturnValue) == 0x000154, "Member 'BP_AthenaMapScreenContainer_C_ExecuteUbergraph_BP_AthenaMapScreenContainer::CallFunc_IsQuestsTabActive_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AthenaMapScreenContainer_C_ExecuteUbergraph_BP_AthenaMapScreenContainer, K2Node_Select_Default_2) == 0x000155, "Member 'BP_AthenaMapScreenContainer_C_ExecuteUbergraph_BP_AthenaMapScreenContainer::K2Node_Select_Default_2' has a wrong offset!");

struct BP_AthenaMapScreenContainer_C_OnShowOrHideCreativeScoreboard final
{
public:
	bool                                          bShowCreativeScoreboard;
};
static_assert(alignof(BP_AthenaMapScreenContainer_C_OnShowOrHideCreativeScoreboard) == 0x000001, "Wrong alignment on BP_AthenaMapScreenContainer_C_OnShowOrHideCreativeScoreboard");
static_assert(sizeof(BP_AthenaMapScreenContainer_C_OnShowOrHideCreativeScoreboard) == 0x000001, "Wrong size on BP_AthenaMapScreenContainer_C_OnShowOrHideCreativeScoreboard");
static_assert(offsetof(BP_AthenaMapScreenContainer_C_OnShowOrHideCreativeScoreboard, bShowCreativeScoreboard) == 0x000000, "Member 'BP_AthenaMapScreenContainer_C_OnShowOrHideCreativeScoreboard::bShowCreativeScoreboard' has a wrong offset!");

struct BP_AthenaMapScreenContainer_C_PreConstruct final
{
public:
	bool                                          IsDesignTime;
};
static_assert(alignof(BP_AthenaMapScreenContainer_C_PreConstruct) == 0x000001, "Wrong alignment on BP_AthenaMapScreenContainer_C_PreConstruct");
static_assert(sizeof(BP_AthenaMapScreenContainer_C_PreConstruct) == 0x000001, "Wrong size on BP_AthenaMapScreenContainer_C_PreConstruct");
static_assert(offsetof(BP_AthenaMapScreenContainer_C_PreConstruct, IsDesignTime) == 0x000000, "Member 'BP_AthenaMapScreenContainer_C_PreConstruct::IsDesignTime' has a wrong offset!");

struct BP_AthenaMapScreenContainer_C_ShowOrHideScoreboardUI final
{
public:
	class UObject*                                ScoreboardWidget;
	bool                                          bShow;
	uint8                                         Pad_9[0x7];
	TScriptInterface<class IFortHideShowInterface> K2Node_DynamicCast_AsFort_Hide_Show_Interface;
	bool                                          K2Node_DynamicCast_bSuccess;
};
static_assert(alignof(BP_AthenaMapScreenContainer_C_ShowOrHideScoreboardUI) == 0x000008, "Wrong alignment on BP_AthenaMapScreenContainer_C_ShowOrHideScoreboardUI");
static_assert(sizeof(BP_AthenaMapScreenContainer_C_ShowOrHideScoreboardUI) == 0x000028, "Wrong size on BP_AthenaMapScreenContainer_C_ShowOrHideScoreboardUI");
static_assert(offsetof(BP_AthenaMapScreenContainer_C_ShowOrHideScoreboardUI, ScoreboardWidget) == 0x000000, "Member 'BP_AthenaMapScreenContainer_C_ShowOrHideScoreboardUI::ScoreboardWidget' has a wrong offset!");
static_assert(offsetof(BP_AthenaMapScreenContainer_C_ShowOrHideScoreboardUI, bShow) == 0x000008, "Member 'BP_AthenaMapScreenContainer_C_ShowOrHideScoreboardUI::bShow' has a wrong offset!");
static_assert(offsetof(BP_AthenaMapScreenContainer_C_ShowOrHideScoreboardUI, K2Node_DynamicCast_AsFort_Hide_Show_Interface) == 0x000010, "Member 'BP_AthenaMapScreenContainer_C_ShowOrHideScoreboardUI::K2Node_DynamicCast_AsFort_Hide_Show_Interface' has a wrong offset!");
static_assert(offsetof(BP_AthenaMapScreenContainer_C_ShowOrHideScoreboardUI, K2Node_DynamicCast_bSuccess) == 0x000020, "Member 'BP_AthenaMapScreenContainer_C_ShowOrHideScoreboardUI::K2Node_DynamicCast_bSuccess' has a wrong offset!");

}
