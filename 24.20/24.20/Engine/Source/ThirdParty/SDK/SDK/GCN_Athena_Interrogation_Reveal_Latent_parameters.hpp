#pragma once

#include "Basic.hpp"

#include "GameplayAbilities_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "Engine_structs.hpp"
#include "GameplayTags_structs.hpp"

namespace SDK::Params
{

struct GCN_Athena_Interrogation_Reveal_Latent_C_ExecuteUbergraph_GCN_Athena_Interrogation_Reveal_Latent final
{
public:
	int32                                         EntryPoint;
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;
	EEndPlayReason                                K2Node_Event_EndPlayReason;
	uint8                                         Pad_11[0x3];
	struct FLinearColor                           CallFunc_MakeColor_ReturnValue;
	bool                                          CallFunc_IsValid_ReturnValue;
	uint8                                         Pad_25[0x3];
	double                                        CallFunc_GetGameTimeInSeconds_ReturnValue;
	bool                                          CallFunc_Greater_DoubleDouble_ReturnValue;
	uint8                                         Pad_31[0x3];
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_1;
	struct FTimerHandle                           CallFunc_K2_SetTimerDelegate_ReturnValue;
	struct FLinearColor                           CallFunc_Conv_VectorToLinearColor_ReturnValue;
	class UParticleSystemComponent*               CallFunc_SpawnEmitterAttached_ReturnValue;
	float                                         CallFunc_GetValueAtLevel_ReturnValue;
	uint8                                         Pad_64[0x4];
	double                                        CallFunc_Add_DoubleDouble_ReturnValue;
	float                                         CallFunc_GetValueAtLevel_ReturnValue_1;
	uint8                                         Pad_74[0x4];
	struct FTimerHandle                           CallFunc_K2_SetTimerDelegate_ReturnValue_1;
	float                                         CallFunc_SetScalarParameterValue_ParameterValue_ImplicitCast;
	float                                         CallFunc_SetScalarParameterValue_ParameterValue_ImplicitCast_1;
	float                                         CallFunc_SetScalarParameterValue_ParameterValue_ImplicitCast_2;
	float                                         CallFunc_K2_SetTimerDelegate_Time_ImplicitCast;
	double                                        CallFunc_Add_DoubleDouble_B_ImplicitCast;
	float                                         CallFunc_K2_SetTimerDelegate_Time_ImplicitCast_1;
};
static_assert(alignof(GCN_Athena_Interrogation_Reveal_Latent_C_ExecuteUbergraph_GCN_Athena_Interrogation_Reveal_Latent) == 0x000008, "Wrong alignment on GCN_Athena_Interrogation_Reveal_Latent_C_ExecuteUbergraph_GCN_Athena_Interrogation_Reveal_Latent");
static_assert(sizeof(GCN_Athena_Interrogation_Reveal_Latent_C_ExecuteUbergraph_GCN_Athena_Interrogation_Reveal_Latent) == 0x0000A0, "Wrong size on GCN_Athena_Interrogation_Reveal_Latent_C_ExecuteUbergraph_GCN_Athena_Interrogation_Reveal_Latent");
static_assert(offsetof(GCN_Athena_Interrogation_Reveal_Latent_C_ExecuteUbergraph_GCN_Athena_Interrogation_Reveal_Latent, EntryPoint) == 0x000000, "Member 'GCN_Athena_Interrogation_Reveal_Latent_C_ExecuteUbergraph_GCN_Athena_Interrogation_Reveal_Latent::EntryPoint' has a wrong offset!");
static_assert(offsetof(GCN_Athena_Interrogation_Reveal_Latent_C_ExecuteUbergraph_GCN_Athena_Interrogation_Reveal_Latent, K2Node_CreateDelegate_OutputDelegate) == 0x000004, "Member 'GCN_Athena_Interrogation_Reveal_Latent_C_ExecuteUbergraph_GCN_Athena_Interrogation_Reveal_Latent::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(GCN_Athena_Interrogation_Reveal_Latent_C_ExecuteUbergraph_GCN_Athena_Interrogation_Reveal_Latent, K2Node_Event_EndPlayReason) == 0x000010, "Member 'GCN_Athena_Interrogation_Reveal_Latent_C_ExecuteUbergraph_GCN_Athena_Interrogation_Reveal_Latent::K2Node_Event_EndPlayReason' has a wrong offset!");
static_assert(offsetof(GCN_Athena_Interrogation_Reveal_Latent_C_ExecuteUbergraph_GCN_Athena_Interrogation_Reveal_Latent, CallFunc_MakeColor_ReturnValue) == 0x000014, "Member 'GCN_Athena_Interrogation_Reveal_Latent_C_ExecuteUbergraph_GCN_Athena_Interrogation_Reveal_Latent::CallFunc_MakeColor_ReturnValue' has a wrong offset!");
static_assert(offsetof(GCN_Athena_Interrogation_Reveal_Latent_C_ExecuteUbergraph_GCN_Athena_Interrogation_Reveal_Latent, CallFunc_IsValid_ReturnValue) == 0x000024, "Member 'GCN_Athena_Interrogation_Reveal_Latent_C_ExecuteUbergraph_GCN_Athena_Interrogation_Reveal_Latent::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(GCN_Athena_Interrogation_Reveal_Latent_C_ExecuteUbergraph_GCN_Athena_Interrogation_Reveal_Latent, CallFunc_GetGameTimeInSeconds_ReturnValue) == 0x000028, "Member 'GCN_Athena_Interrogation_Reveal_Latent_C_ExecuteUbergraph_GCN_Athena_Interrogation_Reveal_Latent::CallFunc_GetGameTimeInSeconds_ReturnValue' has a wrong offset!");
static_assert(offsetof(GCN_Athena_Interrogation_Reveal_Latent_C_ExecuteUbergraph_GCN_Athena_Interrogation_Reveal_Latent, CallFunc_Greater_DoubleDouble_ReturnValue) == 0x000030, "Member 'GCN_Athena_Interrogation_Reveal_Latent_C_ExecuteUbergraph_GCN_Athena_Interrogation_Reveal_Latent::CallFunc_Greater_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(GCN_Athena_Interrogation_Reveal_Latent_C_ExecuteUbergraph_GCN_Athena_Interrogation_Reveal_Latent, K2Node_CreateDelegate_OutputDelegate_1) == 0x000034, "Member 'GCN_Athena_Interrogation_Reveal_Latent_C_ExecuteUbergraph_GCN_Athena_Interrogation_Reveal_Latent::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(GCN_Athena_Interrogation_Reveal_Latent_C_ExecuteUbergraph_GCN_Athena_Interrogation_Reveal_Latent, CallFunc_K2_SetTimerDelegate_ReturnValue) == 0x000040, "Member 'GCN_Athena_Interrogation_Reveal_Latent_C_ExecuteUbergraph_GCN_Athena_Interrogation_Reveal_Latent::CallFunc_K2_SetTimerDelegate_ReturnValue' has a wrong offset!");
static_assert(offsetof(GCN_Athena_Interrogation_Reveal_Latent_C_ExecuteUbergraph_GCN_Athena_Interrogation_Reveal_Latent, CallFunc_Conv_VectorToLinearColor_ReturnValue) == 0x000048, "Member 'GCN_Athena_Interrogation_Reveal_Latent_C_ExecuteUbergraph_GCN_Athena_Interrogation_Reveal_Latent::CallFunc_Conv_VectorToLinearColor_ReturnValue' has a wrong offset!");
static_assert(offsetof(GCN_Athena_Interrogation_Reveal_Latent_C_ExecuteUbergraph_GCN_Athena_Interrogation_Reveal_Latent, CallFunc_SpawnEmitterAttached_ReturnValue) == 0x000058, "Member 'GCN_Athena_Interrogation_Reveal_Latent_C_ExecuteUbergraph_GCN_Athena_Interrogation_Reveal_Latent::CallFunc_SpawnEmitterAttached_ReturnValue' has a wrong offset!");
static_assert(offsetof(GCN_Athena_Interrogation_Reveal_Latent_C_ExecuteUbergraph_GCN_Athena_Interrogation_Reveal_Latent, CallFunc_GetValueAtLevel_ReturnValue) == 0x000060, "Member 'GCN_Athena_Interrogation_Reveal_Latent_C_ExecuteUbergraph_GCN_Athena_Interrogation_Reveal_Latent::CallFunc_GetValueAtLevel_ReturnValue' has a wrong offset!");
static_assert(offsetof(GCN_Athena_Interrogation_Reveal_Latent_C_ExecuteUbergraph_GCN_Athena_Interrogation_Reveal_Latent, CallFunc_Add_DoubleDouble_ReturnValue) == 0x000068, "Member 'GCN_Athena_Interrogation_Reveal_Latent_C_ExecuteUbergraph_GCN_Athena_Interrogation_Reveal_Latent::CallFunc_Add_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(GCN_Athena_Interrogation_Reveal_Latent_C_ExecuteUbergraph_GCN_Athena_Interrogation_Reveal_Latent, CallFunc_GetValueAtLevel_ReturnValue_1) == 0x000070, "Member 'GCN_Athena_Interrogation_Reveal_Latent_C_ExecuteUbergraph_GCN_Athena_Interrogation_Reveal_Latent::CallFunc_GetValueAtLevel_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GCN_Athena_Interrogation_Reveal_Latent_C_ExecuteUbergraph_GCN_Athena_Interrogation_Reveal_Latent, CallFunc_K2_SetTimerDelegate_ReturnValue_1) == 0x000078, "Member 'GCN_Athena_Interrogation_Reveal_Latent_C_ExecuteUbergraph_GCN_Athena_Interrogation_Reveal_Latent::CallFunc_K2_SetTimerDelegate_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GCN_Athena_Interrogation_Reveal_Latent_C_ExecuteUbergraph_GCN_Athena_Interrogation_Reveal_Latent, CallFunc_SetScalarParameterValue_ParameterValue_ImplicitCast) == 0x000080, "Member 'GCN_Athena_Interrogation_Reveal_Latent_C_ExecuteUbergraph_GCN_Athena_Interrogation_Reveal_Latent::CallFunc_SetScalarParameterValue_ParameterValue_ImplicitCast' has a wrong offset!");
static_assert(offsetof(GCN_Athena_Interrogation_Reveal_Latent_C_ExecuteUbergraph_GCN_Athena_Interrogation_Reveal_Latent, CallFunc_SetScalarParameterValue_ParameterValue_ImplicitCast_1) == 0x000084, "Member 'GCN_Athena_Interrogation_Reveal_Latent_C_ExecuteUbergraph_GCN_Athena_Interrogation_Reveal_Latent::CallFunc_SetScalarParameterValue_ParameterValue_ImplicitCast_1' has a wrong offset!");
static_assert(offsetof(GCN_Athena_Interrogation_Reveal_Latent_C_ExecuteUbergraph_GCN_Athena_Interrogation_Reveal_Latent, CallFunc_SetScalarParameterValue_ParameterValue_ImplicitCast_2) == 0x000088, "Member 'GCN_Athena_Interrogation_Reveal_Latent_C_ExecuteUbergraph_GCN_Athena_Interrogation_Reveal_Latent::CallFunc_SetScalarParameterValue_ParameterValue_ImplicitCast_2' has a wrong offset!");
static_assert(offsetof(GCN_Athena_Interrogation_Reveal_Latent_C_ExecuteUbergraph_GCN_Athena_Interrogation_Reveal_Latent, CallFunc_K2_SetTimerDelegate_Time_ImplicitCast) == 0x00008C, "Member 'GCN_Athena_Interrogation_Reveal_Latent_C_ExecuteUbergraph_GCN_Athena_Interrogation_Reveal_Latent::CallFunc_K2_SetTimerDelegate_Time_ImplicitCast' has a wrong offset!");
static_assert(offsetof(GCN_Athena_Interrogation_Reveal_Latent_C_ExecuteUbergraph_GCN_Athena_Interrogation_Reveal_Latent, CallFunc_Add_DoubleDouble_B_ImplicitCast) == 0x000090, "Member 'GCN_Athena_Interrogation_Reveal_Latent_C_ExecuteUbergraph_GCN_Athena_Interrogation_Reveal_Latent::CallFunc_Add_DoubleDouble_B_ImplicitCast' has a wrong offset!");
static_assert(offsetof(GCN_Athena_Interrogation_Reveal_Latent_C_ExecuteUbergraph_GCN_Athena_Interrogation_Reveal_Latent, CallFunc_K2_SetTimerDelegate_Time_ImplicitCast_1) == 0x000098, "Member 'GCN_Athena_Interrogation_Reveal_Latent_C_ExecuteUbergraph_GCN_Athena_Interrogation_Reveal_Latent::CallFunc_K2_SetTimerDelegate_Time_ImplicitCast_1' has a wrong offset!");

struct GCN_Athena_Interrogation_Reveal_Latent_C_OnExecute final
{
public:
	class AActor*                                 MyTarget;
	struct FGameplayCueParameters                 Parameters;
	bool                                          ReturnValue;
	uint8                                         Pad_D9[0x3];
	float                                         CallFunc_BreakGameplayCueParameters_NormalizedMagnitude;
	float                                         CallFunc_BreakGameplayCueParameters_RawMagnitude;
	uint8                                         Pad_E4[0x4];
	struct FGameplayEffectContextHandle           CallFunc_BreakGameplayCueParameters_EffectContext;
	struct FGameplayTag                           CallFunc_BreakGameplayCueParameters_MatchedTagName;
	struct FGameplayTag                           CallFunc_BreakGameplayCueParameters_OriginalTag;
	struct FGameplayTagContainer                  CallFunc_BreakGameplayCueParameters_AggregatedSourceTags;
	struct FGameplayTagContainer                  CallFunc_BreakGameplayCueParameters_AggregatedTargetTags;
	struct FVector                                CallFunc_BreakGameplayCueParameters_Location;
	struct FVector                                CallFunc_BreakGameplayCueParameters_Normal;
	class AActor*                                 CallFunc_BreakGameplayCueParameters_Instigator;
	class AActor*                                 CallFunc_BreakGameplayCueParameters_EffectCauser;
	class UObject*                                CallFunc_BreakGameplayCueParameters_SourceObject;
	class UPhysicalMaterial*                      CallFunc_BreakGameplayCueParameters_PhysicalMaterial;
	int32                                         CallFunc_BreakGameplayCueParameters_GameplayEffectLevel;
	int32                                         CallFunc_BreakGameplayCueParameters_AbilityLevel;
	class USceneComponent*                        CallFunc_BreakGameplayCueParameters_TargetAttachComponent;
	bool                                          CallFunc_BreakGameplayCueParameters_bReplicateLocationWhenUsingMinimalRepProxy;
	uint8                                         Pad_1A9[0x7];
	class AActor*                                 K2Node_DynamicCast_AsActor;
	bool                                          K2Node_DynamicCast_bSuccess;
	bool                                          CallFunc_IsValid_ReturnValue;
	uint8                                         Pad_1BA[0x6];
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue;
	bool                                          CallFunc_IsValid_ReturnValue_1;
	bool                                          CallFunc_OnExecute_ReturnValue;
	bool                                          Temp_bool_Variable;
	uint8                                         Pad_1DB[0x5];
	class UObject*                                K2Node_Select_Default;
	class APlayerPawn_Athena_C*                   K2Node_DynamicCast_AsPlayer_Pawn_Athena;
	bool                                          K2Node_DynamicCast_bSuccess_1;
	bool                                          CallFunc_IsLocallyControlled_ReturnValue;
};
static_assert(alignof(GCN_Athena_Interrogation_Reveal_Latent_C_OnExecute) == 0x000008, "Wrong alignment on GCN_Athena_Interrogation_Reveal_Latent_C_OnExecute");
static_assert(sizeof(GCN_Athena_Interrogation_Reveal_Latent_C_OnExecute) == 0x0001F8, "Wrong size on GCN_Athena_Interrogation_Reveal_Latent_C_OnExecute");
static_assert(offsetof(GCN_Athena_Interrogation_Reveal_Latent_C_OnExecute, MyTarget) == 0x000000, "Member 'GCN_Athena_Interrogation_Reveal_Latent_C_OnExecute::MyTarget' has a wrong offset!");
static_assert(offsetof(GCN_Athena_Interrogation_Reveal_Latent_C_OnExecute, Parameters) == 0x000008, "Member 'GCN_Athena_Interrogation_Reveal_Latent_C_OnExecute::Parameters' has a wrong offset!");
static_assert(offsetof(GCN_Athena_Interrogation_Reveal_Latent_C_OnExecute, ReturnValue) == 0x0000D8, "Member 'GCN_Athena_Interrogation_Reveal_Latent_C_OnExecute::ReturnValue' has a wrong offset!");
static_assert(offsetof(GCN_Athena_Interrogation_Reveal_Latent_C_OnExecute, CallFunc_BreakGameplayCueParameters_NormalizedMagnitude) == 0x0000DC, "Member 'GCN_Athena_Interrogation_Reveal_Latent_C_OnExecute::CallFunc_BreakGameplayCueParameters_NormalizedMagnitude' has a wrong offset!");
static_assert(offsetof(GCN_Athena_Interrogation_Reveal_Latent_C_OnExecute, CallFunc_BreakGameplayCueParameters_RawMagnitude) == 0x0000E0, "Member 'GCN_Athena_Interrogation_Reveal_Latent_C_OnExecute::CallFunc_BreakGameplayCueParameters_RawMagnitude' has a wrong offset!");
static_assert(offsetof(GCN_Athena_Interrogation_Reveal_Latent_C_OnExecute, CallFunc_BreakGameplayCueParameters_EffectContext) == 0x0000E8, "Member 'GCN_Athena_Interrogation_Reveal_Latent_C_OnExecute::CallFunc_BreakGameplayCueParameters_EffectContext' has a wrong offset!");
static_assert(offsetof(GCN_Athena_Interrogation_Reveal_Latent_C_OnExecute, CallFunc_BreakGameplayCueParameters_MatchedTagName) == 0x000100, "Member 'GCN_Athena_Interrogation_Reveal_Latent_C_OnExecute::CallFunc_BreakGameplayCueParameters_MatchedTagName' has a wrong offset!");
static_assert(offsetof(GCN_Athena_Interrogation_Reveal_Latent_C_OnExecute, CallFunc_BreakGameplayCueParameters_OriginalTag) == 0x000104, "Member 'GCN_Athena_Interrogation_Reveal_Latent_C_OnExecute::CallFunc_BreakGameplayCueParameters_OriginalTag' has a wrong offset!");
static_assert(offsetof(GCN_Athena_Interrogation_Reveal_Latent_C_OnExecute, CallFunc_BreakGameplayCueParameters_AggregatedSourceTags) == 0x000108, "Member 'GCN_Athena_Interrogation_Reveal_Latent_C_OnExecute::CallFunc_BreakGameplayCueParameters_AggregatedSourceTags' has a wrong offset!");
static_assert(offsetof(GCN_Athena_Interrogation_Reveal_Latent_C_OnExecute, CallFunc_BreakGameplayCueParameters_AggregatedTargetTags) == 0x000128, "Member 'GCN_Athena_Interrogation_Reveal_Latent_C_OnExecute::CallFunc_BreakGameplayCueParameters_AggregatedTargetTags' has a wrong offset!");
static_assert(offsetof(GCN_Athena_Interrogation_Reveal_Latent_C_OnExecute, CallFunc_BreakGameplayCueParameters_Location) == 0x000148, "Member 'GCN_Athena_Interrogation_Reveal_Latent_C_OnExecute::CallFunc_BreakGameplayCueParameters_Location' has a wrong offset!");
static_assert(offsetof(GCN_Athena_Interrogation_Reveal_Latent_C_OnExecute, CallFunc_BreakGameplayCueParameters_Normal) == 0x000160, "Member 'GCN_Athena_Interrogation_Reveal_Latent_C_OnExecute::CallFunc_BreakGameplayCueParameters_Normal' has a wrong offset!");
static_assert(offsetof(GCN_Athena_Interrogation_Reveal_Latent_C_OnExecute, CallFunc_BreakGameplayCueParameters_Instigator) == 0x000178, "Member 'GCN_Athena_Interrogation_Reveal_Latent_C_OnExecute::CallFunc_BreakGameplayCueParameters_Instigator' has a wrong offset!");
static_assert(offsetof(GCN_Athena_Interrogation_Reveal_Latent_C_OnExecute, CallFunc_BreakGameplayCueParameters_EffectCauser) == 0x000180, "Member 'GCN_Athena_Interrogation_Reveal_Latent_C_OnExecute::CallFunc_BreakGameplayCueParameters_EffectCauser' has a wrong offset!");
static_assert(offsetof(GCN_Athena_Interrogation_Reveal_Latent_C_OnExecute, CallFunc_BreakGameplayCueParameters_SourceObject) == 0x000188, "Member 'GCN_Athena_Interrogation_Reveal_Latent_C_OnExecute::CallFunc_BreakGameplayCueParameters_SourceObject' has a wrong offset!");
static_assert(offsetof(GCN_Athena_Interrogation_Reveal_Latent_C_OnExecute, CallFunc_BreakGameplayCueParameters_PhysicalMaterial) == 0x000190, "Member 'GCN_Athena_Interrogation_Reveal_Latent_C_OnExecute::CallFunc_BreakGameplayCueParameters_PhysicalMaterial' has a wrong offset!");
static_assert(offsetof(GCN_Athena_Interrogation_Reveal_Latent_C_OnExecute, CallFunc_BreakGameplayCueParameters_GameplayEffectLevel) == 0x000198, "Member 'GCN_Athena_Interrogation_Reveal_Latent_C_OnExecute::CallFunc_BreakGameplayCueParameters_GameplayEffectLevel' has a wrong offset!");
static_assert(offsetof(GCN_Athena_Interrogation_Reveal_Latent_C_OnExecute, CallFunc_BreakGameplayCueParameters_AbilityLevel) == 0x00019C, "Member 'GCN_Athena_Interrogation_Reveal_Latent_C_OnExecute::CallFunc_BreakGameplayCueParameters_AbilityLevel' has a wrong offset!");
static_assert(offsetof(GCN_Athena_Interrogation_Reveal_Latent_C_OnExecute, CallFunc_BreakGameplayCueParameters_TargetAttachComponent) == 0x0001A0, "Member 'GCN_Athena_Interrogation_Reveal_Latent_C_OnExecute::CallFunc_BreakGameplayCueParameters_TargetAttachComponent' has a wrong offset!");
static_assert(offsetof(GCN_Athena_Interrogation_Reveal_Latent_C_OnExecute, CallFunc_BreakGameplayCueParameters_bReplicateLocationWhenUsingMinimalRepProxy) == 0x0001A8, "Member 'GCN_Athena_Interrogation_Reveal_Latent_C_OnExecute::CallFunc_BreakGameplayCueParameters_bReplicateLocationWhenUsingMinimalRepProxy' has a wrong offset!");
static_assert(offsetof(GCN_Athena_Interrogation_Reveal_Latent_C_OnExecute, K2Node_DynamicCast_AsActor) == 0x0001B0, "Member 'GCN_Athena_Interrogation_Reveal_Latent_C_OnExecute::K2Node_DynamicCast_AsActor' has a wrong offset!");
static_assert(offsetof(GCN_Athena_Interrogation_Reveal_Latent_C_OnExecute, K2Node_DynamicCast_bSuccess) == 0x0001B8, "Member 'GCN_Athena_Interrogation_Reveal_Latent_C_OnExecute::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(GCN_Athena_Interrogation_Reveal_Latent_C_OnExecute, CallFunc_IsValid_ReturnValue) == 0x0001B9, "Member 'GCN_Athena_Interrogation_Reveal_Latent_C_OnExecute::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(GCN_Athena_Interrogation_Reveal_Latent_C_OnExecute, CallFunc_K2_GetActorLocation_ReturnValue) == 0x0001C0, "Member 'GCN_Athena_Interrogation_Reveal_Latent_C_OnExecute::CallFunc_K2_GetActorLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(GCN_Athena_Interrogation_Reveal_Latent_C_OnExecute, CallFunc_IsValid_ReturnValue_1) == 0x0001D8, "Member 'GCN_Athena_Interrogation_Reveal_Latent_C_OnExecute::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GCN_Athena_Interrogation_Reveal_Latent_C_OnExecute, CallFunc_OnExecute_ReturnValue) == 0x0001D9, "Member 'GCN_Athena_Interrogation_Reveal_Latent_C_OnExecute::CallFunc_OnExecute_ReturnValue' has a wrong offset!");
static_assert(offsetof(GCN_Athena_Interrogation_Reveal_Latent_C_OnExecute, Temp_bool_Variable) == 0x0001DA, "Member 'GCN_Athena_Interrogation_Reveal_Latent_C_OnExecute::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(GCN_Athena_Interrogation_Reveal_Latent_C_OnExecute, K2Node_Select_Default) == 0x0001E0, "Member 'GCN_Athena_Interrogation_Reveal_Latent_C_OnExecute::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(GCN_Athena_Interrogation_Reveal_Latent_C_OnExecute, K2Node_DynamicCast_AsPlayer_Pawn_Athena) == 0x0001E8, "Member 'GCN_Athena_Interrogation_Reveal_Latent_C_OnExecute::K2Node_DynamicCast_AsPlayer_Pawn_Athena' has a wrong offset!");
static_assert(offsetof(GCN_Athena_Interrogation_Reveal_Latent_C_OnExecute, K2Node_DynamicCast_bSuccess_1) == 0x0001F0, "Member 'GCN_Athena_Interrogation_Reveal_Latent_C_OnExecute::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(GCN_Athena_Interrogation_Reveal_Latent_C_OnExecute, CallFunc_IsLocallyControlled_ReturnValue) == 0x0001F1, "Member 'GCN_Athena_Interrogation_Reveal_Latent_C_OnExecute::CallFunc_IsLocallyControlled_ReturnValue' has a wrong offset!");

struct GCN_Athena_Interrogation_Reveal_Latent_C_ReceiveEndPlay final
{
public:
	EEndPlayReason                                EndPlayReason;
};
static_assert(alignof(GCN_Athena_Interrogation_Reveal_Latent_C_ReceiveEndPlay) == 0x000001, "Wrong alignment on GCN_Athena_Interrogation_Reveal_Latent_C_ReceiveEndPlay");
static_assert(sizeof(GCN_Athena_Interrogation_Reveal_Latent_C_ReceiveEndPlay) == 0x000001, "Wrong size on GCN_Athena_Interrogation_Reveal_Latent_C_ReceiveEndPlay");
static_assert(offsetof(GCN_Athena_Interrogation_Reveal_Latent_C_ReceiveEndPlay, EndPlayReason) == 0x000000, "Member 'GCN_Athena_Interrogation_Reveal_Latent_C_ReceiveEndPlay::EndPlayReason' has a wrong offset!");

}
