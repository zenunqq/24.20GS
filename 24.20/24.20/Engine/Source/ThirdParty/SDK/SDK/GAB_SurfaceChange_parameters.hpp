#pragma once

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "PhysicsCore_structs.hpp"
#include "FortniteGame_structs.hpp"
#include "GameplayAbilities_structs.hpp"
#include "Engine_structs.hpp"

namespace SDK::Params
{

struct GAB_SurfaceChange_C_ExecuteUbergraph_GAB_SurfaceChange final
{
public:
	int32                                         EntryPoint;
	uint8                                         Pad_4[0x4];
	struct FGameplayEventData                     K2Node_Event_EventData;
	class AActor*                                 CallFunc_GetAvatarActorFromActorInfo_ReturnValue;
	bool                                          GameplayTagsK2Node_SwitchGameplayTagContainer_CmpSuccess;
	uint8                                         Pad_C1[0x7];
	class AFortPawn*                              K2Node_DynamicCast_AsFort_Pawn;
	bool                                          K2Node_DynamicCast_bSuccess;
	uint8                                         Pad_D1[0x7];
	TScriptInterface<class IGameplayTagAssetInterface> K2Node_DynamicCast_AsGameplay_Tag_Asset_Interface;
	bool                                          K2Node_DynamicCast_bSuccess_1;
	uint8                                         Pad_E9[0x7];
	class AActor*                                 K2Node_DynamicCast_AsActor;
	bool                                          K2Node_DynamicCast_bSuccess_2;
	bool                                          CallFunc_HasMatchingGameplayTag_ReturnValue;
	uint8                                         Pad_FA[0x2];
	struct FActiveGameplayEffectHandle            CallFunc_BP_ApplyGameplayEffectToOwner_ReturnValue;
	TDelegate<void(class ACharacter* Character, EMovementMode PrevMovementMode, uint8 PreviousCustomMode)> K2Node_CreateDelegate_OutputDelegate;
	class ACharacter*                             K2Node_CustomEvent_Character;
	EMovementMode                                 K2Node_CustomEvent_PrevMovementMode;
	uint8                                         K2Node_CustomEvent_PreviousCustomMode;
	bool                                          CallFunc_IsValid_ReturnValue;
	bool                                          K2Node_SwitchEnum_CmpSuccess;
	uint8                                         Pad_11C[0x4];
	TScriptInterface<class IGameplayTagAssetInterface> CallFunc_HasMatchingGameplayTag_self_CastInput;
	bool                                          CallFunc_HasMatchingGameplayTag_ReturnValue_1;
	uint8                                         Pad_131[0x3];
	struct FActiveGameplayEffectHandle            CallFunc_BP_ApplyGameplayEffectToOwner_ReturnValue_1;
	bool                                          CallFunc_IsFalling_ReturnValue;
	uint8                                         Pad_13D[0x3];
	struct FActiveGameplayEffectHandle            CallFunc_BP_ApplyGameplayEffectToOwner_ReturnValue_2;
	struct FActiveGameplayEffectHandle            CallFunc_HotfixableGEApplication_GE_Handle;
	struct FGameplayEventData                     K2Node_MakeStruct_GameplayEventData;
	struct FActiveGameplayEffectHandle            CallFunc_BP_ApplyGameplayEffectToOwner_ReturnValue_3;
	EAthenaGamePhase                              K2Node_CustomEvent_GamePhase;
	bool                                          Temp_bool_Variable;
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;
	uint8                                         Pad_20B[0x5];
	class AFortGameStateAthena*                   CallFunc_GetGameStateAthena_ReturnValue;
	TDelegate<void(EAthenaGamePhase GamePhase)>   K2Node_CreateDelegate_OutputDelegate_1;
	bool                                          CallFunc_IsValid_ReturnValue_1;
};
static_assert(alignof(GAB_SurfaceChange_C_ExecuteUbergraph_GAB_SurfaceChange) == 0x000008, "Wrong alignment on GAB_SurfaceChange_C_ExecuteUbergraph_GAB_SurfaceChange");
static_assert(sizeof(GAB_SurfaceChange_C_ExecuteUbergraph_GAB_SurfaceChange) == 0x000228, "Wrong size on GAB_SurfaceChange_C_ExecuteUbergraph_GAB_SurfaceChange");
static_assert(offsetof(GAB_SurfaceChange_C_ExecuteUbergraph_GAB_SurfaceChange, EntryPoint) == 0x000000, "Member 'GAB_SurfaceChange_C_ExecuteUbergraph_GAB_SurfaceChange::EntryPoint' has a wrong offset!");
static_assert(offsetof(GAB_SurfaceChange_C_ExecuteUbergraph_GAB_SurfaceChange, K2Node_Event_EventData) == 0x000008, "Member 'GAB_SurfaceChange_C_ExecuteUbergraph_GAB_SurfaceChange::K2Node_Event_EventData' has a wrong offset!");
static_assert(offsetof(GAB_SurfaceChange_C_ExecuteUbergraph_GAB_SurfaceChange, CallFunc_GetAvatarActorFromActorInfo_ReturnValue) == 0x0000B8, "Member 'GAB_SurfaceChange_C_ExecuteUbergraph_GAB_SurfaceChange::CallFunc_GetAvatarActorFromActorInfo_ReturnValue' has a wrong offset!");
static_assert(offsetof(GAB_SurfaceChange_C_ExecuteUbergraph_GAB_SurfaceChange, GameplayTagsK2Node_SwitchGameplayTagContainer_CmpSuccess) == 0x0000C0, "Member 'GAB_SurfaceChange_C_ExecuteUbergraph_GAB_SurfaceChange::GameplayTagsK2Node_SwitchGameplayTagContainer_CmpSuccess' has a wrong offset!");
static_assert(offsetof(GAB_SurfaceChange_C_ExecuteUbergraph_GAB_SurfaceChange, K2Node_DynamicCast_AsFort_Pawn) == 0x0000C8, "Member 'GAB_SurfaceChange_C_ExecuteUbergraph_GAB_SurfaceChange::K2Node_DynamicCast_AsFort_Pawn' has a wrong offset!");
static_assert(offsetof(GAB_SurfaceChange_C_ExecuteUbergraph_GAB_SurfaceChange, K2Node_DynamicCast_bSuccess) == 0x0000D0, "Member 'GAB_SurfaceChange_C_ExecuteUbergraph_GAB_SurfaceChange::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(GAB_SurfaceChange_C_ExecuteUbergraph_GAB_SurfaceChange, K2Node_DynamicCast_AsGameplay_Tag_Asset_Interface) == 0x0000D8, "Member 'GAB_SurfaceChange_C_ExecuteUbergraph_GAB_SurfaceChange::K2Node_DynamicCast_AsGameplay_Tag_Asset_Interface' has a wrong offset!");
static_assert(offsetof(GAB_SurfaceChange_C_ExecuteUbergraph_GAB_SurfaceChange, K2Node_DynamicCast_bSuccess_1) == 0x0000E8, "Member 'GAB_SurfaceChange_C_ExecuteUbergraph_GAB_SurfaceChange::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(GAB_SurfaceChange_C_ExecuteUbergraph_GAB_SurfaceChange, K2Node_DynamicCast_AsActor) == 0x0000F0, "Member 'GAB_SurfaceChange_C_ExecuteUbergraph_GAB_SurfaceChange::K2Node_DynamicCast_AsActor' has a wrong offset!");
static_assert(offsetof(GAB_SurfaceChange_C_ExecuteUbergraph_GAB_SurfaceChange, K2Node_DynamicCast_bSuccess_2) == 0x0000F8, "Member 'GAB_SurfaceChange_C_ExecuteUbergraph_GAB_SurfaceChange::K2Node_DynamicCast_bSuccess_2' has a wrong offset!");
static_assert(offsetof(GAB_SurfaceChange_C_ExecuteUbergraph_GAB_SurfaceChange, CallFunc_HasMatchingGameplayTag_ReturnValue) == 0x0000F9, "Member 'GAB_SurfaceChange_C_ExecuteUbergraph_GAB_SurfaceChange::CallFunc_HasMatchingGameplayTag_ReturnValue' has a wrong offset!");
static_assert(offsetof(GAB_SurfaceChange_C_ExecuteUbergraph_GAB_SurfaceChange, CallFunc_BP_ApplyGameplayEffectToOwner_ReturnValue) == 0x0000FC, "Member 'GAB_SurfaceChange_C_ExecuteUbergraph_GAB_SurfaceChange::CallFunc_BP_ApplyGameplayEffectToOwner_ReturnValue' has a wrong offset!");
static_assert(offsetof(GAB_SurfaceChange_C_ExecuteUbergraph_GAB_SurfaceChange, K2Node_CreateDelegate_OutputDelegate) == 0x000104, "Member 'GAB_SurfaceChange_C_ExecuteUbergraph_GAB_SurfaceChange::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(GAB_SurfaceChange_C_ExecuteUbergraph_GAB_SurfaceChange, K2Node_CustomEvent_Character) == 0x000110, "Member 'GAB_SurfaceChange_C_ExecuteUbergraph_GAB_SurfaceChange::K2Node_CustomEvent_Character' has a wrong offset!");
static_assert(offsetof(GAB_SurfaceChange_C_ExecuteUbergraph_GAB_SurfaceChange, K2Node_CustomEvent_PrevMovementMode) == 0x000118, "Member 'GAB_SurfaceChange_C_ExecuteUbergraph_GAB_SurfaceChange::K2Node_CustomEvent_PrevMovementMode' has a wrong offset!");
static_assert(offsetof(GAB_SurfaceChange_C_ExecuteUbergraph_GAB_SurfaceChange, K2Node_CustomEvent_PreviousCustomMode) == 0x000119, "Member 'GAB_SurfaceChange_C_ExecuteUbergraph_GAB_SurfaceChange::K2Node_CustomEvent_PreviousCustomMode' has a wrong offset!");
static_assert(offsetof(GAB_SurfaceChange_C_ExecuteUbergraph_GAB_SurfaceChange, CallFunc_IsValid_ReturnValue) == 0x00011A, "Member 'GAB_SurfaceChange_C_ExecuteUbergraph_GAB_SurfaceChange::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(GAB_SurfaceChange_C_ExecuteUbergraph_GAB_SurfaceChange, K2Node_SwitchEnum_CmpSuccess) == 0x00011B, "Member 'GAB_SurfaceChange_C_ExecuteUbergraph_GAB_SurfaceChange::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");
static_assert(offsetof(GAB_SurfaceChange_C_ExecuteUbergraph_GAB_SurfaceChange, CallFunc_HasMatchingGameplayTag_self_CastInput) == 0x000120, "Member 'GAB_SurfaceChange_C_ExecuteUbergraph_GAB_SurfaceChange::CallFunc_HasMatchingGameplayTag_self_CastInput' has a wrong offset!");
static_assert(offsetof(GAB_SurfaceChange_C_ExecuteUbergraph_GAB_SurfaceChange, CallFunc_HasMatchingGameplayTag_ReturnValue_1) == 0x000130, "Member 'GAB_SurfaceChange_C_ExecuteUbergraph_GAB_SurfaceChange::CallFunc_HasMatchingGameplayTag_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GAB_SurfaceChange_C_ExecuteUbergraph_GAB_SurfaceChange, CallFunc_BP_ApplyGameplayEffectToOwner_ReturnValue_1) == 0x000134, "Member 'GAB_SurfaceChange_C_ExecuteUbergraph_GAB_SurfaceChange::CallFunc_BP_ApplyGameplayEffectToOwner_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GAB_SurfaceChange_C_ExecuteUbergraph_GAB_SurfaceChange, CallFunc_IsFalling_ReturnValue) == 0x00013C, "Member 'GAB_SurfaceChange_C_ExecuteUbergraph_GAB_SurfaceChange::CallFunc_IsFalling_ReturnValue' has a wrong offset!");
static_assert(offsetof(GAB_SurfaceChange_C_ExecuteUbergraph_GAB_SurfaceChange, CallFunc_BP_ApplyGameplayEffectToOwner_ReturnValue_2) == 0x000140, "Member 'GAB_SurfaceChange_C_ExecuteUbergraph_GAB_SurfaceChange::CallFunc_BP_ApplyGameplayEffectToOwner_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(GAB_SurfaceChange_C_ExecuteUbergraph_GAB_SurfaceChange, CallFunc_HotfixableGEApplication_GE_Handle) == 0x000148, "Member 'GAB_SurfaceChange_C_ExecuteUbergraph_GAB_SurfaceChange::CallFunc_HotfixableGEApplication_GE_Handle' has a wrong offset!");
static_assert(offsetof(GAB_SurfaceChange_C_ExecuteUbergraph_GAB_SurfaceChange, K2Node_MakeStruct_GameplayEventData) == 0x000150, "Member 'GAB_SurfaceChange_C_ExecuteUbergraph_GAB_SurfaceChange::K2Node_MakeStruct_GameplayEventData' has a wrong offset!");
static_assert(offsetof(GAB_SurfaceChange_C_ExecuteUbergraph_GAB_SurfaceChange, CallFunc_BP_ApplyGameplayEffectToOwner_ReturnValue_3) == 0x000200, "Member 'GAB_SurfaceChange_C_ExecuteUbergraph_GAB_SurfaceChange::CallFunc_BP_ApplyGameplayEffectToOwner_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(GAB_SurfaceChange_C_ExecuteUbergraph_GAB_SurfaceChange, K2Node_CustomEvent_GamePhase) == 0x000208, "Member 'GAB_SurfaceChange_C_ExecuteUbergraph_GAB_SurfaceChange::K2Node_CustomEvent_GamePhase' has a wrong offset!");
static_assert(offsetof(GAB_SurfaceChange_C_ExecuteUbergraph_GAB_SurfaceChange, Temp_bool_Variable) == 0x000209, "Member 'GAB_SurfaceChange_C_ExecuteUbergraph_GAB_SurfaceChange::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(GAB_SurfaceChange_C_ExecuteUbergraph_GAB_SurfaceChange, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x00020A, "Member 'GAB_SurfaceChange_C_ExecuteUbergraph_GAB_SurfaceChange::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(GAB_SurfaceChange_C_ExecuteUbergraph_GAB_SurfaceChange, CallFunc_GetGameStateAthena_ReturnValue) == 0x000210, "Member 'GAB_SurfaceChange_C_ExecuteUbergraph_GAB_SurfaceChange::CallFunc_GetGameStateAthena_ReturnValue' has a wrong offset!");
static_assert(offsetof(GAB_SurfaceChange_C_ExecuteUbergraph_GAB_SurfaceChange, K2Node_CreateDelegate_OutputDelegate_1) == 0x000218, "Member 'GAB_SurfaceChange_C_ExecuteUbergraph_GAB_SurfaceChange::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(GAB_SurfaceChange_C_ExecuteUbergraph_GAB_SurfaceChange, CallFunc_IsValid_ReturnValue_1) == 0x000224, "Member 'GAB_SurfaceChange_C_ExecuteUbergraph_GAB_SurfaceChange::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");

struct GAB_SurfaceChange_C_GamePhaseChanged final
{
public:
	EAthenaGamePhase                              GamePhase;
};
static_assert(alignof(GAB_SurfaceChange_C_GamePhaseChanged) == 0x000001, "Wrong alignment on GAB_SurfaceChange_C_GamePhaseChanged");
static_assert(sizeof(GAB_SurfaceChange_C_GamePhaseChanged) == 0x000001, "Wrong size on GAB_SurfaceChange_C_GamePhaseChanged");
static_assert(offsetof(GAB_SurfaceChange_C_GamePhaseChanged, GamePhase) == 0x000000, "Member 'GAB_SurfaceChange_C_GamePhaseChanged::GamePhase' has a wrong offset!");

struct GAB_SurfaceChange_C_HotfixableGEApplication final
{
public:
	struct FScalableFloat                         Input;
	class UClass*                                 GameplayEffectAppliedOnTrue;
	class UClass*                                 GameplayEffectAppliedOnFalse;
	struct FActiveGameplayEffectHandle            GE_Handle;
	float                                         CallFunc_GetValueAtLevel_ReturnValue;
	struct FActiveGameplayEffectHandle            CallFunc_BP_ApplyGameplayEffectToOwner_ReturnValue;
	bool                                          CallFunc_Greater_DoubleDouble_ReturnValue;
	uint8                                         Pad_4D[0x3];
	struct FActiveGameplayEffectHandle            CallFunc_BP_ApplyGameplayEffectToOwner_ReturnValue_1;
	double                                        CallFunc_Greater_DoubleDouble_A_ImplicitCast;
};
static_assert(alignof(GAB_SurfaceChange_C_HotfixableGEApplication) == 0x000008, "Wrong alignment on GAB_SurfaceChange_C_HotfixableGEApplication");
static_assert(sizeof(GAB_SurfaceChange_C_HotfixableGEApplication) == 0x000060, "Wrong size on GAB_SurfaceChange_C_HotfixableGEApplication");
static_assert(offsetof(GAB_SurfaceChange_C_HotfixableGEApplication, Input) == 0x000000, "Member 'GAB_SurfaceChange_C_HotfixableGEApplication::Input' has a wrong offset!");
static_assert(offsetof(GAB_SurfaceChange_C_HotfixableGEApplication, GameplayEffectAppliedOnTrue) == 0x000028, "Member 'GAB_SurfaceChange_C_HotfixableGEApplication::GameplayEffectAppliedOnTrue' has a wrong offset!");
static_assert(offsetof(GAB_SurfaceChange_C_HotfixableGEApplication, GameplayEffectAppliedOnFalse) == 0x000030, "Member 'GAB_SurfaceChange_C_HotfixableGEApplication::GameplayEffectAppliedOnFalse' has a wrong offset!");
static_assert(offsetof(GAB_SurfaceChange_C_HotfixableGEApplication, GE_Handle) == 0x000038, "Member 'GAB_SurfaceChange_C_HotfixableGEApplication::GE_Handle' has a wrong offset!");
static_assert(offsetof(GAB_SurfaceChange_C_HotfixableGEApplication, CallFunc_GetValueAtLevel_ReturnValue) == 0x000040, "Member 'GAB_SurfaceChange_C_HotfixableGEApplication::CallFunc_GetValueAtLevel_ReturnValue' has a wrong offset!");
static_assert(offsetof(GAB_SurfaceChange_C_HotfixableGEApplication, CallFunc_BP_ApplyGameplayEffectToOwner_ReturnValue) == 0x000044, "Member 'GAB_SurfaceChange_C_HotfixableGEApplication::CallFunc_BP_ApplyGameplayEffectToOwner_ReturnValue' has a wrong offset!");
static_assert(offsetof(GAB_SurfaceChange_C_HotfixableGEApplication, CallFunc_Greater_DoubleDouble_ReturnValue) == 0x00004C, "Member 'GAB_SurfaceChange_C_HotfixableGEApplication::CallFunc_Greater_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(GAB_SurfaceChange_C_HotfixableGEApplication, CallFunc_BP_ApplyGameplayEffectToOwner_ReturnValue_1) == 0x000050, "Member 'GAB_SurfaceChange_C_HotfixableGEApplication::CallFunc_BP_ApplyGameplayEffectToOwner_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GAB_SurfaceChange_C_HotfixableGEApplication, CallFunc_Greater_DoubleDouble_A_ImplicitCast) == 0x000058, "Member 'GAB_SurfaceChange_C_HotfixableGEApplication::CallFunc_Greater_DoubleDouble_A_ImplicitCast' has a wrong offset!");

struct GAB_SurfaceChange_C_K2_ActivateAbilityFromEvent final
{
public:
	struct FGameplayEventData                     EventData;
};
static_assert(alignof(GAB_SurfaceChange_C_K2_ActivateAbilityFromEvent) == 0x000008, "Wrong alignment on GAB_SurfaceChange_C_K2_ActivateAbilityFromEvent");
static_assert(sizeof(GAB_SurfaceChange_C_K2_ActivateAbilityFromEvent) == 0x0000B0, "Wrong size on GAB_SurfaceChange_C_K2_ActivateAbilityFromEvent");
static_assert(offsetof(GAB_SurfaceChange_C_K2_ActivateAbilityFromEvent, EventData) == 0x000000, "Member 'GAB_SurfaceChange_C_K2_ActivateAbilityFromEvent::EventData' has a wrong offset!");

struct GAB_SurfaceChange_C_LavaBounce final
{
public:
	float                                         CallFunc_RandomFloatFromStream_ReturnValue;
	uint8                                         Pad_4[0x4];
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue;
	double                                        CallFunc_Subtract_DoubleDouble_ReturnValue;
	double                                        CallFunc_BreakVector_X;
	double                                        CallFunc_BreakVector_Y;
	double                                        CallFunc_BreakVector_Z;
	struct FRotator                               CallFunc_K2_GetActorRotation_ReturnValue;
	double                                        CallFunc_Divide_DoubleDouble_ReturnValue;
	float                                         CallFunc_BreakRotator_Roll;
	float                                         CallFunc_BreakRotator_Pitch;
	float                                         CallFunc_BreakRotator_Yaw;
	int32                                         CallFunc_FFloor_ReturnValue;
	float                                         CallFunc_NormalizeAxis_ReturnValue;
	uint8                                         Pad_74[0x4];
	double                                        CallFunc_Divide_DoubleDouble_ReturnValue_1;
	int32                                         CallFunc_FFloor_ReturnValue_1;
	int32                                         CallFunc_FFloor_ReturnValue_2;
	int32                                         CallFunc_Add_IntInt_ReturnValue;
	int32                                         CallFunc_Add_IntInt_ReturnValue_1;
	float                                         CallFunc_GetValueAtLevel_ReturnValue;
	uint8                                         Pad_94[0x4];
	double                                        CallFunc_Multiply_DoubleDouble_ReturnValue;
	bool                                          CallFunc_HasAuthority_ReturnValue;
	uint8                                         Pad_A1[0x3];
	float                                         CallFunc_GetValueAtLevel_ReturnValue_1;
	float                                         CallFunc_GetValueAtLevel_ReturnValue_2;
	float                                         CallFunc_GetValueAtLevel_ReturnValue_3;
	float                                         CallFunc_GetValueAtLevel_ReturnValue_4;
	float                                         CallFunc_GetValueAtLevel_ReturnValue_5;
	struct FVector                                CallFunc_Multiply_VectorFloat_ReturnValue;
	double                                        CallFunc_Subtract_DoubleDouble_ReturnValue_1;
	float                                         CallFunc_GetValueAtLevel_ReturnValue_6;
	uint8                                         Pad_DC[0x4];
	struct FRotator                               CallFunc_MakeRotator_ReturnValue;
	double                                        CallFunc_Subtract_DoubleDouble_ReturnValue_2;
	double                                        CallFunc_RandomFloatInRange_ReturnValue;
	double                                        CallFunc_Multiply_DoubleDouble_ReturnValue_1;
	struct FActiveGameplayEffectHandle            CallFunc_BP_ApplyGameplayEffectToOwner_ReturnValue;
	struct FRotator                               CallFunc_K2_GetActorRotation_ReturnValue_1;
	struct FVector                                CallFunc_Conv_RotatorToVector_ReturnValue;
	double                                        CallFunc_Add_DoubleDouble_ReturnValue;
	struct FVector                                CallFunc_GreaterGreater_VectorRotator_ReturnValue;
	double                                        CallFunc_FMin_ReturnValue;
	struct FVector2D                              CallFunc_Conv_VectorToVector2D_ReturnValue;
	struct FVector2D                              CallFunc_Normal2D_ReturnValue;
	struct FVector2D                              CallFunc_Multiply_Vector2DFloat_ReturnValue;
	class AActor*                                 CallFunc_GetAvatarActorFromActorInfo_ReturnValue;
	struct FVector                                CallFunc_GetVelocity_ReturnValue;
	struct FVector                                CallFunc_MirrorVectorByNormal_ReturnValue;
	struct FVector2D                              CallFunc_Conv_VectorToVector2D_ReturnValue_1;
	struct FVector2D                              CallFunc_Normal2D_ReturnValue_1;
	struct FVector2D                              CallFunc_Multiply_Vector2DFloat_ReturnValue_1;
	struct FVector2D                              CallFunc_Add_Vector2DVector2D_ReturnValue;
	struct FVector                                CallFunc_Conv_Vector2DToVector_ReturnValue;
	struct FVector                                CallFunc_Normal_ReturnValue;
	struct FVector                                CallFunc_Multiply_VectorFloat_ReturnValue_1;
	struct FVector                                CallFunc_Add_VectorVector_ReturnValue;
	double                                        CallFunc_VSize_ReturnValue;
	struct FVector                                CallFunc_Normal_ReturnValue_1;
	bool                                          CallFunc_GreaterEqual_DoubleDouble_ReturnValue;
	uint8                                         Pad_299[0x7];
	double                                        CallFunc_BreakVector_X_1;
	double                                        CallFunc_BreakVector_Y_1;
	double                                        CallFunc_BreakVector_Z_1;
	struct FVector_NetQuantizeNormal              CallFunc_MakeVector_NetQuantizeNormal_ReturnValue;
	struct FGameplayCueParameters                 CallFunc_MakeGameplayCueParameters_ReturnValue;
	double                                        CallFunc_Subtract_DoubleDouble_B_ImplicitCast;
	double                                        CallFunc_FFloor_A_ImplicitCast;
	double                                        CallFunc_Multiply_DoubleDouble_A_ImplicitCast;
	double                                        CallFunc_Add_DoubleDouble_B_ImplicitCast;
	double                                        CallFunc_FMin_B_ImplicitCast;
	double                                        CallFunc_Multiply_DoubleDouble_B_ImplicitCast;
	double                                        CallFunc_Multiply_VectorFloat_B_ImplicitCast;
	double                                        CallFunc_Subtract_DoubleDouble_B_ImplicitCast_1;
	double                                        CallFunc_Multiply_Vector2DFloat_B_ImplicitCast;
	float                                         CallFunc_MakeRotator_Yaw_ImplicitCast;
	uint8                                         Pad_3EC[0x4];
	double                                        CallFunc_Subtract_DoubleDouble_B_ImplicitCast_2;
	double                                        CallFunc_RandomFloatInRange_Max_ImplicitCast;
};
static_assert(alignof(GAB_SurfaceChange_C_LavaBounce) == 0x000008, "Wrong alignment on GAB_SurfaceChange_C_LavaBounce");
static_assert(sizeof(GAB_SurfaceChange_C_LavaBounce) == 0x000400, "Wrong size on GAB_SurfaceChange_C_LavaBounce");
static_assert(offsetof(GAB_SurfaceChange_C_LavaBounce, CallFunc_RandomFloatFromStream_ReturnValue) == 0x000000, "Member 'GAB_SurfaceChange_C_LavaBounce::CallFunc_RandomFloatFromStream_ReturnValue' has a wrong offset!");
static_assert(offsetof(GAB_SurfaceChange_C_LavaBounce, CallFunc_K2_GetActorLocation_ReturnValue) == 0x000008, "Member 'GAB_SurfaceChange_C_LavaBounce::CallFunc_K2_GetActorLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(GAB_SurfaceChange_C_LavaBounce, CallFunc_Subtract_DoubleDouble_ReturnValue) == 0x000020, "Member 'GAB_SurfaceChange_C_LavaBounce::CallFunc_Subtract_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(GAB_SurfaceChange_C_LavaBounce, CallFunc_BreakVector_X) == 0x000028, "Member 'GAB_SurfaceChange_C_LavaBounce::CallFunc_BreakVector_X' has a wrong offset!");
static_assert(offsetof(GAB_SurfaceChange_C_LavaBounce, CallFunc_BreakVector_Y) == 0x000030, "Member 'GAB_SurfaceChange_C_LavaBounce::CallFunc_BreakVector_Y' has a wrong offset!");
static_assert(offsetof(GAB_SurfaceChange_C_LavaBounce, CallFunc_BreakVector_Z) == 0x000038, "Member 'GAB_SurfaceChange_C_LavaBounce::CallFunc_BreakVector_Z' has a wrong offset!");
static_assert(offsetof(GAB_SurfaceChange_C_LavaBounce, CallFunc_K2_GetActorRotation_ReturnValue) == 0x000040, "Member 'GAB_SurfaceChange_C_LavaBounce::CallFunc_K2_GetActorRotation_ReturnValue' has a wrong offset!");
static_assert(offsetof(GAB_SurfaceChange_C_LavaBounce, CallFunc_Divide_DoubleDouble_ReturnValue) == 0x000058, "Member 'GAB_SurfaceChange_C_LavaBounce::CallFunc_Divide_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(GAB_SurfaceChange_C_LavaBounce, CallFunc_BreakRotator_Roll) == 0x000060, "Member 'GAB_SurfaceChange_C_LavaBounce::CallFunc_BreakRotator_Roll' has a wrong offset!");
static_assert(offsetof(GAB_SurfaceChange_C_LavaBounce, CallFunc_BreakRotator_Pitch) == 0x000064, "Member 'GAB_SurfaceChange_C_LavaBounce::CallFunc_BreakRotator_Pitch' has a wrong offset!");
static_assert(offsetof(GAB_SurfaceChange_C_LavaBounce, CallFunc_BreakRotator_Yaw) == 0x000068, "Member 'GAB_SurfaceChange_C_LavaBounce::CallFunc_BreakRotator_Yaw' has a wrong offset!");
static_assert(offsetof(GAB_SurfaceChange_C_LavaBounce, CallFunc_FFloor_ReturnValue) == 0x00006C, "Member 'GAB_SurfaceChange_C_LavaBounce::CallFunc_FFloor_ReturnValue' has a wrong offset!");
static_assert(offsetof(GAB_SurfaceChange_C_LavaBounce, CallFunc_NormalizeAxis_ReturnValue) == 0x000070, "Member 'GAB_SurfaceChange_C_LavaBounce::CallFunc_NormalizeAxis_ReturnValue' has a wrong offset!");
static_assert(offsetof(GAB_SurfaceChange_C_LavaBounce, CallFunc_Divide_DoubleDouble_ReturnValue_1) == 0x000078, "Member 'GAB_SurfaceChange_C_LavaBounce::CallFunc_Divide_DoubleDouble_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GAB_SurfaceChange_C_LavaBounce, CallFunc_FFloor_ReturnValue_1) == 0x000080, "Member 'GAB_SurfaceChange_C_LavaBounce::CallFunc_FFloor_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GAB_SurfaceChange_C_LavaBounce, CallFunc_FFloor_ReturnValue_2) == 0x000084, "Member 'GAB_SurfaceChange_C_LavaBounce::CallFunc_FFloor_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(GAB_SurfaceChange_C_LavaBounce, CallFunc_Add_IntInt_ReturnValue) == 0x000088, "Member 'GAB_SurfaceChange_C_LavaBounce::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(GAB_SurfaceChange_C_LavaBounce, CallFunc_Add_IntInt_ReturnValue_1) == 0x00008C, "Member 'GAB_SurfaceChange_C_LavaBounce::CallFunc_Add_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GAB_SurfaceChange_C_LavaBounce, CallFunc_GetValueAtLevel_ReturnValue) == 0x000090, "Member 'GAB_SurfaceChange_C_LavaBounce::CallFunc_GetValueAtLevel_ReturnValue' has a wrong offset!");
static_assert(offsetof(GAB_SurfaceChange_C_LavaBounce, CallFunc_Multiply_DoubleDouble_ReturnValue) == 0x000098, "Member 'GAB_SurfaceChange_C_LavaBounce::CallFunc_Multiply_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(GAB_SurfaceChange_C_LavaBounce, CallFunc_HasAuthority_ReturnValue) == 0x0000A0, "Member 'GAB_SurfaceChange_C_LavaBounce::CallFunc_HasAuthority_ReturnValue' has a wrong offset!");
static_assert(offsetof(GAB_SurfaceChange_C_LavaBounce, CallFunc_GetValueAtLevel_ReturnValue_1) == 0x0000A4, "Member 'GAB_SurfaceChange_C_LavaBounce::CallFunc_GetValueAtLevel_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GAB_SurfaceChange_C_LavaBounce, CallFunc_GetValueAtLevel_ReturnValue_2) == 0x0000A8, "Member 'GAB_SurfaceChange_C_LavaBounce::CallFunc_GetValueAtLevel_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(GAB_SurfaceChange_C_LavaBounce, CallFunc_GetValueAtLevel_ReturnValue_3) == 0x0000AC, "Member 'GAB_SurfaceChange_C_LavaBounce::CallFunc_GetValueAtLevel_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(GAB_SurfaceChange_C_LavaBounce, CallFunc_GetValueAtLevel_ReturnValue_4) == 0x0000B0, "Member 'GAB_SurfaceChange_C_LavaBounce::CallFunc_GetValueAtLevel_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(GAB_SurfaceChange_C_LavaBounce, CallFunc_GetValueAtLevel_ReturnValue_5) == 0x0000B4, "Member 'GAB_SurfaceChange_C_LavaBounce::CallFunc_GetValueAtLevel_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(GAB_SurfaceChange_C_LavaBounce, CallFunc_Multiply_VectorFloat_ReturnValue) == 0x0000B8, "Member 'GAB_SurfaceChange_C_LavaBounce::CallFunc_Multiply_VectorFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(GAB_SurfaceChange_C_LavaBounce, CallFunc_Subtract_DoubleDouble_ReturnValue_1) == 0x0000D0, "Member 'GAB_SurfaceChange_C_LavaBounce::CallFunc_Subtract_DoubleDouble_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GAB_SurfaceChange_C_LavaBounce, CallFunc_GetValueAtLevel_ReturnValue_6) == 0x0000D8, "Member 'GAB_SurfaceChange_C_LavaBounce::CallFunc_GetValueAtLevel_ReturnValue_6' has a wrong offset!");
static_assert(offsetof(GAB_SurfaceChange_C_LavaBounce, CallFunc_MakeRotator_ReturnValue) == 0x0000E0, "Member 'GAB_SurfaceChange_C_LavaBounce::CallFunc_MakeRotator_ReturnValue' has a wrong offset!");
static_assert(offsetof(GAB_SurfaceChange_C_LavaBounce, CallFunc_Subtract_DoubleDouble_ReturnValue_2) == 0x0000F8, "Member 'GAB_SurfaceChange_C_LavaBounce::CallFunc_Subtract_DoubleDouble_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(GAB_SurfaceChange_C_LavaBounce, CallFunc_RandomFloatInRange_ReturnValue) == 0x000100, "Member 'GAB_SurfaceChange_C_LavaBounce::CallFunc_RandomFloatInRange_ReturnValue' has a wrong offset!");
static_assert(offsetof(GAB_SurfaceChange_C_LavaBounce, CallFunc_Multiply_DoubleDouble_ReturnValue_1) == 0x000108, "Member 'GAB_SurfaceChange_C_LavaBounce::CallFunc_Multiply_DoubleDouble_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GAB_SurfaceChange_C_LavaBounce, CallFunc_BP_ApplyGameplayEffectToOwner_ReturnValue) == 0x000110, "Member 'GAB_SurfaceChange_C_LavaBounce::CallFunc_BP_ApplyGameplayEffectToOwner_ReturnValue' has a wrong offset!");
static_assert(offsetof(GAB_SurfaceChange_C_LavaBounce, CallFunc_K2_GetActorRotation_ReturnValue_1) == 0x000118, "Member 'GAB_SurfaceChange_C_LavaBounce::CallFunc_K2_GetActorRotation_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GAB_SurfaceChange_C_LavaBounce, CallFunc_Conv_RotatorToVector_ReturnValue) == 0x000130, "Member 'GAB_SurfaceChange_C_LavaBounce::CallFunc_Conv_RotatorToVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(GAB_SurfaceChange_C_LavaBounce, CallFunc_Add_DoubleDouble_ReturnValue) == 0x000148, "Member 'GAB_SurfaceChange_C_LavaBounce::CallFunc_Add_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(GAB_SurfaceChange_C_LavaBounce, CallFunc_GreaterGreater_VectorRotator_ReturnValue) == 0x000150, "Member 'GAB_SurfaceChange_C_LavaBounce::CallFunc_GreaterGreater_VectorRotator_ReturnValue' has a wrong offset!");
static_assert(offsetof(GAB_SurfaceChange_C_LavaBounce, CallFunc_FMin_ReturnValue) == 0x000168, "Member 'GAB_SurfaceChange_C_LavaBounce::CallFunc_FMin_ReturnValue' has a wrong offset!");
static_assert(offsetof(GAB_SurfaceChange_C_LavaBounce, CallFunc_Conv_VectorToVector2D_ReturnValue) == 0x000170, "Member 'GAB_SurfaceChange_C_LavaBounce::CallFunc_Conv_VectorToVector2D_ReturnValue' has a wrong offset!");
static_assert(offsetof(GAB_SurfaceChange_C_LavaBounce, CallFunc_Normal2D_ReturnValue) == 0x000180, "Member 'GAB_SurfaceChange_C_LavaBounce::CallFunc_Normal2D_ReturnValue' has a wrong offset!");
static_assert(offsetof(GAB_SurfaceChange_C_LavaBounce, CallFunc_Multiply_Vector2DFloat_ReturnValue) == 0x000190, "Member 'GAB_SurfaceChange_C_LavaBounce::CallFunc_Multiply_Vector2DFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(GAB_SurfaceChange_C_LavaBounce, CallFunc_GetAvatarActorFromActorInfo_ReturnValue) == 0x0001A0, "Member 'GAB_SurfaceChange_C_LavaBounce::CallFunc_GetAvatarActorFromActorInfo_ReturnValue' has a wrong offset!");
static_assert(offsetof(GAB_SurfaceChange_C_LavaBounce, CallFunc_GetVelocity_ReturnValue) == 0x0001A8, "Member 'GAB_SurfaceChange_C_LavaBounce::CallFunc_GetVelocity_ReturnValue' has a wrong offset!");
static_assert(offsetof(GAB_SurfaceChange_C_LavaBounce, CallFunc_MirrorVectorByNormal_ReturnValue) == 0x0001C0, "Member 'GAB_SurfaceChange_C_LavaBounce::CallFunc_MirrorVectorByNormal_ReturnValue' has a wrong offset!");
static_assert(offsetof(GAB_SurfaceChange_C_LavaBounce, CallFunc_Conv_VectorToVector2D_ReturnValue_1) == 0x0001D8, "Member 'GAB_SurfaceChange_C_LavaBounce::CallFunc_Conv_VectorToVector2D_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GAB_SurfaceChange_C_LavaBounce, CallFunc_Normal2D_ReturnValue_1) == 0x0001E8, "Member 'GAB_SurfaceChange_C_LavaBounce::CallFunc_Normal2D_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GAB_SurfaceChange_C_LavaBounce, CallFunc_Multiply_Vector2DFloat_ReturnValue_1) == 0x0001F8, "Member 'GAB_SurfaceChange_C_LavaBounce::CallFunc_Multiply_Vector2DFloat_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GAB_SurfaceChange_C_LavaBounce, CallFunc_Add_Vector2DVector2D_ReturnValue) == 0x000208, "Member 'GAB_SurfaceChange_C_LavaBounce::CallFunc_Add_Vector2DVector2D_ReturnValue' has a wrong offset!");
static_assert(offsetof(GAB_SurfaceChange_C_LavaBounce, CallFunc_Conv_Vector2DToVector_ReturnValue) == 0x000218, "Member 'GAB_SurfaceChange_C_LavaBounce::CallFunc_Conv_Vector2DToVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(GAB_SurfaceChange_C_LavaBounce, CallFunc_Normal_ReturnValue) == 0x000230, "Member 'GAB_SurfaceChange_C_LavaBounce::CallFunc_Normal_ReturnValue' has a wrong offset!");
static_assert(offsetof(GAB_SurfaceChange_C_LavaBounce, CallFunc_Multiply_VectorFloat_ReturnValue_1) == 0x000248, "Member 'GAB_SurfaceChange_C_LavaBounce::CallFunc_Multiply_VectorFloat_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GAB_SurfaceChange_C_LavaBounce, CallFunc_Add_VectorVector_ReturnValue) == 0x000260, "Member 'GAB_SurfaceChange_C_LavaBounce::CallFunc_Add_VectorVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(GAB_SurfaceChange_C_LavaBounce, CallFunc_VSize_ReturnValue) == 0x000278, "Member 'GAB_SurfaceChange_C_LavaBounce::CallFunc_VSize_ReturnValue' has a wrong offset!");
static_assert(offsetof(GAB_SurfaceChange_C_LavaBounce, CallFunc_Normal_ReturnValue_1) == 0x000280, "Member 'GAB_SurfaceChange_C_LavaBounce::CallFunc_Normal_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GAB_SurfaceChange_C_LavaBounce, CallFunc_GreaterEqual_DoubleDouble_ReturnValue) == 0x000298, "Member 'GAB_SurfaceChange_C_LavaBounce::CallFunc_GreaterEqual_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(GAB_SurfaceChange_C_LavaBounce, CallFunc_BreakVector_X_1) == 0x0002A0, "Member 'GAB_SurfaceChange_C_LavaBounce::CallFunc_BreakVector_X_1' has a wrong offset!");
static_assert(offsetof(GAB_SurfaceChange_C_LavaBounce, CallFunc_BreakVector_Y_1) == 0x0002A8, "Member 'GAB_SurfaceChange_C_LavaBounce::CallFunc_BreakVector_Y_1' has a wrong offset!");
static_assert(offsetof(GAB_SurfaceChange_C_LavaBounce, CallFunc_BreakVector_Z_1) == 0x0002B0, "Member 'GAB_SurfaceChange_C_LavaBounce::CallFunc_BreakVector_Z_1' has a wrong offset!");
static_assert(offsetof(GAB_SurfaceChange_C_LavaBounce, CallFunc_MakeVector_NetQuantizeNormal_ReturnValue) == 0x0002B8, "Member 'GAB_SurfaceChange_C_LavaBounce::CallFunc_MakeVector_NetQuantizeNormal_ReturnValue' has a wrong offset!");
static_assert(offsetof(GAB_SurfaceChange_C_LavaBounce, CallFunc_MakeGameplayCueParameters_ReturnValue) == 0x0002D0, "Member 'GAB_SurfaceChange_C_LavaBounce::CallFunc_MakeGameplayCueParameters_ReturnValue' has a wrong offset!");
static_assert(offsetof(GAB_SurfaceChange_C_LavaBounce, CallFunc_Subtract_DoubleDouble_B_ImplicitCast) == 0x0003A0, "Member 'GAB_SurfaceChange_C_LavaBounce::CallFunc_Subtract_DoubleDouble_B_ImplicitCast' has a wrong offset!");
static_assert(offsetof(GAB_SurfaceChange_C_LavaBounce, CallFunc_FFloor_A_ImplicitCast) == 0x0003A8, "Member 'GAB_SurfaceChange_C_LavaBounce::CallFunc_FFloor_A_ImplicitCast' has a wrong offset!");
static_assert(offsetof(GAB_SurfaceChange_C_LavaBounce, CallFunc_Multiply_DoubleDouble_A_ImplicitCast) == 0x0003B0, "Member 'GAB_SurfaceChange_C_LavaBounce::CallFunc_Multiply_DoubleDouble_A_ImplicitCast' has a wrong offset!");
static_assert(offsetof(GAB_SurfaceChange_C_LavaBounce, CallFunc_Add_DoubleDouble_B_ImplicitCast) == 0x0003B8, "Member 'GAB_SurfaceChange_C_LavaBounce::CallFunc_Add_DoubleDouble_B_ImplicitCast' has a wrong offset!");
static_assert(offsetof(GAB_SurfaceChange_C_LavaBounce, CallFunc_FMin_B_ImplicitCast) == 0x0003C0, "Member 'GAB_SurfaceChange_C_LavaBounce::CallFunc_FMin_B_ImplicitCast' has a wrong offset!");
static_assert(offsetof(GAB_SurfaceChange_C_LavaBounce, CallFunc_Multiply_DoubleDouble_B_ImplicitCast) == 0x0003C8, "Member 'GAB_SurfaceChange_C_LavaBounce::CallFunc_Multiply_DoubleDouble_B_ImplicitCast' has a wrong offset!");
static_assert(offsetof(GAB_SurfaceChange_C_LavaBounce, CallFunc_Multiply_VectorFloat_B_ImplicitCast) == 0x0003D0, "Member 'GAB_SurfaceChange_C_LavaBounce::CallFunc_Multiply_VectorFloat_B_ImplicitCast' has a wrong offset!");
static_assert(offsetof(GAB_SurfaceChange_C_LavaBounce, CallFunc_Subtract_DoubleDouble_B_ImplicitCast_1) == 0x0003D8, "Member 'GAB_SurfaceChange_C_LavaBounce::CallFunc_Subtract_DoubleDouble_B_ImplicitCast_1' has a wrong offset!");
static_assert(offsetof(GAB_SurfaceChange_C_LavaBounce, CallFunc_Multiply_Vector2DFloat_B_ImplicitCast) == 0x0003E0, "Member 'GAB_SurfaceChange_C_LavaBounce::CallFunc_Multiply_Vector2DFloat_B_ImplicitCast' has a wrong offset!");
static_assert(offsetof(GAB_SurfaceChange_C_LavaBounce, CallFunc_MakeRotator_Yaw_ImplicitCast) == 0x0003E8, "Member 'GAB_SurfaceChange_C_LavaBounce::CallFunc_MakeRotator_Yaw_ImplicitCast' has a wrong offset!");
static_assert(offsetof(GAB_SurfaceChange_C_LavaBounce, CallFunc_Subtract_DoubleDouble_B_ImplicitCast_2) == 0x0003F0, "Member 'GAB_SurfaceChange_C_LavaBounce::CallFunc_Subtract_DoubleDouble_B_ImplicitCast_2' has a wrong offset!");
static_assert(offsetof(GAB_SurfaceChange_C_LavaBounce, CallFunc_RandomFloatInRange_Max_ImplicitCast) == 0x0003F8, "Member 'GAB_SurfaceChange_C_LavaBounce::CallFunc_RandomFloatInRange_Max_ImplicitCast' has a wrong offset!");

struct GAB_SurfaceChange_C_MovementModeChanged final
{
public:
	class ACharacter*                             Character;
	EMovementMode                                 PrevMovementMode;
	uint8                                         PreviousCustomMode;
};
static_assert(alignof(GAB_SurfaceChange_C_MovementModeChanged) == 0x000008, "Wrong alignment on GAB_SurfaceChange_C_MovementModeChanged");
static_assert(sizeof(GAB_SurfaceChange_C_MovementModeChanged) == 0x000010, "Wrong size on GAB_SurfaceChange_C_MovementModeChanged");
static_assert(offsetof(GAB_SurfaceChange_C_MovementModeChanged, Character) == 0x000000, "Member 'GAB_SurfaceChange_C_MovementModeChanged::Character' has a wrong offset!");
static_assert(offsetof(GAB_SurfaceChange_C_MovementModeChanged, PrevMovementMode) == 0x000008, "Member 'GAB_SurfaceChange_C_MovementModeChanged::PrevMovementMode' has a wrong offset!");
static_assert(offsetof(GAB_SurfaceChange_C_MovementModeChanged, PreviousCustomMode) == 0x000009, "Member 'GAB_SurfaceChange_C_MovementModeChanged::PreviousCustomMode' has a wrong offset!");

struct GAB_SurfaceChange_C_SurfaceCleanup final
{
public:
	bool                                          AddLingeringEffects;
	EPhysicalSurface                              SurfaceType;
	bool                                          bHasChrome;
	bool                                          bHasSand;
	bool                                          bHasSnow;
	bool                                          bAddLingeringEffects;
	bool                                          bHasLava;
	bool                                          bHasIce;
	float                                         CallFunc_GetValueAtLevel_ReturnValue;
	bool                                          CallFunc_Greater_DoubleDouble_ReturnValue;
	uint8                                         Pad_D[0x3];
	struct FActiveGameplayEffectHandle            CallFunc_BP_ApplyGameplayEffectToOwner_ReturnValue;
	bool                                          CallFunc_NotEqual_ByteByte_ReturnValue;
	bool                                          CallFunc_BooleanAND_ReturnValue;
	bool                                          CallFunc_NotEqual_ByteByte_ReturnValue_1;
	bool                                          CallFunc_BooleanAND_ReturnValue_1;
	bool                                          CallFunc_HasTag_ReturnValue;
	bool                                          CallFunc_NotEqual_ByteByte_ReturnValue_2;
	bool                                          CallFunc_NotEqual_ByteByte_ReturnValue_3;
	bool                                          CallFunc_NotEqual_ByteByte_ReturnValue_4;
	bool                                          CallFunc_BooleanAND_ReturnValue_2;
	uint8                                         Pad_21[0x3];
	struct FActiveGameplayEffectHandle            CallFunc_BP_ApplyGameplayEffectToOwner_ReturnValue_1;
	bool                                          CallFunc_BooleanAND_ReturnValue_3;
	bool                                          CallFunc_BooleanAND_ReturnValue_4;
	bool                                          CallFunc_BooleanAND_ReturnValue_5;
	uint8                                         Pad_2F[0x1];
	TScriptInterface<class IGameplayTagAssetInterface> CallFunc_HasAllMatchingGameplayTags_TagContainerInterface_CastInput;
	bool                                          CallFunc_HasAllMatchingGameplayTags_ReturnValue;
	uint8                                         Pad_41[0x7];
	TScriptInterface<class IGameplayTagAssetInterface> CallFunc_HasAllMatchingGameplayTags_TagContainerInterface_CastInput_1;
	bool                                          CallFunc_HasAllMatchingGameplayTags_ReturnValue_1;
	uint8                                         Pad_59[0x7];
	TScriptInterface<class IGameplayTagAssetInterface> CallFunc_HasAllMatchingGameplayTags_TagContainerInterface_CastInput_2;
	bool                                          CallFunc_HasAllMatchingGameplayTags_ReturnValue_2;
	uint8                                         Pad_71[0x7];
	TScriptInterface<class IGameplayTagAssetInterface> CallFunc_HasAllMatchingGameplayTags_TagContainerInterface_CastInput_3;
	bool                                          CallFunc_HasAllMatchingGameplayTags_ReturnValue_3;
	uint8                                         Pad_89[0x7];
	double                                        CallFunc_Greater_DoubleDouble_A_ImplicitCast;
};
static_assert(alignof(GAB_SurfaceChange_C_SurfaceCleanup) == 0x000008, "Wrong alignment on GAB_SurfaceChange_C_SurfaceCleanup");
static_assert(sizeof(GAB_SurfaceChange_C_SurfaceCleanup) == 0x000098, "Wrong size on GAB_SurfaceChange_C_SurfaceCleanup");
static_assert(offsetof(GAB_SurfaceChange_C_SurfaceCleanup, AddLingeringEffects) == 0x000000, "Member 'GAB_SurfaceChange_C_SurfaceCleanup::AddLingeringEffects' has a wrong offset!");
static_assert(offsetof(GAB_SurfaceChange_C_SurfaceCleanup, SurfaceType) == 0x000001, "Member 'GAB_SurfaceChange_C_SurfaceCleanup::SurfaceType' has a wrong offset!");
static_assert(offsetof(GAB_SurfaceChange_C_SurfaceCleanup, bHasChrome) == 0x000002, "Member 'GAB_SurfaceChange_C_SurfaceCleanup::bHasChrome' has a wrong offset!");
static_assert(offsetof(GAB_SurfaceChange_C_SurfaceCleanup, bHasSand) == 0x000003, "Member 'GAB_SurfaceChange_C_SurfaceCleanup::bHasSand' has a wrong offset!");
static_assert(offsetof(GAB_SurfaceChange_C_SurfaceCleanup, bHasSnow) == 0x000004, "Member 'GAB_SurfaceChange_C_SurfaceCleanup::bHasSnow' has a wrong offset!");
static_assert(offsetof(GAB_SurfaceChange_C_SurfaceCleanup, bAddLingeringEffects) == 0x000005, "Member 'GAB_SurfaceChange_C_SurfaceCleanup::bAddLingeringEffects' has a wrong offset!");
static_assert(offsetof(GAB_SurfaceChange_C_SurfaceCleanup, bHasLava) == 0x000006, "Member 'GAB_SurfaceChange_C_SurfaceCleanup::bHasLava' has a wrong offset!");
static_assert(offsetof(GAB_SurfaceChange_C_SurfaceCleanup, bHasIce) == 0x000007, "Member 'GAB_SurfaceChange_C_SurfaceCleanup::bHasIce' has a wrong offset!");
static_assert(offsetof(GAB_SurfaceChange_C_SurfaceCleanup, CallFunc_GetValueAtLevel_ReturnValue) == 0x000008, "Member 'GAB_SurfaceChange_C_SurfaceCleanup::CallFunc_GetValueAtLevel_ReturnValue' has a wrong offset!");
static_assert(offsetof(GAB_SurfaceChange_C_SurfaceCleanup, CallFunc_Greater_DoubleDouble_ReturnValue) == 0x00000C, "Member 'GAB_SurfaceChange_C_SurfaceCleanup::CallFunc_Greater_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(GAB_SurfaceChange_C_SurfaceCleanup, CallFunc_BP_ApplyGameplayEffectToOwner_ReturnValue) == 0x000010, "Member 'GAB_SurfaceChange_C_SurfaceCleanup::CallFunc_BP_ApplyGameplayEffectToOwner_ReturnValue' has a wrong offset!");
static_assert(offsetof(GAB_SurfaceChange_C_SurfaceCleanup, CallFunc_NotEqual_ByteByte_ReturnValue) == 0x000018, "Member 'GAB_SurfaceChange_C_SurfaceCleanup::CallFunc_NotEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(GAB_SurfaceChange_C_SurfaceCleanup, CallFunc_BooleanAND_ReturnValue) == 0x000019, "Member 'GAB_SurfaceChange_C_SurfaceCleanup::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(GAB_SurfaceChange_C_SurfaceCleanup, CallFunc_NotEqual_ByteByte_ReturnValue_1) == 0x00001A, "Member 'GAB_SurfaceChange_C_SurfaceCleanup::CallFunc_NotEqual_ByteByte_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GAB_SurfaceChange_C_SurfaceCleanup, CallFunc_BooleanAND_ReturnValue_1) == 0x00001B, "Member 'GAB_SurfaceChange_C_SurfaceCleanup::CallFunc_BooleanAND_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GAB_SurfaceChange_C_SurfaceCleanup, CallFunc_HasTag_ReturnValue) == 0x00001C, "Member 'GAB_SurfaceChange_C_SurfaceCleanup::CallFunc_HasTag_ReturnValue' has a wrong offset!");
static_assert(offsetof(GAB_SurfaceChange_C_SurfaceCleanup, CallFunc_NotEqual_ByteByte_ReturnValue_2) == 0x00001D, "Member 'GAB_SurfaceChange_C_SurfaceCleanup::CallFunc_NotEqual_ByteByte_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(GAB_SurfaceChange_C_SurfaceCleanup, CallFunc_NotEqual_ByteByte_ReturnValue_3) == 0x00001E, "Member 'GAB_SurfaceChange_C_SurfaceCleanup::CallFunc_NotEqual_ByteByte_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(GAB_SurfaceChange_C_SurfaceCleanup, CallFunc_NotEqual_ByteByte_ReturnValue_4) == 0x00001F, "Member 'GAB_SurfaceChange_C_SurfaceCleanup::CallFunc_NotEqual_ByteByte_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(GAB_SurfaceChange_C_SurfaceCleanup, CallFunc_BooleanAND_ReturnValue_2) == 0x000020, "Member 'GAB_SurfaceChange_C_SurfaceCleanup::CallFunc_BooleanAND_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(GAB_SurfaceChange_C_SurfaceCleanup, CallFunc_BP_ApplyGameplayEffectToOwner_ReturnValue_1) == 0x000024, "Member 'GAB_SurfaceChange_C_SurfaceCleanup::CallFunc_BP_ApplyGameplayEffectToOwner_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GAB_SurfaceChange_C_SurfaceCleanup, CallFunc_BooleanAND_ReturnValue_3) == 0x00002C, "Member 'GAB_SurfaceChange_C_SurfaceCleanup::CallFunc_BooleanAND_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(GAB_SurfaceChange_C_SurfaceCleanup, CallFunc_BooleanAND_ReturnValue_4) == 0x00002D, "Member 'GAB_SurfaceChange_C_SurfaceCleanup::CallFunc_BooleanAND_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(GAB_SurfaceChange_C_SurfaceCleanup, CallFunc_BooleanAND_ReturnValue_5) == 0x00002E, "Member 'GAB_SurfaceChange_C_SurfaceCleanup::CallFunc_BooleanAND_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(GAB_SurfaceChange_C_SurfaceCleanup, CallFunc_HasAllMatchingGameplayTags_TagContainerInterface_CastInput) == 0x000030, "Member 'GAB_SurfaceChange_C_SurfaceCleanup::CallFunc_HasAllMatchingGameplayTags_TagContainerInterface_CastInput' has a wrong offset!");
static_assert(offsetof(GAB_SurfaceChange_C_SurfaceCleanup, CallFunc_HasAllMatchingGameplayTags_ReturnValue) == 0x000040, "Member 'GAB_SurfaceChange_C_SurfaceCleanup::CallFunc_HasAllMatchingGameplayTags_ReturnValue' has a wrong offset!");
static_assert(offsetof(GAB_SurfaceChange_C_SurfaceCleanup, CallFunc_HasAllMatchingGameplayTags_TagContainerInterface_CastInput_1) == 0x000048, "Member 'GAB_SurfaceChange_C_SurfaceCleanup::CallFunc_HasAllMatchingGameplayTags_TagContainerInterface_CastInput_1' has a wrong offset!");
static_assert(offsetof(GAB_SurfaceChange_C_SurfaceCleanup, CallFunc_HasAllMatchingGameplayTags_ReturnValue_1) == 0x000058, "Member 'GAB_SurfaceChange_C_SurfaceCleanup::CallFunc_HasAllMatchingGameplayTags_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GAB_SurfaceChange_C_SurfaceCleanup, CallFunc_HasAllMatchingGameplayTags_TagContainerInterface_CastInput_2) == 0x000060, "Member 'GAB_SurfaceChange_C_SurfaceCleanup::CallFunc_HasAllMatchingGameplayTags_TagContainerInterface_CastInput_2' has a wrong offset!");
static_assert(offsetof(GAB_SurfaceChange_C_SurfaceCleanup, CallFunc_HasAllMatchingGameplayTags_ReturnValue_2) == 0x000070, "Member 'GAB_SurfaceChange_C_SurfaceCleanup::CallFunc_HasAllMatchingGameplayTags_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(GAB_SurfaceChange_C_SurfaceCleanup, CallFunc_HasAllMatchingGameplayTags_TagContainerInterface_CastInput_3) == 0x000078, "Member 'GAB_SurfaceChange_C_SurfaceCleanup::CallFunc_HasAllMatchingGameplayTags_TagContainerInterface_CastInput_3' has a wrong offset!");
static_assert(offsetof(GAB_SurfaceChange_C_SurfaceCleanup, CallFunc_HasAllMatchingGameplayTags_ReturnValue_3) == 0x000088, "Member 'GAB_SurfaceChange_C_SurfaceCleanup::CallFunc_HasAllMatchingGameplayTags_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(GAB_SurfaceChange_C_SurfaceCleanup, CallFunc_Greater_DoubleDouble_A_ImplicitCast) == 0x000090, "Member 'GAB_SurfaceChange_C_SurfaceCleanup::CallFunc_Greater_DoubleDouble_A_ImplicitCast' has a wrong offset!");

}
