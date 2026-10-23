#pragma once

#include "Basic.hpp"

#include "SlateCore_structs.hpp"

namespace SDK::Params
{

struct AthenaBottomBarWidget_C_PreConstruct final
{
public:
	bool                                          IsDesignTime;
};
static_assert(alignof(AthenaBottomBarWidget_C_PreConstruct) == 0x000001, "Wrong alignment on AthenaBottomBarWidget_C_PreConstruct");
static_assert(sizeof(AthenaBottomBarWidget_C_PreConstruct) == 0x000001, "Wrong size on AthenaBottomBarWidget_C_PreConstruct");
static_assert(offsetof(AthenaBottomBarWidget_C_PreConstruct, IsDesignTime) == 0x000000, "Member 'AthenaBottomBarWidget_C_PreConstruct::IsDesignTime' has a wrong offset!");

struct AthenaBottomBarWidget_C_ExecuteUbergraph_AthenaBottomBarWidget final
{
public:
	int32                                         EntryPoint;
	uint8                                         Pad_4[0x4];
	class USizeBoxSlot*                           CallFunc_SlotAsSizeBoxSlot_ReturnValue;
	bool                                          CallFunc_IsMobileGame_ReturnValue;
	bool                                          K2Node_Event_IsDesignTime;
	uint8                                         Pad_12[0x6];
	double                                        CallFunc_SelectFloat_ReturnValue;
	struct FMargin                                K2Node_MakeStruct_Margin;
	float                                         K2Node_MakeStruct_Top_ImplicitCast;
	float                                         K2Node_MakeStruct_Bottom_ImplicitCast;
};
static_assert(alignof(AthenaBottomBarWidget_C_ExecuteUbergraph_AthenaBottomBarWidget) == 0x000008, "Wrong alignment on AthenaBottomBarWidget_C_ExecuteUbergraph_AthenaBottomBarWidget");
static_assert(sizeof(AthenaBottomBarWidget_C_ExecuteUbergraph_AthenaBottomBarWidget) == 0x000038, "Wrong size on AthenaBottomBarWidget_C_ExecuteUbergraph_AthenaBottomBarWidget");
static_assert(offsetof(AthenaBottomBarWidget_C_ExecuteUbergraph_AthenaBottomBarWidget, EntryPoint) == 0x000000, "Member 'AthenaBottomBarWidget_C_ExecuteUbergraph_AthenaBottomBarWidget::EntryPoint' has a wrong offset!");
static_assert(offsetof(AthenaBottomBarWidget_C_ExecuteUbergraph_AthenaBottomBarWidget, CallFunc_SlotAsSizeBoxSlot_ReturnValue) == 0x000008, "Member 'AthenaBottomBarWidget_C_ExecuteUbergraph_AthenaBottomBarWidget::CallFunc_SlotAsSizeBoxSlot_ReturnValue' has a wrong offset!");
static_assert(offsetof(AthenaBottomBarWidget_C_ExecuteUbergraph_AthenaBottomBarWidget, CallFunc_IsMobileGame_ReturnValue) == 0x000010, "Member 'AthenaBottomBarWidget_C_ExecuteUbergraph_AthenaBottomBarWidget::CallFunc_IsMobileGame_ReturnValue' has a wrong offset!");
static_assert(offsetof(AthenaBottomBarWidget_C_ExecuteUbergraph_AthenaBottomBarWidget, K2Node_Event_IsDesignTime) == 0x000011, "Member 'AthenaBottomBarWidget_C_ExecuteUbergraph_AthenaBottomBarWidget::K2Node_Event_IsDesignTime' has a wrong offset!");
static_assert(offsetof(AthenaBottomBarWidget_C_ExecuteUbergraph_AthenaBottomBarWidget, CallFunc_SelectFloat_ReturnValue) == 0x000018, "Member 'AthenaBottomBarWidget_C_ExecuteUbergraph_AthenaBottomBarWidget::CallFunc_SelectFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(AthenaBottomBarWidget_C_ExecuteUbergraph_AthenaBottomBarWidget, K2Node_MakeStruct_Margin) == 0x000020, "Member 'AthenaBottomBarWidget_C_ExecuteUbergraph_AthenaBottomBarWidget::K2Node_MakeStruct_Margin' has a wrong offset!");
static_assert(offsetof(AthenaBottomBarWidget_C_ExecuteUbergraph_AthenaBottomBarWidget, K2Node_MakeStruct_Top_ImplicitCast) == 0x000030, "Member 'AthenaBottomBarWidget_C_ExecuteUbergraph_AthenaBottomBarWidget::K2Node_MakeStruct_Top_ImplicitCast' has a wrong offset!");
static_assert(offsetof(AthenaBottomBarWidget_C_ExecuteUbergraph_AthenaBottomBarWidget, K2Node_MakeStruct_Bottom_ImplicitCast) == 0x000034, "Member 'AthenaBottomBarWidget_C_ExecuteUbergraph_AthenaBottomBarWidget::K2Node_MakeStruct_Bottom_ImplicitCast' has a wrong offset!");

}
