#pragma once

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "GameplayAbilities_structs.hpp"
#include "FortniteGame_structs.hpp"
#include "Engine_structs.hpp"

namespace SDK::Params
{

struct B_Prj_Commando_FragGrenade_C_CalcGrenadeSpeed final
{
public:
	double                                        Angle;
	double                                        ReturnValue;
	double                                        GrenadeSpeedMin;
	double                                        GrenadeSpeedMax;
	double                                        MaxSpeedPitch;
	double                                        MinSpeedPitch;
	float                                         CallFunc_NormalizeAxis_ReturnValue;
	uint8                                         Pad_34[0x4];
	double                                        CallFunc_Subtract_DoubleDouble_ReturnValue;
	double                                        CallFunc_FClamp_ReturnValue;
	double                                        CallFunc_Subtract_DoubleDouble_ReturnValue_1;
	double                                        CallFunc_Divide_DoubleDouble_ReturnValue;
	double                                        CallFunc_Lerp_ReturnValue;
	float                                         CallFunc_NormalizeAxis_Angle_ImplicitCast;
	uint8                                         Pad_64[0x4];
	double                                        CallFunc_FClamp_Value_ImplicitCast;
};
static_assert(alignof(B_Prj_Commando_FragGrenade_C_CalcGrenadeSpeed) == 0x000008, "Wrong alignment on B_Prj_Commando_FragGrenade_C_CalcGrenadeSpeed");
static_assert(sizeof(B_Prj_Commando_FragGrenade_C_CalcGrenadeSpeed) == 0x000070, "Wrong size on B_Prj_Commando_FragGrenade_C_CalcGrenadeSpeed");
static_assert(offsetof(B_Prj_Commando_FragGrenade_C_CalcGrenadeSpeed, Angle) == 0x000000, "Member 'B_Prj_Commando_FragGrenade_C_CalcGrenadeSpeed::Angle' has a wrong offset!");
static_assert(offsetof(B_Prj_Commando_FragGrenade_C_CalcGrenadeSpeed, ReturnValue) == 0x000008, "Member 'B_Prj_Commando_FragGrenade_C_CalcGrenadeSpeed::ReturnValue' has a wrong offset!");
static_assert(offsetof(B_Prj_Commando_FragGrenade_C_CalcGrenadeSpeed, GrenadeSpeedMin) == 0x000010, "Member 'B_Prj_Commando_FragGrenade_C_CalcGrenadeSpeed::GrenadeSpeedMin' has a wrong offset!");
static_assert(offsetof(B_Prj_Commando_FragGrenade_C_CalcGrenadeSpeed, GrenadeSpeedMax) == 0x000018, "Member 'B_Prj_Commando_FragGrenade_C_CalcGrenadeSpeed::GrenadeSpeedMax' has a wrong offset!");
static_assert(offsetof(B_Prj_Commando_FragGrenade_C_CalcGrenadeSpeed, MaxSpeedPitch) == 0x000020, "Member 'B_Prj_Commando_FragGrenade_C_CalcGrenadeSpeed::MaxSpeedPitch' has a wrong offset!");
static_assert(offsetof(B_Prj_Commando_FragGrenade_C_CalcGrenadeSpeed, MinSpeedPitch) == 0x000028, "Member 'B_Prj_Commando_FragGrenade_C_CalcGrenadeSpeed::MinSpeedPitch' has a wrong offset!");
static_assert(offsetof(B_Prj_Commando_FragGrenade_C_CalcGrenadeSpeed, CallFunc_NormalizeAxis_ReturnValue) == 0x000030, "Member 'B_Prj_Commando_FragGrenade_C_CalcGrenadeSpeed::CallFunc_NormalizeAxis_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_Prj_Commando_FragGrenade_C_CalcGrenadeSpeed, CallFunc_Subtract_DoubleDouble_ReturnValue) == 0x000038, "Member 'B_Prj_Commando_FragGrenade_C_CalcGrenadeSpeed::CallFunc_Subtract_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_Prj_Commando_FragGrenade_C_CalcGrenadeSpeed, CallFunc_FClamp_ReturnValue) == 0x000040, "Member 'B_Prj_Commando_FragGrenade_C_CalcGrenadeSpeed::CallFunc_FClamp_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_Prj_Commando_FragGrenade_C_CalcGrenadeSpeed, CallFunc_Subtract_DoubleDouble_ReturnValue_1) == 0x000048, "Member 'B_Prj_Commando_FragGrenade_C_CalcGrenadeSpeed::CallFunc_Subtract_DoubleDouble_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(B_Prj_Commando_FragGrenade_C_CalcGrenadeSpeed, CallFunc_Divide_DoubleDouble_ReturnValue) == 0x000050, "Member 'B_Prj_Commando_FragGrenade_C_CalcGrenadeSpeed::CallFunc_Divide_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_Prj_Commando_FragGrenade_C_CalcGrenadeSpeed, CallFunc_Lerp_ReturnValue) == 0x000058, "Member 'B_Prj_Commando_FragGrenade_C_CalcGrenadeSpeed::CallFunc_Lerp_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_Prj_Commando_FragGrenade_C_CalcGrenadeSpeed, CallFunc_NormalizeAxis_Angle_ImplicitCast) == 0x000060, "Member 'B_Prj_Commando_FragGrenade_C_CalcGrenadeSpeed::CallFunc_NormalizeAxis_Angle_ImplicitCast' has a wrong offset!");
static_assert(offsetof(B_Prj_Commando_FragGrenade_C_CalcGrenadeSpeed, CallFunc_FClamp_Value_ImplicitCast) == 0x000068, "Member 'B_Prj_Commando_FragGrenade_C_CalcGrenadeSpeed::CallFunc_FClamp_Value_ImplicitCast' has a wrong offset!");

