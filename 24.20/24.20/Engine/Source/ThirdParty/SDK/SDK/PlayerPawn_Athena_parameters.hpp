#pragma once

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "GameplayTags_structs.hpp"
#include "Engine_structs.hpp"
#include "PawnHighlight_structs.hpp"
#include "GameplayAbilities_structs.hpp"
#include "FortniteGame_structs.hpp"

namespace SDK::Params
{

struct PlayerPawn_Athena_C_ActivateInvincibleVisuals final
{
public:
	double                                        Duration;
};
static_assert(alignof(PlayerPawn_Athena_C_ActivateInvincibleVisuals) == 0x000008, "Wrong alignment on PlayerPawn_Athena_C_ActivateInvincibleVisuals");
static_assert(sizeof(PlayerPawn_Athena_C_ActivateInvincibleVisuals) == 0x000008, "Wrong size on PlayerPawn_Athena_C_ActivateInvincibleVisuals");
static_assert(offsetof(PlayerPawn_Athena_C_ActivateInvincibleVisuals, Duration) == 0x000000, "Member 'PlayerPawn_Athena_C_ActivateInvincibleVisuals::Duration' has a wrong offset!");

struct PlayerPawn_Athena_C_AddHighlightFromSource final
{
public:
	class UObject*                                Source;
	struct FPawnHighlight                         Highlight;
	bool                                          OnlyUpdateIfCurrent;
};
static_assert(alignof(PlayerPawn_Athena_C_AddHighlightFromSource) == 0x000008, "Wrong alignment on PlayerPawn_Athena_C_AddHighlightFromSource");
static_assert(sizeof(PlayerPawn_Athena_C_AddHighlightFromSource) == 0x000040, "Wrong size on PlayerPawn_Athena_C_AddHighlightFromSource");
static_assert(offsetof(PlayerPawn_Athena_C_AddHighlightFromSource, Source) == 0x000000, "Member 'PlayerPawn_Athena_C_AddHighlightFromSource::Source' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_C_AddHighlightFromSource, Highlight) == 0x000008, "Member 'PlayerPawn_Athena_C_AddHighlightFromSource::Highlight' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_C_AddHighlightFromSource, OnlyUpdateIfCurrent) == 0x000038, "Member 'PlayerPawn_Athena_C_AddHighlightFromSource::OnlyUpdateIfCurrent' has a wrong offset!");

struct PlayerPawn_Athena_C_AddSkeletalMeshComponentsFromWeaponObject final
{
public:
	class AFortWeapon*                            WeaponObject;
	class UMaterialInterface*                     Temp_object_Variable;
	bool                                          CallFunc_IsValid_ReturnValue;
	uint8                                         Pad_11[0x7];
	TArray<class USkeletalMeshComponentBudgeted*> CallFunc_GetWeaponMeshes_WeaponMeshes;
	int32                                         CallFunc_Array_Length_ReturnValue;
	int32                                         Temp_int_Array_Index_Variable;
	bool                                          Temp_bool_Variable;
	uint8                                         Pad_31[0x7];
	class USkeletalMeshComponentBudgeted*         CallFunc_Array_Get_Item;
	TArray<class UMaterialInterface*>             CallFunc_GetMaterials_ReturnValue;
	bool                                          CallFunc_PawnIsNPC_ReturnValue;
	uint8                                         Pad_51[0x7];
	class UMaterialInterface*                     K2Node_Select_Default;
	bool                                          CallFunc_SetupDissolveFx_ReturnValue;
	uint8                                         Pad_61[0x3];
	int32                                         CallFunc_Array_AddUnique_ReturnValue;
	int32                                         Temp_int_Loop_Counter_Variable;
	bool                                          CallFunc_Less_IntInt_ReturnValue;
	uint8                                         Pad_6D[0x3];
	int32                                         CallFunc_Add_IntInt_ReturnValue;
};
static_assert(alignof(PlayerPawn_Athena_C_AddSkeletalMeshComponentsFromWeaponObject) == 0x000008, "Wrong alignment on PlayerPawn_Athena_C_AddSkeletalMeshComponentsFromWeaponObject");
static_assert(sizeof(PlayerPawn_Athena_C_AddSkeletalMeshComponentsFromWeaponObject) == 0x000078, "Wrong size on PlayerPawn_Athena_C_AddSkeletalMeshComponentsFromWeaponObject");
static_assert(offsetof(PlayerPawn_Athena_C_AddSkeletalMeshComponentsFromWeaponObject, WeaponObject) == 0x000000, "Member 'PlayerPawn_Athena_C_AddSkeletalMeshComponentsFromWeaponObject::WeaponObject' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_C_AddSkeletalMeshComponentsFromWeaponObject, Temp_object_Variable) == 0x000008, "Member 'PlayerPawn_Athena_C_AddSkeletalMeshComponentsFromWeaponObject::Temp_object_Variable' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_C_AddSkeletalMeshComponentsFromWeaponObject, CallFunc_IsValid_ReturnValue) == 0x000010, "Member 'PlayerPawn_Athena_C_AddSkeletalMeshComponentsFromWeaponObject::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_C_AddSkeletalMeshComponentsFromWeaponObject, CallFunc_GetWeaponMeshes_WeaponMeshes) == 0x000018, "Member 'PlayerPawn_Athena_C_AddSkeletalMeshComponentsFromWeaponObject::CallFunc_GetWeaponMeshes_WeaponMeshes' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_C_AddSkeletalMeshComponentsFromWeaponObject, CallFunc_Array_Length_ReturnValue) == 0x000028, "Member 'PlayerPawn_Athena_C_AddSkeletalMeshComponentsFromWeaponObject::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_C_AddSkeletalMeshComponentsFromWeaponObject, Temp_int_Array_Index_Variable) == 0x00002C, "Member 'PlayerPawn_Athena_C_AddSkeletalMeshComponentsFromWeaponObject::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_C_AddSkeletalMeshComponentsFromWeaponObject, Temp_bool_Variable) == 0x000030, "Member 'PlayerPawn_Athena_C_AddSkeletalMeshComponentsFromWeaponObject::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_C_AddSkeletalMeshComponentsFromWeaponObject, CallFunc_Array_Get_Item) == 0x000038, "Member 'PlayerPawn_Athena_C_AddSkeletalMeshComponentsFromWeaponObject::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_C_AddSkeletalMeshComponentsFromWeaponObject, CallFunc_GetMaterials_ReturnValue) == 0x000040, "Member 'PlayerPawn_Athena_C_AddSkeletalMeshComponentsFromWeaponObject::CallFunc_GetMaterials_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_C_AddSkeletalMeshComponentsFromWeaponObject, CallFunc_PawnIsNPC_ReturnValue) == 0x000050, "Member 'PlayerPawn_Athena_C_AddSkeletalMeshComponentsFromWeaponObject::CallFunc_PawnIsNPC_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_C_AddSkeletalMeshComponentsFromWeaponObject, K2Node_Select_Default) == 0x000058, "Member 'PlayerPawn_Athena_C_AddSkeletalMeshComponentsFromWeaponObject::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_C_AddSkeletalMeshComponentsFromWeaponObject, CallFunc_SetupDissolveFx_ReturnValue) == 0x000060, "Member 'PlayerPawn_Athena_C_AddSkeletalMeshComponentsFromWeaponObject::CallFunc_SetupDissolveFx_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_C_AddSkeletalMeshComponentsFromWeaponObject, CallFunc_Array_AddUnique_ReturnValue) == 0x000064, "Member 'PlayerPawn_Athena_C_AddSkeletalMeshComponentsFromWeaponObject::CallFunc_Array_AddUnique_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_C_AddSkeletalMeshComponentsFromWeaponObject, Temp_int_Loop_Counter_Variable) == 0x000068, "Member 'PlayerPawn_Athena_C_AddSkeletalMeshComponentsFromWeaponObject::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_C_AddSkeletalMeshComponentsFromWeaponObject, CallFunc_Less_IntInt_ReturnValue) == 0x00006C, "Member 'PlayerPawn_Athena_C_AddSkeletalMeshComponentsFromWeaponObject::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_C_AddSkeletalMeshComponentsFromWeaponObject, CallFunc_Add_IntInt_ReturnValue) == 0x000070, "Member 'PlayerPawn_Athena_C_AddSkeletalMeshComponentsFromWeaponObject::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");

struct PlayerPawn_Athena_C_ApplyColdTag_Retry final
{
public:
	class UFortAbilitySystemComponent*            AbilitySystemComponent_0;
	class AFortPlayerPawn*                        AffectedPawn;
};
static_assert(alignof(PlayerPawn_Athena_C_ApplyColdTag_Retry) == 0x000008, "Wrong alignment on PlayerPawn_Athena_C_ApplyColdTag_Retry");
static_assert(sizeof(PlayerPawn_Athena_C_ApplyColdTag_Retry) == 0x000010, "Wrong size on PlayerPawn_Athena_C_ApplyColdTag_Retry");
static_assert(offsetof(PlayerPawn_Athena_C_ApplyColdTag_Retry, AbilitySystemComponent_0) == 0x000000, "Member 'PlayerPawn_Athena_C_ApplyColdTag_Retry::AbilitySystemComponent_0' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_C_ApplyColdTag_Retry, AffectedPawn) == 0x000008, "Member 'PlayerPawn_Athena_C_ApplyColdTag_Retry::AffectedPawn' has a wrong offset!");

struct PlayerPawn_Athena_C_ApplyPawnHighlight final
{
public:
	class UObject*                                Source;
	struct FPawnHighlight                         HitGlow;
	double                                        CallFunc_Add_DoubleDouble_ReturnValue;
	int32                                         Temp_int_Loop_Counter_Variable;
	int32                                         Temp_int_Array_Index_Variable;
	int32                                         CallFunc_Add_IntInt_ReturnValue;
	int32                                         CallFunc_Array_Length_ReturnValue;
	class UMaterialInstanceDynamic*               CallFunc_Array_Get_Item;
	bool                                          CallFunc_Less_IntInt_ReturnValue;
	uint8                                         Pad_59[0x7];
	double                                        K2Node_VariableSet_Current_Highlight_Priority_ImplicitCast;
	double                                        CallFunc_Add_DoubleDouble_A_ImplicitCast;
	float                                         CallFunc_SetScalarParameterValue_Value_ImplicitCast;
};
static_assert(alignof(PlayerPawn_Athena_C_ApplyPawnHighlight) == 0x000008, "Wrong alignment on PlayerPawn_Athena_C_ApplyPawnHighlight");
static_assert(sizeof(PlayerPawn_Athena_C_ApplyPawnHighlight) == 0x000078, "Wrong size on PlayerPawn_Athena_C_ApplyPawnHighlight");
static_assert(offsetof(PlayerPawn_Athena_C_ApplyPawnHighlight, Source) == 0x000000, "Member 'PlayerPawn_Athena_C_ApplyPawnHighlight::Source' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_C_ApplyPawnHighlight, HitGlow) == 0x000008, "Member 'PlayerPawn_Athena_C_ApplyPawnHighlight::HitGlow' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_C_ApplyPawnHighlight, CallFunc_Add_DoubleDouble_ReturnValue) == 0x000038, "Member 'PlayerPawn_Athena_C_ApplyPawnHighlight::CallFunc_Add_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_C_ApplyPawnHighlight, Temp_int_Loop_Counter_Variable) == 0x000040, "Member 'PlayerPawn_Athena_C_ApplyPawnHighlight::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_C_ApplyPawnHighlight, Temp_int_Array_Index_Variable) == 0x000044, "Member 'PlayerPawn_Athena_C_ApplyPawnHighlight::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_C_ApplyPawnHighlight, CallFunc_Add_IntInt_ReturnValue) == 0x000048, "Member 'PlayerPawn_Athena_C_ApplyPawnHighlight::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_C_ApplyPawnHighlight, CallFunc_Array_Length_ReturnValue) == 0x00004C, "Member 'PlayerPawn_Athena_C_ApplyPawnHighlight::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_C_ApplyPawnHighlight, CallFunc_Array_Get_Item) == 0x000050, "Member 'PlayerPawn_Athena_C_ApplyPawnHighlight::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_C_ApplyPawnHighlight, CallFunc_Less_IntInt_ReturnValue) == 0x000058, "Member 'PlayerPawn_Athena_C_ApplyPawnHighlight::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_C_ApplyPawnHighlight, K2Node_VariableSet_Current_Highlight_Priority_ImplicitCast) == 0x000060, "Member 'PlayerPawn_Athena_C_ApplyPawnHighlight::K2Node_VariableSet_Current_Highlight_Priority_ImplicitCast' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_C_ApplyPawnHighlight, CallFunc_Add_DoubleDouble_A_ImplicitCast) == 0x000068, "Member 'PlayerPawn_Athena_C_ApplyPawnHighlight::CallFunc_Add_DoubleDouble_A_ImplicitCast' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_C_ApplyPawnHighlight, CallFunc_SetScalarParameterValue_Value_ImplicitCast) == 0x000070, "Member 'PlayerPawn_Athena_C_ApplyPawnHighlight::CallFunc_SetScalarParameterValue_Value_ImplicitCast' has a wrong offset!");

struct PlayerPawn_Athena_C_AttemptToSetRimLight final
{
public:
	bool                                          CallFunc_IsValid_ReturnValue;
	bool                                          CallFunc_Array_IsValidIndex_ReturnValue;
};
static_assert(alignof(PlayerPawn_Athena_C_AttemptToSetRimLight) == 0x000001, "Wrong alignment on PlayerPawn_Athena_C_AttemptToSetRimLight");
static_assert(sizeof(PlayerPawn_Athena_C_AttemptToSetRimLight) == 0x000002, "Wrong size on PlayerPawn_Athena_C_AttemptToSetRimLight");
static_assert(offsetof(PlayerPawn_Athena_C_AttemptToSetRimLight, CallFunc_IsValid_ReturnValue) == 0x000000, "Member 'PlayerPawn_Athena_C_AttemptToSetRimLight::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_C_AttemptToSetRimLight, CallFunc_Array_IsValidIndex_ReturnValue) == 0x000001, "Member 'PlayerPawn_Athena_C_AttemptToSetRimLight::CallFunc_Array_IsValidIndex_ReturnValue' has a wrong offset!");

struct PlayerPawn_Athena_C_CleanupDissolveFX final
{
public:
	bool                                          Temp_bool_Variable;
	uint8                                         Pad_1[0x7];
	class UMaterialInterface*                     Temp_object_Variable;
	bool                                          CallFunc_PawnIsNPC_ReturnValue;
	uint8                                         Pad_11[0x7];
	class UMaterialInterface*                     K2Node_Select_Default;
};
static_assert(alignof(PlayerPawn_Athena_C_CleanupDissolveFX) == 0x000008, "Wrong alignment on PlayerPawn_Athena_C_CleanupDissolveFX");
static_assert(sizeof(PlayerPawn_Athena_C_CleanupDissolveFX) == 0x000020, "Wrong size on PlayerPawn_Athena_C_CleanupDissolveFX");
static_assert(offsetof(PlayerPawn_Athena_C_CleanupDissolveFX, Temp_bool_Variable) == 0x000000, "Member 'PlayerPawn_Athena_C_CleanupDissolveFX::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_C_CleanupDissolveFX, Temp_object_Variable) == 0x000008, "Member 'PlayerPawn_Athena_C_CleanupDissolveFX::Temp_object_Variable' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_C_CleanupDissolveFX, CallFunc_PawnIsNPC_ReturnValue) == 0x000010, "Member 'PlayerPawn_Athena_C_CleanupDissolveFX::CallFunc_PawnIsNPC_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_C_CleanupDissolveFX, K2Node_Select_Default) == 0x000018, "Member 'PlayerPawn_Athena_C_CleanupDissolveFX::K2Node_Select_Default' has a wrong offset!");

struct PlayerPawn_Athena_C_CleanUpTeleportationFXLight final
{
public:
	bool                                          CallFunc_IsValid_ReturnValue;
};
static_assert(alignof(PlayerPawn_Athena_C_CleanUpTeleportationFXLight) == 0x000001, "Wrong alignment on PlayerPawn_Athena_C_CleanUpTeleportationFXLight");
static_assert(sizeof(PlayerPawn_Athena_C_CleanUpTeleportationFXLight) == 0x000001, "Wrong size on PlayerPawn_Athena_C_CleanUpTeleportationFXLight");
static_assert(offsetof(PlayerPawn_Athena_C_CleanUpTeleportationFXLight, CallFunc_IsValid_ReturnValue) == 0x000000, "Member 'PlayerPawn_Athena_C_CleanUpTeleportationFXLight::CallFunc_IsValid_ReturnValue' has a wrong offset!");

struct PlayerPawn_Athena_C_ClientRunSnowGC final
{
public:
	bool                                          Instant;
};
static_assert(alignof(PlayerPawn_Athena_C_ClientRunSnowGC) == 0x000001, "Wrong alignment on PlayerPawn_Athena_C_ClientRunSnowGC");
static_assert(sizeof(PlayerPawn_Athena_C_ClientRunSnowGC) == 0x000001, "Wrong size on PlayerPawn_Athena_C_ClientRunSnowGC");
static_assert(offsetof(PlayerPawn_Athena_C_ClientRunSnowGC, Instant) == 0x000000, "Member 'PlayerPawn_Athena_C_ClientRunSnowGC::Instant' has a wrong offset!");

struct PlayerPawn_Athena_C_EnableWaterAudio final
{
public:
	bool                                          Is_Entering_Water;
	uint8                                         Pad_1[0x7];
	class USoundBase*                             Temp_object_Variable;
	class USoundBase*                             Temp_object_Variable_1;
	bool                                          Temp_bool_Variable;
	uint8                                         Pad_19[0x7];
	class USoundBase*                             Temp_object_Variable_2;
	class USoundBase*                             Temp_object_Variable_3;
	bool                                          Temp_bool_Variable_1;
	uint8                                         Pad_31[0x7];
	struct FVector                                CallFunc_GetVelocity_ReturnValue;
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue;
	double                                        CallFunc_VSize_ReturnValue;
	struct FVector                                CallFunc_Add_VectorVector_ReturnValue;
	double                                        CallFunc_MapRangeClamped_ReturnValue;
	bool                                          CallFunc_IsLocallyControlled_ReturnValue;
	uint8                                         Pad_91[0x7];
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue_1;
	struct FVector                                CallFunc_Add_VectorVector_ReturnValue_1;
	class USoundBase*                             K2Node_Select_Default;
	double                                        CallFunc_SelectFloat_ReturnValue;
	bool                                          CallFunc_IsLocallyControlled_ReturnValue_1;
	uint8                                         Pad_D9[0x7];
	class UAudioComponent*                        CallFunc_SpawnSoundAtLocation_ReturnValue;
	TScriptInterface<class IAudioParameterControllerInterface> CallFunc_SetFloatParameter_self_CastInput;
	class USoundBase*                             K2Node_Select_Default_1;
	float                                         CallFunc_SetFloatParameter_InFloat_ImplicitCast;
	float                                         CallFunc_SpawnSoundAtLocation_VolumeMultiplier_ImplicitCast;
};
static_assert(alignof(PlayerPawn_Athena_C_EnableWaterAudio) == 0x000008, "Wrong alignment on PlayerPawn_Athena_C_EnableWaterAudio");
static_assert(sizeof(PlayerPawn_Athena_C_EnableWaterAudio) == 0x000108, "Wrong size on PlayerPawn_Athena_C_EnableWaterAudio");
static_assert(offsetof(PlayerPawn_Athena_C_EnableWaterAudio, Is_Entering_Water) == 0x000000, "Member 'PlayerPawn_Athena_C_EnableWaterAudio::Is_Entering_Water' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_C_EnableWaterAudio, Temp_object_Variable) == 0x000008, "Member 'PlayerPawn_Athena_C_EnableWaterAudio::Temp_object_Variable' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_C_EnableWaterAudio, Temp_object_Variable_1) == 0x000010, "Member 'PlayerPawn_Athena_C_EnableWaterAudio::Temp_object_Variable_1' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_C_EnableWaterAudio, Temp_bool_Variable) == 0x000018, "Member 'PlayerPawn_Athena_C_EnableWaterAudio::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_C_EnableWaterAudio, Temp_object_Variable_2) == 0x000020, "Member 'PlayerPawn_Athena_C_EnableWaterAudio::Temp_object_Variable_2' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_C_EnableWaterAudio, Temp_object_Variable_3) == 0x000028, "Member 'PlayerPawn_Athena_C_EnableWaterAudio::Temp_object_Variable_3' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_C_EnableWaterAudio, Temp_bool_Variable_1) == 0x000030, "Member 'PlayerPawn_Athena_C_EnableWaterAudio::Temp_bool_Variable_1' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_C_EnableWaterAudio, CallFunc_GetVelocity_ReturnValue) == 0x000038, "Member 'PlayerPawn_Athena_C_EnableWaterAudio::CallFunc_GetVelocity_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_C_EnableWaterAudio, CallFunc_K2_GetActorLocation_ReturnValue) == 0x000050, "Member 'PlayerPawn_Athena_C_EnableWaterAudio::CallFunc_K2_GetActorLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_C_EnableWaterAudio, CallFunc_VSize_ReturnValue) == 0x000068, "Member 'PlayerPawn_Athena_C_EnableWaterAudio::CallFunc_VSize_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_C_EnableWaterAudio, CallFunc_Add_VectorVector_ReturnValue) == 0x000070, "Member 'PlayerPawn_Athena_C_EnableWaterAudio::CallFunc_Add_VectorVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_C_EnableWaterAudio, CallFunc_MapRangeClamped_ReturnValue) == 0x000088, "Member 'PlayerPawn_Athena_C_EnableWaterAudio::CallFunc_MapRangeClamped_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_C_EnableWaterAudio, CallFunc_IsLocallyControlled_ReturnValue) == 0x000090, "Member 'PlayerPawn_Athena_C_EnableWaterAudio::CallFunc_IsLocallyControlled_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_C_EnableWaterAudio, CallFunc_K2_GetActorLocation_ReturnValue_1) == 0x000098, "Member 'PlayerPawn_Athena_C_EnableWaterAudio::CallFunc_K2_GetActorLocation_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_C_EnableWaterAudio, CallFunc_Add_VectorVector_ReturnValue_1) == 0x0000B0, "Member 'PlayerPawn_Athena_C_EnableWaterAudio::CallFunc_Add_VectorVector_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_C_EnableWaterAudio, K2Node_Select_Default) == 0x0000C8, "Member 'PlayerPawn_Athena_C_EnableWaterAudio::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_C_EnableWaterAudio, CallFunc_SelectFloat_ReturnValue) == 0x0000D0, "Member 'PlayerPawn_Athena_C_EnableWaterAudio::CallFunc_SelectFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_C_EnableWaterAudio, CallFunc_IsLocallyControlled_ReturnValue_1) == 0x0000D8, "Member 'PlayerPawn_Athena_C_EnableWaterAudio::CallFunc_IsLocallyControlled_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_C_EnableWaterAudio, CallFunc_SpawnSoundAtLocation_ReturnValue) == 0x0000E0, "Member 'PlayerPawn_Athena_C_EnableWaterAudio::CallFunc_SpawnSoundAtLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_C_EnableWaterAudio, CallFunc_SetFloatParameter_self_CastInput) == 0x0000E8, "Member 'PlayerPawn_Athena_C_EnableWaterAudio::CallFunc_SetFloatParameter_self_CastInput' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_C_EnableWaterAudio, K2Node_Select_Default_1) == 0x0000F8, "Member 'PlayerPawn_Athena_C_EnableWaterAudio::K2Node_Select_Default_1' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_C_EnableWaterAudio, CallFunc_SetFloatParameter_InFloat_ImplicitCast) == 0x000100, "Member 'PlayerPawn_Athena_C_EnableWaterAudio::CallFunc_SetFloatParameter_InFloat_ImplicitCast' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_C_EnableWaterAudio, CallFunc_SpawnSoundAtLocation_VolumeMultiplier_ImplicitCast) == 0x000104, "Member 'PlayerPawn_Athena_C_EnableWaterAudio::CallFunc_SpawnSoundAtLocation_VolumeMultiplier_ImplicitCast' has a wrong offset!");

