#pragma once

#include "Basic.hpp"

#include "SlateCore_structs.hpp"
#include "UMG_structs.hpp"

namespace SDK::Params
{

struct PlayerSurveySingleChoiceResponse_C_ExecuteUbergraph_PlayerSurveySingleChoiceResponse final
{
public:
	int32                                         EntryPoint;
	ESlateVisibility                              Temp_byte_Variable;
	ESlateVisibility                              Temp_byte_Variable_1;
	bool                                          Temp_bool_Variable;
	ESlateVisibility                              Temp_byte_Variable_2;
	ESlateVisibility                              Temp_byte_Variable_3;
	uint8                                         Pad_9[0x3];
	int32                                         K2Node_Event_NumberOfResponses;
	int32                                         CallFunc_Subtract_IntInt_ReturnValue;
	int32                                         CallFunc_Divide_IntInt_ReturnValue;
	int32                                         CallFunc_Min_ReturnValue;
	bool                                          CallFunc_Greater_IntInt_ReturnValue;
	uint8                                         Pad_1D[0x3];
	double                                        CallFunc_Multiply_IntFloat_ReturnValue;
	double                                        CallFunc_Add_DoubleDouble_ReturnValue;
	ESlateVisibility                              K2Node_Select_Default;
	bool                                          Temp_bool_Variable_1;
	ESlateVisibility                              K2Node_Select_Default_1;
	uint8                                         Pad_33[0x1];
	struct FFocusEvent                            K2Node_Event_InFocusEvent;
	float                                         CallFunc_SetWidthOverride_InWidthOverride_ImplicitCast;
};
static_assert(alignof(PlayerSurveySingleChoiceResponse_C_ExecuteUbergraph_PlayerSurveySingleChoiceResponse) == 0x000008, "Wrong alignment on PlayerSurveySingleChoiceResponse_C_ExecuteUbergraph_PlayerSurveySingleChoiceResponse");
static_assert(sizeof(PlayerSurveySingleChoiceResponse_C_ExecuteUbergraph_PlayerSurveySingleChoiceResponse) == 0x000040, "Wrong size on PlayerSurveySingleChoiceResponse_C_ExecuteUbergraph_PlayerSurveySingleChoiceResponse");
static_assert(offsetof(PlayerSurveySingleChoiceResponse_C_ExecuteUbergraph_PlayerSurveySingleChoiceResponse, EntryPoint) == 0x000000, "Member 'PlayerSurveySingleChoiceResponse_C_ExecuteUbergraph_PlayerSurveySingleChoiceResponse::EntryPoint' has a wrong offset!");
static_assert(offsetof(PlayerSurveySingleChoiceResponse_C_ExecuteUbergraph_PlayerSurveySingleChoiceResponse, Temp_byte_Variable) == 0x000004, "Member 'PlayerSurveySingleChoiceResponse_C_ExecuteUbergraph_PlayerSurveySingleChoiceResponse::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(PlayerSurveySingleChoiceResponse_C_ExecuteUbergraph_PlayerSurveySingleChoiceResponse, Temp_byte_Variable_1) == 0x000005, "Member 'PlayerSurveySingleChoiceResponse_C_ExecuteUbergraph_PlayerSurveySingleChoiceResponse::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(PlayerSurveySingleChoiceResponse_C_ExecuteUbergraph_PlayerSurveySingleChoiceResponse, Temp_bool_Variable) == 0x000006, "Member 'PlayerSurveySingleChoiceResponse_C_ExecuteUbergraph_PlayerSurveySingleChoiceResponse::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(PlayerSurveySingleChoiceResponse_C_ExecuteUbergraph_PlayerSurveySingleChoiceResponse, Temp_byte_Variable_2) == 0x000007, "Member 'PlayerSurveySingleChoiceResponse_C_ExecuteUbergraph_PlayerSurveySingleChoiceResponse::Temp_byte_Variable_2' has a wrong offset!");
static_assert(offsetof(PlayerSurveySingleChoiceResponse_C_ExecuteUbergraph_PlayerSurveySingleChoiceResponse, Temp_byte_Variable_3) == 0x000008, "Member 'PlayerSurveySingleChoiceResponse_C_ExecuteUbergraph_PlayerSurveySingleChoiceResponse::Temp_byte_Variable_3' has a wrong offset!");
static_assert(offsetof(PlayerSurveySingleChoiceResponse_C_ExecuteUbergraph_PlayerSurveySingleChoiceResponse, K2Node_Event_NumberOfResponses) == 0x00000C, "Member 'PlayerSurveySingleChoiceResponse_C_ExecuteUbergraph_PlayerSurveySingleChoiceResponse::K2Node_Event_NumberOfResponses' has a wrong offset!");
static_assert(offsetof(PlayerSurveySingleChoiceResponse_C_ExecuteUbergraph_PlayerSurveySingleChoiceResponse, CallFunc_Subtract_IntInt_ReturnValue) == 0x000010, "Member 'PlayerSurveySingleChoiceResponse_C_ExecuteUbergraph_PlayerSurveySingleChoiceResponse::CallFunc_Subtract_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerSurveySingleChoiceResponse_C_ExecuteUbergraph_PlayerSurveySingleChoiceResponse, CallFunc_Divide_IntInt_ReturnValue) == 0x000014, "Member 'PlayerSurveySingleChoiceResponse_C_ExecuteUbergraph_PlayerSurveySingleChoiceResponse::CallFunc_Divide_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerSurveySingleChoiceResponse_C_ExecuteUbergraph_PlayerSurveySingleChoiceResponse, CallFunc_Min_ReturnValue) == 0x000018, "Member 'PlayerSurveySingleChoiceResponse_C_ExecuteUbergraph_PlayerSurveySingleChoiceResponse::CallFunc_Min_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerSurveySingleChoiceResponse_C_ExecuteUbergraph_PlayerSurveySingleChoiceResponse, CallFunc_Greater_IntInt_ReturnValue) == 0x00001C, "Member 'PlayerSurveySingleChoiceResponse_C_ExecuteUbergraph_PlayerSurveySingleChoiceResponse::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerSurveySingleChoiceResponse_C_ExecuteUbergraph_PlayerSurveySingleChoiceResponse, CallFunc_Multiply_IntFloat_ReturnValue) == 0x000020, "Member 'PlayerSurveySingleChoiceResponse_C_ExecuteUbergraph_PlayerSurveySingleChoiceResponse::CallFunc_Multiply_IntFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerSurveySingleChoiceResponse_C_ExecuteUbergraph_PlayerSurveySingleChoiceResponse, CallFunc_Add_DoubleDouble_ReturnValue) == 0x000028, "Member 'PlayerSurveySingleChoiceResponse_C_ExecuteUbergraph_PlayerSurveySingleChoiceResponse::CallFunc_Add_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerSurveySingleChoiceResponse_C_ExecuteUbergraph_PlayerSurveySingleChoiceResponse, K2Node_Select_Default) == 0x000030, "Member 'PlayerSurveySingleChoiceResponse_C_ExecuteUbergraph_PlayerSurveySingleChoiceResponse::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(PlayerSurveySingleChoiceResponse_C_ExecuteUbergraph_PlayerSurveySingleChoiceResponse, Temp_bool_Variable_1) == 0x000031, "Member 'PlayerSurveySingleChoiceResponse_C_ExecuteUbergraph_PlayerSurveySingleChoiceResponse::Temp_bool_Variable_1' has a wrong offset!");
static_assert(offsetof(PlayerSurveySingleChoiceResponse_C_ExecuteUbergraph_PlayerSurveySingleChoiceResponse, K2Node_Select_Default_1) == 0x000032, "Member 'PlayerSurveySingleChoiceResponse_C_ExecuteUbergraph_PlayerSurveySingleChoiceResponse::K2Node_Select_Default_1' has a wrong offset!");
static_assert(offsetof(PlayerSurveySingleChoiceResponse_C_ExecuteUbergraph_PlayerSurveySingleChoiceResponse, K2Node_Event_InFocusEvent) == 0x000034, "Member 'PlayerSurveySingleChoiceResponse_C_ExecuteUbergraph_PlayerSurveySingleChoiceResponse::K2Node_Event_InFocusEvent' has a wrong offset!");
static_assert(offsetof(PlayerSurveySingleChoiceResponse_C_ExecuteUbergraph_PlayerSurveySingleChoiceResponse, CallFunc_SetWidthOverride_InWidthOverride_ImplicitCast) == 0x00003C, "Member 'PlayerSurveySingleChoiceResponse_C_ExecuteUbergraph_PlayerSurveySingleChoiceResponse::CallFunc_SetWidthOverride_InWidthOverride_ImplicitCast' has a wrong offset!");

