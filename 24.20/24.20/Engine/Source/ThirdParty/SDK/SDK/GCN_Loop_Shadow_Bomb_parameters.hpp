#pragma once

#include "Basic.hpp"

#include "GameplayAbilities_structs.hpp"
#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"

namespace SDK::Params
{

struct GCN_Loop_Shadow_Bomb_C_ExecuteUbergraph_GCN_Loop_Shadow_Bomb final
{
public:
	int32                                         EntryPoint;
	bool                                          Temp_bool_Variable;
	uint8                                         Pad_5[0x3];
	int32                                         CallFunc_Array_Length_ReturnValue;
	int32                                         Temp_int_Loop_Counter_Variable;
	bool                                          CallFunc_Greater_IntInt_ReturnValue;
	uint8                                         Pad_11[0x3];
	int32                                         CallFunc_Add_IntInt_ReturnValue;
	float                                         K2Node_Event_DeltaSeconds;
	uint8                                         Pad_1C[0x4];
	class AActor*                                 K2Node_Event_MyTarget_1;
	struct FGameplayCueParameters                 K2Node_Event_Parameters_1;
	TArray<class UParticleSystemComponent*>       K2Node_Event_ParticleComponents_1;
	TArray<class UAudioComponent*>                K2Node_Event_AudioComponents_1;
	class ULegacyCameraShake*                     K2Node_Event_BurstCameraShakeInstance;
	class ADecalActor*                            K2Node_Event_BurstDecalInstance;
	class AActor*                                 K2Node_Event_MyTarget;
	struct FGameplayCueParameters                 K2Node_Event_Parameters;
	TArray<class UParticleSystemComponent*>       K2Node_Event_ParticleComponents;
	TArray<class UAudioComponent*>                K2Node_Event_AudioComponents;
	class AFortPlayerPawn*                        K2Node_DynamicCast_AsFort_Player_Pawn;
	bool                                          K2Node_DynamicCast_bSuccess;
	uint8                                         Pad_229[0x7];
	class UAudioComponent*                        CallFunc_Array_Get_Item;
	class AFortPlayerPawn*                        K2Node_DynamicCast_AsFort_Player_Pawn_1;
	bool                                          K2Node_DynamicCast_bSuccess_1;
	uint8                                         Pad_241[0x7];
	TScriptInterface<class IAudioParameterControllerInterface> CallFunc_SetFloatParameter_self_CastInput;
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;
	uint8                                         Pad_264[0x4];
	class USceneComponent*                        CallFunc_K2_GetRootComponent_ReturnValue;
	class UAudioComponent*                        CallFunc_SpawnSoundAttached_ReturnValue;
	TDelegate<void(class AFortWeapon* NewWeapon, class AFortWeapon* PrevWeapon)> K2Node_CreateDelegate_OutputDelegate_1;
	uint8                                         Pad_284[0x4];
	double                                        CallFunc_GetGameTimeInSeconds_ReturnValue;
	bool                                          CallFunc_IsValid_ReturnValue;
	uint8                                         Pad_291[0x7];
	double                                        CallFunc_GetWorldDeltaSeconds_ReturnValue;
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_2;
	TDelegate<void(class AFortPlayerPawn* Pawn)>  K2Node_CreateDelegate_OutputDelegate_3;
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_4;
	bool                                          CallFunc_IsLocallyControlled_ReturnValue;
	bool                                          CallFunc_GetIsPlayingReplay_ReturnValue;
	bool                                          CallFunc_GetIsPlayingReplay_ReturnValue_1;
	bool                                          CallFunc_BooleanOR_ReturnValue;
	float                                         CallFunc_Conv_BoolToFloat_ReturnValue;
	bool                                          CallFunc_IsLocallyControlled_ReturnValue_1;
	uint8                                         Pad_2CD[0x3];
	int32                                         Temp_int_Array_Index_Variable;
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_5;
	struct FTimerHandle                           CallFunc_K2_SetTimerDelegate_ReturnValue;
	int32                                         Temp_int_Array_Index_Variable_1;
	int32                                         Temp_int_Loop_Counter_Variable_1;
	int32                                         CallFunc_Array_Length_ReturnValue_1;
	int32                                         CallFunc_Add_IntInt_ReturnValue_1;
	bool                                          CallFunc_Less_IntInt_ReturnValue;
	uint8                                         Pad_2F9[0x3];
	int32                                         Temp_int_Array_Index_Variable_2;
	class UParticleSystemComponent*               CallFunc_Array_Get_Item_1;
	int32                                         CallFunc_Array_Length_ReturnValue_2;
	bool                                          CallFunc_Greater_IntInt_ReturnValue_1;
	uint8                                         Pad_30D[0x3];
	int32                                         Temp_int_Loop_Counter_Variable_2;
	int32                                         CallFunc_Add_IntInt_ReturnValue_2;
	float                                         CallFunc_GetValueAtLevel_ReturnValue;
	float                                         CallFunc_GetValueAtLevel_ReturnValue_1;
	int32                                         Temp_int_Array_Index_Variable_3;
	float                                         CallFunc_GetValueAtLevel_ReturnValue_2;
	class USkeletalMeshComponent*                 CallFunc_Array_Get_Item_2;
	TArray<class AFortPlayerController*>          CallFunc_GetLocalFortPlayerControllers_ReturnValue;
	float                                         CallFunc_GetValueAtLevel_ReturnValue_3;
	uint8                                         Pad_344[0x4];
	class AFortPlayerController*                  CallFunc_Array_Get_Item_3;
	int32                                         CallFunc_Array_Length_ReturnValue_3;
	bool                                          CallFunc_OnSameTeam_ReturnValue;
	bool                                          CallFunc_GetIsBroadcastClient_ReturnValue;
	bool                                          CallFunc_BooleanOR_ReturnValue_1;
	uint8                                         Pad_357[0x1];
	float                                         CallFunc_GetValueAtLevel_ReturnValue_4;
	uint8                                         Pad_35C[0x4];
	class UParticleSystemComponent*               CallFunc_Array_Get_Item_4;
	bool                                          CallFunc_IsValid_ReturnValue_1;
	uint8                                         Pad_369[0x7];
	struct FVector                                CallFunc_GetVelocity_ReturnValue;
	double                                        CallFunc_BreakVector_X;
	double                                        CallFunc_BreakVector_Y;
	double                                        CallFunc_BreakVector_Z;
	class UParticleSystemComponent*               CallFunc_Array_Get_Item_5;
	double                                        CallFunc_Abs_ReturnValue;
	int32                                         CallFunc_Array_Length_ReturnValue_4;
	uint8                                         Pad_3B4[0x4];
	double                                        CallFunc_MapRangeClamped_ReturnValue;
	bool                                          CallFunc_Greater_IntInt_ReturnValue_2;
	uint8                                         Pad_3C1[0x7];
	double                                        CallFunc_FInterpTo_ReturnValue;
	double                                        CallFunc_Add_DoubleDouble_ReturnValue;
	double                                        CallFunc_FClamp_ReturnValue;
	int32                                         CallFunc_Array_Length_ReturnValue_5;
	bool                                          CallFunc_Greater_IntInt_ReturnValue_3;
	uint8                                         Pad_3E5[0x3];
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_6;
	uint8                                         Pad_3F4[0x4];
	struct FTimerHandle                           CallFunc_K2_SetTimerDelegate_ReturnValue_1;
	class USkeletalMeshComponent*                 CallFunc_Array_Get_Item_6;
	int32                                         CallFunc_Array_Length_ReturnValue_6;
	bool                                          CallFunc_Less_IntInt_ReturnValue_1;
	uint8                                         Pad_40D[0x3];
	int32                                         Temp_int_Loop_Counter_Variable_3;
	uint8                                         Pad_414[0x4];
	class UParticleSystemComponent*               CallFunc_Array_Get_Item_7;
	class UParticleSystemComponent*               CallFunc_Array_Get_Item_8;
	bool                                          CallFunc_Less_IntInt_ReturnValue_2;
	uint8                                         Pad_429[0x3];
	int32                                         CallFunc_Add_IntInt_ReturnValue_3;
	class USkeletalMeshComponent*                 CallFunc_Array_Get_Item_9;
	bool                                          CallFunc_IsLocallyControlled_ReturnValue_2;
	uint8                                         Pad_439[0x3];
	int32                                         CallFunc_Array_Length_ReturnValue_7;
	int32                                         CallFunc_Array_Length_ReturnValue_8;
	bool                                          CallFunc_Less_IntInt_ReturnValue_3;
	bool                                          CallFunc_Greater_IntInt_ReturnValue_4;
	bool                                          CallFunc_GetIsPlayingReplay_ReturnValue_2;
	bool                                          CallFunc_GetIsBroadcastClient_ReturnValue_1;
	bool                                          CallFunc_BooleanOR_ReturnValue_2;
	uint8                                         Pad_449[0x7];
	class AFortPlayerPawn*                        K2Node_CustomEvent_Pawn;
	bool                                          CallFunc_BooleanOR_ReturnValue_3;
	bool                                          CallFunc_IsLocallyControlled_ReturnValue_3;
	bool                                          CallFunc_Not_PreBool_ReturnValue;
	bool                                          CallFunc_IsValid_ReturnValue_2;
	bool                                          CallFunc_IsValid_ReturnValue_3;
	uint8                                         Pad_45D[0x3];
	class AFortWeapon*                            K2Node_CustomEvent_NewWeapon;
	class AFortWeapon*                            K2Node_CustomEvent_PrevWeapon;
	bool                                          CallFunc_IsValid_ReturnValue_4;
	bool                                          CallFunc_IsValid_ReturnValue_5;
	bool                                          CallFunc_IsValid_ReturnValue_6;
	bool                                          CallFunc_IsValid_ReturnValue_7;
	bool                                          CallFunc_NearlyEqual_FloatFloat_ReturnValue;
	uint8                                         Pad_475[0x3];
	double                                        K2Node_Select_Default;
	double                                        CallFunc_Subtract_DoubleDouble_ReturnValue;
	struct FTimerHandle                           CallFunc_K2_SetTimerDelegate_ReturnValue_2;
	float                                         CallFunc_SetFloatParameter_InFloat_ImplicitCast;
	float                                         CallFunc_K2_SetTimerDelegate_Time_ImplicitCast;
	float                                         CallFunc_SetScalarParameterValueOnMaterials_ParameterValue_ImplicitCast;
	uint8                                         Pad_49C[0x4];
	double                                        K2Node_VariableSet_WalkVisMultiplier_ImplicitCast;
	double                                        K2Node_VariableSet_SprintVisMultiplier_ImplicitCast;
	double                                        K2Node_VariableSet_MinFriendlyOpacity_ImplicitCast;
	double                                        K2Node_Select_Option_1_ImplicitCast;
	float                                         CallFunc_SetFloatParameter_Param_ImplicitCast;
	float                                         CallFunc_SetScalarParameterValueOnMaterials_ParameterValue_ImplicitCast_1;
	double                                        K2Node_VariableSet_InteractVisibility_ImplicitCast;
	float                                         CallFunc_K2_SetTimerDelegate_Time_ImplicitCast_1;
};
static_assert(alignof(GCN_Loop_Shadow_Bomb_C_ExecuteUbergraph_GCN_Loop_Shadow_Bomb) == 0x000008, "Wrong alignment on GCN_Loop_Shadow_Bomb_C_ExecuteUbergraph_GCN_Loop_Shadow_Bomb");
static_assert(sizeof(GCN_Loop_Shadow_Bomb_C_ExecuteUbergraph_GCN_Loop_Shadow_Bomb) == 0x0004D8, "Wrong size on GCN_Loop_Shadow_Bomb_C_ExecuteUbergraph_GCN_Loop_Shadow_Bomb");
static_assert(offsetof(GCN_Loop_Shadow_Bomb_C_ExecuteUbergraph_GCN_Loop_Shadow_Bomb, EntryPoint) == 0x000000, "Member 'GCN_Loop_Shadow_Bomb_C_ExecuteUbergraph_GCN_Loop_Shadow_Bomb::EntryPoint' has a wrong offset!");
static_assert(offsetof(GCN_Loop_Shadow_Bomb_C_ExecuteUbergraph_GCN_Loop_Shadow_Bomb, Temp_bool_Variable) == 0x000004, "Member 'GCN_Loop_Shadow_Bomb_C_ExecuteUbergraph_GCN_Loop_Shadow_Bomb::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(GCN_Loop_Shadow_Bomb_C_ExecuteUbergraph_GCN_Loop_Shadow_Bomb, CallFunc_Array_Length_ReturnValue) == 0x000008, "Member 'GCN_Loop_Shadow_Bomb_C_ExecuteUbergraph_GCN_Loop_Shadow_Bomb::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(GCN_Loop_Shadow_Bomb_C_ExecuteUbergraph_GCN_Loop_Shadow_Bomb, Temp_int_Loop_Counter_Variable) == 0x00000C, "Member 'GCN_Loop_Shadow_Bomb_C_ExecuteUbergraph_GCN_Loop_Shadow_Bomb::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(GCN_Loop_Shadow_Bomb_C_ExecuteUbergraph_GCN_Loop_Shadow_Bomb, CallFunc_Greater_IntInt_ReturnValue) == 0x000010, "Member 'GCN_Loop_Shadow_Bomb_C_ExecuteUbergraph_GCN_Loop_Shadow_Bomb::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(GCN_Loop_Shadow_Bomb_C_ExecuteUbergraph_GCN_Loop_Shadow_Bomb, CallFunc_Add_IntInt_ReturnValue) == 0x000014, "Member 'GCN_Loop_Shadow_Bomb_C_ExecuteUbergraph_GCN_Loop_Shadow_Bomb::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(GCN_Loop_Shadow_Bomb_C_ExecuteUbergraph_GCN_Loop_Shadow_Bomb, K2Node_Event_DeltaSeconds) == 0x000018, "Member 'GCN_Loop_Shadow_Bomb_C_ExecuteUbergraph_GCN_Loop_Shadow_Bomb::K2Node_Event_DeltaSeconds' has a wrong offset!");
static_assert(offsetof(GCN_Loop_Shadow_Bomb_C_ExecuteUbergraph_GCN_Loop_Shadow_Bomb, K2Node_Event_MyTarget_1) == 0x000020, "Member 'GCN_Loop_Shadow_Bomb_C_ExecuteUbergraph_GCN_Loop_Shadow_Bomb::K2Node_Event_MyTarget_1' has a wrong offset!");
static_assert(offsetof(GCN_Loop_Shadow_Bomb_C_ExecuteUbergraph_GCN_Loop_Shadow_Bomb, K2Node_Event_Parameters_1) == 0x000028, "Member 'GCN_Loop_Shadow_Bomb_C_ExecuteUbergraph_GCN_Loop_Shadow_Bomb::K2Node_Event_Parameters_1' has a wrong offset!");
static_assert(offsetof(GCN_Loop_Shadow_Bomb_C_ExecuteUbergraph_GCN_Loop_Shadow_Bomb, K2Node_Event_ParticleComponents_1) == 0x0000F8, "Member 'GCN_Loop_Shadow_Bomb_C_ExecuteUbergraph_GCN_Loop_Shadow_Bomb::K2Node_Event_ParticleComponents_1' has a wrong offset!");
static_assert(offsetof(GCN_Loop_Shadow_Bomb_C_ExecuteUbergraph_GCN_Loop_Shadow_Bomb, K2Node_Event_AudioComponents_1) == 0x000108, "Member 'GCN_Loop_Shadow_Bomb_C_ExecuteUbergraph_GCN_Loop_Shadow_Bomb::K2Node_Event_AudioComponents_1' has a wrong offset!");
static_assert(offsetof(GCN_Loop_Shadow_Bomb_C_ExecuteUbergraph_GCN_Loop_Shadow_Bomb, K2Node_Event_BurstCameraShakeInstance) == 0x000118, "Member 'GCN_Loop_Shadow_Bomb_C_ExecuteUbergraph_GCN_Loop_Shadow_Bomb::K2Node_Event_BurstCameraShakeInstance' has a wrong offset!");
static_assert(offsetof(GCN_Loop_Shadow_Bomb_C_ExecuteUbergraph_GCN_Loop_Shadow_Bomb, K2Node_Event_BurstDecalInstance) == 0x000120, "Member 'GCN_Loop_Shadow_Bomb_C_ExecuteUbergraph_GCN_Loop_Shadow_Bomb::K2Node_Event_BurstDecalInstance' has a wrong offset!");
static_assert(offsetof(GCN_Loop_Shadow_Bomb_C_ExecuteUbergraph_GCN_Loop_Shadow_Bomb, K2Node_Event_MyTarget) == 0x000128, "Member 'GCN_Loop_Shadow_Bomb_C_ExecuteUbergraph_GCN_Loop_Shadow_Bomb::K2Node_Event_MyTarget' has a wrong offset!");
static_assert(offsetof(GCN_Loop_Shadow_Bomb_C_ExecuteUbergraph_GCN_Loop_Shadow_Bomb, K2Node_Event_Parameters) == 0x000130, "Member 'GCN_Loop_Shadow_Bomb_C_ExecuteUbergraph_GCN_Loop_Shadow_Bomb::K2Node_Event_Parameters' has a wrong offset!");
static_assert(offsetof(GCN_Loop_Shadow_Bomb_C_ExecuteUbergraph_GCN_Loop_Shadow_Bomb, K2Node_Event_ParticleComponents) == 0x000200, "Member 'GCN_Loop_Shadow_Bomb_C_ExecuteUbergraph_GCN_Loop_Shadow_Bomb::K2Node_Event_ParticleComponents' has a wrong offset!");
static_assert(offsetof(GCN_Loop_Shadow_Bomb_C_ExecuteUbergraph_GCN_Loop_Shadow_Bomb, K2Node_Event_AudioComponents) == 0x000210, "Member 'GCN_Loop_Shadow_Bomb_C_ExecuteUbergraph_GCN_Loop_Shadow_Bomb::K2Node_Event_AudioComponents' has a wrong offset!");
static_assert(offsetof(GCN_Loop_Shadow_Bomb_C_ExecuteUbergraph_GCN_Loop_Shadow_Bomb, K2Node_DynamicCast_AsFort_Player_Pawn) == 0x000220, "Member 'GCN_Loop_Shadow_Bomb_C_ExecuteUbergraph_GCN_Loop_Shadow_Bomb::K2Node_DynamicCast_AsFort_Player_Pawn' has a wrong offset!");
static_assert(offsetof(GCN_Loop_Shadow_Bomb_C_ExecuteUbergraph_GCN_Loop_Shadow_Bomb, K2Node_DynamicCast_bSuccess) == 0x000228, "Member 'GCN_Loop_Shadow_Bomb_C_ExecuteUbergraph_GCN_Loop_Shadow_Bomb::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(GCN_Loop_Shadow_Bomb_C_ExecuteUbergraph_GCN_Loop_Shadow_Bomb, CallFunc_Array_Get_Item) == 0x000230, "Member 'GCN_Loop_Shadow_Bomb_C_ExecuteUbergraph_GCN_Loop_Shadow_Bomb::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(GCN_Loop_Shadow_Bomb_C_ExecuteUbergraph_GCN_Loop_Shadow_Bomb, K2Node_DynamicCast_AsFort_Player_Pawn_1) == 0x000238, "Member 'GCN_Loop_Shadow_Bomb_C_ExecuteUbergraph_GCN_Loop_Shadow_Bomb::K2Node_DynamicCast_AsFort_Player_Pawn_1' has a wrong offset!");
static_assert(offsetof(GCN_Loop_Shadow_Bomb_C_ExecuteUbergraph_GCN_Loop_Shadow_Bomb, K2Node_DynamicCast_bSuccess_1) == 0x000240, "Member 'GCN_Loop_Shadow_Bomb_C_ExecuteUbergraph_GCN_Loop_Shadow_Bomb::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(GCN_Loop_Shadow_Bomb_C_ExecuteUbergraph_GCN_Loop_Shadow_Bomb, CallFunc_SetFloatParameter_self_CastInput) == 0x000248, "Member 'GCN_Loop_Shadow_Bomb_C_ExecuteUbergraph_GCN_Loop_Shadow_Bomb::CallFunc_SetFloatParameter_self_CastInput' has a wrong offset!");
static_assert(offsetof(GCN_Loop_Shadow_Bomb_C_ExecuteUbergraph_GCN_Loop_Shadow_Bomb, K2Node_CreateDelegate_OutputDelegate) == 0x000258, "Member 'GCN_Loop_Shadow_Bomb_C_ExecuteUbergraph_GCN_Loop_Shadow_Bomb::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(GCN_Loop_Shadow_Bomb_C_ExecuteUbergraph_GCN_Loop_Shadow_Bomb, CallFunc_K2_GetRootComponent_ReturnValue) == 0x000268, "Member 'GCN_Loop_Shadow_Bomb_C_ExecuteUbergraph_GCN_Loop_Shadow_Bomb::CallFunc_K2_GetRootComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(GCN_Loop_Shadow_Bomb_C_ExecuteUbergraph_GCN_Loop_Shadow_Bomb, CallFunc_SpawnSoundAttached_ReturnValue) == 0x000270, "Member 'GCN_Loop_Shadow_Bomb_C_ExecuteUbergraph_GCN_Loop_Shadow_Bomb::CallFunc_SpawnSoundAttached_ReturnValue' has a wrong offset!");
static_assert(offsetof(GCN_Loop_Shadow_Bomb_C_ExecuteUbergraph_GCN_Loop_Shadow_Bomb, K2Node_CreateDelegate_OutputDelegate_1) == 0x000278, "Member 'GCN_Loop_Shadow_Bomb_C_ExecuteUbergraph_GCN_Loop_Shadow_Bomb::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(GCN_Loop_Shadow_Bomb_C_ExecuteUbergraph_GCN_Loop_Shadow_Bomb, CallFunc_GetGameTimeInSeconds_ReturnValue) == 0x000288, "Member 'GCN_Loop_Shadow_Bomb_C_ExecuteUbergraph_GCN_Loop_Shadow_Bomb::CallFunc_GetGameTimeInSeconds_ReturnValue' has a wrong offset!");
static_assert(offsetof(GCN_Loop_Shadow_Bomb_C_ExecuteUbergraph_GCN_Loop_Shadow_Bomb, CallFunc_IsValid_ReturnValue) == 0x000290, "Member 'GCN_Loop_Shadow_Bomb_C_ExecuteUbergraph_GCN_Loop_Shadow_Bomb::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(GCN_Loop_Shadow_Bomb_C_ExecuteUbergraph_GCN_Loop_Shadow_Bomb, CallFunc_GetWorldDeltaSeconds_ReturnValue) == 0x000298, "Member 'GCN_Loop_Shadow_Bomb_C_ExecuteUbergraph_GCN_Loop_Shadow_Bomb::CallFunc_GetWorldDeltaSeconds_ReturnValue' has a wrong offset!");
static_assert(offsetof(GCN_Loop_Shadow_Bomb_C_ExecuteUbergraph_GCN_Loop_Shadow_Bomb, K2Node_CreateDelegate_OutputDelegate_2) == 0x0002A0, "Member 'GCN_Loop_Shadow_Bomb_C_ExecuteUbergraph_GCN_Loop_Shadow_Bomb::K2Node_CreateDelegate_OutputDelegate_2' has a wrong offset!");
static_assert(offsetof(GCN_Loop_Shadow_Bomb_C_ExecuteUbergraph_GCN_Loop_Shadow_Bomb, K2Node_CreateDelegate_OutputDelegate_3) == 0x0002AC, "Member 'GCN_Loop_Shadow_Bomb_C_ExecuteUbergraph_GCN_Loop_Shadow_Bomb::K2Node_CreateDelegate_OutputDelegate_3' has a wrong offset!");
static_assert(offsetof(GCN_Loop_Shadow_Bomb_C_ExecuteUbergraph_GCN_Loop_Shadow_Bomb, K2Node_CreateDelegate_OutputDelegate_4) == 0x0002B8, "Member 'GCN_Loop_Shadow_Bomb_C_ExecuteUbergraph_GCN_Loop_Shadow_Bomb::K2Node_CreateDelegate_OutputDelegate_4' has a wrong offset!");
static_assert(offsetof(GCN_Loop_Shadow_Bomb_C_ExecuteUbergraph_GCN_Loop_Shadow_Bomb, CallFunc_IsLocallyControlled_ReturnValue) == 0x0002C4, "Member 'GCN_Loop_Shadow_Bomb_C_ExecuteUbergraph_GCN_Loop_Shadow_Bomb::CallFunc_IsLocallyControlled_ReturnValue' has a wrong offset!");
static_assert(offsetof(GCN_Loop_Shadow_Bomb_C_ExecuteUbergraph_GCN_Loop_Shadow_Bomb, CallFunc_GetIsPlayingReplay_ReturnValue) == 0x0002C5, "Member 'GCN_Loop_Shadow_Bomb_C_ExecuteUbergraph_GCN_Loop_Shadow_Bomb::CallFunc_GetIsPlayingReplay_ReturnValue' has a wrong offset!");
static_assert(offsetof(GCN_Loop_Shadow_Bomb_C_ExecuteUbergraph_GCN_Loop_Shadow_Bomb, CallFunc_GetIsPlayingReplay_ReturnValue_1) == 0x0002C6, "Member 'GCN_Loop_Shadow_Bomb_C_ExecuteUbergraph_GCN_Loop_Shadow_Bomb::CallFunc_GetIsPlayingReplay_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GCN_Loop_Shadow_Bomb_C_ExecuteUbergraph_GCN_Loop_Shadow_Bomb, CallFunc_BooleanOR_ReturnValue) == 0x0002C7, "Member 'GCN_Loop_Shadow_Bomb_C_ExecuteUbergraph_GCN_Loop_Shadow_Bomb::CallFunc_BooleanOR_ReturnValue' has a wrong offset!");
static_assert(offsetof(GCN_Loop_Shadow_Bomb_C_ExecuteUbergraph_GCN_Loop_Shadow_Bomb, CallFunc_Conv_BoolToFloat_ReturnValue) == 0x0002C8, "Member 'GCN_Loop_Shadow_Bomb_C_ExecuteUbergraph_GCN_Loop_Shadow_Bomb::CallFunc_Conv_BoolToFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(GCN_Loop_Shadow_Bomb_C_ExecuteUbergraph_GCN_Loop_Shadow_Bomb, CallFunc_IsLocallyControlled_ReturnValue_1) == 0x0002CC, "Member 'GCN_Loop_Shadow_Bomb_C_ExecuteUbergraph_GCN_Loop_Shadow_Bomb::CallFunc_IsLocallyControlled_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GCN_Loop_Shadow_Bomb_C_ExecuteUbergraph_GCN_Loop_Shadow_Bomb, Temp_int_Array_Index_Variable) == 0x0002D0, "Member 'GCN_Loop_Shadow_Bomb_C_ExecuteUbergraph_GCN_Loop_Shadow_Bomb::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(GCN_Loop_Shadow_Bomb_C_ExecuteUbergraph_GCN_Loop_Shadow_Bomb, K2Node_CreateDelegate_OutputDelegate_5) == 0x0002D4, "Member 'GCN_Loop_Shadow_Bomb_C_ExecuteUbergraph_GCN_Loop_Shadow_Bomb::K2Node_CreateDelegate_OutputDelegate_5' has a wrong offset!");
static_assert(offsetof(GCN_Loop_Shadow_Bomb_C_ExecuteUbergraph_GCN_Loop_Shadow_Bomb, CallFunc_K2_SetTimerDelegate_ReturnValue) == 0x0002E0, "Member 'GCN_Loop_Shadow_Bomb_C_ExecuteUbergraph_GCN_Loop_Shadow_Bomb::CallFunc_K2_SetTimerDelegate_ReturnValue' has a wrong offset!");
static_assert(offsetof(GCN_Loop_Shadow_Bomb_C_ExecuteUbergraph_GCN_Loop_Shadow_Bomb, Temp_int_Array_Index_Variable_1) == 0x0002E8, "Member 'GCN_Loop_Shadow_Bomb_C_ExecuteUbergraph_GCN_Loop_Shadow_Bomb::Temp_int_Array_Index_Variable_1' has a wrong offset!");
static_assert(offsetof(GCN_Loop_Shadow_Bomb_C_ExecuteUbergraph_GCN_Loop_Shadow_Bomb, Temp_int_Loop_Counter_Variable_1) == 0x0002EC, "Member 'GCN_Loop_Shadow_Bomb_C_ExecuteUbergraph_GCN_Loop_Shadow_Bomb::Temp_int_Loop_Counter_Variable_1' has a wrong offset!");
static_assert(offsetof(GCN_Loop_Shadow_Bomb_C_ExecuteUbergraph_GCN_Loop_Shadow_Bomb, CallFunc_Array_Length_ReturnValue_1) == 0x0002F0, "Member 'GCN_Loop_Shadow_Bomb_C_ExecuteUbergraph_GCN_Loop_Shadow_Bomb::CallFunc_Array_Length_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GCN_Loop_Shadow_Bomb_C_ExecuteUbergraph_GCN_Loop_Shadow_Bomb, CallFunc_Add_IntInt_ReturnValue_1) == 0x0002F4, "Member 'GCN_Loop_Shadow_Bomb_C_ExecuteUbergraph_GCN_Loop_Shadow_Bomb::CallFunc_Add_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GCN_Loop_Shadow_Bomb_C_ExecuteUbergraph_GCN_Loop_Shadow_Bomb, CallFunc_Less_IntInt_ReturnValue) == 0x0002F8, "Member 'GCN_Loop_Shadow_Bomb_C_ExecuteUbergraph_GCN_Loop_Shadow_Bomb::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(GCN_Loop_Shadow_Bomb_C_ExecuteUbergraph_GCN_Loop_Shadow_Bomb, Temp_int_Array_Index_Variable_2) == 0x0002FC, "Member 'GCN_Loop_Shadow_Bomb_C_ExecuteUbergraph_GCN_Loop_Shadow_Bomb::Temp_int_Array_Index_Variable_2' has a wrong offset!");
static_assert(offsetof(GCN_Loop_Shadow_Bomb_C_ExecuteUbergraph_GCN_Loop_Shadow_Bomb, CallFunc_Array_Get_Item_1) == 0x000300, "Member 'GCN_Loop_Shadow_Bomb_C_ExecuteUbergraph_GCN_Loop_Shadow_Bomb::CallFunc_Array_Get_Item_1' has a wrong offset!");
static_assert(offsetof(GCN_Loop_Shadow_Bomb_C_ExecuteUbergraph_GCN_Loop_Shadow_Bomb, CallFunc_Array_Length_ReturnValue_2) == 0x000308, "Member 'GCN_Loop_Shadow_Bomb_C_ExecuteUbergraph_GCN_Loop_Shadow_Bomb::CallFunc_Array_Length_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(GCN_Loop_Shadow_Bomb_C_ExecuteUbergraph_GCN_Loop_Shadow_Bomb, CallFunc_Greater_IntInt_ReturnValue_1) == 0x00030C, "Member 'GCN_Loop_Shadow_Bomb_C_ExecuteUbergraph_GCN_Loop_Shadow_Bomb::CallFunc_Greater_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GCN_Loop_Shadow_Bomb_C_ExecuteUbergraph_GCN_Loop_Shadow_Bomb, Temp_int_Loop_Counter_Variable_2) == 0x000310, "Member 'GCN_Loop_Shadow_Bomb_C_ExecuteUbergraph_GCN_Loop_Shadow_Bomb::Temp_int_Loop_Counter_Variable_2' has a wrong offset!");
static_assert(offsetof(GCN_Loop_Shadow_Bomb_C_ExecuteUbergraph_GCN_Loop_Shadow_Bomb, CallFunc_Add_IntInt_ReturnValue_2) == 0x000314, "Member 'GCN_Loop_Shadow_Bomb_C_ExecuteUbergraph_GCN_Loop_Shadow_Bomb::CallFunc_Add_IntInt_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(GCN_Loop_Shadow_Bomb_C_ExecuteUbergraph_GCN_Loop_Shadow_Bomb, CallFunc_GetValueAtLevel_ReturnValue) == 0x000318, "Member 'GCN_Loop_Shadow_Bomb_C_ExecuteUbergraph_GCN_Loop_Shadow_Bomb::CallFunc_GetValueAtLevel_ReturnValue' has a wrong offset!");
static_assert(offsetof(GCN_Loop_Shadow_Bomb_C_ExecuteUbergraph_GCN_Loop_Shadow_Bomb, CallFunc_GetValueAtLevel_ReturnValue_1) == 0x00031C, "Member 'GCN_Loop_Shadow_Bomb_C_ExecuteUbergraph_GCN_Loop_Shadow_Bomb::CallFunc_GetValueAtLevel_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GCN_Loop_Shadow_Bomb_C_ExecuteUbergraph_GCN_Loop_Shadow_Bomb, Temp_int_Array_Index_Variable_3) == 0x000320, "Member 'GCN_Loop_Shadow_Bomb_C_ExecuteUbergraph_GCN_Loop_Shadow_Bomb::Temp_int_Array_Index_Variable_3' has a wrong offset!");
static_assert(offsetof(GCN_Loop_Shadow_Bomb_C_ExecuteUbergraph_GCN_Loop_Shadow_Bomb, CallFunc_GetValueAtLevel_ReturnValue_2) == 0x000324, "Member 'GCN_Loop_Shadow_Bomb_C_ExecuteUbergraph_GCN_Loop_Shadow_Bomb::CallFunc_GetValueAtLevel_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(GCN_Loop_Shadow_Bomb_C_ExecuteUbergraph_GCN_Loop_Shadow_Bomb, CallFunc_Array_Get_Item_2) == 0x000328, "Member 'GCN_Loop_Shadow_Bomb_C_ExecuteUbergraph_GCN_Loop_Shadow_Bomb::CallFunc_Array_Get_Item_2' has a wrong offset!");
static_assert(offsetof(GCN_Loop_Shadow_Bomb_C_ExecuteUbergraph_GCN_Loop_Shadow_Bomb, CallFunc_GetLocalFortPlayerControllers_ReturnValue) == 0x000330, "Member 'GCN_Loop_Shadow_Bomb_C_ExecuteUbergraph_GCN_Loop_Shadow_Bomb::CallFunc_GetLocalFortPlayerControllers_ReturnValue' has a wrong offset!");
static_assert(offsetof(GCN_Loop_Shadow_Bomb_C_ExecuteUbergraph_GCN_Loop_Shadow_Bomb, CallFunc_GetValueAtLevel_ReturnValue_3) == 0x000340, "Member 'GCN_Loop_Shadow_Bomb_C_ExecuteUbergraph_GCN_Loop_Shadow_Bomb::CallFunc_GetValueAtLevel_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(GCN_Loop_Shadow_Bomb_C_ExecuteUbergraph_GCN_Loop_Shadow_Bomb, CallFunc_Array_Get_Item_3) == 0x000348, "Member 'GCN_Loop_Shadow_Bomb_C_ExecuteUbergraph_GCN_Loop_Shadow_Bomb::CallFunc_Array_Get_Item_3' has a wrong offset!");
static_assert(offsetof(GCN_Loop_Shadow_Bomb_C_ExecuteUbergraph_GCN_Loop_Shadow_Bomb, CallFunc_Array_Length_ReturnValue_3) == 0x000350, "Member 'GCN_Loop_Shadow_Bomb_C_ExecuteUbergraph_GCN_Loop_Shadow_Bomb::CallFunc_Array_Length_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(GCN_Loop_Shadow_Bomb_C_ExecuteUbergraph_GCN_Loop_Shadow_Bomb, CallFunc_OnSameTeam_ReturnValue) == 0x000354, "Member 'GCN_Loop_Shadow_Bomb_C_ExecuteUbergraph_GCN_Loop_Shadow_Bomb::CallFunc_OnSameTeam_ReturnValue' has a wrong offset!");
static_assert(offsetof(GCN_Loop_Shadow_Bomb_C_ExecuteUbergraph_GCN_Loop_Shadow_Bomb, CallFunc_GetIsBroadcastClient_ReturnValue) == 0x000355, "Member 'GCN_Loop_Shadow_Bomb_C_ExecuteUbergraph_GCN_Loop_Shadow_Bomb::CallFunc_GetIsBroadcastClient_ReturnValue' has a wrong offset!");
static_assert(offsetof(GCN_Loop_Shadow_Bomb_C_ExecuteUbergraph_GCN_Loop_Shadow_Bomb, CallFunc_BooleanOR_ReturnValue_1) == 0x000356, "Member 'GCN_Loop_Shadow_Bomb_C_ExecuteUbergraph_GCN_Loop_Shadow_Bomb::CallFunc_BooleanOR_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GCN_Loop_Shadow_Bomb_C_ExecuteUbergraph_GCN_Loop_Shadow_Bomb, CallFunc_GetValueAtLevel_ReturnValue_4) == 0x000358, "Member 'GCN_Loop_Shadow_Bomb_C_ExecuteUbergraph_GCN_Loop_Shadow_Bomb::CallFunc_GetValueAtLevel_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(GCN_Loop_Shadow_Bomb_C_ExecuteUbergraph_GCN_Loop_Shadow_Bomb, CallFunc_Array_Get_Item_4) == 0x000360, "Member 'GCN_Loop_Shadow_Bomb_C_ExecuteUbergraph_GCN_Loop_Shadow_Bomb::CallFunc_Array_Get_Item_4' has a wrong offset!");
static_assert(offsetof(GCN_Loop_Shadow_Bomb_C_ExecuteUbergraph_GCN_Loop_Shadow_Bomb, CallFunc_IsValid_ReturnValue_1) == 0x000368, "Member 'GCN_Loop_Shadow_Bomb_C_ExecuteUbergraph_GCN_Loop_Shadow_Bomb::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GCN_Loop_Shadow_Bomb_C_ExecuteUbergraph_GCN_Loop_Shadow_Bomb, CallFunc_GetVelocity_ReturnValue) == 0x000370, "Member 'GCN_Loop_Shadow_Bomb_C_ExecuteUbergraph_GCN_Loop_Shadow_Bomb::CallFunc_GetVelocity_ReturnValue' has a wrong offset!");
static_assert(offsetof(GCN_Loop_Shadow_Bomb_C_ExecuteUbergraph_GCN_Loop_Shadow_Bomb, CallFunc_BreakVector_X) == 0x000388, "Member 'GCN_Loop_Shadow_Bomb_C_ExecuteUbergraph_GCN_Loop_Shadow_Bomb::CallFunc_BreakVector_X' has a wrong offset!");
static_assert(offsetof(GCN_Loop_Shadow_Bomb_C_ExecuteUbergraph_GCN_Loop_Shadow_Bomb, CallFunc_BreakVector_Y) == 0x000390, "Member 'GCN_Loop_Shadow_Bomb_C_ExecuteUbergraph_GCN_Loop_Shadow_Bomb::CallFunc_BreakVector_Y' has a wrong offset!");
static_assert(offsetof(GCN_Loop_Shadow_Bomb_C_ExecuteUbergraph_GCN_Loop_Shadow_Bomb, CallFunc_BreakVector_Z) == 0x000398, "Member 'GCN_Loop_Shadow_Bomb_C_ExecuteUbergraph_GCN_Loop_Shadow_Bomb::CallFunc_BreakVector_Z' has a wrong offset!");
static_assert(offsetof(GCN_Loop_Shadow_Bomb_C_ExecuteUbergraph_GCN_Loop_Shadow_Bomb, CallFunc_Array_Get_Item_5) == 0x0003A0, "Member 'GCN_Loop_Shadow_Bomb_C_ExecuteUbergraph_GCN_Loop_Shadow_Bomb::CallFunc_Array_Get_Item_5' has a wrong offset!");
static_assert(offsetof(GCN_Loop_Shadow_Bomb_C_ExecuteUbergraph_GCN_Loop_Shadow_Bomb, CallFunc_Abs_ReturnValue) == 0x0003A8, "Member 'GCN_Loop_Shadow_Bomb_C_ExecuteUbergraph_GCN_Loop_Shadow_Bomb::CallFunc_Abs_ReturnValue' has a wrong offset!");
static_assert(offsetof(GCN_Loop_Shadow_Bomb_C_ExecuteUbergraph_GCN_Loop_Shadow_Bomb, CallFunc_Array_Length_ReturnValue_4) == 0x0003B0, "Member 'GCN_Loop_Shadow_Bomb_C_ExecuteUbergraph_GCN_Loop_Shadow_Bomb::CallFunc_Array_Length_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(GCN_Loop_Shadow_Bomb_C_ExecuteUbergraph_GCN_Loop_Shadow_Bomb, CallFunc_MapRangeClamped_ReturnValue) == 0x0003B8, "Member 'GCN_Loop_Shadow_Bomb_C_ExecuteUbergraph_GCN_Loop_Shadow_Bomb::CallFunc_MapRangeClamped_ReturnValue' has a wrong offset!");
static_assert(offsetof(GCN_Loop_Shadow_Bomb_C_ExecuteUbergraph_GCN_Loop_Shadow_Bomb, CallFunc_Greater_IntInt_ReturnValue_2) == 0x0003C0, "Member 'GCN_Loop_Shadow_Bomb_C_ExecuteUbergraph_GCN_Loop_Shadow_Bomb::CallFunc_Greater_IntInt_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(GCN_Loop_Shadow_Bomb_C_ExecuteUbergraph_GCN_Loop_Shadow_Bomb, CallFunc_FInterpTo_ReturnValue) == 0x0003C8, "Member 'GCN_Loop_Shadow_Bomb_C_ExecuteUbergraph_GCN_Loop_Shadow_Bomb::CallFunc_FInterpTo_ReturnValue' has a wrong offset!");
static_assert(offsetof(GCN_Loop_Shadow_Bomb_C_ExecuteUbergraph_GCN_Loop_Shadow_Bomb, CallFunc_Add_DoubleDouble_ReturnValue) == 0x0003D0, "Member 'GCN_Loop_Shadow_Bomb_C_ExecuteUbergraph_GCN_Loop_Shadow_Bomb::CallFunc_Add_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(GCN_Loop_Shadow_Bomb_C_ExecuteUbergraph_GCN_Loop_Shadow_Bomb, CallFunc_FClamp_ReturnValue) == 0x0003D8, "Member 'GCN_Loop_Shadow_Bomb_C_ExecuteUbergraph_GCN_Loop_Shadow_Bomb::CallFunc_FClamp_ReturnValue' has a wrong offset!");
static_assert(offsetof(GCN_Loop_Shadow_Bomb_C_ExecuteUbergraph_GCN_Loop_Shadow_Bomb, CallFunc_Array_Length_ReturnValue_5) == 0x0003E0, "Member 'GCN_Loop_Shadow_Bomb_C_ExecuteUbergraph_GCN_Loop_Shadow_Bomb::CallFunc_Array_Length_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(GCN_Loop_Shadow_Bomb_C_ExecuteUbergraph_GCN_Loop_Shadow_Bomb, CallFunc_Greater_IntInt_ReturnValue_3) == 0x0003E4, "Member 'GCN_Loop_Shadow_Bomb_C_ExecuteUbergraph_GCN_Loop_Shadow_Bomb::CallFunc_Greater_IntInt_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(GCN_Loop_Shadow_Bomb_C_ExecuteUbergraph_GCN_Loop_Shadow_Bomb, K2Node_CreateDelegate_OutputDelegate_6) == 0x0003E8, "Member 'GCN_Loop_Shadow_Bomb_C_ExecuteUbergraph_GCN_Loop_Shadow_Bomb::K2Node_CreateDelegate_OutputDelegate_6' has a wrong offset!");
static_assert(offsetof(GCN_Loop_Shadow_Bomb_C_ExecuteUbergraph_GCN_Loop_Shadow_Bomb, CallFunc_K2_SetTimerDelegate_ReturnValue_1) == 0x0003F8, "Member 'GCN_Loop_Shadow_Bomb_C_ExecuteUbergraph_GCN_Loop_Shadow_Bomb::CallFunc_K2_SetTimerDelegate_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GCN_Loop_Shadow_Bomb_C_ExecuteUbergraph_GCN_Loop_Shadow_Bomb, CallFunc_Array_Get_Item_6) == 0x000400, "Member 'GCN_Loop_Shadow_Bomb_C_ExecuteUbergraph_GCN_Loop_Shadow_Bomb::CallFunc_Array_Get_Item_6' has a wrong offset!");
static_assert(offsetof(GCN_Loop_Shadow_Bomb_C_ExecuteUbergraph_GCN_Loop_Shadow_Bomb, CallFunc_Array_Length_ReturnValue_6) == 0x000408, "Member 'GCN_Loop_Shadow_Bomb_C_ExecuteUbergraph_GCN_Loop_Shadow_Bomb::CallFunc_Array_Length_ReturnValue_6' has a wrong offset!");
static_assert(offsetof(GCN_Loop_Shadow_Bomb_C_ExecuteUbergraph_GCN_Loop_Shadow_Bomb, CallFunc_Less_IntInt_ReturnValue_1) == 0x00040C, "Member 'GCN_Loop_Shadow_Bomb_C_ExecuteUbergraph_GCN_Loop_Shadow_Bomb::CallFunc_Less_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GCN_Loop_Shadow_Bomb_C_ExecuteUbergraph_GCN_Loop_Shadow_Bomb, Temp_int_Loop_Counter_Variable_3) == 0x000410, "Member 'GCN_Loop_Shadow_Bomb_C_ExecuteUbergraph_GCN_Loop_Shadow_Bomb::Temp_int_Loop_Counter_Variable_3' has a wrong offset!");
static_assert(offsetof(GCN_Loop_Shadow_Bomb_C_ExecuteUbergraph_GCN_Loop_Shadow_Bomb, CallFunc_Array_Get_Item_7) == 0x000418, "Member 'GCN_Loop_Shadow_Bomb_C_ExecuteUbergraph_GCN_Loop_Shadow_Bomb::CallFunc_Array_Get_Item_7' has a wrong offset!");
static_assert(offsetof(GCN_Loop_Shadow_Bomb_C_ExecuteUbergraph_GCN_Loop_Shadow_Bomb, CallFunc_Array_Get_Item_8) == 0x000420, "Member 'GCN_Loop_Shadow_Bomb_C_ExecuteUbergraph_GCN_Loop_Shadow_Bomb::CallFunc_Array_Get_Item_8' has a wrong offset!");
static_assert(offsetof(GCN_Loop_Shadow_Bomb_C_ExecuteUbergraph_GCN_Loop_Shadow_Bomb, CallFunc_Less_IntInt_ReturnValue_2) == 0x000428, "Member 'GCN_Loop_Shadow_Bomb_C_ExecuteUbergraph_GCN_Loop_Shadow_Bomb::CallFunc_Less_IntInt_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(GCN_Loop_Shadow_Bomb_C_ExecuteUbergraph_GCN_Loop_Shadow_Bomb, CallFunc_Add_IntInt_ReturnValue_3) == 0x00042C, "Member 'GCN_Loop_Shadow_Bomb_C_ExecuteUbergraph_GCN_Loop_Shadow_Bomb::CallFunc_Add_IntInt_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(GCN_Loop_Shadow_Bomb_C_ExecuteUbergraph_GCN_Loop_Shadow_Bomb, CallFunc_Array_Get_Item_9) == 0x000430, "Member 'GCN_Loop_Shadow_Bomb_C_ExecuteUbergraph_GCN_Loop_Shadow_Bomb::CallFunc_Array_Get_Item_9' has a wrong offset!");
static_assert(offsetof(GCN_Loop_Shadow_Bomb_C_ExecuteUbergraph_GCN_Loop_Shadow_Bomb, CallFunc_IsLocallyControlled_ReturnValue_2) == 0x000438, "Member 'GCN_Loop_Shadow_Bomb_C_ExecuteUbergraph_GCN_Loop_Shadow_Bomb::CallFunc_IsLocallyControlled_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(GCN_Loop_Shadow_Bomb_C_ExecuteUbergraph_GCN_Loop_Shadow_Bomb, CallFunc_Array_Length_ReturnValue_7) == 0x00043C, "Member 'GCN_Loop_Shadow_Bomb_C_ExecuteUbergraph_GCN_Loop_Shadow_Bomb::CallFunc_Array_Length_ReturnValue_7' has a wrong offset!");
static_assert(offsetof(GCN_Loop_Shadow_Bomb_C_ExecuteUbergraph_GCN_Loop_Shadow_Bomb, CallFunc_Array_Length_ReturnValue_8) == 0x000440, "Member 'GCN_Loop_Shadow_Bomb_C_ExecuteUbergraph_GCN_Loop_Shadow_Bomb::CallFunc_Array_Length_ReturnValue_8' has a wrong offset!");
static_assert(offsetof(GCN_Loop_Shadow_Bomb_C_ExecuteUbergraph_GCN_Loop_Shadow_Bomb, CallFunc_Less_IntInt_ReturnValue_3) == 0x000444, "Member 'GCN_Loop_Shadow_Bomb_C_ExecuteUbergraph_GCN_Loop_Shadow_Bomb::CallFunc_Less_IntInt_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(GCN_Loop_Shadow_Bomb_C_ExecuteUbergraph_GCN_Loop_Shadow_Bomb, CallFunc_Greater_IntInt_ReturnValue_4) == 0x000445, "Member 'GCN_Loop_Shadow_Bomb_C_ExecuteUbergraph_GCN_Loop_Shadow_Bomb::CallFunc_Greater_IntInt_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(GCN_Loop_Shadow_Bomb_C_ExecuteUbergraph_GCN_Loop_Shadow_Bomb, CallFunc_GetIsPlayingReplay_ReturnValue_2) == 0x000446, "Member 'GCN_Loop_Shadow_Bomb_C_ExecuteUbergraph_GCN_Loop_Shadow_Bomb::CallFunc_GetIsPlayingReplay_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(GCN_Loop_Shadow_Bomb_C_ExecuteUbergraph_GCN_Loop_Shadow_Bomb, CallFunc_GetIsBroadcastClient_ReturnValue_1) == 0x000447, "Member 'GCN_Loop_Shadow_Bomb_C_ExecuteUbergraph_GCN_Loop_Shadow_Bomb::CallFunc_GetIsBroadcastClient_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GCN_Loop_Shadow_Bomb_C_ExecuteUbergraph_GCN_Loop_Shadow_Bomb, CallFunc_BooleanOR_ReturnValue_2) == 0x000448, "Member 'GCN_Loop_Shadow_Bomb_C_ExecuteUbergraph_GCN_Loop_Shadow_Bomb::CallFunc_BooleanOR_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(GCN_Loop_Shadow_Bomb_C_ExecuteUbergraph_GCN_Loop_Shadow_Bomb, K2Node_CustomEvent_Pawn) == 0x000450, "Member 'GCN_Loop_Shadow_Bomb_C_ExecuteUbergraph_GCN_Loop_Shadow_Bomb::K2Node_CustomEvent_Pawn' has a wrong offset!");
static_assert(offsetof(GCN_Loop_Shadow_Bomb_C_ExecuteUbergraph_GCN_Loop_Shadow_Bomb, CallFunc_BooleanOR_ReturnValue_3) == 0x000458, "Member 'GCN_Loop_Shadow_Bomb_C_ExecuteUbergraph_GCN_Loop_Shadow_Bomb::CallFunc_BooleanOR_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(GCN_Loop_Shadow_Bomb_C_ExecuteUbergraph_GCN_Loop_Shadow_Bomb, CallFunc_IsLocallyControlled_ReturnValue_3) == 0x000459, "Member 'GCN_Loop_Shadow_Bomb_C_ExecuteUbergraph_GCN_Loop_Shadow_Bomb::CallFunc_IsLocallyControlled_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(GCN_Loop_Shadow_Bomb_C_ExecuteUbergraph_GCN_Loop_Shadow_Bomb, CallFunc_Not_PreBool_ReturnValue) == 0x00045A, "Member 'GCN_Loop_Shadow_Bomb_C_ExecuteUbergraph_GCN_Loop_Shadow_Bomb::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(GCN_Loop_Shadow_Bomb_C_ExecuteUbergraph_GCN_Loop_Shadow_Bomb, CallFunc_IsValid_ReturnValue_2) == 0x00045B, "Member 'GCN_Loop_Shadow_Bomb_C_ExecuteUbergraph_GCN_Loop_Shadow_Bomb::CallFunc_IsValid_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(GCN_Loop_Shadow_Bomb_C_ExecuteUbergraph_GCN_Loop_Shadow_Bomb, CallFunc_IsValid_ReturnValue_3) == 0x00045C, "Member 'GCN_Loop_Shadow_Bomb_C_ExecuteUbergraph_GCN_Loop_Shadow_Bomb::CallFunc_IsValid_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(GCN_Loop_Shadow_Bomb_C_ExecuteUbergraph_GCN_Loop_Shadow_Bomb, K2Node_CustomEvent_NewWeapon) == 0x000460, "Member 'GCN_Loop_Shadow_Bomb_C_ExecuteUbergraph_GCN_Loop_Shadow_Bomb::K2Node_CustomEvent_NewWeapon' has a wrong offset!");
static_assert(offsetof(GCN_Loop_Shadow_Bomb_C_ExecuteUbergraph_GCN_Loop_Shadow_Bomb, K2Node_CustomEvent_PrevWeapon) == 0x000468, "Member 'GCN_Loop_Shadow_Bomb_C_ExecuteUbergraph_GCN_Loop_Shadow_Bomb::K2Node_CustomEvent_PrevWeapon' has a wrong offset!");
static_assert(offsetof(GCN_Loop_Shadow_Bomb_C_ExecuteUbergraph_GCN_Loop_Shadow_Bomb, CallFunc_IsValid_ReturnValue_4) == 0x000470, "Member 'GCN_Loop_Shadow_Bomb_C_ExecuteUbergraph_GCN_Loop_Shadow_Bomb::CallFunc_IsValid_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(GCN_Loop_Shadow_Bomb_C_ExecuteUbergraph_GCN_Loop_Shadow_Bomb, CallFunc_IsValid_ReturnValue_5) == 0x000471, "Member 'GCN_Loop_Shadow_Bomb_C_ExecuteUbergraph_GCN_Loop_Shadow_Bomb::CallFunc_IsValid_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(GCN_Loop_Shadow_Bomb_C_ExecuteUbergraph_GCN_Loop_Shadow_Bomb, CallFunc_IsValid_ReturnValue_6) == 0x000472, "Member 'GCN_Loop_Shadow_Bomb_C_ExecuteUbergraph_GCN_Loop_Shadow_Bomb::CallFunc_IsValid_ReturnValue_6' has a wrong offset!");
static_assert(offsetof(GCN_Loop_Shadow_Bomb_C_ExecuteUbergraph_GCN_Loop_Shadow_Bomb, CallFunc_IsValid_ReturnValue_7) == 0x000473, "Member 'GCN_Loop_Shadow_Bomb_C_ExecuteUbergraph_GCN_Loop_Shadow_Bomb::CallFunc_IsValid_ReturnValue_7' has a wrong offset!");
static_assert(offsetof(GCN_Loop_Shadow_Bomb_C_ExecuteUbergraph_GCN_Loop_Shadow_Bomb, CallFunc_NearlyEqual_FloatFloat_ReturnValue) == 0x000474, "Member 'GCN_Loop_Shadow_Bomb_C_ExecuteUbergraph_GCN_Loop_Shadow_Bomb::CallFunc_NearlyEqual_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(GCN_Loop_Shadow_Bomb_C_ExecuteUbergraph_GCN_Loop_Shadow_Bomb, K2Node_Select_Default) == 0x000478, "Member 'GCN_Loop_Shadow_Bomb_C_ExecuteUbergraph_GCN_Loop_Shadow_Bomb::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(GCN_Loop_Shadow_Bomb_C_ExecuteUbergraph_GCN_Loop_Shadow_Bomb, CallFunc_Subtract_DoubleDouble_ReturnValue) == 0x000480, "Member 'GCN_Loop_Shadow_Bomb_C_ExecuteUbergraph_GCN_Loop_Shadow_Bomb::CallFunc_Subtract_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(GCN_Loop_Shadow_Bomb_C_ExecuteUbergraph_GCN_Loop_Shadow_Bomb, CallFunc_K2_SetTimerDelegate_ReturnValue_2) == 0x000488, "Member 'GCN_Loop_Shadow_Bomb_C_ExecuteUbergraph_GCN_Loop_Shadow_Bomb::CallFunc_K2_SetTimerDelegate_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(GCN_Loop_Shadow_Bomb_C_ExecuteUbergraph_GCN_Loop_Shadow_Bomb, CallFunc_SetFloatParameter_InFloat_ImplicitCast) == 0x000490, "Member 'GCN_Loop_Shadow_Bomb_C_ExecuteUbergraph_GCN_Loop_Shadow_Bomb::CallFunc_SetFloatParameter_InFloat_ImplicitCast' has a wrong offset!");
static_assert(offsetof(GCN_Loop_Shadow_Bomb_C_ExecuteUbergraph_GCN_Loop_Shadow_Bomb, CallFunc_K2_SetTimerDelegate_Time_ImplicitCast) == 0x000494, "Member 'GCN_Loop_Shadow_Bomb_C_ExecuteUbergraph_GCN_Loop_Shadow_Bomb::CallFunc_K2_SetTimerDelegate_Time_ImplicitCast' has a wrong offset!");
static_assert(offsetof(GCN_Loop_Shadow_Bomb_C_ExecuteUbergraph_GCN_Loop_Shadow_Bomb, CallFunc_SetScalarParameterValueOnMaterials_ParameterValue_ImplicitCast) == 0x000498, "Member 'GCN_Loop_Shadow_Bomb_C_ExecuteUbergraph_GCN_Loop_Shadow_Bomb::CallFunc_SetScalarParameterValueOnMaterials_ParameterValue_ImplicitCast' has a wrong offset!");
static_assert(offsetof(GCN_Loop_Shadow_Bomb_C_ExecuteUbergraph_GCN_Loop_Shadow_Bomb, K2Node_VariableSet_WalkVisMultiplier_ImplicitCast) == 0x0004A0, "Member 'GCN_Loop_Shadow_Bomb_C_ExecuteUbergraph_GCN_Loop_Shadow_Bomb::K2Node_VariableSet_WalkVisMultiplier_ImplicitCast' has a wrong offset!");
static_assert(offsetof(GCN_Loop_Shadow_Bomb_C_ExecuteUbergraph_GCN_Loop_Shadow_Bomb, K2Node_VariableSet_SprintVisMultiplier_ImplicitCast) == 0x0004A8, "Member 'GCN_Loop_Shadow_Bomb_C_ExecuteUbergraph_GCN_Loop_Shadow_Bomb::K2Node_VariableSet_SprintVisMultiplier_ImplicitCast' has a wrong offset!");
static_assert(offsetof(GCN_Loop_Shadow_Bomb_C_ExecuteUbergraph_GCN_Loop_Shadow_Bomb, K2Node_VariableSet_MinFriendlyOpacity_ImplicitCast) == 0x0004B0, "Member 'GCN_Loop_Shadow_Bomb_C_ExecuteUbergraph_GCN_Loop_Shadow_Bomb::K2Node_VariableSet_MinFriendlyOpacity_ImplicitCast' has a wrong offset!");
static_assert(offsetof(GCN_Loop_Shadow_Bomb_C_ExecuteUbergraph_GCN_Loop_Shadow_Bomb, K2Node_Select_Option_1_ImplicitCast) == 0x0004B8, "Member 'GCN_Loop_Shadow_Bomb_C_ExecuteUbergraph_GCN_Loop_Shadow_Bomb::K2Node_Select_Option_1_ImplicitCast' has a wrong offset!");
static_assert(offsetof(GCN_Loop_Shadow_Bomb_C_ExecuteUbergraph_GCN_Loop_Shadow_Bomb, CallFunc_SetFloatParameter_Param_ImplicitCast) == 0x0004C0, "Member 'GCN_Loop_Shadow_Bomb_C_ExecuteUbergraph_GCN_Loop_Shadow_Bomb::CallFunc_SetFloatParameter_Param_ImplicitCast' has a wrong offset!");
static_assert(offsetof(GCN_Loop_Shadow_Bomb_C_ExecuteUbergraph_GCN_Loop_Shadow_Bomb, CallFunc_SetScalarParameterValueOnMaterials_ParameterValue_ImplicitCast_1) == 0x0004C4, "Member 'GCN_Loop_Shadow_Bomb_C_ExecuteUbergraph_GCN_Loop_Shadow_Bomb::CallFunc_SetScalarParameterValueOnMaterials_ParameterValue_ImplicitCast_1' has a wrong offset!");
static_assert(offsetof(GCN_Loop_Shadow_Bomb_C_ExecuteUbergraph_GCN_Loop_Shadow_Bomb, K2Node_VariableSet_InteractVisibility_ImplicitCast) == 0x0004C8, "Member 'GCN_Loop_Shadow_Bomb_C_ExecuteUbergraph_GCN_Loop_Shadow_Bomb::K2Node_VariableSet_InteractVisibility_ImplicitCast' has a wrong offset!");
static_assert(offsetof(GCN_Loop_Shadow_Bomb_C_ExecuteUbergraph_GCN_Loop_Shadow_Bomb, CallFunc_K2_SetTimerDelegate_Time_ImplicitCast_1) == 0x0004D0, "Member 'GCN_Loop_Shadow_Bomb_C_ExecuteUbergraph_GCN_Loop_Shadow_Bomb::CallFunc_K2_SetTimerDelegate_Time_ImplicitCast_1' has a wrong offset!");

struct GCN_Loop_Shadow_Bomb_C_GetSkeletalMeshes final
{
public:
	int32                                         Temp_int_Array_Index_Variable;
	int32                                         Temp_int_Loop_Counter_Variable;
	int32                                         CallFunc_Add_IntInt_ReturnValue;
	bool                                          CallFunc_IsValid_ReturnValue;
	uint8                                         Pad_D[0x3];
	TArray<class USceneComponent*>                CallFunc_GetChildrenComponents_Children;
	class USceneComponent*                        CallFunc_Array_Get_Item;
	int32                                         CallFunc_Array_Length_ReturnValue;
	uint8                                         Pad_2C[0x4];
	class USkeletalMeshComponent*                 K2Node_DynamicCast_AsSkeletal_Mesh_Component;
	bool                                          K2Node_DynamicCast_bSuccess;
	bool                                          CallFunc_Less_IntInt_ReturnValue;
	uint8                                         Pad_3A[0x2];
	int32                                         CallFunc_Array_AddUnique_ReturnValue;
};
static_assert(alignof(GCN_Loop_Shadow_Bomb_C_GetSkeletalMeshes) == 0x000008, "Wrong alignment on GCN_Loop_Shadow_Bomb_C_GetSkeletalMeshes");
static_assert(sizeof(GCN_Loop_Shadow_Bomb_C_GetSkeletalMeshes) == 0x000040, "Wrong size on GCN_Loop_Shadow_Bomb_C_GetSkeletalMeshes");
static_assert(offsetof(GCN_Loop_Shadow_Bomb_C_GetSkeletalMeshes, Temp_int_Array_Index_Variable) == 0x000000, "Member 'GCN_Loop_Shadow_Bomb_C_GetSkeletalMeshes::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(GCN_Loop_Shadow_Bomb_C_GetSkeletalMeshes, Temp_int_Loop_Counter_Variable) == 0x000004, "Member 'GCN_Loop_Shadow_Bomb_C_GetSkeletalMeshes::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(GCN_Loop_Shadow_Bomb_C_GetSkeletalMeshes, CallFunc_Add_IntInt_ReturnValue) == 0x000008, "Member 'GCN_Loop_Shadow_Bomb_C_GetSkeletalMeshes::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(GCN_Loop_Shadow_Bomb_C_GetSkeletalMeshes, CallFunc_IsValid_ReturnValue) == 0x00000C, "Member 'GCN_Loop_Shadow_Bomb_C_GetSkeletalMeshes::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(GCN_Loop_Shadow_Bomb_C_GetSkeletalMeshes, CallFunc_GetChildrenComponents_Children) == 0x000010, "Member 'GCN_Loop_Shadow_Bomb_C_GetSkeletalMeshes::CallFunc_GetChildrenComponents_Children' has a wrong offset!");
static_assert(offsetof(GCN_Loop_Shadow_Bomb_C_GetSkeletalMeshes, CallFunc_Array_Get_Item) == 0x000020, "Member 'GCN_Loop_Shadow_Bomb_C_GetSkeletalMeshes::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(GCN_Loop_Shadow_Bomb_C_GetSkeletalMeshes, CallFunc_Array_Length_ReturnValue) == 0x000028, "Member 'GCN_Loop_Shadow_Bomb_C_GetSkeletalMeshes::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(GCN_Loop_Shadow_Bomb_C_GetSkeletalMeshes, K2Node_DynamicCast_AsSkeletal_Mesh_Component) == 0x000030, "Member 'GCN_Loop_Shadow_Bomb_C_GetSkeletalMeshes::K2Node_DynamicCast_AsSkeletal_Mesh_Component' has a wrong offset!");
static_assert(offsetof(GCN_Loop_Shadow_Bomb_C_GetSkeletalMeshes, K2Node_DynamicCast_bSuccess) == 0x000038, "Member 'GCN_Loop_Shadow_Bomb_C_GetSkeletalMeshes::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(GCN_Loop_Shadow_Bomb_C_GetSkeletalMeshes, CallFunc_Less_IntInt_ReturnValue) == 0x000039, "Member 'GCN_Loop_Shadow_Bomb_C_GetSkeletalMeshes::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(GCN_Loop_Shadow_Bomb_C_GetSkeletalMeshes, CallFunc_Array_AddUnique_ReturnValue) == 0x00003C, "Member 'GCN_Loop_Shadow_Bomb_C_GetSkeletalMeshes::CallFunc_Array_AddUnique_ReturnValue' has a wrong offset!");

struct GCN_Loop_Shadow_Bomb_C_OnFinishedCharacterCustomization_Bind final
{
public:
	class AFortPlayerPawn*                        Pawn;
};
static_assert(alignof(GCN_Loop_Shadow_Bomb_C_OnFinishedCharacterCustomization_Bind) == 0x000008, "Wrong alignment on GCN_Loop_Shadow_Bomb_C_OnFinishedCharacterCustomization_Bind");
static_assert(sizeof(GCN_Loop_Shadow_Bomb_C_OnFinishedCharacterCustomization_Bind) == 0x000008, "Wrong size on GCN_Loop_Shadow_Bomb_C_OnFinishedCharacterCustomization_Bind");
static_assert(offsetof(GCN_Loop_Shadow_Bomb_C_OnFinishedCharacterCustomization_Bind, Pawn) == 0x000000, "Member 'GCN_Loop_Shadow_Bomb_C_OnFinishedCharacterCustomization_Bind::Pawn' has a wrong offset!");

struct GCN_Loop_Shadow_Bomb_C_OnLoopingStart final
{
public:
	class AActor*                                 MyTarget;
	struct FGameplayCueParameters                 Parameters;
	TArray<class UParticleSystemComponent*>       ParticleComponents;
	TArray<class UAudioComponent*>                AudioComponents;
};
static_assert(alignof(GCN_Loop_Shadow_Bomb_C_OnLoopingStart) == 0x000008, "Wrong alignment on GCN_Loop_Shadow_Bomb_C_OnLoopingStart");
static_assert(sizeof(GCN_Loop_Shadow_Bomb_C_OnLoopingStart) == 0x0000F8, "Wrong size on GCN_Loop_Shadow_Bomb_C_OnLoopingStart");
static_assert(offsetof(GCN_Loop_Shadow_Bomb_C_OnLoopingStart, MyTarget) == 0x000000, "Member 'GCN_Loop_Shadow_Bomb_C_OnLoopingStart::MyTarget' has a wrong offset!");
static_assert(offsetof(GCN_Loop_Shadow_Bomb_C_OnLoopingStart, Parameters) == 0x000008, "Member 'GCN_Loop_Shadow_Bomb_C_OnLoopingStart::Parameters' has a wrong offset!");
static_assert(offsetof(GCN_Loop_Shadow_Bomb_C_OnLoopingStart, ParticleComponents) == 0x0000D8, "Member 'GCN_Loop_Shadow_Bomb_C_OnLoopingStart::ParticleComponents' has a wrong offset!");
static_assert(offsetof(GCN_Loop_Shadow_Bomb_C_OnLoopingStart, AudioComponents) == 0x0000E8, "Member 'GCN_Loop_Shadow_Bomb_C_OnLoopingStart::AudioComponents' has a wrong offset!");

struct GCN_Loop_Shadow_Bomb_C_OnRemoval final
{
public:
	class AActor*                                 MyTarget;
	struct FGameplayCueParameters                 Parameters;
	TArray<class UParticleSystemComponent*>       ParticleComponents;
	TArray<class UAudioComponent*>                AudioComponents;
	class ULegacyCameraShake*                     BurstCameraShakeInstance;
	class ADecalActor*                            BurstDecalInstance;
};
static_assert(alignof(GCN_Loop_Shadow_Bomb_C_OnRemoval) == 0x000008, "Wrong alignment on GCN_Loop_Shadow_Bomb_C_OnRemoval");
static_assert(sizeof(GCN_Loop_Shadow_Bomb_C_OnRemoval) == 0x000108, "Wrong size on GCN_Loop_Shadow_Bomb_C_OnRemoval");
static_assert(offsetof(GCN_Loop_Shadow_Bomb_C_OnRemoval, MyTarget) == 0x000000, "Member 'GCN_Loop_Shadow_Bomb_C_OnRemoval::MyTarget' has a wrong offset!");
static_assert(offsetof(GCN_Loop_Shadow_Bomb_C_OnRemoval, Parameters) == 0x000008, "Member 'GCN_Loop_Shadow_Bomb_C_OnRemoval::Parameters' has a wrong offset!");
static_assert(offsetof(GCN_Loop_Shadow_Bomb_C_OnRemoval, ParticleComponents) == 0x0000D8, "Member 'GCN_Loop_Shadow_Bomb_C_OnRemoval::ParticleComponents' has a wrong offset!");
static_assert(offsetof(GCN_Loop_Shadow_Bomb_C_OnRemoval, AudioComponents) == 0x0000E8, "Member 'GCN_Loop_Shadow_Bomb_C_OnRemoval::AudioComponents' has a wrong offset!");
static_assert(offsetof(GCN_Loop_Shadow_Bomb_C_OnRemoval, BurstCameraShakeInstance) == 0x0000F8, "Member 'GCN_Loop_Shadow_Bomb_C_OnRemoval::BurstCameraShakeInstance' has a wrong offset!");
static_assert(offsetof(GCN_Loop_Shadow_Bomb_C_OnRemoval, BurstDecalInstance) == 0x000100, "Member 'GCN_Loop_Shadow_Bomb_C_OnRemoval::BurstDecalInstance' has a wrong offset!");

struct GCN_Loop_Shadow_Bomb_C_OnWeaponEquippedDelegate_Event_0 final
{
public:
	class AFortWeapon*                            NewWeapon;
	class AFortWeapon*                            PrevWeapon;
};
static_assert(alignof(GCN_Loop_Shadow_Bomb_C_OnWeaponEquippedDelegate_Event_0) == 0x000008, "Wrong alignment on GCN_Loop_Shadow_Bomb_C_OnWeaponEquippedDelegate_Event_0");
static_assert(sizeof(GCN_Loop_Shadow_Bomb_C_OnWeaponEquippedDelegate_Event_0) == 0x000010, "Wrong size on GCN_Loop_Shadow_Bomb_C_OnWeaponEquippedDelegate_Event_0");
static_assert(offsetof(GCN_Loop_Shadow_Bomb_C_OnWeaponEquippedDelegate_Event_0, NewWeapon) == 0x000000, "Member 'GCN_Loop_Shadow_Bomb_C_OnWeaponEquippedDelegate_Event_0::NewWeapon' has a wrong offset!");
static_assert(offsetof(GCN_Loop_Shadow_Bomb_C_OnWeaponEquippedDelegate_Event_0, PrevWeapon) == 0x000008, "Member 'GCN_Loop_Shadow_Bomb_C_OnWeaponEquippedDelegate_Event_0::PrevWeapon' has a wrong offset!");

struct GCN_Loop_Shadow_Bomb_C_ReceiveTick final
{
public:
	float                                         DeltaSeconds;
};
static_assert(alignof(GCN_Loop_Shadow_Bomb_C_ReceiveTick) == 0x000004, "Wrong alignment on GCN_Loop_Shadow_Bomb_C_ReceiveTick");
static_assert(sizeof(GCN_Loop_Shadow_Bomb_C_ReceiveTick) == 0x000004, "Wrong size on GCN_Loop_Shadow_Bomb_C_ReceiveTick");
static_assert(offsetof(GCN_Loop_Shadow_Bomb_C_ReceiveTick, DeltaSeconds) == 0x000000, "Member 'GCN_Loop_Shadow_Bomb_C_ReceiveTick::DeltaSeconds' has a wrong offset!");

struct GCN_Loop_Shadow_Bomb_C_UnbindEquippedWeapon final
{
public:
	TDelegate<void(class AFortWeapon* NewWeapon, class AFortWeapon* PrevWeapon)> K2Node_CreateDelegate_OutputDelegate;
	bool                                          CallFunc_IsValid_ReturnValue;
};
static_assert(alignof(GCN_Loop_Shadow_Bomb_C_UnbindEquippedWeapon) == 0x000004, "Wrong alignment on GCN_Loop_Shadow_Bomb_C_UnbindEquippedWeapon");
static_assert(sizeof(GCN_Loop_Shadow_Bomb_C_UnbindEquippedWeapon) == 0x000010, "Wrong size on GCN_Loop_Shadow_Bomb_C_UnbindEquippedWeapon");
static_assert(offsetof(GCN_Loop_Shadow_Bomb_C_UnbindEquippedWeapon, K2Node_CreateDelegate_OutputDelegate) == 0x000000, "Member 'GCN_Loop_Shadow_Bomb_C_UnbindEquippedWeapon::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(GCN_Loop_Shadow_Bomb_C_UnbindEquippedWeapon, CallFunc_IsValid_ReturnValue) == 0x00000C, "Member 'GCN_Loop_Shadow_Bomb_C_UnbindEquippedWeapon::CallFunc_IsValid_ReturnValue' has a wrong offset!");

}
