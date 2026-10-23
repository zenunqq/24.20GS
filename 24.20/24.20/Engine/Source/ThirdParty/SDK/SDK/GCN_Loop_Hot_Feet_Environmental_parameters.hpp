#pragma once

#include "Basic.hpp"

#include "GameplayAbilities_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "Engine_structs.hpp"

namespace SDK::Params
{

struct GCN_Loop_Hot_Feet_Environmental_C_ExecuteUbergraph_GCN_Loop_Hot_Feet_Environmental final
{
public:
	int32                                         EntryPoint;
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;
	class AFortPlayerPawnAthena*                  K2Node_DynamicCast_AsFort_Player_Pawn_Athena;
	bool                                          K2Node_DynamicCast_bSuccess;
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;
	bool                                          CallFunc_IsFalling_ReturnValue;
	bool                                          CallFunc_BooleanOR_ReturnValue;
	uint8                                         Pad_1C[0x4];
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue;
	bool                                          CallFunc_IsLocallyControlled_ReturnValue;
	uint8                                         Pad_39[0x3];
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_1;
	class AActor*                                 K2Node_Event_MyTarget_1;
	struct FGameplayCueParameters                 K2Node_Event_Parameters_1;
	TArray<class UParticleSystemComponent*>       K2Node_Event_ParticleComponents_1;
	TArray<class UAudioComponent*>                K2Node_Event_AudioComponents_1;
	class ULegacyCameraShake*                     K2Node_Event_BurstCameraShakeInstance;
	class ADecalActor*                            K2Node_Event_BurstDecalInstance;
	class AFortPlayerPawnAthena*                  K2Node_DynamicCast_AsFort_Player_Pawn_Athena_1;
	bool                                          K2Node_DynamicCast_bSuccess_1;
	uint8                                         Pad_159[0x7];
	class AFortPlayerPawn*                        K2Node_DynamicCast_AsFort_Player_Pawn;
	bool                                          K2Node_DynamicCast_bSuccess_2;
	uint8                                         Pad_169[0x7];
	class UParticleSystemComponent*               CallFunc_SpawnEmitterAttached_ReturnValue;
	int32                                         CallFunc_Array_Length_ReturnValue;
	uint8                                         Pad_17C[0x4];
	double                                        CallFunc_GetGameTimeInSeconds_ReturnValue;
	class AActor*                                 K2Node_CustomEvent_SelfActor;
	class AActor*                                 K2Node_CustomEvent_OtherActor;
	struct FVector                                K2Node_CustomEvent_NormalImpulse;
	struct FHitResult                             K2Node_CustomEvent_Hit_1;
	bool                                          CallFunc_BreakHitResult_bBlockingHit;
	bool                                          CallFunc_BreakHitResult_bInitialOverlap;
	uint8                                         Pad_292[0x2];
	float                                         CallFunc_BreakHitResult_Time;
	float                                         CallFunc_BreakHitResult_Distance;
	uint8                                         Pad_29C[0x4];
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
	uint8                                         Pad_32C[0x4];
	struct FVector                                CallFunc_BreakHitResult_TraceStart;
	struct FVector                                CallFunc_BreakHitResult_TraceEnd;
	TDelegate<void(class AActor* SelfActor, class AActor* OtherActor, const struct FVector& NormalImpulse, struct FHitResult& Hit)> K2Node_CreateDelegate_OutputDelegate_2;
	TDelegate<void(class AActor* SelfActor, class AActor* OtherActor, const struct FVector& NormalImpulse, struct FHitResult& Hit)> K2Node_CreateDelegate_OutputDelegate_3;
	float                                         K2Node_Event_DeltaSeconds;
	uint8                                         Pad_37C[0x4];
	class UAudioComponent*                        CallFunc_Array_Get_Item;
	class UParticleSystemComponent*               CallFunc_Array_Get_Item_1;
	TScriptInterface<class IAudioParameterControllerInterface> CallFunc_SetFloatParameter_self_CastInput;
	bool                                          CallFunc_IsValid_ReturnValue;
	uint8                                         Pad_3A1[0x7];
	struct FVector                                CallFunc_GetVelocity_ReturnValue;
	double                                        CallFunc_VSize_ReturnValue;
	struct FVector                                CallFunc_GetVelocity_ReturnValue_1;
	double                                        CallFunc_MapRangeClamped_ReturnValue;
	struct FVector                                CallFunc_Multiply_VectorVector_ReturnValue;
	TScriptInterface<class IAudioParameterControllerInterface> CallFunc_SetFloatParameter_self_CastInput_1;
	bool                                          CallFunc_OnCollision_OutResult;
	uint8                                         Pad_411[0x3];
	float                                         CallFunc_OnCollision_OutMagnitude;
	struct FHitResult                             K2Node_CustomEvent_Hit;
	TDelegate<void(struct FHitResult& Hit)>       K2Node_CreateDelegate_OutputDelegate_4;
	uint8                                         Pad_504[0x4];
	class USceneComponent*                        CallFunc_K2_GetRootComponent_ReturnValue;
	class AActor*                                 K2Node_Event_MyTarget;
	struct FGameplayCueParameters                 K2Node_Event_Parameters;
	TArray<class UParticleSystemComponent*>       K2Node_Event_ParticleComponents;
	TArray<class UAudioComponent*>                K2Node_Event_AudioComponents;
	class UAudioComponent*                        CallFunc_SpawnSoundAttached_ReturnValue;
	class AFortPlayerPawn*                        K2Node_DynamicCast_AsFort_Player_Pawn_1;
	bool                                          K2Node_DynamicCast_bSuccess_3;
	uint8                                         Pad_619[0x7];
	struct FTransform                             Temp_struct_Variable;
	class UFortCollisionAudioComponent*           CallFunc_AddComponent_ReturnValue;
	bool                                          CallFunc_K2_AttachToComponent_ReturnValue;
	uint8                                         Pad_689[0x3];
	TDelegate<void(struct FHitResult& Hit)>       K2Node_CreateDelegate_OutputDelegate_5;
	bool                                          Temp_bool_Variable;
	uint8                                         Pad_699[0x7];
	class ACharacter*                             K2Node_CustomEvent_Character;
	EMovementMode                                 K2Node_CustomEvent_PrevMovementMode;
	uint8                                         K2Node_CustomEvent_PreviousCustomMode;
	bool                                          CallFunc_IsValid_ReturnValue_1;
	uint8                                         Pad_6AB[0x5];
	class USoundBase*                             K2Node_Select_Default;
	TDelegate<void(class ACharacter* Character, EMovementMode PrevMovementMode, uint8 PreviousCustomMode)> K2Node_CreateDelegate_OutputDelegate_6;
	bool                                          K2Node_SwitchEnum_CmpSuccess;
	uint8                                         Pad_6C5[0x3];
	TDelegate<void(class ACharacter* Character, EMovementMode PrevMovementMode, uint8 PreviousCustomMode)> K2Node_CreateDelegate_OutputDelegate_7;
	uint8                                         Pad_6D4[0x4];
	class USceneComponent*                        CallFunc_K2_GetRootComponent_ReturnValue_1;
	int32                                         Temp_int_Variable;
	int32                                         CallFunc_Add_IntInt_ReturnValue;
	class UAudioComponent*                        CallFunc_SpawnSoundAttached_ReturnValue_1;
	class UParticleSystemComponent*               CallFunc_Array_Get_Item_2;
	bool                                          CallFunc_Less_IntInt_ReturnValue;
	uint8                                         Pad_6F9[0x7];
	class UPrimitiveComponent*                    K2Node_Event_MyComp;
	class AActor*                                 K2Node_Event_Other;
	class UPrimitiveComponent*                    K2Node_Event_OtherComp;
	bool                                          K2Node_Event_bSelfMoved;
	uint8                                         Pad_719[0x7];
	struct FVector                                K2Node_Event_HitLocation;
	struct FVector                                K2Node_Event_HitNormal;
	struct FVector                                K2Node_Event_NormalImpulse;
	struct FHitResult                             K2Node_Event_Hit;
	float                                         CallFunc_SetFloatParameter_Param_ImplicitCast;
	float                                         CallFunc_SetFloatParameter_InFloat_ImplicitCast;
};
static_assert(alignof(GCN_Loop_Hot_Feet_Environmental_C_ExecuteUbergraph_GCN_Loop_Hot_Feet_Environmental) == 0x000010, "Wrong alignment on GCN_Loop_Hot_Feet_Environmental_C_ExecuteUbergraph_GCN_Loop_Hot_Feet_Environmental");
static_assert(sizeof(GCN_Loop_Hot_Feet_Environmental_C_ExecuteUbergraph_GCN_Loop_Hot_Feet_Environmental) == 0x000850, "Wrong size on GCN_Loop_Hot_Feet_Environmental_C_ExecuteUbergraph_GCN_Loop_Hot_Feet_Environmental");
static_assert(offsetof(GCN_Loop_Hot_Feet_Environmental_C_ExecuteUbergraph_GCN_Loop_Hot_Feet_Environmental, EntryPoint) == 0x000000, "Member 'GCN_Loop_Hot_Feet_Environmental_C_ExecuteUbergraph_GCN_Loop_Hot_Feet_Environmental::EntryPoint' has a wrong offset!");
static_assert(offsetof(GCN_Loop_Hot_Feet_Environmental_C_ExecuteUbergraph_GCN_Loop_Hot_Feet_Environmental, K2Node_CreateDelegate_OutputDelegate) == 0x000004, "Member 'GCN_Loop_Hot_Feet_Environmental_C_ExecuteUbergraph_GCN_Loop_Hot_Feet_Environmental::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(GCN_Loop_Hot_Feet_Environmental_C_ExecuteUbergraph_GCN_Loop_Hot_Feet_Environmental, K2Node_DynamicCast_AsFort_Player_Pawn_Athena) == 0x000010, "Member 'GCN_Loop_Hot_Feet_Environmental_C_ExecuteUbergraph_GCN_Loop_Hot_Feet_Environmental::K2Node_DynamicCast_AsFort_Player_Pawn_Athena' has a wrong offset!");
static_assert(offsetof(GCN_Loop_Hot_Feet_Environmental_C_ExecuteUbergraph_GCN_Loop_Hot_Feet_Environmental, K2Node_DynamicCast_bSuccess) == 0x000018, "Member 'GCN_Loop_Hot_Feet_Environmental_C_ExecuteUbergraph_GCN_Loop_Hot_Feet_Environmental::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(GCN_Loop_Hot_Feet_Environmental_C_ExecuteUbergraph_GCN_Loop_Hot_Feet_Environmental, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x000019, "Member 'GCN_Loop_Hot_Feet_Environmental_C_ExecuteUbergraph_GCN_Loop_Hot_Feet_Environmental::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(GCN_Loop_Hot_Feet_Environmental_C_ExecuteUbergraph_GCN_Loop_Hot_Feet_Environmental, CallFunc_IsFalling_ReturnValue) == 0x00001A, "Member 'GCN_Loop_Hot_Feet_Environmental_C_ExecuteUbergraph_GCN_Loop_Hot_Feet_Environmental::CallFunc_IsFalling_ReturnValue' has a wrong offset!");
static_assert(offsetof(GCN_Loop_Hot_Feet_Environmental_C_ExecuteUbergraph_GCN_Loop_Hot_Feet_Environmental, CallFunc_BooleanOR_ReturnValue) == 0x00001B, "Member 'GCN_Loop_Hot_Feet_Environmental_C_ExecuteUbergraph_GCN_Loop_Hot_Feet_Environmental::CallFunc_BooleanOR_ReturnValue' has a wrong offset!");
static_assert(offsetof(GCN_Loop_Hot_Feet_Environmental_C_ExecuteUbergraph_GCN_Loop_Hot_Feet_Environmental, CallFunc_K2_GetActorLocation_ReturnValue) == 0x000020, "Member 'GCN_Loop_Hot_Feet_Environmental_C_ExecuteUbergraph_GCN_Loop_Hot_Feet_Environmental::CallFunc_K2_GetActorLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(GCN_Loop_Hot_Feet_Environmental_C_ExecuteUbergraph_GCN_Loop_Hot_Feet_Environmental, CallFunc_IsLocallyControlled_ReturnValue) == 0x000038, "Member 'GCN_Loop_Hot_Feet_Environmental_C_ExecuteUbergraph_GCN_Loop_Hot_Feet_Environmental::CallFunc_IsLocallyControlled_ReturnValue' has a wrong offset!");
static_assert(offsetof(GCN_Loop_Hot_Feet_Environmental_C_ExecuteUbergraph_GCN_Loop_Hot_Feet_Environmental, K2Node_CreateDelegate_OutputDelegate_1) == 0x00003C, "Member 'GCN_Loop_Hot_Feet_Environmental_C_ExecuteUbergraph_GCN_Loop_Hot_Feet_Environmental::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(GCN_Loop_Hot_Feet_Environmental_C_ExecuteUbergraph_GCN_Loop_Hot_Feet_Environmental, K2Node_Event_MyTarget_1) == 0x000048, "Member 'GCN_Loop_Hot_Feet_Environmental_C_ExecuteUbergraph_GCN_Loop_Hot_Feet_Environmental::K2Node_Event_MyTarget_1' has a wrong offset!");
static_assert(offsetof(GCN_Loop_Hot_Feet_Environmental_C_ExecuteUbergraph_GCN_Loop_Hot_Feet_Environmental, K2Node_Event_Parameters_1) == 0x000050, "Member 'GCN_Loop_Hot_Feet_Environmental_C_ExecuteUbergraph_GCN_Loop_Hot_Feet_Environmental::K2Node_Event_Parameters_1' has a wrong offset!");
static_assert(offsetof(GCN_Loop_Hot_Feet_Environmental_C_ExecuteUbergraph_GCN_Loop_Hot_Feet_Environmental, K2Node_Event_ParticleComponents_1) == 0x000120, "Member 'GCN_Loop_Hot_Feet_Environmental_C_ExecuteUbergraph_GCN_Loop_Hot_Feet_Environmental::K2Node_Event_ParticleComponents_1' has a wrong offset!");
static_assert(offsetof(GCN_Loop_Hot_Feet_Environmental_C_ExecuteUbergraph_GCN_Loop_Hot_Feet_Environmental, K2Node_Event_AudioComponents_1) == 0x000130, "Member 'GCN_Loop_Hot_Feet_Environmental_C_ExecuteUbergraph_GCN_Loop_Hot_Feet_Environmental::K2Node_Event_AudioComponents_1' has a wrong offset!");
static_assert(offsetof(GCN_Loop_Hot_Feet_Environmental_C_ExecuteUbergraph_GCN_Loop_Hot_Feet_Environmental, K2Node_Event_BurstCameraShakeInstance) == 0x000140, "Member 'GCN_Loop_Hot_Feet_Environmental_C_ExecuteUbergraph_GCN_Loop_Hot_Feet_Environmental::K2Node_Event_BurstCameraShakeInstance' has a wrong offset!");
static_assert(offsetof(GCN_Loop_Hot_Feet_Environmental_C_ExecuteUbergraph_GCN_Loop_Hot_Feet_Environmental, K2Node_Event_BurstDecalInstance) == 0x000148, "Member 'GCN_Loop_Hot_Feet_Environmental_C_ExecuteUbergraph_GCN_Loop_Hot_Feet_Environmental::K2Node_Event_BurstDecalInstance' has a wrong offset!");
static_assert(offsetof(GCN_Loop_Hot_Feet_Environmental_C_ExecuteUbergraph_GCN_Loop_Hot_Feet_Environmental, K2Node_DynamicCast_AsFort_Player_Pawn_Athena_1) == 0x000150, "Member 'GCN_Loop_Hot_Feet_Environmental_C_ExecuteUbergraph_GCN_Loop_Hot_Feet_Environmental::K2Node_DynamicCast_AsFort_Player_Pawn_Athena_1' has a wrong offset!");
static_assert(offsetof(GCN_Loop_Hot_Feet_Environmental_C_ExecuteUbergraph_GCN_Loop_Hot_Feet_Environmental, K2Node_DynamicCast_bSuccess_1) == 0x000158, "Member 'GCN_Loop_Hot_Feet_Environmental_C_ExecuteUbergraph_GCN_Loop_Hot_Feet_Environmental::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(GCN_Loop_Hot_Feet_Environmental_C_ExecuteUbergraph_GCN_Loop_Hot_Feet_Environmental, K2Node_DynamicCast_AsFort_Player_Pawn) == 0x000160, "Member 'GCN_Loop_Hot_Feet_Environmental_C_ExecuteUbergraph_GCN_Loop_Hot_Feet_Environmental::K2Node_DynamicCast_AsFort_Player_Pawn' has a wrong offset!");
static_assert(offsetof(GCN_Loop_Hot_Feet_Environmental_C_ExecuteUbergraph_GCN_Loop_Hot_Feet_Environmental, K2Node_DynamicCast_bSuccess_2) == 0x000168, "Member 'GCN_Loop_Hot_Feet_Environmental_C_ExecuteUbergraph_GCN_Loop_Hot_Feet_Environmental::K2Node_DynamicCast_bSuccess_2' has a wrong offset!");
static_assert(offsetof(GCN_Loop_Hot_Feet_Environmental_C_ExecuteUbergraph_GCN_Loop_Hot_Feet_Environmental, CallFunc_SpawnEmitterAttached_ReturnValue) == 0x000170, "Member 'GCN_Loop_Hot_Feet_Environmental_C_ExecuteUbergraph_GCN_Loop_Hot_Feet_Environmental::CallFunc_SpawnEmitterAttached_ReturnValue' has a wrong offset!");
static_assert(offsetof(GCN_Loop_Hot_Feet_Environmental_C_ExecuteUbergraph_GCN_Loop_Hot_Feet_Environmental, CallFunc_Array_Length_ReturnValue) == 0x000178, "Member 'GCN_Loop_Hot_Feet_Environmental_C_ExecuteUbergraph_GCN_Loop_Hot_Feet_Environmental::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(GCN_Loop_Hot_Feet_Environmental_C_ExecuteUbergraph_GCN_Loop_Hot_Feet_Environmental, CallFunc_GetGameTimeInSeconds_ReturnValue) == 0x000180, "Member 'GCN_Loop_Hot_Feet_Environmental_C_ExecuteUbergraph_GCN_Loop_Hot_Feet_Environmental::CallFunc_GetGameTimeInSeconds_ReturnValue' has a wrong offset!");
static_assert(offsetof(GCN_Loop_Hot_Feet_Environmental_C_ExecuteUbergraph_GCN_Loop_Hot_Feet_Environmental, K2Node_CustomEvent_SelfActor) == 0x000188, "Member 'GCN_Loop_Hot_Feet_Environmental_C_ExecuteUbergraph_GCN_Loop_Hot_Feet_Environmental::K2Node_CustomEvent_SelfActor' has a wrong offset!");
static_assert(offsetof(GCN_Loop_Hot_Feet_Environmental_C_ExecuteUbergraph_GCN_Loop_Hot_Feet_Environmental, K2Node_CustomEvent_OtherActor) == 0x000190, "Member 'GCN_Loop_Hot_Feet_Environmental_C_ExecuteUbergraph_GCN_Loop_Hot_Feet_Environmental::K2Node_CustomEvent_OtherActor' has a wrong offset!");
static_assert(offsetof(GCN_Loop_Hot_Feet_Environmental_C_ExecuteUbergraph_GCN_Loop_Hot_Feet_Environmental, K2Node_CustomEvent_NormalImpulse) == 0x000198, "Member 'GCN_Loop_Hot_Feet_Environmental_C_ExecuteUbergraph_GCN_Loop_Hot_Feet_Environmental::K2Node_CustomEvent_NormalImpulse' has a wrong offset!");
static_assert(offsetof(GCN_Loop_Hot_Feet_Environmental_C_ExecuteUbergraph_GCN_Loop_Hot_Feet_Environmental, K2Node_CustomEvent_Hit_1) == 0x0001B0, "Member 'GCN_Loop_Hot_Feet_Environmental_C_ExecuteUbergraph_GCN_Loop_Hot_Feet_Environmental::K2Node_CustomEvent_Hit_1' has a wrong offset!");
static_assert(offsetof(GCN_Loop_Hot_Feet_Environmental_C_ExecuteUbergraph_GCN_Loop_Hot_Feet_Environmental, CallFunc_BreakHitResult_bBlockingHit) == 0x000290, "Member 'GCN_Loop_Hot_Feet_Environmental_C_ExecuteUbergraph_GCN_Loop_Hot_Feet_Environmental::CallFunc_BreakHitResult_bBlockingHit' has a wrong offset!");
static_assert(offsetof(GCN_Loop_Hot_Feet_Environmental_C_ExecuteUbergraph_GCN_Loop_Hot_Feet_Environmental, CallFunc_BreakHitResult_bInitialOverlap) == 0x000291, "Member 'GCN_Loop_Hot_Feet_Environmental_C_ExecuteUbergraph_GCN_Loop_Hot_Feet_Environmental::CallFunc_BreakHitResult_bInitialOverlap' has a wrong offset!");
static_assert(offsetof(GCN_Loop_Hot_Feet_Environmental_C_ExecuteUbergraph_GCN_Loop_Hot_Feet_Environmental, CallFunc_BreakHitResult_Time) == 0x000294, "Member 'GCN_Loop_Hot_Feet_Environmental_C_ExecuteUbergraph_GCN_Loop_Hot_Feet_Environmental::CallFunc_BreakHitResult_Time' has a wrong offset!");
static_assert(offsetof(GCN_Loop_Hot_Feet_Environmental_C_ExecuteUbergraph_GCN_Loop_Hot_Feet_Environmental, CallFunc_BreakHitResult_Distance) == 0x000298, "Member 'GCN_Loop_Hot_Feet_Environmental_C_ExecuteUbergraph_GCN_Loop_Hot_Feet_Environmental::CallFunc_BreakHitResult_Distance' has a wrong offset!");
static_assert(offsetof(GCN_Loop_Hot_Feet_Environmental_C_ExecuteUbergraph_GCN_Loop_Hot_Feet_Environmental, CallFunc_BreakHitResult_Location) == 0x0002A0, "Member 'GCN_Loop_Hot_Feet_Environmental_C_ExecuteUbergraph_GCN_Loop_Hot_Feet_Environmental::CallFunc_BreakHitResult_Location' has a wrong offset!");
static_assert(offsetof(GCN_Loop_Hot_Feet_Environmental_C_ExecuteUbergraph_GCN_Loop_Hot_Feet_Environmental, CallFunc_BreakHitResult_ImpactPoint) == 0x0002B8, "Member 'GCN_Loop_Hot_Feet_Environmental_C_ExecuteUbergraph_GCN_Loop_Hot_Feet_Environmental::CallFunc_BreakHitResult_ImpactPoint' has a wrong offset!");
static_assert(offsetof(GCN_Loop_Hot_Feet_Environmental_C_ExecuteUbergraph_GCN_Loop_Hot_Feet_Environmental, CallFunc_BreakHitResult_Normal) == 0x0002D0, "Member 'GCN_Loop_Hot_Feet_Environmental_C_ExecuteUbergraph_GCN_Loop_Hot_Feet_Environmental::CallFunc_BreakHitResult_Normal' has a wrong offset!");
static_assert(offsetof(GCN_Loop_Hot_Feet_Environmental_C_ExecuteUbergraph_GCN_Loop_Hot_Feet_Environmental, CallFunc_BreakHitResult_ImpactNormal) == 0x0002E8, "Member 'GCN_Loop_Hot_Feet_Environmental_C_ExecuteUbergraph_GCN_Loop_Hot_Feet_Environmental::CallFunc_BreakHitResult_ImpactNormal' has a wrong offset!");
static_assert(offsetof(GCN_Loop_Hot_Feet_Environmental_C_ExecuteUbergraph_GCN_Loop_Hot_Feet_Environmental, CallFunc_BreakHitResult_PhysMat) == 0x000300, "Member 'GCN_Loop_Hot_Feet_Environmental_C_ExecuteUbergraph_GCN_Loop_Hot_Feet_Environmental::CallFunc_BreakHitResult_PhysMat' has a wrong offset!");
static_assert(offsetof(GCN_Loop_Hot_Feet_Environmental_C_ExecuteUbergraph_GCN_Loop_Hot_Feet_Environmental, CallFunc_BreakHitResult_HitActor) == 0x000308, "Member 'GCN_Loop_Hot_Feet_Environmental_C_ExecuteUbergraph_GCN_Loop_Hot_Feet_Environmental::CallFunc_BreakHitResult_HitActor' has a wrong offset!");
static_assert(offsetof(GCN_Loop_Hot_Feet_Environmental_C_ExecuteUbergraph_GCN_Loop_Hot_Feet_Environmental, CallFunc_BreakHitResult_HitComponent) == 0x000310, "Member 'GCN_Loop_Hot_Feet_Environmental_C_ExecuteUbergraph_GCN_Loop_Hot_Feet_Environmental::CallFunc_BreakHitResult_HitComponent' has a wrong offset!");
static_assert(offsetof(GCN_Loop_Hot_Feet_Environmental_C_ExecuteUbergraph_GCN_Loop_Hot_Feet_Environmental, CallFunc_BreakHitResult_HitBoneName) == 0x000318, "Member 'GCN_Loop_Hot_Feet_Environmental_C_ExecuteUbergraph_GCN_Loop_Hot_Feet_Environmental::CallFunc_BreakHitResult_HitBoneName' has a wrong offset!");
static_assert(offsetof(GCN_Loop_Hot_Feet_Environmental_C_ExecuteUbergraph_GCN_Loop_Hot_Feet_Environmental, CallFunc_BreakHitResult_BoneName) == 0x00031C, "Member 'GCN_Loop_Hot_Feet_Environmental_C_ExecuteUbergraph_GCN_Loop_Hot_Feet_Environmental::CallFunc_BreakHitResult_BoneName' has a wrong offset!");
static_assert(offsetof(GCN_Loop_Hot_Feet_Environmental_C_ExecuteUbergraph_GCN_Loop_Hot_Feet_Environmental, CallFunc_BreakHitResult_HitItem) == 0x000320, "Member 'GCN_Loop_Hot_Feet_Environmental_C_ExecuteUbergraph_GCN_Loop_Hot_Feet_Environmental::CallFunc_BreakHitResult_HitItem' has a wrong offset!");
static_assert(offsetof(GCN_Loop_Hot_Feet_Environmental_C_ExecuteUbergraph_GCN_Loop_Hot_Feet_Environmental, CallFunc_BreakHitResult_ElementIndex) == 0x000324, "Member 'GCN_Loop_Hot_Feet_Environmental_C_ExecuteUbergraph_GCN_Loop_Hot_Feet_Environmental::CallFunc_BreakHitResult_ElementIndex' has a wrong offset!");
static_assert(offsetof(GCN_Loop_Hot_Feet_Environmental_C_ExecuteUbergraph_GCN_Loop_Hot_Feet_Environmental, CallFunc_BreakHitResult_FaceIndex) == 0x000328, "Member 'GCN_Loop_Hot_Feet_Environmental_C_ExecuteUbergraph_GCN_Loop_Hot_Feet_Environmental::CallFunc_BreakHitResult_FaceIndex' has a wrong offset!");
static_assert(offsetof(GCN_Loop_Hot_Feet_Environmental_C_ExecuteUbergraph_GCN_Loop_Hot_Feet_Environmental, CallFunc_BreakHitResult_TraceStart) == 0x000330, "Member 'GCN_Loop_Hot_Feet_Environmental_C_ExecuteUbergraph_GCN_Loop_Hot_Feet_Environmental::CallFunc_BreakHitResult_TraceStart' has a wrong offset!");
static_assert(offsetof(GCN_Loop_Hot_Feet_Environmental_C_ExecuteUbergraph_GCN_Loop_Hot_Feet_Environmental, CallFunc_BreakHitResult_TraceEnd) == 0x000348, "Member 'GCN_Loop_Hot_Feet_Environmental_C_ExecuteUbergraph_GCN_Loop_Hot_Feet_Environmental::CallFunc_BreakHitResult_TraceEnd' has a wrong offset!");
static_assert(offsetof(GCN_Loop_Hot_Feet_Environmental_C_ExecuteUbergraph_GCN_Loop_Hot_Feet_Environmental, K2Node_CreateDelegate_OutputDelegate_2) == 0x000360, "Member 'GCN_Loop_Hot_Feet_Environmental_C_ExecuteUbergraph_GCN_Loop_Hot_Feet_Environmental::K2Node_CreateDelegate_OutputDelegate_2' has a wrong offset!");
static_assert(offsetof(GCN_Loop_Hot_Feet_Environmental_C_ExecuteUbergraph_GCN_Loop_Hot_Feet_Environmental, K2Node_CreateDelegate_OutputDelegate_3) == 0x00036C, "Member 'GCN_Loop_Hot_Feet_Environmental_C_ExecuteUbergraph_GCN_Loop_Hot_Feet_Environmental::K2Node_CreateDelegate_OutputDelegate_3' has a wrong offset!");
static_assert(offsetof(GCN_Loop_Hot_Feet_Environmental_C_ExecuteUbergraph_GCN_Loop_Hot_Feet_Environmental, K2Node_Event_DeltaSeconds) == 0x000378, "Member 'GCN_Loop_Hot_Feet_Environmental_C_ExecuteUbergraph_GCN_Loop_Hot_Feet_Environmental::K2Node_Event_DeltaSeconds' has a wrong offset!");
static_assert(offsetof(GCN_Loop_Hot_Feet_Environmental_C_ExecuteUbergraph_GCN_Loop_Hot_Feet_Environmental, CallFunc_Array_Get_Item) == 0x000380, "Member 'GCN_Loop_Hot_Feet_Environmental_C_ExecuteUbergraph_GCN_Loop_Hot_Feet_Environmental::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(GCN_Loop_Hot_Feet_Environmental_C_ExecuteUbergraph_GCN_Loop_Hot_Feet_Environmental, CallFunc_Array_Get_Item_1) == 0x000388, "Member 'GCN_Loop_Hot_Feet_Environmental_C_ExecuteUbergraph_GCN_Loop_Hot_Feet_Environmental::CallFunc_Array_Get_Item_1' has a wrong offset!");
static_assert(offsetof(GCN_Loop_Hot_Feet_Environmental_C_ExecuteUbergraph_GCN_Loop_Hot_Feet_Environmental, CallFunc_SetFloatParameter_self_CastInput) == 0x000390, "Member 'GCN_Loop_Hot_Feet_Environmental_C_ExecuteUbergraph_GCN_Loop_Hot_Feet_Environmental::CallFunc_SetFloatParameter_self_CastInput' has a wrong offset!");
static_assert(offsetof(GCN_Loop_Hot_Feet_Environmental_C_ExecuteUbergraph_GCN_Loop_Hot_Feet_Environmental, CallFunc_IsValid_ReturnValue) == 0x0003A0, "Member 'GCN_Loop_Hot_Feet_Environmental_C_ExecuteUbergraph_GCN_Loop_Hot_Feet_Environmental::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(GCN_Loop_Hot_Feet_Environmental_C_ExecuteUbergraph_GCN_Loop_Hot_Feet_Environmental, CallFunc_GetVelocity_ReturnValue) == 0x0003A8, "Member 'GCN_Loop_Hot_Feet_Environmental_C_ExecuteUbergraph_GCN_Loop_Hot_Feet_Environmental::CallFunc_GetVelocity_ReturnValue' has a wrong offset!");
static_assert(offsetof(GCN_Loop_Hot_Feet_Environmental_C_ExecuteUbergraph_GCN_Loop_Hot_Feet_Environmental, CallFunc_VSize_ReturnValue) == 0x0003C0, "Member 'GCN_Loop_Hot_Feet_Environmental_C_ExecuteUbergraph_GCN_Loop_Hot_Feet_Environmental::CallFunc_VSize_ReturnValue' has a wrong offset!");
static_assert(offsetof(GCN_Loop_Hot_Feet_Environmental_C_ExecuteUbergraph_GCN_Loop_Hot_Feet_Environmental, CallFunc_GetVelocity_ReturnValue_1) == 0x0003C8, "Member 'GCN_Loop_Hot_Feet_Environmental_C_ExecuteUbergraph_GCN_Loop_Hot_Feet_Environmental::CallFunc_GetVelocity_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GCN_Loop_Hot_Feet_Environmental_C_ExecuteUbergraph_GCN_Loop_Hot_Feet_Environmental, CallFunc_MapRangeClamped_ReturnValue) == 0x0003E0, "Member 'GCN_Loop_Hot_Feet_Environmental_C_ExecuteUbergraph_GCN_Loop_Hot_Feet_Environmental::CallFunc_MapRangeClamped_ReturnValue' has a wrong offset!");
static_assert(offsetof(GCN_Loop_Hot_Feet_Environmental_C_ExecuteUbergraph_GCN_Loop_Hot_Feet_Environmental, CallFunc_Multiply_VectorVector_ReturnValue) == 0x0003E8, "Member 'GCN_Loop_Hot_Feet_Environmental_C_ExecuteUbergraph_GCN_Loop_Hot_Feet_Environmental::CallFunc_Multiply_VectorVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(GCN_Loop_Hot_Feet_Environmental_C_ExecuteUbergraph_GCN_Loop_Hot_Feet_Environmental, CallFunc_SetFloatParameter_self_CastInput_1) == 0x000400, "Member 'GCN_Loop_Hot_Feet_Environmental_C_ExecuteUbergraph_GCN_Loop_Hot_Feet_Environmental::CallFunc_SetFloatParameter_self_CastInput_1' has a wrong offset!");
static_assert(offsetof(GCN_Loop_Hot_Feet_Environmental_C_ExecuteUbergraph_GCN_Loop_Hot_Feet_Environmental, CallFunc_OnCollision_OutResult) == 0x000410, "Member 'GCN_Loop_Hot_Feet_Environmental_C_ExecuteUbergraph_GCN_Loop_Hot_Feet_Environmental::CallFunc_OnCollision_OutResult' has a wrong offset!");
static_assert(offsetof(GCN_Loop_Hot_Feet_Environmental_C_ExecuteUbergraph_GCN_Loop_Hot_Feet_Environmental, CallFunc_OnCollision_OutMagnitude) == 0x000414, "Member 'GCN_Loop_Hot_Feet_Environmental_C_ExecuteUbergraph_GCN_Loop_Hot_Feet_Environmental::CallFunc_OnCollision_OutMagnitude' has a wrong offset!");
static_assert(offsetof(GCN_Loop_Hot_Feet_Environmental_C_ExecuteUbergraph_GCN_Loop_Hot_Feet_Environmental, K2Node_CustomEvent_Hit) == 0x000418, "Member 'GCN_Loop_Hot_Feet_Environmental_C_ExecuteUbergraph_GCN_Loop_Hot_Feet_Environmental::K2Node_CustomEvent_Hit' has a wrong offset!");
static_assert(offsetof(GCN_Loop_Hot_Feet_Environmental_C_ExecuteUbergraph_GCN_Loop_Hot_Feet_Environmental, K2Node_CreateDelegate_OutputDelegate_4) == 0x0004F8, "Member 'GCN_Loop_Hot_Feet_Environmental_C_ExecuteUbergraph_GCN_Loop_Hot_Feet_Environmental::K2Node_CreateDelegate_OutputDelegate_4' has a wrong offset!");
static_assert(offsetof(GCN_Loop_Hot_Feet_Environmental_C_ExecuteUbergraph_GCN_Loop_Hot_Feet_Environmental, CallFunc_K2_GetRootComponent_ReturnValue) == 0x000508, "Member 'GCN_Loop_Hot_Feet_Environmental_C_ExecuteUbergraph_GCN_Loop_Hot_Feet_Environmental::CallFunc_K2_GetRootComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(GCN_Loop_Hot_Feet_Environmental_C_ExecuteUbergraph_GCN_Loop_Hot_Feet_Environmental, K2Node_Event_MyTarget) == 0x000510, "Member 'GCN_Loop_Hot_Feet_Environmental_C_ExecuteUbergraph_GCN_Loop_Hot_Feet_Environmental::K2Node_Event_MyTarget' has a wrong offset!");
static_assert(offsetof(GCN_Loop_Hot_Feet_Environmental_C_ExecuteUbergraph_GCN_Loop_Hot_Feet_Environmental, K2Node_Event_Parameters) == 0x000518, "Member 'GCN_Loop_Hot_Feet_Environmental_C_ExecuteUbergraph_GCN_Loop_Hot_Feet_Environmental::K2Node_Event_Parameters' has a wrong offset!");
static_assert(offsetof(GCN_Loop_Hot_Feet_Environmental_C_ExecuteUbergraph_GCN_Loop_Hot_Feet_Environmental, K2Node_Event_ParticleComponents) == 0x0005E8, "Member 'GCN_Loop_Hot_Feet_Environmental_C_ExecuteUbergraph_GCN_Loop_Hot_Feet_Environmental::K2Node_Event_ParticleComponents' has a wrong offset!");
static_assert(offsetof(GCN_Loop_Hot_Feet_Environmental_C_ExecuteUbergraph_GCN_Loop_Hot_Feet_Environmental, K2Node_Event_AudioComponents) == 0x0005F8, "Member 'GCN_Loop_Hot_Feet_Environmental_C_ExecuteUbergraph_GCN_Loop_Hot_Feet_Environmental::K2Node_Event_AudioComponents' has a wrong offset!");
static_assert(offsetof(GCN_Loop_Hot_Feet_Environmental_C_ExecuteUbergraph_GCN_Loop_Hot_Feet_Environmental, CallFunc_SpawnSoundAttached_ReturnValue) == 0x000608, "Member 'GCN_Loop_Hot_Feet_Environmental_C_ExecuteUbergraph_GCN_Loop_Hot_Feet_Environmental::CallFunc_SpawnSoundAttached_ReturnValue' has a wrong offset!");
static_assert(offsetof(GCN_Loop_Hot_Feet_Environmental_C_ExecuteUbergraph_GCN_Loop_Hot_Feet_Environmental, K2Node_DynamicCast_AsFort_Player_Pawn_1) == 0x000610, "Member 'GCN_Loop_Hot_Feet_Environmental_C_ExecuteUbergraph_GCN_Loop_Hot_Feet_Environmental::K2Node_DynamicCast_AsFort_Player_Pawn_1' has a wrong offset!");
static_assert(offsetof(GCN_Loop_Hot_Feet_Environmental_C_ExecuteUbergraph_GCN_Loop_Hot_Feet_Environmental, K2Node_DynamicCast_bSuccess_3) == 0x000618, "Member 'GCN_Loop_Hot_Feet_Environmental_C_ExecuteUbergraph_GCN_Loop_Hot_Feet_Environmental::K2Node_DynamicCast_bSuccess_3' has a wrong offset!");
static_assert(offsetof(GCN_Loop_Hot_Feet_Environmental_C_ExecuteUbergraph_GCN_Loop_Hot_Feet_Environmental, Temp_struct_Variable) == 0x000620, "Member 'GCN_Loop_Hot_Feet_Environmental_C_ExecuteUbergraph_GCN_Loop_Hot_Feet_Environmental::Temp_struct_Variable' has a wrong offset!");
static_assert(offsetof(GCN_Loop_Hot_Feet_Environmental_C_ExecuteUbergraph_GCN_Loop_Hot_Feet_Environmental, CallFunc_AddComponent_ReturnValue) == 0x000680, "Member 'GCN_Loop_Hot_Feet_Environmental_C_ExecuteUbergraph_GCN_Loop_Hot_Feet_Environmental::CallFunc_AddComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(GCN_Loop_Hot_Feet_Environmental_C_ExecuteUbergraph_GCN_Loop_Hot_Feet_Environmental, CallFunc_K2_AttachToComponent_ReturnValue) == 0x000688, "Member 'GCN_Loop_Hot_Feet_Environmental_C_ExecuteUbergraph_GCN_Loop_Hot_Feet_Environmental::CallFunc_K2_AttachToComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(GCN_Loop_Hot_Feet_Environmental_C_ExecuteUbergraph_GCN_Loop_Hot_Feet_Environmental, K2Node_CreateDelegate_OutputDelegate_5) == 0x00068C, "Member 'GCN_Loop_Hot_Feet_Environmental_C_ExecuteUbergraph_GCN_Loop_Hot_Feet_Environmental::K2Node_CreateDelegate_OutputDelegate_5' has a wrong offset!");
static_assert(offsetof(GCN_Loop_Hot_Feet_Environmental_C_ExecuteUbergraph_GCN_Loop_Hot_Feet_Environmental, Temp_bool_Variable) == 0x000698, "Member 'GCN_Loop_Hot_Feet_Environmental_C_ExecuteUbergraph_GCN_Loop_Hot_Feet_Environmental::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(GCN_Loop_Hot_Feet_Environmental_C_ExecuteUbergraph_GCN_Loop_Hot_Feet_Environmental, K2Node_CustomEvent_Character) == 0x0006A0, "Member 'GCN_Loop_Hot_Feet_Environmental_C_ExecuteUbergraph_GCN_Loop_Hot_Feet_Environmental::K2Node_CustomEvent_Character' has a wrong offset!");
static_assert(offsetof(GCN_Loop_Hot_Feet_Environmental_C_ExecuteUbergraph_GCN_Loop_Hot_Feet_Environmental, K2Node_CustomEvent_PrevMovementMode) == 0x0006A8, "Member 'GCN_Loop_Hot_Feet_Environmental_C_ExecuteUbergraph_GCN_Loop_Hot_Feet_Environmental::K2Node_CustomEvent_PrevMovementMode' has a wrong offset!");
static_assert(offsetof(GCN_Loop_Hot_Feet_Environmental_C_ExecuteUbergraph_GCN_Loop_Hot_Feet_Environmental, K2Node_CustomEvent_PreviousCustomMode) == 0x0006A9, "Member 'GCN_Loop_Hot_Feet_Environmental_C_ExecuteUbergraph_GCN_Loop_Hot_Feet_Environmental::K2Node_CustomEvent_PreviousCustomMode' has a wrong offset!");
static_assert(offsetof(GCN_Loop_Hot_Feet_Environmental_C_ExecuteUbergraph_GCN_Loop_Hot_Feet_Environmental, CallFunc_IsValid_ReturnValue_1) == 0x0006AA, "Member 'GCN_Loop_Hot_Feet_Environmental_C_ExecuteUbergraph_GCN_Loop_Hot_Feet_Environmental::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GCN_Loop_Hot_Feet_Environmental_C_ExecuteUbergraph_GCN_Loop_Hot_Feet_Environmental, K2Node_Select_Default) == 0x0006B0, "Member 'GCN_Loop_Hot_Feet_Environmental_C_ExecuteUbergraph_GCN_Loop_Hot_Feet_Environmental::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(GCN_Loop_Hot_Feet_Environmental_C_ExecuteUbergraph_GCN_Loop_Hot_Feet_Environmental, K2Node_CreateDelegate_OutputDelegate_6) == 0x0006B8, "Member 'GCN_Loop_Hot_Feet_Environmental_C_ExecuteUbergraph_GCN_Loop_Hot_Feet_Environmental::K2Node_CreateDelegate_OutputDelegate_6' has a wrong offset!");
static_assert(offsetof(GCN_Loop_Hot_Feet_Environmental_C_ExecuteUbergraph_GCN_Loop_Hot_Feet_Environmental, K2Node_SwitchEnum_CmpSuccess) == 0x0006C4, "Member 'GCN_Loop_Hot_Feet_Environmental_C_ExecuteUbergraph_GCN_Loop_Hot_Feet_Environmental::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");
static_assert(offsetof(GCN_Loop_Hot_Feet_Environmental_C_ExecuteUbergraph_GCN_Loop_Hot_Feet_Environmental, K2Node_CreateDelegate_OutputDelegate_7) == 0x0006C8, "Member 'GCN_Loop_Hot_Feet_Environmental_C_ExecuteUbergraph_GCN_Loop_Hot_Feet_Environmental::K2Node_CreateDelegate_OutputDelegate_7' has a wrong offset!");
static_assert(offsetof(GCN_Loop_Hot_Feet_Environmental_C_ExecuteUbergraph_GCN_Loop_Hot_Feet_Environmental, CallFunc_K2_GetRootComponent_ReturnValue_1) == 0x0006D8, "Member 'GCN_Loop_Hot_Feet_Environmental_C_ExecuteUbergraph_GCN_Loop_Hot_Feet_Environmental::CallFunc_K2_GetRootComponent_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GCN_Loop_Hot_Feet_Environmental_C_ExecuteUbergraph_GCN_Loop_Hot_Feet_Environmental, Temp_int_Variable) == 0x0006E0, "Member 'GCN_Loop_Hot_Feet_Environmental_C_ExecuteUbergraph_GCN_Loop_Hot_Feet_Environmental::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(GCN_Loop_Hot_Feet_Environmental_C_ExecuteUbergraph_GCN_Loop_Hot_Feet_Environmental, CallFunc_Add_IntInt_ReturnValue) == 0x0006E4, "Member 'GCN_Loop_Hot_Feet_Environmental_C_ExecuteUbergraph_GCN_Loop_Hot_Feet_Environmental::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(GCN_Loop_Hot_Feet_Environmental_C_ExecuteUbergraph_GCN_Loop_Hot_Feet_Environmental, CallFunc_SpawnSoundAttached_ReturnValue_1) == 0x0006E8, "Member 'GCN_Loop_Hot_Feet_Environmental_C_ExecuteUbergraph_GCN_Loop_Hot_Feet_Environmental::CallFunc_SpawnSoundAttached_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GCN_Loop_Hot_Feet_Environmental_C_ExecuteUbergraph_GCN_Loop_Hot_Feet_Environmental, CallFunc_Array_Get_Item_2) == 0x0006F0, "Member 'GCN_Loop_Hot_Feet_Environmental_C_ExecuteUbergraph_GCN_Loop_Hot_Feet_Environmental::CallFunc_Array_Get_Item_2' has a wrong offset!");
static_assert(offsetof(GCN_Loop_Hot_Feet_Environmental_C_ExecuteUbergraph_GCN_Loop_Hot_Feet_Environmental, CallFunc_Less_IntInt_ReturnValue) == 0x0006F8, "Member 'GCN_Loop_Hot_Feet_Environmental_C_ExecuteUbergraph_GCN_Loop_Hot_Feet_Environmental::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(GCN_Loop_Hot_Feet_Environmental_C_ExecuteUbergraph_GCN_Loop_Hot_Feet_Environmental, K2Node_Event_MyComp) == 0x000700, "Member 'GCN_Loop_Hot_Feet_Environmental_C_ExecuteUbergraph_GCN_Loop_Hot_Feet_Environmental::K2Node_Event_MyComp' has a wrong offset!");
static_assert(offsetof(GCN_Loop_Hot_Feet_Environmental_C_ExecuteUbergraph_GCN_Loop_Hot_Feet_Environmental, K2Node_Event_Other) == 0x000708, "Member 'GCN_Loop_Hot_Feet_Environmental_C_ExecuteUbergraph_GCN_Loop_Hot_Feet_Environmental::K2Node_Event_Other' has a wrong offset!");
static_assert(offsetof(GCN_Loop_Hot_Feet_Environmental_C_ExecuteUbergraph_GCN_Loop_Hot_Feet_Environmental, K2Node_Event_OtherComp) == 0x000710, "Member 'GCN_Loop_Hot_Feet_Environmental_C_ExecuteUbergraph_GCN_Loop_Hot_Feet_Environmental::K2Node_Event_OtherComp' has a wrong offset!");
static_assert(offsetof(GCN_Loop_Hot_Feet_Environmental_C_ExecuteUbergraph_GCN_Loop_Hot_Feet_Environmental, K2Node_Event_bSelfMoved) == 0x000718, "Member 'GCN_Loop_Hot_Feet_Environmental_C_ExecuteUbergraph_GCN_Loop_Hot_Feet_Environmental::K2Node_Event_bSelfMoved' has a wrong offset!");
static_assert(offsetof(GCN_Loop_Hot_Feet_Environmental_C_ExecuteUbergraph_GCN_Loop_Hot_Feet_Environmental, K2Node_Event_HitLocation) == 0x000720, "Member 'GCN_Loop_Hot_Feet_Environmental_C_ExecuteUbergraph_GCN_Loop_Hot_Feet_Environmental::K2Node_Event_HitLocation' has a wrong offset!");
static_assert(offsetof(GCN_Loop_Hot_Feet_Environmental_C_ExecuteUbergraph_GCN_Loop_Hot_Feet_Environmental, K2Node_Event_HitNormal) == 0x000738, "Member 'GCN_Loop_Hot_Feet_Environmental_C_ExecuteUbergraph_GCN_Loop_Hot_Feet_Environmental::K2Node_Event_HitNormal' has a wrong offset!");
static_assert(offsetof(GCN_Loop_Hot_Feet_Environmental_C_ExecuteUbergraph_GCN_Loop_Hot_Feet_Environmental, K2Node_Event_NormalImpulse) == 0x000750, "Member 'GCN_Loop_Hot_Feet_Environmental_C_ExecuteUbergraph_GCN_Loop_Hot_Feet_Environmental::K2Node_Event_NormalImpulse' has a wrong offset!");
static_assert(offsetof(GCN_Loop_Hot_Feet_Environmental_C_ExecuteUbergraph_GCN_Loop_Hot_Feet_Environmental, K2Node_Event_Hit) == 0x000768, "Member 'GCN_Loop_Hot_Feet_Environmental_C_ExecuteUbergraph_GCN_Loop_Hot_Feet_Environmental::K2Node_Event_Hit' has a wrong offset!");
static_assert(offsetof(GCN_Loop_Hot_Feet_Environmental_C_ExecuteUbergraph_GCN_Loop_Hot_Feet_Environmental, CallFunc_SetFloatParameter_Param_ImplicitCast) == 0x000848, "Member 'GCN_Loop_Hot_Feet_Environmental_C_ExecuteUbergraph_GCN_Loop_Hot_Feet_Environmental::CallFunc_SetFloatParameter_Param_ImplicitCast' has a wrong offset!");
static_assert(offsetof(GCN_Loop_Hot_Feet_Environmental_C_ExecuteUbergraph_GCN_Loop_Hot_Feet_Environmental, CallFunc_SetFloatParameter_InFloat_ImplicitCast) == 0x00084C, "Member 'GCN_Loop_Hot_Feet_Environmental_C_ExecuteUbergraph_GCN_Loop_Hot_Feet_Environmental::CallFunc_SetFloatParameter_InFloat_ImplicitCast' has a wrong offset!");

struct GCN_Loop_Hot_Feet_Environmental_C_On_Target_Pawn_Hit_Event final
{
public:
	class AActor*                                 SelfActor;
	class AActor*                                 OtherActor;
	struct FVector                                NormalImpulse;
	struct FHitResult                             Hit;
};
static_assert(alignof(GCN_Loop_Hot_Feet_Environmental_C_On_Target_Pawn_Hit_Event) == 0x000008, "Wrong alignment on GCN_Loop_Hot_Feet_Environmental_C_On_Target_Pawn_Hit_Event");
static_assert(sizeof(GCN_Loop_Hot_Feet_Environmental_C_On_Target_Pawn_Hit_Event) == 0x000108, "Wrong size on GCN_Loop_Hot_Feet_Environmental_C_On_Target_Pawn_Hit_Event");
static_assert(offsetof(GCN_Loop_Hot_Feet_Environmental_C_On_Target_Pawn_Hit_Event, SelfActor) == 0x000000, "Member 'GCN_Loop_Hot_Feet_Environmental_C_On_Target_Pawn_Hit_Event::SelfActor' has a wrong offset!");
static_assert(offsetof(GCN_Loop_Hot_Feet_Environmental_C_On_Target_Pawn_Hit_Event, OtherActor) == 0x000008, "Member 'GCN_Loop_Hot_Feet_Environmental_C_On_Target_Pawn_Hit_Event::OtherActor' has a wrong offset!");
static_assert(offsetof(GCN_Loop_Hot_Feet_Environmental_C_On_Target_Pawn_Hit_Event, NormalImpulse) == 0x000010, "Member 'GCN_Loop_Hot_Feet_Environmental_C_On_Target_Pawn_Hit_Event::NormalImpulse' has a wrong offset!");
static_assert(offsetof(GCN_Loop_Hot_Feet_Environmental_C_On_Target_Pawn_Hit_Event, Hit) == 0x000028, "Member 'GCN_Loop_Hot_Feet_Environmental_C_On_Target_Pawn_Hit_Event::Hit' has a wrong offset!");

struct GCN_Loop_Hot_Feet_Environmental_C_On_Target_Pawn_Landed final
{
public:
	struct FHitResult                             Hit;
};
static_assert(alignof(GCN_Loop_Hot_Feet_Environmental_C_On_Target_Pawn_Landed) == 0x000008, "Wrong alignment on GCN_Loop_Hot_Feet_Environmental_C_On_Target_Pawn_Landed");
static_assert(sizeof(GCN_Loop_Hot_Feet_Environmental_C_On_Target_Pawn_Landed) == 0x0000E0, "Wrong size on GCN_Loop_Hot_Feet_Environmental_C_On_Target_Pawn_Landed");
static_assert(offsetof(GCN_Loop_Hot_Feet_Environmental_C_On_Target_Pawn_Landed, Hit) == 0x000000, "Member 'GCN_Loop_Hot_Feet_Environmental_C_On_Target_Pawn_Landed::Hit' has a wrong offset!");

struct GCN_Loop_Hot_Feet_Environmental_C_On_Target_Pawn_Movement_Mode_Changed final
{
public:
	class ACharacter*                             Character;
	EMovementMode                                 PrevMovementMode;
	uint8                                         PreviousCustomMode;
};
static_assert(alignof(GCN_Loop_Hot_Feet_Environmental_C_On_Target_Pawn_Movement_Mode_Changed) == 0x000008, "Wrong alignment on GCN_Loop_Hot_Feet_Environmental_C_On_Target_Pawn_Movement_Mode_Changed");
static_assert(sizeof(GCN_Loop_Hot_Feet_Environmental_C_On_Target_Pawn_Movement_Mode_Changed) == 0x000010, "Wrong size on GCN_Loop_Hot_Feet_Environmental_C_On_Target_Pawn_Movement_Mode_Changed");
static_assert(offsetof(GCN_Loop_Hot_Feet_Environmental_C_On_Target_Pawn_Movement_Mode_Changed, Character) == 0x000000, "Member 'GCN_Loop_Hot_Feet_Environmental_C_On_Target_Pawn_Movement_Mode_Changed::Character' has a wrong offset!");
static_assert(offsetof(GCN_Loop_Hot_Feet_Environmental_C_On_Target_Pawn_Movement_Mode_Changed, PrevMovementMode) == 0x000008, "Member 'GCN_Loop_Hot_Feet_Environmental_C_On_Target_Pawn_Movement_Mode_Changed::PrevMovementMode' has a wrong offset!");
static_assert(offsetof(GCN_Loop_Hot_Feet_Environmental_C_On_Target_Pawn_Movement_Mode_Changed, PreviousCustomMode) == 0x000009, "Member 'GCN_Loop_Hot_Feet_Environmental_C_On_Target_Pawn_Movement_Mode_Changed::PreviousCustomMode' has a wrong offset!");

struct GCN_Loop_Hot_Feet_Environmental_C_OnLoopingStart final
{
public:
	class AActor*                                 MyTarget;
	struct FGameplayCueParameters                 Parameters;
	TArray<class UParticleSystemComponent*>       ParticleComponents;
	TArray<class UAudioComponent*>                AudioComponents;
};
static_assert(alignof(GCN_Loop_Hot_Feet_Environmental_C_OnLoopingStart) == 0x000008, "Wrong alignment on GCN_Loop_Hot_Feet_Environmental_C_OnLoopingStart");
static_assert(sizeof(GCN_Loop_Hot_Feet_Environmental_C_OnLoopingStart) == 0x0000F8, "Wrong size on GCN_Loop_Hot_Feet_Environmental_C_OnLoopingStart");
static_assert(offsetof(GCN_Loop_Hot_Feet_Environmental_C_OnLoopingStart, MyTarget) == 0x000000, "Member 'GCN_Loop_Hot_Feet_Environmental_C_OnLoopingStart::MyTarget' has a wrong offset!");
static_assert(offsetof(GCN_Loop_Hot_Feet_Environmental_C_OnLoopingStart, Parameters) == 0x000008, "Member 'GCN_Loop_Hot_Feet_Environmental_C_OnLoopingStart::Parameters' has a wrong offset!");
static_assert(offsetof(GCN_Loop_Hot_Feet_Environmental_C_OnLoopingStart, ParticleComponents) == 0x0000D8, "Member 'GCN_Loop_Hot_Feet_Environmental_C_OnLoopingStart::ParticleComponents' has a wrong offset!");
static_assert(offsetof(GCN_Loop_Hot_Feet_Environmental_C_OnLoopingStart, AudioComponents) == 0x0000E8, "Member 'GCN_Loop_Hot_Feet_Environmental_C_OnLoopingStart::AudioComponents' has a wrong offset!");

struct GCN_Loop_Hot_Feet_Environmental_C_OnRemoval final
{
public:
	class AActor*                                 MyTarget;
	struct FGameplayCueParameters                 Parameters;
	TArray<class UParticleSystemComponent*>       ParticleComponents;
	TArray<class UAudioComponent*>                AudioComponents;
	class ULegacyCameraShake*                     BurstCameraShakeInstance;
	class ADecalActor*                            BurstDecalInstance;
};
static_assert(alignof(GCN_Loop_Hot_Feet_Environmental_C_OnRemoval) == 0x000008, "Wrong alignment on GCN_Loop_Hot_Feet_Environmental_C_OnRemoval");
static_assert(sizeof(GCN_Loop_Hot_Feet_Environmental_C_OnRemoval) == 0x000108, "Wrong size on GCN_Loop_Hot_Feet_Environmental_C_OnRemoval");
static_assert(offsetof(GCN_Loop_Hot_Feet_Environmental_C_OnRemoval, MyTarget) == 0x000000, "Member 'GCN_Loop_Hot_Feet_Environmental_C_OnRemoval::MyTarget' has a wrong offset!");
static_assert(offsetof(GCN_Loop_Hot_Feet_Environmental_C_OnRemoval, Parameters) == 0x000008, "Member 'GCN_Loop_Hot_Feet_Environmental_C_OnRemoval::Parameters' has a wrong offset!");
static_assert(offsetof(GCN_Loop_Hot_Feet_Environmental_C_OnRemoval, ParticleComponents) == 0x0000D8, "Member 'GCN_Loop_Hot_Feet_Environmental_C_OnRemoval::ParticleComponents' has a wrong offset!");
static_assert(offsetof(GCN_Loop_Hot_Feet_Environmental_C_OnRemoval, AudioComponents) == 0x0000E8, "Member 'GCN_Loop_Hot_Feet_Environmental_C_OnRemoval::AudioComponents' has a wrong offset!");
static_assert(offsetof(GCN_Loop_Hot_Feet_Environmental_C_OnRemoval, BurstCameraShakeInstance) == 0x0000F8, "Member 'GCN_Loop_Hot_Feet_Environmental_C_OnRemoval::BurstCameraShakeInstance' has a wrong offset!");
static_assert(offsetof(GCN_Loop_Hot_Feet_Environmental_C_OnRemoval, BurstDecalInstance) == 0x000100, "Member 'GCN_Loop_Hot_Feet_Environmental_C_OnRemoval::BurstDecalInstance' has a wrong offset!");

struct GCN_Loop_Hot_Feet_Environmental_C_ReceiveHit final
{
public:
	class UPrimitiveComponent*                    MyComp;
	class AActor*                                 Other;
	class UPrimitiveComponent*                    OtherComp;
	bool                                          bSelfMoved;
	uint8                                         Pad_19[0x7];
	struct FVector                                HitLocation;
	struct FVector                                HitNormal;
	struct FVector                                NormalImpulse;
	struct FHitResult                             Hit;
};
static_assert(alignof(GCN_Loop_Hot_Feet_Environmental_C_ReceiveHit) == 0x000008, "Wrong alignment on GCN_Loop_Hot_Feet_Environmental_C_ReceiveHit");
static_assert(sizeof(GCN_Loop_Hot_Feet_Environmental_C_ReceiveHit) == 0x000148, "Wrong size on GCN_Loop_Hot_Feet_Environmental_C_ReceiveHit");
static_assert(offsetof(GCN_Loop_Hot_Feet_Environmental_C_ReceiveHit, MyComp) == 0x000000, "Member 'GCN_Loop_Hot_Feet_Environmental_C_ReceiveHit::MyComp' has a wrong offset!");
static_assert(offsetof(GCN_Loop_Hot_Feet_Environmental_C_ReceiveHit, Other) == 0x000008, "Member 'GCN_Loop_Hot_Feet_Environmental_C_ReceiveHit::Other' has a wrong offset!");
static_assert(offsetof(GCN_Loop_Hot_Feet_Environmental_C_ReceiveHit, OtherComp) == 0x000010, "Member 'GCN_Loop_Hot_Feet_Environmental_C_ReceiveHit::OtherComp' has a wrong offset!");
static_assert(offsetof(GCN_Loop_Hot_Feet_Environmental_C_ReceiveHit, bSelfMoved) == 0x000018, "Member 'GCN_Loop_Hot_Feet_Environmental_C_ReceiveHit::bSelfMoved' has a wrong offset!");
static_assert(offsetof(GCN_Loop_Hot_Feet_Environmental_C_ReceiveHit, HitLocation) == 0x000020, "Member 'GCN_Loop_Hot_Feet_Environmental_C_ReceiveHit::HitLocation' has a wrong offset!");
static_assert(offsetof(GCN_Loop_Hot_Feet_Environmental_C_ReceiveHit, HitNormal) == 0x000038, "Member 'GCN_Loop_Hot_Feet_Environmental_C_ReceiveHit::HitNormal' has a wrong offset!");
static_assert(offsetof(GCN_Loop_Hot_Feet_Environmental_C_ReceiveHit, NormalImpulse) == 0x000050, "Member 'GCN_Loop_Hot_Feet_Environmental_C_ReceiveHit::NormalImpulse' has a wrong offset!");
static_assert(offsetof(GCN_Loop_Hot_Feet_Environmental_C_ReceiveHit, Hit) == 0x000068, "Member 'GCN_Loop_Hot_Feet_Environmental_C_ReceiveHit::Hit' has a wrong offset!");

struct GCN_Loop_Hot_Feet_Environmental_C_ReceiveTick final
{
public:
	float                                         DeltaSeconds;
};
static_assert(alignof(GCN_Loop_Hot_Feet_Environmental_C_ReceiveTick) == 0x000004, "Wrong alignment on GCN_Loop_Hot_Feet_Environmental_C_ReceiveTick");
static_assert(sizeof(GCN_Loop_Hot_Feet_Environmental_C_ReceiveTick) == 0x000004, "Wrong size on GCN_Loop_Hot_Feet_Environmental_C_ReceiveTick");
static_assert(offsetof(GCN_Loop_Hot_Feet_Environmental_C_ReceiveTick, DeltaSeconds) == 0x000000, "Member 'GCN_Loop_Hot_Feet_Environmental_C_ReceiveTick::DeltaSeconds' has a wrong offset!");

}
