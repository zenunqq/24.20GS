#pragma once

#include "Basic.hpp"

#include "GameplayAbilities_structs.hpp"
#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"

namespace SDK::Params
{

struct GA_Athena_Player_Slide_C_EndAbilityClientSide final
{
public:
	class UCameraModifier_Athena_Sliding_C*       K2Node_DynamicCast_AsCamera_Modifier_Athena_Sliding;
	bool                                          K2Node_DynamicCast_bSuccess;
	bool                                          CallFunc_IsValid_ReturnValue;
};
static_assert(alignof(GA_Athena_Player_Slide_C_EndAbilityClientSide) == 0x000008, "Wrong alignment on GA_Athena_Player_Slide_C_EndAbilityClientSide");
static_assert(sizeof(GA_Athena_Player_Slide_C_EndAbilityClientSide) == 0x000010, "Wrong size on GA_Athena_Player_Slide_C_EndAbilityClientSide");
static_assert(offsetof(GA_Athena_Player_Slide_C_EndAbilityClientSide, K2Node_DynamicCast_AsCamera_Modifier_Athena_Sliding) == 0x000000, "Member 'GA_Athena_Player_Slide_C_EndAbilityClientSide::K2Node_DynamicCast_AsCamera_Modifier_Athena_Sliding' has a wrong offset!");
static_assert(offsetof(GA_Athena_Player_Slide_C_EndAbilityClientSide, K2Node_DynamicCast_bSuccess) == 0x000008, "Member 'GA_Athena_Player_Slide_C_EndAbilityClientSide::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(GA_Athena_Player_Slide_C_EndAbilityClientSide, CallFunc_IsValid_ReturnValue) == 0x000009, "Member 'GA_Athena_Player_Slide_C_EndAbilityClientSide::CallFunc_IsValid_ReturnValue' has a wrong offset!");

struct GA_Athena_Player_Slide_C_EndAbilityServerSide final
{
public:
	class AFortPlayerPawn*                        CallFunc_GetAvatarAsFortPlayerPawn_ReturnValue;
	class APlayerPawn_Athena_Generic_C*           K2Node_DynamicCast_AsPlayer_Pawn_Athena_Generic;
	bool                                          K2Node_DynamicCast_bSuccess;
	uint8                                         Pad_11[0x7];
	class APlayerPawn_Generic_C*                  K2Node_DynamicCast_AsPlayer_Pawn_Generic;
	bool                                          K2Node_DynamicCast_bSuccess_1;
	bool                                          CallFunc_IsValid_ReturnValue;
};
static_assert(alignof(GA_Athena_Player_Slide_C_EndAbilityServerSide) == 0x000008, "Wrong alignment on GA_Athena_Player_Slide_C_EndAbilityServerSide");
static_assert(sizeof(GA_Athena_Player_Slide_C_EndAbilityServerSide) == 0x000028, "Wrong size on GA_Athena_Player_Slide_C_EndAbilityServerSide");
static_assert(offsetof(GA_Athena_Player_Slide_C_EndAbilityServerSide, CallFunc_GetAvatarAsFortPlayerPawn_ReturnValue) == 0x000000, "Member 'GA_Athena_Player_Slide_C_EndAbilityServerSide::CallFunc_GetAvatarAsFortPlayerPawn_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Athena_Player_Slide_C_EndAbilityServerSide, K2Node_DynamicCast_AsPlayer_Pawn_Athena_Generic) == 0x000008, "Member 'GA_Athena_Player_Slide_C_EndAbilityServerSide::K2Node_DynamicCast_AsPlayer_Pawn_Athena_Generic' has a wrong offset!");
static_assert(offsetof(GA_Athena_Player_Slide_C_EndAbilityServerSide, K2Node_DynamicCast_bSuccess) == 0x000010, "Member 'GA_Athena_Player_Slide_C_EndAbilityServerSide::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(GA_Athena_Player_Slide_C_EndAbilityServerSide, K2Node_DynamicCast_AsPlayer_Pawn_Generic) == 0x000018, "Member 'GA_Athena_Player_Slide_C_EndAbilityServerSide::K2Node_DynamicCast_AsPlayer_Pawn_Generic' has a wrong offset!");
static_assert(offsetof(GA_Athena_Player_Slide_C_EndAbilityServerSide, K2Node_DynamicCast_bSuccess_1) == 0x000020, "Member 'GA_Athena_Player_Slide_C_EndAbilityServerSide::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(GA_Athena_Player_Slide_C_EndAbilityServerSide, CallFunc_IsValid_ReturnValue) == 0x000021, "Member 'GA_Athena_Player_Slide_C_EndAbilityServerSide::CallFunc_IsValid_ReturnValue' has a wrong offset!");

struct GA_Athena_Player_Slide_C_ExecuteUbergraph_GA_Athena_Player_Slide final
{
public:
	int32                                         EntryPoint;
	uint8                                         Pad_4[0x4];
	struct FTimerHandle                           CallFunc_K2_SetTimer_ReturnValue;
	class AFortPlayerPawn*                        CallFunc_GetAvatarAsFortPlayerPawn_ReturnValue;
	struct FTimerHandle                           CallFunc_K2_SetTimer_ReturnValue_1;
	bool                                          CallFunc_IsFalling_ReturnValue;
	bool                                          CallFunc_IsValid_ReturnValue;
	uint8                                         Pad_22[0x6];
	struct FVector                                CallFunc_GetLastUpdateVelocity_ReturnValue;
	double                                        CallFunc_VSize_ReturnValue;
	bool                                          CallFunc_Greater_DoubleDouble_ReturnValue;
	bool                                          CallFunc_Less_DoubleDouble_ReturnValue;
	bool                                          K2Node_Event_bWasCancelled;
	uint8                                         Pad_4B[0x5];
	class AFortPlayerPawn*                        CallFunc_GetAvatarAsFortPlayerPawn_ReturnValue_1;
	struct FGameplayEventData                     K2Node_Event_EventData;
	bool                                          Temp_bool_Has_Been_Initd_Variable;
	uint8                                         Pad_109[0x7];
	class AFortPlayerPawn*                        CallFunc_GetAvatarAsFortPlayerPawn_ReturnValue_2;
	class AFortPlayerPawn*                        CallFunc_GetAvatarAsFortPlayerPawn_ReturnValue_3;
	bool                                          CallFunc_IsValid_ReturnValue_1;
	uint8                                         Pad_121[0x7];
	class UFortMovementComp_Character*            K2Node_DynamicCast_AsFort_Movement_Comp_Character;
	bool                                          K2Node_DynamicCast_bSuccess;
	uint8                                         Pad_131[0x7];
	class UFortMovementComp_Character*            K2Node_DynamicCast_AsFort_Movement_Comp_Character_1;
	bool                                          K2Node_DynamicCast_bSuccess_1;
	uint8                                         Pad_141[0x7];
	class AFortPlayerPawn*                        CallFunc_GetAvatarAsFortPlayerPawn_ReturnValue_4;
	float                                         CallFunc_GetValueAtLevel_ReturnValue;
	bool                                          CallFunc_IsValid_ReturnValue_2;
	uint8                                         Pad_155[0x3];
	struct FTimerHandle                           CallFunc_K2_SetTimer_ReturnValue_2;
	class AFortPlayerController*                  CallFunc_GetFortPlayerControllerFromActor_ReturnValue;
	bool                                          CallFunc_IsValid_ReturnValue_3;
	uint8                                         Pad_169[0x7];
	class UCameraModifier*                        CallFunc_AddCameraModifierForOwningPlayerController_ReturnValue;
	bool                                          CallFunc_IsServer_ReturnValue;
	uint8                                         Pad_179[0x7];
	struct FTimerHandle                           CallFunc_K2_SetTimer_ReturnValue_3;
	class AFortPlayerPawn*                        CallFunc_GetAvatarAsFortPlayerPawn_ReturnValue_5;
	class AFortPlayerController*                  CallFunc_GetFortPlayerControllerFromActor_ReturnValue_1;
	class UCameraShakeBase*                       CallFunc_StartCameraShake_ReturnValue;
	class AFortPlayerPawn*                        CallFunc_GetAvatarAsFortPlayerPawn_ReturnValue_6;
	class APlayerPawn_Generic_C*                  K2Node_DynamicCast_AsPlayer_Pawn_Generic;
	bool                                          K2Node_DynamicCast_bSuccess_2;
	uint8                                         Pad_1B1[0x7];
	class APlayerPawn_Athena_Generic_C*           K2Node_DynamicCast_AsPlayer_Pawn_Athena_Generic;
	bool                                          K2Node_DynamicCast_bSuccess_3;
	bool                                          CallFunc_IsServer_ReturnValue_1;
	bool                                          CallFunc_IsServer_ReturnValue_2;
	uint8                                         Pad_1C3[0x5];
	class AFortPlayerPawn*                        CallFunc_GetAvatarAsFortPlayerPawn_ReturnValue_7;
	class AFortPlayerPawn*                        K2Node_CustomEvent_Pawn;
	bool                                          CallFunc_IsValid_ReturnValue_4;
	uint8                                         Pad_1D9[0x7];
	class AFortPlayerPawn*                        CallFunc_GetAvatarAsFortPlayerPawn_ReturnValue_8;
	TDelegate<void(class AFortPlayerPawn* Pawn)>  K2Node_CreateDelegate_OutputDelegate;
	bool                                          CallFunc_IsValid_ReturnValue_5;
	bool                                          Temp_bool_IsClosed_Variable;
	uint8                                         Pad_1F6[0x2];
	class AFortPlayerPawn*                        CallFunc_GetAvatarAsFortPlayerPawn_ReturnValue_9;
	class UFortMovementComp_Character*            K2Node_DynamicCast_AsFort_Movement_Comp_Character_2;
	bool                                          K2Node_DynamicCast_bSuccess_4;
	uint8                                         Pad_209[0x7];
	class AFortPlayerPawn*                        CallFunc_GetAvatarAsFortPlayerPawn_ReturnValue_10;
	bool                                          CallFunc_BreakHitResult_bBlockingHit;
	bool                                          CallFunc_BreakHitResult_bInitialOverlap;
	uint8                                         Pad_21A[0x2];
	float                                         CallFunc_BreakHitResult_Time;
	float                                         CallFunc_BreakHitResult_Distance;
	uint8                                         Pad_224[0x4];
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
	uint8                                         Pad_2B4[0x4];
	struct FVector                                CallFunc_BreakHitResult_TraceStart;
	struct FVector                                CallFunc_BreakHitResult_TraceEnd;
	bool                                          CallFunc_IsValid_ReturnValue_6;
	uint8                                         Pad_2E9[0x7];
	struct FRotator                               CallFunc_MakeRotFromZ_ReturnValue;
	class UNiagaraComponent*                      CallFunc_SpawnSystemAtLocation_ReturnValue;
	class UFortMovementComp_Character*            K2Node_DynamicCast_AsFort_Movement_Comp_Character_3;
	bool                                          K2Node_DynamicCast_bSuccess_5;
	bool                                          CallFunc_NotEqual_BoolBool_ReturnValue;
	bool                                          CallFunc_BooleanAND_ReturnValue;
	uint8                                         Pad_31B[0x5];
	class AFortPlayerPawn*                        CallFunc_GetAvatarAsFortPlayerPawn_ReturnValue_11;
	class AFortPlayerController*                  CallFunc_GetFortPlayerControllerFromActor_ReturnValue_2;
	bool                                          CallFunc_RemoveCameraModifier_ReturnValue;
};
static_assert(alignof(GA_Athena_Player_Slide_C_ExecuteUbergraph_GA_Athena_Player_Slide) == 0x000008, "Wrong alignment on GA_Athena_Player_Slide_C_ExecuteUbergraph_GA_Athena_Player_Slide");
static_assert(sizeof(GA_Athena_Player_Slide_C_ExecuteUbergraph_GA_Athena_Player_Slide) == 0x000338, "Wrong size on GA_Athena_Player_Slide_C_ExecuteUbergraph_GA_Athena_Player_Slide");
static_assert(offsetof(GA_Athena_Player_Slide_C_ExecuteUbergraph_GA_Athena_Player_Slide, EntryPoint) == 0x000000, "Member 'GA_Athena_Player_Slide_C_ExecuteUbergraph_GA_Athena_Player_Slide::EntryPoint' has a wrong offset!");
static_assert(offsetof(GA_Athena_Player_Slide_C_ExecuteUbergraph_GA_Athena_Player_Slide, CallFunc_K2_SetTimer_ReturnValue) == 0x000008, "Member 'GA_Athena_Player_Slide_C_ExecuteUbergraph_GA_Athena_Player_Slide::CallFunc_K2_SetTimer_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Athena_Player_Slide_C_ExecuteUbergraph_GA_Athena_Player_Slide, CallFunc_GetAvatarAsFortPlayerPawn_ReturnValue) == 0x000010, "Member 'GA_Athena_Player_Slide_C_ExecuteUbergraph_GA_Athena_Player_Slide::CallFunc_GetAvatarAsFortPlayerPawn_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Athena_Player_Slide_C_ExecuteUbergraph_GA_Athena_Player_Slide, CallFunc_K2_SetTimer_ReturnValue_1) == 0x000018, "Member 'GA_Athena_Player_Slide_C_ExecuteUbergraph_GA_Athena_Player_Slide::CallFunc_K2_SetTimer_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GA_Athena_Player_Slide_C_ExecuteUbergraph_GA_Athena_Player_Slide, CallFunc_IsFalling_ReturnValue) == 0x000020, "Member 'GA_Athena_Player_Slide_C_ExecuteUbergraph_GA_Athena_Player_Slide::CallFunc_IsFalling_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Athena_Player_Slide_C_ExecuteUbergraph_GA_Athena_Player_Slide, CallFunc_IsValid_ReturnValue) == 0x000021, "Member 'GA_Athena_Player_Slide_C_ExecuteUbergraph_GA_Athena_Player_Slide::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Athena_Player_Slide_C_ExecuteUbergraph_GA_Athena_Player_Slide, CallFunc_GetLastUpdateVelocity_ReturnValue) == 0x000028, "Member 'GA_Athena_Player_Slide_C_ExecuteUbergraph_GA_Athena_Player_Slide::CallFunc_GetLastUpdateVelocity_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Athena_Player_Slide_C_ExecuteUbergraph_GA_Athena_Player_Slide, CallFunc_VSize_ReturnValue) == 0x000040, "Member 'GA_Athena_Player_Slide_C_ExecuteUbergraph_GA_Athena_Player_Slide::CallFunc_VSize_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Athena_Player_Slide_C_ExecuteUbergraph_GA_Athena_Player_Slide, CallFunc_Greater_DoubleDouble_ReturnValue) == 0x000048, "Member 'GA_Athena_Player_Slide_C_ExecuteUbergraph_GA_Athena_Player_Slide::CallFunc_Greater_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Athena_Player_Slide_C_ExecuteUbergraph_GA_Athena_Player_Slide, CallFunc_Less_DoubleDouble_ReturnValue) == 0x000049, "Member 'GA_Athena_Player_Slide_C_ExecuteUbergraph_GA_Athena_Player_Slide::CallFunc_Less_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Athena_Player_Slide_C_ExecuteUbergraph_GA_Athena_Player_Slide, K2Node_Event_bWasCancelled) == 0x00004A, "Member 'GA_Athena_Player_Slide_C_ExecuteUbergraph_GA_Athena_Player_Slide::K2Node_Event_bWasCancelled' has a wrong offset!");
static_assert(offsetof(GA_Athena_Player_Slide_C_ExecuteUbergraph_GA_Athena_Player_Slide, CallFunc_GetAvatarAsFortPlayerPawn_ReturnValue_1) == 0x000050, "Member 'GA_Athena_Player_Slide_C_ExecuteUbergraph_GA_Athena_Player_Slide::CallFunc_GetAvatarAsFortPlayerPawn_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GA_Athena_Player_Slide_C_ExecuteUbergraph_GA_Athena_Player_Slide, K2Node_Event_EventData) == 0x000058, "Member 'GA_Athena_Player_Slide_C_ExecuteUbergraph_GA_Athena_Player_Slide::K2Node_Event_EventData' has a wrong offset!");
static_assert(offsetof(GA_Athena_Player_Slide_C_ExecuteUbergraph_GA_Athena_Player_Slide, Temp_bool_Has_Been_Initd_Variable) == 0x000108, "Member 'GA_Athena_Player_Slide_C_ExecuteUbergraph_GA_Athena_Player_Slide::Temp_bool_Has_Been_Initd_Variable' has a wrong offset!");
static_assert(offsetof(GA_Athena_Player_Slide_C_ExecuteUbergraph_GA_Athena_Player_Slide, CallFunc_GetAvatarAsFortPlayerPawn_ReturnValue_2) == 0x000110, "Member 'GA_Athena_Player_Slide_C_ExecuteUbergraph_GA_Athena_Player_Slide::CallFunc_GetAvatarAsFortPlayerPawn_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(GA_Athena_Player_Slide_C_ExecuteUbergraph_GA_Athena_Player_Slide, CallFunc_GetAvatarAsFortPlayerPawn_ReturnValue_3) == 0x000118, "Member 'GA_Athena_Player_Slide_C_ExecuteUbergraph_GA_Athena_Player_Slide::CallFunc_GetAvatarAsFortPlayerPawn_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(GA_Athena_Player_Slide_C_ExecuteUbergraph_GA_Athena_Player_Slide, CallFunc_IsValid_ReturnValue_1) == 0x000120, "Member 'GA_Athena_Player_Slide_C_ExecuteUbergraph_GA_Athena_Player_Slide::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GA_Athena_Player_Slide_C_ExecuteUbergraph_GA_Athena_Player_Slide, K2Node_DynamicCast_AsFort_Movement_Comp_Character) == 0x000128, "Member 'GA_Athena_Player_Slide_C_ExecuteUbergraph_GA_Athena_Player_Slide::K2Node_DynamicCast_AsFort_Movement_Comp_Character' has a wrong offset!");
static_assert(offsetof(GA_Athena_Player_Slide_C_ExecuteUbergraph_GA_Athena_Player_Slide, K2Node_DynamicCast_bSuccess) == 0x000130, "Member 'GA_Athena_Player_Slide_C_ExecuteUbergraph_GA_Athena_Player_Slide::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(GA_Athena_Player_Slide_C_ExecuteUbergraph_GA_Athena_Player_Slide, K2Node_DynamicCast_AsFort_Movement_Comp_Character_1) == 0x000138, "Member 'GA_Athena_Player_Slide_C_ExecuteUbergraph_GA_Athena_Player_Slide::K2Node_DynamicCast_AsFort_Movement_Comp_Character_1' has a wrong offset!");
static_assert(offsetof(GA_Athena_Player_Slide_C_ExecuteUbergraph_GA_Athena_Player_Slide, K2Node_DynamicCast_bSuccess_1) == 0x000140, "Member 'GA_Athena_Player_Slide_C_ExecuteUbergraph_GA_Athena_Player_Slide::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(GA_Athena_Player_Slide_C_ExecuteUbergraph_GA_Athena_Player_Slide, CallFunc_GetAvatarAsFortPlayerPawn_ReturnValue_4) == 0x000148, "Member 'GA_Athena_Player_Slide_C_ExecuteUbergraph_GA_Athena_Player_Slide::CallFunc_GetAvatarAsFortPlayerPawn_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(GA_Athena_Player_Slide_C_ExecuteUbergraph_GA_Athena_Player_Slide, CallFunc_GetValueAtLevel_ReturnValue) == 0x000150, "Member 'GA_Athena_Player_Slide_C_ExecuteUbergraph_GA_Athena_Player_Slide::CallFunc_GetValueAtLevel_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Athena_Player_Slide_C_ExecuteUbergraph_GA_Athena_Player_Slide, CallFunc_IsValid_ReturnValue_2) == 0x000154, "Member 'GA_Athena_Player_Slide_C_ExecuteUbergraph_GA_Athena_Player_Slide::CallFunc_IsValid_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(GA_Athena_Player_Slide_C_ExecuteUbergraph_GA_Athena_Player_Slide, CallFunc_K2_SetTimer_ReturnValue_2) == 0x000158, "Member 'GA_Athena_Player_Slide_C_ExecuteUbergraph_GA_Athena_Player_Slide::CallFunc_K2_SetTimer_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(GA_Athena_Player_Slide_C_ExecuteUbergraph_GA_Athena_Player_Slide, CallFunc_GetFortPlayerControllerFromActor_ReturnValue) == 0x000160, "Member 'GA_Athena_Player_Slide_C_ExecuteUbergraph_GA_Athena_Player_Slide::CallFunc_GetFortPlayerControllerFromActor_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Athena_Player_Slide_C_ExecuteUbergraph_GA_Athena_Player_Slide, CallFunc_IsValid_ReturnValue_3) == 0x000168, "Member 'GA_Athena_Player_Slide_C_ExecuteUbergraph_GA_Athena_Player_Slide::CallFunc_IsValid_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(GA_Athena_Player_Slide_C_ExecuteUbergraph_GA_Athena_Player_Slide, CallFunc_AddCameraModifierForOwningPlayerController_ReturnValue) == 0x000170, "Member 'GA_Athena_Player_Slide_C_ExecuteUbergraph_GA_Athena_Player_Slide::CallFunc_AddCameraModifierForOwningPlayerController_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Athena_Player_Slide_C_ExecuteUbergraph_GA_Athena_Player_Slide, CallFunc_IsServer_ReturnValue) == 0x000178, "Member 'GA_Athena_Player_Slide_C_ExecuteUbergraph_GA_Athena_Player_Slide::CallFunc_IsServer_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Athena_Player_Slide_C_ExecuteUbergraph_GA_Athena_Player_Slide, CallFunc_K2_SetTimer_ReturnValue_3) == 0x000180, "Member 'GA_Athena_Player_Slide_C_ExecuteUbergraph_GA_Athena_Player_Slide::CallFunc_K2_SetTimer_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(GA_Athena_Player_Slide_C_ExecuteUbergraph_GA_Athena_Player_Slide, CallFunc_GetAvatarAsFortPlayerPawn_ReturnValue_5) == 0x000188, "Member 'GA_Athena_Player_Slide_C_ExecuteUbergraph_GA_Athena_Player_Slide::CallFunc_GetAvatarAsFortPlayerPawn_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(GA_Athena_Player_Slide_C_ExecuteUbergraph_GA_Athena_Player_Slide, CallFunc_GetFortPlayerControllerFromActor_ReturnValue_1) == 0x000190, "Member 'GA_Athena_Player_Slide_C_ExecuteUbergraph_GA_Athena_Player_Slide::CallFunc_GetFortPlayerControllerFromActor_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GA_Athena_Player_Slide_C_ExecuteUbergraph_GA_Athena_Player_Slide, CallFunc_StartCameraShake_ReturnValue) == 0x000198, "Member 'GA_Athena_Player_Slide_C_ExecuteUbergraph_GA_Athena_Player_Slide::CallFunc_StartCameraShake_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Athena_Player_Slide_C_ExecuteUbergraph_GA_Athena_Player_Slide, CallFunc_GetAvatarAsFortPlayerPawn_ReturnValue_6) == 0x0001A0, "Member 'GA_Athena_Player_Slide_C_ExecuteUbergraph_GA_Athena_Player_Slide::CallFunc_GetAvatarAsFortPlayerPawn_ReturnValue_6' has a wrong offset!");
static_assert(offsetof(GA_Athena_Player_Slide_C_ExecuteUbergraph_GA_Athena_Player_Slide, K2Node_DynamicCast_AsPlayer_Pawn_Generic) == 0x0001A8, "Member 'GA_Athena_Player_Slide_C_ExecuteUbergraph_GA_Athena_Player_Slide::K2Node_DynamicCast_AsPlayer_Pawn_Generic' has a wrong offset!");
static_assert(offsetof(GA_Athena_Player_Slide_C_ExecuteUbergraph_GA_Athena_Player_Slide, K2Node_DynamicCast_bSuccess_2) == 0x0001B0, "Member 'GA_Athena_Player_Slide_C_ExecuteUbergraph_GA_Athena_Player_Slide::K2Node_DynamicCast_bSuccess_2' has a wrong offset!");
static_assert(offsetof(GA_Athena_Player_Slide_C_ExecuteUbergraph_GA_Athena_Player_Slide, K2Node_DynamicCast_AsPlayer_Pawn_Athena_Generic) == 0x0001B8, "Member 'GA_Athena_Player_Slide_C_ExecuteUbergraph_GA_Athena_Player_Slide::K2Node_DynamicCast_AsPlayer_Pawn_Athena_Generic' has a wrong offset!");
static_assert(offsetof(GA_Athena_Player_Slide_C_ExecuteUbergraph_GA_Athena_Player_Slide, K2Node_DynamicCast_bSuccess_3) == 0x0001C0, "Member 'GA_Athena_Player_Slide_C_ExecuteUbergraph_GA_Athena_Player_Slide::K2Node_DynamicCast_bSuccess_3' has a wrong offset!");
static_assert(offsetof(GA_Athena_Player_Slide_C_ExecuteUbergraph_GA_Athena_Player_Slide, CallFunc_IsServer_ReturnValue_1) == 0x0001C1, "Member 'GA_Athena_Player_Slide_C_ExecuteUbergraph_GA_Athena_Player_Slide::CallFunc_IsServer_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GA_Athena_Player_Slide_C_ExecuteUbergraph_GA_Athena_Player_Slide, CallFunc_IsServer_ReturnValue_2) == 0x0001C2, "Member 'GA_Athena_Player_Slide_C_ExecuteUbergraph_GA_Athena_Player_Slide::CallFunc_IsServer_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(GA_Athena_Player_Slide_C_ExecuteUbergraph_GA_Athena_Player_Slide, CallFunc_GetAvatarAsFortPlayerPawn_ReturnValue_7) == 0x0001C8, "Member 'GA_Athena_Player_Slide_C_ExecuteUbergraph_GA_Athena_Player_Slide::CallFunc_GetAvatarAsFortPlayerPawn_ReturnValue_7' has a wrong offset!");
static_assert(offsetof(GA_Athena_Player_Slide_C_ExecuteUbergraph_GA_Athena_Player_Slide, K2Node_CustomEvent_Pawn) == 0x0001D0, "Member 'GA_Athena_Player_Slide_C_ExecuteUbergraph_GA_Athena_Player_Slide::K2Node_CustomEvent_Pawn' has a wrong offset!");
static_assert(offsetof(GA_Athena_Player_Slide_C_ExecuteUbergraph_GA_Athena_Player_Slide, CallFunc_IsValid_ReturnValue_4) == 0x0001D8, "Member 'GA_Athena_Player_Slide_C_ExecuteUbergraph_GA_Athena_Player_Slide::CallFunc_IsValid_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(GA_Athena_Player_Slide_C_ExecuteUbergraph_GA_Athena_Player_Slide, CallFunc_GetAvatarAsFortPlayerPawn_ReturnValue_8) == 0x0001E0, "Member 'GA_Athena_Player_Slide_C_ExecuteUbergraph_GA_Athena_Player_Slide::CallFunc_GetAvatarAsFortPlayerPawn_ReturnValue_8' has a wrong offset!");
static_assert(offsetof(GA_Athena_Player_Slide_C_ExecuteUbergraph_GA_Athena_Player_Slide, K2Node_CreateDelegate_OutputDelegate) == 0x0001E8, "Member 'GA_Athena_Player_Slide_C_ExecuteUbergraph_GA_Athena_Player_Slide::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(GA_Athena_Player_Slide_C_ExecuteUbergraph_GA_Athena_Player_Slide, CallFunc_IsValid_ReturnValue_5) == 0x0001F4, "Member 'GA_Athena_Player_Slide_C_ExecuteUbergraph_GA_Athena_Player_Slide::CallFunc_IsValid_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(GA_Athena_Player_Slide_C_ExecuteUbergraph_GA_Athena_Player_Slide, Temp_bool_IsClosed_Variable) == 0x0001F5, "Member 'GA_Athena_Player_Slide_C_ExecuteUbergraph_GA_Athena_Player_Slide::Temp_bool_IsClosed_Variable' has a wrong offset!");
static_assert(offsetof(GA_Athena_Player_Slide_C_ExecuteUbergraph_GA_Athena_Player_Slide, CallFunc_GetAvatarAsFortPlayerPawn_ReturnValue_9) == 0x0001F8, "Member 'GA_Athena_Player_Slide_C_ExecuteUbergraph_GA_Athena_Player_Slide::CallFunc_GetAvatarAsFortPlayerPawn_ReturnValue_9' has a wrong offset!");
static_assert(offsetof(GA_Athena_Player_Slide_C_ExecuteUbergraph_GA_Athena_Player_Slide, K2Node_DynamicCast_AsFort_Movement_Comp_Character_2) == 0x000200, "Member 'GA_Athena_Player_Slide_C_ExecuteUbergraph_GA_Athena_Player_Slide::K2Node_DynamicCast_AsFort_Movement_Comp_Character_2' has a wrong offset!");
static_assert(offsetof(GA_Athena_Player_Slide_C_ExecuteUbergraph_GA_Athena_Player_Slide, K2Node_DynamicCast_bSuccess_4) == 0x000208, "Member 'GA_Athena_Player_Slide_C_ExecuteUbergraph_GA_Athena_Player_Slide::K2Node_DynamicCast_bSuccess_4' has a wrong offset!");
static_assert(offsetof(GA_Athena_Player_Slide_C_ExecuteUbergraph_GA_Athena_Player_Slide, CallFunc_GetAvatarAsFortPlayerPawn_ReturnValue_10) == 0x000210, "Member 'GA_Athena_Player_Slide_C_ExecuteUbergraph_GA_Athena_Player_Slide::CallFunc_GetAvatarAsFortPlayerPawn_ReturnValue_10' has a wrong offset!");
static_assert(offsetof(GA_Athena_Player_Slide_C_ExecuteUbergraph_GA_Athena_Player_Slide, CallFunc_BreakHitResult_bBlockingHit) == 0x000218, "Member 'GA_Athena_Player_Slide_C_ExecuteUbergraph_GA_Athena_Player_Slide::CallFunc_BreakHitResult_bBlockingHit' has a wrong offset!");
static_assert(offsetof(GA_Athena_Player_Slide_C_ExecuteUbergraph_GA_Athena_Player_Slide, CallFunc_BreakHitResult_bInitialOverlap) == 0x000219, "Member 'GA_Athena_Player_Slide_C_ExecuteUbergraph_GA_Athena_Player_Slide::CallFunc_BreakHitResult_bInitialOverlap' has a wrong offset!");
static_assert(offsetof(GA_Athena_Player_Slide_C_ExecuteUbergraph_GA_Athena_Player_Slide, CallFunc_BreakHitResult_Time) == 0x00021C, "Member 'GA_Athena_Player_Slide_C_ExecuteUbergraph_GA_Athena_Player_Slide::CallFunc_BreakHitResult_Time' has a wrong offset!");
static_assert(offsetof(GA_Athena_Player_Slide_C_ExecuteUbergraph_GA_Athena_Player_Slide, CallFunc_BreakHitResult_Distance) == 0x000220, "Member 'GA_Athena_Player_Slide_C_ExecuteUbergraph_GA_Athena_Player_Slide::CallFunc_BreakHitResult_Distance' has a wrong offset!");
static_assert(offsetof(GA_Athena_Player_Slide_C_ExecuteUbergraph_GA_Athena_Player_Slide, CallFunc_BreakHitResult_Location) == 0x000228, "Member 'GA_Athena_Player_Slide_C_ExecuteUbergraph_GA_Athena_Player_Slide::CallFunc_BreakHitResult_Location' has a wrong offset!");
static_assert(offsetof(GA_Athena_Player_Slide_C_ExecuteUbergraph_GA_Athena_Player_Slide, CallFunc_BreakHitResult_ImpactPoint) == 0x000240, "Member 'GA_Athena_Player_Slide_C_ExecuteUbergraph_GA_Athena_Player_Slide::CallFunc_BreakHitResult_ImpactPoint' has a wrong offset!");
static_assert(offsetof(GA_Athena_Player_Slide_C_ExecuteUbergraph_GA_Athena_Player_Slide, CallFunc_BreakHitResult_Normal) == 0x000258, "Member 'GA_Athena_Player_Slide_C_ExecuteUbergraph_GA_Athena_Player_Slide::CallFunc_BreakHitResult_Normal' has a wrong offset!");
static_assert(offsetof(GA_Athena_Player_Slide_C_ExecuteUbergraph_GA_Athena_Player_Slide, CallFunc_BreakHitResult_ImpactNormal) == 0x000270, "Member 'GA_Athena_Player_Slide_C_ExecuteUbergraph_GA_Athena_Player_Slide::CallFunc_BreakHitResult_ImpactNormal' has a wrong offset!");
static_assert(offsetof(GA_Athena_Player_Slide_C_ExecuteUbergraph_GA_Athena_Player_Slide, CallFunc_BreakHitResult_PhysMat) == 0x000288, "Member 'GA_Athena_Player_Slide_C_ExecuteUbergraph_GA_Athena_Player_Slide::CallFunc_BreakHitResult_PhysMat' has a wrong offset!");
static_assert(offsetof(GA_Athena_Player_Slide_C_ExecuteUbergraph_GA_Athena_Player_Slide, CallFunc_BreakHitResult_HitActor) == 0x000290, "Member 'GA_Athena_Player_Slide_C_ExecuteUbergraph_GA_Athena_Player_Slide::CallFunc_BreakHitResult_HitActor' has a wrong offset!");
static_assert(offsetof(GA_Athena_Player_Slide_C_ExecuteUbergraph_GA_Athena_Player_Slide, CallFunc_BreakHitResult_HitComponent) == 0x000298, "Member 'GA_Athena_Player_Slide_C_ExecuteUbergraph_GA_Athena_Player_Slide::CallFunc_BreakHitResult_HitComponent' has a wrong offset!");
static_assert(offsetof(GA_Athena_Player_Slide_C_ExecuteUbergraph_GA_Athena_Player_Slide, CallFunc_BreakHitResult_HitBoneName) == 0x0002A0, "Member 'GA_Athena_Player_Slide_C_ExecuteUbergraph_GA_Athena_Player_Slide::CallFunc_BreakHitResult_HitBoneName' has a wrong offset!");
static_assert(offsetof(GA_Athena_Player_Slide_C_ExecuteUbergraph_GA_Athena_Player_Slide, CallFunc_BreakHitResult_BoneName) == 0x0002A4, "Member 'GA_Athena_Player_Slide_C_ExecuteUbergraph_GA_Athena_Player_Slide::CallFunc_BreakHitResult_BoneName' has a wrong offset!");
static_assert(offsetof(GA_Athena_Player_Slide_C_ExecuteUbergraph_GA_Athena_Player_Slide, CallFunc_BreakHitResult_HitItem) == 0x0002A8, "Member 'GA_Athena_Player_Slide_C_ExecuteUbergraph_GA_Athena_Player_Slide::CallFunc_BreakHitResult_HitItem' has a wrong offset!");
static_assert(offsetof(GA_Athena_Player_Slide_C_ExecuteUbergraph_GA_Athena_Player_Slide, CallFunc_BreakHitResult_ElementIndex) == 0x0002AC, "Member 'GA_Athena_Player_Slide_C_ExecuteUbergraph_GA_Athena_Player_Slide::CallFunc_BreakHitResult_ElementIndex' has a wrong offset!");
static_assert(offsetof(GA_Athena_Player_Slide_C_ExecuteUbergraph_GA_Athena_Player_Slide, CallFunc_BreakHitResult_FaceIndex) == 0x0002B0, "Member 'GA_Athena_Player_Slide_C_ExecuteUbergraph_GA_Athena_Player_Slide::CallFunc_BreakHitResult_FaceIndex' has a wrong offset!");
static_assert(offsetof(GA_Athena_Player_Slide_C_ExecuteUbergraph_GA_Athena_Player_Slide, CallFunc_BreakHitResult_TraceStart) == 0x0002B8, "Member 'GA_Athena_Player_Slide_C_ExecuteUbergraph_GA_Athena_Player_Slide::CallFunc_BreakHitResult_TraceStart' has a wrong offset!");
static_assert(offsetof(GA_Athena_Player_Slide_C_ExecuteUbergraph_GA_Athena_Player_Slide, CallFunc_BreakHitResult_TraceEnd) == 0x0002D0, "Member 'GA_Athena_Player_Slide_C_ExecuteUbergraph_GA_Athena_Player_Slide::CallFunc_BreakHitResult_TraceEnd' has a wrong offset!");
static_assert(offsetof(GA_Athena_Player_Slide_C_ExecuteUbergraph_GA_Athena_Player_Slide, CallFunc_IsValid_ReturnValue_6) == 0x0002E8, "Member 'GA_Athena_Player_Slide_C_ExecuteUbergraph_GA_Athena_Player_Slide::CallFunc_IsValid_ReturnValue_6' has a wrong offset!");
static_assert(offsetof(GA_Athena_Player_Slide_C_ExecuteUbergraph_GA_Athena_Player_Slide, CallFunc_MakeRotFromZ_ReturnValue) == 0x0002F0, "Member 'GA_Athena_Player_Slide_C_ExecuteUbergraph_GA_Athena_Player_Slide::CallFunc_MakeRotFromZ_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Athena_Player_Slide_C_ExecuteUbergraph_GA_Athena_Player_Slide, CallFunc_SpawnSystemAtLocation_ReturnValue) == 0x000308, "Member 'GA_Athena_Player_Slide_C_ExecuteUbergraph_GA_Athena_Player_Slide::CallFunc_SpawnSystemAtLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Athena_Player_Slide_C_ExecuteUbergraph_GA_Athena_Player_Slide, K2Node_DynamicCast_AsFort_Movement_Comp_Character_3) == 0x000310, "Member 'GA_Athena_Player_Slide_C_ExecuteUbergraph_GA_Athena_Player_Slide::K2Node_DynamicCast_AsFort_Movement_Comp_Character_3' has a wrong offset!");
static_assert(offsetof(GA_Athena_Player_Slide_C_ExecuteUbergraph_GA_Athena_Player_Slide, K2Node_DynamicCast_bSuccess_5) == 0x000318, "Member 'GA_Athena_Player_Slide_C_ExecuteUbergraph_GA_Athena_Player_Slide::K2Node_DynamicCast_bSuccess_5' has a wrong offset!");
static_assert(offsetof(GA_Athena_Player_Slide_C_ExecuteUbergraph_GA_Athena_Player_Slide, CallFunc_NotEqual_BoolBool_ReturnValue) == 0x000319, "Member 'GA_Athena_Player_Slide_C_ExecuteUbergraph_GA_Athena_Player_Slide::CallFunc_NotEqual_BoolBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Athena_Player_Slide_C_ExecuteUbergraph_GA_Athena_Player_Slide, CallFunc_BooleanAND_ReturnValue) == 0x00031A, "Member 'GA_Athena_Player_Slide_C_ExecuteUbergraph_GA_Athena_Player_Slide::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Athena_Player_Slide_C_ExecuteUbergraph_GA_Athena_Player_Slide, CallFunc_GetAvatarAsFortPlayerPawn_ReturnValue_11) == 0x000320, "Member 'GA_Athena_Player_Slide_C_ExecuteUbergraph_GA_Athena_Player_Slide::CallFunc_GetAvatarAsFortPlayerPawn_ReturnValue_11' has a wrong offset!");
static_assert(offsetof(GA_Athena_Player_Slide_C_ExecuteUbergraph_GA_Athena_Player_Slide, CallFunc_GetFortPlayerControllerFromActor_ReturnValue_2) == 0x000328, "Member 'GA_Athena_Player_Slide_C_ExecuteUbergraph_GA_Athena_Player_Slide::CallFunc_GetFortPlayerControllerFromActor_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(GA_Athena_Player_Slide_C_ExecuteUbergraph_GA_Athena_Player_Slide, CallFunc_RemoveCameraModifier_ReturnValue) == 0x000330, "Member 'GA_Athena_Player_Slide_C_ExecuteUbergraph_GA_Athena_Player_Slide::CallFunc_RemoveCameraModifier_ReturnValue' has a wrong offset!");

struct GA_Athena_Player_Slide_C_K2_ActivateAbilityFromEvent final
{
public:
	struct FGameplayEventData                     EventData;
};
static_assert(alignof(GA_Athena_Player_Slide_C_K2_ActivateAbilityFromEvent) == 0x000008, "Wrong alignment on GA_Athena_Player_Slide_C_K2_ActivateAbilityFromEvent");
static_assert(sizeof(GA_Athena_Player_Slide_C_K2_ActivateAbilityFromEvent) == 0x0000B0, "Wrong size on GA_Athena_Player_Slide_C_K2_ActivateAbilityFromEvent");
static_assert(offsetof(GA_Athena_Player_Slide_C_K2_ActivateAbilityFromEvent, EventData) == 0x000000, "Member 'GA_Athena_Player_Slide_C_K2_ActivateAbilityFromEvent::EventData' has a wrong offset!");

struct GA_Athena_Player_Slide_C_K2_OnEndAbility final
{
public:
	bool                                          bWasCancelled;
};
static_assert(alignof(GA_Athena_Player_Slide_C_K2_OnEndAbility) == 0x000001, "Wrong alignment on GA_Athena_Player_Slide_C_K2_OnEndAbility");
static_assert(sizeof(GA_Athena_Player_Slide_C_K2_OnEndAbility) == 0x000001, "Wrong size on GA_Athena_Player_Slide_C_K2_OnEndAbility");
static_assert(offsetof(GA_Athena_Player_Slide_C_K2_OnEndAbility, bWasCancelled) == 0x000000, "Member 'GA_Athena_Player_Slide_C_K2_OnEndAbility::bWasCancelled' has a wrong offset!");

struct GA_Athena_Player_Slide_C_OnFinishedCharacterCustomization_Event_0 final
{
public:
	class AFortPlayerPawn*                        Pawn;
};
static_assert(alignof(GA_Athena_Player_Slide_C_OnFinishedCharacterCustomization_Event_0) == 0x000008, "Wrong alignment on GA_Athena_Player_Slide_C_OnFinishedCharacterCustomization_Event_0");
static_assert(sizeof(GA_Athena_Player_Slide_C_OnFinishedCharacterCustomization_Event_0) == 0x000008, "Wrong size on GA_Athena_Player_Slide_C_OnFinishedCharacterCustomization_Event_0");
static_assert(offsetof(GA_Athena_Player_Slide_C_OnFinishedCharacterCustomization_Event_0, Pawn) == 0x000000, "Member 'GA_Athena_Player_Slide_C_OnFinishedCharacterCustomization_Event_0::Pawn' has a wrong offset!");

struct GA_Athena_Player_Slide_C_BuildDataRegistryResolverScope final
{
public:
	TArray<class FName>                           InOutResolverScopes;
	int32                                         InOutPriority;
	bool                                          ReturnValue;
};
static_assert(alignof(GA_Athena_Player_Slide_C_BuildDataRegistryResolverScope) == 0x000008, "Wrong alignment on GA_Athena_Player_Slide_C_BuildDataRegistryResolverScope");
static_assert(sizeof(GA_Athena_Player_Slide_C_BuildDataRegistryResolverScope) == 0x000018, "Wrong size on GA_Athena_Player_Slide_C_BuildDataRegistryResolverScope");
static_assert(offsetof(GA_Athena_Player_Slide_C_BuildDataRegistryResolverScope, InOutResolverScopes) == 0x000000, "Member 'GA_Athena_Player_Slide_C_BuildDataRegistryResolverScope::InOutResolverScopes' has a wrong offset!");
static_assert(offsetof(GA_Athena_Player_Slide_C_BuildDataRegistryResolverScope, InOutPriority) == 0x000010, "Member 'GA_Athena_Player_Slide_C_BuildDataRegistryResolverScope::InOutPriority' has a wrong offset!");
static_assert(offsetof(GA_Athena_Player_Slide_C_BuildDataRegistryResolverScope, ReturnValue) == 0x000014, "Member 'GA_Athena_Player_Slide_C_BuildDataRegistryResolverScope::ReturnValue' has a wrong offset!");

}