struct PlayerPawn_Athena_C_ExecuteUbergraph_PlayerPawn_Athena final
{
public:
	int32                                         EntryPoint;
	TDelegate<void(const class FString& CVarName)> K2Node_CreateDelegate_OutputDelegate;
	bool                                          CallFunc_IsMobilePlatform_ReturnValue;
	bool                                          CallFunc_IsMobilePlatform_ReturnValue_1;
	EGameplayCueEvent                             K2Node_GameplayCueEvent_EventType_7;
	uint8                                         Pad_13[0x5];
	struct FGameplayCueParameters                 K2Node_GameplayCueEvent_Parameters_7;
	bool                                          K2Node_SwitchEnum_CmpSuccess;
	bool                                          CallFunc_IsLocallyControlled_ReturnValue;
	bool                                          CallFunc_IsLocallyControlled_ReturnValue_1;
	bool                                          CallFunc_BooleanAND_ReturnValue;
	bool                                          CallFunc_BooleanAND_ReturnValue_1;
	EEndPlayReason                                K2Node_Event_EndPlayReason;
	uint8                                         Pad_EE[0x2];
	struct FRotator                               CallFunc_K2_GetComponentRotation_ReturnValue;
	class UParticleSystemComponent*               CallFunc_SpawnEmitterAttached_ReturnValue;
	struct FVector                                CallFunc_K2_GetComponentLocation_ReturnValue;
	class UParticleSystemComponent*               CallFunc_SpawnEmitterAtLocation_ReturnValue;
	EGameplayCueEvent                             K2Node_GameplayCueEvent_EventType_8;
	uint8                                         Pad_131[0x7];
	struct FGameplayCueParameters                 K2Node_GameplayCueEvent_Parameters_8;
	bool                                          CallFunc_NotEqual_BoolBool_ReturnValue;
	bool                                          K2Node_SwitchEnum_CmpSuccess_1;
	uint8                                         Pad_20A[0x6];
	double                                        Temp_real_Variable;
	class AFortPlayerPawn*                        K2Node_CustomEvent_Pawn_1;
	TDelegate<void(class AFortPlayerPawn* Pawn)>  K2Node_CreateDelegate_OutputDelegate_1;
	uint8                                         Pad_22C[0x4];
	struct FVector                                CallFunc_K2_GetComponentLocation_ReturnValue_1;
	class AGameStateBase*                         CallFunc_GetGameState_ReturnValue;
	class UParticleSystemComponent*               CallFunc_SpawnEmitterAtLocation_ReturnValue_1;
	class AFortGameStateAthena*                   K2Node_DynamicCast_AsFort_Game_State_Athena;
	bool                                          K2Node_DynamicCast_bSuccess;
	uint8                                         Pad_261[0x3];
	int32                                         CallFunc_GetSafeZonePhase_ReturnValue;
	class UAudioComponent*                        CallFunc_SpawnSoundAttached_ReturnValue;
	int32                                         Temp_int_Array_Index_Variable;
	uint8                                         Pad_274[0x4];
	struct FGameplayCueParameters                 CallFunc_MakeGameplayCueParameters_ReturnValue;
	int32                                         K2Node_CustomEvent_InSafeZonePhase;
	bool                                          K2Node_CustomEvent_bSpawnGameplayCue_1;
	uint8                                         Pad_34D[0x3];
	int32                                         K2Node_CustomEvent_NewWhichSafeZoneTag;
	struct FGameplayTag                           K2Node_CustomEvent_GameplayTag;
	bool                                          K2Node_CustomEvent_bSpawnGameplayCue;
	uint8                                         Pad_359[0x3];
	int32                                         K2Node_Event_SafeZonePhase;
	bool                                          CallFunc_NotEqual_IntInt_ReturnValue;
	bool                                          K2Node_Event_First_Left;
	uint8                                         Pad_362[0x6];
	class UAudioComponent*                        CallFunc_SpawnSoundAttached_ReturnValue_1;
	class UParticleSystemComponent*               CallFunc_SpawnEmitterAttached_ReturnValue_1;
	bool                                          K2Node_Event_First_Right;
	EGameplayCueEvent                             K2Node_GameplayCueEvent_EventType_6;
	uint8                                         Pad_37A[0x6];
	struct FGameplayCueParameters                 K2Node_GameplayCueEvent_Parameters_6;
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue;
	bool                                          K2Node_SwitchEnum_CmpSuccess_2;
	uint8                                         Pad_469[0x7];
	double                                        K2Node_CustomEvent_Duration;
	bool                                          CallFunc_Greater_DoubleDouble_ReturnValue;
	uint8                                         Pad_479[0x7];
	struct FGameplayCueParameters                 CallFunc_MakeGameplayCueParameters_ReturnValue_1;
	EGameplayCueEvent                             K2Node_GameplayCueEvent_EventType_9;
	uint8                                         Pad_551[0x7];
	struct FGameplayCueParameters                 K2Node_GameplayCueEvent_Parameters_9;
	double                                        Temp_real_Variable_1;
	float                                         CallFunc_BreakGameplayCueParameters_NormalizedMagnitude;
	float                                         CallFunc_BreakGameplayCueParameters_RawMagnitude;
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
	uint8                                         Pad_6F9[0x7];
	class APlayerController*                      CallFunc_GetLocalViewingPlayerController_ReturnValue;
	class AFortPlayerControllerSpectating*        K2Node_DynamicCast_AsFort_Player_Controller_Spectating;
	bool                                          K2Node_DynamicCast_bSuccess_1;
	EGameplayCueEvent                             K2Node_GameplayCueEvent_EventType_10;
	uint8                                         Pad_712[0x6];
	struct FGameplayCueParameters                 K2Node_GameplayCueEvent_Parameters_10;
	bool                                          CallFunc_IsLocallyControlled_ReturnValue_2;
	uint8                                         Pad_7E9[0x7];
	class APlayerController*                      CallFunc_GetLocalViewingPlayerController_ReturnValue_1;
	class AFortPlayerControllerSpectating*        K2Node_DynamicCast_AsFort_Player_Controller_Spectating_1;
	bool                                          K2Node_DynamicCast_bSuccess_2;
	bool                                          CallFunc_IsLocallyControlled_ReturnValue_3;
	uint8                                         Pad_802[0x2];
	float                                         K2Node_Event_Damage_1;
	struct FGameplayTagContainer                  K2Node_Event_DamageTags_1;
	struct FVector                                K2Node_Event_Momentum_1;
	struct FHitResult                             K2Node_Event_HitInfo_1;
	class AFortPawn*                              K2Node_Event_InstigatedBy_1;
	class AActor*                                 K2Node_Event_DamageCauser_1;
	struct FGameplayEffectContextHandle           K2Node_Event_EffectContext_1;
	TScriptInterface<class IGameplayTagAssetInterface> CallFunc_HasAllMatchingGameplayTags_TagContainerInterface_CastInput;
	bool                                          CallFunc_HasAllMatchingGameplayTags_ReturnValue;
	EGameplayCueEvent                             K2Node_GameplayCueEvent_EventType_5;
	uint8                                         Pad_95A[0x6];
	struct FGameplayCueParameters                 K2Node_GameplayCueEvent_Parameters_5;
	double                                        K2Node_CustomEvent_SecondsTillTeleport;
	struct FVector                                K2Node_CustomEvent_DestLocation_1;
	struct FRotator                               K2Node_CustomEvent_DestRotation_1;
	bool                                          K2Node_CustomEvent_Instant_1;
	uint8                                         Pad_A69[0x7];
	struct FVector                                K2Node_CustomEvent_DestLocation;
	struct FRotator                               K2Node_CustomEvent_DestRotation;
	bool                                          K2Node_CustomEvent_Instant;
	uint8                                         Pad_AA1[0x7];
	double                                        K2Node_CustomEvent_Gravity;
	float                                         CallFunc_Conv_BoolToFloat_ReturnValue;
	bool                                          CallFunc_EqualEqual_DoubleDouble_ReturnValue;
	uint8                                         Pad_AB5[0x3];
	struct FGameplayCueParameters                 CallFunc_MakeGameplayCueParameters_ReturnValue_2;
	bool                                          CallFunc_EqualEqual_DoubleDouble_ReturnValue_1;
	bool                                          CallFunc_K2_TeleportTo_ReturnValue;
	bool                                          CallFunc_IsLocallyControlled_ReturnValue_4;
	uint8                                         Pad_B8B[0x5];
	class APlayerController*                      CallFunc_GetLocalViewingPlayerController_ReturnValue_2;
	EGameplayCueEvent                             K2Node_GameplayCueEvent_EventType_11;
	uint8                                         Pad_B99[0x7];
	struct FGameplayCueParameters                 K2Node_GameplayCueEvent_Parameters_11;
	class AFortPlayerControllerSpectating*        K2Node_DynamicCast_AsFort_Player_Controller_Spectating_2;
	bool                                          K2Node_DynamicCast_bSuccess_3;
	EGameplayCueEvent                             K2Node_GameplayCueEvent_EventType_4;
	uint8                                         Pad_C7A[0x6];
	struct FGameplayCueParameters                 K2Node_GameplayCueEvent_Parameters_4;
	class UAbilitySystemComponent*                CallFunc_GetAbilitySystemComponent_ReturnValue;
	struct FActiveGameplayEffectHandle            CallFunc_BP_ApplyGameplayEffectToSelf_ReturnValue;
	struct FGameplayCueParameters                 CallFunc_MakeGameplayCueParameters_ReturnValue_3;
	int32                                         Temp_int_Loop_Counter_Variable;
	uint8                                         Pad_E34[0x4];
	struct FVector                                CallFunc_K2_GetComponentLocation_ReturnValue_2;
	int32                                         CallFunc_Add_IntInt_ReturnValue;
	bool                                          Temp_bool_Variable;
	uint8                                         Pad_E55[0x3];
	int32                                         CallFunc_Array_Length_ReturnValue;
	uint8                                         Pad_E5C[0x4];
	double                                        K2Node_Select_Default;
	bool                                          CallFunc_Greater_IntInt_ReturnValue;
	uint8                                         Pad_E69[0x3];
	float                                         CallFunc_Conv_IntToFloat_ReturnValue;
	class APlayerController*                      CallFunc_GetLocalViewingPlayerController_ReturnValue_3;
	float                                         CallFunc_GetValueAtLevel_ReturnValue;
	uint8                                         Pad_E7C[0x4];
	class AFortPlayerControllerSpectating*        K2Node_DynamicCast_AsFort_Player_Controller_Spectating_3;
	bool                                          K2Node_DynamicCast_bSuccess_4;
	bool                                          CallFunc_Less_DoubleDouble_ReturnValue;
	bool                                          CallFunc_LessEqual_DoubleDouble_ReturnValue;
	uint8                                         Pad_E8B[0x5];
	TScriptInterface<class IFortVehicleInterface> CallFunc_GetVehicleUInterface_ReturnValue;
	class AFortPlayerPawn*                        CallFunc_GetDriver_ReturnValue;
	class UObject*                                CallFunc_Conv_InterfaceToObject_ReturnValue;
	class AActor*                                 CallFunc_GetVehicleActorPtrConst_ReturnValue;
	bool                                          CallFunc_IsValid_ReturnValue;
	uint8                                         Pad_EB9[0x7];
	class AFortCharacterVehicle*                  K2Node_DynamicCast_AsFort_Character_Vehicle;
	bool                                          K2Node_DynamicCast_bSuccess_5;
	bool                                          CallFunc_IsLocallyControlled_ReturnValue_5;
	bool                                          CallFunc_EqualEqual_ObjectObject_ReturnValue;
	bool                                          CallFunc_IsValid_ReturnValue_1;
	uint8                                         Pad_ECC[0x4];
	class AFortWaterBodyActor*                    K2Node_Event_WaterBody_1;
	bool                                          K2Node_Event_bIsFirstBody;
	uint8                                         Pad_ED9[0x7];
	class AFortWaterBodyActor*                    K2Node_Event_WaterBody;
	bool                                          K2Node_Event_bIsLastBody;
	EMovementMode                                 K2Node_Event_PrevMovementMode;
	EMovementMode                                 K2Node_Event_NewMovementMode;
	uint8                                         K2Node_Event_PrevCustomMode;
	uint8                                         K2Node_Event_NewCustomMode;
	bool                                          CallFunc_IsSurfaceSwimming_ReturnValue;
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;
	bool                                          CallFunc_IsValid_ReturnValue_2;
	bool                                          CallFunc_IsDedicatedServer_ReturnValue;
	uint8                                         Pad_EF1[0x3];
	float                                         CallFunc_GetNumericCVar_OutValue;
	bool                                          CallFunc_GetNumericCVar_ReturnValue;
	bool                                          CallFunc_EqualEqual_DoubleDouble_ReturnValue_2;
	bool                                          CallFunc_IsInVehicle_ReturnValue;
	bool                                          CallFunc_IsInAthena_ReturnValue;
	uint8                                         Pad_EFC[0x4];
	struct FGameplayEventData                     K2Node_MakeStruct_GameplayEventData;
	bool                                          CallFunc_IsDedicatedServer_ReturnValue_1;
	bool                                          Temp_bool_IsClosed_Variable;
	bool                                          Temp_bool_Has_Been_Initd_Variable;
	uint8                                         Pad_FB3[0x5];
	class AGameStateBase*                         CallFunc_GetGameState_ReturnValue_1;
	class AFortGameStateAthena*                   K2Node_DynamicCast_AsFort_Game_State_Athena_1;
	bool                                          K2Node_DynamicCast_bSuccess_6;
	bool                                          CallFunc_IsStormCN_ReturnValue;
	uint8                                         Pad_FCA[0x6];
	struct FVector                                CallFunc_GetLastWaterSurfaceInfo_OutWaterSurfacePosition;
	struct FVector                                CallFunc_GetLastWaterSurfaceInfo_OutWaterSurfaceNormal;
	class AController*                            K2Node_Event_NewController;
	float                                         CallFunc_GetWaterImmersionDepth_ReturnValue;
	uint8                                         Pad_100C[0x4];
	double                                        CallFunc_MapRangeClamped_ReturnValue;
	class AFortWaterBodyActor*                    CallFunc_GetCurrentWaterBody_ReturnValue;
	class UFortMovementComp_Character*            K2Node_DynamicCast_AsFort_Movement_Comp_Character;
	bool                                          K2Node_DynamicCast_bSuccess_7;
	bool                                          CallFunc_IsValid_ReturnValue_3;
	bool                                          CallFunc_IsMovingOnGround_ReturnValue;
	bool                                          CallFunc_BooleanAND_ReturnValue_2;
	uint8                                         Pad_102C[0x4];
	struct FVector                                CallFunc_GetWaterSurfaceLocation_ReturnValue;
	struct FGameplayCueParameters                 CallFunc_MakeGameplayCueParameters_ReturnValue_4;
	bool                                          CallFunc_IsLocallyControlled_ReturnValue_6;
	bool                                          K2Node_CustomEvent_isHidden_1;
	uint8                                         Pad_111A[0x6];
	class UDataDrivenCVarEngineSubsystem*         CallFunc_GetEngineSubsystem_ReturnValue;
	class UAbilitySystemComponent*                CallFunc_GetAbilitySystemComponent_ReturnValue_1;
	struct FActiveGameplayEffectHandle            CallFunc_BP_ApplyGameplayEffectToSelf_ReturnValue_1;
	struct FVector                                CallFunc_Multiply_VectorFloat_ReturnValue;
	struct FVector                                CallFunc_Divide_VectorFloat_ReturnValue;
	class APawn*                                  K2Node_Event_LastTetherPawn_1;
	class APawn*                                  K2Node_Event_LastTetherPawn;
	class USceneComponent*                        CallFunc_K2_GetRootComponent_ReturnValue;
	class AFortPlayerController*                  CallFunc_GetFortPlayerControllerFromActor_ReturnValue;
	class UAudioComponent*                        CallFunc_SpawnSoundAttached_ReturnValue_2;
	class UFortQuestManager*                      CallFunc_GetQuestManager_ReturnValue;
	class APawn*                                  CallFunc_GetTetherPawn_ReturnValue;
	TScriptInterface<class IGameplayTagAssetInterface> K2Node_DynamicCast_AsGameplay_Tag_Asset_Interface;
	bool                                          K2Node_DynamicCast_bSuccess_8;
	uint8                                         Pad_11B1[0x7];
	struct FGameplayTagContainer                  CallFunc_GetOwnedGameplayTags_TagContainer;
	struct FGameplayEventData                     K2Node_MakeStruct_GameplayEventData_1;
	struct FRotator                               CallFunc_GetControlRotation_ReturnValue;
	struct FRotator                               K2Node_CustomEvent_PlayerAimRotation;
	struct FTimerHandle                           CallFunc_K2_SetTimer_ReturnValue;
	TDelegate<void(class AFortPlayerPawn* Pawn, class UCustomCharacterPart* Part, class USkeletalMeshComponent* MeshPart, EFortCustomPartType PartType)> K2Node_CreateDelegate_OutputDelegate_2;
	uint8                                         Pad_12CC[0x4];
	struct FDelegateHandleController              CallFunc_WhenCosmeticPartApplied_DelegateHandleController_Out;
	float                                         CallFunc_GetValueAtLevel_ReturnValue_1;
	uint8                                         Pad_12E4[0x4];
	struct FGameplayCueParameters                 CallFunc_MakeGameplayCueParameters_ReturnValue_5;
	struct FTimerHandle                           CallFunc_K2_SetTimer_ReturnValue_1;
	struct FGameplayCueParameters                 CallFunc_MakeGameplayCueParameters_ReturnValue_6;
	struct FGameplayCueParameters                 CallFunc_MakeGameplayCueParameters_ReturnValue_7;
	struct FGameplayCueParameters                 CallFunc_MakeGameplayCueParameters_ReturnValue_8;
	bool                                          Temp_bool_Has_Been_Initd_Variable_1;
	bool                                          Temp_bool_IsClosed_Variable_1;
	EGameplayCueEvent                             K2Node_GameplayCueEvent_EventType_3;
	uint8                                         Pad_1633[0x5];
	struct FGameplayCueParameters                 K2Node_GameplayCueEvent_Parameters_3;
	EGameplayCueEvent                             K2Node_GameplayCueEvent_EventType_2;
	uint8                                         Pad_1709[0x7];
	struct FGameplayCueParameters                 K2Node_GameplayCueEvent_Parameters_2;
	EGameplayCueEvent                             K2Node_GameplayCueEvent_EventType_1;
	uint8                                         Pad_17E1[0x7];
	struct FGameplayCueParameters                 K2Node_GameplayCueEvent_Parameters_1;
	EGameplayCueEvent                             K2Node_GameplayCueEvent_EventType;
	uint8                                         Pad_18B9[0x7];
	struct FGameplayCueParameters                 K2Node_GameplayCueEvent_Parameters;
	struct FTransform                             Temp_struct_Variable;
	class UAbilitySystemComponent*                CallFunc_GetAbilitySystemComponent_ReturnValue_2;
	struct FActiveGameplayEffectHandle            CallFunc_BP_ApplyGameplayEffectToSelf_ReturnValue_2;
	class UPostProcessComponent*                  CallFunc_AddComponent_ReturnValue;
	struct FActiveGameplayEffectHandle            CallFunc_BP_ApplyGameplayEffectToSelf_ReturnValue_3;
	bool                                          CallFunc_IsValid_ReturnValue_4;
	uint8                                         Pad_1A11[0x7];
	class UFortAbilitySystemComponent*            K2Node_CustomEvent_AbilitySystemComponent;
	class AFortPlayerPawn*                        K2Node_CustomEvent_AffectedPawn;
	class UFortAsyncAction_CurrentPlaylistReady*  CallFunc_PlaylistDataReadyAsync_ReturnValue;
	class AFortGameStateAthena*                   Temp_object_Variable;
	bool                                          CallFunc_IsValid_ReturnValue_5;
	bool                                          CallFunc_IsDedicatedServer_ReturnValue_2;
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_1;
	bool                                          Temp_bool_Has_Been_Initd_Variable_2;
	uint8                                         Pad_1A3C[0x4];
	struct FGameplayCueParameters                 CallFunc_MakeGameplayCueParameters_ReturnValue_9;
	class UFortPlaylist*                          Temp_object_Variable_1;
	struct FGameplayTagContainer                  Temp_struct_Variable_1;
	struct FGameplayCueParameters                 CallFunc_MakeGameplayCueParameters_ReturnValue_10;
	class AFortGameStateAthena*                   K2Node_CustomEvent_GameState;
	const class UFortPlaylist*                    K2Node_CustomEvent_Playlist;
	struct FGameplayTagContainer                  K2Node_CustomEvent_PlaylistContextTags;
	TDelegate<void(class AFortGameStateAthena* GameState, class UFortPlaylist* Playlist, struct FGameplayTagContainer& PlaylistContextTags)> K2Node_CreateDelegate_OutputDelegate_3;
	uint8                                         Pad_1C44[0x4];
	class UFortAnimInputEvent*                    CallFunc_CreateAnimInputEvent_ReturnValue;
	class UFortAnimInputEvent*                    CallFunc_CreateAnimInputEvent_ReturnValue_1;
	class UFortAnimInputEvent*                    CallFunc_CreateAnimInputEvent_ReturnValue_2;
	class UFortAnimInputEvent*                    CallFunc_CreateAnimInputEvent_ReturnValue_3;
	bool                                          Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable;
	uint8                                         Pad_1C69[0x7];
	class UObject*                                K2Node_Event_Source_1;
	struct FPawnHighlight                         K2Node_Event_Highlight;
	bool                                          K2Node_Event_OnlyUpdateIfCurrent;
	uint8                                         Pad_1CA9[0x7];
	class UObject*                                K2Node_Event_Source;
	class UPrimitiveComponent*                    K2Node_Event_MyComp;
	class AActor*                                 K2Node_Event_Other;
	class UPrimitiveComponent*                    K2Node_Event_OtherComp;
	bool                                          K2Node_Event_bSelfMoved;
	uint8                                         Pad_1CD1[0x7];
	struct FVector                                K2Node_Event_HitLocation_1;
	struct FVector                                K2Node_Event_HitNormal;
	struct FVector                                K2Node_Event_NormalImpulse;
	struct FHitResult                             K2Node_Event_Hit;
	bool                                          Temp_bool_IsClosed_Variable_2;
	bool                                          CallFunc_IsDedicatedServer_ReturnValue_3;
	bool                                          CallFunc_IsDedicatedServer_ReturnValue_4;
	bool                                          CallFunc_GetPawnIsInLocalSquad_IsInLocalSquad;
	float                                         K2Node_Event_DamageDealt;
	bool                                          K2Node_Event_bCriticalHit;
	bool                                          K2Node_Event_bFatalHit;
	bool                                          K2Node_Event_bShieldHit;
	uint8                                         Pad_1E0B[0x5];
	class AActor*                                 K2Node_Event_HitActor;
	struct FGameplayTagContainer                  K2Node_Event_HitTags;
	struct FVector                                K2Node_Event_HitLocation;
	bool                                          K2Node_CustomEvent_isHidden;
	uint8                                         Pad_1E51[0x3];
	TDelegate<void(class UFortAbilitySystemComponent* AbilitySystemComponent, class AFortPlayerPawn* AffectedPawn)> K2Node_CreateDelegate_OutputDelegate_4;
	struct FGameplayTagContainer                  Temp_struct_Variable_2;
	class AFortPlayerPawn*                        K2Node_CustomEvent_Pawn;
	class UCustomCharacterPart*                   K2Node_CustomEvent_Part;
	class USkeletalMeshComponent*                 K2Node_CustomEvent_MeshPart;
	EFortCustomPartType                           K2Node_CustomEvent_PartType;
	bool                                          CallFunc_IsValid_ReturnValue_6;
	uint8                                         Pad_1E9A[0x6];
	TArray<class USceneComponent*>                CallFunc_GetChildrenComponents_Children;
	class USceneComponent*                        CallFunc_Array_Get_Item;
	int32                                         CallFunc_Array_Length_ReturnValue_1;
	bool                                          CallFunc_Less_IntInt_ReturnValue;
	uint8                                         Pad_1EBD[0x3];
	class AActor*                                 CallFunc_GetOwner_ReturnValue;
	bool                                          CallFunc_IsValid_ReturnValue_7;
	bool                                          CallFunc_ComponentHasTag_ReturnValue;
	uint8                                         Pad_1ECA[0x6];
	struct FTimerHandle                           CallFunc_K2_SetTimer_ReturnValue_2;
	float                                         K2Node_Event_Damage;
	uint8                                         Pad_1EDC[0x4];
	struct FGameplayTagContainer                  K2Node_Event_DamageTags;
	struct FVector                                K2Node_Event_Momentum;
	struct FHitResult                             K2Node_Event_HitInfo;
	class AController*                            K2Node_Event_InstigatedBy;
	class AActor*                                 K2Node_Event_DamageCauser;
	struct FGameplayEffectContextHandle           K2Node_Event_EffectContext;
	class AFortPawn*                              K2Node_CustomEvent_FortPawn;
	bool                                          K2Node_CustomEvent_bInIsDBNO;
	uint8                                         Pad_2029[0x3];
	TDelegate<void(class AFortPawn* FortPawn, bool bInIsDBNO)> K2Node_CreateDelegate_OutputDelegate_5;
	uint8                                         CallFunc_GetActorTeam_ReturnValue;
	EFortTeamAffiliation                          CallFunc_GetTeamAffiliationToLocalPlayer_ReturnValue;
	uint8                                         Pad_203A[0x2];
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_6;
	bool                                          K2Node_SwitchEnum_CmpSuccess_3;
	uint8                                         Pad_2049[0x7];
	struct FTimerHandle                           CallFunc_K2_SetTimerDelegate_ReturnValue;
	float                                         CallFunc_RetriggerableDelay_Duration_ImplicitCast;
	uint8                                         Pad_205C[0x4];
	double                                        CallFunc_ActivateInvincibleVisuals_Duration_ImplicitCast;
	float                                         CallFunc_RetriggerableDelay_Duration_ImplicitCast_1;
	float                                         CallFunc_Delay_Duration_ImplicitCast;
	double                                        CallFunc_LessEqual_DoubleDouble_A_ImplicitCast;
	double                                        CallFunc_Less_DoubleDouble_A_ImplicitCast;
	double                                        CallFunc_ActivateInvincibleVisuals_Duration_ImplicitCast_1;
	double                                        CallFunc_EqualEqual_DoubleDouble_A_ImplicitCast;
	double                                        CallFunc_MapRangeClamped_Value_ImplicitCast;
	float                                         CallFunc_InvokeWaterJumpSplash_SplashScale_ImplicitCast;
	uint8                                         Pad_209C[0x4];
	double                                        K2Node_CallDelegate_Damage_ImplicitCast;
};
static_assert(alignof(PlayerPawn_Athena_C_ExecuteUbergraph_PlayerPawn_Athena) == 0x000010, "Wrong alignment on PlayerPawn_Athena_C_ExecuteUbergraph_PlayerPawn_Athena");
static_assert(sizeof(PlayerPawn_Athena_C_ExecuteUbergraph_PlayerPawn_Athena) == 0x0020B0, "Wrong size on PlayerPawn_Athena_C_ExecuteUbergraph_PlayerPawn_Athena");
static_assert(offsetof(PlayerPawn_Athena_C_ExecuteUbergraph_PlayerPawn_Athena, EntryPoint) == 0x000000, "Member 'PlayerPawn_Athena_C_ExecuteUbergraph_PlayerPawn_Athena::EntryPoint' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_C_ExecuteUbergraph_PlayerPawn_Athena, K2Node_CreateDelegate_OutputDelegate) == 0x000004, "Member 'PlayerPawn_Athena_C_ExecuteUbergraph_PlayerPawn_Athena::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_C_ExecuteUbergraph_PlayerPawn_Athena, CallFunc_IsMobilePlatform_ReturnValue) == 0x000010, "Member 'PlayerPawn_Athena_C_ExecuteUbergraph_PlayerPawn_Athena::CallFunc_IsMobilePlatform_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_C_ExecuteUbergraph_PlayerPawn_Athena, CallFunc_IsMobilePlatform_ReturnValue_1) == 0x000011, "Member 'PlayerPawn_Athena_C_ExecuteUbergraph_PlayerPawn_Athena::CallFunc_IsMobilePlatform_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_C_ExecuteUbergraph_PlayerPawn_Athena, K2Node_GameplayCueEvent_EventType_7) == 0x000012, "Member 'PlayerPawn_Athena_C_ExecuteUbergraph_PlayerPawn_Athena::K2Node_GameplayCueEvent_EventType_7' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_C_ExecuteUbergraph_PlayerPawn_Athena, K2Node_GameplayCueEvent_Parameters_7) == 0x000018, "Member 'PlayerPawn_Athena_C_ExecuteUbergraph_PlayerPawn_Athena::K2Node_GameplayCueEvent_Parameters_7' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_C_ExecuteUbergraph_PlayerPawn_Athena, K2Node_SwitchEnum_CmpSuccess) == 0x0000E8, "Member 'PlayerPawn_Athena_C_ExecuteUbergraph_PlayerPawn_Athena::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_C_ExecuteUbergraph_PlayerPawn_Athena, CallFunc_IsLocallyControlled_ReturnValue) == 0x0000E9, "Member 'PlayerPawn_Athena_C_ExecuteUbergraph_PlayerPawn_Athena::CallFunc_IsLocallyControlled_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_C_ExecuteUbergraph_PlayerPawn_Athena, CallFunc_IsLocallyControlled_ReturnValue_1) == 0x0000EA, "Member 'PlayerPawn_Athena_C_ExecuteUbergraph_PlayerPawn_Athena::CallFunc_IsLocallyControlled_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_C_ExecuteUbergraph_PlayerPawn_Athena, CallFunc_BooleanAND_ReturnValue) == 0x0000EB, "Member 'PlayerPawn_Athena_C_ExecuteUbergraph_PlayerPawn_Athena::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_C_ExecuteUbergraph_PlayerPawn_Athena, CallFunc_BooleanAND_ReturnValue_1) == 0x0000EC, "Member 'PlayerPawn_Athena_C_ExecuteUbergraph_PlayerPawn_Athena::CallFunc_BooleanAND_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_C_ExecuteUbergraph_PlayerPawn_Athena, K2Node_Event_EndPlayReason) == 0x0000ED, "Member 'PlayerPawn_Athena_C_ExecuteUbergraph_PlayerPawn_Athena::K2Node_Event_EndPlayReason' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_C_ExecuteUbergraph_PlayerPawn_Athena, CallFunc_K2_GetComponentRotation_ReturnValue) == 0x0000F0, "Member 'PlayerPawn_Athena_C_ExecuteUbergraph_PlayerPawn_Athena::CallFunc_K2_GetComponentRotation_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_C_ExecuteUbergraph_PlayerPawn_Athena, CallFunc_SpawnEmitterAttached_ReturnValue) == 0x000108, "Member 'PlayerPawn_Athena_C_ExecuteUbergraph_PlayerPawn_Athena::CallFunc_SpawnEmitterAttached_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_C_ExecuteUbergraph_PlayerPawn_Athena, CallFunc_K2_GetComponentLocation_ReturnValue) == 0x000110, "Member 'PlayerPawn_Athena_C_ExecuteUbergraph_PlayerPawn_Athena::CallFunc_K2_GetComponentLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_C_ExecuteUbergraph_PlayerPawn_Athena, CallFunc_SpawnEmitterAtLocation_ReturnValue) == 0x000128, "Member 'PlayerPawn_Athena_C_ExecuteUbergraph_PlayerPawn_Athena::CallFunc_SpawnEmitterAtLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_C_ExecuteUbergraph_PlayerPawn_Athena, K2Node_GameplayCueEvent_EventType_8) == 0x000130, "Member 'PlayerPawn_Athena_C_ExecuteUbergraph_PlayerPawn_Athena::K2Node_GameplayCueEvent_EventType_8' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_C_ExecuteUbergraph_PlayerPawn_Athena, K2Node_GameplayCueEvent_Parameters_8) == 0x000138, "Member 'PlayerPawn_Athena_C_ExecuteUbergraph_PlayerPawn_Athena::K2Node_GameplayCueEvent_Parameters_8' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_C_ExecuteUbergraph_PlayerPawn_Athena, CallFunc_NotEqual_BoolBool_ReturnValue) == 0x000208, "Member 'PlayerPawn_Athena_C_ExecuteUbergraph_PlayerPawn_Athena::CallFunc_NotEqual_BoolBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_C_ExecuteUbergraph_PlayerPawn_Athena, K2Node_SwitchEnum_CmpSuccess_1) == 0x000209, "Member 'PlayerPawn_Athena_C_ExecuteUbergraph_PlayerPawn_Athena::K2Node_SwitchEnum_CmpSuccess_1' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_C_ExecuteUbergraph_PlayerPawn_Athena, Temp_real_Variable) == 0x000210, "Member 'PlayerPawn_Athena_C_ExecuteUbergraph_PlayerPawn_Athena::Temp_real_Variable' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_C_ExecuteUbergraph_PlayerPawn_Athena, K2Node_CustomEvent_Pawn_1) == 0x000218, "Member 'PlayerPawn_Athena_C_ExecuteUbergraph_PlayerPawn_Athena::K2Node_CustomEvent_Pawn_1' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_C_ExecuteUbergraph_PlayerPawn_Athena, K2Node_CreateDelegate_OutputDelegate_1) == 0x000220, "Member 'PlayerPawn_Athena_C_ExecuteUbergraph_PlayerPawn_Athena::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_C_ExecuteUbergraph_PlayerPawn_Athena, CallFunc_K2_GetComponentLocation_ReturnValue_1) == 0x000230, "Member 'PlayerPawn_Athena_C_ExecuteUbergraph_PlayerPawn_Athena::CallFunc_K2_GetComponentLocation_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_C_ExecuteUbergraph_PlayerPawn_Athena, CallFunc_GetGameState_ReturnValue) == 0x000248, "Member 'PlayerPawn_Athena_C_ExecuteUbergraph_PlayerPawn_Athena::CallFunc_GetGameState_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_C_ExecuteUbergraph_PlayerPawn_Athena, CallFunc_SpawnEmitterAtLocation_ReturnValue_1) == 0x000250, "Member 'PlayerPawn_Athena_C_ExecuteUbergraph_PlayerPawn_Athena::CallFunc_SpawnEmitterAtLocation_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_C_ExecuteUbergraph_PlayerPawn_Athena, K2Node_DynamicCast_AsFort_Game_State_Athena) == 0x000258, "Member 'PlayerPawn_Athena_C_ExecuteUbergraph_PlayerPawn_Athena::K2Node_DynamicCast_AsFort_Game_State_Athena' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_C_ExecuteUbergraph_PlayerPawn_Athena, K2Node_DynamicCast_bSuccess) == 0x000260, "Member 'PlayerPawn_Athena_C_ExecuteUbergraph_PlayerPawn_Athena::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_C_ExecuteUbergraph_PlayerPawn_Athena, CallFunc_GetSafeZonePhase_ReturnValue) == 0x000264, "Member 'PlayerPawn_Athena_C_ExecuteUbergraph_PlayerPawn_Athena::CallFunc_GetSafeZonePhase_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_C_ExecuteUbergraph_PlayerPawn_Athena, CallFunc_SpawnSoundAttached_ReturnValue) == 0x000268, "Member 'PlayerPawn_Athena_C_ExecuteUbergraph_PlayerPawn_Athena::CallFunc_SpawnSoundAttached_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_C_ExecuteUbergraph_PlayerPawn_Athena, Temp_int_Array_Index_Variable) == 0x000270, "Member 'PlayerPawn_Athena_C_ExecuteUbergraph_PlayerPawn_Athena::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_C_ExecuteUbergraph_PlayerPawn_Athena, CallFunc_MakeGameplayCueParameters_ReturnValue) == 0x000278, "Member 'PlayerPawn_Athena_C_ExecuteUbergraph_PlayerPawn_Athena::CallFunc_MakeGameplayCueParameters_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_C_ExecuteUbergraph_PlayerPawn_Athena, K2Node_CustomEvent_InSafeZonePhase) == 0x000348, "Member 'PlayerPawn_Athena_C_ExecuteUbergraph_PlayerPawn_Athena::K2Node_CustomEvent_InSafeZonePhase' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_C_ExecuteUbergraph_PlayerPawn_Athena, K2Node_CustomEvent_bSpawnGameplayCue_1) == 0x00034C, "Member 'PlayerPawn_Athena_C_ExecuteUbergraph_PlayerPawn_Athena::K2Node_CustomEvent_bSpawnGameplayCue_1' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_C_ExecuteUbergraph_PlayerPawn_Athena, K2Node_CustomEvent_NewWhichSafeZoneTag) == 0x000350, "Member 'PlayerPawn_Athena_C_ExecuteUbergraph_PlayerPawn_Athena::K2Node_CustomEvent_NewWhichSafeZoneTag' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_C_ExecuteUbergraph_PlayerPawn_Athena, K2Node_CustomEvent_GameplayTag) == 0x000354, "Member 'PlayerPawn_Athena_C_ExecuteUbergraph_PlayerPawn_Athena::K2Node_CustomEvent_GameplayTag' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_C_ExecuteUbergraph_PlayerPawn_Athena, K2Node_CustomEvent_bSpawnGameplayCue) == 0x000358, "Member 'PlayerPawn_Athena_C_ExecuteUbergraph_PlayerPawn_Athena::K2Node_CustomEvent_bSpawnGameplayCue' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_C_ExecuteUbergraph_PlayerPawn_Athena, K2Node_Event_SafeZonePhase) == 0x00035C, "Member 'PlayerPawn_Athena_C_ExecuteUbergraph_PlayerPawn_Athena::K2Node_Event_SafeZonePhase' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_C_ExecuteUbergraph_PlayerPawn_Athena, CallFunc_NotEqual_IntInt_ReturnValue) == 0x000360, "Member 'PlayerPawn_Athena_C_ExecuteUbergraph_PlayerPawn_Athena::CallFunc_NotEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_C_ExecuteUbergraph_PlayerPawn_Athena, K2Node_Event_First_Left) == 0x000361, "Member 'PlayerPawn_Athena_C_ExecuteUbergraph_PlayerPawn_Athena::K2Node_Event_First_Left' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_C_ExecuteUbergraph_PlayerPawn_Athena, CallFunc_SpawnSoundAttached_ReturnValue_1) == 0x000368, "Member 'PlayerPawn_Athena_C_ExecuteUbergraph_PlayerPawn_Athena::CallFunc_SpawnSoundAttached_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_C_ExecuteUbergraph_PlayerPawn_Athena, CallFunc_SpawnEmitterAttached_ReturnValue_1) == 0x000370, "Member 'PlayerPawn_Athena_C_ExecuteUbergraph_PlayerPawn_Athena::CallFunc_SpawnEmitterAttached_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_C_ExecuteUbergraph_PlayerPawn_Athena, K2Node_Event_First_Right) == 0x000378, "Member 'PlayerPawn_Athena_C_ExecuteUbergraph_PlayerPawn_Athena::K2Node_Event_First_Right' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_C_ExecuteUbergraph_PlayerPawn_Athena, K2Node_GameplayCueEvent_EventType_6) == 0x000379, "Member 'PlayerPawn_Athena_C_ExecuteUbergraph_PlayerPawn_Athena::K2Node_GameplayCueEvent_EventType_6' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_C_ExecuteUbergraph_PlayerPawn_Athena, K2Node_GameplayCueEvent_Parameters_6) == 0x000380, "Member 'PlayerPawn_Athena_C_ExecuteUbergraph_PlayerPawn_Athena::K2Node_GameplayCueEvent_Parameters_6' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_C_ExecuteUbergraph_PlayerPawn_Athena, CallFunc_K2_GetActorLocation_ReturnValue) == 0x000450, "Member 'PlayerPawn_Athena_C_ExecuteUbergraph_PlayerPawn_Athena::CallFunc_K2_GetActorLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_C_ExecuteUbergraph_PlayerPawn_Athena, K2Node_SwitchEnum_CmpSuccess_2) == 0x000468, "Member 'PlayerPawn_Athena_C_ExecuteUbergraph_PlayerPawn_Athena::K2Node_SwitchEnum_CmpSuccess_2' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_C_ExecuteUbergraph_PlayerPawn_Athena, K2Node_CustomEvent_Duration) == 0x000470, "Member 'PlayerPawn_Athena_C_ExecuteUbergraph_PlayerPawn_Athena::K2Node_CustomEvent_Duration' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_C_ExecuteUbergraph_PlayerPawn_Athena, CallFunc_Greater_DoubleDouble_ReturnValue) == 0x000478, "Member 'PlayerPawn_Athena_C_ExecuteUbergraph_PlayerPawn_Athena::CallFunc_Greater_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_C_ExecuteUbergraph_PlayerPawn_Athena, CallFunc_MakeGameplayCueParameters_ReturnValue_1) == 0x000480, "Member 'PlayerPawn_Athena_C_ExecuteUbergraph_PlayerPawn_Athena::CallFunc_MakeGameplayCueParameters_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_C_ExecuteUbergraph_PlayerPawn_Athena, K2Node_GameplayCueEvent_EventType_9) == 0x000550, "Member 'PlayerPawn_Athena_C_ExecuteUbergraph_PlayerPawn_Athena::K2Node_GameplayCueEvent_EventType_9' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_C_ExecuteUbergraph_PlayerPawn_Athena, K2Node_GameplayCueEvent_Parameters_9) == 0x000558, "Member 'PlayerPawn_Athena_C_ExecuteUbergraph_PlayerPawn_Athena::K2Node_GameplayCueEvent_Parameters_9' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_C_ExecuteUbergraph_PlayerPawn_Athena, Temp_real_Variable_1) == 0x000628, "Member 'PlayerPawn_Athena_C_ExecuteUbergraph_PlayerPawn_Athena::Temp_real_Variable_1' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_C_ExecuteUbergraph_PlayerPawn_Athena, CallFunc_BreakGameplayCueParameters_NormalizedMagnitude) == 0x000630, "Member 'PlayerPawn_Athena_C_ExecuteUbergraph_PlayerPawn_Athena::CallFunc_BreakGameplayCueParameters_NormalizedMagnitude' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_C_ExecuteUbergraph_PlayerPawn_Athena, CallFunc_BreakGameplayCueParameters_RawMagnitude) == 0x000634, "Member 'PlayerPawn_Athena_C_ExecuteUbergraph_PlayerPawn_Athena::CallFunc_BreakGameplayCueParameters_RawMagnitude' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_C_ExecuteUbergraph_PlayerPawn_Athena, CallFunc_BreakGameplayCueParameters_EffectContext) == 0x000638, "Member 'PlayerPawn_Athena_C_ExecuteUbergraph_PlayerPawn_Athena::CallFunc_BreakGameplayCueParameters_EffectContext' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_C_ExecuteUbergraph_PlayerPawn_Athena, CallFunc_BreakGameplayCueParameters_MatchedTagName) == 0x000650, "Member 'PlayerPawn_Athena_C_ExecuteUbergraph_PlayerPawn_Athena::CallFunc_BreakGameplayCueParameters_MatchedTagName' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_C_ExecuteUbergraph_PlayerPawn_Athena, CallFunc_BreakGameplayCueParameters_OriginalTag) == 0x000654, "Member 'PlayerPawn_Athena_C_ExecuteUbergraph_PlayerPawn_Athena::CallFunc_BreakGameplayCueParameters_OriginalTag' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_C_ExecuteUbergraph_PlayerPawn_Athena, CallFunc_BreakGameplayCueParameters_AggregatedSourceTags) == 0x000658, "Member 'PlayerPawn_Athena_C_ExecuteUbergraph_PlayerPawn_Athena::CallFunc_BreakGameplayCueParameters_AggregatedSourceTags' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_C_ExecuteUbergraph_PlayerPawn_Athena, CallFunc_BreakGameplayCueParameters_AggregatedTargetTags) == 0x000678, "Member 'PlayerPawn_Athena_C_ExecuteUbergraph_PlayerPawn_Athena::CallFunc_BreakGameplayCueParameters_AggregatedTargetTags' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_C_ExecuteUbergraph_PlayerPawn_Athena, CallFunc_BreakGameplayCueParameters_Location) == 0x000698, "Member 'PlayerPawn_Athena_C_ExecuteUbergraph_PlayerPawn_Athena::CallFunc_BreakGameplayCueParameters_Location' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_C_ExecuteUbergraph_PlayerPawn_Athena, CallFunc_BreakGameplayCueParameters_Normal) == 0x0006B0, "Member 'PlayerPawn_Athena_C_ExecuteUbergraph_PlayerPawn_Athena::CallFunc_BreakGameplayCueParameters_Normal' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_C_ExecuteUbergraph_PlayerPawn_Athena, CallFunc_BreakGameplayCueParameters_Instigator) == 0x0006C8, "Member 'PlayerPawn_Athena_C_ExecuteUbergraph_PlayerPawn_Athena::CallFunc_BreakGameplayCueParameters_Instigator' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_C_ExecuteUbergraph_PlayerPawn_Athena, CallFunc_BreakGameplayCueParameters_EffectCauser) == 0x0006D0, "Member 'PlayerPawn_Athena_C_ExecuteUbergraph_PlayerPawn_Athena::CallFunc_BreakGameplayCueParameters_EffectCauser' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_C_ExecuteUbergraph_PlayerPawn_Athena, CallFunc_BreakGameplayCueParameters_SourceObject) == 0x0006D8, "Member 'PlayerPawn_Athena_C_ExecuteUbergraph_PlayerPawn_Athena::CallFunc_BreakGameplayCueParameters_SourceObject' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_C_ExecuteUbergraph_PlayerPawn_Athena, CallFunc_BreakGameplayCueParameters_PhysicalMaterial) == 0x0006E0, "Member 'PlayerPawn_Athena_C_ExecuteUbergraph_PlayerPawn_Athena::CallFunc_BreakGameplayCueParameters_PhysicalMaterial' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_C_ExecuteUbergraph_PlayerPawn_Athena, CallFunc_BreakGameplayCueParameters_GameplayEffectLevel) == 0x0006E8, "Member 'PlayerPawn_Athena_C_ExecuteUbergraph_PlayerPawn_Athena::CallFunc_BreakGameplayCueParameters_GameplayEffectLevel' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_C_ExecuteUbergraph_PlayerPawn_Athena, CallFunc_BreakGameplayCueParameters_AbilityLevel) == 0x0006EC, "Member 'PlayerPawn_Athena_C_ExecuteUbergraph_PlayerPawn_Athena::CallFunc_BreakGameplayCueParameters_AbilityLevel' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_C_ExecuteUbergraph_PlayerPawn_Athena, CallFunc_BreakGameplayCueParameters_TargetAttachComponent) == 0x0006F0, "Member 'PlayerPawn_Athena_C_ExecuteUbergraph_PlayerPawn_Athena::CallFunc_BreakGameplayCueParameters_TargetAttachComponent' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_C_ExecuteUbergraph_PlayerPawn_Athena, CallFunc_BreakGameplayCueParameters_bReplicateLocationWhenUsingMinimalRepProxy) == 0x0006F8, "Member 'PlayerPawn_Athena_C_ExecuteUbergraph_PlayerPawn_Athena::CallFunc_BreakGameplayCueParameters_bReplicateLocationWhenUsingMinimalRepProxy' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_C_ExecuteUbergraph_PlayerPawn_Athena, CallFunc_GetLocalViewingPlayerController_ReturnValue) == 0x000700, "Member 'PlayerPawn_Athena_C_ExecuteUbergraph_PlayerPawn_Athena::CallFunc_GetLocalViewingPlayerController_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_C_ExecuteUbergraph_PlayerPawn_Athena, K2Node_DynamicCast_AsFort_Player_Controller_Spectating) == 0x000708, "Member 'PlayerPawn_Athena_C_ExecuteUbergraph_PlayerPawn_Athena::K2Node_DynamicCast_AsFort_Player_Controller_Spectating' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_C_ExecuteUbergraph_PlayerPawn_Athena, K2Node_DynamicCast_bSuccess_1) == 0x000710, "Member 'PlayerPawn_Athena_C_ExecuteUbergraph_PlayerPawn_Athena::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_C_ExecuteUbergraph_PlayerPawn_Athena, K2Node_GameplayCueEvent_EventType_10) == 0x000711, "Member 'PlayerPawn_Athena_C_ExecuteUbergraph_PlayerPawn_Athena::K2Node_GameplayCueEvent_EventType_10' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_C_ExecuteUbergraph_PlayerPawn_Athena, K2Node_GameplayCueEvent_Parameters_10) == 0x000718, "Member 'PlayerPawn_Athena_C_ExecuteUbergraph_PlayerPawn_Athena::K2Node_GameplayCueEvent_Parameters_10' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_C_ExecuteUbergraph_PlayerPawn_Athena, CallFunc_IsLocallyControlled_ReturnValue_2) == 0x0007E8, "Member 'PlayerPawn_Athena_C_ExecuteUbergraph_PlayerPawn_Athena::CallFunc_IsLocallyControlled_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_C_ExecuteUbergraph_PlayerPawn_Athena, CallFunc_GetLocalViewingPlayerController_ReturnValue_1) == 0x0007F0, "Member 'PlayerPawn_Athena_C_ExecuteUbergraph_PlayerPawn_Athena::CallFunc_GetLocalViewingPlayerController_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_C_ExecuteUbergraph_PlayerPawn_Athena, K2Node_DynamicCast_AsFort_Player_Controller_Spectating_1) == 0x0007F8, "Member 'PlayerPawn_Athena_C_ExecuteUbergraph_PlayerPawn_Athena::K2Node_DynamicCast_AsFort_Player_Controller_Spectating_1' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_C_ExecuteUbergraph_PlayerPawn_Athena, K2Node_DynamicCast_bSuccess_2) == 0x000800, "Member 'PlayerPawn_Athena_C_ExecuteUbergraph_PlayerPawn_Athena::K2Node_DynamicCast_bSuccess_2' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_C_ExecuteUbergraph_PlayerPawn_Athena, CallFunc_IsLocallyControlled_ReturnValue_3) == 0x000801, "Member 'PlayerPawn_Athena_C_ExecuteUbergraph_PlayerPawn_Athena::CallFunc_IsLocallyControlled_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_C_ExecuteUbergraph_PlayerPawn_Athena, K2Node_Event_Damage_1) == 0x000804, "Member 'PlayerPawn_Athena_C_ExecuteUbergraph_PlayerPawn_Athena::K2Node_Event_Damage_1' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_C_ExecuteUbergraph_PlayerPawn_Athena, K2Node_Event_DamageTags_1) == 0x000808, "Member 'PlayerPawn_Athena_C_ExecuteUbergraph_PlayerPawn_Athena::K2Node_Event_DamageTags_1' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_C_ExecuteUbergraph_PlayerPawn_Athena, K2Node_Event_Momentum_1) == 0x000828, "Member 'PlayerPawn_Athena_C_ExecuteUbergraph_PlayerPawn_Athena::K2Node_Event_Momentum_1' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_C_ExecuteUbergraph_PlayerPawn_Athena, K2Node_Event_HitInfo_1) == 0x000840, "Member 'PlayerPawn_Athena_C_ExecuteUbergraph_PlayerPawn_Athena::K2Node_Event_HitInfo_1' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_C_ExecuteUbergraph_PlayerPawn_Athena, K2Node_Event_InstigatedBy_1) == 0x000920, "Member 'PlayerPawn_Athena_C_ExecuteUbergraph_PlayerPawn_Athena::K2Node_Event_InstigatedBy_1' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_C_ExecuteUbergraph_PlayerPawn_Athena, K2Node_Event_DamageCauser_1) == 0x000928, "Member 'PlayerPawn_Athena_C_ExecuteUbergraph_PlayerPawn_Athena::K2Node_Event_DamageCauser_1' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_C_ExecuteUbergraph_PlayerPawn_Athena, K2Node_Event_EffectContext_1) == 0x000930, "Member 'PlayerPawn_Athena_C_ExecuteUbergraph_PlayerPawn_Athena::K2Node_Event_EffectContext_1' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_C_ExecuteUbergraph_PlayerPawn_Athena, CallFunc_HasAllMatchingGameplayTags_TagContainerInterface_CastInput) == 0x000948, "Member 'PlayerPawn_Athena_C_ExecuteUbergraph_PlayerPawn_Athena::CallFunc_HasAllMatchingGameplayTags_TagContainerInterface_CastInput' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_C_ExecuteUbergraph_PlayerPawn_Athena, CallFunc_HasAllMatchingGameplayTags_ReturnValue) == 0x000958, "Member 'PlayerPawn_Athena_C_ExecuteUbergraph_PlayerPawn_Athena::CallFunc_HasAllMatchingGameplayTags_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_C_ExecuteUbergraph_PlayerPawn_Athena, K2Node_GameplayCueEvent_EventType_5) == 0x000959, "Member 'PlayerPawn_Athena_C_ExecuteUbergraph_PlayerPawn_Athena::K2Node_GameplayCueEvent_EventType_5' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_C_ExecuteUbergraph_PlayerPawn_Athena, K2Node_GameplayCueEvent_Parameters_5) == 0x000960, "Member 'PlayerPawn_Athena_C_ExecuteUbergraph_PlayerPawn_Athena::K2Node_GameplayCueEvent_Parameters_5' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_C_ExecuteUbergraph_PlayerPawn_Athena, K2Node_CustomEvent_SecondsTillTeleport) == 0x000A30, "Member 'PlayerPawn_Athena_C_ExecuteUbergraph_PlayerPawn_Athena::K2Node_CustomEvent_SecondsTillTeleport' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_C_ExecuteUbergraph_PlayerPawn_Athena, K2Node_CustomEvent_DestLocation_1) == 0x000A38, "Member 'PlayerPawn_Athena_C_ExecuteUbergraph_PlayerPawn_Athena::K2Node_CustomEvent_DestLocation_1' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_C_ExecuteUbergraph_PlayerPawn_Athena, K2Node_CustomEvent_DestRotation_1) == 0x000A50, "Member 'PlayerPawn_Athena_C_ExecuteUbergraph_PlayerPawn_Athena::K2Node_CustomEvent_DestRotation_1' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_C_ExecuteUbergraph_PlayerPawn_Athena, K2Node_CustomEvent_Instant_1) == 0x000A68, "Member 'PlayerPawn_Athena_C_ExecuteUbergraph_PlayerPawn_Athena::K2Node_CustomEvent_Instant_1' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_C_ExecuteUbergraph_PlayerPawn_Athena, K2Node_CustomEvent_DestLocation) == 0x000A70, "Member 'PlayerPawn_Athena_C_ExecuteUbergraph_PlayerPawn_Athena::K2Node_CustomEvent_DestLocation' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_C_ExecuteUbergraph_PlayerPawn_Athena, K2Node_CustomEvent_DestRotation) == 0x000A88, "Member 'PlayerPawn_Athena_C_ExecuteUbergraph_PlayerPawn_Athena::K2Node_CustomEvent_DestRotation' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_C_ExecuteUbergraph_PlayerPawn_Athena, K2Node_CustomEvent_Instant) == 0x000AA0, "Member 'PlayerPawn_Athena_C_ExecuteUbergraph_PlayerPawn_Athena::K2Node_CustomEvent_Instant' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_C_ExecuteUbergraph_PlayerPawn_Athena, K2Node_CustomEvent_Gravity) == 0x000AA8, "Member 'PlayerPawn_Athena_C_ExecuteUbergraph_PlayerPawn_Athena::K2Node_CustomEvent_Gravity' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_C_ExecuteUbergraph_PlayerPawn_Athena, CallFunc_Conv_BoolToFloat_ReturnValue) == 0x000AB0, "Member 'PlayerPawn_Athena_C_ExecuteUbergraph_PlayerPawn_Athena::CallFunc_Conv_BoolToFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_C_ExecuteUbergraph_PlayerPawn_Athena, CallFunc_EqualEqual_DoubleDouble_ReturnValue) == 0x000AB4, "Member 'PlayerPawn_Athena_C_ExecuteUbergraph_PlayerPawn_Athena::CallFunc_EqualEqual_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_C_ExecuteUbergraph_PlayerPawn_Athena, CallFunc_MakeGameplayCueParameters_ReturnValue_2) == 0x000AB8, "Member 'PlayerPawn_Athena_C_ExecuteUbergraph_PlayerPawn_Athena::CallFunc_MakeGameplayCueParameters_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_C_ExecuteUbergraph_PlayerPawn_Athena, CallFunc_EqualEqual_DoubleDouble_ReturnValue_1) == 0x000B88, "Member 'PlayerPawn_Athena_C_ExecuteUbergraph_PlayerPawn_Athena::CallFunc_EqualEqual_DoubleDouble_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_C_ExecuteUbergraph_PlayerPawn_Athena, CallFunc_K2_TeleportTo_ReturnValue) == 0x000B89, "Member 'PlayerPawn_Athena_C_ExecuteUbergraph_PlayerPawn_Athena::CallFunc_K2_TeleportTo_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_C_ExecuteUbergraph_PlayerPawn_Athena, CallFunc_IsLocallyControlled_ReturnValue_4) == 0x000B8A, "Member 'PlayerPawn_Athena_C_ExecuteUbergraph_PlayerPawn_Athena::CallFunc_IsLocallyControlled_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_C_ExecuteUbergraph_PlayerPawn_Athena, CallFunc_GetLocalViewingPlayerController_ReturnValue_2) == 0x000B90, "Member 'PlayerPawn_Athena_C_ExecuteUbergraph_PlayerPawn_Athena::CallFunc_GetLocalViewingPlayerController_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_C_ExecuteUbergraph_PlayerPawn_Athena, K2Node_GameplayCueEvent_EventType_11) == 0x000B98, "Member 'PlayerPawn_Athena_C_ExecuteUbergraph_PlayerPawn_Athena::K2Node_GameplayCueEvent_EventType_11' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_C_ExecuteUbergraph_PlayerPawn_Athena, K2Node_GameplayCueEvent_Parameters_11) == 0x000BA0, "Member 'PlayerPawn_Athena_C_ExecuteUbergraph_PlayerPawn_Athena::K2Node_GameplayCueEvent_Parameters_11' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_C_ExecuteUbergraph_PlayerPawn_Athena, K2Node_DynamicCast_AsFort_Player_Controller_Spectating_2) == 0x000C70, "Member 'PlayerPawn_Athena_C_ExecuteUbergraph_PlayerPawn_Athena::K2Node_DynamicCast_AsFort_Player_Controller_Spectating_2' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_C_ExecuteUbergraph_PlayerPawn_Athena, K2Node_DynamicCast_bSuccess_3) == 0x000C78, "Member 'PlayerPawn_Athena_C_ExecuteUbergraph_PlayerPawn_Athena::K2Node_DynamicCast_bSuccess_3' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_C_ExecuteUbergraph_PlayerPawn_Athena, K2Node_GameplayCueEvent_EventType_4) == 0x000C79, "Member 'PlayerPawn_Athena_C_ExecuteUbergraph_PlayerPawn_Athena::K2Node_GameplayCueEvent_EventType_4' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_C_ExecuteUbergraph_PlayerPawn_Athena, K2Node_GameplayCueEvent_Parameters_4) == 0x000C80, "Member 'PlayerPawn_Athena_C_ExecuteUbergraph_PlayerPawn_Athena::K2Node_GameplayCueEvent_Parameters_4' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_C_ExecuteUbergraph_PlayerPawn_Athena, CallFunc_GetAbilitySystemComponent_ReturnValue) == 0x000D50, "Member 'PlayerPawn_Athena_C_ExecuteUbergraph_PlayerPawn_Athena::CallFunc_GetAbilitySystemComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_C_ExecuteUbergraph_PlayerPawn_Athena, CallFunc_BP_ApplyGameplayEffectToSelf_ReturnValue) == 0x000D58, "Member 'PlayerPawn_Athena_C_ExecuteUbergraph_PlayerPawn_Athena::CallFunc_BP_ApplyGameplayEffectToSelf_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_C_ExecuteUbergraph_PlayerPawn_Athena, CallFunc_MakeGameplayCueParameters_ReturnValue_3) == 0x000D60, "Member 'PlayerPawn_Athena_C_ExecuteUbergraph_PlayerPawn_Athena::CallFunc_MakeGameplayCueParameters_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_C_ExecuteUbergraph_PlayerPawn_Athena, Temp_int_Loop_Counter_Variable) == 0x000E30, "Member 'PlayerPawn_Athena_C_ExecuteUbergraph_PlayerPawn_Athena::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_C_ExecuteUbergraph_PlayerPawn_Athena, CallFunc_K2_GetComponentLocation_ReturnValue_2) == 0x000E38, "Member 'PlayerPawn_Athena_C_ExecuteUbergraph_PlayerPawn_Athena::CallFunc_K2_GetComponentLocation_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_C_ExecuteUbergraph_PlayerPawn_Athena, CallFunc_Add_IntInt_ReturnValue) == 0x000E50, "Member 'PlayerPawn_Athena_C_ExecuteUbergraph_PlayerPawn_Athena::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_C_ExecuteUbergraph_PlayerPawn_Athena, Temp_bool_Variable) == 0x000E54, "Member 'PlayerPawn_Athena_C_ExecuteUbergraph_PlayerPawn_Athena::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_C_ExecuteUbergraph_PlayerPawn_Athena, CallFunc_Array_Length_ReturnValue) == 0x000E58, "Member 'PlayerPawn_Athena_C_ExecuteUbergraph_PlayerPawn_Athena::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_C_ExecuteUbergraph_PlayerPawn_Athena, K2Node_Select_Default) == 0x000E60, "Member 'PlayerPawn_Athena_C_ExecuteUbergraph_PlayerPawn_Athena::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_C_ExecuteUbergraph_PlayerPawn_Athena, CallFunc_Greater_IntInt_ReturnValue) == 0x000E68, "Member 'PlayerPawn_Athena_C_ExecuteUbergraph_PlayerPawn_Athena::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_C_ExecuteUbergraph_PlayerPawn_Athena, CallFunc_Conv_IntToFloat_ReturnValue) == 0x000E6C, "Member 'PlayerPawn_Athena_C_ExecuteUbergraph_PlayerPawn_Athena::CallFunc_Conv_IntToFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_C_ExecuteUbergraph_PlayerPawn_Athena, CallFunc_GetLocalViewingPlayerController_ReturnValue_3) == 0x000E70, "Member 'PlayerPawn_Athena_C_ExecuteUbergraph_PlayerPawn_Athena::CallFunc_GetLocalViewingPlayerController_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_C_ExecuteUbergraph_PlayerPawn_Athena, CallFunc_GetValueAtLevel_ReturnValue) == 0x000E78, "Member 'PlayerPawn_Athena_C_ExecuteUbergraph_PlayerPawn_Athena::CallFunc_GetValueAtLevel_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_C_ExecuteUbergraph_PlayerPawn_Athena, K2Node_DynamicCast_AsFort_Player_Controller_Spectating_3) == 0x000E80, "Member 'PlayerPawn_Athena_C_ExecuteUbergraph_PlayerPawn_Athena::K2Node_DynamicCast_AsFort_Player_Controller_Spectating_3' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_C_ExecuteUbergraph_PlayerPawn_Athena, K2Node_DynamicCast_bSuccess_4) == 0x000E88, "Member 'PlayerPawn_Athena_C_ExecuteUbergraph_PlayerPawn_Athena::K2Node_DynamicCast_bSuccess_4' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_C_ExecuteUbergraph_PlayerPawn_Athena, CallFunc_Less_DoubleDouble_ReturnValue) == 0x000E89, "Member 'PlayerPawn_Athena_C_ExecuteUbergraph_PlayerPawn_Athena::CallFunc_Less_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_C_ExecuteUbergraph_PlayerPawn_Athena, CallFunc_LessEqual_DoubleDouble_ReturnValue) == 0x000E8A, "Member 'PlayerPawn_Athena_C_ExecuteUbergraph_PlayerPawn_Athena::CallFunc_LessEqual_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_C_ExecuteUbergraph_PlayerPawn_Athena, CallFunc_GetVehicleUInterface_ReturnValue) == 0x000E90, "Member 'PlayerPawn_Athena_C_ExecuteUbergraph_PlayerPawn_Athena::CallFunc_GetVehicleUInterface_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_C_ExecuteUbergraph_PlayerPawn_Athena, CallFunc_GetDriver_ReturnValue) == 0x000EA0, "Member 'PlayerPawn_Athena_C_ExecuteUbergraph_PlayerPawn_Athena::CallFunc_GetDriver_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_C_ExecuteUbergraph_PlayerPawn_Athena, CallFunc_Conv_InterfaceToObject_ReturnValue) == 0x000EA8, "Member 'PlayerPawn_Athena_C_ExecuteUbergraph_PlayerPawn_Athena::CallFunc_Conv_InterfaceToObject_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_C_ExecuteUbergraph_PlayerPawn_Athena, CallFunc_GetVehicleActorPtrConst_ReturnValue) == 0x000EB0, "Member 'PlayerPawn_Athena_C_ExecuteUbergraph_PlayerPawn_Athena::CallFunc_GetVehicleActorPtrConst_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_C_ExecuteUbergraph_PlayerPawn_Athena, CallFunc_IsValid_ReturnValue) == 0x000EB8, "Member 'PlayerPawn_Athena_C_ExecuteUbergraph_PlayerPawn_Athena::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_C_ExecuteUbergraph_PlayerPawn_Athena, K2Node_DynamicCast_AsFort_Character_Vehicle) == 0x000EC0, "Member 'PlayerPawn_Athena_C_ExecuteUbergraph_PlayerPawn_Athena::K2Node_DynamicCast_AsFort_Character_Vehicle' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_C_ExecuteUbergraph_PlayerPawn_Athena, K2Node_DynamicCast_bSuccess_5) == 0x000EC8, "Member 'PlayerPawn_Athena_C_ExecuteUbergraph_PlayerPawn_Athena::K2Node_DynamicCast_bSuccess_5' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_C_ExecuteUbergraph_PlayerPawn_Athena, CallFunc_IsLocallyControlled_ReturnValue_5) == 0x000EC9, "Member 'PlayerPawn_Athena_C_ExecuteUbergraph_PlayerPawn_Athena::CallFunc_IsLocallyControlled_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_C_ExecuteUbergraph_PlayerPawn_Athena, CallFunc_EqualEqual_ObjectObject_ReturnValue) == 0x000ECA, "Member 'PlayerPawn_Athena_C_ExecuteUbergraph_PlayerPawn_Athena::CallFunc_EqualEqual_ObjectObject_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_C_ExecuteUbergraph_PlayerPawn_Athena, CallFunc_IsValid_ReturnValue_1) == 0x000ECB, "Member 'PlayerPawn_Athena_C_ExecuteUbergraph_PlayerPawn_Athena::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_C_ExecuteUbergraph_PlayerPawn_Athena, K2Node_Event_WaterBody_1) == 0x000ED0, "Member 'PlayerPawn_Athena_C_ExecuteUbergraph_PlayerPawn_Athena::K2Node_Event_WaterBody_1' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_C_ExecuteUbergraph_PlayerPawn_Athena, K2Node_Event_bIsFirstBody) == 0x000ED8, "Member 'PlayerPawn_Athena_C_ExecuteUbergraph_PlayerPawn_Athena::K2Node_Event_bIsFirstBody' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_C_ExecuteUbergraph_PlayerPawn_Athena, K2Node_Event_WaterBody) == 0x000EE0, "Member 'PlayerPawn_Athena_C_ExecuteUbergraph_PlayerPawn_Athena::K2Node_Event_WaterBody' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_C_ExecuteUbergraph_PlayerPawn_Athena, K2Node_Event_bIsLastBody) == 0x000EE8, "Member 'PlayerPawn_Athena_C_ExecuteUbergraph_PlayerPawn_Athena::K2Node_Event_bIsLastBody' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_C_ExecuteUbergraph_PlayerPawn_Athena, K2Node_Event_PrevMovementMode) == 0x000EE9, "Member 'PlayerPawn_Athena_C_ExecuteUbergraph_PlayerPawn_Athena::K2Node_Event_PrevMovementMode' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_C_ExecuteUbergraph_PlayerPawn_Athena, K2Node_Event_NewMovementMode) == 0x000EEA, "Member 'PlayerPawn_Athena_C_ExecuteUbergraph_PlayerPawn_Athena::K2Node_Event_NewMovementMode' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_C_ExecuteUbergraph_PlayerPawn_Athena, K2Node_Event_PrevCustomMode) == 0x000EEB, "Member 'PlayerPawn_Athena_C_ExecuteUbergraph_PlayerPawn_Athena::K2Node_Event_PrevCustomMode' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_C_ExecuteUbergraph_PlayerPawn_Athena, K2Node_Event_NewCustomMode) == 0x000EEC, "Member 'PlayerPawn_Athena_C_ExecuteUbergraph_PlayerPawn_Athena::K2Node_Event_NewCustomMode' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_C_ExecuteUbergraph_PlayerPawn_Athena, CallFunc_IsSurfaceSwimming_ReturnValue) == 0x000EED, "Member 'PlayerPawn_Athena_C_ExecuteUbergraph_PlayerPawn_Athena::CallFunc_IsSurfaceSwimming_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_C_ExecuteUbergraph_PlayerPawn_Athena, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x000EEE, "Member 'PlayerPawn_Athena_C_ExecuteUbergraph_PlayerPawn_Athena::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_C_ExecuteUbergraph_PlayerPawn_Athena, CallFunc_IsValid_ReturnValue_2) == 0x000EEF, "Member 'PlayerPawn_Athena_C_ExecuteUbergraph_PlayerPawn_Athena::CallFunc_IsValid_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_C_ExecuteUbergraph_PlayerPawn_Athena, CallFunc_IsDedicatedServer_ReturnValue) == 0x000EF0, "Member 'PlayerPawn_Athena_C_ExecuteUbergraph_PlayerPawn_Athena::CallFunc_IsDedicatedServer_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_C_ExecuteUbergraph_PlayerPawn_Athena, CallFunc_GetNumericCVar_OutValue) == 0x000EF4, "Member 'PlayerPawn_Athena_C_ExecuteUbergraph_PlayerPawn_Athena::CallFunc_GetNumericCVar_OutValue' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_C_ExecuteUbergraph_PlayerPawn_Athena, CallFunc_GetNumericCVar_ReturnValue) == 0x000EF8, "Member 'PlayerPawn_Athena_C_ExecuteUbergraph_PlayerPawn_Athena::CallFunc_GetNumericCVar_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_C_ExecuteUbergraph_PlayerPawn_Athena, CallFunc_EqualEqual_DoubleDouble_ReturnValue_2) == 0x000EF9, "Member 'PlayerPawn_Athena_C_ExecuteUbergraph_PlayerPawn_Athena::CallFunc_EqualEqual_DoubleDouble_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_C_ExecuteUbergraph_PlayerPawn_Athena, CallFunc_IsInVehicle_ReturnValue) == 0x000EFA, "Member 'PlayerPawn_Athena_C_ExecuteUbergraph_PlayerPawn_Athena::CallFunc_IsInVehicle_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_C_ExecuteUbergraph_PlayerPawn_Athena, CallFunc_IsInAthena_ReturnValue) == 0x000EFB, "Member 'PlayerPawn_Athena_C_ExecuteUbergraph_PlayerPawn_Athena::CallFunc_IsInAthena_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_C_ExecuteUbergraph_PlayerPawn_Athena, K2Node_MakeStruct_GameplayEventData) == 0x000F00, "Member 'PlayerPawn_Athena_C_ExecuteUbergraph_PlayerPawn_Athena::K2Node_MakeStruct_GameplayEventData' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_C_ExecuteUbergraph_PlayerPawn_Athena, CallFunc_IsDedicatedServer_ReturnValue_1) == 0x000FB0, "Member 'PlayerPawn_Athena_C_ExecuteUbergraph_PlayerPawn_Athena::CallFunc_IsDedicatedServer_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_C_ExecuteUbergraph_PlayerPawn_Athena, Temp_bool_IsClosed_Variable) == 0x000FB1, "Member 'PlayerPawn_Athena_C_ExecuteUbergraph_PlayerPawn_Athena::Temp_bool_IsClosed_Variable' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_C_ExecuteUbergraph_PlayerPawn_Athena, Temp_bool_Has_Been_Initd_Variable) == 0x000FB2, "Member 'PlayerPawn_Athena_C_ExecuteUbergraph_PlayerPawn_Athena::Temp_bool_Has_Been_Initd_Variable' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_C_ExecuteUbergraph_PlayerPawn_Athena, CallFunc_GetGameState_ReturnValue_1) == 0x000FB8, "Member 'PlayerPawn_Athena_C_ExecuteUbergraph_PlayerPawn_Athena::CallFunc_GetGameState_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_C_ExecuteUbergraph_PlayerPawn_Athena, K2Node_DynamicCast_AsFort_Game_State_Athena_1) == 0x000FC0, "Member 'PlayerPawn_Athena_C_ExecuteUbergraph_PlayerPawn_Athena::K2Node_DynamicCast_AsFort_Game_State_Athena_1' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_C_ExecuteUbergraph_PlayerPawn_Athena, K2Node_DynamicCast_bSuccess_6) == 0x000FC8, "Member 'PlayerPawn_Athena_C_ExecuteUbergraph_PlayerPawn_Athena::K2Node_DynamicCast_bSuccess_6' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_C_ExecuteUbergraph_PlayerPawn_Athena, CallFunc_IsStormCN_ReturnValue) == 0x000FC9, "Member 'PlayerPawn_Athena_C_ExecuteUbergraph_PlayerPawn_Athena::CallFunc_IsStormCN_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_C_ExecuteUbergraph_PlayerPawn_Athena, CallFunc_GetLastWaterSurfaceInfo_OutWaterSurfacePosition) == 0x000FD0, "Member 'PlayerPawn_Athena_C_ExecuteUbergraph_PlayerPawn_Athena::CallFunc_GetLastWaterSurfaceInfo_OutWaterSurfacePosition' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_C_ExecuteUbergraph_PlayerPawn_Athena, CallFunc_GetLastWaterSurfaceInfo_OutWaterSurfaceNormal) == 0x000FE8, "Member 'PlayerPawn_Athena_C_ExecuteUbergraph_PlayerPawn_Athena::CallFunc_GetLastWaterSurfaceInfo_OutWaterSurfaceNormal' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_C_ExecuteUbergraph_PlayerPawn_Athena, K2Node_Event_NewController) == 0x001000, "Member 'PlayerPawn_Athena_C_ExecuteUbergraph_PlayerPawn_Athena::K2Node_Event_NewController' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_C_ExecuteUbergraph_PlayerPawn_Athena, CallFunc_GetWaterImmersionDepth_ReturnValue) == 0x001008, "Member 'PlayerPawn_Athena_C_ExecuteUbergraph_PlayerPawn_Athena::CallFunc_GetWaterImmersionDepth_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_C_ExecuteUbergraph_PlayerPawn_Athena, CallFunc_MapRangeClamped_ReturnValue) == 0x001010, "Member 'PlayerPawn_Athena_C_ExecuteUbergraph_PlayerPawn_Athena::CallFunc_MapRangeClamped_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_C_ExecuteUbergraph_PlayerPawn_Athena, CallFunc_GetCurrentWaterBody_ReturnValue) == 0x001018, "Member 'PlayerPawn_Athena_C_ExecuteUbergraph_PlayerPawn_Athena::CallFunc_GetCurrentWaterBody_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_C_ExecuteUbergraph_PlayerPawn_Athena, K2Node_DynamicCast_AsFort_Movement_Comp_Character) == 0x001020, "Member 'PlayerPawn_Athena_C_ExecuteUbergraph_PlayerPawn_Athena::K2Node_DynamicCast_AsFort_Movement_Comp_Character' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_C_ExecuteUbergraph_PlayerPawn_Athena, K2Node_DynamicCast_bSuccess_7) == 0x001028, "Member 'PlayerPawn_Athena_C_ExecuteUbergraph_PlayerPawn_Athena::K2Node_DynamicCast_bSuccess_7' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_C_ExecuteUbergraph_PlayerPawn_Athena, CallFunc_IsValid_ReturnValue_3) == 0x001029, "Member 'PlayerPawn_Athena_C_ExecuteUbergraph_PlayerPawn_Athena::CallFunc_IsValid_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_C_ExecuteUbergraph_PlayerPawn_Athena, CallFunc_IsMovingOnGround_ReturnValue) == 0x00102A, "Member 'PlayerPawn_Athena_C_ExecuteUbergraph_PlayerPawn_Athena::CallFunc_IsMovingOnGround_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_C_ExecuteUbergraph_PlayerPawn_Athena, CallFunc_BooleanAND_ReturnValue_2) == 0x00102B, "Member 'PlayerPawn_Athena_C_ExecuteUbergraph_PlayerPawn_Athena::CallFunc_BooleanAND_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_C_ExecuteUbergraph_PlayerPawn_Athena, CallFunc_GetWaterSurfaceLocation_ReturnValue) == 0x001030, "Member 'PlayerPawn_Athena_C_ExecuteUbergraph_PlayerPawn_Athena::CallFunc_GetWaterSurfaceLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_C_ExecuteUbergraph_PlayerPawn_Athena, CallFunc_MakeGameplayCueParameters_ReturnValue_4) == 0x001048, "Member 'PlayerPawn_Athena_C_ExecuteUbergraph_PlayerPawn_Athena::CallFunc_MakeGameplayCueParameters_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_C_ExecuteUbergraph_PlayerPawn_Athena, CallFunc_IsLocallyControlled_ReturnValue_6) == 0x001118, "Member 'PlayerPawn_Athena_C_ExecuteUbergraph_PlayerPawn_Athena::CallFunc_IsLocallyControlled_ReturnValue_6' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_C_ExecuteUbergraph_PlayerPawn_Athena, K2Node_CustomEvent_isHidden_1) == 0x001119, "Member 'PlayerPawn_Athena_C_ExecuteUbergraph_PlayerPawn_Athena::K2Node_CustomEvent_isHidden_1' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_C_ExecuteUbergraph_PlayerPawn_Athena, CallFunc_GetEngineSubsystem_ReturnValue) == 0x001120, "Member 'PlayerPawn_Athena_C_ExecuteUbergraph_PlayerPawn_Athena::CallFunc_GetEngineSubsystem_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_C_ExecuteUbergraph_PlayerPawn_Athena, CallFunc_GetAbilitySystemComponent_ReturnValue_1) == 0x001128, "Member 'PlayerPawn_Athena_C_ExecuteUbergraph_PlayerPawn_Athena::CallFunc_GetAbilitySystemComponent_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_C_ExecuteUbergraph_PlayerPawn_Athena, CallFunc_BP_ApplyGameplayEffectToSelf_ReturnValue_1) == 0x001130, "Member 'PlayerPawn_Athena_C_ExecuteUbergraph_PlayerPawn_Athena::CallFunc_BP_ApplyGameplayEffectToSelf_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_C_ExecuteUbergraph_PlayerPawn_Athena, CallFunc_Multiply_VectorFloat_ReturnValue) == 0x001138, "Member 'PlayerPawn_Athena_C_ExecuteUbergraph_PlayerPawn_Athena::CallFunc_Multiply_VectorFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_C_ExecuteUbergraph_PlayerPawn_Athena, CallFunc_Divide_VectorFloat_ReturnValue) == 0x001150, "Member 'PlayerPawn_Athena_C_ExecuteUbergraph_PlayerPawn_Athena::CallFunc_Divide_VectorFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_C_ExecuteUbergraph_PlayerPawn_Athena, K2Node_Event_LastTetherPawn_1) == 0x001168, "Member 'PlayerPawn_Athena_C_ExecuteUbergraph_PlayerPawn_Athena::K2Node_Event_LastTetherPawn_1' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_C_ExecuteUbergraph_PlayerPawn_Athena, K2Node_Event_LastTetherPawn) == 0x001170, "Member 'PlayerPawn_Athena_C_ExecuteUbergraph_PlayerPawn_Athena::K2Node_Event_LastTetherPawn' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_C_ExecuteUbergraph_PlayerPawn_Athena, CallFunc_K2_GetRootComponent_ReturnValue) == 0x001178, "Member 'PlayerPawn_Athena_C_ExecuteUbergraph_PlayerPawn_Athena::CallFunc_K2_GetRootComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_C_ExecuteUbergraph_PlayerPawn_Athena, CallFunc_GetFortPlayerControllerFromActor_ReturnValue) == 0x001180, "Member 'PlayerPawn_Athena_C_ExecuteUbergraph_PlayerPawn_Athena::CallFunc_GetFortPlayerControllerFromActor_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_C_ExecuteUbergraph_PlayerPawn_Athena, CallFunc_SpawnSoundAttached_ReturnValue_2) == 0x001188, "Member 'PlayerPawn_Athena_C_ExecuteUbergraph_PlayerPawn_Athena::CallFunc_SpawnSoundAttached_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_C_ExecuteUbergraph_PlayerPawn_Athena, CallFunc_GetQuestManager_ReturnValue) == 0x001190, "Member 'PlayerPawn_Athena_C_ExecuteUbergraph_PlayerPawn_Athena::CallFunc_GetQuestManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_C_ExecuteUbergraph_PlayerPawn_Athena, CallFunc_GetTetherPawn_ReturnValue) == 0x001198, "Member 'PlayerPawn_Athena_C_ExecuteUbergraph_PlayerPawn_Athena::CallFunc_GetTetherPawn_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_C_ExecuteUbergraph_PlayerPawn_Athena, K2Node_DynamicCast_AsGameplay_Tag_Asset_Interface) == 0x0011A0, "Member 'PlayerPawn_Athena_C_ExecuteUbergraph_PlayerPawn_Athena::K2Node_DynamicCast_AsGameplay_Tag_Asset_Interface' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_C_ExecuteUbergraph_PlayerPawn_Athena, K2Node_DynamicCast_bSuccess_8) == 0x0011B0, "Member 'PlayerPawn_Athena_C_ExecuteUbergraph_PlayerPawn_Athena::K2Node_DynamicCast_bSuccess_8' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_C_ExecuteUbergraph_PlayerPawn_Athena, CallFunc_GetOwnedGameplayTags_TagContainer) == 0x0011B8, "Member 'PlayerPawn_Athena_C_ExecuteUbergraph_PlayerPawn_Athena::CallFunc_GetOwnedGameplayTags_TagContainer' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_C_ExecuteUbergraph_PlayerPawn_Athena, K2Node_MakeStruct_GameplayEventData_1) == 0x0011D8, "Member 'PlayerPawn_Athena_C_ExecuteUbergraph_PlayerPawn_Athena::K2Node_MakeStruct_GameplayEventData_1' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_C_ExecuteUbergraph_PlayerPawn_Athena, CallFunc_GetControlRotation_ReturnValue) == 0x001288, "Member 'PlayerPawn_Athena_C_ExecuteUbergraph_PlayerPawn_Athena::CallFunc_GetControlRotation_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_C_ExecuteUbergraph_PlayerPawn_Athena, K2Node_CustomEvent_PlayerAimRotation) == 0x0012A0, "Member 'PlayerPawn_Athena_C_ExecuteUbergraph_PlayerPawn_Athena::K2Node_CustomEvent_PlayerAimRotation' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_C_ExecuteUbergraph_PlayerPawn_Athena, CallFunc_K2_SetTimer_ReturnValue) == 0x0012B8, "Member 'PlayerPawn_Athena_C_ExecuteUbergraph_PlayerPawn_Athena::CallFunc_K2_SetTimer_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_C_ExecuteUbergraph_PlayerPawn_Athena, K2Node_CreateDelegate_OutputDelegate_2) == 0x0012C0, "Member 'PlayerPawn_Athena_C_ExecuteUbergraph_PlayerPawn_Athena::K2Node_CreateDelegate_OutputDelegate_2' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_C_ExecuteUbergraph_PlayerPawn_Athena, CallFunc_WhenCosmeticPartApplied_DelegateHandleController_Out) == 0x0012D0, "Member 'PlayerPawn_Athena_C_ExecuteUbergraph_PlayerPawn_Athena::CallFunc_WhenCosmeticPartApplied_DelegateHandleController_Out' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_C_ExecuteUbergraph_PlayerPawn_Athena, CallFunc_GetValueAtLevel_ReturnValue_1) == 0x0012E0, "Member 'PlayerPawn_Athena_C_ExecuteUbergraph_PlayerPawn_Athena::CallFunc_GetValueAtLevel_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_C_ExecuteUbergraph_PlayerPawn_Athena, CallFunc_MakeGameplayCueParameters_ReturnValue_5) == 0x0012E8, "Member 'PlayerPawn_Athena_C_ExecuteUbergraph_PlayerPawn_Athena::CallFunc_MakeGameplayCueParameters_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_C_ExecuteUbergraph_PlayerPawn_Athena, CallFunc_K2_SetTimer_ReturnValue_1) == 0x0013B8, "Member 'PlayerPawn_Athena_C_ExecuteUbergraph_PlayerPawn_Athena::CallFunc_K2_SetTimer_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_C_ExecuteUbergraph_PlayerPawn_Athena, CallFunc_MakeGameplayCueParameters_ReturnValue_6) == 0x0013C0, "Member 'PlayerPawn_Athena_C_ExecuteUbergraph_PlayerPawn_Athena::CallFunc_MakeGameplayCueParameters_ReturnValue_6' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_C_ExecuteUbergraph_PlayerPawn_Athena, CallFunc_MakeGameplayCueParameters_ReturnValue_7) == 0x001490, "Member 'PlayerPawn_Athena_C_ExecuteUbergraph_PlayerPawn_Athena::CallFunc_MakeGameplayCueParameters_ReturnValue_7' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_C_ExecuteUbergraph_PlayerPawn_Athena, CallFunc_MakeGameplayCueParameters_ReturnValue_8) == 0x001560, "Member 'PlayerPawn_Athena_C_ExecuteUbergraph_PlayerPawn_Athena::CallFunc_MakeGameplayCueParameters_ReturnValue_8' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_C_ExecuteUbergraph_PlayerPawn_Athena, Temp_bool_Has_Been_Initd_Variable_1) == 0x001630, "Member 'PlayerPawn_Athena_C_ExecuteUbergraph_PlayerPawn_Athena::Temp_bool_Has_Been_Initd_Variable_1' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_C_ExecuteUbergraph_PlayerPawn_Athena, Temp_bool_IsClosed_Variable_1) == 0x001631, "Member 'PlayerPawn_Athena_C_ExecuteUbergraph_PlayerPawn_Athena::Temp_bool_IsClosed_Variable_1' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_C_ExecuteUbergraph_PlayerPawn_Athena, K2Node_GameplayCueEvent_EventType_3) == 0x001632, "Member 'PlayerPawn_Athena_C_ExecuteUbergraph_PlayerPawn_Athena::K2Node_GameplayCueEvent_EventType_3' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_C_ExecuteUbergraph_PlayerPawn_Athena, K2Node_GameplayCueEvent_Parameters_3) == 0x001638, "Member 'PlayerPawn_Athena_C_ExecuteUbergraph_PlayerPawn_Athena::K2Node_GameplayCueEvent_Parameters_3' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_C_ExecuteUbergraph_PlayerPawn_Athena, K2Node_GameplayCueEvent_EventType_2) == 0x001708, "Member 'PlayerPawn_Athena_C_ExecuteUbergraph_PlayerPawn_Athena::K2Node_GameplayCueEvent_EventType_2' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_C_ExecuteUbergraph_PlayerPawn_Athena, K2Node_GameplayCueEvent_Parameters_2) == 0x001710, "Member 'PlayerPawn_Athena_C_ExecuteUbergraph_PlayerPawn_Athena::K2Node_GameplayCueEvent_Parameters_2' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_C_ExecuteUbergraph_PlayerPawn_Athena, K2Node_GameplayCueEvent_EventType_1) == 0x0017E0, "Member 'PlayerPawn_Athena_C_ExecuteUbergraph_PlayerPawn_Athena::K2Node_GameplayCueEvent_EventType_1' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_C_ExecuteUbergraph_PlayerPawn_Athena, K2Node_GameplayCueEvent_Parameters_1) == 0x0017E8, "Member 'PlayerPawn_Athena_C_ExecuteUbergraph_PlayerPawn_Athena::K2Node_GameplayCueEvent_Parameters_1' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_C_ExecuteUbergraph_PlayerPawn_Athena, K2Node_GameplayCueEvent_EventType) == 0x0018B8, "Member 'PlayerPawn_Athena_C_ExecuteUbergraph_PlayerPawn_Athena::K2Node_GameplayCueEvent_EventType' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_C_ExecuteUbergraph_PlayerPawn_Athena, K2Node_GameplayCueEvent_Parameters) == 0x0018C0, "Member 'PlayerPawn_Athena_C_ExecuteUbergraph_PlayerPawn_Athena::K2Node_GameplayCueEvent_Parameters' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_C_ExecuteUbergraph_PlayerPawn_Athena, Temp_struct_Variable) == 0x001990, "Member 'PlayerPawn_Athena_C_ExecuteUbergraph_PlayerPawn_Athena::Temp_struct_Variable' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_C_ExecuteUbergraph_PlayerPawn_Athena, CallFunc_GetAbilitySystemComponent_ReturnValue_2) == 0x0019F0, "Member 'PlayerPawn_Athena_C_ExecuteUbergraph_PlayerPawn_Athena::CallFunc_GetAbilitySystemComponent_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_C_ExecuteUbergraph_PlayerPawn_Athena, CallFunc_BP_ApplyGameplayEffectToSelf_ReturnValue_2) == 0x0019F8, "Member 'PlayerPawn_Athena_C_ExecuteUbergraph_PlayerPawn_Athena::CallFunc_BP_ApplyGameplayEffectToSelf_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_C_ExecuteUbergraph_PlayerPawn_Athena, CallFunc_AddComponent_ReturnValue) == 0x001A00, "Member 'PlayerPawn_Athena_C_ExecuteUbergraph_PlayerPawn_Athena::CallFunc_AddComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_C_ExecuteUbergraph_PlayerPawn_Athena, CallFunc_BP_ApplyGameplayEffectToSelf_ReturnValue_3) == 0x001A08, "Member 'PlayerPawn_Athena_C_ExecuteUbergraph_PlayerPawn_Athena::CallFunc_BP_ApplyGameplayEffectToSelf_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_C_ExecuteUbergraph_PlayerPawn_Athena, CallFunc_IsValid_ReturnValue_4) == 0x001A10, "Member 'PlayerPawn_Athena_C_ExecuteUbergraph_PlayerPawn_Athena::CallFunc_IsValid_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_C_ExecuteUbergraph_PlayerPawn_Athena, K2Node_CustomEvent_AbilitySystemComponent) == 0x001A18, "Member 'PlayerPawn_Athena_C_ExecuteUbergraph_PlayerPawn_Athena::K2Node_CustomEvent_AbilitySystemComponent' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_C_ExecuteUbergraph_PlayerPawn_Athena, K2Node_CustomEvent_AffectedPawn) == 0x001A20, "Member 'PlayerPawn_Athena_C_ExecuteUbergraph_PlayerPawn_Athena::K2Node_CustomEvent_AffectedPawn' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_C_ExecuteUbergraph_PlayerPawn_Athena, CallFunc_PlaylistDataReadyAsync_ReturnValue) == 0x001A28, "Member 'PlayerPawn_Athena_C_ExecuteUbergraph_PlayerPawn_Athena::CallFunc_PlaylistDataReadyAsync_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_C_ExecuteUbergraph_PlayerPawn_Athena, Temp_object_Variable) == 0x001A30, "Member 'PlayerPawn_Athena_C_ExecuteUbergraph_PlayerPawn_Athena::Temp_object_Variable' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_C_ExecuteUbergraph_PlayerPawn_Athena, CallFunc_IsValid_ReturnValue_5) == 0x001A38, "Member 'PlayerPawn_Athena_C_ExecuteUbergraph_PlayerPawn_Athena::CallFunc_IsValid_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_C_ExecuteUbergraph_PlayerPawn_Athena, CallFunc_IsDedicatedServer_ReturnValue_2) == 0x001A39, "Member 'PlayerPawn_Athena_C_ExecuteUbergraph_PlayerPawn_Athena::CallFunc_IsDedicatedServer_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_C_ExecuteUbergraph_PlayerPawn_Athena, CallFunc_EqualEqual_ByteByte_ReturnValue_1) == 0x001A3A, "Member 'PlayerPawn_Athena_C_ExecuteUbergraph_PlayerPawn_Athena::CallFunc_EqualEqual_ByteByte_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_C_ExecuteUbergraph_PlayerPawn_Athena, Temp_bool_Has_Been_Initd_Variable_2) == 0x001A3B, "Member 'PlayerPawn_Athena_C_ExecuteUbergraph_PlayerPawn_Athena::Temp_bool_Has_Been_Initd_Variable_2' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_C_ExecuteUbergraph_PlayerPawn_Athena, CallFunc_MakeGameplayCueParameters_ReturnValue_9) == 0x001A40, "Member 'PlayerPawn_Athena_C_ExecuteUbergraph_PlayerPawn_Athena::CallFunc_MakeGameplayCueParameters_ReturnValue_9' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_C_ExecuteUbergraph_PlayerPawn_Athena, Temp_object_Variable_1) == 0x001B10, "Member 'PlayerPawn_Athena_C_ExecuteUbergraph_PlayerPawn_Athena::Temp_object_Variable_1' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_C_ExecuteUbergraph_PlayerPawn_Athena, Temp_struct_Variable_1) == 0x001B18, "Member 'PlayerPawn_Athena_C_ExecuteUbergraph_PlayerPawn_Athena::Temp_struct_Variable_1' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_C_ExecuteUbergraph_PlayerPawn_Athena, CallFunc_MakeGameplayCueParameters_ReturnValue_10) == 0x001B38, "Member 'PlayerPawn_Athena_C_ExecuteUbergraph_PlayerPawn_Athena::CallFunc_MakeGameplayCueParameters_ReturnValue_10' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_C_ExecuteUbergraph_PlayerPawn_Athena, K2Node_CustomEvent_GameState) == 0x001C08, "Member 'PlayerPawn_Athena_C_ExecuteUbergraph_PlayerPawn_Athena::K2Node_CustomEvent_GameState' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_C_ExecuteUbergraph_PlayerPawn_Athena, K2Node_CustomEvent_Playlist) == 0x001C10, "Member 'PlayerPawn_Athena_C_ExecuteUbergraph_PlayerPawn_Athena::K2Node_CustomEvent_Playlist' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_C_ExecuteUbergraph_PlayerPawn_Athena, K2Node_CustomEvent_PlaylistContextTags) == 0x001C18, "Member 'PlayerPawn_Athena_C_ExecuteUbergraph_PlayerPawn_Athena::K2Node_CustomEvent_PlaylistContextTags' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_C_ExecuteUbergraph_PlayerPawn_Athena, K2Node_CreateDelegate_OutputDelegate_3) == 0x001C38, "Member 'PlayerPawn_Athena_C_ExecuteUbergraph_PlayerPawn_Athena::K2Node_CreateDelegate_OutputDelegate_3' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_C_ExecuteUbergraph_PlayerPawn_Athena, CallFunc_CreateAnimInputEvent_ReturnValue) == 0x001C48, "Member 'PlayerPawn_Athena_C_ExecuteUbergraph_PlayerPawn_Athena::CallFunc_CreateAnimInputEvent_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_C_ExecuteUbergraph_PlayerPawn_Athena, CallFunc_CreateAnimInputEvent_ReturnValue_1) == 0x001C50, "Member 'PlayerPawn_Athena_C_ExecuteUbergraph_PlayerPawn_Athena::CallFunc_CreateAnimInputEvent_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_C_ExecuteUbergraph_PlayerPawn_Athena, CallFunc_CreateAnimInputEvent_ReturnValue_2) == 0x001C58, "Member 'PlayerPawn_Athena_C_ExecuteUbergraph_PlayerPawn_Athena::CallFunc_CreateAnimInputEvent_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_C_ExecuteUbergraph_PlayerPawn_Athena, CallFunc_CreateAnimInputEvent_ReturnValue_3) == 0x001C60, "Member 'PlayerPawn_Athena_C_ExecuteUbergraph_PlayerPawn_Athena::CallFunc_CreateAnimInputEvent_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_C_ExecuteUbergraph_PlayerPawn_Athena, Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable) == 0x001C68, "Member 'PlayerPawn_Athena_C_ExecuteUbergraph_PlayerPawn_Athena::Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_C_ExecuteUbergraph_PlayerPawn_Athena, K2Node_Event_Source_1) == 0x001C70, "Member 'PlayerPawn_Athena_C_ExecuteUbergraph_PlayerPawn_Athena::K2Node_Event_Source_1' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_C_ExecuteUbergraph_PlayerPawn_Athena, K2Node_Event_Highlight) == 0x001C78, "Member 'PlayerPawn_Athena_C_ExecuteUbergraph_PlayerPawn_Athena::K2Node_Event_Highlight' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_C_ExecuteUbergraph_PlayerPawn_Athena, K2Node_Event_OnlyUpdateIfCurrent) == 0x001CA8, "Member 'PlayerPawn_Athena_C_ExecuteUbergraph_PlayerPawn_Athena::K2Node_Event_OnlyUpdateIfCurrent' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_C_ExecuteUbergraph_PlayerPawn_Athena, K2Node_Event_Source) == 0x001CB0, "Member 'PlayerPawn_Athena_C_ExecuteUbergraph_PlayerPawn_Athena::K2Node_Event_Source' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_C_ExecuteUbergraph_PlayerPawn_Athena, K2Node_Event_MyComp) == 0x001CB8, "Member 'PlayerPawn_Athena_C_ExecuteUbergraph_PlayerPawn_Athena::K2Node_Event_MyComp' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_C_ExecuteUbergraph_PlayerPawn_Athena, K2Node_Event_Other) == 0x001CC0, "Member 'PlayerPawn_Athena_C_ExecuteUbergraph_PlayerPawn_Athena::K2Node_Event_Other' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_C_ExecuteUbergraph_PlayerPawn_Athena, K2Node_Event_OtherComp) == 0x001CC8, "Member 'PlayerPawn_Athena_C_ExecuteUbergraph_PlayerPawn_Athena::K2Node_Event_OtherComp' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_C_ExecuteUbergraph_PlayerPawn_Athena, K2Node_Event_bSelfMoved) == 0x001CD0, "Member 'PlayerPawn_Athena_C_ExecuteUbergraph_PlayerPawn_Athena::K2Node_Event_bSelfMoved' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_C_ExecuteUbergraph_PlayerPawn_Athena, K2Node_Event_HitLocation_1) == 0x001CD8, "Member 'PlayerPawn_Athena_C_ExecuteUbergraph_PlayerPawn_Athena::K2Node_Event_HitLocation_1' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_C_ExecuteUbergraph_PlayerPawn_Athena, K2Node_Event_HitNormal) == 0x001CF0, "Member 'PlayerPawn_Athena_C_ExecuteUbergraph_PlayerPawn_Athena::K2Node_Event_HitNormal' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_C_ExecuteUbergraph_PlayerPawn_Athena, K2Node_Event_NormalImpulse) == 0x001D08, "Member 'PlayerPawn_Athena_C_ExecuteUbergraph_PlayerPawn_Athena::K2Node_Event_NormalImpulse' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_C_ExecuteUbergraph_PlayerPawn_Athena, K2Node_Event_Hit) == 0x001D20, "Member 'PlayerPawn_Athena_C_ExecuteUbergraph_PlayerPawn_Athena::K2Node_Event_Hit' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_C_ExecuteUbergraph_PlayerPawn_Athena, Temp_bool_IsClosed_Variable_2) == 0x001E00, "Member 'PlayerPawn_Athena_C_ExecuteUbergraph_PlayerPawn_Athena::Temp_bool_IsClosed_Variable_2' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_C_ExecuteUbergraph_PlayerPawn_Athena, CallFunc_IsDedicatedServer_ReturnValue_3) == 0x001E01, "Member 'PlayerPawn_Athena_C_ExecuteUbergraph_PlayerPawn_Athena::CallFunc_IsDedicatedServer_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_C_ExecuteUbergraph_PlayerPawn_Athena, CallFunc_IsDedicatedServer_ReturnValue_4) == 0x001E02, "Member 'PlayerPawn_Athena_C_ExecuteUbergraph_PlayerPawn_Athena::CallFunc_IsDedicatedServer_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_C_ExecuteUbergraph_PlayerPawn_Athena, CallFunc_GetPawnIsInLocalSquad_IsInLocalSquad) == 0x001E03, "Member 'PlayerPawn_Athena_C_ExecuteUbergraph_PlayerPawn_Athena::CallFunc_GetPawnIsInLocalSquad_IsInLocalSquad' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_C_ExecuteUbergraph_PlayerPawn_Athena, K2Node_Event_DamageDealt) == 0x001E04, "Member 'PlayerPawn_Athena_C_ExecuteUbergraph_PlayerPawn_Athena::K2Node_Event_DamageDealt' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_C_ExecuteUbergraph_PlayerPawn_Athena, K2Node_Event_bCriticalHit) == 0x001E08, "Member 'PlayerPawn_Athena_C_ExecuteUbergraph_PlayerPawn_Athena::K2Node_Event_bCriticalHit' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_C_ExecuteUbergraph_PlayerPawn_Athena, K2Node_Event_bFatalHit) == 0x001E09, "Member 'PlayerPawn_Athena_C_ExecuteUbergraph_PlayerPawn_Athena::K2Node_Event_bFatalHit' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_C_ExecuteUbergraph_PlayerPawn_Athena, K2Node_Event_bShieldHit) == 0x001E0A, "Member 'PlayerPawn_Athena_C_ExecuteUbergraph_PlayerPawn_Athena::K2Node_Event_bShieldHit' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_C_ExecuteUbergraph_PlayerPawn_Athena, K2Node_Event_HitActor) == 0x001E10, "Member 'PlayerPawn_Athena_C_ExecuteUbergraph_PlayerPawn_Athena::K2Node_Event_HitActor' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_C_ExecuteUbergraph_PlayerPawn_Athena, K2Node_Event_HitTags) == 0x001E18, "Member 'PlayerPawn_Athena_C_ExecuteUbergraph_PlayerPawn_Athena::K2Node_Event_HitTags' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_C_ExecuteUbergraph_PlayerPawn_Athena, K2Node_Event_HitLocation) == 0x001E38, "Member 'PlayerPawn_Athena_C_ExecuteUbergraph_PlayerPawn_Athena::K2Node_Event_HitLocation' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_C_ExecuteUbergraph_PlayerPawn_Athena, K2Node_CustomEvent_isHidden) == 0x001E50, "Member 'PlayerPawn_Athena_C_ExecuteUbergraph_PlayerPawn_Athena::K2Node_CustomEvent_isHidden' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_C_ExecuteUbergraph_PlayerPawn_Athena, K2Node_CreateDelegate_OutputDelegate_4) == 0x001E54, "Member 'PlayerPawn_Athena_C_ExecuteUbergraph_PlayerPawn_Athena::K2Node_CreateDelegate_OutputDelegate_4' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_C_ExecuteUbergraph_PlayerPawn_Athena, Temp_struct_Variable_2) == 0x001E60, "Member 'PlayerPawn_Athena_C_ExecuteUbergraph_PlayerPawn_Athena::Temp_struct_Variable_2' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_C_ExecuteUbergraph_PlayerPawn_Athena, K2Node_CustomEvent_Pawn) == 0x001E80, "Member 'PlayerPawn_Athena_C_ExecuteUbergraph_PlayerPawn_Athena::K2Node_CustomEvent_Pawn' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_C_ExecuteUbergraph_PlayerPawn_Athena, K2Node_CustomEvent_Part) == 0x001E88, "Member 'PlayerPawn_Athena_C_ExecuteUbergraph_PlayerPawn_Athena::K2Node_CustomEvent_Part' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_C_ExecuteUbergraph_PlayerPawn_Athena, K2Node_CustomEvent_MeshPart) == 0x001E90, "Member 'PlayerPawn_Athena_C_ExecuteUbergraph_PlayerPawn_Athena::K2Node_CustomEvent_MeshPart' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_C_ExecuteUbergraph_PlayerPawn_Athena, K2Node_CustomEvent_PartType) == 0x001E98, "Member 'PlayerPawn_Athena_C_ExecuteUbergraph_PlayerPawn_Athena::K2Node_CustomEvent_PartType' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_C_ExecuteUbergraph_PlayerPawn_Athena, CallFunc_IsValid_ReturnValue_6) == 0x001E99, "Member 'PlayerPawn_Athena_C_ExecuteUbergraph_PlayerPawn_Athena::CallFunc_IsValid_ReturnValue_6' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_C_ExecuteUbergraph_PlayerPawn_Athena, CallFunc_GetChildrenComponents_Children) == 0x001EA0, "Member 'PlayerPawn_Athena_C_ExecuteUbergraph_PlayerPawn_Athena::CallFunc_GetChildrenComponents_Children' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_C_ExecuteUbergraph_PlayerPawn_Athena, CallFunc_Array_Get_Item) == 0x001EB0, "Member 'PlayerPawn_Athena_C_ExecuteUbergraph_PlayerPawn_Athena::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_C_ExecuteUbergraph_PlayerPawn_Athena, CallFunc_Array_Length_ReturnValue_1) == 0x001EB8, "Member 'PlayerPawn_Athena_C_ExecuteUbergraph_PlayerPawn_Athena::CallFunc_Array_Length_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_C_ExecuteUbergraph_PlayerPawn_Athena, CallFunc_Less_IntInt_ReturnValue) == 0x001EBC, "Member 'PlayerPawn_Athena_C_ExecuteUbergraph_PlayerPawn_Athena::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_C_ExecuteUbergraph_PlayerPawn_Athena, CallFunc_GetOwner_ReturnValue) == 0x001EC0, "Member 'PlayerPawn_Athena_C_ExecuteUbergraph_PlayerPawn_Athena::CallFunc_GetOwner_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_C_ExecuteUbergraph_PlayerPawn_Athena, CallFunc_IsValid_ReturnValue_7) == 0x001EC8, "Member 'PlayerPawn_Athena_C_ExecuteUbergraph_PlayerPawn_Athena::CallFunc_IsValid_ReturnValue_7' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_C_ExecuteUbergraph_PlayerPawn_Athena, CallFunc_ComponentHasTag_ReturnValue) == 0x001EC9, "Member 'PlayerPawn_Athena_C_ExecuteUbergraph_PlayerPawn_Athena::CallFunc_ComponentHasTag_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_C_ExecuteUbergraph_PlayerPawn_Athena, CallFunc_K2_SetTimer_ReturnValue_2) == 0x001ED0, "Member 'PlayerPawn_Athena_C_ExecuteUbergraph_PlayerPawn_Athena::CallFunc_K2_SetTimer_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_C_ExecuteUbergraph_PlayerPawn_Athena, K2Node_Event_Damage) == 0x001ED8, "Member 'PlayerPawn_Athena_C_ExecuteUbergraph_PlayerPawn_Athena::K2Node_Event_Damage' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_C_ExecuteUbergraph_PlayerPawn_Athena, K2Node_Event_DamageTags) == 0x001EE0, "Member 'PlayerPawn_Athena_C_ExecuteUbergraph_PlayerPawn_Athena::K2Node_Event_DamageTags' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_C_ExecuteUbergraph_PlayerPawn_Athena, K2Node_Event_Momentum) == 0x001F00, "Member 'PlayerPawn_Athena_C_ExecuteUbergraph_PlayerPawn_Athena::K2Node_Event_Momentum' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_C_ExecuteUbergraph_PlayerPawn_Athena, K2Node_Event_HitInfo) == 0x001F18, "Member 'PlayerPawn_Athena_C_ExecuteUbergraph_PlayerPawn_Athena::K2Node_Event_HitInfo' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_C_ExecuteUbergraph_PlayerPawn_Athena, K2Node_Event_InstigatedBy) == 0x001FF8, "Member 'PlayerPawn_Athena_C_ExecuteUbergraph_PlayerPawn_Athena::K2Node_Event_InstigatedBy' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_C_ExecuteUbergraph_PlayerPawn_Athena, K2Node_Event_DamageCauser) == 0x002000, "Member 'PlayerPawn_Athena_C_ExecuteUbergraph_PlayerPawn_Athena::K2Node_Event_DamageCauser' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_C_ExecuteUbergraph_PlayerPawn_Athena, K2Node_Event_EffectContext) == 0x002008, "Member 'PlayerPawn_Athena_C_ExecuteUbergraph_PlayerPawn_Athena::K2Node_Event_EffectContext' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_C_ExecuteUbergraph_PlayerPawn_Athena, K2Node_CustomEvent_FortPawn) == 0x002020, "Member 'PlayerPawn_Athena_C_ExecuteUbergraph_PlayerPawn_Athena::K2Node_CustomEvent_FortPawn' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_C_ExecuteUbergraph_PlayerPawn_Athena, K2Node_CustomEvent_bInIsDBNO) == 0x002028, "Member 'PlayerPawn_Athena_C_ExecuteUbergraph_PlayerPawn_Athena::K2Node_CustomEvent_bInIsDBNO' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_C_ExecuteUbergraph_PlayerPawn_Athena, K2Node_CreateDelegate_OutputDelegate_5) == 0x00202C, "Member 'PlayerPawn_Athena_C_ExecuteUbergraph_PlayerPawn_Athena::K2Node_CreateDelegate_OutputDelegate_5' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_C_ExecuteUbergraph_PlayerPawn_Athena, CallFunc_GetActorTeam_ReturnValue) == 0x002038, "Member 'PlayerPawn_Athena_C_ExecuteUbergraph_PlayerPawn_Athena::CallFunc_GetActorTeam_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_C_ExecuteUbergraph_PlayerPawn_Athena, CallFunc_GetTeamAffiliationToLocalPlayer_ReturnValue) == 0x002039, "Member 'PlayerPawn_Athena_C_ExecuteUbergraph_PlayerPawn_Athena::CallFunc_GetTeamAffiliationToLocalPlayer_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_C_ExecuteUbergraph_PlayerPawn_Athena, K2Node_CreateDelegate_OutputDelegate_6) == 0x00203C, "Member 'PlayerPawn_Athena_C_ExecuteUbergraph_PlayerPawn_Athena::K2Node_CreateDelegate_OutputDelegate_6' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_C_ExecuteUbergraph_PlayerPawn_Athena, K2Node_SwitchEnum_CmpSuccess_3) == 0x002048, "Member 'PlayerPawn_Athena_C_ExecuteUbergraph_PlayerPawn_Athena::K2Node_SwitchEnum_CmpSuccess_3' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_C_ExecuteUbergraph_PlayerPawn_Athena, CallFunc_K2_SetTimerDelegate_ReturnValue) == 0x002050, "Member 'PlayerPawn_Athena_C_ExecuteUbergraph_PlayerPawn_Athena::CallFunc_K2_SetTimerDelegate_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_C_ExecuteUbergraph_PlayerPawn_Athena, CallFunc_RetriggerableDelay_Duration_ImplicitCast) == 0x002058, "Member 'PlayerPawn_Athena_C_ExecuteUbergraph_PlayerPawn_Athena::CallFunc_RetriggerableDelay_Duration_ImplicitCast' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_C_ExecuteUbergraph_PlayerPawn_Athena, CallFunc_ActivateInvincibleVisuals_Duration_ImplicitCast) == 0x002060, "Member 'PlayerPawn_Athena_C_ExecuteUbergraph_PlayerPawn_Athena::CallFunc_ActivateInvincibleVisuals_Duration_ImplicitCast' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_C_ExecuteUbergraph_PlayerPawn_Athena, CallFunc_RetriggerableDelay_Duration_ImplicitCast_1) == 0x002068, "Member 'PlayerPawn_Athena_C_ExecuteUbergraph_PlayerPawn_Athena::CallFunc_RetriggerableDelay_Duration_ImplicitCast_1' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_C_ExecuteUbergraph_PlayerPawn_Athena, CallFunc_Delay_Duration_ImplicitCast) == 0x00206C, "Member 'PlayerPawn_Athena_C_ExecuteUbergraph_PlayerPawn_Athena::CallFunc_Delay_Duration_ImplicitCast' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_C_ExecuteUbergraph_PlayerPawn_Athena, CallFunc_LessEqual_DoubleDouble_A_ImplicitCast) == 0x002070, "Member 'PlayerPawn_Athena_C_ExecuteUbergraph_PlayerPawn_Athena::CallFunc_LessEqual_DoubleDouble_A_ImplicitCast' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_C_ExecuteUbergraph_PlayerPawn_Athena, CallFunc_Less_DoubleDouble_A_ImplicitCast) == 0x002078, "Member 'PlayerPawn_Athena_C_ExecuteUbergraph_PlayerPawn_Athena::CallFunc_Less_DoubleDouble_A_ImplicitCast' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_C_ExecuteUbergraph_PlayerPawn_Athena, CallFunc_ActivateInvincibleVisuals_Duration_ImplicitCast_1) == 0x002080, "Member 'PlayerPawn_Athena_C_ExecuteUbergraph_PlayerPawn_Athena::CallFunc_ActivateInvincibleVisuals_Duration_ImplicitCast_1' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_C_ExecuteUbergraph_PlayerPawn_Athena, CallFunc_EqualEqual_DoubleDouble_A_ImplicitCast) == 0x002088, "Member 'PlayerPawn_Athena_C_ExecuteUbergraph_PlayerPawn_Athena::CallFunc_EqualEqual_DoubleDouble_A_ImplicitCast' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_C_ExecuteUbergraph_PlayerPawn_Athena, CallFunc_MapRangeClamped_Value_ImplicitCast) == 0x002090, "Member 'PlayerPawn_Athena_C_ExecuteUbergraph_PlayerPawn_Athena::CallFunc_MapRangeClamped_Value_ImplicitCast' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_C_ExecuteUbergraph_PlayerPawn_Athena, CallFunc_InvokeWaterJumpSplash_SplashScale_ImplicitCast) == 0x002098, "Member 'PlayerPawn_Athena_C_ExecuteUbergraph_PlayerPawn_Athena::CallFunc_InvokeWaterJumpSplash_SplashScale_ImplicitCast' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_C_ExecuteUbergraph_PlayerPawn_Athena, K2Node_CallDelegate_Damage_ImplicitCast) == 0x0020A0, "Member 'PlayerPawn_Athena_C_ExecuteUbergraph_PlayerPawn_Athena::K2Node_CallDelegate_Damage_ImplicitCast' has a wrong offset!");

