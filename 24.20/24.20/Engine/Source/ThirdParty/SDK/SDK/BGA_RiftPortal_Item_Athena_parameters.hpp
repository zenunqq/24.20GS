#pragma once

#include "Basic.hpp"

#include "GameplayAbilities_structs.hpp"
#include "FortniteGame_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "GameplayTags_structs.hpp"
#include "Engine_structs.hpp"

namespace SDK::Params
{

struct BGA_RiftPortal_Item_Athena_C_BndEvt__Capsule_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature final
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
static_assert(alignof(BGA_RiftPortal_Item_Athena_C_BndEvt__Capsule_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature) == 0x000008, "Wrong alignment on BGA_RiftPortal_Item_Athena_C_BndEvt__Capsule_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature");
static_assert(sizeof(BGA_RiftPortal_Item_Athena_C_BndEvt__Capsule_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature) == 0x000100, "Wrong size on BGA_RiftPortal_Item_Athena_C_BndEvt__Capsule_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature");
static_assert(offsetof(BGA_RiftPortal_Item_Athena_C_BndEvt__Capsule_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature, OverlappedComponent) == 0x000000, "Member 'BGA_RiftPortal_Item_Athena_C_BndEvt__Capsule_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature::OverlappedComponent' has a wrong offset!");
static_assert(offsetof(BGA_RiftPortal_Item_Athena_C_BndEvt__Capsule_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature, OtherActor) == 0x000008, "Member 'BGA_RiftPortal_Item_Athena_C_BndEvt__Capsule_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature::OtherActor' has a wrong offset!");
static_assert(offsetof(BGA_RiftPortal_Item_Athena_C_BndEvt__Capsule_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature, OtherComp) == 0x000010, "Member 'BGA_RiftPortal_Item_Athena_C_BndEvt__Capsule_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature::OtherComp' has a wrong offset!");
static_assert(offsetof(BGA_RiftPortal_Item_Athena_C_BndEvt__Capsule_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature, OtherBodyIndex) == 0x000018, "Member 'BGA_RiftPortal_Item_Athena_C_BndEvt__Capsule_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature::OtherBodyIndex' has a wrong offset!");
static_assert(offsetof(BGA_RiftPortal_Item_Athena_C_BndEvt__Capsule_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature, bFromSweep) == 0x00001C, "Member 'BGA_RiftPortal_Item_Athena_C_BndEvt__Capsule_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature::bFromSweep' has a wrong offset!");
static_assert(offsetof(BGA_RiftPortal_Item_Athena_C_BndEvt__Capsule_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature, SweepResult) == 0x000020, "Member 'BGA_RiftPortal_Item_Athena_C_BndEvt__Capsule_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature::SweepResult' has a wrong offset!");

struct BGA_RiftPortal_Item_Athena_C_BndEvt__Capsule_K2Node_ComponentBoundEvent_3_ComponentEndOverlapSignature__DelegateSignature final
{
public:
	class UPrimitiveComponent*                    OverlappedComponent;
	class AActor*                                 OtherActor;
	class UPrimitiveComponent*                    OtherComp;
	int32                                         OtherBodyIndex;
};
static_assert(alignof(BGA_RiftPortal_Item_Athena_C_BndEvt__Capsule_K2Node_ComponentBoundEvent_3_ComponentEndOverlapSignature__DelegateSignature) == 0x000008, "Wrong alignment on BGA_RiftPortal_Item_Athena_C_BndEvt__Capsule_K2Node_ComponentBoundEvent_3_ComponentEndOverlapSignature__DelegateSignature");
static_assert(sizeof(BGA_RiftPortal_Item_Athena_C_BndEvt__Capsule_K2Node_ComponentBoundEvent_3_ComponentEndOverlapSignature__DelegateSignature) == 0x000020, "Wrong size on BGA_RiftPortal_Item_Athena_C_BndEvt__Capsule_K2Node_ComponentBoundEvent_3_ComponentEndOverlapSignature__DelegateSignature");
static_assert(offsetof(BGA_RiftPortal_Item_Athena_C_BndEvt__Capsule_K2Node_ComponentBoundEvent_3_ComponentEndOverlapSignature__DelegateSignature, OverlappedComponent) == 0x000000, "Member 'BGA_RiftPortal_Item_Athena_C_BndEvt__Capsule_K2Node_ComponentBoundEvent_3_ComponentEndOverlapSignature__DelegateSignature::OverlappedComponent' has a wrong offset!");
static_assert(offsetof(BGA_RiftPortal_Item_Athena_C_BndEvt__Capsule_K2Node_ComponentBoundEvent_3_ComponentEndOverlapSignature__DelegateSignature, OtherActor) == 0x000008, "Member 'BGA_RiftPortal_Item_Athena_C_BndEvt__Capsule_K2Node_ComponentBoundEvent_3_ComponentEndOverlapSignature__DelegateSignature::OtherActor' has a wrong offset!");
static_assert(offsetof(BGA_RiftPortal_Item_Athena_C_BndEvt__Capsule_K2Node_ComponentBoundEvent_3_ComponentEndOverlapSignature__DelegateSignature, OtherComp) == 0x000010, "Member 'BGA_RiftPortal_Item_Athena_C_BndEvt__Capsule_K2Node_ComponentBoundEvent_3_ComponentEndOverlapSignature__DelegateSignature::OtherComp' has a wrong offset!");
static_assert(offsetof(BGA_RiftPortal_Item_Athena_C_BndEvt__Capsule_K2Node_ComponentBoundEvent_3_ComponentEndOverlapSignature__DelegateSignature, OtherBodyIndex) == 0x000018, "Member 'BGA_RiftPortal_Item_Athena_C_BndEvt__Capsule_K2Node_ComponentBoundEvent_3_ComponentEndOverlapSignature__DelegateSignature::OtherBodyIndex' has a wrong offset!");

struct BGA_RiftPortal_Item_Athena_C_BndEvt__OverlapCapsule_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature final
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
static_assert(alignof(BGA_RiftPortal_Item_Athena_C_BndEvt__OverlapCapsule_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature) == 0x000008, "Wrong alignment on BGA_RiftPortal_Item_Athena_C_BndEvt__OverlapCapsule_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature");
static_assert(sizeof(BGA_RiftPortal_Item_Athena_C_BndEvt__OverlapCapsule_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature) == 0x000100, "Wrong size on BGA_RiftPortal_Item_Athena_C_BndEvt__OverlapCapsule_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature");
static_assert(offsetof(BGA_RiftPortal_Item_Athena_C_BndEvt__OverlapCapsule_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature, OverlappedComponent) == 0x000000, "Member 'BGA_RiftPortal_Item_Athena_C_BndEvt__OverlapCapsule_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature::OverlappedComponent' has a wrong offset!");
static_assert(offsetof(BGA_RiftPortal_Item_Athena_C_BndEvt__OverlapCapsule_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature, OtherActor) == 0x000008, "Member 'BGA_RiftPortal_Item_Athena_C_BndEvt__OverlapCapsule_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature::OtherActor' has a wrong offset!");
static_assert(offsetof(BGA_RiftPortal_Item_Athena_C_BndEvt__OverlapCapsule_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature, OtherComp) == 0x000010, "Member 'BGA_RiftPortal_Item_Athena_C_BndEvt__OverlapCapsule_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature::OtherComp' has a wrong offset!");
static_assert(offsetof(BGA_RiftPortal_Item_Athena_C_BndEvt__OverlapCapsule_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature, OtherBodyIndex) == 0x000018, "Member 'BGA_RiftPortal_Item_Athena_C_BndEvt__OverlapCapsule_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature::OtherBodyIndex' has a wrong offset!");
static_assert(offsetof(BGA_RiftPortal_Item_Athena_C_BndEvt__OverlapCapsule_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature, bFromSweep) == 0x00001C, "Member 'BGA_RiftPortal_Item_Athena_C_BndEvt__OverlapCapsule_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature::bFromSweep' has a wrong offset!");
static_assert(offsetof(BGA_RiftPortal_Item_Athena_C_BndEvt__OverlapCapsule_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature, SweepResult) == 0x000020, "Member 'BGA_RiftPortal_Item_Athena_C_BndEvt__OverlapCapsule_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature::SweepResult' has a wrong offset!");

struct BGA_RiftPortal_Item_Athena_C_CheckForRiftLocUpdate final
{
public:
	class AController*                            InController;
};
static_assert(alignof(BGA_RiftPortal_Item_Athena_C_CheckForRiftLocUpdate) == 0x000008, "Wrong alignment on BGA_RiftPortal_Item_Athena_C_CheckForRiftLocUpdate");
static_assert(sizeof(BGA_RiftPortal_Item_Athena_C_CheckForRiftLocUpdate) == 0x000008, "Wrong size on BGA_RiftPortal_Item_Athena_C_CheckForRiftLocUpdate");
static_assert(offsetof(BGA_RiftPortal_Item_Athena_C_CheckForRiftLocUpdate, InController) == 0x000000, "Member 'BGA_RiftPortal_Item_Athena_C_CheckForRiftLocUpdate::InController' has a wrong offset!");

struct BGA_RiftPortal_Item_Athena_C_EjectFromTurret final
{
public:
	class AFortPlayerPawn*                        PlayerPawn_0;
	TScriptInterface<class IFortVehicleInterface> CallFunc_GetVehicleUInterface_ReturnValue;
	class UAbilitySystemComponent*                CallFunc_GetAbilitySystemComponent_ReturnValue;
	bool                                          CallFunc_CanTeleport_ReturnValue;
	uint8                                         Pad_21[0x3];
	int32                                         CallFunc_RemoveActiveEffectsWithGrantedTags_ReturnValue;
	class UObject*                                CallFunc_Conv_InterfaceToObject_ReturnValue;
	bool                                          CallFunc_IsInVehicle_ReturnValue;
	bool                                          CallFunc_IsValid_ReturnValue;
};
static_assert(alignof(BGA_RiftPortal_Item_Athena_C_EjectFromTurret) == 0x000008, "Wrong alignment on BGA_RiftPortal_Item_Athena_C_EjectFromTurret");
static_assert(sizeof(BGA_RiftPortal_Item_Athena_C_EjectFromTurret) == 0x000038, "Wrong size on BGA_RiftPortal_Item_Athena_C_EjectFromTurret");
static_assert(offsetof(BGA_RiftPortal_Item_Athena_C_EjectFromTurret, PlayerPawn_0) == 0x000000, "Member 'BGA_RiftPortal_Item_Athena_C_EjectFromTurret::PlayerPawn_0' has a wrong offset!");
static_assert(offsetof(BGA_RiftPortal_Item_Athena_C_EjectFromTurret, CallFunc_GetVehicleUInterface_ReturnValue) == 0x000008, "Member 'BGA_RiftPortal_Item_Athena_C_EjectFromTurret::CallFunc_GetVehicleUInterface_ReturnValue' has a wrong offset!");
static_assert(offsetof(BGA_RiftPortal_Item_Athena_C_EjectFromTurret, CallFunc_GetAbilitySystemComponent_ReturnValue) == 0x000018, "Member 'BGA_RiftPortal_Item_Athena_C_EjectFromTurret::CallFunc_GetAbilitySystemComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(BGA_RiftPortal_Item_Athena_C_EjectFromTurret, CallFunc_CanTeleport_ReturnValue) == 0x000020, "Member 'BGA_RiftPortal_Item_Athena_C_EjectFromTurret::CallFunc_CanTeleport_ReturnValue' has a wrong offset!");
static_assert(offsetof(BGA_RiftPortal_Item_Athena_C_EjectFromTurret, CallFunc_RemoveActiveEffectsWithGrantedTags_ReturnValue) == 0x000024, "Member 'BGA_RiftPortal_Item_Athena_C_EjectFromTurret::CallFunc_RemoveActiveEffectsWithGrantedTags_ReturnValue' has a wrong offset!");
static_assert(offsetof(BGA_RiftPortal_Item_Athena_C_EjectFromTurret, CallFunc_Conv_InterfaceToObject_ReturnValue) == 0x000028, "Member 'BGA_RiftPortal_Item_Athena_C_EjectFromTurret::CallFunc_Conv_InterfaceToObject_ReturnValue' has a wrong offset!");
static_assert(offsetof(BGA_RiftPortal_Item_Athena_C_EjectFromTurret, CallFunc_IsInVehicle_ReturnValue) == 0x000030, "Member 'BGA_RiftPortal_Item_Athena_C_EjectFromTurret::CallFunc_IsInVehicle_ReturnValue' has a wrong offset!");
static_assert(offsetof(BGA_RiftPortal_Item_Athena_C_EjectFromTurret, CallFunc_IsValid_ReturnValue) == 0x000031, "Member 'BGA_RiftPortal_Item_Athena_C_EjectFromTurret::CallFunc_IsValid_ReturnValue' has a wrong offset!");

struct BGA_RiftPortal_Item_Athena_C_ExecuteUbergraph_BGA_RiftPortal_Item_Athena final
{
public:
	int32                                         EntryPoint;
	uint8                                         Pad_4[0x4];
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue;
	class UPrimitiveComponent*                    K2Node_ComponentBoundEvent_OverlappedComponent_2;
	class AActor*                                 K2Node_ComponentBoundEvent_OtherActor_2;
	class UPrimitiveComponent*                    K2Node_ComponentBoundEvent_OtherComp_2;
	int32                                         K2Node_ComponentBoundEvent_OtherBodyIndex_2;
	bool                                          K2Node_ComponentBoundEvent_bFromSweep_1;
	uint8                                         Pad_3D[0x3];
	struct FHitResult                             K2Node_ComponentBoundEvent_SweepResult_1;
	class UPrimitiveComponent*                    K2Node_ComponentBoundEvent_OverlappedComponent_1;
	class AActor*                                 K2Node_ComponentBoundEvent_OtherActor_1;
	class UPrimitiveComponent*                    K2Node_ComponentBoundEvent_OtherComp_1;
	int32                                         K2Node_ComponentBoundEvent_OtherBodyIndex_1;
	bool                                          K2Node_ComponentBoundEvent_bFromSweep;
	uint8                                         Pad_13D[0x3];
	struct FHitResult                             K2Node_ComponentBoundEvent_SweepResult;
	class AFortPlayerPawn*                        K2Node_DynamicCast_AsFort_Player_Pawn;
	bool                                          K2Node_DynamicCast_bSuccess;
	bool                                          CallFunc_IsIgnoredActor_ReturnValue;
	uint8                                         Pad_22A[0x6];
	class UPrimitiveComponent*                    K2Node_ComponentBoundEvent_OverlappedComponent;
	class AActor*                                 K2Node_ComponentBoundEvent_OtherActor;
	class UPrimitiveComponent*                    K2Node_ComponentBoundEvent_OtherComp;
	int32                                         K2Node_ComponentBoundEvent_OtherBodyIndex;
	uint8                                         Pad_24C[0x4];
	class AFortPlayerPawnAthena*                  K2Node_DynamicCast_AsFort_Player_Pawn_Athena;
	bool                                          K2Node_DynamicCast_bSuccess_1;
	uint8                                         Pad_259[0x7];
	TArray<class AActor*>                         CallFunc_GetOverlappingActors_OverlappingActors;
	int32                                         CallFunc_Array_Length_ReturnValue;
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue;
	uint8                                         Pad_275[0x3];
	float                                         CallFunc_GetValueAtLevel_ReturnValue;
	uint8                                         Pad_27C[0x4];
	double                                        CallFunc_Add_DoubleDouble_ReturnValue;
	struct FVector                                K2Node_CustomEvent_PlayerLocation;
	class APlayerState*                           K2Node_CustomEvent_RequestingPlayerState;
	class UParticleSystemComponent*               CallFunc_SpawnEmitterAtLocation_ReturnValue;
	double                                        CallFunc_RandomFloatInRange_ReturnValue;
	struct FRotator                               CallFunc_MakeRotator_ReturnValue;
	bool                                          CallFunc_HasAuthority_ReturnValue;
	bool                                          CallFunc_IsPlaying_ReturnValue;
	uint8                                         Pad_2D2[0x6];
	class AActor*                                 K2Node_Event_Actor;
	bool                                          CallFunc_IsValid_ReturnValue;
	bool                                          CallFunc_HasAuthority_ReturnValue_1;
	uint8                                         Pad_2E2[0x6];
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue_1;
	double                                        CallFunc_BreakVector_X;
	double                                        CallFunc_BreakVector_Y;
	double                                        CallFunc_BreakVector_Z;
	float                                         CallFunc_GetValueAtLevel_ReturnValue_1;
	uint8                                         Pad_31C[0x4];
	struct FVector                                CallFunc_Add_VectorVector_ReturnValue;
	struct FVector                                CallFunc_MakeVector_ReturnValue;
	class UParticleSystemComponent*               CallFunc_SpawnEmitterAtLocation_ReturnValue_1;
	bool                                          CallFunc_HasAuthority_ReturnValue_2;
	uint8                                         Pad_359[0x3];
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;
	float                                         CallFunc_GetValueAtLevel_ReturnValue_2;
	uint8                                         Pad_36C[0x4];
	class UAudioComponent*                        CallFunc_SpawnSoundAtLocation_ReturnValue;
	struct FTimerHandle                           CallFunc_K2_SetTimerDelegate_ReturnValue;
	class AActor*                                 K2Node_Event_VehicleActor;
	TScriptInterface<class IFortVehicleInterface> K2Node_DynamicCast_AsFort_Vehicle_Interface;
	bool                                          K2Node_DynamicCast_bSuccess_2;
	uint8                                         Pad_399[0x7];
	class AGameStateBase*                         CallFunc_GetGameState_ReturnValue;
	class FName                                   K2Node_CustomEvent_PlaylistName;
	uint8                                         Pad_3AC[0x4];
	struct FGameplayTagContainer                  K2Node_CustomEvent_PlaylistContextTags;
	class AFortGameStateAthena*                   K2Node_DynamicCast_AsFort_Game_State_Athena;
	bool                                          K2Node_DynamicCast_bSuccess_3;
	bool                                          CallFunc_Athena_CheckCreativeMode_CanCompleteQuest;
	bool                                          CallFunc_Athena_CheckCreativeMode_CanCompleteQuest_1;
	bool                                          CallFunc_IsValid_ReturnValue_1;
	uint8                                         Pad_3DC[0x4];
	class AController*                            CallFunc_GetController_ReturnValue;
	bool                                          CallFunc_IsDedicatedServer_ReturnValue;
	uint8                                         Pad_3E9[0x7];
	class AFortPlayerPawnAthena*                  K2Node_CustomEvent_FortPlayerPawnAthena;
	struct FRotator                               CallFunc_K2_GetActorRotation_ReturnValue;
	bool                                          CallFunc_Is_Flying_NewParam;
	uint8                                         Pad_411[0x7];
	TArray<class AActor*>                         CallFunc_GetOverlappingActors_OverlappingActors_1;
	bool                                          CallFunc_Array_Contains_ReturnValue;
	bool                                          CallFunc_Is_Flying_NewParam_1;
	uint8                                         Pad_42A[0x2];
	int32                                         Temp_int_Loop_Counter_Variable;
	int32                                         Temp_int_Loop_Counter_Variable_1;
	int32                                         CallFunc_Add_IntInt_ReturnValue;
	int32                                         CallFunc_Add_IntInt_ReturnValue_1;
	int32                                         Temp_int_Array_Index_Variable;
	class AActor*                                 CallFunc_GetVehicleActorPtr_ReturnValue;
	bool                                          CallFunc_CanTeleport_ReturnValue;
	uint8                                         Pad_449[0x7];
	struct FVector                                CallFunc_GetActorBounds_Origin;
	struct FVector                                CallFunc_GetActorBounds_BoxExtent;
	struct FVector                                CallFunc_Multiply_VectorVector_ReturnValue;
	TArray<class AFortPlayerPawn*>                CallFunc_BP_GetAllPassengers_ReturnValue;
	TArray<class AFortPlayerPawn*>                CallFunc_BP_GetAllPassengers_ReturnValue_1;
	class AFortPlayerPawn*                        CallFunc_Array_Get_Item;
	class AFortPlayerPawn*                        CallFunc_Array_Get_Item_1;
	bool                                          CallFunc_IsValid_ReturnValue_2;
	uint8                                         Pad_4C9[0x7];
	class AController*                            CallFunc_GetController_ReturnValue_1;
	int32                                         CallFunc_Array_Length_ReturnValue_1;
	bool                                          CallFunc_Greater_IntInt_ReturnValue;
	uint8                                         Pad_4DD[0x3];
	int32                                         CallFunc_Array_Length_ReturnValue_2;
	uint8                                         Pad_4E4[0x4];
	struct FVector                                CallFunc_GetOwnerLocation_ReturnValue;
	bool                                          CallFunc_Less_IntInt_ReturnValue;
	uint8                                         Pad_501[0x7];
	class AFortPlayerPawn*                        CallFunc_GetDriver_ReturnValue;
	bool                                          CallFunc_IsValid_ReturnValue_3;
	uint8                                         Pad_511[0x7];
	class AController*                            CallFunc_GetController_ReturnValue_2;
	class UObject*                                CallFunc_Conv_InterfaceToObject_ReturnValue;
	bool                                          CallFunc_IsValid_ReturnValue_4;
	uint8                                         Pad_529[0x7];
	class APlayerState*                           Temp_object_Variable;
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue_2;
	struct FActiveGameplayEffectHandle            CallFunc_ApplyGlobalEnvironmentGameplayEffectToActor_ReturnValue;
	bool                                          Temp_bool_Variable;
	uint8                                         Pad_559[0x3];
	int32                                         Temp_int_Array_Index_Variable_1;
	class APlayerState*                           K2Node_Select_Default;
	class AActor*                                 K2Node_CustomEvent_TargetActor;
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_1;
	uint8                                         Pad_57C[0x4];
	struct FTimerHandle                           CallFunc_K2_SetTimerDelegate_ReturnValue_1;
	struct FVector                                CallFunc_Add_VectorVector_ReturnValue_1;
	struct FVector                                K2Node_CustomEvent_IncrementValue;
	struct FVector                                CallFunc_Add_VectorVector_ReturnValue_2;
	struct FVector                                CallFunc_MakeVector_ReturnValue_1;
	struct FVector                                CallFunc_Add_VectorVector_ReturnValue_3;
	TArray<class AFortPlayerPawn*>                CallFunc_BP_GetAllPassengers_ReturnValue_2;
	int32                                         CallFunc_Array_Length_ReturnValue_3;
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue;
	uint8                                         Pad_615[0x3];
	TArray<class AFortPlayerPawn*>                CallFunc_BP_GetAllPassengers_ReturnValue_3;
	TDelegate<void(class FName PlaylistName, struct FGameplayTagContainer& PlaylistContextTags)> K2Node_CreateDelegate_OutputDelegate_2;
	uint8                                         Pad_634[0x4];
	class AFortPlayerPawn*                        CallFunc_Array_Get_Item_2;
	int32                                         CallFunc_Array_Length_ReturnValue_4;
	bool                                          CallFunc_Less_IntInt_ReturnValue_1;
	uint8                                         Pad_645[0x3];
	class AFortPlayerPawn*                        K2Node_DynamicCast_AsFort_Player_Pawn_1;
	bool                                          K2Node_DynamicCast_bSuccess_4;
	uint8                                         Pad_651[0x7];
	TScriptInterface<class IFortVehicleInterface> K2Node_DynamicCast_AsFort_Vehicle_Interface_1;
	bool                                          K2Node_DynamicCast_bSuccess_5;
	uint8                                         Pad_669[0x3];
	struct FActiveGameplayEffectHandle            CallFunc_ApplyGlobalEnvironmentGameplayEffectToActor_ReturnValue_1;
	bool                                          CallFunc_IsInVehicle_ReturnValue;
	uint8                                         Pad_675[0x3];
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue_3;
	bool                                          CallFunc_IsInsideHidingProp_ReturnValue;
	uint8                                         Pad_691[0x7];
	class AFortAIPawn*                            K2Node_DynamicCast_AsFort_AIPawn;
	bool                                          K2Node_DynamicCast_bSuccess_6;
	bool                                          CallFunc_Set_Contains_ReturnValue;
	bool                                          CallFunc_BooleanOR_ReturnValue;
	bool                                          CallFunc_TeleportAIPawn_ReturnValue;
	bool                                          CallFunc_IsPlayerAttachedToAIPawn_Result;
	uint8                                         Pad_6A5[0x3];
	class AFortPlayerPawn*                        CallFunc_IsPlayerAttachedToAIPawn_AttachedPlayerPawn;
	bool                                          CallFunc_IsValid_ReturnValue_5;
	uint8                                         Pad_6B1[0x3];
	TDelegate<void(class AFortPlayerPawnAthena* FortPlayerPawnAthena)> K2Node_CreateDelegate_OutputDelegate_3;
	double                                        CallFunc_SelectFloat_ReturnValue;
	double                                        CallFunc_Multiply_DoubleDouble_ReturnValue;
	class AActor*                                 K2Node_CustomEvent_Target_Actor;
	struct FRotator                               CallFunc_MakeRotator_ReturnValue_1;
	struct FHitResult                             CallFunc_K2_SetRelativeRotation_SweepHitResult;
	double                                        CallFunc_Add_DoubleDouble_A_ImplicitCast;
	float                                         CallFunc_Delay_Duration_ImplicitCast;
	float                                         CallFunc_MakeRotator_Yaw_ImplicitCast;
	double                                        CallFunc_MakeVector_Z_ImplicitCast;
	double                                        CallFunc_Multiply_DoubleDouble_A_ImplicitCast;
	double                                        CallFunc_SelectFloat_B_ImplicitCast;
	float                                         CallFunc_SetScalarParameterValueOnMaterials_ParameterValue_ImplicitCast;
	float                                         CallFunc_MakeRotator_Roll_ImplicitCast;
};
static_assert(alignof(BGA_RiftPortal_Item_Athena_C_ExecuteUbergraph_BGA_RiftPortal_Item_Athena) == 0x000008, "Wrong alignment on BGA_RiftPortal_Item_Athena_C_ExecuteUbergraph_BGA_RiftPortal_Item_Athena");
static_assert(sizeof(BGA_RiftPortal_Item_Athena_C_ExecuteUbergraph_BGA_RiftPortal_Item_Athena) == 0x000800, "Wrong size on BGA_RiftPortal_Item_Athena_C_ExecuteUbergraph_BGA_RiftPortal_Item_Athena");
static_assert(offsetof(BGA_RiftPortal_Item_Athena_C_ExecuteUbergraph_BGA_RiftPortal_Item_Athena, EntryPoint) == 0x000000, "Member 'BGA_RiftPortal_Item_Athena_C_ExecuteUbergraph_BGA_RiftPortal_Item_Athena::EntryPoint' has a wrong offset!");
static_assert(offsetof(BGA_RiftPortal_Item_Athena_C_ExecuteUbergraph_BGA_RiftPortal_Item_Athena, CallFunc_K2_GetActorLocation_ReturnValue) == 0x000008, "Member 'BGA_RiftPortal_Item_Athena_C_ExecuteUbergraph_BGA_RiftPortal_Item_Athena::CallFunc_K2_GetActorLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BGA_RiftPortal_Item_Athena_C_ExecuteUbergraph_BGA_RiftPortal_Item_Athena, K2Node_ComponentBoundEvent_OverlappedComponent_2) == 0x000020, "Member 'BGA_RiftPortal_Item_Athena_C_ExecuteUbergraph_BGA_RiftPortal_Item_Athena::K2Node_ComponentBoundEvent_OverlappedComponent_2' has a wrong offset!");
static_assert(offsetof(BGA_RiftPortal_Item_Athena_C_ExecuteUbergraph_BGA_RiftPortal_Item_Athena, K2Node_ComponentBoundEvent_OtherActor_2) == 0x000028, "Member 'BGA_RiftPortal_Item_Athena_C_ExecuteUbergraph_BGA_RiftPortal_Item_Athena::K2Node_ComponentBoundEvent_OtherActor_2' has a wrong offset!");
static_assert(offsetof(BGA_RiftPortal_Item_Athena_C_ExecuteUbergraph_BGA_RiftPortal_Item_Athena, K2Node_ComponentBoundEvent_OtherComp_2) == 0x000030, "Member 'BGA_RiftPortal_Item_Athena_C_ExecuteUbergraph_BGA_RiftPortal_Item_Athena::K2Node_ComponentBoundEvent_OtherComp_2' has a wrong offset!");
static_assert(offsetof(BGA_RiftPortal_Item_Athena_C_ExecuteUbergraph_BGA_RiftPortal_Item_Athena, K2Node_ComponentBoundEvent_OtherBodyIndex_2) == 0x000038, "Member 'BGA_RiftPortal_Item_Athena_C_ExecuteUbergraph_BGA_RiftPortal_Item_Athena::K2Node_ComponentBoundEvent_OtherBodyIndex_2' has a wrong offset!");
static_assert(offsetof(BGA_RiftPortal_Item_Athena_C_ExecuteUbergraph_BGA_RiftPortal_Item_Athena, K2Node_ComponentBoundEvent_bFromSweep_1) == 0x00003C, "Member 'BGA_RiftPortal_Item_Athena_C_ExecuteUbergraph_BGA_RiftPortal_Item_Athena::K2Node_ComponentBoundEvent_bFromSweep_1' has a wrong offset!");
static_assert(offsetof(BGA_RiftPortal_Item_Athena_C_ExecuteUbergraph_BGA_RiftPortal_Item_Athena, K2Node_ComponentBoundEvent_SweepResult_1) == 0x000040, "Member 'BGA_RiftPortal_Item_Athena_C_ExecuteUbergraph_BGA_RiftPortal_Item_Athena::K2Node_ComponentBoundEvent_SweepResult_1' has a wrong offset!");
static_assert(offsetof(BGA_RiftPortal_Item_Athena_C_ExecuteUbergraph_BGA_RiftPortal_Item_Athena, K2Node_ComponentBoundEvent_OverlappedComponent_1) == 0x000120, "Member 'BGA_RiftPortal_Item_Athena_C_ExecuteUbergraph_BGA_RiftPortal_Item_Athena::K2Node_ComponentBoundEvent_OverlappedComponent_1' has a wrong offset!");
static_assert(offsetof(BGA_RiftPortal_Item_Athena_C_ExecuteUbergraph_BGA_RiftPortal_Item_Athena, K2Node_ComponentBoundEvent_OtherActor_1) == 0x000128, "Member 'BGA_RiftPortal_Item_Athena_C_ExecuteUbergraph_BGA_RiftPortal_Item_Athena::K2Node_ComponentBoundEvent_OtherActor_1' has a wrong offset!");
static_assert(offsetof(BGA_RiftPortal_Item_Athena_C_ExecuteUbergraph_BGA_RiftPortal_Item_Athena, K2Node_ComponentBoundEvent_OtherComp_1) == 0x000130, "Member 'BGA_RiftPortal_Item_Athena_C_ExecuteUbergraph_BGA_RiftPortal_Item_Athena::K2Node_ComponentBoundEvent_OtherComp_1' has a wrong offset!");
static_assert(offsetof(BGA_RiftPortal_Item_Athena_C_ExecuteUbergraph_BGA_RiftPortal_Item_Athena, K2Node_ComponentBoundEvent_OtherBodyIndex_1) == 0x000138, "Member 'BGA_RiftPortal_Item_Athena_C_ExecuteUbergraph_BGA_RiftPortal_Item_Athena::K2Node_ComponentBoundEvent_OtherBodyIndex_1' has a wrong offset!");
static_assert(offsetof(BGA_RiftPortal_Item_Athena_C_ExecuteUbergraph_BGA_RiftPortal_Item_Athena, K2Node_ComponentBoundEvent_bFromSweep) == 0x00013C, "Member 'BGA_RiftPortal_Item_Athena_C_ExecuteUbergraph_BGA_RiftPortal_Item_Athena::K2Node_ComponentBoundEvent_bFromSweep' has a wrong offset!");
static_assert(offsetof(BGA_RiftPortal_Item_Athena_C_ExecuteUbergraph_BGA_RiftPortal_Item_Athena, K2Node_ComponentBoundEvent_SweepResult) == 0x000140, "Member 'BGA_RiftPortal_Item_Athena_C_ExecuteUbergraph_BGA_RiftPortal_Item_Athena::K2Node_ComponentBoundEvent_SweepResult' has a wrong offset!");
static_assert(offsetof(BGA_RiftPortal_Item_Athena_C_ExecuteUbergraph_BGA_RiftPortal_Item_Athena, K2Node_DynamicCast_AsFort_Player_Pawn) == 0x000220, "Member 'BGA_RiftPortal_Item_Athena_C_ExecuteUbergraph_BGA_RiftPortal_Item_Athena::K2Node_DynamicCast_AsFort_Player_Pawn' has a wrong offset!");
static_assert(offsetof(BGA_RiftPortal_Item_Athena_C_ExecuteUbergraph_BGA_RiftPortal_Item_Athena, K2Node_DynamicCast_bSuccess) == 0x000228, "Member 'BGA_RiftPortal_Item_Athena_C_ExecuteUbergraph_BGA_RiftPortal_Item_Athena::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BGA_RiftPortal_Item_Athena_C_ExecuteUbergraph_BGA_RiftPortal_Item_Athena, CallFunc_IsIgnoredActor_ReturnValue) == 0x000229, "Member 'BGA_RiftPortal_Item_Athena_C_ExecuteUbergraph_BGA_RiftPortal_Item_Athena::CallFunc_IsIgnoredActor_ReturnValue' has a wrong offset!");
static_assert(offsetof(BGA_RiftPortal_Item_Athena_C_ExecuteUbergraph_BGA_RiftPortal_Item_Athena, K2Node_ComponentBoundEvent_OverlappedComponent) == 0x000230, "Member 'BGA_RiftPortal_Item_Athena_C_ExecuteUbergraph_BGA_RiftPortal_Item_Athena::K2Node_ComponentBoundEvent_OverlappedComponent' has a wrong offset!");
static_assert(offsetof(BGA_RiftPortal_Item_Athena_C_ExecuteUbergraph_BGA_RiftPortal_Item_Athena, K2Node_ComponentBoundEvent_OtherActor) == 0x000238, "Member 'BGA_RiftPortal_Item_Athena_C_ExecuteUbergraph_BGA_RiftPortal_Item_Athena::K2Node_ComponentBoundEvent_OtherActor' has a wrong offset!");
static_assert(offsetof(BGA_RiftPortal_Item_Athena_C_ExecuteUbergraph_BGA_RiftPortal_Item_Athena, K2Node_ComponentBoundEvent_OtherComp) == 0x000240, "Member 'BGA_RiftPortal_Item_Athena_C_ExecuteUbergraph_BGA_RiftPortal_Item_Athena::K2Node_ComponentBoundEvent_OtherComp' has a wrong offset!");
static_assert(offsetof(BGA_RiftPortal_Item_Athena_C_ExecuteUbergraph_BGA_RiftPortal_Item_Athena, K2Node_ComponentBoundEvent_OtherBodyIndex) == 0x000248, "Member 'BGA_RiftPortal_Item_Athena_C_ExecuteUbergraph_BGA_RiftPortal_Item_Athena::K2Node_ComponentBoundEvent_OtherBodyIndex' has a wrong offset!");
static_assert(offsetof(BGA_RiftPortal_Item_Athena_C_ExecuteUbergraph_BGA_RiftPortal_Item_Athena, K2Node_DynamicCast_AsFort_Player_Pawn_Athena) == 0x000250, "Member 'BGA_RiftPortal_Item_Athena_C_ExecuteUbergraph_BGA_RiftPortal_Item_Athena::K2Node_DynamicCast_AsFort_Player_Pawn_Athena' has a wrong offset!");
static_assert(offsetof(BGA_RiftPortal_Item_Athena_C_ExecuteUbergraph_BGA_RiftPortal_Item_Athena, K2Node_DynamicCast_bSuccess_1) == 0x000258, "Member 'BGA_RiftPortal_Item_Athena_C_ExecuteUbergraph_BGA_RiftPortal_Item_Athena::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(BGA_RiftPortal_Item_Athena_C_ExecuteUbergraph_BGA_RiftPortal_Item_Athena, CallFunc_GetOverlappingActors_OverlappingActors) == 0x000260, "Member 'BGA_RiftPortal_Item_Athena_C_ExecuteUbergraph_BGA_RiftPortal_Item_Athena::CallFunc_GetOverlappingActors_OverlappingActors' has a wrong offset!");
static_assert(offsetof(BGA_RiftPortal_Item_Athena_C_ExecuteUbergraph_BGA_RiftPortal_Item_Athena, CallFunc_Array_Length_ReturnValue) == 0x000270, "Member 'BGA_RiftPortal_Item_Athena_C_ExecuteUbergraph_BGA_RiftPortal_Item_Athena::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(BGA_RiftPortal_Item_Athena_C_ExecuteUbergraph_BGA_RiftPortal_Item_Athena, CallFunc_LessEqual_IntInt_ReturnValue) == 0x000274, "Member 'BGA_RiftPortal_Item_Athena_C_ExecuteUbergraph_BGA_RiftPortal_Item_Athena::CallFunc_LessEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BGA_RiftPortal_Item_Athena_C_ExecuteUbergraph_BGA_RiftPortal_Item_Athena, CallFunc_GetValueAtLevel_ReturnValue) == 0x000278, "Member 'BGA_RiftPortal_Item_Athena_C_ExecuteUbergraph_BGA_RiftPortal_Item_Athena::CallFunc_GetValueAtLevel_ReturnValue' has a wrong offset!");
static_assert(offsetof(BGA_RiftPortal_Item_Athena_C_ExecuteUbergraph_BGA_RiftPortal_Item_Athena, CallFunc_Add_DoubleDouble_ReturnValue) == 0x000280, "Member 'BGA_RiftPortal_Item_Athena_C_ExecuteUbergraph_BGA_RiftPortal_Item_Athena::CallFunc_Add_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(BGA_RiftPortal_Item_Athena_C_ExecuteUbergraph_BGA_RiftPortal_Item_Athena, K2Node_CustomEvent_PlayerLocation) == 0x000288, "Member 'BGA_RiftPortal_Item_Athena_C_ExecuteUbergraph_BGA_RiftPortal_Item_Athena::K2Node_CustomEvent_PlayerLocation' has a wrong offset!");
static_assert(offsetof(BGA_RiftPortal_Item_Athena_C_ExecuteUbergraph_BGA_RiftPortal_Item_Athena, K2Node_CustomEvent_RequestingPlayerState) == 0x0002A0, "Member 'BGA_RiftPortal_Item_Athena_C_ExecuteUbergraph_BGA_RiftPortal_Item_Athena::K2Node_CustomEvent_RequestingPlayerState' has a wrong offset!");
static_assert(offsetof(BGA_RiftPortal_Item_Athena_C_ExecuteUbergraph_BGA_RiftPortal_Item_Athena, CallFunc_SpawnEmitterAtLocation_ReturnValue) == 0x0002A8, "Member 'BGA_RiftPortal_Item_Athena_C_ExecuteUbergraph_BGA_RiftPortal_Item_Athena::CallFunc_SpawnEmitterAtLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BGA_RiftPortal_Item_Athena_C_ExecuteUbergraph_BGA_RiftPortal_Item_Athena, CallFunc_RandomFloatInRange_ReturnValue) == 0x0002B0, "Member 'BGA_RiftPortal_Item_Athena_C_ExecuteUbergraph_BGA_RiftPortal_Item_Athena::CallFunc_RandomFloatInRange_ReturnValue' has a wrong offset!");
static_assert(offsetof(BGA_RiftPortal_Item_Athena_C_ExecuteUbergraph_BGA_RiftPortal_Item_Athena, CallFunc_MakeRotator_ReturnValue) == 0x0002B8, "Member 'BGA_RiftPortal_Item_Athena_C_ExecuteUbergraph_BGA_RiftPortal_Item_Athena::CallFunc_MakeRotator_ReturnValue' has a wrong offset!");
static_assert(offsetof(BGA_RiftPortal_Item_Athena_C_ExecuteUbergraph_BGA_RiftPortal_Item_Athena, CallFunc_HasAuthority_ReturnValue) == 0x0002D0, "Member 'BGA_RiftPortal_Item_Athena_C_ExecuteUbergraph_BGA_RiftPortal_Item_Athena::CallFunc_HasAuthority_ReturnValue' has a wrong offset!");
static_assert(offsetof(BGA_RiftPortal_Item_Athena_C_ExecuteUbergraph_BGA_RiftPortal_Item_Athena, CallFunc_IsPlaying_ReturnValue) == 0x0002D1, "Member 'BGA_RiftPortal_Item_Athena_C_ExecuteUbergraph_BGA_RiftPortal_Item_Athena::CallFunc_IsPlaying_ReturnValue' has a wrong offset!");
static_assert(offsetof(BGA_RiftPortal_Item_Athena_C_ExecuteUbergraph_BGA_RiftPortal_Item_Athena, K2Node_Event_Actor) == 0x0002D8, "Member 'BGA_RiftPortal_Item_Athena_C_ExecuteUbergraph_BGA_RiftPortal_Item_Athena::K2Node_Event_Actor' has a wrong offset!");
static_assert(offsetof(BGA_RiftPortal_Item_Athena_C_ExecuteUbergraph_BGA_RiftPortal_Item_Athena, CallFunc_IsValid_ReturnValue) == 0x0002E0, "Member 'BGA_RiftPortal_Item_Athena_C_ExecuteUbergraph_BGA_RiftPortal_Item_Athena::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BGA_RiftPortal_Item_Athena_C_ExecuteUbergraph_BGA_RiftPortal_Item_Athena, CallFunc_HasAuthority_ReturnValue_1) == 0x0002E1, "Member 'BGA_RiftPortal_Item_Athena_C_ExecuteUbergraph_BGA_RiftPortal_Item_Athena::CallFunc_HasAuthority_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BGA_RiftPortal_Item_Athena_C_ExecuteUbergraph_BGA_RiftPortal_Item_Athena, CallFunc_K2_GetActorLocation_ReturnValue_1) == 0x0002E8, "Member 'BGA_RiftPortal_Item_Athena_C_ExecuteUbergraph_BGA_RiftPortal_Item_Athena::CallFunc_K2_GetActorLocation_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BGA_RiftPortal_Item_Athena_C_ExecuteUbergraph_BGA_RiftPortal_Item_Athena, CallFunc_BreakVector_X) == 0x000300, "Member 'BGA_RiftPortal_Item_Athena_C_ExecuteUbergraph_BGA_RiftPortal_Item_Athena::CallFunc_BreakVector_X' has a wrong offset!");
static_assert(offsetof(BGA_RiftPortal_Item_Athena_C_ExecuteUbergraph_BGA_RiftPortal_Item_Athena, CallFunc_BreakVector_Y) == 0x000308, "Member 'BGA_RiftPortal_Item_Athena_C_ExecuteUbergraph_BGA_RiftPortal_Item_Athena::CallFunc_BreakVector_Y' has a wrong offset!");
static_assert(offsetof(BGA_RiftPortal_Item_Athena_C_ExecuteUbergraph_BGA_RiftPortal_Item_Athena, CallFunc_BreakVector_Z) == 0x000310, "Member 'BGA_RiftPortal_Item_Athena_C_ExecuteUbergraph_BGA_RiftPortal_Item_Athena::CallFunc_BreakVector_Z' has a wrong offset!");
static_assert(offsetof(BGA_RiftPortal_Item_Athena_C_ExecuteUbergraph_BGA_RiftPortal_Item_Athena, CallFunc_GetValueAtLevel_ReturnValue_1) == 0x000318, "Member 'BGA_RiftPortal_Item_Athena_C_ExecuteUbergraph_BGA_RiftPortal_Item_Athena::CallFunc_GetValueAtLevel_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BGA_RiftPortal_Item_Athena_C_ExecuteUbergraph_BGA_RiftPortal_Item_Athena, CallFunc_Add_VectorVector_ReturnValue) == 0x000320, "Member 'BGA_RiftPortal_Item_Athena_C_ExecuteUbergraph_BGA_RiftPortal_Item_Athena::CallFunc_Add_VectorVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(BGA_RiftPortal_Item_Athena_C_ExecuteUbergraph_BGA_RiftPortal_Item_Athena, CallFunc_MakeVector_ReturnValue) == 0x000338, "Member 'BGA_RiftPortal_Item_Athena_C_ExecuteUbergraph_BGA_RiftPortal_Item_Athena::CallFunc_MakeVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(BGA_RiftPortal_Item_Athena_C_ExecuteUbergraph_BGA_RiftPortal_Item_Athena, CallFunc_SpawnEmitterAtLocation_ReturnValue_1) == 0x000350, "Member 'BGA_RiftPortal_Item_Athena_C_ExecuteUbergraph_BGA_RiftPortal_Item_Athena::CallFunc_SpawnEmitterAtLocation_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BGA_RiftPortal_Item_Athena_C_ExecuteUbergraph_BGA_RiftPortal_Item_Athena, CallFunc_HasAuthority_ReturnValue_2) == 0x000358, "Member 'BGA_RiftPortal_Item_Athena_C_ExecuteUbergraph_BGA_RiftPortal_Item_Athena::CallFunc_HasAuthority_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BGA_RiftPortal_Item_Athena_C_ExecuteUbergraph_BGA_RiftPortal_Item_Athena, K2Node_CreateDelegate_OutputDelegate) == 0x00035C, "Member 'BGA_RiftPortal_Item_Athena_C_ExecuteUbergraph_BGA_RiftPortal_Item_Athena::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(BGA_RiftPortal_Item_Athena_C_ExecuteUbergraph_BGA_RiftPortal_Item_Athena, CallFunc_GetValueAtLevel_ReturnValue_2) == 0x000368, "Member 'BGA_RiftPortal_Item_Athena_C_ExecuteUbergraph_BGA_RiftPortal_Item_Athena::CallFunc_GetValueAtLevel_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BGA_RiftPortal_Item_Athena_C_ExecuteUbergraph_BGA_RiftPortal_Item_Athena, CallFunc_SpawnSoundAtLocation_ReturnValue) == 0x000370, "Member 'BGA_RiftPortal_Item_Athena_C_ExecuteUbergraph_BGA_RiftPortal_Item_Athena::CallFunc_SpawnSoundAtLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BGA_RiftPortal_Item_Athena_C_ExecuteUbergraph_BGA_RiftPortal_Item_Athena, CallFunc_K2_SetTimerDelegate_ReturnValue) == 0x000378, "Member 'BGA_RiftPortal_Item_Athena_C_ExecuteUbergraph_BGA_RiftPortal_Item_Athena::CallFunc_K2_SetTimerDelegate_ReturnValue' has a wrong offset!");
static_assert(offsetof(BGA_RiftPortal_Item_Athena_C_ExecuteUbergraph_BGA_RiftPortal_Item_Athena, K2Node_Event_VehicleActor) == 0x000380, "Member 'BGA_RiftPortal_Item_Athena_C_ExecuteUbergraph_BGA_RiftPortal_Item_Athena::K2Node_Event_VehicleActor' has a wrong offset!");
static_assert(offsetof(BGA_RiftPortal_Item_Athena_C_ExecuteUbergraph_BGA_RiftPortal_Item_Athena, K2Node_DynamicCast_AsFort_Vehicle_Interface) == 0x000388, "Member 'BGA_RiftPortal_Item_Athena_C_ExecuteUbergraph_BGA_RiftPortal_Item_Athena::K2Node_DynamicCast_AsFort_Vehicle_Interface' has a wrong offset!");
static_assert(offsetof(BGA_RiftPortal_Item_Athena_C_ExecuteUbergraph_BGA_RiftPortal_Item_Athena, K2Node_DynamicCast_bSuccess_2) == 0x000398, "Member 'BGA_RiftPortal_Item_Athena_C_ExecuteUbergraph_BGA_RiftPortal_Item_Athena::K2Node_DynamicCast_bSuccess_2' has a wrong offset!");
static_assert(offsetof(BGA_RiftPortal_Item_Athena_C_ExecuteUbergraph_BGA_RiftPortal_Item_Athena, CallFunc_GetGameState_ReturnValue) == 0x0003A0, "Member 'BGA_RiftPortal_Item_Athena_C_ExecuteUbergraph_BGA_RiftPortal_Item_Athena::CallFunc_GetGameState_ReturnValue' has a wrong offset!");
static_assert(offsetof(BGA_RiftPortal_Item_Athena_C_ExecuteUbergraph_BGA_RiftPortal_Item_Athena, K2Node_CustomEvent_PlaylistName) == 0x0003A8, "Member 'BGA_RiftPortal_Item_Athena_C_ExecuteUbergraph_BGA_RiftPortal_Item_Athena::K2Node_CustomEvent_PlaylistName' has a wrong offset!");
static_assert(offsetof(BGA_RiftPortal_Item_Athena_C_ExecuteUbergraph_BGA_RiftPortal_Item_Athena, K2Node_CustomEvent_PlaylistContextTags) == 0x0003B0, "Member 'BGA_RiftPortal_Item_Athena_C_ExecuteUbergraph_BGA_RiftPortal_Item_Athena::K2Node_CustomEvent_PlaylistContextTags' has a wrong offset!");
static_assert(offsetof(BGA_RiftPortal_Item_Athena_C_ExecuteUbergraph_BGA_RiftPortal_Item_Athena, K2Node_DynamicCast_AsFort_Game_State_Athena) == 0x0003D0, "Member 'BGA_RiftPortal_Item_Athena_C_ExecuteUbergraph_BGA_RiftPortal_Item_Athena::K2Node_DynamicCast_AsFort_Game_State_Athena' has a wrong offset!");
static_assert(offsetof(BGA_RiftPortal_Item_Athena_C_ExecuteUbergraph_BGA_RiftPortal_Item_Athena, K2Node_DynamicCast_bSuccess_3) == 0x0003D8, "Member 'BGA_RiftPortal_Item_Athena_C_ExecuteUbergraph_BGA_RiftPortal_Item_Athena::K2Node_DynamicCast_bSuccess_3' has a wrong offset!");
static_assert(offsetof(BGA_RiftPortal_Item_Athena_C_ExecuteUbergraph_BGA_RiftPortal_Item_Athena, CallFunc_Athena_CheckCreativeMode_CanCompleteQuest) == 0x0003D9, "Member 'BGA_RiftPortal_Item_Athena_C_ExecuteUbergraph_BGA_RiftPortal_Item_Athena::CallFunc_Athena_CheckCreativeMode_CanCompleteQuest' has a wrong offset!");
static_assert(offsetof(BGA_RiftPortal_Item_Athena_C_ExecuteUbergraph_BGA_RiftPortal_Item_Athena, CallFunc_Athena_CheckCreativeMode_CanCompleteQuest_1) == 0x0003DA, "Member 'BGA_RiftPortal_Item_Athena_C_ExecuteUbergraph_BGA_RiftPortal_Item_Athena::CallFunc_Athena_CheckCreativeMode_CanCompleteQuest_1' has a wrong offset!");
static_assert(offsetof(BGA_RiftPortal_Item_Athena_C_ExecuteUbergraph_BGA_RiftPortal_Item_Athena, CallFunc_IsValid_ReturnValue_1) == 0x0003DB, "Member 'BGA_RiftPortal_Item_Athena_C_ExecuteUbergraph_BGA_RiftPortal_Item_Athena::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BGA_RiftPortal_Item_Athena_C_ExecuteUbergraph_BGA_RiftPortal_Item_Athena, CallFunc_GetController_ReturnValue) == 0x0003E0, "Member 'BGA_RiftPortal_Item_Athena_C_ExecuteUbergraph_BGA_RiftPortal_Item_Athena::CallFunc_GetController_ReturnValue' has a wrong offset!");
static_assert(offsetof(BGA_RiftPortal_Item_Athena_C_ExecuteUbergraph_BGA_RiftPortal_Item_Athena, CallFunc_IsDedicatedServer_ReturnValue) == 0x0003E8, "Member 'BGA_RiftPortal_Item_Athena_C_ExecuteUbergraph_BGA_RiftPortal_Item_Athena::CallFunc_IsDedicatedServer_ReturnValue' has a wrong offset!");
static_assert(offsetof(BGA_RiftPortal_Item_Athena_C_ExecuteUbergraph_BGA_RiftPortal_Item_Athena, K2Node_CustomEvent_FortPlayerPawnAthena) == 0x0003F0, "Member 'BGA_RiftPortal_Item_Athena_C_ExecuteUbergraph_BGA_RiftPortal_Item_Athena::K2Node_CustomEvent_FortPlayerPawnAthena' has a wrong offset!");
static_assert(offsetof(BGA_RiftPortal_Item_Athena_C_ExecuteUbergraph_BGA_RiftPortal_Item_Athena, CallFunc_K2_GetActorRotation_ReturnValue) == 0x0003F8, "Member 'BGA_RiftPortal_Item_Athena_C_ExecuteUbergraph_BGA_RiftPortal_Item_Athena::CallFunc_K2_GetActorRotation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BGA_RiftPortal_Item_Athena_C_ExecuteUbergraph_BGA_RiftPortal_Item_Athena, CallFunc_Is_Flying_NewParam) == 0x000410, "Member 'BGA_RiftPortal_Item_Athena_C_ExecuteUbergraph_BGA_RiftPortal_Item_Athena::CallFunc_Is_Flying_NewParam' has a wrong offset!");
static_assert(offsetof(BGA_RiftPortal_Item_Athena_C_ExecuteUbergraph_BGA_RiftPortal_Item_Athena, CallFunc_GetOverlappingActors_OverlappingActors_1) == 0x000418, "Member 'BGA_RiftPortal_Item_Athena_C_ExecuteUbergraph_BGA_RiftPortal_Item_Athena::CallFunc_GetOverlappingActors_OverlappingActors_1' has a wrong offset!");
static_assert(offsetof(BGA_RiftPortal_Item_Athena_C_ExecuteUbergraph_BGA_RiftPortal_Item_Athena, CallFunc_Array_Contains_ReturnValue) == 0x000428, "Member 'BGA_RiftPortal_Item_Athena_C_ExecuteUbergraph_BGA_RiftPortal_Item_Athena::CallFunc_Array_Contains_ReturnValue' has a wrong offset!");
static_assert(offsetof(BGA_RiftPortal_Item_Athena_C_ExecuteUbergraph_BGA_RiftPortal_Item_Athena, CallFunc_Is_Flying_NewParam_1) == 0x000429, "Member 'BGA_RiftPortal_Item_Athena_C_ExecuteUbergraph_BGA_RiftPortal_Item_Athena::CallFunc_Is_Flying_NewParam_1' has a wrong offset!");
static_assert(offsetof(BGA_RiftPortal_Item_Athena_C_ExecuteUbergraph_BGA_RiftPortal_Item_Athena, Temp_int_Loop_Counter_Variable) == 0x00042C, "Member 'BGA_RiftPortal_Item_Athena_C_ExecuteUbergraph_BGA_RiftPortal_Item_Athena::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(BGA_RiftPortal_Item_Athena_C_ExecuteUbergraph_BGA_RiftPortal_Item_Athena, Temp_int_Loop_Counter_Variable_1) == 0x000430, "Member 'BGA_RiftPortal_Item_Athena_C_ExecuteUbergraph_BGA_RiftPortal_Item_Athena::Temp_int_Loop_Counter_Variable_1' has a wrong offset!");
static_assert(offsetof(BGA_RiftPortal_Item_Athena_C_ExecuteUbergraph_BGA_RiftPortal_Item_Athena, CallFunc_Add_IntInt_ReturnValue) == 0x000434, "Member 'BGA_RiftPortal_Item_Athena_C_ExecuteUbergraph_BGA_RiftPortal_Item_Athena::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BGA_RiftPortal_Item_Athena_C_ExecuteUbergraph_BGA_RiftPortal_Item_Athena, CallFunc_Add_IntInt_ReturnValue_1) == 0x000438, "Member 'BGA_RiftPortal_Item_Athena_C_ExecuteUbergraph_BGA_RiftPortal_Item_Athena::CallFunc_Add_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BGA_RiftPortal_Item_Athena_C_ExecuteUbergraph_BGA_RiftPortal_Item_Athena, Temp_int_Array_Index_Variable) == 0x00043C, "Member 'BGA_RiftPortal_Item_Athena_C_ExecuteUbergraph_BGA_RiftPortal_Item_Athena::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(BGA_RiftPortal_Item_Athena_C_ExecuteUbergraph_BGA_RiftPortal_Item_Athena, CallFunc_GetVehicleActorPtr_ReturnValue) == 0x000440, "Member 'BGA_RiftPortal_Item_Athena_C_ExecuteUbergraph_BGA_RiftPortal_Item_Athena::CallFunc_GetVehicleActorPtr_ReturnValue' has a wrong offset!");
static_assert(offsetof(BGA_RiftPortal_Item_Athena_C_ExecuteUbergraph_BGA_RiftPortal_Item_Athena, CallFunc_CanTeleport_ReturnValue) == 0x000448, "Member 'BGA_RiftPortal_Item_Athena_C_ExecuteUbergraph_BGA_RiftPortal_Item_Athena::CallFunc_CanTeleport_ReturnValue' has a wrong offset!");
static_assert(offsetof(BGA_RiftPortal_Item_Athena_C_ExecuteUbergraph_BGA_RiftPortal_Item_Athena, CallFunc_GetActorBounds_Origin) == 0x000450, "Member 'BGA_RiftPortal_Item_Athena_C_ExecuteUbergraph_BGA_RiftPortal_Item_Athena::CallFunc_GetActorBounds_Origin' has a wrong offset!");
static_assert(offsetof(BGA_RiftPortal_Item_Athena_C_ExecuteUbergraph_BGA_RiftPortal_Item_Athena, CallFunc_GetActorBounds_BoxExtent) == 0x000468, "Member 'BGA_RiftPortal_Item_Athena_C_ExecuteUbergraph_BGA_RiftPortal_Item_Athena::CallFunc_GetActorBounds_BoxExtent' has a wrong offset!");
static_assert(offsetof(BGA_RiftPortal_Item_Athena_C_ExecuteUbergraph_BGA_RiftPortal_Item_Athena, CallFunc_Multiply_VectorVector_ReturnValue) == 0x000480, "Member 'BGA_RiftPortal_Item_Athena_C_ExecuteUbergraph_BGA_RiftPortal_Item_Athena::CallFunc_Multiply_VectorVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(BGA_RiftPortal_Item_Athena_C_ExecuteUbergraph_BGA_RiftPortal_Item_Athena, CallFunc_BP_GetAllPassengers_ReturnValue) == 0x000498, "Member 'BGA_RiftPortal_Item_Athena_C_ExecuteUbergraph_BGA_RiftPortal_Item_Athena::CallFunc_BP_GetAllPassengers_ReturnValue' has a wrong offset!");
static_assert(offsetof(BGA_RiftPortal_Item_Athena_C_ExecuteUbergraph_BGA_RiftPortal_Item_Athena, CallFunc_BP_GetAllPassengers_ReturnValue_1) == 0x0004A8, "Member 'BGA_RiftPortal_Item_Athena_C_ExecuteUbergraph_BGA_RiftPortal_Item_Athena::CallFunc_BP_GetAllPassengers_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BGA_RiftPortal_Item_Athena_C_ExecuteUbergraph_BGA_RiftPortal_Item_Athena, CallFunc_Array_Get_Item) == 0x0004B8, "Member 'BGA_RiftPortal_Item_Athena_C_ExecuteUbergraph_BGA_RiftPortal_Item_Athena::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(BGA_RiftPortal_Item_Athena_C_ExecuteUbergraph_BGA_RiftPortal_Item_Athena, CallFunc_Array_Get_Item_1) == 0x0004C0, "Member 'BGA_RiftPortal_Item_Athena_C_ExecuteUbergraph_BGA_RiftPortal_Item_Athena::CallFunc_Array_Get_Item_1' has a wrong offset!");
static_assert(offsetof(BGA_RiftPortal_Item_Athena_C_ExecuteUbergraph_BGA_RiftPortal_Item_Athena, CallFunc_IsValid_ReturnValue_2) == 0x0004C8, "Member 'BGA_RiftPortal_Item_Athena_C_ExecuteUbergraph_BGA_RiftPortal_Item_Athena::CallFunc_IsValid_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BGA_RiftPortal_Item_Athena_C_ExecuteUbergraph_BGA_RiftPortal_Item_Athena, CallFunc_GetController_ReturnValue_1) == 0x0004D0, "Member 'BGA_RiftPortal_Item_Athena_C_ExecuteUbergraph_BGA_RiftPortal_Item_Athena::CallFunc_GetController_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BGA_RiftPortal_Item_Athena_C_ExecuteUbergraph_BGA_RiftPortal_Item_Athena, CallFunc_Array_Length_ReturnValue_1) == 0x0004D8, "Member 'BGA_RiftPortal_Item_Athena_C_ExecuteUbergraph_BGA_RiftPortal_Item_Athena::CallFunc_Array_Length_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BGA_RiftPortal_Item_Athena_C_ExecuteUbergraph_BGA_RiftPortal_Item_Athena, CallFunc_Greater_IntInt_ReturnValue) == 0x0004DC, "Member 'BGA_RiftPortal_Item_Athena_C_ExecuteUbergraph_BGA_RiftPortal_Item_Athena::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BGA_RiftPortal_Item_Athena_C_ExecuteUbergraph_BGA_RiftPortal_Item_Athena, CallFunc_Array_Length_ReturnValue_2) == 0x0004E0, "Member 'BGA_RiftPortal_Item_Athena_C_ExecuteUbergraph_BGA_RiftPortal_Item_Athena::CallFunc_Array_Length_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BGA_RiftPortal_Item_Athena_C_ExecuteUbergraph_BGA_RiftPortal_Item_Athena, CallFunc_GetOwnerLocation_ReturnValue) == 0x0004E8, "Member 'BGA_RiftPortal_Item_Athena_C_ExecuteUbergraph_BGA_RiftPortal_Item_Athena::CallFunc_GetOwnerLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BGA_RiftPortal_Item_Athena_C_ExecuteUbergraph_BGA_RiftPortal_Item_Athena, CallFunc_Less_IntInt_ReturnValue) == 0x000500, "Member 'BGA_RiftPortal_Item_Athena_C_ExecuteUbergraph_BGA_RiftPortal_Item_Athena::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BGA_RiftPortal_Item_Athena_C_ExecuteUbergraph_BGA_RiftPortal_Item_Athena, CallFunc_GetDriver_ReturnValue) == 0x000508, "Member 'BGA_RiftPortal_Item_Athena_C_ExecuteUbergraph_BGA_RiftPortal_Item_Athena::CallFunc_GetDriver_ReturnValue' has a wrong offset!");
static_assert(offsetof(BGA_RiftPortal_Item_Athena_C_ExecuteUbergraph_BGA_RiftPortal_Item_Athena, CallFunc_IsValid_ReturnValue_3) == 0x000510, "Member 'BGA_RiftPortal_Item_Athena_C_ExecuteUbergraph_BGA_RiftPortal_Item_Athena::CallFunc_IsValid_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(BGA_RiftPortal_Item_Athena_C_ExecuteUbergraph_BGA_RiftPortal_Item_Athena, CallFunc_GetController_ReturnValue_2) == 0x000518, "Member 'BGA_RiftPortal_Item_Athena_C_ExecuteUbergraph_BGA_RiftPortal_Item_Athena::CallFunc_GetController_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BGA_RiftPortal_Item_Athena_C_ExecuteUbergraph_BGA_RiftPortal_Item_Athena, CallFunc_Conv_InterfaceToObject_ReturnValue) == 0x000520, "Member 'BGA_RiftPortal_Item_Athena_C_ExecuteUbergraph_BGA_RiftPortal_Item_Athena::CallFunc_Conv_InterfaceToObject_ReturnValue' has a wrong offset!");
static_assert(offsetof(BGA_RiftPortal_Item_Athena_C_ExecuteUbergraph_BGA_RiftPortal_Item_Athena, CallFunc_IsValid_ReturnValue_4) == 0x000528, "Member 'BGA_RiftPortal_Item_Athena_C_ExecuteUbergraph_BGA_RiftPortal_Item_Athena::CallFunc_IsValid_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(BGA_RiftPortal_Item_Athena_C_ExecuteUbergraph_BGA_RiftPortal_Item_Athena, Temp_object_Variable) == 0x000530, "Member 'BGA_RiftPortal_Item_Athena_C_ExecuteUbergraph_BGA_RiftPortal_Item_Athena::Temp_object_Variable' has a wrong offset!");
static_assert(offsetof(BGA_RiftPortal_Item_Athena_C_ExecuteUbergraph_BGA_RiftPortal_Item_Athena, CallFunc_K2_GetActorLocation_ReturnValue_2) == 0x000538, "Member 'BGA_RiftPortal_Item_Athena_C_ExecuteUbergraph_BGA_RiftPortal_Item_Athena::CallFunc_K2_GetActorLocation_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BGA_RiftPortal_Item_Athena_C_ExecuteUbergraph_BGA_RiftPortal_Item_Athena, CallFunc_ApplyGlobalEnvironmentGameplayEffectToActor_ReturnValue) == 0x000550, "Member 'BGA_RiftPortal_Item_Athena_C_ExecuteUbergraph_BGA_RiftPortal_Item_Athena::CallFunc_ApplyGlobalEnvironmentGameplayEffectToActor_ReturnValue' has a wrong offset!");
static_assert(offsetof(BGA_RiftPortal_Item_Athena_C_ExecuteUbergraph_BGA_RiftPortal_Item_Athena, Temp_bool_Variable) == 0x000558, "Member 'BGA_RiftPortal_Item_Athena_C_ExecuteUbergraph_BGA_RiftPortal_Item_Athena::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(BGA_RiftPortal_Item_Athena_C_ExecuteUbergraph_BGA_RiftPortal_Item_Athena, Temp_int_Array_Index_Variable_1) == 0x00055C, "Member 'BGA_RiftPortal_Item_Athena_C_ExecuteUbergraph_BGA_RiftPortal_Item_Athena::Temp_int_Array_Index_Variable_1' has a wrong offset!");
static_assert(offsetof(BGA_RiftPortal_Item_Athena_C_ExecuteUbergraph_BGA_RiftPortal_Item_Athena, K2Node_Select_Default) == 0x000560, "Member 'BGA_RiftPortal_Item_Athena_C_ExecuteUbergraph_BGA_RiftPortal_Item_Athena::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(BGA_RiftPortal_Item_Athena_C_ExecuteUbergraph_BGA_RiftPortal_Item_Athena, K2Node_CustomEvent_TargetActor) == 0x000568, "Member 'BGA_RiftPortal_Item_Athena_C_ExecuteUbergraph_BGA_RiftPortal_Item_Athena::K2Node_CustomEvent_TargetActor' has a wrong offset!");
static_assert(offsetof(BGA_RiftPortal_Item_Athena_C_ExecuteUbergraph_BGA_RiftPortal_Item_Athena, K2Node_CreateDelegate_OutputDelegate_1) == 0x000570, "Member 'BGA_RiftPortal_Item_Athena_C_ExecuteUbergraph_BGA_RiftPortal_Item_Athena::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(BGA_RiftPortal_Item_Athena_C_ExecuteUbergraph_BGA_RiftPortal_Item_Athena, CallFunc_K2_SetTimerDelegate_ReturnValue_1) == 0x000580, "Member 'BGA_RiftPortal_Item_Athena_C_ExecuteUbergraph_BGA_RiftPortal_Item_Athena::CallFunc_K2_SetTimerDelegate_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BGA_RiftPortal_Item_Athena_C_ExecuteUbergraph_BGA_RiftPortal_Item_Athena, CallFunc_Add_VectorVector_ReturnValue_1) == 0x000588, "Member 'BGA_RiftPortal_Item_Athena_C_ExecuteUbergraph_BGA_RiftPortal_Item_Athena::CallFunc_Add_VectorVector_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BGA_RiftPortal_Item_Athena_C_ExecuteUbergraph_BGA_RiftPortal_Item_Athena, K2Node_CustomEvent_IncrementValue) == 0x0005A0, "Member 'BGA_RiftPortal_Item_Athena_C_ExecuteUbergraph_BGA_RiftPortal_Item_Athena::K2Node_CustomEvent_IncrementValue' has a wrong offset!");
static_assert(offsetof(BGA_RiftPortal_Item_Athena_C_ExecuteUbergraph_BGA_RiftPortal_Item_Athena, CallFunc_Add_VectorVector_ReturnValue_2) == 0x0005B8, "Member 'BGA_RiftPortal_Item_Athena_C_ExecuteUbergraph_BGA_RiftPortal_Item_Athena::CallFunc_Add_VectorVector_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BGA_RiftPortal_Item_Athena_C_ExecuteUbergraph_BGA_RiftPortal_Item_Athena, CallFunc_MakeVector_ReturnValue_1) == 0x0005D0, "Member 'BGA_RiftPortal_Item_Athena_C_ExecuteUbergraph_BGA_RiftPortal_Item_Athena::CallFunc_MakeVector_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BGA_RiftPortal_Item_Athena_C_ExecuteUbergraph_BGA_RiftPortal_Item_Athena, CallFunc_Add_VectorVector_ReturnValue_3) == 0x0005E8, "Member 'BGA_RiftPortal_Item_Athena_C_ExecuteUbergraph_BGA_RiftPortal_Item_Athena::CallFunc_Add_VectorVector_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(BGA_RiftPortal_Item_Athena_C_ExecuteUbergraph_BGA_RiftPortal_Item_Athena, CallFunc_BP_GetAllPassengers_ReturnValue_2) == 0x000600, "Member 'BGA_RiftPortal_Item_Athena_C_ExecuteUbergraph_BGA_RiftPortal_Item_Athena::CallFunc_BP_GetAllPassengers_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BGA_RiftPortal_Item_Athena_C_ExecuteUbergraph_BGA_RiftPortal_Item_Athena, CallFunc_Array_Length_ReturnValue_3) == 0x000610, "Member 'BGA_RiftPortal_Item_Athena_C_ExecuteUbergraph_BGA_RiftPortal_Item_Athena::CallFunc_Array_Length_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(BGA_RiftPortal_Item_Athena_C_ExecuteUbergraph_BGA_RiftPortal_Item_Athena, CallFunc_EqualEqual_IntInt_ReturnValue) == 0x000614, "Member 'BGA_RiftPortal_Item_Athena_C_ExecuteUbergraph_BGA_RiftPortal_Item_Athena::CallFunc_EqualEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BGA_RiftPortal_Item_Athena_C_ExecuteUbergraph_BGA_RiftPortal_Item_Athena, CallFunc_BP_GetAllPassengers_ReturnValue_3) == 0x000618, "Member 'BGA_RiftPortal_Item_Athena_C_ExecuteUbergraph_BGA_RiftPortal_Item_Athena::CallFunc_BP_GetAllPassengers_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(BGA_RiftPortal_Item_Athena_C_ExecuteUbergraph_BGA_RiftPortal_Item_Athena, K2Node_CreateDelegate_OutputDelegate_2) == 0x000628, "Member 'BGA_RiftPortal_Item_Athena_C_ExecuteUbergraph_BGA_RiftPortal_Item_Athena::K2Node_CreateDelegate_OutputDelegate_2' has a wrong offset!");
static_assert(offsetof(BGA_RiftPortal_Item_Athena_C_ExecuteUbergraph_BGA_RiftPortal_Item_Athena, CallFunc_Array_Get_Item_2) == 0x000638, "Member 'BGA_RiftPortal_Item_Athena_C_ExecuteUbergraph_BGA_RiftPortal_Item_Athena::CallFunc_Array_Get_Item_2' has a wrong offset!");
static_assert(offsetof(BGA_RiftPortal_Item_Athena_C_ExecuteUbergraph_BGA_RiftPortal_Item_Athena, CallFunc_Array_Length_ReturnValue_4) == 0x000640, "Member 'BGA_RiftPortal_Item_Athena_C_ExecuteUbergraph_BGA_RiftPortal_Item_Athena::CallFunc_Array_Length_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(BGA_RiftPortal_Item_Athena_C_ExecuteUbergraph_BGA_RiftPortal_Item_Athena, CallFunc_Less_IntInt_ReturnValue_1) == 0x000644, "Member 'BGA_RiftPortal_Item_Athena_C_ExecuteUbergraph_BGA_RiftPortal_Item_Athena::CallFunc_Less_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BGA_RiftPortal_Item_Athena_C_ExecuteUbergraph_BGA_RiftPortal_Item_Athena, K2Node_DynamicCast_AsFort_Player_Pawn_1) == 0x000648, "Member 'BGA_RiftPortal_Item_Athena_C_ExecuteUbergraph_BGA_RiftPortal_Item_Athena::K2Node_DynamicCast_AsFort_Player_Pawn_1' has a wrong offset!");
static_assert(offsetof(BGA_RiftPortal_Item_Athena_C_ExecuteUbergraph_BGA_RiftPortal_Item_Athena, K2Node_DynamicCast_bSuccess_4) == 0x000650, "Member 'BGA_RiftPortal_Item_Athena_C_ExecuteUbergraph_BGA_RiftPortal_Item_Athena::K2Node_DynamicCast_bSuccess_4' has a wrong offset!");
static_assert(offsetof(BGA_RiftPortal_Item_Athena_C_ExecuteUbergraph_BGA_RiftPortal_Item_Athena, K2Node_DynamicCast_AsFort_Vehicle_Interface_1) == 0x000658, "Member 'BGA_RiftPortal_Item_Athena_C_ExecuteUbergraph_BGA_RiftPortal_Item_Athena::K2Node_DynamicCast_AsFort_Vehicle_Interface_1' has a wrong offset!");
static_assert(offsetof(BGA_RiftPortal_Item_Athena_C_ExecuteUbergraph_BGA_RiftPortal_Item_Athena, K2Node_DynamicCast_bSuccess_5) == 0x000668, "Member 'BGA_RiftPortal_Item_Athena_C_ExecuteUbergraph_BGA_RiftPortal_Item_Athena::K2Node_DynamicCast_bSuccess_5' has a wrong offset!");
static_assert(offsetof(BGA_RiftPortal_Item_Athena_C_ExecuteUbergraph_BGA_RiftPortal_Item_Athena, CallFunc_ApplyGlobalEnvironmentGameplayEffectToActor_ReturnValue_1) == 0x00066C, "Member 'BGA_RiftPortal_Item_Athena_C_ExecuteUbergraph_BGA_RiftPortal_Item_Athena::CallFunc_ApplyGlobalEnvironmentGameplayEffectToActor_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BGA_RiftPortal_Item_Athena_C_ExecuteUbergraph_BGA_RiftPortal_Item_Athena, CallFunc_IsInVehicle_ReturnValue) == 0x000674, "Member 'BGA_RiftPortal_Item_Athena_C_ExecuteUbergraph_BGA_RiftPortal_Item_Athena::CallFunc_IsInVehicle_ReturnValue' has a wrong offset!");
static_assert(offsetof(BGA_RiftPortal_Item_Athena_C_ExecuteUbergraph_BGA_RiftPortal_Item_Athena, CallFunc_K2_GetActorLocation_ReturnValue_3) == 0x000678, "Member 'BGA_RiftPortal_Item_Athena_C_ExecuteUbergraph_BGA_RiftPortal_Item_Athena::CallFunc_K2_GetActorLocation_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(BGA_RiftPortal_Item_Athena_C_ExecuteUbergraph_BGA_RiftPortal_Item_Athena, CallFunc_IsInsideHidingProp_ReturnValue) == 0x000690, "Member 'BGA_RiftPortal_Item_Athena_C_ExecuteUbergraph_BGA_RiftPortal_Item_Athena::CallFunc_IsInsideHidingProp_ReturnValue' has a wrong offset!");
static_assert(offsetof(BGA_RiftPortal_Item_Athena_C_ExecuteUbergraph_BGA_RiftPortal_Item_Athena, K2Node_DynamicCast_AsFort_AIPawn) == 0x000698, "Member 'BGA_RiftPortal_Item_Athena_C_ExecuteUbergraph_BGA_RiftPortal_Item_Athena::K2Node_DynamicCast_AsFort_AIPawn' has a wrong offset!");
static_assert(offsetof(BGA_RiftPortal_Item_Athena_C_ExecuteUbergraph_BGA_RiftPortal_Item_Athena, K2Node_DynamicCast_bSuccess_6) == 0x0006A0, "Member 'BGA_RiftPortal_Item_Athena_C_ExecuteUbergraph_BGA_RiftPortal_Item_Athena::K2Node_DynamicCast_bSuccess_6' has a wrong offset!");
static_assert(offsetof(BGA_RiftPortal_Item_Athena_C_ExecuteUbergraph_BGA_RiftPortal_Item_Athena, CallFunc_Set_Contains_ReturnValue) == 0x0006A1, "Member 'BGA_RiftPortal_Item_Athena_C_ExecuteUbergraph_BGA_RiftPortal_Item_Athena::CallFunc_Set_Contains_ReturnValue' has a wrong offset!");
static_assert(offsetof(BGA_RiftPortal_Item_Athena_C_ExecuteUbergraph_BGA_RiftPortal_Item_Athena, CallFunc_BooleanOR_ReturnValue) == 0x0006A2, "Member 'BGA_RiftPortal_Item_Athena_C_ExecuteUbergraph_BGA_RiftPortal_Item_Athena::CallFunc_BooleanOR_ReturnValue' has a wrong offset!");
static_assert(offsetof(BGA_RiftPortal_Item_Athena_C_ExecuteUbergraph_BGA_RiftPortal_Item_Athena, CallFunc_TeleportAIPawn_ReturnValue) == 0x0006A3, "Member 'BGA_RiftPortal_Item_Athena_C_ExecuteUbergraph_BGA_RiftPortal_Item_Athena::CallFunc_TeleportAIPawn_ReturnValue' has a wrong offset!");
static_assert(offsetof(BGA_RiftPortal_Item_Athena_C_ExecuteUbergraph_BGA_RiftPortal_Item_Athena, CallFunc_IsPlayerAttachedToAIPawn_Result) == 0x0006A4, "Member 'BGA_RiftPortal_Item_Athena_C_ExecuteUbergraph_BGA_RiftPortal_Item_Athena::CallFunc_IsPlayerAttachedToAIPawn_Result' has a wrong offset!");
static_assert(offsetof(BGA_RiftPortal_Item_Athena_C_ExecuteUbergraph_BGA_RiftPortal_Item_Athena, CallFunc_IsPlayerAttachedToAIPawn_AttachedPlayerPawn) == 0x0006A8, "Member 'BGA_RiftPortal_Item_Athena_C_ExecuteUbergraph_BGA_RiftPortal_Item_Athena::CallFunc_IsPlayerAttachedToAIPawn_AttachedPlayerPawn' has a wrong offset!");
static_assert(offsetof(BGA_RiftPortal_Item_Athena_C_ExecuteUbergraph_BGA_RiftPortal_Item_Athena, CallFunc_IsValid_ReturnValue_5) == 0x0006B0, "Member 'BGA_RiftPortal_Item_Athena_C_ExecuteUbergraph_BGA_RiftPortal_Item_Athena::CallFunc_IsValid_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(BGA_RiftPortal_Item_Athena_C_ExecuteUbergraph_BGA_RiftPortal_Item_Athena, K2Node_CreateDelegate_OutputDelegate_3) == 0x0006B4, "Member 'BGA_RiftPortal_Item_Athena_C_ExecuteUbergraph_BGA_RiftPortal_Item_Athena::K2Node_CreateDelegate_OutputDelegate_3' has a wrong offset!");
static_assert(offsetof(BGA_RiftPortal_Item_Athena_C_ExecuteUbergraph_BGA_RiftPortal_Item_Athena, CallFunc_SelectFloat_ReturnValue) == 0x0006C0, "Member 'BGA_RiftPortal_Item_Athena_C_ExecuteUbergraph_BGA_RiftPortal_Item_Athena::CallFunc_SelectFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(BGA_RiftPortal_Item_Athena_C_ExecuteUbergraph_BGA_RiftPortal_Item_Athena, CallFunc_Multiply_DoubleDouble_ReturnValue) == 0x0006C8, "Member 'BGA_RiftPortal_Item_Athena_C_ExecuteUbergraph_BGA_RiftPortal_Item_Athena::CallFunc_Multiply_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(BGA_RiftPortal_Item_Athena_C_ExecuteUbergraph_BGA_RiftPortal_Item_Athena, K2Node_CustomEvent_Target_Actor) == 0x0006D0, "Member 'BGA_RiftPortal_Item_Athena_C_ExecuteUbergraph_BGA_RiftPortal_Item_Athena::K2Node_CustomEvent_Target_Actor' has a wrong offset!");
static_assert(offsetof(BGA_RiftPortal_Item_Athena_C_ExecuteUbergraph_BGA_RiftPortal_Item_Athena, CallFunc_MakeRotator_ReturnValue_1) == 0x0006D8, "Member 'BGA_RiftPortal_Item_Athena_C_ExecuteUbergraph_BGA_RiftPortal_Item_Athena::CallFunc_MakeRotator_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BGA_RiftPortal_Item_Athena_C_ExecuteUbergraph_BGA_RiftPortal_Item_Athena, CallFunc_K2_SetRelativeRotation_SweepHitResult) == 0x0006F0, "Member 'BGA_RiftPortal_Item_Athena_C_ExecuteUbergraph_BGA_RiftPortal_Item_Athena::CallFunc_K2_SetRelativeRotation_SweepHitResult' has a wrong offset!");
static_assert(offsetof(BGA_RiftPortal_Item_Athena_C_ExecuteUbergraph_BGA_RiftPortal_Item_Athena, CallFunc_Add_DoubleDouble_A_ImplicitCast) == 0x0007D0, "Member 'BGA_RiftPortal_Item_Athena_C_ExecuteUbergraph_BGA_RiftPortal_Item_Athena::CallFunc_Add_DoubleDouble_A_ImplicitCast' has a wrong offset!");
static_assert(offsetof(BGA_RiftPortal_Item_Athena_C_ExecuteUbergraph_BGA_RiftPortal_Item_Athena, CallFunc_Delay_Duration_ImplicitCast) == 0x0007D8, "Member 'BGA_RiftPortal_Item_Athena_C_ExecuteUbergraph_BGA_RiftPortal_Item_Athena::CallFunc_Delay_Duration_ImplicitCast' has a wrong offset!");
static_assert(offsetof(BGA_RiftPortal_Item_Athena_C_ExecuteUbergraph_BGA_RiftPortal_Item_Athena, CallFunc_MakeRotator_Yaw_ImplicitCast) == 0x0007DC, "Member 'BGA_RiftPortal_Item_Athena_C_ExecuteUbergraph_BGA_RiftPortal_Item_Athena::CallFunc_MakeRotator_Yaw_ImplicitCast' has a wrong offset!");
static_assert(offsetof(BGA_RiftPortal_Item_Athena_C_ExecuteUbergraph_BGA_RiftPortal_Item_Athena, CallFunc_MakeVector_Z_ImplicitCast) == 0x0007E0, "Member 'BGA_RiftPortal_Item_Athena_C_ExecuteUbergraph_BGA_RiftPortal_Item_Athena::CallFunc_MakeVector_Z_ImplicitCast' has a wrong offset!");
static_assert(offsetof(BGA_RiftPortal_Item_Athena_C_ExecuteUbergraph_BGA_RiftPortal_Item_Athena, CallFunc_Multiply_DoubleDouble_A_ImplicitCast) == 0x0007E8, "Member 'BGA_RiftPortal_Item_Athena_C_ExecuteUbergraph_BGA_RiftPortal_Item_Athena::CallFunc_Multiply_DoubleDouble_A_ImplicitCast' has a wrong offset!");
static_assert(offsetof(BGA_RiftPortal_Item_Athena_C_ExecuteUbergraph_BGA_RiftPortal_Item_Athena, CallFunc_SelectFloat_B_ImplicitCast) == 0x0007F0, "Member 'BGA_RiftPortal_Item_Athena_C_ExecuteUbergraph_BGA_RiftPortal_Item_Athena::CallFunc_SelectFloat_B_ImplicitCast' has a wrong offset!");
static_assert(offsetof(BGA_RiftPortal_Item_Athena_C_ExecuteUbergraph_BGA_RiftPortal_Item_Athena, CallFunc_SetScalarParameterValueOnMaterials_ParameterValue_ImplicitCast) == 0x0007F8, "Member 'BGA_RiftPortal_Item_Athena_C_ExecuteUbergraph_BGA_RiftPortal_Item_Athena::CallFunc_SetScalarParameterValueOnMaterials_ParameterValue_ImplicitCast' has a wrong offset!");
static_assert(offsetof(BGA_RiftPortal_Item_Athena_C_ExecuteUbergraph_BGA_RiftPortal_Item_Athena, CallFunc_MakeRotator_Roll_ImplicitCast) == 0x0007FC, "Member 'BGA_RiftPortal_Item_Athena_C_ExecuteUbergraph_BGA_RiftPortal_Item_Athena::CallFunc_MakeRotator_Roll_ImplicitCast' has a wrong offset!");

struct BGA_RiftPortal_Item_Athena_C_ForceRiftTeleport final
{
public:
	class AActor*                                 Target_Actor;
};
static_assert(alignof(BGA_RiftPortal_Item_Athena_C_ForceRiftTeleport) == 0x000008, "Wrong alignment on BGA_RiftPortal_Item_Athena_C_ForceRiftTeleport");
static_assert(sizeof(BGA_RiftPortal_Item_Athena_C_ForceRiftTeleport) == 0x000008, "Wrong size on BGA_RiftPortal_Item_Athena_C_ForceRiftTeleport");
static_assert(offsetof(BGA_RiftPortal_Item_Athena_C_ForceRiftTeleport, Target_Actor) == 0x000000, "Member 'BGA_RiftPortal_Item_Athena_C_ForceRiftTeleport::Target_Actor' has a wrong offset!");

struct BGA_RiftPortal_Item_Athena_C_IncrementTeleportLocationOffset final
{
public:
	struct FVector                                IncrementValue;
};
static_assert(alignof(BGA_RiftPortal_Item_Athena_C_IncrementTeleportLocationOffset) == 0x000008, "Wrong alignment on BGA_RiftPortal_Item_Athena_C_IncrementTeleportLocationOffset");
static_assert(sizeof(BGA_RiftPortal_Item_Athena_C_IncrementTeleportLocationOffset) == 0x000018, "Wrong size on BGA_RiftPortal_Item_Athena_C_IncrementTeleportLocationOffset");
static_assert(offsetof(BGA_RiftPortal_Item_Athena_C_IncrementTeleportLocationOffset, IncrementValue) == 0x000000, "Member 'BGA_RiftPortal_Item_Athena_C_IncrementTeleportLocationOffset::IncrementValue' has a wrong offset!");

struct BGA_RiftPortal_Item_Athena_C_Is_Flying final
{
public:
	bool                                          NewParam;
	uint8                                         Pad_1[0x7];
	class UPawnMovementComponent*                 CallFunc_GetMovementComponent_ReturnValue;
	class UFortMovementComp_Character*            K2Node_DynamicCast_AsFort_Movement_Comp_Character;
	bool                                          K2Node_DynamicCast_bSuccess;
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;
};
static_assert(alignof(BGA_RiftPortal_Item_Athena_C_Is_Flying) == 0x000008, "Wrong alignment on BGA_RiftPortal_Item_Athena_C_Is_Flying");
static_assert(sizeof(BGA_RiftPortal_Item_Athena_C_Is_Flying) == 0x000020, "Wrong size on BGA_RiftPortal_Item_Athena_C_Is_Flying");
static_assert(offsetof(BGA_RiftPortal_Item_Athena_C_Is_Flying, NewParam) == 0x000000, "Member 'BGA_RiftPortal_Item_Athena_C_Is_Flying::NewParam' has a wrong offset!");
static_assert(offsetof(BGA_RiftPortal_Item_Athena_C_Is_Flying, CallFunc_GetMovementComponent_ReturnValue) == 0x000008, "Member 'BGA_RiftPortal_Item_Athena_C_Is_Flying::CallFunc_GetMovementComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(BGA_RiftPortal_Item_Athena_C_Is_Flying, K2Node_DynamicCast_AsFort_Movement_Comp_Character) == 0x000010, "Member 'BGA_RiftPortal_Item_Athena_C_Is_Flying::K2Node_DynamicCast_AsFort_Movement_Comp_Character' has a wrong offset!");
static_assert(offsetof(BGA_RiftPortal_Item_Athena_C_Is_Flying, K2Node_DynamicCast_bSuccess) == 0x000018, "Member 'BGA_RiftPortal_Item_Athena_C_Is_Flying::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BGA_RiftPortal_Item_Athena_C_Is_Flying, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x000019, "Member 'BGA_RiftPortal_Item_Athena_C_Is_Flying::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");

struct BGA_RiftPortal_Item_Athena_C_IsPlayerAttachedToAIPawn final
{
public:
	class AFortAIPawn*                            AIPawn;
	bool                                          Result;
	uint8                                         Pad_9[0x7];
	class AFortPlayerPawn*                        AttachedPlayerPawn;
	TArray<class AActor*>                         CallFunc_GetAttachedActors_OutActors;
	int32                                         Temp_int_Array_Index_Variable;
	int32                                         CallFunc_Array_Length_ReturnValue;
	class AActor*                                 CallFunc_Array_Get_Item;
	class AFortPlayerPawn*                        K2Node_DynamicCast_AsFort_Player_Pawn;
	bool                                          K2Node_DynamicCast_bSuccess;
	uint8                                         Pad_41[0x3];
	int32                                         Temp_int_Loop_Counter_Variable;
	bool                                          CallFunc_Less_IntInt_ReturnValue;
	uint8                                         Pad_49[0x3];
	int32                                         CallFunc_Add_IntInt_ReturnValue;
};
static_assert(alignof(BGA_RiftPortal_Item_Athena_C_IsPlayerAttachedToAIPawn) == 0x000008, "Wrong alignment on BGA_RiftPortal_Item_Athena_C_IsPlayerAttachedToAIPawn");
static_assert(sizeof(BGA_RiftPortal_Item_Athena_C_IsPlayerAttachedToAIPawn) == 0x000050, "Wrong size on BGA_RiftPortal_Item_Athena_C_IsPlayerAttachedToAIPawn");
static_assert(offsetof(BGA_RiftPortal_Item_Athena_C_IsPlayerAttachedToAIPawn, AIPawn) == 0x000000, "Member 'BGA_RiftPortal_Item_Athena_C_IsPlayerAttachedToAIPawn::AIPawn' has a wrong offset!");
static_assert(offsetof(BGA_RiftPortal_Item_Athena_C_IsPlayerAttachedToAIPawn, Result) == 0x000008, "Member 'BGA_RiftPortal_Item_Athena_C_IsPlayerAttachedToAIPawn::Result' has a wrong offset!");
static_assert(offsetof(BGA_RiftPortal_Item_Athena_C_IsPlayerAttachedToAIPawn, AttachedPlayerPawn) == 0x000010, "Member 'BGA_RiftPortal_Item_Athena_C_IsPlayerAttachedToAIPawn::AttachedPlayerPawn' has a wrong offset!");
static_assert(offsetof(BGA_RiftPortal_Item_Athena_C_IsPlayerAttachedToAIPawn, CallFunc_GetAttachedActors_OutActors) == 0x000018, "Member 'BGA_RiftPortal_Item_Athena_C_IsPlayerAttachedToAIPawn::CallFunc_GetAttachedActors_OutActors' has a wrong offset!");
static_assert(offsetof(BGA_RiftPortal_Item_Athena_C_IsPlayerAttachedToAIPawn, Temp_int_Array_Index_Variable) == 0x000028, "Member 'BGA_RiftPortal_Item_Athena_C_IsPlayerAttachedToAIPawn::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(BGA_RiftPortal_Item_Athena_C_IsPlayerAttachedToAIPawn, CallFunc_Array_Length_ReturnValue) == 0x00002C, "Member 'BGA_RiftPortal_Item_Athena_C_IsPlayerAttachedToAIPawn::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(BGA_RiftPortal_Item_Athena_C_IsPlayerAttachedToAIPawn, CallFunc_Array_Get_Item) == 0x000030, "Member 'BGA_RiftPortal_Item_Athena_C_IsPlayerAttachedToAIPawn::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(BGA_RiftPortal_Item_Athena_C_IsPlayerAttachedToAIPawn, K2Node_DynamicCast_AsFort_Player_Pawn) == 0x000038, "Member 'BGA_RiftPortal_Item_Athena_C_IsPlayerAttachedToAIPawn::K2Node_DynamicCast_AsFort_Player_Pawn' has a wrong offset!");
static_assert(offsetof(BGA_RiftPortal_Item_Athena_C_IsPlayerAttachedToAIPawn, K2Node_DynamicCast_bSuccess) == 0x000040, "Member 'BGA_RiftPortal_Item_Athena_C_IsPlayerAttachedToAIPawn::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BGA_RiftPortal_Item_Athena_C_IsPlayerAttachedToAIPawn, Temp_int_Loop_Counter_Variable) == 0x000044, "Member 'BGA_RiftPortal_Item_Athena_C_IsPlayerAttachedToAIPawn::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(BGA_RiftPortal_Item_Athena_C_IsPlayerAttachedToAIPawn, CallFunc_Less_IntInt_ReturnValue) == 0x000048, "Member 'BGA_RiftPortal_Item_Athena_C_IsPlayerAttachedToAIPawn::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BGA_RiftPortal_Item_Athena_C_IsPlayerAttachedToAIPawn, CallFunc_Add_IntInt_ReturnValue) == 0x00004C, "Member 'BGA_RiftPortal_Item_Athena_C_IsPlayerAttachedToAIPawn::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");

struct BGA_RiftPortal_Item_Athena_C_NotifyTeleportedVehicle final
{
public:
	class AActor*                                 VehicleActor;
};
static_assert(alignof(BGA_RiftPortal_Item_Athena_C_NotifyTeleportedVehicle) == 0x000008, "Wrong alignment on BGA_RiftPortal_Item_Athena_C_NotifyTeleportedVehicle");
static_assert(sizeof(BGA_RiftPortal_Item_Athena_C_NotifyTeleportedVehicle) == 0x000008, "Wrong size on BGA_RiftPortal_Item_Athena_C_NotifyTeleportedVehicle");
static_assert(offsetof(BGA_RiftPortal_Item_Athena_C_NotifyTeleportedVehicle, VehicleActor) == 0x000000, "Member 'BGA_RiftPortal_Item_Athena_C_NotifyTeleportedVehicle::VehicleActor' has a wrong offset!");

struct BGA_RiftPortal_Item_Athena_C_OverlappingOnBeginPlay final
{
public:
	class AActor*                                 Actor;
};
static_assert(alignof(BGA_RiftPortal_Item_Athena_C_OverlappingOnBeginPlay) == 0x000008, "Wrong alignment on BGA_RiftPortal_Item_Athena_C_OverlappingOnBeginPlay");
static_assert(sizeof(BGA_RiftPortal_Item_Athena_C_OverlappingOnBeginPlay) == 0x000008, "Wrong size on BGA_RiftPortal_Item_Athena_C_OverlappingOnBeginPlay");
static_assert(offsetof(BGA_RiftPortal_Item_Athena_C_OverlappingOnBeginPlay, Actor) == 0x000000, "Member 'BGA_RiftPortal_Item_Athena_C_OverlappingOnBeginPlay::Actor' has a wrong offset!");

struct BGA_RiftPortal_Item_Athena_C_PlayExpandOrCollapseAudio final
{
public:
	bool                                          Expand;
	bool                                          Temp_bool_Variable;
	uint8                                         Pad_2[0x6];
	class USoundBase*                             Temp_object_Variable;
	class USoundBase*                             Temp_object_Variable_1;
	class USoundBase*                             K2Node_Select_Default;
	struct FVector                                CallFunc_K2_GetComponentLocation_ReturnValue;
};
static_assert(alignof(BGA_RiftPortal_Item_Athena_C_PlayExpandOrCollapseAudio) == 0x000008, "Wrong alignment on BGA_RiftPortal_Item_Athena_C_PlayExpandOrCollapseAudio");
static_assert(sizeof(BGA_RiftPortal_Item_Athena_C_PlayExpandOrCollapseAudio) == 0x000038, "Wrong size on BGA_RiftPortal_Item_Athena_C_PlayExpandOrCollapseAudio");
static_assert(offsetof(BGA_RiftPortal_Item_Athena_C_PlayExpandOrCollapseAudio, Expand) == 0x000000, "Member 'BGA_RiftPortal_Item_Athena_C_PlayExpandOrCollapseAudio::Expand' has a wrong offset!");
static_assert(offsetof(BGA_RiftPortal_Item_Athena_C_PlayExpandOrCollapseAudio, Temp_bool_Variable) == 0x000001, "Member 'BGA_RiftPortal_Item_Athena_C_PlayExpandOrCollapseAudio::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(BGA_RiftPortal_Item_Athena_C_PlayExpandOrCollapseAudio, Temp_object_Variable) == 0x000008, "Member 'BGA_RiftPortal_Item_Athena_C_PlayExpandOrCollapseAudio::Temp_object_Variable' has a wrong offset!");
static_assert(offsetof(BGA_RiftPortal_Item_Athena_C_PlayExpandOrCollapseAudio, Temp_object_Variable_1) == 0x000010, "Member 'BGA_RiftPortal_Item_Athena_C_PlayExpandOrCollapseAudio::Temp_object_Variable_1' has a wrong offset!");
static_assert(offsetof(BGA_RiftPortal_Item_Athena_C_PlayExpandOrCollapseAudio, K2Node_Select_Default) == 0x000018, "Member 'BGA_RiftPortal_Item_Athena_C_PlayExpandOrCollapseAudio::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(BGA_RiftPortal_Item_Athena_C_PlayExpandOrCollapseAudio, CallFunc_K2_GetComponentLocation_ReturnValue) == 0x000020, "Member 'BGA_RiftPortal_Item_Athena_C_PlayExpandOrCollapseAudio::CallFunc_K2_GetComponentLocation_ReturnValue' has a wrong offset!");

struct BGA_RiftPortal_Item_Athena_C_PlaylistLoaded final
{
public:
	class FName                                   PlaylistName;
	uint8                                         Pad_4[0x4];
	struct FGameplayTagContainer                  PlaylistContextTags;
};
static_assert(alignof(BGA_RiftPortal_Item_Athena_C_PlaylistLoaded) == 0x000008, "Wrong alignment on BGA_RiftPortal_Item_Athena_C_PlaylistLoaded");
static_assert(sizeof(BGA_RiftPortal_Item_Athena_C_PlaylistLoaded) == 0x000028, "Wrong size on BGA_RiftPortal_Item_Athena_C_PlaylistLoaded");
static_assert(offsetof(BGA_RiftPortal_Item_Athena_C_PlaylistLoaded, PlaylistName) == 0x000000, "Member 'BGA_RiftPortal_Item_Athena_C_PlaylistLoaded::PlaylistName' has a wrong offset!");
static_assert(offsetof(BGA_RiftPortal_Item_Athena_C_PlaylistLoaded, PlaylistContextTags) == 0x000008, "Member 'BGA_RiftPortal_Item_Athena_C_PlaylistLoaded::PlaylistContextTags' has a wrong offset!");

struct BGA_RiftPortal_Item_Athena_C_PlayTeleportFX final
{
public:
	struct FVector                                PlayerLocation;
	class APlayerState*                           RequestingPlayerState;
};
static_assert(alignof(BGA_RiftPortal_Item_Athena_C_PlayTeleportFX) == 0x000008, "Wrong alignment on BGA_RiftPortal_Item_Athena_C_PlayTeleportFX");
static_assert(sizeof(BGA_RiftPortal_Item_Athena_C_PlayTeleportFX) == 0x000020, "Wrong size on BGA_RiftPortal_Item_Athena_C_PlayTeleportFX");
static_assert(offsetof(BGA_RiftPortal_Item_Athena_C_PlayTeleportFX, PlayerLocation) == 0x000000, "Member 'BGA_RiftPortal_Item_Athena_C_PlayTeleportFX::PlayerLocation' has a wrong offset!");
static_assert(offsetof(BGA_RiftPortal_Item_Athena_C_PlayTeleportFX, RequestingPlayerState) == 0x000018, "Member 'BGA_RiftPortal_Item_Athena_C_PlayTeleportFX::RequestingPlayerState' has a wrong offset!");

struct BGA_RiftPortal_Item_Athena_C_TeleportPlayerAndSendEvent final
{
public:
	class AFortPlayerPawn*                        PlayerPawn_0;
	struct FVector                                CallFunc_GetActorBounds_Origin;
	struct FVector                                CallFunc_GetActorBounds_BoxExtent;
	struct FVector                                CallFunc_Multiply_VectorVector_ReturnValue;
	struct FVector                                CallFunc_Add_VectorVector_ReturnValue;
	float                                         CallFunc_BreakRotator_Roll;
	float                                         CallFunc_BreakRotator_Pitch;
	float                                         CallFunc_BreakRotator_Yaw;
	uint8                                         Pad_74[0x4];
	struct FRotator                               CallFunc_MakeRotator_ReturnValue;
	bool                                          CallFunc_TeleportPlayerPawn_ReturnValue;
};
static_assert(alignof(BGA_RiftPortal_Item_Athena_C_TeleportPlayerAndSendEvent) == 0x000008, "Wrong alignment on BGA_RiftPortal_Item_Athena_C_TeleportPlayerAndSendEvent");
static_assert(sizeof(BGA_RiftPortal_Item_Athena_C_TeleportPlayerAndSendEvent) == 0x000098, "Wrong size on BGA_RiftPortal_Item_Athena_C_TeleportPlayerAndSendEvent");
static_assert(offsetof(BGA_RiftPortal_Item_Athena_C_TeleportPlayerAndSendEvent, PlayerPawn_0) == 0x000000, "Member 'BGA_RiftPortal_Item_Athena_C_TeleportPlayerAndSendEvent::PlayerPawn_0' has a wrong offset!");
static_assert(offsetof(BGA_RiftPortal_Item_Athena_C_TeleportPlayerAndSendEvent, CallFunc_GetActorBounds_Origin) == 0x000008, "Member 'BGA_RiftPortal_Item_Athena_C_TeleportPlayerAndSendEvent::CallFunc_GetActorBounds_Origin' has a wrong offset!");
static_assert(offsetof(BGA_RiftPortal_Item_Athena_C_TeleportPlayerAndSendEvent, CallFunc_GetActorBounds_BoxExtent) == 0x000020, "Member 'BGA_RiftPortal_Item_Athena_C_TeleportPlayerAndSendEvent::CallFunc_GetActorBounds_BoxExtent' has a wrong offset!");
static_assert(offsetof(BGA_RiftPortal_Item_Athena_C_TeleportPlayerAndSendEvent, CallFunc_Multiply_VectorVector_ReturnValue) == 0x000038, "Member 'BGA_RiftPortal_Item_Athena_C_TeleportPlayerAndSendEvent::CallFunc_Multiply_VectorVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(BGA_RiftPortal_Item_Athena_C_TeleportPlayerAndSendEvent, CallFunc_Add_VectorVector_ReturnValue) == 0x000050, "Member 'BGA_RiftPortal_Item_Athena_C_TeleportPlayerAndSendEvent::CallFunc_Add_VectorVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(BGA_RiftPortal_Item_Athena_C_TeleportPlayerAndSendEvent, CallFunc_BreakRotator_Roll) == 0x000068, "Member 'BGA_RiftPortal_Item_Athena_C_TeleportPlayerAndSendEvent::CallFunc_BreakRotator_Roll' has a wrong offset!");
static_assert(offsetof(BGA_RiftPortal_Item_Athena_C_TeleportPlayerAndSendEvent, CallFunc_BreakRotator_Pitch) == 0x00006C, "Member 'BGA_RiftPortal_Item_Athena_C_TeleportPlayerAndSendEvent::CallFunc_BreakRotator_Pitch' has a wrong offset!");
static_assert(offsetof(BGA_RiftPortal_Item_Athena_C_TeleportPlayerAndSendEvent, CallFunc_BreakRotator_Yaw) == 0x000070, "Member 'BGA_RiftPortal_Item_Athena_C_TeleportPlayerAndSendEvent::CallFunc_BreakRotator_Yaw' has a wrong offset!");
static_assert(offsetof(BGA_RiftPortal_Item_Athena_C_TeleportPlayerAndSendEvent, CallFunc_MakeRotator_ReturnValue) == 0x000078, "Member 'BGA_RiftPortal_Item_Athena_C_TeleportPlayerAndSendEvent::CallFunc_MakeRotator_ReturnValue' has a wrong offset!");
static_assert(offsetof(BGA_RiftPortal_Item_Athena_C_TeleportPlayerAndSendEvent, CallFunc_TeleportPlayerPawn_ReturnValue) == 0x000090, "Member 'BGA_RiftPortal_Item_Athena_C_TeleportPlayerAndSendEvent::CallFunc_TeleportPlayerPawn_ReturnValue' has a wrong offset!");

struct BGA_RiftPortal_Item_Athena_C_TryRiftTeleport final
{
public:
	class AActor*                                 TargetActor;
};
static_assert(alignof(BGA_RiftPortal_Item_Athena_C_TryRiftTeleport) == 0x000008, "Wrong alignment on BGA_RiftPortal_Item_Athena_C_TryRiftTeleport");
static_assert(sizeof(BGA_RiftPortal_Item_Athena_C_TryRiftTeleport) == 0x000008, "Wrong size on BGA_RiftPortal_Item_Athena_C_TryRiftTeleport");
static_assert(offsetof(BGA_RiftPortal_Item_Athena_C_TryRiftTeleport, TargetActor) == 0x000000, "Member 'BGA_RiftPortal_Item_Athena_C_TryRiftTeleport::TargetActor' has a wrong offset!");

struct BGA_RiftPortal_Item_Athena_C_UseRiftQuestUpdate final
{
public:
	class AController*                            InController;
	class AFortPlayerController*                  K2Node_DynamicCast_AsFort_Player_Controller;
	bool                                          K2Node_DynamicCast_bSuccess;
	bool                                          CallFunc_IsValid_ReturnValue;
	uint8                                         Pad_12[0x6];
	TArray<class AFortPlayerController*>          K2Node_MakeArray_Array;
	bool                                          CallFunc_Athena_CheckQuestAndObjectiveCompletion_QuestIsValid;
	bool                                          CallFunc_Athena_CheckQuestAndObjectiveCompletion_QuestCompleted;
	bool                                          CallFunc_Athena_CheckQuestAndObjectiveCompletion_ObjectiveCompleted;
	bool                                          CallFunc_Not_PreBool_ReturnValue;
	bool                                          CallFunc_BooleanAND_ReturnValue;
};
static_assert(alignof(BGA_RiftPortal_Item_Athena_C_UseRiftQuestUpdate) == 0x000008, "Wrong alignment on BGA_RiftPortal_Item_Athena_C_UseRiftQuestUpdate");
static_assert(sizeof(BGA_RiftPortal_Item_Athena_C_UseRiftQuestUpdate) == 0x000030, "Wrong size on BGA_RiftPortal_Item_Athena_C_UseRiftQuestUpdate");
static_assert(offsetof(BGA_RiftPortal_Item_Athena_C_UseRiftQuestUpdate, InController) == 0x000000, "Member 'BGA_RiftPortal_Item_Athena_C_UseRiftQuestUpdate::InController' has a wrong offset!");
static_assert(offsetof(BGA_RiftPortal_Item_Athena_C_UseRiftQuestUpdate, K2Node_DynamicCast_AsFort_Player_Controller) == 0x000008, "Member 'BGA_RiftPortal_Item_Athena_C_UseRiftQuestUpdate::K2Node_DynamicCast_AsFort_Player_Controller' has a wrong offset!");
static_assert(offsetof(BGA_RiftPortal_Item_Athena_C_UseRiftQuestUpdate, K2Node_DynamicCast_bSuccess) == 0x000010, "Member 'BGA_RiftPortal_Item_Athena_C_UseRiftQuestUpdate::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BGA_RiftPortal_Item_Athena_C_UseRiftQuestUpdate, CallFunc_IsValid_ReturnValue) == 0x000011, "Member 'BGA_RiftPortal_Item_Athena_C_UseRiftQuestUpdate::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BGA_RiftPortal_Item_Athena_C_UseRiftQuestUpdate, K2Node_MakeArray_Array) == 0x000018, "Member 'BGA_RiftPortal_Item_Athena_C_UseRiftQuestUpdate::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(BGA_RiftPortal_Item_Athena_C_UseRiftQuestUpdate, CallFunc_Athena_CheckQuestAndObjectiveCompletion_QuestIsValid) == 0x000028, "Member 'BGA_RiftPortal_Item_Athena_C_UseRiftQuestUpdate::CallFunc_Athena_CheckQuestAndObjectiveCompletion_QuestIsValid' has a wrong offset!");
static_assert(offsetof(BGA_RiftPortal_Item_Athena_C_UseRiftQuestUpdate, CallFunc_Athena_CheckQuestAndObjectiveCompletion_QuestCompleted) == 0x000029, "Member 'BGA_RiftPortal_Item_Athena_C_UseRiftQuestUpdate::CallFunc_Athena_CheckQuestAndObjectiveCompletion_QuestCompleted' has a wrong offset!");
static_assert(offsetof(BGA_RiftPortal_Item_Athena_C_UseRiftQuestUpdate, CallFunc_Athena_CheckQuestAndObjectiveCompletion_ObjectiveCompleted) == 0x00002A, "Member 'BGA_RiftPortal_Item_Athena_C_UseRiftQuestUpdate::CallFunc_Athena_CheckQuestAndObjectiveCompletion_ObjectiveCompleted' has a wrong offset!");
static_assert(offsetof(BGA_RiftPortal_Item_Athena_C_UseRiftQuestUpdate, CallFunc_Not_PreBool_ReturnValue) == 0x00002B, "Member 'BGA_RiftPortal_Item_Athena_C_UseRiftQuestUpdate::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(BGA_RiftPortal_Item_Athena_C_UseRiftQuestUpdate, CallFunc_BooleanAND_ReturnValue) == 0x00002C, "Member 'BGA_RiftPortal_Item_Athena_C_UseRiftQuestUpdate::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");

struct BGA_RiftPortal_Item_Athena_C_VehicleInteractionFailed final
{
public:
	class AFortPlayerPawnAthena*                  FortPlayerPawnAthena;
};
static_assert(alignof(BGA_RiftPortal_Item_Athena_C_VehicleInteractionFailed) == 0x000008, "Wrong alignment on BGA_RiftPortal_Item_Athena_C_VehicleInteractionFailed");
static_assert(sizeof(BGA_RiftPortal_Item_Athena_C_VehicleInteractionFailed) == 0x000008, "Wrong size on BGA_RiftPortal_Item_Athena_C_VehicleInteractionFailed");
static_assert(offsetof(BGA_RiftPortal_Item_Athena_C_VehicleInteractionFailed, FortPlayerPawnAthena) == 0x000000, "Member 'BGA_RiftPortal_Item_Athena_C_VehicleInteractionFailed::FortPlayerPawnAthena' has a wrong offset!");

struct BGA_RiftPortal_Item_Athena_C_GetAffiliationsToShowFor final
{
public:
	TArray<EFortTeamAffiliation>                  ReturnValue;
	TArray<EFortTeamAffiliation>                  K2Node_MakeArray_Array;
};
static_assert(alignof(BGA_RiftPortal_Item_Athena_C_GetAffiliationsToShowFor) == 0x000008, "Wrong alignment on BGA_RiftPortal_Item_Athena_C_GetAffiliationsToShowFor");
static_assert(sizeof(BGA_RiftPortal_Item_Athena_C_GetAffiliationsToShowFor) == 0x000020, "Wrong size on BGA_RiftPortal_Item_Athena_C_GetAffiliationsToShowFor");
static_assert(offsetof(BGA_RiftPortal_Item_Athena_C_GetAffiliationsToShowFor, ReturnValue) == 0x000000, "Member 'BGA_RiftPortal_Item_Athena_C_GetAffiliationsToShowFor::ReturnValue' has a wrong offset!");
static_assert(offsetof(BGA_RiftPortal_Item_Athena_C_GetAffiliationsToShowFor, K2Node_MakeArray_Array) == 0x000010, "Member 'BGA_RiftPortal_Item_Athena_C_GetAffiliationsToShowFor::K2Node_MakeArray_Array' has a wrong offset!");

struct BGA_RiftPortal_Item_Athena_C_ShouldShowSoundIndicator final
{
public:
	class AFortPlayerController*                  PlayerController;
	bool                                          ReturnValue;
	uint8                                         Pad_9[0x7];
	class AFortPlayerPawn*                        CallFunc_GetPlayerPawn_ReturnValue;
	class AFortPlayerPawn*                        K2Node_DynamicCast_AsFort_Player_Pawn;
	bool                                          K2Node_DynamicCast_bSuccess;
	bool                                          CallFunc_IsValid_ReturnValue;
	uint8                                         Pad_22[0x6];
	TScriptInterface<class IFortVehicleInterface> CallFunc_GetVehicleUInterface_ReturnValue;
	bool                                          CallFunc_IsInVehicle_ReturnValue;
	bool                                          CallFunc_IsValid_ReturnValue_1;
	uint8                                         Pad_3A[0x6];
	class APawn*                                  CallFunc_GetPawn_ReturnValue;
	bool                                          CallFunc_NotEqual_ObjectObject_ReturnValue;
	uint8                                         Pad_49[0x7];
	class AFortPlayerPawn*                        K2Node_DynamicCast_AsFort_Player_Pawn_1;
	bool                                          K2Node_DynamicCast_bSuccess_1;
	uint8                                         Pad_59[0x3];
	int32                                         CallFunc_FindSeatIndex_ReturnValue;
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue;
};
static_assert(alignof(BGA_RiftPortal_Item_Athena_C_ShouldShowSoundIndicator) == 0x000008, "Wrong alignment on BGA_RiftPortal_Item_Athena_C_ShouldShowSoundIndicator");
static_assert(sizeof(BGA_RiftPortal_Item_Athena_C_ShouldShowSoundIndicator) == 0x000068, "Wrong size on BGA_RiftPortal_Item_Athena_C_ShouldShowSoundIndicator");
static_assert(offsetof(BGA_RiftPortal_Item_Athena_C_ShouldShowSoundIndicator, PlayerController) == 0x000000, "Member 'BGA_RiftPortal_Item_Athena_C_ShouldShowSoundIndicator::PlayerController' has a wrong offset!");
static_assert(offsetof(BGA_RiftPortal_Item_Athena_C_ShouldShowSoundIndicator, ReturnValue) == 0x000008, "Member 'BGA_RiftPortal_Item_Athena_C_ShouldShowSoundIndicator::ReturnValue' has a wrong offset!");
static_assert(offsetof(BGA_RiftPortal_Item_Athena_C_ShouldShowSoundIndicator, CallFunc_GetPlayerPawn_ReturnValue) == 0x000010, "Member 'BGA_RiftPortal_Item_Athena_C_ShouldShowSoundIndicator::CallFunc_GetPlayerPawn_ReturnValue' has a wrong offset!");
static_assert(offsetof(BGA_RiftPortal_Item_Athena_C_ShouldShowSoundIndicator, K2Node_DynamicCast_AsFort_Player_Pawn) == 0x000018, "Member 'BGA_RiftPortal_Item_Athena_C_ShouldShowSoundIndicator::K2Node_DynamicCast_AsFort_Player_Pawn' has a wrong offset!");
static_assert(offsetof(BGA_RiftPortal_Item_Athena_C_ShouldShowSoundIndicator, K2Node_DynamicCast_bSuccess) == 0x000020, "Member 'BGA_RiftPortal_Item_Athena_C_ShouldShowSoundIndicator::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BGA_RiftPortal_Item_Athena_C_ShouldShowSoundIndicator, CallFunc_IsValid_ReturnValue) == 0x000021, "Member 'BGA_RiftPortal_Item_Athena_C_ShouldShowSoundIndicator::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BGA_RiftPortal_Item_Athena_C_ShouldShowSoundIndicator, CallFunc_GetVehicleUInterface_ReturnValue) == 0x000028, "Member 'BGA_RiftPortal_Item_Athena_C_ShouldShowSoundIndicator::CallFunc_GetVehicleUInterface_ReturnValue' has a wrong offset!");
static_assert(offsetof(BGA_RiftPortal_Item_Athena_C_ShouldShowSoundIndicator, CallFunc_IsInVehicle_ReturnValue) == 0x000038, "Member 'BGA_RiftPortal_Item_Athena_C_ShouldShowSoundIndicator::CallFunc_IsInVehicle_ReturnValue' has a wrong offset!");
static_assert(offsetof(BGA_RiftPortal_Item_Athena_C_ShouldShowSoundIndicator, CallFunc_IsValid_ReturnValue_1) == 0x000039, "Member 'BGA_RiftPortal_Item_Athena_C_ShouldShowSoundIndicator::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BGA_RiftPortal_Item_Athena_C_ShouldShowSoundIndicator, CallFunc_GetPawn_ReturnValue) == 0x000040, "Member 'BGA_RiftPortal_Item_Athena_C_ShouldShowSoundIndicator::CallFunc_GetPawn_ReturnValue' has a wrong offset!");
static_assert(offsetof(BGA_RiftPortal_Item_Athena_C_ShouldShowSoundIndicator, CallFunc_NotEqual_ObjectObject_ReturnValue) == 0x000048, "Member 'BGA_RiftPortal_Item_Athena_C_ShouldShowSoundIndicator::CallFunc_NotEqual_ObjectObject_ReturnValue' has a wrong offset!");
static_assert(offsetof(BGA_RiftPortal_Item_Athena_C_ShouldShowSoundIndicator, K2Node_DynamicCast_AsFort_Player_Pawn_1) == 0x000050, "Member 'BGA_RiftPortal_Item_Athena_C_ShouldShowSoundIndicator::K2Node_DynamicCast_AsFort_Player_Pawn_1' has a wrong offset!");
static_assert(offsetof(BGA_RiftPortal_Item_Athena_C_ShouldShowSoundIndicator, K2Node_DynamicCast_bSuccess_1) == 0x000058, "Member 'BGA_RiftPortal_Item_Athena_C_ShouldShowSoundIndicator::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(BGA_RiftPortal_Item_Athena_C_ShouldShowSoundIndicator, CallFunc_FindSeatIndex_ReturnValue) == 0x00005C, "Member 'BGA_RiftPortal_Item_Athena_C_ShouldShowSoundIndicator::CallFunc_FindSeatIndex_ReturnValue' has a wrong offset!");
static_assert(offsetof(BGA_RiftPortal_Item_Athena_C_ShouldShowSoundIndicator, CallFunc_EqualEqual_IntInt_ReturnValue) == 0x000060, "Member 'BGA_RiftPortal_Item_Athena_C_ShouldShowSoundIndicator::CallFunc_EqualEqual_IntInt_ReturnValue' has a wrong offset!");

}
