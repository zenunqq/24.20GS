#pragma once

#include "Basic.hpp"

#include "UMG_structs.hpp"
#include "FortniteUI_structs.hpp"

namespace SDK::Params
{

struct ShowdownEventTileViolator_C_ExecuteUbergraph_ShowdownEventTileViolator final
{
public:
	int32                                         EntryPoint;
	bool                                          CallFunc_CanGroupTournamentEventsByVisualRoundNumber_ReturnValue;
	uint8                                         Pad_5[0x3];
	int32                                         Temp_int_Variable;
	bool                                          CallFunc_DoDisplayRoundNumber_ReturnValue;
	bool                                          Temp_bool_Variable;
	ESlateVisibility                              Temp_byte_Variable;
	ESlateVisibility                              Temp_byte_Variable_1;
	bool                                          Temp_bool_Variable_1;
	uint8                                         Pad_11[0x3];
	int32                                         Temp_int_Variable_1;
	int32                                         Temp_int_Variable_2;
	int32                                         K2Node_Select_Default;
	class FString                                 CallFunc_GetTournamentNextEvent_ReturnValue;
	class FString                                 CallFunc_GetEventId_ReturnValue;
	bool                                          CallFunc_EqualEqual_StrStr_ReturnValue;
	bool                                          Temp_bool_Variable_2;
	EFortShowdownEventState                       CallFunc_GetEventTimeState_ReturnValue;
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;
	uint8                                         Pad_44[0x4];
	class FText                                   CallFunc_GetWindowRoundDisplayString_ReturnValue;
	class FText                                   CallFunc_TextToUpper_ReturnValue;
	int32                                         K2Node_Select_Default_1;
	bool                                          CallFunc_BooleanOR_ReturnValue;
	ESlateVisibility                              K2Node_Select_Default_2;
};
static_assert(alignof(ShowdownEventTileViolator_C_ExecuteUbergraph_ShowdownEventTileViolator) == 0x000008, "Wrong alignment on ShowdownEventTileViolator_C_ExecuteUbergraph_ShowdownEventTileViolator");
static_assert(sizeof(ShowdownEventTileViolator_C_ExecuteUbergraph_ShowdownEventTileViolator) == 0x000080, "Wrong size on ShowdownEventTileViolator_C_ExecuteUbergraph_ShowdownEventTileViolator");
static_assert(offsetof(ShowdownEventTileViolator_C_ExecuteUbergraph_ShowdownEventTileViolator, EntryPoint) == 0x000000, "Member 'ShowdownEventTileViolator_C_ExecuteUbergraph_ShowdownEventTileViolator::EntryPoint' has a wrong offset!");
static_assert(offsetof(ShowdownEventTileViolator_C_ExecuteUbergraph_ShowdownEventTileViolator, CallFunc_CanGroupTournamentEventsByVisualRoundNumber_ReturnValue) == 0x000004, "Member 'ShowdownEventTileViolator_C_ExecuteUbergraph_ShowdownEventTileViolator::CallFunc_CanGroupTournamentEventsByVisualRoundNumber_ReturnValue' has a wrong offset!");
static_assert(offsetof(ShowdownEventTileViolator_C_ExecuteUbergraph_ShowdownEventTileViolator, Temp_int_Variable) == 0x000008, "Member 'ShowdownEventTileViolator_C_ExecuteUbergraph_ShowdownEventTileViolator::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(ShowdownEventTileViolator_C_ExecuteUbergraph_ShowdownEventTileViolator, CallFunc_DoDisplayRoundNumber_ReturnValue) == 0x00000C, "Member 'ShowdownEventTileViolator_C_ExecuteUbergraph_ShowdownEventTileViolator::CallFunc_DoDisplayRoundNumber_ReturnValue' has a wrong offset!");
static_assert(offsetof(ShowdownEventTileViolator_C_ExecuteUbergraph_ShowdownEventTileViolator, Temp_bool_Variable) == 0x00000D, "Member 'ShowdownEventTileViolator_C_ExecuteUbergraph_ShowdownEventTileViolator::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(ShowdownEventTileViolator_C_ExecuteUbergraph_ShowdownEventTileViolator, Temp_byte_Variable) == 0x00000E, "Member 'ShowdownEventTileViolator_C_ExecuteUbergraph_ShowdownEventTileViolator::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(ShowdownEventTileViolator_C_ExecuteUbergraph_ShowdownEventTileViolator, Temp_byte_Variable_1) == 0x00000F, "Member 'ShowdownEventTileViolator_C_ExecuteUbergraph_ShowdownEventTileViolator::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(ShowdownEventTileViolator_C_ExecuteUbergraph_ShowdownEventTileViolator, Temp_bool_Variable_1) == 0x000010, "Member 'ShowdownEventTileViolator_C_ExecuteUbergraph_ShowdownEventTileViolator::Temp_bool_Variable_1' has a wrong offset!");
static_assert(offsetof(ShowdownEventTileViolator_C_ExecuteUbergraph_ShowdownEventTileViolator, Temp_int_Variable_1) == 0x000014, "Member 'ShowdownEventTileViolator_C_ExecuteUbergraph_ShowdownEventTileViolator::Temp_int_Variable_1' has a wrong offset!");
static_assert(offsetof(ShowdownEventTileViolator_C_ExecuteUbergraph_ShowdownEventTileViolator, Temp_int_Variable_2) == 0x000018, "Member 'ShowdownEventTileViolator_C_ExecuteUbergraph_ShowdownEventTileViolator::Temp_int_Variable_2' has a wrong offset!");
static_assert(offsetof(ShowdownEventTileViolator_C_ExecuteUbergraph_ShowdownEventTileViolator, K2Node_Select_Default) == 0x00001C, "Member 'ShowdownEventTileViolator_C_ExecuteUbergraph_ShowdownEventTileViolator::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(ShowdownEventTileViolator_C_ExecuteUbergraph_ShowdownEventTileViolator, CallFunc_GetTournamentNextEvent_ReturnValue) == 0x000020, "Member 'ShowdownEventTileViolator_C_ExecuteUbergraph_ShowdownEventTileViolator::CallFunc_GetTournamentNextEvent_ReturnValue' has a wrong offset!");
static_assert(offsetof(ShowdownEventTileViolator_C_ExecuteUbergraph_ShowdownEventTileViolator, CallFunc_GetEventId_ReturnValue) == 0x000030, "Member 'ShowdownEventTileViolator_C_ExecuteUbergraph_ShowdownEventTileViolator::CallFunc_GetEventId_ReturnValue' has a wrong offset!");
static_assert(offsetof(ShowdownEventTileViolator_C_ExecuteUbergraph_ShowdownEventTileViolator, CallFunc_EqualEqual_StrStr_ReturnValue) == 0x000040, "Member 'ShowdownEventTileViolator_C_ExecuteUbergraph_ShowdownEventTileViolator::CallFunc_EqualEqual_StrStr_ReturnValue' has a wrong offset!");
static_assert(offsetof(ShowdownEventTileViolator_C_ExecuteUbergraph_ShowdownEventTileViolator, Temp_bool_Variable_2) == 0x000041, "Member 'ShowdownEventTileViolator_C_ExecuteUbergraph_ShowdownEventTileViolator::Temp_bool_Variable_2' has a wrong offset!");
static_assert(offsetof(ShowdownEventTileViolator_C_ExecuteUbergraph_ShowdownEventTileViolator, CallFunc_GetEventTimeState_ReturnValue) == 0x000042, "Member 'ShowdownEventTileViolator_C_ExecuteUbergraph_ShowdownEventTileViolator::CallFunc_GetEventTimeState_ReturnValue' has a wrong offset!");
static_assert(offsetof(ShowdownEventTileViolator_C_ExecuteUbergraph_ShowdownEventTileViolator, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x000043, "Member 'ShowdownEventTileViolator_C_ExecuteUbergraph_ShowdownEventTileViolator::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(ShowdownEventTileViolator_C_ExecuteUbergraph_ShowdownEventTileViolator, CallFunc_GetWindowRoundDisplayString_ReturnValue) == 0x000048, "Member 'ShowdownEventTileViolator_C_ExecuteUbergraph_ShowdownEventTileViolator::CallFunc_GetWindowRoundDisplayString_ReturnValue' has a wrong offset!");
static_assert(offsetof(ShowdownEventTileViolator_C_ExecuteUbergraph_ShowdownEventTileViolator, CallFunc_TextToUpper_ReturnValue) == 0x000060, "Member 'ShowdownEventTileViolator_C_ExecuteUbergraph_ShowdownEventTileViolator::CallFunc_TextToUpper_ReturnValue' has a wrong offset!");
static_assert(offsetof(ShowdownEventTileViolator_C_ExecuteUbergraph_ShowdownEventTileViolator, K2Node_Select_Default_1) == 0x000078, "Member 'ShowdownEventTileViolator_C_ExecuteUbergraph_ShowdownEventTileViolator::K2Node_Select_Default_1' has a wrong offset!");
static_assert(offsetof(ShowdownEventTileViolator_C_ExecuteUbergraph_ShowdownEventTileViolator, CallFunc_BooleanOR_ReturnValue) == 0x00007C, "Member 'ShowdownEventTileViolator_C_ExecuteUbergraph_ShowdownEventTileViolator::CallFunc_BooleanOR_ReturnValue' has a wrong offset!");
static_assert(offsetof(ShowdownEventTileViolator_C_ExecuteUbergraph_ShowdownEventTileViolator, K2Node_Select_Default_2) == 0x00007D, "Member 'ShowdownEventTileViolator_C_ExecuteUbergraph_ShowdownEventTileViolator::K2Node_Select_Default_2' has a wrong offset!");

}
