#pragma once

#include "Basic.hpp"

#include "FortniteGame_structs.hpp"
#include "GameplayAbilities_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "Engine_structs.hpp"

namespace SDK::Params
{

struct BP_ZipLine_Athena_Harness_C_ExecuteUbergraph_BP_ZipLine_Athena_Harness final
{
public:
	int32                                         EntryPoint;
	bool                                          Temp_bool_Variable;
	uint8                                         Pad_5[0x3];
	TDelegate<void(class AActor* DamagedActor, float Damage, class AController* InstigatedBy, class AActor* DamageCauser, const struct FVector& HitLocation, class UPrimitiveComponent* FHitComponent, class FName BoneName, const struct FVector& Momentum)> K2Node_CreateDelegate_OutputDelegate;
	bool                                          CallFunc_HasAuthority_ReturnValue;
	uint8                                         Pad_15[0x3];
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_1;
	uint8                                         Pad_24[0x4];
	class UParticleSystemComponent*               CallFunc_SpawnEmitterAttached_ReturnValue;
	struct FTransform                             CallFunc_K2_GetComponentToWorld_ReturnValue;
	struct FVector                                CallFunc_BreakTransform_Location;
	struct FRotator                               CallFunc_BreakTransform_Rotation;
	struct FVector                                CallFunc_BreakTransform_Scale;
	struct FRotator                               CallFunc_K2_GetComponentRotation_ReturnValue;
	bool                                          CallFunc_IsDedicatedServer_ReturnValue;
	uint8                                         Pad_F1[0x3];
	float                                         CallFunc_BreakRotator_Roll;
	float                                         CallFunc_BreakRotator_Pitch;
	float                                         CallFunc_BreakRotator_Yaw;
	struct FRotator                               CallFunc_MakeRotator_ReturnValue;
	struct FHitResult                             CallFunc_K2_SetWorldRotation_SweepHitResult;
	class AActor*                                 K2Node_CustomEvent_DamagedActor;
	float                                         K2Node_CustomEvent_Damage;
	uint8                                         Pad_204[0x4];
	class AController*                            K2Node_CustomEvent_InstigatedBy;
	class AActor*                                 K2Node_CustomEvent_DamageCauser;
	struct FVector                                K2Node_CustomEvent_HitLocation;
	class UPrimitiveComponent*                    K2Node_CustomEvent_FHitComponent;
	class FName                                   K2Node_CustomEvent_BoneName;
	uint8                                         Pad_23C[0x4];
	struct FVector                                K2Node_CustomEvent_Momentum;
	bool                                          Temp_bool_Variable_1;
	uint8                                         Pad_259[0x7];
	class UParticleSystem*                        K2Node_Select_Default;
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue;
	class UParticleSystemComponent*               CallFunc_SpawnEmitterAtLocation_ReturnValue;
	TArray<EFortTeamAffiliation>                  K2Node_MakeArray_Array;
	class AFortAthenaZiplineBase*                 K2Node_CustomEvent_Zipline;
	struct FVector                                K2Node_CustomEvent_DesiredZiplineOffset;
	uint8                                         CallFunc_GetActorTeam_ReturnValue;
	uint8                                         Pad_2B9[0x7];
	class APROTOTYPE_BP_Athena_Dynamic_ZipLine_Spline_C* K2Node_DynamicCast_AsPROTOTYPE_BP_Athena_Dynamic_Zip_Line_Spline;
	bool                                          K2Node_DynamicCast_bSuccess;
	uint8                                         Pad_2C9[0x7];
	class ABP_Athena_Environmental_ZipLine_Spline_C* K2Node_DynamicCast_AsBP_Athena_Environmental_Zip_Line_Spline;
	bool                                          K2Node_DynamicCast_bSuccess_1;
	uint8                                         Pad_2D9[0x3];
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_2;
	struct FVector                                CallFunc_K2_GetComponentLocation_ReturnValue;
	struct FTimerHandle                           CallFunc_K2_SetTimerDelegate_ReturnValue;
	struct FRotator                               CallFunc_MakeRotFromZ_ReturnValue;
	float                                         CallFunc_BreakRotator_Roll_1;
	float                                         CallFunc_BreakRotator_Pitch_1;
	float                                         CallFunc_BreakRotator_Yaw_1;
	uint8                                         Pad_32C[0x4];
	double                                        CallFunc_Subtract_DoubleDouble_ReturnValue;
	struct FRotator                               CallFunc_MakeRotator_ReturnValue_1;
	struct FVector                                CallFunc_FindDirectionClosestToWorldLocation_ReturnValue;
	struct FHitResult                             CallFunc_K2_SetRelativeRotation_SweepHitResult;
	struct FGameplayCueParameters                 CallFunc_MakeGameplayCueParameters_ReturnValue;
	bool                                          CallFunc_IsDedicatedServer_ReturnValue_1;
	uint8                                         Pad_519[0x3];
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_3;
	struct FTimerHandle                           CallFunc_K2_SetTimerDelegate_ReturnValue_1;
	struct FGameplayCueParameters                 CallFunc_MakeGameplayCueParameters_ReturnValue_1;
	class USceneComponent*                        CallFunc_K2_GetRootComponent_ReturnValue;
	class USceneComponent*                        K2Node_Select_Default_1;
	struct FVector                                CallFunc_SelectVector_ReturnValue;
	struct FVector                                CallFunc_Add_VectorVector_ReturnValue;
	struct FVector                                CallFunc_K2_GetComponentLocation_ReturnValue_1;
	struct FHitResult                             CallFunc_K2_SetRelativeLocation_SweepHitResult;
	TArray<class AFortPlayerController*>          Temp_object_Variable;
	struct FTimerHandle                           CallFunc_K2_SetTimerDelegate_ReturnValue_2;
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_4;
	uint8                                         Pad_75C[0x4];
	struct FTimerHandle                           CallFunc_K2_SetTimerDelegate_ReturnValue_3;
	struct FVector                                CallFunc_FindDirectionClosestToWorldLocation_ReturnValue_1;
	float                                         CallFunc_K2_SetTimerDelegate_Time_ImplicitCast;
	float                                         CallFunc_K2_SetTimerDelegate_Time_ImplicitCast_1;
	double                                        CallFunc_Subtract_DoubleDouble_A_ImplicitCast;
	float                                         CallFunc_MakeRotator_Roll_ImplicitCast;
	float                                         CallFunc_K2_SetTimerDelegate_Time_ImplicitCast_2;
};
static_assert(alignof(BP_ZipLine_Athena_Harness_C_ExecuteUbergraph_BP_ZipLine_Athena_Harness) == 0x000010, "Wrong alignment on BP_ZipLine_Athena_Harness_C_ExecuteUbergraph_BP_ZipLine_Athena_Harness");
static_assert(sizeof(BP_ZipLine_Athena_Harness_C_ExecuteUbergraph_BP_ZipLine_Athena_Harness) == 0x0007A0, "Wrong size on BP_ZipLine_Athena_Harness_C_ExecuteUbergraph_BP_ZipLine_Athena_Harness");
static_assert(offsetof(BP_ZipLine_Athena_Harness_C_ExecuteUbergraph_BP_ZipLine_Athena_Harness, EntryPoint) == 0x000000, "Member 'BP_ZipLine_Athena_Harness_C_ExecuteUbergraph_BP_ZipLine_Athena_Harness::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_ZipLine_Athena_Harness_C_ExecuteUbergraph_BP_ZipLine_Athena_Harness, Temp_bool_Variable) == 0x000004, "Member 'BP_ZipLine_Athena_Harness_C_ExecuteUbergraph_BP_ZipLine_Athena_Harness::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(BP_ZipLine_Athena_Harness_C_ExecuteUbergraph_BP_ZipLine_Athena_Harness, K2Node_CreateDelegate_OutputDelegate) == 0x000008, "Member 'BP_ZipLine_Athena_Harness_C_ExecuteUbergraph_BP_ZipLine_Athena_Harness::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(BP_ZipLine_Athena_Harness_C_ExecuteUbergraph_BP_ZipLine_Athena_Harness, CallFunc_HasAuthority_ReturnValue) == 0x000014, "Member 'BP_ZipLine_Athena_Harness_C_ExecuteUbergraph_BP_ZipLine_Athena_Harness::CallFunc_HasAuthority_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ZipLine_Athena_Harness_C_ExecuteUbergraph_BP_ZipLine_Athena_Harness, K2Node_CreateDelegate_OutputDelegate_1) == 0x000018, "Member 'BP_ZipLine_Athena_Harness_C_ExecuteUbergraph_BP_ZipLine_Athena_Harness::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(BP_ZipLine_Athena_Harness_C_ExecuteUbergraph_BP_ZipLine_Athena_Harness, CallFunc_SpawnEmitterAttached_ReturnValue) == 0x000028, "Member 'BP_ZipLine_Athena_Harness_C_ExecuteUbergraph_BP_ZipLine_Athena_Harness::CallFunc_SpawnEmitterAttached_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ZipLine_Athena_Harness_C_ExecuteUbergraph_BP_ZipLine_Athena_Harness, CallFunc_K2_GetComponentToWorld_ReturnValue) == 0x000030, "Member 'BP_ZipLine_Athena_Harness_C_ExecuteUbergraph_BP_ZipLine_Athena_Harness::CallFunc_K2_GetComponentToWorld_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ZipLine_Athena_Harness_C_ExecuteUbergraph_BP_ZipLine_Athena_Harness, CallFunc_BreakTransform_Location) == 0x000090, "Member 'BP_ZipLine_Athena_Harness_C_ExecuteUbergraph_BP_ZipLine_Athena_Harness::CallFunc_BreakTransform_Location' has a wrong offset!");
static_assert(offsetof(BP_ZipLine_Athena_Harness_C_ExecuteUbergraph_BP_ZipLine_Athena_Harness, CallFunc_BreakTransform_Rotation) == 0x0000A8, "Member 'BP_ZipLine_Athena_Harness_C_ExecuteUbergraph_BP_ZipLine_Athena_Harness::CallFunc_BreakTransform_Rotation' has a wrong offset!");
static_assert(offsetof(BP_ZipLine_Athena_Harness_C_ExecuteUbergraph_BP_ZipLine_Athena_Harness, CallFunc_BreakTransform_Scale) == 0x0000C0, "Member 'BP_ZipLine_Athena_Harness_C_ExecuteUbergraph_BP_ZipLine_Athena_Harness::CallFunc_BreakTransform_Scale' has a wrong offset!");
static_assert(offsetof(BP_ZipLine_Athena_Harness_C_ExecuteUbergraph_BP_ZipLine_Athena_Harness, CallFunc_K2_GetComponentRotation_ReturnValue) == 0x0000D8, "Member 'BP_ZipLine_Athena_Harness_C_ExecuteUbergraph_BP_ZipLine_Athena_Harness::CallFunc_K2_GetComponentRotation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ZipLine_Athena_Harness_C_ExecuteUbergraph_BP_ZipLine_Athena_Harness, CallFunc_IsDedicatedServer_ReturnValue) == 0x0000F0, "Member 'BP_ZipLine_Athena_Harness_C_ExecuteUbergraph_BP_ZipLine_Athena_Harness::CallFunc_IsDedicatedServer_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ZipLine_Athena_Harness_C_ExecuteUbergraph_BP_ZipLine_Athena_Harness, CallFunc_BreakRotator_Roll) == 0x0000F4, "Member 'BP_ZipLine_Athena_Harness_C_ExecuteUbergraph_BP_ZipLine_Athena_Harness::CallFunc_BreakRotator_Roll' has a wrong offset!");
static_assert(offsetof(BP_ZipLine_Athena_Harness_C_ExecuteUbergraph_BP_ZipLine_Athena_Harness, CallFunc_BreakRotator_Pitch) == 0x0000F8, "Member 'BP_ZipLine_Athena_Harness_C_ExecuteUbergraph_BP_ZipLine_Athena_Harness::CallFunc_BreakRotator_Pitch' has a wrong offset!");
static_assert(offsetof(BP_ZipLine_Athena_Harness_C_ExecuteUbergraph_BP_ZipLine_Athena_Harness, CallFunc_BreakRotator_Yaw) == 0x0000FC, "Member 'BP_ZipLine_Athena_Harness_C_ExecuteUbergraph_BP_ZipLine_Athena_Harness::CallFunc_BreakRotator_Yaw' has a wrong offset!");
static_assert(offsetof(BP_ZipLine_Athena_Harness_C_ExecuteUbergraph_BP_ZipLine_Athena_Harness, CallFunc_MakeRotator_ReturnValue) == 0x000100, "Member 'BP_ZipLine_Athena_Harness_C_ExecuteUbergraph_BP_ZipLine_Athena_Harness::CallFunc_MakeRotator_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ZipLine_Athena_Harness_C_ExecuteUbergraph_BP_ZipLine_Athena_Harness, CallFunc_K2_SetWorldRotation_SweepHitResult) == 0x000118, "Member 'BP_ZipLine_Athena_Harness_C_ExecuteUbergraph_BP_ZipLine_Athena_Harness::CallFunc_K2_SetWorldRotation_SweepHitResult' has a wrong offset!");
static_assert(offsetof(BP_ZipLine_Athena_Harness_C_ExecuteUbergraph_BP_ZipLine_Athena_Harness, K2Node_CustomEvent_DamagedActor) == 0x0001F8, "Member 'BP_ZipLine_Athena_Harness_C_ExecuteUbergraph_BP_ZipLine_Athena_Harness::K2Node_CustomEvent_DamagedActor' has a wrong offset!");
static_assert(offsetof(BP_ZipLine_Athena_Harness_C_ExecuteUbergraph_BP_ZipLine_Athena_Harness, K2Node_CustomEvent_Damage) == 0x000200, "Member 'BP_ZipLine_Athena_Harness_C_ExecuteUbergraph_BP_ZipLine_Athena_Harness::K2Node_CustomEvent_Damage' has a wrong offset!");
static_assert(offsetof(BP_ZipLine_Athena_Harness_C_ExecuteUbergraph_BP_ZipLine_Athena_Harness, K2Node_CustomEvent_InstigatedBy) == 0x000208, "Member 'BP_ZipLine_Athena_Harness_C_ExecuteUbergraph_BP_ZipLine_Athena_Harness::K2Node_CustomEvent_InstigatedBy' has a wrong offset!");
static_assert(offsetof(BP_ZipLine_Athena_Harness_C_ExecuteUbergraph_BP_ZipLine_Athena_Harness, K2Node_CustomEvent_DamageCauser) == 0x000210, "Member 'BP_ZipLine_Athena_Harness_C_ExecuteUbergraph_BP_ZipLine_Athena_Harness::K2Node_CustomEvent_DamageCauser' has a wrong offset!");
static_assert(offsetof(BP_ZipLine_Athena_Harness_C_ExecuteUbergraph_BP_ZipLine_Athena_Harness, K2Node_CustomEvent_HitLocation) == 0x000218, "Member 'BP_ZipLine_Athena_Harness_C_ExecuteUbergraph_BP_ZipLine_Athena_Harness::K2Node_CustomEvent_HitLocation' has a wrong offset!");
static_assert(offsetof(BP_ZipLine_Athena_Harness_C_ExecuteUbergraph_BP_ZipLine_Athena_Harness, K2Node_CustomEvent_FHitComponent) == 0x000230, "Member 'BP_ZipLine_Athena_Harness_C_ExecuteUbergraph_BP_ZipLine_Athena_Harness::K2Node_CustomEvent_FHitComponent' has a wrong offset!");
static_assert(offsetof(BP_ZipLine_Athena_Harness_C_ExecuteUbergraph_BP_ZipLine_Athena_Harness, K2Node_CustomEvent_BoneName) == 0x000238, "Member 'BP_ZipLine_Athena_Harness_C_ExecuteUbergraph_BP_ZipLine_Athena_Harness::K2Node_CustomEvent_BoneName' has a wrong offset!");
static_assert(offsetof(BP_ZipLine_Athena_Harness_C_ExecuteUbergraph_BP_ZipLine_Athena_Harness, K2Node_CustomEvent_Momentum) == 0x000240, "Member 'BP_ZipLine_Athena_Harness_C_ExecuteUbergraph_BP_ZipLine_Athena_Harness::K2Node_CustomEvent_Momentum' has a wrong offset!");
static_assert(offsetof(BP_ZipLine_Athena_Harness_C_ExecuteUbergraph_BP_ZipLine_Athena_Harness, Temp_bool_Variable_1) == 0x000258, "Member 'BP_ZipLine_Athena_Harness_C_ExecuteUbergraph_BP_ZipLine_Athena_Harness::Temp_bool_Variable_1' has a wrong offset!");
static_assert(offsetof(BP_ZipLine_Athena_Harness_C_ExecuteUbergraph_BP_ZipLine_Athena_Harness, K2Node_Select_Default) == 0x000260, "Member 'BP_ZipLine_Athena_Harness_C_ExecuteUbergraph_BP_ZipLine_Athena_Harness::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(BP_ZipLine_Athena_Harness_C_ExecuteUbergraph_BP_ZipLine_Athena_Harness, CallFunc_K2_GetActorLocation_ReturnValue) == 0x000268, "Member 'BP_ZipLine_Athena_Harness_C_ExecuteUbergraph_BP_ZipLine_Athena_Harness::CallFunc_K2_GetActorLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ZipLine_Athena_Harness_C_ExecuteUbergraph_BP_ZipLine_Athena_Harness, CallFunc_SpawnEmitterAtLocation_ReturnValue) == 0x000280, "Member 'BP_ZipLine_Athena_Harness_C_ExecuteUbergraph_BP_ZipLine_Athena_Harness::CallFunc_SpawnEmitterAtLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ZipLine_Athena_Harness_C_ExecuteUbergraph_BP_ZipLine_Athena_Harness, K2Node_MakeArray_Array) == 0x000288, "Member 'BP_ZipLine_Athena_Harness_C_ExecuteUbergraph_BP_ZipLine_Athena_Harness::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(BP_ZipLine_Athena_Harness_C_ExecuteUbergraph_BP_ZipLine_Athena_Harness, K2Node_CustomEvent_Zipline) == 0x000298, "Member 'BP_ZipLine_Athena_Harness_C_ExecuteUbergraph_BP_ZipLine_Athena_Harness::K2Node_CustomEvent_Zipline' has a wrong offset!");
static_assert(offsetof(BP_ZipLine_Athena_Harness_C_ExecuteUbergraph_BP_ZipLine_Athena_Harness, K2Node_CustomEvent_DesiredZiplineOffset) == 0x0002A0, "Member 'BP_ZipLine_Athena_Harness_C_ExecuteUbergraph_BP_ZipLine_Athena_Harness::K2Node_CustomEvent_DesiredZiplineOffset' has a wrong offset!");
static_assert(offsetof(BP_ZipLine_Athena_Harness_C_ExecuteUbergraph_BP_ZipLine_Athena_Harness, CallFunc_GetActorTeam_ReturnValue) == 0x0002B8, "Member 'BP_ZipLine_Athena_Harness_C_ExecuteUbergraph_BP_ZipLine_Athena_Harness::CallFunc_GetActorTeam_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ZipLine_Athena_Harness_C_ExecuteUbergraph_BP_ZipLine_Athena_Harness, K2Node_DynamicCast_AsPROTOTYPE_BP_Athena_Dynamic_Zip_Line_Spline) == 0x0002C0, "Member 'BP_ZipLine_Athena_Harness_C_ExecuteUbergraph_BP_ZipLine_Athena_Harness::K2Node_DynamicCast_AsPROTOTYPE_BP_Athena_Dynamic_Zip_Line_Spline' has a wrong offset!");
static_assert(offsetof(BP_ZipLine_Athena_Harness_C_ExecuteUbergraph_BP_ZipLine_Athena_Harness, K2Node_DynamicCast_bSuccess) == 0x0002C8, "Member 'BP_ZipLine_Athena_Harness_C_ExecuteUbergraph_BP_ZipLine_Athena_Harness::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BP_ZipLine_Athena_Harness_C_ExecuteUbergraph_BP_ZipLine_Athena_Harness, K2Node_DynamicCast_AsBP_Athena_Environmental_Zip_Line_Spline) == 0x0002D0, "Member 'BP_ZipLine_Athena_Harness_C_ExecuteUbergraph_BP_ZipLine_Athena_Harness::K2Node_DynamicCast_AsBP_Athena_Environmental_Zip_Line_Spline' has a wrong offset!");
static_assert(offsetof(BP_ZipLine_Athena_Harness_C_ExecuteUbergraph_BP_ZipLine_Athena_Harness, K2Node_DynamicCast_bSuccess_1) == 0x0002D8, "Member 'BP_ZipLine_Athena_Harness_C_ExecuteUbergraph_BP_ZipLine_Athena_Harness::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(BP_ZipLine_Athena_Harness_C_ExecuteUbergraph_BP_ZipLine_Athena_Harness, K2Node_CreateDelegate_OutputDelegate_2) == 0x0002DC, "Member 'BP_ZipLine_Athena_Harness_C_ExecuteUbergraph_BP_ZipLine_Athena_Harness::K2Node_CreateDelegate_OutputDelegate_2' has a wrong offset!");
static_assert(offsetof(BP_ZipLine_Athena_Harness_C_ExecuteUbergraph_BP_ZipLine_Athena_Harness, CallFunc_K2_GetComponentLocation_ReturnValue) == 0x0002E8, "Member 'BP_ZipLine_Athena_Harness_C_ExecuteUbergraph_BP_ZipLine_Athena_Harness::CallFunc_K2_GetComponentLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ZipLine_Athena_Harness_C_ExecuteUbergraph_BP_ZipLine_Athena_Harness, CallFunc_K2_SetTimerDelegate_ReturnValue) == 0x000300, "Member 'BP_ZipLine_Athena_Harness_C_ExecuteUbergraph_BP_ZipLine_Athena_Harness::CallFunc_K2_SetTimerDelegate_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ZipLine_Athena_Harness_C_ExecuteUbergraph_BP_ZipLine_Athena_Harness, CallFunc_MakeRotFromZ_ReturnValue) == 0x000308, "Member 'BP_ZipLine_Athena_Harness_C_ExecuteUbergraph_BP_ZipLine_Athena_Harness::CallFunc_MakeRotFromZ_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ZipLine_Athena_Harness_C_ExecuteUbergraph_BP_ZipLine_Athena_Harness, CallFunc_BreakRotator_Roll_1) == 0x000320, "Member 'BP_ZipLine_Athena_Harness_C_ExecuteUbergraph_BP_ZipLine_Athena_Harness::CallFunc_BreakRotator_Roll_1' has a wrong offset!");
static_assert(offsetof(BP_ZipLine_Athena_Harness_C_ExecuteUbergraph_BP_ZipLine_Athena_Harness, CallFunc_BreakRotator_Pitch_1) == 0x000324, "Member 'BP_ZipLine_Athena_Harness_C_ExecuteUbergraph_BP_ZipLine_Athena_Harness::CallFunc_BreakRotator_Pitch_1' has a wrong offset!");
static_assert(offsetof(BP_ZipLine_Athena_Harness_C_ExecuteUbergraph_BP_ZipLine_Athena_Harness, CallFunc_BreakRotator_Yaw_1) == 0x000328, "Member 'BP_ZipLine_Athena_Harness_C_ExecuteUbergraph_BP_ZipLine_Athena_Harness::CallFunc_BreakRotator_Yaw_1' has a wrong offset!");
static_assert(offsetof(BP_ZipLine_Athena_Harness_C_ExecuteUbergraph_BP_ZipLine_Athena_Harness, CallFunc_Subtract_DoubleDouble_ReturnValue) == 0x000330, "Member 'BP_ZipLine_Athena_Harness_C_ExecuteUbergraph_BP_ZipLine_Athena_Harness::CallFunc_Subtract_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ZipLine_Athena_Harness_C_ExecuteUbergraph_BP_ZipLine_Athena_Harness, CallFunc_MakeRotator_ReturnValue_1) == 0x000338, "Member 'BP_ZipLine_Athena_Harness_C_ExecuteUbergraph_BP_ZipLine_Athena_Harness::CallFunc_MakeRotator_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_ZipLine_Athena_Harness_C_ExecuteUbergraph_BP_ZipLine_Athena_Harness, CallFunc_FindDirectionClosestToWorldLocation_ReturnValue) == 0x000350, "Member 'BP_ZipLine_Athena_Harness_C_ExecuteUbergraph_BP_ZipLine_Athena_Harness::CallFunc_FindDirectionClosestToWorldLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ZipLine_Athena_Harness_C_ExecuteUbergraph_BP_ZipLine_Athena_Harness, CallFunc_K2_SetRelativeRotation_SweepHitResult) == 0x000368, "Member 'BP_ZipLine_Athena_Harness_C_ExecuteUbergraph_BP_ZipLine_Athena_Harness::CallFunc_K2_SetRelativeRotation_SweepHitResult' has a wrong offset!");
static_assert(offsetof(BP_ZipLine_Athena_Harness_C_ExecuteUbergraph_BP_ZipLine_Athena_Harness, CallFunc_MakeGameplayCueParameters_ReturnValue) == 0x000448, "Member 'BP_ZipLine_Athena_Harness_C_ExecuteUbergraph_BP_ZipLine_Athena_Harness::CallFunc_MakeGameplayCueParameters_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ZipLine_Athena_Harness_C_ExecuteUbergraph_BP_ZipLine_Athena_Harness, CallFunc_IsDedicatedServer_ReturnValue_1) == 0x000518, "Member 'BP_ZipLine_Athena_Harness_C_ExecuteUbergraph_BP_ZipLine_Athena_Harness::CallFunc_IsDedicatedServer_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_ZipLine_Athena_Harness_C_ExecuteUbergraph_BP_ZipLine_Athena_Harness, K2Node_CreateDelegate_OutputDelegate_3) == 0x00051C, "Member 'BP_ZipLine_Athena_Harness_C_ExecuteUbergraph_BP_ZipLine_Athena_Harness::K2Node_CreateDelegate_OutputDelegate_3' has a wrong offset!");
static_assert(offsetof(BP_ZipLine_Athena_Harness_C_ExecuteUbergraph_BP_ZipLine_Athena_Harness, CallFunc_K2_SetTimerDelegate_ReturnValue_1) == 0x000528, "Member 'BP_ZipLine_Athena_Harness_C_ExecuteUbergraph_BP_ZipLine_Athena_Harness::CallFunc_K2_SetTimerDelegate_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_ZipLine_Athena_Harness_C_ExecuteUbergraph_BP_ZipLine_Athena_Harness, CallFunc_MakeGameplayCueParameters_ReturnValue_1) == 0x000530, "Member 'BP_ZipLine_Athena_Harness_C_ExecuteUbergraph_BP_ZipLine_Athena_Harness::CallFunc_MakeGameplayCueParameters_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_ZipLine_Athena_Harness_C_ExecuteUbergraph_BP_ZipLine_Athena_Harness, CallFunc_K2_GetRootComponent_ReturnValue) == 0x000600, "Member 'BP_ZipLine_Athena_Harness_C_ExecuteUbergraph_BP_ZipLine_Athena_Harness::CallFunc_K2_GetRootComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ZipLine_Athena_Harness_C_ExecuteUbergraph_BP_ZipLine_Athena_Harness, K2Node_Select_Default_1) == 0x000608, "Member 'BP_ZipLine_Athena_Harness_C_ExecuteUbergraph_BP_ZipLine_Athena_Harness::K2Node_Select_Default_1' has a wrong offset!");
static_assert(offsetof(BP_ZipLine_Athena_Harness_C_ExecuteUbergraph_BP_ZipLine_Athena_Harness, CallFunc_SelectVector_ReturnValue) == 0x000610, "Member 'BP_ZipLine_Athena_Harness_C_ExecuteUbergraph_BP_ZipLine_Athena_Harness::CallFunc_SelectVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ZipLine_Athena_Harness_C_ExecuteUbergraph_BP_ZipLine_Athena_Harness, CallFunc_Add_VectorVector_ReturnValue) == 0x000628, "Member 'BP_ZipLine_Athena_Harness_C_ExecuteUbergraph_BP_ZipLine_Athena_Harness::CallFunc_Add_VectorVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ZipLine_Athena_Harness_C_ExecuteUbergraph_BP_ZipLine_Athena_Harness, CallFunc_K2_GetComponentLocation_ReturnValue_1) == 0x000640, "Member 'BP_ZipLine_Athena_Harness_C_ExecuteUbergraph_BP_ZipLine_Athena_Harness::CallFunc_K2_GetComponentLocation_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_ZipLine_Athena_Harness_C_ExecuteUbergraph_BP_ZipLine_Athena_Harness, CallFunc_K2_SetRelativeLocation_SweepHitResult) == 0x000658, "Member 'BP_ZipLine_Athena_Harness_C_ExecuteUbergraph_BP_ZipLine_Athena_Harness::CallFunc_K2_SetRelativeLocation_SweepHitResult' has a wrong offset!");
static_assert(offsetof(BP_ZipLine_Athena_Harness_C_ExecuteUbergraph_BP_ZipLine_Athena_Harness, Temp_object_Variable) == 0x000738, "Member 'BP_ZipLine_Athena_Harness_C_ExecuteUbergraph_BP_ZipLine_Athena_Harness::Temp_object_Variable' has a wrong offset!");
static_assert(offsetof(BP_ZipLine_Athena_Harness_C_ExecuteUbergraph_BP_ZipLine_Athena_Harness, CallFunc_K2_SetTimerDelegate_ReturnValue_2) == 0x000748, "Member 'BP_ZipLine_Athena_Harness_C_ExecuteUbergraph_BP_ZipLine_Athena_Harness::CallFunc_K2_SetTimerDelegate_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_ZipLine_Athena_Harness_C_ExecuteUbergraph_BP_ZipLine_Athena_Harness, K2Node_CreateDelegate_OutputDelegate_4) == 0x000750, "Member 'BP_ZipLine_Athena_Harness_C_ExecuteUbergraph_BP_ZipLine_Athena_Harness::K2Node_CreateDelegate_OutputDelegate_4' has a wrong offset!");
static_assert(offsetof(BP_ZipLine_Athena_Harness_C_ExecuteUbergraph_BP_ZipLine_Athena_Harness, CallFunc_K2_SetTimerDelegate_ReturnValue_3) == 0x000760, "Member 'BP_ZipLine_Athena_Harness_C_ExecuteUbergraph_BP_ZipLine_Athena_Harness::CallFunc_K2_SetTimerDelegate_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(BP_ZipLine_Athena_Harness_C_ExecuteUbergraph_BP_ZipLine_Athena_Harness, CallFunc_FindDirectionClosestToWorldLocation_ReturnValue_1) == 0x000768, "Member 'BP_ZipLine_Athena_Harness_C_ExecuteUbergraph_BP_ZipLine_Athena_Harness::CallFunc_FindDirectionClosestToWorldLocation_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_ZipLine_Athena_Harness_C_ExecuteUbergraph_BP_ZipLine_Athena_Harness, CallFunc_K2_SetTimerDelegate_Time_ImplicitCast) == 0x000780, "Member 'BP_ZipLine_Athena_Harness_C_ExecuteUbergraph_BP_ZipLine_Athena_Harness::CallFunc_K2_SetTimerDelegate_Time_ImplicitCast' has a wrong offset!");
static_assert(offsetof(BP_ZipLine_Athena_Harness_C_ExecuteUbergraph_BP_ZipLine_Athena_Harness, CallFunc_K2_SetTimerDelegate_Time_ImplicitCast_1) == 0x000784, "Member 'BP_ZipLine_Athena_Harness_C_ExecuteUbergraph_BP_ZipLine_Athena_Harness::CallFunc_K2_SetTimerDelegate_Time_ImplicitCast_1' has a wrong offset!");
static_assert(offsetof(BP_ZipLine_Athena_Harness_C_ExecuteUbergraph_BP_ZipLine_Athena_Harness, CallFunc_Subtract_DoubleDouble_A_ImplicitCast) == 0x000788, "Member 'BP_ZipLine_Athena_Harness_C_ExecuteUbergraph_BP_ZipLine_Athena_Harness::CallFunc_Subtract_DoubleDouble_A_ImplicitCast' has a wrong offset!");
static_assert(offsetof(BP_ZipLine_Athena_Harness_C_ExecuteUbergraph_BP_ZipLine_Athena_Harness, CallFunc_MakeRotator_Roll_ImplicitCast) == 0x000790, "Member 'BP_ZipLine_Athena_Harness_C_ExecuteUbergraph_BP_ZipLine_Athena_Harness::CallFunc_MakeRotator_Roll_ImplicitCast' has a wrong offset!");
static_assert(offsetof(BP_ZipLine_Athena_Harness_C_ExecuteUbergraph_BP_ZipLine_Athena_Harness, CallFunc_K2_SetTimerDelegate_Time_ImplicitCast_2) == 0x000794, "Member 'BP_ZipLine_Athena_Harness_C_ExecuteUbergraph_BP_ZipLine_Athena_Harness::CallFunc_K2_SetTimerDelegate_Time_ImplicitCast_2' has a wrong offset!");

struct BP_ZipLine_Athena_Harness_C_HandleOnDied final
{
public:
	class AActor*                                 DamagedActor;
	float                                         Damage;
	uint8                                         Pad_C[0x4];
	class AController*                            InstigatedBy;
	class AActor*                                 DamageCauser;
	struct FVector                                HitLocation;
	class UPrimitiveComponent*                    FHitComponent;
	class FName                                   BoneName;
	uint8                                         Pad_44[0x4];
	struct FVector                                Momentum;
};
static_assert(alignof(BP_ZipLine_Athena_Harness_C_HandleOnDied) == 0x000008, "Wrong alignment on BP_ZipLine_Athena_Harness_C_HandleOnDied");
static_assert(sizeof(BP_ZipLine_Athena_Harness_C_HandleOnDied) == 0x000060, "Wrong size on BP_ZipLine_Athena_Harness_C_HandleOnDied");
static_assert(offsetof(BP_ZipLine_Athena_Harness_C_HandleOnDied, DamagedActor) == 0x000000, "Member 'BP_ZipLine_Athena_Harness_C_HandleOnDied::DamagedActor' has a wrong offset!");
static_assert(offsetof(BP_ZipLine_Athena_Harness_C_HandleOnDied, Damage) == 0x000008, "Member 'BP_ZipLine_Athena_Harness_C_HandleOnDied::Damage' has a wrong offset!");
static_assert(offsetof(BP_ZipLine_Athena_Harness_C_HandleOnDied, InstigatedBy) == 0x000010, "Member 'BP_ZipLine_Athena_Harness_C_HandleOnDied::InstigatedBy' has a wrong offset!");
static_assert(offsetof(BP_ZipLine_Athena_Harness_C_HandleOnDied, DamageCauser) == 0x000018, "Member 'BP_ZipLine_Athena_Harness_C_HandleOnDied::DamageCauser' has a wrong offset!");
static_assert(offsetof(BP_ZipLine_Athena_Harness_C_HandleOnDied, HitLocation) == 0x000020, "Member 'BP_ZipLine_Athena_Harness_C_HandleOnDied::HitLocation' has a wrong offset!");
static_assert(offsetof(BP_ZipLine_Athena_Harness_C_HandleOnDied, FHitComponent) == 0x000038, "Member 'BP_ZipLine_Athena_Harness_C_HandleOnDied::FHitComponent' has a wrong offset!");
static_assert(offsetof(BP_ZipLine_Athena_Harness_C_HandleOnDied, BoneName) == 0x000040, "Member 'BP_ZipLine_Athena_Harness_C_HandleOnDied::BoneName' has a wrong offset!");
static_assert(offsetof(BP_ZipLine_Athena_Harness_C_HandleOnDied, Momentum) == 0x000048, "Member 'BP_ZipLine_Athena_Harness_C_HandleOnDied::Momentum' has a wrong offset!");

struct BP_ZipLine_Athena_Harness_C_OrientMotorForZipline final
{
public:
	class AFortAthenaZiplineBase*                 Zipline;
	struct FVector                                DesiredZiplineOffset;
};
static_assert(alignof(BP_ZipLine_Athena_Harness_C_OrientMotorForZipline) == 0x000008, "Wrong alignment on BP_ZipLine_Athena_Harness_C_OrientMotorForZipline");
static_assert(sizeof(BP_ZipLine_Athena_Harness_C_OrientMotorForZipline) == 0x000020, "Wrong size on BP_ZipLine_Athena_Harness_C_OrientMotorForZipline");
static_assert(offsetof(BP_ZipLine_Athena_Harness_C_OrientMotorForZipline, Zipline) == 0x000000, "Member 'BP_ZipLine_Athena_Harness_C_OrientMotorForZipline::Zipline' has a wrong offset!");
static_assert(offsetof(BP_ZipLine_Athena_Harness_C_OrientMotorForZipline, DesiredZiplineOffset) == 0x000008, "Member 'BP_ZipLine_Athena_Harness_C_OrientMotorForZipline::DesiredZiplineOffset' has a wrong offset!");

struct BP_ZipLine_Athena_Harness_C_Update_Audio_and_VFXParams final
{
public:
	double                                        Alpha;
	double                                        SpeedFactor;
	double                                        CallFunc_Multiply_DoubleDouble_ReturnValue;
	double                                        CallFunc_Abs_ReturnValue;
	struct FGameplayCueParameters                 CallFunc_MakeGameplayCueParameters_ReturnValue;
	bool                                          CallFunc_Greater_DoubleDouble_ReturnValue;
	bool                                          CallFunc_Greater_DoubleDouble_ReturnValue_1;
	uint8                                         Pad_F2[0x6];
	double                                        CallFunc_Abs_ReturnValue_1;
	bool                                          CallFunc_Less_DoubleDouble_ReturnValue;
	uint8                                         Pad_101[0x7];
	struct FGameplayCueParameters                 CallFunc_MakeGameplayCueParameters_ReturnValue_1;
	float                                         CallFunc_GetZiplineSpeedFactor_ReturnValue;
	float                                         CallFunc_GetZiplineSpeedFactorTarget_ReturnValue;
	bool                                          CallFunc_Greater_DoubleDouble_ReturnValue_2;
	bool                                          CallFunc_Less_DoubleDouble_ReturnValue_1;
	bool                                          CallFunc_BooleanAND_ReturnValue;
	bool                                          CallFunc_BooleanAND_ReturnValue_1;
	bool                                          CallFunc_BooleanOR_ReturnValue;
	bool                                          CallFunc_NotEqual_BoolBool_ReturnValue;
	uint8                                         Pad_1E6[0x2];
	float                                         CallFunc_MakeGameplayCueParameters_NormalizedMagnitude_ImplicitCast;
	float                                         CallFunc_MakeGameplayCueParameters_NormalizedMagnitude_ImplicitCast_1;
	double                                        K2Node_VariableSet_SpeedFactor_ImplicitCast;
	double                                        CallFunc_Greater_DoubleDouble_A_ImplicitCast;
	double                                        CallFunc_Less_DoubleDouble_A_ImplicitCast;
};
static_assert(alignof(BP_ZipLine_Athena_Harness_C_Update_Audio_and_VFXParams) == 0x000008, "Wrong alignment on BP_ZipLine_Athena_Harness_C_Update_Audio_and_VFXParams");
static_assert(sizeof(BP_ZipLine_Athena_Harness_C_Update_Audio_and_VFXParams) == 0x000208, "Wrong size on BP_ZipLine_Athena_Harness_C_Update_Audio_and_VFXParams");
static_assert(offsetof(BP_ZipLine_Athena_Harness_C_Update_Audio_and_VFXParams, Alpha) == 0x000000, "Member 'BP_ZipLine_Athena_Harness_C_Update_Audio_and_VFXParams::Alpha' has a wrong offset!");
static_assert(offsetof(BP_ZipLine_Athena_Harness_C_Update_Audio_and_VFXParams, SpeedFactor) == 0x000008, "Member 'BP_ZipLine_Athena_Harness_C_Update_Audio_and_VFXParams::SpeedFactor' has a wrong offset!");
static_assert(offsetof(BP_ZipLine_Athena_Harness_C_Update_Audio_and_VFXParams, CallFunc_Multiply_DoubleDouble_ReturnValue) == 0x000010, "Member 'BP_ZipLine_Athena_Harness_C_Update_Audio_and_VFXParams::CallFunc_Multiply_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ZipLine_Athena_Harness_C_Update_Audio_and_VFXParams, CallFunc_Abs_ReturnValue) == 0x000018, "Member 'BP_ZipLine_Athena_Harness_C_Update_Audio_and_VFXParams::CallFunc_Abs_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ZipLine_Athena_Harness_C_Update_Audio_and_VFXParams, CallFunc_MakeGameplayCueParameters_ReturnValue) == 0x000020, "Member 'BP_ZipLine_Athena_Harness_C_Update_Audio_and_VFXParams::CallFunc_MakeGameplayCueParameters_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ZipLine_Athena_Harness_C_Update_Audio_and_VFXParams, CallFunc_Greater_DoubleDouble_ReturnValue) == 0x0000F0, "Member 'BP_ZipLine_Athena_Harness_C_Update_Audio_and_VFXParams::CallFunc_Greater_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ZipLine_Athena_Harness_C_Update_Audio_and_VFXParams, CallFunc_Greater_DoubleDouble_ReturnValue_1) == 0x0000F1, "Member 'BP_ZipLine_Athena_Harness_C_Update_Audio_and_VFXParams::CallFunc_Greater_DoubleDouble_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_ZipLine_Athena_Harness_C_Update_Audio_and_VFXParams, CallFunc_Abs_ReturnValue_1) == 0x0000F8, "Member 'BP_ZipLine_Athena_Harness_C_Update_Audio_and_VFXParams::CallFunc_Abs_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_ZipLine_Athena_Harness_C_Update_Audio_and_VFXParams, CallFunc_Less_DoubleDouble_ReturnValue) == 0x000100, "Member 'BP_ZipLine_Athena_Harness_C_Update_Audio_and_VFXParams::CallFunc_Less_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ZipLine_Athena_Harness_C_Update_Audio_and_VFXParams, CallFunc_MakeGameplayCueParameters_ReturnValue_1) == 0x000108, "Member 'BP_ZipLine_Athena_Harness_C_Update_Audio_and_VFXParams::CallFunc_MakeGameplayCueParameters_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_ZipLine_Athena_Harness_C_Update_Audio_and_VFXParams, CallFunc_GetZiplineSpeedFactor_ReturnValue) == 0x0001D8, "Member 'BP_ZipLine_Athena_Harness_C_Update_Audio_and_VFXParams::CallFunc_GetZiplineSpeedFactor_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ZipLine_Athena_Harness_C_Update_Audio_and_VFXParams, CallFunc_GetZiplineSpeedFactorTarget_ReturnValue) == 0x0001DC, "Member 'BP_ZipLine_Athena_Harness_C_Update_Audio_and_VFXParams::CallFunc_GetZiplineSpeedFactorTarget_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ZipLine_Athena_Harness_C_Update_Audio_and_VFXParams, CallFunc_Greater_DoubleDouble_ReturnValue_2) == 0x0001E0, "Member 'BP_ZipLine_Athena_Harness_C_Update_Audio_and_VFXParams::CallFunc_Greater_DoubleDouble_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_ZipLine_Athena_Harness_C_Update_Audio_and_VFXParams, CallFunc_Less_DoubleDouble_ReturnValue_1) == 0x0001E1, "Member 'BP_ZipLine_Athena_Harness_C_Update_Audio_and_VFXParams::CallFunc_Less_DoubleDouble_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_ZipLine_Athena_Harness_C_Update_Audio_and_VFXParams, CallFunc_BooleanAND_ReturnValue) == 0x0001E2, "Member 'BP_ZipLine_Athena_Harness_C_Update_Audio_and_VFXParams::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ZipLine_Athena_Harness_C_Update_Audio_and_VFXParams, CallFunc_BooleanAND_ReturnValue_1) == 0x0001E3, "Member 'BP_ZipLine_Athena_Harness_C_Update_Audio_and_VFXParams::CallFunc_BooleanAND_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_ZipLine_Athena_Harness_C_Update_Audio_and_VFXParams, CallFunc_BooleanOR_ReturnValue) == 0x0001E4, "Member 'BP_ZipLine_Athena_Harness_C_Update_Audio_and_VFXParams::CallFunc_BooleanOR_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ZipLine_Athena_Harness_C_Update_Audio_and_VFXParams, CallFunc_NotEqual_BoolBool_ReturnValue) == 0x0001E5, "Member 'BP_ZipLine_Athena_Harness_C_Update_Audio_and_VFXParams::CallFunc_NotEqual_BoolBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ZipLine_Athena_Harness_C_Update_Audio_and_VFXParams, CallFunc_MakeGameplayCueParameters_NormalizedMagnitude_ImplicitCast) == 0x0001E8, "Member 'BP_ZipLine_Athena_Harness_C_Update_Audio_and_VFXParams::CallFunc_MakeGameplayCueParameters_NormalizedMagnitude_ImplicitCast' has a wrong offset!");
static_assert(offsetof(BP_ZipLine_Athena_Harness_C_Update_Audio_and_VFXParams, CallFunc_MakeGameplayCueParameters_NormalizedMagnitude_ImplicitCast_1) == 0x0001EC, "Member 'BP_ZipLine_Athena_Harness_C_Update_Audio_and_VFXParams::CallFunc_MakeGameplayCueParameters_NormalizedMagnitude_ImplicitCast_1' has a wrong offset!");
static_assert(offsetof(BP_ZipLine_Athena_Harness_C_Update_Audio_and_VFXParams, K2Node_VariableSet_SpeedFactor_ImplicitCast) == 0x0001F0, "Member 'BP_ZipLine_Athena_Harness_C_Update_Audio_and_VFXParams::K2Node_VariableSet_SpeedFactor_ImplicitCast' has a wrong offset!");
static_assert(offsetof(BP_ZipLine_Athena_Harness_C_Update_Audio_and_VFXParams, CallFunc_Greater_DoubleDouble_A_ImplicitCast) == 0x0001F8, "Member 'BP_ZipLine_Athena_Harness_C_Update_Audio_and_VFXParams::CallFunc_Greater_DoubleDouble_A_ImplicitCast' has a wrong offset!");
static_assert(offsetof(BP_ZipLine_Athena_Harness_C_Update_Audio_and_VFXParams, CallFunc_Less_DoubleDouble_A_ImplicitCast) == 0x000200, "Member 'BP_ZipLine_Athena_Harness_C_Update_Audio_and_VFXParams::CallFunc_Less_DoubleDouble_A_ImplicitCast' has a wrong offset!");

}