struct PlayerPawn_Athena_C_FindBounds final
{
public:
	bool                                          bGunTrue;
	uint8                                         Pad_1[0x7];
	struct FVector                                CallFunc_GetActorBounds_Origin;
	struct FVector                                CallFunc_GetActorBounds_BoxExtent;
	struct FVector                                CallFunc_BreakTransform_Location;
	struct FRotator                               CallFunc_BreakTransform_Rotation;
	struct FVector                                CallFunc_BreakTransform_Scale;
	struct FVector                                CallFunc_Multiply_VectorVector_ReturnValue;
	double                                        CallFunc_BreakVector_X;
	double                                        CallFunc_BreakVector_Y;
	double                                        CallFunc_BreakVector_Z;
	struct FTransform                             CallFunc_MakeTransform_ReturnValue;
	double                                        CallFunc_Multiply_DoubleDouble_ReturnValue;
	struct FVector                                CallFunc_MakeVector_ReturnValue;
	struct FTransform                             CallFunc_MakeTransform_ReturnValue_1;
	struct FVector                                CallFunc_BreakTransform_Location_1;
	struct FRotator                               CallFunc_BreakTransform_Rotation_1;
	struct FVector                                CallFunc_BreakTransform_Scale_1;
	double                                        CallFunc_VSize_ReturnValue;
};
static_assert(alignof(PlayerPawn_Athena_C_FindBounds) == 0x000010, "Wrong alignment on PlayerPawn_Athena_C_FindBounds");
static_assert(sizeof(PlayerPawn_Athena_C_FindBounds) == 0x0001E0, "Wrong size on PlayerPawn_Athena_C_FindBounds");
static_assert(offsetof(PlayerPawn_Athena_C_FindBounds, bGunTrue) == 0x000000, "Member 'PlayerPawn_Athena_C_FindBounds::bGunTrue' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_C_FindBounds, CallFunc_GetActorBounds_Origin) == 0x000008, "Member 'PlayerPawn_Athena_C_FindBounds::CallFunc_GetActorBounds_Origin' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_C_FindBounds, CallFunc_GetActorBounds_BoxExtent) == 0x000020, "Member 'PlayerPawn_Athena_C_FindBounds::CallFunc_GetActorBounds_BoxExtent' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_C_FindBounds, CallFunc_BreakTransform_Location) == 0x000038, "Member 'PlayerPawn_Athena_C_FindBounds::CallFunc_BreakTransform_Location' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_C_FindBounds, CallFunc_BreakTransform_Rotation) == 0x000050, "Member 'PlayerPawn_Athena_C_FindBounds::CallFunc_BreakTransform_Rotation' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_C_FindBounds, CallFunc_BreakTransform_Scale) == 0x000068, "Member 'PlayerPawn_Athena_C_FindBounds::CallFunc_BreakTransform_Scale' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_C_FindBounds, CallFunc_Multiply_VectorVector_ReturnValue) == 0x000080, "Member 'PlayerPawn_Athena_C_FindBounds::CallFunc_Multiply_VectorVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_C_FindBounds, CallFunc_BreakVector_X) == 0x000098, "Member 'PlayerPawn_Athena_C_FindBounds::CallFunc_BreakVector_X' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_C_FindBounds, CallFunc_BreakVector_Y) == 0x0000A0, "Member 'PlayerPawn_Athena_C_FindBounds::CallFunc_BreakVector_Y' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_C_FindBounds, CallFunc_BreakVector_Z) == 0x0000A8, "Member 'PlayerPawn_Athena_C_FindBounds::CallFunc_BreakVector_Z' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_C_FindBounds, CallFunc_MakeTransform_ReturnValue) == 0x0000B0, "Member 'PlayerPawn_Athena_C_FindBounds::CallFunc_MakeTransform_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_C_FindBounds, CallFunc_Multiply_DoubleDouble_ReturnValue) == 0x000110, "Member 'PlayerPawn_Athena_C_FindBounds::CallFunc_Multiply_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_C_FindBounds, CallFunc_MakeVector_ReturnValue) == 0x000118, "Member 'PlayerPawn_Athena_C_FindBounds::CallFunc_MakeVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_C_FindBounds, CallFunc_MakeTransform_ReturnValue_1) == 0x000130, "Member 'PlayerPawn_Athena_C_FindBounds::CallFunc_MakeTransform_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_C_FindBounds, CallFunc_BreakTransform_Location_1) == 0x000190, "Member 'PlayerPawn_Athena_C_FindBounds::CallFunc_BreakTransform_Location_1' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_C_FindBounds, CallFunc_BreakTransform_Rotation_1) == 0x0001A8, "Member 'PlayerPawn_Athena_C_FindBounds::CallFunc_BreakTransform_Rotation_1' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_C_FindBounds, CallFunc_BreakTransform_Scale_1) == 0x0001C0, "Member 'PlayerPawn_Athena_C_FindBounds::CallFunc_BreakTransform_Scale_1' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_C_FindBounds, CallFunc_VSize_ReturnValue) == 0x0001D8, "Member 'PlayerPawn_Athena_C_FindBounds::CallFunc_VSize_ReturnValue' has a wrong offset!");