struct PlayerSurveySingleChoiceResponse_C_OnAddedToFocusPath final
{
public:
	struct FFocusEvent                            InFocusEvent;
};
static_assert(alignof(PlayerSurveySingleChoiceResponse_C_OnAddedToFocusPath) == 0x000004, "Wrong alignment on PlayerSurveySingleChoiceResponse_C_OnAddedToFocusPath");
static_assert(sizeof(PlayerSurveySingleChoiceResponse_C_OnAddedToFocusPath) == 0x000008, "Wrong size on PlayerSurveySingleChoiceResponse_C_OnAddedToFocusPath");
static_assert(offsetof(PlayerSurveySingleChoiceResponse_C_OnAddedToFocusPath, InFocusEvent) == 0x000000, "Member 'PlayerSurveySingleChoiceResponse_C_OnAddedToFocusPath::InFocusEvent' has a wrong offset!");

struct PlayerSurveySingleChoiceResponse_C_SetNumberOfResponses final
{
public:
	int32                                         NumberOfResponses;
};
static_assert(alignof(PlayerSurveySingleChoiceResponse_C_SetNumberOfResponses) == 0x000004, "Wrong alignment on PlayerSurveySingleChoiceResponse_C_SetNumberOfResponses");
static_assert(sizeof(PlayerSurveySingleChoiceResponse_C_SetNumberOfResponses) == 0x000004, "Wrong size on PlayerSurveySingleChoiceResponse_C_SetNumberOfResponses");
static_assert(offsetof(PlayerSurveySingleChoiceResponse_C_SetNumberOfResponses, NumberOfResponses) == 0x000000, "Member 'PlayerSurveySingleChoiceResponse_C_SetNumberOfResponses::NumberOfResponses' has a wrong offset!");

}
