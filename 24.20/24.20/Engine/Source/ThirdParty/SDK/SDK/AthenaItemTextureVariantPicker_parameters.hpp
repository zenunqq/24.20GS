#pragma once

#include "Basic.hpp"

namespace SDK::Params
{

struct AthenaItemTextureVariantPicker_C_OnToggleAllItemsArchivedMessage final
{
public:
	bool                                          bDisplay;
};
static_assert(alignof(AthenaItemTextureVariantPicker_C_OnToggleAllItemsArchivedMessage) == 0x000001, "Wrong alignment on AthenaItemTextureVariantPicker_C_OnToggleAllItemsArchivedMessage");
static_assert(sizeof(AthenaItemTextureVariantPicker_C_OnToggleAllItemsArchivedMessage) == 0x000001, "Wrong size on AthenaItemTextureVariantPicker_C_OnToggleAllItemsArchivedMessage");
static_assert(offsetof(AthenaItemTextureVariantPicker_C_OnToggleAllItemsArchivedMessage, bDisplay) == 0x000000, "Member 'AthenaItemTextureVariantPicker_C_OnToggleAllItemsArchivedMessage::bDisplay' has a wrong offset!");

struct AthenaItemTextureVariantPicker_C_ExecuteUbergraph_AthenaItemTextureVariantPicker final
{
public:
	int32                                         EntryPoint;
	float                                         Temp_real_Variable;
	float                                         Temp_real_Variable_1;
	bool                                          Temp_bool_Variable;
	uint8                                         Pad_D[0x3];
	float                                         Temp_real_Variable_2;
	float                                         Temp_real_Variable_3;
	bool                                          K2Node_Event_bDisplay;
	uint8                                         Pad_19[0x3];
	int32                                         CallFunc_SelectInt_ReturnValue;
	bool                                          Temp_bool_Variable_1;
	bool                                          CallFunc_IsMobileGame_ReturnValue;
	uint8                                         Pad_22[0x2];
	float                                         K2Node_Select_Default;
	float                                         K2Node_Select_Default_1;
};
static_assert(alignof(AthenaItemTextureVariantPicker_C_ExecuteUbergraph_AthenaItemTextureVariantPicker) == 0x000004, "Wrong alignment on AthenaItemTextureVariantPicker_C_ExecuteUbergraph_AthenaItemTextureVariantPicker");
static_assert(sizeof(AthenaItemTextureVariantPicker_C_ExecuteUbergraph_AthenaItemTextureVariantPicker) == 0x00002C, "Wrong size on AthenaItemTextureVariantPicker_C_ExecuteUbergraph_AthenaItemTextureVariantPicker");
static_assert(offsetof(AthenaItemTextureVariantPicker_C_ExecuteUbergraph_AthenaItemTextureVariantPicker, EntryPoint) == 0x000000, "Member 'AthenaItemTextureVariantPicker_C_ExecuteUbergraph_AthenaItemTextureVariantPicker::EntryPoint' has a wrong offset!");
static_assert(offsetof(AthenaItemTextureVariantPicker_C_ExecuteUbergraph_AthenaItemTextureVariantPicker, Temp_real_Variable) == 0x000004, "Member 'AthenaItemTextureVariantPicker_C_ExecuteUbergraph_AthenaItemTextureVariantPicker::Temp_real_Variable' has a wrong offset!");
static_assert(offsetof(AthenaItemTextureVariantPicker_C_ExecuteUbergraph_AthenaItemTextureVariantPicker, Temp_real_Variable_1) == 0x000008, "Member 'AthenaItemTextureVariantPicker_C_ExecuteUbergraph_AthenaItemTextureVariantPicker::Temp_real_Variable_1' has a wrong offset!");
static_assert(offsetof(AthenaItemTextureVariantPicker_C_ExecuteUbergraph_AthenaItemTextureVariantPicker, Temp_bool_Variable) == 0x00000C, "Member 'AthenaItemTextureVariantPicker_C_ExecuteUbergraph_AthenaItemTextureVariantPicker::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(AthenaItemTextureVariantPicker_C_ExecuteUbergraph_AthenaItemTextureVariantPicker, Temp_real_Variable_2) == 0x000010, "Member 'AthenaItemTextureVariantPicker_C_ExecuteUbergraph_AthenaItemTextureVariantPicker::Temp_real_Variable_2' has a wrong offset!");
static_assert(offsetof(AthenaItemTextureVariantPicker_C_ExecuteUbergraph_AthenaItemTextureVariantPicker, Temp_real_Variable_3) == 0x000014, "Member 'AthenaItemTextureVariantPicker_C_ExecuteUbergraph_AthenaItemTextureVariantPicker::Temp_real_Variable_3' has a wrong offset!");
static_assert(offsetof(AthenaItemTextureVariantPicker_C_ExecuteUbergraph_AthenaItemTextureVariantPicker, K2Node_Event_bDisplay) == 0x000018, "Member 'AthenaItemTextureVariantPicker_C_ExecuteUbergraph_AthenaItemTextureVariantPicker::K2Node_Event_bDisplay' has a wrong offset!");
static_assert(offsetof(AthenaItemTextureVariantPicker_C_ExecuteUbergraph_AthenaItemTextureVariantPicker, CallFunc_SelectInt_ReturnValue) == 0x00001C, "Member 'AthenaItemTextureVariantPicker_C_ExecuteUbergraph_AthenaItemTextureVariantPicker::CallFunc_SelectInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(AthenaItemTextureVariantPicker_C_ExecuteUbergraph_AthenaItemTextureVariantPicker, Temp_bool_Variable_1) == 0x000020, "Member 'AthenaItemTextureVariantPicker_C_ExecuteUbergraph_AthenaItemTextureVariantPicker::Temp_bool_Variable_1' has a wrong offset!");
static_assert(offsetof(AthenaItemTextureVariantPicker_C_ExecuteUbergraph_AthenaItemTextureVariantPicker, CallFunc_IsMobileGame_ReturnValue) == 0x000021, "Member 'AthenaItemTextureVariantPicker_C_ExecuteUbergraph_AthenaItemTextureVariantPicker::CallFunc_IsMobileGame_ReturnValue' has a wrong offset!");
static_assert(offsetof(AthenaItemTextureVariantPicker_C_ExecuteUbergraph_AthenaItemTextureVariantPicker, K2Node_Select_Default) == 0x000024, "Member 'AthenaItemTextureVariantPicker_C_ExecuteUbergraph_AthenaItemTextureVariantPicker::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(AthenaItemTextureVariantPicker_C_ExecuteUbergraph_AthenaItemTextureVariantPicker, K2Node_Select_Default_1) == 0x000028, "Member 'AthenaItemTextureVariantPicker_C_ExecuteUbergraph_AthenaItemTextureVariantPicker::K2Node_Select_Default_1' has a wrong offset!");

}
