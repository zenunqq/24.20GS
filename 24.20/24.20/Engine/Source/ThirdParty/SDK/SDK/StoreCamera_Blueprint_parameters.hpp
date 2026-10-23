#pragma once

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "Engine_structs.hpp"

namespace SDK::Params
{

struct StoreCamera_Blueprint_C_UserConstructionScript final
{
public:
	struct FRotator                               CallFunc_K2_GetComponentRotation_ReturnValue;
	struct FRotator                               CallFunc_K2_GetComponentRotation_ReturnValue_1;
	struct FVector                                CallFunc_K2_GetComponentLocation_ReturnValue;
	struct FVector                                CallFunc_K2_GetComponentLocation_ReturnValue_1;
};
static_assert(alignof(StoreCamera_Blueprint_C_UserConstructionScript) == 0x000008, "Wrong alignment on StoreCamera_Blueprint_C_UserConstructionScript");
static_assert(sizeof(StoreCamera_Blueprint_C_UserConstructionScript) == 0x000060, "Wrong size on StoreCamera_Blueprint_C_UserConstructionScript");
static_assert(offsetof(StoreCamera_Blueprint_C_UserConstructionScript, CallFunc_K2_GetComponentRotation_ReturnValue) == 0x000000, "Member 'StoreCamera_Blueprint_C_UserConstructionScript::CallFunc_K2_GetComponentRotation_ReturnValue' has a wrong offset!");
static_assert(offsetof(StoreCamera_Blueprint_C_UserConstructionScript, CallFunc_K2_GetComponentRotation_ReturnValue_1) == 0x000018, "Member 'StoreCamera_Blueprint_C_UserConstructionScript::CallFunc_K2_GetComponentRotation_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(StoreCamera_Blueprint_C_UserConstructionScript, CallFunc_K2_GetComponentLocation_ReturnValue) == 0x000030, "Member 'StoreCamera_Blueprint_C_UserConstructionScript::CallFunc_K2_GetComponentLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(StoreCamera_Blueprint_C_UserConstructionScript, CallFunc_K2_GetComponentLocation_ReturnValue_1) == 0x000048, "Member 'StoreCamera_Blueprint_C_UserConstructionScript::CallFunc_K2_GetComponentLocation_ReturnValue_1' has a wrong offset!");

struct StoreCamera_Blueprint_C_ExecuteUbergraph_StoreCamera_Blueprint final
{
public:
	int32                                         EntryPoint;
	uint8                                         Pad_4[0x4];
	TScriptInterface<class IFortTimeOfDayManagerInterface> CallFunc_GetContextualTimeOfDayManager_ReturnValue;
	double                                        CallFunc_Lerp_ReturnValue;
	int32                                         Temp_int_Loop_Counter_Variable;
	int32                                         CallFunc_Add_IntInt_ReturnValue;
	int32                                         Temp_int_Array_Index_Variable;
	uint8                                         Pad_2C[0x4];
	class AFortPlayerController*                  K2Node_Event_PlayerController_1;
	class AFortPlayerController*                  K2Node_Event_PlayerController;
	double                                        CallFunc_Lerp_ReturnValue_1;
	struct FRotator                               CallFunc_RLerp_ReturnValue;
	struct FVector                                CallFunc_VLerp_ReturnValue;
	struct FHitResult                             CallFunc_K2_SetActorLocationAndRotation_SweepHitResult;
	bool                                          CallFunc_K2_SetActorLocationAndRotation_ReturnValue;
	uint8                                         Pad_159[0x3];
	int32                                         Temp_int_Array_Index_Variable_1;
	bool                                          K2Node_CustomEvent_Enable;
	uint8                                         Pad_161[0x7];
	TArray<class AStorePinataMaster_Parent_C*>    CallFunc_GetAllActorsOfClass_OutActors;
	class AStorePinataMaster_Parent_C*            CallFunc_Array_Get_Item;
	int32                                         CallFunc_Array_Length_ReturnValue;
	uint8                                         Pad_184[0x4];
	TArray<class AStoreCardReveal_Parent_C*>      CallFunc_GetAllActorsOfClass_OutActors_1;
	class AStoreCardReveal_Parent_C*              CallFunc_Array_Get_Item_1;
	int32                                         CallFunc_Array_Length_ReturnValue_1;
	bool                                          CallFunc_Less_IntInt_ReturnValue;
	bool                                          CallFunc_IsValid_ReturnValue;
	bool                                          CallFunc_IsValid_ReturnValue_1;
	uint8                                         Pad_1A7[0x1];
	TArray<class ATVPostProcessBP_C*>             CallFunc_GetAllActorsOfClass_OutActors_2;
	int32                                         Temp_int_Loop_Counter_Variable_1;
	int32                                         CallFunc_Array_Length_ReturnValue_2;
	bool                                          CallFunc_Less_IntInt_ReturnValue_1;
	uint8                                         Pad_1C1[0x3];
	int32                                         CallFunc_Add_IntInt_ReturnValue_1;
	int32                                         Temp_int_Loop_Counter_Variable_2;
	bool                                          CallFunc_Less_IntInt_ReturnValue_2;
	uint8                                         Pad_1CD[0x3];
	int32                                         CallFunc_Add_IntInt_ReturnValue_2;
	int32                                         Temp_int_Array_Index_Variable_2;
	class ATVPostProcessBP_C*                     CallFunc_Array_Get_Item_2;
	bool                                          CallFunc_IsValid_ReturnValue_2;
	uint8                                         Pad_1E1[0x7];
	double                                        CallFunc_Lerp_Alpha_ImplicitCast;
	float                                         K2Node_VariableSet_FieldOfView_ImplicitCast;
	uint8                                         Pad_1F4[0x4];
	double                                        CallFunc_Lerp_Alpha_ImplicitCast_1;
	float                                         K2Node_VariableSet_FieldOfView_ImplicitCast_1;
};
static_assert(alignof(StoreCamera_Blueprint_C_ExecuteUbergraph_StoreCamera_Blueprint) == 0x000008, "Wrong alignment on StoreCamera_Blueprint_C_ExecuteUbergraph_StoreCamera_Blueprint");
static_assert(sizeof(StoreCamera_Blueprint_C_ExecuteUbergraph_StoreCamera_Blueprint) == 0x000208, "Wrong size on StoreCamera_Blueprint_C_ExecuteUbergraph_StoreCamera_Blueprint");
static_assert(offsetof(StoreCamera_Blueprint_C_ExecuteUbergraph_StoreCamera_Blueprint, EntryPoint) == 0x000000, "Member 'StoreCamera_Blueprint_C_ExecuteUbergraph_StoreCamera_Blueprint::EntryPoint' has a wrong offset!");
static_assert(offsetof(StoreCamera_Blueprint_C_ExecuteUbergraph_StoreCamera_Blueprint, CallFunc_GetContextualTimeOfDayManager_ReturnValue) == 0x000008, "Member 'StoreCamera_Blueprint_C_ExecuteUbergraph_StoreCamera_Blueprint::CallFunc_GetContextualTimeOfDayManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(StoreCamera_Blueprint_C_ExecuteUbergraph_StoreCamera_Blueprint, CallFunc_Lerp_ReturnValue) == 0x000018, "Member 'StoreCamera_Blueprint_C_ExecuteUbergraph_StoreCamera_Blueprint::CallFunc_Lerp_ReturnValue' has a wrong offset!");
static_assert(offsetof(StoreCamera_Blueprint_C_ExecuteUbergraph_StoreCamera_Blueprint, Temp_int_Loop_Counter_Variable) == 0x000020, "Member 'StoreCamera_Blueprint_C_ExecuteUbergraph_StoreCamera_Blueprint::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(StoreCamera_Blueprint_C_ExecuteUbergraph_StoreCamera_Blueprint, CallFunc_Add_IntInt_ReturnValue) == 0x000024, "Member 'StoreCamera_Blueprint_C_ExecuteUbergraph_StoreCamera_Blueprint::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(StoreCamera_Blueprint_C_ExecuteUbergraph_StoreCamera_Blueprint, Temp_int_Array_Index_Variable) == 0x000028, "Member 'StoreCamera_Blueprint_C_ExecuteUbergraph_StoreCamera_Blueprint::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(StoreCamera_Blueprint_C_ExecuteUbergraph_StoreCamera_Blueprint, K2Node_Event_PlayerController_1) == 0x000030, "Member 'StoreCamera_Blueprint_C_ExecuteUbergraph_StoreCamera_Blueprint::K2Node_Event_PlayerController_1' has a wrong offset!");
static_assert(offsetof(StoreCamera_Blueprint_C_ExecuteUbergraph_StoreCamera_Blueprint, K2Node_Event_PlayerController) == 0x000038, "Member 'StoreCamera_Blueprint_C_ExecuteUbergraph_StoreCamera_Blueprint::K2Node_Event_PlayerController' has a wrong offset!");
static_assert(offsetof(StoreCamera_Blueprint_C_ExecuteUbergraph_StoreCamera_Blueprint, CallFunc_Lerp_ReturnValue_1) == 0x000040, "Member 'StoreCamera_Blueprint_C_ExecuteUbergraph_StoreCamera_Blueprint::CallFunc_Lerp_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(StoreCamera_Blueprint_C_ExecuteUbergraph_StoreCamera_Blueprint, CallFunc_RLerp_ReturnValue) == 0x000048, "Member 'StoreCamera_Blueprint_C_ExecuteUbergraph_StoreCamera_Blueprint::CallFunc_RLerp_ReturnValue' has a wrong offset!");
static_assert(offsetof(StoreCamera_Blueprint_C_ExecuteUbergraph_StoreCamera_Blueprint, CallFunc_VLerp_ReturnValue) == 0x000060, "Member 'StoreCamera_Blueprint_C_ExecuteUbergraph_StoreCamera_Blueprint::CallFunc_VLerp_ReturnValue' has a wrong offset!");
static_assert(offsetof(StoreCamera_Blueprint_C_ExecuteUbergraph_StoreCamera_Blueprint, CallFunc_K2_SetActorLocationAndRotation_SweepHitResult) == 0x000078, "Member 'StoreCamera_Blueprint_C_ExecuteUbergraph_StoreCamera_Blueprint::CallFunc_K2_SetActorLocationAndRotation_SweepHitResult' has a wrong offset!");
static_assert(offsetof(StoreCamera_Blueprint_C_ExecuteUbergraph_StoreCamera_Blueprint, CallFunc_K2_SetActorLocationAndRotation_ReturnValue) == 0x000158, "Member 'StoreCamera_Blueprint_C_ExecuteUbergraph_StoreCamera_Blueprint::CallFunc_K2_SetActorLocationAndRotation_ReturnValue' has a wrong offset!");
static_assert(offsetof(StoreCamera_Blueprint_C_ExecuteUbergraph_StoreCamera_Blueprint, Temp_int_Array_Index_Variable_1) == 0x00015C, "Member 'StoreCamera_Blueprint_C_ExecuteUbergraph_StoreCamera_Blueprint::Temp_int_Array_Index_Variable_1' has a wrong offset!");
static_assert(offsetof(StoreCamera_Blueprint_C_ExecuteUbergraph_StoreCamera_Blueprint, K2Node_CustomEvent_Enable) == 0x000160, "Member 'StoreCamera_Blueprint_C_ExecuteUbergraph_StoreCamera_Blueprint::K2Node_CustomEvent_Enable' has a wrong offset!");
static_assert(offsetof(StoreCamera_Blueprint_C_ExecuteUbergraph_StoreCamera_Blueprint, CallFunc_GetAllActorsOfClass_OutActors) == 0x000168, "Member 'StoreCamera_Blueprint_C_ExecuteUbergraph_StoreCamera_Blueprint::CallFunc_GetAllActorsOfClass_OutActors' has a wrong offset!");
static_assert(offsetof(StoreCamera_Blueprint_C_ExecuteUbergraph_StoreCamera_Blueprint, CallFunc_Array_Get_Item) == 0x000178, "Member 'StoreCamera_Blueprint_C_ExecuteUbergraph_StoreCamera_Blueprint::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(StoreCamera_Blueprint_C_ExecuteUbergraph_StoreCamera_Blueprint, CallFunc_Array_Length_ReturnValue) == 0x000180, "Member 'StoreCamera_Blueprint_C_ExecuteUbergraph_StoreCamera_Blueprint::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(StoreCamera_Blueprint_C_ExecuteUbergraph_StoreCamera_Blueprint, CallFunc_GetAllActorsOfClass_OutActors_1) == 0x000188, "Member 'StoreCamera_Blueprint_C_ExecuteUbergraph_StoreCamera_Blueprint::CallFunc_GetAllActorsOfClass_OutActors_1' has a wrong offset!");
static_assert(offsetof(StoreCamera_Blueprint_C_ExecuteUbergraph_StoreCamera_Blueprint, CallFunc_Array_Get_Item_1) == 0x000198, "Member 'StoreCamera_Blueprint_C_ExecuteUbergraph_StoreCamera_Blueprint::CallFunc_Array_Get_Item_1' has a wrong offset!");
static_assert(offsetof(StoreCamera_Blueprint_C_ExecuteUbergraph_StoreCamera_Blueprint, CallFunc_Array_Length_ReturnValue_1) == 0x0001A0, "Member 'StoreCamera_Blueprint_C_ExecuteUbergraph_StoreCamera_Blueprint::CallFunc_Array_Length_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(StoreCamera_Blueprint_C_ExecuteUbergraph_StoreCamera_Blueprint, CallFunc_Less_IntInt_ReturnValue) == 0x0001A4, "Member 'StoreCamera_Blueprint_C_ExecuteUbergraph_StoreCamera_Blueprint::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(StoreCamera_Blueprint_C_ExecuteUbergraph_StoreCamera_Blueprint, CallFunc_IsValid_ReturnValue) == 0x0001A5, "Member 'StoreCamera_Blueprint_C_ExecuteUbergraph_StoreCamera_Blueprint::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(StoreCamera_Blueprint_C_ExecuteUbergraph_StoreCamera_Blueprint, CallFunc_IsValid_ReturnValue_1) == 0x0001A6, "Member 'StoreCamera_Blueprint_C_ExecuteUbergraph_StoreCamera_Blueprint::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(StoreCamera_Blueprint_C_ExecuteUbergraph_StoreCamera_Blueprint, CallFunc_GetAllActorsOfClass_OutActors_2) == 0x0001A8, "Member 'StoreCamera_Blueprint_C_ExecuteUbergraph_StoreCamera_Blueprint::CallFunc_GetAllActorsOfClass_OutActors_2' has a wrong offset!");
static_assert(offsetof(StoreCamera_Blueprint_C_ExecuteUbergraph_StoreCamera_Blueprint, Temp_int_Loop_Counter_Variable_1) == 0x0001B8, "Member 'StoreCamera_Blueprint_C_ExecuteUbergraph_StoreCamera_Blueprint::Temp_int_Loop_Counter_Variable_1' has a wrong offset!");
static_assert(offsetof(StoreCamera_Blueprint_C_ExecuteUbergraph_StoreCamera_Blueprint, CallFunc_Array_Length_ReturnValue_2) == 0x0001BC, "Member 'StoreCamera_Blueprint_C_ExecuteUbergraph_StoreCamera_Blueprint::CallFunc_Array_Length_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(StoreCamera_Blueprint_C_ExecuteUbergraph_StoreCamera_Blueprint, CallFunc_Less_IntInt_ReturnValue_1) == 0x0001C0, "Member 'StoreCamera_Blueprint_C_ExecuteUbergraph_StoreCamera_Blueprint::CallFunc_Less_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(StoreCamera_Blueprint_C_ExecuteUbergraph_StoreCamera_Blueprint, CallFunc_Add_IntInt_ReturnValue_1) == 0x0001C4, "Member 'StoreCamera_Blueprint_C_ExecuteUbergraph_StoreCamera_Blueprint::CallFunc_Add_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(StoreCamera_Blueprint_C_ExecuteUbergraph_StoreCamera_Blueprint, Temp_int_Loop_Counter_Variable_2) == 0x0001C8, "Member 'StoreCamera_Blueprint_C_ExecuteUbergraph_StoreCamera_Blueprint::Temp_int_Loop_Counter_Variable_2' has a wrong offset!");
static_assert(offsetof(StoreCamera_Blueprint_C_ExecuteUbergraph_StoreCamera_Blueprint, CallFunc_Less_IntInt_ReturnValue_2) == 0x0001CC, "Member 'StoreCamera_Blueprint_C_ExecuteUbergraph_StoreCamera_Blueprint::CallFunc_Less_IntInt_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(StoreCamera_Blueprint_C_ExecuteUbergraph_StoreCamera_Blueprint, CallFunc_Add_IntInt_ReturnValue_2) == 0x0001D0, "Member 'StoreCamera_Blueprint_C_ExecuteUbergraph_StoreCamera_Blueprint::CallFunc_Add_IntInt_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(StoreCamera_Blueprint_C_ExecuteUbergraph_StoreCamera_Blueprint, Temp_int_Array_Index_Variable_2) == 0x0001D4, "Member 'StoreCamera_Blueprint_C_ExecuteUbergraph_StoreCamera_Blueprint::Temp_int_Array_Index_Variable_2' has a wrong offset!");
static_assert(offsetof(StoreCamera_Blueprint_C_ExecuteUbergraph_StoreCamera_Blueprint, CallFunc_Array_Get_Item_2) == 0x0001D8, "Member 'StoreCamera_Blueprint_C_ExecuteUbergraph_StoreCamera_Blueprint::CallFunc_Array_Get_Item_2' has a wrong offset!");
static_assert(offsetof(StoreCamera_Blueprint_C_ExecuteUbergraph_StoreCamera_Blueprint, CallFunc_IsValid_ReturnValue_2) == 0x0001E0, "Member 'StoreCamera_Blueprint_C_ExecuteUbergraph_StoreCamera_Blueprint::CallFunc_IsValid_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(StoreCamera_Blueprint_C_ExecuteUbergraph_StoreCamera_Blueprint, CallFunc_Lerp_Alpha_ImplicitCast) == 0x0001E8, "Member 'StoreCamera_Blueprint_C_ExecuteUbergraph_StoreCamera_Blueprint::CallFunc_Lerp_Alpha_ImplicitCast' has a wrong offset!");
static_assert(offsetof(StoreCamera_Blueprint_C_ExecuteUbergraph_StoreCamera_Blueprint, K2Node_VariableSet_FieldOfView_ImplicitCast) == 0x0001F0, "Member 'StoreCamera_Blueprint_C_ExecuteUbergraph_StoreCamera_Blueprint::K2Node_VariableSet_FieldOfView_ImplicitCast' has a wrong offset!");
static_assert(offsetof(StoreCamera_Blueprint_C_ExecuteUbergraph_StoreCamera_Blueprint, CallFunc_Lerp_Alpha_ImplicitCast_1) == 0x0001F8, "Member 'StoreCamera_Blueprint_C_ExecuteUbergraph_StoreCamera_Blueprint::CallFunc_Lerp_Alpha_ImplicitCast_1' has a wrong offset!");
static_assert(offsetof(StoreCamera_Blueprint_C_ExecuteUbergraph_StoreCamera_Blueprint, K2Node_VariableSet_FieldOfView_ImplicitCast_1) == 0x000200, "Member 'StoreCamera_Blueprint_C_ExecuteUbergraph_StoreCamera_Blueprint::K2Node_VariableSet_FieldOfView_ImplicitCast_1' has a wrong offset!");

struct StoreCamera_Blueprint_C_DarkenBGVisibility final
{
public:
	bool                                          Enable;
};
static_assert(alignof(StoreCamera_Blueprint_C_DarkenBGVisibility) == 0x000001, "Wrong alignment on StoreCamera_Blueprint_C_DarkenBGVisibility");
static_assert(sizeof(StoreCamera_Blueprint_C_DarkenBGVisibility) == 0x000001, "Wrong size on StoreCamera_Blueprint_C_DarkenBGVisibility");
static_assert(offsetof(StoreCamera_Blueprint_C_DarkenBGVisibility, Enable) == 0x000000, "Member 'StoreCamera_Blueprint_C_DarkenBGVisibility::Enable' has a wrong offset!");

struct StoreCamera_Blueprint_C_BP_OnDeactivated final
{
public:
	class AFortPlayerController*                  PlayerController;
};
static_assert(alignof(StoreCamera_Blueprint_C_BP_OnDeactivated) == 0x000008, "Wrong alignment on StoreCamera_Blueprint_C_BP_OnDeactivated");
static_assert(sizeof(StoreCamera_Blueprint_C_BP_OnDeactivated) == 0x000008, "Wrong size on StoreCamera_Blueprint_C_BP_OnDeactivated");
static_assert(offsetof(StoreCamera_Blueprint_C_BP_OnDeactivated, PlayerController) == 0x000000, "Member 'StoreCamera_Blueprint_C_BP_OnDeactivated::PlayerController' has a wrong offset!");

struct StoreCamera_Blueprint_C_BP_OnActivated final
{
public:
	class AFortPlayerController*                  PlayerController;
};
static_assert(alignof(StoreCamera_Blueprint_C_BP_OnActivated) == 0x000008, "Wrong alignment on StoreCamera_Blueprint_C_BP_OnActivated");
static_assert(sizeof(StoreCamera_Blueprint_C_BP_OnActivated) == 0x000008, "Wrong size on StoreCamera_Blueprint_C_BP_OnActivated");
static_assert(offsetof(StoreCamera_Blueprint_C_BP_OnActivated, PlayerController) == 0x000000, "Member 'StoreCamera_Blueprint_C_BP_OnActivated::PlayerController' has a wrong offset!");

}
