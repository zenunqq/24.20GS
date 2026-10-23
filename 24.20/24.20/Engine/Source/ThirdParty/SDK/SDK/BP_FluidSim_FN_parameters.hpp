#pragma once

#include "Basic.hpp"

#include "FluidForceDynamic_structs.hpp"
#include "GameplayTags_structs.hpp"
#include "FluidForceDynamicPerInstanceData_structs.hpp"
#include "FortniteGame_structs.hpp"
#include "CoreUObject_structs.hpp"

namespace SDK::Params
{

struct BP_FluidSim_FN_C_ExecuteUbergraph_BP_FluidSim_FN final
{
public:
	int32                                         EntryPoint;
};
static_assert(alignof(BP_FluidSim_FN_C_ExecuteUbergraph_BP_FluidSim_FN) == 0x000004, "Wrong alignment on BP_FluidSim_FN_C_ExecuteUbergraph_BP_FluidSim_FN");
static_assert(sizeof(BP_FluidSim_FN_C_ExecuteUbergraph_BP_FluidSim_FN) == 0x000004, "Wrong size on BP_FluidSim_FN_C_ExecuteUbergraph_BP_FluidSim_FN");
static_assert(offsetof(BP_FluidSim_FN_C_ExecuteUbergraph_BP_FluidSim_FN, EntryPoint) == 0x000000, "Member 'BP_FluidSim_FN_C_ExecuteUbergraph_BP_FluidSim_FN::EntryPoint' has a wrong offset!");

struct BP_FluidSim_FN_C_GetFortnitePawnForces final
{
public:
	TMap<class UActorComponent*, struct FFluidForceDynamicPerInstanceData> PreviousDynamicForces;
	TArray<class AFortPawn*>                      RelevantPawns;
	int32                                         LastCheckedIndex;
	uint8                                         Pad_64[0x4];
	TArray<class AFortPawn*>                      NearbyPawns;
	bool                                          Temp_bool_True_if_break_was_hit_Variable;
	uint8                                         Pad_79[0x7];
	TArray<struct FGameplayTag>                   CallFunc_Map_Keys_Keys;
	int32                                         CallFunc_Array_Length_ReturnValue;
	bool                                          CallFunc_Not_PreBool_ReturnValue;
	uint8                                         Pad_95[0x3];
	int32                                         CallFunc_GetShallowWaterMaxDynamicForces_ReturnValue;
	int32                                         Temp_int_Array_Index_Variable;
	int32                                         Temp_int_Array_Index_Variable_1;
	struct FGameplayTag                           CallFunc_Array_Get_Item;
	struct FFluidForceDynamic                     CallFunc_Map_Find_Value;
	bool                                          CallFunc_Map_Find_ReturnValue;
	uint8                                         Pad_119[0x3];
	int32                                         Temp_int_Loop_Counter_Variable;
	int32                                         Temp_int_Array_Index_Variable_2;
	bool                                          CallFunc_Less_IntInt_ReturnValue;
	uint8                                         Pad_125[0x3];
	int32                                         CallFunc_Add_IntInt_ReturnValue;
	bool                                          CallFunc_BooleanAND_ReturnValue;
	uint8                                         Pad_12D[0x3];
	int32                                         Temp_int_Loop_Counter_Variable_1;
	uint8                                         Pad_134[0x4];
	class AFortPawn*                              CallFunc_Array_Get_Item_1;
	int32                                         CallFunc_Array_Length_ReturnValue_1;
	uint8                                         Pad_144[0x4];
	class AFortPlayerPawn*                        K2Node_DynamicCast_AsFort_Player_Pawn;
	bool                                          K2Node_DynamicCast_bSuccess;
	bool                                          CallFunc_Less_IntInt_ReturnValue_1;
	uint8                                         Pad_152[0x6];
	TScriptInterface<class IFortVehicleInterface> CallFunc_GetVehicleUInterface_ReturnValue;
	struct FGameplayTagContainer                  CallFunc_GetVehicleTags_ReturnValue;
	bool                                          CallFunc_IsInWater_ReturnValue;
	bool                                          CallFunc_HasTag_ReturnValue;
	bool                                          CallFunc_BooleanAND_ReturnValue_1;
	uint8                                         Pad_18B[0x5];
	class USkeletalMeshComponent*                 CallFunc_GetSkeletalMeshComponent_ReturnValue;
	struct FFluidForceDynamicPerInstanceData      CallFunc_Map_Find_Value_1;
	bool                                          CallFunc_Map_Find_ReturnValue_1;
	bool                                          CallFunc_IsInVehicle_ReturnValue;
	bool                                          CallFunc_IsValid_ReturnValue;
	uint8                                         Pad_2E3[0x5];
	struct FFluidForceDynamicPerInstanceData      CallFunc_Map_Find_Value_2;
	bool                                          CallFunc_Map_Find_ReturnValue_2;
	uint8                                         Pad_431[0x7];
	class AFortPlayerPawn*                        K2Node_DynamicCast_AsFort_Player_Pawn_1;
	bool                                          K2Node_DynamicCast_bSuccess_1;
	bool                                          CallFunc_IsValid_ReturnValue_1;
	uint8                                         Pad_442[0x6];
	class AFortCharacterVehicle*                  K2Node_DynamicCast_AsFort_Character_Vehicle;
	bool                                          K2Node_DynamicCast_bSuccess_2;
	uint8                                         Pad_451[0x7];
	class AFortWaterBodyActor*                    CallFunc_GetCurrentWaterBody_ReturnValue;
	struct FVector                                CallFunc_K2_GetComponentLocation_ReturnValue;
	bool                                          CallFunc_IsValid_ReturnValue_2;
	uint8                                         Pad_479[0x7];
	struct FWaterSurfaceInfo                      CallFunc_GetWaterSurfaceInfoStruct_OutWaterSurfaceInfo;
	int32                                         CallFunc_Add_IntInt_ReturnValue_1;
	uint8                                         Pad_4EC[0x4];
	double                                        CallFunc_BreakVector_X;
	double                                        CallFunc_BreakVector_Y;
	double                                        CallFunc_BreakVector_Z;
	struct FFluidForceDynamicPerInstanceData      K2Node_SetFieldsInStruct_StructOut;
	int32                                         Temp_int_Loop_Counter_Variable_2;
	int32                                         CallFunc_Add_IntInt_ReturnValue_2;
	class AFortPawn*                              CallFunc_Array_Get_Item_2;
	int32                                         CallFunc_Array_Length_ReturnValue_2;
	uint8                                         Pad_664[0x4];
	class AFortPlayerPawn*                        K2Node_DynamicCast_AsFort_Player_Pawn_2;
	bool                                          K2Node_DynamicCast_bSuccess_3;
	bool                                          CallFunc_Less_IntInt_ReturnValue_2;
	uint8                                         Pad_672[0x2];
	int32                                         CallFunc_Array_Add_ReturnValue;
	bool                                          CallFunc_IsDrivingVehicle_ReturnValue;
	uint8                                         Pad_679[0x3];
	int32                                         CallFunc_GetSignificanceLOD_ReturnValue;
	class APawn*                                  CallFunc_GetLocalPawn_Pawn;
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue;
	bool                                          CallFunc_IsValid_ReturnValue_3;
	bool                                          CallFunc_BooleanOR_ReturnValue;
	uint8                                         Pad_68B[0x5];
	class AFortPlayerPawn*                        K2Node_DynamicCast_AsFort_Player_Pawn_3;
	bool                                          K2Node_DynamicCast_bSuccess_4;
	uint8                                         Pad_699[0x3];
	int32                                         CallFunc_Array_AddUnique_ReturnValue;
	int32                                         CallFunc_Array_Length_ReturnValue_3;
	bool                                          CallFunc_Less_IntInt_ReturnValue_3;
	uint8                                         Pad_6A5[0x3];
	int32                                         CallFunc_Percent_IntInt_ReturnValue;
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue_1;
	uint8                                         Pad_6AD[0x3];
	double                                        CallFunc_Multiply_DoubleDouble_ReturnValue;
	TArray<class AFortPawn*>                      CallFunc_GetFortPawnsInRange_OutFortPawns;
	float                                         K2Node_SetFieldsInStruct_WaterLevel_34_A4E505D148073B883CA7B1B09A3E34A8_ImplicitCast;
	float                                         CallFunc_GetFortPawnsInRange_Range_ImplicitCast;
};
static_assert(alignof(BP_FluidSim_FN_C_GetFortnitePawnForces) == 0x000008, "Wrong alignment on BP_FluidSim_FN_C_GetFortnitePawnForces");
static_assert(sizeof(BP_FluidSim_FN_C_GetFortnitePawnForces) == 0x0006D0, "Wrong size on BP_FluidSim_FN_C_GetFortnitePawnForces");
static_assert(offsetof(BP_FluidSim_FN_C_GetFortnitePawnForces, PreviousDynamicForces) == 0x000000, "Member 'BP_FluidSim_FN_C_GetFortnitePawnForces::PreviousDynamicForces' has a wrong offset!");
static_assert(offsetof(BP_FluidSim_FN_C_GetFortnitePawnForces, RelevantPawns) == 0x000050, "Member 'BP_FluidSim_FN_C_GetFortnitePawnForces::RelevantPawns' has a wrong offset!");
static_assert(offsetof(BP_FluidSim_FN_C_GetFortnitePawnForces, LastCheckedIndex) == 0x000060, "Member 'BP_FluidSim_FN_C_GetFortnitePawnForces::LastCheckedIndex' has a wrong offset!");
static_assert(offsetof(BP_FluidSim_FN_C_GetFortnitePawnForces, NearbyPawns) == 0x000068, "Member 'BP_FluidSim_FN_C_GetFortnitePawnForces::NearbyPawns' has a wrong offset!");
static_assert(offsetof(BP_FluidSim_FN_C_GetFortnitePawnForces, Temp_bool_True_if_break_was_hit_Variable) == 0x000078, "Member 'BP_FluidSim_FN_C_GetFortnitePawnForces::Temp_bool_True_if_break_was_hit_Variable' has a wrong offset!");
static_assert(offsetof(BP_FluidSim_FN_C_GetFortnitePawnForces, CallFunc_Map_Keys_Keys) == 0x000080, "Member 'BP_FluidSim_FN_C_GetFortnitePawnForces::CallFunc_Map_Keys_Keys' has a wrong offset!");
static_assert(offsetof(BP_FluidSim_FN_C_GetFortnitePawnForces, CallFunc_Array_Length_ReturnValue) == 0x000090, "Member 'BP_FluidSim_FN_C_GetFortnitePawnForces::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_FluidSim_FN_C_GetFortnitePawnForces, CallFunc_Not_PreBool_ReturnValue) == 0x000094, "Member 'BP_FluidSim_FN_C_GetFortnitePawnForces::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_FluidSim_FN_C_GetFortnitePawnForces, CallFunc_GetShallowWaterMaxDynamicForces_ReturnValue) == 0x000098, "Member 'BP_FluidSim_FN_C_GetFortnitePawnForces::CallFunc_GetShallowWaterMaxDynamicForces_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_FluidSim_FN_C_GetFortnitePawnForces, Temp_int_Array_Index_Variable) == 0x00009C, "Member 'BP_FluidSim_FN_C_GetFortnitePawnForces::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(BP_FluidSim_FN_C_GetFortnitePawnForces, Temp_int_Array_Index_Variable_1) == 0x0000A0, "Member 'BP_FluidSim_FN_C_GetFortnitePawnForces::Temp_int_Array_Index_Variable_1' has a wrong offset!");
static_assert(offsetof(BP_FluidSim_FN_C_GetFortnitePawnForces, CallFunc_Array_Get_Item) == 0x0000A4, "Member 'BP_FluidSim_FN_C_GetFortnitePawnForces::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(BP_FluidSim_FN_C_GetFortnitePawnForces, CallFunc_Map_Find_Value) == 0x0000A8, "Member 'BP_FluidSim_FN_C_GetFortnitePawnForces::CallFunc_Map_Find_Value' has a wrong offset!");
static_assert(offsetof(BP_FluidSim_FN_C_GetFortnitePawnForces, CallFunc_Map_Find_ReturnValue) == 0x000118, "Member 'BP_FluidSim_FN_C_GetFortnitePawnForces::CallFunc_Map_Find_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_FluidSim_FN_C_GetFortnitePawnForces, Temp_int_Loop_Counter_Variable) == 0x00011C, "Member 'BP_FluidSim_FN_C_GetFortnitePawnForces::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(BP_FluidSim_FN_C_GetFortnitePawnForces, Temp_int_Array_Index_Variable_2) == 0x000120, "Member 'BP_FluidSim_FN_C_GetFortnitePawnForces::Temp_int_Array_Index_Variable_2' has a wrong offset!");
static_assert(offsetof(BP_FluidSim_FN_C_GetFortnitePawnForces, CallFunc_Less_IntInt_ReturnValue) == 0x000124, "Member 'BP_FluidSim_FN_C_GetFortnitePawnForces::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_FluidSim_FN_C_GetFortnitePawnForces, CallFunc_Add_IntInt_ReturnValue) == 0x000128, "Member 'BP_FluidSim_FN_C_GetFortnitePawnForces::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_FluidSim_FN_C_GetFortnitePawnForces, CallFunc_BooleanAND_ReturnValue) == 0x00012C, "Member 'BP_FluidSim_FN_C_GetFortnitePawnForces::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_FluidSim_FN_C_GetFortnitePawnForces, Temp_int_Loop_Counter_Variable_1) == 0x000130, "Member 'BP_FluidSim_FN_C_GetFortnitePawnForces::Temp_int_Loop_Counter_Variable_1' has a wrong offset!");
static_assert(offsetof(BP_FluidSim_FN_C_GetFortnitePawnForces, CallFunc_Array_Get_Item_1) == 0x000138, "Member 'BP_FluidSim_FN_C_GetFortnitePawnForces::CallFunc_Array_Get_Item_1' has a wrong offset!");
static_assert(offsetof(BP_FluidSim_FN_C_GetFortnitePawnForces, CallFunc_Array_Length_ReturnValue_1) == 0x000140, "Member 'BP_FluidSim_FN_C_GetFortnitePawnForces::CallFunc_Array_Length_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_FluidSim_FN_C_GetFortnitePawnForces, K2Node_DynamicCast_AsFort_Player_Pawn) == 0x000148, "Member 'BP_FluidSim_FN_C_GetFortnitePawnForces::K2Node_DynamicCast_AsFort_Player_Pawn' has a wrong offset!");
static_assert(offsetof(BP_FluidSim_FN_C_GetFortnitePawnForces, K2Node_DynamicCast_bSuccess) == 0x000150, "Member 'BP_FluidSim_FN_C_GetFortnitePawnForces::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BP_FluidSim_FN_C_GetFortnitePawnForces, CallFunc_Less_IntInt_ReturnValue_1) == 0x000151, "Member 'BP_FluidSim_FN_C_GetFortnitePawnForces::CallFunc_Less_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_FluidSim_FN_C_GetFortnitePawnForces, CallFunc_GetVehicleUInterface_ReturnValue) == 0x000158, "Member 'BP_FluidSim_FN_C_GetFortnitePawnForces::CallFunc_GetVehicleUInterface_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_FluidSim_FN_C_GetFortnitePawnForces, CallFunc_GetVehicleTags_ReturnValue) == 0x000168, "Member 'BP_FluidSim_FN_C_GetFortnitePawnForces::CallFunc_GetVehicleTags_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_FluidSim_FN_C_GetFortnitePawnForces, CallFunc_IsInWater_ReturnValue) == 0x000188, "Member 'BP_FluidSim_FN_C_GetFortnitePawnForces::CallFunc_IsInWater_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_FluidSim_FN_C_GetFortnitePawnForces, CallFunc_HasTag_ReturnValue) == 0x000189, "Member 'BP_FluidSim_FN_C_GetFortnitePawnForces::CallFunc_HasTag_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_FluidSim_FN_C_GetFortnitePawnForces, CallFunc_BooleanAND_ReturnValue_1) == 0x00018A, "Member 'BP_FluidSim_FN_C_GetFortnitePawnForces::CallFunc_BooleanAND_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_FluidSim_FN_C_GetFortnitePawnForces, CallFunc_GetSkeletalMeshComponent_ReturnValue) == 0x000190, "Member 'BP_FluidSim_FN_C_GetFortnitePawnForces::CallFunc_GetSkeletalMeshComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_FluidSim_FN_C_GetFortnitePawnForces, CallFunc_Map_Find_Value_1) == 0x000198, "Member 'BP_FluidSim_FN_C_GetFortnitePawnForces::CallFunc_Map_Find_Value_1' has a wrong offset!");
static_assert(offsetof(BP_FluidSim_FN_C_GetFortnitePawnForces, CallFunc_Map_Find_ReturnValue_1) == 0x0002E0, "Member 'BP_FluidSim_FN_C_GetFortnitePawnForces::CallFunc_Map_Find_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_FluidSim_FN_C_GetFortnitePawnForces, CallFunc_IsInVehicle_ReturnValue) == 0x0002E1, "Member 'BP_FluidSim_FN_C_GetFortnitePawnForces::CallFunc_IsInVehicle_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_FluidSim_FN_C_GetFortnitePawnForces, CallFunc_IsValid_ReturnValue) == 0x0002E2, "Member 'BP_FluidSim_FN_C_GetFortnitePawnForces::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_FluidSim_FN_C_GetFortnitePawnForces, CallFunc_Map_Find_Value_2) == 0x0002E8, "Member 'BP_FluidSim_FN_C_GetFortnitePawnForces::CallFunc_Map_Find_Value_2' has a wrong offset!");
static_assert(offsetof(BP_FluidSim_FN_C_GetFortnitePawnForces, CallFunc_Map_Find_ReturnValue_2) == 0x000430, "Member 'BP_FluidSim_FN_C_GetFortnitePawnForces::CallFunc_Map_Find_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_FluidSim_FN_C_GetFortnitePawnForces, K2Node_DynamicCast_AsFort_Player_Pawn_1) == 0x000438, "Member 'BP_FluidSim_FN_C_GetFortnitePawnForces::K2Node_DynamicCast_AsFort_Player_Pawn_1' has a wrong offset!");
static_assert(offsetof(BP_FluidSim_FN_C_GetFortnitePawnForces, K2Node_DynamicCast_bSuccess_1) == 0x000440, "Member 'BP_FluidSim_FN_C_GetFortnitePawnForces::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(BP_FluidSim_FN_C_GetFortnitePawnForces, CallFunc_IsValid_ReturnValue_1) == 0x000441, "Member 'BP_FluidSim_FN_C_GetFortnitePawnForces::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_FluidSim_FN_C_GetFortnitePawnForces, K2Node_DynamicCast_AsFort_Character_Vehicle) == 0x000448, "Member 'BP_FluidSim_FN_C_GetFortnitePawnForces::K2Node_DynamicCast_AsFort_Character_Vehicle' has a wrong offset!");
static_assert(offsetof(BP_FluidSim_FN_C_GetFortnitePawnForces, K2Node_DynamicCast_bSuccess_2) == 0x000450, "Member 'BP_FluidSim_FN_C_GetFortnitePawnForces::K2Node_DynamicCast_bSuccess_2' has a wrong offset!");
static_assert(offsetof(BP_FluidSim_FN_C_GetFortnitePawnForces, CallFunc_GetCurrentWaterBody_ReturnValue) == 0x000458, "Member 'BP_FluidSim_FN_C_GetFortnitePawnForces::CallFunc_GetCurrentWaterBody_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_FluidSim_FN_C_GetFortnitePawnForces, CallFunc_K2_GetComponentLocation_ReturnValue) == 0x000460, "Member 'BP_FluidSim_FN_C_GetFortnitePawnForces::CallFunc_K2_GetComponentLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_FluidSim_FN_C_GetFortnitePawnForces, CallFunc_IsValid_ReturnValue_2) == 0x000478, "Member 'BP_FluidSim_FN_C_GetFortnitePawnForces::CallFunc_IsValid_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_FluidSim_FN_C_GetFortnitePawnForces, CallFunc_GetWaterSurfaceInfoStruct_OutWaterSurfaceInfo) == 0x000480, "Member 'BP_FluidSim_FN_C_GetFortnitePawnForces::CallFunc_GetWaterSurfaceInfoStruct_OutWaterSurfaceInfo' has a wrong offset!");
static_assert(offsetof(BP_FluidSim_FN_C_GetFortnitePawnForces, CallFunc_Add_IntInt_ReturnValue_1) == 0x0004E8, "Member 'BP_FluidSim_FN_C_GetFortnitePawnForces::CallFunc_Add_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_FluidSim_FN_C_GetFortnitePawnForces, CallFunc_BreakVector_X) == 0x0004F0, "Member 'BP_FluidSim_FN_C_GetFortnitePawnForces::CallFunc_BreakVector_X' has a wrong offset!");
static_assert(offsetof(BP_FluidSim_FN_C_GetFortnitePawnForces, CallFunc_BreakVector_Y) == 0x0004F8, "Member 'BP_FluidSim_FN_C_GetFortnitePawnForces::CallFunc_BreakVector_Y' has a wrong offset!");
static_assert(offsetof(BP_FluidSim_FN_C_GetFortnitePawnForces, CallFunc_BreakVector_Z) == 0x000500, "Member 'BP_FluidSim_FN_C_GetFortnitePawnForces::CallFunc_BreakVector_Z' has a wrong offset!");
static_assert(offsetof(BP_FluidSim_FN_C_GetFortnitePawnForces, K2Node_SetFieldsInStruct_StructOut) == 0x000508, "Member 'BP_FluidSim_FN_C_GetFortnitePawnForces::K2Node_SetFieldsInStruct_StructOut' has a wrong offset!");
static_assert(offsetof(BP_FluidSim_FN_C_GetFortnitePawnForces, Temp_int_Loop_Counter_Variable_2) == 0x000650, "Member 'BP_FluidSim_FN_C_GetFortnitePawnForces::Temp_int_Loop_Counter_Variable_2' has a wrong offset!");
static_assert(offsetof(BP_FluidSim_FN_C_GetFortnitePawnForces, CallFunc_Add_IntInt_ReturnValue_2) == 0x000654, "Member 'BP_FluidSim_FN_C_GetFortnitePawnForces::CallFunc_Add_IntInt_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_FluidSim_FN_C_GetFortnitePawnForces, CallFunc_Array_Get_Item_2) == 0x000658, "Member 'BP_FluidSim_FN_C_GetFortnitePawnForces::CallFunc_Array_Get_Item_2' has a wrong offset!");
static_assert(offsetof(BP_FluidSim_FN_C_GetFortnitePawnForces, CallFunc_Array_Length_ReturnValue_2) == 0x000660, "Member 'BP_FluidSim_FN_C_GetFortnitePawnForces::CallFunc_Array_Length_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_FluidSim_FN_C_GetFortnitePawnForces, K2Node_DynamicCast_AsFort_Player_Pawn_2) == 0x000668, "Member 'BP_FluidSim_FN_C_GetFortnitePawnForces::K2Node_DynamicCast_AsFort_Player_Pawn_2' has a wrong offset!");
static_assert(offsetof(BP_FluidSim_FN_C_GetFortnitePawnForces, K2Node_DynamicCast_bSuccess_3) == 0x000670, "Member 'BP_FluidSim_FN_C_GetFortnitePawnForces::K2Node_DynamicCast_bSuccess_3' has a wrong offset!");
static_assert(offsetof(BP_FluidSim_FN_C_GetFortnitePawnForces, CallFunc_Less_IntInt_ReturnValue_2) == 0x000671, "Member 'BP_FluidSim_FN_C_GetFortnitePawnForces::CallFunc_Less_IntInt_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_FluidSim_FN_C_GetFortnitePawnForces, CallFunc_Array_Add_ReturnValue) == 0x000674, "Member 'BP_FluidSim_FN_C_GetFortnitePawnForces::CallFunc_Array_Add_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_FluidSim_FN_C_GetFortnitePawnForces, CallFunc_IsDrivingVehicle_ReturnValue) == 0x000678, "Member 'BP_FluidSim_FN_C_GetFortnitePawnForces::CallFunc_IsDrivingVehicle_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_FluidSim_FN_C_GetFortnitePawnForces, CallFunc_GetSignificanceLOD_ReturnValue) == 0x00067C, "Member 'BP_FluidSim_FN_C_GetFortnitePawnForces::CallFunc_GetSignificanceLOD_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_FluidSim_FN_C_GetFortnitePawnForces, CallFunc_GetLocalPawn_Pawn) == 0x000680, "Member 'BP_FluidSim_FN_C_GetFortnitePawnForces::CallFunc_GetLocalPawn_Pawn' has a wrong offset!");
static_assert(offsetof(BP_FluidSim_FN_C_GetFortnitePawnForces, CallFunc_EqualEqual_IntInt_ReturnValue) == 0x000688, "Member 'BP_FluidSim_FN_C_GetFortnitePawnForces::CallFunc_EqualEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_FluidSim_FN_C_GetFortnitePawnForces, CallFunc_IsValid_ReturnValue_3) == 0x000689, "Member 'BP_FluidSim_FN_C_GetFortnitePawnForces::CallFunc_IsValid_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(BP_FluidSim_FN_C_GetFortnitePawnForces, CallFunc_BooleanOR_ReturnValue) == 0x00068A, "Member 'BP_FluidSim_FN_C_GetFortnitePawnForces::CallFunc_BooleanOR_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_FluidSim_FN_C_GetFortnitePawnForces, K2Node_DynamicCast_AsFort_Player_Pawn_3) == 0x000690, "Member 'BP_FluidSim_FN_C_GetFortnitePawnForces::K2Node_DynamicCast_AsFort_Player_Pawn_3' has a wrong offset!");
static_assert(offsetof(BP_FluidSim_FN_C_GetFortnitePawnForces, K2Node_DynamicCast_bSuccess_4) == 0x000698, "Member 'BP_FluidSim_FN_C_GetFortnitePawnForces::K2Node_DynamicCast_bSuccess_4' has a wrong offset!");
static_assert(offsetof(BP_FluidSim_FN_C_GetFortnitePawnForces, CallFunc_Array_AddUnique_ReturnValue) == 0x00069C, "Member 'BP_FluidSim_FN_C_GetFortnitePawnForces::CallFunc_Array_AddUnique_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_FluidSim_FN_C_GetFortnitePawnForces, CallFunc_Array_Length_ReturnValue_3) == 0x0006A0, "Member 'BP_FluidSim_FN_C_GetFortnitePawnForces::CallFunc_Array_Length_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(BP_FluidSim_FN_C_GetFortnitePawnForces, CallFunc_Less_IntInt_ReturnValue_3) == 0x0006A4, "Member 'BP_FluidSim_FN_C_GetFortnitePawnForces::CallFunc_Less_IntInt_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(BP_FluidSim_FN_C_GetFortnitePawnForces, CallFunc_Percent_IntInt_ReturnValue) == 0x0006A8, "Member 'BP_FluidSim_FN_C_GetFortnitePawnForces::CallFunc_Percent_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_FluidSim_FN_C_GetFortnitePawnForces, CallFunc_EqualEqual_IntInt_ReturnValue_1) == 0x0006AC, "Member 'BP_FluidSim_FN_C_GetFortnitePawnForces::CallFunc_EqualEqual_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_FluidSim_FN_C_GetFortnitePawnForces, CallFunc_Multiply_DoubleDouble_ReturnValue) == 0x0006B0, "Member 'BP_FluidSim_FN_C_GetFortnitePawnForces::CallFunc_Multiply_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_FluidSim_FN_C_GetFortnitePawnForces, CallFunc_GetFortPawnsInRange_OutFortPawns) == 0x0006B8, "Member 'BP_FluidSim_FN_C_GetFortnitePawnForces::CallFunc_GetFortPawnsInRange_OutFortPawns' has a wrong offset!");
static_assert(offsetof(BP_FluidSim_FN_C_GetFortnitePawnForces, K2Node_SetFieldsInStruct_WaterLevel_34_A4E505D148073B883CA7B1B09A3E34A8_ImplicitCast) == 0x0006C8, "Member 'BP_FluidSim_FN_C_GetFortnitePawnForces::K2Node_SetFieldsInStruct_WaterLevel_34_A4E505D148073B883CA7B1B09A3E34A8_ImplicitCast' has a wrong offset!");
static_assert(offsetof(BP_FluidSim_FN_C_GetFortnitePawnForces, CallFunc_GetFortPawnsInRange_Range_ImplicitCast) == 0x0006CC, "Member 'BP_FluidSim_FN_C_GetFortnitePawnForces::CallFunc_GetFortPawnsInRange_Range_ImplicitCast' has a wrong offset!");

struct BP_FluidSim_FN_C_GetLocalPawn final
{
public:
	class APawn*                                  Pawn;
	class AFortPlayerController*                  CallFunc_GetFirstLocalFortPlayerController_ReturnValue;
	bool                                          CallFunc_IsValid_ReturnValue;
	uint8                                         Pad_11[0x7];
	class APawn*                                  CallFunc_K2_GetPawn_ReturnValue;
};
static_assert(alignof(BP_FluidSim_FN_C_GetLocalPawn) == 0x000008, "Wrong alignment on BP_FluidSim_FN_C_GetLocalPawn");
static_assert(sizeof(BP_FluidSim_FN_C_GetLocalPawn) == 0x000020, "Wrong size on BP_FluidSim_FN_C_GetLocalPawn");
static_assert(offsetof(BP_FluidSim_FN_C_GetLocalPawn, Pawn) == 0x000000, "Member 'BP_FluidSim_FN_C_GetLocalPawn::Pawn' has a wrong offset!");
static_assert(offsetof(BP_FluidSim_FN_C_GetLocalPawn, CallFunc_GetFirstLocalFortPlayerController_ReturnValue) == 0x000008, "Member 'BP_FluidSim_FN_C_GetLocalPawn::CallFunc_GetFirstLocalFortPlayerController_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_FluidSim_FN_C_GetLocalPawn, CallFunc_IsValid_ReturnValue) == 0x000010, "Member 'BP_FluidSim_FN_C_GetLocalPawn::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_FluidSim_FN_C_GetLocalPawn, CallFunc_K2_GetPawn_ReturnValue) == 0x000018, "Member 'BP_FluidSim_FN_C_GetLocalPawn::CallFunc_K2_GetPawn_ReturnValue' has a wrong offset!");

}
