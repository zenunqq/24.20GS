#pragma once

#include "Basic.hpp"

namespace SDK::Params
{

struct LoginCamera_Blueprint_C_ExecuteUbergraph_LoginCamera_Blueprint final
{
public:
	int32                                         EntryPoint;
	uint8                                         Pad_4[0x4];
	TScriptInterface<class IFortTimeOfDayManagerInterface> CallFunc_GetContextualTimeOfDayManager_ReturnValue;
	int32                                         Temp_int_Array_Index_Variable;
	uint8                                         Pad_1C[0x4];
	class AFortPlayerController*                  K2Node_Event_PlayerController;
	TArray<class ATVPostProcessBP_C*>             CallFunc_GetAllActorsOfClass_OutActors;
	int32                                         Temp_int_Loop_Counter_Variable;
	uint8                                         Pad_3C[0x4];
	class ATVPostProcessBP_C*                     CallFunc_Array_Get_Item;
	int32                                         CallFunc_Add_IntInt_ReturnValue;
	int32                                         CallFunc_Array_Length_ReturnValue;
	bool                                          CallFunc_Less_IntInt_ReturnValue;
};
static_assert(alignof(LoginCamera_Blueprint_C_ExecuteUbergraph_LoginCamera_Blueprint) == 0x000008, "Wrong alignment on LoginCamera_Blueprint_C_ExecuteUbergraph_LoginCamera_Blueprint");
static_assert(sizeof(LoginCamera_Blueprint_C_ExecuteUbergraph_LoginCamera_Blueprint) == 0x000058, "Wrong size on LoginCamera_Blueprint_C_ExecuteUbergraph_LoginCamera_Blueprint");
static_assert(offsetof(LoginCamera_Blueprint_C_ExecuteUbergraph_LoginCamera_Blueprint, EntryPoint) == 0x000000, "Member 'LoginCamera_Blueprint_C_ExecuteUbergraph_LoginCamera_Blueprint::EntryPoint' has a wrong offset!");
static_assert(offsetof(LoginCamera_Blueprint_C_ExecuteUbergraph_LoginCamera_Blueprint, CallFunc_GetContextualTimeOfDayManager_ReturnValue) == 0x000008, "Member 'LoginCamera_Blueprint_C_ExecuteUbergraph_LoginCamera_Blueprint::CallFunc_GetContextualTimeOfDayManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(LoginCamera_Blueprint_C_ExecuteUbergraph_LoginCamera_Blueprint, Temp_int_Array_Index_Variable) == 0x000018, "Member 'LoginCamera_Blueprint_C_ExecuteUbergraph_LoginCamera_Blueprint::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(LoginCamera_Blueprint_C_ExecuteUbergraph_LoginCamera_Blueprint, K2Node_Event_PlayerController) == 0x000020, "Member 'LoginCamera_Blueprint_C_ExecuteUbergraph_LoginCamera_Blueprint::K2Node_Event_PlayerController' has a wrong offset!");
static_assert(offsetof(LoginCamera_Blueprint_C_ExecuteUbergraph_LoginCamera_Blueprint, CallFunc_GetAllActorsOfClass_OutActors) == 0x000028, "Member 'LoginCamera_Blueprint_C_ExecuteUbergraph_LoginCamera_Blueprint::CallFunc_GetAllActorsOfClass_OutActors' has a wrong offset!");
static_assert(offsetof(LoginCamera_Blueprint_C_ExecuteUbergraph_LoginCamera_Blueprint, Temp_int_Loop_Counter_Variable) == 0x000038, "Member 'LoginCamera_Blueprint_C_ExecuteUbergraph_LoginCamera_Blueprint::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(LoginCamera_Blueprint_C_ExecuteUbergraph_LoginCamera_Blueprint, CallFunc_Array_Get_Item) == 0x000040, "Member 'LoginCamera_Blueprint_C_ExecuteUbergraph_LoginCamera_Blueprint::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(LoginCamera_Blueprint_C_ExecuteUbergraph_LoginCamera_Blueprint, CallFunc_Add_IntInt_ReturnValue) == 0x000048, "Member 'LoginCamera_Blueprint_C_ExecuteUbergraph_LoginCamera_Blueprint::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(LoginCamera_Blueprint_C_ExecuteUbergraph_LoginCamera_Blueprint, CallFunc_Array_Length_ReturnValue) == 0x00004C, "Member 'LoginCamera_Blueprint_C_ExecuteUbergraph_LoginCamera_Blueprint::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(LoginCamera_Blueprint_C_ExecuteUbergraph_LoginCamera_Blueprint, CallFunc_Less_IntInt_ReturnValue) == 0x000050, "Member 'LoginCamera_Blueprint_C_ExecuteUbergraph_LoginCamera_Blueprint::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");

struct LoginCamera_Blueprint_C_BP_OnActivated final
{
public:
	class AFortPlayerController*                  PlayerController;
};
static_assert(alignof(LoginCamera_Blueprint_C_BP_OnActivated) == 0x000008, "Wrong alignment on LoginCamera_Blueprint_C_BP_OnActivated");
static_assert(sizeof(LoginCamera_Blueprint_C_BP_OnActivated) == 0x000008, "Wrong size on LoginCamera_Blueprint_C_BP_OnActivated");
static_assert(offsetof(LoginCamera_Blueprint_C_BP_OnActivated, PlayerController) == 0x000000, "Member 'LoginCamera_Blueprint_C_BP_OnActivated::PlayerController' has a wrong offset!");

}