struct PlayerPawn_Athena_C_GalileoMaterialSetup final
{
public:
	int32                                         Temp_int_Array_Index_Variable;
	int32                                         Temp_int_Loop_Counter_Variable;
	int32                                         CallFunc_Add_IntInt_ReturnValue;
	int32                                         CallFunc_Array_Length_ReturnValue;
	class UMaterialInstanceDynamic*               CallFunc_Array_Get_Item;
	bool                                          CallFunc_Less_IntInt_ReturnValue;
};
static_assert(alignof(PlayerPawn_Athena_C_GalileoMaterialSetup) == 0x000008, "Wrong alignment on PlayerPawn_Athena_C_GalileoMaterialSetup");
static_assert(sizeof(PlayerPawn_Athena_C_GalileoMaterialSetup) == 0x000020, "Wrong size on PlayerPawn_Athena_C_GalileoMaterialSetup");
static_assert(offsetof(PlayerPawn_Athena_C_GalileoMaterialSetup, Temp_int_Array_Index_Variable) == 0x000000, "Member 'PlayerPawn_Athena_C_GalileoMaterialSetup::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_C_GalileoMaterialSetup, Temp_int_Loop_Counter_Variable) == 0x000004, "Member 'PlayerPawn_Athena_C_GalileoMaterialSetup::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_C_GalileoMaterialSetup, CallFunc_Add_IntInt_ReturnValue) == 0x000008, "Member 'PlayerPawn_Athena_C_GalileoMaterialSetup::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_C_GalileoMaterialSetup, CallFunc_Array_Length_ReturnValue) == 0x00000C, "Member 'PlayerPawn_Athena_C_GalileoMaterialSetup::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_C_GalileoMaterialSetup, CallFunc_Array_Get_Item) == 0x000010, "Member 'PlayerPawn_Athena_C_GalileoMaterialSetup::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_C_GalileoMaterialSetup, CallFunc_Less_IntInt_ReturnValue) == 0x000018, "Member 'PlayerPawn_Athena_C_GalileoMaterialSetup::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");

