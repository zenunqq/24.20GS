#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteGame_structs.hpp"

namespace SDK::Params
{

struct B_GasPump_Valet_Component_C_ExecuteUbergraph_B_GasPump_Valet_Component final
{
public:
	int32                                         EntryPoint;
	bool                                          CallFunc_IsValid_ReturnValue;
	uint8                                         Pad_5[0x3];
	class AActor*                                 CallFunc_GetOwner_ReturnValue;
	ESubGame                                      CallFunc_GetSubGame_ReturnValue;
	bool                                          CallFunc_IsValid_ReturnValue_1;
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;
	bool                                          CallFunc_HasAuthority_ReturnValue;
	EEvaluateCurveTableResult                     CallFunc_EvaluateCurveTableRow_OutResult;
	uint8                                         Pad_15[0x3];
	float                                         CallFunc_EvaluateCurveTableRow_OutXY;
	bool                                          CallFunc_Greater_DoubleDouble_ReturnValue;
	bool                                          K2Node_SwitchEnum_CmpSuccess;
	EEndPlayReason                                K2Node_Event_EndPlayReason;
	uint8                                         Pad_1F[0x1];
	class AActor*                                 CallFunc_GetOwner_ReturnValue_1;
	class AFortGameStateAthena*                   CallFunc_GetGameStateAthena_ReturnValue;
	bool                                          CallFunc_IsValid_ReturnValue_2;
	bool                                          CallFunc_HasAuthority_ReturnValue_1;
	uint8                                         Pad_32[0x6];
	class UFortGameStateComponent*                CallFunc_GetComponentByClass_ReturnValue;
	class UValet_GasPumpIndicatorManagerV2_C*     K2Node_DynamicCast_AsValet_Gas_Pump_Indicator_Manager_V2;
	bool                                          K2Node_DynamicCast_bSuccess;
	bool                                          CallFunc_IsValid_ReturnValue_3;
	uint8                                         Pad_4A[0x6];
	double                                        CallFunc_Greater_DoubleDouble_A_ImplicitCast;
};
static_assert(alignof(B_GasPump_Valet_Component_C_ExecuteUbergraph_B_GasPump_Valet_Component) == 0x000008, "Wrong alignment on B_GasPump_Valet_Component_C_ExecuteUbergraph_B_GasPump_Valet_Component");
static_assert(sizeof(B_GasPump_Valet_Component_C_ExecuteUbergraph_B_GasPump_Valet_Component) == 0x000058, "Wrong size on B_GasPump_Valet_Component_C_ExecuteUbergraph_B_GasPump_Valet_Component");
static_assert(offsetof(B_GasPump_Valet_Component_C_ExecuteUbergraph_B_GasPump_Valet_Component, EntryPoint) == 0x000000, "Member 'B_GasPump_Valet_Component_C_ExecuteUbergraph_B_GasPump_Valet_Component::EntryPoint' has a wrong offset!");
static_assert(offsetof(B_GasPump_Valet_Component_C_ExecuteUbergraph_B_GasPump_Valet_Component, CallFunc_IsValid_ReturnValue) == 0x000004, "Member 'B_GasPump_Valet_Component_C_ExecuteUbergraph_B_GasPump_Valet_Component::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_GasPump_Valet_Component_C_ExecuteUbergraph_B_GasPump_Valet_Component, CallFunc_GetOwner_ReturnValue) == 0x000008, "Member 'B_GasPump_Valet_Component_C_ExecuteUbergraph_B_GasPump_Valet_Component::CallFunc_GetOwner_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_GasPump_Valet_Component_C_ExecuteUbergraph_B_GasPump_Valet_Component, CallFunc_GetSubGame_ReturnValue) == 0x000010, "Member 'B_GasPump_Valet_Component_C_ExecuteUbergraph_B_GasPump_Valet_Component::CallFunc_GetSubGame_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_GasPump_Valet_Component_C_ExecuteUbergraph_B_GasPump_Valet_Component, CallFunc_IsValid_ReturnValue_1) == 0x000011, "Member 'B_GasPump_Valet_Component_C_ExecuteUbergraph_B_GasPump_Valet_Component::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(B_GasPump_Valet_Component_C_ExecuteUbergraph_B_GasPump_Valet_Component, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x000012, "Member 'B_GasPump_Valet_Component_C_ExecuteUbergraph_B_GasPump_Valet_Component::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_GasPump_Valet_Component_C_ExecuteUbergraph_B_GasPump_Valet_Component, CallFunc_HasAuthority_ReturnValue) == 0x000013, "Member 'B_GasPump_Valet_Component_C_ExecuteUbergraph_B_GasPump_Valet_Component::CallFunc_HasAuthority_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_GasPump_Valet_Component_C_ExecuteUbergraph_B_GasPump_Valet_Component, CallFunc_EvaluateCurveTableRow_OutResult) == 0x000014, "Member 'B_GasPump_Valet_Component_C_ExecuteUbergraph_B_GasPump_Valet_Component::CallFunc_EvaluateCurveTableRow_OutResult' has a wrong offset!");
static_assert(offsetof(B_GasPump_Valet_Component_C_ExecuteUbergraph_B_GasPump_Valet_Component, CallFunc_EvaluateCurveTableRow_OutXY) == 0x000018, "Member 'B_GasPump_Valet_Component_C_ExecuteUbergraph_B_GasPump_Valet_Component::CallFunc_EvaluateCurveTableRow_OutXY' has a wrong offset!");
static_assert(offsetof(B_GasPump_Valet_Component_C_ExecuteUbergraph_B_GasPump_Valet_Component, CallFunc_Greater_DoubleDouble_ReturnValue) == 0x00001C, "Member 'B_GasPump_Valet_Component_C_ExecuteUbergraph_B_GasPump_Valet_Component::CallFunc_Greater_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_GasPump_Valet_Component_C_ExecuteUbergraph_B_GasPump_Valet_Component, K2Node_SwitchEnum_CmpSuccess) == 0x00001D, "Member 'B_GasPump_Valet_Component_C_ExecuteUbergraph_B_GasPump_Valet_Component::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");
static_assert(offsetof(B_GasPump_Valet_Component_C_ExecuteUbergraph_B_GasPump_Valet_Component, K2Node_Event_EndPlayReason) == 0x00001E, "Member 'B_GasPump_Valet_Component_C_ExecuteUbergraph_B_GasPump_Valet_Component::K2Node_Event_EndPlayReason' has a wrong offset!");
static_assert(offsetof(B_GasPump_Valet_Component_C_ExecuteUbergraph_B_GasPump_Valet_Component, CallFunc_GetOwner_ReturnValue_1) == 0x000020, "Member 'B_GasPump_Valet_Component_C_ExecuteUbergraph_B_GasPump_Valet_Component::CallFunc_GetOwner_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(B_GasPump_Valet_Component_C_ExecuteUbergraph_B_GasPump_Valet_Component, CallFunc_GetGameStateAthena_ReturnValue) == 0x000028, "Member 'B_GasPump_Valet_Component_C_ExecuteUbergraph_B_GasPump_Valet_Component::CallFunc_GetGameStateAthena_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_GasPump_Valet_Component_C_ExecuteUbergraph_B_GasPump_Valet_Component, CallFunc_IsValid_ReturnValue_2) == 0x000030, "Member 'B_GasPump_Valet_Component_C_ExecuteUbergraph_B_GasPump_Valet_Component::CallFunc_IsValid_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(B_GasPump_Valet_Component_C_ExecuteUbergraph_B_GasPump_Valet_Component, CallFunc_HasAuthority_ReturnValue_1) == 0x000031, "Member 'B_GasPump_Valet_Component_C_ExecuteUbergraph_B_GasPump_Valet_Component::CallFunc_HasAuthority_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(B_GasPump_Valet_Component_C_ExecuteUbergraph_B_GasPump_Valet_Component, CallFunc_GetComponentByClass_ReturnValue) == 0x000038, "Member 'B_GasPump_Valet_Component_C_ExecuteUbergraph_B_GasPump_Valet_Component::CallFunc_GetComponentByClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_GasPump_Valet_Component_C_ExecuteUbergraph_B_GasPump_Valet_Component, K2Node_DynamicCast_AsValet_Gas_Pump_Indicator_Manager_V2) == 0x000040, "Member 'B_GasPump_Valet_Component_C_ExecuteUbergraph_B_GasPump_Valet_Component::K2Node_DynamicCast_AsValet_Gas_Pump_Indicator_Manager_V2' has a wrong offset!");
static_assert(offsetof(B_GasPump_Valet_Component_C_ExecuteUbergraph_B_GasPump_Valet_Component, K2Node_DynamicCast_bSuccess) == 0x000048, "Member 'B_GasPump_Valet_Component_C_ExecuteUbergraph_B_GasPump_Valet_Component::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(B_GasPump_Valet_Component_C_ExecuteUbergraph_B_GasPump_Valet_Component, CallFunc_IsValid_ReturnValue_3) == 0x000049, "Member 'B_GasPump_Valet_Component_C_ExecuteUbergraph_B_GasPump_Valet_Component::CallFunc_IsValid_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(B_GasPump_Valet_Component_C_ExecuteUbergraph_B_GasPump_Valet_Component, CallFunc_Greater_DoubleDouble_A_ImplicitCast) == 0x000050, "Member 'B_GasPump_Valet_Component_C_ExecuteUbergraph_B_GasPump_Valet_Component::CallFunc_Greater_DoubleDouble_A_ImplicitCast' has a wrong offset!");

struct B_GasPump_Valet_Component_C_ReceiveEndPlay final
{
public:
	EEndPlayReason                                EndPlayReason;
};
static_assert(alignof(B_GasPump_Valet_Component_C_ReceiveEndPlay) == 0x000001, "Wrong alignment on B_GasPump_Valet_Component_C_ReceiveEndPlay");
static_assert(sizeof(B_GasPump_Valet_Component_C_ReceiveEndPlay) == 0x000001, "Wrong size on B_GasPump_Valet_Component_C_ReceiveEndPlay");
static_assert(offsetof(B_GasPump_Valet_Component_C_ReceiveEndPlay, EndPlayReason) == 0x000000, "Member 'B_GasPump_Valet_Component_C_ReceiveEndPlay::EndPlayReason' has a wrong offset!");

}
