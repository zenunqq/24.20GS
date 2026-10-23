#pragma once

#include "Basic.hpp"

#include "GameplayTags_structs.hpp"
#include "Engine_structs.hpp"
#include "FortniteGame_structs.hpp"
#include "GameplayAbilities_structs.hpp"
#include "CoreUObject_structs.hpp"

namespace SDK::Params
{

struct GA_Athena_Grenade_Rethrow_C_AttachProjectile final
{
public:
	struct FHitResult                             CallFunc_K2_AddActorLocalOffset_SweepHitResult;
	struct FHitResult                             CallFunc_K2_AddActorLocalRotation_SweepHitResult;
};
static_assert(alignof(GA_Athena_Grenade_Rethrow_C_AttachProjectile) == 0x000008, "Wrong alignment on GA_Athena_Grenade_Rethrow_C_AttachProjectile");
static_assert(sizeof(GA_Athena_Grenade_Rethrow_C_AttachProjectile) == 0x0001C0, "Wrong size on GA_Athena_Grenade_Rethrow_C_AttachProjectile");
static_assert(offsetof(GA_Athena_Grenade_Rethrow_C_AttachProjectile, CallFunc_K2_AddActorLocalOffset_SweepHitResult) == 0x000000, "Member 'GA_Athena_Grenade_Rethrow_C_AttachProjectile::CallFunc_K2_AddActorLocalOffset_SweepHitResult' has a wrong offset!");
static_assert(offsetof(GA_Athena_Grenade_Rethrow_C_AttachProjectile, CallFunc_K2_AddActorLocalRotation_SweepHitResult) == 0x0000E0, "Member 'GA_Athena_Grenade_Rethrow_C_AttachProjectile::CallFunc_K2_AddActorLocalRotation_SweepHitResult' has a wrong offset!");

struct GA_Athena_Grenade_Rethrow_C_Cancelled_3B7299CC49B6C5C075996A9C8DDF315F final
{
public:
	struct FGameplayAbilityTargetDataHandle       TargetData;
	struct FGameplayTag                           ApplicationTag;
};
static_assert(alignof(GA_Athena_Grenade_Rethrow_C_Cancelled_3B7299CC49B6C5C075996A9C8DDF315F) == 0x000008, "Wrong alignment on GA_Athena_Grenade_Rethrow_C_Cancelled_3B7299CC49B6C5C075996A9C8DDF315F");
static_assert(sizeof(GA_Athena_Grenade_Rethrow_C_Cancelled_3B7299CC49B6C5C075996A9C8DDF315F) == 0x000030, "Wrong size on GA_Athena_Grenade_Rethrow_C_Cancelled_3B7299CC49B6C5C075996A9C8DDF315F");
static_assert(offsetof(GA_Athena_Grenade_Rethrow_C_Cancelled_3B7299CC49B6C5C075996A9C8DDF315F, TargetData) == 0x000000, "Member 'GA_Athena_Grenade_Rethrow_C_Cancelled_3B7299CC49B6C5C075996A9C8DDF315F::TargetData' has a wrong offset!");
static_assert(offsetof(GA_Athena_Grenade_Rethrow_C_Cancelled_3B7299CC49B6C5C075996A9C8DDF315F, ApplicationTag) == 0x000028, "Member 'GA_Athena_Grenade_Rethrow_C_Cancelled_3B7299CC49B6C5C075996A9C8DDF315F::ApplicationTag' has a wrong offset!");

struct GA_Athena_Grenade_Rethrow_C_Completed_3B7299CC49B6C5C075996A9C8DDF315F final
{
public:
	struct FGameplayAbilityTargetDataHandle       TargetData;
	struct FGameplayTag                           ApplicationTag;
};
static_assert(alignof(GA_Athena_Grenade_Rethrow_C_Completed_3B7299CC49B6C5C075996A9C8DDF315F) == 0x000008, "Wrong alignment on GA_Athena_Grenade_Rethrow_C_Completed_3B7299CC49B6C5C075996A9C8DDF315F");
static_assert(sizeof(GA_Athena_Grenade_Rethrow_C_Completed_3B7299CC49B6C5C075996A9C8DDF315F) == 0x000030, "Wrong size on GA_Athena_Grenade_Rethrow_C_Completed_3B7299CC49B6C5C075996A9C8DDF315F");
static_assert(offsetof(GA_Athena_Grenade_Rethrow_C_Completed_3B7299CC49B6C5C075996A9C8DDF315F, TargetData) == 0x000000, "Member 'GA_Athena_Grenade_Rethrow_C_Completed_3B7299CC49B6C5C075996A9C8DDF315F::TargetData' has a wrong offset!");
static_assert(offsetof(GA_Athena_Grenade_Rethrow_C_Completed_3B7299CC49B6C5C075996A9C8DDF315F, ApplicationTag) == 0x000028, "Member 'GA_Athena_Grenade_Rethrow_C_Completed_3B7299CC49B6C5C075996A9C8DDF315F::ApplicationTag' has a wrong offset!");

struct GA_Athena_Grenade_Rethrow_C_ExecuteUbergraph_GA_Athena_Grenade_Rethrow final
{
public:
	int32                                         EntryPoint;
	uint8                                         Pad_4[0x4];
	struct FGameplayAbilityTargetDataHandle       K2Node_CustomEvent_TargetData_1;
	struct FGameplayTag                           K2Node_CustomEvent_ApplicationTag_1;
	TDelegate<void(struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag)> K2Node_CreateDelegate_OutputDelegate;
	struct FGameplayAbilityTargetDataHandle       K2Node_CustomEvent_TargetData;
	struct FGameplayTag                           K2Node_CustomEvent_ApplicationTag;
	TDelegate<void(struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag)> K2Node_CreateDelegate_OutputDelegate_1;
	struct FGameplayTag                           Temp_struct_Variable;
	uint8                                         Pad_7C[0x4];
	struct FGameplayAbilityTargetDataHandle       Temp_struct_Variable_1;
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_2;
	bool                                          Temp_bool_Variable;
	uint8                                         Pad_B5[0x3];
	class UAnimMontage*                           Temp_object_Variable;
	class UAnimMontage*                           Temp_object_Variable_1;
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_3;
	uint8                                         Pad_D4[0x4];
	class AFortProjectileBase*                    K2Node_DynamicCast_AsFort_Projectile_Base;
	bool                                          K2Node_DynamicCast_bSuccess;
	bool                                          CallFunc_IsValid_ReturnValue;
	uint8                                         Pad_E2[0x6];
	struct FGameplayAbilityTargetDataHandle       K2Node_CustomEvent_TargetData_2;
	struct FGameplayTag                           K2Node_CustomEvent_ApplicationTag_2;
	bool                                          CallFunc_IsValid_ReturnValue_1;
	uint8                                         Pad_115[0x3];
	class UAbilityTask_WaitDelay*                 CallFunc_WaitDelay_ReturnValue;
	bool                                          CallFunc_IsValid_ReturnValue_2;
	uint8                                         Pad_121[0x7];
	struct FTimerHandle                           CallFunc_K2_SetTimerDelegate_ReturnValue;
	bool                                          K2Node_Event_bWasCancelled;
	uint8                                         Pad_131[0x3];
	TDelegate<void(struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag)> K2Node_CreateDelegate_OutputDelegate_4;
	TArray<struct FFortCharacterPartMontageInfo>  K2Node_MakeArray_Array;
	class FString                                 CallFunc_GetObjectName_ReturnValue;
	bool                                          CallFunc_Contains_ReturnValue;
	uint8                                         Pad_161[0x7];
	struct FVector                                CallFunc_GetSpawnLocationAndRotation_Location;
	struct FRotator                               CallFunc_GetSpawnLocationAndRotation_Rotation;
	struct FVector                                CallFunc_Conv_RotatorToVector_ReturnValue;
	class UAnimMontage*                           K2Node_Select_Default;
	struct FHitResult                             CallFunc_K2_SetActorLocation_SweepHitResult;
	bool                                          CallFunc_K2_SetActorLocation_ReturnValue;
	uint8                                         Pad_299[0x7];
	struct FFortGameplayAbilityMontageInfo        K2Node_MakeStruct_FortGameplayAbilityMontageInfo;
	class UFortAbilityTask_PlayMontageWaitTarget* CallFunc_PlayMontageInfoAndWaitForTrigger_ReturnValue;
	double                                        CallFunc_GetProjectileInitialSpeedToUse_ProjectileSpeedToUse;
	struct FVector                                CallFunc_Multiply_VectorFloat_ReturnValue;
	bool                                          CallFunc_IsValid_ReturnValue_3;
	uint8                                         Pad_321[0x3];
	float                                         CallFunc_WaitDelay_Time_ImplicitCast;
	float                                         CallFunc_K2_SetTimerDelegate_Time_ImplicitCast;
};
static_assert(alignof(GA_Athena_Grenade_Rethrow_C_ExecuteUbergraph_GA_Athena_Grenade_Rethrow) == 0x000008, "Wrong alignment on GA_Athena_Grenade_Rethrow_C_ExecuteUbergraph_GA_Athena_Grenade_Rethrow");
static_assert(sizeof(GA_Athena_Grenade_Rethrow_C_ExecuteUbergraph_GA_Athena_Grenade_Rethrow) == 0x000330, "Wrong size on GA_Athena_Grenade_Rethrow_C_ExecuteUbergraph_GA_Athena_Grenade_Rethrow");
static_assert(offsetof(GA_Athena_Grenade_Rethrow_C_ExecuteUbergraph_GA_Athena_Grenade_Rethrow, EntryPoint) == 0x000000, "Member 'GA_Athena_Grenade_Rethrow_C_ExecuteUbergraph_GA_Athena_Grenade_Rethrow::EntryPoint' has a wrong offset!");
static_assert(offsetof(GA_Athena_Grenade_Rethrow_C_ExecuteUbergraph_GA_Athena_Grenade_Rethrow, K2Node_CustomEvent_TargetData_1) == 0x000008, "Member 'GA_Athena_Grenade_Rethrow_C_ExecuteUbergraph_GA_Athena_Grenade_Rethrow::K2Node_CustomEvent_TargetData_1' has a wrong offset!");
static_assert(offsetof(GA_Athena_Grenade_Rethrow_C_ExecuteUbergraph_GA_Athena_Grenade_Rethrow, K2Node_CustomEvent_ApplicationTag_1) == 0x000030, "Member 'GA_Athena_Grenade_Rethrow_C_ExecuteUbergraph_GA_Athena_Grenade_Rethrow::K2Node_CustomEvent_ApplicationTag_1' has a wrong offset!");
static_assert(offsetof(GA_Athena_Grenade_Rethrow_C_ExecuteUbergraph_GA_Athena_Grenade_Rethrow, K2Node_CreateDelegate_OutputDelegate) == 0x000034, "Member 'GA_Athena_Grenade_Rethrow_C_ExecuteUbergraph_GA_Athena_Grenade_Rethrow::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(GA_Athena_Grenade_Rethrow_C_ExecuteUbergraph_GA_Athena_Grenade_Rethrow, K2Node_CustomEvent_TargetData) == 0x000040, "Member 'GA_Athena_Grenade_Rethrow_C_ExecuteUbergraph_GA_Athena_Grenade_Rethrow::K2Node_CustomEvent_TargetData' has a wrong offset!");
static_assert(offsetof(GA_Athena_Grenade_Rethrow_C_ExecuteUbergraph_GA_Athena_Grenade_Rethrow, K2Node_CustomEvent_ApplicationTag) == 0x000068, "Member 'GA_Athena_Grenade_Rethrow_C_ExecuteUbergraph_GA_Athena_Grenade_Rethrow::K2Node_CustomEvent_ApplicationTag' has a wrong offset!");
static_assert(offsetof(GA_Athena_Grenade_Rethrow_C_ExecuteUbergraph_GA_Athena_Grenade_Rethrow, K2Node_CreateDelegate_OutputDelegate_1) == 0x00006C, "Member 'GA_Athena_Grenade_Rethrow_C_ExecuteUbergraph_GA_Athena_Grenade_Rethrow::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(GA_Athena_Grenade_Rethrow_C_ExecuteUbergraph_GA_Athena_Grenade_Rethrow, Temp_struct_Variable) == 0x000078, "Member 'GA_Athena_Grenade_Rethrow_C_ExecuteUbergraph_GA_Athena_Grenade_Rethrow::Temp_struct_Variable' has a wrong offset!");
static_assert(offsetof(GA_Athena_Grenade_Rethrow_C_ExecuteUbergraph_GA_Athena_Grenade_Rethrow, Temp_struct_Variable_1) == 0x000080, "Member 'GA_Athena_Grenade_Rethrow_C_ExecuteUbergraph_GA_Athena_Grenade_Rethrow::Temp_struct_Variable_1' has a wrong offset!");
static_assert(offsetof(GA_Athena_Grenade_Rethrow_C_ExecuteUbergraph_GA_Athena_Grenade_Rethrow, K2Node_CreateDelegate_OutputDelegate_2) == 0x0000A8, "Member 'GA_Athena_Grenade_Rethrow_C_ExecuteUbergraph_GA_Athena_Grenade_Rethrow::K2Node_CreateDelegate_OutputDelegate_2' has a wrong offset!");
static_assert(offsetof(GA_Athena_Grenade_Rethrow_C_ExecuteUbergraph_GA_Athena_Grenade_Rethrow, Temp_bool_Variable) == 0x0000B4, "Member 'GA_Athena_Grenade_Rethrow_C_ExecuteUbergraph_GA_Athena_Grenade_Rethrow::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(GA_Athena_Grenade_Rethrow_C_ExecuteUbergraph_GA_Athena_Grenade_Rethrow, Temp_object_Variable) == 0x0000B8, "Member 'GA_Athena_Grenade_Rethrow_C_ExecuteUbergraph_GA_Athena_Grenade_Rethrow::Temp_object_Variable' has a wrong offset!");
static_assert(offsetof(GA_Athena_Grenade_Rethrow_C_ExecuteUbergraph_GA_Athena_Grenade_Rethrow, Temp_object_Variable_1) == 0x0000C0, "Member 'GA_Athena_Grenade_Rethrow_C_ExecuteUbergraph_GA_Athena_Grenade_Rethrow::Temp_object_Variable_1' has a wrong offset!");
static_assert(offsetof(GA_Athena_Grenade_Rethrow_C_ExecuteUbergraph_GA_Athena_Grenade_Rethrow, K2Node_CreateDelegate_OutputDelegate_3) == 0x0000C8, "Member 'GA_Athena_Grenade_Rethrow_C_ExecuteUbergraph_GA_Athena_Grenade_Rethrow::K2Node_CreateDelegate_OutputDelegate_3' has a wrong offset!");
static_assert(offsetof(GA_Athena_Grenade_Rethrow_C_ExecuteUbergraph_GA_Athena_Grenade_Rethrow, K2Node_DynamicCast_AsFort_Projectile_Base) == 0x0000D8, "Member 'GA_Athena_Grenade_Rethrow_C_ExecuteUbergraph_GA_Athena_Grenade_Rethrow::K2Node_DynamicCast_AsFort_Projectile_Base' has a wrong offset!");
static_assert(offsetof(GA_Athena_Grenade_Rethrow_C_ExecuteUbergraph_GA_Athena_Grenade_Rethrow, K2Node_DynamicCast_bSuccess) == 0x0000E0, "Member 'GA_Athena_Grenade_Rethrow_C_ExecuteUbergraph_GA_Athena_Grenade_Rethrow::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(GA_Athena_Grenade_Rethrow_C_ExecuteUbergraph_GA_Athena_Grenade_Rethrow, CallFunc_IsValid_ReturnValue) == 0x0000E1, "Member 'GA_Athena_Grenade_Rethrow_C_ExecuteUbergraph_GA_Athena_Grenade_Rethrow::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Athena_Grenade_Rethrow_C_ExecuteUbergraph_GA_Athena_Grenade_Rethrow, K2Node_CustomEvent_TargetData_2) == 0x0000E8, "Member 'GA_Athena_Grenade_Rethrow_C_ExecuteUbergraph_GA_Athena_Grenade_Rethrow::K2Node_CustomEvent_TargetData_2' has a wrong offset!");
static_assert(offsetof(GA_Athena_Grenade_Rethrow_C_ExecuteUbergraph_GA_Athena_Grenade_Rethrow, K2Node_CustomEvent_ApplicationTag_2) == 0x000110, "Member 'GA_Athena_Grenade_Rethrow_C_ExecuteUbergraph_GA_Athena_Grenade_Rethrow::K2Node_CustomEvent_ApplicationTag_2' has a wrong offset!");
static_assert(offsetof(GA_Athena_Grenade_Rethrow_C_ExecuteUbergraph_GA_Athena_Grenade_Rethrow, CallFunc_IsValid_ReturnValue_1) == 0x000114, "Member 'GA_Athena_Grenade_Rethrow_C_ExecuteUbergraph_GA_Athena_Grenade_Rethrow::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GA_Athena_Grenade_Rethrow_C_ExecuteUbergraph_GA_Athena_Grenade_Rethrow, CallFunc_WaitDelay_ReturnValue) == 0x000118, "Member 'GA_Athena_Grenade_Rethrow_C_ExecuteUbergraph_GA_Athena_Grenade_Rethrow::CallFunc_WaitDelay_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Athena_Grenade_Rethrow_C_ExecuteUbergraph_GA_Athena_Grenade_Rethrow, CallFunc_IsValid_ReturnValue_2) == 0x000120, "Member 'GA_Athena_Grenade_Rethrow_C_ExecuteUbergraph_GA_Athena_Grenade_Rethrow::CallFunc_IsValid_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(GA_Athena_Grenade_Rethrow_C_ExecuteUbergraph_GA_Athena_Grenade_Rethrow, CallFunc_K2_SetTimerDelegate_ReturnValue) == 0x000128, "Member 'GA_Athena_Grenade_Rethrow_C_ExecuteUbergraph_GA_Athena_Grenade_Rethrow::CallFunc_K2_SetTimerDelegate_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Athena_Grenade_Rethrow_C_ExecuteUbergraph_GA_Athena_Grenade_Rethrow, K2Node_Event_bWasCancelled) == 0x000130, "Member 'GA_Athena_Grenade_Rethrow_C_ExecuteUbergraph_GA_Athena_Grenade_Rethrow::K2Node_Event_bWasCancelled' has a wrong offset!");
static_assert(offsetof(GA_Athena_Grenade_Rethrow_C_ExecuteUbergraph_GA_Athena_Grenade_Rethrow, K2Node_CreateDelegate_OutputDelegate_4) == 0x000134, "Member 'GA_Athena_Grenade_Rethrow_C_ExecuteUbergraph_GA_Athena_Grenade_Rethrow::K2Node_CreateDelegate_OutputDelegate_4' has a wrong offset!");
static_assert(offsetof(GA_Athena_Grenade_Rethrow_C_ExecuteUbergraph_GA_Athena_Grenade_Rethrow, K2Node_MakeArray_Array) == 0x000140, "Member 'GA_Athena_Grenade_Rethrow_C_ExecuteUbergraph_GA_Athena_Grenade_Rethrow::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(GA_Athena_Grenade_Rethrow_C_ExecuteUbergraph_GA_Athena_Grenade_Rethrow, CallFunc_GetObjectName_ReturnValue) == 0x000150, "Member 'GA_Athena_Grenade_Rethrow_C_ExecuteUbergraph_GA_Athena_Grenade_Rethrow::CallFunc_GetObjectName_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Athena_Grenade_Rethrow_C_ExecuteUbergraph_GA_Athena_Grenade_Rethrow, CallFunc_Contains_ReturnValue) == 0x000160, "Member 'GA_Athena_Grenade_Rethrow_C_ExecuteUbergraph_GA_Athena_Grenade_Rethrow::CallFunc_Contains_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Athena_Grenade_Rethrow_C_ExecuteUbergraph_GA_Athena_Grenade_Rethrow, CallFunc_GetSpawnLocationAndRotation_Location) == 0x000168, "Member 'GA_Athena_Grenade_Rethrow_C_ExecuteUbergraph_GA_Athena_Grenade_Rethrow::CallFunc_GetSpawnLocationAndRotation_Location' has a wrong offset!");
static_assert(offsetof(GA_Athena_Grenade_Rethrow_C_ExecuteUbergraph_GA_Athena_Grenade_Rethrow, CallFunc_GetSpawnLocationAndRotation_Rotation) == 0x000180, "Member 'GA_Athena_Grenade_Rethrow_C_ExecuteUbergraph_GA_Athena_Grenade_Rethrow::CallFunc_GetSpawnLocationAndRotation_Rotation' has a wrong offset!");
static_assert(offsetof(GA_Athena_Grenade_Rethrow_C_ExecuteUbergraph_GA_Athena_Grenade_Rethrow, CallFunc_Conv_RotatorToVector_ReturnValue) == 0x000198, "Member 'GA_Athena_Grenade_Rethrow_C_ExecuteUbergraph_GA_Athena_Grenade_Rethrow::CallFunc_Conv_RotatorToVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Athena_Grenade_Rethrow_C_ExecuteUbergraph_GA_Athena_Grenade_Rethrow, K2Node_Select_Default) == 0x0001B0, "Member 'GA_Athena_Grenade_Rethrow_C_ExecuteUbergraph_GA_Athena_Grenade_Rethrow::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(GA_Athena_Grenade_Rethrow_C_ExecuteUbergraph_GA_Athena_Grenade_Rethrow, CallFunc_K2_SetActorLocation_SweepHitResult) == 0x0001B8, "Member 'GA_Athena_Grenade_Rethrow_C_ExecuteUbergraph_GA_Athena_Grenade_Rethrow::CallFunc_K2_SetActorLocation_SweepHitResult' has a wrong offset!");
static_assert(offsetof(GA_Athena_Grenade_Rethrow_C_ExecuteUbergraph_GA_Athena_Grenade_Rethrow, CallFunc_K2_SetActorLocation_ReturnValue) == 0x000298, "Member 'GA_Athena_Grenade_Rethrow_C_ExecuteUbergraph_GA_Athena_Grenade_Rethrow::CallFunc_K2_SetActorLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Athena_Grenade_Rethrow_C_ExecuteUbergraph_GA_Athena_Grenade_Rethrow, K2Node_MakeStruct_FortGameplayAbilityMontageInfo) == 0x0002A0, "Member 'GA_Athena_Grenade_Rethrow_C_ExecuteUbergraph_GA_Athena_Grenade_Rethrow::K2Node_MakeStruct_FortGameplayAbilityMontageInfo' has a wrong offset!");
static_assert(offsetof(GA_Athena_Grenade_Rethrow_C_ExecuteUbergraph_GA_Athena_Grenade_Rethrow, CallFunc_PlayMontageInfoAndWaitForTrigger_ReturnValue) == 0x0002F8, "Member 'GA_Athena_Grenade_Rethrow_C_ExecuteUbergraph_GA_Athena_Grenade_Rethrow::CallFunc_PlayMontageInfoAndWaitForTrigger_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Athena_Grenade_Rethrow_C_ExecuteUbergraph_GA_Athena_Grenade_Rethrow, CallFunc_GetProjectileInitialSpeedToUse_ProjectileSpeedToUse) == 0x000300, "Member 'GA_Athena_Grenade_Rethrow_C_ExecuteUbergraph_GA_Athena_Grenade_Rethrow::CallFunc_GetProjectileInitialSpeedToUse_ProjectileSpeedToUse' has a wrong offset!");
static_assert(offsetof(GA_Athena_Grenade_Rethrow_C_ExecuteUbergraph_GA_Athena_Grenade_Rethrow, CallFunc_Multiply_VectorFloat_ReturnValue) == 0x000308, "Member 'GA_Athena_Grenade_Rethrow_C_ExecuteUbergraph_GA_Athena_Grenade_Rethrow::CallFunc_Multiply_VectorFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Athena_Grenade_Rethrow_C_ExecuteUbergraph_GA_Athena_Grenade_Rethrow, CallFunc_IsValid_ReturnValue_3) == 0x000320, "Member 'GA_Athena_Grenade_Rethrow_C_ExecuteUbergraph_GA_Athena_Grenade_Rethrow::CallFunc_IsValid_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(GA_Athena_Grenade_Rethrow_C_ExecuteUbergraph_GA_Athena_Grenade_Rethrow, CallFunc_WaitDelay_Time_ImplicitCast) == 0x000324, "Member 'GA_Athena_Grenade_Rethrow_C_ExecuteUbergraph_GA_Athena_Grenade_Rethrow::CallFunc_WaitDelay_Time_ImplicitCast' has a wrong offset!");
static_assert(offsetof(GA_Athena_Grenade_Rethrow_C_ExecuteUbergraph_GA_Athena_Grenade_Rethrow, CallFunc_K2_SetTimerDelegate_Time_ImplicitCast) == 0x000328, "Member 'GA_Athena_Grenade_Rethrow_C_ExecuteUbergraph_GA_Athena_Grenade_Rethrow::CallFunc_K2_SetTimerDelegate_Time_ImplicitCast' has a wrong offset!");

struct GA_Athena_Grenade_Rethrow_C_K2_OnEndAbility final
{
public:
	bool                                          bWasCancelled;
};
static_assert(alignof(GA_Athena_Grenade_Rethrow_C_K2_OnEndAbility) == 0x000001, "Wrong alignment on GA_Athena_Grenade_Rethrow_C_K2_OnEndAbility");
static_assert(sizeof(GA_Athena_Grenade_Rethrow_C_K2_OnEndAbility) == 0x000001, "Wrong size on GA_Athena_Grenade_Rethrow_C_K2_OnEndAbility");
static_assert(offsetof(GA_Athena_Grenade_Rethrow_C_K2_OnEndAbility, bWasCancelled) == 0x000000, "Member 'GA_Athena_Grenade_Rethrow_C_K2_OnEndAbility::bWasCancelled' has a wrong offset!");

struct GA_Athena_Grenade_Rethrow_C_Triggered_3B7299CC49B6C5C075996A9C8DDF315F final
{
public:
	struct FGameplayAbilityTargetDataHandle       TargetData;
	struct FGameplayTag                           ApplicationTag;
};
static_assert(alignof(GA_Athena_Grenade_Rethrow_C_Triggered_3B7299CC49B6C5C075996A9C8DDF315F) == 0x000008, "Wrong alignment on GA_Athena_Grenade_Rethrow_C_Triggered_3B7299CC49B6C5C075996A9C8DDF315F");
static_assert(sizeof(GA_Athena_Grenade_Rethrow_C_Triggered_3B7299CC49B6C5C075996A9C8DDF315F) == 0x000030, "Wrong size on GA_Athena_Grenade_Rethrow_C_Triggered_3B7299CC49B6C5C075996A9C8DDF315F");
static_assert(offsetof(GA_Athena_Grenade_Rethrow_C_Triggered_3B7299CC49B6C5C075996A9C8DDF315F, TargetData) == 0x000000, "Member 'GA_Athena_Grenade_Rethrow_C_Triggered_3B7299CC49B6C5C075996A9C8DDF315F::TargetData' has a wrong offset!");
static_assert(offsetof(GA_Athena_Grenade_Rethrow_C_Triggered_3B7299CC49B6C5C075996A9C8DDF315F, ApplicationTag) == 0x000028, "Member 'GA_Athena_Grenade_Rethrow_C_Triggered_3B7299CC49B6C5C075996A9C8DDF315F::ApplicationTag' has a wrong offset!");

}
