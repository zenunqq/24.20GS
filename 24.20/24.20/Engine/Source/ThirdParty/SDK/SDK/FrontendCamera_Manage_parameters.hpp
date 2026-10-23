#pragma once

#include "Basic.hpp"

namespace SDK::Params
{

struct FrontendCamera_Manage_C_ExecuteUbergraph_FrontendCamera_Manage final
{
public:
	int32                                         EntryPoint;
	uint8                                         Pad_4[0x4];
	TScriptInterface<class IFortTimeOfDayManagerInterface> CallFunc_GetContextualTimeOfDayManager_ReturnValue;
	int32                                         Temp_int_Array_Index_Variable;
	uint8                                         Pad_1C[0x4];
	class AFortPlayerController*                  K2Node_Event_PlayerController_1;
	TArray<class ATVPostProcessBP_C*>             CallFunc_GetAllActorsOfClass_OutActors;
	class UFortGlobalUIContext*                   CallFunc_GetLocalPlayerSubSystemFromPlayerController_ReturnValue;
	class ATVPostProcessBP_C*                     CallFunc_Array_Get_Item;
	bool                                          CallFunc_IsInZone_ReturnValue;
	bool                                          CallFunc_Not_PreBool_ReturnValue;
	uint8                                         Pad_4A[0x2];
	int32                                         CallFunc_Array_Length_ReturnValue;
	class AFortPlayerController*                  K2Node_Event_PlayerController;
	TArray<class AVaultCharacterLightingBP_C*>    CallFunc_GetAllActorsOfClass_OutActors_1;
	TArray<class AVaultCharacterLightingBP_C*>    CallFunc_GetAllActorsOfClass_OutActors_2;
	class AVaultCharacterLightingBP_C*            CallFunc_Array_Get_Item_1;
	class AVaultCharacterLightingBP_C*            CallFunc_Array_Get_Item_2;
	int32                                         Temp_int_Loop_Counter_Variable;
	bool                                          CallFunc_Less_IntInt_ReturnValue;
	uint8                                         Pad_8D[0x3];
	int32                                         CallFunc_Add_IntInt_ReturnValue;
};
static_assert(alignof(FrontendCamera_Manage_C_ExecuteUbergraph_FrontendCamera_Manage) == 0x000008, "Wrong alignment on FrontendCamera_Manage_C_ExecuteUbergraph_FrontendCamera_Manage");
static_assert(sizeof(FrontendCamera_Manage_C_ExecuteUbergraph_FrontendCamera_Manage) == 0x000098, "Wrong size on FrontendCamera_Manage_C_ExecuteUbergraph_FrontendCamera_Manage");
static_assert(offsetof(FrontendCamera_Manage_C_ExecuteUbergraph_FrontendCamera_Manage, EntryPoint) == 0x000000, "Member 'FrontendCamera_Manage_C_ExecuteUbergraph_FrontendCamera_Manage::EntryPoint' has a wrong offset!");
static_assert(offsetof(FrontendCamera_Manage_C_ExecuteUbergraph_FrontendCamera_Manage, CallFunc_GetContextualTimeOfDayManager_ReturnValue) == 0x000008, "Member 'FrontendCamera_Manage_C_ExecuteUbergraph_FrontendCamera_Manage::CallFunc_GetContextualTimeOfDayManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(FrontendCamera_Manage_C_ExecuteUbergraph_FrontendCamera_Manage, Temp_int_Array_Index_Variable) == 0x000018, "Member 'FrontendCamera_Manage_C_ExecuteUbergraph_FrontendCamera_Manage::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(FrontendCamera_Manage_C_ExecuteUbergraph_FrontendCamera_Manage, K2Node_Event_PlayerController_1) == 0x000020, "Member 'FrontendCamera_Manage_C_ExecuteUbergraph_FrontendCamera_Manage::K2Node_Event_PlayerController_1' has a wrong offset!");
static_assert(offsetof(FrontendCamera_Manage_C_ExecuteUbergraph_FrontendCamera_Manage, CallFunc_GetAllActorsOfClass_OutActors) == 0x000028, "Member 'FrontendCamera_Manage_C_ExecuteUbergraph_FrontendCamera_Manage::CallFunc_GetAllActorsOfClass_OutActors' has a wrong offset!");
static_assert(offsetof(FrontendCamera_Manage_C_ExecuteUbergraph_FrontendCamera_Manage, CallFunc_GetLocalPlayerSubSystemFromPlayerController_ReturnValue) == 0x000038, "Member 'FrontendCamera_Manage_C_ExecuteUbergraph_FrontendCamera_Manage::CallFunc_GetLocalPlayerSubSystemFromPlayerController_ReturnValue' has a wrong offset!");
static_assert(offsetof(FrontendCamera_Manage_C_ExecuteUbergraph_FrontendCamera_Manage, CallFunc_Array_Get_Item) == 0x000040, "Member 'FrontendCamera_Manage_C_ExecuteUbergraph_FrontendCamera_Manage::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(FrontendCamera_Manage_C_ExecuteUbergraph_FrontendCamera_Manage, CallFunc_IsInZone_ReturnValue) == 0x000048, "Member 'FrontendCamera_Manage_C_ExecuteUbergraph_FrontendCamera_Manage::CallFunc_IsInZone_ReturnValue' has a wrong offset!");
static_assert(offsetof(FrontendCamera_Manage_C_ExecuteUbergraph_FrontendCamera_Manage, CallFunc_Not_PreBool_ReturnValue) == 0x000049, "Member 'FrontendCamera_Manage_C_ExecuteUbergraph_FrontendCamera_Manage::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(FrontendCamera_Manage_C_ExecuteUbergraph_FrontendCamera_Manage, CallFunc_Array_Length_ReturnValue) == 0x00004C, "Member 'FrontendCamera_Manage_C_ExecuteUbergraph_FrontendCamera_Manage::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(FrontendCamera_Manage_C_ExecuteUbergraph_FrontendCamera_Manage, K2Node_Event_PlayerController) == 0x000050, "Member 'FrontendCamera_Manage_C_ExecuteUbergraph_FrontendCamera_Manage::K2Node_Event_PlayerController' has a wrong offset!");
static_assert(offsetof(FrontendCamera_Manage_C_ExecuteUbergraph_FrontendCamera_Manage, CallFunc_GetAllActorsOfClass_OutActors_1) == 0x000058, "Member 'FrontendCamera_Manage_C_ExecuteUbergraph_FrontendCamera_Manage::CallFunc_GetAllActorsOfClass_OutActors_1' has a wrong offset!");
static_assert(offsetof(FrontendCamera_Manage_C_ExecuteUbergraph_FrontendCamera_Manage, CallFunc_GetAllActorsOfClass_OutActors_2) == 0x000068, "Member 'FrontendCamera_Manage_C_ExecuteUbergraph_FrontendCamera_Manage::CallFunc_GetAllActorsOfClass_OutActors_2' has a wrong offset!");
static_assert(offsetof(FrontendCamera_Manage_C_ExecuteUbergraph_FrontendCamera_Manage, CallFunc_Array_Get_Item_1) == 0x000078, "Member 'FrontendCamera_Manage_C_ExecuteUbergraph_FrontendCamera_Manage::CallFunc_Array_Get_Item_1' has a wrong offset!");
static_assert(offsetof(FrontendCamera_Manage_C_ExecuteUbergraph_FrontendCamera_Manage, CallFunc_Array_Get_Item_2) == 0x000080, "Member 'FrontendCamera_Manage_C_ExecuteUbergraph_FrontendCamera_Manage::CallFunc_Array_Get_Item_2' has a wrong offset!");
static_assert(offsetof(FrontendCamera_Manage_C_ExecuteUbergraph_FrontendCamera_Manage, Temp_int_Loop_Counter_Variable) == 0x000088, "Member 'FrontendCamera_Manage_C_ExecuteUbergraph_FrontendCamera_Manage::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(FrontendCamera_Manage_C_ExecuteUbergraph_FrontendCamera_Manage, CallFunc_Less_IntInt_ReturnValue) == 0x00008C, "Member 'FrontendCamera_Manage_C_ExecuteUbergraph_FrontendCamera_Manage::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(FrontendCamera_Manage_C_ExecuteUbergraph_FrontendCamera_Manage, CallFunc_Add_IntInt_ReturnValue) == 0x000090, "Member 'FrontendCamera_Manage_C_ExecuteUbergraph_FrontendCamera_Manage::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");

struct FrontendCamera_Manage_C_BP_OnDeactivated final
{
public:
	class AFortPlayerController*                  PlayerController;
};
static_assert(alignof(FrontendCamera_Manage_C_BP_OnDeactivated) == 0x000008, "Wrong alignment on FrontendCamera_Manage_C_BP_OnDeactivated");
static_assert(sizeof(FrontendCamera_Manage_C_BP_OnDeactivated) == 0x000008, "Wrong size on FrontendCamera_Manage_C_BP_OnDeactivated");
static_assert(offsetof(FrontendCamera_Manage_C_BP_OnDeactivated, PlayerController) == 0x000000, "Member 'FrontendCamera_Manage_C_BP_OnDeactivated::PlayerController' has a wrong offset!");

struct FrontendCamera_Manage_C_BP_OnActivated final
{
public:
	class AFortPlayerController*                  PlayerController;
};
static_assert(alignof(FrontendCamera_Manage_C_BP_OnActivated) == 0x000008, "Wrong alignment on FrontendCamera_Manage_C_BP_OnActivated");
static_assert(sizeof(FrontendCamera_Manage_C_BP_OnActivated) == 0x000008, "Wrong size on FrontendCamera_Manage_C_BP_OnActivated");
static_assert(offsetof(FrontendCamera_Manage_C_BP_OnActivated, PlayerController) == 0x000000, "Member 'FrontendCamera_Manage_C_BP_OnActivated::PlayerController' has a wrong offset!");

}
