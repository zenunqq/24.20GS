#pragma once

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "GameplayTags_structs.hpp"
#include "Engine_structs.hpp"
#include "GameplayAbilities_structs.hpp"

namespace SDK::Params
{

struct B_HidingProp_WilliePete_C_BndEvt__overlapCylinder_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature final
{
public:
	class UPrimitiveComponent*                    OverlappedComponent;
	class AActor*                                 OtherActor;
	class UPrimitiveComponent*                    OtherComp;
	int32                                         OtherBodyIndex;
	bool                                          bFromSweep;
	uint8                                         Pad_1D[0x3];
	struct FHitResult                             SweepResult;
};
static_assert(alignof(B_HidingProp_WilliePete_C_BndEvt__overlapCylinder_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature) == 0x000008, "Wrong alignment on B_HidingProp_WilliePete_C_BndEvt__overlapCylinder_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature");
static_assert(sizeof(B_HidingProp_WilliePete_C_BndEvt__overlapCylinder_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature) == 0x000100, "Wrong size on B_HidingProp_WilliePete_C_BndEvt__overlapCylinder_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature");
static_assert(offsetof(B_HidingProp_WilliePete_C_BndEvt__overlapCylinder_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature, OverlappedComponent) == 0x000000, "Member 'B_HidingProp_WilliePete_C_BndEvt__overlapCylinder_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature::OverlappedComponent' has a wrong offset!");
static_assert(offsetof(B_HidingProp_WilliePete_C_BndEvt__overlapCylinder_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature, OtherActor) == 0x000008, "Member 'B_HidingProp_WilliePete_C_BndEvt__overlapCylinder_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature::OtherActor' has a wrong offset!");
static_assert(offsetof(B_HidingProp_WilliePete_C_BndEvt__overlapCylinder_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature, OtherComp) == 0x000010, "Member 'B_HidingProp_WilliePete_C_BndEvt__overlapCylinder_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature::OtherComp' has a wrong offset!");
static_assert(offsetof(B_HidingProp_WilliePete_C_BndEvt__overlapCylinder_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature, OtherBodyIndex) == 0x000018, "Member 'B_HidingProp_WilliePete_C_BndEvt__overlapCylinder_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature::OtherBodyIndex' has a wrong offset!");
static_assert(offsetof(B_HidingProp_WilliePete_C_BndEvt__overlapCylinder_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature, bFromSweep) == 0x00001C, "Member 'B_HidingProp_WilliePete_C_BndEvt__overlapCylinder_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature::bFromSweep' has a wrong offset!");
static_assert(offsetof(B_HidingProp_WilliePete_C_BndEvt__overlapCylinder_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature, SweepResult) == 0x000020, "Member 'B_HidingProp_WilliePete_C_BndEvt__overlapCylinder_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature::SweepResult' has a wrong offset!");

struct B_HidingProp_WilliePete_C_ExecuteUbergraph_B_HidingProp_WilliePete final
{
public:
	int32                                         EntryPoint;
	bool                                          CallFunc_IsValid_ReturnValue;
	uint8                                         Pad_5[0x3];
	TDelegate<void(class AActor* DestroyedActor)> K2Node_CreateDelegate_OutputDelegate;
	uint8                                         Pad_14[0x4];
	class AActor*                                 K2Node_CustomEvent_DestroyedActor;
	class AActor*                                 K2Node_CustomEvent_TeleportingActor;
	TScriptInterface<class IFortProjectileMovementInterface> K2Node_DynamicCast_AsFort_Projectile_Movement_Interface;
	bool                                          K2Node_DynamicCast_bSuccess;
	uint8                                         Pad_39[0x7];
	class UFortProjectileMovementComponent*       CallFunc_GetFortProjectileMovementComponent_ReturnValue;
	class UMovementComponent*                     CallFunc_GetComponentByClass_ReturnValue;
	class UProjectileMovementComponent*           CallFunc_GetComponentByClass_ReturnValue_1;
	bool                                          CallFunc_IsValid_ReturnValue_1;
	bool                                          CallFunc_Greater_DoubleDouble_ReturnValue;
	bool                                          CallFunc_IsValid_ReturnValue_2;
	bool                                          CallFunc_HasAuthority_ReturnValue;
	bool                                          CallFunc_LessEqual_DoubleDouble_ReturnValue;
	bool                                          CallFunc_BooleanAND_ReturnValue;
	uint8                                         Pad_5E[0x2];
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue;
	struct FHitResult                             CallFunc_K2_SetWorldRotation_SweepHitResult;
	double                                        CallFunc_BreakVector_X;
	double                                        CallFunc_BreakVector_Y;
	double                                        CallFunc_BreakVector_Z;
	float                                         CallFunc_Conv_IntToFloat_ReturnValue;
	uint8                                         Pad_174[0x4];
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue_1;
	double                                        CallFunc_BreakVector_X_1;
	double                                        CallFunc_BreakVector_Y_1;
	double                                        CallFunc_BreakVector_Z_1;
	struct FVector                                CallFunc_GetForwardVector_ReturnValue;
	double                                        CallFunc_BreakVector_X_2;
	double                                        CallFunc_BreakVector_Y_2;
	double                                        CallFunc_BreakVector_Z_2;
	struct FVector                                CallFunc_GetForwardVector_ReturnValue_1;
	struct FGameplayCueParameters                 CallFunc_MakeGameplayCueParameters_ReturnValue;
	double                                        CallFunc_BreakVector_X_3;
	double                                        CallFunc_BreakVector_Y_3;
	double                                        CallFunc_BreakVector_Z_3;
	bool                                          CallFunc_IsValid_ReturnValue_3;
	bool                                          CallFunc_RowToBool_ReturnValue;
	uint8                                         Pad_2DA[0x6];
	double                                        CallFunc_RandomFloatInRange_ReturnValue;
	struct FVector                                CallFunc_GetActorUpVector_ReturnValue;
	bool                                          CallFunc_HasAuthority_ReturnValue_1;
	uint8                                         Pad_301[0x3];
	float                                         CallFunc_GetValueAtLevel_ReturnValue;
	double                                        CallFunc_Divide_DoubleDouble_ReturnValue;
	struct FVector                                CallFunc_Multiply_VectorFloat_ReturnValue;
	class UFortAbilitySystemComponent*            CallFunc_GetFortAbilitySystemComponent_ReturnValue;
	class UFortAbilitySystemComponent*            CallFunc_GetFortAbilitySystemComponent_ReturnValue_1;
	struct FActiveGameplayEffectHandle            CallFunc_BP_FortApplyGameplayEffectToTarget_ReturnValue;
	class UFortAbilitySystemComponent*            CallFunc_GetFortAbilitySystemComponent_ReturnValue_2;
	bool                                          CallFunc_RemoveActiveGameplayEffect_ReturnValue;
	uint8                                         Pad_349[0x7];
	struct FGameplayCueParameters                 CallFunc_MakeGameplayCueParameters_ReturnValue_1;
	struct FTransform                             CallFunc_GetTransform_ReturnValue;
	struct FVector                                CallFunc_BreakTransform_Location;
	struct FRotator                               CallFunc_BreakTransform_Rotation;
	struct FVector                                CallFunc_BreakTransform_Scale;
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue_2;
	struct FGameplayTagContainer                  CallFunc_GetOwnedGameplayTags_TagContainer;
	class AFortPlayerController*                  CallFunc_GetFortPlayerControllerFromActor_ReturnValue;
	class UFortQuestManager*                      CallFunc_GetQuestManager_ReturnValue;
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue_3;
	struct FGameplayCueParameters                 CallFunc_MakeGameplayCueParameters_ReturnValue_2;
	float                                         CallFunc_GetValueAtLevel_ReturnValue_1;
	uint8                                         Pad_5FC[0x4];
	double                                        CallFunc_Multiply_DoubleDouble_ReturnValue;
	struct FGameplayTagContainer                  CallFunc_GetOwnedGameplayTags_TagContainer_1;
	bool                                          Temp_bool_Variable;
	bool                                          CallFunc_IsValid_ReturnValue_4;
	uint8                                         Pad_62A[0x2];
	TDelegate<void(struct FHitResult& Hit)>       K2Node_CreateDelegate_OutputDelegate_1;
	bool                                          CallFunc_IsValid_ReturnValue_5;
	uint8                                         Pad_639[0x7];
	class UPrimitiveComponent*                    K2Node_ComponentBoundEvent_OverlappedComponent;
	class AActor*                                 K2Node_ComponentBoundEvent_OtherActor;
	class UPrimitiveComponent*                    K2Node_ComponentBoundEvent_OtherComp;
	int32                                         K2Node_ComponentBoundEvent_OtherBodyIndex;
	bool                                          K2Node_ComponentBoundEvent_bFromSweep;
	uint8                                         Pad_65D[0x3];
	struct FHitResult                             K2Node_ComponentBoundEvent_SweepResult;
	TScriptInterface<class IGameplayTagAssetInterface> K2Node_DynamicCast_AsGameplay_Tag_Asset_Interface;
	bool                                          K2Node_DynamicCast_bSuccess_1;
	bool                                          CallFunc_HasMatchingGameplayTag_ReturnValue;
	uint8                                         Pad_752[0x6];
	class AFortPlayerPawnAthena*                  K2Node_DynamicCast_AsFort_Player_Pawn_Athena;
	bool                                          K2Node_DynamicCast_bSuccess_2;
	bool                                          CallFunc_IsValid_ReturnValue_6;
	uint8                                         Pad_762[0x6];
	class AFortPlayerPawn*                        K2Node_DynamicCast_AsFort_Player_Pawn;
	bool                                          K2Node_DynamicCast_bSuccess_3;
	bool                                          CallFunc_IsInVehicle_ReturnValue;
	bool                                          CallFunc_IsValid_ReturnValue_7;
	uint8                                         Pad_773[0x5];
	class UAbilitySystemComponent*                CallFunc_GetAbilitySystemComponent_ReturnValue;
	TScriptInterface<class IGameplayTagAssetInterface> CallFunc_HasMatchingGameplayTag_self_CastInput;
	bool                                          CallFunc_HasMatchingGameplayTag_ReturnValue_1;
	bool                                          CallFunc_IsTethered_ReturnValue;
	uint8                                         Pad_792[0x6];
	class AFortAIPawn*                            K2Node_DynamicCast_AsFort_AIPawn;
	bool                                          K2Node_DynamicCast_bSuccess_4;
	uint8                                         Pad_7A1[0x7];
	struct FVector                                CallFunc_GetActorForwardVector_ReturnValue;
	bool                                          CallFunc_IsValid_ReturnValue_8;
	uint8                                         Pad_7C1[0x7];
	double                                        CallFunc_BreakVector_X_4;
	double                                        CallFunc_BreakVector_Y_4;
	double                                        CallFunc_BreakVector_Z_4;
	double                                        CallFunc_Multiply_DoubleDouble_ReturnValue_1;
	struct FVector                                CallFunc_MakeVector_ReturnValue;
	struct FVector                                CallFunc_Multiply_VectorFloat_ReturnValue_1;
	class AFortPlayerController*                  CallFunc_GetFortPlayerControllerFromActor_ReturnValue_1;
	TScriptInterface<class IFortVehicleInterface> K2Node_DynamicCast_AsFort_Vehicle_Interface;
	bool                                          K2Node_DynamicCast_bSuccess_5;
	uint8                                         Pad_831[0x7];
	class UFortQuestManager*                      CallFunc_GetQuestManager_ReturnValue_1;
	struct FVector                                CallFunc_GetVehicleForwardVector_ReturnValue;
	struct FVector                                CallFunc_Multiply_VectorFloat_ReturnValue_2;
	struct FVector                                CallFunc_GetVehicleVelocity_ReturnValue;
	struct FVector                                CallFunc_Add_VectorVector_ReturnValue;
	class AActor*                                 CallFunc_GetVehicleActorPtrConst_ReturnValue;
	struct FVector                                CallFunc_Add_VectorVector_ReturnValue_1;
	bool                                          CallFunc_HasAuthority_ReturnValue_2;
	uint8                                         Pad_8C1[0x7];
	class AGameStateBase*                         CallFunc_GetGameState_ReturnValue;
	struct FTransform                             CallFunc_MakeTransform_ReturnValue;
	const class AFortPawn*                        K2Node_Event_Pawn;
	class AActor*                                 CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue;
	class AFortPlayerPawnAthena*                  K2Node_DynamicCast_AsFort_Player_Pawn_Athena_1;
	bool                                          K2Node_DynamicCast_bSuccess_6;
	uint8                                         Pad_949[0x7];
	class AActor*                                 CallFunc_FinishSpawningActor_ReturnValue;
	struct FGameplayEventData                     K2Node_MakeStruct_GameplayEventData;
	bool                                          CallFunc_EqualEqual_ObjectObject_ReturnValue;
	bool                                          CallFunc_BooleanOR_ReturnValue;
	bool                                          CallFunc_Not_PreBool_ReturnValue;
	uint8                                         Pad_A0B[0x5];
	class UFortAsyncAction_CurrentPlaylistReady*  CallFunc_PlaylistDataReadyAsync_ReturnValue;
	bool                                          CallFunc_IsValid_ReturnValue_9;
	uint8                                         Pad_A19[0x7];
	class AFortGameStateAthena*                   Temp_object_Variable;
	class UFortPlaylist*                          Temp_object_Variable_1;
	struct FGameplayTagContainer                  Temp_struct_Variable;
	bool                                          CallFunc_IsValid_ReturnValue_10;
	uint8                                         Pad_A51[0x7];
	class AFortGameStateAthena*                   K2Node_CustomEvent_GameState;
	const class UFortPlaylist*                    K2Node_CustomEvent_Playlist;
	struct FGameplayTagContainer                  K2Node_CustomEvent_PlaylistContextTags;
	class UFortProjectileMovementComponent*       Temp_object_Variable_2;
	bool                                          CallFunc_Greater_DoubleDouble_ReturnValue_1;
	bool                                          CallFunc_LessEqual_DoubleDouble_ReturnValue_1;
	bool                                          CallFunc_IsValid_ReturnValue_11;
	bool                                          CallFunc_BooleanAND_ReturnValue_1;
	uint8                                         Pad_A94[0x4];
	struct FVector                                CallFunc_GetForwardVector_ReturnValue_2;
	TDelegate<void(class AFortGameStateAthena* GameState, class UFortPlaylist* Playlist, struct FGameplayTagContainer& PlaylistContextTags)> K2Node_CreateDelegate_OutputDelegate_2;
	uint8                                         Pad_ABC[0x4];
	struct FHitResult                             K2Node_CustomEvent_Hit;
	struct FVector                                CallFunc_Multiply_VectorFloat_ReturnValue_3;
	double                                        CallFunc_Multiply_DoubleDouble_ReturnValue_2;
	double                                        CallFunc_RandomFloatInRange_ReturnValue_1;
	double                                        CallFunc_RandomFloatInRange_ReturnValue_2;
	double                                        CallFunc_Multiply_DoubleDouble_ReturnValue_3;
	double                                        CallFunc_Multiply_DoubleDouble_ReturnValue_4;
	double                                        CallFunc_RandomFloatInRange_ReturnValue_3;
	struct FVector                                CallFunc_MakeVector_ReturnValue_1;
	double                                        CallFunc_Multiply_DoubleDouble_ReturnValue_5;
	struct FVector                                CallFunc_Multiply_VectorFloat_ReturnValue_4;
	double                                        CallFunc_RandomFloatInRange_ReturnValue_4;
	double                                        CallFunc_Multiply_DoubleDouble_ReturnValue_6;
	double                                        CallFunc_RandomFloatInRange_ReturnValue_5;
	class UWaterSubsystem*                        CallFunc_GetWorldSubsystem_ReturnValue;
	double                                        CallFunc_Multiply_DoubleDouble_ReturnValue_7;
	float                                         CallFunc_GetOceanTotalHeight_ReturnValue;
	uint8                                         Pad_C4C[0x4];
	struct FVector                                CallFunc_MakeVector_ReturnValue_2;
	struct FVector                                CallFunc_MakeVector_ReturnValue_3;
	struct FVector                                CallFunc_Multiply_VectorFloat_ReturnValue_5;
	class UWaterSubsystem*                        CallFunc_GetWorldSubsystem_ReturnValue_1;
	float                                         CallFunc_GetOceanBaseHeight_ReturnValue;
	uint8                                         Pad_CA4[0x4];
	double                                        CallFunc_Subtract_DoubleDouble_ReturnValue;
	double                                        CallFunc_Divide_DoubleDouble_ReturnValue_1;
	bool                                          CallFunc_GreaterEqual_DoubleDouble_ReturnValue;
	uint8                                         Pad_CB9[0x7];
	double                                        CallFunc_Greater_DoubleDouble_A_ImplicitCast;
	double                                        CallFunc_LessEqual_DoubleDouble_A_ImplicitCast;
	double                                        CallFunc_GreaterEqual_DoubleDouble_A_ImplicitCast;
	float                                         CallFunc_SetLifeSpan_InLifespan_ImplicitCast;
	uint8                                         Pad_CDC[0x4];
	double                                        CallFunc_Multiply_VectorFloat_B_ImplicitCast;
	double                                        CallFunc_Divide_DoubleDouble_A_ImplicitCast;
	double                                        CallFunc_Multiply_DoubleDouble_A_ImplicitCast;
	double                                        CallFunc_Greater_DoubleDouble_A_ImplicitCast_1;
	double                                        CallFunc_LessEqual_DoubleDouble_A_ImplicitCast_1;
	double                                        CallFunc_MakeVector_Z_ImplicitCast;
	double                                        CallFunc_Subtract_DoubleDouble_B_ImplicitCast;
};
static_assert(alignof(B_HidingProp_WilliePete_C_ExecuteUbergraph_B_HidingProp_WilliePete) == 0x000010, "Wrong alignment on B_HidingProp_WilliePete_C_ExecuteUbergraph_B_HidingProp_WilliePete");
static_assert(sizeof(B_HidingProp_WilliePete_C_ExecuteUbergraph_B_HidingProp_WilliePete) == 0x000D20, "Wrong size on B_HidingProp_WilliePete_C_ExecuteUbergraph_B_HidingProp_WilliePete");
static_assert(offsetof(B_HidingProp_WilliePete_C_ExecuteUbergraph_B_HidingProp_WilliePete, EntryPoint) == 0x000000, "Member 'B_HidingProp_WilliePete_C_ExecuteUbergraph_B_HidingProp_WilliePete::EntryPoint' has a wrong offset!");
static_assert(offsetof(B_HidingProp_WilliePete_C_ExecuteUbergraph_B_HidingProp_WilliePete, CallFunc_IsValid_ReturnValue) == 0x000004, "Member 'B_HidingProp_WilliePete_C_ExecuteUbergraph_B_HidingProp_WilliePete::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_HidingProp_WilliePete_C_ExecuteUbergraph_B_HidingProp_WilliePete, K2Node_CreateDelegate_OutputDelegate) == 0x000008, "Member 'B_HidingProp_WilliePete_C_ExecuteUbergraph_B_HidingProp_WilliePete::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(B_HidingProp_WilliePete_C_ExecuteUbergraph_B_HidingProp_WilliePete, K2Node_CustomEvent_DestroyedActor) == 0x000018, "Member 'B_HidingProp_WilliePete_C_ExecuteUbergraph_B_HidingProp_WilliePete::K2Node_CustomEvent_DestroyedActor' has a wrong offset!");
static_assert(offsetof(B_HidingProp_WilliePete_C_ExecuteUbergraph_B_HidingProp_WilliePete, K2Node_CustomEvent_TeleportingActor) == 0x000020, "Member 'B_HidingProp_WilliePete_C_ExecuteUbergraph_B_HidingProp_WilliePete::K2Node_CustomEvent_TeleportingActor' has a wrong offset!");
static_assert(offsetof(B_HidingProp_WilliePete_C_ExecuteUbergraph_B_HidingProp_WilliePete, K2Node_DynamicCast_AsFort_Projectile_Movement_Interface) == 0x000028, "Member 'B_HidingProp_WilliePete_C_ExecuteUbergraph_B_HidingProp_WilliePete::K2Node_DynamicCast_AsFort_Projectile_Movement_Interface' has a wrong offset!");
static_assert(offsetof(B_HidingProp_WilliePete_C_ExecuteUbergraph_B_HidingProp_WilliePete, K2Node_DynamicCast_bSuccess) == 0x000038, "Member 'B_HidingProp_WilliePete_C_ExecuteUbergraph_B_HidingProp_WilliePete::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(B_HidingProp_WilliePete_C_ExecuteUbergraph_B_HidingProp_WilliePete, CallFunc_GetFortProjectileMovementComponent_ReturnValue) == 0x000040, "Member 'B_HidingProp_WilliePete_C_ExecuteUbergraph_B_HidingProp_WilliePete::CallFunc_GetFortProjectileMovementComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_HidingProp_WilliePete_C_ExecuteUbergraph_B_HidingProp_WilliePete, CallFunc_GetComponentByClass_ReturnValue) == 0x000048, "Member 'B_HidingProp_WilliePete_C_ExecuteUbergraph_B_HidingProp_WilliePete::CallFunc_GetComponentByClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_HidingProp_WilliePete_C_ExecuteUbergraph_B_HidingProp_WilliePete, CallFunc_GetComponentByClass_ReturnValue_1) == 0x000050, "Member 'B_HidingProp_WilliePete_C_ExecuteUbergraph_B_HidingProp_WilliePete::CallFunc_GetComponentByClass_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(B_HidingProp_WilliePete_C_ExecuteUbergraph_B_HidingProp_WilliePete, CallFunc_IsValid_ReturnValue_1) == 0x000058, "Member 'B_HidingProp_WilliePete_C_ExecuteUbergraph_B_HidingProp_WilliePete::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(B_HidingProp_WilliePete_C_ExecuteUbergraph_B_HidingProp_WilliePete, CallFunc_Greater_DoubleDouble_ReturnValue) == 0x000059, "Member 'B_HidingProp_WilliePete_C_ExecuteUbergraph_B_HidingProp_WilliePete::CallFunc_Greater_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_HidingProp_WilliePete_C_ExecuteUbergraph_B_HidingProp_WilliePete, CallFunc_IsValid_ReturnValue_2) == 0x00005A, "Member 'B_HidingProp_WilliePete_C_ExecuteUbergraph_B_HidingProp_WilliePete::CallFunc_IsValid_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(B_HidingProp_WilliePete_C_ExecuteUbergraph_B_HidingProp_WilliePete, CallFunc_HasAuthority_ReturnValue) == 0x00005B, "Member 'B_HidingProp_WilliePete_C_ExecuteUbergraph_B_HidingProp_WilliePete::CallFunc_HasAuthority_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_HidingProp_WilliePete_C_ExecuteUbergraph_B_HidingProp_WilliePete, CallFunc_LessEqual_DoubleDouble_ReturnValue) == 0x00005C, "Member 'B_HidingProp_WilliePete_C_ExecuteUbergraph_B_HidingProp_WilliePete::CallFunc_LessEqual_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_HidingProp_WilliePete_C_ExecuteUbergraph_B_HidingProp_WilliePete, CallFunc_BooleanAND_ReturnValue) == 0x00005D, "Member 'B_HidingProp_WilliePete_C_ExecuteUbergraph_B_HidingProp_WilliePete::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_HidingProp_WilliePete_C_ExecuteUbergraph_B_HidingProp_WilliePete, CallFunc_K2_GetActorLocation_ReturnValue) == 0x000060, "Member 'B_HidingProp_WilliePete_C_ExecuteUbergraph_B_HidingProp_WilliePete::CallFunc_K2_GetActorLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_HidingProp_WilliePete_C_ExecuteUbergraph_B_HidingProp_WilliePete, CallFunc_K2_SetWorldRotation_SweepHitResult) == 0x000078, "Member 'B_HidingProp_WilliePete_C_ExecuteUbergraph_B_HidingProp_WilliePete::CallFunc_K2_SetWorldRotation_SweepHitResult' has a wrong offset!");
static_assert(offsetof(B_HidingProp_WilliePete_C_ExecuteUbergraph_B_HidingProp_WilliePete, CallFunc_BreakVector_X) == 0x000158, "Member 'B_HidingProp_WilliePete_C_ExecuteUbergraph_B_HidingProp_WilliePete::CallFunc_BreakVector_X' has a wrong offset!");
static_assert(offsetof(B_HidingProp_WilliePete_C_ExecuteUbergraph_B_HidingProp_WilliePete, CallFunc_BreakVector_Y) == 0x000160, "Member 'B_HidingProp_WilliePete_C_ExecuteUbergraph_B_HidingProp_WilliePete::CallFunc_BreakVector_Y' has a wrong offset!");
static_assert(offsetof(B_HidingProp_WilliePete_C_ExecuteUbergraph_B_HidingProp_WilliePete, CallFunc_BreakVector_Z) == 0x000168, "Member 'B_HidingProp_WilliePete_C_ExecuteUbergraph_B_HidingProp_WilliePete::CallFunc_BreakVector_Z' has a wrong offset!");
static_assert(offsetof(B_HidingProp_WilliePete_C_ExecuteUbergraph_B_HidingProp_WilliePete, CallFunc_Conv_IntToFloat_ReturnValue) == 0x000170, "Member 'B_HidingProp_WilliePete_C_ExecuteUbergraph_B_HidingProp_WilliePete::CallFunc_Conv_IntToFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_HidingProp_WilliePete_C_ExecuteUbergraph_B_HidingProp_WilliePete, CallFunc_K2_GetActorLocation_ReturnValue_1) == 0x000178, "Member 'B_HidingProp_WilliePete_C_ExecuteUbergraph_B_HidingProp_WilliePete::CallFunc_K2_GetActorLocation_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(B_HidingProp_WilliePete_C_ExecuteUbergraph_B_HidingProp_WilliePete, CallFunc_BreakVector_X_1) == 0x000190, "Member 'B_HidingProp_WilliePete_C_ExecuteUbergraph_B_HidingProp_WilliePete::CallFunc_BreakVector_X_1' has a wrong offset!");
static_assert(offsetof(B_HidingProp_WilliePete_C_ExecuteUbergraph_B_HidingProp_WilliePete, CallFunc_BreakVector_Y_1) == 0x000198, "Member 'B_HidingProp_WilliePete_C_ExecuteUbergraph_B_HidingProp_WilliePete::CallFunc_BreakVector_Y_1' has a wrong offset!");
static_assert(offsetof(B_HidingProp_WilliePete_C_ExecuteUbergraph_B_HidingProp_WilliePete, CallFunc_BreakVector_Z_1) == 0x0001A0, "Member 'B_HidingProp_WilliePete_C_ExecuteUbergraph_B_HidingProp_WilliePete::CallFunc_BreakVector_Z_1' has a wrong offset!");
static_assert(offsetof(B_HidingProp_WilliePete_C_ExecuteUbergraph_B_HidingProp_WilliePete, CallFunc_GetForwardVector_ReturnValue) == 0x0001A8, "Member 'B_HidingProp_WilliePete_C_ExecuteUbergraph_B_HidingProp_WilliePete::CallFunc_GetForwardVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_HidingProp_WilliePete_C_ExecuteUbergraph_B_HidingProp_WilliePete, CallFunc_BreakVector_X_2) == 0x0001C0, "Member 'B_HidingProp_WilliePete_C_ExecuteUbergraph_B_HidingProp_WilliePete::CallFunc_BreakVector_X_2' has a wrong offset!");
static_assert(offsetof(B_HidingProp_WilliePete_C_ExecuteUbergraph_B_HidingProp_WilliePete, CallFunc_BreakVector_Y_2) == 0x0001C8, "Member 'B_HidingProp_WilliePete_C_ExecuteUbergraph_B_HidingProp_WilliePete::CallFunc_BreakVector_Y_2' has a wrong offset!");
static_assert(offsetof(B_HidingProp_WilliePete_C_ExecuteUbergraph_B_HidingProp_WilliePete, CallFunc_BreakVector_Z_2) == 0x0001D0, "Member 'B_HidingProp_WilliePete_C_ExecuteUbergraph_B_HidingProp_WilliePete::CallFunc_BreakVector_Z_2' has a wrong offset!");
static_assert(offsetof(B_HidingProp_WilliePete_C_ExecuteUbergraph_B_HidingProp_WilliePete, CallFunc_GetForwardVector_ReturnValue_1) == 0x0001D8, "Member 'B_HidingProp_WilliePete_C_ExecuteUbergraph_B_HidingProp_WilliePete::CallFunc_GetForwardVector_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(B_HidingProp_WilliePete_C_ExecuteUbergraph_B_HidingProp_WilliePete, CallFunc_MakeGameplayCueParameters_ReturnValue) == 0x0001F0, "Member 'B_HidingProp_WilliePete_C_ExecuteUbergraph_B_HidingProp_WilliePete::CallFunc_MakeGameplayCueParameters_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_HidingProp_WilliePete_C_ExecuteUbergraph_B_HidingProp_WilliePete, CallFunc_BreakVector_X_3) == 0x0002C0, "Member 'B_HidingProp_WilliePete_C_ExecuteUbergraph_B_HidingProp_WilliePete::CallFunc_BreakVector_X_3' has a wrong offset!");
static_assert(offsetof(B_HidingProp_WilliePete_C_ExecuteUbergraph_B_HidingProp_WilliePete, CallFunc_BreakVector_Y_3) == 0x0002C8, "Member 'B_HidingProp_WilliePete_C_ExecuteUbergraph_B_HidingProp_WilliePete::CallFunc_BreakVector_Y_3' has a wrong offset!");
static_assert(offsetof(B_HidingProp_WilliePete_C_ExecuteUbergraph_B_HidingProp_WilliePete, CallFunc_BreakVector_Z_3) == 0x0002D0, "Member 'B_HidingProp_WilliePete_C_ExecuteUbergraph_B_HidingProp_WilliePete::CallFunc_BreakVector_Z_3' has a wrong offset!");
static_assert(offsetof(B_HidingProp_WilliePete_C_ExecuteUbergraph_B_HidingProp_WilliePete, CallFunc_IsValid_ReturnValue_3) == 0x0002D8, "Member 'B_HidingProp_WilliePete_C_ExecuteUbergraph_B_HidingProp_WilliePete::CallFunc_IsValid_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(B_HidingProp_WilliePete_C_ExecuteUbergraph_B_HidingProp_WilliePete, CallFunc_RowToBool_ReturnValue) == 0x0002D9, "Member 'B_HidingProp_WilliePete_C_ExecuteUbergraph_B_HidingProp_WilliePete::CallFunc_RowToBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_HidingProp_WilliePete_C_ExecuteUbergraph_B_HidingProp_WilliePete, CallFunc_RandomFloatInRange_ReturnValue) == 0x0002E0, "Member 'B_HidingProp_WilliePete_C_ExecuteUbergraph_B_HidingProp_WilliePete::CallFunc_RandomFloatInRange_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_HidingProp_WilliePete_C_ExecuteUbergraph_B_HidingProp_WilliePete, CallFunc_GetActorUpVector_ReturnValue) == 0x0002E8, "Member 'B_HidingProp_WilliePete_C_ExecuteUbergraph_B_HidingProp_WilliePete::CallFunc_GetActorUpVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_HidingProp_WilliePete_C_ExecuteUbergraph_B_HidingProp_WilliePete, CallFunc_HasAuthority_ReturnValue_1) == 0x000300, "Member 'B_HidingProp_WilliePete_C_ExecuteUbergraph_B_HidingProp_WilliePete::CallFunc_HasAuthority_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(B_HidingProp_WilliePete_C_ExecuteUbergraph_B_HidingProp_WilliePete, CallFunc_GetValueAtLevel_ReturnValue) == 0x000304, "Member 'B_HidingProp_WilliePete_C_ExecuteUbergraph_B_HidingProp_WilliePete::CallFunc_GetValueAtLevel_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_HidingProp_WilliePete_C_ExecuteUbergraph_B_HidingProp_WilliePete, CallFunc_Divide_DoubleDouble_ReturnValue) == 0x000308, "Member 'B_HidingProp_WilliePete_C_ExecuteUbergraph_B_HidingProp_WilliePete::CallFunc_Divide_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_HidingProp_WilliePete_C_ExecuteUbergraph_B_HidingProp_WilliePete, CallFunc_Multiply_VectorFloat_ReturnValue) == 0x000310, "Member 'B_HidingProp_WilliePete_C_ExecuteUbergraph_B_HidingProp_WilliePete::CallFunc_Multiply_VectorFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_HidingProp_WilliePete_C_ExecuteUbergraph_B_HidingProp_WilliePete, CallFunc_GetFortAbilitySystemComponent_ReturnValue) == 0x000328, "Member 'B_HidingProp_WilliePete_C_ExecuteUbergraph_B_HidingProp_WilliePete::CallFunc_GetFortAbilitySystemComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_HidingProp_WilliePete_C_ExecuteUbergraph_B_HidingProp_WilliePete, CallFunc_GetFortAbilitySystemComponent_ReturnValue_1) == 0x000330, "Member 'B_HidingProp_WilliePete_C_ExecuteUbergraph_B_HidingProp_WilliePete::CallFunc_GetFortAbilitySystemComponent_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(B_HidingProp_WilliePete_C_ExecuteUbergraph_B_HidingProp_WilliePete, CallFunc_BP_FortApplyGameplayEffectToTarget_ReturnValue) == 0x000338, "Member 'B_HidingProp_WilliePete_C_ExecuteUbergraph_B_HidingProp_WilliePete::CallFunc_BP_FortApplyGameplayEffectToTarget_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_HidingProp_WilliePete_C_ExecuteUbergraph_B_HidingProp_WilliePete, CallFunc_GetFortAbilitySystemComponent_ReturnValue_2) == 0x000340, "Member 'B_HidingProp_WilliePete_C_ExecuteUbergraph_B_HidingProp_WilliePete::CallFunc_GetFortAbilitySystemComponent_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(B_HidingProp_WilliePete_C_ExecuteUbergraph_B_HidingProp_WilliePete, CallFunc_RemoveActiveGameplayEffect_ReturnValue) == 0x000348, "Member 'B_HidingProp_WilliePete_C_ExecuteUbergraph_B_HidingProp_WilliePete::CallFunc_RemoveActiveGameplayEffect_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_HidingProp_WilliePete_C_ExecuteUbergraph_B_HidingProp_WilliePete, CallFunc_MakeGameplayCueParameters_ReturnValue_1) == 0x000350, "Member 'B_HidingProp_WilliePete_C_ExecuteUbergraph_B_HidingProp_WilliePete::CallFunc_MakeGameplayCueParameters_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(B_HidingProp_WilliePete_C_ExecuteUbergraph_B_HidingProp_WilliePete, CallFunc_GetTransform_ReturnValue) == 0x000420, "Member 'B_HidingProp_WilliePete_C_ExecuteUbergraph_B_HidingProp_WilliePete::CallFunc_GetTransform_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_HidingProp_WilliePete_C_ExecuteUbergraph_B_HidingProp_WilliePete, CallFunc_BreakTransform_Location) == 0x000480, "Member 'B_HidingProp_WilliePete_C_ExecuteUbergraph_B_HidingProp_WilliePete::CallFunc_BreakTransform_Location' has a wrong offset!");
static_assert(offsetof(B_HidingProp_WilliePete_C_ExecuteUbergraph_B_HidingProp_WilliePete, CallFunc_BreakTransform_Rotation) == 0x000498, "Member 'B_HidingProp_WilliePete_C_ExecuteUbergraph_B_HidingProp_WilliePete::CallFunc_BreakTransform_Rotation' has a wrong offset!");
static_assert(offsetof(B_HidingProp_WilliePete_C_ExecuteUbergraph_B_HidingProp_WilliePete, CallFunc_BreakTransform_Scale) == 0x0004B0, "Member 'B_HidingProp_WilliePete_C_ExecuteUbergraph_B_HidingProp_WilliePete::CallFunc_BreakTransform_Scale' has a wrong offset!");
static_assert(offsetof(B_HidingProp_WilliePete_C_ExecuteUbergraph_B_HidingProp_WilliePete, CallFunc_K2_GetActorLocation_ReturnValue_2) == 0x0004C8, "Member 'B_HidingProp_WilliePete_C_ExecuteUbergraph_B_HidingProp_WilliePete::CallFunc_K2_GetActorLocation_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(B_HidingProp_WilliePete_C_ExecuteUbergraph_B_HidingProp_WilliePete, CallFunc_GetOwnedGameplayTags_TagContainer) == 0x0004E0, "Member 'B_HidingProp_WilliePete_C_ExecuteUbergraph_B_HidingProp_WilliePete::CallFunc_GetOwnedGameplayTags_TagContainer' has a wrong offset!");
static_assert(offsetof(B_HidingProp_WilliePete_C_ExecuteUbergraph_B_HidingProp_WilliePete, CallFunc_GetFortPlayerControllerFromActor_ReturnValue) == 0x000500, "Member 'B_HidingProp_WilliePete_C_ExecuteUbergraph_B_HidingProp_WilliePete::CallFunc_GetFortPlayerControllerFromActor_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_HidingProp_WilliePete_C_ExecuteUbergraph_B_HidingProp_WilliePete, CallFunc_GetQuestManager_ReturnValue) == 0x000508, "Member 'B_HidingProp_WilliePete_C_ExecuteUbergraph_B_HidingProp_WilliePete::CallFunc_GetQuestManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_HidingProp_WilliePete_C_ExecuteUbergraph_B_HidingProp_WilliePete, CallFunc_K2_GetActorLocation_ReturnValue_3) == 0x000510, "Member 'B_HidingProp_WilliePete_C_ExecuteUbergraph_B_HidingProp_WilliePete::CallFunc_K2_GetActorLocation_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(B_HidingProp_WilliePete_C_ExecuteUbergraph_B_HidingProp_WilliePete, CallFunc_MakeGameplayCueParameters_ReturnValue_2) == 0x000528, "Member 'B_HidingProp_WilliePete_C_ExecuteUbergraph_B_HidingProp_WilliePete::CallFunc_MakeGameplayCueParameters_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(B_HidingProp_WilliePete_C_ExecuteUbergraph_B_HidingProp_WilliePete, CallFunc_GetValueAtLevel_ReturnValue_1) == 0x0005F8, "Member 'B_HidingProp_WilliePete_C_ExecuteUbergraph_B_HidingProp_WilliePete::CallFunc_GetValueAtLevel_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(B_HidingProp_WilliePete_C_ExecuteUbergraph_B_HidingProp_WilliePete, CallFunc_Multiply_DoubleDouble_ReturnValue) == 0x000600, "Member 'B_HidingProp_WilliePete_C_ExecuteUbergraph_B_HidingProp_WilliePete::CallFunc_Multiply_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_HidingProp_WilliePete_C_ExecuteUbergraph_B_HidingProp_WilliePete, CallFunc_GetOwnedGameplayTags_TagContainer_1) == 0x000608, "Member 'B_HidingProp_WilliePete_C_ExecuteUbergraph_B_HidingProp_WilliePete::CallFunc_GetOwnedGameplayTags_TagContainer_1' has a wrong offset!");
static_assert(offsetof(B_HidingProp_WilliePete_C_ExecuteUbergraph_B_HidingProp_WilliePete, Temp_bool_Variable) == 0x000628, "Member 'B_HidingProp_WilliePete_C_ExecuteUbergraph_B_HidingProp_WilliePete::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(B_HidingProp_WilliePete_C_ExecuteUbergraph_B_HidingProp_WilliePete, CallFunc_IsValid_ReturnValue_4) == 0x000629, "Member 'B_HidingProp_WilliePete_C_ExecuteUbergraph_B_HidingProp_WilliePete::CallFunc_IsValid_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(B_HidingProp_WilliePete_C_ExecuteUbergraph_B_HidingProp_WilliePete, K2Node_CreateDelegate_OutputDelegate_1) == 0x00062C, "Member 'B_HidingProp_WilliePete_C_ExecuteUbergraph_B_HidingProp_WilliePete::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(B_HidingProp_WilliePete_C_ExecuteUbergraph_B_HidingProp_WilliePete, CallFunc_IsValid_ReturnValue_5) == 0x000638, "Member 'B_HidingProp_WilliePete_C_ExecuteUbergraph_B_HidingProp_WilliePete::CallFunc_IsValid_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(B_HidingProp_WilliePete_C_ExecuteUbergraph_B_HidingProp_WilliePete, K2Node_ComponentBoundEvent_OverlappedComponent) == 0x000640, "Member 'B_HidingProp_WilliePete_C_ExecuteUbergraph_B_HidingProp_WilliePete::K2Node_ComponentBoundEvent_OverlappedComponent' has a wrong offset!");
static_assert(offsetof(B_HidingProp_WilliePete_C_ExecuteUbergraph_B_HidingProp_WilliePete, K2Node_ComponentBoundEvent_OtherActor) == 0x000648, "Member 'B_HidingProp_WilliePete_C_ExecuteUbergraph_B_HidingProp_WilliePete::K2Node_ComponentBoundEvent_OtherActor' has a wrong offset!");
static_assert(offsetof(B_HidingProp_WilliePete_C_ExecuteUbergraph_B_HidingProp_WilliePete, K2Node_ComponentBoundEvent_OtherComp) == 0x000650, "Member 'B_HidingProp_WilliePete_C_ExecuteUbergraph_B_HidingProp_WilliePete::K2Node_ComponentBoundEvent_OtherComp' has a wrong offset!");
static_assert(offsetof(B_HidingProp_WilliePete_C_ExecuteUbergraph_B_HidingProp_WilliePete, K2Node_ComponentBoundEvent_OtherBodyIndex) == 0x000658, "Member 'B_HidingProp_WilliePete_C_ExecuteUbergraph_B_HidingProp_WilliePete::K2Node_ComponentBoundEvent_OtherBodyIndex' has a wrong offset!");
static_assert(offsetof(B_HidingProp_WilliePete_C_ExecuteUbergraph_B_HidingProp_WilliePete, K2Node_ComponentBoundEvent_bFromSweep) == 0x00065C, "Member 'B_HidingProp_WilliePete_C_ExecuteUbergraph_B_HidingProp_WilliePete::K2Node_ComponentBoundEvent_bFromSweep' has a wrong offset!");
static_assert(offsetof(B_HidingProp_WilliePete_C_ExecuteUbergraph_B_HidingProp_WilliePete, K2Node_ComponentBoundEvent_SweepResult) == 0x000660, "Member 'B_HidingProp_WilliePete_C_ExecuteUbergraph_B_HidingProp_WilliePete::K2Node_ComponentBoundEvent_SweepResult' has a wrong offset!");
static_assert(offsetof(B_HidingProp_WilliePete_C_ExecuteUbergraph_B_HidingProp_WilliePete, K2Node_DynamicCast_AsGameplay_Tag_Asset_Interface) == 0x000740, "Member 'B_HidingProp_WilliePete_C_ExecuteUbergraph_B_HidingProp_WilliePete::K2Node_DynamicCast_AsGameplay_Tag_Asset_Interface' has a wrong offset!");
static_assert(offsetof(B_HidingProp_WilliePete_C_ExecuteUbergraph_B_HidingProp_WilliePete, K2Node_DynamicCast_bSuccess_1) == 0x000750, "Member 'B_HidingProp_WilliePete_C_ExecuteUbergraph_B_HidingProp_WilliePete::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(B_HidingProp_WilliePete_C_ExecuteUbergraph_B_HidingProp_WilliePete, CallFunc_HasMatchingGameplayTag_ReturnValue) == 0x000751, "Member 'B_HidingProp_WilliePete_C_ExecuteUbergraph_B_HidingProp_WilliePete::CallFunc_HasMatchingGameplayTag_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_HidingProp_WilliePete_C_ExecuteUbergraph_B_HidingProp_WilliePete, K2Node_DynamicCast_AsFort_Player_Pawn_Athena) == 0x000758, "Member 'B_HidingProp_WilliePete_C_ExecuteUbergraph_B_HidingProp_WilliePete::K2Node_DynamicCast_AsFort_Player_Pawn_Athena' has a wrong offset!");
static_assert(offsetof(B_HidingProp_WilliePete_C_ExecuteUbergraph_B_HidingProp_WilliePete, K2Node_DynamicCast_bSuccess_2) == 0x000760, "Member 'B_HidingProp_WilliePete_C_ExecuteUbergraph_B_HidingProp_WilliePete::K2Node_DynamicCast_bSuccess_2' has a wrong offset!");
static_assert(offsetof(B_HidingProp_WilliePete_C_ExecuteUbergraph_B_HidingProp_WilliePete, CallFunc_IsValid_ReturnValue_6) == 0x000761, "Member 'B_HidingProp_WilliePete_C_ExecuteUbergraph_B_HidingProp_WilliePete::CallFunc_IsValid_ReturnValue_6' has a wrong offset!");
static_assert(offsetof(B_HidingProp_WilliePete_C_ExecuteUbergraph_B_HidingProp_WilliePete, K2Node_DynamicCast_AsFort_Player_Pawn) == 0x000768, "Member 'B_HidingProp_WilliePete_C_ExecuteUbergraph_B_HidingProp_WilliePete::K2Node_DynamicCast_AsFort_Player_Pawn' has a wrong offset!");
static_assert(offsetof(B_HidingProp_WilliePete_C_ExecuteUbergraph_B_HidingProp_WilliePete, K2Node_DynamicCast_bSuccess_3) == 0x000770, "Member 'B_HidingProp_WilliePete_C_ExecuteUbergraph_B_HidingProp_WilliePete::K2Node_DynamicCast_bSuccess_3' has a wrong offset!");
static_assert(offsetof(B_HidingProp_WilliePete_C_ExecuteUbergraph_B_HidingProp_WilliePete, CallFunc_IsInVehicle_ReturnValue) == 0x000771, "Member 'B_HidingProp_WilliePete_C_ExecuteUbergraph_B_HidingProp_WilliePete::CallFunc_IsInVehicle_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_HidingProp_WilliePete_C_ExecuteUbergraph_B_HidingProp_WilliePete, CallFunc_IsValid_ReturnValue_7) == 0x000772, "Member 'B_HidingProp_WilliePete_C_ExecuteUbergraph_B_HidingProp_WilliePete::CallFunc_IsValid_ReturnValue_7' has a wrong offset!");
static_assert(offsetof(B_HidingProp_WilliePete_C_ExecuteUbergraph_B_HidingProp_WilliePete, CallFunc_GetAbilitySystemComponent_ReturnValue) == 0x000778, "Member 'B_HidingProp_WilliePete_C_ExecuteUbergraph_B_HidingProp_WilliePete::CallFunc_GetAbilitySystemComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_HidingProp_WilliePete_C_ExecuteUbergraph_B_HidingProp_WilliePete, CallFunc_HasMatchingGameplayTag_self_CastInput) == 0x000780, "Member 'B_HidingProp_WilliePete_C_ExecuteUbergraph_B_HidingProp_WilliePete::CallFunc_HasMatchingGameplayTag_self_CastInput' has a wrong offset!");
static_assert(offsetof(B_HidingProp_WilliePete_C_ExecuteUbergraph_B_HidingProp_WilliePete, CallFunc_HasMatchingGameplayTag_ReturnValue_1) == 0x000790, "Member 'B_HidingProp_WilliePete_C_ExecuteUbergraph_B_HidingProp_WilliePete::CallFunc_HasMatchingGameplayTag_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(B_HidingProp_WilliePete_C_ExecuteUbergraph_B_HidingProp_WilliePete, CallFunc_IsTethered_ReturnValue) == 0x000791, "Member 'B_HidingProp_WilliePete_C_ExecuteUbergraph_B_HidingProp_WilliePete::CallFunc_IsTethered_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_HidingProp_WilliePete_C_ExecuteUbergraph_B_HidingProp_WilliePete, K2Node_DynamicCast_AsFort_AIPawn) == 0x000798, "Member 'B_HidingProp_WilliePete_C_ExecuteUbergraph_B_HidingProp_WilliePete::K2Node_DynamicCast_AsFort_AIPawn' has a wrong offset!");
static_assert(offsetof(B_HidingProp_WilliePete_C_ExecuteUbergraph_B_HidingProp_WilliePete, K2Node_DynamicCast_bSuccess_4) == 0x0007A0, "Member 'B_HidingProp_WilliePete_C_ExecuteUbergraph_B_HidingProp_WilliePete::K2Node_DynamicCast_bSuccess_4' has a wrong offset!");
static_assert(offsetof(B_HidingProp_WilliePete_C_ExecuteUbergraph_B_HidingProp_WilliePete, CallFunc_GetActorForwardVector_ReturnValue) == 0x0007A8, "Member 'B_HidingProp_WilliePete_C_ExecuteUbergraph_B_HidingProp_WilliePete::CallFunc_GetActorForwardVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_HidingProp_WilliePete_C_ExecuteUbergraph_B_HidingProp_WilliePete, CallFunc_IsValid_ReturnValue_8) == 0x0007C0, "Member 'B_HidingProp_WilliePete_C_ExecuteUbergraph_B_HidingProp_WilliePete::CallFunc_IsValid_ReturnValue_8' has a wrong offset!");
static_assert(offsetof(B_HidingProp_WilliePete_C_ExecuteUbergraph_B_HidingProp_WilliePete, CallFunc_BreakVector_X_4) == 0x0007C8, "Member 'B_HidingProp_WilliePete_C_ExecuteUbergraph_B_HidingProp_WilliePete::CallFunc_BreakVector_X_4' has a wrong offset!");
static_assert(offsetof(B_HidingProp_WilliePete_C_ExecuteUbergraph_B_HidingProp_WilliePete, CallFunc_BreakVector_Y_4) == 0x0007D0, "Member 'B_HidingProp_WilliePete_C_ExecuteUbergraph_B_HidingProp_WilliePete::CallFunc_BreakVector_Y_4' has a wrong offset!");
static_assert(offsetof(B_HidingProp_WilliePete_C_ExecuteUbergraph_B_HidingProp_WilliePete, CallFunc_BreakVector_Z_4) == 0x0007D8, "Member 'B_HidingProp_WilliePete_C_ExecuteUbergraph_B_HidingProp_WilliePete::CallFunc_BreakVector_Z_4' has a wrong offset!");
static_assert(offsetof(B_HidingProp_WilliePete_C_ExecuteUbergraph_B_HidingProp_WilliePete, CallFunc_Multiply_DoubleDouble_ReturnValue_1) == 0x0007E0, "Member 'B_HidingProp_WilliePete_C_ExecuteUbergraph_B_HidingProp_WilliePete::CallFunc_Multiply_DoubleDouble_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(B_HidingProp_WilliePete_C_ExecuteUbergraph_B_HidingProp_WilliePete, CallFunc_MakeVector_ReturnValue) == 0x0007E8, "Member 'B_HidingProp_WilliePete_C_ExecuteUbergraph_B_HidingProp_WilliePete::CallFunc_MakeVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_HidingProp_WilliePete_C_ExecuteUbergraph_B_HidingProp_WilliePete, CallFunc_Multiply_VectorFloat_ReturnValue_1) == 0x000800, "Member 'B_HidingProp_WilliePete_C_ExecuteUbergraph_B_HidingProp_WilliePete::CallFunc_Multiply_VectorFloat_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(B_HidingProp_WilliePete_C_ExecuteUbergraph_B_HidingProp_WilliePete, CallFunc_GetFortPlayerControllerFromActor_ReturnValue_1) == 0x000818, "Member 'B_HidingProp_WilliePete_C_ExecuteUbergraph_B_HidingProp_WilliePete::CallFunc_GetFortPlayerControllerFromActor_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(B_HidingProp_WilliePete_C_ExecuteUbergraph_B_HidingProp_WilliePete, K2Node_DynamicCast_AsFort_Vehicle_Interface) == 0x000820, "Member 'B_HidingProp_WilliePete_C_ExecuteUbergraph_B_HidingProp_WilliePete::K2Node_DynamicCast_AsFort_Vehicle_Interface' has a wrong offset!");
static_assert(offsetof(B_HidingProp_WilliePete_C_ExecuteUbergraph_B_HidingProp_WilliePete, K2Node_DynamicCast_bSuccess_5) == 0x000830, "Member 'B_HidingProp_WilliePete_C_ExecuteUbergraph_B_HidingProp_WilliePete::K2Node_DynamicCast_bSuccess_5' has a wrong offset!");
static_assert(offsetof(B_HidingProp_WilliePete_C_ExecuteUbergraph_B_HidingProp_WilliePete, CallFunc_GetQuestManager_ReturnValue_1) == 0x000838, "Member 'B_HidingProp_WilliePete_C_ExecuteUbergraph_B_HidingProp_WilliePete::CallFunc_GetQuestManager_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(B_HidingProp_WilliePete_C_ExecuteUbergraph_B_HidingProp_WilliePete, CallFunc_GetVehicleForwardVector_ReturnValue) == 0x000840, "Member 'B_HidingProp_WilliePete_C_ExecuteUbergraph_B_HidingProp_WilliePete::CallFunc_GetVehicleForwardVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_HidingProp_WilliePete_C_ExecuteUbergraph_B_HidingProp_WilliePete, CallFunc_Multiply_VectorFloat_ReturnValue_2) == 0x000858, "Member 'B_HidingProp_WilliePete_C_ExecuteUbergraph_B_HidingProp_WilliePete::CallFunc_Multiply_VectorFloat_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(B_HidingProp_WilliePete_C_ExecuteUbergraph_B_HidingProp_WilliePete, CallFunc_GetVehicleVelocity_ReturnValue) == 0x000870, "Member 'B_HidingProp_WilliePete_C_ExecuteUbergraph_B_HidingProp_WilliePete::CallFunc_GetVehicleVelocity_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_HidingProp_WilliePete_C_ExecuteUbergraph_B_HidingProp_WilliePete, CallFunc_Add_VectorVector_ReturnValue) == 0x000888, "Member 'B_HidingProp_WilliePete_C_ExecuteUbergraph_B_HidingProp_WilliePete::CallFunc_Add_VectorVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_HidingProp_WilliePete_C_ExecuteUbergraph_B_HidingProp_WilliePete, CallFunc_GetVehicleActorPtrConst_ReturnValue) == 0x0008A0, "Member 'B_HidingProp_WilliePete_C_ExecuteUbergraph_B_HidingProp_WilliePete::CallFunc_GetVehicleActorPtrConst_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_HidingProp_WilliePete_C_ExecuteUbergraph_B_HidingProp_WilliePete, CallFunc_Add_VectorVector_ReturnValue_1) == 0x0008A8, "Member 'B_HidingProp_WilliePete_C_ExecuteUbergraph_B_HidingProp_WilliePete::CallFunc_Add_VectorVector_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(B_HidingProp_WilliePete_C_ExecuteUbergraph_B_HidingProp_WilliePete, CallFunc_HasAuthority_ReturnValue_2) == 0x0008C0, "Member 'B_HidingProp_WilliePete_C_ExecuteUbergraph_B_HidingProp_WilliePete::CallFunc_HasAuthority_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(B_HidingProp_WilliePete_C_ExecuteUbergraph_B_HidingProp_WilliePete, CallFunc_GetGameState_ReturnValue) == 0x0008C8, "Member 'B_HidingProp_WilliePete_C_ExecuteUbergraph_B_HidingProp_WilliePete::CallFunc_GetGameState_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_HidingProp_WilliePete_C_ExecuteUbergraph_B_HidingProp_WilliePete, CallFunc_MakeTransform_ReturnValue) == 0x0008D0, "Member 'B_HidingProp_WilliePete_C_ExecuteUbergraph_B_HidingProp_WilliePete::CallFunc_MakeTransform_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_HidingProp_WilliePete_C_ExecuteUbergraph_B_HidingProp_WilliePete, K2Node_Event_Pawn) == 0x000930, "Member 'B_HidingProp_WilliePete_C_ExecuteUbergraph_B_HidingProp_WilliePete::K2Node_Event_Pawn' has a wrong offset!");
static_assert(offsetof(B_HidingProp_WilliePete_C_ExecuteUbergraph_B_HidingProp_WilliePete, CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue) == 0x000938, "Member 'B_HidingProp_WilliePete_C_ExecuteUbergraph_B_HidingProp_WilliePete::CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_HidingProp_WilliePete_C_ExecuteUbergraph_B_HidingProp_WilliePete, K2Node_DynamicCast_AsFort_Player_Pawn_Athena_1) == 0x000940, "Member 'B_HidingProp_WilliePete_C_ExecuteUbergraph_B_HidingProp_WilliePete::K2Node_DynamicCast_AsFort_Player_Pawn_Athena_1' has a wrong offset!");
static_assert(offsetof(B_HidingProp_WilliePete_C_ExecuteUbergraph_B_HidingProp_WilliePete, K2Node_DynamicCast_bSuccess_6) == 0x000948, "Member 'B_HidingProp_WilliePete_C_ExecuteUbergraph_B_HidingProp_WilliePete::K2Node_DynamicCast_bSuccess_6' has a wrong offset!");
static_assert(offsetof(B_HidingProp_WilliePete_C_ExecuteUbergraph_B_HidingProp_WilliePete, CallFunc_FinishSpawningActor_ReturnValue) == 0x000950, "Member 'B_HidingProp_WilliePete_C_ExecuteUbergraph_B_HidingProp_WilliePete::CallFunc_FinishSpawningActor_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_HidingProp_WilliePete_C_ExecuteUbergraph_B_HidingProp_WilliePete, K2Node_MakeStruct_GameplayEventData) == 0x000958, "Member 'B_HidingProp_WilliePete_C_ExecuteUbergraph_B_HidingProp_WilliePete::K2Node_MakeStruct_GameplayEventData' has a wrong offset!");
static_assert(offsetof(B_HidingProp_WilliePete_C_ExecuteUbergraph_B_HidingProp_WilliePete, CallFunc_EqualEqual_ObjectObject_ReturnValue) == 0x000A08, "Member 'B_HidingProp_WilliePete_C_ExecuteUbergraph_B_HidingProp_WilliePete::CallFunc_EqualEqual_ObjectObject_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_HidingProp_WilliePete_C_ExecuteUbergraph_B_HidingProp_WilliePete, CallFunc_BooleanOR_ReturnValue) == 0x000A09, "Member 'B_HidingProp_WilliePete_C_ExecuteUbergraph_B_HidingProp_WilliePete::CallFunc_BooleanOR_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_HidingProp_WilliePete_C_ExecuteUbergraph_B_HidingProp_WilliePete, CallFunc_Not_PreBool_ReturnValue) == 0x000A0A, "Member 'B_HidingProp_WilliePete_C_ExecuteUbergraph_B_HidingProp_WilliePete::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_HidingProp_WilliePete_C_ExecuteUbergraph_B_HidingProp_WilliePete, CallFunc_PlaylistDataReadyAsync_ReturnValue) == 0x000A10, "Member 'B_HidingProp_WilliePete_C_ExecuteUbergraph_B_HidingProp_WilliePete::CallFunc_PlaylistDataReadyAsync_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_HidingProp_WilliePete_C_ExecuteUbergraph_B_HidingProp_WilliePete, CallFunc_IsValid_ReturnValue_9) == 0x000A18, "Member 'B_HidingProp_WilliePete_C_ExecuteUbergraph_B_HidingProp_WilliePete::CallFunc_IsValid_ReturnValue_9' has a wrong offset!");
static_assert(offsetof(B_HidingProp_WilliePete_C_ExecuteUbergraph_B_HidingProp_WilliePete, Temp_object_Variable) == 0x000A20, "Member 'B_HidingProp_WilliePete_C_ExecuteUbergraph_B_HidingProp_WilliePete::Temp_object_Variable' has a wrong offset!");
static_assert(offsetof(B_HidingProp_WilliePete_C_ExecuteUbergraph_B_HidingProp_WilliePete, Temp_object_Variable_1) == 0x000A28, "Member 'B_HidingProp_WilliePete_C_ExecuteUbergraph_B_HidingProp_WilliePete::Temp_object_Variable_1' has a wrong offset!");
static_assert(offsetof(B_HidingProp_WilliePete_C_ExecuteUbergraph_B_HidingProp_WilliePete, Temp_struct_Variable) == 0x000A30, "Member 'B_HidingProp_WilliePete_C_ExecuteUbergraph_B_HidingProp_WilliePete::Temp_struct_Variable' has a wrong offset!");
static_assert(offsetof(B_HidingProp_WilliePete_C_ExecuteUbergraph_B_HidingProp_WilliePete, CallFunc_IsValid_ReturnValue_10) == 0x000A50, "Member 'B_HidingProp_WilliePete_C_ExecuteUbergraph_B_HidingProp_WilliePete::CallFunc_IsValid_ReturnValue_10' has a wrong offset!");
static_assert(offsetof(B_HidingProp_WilliePete_C_ExecuteUbergraph_B_HidingProp_WilliePete, K2Node_CustomEvent_GameState) == 0x000A58, "Member 'B_HidingProp_WilliePete_C_ExecuteUbergraph_B_HidingProp_WilliePete::K2Node_CustomEvent_GameState' has a wrong offset!");
static_assert(offsetof(B_HidingProp_WilliePete_C_ExecuteUbergraph_B_HidingProp_WilliePete, K2Node_CustomEvent_Playlist) == 0x000A60, "Member 'B_HidingProp_WilliePete_C_ExecuteUbergraph_B_HidingProp_WilliePete::K2Node_CustomEvent_Playlist' has a wrong offset!");
static_assert(offsetof(B_HidingProp_WilliePete_C_ExecuteUbergraph_B_HidingProp_WilliePete, K2Node_CustomEvent_PlaylistContextTags) == 0x000A68, "Member 'B_HidingProp_WilliePete_C_ExecuteUbergraph_B_HidingProp_WilliePete::K2Node_CustomEvent_PlaylistContextTags' has a wrong offset!");
static_assert(offsetof(B_HidingProp_WilliePete_C_ExecuteUbergraph_B_HidingProp_WilliePete, Temp_object_Variable_2) == 0x000A88, "Member 'B_HidingProp_WilliePete_C_ExecuteUbergraph_B_HidingProp_WilliePete::Temp_object_Variable_2' has a wrong offset!");
static_assert(offsetof(B_HidingProp_WilliePete_C_ExecuteUbergraph_B_HidingProp_WilliePete, CallFunc_Greater_DoubleDouble_ReturnValue_1) == 0x000A90, "Member 'B_HidingProp_WilliePete_C_ExecuteUbergraph_B_HidingProp_WilliePete::CallFunc_Greater_DoubleDouble_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(B_HidingProp_WilliePete_C_ExecuteUbergraph_B_HidingProp_WilliePete, CallFunc_LessEqual_DoubleDouble_ReturnValue_1) == 0x000A91, "Member 'B_HidingProp_WilliePete_C_ExecuteUbergraph_B_HidingProp_WilliePete::CallFunc_LessEqual_DoubleDouble_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(B_HidingProp_WilliePete_C_ExecuteUbergraph_B_HidingProp_WilliePete, CallFunc_IsValid_ReturnValue_11) == 0x000A92, "Member 'B_HidingProp_WilliePete_C_ExecuteUbergraph_B_HidingProp_WilliePete::CallFunc_IsValid_ReturnValue_11' has a wrong offset!");
static_assert(offsetof(B_HidingProp_WilliePete_C_ExecuteUbergraph_B_HidingProp_WilliePete, CallFunc_BooleanAND_ReturnValue_1) == 0x000A93, "Member 'B_HidingProp_WilliePete_C_ExecuteUbergraph_B_HidingProp_WilliePete::CallFunc_BooleanAND_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(B_HidingProp_WilliePete_C_ExecuteUbergraph_B_HidingProp_WilliePete, CallFunc_GetForwardVector_ReturnValue_2) == 0x000A98, "Member 'B_HidingProp_WilliePete_C_ExecuteUbergraph_B_HidingProp_WilliePete::CallFunc_GetForwardVector_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(B_HidingProp_WilliePete_C_ExecuteUbergraph_B_HidingProp_WilliePete, K2Node_CreateDelegate_OutputDelegate_2) == 0x000AB0, "Member 'B_HidingProp_WilliePete_C_ExecuteUbergraph_B_HidingProp_WilliePete::K2Node_CreateDelegate_OutputDelegate_2' has a wrong offset!");
static_assert(offsetof(B_HidingProp_WilliePete_C_ExecuteUbergraph_B_HidingProp_WilliePete, K2Node_CustomEvent_Hit) == 0x000AC0, "Member 'B_HidingProp_WilliePete_C_ExecuteUbergraph_B_HidingProp_WilliePete::K2Node_CustomEvent_Hit' has a wrong offset!");
static_assert(offsetof(B_HidingProp_WilliePete_C_ExecuteUbergraph_B_HidingProp_WilliePete, CallFunc_Multiply_VectorFloat_ReturnValue_3) == 0x000BA0, "Member 'B_HidingProp_WilliePete_C_ExecuteUbergraph_B_HidingProp_WilliePete::CallFunc_Multiply_VectorFloat_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(B_HidingProp_WilliePete_C_ExecuteUbergraph_B_HidingProp_WilliePete, CallFunc_Multiply_DoubleDouble_ReturnValue_2) == 0x000BB8, "Member 'B_HidingProp_WilliePete_C_ExecuteUbergraph_B_HidingProp_WilliePete::CallFunc_Multiply_DoubleDouble_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(B_HidingProp_WilliePete_C_ExecuteUbergraph_B_HidingProp_WilliePete, CallFunc_RandomFloatInRange_ReturnValue_1) == 0x000BC0, "Member 'B_HidingProp_WilliePete_C_ExecuteUbergraph_B_HidingProp_WilliePete::CallFunc_RandomFloatInRange_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(B_HidingProp_WilliePete_C_ExecuteUbergraph_B_HidingProp_WilliePete, CallFunc_RandomFloatInRange_ReturnValue_2) == 0x000BC8, "Member 'B_HidingProp_WilliePete_C_ExecuteUbergraph_B_HidingProp_WilliePete::CallFunc_RandomFloatInRange_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(B_HidingProp_WilliePete_C_ExecuteUbergraph_B_HidingProp_WilliePete, CallFunc_Multiply_DoubleDouble_ReturnValue_3) == 0x000BD0, "Member 'B_HidingProp_WilliePete_C_ExecuteUbergraph_B_HidingProp_WilliePete::CallFunc_Multiply_DoubleDouble_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(B_HidingProp_WilliePete_C_ExecuteUbergraph_B_HidingProp_WilliePete, CallFunc_Multiply_DoubleDouble_ReturnValue_4) == 0x000BD8, "Member 'B_HidingProp_WilliePete_C_ExecuteUbergraph_B_HidingProp_WilliePete::CallFunc_Multiply_DoubleDouble_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(B_HidingProp_WilliePete_C_ExecuteUbergraph_B_HidingProp_WilliePete, CallFunc_RandomFloatInRange_ReturnValue_3) == 0x000BE0, "Member 'B_HidingProp_WilliePete_C_ExecuteUbergraph_B_HidingProp_WilliePete::CallFunc_RandomFloatInRange_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(B_HidingProp_WilliePete_C_ExecuteUbergraph_B_HidingProp_WilliePete, CallFunc_MakeVector_ReturnValue_1) == 0x000BE8, "Member 'B_HidingProp_WilliePete_C_ExecuteUbergraph_B_HidingProp_WilliePete::CallFunc_MakeVector_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(B_HidingProp_WilliePete_C_ExecuteUbergraph_B_HidingProp_WilliePete, CallFunc_Multiply_DoubleDouble_ReturnValue_5) == 0x000C00, "Member 'B_HidingProp_WilliePete_C_ExecuteUbergraph_B_HidingProp_WilliePete::CallFunc_Multiply_DoubleDouble_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(B_HidingProp_WilliePete_C_ExecuteUbergraph_B_HidingProp_WilliePete, CallFunc_Multiply_VectorFloat_ReturnValue_4) == 0x000C08, "Member 'B_HidingProp_WilliePete_C_ExecuteUbergraph_B_HidingProp_WilliePete::CallFunc_Multiply_VectorFloat_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(B_HidingProp_WilliePete_C_ExecuteUbergraph_B_HidingProp_WilliePete, CallFunc_RandomFloatInRange_ReturnValue_4) == 0x000C20, "Member 'B_HidingProp_WilliePete_C_ExecuteUbergraph_B_HidingProp_WilliePete::CallFunc_RandomFloatInRange_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(B_HidingProp_WilliePete_C_ExecuteUbergraph_B_HidingProp_WilliePete, CallFunc_Multiply_DoubleDouble_ReturnValue_6) == 0x000C28, "Member 'B_HidingProp_WilliePete_C_ExecuteUbergraph_B_HidingProp_WilliePete::CallFunc_Multiply_DoubleDouble_ReturnValue_6' has a wrong offset!");
static_assert(offsetof(B_HidingProp_WilliePete_C_ExecuteUbergraph_B_HidingProp_WilliePete, CallFunc_RandomFloatInRange_ReturnValue_5) == 0x000C30, "Member 'B_HidingProp_WilliePete_C_ExecuteUbergraph_B_HidingProp_WilliePete::CallFunc_RandomFloatInRange_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(B_HidingProp_WilliePete_C_ExecuteUbergraph_B_HidingProp_WilliePete, CallFunc_GetWorldSubsystem_ReturnValue) == 0x000C38, "Member 'B_HidingProp_WilliePete_C_ExecuteUbergraph_B_HidingProp_WilliePete::CallFunc_GetWorldSubsystem_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_HidingProp_WilliePete_C_ExecuteUbergraph_B_HidingProp_WilliePete, CallFunc_Multiply_DoubleDouble_ReturnValue_7) == 0x000C40, "Member 'B_HidingProp_WilliePete_C_ExecuteUbergraph_B_HidingProp_WilliePete::CallFunc_Multiply_DoubleDouble_ReturnValue_7' has a wrong offset!");
static_assert(offsetof(B_HidingProp_WilliePete_C_ExecuteUbergraph_B_HidingProp_WilliePete, CallFunc_GetOceanTotalHeight_ReturnValue) == 0x000C48, "Member 'B_HidingProp_WilliePete_C_ExecuteUbergraph_B_HidingProp_WilliePete::CallFunc_GetOceanTotalHeight_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_HidingProp_WilliePete_C_ExecuteUbergraph_B_HidingProp_WilliePete, CallFunc_MakeVector_ReturnValue_2) == 0x000C50, "Member 'B_HidingProp_WilliePete_C_ExecuteUbergraph_B_HidingProp_WilliePete::CallFunc_MakeVector_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(B_HidingProp_WilliePete_C_ExecuteUbergraph_B_HidingProp_WilliePete, CallFunc_MakeVector_ReturnValue_3) == 0x000C68, "Member 'B_HidingProp_WilliePete_C_ExecuteUbergraph_B_HidingProp_WilliePete::CallFunc_MakeVector_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(B_HidingProp_WilliePete_C_ExecuteUbergraph_B_HidingProp_WilliePete, CallFunc_Multiply_VectorFloat_ReturnValue_5) == 0x000C80, "Member 'B_HidingProp_WilliePete_C_ExecuteUbergraph_B_HidingProp_WilliePete::CallFunc_Multiply_VectorFloat_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(B_HidingProp_WilliePete_C_ExecuteUbergraph_B_HidingProp_WilliePete, CallFunc_GetWorldSubsystem_ReturnValue_1) == 0x000C98, "Member 'B_HidingProp_WilliePete_C_ExecuteUbergraph_B_HidingProp_WilliePete::CallFunc_GetWorldSubsystem_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(B_HidingProp_WilliePete_C_ExecuteUbergraph_B_HidingProp_WilliePete, CallFunc_GetOceanBaseHeight_ReturnValue) == 0x000CA0, "Member 'B_HidingProp_WilliePete_C_ExecuteUbergraph_B_HidingProp_WilliePete::CallFunc_GetOceanBaseHeight_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_HidingProp_WilliePete_C_ExecuteUbergraph_B_HidingProp_WilliePete, CallFunc_Subtract_DoubleDouble_ReturnValue) == 0x000CA8, "Member 'B_HidingProp_WilliePete_C_ExecuteUbergraph_B_HidingProp_WilliePete::CallFunc_Subtract_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_HidingProp_WilliePete_C_ExecuteUbergraph_B_HidingProp_WilliePete, CallFunc_Divide_DoubleDouble_ReturnValue_1) == 0x000CB0, "Member 'B_HidingProp_WilliePete_C_ExecuteUbergraph_B_HidingProp_WilliePete::CallFunc_Divide_DoubleDouble_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(B_HidingProp_WilliePete_C_ExecuteUbergraph_B_HidingProp_WilliePete, CallFunc_GreaterEqual_DoubleDouble_ReturnValue) == 0x000CB8, "Member 'B_HidingProp_WilliePete_C_ExecuteUbergraph_B_HidingProp_WilliePete::CallFunc_GreaterEqual_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_HidingProp_WilliePete_C_ExecuteUbergraph_B_HidingProp_WilliePete, CallFunc_Greater_DoubleDouble_A_ImplicitCast) == 0x000CC0, "Member 'B_HidingProp_WilliePete_C_ExecuteUbergraph_B_HidingProp_WilliePete::CallFunc_Greater_DoubleDouble_A_ImplicitCast' has a wrong offset!");
static_assert(offsetof(B_HidingProp_WilliePete_C_ExecuteUbergraph_B_HidingProp_WilliePete, CallFunc_LessEqual_DoubleDouble_A_ImplicitCast) == 0x000CC8, "Member 'B_HidingProp_WilliePete_C_ExecuteUbergraph_B_HidingProp_WilliePete::CallFunc_LessEqual_DoubleDouble_A_ImplicitCast' has a wrong offset!");
static_assert(offsetof(B_HidingProp_WilliePete_C_ExecuteUbergraph_B_HidingProp_WilliePete, CallFunc_GreaterEqual_DoubleDouble_A_ImplicitCast) == 0x000CD0, "Member 'B_HidingProp_WilliePete_C_ExecuteUbergraph_B_HidingProp_WilliePete::CallFunc_GreaterEqual_DoubleDouble_A_ImplicitCast' has a wrong offset!");
static_assert(offsetof(B_HidingProp_WilliePete_C_ExecuteUbergraph_B_HidingProp_WilliePete, CallFunc_SetLifeSpan_InLifespan_ImplicitCast) == 0x000CD8, "Member 'B_HidingProp_WilliePete_C_ExecuteUbergraph_B_HidingProp_WilliePete::CallFunc_SetLifeSpan_InLifespan_ImplicitCast' has a wrong offset!");
static_assert(offsetof(B_HidingProp_WilliePete_C_ExecuteUbergraph_B_HidingProp_WilliePete, CallFunc_Multiply_VectorFloat_B_ImplicitCast) == 0x000CE0, "Member 'B_HidingProp_WilliePete_C_ExecuteUbergraph_B_HidingProp_WilliePete::CallFunc_Multiply_VectorFloat_B_ImplicitCast' has a wrong offset!");
static_assert(offsetof(B_HidingProp_WilliePete_C_ExecuteUbergraph_B_HidingProp_WilliePete, CallFunc_Divide_DoubleDouble_A_ImplicitCast) == 0x000CE8, "Member 'B_HidingProp_WilliePete_C_ExecuteUbergraph_B_HidingProp_WilliePete::CallFunc_Divide_DoubleDouble_A_ImplicitCast' has a wrong offset!");
static_assert(offsetof(B_HidingProp_WilliePete_C_ExecuteUbergraph_B_HidingProp_WilliePete, CallFunc_Multiply_DoubleDouble_A_ImplicitCast) == 0x000CF0, "Member 'B_HidingProp_WilliePete_C_ExecuteUbergraph_B_HidingProp_WilliePete::CallFunc_Multiply_DoubleDouble_A_ImplicitCast' has a wrong offset!");
static_assert(offsetof(B_HidingProp_WilliePete_C_ExecuteUbergraph_B_HidingProp_WilliePete, CallFunc_Greater_DoubleDouble_A_ImplicitCast_1) == 0x000CF8, "Member 'B_HidingProp_WilliePete_C_ExecuteUbergraph_B_HidingProp_WilliePete::CallFunc_Greater_DoubleDouble_A_ImplicitCast_1' has a wrong offset!");
static_assert(offsetof(B_HidingProp_WilliePete_C_ExecuteUbergraph_B_HidingProp_WilliePete, CallFunc_LessEqual_DoubleDouble_A_ImplicitCast_1) == 0x000D00, "Member 'B_HidingProp_WilliePete_C_ExecuteUbergraph_B_HidingProp_WilliePete::CallFunc_LessEqual_DoubleDouble_A_ImplicitCast_1' has a wrong offset!");
static_assert(offsetof(B_HidingProp_WilliePete_C_ExecuteUbergraph_B_HidingProp_WilliePete, CallFunc_MakeVector_Z_ImplicitCast) == 0x000D08, "Member 'B_HidingProp_WilliePete_C_ExecuteUbergraph_B_HidingProp_WilliePete::CallFunc_MakeVector_Z_ImplicitCast' has a wrong offset!");
static_assert(offsetof(B_HidingProp_WilliePete_C_ExecuteUbergraph_B_HidingProp_WilliePete, CallFunc_Subtract_DoubleDouble_B_ImplicitCast) == 0x000D10, "Member 'B_HidingProp_WilliePete_C_ExecuteUbergraph_B_HidingProp_WilliePete::CallFunc_Subtract_DoubleDouble_B_ImplicitCast' has a wrong offset!");

struct B_HidingProp_WilliePete_C_HelperLocationLogger final
{
public:
	class FString                                 InString;
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue;
	class FString                                 CallFunc_Concat_StrStr_ReturnValue;
	class FString                                 CallFunc_Conv_VectorToString_ReturnValue;
	class FString                                 CallFunc_Concat_StrStr_ReturnValue_1;
	class FString                                 CallFunc_Concat_StrStr_ReturnValue_2;
	class FString                                 CallFunc_Concat_StrStr_ReturnValue_3;
};
static_assert(alignof(B_HidingProp_WilliePete_C_HelperLocationLogger) == 0x000008, "Wrong alignment on B_HidingProp_WilliePete_C_HelperLocationLogger");
static_assert(sizeof(B_HidingProp_WilliePete_C_HelperLocationLogger) == 0x000078, "Wrong size on B_HidingProp_WilliePete_C_HelperLocationLogger");
static_assert(offsetof(B_HidingProp_WilliePete_C_HelperLocationLogger, InString) == 0x000000, "Member 'B_HidingProp_WilliePete_C_HelperLocationLogger::InString' has a wrong offset!");
static_assert(offsetof(B_HidingProp_WilliePete_C_HelperLocationLogger, CallFunc_K2_GetActorLocation_ReturnValue) == 0x000010, "Member 'B_HidingProp_WilliePete_C_HelperLocationLogger::CallFunc_K2_GetActorLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_HidingProp_WilliePete_C_HelperLocationLogger, CallFunc_Concat_StrStr_ReturnValue) == 0x000028, "Member 'B_HidingProp_WilliePete_C_HelperLocationLogger::CallFunc_Concat_StrStr_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_HidingProp_WilliePete_C_HelperLocationLogger, CallFunc_Conv_VectorToString_ReturnValue) == 0x000038, "Member 'B_HidingProp_WilliePete_C_HelperLocationLogger::CallFunc_Conv_VectorToString_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_HidingProp_WilliePete_C_HelperLocationLogger, CallFunc_Concat_StrStr_ReturnValue_1) == 0x000048, "Member 'B_HidingProp_WilliePete_C_HelperLocationLogger::CallFunc_Concat_StrStr_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(B_HidingProp_WilliePete_C_HelperLocationLogger, CallFunc_Concat_StrStr_ReturnValue_2) == 0x000058, "Member 'B_HidingProp_WilliePete_C_HelperLocationLogger::CallFunc_Concat_StrStr_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(B_HidingProp_WilliePete_C_HelperLocationLogger, CallFunc_Concat_StrStr_ReturnValue_3) == 0x000068, "Member 'B_HidingProp_WilliePete_C_HelperLocationLogger::CallFunc_Concat_StrStr_ReturnValue_3' has a wrong offset!");

struct B_HidingProp_WilliePete_C_Non_Pawn_Actor_Destroyed final
{
public:
	class AActor*                                 DestroyedActor;
};
static_assert(alignof(B_HidingProp_WilliePete_C_Non_Pawn_Actor_Destroyed) == 0x000008, "Wrong alignment on B_HidingProp_WilliePete_C_Non_Pawn_Actor_Destroyed");
static_assert(sizeof(B_HidingProp_WilliePete_C_Non_Pawn_Actor_Destroyed) == 0x000008, "Wrong size on B_HidingProp_WilliePete_C_Non_Pawn_Actor_Destroyed");
static_assert(offsetof(B_HidingProp_WilliePete_C_Non_Pawn_Actor_Destroyed, DestroyedActor) == 0x000000, "Member 'B_HidingProp_WilliePete_C_Non_Pawn_Actor_Destroyed::DestroyedActor' has a wrong offset!");

struct B_HidingProp_WilliePete_C_Non_Pawn_Teleport final
{
public:
	class AActor*                                 TeleportingActor;
};
static_assert(alignof(B_HidingProp_WilliePete_C_Non_Pawn_Teleport) == 0x000008, "Wrong alignment on B_HidingProp_WilliePete_C_Non_Pawn_Teleport");
static_assert(sizeof(B_HidingProp_WilliePete_C_Non_Pawn_Teleport) == 0x000008, "Wrong size on B_HidingProp_WilliePete_C_Non_Pawn_Teleport");
static_assert(offsetof(B_HidingProp_WilliePete_C_Non_Pawn_Teleport, TeleportingActor) == 0x000000, "Member 'B_HidingProp_WilliePete_C_Non_Pawn_Teleport::TeleportingActor' has a wrong offset!");

struct B_HidingProp_WilliePete_C_OnReady_74044DD44988556292500EB8F289359F final
{
public:
	class AFortGameStateAthena*                   GameState;
	const class UFortPlaylist*                    Playlist;
	struct FGameplayTagContainer                  PlaylistContextTags;
};
static_assert(alignof(B_HidingProp_WilliePete_C_OnReady_74044DD44988556292500EB8F289359F) == 0x000008, "Wrong alignment on B_HidingProp_WilliePete_C_OnReady_74044DD44988556292500EB8F289359F");
static_assert(sizeof(B_HidingProp_WilliePete_C_OnReady_74044DD44988556292500EB8F289359F) == 0x000030, "Wrong size on B_HidingProp_WilliePete_C_OnReady_74044DD44988556292500EB8F289359F");
static_assert(offsetof(B_HidingProp_WilliePete_C_OnReady_74044DD44988556292500EB8F289359F, GameState) == 0x000000, "Member 'B_HidingProp_WilliePete_C_OnReady_74044DD44988556292500EB8F289359F::GameState' has a wrong offset!");
static_assert(offsetof(B_HidingProp_WilliePete_C_OnReady_74044DD44988556292500EB8F289359F, Playlist) == 0x000008, "Member 'B_HidingProp_WilliePete_C_OnReady_74044DD44988556292500EB8F289359F::Playlist' has a wrong offset!");
static_assert(offsetof(B_HidingProp_WilliePete_C_OnReady_74044DD44988556292500EB8F289359F, PlaylistContextTags) == 0x000010, "Member 'B_HidingProp_WilliePete_C_OnReady_74044DD44988556292500EB8F289359F::PlaylistContextTags' has a wrong offset!");

struct B_HidingProp_WilliePete_C_OnRep_AdjustedLocation final
{
public:
	class UWaterSubsystem*                        CallFunc_GetWorldSubsystem_ReturnValue;
	float                                         CallFunc_GetOceanTotalHeight_ReturnValue;
	uint8                                         Pad_C[0x4];
	class FString                                 CallFunc_Conv_DoubleToString_ReturnValue;
	float                                         CallFunc_GetOceanFloodHeight_ReturnValue;
	uint8                                         Pad_24[0x4];
	double                                        CallFunc_Divide_DoubleDouble_ReturnValue;
	class FString                                 CallFunc_Conv_DoubleToString_ReturnValue_1;
	class FString                                 CallFunc_Concat_StrStr_ReturnValue;
	class FString                                 CallFunc_Concat_StrStr_ReturnValue_1;
	class FString                                 CallFunc_Conv_VectorToString_ReturnValue;
	class FString                                 CallFunc_Concat_StrStr_ReturnValue_2;
	class FString                                 CallFunc_Concat_StrStr_ReturnValue_3;
	class FString                                 CallFunc_Concat_StrStr_ReturnValue_4;
	class FString                                 CallFunc_Concat_StrStr_ReturnValue_5;
	struct FHitResult                             CallFunc_K2_SetActorLocation_SweepHitResult;
	bool                                          CallFunc_K2_SetActorLocation_ReturnValue;
	uint8                                         Pad_191[0x7];
	double                                        CallFunc_Conv_DoubleToString_InDouble_ImplicitCast;
	double                                        CallFunc_Divide_DoubleDouble_A_ImplicitCast;
};
static_assert(alignof(B_HidingProp_WilliePete_C_OnRep_AdjustedLocation) == 0x000008, "Wrong alignment on B_HidingProp_WilliePete_C_OnRep_AdjustedLocation");
static_assert(sizeof(B_HidingProp_WilliePete_C_OnRep_AdjustedLocation) == 0x0001A8, "Wrong size on B_HidingProp_WilliePete_C_OnRep_AdjustedLocation");
static_assert(offsetof(B_HidingProp_WilliePete_C_OnRep_AdjustedLocation, CallFunc_GetWorldSubsystem_ReturnValue) == 0x000000, "Member 'B_HidingProp_WilliePete_C_OnRep_AdjustedLocation::CallFunc_GetWorldSubsystem_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_HidingProp_WilliePete_C_OnRep_AdjustedLocation, CallFunc_GetOceanTotalHeight_ReturnValue) == 0x000008, "Member 'B_HidingProp_WilliePete_C_OnRep_AdjustedLocation::CallFunc_GetOceanTotalHeight_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_HidingProp_WilliePete_C_OnRep_AdjustedLocation, CallFunc_Conv_DoubleToString_ReturnValue) == 0x000010, "Member 'B_HidingProp_WilliePete_C_OnRep_AdjustedLocation::CallFunc_Conv_DoubleToString_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_HidingProp_WilliePete_C_OnRep_AdjustedLocation, CallFunc_GetOceanFloodHeight_ReturnValue) == 0x000020, "Member 'B_HidingProp_WilliePete_C_OnRep_AdjustedLocation::CallFunc_GetOceanFloodHeight_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_HidingProp_WilliePete_C_OnRep_AdjustedLocation, CallFunc_Divide_DoubleDouble_ReturnValue) == 0x000028, "Member 'B_HidingProp_WilliePete_C_OnRep_AdjustedLocation::CallFunc_Divide_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_HidingProp_WilliePete_C_OnRep_AdjustedLocation, CallFunc_Conv_DoubleToString_ReturnValue_1) == 0x000030, "Member 'B_HidingProp_WilliePete_C_OnRep_AdjustedLocation::CallFunc_Conv_DoubleToString_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(B_HidingProp_WilliePete_C_OnRep_AdjustedLocation, CallFunc_Concat_StrStr_ReturnValue) == 0x000040, "Member 'B_HidingProp_WilliePete_C_OnRep_AdjustedLocation::CallFunc_Concat_StrStr_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_HidingProp_WilliePete_C_OnRep_AdjustedLocation, CallFunc_Concat_StrStr_ReturnValue_1) == 0x000050, "Member 'B_HidingProp_WilliePete_C_OnRep_AdjustedLocation::CallFunc_Concat_StrStr_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(B_HidingProp_WilliePete_C_OnRep_AdjustedLocation, CallFunc_Conv_VectorToString_ReturnValue) == 0x000060, "Member 'B_HidingProp_WilliePete_C_OnRep_AdjustedLocation::CallFunc_Conv_VectorToString_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_HidingProp_WilliePete_C_OnRep_AdjustedLocation, CallFunc_Concat_StrStr_ReturnValue_2) == 0x000070, "Member 'B_HidingProp_WilliePete_C_OnRep_AdjustedLocation::CallFunc_Concat_StrStr_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(B_HidingProp_WilliePete_C_OnRep_AdjustedLocation, CallFunc_Concat_StrStr_ReturnValue_3) == 0x000080, "Member 'B_HidingProp_WilliePete_C_OnRep_AdjustedLocation::CallFunc_Concat_StrStr_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(B_HidingProp_WilliePete_C_OnRep_AdjustedLocation, CallFunc_Concat_StrStr_ReturnValue_4) == 0x000090, "Member 'B_HidingProp_WilliePete_C_OnRep_AdjustedLocation::CallFunc_Concat_StrStr_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(B_HidingProp_WilliePete_C_OnRep_AdjustedLocation, CallFunc_Concat_StrStr_ReturnValue_5) == 0x0000A0, "Member 'B_HidingProp_WilliePete_C_OnRep_AdjustedLocation::CallFunc_Concat_StrStr_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(B_HidingProp_WilliePete_C_OnRep_AdjustedLocation, CallFunc_K2_SetActorLocation_SweepHitResult) == 0x0000B0, "Member 'B_HidingProp_WilliePete_C_OnRep_AdjustedLocation::CallFunc_K2_SetActorLocation_SweepHitResult' has a wrong offset!");
static_assert(offsetof(B_HidingProp_WilliePete_C_OnRep_AdjustedLocation, CallFunc_K2_SetActorLocation_ReturnValue) == 0x000190, "Member 'B_HidingProp_WilliePete_C_OnRep_AdjustedLocation::CallFunc_K2_SetActorLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_HidingProp_WilliePete_C_OnRep_AdjustedLocation, CallFunc_Conv_DoubleToString_InDouble_ImplicitCast) == 0x000198, "Member 'B_HidingProp_WilliePete_C_OnRep_AdjustedLocation::CallFunc_Conv_DoubleToString_InDouble_ImplicitCast' has a wrong offset!");
static_assert(offsetof(B_HidingProp_WilliePete_C_OnRep_AdjustedLocation, CallFunc_Divide_DoubleDouble_A_ImplicitCast) == 0x0001A0, "Member 'B_HidingProp_WilliePete_C_OnRep_AdjustedLocation::CallFunc_Divide_DoubleDouble_A_ImplicitCast' has a wrong offset!");

struct B_HidingProp_WilliePete_C_OnRep_bSetSilentDie final
{
public:
	bool                                          CallFunc_HasAuthority_ReturnValue;
};
static_assert(alignof(B_HidingProp_WilliePete_C_OnRep_bSetSilentDie) == 0x000001, "Wrong alignment on B_HidingProp_WilliePete_C_OnRep_bSetSilentDie");
static_assert(sizeof(B_HidingProp_WilliePete_C_OnRep_bSetSilentDie) == 0x000001, "Wrong size on B_HidingProp_WilliePete_C_OnRep_bSetSilentDie");
static_assert(offsetof(B_HidingProp_WilliePete_C_OnRep_bSetSilentDie, CallFunc_HasAuthority_ReturnValue) == 0x000000, "Member 'B_HidingProp_WilliePete_C_OnRep_bSetSilentDie::CallFunc_HasAuthority_ReturnValue' has a wrong offset!");

struct B_HidingProp_WilliePete_C_OnRep_bSetSpawnedWaterBody final
{
public:
	bool                                          CallFunc_HasAuthority_ReturnValue;
};
static_assert(alignof(B_HidingProp_WilliePete_C_OnRep_bSetSpawnedWaterBody) == 0x000001, "Wrong alignment on B_HidingProp_WilliePete_C_OnRep_bSetSpawnedWaterBody");
static_assert(sizeof(B_HidingProp_WilliePete_C_OnRep_bSetSpawnedWaterBody) == 0x000001, "Wrong size on B_HidingProp_WilliePete_C_OnRep_bSetSpawnedWaterBody");
static_assert(offsetof(B_HidingProp_WilliePete_C_OnRep_bSetSpawnedWaterBody, CallFunc_HasAuthority_ReturnValue) == 0x000000, "Member 'B_HidingProp_WilliePete_C_OnRep_bSetSpawnedWaterBody::CallFunc_HasAuthority_ReturnValue' has a wrong offset!");

struct B_HidingProp_WilliePete_C_ResetGravity final
{
public:
	struct FHitResult                             Hit;
};
static_assert(alignof(B_HidingProp_WilliePete_C_ResetGravity) == 0x000008, "Wrong alignment on B_HidingProp_WilliePete_C_ResetGravity");
static_assert(sizeof(B_HidingProp_WilliePete_C_ResetGravity) == 0x0000E0, "Wrong size on B_HidingProp_WilliePete_C_ResetGravity");
static_assert(offsetof(B_HidingProp_WilliePete_C_ResetGravity, Hit) == 0x000000, "Member 'B_HidingProp_WilliePete_C_ResetGravity::Hit' has a wrong offset!");

struct B_HidingProp_WilliePete_C_StopHiding final
{
public:
	const class AFortPawn*                        Pawn_0;
};
static_assert(alignof(B_HidingProp_WilliePete_C_StopHiding) == 0x000008, "Wrong alignment on B_HidingProp_WilliePete_C_StopHiding");
static_assert(sizeof(B_HidingProp_WilliePete_C_StopHiding) == 0x000008, "Wrong size on B_HidingProp_WilliePete_C_StopHiding");
static_assert(offsetof(B_HidingProp_WilliePete_C_StopHiding, Pawn_0) == 0x000000, "Member 'B_HidingProp_WilliePete_C_StopHiding::Pawn_0' has a wrong offset!");

struct B_HidingProp_WilliePete_C_TeleportExitSpeed final
{
public:
	struct FVector                                ExitFVector;
	double                                        EnterSpeed;
	double                                        OverrideSpeed;
	double                                        MinimumSpeed;
	bool                                          ForceSpeedOverride;
	uint8                                         Pad_31[0x7];
	struct FVector                                TeleportExitVelocity;
	bool                                          Temp_bool_Variable;
	bool                                          CallFunc_Less_DoubleDouble_ReturnValue;
	bool                                          Temp_bool_Variable_1;
	uint8                                         Pad_53[0x5];
	double                                        K2Node_Select_Default;
	double                                        K2Node_Select_Default_1;
	struct FVector                                CallFunc_Multiply_VectorFloat_ReturnValue;
};
static_assert(alignof(B_HidingProp_WilliePete_C_TeleportExitSpeed) == 0x000008, "Wrong alignment on B_HidingProp_WilliePete_C_TeleportExitSpeed");
static_assert(sizeof(B_HidingProp_WilliePete_C_TeleportExitSpeed) == 0x000080, "Wrong size on B_HidingProp_WilliePete_C_TeleportExitSpeed");
static_assert(offsetof(B_HidingProp_WilliePete_C_TeleportExitSpeed, ExitFVector) == 0x000000, "Member 'B_HidingProp_WilliePete_C_TeleportExitSpeed::ExitFVector' has a wrong offset!");
static_assert(offsetof(B_HidingProp_WilliePete_C_TeleportExitSpeed, EnterSpeed) == 0x000018, "Member 'B_HidingProp_WilliePete_C_TeleportExitSpeed::EnterSpeed' has a wrong offset!");
static_assert(offsetof(B_HidingProp_WilliePete_C_TeleportExitSpeed, OverrideSpeed) == 0x000020, "Member 'B_HidingProp_WilliePete_C_TeleportExitSpeed::OverrideSpeed' has a wrong offset!");
static_assert(offsetof(B_HidingProp_WilliePete_C_TeleportExitSpeed, MinimumSpeed) == 0x000028, "Member 'B_HidingProp_WilliePete_C_TeleportExitSpeed::MinimumSpeed' has a wrong offset!");
static_assert(offsetof(B_HidingProp_WilliePete_C_TeleportExitSpeed, ForceSpeedOverride) == 0x000030, "Member 'B_HidingProp_WilliePete_C_TeleportExitSpeed::ForceSpeedOverride' has a wrong offset!");
static_assert(offsetof(B_HidingProp_WilliePete_C_TeleportExitSpeed, TeleportExitVelocity) == 0x000038, "Member 'B_HidingProp_WilliePete_C_TeleportExitSpeed::TeleportExitVelocity' has a wrong offset!");
static_assert(offsetof(B_HidingProp_WilliePete_C_TeleportExitSpeed, Temp_bool_Variable) == 0x000050, "Member 'B_HidingProp_WilliePete_C_TeleportExitSpeed::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(B_HidingProp_WilliePete_C_TeleportExitSpeed, CallFunc_Less_DoubleDouble_ReturnValue) == 0x000051, "Member 'B_HidingProp_WilliePete_C_TeleportExitSpeed::CallFunc_Less_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_HidingProp_WilliePete_C_TeleportExitSpeed, Temp_bool_Variable_1) == 0x000052, "Member 'B_HidingProp_WilliePete_C_TeleportExitSpeed::Temp_bool_Variable_1' has a wrong offset!");
static_assert(offsetof(B_HidingProp_WilliePete_C_TeleportExitSpeed, K2Node_Select_Default) == 0x000058, "Member 'B_HidingProp_WilliePete_C_TeleportExitSpeed::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(B_HidingProp_WilliePete_C_TeleportExitSpeed, K2Node_Select_Default_1) == 0x000060, "Member 'B_HidingProp_WilliePete_C_TeleportExitSpeed::K2Node_Select_Default_1' has a wrong offset!");
static_assert(offsetof(B_HidingProp_WilliePete_C_TeleportExitSpeed, CallFunc_Multiply_VectorFloat_ReturnValue) == 0x000068, "Member 'B_HidingProp_WilliePete_C_TeleportExitSpeed::CallFunc_Multiply_VectorFloat_ReturnValue' has a wrong offset!");

}
