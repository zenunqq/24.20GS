#pragma once

#include "Basic.hpp"

#include "CharacterCollectionMapScreen_structs.hpp"
#include "UMG_structs.hpp"

namespace SDK::Params
{

struct CollectionNPCServiceWidget_C_ExecuteUbergraph_CollectionNPCServiceWidget final
{
public:
	int32                                         EntryPoint;
	bool                                          CallFunc_IsMobileGame_ReturnValue;
	uint8                                         Pad_5[0x3];
	int32                                         Temp_int_Variable;
	int32                                         Temp_int_Variable_1;
	bool                                          Temp_bool_Variable;
	ESlateVisibility                              Temp_byte_Variable;
	ESlateVisibility                              Temp_byte_Variable_1;
	bool                                          Temp_bool_Variable_1;
	uint8                                         Pad_14[0x4];
	struct FNPCServiceWidgetData                  K2Node_Event_WidgetData;
	int32                                         K2Node_Select_Default;
	bool                                          CallFunc_Greater_IntInt_ReturnValue;
	uint8                                         Pad_6D[0x3];
	class FText                                   CallFunc_Conv_IntToText_ReturnValue;
	bool                                          CallFunc_IsValid_ReturnValue;
	bool                                          CallFunc_BooleanAND_ReturnValue;
	uint8                                         Pad_8A[0x6];
	TSoftObjectPtr<class UTexture2D>              CallFunc_GetSmallPreviewImage_ReturnValue;
	bool                                          CallFunc_IsValidSoftObjectReference_ReturnValue;
	ESlateVisibility                              K2Node_Select_Default_1;
};
static_assert(alignof(CollectionNPCServiceWidget_C_ExecuteUbergraph_CollectionNPCServiceWidget) == 0x000008, "Wrong alignment on CollectionNPCServiceWidget_C_ExecuteUbergraph_CollectionNPCServiceWidget");
static_assert(sizeof(CollectionNPCServiceWidget_C_ExecuteUbergraph_CollectionNPCServiceWidget) == 0x0000C0, "Wrong size on CollectionNPCServiceWidget_C_ExecuteUbergraph_CollectionNPCServiceWidget");
static_assert(offsetof(CollectionNPCServiceWidget_C_ExecuteUbergraph_CollectionNPCServiceWidget, EntryPoint) == 0x000000, "Member 'CollectionNPCServiceWidget_C_ExecuteUbergraph_CollectionNPCServiceWidget::EntryPoint' has a wrong offset!");
static_assert(offsetof(CollectionNPCServiceWidget_C_ExecuteUbergraph_CollectionNPCServiceWidget, CallFunc_IsMobileGame_ReturnValue) == 0x000004, "Member 'CollectionNPCServiceWidget_C_ExecuteUbergraph_CollectionNPCServiceWidget::CallFunc_IsMobileGame_ReturnValue' has a wrong offset!");
static_assert(offsetof(CollectionNPCServiceWidget_C_ExecuteUbergraph_CollectionNPCServiceWidget, Temp_int_Variable) == 0x000008, "Member 'CollectionNPCServiceWidget_C_ExecuteUbergraph_CollectionNPCServiceWidget::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(CollectionNPCServiceWidget_C_ExecuteUbergraph_CollectionNPCServiceWidget, Temp_int_Variable_1) == 0x00000C, "Member 'CollectionNPCServiceWidget_C_ExecuteUbergraph_CollectionNPCServiceWidget::Temp_int_Variable_1' has a wrong offset!");
static_assert(offsetof(CollectionNPCServiceWidget_C_ExecuteUbergraph_CollectionNPCServiceWidget, Temp_bool_Variable) == 0x000010, "Member 'CollectionNPCServiceWidget_C_ExecuteUbergraph_CollectionNPCServiceWidget::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(CollectionNPCServiceWidget_C_ExecuteUbergraph_CollectionNPCServiceWidget, Temp_byte_Variable) == 0x000011, "Member 'CollectionNPCServiceWidget_C_ExecuteUbergraph_CollectionNPCServiceWidget::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(CollectionNPCServiceWidget_C_ExecuteUbergraph_CollectionNPCServiceWidget, Temp_byte_Variable_1) == 0x000012, "Member 'CollectionNPCServiceWidget_C_ExecuteUbergraph_CollectionNPCServiceWidget::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(CollectionNPCServiceWidget_C_ExecuteUbergraph_CollectionNPCServiceWidget, Temp_bool_Variable_1) == 0x000013, "Member 'CollectionNPCServiceWidget_C_ExecuteUbergraph_CollectionNPCServiceWidget::Temp_bool_Variable_1' has a wrong offset!");
static_assert(offsetof(CollectionNPCServiceWidget_C_ExecuteUbergraph_CollectionNPCServiceWidget, K2Node_Event_WidgetData) == 0x000018, "Member 'CollectionNPCServiceWidget_C_ExecuteUbergraph_CollectionNPCServiceWidget::K2Node_Event_WidgetData' has a wrong offset!");
static_assert(offsetof(CollectionNPCServiceWidget_C_ExecuteUbergraph_CollectionNPCServiceWidget, K2Node_Select_Default) == 0x000068, "Member 'CollectionNPCServiceWidget_C_ExecuteUbergraph_CollectionNPCServiceWidget::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(CollectionNPCServiceWidget_C_ExecuteUbergraph_CollectionNPCServiceWidget, CallFunc_Greater_IntInt_ReturnValue) == 0x00006C, "Member 'CollectionNPCServiceWidget_C_ExecuteUbergraph_CollectionNPCServiceWidget::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(CollectionNPCServiceWidget_C_ExecuteUbergraph_CollectionNPCServiceWidget, CallFunc_Conv_IntToText_ReturnValue) == 0x000070, "Member 'CollectionNPCServiceWidget_C_ExecuteUbergraph_CollectionNPCServiceWidget::CallFunc_Conv_IntToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(CollectionNPCServiceWidget_C_ExecuteUbergraph_CollectionNPCServiceWidget, CallFunc_IsValid_ReturnValue) == 0x000088, "Member 'CollectionNPCServiceWidget_C_ExecuteUbergraph_CollectionNPCServiceWidget::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(CollectionNPCServiceWidget_C_ExecuteUbergraph_CollectionNPCServiceWidget, CallFunc_BooleanAND_ReturnValue) == 0x000089, "Member 'CollectionNPCServiceWidget_C_ExecuteUbergraph_CollectionNPCServiceWidget::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(CollectionNPCServiceWidget_C_ExecuteUbergraph_CollectionNPCServiceWidget, CallFunc_GetSmallPreviewImage_ReturnValue) == 0x000090, "Member 'CollectionNPCServiceWidget_C_ExecuteUbergraph_CollectionNPCServiceWidget::CallFunc_GetSmallPreviewImage_ReturnValue' has a wrong offset!");
static_assert(offsetof(CollectionNPCServiceWidget_C_ExecuteUbergraph_CollectionNPCServiceWidget, CallFunc_IsValidSoftObjectReference_ReturnValue) == 0x0000B8, "Member 'CollectionNPCServiceWidget_C_ExecuteUbergraph_CollectionNPCServiceWidget::CallFunc_IsValidSoftObjectReference_ReturnValue' has a wrong offset!");
static_assert(offsetof(CollectionNPCServiceWidget_C_ExecuteUbergraph_CollectionNPCServiceWidget, K2Node_Select_Default_1) == 0x0000B9, "Member 'CollectionNPCServiceWidget_C_ExecuteUbergraph_CollectionNPCServiceWidget::K2Node_Select_Default_1' has a wrong offset!");

struct CollectionNPCServiceWidget_C_PopulateData final
{
public:
	struct FNPCServiceWidgetData                  WidgetData;
};
static_assert(alignof(CollectionNPCServiceWidget_C_PopulateData) == 0x000008, "Wrong alignment on CollectionNPCServiceWidget_C_PopulateData");
static_assert(sizeof(CollectionNPCServiceWidget_C_PopulateData) == 0x000050, "Wrong size on CollectionNPCServiceWidget_C_PopulateData");
static_assert(offsetof(CollectionNPCServiceWidget_C_PopulateData, WidgetData) == 0x000000, "Member 'CollectionNPCServiceWidget_C_PopulateData::WidgetData' has a wrong offset!");

}