struct PlayerPawn_Athena_C_GameplayCue_Abilities_Activation_DBNOEnter final
{
public:
	EGameplayCueEvent                             EventType;
	uint8                                         Pad_1[0x7];
	struct FGameplayCueParameters                 Parameters;
};
static_assert(alignof(PlayerPawn_Athena_C_GameplayCue_Abilities_Activation_DBNOEnter) == 0x000008, "Wrong alignment on PlayerPawn_Athena_C_GameplayCue_Abilities_Activation_DBNOEnter");
static_assert(sizeof(PlayerPawn_Athena_C_GameplayCue_Abilities_Activation_DBNOEnter) == 0x0000D8, "Wrong size on PlayerPawn_Athena_C_GameplayCue_Abilities_Activation_DBNOEnter");
static_assert(offsetof(PlayerPawn_Athena_C_GameplayCue_Abilities_Activation_DBNOEnter, EventType) == 0x000000, "Member 'PlayerPawn_Athena_C_GameplayCue_Abilities_Activation_DBNOEnter::EventType' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_C_GameplayCue_Abilities_Activation_DBNOEnter, Parameters) == 0x000008, "Member 'PlayerPawn_Athena_C_GameplayCue_Abilities_Activation_DBNOEnter::Parameters' has a wrong offset!");

struct PlayerPawn_Athena_C_GameplayCue_Abilities_Activation_DBNOResurrect final
{
public:
	EGameplayCueEvent                             EventType;
	uint8                                         Pad_1[0x7];
	struct FGameplayCueParameters                 Parameters;
};
static_assert(alignof(PlayerPawn_Athena_C_GameplayCue_Abilities_Activation_DBNOResurrect) == 0x000008, "Wrong alignment on PlayerPawn_Athena_C_GameplayCue_Abilities_Activation_DBNOResurrect");
static_assert(sizeof(PlayerPawn_Athena_C_GameplayCue_Abilities_Activation_DBNOResurrect) == 0x0000D8, "Wrong size on PlayerPawn_Athena_C_GameplayCue_Abilities_Activation_DBNOResurrect");
static_assert(offsetof(PlayerPawn_Athena_C_GameplayCue_Abilities_Activation_DBNOResurrect, EventType) == 0x000000, "Member 'PlayerPawn_Athena_C_GameplayCue_Abilities_Activation_DBNOResurrect::EventType' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_C_GameplayCue_Abilities_Activation_DBNOResurrect, Parameters) == 0x000008, "Member 'PlayerPawn_Athena_C_GameplayCue_Abilities_Activation_DBNOResurrect::Parameters' has a wrong offset!");

struct PlayerPawn_Athena_C_GameplayCue_Abilities_Activation_Generic_HarvestBuff_Tier1 final
{
public:
	EGameplayCueEvent                             EventType;
	uint8                                         Pad_1[0x7];
	struct FGameplayCueParameters                 Parameters;
};
static_assert(alignof(PlayerPawn_Athena_C_GameplayCue_Abilities_Activation_Generic_HarvestBuff_Tier1) == 0x000008, "Wrong alignment on PlayerPawn_Athena_C_GameplayCue_Abilities_Activation_Generic_HarvestBuff_Tier1");
static_assert(sizeof(PlayerPawn_Athena_C_GameplayCue_Abilities_Activation_Generic_HarvestBuff_Tier1) == 0x0000D8, "Wrong size on PlayerPawn_Athena_C_GameplayCue_Abilities_Activation_Generic_HarvestBuff_Tier1");
static_assert(offsetof(PlayerPawn_Athena_C_GameplayCue_Abilities_Activation_Generic_HarvestBuff_Tier1, EventType) == 0x000000, "Member 'PlayerPawn_Athena_C_GameplayCue_Abilities_Activation_Generic_HarvestBuff_Tier1::EventType' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_C_GameplayCue_Abilities_Activation_Generic_HarvestBuff_Tier1, Parameters) == 0x000008, "Member 'PlayerPawn_Athena_C_GameplayCue_Abilities_Activation_Generic_HarvestBuff_Tier1::Parameters' has a wrong offset!");

struct PlayerPawn_Athena_C_GameplayCue_Abilities_Activation_Generic_HarvestBuff_Tier2 final
{
public:
	EGameplayCueEvent                             EventType;
	uint8                                         Pad_1[0x7];
	struct FGameplayCueParameters                 Parameters;
};
static_assert(alignof(PlayerPawn_Athena_C_GameplayCue_Abilities_Activation_Generic_HarvestBuff_Tier2) == 0x000008, "Wrong alignment on PlayerPawn_Athena_C_GameplayCue_Abilities_Activation_Generic_HarvestBuff_Tier2");
static_assert(sizeof(PlayerPawn_Athena_C_GameplayCue_Abilities_Activation_Generic_HarvestBuff_Tier2) == 0x0000D8, "Wrong size on PlayerPawn_Athena_C_GameplayCue_Abilities_Activation_Generic_HarvestBuff_Tier2");
static_assert(offsetof(PlayerPawn_Athena_C_GameplayCue_Abilities_Activation_Generic_HarvestBuff_Tier2, EventType) == 0x000000, "Member 'PlayerPawn_Athena_C_GameplayCue_Abilities_Activation_Generic_HarvestBuff_Tier2::EventType' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_C_GameplayCue_Abilities_Activation_Generic_HarvestBuff_Tier2, Parameters) == 0x000008, "Member 'PlayerPawn_Athena_C_GameplayCue_Abilities_Activation_Generic_HarvestBuff_Tier2::Parameters' has a wrong offset!");

struct PlayerPawn_Athena_C_GameplayCue_Athena_Boost final
{
public:
	EGameplayCueEvent                             EventType;
	uint8                                         Pad_1[0x7];
	struct FGameplayCueParameters                 Parameters;
};
static_assert(alignof(PlayerPawn_Athena_C_GameplayCue_Athena_Boost) == 0x000008, "Wrong alignment on PlayerPawn_Athena_C_GameplayCue_Athena_Boost");
static_assert(sizeof(PlayerPawn_Athena_C_GameplayCue_Athena_Boost) == 0x0000D8, "Wrong size on PlayerPawn_Athena_C_GameplayCue_Athena_Boost");
static_assert(offsetof(PlayerPawn_Athena_C_GameplayCue_Athena_Boost, EventType) == 0x000000, "Member 'PlayerPawn_Athena_C_GameplayCue_Athena_Boost::EventType' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_C_GameplayCue_Athena_Boost, Parameters) == 0x000008, "Member 'PlayerPawn_Athena_C_GameplayCue_Athena_Boost::Parameters' has a wrong offset!");

struct PlayerPawn_Athena_C_GameplayCue_Athena_Equipping final
{
public:
	EGameplayCueEvent                             EventType;
	uint8                                         Pad_1[0x7];
	struct FGameplayCueParameters                 Parameters;
};
static_assert(alignof(PlayerPawn_Athena_C_GameplayCue_Athena_Equipping) == 0x000008, "Wrong alignment on PlayerPawn_Athena_C_GameplayCue_Athena_Equipping");
static_assert(sizeof(PlayerPawn_Athena_C_GameplayCue_Athena_Equipping) == 0x0000D8, "Wrong size on PlayerPawn_Athena_C_GameplayCue_Athena_Equipping");
static_assert(offsetof(PlayerPawn_Athena_C_GameplayCue_Athena_Equipping, EventType) == 0x000000, "Member 'PlayerPawn_Athena_C_GameplayCue_Athena_Equipping::EventType' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_C_GameplayCue_Athena_Equipping, Parameters) == 0x000008, "Member 'PlayerPawn_Athena_C_GameplayCue_Athena_Equipping::Parameters' has a wrong offset!");

struct PlayerPawn_Athena_C_GameplayCue_Athena_Player_BeingRevivedFromDBNO final
{
public:
	EGameplayCueEvent                             EventType;
	uint8                                         Pad_1[0x7];
	struct FGameplayCueParameters                 Parameters;
};
static_assert(alignof(PlayerPawn_Athena_C_GameplayCue_Athena_Player_BeingRevivedFromDBNO) == 0x000008, "Wrong alignment on PlayerPawn_Athena_C_GameplayCue_Athena_Player_BeingRevivedFromDBNO");
static_assert(sizeof(PlayerPawn_Athena_C_GameplayCue_Athena_Player_BeingRevivedFromDBNO) == 0x0000D8, "Wrong size on PlayerPawn_Athena_C_GameplayCue_Athena_Player_BeingRevivedFromDBNO");
static_assert(offsetof(PlayerPawn_Athena_C_GameplayCue_Athena_Player_BeingRevivedFromDBNO, EventType) == 0x000000, "Member 'PlayerPawn_Athena_C_GameplayCue_Athena_Player_BeingRevivedFromDBNO::EventType' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_C_GameplayCue_Athena_Player_BeingRevivedFromDBNO, Parameters) == 0x000008, "Member 'PlayerPawn_Athena_C_GameplayCue_Athena_Player_BeingRevivedFromDBNO::Parameters' has a wrong offset!");

struct PlayerPawn_Athena_C_GameplayCue_Athena_Reloading final
{
public:
	EGameplayCueEvent                             EventType;
	uint8                                         Pad_1[0x7];
	struct FGameplayCueParameters                 Parameters;
};
static_assert(alignof(PlayerPawn_Athena_C_GameplayCue_Athena_Reloading) == 0x000008, "Wrong alignment on PlayerPawn_Athena_C_GameplayCue_Athena_Reloading");
static_assert(sizeof(PlayerPawn_Athena_C_GameplayCue_Athena_Reloading) == 0x0000D8, "Wrong size on PlayerPawn_Athena_C_GameplayCue_Athena_Reloading");
static_assert(offsetof(PlayerPawn_Athena_C_GameplayCue_Athena_Reloading, EventType) == 0x000000, "Member 'PlayerPawn_Athena_C_GameplayCue_Athena_Reloading::EventType' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_C_GameplayCue_Athena_Reloading, Parameters) == 0x000008, "Member 'PlayerPawn_Athena_C_GameplayCue_Athena_Reloading::Parameters' has a wrong offset!");

struct PlayerPawn_Athena_C_GameplayCue_Damage final
{
public:
	EGameplayCueEvent                             EventType;
	uint8                                         Pad_1[0x7];
	struct FGameplayCueParameters                 Parameters;
};
static_assert(alignof(PlayerPawn_Athena_C_GameplayCue_Damage) == 0x000008, "Wrong alignment on PlayerPawn_Athena_C_GameplayCue_Damage");
static_assert(sizeof(PlayerPawn_Athena_C_GameplayCue_Damage) == 0x0000D8, "Wrong size on PlayerPawn_Athena_C_GameplayCue_Damage");
static_assert(offsetof(PlayerPawn_Athena_C_GameplayCue_Damage, EventType) == 0x000000, "Member 'PlayerPawn_Athena_C_GameplayCue_Damage::EventType' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_C_GameplayCue_Damage, Parameters) == 0x000008, "Member 'PlayerPawn_Athena_C_GameplayCue_Damage::Parameters' has a wrong offset!");

struct PlayerPawn_Athena_C_GameplayCue_Damage_Shielded final
{
public:
	EGameplayCueEvent                             EventType;
	uint8                                         Pad_1[0x7];
	struct FGameplayCueParameters                 Parameters;
};
static_assert(alignof(PlayerPawn_Athena_C_GameplayCue_Damage_Shielded) == 0x000008, "Wrong alignment on PlayerPawn_Athena_C_GameplayCue_Damage_Shielded");
static_assert(sizeof(PlayerPawn_Athena_C_GameplayCue_Damage_Shielded) == 0x0000D8, "Wrong size on PlayerPawn_Athena_C_GameplayCue_Damage_Shielded");
static_assert(offsetof(PlayerPawn_Athena_C_GameplayCue_Damage_Shielded, EventType) == 0x000000, "Member 'PlayerPawn_Athena_C_GameplayCue_Damage_Shielded::EventType' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_C_GameplayCue_Damage_Shielded, Parameters) == 0x000008, "Member 'PlayerPawn_Athena_C_GameplayCue_Damage_Shielded::Parameters' has a wrong offset!");

struct PlayerPawn_Athena_C_GameplayCue_Healing final
{
public:
	EGameplayCueEvent                             EventType;
	uint8                                         Pad_1[0x7];
	struct FGameplayCueParameters                 Parameters;
};
static_assert(alignof(PlayerPawn_Athena_C_GameplayCue_Healing) == 0x000008, "Wrong alignment on PlayerPawn_Athena_C_GameplayCue_Healing");
static_assert(sizeof(PlayerPawn_Athena_C_GameplayCue_Healing) == 0x0000D8, "Wrong size on PlayerPawn_Athena_C_GameplayCue_Healing");
static_assert(offsetof(PlayerPawn_Athena_C_GameplayCue_Healing, EventType) == 0x000000, "Member 'PlayerPawn_Athena_C_GameplayCue_Healing::EventType' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_C_GameplayCue_Healing, Parameters) == 0x000008, "Member 'PlayerPawn_Athena_C_GameplayCue_Healing::Parameters' has a wrong offset!");

struct PlayerPawn_Athena_C_GameplayCue_Shield_PotionConsumed final
{
public:
	EGameplayCueEvent                             EventType;
	uint8                                         Pad_1[0x7];
	struct FGameplayCueParameters                 Parameters;
};
static_assert(alignof(PlayerPawn_Athena_C_GameplayCue_Shield_PotionConsumed) == 0x000008, "Wrong alignment on PlayerPawn_Athena_C_GameplayCue_Shield_PotionConsumed");
static_assert(sizeof(PlayerPawn_Athena_C_GameplayCue_Shield_PotionConsumed) == 0x0000D8, "Wrong size on PlayerPawn_Athena_C_GameplayCue_Shield_PotionConsumed");
static_assert(offsetof(PlayerPawn_Athena_C_GameplayCue_Shield_PotionConsumed, EventType) == 0x000000, "Member 'PlayerPawn_Athena_C_GameplayCue_Shield_PotionConsumed::EventType' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_C_GameplayCue_Shield_PotionConsumed, Parameters) == 0x000008, "Member 'PlayerPawn_Athena_C_GameplayCue_Shield_PotionConsumed::Parameters' has a wrong offset!");

struct PlayerPawn_Athena_C_Get_Highest_Priority_Highlight final
{
public:
	class UObject*                                Source;
	struct FPawnHighlight                         Top_Priority;
	class UObject*                                Best_Source;
	int32                                         Temp_int_Array_Index_Variable;
	int32                                         Temp_int_Loop_Counter_Variable;
	int32                                         CallFunc_Add_IntInt_ReturnValue;
	struct FPawnHighlight                         CallFunc_Map_Find_Value;
	bool                                          CallFunc_Map_Find_ReturnValue;
	uint8                                         Pad_7D[0x3];
	TArray<class UObject*>                        CallFunc_Map_Keys_Keys;
	class UObject*                                CallFunc_Array_Get_Item;
	struct FPawnHighlight                         CallFunc_Map_Find_Value_1;
	bool                                          CallFunc_Map_Find_ReturnValue_1;
	uint8                                         Pad_C9[0x3];
	struct FPawnHighlight                         CallFunc_Map_Find_Value_2;
	bool                                          CallFunc_Map_Find_ReturnValue_2;
	uint8                                         Pad_FD[0x3];
	int32                                         CallFunc_Array_Length_ReturnValue;
	bool                                          CallFunc_Less_IntInt_ReturnValue;
	bool                                          CallFunc_GreaterEqual_DoubleDouble_ReturnValue;
	uint8                                         Pad_106[0x2];
	double                                        CallFunc_GreaterEqual_DoubleDouble_B_ImplicitCast;
	double                                        CallFunc_GreaterEqual_DoubleDouble_A_ImplicitCast;
};
static_assert(alignof(PlayerPawn_Athena_C_Get_Highest_Priority_Highlight) == 0x000008, "Wrong alignment on PlayerPawn_Athena_C_Get_Highest_Priority_Highlight");
static_assert(sizeof(PlayerPawn_Athena_C_Get_Highest_Priority_Highlight) == 0x000118, "Wrong size on PlayerPawn_Athena_C_Get_Highest_Priority_Highlight");
static_assert(offsetof(PlayerPawn_Athena_C_Get_Highest_Priority_Highlight, Source) == 0x000000, "Member 'PlayerPawn_Athena_C_Get_Highest_Priority_Highlight::Source' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_C_Get_Highest_Priority_Highlight, Top_Priority) == 0x000008, "Member 'PlayerPawn_Athena_C_Get_Highest_Priority_Highlight::Top_Priority' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_C_Get_Highest_Priority_Highlight, Best_Source) == 0x000038, "Member 'PlayerPawn_Athena_C_Get_Highest_Priority_Highlight::Best_Source' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_C_Get_Highest_Priority_Highlight, Temp_int_Array_Index_Variable) == 0x000040, "Member 'PlayerPawn_Athena_C_Get_Highest_Priority_Highlight::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_C_Get_Highest_Priority_Highlight, Temp_int_Loop_Counter_Variable) == 0x000044, "Member 'PlayerPawn_Athena_C_Get_Highest_Priority_Highlight::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_C_Get_Highest_Priority_Highlight, CallFunc_Add_IntInt_ReturnValue) == 0x000048, "Member 'PlayerPawn_Athena_C_Get_Highest_Priority_Highlight::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_C_Get_Highest_Priority_Highlight, CallFunc_Map_Find_Value) == 0x00004C, "Member 'PlayerPawn_Athena_C_Get_Highest_Priority_Highlight::CallFunc_Map_Find_Value' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_C_Get_Highest_Priority_Highlight, CallFunc_Map_Find_ReturnValue) == 0x00007C, "Member 'PlayerPawn_Athena_C_Get_Highest_Priority_Highlight::CallFunc_Map_Find_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_C_Get_Highest_Priority_Highlight, CallFunc_Map_Keys_Keys) == 0x000080, "Member 'PlayerPawn_Athena_C_Get_Highest_Priority_Highlight::CallFunc_Map_Keys_Keys' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_C_Get_Highest_Priority_Highlight, CallFunc_Array_Get_Item) == 0x000090, "Member 'PlayerPawn_Athena_C_Get_Highest_Priority_Highlight::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_C_Get_Highest_Priority_Highlight, CallFunc_Map_Find_Value_1) == 0x000098, "Member 'PlayerPawn_Athena_C_Get_Highest_Priority_Highlight::CallFunc_Map_Find_Value_1' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_C_Get_Highest_Priority_Highlight, CallFunc_Map_Find_ReturnValue_1) == 0x0000C8, "Member 'PlayerPawn_Athena_C_Get_Highest_Priority_Highlight::CallFunc_Map_Find_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_C_Get_Highest_Priority_Highlight, CallFunc_Map_Find_Value_2) == 0x0000CC, "Member 'PlayerPawn_Athena_C_Get_Highest_Priority_Highlight::CallFunc_Map_Find_Value_2' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_C_Get_Highest_Priority_Highlight, CallFunc_Map_Find_ReturnValue_2) == 0x0000FC, "Member 'PlayerPawn_Athena_C_Get_Highest_Priority_Highlight::CallFunc_Map_Find_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_C_Get_Highest_Priority_Highlight, CallFunc_Array_Length_ReturnValue) == 0x000100, "Member 'PlayerPawn_Athena_C_Get_Highest_Priority_Highlight::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_C_Get_Highest_Priority_Highlight, CallFunc_Less_IntInt_ReturnValue) == 0x000104, "Member 'PlayerPawn_Athena_C_Get_Highest_Priority_Highlight::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_C_Get_Highest_Priority_Highlight, CallFunc_GreaterEqual_DoubleDouble_ReturnValue) == 0x000105, "Member 'PlayerPawn_Athena_C_Get_Highest_Priority_Highlight::CallFunc_GreaterEqual_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_C_Get_Highest_Priority_Highlight, CallFunc_GreaterEqual_DoubleDouble_B_ImplicitCast) == 0x000108, "Member 'PlayerPawn_Athena_C_Get_Highest_Priority_Highlight::CallFunc_GreaterEqual_DoubleDouble_B_ImplicitCast' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_C_Get_Highest_Priority_Highlight, CallFunc_GreaterEqual_DoubleDouble_A_ImplicitCast) == 0x000110, "Member 'PlayerPawn_Athena_C_Get_Highest_Priority_Highlight::CallFunc_GreaterEqual_DoubleDouble_A_ImplicitCast' has a wrong offset!");

struct PlayerPawn_Athena_C_GetAimPoint final
{
public:
	struct FRotator                               ControlRotation;
	struct FRotator                               CallFunc_GetControlRotation_ReturnValue;
};
static_assert(alignof(PlayerPawn_Athena_C_GetAimPoint) == 0x000008, "Wrong alignment on PlayerPawn_Athena_C_GetAimPoint");
static_assert(sizeof(PlayerPawn_Athena_C_GetAimPoint) == 0x000030, "Wrong size on PlayerPawn_Athena_C_GetAimPoint");
static_assert(offsetof(PlayerPawn_Athena_C_GetAimPoint, ControlRotation) == 0x000000, "Member 'PlayerPawn_Athena_C_GetAimPoint::ControlRotation' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_C_GetAimPoint, CallFunc_GetControlRotation_ReturnValue) == 0x000018, "Member 'PlayerPawn_Athena_C_GetAimPoint::CallFunc_GetControlRotation_ReturnValue' has a wrong offset!");

struct PlayerPawn_Athena_C_GetForwardAxis final
{
public:
	double                                        Return_Value;
	float                                         CallFunc_GetInputAxisValue_ReturnValue;
	float                                         CallFunc_GetInputAxisValue_ReturnValue_1;
	double                                        CallFunc_Add_DoubleDouble_ReturnValue;
	double                                        CallFunc_Add_DoubleDouble_B_ImplicitCast;
	double                                        CallFunc_Add_DoubleDouble_A_ImplicitCast;
};
static_assert(alignof(PlayerPawn_Athena_C_GetForwardAxis) == 0x000008, "Wrong alignment on PlayerPawn_Athena_C_GetForwardAxis");
static_assert(sizeof(PlayerPawn_Athena_C_GetForwardAxis) == 0x000028, "Wrong size on PlayerPawn_Athena_C_GetForwardAxis");
static_assert(offsetof(PlayerPawn_Athena_C_GetForwardAxis, Return_Value) == 0x000000, "Member 'PlayerPawn_Athena_C_GetForwardAxis::Return_Value' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_C_GetForwardAxis, CallFunc_GetInputAxisValue_ReturnValue) == 0x000008, "Member 'PlayerPawn_Athena_C_GetForwardAxis::CallFunc_GetInputAxisValue_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_C_GetForwardAxis, CallFunc_GetInputAxisValue_ReturnValue_1) == 0x00000C, "Member 'PlayerPawn_Athena_C_GetForwardAxis::CallFunc_GetInputAxisValue_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_C_GetForwardAxis, CallFunc_Add_DoubleDouble_ReturnValue) == 0x000010, "Member 'PlayerPawn_Athena_C_GetForwardAxis::CallFunc_Add_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_C_GetForwardAxis, CallFunc_Add_DoubleDouble_B_ImplicitCast) == 0x000018, "Member 'PlayerPawn_Athena_C_GetForwardAxis::CallFunc_Add_DoubleDouble_B_ImplicitCast' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_C_GetForwardAxis, CallFunc_Add_DoubleDouble_A_ImplicitCast) == 0x000020, "Member 'PlayerPawn_Athena_C_GetForwardAxis::CallFunc_Add_DoubleDouble_A_ImplicitCast' has a wrong offset!");

struct PlayerPawn_Athena_C_GetLocationInCircle_XY final
{
public:
	struct FVector                                LocationLocalSpace;
	struct FVector                                CallFunc_MakeVector_ReturnValue;
	double                                        CallFunc_RandomFloat_ReturnValue;
	double                                        CallFunc_GetPI_ReturnValue;
	double                                        CallFunc_RandomFloatInRange_ReturnValue;
	double                                        CallFunc_Multiply_DoubleDouble_ReturnValue;
	double                                        CallFunc_Lerp_ReturnValue;
	double                                        CallFunc_Cos_ReturnValue;
	double                                        CallFunc_Sin_ReturnValue;
	double                                        CallFunc_Multiply_DoubleDouble_ReturnValue_1;
	double                                        CallFunc_Multiply_DoubleDouble_ReturnValue_2;
	struct FVector                                CallFunc_MakeVector_ReturnValue_1;
	struct FVector                                CallFunc_VLerp_ReturnValue;
	float                                         CallFunc_VLerp_Alpha_ImplicitCast;
};
static_assert(alignof(PlayerPawn_Athena_C_GetLocationInCircle_XY) == 0x000008, "Wrong alignment on PlayerPawn_Athena_C_GetLocationInCircle_XY");
static_assert(sizeof(PlayerPawn_Athena_C_GetLocationInCircle_XY) == 0x0000B0, "Wrong size on PlayerPawn_Athena_C_GetLocationInCircle_XY");
static_assert(offsetof(PlayerPawn_Athena_C_GetLocationInCircle_XY, LocationLocalSpace) == 0x000000, "Member 'PlayerPawn_Athena_C_GetLocationInCircle_XY::LocationLocalSpace' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_C_GetLocationInCircle_XY, CallFunc_MakeVector_ReturnValue) == 0x000018, "Member 'PlayerPawn_Athena_C_GetLocationInCircle_XY::CallFunc_MakeVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_C_GetLocationInCircle_XY, CallFunc_RandomFloat_ReturnValue) == 0x000030, "Member 'PlayerPawn_Athena_C_GetLocationInCircle_XY::CallFunc_RandomFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_C_GetLocationInCircle_XY, CallFunc_GetPI_ReturnValue) == 0x000038, "Member 'PlayerPawn_Athena_C_GetLocationInCircle_XY::CallFunc_GetPI_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_C_GetLocationInCircle_XY, CallFunc_RandomFloatInRange_ReturnValue) == 0x000040, "Member 'PlayerPawn_Athena_C_GetLocationInCircle_XY::CallFunc_RandomFloatInRange_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_C_GetLocationInCircle_XY, CallFunc_Multiply_DoubleDouble_ReturnValue) == 0x000048, "Member 'PlayerPawn_Athena_C_GetLocationInCircle_XY::CallFunc_Multiply_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_C_GetLocationInCircle_XY, CallFunc_Lerp_ReturnValue) == 0x000050, "Member 'PlayerPawn_Athena_C_GetLocationInCircle_XY::CallFunc_Lerp_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_C_GetLocationInCircle_XY, CallFunc_Cos_ReturnValue) == 0x000058, "Member 'PlayerPawn_Athena_C_GetLocationInCircle_XY::CallFunc_Cos_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_C_GetLocationInCircle_XY, CallFunc_Sin_ReturnValue) == 0x000060, "Member 'PlayerPawn_Athena_C_GetLocationInCircle_XY::CallFunc_Sin_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_C_GetLocationInCircle_XY, CallFunc_Multiply_DoubleDouble_ReturnValue_1) == 0x000068, "Member 'PlayerPawn_Athena_C_GetLocationInCircle_XY::CallFunc_Multiply_DoubleDouble_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_C_GetLocationInCircle_XY, CallFunc_Multiply_DoubleDouble_ReturnValue_2) == 0x000070, "Member 'PlayerPawn_Athena_C_GetLocationInCircle_XY::CallFunc_Multiply_DoubleDouble_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_C_GetLocationInCircle_XY, CallFunc_MakeVector_ReturnValue_1) == 0x000078, "Member 'PlayerPawn_Athena_C_GetLocationInCircle_XY::CallFunc_MakeVector_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_C_GetLocationInCircle_XY, CallFunc_VLerp_ReturnValue) == 0x000090, "Member 'PlayerPawn_Athena_C_GetLocationInCircle_XY::CallFunc_VLerp_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_C_GetLocationInCircle_XY, CallFunc_VLerp_Alpha_ImplicitCast) == 0x0000A8, "Member 'PlayerPawn_Athena_C_GetLocationInCircle_XY::CallFunc_VLerp_Alpha_ImplicitCast' has a wrong offset!");

struct PlayerPawn_Athena_C_GetPawnIsInLocalSquad final
{
public:
	bool                                          IsInLocalSquad;
	uint8                                         ThisPawnSquadID;
	uint8                                         Pad_2[0x6];
	class APawn*                                  CallFunc_GetPlayerPawn_ReturnValue;
	class AFortPlayerState*                       CallFunc_AttemptGetPlayerStateForPawn_ReturnValue;
	class AFortPlayerPawn*                        K2Node_DynamicCast_AsFort_Player_Pawn;
	bool                                          K2Node_DynamicCast_bSuccess;
	uint8                                         Pad_21[0x7];
	class AFortPlayerStateAthena*                 K2Node_DynamicCast_AsFort_Player_State_Athena;
	bool                                          K2Node_DynamicCast_bSuccess_1;
	uint8                                         Pad_31[0x7];
	class AFortPlayerState*                       CallFunc_AttemptGetPlayerStateForPawn_ReturnValue_1;
	uint8                                         CallFunc_GetSquadId_ReturnValue;
	uint8                                         Pad_41[0x7];
	class AFortPlayerStateAthena*                 K2Node_DynamicCast_AsFort_Player_State_Athena_1;
	bool                                          K2Node_DynamicCast_bSuccess_2;
	uint8                                         CallFunc_GetSquadId_ReturnValue_1;
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;
};
static_assert(alignof(PlayerPawn_Athena_C_GetPawnIsInLocalSquad) == 0x000008, "Wrong alignment on PlayerPawn_Athena_C_GetPawnIsInLocalSquad");
static_assert(sizeof(PlayerPawn_Athena_C_GetPawnIsInLocalSquad) == 0x000058, "Wrong size on PlayerPawn_Athena_C_GetPawnIsInLocalSquad");
static_assert(offsetof(PlayerPawn_Athena_C_GetPawnIsInLocalSquad, IsInLocalSquad) == 0x000000, "Member 'PlayerPawn_Athena_C_GetPawnIsInLocalSquad::IsInLocalSquad' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_C_GetPawnIsInLocalSquad, ThisPawnSquadID) == 0x000001, "Member 'PlayerPawn_Athena_C_GetPawnIsInLocalSquad::ThisPawnSquadID' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_C_GetPawnIsInLocalSquad, CallFunc_GetPlayerPawn_ReturnValue) == 0x000008, "Member 'PlayerPawn_Athena_C_GetPawnIsInLocalSquad::CallFunc_GetPlayerPawn_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_C_GetPawnIsInLocalSquad, CallFunc_AttemptGetPlayerStateForPawn_ReturnValue) == 0x000010, "Member 'PlayerPawn_Athena_C_GetPawnIsInLocalSquad::CallFunc_AttemptGetPlayerStateForPawn_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_C_GetPawnIsInLocalSquad, K2Node_DynamicCast_AsFort_Player_Pawn) == 0x000018, "Member 'PlayerPawn_Athena_C_GetPawnIsInLocalSquad::K2Node_DynamicCast_AsFort_Player_Pawn' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_C_GetPawnIsInLocalSquad, K2Node_DynamicCast_bSuccess) == 0x000020, "Member 'PlayerPawn_Athena_C_GetPawnIsInLocalSquad::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_C_GetPawnIsInLocalSquad, K2Node_DynamicCast_AsFort_Player_State_Athena) == 0x000028, "Member 'PlayerPawn_Athena_C_GetPawnIsInLocalSquad::K2Node_DynamicCast_AsFort_Player_State_Athena' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_C_GetPawnIsInLocalSquad, K2Node_DynamicCast_bSuccess_1) == 0x000030, "Member 'PlayerPawn_Athena_C_GetPawnIsInLocalSquad::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_C_GetPawnIsInLocalSquad, CallFunc_AttemptGetPlayerStateForPawn_ReturnValue_1) == 0x000038, "Member 'PlayerPawn_Athena_C_GetPawnIsInLocalSquad::CallFunc_AttemptGetPlayerStateForPawn_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_C_GetPawnIsInLocalSquad, CallFunc_GetSquadId_ReturnValue) == 0x000040, "Member 'PlayerPawn_Athena_C_GetPawnIsInLocalSquad::CallFunc_GetSquadId_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_C_GetPawnIsInLocalSquad, K2Node_DynamicCast_AsFort_Player_State_Athena_1) == 0x000048, "Member 'PlayerPawn_Athena_C_GetPawnIsInLocalSquad::K2Node_DynamicCast_AsFort_Player_State_Athena_1' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_C_GetPawnIsInLocalSquad, K2Node_DynamicCast_bSuccess_2) == 0x000050, "Member 'PlayerPawn_Athena_C_GetPawnIsInLocalSquad::K2Node_DynamicCast_bSuccess_2' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_C_GetPawnIsInLocalSquad, CallFunc_GetSquadId_ReturnValue_1) == 0x000051, "Member 'PlayerPawn_Athena_C_GetPawnIsInLocalSquad::CallFunc_GetSquadId_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_C_GetPawnIsInLocalSquad, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x000052, "Member 'PlayerPawn_Athena_C_GetPawnIsInLocalSquad::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");

struct PlayerPawn_Athena_C_GetRightAxis final
{
public:
	double                                        Return_Value;
	float                                         CallFunc_GetInputAxisValue_ReturnValue;
	float                                         CallFunc_GetInputAxisValue_ReturnValue_1;
	double                                        CallFunc_Add_DoubleDouble_ReturnValue;
	double                                        CallFunc_Add_DoubleDouble_B_ImplicitCast;
	double                                        CallFunc_Add_DoubleDouble_A_ImplicitCast;
};
static_assert(alignof(PlayerPawn_Athena_C_GetRightAxis) == 0x000008, "Wrong alignment on PlayerPawn_Athena_C_GetRightAxis");
static_assert(sizeof(PlayerPawn_Athena_C_GetRightAxis) == 0x000028, "Wrong size on PlayerPawn_Athena_C_GetRightAxis");
static_assert(offsetof(PlayerPawn_Athena_C_GetRightAxis, Return_Value) == 0x000000, "Member 'PlayerPawn_Athena_C_GetRightAxis::Return_Value' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_C_GetRightAxis, CallFunc_GetInputAxisValue_ReturnValue) == 0x000008, "Member 'PlayerPawn_Athena_C_GetRightAxis::CallFunc_GetInputAxisValue_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_C_GetRightAxis, CallFunc_GetInputAxisValue_ReturnValue_1) == 0x00000C, "Member 'PlayerPawn_Athena_C_GetRightAxis::CallFunc_GetInputAxisValue_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_C_GetRightAxis, CallFunc_Add_DoubleDouble_ReturnValue) == 0x000010, "Member 'PlayerPawn_Athena_C_GetRightAxis::CallFunc_Add_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_C_GetRightAxis, CallFunc_Add_DoubleDouble_B_ImplicitCast) == 0x000018, "Member 'PlayerPawn_Athena_C_GetRightAxis::CallFunc_Add_DoubleDouble_B_ImplicitCast' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_C_GetRightAxis, CallFunc_Add_DoubleDouble_A_ImplicitCast) == 0x000020, "Member 'PlayerPawn_Athena_C_GetRightAxis::CallFunc_Add_DoubleDouble_A_ImplicitCast' has a wrong offset!");

struct PlayerPawn_Athena_C_GoToHUBIslandIfOutOfBounds final
{
public:
	class AController*                            CallFunc_GetController_ReturnValue;
	bool                                          CallFunc_IsBattleLabModePlaylist_ReturnValue;
	uint8                                         Pad_9[0x7];
	class AFortPlayerControllerAthena*            K2Node_DynamicCast_AsFort_Player_Controller_Athena;
	bool                                          K2Node_DynamicCast_bSuccess;
	uint8                                         Pad_19[0x7];
	class AFortMinigame*                          CallFunc_GetMinigame_ReturnValue;
	bool                                          CallFunc_IsValid_ReturnValue;
};
static_assert(alignof(PlayerPawn_Athena_C_GoToHUBIslandIfOutOfBounds) == 0x000008, "Wrong alignment on PlayerPawn_Athena_C_GoToHUBIslandIfOutOfBounds");
static_assert(sizeof(PlayerPawn_Athena_C_GoToHUBIslandIfOutOfBounds) == 0x000030, "Wrong size on PlayerPawn_Athena_C_GoToHUBIslandIfOutOfBounds");
static_assert(offsetof(PlayerPawn_Athena_C_GoToHUBIslandIfOutOfBounds, CallFunc_GetController_ReturnValue) == 0x000000, "Member 'PlayerPawn_Athena_C_GoToHUBIslandIfOutOfBounds::CallFunc_GetController_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_C_GoToHUBIslandIfOutOfBounds, CallFunc_IsBattleLabModePlaylist_ReturnValue) == 0x000008, "Member 'PlayerPawn_Athena_C_GoToHUBIslandIfOutOfBounds::CallFunc_IsBattleLabModePlaylist_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_C_GoToHUBIslandIfOutOfBounds, K2Node_DynamicCast_AsFort_Player_Controller_Athena) == 0x000010, "Member 'PlayerPawn_Athena_C_GoToHUBIslandIfOutOfBounds::K2Node_DynamicCast_AsFort_Player_Controller_Athena' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_C_GoToHUBIslandIfOutOfBounds, K2Node_DynamicCast_bSuccess) == 0x000018, "Member 'PlayerPawn_Athena_C_GoToHUBIslandIfOutOfBounds::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_C_GoToHUBIslandIfOutOfBounds, CallFunc_GetMinigame_ReturnValue) == 0x000020, "Member 'PlayerPawn_Athena_C_GoToHUBIslandIfOutOfBounds::CallFunc_GetMinigame_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_C_GoToHUBIslandIfOutOfBounds, CallFunc_IsValid_ReturnValue) == 0x000028, "Member 'PlayerPawn_Athena_C_GoToHUBIslandIfOutOfBounds::CallFunc_IsValid_ReturnValue' has a wrong offset!");

