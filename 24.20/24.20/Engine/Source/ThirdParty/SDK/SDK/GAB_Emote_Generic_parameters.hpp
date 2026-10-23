#pragma once

#include "Basic.hpp"

#include "GameplayTags_structs.hpp"
#include "FortniteGame_structs.hpp"
#include "GameplayAbilities_structs.hpp"
#include "CoreUObject_structs.hpp"

namespace SDK::Params
{

struct GAB_Emote_Generic_C_Cancelled_DE7019AA4E006879EDD264899869FEE2 final
{
public:
	struct FGameplayAbilityTargetDataHandle       TargetData;
	struct FGameplayTag                           ApplicationTag;
};
static_assert(alignof(GAB_Emote_Generic_C_Cancelled_DE7019AA4E006879EDD264899869FEE2) == 0x000008, "Wrong alignment on GAB_Emote_Generic_C_Cancelled_DE7019AA4E006879EDD264899869FEE2");
static_assert(sizeof(GAB_Emote_Generic_C_Cancelled_DE7019AA4E006879EDD264899869FEE2) == 0x000030, "Wrong size on GAB_Emote_Generic_C_Cancelled_DE7019AA4E006879EDD264899869FEE2");
static_assert(offsetof(GAB_Emote_Generic_C_Cancelled_DE7019AA4E006879EDD264899869FEE2, TargetData) == 0x000000, "Member 'GAB_Emote_Generic_C_Cancelled_DE7019AA4E006879EDD264899869FEE2::TargetData' has a wrong offset!");
static_assert(offsetof(GAB_Emote_Generic_C_Cancelled_DE7019AA4E006879EDD264899869FEE2, ApplicationTag) == 0x000028, "Member 'GAB_Emote_Generic_C_Cancelled_DE7019AA4E006879EDD264899869FEE2::ApplicationTag' has a wrong offset!");

struct GAB_Emote_Generic_C_Completed_DE7019AA4E006879EDD264899869FEE2 final
{
public:
	struct FGameplayAbilityTargetDataHandle       TargetData;
	struct FGameplayTag                           ApplicationTag;
};
static_assert(alignof(GAB_Emote_Generic_C_Completed_DE7019AA4E006879EDD264899869FEE2) == 0x000008, "Wrong alignment on GAB_Emote_Generic_C_Completed_DE7019AA4E006879EDD264899869FEE2");
static_assert(sizeof(GAB_Emote_Generic_C_Completed_DE7019AA4E006879EDD264899869FEE2) == 0x000030, "Wrong size on GAB_Emote_Generic_C_Completed_DE7019AA4E006879EDD264899869FEE2");
static_assert(offsetof(GAB_Emote_Generic_C_Completed_DE7019AA4E006879EDD264899869FEE2, TargetData) == 0x000000, "Member 'GAB_Emote_Generic_C_Completed_DE7019AA4E006879EDD264899869FEE2::TargetData' has a wrong offset!");
static_assert(offsetof(GAB_Emote_Generic_C_Completed_DE7019AA4E006879EDD264899869FEE2, ApplicationTag) == 0x000028, "Member 'GAB_Emote_Generic_C_Completed_DE7019AA4E006879EDD264899869FEE2::ApplicationTag' has a wrong offset!");

struct GAB_Emote_Generic_C_ExecuteUbergraph_GAB_Emote_Generic final
{
public:
	int32                                         EntryPoint;
	TDelegate<void(struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag)> K2Node_CreateDelegate_OutputDelegate;
	int32                                         Temp_int_Array_Index_Variable;
	int32                                         Temp_int_Loop_Counter_Variable;
	int32                                         CallFunc_Add_IntInt_ReturnValue;
	uint8                                         Pad_1C[0x4];
	class UFortAbilityTask_PlayMontageWaitTarget* CallFunc_PlayMontageInfoAndWaitForTrigger_ReturnValue;
	bool                                          CallFunc_IsValid_ReturnValue;
	uint8                                         Pad_29[0x3];
	float                                         CallFunc_GetDefaultBlendOutTime_ReturnValue;
	bool                                          CallFunc_IsValid_ReturnValue_1;
	uint8                                         Pad_31[0x7];
	class UObject*                                CallFunc_GetCurrentSourceObject_ReturnValue;
	class UFortMontageItemDefinitionBase*         K2Node_DynamicCast_AsFort_Montage_Item_Definition_Base;
	bool                                          K2Node_DynamicCast_bSuccess;
	EFortCustomBodyType                           CallFunc_GetBodyTypeAndGender_BodyType;
	EFortCustomGender                             CallFunc_GetBodyTypeAndGender_Gender;
	uint8                                         Pad_4B[0x5];
	class UObject*                                Temp_object_Variable;
	TSoftObjectPtr<class UAnimMontage>            CallFunc_GetMontageToPlay_ReturnValue;
	class UObject*                                K2Node_CustomEvent_Loaded;
	bool                                          CallFunc_IsAssetNull_ReturnValue;
	uint8                                         Pad_89[0x7];
	class AFortPawn*                              CallFunc_GetActivatingPawn_ReturnValue;
	int32                                         Temp_int_Variable;
	bool                                          CallFunc_IsValid_ReturnValue_2;
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue;
	uint8                                         Pad_9E[0x2];
	class AFortPawn*                              CallFunc_GetActivatingPawn_ReturnValue_1;
	class AFortPlayerPawn*                        K2Node_DynamicCast_AsFort_Player_Pawn;
	bool                                          K2Node_DynamicCast_bSuccess_1;
	uint8                                         Pad_B1[0x7];
	class UObject*                                CallFunc_GetCurrentSourceObject_ReturnValue_1;
	class UFortMontageItemDefinitionBase*         K2Node_DynamicCast_AsFort_Montage_Item_Definition_Base_1;
	bool                                          K2Node_DynamicCast_bSuccess_2;
	uint8                                         Pad_C9[0x7];
	class FString                                 CallFunc_GetPersistentName_ReturnValue;
	class UObject*                                Temp_object_Variable_1;
	class FName                                   CallFunc_Conv_StringToName_ReturnValue;
	uint8                                         Pad_EC[0x4];
	class UAnimMontage*                           K2Node_DynamicCast_AsAnim_Montage;
	bool                                          K2Node_DynamicCast_bSuccess_3;
	bool                                          CallFunc_IsMontagePlaying_Result;
	bool                                          CallFunc_ShouldHolsterWeapon_ReturnValue;
	uint8                                         Pad_FB[0x5];
	class UObject*                                K2Node_CustomEvent_Loaded_1;
	class FName                                   CallFunc_PickMontageSection_ReturnValue;
	TDelegate<void(class UObject* Loaded)>        K2Node_CreateDelegate_OutputDelegate_1;
	class AFortPawn*                              CallFunc_GetActivatingPawn_ReturnValue_2;
	struct FGameplayAbilityTargetDataHandle       Temp_struct_Variable;
	class AFortPlayerPawnAthena*                  K2Node_DynamicCast_AsFort_Player_Pawn_Athena;
	bool                                          K2Node_DynamicCast_bSuccess_4;
	uint8                                         Pad_151[0x7];
	TArray<struct FSoftObjectPath>                CallFunc_GatherVariantAssets_VariantAssetsNeeded;
	int32                                         CallFunc_Subtract_IntInt_ReturnValue;
	uint8                                         Pad_16C[0x4];
	struct FSoftObjectPath                        CallFunc_Array_Get_Item;
	TSoftObjectPtr<class UObject>                 CallFunc_Conv_SoftObjPathToSoftObjRef_ReturnValue;
	int32                                         CallFunc_Array_Length_ReturnValue;
	bool                                          CallFunc_Less_IntInt_ReturnValue;
	uint8                                         Pad_1B5[0x3];
	int32                                         CallFunc_Array_Length_ReturnValue_1;
	bool                                          CallFunc_Conv_IntToBool_ReturnValue;
	uint8                                         Pad_1BD[0x3];
	TDelegate<void(class UObject* Loaded)>        K2Node_CreateDelegate_OutputDelegate_2;
	struct FGameplayTag                           Temp_struct_Variable_1;
	struct FGameplayAbilityTargetDataHandle       K2Node_CustomEvent_TargetData;
	struct FGameplayTag                           K2Node_CustomEvent_ApplicationTag;
	TDelegate<void(struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag)> K2Node_CreateDelegate_OutputDelegate_3;
	struct FGameplayAbilityTargetDataHandle       K2Node_CustomEvent_TargetData_1;
	struct FGameplayTag                           K2Node_CustomEvent_ApplicationTag_1;
	TDelegate<void(struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag)> K2Node_CreateDelegate_OutputDelegate_4;
	struct FGameplayAbilityTargetDataHandle       K2Node_CustomEvent_TargetData_2;
	struct FGameplayTag                           K2Node_CustomEvent_ApplicationTag_2;
};
static_assert(alignof(GAB_Emote_Generic_C_ExecuteUbergraph_GAB_Emote_Generic) == 0x000008, "Wrong alignment on GAB_Emote_Generic_C_ExecuteUbergraph_GAB_Emote_Generic");
static_assert(sizeof(GAB_Emote_Generic_C_ExecuteUbergraph_GAB_Emote_Generic) == 0x000270, "Wrong size on GAB_Emote_Generic_C_ExecuteUbergraph_GAB_Emote_Generic");
static_assert(offsetof(GAB_Emote_Generic_C_ExecuteUbergraph_GAB_Emote_Generic, EntryPoint) == 0x000000, "Member 'GAB_Emote_Generic_C_ExecuteUbergraph_GAB_Emote_Generic::EntryPoint' has a wrong offset!");
static_assert(offsetof(GAB_Emote_Generic_C_ExecuteUbergraph_GAB_Emote_Generic, K2Node_CreateDelegate_OutputDelegate) == 0x000004, "Member 'GAB_Emote_Generic_C_ExecuteUbergraph_GAB_Emote_Generic::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(GAB_Emote_Generic_C_ExecuteUbergraph_GAB_Emote_Generic, Temp_int_Array_Index_Variable) == 0x000010, "Member 'GAB_Emote_Generic_C_ExecuteUbergraph_GAB_Emote_Generic::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(GAB_Emote_Generic_C_ExecuteUbergraph_GAB_Emote_Generic, Temp_int_Loop_Counter_Variable) == 0x000014, "Member 'GAB_Emote_Generic_C_ExecuteUbergraph_GAB_Emote_Generic::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(GAB_Emote_Generic_C_ExecuteUbergraph_GAB_Emote_Generic, CallFunc_Add_IntInt_ReturnValue) == 0x000018, "Member 'GAB_Emote_Generic_C_ExecuteUbergraph_GAB_Emote_Generic::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(GAB_Emote_Generic_C_ExecuteUbergraph_GAB_Emote_Generic, CallFunc_PlayMontageInfoAndWaitForTrigger_ReturnValue) == 0x000020, "Member 'GAB_Emote_Generic_C_ExecuteUbergraph_GAB_Emote_Generic::CallFunc_PlayMontageInfoAndWaitForTrigger_ReturnValue' has a wrong offset!");
static_assert(offsetof(GAB_Emote_Generic_C_ExecuteUbergraph_GAB_Emote_Generic, CallFunc_IsValid_ReturnValue) == 0x000028, "Member 'GAB_Emote_Generic_C_ExecuteUbergraph_GAB_Emote_Generic::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(GAB_Emote_Generic_C_ExecuteUbergraph_GAB_Emote_Generic, CallFunc_GetDefaultBlendOutTime_ReturnValue) == 0x00002C, "Member 'GAB_Emote_Generic_C_ExecuteUbergraph_GAB_Emote_Generic::CallFunc_GetDefaultBlendOutTime_ReturnValue' has a wrong offset!");
static_assert(offsetof(GAB_Emote_Generic_C_ExecuteUbergraph_GAB_Emote_Generic, CallFunc_IsValid_ReturnValue_1) == 0x000030, "Member 'GAB_Emote_Generic_C_ExecuteUbergraph_GAB_Emote_Generic::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GAB_Emote_Generic_C_ExecuteUbergraph_GAB_Emote_Generic, CallFunc_GetCurrentSourceObject_ReturnValue) == 0x000038, "Member 'GAB_Emote_Generic_C_ExecuteUbergraph_GAB_Emote_Generic::CallFunc_GetCurrentSourceObject_ReturnValue' has a wrong offset!");
static_assert(offsetof(GAB_Emote_Generic_C_ExecuteUbergraph_GAB_Emote_Generic, K2Node_DynamicCast_AsFort_Montage_Item_Definition_Base) == 0x000040, "Member 'GAB_Emote_Generic_C_ExecuteUbergraph_GAB_Emote_Generic::K2Node_DynamicCast_AsFort_Montage_Item_Definition_Base' has a wrong offset!");
static_assert(offsetof(GAB_Emote_Generic_C_ExecuteUbergraph_GAB_Emote_Generic, K2Node_DynamicCast_bSuccess) == 0x000048, "Member 'GAB_Emote_Generic_C_ExecuteUbergraph_GAB_Emote_Generic::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(GAB_Emote_Generic_C_ExecuteUbergraph_GAB_Emote_Generic, CallFunc_GetBodyTypeAndGender_BodyType) == 0x000049, "Member 'GAB_Emote_Generic_C_ExecuteUbergraph_GAB_Emote_Generic::CallFunc_GetBodyTypeAndGender_BodyType' has a wrong offset!");
static_assert(offsetof(GAB_Emote_Generic_C_ExecuteUbergraph_GAB_Emote_Generic, CallFunc_GetBodyTypeAndGender_Gender) == 0x00004A, "Member 'GAB_Emote_Generic_C_ExecuteUbergraph_GAB_Emote_Generic::CallFunc_GetBodyTypeAndGender_Gender' has a wrong offset!");
static_assert(offsetof(GAB_Emote_Generic_C_ExecuteUbergraph_GAB_Emote_Generic, Temp_object_Variable) == 0x000050, "Member 'GAB_Emote_Generic_C_ExecuteUbergraph_GAB_Emote_Generic::Temp_object_Variable' has a wrong offset!");
static_assert(offsetof(GAB_Emote_Generic_C_ExecuteUbergraph_GAB_Emote_Generic, CallFunc_GetMontageToPlay_ReturnValue) == 0x000058, "Member 'GAB_Emote_Generic_C_ExecuteUbergraph_GAB_Emote_Generic::CallFunc_GetMontageToPlay_ReturnValue' has a wrong offset!");
static_assert(offsetof(GAB_Emote_Generic_C_ExecuteUbergraph_GAB_Emote_Generic, K2Node_CustomEvent_Loaded) == 0x000080, "Member 'GAB_Emote_Generic_C_ExecuteUbergraph_GAB_Emote_Generic::K2Node_CustomEvent_Loaded' has a wrong offset!");
static_assert(offsetof(GAB_Emote_Generic_C_ExecuteUbergraph_GAB_Emote_Generic, CallFunc_IsAssetNull_ReturnValue) == 0x000088, "Member 'GAB_Emote_Generic_C_ExecuteUbergraph_GAB_Emote_Generic::CallFunc_IsAssetNull_ReturnValue' has a wrong offset!");
static_assert(offsetof(GAB_Emote_Generic_C_ExecuteUbergraph_GAB_Emote_Generic, CallFunc_GetActivatingPawn_ReturnValue) == 0x000090, "Member 'GAB_Emote_Generic_C_ExecuteUbergraph_GAB_Emote_Generic::CallFunc_GetActivatingPawn_ReturnValue' has a wrong offset!");
static_assert(offsetof(GAB_Emote_Generic_C_ExecuteUbergraph_GAB_Emote_Generic, Temp_int_Variable) == 0x000098, "Member 'GAB_Emote_Generic_C_ExecuteUbergraph_GAB_Emote_Generic::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(GAB_Emote_Generic_C_ExecuteUbergraph_GAB_Emote_Generic, CallFunc_IsValid_ReturnValue_2) == 0x00009C, "Member 'GAB_Emote_Generic_C_ExecuteUbergraph_GAB_Emote_Generic::CallFunc_IsValid_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(GAB_Emote_Generic_C_ExecuteUbergraph_GAB_Emote_Generic, CallFunc_EqualEqual_IntInt_ReturnValue) == 0x00009D, "Member 'GAB_Emote_Generic_C_ExecuteUbergraph_GAB_Emote_Generic::CallFunc_EqualEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(GAB_Emote_Generic_C_ExecuteUbergraph_GAB_Emote_Generic, CallFunc_GetActivatingPawn_ReturnValue_1) == 0x0000A0, "Member 'GAB_Emote_Generic_C_ExecuteUbergraph_GAB_Emote_Generic::CallFunc_GetActivatingPawn_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GAB_Emote_Generic_C_ExecuteUbergraph_GAB_Emote_Generic, K2Node_DynamicCast_AsFort_Player_Pawn) == 0x0000A8, "Member 'GAB_Emote_Generic_C_ExecuteUbergraph_GAB_Emote_Generic::K2Node_DynamicCast_AsFort_Player_Pawn' has a wrong offset!");
static_assert(offsetof(GAB_Emote_Generic_C_ExecuteUbergraph_GAB_Emote_Generic, K2Node_DynamicCast_bSuccess_1) == 0x0000B0, "Member 'GAB_Emote_Generic_C_ExecuteUbergraph_GAB_Emote_Generic::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(GAB_Emote_Generic_C_ExecuteUbergraph_GAB_Emote_Generic, CallFunc_GetCurrentSourceObject_ReturnValue_1) == 0x0000B8, "Member 'GAB_Emote_Generic_C_ExecuteUbergraph_GAB_Emote_Generic::CallFunc_GetCurrentSourceObject_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GAB_Emote_Generic_C_ExecuteUbergraph_GAB_Emote_Generic, K2Node_DynamicCast_AsFort_Montage_Item_Definition_Base_1) == 0x0000C0, "Member 'GAB_Emote_Generic_C_ExecuteUbergraph_GAB_Emote_Generic::K2Node_DynamicCast_AsFort_Montage_Item_Definition_Base_1' has a wrong offset!");
static_assert(offsetof(GAB_Emote_Generic_C_ExecuteUbergraph_GAB_Emote_Generic, K2Node_DynamicCast_bSuccess_2) == 0x0000C8, "Member 'GAB_Emote_Generic_C_ExecuteUbergraph_GAB_Emote_Generic::K2Node_DynamicCast_bSuccess_2' has a wrong offset!");
static_assert(offsetof(GAB_Emote_Generic_C_ExecuteUbergraph_GAB_Emote_Generic, CallFunc_GetPersistentName_ReturnValue) == 0x0000D0, "Member 'GAB_Emote_Generic_C_ExecuteUbergraph_GAB_Emote_Generic::CallFunc_GetPersistentName_ReturnValue' has a wrong offset!");
static_assert(offsetof(GAB_Emote_Generic_C_ExecuteUbergraph_GAB_Emote_Generic, Temp_object_Variable_1) == 0x0000E0, "Member 'GAB_Emote_Generic_C_ExecuteUbergraph_GAB_Emote_Generic::Temp_object_Variable_1' has a wrong offset!");
static_assert(offsetof(GAB_Emote_Generic_C_ExecuteUbergraph_GAB_Emote_Generic, CallFunc_Conv_StringToName_ReturnValue) == 0x0000E8, "Member 'GAB_Emote_Generic_C_ExecuteUbergraph_GAB_Emote_Generic::CallFunc_Conv_StringToName_ReturnValue' has a wrong offset!");
static_assert(offsetof(GAB_Emote_Generic_C_ExecuteUbergraph_GAB_Emote_Generic, K2Node_DynamicCast_AsAnim_Montage) == 0x0000F0, "Member 'GAB_Emote_Generic_C_ExecuteUbergraph_GAB_Emote_Generic::K2Node_DynamicCast_AsAnim_Montage' has a wrong offset!");
static_assert(offsetof(GAB_Emote_Generic_C_ExecuteUbergraph_GAB_Emote_Generic, K2Node_DynamicCast_bSuccess_3) == 0x0000F8, "Member 'GAB_Emote_Generic_C_ExecuteUbergraph_GAB_Emote_Generic::K2Node_DynamicCast_bSuccess_3' has a wrong offset!");
static_assert(offsetof(GAB_Emote_Generic_C_ExecuteUbergraph_GAB_Emote_Generic, CallFunc_IsMontagePlaying_Result) == 0x0000F9, "Member 'GAB_Emote_Generic_C_ExecuteUbergraph_GAB_Emote_Generic::CallFunc_IsMontagePlaying_Result' has a wrong offset!");
static_assert(offsetof(GAB_Emote_Generic_C_ExecuteUbergraph_GAB_Emote_Generic, CallFunc_ShouldHolsterWeapon_ReturnValue) == 0x0000FA, "Member 'GAB_Emote_Generic_C_ExecuteUbergraph_GAB_Emote_Generic::CallFunc_ShouldHolsterWeapon_ReturnValue' has a wrong offset!");
static_assert(offsetof(GAB_Emote_Generic_C_ExecuteUbergraph_GAB_Emote_Generic, K2Node_CustomEvent_Loaded_1) == 0x000100, "Member 'GAB_Emote_Generic_C_ExecuteUbergraph_GAB_Emote_Generic::K2Node_CustomEvent_Loaded_1' has a wrong offset!");
static_assert(offsetof(GAB_Emote_Generic_C_ExecuteUbergraph_GAB_Emote_Generic, CallFunc_PickMontageSection_ReturnValue) == 0x000108, "Member 'GAB_Emote_Generic_C_ExecuteUbergraph_GAB_Emote_Generic::CallFunc_PickMontageSection_ReturnValue' has a wrong offset!");
static_assert(offsetof(GAB_Emote_Generic_C_ExecuteUbergraph_GAB_Emote_Generic, K2Node_CreateDelegate_OutputDelegate_1) == 0x00010C, "Member 'GAB_Emote_Generic_C_ExecuteUbergraph_GAB_Emote_Generic::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(GAB_Emote_Generic_C_ExecuteUbergraph_GAB_Emote_Generic, CallFunc_GetActivatingPawn_ReturnValue_2) == 0x000118, "Member 'GAB_Emote_Generic_C_ExecuteUbergraph_GAB_Emote_Generic::CallFunc_GetActivatingPawn_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(GAB_Emote_Generic_C_ExecuteUbergraph_GAB_Emote_Generic, Temp_struct_Variable) == 0x000120, "Member 'GAB_Emote_Generic_C_ExecuteUbergraph_GAB_Emote_Generic::Temp_struct_Variable' has a wrong offset!");
static_assert(offsetof(GAB_Emote_Generic_C_ExecuteUbergraph_GAB_Emote_Generic, K2Node_DynamicCast_AsFort_Player_Pawn_Athena) == 0x000148, "Member 'GAB_Emote_Generic_C_ExecuteUbergraph_GAB_Emote_Generic::K2Node_DynamicCast_AsFort_Player_Pawn_Athena' has a wrong offset!");
static_assert(offsetof(GAB_Emote_Generic_C_ExecuteUbergraph_GAB_Emote_Generic, K2Node_DynamicCast_bSuccess_4) == 0x000150, "Member 'GAB_Emote_Generic_C_ExecuteUbergraph_GAB_Emote_Generic::K2Node_DynamicCast_bSuccess_4' has a wrong offset!");
static_assert(offsetof(GAB_Emote_Generic_C_ExecuteUbergraph_GAB_Emote_Generic, CallFunc_GatherVariantAssets_VariantAssetsNeeded) == 0x000158, "Member 'GAB_Emote_Generic_C_ExecuteUbergraph_GAB_Emote_Generic::CallFunc_GatherVariantAssets_VariantAssetsNeeded' has a wrong offset!");
static_assert(offsetof(GAB_Emote_Generic_C_ExecuteUbergraph_GAB_Emote_Generic, CallFunc_Subtract_IntInt_ReturnValue) == 0x000168, "Member 'GAB_Emote_Generic_C_ExecuteUbergraph_GAB_Emote_Generic::CallFunc_Subtract_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(GAB_Emote_Generic_C_ExecuteUbergraph_GAB_Emote_Generic, CallFunc_Array_Get_Item) == 0x000170, "Member 'GAB_Emote_Generic_C_ExecuteUbergraph_GAB_Emote_Generic::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(GAB_Emote_Generic_C_ExecuteUbergraph_GAB_Emote_Generic, CallFunc_Conv_SoftObjPathToSoftObjRef_ReturnValue) == 0x000188, "Member 'GAB_Emote_Generic_C_ExecuteUbergraph_GAB_Emote_Generic::CallFunc_Conv_SoftObjPathToSoftObjRef_ReturnValue' has a wrong offset!");
static_assert(offsetof(GAB_Emote_Generic_C_ExecuteUbergraph_GAB_Emote_Generic, CallFunc_Array_Length_ReturnValue) == 0x0001B0, "Member 'GAB_Emote_Generic_C_ExecuteUbergraph_GAB_Emote_Generic::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(GAB_Emote_Generic_C_ExecuteUbergraph_GAB_Emote_Generic, CallFunc_Less_IntInt_ReturnValue) == 0x0001B4, "Member 'GAB_Emote_Generic_C_ExecuteUbergraph_GAB_Emote_Generic::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(GAB_Emote_Generic_C_ExecuteUbergraph_GAB_Emote_Generic, CallFunc_Array_Length_ReturnValue_1) == 0x0001B8, "Member 'GAB_Emote_Generic_C_ExecuteUbergraph_GAB_Emote_Generic::CallFunc_Array_Length_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GAB_Emote_Generic_C_ExecuteUbergraph_GAB_Emote_Generic, CallFunc_Conv_IntToBool_ReturnValue) == 0x0001BC, "Member 'GAB_Emote_Generic_C_ExecuteUbergraph_GAB_Emote_Generic::CallFunc_Conv_IntToBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(GAB_Emote_Generic_C_ExecuteUbergraph_GAB_Emote_Generic, K2Node_CreateDelegate_OutputDelegate_2) == 0x0001C0, "Member 'GAB_Emote_Generic_C_ExecuteUbergraph_GAB_Emote_Generic::K2Node_CreateDelegate_OutputDelegate_2' has a wrong offset!");
static_assert(offsetof(GAB_Emote_Generic_C_ExecuteUbergraph_GAB_Emote_Generic, Temp_struct_Variable_1) == 0x0001CC, "Member 'GAB_Emote_Generic_C_ExecuteUbergraph_GAB_Emote_Generic::Temp_struct_Variable_1' has a wrong offset!");
static_assert(offsetof(GAB_Emote_Generic_C_ExecuteUbergraph_GAB_Emote_Generic, K2Node_CustomEvent_TargetData) == 0x0001D0, "Member 'GAB_Emote_Generic_C_ExecuteUbergraph_GAB_Emote_Generic::K2Node_CustomEvent_TargetData' has a wrong offset!");
static_assert(offsetof(GAB_Emote_Generic_C_ExecuteUbergraph_GAB_Emote_Generic, K2Node_CustomEvent_ApplicationTag) == 0x0001F8, "Member 'GAB_Emote_Generic_C_ExecuteUbergraph_GAB_Emote_Generic::K2Node_CustomEvent_ApplicationTag' has a wrong offset!");
static_assert(offsetof(GAB_Emote_Generic_C_ExecuteUbergraph_GAB_Emote_Generic, K2Node_CreateDelegate_OutputDelegate_3) == 0x0001FC, "Member 'GAB_Emote_Generic_C_ExecuteUbergraph_GAB_Emote_Generic::K2Node_CreateDelegate_OutputDelegate_3' has a wrong offset!");
static_assert(offsetof(GAB_Emote_Generic_C_ExecuteUbergraph_GAB_Emote_Generic, K2Node_CustomEvent_TargetData_1) == 0x000208, "Member 'GAB_Emote_Generic_C_ExecuteUbergraph_GAB_Emote_Generic::K2Node_CustomEvent_TargetData_1' has a wrong offset!");
static_assert(offsetof(GAB_Emote_Generic_C_ExecuteUbergraph_GAB_Emote_Generic, K2Node_CustomEvent_ApplicationTag_1) == 0x000230, "Member 'GAB_Emote_Generic_C_ExecuteUbergraph_GAB_Emote_Generic::K2Node_CustomEvent_ApplicationTag_1' has a wrong offset!");
static_assert(offsetof(GAB_Emote_Generic_C_ExecuteUbergraph_GAB_Emote_Generic, K2Node_CreateDelegate_OutputDelegate_4) == 0x000234, "Member 'GAB_Emote_Generic_C_ExecuteUbergraph_GAB_Emote_Generic::K2Node_CreateDelegate_OutputDelegate_4' has a wrong offset!");
static_assert(offsetof(GAB_Emote_Generic_C_ExecuteUbergraph_GAB_Emote_Generic, K2Node_CustomEvent_TargetData_2) == 0x000240, "Member 'GAB_Emote_Generic_C_ExecuteUbergraph_GAB_Emote_Generic::K2Node_CustomEvent_TargetData_2' has a wrong offset!");
static_assert(offsetof(GAB_Emote_Generic_C_ExecuteUbergraph_GAB_Emote_Generic, K2Node_CustomEvent_ApplicationTag_2) == 0x000268, "Member 'GAB_Emote_Generic_C_ExecuteUbergraph_GAB_Emote_Generic::K2Node_CustomEvent_ApplicationTag_2' has a wrong offset!");

struct GAB_Emote_Generic_C_ForceStopMontage final
{
public:
	class AFortPawn*                              CallFunc_GetActivatingPawn_ReturnValue;
	bool                                          CallFunc_IsValid_ReturnValue;
	bool                                          CallFunc_IsValid_ReturnValue_1;
	uint8                                         Pad_A[0x2];
	float                                         CallFunc_GetDefaultBlendOutTime_ReturnValue;
	class UAnimInstance*                          CallFunc_GetAnimInstance_ReturnValue;
	bool                                          CallFunc_IsValid_ReturnValue_2;
	bool                                          CallFunc_IsValid_ReturnValue_3;
};
static_assert(alignof(GAB_Emote_Generic_C_ForceStopMontage) == 0x000008, "Wrong alignment on GAB_Emote_Generic_C_ForceStopMontage");
static_assert(sizeof(GAB_Emote_Generic_C_ForceStopMontage) == 0x000020, "Wrong size on GAB_Emote_Generic_C_ForceStopMontage");
static_assert(offsetof(GAB_Emote_Generic_C_ForceStopMontage, CallFunc_GetActivatingPawn_ReturnValue) == 0x000000, "Member 'GAB_Emote_Generic_C_ForceStopMontage::CallFunc_GetActivatingPawn_ReturnValue' has a wrong offset!");
static_assert(offsetof(GAB_Emote_Generic_C_ForceStopMontage, CallFunc_IsValid_ReturnValue) == 0x000008, "Member 'GAB_Emote_Generic_C_ForceStopMontage::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(GAB_Emote_Generic_C_ForceStopMontage, CallFunc_IsValid_ReturnValue_1) == 0x000009, "Member 'GAB_Emote_Generic_C_ForceStopMontage::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GAB_Emote_Generic_C_ForceStopMontage, CallFunc_GetDefaultBlendOutTime_ReturnValue) == 0x00000C, "Member 'GAB_Emote_Generic_C_ForceStopMontage::CallFunc_GetDefaultBlendOutTime_ReturnValue' has a wrong offset!");
static_assert(offsetof(GAB_Emote_Generic_C_ForceStopMontage, CallFunc_GetAnimInstance_ReturnValue) == 0x000010, "Member 'GAB_Emote_Generic_C_ForceStopMontage::CallFunc_GetAnimInstance_ReturnValue' has a wrong offset!");
static_assert(offsetof(GAB_Emote_Generic_C_ForceStopMontage, CallFunc_IsValid_ReturnValue_2) == 0x000018, "Member 'GAB_Emote_Generic_C_ForceStopMontage::CallFunc_IsValid_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(GAB_Emote_Generic_C_ForceStopMontage, CallFunc_IsValid_ReturnValue_3) == 0x000019, "Member 'GAB_Emote_Generic_C_ForceStopMontage::CallFunc_IsValid_ReturnValue_3' has a wrong offset!");

struct GAB_Emote_Generic_C_GetBodyTypeAndGender final
{
public:
	EFortCustomBodyType                           BodyType;
	EFortCustomGender                             Gender;
	uint8                                         Pad_2[0x6];
	class AFortPawn*                              CallFunc_GetActivatingPawn_ReturnValue;
	class AFortPlayerPawn*                        K2Node_DynamicCast_AsFort_Player_Pawn;
	bool                                          K2Node_DynamicCast_bSuccess;
	EFortCustomBodyType                           CallFunc_GetCharacterBodyType_ReturnValue;
	EFortCustomGender                             CallFunc_GetCharacterGender_ReturnValue;
};
static_assert(alignof(GAB_Emote_Generic_C_GetBodyTypeAndGender) == 0x000008, "Wrong alignment on GAB_Emote_Generic_C_GetBodyTypeAndGender");
static_assert(sizeof(GAB_Emote_Generic_C_GetBodyTypeAndGender) == 0x000020, "Wrong size on GAB_Emote_Generic_C_GetBodyTypeAndGender");
static_assert(offsetof(GAB_Emote_Generic_C_GetBodyTypeAndGender, BodyType) == 0x000000, "Member 'GAB_Emote_Generic_C_GetBodyTypeAndGender::BodyType' has a wrong offset!");
static_assert(offsetof(GAB_Emote_Generic_C_GetBodyTypeAndGender, Gender) == 0x000001, "Member 'GAB_Emote_Generic_C_GetBodyTypeAndGender::Gender' has a wrong offset!");
static_assert(offsetof(GAB_Emote_Generic_C_GetBodyTypeAndGender, CallFunc_GetActivatingPawn_ReturnValue) == 0x000008, "Member 'GAB_Emote_Generic_C_GetBodyTypeAndGender::CallFunc_GetActivatingPawn_ReturnValue' has a wrong offset!");
static_assert(offsetof(GAB_Emote_Generic_C_GetBodyTypeAndGender, K2Node_DynamicCast_AsFort_Player_Pawn) == 0x000010, "Member 'GAB_Emote_Generic_C_GetBodyTypeAndGender::K2Node_DynamicCast_AsFort_Player_Pawn' has a wrong offset!");
static_assert(offsetof(GAB_Emote_Generic_C_GetBodyTypeAndGender, K2Node_DynamicCast_bSuccess) == 0x000018, "Member 'GAB_Emote_Generic_C_GetBodyTypeAndGender::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(GAB_Emote_Generic_C_GetBodyTypeAndGender, CallFunc_GetCharacterBodyType_ReturnValue) == 0x000019, "Member 'GAB_Emote_Generic_C_GetBodyTypeAndGender::CallFunc_GetCharacterBodyType_ReturnValue' has a wrong offset!");
static_assert(offsetof(GAB_Emote_Generic_C_GetBodyTypeAndGender, CallFunc_GetCharacterGender_ReturnValue) == 0x00001A, "Member 'GAB_Emote_Generic_C_GetBodyTypeAndGender::CallFunc_GetCharacterGender_ReturnValue' has a wrong offset!");

struct GAB_Emote_Generic_C_GetMontageToPlay final
{
public:
	class UFortMontageItemDefinitionBase*         EmoteAsset;
	EFortCustomBodyType                           BodyType;
	EFortCustomGender                             Gender;
	uint8                                         Pad_A[0x6];
	TSoftObjectPtr<class UAnimMontage>            ReturnValue;
	TSoftObjectPtr<class UAnimMontage>            CallFunc_GetAnimation_ReturnValue;
};
static_assert(alignof(GAB_Emote_Generic_C_GetMontageToPlay) == 0x000008, "Wrong alignment on GAB_Emote_Generic_C_GetMontageToPlay");
static_assert(sizeof(GAB_Emote_Generic_C_GetMontageToPlay) == 0x000060, "Wrong size on GAB_Emote_Generic_C_GetMontageToPlay");
static_assert(offsetof(GAB_Emote_Generic_C_GetMontageToPlay, EmoteAsset) == 0x000000, "Member 'GAB_Emote_Generic_C_GetMontageToPlay::EmoteAsset' has a wrong offset!");
static_assert(offsetof(GAB_Emote_Generic_C_GetMontageToPlay, BodyType) == 0x000008, "Member 'GAB_Emote_Generic_C_GetMontageToPlay::BodyType' has a wrong offset!");
static_assert(offsetof(GAB_Emote_Generic_C_GetMontageToPlay, Gender) == 0x000009, "Member 'GAB_Emote_Generic_C_GetMontageToPlay::Gender' has a wrong offset!");
static_assert(offsetof(GAB_Emote_Generic_C_GetMontageToPlay, ReturnValue) == 0x000010, "Member 'GAB_Emote_Generic_C_GetMontageToPlay::ReturnValue' has a wrong offset!");
static_assert(offsetof(GAB_Emote_Generic_C_GetMontageToPlay, CallFunc_GetAnimation_ReturnValue) == 0x000038, "Member 'GAB_Emote_Generic_C_GetMontageToPlay::CallFunc_GetAnimation_ReturnValue' has a wrong offset!");

struct GAB_Emote_Generic_C_IsMontagePlaying final
{
public:
	class UAnimMontage*                           Montage;
	bool                                          Result;
	uint8                                         Pad_9[0x7];
	class UAnimInstance*                          CallFunc_GetAnimInstance_ReturnValue;
	bool                                          CallFunc_Montage_IsPlaying_ReturnValue;
	bool                                          CallFunc_IsValid_ReturnValue;
};
static_assert(alignof(GAB_Emote_Generic_C_IsMontagePlaying) == 0x000008, "Wrong alignment on GAB_Emote_Generic_C_IsMontagePlaying");
static_assert(sizeof(GAB_Emote_Generic_C_IsMontagePlaying) == 0x000020, "Wrong size on GAB_Emote_Generic_C_IsMontagePlaying");
static_assert(offsetof(GAB_Emote_Generic_C_IsMontagePlaying, Montage) == 0x000000, "Member 'GAB_Emote_Generic_C_IsMontagePlaying::Montage' has a wrong offset!");
static_assert(offsetof(GAB_Emote_Generic_C_IsMontagePlaying, Result) == 0x000008, "Member 'GAB_Emote_Generic_C_IsMontagePlaying::Result' has a wrong offset!");
static_assert(offsetof(GAB_Emote_Generic_C_IsMontagePlaying, CallFunc_GetAnimInstance_ReturnValue) == 0x000010, "Member 'GAB_Emote_Generic_C_IsMontagePlaying::CallFunc_GetAnimInstance_ReturnValue' has a wrong offset!");
static_assert(offsetof(GAB_Emote_Generic_C_IsMontagePlaying, CallFunc_Montage_IsPlaying_ReturnValue) == 0x000018, "Member 'GAB_Emote_Generic_C_IsMontagePlaying::CallFunc_Montage_IsPlaying_ReturnValue' has a wrong offset!");
static_assert(offsetof(GAB_Emote_Generic_C_IsMontagePlaying, CallFunc_IsValid_ReturnValue) == 0x000019, "Member 'GAB_Emote_Generic_C_IsMontagePlaying::CallFunc_IsValid_ReturnValue' has a wrong offset!");

struct GAB_Emote_Generic_C_K2_OnEndAbility final
{
public:
	bool                                          bWasCancelled;
	uint8                                         Pad_1[0x7];
	class UObject*                                CallFunc_GetCurrentSourceObject_ReturnValue;
	class UFortMontageItemDefinitionBase*         K2Node_DynamicCast_AsFort_Montage_Item_Definition_Base;
	bool                                          K2Node_DynamicCast_bSuccess;
	uint8                                         Pad_19[0x7];
	class AFortPawn*                              CallFunc_GetActivatingPawn_ReturnValue;
};
static_assert(alignof(GAB_Emote_Generic_C_K2_OnEndAbility) == 0x000008, "Wrong alignment on GAB_Emote_Generic_C_K2_OnEndAbility");
static_assert(sizeof(GAB_Emote_Generic_C_K2_OnEndAbility) == 0x000028, "Wrong size on GAB_Emote_Generic_C_K2_OnEndAbility");
static_assert(offsetof(GAB_Emote_Generic_C_K2_OnEndAbility, bWasCancelled) == 0x000000, "Member 'GAB_Emote_Generic_C_K2_OnEndAbility::bWasCancelled' has a wrong offset!");
static_assert(offsetof(GAB_Emote_Generic_C_K2_OnEndAbility, CallFunc_GetCurrentSourceObject_ReturnValue) == 0x000008, "Member 'GAB_Emote_Generic_C_K2_OnEndAbility::CallFunc_GetCurrentSourceObject_ReturnValue' has a wrong offset!");
static_assert(offsetof(GAB_Emote_Generic_C_K2_OnEndAbility, K2Node_DynamicCast_AsFort_Montage_Item_Definition_Base) == 0x000010, "Member 'GAB_Emote_Generic_C_K2_OnEndAbility::K2Node_DynamicCast_AsFort_Montage_Item_Definition_Base' has a wrong offset!");
static_assert(offsetof(GAB_Emote_Generic_C_K2_OnEndAbility, K2Node_DynamicCast_bSuccess) == 0x000018, "Member 'GAB_Emote_Generic_C_K2_OnEndAbility::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(GAB_Emote_Generic_C_K2_OnEndAbility, CallFunc_GetActivatingPawn_ReturnValue) == 0x000020, "Member 'GAB_Emote_Generic_C_K2_OnEndAbility::CallFunc_GetActivatingPawn_ReturnValue' has a wrong offset!");

struct GAB_Emote_Generic_C_OnLoaded_D5C2B0D14DEB9277D15965B97800FD1D final
{
public:
	class UObject*                                Loaded;
};
static_assert(alignof(GAB_Emote_Generic_C_OnLoaded_D5C2B0D14DEB9277D15965B97800FD1D) == 0x000008, "Wrong alignment on GAB_Emote_Generic_C_OnLoaded_D5C2B0D14DEB9277D15965B97800FD1D");
static_assert(sizeof(GAB_Emote_Generic_C_OnLoaded_D5C2B0D14DEB9277D15965B97800FD1D) == 0x000008, "Wrong size on GAB_Emote_Generic_C_OnLoaded_D5C2B0D14DEB9277D15965B97800FD1D");
static_assert(offsetof(GAB_Emote_Generic_C_OnLoaded_D5C2B0D14DEB9277D15965B97800FD1D, Loaded) == 0x000000, "Member 'GAB_Emote_Generic_C_OnLoaded_D5C2B0D14DEB9277D15965B97800FD1D::Loaded' has a wrong offset!");

struct GAB_Emote_Generic_C_OnLoaded_DA96775D40CD998BF2FF0085FE5AB126 final
{
public:
	class UObject*                                Loaded;
};
static_assert(alignof(GAB_Emote_Generic_C_OnLoaded_DA96775D40CD998BF2FF0085FE5AB126) == 0x000008, "Wrong alignment on GAB_Emote_Generic_C_OnLoaded_DA96775D40CD998BF2FF0085FE5AB126");
static_assert(sizeof(GAB_Emote_Generic_C_OnLoaded_DA96775D40CD998BF2FF0085FE5AB126) == 0x000008, "Wrong size on GAB_Emote_Generic_C_OnLoaded_DA96775D40CD998BF2FF0085FE5AB126");
static_assert(offsetof(GAB_Emote_Generic_C_OnLoaded_DA96775D40CD998BF2FF0085FE5AB126, Loaded) == 0x000000, "Member 'GAB_Emote_Generic_C_OnLoaded_DA96775D40CD998BF2FF0085FE5AB126::Loaded' has a wrong offset!");

struct GAB_Emote_Generic_C_SetReticleVisibility final
{
public:
	bool                                          ShouldHide;
	bool                                          CallFunc_IsServer_ReturnValue;
	uint8                                         Pad_2[0x6];
	class AController*                            CallFunc_GetInstigatorController_ReturnValue;
	class AFortPlayerControllerZone*              K2Node_DynamicCast_AsFort_Player_Controller_Zone;
	bool                                          K2Node_DynamicCast_bSuccess;
};
static_assert(alignof(GAB_Emote_Generic_C_SetReticleVisibility) == 0x000008, "Wrong alignment on GAB_Emote_Generic_C_SetReticleVisibility");
static_assert(sizeof(GAB_Emote_Generic_C_SetReticleVisibility) == 0x000020, "Wrong size on GAB_Emote_Generic_C_SetReticleVisibility");
static_assert(offsetof(GAB_Emote_Generic_C_SetReticleVisibility, ShouldHide) == 0x000000, "Member 'GAB_Emote_Generic_C_SetReticleVisibility::ShouldHide' has a wrong offset!");
static_assert(offsetof(GAB_Emote_Generic_C_SetReticleVisibility, CallFunc_IsServer_ReturnValue) == 0x000001, "Member 'GAB_Emote_Generic_C_SetReticleVisibility::CallFunc_IsServer_ReturnValue' has a wrong offset!");
static_assert(offsetof(GAB_Emote_Generic_C_SetReticleVisibility, CallFunc_GetInstigatorController_ReturnValue) == 0x000008, "Member 'GAB_Emote_Generic_C_SetReticleVisibility::CallFunc_GetInstigatorController_ReturnValue' has a wrong offset!");
static_assert(offsetof(GAB_Emote_Generic_C_SetReticleVisibility, K2Node_DynamicCast_AsFort_Player_Controller_Zone) == 0x000010, "Member 'GAB_Emote_Generic_C_SetReticleVisibility::K2Node_DynamicCast_AsFort_Player_Controller_Zone' has a wrong offset!");
static_assert(offsetof(GAB_Emote_Generic_C_SetReticleVisibility, K2Node_DynamicCast_bSuccess) == 0x000018, "Member 'GAB_Emote_Generic_C_SetReticleVisibility::K2Node_DynamicCast_bSuccess' has a wrong offset!");

struct GAB_Emote_Generic_C_Triggered_DE7019AA4E006879EDD264899869FEE2 final
{
public:
	struct FGameplayAbilityTargetDataHandle       TargetData;
	struct FGameplayTag                           ApplicationTag;
};
static_assert(alignof(GAB_Emote_Generic_C_Triggered_DE7019AA4E006879EDD264899869FEE2) == 0x000008, "Wrong alignment on GAB_Emote_Generic_C_Triggered_DE7019AA4E006879EDD264899869FEE2");
static_assert(sizeof(GAB_Emote_Generic_C_Triggered_DE7019AA4E006879EDD264899869FEE2) == 0x000030, "Wrong size on GAB_Emote_Generic_C_Triggered_DE7019AA4E006879EDD264899869FEE2");
static_assert(offsetof(GAB_Emote_Generic_C_Triggered_DE7019AA4E006879EDD264899869FEE2, TargetData) == 0x000000, "Member 'GAB_Emote_Generic_C_Triggered_DE7019AA4E006879EDD264899869FEE2::TargetData' has a wrong offset!");
static_assert(offsetof(GAB_Emote_Generic_C_Triggered_DE7019AA4E006879EDD264899869FEE2, ApplicationTag) == 0x000028, "Member 'GAB_Emote_Generic_C_Triggered_DE7019AA4E006879EDD264899869FEE2::ApplicationTag' has a wrong offset!");

struct GAB_Emote_Generic_C_K2_CanActivateAbility final
{
public:
	struct FGameplayAbilityActorInfo              ActorInfo;
	struct FGameplayAbilitySpecHandle             Handle;
	uint8                                         Pad_4C[0x4];
	struct FGameplayTagContainer                  RelevantTags;
	bool                                          ReturnValue;
	uint8                                         Pad_71[0x7];
	class UObject*                                CallFunc_GetSourceObject_BP_ReturnValue;
	class UFortMontageItemDefinitionBase*         K2Node_DynamicCast_AsFort_Montage_Item_Definition_Base;
	bool                                          K2Node_DynamicCast_bSuccess;
	uint8                                         Pad_89[0x7];
	class AFortPlayerController*                  K2Node_DynamicCast_AsFort_Player_Controller;
	bool                                          K2Node_DynamicCast_bSuccess_1;
	uint8                                         Pad_99[0x7];
	struct FGameplayTagContainer                  CallFunc_CanActivateMontageItem_OutFailureTags;
	bool                                          CallFunc_CanActivateMontageItem_ReturnValue;
};
static_assert(alignof(GAB_Emote_Generic_C_K2_CanActivateAbility) == 0x000008, "Wrong alignment on GAB_Emote_Generic_C_K2_CanActivateAbility");
static_assert(sizeof(GAB_Emote_Generic_C_K2_CanActivateAbility) == 0x0000C8, "Wrong size on GAB_Emote_Generic_C_K2_CanActivateAbility");
static_assert(offsetof(GAB_Emote_Generic_C_K2_CanActivateAbility, ActorInfo) == 0x000000, "Member 'GAB_Emote_Generic_C_K2_CanActivateAbility::ActorInfo' has a wrong offset!");
static_assert(offsetof(GAB_Emote_Generic_C_K2_CanActivateAbility, Handle) == 0x000048, "Member 'GAB_Emote_Generic_C_K2_CanActivateAbility::Handle' has a wrong offset!");
static_assert(offsetof(GAB_Emote_Generic_C_K2_CanActivateAbility, RelevantTags) == 0x000050, "Member 'GAB_Emote_Generic_C_K2_CanActivateAbility::RelevantTags' has a wrong offset!");
static_assert(offsetof(GAB_Emote_Generic_C_K2_CanActivateAbility, ReturnValue) == 0x000070, "Member 'GAB_Emote_Generic_C_K2_CanActivateAbility::ReturnValue' has a wrong offset!");
static_assert(offsetof(GAB_Emote_Generic_C_K2_CanActivateAbility, CallFunc_GetSourceObject_BP_ReturnValue) == 0x000078, "Member 'GAB_Emote_Generic_C_K2_CanActivateAbility::CallFunc_GetSourceObject_BP_ReturnValue' has a wrong offset!");
static_assert(offsetof(GAB_Emote_Generic_C_K2_CanActivateAbility, K2Node_DynamicCast_AsFort_Montage_Item_Definition_Base) == 0x000080, "Member 'GAB_Emote_Generic_C_K2_CanActivateAbility::K2Node_DynamicCast_AsFort_Montage_Item_Definition_Base' has a wrong offset!");
static_assert(offsetof(GAB_Emote_Generic_C_K2_CanActivateAbility, K2Node_DynamicCast_bSuccess) == 0x000088, "Member 'GAB_Emote_Generic_C_K2_CanActivateAbility::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(GAB_Emote_Generic_C_K2_CanActivateAbility, K2Node_DynamicCast_AsFort_Player_Controller) == 0x000090, "Member 'GAB_Emote_Generic_C_K2_CanActivateAbility::K2Node_DynamicCast_AsFort_Player_Controller' has a wrong offset!");
static_assert(offsetof(GAB_Emote_Generic_C_K2_CanActivateAbility, K2Node_DynamicCast_bSuccess_1) == 0x000098, "Member 'GAB_Emote_Generic_C_K2_CanActivateAbility::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(GAB_Emote_Generic_C_K2_CanActivateAbility, CallFunc_CanActivateMontageItem_OutFailureTags) == 0x0000A0, "Member 'GAB_Emote_Generic_C_K2_CanActivateAbility::CallFunc_CanActivateMontageItem_OutFailureTags' has a wrong offset!");
static_assert(offsetof(GAB_Emote_Generic_C_K2_CanActivateAbility, CallFunc_CanActivateMontageItem_ReturnValue) == 0x0000C0, "Member 'GAB_Emote_Generic_C_K2_CanActivateAbility::CallFunc_CanActivateMontageItem_ReturnValue' has a wrong offset!");

struct GAB_Emote_Generic_C_ShouldPlayFailedMontage final
{
public:
	struct FGameplayTagContainer                  FailedReason;
	bool                                          ReturnValue;
	uint8                                         Pad_21[0x7];
	TArray<struct FGameplayTag>                   K2Node_MakeArray_Array;
	bool                                          CallFunc_ShouldPlayFailedMontage_ReturnValue;
	uint8                                         Pad_39[0x7];
	struct FGameplayTagContainer                  CallFunc_MakeGameplayTagContainerFromArray_ReturnValue;
	bool                                          CallFunc_HasAnyTags_ReturnValue;
};
static_assert(alignof(GAB_Emote_Generic_C_ShouldPlayFailedMontage) == 0x000008, "Wrong alignment on GAB_Emote_Generic_C_ShouldPlayFailedMontage");
static_assert(sizeof(GAB_Emote_Generic_C_ShouldPlayFailedMontage) == 0x000068, "Wrong size on GAB_Emote_Generic_C_ShouldPlayFailedMontage");
static_assert(offsetof(GAB_Emote_Generic_C_ShouldPlayFailedMontage, FailedReason) == 0x000000, "Member 'GAB_Emote_Generic_C_ShouldPlayFailedMontage::FailedReason' has a wrong offset!");
static_assert(offsetof(GAB_Emote_Generic_C_ShouldPlayFailedMontage, ReturnValue) == 0x000020, "Member 'GAB_Emote_Generic_C_ShouldPlayFailedMontage::ReturnValue' has a wrong offset!");
static_assert(offsetof(GAB_Emote_Generic_C_ShouldPlayFailedMontage, K2Node_MakeArray_Array) == 0x000028, "Member 'GAB_Emote_Generic_C_ShouldPlayFailedMontage::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(GAB_Emote_Generic_C_ShouldPlayFailedMontage, CallFunc_ShouldPlayFailedMontage_ReturnValue) == 0x000038, "Member 'GAB_Emote_Generic_C_ShouldPlayFailedMontage::CallFunc_ShouldPlayFailedMontage_ReturnValue' has a wrong offset!");
static_assert(offsetof(GAB_Emote_Generic_C_ShouldPlayFailedMontage, CallFunc_MakeGameplayTagContainerFromArray_ReturnValue) == 0x000040, "Member 'GAB_Emote_Generic_C_ShouldPlayFailedMontage::CallFunc_MakeGameplayTagContainerFromArray_ReturnValue' has a wrong offset!");
static_assert(offsetof(GAB_Emote_Generic_C_ShouldPlayFailedMontage, CallFunc_HasAnyTags_ReturnValue) == 0x000060, "Member 'GAB_Emote_Generic_C_ShouldPlayFailedMontage::CallFunc_HasAnyTags_ReturnValue' has a wrong offset!");

}