struct B_Prj_Commando_FragGrenade_C_ExecuteUbergraph_B_Prj_Commando_FragGrenade final
{
public:
	int32                                         EntryPoint;
	bool                                          Temp_bool_Has_Been_Initd_Variable;
	bool                                          Temp_bool_IsClosed_Variable;
	bool                                          CallFunc_HasAuthority_ReturnValue;
	bool                                          Temp_bool_Variable;
	struct FHitResult                             K2Node_Event_Hit_1;
	class AController*                            CallFunc_GetInstigatorController_ReturnValue;
	struct FHitResult                             CallFunc_K2_SetWorldRotation_SweepHitResult;
	class APlayerController*                      CallFunc_GetPlayerController_ReturnValue;
	bool                                          CallFunc_OnSameTeam_ReturnValue;
	uint8                                         Pad_1D9[0x7];
	TArray<class AActor*>                         K2Node_Event_HitActors;
	TArray<struct FHitResult>                     K2Node_Event_HitResults;
	float                                         K2Node_Event_Damage;
	uint8                                         Pad_204[0x4];
	const class UDamageType*                      K2Node_Event_DamageType;
	class AController*                            K2Node_Event_InstigatedBy;
	class AActor*                                 K2Node_Event_DamageCauser;
	struct FRotator                               CallFunc_MakeRotator_ReturnValue;
	class APawn*                                  CallFunc_GetInstigator_ReturnValue;
	bool                                          CallFunc_IsLocallyControlled_ReturnValue;
	uint8                                         Pad_241[0x7];
	struct FVector                                CallFunc_Conv_FloatToVector_ReturnValue;
	struct FHitResult                             K2Node_Event_Hit;
	bool                                          CallFunc_BreakHitResult_bBlockingHit;
	bool                                          CallFunc_BreakHitResult_bInitialOverlap;
	uint8                                         Pad_342[0x2];
	float                                         CallFunc_BreakHitResult_Time;
	float                                         CallFunc_BreakHitResult_Distance;
	uint8                                         Pad_34C[0x4];
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
	uint8                                         Pad_3DC[0x4];
	struct FVector                                CallFunc_BreakHitResult_TraceStart;
	struct FVector                                CallFunc_BreakHitResult_TraceEnd;
	class APawn*                                  K2Node_DynamicCast_AsPawn;
	bool                                          K2Node_DynamicCast_bSuccess;
	uint8                                         Pad_419[0x3];
	int32                                         CallFunc_Add_IntInt_ReturnValue;
	bool                                          CallFunc_EqualEqual_ObjectObject_ReturnValue;
	bool                                          CallFunc_GreaterEqual_IntInt_ReturnValue;
	bool                                          Temp_bool_Has_Been_Initd_Variable_1;
	bool                                          Temp_bool_Has_Been_Initd_Variable_2;
	bool                                          Temp_bool_Has_Been_Initd_Variable_3;
	bool                                          Temp_bool_Has_Been_Initd_Variable_4;
	bool                                          Temp_bool_IsClosed_Variable_1;
	uint8                                         Pad_427[0x1];
	double                                        CallFunc_Multiply_DoubleDouble_ReturnValue;
	int32                                         CallFunc_Add_IntInt_ReturnValue_1;
	bool                                          CallFunc_GreaterEqual_IntInt_ReturnValue_1;
	uint8                                         Pad_435[0x3];
	class APawn*                                  CallFunc_GetInstigator_ReturnValue_1;
	struct FVector                                CallFunc_Multiply_VectorFloat_ReturnValue;
	class APawn*                                  CallFunc_GetInstigator_ReturnValue_2;
	double                                        CallFunc_BreakVector_X;
	double                                        CallFunc_BreakVector_Y;
	double                                        CallFunc_BreakVector_Z;
	bool                                          CallFunc_NotEqual_ObjectObject_ReturnValue;
	uint8                                         Pad_479[0x7];
	double                                        CallFunc_Abs_ReturnValue;
	struct FVector                                CallFunc_MakeVector_ReturnValue;
	class AActor*                                 K2Node_CustomEvent_DestroyedActor;
	struct FVector                                CallFunc_Multiply_VectorFloat_ReturnValue_1;
	bool                                          Temp_bool_IsClosed_Variable_2;
	bool                                          Temp_bool_IsClosed_Variable_3;
	bool                                          CallFunc_IsDedicatedServer_ReturnValue;
	bool                                          CallFunc_IsDedicatedServer_ReturnValue_1;
	bool                                          Temp_bool_IsClosed_Variable_4;
	uint8                                         Pad_4C5[0x3];
	TDelegate<void(class AActor* DestroyedActor)> K2Node_CreateDelegate_OutputDelegate;
	uint8                                         Pad_4D4[0x4];
	class AActor*                                 K2Node_Event_OtherActor;
	TScriptInterface<class IGameplayTagAssetInterface> K2Node_DynamicCast_AsGameplay_Tag_Asset_Interface;
	bool                                          K2Node_DynamicCast_bSuccess_1;
	uint8                                         Pad_4F1[0x7];
	class APawn*                                  K2Node_DynamicCast_AsPawn_1;
	bool                                          K2Node_DynamicCast_bSuccess_2;
	bool                                          CallFunc_HasAnyMatchingGameplayTags_ReturnValue;
	bool                                          CallFunc_NotEqual_ObjectObject_ReturnValue_1;
	uint8                                         Pad_503[0x5];
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue;
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue_1;
	class UParticleSystemComponent*               CallFunc_SpawnEmitterAtLocation_ReturnValue;
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue_2;
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue_3;
	class APawn*                                  CallFunc_GetInstigator_ReturnValue_3;
	uint8                                         Pad_578[0x8];
	struct FTransform                             CallFunc_GetTransform_ReturnValue;
	bool                                          CallFunc_IsValid_ReturnValue;
	uint8                                         Pad_5E1[0xF];
	struct FGameplayAbilityTargetingLocationInfo  K2Node_MakeStruct_GameplayAbilityTargetingLocationInfo;
	struct FGameplayAbilityTargetDataHandle       CallFunc_AbilityTargetDataFromLocations_ReturnValue;
	struct FGameplayEventData                     K2Node_MakeStruct_GameplayEventData;
	float                                         CallFunc_Conv_FloatToVector_InFloat_ImplicitCast;
	float                                         K2Node_VariableSet_ProjectileGravityScale_ImplicitCast;
	float                                         CallFunc_PlayLocalForceFeedbackAtLocationMulti_InnerRadius_ImplicitCast;
	float                                         CallFunc_PlayLocalForceFeedbackAtLocationMulti_OuterRadius_ImplicitCast;
	float                                         K2Node_VariableSet_ProjectileGravityScale_ImplicitCast_1;
	uint8                                         Pad_77C[0x4];
	double                                        CallFunc_Multiply_VectorFloat_B_ImplicitCast;
};
static_assert(alignof(B_Prj_Commando_FragGrenade_C_ExecuteUbergraph_B_Prj_Commando_FragGrenade) == 0x000010, "Wrong alignment on B_Prj_Commando_FragGrenade_C_ExecuteUbergraph_B_Prj_Commando_FragGrenade");
static_assert(sizeof(B_Prj_Commando_FragGrenade_C_ExecuteUbergraph_B_Prj_Commando_FragGrenade) == 0x000790, "Wrong size on B_Prj_Commando_FragGrenade_C_ExecuteUbergraph_B_Prj_Commando_FragGrenade");
static_assert(offsetof(B_Prj_Commando_FragGrenade_C_ExecuteUbergraph_B_Prj_Commando_FragGrenade, EntryPoint) == 0x000000, "Member 'B_Prj_Commando_FragGrenade_C_ExecuteUbergraph_B_Prj_Commando_FragGrenade::EntryPoint' has a wrong offset!");
static_assert(offsetof(B_Prj_Commando_FragGrenade_C_ExecuteUbergraph_B_Prj_Commando_FragGrenade, Temp_bool_Has_Been_Initd_Variable) == 0x000004, "Member 'B_Prj_Commando_FragGrenade_C_ExecuteUbergraph_B_Prj_Commando_FragGrenade::Temp_bool_Has_Been_Initd_Variable' has a wrong offset!");
static_assert(offsetof(B_Prj_Commando_FragGrenade_C_ExecuteUbergraph_B_Prj_Commando_FragGrenade, Temp_bool_IsClosed_Variable) == 0x000005, "Member 'B_Prj_Commando_FragGrenade_C_ExecuteUbergraph_B_Prj_Commando_FragGrenade::Temp_bool_IsClosed_Variable' has a wrong offset!");
static_assert(offsetof(B_Prj_Commando_FragGrenade_C_ExecuteUbergraph_B_Prj_Commando_FragGrenade, CallFunc_HasAuthority_ReturnValue) == 0x000006, "Member 'B_Prj_Commando_FragGrenade_C_ExecuteUbergraph_B_Prj_Commando_FragGrenade::CallFunc_HasAuthority_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_Prj_Commando_FragGrenade_C_ExecuteUbergraph_B_Prj_Commando_FragGrenade, Temp_bool_Variable) == 0x000007, "Member 'B_Prj_Commando_FragGrenade_C_ExecuteUbergraph_B_Prj_Commando_FragGrenade::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(B_Prj_Commando_FragGrenade_C_ExecuteUbergraph_B_Prj_Commando_FragGrenade, K2Node_Event_Hit_1) == 0x000008, "Member 'B_Prj_Commando_FragGrenade_C_ExecuteUbergraph_B_Prj_Commando_FragGrenade::K2Node_Event_Hit_1' has a wrong offset!");
static_assert(offsetof(B_Prj_Commando_FragGrenade_C_ExecuteUbergraph_B_Prj_Commando_FragGrenade, CallFunc_GetInstigatorController_ReturnValue) == 0x0000E8, "Member 'B_Prj_Commando_FragGrenade_C_ExecuteUbergraph_B_Prj_Commando_FragGrenade::CallFunc_GetInstigatorController_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_Prj_Commando_FragGrenade_C_ExecuteUbergraph_B_Prj_Commando_FragGrenade, CallFunc_K2_SetWorldRotation_SweepHitResult) == 0x0000F0, "Member 'B_Prj_Commando_FragGrenade_C_ExecuteUbergraph_B_Prj_Commando_FragGrenade::CallFunc_K2_SetWorldRotation_SweepHitResult' has a wrong offset!");
static_assert(offsetof(B_Prj_Commando_FragGrenade_C_ExecuteUbergraph_B_Prj_Commando_FragGrenade, CallFunc_GetPlayerController_ReturnValue) == 0x0001D0, "Member 'B_Prj_Commando_FragGrenade_C_ExecuteUbergraph_B_Prj_Commando_FragGrenade::CallFunc_GetPlayerController_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_Prj_Commando_FragGrenade_C_ExecuteUbergraph_B_Prj_Commando_FragGrenade, CallFunc_OnSameTeam_ReturnValue) == 0x0001D8, "Member 'B_Prj_Commando_FragGrenade_C_ExecuteUbergraph_B_Prj_Commando_FragGrenade::CallFunc_OnSameTeam_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_Prj_Commando_FragGrenade_C_ExecuteUbergraph_B_Prj_Commando_FragGrenade, K2Node_Event_HitActors) == 0x0001E0, "Member 'B_Prj_Commando_FragGrenade_C_ExecuteUbergraph_B_Prj_Commando_FragGrenade::K2Node_Event_HitActors' has a wrong offset!");
static_assert(offsetof(B_Prj_Commando_FragGrenade_C_ExecuteUbergraph_B_Prj_Commando_FragGrenade, K2Node_Event_HitResults) == 0x0001F0, "Member 'B_Prj_Commando_FragGrenade_C_ExecuteUbergraph_B_Prj_Commando_FragGrenade::K2Node_Event_HitResults' has a wrong offset!");
static_assert(offsetof(B_Prj_Commando_FragGrenade_C_ExecuteUbergraph_B_Prj_Commando_FragGrenade, K2Node_Event_Damage) == 0x000200, "Member 'B_Prj_Commando_FragGrenade_C_ExecuteUbergraph_B_Prj_Commando_FragGrenade::K2Node_Event_Damage' has a wrong offset!");
static_assert(offsetof(B_Prj_Commando_FragGrenade_C_ExecuteUbergraph_B_Prj_Commando_FragGrenade, K2Node_Event_DamageType) == 0x000208, "Member 'B_Prj_Commando_FragGrenade_C_ExecuteUbergraph_B_Prj_Commando_FragGrenade::K2Node_Event_DamageType' has a wrong offset!");
static_assert(offsetof(B_Prj_Commando_FragGrenade_C_ExecuteUbergraph_B_Prj_Commando_FragGrenade, K2Node_Event_InstigatedBy) == 0x000210, "Member 'B_Prj_Commando_FragGrenade_C_ExecuteUbergraph_B_Prj_Commando_FragGrenade::K2Node_Event_InstigatedBy' has a wrong offset!");
static_assert(offsetof(B_Prj_Commando_FragGrenade_C_ExecuteUbergraph_B_Prj_Commando_FragGrenade, K2Node_Event_DamageCauser) == 0x000218, "Member 'B_Prj_Commando_FragGrenade_C_ExecuteUbergraph_B_Prj_Commando_FragGrenade::K2Node_Event_DamageCauser' has a wrong offset!");
static_assert(offsetof(B_Prj_Commando_FragGrenade_C_ExecuteUbergraph_B_Prj_Commando_FragGrenade, CallFunc_MakeRotator_ReturnValue) == 0x000220, "Member 'B_Prj_Commando_FragGrenade_C_ExecuteUbergraph_B_Prj_Commando_FragGrenade::CallFunc_MakeRotator_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_Prj_Commando_FragGrenade_C_ExecuteUbergraph_B_Prj_Commando_FragGrenade, CallFunc_GetInstigator_ReturnValue) == 0x000238, "Member 'B_Prj_Commando_FragGrenade_C_ExecuteUbergraph_B_Prj_Commando_FragGrenade::CallFunc_GetInstigator_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_Prj_Commando_FragGrenade_C_ExecuteUbergraph_B_Prj_Commando_FragGrenade, CallFunc_IsLocallyControlled_ReturnValue) == 0x000240, "Member 'B_Prj_Commando_FragGrenade_C_ExecuteUbergraph_B_Prj_Commando_FragGrenade::CallFunc_IsLocallyControlled_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_Prj_Commando_FragGrenade_C_ExecuteUbergraph_B_Prj_Commando_FragGrenade, CallFunc_Conv_FloatToVector_ReturnValue) == 0x000248, "Member 'B_Prj_Commando_FragGrenade_C_ExecuteUbergraph_B_Prj_Commando_FragGrenade::CallFunc_Conv_FloatToVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_Prj_Commando_FragGrenade_C_ExecuteUbergraph_B_Prj_Commando_FragGrenade, K2Node_Event_Hit) == 0x000260, "Member 'B_Prj_Commando_FragGrenade_C_ExecuteUbergraph_B_Prj_Commando_FragGrenade::K2Node_Event_Hit' has a wrong offset!");
static_assert(offsetof(B_Prj_Commando_FragGrenade_C_ExecuteUbergraph_B_Prj_Commando_FragGrenade, CallFunc_BreakHitResult_bBlockingHit) == 0x000340, "Member 'B_Prj_Commando_FragGrenade_C_ExecuteUbergraph_B_Prj_Commando_FragGrenade::CallFunc_BreakHitResult_bBlockingHit' has a wrong offset!");
static_assert(offsetof(B_Prj_Commando_FragGrenade_C_ExecuteUbergraph_B_Prj_Commando_FragGrenade, CallFunc_BreakHitResult_bInitialOverlap) == 0x000341, "Member 'B_Prj_Commando_FragGrenade_C_ExecuteUbergraph_B_Prj_Commando_FragGrenade::CallFunc_BreakHitResult_bInitialOverlap' has a wrong offset!");
static_assert(offsetof(B_Prj_Commando_FragGrenade_C_ExecuteUbergraph_B_Prj_Commando_FragGrenade, CallFunc_BreakHitResult_Time) == 0x000344, "Member 'B_Prj_Commando_FragGrenade_C_ExecuteUbergraph_B_Prj_Commando_FragGrenade::CallFunc_BreakHitResult_Time' has a wrong offset!");
static_assert(offsetof(B_Prj_Commando_FragGrenade_C_ExecuteUbergraph_B_Prj_Commando_FragGrenade, CallFunc_BreakHitResult_Distance) == 0x000348, "Member 'B_Prj_Commando_FragGrenade_C_ExecuteUbergraph_B_Prj_Commando_FragGrenade::CallFunc_BreakHitResult_Distance' has a wrong offset!");
static_assert(offsetof(B_Prj_Commando_FragGrenade_C_ExecuteUbergraph_B_Prj_Commando_FragGrenade, CallFunc_BreakHitResult_Location) == 0x000350, "Member 'B_Prj_Commando_FragGrenade_C_ExecuteUbergraph_B_Prj_Commando_FragGrenade::CallFunc_BreakHitResult_Location' has a wrong offset!");
static_assert(offsetof(B_Prj_Commando_FragGrenade_C_ExecuteUbergraph_B_Prj_Commando_FragGrenade, CallFunc_BreakHitResult_ImpactPoint) == 0x000368, "Member 'B_Prj_Commando_FragGrenade_C_ExecuteUbergraph_B_Prj_Commando_FragGrenade::CallFunc_BreakHitResult_ImpactPoint' has a wrong offset!");
static_assert(offsetof(B_Prj_Commando_FragGrenade_C_ExecuteUbergraph_B_Prj_Commando_FragGrenade, CallFunc_BreakHitResult_Normal) == 0x000380, "Member 'B_Prj_Commando_FragGrenade_C_ExecuteUbergraph_B_Prj_Commando_FragGrenade::CallFunc_BreakHitResult_Normal' has a wrong offset!");
static_assert(offsetof(B_Prj_Commando_FragGrenade_C_ExecuteUbergraph_B_Prj_Commando_FragGrenade, CallFunc_BreakHitResult_ImpactNormal) == 0x000398, "Member 'B_Prj_Commando_FragGrenade_C_ExecuteUbergraph_B_Prj_Commando_FragGrenade::CallFunc_BreakHitResult_ImpactNormal' has a wrong offset!");
static_assert(offsetof(B_Prj_Commando_FragGrenade_C_ExecuteUbergraph_B_Prj_Commando_FragGrenade, CallFunc_BreakHitResult_PhysMat) == 0x0003B0, "Member 'B_Prj_Commando_FragGrenade_C_ExecuteUbergraph_B_Prj_Commando_FragGrenade::CallFunc_BreakHitResult_PhysMat' has a wrong offset!");
static_assert(offsetof(B_Prj_Commando_FragGrenade_C_ExecuteUbergraph_B_Prj_Commando_FragGrenade, CallFunc_BreakHitResult_HitActor) == 0x0003B8, "Member 'B_Prj_Commando_FragGrenade_C_ExecuteUbergraph_B_Prj_Commando_FragGrenade::CallFunc_BreakHitResult_HitActor' has a wrong offset!");
static_assert(offsetof(B_Prj_Commando_FragGrenade_C_ExecuteUbergraph_B_Prj_Commando_FragGrenade, CallFunc_BreakHitResult_HitComponent) == 0x0003C0, "Member 'B_Prj_Commando_FragGrenade_C_ExecuteUbergraph_B_Prj_Commando_FragGrenade::CallFunc_BreakHitResult_HitComponent' has a wrong offset!");
static_assert(offsetof(B_Prj_Commando_FragGrenade_C_ExecuteUbergraph_B_Prj_Commando_FragGrenade, CallFunc_BreakHitResult_HitBoneName) == 0x0003C8, "Member 'B_Prj_Commando_FragGrenade_C_ExecuteUbergraph_B_Prj_Commando_FragGrenade::CallFunc_BreakHitResult_HitBoneName' has a wrong offset!");
static_assert(offsetof(B_Prj_Commando_FragGrenade_C_ExecuteUbergraph_B_Prj_Commando_FragGrenade, CallFunc_BreakHitResult_BoneName) == 0x0003CC, "Member 'B_Prj_Commando_FragGrenade_C_ExecuteUbergraph_B_Prj_Commando_FragGrenade::CallFunc_BreakHitResult_BoneName' has a wrong offset!");
static_assert(offsetof(B_Prj_Commando_FragGrenade_C_ExecuteUbergraph_B_Prj_Commando_FragGrenade, CallFunc_BreakHitResult_HitItem) == 0x0003D0, "Member 'B_Prj_Commando_FragGrenade_C_ExecuteUbergraph_B_Prj_Commando_FragGrenade::CallFunc_BreakHitResult_HitItem' has a wrong offset!");
static_assert(offsetof(B_Prj_Commando_FragGrenade_C_ExecuteUbergraph_B_Prj_Commando_FragGrenade, CallFunc_BreakHitResult_ElementIndex) == 0x0003D4, "Member 'B_Prj_Commando_FragGrenade_C_ExecuteUbergraph_B_Prj_Commando_FragGrenade::CallFunc_BreakHitResult_ElementIndex' has a wrong offset!");
static_assert(offsetof(B_Prj_Commando_FragGrenade_C_ExecuteUbergraph_B_Prj_Commando_FragGrenade, CallFunc_BreakHitResult_FaceIndex) == 0x0003D8, "Member 'B_Prj_Commando_FragGrenade_C_ExecuteUbergraph_B_Prj_Commando_FragGrenade::CallFunc_BreakHitResult_FaceIndex' has a wrong offset!");
static_assert(offsetof(B_Prj_Commando_FragGrenade_C_ExecuteUbergraph_B_Prj_Commando_FragGrenade, CallFunc_BreakHitResult_TraceStart) == 0x0003E0, "Member 'B_Prj_Commando_FragGrenade_C_ExecuteUbergraph_B_Prj_Commando_FragGrenade::CallFunc_BreakHitResult_TraceStart' has a wrong offset!");
static_assert(offsetof(B_Prj_Commando_FragGrenade_C_ExecuteUbergraph_B_Prj_Commando_FragGrenade, CallFunc_BreakHitResult_TraceEnd) == 0x0003F8, "Member 'B_Prj_Commando_FragGrenade_C_ExecuteUbergraph_B_Prj_Commando_FragGrenade::CallFunc_BreakHitResult_TraceEnd' has a wrong offset!");
static_assert(offsetof(B_Prj_Commando_FragGrenade_C_ExecuteUbergraph_B_Prj_Commando_FragGrenade, K2Node_DynamicCast_AsPawn) == 0x000410, "Member 'B_Prj_Commando_FragGrenade_C_ExecuteUbergraph_B_Prj_Commando_FragGrenade::K2Node_DynamicCast_AsPawn' has a wrong offset!");
static_assert(offsetof(B_Prj_Commando_FragGrenade_C_ExecuteUbergraph_B_Prj_Commando_FragGrenade, K2Node_DynamicCast_bSuccess) == 0x000418, "Member 'B_Prj_Commando_FragGrenade_C_ExecuteUbergraph_B_Prj_Commando_FragGrenade::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(B_Prj_Commando_FragGrenade_C_ExecuteUbergraph_B_Prj_Commando_FragGrenade, CallFunc_Add_IntInt_ReturnValue) == 0x00041C, "Member 'B_Prj_Commando_FragGrenade_C_ExecuteUbergraph_B_Prj_Commando_FragGrenade::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_Prj_Commando_FragGrenade_C_ExecuteUbergraph_B_Prj_Commando_FragGrenade, CallFunc_EqualEqual_ObjectObject_ReturnValue) == 0x000420, "Member 'B_Prj_Commando_FragGrenade_C_ExecuteUbergraph_B_Prj_Commando_FragGrenade::CallFunc_EqualEqual_ObjectObject_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_Prj_Commando_FragGrenade_C_ExecuteUbergraph_B_Prj_Commando_FragGrenade, CallFunc_GreaterEqual_IntInt_ReturnValue) == 0x000421, "Member 'B_Prj_Commando_FragGrenade_C_ExecuteUbergraph_B_Prj_Commando_FragGrenade::CallFunc_GreaterEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_Prj_Commando_FragGrenade_C_ExecuteUbergraph_B_Prj_Commando_FragGrenade, Temp_bool_Has_Been_Initd_Variable_1) == 0x000422, "Member 'B_Prj_Commando_FragGrenade_C_ExecuteUbergraph_B_Prj_Commando_FragGrenade::Temp_bool_Has_Been_Initd_Variable_1' has a wrong offset!");
static_assert(offsetof(B_Prj_Commando_FragGrenade_C_ExecuteUbergraph_B_Prj_Commando_FragGrenade, Temp_bool_Has_Been_Initd_Variable_2) == 0x000423, "Member 'B_Prj_Commando_FragGrenade_C_ExecuteUbergraph_B_Prj_Commando_FragGrenade::Temp_bool_Has_Been_Initd_Variable_2' has a wrong offset!");
static_assert(offsetof(B_Prj_Commando_FragGrenade_C_ExecuteUbergraph_B_Prj_Commando_FragGrenade, Temp_bool_Has_Been_Initd_Variable_3) == 0x000424, "Member 'B_Prj_Commando_FragGrenade_C_ExecuteUbergraph_B_Prj_Commando_FragGrenade::Temp_bool_Has_Been_Initd_Variable_3' has a wrong offset!");
static_assert(offsetof(B_Prj_Commando_FragGrenade_C_ExecuteUbergraph_B_Prj_Commando_FragGrenade, Temp_bool_Has_Been_Initd_Variable_4) == 0x000425, "Member 'B_Prj_Commando_FragGrenade_C_ExecuteUbergraph_B_Prj_Commando_FragGrenade::Temp_bool_Has_Been_Initd_Variable_4' has a wrong offset!");
static_assert(offsetof(B_Prj_Commando_FragGrenade_C_ExecuteUbergraph_B_Prj_Commando_FragGrenade, Temp_bool_IsClosed_Variable_1) == 0x000426, "Member 'B_Prj_Commando_FragGrenade_C_ExecuteUbergraph_B_Prj_Commando_FragGrenade::Temp_bool_IsClosed_Variable_1' has a wrong offset!");
static_assert(offsetof(B_Prj_Commando_FragGrenade_C_ExecuteUbergraph_B_Prj_Commando_FragGrenade, CallFunc_Multiply_DoubleDouble_ReturnValue) == 0x000428, "Member 'B_Prj_Commando_FragGrenade_C_ExecuteUbergraph_B_Prj_Commando_FragGrenade::CallFunc_Multiply_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_Prj_Commando_FragGrenade_C_ExecuteUbergraph_B_Prj_Commando_FragGrenade, CallFunc_Add_IntInt_ReturnValue_1) == 0x000430, "Member 'B_Prj_Commando_FragGrenade_C_ExecuteUbergraph_B_Prj_Commando_FragGrenade::CallFunc_Add_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(B_Prj_Commando_FragGrenade_C_ExecuteUbergraph_B_Prj_Commando_FragGrenade, CallFunc_GreaterEqual_IntInt_ReturnValue_1) == 0x000434, "Member 'B_Prj_Commando_FragGrenade_C_ExecuteUbergraph_B_Prj_Commando_FragGrenade::CallFunc_GreaterEqual_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(B_Prj_Commando_FragGrenade_C_ExecuteUbergraph_B_Prj_Commando_FragGrenade, CallFunc_GetInstigator_ReturnValue_1) == 0x000438, "Member 'B_Prj_Commando_FragGrenade_C_ExecuteUbergraph_B_Prj_Commando_FragGrenade::CallFunc_GetInstigator_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(B_Prj_Commando_FragGrenade_C_ExecuteUbergraph_B_Prj_Commando_FragGrenade, CallFunc_Multiply_VectorFloat_ReturnValue) == 0x000440, "Member 'B_Prj_Commando_FragGrenade_C_ExecuteUbergraph_B_Prj_Commando_FragGrenade::CallFunc_Multiply_VectorFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_Prj_Commando_FragGrenade_C_ExecuteUbergraph_B_Prj_Commando_FragGrenade, CallFunc_GetInstigator_ReturnValue_2) == 0x000458, "Member 'B_Prj_Commando_FragGrenade_C_ExecuteUbergraph_B_Prj_Commando_FragGrenade::CallFunc_GetInstigator_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(B_Prj_Commando_FragGrenade_C_ExecuteUbergraph_B_Prj_Commando_FragGrenade, CallFunc_BreakVector_X) == 0x000460, "Member 'B_Prj_Commando_FragGrenade_C_ExecuteUbergraph_B_Prj_Commando_FragGrenade::CallFunc_BreakVector_X' has a wrong offset!");
static_assert(offsetof(B_Prj_Commando_FragGrenade_C_ExecuteUbergraph_B_Prj_Commando_FragGrenade, CallFunc_BreakVector_Y) == 0x000468, "Member 'B_Prj_Commando_FragGrenade_C_ExecuteUbergraph_B_Prj_Commando_FragGrenade::CallFunc_BreakVector_Y' has a wrong offset!");
static_assert(offsetof(B_Prj_Commando_FragGrenade_C_ExecuteUbergraph_B_Prj_Commando_FragGrenade, CallFunc_BreakVector_Z) == 0x000470, "Member 'B_Prj_Commando_FragGrenade_C_ExecuteUbergraph_B_Prj_Commando_FragGrenade::CallFunc_BreakVector_Z' has a wrong offset!");
static_assert(offsetof(B_Prj_Commando_FragGrenade_C_ExecuteUbergraph_B_Prj_Commando_FragGrenade, CallFunc_NotEqual_ObjectObject_ReturnValue) == 0x000478, "Member 'B_Prj_Commando_FragGrenade_C_ExecuteUbergraph_B_Prj_Commando_FragGrenade::CallFunc_NotEqual_ObjectObject_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_Prj_Commando_FragGrenade_C_ExecuteUbergraph_B_Prj_Commando_FragGrenade, CallFunc_Abs_ReturnValue) == 0x000480, "Member 'B_Prj_Commando_FragGrenade_C_ExecuteUbergraph_B_Prj_Commando_FragGrenade::CallFunc_Abs_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_Prj_Commando_FragGrenade_C_ExecuteUbergraph_B_Prj_Commando_FragGrenade, CallFunc_MakeVector_ReturnValue) == 0x000488, "Member 'B_Prj_Commando_FragGrenade_C_ExecuteUbergraph_B_Prj_Commando_FragGrenade::CallFunc_MakeVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_Prj_Commando_FragGrenade_C_ExecuteUbergraph_B_Prj_Commando_FragGrenade, K2Node_CustomEvent_DestroyedActor) == 0x0004A0, "Member 'B_Prj_Commando_FragGrenade_C_ExecuteUbergraph_B_Prj_Commando_FragGrenade::K2Node_CustomEvent_DestroyedActor' has a wrong offset!");
static_assert(offsetof(B_Prj_Commando_FragGrenade_C_ExecuteUbergraph_B_Prj_Commando_FragGrenade, CallFunc_Multiply_VectorFloat_ReturnValue_1) == 0x0004A8, "Member 'B_Prj_Commando_FragGrenade_C_ExecuteUbergraph_B_Prj_Commando_FragGrenade::CallFunc_Multiply_VectorFloat_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(B_Prj_Commando_FragGrenade_C_ExecuteUbergraph_B_Prj_Commando_FragGrenade, Temp_bool_IsClosed_Variable_2) == 0x0004C0, "Member 'B_Prj_Commando_FragGrenade_C_ExecuteUbergraph_B_Prj_Commando_FragGrenade::Temp_bool_IsClosed_Variable_2' has a wrong offset!");
static_assert(offsetof(B_Prj_Commando_FragGrenade_C_ExecuteUbergraph_B_Prj_Commando_FragGrenade, Temp_bool_IsClosed_Variable_3) == 0x0004C1, "Member 'B_Prj_Commando_FragGrenade_C_ExecuteUbergraph_B_Prj_Commando_FragGrenade::Temp_bool_IsClosed_Variable_3' has a wrong offset!");
static_assert(offsetof(B_Prj_Commando_FragGrenade_C_ExecuteUbergraph_B_Prj_Commando_FragGrenade, CallFunc_IsDedicatedServer_ReturnValue) == 0x0004C2, "Member 'B_Prj_Commando_FragGrenade_C_ExecuteUbergraph_B_Prj_Commando_FragGrenade::CallFunc_IsDedicatedServer_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_Prj_Commando_FragGrenade_C_ExecuteUbergraph_B_Prj_Commando_FragGrenade, CallFunc_IsDedicatedServer_ReturnValue_1) == 0x0004C3, "Member 'B_Prj_Commando_FragGrenade_C_ExecuteUbergraph_B_Prj_Commando_FragGrenade::CallFunc_IsDedicatedServer_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(B_Prj_Commando_FragGrenade_C_ExecuteUbergraph_B_Prj_Commando_FragGrenade, Temp_bool_IsClosed_Variable_4) == 0x0004C4, "Member 'B_Prj_Commando_FragGrenade_C_ExecuteUbergraph_B_Prj_Commando_FragGrenade::Temp_bool_IsClosed_Variable_4' has a wrong offset!");
static_assert(offsetof(B_Prj_Commando_FragGrenade_C_ExecuteUbergraph_B_Prj_Commando_FragGrenade, K2Node_CreateDelegate_OutputDelegate) == 0x0004C8, "Member 'B_Prj_Commando_FragGrenade_C_ExecuteUbergraph_B_Prj_Commando_FragGrenade::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(B_Prj_Commando_FragGrenade_C_ExecuteUbergraph_B_Prj_Commando_FragGrenade, K2Node_Event_OtherActor) == 0x0004D8, "Member 'B_Prj_Commando_FragGrenade_C_ExecuteUbergraph_B_Prj_Commando_FragGrenade::K2Node_Event_OtherActor' has a wrong offset!");
static_assert(offsetof(B_Prj_Commando_FragGrenade_C_ExecuteUbergraph_B_Prj_Commando_FragGrenade, K2Node_DynamicCast_AsGameplay_Tag_Asset_Interface) == 0x0004E0, "Member 'B_Prj_Commando_FragGrenade_C_ExecuteUbergraph_B_Prj_Commando_FragGrenade::K2Node_DynamicCast_AsGameplay_Tag_Asset_Interface' has a wrong offset!");
static_assert(offsetof(B_Prj_Commando_FragGrenade_C_ExecuteUbergraph_B_Prj_Commando_FragGrenade, K2Node_DynamicCast_bSuccess_1) == 0x0004F0, "Member 'B_Prj_Commando_FragGrenade_C_ExecuteUbergraph_B_Prj_Commando_FragGrenade::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(B_Prj_Commando_FragGrenade_C_ExecuteUbergraph_B_Prj_Commando_FragGrenade, K2Node_DynamicCast_AsPawn_1) == 0x0004F8, "Member 'B_Prj_Commando_FragGrenade_C_ExecuteUbergraph_B_Prj_Commando_FragGrenade::K2Node_DynamicCast_AsPawn_1' has a wrong offset!");
static_assert(offsetof(B_Prj_Commando_FragGrenade_C_ExecuteUbergraph_B_Prj_Commando_FragGrenade, K2Node_DynamicCast_bSuccess_2) == 0x000500, "Member 'B_Prj_Commando_FragGrenade_C_ExecuteUbergraph_B_Prj_Commando_FragGrenade::K2Node_DynamicCast_bSuccess_2' has a wrong offset!");
static_assert(offsetof(B_Prj_Commando_FragGrenade_C_ExecuteUbergraph_B_Prj_Commando_FragGrenade, CallFunc_HasAnyMatchingGameplayTags_ReturnValue) == 0x000501, "Member 'B_Prj_Commando_FragGrenade_C_ExecuteUbergraph_B_Prj_Commando_FragGrenade::CallFunc_HasAnyMatchingGameplayTags_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_Prj_Commando_FragGrenade_C_ExecuteUbergraph_B_Prj_Commando_FragGrenade, CallFunc_NotEqual_ObjectObject_ReturnValue_1) == 0x000502, "Member 'B_Prj_Commando_FragGrenade_C_ExecuteUbergraph_B_Prj_Commando_FragGrenade::CallFunc_NotEqual_ObjectObject_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(B_Prj_Commando_FragGrenade_C_ExecuteUbergraph_B_Prj_Commando_FragGrenade, CallFunc_K2_GetActorLocation_ReturnValue) == 0x000508, "Member 'B_Prj_Commando_FragGrenade_C_ExecuteUbergraph_B_Prj_Commando_FragGrenade::CallFunc_K2_GetActorLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_Prj_Commando_FragGrenade_C_ExecuteUbergraph_B_Prj_Commando_FragGrenade, CallFunc_K2_GetActorLocation_ReturnValue_1) == 0x000520, "Member 'B_Prj_Commando_FragGrenade_C_ExecuteUbergraph_B_Prj_Commando_FragGrenade::CallFunc_K2_GetActorLocation_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(B_Prj_Commando_FragGrenade_C_ExecuteUbergraph_B_Prj_Commando_FragGrenade, CallFunc_SpawnEmitterAtLocation_ReturnValue) == 0x000538, "Member 'B_Prj_Commando_FragGrenade_C_ExecuteUbergraph_B_Prj_Commando_FragGrenade::CallFunc_SpawnEmitterAtLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_Prj_Commando_FragGrenade_C_ExecuteUbergraph_B_Prj_Commando_FragGrenade, CallFunc_K2_GetActorLocation_ReturnValue_2) == 0x000540, "Member 'B_Prj_Commando_FragGrenade_C_ExecuteUbergraph_B_Prj_Commando_FragGrenade::CallFunc_K2_GetActorLocation_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(B_Prj_Commando_FragGrenade_C_ExecuteUbergraph_B_Prj_Commando_FragGrenade, CallFunc_K2_GetActorLocation_ReturnValue_3) == 0x000558, "Member 'B_Prj_Commando_FragGrenade_C_ExecuteUbergraph_B_Prj_Commando_FragGrenade::CallFunc_K2_GetActorLocation_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(B_Prj_Commando_FragGrenade_C_ExecuteUbergraph_B_Prj_Commando_FragGrenade, CallFunc_GetInstigator_ReturnValue_3) == 0x000570, "Member 'B_Prj_Commando_FragGrenade_C_ExecuteUbergraph_B_Prj_Commando_FragGrenade::CallFunc_GetInstigator_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(B_Prj_Commando_FragGrenade_C_ExecuteUbergraph_B_Prj_Commando_FragGrenade, CallFunc_GetTransform_ReturnValue) == 0x000580, "Member 'B_Prj_Commando_FragGrenade_C_ExecuteUbergraph_B_Prj_Commando_FragGrenade::CallFunc_GetTransform_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_Prj_Commando_FragGrenade_C_ExecuteUbergraph_B_Prj_Commando_FragGrenade, CallFunc_IsValid_ReturnValue) == 0x0005E0, "Member 'B_Prj_Commando_FragGrenade_C_ExecuteUbergraph_B_Prj_Commando_FragGrenade::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_Prj_Commando_FragGrenade_C_ExecuteUbergraph_B_Prj_Commando_FragGrenade, K2Node_MakeStruct_GameplayAbilityTargetingLocationInfo) == 0x0005F0, "Member 'B_Prj_Commando_FragGrenade_C_ExecuteUbergraph_B_Prj_Commando_FragGrenade::K2Node_MakeStruct_GameplayAbilityTargetingLocationInfo' has a wrong offset!");
static_assert(offsetof(B_Prj_Commando_FragGrenade_C_ExecuteUbergraph_B_Prj_Commando_FragGrenade, CallFunc_AbilityTargetDataFromLocations_ReturnValue) == 0x000690, "Member 'B_Prj_Commando_FragGrenade_C_ExecuteUbergraph_B_Prj_Commando_FragGrenade::CallFunc_AbilityTargetDataFromLocations_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_Prj_Commando_FragGrenade_C_ExecuteUbergraph_B_Prj_Commando_FragGrenade, K2Node_MakeStruct_GameplayEventData) == 0x0006B8, "Member 'B_Prj_Commando_FragGrenade_C_ExecuteUbergraph_B_Prj_Commando_FragGrenade::K2Node_MakeStruct_GameplayEventData' has a wrong offset!");
static_assert(offsetof(B_Prj_Commando_FragGrenade_C_ExecuteUbergraph_B_Prj_Commando_FragGrenade, CallFunc_Conv_FloatToVector_InFloat_ImplicitCast) == 0x000768, "Member 'B_Prj_Commando_FragGrenade_C_ExecuteUbergraph_B_Prj_Commando_FragGrenade::CallFunc_Conv_FloatToVector_InFloat_ImplicitCast' has a wrong offset!");
static_assert(offsetof(B_Prj_Commando_FragGrenade_C_ExecuteUbergraph_B_Prj_Commando_FragGrenade, K2Node_VariableSet_ProjectileGravityScale_ImplicitCast) == 0x00076C, "Member 'B_Prj_Commando_FragGrenade_C_ExecuteUbergraph_B_Prj_Commando_FragGrenade::K2Node_VariableSet_ProjectileGravityScale_ImplicitCast' has a wrong offset!");
static_assert(offsetof(B_Prj_Commando_FragGrenade_C_ExecuteUbergraph_B_Prj_Commando_FragGrenade, CallFunc_PlayLocalForceFeedbackAtLocationMulti_InnerRadius_ImplicitCast) == 0x000770, "Member 'B_Prj_Commando_FragGrenade_C_ExecuteUbergraph_B_Prj_Commando_FragGrenade::CallFunc_PlayLocalForceFeedbackAtLocationMulti_InnerRadius_ImplicitCast' has a wrong offset!");
static_assert(offsetof(B_Prj_Commando_FragGrenade_C_ExecuteUbergraph_B_Prj_Commando_FragGrenade, CallFunc_PlayLocalForceFeedbackAtLocationMulti_OuterRadius_ImplicitCast) == 0x000774, "Member 'B_Prj_Commando_FragGrenade_C_ExecuteUbergraph_B_Prj_Commando_FragGrenade::CallFunc_PlayLocalForceFeedbackAtLocationMulti_OuterRadius_ImplicitCast' has a wrong offset!");
static_assert(offsetof(B_Prj_Commando_FragGrenade_C_ExecuteUbergraph_B_Prj_Commando_FragGrenade, K2Node_VariableSet_ProjectileGravityScale_ImplicitCast_1) == 0x000778, "Member 'B_Prj_Commando_FragGrenade_C_ExecuteUbergraph_B_Prj_Commando_FragGrenade::K2Node_VariableSet_ProjectileGravityScale_ImplicitCast_1' has a wrong offset!");
static_assert(offsetof(B_Prj_Commando_FragGrenade_C_ExecuteUbergraph_B_Prj_Commando_FragGrenade, CallFunc_Multiply_VectorFloat_B_ImplicitCast) == 0x000780, "Member 'B_Prj_Commando_FragGrenade_C_ExecuteUbergraph_B_Prj_Commando_FragGrenade::CallFunc_Multiply_VectorFloat_B_ImplicitCast' has a wrong offset!");

struct B_Prj_Commando_FragGrenade_C_On_Destroy_Grenade final
{
public:
	class AActor*                                 DestroyedActor;
};
static_assert(alignof(B_Prj_Commando_FragGrenade_C_On_Destroy_Grenade) == 0x000008, "Wrong alignment on B_Prj_Commando_FragGrenade_C_On_Destroy_Grenade");
static_assert(sizeof(B_Prj_Commando_FragGrenade_C_On_Destroy_Grenade) == 0x000008, "Wrong size on B_Prj_Commando_FragGrenade_C_On_Destroy_Grenade");
static_assert(offsetof(B_Prj_Commando_FragGrenade_C_On_Destroy_Grenade, DestroyedActor) == 0x000000, "Member 'B_Prj_Commando_FragGrenade_C_On_Destroy_Grenade::DestroyedActor' has a wrong offset!");

struct B_Prj_Commando_FragGrenade_C_OnBounce final
{
public:
	struct FHitResult                             Hit;
};
static_assert(alignof(B_Prj_Commando_FragGrenade_C_OnBounce) == 0x000008, "Wrong alignment on B_Prj_Commando_FragGrenade_C_OnBounce");
static_assert(sizeof(B_Prj_Commando_FragGrenade_C_OnBounce) == 0x0000E0, "Wrong size on B_Prj_Commando_FragGrenade_C_OnBounce");
static_assert(offsetof(B_Prj_Commando_FragGrenade_C_OnBounce, Hit) == 0x000000, "Member 'B_Prj_Commando_FragGrenade_C_OnBounce::Hit' has a wrong offset!");

struct B_Prj_Commando_FragGrenade_C_OnExploded final
{
public:
	TArray<class AActor*>                         HitActors;
	TArray<struct FHitResult>                     HitResults;
};
static_assert(alignof(B_Prj_Commando_FragGrenade_C_OnExploded) == 0x000008, "Wrong alignment on B_Prj_Commando_FragGrenade_C_OnExploded");
static_assert(sizeof(B_Prj_Commando_FragGrenade_C_OnExploded) == 0x000020, "Wrong size on B_Prj_Commando_FragGrenade_C_OnExploded");
static_assert(offsetof(B_Prj_Commando_FragGrenade_C_OnExploded, HitActors) == 0x000000, "Member 'B_Prj_Commando_FragGrenade_C_OnExploded::HitActors' has a wrong offset!");
static_assert(offsetof(B_Prj_Commando_FragGrenade_C_OnExploded, HitResults) == 0x000010, "Member 'B_Prj_Commando_FragGrenade_C_OnExploded::HitResults' has a wrong offset!");

struct B_Prj_Commando_FragGrenade_C_OnStop final
{
public:
	struct FHitResult                             Hit;
};
static_assert(alignof(B_Prj_Commando_FragGrenade_C_OnStop) == 0x000008, "Wrong alignment on B_Prj_Commando_FragGrenade_C_OnStop");
static_assert(sizeof(B_Prj_Commando_FragGrenade_C_OnStop) == 0x0000E0, "Wrong size on B_Prj_Commando_FragGrenade_C_OnStop");
static_assert(offsetof(B_Prj_Commando_FragGrenade_C_OnStop, Hit) == 0x000000, "Member 'B_Prj_Commando_FragGrenade_C_OnStop::Hit' has a wrong offset!");

struct B_Prj_Commando_FragGrenade_C_ReceiveActorBeginOverlap final
{
public:
	class AActor*                                 OtherActor;
};
static_assert(alignof(B_Prj_Commando_FragGrenade_C_ReceiveActorBeginOverlap) == 0x000008, "Wrong alignment on B_Prj_Commando_FragGrenade_C_ReceiveActorBeginOverlap");
static_assert(sizeof(B_Prj_Commando_FragGrenade_C_ReceiveActorBeginOverlap) == 0x000008, "Wrong size on B_Prj_Commando_FragGrenade_C_ReceiveActorBeginOverlap");
static_assert(offsetof(B_Prj_Commando_FragGrenade_C_ReceiveActorBeginOverlap, OtherActor) == 0x000000, "Member 'B_Prj_Commando_FragGrenade_C_ReceiveActorBeginOverlap::OtherActor' has a wrong offset!");

struct B_Prj_Commando_FragGrenade_C_ReceiveAnyDamage final
{
public:
	float                                         Damage;
	uint8                                         Pad_4[0x4];
	const class UDamageType*                      DamageType;
	class AController*                            InstigatedBy;
	class AActor*                                 DamageCauser;
};
static_assert(alignof(B_Prj_Commando_FragGrenade_C_ReceiveAnyDamage) == 0x000008, "Wrong alignment on B_Prj_Commando_FragGrenade_C_ReceiveAnyDamage");
static_assert(sizeof(B_Prj_Commando_FragGrenade_C_ReceiveAnyDamage) == 0x000020, "Wrong size on B_Prj_Commando_FragGrenade_C_ReceiveAnyDamage");
static_assert(offsetof(B_Prj_Commando_FragGrenade_C_ReceiveAnyDamage, Damage) == 0x000000, "Member 'B_Prj_Commando_FragGrenade_C_ReceiveAnyDamage::Damage' has a wrong offset!");
static_assert(offsetof(B_Prj_Commando_FragGrenade_C_ReceiveAnyDamage, DamageType) == 0x000008, "Member 'B_Prj_Commando_FragGrenade_C_ReceiveAnyDamage::DamageType' has a wrong offset!");
static_assert(offsetof(B_Prj_Commando_FragGrenade_C_ReceiveAnyDamage, InstigatedBy) == 0x000010, "Member 'B_Prj_Commando_FragGrenade_C_ReceiveAnyDamage::InstigatedBy' has a wrong offset!");
static_assert(offsetof(B_Prj_Commando_FragGrenade_C_ReceiveAnyDamage, DamageCauser) == 0x000018, "Member 'B_Prj_Commando_FragGrenade_C_ReceiveAnyDamage::DamageCauser' has a wrong offset!");

struct B_Prj_Commando_FragGrenade_C_SpawnClusters final
{
public:
	double                                        CallFunc_RandomFloatInRange_ReturnValue;
	double                                        CallFunc_RandomFloatInRange_ReturnValue_1;
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue;
	struct FRotator                               CallFunc_MakeRotator_ReturnValue;
	struct FVector                                CallFunc_Add_VectorVector_ReturnValue;
	class AActor*                                 CallFunc_GetOwner_ReturnValue;
	bool                                          Temp_bool_Variable;
	uint8                                         Pad_61[0x7];
	double                                        CallFunc_RandomFloatInRange_ReturnValue_2;
	int32                                         Temp_int_Variable;
	uint8                                         Pad_74[0x4];
	struct FFortGameplayEffectContainerSpec       K2Node_Select_Default;
	int32                                         CallFunc_Add_IntInt_ReturnValue;
	uint8                                         Pad_134[0x4];
	class AFortProjectileBase*                    CallFunc_SpawnProjectile_ReturnValue;
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue;
	uint8                                         Pad_141[0x3];
	float                                         CallFunc_MakeRotator_Yaw_ImplicitCast;
	float                                         CallFunc_MakeRotator_Pitch_ImplicitCast;
	float                                         CallFunc_SpawnProjectile_InitialSpeed_ImplicitCast;
};
static_assert(alignof(B_Prj_Commando_FragGrenade_C_SpawnClusters) == 0x000008, "Wrong alignment on B_Prj_Commando_FragGrenade_C_SpawnClusters");
static_assert(sizeof(B_Prj_Commando_FragGrenade_C_SpawnClusters) == 0x000150, "Wrong size on B_Prj_Commando_FragGrenade_C_SpawnClusters");
static_assert(offsetof(B_Prj_Commando_FragGrenade_C_SpawnClusters, CallFunc_RandomFloatInRange_ReturnValue) == 0x000000, "Member 'B_Prj_Commando_FragGrenade_C_SpawnClusters::CallFunc_RandomFloatInRange_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_Prj_Commando_FragGrenade_C_SpawnClusters, CallFunc_RandomFloatInRange_ReturnValue_1) == 0x000008, "Member 'B_Prj_Commando_FragGrenade_C_SpawnClusters::CallFunc_RandomFloatInRange_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(B_Prj_Commando_FragGrenade_C_SpawnClusters, CallFunc_K2_GetActorLocation_ReturnValue) == 0x000010, "Member 'B_Prj_Commando_FragGrenade_C_SpawnClusters::CallFunc_K2_GetActorLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_Prj_Commando_FragGrenade_C_SpawnClusters, CallFunc_MakeRotator_ReturnValue) == 0x000028, "Member 'B_Prj_Commando_FragGrenade_C_SpawnClusters::CallFunc_MakeRotator_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_Prj_Commando_FragGrenade_C_SpawnClusters, CallFunc_Add_VectorVector_ReturnValue) == 0x000040, "Member 'B_Prj_Commando_FragGrenade_C_SpawnClusters::CallFunc_Add_VectorVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_Prj_Commando_FragGrenade_C_SpawnClusters, CallFunc_GetOwner_ReturnValue) == 0x000058, "Member 'B_Prj_Commando_FragGrenade_C_SpawnClusters::CallFunc_GetOwner_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_Prj_Commando_FragGrenade_C_SpawnClusters, Temp_bool_Variable) == 0x000060, "Member 'B_Prj_Commando_FragGrenade_C_SpawnClusters::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(B_Prj_Commando_FragGrenade_C_SpawnClusters, CallFunc_RandomFloatInRange_ReturnValue_2) == 0x000068, "Member 'B_Prj_Commando_FragGrenade_C_SpawnClusters::CallFunc_RandomFloatInRange_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(B_Prj_Commando_FragGrenade_C_SpawnClusters, Temp_int_Variable) == 0x000070, "Member 'B_Prj_Commando_FragGrenade_C_SpawnClusters::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(B_Prj_Commando_FragGrenade_C_SpawnClusters, K2Node_Select_Default) == 0x000078, "Member 'B_Prj_Commando_FragGrenade_C_SpawnClusters::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(B_Prj_Commando_FragGrenade_C_SpawnClusters, CallFunc_Add_IntInt_ReturnValue) == 0x000130, "Member 'B_Prj_Commando_FragGrenade_C_SpawnClusters::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_Prj_Commando_FragGrenade_C_SpawnClusters, CallFunc_SpawnProjectile_ReturnValue) == 0x000138, "Member 'B_Prj_Commando_FragGrenade_C_SpawnClusters::CallFunc_SpawnProjectile_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_Prj_Commando_FragGrenade_C_SpawnClusters, CallFunc_LessEqual_IntInt_ReturnValue) == 0x000140, "Member 'B_Prj_Commando_FragGrenade_C_SpawnClusters::CallFunc_LessEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_Prj_Commando_FragGrenade_C_SpawnClusters, CallFunc_MakeRotator_Yaw_ImplicitCast) == 0x000144, "Member 'B_Prj_Commando_FragGrenade_C_SpawnClusters::CallFunc_MakeRotator_Yaw_ImplicitCast' has a wrong offset!");
static_assert(offsetof(B_Prj_Commando_FragGrenade_C_SpawnClusters, CallFunc_MakeRotator_Pitch_ImplicitCast) == 0x000148, "Member 'B_Prj_Commando_FragGrenade_C_SpawnClusters::CallFunc_MakeRotator_Pitch_ImplicitCast' has a wrong offset!");
static_assert(offsetof(B_Prj_Commando_FragGrenade_C_SpawnClusters, CallFunc_SpawnProjectile_InitialSpeed_ImplicitCast) == 0x00014C, "Member 'B_Prj_Commando_FragGrenade_C_SpawnClusters::CallFunc_SpawnProjectile_InitialSpeed_ImplicitCast' has a wrong offset!");

struct B_Prj_Commando_FragGrenade_C_SpawnKeepOut final
{
public:
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue;
	class AActor*                                 CallFunc_GetOwner_ReturnValue;
	struct FRotator                               CallFunc_MakeRotator_ReturnValue;
	class AFortAreaOfEffectCloud*                 CallFunc_SpawnAreaOfEffectCloud_ReturnValue;
	class AAOE_Commando_KeepOutExplosion_C*       K2Node_DynamicCast_AsAOE_Commando_Keep_Out_Explosion;
	bool                                          K2Node_DynamicCast_bSuccess;
};
static_assert(alignof(B_Prj_Commando_FragGrenade_C_SpawnKeepOut) == 0x000008, "Wrong alignment on B_Prj_Commando_FragGrenade_C_SpawnKeepOut");
static_assert(sizeof(B_Prj_Commando_FragGrenade_C_SpawnKeepOut) == 0x000050, "Wrong size on B_Prj_Commando_FragGrenade_C_SpawnKeepOut");
static_assert(offsetof(B_Prj_Commando_FragGrenade_C_SpawnKeepOut, CallFunc_K2_GetActorLocation_ReturnValue) == 0x000000, "Member 'B_Prj_Commando_FragGrenade_C_SpawnKeepOut::CallFunc_K2_GetActorLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_Prj_Commando_FragGrenade_C_SpawnKeepOut, CallFunc_GetOwner_ReturnValue) == 0x000018, "Member 'B_Prj_Commando_FragGrenade_C_SpawnKeepOut::CallFunc_GetOwner_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_Prj_Commando_FragGrenade_C_SpawnKeepOut, CallFunc_MakeRotator_ReturnValue) == 0x000020, "Member 'B_Prj_Commando_FragGrenade_C_SpawnKeepOut::CallFunc_MakeRotator_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_Prj_Commando_FragGrenade_C_SpawnKeepOut, CallFunc_SpawnAreaOfEffectCloud_ReturnValue) == 0x000038, "Member 'B_Prj_Commando_FragGrenade_C_SpawnKeepOut::CallFunc_SpawnAreaOfEffectCloud_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_Prj_Commando_FragGrenade_C_SpawnKeepOut, K2Node_DynamicCast_AsAOE_Commando_Keep_Out_Explosion) == 0x000040, "Member 'B_Prj_Commando_FragGrenade_C_SpawnKeepOut::K2Node_DynamicCast_AsAOE_Commando_Keep_Out_Explosion' has a wrong offset!");
static_assert(offsetof(B_Prj_Commando_FragGrenade_C_SpawnKeepOut, K2Node_DynamicCast_bSuccess) == 0x000048, "Member 'B_Prj_Commando_FragGrenade_C_SpawnKeepOut::K2Node_DynamicCast_bSuccess' has a wrong offset!");

struct B_Prj_Commando_FragGrenade_C_UserConstructionScript final
{
public:
	bool                                          CallFunc_IsDedicatedServer_ReturnValue;
};
static_assert(alignof(B_Prj_Commando_FragGrenade_C_UserConstructionScript) == 0x000001, "Wrong alignment on B_Prj_Commando_FragGrenade_C_UserConstructionScript");
static_assert(sizeof(B_Prj_Commando_FragGrenade_C_UserConstructionScript) == 0x000001, "Wrong size on B_Prj_Commando_FragGrenade_C_UserConstructionScript");
static_assert(offsetof(B_Prj_Commando_FragGrenade_C_UserConstructionScript, CallFunc_IsDedicatedServer_ReturnValue) == 0x000000, "Member 'B_Prj_Commando_FragGrenade_C_UserConstructionScript::CallFunc_IsDedicatedServer_ReturnValue' has a wrong offset!");

}