struct PlayerPawn_Athena_C_handleCvarsUpdated final
{
public:
	class FString                                 CVarName;
	class FString                                 l_cvarName;
};
static_assert(alignof(PlayerPawn_Athena_C_handleCvarsUpdated) == 0x000008, "Wrong alignment on PlayerPawn_Athena_C_handleCvarsUpdated");
static_assert(sizeof(PlayerPawn_Athena_C_handleCvarsUpdated) == 0x000020, "Wrong size on PlayerPawn_Athena_C_handleCvarsUpdated");
static_assert(offsetof(PlayerPawn_Athena_C_handleCvarsUpdated, CVarName) == 0x000000, "Member 'PlayerPawn_Athena_C_handleCvarsUpdated::CVarName' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_C_handleCvarsUpdated, l_cvarName) == 0x000010, "Member 'PlayerPawn_Athena_C_handleCvarsUpdated::l_cvarName' has a wrong offset!");

struct PlayerPawn_Athena_C_Hide_Character_Parts final
{
public:
	bool                                          IsHidden;
};
static_assert(alignof(PlayerPawn_Athena_C_Hide_Character_Parts) == 0x000001, "Wrong alignment on PlayerPawn_Athena_C_Hide_Character_Parts");
static_assert(sizeof(PlayerPawn_Athena_C_Hide_Character_Parts) == 0x000001, "Wrong size on PlayerPawn_Athena_C_Hide_Character_Parts");
static_assert(offsetof(PlayerPawn_Athena_C_Hide_Character_Parts, IsHidden) == 0x000000, "Member 'PlayerPawn_Athena_C_Hide_Character_Parts::IsHidden' has a wrong offset!");

struct PlayerPawn_Athena_C_Highlight_Pawn_from_Source final
{
public:
	class UObject*                                Source;
	struct FPawnHighlight                         Highlight;
	bool                                          Only_Update_If_Current;
	bool                                          CallFunc_Not_PreBool_ReturnValue;
	bool                                          CallFunc_EqualEqual_ObjectObject_ReturnValue;
	bool                                          CallFunc_GreaterEqual_DoubleDouble_ReturnValue;
	struct FPawnHighlight                         CallFunc_Map_Find_Value;
	bool                                          CallFunc_Map_Find_ReturnValue;
	uint8                                         Pad_6D[0x3];
	double                                        CallFunc_GreaterEqual_DoubleDouble_A_ImplicitCast;
};
static_assert(alignof(PlayerPawn_Athena_C_Highlight_Pawn_from_Source) == 0x000008, "Wrong alignment on PlayerPawn_Athena_C_Highlight_Pawn_from_Source");
static_assert(sizeof(PlayerPawn_Athena_C_Highlight_Pawn_from_Source) == 0x000078, "Wrong size on PlayerPawn_Athena_C_Highlight_Pawn_from_Source");
static_assert(offsetof(PlayerPawn_Athena_C_Highlight_Pawn_from_Source, Source) == 0x000000, "Member 'PlayerPawn_Athena_C_Highlight_Pawn_from_Source::Source' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_C_Highlight_Pawn_from_Source, Highlight) == 0x000008, "Member 'PlayerPawn_Athena_C_Highlight_Pawn_from_Source::Highlight' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_C_Highlight_Pawn_from_Source, Only_Update_If_Current) == 0x000038, "Member 'PlayerPawn_Athena_C_Highlight_Pawn_from_Source::Only_Update_If_Current' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_C_Highlight_Pawn_from_Source, CallFunc_Not_PreBool_ReturnValue) == 0x000039, "Member 'PlayerPawn_Athena_C_Highlight_Pawn_from_Source::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_C_Highlight_Pawn_from_Source, CallFunc_EqualEqual_ObjectObject_ReturnValue) == 0x00003A, "Member 'PlayerPawn_Athena_C_Highlight_Pawn_from_Source::CallFunc_EqualEqual_ObjectObject_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_C_Highlight_Pawn_from_Source, CallFunc_GreaterEqual_DoubleDouble_ReturnValue) == 0x00003B, "Member 'PlayerPawn_Athena_C_Highlight_Pawn_from_Source::CallFunc_GreaterEqual_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_C_Highlight_Pawn_from_Source, CallFunc_Map_Find_Value) == 0x00003C, "Member 'PlayerPawn_Athena_C_Highlight_Pawn_from_Source::CallFunc_Map_Find_Value' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_C_Highlight_Pawn_from_Source, CallFunc_Map_Find_ReturnValue) == 0x00006C, "Member 'PlayerPawn_Athena_C_Highlight_Pawn_from_Source::CallFunc_Map_Find_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_C_Highlight_Pawn_from_Source, CallFunc_GreaterEqual_DoubleDouble_A_ImplicitCast) == 0x000070, "Member 'PlayerPawn_Athena_C_Highlight_Pawn_from_Source::CallFunc_GreaterEqual_DoubleDouble_A_ImplicitCast' has a wrong offset!");

struct PlayerPawn_Athena_C_InWarmup final
{
public:
	bool                                          bInWarmup;
	uint8                                         Pad_1[0x7];
	class AGameStateBase*                         CallFunc_GetGameState_ReturnValue;
	class AAthena_GameState_C*                    K2Node_DynamicCast_AsAthena_Game_State;
	bool                                          K2Node_DynamicCast_bSuccess;
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_1;
	bool                                          CallFunc_BooleanOR_ReturnValue;
};
static_assert(alignof(PlayerPawn_Athena_C_InWarmup) == 0x000008, "Wrong alignment on PlayerPawn_Athena_C_InWarmup");
static_assert(sizeof(PlayerPawn_Athena_C_InWarmup) == 0x000020, "Wrong size on PlayerPawn_Athena_C_InWarmup");
static_assert(offsetof(PlayerPawn_Athena_C_InWarmup, bInWarmup) == 0x000000, "Member 'PlayerPawn_Athena_C_InWarmup::bInWarmup' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_C_InWarmup, CallFunc_GetGameState_ReturnValue) == 0x000008, "Member 'PlayerPawn_Athena_C_InWarmup::CallFunc_GetGameState_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_C_InWarmup, K2Node_DynamicCast_AsAthena_Game_State) == 0x000010, "Member 'PlayerPawn_Athena_C_InWarmup::K2Node_DynamicCast_AsAthena_Game_State' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_C_InWarmup, K2Node_DynamicCast_bSuccess) == 0x000018, "Member 'PlayerPawn_Athena_C_InWarmup::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_C_InWarmup, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x000019, "Member 'PlayerPawn_Athena_C_InWarmup::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_C_InWarmup, CallFunc_EqualEqual_ByteByte_ReturnValue_1) == 0x00001A, "Member 'PlayerPawn_Athena_C_InWarmup::CallFunc_EqualEqual_ByteByte_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_C_InWarmup, CallFunc_BooleanOR_ReturnValue) == 0x00001B, "Member 'PlayerPawn_Athena_C_InWarmup::CallFunc_BooleanOR_ReturnValue' has a wrong offset!");

struct PlayerPawn_Athena_C_isHiddingInProp final
{
public:
	bool                                          IsHidden;
};
static_assert(alignof(PlayerPawn_Athena_C_isHiddingInProp) == 0x000001, "Wrong alignment on PlayerPawn_Athena_C_isHiddingInProp");
static_assert(sizeof(PlayerPawn_Athena_C_isHiddingInProp) == 0x000001, "Wrong size on PlayerPawn_Athena_C_isHiddingInProp");
static_assert(offsetof(PlayerPawn_Athena_C_isHiddingInProp, IsHidden) == 0x000000, "Member 'PlayerPawn_Athena_C_isHiddingInProp::IsHidden' has a wrong offset!");

struct PlayerPawn_Athena_C_IsSwingAttached final
{
public:
	bool                                          IsSwingAttached_0;
	uint8                                         Pad_1[0x7];
	class AController*                            CallFunc_GetController_ReturnValue;
	bool                                          CallFunc_IsValid_ReturnValue;
	bool                                          CallFunc_IsValid_ReturnValue_1;
	uint8                                         Pad_12[0x6];
	class UFortControllerComponent_Swinging*      CallFunc_GetComponentByClass_ReturnValue;
	bool                                          CallFunc_IsSwingAttached_ReturnValue;
	bool                                          CallFunc_BooleanAND_ReturnValue;
};
static_assert(alignof(PlayerPawn_Athena_C_IsSwingAttached) == 0x000008, "Wrong alignment on PlayerPawn_Athena_C_IsSwingAttached");
static_assert(sizeof(PlayerPawn_Athena_C_IsSwingAttached) == 0x000028, "Wrong size on PlayerPawn_Athena_C_IsSwingAttached");
static_assert(offsetof(PlayerPawn_Athena_C_IsSwingAttached, IsSwingAttached_0) == 0x000000, "Member 'PlayerPawn_Athena_C_IsSwingAttached::IsSwingAttached_0' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_C_IsSwingAttached, CallFunc_GetController_ReturnValue) == 0x000008, "Member 'PlayerPawn_Athena_C_IsSwingAttached::CallFunc_GetController_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_C_IsSwingAttached, CallFunc_IsValid_ReturnValue) == 0x000010, "Member 'PlayerPawn_Athena_C_IsSwingAttached::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_C_IsSwingAttached, CallFunc_IsValid_ReturnValue_1) == 0x000011, "Member 'PlayerPawn_Athena_C_IsSwingAttached::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_C_IsSwingAttached, CallFunc_GetComponentByClass_ReturnValue) == 0x000018, "Member 'PlayerPawn_Athena_C_IsSwingAttached::CallFunc_GetComponentByClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_C_IsSwingAttached, CallFunc_IsSwingAttached_ReturnValue) == 0x000020, "Member 'PlayerPawn_Athena_C_IsSwingAttached::CallFunc_IsSwingAttached_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_C_IsSwingAttached, CallFunc_BooleanAND_ReturnValue) == 0x000021, "Member 'PlayerPawn_Athena_C_IsSwingAttached::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");

struct PlayerPawn_Athena_C_IsSwingGrounded final
{
public:
	bool                                          IsSwingingGrounded;
	uint8                                         Pad_1[0x7];
	class AController*                            CallFunc_GetController_ReturnValue;
	class UFortControllerComponent_Swinging*      CallFunc_GetComponentByClass_ReturnValue;
	bool                                          CallFunc_IsValid_ReturnValue;
	bool                                          CallFunc_IsSwingingGrounded_ReturnValue;
};
static_assert(alignof(PlayerPawn_Athena_C_IsSwingGrounded) == 0x000008, "Wrong alignment on PlayerPawn_Athena_C_IsSwingGrounded");
static_assert(sizeof(PlayerPawn_Athena_C_IsSwingGrounded) == 0x000020, "Wrong size on PlayerPawn_Athena_C_IsSwingGrounded");
static_assert(offsetof(PlayerPawn_Athena_C_IsSwingGrounded, IsSwingingGrounded) == 0x000000, "Member 'PlayerPawn_Athena_C_IsSwingGrounded::IsSwingingGrounded' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_C_IsSwingGrounded, CallFunc_GetController_ReturnValue) == 0x000008, "Member 'PlayerPawn_Athena_C_IsSwingGrounded::CallFunc_GetController_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_C_IsSwingGrounded, CallFunc_GetComponentByClass_ReturnValue) == 0x000010, "Member 'PlayerPawn_Athena_C_IsSwingGrounded::CallFunc_GetComponentByClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_C_IsSwingGrounded, CallFunc_IsValid_ReturnValue) == 0x000018, "Member 'PlayerPawn_Athena_C_IsSwingGrounded::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_C_IsSwingGrounded, CallFunc_IsSwingingGrounded_ReturnValue) == 0x000019, "Member 'PlayerPawn_Athena_C_IsSwingGrounded::CallFunc_IsSwingingGrounded_ReturnValue' has a wrong offset!");

struct PlayerPawn_Athena_C_IsSwinging final
{
public:
	bool                                          IsSwinging_0;
	uint8                                         Pad_1[0x7];
	class AController*                            CallFunc_GetController_ReturnValue;
	class UFortControllerComponent_Swinging*      CallFunc_GetComponentByClass_ReturnValue;
	bool                                          CallFunc_IsValid_ReturnValue;
	bool                                          CallFunc_IsValid_ReturnValue_1;
	bool                                          CallFunc_IsInSwingingMovement_ReturnValue;
};
static_assert(alignof(PlayerPawn_Athena_C_IsSwinging) == 0x000008, "Wrong alignment on PlayerPawn_Athena_C_IsSwinging");
static_assert(sizeof(PlayerPawn_Athena_C_IsSwinging) == 0x000020, "Wrong size on PlayerPawn_Athena_C_IsSwinging");
static_assert(offsetof(PlayerPawn_Athena_C_IsSwinging, IsSwinging_0) == 0x000000, "Member 'PlayerPawn_Athena_C_IsSwinging::IsSwinging_0' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_C_IsSwinging, CallFunc_GetController_ReturnValue) == 0x000008, "Member 'PlayerPawn_Athena_C_IsSwinging::CallFunc_GetController_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_C_IsSwinging, CallFunc_GetComponentByClass_ReturnValue) == 0x000010, "Member 'PlayerPawn_Athena_C_IsSwinging::CallFunc_GetComponentByClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_C_IsSwinging, CallFunc_IsValid_ReturnValue) == 0x000018, "Member 'PlayerPawn_Athena_C_IsSwinging::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_C_IsSwinging, CallFunc_IsValid_ReturnValue_1) == 0x000019, "Member 'PlayerPawn_Athena_C_IsSwinging::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_C_IsSwinging, CallFunc_IsInSwingingMovement_ReturnValue) == 0x00001A, "Member 'PlayerPawn_Athena_C_IsSwinging::CallFunc_IsInSwingingMovement_ReturnValue' has a wrong offset!");

struct PlayerPawn_Athena_C_K2_OnMovementModeChanged final
{
public:
	EMovementMode                                 PrevMovementMode;
	EMovementMode                                 NewMovementMode;
	uint8                                         PrevCustomMode;
	uint8                                         NewCustomMode;
};
static_assert(alignof(PlayerPawn_Athena_C_K2_OnMovementModeChanged) == 0x000001, "Wrong alignment on PlayerPawn_Athena_C_K2_OnMovementModeChanged");
static_assert(sizeof(PlayerPawn_Athena_C_K2_OnMovementModeChanged) == 0x000004, "Wrong size on PlayerPawn_Athena_C_K2_OnMovementModeChanged");
static_assert(offsetof(PlayerPawn_Athena_C_K2_OnMovementModeChanged, PrevMovementMode) == 0x000000, "Member 'PlayerPawn_Athena_C_K2_OnMovementModeChanged::PrevMovementMode' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_C_K2_OnMovementModeChanged, NewMovementMode) == 0x000001, "Member 'PlayerPawn_Athena_C_K2_OnMovementModeChanged::NewMovementMode' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_C_K2_OnMovementModeChanged, PrevCustomMode) == 0x000002, "Member 'PlayerPawn_Athena_C_K2_OnMovementModeChanged::PrevCustomMode' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_C_K2_OnMovementModeChanged, NewCustomMode) == 0x000003, "Member 'PlayerPawn_Athena_C_K2_OnMovementModeChanged::NewCustomMode' has a wrong offset!");

struct PlayerPawn_Athena_C_K2_UpdateCustomMovement final
{
public:
	float                                         DeltaTime;
	uint8                                         Pad_4[0x4];
	class UCharacterMovementComponent*            MovementComponent;
	double                                        DT;
};
static_assert(alignof(PlayerPawn_Athena_C_K2_UpdateCustomMovement) == 0x000008, "Wrong alignment on PlayerPawn_Athena_C_K2_UpdateCustomMovement");
static_assert(sizeof(PlayerPawn_Athena_C_K2_UpdateCustomMovement) == 0x000018, "Wrong size on PlayerPawn_Athena_C_K2_UpdateCustomMovement");
static_assert(offsetof(PlayerPawn_Athena_C_K2_UpdateCustomMovement, DeltaTime) == 0x000000, "Member 'PlayerPawn_Athena_C_K2_UpdateCustomMovement::DeltaTime' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_C_K2_UpdateCustomMovement, MovementComponent) == 0x000008, "Member 'PlayerPawn_Athena_C_K2_UpdateCustomMovement::MovementComponent' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_C_K2_UpdateCustomMovement, DT) == 0x000010, "Member 'PlayerPawn_Athena_C_K2_UpdateCustomMovement::DT' has a wrong offset!");

struct PlayerPawn_Athena_C_MeleeSwingLeft final
{
public:
	bool                                          First_Left;
};
static_assert(alignof(PlayerPawn_Athena_C_MeleeSwingLeft) == 0x000001, "Wrong alignment on PlayerPawn_Athena_C_MeleeSwingLeft");
static_assert(sizeof(PlayerPawn_Athena_C_MeleeSwingLeft) == 0x000001, "Wrong size on PlayerPawn_Athena_C_MeleeSwingLeft");
static_assert(offsetof(PlayerPawn_Athena_C_MeleeSwingLeft, First_Left) == 0x000000, "Member 'PlayerPawn_Athena_C_MeleeSwingLeft::First_Left' has a wrong offset!");

struct PlayerPawn_Athena_C_MeleeSwingRight final
{
public:
	bool                                          First_Right;
};
static_assert(alignof(PlayerPawn_Athena_C_MeleeSwingRight) == 0x000001, "Wrong alignment on PlayerPawn_Athena_C_MeleeSwingRight");
static_assert(sizeof(PlayerPawn_Athena_C_MeleeSwingRight) == 0x000001, "Wrong size on PlayerPawn_Athena_C_MeleeSwingRight");
static_assert(offsetof(PlayerPawn_Athena_C_MeleeSwingRight, First_Right) == 0x000000, "Member 'PlayerPawn_Athena_C_MeleeSwingRight::First_Right' has a wrong offset!");

struct PlayerPawn_Athena_C_OnCharacterCustomizationCompleted final
{
public:
	class AFortPlayerPawn*                        Pawn;
};
static_assert(alignof(PlayerPawn_Athena_C_OnCharacterCustomizationCompleted) == 0x000008, "Wrong alignment on PlayerPawn_Athena_C_OnCharacterCustomizationCompleted");
static_assert(sizeof(PlayerPawn_Athena_C_OnCharacterCustomizationCompleted) == 0x000008, "Wrong size on PlayerPawn_Athena_C_OnCharacterCustomizationCompleted");
static_assert(offsetof(PlayerPawn_Athena_C_OnCharacterCustomizationCompleted, Pawn) == 0x000000, "Member 'PlayerPawn_Athena_C_OnCharacterCustomizationCompleted::Pawn' has a wrong offset!");

struct PlayerPawn_Athena_C_OnDBNOStateChanged_Event final
{
public:
	class AFortPawn*                              FortPawn;
	bool                                          bInIsDBNO;
};
static_assert(alignof(PlayerPawn_Athena_C_OnDBNOStateChanged_Event) == 0x000008, "Wrong alignment on PlayerPawn_Athena_C_OnDBNOStateChanged_Event");
static_assert(sizeof(PlayerPawn_Athena_C_OnDBNOStateChanged_Event) == 0x000010, "Wrong size on PlayerPawn_Athena_C_OnDBNOStateChanged_Event");
static_assert(offsetof(PlayerPawn_Athena_C_OnDBNOStateChanged_Event, FortPawn) == 0x000000, "Member 'PlayerPawn_Athena_C_OnDBNOStateChanged_Event::FortPawn' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_C_OnDBNOStateChanged_Event, bInIsDBNO) == 0x000008, "Member 'PlayerPawn_Athena_C_OnDBNOStateChanged_Event::bInIsDBNO' has a wrong offset!");

struct PlayerPawn_Athena_C_OnDeathPlayEffects final
{
public:
	float                                         Damage;
	uint8                                         Pad_4[0x4];
	struct FGameplayTagContainer                  DamageTags;
	struct FVector                                Momentum;
	struct FHitResult                             HitInfo;
	class AFortPawn*                              InstigatedBy;
	class AActor*                                 DamageCauser;
	struct FGameplayEffectContextHandle           EffectContext;
};
static_assert(alignof(PlayerPawn_Athena_C_OnDeathPlayEffects) == 0x000008, "Wrong alignment on PlayerPawn_Athena_C_OnDeathPlayEffects");
static_assert(sizeof(PlayerPawn_Athena_C_OnDeathPlayEffects) == 0x000148, "Wrong size on PlayerPawn_Athena_C_OnDeathPlayEffects");
static_assert(offsetof(PlayerPawn_Athena_C_OnDeathPlayEffects, Damage) == 0x000000, "Member 'PlayerPawn_Athena_C_OnDeathPlayEffects::Damage' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_C_OnDeathPlayEffects, DamageTags) == 0x000008, "Member 'PlayerPawn_Athena_C_OnDeathPlayEffects::DamageTags' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_C_OnDeathPlayEffects, Momentum) == 0x000028, "Member 'PlayerPawn_Athena_C_OnDeathPlayEffects::Momentum' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_C_OnDeathPlayEffects, HitInfo) == 0x000040, "Member 'PlayerPawn_Athena_C_OnDeathPlayEffects::HitInfo' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_C_OnDeathPlayEffects, InstigatedBy) == 0x000120, "Member 'PlayerPawn_Athena_C_OnDeathPlayEffects::InstigatedBy' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_C_OnDeathPlayEffects, DamageCauser) == 0x000128, "Member 'PlayerPawn_Athena_C_OnDeathPlayEffects::DamageCauser' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_C_OnDeathPlayEffects, EffectContext) == 0x000130, "Member 'PlayerPawn_Athena_C_OnDeathPlayEffects::EffectContext' has a wrong offset!");

struct PlayerPawn_Athena_C_OnDeathServer final
{
public:
	float                                         Damage;
	uint8                                         Pad_4[0x4];
	struct FGameplayTagContainer                  DamageTags;
	struct FVector                                Momentum;
	struct FHitResult                             HitInfo;
	class AController*                            InstigatedBy;
	class AActor*                                 DamageCauser;
	struct FGameplayEffectContextHandle           EffectContext;
};
static_assert(alignof(PlayerPawn_Athena_C_OnDeathServer) == 0x000008, "Wrong alignment on PlayerPawn_Athena_C_OnDeathServer");
static_assert(sizeof(PlayerPawn_Athena_C_OnDeathServer) == 0x000148, "Wrong size on PlayerPawn_Athena_C_OnDeathServer");
static_assert(offsetof(PlayerPawn_Athena_C_OnDeathServer, Damage) == 0x000000, "Member 'PlayerPawn_Athena_C_OnDeathServer::Damage' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_C_OnDeathServer, DamageTags) == 0x000008, "Member 'PlayerPawn_Athena_C_OnDeathServer::DamageTags' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_C_OnDeathServer, Momentum) == 0x000028, "Member 'PlayerPawn_Athena_C_OnDeathServer::Momentum' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_C_OnDeathServer, HitInfo) == 0x000040, "Member 'PlayerPawn_Athena_C_OnDeathServer::HitInfo' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_C_OnDeathServer, InstigatedBy) == 0x000120, "Member 'PlayerPawn_Athena_C_OnDeathServer::InstigatedBy' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_C_OnDeathServer, DamageCauser) == 0x000128, "Member 'PlayerPawn_Athena_C_OnDeathServer::DamageCauser' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_C_OnDeathServer, EffectContext) == 0x000130, "Member 'PlayerPawn_Athena_C_OnDeathServer::EffectContext' has a wrong offset!");

struct PlayerPawn_Athena_C_OnDisplayHitNotify final
{
public:
	float                                         DamageDealt;
	bool                                          bCriticalHit;
	bool                                          bFatalHit;
	bool                                          bShieldHit;
	uint8                                         Pad_7[0x1];
	class AActor*                                 HitActor;
	struct FGameplayTagContainer                  HitTags;
	struct FVector                                HitLocation;
};
static_assert(alignof(PlayerPawn_Athena_C_OnDisplayHitNotify) == 0x000008, "Wrong alignment on PlayerPawn_Athena_C_OnDisplayHitNotify");
static_assert(sizeof(PlayerPawn_Athena_C_OnDisplayHitNotify) == 0x000048, "Wrong size on PlayerPawn_Athena_C_OnDisplayHitNotify");
static_assert(offsetof(PlayerPawn_Athena_C_OnDisplayHitNotify, DamageDealt) == 0x000000, "Member 'PlayerPawn_Athena_C_OnDisplayHitNotify::DamageDealt' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_C_OnDisplayHitNotify, bCriticalHit) == 0x000004, "Member 'PlayerPawn_Athena_C_OnDisplayHitNotify::bCriticalHit' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_C_OnDisplayHitNotify, bFatalHit) == 0x000005, "Member 'PlayerPawn_Athena_C_OnDisplayHitNotify::bFatalHit' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_C_OnDisplayHitNotify, bShieldHit) == 0x000006, "Member 'PlayerPawn_Athena_C_OnDisplayHitNotify::bShieldHit' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_C_OnDisplayHitNotify, HitActor) == 0x000008, "Member 'PlayerPawn_Athena_C_OnDisplayHitNotify::HitActor' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_C_OnDisplayHitNotify, HitTags) == 0x000010, "Member 'PlayerPawn_Athena_C_OnDisplayHitNotify::HitTags' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_C_OnDisplayHitNotify, HitLocation) == 0x000030, "Member 'PlayerPawn_Athena_C_OnDisplayHitNotify::HitLocation' has a wrong offset!");

struct PlayerPawn_Athena_C_OnEnteredWaterBody final
{
public:
	class AFortWaterBodyActor*                    WaterBody;
	bool                                          bIsFirstBody;
};
static_assert(alignof(PlayerPawn_Athena_C_OnEnteredWaterBody) == 0x000008, "Wrong alignment on PlayerPawn_Athena_C_OnEnteredWaterBody");
static_assert(sizeof(PlayerPawn_Athena_C_OnEnteredWaterBody) == 0x000010, "Wrong size on PlayerPawn_Athena_C_OnEnteredWaterBody");
static_assert(offsetof(PlayerPawn_Athena_C_OnEnteredWaterBody, WaterBody) == 0x000000, "Member 'PlayerPawn_Athena_C_OnEnteredWaterBody::WaterBody' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_C_OnEnteredWaterBody, bIsFirstBody) == 0x000008, "Member 'PlayerPawn_Athena_C_OnEnteredWaterBody::bIsFirstBody' has a wrong offset!");

struct PlayerPawn_Athena_C_OnExitedWaterBody final
{
public:
	class AFortWaterBodyActor*                    WaterBody;
	bool                                          bIsLastBody;
};
static_assert(alignof(PlayerPawn_Athena_C_OnExitedWaterBody) == 0x000008, "Wrong alignment on PlayerPawn_Athena_C_OnExitedWaterBody");
static_assert(sizeof(PlayerPawn_Athena_C_OnExitedWaterBody) == 0x000010, "Wrong size on PlayerPawn_Athena_C_OnExitedWaterBody");
static_assert(offsetof(PlayerPawn_Athena_C_OnExitedWaterBody, WaterBody) == 0x000000, "Member 'PlayerPawn_Athena_C_OnExitedWaterBody::WaterBody' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_C_OnExitedWaterBody, bIsLastBody) == 0x000008, "Member 'PlayerPawn_Athena_C_OnExitedWaterBody::bIsLastBody' has a wrong offset!");

struct PlayerPawn_Athena_C_OnLockOnSearchCompleted final
{
public:
	bool                                          bConsumeEvent;
	uint8                                         Pad_1[0x7];
	struct FTimerHandle                           CallFunc_K2_SetTimer_ReturnValue;
};
static_assert(alignof(PlayerPawn_Athena_C_OnLockOnSearchCompleted) == 0x000008, "Wrong alignment on PlayerPawn_Athena_C_OnLockOnSearchCompleted");
static_assert(sizeof(PlayerPawn_Athena_C_OnLockOnSearchCompleted) == 0x000010, "Wrong size on PlayerPawn_Athena_C_OnLockOnSearchCompleted");
static_assert(offsetof(PlayerPawn_Athena_C_OnLockOnSearchCompleted, bConsumeEvent) == 0x000000, "Member 'PlayerPawn_Athena_C_OnLockOnSearchCompleted::bConsumeEvent' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_C_OnLockOnSearchCompleted, CallFunc_K2_SetTimer_ReturnValue) == 0x000008, "Member 'PlayerPawn_Athena_C_OnLockOnSearchCompleted::CallFunc_K2_SetTimer_ReturnValue' has a wrong offset!");

struct PlayerPawn_Athena_C_OnOutsideSafeZonePhaseChanged final
{
public:
	int32                                         SafeZonePhase_0;
};
static_assert(alignof(PlayerPawn_Athena_C_OnOutsideSafeZonePhaseChanged) == 0x000004, "Wrong alignment on PlayerPawn_Athena_C_OnOutsideSafeZonePhaseChanged");
static_assert(sizeof(PlayerPawn_Athena_C_OnOutsideSafeZonePhaseChanged) == 0x000004, "Wrong size on PlayerPawn_Athena_C_OnOutsideSafeZonePhaseChanged");
static_assert(offsetof(PlayerPawn_Athena_C_OnOutsideSafeZonePhaseChanged, SafeZonePhase_0) == 0x000000, "Member 'PlayerPawn_Athena_C_OnOutsideSafeZonePhaseChanged::SafeZonePhase_0' has a wrong offset!");

struct PlayerPawn_Athena_C_OnPart final
{
public:
	class AFortPlayerPawn*                        Pawn;
	class UCustomCharacterPart*                   Part;
	class USkeletalMeshComponent*                 MeshPart;
	EFortCustomPartType                           PartType;
};
static_assert(alignof(PlayerPawn_Athena_C_OnPart) == 0x000008, "Wrong alignment on PlayerPawn_Athena_C_OnPart");
static_assert(sizeof(PlayerPawn_Athena_C_OnPart) == 0x000020, "Wrong size on PlayerPawn_Athena_C_OnPart");
static_assert(offsetof(PlayerPawn_Athena_C_OnPart, Pawn) == 0x000000, "Member 'PlayerPawn_Athena_C_OnPart::Pawn' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_C_OnPart, Part) == 0x000008, "Member 'PlayerPawn_Athena_C_OnPart::Part' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_C_OnPart, MeshPart) == 0x000010, "Member 'PlayerPawn_Athena_C_OnPart::MeshPart' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_C_OnPart, PartType) == 0x000018, "Member 'PlayerPawn_Athena_C_OnPart::PartType' has a wrong offset!");

struct PlayerPawn_Athena_C_OnReady_978607004CDEB137CACF38831BECEF40 final
{
public:
	class AFortGameStateAthena*                   GameState;
	const class UFortPlaylist*                    Playlist;
	struct FGameplayTagContainer                  PlaylistContextTags;
};
static_assert(alignof(PlayerPawn_Athena_C_OnReady_978607004CDEB137CACF38831BECEF40) == 0x000008, "Wrong alignment on PlayerPawn_Athena_C_OnReady_978607004CDEB137CACF38831BECEF40");
static_assert(sizeof(PlayerPawn_Athena_C_OnReady_978607004CDEB137CACF38831BECEF40) == 0x000030, "Wrong size on PlayerPawn_Athena_C_OnReady_978607004CDEB137CACF38831BECEF40");
static_assert(offsetof(PlayerPawn_Athena_C_OnReady_978607004CDEB137CACF38831BECEF40, GameState) == 0x000000, "Member 'PlayerPawn_Athena_C_OnReady_978607004CDEB137CACF38831BECEF40::GameState' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_C_OnReady_978607004CDEB137CACF38831BECEF40, Playlist) == 0x000008, "Member 'PlayerPawn_Athena_C_OnReady_978607004CDEB137CACF38831BECEF40::Playlist' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_C_OnReady_978607004CDEB137CACF38831BECEF40, PlaylistContextTags) == 0x000010, "Member 'PlayerPawn_Athena_C_OnReady_978607004CDEB137CACF38831BECEF40::PlaylistContextTags' has a wrong offset!");

struct PlayerPawn_Athena_C_OnStartLongInteract final
{
public:
	class AActor*                                 ReceivingActor;
	bool                                          Out_bConsumeEvent;
	bool                                          Out_bSkipSetInteractDuration;
	bool                                          Out_bSkipStartAnimation;
	EItemInteractionType                          Out_ItemInteractionType;
	bool                                          CallFunc_ActorHasTag_ReturnValue;
	bool                                          CallFunc_ActorHasTag_ReturnValue_1;
	uint8                                         Pad_E[0x2];
	class AFortPlayerPawnAthena*                  K2Node_DynamicCast_AsFort_Player_Pawn_Athena;
	bool                                          K2Node_DynamicCast_bSuccess;
	uint8                                         Pad_19[0x3];
	struct FGameplayTag                           CallFunc_MakeLiteralGameplayTag_ReturnValue;
	class UAbilitySystemComponent*                CallFunc_GetAbilitySystemComponent_ReturnValue;
	bool                                          CallFunc_IsValid_ReturnValue;
	uint8                                         Pad_29[0x7];
	TScriptInterface<class IGameplayTagAssetInterface> CallFunc_HasMatchingGameplayTag_self_CastInput;
	bool                                          CallFunc_HasMatchingGameplayTag_ReturnValue;
};
static_assert(alignof(PlayerPawn_Athena_C_OnStartLongInteract) == 0x000008, "Wrong alignment on PlayerPawn_Athena_C_OnStartLongInteract");
static_assert(sizeof(PlayerPawn_Athena_C_OnStartLongInteract) == 0x000048, "Wrong size on PlayerPawn_Athena_C_OnStartLongInteract");
static_assert(offsetof(PlayerPawn_Athena_C_OnStartLongInteract, ReceivingActor) == 0x000000, "Member 'PlayerPawn_Athena_C_OnStartLongInteract::ReceivingActor' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_C_OnStartLongInteract, Out_bConsumeEvent) == 0x000008, "Member 'PlayerPawn_Athena_C_OnStartLongInteract::Out_bConsumeEvent' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_C_OnStartLongInteract, Out_bSkipSetInteractDuration) == 0x000009, "Member 'PlayerPawn_Athena_C_OnStartLongInteract::Out_bSkipSetInteractDuration' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_C_OnStartLongInteract, Out_bSkipStartAnimation) == 0x00000A, "Member 'PlayerPawn_Athena_C_OnStartLongInteract::Out_bSkipStartAnimation' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_C_OnStartLongInteract, Out_ItemInteractionType) == 0x00000B, "Member 'PlayerPawn_Athena_C_OnStartLongInteract::Out_ItemInteractionType' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_C_OnStartLongInteract, CallFunc_ActorHasTag_ReturnValue) == 0x00000C, "Member 'PlayerPawn_Athena_C_OnStartLongInteract::CallFunc_ActorHasTag_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_C_OnStartLongInteract, CallFunc_ActorHasTag_ReturnValue_1) == 0x00000D, "Member 'PlayerPawn_Athena_C_OnStartLongInteract::CallFunc_ActorHasTag_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_C_OnStartLongInteract, K2Node_DynamicCast_AsFort_Player_Pawn_Athena) == 0x000010, "Member 'PlayerPawn_Athena_C_OnStartLongInteract::K2Node_DynamicCast_AsFort_Player_Pawn_Athena' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_C_OnStartLongInteract, K2Node_DynamicCast_bSuccess) == 0x000018, "Member 'PlayerPawn_Athena_C_OnStartLongInteract::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_C_OnStartLongInteract, CallFunc_MakeLiteralGameplayTag_ReturnValue) == 0x00001C, "Member 'PlayerPawn_Athena_C_OnStartLongInteract::CallFunc_MakeLiteralGameplayTag_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_C_OnStartLongInteract, CallFunc_GetAbilitySystemComponent_ReturnValue) == 0x000020, "Member 'PlayerPawn_Athena_C_OnStartLongInteract::CallFunc_GetAbilitySystemComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_C_OnStartLongInteract, CallFunc_IsValid_ReturnValue) == 0x000028, "Member 'PlayerPawn_Athena_C_OnStartLongInteract::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_C_OnStartLongInteract, CallFunc_HasMatchingGameplayTag_self_CastInput) == 0x000030, "Member 'PlayerPawn_Athena_C_OnStartLongInteract::CallFunc_HasMatchingGameplayTag_self_CastInput' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_C_OnStartLongInteract, CallFunc_HasMatchingGameplayTag_ReturnValue) == 0x000040, "Member 'PlayerPawn_Athena_C_OnStartLongInteract::CallFunc_HasMatchingGameplayTag_ReturnValue' has a wrong offset!");

struct PlayerPawn_Athena_C_OnTetherEnded final
{
public:
	class APawn*                                  LastTetherPawn;
};
static_assert(alignof(PlayerPawn_Athena_C_OnTetherEnded) == 0x000008, "Wrong alignment on PlayerPawn_Athena_C_OnTetherEnded");
static_assert(sizeof(PlayerPawn_Athena_C_OnTetherEnded) == 0x000008, "Wrong size on PlayerPawn_Athena_C_OnTetherEnded");
static_assert(offsetof(PlayerPawn_Athena_C_OnTetherEnded, LastTetherPawn) == 0x000000, "Member 'PlayerPawn_Athena_C_OnTetherEnded::LastTetherPawn' has a wrong offset!");

