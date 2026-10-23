#pragma once

#include "Basic.hpp"

#include "UMG_structs.hpp"

namespace SDK::Params
{

struct LoadoutSaveConfirmation_C_ExecuteUbergraph_LoadoutSaveConfirmation final
{
public:
	int32                                         EntryPoint;
	bool                                          K2Node_Event_bCanSaveAsNew;
};
static_assert(alignof(LoadoutSaveConfirmation_C_ExecuteUbergraph_LoadoutSaveConfirmation) == 0x000004, "Wrong alignment on LoadoutSaveConfirmation_C_ExecuteUbergraph_LoadoutSaveConfirmation");
static_assert(sizeof(LoadoutSaveConfirmation_C_ExecuteUbergraph_LoadoutSaveConfirmation) == 0x000008, "Wrong size on LoadoutSaveConfirmation_C_ExecuteUbergraph_LoadoutSaveConfirmation");
static_assert(offsetof(LoadoutSaveConfirmation_C_ExecuteUbergraph_LoadoutSaveConfirmation, EntryPoint) == 0x000000, "Member 'LoadoutSaveConfirmation_C_ExecuteUbergraph_LoadoutSaveConfirmation::EntryPoint' has a wrong offset!");
static_assert(offsetof(LoadoutSaveConfirmation_C_ExecuteUbergraph_LoadoutSaveConfirmation, K2Node_Event_bCanSaveAsNew) == 0x000004, "Member 'LoadoutSaveConfirmation_C_ExecuteUbergraph_LoadoutSaveConfirmation::K2Node_Event_bCanSaveAsNew' has a wrong offset!");

struct LoadoutSaveConfirmation_C_OnCanSaveAsNew final
{
public:
	bool                                          bCanSaveAsNew;
};
static_assert(alignof(LoadoutSaveConfirmation_C_OnCanSaveAsNew) == 0x000001, "Wrong alignment on LoadoutSaveConfirmation_C_OnCanSaveAsNew");
static_assert(sizeof(LoadoutSaveConfirmation_C_OnCanSaveAsNew) == 0x000001, "Wrong size on LoadoutSaveConfirmation_C_OnCanSaveAsNew");
static_assert(offsetof(LoadoutSaveConfirmation_C_OnCanSaveAsNew, bCanSaveAsNew) == 0x000000, "Member 'LoadoutSaveConfirmation_C_OnCanSaveAsNew::bCanSaveAsNew' has a wrong offset!");

struct LoadoutSaveConfirmation_C_Toggle_Save_as_New_Visibility final
{
public:
	bool                                          CanSaveAsNew;
	bool                                          Temp_bool_Variable;
	bool                                          Temp_bool_Variable_1;
	bool                                          Temp_bool_Variable_2;
	ESlateVisibility                              Temp_byte_Variable;
	ESlateVisibility                              Temp_byte_Variable_1;
	ESlateVisibility                              K2Node_Select_Default;
	uint8                                         Pad_7[0x1];
	class UWidget*                                K2Node_Select_Default_1;
	class UWidget*                                K2Node_Select_Default_2;
};
static_assert(alignof(LoadoutSaveConfirmation_C_Toggle_Save_as_New_Visibility) == 0x000008, "Wrong alignment on LoadoutSaveConfirmation_C_Toggle_Save_as_New_Visibility");
static_assert(sizeof(LoadoutSaveConfirmation_C_Toggle_Save_as_New_Visibility) == 0x000018, "Wrong size on LoadoutSaveConfirmation_C_Toggle_Save_as_New_Visibility");
static_assert(offsetof(LoadoutSaveConfirmation_C_Toggle_Save_as_New_Visibility, CanSaveAsNew) == 0x000000, "Member 'LoadoutSaveConfirmation_C_Toggle_Save_as_New_Visibility::CanSaveAsNew' has a wrong offset!");
static_assert(offsetof(LoadoutSaveConfirmation_C_Toggle_Save_as_New_Visibility, Temp_bool_Variable) == 0x000001, "Member 'LoadoutSaveConfirmation_C_Toggle_Save_as_New_Visibility::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(LoadoutSaveConfirmation_C_Toggle_Save_as_New_Visibility, Temp_bool_Variable_1) == 0x000002, "Member 'LoadoutSaveConfirmation_C_Toggle_Save_as_New_Visibility::Temp_bool_Variable_1' has a wrong offset!");
static_assert(offsetof(LoadoutSaveConfirmation_C_Toggle_Save_as_New_Visibility, Temp_bool_Variable_2) == 0x000003, "Member 'LoadoutSaveConfirmation_C_Toggle_Save_as_New_Visibility::Temp_bool_Variable_2' has a wrong offset!");
static_assert(offsetof(LoadoutSaveConfirmation_C_Toggle_Save_as_New_Visibility, Temp_byte_Variable) == 0x000004, "Member 'LoadoutSaveConfirmation_C_Toggle_Save_as_New_Visibility::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(LoadoutSaveConfirmation_C_Toggle_Save_as_New_Visibility, Temp_byte_Variable_1) == 0x000005, "Member 'LoadoutSaveConfirmation_C_Toggle_Save_as_New_Visibility::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(LoadoutSaveConfirmation_C_Toggle_Save_as_New_Visibility, K2Node_Select_Default) == 0x000006, "Member 'LoadoutSaveConfirmation_C_Toggle_Save_as_New_Visibility::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(LoadoutSaveConfirmation_C_Toggle_Save_as_New_Visibility, K2Node_Select_Default_1) == 0x000008, "Member 'LoadoutSaveConfirmation_C_Toggle_Save_as_New_Visibility::K2Node_Select_Default_1' has a wrong offset!");
static_assert(offsetof(LoadoutSaveConfirmation_C_Toggle_Save_as_New_Visibility, K2Node_Select_Default_2) == 0x000010, "Member 'LoadoutSaveConfirmation_C_Toggle_Save_as_New_Visibility::K2Node_Select_Default_2' has a wrong offset!");

}
