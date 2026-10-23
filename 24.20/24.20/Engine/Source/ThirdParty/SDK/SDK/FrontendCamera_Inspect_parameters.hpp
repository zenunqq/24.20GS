#pragma once

#include "Basic.hpp"

namespace SDK::Params
{

struct FrontendCamera_Inspect_C_ExecuteUbergraph_FrontendCamera_Inspect final
{
public:
	int32                                         EntryPoint;
	uint8                                         Pad_4[0x4];
	TScriptInterface<class IFortTimeOfDayManagerInterface> CallFunc_GetContextualTimeOfDayManager_ReturnValue;
	int32                                         Temp_int_Array_Index_Variable;
	uint8                                         Pad_1C[0x4];
	class AFortPlayerController*                  K2Node_Event_PlayerController_1;
	class UFortGlobalUIContext*                   CallFunc_GetLocalPlayerSubSystemFromPlayerController_ReturnValue;
	bool                                          CallFunc_IsInZone_ReturnValue;
	uint8                                         Pad_31[0x7];
	TArray<class ATVPostProcessBP_C*>             CallFunc_GetAllActorsOfClass_OutActors;
	bool                                          CallFunc_Not_PreBool_ReturnValue;
	uint8                                         Pad_49[0x7];
	class ATVPostProcessBP_C*                     CallFunc_Array_Get_Item;
	int32                                         CallFunc_Array_Length_ReturnValue;
	uint8                                         Pad_5C[0x4];
	TArray<class AVaultCharacterLightingBP_C*>    CallFunc_GetAllActorsOfClass_OutActors_1;
	class AFortPlayerController*                  K2Node_Event_PlayerController;
	class AVaultCharacterLightingBP_C*            CallFunc_Array_Get_Item_1;
	TArray<class AVaultCharacterLightingBP_C*>    CallFunc_GetAllActorsOfClass_OutActors_2;
	class AVaultCharacterLightingBP_C*            CallFunc_Array_Get_Item_2;
	int32                                         Temp_int_Loop_Counter_Variable;
	bool                                          CallFunc_Less_IntInt_ReturnValue;
	uint8                                         Pad_9D[0x3];
	int32                                         CallFunc_Add_IntInt_ReturnValue;
};
static_assert(alignof(FrontendCamera_Inspect_C_ExecuteUbergraph_FrontendCamera_Inspect) == 0x000008, "Wrong alignment on FrontendCamera_Inspect_C_ExecuteUbergraph_FrontendCamera_Inspect");
static_assert(sizeof(FrontendCamera_Inspect_C_ExecuteUbergraph_FrontendCamera_Inspect) == 0x0000A8, "Wrong size on FrontendCamera_Inspect_C_ExecuteUbergraph_FrontendCamera_Inspect");
static_assert(offsetof(FrontendCamera_Inspect_C_ExecuteUbergraph_FrontendCamera_Inspect, EntryPoint) == 0x000000, "Member 'FrontendCamera_Inspect_C_ExecuteUbergraph_FrontendCamera_Inspect::EntryPoint' has a wrong offset!");
static_assert(offsetof(FrontendCamera_Inspect_C_ExecuteUbergraph_FrontendCamera_Inspect, CallFunc_GetContextualTimeOfDayManager_ReturnValue) == 0x000008, "Member 'FrontendCamera_Inspect_C_ExecuteUbergraph_FrontendCamera_Inspect::CallFunc_GetContextualTimeOfDayManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(FrontendCamera_Inspect_C_ExecuteUbergraph_FrontendCamera_Inspect, Temp_int_Array_Index_Variable) == 0x000018, "Member 'FrontendCamera_Inspect_C_ExecuteUbergraph_FrontendCamera_Inspect::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(FrontendCamera_Inspect_C_ExecuteUbergraph_FrontendCamera_Inspect, K2Node_Event_PlayerController_1) == 0x000020, "Member 'FrontendCamera_Inspect_C_ExecuteUbergraph_FrontendCamera_Inspect::K2Node_Event_PlayerController_1' has a wrong offset!");
static_assert(offsetof(FrontendCamera_Inspect_C_ExecuteUbergraph_FrontendCamera_Inspect, CallFunc_GetLocalPlayerSubSystemFromPlayerController_ReturnValue) == 0x000028, "Member 'FrontendCamera_Inspect_C_ExecuteUbergraph_FrontendCamera_Inspect::CallFunc_GetLocalPlayerSubSystemFromPlayerController_ReturnValue' has a wrong offset!");
static_assert(offsetof(FrontendCamera_Inspect_C_ExecuteUbergraph_FrontendCamera_Inspect, CallFunc_IsInZone_ReturnValue) == 0x000030, "Member 'FrontendCamera_Inspect_C_ExecuteUbergraph_FrontendCamera_Inspect::CallFunc_IsInZone_ReturnValue' has a wrong offset!");
static_assert(offsetof(FrontendCamera_Inspect_C_ExecuteUbergraph_FrontendCamera_Inspect, CallFunc_GetAllActorsOfClass_OutActors) == 0x000038, "Member 'FrontendCamera_Inspect_C_ExecuteUbergraph_FrontendCamera_Inspect::CallFunc_GetAllActorsOfClass_OutActors' has a wrong offset!");
static_assert(offsetof(FrontendCamera_Inspect_C_ExecuteUbergraph_FrontendCamera_Inspect, CallFunc_Not_PreBool_ReturnValue) == 0x000048, "Member 'FrontendCamera_Inspect_C_ExecuteUbergraph_FrontendCamera_Inspect::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(FrontendCamera_Inspect_C_ExecuteUbergraph_FrontendCamera_Inspect, CallFunc_Array_Get_Item) == 0x000050, "Member 'FrontendCamera_Inspect_C_ExecuteUbergraph_FrontendCamera_Inspect::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(FrontendCamera_Inspect_C_ExecuteUbergraph_FrontendCamera_Inspect, CallFunc_Array_Length_ReturnValue) == 0x000058, "Member 'FrontendCamera_Inspect_C_ExecuteUbergraph_FrontendCamera_Inspect::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(FrontendCamera_Inspect_C_ExecuteUbergraph_FrontendCamera_Inspect, CallFunc_GetAllActorsOfClass_OutActors_1) == 0x000060, "Member 'FrontendCamera_Inspect_C_ExecuteUbergraph_FrontendCamera_Inspect::CallFunc_GetAllActorsOfClass_OutActors_1' has a wrong offset!");
static_assert(offsetof(FrontendCamera_Inspect_C_ExecuteUbergraph_FrontendCamera_Inspect, K2Node_Event_PlayerController) == 0x000070, "Member 'FrontendCamera_Inspect_C_ExecuteUbergraph_FrontendCamera_Inspect::K2Node_Event_PlayerController' has a wrong offset!");
static_assert(offsetof(FrontendCamera_Inspect_C_ExecuteUbergraph_FrontendCamera_Inspect, CallFunc_Array_Get_Item_1) == 0x000078, "Member 'FrontendCamera_Inspect_C_ExecuteUbergraph_FrontendCamera_Inspect::CallFunc_Array_Get_Item_1' has a wrong offset!");
static_assert(offsetof(FrontendCamera_Inspect_C_ExecuteUbergraph_FrontendCamera_Inspect, CallFunc_GetAllActorsOfClass_OutActors_2) == 0x000080, "Member 'FrontendCamera_Inspect_C_ExecuteUbergraph_FrontendCamera_Inspect::CallFunc_GetAllActorsOfClass_OutActors_2' has a wrong offset!");
static_assert(offsetof(FrontendCamera_Inspect_C_ExecuteUbergraph_FrontendCamera_Inspect, CallFunc_Array_Get_Item_2) == 0x000090, "Member 'FrontendCamera_Inspect_C_ExecuteUbergraph_FrontendCamera_Inspect::CallFunc_Array_Get_Item_2' has a wrong offset!");
static_assert(offsetof(FrontendCamera_Inspect_C_ExecuteUbergraph_FrontendCamera_Inspect, Temp_int_Loop_Counter_Variable) == 0x000098, "Member 'FrontendCamera_Inspect_C_ExecuteUbergraph_FrontendCamera_Inspect::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(FrontendCamera_Inspect_C_ExecuteUbergraph_FrontendCamera_Inspect, CallFunc_Less_IntInt_ReturnValue) == 0x00009C, "Member 'FrontendCamera_Inspect_C_ExecuteUbergraph_FrontendCamera_Inspect::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(FrontendCamera_Inspect_C_ExecuteUbergraph_FrontendCamera_Inspect, CallFunc_Add_IntInt_ReturnValue) == 0x0000A0, "Member 'FrontendCamera_Inspect_C_ExecuteUbergraph_FrontendCamera_Inspect::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");

struct FrontendCamera_Inspect_C_BP_OnDeactivated final
{
public:
	class AFortPlayerController*                  PlayerController;
};
static_assert(alignof(FrontendCamera_Inspect_C_BP_OnDeactivated) == 0x000008, "Wrong alignment on FrontendCamera_Inspect_C_BP_OnDeactivated");
static_assert(sizeof(FrontendCamera_Inspect_C_BP_OnDeactivated) == 0x000008, "Wrong size on FrontendCamera_Inspect_C_BP_OnDeactivated");
static_assert(offsetof(FrontendCamera_Inspect_C_BP_OnDeactivated, PlayerController) == 0x000000, "Member 'FrontendCamera_Inspect_C_BP_OnDeactivated::PlayerController' has a wrong offset!");

struct FrontendCamera_Inspect_C_BP_OnActivated final
{
public:
	class AFortPlayerController*                  PlayerController;
};
static_assert(alignof(FrontendCamera_Inspect_C_BP_OnActivated) == 0x000008, "Wrong alignment on FrontendCamera_Inspect_C_BP_OnActivated");
static_assert(sizeof(FrontendCamera_Inspect_C_BP_OnActivated) == 0x000008, "Wrong size on FrontendCamera_Inspect_C_BP_OnActivated");
static_assert(offsetof(FrontendCamera_Inspect_C_BP_OnActivated, PlayerController) == 0x000000, "Member 'FrontendCamera_Inspect_C_BP_OnActivated::PlayerController' has a wrong offset!");

}