struct PlayerPawn_Athena_C_OnTetherStarted final
{
public:
	class APawn*                                  LastTetherPawn;
};
static_assert(alignof(PlayerPawn_Athena_C_OnTetherStarted) == 0x000008, "Wrong alignment on PlayerPawn_Athena_C_OnTetherStarted");
static_assert(sizeof(PlayerPawn_Athena_C_OnTetherStarted) == 0x000008, "Wrong size on PlayerPawn_Athena_C_OnTetherStarted");
static_assert(offsetof(PlayerPawn_Athena_C_OnTetherStarted, LastTetherPawn) == 0x000000, "Member 'PlayerPawn_Athena_C_OnTetherStarted::LastTetherPawn' has a wrong offset!");

struct PlayerPawn_Athena_C_PawnIsDecoy final
{
public:
	bool                                          ReturnValue;
	bool                                          CallFunc_HasTag_ReturnValue;
};
static_assert(alignof(PlayerPawn_Athena_C_PawnIsDecoy) == 0x000001, "Wrong alignment on PlayerPawn_Athena_C_PawnIsDecoy");
static_assert(sizeof(PlayerPawn_Athena_C_PawnIsDecoy) == 0x000002, "Wrong size on PlayerPawn_Athena_C_PawnIsDecoy");
static_assert(offsetof(PlayerPawn_Athena_C_PawnIsDecoy, ReturnValue) == 0x000000, "Member 'PlayerPawn_Athena_C_PawnIsDecoy::ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_C_PawnIsDecoy, CallFunc_HasTag_ReturnValue) == 0x000001, "Member 'PlayerPawn_Athena_C_PawnIsDecoy::CallFunc_HasTag_ReturnValue' has a wrong offset!");

struct PlayerPawn_Athena_C_PawnIsNPC final
{
public:
	bool                                          ReturnValue;
	bool                                          CallFunc_HasTag_ReturnValue;
};
static_assert(alignof(PlayerPawn_Athena_C_PawnIsNPC) == 0x000001, "Wrong alignment on PlayerPawn_Athena_C_PawnIsNPC");
static_assert(sizeof(PlayerPawn_Athena_C_PawnIsNPC) == 0x000002, "Wrong size on PlayerPawn_Athena_C_PawnIsNPC");
static_assert(offsetof(PlayerPawn_Athena_C_PawnIsNPC, ReturnValue) == 0x000000, "Member 'PlayerPawn_Athena_C_PawnIsNPC::ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_C_PawnIsNPC, CallFunc_HasTag_ReturnValue) == 0x000001, "Member 'PlayerPawn_Athena_C_PawnIsNPC::CallFunc_HasTag_ReturnValue' has a wrong offset!");

struct PlayerPawn_Athena_C_ReceiveEndPlay final
{
public:
	EEndPlayReason                                EndPlayReason;
};
static_assert(alignof(PlayerPawn_Athena_C_ReceiveEndPlay) == 0x000001, "Wrong alignment on PlayerPawn_Athena_C_ReceiveEndPlay");
static_assert(sizeof(PlayerPawn_Athena_C_ReceiveEndPlay) == 0x000001, "Wrong size on PlayerPawn_Athena_C_ReceiveEndPlay");
static_assert(offsetof(PlayerPawn_Athena_C_ReceiveEndPlay, EndPlayReason) == 0x000000, "Member 'PlayerPawn_Athena_C_ReceiveEndPlay::EndPlayReason' has a wrong offset!");

struct PlayerPawn_Athena_C_ReceiveHit final
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
static_assert(alignof(PlayerPawn_Athena_C_ReceiveHit) == 0x000008, "Wrong alignment on PlayerPawn_Athena_C_ReceiveHit");
static_assert(sizeof(PlayerPawn_Athena_C_ReceiveHit) == 0x000148, "Wrong size on PlayerPawn_Athena_C_ReceiveHit");
static_assert(offsetof(PlayerPawn_Athena_C_ReceiveHit, MyComp) == 0x000000, "Member 'PlayerPawn_Athena_C_ReceiveHit::MyComp' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_C_ReceiveHit, Other) == 0x000008, "Member 'PlayerPawn_Athena_C_ReceiveHit::Other' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_C_ReceiveHit, OtherComp) == 0x000010, "Member 'PlayerPawn_Athena_C_ReceiveHit::OtherComp' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_C_ReceiveHit, bSelfMoved) == 0x000018, "Member 'PlayerPawn_Athena_C_ReceiveHit::bSelfMoved' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_C_ReceiveHit, HitLocation) == 0x000020, "Member 'PlayerPawn_Athena_C_ReceiveHit::HitLocation' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_C_ReceiveHit, HitNormal) == 0x000038, "Member 'PlayerPawn_Athena_C_ReceiveHit::HitNormal' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_C_ReceiveHit, NormalImpulse) == 0x000050, "Member 'PlayerPawn_Athena_C_ReceiveHit::NormalImpulse' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_C_ReceiveHit, Hit) == 0x000068, "Member 'PlayerPawn_Athena_C_ReceiveHit::Hit' has a wrong offset!");

struct PlayerPawn_Athena_C_ReceivePossessed final
{
public:
	class AController*                            NewController;
};
static_assert(alignof(PlayerPawn_Athena_C_ReceivePossessed) == 0x000008, "Wrong alignment on PlayerPawn_Athena_C_ReceivePossessed");
static_assert(sizeof(PlayerPawn_Athena_C_ReceivePossessed) == 0x000008, "Wrong size on PlayerPawn_Athena_C_ReceivePossessed");
static_assert(offsetof(PlayerPawn_Athena_C_ReceivePossessed, NewController) == 0x000000, "Member 'PlayerPawn_Athena_C_ReceivePossessed::NewController' has a wrong offset!");

struct PlayerPawn_Athena_C_Remove_Pawn_Highlight_from_Source final
{
public:
	class UObject*                                Source;
	class UObject*                                CallFunc_Get_Highest_Priority_Highlight_Source;
	struct FPawnHighlight                         CallFunc_Get_Highest_Priority_Highlight_Top_Priority;
	bool                                          CallFunc_EqualEqual_ObjectObject_ReturnValue;
	bool                                          CallFunc_Map_Remove_ReturnValue;
};
static_assert(alignof(PlayerPawn_Athena_C_Remove_Pawn_Highlight_from_Source) == 0x000008, "Wrong alignment on PlayerPawn_Athena_C_Remove_Pawn_Highlight_from_Source");
static_assert(sizeof(PlayerPawn_Athena_C_Remove_Pawn_Highlight_from_Source) == 0x000048, "Wrong size on PlayerPawn_Athena_C_Remove_Pawn_Highlight_from_Source");
static_assert(offsetof(PlayerPawn_Athena_C_Remove_Pawn_Highlight_from_Source, Source) == 0x000000, "Member 'PlayerPawn_Athena_C_Remove_Pawn_Highlight_from_Source::Source' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_C_Remove_Pawn_Highlight_from_Source, CallFunc_Get_Highest_Priority_Highlight_Source) == 0x000008, "Member 'PlayerPawn_Athena_C_Remove_Pawn_Highlight_from_Source::CallFunc_Get_Highest_Priority_Highlight_Source' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_C_Remove_Pawn_Highlight_from_Source, CallFunc_Get_Highest_Priority_Highlight_Top_Priority) == 0x000010, "Member 'PlayerPawn_Athena_C_Remove_Pawn_Highlight_from_Source::CallFunc_Get_Highest_Priority_Highlight_Top_Priority' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_C_Remove_Pawn_Highlight_from_Source, CallFunc_EqualEqual_ObjectObject_ReturnValue) == 0x000040, "Member 'PlayerPawn_Athena_C_Remove_Pawn_Highlight_from_Source::CallFunc_EqualEqual_ObjectObject_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_C_Remove_Pawn_Highlight_from_Source, CallFunc_Map_Remove_ReturnValue) == 0x000041, "Member 'PlayerPawn_Athena_C_Remove_Pawn_Highlight_from_Source::CallFunc_Map_Remove_ReturnValue' has a wrong offset!");

struct PlayerPawn_Athena_C_RemoveHighlightFromSource final
{
public:
	class UObject*                                Source;
};
static_assert(alignof(PlayerPawn_Athena_C_RemoveHighlightFromSource) == 0x000008, "Wrong alignment on PlayerPawn_Athena_C_RemoveHighlightFromSource");
static_assert(sizeof(PlayerPawn_Athena_C_RemoveHighlightFromSource) == 0x000008, "Wrong size on PlayerPawn_Athena_C_RemoveHighlightFromSource");
static_assert(offsetof(PlayerPawn_Athena_C_RemoveHighlightFromSource, Source) == 0x000000, "Member 'PlayerPawn_Athena_C_RemoveHighlightFromSource::Source' has a wrong offset!");

struct PlayerPawn_Athena_C_RemoveSkeletalMeshComponentsFromWeaponObject final
{
public:
	class AFortWeapon*                            WeaponObject;
	int32                                         ComponentIndexOffset;
	int32                                         Temp_int_Variable;
	bool                                          CallFunc_IsValid_ReturnValue;
	uint8                                         Pad_11[0x3];
	int32                                         CallFunc_Add_IntInt_ReturnValue;
	TArray<class USkeletalMeshComponentBudgeted*> CallFunc_GetWeaponMeshes_WeaponMeshes;
	int32                                         Temp_int_Loop_Counter_Variable;
	int32                                         CallFunc_Array_Length_ReturnValue;
	int32                                         CallFunc_Add_IntInt_ReturnValue_1;
	bool                                          CallFunc_Less_IntInt_ReturnValue;
	uint8                                         Pad_35[0x3];
	int32                                         Temp_int_Array_Index_Variable;
	uint8                                         Pad_3C[0x4];
	class UMaterialInterface*                     Temp_wildcard_Variable;
	class USkeletalMeshComponentBudgeted*         CallFunc_Array_Get_Item;
	int32                                         CallFunc_GetNumMaterials_ReturnValue;
	int32                                         CallFunc_Subtract_IntInt_ReturnValue;
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue;
	uint8                                         Pad_59[0x3];
	int32                                         CallFunc_Array_Length_ReturnValue_1;
	bool                                          CallFunc_Conv_IntToBool_ReturnValue;
	uint8                                         Pad_61[0x3];
	int32                                         CallFunc_Add_IntInt_ReturnValue_2;
	int32                                         CallFunc_Add_IntInt_ReturnValue_3;
	uint8                                         Pad_6C[0x4];
	class UMaterialInterface*                     CallFunc_Array_Get_Item_1;
	bool                                          CallFunc_Array_IsValidIndex_ReturnValue;
	bool                                          CallFunc_Array_RemoveItem_ReturnValue;
};
static_assert(alignof(PlayerPawn_Athena_C_RemoveSkeletalMeshComponentsFromWeaponObject) == 0x000008, "Wrong alignment on PlayerPawn_Athena_C_RemoveSkeletalMeshComponentsFromWeaponObject");
static_assert(sizeof(PlayerPawn_Athena_C_RemoveSkeletalMeshComponentsFromWeaponObject) == 0x000080, "Wrong size on PlayerPawn_Athena_C_RemoveSkeletalMeshComponentsFromWeaponObject");
static_assert(offsetof(PlayerPawn_Athena_C_RemoveSkeletalMeshComponentsFromWeaponObject, WeaponObject) == 0x000000, "Member 'PlayerPawn_Athena_C_RemoveSkeletalMeshComponentsFromWeaponObject::WeaponObject' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_C_RemoveSkeletalMeshComponentsFromWeaponObject, ComponentIndexOffset) == 0x000008, "Member 'PlayerPawn_Athena_C_RemoveSkeletalMeshComponentsFromWeaponObject::ComponentIndexOffset' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_C_RemoveSkeletalMeshComponentsFromWeaponObject, Temp_int_Variable) == 0x00000C, "Member 'PlayerPawn_Athena_C_RemoveSkeletalMeshComponentsFromWeaponObject::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_C_RemoveSkeletalMeshComponentsFromWeaponObject, CallFunc_IsValid_ReturnValue) == 0x000010, "Member 'PlayerPawn_Athena_C_RemoveSkeletalMeshComponentsFromWeaponObject::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_C_RemoveSkeletalMeshComponentsFromWeaponObject, CallFunc_Add_IntInt_ReturnValue) == 0x000014, "Member 'PlayerPawn_Athena_C_RemoveSkeletalMeshComponentsFromWeaponObject::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_C_RemoveSkeletalMeshComponentsFromWeaponObject, CallFunc_GetWeaponMeshes_WeaponMeshes) == 0x000018, "Member 'PlayerPawn_Athena_C_RemoveSkeletalMeshComponentsFromWeaponObject::CallFunc_GetWeaponMeshes_WeaponMeshes' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_C_RemoveSkeletalMeshComponentsFromWeaponObject, Temp_int_Loop_Counter_Variable) == 0x000028, "Member 'PlayerPawn_Athena_C_RemoveSkeletalMeshComponentsFromWeaponObject::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_C_RemoveSkeletalMeshComponentsFromWeaponObject, CallFunc_Array_Length_ReturnValue) == 0x00002C, "Member 'PlayerPawn_Athena_C_RemoveSkeletalMeshComponentsFromWeaponObject::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_C_RemoveSkeletalMeshComponentsFromWeaponObject, CallFunc_Add_IntInt_ReturnValue_1) == 0x000030, "Member 'PlayerPawn_Athena_C_RemoveSkeletalMeshComponentsFromWeaponObject::CallFunc_Add_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_C_RemoveSkeletalMeshComponentsFromWeaponObject, CallFunc_Less_IntInt_ReturnValue) == 0x000034, "Member 'PlayerPawn_Athena_C_RemoveSkeletalMeshComponentsFromWeaponObject::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_C_RemoveSkeletalMeshComponentsFromWeaponObject, Temp_int_Array_Index_Variable) == 0x000038, "Member 'PlayerPawn_Athena_C_RemoveSkeletalMeshComponentsFromWeaponObject::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_C_RemoveSkeletalMeshComponentsFromWeaponObject, Temp_wildcard_Variable) == 0x000040, "Member 'PlayerPawn_Athena_C_RemoveSkeletalMeshComponentsFromWeaponObject::Temp_wildcard_Variable' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_C_RemoveSkeletalMeshComponentsFromWeaponObject, CallFunc_Array_Get_Item) == 0x000048, "Member 'PlayerPawn_Athena_C_RemoveSkeletalMeshComponentsFromWeaponObject::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_C_RemoveSkeletalMeshComponentsFromWeaponObject, CallFunc_GetNumMaterials_ReturnValue) == 0x000050, "Member 'PlayerPawn_Athena_C_RemoveSkeletalMeshComponentsFromWeaponObject::CallFunc_GetNumMaterials_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_C_RemoveSkeletalMeshComponentsFromWeaponObject, CallFunc_Subtract_IntInt_ReturnValue) == 0x000054, "Member 'PlayerPawn_Athena_C_RemoveSkeletalMeshComponentsFromWeaponObject::CallFunc_Subtract_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_C_RemoveSkeletalMeshComponentsFromWeaponObject, CallFunc_LessEqual_IntInt_ReturnValue) == 0x000058, "Member 'PlayerPawn_Athena_C_RemoveSkeletalMeshComponentsFromWeaponObject::CallFunc_LessEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_C_RemoveSkeletalMeshComponentsFromWeaponObject, CallFunc_Array_Length_ReturnValue_1) == 0x00005C, "Member 'PlayerPawn_Athena_C_RemoveSkeletalMeshComponentsFromWeaponObject::CallFunc_Array_Length_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_C_RemoveSkeletalMeshComponentsFromWeaponObject, CallFunc_Conv_IntToBool_ReturnValue) == 0x000060, "Member 'PlayerPawn_Athena_C_RemoveSkeletalMeshComponentsFromWeaponObject::CallFunc_Conv_IntToBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_C_RemoveSkeletalMeshComponentsFromWeaponObject, CallFunc_Add_IntInt_ReturnValue_2) == 0x000064, "Member 'PlayerPawn_Athena_C_RemoveSkeletalMeshComponentsFromWeaponObject::CallFunc_Add_IntInt_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_C_RemoveSkeletalMeshComponentsFromWeaponObject, CallFunc_Add_IntInt_ReturnValue_3) == 0x000068, "Member 'PlayerPawn_Athena_C_RemoveSkeletalMeshComponentsFromWeaponObject::CallFunc_Add_IntInt_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_C_RemoveSkeletalMeshComponentsFromWeaponObject, CallFunc_Array_Get_Item_1) == 0x000070, "Member 'PlayerPawn_Athena_C_RemoveSkeletalMeshComponentsFromWeaponObject::CallFunc_Array_Get_Item_1' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_C_RemoveSkeletalMeshComponentsFromWeaponObject, CallFunc_Array_IsValidIndex_ReturnValue) == 0x000078, "Member 'PlayerPawn_Athena_C_RemoveSkeletalMeshComponentsFromWeaponObject::CallFunc_Array_IsValidIndex_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_C_RemoveSkeletalMeshComponentsFromWeaponObject, CallFunc_Array_RemoveItem_ReturnValue) == 0x000079, "Member 'PlayerPawn_Athena_C_RemoveSkeletalMeshComponentsFromWeaponObject::CallFunc_Array_RemoveItem_ReturnValue' has a wrong offset!");

struct PlayerPawn_Athena_C_ReplicateAimRotation final
{
public:
	struct FRotator                               PlayerAimRotation_0;
};
static_assert(alignof(PlayerPawn_Athena_C_ReplicateAimRotation) == 0x000008, "Wrong alignment on PlayerPawn_Athena_C_ReplicateAimRotation");
static_assert(sizeof(PlayerPawn_Athena_C_ReplicateAimRotation) == 0x000018, "Wrong size on PlayerPawn_Athena_C_ReplicateAimRotation");
static_assert(offsetof(PlayerPawn_Athena_C_ReplicateAimRotation, PlayerAimRotation_0) == 0x000000, "Member 'PlayerPawn_Athena_C_ReplicateAimRotation::PlayerAimRotation_0' has a wrong offset!");

struct PlayerPawn_Athena_C_RestoreCharacterMats final
{
public:
	bool                                          bFullyCompleted;
	uint8                                         Pad_1[0x3];
	int32                                         CurrentReplacementIndex;
	int32                                         Itr;
	int32                                         Temp_int_Loop_Counter_Variable;
	class UMaterialInstanceDynamic*               Temp_wildcard_Variable;
	int32                                         CallFunc_Add_IntInt_ReturnValue;
	int32                                         Temp_int_Loop_Counter_Variable_1;
	int32                                         CallFunc_Add_IntInt_ReturnValue_1;
	int32                                         Temp_int_Array_Index_Variable;
	int32                                         Temp_int_Array_Index_Variable_1;
	uint8                                         Pad_2C[0x4];
	class UMaterialInstanceDynamic*               CallFunc_Array_Get_Item;
	bool                                          CallFunc_Array_IsValidIndex_ReturnValue;
	uint8                                         Pad_39[0x3];
	int32                                         CallFunc_Add_IntInt_ReturnValue_2;
	class USkeletalMeshComponent*                 CallFunc_Array_Get_Item_1;
	TArray<class UMaterialInterface*>             CallFunc_GetMaterials_ReturnValue;
	int32                                         CallFunc_Array_Length_ReturnValue;
	int32                                         CallFunc_Array_Length_ReturnValue_1;
	bool                                          CallFunc_Less_IntInt_ReturnValue;
	bool                                          CallFunc_Less_IntInt_ReturnValue_1;
	uint8                                         Pad_62[0x2];
	int32                                         CallFunc_Array_Length_ReturnValue_2;
	int32                                         CallFunc_Add_IntInt_ReturnValue_3;
};
static_assert(alignof(PlayerPawn_Athena_C_RestoreCharacterMats) == 0x000008, "Wrong alignment on PlayerPawn_Athena_C_RestoreCharacterMats");
static_assert(sizeof(PlayerPawn_Athena_C_RestoreCharacterMats) == 0x000070, "Wrong size on PlayerPawn_Athena_C_RestoreCharacterMats");
static_assert(offsetof(PlayerPawn_Athena_C_RestoreCharacterMats, bFullyCompleted) == 0x000000, "Member 'PlayerPawn_Athena_C_RestoreCharacterMats::bFullyCompleted' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_C_RestoreCharacterMats, CurrentReplacementIndex) == 0x000004, "Member 'PlayerPawn_Athena_C_RestoreCharacterMats::CurrentReplacementIndex' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_C_RestoreCharacterMats, Itr) == 0x000008, "Member 'PlayerPawn_Athena_C_RestoreCharacterMats::Itr' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_C_RestoreCharacterMats, Temp_int_Loop_Counter_Variable) == 0x00000C, "Member 'PlayerPawn_Athena_C_RestoreCharacterMats::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_C_RestoreCharacterMats, Temp_wildcard_Variable) == 0x000010, "Member 'PlayerPawn_Athena_C_RestoreCharacterMats::Temp_wildcard_Variable' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_C_RestoreCharacterMats, CallFunc_Add_IntInt_ReturnValue) == 0x000018, "Member 'PlayerPawn_Athena_C_RestoreCharacterMats::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_C_RestoreCharacterMats, Temp_int_Loop_Counter_Variable_1) == 0x00001C, "Member 'PlayerPawn_Athena_C_RestoreCharacterMats::Temp_int_Loop_Counter_Variable_1' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_C_RestoreCharacterMats, CallFunc_Add_IntInt_ReturnValue_1) == 0x000020, "Member 'PlayerPawn_Athena_C_RestoreCharacterMats::CallFunc_Add_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_C_RestoreCharacterMats, Temp_int_Array_Index_Variable) == 0x000024, "Member 'PlayerPawn_Athena_C_RestoreCharacterMats::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_C_RestoreCharacterMats, Temp_int_Array_Index_Variable_1) == 0x000028, "Member 'PlayerPawn_Athena_C_RestoreCharacterMats::Temp_int_Array_Index_Variable_1' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_C_RestoreCharacterMats, CallFunc_Array_Get_Item) == 0x000030, "Member 'PlayerPawn_Athena_C_RestoreCharacterMats::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_C_RestoreCharacterMats, CallFunc_Array_IsValidIndex_ReturnValue) == 0x000038, "Member 'PlayerPawn_Athena_C_RestoreCharacterMats::CallFunc_Array_IsValidIndex_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_C_RestoreCharacterMats, CallFunc_Add_IntInt_ReturnValue_2) == 0x00003C, "Member 'PlayerPawn_Athena_C_RestoreCharacterMats::CallFunc_Add_IntInt_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_C_RestoreCharacterMats, CallFunc_Array_Get_Item_1) == 0x000040, "Member 'PlayerPawn_Athena_C_RestoreCharacterMats::CallFunc_Array_Get_Item_1' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_C_RestoreCharacterMats, CallFunc_GetMaterials_ReturnValue) == 0x000048, "Member 'PlayerPawn_Athena_C_RestoreCharacterMats::CallFunc_GetMaterials_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_C_RestoreCharacterMats, CallFunc_Array_Length_ReturnValue) == 0x000058, "Member 'PlayerPawn_Athena_C_RestoreCharacterMats::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_C_RestoreCharacterMats, CallFunc_Array_Length_ReturnValue_1) == 0x00005C, "Member 'PlayerPawn_Athena_C_RestoreCharacterMats::CallFunc_Array_Length_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_C_RestoreCharacterMats, CallFunc_Less_IntInt_ReturnValue) == 0x000060, "Member 'PlayerPawn_Athena_C_RestoreCharacterMats::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_C_RestoreCharacterMats, CallFunc_Less_IntInt_ReturnValue_1) == 0x000061, "Member 'PlayerPawn_Athena_C_RestoreCharacterMats::CallFunc_Less_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_C_RestoreCharacterMats, CallFunc_Array_Length_ReturnValue_2) == 0x000064, "Member 'PlayerPawn_Athena_C_RestoreCharacterMats::CallFunc_Array_Length_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_C_RestoreCharacterMats, CallFunc_Add_IntInt_ReturnValue_3) == 0x000068, "Member 'PlayerPawn_Athena_C_RestoreCharacterMats::CallFunc_Add_IntInt_ReturnValue_3' has a wrong offset!");

struct PlayerPawn_Athena_C_Rimlight_Setup final
{
public:
	class FString                                 CVarName;
	int32                                         Temp_int_Array_Index_Variable;
	int32                                         Temp_int_Loop_Counter_Variable;
	int32                                         CallFunc_Add_IntInt_ReturnValue;
	int32                                         Temp_int_Array_Index_Variable_1;
	bool                                          CallFunc_IsLocallyControlled_ReturnValue;
	uint8                                         Pad_21[0x3];
	float                                         CallFunc_GetConsoleVariableFloatValue_ReturnValue;
	bool                                          CallFunc_GetConsoleVariableBoolValue_ReturnValue;
	uint8                                         Pad_29[0x7];
	class UMaterialInstanceDynamic*               CallFunc_Array_Get_Item;
	int32                                         CallFunc_Array_Length_ReturnValue;
	bool                                          CallFunc_GetConsoleVariableBoolValue_ReturnValue_1;
	bool                                          CallFunc_GetConsoleVariableBoolValue_ReturnValue_2;
	bool                                          CallFunc_IsLocallyControlled_ReturnValue_1;
	uint8                                         Pad_3F[0x1];
	class UMaterialInstanceDynamic*               CallFunc_Array_Get_Item_1;
	int32                                         CallFunc_Array_Length_ReturnValue_1;
	int32                                         Temp_int_Loop_Counter_Variable_1;
	bool                                          CallFunc_Less_IntInt_ReturnValue;
	bool                                          CallFunc_Less_IntInt_ReturnValue_1;
	uint8                                         Pad_52[0x2];
	int32                                         CallFunc_Add_IntInt_ReturnValue_1;
	bool                                          CallFunc_IsValid_ReturnValue;
	bool                                          CallFunc_IsValid_ReturnValue_1;
	uint8                                         Pad_5A[0x6];
	struct FTransform                             CallFunc_K2_GetComponentToWorld_ReturnValue;
	class AActor*                                 CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue;
	class APhysicalRimlight_C*                    CallFunc_FinishSpawningActor_ReturnValue;
	float                                         CallFunc_SetScalarParameterValue_Value_ImplicitCast;
	uint8                                         Pad_D4[0x4];
	double                                        K2Node_VariableSet_RimlightCVARBoost_ImplicitCast;
	float                                         CallFunc_SetScalarParameterValue_Value_ImplicitCast_1;
};
static_assert(alignof(PlayerPawn_Athena_C_Rimlight_Setup) == 0x000010, "Wrong alignment on PlayerPawn_Athena_C_Rimlight_Setup");
static_assert(sizeof(PlayerPawn_Athena_C_Rimlight_Setup) == 0x0000F0, "Wrong size on PlayerPawn_Athena_C_Rimlight_Setup");
static_assert(offsetof(PlayerPawn_Athena_C_Rimlight_Setup, CVarName) == 0x000000, "Member 'PlayerPawn_Athena_C_Rimlight_Setup::CVarName' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_C_Rimlight_Setup, Temp_int_Array_Index_Variable) == 0x000010, "Member 'PlayerPawn_Athena_C_Rimlight_Setup::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_C_Rimlight_Setup, Temp_int_Loop_Counter_Variable) == 0x000014, "Member 'PlayerPawn_Athena_C_Rimlight_Setup::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_C_Rimlight_Setup, CallFunc_Add_IntInt_ReturnValue) == 0x000018, "Member 'PlayerPawn_Athena_C_Rimlight_Setup::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_C_Rimlight_Setup, Temp_int_Array_Index_Variable_1) == 0x00001C, "Member 'PlayerPawn_Athena_C_Rimlight_Setup::Temp_int_Array_Index_Variable_1' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_C_Rimlight_Setup, CallFunc_IsLocallyControlled_ReturnValue) == 0x000020, "Member 'PlayerPawn_Athena_C_Rimlight_Setup::CallFunc_IsLocallyControlled_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_C_Rimlight_Setup, CallFunc_GetConsoleVariableFloatValue_ReturnValue) == 0x000024, "Member 'PlayerPawn_Athena_C_Rimlight_Setup::CallFunc_GetConsoleVariableFloatValue_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_C_Rimlight_Setup, CallFunc_GetConsoleVariableBoolValue_ReturnValue) == 0x000028, "Member 'PlayerPawn_Athena_C_Rimlight_Setup::CallFunc_GetConsoleVariableBoolValue_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_C_Rimlight_Setup, CallFunc_Array_Get_Item) == 0x000030, "Member 'PlayerPawn_Athena_C_Rimlight_Setup::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_C_Rimlight_Setup, CallFunc_Array_Length_ReturnValue) == 0x000038, "Member 'PlayerPawn_Athena_C_Rimlight_Setup::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_C_Rimlight_Setup, CallFunc_GetConsoleVariableBoolValue_ReturnValue_1) == 0x00003C, "Member 'PlayerPawn_Athena_C_Rimlight_Setup::CallFunc_GetConsoleVariableBoolValue_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_C_Rimlight_Setup, CallFunc_GetConsoleVariableBoolValue_ReturnValue_2) == 0x00003D, "Member 'PlayerPawn_Athena_C_Rimlight_Setup::CallFunc_GetConsoleVariableBoolValue_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_C_Rimlight_Setup, CallFunc_IsLocallyControlled_ReturnValue_1) == 0x00003E, "Member 'PlayerPawn_Athena_C_Rimlight_Setup::CallFunc_IsLocallyControlled_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_C_Rimlight_Setup, CallFunc_Array_Get_Item_1) == 0x000040, "Member 'PlayerPawn_Athena_C_Rimlight_Setup::CallFunc_Array_Get_Item_1' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_C_Rimlight_Setup, CallFunc_Array_Length_ReturnValue_1) == 0x000048, "Member 'PlayerPawn_Athena_C_Rimlight_Setup::CallFunc_Array_Length_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_C_Rimlight_Setup, Temp_int_Loop_Counter_Variable_1) == 0x00004C, "Member 'PlayerPawn_Athena_C_Rimlight_Setup::Temp_int_Loop_Counter_Variable_1' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_C_Rimlight_Setup, CallFunc_Less_IntInt_ReturnValue) == 0x000050, "Member 'PlayerPawn_Athena_C_Rimlight_Setup::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_C_Rimlight_Setup, CallFunc_Less_IntInt_ReturnValue_1) == 0x000051, "Member 'PlayerPawn_Athena_C_Rimlight_Setup::CallFunc_Less_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_C_Rimlight_Setup, CallFunc_Add_IntInt_ReturnValue_1) == 0x000054, "Member 'PlayerPawn_Athena_C_Rimlight_Setup::CallFunc_Add_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_C_Rimlight_Setup, CallFunc_IsValid_ReturnValue) == 0x000058, "Member 'PlayerPawn_Athena_C_Rimlight_Setup::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_C_Rimlight_Setup, CallFunc_IsValid_ReturnValue_1) == 0x000059, "Member 'PlayerPawn_Athena_C_Rimlight_Setup::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_C_Rimlight_Setup, CallFunc_K2_GetComponentToWorld_ReturnValue) == 0x000060, "Member 'PlayerPawn_Athena_C_Rimlight_Setup::CallFunc_K2_GetComponentToWorld_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_C_Rimlight_Setup, CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue) == 0x0000C0, "Member 'PlayerPawn_Athena_C_Rimlight_Setup::CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_C_Rimlight_Setup, CallFunc_FinishSpawningActor_ReturnValue) == 0x0000C8, "Member 'PlayerPawn_Athena_C_Rimlight_Setup::CallFunc_FinishSpawningActor_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_C_Rimlight_Setup, CallFunc_SetScalarParameterValue_Value_ImplicitCast) == 0x0000D0, "Member 'PlayerPawn_Athena_C_Rimlight_Setup::CallFunc_SetScalarParameterValue_Value_ImplicitCast' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_C_Rimlight_Setup, K2Node_VariableSet_RimlightCVARBoost_ImplicitCast) == 0x0000D8, "Member 'PlayerPawn_Athena_C_Rimlight_Setup::K2Node_VariableSet_RimlightCVARBoost_ImplicitCast' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_C_Rimlight_Setup, CallFunc_SetScalarParameterValue_Value_ImplicitCast_1) == 0x0000E0, "Member 'PlayerPawn_Athena_C_Rimlight_Setup::CallFunc_SetScalarParameterValue_Value_ImplicitCast_1' has a wrong offset!");

struct PlayerPawn_Athena_C_SetPartyInProgress final
{
public:
	bool                                          bIsPartyInProgress;
};
static_assert(alignof(PlayerPawn_Athena_C_SetPartyInProgress) == 0x000001, "Wrong alignment on PlayerPawn_Athena_C_SetPartyInProgress");
static_assert(sizeof(PlayerPawn_Athena_C_SetPartyInProgress) == 0x000001, "Wrong size on PlayerPawn_Athena_C_SetPartyInProgress");
static_assert(offsetof(PlayerPawn_Athena_C_SetPartyInProgress, bIsPartyInProgress) == 0x000000, "Member 'PlayerPawn_Athena_C_SetPartyInProgress::bIsPartyInProgress' has a wrong offset!");

