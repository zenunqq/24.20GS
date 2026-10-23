#pragma once

#include "Basic.hpp"

#include "PhysicsCore_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "FortniteGame_structs.hpp"
#include "Engine_structs.hpp"

namespace SDK::Params
{

struct B_Athena_Pickaxe_Generic_C_Anim_Trails_Notify final
{
public:
	bool                                          bActive;
};
static_assert(alignof(B_Athena_Pickaxe_Generic_C_Anim_Trails_Notify) == 0x000001, "Wrong alignment on B_Athena_Pickaxe_Generic_C_Anim_Trails_Notify");
static_assert(sizeof(B_Athena_Pickaxe_Generic_C_Anim_Trails_Notify) == 0x000001, "Wrong size on B_Athena_Pickaxe_Generic_C_Anim_Trails_Notify");
static_assert(offsetof(B_Athena_Pickaxe_Generic_C_Anim_Trails_Notify, bActive) == 0x000000, "Member 'B_Athena_Pickaxe_Generic_C_Anim_Trails_Notify::bActive' has a wrong offset!");

struct B_Athena_Pickaxe_Generic_C_Binding_Time_of_Day_Control final
{
public:
	bool                                          F_;
	uint8                                         Pad_1[0x7];
	TScriptInterface<class IFortTimeOfDayManagerInterface> CallFunc_GetContextualTimeOfDayManager_ReturnValue;
	TDelegate<void(EFortDayPhase CurrentDayPhase, EFortDayPhase PreviousDayPhase, bool bAtCreation)> K2Node_CreateDelegate_OutputDelegate;
	uint8                                         Pad_24[0x4];
	class UObject*                                CallFunc_Conv_InterfaceToObject_ReturnValue;
	bool                                          CallFunc_IsValid_ReturnValue;
	EFortDayPhase                                 CallFunc_GetCurrentDayPhase_ReturnValue;
	EFortDayPhase                                 CallFunc_GetPreviousDayPhase_ReturnValue;
};
static_assert(alignof(B_Athena_Pickaxe_Generic_C_Binding_Time_of_Day_Control) == 0x000008, "Wrong alignment on B_Athena_Pickaxe_Generic_C_Binding_Time_of_Day_Control");
static_assert(sizeof(B_Athena_Pickaxe_Generic_C_Binding_Time_of_Day_Control) == 0x000038, "Wrong size on B_Athena_Pickaxe_Generic_C_Binding_Time_of_Day_Control");
static_assert(offsetof(B_Athena_Pickaxe_Generic_C_Binding_Time_of_Day_Control, F_) == 0x000000, "Member 'B_Athena_Pickaxe_Generic_C_Binding_Time_of_Day_Control::F_' has a wrong offset!");
static_assert(offsetof(B_Athena_Pickaxe_Generic_C_Binding_Time_of_Day_Control, CallFunc_GetContextualTimeOfDayManager_ReturnValue) == 0x000008, "Member 'B_Athena_Pickaxe_Generic_C_Binding_Time_of_Day_Control::CallFunc_GetContextualTimeOfDayManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_Athena_Pickaxe_Generic_C_Binding_Time_of_Day_Control, K2Node_CreateDelegate_OutputDelegate) == 0x000018, "Member 'B_Athena_Pickaxe_Generic_C_Binding_Time_of_Day_Control::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(B_Athena_Pickaxe_Generic_C_Binding_Time_of_Day_Control, CallFunc_Conv_InterfaceToObject_ReturnValue) == 0x000028, "Member 'B_Athena_Pickaxe_Generic_C_Binding_Time_of_Day_Control::CallFunc_Conv_InterfaceToObject_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_Athena_Pickaxe_Generic_C_Binding_Time_of_Day_Control, CallFunc_IsValid_ReturnValue) == 0x000030, "Member 'B_Athena_Pickaxe_Generic_C_Binding_Time_of_Day_Control::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_Athena_Pickaxe_Generic_C_Binding_Time_of_Day_Control, CallFunc_GetCurrentDayPhase_ReturnValue) == 0x000031, "Member 'B_Athena_Pickaxe_Generic_C_Binding_Time_of_Day_Control::CallFunc_GetCurrentDayPhase_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_Athena_Pickaxe_Generic_C_Binding_Time_of_Day_Control, CallFunc_GetPreviousDayPhase_ReturnValue) == 0x000032, "Member 'B_Athena_Pickaxe_Generic_C_Binding_Time_of_Day_Control::CallFunc_GetPreviousDayPhase_ReturnValue' has a wrong offset!");

struct B_Athena_Pickaxe_Generic_C_BindSwingAnimTrailEvents final
{
public:
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_1;
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_2;
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_3;
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_4;
	uint8                                         Pad_3C[0x4];
	class APawn*                                  CallFunc_GetInstigator_ReturnValue;
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_5;
	uint8                                         Pad_54[0x4];
	class APlayerPawn_Generic_C*                  K2Node_DynamicCast_AsPlayer_Pawn_Generic;
	bool                                          K2Node_DynamicCast_bSuccess;
	uint8                                         Pad_61[0x3];
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_6;
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_7;
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_8;
	TDelegate<void(bool bActive)>                 K2Node_CreateDelegate_OutputDelegate_9;
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_10;
	TDelegate<void(bool bActive)>                 K2Node_CreateDelegate_OutputDelegate_11;
	uint8                                         Pad_AC[0x4];
	class APawn*                                  CallFunc_GetInstigator_ReturnValue_1;
	class APlayerPawn_Athena_C*                   K2Node_DynamicCast_AsPlayer_Pawn_Athena;
	bool                                          K2Node_DynamicCast_bSuccess_1;
};
static_assert(alignof(B_Athena_Pickaxe_Generic_C_BindSwingAnimTrailEvents) == 0x000008, "Wrong alignment on B_Athena_Pickaxe_Generic_C_BindSwingAnimTrailEvents");
static_assert(sizeof(B_Athena_Pickaxe_Generic_C_BindSwingAnimTrailEvents) == 0x0000C8, "Wrong size on B_Athena_Pickaxe_Generic_C_BindSwingAnimTrailEvents");
static_assert(offsetof(B_Athena_Pickaxe_Generic_C_BindSwingAnimTrailEvents, K2Node_CreateDelegate_OutputDelegate) == 0x000000, "Member 'B_Athena_Pickaxe_Generic_C_BindSwingAnimTrailEvents::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(B_Athena_Pickaxe_Generic_C_BindSwingAnimTrailEvents, K2Node_CreateDelegate_OutputDelegate_1) == 0x00000C, "Member 'B_Athena_Pickaxe_Generic_C_BindSwingAnimTrailEvents::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(B_Athena_Pickaxe_Generic_C_BindSwingAnimTrailEvents, K2Node_CreateDelegate_OutputDelegate_2) == 0x000018, "Member 'B_Athena_Pickaxe_Generic_C_BindSwingAnimTrailEvents::K2Node_CreateDelegate_OutputDelegate_2' has a wrong offset!");
static_assert(offsetof(B_Athena_Pickaxe_Generic_C_BindSwingAnimTrailEvents, K2Node_CreateDelegate_OutputDelegate_3) == 0x000024, "Member 'B_Athena_Pickaxe_Generic_C_BindSwingAnimTrailEvents::K2Node_CreateDelegate_OutputDelegate_3' has a wrong offset!");
static_assert(offsetof(B_Athena_Pickaxe_Generic_C_BindSwingAnimTrailEvents, K2Node_CreateDelegate_OutputDelegate_4) == 0x000030, "Member 'B_Athena_Pickaxe_Generic_C_BindSwingAnimTrailEvents::K2Node_CreateDelegate_OutputDelegate_4' has a wrong offset!");
static_assert(offsetof(B_Athena_Pickaxe_Generic_C_BindSwingAnimTrailEvents, CallFunc_GetInstigator_ReturnValue) == 0x000040, "Member 'B_Athena_Pickaxe_Generic_C_BindSwingAnimTrailEvents::CallFunc_GetInstigator_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_Athena_Pickaxe_Generic_C_BindSwingAnimTrailEvents, K2Node_CreateDelegate_OutputDelegate_5) == 0x000048, "Member 'B_Athena_Pickaxe_Generic_C_BindSwingAnimTrailEvents::K2Node_CreateDelegate_OutputDelegate_5' has a wrong offset!");
static_assert(offsetof(B_Athena_Pickaxe_Generic_C_BindSwingAnimTrailEvents, K2Node_DynamicCast_AsPlayer_Pawn_Generic) == 0x000058, "Member 'B_Athena_Pickaxe_Generic_C_BindSwingAnimTrailEvents::K2Node_DynamicCast_AsPlayer_Pawn_Generic' has a wrong offset!");
static_assert(offsetof(B_Athena_Pickaxe_Generic_C_BindSwingAnimTrailEvents, K2Node_DynamicCast_bSuccess) == 0x000060, "Member 'B_Athena_Pickaxe_Generic_C_BindSwingAnimTrailEvents::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(B_Athena_Pickaxe_Generic_C_BindSwingAnimTrailEvents, K2Node_CreateDelegate_OutputDelegate_6) == 0x000064, "Member 'B_Athena_Pickaxe_Generic_C_BindSwingAnimTrailEvents::K2Node_CreateDelegate_OutputDelegate_6' has a wrong offset!");
static_assert(offsetof(B_Athena_Pickaxe_Generic_C_BindSwingAnimTrailEvents, K2Node_CreateDelegate_OutputDelegate_7) == 0x000070, "Member 'B_Athena_Pickaxe_Generic_C_BindSwingAnimTrailEvents::K2Node_CreateDelegate_OutputDelegate_7' has a wrong offset!");
static_assert(offsetof(B_Athena_Pickaxe_Generic_C_BindSwingAnimTrailEvents, K2Node_CreateDelegate_OutputDelegate_8) == 0x00007C, "Member 'B_Athena_Pickaxe_Generic_C_BindSwingAnimTrailEvents::K2Node_CreateDelegate_OutputDelegate_8' has a wrong offset!");
static_assert(offsetof(B_Athena_Pickaxe_Generic_C_BindSwingAnimTrailEvents, K2Node_CreateDelegate_OutputDelegate_9) == 0x000088, "Member 'B_Athena_Pickaxe_Generic_C_BindSwingAnimTrailEvents::K2Node_CreateDelegate_OutputDelegate_9' has a wrong offset!");
static_assert(offsetof(B_Athena_Pickaxe_Generic_C_BindSwingAnimTrailEvents, K2Node_CreateDelegate_OutputDelegate_10) == 0x000094, "Member 'B_Athena_Pickaxe_Generic_C_BindSwingAnimTrailEvents::K2Node_CreateDelegate_OutputDelegate_10' has a wrong offset!");
static_assert(offsetof(B_Athena_Pickaxe_Generic_C_BindSwingAnimTrailEvents, K2Node_CreateDelegate_OutputDelegate_11) == 0x0000A0, "Member 'B_Athena_Pickaxe_Generic_C_BindSwingAnimTrailEvents::K2Node_CreateDelegate_OutputDelegate_11' has a wrong offset!");
static_assert(offsetof(B_Athena_Pickaxe_Generic_C_BindSwingAnimTrailEvents, CallFunc_GetInstigator_ReturnValue_1) == 0x0000B0, "Member 'B_Athena_Pickaxe_Generic_C_BindSwingAnimTrailEvents::CallFunc_GetInstigator_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(B_Athena_Pickaxe_Generic_C_BindSwingAnimTrailEvents, K2Node_DynamicCast_AsPlayer_Pawn_Athena) == 0x0000B8, "Member 'B_Athena_Pickaxe_Generic_C_BindSwingAnimTrailEvents::K2Node_DynamicCast_AsPlayer_Pawn_Athena' has a wrong offset!");
static_assert(offsetof(B_Athena_Pickaxe_Generic_C_BindSwingAnimTrailEvents, K2Node_DynamicCast_bSuccess_1) == 0x0000C0, "Member 'B_Athena_Pickaxe_Generic_C_BindSwingAnimTrailEvents::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");

struct B_Athena_Pickaxe_Generic_C_ExecuteUbergraph_B_Athena_Pickaxe_Generic final
{
public:
	int32                                         EntryPoint;
	TDelegate<void(class UObject* Loaded)>        K2Node_CreateDelegate_OutputDelegate;
	class UObject*                                Temp_object_Variable;
	class UObject*                                K2Node_CustomEvent_Loaded;
	class UParticleSystem*                        K2Node_DynamicCast_AsParticle_System;
	bool                                          K2Node_DynamicCast_bSuccess;
	uint8                                         Pad_29[0x3];
	int32                                         Temp_int_Variable;
	int32                                         Temp_int_Variable_1;
	int32                                         Temp_int_Variable_2;
	int32                                         Temp_int_Variable_3;
	int32                                         Temp_int_Variable_4;
	int32                                         Temp_int_Variable_5;
	uint8                                         Pad_44[0x4];
	double                                        CallFunc_GetPI_ReturnValue;
	double                                        CallFunc_MultiplyMultiply_FloatFloat_ReturnValue;
	int32                                         Temp_int_Variable_6;
	uint8                                         Pad_5C[0x4];
	double                                        CallFunc_Multiply_DoubleDouble_ReturnValue;
	class FName                                   Temp_name_Variable;
	int32                                         Temp_int_Variable_7;
	int32                                         Temp_int_Variable_8;
	int32                                         Temp_int_Variable_9;
	int32                                         Temp_int_Variable_10;
	int32                                         Temp_int_Variable_11;
	int32                                         Temp_int_Variable_12;
	int32                                         Temp_int_Variable_13;
	int32                                         Temp_int_Variable_14;
	bool                                          CallFunc_IsDedicatedServer_ReturnValue;
	bool                                          K2Node_Event_First_Right;
	bool                                          K2Node_Event_First_Left;
	bool                                          K2Node_Event_bPersistentFire;
	bool                                          K2Node_Event_bSecondaryFire;
	bool                                          CallFunc_IsDedicatedServer_ReturnValue_1;
	uint8                                         Pad_92[0x6];
	struct FVector                                CallFunc_GetSocketLocation_ReturnValue;
	class UParticleSystemComponent*               CallFunc_SpawnEmitterAtLocation_ReturnValue;
	int32                                         Temp_int_Variable_15;
	uint8                                         Pad_BC[0x4];
	class APawn*                                  CallFunc_GetInstigator_ReturnValue;
	class AFortPawn*                              K2Node_DynamicCast_AsFort_Pawn;
	bool                                          K2Node_DynamicCast_bSuccess_1;
	uint8                                         Pad_D1[0x3];
	int32                                         Temp_int_Variable_16;
	class UParticleSystemComponent*               CallFunc_SpawnEmitterAttached_ReturnValue;
	struct FFortCosmeticModification              K2Node_Event_CosmeticMod;
	class UMaterialInstanceDynamic*               CallFunc_CreateDynamicMaterialInstance_ReturnValue;
	bool                                          CallFunc_IsAssetNull_ReturnValue;
	bool                                          K2Node_Event_bVisible;
	bool                                          K2Node_Event_bSetForLocalControllerOnly;
	uint8                                         Pad_78B[0x1];
	class FName                                   K2Node_CustomEvent_StatName;
	int32                                         K2Node_CustomEvent_StatValue;
	bool                                          CallFunc_IsValid_ReturnValue;
	bool                                          CallFunc_IsDedicatedServer_ReturnValue_2;
	uint8                                         Pad_796[0x2];
	class UFortWeaponItemDefinition*              CallFunc_GetWeaponData_ReturnValue;
	TSoftObjectPtr<class UTexture2D>              CallFunc_GetSmallPreviewImage_ReturnValue;
	class UTexture2D*                             CallFunc_GetOrLoadSynchronously_ReturnValue;
	TDelegate<void(class FName StatName, int32 StatValue)> K2Node_CreateDelegate_OutputDelegate_1;
	uint8                                         Pad_7DC[0x4];
	class AFortPlayerPawn*                        K2Node_DynamicCast_AsFort_Player_Pawn;
	bool                                          K2Node_DynamicCast_bSuccess_2;
	uint8                                         Pad_7E9[0x3];
	int32                                         K2Node_CustomEvent_Watched_Kills;
	class UFortAsyncAction_CosmeticAdaptiveStatWatcher* CallFunc_WatchCosmeticStat_ReturnValue;
	class UFXSystemComponent*                     CallFunc_GetIdleVFXComponent_ReturnValue;
	bool                                          CallFunc_IsValid_ReturnValue_1;
	bool                                          CallFunc_GetUseAnimTrailsPSC_ReturnValue;
	uint8                                         Pad_802[0x2];
	class FName                                   CallFunc_GetAnimTrailsSecondSocketName_ReturnValue;
	class FName                                   CallFunc_GetAnimTrailsFirstSocketName_ReturnValue;
	float                                         CallFunc_GetAnimTrailsWidth_ReturnValue;
	bool                                          CallFunc_GetUseAnimTrailsPSC_ReturnValue_1;
	uint8                                         Pad_811[0x3];
	int32                                         Temp_int_Variable_17;
	class UFXSystemComponent*                     CallFunc_GetAnimTrailVFXComponent_ReturnValue;
	bool                                          CallFunc_IsValid_ReturnValue_2;
	uint8                                         Pad_821[0x7];
	class UParticleSystemComponent*               K2Node_DynamicCast_AsCascade_Particle_System_Component;
	bool                                          K2Node_DynamicCast_bSuccess_3;
	uint8                                         Pad_831[0x7];
	class UFXSystemComponent*                     CallFunc_GetAnimTrailVFXComponent_ReturnValue_1;
	bool                                          K2Node_CustomEvent_bActive;
	uint8                                         Pad_841[0x7];
	class UParticleSystemComponent*               K2Node_DynamicCast_AsCascade_Particle_System_Component_1;
	bool                                          K2Node_DynamicCast_bSuccess_4;
	bool                                          CallFunc_IsValid_ReturnValue_3;
	uint8                                         Pad_852[0x6];
	class UFXSystemComponent*                     CallFunc_GetSwingVFXComponent_ReturnValue;
	int32                                         Temp_int_Variable_18;
	bool                                          CallFunc_IsValid_ReturnValue_4;
	uint8                                         Pad_865[0x3];
	int32                                         Temp_int_Variable_19;
	uint8                                         Pad_86C[0x4];
	class UFXSystemComponent*                     CallFunc_GetSwingVFXComponent_ReturnValue_1;
	bool                                          CallFunc_IsValid_ReturnValue_5;
	bool                                          CallFunc_IsDedicatedServer_ReturnValue_3;
	uint8                                         Pad_87A[0x6];
	class APawn*                                  CallFunc_GetInstigator_ReturnValue_1;
	class AFortPawn*                              K2Node_DynamicCast_AsFort_Pawn_1;
	bool                                          K2Node_DynamicCast_bSuccess_5;
	uint8                                         Pad_891[0x7];
	class AFortPlayerPawn*                        K2Node_DynamicCast_AsFort_Player_Pawn_1;
	bool                                          K2Node_DynamicCast_bSuccess_6;
	bool                                          CallFunc_IsValid_ReturnValue_6;
	uint8                                         Pad_8A2[0x6];
	class UFXSystemComponent*                     CallFunc_GetAnimTrailsPSC_ReturnValue;
	class APawn*                                  CallFunc_GetInstigator_ReturnValue_2;
	class UParticleSystem*                        CallFunc_GetAnimTrailsPSCTemplate_ReturnValue;
	class AFortPlayerPawn*                        K2Node_DynamicCast_AsFort_Player_Pawn_2;
	bool                                          K2Node_DynamicCast_bSuccess_7;
	uint8                                         Pad_8C9[0x3];
	class FName                                   CallFunc_GetAnimTrailsFirstSocketName_ReturnValue_1;
	class FName                                   CallFunc_GetAnimTrailsSecondSocketName_ReturnValue_1;
	float                                         CallFunc_GetAnimTrailsWidth_ReturnValue_1;
	class UNiagaraSystem*                         CallFunc_GetAnimTrailsNiagaraAsset_ReturnValue;
	class UFXSystemComponent*                     CallFunc_GetAnimTrailsPSC_ReturnValue_1;
	bool                                          CallFunc_GetUseAnimTrailsPSC_ReturnValue_2;
	uint8                                         Pad_8E9[0x3];
	int32                                         Temp_int_Variable_20;
	bool                                          CallFunc_AttachesAnimTrailsToWeapon_ReturnValue;
	EFortDayPhase                                 K2Node_CustomEvent_CurrentDayPhase;
	EFortDayPhase                                 K2Node_CustomEvent_PreviousDayPhase;
	bool                                          K2Node_CustomEvent_bAtCreation;
	int32                                         Temp_int_Variable_21;
	int32                                         Temp_int_Variable_22;
	int32                                         Temp_int_Variable_23;
	struct FHitResult                             K2Node_Event_HitResult;
	EPhysicalSurface                              K2Node_Event_ImpactPhysicalSurface;
	uint8                                         Pad_9E1[0x7];
	class UFXSystemComponent*                     K2Node_Event_SpawnedPSC;
	bool                                          CallFunc_BreakHitResult_bBlockingHit;
	bool                                          CallFunc_BreakHitResult_bInitialOverlap;
	uint8                                         Pad_9F2[0x2];
	float                                         CallFunc_BreakHitResult_Time;
	float                                         CallFunc_BreakHitResult_Distance;
	uint8                                         Pad_9FC[0x4];
	struct FVector                                CallFunc_BreakHitResult_Location;
	struct FVector                                CallFunc_BreakHitResult_ImpactPoint;
	struct FVector                                CallFunc_BreakHitResult_Normal;
	struct FVector                                CallFunc_BreakHitResult_ImpactNormal;
	class UPhysicalMaterial*                      CallFunc_BreakHitResult_PhysMat;
	class AActor*                                 CallFunc_BreakHitResult_HitActor;
	class UPrimitiveComponent*                    CallFunc_BreakHitResult_HitComponent;
	class FName                                   CallFunc_BreakHitResult_HitBoneName;
	class FName                                   CallFunc_BreakHitResult_BoneName;
	int32                                         CallFunc_BreakHitResult_HitItem;
	int32                                         CallFunc_BreakHitResult_ElementIndex;
	int32                                         CallFunc_BreakHitResult_FaceIndex;
	uint8                                         Pad_A8C[0x4];
	struct FVector                                CallFunc_BreakHitResult_TraceStart;
	struct FVector                                CallFunc_BreakHitResult_TraceEnd;
	struct FRotator                               CallFunc_MakeRotFromX_ReturnValue;
	int32                                         Temp_int_Variable_24;
	uint8                                         Pad_ADC[0x4];
	class UFXSystemComponent*                     CallFunc_GetSwingVFXComponent_ReturnValue_2;
	int32                                         Temp_int_Variable_25;
	int32                                         Temp_int_Variable_26;
	int32                                         Temp_int_Variable_27;
	uint8                                         Pad_AF4[0xC];
	struct FTransform                             CallFunc_K2_GetComponentToWorld_ReturnValue;
	bool                                          Temp_bool_Has_Been_Initd_Variable;
	bool                                          CallFunc_IsCosmeticObjectDisplayedInFrontendContext_ReturnValue;
	uint8                                         Pad_B62[0x2];
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_2;
	class APawn*                                  CallFunc_GetInstigator_ReturnValue_3;
	class AFortPawn*                              K2Node_DynamicCast_AsFort_Pawn_2;
	bool                                          K2Node_DynamicCast_bSuccess_8;
	uint8                                         Pad_B81[0x3];
	int32                                         Temp_int_Variable_28;
	class APawn*                                  CallFunc_GetInstigator_ReturnValue_4;
	int32                                         Temp_int_Variable_29;
	uint8                                         Pad_B94[0x4];
	class AFortPawn*                              K2Node_DynamicCast_AsFort_Pawn_3;
	bool                                          K2Node_DynamicCast_bSuccess_9;
	uint8                                         Pad_BA1[0x7];
	class AFortWeapon*                            CallFunc_GetCurrentWeapon_ReturnValue;
	int32                                         Temp_int_Variable_30;
	bool                                          CallFunc_EqualEqual_ObjectObject_ReturnValue;
	uint8                                         Pad_BB5[0x3];
	class UFXSystemComponent*                     CallFunc_GetIdleVFXComponent_ReturnValue_1;
	class UFXSystemComponent*                     CallFunc_GetIdleVFXComponent_ReturnValue_2;
	bool                                          CallFunc_IsValid_ReturnValue_7;
	bool                                          CallFunc_IsValid_ReturnValue_8;
	uint8                                         Pad_BCA[0x6];
	TScriptInterface<class IFortTimeOfDayManagerInterface> CallFunc_GetContextualTimeOfDayManager_ReturnValue;
	class AFortPlayerPawn*                        K2Node_CustomEvent_FortPlayerPawn;
	class AActor*                                 K2Node_CustomEvent_NewVehicle;
	class AActor*                                 K2Node_CustomEvent_OldVehicle;
	EFortDayPhase                                 CallFunc_GetPreviousDayPhase_ReturnValue;
	EFortDayPhase                                 CallFunc_GetCurrentDayPhase_ReturnValue;
	uint8                                         Pad_BFA[0x2];
	int32                                         Temp_int_Variable_31;
	int32                                         Temp_int_Variable_32;
	TDelegate<void(class AFortPlayerPawn* FortPlayerPawn, class AActor* NewVehicle, class AActor* OldVehicle)> K2Node_CreateDelegate_OutputDelegate_3;
	bool                                          Temp_bool_IsClosed_Variable;
	EPhysicalSurface                              Temp_byte_Variable;
	uint8                                         Pad_C12[0x2];
	int32                                         K2Node_Select_Default;
	bool                                          Temp_bool_Variable;
	bool                                          CallFunc_IsValid_ReturnValue_9;
	uint8                                         Pad_C1A[0x6];
	struct FRotator                               K2Node_Select_Default_1;
	uint8                                         Pad_C38[0x8];
	struct FTransform                             CallFunc_K2_GetComponentToWorld_ReturnValue_1;
	struct FRotator                               CallFunc_InverseTransformRotation_ReturnValue;
	struct FRotator                               CallFunc_ComposeRotators_ReturnValue;
	class APawn*                                  CallFunc_GetInstigator_ReturnValue_5;
	struct FRotator                               CallFunc_TransformRotation_ReturnValue;
	class APlayerPawn_Generic_Parent_C*           K2Node_DynamicCast_AsPlayer_Pawn_Generic_Parent;
	bool                                          K2Node_DynamicCast_bSuccess_10;
	uint8                                         Pad_CF9[0x7];
	struct FHitResult                             CallFunc_K2_SetWorldRotation_SweepHitResult;
	bool                                          CallFunc_DoesSocketExist_ReturnValue;
	uint8                                         Pad_DE1[0xF];
	struct FTransform                             CallFunc_GetSocketTransform_ReturnValue;
	struct FTransform                             CallFunc_GetSocketTransform_ReturnValue_1;
	struct FVector                                CallFunc_BreakTransform_Location;
	struct FRotator                               CallFunc_BreakTransform_Rotation;
	struct FVector                                CallFunc_BreakTransform_Scale;
	struct FVector                                CallFunc_BreakTransform_Location_1;
	struct FRotator                               CallFunc_BreakTransform_Rotation_1;
	struct FVector                                CallFunc_BreakTransform_Scale_1;
	double                                        CallFunc_BreakVector_X;
	double                                        CallFunc_BreakVector_Y;
	double                                        CallFunc_BreakVector_Z;
	double                                        CallFunc_BreakVector_X_1;
	double                                        CallFunc_BreakVector_Y_1;
	double                                        CallFunc_BreakVector_Z_1;
	double                                        CallFunc_Add_DoubleDouble_ReturnValue;
	struct FVector                                CallFunc_GetSocketLocation_ReturnValue_1;
	double                                        CallFunc_Divide_DoubleDouble_ReturnValue;
	struct FVector                                CallFunc_GetSocketLocation_ReturnValue_2;
	double                                        CallFunc_Multiply_DoubleDouble_ReturnValue_1;
	struct FVector                                CallFunc_Subtract_VectorVector_ReturnValue;
	class UParticleSystemComponent*               CallFunc_SpawnEmitterAttached_ReturnValue_1;
	struct FRotator                               CallFunc_Conv_VectorToRotator_ReturnValue;
	struct FHitResult                             CallFunc_K2_SetWorldRotation_SweepHitResult_1;
	double                                        CallFunc_VSize_ReturnValue;
	bool                                          CallFunc_DoesSocketExist_ReturnValue_1;
	uint8                                         Pad_10D9[0x7];
	double                                        CallFunc_Multiply_DoubleDouble_ReturnValue_2;
	bool                                          CallFunc_BooleanAND_ReturnValue;
	uint8                                         Pad_10E9[0x7];
	double                                        CallFunc_Divide_DoubleDouble_ReturnValue_1;
	double                                        CallFunc_Divide_DoubleDouble_ReturnValue_2;
	struct FVector                                CallFunc_MakeVector_ReturnValue;
	double                                        CallFunc_Divide_DoubleDouble_ReturnValue_3;
	struct FVector                                CallFunc_MakeVector_ReturnValue_1;
	double                                        CallFunc_Divide_DoubleDouble_ReturnValue_4;
	struct FVector                                CallFunc_MakeVector_ReturnValue_2;
	float                                         CallFunc_SetFloatParameter_Param_ImplicitCast;
	float                                         CallFunc_SetFloatParameter_Param_ImplicitCast_1;
	float                                         CallFunc_SetFloatParameter_Param_ImplicitCast_2;
};
static_assert(alignof(B_Athena_Pickaxe_Generic_C_ExecuteUbergraph_B_Athena_Pickaxe_Generic) == 0x000010, "Wrong alignment on B_Athena_Pickaxe_Generic_C_ExecuteUbergraph_B_Athena_Pickaxe_Generic");
static_assert(sizeof(B_Athena_Pickaxe_Generic_C_ExecuteUbergraph_B_Athena_Pickaxe_Generic) == 0x001170, "Wrong size on B_Athena_Pickaxe_Generic_C_ExecuteUbergraph_B_Athena_Pickaxe_Generic");
static_assert(offsetof(B_Athena_Pickaxe_Generic_C_ExecuteUbergraph_B_Athena_Pickaxe_Generic, EntryPoint) == 0x000000, "Member 'B_Athena_Pickaxe_Generic_C_ExecuteUbergraph_B_Athena_Pickaxe_Generic::EntryPoint' has a wrong offset!");
static_assert(offsetof(B_Athena_Pickaxe_Generic_C_ExecuteUbergraph_B_Athena_Pickaxe_Generic, K2Node_CreateDelegate_OutputDelegate) == 0x000004, "Member 'B_Athena_Pickaxe_Generic_C_ExecuteUbergraph_B_Athena_Pickaxe_Generic::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(B_Athena_Pickaxe_Generic_C_ExecuteUbergraph_B_Athena_Pickaxe_Generic, Temp_object_Variable) == 0x000010, "Member 'B_Athena_Pickaxe_Generic_C_ExecuteUbergraph_B_Athena_Pickaxe_Generic::Temp_object_Variable' has a wrong offset!");
static_assert(offsetof(B_Athena_Pickaxe_Generic_C_ExecuteUbergraph_B_Athena_Pickaxe_Generic, K2Node_CustomEvent_Loaded) == 0x000018, "Member 'B_Athena_Pickaxe_Generic_C_ExecuteUbergraph_B_Athena_Pickaxe_Generic::K2Node_CustomEvent_Loaded' has a wrong offset!");
static_assert(offsetof(B_Athena_Pickaxe_Generic_C_ExecuteUbergraph_B_Athena_Pickaxe_Generic, K2Node_DynamicCast_AsParticle_System) == 0x000020, "Member 'B_Athena_Pickaxe_Generic_C_ExecuteUbergraph_B_Athena_Pickaxe_Generic::K2Node_DynamicCast_AsParticle_System' has a wrong offset!");
static_assert(offsetof(B_Athena_Pickaxe_Generic_C_ExecuteUbergraph_B_Athena_Pickaxe_Generic, K2Node_DynamicCast_bSuccess) == 0x000028, "Member 'B_Athena_Pickaxe_Generic_C_ExecuteUbergraph_B_Athena_Pickaxe_Generic::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(B_Athena_Pickaxe_Generic_C_ExecuteUbergraph_B_Athena_Pickaxe_Generic, Temp_int_Variable) == 0x00002C, "Member 'B_Athena_Pickaxe_Generic_C_ExecuteUbergraph_B_Athena_Pickaxe_Generic::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(B_Athena_Pickaxe_Generic_C_ExecuteUbergraph_B_Athena_Pickaxe_Generic, Temp_int_Variable_1) == 0x000030, "Member 'B_Athena_Pickaxe_Generic_C_ExecuteUbergraph_B_Athena_Pickaxe_Generic::Temp_int_Variable_1' has a wrong offset!");
static_assert(offsetof(B_Athena_Pickaxe_Generic_C_ExecuteUbergraph_B_Athena_Pickaxe_Generic, Temp_int_Variable_2) == 0x000034, "Member 'B_Athena_Pickaxe_Generic_C_ExecuteUbergraph_B_Athena_Pickaxe_Generic::Temp_int_Variable_2' has a wrong offset!");
static_assert(offsetof(B_Athena_Pickaxe_Generic_C_ExecuteUbergraph_B_Athena_Pickaxe_Generic, Temp_int_Variable_3) == 0x000038, "Member 'B_Athena_Pickaxe_Generic_C_ExecuteUbergraph_B_Athena_Pickaxe_Generic::Temp_int_Variable_3' has a wrong offset!");
static_assert(offsetof(B_Athena_Pickaxe_Generic_C_ExecuteUbergraph_B_Athena_Pickaxe_Generic, Temp_int_Variable_4) == 0x00003C, "Member 'B_Athena_Pickaxe_Generic_C_ExecuteUbergraph_B_Athena_Pickaxe_Generic::Temp_int_Variable_4' has a wrong offset!");
static_assert(offsetof(B_Athena_Pickaxe_Generic_C_ExecuteUbergraph_B_Athena_Pickaxe_Generic, Temp_int_Variable_5) == 0x000040, "Member 'B_Athena_Pickaxe_Generic_C_ExecuteUbergraph_B_Athena_Pickaxe_Generic::Temp_int_Variable_5' has a wrong offset!");
static_assert(offsetof(B_Athena_Pickaxe_Generic_C_ExecuteUbergraph_B_Athena_Pickaxe_Generic, CallFunc_GetPI_ReturnValue) == 0x000048, "Member 'B_Athena_Pickaxe_Generic_C_ExecuteUbergraph_B_Athena_Pickaxe_Generic::CallFunc_GetPI_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_Athena_Pickaxe_Generic_C_ExecuteUbergraph_B_Athena_Pickaxe_Generic, CallFunc_MultiplyMultiply_FloatFloat_ReturnValue) == 0x000050, "Member 'B_Athena_Pickaxe_Generic_C_ExecuteUbergraph_B_Athena_Pickaxe_Generic::CallFunc_MultiplyMultiply_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_Athena_Pickaxe_Generic_C_ExecuteUbergraph_B_Athena_Pickaxe_Generic, Temp_int_Variable_6) == 0x000058, "Member 'B_Athena_Pickaxe_Generic_C_ExecuteUbergraph_B_Athena_Pickaxe_Generic::Temp_int_Variable_6' has a wrong offset!");
static_assert(offsetof(B_Athena_Pickaxe_Generic_C_ExecuteUbergraph_B_Athena_Pickaxe_Generic, CallFunc_Multiply_DoubleDouble_ReturnValue) == 0x000060, "Member 'B_Athena_Pickaxe_Generic_C_ExecuteUbergraph_B_Athena_Pickaxe_Generic::CallFunc_Multiply_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_Athena_Pickaxe_Generic_C_ExecuteUbergraph_B_Athena_Pickaxe_Generic, Temp_name_Variable) == 0x000068, "Member 'B_Athena_Pickaxe_Generic_C_ExecuteUbergraph_B_Athena_Pickaxe_Generic::Temp_name_Variable' has a wrong offset!");
static_assert(offsetof(B_Athena_Pickaxe_Generic_C_ExecuteUbergraph_B_Athena_Pickaxe_Generic, Temp_int_Variable_7) == 0x00006C, "Member 'B_Athena_Pickaxe_Generic_C_ExecuteUbergraph_B_Athena_Pickaxe_Generic::Temp_int_Variable_7' has a wrong offset!");
static_assert(offsetof(B_Athena_Pickaxe_Generic_C_ExecuteUbergraph_B_Athena_Pickaxe_Generic, Temp_int_Variable_8) == 0x000070, "Member 'B_Athena_Pickaxe_Generic_C_ExecuteUbergraph_B_Athena_Pickaxe_Generic::Temp_int_Variable_8' has a wrong offset!");
static_assert(offsetof(B_Athena_Pickaxe_Generic_C_ExecuteUbergraph_B_Athena_Pickaxe_Generic, Temp_int_Variable_9) == 0x000074, "Member 'B_Athena_Pickaxe_Generic_C_ExecuteUbergraph_B_Athena_Pickaxe_Generic::Temp_int_Variable_9' has a wrong offset!");
static_assert(offsetof(B_Athena_Pickaxe_Generic_C_ExecuteUbergraph_B_Athena_Pickaxe_Generic, Temp_int_Variable_10) == 0x000078, "Member 'B_Athena_Pickaxe_Generic_C_ExecuteUbergraph_B_Athena_Pickaxe_Generic::Temp_int_Variable_10' has a wrong offset!");
static_assert(offsetof(B_Athena_Pickaxe_Generic_C_ExecuteUbergraph_B_Athena_Pickaxe_Generic, Temp_int_Variable_11) == 0x00007C, "Member 'B_Athena_Pickaxe_Generic_C_ExecuteUbergraph_B_Athena_Pickaxe_Generic::Temp_int_Variable_11' has a wrong offset!");
static_assert(offsetof(B_Athena_Pickaxe_Generic_C_ExecuteUbergraph_B_Athena_Pickaxe_Generic, Temp_int_Variable_12) == 0x000080, "Member 'B_Athena_Pickaxe_Generic_C_ExecuteUbergraph_B_Athena_Pickaxe_Generic::Temp_int_Variable_12' has a wrong offset!");
static_assert(offsetof(B_Athena_Pickaxe_Generic_C_ExecuteUbergraph_B_Athena_Pickaxe_Generic, Temp_int_Variable_13) == 0x000084, "Member 'B_Athena_Pickaxe_Generic_C_ExecuteUbergraph_B_Athena_Pickaxe_Generic::Temp_int_Variable_13' has a wrong offset!");
static_assert(offsetof(B_Athena_Pickaxe_Generic_C_ExecuteUbergraph_B_Athena_Pickaxe_Generic, Temp_int_Variable_14) == 0x000088, "Member 'B_Athena_Pickaxe_Generic_C_ExecuteUbergraph_B_Athena_Pickaxe_Generic::Temp_int_Variable_14' has a wrong offset!");
static_assert(offsetof(B_Athena_Pickaxe_Generic_C_ExecuteUbergraph_B_Athena_Pickaxe_Generic, CallFunc_IsDedicatedServer_ReturnValue) == 0x00008C, "Member 'B_Athena_Pickaxe_Generic_C_ExecuteUbergraph_B_Athena_Pickaxe_Generic::CallFunc_IsDedicatedServer_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_Athena_Pickaxe_Generic_C_ExecuteUbergraph_B_Athena_Pickaxe_Generic, K2Node_Event_First_Right) == 0x00008D, "Member 'B_Athena_Pickaxe_Generic_C_ExecuteUbergraph_B_Athena_Pickaxe_Generic::K2Node_Event_First_Right' has a wrong offset!");
static_assert(offsetof(B_Athena_Pickaxe_Generic_C_ExecuteUbergraph_B_Athena_Pickaxe_Generic, K2Node_Event_First_Left) == 0x00008E, "Member 'B_Athena_Pickaxe_Generic_C_ExecuteUbergraph_B_Athena_Pickaxe_Generic::K2Node_Event_First_Left' has a wrong offset!");
static_assert(offsetof(B_Athena_Pickaxe_Generic_C_ExecuteUbergraph_B_Athena_Pickaxe_Generic, K2Node_Event_bPersistentFire) == 0x00008F, "Member 'B_Athena_Pickaxe_Generic_C_ExecuteUbergraph_B_Athena_Pickaxe_Generic::K2Node_Event_bPersistentFire' has a wrong offset!");
static_assert(offsetof(B_Athena_Pickaxe_Generic_C_ExecuteUbergraph_B_Athena_Pickaxe_Generic, K2Node_Event_bSecondaryFire) == 0x000090, "Member 'B_Athena_Pickaxe_Generic_C_ExecuteUbergraph_B_Athena_Pickaxe_Generic::K2Node_Event_bSecondaryFire' has a wrong offset!");
static_assert(offsetof(B_Athena_Pickaxe_Generic_C_ExecuteUbergraph_B_Athena_Pickaxe_Generic, CallFunc_IsDedicatedServer_ReturnValue_1) == 0x000091, "Member 'B_Athena_Pickaxe_Generic_C_ExecuteUbergraph_B_Athena_Pickaxe_Generic::CallFunc_IsDedicatedServer_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(B_Athena_Pickaxe_Generic_C_ExecuteUbergraph_B_Athena_Pickaxe_Generic, CallFunc_GetSocketLocation_ReturnValue) == 0x000098, "Member 'B_Athena_Pickaxe_Generic_C_ExecuteUbergraph_B_Athena_Pickaxe_Generic::CallFunc_GetSocketLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_Athena_Pickaxe_Generic_C_ExecuteUbergraph_B_Athena_Pickaxe_Generic, CallFunc_SpawnEmitterAtLocation_ReturnValue) == 0x0000B0, "Member 'B_Athena_Pickaxe_Generic_C_ExecuteUbergraph_B_Athena_Pickaxe_Generic::CallFunc_SpawnEmitterAtLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_Athena_Pickaxe_Generic_C_ExecuteUbergraph_B_Athena_Pickaxe_Generic, Temp_int_Variable_15) == 0x0000B8, "Member 'B_Athena_Pickaxe_Generic_C_ExecuteUbergraph_B_Athena_Pickaxe_Generic::Temp_int_Variable_15' has a wrong offset!");
static_assert(offsetof(B_Athena_Pickaxe_Generic_C_ExecuteUbergraph_B_Athena_Pickaxe_Generic, CallFunc_GetInstigator_ReturnValue) == 0x0000C0, "Member 'B_Athena_Pickaxe_Generic_C_ExecuteUbergraph_B_Athena_Pickaxe_Generic::CallFunc_GetInstigator_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_Athena_Pickaxe_Generic_C_ExecuteUbergraph_B_Athena_Pickaxe_Generic, K2Node_DynamicCast_AsFort_Pawn) == 0x0000C8, "Member 'B_Athena_Pickaxe_Generic_C_ExecuteUbergraph_B_Athena_Pickaxe_Generic::K2Node_DynamicCast_AsFort_Pawn' has a wrong offset!");
static_assert(offsetof(B_Athena_Pickaxe_Generic_C_ExecuteUbergraph_B_Athena_Pickaxe_Generic, K2Node_DynamicCast_bSuccess_1) == 0x0000D0, "Member 'B_Athena_Pickaxe_Generic_C_ExecuteUbergraph_B_Athena_Pickaxe_Generic::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(B_Athena_Pickaxe_Generic_C_ExecuteUbergraph_B_Athena_Pickaxe_Generic, Temp_int_Variable_16) == 0x0000D4, "Member 'B_Athena_Pickaxe_Generic_C_ExecuteUbergraph_B_Athena_Pickaxe_Generic::Temp_int_Variable_16' has a wrong offset!");
static_assert(offsetof(B_Athena_Pickaxe_Generic_C_ExecuteUbergraph_B_Athena_Pickaxe_Generic, CallFunc_SpawnEmitterAttached_ReturnValue) == 0x0000D8, "Member 'B_Athena_Pickaxe_Generic_C_ExecuteUbergraph_B_Athena_Pickaxe_Generic::CallFunc_SpawnEmitterAttached_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_Athena_Pickaxe_Generic_C_ExecuteUbergraph_B_Athena_Pickaxe_Generic, K2Node_Event_CosmeticMod) == 0x0000E0, "Member 'B_Athena_Pickaxe_Generic_C_ExecuteUbergraph_B_Athena_Pickaxe_Generic::K2Node_Event_CosmeticMod' has a wrong offset!");
static_assert(offsetof(B_Athena_Pickaxe_Generic_C_ExecuteUbergraph_B_Athena_Pickaxe_Generic, CallFunc_CreateDynamicMaterialInstance_ReturnValue) == 0x000780, "Member 'B_Athena_Pickaxe_Generic_C_ExecuteUbergraph_B_Athena_Pickaxe_Generic::CallFunc_CreateDynamicMaterialInstance_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_Athena_Pickaxe_Generic_C_ExecuteUbergraph_B_Athena_Pickaxe_Generic, CallFunc_IsAssetNull_ReturnValue) == 0x000788, "Member 'B_Athena_Pickaxe_Generic_C_ExecuteUbergraph_B_Athena_Pickaxe_Generic::CallFunc_IsAssetNull_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_Athena_Pickaxe_Generic_C_ExecuteUbergraph_B_Athena_Pickaxe_Generic, K2Node_Event_bVisible) == 0x000789, "Member 'B_Athena_Pickaxe_Generic_C_ExecuteUbergraph_B_Athena_Pickaxe_Generic::K2Node_Event_bVisible' has a wrong offset!");
static_assert(offsetof(B_Athena_Pickaxe_Generic_C_ExecuteUbergraph_B_Athena_Pickaxe_Generic, K2Node_Event_bSetForLocalControllerOnly) == 0x00078A, "Member 'B_Athena_Pickaxe_Generic_C_ExecuteUbergraph_B_Athena_Pickaxe_Generic::K2Node_Event_bSetForLocalControllerOnly' has a wrong offset!");
static_assert(offsetof(B_Athena_Pickaxe_Generic_C_ExecuteUbergraph_B_Athena_Pickaxe_Generic, K2Node_CustomEvent_StatName) == 0x00078C, "Member 'B_Athena_Pickaxe_Generic_C_ExecuteUbergraph_B_Athena_Pickaxe_Generic::K2Node_CustomEvent_StatName' has a wrong offset!");
static_assert(offsetof(B_Athena_Pickaxe_Generic_C_ExecuteUbergraph_B_Athena_Pickaxe_Generic, K2Node_CustomEvent_StatValue) == 0x000790, "Member 'B_Athena_Pickaxe_Generic_C_ExecuteUbergraph_B_Athena_Pickaxe_Generic::K2Node_CustomEvent_StatValue' has a wrong offset!");
static_assert(offsetof(B_Athena_Pickaxe_Generic_C_ExecuteUbergraph_B_Athena_Pickaxe_Generic, CallFunc_IsValid_ReturnValue) == 0x000794, "Member 'B_Athena_Pickaxe_Generic_C_ExecuteUbergraph_B_Athena_Pickaxe_Generic::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_Athena_Pickaxe_Generic_C_ExecuteUbergraph_B_Athena_Pickaxe_Generic, CallFunc_IsDedicatedServer_ReturnValue_2) == 0x000795, "Member 'B_Athena_Pickaxe_Generic_C_ExecuteUbergraph_B_Athena_Pickaxe_Generic::CallFunc_IsDedicatedServer_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(B_Athena_Pickaxe_Generic_C_ExecuteUbergraph_B_Athena_Pickaxe_Generic, CallFunc_GetWeaponData_ReturnValue) == 0x000798, "Member 'B_Athena_Pickaxe_Generic_C_ExecuteUbergraph_B_Athena_Pickaxe_Generic::CallFunc_GetWeaponData_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_Athena_Pickaxe_Generic_C_ExecuteUbergraph_B_Athena_Pickaxe_Generic, CallFunc_GetSmallPreviewImage_ReturnValue) == 0x0007A0, "Member 'B_Athena_Pickaxe_Generic_C_ExecuteUbergraph_B_Athena_Pickaxe_Generic::CallFunc_GetSmallPreviewImage_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_Athena_Pickaxe_Generic_C_ExecuteUbergraph_B_Athena_Pickaxe_Generic, CallFunc_GetOrLoadSynchronously_ReturnValue) == 0x0007C8, "Member 'B_Athena_Pickaxe_Generic_C_ExecuteUbergraph_B_Athena_Pickaxe_Generic::CallFunc_GetOrLoadSynchronously_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_Athena_Pickaxe_Generic_C_ExecuteUbergraph_B_Athena_Pickaxe_Generic, K2Node_CreateDelegate_OutputDelegate_1) == 0x0007D0, "Member 'B_Athena_Pickaxe_Generic_C_ExecuteUbergraph_B_Athena_Pickaxe_Generic::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(B_Athena_Pickaxe_Generic_C_ExecuteUbergraph_B_Athena_Pickaxe_Generic, K2Node_DynamicCast_AsFort_Player_Pawn) == 0x0007E0, "Member 'B_Athena_Pickaxe_Generic_C_ExecuteUbergraph_B_Athena_Pickaxe_Generic::K2Node_DynamicCast_AsFort_Player_Pawn' has a wrong offset!");
static_assert(offsetof(B_Athena_Pickaxe_Generic_C_ExecuteUbergraph_B_Athena_Pickaxe_Generic, K2Node_DynamicCast_bSuccess_2) == 0x0007E8, "Member 'B_Athena_Pickaxe_Generic_C_ExecuteUbergraph_B_Athena_Pickaxe_Generic::K2Node_DynamicCast_bSuccess_2' has a wrong offset!");
static_assert(offsetof(B_Athena_Pickaxe_Generic_C_ExecuteUbergraph_B_Athena_Pickaxe_Generic, K2Node_CustomEvent_Watched_Kills) == 0x0007EC, "Member 'B_Athena_Pickaxe_Generic_C_ExecuteUbergraph_B_Athena_Pickaxe_Generic::K2Node_CustomEvent_Watched_Kills' has a wrong offset!");
static_assert(offsetof(B_Athena_Pickaxe_Generic_C_ExecuteUbergraph_B_Athena_Pickaxe_Generic, CallFunc_WatchCosmeticStat_ReturnValue) == 0x0007F0, "Member 'B_Athena_Pickaxe_Generic_C_ExecuteUbergraph_B_Athena_Pickaxe_Generic::CallFunc_WatchCosmeticStat_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_Athena_Pickaxe_Generic_C_ExecuteUbergraph_B_Athena_Pickaxe_Generic, CallFunc_GetIdleVFXComponent_ReturnValue) == 0x0007F8, "Member 'B_Athena_Pickaxe_Generic_C_ExecuteUbergraph_B_Athena_Pickaxe_Generic::CallFunc_GetIdleVFXComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_Athena_Pickaxe_Generic_C_ExecuteUbergraph_B_Athena_Pickaxe_Generic, CallFunc_IsValid_ReturnValue_1) == 0x000800, "Member 'B_Athena_Pickaxe_Generic_C_ExecuteUbergraph_B_Athena_Pickaxe_Generic::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(B_Athena_Pickaxe_Generic_C_ExecuteUbergraph_B_Athena_Pickaxe_Generic, CallFunc_GetUseAnimTrailsPSC_ReturnValue) == 0x000801, "Member 'B_Athena_Pickaxe_Generic_C_ExecuteUbergraph_B_Athena_Pickaxe_Generic::CallFunc_GetUseAnimTrailsPSC_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_Athena_Pickaxe_Generic_C_ExecuteUbergraph_B_Athena_Pickaxe_Generic, CallFunc_GetAnimTrailsSecondSocketName_ReturnValue) == 0x000804, "Member 'B_Athena_Pickaxe_Generic_C_ExecuteUbergraph_B_Athena_Pickaxe_Generic::CallFunc_GetAnimTrailsSecondSocketName_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_Athena_Pickaxe_Generic_C_ExecuteUbergraph_B_Athena_Pickaxe_Generic, CallFunc_GetAnimTrailsFirstSocketName_ReturnValue) == 0x000808, "Member 'B_Athena_Pickaxe_Generic_C_ExecuteUbergraph_B_Athena_Pickaxe_Generic::CallFunc_GetAnimTrailsFirstSocketName_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_Athena_Pickaxe_Generic_C_ExecuteUbergraph_B_Athena_Pickaxe_Generic, CallFunc_GetAnimTrailsWidth_ReturnValue) == 0x00080C, "Member 'B_Athena_Pickaxe_Generic_C_ExecuteUbergraph_B_Athena_Pickaxe_Generic::CallFunc_GetAnimTrailsWidth_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_Athena_Pickaxe_Generic_C_ExecuteUbergraph_B_Athena_Pickaxe_Generic, CallFunc_GetUseAnimTrailsPSC_ReturnValue_1) == 0x000810, "Member 'B_Athena_Pickaxe_Generic_C_ExecuteUbergraph_B_Athena_Pickaxe_Generic::CallFunc_GetUseAnimTrailsPSC_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(B_Athena_Pickaxe_Generic_C_ExecuteUbergraph_B_Athena_Pickaxe_Generic, Temp_int_Variable_17) == 0x000814, "Member 'B_Athena_Pickaxe_Generic_C_ExecuteUbergraph_B_Athena_Pickaxe_Generic::Temp_int_Variable_17' has a wrong offset!");
static_assert(offsetof(B_Athena_Pickaxe_Generic_C_ExecuteUbergraph_B_Athena_Pickaxe_Generic, CallFunc_GetAnimTrailVFXComponent_ReturnValue) == 0x000818, "Member 'B_Athena_Pickaxe_Generic_C_ExecuteUbergraph_B_Athena_Pickaxe_Generic::CallFunc_GetAnimTrailVFXComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_Athena_Pickaxe_Generic_C_ExecuteUbergraph_B_Athena_Pickaxe_Generic, CallFunc_IsValid_ReturnValue_2) == 0x000820, "Member 'B_Athena_Pickaxe_Generic_C_ExecuteUbergraph_B_Athena_Pickaxe_Generic::CallFunc_IsValid_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(B_Athena_Pickaxe_Generic_C_ExecuteUbergraph_B_Athena_Pickaxe_Generic, K2Node_DynamicCast_AsCascade_Particle_System_Component) == 0x000828, "Member 'B_Athena_Pickaxe_Generic_C_ExecuteUbergraph_B_Athena_Pickaxe_Generic::K2Node_DynamicCast_AsCascade_Particle_System_Component' has a wrong offset!");
static_assert(offsetof(B_Athena_Pickaxe_Generic_C_ExecuteUbergraph_B_Athena_Pickaxe_Generic, K2Node_DynamicCast_bSuccess_3) == 0x000830, "Member 'B_Athena_Pickaxe_Generic_C_ExecuteUbergraph_B_Athena_Pickaxe_Generic::K2Node_DynamicCast_bSuccess_3' has a wrong offset!");
static_assert(offsetof(B_Athena_Pickaxe_Generic_C_ExecuteUbergraph_B_Athena_Pickaxe_Generic, CallFunc_GetAnimTrailVFXComponent_ReturnValue_1) == 0x000838, "Member 'B_Athena_Pickaxe_Generic_C_ExecuteUbergraph_B_Athena_Pickaxe_Generic::CallFunc_GetAnimTrailVFXComponent_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(B_Athena_Pickaxe_Generic_C_ExecuteUbergraph_B_Athena_Pickaxe_Generic, K2Node_CustomEvent_bActive) == 0x000840, "Member 'B_Athena_Pickaxe_Generic_C_ExecuteUbergraph_B_Athena_Pickaxe_Generic::K2Node_CustomEvent_bActive' has a wrong offset!");
static_assert(offsetof(B_Athena_Pickaxe_Generic_C_ExecuteUbergraph_B_Athena_Pickaxe_Generic, K2Node_DynamicCast_AsCascade_Particle_System_Component_1) == 0x000848, "Member 'B_Athena_Pickaxe_Generic_C_ExecuteUbergraph_B_Athena_Pickaxe_Generic::K2Node_DynamicCast_AsCascade_Particle_System_Component_1' has a wrong offset!");
static_assert(offsetof(B_Athena_Pickaxe_Generic_C_ExecuteUbergraph_B_Athena_Pickaxe_Generic, K2Node_DynamicCast_bSuccess_4) == 0x000850, "Member 'B_Athena_Pickaxe_Generic_C_ExecuteUbergraph_B_Athena_Pickaxe_Generic::K2Node_DynamicCast_bSuccess_4' has a wrong offset!");
static_assert(offsetof(B_Athena_Pickaxe_Generic_C_ExecuteUbergraph_B_Athena_Pickaxe_Generic, CallFunc_IsValid_ReturnValue_3) == 0x000851, "Member 'B_Athena_Pickaxe_Generic_C_ExecuteUbergraph_B_Athena_Pickaxe_Generic::CallFunc_IsValid_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(B_Athena_Pickaxe_Generic_C_ExecuteUbergraph_B_Athena_Pickaxe_Generic, CallFunc_GetSwingVFXComponent_ReturnValue) == 0x000858, "Member 'B_Athena_Pickaxe_Generic_C_ExecuteUbergraph_B_Athena_Pickaxe_Generic::CallFunc_GetSwingVFXComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_Athena_Pickaxe_Generic_C_ExecuteUbergraph_B_Athena_Pickaxe_Generic, Temp_int_Variable_18) == 0x000860, "Member 'B_Athena_Pickaxe_Generic_C_ExecuteUbergraph_B_Athena_Pickaxe_Generic::Temp_int_Variable_18' has a wrong offset!");
static_assert(offsetof(B_Athena_Pickaxe_Generic_C_ExecuteUbergraph_B_Athena_Pickaxe_Generic, CallFunc_IsValid_ReturnValue_4) == 0x000864, "Member 'B_Athena_Pickaxe_Generic_C_ExecuteUbergraph_B_Athena_Pickaxe_Generic::CallFunc_IsValid_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(B_Athena_Pickaxe_Generic_C_ExecuteUbergraph_B_Athena_Pickaxe_Generic, Temp_int_Variable_19) == 0x000868, "Member 'B_Athena_Pickaxe_Generic_C_ExecuteUbergraph_B_Athena_Pickaxe_Generic::Temp_int_Variable_19' has a wrong offset!");
static_assert(offsetof(B_Athena_Pickaxe_Generic_C_ExecuteUbergraph_B_Athena_Pickaxe_Generic, CallFunc_GetSwingVFXComponent_ReturnValue_1) == 0x000870, "Member 'B_Athena_Pickaxe_Generic_C_ExecuteUbergraph_B_Athena_Pickaxe_Generic::CallFunc_GetSwingVFXComponent_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(B_Athena_Pickaxe_Generic_C_ExecuteUbergraph_B_Athena_Pickaxe_Generic, CallFunc_IsValid_ReturnValue_5) == 0x000878, "Member 'B_Athena_Pickaxe_Generic_C_ExecuteUbergraph_B_Athena_Pickaxe_Generic::CallFunc_IsValid_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(B_Athena_Pickaxe_Generic_C_ExecuteUbergraph_B_Athena_Pickaxe_Generic, CallFunc_IsDedicatedServer_ReturnValue_3) == 0x000879, "Member 'B_Athena_Pickaxe_Generic_C_ExecuteUbergraph_B_Athena_Pickaxe_Generic::CallFunc_IsDedicatedServer_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(B_Athena_Pickaxe_Generic_C_ExecuteUbergraph_B_Athena_Pickaxe_Generic, CallFunc_GetInstigator_ReturnValue_1) == 0x000880, "Member 'B_Athena_Pickaxe_Generic_C_ExecuteUbergraph_B_Athena_Pickaxe_Generic::CallFunc_GetInstigator_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(B_Athena_Pickaxe_Generic_C_ExecuteUbergraph_B_Athena_Pickaxe_Generic, K2Node_DynamicCast_AsFort_Pawn_1) == 0x000888, "Member 'B_Athena_Pickaxe_Generic_C_ExecuteUbergraph_B_Athena_Pickaxe_Generic::K2Node_DynamicCast_AsFort_Pawn_1' has a wrong offset!");
static_assert(offsetof(B_Athena_Pickaxe_Generic_C_ExecuteUbergraph_B_Athena_Pickaxe_Generic, K2Node_DynamicCast_bSuccess_5) == 0x000890, "Member 'B_Athena_Pickaxe_Generic_C_ExecuteUbergraph_B_Athena_Pickaxe_Generic::K2Node_DynamicCast_bSuccess_5' has a wrong offset!");
static_assert(offsetof(B_Athena_Pickaxe_Generic_C_ExecuteUbergraph_B_Athena_Pickaxe_Generic, K2Node_DynamicCast_AsFort_Player_Pawn_1) == 0x000898, "Member 'B_Athena_Pickaxe_Generic_C_ExecuteUbergraph_B_Athena_Pickaxe_Generic::K2Node_DynamicCast_AsFort_Player_Pawn_1' has a wrong offset!");
static_assert(offsetof(B_Athena_Pickaxe_Generic_C_ExecuteUbergraph_B_Athena_Pickaxe_Generic, K2Node_DynamicCast_bSuccess_6) == 0x0008A0, "Member 'B_Athena_Pickaxe_Generic_C_ExecuteUbergraph_B_Athena_Pickaxe_Generic::K2Node_DynamicCast_bSuccess_6' has a wrong offset!");
static_assert(offsetof(B_Athena_Pickaxe_Generic_C_ExecuteUbergraph_B_Athena_Pickaxe_Generic, CallFunc_IsValid_ReturnValue_6) == 0x0008A1, "Member 'B_Athena_Pickaxe_Generic_C_ExecuteUbergraph_B_Athena_Pickaxe_Generic::CallFunc_IsValid_ReturnValue_6' has a wrong offset!");
static_assert(offsetof(B_Athena_Pickaxe_Generic_C_ExecuteUbergraph_B_Athena_Pickaxe_Generic, CallFunc_GetAnimTrailsPSC_ReturnValue) == 0x0008A8, "Member 'B_Athena_Pickaxe_Generic_C_ExecuteUbergraph_B_Athena_Pickaxe_Generic::CallFunc_GetAnimTrailsPSC_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_Athena_Pickaxe_Generic_C_ExecuteUbergraph_B_Athena_Pickaxe_Generic, CallFunc_GetInstigator_ReturnValue_2) == 0x0008B0, "Member 'B_Athena_Pickaxe_Generic_C_ExecuteUbergraph_B_Athena_Pickaxe_Generic::CallFunc_GetInstigator_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(B_Athena_Pickaxe_Generic_C_ExecuteUbergraph_B_Athena_Pickaxe_Generic, CallFunc_GetAnimTrailsPSCTemplate_ReturnValue) == 0x0008B8, "Member 'B_Athena_Pickaxe_Generic_C_ExecuteUbergraph_B_Athena_Pickaxe_Generic::CallFunc_GetAnimTrailsPSCTemplate_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_Athena_Pickaxe_Generic_C_ExecuteUbergraph_B_Athena_Pickaxe_Generic, K2Node_DynamicCast_AsFort_Player_Pawn_2) == 0x0008C0, "Member 'B_Athena_Pickaxe_Generic_C_ExecuteUbergraph_B_Athena_Pickaxe_Generic::K2Node_DynamicCast_AsFort_Player_Pawn_2' has a wrong offset!");
static_assert(offsetof(B_Athena_Pickaxe_Generic_C_ExecuteUbergraph_B_Athena_Pickaxe_Generic, K2Node_DynamicCast_bSuccess_7) == 0x0008C8, "Member 'B_Athena_Pickaxe_Generic_C_ExecuteUbergraph_B_Athena_Pickaxe_Generic::K2Node_DynamicCast_bSuccess_7' has a wrong offset!");
static_assert(offsetof(B_Athena_Pickaxe_Generic_C_ExecuteUbergraph_B_Athena_Pickaxe_Generic, CallFunc_GetAnimTrailsFirstSocketName_ReturnValue_1) == 0x0008CC, "Member 'B_Athena_Pickaxe_Generic_C_ExecuteUbergraph_B_Athena_Pickaxe_Generic::CallFunc_GetAnimTrailsFirstSocketName_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(B_Athena_Pickaxe_Generic_C_ExecuteUbergraph_B_Athena_Pickaxe_Generic, CallFunc_GetAnimTrailsSecondSocketName_ReturnValue_1) == 0x0008D0, "Member 'B_Athena_Pickaxe_Generic_C_ExecuteUbergraph_B_Athena_Pickaxe_Generic::CallFunc_GetAnimTrailsSecondSocketName_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(B_Athena_Pickaxe_Generic_C_ExecuteUbergraph_B_Athena_Pickaxe_Generic, CallFunc_GetAnimTrailsWidth_ReturnValue_1) == 0x0008D4, "Member 'B_Athena_Pickaxe_Generic_C_ExecuteUbergraph_B_Athena_Pickaxe_Generic::CallFunc_GetAnimTrailsWidth_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(B_Athena_Pickaxe_Generic_C_ExecuteUbergraph_B_Athena_Pickaxe_Generic, CallFunc_GetAnimTrailsNiagaraAsset_ReturnValue) == 0x0008D8, "Member 'B_Athena_Pickaxe_Generic_C_ExecuteUbergraph_B_Athena_Pickaxe_Generic::CallFunc_GetAnimTrailsNiagaraAsset_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_Athena_Pickaxe_Generic_C_ExecuteUbergraph_B_Athena_Pickaxe_Generic, CallFunc_GetAnimTrailsPSC_ReturnValue_1) == 0x0008E0, "Member 'B_Athena_Pickaxe_Generic_C_ExecuteUbergraph_B_Athena_Pickaxe_Generic::CallFunc_GetAnimTrailsPSC_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(B_Athena_Pickaxe_Generic_C_ExecuteUbergraph_B_Athena_Pickaxe_Generic, CallFunc_GetUseAnimTrailsPSC_ReturnValue_2) == 0x0008E8, "Member 'B_Athena_Pickaxe_Generic_C_ExecuteUbergraph_B_Athena_Pickaxe_Generic::CallFunc_GetUseAnimTrailsPSC_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(B_Athena_Pickaxe_Generic_C_ExecuteUbergraph_B_Athena_Pickaxe_Generic, Temp_int_Variable_20) == 0x0008EC, "Member 'B_Athena_Pickaxe_Generic_C_ExecuteUbergraph_B_Athena_Pickaxe_Generic::Temp_int_Variable_20' has a wrong offset!");
static_assert(offsetof(B_Athena_Pickaxe_Generic_C_ExecuteUbergraph_B_Athena_Pickaxe_Generic, CallFunc_AttachesAnimTrailsToWeapon_ReturnValue) == 0x0008F0, "Member 'B_Athena_Pickaxe_Generic_C_ExecuteUbergraph_B_Athena_Pickaxe_Generic::CallFunc_AttachesAnimTrailsToWeapon_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_Athena_Pickaxe_Generic_C_ExecuteUbergraph_B_Athena_Pickaxe_Generic, K2Node_CustomEvent_CurrentDayPhase) == 0x0008F1, "Member 'B_Athena_Pickaxe_Generic_C_ExecuteUbergraph_B_Athena_Pickaxe_Generic::K2Node_CustomEvent_CurrentDayPhase' has a wrong offset!");
static_assert(offsetof(B_Athena_Pickaxe_Generic_C_ExecuteUbergraph_B_Athena_Pickaxe_Generic, K2Node_CustomEvent_PreviousDayPhase) == 0x0008F2, "Member 'B_Athena_Pickaxe_Generic_C_ExecuteUbergraph_B_Athena_Pickaxe_Generic::K2Node_CustomEvent_PreviousDayPhase' has a wrong offset!");
static_assert(offsetof(B_Athena_Pickaxe_Generic_C_ExecuteUbergraph_B_Athena_Pickaxe_Generic, K2Node_CustomEvent_bAtCreation) == 0x0008F3, "Member 'B_Athena_Pickaxe_Generic_C_ExecuteUbergraph_B_Athena_Pickaxe_Generic::K2Node_CustomEvent_bAtCreation' has a wrong offset!");
static_assert(offsetof(B_Athena_Pickaxe_Generic_C_ExecuteUbergraph_B_Athena_Pickaxe_Generic, Temp_int_Variable_21) == 0x0008F4, "Member 'B_Athena_Pickaxe_Generic_C_ExecuteUbergraph_B_Athena_Pickaxe_Generic::Temp_int_Variable_21' has a wrong offset!");
static_assert(offsetof(B_Athena_Pickaxe_Generic_C_ExecuteUbergraph_B_Athena_Pickaxe_Generic, Temp_int_Variable_22) == 0x0008F8, "Member 'B_Athena_Pickaxe_Generic_C_ExecuteUbergraph_B_Athena_Pickaxe_Generic::Temp_int_Variable_22' has a wrong offset!");
static_assert(offsetof(B_Athena_Pickaxe_Generic_C_ExecuteUbergraph_B_Athena_Pickaxe_Generic, Temp_int_Variable_23) == 0x0008FC, "Member 'B_Athena_Pickaxe_Generic_C_ExecuteUbergraph_B_Athena_Pickaxe_Generic::Temp_int_Variable_23' has a wrong offset!");
static_assert(offsetof(B_Athena_Pickaxe_Generic_C_ExecuteUbergraph_B_Athena_Pickaxe_Generic, K2Node_Event_HitResult) == 0x000900, "Member 'B_Athena_Pickaxe_Generic_C_ExecuteUbergraph_B_Athena_Pickaxe_Generic::K2Node_Event_HitResult' has a wrong offset!");
static_assert(offsetof(B_Athena_Pickaxe_Generic_C_ExecuteUbergraph_B_Athena_Pickaxe_Generic, K2Node_Event_ImpactPhysicalSurface) == 0x0009E0, "Member 'B_Athena_Pickaxe_Generic_C_ExecuteUbergraph_B_Athena_Pickaxe_Generic::K2Node_Event_ImpactPhysicalSurface' has a wrong offset!");
static_assert(offsetof(B_Athena_Pickaxe_Generic_C_ExecuteUbergraph_B_Athena_Pickaxe_Generic, K2Node_Event_SpawnedPSC) == 0x0009E8, "Member 'B_Athena_Pickaxe_Generic_C_ExecuteUbergraph_B_Athena_Pickaxe_Generic::K2Node_Event_SpawnedPSC' has a wrong offset!");
static_assert(offsetof(B_Athena_Pickaxe_Generic_C_ExecuteUbergraph_B_Athena_Pickaxe_Generic, CallFunc_BreakHitResult_bBlockingHit) == 0x0009F0, "Member 'B_Athena_Pickaxe_Generic_C_ExecuteUbergraph_B_Athena_Pickaxe_Generic::CallFunc_BreakHitResult_bBlockingHit' has a wrong offset!");
static_assert(offsetof(B_Athena_Pickaxe_Generic_C_ExecuteUbergraph_B_Athena_Pickaxe_Generic, CallFunc_BreakHitResult_bInitialOverlap) == 0x0009F1, "Member 'B_Athena_Pickaxe_Generic_C_ExecuteUbergraph_B_Athena_Pickaxe_Generic::CallFunc_BreakHitResult_bInitialOverlap' has a wrong offset!");
static_assert(offsetof(B_Athena_Pickaxe_Generic_C_ExecuteUbergraph_B_Athena_Pickaxe_Generic, CallFunc_BreakHitResult_Time) == 0x0009F4, "Member 'B_Athena_Pickaxe_Generic_C_ExecuteUbergraph_B_Athena_Pickaxe_Generic::CallFunc_BreakHitResult_Time' has a wrong offset!");
static_assert(offsetof(B_Athena_Pickaxe_Generic_C_ExecuteUbergraph_B_Athena_Pickaxe_Generic, CallFunc_BreakHitResult_Distance) == 0x0009F8, "Member 'B_Athena_Pickaxe_Generic_C_ExecuteUbergraph_B_Athena_Pickaxe_Generic::CallFunc_BreakHitResult_Distance' has a wrong offset!");
static_assert(offsetof(B_Athena_Pickaxe_Generic_C_ExecuteUbergraph_B_Athena_Pickaxe_Generic, CallFunc_BreakHitResult_Location) == 0x000A00, "Member 'B_Athena_Pickaxe_Generic_C_ExecuteUbergraph_B_Athena_Pickaxe_Generic::CallFunc_BreakHitResult_Location' has a wrong offset!");
static_assert(offsetof(B_Athena_Pickaxe_Generic_C_ExecuteUbergraph_B_Athena_Pickaxe_Generic, CallFunc_BreakHitResult_ImpactPoint) == 0x000A18, "Member 'B_Athena_Pickaxe_Generic_C_ExecuteUbergraph_B_Athena_Pickaxe_Generic::CallFunc_BreakHitResult_ImpactPoint' has a wrong offset!");
static_assert(offsetof(B_Athena_Pickaxe_Generic_C_ExecuteUbergraph_B_Athena_Pickaxe_Generic, CallFunc_BreakHitResult_Normal) == 0x000A30, "Member 'B_Athena_Pickaxe_Generic_C_ExecuteUbergraph_B_Athena_Pickaxe_Generic::CallFunc_BreakHitResult_Normal' has a wrong offset!");
static_assert(offsetof(B_Athena_Pickaxe_Generic_C_ExecuteUbergraph_B_Athena_Pickaxe_Generic, CallFunc_BreakHitResult_ImpactNormal) == 0x000A48, "Member 'B_Athena_Pickaxe_Generic_C_ExecuteUbergraph_B_Athena_Pickaxe_Generic::CallFunc_BreakHitResult_ImpactNormal' has a wrong offset!");
static_assert(offsetof(B_Athena_Pickaxe_Generic_C_ExecuteUbergraph_B_Athena_Pickaxe_Generic, CallFunc_BreakHitResult_PhysMat) == 0x000A60, "Member 'B_Athena_Pickaxe_Generic_C_ExecuteUbergraph_B_Athena_Pickaxe_Generic::CallFunc_BreakHitResult_PhysMat' has a wrong offset!");
static_assert(offsetof(B_Athena_Pickaxe_Generic_C_ExecuteUbergraph_B_Athena_Pickaxe_Generic, CallFunc_BreakHitResult_HitActor) == 0x000A68, "Member 'B_Athena_Pickaxe_Generic_C_ExecuteUbergraph_B_Athena_Pickaxe_Generic::CallFunc_BreakHitResult_HitActor' has a wrong offset!");
static_assert(offsetof(B_Athena_Pickaxe_Generic_C_ExecuteUbergraph_B_Athena_Pickaxe_Generic, CallFunc_BreakHitResult_HitComponent) == 0x000A70, "Member 'B_Athena_Pickaxe_Generic_C_ExecuteUbergraph_B_Athena_Pickaxe_Generic::CallFunc_BreakHitResult_HitComponent' has a wrong offset!");
static_assert(offsetof(B_Athena_Pickaxe_Generic_C_ExecuteUbergraph_B_Athena_Pickaxe_Generic, CallFunc_BreakHitResult_HitBoneName) == 0x000A78, "Member 'B_Athena_Pickaxe_Generic_C_ExecuteUbergraph_B_Athena_Pickaxe_Generic::CallFunc_BreakHitResult_HitBoneName' has a wrong offset!");
static_assert(offsetof(B_Athena_Pickaxe_Generic_C_ExecuteUbergraph_B_Athena_Pickaxe_Generic, CallFunc_BreakHitResult_BoneName) == 0x000A7C, "Member 'B_Athena_Pickaxe_Generic_C_ExecuteUbergraph_B_Athena_Pickaxe_Generic::CallFunc_BreakHitResult_BoneName' has a wrong offset!");
static_assert(offsetof(B_Athena_Pickaxe_Generic_C_ExecuteUbergraph_B_Athena_Pickaxe_Generic, CallFunc_BreakHitResult_HitItem) == 0x000A80, "Member 'B_Athena_Pickaxe_Generic_C_ExecuteUbergraph_B_Athena_Pickaxe_Generic::CallFunc_BreakHitResult_HitItem' has a wrong offset!");
static_assert(offsetof(B_Athena_Pickaxe_Generic_C_ExecuteUbergraph_B_Athena_Pickaxe_Generic, CallFunc_BreakHitResult_ElementIndex) == 0x000A84, "Member 'B_Athena_Pickaxe_Generic_C_ExecuteUbergraph_B_Athena_Pickaxe_Generic::CallFunc_BreakHitResult_ElementIndex' has a wrong offset!");
static_assert(offsetof(B_Athena_Pickaxe_Generic_C_ExecuteUbergraph_B_Athena_Pickaxe_Generic, CallFunc_BreakHitResult_FaceIndex) == 0x000A88, "Member 'B_Athena_Pickaxe_Generic_C_ExecuteUbergraph_B_Athena_Pickaxe_Generic::CallFunc_BreakHitResult_FaceIndex' has a wrong offset!");
static_assert(offsetof(B_Athena_Pickaxe_Generic_C_ExecuteUbergraph_B_Athena_Pickaxe_Generic, CallFunc_BreakHitResult_TraceStart) == 0x000A90, "Member 'B_Athena_Pickaxe_Generic_C_ExecuteUbergraph_B_Athena_Pickaxe_Generic::CallFunc_BreakHitResult_TraceStart' has a wrong offset!");
static_assert(offsetof(B_Athena_Pickaxe_Generic_C_ExecuteUbergraph_B_Athena_Pickaxe_Generic, CallFunc_BreakHitResult_TraceEnd) == 0x000AA8, "Member 'B_Athena_Pickaxe_Generic_C_ExecuteUbergraph_B_Athena_Pickaxe_Generic::CallFunc_BreakHitResult_TraceEnd' has a wrong offset!");
static_assert(offsetof(B_Athena_Pickaxe_Generic_C_ExecuteUbergraph_B_Athena_Pickaxe_Generic, CallFunc_MakeRotFromX_ReturnValue) == 0x000AC0, "Member 'B_Athena_Pickaxe_Generic_C_ExecuteUbergraph_B_Athena_Pickaxe_Generic::CallFunc_MakeRotFromX_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_Athena_Pickaxe_Generic_C_ExecuteUbergraph_B_Athena_Pickaxe_Generic, Temp_int_Variable_24) == 0x000AD8, "Member 'B_Athena_Pickaxe_Generic_C_ExecuteUbergraph_B_Athena_Pickaxe_Generic::Temp_int_Variable_24' has a wrong offset!");
static_assert(offsetof(B_Athena_Pickaxe_Generic_C_ExecuteUbergraph_B_Athena_Pickaxe_Generic, CallFunc_GetSwingVFXComponent_ReturnValue_2) == 0x000AE0, "Member 'B_Athena_Pickaxe_Generic_C_ExecuteUbergraph_B_Athena_Pickaxe_Generic::CallFunc_GetSwingVFXComponent_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(B_Athena_Pickaxe_Generic_C_ExecuteUbergraph_B_Athena_Pickaxe_Generic, Temp_int_Variable_25) == 0x000AE8, "Member 'B_Athena_Pickaxe_Generic_C_ExecuteUbergraph_B_Athena_Pickaxe_Generic::Temp_int_Variable_25' has a wrong offset!");
static_assert(offsetof(B_Athena_Pickaxe_Generic_C_ExecuteUbergraph_B_Athena_Pickaxe_Generic, Temp_int_Variable_26) == 0x000AEC, "Member 'B_Athena_Pickaxe_Generic_C_ExecuteUbergraph_B_Athena_Pickaxe_Generic::Temp_int_Variable_26' has a wrong offset!");
static_assert(offsetof(B_Athena_Pickaxe_Generic_C_ExecuteUbergraph_B_Athena_Pickaxe_Generic, Temp_int_Variable_27) == 0x000AF0, "Member 'B_Athena_Pickaxe_Generic_C_ExecuteUbergraph_B_Athena_Pickaxe_Generic::Temp_int_Variable_27' has a wrong offset!");
static_assert(offsetof(B_Athena_Pickaxe_Generic_C_ExecuteUbergraph_B_Athena_Pickaxe_Generic, CallFunc_K2_GetComponentToWorld_ReturnValue) == 0x000B00, "Member 'B_Athena_Pickaxe_Generic_C_ExecuteUbergraph_B_Athena_Pickaxe_Generic::CallFunc_K2_GetComponentToWorld_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_Athena_Pickaxe_Generic_C_ExecuteUbergraph_B_Athena_Pickaxe_Generic, Temp_bool_Has_Been_Initd_Variable) == 0x000B60, "Member 'B_Athena_Pickaxe_Generic_C_ExecuteUbergraph_B_Athena_Pickaxe_Generic::Temp_bool_Has_Been_Initd_Variable' has a wrong offset!");
static_assert(offsetof(B_Athena_Pickaxe_Generic_C_ExecuteUbergraph_B_Athena_Pickaxe_Generic, CallFunc_IsCosmeticObjectDisplayedInFrontendContext_ReturnValue) == 0x000B61, "Member 'B_Athena_Pickaxe_Generic_C_ExecuteUbergraph_B_Athena_Pickaxe_Generic::CallFunc_IsCosmeticObjectDisplayedInFrontendContext_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_Athena_Pickaxe_Generic_C_ExecuteUbergraph_B_Athena_Pickaxe_Generic, K2Node_CreateDelegate_OutputDelegate_2) == 0x000B64, "Member 'B_Athena_Pickaxe_Generic_C_ExecuteUbergraph_B_Athena_Pickaxe_Generic::K2Node_CreateDelegate_OutputDelegate_2' has a wrong offset!");
static_assert(offsetof(B_Athena_Pickaxe_Generic_C_ExecuteUbergraph_B_Athena_Pickaxe_Generic, CallFunc_GetInstigator_ReturnValue_3) == 0x000B70, "Member 'B_Athena_Pickaxe_Generic_C_ExecuteUbergraph_B_Athena_Pickaxe_Generic::CallFunc_GetInstigator_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(B_Athena_Pickaxe_Generic_C_ExecuteUbergraph_B_Athena_Pickaxe_Generic, K2Node_DynamicCast_AsFort_Pawn_2) == 0x000B78, "Member 'B_Athena_Pickaxe_Generic_C_ExecuteUbergraph_B_Athena_Pickaxe_Generic::K2Node_DynamicCast_AsFort_Pawn_2' has a wrong offset!");
static_assert(offsetof(B_Athena_Pickaxe_Generic_C_ExecuteUbergraph_B_Athena_Pickaxe_Generic, K2Node_DynamicCast_bSuccess_8) == 0x000B80, "Member 'B_Athena_Pickaxe_Generic_C_ExecuteUbergraph_B_Athena_Pickaxe_Generic::K2Node_DynamicCast_bSuccess_8' has a wrong offset!");
static_assert(offsetof(B_Athena_Pickaxe_Generic_C_ExecuteUbergraph_B_Athena_Pickaxe_Generic, Temp_int_Variable_28) == 0x000B84, "Member 'B_Athena_Pickaxe_Generic_C_ExecuteUbergraph_B_Athena_Pickaxe_Generic::Temp_int_Variable_28' has a wrong offset!");
static_assert(offsetof(B_Athena_Pickaxe_Generic_C_ExecuteUbergraph_B_Athena_Pickaxe_Generic, CallFunc_GetInstigator_ReturnValue_4) == 0x000B88, "Member 'B_Athena_Pickaxe_Generic_C_ExecuteUbergraph_B_Athena_Pickaxe_Generic::CallFunc_GetInstigator_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(B_Athena_Pickaxe_Generic_C_ExecuteUbergraph_B_Athena_Pickaxe_Generic, Temp_int_Variable_29) == 0x000B90, "Member 'B_Athena_Pickaxe_Generic_C_ExecuteUbergraph_B_Athena_Pickaxe_Generic::Temp_int_Variable_29' has a wrong offset!");
static_assert(offsetof(B_Athena_Pickaxe_Generic_C_ExecuteUbergraph_B_Athena_Pickaxe_Generic, K2Node_DynamicCast_AsFort_Pawn_3) == 0x000B98, "Member 'B_Athena_Pickaxe_Generic_C_ExecuteUbergraph_B_Athena_Pickaxe_Generic::K2Node_DynamicCast_AsFort_Pawn_3' has a wrong offset!");
static_assert(offsetof(B_Athena_Pickaxe_Generic_C_ExecuteUbergraph_B_Athena_Pickaxe_Generic, K2Node_DynamicCast_bSuccess_9) == 0x000BA0, "Member 'B_Athena_Pickaxe_Generic_C_ExecuteUbergraph_B_Athena_Pickaxe_Generic::K2Node_DynamicCast_bSuccess_9' has a wrong offset!");
static_assert(offsetof(B_Athena_Pickaxe_Generic_C_ExecuteUbergraph_B_Athena_Pickaxe_Generic, CallFunc_GetCurrentWeapon_ReturnValue) == 0x000BA8, "Member 'B_Athena_Pickaxe_Generic_C_ExecuteUbergraph_B_Athena_Pickaxe_Generic::CallFunc_GetCurrentWeapon_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_Athena_Pickaxe_Generic_C_ExecuteUbergraph_B_Athena_Pickaxe_Generic, Temp_int_Variable_30) == 0x000BB0, "Member 'B_Athena_Pickaxe_Generic_C_ExecuteUbergraph_B_Athena_Pickaxe_Generic::Temp_int_Variable_30' has a wrong offset!");
static_assert(offsetof(B_Athena_Pickaxe_Generic_C_ExecuteUbergraph_B_Athena_Pickaxe_Generic, CallFunc_EqualEqual_ObjectObject_ReturnValue) == 0x000BB4, "Member 'B_Athena_Pickaxe_Generic_C_ExecuteUbergraph_B_Athena_Pickaxe_Generic::CallFunc_EqualEqual_ObjectObject_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_Athena_Pickaxe_Generic_C_ExecuteUbergraph_B_Athena_Pickaxe_Generic, CallFunc_GetIdleVFXComponent_ReturnValue_1) == 0x000BB8, "Member 'B_Athena_Pickaxe_Generic_C_ExecuteUbergraph_B_Athena_Pickaxe_Generic::CallFunc_GetIdleVFXComponent_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(B_Athena_Pickaxe_Generic_C_ExecuteUbergraph_B_Athena_Pickaxe_Generic, CallFunc_GetIdleVFXComponent_ReturnValue_2) == 0x000BC0, "Member 'B_Athena_Pickaxe_Generic_C_ExecuteUbergraph_B_Athena_Pickaxe_Generic::CallFunc_GetIdleVFXComponent_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(B_Athena_Pickaxe_Generic_C_ExecuteUbergraph_B_Athena_Pickaxe_Generic, CallFunc_IsValid_ReturnValue_7) == 0x000BC8, "Member 'B_Athena_Pickaxe_Generic_C_ExecuteUbergraph_B_Athena_Pickaxe_Generic::CallFunc_IsValid_ReturnValue_7' has a wrong offset!");
static_assert(offsetof(B_Athena_Pickaxe_Generic_C_ExecuteUbergraph_B_Athena_Pickaxe_Generic, CallFunc_IsValid_ReturnValue_8) == 0x000BC9, "Member 'B_Athena_Pickaxe_Generic_C_ExecuteUbergraph_B_Athena_Pickaxe_Generic::CallFunc_IsValid_ReturnValue_8' has a wrong offset!");
static_assert(offsetof(B_Athena_Pickaxe_Generic_C_ExecuteUbergraph_B_Athena_Pickaxe_Generic, CallFunc_GetContextualTimeOfDayManager_ReturnValue) == 0x000BD0, "Member 'B_Athena_Pickaxe_Generic_C_ExecuteUbergraph_B_Athena_Pickaxe_Generic::CallFunc_GetContextualTimeOfDayManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_Athena_Pickaxe_Generic_C_ExecuteUbergraph_B_Athena_Pickaxe_Generic, K2Node_CustomEvent_FortPlayerPawn) == 0x000BE0, "Member 'B_Athena_Pickaxe_Generic_C_ExecuteUbergraph_B_Athena_Pickaxe_Generic::K2Node_CustomEvent_FortPlayerPawn' has a wrong offset!");
static_assert(offsetof(B_Athena_Pickaxe_Generic_C_ExecuteUbergraph_B_Athena_Pickaxe_Generic, K2Node_CustomEvent_NewVehicle) == 0x000BE8, "Member 'B_Athena_Pickaxe_Generic_C_ExecuteUbergraph_B_Athena_Pickaxe_Generic::K2Node_CustomEvent_NewVehicle' has a wrong offset!");
static_assert(offsetof(B_Athena_Pickaxe_Generic_C_ExecuteUbergraph_B_Athena_Pickaxe_Generic, K2Node_CustomEvent_OldVehicle) == 0x000BF0, "Member 'B_Athena_Pickaxe_Generic_C_ExecuteUbergraph_B_Athena_Pickaxe_Generic::K2Node_CustomEvent_OldVehicle' has a wrong offset!");
static_assert(offsetof(B_Athena_Pickaxe_Generic_C_ExecuteUbergraph_B_Athena_Pickaxe_Generic, CallFunc_GetPreviousDayPhase_ReturnValue) == 0x000BF8, "Member 'B_Athena_Pickaxe_Generic_C_ExecuteUbergraph_B_Athena_Pickaxe_Generic::CallFunc_GetPreviousDayPhase_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_Athena_Pickaxe_Generic_C_ExecuteUbergraph_B_Athena_Pickaxe_Generic, CallFunc_GetCurrentDayPhase_ReturnValue) == 0x000BF9, "Member 'B_Athena_Pickaxe_Generic_C_ExecuteUbergraph_B_Athena_Pickaxe_Generic::CallFunc_GetCurrentDayPhase_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_Athena_Pickaxe_Generic_C_ExecuteUbergraph_B_Athena_Pickaxe_Generic, Temp_int_Variable_31) == 0x000BFC, "Member 'B_Athena_Pickaxe_Generic_C_ExecuteUbergraph_B_Athena_Pickaxe_Generic::Temp_int_Variable_31' has a wrong offset!");
static_assert(offsetof(B_Athena_Pickaxe_Generic_C_ExecuteUbergraph_B_Athena_Pickaxe_Generic, Temp_int_Variable_32) == 0x000C00, "Member 'B_Athena_Pickaxe_Generic_C_ExecuteUbergraph_B_Athena_Pickaxe_Generic::Temp_int_Variable_32' has a wrong offset!");
static_assert(offsetof(B_Athena_Pickaxe_Generic_C_ExecuteUbergraph_B_Athena_Pickaxe_Generic, K2Node_CreateDelegate_OutputDelegate_3) == 0x000C04, "Member 'B_Athena_Pickaxe_Generic_C_ExecuteUbergraph_B_Athena_Pickaxe_Generic::K2Node_CreateDelegate_OutputDelegate_3' has a wrong offset!");
static_assert(offsetof(B_Athena_Pickaxe_Generic_C_ExecuteUbergraph_B_Athena_Pickaxe_Generic, Temp_bool_IsClosed_Variable) == 0x000C10, "Member 'B_Athena_Pickaxe_Generic_C_ExecuteUbergraph_B_Athena_Pickaxe_Generic::Temp_bool_IsClosed_Variable' has a wrong offset!");
static_assert(offsetof(B_Athena_Pickaxe_Generic_C_ExecuteUbergraph_B_Athena_Pickaxe_Generic, Temp_byte_Variable) == 0x000C11, "Member 'B_Athena_Pickaxe_Generic_C_ExecuteUbergraph_B_Athena_Pickaxe_Generic::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(B_Athena_Pickaxe_Generic_C_ExecuteUbergraph_B_Athena_Pickaxe_Generic, K2Node_Select_Default) == 0x000C14, "Member 'B_Athena_Pickaxe_Generic_C_ExecuteUbergraph_B_Athena_Pickaxe_Generic::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(B_Athena_Pickaxe_Generic_C_ExecuteUbergraph_B_Athena_Pickaxe_Generic, Temp_bool_Variable) == 0x000C18, "Member 'B_Athena_Pickaxe_Generic_C_ExecuteUbergraph_B_Athena_Pickaxe_Generic::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(B_Athena_Pickaxe_Generic_C_ExecuteUbergraph_B_Athena_Pickaxe_Generic, CallFunc_IsValid_ReturnValue_9) == 0x000C19, "Member 'B_Athena_Pickaxe_Generic_C_ExecuteUbergraph_B_Athena_Pickaxe_Generic::CallFunc_IsValid_ReturnValue_9' has a wrong offset!");
static_assert(offsetof(B_Athena_Pickaxe_Generic_C_ExecuteUbergraph_B_Athena_Pickaxe_Generic, K2Node_Select_Default_1) == 0x000C20, "Member 'B_Athena_Pickaxe_Generic_C_ExecuteUbergraph_B_Athena_Pickaxe_Generic::K2Node_Select_Default_1' has a wrong offset!");
static_assert(offsetof(B_Athena_Pickaxe_Generic_C_ExecuteUbergraph_B_Athena_Pickaxe_Generic, CallFunc_K2_GetComponentToWorld_ReturnValue_1) == 0x000C40, "Member 'B_Athena_Pickaxe_Generic_C_ExecuteUbergraph_B_Athena_Pickaxe_Generic::CallFunc_K2_GetComponentToWorld_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(B_Athena_Pickaxe_Generic_C_ExecuteUbergraph_B_Athena_Pickaxe_Generic, CallFunc_InverseTransformRotation_ReturnValue) == 0x000CA0, "Member 'B_Athena_Pickaxe_Generic_C_ExecuteUbergraph_B_Athena_Pickaxe_Generic::CallFunc_InverseTransformRotation_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_Athena_Pickaxe_Generic_C_ExecuteUbergraph_B_Athena_Pickaxe_Generic, CallFunc_ComposeRotators_ReturnValue) == 0x000CB8, "Member 'B_Athena_Pickaxe_Generic_C_ExecuteUbergraph_B_Athena_Pickaxe_Generic::CallFunc_ComposeRotators_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_Athena_Pickaxe_Generic_C_ExecuteUbergraph_B_Athena_Pickaxe_Generic, CallFunc_GetInstigator_ReturnValue_5) == 0x000CD0, "Member 'B_Athena_Pickaxe_Generic_C_ExecuteUbergraph_B_Athena_Pickaxe_Generic::CallFunc_GetInstigator_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(B_Athena_Pickaxe_Generic_C_ExecuteUbergraph_B_Athena_Pickaxe_Generic, CallFunc_TransformRotation_ReturnValue) == 0x000CD8, "Member 'B_Athena_Pickaxe_Generic_C_ExecuteUbergraph_B_Athena_Pickaxe_Generic::CallFunc_TransformRotation_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_Athena_Pickaxe_Generic_C_ExecuteUbergraph_B_Athena_Pickaxe_Generic, K2Node_DynamicCast_AsPlayer_Pawn_Generic_Parent) == 0x000CF0, "Member 'B_Athena_Pickaxe_Generic_C_ExecuteUbergraph_B_Athena_Pickaxe_Generic::K2Node_DynamicCast_AsPlayer_Pawn_Generic_Parent' has a wrong offset!");
static_assert(offsetof(B_Athena_Pickaxe_Generic_C_ExecuteUbergraph_B_Athena_Pickaxe_Generic, K2Node_DynamicCast_bSuccess_10) == 0x000CF8, "Member 'B_Athena_Pickaxe_Generic_C_ExecuteUbergraph_B_Athena_Pickaxe_Generic::K2Node_DynamicCast_bSuccess_10' has a wrong offset!");
static_assert(offsetof(B_Athena_Pickaxe_Generic_C_ExecuteUbergraph_B_Athena_Pickaxe_Generic, CallFunc_K2_SetWorldRotation_SweepHitResult) == 0x000D00, "Member 'B_Athena_Pickaxe_Generic_C_ExecuteUbergraph_B_Athena_Pickaxe_Generic::CallFunc_K2_SetWorldRotation_SweepHitResult' has a wrong offset!");
static_assert(offsetof(B_Athena_Pickaxe_Generic_C_ExecuteUbergraph_B_Athena_Pickaxe_Generic, CallFunc_DoesSocketExist_ReturnValue) == 0x000DE0, "Member 'B_Athena_Pickaxe_Generic_C_ExecuteUbergraph_B_Athena_Pickaxe_Generic::CallFunc_DoesSocketExist_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_Athena_Pickaxe_Generic_C_ExecuteUbergraph_B_Athena_Pickaxe_Generic, CallFunc_GetSocketTransform_ReturnValue) == 0x000DF0, "Member 'B_Athena_Pickaxe_Generic_C_ExecuteUbergraph_B_Athena_Pickaxe_Generic::CallFunc_GetSocketTransform_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_Athena_Pickaxe_Generic_C_ExecuteUbergraph_B_Athena_Pickaxe_Generic, CallFunc_GetSocketTransform_ReturnValue_1) == 0x000E50, "Member 'B_Athena_Pickaxe_Generic_C_ExecuteUbergraph_B_Athena_Pickaxe_Generic::CallFunc_GetSocketTransform_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(B_Athena_Pickaxe_Generic_C_ExecuteUbergraph_B_Athena_Pickaxe_Generic, CallFunc_BreakTransform_Location) == 0x000EB0, "Member 'B_Athena_Pickaxe_Generic_C_ExecuteUbergraph_B_Athena_Pickaxe_Generic::CallFunc_BreakTransform_Location' has a wrong offset!");
static_assert(offsetof(B_Athena_Pickaxe_Generic_C_ExecuteUbergraph_B_Athena_Pickaxe_Generic, CallFunc_BreakTransform_Rotation) == 0x000EC8, "Member 'B_Athena_Pickaxe_Generic_C_ExecuteUbergraph_B_Athena_Pickaxe_Generic::CallFunc_BreakTransform_Rotation' has a wrong offset!");
static_assert(offsetof(B_Athena_Pickaxe_Generic_C_ExecuteUbergraph_B_Athena_Pickaxe_Generic, CallFunc_BreakTransform_Scale) == 0x000EE0, "Member 'B_Athena_Pickaxe_Generic_C_ExecuteUbergraph_B_Athena_Pickaxe_Generic::CallFunc_BreakTransform_Scale' has a wrong offset!");
static_assert(offsetof(B_Athena_Pickaxe_Generic_C_ExecuteUbergraph_B_Athena_Pickaxe_Generic, CallFunc_BreakTransform_Location_1) == 0x000EF8, "Member 'B_Athena_Pickaxe_Generic_C_ExecuteUbergraph_B_Athena_Pickaxe_Generic::CallFunc_BreakTransform_Location_1' has a wrong offset!");
static_assert(offsetof(B_Athena_Pickaxe_Generic_C_ExecuteUbergraph_B_Athena_Pickaxe_Generic, CallFunc_BreakTransform_Rotation_1) == 0x000F10, "Member 'B_Athena_Pickaxe_Generic_C_ExecuteUbergraph_B_Athena_Pickaxe_Generic::CallFunc_BreakTransform_Rotation_1' has a wrong offset!");
static_assert(offsetof(B_Athena_Pickaxe_Generic_C_ExecuteUbergraph_B_Athena_Pickaxe_Generic, CallFunc_BreakTransform_Scale_1) == 0x000F28, "Member 'B_Athena_Pickaxe_Generic_C_ExecuteUbergraph_B_Athena_Pickaxe_Generic::CallFunc_BreakTransform_Scale_1' has a wrong offset!");
static_assert(offsetof(B_Athena_Pickaxe_Generic_C_ExecuteUbergraph_B_Athena_Pickaxe_Generic, CallFunc_BreakVector_X) == 0x000F40, "Member 'B_Athena_Pickaxe_Generic_C_ExecuteUbergraph_B_Athena_Pickaxe_Generic::CallFunc_BreakVector_X' has a wrong offset!");
static_assert(offsetof(B_Athena_Pickaxe_Generic_C_ExecuteUbergraph_B_Athena_Pickaxe_Generic, CallFunc_BreakVector_Y) == 0x000F48, "Member 'B_Athena_Pickaxe_Generic_C_ExecuteUbergraph_B_Athena_Pickaxe_Generic::CallFunc_BreakVector_Y' has a wrong offset!");
static_assert(offsetof(B_Athena_Pickaxe_Generic_C_ExecuteUbergraph_B_Athena_Pickaxe_Generic, CallFunc_BreakVector_Z) == 0x000F50, "Member 'B_Athena_Pickaxe_Generic_C_ExecuteUbergraph_B_Athena_Pickaxe_Generic::CallFunc_BreakVector_Z' has a wrong offset!");
static_assert(offsetof(B_Athena_Pickaxe_Generic_C_ExecuteUbergraph_B_Athena_Pickaxe_Generic, CallFunc_BreakVector_X_1) == 0x000F58, "Member 'B_Athena_Pickaxe_Generic_C_ExecuteUbergraph_B_Athena_Pickaxe_Generic::CallFunc_BreakVector_X_1' has a wrong offset!");
static_assert(offsetof(B_Athena_Pickaxe_Generic_C_ExecuteUbergraph_B_Athena_Pickaxe_Generic, CallFunc_BreakVector_Y_1) == 0x000F60, "Member 'B_Athena_Pickaxe_Generic_C_ExecuteUbergraph_B_Athena_Pickaxe_Generic::CallFunc_BreakVector_Y_1' has a wrong offset!");
static_assert(offsetof(B_Athena_Pickaxe_Generic_C_ExecuteUbergraph_B_Athena_Pickaxe_Generic, CallFunc_BreakVector_Z_1) == 0x000F68, "Member 'B_Athena_Pickaxe_Generic_C_ExecuteUbergraph_B_Athena_Pickaxe_Generic::CallFunc_BreakVector_Z_1' has a wrong offset!");
static_assert(offsetof(B_Athena_Pickaxe_Generic_C_ExecuteUbergraph_B_Athena_Pickaxe_Generic, CallFunc_Add_DoubleDouble_ReturnValue) == 0x000F70, "Member 'B_Athena_Pickaxe_Generic_C_ExecuteUbergraph_B_Athena_Pickaxe_Generic::CallFunc_Add_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_Athena_Pickaxe_Generic_C_ExecuteUbergraph_B_Athena_Pickaxe_Generic, CallFunc_GetSocketLocation_ReturnValue_1) == 0x000F78, "Member 'B_Athena_Pickaxe_Generic_C_ExecuteUbergraph_B_Athena_Pickaxe_Generic::CallFunc_GetSocketLocation_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(B_Athena_Pickaxe_Generic_C_ExecuteUbergraph_B_Athena_Pickaxe_Generic, CallFunc_Divide_DoubleDouble_ReturnValue) == 0x000F90, "Member 'B_Athena_Pickaxe_Generic_C_ExecuteUbergraph_B_Athena_Pickaxe_Generic::CallFunc_Divide_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_Athena_Pickaxe_Generic_C_ExecuteUbergraph_B_Athena_Pickaxe_Generic, CallFunc_GetSocketLocation_ReturnValue_2) == 0x000F98, "Member 'B_Athena_Pickaxe_Generic_C_ExecuteUbergraph_B_Athena_Pickaxe_Generic::CallFunc_GetSocketLocation_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(B_Athena_Pickaxe_Generic_C_ExecuteUbergraph_B_Athena_Pickaxe_Generic, CallFunc_Multiply_DoubleDouble_ReturnValue_1) == 0x000FB0, "Member 'B_Athena_Pickaxe_Generic_C_ExecuteUbergraph_B_Athena_Pickaxe_Generic::CallFunc_Multiply_DoubleDouble_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(B_Athena_Pickaxe_Generic_C_ExecuteUbergraph_B_Athena_Pickaxe_Generic, CallFunc_Subtract_VectorVector_ReturnValue) == 0x000FB8, "Member 'B_Athena_Pickaxe_Generic_C_ExecuteUbergraph_B_Athena_Pickaxe_Generic::CallFunc_Subtract_VectorVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_Athena_Pickaxe_Generic_C_ExecuteUbergraph_B_Athena_Pickaxe_Generic, CallFunc_SpawnEmitterAttached_ReturnValue_1) == 0x000FD0, "Member 'B_Athena_Pickaxe_Generic_C_ExecuteUbergraph_B_Athena_Pickaxe_Generic::CallFunc_SpawnEmitterAttached_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(B_Athena_Pickaxe_Generic_C_ExecuteUbergraph_B_Athena_Pickaxe_Generic, CallFunc_Conv_VectorToRotator_ReturnValue) == 0x000FD8, "Member 'B_Athena_Pickaxe_Generic_C_ExecuteUbergraph_B_Athena_Pickaxe_Generic::CallFunc_Conv_VectorToRotator_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_Athena_Pickaxe_Generic_C_ExecuteUbergraph_B_Athena_Pickaxe_Generic, CallFunc_K2_SetWorldRotation_SweepHitResult_1) == 0x000FF0, "Member 'B_Athena_Pickaxe_Generic_C_ExecuteUbergraph_B_Athena_Pickaxe_Generic::CallFunc_K2_SetWorldRotation_SweepHitResult_1' has a wrong offset!");
static_assert(offsetof(B_Athena_Pickaxe_Generic_C_ExecuteUbergraph_B_Athena_Pickaxe_Generic, CallFunc_VSize_ReturnValue) == 0x0010D0, "Member 'B_Athena_Pickaxe_Generic_C_ExecuteUbergraph_B_Athena_Pickaxe_Generic::CallFunc_VSize_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_Athena_Pickaxe_Generic_C_ExecuteUbergraph_B_Athena_Pickaxe_Generic, CallFunc_DoesSocketExist_ReturnValue_1) == 0x0010D8, "Member 'B_Athena_Pickaxe_Generic_C_ExecuteUbergraph_B_Athena_Pickaxe_Generic::CallFunc_DoesSocketExist_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(B_Athena_Pickaxe_Generic_C_ExecuteUbergraph_B_Athena_Pickaxe_Generic, CallFunc_Multiply_DoubleDouble_ReturnValue_2) == 0x0010E0, "Member 'B_Athena_Pickaxe_Generic_C_ExecuteUbergraph_B_Athena_Pickaxe_Generic::CallFunc_Multiply_DoubleDouble_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(B_Athena_Pickaxe_Generic_C_ExecuteUbergraph_B_Athena_Pickaxe_Generic, CallFunc_BooleanAND_ReturnValue) == 0x0010E8, "Member 'B_Athena_Pickaxe_Generic_C_ExecuteUbergraph_B_Athena_Pickaxe_Generic::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_Athena_Pickaxe_Generic_C_ExecuteUbergraph_B_Athena_Pickaxe_Generic, CallFunc_Divide_DoubleDouble_ReturnValue_1) == 0x0010F0, "Member 'B_Athena_Pickaxe_Generic_C_ExecuteUbergraph_B_Athena_Pickaxe_Generic::CallFunc_Divide_DoubleDouble_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(B_Athena_Pickaxe_Generic_C_ExecuteUbergraph_B_Athena_Pickaxe_Generic, CallFunc_Divide_DoubleDouble_ReturnValue_2) == 0x0010F8, "Member 'B_Athena_Pickaxe_Generic_C_ExecuteUbergraph_B_Athena_Pickaxe_Generic::CallFunc_Divide_DoubleDouble_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(B_Athena_Pickaxe_Generic_C_ExecuteUbergraph_B_Athena_Pickaxe_Generic, CallFunc_MakeVector_ReturnValue) == 0x001100, "Member 'B_Athena_Pickaxe_Generic_C_ExecuteUbergraph_B_Athena_Pickaxe_Generic::CallFunc_MakeVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_Athena_Pickaxe_Generic_C_ExecuteUbergraph_B_Athena_Pickaxe_Generic, CallFunc_Divide_DoubleDouble_ReturnValue_3) == 0x001118, "Member 'B_Athena_Pickaxe_Generic_C_ExecuteUbergraph_B_Athena_Pickaxe_Generic::CallFunc_Divide_DoubleDouble_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(B_Athena_Pickaxe_Generic_C_ExecuteUbergraph_B_Athena_Pickaxe_Generic, CallFunc_MakeVector_ReturnValue_1) == 0x001120, "Member 'B_Athena_Pickaxe_Generic_C_ExecuteUbergraph_B_Athena_Pickaxe_Generic::CallFunc_MakeVector_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(B_Athena_Pickaxe_Generic_C_ExecuteUbergraph_B_Athena_Pickaxe_Generic, CallFunc_Divide_DoubleDouble_ReturnValue_4) == 0x001138, "Member 'B_Athena_Pickaxe_Generic_C_ExecuteUbergraph_B_Athena_Pickaxe_Generic::CallFunc_Divide_DoubleDouble_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(B_Athena_Pickaxe_Generic_C_ExecuteUbergraph_B_Athena_Pickaxe_Generic, CallFunc_MakeVector_ReturnValue_2) == 0x001140, "Member 'B_Athena_Pickaxe_Generic_C_ExecuteUbergraph_B_Athena_Pickaxe_Generic::CallFunc_MakeVector_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(B_Athena_Pickaxe_Generic_C_ExecuteUbergraph_B_Athena_Pickaxe_Generic, CallFunc_SetFloatParameter_Param_ImplicitCast) == 0x001158, "Member 'B_Athena_Pickaxe_Generic_C_ExecuteUbergraph_B_Athena_Pickaxe_Generic::CallFunc_SetFloatParameter_Param_ImplicitCast' has a wrong offset!");
static_assert(offsetof(B_Athena_Pickaxe_Generic_C_ExecuteUbergraph_B_Athena_Pickaxe_Generic, CallFunc_SetFloatParameter_Param_ImplicitCast_1) == 0x00115C, "Member 'B_Athena_Pickaxe_Generic_C_ExecuteUbergraph_B_Athena_Pickaxe_Generic::CallFunc_SetFloatParameter_Param_ImplicitCast_1' has a wrong offset!");
static_assert(offsetof(B_Athena_Pickaxe_Generic_C_ExecuteUbergraph_B_Athena_Pickaxe_Generic, CallFunc_SetFloatParameter_Param_ImplicitCast_2) == 0x001160, "Member 'B_Athena_Pickaxe_Generic_C_ExecuteUbergraph_B_Athena_Pickaxe_Generic::CallFunc_SetFloatParameter_Param_ImplicitCast_2' has a wrong offset!");

struct B_Athena_Pickaxe_Generic_C_Melee_Effect_Color final
{
public:
	struct FVector                                Melee_Color_Set;
};
static_assert(alignof(B_Athena_Pickaxe_Generic_C_Melee_Effect_Color) == 0x000008, "Wrong alignment on B_Athena_Pickaxe_Generic_C_Melee_Effect_Color");
static_assert(sizeof(B_Athena_Pickaxe_Generic_C_Melee_Effect_Color) == 0x000018, "Wrong size on B_Athena_Pickaxe_Generic_C_Melee_Effect_Color");
static_assert(offsetof(B_Athena_Pickaxe_Generic_C_Melee_Effect_Color, Melee_Color_Set) == 0x000000, "Member 'B_Athena_Pickaxe_Generic_C_Melee_Effect_Color::Melee_Color_Set' has a wrong offset!");

struct B_Athena_Pickaxe_Generic_C_MeleeSwingLeft final
{
public:
	bool                                          First_Left;
};
static_assert(alignof(B_Athena_Pickaxe_Generic_C_MeleeSwingLeft) == 0x000001, "Wrong alignment on B_Athena_Pickaxe_Generic_C_MeleeSwingLeft");
static_assert(sizeof(B_Athena_Pickaxe_Generic_C_MeleeSwingLeft) == 0x000001, "Wrong size on B_Athena_Pickaxe_Generic_C_MeleeSwingLeft");
static_assert(offsetof(B_Athena_Pickaxe_Generic_C_MeleeSwingLeft, First_Left) == 0x000000, "Member 'B_Athena_Pickaxe_Generic_C_MeleeSwingLeft::First_Left' has a wrong offset!");

struct B_Athena_Pickaxe_Generic_C_MeleeSwingRight final
{
public:
	bool                                          First_Right;
};
static_assert(alignof(B_Athena_Pickaxe_Generic_C_MeleeSwingRight) == 0x000001, "Wrong alignment on B_Athena_Pickaxe_Generic_C_MeleeSwingRight");
static_assert(sizeof(B_Athena_Pickaxe_Generic_C_MeleeSwingRight) == 0x000001, "Wrong size on B_Athena_Pickaxe_Generic_C_MeleeSwingRight");
static_assert(offsetof(B_Athena_Pickaxe_Generic_C_MeleeSwingRight, First_Right) == 0x000000, "Member 'B_Athena_Pickaxe_Generic_C_MeleeSwingRight::First_Right' has a wrong offset!");

struct B_Athena_Pickaxe_Generic_C_OnInitCosmeticAlterations final
{
public:
	struct FFortCosmeticModification              CosmeticMod;
};
static_assert(alignof(B_Athena_Pickaxe_Generic_C_OnInitCosmeticAlterations) == 0x000008, "Wrong alignment on B_Athena_Pickaxe_Generic_C_OnInitCosmeticAlterations");
static_assert(sizeof(B_Athena_Pickaxe_Generic_C_OnInitCosmeticAlterations) == 0x0006A0, "Wrong size on B_Athena_Pickaxe_Generic_C_OnInitCosmeticAlterations");
static_assert(offsetof(B_Athena_Pickaxe_Generic_C_OnInitCosmeticAlterations, CosmeticMod) == 0x000000, "Member 'B_Athena_Pickaxe_Generic_C_OnInitCosmeticAlterations::CosmeticMod' has a wrong offset!");

struct B_Athena_Pickaxe_Generic_C_OnLoaded_5BC5DA3B4E308BE7A188FBB2571333D2 final
{
public:
	class UObject*                                Loaded;
};
static_assert(alignof(B_Athena_Pickaxe_Generic_C_OnLoaded_5BC5DA3B4E308BE7A188FBB2571333D2) == 0x000008, "Wrong alignment on B_Athena_Pickaxe_Generic_C_OnLoaded_5BC5DA3B4E308BE7A188FBB2571333D2");
static_assert(sizeof(B_Athena_Pickaxe_Generic_C_OnLoaded_5BC5DA3B4E308BE7A188FBB2571333D2) == 0x000008, "Wrong size on B_Athena_Pickaxe_Generic_C_OnLoaded_5BC5DA3B4E308BE7A188FBB2571333D2");
static_assert(offsetof(B_Athena_Pickaxe_Generic_C_OnLoaded_5BC5DA3B4E308BE7A188FBB2571333D2, Loaded) == 0x000000, "Member 'B_Athena_Pickaxe_Generic_C_OnLoaded_5BC5DA3B4E308BE7A188FBB2571333D2::Loaded' has a wrong offset!");

struct B_Athena_Pickaxe_Generic_C_OnPlayImpactFX final
{
public:
	struct FHitResult                             HitResult;
	EPhysicalSurface                              ImpactPhysicalSurface;
	uint8                                         Pad_E1[0x7];
	class UFXSystemComponent*                     SpawnedPSC;
};
static_assert(alignof(B_Athena_Pickaxe_Generic_C_OnPlayImpactFX) == 0x000008, "Wrong alignment on B_Athena_Pickaxe_Generic_C_OnPlayImpactFX");
static_assert(sizeof(B_Athena_Pickaxe_Generic_C_OnPlayImpactFX) == 0x0000F0, "Wrong size on B_Athena_Pickaxe_Generic_C_OnPlayImpactFX");
static_assert(offsetof(B_Athena_Pickaxe_Generic_C_OnPlayImpactFX, HitResult) == 0x000000, "Member 'B_Athena_Pickaxe_Generic_C_OnPlayImpactFX::HitResult' has a wrong offset!");
static_assert(offsetof(B_Athena_Pickaxe_Generic_C_OnPlayImpactFX, ImpactPhysicalSurface) == 0x0000E0, "Member 'B_Athena_Pickaxe_Generic_C_OnPlayImpactFX::ImpactPhysicalSurface' has a wrong offset!");
static_assert(offsetof(B_Athena_Pickaxe_Generic_C_OnPlayImpactFX, SpawnedPSC) == 0x0000E8, "Member 'B_Athena_Pickaxe_Generic_C_OnPlayImpactFX::SpawnedPSC' has a wrong offset!");

struct B_Athena_Pickaxe_Generic_C_OnPlayWeaponFireFX final
{
public:
	bool                                          bPersistentFire;
	bool                                          bSecondaryFire;
};
static_assert(alignof(B_Athena_Pickaxe_Generic_C_OnPlayWeaponFireFX) == 0x000001, "Wrong alignment on B_Athena_Pickaxe_Generic_C_OnPlayWeaponFireFX");
static_assert(sizeof(B_Athena_Pickaxe_Generic_C_OnPlayWeaponFireFX) == 0x000002, "Wrong size on B_Athena_Pickaxe_Generic_C_OnPlayWeaponFireFX");
static_assert(offsetof(B_Athena_Pickaxe_Generic_C_OnPlayWeaponFireFX, bPersistentFire) == 0x000000, "Member 'B_Athena_Pickaxe_Generic_C_OnPlayWeaponFireFX::bPersistentFire' has a wrong offset!");
static_assert(offsetof(B_Athena_Pickaxe_Generic_C_OnPlayWeaponFireFX, bSecondaryFire) == 0x000001, "Member 'B_Athena_Pickaxe_Generic_C_OnPlayWeaponFireFX::bSecondaryFire' has a wrong offset!");

struct B_Athena_Pickaxe_Generic_C_OnStatChanged_F171C56748FEA3E19F93088E968D3E21 final
{
public:
	class FName                                   StatName;
	int32                                         StatValue;
};
static_assert(alignof(B_Athena_Pickaxe_Generic_C_OnStatChanged_F171C56748FEA3E19F93088E968D3E21) == 0x000004, "Wrong alignment on B_Athena_Pickaxe_Generic_C_OnStatChanged_F171C56748FEA3E19F93088E968D3E21");
static_assert(sizeof(B_Athena_Pickaxe_Generic_C_OnStatChanged_F171C56748FEA3E19F93088E968D3E21) == 0x000008, "Wrong size on B_Athena_Pickaxe_Generic_C_OnStatChanged_F171C56748FEA3E19F93088E968D3E21");
static_assert(offsetof(B_Athena_Pickaxe_Generic_C_OnStatChanged_F171C56748FEA3E19F93088E968D3E21, StatName) == 0x000000, "Member 'B_Athena_Pickaxe_Generic_C_OnStatChanged_F171C56748FEA3E19F93088E968D3E21::StatName' has a wrong offset!");
static_assert(offsetof(B_Athena_Pickaxe_Generic_C_OnStatChanged_F171C56748FEA3E19F93088E968D3E21, StatValue) == 0x000004, "Member 'B_Athena_Pickaxe_Generic_C_OnStatChanged_F171C56748FEA3E19F93088E968D3E21::StatValue' has a wrong offset!");

struct B_Athena_Pickaxe_Generic_C_OnWeaponVisibilityChanged final
{
public:
	bool                                          bVisible;
	bool                                          bSetForLocalControllerOnly;
};
static_assert(alignof(B_Athena_Pickaxe_Generic_C_OnWeaponVisibilityChanged) == 0x000001, "Wrong alignment on B_Athena_Pickaxe_Generic_C_OnWeaponVisibilityChanged");
static_assert(sizeof(B_Athena_Pickaxe_Generic_C_OnWeaponVisibilityChanged) == 0x000002, "Wrong size on B_Athena_Pickaxe_Generic_C_OnWeaponVisibilityChanged");
static_assert(offsetof(B_Athena_Pickaxe_Generic_C_OnWeaponVisibilityChanged, bVisible) == 0x000000, "Member 'B_Athena_Pickaxe_Generic_C_OnWeaponVisibilityChanged::bVisible' has a wrong offset!");
static_assert(offsetof(B_Athena_Pickaxe_Generic_C_OnWeaponVisibilityChanged, bSetForLocalControllerOnly) == 0x000001, "Member 'B_Athena_Pickaxe_Generic_C_OnWeaponVisibilityChanged::bSetForLocalControllerOnly' has a wrong offset!");

struct B_Athena_Pickaxe_Generic_C_PlayCQCPickaxeEnemyAudio final
{
public:
	struct FHitResult                             Hit_Result;
	bool                                          CallFunc_BreakHitResult_bBlockingHit;
	bool                                          CallFunc_BreakHitResult_bInitialOverlap;
	uint8                                         Pad_E2[0x2];
	float                                         CallFunc_BreakHitResult_Time;
	float                                         CallFunc_BreakHitResult_Distance;
	uint8                                         Pad_EC[0x4];
	struct FVector                                CallFunc_BreakHitResult_Location;
	struct FVector                                CallFunc_BreakHitResult_ImpactPoint;
	struct FVector                                CallFunc_BreakHitResult_Normal;
	struct FVector                                CallFunc_BreakHitResult_ImpactNormal;
	class UPhysicalMaterial*                      CallFunc_BreakHitResult_PhysMat;
	class AActor*                                 CallFunc_BreakHitResult_HitActor;
	class UPrimitiveComponent*                    CallFunc_BreakHitResult_HitComponent;
	class FName                                   CallFunc_BreakHitResult_HitBoneName;
	class FName                                   CallFunc_BreakHitResult_BoneName;
	int32                                         CallFunc_BreakHitResult_HitItem;
	int32                                         CallFunc_BreakHitResult_ElementIndex;
	int32                                         CallFunc_BreakHitResult_FaceIndex;
	uint8                                         Pad_17C[0x4];
	struct FVector                                CallFunc_BreakHitResult_TraceStart;
	struct FVector                                CallFunc_BreakHitResult_TraceEnd;
	class APawn*                                  CallFunc_GetInstigator_ReturnValue;
	class ABuildingActor*                         K2Node_DynamicCast_AsBuilding_Actor;
	bool                                          K2Node_DynamicCast_bSuccess;
	uint8                                         Pad_1C1[0x7];
	class AFortPawn*                              K2Node_DynamicCast_AsFort_Pawn;
	bool                                          K2Node_DynamicCast_bSuccess_1;
	uint8                                         Pad_1D1[0x7];
	class APlayerController*                      CallFunc_GetLocalViewingPlayerController_ReturnValue;
	bool                                          CallFunc_IsValid_ReturnValue;
	uint8                                         CallFunc_GetActorTeam_ReturnValue;
	EFortTeamAffiliation                          CallFunc_GetTeamAffiliationToLocalPlayer_ReturnValue;
	bool                                          K2Node_SwitchEnum_CmpSuccess;
};
static_assert(alignof(B_Athena_Pickaxe_Generic_C_PlayCQCPickaxeEnemyAudio) == 0x000008, "Wrong alignment on B_Athena_Pickaxe_Generic_C_PlayCQCPickaxeEnemyAudio");
static_assert(sizeof(B_Athena_Pickaxe_Generic_C_PlayCQCPickaxeEnemyAudio) == 0x0001E8, "Wrong size on B_Athena_Pickaxe_Generic_C_PlayCQCPickaxeEnemyAudio");
static_assert(offsetof(B_Athena_Pickaxe_Generic_C_PlayCQCPickaxeEnemyAudio, Hit_Result) == 0x000000, "Member 'B_Athena_Pickaxe_Generic_C_PlayCQCPickaxeEnemyAudio::Hit_Result' has a wrong offset!");
static_assert(offsetof(B_Athena_Pickaxe_Generic_C_PlayCQCPickaxeEnemyAudio, CallFunc_BreakHitResult_bBlockingHit) == 0x0000E0, "Member 'B_Athena_Pickaxe_Generic_C_PlayCQCPickaxeEnemyAudio::CallFunc_BreakHitResult_bBlockingHit' has a wrong offset!");
static_assert(offsetof(B_Athena_Pickaxe_Generic_C_PlayCQCPickaxeEnemyAudio, CallFunc_BreakHitResult_bInitialOverlap) == 0x0000E1, "Member 'B_Athena_Pickaxe_Generic_C_PlayCQCPickaxeEnemyAudio::CallFunc_BreakHitResult_bInitialOverlap' has a wrong offset!");
static_assert(offsetof(B_Athena_Pickaxe_Generic_C_PlayCQCPickaxeEnemyAudio, CallFunc_BreakHitResult_Time) == 0x0000E4, "Member 'B_Athena_Pickaxe_Generic_C_PlayCQCPickaxeEnemyAudio::CallFunc_BreakHitResult_Time' has a wrong offset!");
static_assert(offsetof(B_Athena_Pickaxe_Generic_C_PlayCQCPickaxeEnemyAudio, CallFunc_BreakHitResult_Distance) == 0x0000E8, "Member 'B_Athena_Pickaxe_Generic_C_PlayCQCPickaxeEnemyAudio::CallFunc_BreakHitResult_Distance' has a wrong offset!");
static_assert(offsetof(B_Athena_Pickaxe_Generic_C_PlayCQCPickaxeEnemyAudio, CallFunc_BreakHitResult_Location) == 0x0000F0, "Member 'B_Athena_Pickaxe_Generic_C_PlayCQCPickaxeEnemyAudio::CallFunc_BreakHitResult_Location' has a wrong offset!");
static_assert(offsetof(B_Athena_Pickaxe_Generic_C_PlayCQCPickaxeEnemyAudio, CallFunc_BreakHitResult_ImpactPoint) == 0x000108, "Member 'B_Athena_Pickaxe_Generic_C_PlayCQCPickaxeEnemyAudio::CallFunc_BreakHitResult_ImpactPoint' has a wrong offset!");
static_assert(offsetof(B_Athena_Pickaxe_Generic_C_PlayCQCPickaxeEnemyAudio, CallFunc_BreakHitResult_Normal) == 0x000120, "Member 'B_Athena_Pickaxe_Generic_C_PlayCQCPickaxeEnemyAudio::CallFunc_BreakHitResult_Normal' has a wrong offset!");
static_assert(offsetof(B_Athena_Pickaxe_Generic_C_PlayCQCPickaxeEnemyAudio, CallFunc_BreakHitResult_ImpactNormal) == 0x000138, "Member 'B_Athena_Pickaxe_Generic_C_PlayCQCPickaxeEnemyAudio::CallFunc_BreakHitResult_ImpactNormal' has a wrong offset!");
static_assert(offsetof(B_Athena_Pickaxe_Generic_C_PlayCQCPickaxeEnemyAudio, CallFunc_BreakHitResult_PhysMat) == 0x000150, "Member 'B_Athena_Pickaxe_Generic_C_PlayCQCPickaxeEnemyAudio::CallFunc_BreakHitResult_PhysMat' has a wrong offset!");
static_assert(offsetof(B_Athena_Pickaxe_Generic_C_PlayCQCPickaxeEnemyAudio, CallFunc_BreakHitResult_HitActor) == 0x000158, "Member 'B_Athena_Pickaxe_Generic_C_PlayCQCPickaxeEnemyAudio::CallFunc_BreakHitResult_HitActor' has a wrong offset!");
static_assert(offsetof(B_Athena_Pickaxe_Generic_C_PlayCQCPickaxeEnemyAudio, CallFunc_BreakHitResult_HitComponent) == 0x000160, "Member 'B_Athena_Pickaxe_Generic_C_PlayCQCPickaxeEnemyAudio::CallFunc_BreakHitResult_HitComponent' has a wrong offset!");
static_assert(offsetof(B_Athena_Pickaxe_Generic_C_PlayCQCPickaxeEnemyAudio, CallFunc_BreakHitResult_HitBoneName) == 0x000168, "Member 'B_Athena_Pickaxe_Generic_C_PlayCQCPickaxeEnemyAudio::CallFunc_BreakHitResult_HitBoneName' has a wrong offset!");
static_assert(offsetof(B_Athena_Pickaxe_Generic_C_PlayCQCPickaxeEnemyAudio, CallFunc_BreakHitResult_BoneName) == 0x00016C, "Member 'B_Athena_Pickaxe_Generic_C_PlayCQCPickaxeEnemyAudio::CallFunc_BreakHitResult_BoneName' has a wrong offset!");
static_assert(offsetof(B_Athena_Pickaxe_Generic_C_PlayCQCPickaxeEnemyAudio, CallFunc_BreakHitResult_HitItem) == 0x000170, "Member 'B_Athena_Pickaxe_Generic_C_PlayCQCPickaxeEnemyAudio::CallFunc_BreakHitResult_HitItem' has a wrong offset!");
static_assert(offsetof(B_Athena_Pickaxe_Generic_C_PlayCQCPickaxeEnemyAudio, CallFunc_BreakHitResult_ElementIndex) == 0x000174, "Member 'B_Athena_Pickaxe_Generic_C_PlayCQCPickaxeEnemyAudio::CallFunc_BreakHitResult_ElementIndex' has a wrong offset!");
static_assert(offsetof(B_Athena_Pickaxe_Generic_C_PlayCQCPickaxeEnemyAudio, CallFunc_BreakHitResult_FaceIndex) == 0x000178, "Member 'B_Athena_Pickaxe_Generic_C_PlayCQCPickaxeEnemyAudio::CallFunc_BreakHitResult_FaceIndex' has a wrong offset!");
static_assert(offsetof(B_Athena_Pickaxe_Generic_C_PlayCQCPickaxeEnemyAudio, CallFunc_BreakHitResult_TraceStart) == 0x000180, "Member 'B_Athena_Pickaxe_Generic_C_PlayCQCPickaxeEnemyAudio::CallFunc_BreakHitResult_TraceStart' has a wrong offset!");
static_assert(offsetof(B_Athena_Pickaxe_Generic_C_PlayCQCPickaxeEnemyAudio, CallFunc_BreakHitResult_TraceEnd) == 0x000198, "Member 'B_Athena_Pickaxe_Generic_C_PlayCQCPickaxeEnemyAudio::CallFunc_BreakHitResult_TraceEnd' has a wrong offset!");
static_assert(offsetof(B_Athena_Pickaxe_Generic_C_PlayCQCPickaxeEnemyAudio, CallFunc_GetInstigator_ReturnValue) == 0x0001B0, "Member 'B_Athena_Pickaxe_Generic_C_PlayCQCPickaxeEnemyAudio::CallFunc_GetInstigator_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_Athena_Pickaxe_Generic_C_PlayCQCPickaxeEnemyAudio, K2Node_DynamicCast_AsBuilding_Actor) == 0x0001B8, "Member 'B_Athena_Pickaxe_Generic_C_PlayCQCPickaxeEnemyAudio::K2Node_DynamicCast_AsBuilding_Actor' has a wrong offset!");
static_assert(offsetof(B_Athena_Pickaxe_Generic_C_PlayCQCPickaxeEnemyAudio, K2Node_DynamicCast_bSuccess) == 0x0001C0, "Member 'B_Athena_Pickaxe_Generic_C_PlayCQCPickaxeEnemyAudio::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(B_Athena_Pickaxe_Generic_C_PlayCQCPickaxeEnemyAudio, K2Node_DynamicCast_AsFort_Pawn) == 0x0001C8, "Member 'B_Athena_Pickaxe_Generic_C_PlayCQCPickaxeEnemyAudio::K2Node_DynamicCast_AsFort_Pawn' has a wrong offset!");
static_assert(offsetof(B_Athena_Pickaxe_Generic_C_PlayCQCPickaxeEnemyAudio, K2Node_DynamicCast_bSuccess_1) == 0x0001D0, "Member 'B_Athena_Pickaxe_Generic_C_PlayCQCPickaxeEnemyAudio::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(B_Athena_Pickaxe_Generic_C_PlayCQCPickaxeEnemyAudio, CallFunc_GetLocalViewingPlayerController_ReturnValue) == 0x0001D8, "Member 'B_Athena_Pickaxe_Generic_C_PlayCQCPickaxeEnemyAudio::CallFunc_GetLocalViewingPlayerController_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_Athena_Pickaxe_Generic_C_PlayCQCPickaxeEnemyAudio, CallFunc_IsValid_ReturnValue) == 0x0001E0, "Member 'B_Athena_Pickaxe_Generic_C_PlayCQCPickaxeEnemyAudio::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_Athena_Pickaxe_Generic_C_PlayCQCPickaxeEnemyAudio, CallFunc_GetActorTeam_ReturnValue) == 0x0001E1, "Member 'B_Athena_Pickaxe_Generic_C_PlayCQCPickaxeEnemyAudio::CallFunc_GetActorTeam_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_Athena_Pickaxe_Generic_C_PlayCQCPickaxeEnemyAudio, CallFunc_GetTeamAffiliationToLocalPlayer_ReturnValue) == 0x0001E2, "Member 'B_Athena_Pickaxe_Generic_C_PlayCQCPickaxeEnemyAudio::CallFunc_GetTeamAffiliationToLocalPlayer_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_Athena_Pickaxe_Generic_C_PlayCQCPickaxeEnemyAudio, K2Node_SwitchEnum_CmpSuccess) == 0x0001E3, "Member 'B_Athena_Pickaxe_Generic_C_PlayCQCPickaxeEnemyAudio::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");

struct B_Athena_Pickaxe_Generic_C_SetActiveAlterationIdleParticles final
{
public:
	bool                                          Active;
	bool                                          Reset;
	bool                                          CallFunc_IsDedicatedServer_ReturnValue;
	bool                                          CallFunc_IsValid_ReturnValue;
};
static_assert(alignof(B_Athena_Pickaxe_Generic_C_SetActiveAlterationIdleParticles) == 0x000001, "Wrong alignment on B_Athena_Pickaxe_Generic_C_SetActiveAlterationIdleParticles");
static_assert(sizeof(B_Athena_Pickaxe_Generic_C_SetActiveAlterationIdleParticles) == 0x000004, "Wrong size on B_Athena_Pickaxe_Generic_C_SetActiveAlterationIdleParticles");
static_assert(offsetof(B_Athena_Pickaxe_Generic_C_SetActiveAlterationIdleParticles, Active) == 0x000000, "Member 'B_Athena_Pickaxe_Generic_C_SetActiveAlterationIdleParticles::Active' has a wrong offset!");
static_assert(offsetof(B_Athena_Pickaxe_Generic_C_SetActiveAlterationIdleParticles, Reset) == 0x000001, "Member 'B_Athena_Pickaxe_Generic_C_SetActiveAlterationIdleParticles::Reset' has a wrong offset!");
static_assert(offsetof(B_Athena_Pickaxe_Generic_C_SetActiveAlterationIdleParticles, CallFunc_IsDedicatedServer_ReturnValue) == 0x000002, "Member 'B_Athena_Pickaxe_Generic_C_SetActiveAlterationIdleParticles::CallFunc_IsDedicatedServer_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_Athena_Pickaxe_Generic_C_SetActiveAlterationIdleParticles, CallFunc_IsValid_ReturnValue) == 0x000003, "Member 'B_Athena_Pickaxe_Generic_C_SetActiveAlterationIdleParticles::CallFunc_IsValid_ReturnValue' has a wrong offset!");

struct B_Athena_Pickaxe_Generic_C_TODCheck final
{
public:
	EFortDayPhase                                 CurrentDayPhase;
	EFortDayPhase                                 PreviousDayPhase;
	bool                                          bAtCreation;
};
static_assert(alignof(B_Athena_Pickaxe_Generic_C_TODCheck) == 0x000001, "Wrong alignment on B_Athena_Pickaxe_Generic_C_TODCheck");
static_assert(sizeof(B_Athena_Pickaxe_Generic_C_TODCheck) == 0x000003, "Wrong size on B_Athena_Pickaxe_Generic_C_TODCheck");
static_assert(offsetof(B_Athena_Pickaxe_Generic_C_TODCheck, CurrentDayPhase) == 0x000000, "Member 'B_Athena_Pickaxe_Generic_C_TODCheck::CurrentDayPhase' has a wrong offset!");
static_assert(offsetof(B_Athena_Pickaxe_Generic_C_TODCheck, PreviousDayPhase) == 0x000001, "Member 'B_Athena_Pickaxe_Generic_C_TODCheck::PreviousDayPhase' has a wrong offset!");
static_assert(offsetof(B_Athena_Pickaxe_Generic_C_TODCheck, bAtCreation) == 0x000002, "Member 'B_Athena_Pickaxe_Generic_C_TODCheck::bAtCreation' has a wrong offset!");

struct B_Athena_Pickaxe_Generic_C_UnbindSwingAnimTrailEvents final
{
public:
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_1;
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_2;
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_3;
	class APawn*                                  CallFunc_GetInstigator_ReturnValue;
	TDelegate<void(bool bActive)>                 K2Node_CreateDelegate_OutputDelegate_4;
	uint8                                         Pad_44[0x4];
	class APlayerPawn_Generic_C*                  K2Node_DynamicCast_AsPlayer_Pawn_Generic;
	bool                                          K2Node_DynamicCast_bSuccess;
	uint8                                         Pad_51[0x3];
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_5;
	TDelegate<void(bool bActive)>                 K2Node_CreateDelegate_OutputDelegate_6;
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_7;
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_8;
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_9;
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_10;
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_11;
	class APawn*                                  CallFunc_GetInstigator_ReturnValue_1;
	class APlayerPawn_Athena_C*                   K2Node_DynamicCast_AsPlayer_Pawn_Athena;
	bool                                          K2Node_DynamicCast_bSuccess_1;
};
static_assert(alignof(B_Athena_Pickaxe_Generic_C_UnbindSwingAnimTrailEvents) == 0x000008, "Wrong alignment on B_Athena_Pickaxe_Generic_C_UnbindSwingAnimTrailEvents");
static_assert(sizeof(B_Athena_Pickaxe_Generic_C_UnbindSwingAnimTrailEvents) == 0x0000C0, "Wrong size on B_Athena_Pickaxe_Generic_C_UnbindSwingAnimTrailEvents");
static_assert(offsetof(B_Athena_Pickaxe_Generic_C_UnbindSwingAnimTrailEvents, K2Node_CreateDelegate_OutputDelegate) == 0x000000, "Member 'B_Athena_Pickaxe_Generic_C_UnbindSwingAnimTrailEvents::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(B_Athena_Pickaxe_Generic_C_UnbindSwingAnimTrailEvents, K2Node_CreateDelegate_OutputDelegate_1) == 0x00000C, "Member 'B_Athena_Pickaxe_Generic_C_UnbindSwingAnimTrailEvents::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(B_Athena_Pickaxe_Generic_C_UnbindSwingAnimTrailEvents, K2Node_CreateDelegate_OutputDelegate_2) == 0x000018, "Member 'B_Athena_Pickaxe_Generic_C_UnbindSwingAnimTrailEvents::K2Node_CreateDelegate_OutputDelegate_2' has a wrong offset!");
static_assert(offsetof(B_Athena_Pickaxe_Generic_C_UnbindSwingAnimTrailEvents, K2Node_CreateDelegate_OutputDelegate_3) == 0x000024, "Member 'B_Athena_Pickaxe_Generic_C_UnbindSwingAnimTrailEvents::K2Node_CreateDelegate_OutputDelegate_3' has a wrong offset!");
static_assert(offsetof(B_Athena_Pickaxe_Generic_C_UnbindSwingAnimTrailEvents, CallFunc_GetInstigator_ReturnValue) == 0x000030, "Member 'B_Athena_Pickaxe_Generic_C_UnbindSwingAnimTrailEvents::CallFunc_GetInstigator_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_Athena_Pickaxe_Generic_C_UnbindSwingAnimTrailEvents, K2Node_CreateDelegate_OutputDelegate_4) == 0x000038, "Member 'B_Athena_Pickaxe_Generic_C_UnbindSwingAnimTrailEvents::K2Node_CreateDelegate_OutputDelegate_4' has a wrong offset!");
static_assert(offsetof(B_Athena_Pickaxe_Generic_C_UnbindSwingAnimTrailEvents, K2Node_DynamicCast_AsPlayer_Pawn_Generic) == 0x000048, "Member 'B_Athena_Pickaxe_Generic_C_UnbindSwingAnimTrailEvents::K2Node_DynamicCast_AsPlayer_Pawn_Generic' has a wrong offset!");
static_assert(offsetof(B_Athena_Pickaxe_Generic_C_UnbindSwingAnimTrailEvents, K2Node_DynamicCast_bSuccess) == 0x000050, "Member 'B_Athena_Pickaxe_Generic_C_UnbindSwingAnimTrailEvents::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(B_Athena_Pickaxe_Generic_C_UnbindSwingAnimTrailEvents, K2Node_CreateDelegate_OutputDelegate_5) == 0x000054, "Member 'B_Athena_Pickaxe_Generic_C_UnbindSwingAnimTrailEvents::K2Node_CreateDelegate_OutputDelegate_5' has a wrong offset!");
static_assert(offsetof(B_Athena_Pickaxe_Generic_C_UnbindSwingAnimTrailEvents, K2Node_CreateDelegate_OutputDelegate_6) == 0x000060, "Member 'B_Athena_Pickaxe_Generic_C_UnbindSwingAnimTrailEvents::K2Node_CreateDelegate_OutputDelegate_6' has a wrong offset!");
static_assert(offsetof(B_Athena_Pickaxe_Generic_C_UnbindSwingAnimTrailEvents, K2Node_CreateDelegate_OutputDelegate_7) == 0x00006C, "Member 'B_Athena_Pickaxe_Generic_C_UnbindSwingAnimTrailEvents::K2Node_CreateDelegate_OutputDelegate_7' has a wrong offset!");
static_assert(offsetof(B_Athena_Pickaxe_Generic_C_UnbindSwingAnimTrailEvents, K2Node_CreateDelegate_OutputDelegate_8) == 0x000078, "Member 'B_Athena_Pickaxe_Generic_C_UnbindSwingAnimTrailEvents::K2Node_CreateDelegate_OutputDelegate_8' has a wrong offset!");
static_assert(offsetof(B_Athena_Pickaxe_Generic_C_UnbindSwingAnimTrailEvents, K2Node_CreateDelegate_OutputDelegate_9) == 0x000084, "Member 'B_Athena_Pickaxe_Generic_C_UnbindSwingAnimTrailEvents::K2Node_CreateDelegate_OutputDelegate_9' has a wrong offset!");
static_assert(offsetof(B_Athena_Pickaxe_Generic_C_UnbindSwingAnimTrailEvents, K2Node_CreateDelegate_OutputDelegate_10) == 0x000090, "Member 'B_Athena_Pickaxe_Generic_C_UnbindSwingAnimTrailEvents::K2Node_CreateDelegate_OutputDelegate_10' has a wrong offset!");
static_assert(offsetof(B_Athena_Pickaxe_Generic_C_UnbindSwingAnimTrailEvents, K2Node_CreateDelegate_OutputDelegate_11) == 0x00009C, "Member 'B_Athena_Pickaxe_Generic_C_UnbindSwingAnimTrailEvents::K2Node_CreateDelegate_OutputDelegate_11' has a wrong offset!");
static_assert(offsetof(B_Athena_Pickaxe_Generic_C_UnbindSwingAnimTrailEvents, CallFunc_GetInstigator_ReturnValue_1) == 0x0000A8, "Member 'B_Athena_Pickaxe_Generic_C_UnbindSwingAnimTrailEvents::CallFunc_GetInstigator_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(B_Athena_Pickaxe_Generic_C_UnbindSwingAnimTrailEvents, K2Node_DynamicCast_AsPlayer_Pawn_Athena) == 0x0000B0, "Member 'B_Athena_Pickaxe_Generic_C_UnbindSwingAnimTrailEvents::K2Node_DynamicCast_AsPlayer_Pawn_Athena' has a wrong offset!");
static_assert(offsetof(B_Athena_Pickaxe_Generic_C_UnbindSwingAnimTrailEvents, K2Node_DynamicCast_bSuccess_1) == 0x0000B8, "Member 'B_Athena_Pickaxe_Generic_C_UnbindSwingAnimTrailEvents::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");

struct B_Athena_Pickaxe_Generic_C_UpdateBasedOnKills final
{
public:
	int32                                         Watched_Kills;
};
static_assert(alignof(B_Athena_Pickaxe_Generic_C_UpdateBasedOnKills) == 0x000004, "Wrong alignment on B_Athena_Pickaxe_Generic_C_UpdateBasedOnKills");
static_assert(sizeof(B_Athena_Pickaxe_Generic_C_UpdateBasedOnKills) == 0x000004, "Wrong size on B_Athena_Pickaxe_Generic_C_UpdateBasedOnKills");
static_assert(offsetof(B_Athena_Pickaxe_Generic_C_UpdateBasedOnKills, Watched_Kills) == 0x000000, "Member 'B_Athena_Pickaxe_Generic_C_UpdateBasedOnKills::Watched_Kills' has a wrong offset!");

struct B_Athena_Pickaxe_Generic_C_Vehicle_Passenger final
{
public:
	class AFortPlayerPawn*                        FortPlayerPawn;
	class AActor*                                 NewVehicle;
	class AActor*                                 OldVehicle;
};
static_assert(alignof(B_Athena_Pickaxe_Generic_C_Vehicle_Passenger) == 0x000008, "Wrong alignment on B_Athena_Pickaxe_Generic_C_Vehicle_Passenger");
static_assert(sizeof(B_Athena_Pickaxe_Generic_C_Vehicle_Passenger) == 0x000018, "Wrong size on B_Athena_Pickaxe_Generic_C_Vehicle_Passenger");
static_assert(offsetof(B_Athena_Pickaxe_Generic_C_Vehicle_Passenger, FortPlayerPawn) == 0x000000, "Member 'B_Athena_Pickaxe_Generic_C_Vehicle_Passenger::FortPlayerPawn' has a wrong offset!");
static_assert(offsetof(B_Athena_Pickaxe_Generic_C_Vehicle_Passenger, NewVehicle) == 0x000008, "Member 'B_Athena_Pickaxe_Generic_C_Vehicle_Passenger::NewVehicle' has a wrong offset!");
static_assert(offsetof(B_Athena_Pickaxe_Generic_C_Vehicle_Passenger, OldVehicle) == 0x000010, "Member 'B_Athena_Pickaxe_Generic_C_Vehicle_Passenger::OldVehicle' has a wrong offset!");

}
