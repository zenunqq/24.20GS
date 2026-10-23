#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"

namespace SDK::Params
{

struct FortnitePartyBackdrop_Camera_C_BP_OnDeactivated final
{
public:
	class AFortPlayerController*                  PlayerController;
};
static_assert(alignof(FortnitePartyBackdrop_Camera_C_BP_OnDeactivated) == 0x000008, "Wrong alignment on FortnitePartyBackdrop_Camera_C_BP_OnDeactivated");
static_assert(sizeof(FortnitePartyBackdrop_Camera_C_BP_OnDeactivated) == 0x000008, "Wrong size on FortnitePartyBackdrop_Camera_C_BP_OnDeactivated");
static_assert(offsetof(FortnitePartyBackdrop_Camera_C_BP_OnDeactivated, PlayerController) == 0x000000, "Member 'FortnitePartyBackdrop_Camera_C_BP_OnDeactivated::PlayerController' has a wrong offset!");

struct FortnitePartyBackdrop_Camera_C_BP_OnActivated final
{
public:
	class AFortPlayerController*                  PlayerController;
};
static_assert(alignof(FortnitePartyBackdrop_Camera_C_BP_OnActivated) == 0x000008, "Wrong alignment on FortnitePartyBackdrop_Camera_C_BP_OnActivated");
static_assert(sizeof(FortnitePartyBackdrop_Camera_C_BP_OnActivated) == 0x000008, "Wrong size on FortnitePartyBackdrop_Camera_C_BP_OnActivated");
static_assert(offsetof(FortnitePartyBackdrop_Camera_C_BP_OnActivated, PlayerController) == 0x000000, "Member 'FortnitePartyBackdrop_Camera_C_BP_OnActivated::PlayerController' has a wrong offset!");

struct FortnitePartyBackdrop_Camera_C_ExecuteUbergraph_FortnitePartyBackdrop_Camera final
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
	int32                                         CallFunc_Array_Length_ReturnValue_2;
	bool                                          CallFunc_Greater_IntInt_ReturnValue;
	uint8                                         Pad_95[0x3];
	TArray<class ABP_FortniteLobbyLightSwitcher_C*> CallFunc_GetAllActorsOfClass_OutActors_2;
	class ABP_FortniteLobbyLightSwitcher_C*       CallFunc_Array_Get_Item_2;
	int32                                         CallFunc_Array_Length_ReturnValue_3;
	bool                                          CallFunc_Less_IntInt_ReturnValue_2;
	uint8                                         Pad_B5[0x3];
	int32                                         CallFunc_Array_Length_ReturnValue_4;
	bool                                          CallFunc_Greater_IntInt_ReturnValue_1;
	uint8                                         Pad_BD[0x3];
	struct FHitResult                             CallFunc_K2_SetActorTransform_SweepHitResult;
	bool                                          CallFunc_K2_SetActorTransform_ReturnValue;
};
static_assert(alignof(FortnitePartyBackdrop_Camera_C_ExecuteUbergraph_FortnitePartyBackdrop_Camera) == 0x000008, "Wrong alignment on FortnitePartyBackdrop_Camera_C_ExecuteUbergraph_FortnitePartyBackdrop_Camera");
static_assert(sizeof(FortnitePartyBackdrop_Camera_C_ExecuteUbergraph_FortnitePartyBackdrop_Camera) == 0x0001A8, "Wrong size on FortnitePartyBackdrop_Camera_C_ExecuteUbergraph_FortnitePartyBackdrop_Camera");
static_assert(offsetof(FortnitePartyBackdrop_Camera_C_ExecuteUbergraph_FortnitePartyBackdrop_Camera, EntryPoint) == 0x000000, "Member 'FortnitePartyBackdrop_Camera_C_ExecuteUbergraph_FortnitePartyBackdrop_Camera::EntryPoint' has a wrong offset!");
static_assert(offsetof(FortnitePartyBackdrop_Camera_C_ExecuteUbergraph_FortnitePartyBackdrop_Camera, CallFunc_GetContextualTimeOfDayManager_ReturnValue) == 0x000008, "Member 'FortnitePartyBackdrop_Camera_C_ExecuteUbergraph_FortnitePartyBackdrop_Camera::CallFunc_GetContextualTimeOfDayManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(FortnitePartyBackdrop_Camera_C_ExecuteUbergraph_FortnitePartyBackdrop_Camera, Temp_int_Array_Index_Variable) == 0x000018, "Member 'FortnitePartyBackdrop_Camera_C_ExecuteUbergraph_FortnitePartyBackdrop_Camera::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(FortnitePartyBackdrop_Camera_C_ExecuteUbergraph_FortnitePartyBackdrop_Camera, Temp_int_Loop_Counter_Variable) == 0x00001C, "Member 'FortnitePartyBackdrop_Camera_C_ExecuteUbergraph_FortnitePartyBackdrop_Camera::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(FortnitePartyBackdrop_Camera_C_ExecuteUbergraph_FortnitePartyBackdrop_Camera, Temp_int_Loop_Counter_Variable_1) == 0x000020, "Member 'FortnitePartyBackdrop_Camera_C_ExecuteUbergraph_FortnitePartyBackdrop_Camera::Temp_int_Loop_Counter_Variable_1' has a wrong offset!");
static_assert(offsetof(FortnitePartyBackdrop_Camera_C_ExecuteUbergraph_FortnitePartyBackdrop_Camera, CallFunc_Add_IntInt_ReturnValue) == 0x000024, "Member 'FortnitePartyBackdrop_Camera_C_ExecuteUbergraph_FortnitePartyBackdrop_Camera::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(FortnitePartyBackdrop_Camera_C_ExecuteUbergraph_FortnitePartyBackdrop_Camera, CallFunc_Add_IntInt_ReturnValue_1) == 0x000028, "Member 'FortnitePartyBackdrop_Camera_C_ExecuteUbergraph_FortnitePartyBackdrop_Camera::CallFunc_Add_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(FortnitePartyBackdrop_Camera_C_ExecuteUbergraph_FortnitePartyBackdrop_Camera, Temp_int_Loop_Counter_Variable_2) == 0x00002C, "Member 'FortnitePartyBackdrop_Camera_C_ExecuteUbergraph_FortnitePartyBackdrop_Camera::Temp_int_Loop_Counter_Variable_2' has a wrong offset!");
static_assert(offsetof(FortnitePartyBackdrop_Camera_C_ExecuteUbergraph_FortnitePartyBackdrop_Camera, CallFunc_Add_IntInt_ReturnValue_2) == 0x000030, "Member 'FortnitePartyBackdrop_Camera_C_ExecuteUbergraph_FortnitePartyBackdrop_Camera::CallFunc_Add_IntInt_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(FortnitePartyBackdrop_Camera_C_ExecuteUbergraph_FortnitePartyBackdrop_Camera, Temp_int_Array_Index_Variable_1) == 0x000034, "Member 'FortnitePartyBackdrop_Camera_C_ExecuteUbergraph_FortnitePartyBackdrop_Camera::Temp_int_Array_Index_Variable_1' has a wrong offset!");
static_assert(offsetof(FortnitePartyBackdrop_Camera_C_ExecuteUbergraph_FortnitePartyBackdrop_Camera, K2Node_Event_PlayerController_1) == 0x000038, "Member 'FortnitePartyBackdrop_Camera_C_ExecuteUbergraph_FortnitePartyBackdrop_Camera::K2Node_Event_PlayerController_1' has a wrong offset!");
static_assert(offsetof(FortnitePartyBackdrop_Camera_C_ExecuteUbergraph_FortnitePartyBackdrop_Camera, CallFunc_GetAllActorsOfClass_OutActors) == 0x000040, "Member 'FortnitePartyBackdrop_Camera_C_ExecuteUbergraph_FortnitePartyBackdrop_Camera::CallFunc_GetAllActorsOfClass_OutActors' has a wrong offset!");
static_assert(offsetof(FortnitePartyBackdrop_Camera_C_ExecuteUbergraph_FortnitePartyBackdrop_Camera, Temp_int_Array_Index_Variable_2) == 0x000050, "Member 'FortnitePartyBackdrop_Camera_C_ExecuteUbergraph_FortnitePartyBackdrop_Camera::Temp_int_Array_Index_Variable_2' has a wrong offset!");
static_assert(offsetof(FortnitePartyBackdrop_Camera_C_ExecuteUbergraph_FortnitePartyBackdrop_Camera, CallFunc_Array_Get_Item) == 0x000058, "Member 'FortnitePartyBackdrop_Camera_C_ExecuteUbergraph_FortnitePartyBackdrop_Camera::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(FortnitePartyBackdrop_Camera_C_ExecuteUbergraph_FortnitePartyBackdrop_Camera, CallFunc_Array_Length_ReturnValue) == 0x000060, "Member 'FortnitePartyBackdrop_Camera_C_ExecuteUbergraph_FortnitePartyBackdrop_Camera::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(FortnitePartyBackdrop_Camera_C_ExecuteUbergraph_FortnitePartyBackdrop_Camera, CallFunc_Less_IntInt_ReturnValue) == 0x000064, "Member 'FortnitePartyBackdrop_Camera_C_ExecuteUbergraph_FortnitePartyBackdrop_Camera::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(FortnitePartyBackdrop_Camera_C_ExecuteUbergraph_FortnitePartyBackdrop_Camera, K2Node_Event_PlayerController) == 0x000068, "Member 'FortnitePartyBackdrop_Camera_C_ExecuteUbergraph_FortnitePartyBackdrop_Camera::K2Node_Event_PlayerController' has a wrong offset!");
static_assert(offsetof(FortnitePartyBackdrop_Camera_C_ExecuteUbergraph_FortnitePartyBackdrop_Camera, CallFunc_GetAllActorsOfClass_OutActors_1) == 0x000070, "Member 'FortnitePartyBackdrop_Camera_C_ExecuteUbergraph_FortnitePartyBackdrop_Camera::CallFunc_GetAllActorsOfClass_OutActors_1' has a wrong offset!");
static_assert(offsetof(FortnitePartyBackdrop_Camera_C_ExecuteUbergraph_FortnitePartyBackdrop_Camera, CallFunc_Array_Get_Item_1) == 0x000080, "Member 'FortnitePartyBackdrop_Camera_C_ExecuteUbergraph_FortnitePartyBackdrop_Camera::CallFunc_Array_Get_Item_1' has a wrong offset!");
static_assert(offsetof(FortnitePartyBackdrop_Camera_C_ExecuteUbergraph_FortnitePartyBackdrop_Camera, CallFunc_Array_Length_ReturnValue_1) == 0x000088, "Member 'FortnitePartyBackdrop_Camera_C_ExecuteUbergraph_FortnitePartyBackdrop_Camera::CallFunc_Array_Length_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(FortnitePartyBackdrop_Camera_C_ExecuteUbergraph_FortnitePartyBackdrop_Camera, CallFunc_Less_IntInt_ReturnValue_1) == 0x00008C, "Member 'FortnitePartyBackdrop_Camera_C_ExecuteUbergraph_FortnitePartyBackdrop_Camera::CallFunc_Less_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(FortnitePartyBackdrop_Camera_C_ExecuteUbergraph_FortnitePartyBackdrop_Camera, CallFunc_Array_Length_ReturnValue_2) == 0x000090, "Member 'FortnitePartyBackdrop_Camera_C_ExecuteUbergraph_FortnitePartyBackdrop_Camera::CallFunc_Array_Length_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(FortnitePartyBackdrop_Camera_C_ExecuteUbergraph_FortnitePartyBackdrop_Camera, CallFunc_Greater_IntInt_ReturnValue) == 0x000094, "Member 'FortnitePartyBackdrop_Camera_C_ExecuteUbergraph_FortnitePartyBackdrop_Camera::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(FortnitePartyBackdrop_Camera_C_ExecuteUbergraph_FortnitePartyBackdrop_Camera, CallFunc_GetAllActorsOfClass_OutActors_2) == 0x000098, "Member 'FortnitePartyBackdrop_Camera_C_ExecuteUbergraph_FortnitePartyBackdrop_Camera::CallFunc_GetAllActorsOfClass_OutActors_2' has a wrong offset!");
static_assert(offsetof(FortnitePartyBackdrop_Camera_C_ExecuteUbergraph_FortnitePartyBackdrop_Camera, CallFunc_Array_Get_Item_2) == 0x0000A8, "Member 'FortnitePartyBackdrop_Camera_C_ExecuteUbergraph_FortnitePartyBackdrop_Camera::CallFunc_Array_Get_Item_2' has a wrong offset!");
static_assert(offsetof(FortnitePartyBackdrop_Camera_C_ExecuteUbergraph_FortnitePartyBackdrop_Camera, CallFunc_Array_Length_ReturnValue_3) == 0x0000B0, "Member 'FortnitePartyBackdrop_Camera_C_ExecuteUbergraph_FortnitePartyBackdrop_Camera::CallFunc_Array_Length_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(FortnitePartyBackdrop_Camera_C_ExecuteUbergraph_FortnitePartyBackdrop_Camera, CallFunc_Less_IntInt_ReturnValue_2) == 0x0000B4, "Member 'FortnitePartyBackdrop_Camera_C_ExecuteUbergraph_FortnitePartyBackdrop_Camera::CallFunc_Less_IntInt_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(FortnitePartyBackdrop_Camera_C_ExecuteUbergraph_FortnitePartyBackdrop_Camera, CallFunc_Array_Length_ReturnValue_4) == 0x0000B8, "Member 'FortnitePartyBackdrop_Camera_C_ExecuteUbergraph_FortnitePartyBackdrop_Camera::CallFunc_Array_Length_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(FortnitePartyBackdrop_Camera_C_ExecuteUbergraph_FortnitePartyBackdrop_Camera, CallFunc_Greater_IntInt_ReturnValue_1) == 0x0000BC, "Member 'FortnitePartyBackdrop_Camera_C_ExecuteUbergraph_FortnitePartyBackdrop_Camera::CallFunc_Greater_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(FortnitePartyBackdrop_Camera_C_ExecuteUbergraph_FortnitePartyBackdrop_Camera, CallFunc_K2_SetActorTransform_SweepHitResult) == 0x0000C0, "Member 'FortnitePartyBackdrop_Camera_C_ExecuteUbergraph_FortnitePartyBackdrop_Camera::CallFunc_K2_SetActorTransform_SweepHitResult' has a wrong offset!");
static_assert(offsetof(FortnitePartyBackdrop_Camera_C_ExecuteUbergraph_FortnitePartyBackdrop_Camera, CallFunc_K2_SetActorTransform_ReturnValue) == 0x0001A0, "Member 'FortnitePartyBackdrop_Camera_C_ExecuteUbergraph_FortnitePartyBackdrop_Camera::CallFunc_K2_SetActorTransform_ReturnValue' has a wrong offset!");

}