struct PlayerPawn_Athena_C_SetPetHidden final
{
public:
	bool                                          NewHidden;
	bool                                          CallFunc_IsValid_ReturnValue;
};
static_assert(alignof(PlayerPawn_Athena_C_SetPetHidden) == 0x000001, "Wrong alignment on PlayerPawn_Athena_C_SetPetHidden");
static_assert(sizeof(PlayerPawn_Athena_C_SetPetHidden) == 0x000002, "Wrong size on PlayerPawn_Athena_C_SetPetHidden");
static_assert(offsetof(PlayerPawn_Athena_C_SetPetHidden, NewHidden) == 0x000000, "Member 'PlayerPawn_Athena_C_SetPetHidden::NewHidden' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_C_SetPetHidden, CallFunc_IsValid_ReturnValue) == 0x000001, "Member 'PlayerPawn_Athena_C_SetPetHidden::CallFunc_IsValid_ReturnValue' has a wrong offset!");

struct PlayerPawn_Athena_C_SetSafeZonePhaseAndGameplayCueTag final
{
public:
	int32                                         InSafeZonePhase;
	bool                                          bSpawnGameplayCue;
};
static_assert(alignof(PlayerPawn_Athena_C_SetSafeZonePhaseAndGameplayCueTag) == 0x000004, "Wrong alignment on PlayerPawn_Athena_C_SetSafeZonePhaseAndGameplayCueTag");
static_assert(sizeof(PlayerPawn_Athena_C_SetSafeZonePhaseAndGameplayCueTag) == 0x000008, "Wrong size on PlayerPawn_Athena_C_SetSafeZonePhaseAndGameplayCueTag");
static_assert(offsetof(PlayerPawn_Athena_C_SetSafeZonePhaseAndGameplayCueTag, InSafeZonePhase) == 0x000000, "Member 'PlayerPawn_Athena_C_SetSafeZonePhaseAndGameplayCueTag::InSafeZonePhase' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_C_SetSafeZonePhaseAndGameplayCueTag, bSpawnGameplayCue) == 0x000004, "Member 'PlayerPawn_Athena_C_SetSafeZonePhaseAndGameplayCueTag::bSpawnGameplayCue' has a wrong offset!");

struct PlayerPawn_Athena_C_SetSafeZoneTagWhenChanged final
{
public:
	int32                                         NewWhichSafeZoneTag;
	struct FGameplayTag                           GameplayTag;
	bool                                          bSpawnGameplayCue;
};
static_assert(alignof(PlayerPawn_Athena_C_SetSafeZoneTagWhenChanged) == 0x000004, "Wrong alignment on PlayerPawn_Athena_C_SetSafeZoneTagWhenChanged");
static_assert(sizeof(PlayerPawn_Athena_C_SetSafeZoneTagWhenChanged) == 0x00000C, "Wrong size on PlayerPawn_Athena_C_SetSafeZoneTagWhenChanged");
static_assert(offsetof(PlayerPawn_Athena_C_SetSafeZoneTagWhenChanged, NewWhichSafeZoneTag) == 0x000000, "Member 'PlayerPawn_Athena_C_SetSafeZoneTagWhenChanged::NewWhichSafeZoneTag' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_C_SetSafeZoneTagWhenChanged, GameplayTag) == 0x000004, "Member 'PlayerPawn_Athena_C_SetSafeZoneTagWhenChanged::GameplayTag' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_C_SetSafeZoneTagWhenChanged, bSpawnGameplayCue) == 0x000008, "Member 'PlayerPawn_Athena_C_SetSafeZoneTagWhenChanged::bSpawnGameplayCue' has a wrong offset!");

struct PlayerPawn_Athena_C_SetupDissolveFx final
{
public:
	bool                                          Temp_bool_Variable;
	uint8                                         Pad_1[0x7];
	class UMaterialInterface*                     Temp_object_Variable;
	bool                                          CallFunc_PawnIsNPC_ReturnValue;
	uint8                                         Pad_11[0x7];
	class UMaterialInterface*                     K2Node_Select_Default;
	bool                                          CallFunc_SetupDissolveFx_ReturnValue;
};
static_assert(alignof(PlayerPawn_Athena_C_SetupDissolveFx) == 0x000008, "Wrong alignment on PlayerPawn_Athena_C_SetupDissolveFx");
static_assert(sizeof(PlayerPawn_Athena_C_SetupDissolveFx) == 0x000028, "Wrong size on PlayerPawn_Athena_C_SetupDissolveFx");
static_assert(offsetof(PlayerPawn_Athena_C_SetupDissolveFx, Temp_bool_Variable) == 0x000000, "Member 'PlayerPawn_Athena_C_SetupDissolveFx::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_C_SetupDissolveFx, Temp_object_Variable) == 0x000008, "Member 'PlayerPawn_Athena_C_SetupDissolveFx::Temp_object_Variable' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_C_SetupDissolveFx, CallFunc_PawnIsNPC_ReturnValue) == 0x000010, "Member 'PlayerPawn_Athena_C_SetupDissolveFx::CallFunc_PawnIsNPC_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_C_SetupDissolveFx, K2Node_Select_Default) == 0x000018, "Member 'PlayerPawn_Athena_C_SetupDissolveFx::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_C_SetupDissolveFx, CallFunc_SetupDissolveFx_ReturnValue) == 0x000020, "Member 'PlayerPawn_Athena_C_SetupDissolveFx::CallFunc_SetupDissolveFx_ReturnValue' has a wrong offset!");

struct PlayerPawn_Athena_C_SpawnTeleportationLight final
{
public:
	bool                                          CallFunc_PawnIsNPC_ReturnValue;
	uint8                                         Pad_1[0xF];
	struct FTransform                             CallFunc_MakeTransform_ReturnValue;
	bool                                          CallFunc_IsValid_ReturnValue;
	uint8                                         Pad_71[0x7];
	class UPointLightComponent*                   CallFunc_AddComponent_ReturnValue;
	bool                                          CallFunc_IsMobilePlatform_ReturnValue;
};
static_assert(alignof(PlayerPawn_Athena_C_SpawnTeleportationLight) == 0x000010, "Wrong alignment on PlayerPawn_Athena_C_SpawnTeleportationLight");
static_assert(sizeof(PlayerPawn_Athena_C_SpawnTeleportationLight) == 0x000090, "Wrong size on PlayerPawn_Athena_C_SpawnTeleportationLight");
static_assert(offsetof(PlayerPawn_Athena_C_SpawnTeleportationLight, CallFunc_PawnIsNPC_ReturnValue) == 0x000000, "Member 'PlayerPawn_Athena_C_SpawnTeleportationLight::CallFunc_PawnIsNPC_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_C_SpawnTeleportationLight, CallFunc_MakeTransform_ReturnValue) == 0x000010, "Member 'PlayerPawn_Athena_C_SpawnTeleportationLight::CallFunc_MakeTransform_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_C_SpawnTeleportationLight, CallFunc_IsValid_ReturnValue) == 0x000070, "Member 'PlayerPawn_Athena_C_SpawnTeleportationLight::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_C_SpawnTeleportationLight, CallFunc_AddComponent_ReturnValue) == 0x000078, "Member 'PlayerPawn_Athena_C_SpawnTeleportationLight::CallFunc_AddComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_C_SpawnTeleportationLight, CallFunc_IsMobilePlatform_ReturnValue) == 0x000080, "Member 'PlayerPawn_Athena_C_SpawnTeleportationLight::CallFunc_IsMobilePlatform_ReturnValue' has a wrong offset!");

struct PlayerPawn_Athena_C_StopLoopingAudio final
{
public:
	bool                                          CallFunc_IsValid_ReturnValue;
	bool                                          CallFunc_IsValid_ReturnValue_1;
};
static_assert(alignof(PlayerPawn_Athena_C_StopLoopingAudio) == 0x000001, "Wrong alignment on PlayerPawn_Athena_C_StopLoopingAudio");
static_assert(sizeof(PlayerPawn_Athena_C_StopLoopingAudio) == 0x000002, "Wrong size on PlayerPawn_Athena_C_StopLoopingAudio");
static_assert(offsetof(PlayerPawn_Athena_C_StopLoopingAudio, CallFunc_IsValid_ReturnValue) == 0x000000, "Member 'PlayerPawn_Athena_C_StopLoopingAudio::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_C_StopLoopingAudio, CallFunc_IsValid_ReturnValue_1) == 0x000001, "Member 'PlayerPawn_Athena_C_StopLoopingAudio::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");

struct PlayerPawn_Athena_C_Swing_GetStartPoint final
{
public:
	struct FVector                                ReturnValue;
	struct FVector                                CallFunc_GetSocketLocation_ReturnValue;
	bool                                          CallFunc_IsValid_ReturnValue;
	uint8                                         Pad_31[0x7];
	struct FVector                                CallFunc_GetComponentBounds_Origin;
	struct FVector                                CallFunc_GetComponentBounds_BoxExtent;
	float                                         CallFunc_GetComponentBounds_SphereRadius;
	uint8                                         Pad_6C[0x4];
	struct FVector                                CallFunc_SelectVector_ReturnValue;
};
static_assert(alignof(PlayerPawn_Athena_C_Swing_GetStartPoint) == 0x000008, "Wrong alignment on PlayerPawn_Athena_C_Swing_GetStartPoint");
static_assert(sizeof(PlayerPawn_Athena_C_Swing_GetStartPoint) == 0x000088, "Wrong size on PlayerPawn_Athena_C_Swing_GetStartPoint");
static_assert(offsetof(PlayerPawn_Athena_C_Swing_GetStartPoint, ReturnValue) == 0x000000, "Member 'PlayerPawn_Athena_C_Swing_GetStartPoint::ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_C_Swing_GetStartPoint, CallFunc_GetSocketLocation_ReturnValue) == 0x000018, "Member 'PlayerPawn_Athena_C_Swing_GetStartPoint::CallFunc_GetSocketLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_C_Swing_GetStartPoint, CallFunc_IsValid_ReturnValue) == 0x000030, "Member 'PlayerPawn_Athena_C_Swing_GetStartPoint::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_C_Swing_GetStartPoint, CallFunc_GetComponentBounds_Origin) == 0x000038, "Member 'PlayerPawn_Athena_C_Swing_GetStartPoint::CallFunc_GetComponentBounds_Origin' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_C_Swing_GetStartPoint, CallFunc_GetComponentBounds_BoxExtent) == 0x000050, "Member 'PlayerPawn_Athena_C_Swing_GetStartPoint::CallFunc_GetComponentBounds_BoxExtent' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_C_Swing_GetStartPoint, CallFunc_GetComponentBounds_SphereRadius) == 0x000068, "Member 'PlayerPawn_Athena_C_Swing_GetStartPoint::CallFunc_GetComponentBounds_SphereRadius' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_C_Swing_GetStartPoint, CallFunc_SelectVector_ReturnValue) == 0x000070, "Member 'PlayerPawn_Athena_C_Swing_GetStartPoint::CallFunc_SelectVector_ReturnValue' has a wrong offset!");

struct PlayerPawn_Athena_C_SwingAttached final
{
public:
	struct FVector                                AttachLocation;
	class AActor*                                 AttachedActor;
	class AController*                            CallFunc_GetController_ReturnValue;
	class UFortControllerComponent_Swinging*      CallFunc_GetComponentByClass_ReturnValue;
	bool                                          CallFunc_IsValid_ReturnValue;
};
static_assert(alignof(PlayerPawn_Athena_C_SwingAttached) == 0x000008, "Wrong alignment on PlayerPawn_Athena_C_SwingAttached");
static_assert(sizeof(PlayerPawn_Athena_C_SwingAttached) == 0x000038, "Wrong size on PlayerPawn_Athena_C_SwingAttached");
static_assert(offsetof(PlayerPawn_Athena_C_SwingAttached, AttachLocation) == 0x000000, "Member 'PlayerPawn_Athena_C_SwingAttached::AttachLocation' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_C_SwingAttached, AttachedActor) == 0x000018, "Member 'PlayerPawn_Athena_C_SwingAttached::AttachedActor' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_C_SwingAttached, CallFunc_GetController_ReturnValue) == 0x000020, "Member 'PlayerPawn_Athena_C_SwingAttached::CallFunc_GetController_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_C_SwingAttached, CallFunc_GetComponentByClass_ReturnValue) == 0x000028, "Member 'PlayerPawn_Athena_C_SwingAttached::CallFunc_GetComponentByClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_C_SwingAttached, CallFunc_IsValid_ReturnValue) == 0x000030, "Member 'PlayerPawn_Athena_C_SwingAttached::CallFunc_IsValid_ReturnValue' has a wrong offset!");

struct PlayerPawn_Athena_C_SwingDetached final
{
public:
	class AController*                            CallFunc_GetController_ReturnValue;
	class UFortControllerComponent_Swinging*      CallFunc_GetComponentByClass_ReturnValue;
	bool                                          CallFunc_IsValid_ReturnValue;
};
static_assert(alignof(PlayerPawn_Athena_C_SwingDetached) == 0x000008, "Wrong alignment on PlayerPawn_Athena_C_SwingDetached");
static_assert(sizeof(PlayerPawn_Athena_C_SwingDetached) == 0x000018, "Wrong size on PlayerPawn_Athena_C_SwingDetached");
static_assert(offsetof(PlayerPawn_Athena_C_SwingDetached, CallFunc_GetController_ReturnValue) == 0x000000, "Member 'PlayerPawn_Athena_C_SwingDetached::CallFunc_GetController_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_C_SwingDetached, CallFunc_GetComponentByClass_ReturnValue) == 0x000008, "Member 'PlayerPawn_Athena_C_SwingDetached::CallFunc_GetComponentByClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_C_SwingDetached, CallFunc_IsValid_ReturnValue) == 0x000010, "Member 'PlayerPawn_Athena_C_SwingDetached::CallFunc_IsValid_ReturnValue' has a wrong offset!");

struct PlayerPawn_Athena_C_Swinging_AttachLocation final
{
public:
	struct FVector                                Location;
	bool                                          AttachPointExists;
	uint8                                         Pad_19[0x7];
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue;
	bool                                          CallFunc_IsValid_ReturnValue;
	uint8                                         Pad_39[0x7];
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue_1;
};
static_assert(alignof(PlayerPawn_Athena_C_Swinging_AttachLocation) == 0x000008, "Wrong alignment on PlayerPawn_Athena_C_Swinging_AttachLocation");
static_assert(sizeof(PlayerPawn_Athena_C_Swinging_AttachLocation) == 0x000058, "Wrong size on PlayerPawn_Athena_C_Swinging_AttachLocation");
static_assert(offsetof(PlayerPawn_Athena_C_Swinging_AttachLocation, Location) == 0x000000, "Member 'PlayerPawn_Athena_C_Swinging_AttachLocation::Location' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_C_Swinging_AttachLocation, AttachPointExists) == 0x000018, "Member 'PlayerPawn_Athena_C_Swinging_AttachLocation::AttachPointExists' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_C_Swinging_AttachLocation, CallFunc_K2_GetActorLocation_ReturnValue) == 0x000020, "Member 'PlayerPawn_Athena_C_Swinging_AttachLocation::CallFunc_K2_GetActorLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_C_Swinging_AttachLocation, CallFunc_IsValid_ReturnValue) == 0x000038, "Member 'PlayerPawn_Athena_C_Swinging_AttachLocation::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_C_Swinging_AttachLocation, CallFunc_K2_GetActorLocation_ReturnValue_1) == 0x000040, "Member 'PlayerPawn_Athena_C_Swinging_AttachLocation::CallFunc_K2_GetActorLocation_ReturnValue_1' has a wrong offset!");

struct PlayerPawn_Athena_C_Swinging_CheckGrounded final
{
public:
	bool                                          Grounded_;
	uint8                                         Pad_1[0x7];
	struct FVector                                HitNormal;
	double                                        Distance;
	TArray<class AActor*>                         Temp_object_Variable;
	struct FVector                                CallFunc_K2_GetComponentLocation_ReturnValue;
	float                                         CallFunc_GetScaledCapsuleRadius_ReturnValue;
	float                                         CallFunc_GetScaledCapsuleHalfHeight_ReturnValue;
	double                                        CallFunc_Multiply_DoubleDouble_ReturnValue;
	struct FVector                                CallFunc_MakeVector_ReturnValue;
	struct FVector                                CallFunc_Add_VectorVector_ReturnValue;
	struct FHitResult                             CallFunc_SphereTraceSingleByProfile_OutHit;
	bool                                          CallFunc_SphereTraceSingleByProfile_ReturnValue;
	bool                                          CallFunc_BreakHitResult_bBlockingHit;
	bool                                          CallFunc_BreakHitResult_bInitialOverlap;
	uint8                                         Pad_173[0x1];
	float                                         CallFunc_BreakHitResult_Time;
	float                                         CallFunc_BreakHitResult_Distance;
	uint8                                         Pad_17C[0x4];
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
	uint8                                         Pad_20C[0x4];
	struct FVector                                CallFunc_BreakHitResult_TraceStart;
	struct FVector                                CallFunc_BreakHitResult_TraceEnd;
	struct FVector                                CallFunc_SelectVector_ReturnValue;
	double                                        K2Node_FunctionResult_Distance_ImplicitCast;
	double                                        CallFunc_Multiply_DoubleDouble_A_ImplicitCast;
};
static_assert(alignof(PlayerPawn_Athena_C_Swinging_CheckGrounded) == 0x000008, "Wrong alignment on PlayerPawn_Athena_C_Swinging_CheckGrounded");
static_assert(sizeof(PlayerPawn_Athena_C_Swinging_CheckGrounded) == 0x000268, "Wrong size on PlayerPawn_Athena_C_Swinging_CheckGrounded");
static_assert(offsetof(PlayerPawn_Athena_C_Swinging_CheckGrounded, Grounded_) == 0x000000, "Member 'PlayerPawn_Athena_C_Swinging_CheckGrounded::Grounded_' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_C_Swinging_CheckGrounded, HitNormal) == 0x000008, "Member 'PlayerPawn_Athena_C_Swinging_CheckGrounded::HitNormal' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_C_Swinging_CheckGrounded, Distance) == 0x000020, "Member 'PlayerPawn_Athena_C_Swinging_CheckGrounded::Distance' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_C_Swinging_CheckGrounded, Temp_object_Variable) == 0x000028, "Member 'PlayerPawn_Athena_C_Swinging_CheckGrounded::Temp_object_Variable' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_C_Swinging_CheckGrounded, CallFunc_K2_GetComponentLocation_ReturnValue) == 0x000038, "Member 'PlayerPawn_Athena_C_Swinging_CheckGrounded::CallFunc_K2_GetComponentLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_C_Swinging_CheckGrounded, CallFunc_GetScaledCapsuleRadius_ReturnValue) == 0x000050, "Member 'PlayerPawn_Athena_C_Swinging_CheckGrounded::CallFunc_GetScaledCapsuleRadius_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_C_Swinging_CheckGrounded, CallFunc_GetScaledCapsuleHalfHeight_ReturnValue) == 0x000054, "Member 'PlayerPawn_Athena_C_Swinging_CheckGrounded::CallFunc_GetScaledCapsuleHalfHeight_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_C_Swinging_CheckGrounded, CallFunc_Multiply_DoubleDouble_ReturnValue) == 0x000058, "Member 'PlayerPawn_Athena_C_Swinging_CheckGrounded::CallFunc_Multiply_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_C_Swinging_CheckGrounded, CallFunc_MakeVector_ReturnValue) == 0x000060, "Member 'PlayerPawn_Athena_C_Swinging_CheckGrounded::CallFunc_MakeVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_C_Swinging_CheckGrounded, CallFunc_Add_VectorVector_ReturnValue) == 0x000078, "Member 'PlayerPawn_Athena_C_Swinging_CheckGrounded::CallFunc_Add_VectorVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_C_Swinging_CheckGrounded, CallFunc_SphereTraceSingleByProfile_OutHit) == 0x000090, "Member 'PlayerPawn_Athena_C_Swinging_CheckGrounded::CallFunc_SphereTraceSingleByProfile_OutHit' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_C_Swinging_CheckGrounded, CallFunc_SphereTraceSingleByProfile_ReturnValue) == 0x000170, "Member 'PlayerPawn_Athena_C_Swinging_CheckGrounded::CallFunc_SphereTraceSingleByProfile_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_C_Swinging_CheckGrounded, CallFunc_BreakHitResult_bBlockingHit) == 0x000171, "Member 'PlayerPawn_Athena_C_Swinging_CheckGrounded::CallFunc_BreakHitResult_bBlockingHit' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_C_Swinging_CheckGrounded, CallFunc_BreakHitResult_bInitialOverlap) == 0x000172, "Member 'PlayerPawn_Athena_C_Swinging_CheckGrounded::CallFunc_BreakHitResult_bInitialOverlap' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_C_Swinging_CheckGrounded, CallFunc_BreakHitResult_Time) == 0x000174, "Member 'PlayerPawn_Athena_C_Swinging_CheckGrounded::CallFunc_BreakHitResult_Time' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_C_Swinging_CheckGrounded, CallFunc_BreakHitResult_Distance) == 0x000178, "Member 'PlayerPawn_Athena_C_Swinging_CheckGrounded::CallFunc_BreakHitResult_Distance' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_C_Swinging_CheckGrounded, CallFunc_BreakHitResult_Location) == 0x000180, "Member 'PlayerPawn_Athena_C_Swinging_CheckGrounded::CallFunc_BreakHitResult_Location' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_C_Swinging_CheckGrounded, CallFunc_BreakHitResult_ImpactPoint) == 0x000198, "Member 'PlayerPawn_Athena_C_Swinging_CheckGrounded::CallFunc_BreakHitResult_ImpactPoint' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_C_Swinging_CheckGrounded, CallFunc_BreakHitResult_Normal) == 0x0001B0, "Member 'PlayerPawn_Athena_C_Swinging_CheckGrounded::CallFunc_BreakHitResult_Normal' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_C_Swinging_CheckGrounded, CallFunc_BreakHitResult_ImpactNormal) == 0x0001C8, "Member 'PlayerPawn_Athena_C_Swinging_CheckGrounded::CallFunc_BreakHitResult_ImpactNormal' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_C_Swinging_CheckGrounded, CallFunc_BreakHitResult_PhysMat) == 0x0001E0, "Member 'PlayerPawn_Athena_C_Swinging_CheckGrounded::CallFunc_BreakHitResult_PhysMat' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_C_Swinging_CheckGrounded, CallFunc_BreakHitResult_HitActor) == 0x0001E8, "Member 'PlayerPawn_Athena_C_Swinging_CheckGrounded::CallFunc_BreakHitResult_HitActor' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_C_Swinging_CheckGrounded, CallFunc_BreakHitResult_HitComponent) == 0x0001F0, "Member 'PlayerPawn_Athena_C_Swinging_CheckGrounded::CallFunc_BreakHitResult_HitComponent' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_C_Swinging_CheckGrounded, CallFunc_BreakHitResult_HitBoneName) == 0x0001F8, "Member 'PlayerPawn_Athena_C_Swinging_CheckGrounded::CallFunc_BreakHitResult_HitBoneName' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_C_Swinging_CheckGrounded, CallFunc_BreakHitResult_BoneName) == 0x0001FC, "Member 'PlayerPawn_Athena_C_Swinging_CheckGrounded::CallFunc_BreakHitResult_BoneName' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_C_Swinging_CheckGrounded, CallFunc_BreakHitResult_HitItem) == 0x000200, "Member 'PlayerPawn_Athena_C_Swinging_CheckGrounded::CallFunc_BreakHitResult_HitItem' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_C_Swinging_CheckGrounded, CallFunc_BreakHitResult_ElementIndex) == 0x000204, "Member 'PlayerPawn_Athena_C_Swinging_CheckGrounded::CallFunc_BreakHitResult_ElementIndex' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_C_Swinging_CheckGrounded, CallFunc_BreakHitResult_FaceIndex) == 0x000208, "Member 'PlayerPawn_Athena_C_Swinging_CheckGrounded::CallFunc_BreakHitResult_FaceIndex' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_C_Swinging_CheckGrounded, CallFunc_BreakHitResult_TraceStart) == 0x000210, "Member 'PlayerPawn_Athena_C_Swinging_CheckGrounded::CallFunc_BreakHitResult_TraceStart' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_C_Swinging_CheckGrounded, CallFunc_BreakHitResult_TraceEnd) == 0x000228, "Member 'PlayerPawn_Athena_C_Swinging_CheckGrounded::CallFunc_BreakHitResult_TraceEnd' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_C_Swinging_CheckGrounded, CallFunc_SelectVector_ReturnValue) == 0x000240, "Member 'PlayerPawn_Athena_C_Swinging_CheckGrounded::CallFunc_SelectVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_C_Swinging_CheckGrounded, K2Node_FunctionResult_Distance_ImplicitCast) == 0x000258, "Member 'PlayerPawn_Athena_C_Swinging_CheckGrounded::K2Node_FunctionResult_Distance_ImplicitCast' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_C_Swinging_CheckGrounded, CallFunc_Multiply_DoubleDouble_A_ImplicitCast) == 0x000260, "Member 'PlayerPawn_Athena_C_Swinging_CheckGrounded::CallFunc_Multiply_DoubleDouble_A_ImplicitCast' has a wrong offset!");

struct PlayerPawn_Athena_C_Swinging_SetJumpHeight final
{
public:
	double                                        Jump_ZVelocity;
	class UFortMovementComp_Character*            K2Node_DynamicCast_AsFort_Movement_Comp_Character;
	bool                                          K2Node_DynamicCast_bSuccess;
};
static_assert(alignof(PlayerPawn_Athena_C_Swinging_SetJumpHeight) == 0x000008, "Wrong alignment on PlayerPawn_Athena_C_Swinging_SetJumpHeight");
static_assert(sizeof(PlayerPawn_Athena_C_Swinging_SetJumpHeight) == 0x000018, "Wrong size on PlayerPawn_Athena_C_Swinging_SetJumpHeight");
static_assert(offsetof(PlayerPawn_Athena_C_Swinging_SetJumpHeight, Jump_ZVelocity) == 0x000000, "Member 'PlayerPawn_Athena_C_Swinging_SetJumpHeight::Jump_ZVelocity' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_C_Swinging_SetJumpHeight, K2Node_DynamicCast_AsFort_Movement_Comp_Character) == 0x000008, "Member 'PlayerPawn_Athena_C_Swinging_SetJumpHeight::K2Node_DynamicCast_AsFort_Movement_Comp_Character' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_C_Swinging_SetJumpHeight, K2Node_DynamicCast_bSuccess) == 0x000010, "Member 'PlayerPawn_Athena_C_Swinging_SetJumpHeight::K2Node_DynamicCast_bSuccess' has a wrong offset!");

struct PlayerPawn_Athena_C_Swinging_StartReelingIn final
{
public:
	class UFortMovementComp_Character*            K2Node_DynamicCast_AsFort_Movement_Comp_Character;
	bool                                          K2Node_DynamicCast_bSuccess;
};
static_assert(alignof(PlayerPawn_Athena_C_Swinging_StartReelingIn) == 0x000008, "Wrong alignment on PlayerPawn_Athena_C_Swinging_StartReelingIn");
static_assert(sizeof(PlayerPawn_Athena_C_Swinging_StartReelingIn) == 0x000010, "Wrong size on PlayerPawn_Athena_C_Swinging_StartReelingIn");
static_assert(offsetof(PlayerPawn_Athena_C_Swinging_StartReelingIn, K2Node_DynamicCast_AsFort_Movement_Comp_Character) == 0x000000, "Member 'PlayerPawn_Athena_C_Swinging_StartReelingIn::K2Node_DynamicCast_AsFort_Movement_Comp_Character' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_C_Swinging_StartReelingIn, K2Node_DynamicCast_bSuccess) == 0x000008, "Member 'PlayerPawn_Athena_C_Swinging_StartReelingIn::K2Node_DynamicCast_bSuccess' has a wrong offset!");

struct PlayerPawn_Athena_C_Swinging_StopReelingIn final
{
public:
	class UFortMovementComp_Character*            K2Node_DynamicCast_AsFort_Movement_Comp_Character;
	bool                                          K2Node_DynamicCast_bSuccess;
};
static_assert(alignof(PlayerPawn_Athena_C_Swinging_StopReelingIn) == 0x000008, "Wrong alignment on PlayerPawn_Athena_C_Swinging_StopReelingIn");
static_assert(sizeof(PlayerPawn_Athena_C_Swinging_StopReelingIn) == 0x000010, "Wrong size on PlayerPawn_Athena_C_Swinging_StopReelingIn");
static_assert(offsetof(PlayerPawn_Athena_C_Swinging_StopReelingIn, K2Node_DynamicCast_AsFort_Movement_Comp_Character) == 0x000000, "Member 'PlayerPawn_Athena_C_Swinging_StopReelingIn::K2Node_DynamicCast_AsFort_Movement_Comp_Character' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_C_Swinging_StopReelingIn, K2Node_DynamicCast_bSuccess) == 0x000008, "Member 'PlayerPawn_Athena_C_Swinging_StopReelingIn::K2Node_DynamicCast_bSuccess' has a wrong offset!");

struct PlayerPawn_Athena_C_SwingingVectorToAttachPoint final
{
public:
	class FString                                 caller_ID;
	struct FVector                                ReturnValue;
	struct FVector                                CallFunc_GetComponentBounds_Origin;
	struct FVector                                CallFunc_GetComponentBounds_BoxExtent;
	float                                         CallFunc_GetComponentBounds_SphereRadius;
	uint8                                         Pad_5C[0x4];
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue;
	struct FVector                                CallFunc_Subtract_VectorVector_ReturnValue;
	bool                                          CallFunc_IsValid_ReturnValue;
};
static_assert(alignof(PlayerPawn_Athena_C_SwingingVectorToAttachPoint) == 0x000008, "Wrong alignment on PlayerPawn_Athena_C_SwingingVectorToAttachPoint");
static_assert(sizeof(PlayerPawn_Athena_C_SwingingVectorToAttachPoint) == 0x000098, "Wrong size on PlayerPawn_Athena_C_SwingingVectorToAttachPoint");
static_assert(offsetof(PlayerPawn_Athena_C_SwingingVectorToAttachPoint, caller_ID) == 0x000000, "Member 'PlayerPawn_Athena_C_SwingingVectorToAttachPoint::caller_ID' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_C_SwingingVectorToAttachPoint, ReturnValue) == 0x000010, "Member 'PlayerPawn_Athena_C_SwingingVectorToAttachPoint::ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_C_SwingingVectorToAttachPoint, CallFunc_GetComponentBounds_Origin) == 0x000028, "Member 'PlayerPawn_Athena_C_SwingingVectorToAttachPoint::CallFunc_GetComponentBounds_Origin' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_C_SwingingVectorToAttachPoint, CallFunc_GetComponentBounds_BoxExtent) == 0x000040, "Member 'PlayerPawn_Athena_C_SwingingVectorToAttachPoint::CallFunc_GetComponentBounds_BoxExtent' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_C_SwingingVectorToAttachPoint, CallFunc_GetComponentBounds_SphereRadius) == 0x000058, "Member 'PlayerPawn_Athena_C_SwingingVectorToAttachPoint::CallFunc_GetComponentBounds_SphereRadius' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_C_SwingingVectorToAttachPoint, CallFunc_K2_GetActorLocation_ReturnValue) == 0x000060, "Member 'PlayerPawn_Athena_C_SwingingVectorToAttachPoint::CallFunc_K2_GetActorLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_C_SwingingVectorToAttachPoint, CallFunc_Subtract_VectorVector_ReturnValue) == 0x000078, "Member 'PlayerPawn_Athena_C_SwingingVectorToAttachPoint::CallFunc_Subtract_VectorVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_C_SwingingVectorToAttachPoint, CallFunc_IsValid_ReturnValue) == 0x000090, "Member 'PlayerPawn_Athena_C_SwingingVectorToAttachPoint::CallFunc_IsValid_ReturnValue' has a wrong offset!");

struct PlayerPawn_Athena_C_TeleportInNSeconds final
{
public:
	double                                        SecondsTillTeleport;
	struct FVector                                DestLocation;
	struct FRotator                               DestRotation;
};
static_assert(alignof(PlayerPawn_Athena_C_TeleportInNSeconds) == 0x000008, "Wrong alignment on PlayerPawn_Athena_C_TeleportInNSeconds");
static_assert(sizeof(PlayerPawn_Athena_C_TeleportInNSeconds) == 0x000038, "Wrong size on PlayerPawn_Athena_C_TeleportInNSeconds");
static_assert(offsetof(PlayerPawn_Athena_C_TeleportInNSeconds, SecondsTillTeleport) == 0x000000, "Member 'PlayerPawn_Athena_C_TeleportInNSeconds::SecondsTillTeleport' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_C_TeleportInNSeconds, DestLocation) == 0x000008, "Member 'PlayerPawn_Athena_C_TeleportInNSeconds::DestLocation' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_C_TeleportInNSeconds, DestRotation) == 0x000020, "Member 'PlayerPawn_Athena_C_TeleportInNSeconds::DestRotation' has a wrong offset!");

struct PlayerPawn_Athena_C_UpdateDissolveFx final
{
public:
	double                                        Scalar_Transition;
	double                                        Scalar_ZHeight;
	double                                        Scalar_LightIntensity;
	float                                         CallFunc_UpdateDissolveFx_Transition_ImplicitCast;
	float                                         CallFunc_UpdateDissolveFx_Transition_ImplicitCast_1;
	float                                         CallFunc_UpdateDissolveFx_ZHeight_ImplicitCast;
	float                                         CallFunc_UpdateDissolveFx_ZHeight_ImplicitCast_1;
	float                                         CallFunc_UpdateDissolveFx_LightIntensity_ImplicitCast;
	float                                         CallFunc_UpdateDissolveFx_LightIntensity_ImplicitCast_1;
};
static_assert(alignof(PlayerPawn_Athena_C_UpdateDissolveFx) == 0x000008, "Wrong alignment on PlayerPawn_Athena_C_UpdateDissolveFx");
static_assert(sizeof(PlayerPawn_Athena_C_UpdateDissolveFx) == 0x000030, "Wrong size on PlayerPawn_Athena_C_UpdateDissolveFx");
static_assert(offsetof(PlayerPawn_Athena_C_UpdateDissolveFx, Scalar_Transition) == 0x000000, "Member 'PlayerPawn_Athena_C_UpdateDissolveFx::Scalar_Transition' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_C_UpdateDissolveFx, Scalar_ZHeight) == 0x000008, "Member 'PlayerPawn_Athena_C_UpdateDissolveFx::Scalar_ZHeight' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_C_UpdateDissolveFx, Scalar_LightIntensity) == 0x000010, "Member 'PlayerPawn_Athena_C_UpdateDissolveFx::Scalar_LightIntensity' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_C_UpdateDissolveFx, CallFunc_UpdateDissolveFx_Transition_ImplicitCast) == 0x000018, "Member 'PlayerPawn_Athena_C_UpdateDissolveFx::CallFunc_UpdateDissolveFx_Transition_ImplicitCast' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_C_UpdateDissolveFx, CallFunc_UpdateDissolveFx_Transition_ImplicitCast_1) == 0x00001C, "Member 'PlayerPawn_Athena_C_UpdateDissolveFx::CallFunc_UpdateDissolveFx_Transition_ImplicitCast_1' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_C_UpdateDissolveFx, CallFunc_UpdateDissolveFx_ZHeight_ImplicitCast) == 0x000020, "Member 'PlayerPawn_Athena_C_UpdateDissolveFx::CallFunc_UpdateDissolveFx_ZHeight_ImplicitCast' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_C_UpdateDissolveFx, CallFunc_UpdateDissolveFx_ZHeight_ImplicitCast_1) == 0x000024, "Member 'PlayerPawn_Athena_C_UpdateDissolveFx::CallFunc_UpdateDissolveFx_ZHeight_ImplicitCast_1' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_C_UpdateDissolveFx, CallFunc_UpdateDissolveFx_LightIntensity_ImplicitCast) == 0x000028, "Member 'PlayerPawn_Athena_C_UpdateDissolveFx::CallFunc_UpdateDissolveFx_LightIntensity_ImplicitCast' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_C_UpdateDissolveFx, CallFunc_UpdateDissolveFx_LightIntensity_ImplicitCast_1) == 0x00002C, "Member 'PlayerPawn_Athena_C_UpdateDissolveFx::CallFunc_UpdateDissolveFx_LightIntensity_ImplicitCast_1' has a wrong offset!");

struct PlayerPawn_Athena_C_UserConstructionScript final
{
public:
	struct FFortPlayerPawnStats                   CallFunc_GetDataTableRowFromName_OutRow;
	bool                                          CallFunc_GetDataTableRowFromName_ReturnValue;
	uint8                                         Pad_D9[0x7];
	double                                        K2Node_VariableSet_PlayerAttributes_Speed_Walk_ImplicitCast;
	double                                        K2Node_VariableSet_PlayerAttributes_Speed_Run_ImplicitCast;
	double                                        K2Node_VariableSet_PlayerAttributes_Speed_Sprint_ImplicitCast;
};
static_assert(alignof(PlayerPawn_Athena_C_UserConstructionScript) == 0x000008, "Wrong alignment on PlayerPawn_Athena_C_UserConstructionScript");
static_assert(sizeof(PlayerPawn_Athena_C_UserConstructionScript) == 0x0000F8, "Wrong size on PlayerPawn_Athena_C_UserConstructionScript");
static_assert(offsetof(PlayerPawn_Athena_C_UserConstructionScript, CallFunc_GetDataTableRowFromName_OutRow) == 0x000000, "Member 'PlayerPawn_Athena_C_UserConstructionScript::CallFunc_GetDataTableRowFromName_OutRow' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_C_UserConstructionScript, CallFunc_GetDataTableRowFromName_ReturnValue) == 0x0000D8, "Member 'PlayerPawn_Athena_C_UserConstructionScript::CallFunc_GetDataTableRowFromName_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_C_UserConstructionScript, K2Node_VariableSet_PlayerAttributes_Speed_Walk_ImplicitCast) == 0x0000E0, "Member 'PlayerPawn_Athena_C_UserConstructionScript::K2Node_VariableSet_PlayerAttributes_Speed_Walk_ImplicitCast' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_C_UserConstructionScript, K2Node_VariableSet_PlayerAttributes_Speed_Run_ImplicitCast) == 0x0000E8, "Member 'PlayerPawn_Athena_C_UserConstructionScript::K2Node_VariableSet_PlayerAttributes_Speed_Run_ImplicitCast' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_C_UserConstructionScript, K2Node_VariableSet_PlayerAttributes_Speed_Sprint_ImplicitCast) == 0x0000F0, "Member 'PlayerPawn_Athena_C_UserConstructionScript::K2Node_VariableSet_PlayerAttributes_Speed_Sprint_ImplicitCast' has a wrong offset!");

struct PlayerPawn_Athena_C_WhiteoutAndTeleport final
{
public:
	struct FVector                                DestLocation;
	struct FRotator                               DestRotation;
	bool                                          Instant;
	uint8                                         Pad_31[0x7];
	double                                        Gravity;
};
static_assert(alignof(PlayerPawn_Athena_C_WhiteoutAndTeleport) == 0x000008, "Wrong alignment on PlayerPawn_Athena_C_WhiteoutAndTeleport");
static_assert(sizeof(PlayerPawn_Athena_C_WhiteoutAndTeleport) == 0x000040, "Wrong size on PlayerPawn_Athena_C_WhiteoutAndTeleport");
static_assert(offsetof(PlayerPawn_Athena_C_WhiteoutAndTeleport, DestLocation) == 0x000000, "Member 'PlayerPawn_Athena_C_WhiteoutAndTeleport::DestLocation' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_C_WhiteoutAndTeleport, DestRotation) == 0x000018, "Member 'PlayerPawn_Athena_C_WhiteoutAndTeleport::DestRotation' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_C_WhiteoutAndTeleport, Instant) == 0x000030, "Member 'PlayerPawn_Athena_C_WhiteoutAndTeleport::Instant' has a wrong offset!");
static_assert(offsetof(PlayerPawn_Athena_C_WhiteoutAndTeleport, Gravity) == 0x000038, "Member 'PlayerPawn_Athena_C_WhiteoutAndTeleport::Gravity' has a wrong offset!");

}
