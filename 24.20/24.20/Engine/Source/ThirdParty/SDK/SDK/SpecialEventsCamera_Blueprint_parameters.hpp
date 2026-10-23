#pragma once

#include "Basic.hpp"

namespace SDK::Params
{

struct SpecialEventsCamera_Blueprint_C_ExecuteUbergraph_SpecialEventsCamera_Blueprint final
{
public:
	int32                                         EntryPoint;
	uint8                                         Pad_4[0x4];
	TScriptInterface<class IFortTimeOfDayManagerInterface> CallFunc_GetContextualTimeOfDayManager_ReturnValue;
	int32                                         Temp_int_Array_Index_Variable;
	int32                                         Temp_int_Loop_Counter_Variable;
	int32                                         Temp_int_Loop_Counter_Variable_1;
	int32                                         CallFunc_Add_IntInt_ReturnValue;
	int32                                         CallFunc_Add_IntInt_ReturnValue_1;
	int32                                         Temp_int_Loop_Counter_Variable_2;
	int32                                         CallFunc_Add_IntInt_ReturnValue_2;
	int32                                         Temp_int_Array_Index_Variable_1;
	class AFortPlayerController*                  K2Node_Event_PlayerController_1;
	TArray<class ATVPostProcessBP_C*>             CallFunc_GetAllActorsOfClass_OutActors;
	int32                                         Temp_int_Array_Index_Variable_2;
	uint8                                         Pad_54[0x4];
	class ATVPostProcessBP_C*                     CallFunc_Array_Get_Item;
	int32                                         CallFunc_Array_Length_ReturnValue;
	bool                                          CallFunc_Less_IntInt_ReturnValue;
	uint8                                         Pad_65[0x3];
	class AFortPlayerController*                  K2Node_Event_PlayerController;
	TArray<class ABP_FortniteLobbyLightSwitcher_C*> CallFunc_GetAllActorsOfClass_OutActors_1;
	class ABP_FortniteLobbyLightSwitcher_C*       CallFunc_Array_Get_Item_1;
	int32                                         CallFunc_Array_Length_ReturnValue_1;
	bool                                          CallFunc_Less_IntInt_ReturnValue_1;
	uint8                                         Pad_8D[0x3];
	TArray<class ABP_FortniteLobbyLightSwitcher_C*> CallFunc_GetAllActorsOfClass_OutActors_2;
	class ABP_FortniteLobbyLightSwitcher_C*       CallFunc_Array_Get_Item_2;
	int32                                         CallFunc_Array_Length_ReturnValue_2;
	bool                                          CallFunc_Less_IntInt_ReturnValue_2;
};
static_assert(alignof(SpecialEventsCamera_Blueprint_C_ExecuteUbergraph_SpecialEventsCamera_Blueprint) == 0x000008, "Wrong alignment on SpecialEventsCamera_Blueprint_C_ExecuteUbergraph_SpecialEventsCamera_Blueprint");
static_assert(sizeof(SpecialEventsCamera_Blueprint_C_ExecuteUbergraph_SpecialEventsCamera_Blueprint) == 0x0000B0, "Wrong size on SpecialEventsCamera_Blueprint_C_ExecuteUbergraph_SpecialEventsCamera_Blueprint");
static_assert(offsetof(SpecialEventsCamera_Blueprint_C_ExecuteUbergraph_SpecialEventsCamera_Blueprint, EntryPoint) == 0x000000, "Member 'SpecialEventsCamera_Blueprint_C_ExecuteUbergraph_SpecialEventsCamera_Blueprint::EntryPoint' has a wrong offset!");
static_assert(offsetof(SpecialEventsCamera_Blueprint_C_ExecuteUbergraph_SpecialEventsCamera_Blueprint, CallFunc_GetContextualTimeOfDayManager_ReturnValue) == 0x000008, "Member 'SpecialEventsCamera_Blueprint_C_ExecuteUbergraph_SpecialEventsCamera_Blueprint::CallFunc_GetContextualTimeOfDayManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(SpecialEventsCamera_Blueprint_C_ExecuteUbergraph_SpecialEventsCamera_Blueprint, Temp_int_Array_Index_Variable) == 0x000018, "Member 'SpecialEventsCamera_Blueprint_C_ExecuteUbergraph_SpecialEventsCamera_Blueprint::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(SpecialEventsCamera_Blueprint_C_ExecuteUbergraph_SpecialEventsCamera_Blueprint, Temp_int_Loop_Counter_Variable) == 0x00001C, "Member 'SpecialEventsCamera_Blueprint_C_ExecuteUbergraph_SpecialEventsCamera_Blueprint::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(SpecialEventsCamera_Blueprint_C_ExecuteUbergraph_SpecialEventsCamera_Blueprint, Temp_int_Loop_Counter_Variable_1) == 0x000020, "Member 'SpecialEventsCamera_Blueprint_C_ExecuteUbergraph_SpecialEventsCamera_Blueprint::Temp_int_Loop_Counter_Variable_1' has a wrong offset!");
static_assert(offsetof(SpecialEventsCamera_Blueprint_C_ExecuteUbergraph_SpecialEventsCamera_Blueprint, CallFunc_Add_IntInt_ReturnValue) == 0x000024, "Member 'SpecialEventsCamera_Blueprint_C_ExecuteUbergraph_SpecialEventsCamera_Blueprint::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(SpecialEventsCamera_Blueprint_C_ExecuteUbergraph_SpecialEventsCamera_Blueprint, CallFunc_Add_IntInt_ReturnValue_1) == 0x000028, "Member 'SpecialEventsCamera_Blueprint_C_ExecuteUbergraph_SpecialEventsCamera_Blueprint::CallFunc_Add_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(SpecialEventsCamera_Blueprint_C_ExecuteUbergraph_SpecialEventsCamera_Blueprint, Temp_int_Loop_Counter_Variable_2) == 0x00002C, "Member 'SpecialEventsCamera_Blueprint_C_ExecuteUbergraph_SpecialEventsCamera_Blueprint::Temp_int_Loop_Counter_Variable_2' has a wrong offset!");
static_assert(offsetof(SpecialEventsCamera_Blueprint_C_ExecuteUbergraph_SpecialEventsCamera_Blueprint, CallFunc_Add_IntInt_ReturnValue_2) == 0x000030, "Member 'SpecialEventsCamera_Blueprint_C_ExecuteUbergraph_SpecialEventsCamera_Blueprint::CallFunc_Add_IntInt_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(SpecialEventsCamera_Blueprint_C_ExecuteUbergraph_SpecialEventsCamera_Blueprint, Temp_int_Array_Index_Variable_1) == 0x000034, "Member 'SpecialEventsCamera_Blueprint_C_ExecuteUbergraph_SpecialEventsCamera_Blueprint::Temp_int_Array_Index_Variable_1' has a wrong offset!");
static_assert(offsetof(SpecialEventsCamera_Blueprint_C_ExecuteUbergraph_SpecialEventsCamera_Blueprint, K2Node_Event_PlayerController_1) == 0x000038, "Member 'SpecialEventsCamera_Blueprint_C_ExecuteUbergraph_SpecialEventsCamera_Blueprint::K2Node_Event_PlayerController_1' has a wrong offset!");
static_assert(offsetof(SpecialEventsCamera_Blueprint_C_ExecuteUbergraph_SpecialEventsCamera_Blueprint, CallFunc_GetAllActorsOfClass_OutActors) == 0x000040, "Member 'SpecialEventsCamera_Blueprint_C_ExecuteUbergraph_SpecialEventsCamera_Blueprint::CallFunc_GetAllActorsOfClass_OutActors' has a wrong offset!");
static_assert(offsetof(SpecialEventsCamera_Blueprint_C_ExecuteUbergraph_SpecialEventsCamera_Blueprint, Temp_int_Array_Index_Variable_2) == 0x000050, "Member 'SpecialEventsCamera_Blueprint_C_ExecuteUbergraph_SpecialEventsCamera_Blueprint::Temp_int_Array_Index_Variable_2' has a wrong offset!");
static_assert(offsetof(SpecialEventsCamera_Blueprint_C_ExecuteUbergraph_SpecialEventsCamera_Blueprint, CallFunc_Array_Get_Item) == 0x000058, "Member 'SpecialEventsCamera_Blueprint_C_ExecuteUbergraph_SpecialEventsCamera_Blueprint::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(SpecialEventsCamera_Blueprint_C_ExecuteUbergraph_SpecialEventsCamera_Blueprint, CallFunc_Array_Length_ReturnValue) == 0x000060, "Member 'SpecialEventsCamera_Blueprint_C_ExecuteUbergraph_SpecialEventsCamera_Blueprint::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(SpecialEventsCamera_Blueprint_C_ExecuteUbergraph_SpecialEventsCamera_Blueprint, CallFunc_Less_IntInt_ReturnValue) == 0x000064, "Member 'SpecialEventsCamera_Blueprint_C_ExecuteUbergraph_SpecialEventsCamera_Blueprint::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(SpecialEventsCamera_Blueprint_C_ExecuteUbergraph_SpecialEventsCamera_Blueprint, K2Node_Event_PlayerController) == 0x000068, "Member 'SpecialEventsCamera_Blueprint_C_ExecuteUbergraph_SpecialEventsCamera_Blueprint::K2Node_Event_PlayerController' has a wrong offset!");
static_assert(offsetof(SpecialEventsCamera_Blueprint_C_ExecuteUbergraph_SpecialEventsCamera_Blueprint, CallFunc_GetAllActorsOfClass_OutActors_1) == 0x000070, "Member 'SpecialEventsCamera_Blueprint_C_ExecuteUbergraph_SpecialEventsCamera_Blueprint::CallFunc_GetAllActorsOfClass_OutActors_1' has a wrong offset!");
static_assert(offsetof(SpecialEventsCamera_Blueprint_C_ExecuteUbergraph_SpecialEventsCamera_Blueprint, CallFunc_Array_Get_Item_1) == 0x000080, "Member 'SpecialEventsCamera_Blueprint_C_ExecuteUbergraph_SpecialEventsCamera_Blueprint::CallFunc_Array_Get_Item_1' has a wrong offset!");
static_assert(offsetof(SpecialEventsCamera_Blueprint_C_ExecuteUbergraph_SpecialEventsCamera_Blueprint, CallFunc_Array_Length_ReturnValue_1) == 0x000088, "Member 'SpecialEventsCamera_Blueprint_C_ExecuteUbergraph_SpecialEventsCamera_Blueprint::CallFunc_Array_Length_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(SpecialEventsCamera_Blueprint_C_ExecuteUbergraph_SpecialEventsCamera_Blueprint, CallFunc_Less_IntInt_ReturnValue_1) == 0x00008C, "Member 'SpecialEventsCamera_Blueprint_C_ExecuteUbergraph_SpecialEventsCamera_Blueprint::CallFunc_Less_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(SpecialEventsCamera_Blueprint_C_ExecuteUbergraph_SpecialEventsCamera_Blueprint, CallFunc_GetAllActorsOfClass_OutActors_2) == 0x000090, "Member 'SpecialEventsCamera_Blueprint_C_ExecuteUbergraph_SpecialEventsCamera_Blueprint::CallFunc_GetAllActorsOfClass_OutActors_2' has a wrong offset!");
static_assert(offsetof(SpecialEventsCamera_Blueprint_C_ExecuteUbergraph_SpecialEventsCamera_Blueprint, CallFunc_Array_Get_Item_2) == 0x0000A0, "Member 'SpecialEventsCamera_Blueprint_C_ExecuteUbergraph_SpecialEventsCamera_Blueprint::CallFunc_Array_Get_Item_2' has a wrong offset!");
static_assert(offsetof(SpecialEventsCamera_Blueprint_C_ExecuteUbergraph_SpecialEventsCamera_Blueprint, CallFunc_Array_Length_ReturnValue_2) == 0x0000A8, "Member 'SpecialEventsCamera_Blueprint_C_ExecuteUbergraph_SpecialEventsCamera_Blueprint::CallFunc_Array_Length_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(SpecialEventsCamera_Blueprint_C_ExecuteUbergraph_SpecialEventsCamera_Blueprint, CallFunc_Less_IntInt_ReturnValue_2) == 0x0000AC, "Member 'SpecialEventsCamera_Blueprint_C_ExecuteUbergraph_SpecialEventsCamera_Blueprint::CallFunc_Less_IntInt_ReturnValue_2' has a wrong offset!");

struct SpecialEventsCamera_Blueprint_C_BP_OnDeactivated final
{
public:
	class AFortPlayerController*                  PlayerController;
};
static_assert(alignof(SpecialEventsCamera_Blueprint_C_BP_OnDeactivated) == 0x000008, "Wrong alignment on SpecialEventsCamera_Blueprint_C_BP_OnDeactivated");
static_assert(sizeof(SpecialEventsCamera_Blueprint_C_BP_OnDeactivated) == 0x000008, "Wrong size on SpecialEventsCamera_Blueprint_C_BP_OnDeactivated");
static_assert(offsetof(SpecialEventsCamera_Blueprint_C_BP_OnDeactivated, PlayerController) == 0x000000, "Member 'SpecialEventsCamera_Blueprint_C_BP_OnDeactivated::PlayerController' has a wrong offset!");

struct SpecialEventsCamera_Blueprint_C_BP_OnActivated final
{
public:
	class AFortPlayerController*                  PlayerController;
};
static_assert(alignof(SpecialEventsCamera_Blueprint_C_BP_OnActivated) == 0x000008, "Wrong alignment on SpecialEventsCamera_Blueprint_C_BP_OnActivated");
static_assert(sizeof(SpecialEventsCamera_Blueprint_C_BP_OnActivated) == 0x000008, "Wrong size on SpecialEventsCamera_Blueprint_C_BP_OnActivated");
static_assert(offsetof(SpecialEventsCamera_Blueprint_C_BP_OnActivated, PlayerController) == 0x000000, "Member 'SpecialEventsCamera_Blueprint_C_BP_OnActivated::PlayerController' has a wrong offset!");

}
