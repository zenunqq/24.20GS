#pragma once

#include "Basic.hpp"

#include "FortniteGame_structs.hpp"
#include "Engine_structs.hpp"
#include "GameplayTags_structs.hpp"
#include "SoundLibrary_structs.hpp"
#include "CoreUObject_structs.hpp"

namespace SDK::Params
{

struct B_Athena_PartModifier_Generic_C_ActuallyChangedWeaponType final
{
public:
	EFortItemType                                 New_Type;
};
static_assert(alignof(B_Athena_PartModifier_Generic_C_ActuallyChangedWeaponType) == 0x000001, "Wrong alignment on B_Athena_PartModifier_Generic_C_ActuallyChangedWeaponType");
static_assert(sizeof(B_Athena_PartModifier_Generic_C_ActuallyChangedWeaponType) == 0x000001, "Wrong size on B_Athena_PartModifier_Generic_C_ActuallyChangedWeaponType");
static_assert(offsetof(B_Athena_PartModifier_Generic_C_ActuallyChangedWeaponType, New_Type) == 0x000000, "Member 'B_Athena_PartModifier_Generic_C_ActuallyChangedWeaponType::New_Type' has a wrong offset!");

struct B_Athena_PartModifier_Generic_C_DEBUG_Print_String final
{
public:
	class FString                                 Input_String;
};
static_assert(alignof(B_Athena_PartModifier_Generic_C_DEBUG_Print_String) == 0x000008, "Wrong alignment on B_Athena_PartModifier_Generic_C_DEBUG_Print_String");
static_assert(sizeof(B_Athena_PartModifier_Generic_C_DEBUG_Print_String) == 0x000010, "Wrong size on B_Athena_PartModifier_Generic_C_DEBUG_Print_String");
static_assert(offsetof(B_Athena_PartModifier_Generic_C_DEBUG_Print_String, Input_String) == 0x000000, "Member 'B_Athena_PartModifier_Generic_C_DEBUG_Print_String::Input_String' has a wrong offset!");

struct B_Athena_PartModifier_Generic_C_ExecuteUbergraph_B_Athena_PartModifier_Generic final
{
public:
	int32                                         EntryPoint;
	TDelegate<void(class UFortItemDefinition* MontageItemDef, class AFortPawn* PawnEmoting)> K2Node_CreateDelegate_OutputDelegate;
	class UFXSystemComponent*                     CallFunc_GetIdleVFXComponent_ReturnValue;
	class FName                                   CallFunc_GetIdleFXSocketName_ReturnValue;
	bool                                          CallFunc_IsValid_ReturnValue;
	uint8                                         Pad_1D[0x3];
	class UMeshComponent*                         CallFunc_GetSkeletalMeshForAssociatedPlayerPawnPartType_ReturnValue;
	bool                                          CallFunc_K2_AttachToComponent_ReturnValue;
	bool                                          Temp_bool_Option_B___If_false__use_Option_A_Variable;
	uint8                                         Pad_2A[0x6];
	class AFortPlayerPawn*                        CallFunc_GetAssociatedPlayerPawn_ReturnValue;
	class AFortPlayerPawnAthena*                  K2Node_DynamicCast_AsFort_Player_Pawn_Athena;
	bool                                          K2Node_DynamicCast_bSuccess;
	uint8                                         Pad_41[0x3];
	int32                                         Temp_int_Array_Index_Variable;
	float                                         K2Node_CustomEvent_DeltaSeconds;
	uint8                                         Pad_4C[0x4];
	struct FVector                                K2Node_CustomEvent_OldLocation;
	struct FVector                                K2Node_CustomEvent_OldVelocity;
	class AFortPlayerPawn*                        CallFunc_GetAssociatedPlayerPawn_ReturnValue_1;
	int32                                         Temp_int_Array_Index_Variable_1;
	uint8                                         Pad_8C[0x4];
	class UFXSystemComponent*                     CallFunc_GetIdleVFXComponent_ReturnValue_1;
	class AFortPlayerPawn*                        CallFunc_GetAssociatedPlayerPawn_ReturnValue_2;
	class AFortPlayerPawnAthena*                  K2Node_DynamicCast_AsFort_Player_Pawn_Athena_1;
	bool                                          K2Node_DynamicCast_bSuccess_1;
	uint8                                         Pad_A9[0x7];
	const class UFortItemDefinition*              K2Node_CustomEvent_MontageItemDef_1;
	class AFortPawn*                              K2Node_CustomEvent_PawnEmoting_1;
	const class UFortItemDefinition*              K2Node_CustomEvent_MontageItemDef;
	class AFortPawn*                              K2Node_CustomEvent_PawnEmoting;
	EFortItemType                                 K2Node_Event_NewType;
	EFortItemType                                 K2Node_Event_OldType;
	EFortItemType                                 K2Node_CustomEvent_New_Type;
	bool                                          CallFunc_K2_IsTimerActiveHandle_ReturnValue;
	uint8                                         Pad_D4[0x4];
	class AFortPlayerPawn*                        CallFunc_GetAssociatedPlayerPawn_ReturnValue_3;
	class FName                                   K2Node_CustomEvent_Stat_Name_1;
	int32                                         K2Node_CustomEvent_Stat_Value_2;
	int32                                         Temp_int_Loop_Counter_Variable;
	int32                                         CallFunc_Array_Get_Item;
	int32                                         CallFunc_Array_Length_ReturnValue;
	int32                                         CallFunc_Add_IntInt_ReturnValue;
	TDelegate<void(float DeltaSeconds, const struct FVector& OldLocation, const struct FVector& OldVelocity)> K2Node_CreateDelegate_OutputDelegate_1;
	bool                                          CallFunc_Is_Stage_Stat_Requirements_Met_Passed_Requirements;
	uint8                                         Pad_105[0x3];
	class FName                                   K2Node_CustomEvent_State_Name;
	int32                                         K2Node_CustomEvent_Stat_Value_1;
	class FName                                   K2Node_CustomEvent_Stat_Name;
	int32                                         K2Node_CustomEvent_Stat_Value;
	int32                                         K2Node_CustomEvent_STAGE_Num_Being_Activated;
	int32                                         Temp_int_Loop_Counter_Variable_1;
	int32                                         Temp_int_Array_Index_Variable_2;
	int32                                         CallFunc_Add_IntInt_ReturnValue_1;
	class AGameStateBase*                         CallFunc_GetGameState_ReturnValue;
	class AAthena_GameState_C*                    K2Node_DynamicCast_AsAthena_Game_State;
	bool                                          K2Node_DynamicCast_bSuccess_2;
	uint8                                         Pad_139[0x3];
	int32                                         K2Node_CustomEvent_NumPlayersLeft;
	struct FPlayersLeft                           CallFunc_GetPlayersLeft_ReturnValue;
	TDelegate<void(int32 NumPlayersLeft)>         K2Node_CreateDelegate_OutputDelegate_2;
	bool                                          CallFunc_GreaterEqual_ByteByte_ReturnValue;
	uint8                                         Pad_159[0x3];
	int32                                         K2Node_CustomEvent_Total_Players_Left;
	int32                                         CallFunc_Array_Get_Item_1;
	int32                                         CallFunc_Array_Get_Item_2;
	int32                                         CallFunc_Array_Length_ReturnValue_1;
	int32                                         CallFunc_Array_Length_ReturnValue_2;
	bool                                          CallFunc_Less_IntInt_ReturnValue;
	bool                                          CallFunc_Less_IntInt_ReturnValue_1;
	bool                                          Temp_bool_Variable;
	uint8                                         Pad_173[0x1];
	class FName                                   Temp_name_Variable;
	int32                                         Temp_int_Variable;
	EFortItemType                                 K2Node_Select_Default;
	uint8                                         Pad_17D[0x3];
	class FName                                   K2Node_CustomEvent_StatName;
	int32                                         K2Node_CustomEvent_StatValue;
	bool                                          CallFunc_Is_Stage_Stat_Requirements_Met_Passed_Requirements_1;
	bool                                          CallFunc_Is_Stage_Stat_Requirements_Met_Passed_Requirements_2;
	uint8                                         Pad_18A[0x2];
	TDelegate<void(class FName StatName, int32 StatValue)> K2Node_CreateDelegate_OutputDelegate_3;
	TScriptInterface<class IFortVehicleInterface> K2Node_Event_VehicleEntered;
	class UFXSystemComponent*                     CallFunc_GetIdleVFXComponent_ReturnValue_2;
	bool                                          CallFunc_IsInFrontend_ReturnValue;
	uint8                                         Pad_1B1[0x7];
	class UFXSystemComponent*                     CallFunc_GetIdleVFXComponent_ReturnValue_3;
	int32                                         Temp_int_Loop_Counter_Variable_2;
	bool                                          CallFunc_Less_IntInt_ReturnValue_2;
	uint8                                         Pad_1C5[0x3];
	int32                                         CallFunc_Add_IntInt_ReturnValue_2;
	uint8                                         Pad_1CC[0x4];
	class AFortPlayerPawn*                        CallFunc_GetAssociatedPlayerPawn_ReturnValue_4;
	bool                                          CallFunc_PlayLibrarySound_Success;
	uint8                                         Pad_1D9[0x7];
	class UAudioComponent*                        CallFunc_PlayLibrarySound_Output;
	TDelegate<void(class UFortItemDefinition* MontageItemDef, class AFortPawn* PawnEmoting)> K2Node_CreateDelegate_OutputDelegate_4;
	uint8                                         Pad_1F4[0x4];
	class UFortAsyncAction_CosmeticAdaptiveStatWatcher* CallFunc_WatchCosmeticStat_ReturnValue;
	bool                                          CallFunc_IsValid_ReturnValue_1;
};
static_assert(alignof(B_Athena_PartModifier_Generic_C_ExecuteUbergraph_B_Athena_PartModifier_Generic) == 0x000008, "Wrong alignment on B_Athena_PartModifier_Generic_C_ExecuteUbergraph_B_Athena_PartModifier_Generic");
static_assert(sizeof(B_Athena_PartModifier_Generic_C_ExecuteUbergraph_B_Athena_PartModifier_Generic) == 0x000208, "Wrong size on B_Athena_PartModifier_Generic_C_ExecuteUbergraph_B_Athena_PartModifier_Generic");
static_assert(offsetof(B_Athena_PartModifier_Generic_C_ExecuteUbergraph_B_Athena_PartModifier_Generic, EntryPoint) == 0x000000, "Member 'B_Athena_PartModifier_Generic_C_ExecuteUbergraph_B_Athena_PartModifier_Generic::EntryPoint' has a wrong offset!");
static_assert(offsetof(B_Athena_PartModifier_Generic_C_ExecuteUbergraph_B_Athena_PartModifier_Generic, K2Node_CreateDelegate_OutputDelegate) == 0x000004, "Member 'B_Athena_PartModifier_Generic_C_ExecuteUbergraph_B_Athena_PartModifier_Generic::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(B_Athena_PartModifier_Generic_C_ExecuteUbergraph_B_Athena_PartModifier_Generic, CallFunc_GetIdleVFXComponent_ReturnValue) == 0x000010, "Member 'B_Athena_PartModifier_Generic_C_ExecuteUbergraph_B_Athena_PartModifier_Generic::CallFunc_GetIdleVFXComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_Athena_PartModifier_Generic_C_ExecuteUbergraph_B_Athena_PartModifier_Generic, CallFunc_GetIdleFXSocketName_ReturnValue) == 0x000018, "Member 'B_Athena_PartModifier_Generic_C_ExecuteUbergraph_B_Athena_PartModifier_Generic::CallFunc_GetIdleFXSocketName_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_Athena_PartModifier_Generic_C_ExecuteUbergraph_B_Athena_PartModifier_Generic, CallFunc_IsValid_ReturnValue) == 0x00001C, "Member 'B_Athena_PartModifier_Generic_C_ExecuteUbergraph_B_Athena_PartModifier_Generic::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_Athena_PartModifier_Generic_C_ExecuteUbergraph_B_Athena_PartModifier_Generic, CallFunc_GetSkeletalMeshForAssociatedPlayerPawnPartType_ReturnValue) == 0x000020, "Member 'B_Athena_PartModifier_Generic_C_ExecuteUbergraph_B_Athena_PartModifier_Generic::CallFunc_GetSkeletalMeshForAssociatedPlayerPawnPartType_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_Athena_PartModifier_Generic_C_ExecuteUbergraph_B_Athena_PartModifier_Generic, CallFunc_K2_AttachToComponent_ReturnValue) == 0x000028, "Member 'B_Athena_PartModifier_Generic_C_ExecuteUbergraph_B_Athena_PartModifier_Generic::CallFunc_K2_AttachToComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_Athena_PartModifier_Generic_C_ExecuteUbergraph_B_Athena_PartModifier_Generic, Temp_bool_Option_B___If_false__use_Option_A_Variable) == 0x000029, "Member 'B_Athena_PartModifier_Generic_C_ExecuteUbergraph_B_Athena_PartModifier_Generic::Temp_bool_Option_B___If_false__use_Option_A_Variable' has a wrong offset!");
static_assert(offsetof(B_Athena_PartModifier_Generic_C_ExecuteUbergraph_B_Athena_PartModifier_Generic, CallFunc_GetAssociatedPlayerPawn_ReturnValue) == 0x000030, "Member 'B_Athena_PartModifier_Generic_C_ExecuteUbergraph_B_Athena_PartModifier_Generic::CallFunc_GetAssociatedPlayerPawn_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_Athena_PartModifier_Generic_C_ExecuteUbergraph_B_Athena_PartModifier_Generic, K2Node_DynamicCast_AsFort_Player_Pawn_Athena) == 0x000038, "Member 'B_Athena_PartModifier_Generic_C_ExecuteUbergraph_B_Athena_PartModifier_Generic::K2Node_DynamicCast_AsFort_Player_Pawn_Athena' has a wrong offset!");
static_assert(offsetof(B_Athena_PartModifier_Generic_C_ExecuteUbergraph_B_Athena_PartModifier_Generic, K2Node_DynamicCast_bSuccess) == 0x000040, "Member 'B_Athena_PartModifier_Generic_C_ExecuteUbergraph_B_Athena_PartModifier_Generic::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(B_Athena_PartModifier_Generic_C_ExecuteUbergraph_B_Athena_PartModifier_Generic, Temp_int_Array_Index_Variable) == 0x000044, "Member 'B_Athena_PartModifier_Generic_C_ExecuteUbergraph_B_Athena_PartModifier_Generic::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(B_Athena_PartModifier_Generic_C_ExecuteUbergraph_B_Athena_PartModifier_Generic, K2Node_CustomEvent_DeltaSeconds) == 0x000048, "Member 'B_Athena_PartModifier_Generic_C_ExecuteUbergraph_B_Athena_PartModifier_Generic::K2Node_CustomEvent_DeltaSeconds' has a wrong offset!");
static_assert(offsetof(B_Athena_PartModifier_Generic_C_ExecuteUbergraph_B_Athena_PartModifier_Generic, K2Node_CustomEvent_OldLocation) == 0x000050, "Member 'B_Athena_PartModifier_Generic_C_ExecuteUbergraph_B_Athena_PartModifier_Generic::K2Node_CustomEvent_OldLocation' has a wrong offset!");
static_assert(offsetof(B_Athena_PartModifier_Generic_C_ExecuteUbergraph_B_Athena_PartModifier_Generic, K2Node_CustomEvent_OldVelocity) == 0x000068, "Member 'B_Athena_PartModifier_Generic_C_ExecuteUbergraph_B_Athena_PartModifier_Generic::K2Node_CustomEvent_OldVelocity' has a wrong offset!");
static_assert(offsetof(B_Athena_PartModifier_Generic_C_ExecuteUbergraph_B_Athena_PartModifier_Generic, CallFunc_GetAssociatedPlayerPawn_ReturnValue_1) == 0x000080, "Member 'B_Athena_PartModifier_Generic_C_ExecuteUbergraph_B_Athena_PartModifier_Generic::CallFunc_GetAssociatedPlayerPawn_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(B_Athena_PartModifier_Generic_C_ExecuteUbergraph_B_Athena_PartModifier_Generic, Temp_int_Array_Index_Variable_1) == 0x000088, "Member 'B_Athena_PartModifier_Generic_C_ExecuteUbergraph_B_Athena_PartModifier_Generic::Temp_int_Array_Index_Variable_1' has a wrong offset!");
static_assert(offsetof(B_Athena_PartModifier_Generic_C_ExecuteUbergraph_B_Athena_PartModifier_Generic, CallFunc_GetIdleVFXComponent_ReturnValue_1) == 0x000090, "Member 'B_Athena_PartModifier_Generic_C_ExecuteUbergraph_B_Athena_PartModifier_Generic::CallFunc_GetIdleVFXComponent_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(B_Athena_PartModifier_Generic_C_ExecuteUbergraph_B_Athena_PartModifier_Generic, CallFunc_GetAssociatedPlayerPawn_ReturnValue_2) == 0x000098, "Member 'B_Athena_PartModifier_Generic_C_ExecuteUbergraph_B_Athena_PartModifier_Generic::CallFunc_GetAssociatedPlayerPawn_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(B_Athena_PartModifier_Generic_C_ExecuteUbergraph_B_Athena_PartModifier_Generic, K2Node_DynamicCast_AsFort_Player_Pawn_Athena_1) == 0x0000A0, "Member 'B_Athena_PartModifier_Generic_C_ExecuteUbergraph_B_Athena_PartModifier_Generic::K2Node_DynamicCast_AsFort_Player_Pawn_Athena_1' has a wrong offset!");
static_assert(offsetof(B_Athena_PartModifier_Generic_C_ExecuteUbergraph_B_Athena_PartModifier_Generic, K2Node_DynamicCast_bSuccess_1) == 0x0000A8, "Member 'B_Athena_PartModifier_Generic_C_ExecuteUbergraph_B_Athena_PartModifier_Generic::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(B_Athena_PartModifier_Generic_C_ExecuteUbergraph_B_Athena_PartModifier_Generic, K2Node_CustomEvent_MontageItemDef_1) == 0x0000B0, "Member 'B_Athena_PartModifier_Generic_C_ExecuteUbergraph_B_Athena_PartModifier_Generic::K2Node_CustomEvent_MontageItemDef_1' has a wrong offset!");
static_assert(offsetof(B_Athena_PartModifier_Generic_C_ExecuteUbergraph_B_Athena_PartModifier_Generic, K2Node_CustomEvent_PawnEmoting_1) == 0x0000B8, "Member 'B_Athena_PartModifier_Generic_C_ExecuteUbergraph_B_Athena_PartModifier_Generic::K2Node_CustomEvent_PawnEmoting_1' has a wrong offset!");
static_assert(offsetof(B_Athena_PartModifier_Generic_C_ExecuteUbergraph_B_Athena_PartModifier_Generic, K2Node_CustomEvent_MontageItemDef) == 0x0000C0, "Member 'B_Athena_PartModifier_Generic_C_ExecuteUbergraph_B_Athena_PartModifier_Generic::K2Node_CustomEvent_MontageItemDef' has a wrong offset!");
static_assert(offsetof(B_Athena_PartModifier_Generic_C_ExecuteUbergraph_B_Athena_PartModifier_Generic, K2Node_CustomEvent_PawnEmoting) == 0x0000C8, "Member 'B_Athena_PartModifier_Generic_C_ExecuteUbergraph_B_Athena_PartModifier_Generic::K2Node_CustomEvent_PawnEmoting' has a wrong offset!");
static_assert(offsetof(B_Athena_PartModifier_Generic_C_ExecuteUbergraph_B_Athena_PartModifier_Generic, K2Node_Event_NewType) == 0x0000D0, "Member 'B_Athena_PartModifier_Generic_C_ExecuteUbergraph_B_Athena_PartModifier_Generic::K2Node_Event_NewType' has a wrong offset!");
static_assert(offsetof(B_Athena_PartModifier_Generic_C_ExecuteUbergraph_B_Athena_PartModifier_Generic, K2Node_Event_OldType) == 0x0000D1, "Member 'B_Athena_PartModifier_Generic_C_ExecuteUbergraph_B_Athena_PartModifier_Generic::K2Node_Event_OldType' has a wrong offset!");
static_assert(offsetof(B_Athena_PartModifier_Generic_C_ExecuteUbergraph_B_Athena_PartModifier_Generic, K2Node_CustomEvent_New_Type) == 0x0000D2, "Member 'B_Athena_PartModifier_Generic_C_ExecuteUbergraph_B_Athena_PartModifier_Generic::K2Node_CustomEvent_New_Type' has a wrong offset!");
static_assert(offsetof(B_Athena_PartModifier_Generic_C_ExecuteUbergraph_B_Athena_PartModifier_Generic, CallFunc_K2_IsTimerActiveHandle_ReturnValue) == 0x0000D3, "Member 'B_Athena_PartModifier_Generic_C_ExecuteUbergraph_B_Athena_PartModifier_Generic::CallFunc_K2_IsTimerActiveHandle_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_Athena_PartModifier_Generic_C_ExecuteUbergraph_B_Athena_PartModifier_Generic, CallFunc_GetAssociatedPlayerPawn_ReturnValue_3) == 0x0000D8, "Member 'B_Athena_PartModifier_Generic_C_ExecuteUbergraph_B_Athena_PartModifier_Generic::CallFunc_GetAssociatedPlayerPawn_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(B_Athena_PartModifier_Generic_C_ExecuteUbergraph_B_Athena_PartModifier_Generic, K2Node_CustomEvent_Stat_Name_1) == 0x0000E0, "Member 'B_Athena_PartModifier_Generic_C_ExecuteUbergraph_B_Athena_PartModifier_Generic::K2Node_CustomEvent_Stat_Name_1' has a wrong offset!");
static_assert(offsetof(B_Athena_PartModifier_Generic_C_ExecuteUbergraph_B_Athena_PartModifier_Generic, K2Node_CustomEvent_Stat_Value_2) == 0x0000E4, "Member 'B_Athena_PartModifier_Generic_C_ExecuteUbergraph_B_Athena_PartModifier_Generic::K2Node_CustomEvent_Stat_Value_2' has a wrong offset!");
static_assert(offsetof(B_Athena_PartModifier_Generic_C_ExecuteUbergraph_B_Athena_PartModifier_Generic, Temp_int_Loop_Counter_Variable) == 0x0000E8, "Member 'B_Athena_PartModifier_Generic_C_ExecuteUbergraph_B_Athena_PartModifier_Generic::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(B_Athena_PartModifier_Generic_C_ExecuteUbergraph_B_Athena_PartModifier_Generic, CallFunc_Array_Get_Item) == 0x0000EC, "Member 'B_Athena_PartModifier_Generic_C_ExecuteUbergraph_B_Athena_PartModifier_Generic::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(B_Athena_PartModifier_Generic_C_ExecuteUbergraph_B_Athena_PartModifier_Generic, CallFunc_Array_Length_ReturnValue) == 0x0000F0, "Member 'B_Athena_PartModifier_Generic_C_ExecuteUbergraph_B_Athena_PartModifier_Generic::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_Athena_PartModifier_Generic_C_ExecuteUbergraph_B_Athena_PartModifier_Generic, CallFunc_Add_IntInt_ReturnValue) == 0x0000F4, "Member 'B_Athena_PartModifier_Generic_C_ExecuteUbergraph_B_Athena_PartModifier_Generic::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_Athena_PartModifier_Generic_C_ExecuteUbergraph_B_Athena_PartModifier_Generic, K2Node_CreateDelegate_OutputDelegate_1) == 0x0000F8, "Member 'B_Athena_PartModifier_Generic_C_ExecuteUbergraph_B_Athena_PartModifier_Generic::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(B_Athena_PartModifier_Generic_C_ExecuteUbergraph_B_Athena_PartModifier_Generic, CallFunc_Is_Stage_Stat_Requirements_Met_Passed_Requirements) == 0x000104, "Member 'B_Athena_PartModifier_Generic_C_ExecuteUbergraph_B_Athena_PartModifier_Generic::CallFunc_Is_Stage_Stat_Requirements_Met_Passed_Requirements' has a wrong offset!");
static_assert(offsetof(B_Athena_PartModifier_Generic_C_ExecuteUbergraph_B_Athena_PartModifier_Generic, K2Node_CustomEvent_State_Name) == 0x000108, "Member 'B_Athena_PartModifier_Generic_C_ExecuteUbergraph_B_Athena_PartModifier_Generic::K2Node_CustomEvent_State_Name' has a wrong offset!");
static_assert(offsetof(B_Athena_PartModifier_Generic_C_ExecuteUbergraph_B_Athena_PartModifier_Generic, K2Node_CustomEvent_Stat_Value_1) == 0x00010C, "Member 'B_Athena_PartModifier_Generic_C_ExecuteUbergraph_B_Athena_PartModifier_Generic::K2Node_CustomEvent_Stat_Value_1' has a wrong offset!");
static_assert(offsetof(B_Athena_PartModifier_Generic_C_ExecuteUbergraph_B_Athena_PartModifier_Generic, K2Node_CustomEvent_Stat_Name) == 0x000110, "Member 'B_Athena_PartModifier_Generic_C_ExecuteUbergraph_B_Athena_PartModifier_Generic::K2Node_CustomEvent_Stat_Name' has a wrong offset!");
static_assert(offsetof(B_Athena_PartModifier_Generic_C_ExecuteUbergraph_B_Athena_PartModifier_Generic, K2Node_CustomEvent_Stat_Value) == 0x000114, "Member 'B_Athena_PartModifier_Generic_C_ExecuteUbergraph_B_Athena_PartModifier_Generic::K2Node_CustomEvent_Stat_Value' has a wrong offset!");
static_assert(offsetof(B_Athena_PartModifier_Generic_C_ExecuteUbergraph_B_Athena_PartModifier_Generic, K2Node_CustomEvent_STAGE_Num_Being_Activated) == 0x000118, "Member 'B_Athena_PartModifier_Generic_C_ExecuteUbergraph_B_Athena_PartModifier_Generic::K2Node_CustomEvent_STAGE_Num_Being_Activated' has a wrong offset!");
static_assert(offsetof(B_Athena_PartModifier_Generic_C_ExecuteUbergraph_B_Athena_PartModifier_Generic, Temp_int_Loop_Counter_Variable_1) == 0x00011C, "Member 'B_Athena_PartModifier_Generic_C_ExecuteUbergraph_B_Athena_PartModifier_Generic::Temp_int_Loop_Counter_Variable_1' has a wrong offset!");
static_assert(offsetof(B_Athena_PartModifier_Generic_C_ExecuteUbergraph_B_Athena_PartModifier_Generic, Temp_int_Array_Index_Variable_2) == 0x000120, "Member 'B_Athena_PartModifier_Generic_C_ExecuteUbergraph_B_Athena_PartModifier_Generic::Temp_int_Array_Index_Variable_2' has a wrong offset!");
static_assert(offsetof(B_Athena_PartModifier_Generic_C_ExecuteUbergraph_B_Athena_PartModifier_Generic, CallFunc_Add_IntInt_ReturnValue_1) == 0x000124, "Member 'B_Athena_PartModifier_Generic_C_ExecuteUbergraph_B_Athena_PartModifier_Generic::CallFunc_Add_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(B_Athena_PartModifier_Generic_C_ExecuteUbergraph_B_Athena_PartModifier_Generic, CallFunc_GetGameState_ReturnValue) == 0x000128, "Member 'B_Athena_PartModifier_Generic_C_ExecuteUbergraph_B_Athena_PartModifier_Generic::CallFunc_GetGameState_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_Athena_PartModifier_Generic_C_ExecuteUbergraph_B_Athena_PartModifier_Generic, K2Node_DynamicCast_AsAthena_Game_State) == 0x000130, "Member 'B_Athena_PartModifier_Generic_C_ExecuteUbergraph_B_Athena_PartModifier_Generic::K2Node_DynamicCast_AsAthena_Game_State' has a wrong offset!");
static_assert(offsetof(B_Athena_PartModifier_Generic_C_ExecuteUbergraph_B_Athena_PartModifier_Generic, K2Node_DynamicCast_bSuccess_2) == 0x000138, "Member 'B_Athena_PartModifier_Generic_C_ExecuteUbergraph_B_Athena_PartModifier_Generic::K2Node_DynamicCast_bSuccess_2' has a wrong offset!");
static_assert(offsetof(B_Athena_PartModifier_Generic_C_ExecuteUbergraph_B_Athena_PartModifier_Generic, K2Node_CustomEvent_NumPlayersLeft) == 0x00013C, "Member 'B_Athena_PartModifier_Generic_C_ExecuteUbergraph_B_Athena_PartModifier_Generic::K2Node_CustomEvent_NumPlayersLeft' has a wrong offset!");
static_assert(offsetof(B_Athena_PartModifier_Generic_C_ExecuteUbergraph_B_Athena_PartModifier_Generic, CallFunc_GetPlayersLeft_ReturnValue) == 0x000140, "Member 'B_Athena_PartModifier_Generic_C_ExecuteUbergraph_B_Athena_PartModifier_Generic::CallFunc_GetPlayersLeft_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_Athena_PartModifier_Generic_C_ExecuteUbergraph_B_Athena_PartModifier_Generic, K2Node_CreateDelegate_OutputDelegate_2) == 0x00014C, "Member 'B_Athena_PartModifier_Generic_C_ExecuteUbergraph_B_Athena_PartModifier_Generic::K2Node_CreateDelegate_OutputDelegate_2' has a wrong offset!");
static_assert(offsetof(B_Athena_PartModifier_Generic_C_ExecuteUbergraph_B_Athena_PartModifier_Generic, CallFunc_GreaterEqual_ByteByte_ReturnValue) == 0x000158, "Member 'B_Athena_PartModifier_Generic_C_ExecuteUbergraph_B_Athena_PartModifier_Generic::CallFunc_GreaterEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_Athena_PartModifier_Generic_C_ExecuteUbergraph_B_Athena_PartModifier_Generic, K2Node_CustomEvent_Total_Players_Left) == 0x00015C, "Member 'B_Athena_PartModifier_Generic_C_ExecuteUbergraph_B_Athena_PartModifier_Generic::K2Node_CustomEvent_Total_Players_Left' has a wrong offset!");
static_assert(offsetof(B_Athena_PartModifier_Generic_C_ExecuteUbergraph_B_Athena_PartModifier_Generic, CallFunc_Array_Get_Item_1) == 0x000160, "Member 'B_Athena_PartModifier_Generic_C_ExecuteUbergraph_B_Athena_PartModifier_Generic::CallFunc_Array_Get_Item_1' has a wrong offset!");
static_assert(offsetof(B_Athena_PartModifier_Generic_C_ExecuteUbergraph_B_Athena_PartModifier_Generic, CallFunc_Array_Get_Item_2) == 0x000164, "Member 'B_Athena_PartModifier_Generic_C_ExecuteUbergraph_B_Athena_PartModifier_Generic::CallFunc_Array_Get_Item_2' has a wrong offset!");
static_assert(offsetof(B_Athena_PartModifier_Generic_C_ExecuteUbergraph_B_Athena_PartModifier_Generic, CallFunc_Array_Length_ReturnValue_1) == 0x000168, "Member 'B_Athena_PartModifier_Generic_C_ExecuteUbergraph_B_Athena_PartModifier_Generic::CallFunc_Array_Length_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(B_Athena_PartModifier_Generic_C_ExecuteUbergraph_B_Athena_PartModifier_Generic, CallFunc_Array_Length_ReturnValue_2) == 0x00016C, "Member 'B_Athena_PartModifier_Generic_C_ExecuteUbergraph_B_Athena_PartModifier_Generic::CallFunc_Array_Length_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(B_Athena_PartModifier_Generic_C_ExecuteUbergraph_B_Athena_PartModifier_Generic, CallFunc_Less_IntInt_ReturnValue) == 0x000170, "Member 'B_Athena_PartModifier_Generic_C_ExecuteUbergraph_B_Athena_PartModifier_Generic::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_Athena_PartModifier_Generic_C_ExecuteUbergraph_B_Athena_PartModifier_Generic, CallFunc_Less_IntInt_ReturnValue_1) == 0x000171, "Member 'B_Athena_PartModifier_Generic_C_ExecuteUbergraph_B_Athena_PartModifier_Generic::CallFunc_Less_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(B_Athena_PartModifier_Generic_C_ExecuteUbergraph_B_Athena_PartModifier_Generic, Temp_bool_Variable) == 0x000172, "Member 'B_Athena_PartModifier_Generic_C_ExecuteUbergraph_B_Athena_PartModifier_Generic::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(B_Athena_PartModifier_Generic_C_ExecuteUbergraph_B_Athena_PartModifier_Generic, Temp_name_Variable) == 0x000174, "Member 'B_Athena_PartModifier_Generic_C_ExecuteUbergraph_B_Athena_PartModifier_Generic::Temp_name_Variable' has a wrong offset!");
static_assert(offsetof(B_Athena_PartModifier_Generic_C_ExecuteUbergraph_B_Athena_PartModifier_Generic, Temp_int_Variable) == 0x000178, "Member 'B_Athena_PartModifier_Generic_C_ExecuteUbergraph_B_Athena_PartModifier_Generic::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(B_Athena_PartModifier_Generic_C_ExecuteUbergraph_B_Athena_PartModifier_Generic, K2Node_Select_Default) == 0x00017C, "Member 'B_Athena_PartModifier_Generic_C_ExecuteUbergraph_B_Athena_PartModifier_Generic::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(B_Athena_PartModifier_Generic_C_ExecuteUbergraph_B_Athena_PartModifier_Generic, K2Node_CustomEvent_StatName) == 0x000180, "Member 'B_Athena_PartModifier_Generic_C_ExecuteUbergraph_B_Athena_PartModifier_Generic::K2Node_CustomEvent_StatName' has a wrong offset!");
static_assert(offsetof(B_Athena_PartModifier_Generic_C_ExecuteUbergraph_B_Athena_PartModifier_Generic, K2Node_CustomEvent_StatValue) == 0x000184, "Member 'B_Athena_PartModifier_Generic_C_ExecuteUbergraph_B_Athena_PartModifier_Generic::K2Node_CustomEvent_StatValue' has a wrong offset!");
static_assert(offsetof(B_Athena_PartModifier_Generic_C_ExecuteUbergraph_B_Athena_PartModifier_Generic, CallFunc_Is_Stage_Stat_Requirements_Met_Passed_Requirements_1) == 0x000188, "Member 'B_Athena_PartModifier_Generic_C_ExecuteUbergraph_B_Athena_PartModifier_Generic::CallFunc_Is_Stage_Stat_Requirements_Met_Passed_Requirements_1' has a wrong offset!");
static_assert(offsetof(B_Athena_PartModifier_Generic_C_ExecuteUbergraph_B_Athena_PartModifier_Generic, CallFunc_Is_Stage_Stat_Requirements_Met_Passed_Requirements_2) == 0x000189, "Member 'B_Athena_PartModifier_Generic_C_ExecuteUbergraph_B_Athena_PartModifier_Generic::CallFunc_Is_Stage_Stat_Requirements_Met_Passed_Requirements_2' has a wrong offset!");
static_assert(offsetof(B_Athena_PartModifier_Generic_C_ExecuteUbergraph_B_Athena_PartModifier_Generic, K2Node_CreateDelegate_OutputDelegate_3) == 0x00018C, "Member 'B_Athena_PartModifier_Generic_C_ExecuteUbergraph_B_Athena_PartModifier_Generic::K2Node_CreateDelegate_OutputDelegate_3' has a wrong offset!");
static_assert(offsetof(B_Athena_PartModifier_Generic_C_ExecuteUbergraph_B_Athena_PartModifier_Generic, K2Node_Event_VehicleEntered) == 0x000198, "Member 'B_Athena_PartModifier_Generic_C_ExecuteUbergraph_B_Athena_PartModifier_Generic::K2Node_Event_VehicleEntered' has a wrong offset!");
static_assert(offsetof(B_Athena_PartModifier_Generic_C_ExecuteUbergraph_B_Athena_PartModifier_Generic, CallFunc_GetIdleVFXComponent_ReturnValue_2) == 0x0001A8, "Member 'B_Athena_PartModifier_Generic_C_ExecuteUbergraph_B_Athena_PartModifier_Generic::CallFunc_GetIdleVFXComponent_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(B_Athena_PartModifier_Generic_C_ExecuteUbergraph_B_Athena_PartModifier_Generic, CallFunc_IsInFrontend_ReturnValue) == 0x0001B0, "Member 'B_Athena_PartModifier_Generic_C_ExecuteUbergraph_B_Athena_PartModifier_Generic::CallFunc_IsInFrontend_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_Athena_PartModifier_Generic_C_ExecuteUbergraph_B_Athena_PartModifier_Generic, CallFunc_GetIdleVFXComponent_ReturnValue_3) == 0x0001B8, "Member 'B_Athena_PartModifier_Generic_C_ExecuteUbergraph_B_Athena_PartModifier_Generic::CallFunc_GetIdleVFXComponent_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(B_Athena_PartModifier_Generic_C_ExecuteUbergraph_B_Athena_PartModifier_Generic, Temp_int_Loop_Counter_Variable_2) == 0x0001C0, "Member 'B_Athena_PartModifier_Generic_C_ExecuteUbergraph_B_Athena_PartModifier_Generic::Temp_int_Loop_Counter_Variable_2' has a wrong offset!");
static_assert(offsetof(B_Athena_PartModifier_Generic_C_ExecuteUbergraph_B_Athena_PartModifier_Generic, CallFunc_Less_IntInt_ReturnValue_2) == 0x0001C4, "Member 'B_Athena_PartModifier_Generic_C_ExecuteUbergraph_B_Athena_PartModifier_Generic::CallFunc_Less_IntInt_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(B_Athena_PartModifier_Generic_C_ExecuteUbergraph_B_Athena_PartModifier_Generic, CallFunc_Add_IntInt_ReturnValue_2) == 0x0001C8, "Member 'B_Athena_PartModifier_Generic_C_ExecuteUbergraph_B_Athena_PartModifier_Generic::CallFunc_Add_IntInt_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(B_Athena_PartModifier_Generic_C_ExecuteUbergraph_B_Athena_PartModifier_Generic, CallFunc_GetAssociatedPlayerPawn_ReturnValue_4) == 0x0001D0, "Member 'B_Athena_PartModifier_Generic_C_ExecuteUbergraph_B_Athena_PartModifier_Generic::CallFunc_GetAssociatedPlayerPawn_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(B_Athena_PartModifier_Generic_C_ExecuteUbergraph_B_Athena_PartModifier_Generic, CallFunc_PlayLibrarySound_Success) == 0x0001D8, "Member 'B_Athena_PartModifier_Generic_C_ExecuteUbergraph_B_Athena_PartModifier_Generic::CallFunc_PlayLibrarySound_Success' has a wrong offset!");
static_assert(offsetof(B_Athena_PartModifier_Generic_C_ExecuteUbergraph_B_Athena_PartModifier_Generic, CallFunc_PlayLibrarySound_Output) == 0x0001E0, "Member 'B_Athena_PartModifier_Generic_C_ExecuteUbergraph_B_Athena_PartModifier_Generic::CallFunc_PlayLibrarySound_Output' has a wrong offset!");
static_assert(offsetof(B_Athena_PartModifier_Generic_C_ExecuteUbergraph_B_Athena_PartModifier_Generic, K2Node_CreateDelegate_OutputDelegate_4) == 0x0001E8, "Member 'B_Athena_PartModifier_Generic_C_ExecuteUbergraph_B_Athena_PartModifier_Generic::K2Node_CreateDelegate_OutputDelegate_4' has a wrong offset!");
static_assert(offsetof(B_Athena_PartModifier_Generic_C_ExecuteUbergraph_B_Athena_PartModifier_Generic, CallFunc_WatchCosmeticStat_ReturnValue) == 0x0001F8, "Member 'B_Athena_PartModifier_Generic_C_ExecuteUbergraph_B_Athena_PartModifier_Generic::CallFunc_WatchCosmeticStat_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_Athena_PartModifier_Generic_C_ExecuteUbergraph_B_Athena_PartModifier_Generic, CallFunc_IsValid_ReturnValue_1) == 0x000200, "Member 'B_Athena_PartModifier_Generic_C_ExecuteUbergraph_B_Athena_PartModifier_Generic::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");

struct B_Athena_PartModifier_Generic_C_Handle_Potential_New_Weapon_Type final
{
public:
	EFortItemType                                 Type;
	uint8                                         Pad_1[0x3];
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;
	struct FTimerHandle                           CallFunc_K2_SetTimerDelegate_ReturnValue;
	bool                                          CallFunc_Greater_DoubleDouble_ReturnValue;
	bool                                          CallFunc_EqualEqual_GameplayTag_ReturnValue;
	uint8                                         Pad_1A[0x2];
	struct FGameplayTag                           CallFunc_Map_Find_Value;
	bool                                          CallFunc_Map_Find_ReturnValue;
	uint8                                         Pad_21[0x3];
	float                                         CallFunc_K2_SetTimerDelegate_Time_ImplicitCast;
};
static_assert(alignof(B_Athena_PartModifier_Generic_C_Handle_Potential_New_Weapon_Type) == 0x000008, "Wrong alignment on B_Athena_PartModifier_Generic_C_Handle_Potential_New_Weapon_Type");
static_assert(sizeof(B_Athena_PartModifier_Generic_C_Handle_Potential_New_Weapon_Type) == 0x000028, "Wrong size on B_Athena_PartModifier_Generic_C_Handle_Potential_New_Weapon_Type");
static_assert(offsetof(B_Athena_PartModifier_Generic_C_Handle_Potential_New_Weapon_Type, Type) == 0x000000, "Member 'B_Athena_PartModifier_Generic_C_Handle_Potential_New_Weapon_Type::Type' has a wrong offset!");
static_assert(offsetof(B_Athena_PartModifier_Generic_C_Handle_Potential_New_Weapon_Type, K2Node_CreateDelegate_OutputDelegate) == 0x000004, "Member 'B_Athena_PartModifier_Generic_C_Handle_Potential_New_Weapon_Type::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(B_Athena_PartModifier_Generic_C_Handle_Potential_New_Weapon_Type, CallFunc_K2_SetTimerDelegate_ReturnValue) == 0x000010, "Member 'B_Athena_PartModifier_Generic_C_Handle_Potential_New_Weapon_Type::CallFunc_K2_SetTimerDelegate_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_Athena_PartModifier_Generic_C_Handle_Potential_New_Weapon_Type, CallFunc_Greater_DoubleDouble_ReturnValue) == 0x000018, "Member 'B_Athena_PartModifier_Generic_C_Handle_Potential_New_Weapon_Type::CallFunc_Greater_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_Athena_PartModifier_Generic_C_Handle_Potential_New_Weapon_Type, CallFunc_EqualEqual_GameplayTag_ReturnValue) == 0x000019, "Member 'B_Athena_PartModifier_Generic_C_Handle_Potential_New_Weapon_Type::CallFunc_EqualEqual_GameplayTag_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_Athena_PartModifier_Generic_C_Handle_Potential_New_Weapon_Type, CallFunc_Map_Find_Value) == 0x00001C, "Member 'B_Athena_PartModifier_Generic_C_Handle_Potential_New_Weapon_Type::CallFunc_Map_Find_Value' has a wrong offset!");
static_assert(offsetof(B_Athena_PartModifier_Generic_C_Handle_Potential_New_Weapon_Type, CallFunc_Map_Find_ReturnValue) == 0x000020, "Member 'B_Athena_PartModifier_Generic_C_Handle_Potential_New_Weapon_Type::CallFunc_Map_Find_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_Athena_PartModifier_Generic_C_Handle_Potential_New_Weapon_Type, CallFunc_K2_SetTimerDelegate_Time_ImplicitCast) == 0x000024, "Member 'B_Athena_PartModifier_Generic_C_Handle_Potential_New_Weapon_Type::CallFunc_K2_SetTimerDelegate_Time_ImplicitCast' has a wrong offset!");

struct B_Athena_PartModifier_Generic_C_Hidden_Hand_Check final
{
public:
	TArray<class UFXSystemComponent*>             FX_Systems_associated_with_Hands;
	const class AFortWeapon*                      New_Weapon;
	const class AFortWeapon*                      Old_Weapon;
	bool                                          Only_Set_Niagara_Bool_Variable;
	bool                                          isHandHidden;
	bool                                          CallFunc_IsValid_ReturnValue;
	bool                                          CallFunc_WeaponDataHasMatchingGameplayTag_ReturnValue;
	bool                                          CallFunc_IsValid_ReturnValue_1;
	bool                                          CallFunc_WeaponDataHasMatchingGameplayTag_ReturnValue_1;
	uint8                                         Pad_26[0x2];
	int32                                         CallFunc_Array_Length_ReturnValue;
	int32                                         CallFunc_Array_Length_ReturnValue_1;
	int32                                         CallFunc_Array_Length_ReturnValue_2;
	int32                                         CallFunc_Array_Length_ReturnValue_3;
	bool                                          CallFunc_Greater_IntInt_ReturnValue;
	bool                                          CallFunc_Greater_IntInt_ReturnValue_1;
	uint8                                         Pad_3A[0x2];
	int32                                         Temp_int_Loop_Counter_Variable;
	bool                                          CallFunc_Less_IntInt_ReturnValue;
	uint8                                         Pad_41[0x3];
	int32                                         CallFunc_Add_IntInt_ReturnValue;
	int32                                         Temp_int_Array_Index_Variable;
	uint8                                         Pad_4C[0x4];
	class UFXSystemComponent*                     CallFunc_Array_Get_Item;
	int32                                         Temp_int_Loop_Counter_Variable_1;
	bool                                          CallFunc_Less_IntInt_ReturnValue_1;
	uint8                                         Pad_5D[0x3];
	int32                                         CallFunc_Add_IntInt_ReturnValue_1;
	int32                                         Temp_int_Array_Index_Variable_1;
	class UFXSystemComponent*                     CallFunc_Array_Get_Item_1;
};
static_assert(alignof(B_Athena_PartModifier_Generic_C_Hidden_Hand_Check) == 0x000008, "Wrong alignment on B_Athena_PartModifier_Generic_C_Hidden_Hand_Check");
static_assert(sizeof(B_Athena_PartModifier_Generic_C_Hidden_Hand_Check) == 0x000070, "Wrong size on B_Athena_PartModifier_Generic_C_Hidden_Hand_Check");
static_assert(offsetof(B_Athena_PartModifier_Generic_C_Hidden_Hand_Check, FX_Systems_associated_with_Hands) == 0x000000, "Member 'B_Athena_PartModifier_Generic_C_Hidden_Hand_Check::FX_Systems_associated_with_Hands' has a wrong offset!");
static_assert(offsetof(B_Athena_PartModifier_Generic_C_Hidden_Hand_Check, New_Weapon) == 0x000010, "Member 'B_Athena_PartModifier_Generic_C_Hidden_Hand_Check::New_Weapon' has a wrong offset!");
static_assert(offsetof(B_Athena_PartModifier_Generic_C_Hidden_Hand_Check, Old_Weapon) == 0x000018, "Member 'B_Athena_PartModifier_Generic_C_Hidden_Hand_Check::Old_Weapon' has a wrong offset!");
static_assert(offsetof(B_Athena_PartModifier_Generic_C_Hidden_Hand_Check, Only_Set_Niagara_Bool_Variable) == 0x000020, "Member 'B_Athena_PartModifier_Generic_C_Hidden_Hand_Check::Only_Set_Niagara_Bool_Variable' has a wrong offset!");
static_assert(offsetof(B_Athena_PartModifier_Generic_C_Hidden_Hand_Check, isHandHidden) == 0x000021, "Member 'B_Athena_PartModifier_Generic_C_Hidden_Hand_Check::isHandHidden' has a wrong offset!");
static_assert(offsetof(B_Athena_PartModifier_Generic_C_Hidden_Hand_Check, CallFunc_IsValid_ReturnValue) == 0x000022, "Member 'B_Athena_PartModifier_Generic_C_Hidden_Hand_Check::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_Athena_PartModifier_Generic_C_Hidden_Hand_Check, CallFunc_WeaponDataHasMatchingGameplayTag_ReturnValue) == 0x000023, "Member 'B_Athena_PartModifier_Generic_C_Hidden_Hand_Check::CallFunc_WeaponDataHasMatchingGameplayTag_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_Athena_PartModifier_Generic_C_Hidden_Hand_Check, CallFunc_IsValid_ReturnValue_1) == 0x000024, "Member 'B_Athena_PartModifier_Generic_C_Hidden_Hand_Check::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(B_Athena_PartModifier_Generic_C_Hidden_Hand_Check, CallFunc_WeaponDataHasMatchingGameplayTag_ReturnValue_1) == 0x000025, "Member 'B_Athena_PartModifier_Generic_C_Hidden_Hand_Check::CallFunc_WeaponDataHasMatchingGameplayTag_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(B_Athena_PartModifier_Generic_C_Hidden_Hand_Check, CallFunc_Array_Length_ReturnValue) == 0x000028, "Member 'B_Athena_PartModifier_Generic_C_Hidden_Hand_Check::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_Athena_PartModifier_Generic_C_Hidden_Hand_Check, CallFunc_Array_Length_ReturnValue_1) == 0x00002C, "Member 'B_Athena_PartModifier_Generic_C_Hidden_Hand_Check::CallFunc_Array_Length_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(B_Athena_PartModifier_Generic_C_Hidden_Hand_Check, CallFunc_Array_Length_ReturnValue_2) == 0x000030, "Member 'B_Athena_PartModifier_Generic_C_Hidden_Hand_Check::CallFunc_Array_Length_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(B_Athena_PartModifier_Generic_C_Hidden_Hand_Check, CallFunc_Array_Length_ReturnValue_3) == 0x000034, "Member 'B_Athena_PartModifier_Generic_C_Hidden_Hand_Check::CallFunc_Array_Length_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(B_Athena_PartModifier_Generic_C_Hidden_Hand_Check, CallFunc_Greater_IntInt_ReturnValue) == 0x000038, "Member 'B_Athena_PartModifier_Generic_C_Hidden_Hand_Check::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_Athena_PartModifier_Generic_C_Hidden_Hand_Check, CallFunc_Greater_IntInt_ReturnValue_1) == 0x000039, "Member 'B_Athena_PartModifier_Generic_C_Hidden_Hand_Check::CallFunc_Greater_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(B_Athena_PartModifier_Generic_C_Hidden_Hand_Check, Temp_int_Loop_Counter_Variable) == 0x00003C, "Member 'B_Athena_PartModifier_Generic_C_Hidden_Hand_Check::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(B_Athena_PartModifier_Generic_C_Hidden_Hand_Check, CallFunc_Less_IntInt_ReturnValue) == 0x000040, "Member 'B_Athena_PartModifier_Generic_C_Hidden_Hand_Check::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_Athena_PartModifier_Generic_C_Hidden_Hand_Check, CallFunc_Add_IntInt_ReturnValue) == 0x000044, "Member 'B_Athena_PartModifier_Generic_C_Hidden_Hand_Check::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_Athena_PartModifier_Generic_C_Hidden_Hand_Check, Temp_int_Array_Index_Variable) == 0x000048, "Member 'B_Athena_PartModifier_Generic_C_Hidden_Hand_Check::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(B_Athena_PartModifier_Generic_C_Hidden_Hand_Check, CallFunc_Array_Get_Item) == 0x000050, "Member 'B_Athena_PartModifier_Generic_C_Hidden_Hand_Check::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(B_Athena_PartModifier_Generic_C_Hidden_Hand_Check, Temp_int_Loop_Counter_Variable_1) == 0x000058, "Member 'B_Athena_PartModifier_Generic_C_Hidden_Hand_Check::Temp_int_Loop_Counter_Variable_1' has a wrong offset!");
static_assert(offsetof(B_Athena_PartModifier_Generic_C_Hidden_Hand_Check, CallFunc_Less_IntInt_ReturnValue_1) == 0x00005C, "Member 'B_Athena_PartModifier_Generic_C_Hidden_Hand_Check::CallFunc_Less_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(B_Athena_PartModifier_Generic_C_Hidden_Hand_Check, CallFunc_Add_IntInt_ReturnValue_1) == 0x000060, "Member 'B_Athena_PartModifier_Generic_C_Hidden_Hand_Check::CallFunc_Add_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(B_Athena_PartModifier_Generic_C_Hidden_Hand_Check, Temp_int_Array_Index_Variable_1) == 0x000064, "Member 'B_Athena_PartModifier_Generic_C_Hidden_Hand_Check::Temp_int_Array_Index_Variable_1' has a wrong offset!");
static_assert(offsetof(B_Athena_PartModifier_Generic_C_Hidden_Hand_Check, CallFunc_Array_Get_Item_1) == 0x000068, "Member 'B_Athena_PartModifier_Generic_C_Hidden_Hand_Check::CallFunc_Array_Get_Item_1' has a wrong offset!");

struct B_Athena_PartModifier_Generic_C_Intermediate_Cosmetic_Stat_Changed final
{
public:
	class FName                                   Stat_Name;
	int32                                         Stat_Value;
};
static_assert(alignof(B_Athena_PartModifier_Generic_C_Intermediate_Cosmetic_Stat_Changed) == 0x000004, "Wrong alignment on B_Athena_PartModifier_Generic_C_Intermediate_Cosmetic_Stat_Changed");
static_assert(sizeof(B_Athena_PartModifier_Generic_C_Intermediate_Cosmetic_Stat_Changed) == 0x000008, "Wrong size on B_Athena_PartModifier_Generic_C_Intermediate_Cosmetic_Stat_Changed");
static_assert(offsetof(B_Athena_PartModifier_Generic_C_Intermediate_Cosmetic_Stat_Changed, Stat_Name) == 0x000000, "Member 'B_Athena_PartModifier_Generic_C_Intermediate_Cosmetic_Stat_Changed::Stat_Name' has a wrong offset!");
static_assert(offsetof(B_Athena_PartModifier_Generic_C_Intermediate_Cosmetic_Stat_Changed, Stat_Value) == 0x000004, "Member 'B_Athena_PartModifier_Generic_C_Intermediate_Cosmetic_Stat_Changed::Stat_Value' has a wrong offset!");

struct B_Athena_PartModifier_Generic_C_Is_Stage_Stat_Requirements_Met final
{
public:
	int32                                         In_Stage_Number_Begin_Tested;
	int32                                         In_Stage_Threshold;
	int32                                         In_Stat_Value;
	int32                                         Current_Active_Stage_Number_0;
	bool                                          Passed_Requirements;
	bool                                          CallFunc_Greater_IntInt_ReturnValue;
	bool                                          CallFunc_Less_IntInt_ReturnValue;
	bool                                          CallFunc_GreaterEqual_IntInt_ReturnValue;
	bool                                          CallFunc_BooleanAND_ReturnValue;
	bool                                          CallFunc_BooleanAND_ReturnValue_1;
};
static_assert(alignof(B_Athena_PartModifier_Generic_C_Is_Stage_Stat_Requirements_Met) == 0x000004, "Wrong alignment on B_Athena_PartModifier_Generic_C_Is_Stage_Stat_Requirements_Met");
static_assert(sizeof(B_Athena_PartModifier_Generic_C_Is_Stage_Stat_Requirements_Met) == 0x000018, "Wrong size on B_Athena_PartModifier_Generic_C_Is_Stage_Stat_Requirements_Met");
static_assert(offsetof(B_Athena_PartModifier_Generic_C_Is_Stage_Stat_Requirements_Met, In_Stage_Number_Begin_Tested) == 0x000000, "Member 'B_Athena_PartModifier_Generic_C_Is_Stage_Stat_Requirements_Met::In_Stage_Number_Begin_Tested' has a wrong offset!");
static_assert(offsetof(B_Athena_PartModifier_Generic_C_Is_Stage_Stat_Requirements_Met, In_Stage_Threshold) == 0x000004, "Member 'B_Athena_PartModifier_Generic_C_Is_Stage_Stat_Requirements_Met::In_Stage_Threshold' has a wrong offset!");
static_assert(offsetof(B_Athena_PartModifier_Generic_C_Is_Stage_Stat_Requirements_Met, In_Stat_Value) == 0x000008, "Member 'B_Athena_PartModifier_Generic_C_Is_Stage_Stat_Requirements_Met::In_Stat_Value' has a wrong offset!");
static_assert(offsetof(B_Athena_PartModifier_Generic_C_Is_Stage_Stat_Requirements_Met, Current_Active_Stage_Number_0) == 0x00000C, "Member 'B_Athena_PartModifier_Generic_C_Is_Stage_Stat_Requirements_Met::Current_Active_Stage_Number_0' has a wrong offset!");
static_assert(offsetof(B_Athena_PartModifier_Generic_C_Is_Stage_Stat_Requirements_Met, Passed_Requirements) == 0x000010, "Member 'B_Athena_PartModifier_Generic_C_Is_Stage_Stat_Requirements_Met::Passed_Requirements' has a wrong offset!");
static_assert(offsetof(B_Athena_PartModifier_Generic_C_Is_Stage_Stat_Requirements_Met, CallFunc_Greater_IntInt_ReturnValue) == 0x000011, "Member 'B_Athena_PartModifier_Generic_C_Is_Stage_Stat_Requirements_Met::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_Athena_PartModifier_Generic_C_Is_Stage_Stat_Requirements_Met, CallFunc_Less_IntInt_ReturnValue) == 0x000012, "Member 'B_Athena_PartModifier_Generic_C_Is_Stage_Stat_Requirements_Met::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_Athena_PartModifier_Generic_C_Is_Stage_Stat_Requirements_Met, CallFunc_GreaterEqual_IntInt_ReturnValue) == 0x000013, "Member 'B_Athena_PartModifier_Generic_C_Is_Stage_Stat_Requirements_Met::CallFunc_GreaterEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_Athena_PartModifier_Generic_C_Is_Stage_Stat_Requirements_Met, CallFunc_BooleanAND_ReturnValue) == 0x000014, "Member 'B_Athena_PartModifier_Generic_C_Is_Stage_Stat_Requirements_Met::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_Athena_PartModifier_Generic_C_Is_Stage_Stat_Requirements_Met, CallFunc_BooleanAND_ReturnValue_1) == 0x000015, "Member 'B_Athena_PartModifier_Generic_C_Is_Stage_Stat_Requirements_Met::CallFunc_BooleanAND_ReturnValue_1' has a wrong offset!");

struct B_Athena_PartModifier_Generic_C_IsPartModifierHidden final
{
public:
	bool                                          ReturnValue;
	uint8                                         Pad_1[0x7];
	class AFortPlayerPawn*                        CallFunc_GetAssociatedPlayerPawn_ReturnValue;
	class UMeshComponent*                         CallFunc_GetSkeletalMeshForAssociatedPlayerPawnPartType_ReturnValue;
	bool                                          CallFunc_IsInsideHidingProp_ReturnValue;
	bool                                          CallFunc_IsVisible_ReturnValue;
	bool                                          CallFunc_Not_PreBool_ReturnValue;
	bool                                          CallFunc_BooleanOR_ReturnValue;
};
static_assert(alignof(B_Athena_PartModifier_Generic_C_IsPartModifierHidden) == 0x000008, "Wrong alignment on B_Athena_PartModifier_Generic_C_IsPartModifierHidden");
static_assert(sizeof(B_Athena_PartModifier_Generic_C_IsPartModifierHidden) == 0x000020, "Wrong size on B_Athena_PartModifier_Generic_C_IsPartModifierHidden");
static_assert(offsetof(B_Athena_PartModifier_Generic_C_IsPartModifierHidden, ReturnValue) == 0x000000, "Member 'B_Athena_PartModifier_Generic_C_IsPartModifierHidden::ReturnValue' has a wrong offset!");
static_assert(offsetof(B_Athena_PartModifier_Generic_C_IsPartModifierHidden, CallFunc_GetAssociatedPlayerPawn_ReturnValue) == 0x000008, "Member 'B_Athena_PartModifier_Generic_C_IsPartModifierHidden::CallFunc_GetAssociatedPlayerPawn_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_Athena_PartModifier_Generic_C_IsPartModifierHidden, CallFunc_GetSkeletalMeshForAssociatedPlayerPawnPartType_ReturnValue) == 0x000010, "Member 'B_Athena_PartModifier_Generic_C_IsPartModifierHidden::CallFunc_GetSkeletalMeshForAssociatedPlayerPawnPartType_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_Athena_PartModifier_Generic_C_IsPartModifierHidden, CallFunc_IsInsideHidingProp_ReturnValue) == 0x000018, "Member 'B_Athena_PartModifier_Generic_C_IsPartModifierHidden::CallFunc_IsInsideHidingProp_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_Athena_PartModifier_Generic_C_IsPartModifierHidden, CallFunc_IsVisible_ReturnValue) == 0x000019, "Member 'B_Athena_PartModifier_Generic_C_IsPartModifierHidden::CallFunc_IsVisible_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_Athena_PartModifier_Generic_C_IsPartModifierHidden, CallFunc_Not_PreBool_ReturnValue) == 0x00001A, "Member 'B_Athena_PartModifier_Generic_C_IsPartModifierHidden::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_Athena_PartModifier_Generic_C_IsPartModifierHidden, CallFunc_BooleanOR_ReturnValue) == 0x00001B, "Member 'B_Athena_PartModifier_Generic_C_IsPartModifierHidden::CallFunc_BooleanOR_ReturnValue' has a wrong offset!");

struct B_Athena_PartModifier_Generic_C_On_Begin_Emote final
{
public:
	const class UFortItemDefinition*              MontageItemDef;
	class AFortPawn*                              PawnEmoting;
};
static_assert(alignof(B_Athena_PartModifier_Generic_C_On_Begin_Emote) == 0x000008, "Wrong alignment on B_Athena_PartModifier_Generic_C_On_Begin_Emote");
static_assert(sizeof(B_Athena_PartModifier_Generic_C_On_Begin_Emote) == 0x000010, "Wrong size on B_Athena_PartModifier_Generic_C_On_Begin_Emote");
static_assert(offsetof(B_Athena_PartModifier_Generic_C_On_Begin_Emote, MontageItemDef) == 0x000000, "Member 'B_Athena_PartModifier_Generic_C_On_Begin_Emote::MontageItemDef' has a wrong offset!");
static_assert(offsetof(B_Athena_PartModifier_Generic_C_On_Begin_Emote, PawnEmoting) == 0x000008, "Member 'B_Athena_PartModifier_Generic_C_On_Begin_Emote::PawnEmoting' has a wrong offset!");

struct B_Athena_PartModifier_Generic_C_On_Character_Movement_Updated final
{
public:
	float                                         DeltaSeconds;
	uint8                                         Pad_4[0x4];
	struct FVector                                OldLocation;
	struct FVector                                OldVelocity;
};
static_assert(alignof(B_Athena_PartModifier_Generic_C_On_Character_Movement_Updated) == 0x000008, "Wrong alignment on B_Athena_PartModifier_Generic_C_On_Character_Movement_Updated");
static_assert(sizeof(B_Athena_PartModifier_Generic_C_On_Character_Movement_Updated) == 0x000038, "Wrong size on B_Athena_PartModifier_Generic_C_On_Character_Movement_Updated");
static_assert(offsetof(B_Athena_PartModifier_Generic_C_On_Character_Movement_Updated, DeltaSeconds) == 0x000000, "Member 'B_Athena_PartModifier_Generic_C_On_Character_Movement_Updated::DeltaSeconds' has a wrong offset!");
static_assert(offsetof(B_Athena_PartModifier_Generic_C_On_Character_Movement_Updated, OldLocation) == 0x000008, "Member 'B_Athena_PartModifier_Generic_C_On_Character_Movement_Updated::OldLocation' has a wrong offset!");
static_assert(offsetof(B_Athena_PartModifier_Generic_C_On_Character_Movement_Updated, OldVelocity) == 0x000020, "Member 'B_Athena_PartModifier_Generic_C_On_Character_Movement_Updated::OldVelocity' has a wrong offset!");

struct B_Athena_PartModifier_Generic_C_On_Cosmetic_State_Activated final
{
public:
	class FName                                   Stat_Name;
	int32                                         Stat_Value;
	int32                                         STAGE_Num_Being_Activated;
};
static_assert(alignof(B_Athena_PartModifier_Generic_C_On_Cosmetic_State_Activated) == 0x000004, "Wrong alignment on B_Athena_PartModifier_Generic_C_On_Cosmetic_State_Activated");
static_assert(sizeof(B_Athena_PartModifier_Generic_C_On_Cosmetic_State_Activated) == 0x00000C, "Wrong size on B_Athena_PartModifier_Generic_C_On_Cosmetic_State_Activated");
static_assert(offsetof(B_Athena_PartModifier_Generic_C_On_Cosmetic_State_Activated, Stat_Name) == 0x000000, "Member 'B_Athena_PartModifier_Generic_C_On_Cosmetic_State_Activated::Stat_Name' has a wrong offset!");
static_assert(offsetof(B_Athena_PartModifier_Generic_C_On_Cosmetic_State_Activated, Stat_Value) == 0x000004, "Member 'B_Athena_PartModifier_Generic_C_On_Cosmetic_State_Activated::Stat_Value' has a wrong offset!");
static_assert(offsetof(B_Athena_PartModifier_Generic_C_On_Cosmetic_State_Activated, STAGE_Num_Being_Activated) == 0x000008, "Member 'B_Athena_PartModifier_Generic_C_On_Cosmetic_State_Activated::STAGE_Num_Being_Activated' has a wrong offset!");

struct B_Athena_PartModifier_Generic_C_On_End_Emote final
{
public:
	const class UFortItemDefinition*              MontageItemDef;
	class AFortPawn*                              PawnEmoting;
};
static_assert(alignof(B_Athena_PartModifier_Generic_C_On_End_Emote) == 0x000008, "Wrong alignment on B_Athena_PartModifier_Generic_C_On_End_Emote");
static_assert(sizeof(B_Athena_PartModifier_Generic_C_On_End_Emote) == 0x000010, "Wrong size on B_Athena_PartModifier_Generic_C_On_End_Emote");
static_assert(offsetof(B_Athena_PartModifier_Generic_C_On_End_Emote, MontageItemDef) == 0x000000, "Member 'B_Athena_PartModifier_Generic_C_On_End_Emote::MontageItemDef' has a wrong offset!");
static_assert(offsetof(B_Athena_PartModifier_Generic_C_On_End_Emote, PawnEmoting) == 0x000008, "Member 'B_Athena_PartModifier_Generic_C_On_End_Emote::PawnEmoting' has a wrong offset!");

struct B_Athena_PartModifier_Generic_C_On_Players_Left_Changed final
{
public:
	int32                                         Total_Players_Left;
};
static_assert(alignof(B_Athena_PartModifier_Generic_C_On_Players_Left_Changed) == 0x000004, "Wrong alignment on B_Athena_PartModifier_Generic_C_On_Players_Left_Changed");
static_assert(sizeof(B_Athena_PartModifier_Generic_C_On_Players_Left_Changed) == 0x000004, "Wrong size on B_Athena_PartModifier_Generic_C_On_Players_Left_Changed");
static_assert(offsetof(B_Athena_PartModifier_Generic_C_On_Players_Left_Changed, Total_Players_Left) == 0x000000, "Member 'B_Athena_PartModifier_Generic_C_On_Players_Left_Changed::Total_Players_Left' has a wrong offset!");

struct B_Athena_PartModifier_Generic_C_On_Stat_Changed final
{
public:
	class FName                                   State_Name;
	int32                                         Stat_Value;
};
static_assert(alignof(B_Athena_PartModifier_Generic_C_On_Stat_Changed) == 0x000004, "Wrong alignment on B_Athena_PartModifier_Generic_C_On_Stat_Changed");
static_assert(sizeof(B_Athena_PartModifier_Generic_C_On_Stat_Changed) == 0x000008, "Wrong size on B_Athena_PartModifier_Generic_C_On_Stat_Changed");
static_assert(offsetof(B_Athena_PartModifier_Generic_C_On_Stat_Changed, State_Name) == 0x000000, "Member 'B_Athena_PartModifier_Generic_C_On_Stat_Changed::State_Name' has a wrong offset!");
static_assert(offsetof(B_Athena_PartModifier_Generic_C_On_Stat_Changed, Stat_Value) == 0x000004, "Member 'B_Athena_PartModifier_Generic_C_On_Stat_Changed::Stat_Value' has a wrong offset!");

struct B_Athena_PartModifier_Generic_C_OnEnterVehicle final
{
public:
	TScriptInterface<class IFortVehicleInterface> VehicleEntered;
};
static_assert(alignof(B_Athena_PartModifier_Generic_C_OnEnterVehicle) == 0x000008, "Wrong alignment on B_Athena_PartModifier_Generic_C_OnEnterVehicle");
static_assert(sizeof(B_Athena_PartModifier_Generic_C_OnEnterVehicle) == 0x000010, "Wrong size on B_Athena_PartModifier_Generic_C_OnEnterVehicle");
static_assert(offsetof(B_Athena_PartModifier_Generic_C_OnEnterVehicle, VehicleEntered) == 0x000000, "Member 'B_Athena_PartModifier_Generic_C_OnEnterVehicle::VehicleEntered' has a wrong offset!");

struct B_Athena_PartModifier_Generic_C_OnNewPlayerWeaponType final
{
public:
	EFortItemType                                 NewType;
	EFortItemType                                 OldType;
};
static_assert(alignof(B_Athena_PartModifier_Generic_C_OnNewPlayerWeaponType) == 0x000001, "Wrong alignment on B_Athena_PartModifier_Generic_C_OnNewPlayerWeaponType");
static_assert(sizeof(B_Athena_PartModifier_Generic_C_OnNewPlayerWeaponType) == 0x000002, "Wrong size on B_Athena_PartModifier_Generic_C_OnNewPlayerWeaponType");
static_assert(offsetof(B_Athena_PartModifier_Generic_C_OnNewPlayerWeaponType, NewType) == 0x000000, "Member 'B_Athena_PartModifier_Generic_C_OnNewPlayerWeaponType::NewType' has a wrong offset!");
static_assert(offsetof(B_Athena_PartModifier_Generic_C_OnNewPlayerWeaponType, OldType) == 0x000001, "Member 'B_Athena_PartModifier_Generic_C_OnNewPlayerWeaponType::OldType' has a wrong offset!");

struct B_Athena_PartModifier_Generic_C_OnStatChanged_56336B1A4612C0356DFB75BC1D618B4F final
{
public:
	class FName                                   StatName;
	int32                                         StatValue;
};
static_assert(alignof(B_Athena_PartModifier_Generic_C_OnStatChanged_56336B1A4612C0356DFB75BC1D618B4F) == 0x000004, "Wrong alignment on B_Athena_PartModifier_Generic_C_OnStatChanged_56336B1A4612C0356DFB75BC1D618B4F");
static_assert(sizeof(B_Athena_PartModifier_Generic_C_OnStatChanged_56336B1A4612C0356DFB75BC1D618B4F) == 0x000008, "Wrong size on B_Athena_PartModifier_Generic_C_OnStatChanged_56336B1A4612C0356DFB75BC1D618B4F");
static_assert(offsetof(B_Athena_PartModifier_Generic_C_OnStatChanged_56336B1A4612C0356DFB75BC1D618B4F, StatName) == 0x000000, "Member 'B_Athena_PartModifier_Generic_C_OnStatChanged_56336B1A4612C0356DFB75BC1D618B4F::StatName' has a wrong offset!");
static_assert(offsetof(B_Athena_PartModifier_Generic_C_OnStatChanged_56336B1A4612C0356DFB75BC1D618B4F, StatValue) == 0x000004, "Member 'B_Athena_PartModifier_Generic_C_OnStatChanged_56336B1A4612C0356DFB75BC1D618B4F::StatValue' has a wrong offset!");

struct B_Athena_PartModifier_Generic_C_PlayLibrarySound final
{
public:
	class FName                                   StatName;
	int32                                         StatValue;
	struct FFortStatManagerTag                    StatTag;
	bool                                          Success;
	uint8                                         Pad_D[0x3];
	class UAudioComponent*                        Output;
	bool                                          CallFunc_Greater_IntInt_ReturnValue;
	uint8                                         Pad_19[0x7];
	class AFortPlayerPawn*                        CallFunc_GetAssociatedPlayerPawn_ReturnValue;
	struct FGameplayTag                           CallFunc_Map_Find_Value;
	bool                                          CallFunc_Map_Find_ReturnValue;
	bool                                          CallFunc_IsValid_ReturnValue;
	bool                                          CallFunc_BooleanAND_ReturnValue;
	uint8                                         Pad_2F[0x1];
	class USoundLibrarySubsystem*                 CallFunc_GetWorldSubsystem_ReturnValue;
	class UMeshComponent*                         CallFunc_GetSkeletalMeshForAssociatedPlayerPawnPartType_ReturnValue;
	struct FSoundLibrarySimpleContextSettings     K2Node_MakeStruct_SoundLibrarySimpleContextSettings;
	struct FSoundLibraryPlaySoundResult           CallFunc_PlaySoundSimple_ReturnValue;
	bool                                          CallFunc_Array_IsValidIndex_ReturnValue;
	uint8                                         Pad_C1[0x7];
	class UAudioComponent*                        CallFunc_Array_Get_Item;
};
static_assert(alignof(B_Athena_PartModifier_Generic_C_PlayLibrarySound) == 0x000008, "Wrong alignment on B_Athena_PartModifier_Generic_C_PlayLibrarySound");
static_assert(sizeof(B_Athena_PartModifier_Generic_C_PlayLibrarySound) == 0x0000D0, "Wrong size on B_Athena_PartModifier_Generic_C_PlayLibrarySound");
static_assert(offsetof(B_Athena_PartModifier_Generic_C_PlayLibrarySound, StatName) == 0x000000, "Member 'B_Athena_PartModifier_Generic_C_PlayLibrarySound::StatName' has a wrong offset!");
static_assert(offsetof(B_Athena_PartModifier_Generic_C_PlayLibrarySound, StatValue) == 0x000004, "Member 'B_Athena_PartModifier_Generic_C_PlayLibrarySound::StatValue' has a wrong offset!");
static_assert(offsetof(B_Athena_PartModifier_Generic_C_PlayLibrarySound, StatTag) == 0x000008, "Member 'B_Athena_PartModifier_Generic_C_PlayLibrarySound::StatTag' has a wrong offset!");
static_assert(offsetof(B_Athena_PartModifier_Generic_C_PlayLibrarySound, Success) == 0x00000C, "Member 'B_Athena_PartModifier_Generic_C_PlayLibrarySound::Success' has a wrong offset!");
static_assert(offsetof(B_Athena_PartModifier_Generic_C_PlayLibrarySound, Output) == 0x000010, "Member 'B_Athena_PartModifier_Generic_C_PlayLibrarySound::Output' has a wrong offset!");
static_assert(offsetof(B_Athena_PartModifier_Generic_C_PlayLibrarySound, CallFunc_Greater_IntInt_ReturnValue) == 0x000018, "Member 'B_Athena_PartModifier_Generic_C_PlayLibrarySound::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_Athena_PartModifier_Generic_C_PlayLibrarySound, CallFunc_GetAssociatedPlayerPawn_ReturnValue) == 0x000020, "Member 'B_Athena_PartModifier_Generic_C_PlayLibrarySound::CallFunc_GetAssociatedPlayerPawn_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_Athena_PartModifier_Generic_C_PlayLibrarySound, CallFunc_Map_Find_Value) == 0x000028, "Member 'B_Athena_PartModifier_Generic_C_PlayLibrarySound::CallFunc_Map_Find_Value' has a wrong offset!");
static_assert(offsetof(B_Athena_PartModifier_Generic_C_PlayLibrarySound, CallFunc_Map_Find_ReturnValue) == 0x00002C, "Member 'B_Athena_PartModifier_Generic_C_PlayLibrarySound::CallFunc_Map_Find_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_Athena_PartModifier_Generic_C_PlayLibrarySound, CallFunc_IsValid_ReturnValue) == 0x00002D, "Member 'B_Athena_PartModifier_Generic_C_PlayLibrarySound::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_Athena_PartModifier_Generic_C_PlayLibrarySound, CallFunc_BooleanAND_ReturnValue) == 0x00002E, "Member 'B_Athena_PartModifier_Generic_C_PlayLibrarySound::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_Athena_PartModifier_Generic_C_PlayLibrarySound, CallFunc_GetWorldSubsystem_ReturnValue) == 0x000030, "Member 'B_Athena_PartModifier_Generic_C_PlayLibrarySound::CallFunc_GetWorldSubsystem_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_Athena_PartModifier_Generic_C_PlayLibrarySound, CallFunc_GetSkeletalMeshForAssociatedPlayerPawnPartType_ReturnValue) == 0x000038, "Member 'B_Athena_PartModifier_Generic_C_PlayLibrarySound::CallFunc_GetSkeletalMeshForAssociatedPlayerPawnPartType_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_Athena_PartModifier_Generic_C_PlayLibrarySound, K2Node_MakeStruct_SoundLibrarySimpleContextSettings) == 0x000040, "Member 'B_Athena_PartModifier_Generic_C_PlayLibrarySound::K2Node_MakeStruct_SoundLibrarySimpleContextSettings' has a wrong offset!");
static_assert(offsetof(B_Athena_PartModifier_Generic_C_PlayLibrarySound, CallFunc_PlaySoundSimple_ReturnValue) == 0x000098, "Member 'B_Athena_PartModifier_Generic_C_PlayLibrarySound::CallFunc_PlaySoundSimple_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_Athena_PartModifier_Generic_C_PlayLibrarySound, CallFunc_Array_IsValidIndex_ReturnValue) == 0x0000C0, "Member 'B_Athena_PartModifier_Generic_C_PlayLibrarySound::CallFunc_Array_IsValidIndex_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_Athena_PartModifier_Generic_C_PlayLibrarySound, CallFunc_Array_Get_Item) == 0x0000C8, "Member 'B_Athena_PartModifier_Generic_C_PlayLibrarySound::CallFunc_Array_Get_Item' has a wrong offset!");

struct B_Athena_PartModifier_Generic_C_Track_Players_Left final
{
public:
	int32                                         NumPlayersLeft;
};
static_assert(alignof(B_Athena_PartModifier_Generic_C_Track_Players_Left) == 0x000004, "Wrong alignment on B_Athena_PartModifier_Generic_C_Track_Players_Left");
static_assert(sizeof(B_Athena_PartModifier_Generic_C_Track_Players_Left) == 0x000004, "Wrong size on B_Athena_PartModifier_Generic_C_Track_Players_Left");
static_assert(offsetof(B_Athena_PartModifier_Generic_C_Track_Players_Left, NumPlayersLeft) == 0x000000, "Member 'B_Athena_PartModifier_Generic_C_Track_Players_Left::NumPlayersLeft' has a wrong offset!");

struct B_Athena_PartModifier_Generic_C_UpdateAudioStatValue final
{
public:
	class UAudioComponent*                        AudioComponent;
	int32                                         StatValue;
};
static_assert(alignof(B_Athena_PartModifier_Generic_C_UpdateAudioStatValue) == 0x000008, "Wrong alignment on B_Athena_PartModifier_Generic_C_UpdateAudioStatValue");
static_assert(sizeof(B_Athena_PartModifier_Generic_C_UpdateAudioStatValue) == 0x000010, "Wrong size on B_Athena_PartModifier_Generic_C_UpdateAudioStatValue");
static_assert(offsetof(B_Athena_PartModifier_Generic_C_UpdateAudioStatValue, AudioComponent) == 0x000000, "Member 'B_Athena_PartModifier_Generic_C_UpdateAudioStatValue::AudioComponent' has a wrong offset!");
static_assert(offsetof(B_Athena_PartModifier_Generic_C_UpdateAudioStatValue, StatValue) == 0x000008, "Member 'B_Athena_PartModifier_Generic_C_UpdateAudioStatValue::StatValue' has a wrong offset!");

}
