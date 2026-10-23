#pragma once

#include "Basic.hpp"

namespace SDK::Params
{

struct VaultCamera_Blueprint_C_ExecuteUbergraph_VaultCamera_Blueprint final
{
public:
	int32                                         EntryPoint;
	uint8                                         Pad_4[0x4];
	TScriptInterface<class IFortTimeOfDayManagerInterface> CallFunc_GetContextualTimeOfDayManager_ReturnValue;
	int32                                         Temp_int_Array_Index_Variable;
	uint8                                         Pad_1C[0x4];
	class AFortPlayerController*                  K2Node_Event_PlayerController_1;
	class AFortPlayerController*                  K2Node_Event_PlayerController;
	class APlayerController*                      CallFunc_GetPlayerController_ReturnValue;
	class APlayerController*                      CallFunc_GetPlayerController_ReturnValue_1;
	TArray<class ATVPostProcessBP_C*>             CallFunc_GetAllActorsOfClass_OutActors;
	int32                                         Temp_int_Loop_Counter_Variable;
	uint8                                         Pad_54[0x4];
	class ATVPostProcessBP_C*                     CallFunc_Array_Get_Item;
	int32                                         CallFunc_Add_IntInt_ReturnValue;
	int32                                         CallFunc_Array_Length_ReturnValue;
	bool                                          CallFunc_Less_IntInt_ReturnValue;
};
static_assert(alignof(VaultCamera_Blueprint_C_ExecuteUbergraph_VaultCamera_Blueprint) == 0x000008, "Wrong alignment on VaultCamera_Blueprint_C_ExecuteUbergraph_VaultCamera_Blueprint");
static_assert(sizeof(VaultCamera_Blueprint_C_ExecuteUbergraph_VaultCamera_Blueprint) == 0x000070, "Wrong size on VaultCamera_Blueprint_C_ExecuteUbergraph_VaultCamera_Blueprint");
static_assert(offsetof(VaultCamera_Blueprint_C_ExecuteUbergraph_VaultCamera_Blueprint, EntryPoint) == 0x000000, "Member 'VaultCamera_Blueprint_C_ExecuteUbergraph_VaultCamera_Blueprint::EntryPoint' has a wrong offset!");
static_assert(offsetof(VaultCamera_Blueprint_C_ExecuteUbergraph_VaultCamera_Blueprint, CallFunc_GetContextualTimeOfDayManager_ReturnValue) == 0x000008, "Member 'VaultCamera_Blueprint_C_ExecuteUbergraph_VaultCamera_Blueprint::CallFunc_GetContextualTimeOfDayManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(VaultCamera_Blueprint_C_ExecuteUbergraph_VaultCamera_Blueprint, Temp_int_Array_Index_Variable) == 0x000018, "Member 'VaultCamera_Blueprint_C_ExecuteUbergraph_VaultCamera_Blueprint::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(VaultCamera_Blueprint_C_ExecuteUbergraph_VaultCamera_Blueprint, K2Node_Event_PlayerController_1) == 0x000020, "Member 'VaultCamera_Blueprint_C_ExecuteUbergraph_VaultCamera_Blueprint::K2Node_Event_PlayerController_1' has a wrong offset!");
static_assert(offsetof(VaultCamera_Blueprint_C_ExecuteUbergraph_VaultCamera_Blueprint, K2Node_Event_PlayerController) == 0x000028, "Member 'VaultCamera_Blueprint_C_ExecuteUbergraph_VaultCamera_Blueprint::K2Node_Event_PlayerController' has a wrong offset!");
static_assert(offsetof(VaultCamera_Blueprint_C_ExecuteUbergraph_VaultCamera_Blueprint, CallFunc_GetPlayerController_ReturnValue) == 0x000030, "Member 'VaultCamera_Blueprint_C_ExecuteUbergraph_VaultCamera_Blueprint::CallFunc_GetPlayerController_ReturnValue' has a wrong offset!");
static_assert(offsetof(VaultCamera_Blueprint_C_ExecuteUbergraph_VaultCamera_Blueprint, CallFunc_GetPlayerController_ReturnValue_1) == 0x000038, "Member 'VaultCamera_Blueprint_C_ExecuteUbergraph_VaultCamera_Blueprint::CallFunc_GetPlayerController_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(VaultCamera_Blueprint_C_ExecuteUbergraph_VaultCamera_Blueprint, CallFunc_GetAllActorsOfClass_OutActors) == 0x000040, "Member 'VaultCamera_Blueprint_C_ExecuteUbergraph_VaultCamera_Blueprint::CallFunc_GetAllActorsOfClass_OutActors' has a wrong offset!");
static_assert(offsetof(VaultCamera_Blueprint_C_ExecuteUbergraph_VaultCamera_Blueprint, Temp_int_Loop_Counter_Variable) == 0x000050, "Member 'VaultCamera_Blueprint_C_ExecuteUbergraph_VaultCamera_Blueprint::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(VaultCamera_Blueprint_C_ExecuteUbergraph_VaultCamera_Blueprint, CallFunc_Array_Get_Item) == 0x000058, "Member 'VaultCamera_Blueprint_C_ExecuteUbergraph_VaultCamera_Blueprint::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(VaultCamera_Blueprint_C_ExecuteUbergraph_VaultCamera_Blueprint, CallFunc_Add_IntInt_ReturnValue) == 0x000060, "Member 'VaultCamera_Blueprint_C_ExecuteUbergraph_VaultCamera_Blueprint::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(VaultCamera_Blueprint_C_ExecuteUbergraph_VaultCamera_Blueprint, CallFunc_Array_Length_ReturnValue) == 0x000064, "Member 'VaultCamera_Blueprint_C_ExecuteUbergraph_VaultCamera_Blueprint::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(VaultCamera_Blueprint_C_ExecuteUbergraph_VaultCamera_Blueprint, CallFunc_Less_IntInt_ReturnValue) == 0x000068, "Member 'VaultCamera_Blueprint_C_ExecuteUbergraph_VaultCamera_Blueprint::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");

struct VaultCamera_Blueprint_C_BP_OnDeactivated final
{
public:
	class AFortPlayerController*                  PlayerController;
};
static_assert(alignof(VaultCamera_Blueprint_C_BP_OnDeactivated) == 0x000008, "Wrong alignment on VaultCamera_Blueprint_C_BP_OnDeactivated");
static_assert(sizeof(VaultCamera_Blueprint_C_BP_OnDeactivated) == 0x000008, "Wrong size on VaultCamera_Blueprint_C_BP_OnDeactivated");
static_assert(offsetof(VaultCamera_Blueprint_C_BP_OnDeactivated, PlayerController) == 0x000000, "Member 'VaultCamera_Blueprint_C_BP_OnDeactivated::PlayerController' has a wrong offset!");

struct VaultCamera_Blueprint_C_BP_OnActivated final
{
public:
	class AFortPlayerController*                  PlayerController;
};
static_assert(alignof(VaultCamera_Blueprint_C_BP_OnActivated) == 0x000008, "Wrong alignment on VaultCamera_Blueprint_C_BP_OnActivated");
static_assert(sizeof(VaultCamera_Blueprint_C_BP_OnActivated) == 0x000008, "Wrong size on VaultCamera_Blueprint_C_BP_OnActivated");
static_assert(offsetof(VaultCamera_Blueprint_C_BP_OnActivated, PlayerController) == 0x000000, "Member 'VaultCamera_Blueprint_C_BP_OnActivated::PlayerController' has a wrong offset!");

}
