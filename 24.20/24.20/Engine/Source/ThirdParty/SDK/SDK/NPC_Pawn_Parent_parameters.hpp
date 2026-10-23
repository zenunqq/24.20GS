#pragma once

#include "Basic.hpp"

#include "Enum_NPC_AlertLevel_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "Struct_NPC_TargetSlots_structs.hpp"
#include "FortniteGame_structs.hpp"
#include "GameplayAbilities_structs.hpp"
#include "FortniteAI_structs.hpp"
#include "Engine_structs.hpp"
#include "GameplayTags_structs.hpp"
#include "Enum_NPC_TargetSlots_structs.hpp"

namespace SDK::Params
{

struct NPC_Pawn_Parent_C_CanUpdateSoundLib final
{
public:
	TArray<class USoundLibrary*>                  TargetArray;
	bool                                          ReturnValue;
	uint8                                         Pad_11[0x7];
	class USoundLibrary*                          CallFunc_Array_Get_Item;
	bool                                          CallFunc_Array_IsValidIndex_ReturnValue;
	bool                                          CallFunc_NotEqual_ObjectObject_ReturnValue;
	bool                                          CallFunc_BooleanAND_ReturnValue;
};
static_assert(alignof(NPC_Pawn_Parent_C_CanUpdateSoundLib) == 0x000008, "Wrong alignment on NPC_Pawn_Parent_C_CanUpdateSoundLib");
static_assert(sizeof(NPC_Pawn_Parent_C_CanUpdateSoundLib) == 0x000028, "Wrong size on NPC_Pawn_Parent_C_CanUpdateSoundLib");
static_assert(offsetof(NPC_Pawn_Parent_C_CanUpdateSoundLib, TargetArray) == 0x000000, "Member 'NPC_Pawn_Parent_C_CanUpdateSoundLib::TargetArray' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Parent_C_CanUpdateSoundLib, ReturnValue) == 0x000010, "Member 'NPC_Pawn_Parent_C_CanUpdateSoundLib::ReturnValue' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Parent_C_CanUpdateSoundLib, CallFunc_Array_Get_Item) == 0x000018, "Member 'NPC_Pawn_Parent_C_CanUpdateSoundLib::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Parent_C_CanUpdateSoundLib, CallFunc_Array_IsValidIndex_ReturnValue) == 0x000020, "Member 'NPC_Pawn_Parent_C_CanUpdateSoundLib::CallFunc_Array_IsValidIndex_ReturnValue' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Parent_C_CanUpdateSoundLib, CallFunc_NotEqual_ObjectObject_ReturnValue) == 0x000021, "Member 'NPC_Pawn_Parent_C_CanUpdateSoundLib::CallFunc_NotEqual_ObjectObject_ReturnValue' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Parent_C_CanUpdateSoundLib, CallFunc_BooleanAND_ReturnValue) == 0x000022, "Member 'NPC_Pawn_Parent_C_CanUpdateSoundLib::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");

struct NPC_Pawn_Parent_C_CheckSoundLibraryAdded final
{
public:
	TArray<class USoundLibrary*>                  Libraries;
	class USoundLibrarySubsystem*                 CallFunc_GetWorldSubsystem_ReturnValue;
	class USoundLibrary*                          CallFunc_Array_Get_Item;
	bool                                          CallFunc_Array_IsValidIndex_ReturnValue;
};
static_assert(alignof(NPC_Pawn_Parent_C_CheckSoundLibraryAdded) == 0x000008, "Wrong alignment on NPC_Pawn_Parent_C_CheckSoundLibraryAdded");
static_assert(sizeof(NPC_Pawn_Parent_C_CheckSoundLibraryAdded) == 0x000028, "Wrong size on NPC_Pawn_Parent_C_CheckSoundLibraryAdded");
static_assert(offsetof(NPC_Pawn_Parent_C_CheckSoundLibraryAdded, Libraries) == 0x000000, "Member 'NPC_Pawn_Parent_C_CheckSoundLibraryAdded::Libraries' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Parent_C_CheckSoundLibraryAdded, CallFunc_GetWorldSubsystem_ReturnValue) == 0x000010, "Member 'NPC_Pawn_Parent_C_CheckSoundLibraryAdded::CallFunc_GetWorldSubsystem_ReturnValue' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Parent_C_CheckSoundLibraryAdded, CallFunc_Array_Get_Item) == 0x000018, "Member 'NPC_Pawn_Parent_C_CheckSoundLibraryAdded::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Parent_C_CheckSoundLibraryAdded, CallFunc_Array_IsValidIndex_ReturnValue) == 0x000020, "Member 'NPC_Pawn_Parent_C_CheckSoundLibraryAdded::CallFunc_Array_IsValidIndex_ReturnValue' has a wrong offset!");

struct NPC_Pawn_Parent_C_CheckSoundLibraryRemoved final
{
public:
	TArray<class USoundLibrary*>                  Libraries;
	bool                                          CallFunc_Array_IsValidIndex_ReturnValue;
	uint8                                         Pad_11[0x7];
	class USoundLibrarySubsystem*                 CallFunc_GetWorldSubsystem_ReturnValue;
};
static_assert(alignof(NPC_Pawn_Parent_C_CheckSoundLibraryRemoved) == 0x000008, "Wrong alignment on NPC_Pawn_Parent_C_CheckSoundLibraryRemoved");
static_assert(sizeof(NPC_Pawn_Parent_C_CheckSoundLibraryRemoved) == 0x000020, "Wrong size on NPC_Pawn_Parent_C_CheckSoundLibraryRemoved");
static_assert(offsetof(NPC_Pawn_Parent_C_CheckSoundLibraryRemoved, Libraries) == 0x000000, "Member 'NPC_Pawn_Parent_C_CheckSoundLibraryRemoved::Libraries' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Parent_C_CheckSoundLibraryRemoved, CallFunc_Array_IsValidIndex_ReturnValue) == 0x000010, "Member 'NPC_Pawn_Parent_C_CheckSoundLibraryRemoved::CallFunc_Array_IsValidIndex_ReturnValue' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Parent_C_CheckSoundLibraryRemoved, CallFunc_GetWorldSubsystem_ReturnValue) == 0x000018, "Member 'NPC_Pawn_Parent_C_CheckSoundLibraryRemoved::CallFunc_GetWorldSubsystem_ReturnValue' has a wrong offset!");

struct NPC_Pawn_Parent_C_Debug_AlertLevel_ForceLevel final
{
public:
	Enum_NPC_AlertLevel                           NewNPC_AlertLevel;
};
static_assert(alignof(NPC_Pawn_Parent_C_Debug_AlertLevel_ForceLevel) == 0x000001, "Wrong alignment on NPC_Pawn_Parent_C_Debug_AlertLevel_ForceLevel");
static_assert(sizeof(NPC_Pawn_Parent_C_Debug_AlertLevel_ForceLevel) == 0x000001, "Wrong size on NPC_Pawn_Parent_C_Debug_AlertLevel_ForceLevel");
static_assert(offsetof(NPC_Pawn_Parent_C_Debug_AlertLevel_ForceLevel, NewNPC_AlertLevel) == 0x000000, "Member 'NPC_Pawn_Parent_C_Debug_AlertLevel_ForceLevel::NewNPC_AlertLevel' has a wrong offset!");

struct NPC_Pawn_Parent_C_ExecuteUbergraph_NPC_Pawn_Parent final
{
public:
	int32                                         EntryPoint;
	bool                                          CallFunc_HasAnyMatchingGameplayTags_ReturnValue;
	bool                                          CallFunc_Not_PreBool_ReturnValue;
	uint8                                         Pad_6[0x2];
	class AActor*                                 K2Node_CustomEvent_Vehicle;
	struct FVector                                K2Node_CustomEvent_Velocity;
	EFortRarity                                   CallFunc_NPC_SetBestLootRarityInInventory_NPC_BestLootRarityInInventory;
	uint8                                         Pad_29[0x3];
	float                                         K2Node_Event_Damage_3;
	struct FGameplayTagContainer                  K2Node_Event_DamageTags_3;
	struct FVector                                K2Node_Event_Momentum_3;
	struct FHitResult                             K2Node_Event_HitInfo_3;
	class AFortPawn*                              K2Node_Event_InstigatedBy_3;
	class AActor*                                 K2Node_Event_DamageCauser_3;
	struct FGameplayEffectContextHandle           K2Node_Event_EffectContext_3;
	class AController*                            K2Node_Event_NewController;
	bool                                          CallFunc_IsValid_ReturnValue;
	uint8                                         Pad_179[0x7];
	class UUserWidget*                            CallFunc_GetUserWidgetObject_ReturnValue;
	class UNPCStatusWidget_C*                     K2Node_DynamicCast_AsNPCStatus_Widget;
	bool                                          K2Node_DynamicCast_bSuccess;
	uint8                                         Pad_191[0x7];
	struct FGameplayTagContainer                  CallFunc_MakeLiteralGameplayTagContainer_ReturnValue;
	bool                                          CallFunc_NotEqual_GameplayTagContainer_ReturnValue;
	Enum_NPC_AlertLevel                           K2Node_CustomEvent_NPC_AlertLevel_1;
	Enum_NPC_AlertLevel                           K2Node_CustomEvent_NPC_AlertLevel;
	bool                                          CallFunc_NotEqual_ByteByte_ReturnValue;
	float                                         CallFunc_GetValueAtLevel_ReturnValue;
	float                                         CallFunc_GetValueAtLevel_ReturnValue_1;
	uint8                                         Pad_1C4[0x4];
	double                                        CallFunc_RandomFloatInRange_ReturnValue;
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;
	uint8                                         Pad_1D1[0x3];
	float                                         K2Node_Event_Damage_2;
	struct FGameplayTagContainer                  K2Node_Event_DamageTags_2;
	struct FVector                                K2Node_Event_Momentum_2;
	struct FHitResult                             K2Node_Event_HitInfo_2;
	class AController*                            K2Node_Event_InstigatedBy_2;
	class AActor*                                 K2Node_Event_DamageCauser_2;
	struct FGameplayEffectContextHandle           K2Node_Event_EffectContext_2;
	bool                                          CallFunc_NPC_TryToDropLootOnDeath_CanDropLoot;
	bool                                          CallFunc_NPC_GetScalableFloatHotfixValue_AsBool;
	uint8                                         Pad_31A[0x2];
	int32                                         CallFunc_NPC_GetScalableFloatHotfixValue_AsIntRounded;
	double                                        CallFunc_NPC_GetScalableFloatHotfixValue_AsFloat;
	Enum_NPC_AlertLevel                           K2Node_CustomEvent_NewNPC_AlertLevel;
	bool                                          CallFunc_Greater_DoubleDouble_ReturnValue;
	bool                                          CallFunc_HasAuthority_ReturnValue;
	uint8                                         Pad_32B[0x5];
	class AFortAIPawn*                            K2Node_CustomEvent_AI;
	class AFortPlayerController*                  K2Node_CustomEvent_InteractingPlayerController;
	EInteractionBeingAttempted                    K2Node_CustomEvent_InteractionBeingAttempted;
	uint8                                         Pad_341[0x7];
	class AActor*                                 K2Node_CustomEvent_AIPawn;
	class AFortPlayerPawn*                        K2Node_CustomEvent_InteractingPlayerPawn;
	class AFortPlayerPawn*                        CallFunc_GetPlayerPawn_ReturnValue;
	bool                                          K2Node_CustomEvent_bVisible;
	uint8                                         Pad_361[0x7];
	struct FVector                                K2Node_Event_WaterSurfaceLocation;
	float                                         K2Node_Event_WaterDepth;
	bool                                          K2Node_CustomEvent_Success_;
	uint8                                         Pad_385[0x3];
	class AActor*                                 K2Node_CustomEvent_Leader;
	EUnconvertReason                              K2Node_CustomEvent_UnconvertReason;
	bool                                          K2Node_SwitchEnum_CmpSuccess;
	bool                                          CallFunc_NPC_UpdateInteract_EnabledInteract;
	bool                                          CallFunc_NPC_UpdateInteract_EnabledInteract_1;
	float                                         K2Node_Event_Damage_1;
	struct FGameplayTagContainer                  K2Node_Event_DamageTags_1;
	struct FVector                                K2Node_Event_Momentum_1;
	struct FHitResult                             K2Node_Event_HitInfo_1;
	class AController*                            K2Node_Event_InstigatedBy_1;
	class AActor*                                 K2Node_Event_DamageCauser_1;
	struct FGameplayEffectContextHandle           K2Node_Event_EffectContext_1;
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue;
	struct FGameplayCueParameters                 CallFunc_MakeGameplayCueParameters_ReturnValue;
	bool                                          Temp_bool_Variable;
	uint8                                         Pad_5C1[0x3];
	struct FGameplayTag                           K2Node_Select_Default;
	bool                                          CallFunc_NPC_CheckIsInSafeZone_TestSucceeded;
	bool                                          CallFunc_NPC_CheckIsInSafeZone_isInSafeZone;
	bool                                          CallFunc_PlayVoiceLine_Success;
	bool                                          CallFunc_NPC_GetScalableFloatHotfixValue_AsBool_1;
	int32                                         CallFunc_NPC_GetScalableFloatHotfixValue_AsIntRounded_1;
	double                                        CallFunc_NPC_GetScalableFloatHotfixValue_AsFloat_1;
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;
	uint8                                         Pad_5E4[0x4];
	double                                        CallFunc_RandomFloatInRange_ReturnValue_1;
	bool                                          CallFunc_HasAuthority_ReturnValue_1;
	uint8                                         Pad_5F1[0x7];
	struct FTimerHandle                           CallFunc_K2_SetTimerDelegate_ReturnValue;
	bool                                          K2Node_CustomEvent_Reset_Timer;
	uint8                                         Pad_601[0x3];
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_1;
	struct FTimerHandle                           CallFunc_K2_SetTimerDelegate_ReturnValue_1;
	bool                                          CallFunc_NPC_GetScalableFloatHotfixValue_AsBool_2;
	uint8                                         Pad_619[0x3];
	int32                                         CallFunc_NPC_GetScalableFloatHotfixValue_AsIntRounded_2;
	double                                        CallFunc_NPC_GetScalableFloatHotfixValue_AsFloat_2;
	bool                                          CallFunc_K2_IsValidTimerHandle_ReturnValue;
	bool                                          CallFunc_HasAuthority_ReturnValue_2;
	bool                                          CallFunc_BooleanAND_ReturnValue;
	bool                                          CallFunc_Not_PreBool_ReturnValue_1;
	bool                                          CallFunc_HasAuthority_ReturnValue_3;
	bool                                          CallFunc_BooleanOR_ReturnValue;
	bool                                          CallFunc_HasAuthority_ReturnValue_4;
	uint8                                         Pad_62F[0x1];
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_2;
	uint8                                         Pad_63C[0x4];
	struct FTimerHandle                           CallFunc_K2_SetTimerDelegate_ReturnValue_2;
	bool                                          CallFunc_NPC_GetScalableFloatHotfixValue_AsBool_3;
	uint8                                         Pad_649[0x3];
	int32                                         CallFunc_NPC_GetScalableFloatHotfixValue_AsIntRounded_3;
	double                                        CallFunc_NPC_GetScalableFloatHotfixValue_AsFloat_3;
	bool                                          CallFunc_IsValid_ReturnValue_1;
	bool                                          CallFunc_BooleanAND_ReturnValue_1;
	bool                                          CallFunc_TryActivateAbilitiesByTag_ReturnValue;
	bool                                          Temp_bool_Has_Been_Initd_Variable;
	bool                                          Temp_bool_IsClosed_Variable;
	Enum_NPC_AlertLevel                           K2Node_CustomEvent_NPCAlertLevel;
	Enum_NPC_AlertLevel                           CallFunc_NPC_GetAlertLevelInfo_AlertLevel;
	uint8                                         Pad_65F[0x1];
	struct FGameplayTag                           CallFunc_NPC_GetAlertLevelInfo_AlertLevelTag;
	bool                                          CallFunc_NPC_GetAlertLevelInfo_ValidDataFound;
	bool                                          K2Node_SwitchEnum_CmpSuccess_1;
	uint8                                         Pad_666[0x2];
	struct FGameplayEventData                     K2Node_MakeStruct_GameplayEventData;
	struct FGameplayEventData                     K2Node_MakeStruct_GameplayEventData_1;
	class UFortGameplayDataTrackerComponentManager* CallFunc_GetCurrent_ReturnValue;
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_3;
	bool                                          CallFunc_IsValid_ReturnValue_2;
	uint8                                         Pad_7DD[0x3];
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_4;
	uint8                                         Pad_7EC[0x4];
	class AFortWaterBodyActor*                    K2Node_Event_WaterBody_1;
	bool                                          K2Node_Event_bIsFirstBody;
	uint8                                         Pad_7F9[0x7];
	class AFortWaterBodyActor*                    K2Node_Event_WaterBody;
	bool                                          K2Node_Event_bIsLastBody;
	bool                                          CallFunc_IsDedicatedServer_ReturnValue;
	uint8                                         Pad_80A[0x6];
	class UBlackboardComponent*                   CallFunc_GetBlackboard_ReturnValue;
	class UFortGameplayDataTrackerComponentManager* CallFunc_GetCurrent_ReturnValue_1;
	Enum_NPC_AlertLevel                           K2Node_CustomEvent_AlertLevel;
	bool                                          K2Node_SwitchEnum_CmpSuccess_2;
	bool                                          CallFunc_IsValid_ReturnValue_3;
	uint8                                         Pad_823[0x5];
	class UObject*                                CallFunc_GetValueAsObject_ReturnValue;
	class AFortProjectileBase*                    K2Node_DynamicCast_AsFort_Projectile_Base;
	bool                                          K2Node_DynamicCast_bSuccess_1;
	uint8                                         Pad_839[0x7];
	struct FGameplayCueParameters                 CallFunc_MakeGameplayCueParameters_ReturnValue_1;
	class AFortPickup*                            K2Node_DynamicCast_AsFort_Pickup;
	bool                                          K2Node_DynamicCast_bSuccess_2;
	bool                                          CallFunc_IsValid_ReturnValue_4;
	bool                                          CallFunc_IsGameplayTagValid_ReturnValue;
	bool                                          CallFunc_IsDedicatedServer_ReturnValue_1;
	bool                                          CallFunc_NotEqual_ObjectObject_ReturnValue;
	EEndPlayReason                                K2Node_Event_EndPlayReason;
	bool                                          CallFunc_IsValidClass_ReturnValue;
	uint8                                         Pad_91F[0x1];
	struct FActiveGameplayEffectHandle            CallFunc_BP_ApplyGameplayEffectToSelf_ReturnValue;
	bool                                          CallFunc_IsValidClass_ReturnValue_1;
	bool                                          CallFunc_RemoveActiveGameplayEffect_ReturnValue;
	uint8                                         Pad_92A[0x6];
	class AFortWaterBodyActor*                    K2Node_CustomEvent_Water_Body_1;
	class AFortWaterBodyActor*                    K2Node_CustomEvent_Water_Body;
	bool                                          CallFunc_IsValid_ReturnValue_5;
	uint8                                         Pad_941[0x7];
	struct FGameplayTagContainer                  CallFunc_MakeLiteralGameplayTagContainer_ReturnValue_1;
	bool                                          CallFunc_K2_IsValidTimerHandle_ReturnValue_1;
	bool                                          CallFunc_K2_IsValidTimerHandle_ReturnValue_2;
	bool                                          CallFunc_IsValid_ReturnValue_6;
	bool                                          CallFunc_NPC_GetScalableFloatHotfixValue_AsBool_4;
	int32                                         CallFunc_NPC_GetScalableFloatHotfixValue_AsIntRounded_4;
	double                                        CallFunc_NPC_GetScalableFloatHotfixValue_AsFloat_4;
	bool                                          CallFunc_IsValid_ReturnValue_7;
	bool                                          CallFunc_NPC_GetScalableFloatHotfixValue_AsBool_5;
	uint8                                         Pad_97A[0x2];
	int32                                         CallFunc_NPC_GetScalableFloatHotfixValue_AsIntRounded_5;
	double                                        CallFunc_NPC_GetScalableFloatHotfixValue_AsFloat_5;
	class UUserWidget*                            CallFunc_GetUserWidgetObject_ReturnValue_1;
	class UNPCStatusWidget_C*                     K2Node_DynamicCast_AsNPCStatus_Widget_1;
	bool                                          K2Node_DynamicCast_bSuccess_3;
	bool                                          CallFunc_NPC_GetScalableFloatHotfixValue_AsBool_6;
	uint8                                         Pad_99A[0x2];
	int32                                         CallFunc_NPC_GetScalableFloatHotfixValue_AsIntRounded_6;
	double                                        CallFunc_NPC_GetScalableFloatHotfixValue_AsFloat_6;
	bool                                          CallFunc_NPC_GetScalableFloatHotfixValue_AsBool_7;
	uint8                                         Pad_9A9[0x3];
	int32                                         CallFunc_NPC_GetScalableFloatHotfixValue_AsIntRounded_7;
	double                                        CallFunc_NPC_GetScalableFloatHotfixValue_AsFloat_7;
	bool                                          CallFunc_NPC_GetScalableFloatHotfixValue_AsBool_8;
	uint8                                         Pad_9B9[0x3];
	int32                                         CallFunc_NPC_GetScalableFloatHotfixValue_AsIntRounded_8;
	double                                        CallFunc_NPC_GetScalableFloatHotfixValue_AsFloat_8;
	bool                                          CallFunc_IsGameplayTagValid_ReturnValue_1;
	bool                                          CallFunc_BooleanAND_ReturnValue_2;
	uint8                                         Pad_9CA[0x2];
	struct FActiveGameplayEffectHandle            CallFunc_BP_ApplyGameplayEffectToSelf_ReturnValue_1;
	struct FActiveGameplayEffectHandle            CallFunc_BP_ApplyGameplayEffectToSelf_ReturnValue_2;
	struct FActiveGameplayEffectHandle            CallFunc_BP_ApplyGameplayEffectToSelf_ReturnValue_3;
	int32                                         CallFunc_NPC_GetSafeZonePhase_SafeZonePhase;
	bool                                          CallFunc_IsValid_ReturnValue_8;
	bool                                          CallFunc_TryActivateAbilitiesByTag_ReturnValue_1;
	uint8                                         Pad_9EA[0x6];
	struct FGameplayTagContainer                  CallFunc_MakeLiteralGameplayTagContainer_ReturnValue_2;
	struct FGameplayTagContainer                  CallFunc_MakeLiteralGameplayTagContainer_ReturnValue_3;
	bool                                          CallFunc_IsValid_ReturnValue_9;
	bool                                          CallFunc_NotEqual_GameplayTagContainer_ReturnValue_1;
	bool                                          CallFunc_NPC_CanBeInteractedWith_CanInteract;
	bool                                          CallFunc_NPC_CanBeInteractedWith_CanInteract_1;
	bool                                          CallFunc_NPC_UpdateInteract_EnabledInteract_2;
	bool                                          CallFunc_NPC_UpdateInteract_EnabledInteract_3;
	bool                                          CallFunc_BooleanOR_ReturnValue_1;
	bool                                          CallFunc_BooleanOR_ReturnValue_2;
	bool                                          CallFunc_BooleanAND_ReturnValue_3;
	bool                                          CallFunc_IsValid_ReturnValue_10;
	uint8                                         Pad_A3A[0x6];
	class UUserWidget*                            CallFunc_GetUserWidgetObject_ReturnValue_2;
	class UNPCStatusWidget_C*                     K2Node_DynamicCast_AsNPCStatus_Widget_2;
	bool                                          K2Node_DynamicCast_bSuccess_4;
	uint8                                         Pad_A51[0x7];
	struct FGameplayCueParameters                 CallFunc_MakeGameplayCueParameters_ReturnValue_2;
	struct FGameplayTag                           CallFunc_MakeLiteralGameplayTag_ReturnValue;
	bool                                          CallFunc_NotEqual_GameplayTag_ReturnValue;
	bool                                          CallFunc_Not_PreBool_ReturnValue_2;
	bool                                          CallFunc_BooleanAND_ReturnValue_4;
	Enum_NPC_AlertLevel                           CallFunc_NPC_GetAlertLevelInfo_AlertLevel_1;
	struct FGameplayTag                           CallFunc_NPC_GetAlertLevelInfo_AlertLevelTag_1;
	bool                                          CallFunc_NPC_GetAlertLevelInfo_ValidDataFound_1;
	uint8                                         Pad_B35[0x3];
	class UFortGameplayDataTrackerComponentManager* CallFunc_GetCurrent_ReturnValue_2;
	bool                                          CallFunc_IsValid_ReturnValue_11;
	bool                                          CallFunc_IsValidClass_ReturnValue_2;
	uint8                                         Pad_B42[0x2];
	struct FActiveGameplayEffectHandle            CallFunc_BP_ApplyGameplayEffectToSelf_ReturnValue_4;
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_1;
	uint8                                         Pad_B4D[0x3];
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_5;
	int32                                         CallFunc_Conv_BoolToInt_ReturnValue;
	TScriptInterface<class IAudioParameterControllerInterface> CallFunc_SetIntParameter_self_CastInput;
	class UAudioComponent*                        CallFunc_SpawnSoundAttached_ReturnValue;
	bool                                          CallFunc_Not_PreBool_ReturnValue_3;
	bool                                          CallFunc_Not_PreBool_ReturnValue_4;
	bool                                          CallFunc_BooleanAND_ReturnValue_5;
	uint8                                         Pad_B7B[0x1];
	TDelegate<void(bool bVisible)>                K2Node_CreateDelegate_OutputDelegate_6;
	bool                                          CallFunc_BooleanAND_ReturnValue_6;
	uint8                                         Pad_B89[0x7];
	struct FTimerHandle                           CallFunc_K2_SetTimer_ReturnValue;
	bool                                          CallFunc_IsValid_ReturnValue_12;
	uint8                                         Pad_B99[0x3];
	float                                         K2Node_Event_Damage;
	struct FGameplayTagContainer                  K2Node_Event_DamageTags;
	struct FVector                                K2Node_Event_Momentum;
	struct FHitResult                             K2Node_Event_HitInfo;
	class AFortPawn*                              K2Node_Event_InstigatedBy;
	class AActor*                                 K2Node_Event_DamageCauser;
	struct FGameplayEffectContextHandle           K2Node_Event_EffectContext;
	class AFortProjectileBase*                    K2Node_DynamicCast_AsFort_Projectile_Base_1;
	bool                                          K2Node_DynamicCast_bSuccess_5;
	uint8                                         Pad_CE9[0x7];
	class AFortWeapon*                            K2Node_DynamicCast_AsFort_Weapon;
	bool                                          K2Node_DynamicCast_bSuccess_6;
	EFortDamageZone                               CallFunc_GetDamageZone_ReturnValue;
	bool                                          K2Node_SwitchEnum_CmpSuccess_3;
	bool                                          CallFunc_WeaponDataHasAnyMatchingGameplayTags_ReturnValue;
	bool                                          CallFunc_IsValid_ReturnValue_13;
	bool                                          CallFunc_IsValid_ReturnValue_14;
	uint8                                         Pad_CFE[0x2];
	class UAudioComponent*                        CallFunc_SpawnSoundAttached_ReturnValue_1;
	struct FVector                                CallFunc_GetSocketLocation_ReturnValue;
	struct FRotator                               CallFunc_K2_GetComponentRotation_ReturnValue;
	class UParticleSystemComponent*               CallFunc_SpawnEmitterAtLocation_ReturnValue;
	bool                                          CallFunc_IsValid_ReturnValue_15;
	bool                                          CallFunc_IsValid_ReturnValue_16;
	bool                                          CallFunc_Greater_DoubleDouble_ReturnValue_1;
	uint8                                         Pad_D43[0x5];
	class UUserWidget*                            CallFunc_GetUserWidgetObject_ReturnValue_3;
	class UNPCStatusWidget_C*                     K2Node_DynamicCast_AsNPCStatus_Widget_3;
	bool                                          K2Node_DynamicCast_bSuccess_7;
	bool                                          CallFunc_IsVisible_ReturnValue;
	bool                                          CallFunc_IsValid_ReturnValue_17;
	bool                                          CallFunc_Array_IsValidIndex_ReturnValue;
	bool                                          CallFunc_Array_IsValidIndex_ReturnValue_1;
	bool                                          CallFunc_IsConverted_IsConverted;
	bool                                          CallFunc_IsRenderCustomDepthEnabled_ReturnValue;
	uint8                                         Pad_D5F[0x1];
	struct FTimerHandle                           CallFunc_K2_SetTimerDelegate_ReturnValue_3;
	bool                                          CallFunc_IsGameplayTagValid_ReturnValue_2;
	bool                                          CallFunc_IsValid_ReturnValue_18;
	bool                                          CallFunc_CanActivateAbilityWithMatchingTag_ReturnValue;
	bool                                          CallFunc_TryActivateAbilitiesByTag_ReturnValue_2;
	bool                                          K2Node_SwitchEnum_CmpSuccess_4;
	uint8                                         Pad_D6D[0x3];
	struct FVector                                CallFunc_VLerp_ReturnValue;
	bool                                          K2Node_SwitchEnum_CmpSuccess_5;
	bool                                          CallFunc_RemoveActiveGameplayEffect_ReturnValue_1;
	bool                                          CallFunc_IsValid_ReturnValue_19;
	bool                                          CallFunc_TryActivateAbilitiesByTag_ReturnValue_3;
	bool                                          CallFunc_NPC_GetScalableFloatHotfixValue_AsBool_9;
	uint8                                         Pad_D8D[0x3];
	int32                                         CallFunc_NPC_GetScalableFloatHotfixValue_AsIntRounded_9;
	uint8                                         Pad_D94[0x4];
	double                                        CallFunc_NPC_GetScalableFloatHotfixValue_AsFloat_9;
	bool                                          CallFunc_Not_PreBool_ReturnValue_5;
	bool                                          CallFunc_Greater_DoubleDouble_ReturnValue_2;
	bool                                          CallFunc_BooleanAND_ReturnValue_7;
	bool                                          CallFunc_NPC_GetScalableFloatHotfixValue_AsBool_10;
	int32                                         CallFunc_NPC_GetScalableFloatHotfixValue_AsIntRounded_10;
	double                                        CallFunc_NPC_GetScalableFloatHotfixValue_AsFloat_10;
	bool                                          CallFunc_IsValid_ReturnValue_20;
	uint8                                         Pad_DB1[0x7];
	double                                        CallFunc_GetGameTimeInSeconds_ReturnValue;
	double                                        CallFunc_Subtract_DoubleDouble_ReturnValue;
	TDelegate<void(class AFortAIPawn* AI, class AFortPlayerController* InteractingPlayerController, EInteractionBeingAttempted InteractionBeingAttempted)> K2Node_CreateDelegate_OutputDelegate_7;
	uint8                                         Pad_DD4[0x4];
	double                                        CallFunc_Subtract_DoubleDouble_ReturnValue_1;
	bool                                          CallFunc_Greater_DoubleDouble_ReturnValue_3;
	uint8                                         Pad_DE1[0x7];
	double                                        CallFunc_GetGameTimeInSeconds_ReturnValue_1;
	bool                                          CallFunc_Greater_DoubleDouble_ReturnValue_4;
	uint8                                         Pad_DF1[0x7];
	class USoundLibrarySubsystem*                 CallFunc_GetWorldSubsystem_ReturnValue;
	bool                                          CallFunc_IsValid_ReturnValue_21;
	bool                                          CallFunc_IsValid_ReturnValue_22;
	bool                                          CallFunc_WasRecentlyRendered_ReturnValue;
	bool                                          CallFunc_Not_PreBool_ReturnValue_6;
	bool                                          CallFunc_BooleanAND_ReturnValue_8;
	uint8                                         Pad_E05[0x3];
	float                                         CallFunc_Delay_Duration_ImplicitCast;
	uint8                                         Pad_E0C[0x4];
	double                                        CallFunc_RandomFloatInRange_Min_ImplicitCast;
	double                                        CallFunc_RandomFloatInRange_Max_ImplicitCast;
	float                                         CallFunc_K2_SetTimerDelegate_Time_ImplicitCast;
	float                                         CallFunc_Delay_Duration_ImplicitCast_1;
	float                                         CallFunc_MakeGameplayCueParameters_RawMagnitude_ImplicitCast;
	float                                         CallFunc_K2_SetTimerDelegate_Time_ImplicitCast_1;
	float                                         CallFunc_K2_SetTimerDelegate_Time_ImplicitCast_2;
	float                                         CallFunc_MakeGameplayCueParameters_RawMagnitude_ImplicitCast_1;
	float                                         CallFunc_K2_SetTimer_Time_ImplicitCast;
	float                                         CallFunc_K2_SetTimerDelegate_Time_ImplicitCast_3;
	float                                         CallFunc_Update_DeltaTime_ImplicitCast;
	float                                         CallFunc_Delay_Duration_ImplicitCast_2;
};
static_assert(alignof(NPC_Pawn_Parent_C_ExecuteUbergraph_NPC_Pawn_Parent) == 0x000008, "Wrong alignment on NPC_Pawn_Parent_C_ExecuteUbergraph_NPC_Pawn_Parent");
static_assert(sizeof(NPC_Pawn_Parent_C_ExecuteUbergraph_NPC_Pawn_Parent) == 0x000E48, "Wrong size on NPC_Pawn_Parent_C_ExecuteUbergraph_NPC_Pawn_Parent");
static_assert(offsetof(NPC_Pawn_Parent_C_ExecuteUbergraph_NPC_Pawn_Parent, EntryPoint) == 0x000000, "Member 'NPC_Pawn_Parent_C_ExecuteUbergraph_NPC_Pawn_Parent::EntryPoint' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Parent_C_ExecuteUbergraph_NPC_Pawn_Parent, CallFunc_HasAnyMatchingGameplayTags_ReturnValue) == 0x000004, "Member 'NPC_Pawn_Parent_C_ExecuteUbergraph_NPC_Pawn_Parent::CallFunc_HasAnyMatchingGameplayTags_ReturnValue' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Parent_C_ExecuteUbergraph_NPC_Pawn_Parent, CallFunc_Not_PreBool_ReturnValue) == 0x000005, "Member 'NPC_Pawn_Parent_C_ExecuteUbergraph_NPC_Pawn_Parent::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Parent_C_ExecuteUbergraph_NPC_Pawn_Parent, K2Node_CustomEvent_Vehicle) == 0x000008, "Member 'NPC_Pawn_Parent_C_ExecuteUbergraph_NPC_Pawn_Parent::K2Node_CustomEvent_Vehicle' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Parent_C_ExecuteUbergraph_NPC_Pawn_Parent, K2Node_CustomEvent_Velocity) == 0x000010, "Member 'NPC_Pawn_Parent_C_ExecuteUbergraph_NPC_Pawn_Parent::K2Node_CustomEvent_Velocity' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Parent_C_ExecuteUbergraph_NPC_Pawn_Parent, CallFunc_NPC_SetBestLootRarityInInventory_NPC_BestLootRarityInInventory) == 0x000028, "Member 'NPC_Pawn_Parent_C_ExecuteUbergraph_NPC_Pawn_Parent::CallFunc_NPC_SetBestLootRarityInInventory_NPC_BestLootRarityInInventory' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Parent_C_ExecuteUbergraph_NPC_Pawn_Parent, K2Node_Event_Damage_3) == 0x00002C, "Member 'NPC_Pawn_Parent_C_ExecuteUbergraph_NPC_Pawn_Parent::K2Node_Event_Damage_3' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Parent_C_ExecuteUbergraph_NPC_Pawn_Parent, K2Node_Event_DamageTags_3) == 0x000030, "Member 'NPC_Pawn_Parent_C_ExecuteUbergraph_NPC_Pawn_Parent::K2Node_Event_DamageTags_3' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Parent_C_ExecuteUbergraph_NPC_Pawn_Parent, K2Node_Event_Momentum_3) == 0x000050, "Member 'NPC_Pawn_Parent_C_ExecuteUbergraph_NPC_Pawn_Parent::K2Node_Event_Momentum_3' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Parent_C_ExecuteUbergraph_NPC_Pawn_Parent, K2Node_Event_HitInfo_3) == 0x000068, "Member 'NPC_Pawn_Parent_C_ExecuteUbergraph_NPC_Pawn_Parent::K2Node_Event_HitInfo_3' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Parent_C_ExecuteUbergraph_NPC_Pawn_Parent, K2Node_Event_InstigatedBy_3) == 0x000148, "Member 'NPC_Pawn_Parent_C_ExecuteUbergraph_NPC_Pawn_Parent::K2Node_Event_InstigatedBy_3' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Parent_C_ExecuteUbergraph_NPC_Pawn_Parent, K2Node_Event_DamageCauser_3) == 0x000150, "Member 'NPC_Pawn_Parent_C_ExecuteUbergraph_NPC_Pawn_Parent::K2Node_Event_DamageCauser_3' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Parent_C_ExecuteUbergraph_NPC_Pawn_Parent, K2Node_Event_EffectContext_3) == 0x000158, "Member 'NPC_Pawn_Parent_C_ExecuteUbergraph_NPC_Pawn_Parent::K2Node_Event_EffectContext_3' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Parent_C_ExecuteUbergraph_NPC_Pawn_Parent, K2Node_Event_NewController) == 0x000170, "Member 'NPC_Pawn_Parent_C_ExecuteUbergraph_NPC_Pawn_Parent::K2Node_Event_NewController' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Parent_C_ExecuteUbergraph_NPC_Pawn_Parent, CallFunc_IsValid_ReturnValue) == 0x000178, "Member 'NPC_Pawn_Parent_C_ExecuteUbergraph_NPC_Pawn_Parent::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Parent_C_ExecuteUbergraph_NPC_Pawn_Parent, CallFunc_GetUserWidgetObject_ReturnValue) == 0x000180, "Member 'NPC_Pawn_Parent_C_ExecuteUbergraph_NPC_Pawn_Parent::CallFunc_GetUserWidgetObject_ReturnValue' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Parent_C_ExecuteUbergraph_NPC_Pawn_Parent, K2Node_DynamicCast_AsNPCStatus_Widget) == 0x000188, "Member 'NPC_Pawn_Parent_C_ExecuteUbergraph_NPC_Pawn_Parent::K2Node_DynamicCast_AsNPCStatus_Widget' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Parent_C_ExecuteUbergraph_NPC_Pawn_Parent, K2Node_DynamicCast_bSuccess) == 0x000190, "Member 'NPC_Pawn_Parent_C_ExecuteUbergraph_NPC_Pawn_Parent::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Parent_C_ExecuteUbergraph_NPC_Pawn_Parent, CallFunc_MakeLiteralGameplayTagContainer_ReturnValue) == 0x000198, "Member 'NPC_Pawn_Parent_C_ExecuteUbergraph_NPC_Pawn_Parent::CallFunc_MakeLiteralGameplayTagContainer_ReturnValue' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Parent_C_ExecuteUbergraph_NPC_Pawn_Parent, CallFunc_NotEqual_GameplayTagContainer_ReturnValue) == 0x0001B8, "Member 'NPC_Pawn_Parent_C_ExecuteUbergraph_NPC_Pawn_Parent::CallFunc_NotEqual_GameplayTagContainer_ReturnValue' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Parent_C_ExecuteUbergraph_NPC_Pawn_Parent, K2Node_CustomEvent_NPC_AlertLevel_1) == 0x0001B9, "Member 'NPC_Pawn_Parent_C_ExecuteUbergraph_NPC_Pawn_Parent::K2Node_CustomEvent_NPC_AlertLevel_1' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Parent_C_ExecuteUbergraph_NPC_Pawn_Parent, K2Node_CustomEvent_NPC_AlertLevel) == 0x0001BA, "Member 'NPC_Pawn_Parent_C_ExecuteUbergraph_NPC_Pawn_Parent::K2Node_CustomEvent_NPC_AlertLevel' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Parent_C_ExecuteUbergraph_NPC_Pawn_Parent, CallFunc_NotEqual_ByteByte_ReturnValue) == 0x0001BB, "Member 'NPC_Pawn_Parent_C_ExecuteUbergraph_NPC_Pawn_Parent::CallFunc_NotEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Parent_C_ExecuteUbergraph_NPC_Pawn_Parent, CallFunc_GetValueAtLevel_ReturnValue) == 0x0001BC, "Member 'NPC_Pawn_Parent_C_ExecuteUbergraph_NPC_Pawn_Parent::CallFunc_GetValueAtLevel_ReturnValue' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Parent_C_ExecuteUbergraph_NPC_Pawn_Parent, CallFunc_GetValueAtLevel_ReturnValue_1) == 0x0001C0, "Member 'NPC_Pawn_Parent_C_ExecuteUbergraph_NPC_Pawn_Parent::CallFunc_GetValueAtLevel_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Parent_C_ExecuteUbergraph_NPC_Pawn_Parent, CallFunc_RandomFloatInRange_ReturnValue) == 0x0001C8, "Member 'NPC_Pawn_Parent_C_ExecuteUbergraph_NPC_Pawn_Parent::CallFunc_RandomFloatInRange_ReturnValue' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Parent_C_ExecuteUbergraph_NPC_Pawn_Parent, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x0001D0, "Member 'NPC_Pawn_Parent_C_ExecuteUbergraph_NPC_Pawn_Parent::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Parent_C_ExecuteUbergraph_NPC_Pawn_Parent, K2Node_Event_Damage_2) == 0x0001D4, "Member 'NPC_Pawn_Parent_C_ExecuteUbergraph_NPC_Pawn_Parent::K2Node_Event_Damage_2' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Parent_C_ExecuteUbergraph_NPC_Pawn_Parent, K2Node_Event_DamageTags_2) == 0x0001D8, "Member 'NPC_Pawn_Parent_C_ExecuteUbergraph_NPC_Pawn_Parent::K2Node_Event_DamageTags_2' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Parent_C_ExecuteUbergraph_NPC_Pawn_Parent, K2Node_Event_Momentum_2) == 0x0001F8, "Member 'NPC_Pawn_Parent_C_ExecuteUbergraph_NPC_Pawn_Parent::K2Node_Event_Momentum_2' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Parent_C_ExecuteUbergraph_NPC_Pawn_Parent, K2Node_Event_HitInfo_2) == 0x000210, "Member 'NPC_Pawn_Parent_C_ExecuteUbergraph_NPC_Pawn_Parent::K2Node_Event_HitInfo_2' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Parent_C_ExecuteUbergraph_NPC_Pawn_Parent, K2Node_Event_InstigatedBy_2) == 0x0002F0, "Member 'NPC_Pawn_Parent_C_ExecuteUbergraph_NPC_Pawn_Parent::K2Node_Event_InstigatedBy_2' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Parent_C_ExecuteUbergraph_NPC_Pawn_Parent, K2Node_Event_DamageCauser_2) == 0x0002F8, "Member 'NPC_Pawn_Parent_C_ExecuteUbergraph_NPC_Pawn_Parent::K2Node_Event_DamageCauser_2' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Parent_C_ExecuteUbergraph_NPC_Pawn_Parent, K2Node_Event_EffectContext_2) == 0x000300, "Member 'NPC_Pawn_Parent_C_ExecuteUbergraph_NPC_Pawn_Parent::K2Node_Event_EffectContext_2' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Parent_C_ExecuteUbergraph_NPC_Pawn_Parent, CallFunc_NPC_TryToDropLootOnDeath_CanDropLoot) == 0x000318, "Member 'NPC_Pawn_Parent_C_ExecuteUbergraph_NPC_Pawn_Parent::CallFunc_NPC_TryToDropLootOnDeath_CanDropLoot' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Parent_C_ExecuteUbergraph_NPC_Pawn_Parent, CallFunc_NPC_GetScalableFloatHotfixValue_AsBool) == 0x000319, "Member 'NPC_Pawn_Parent_C_ExecuteUbergraph_NPC_Pawn_Parent::CallFunc_NPC_GetScalableFloatHotfixValue_AsBool' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Parent_C_ExecuteUbergraph_NPC_Pawn_Parent, CallFunc_NPC_GetScalableFloatHotfixValue_AsIntRounded) == 0x00031C, "Member 'NPC_Pawn_Parent_C_ExecuteUbergraph_NPC_Pawn_Parent::CallFunc_NPC_GetScalableFloatHotfixValue_AsIntRounded' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Parent_C_ExecuteUbergraph_NPC_Pawn_Parent, CallFunc_NPC_GetScalableFloatHotfixValue_AsFloat) == 0x000320, "Member 'NPC_Pawn_Parent_C_ExecuteUbergraph_NPC_Pawn_Parent::CallFunc_NPC_GetScalableFloatHotfixValue_AsFloat' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Parent_C_ExecuteUbergraph_NPC_Pawn_Parent, K2Node_CustomEvent_NewNPC_AlertLevel) == 0x000328, "Member 'NPC_Pawn_Parent_C_ExecuteUbergraph_NPC_Pawn_Parent::K2Node_CustomEvent_NewNPC_AlertLevel' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Parent_C_ExecuteUbergraph_NPC_Pawn_Parent, CallFunc_Greater_DoubleDouble_ReturnValue) == 0x000329, "Member 'NPC_Pawn_Parent_C_ExecuteUbergraph_NPC_Pawn_Parent::CallFunc_Greater_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Parent_C_ExecuteUbergraph_NPC_Pawn_Parent, CallFunc_HasAuthority_ReturnValue) == 0x00032A, "Member 'NPC_Pawn_Parent_C_ExecuteUbergraph_NPC_Pawn_Parent::CallFunc_HasAuthority_ReturnValue' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Parent_C_ExecuteUbergraph_NPC_Pawn_Parent, K2Node_CustomEvent_AI) == 0x000330, "Member 'NPC_Pawn_Parent_C_ExecuteUbergraph_NPC_Pawn_Parent::K2Node_CustomEvent_AI' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Parent_C_ExecuteUbergraph_NPC_Pawn_Parent, K2Node_CustomEvent_InteractingPlayerController) == 0x000338, "Member 'NPC_Pawn_Parent_C_ExecuteUbergraph_NPC_Pawn_Parent::K2Node_CustomEvent_InteractingPlayerController' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Parent_C_ExecuteUbergraph_NPC_Pawn_Parent, K2Node_CustomEvent_InteractionBeingAttempted) == 0x000340, "Member 'NPC_Pawn_Parent_C_ExecuteUbergraph_NPC_Pawn_Parent::K2Node_CustomEvent_InteractionBeingAttempted' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Parent_C_ExecuteUbergraph_NPC_Pawn_Parent, K2Node_CustomEvent_AIPawn) == 0x000348, "Member 'NPC_Pawn_Parent_C_ExecuteUbergraph_NPC_Pawn_Parent::K2Node_CustomEvent_AIPawn' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Parent_C_ExecuteUbergraph_NPC_Pawn_Parent, K2Node_CustomEvent_InteractingPlayerPawn) == 0x000350, "Member 'NPC_Pawn_Parent_C_ExecuteUbergraph_NPC_Pawn_Parent::K2Node_CustomEvent_InteractingPlayerPawn' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Parent_C_ExecuteUbergraph_NPC_Pawn_Parent, CallFunc_GetPlayerPawn_ReturnValue) == 0x000358, "Member 'NPC_Pawn_Parent_C_ExecuteUbergraph_NPC_Pawn_Parent::CallFunc_GetPlayerPawn_ReturnValue' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Parent_C_ExecuteUbergraph_NPC_Pawn_Parent, K2Node_CustomEvent_bVisible) == 0x000360, "Member 'NPC_Pawn_Parent_C_ExecuteUbergraph_NPC_Pawn_Parent::K2Node_CustomEvent_bVisible' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Parent_C_ExecuteUbergraph_NPC_Pawn_Parent, K2Node_Event_WaterSurfaceLocation) == 0x000368, "Member 'NPC_Pawn_Parent_C_ExecuteUbergraph_NPC_Pawn_Parent::K2Node_Event_WaterSurfaceLocation' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Parent_C_ExecuteUbergraph_NPC_Pawn_Parent, K2Node_Event_WaterDepth) == 0x000380, "Member 'NPC_Pawn_Parent_C_ExecuteUbergraph_NPC_Pawn_Parent::K2Node_Event_WaterDepth' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Parent_C_ExecuteUbergraph_NPC_Pawn_Parent, K2Node_CustomEvent_Success_) == 0x000384, "Member 'NPC_Pawn_Parent_C_ExecuteUbergraph_NPC_Pawn_Parent::K2Node_CustomEvent_Success_' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Parent_C_ExecuteUbergraph_NPC_Pawn_Parent, K2Node_CustomEvent_Leader) == 0x000388, "Member 'NPC_Pawn_Parent_C_ExecuteUbergraph_NPC_Pawn_Parent::K2Node_CustomEvent_Leader' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Parent_C_ExecuteUbergraph_NPC_Pawn_Parent, K2Node_CustomEvent_UnconvertReason) == 0x000390, "Member 'NPC_Pawn_Parent_C_ExecuteUbergraph_NPC_Pawn_Parent::K2Node_CustomEvent_UnconvertReason' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Parent_C_ExecuteUbergraph_NPC_Pawn_Parent, K2Node_SwitchEnum_CmpSuccess) == 0x000391, "Member 'NPC_Pawn_Parent_C_ExecuteUbergraph_NPC_Pawn_Parent::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Parent_C_ExecuteUbergraph_NPC_Pawn_Parent, CallFunc_NPC_UpdateInteract_EnabledInteract) == 0x000392, "Member 'NPC_Pawn_Parent_C_ExecuteUbergraph_NPC_Pawn_Parent::CallFunc_NPC_UpdateInteract_EnabledInteract' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Parent_C_ExecuteUbergraph_NPC_Pawn_Parent, CallFunc_NPC_UpdateInteract_EnabledInteract_1) == 0x000393, "Member 'NPC_Pawn_Parent_C_ExecuteUbergraph_NPC_Pawn_Parent::CallFunc_NPC_UpdateInteract_EnabledInteract_1' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Parent_C_ExecuteUbergraph_NPC_Pawn_Parent, K2Node_Event_Damage_1) == 0x000394, "Member 'NPC_Pawn_Parent_C_ExecuteUbergraph_NPC_Pawn_Parent::K2Node_Event_Damage_1' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Parent_C_ExecuteUbergraph_NPC_Pawn_Parent, K2Node_Event_DamageTags_1) == 0x000398, "Member 'NPC_Pawn_Parent_C_ExecuteUbergraph_NPC_Pawn_Parent::K2Node_Event_DamageTags_1' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Parent_C_ExecuteUbergraph_NPC_Pawn_Parent, K2Node_Event_Momentum_1) == 0x0003B8, "Member 'NPC_Pawn_Parent_C_ExecuteUbergraph_NPC_Pawn_Parent::K2Node_Event_Momentum_1' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Parent_C_ExecuteUbergraph_NPC_Pawn_Parent, K2Node_Event_HitInfo_1) == 0x0003D0, "Member 'NPC_Pawn_Parent_C_ExecuteUbergraph_NPC_Pawn_Parent::K2Node_Event_HitInfo_1' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Parent_C_ExecuteUbergraph_NPC_Pawn_Parent, K2Node_Event_InstigatedBy_1) == 0x0004B0, "Member 'NPC_Pawn_Parent_C_ExecuteUbergraph_NPC_Pawn_Parent::K2Node_Event_InstigatedBy_1' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Parent_C_ExecuteUbergraph_NPC_Pawn_Parent, K2Node_Event_DamageCauser_1) == 0x0004B8, "Member 'NPC_Pawn_Parent_C_ExecuteUbergraph_NPC_Pawn_Parent::K2Node_Event_DamageCauser_1' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Parent_C_ExecuteUbergraph_NPC_Pawn_Parent, K2Node_Event_EffectContext_1) == 0x0004C0, "Member 'NPC_Pawn_Parent_C_ExecuteUbergraph_NPC_Pawn_Parent::K2Node_Event_EffectContext_1' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Parent_C_ExecuteUbergraph_NPC_Pawn_Parent, CallFunc_K2_GetActorLocation_ReturnValue) == 0x0004D8, "Member 'NPC_Pawn_Parent_C_ExecuteUbergraph_NPC_Pawn_Parent::CallFunc_K2_GetActorLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Parent_C_ExecuteUbergraph_NPC_Pawn_Parent, CallFunc_MakeGameplayCueParameters_ReturnValue) == 0x0004F0, "Member 'NPC_Pawn_Parent_C_ExecuteUbergraph_NPC_Pawn_Parent::CallFunc_MakeGameplayCueParameters_ReturnValue' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Parent_C_ExecuteUbergraph_NPC_Pawn_Parent, Temp_bool_Variable) == 0x0005C0, "Member 'NPC_Pawn_Parent_C_ExecuteUbergraph_NPC_Pawn_Parent::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Parent_C_ExecuteUbergraph_NPC_Pawn_Parent, K2Node_Select_Default) == 0x0005C4, "Member 'NPC_Pawn_Parent_C_ExecuteUbergraph_NPC_Pawn_Parent::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Parent_C_ExecuteUbergraph_NPC_Pawn_Parent, CallFunc_NPC_CheckIsInSafeZone_TestSucceeded) == 0x0005C8, "Member 'NPC_Pawn_Parent_C_ExecuteUbergraph_NPC_Pawn_Parent::CallFunc_NPC_CheckIsInSafeZone_TestSucceeded' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Parent_C_ExecuteUbergraph_NPC_Pawn_Parent, CallFunc_NPC_CheckIsInSafeZone_isInSafeZone) == 0x0005C9, "Member 'NPC_Pawn_Parent_C_ExecuteUbergraph_NPC_Pawn_Parent::CallFunc_NPC_CheckIsInSafeZone_isInSafeZone' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Parent_C_ExecuteUbergraph_NPC_Pawn_Parent, CallFunc_PlayVoiceLine_Success) == 0x0005CA, "Member 'NPC_Pawn_Parent_C_ExecuteUbergraph_NPC_Pawn_Parent::CallFunc_PlayVoiceLine_Success' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Parent_C_ExecuteUbergraph_NPC_Pawn_Parent, CallFunc_NPC_GetScalableFloatHotfixValue_AsBool_1) == 0x0005CB, "Member 'NPC_Pawn_Parent_C_ExecuteUbergraph_NPC_Pawn_Parent::CallFunc_NPC_GetScalableFloatHotfixValue_AsBool_1' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Parent_C_ExecuteUbergraph_NPC_Pawn_Parent, CallFunc_NPC_GetScalableFloatHotfixValue_AsIntRounded_1) == 0x0005CC, "Member 'NPC_Pawn_Parent_C_ExecuteUbergraph_NPC_Pawn_Parent::CallFunc_NPC_GetScalableFloatHotfixValue_AsIntRounded_1' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Parent_C_ExecuteUbergraph_NPC_Pawn_Parent, CallFunc_NPC_GetScalableFloatHotfixValue_AsFloat_1) == 0x0005D0, "Member 'NPC_Pawn_Parent_C_ExecuteUbergraph_NPC_Pawn_Parent::CallFunc_NPC_GetScalableFloatHotfixValue_AsFloat_1' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Parent_C_ExecuteUbergraph_NPC_Pawn_Parent, K2Node_CreateDelegate_OutputDelegate) == 0x0005D8, "Member 'NPC_Pawn_Parent_C_ExecuteUbergraph_NPC_Pawn_Parent::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Parent_C_ExecuteUbergraph_NPC_Pawn_Parent, CallFunc_RandomFloatInRange_ReturnValue_1) == 0x0005E8, "Member 'NPC_Pawn_Parent_C_ExecuteUbergraph_NPC_Pawn_Parent::CallFunc_RandomFloatInRange_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Parent_C_ExecuteUbergraph_NPC_Pawn_Parent, CallFunc_HasAuthority_ReturnValue_1) == 0x0005F0, "Member 'NPC_Pawn_Parent_C_ExecuteUbergraph_NPC_Pawn_Parent::CallFunc_HasAuthority_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Parent_C_ExecuteUbergraph_NPC_Pawn_Parent, CallFunc_K2_SetTimerDelegate_ReturnValue) == 0x0005F8, "Member 'NPC_Pawn_Parent_C_ExecuteUbergraph_NPC_Pawn_Parent::CallFunc_K2_SetTimerDelegate_ReturnValue' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Parent_C_ExecuteUbergraph_NPC_Pawn_Parent, K2Node_CustomEvent_Reset_Timer) == 0x000600, "Member 'NPC_Pawn_Parent_C_ExecuteUbergraph_NPC_Pawn_Parent::K2Node_CustomEvent_Reset_Timer' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Parent_C_ExecuteUbergraph_NPC_Pawn_Parent, K2Node_CreateDelegate_OutputDelegate_1) == 0x000604, "Member 'NPC_Pawn_Parent_C_ExecuteUbergraph_NPC_Pawn_Parent::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Parent_C_ExecuteUbergraph_NPC_Pawn_Parent, CallFunc_K2_SetTimerDelegate_ReturnValue_1) == 0x000610, "Member 'NPC_Pawn_Parent_C_ExecuteUbergraph_NPC_Pawn_Parent::CallFunc_K2_SetTimerDelegate_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Parent_C_ExecuteUbergraph_NPC_Pawn_Parent, CallFunc_NPC_GetScalableFloatHotfixValue_AsBool_2) == 0x000618, "Member 'NPC_Pawn_Parent_C_ExecuteUbergraph_NPC_Pawn_Parent::CallFunc_NPC_GetScalableFloatHotfixValue_AsBool_2' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Parent_C_ExecuteUbergraph_NPC_Pawn_Parent, CallFunc_NPC_GetScalableFloatHotfixValue_AsIntRounded_2) == 0x00061C, "Member 'NPC_Pawn_Parent_C_ExecuteUbergraph_NPC_Pawn_Parent::CallFunc_NPC_GetScalableFloatHotfixValue_AsIntRounded_2' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Parent_C_ExecuteUbergraph_NPC_Pawn_Parent, CallFunc_NPC_GetScalableFloatHotfixValue_AsFloat_2) == 0x000620, "Member 'NPC_Pawn_Parent_C_ExecuteUbergraph_NPC_Pawn_Parent::CallFunc_NPC_GetScalableFloatHotfixValue_AsFloat_2' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Parent_C_ExecuteUbergraph_NPC_Pawn_Parent, CallFunc_K2_IsValidTimerHandle_ReturnValue) == 0x000628, "Member 'NPC_Pawn_Parent_C_ExecuteUbergraph_NPC_Pawn_Parent::CallFunc_K2_IsValidTimerHandle_ReturnValue' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Parent_C_ExecuteUbergraph_NPC_Pawn_Parent, CallFunc_HasAuthority_ReturnValue_2) == 0x000629, "Member 'NPC_Pawn_Parent_C_ExecuteUbergraph_NPC_Pawn_Parent::CallFunc_HasAuthority_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Parent_C_ExecuteUbergraph_NPC_Pawn_Parent, CallFunc_BooleanAND_ReturnValue) == 0x00062A, "Member 'NPC_Pawn_Parent_C_ExecuteUbergraph_NPC_Pawn_Parent::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Parent_C_ExecuteUbergraph_NPC_Pawn_Parent, CallFunc_Not_PreBool_ReturnValue_1) == 0x00062B, "Member 'NPC_Pawn_Parent_C_ExecuteUbergraph_NPC_Pawn_Parent::CallFunc_Not_PreBool_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Parent_C_ExecuteUbergraph_NPC_Pawn_Parent, CallFunc_HasAuthority_ReturnValue_3) == 0x00062C, "Member 'NPC_Pawn_Parent_C_ExecuteUbergraph_NPC_Pawn_Parent::CallFunc_HasAuthority_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Parent_C_ExecuteUbergraph_NPC_Pawn_Parent, CallFunc_BooleanOR_ReturnValue) == 0x00062D, "Member 'NPC_Pawn_Parent_C_ExecuteUbergraph_NPC_Pawn_Parent::CallFunc_BooleanOR_ReturnValue' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Parent_C_ExecuteUbergraph_NPC_Pawn_Parent, CallFunc_HasAuthority_ReturnValue_4) == 0x00062E, "Member 'NPC_Pawn_Parent_C_ExecuteUbergraph_NPC_Pawn_Parent::CallFunc_HasAuthority_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Parent_C_ExecuteUbergraph_NPC_Pawn_Parent, K2Node_CreateDelegate_OutputDelegate_2) == 0x000630, "Member 'NPC_Pawn_Parent_C_ExecuteUbergraph_NPC_Pawn_Parent::K2Node_CreateDelegate_OutputDelegate_2' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Parent_C_ExecuteUbergraph_NPC_Pawn_Parent, CallFunc_K2_SetTimerDelegate_ReturnValue_2) == 0x000640, "Member 'NPC_Pawn_Parent_C_ExecuteUbergraph_NPC_Pawn_Parent::CallFunc_K2_SetTimerDelegate_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Parent_C_ExecuteUbergraph_NPC_Pawn_Parent, CallFunc_NPC_GetScalableFloatHotfixValue_AsBool_3) == 0x000648, "Member 'NPC_Pawn_Parent_C_ExecuteUbergraph_NPC_Pawn_Parent::CallFunc_NPC_GetScalableFloatHotfixValue_AsBool_3' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Parent_C_ExecuteUbergraph_NPC_Pawn_Parent, CallFunc_NPC_GetScalableFloatHotfixValue_AsIntRounded_3) == 0x00064C, "Member 'NPC_Pawn_Parent_C_ExecuteUbergraph_NPC_Pawn_Parent::CallFunc_NPC_GetScalableFloatHotfixValue_AsIntRounded_3' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Parent_C_ExecuteUbergraph_NPC_Pawn_Parent, CallFunc_NPC_GetScalableFloatHotfixValue_AsFloat_3) == 0x000650, "Member 'NPC_Pawn_Parent_C_ExecuteUbergraph_NPC_Pawn_Parent::CallFunc_NPC_GetScalableFloatHotfixValue_AsFloat_3' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Parent_C_ExecuteUbergraph_NPC_Pawn_Parent, CallFunc_IsValid_ReturnValue_1) == 0x000658, "Member 'NPC_Pawn_Parent_C_ExecuteUbergraph_NPC_Pawn_Parent::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Parent_C_ExecuteUbergraph_NPC_Pawn_Parent, CallFunc_BooleanAND_ReturnValue_1) == 0x000659, "Member 'NPC_Pawn_Parent_C_ExecuteUbergraph_NPC_Pawn_Parent::CallFunc_BooleanAND_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Parent_C_ExecuteUbergraph_NPC_Pawn_Parent, CallFunc_TryActivateAbilitiesByTag_ReturnValue) == 0x00065A, "Member 'NPC_Pawn_Parent_C_ExecuteUbergraph_NPC_Pawn_Parent::CallFunc_TryActivateAbilitiesByTag_ReturnValue' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Parent_C_ExecuteUbergraph_NPC_Pawn_Parent, Temp_bool_Has_Been_Initd_Variable) == 0x00065B, "Member 'NPC_Pawn_Parent_C_ExecuteUbergraph_NPC_Pawn_Parent::Temp_bool_Has_Been_Initd_Variable' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Parent_C_ExecuteUbergraph_NPC_Pawn_Parent, Temp_bool_IsClosed_Variable) == 0x00065C, "Member 'NPC_Pawn_Parent_C_ExecuteUbergraph_NPC_Pawn_Parent::Temp_bool_IsClosed_Variable' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Parent_C_ExecuteUbergraph_NPC_Pawn_Parent, K2Node_CustomEvent_NPCAlertLevel) == 0x00065D, "Member 'NPC_Pawn_Parent_C_ExecuteUbergraph_NPC_Pawn_Parent::K2Node_CustomEvent_NPCAlertLevel' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Parent_C_ExecuteUbergraph_NPC_Pawn_Parent, CallFunc_NPC_GetAlertLevelInfo_AlertLevel) == 0x00065E, "Member 'NPC_Pawn_Parent_C_ExecuteUbergraph_NPC_Pawn_Parent::CallFunc_NPC_GetAlertLevelInfo_AlertLevel' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Parent_C_ExecuteUbergraph_NPC_Pawn_Parent, CallFunc_NPC_GetAlertLevelInfo_AlertLevelTag) == 0x000660, "Member 'NPC_Pawn_Parent_C_ExecuteUbergraph_NPC_Pawn_Parent::CallFunc_NPC_GetAlertLevelInfo_AlertLevelTag' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Parent_C_ExecuteUbergraph_NPC_Pawn_Parent, CallFunc_NPC_GetAlertLevelInfo_ValidDataFound) == 0x000664, "Member 'NPC_Pawn_Parent_C_ExecuteUbergraph_NPC_Pawn_Parent::CallFunc_NPC_GetAlertLevelInfo_ValidDataFound' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Parent_C_ExecuteUbergraph_NPC_Pawn_Parent, K2Node_SwitchEnum_CmpSuccess_1) == 0x000665, "Member 'NPC_Pawn_Parent_C_ExecuteUbergraph_NPC_Pawn_Parent::K2Node_SwitchEnum_CmpSuccess_1' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Parent_C_ExecuteUbergraph_NPC_Pawn_Parent, K2Node_MakeStruct_GameplayEventData) == 0x000668, "Member 'NPC_Pawn_Parent_C_ExecuteUbergraph_NPC_Pawn_Parent::K2Node_MakeStruct_GameplayEventData' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Parent_C_ExecuteUbergraph_NPC_Pawn_Parent, K2Node_MakeStruct_GameplayEventData_1) == 0x000718, "Member 'NPC_Pawn_Parent_C_ExecuteUbergraph_NPC_Pawn_Parent::K2Node_MakeStruct_GameplayEventData_1' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Parent_C_ExecuteUbergraph_NPC_Pawn_Parent, CallFunc_GetCurrent_ReturnValue) == 0x0007C8, "Member 'NPC_Pawn_Parent_C_ExecuteUbergraph_NPC_Pawn_Parent::CallFunc_GetCurrent_ReturnValue' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Parent_C_ExecuteUbergraph_NPC_Pawn_Parent, K2Node_CreateDelegate_OutputDelegate_3) == 0x0007D0, "Member 'NPC_Pawn_Parent_C_ExecuteUbergraph_NPC_Pawn_Parent::K2Node_CreateDelegate_OutputDelegate_3' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Parent_C_ExecuteUbergraph_NPC_Pawn_Parent, CallFunc_IsValid_ReturnValue_2) == 0x0007DC, "Member 'NPC_Pawn_Parent_C_ExecuteUbergraph_NPC_Pawn_Parent::CallFunc_IsValid_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Parent_C_ExecuteUbergraph_NPC_Pawn_Parent, K2Node_CreateDelegate_OutputDelegate_4) == 0x0007E0, "Member 'NPC_Pawn_Parent_C_ExecuteUbergraph_NPC_Pawn_Parent::K2Node_CreateDelegate_OutputDelegate_4' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Parent_C_ExecuteUbergraph_NPC_Pawn_Parent, K2Node_Event_WaterBody_1) == 0x0007F0, "Member 'NPC_Pawn_Parent_C_ExecuteUbergraph_NPC_Pawn_Parent::K2Node_Event_WaterBody_1' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Parent_C_ExecuteUbergraph_NPC_Pawn_Parent, K2Node_Event_bIsFirstBody) == 0x0007F8, "Member 'NPC_Pawn_Parent_C_ExecuteUbergraph_NPC_Pawn_Parent::K2Node_Event_bIsFirstBody' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Parent_C_ExecuteUbergraph_NPC_Pawn_Parent, K2Node_Event_WaterBody) == 0x000800, "Member 'NPC_Pawn_Parent_C_ExecuteUbergraph_NPC_Pawn_Parent::K2Node_Event_WaterBody' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Parent_C_ExecuteUbergraph_NPC_Pawn_Parent, K2Node_Event_bIsLastBody) == 0x000808, "Member 'NPC_Pawn_Parent_C_ExecuteUbergraph_NPC_Pawn_Parent::K2Node_Event_bIsLastBody' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Parent_C_ExecuteUbergraph_NPC_Pawn_Parent, CallFunc_IsDedicatedServer_ReturnValue) == 0x000809, "Member 'NPC_Pawn_Parent_C_ExecuteUbergraph_NPC_Pawn_Parent::CallFunc_IsDedicatedServer_ReturnValue' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Parent_C_ExecuteUbergraph_NPC_Pawn_Parent, CallFunc_GetBlackboard_ReturnValue) == 0x000810, "Member 'NPC_Pawn_Parent_C_ExecuteUbergraph_NPC_Pawn_Parent::CallFunc_GetBlackboard_ReturnValue' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Parent_C_ExecuteUbergraph_NPC_Pawn_Parent, CallFunc_GetCurrent_ReturnValue_1) == 0x000818, "Member 'NPC_Pawn_Parent_C_ExecuteUbergraph_NPC_Pawn_Parent::CallFunc_GetCurrent_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Parent_C_ExecuteUbergraph_NPC_Pawn_Parent, K2Node_CustomEvent_AlertLevel) == 0x000820, "Member 'NPC_Pawn_Parent_C_ExecuteUbergraph_NPC_Pawn_Parent::K2Node_CustomEvent_AlertLevel' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Parent_C_ExecuteUbergraph_NPC_Pawn_Parent, K2Node_SwitchEnum_CmpSuccess_2) == 0x000821, "Member 'NPC_Pawn_Parent_C_ExecuteUbergraph_NPC_Pawn_Parent::K2Node_SwitchEnum_CmpSuccess_2' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Parent_C_ExecuteUbergraph_NPC_Pawn_Parent, CallFunc_IsValid_ReturnValue_3) == 0x000822, "Member 'NPC_Pawn_Parent_C_ExecuteUbergraph_NPC_Pawn_Parent::CallFunc_IsValid_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Parent_C_ExecuteUbergraph_NPC_Pawn_Parent, CallFunc_GetValueAsObject_ReturnValue) == 0x000828, "Member 'NPC_Pawn_Parent_C_ExecuteUbergraph_NPC_Pawn_Parent::CallFunc_GetValueAsObject_ReturnValue' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Parent_C_ExecuteUbergraph_NPC_Pawn_Parent, K2Node_DynamicCast_AsFort_Projectile_Base) == 0x000830, "Member 'NPC_Pawn_Parent_C_ExecuteUbergraph_NPC_Pawn_Parent::K2Node_DynamicCast_AsFort_Projectile_Base' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Parent_C_ExecuteUbergraph_NPC_Pawn_Parent, K2Node_DynamicCast_bSuccess_1) == 0x000838, "Member 'NPC_Pawn_Parent_C_ExecuteUbergraph_NPC_Pawn_Parent::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Parent_C_ExecuteUbergraph_NPC_Pawn_Parent, CallFunc_MakeGameplayCueParameters_ReturnValue_1) == 0x000840, "Member 'NPC_Pawn_Parent_C_ExecuteUbergraph_NPC_Pawn_Parent::CallFunc_MakeGameplayCueParameters_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Parent_C_ExecuteUbergraph_NPC_Pawn_Parent, K2Node_DynamicCast_AsFort_Pickup) == 0x000910, "Member 'NPC_Pawn_Parent_C_ExecuteUbergraph_NPC_Pawn_Parent::K2Node_DynamicCast_AsFort_Pickup' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Parent_C_ExecuteUbergraph_NPC_Pawn_Parent, K2Node_DynamicCast_bSuccess_2) == 0x000918, "Member 'NPC_Pawn_Parent_C_ExecuteUbergraph_NPC_Pawn_Parent::K2Node_DynamicCast_bSuccess_2' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Parent_C_ExecuteUbergraph_NPC_Pawn_Parent, CallFunc_IsValid_ReturnValue_4) == 0x000919, "Member 'NPC_Pawn_Parent_C_ExecuteUbergraph_NPC_Pawn_Parent::CallFunc_IsValid_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Parent_C_ExecuteUbergraph_NPC_Pawn_Parent, CallFunc_IsGameplayTagValid_ReturnValue) == 0x00091A, "Member 'NPC_Pawn_Parent_C_ExecuteUbergraph_NPC_Pawn_Parent::CallFunc_IsGameplayTagValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Parent_C_ExecuteUbergraph_NPC_Pawn_Parent, CallFunc_IsDedicatedServer_ReturnValue_1) == 0x00091B, "Member 'NPC_Pawn_Parent_C_ExecuteUbergraph_NPC_Pawn_Parent::CallFunc_IsDedicatedServer_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Parent_C_ExecuteUbergraph_NPC_Pawn_Parent, CallFunc_NotEqual_ObjectObject_ReturnValue) == 0x00091C, "Member 'NPC_Pawn_Parent_C_ExecuteUbergraph_NPC_Pawn_Parent::CallFunc_NotEqual_ObjectObject_ReturnValue' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Parent_C_ExecuteUbergraph_NPC_Pawn_Parent, K2Node_Event_EndPlayReason) == 0x00091D, "Member 'NPC_Pawn_Parent_C_ExecuteUbergraph_NPC_Pawn_Parent::K2Node_Event_EndPlayReason' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Parent_C_ExecuteUbergraph_NPC_Pawn_Parent, CallFunc_IsValidClass_ReturnValue) == 0x00091E, "Member 'NPC_Pawn_Parent_C_ExecuteUbergraph_NPC_Pawn_Parent::CallFunc_IsValidClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Parent_C_ExecuteUbergraph_NPC_Pawn_Parent, CallFunc_BP_ApplyGameplayEffectToSelf_ReturnValue) == 0x000920, "Member 'NPC_Pawn_Parent_C_ExecuteUbergraph_NPC_Pawn_Parent::CallFunc_BP_ApplyGameplayEffectToSelf_ReturnValue' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Parent_C_ExecuteUbergraph_NPC_Pawn_Parent, CallFunc_IsValidClass_ReturnValue_1) == 0x000928, "Member 'NPC_Pawn_Parent_C_ExecuteUbergraph_NPC_Pawn_Parent::CallFunc_IsValidClass_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Parent_C_ExecuteUbergraph_NPC_Pawn_Parent, CallFunc_RemoveActiveGameplayEffect_ReturnValue) == 0x000929, "Member 'NPC_Pawn_Parent_C_ExecuteUbergraph_NPC_Pawn_Parent::CallFunc_RemoveActiveGameplayEffect_ReturnValue' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Parent_C_ExecuteUbergraph_NPC_Pawn_Parent, K2Node_CustomEvent_Water_Body_1) == 0x000930, "Member 'NPC_Pawn_Parent_C_ExecuteUbergraph_NPC_Pawn_Parent::K2Node_CustomEvent_Water_Body_1' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Parent_C_ExecuteUbergraph_NPC_Pawn_Parent, K2Node_CustomEvent_Water_Body) == 0x000938, "Member 'NPC_Pawn_Parent_C_ExecuteUbergraph_NPC_Pawn_Parent::K2Node_CustomEvent_Water_Body' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Parent_C_ExecuteUbergraph_NPC_Pawn_Parent, CallFunc_IsValid_ReturnValue_5) == 0x000940, "Member 'NPC_Pawn_Parent_C_ExecuteUbergraph_NPC_Pawn_Parent::CallFunc_IsValid_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Parent_C_ExecuteUbergraph_NPC_Pawn_Parent, CallFunc_MakeLiteralGameplayTagContainer_ReturnValue_1) == 0x000948, "Member 'NPC_Pawn_Parent_C_ExecuteUbergraph_NPC_Pawn_Parent::CallFunc_MakeLiteralGameplayTagContainer_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Parent_C_ExecuteUbergraph_NPC_Pawn_Parent, CallFunc_K2_IsValidTimerHandle_ReturnValue_1) == 0x000968, "Member 'NPC_Pawn_Parent_C_ExecuteUbergraph_NPC_Pawn_Parent::CallFunc_K2_IsValidTimerHandle_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Parent_C_ExecuteUbergraph_NPC_Pawn_Parent, CallFunc_K2_IsValidTimerHandle_ReturnValue_2) == 0x000969, "Member 'NPC_Pawn_Parent_C_ExecuteUbergraph_NPC_Pawn_Parent::CallFunc_K2_IsValidTimerHandle_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Parent_C_ExecuteUbergraph_NPC_Pawn_Parent, CallFunc_IsValid_ReturnValue_6) == 0x00096A, "Member 'NPC_Pawn_Parent_C_ExecuteUbergraph_NPC_Pawn_Parent::CallFunc_IsValid_ReturnValue_6' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Parent_C_ExecuteUbergraph_NPC_Pawn_Parent, CallFunc_NPC_GetScalableFloatHotfixValue_AsBool_4) == 0x00096B, "Member 'NPC_Pawn_Parent_C_ExecuteUbergraph_NPC_Pawn_Parent::CallFunc_NPC_GetScalableFloatHotfixValue_AsBool_4' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Parent_C_ExecuteUbergraph_NPC_Pawn_Parent, CallFunc_NPC_GetScalableFloatHotfixValue_AsIntRounded_4) == 0x00096C, "Member 'NPC_Pawn_Parent_C_ExecuteUbergraph_NPC_Pawn_Parent::CallFunc_NPC_GetScalableFloatHotfixValue_AsIntRounded_4' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Parent_C_ExecuteUbergraph_NPC_Pawn_Parent, CallFunc_NPC_GetScalableFloatHotfixValue_AsFloat_4) == 0x000970, "Member 'NPC_Pawn_Parent_C_ExecuteUbergraph_NPC_Pawn_Parent::CallFunc_NPC_GetScalableFloatHotfixValue_AsFloat_4' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Parent_C_ExecuteUbergraph_NPC_Pawn_Parent, CallFunc_IsValid_ReturnValue_7) == 0x000978, "Member 'NPC_Pawn_Parent_C_ExecuteUbergraph_NPC_Pawn_Parent::CallFunc_IsValid_ReturnValue_7' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Parent_C_ExecuteUbergraph_NPC_Pawn_Parent, CallFunc_NPC_GetScalableFloatHotfixValue_AsBool_5) == 0x000979, "Member 'NPC_Pawn_Parent_C_ExecuteUbergraph_NPC_Pawn_Parent::CallFunc_NPC_GetScalableFloatHotfixValue_AsBool_5' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Parent_C_ExecuteUbergraph_NPC_Pawn_Parent, CallFunc_NPC_GetScalableFloatHotfixValue_AsIntRounded_5) == 0x00097C, "Member 'NPC_Pawn_Parent_C_ExecuteUbergraph_NPC_Pawn_Parent::CallFunc_NPC_GetScalableFloatHotfixValue_AsIntRounded_5' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Parent_C_ExecuteUbergraph_NPC_Pawn_Parent, CallFunc_NPC_GetScalableFloatHotfixValue_AsFloat_5) == 0x000980, "Member 'NPC_Pawn_Parent_C_ExecuteUbergraph_NPC_Pawn_Parent::CallFunc_NPC_GetScalableFloatHotfixValue_AsFloat_5' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Parent_C_ExecuteUbergraph_NPC_Pawn_Parent, CallFunc_GetUserWidgetObject_ReturnValue_1) == 0x000988, "Member 'NPC_Pawn_Parent_C_ExecuteUbergraph_NPC_Pawn_Parent::CallFunc_GetUserWidgetObject_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Parent_C_ExecuteUbergraph_NPC_Pawn_Parent, K2Node_DynamicCast_AsNPCStatus_Widget_1) == 0x000990, "Member 'NPC_Pawn_Parent_C_ExecuteUbergraph_NPC_Pawn_Parent::K2Node_DynamicCast_AsNPCStatus_Widget_1' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Parent_C_ExecuteUbergraph_NPC_Pawn_Parent, K2Node_DynamicCast_bSuccess_3) == 0x000998, "Member 'NPC_Pawn_Parent_C_ExecuteUbergraph_NPC_Pawn_Parent::K2Node_DynamicCast_bSuccess_3' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Parent_C_ExecuteUbergraph_NPC_Pawn_Parent, CallFunc_NPC_GetScalableFloatHotfixValue_AsBool_6) == 0x000999, "Member 'NPC_Pawn_Parent_C_ExecuteUbergraph_NPC_Pawn_Parent::CallFunc_NPC_GetScalableFloatHotfixValue_AsBool_6' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Parent_C_ExecuteUbergraph_NPC_Pawn_Parent, CallFunc_NPC_GetScalableFloatHotfixValue_AsIntRounded_6) == 0x00099C, "Member 'NPC_Pawn_Parent_C_ExecuteUbergraph_NPC_Pawn_Parent::CallFunc_NPC_GetScalableFloatHotfixValue_AsIntRounded_6' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Parent_C_ExecuteUbergraph_NPC_Pawn_Parent, CallFunc_NPC_GetScalableFloatHotfixValue_AsFloat_6) == 0x0009A0, "Member 'NPC_Pawn_Parent_C_ExecuteUbergraph_NPC_Pawn_Parent::CallFunc_NPC_GetScalableFloatHotfixValue_AsFloat_6' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Parent_C_ExecuteUbergraph_NPC_Pawn_Parent, CallFunc_NPC_GetScalableFloatHotfixValue_AsBool_7) == 0x0009A8, "Member 'NPC_Pawn_Parent_C_ExecuteUbergraph_NPC_Pawn_Parent::CallFunc_NPC_GetScalableFloatHotfixValue_AsBool_7' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Parent_C_ExecuteUbergraph_NPC_Pawn_Parent, CallFunc_NPC_GetScalableFloatHotfixValue_AsIntRounded_7) == 0x0009AC, "Member 'NPC_Pawn_Parent_C_ExecuteUbergraph_NPC_Pawn_Parent::CallFunc_NPC_GetScalableFloatHotfixValue_AsIntRounded_7' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Parent_C_ExecuteUbergraph_NPC_Pawn_Parent, CallFunc_NPC_GetScalableFloatHotfixValue_AsFloat_7) == 0x0009B0, "Member 'NPC_Pawn_Parent_C_ExecuteUbergraph_NPC_Pawn_Parent::CallFunc_NPC_GetScalableFloatHotfixValue_AsFloat_7' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Parent_C_ExecuteUbergraph_NPC_Pawn_Parent, CallFunc_NPC_GetScalableFloatHotfixValue_AsBool_8) == 0x0009B8, "Member 'NPC_Pawn_Parent_C_ExecuteUbergraph_NPC_Pawn_Parent::CallFunc_NPC_GetScalableFloatHotfixValue_AsBool_8' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Parent_C_ExecuteUbergraph_NPC_Pawn_Parent, CallFunc_NPC_GetScalableFloatHotfixValue_AsIntRounded_8) == 0x0009BC, "Member 'NPC_Pawn_Parent_C_ExecuteUbergraph_NPC_Pawn_Parent::CallFunc_NPC_GetScalableFloatHotfixValue_AsIntRounded_8' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Parent_C_ExecuteUbergraph_NPC_Pawn_Parent, CallFunc_NPC_GetScalableFloatHotfixValue_AsFloat_8) == 0x0009C0, "Member 'NPC_Pawn_Parent_C_ExecuteUbergraph_NPC_Pawn_Parent::CallFunc_NPC_GetScalableFloatHotfixValue_AsFloat_8' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Parent_C_ExecuteUbergraph_NPC_Pawn_Parent, CallFunc_IsGameplayTagValid_ReturnValue_1) == 0x0009C8, "Member 'NPC_Pawn_Parent_C_ExecuteUbergraph_NPC_Pawn_Parent::CallFunc_IsGameplayTagValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Parent_C_ExecuteUbergraph_NPC_Pawn_Parent, CallFunc_BooleanAND_ReturnValue_2) == 0x0009C9, "Member 'NPC_Pawn_Parent_C_ExecuteUbergraph_NPC_Pawn_Parent::CallFunc_BooleanAND_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Parent_C_ExecuteUbergraph_NPC_Pawn_Parent, CallFunc_BP_ApplyGameplayEffectToSelf_ReturnValue_1) == 0x0009CC, "Member 'NPC_Pawn_Parent_C_ExecuteUbergraph_NPC_Pawn_Parent::CallFunc_BP_ApplyGameplayEffectToSelf_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Parent_C_ExecuteUbergraph_NPC_Pawn_Parent, CallFunc_BP_ApplyGameplayEffectToSelf_ReturnValue_2) == 0x0009D4, "Member 'NPC_Pawn_Parent_C_ExecuteUbergraph_NPC_Pawn_Parent::CallFunc_BP_ApplyGameplayEffectToSelf_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Parent_C_ExecuteUbergraph_NPC_Pawn_Parent, CallFunc_BP_ApplyGameplayEffectToSelf_ReturnValue_3) == 0x0009DC, "Member 'NPC_Pawn_Parent_C_ExecuteUbergraph_NPC_Pawn_Parent::CallFunc_BP_ApplyGameplayEffectToSelf_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Parent_C_ExecuteUbergraph_NPC_Pawn_Parent, CallFunc_NPC_GetSafeZonePhase_SafeZonePhase) == 0x0009E4, "Member 'NPC_Pawn_Parent_C_ExecuteUbergraph_NPC_Pawn_Parent::CallFunc_NPC_GetSafeZonePhase_SafeZonePhase' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Parent_C_ExecuteUbergraph_NPC_Pawn_Parent, CallFunc_IsValid_ReturnValue_8) == 0x0009E8, "Member 'NPC_Pawn_Parent_C_ExecuteUbergraph_NPC_Pawn_Parent::CallFunc_IsValid_ReturnValue_8' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Parent_C_ExecuteUbergraph_NPC_Pawn_Parent, CallFunc_TryActivateAbilitiesByTag_ReturnValue_1) == 0x0009E9, "Member 'NPC_Pawn_Parent_C_ExecuteUbergraph_NPC_Pawn_Parent::CallFunc_TryActivateAbilitiesByTag_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Parent_C_ExecuteUbergraph_NPC_Pawn_Parent, CallFunc_MakeLiteralGameplayTagContainer_ReturnValue_2) == 0x0009F0, "Member 'NPC_Pawn_Parent_C_ExecuteUbergraph_NPC_Pawn_Parent::CallFunc_MakeLiteralGameplayTagContainer_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Parent_C_ExecuteUbergraph_NPC_Pawn_Parent, CallFunc_MakeLiteralGameplayTagContainer_ReturnValue_3) == 0x000A10, "Member 'NPC_Pawn_Parent_C_ExecuteUbergraph_NPC_Pawn_Parent::CallFunc_MakeLiteralGameplayTagContainer_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Parent_C_ExecuteUbergraph_NPC_Pawn_Parent, CallFunc_IsValid_ReturnValue_9) == 0x000A30, "Member 'NPC_Pawn_Parent_C_ExecuteUbergraph_NPC_Pawn_Parent::CallFunc_IsValid_ReturnValue_9' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Parent_C_ExecuteUbergraph_NPC_Pawn_Parent, CallFunc_NotEqual_GameplayTagContainer_ReturnValue_1) == 0x000A31, "Member 'NPC_Pawn_Parent_C_ExecuteUbergraph_NPC_Pawn_Parent::CallFunc_NotEqual_GameplayTagContainer_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Parent_C_ExecuteUbergraph_NPC_Pawn_Parent, CallFunc_NPC_CanBeInteractedWith_CanInteract) == 0x000A32, "Member 'NPC_Pawn_Parent_C_ExecuteUbergraph_NPC_Pawn_Parent::CallFunc_NPC_CanBeInteractedWith_CanInteract' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Parent_C_ExecuteUbergraph_NPC_Pawn_Parent, CallFunc_NPC_CanBeInteractedWith_CanInteract_1) == 0x000A33, "Member 'NPC_Pawn_Parent_C_ExecuteUbergraph_NPC_Pawn_Parent::CallFunc_NPC_CanBeInteractedWith_CanInteract_1' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Parent_C_ExecuteUbergraph_NPC_Pawn_Parent, CallFunc_NPC_UpdateInteract_EnabledInteract_2) == 0x000A34, "Member 'NPC_Pawn_Parent_C_ExecuteUbergraph_NPC_Pawn_Parent::CallFunc_NPC_UpdateInteract_EnabledInteract_2' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Parent_C_ExecuteUbergraph_NPC_Pawn_Parent, CallFunc_NPC_UpdateInteract_EnabledInteract_3) == 0x000A35, "Member 'NPC_Pawn_Parent_C_ExecuteUbergraph_NPC_Pawn_Parent::CallFunc_NPC_UpdateInteract_EnabledInteract_3' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Parent_C_ExecuteUbergraph_NPC_Pawn_Parent, CallFunc_BooleanOR_ReturnValue_1) == 0x000A36, "Member 'NPC_Pawn_Parent_C_ExecuteUbergraph_NPC_Pawn_Parent::CallFunc_BooleanOR_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Parent_C_ExecuteUbergraph_NPC_Pawn_Parent, CallFunc_BooleanOR_ReturnValue_2) == 0x000A37, "Member 'NPC_Pawn_Parent_C_ExecuteUbergraph_NPC_Pawn_Parent::CallFunc_BooleanOR_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Parent_C_ExecuteUbergraph_NPC_Pawn_Parent, CallFunc_BooleanAND_ReturnValue_3) == 0x000A38, "Member 'NPC_Pawn_Parent_C_ExecuteUbergraph_NPC_Pawn_Parent::CallFunc_BooleanAND_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Parent_C_ExecuteUbergraph_NPC_Pawn_Parent, CallFunc_IsValid_ReturnValue_10) == 0x000A39, "Member 'NPC_Pawn_Parent_C_ExecuteUbergraph_NPC_Pawn_Parent::CallFunc_IsValid_ReturnValue_10' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Parent_C_ExecuteUbergraph_NPC_Pawn_Parent, CallFunc_GetUserWidgetObject_ReturnValue_2) == 0x000A40, "Member 'NPC_Pawn_Parent_C_ExecuteUbergraph_NPC_Pawn_Parent::CallFunc_GetUserWidgetObject_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Parent_C_ExecuteUbergraph_NPC_Pawn_Parent, K2Node_DynamicCast_AsNPCStatus_Widget_2) == 0x000A48, "Member 'NPC_Pawn_Parent_C_ExecuteUbergraph_NPC_Pawn_Parent::K2Node_DynamicCast_AsNPCStatus_Widget_2' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Parent_C_ExecuteUbergraph_NPC_Pawn_Parent, K2Node_DynamicCast_bSuccess_4) == 0x000A50, "Member 'NPC_Pawn_Parent_C_ExecuteUbergraph_NPC_Pawn_Parent::K2Node_DynamicCast_bSuccess_4' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Parent_C_ExecuteUbergraph_NPC_Pawn_Parent, CallFunc_MakeGameplayCueParameters_ReturnValue_2) == 0x000A58, "Member 'NPC_Pawn_Parent_C_ExecuteUbergraph_NPC_Pawn_Parent::CallFunc_MakeGameplayCueParameters_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Parent_C_ExecuteUbergraph_NPC_Pawn_Parent, CallFunc_MakeLiteralGameplayTag_ReturnValue) == 0x000B28, "Member 'NPC_Pawn_Parent_C_ExecuteUbergraph_NPC_Pawn_Parent::CallFunc_MakeLiteralGameplayTag_ReturnValue' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Parent_C_ExecuteUbergraph_NPC_Pawn_Parent, CallFunc_NotEqual_GameplayTag_ReturnValue) == 0x000B2C, "Member 'NPC_Pawn_Parent_C_ExecuteUbergraph_NPC_Pawn_Parent::CallFunc_NotEqual_GameplayTag_ReturnValue' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Parent_C_ExecuteUbergraph_NPC_Pawn_Parent, CallFunc_Not_PreBool_ReturnValue_2) == 0x000B2D, "Member 'NPC_Pawn_Parent_C_ExecuteUbergraph_NPC_Pawn_Parent::CallFunc_Not_PreBool_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Parent_C_ExecuteUbergraph_NPC_Pawn_Parent, CallFunc_BooleanAND_ReturnValue_4) == 0x000B2E, "Member 'NPC_Pawn_Parent_C_ExecuteUbergraph_NPC_Pawn_Parent::CallFunc_BooleanAND_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Parent_C_ExecuteUbergraph_NPC_Pawn_Parent, CallFunc_NPC_GetAlertLevelInfo_AlertLevel_1) == 0x000B2F, "Member 'NPC_Pawn_Parent_C_ExecuteUbergraph_NPC_Pawn_Parent::CallFunc_NPC_GetAlertLevelInfo_AlertLevel_1' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Parent_C_ExecuteUbergraph_NPC_Pawn_Parent, CallFunc_NPC_GetAlertLevelInfo_AlertLevelTag_1) == 0x000B30, "Member 'NPC_Pawn_Parent_C_ExecuteUbergraph_NPC_Pawn_Parent::CallFunc_NPC_GetAlertLevelInfo_AlertLevelTag_1' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Parent_C_ExecuteUbergraph_NPC_Pawn_Parent, CallFunc_NPC_GetAlertLevelInfo_ValidDataFound_1) == 0x000B34, "Member 'NPC_Pawn_Parent_C_ExecuteUbergraph_NPC_Pawn_Parent::CallFunc_NPC_GetAlertLevelInfo_ValidDataFound_1' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Parent_C_ExecuteUbergraph_NPC_Pawn_Parent, CallFunc_GetCurrent_ReturnValue_2) == 0x000B38, "Member 'NPC_Pawn_Parent_C_ExecuteUbergraph_NPC_Pawn_Parent::CallFunc_GetCurrent_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Parent_C_ExecuteUbergraph_NPC_Pawn_Parent, CallFunc_IsValid_ReturnValue_11) == 0x000B40, "Member 'NPC_Pawn_Parent_C_ExecuteUbergraph_NPC_Pawn_Parent::CallFunc_IsValid_ReturnValue_11' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Parent_C_ExecuteUbergraph_NPC_Pawn_Parent, CallFunc_IsValidClass_ReturnValue_2) == 0x000B41, "Member 'NPC_Pawn_Parent_C_ExecuteUbergraph_NPC_Pawn_Parent::CallFunc_IsValidClass_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Parent_C_ExecuteUbergraph_NPC_Pawn_Parent, CallFunc_BP_ApplyGameplayEffectToSelf_ReturnValue_4) == 0x000B44, "Member 'NPC_Pawn_Parent_C_ExecuteUbergraph_NPC_Pawn_Parent::CallFunc_BP_ApplyGameplayEffectToSelf_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Parent_C_ExecuteUbergraph_NPC_Pawn_Parent, CallFunc_EqualEqual_ByteByte_ReturnValue_1) == 0x000B4C, "Member 'NPC_Pawn_Parent_C_ExecuteUbergraph_NPC_Pawn_Parent::CallFunc_EqualEqual_ByteByte_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Parent_C_ExecuteUbergraph_NPC_Pawn_Parent, K2Node_CreateDelegate_OutputDelegate_5) == 0x000B50, "Member 'NPC_Pawn_Parent_C_ExecuteUbergraph_NPC_Pawn_Parent::K2Node_CreateDelegate_OutputDelegate_5' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Parent_C_ExecuteUbergraph_NPC_Pawn_Parent, CallFunc_Conv_BoolToInt_ReturnValue) == 0x000B5C, "Member 'NPC_Pawn_Parent_C_ExecuteUbergraph_NPC_Pawn_Parent::CallFunc_Conv_BoolToInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Parent_C_ExecuteUbergraph_NPC_Pawn_Parent, CallFunc_SetIntParameter_self_CastInput) == 0x000B60, "Member 'NPC_Pawn_Parent_C_ExecuteUbergraph_NPC_Pawn_Parent::CallFunc_SetIntParameter_self_CastInput' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Parent_C_ExecuteUbergraph_NPC_Pawn_Parent, CallFunc_SpawnSoundAttached_ReturnValue) == 0x000B70, "Member 'NPC_Pawn_Parent_C_ExecuteUbergraph_NPC_Pawn_Parent::CallFunc_SpawnSoundAttached_ReturnValue' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Parent_C_ExecuteUbergraph_NPC_Pawn_Parent, CallFunc_Not_PreBool_ReturnValue_3) == 0x000B78, "Member 'NPC_Pawn_Parent_C_ExecuteUbergraph_NPC_Pawn_Parent::CallFunc_Not_PreBool_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Parent_C_ExecuteUbergraph_NPC_Pawn_Parent, CallFunc_Not_PreBool_ReturnValue_4) == 0x000B79, "Member 'NPC_Pawn_Parent_C_ExecuteUbergraph_NPC_Pawn_Parent::CallFunc_Not_PreBool_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Parent_C_ExecuteUbergraph_NPC_Pawn_Parent, CallFunc_BooleanAND_ReturnValue_5) == 0x000B7A, "Member 'NPC_Pawn_Parent_C_ExecuteUbergraph_NPC_Pawn_Parent::CallFunc_BooleanAND_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Parent_C_ExecuteUbergraph_NPC_Pawn_Parent, K2Node_CreateDelegate_OutputDelegate_6) == 0x000B7C, "Member 'NPC_Pawn_Parent_C_ExecuteUbergraph_NPC_Pawn_Parent::K2Node_CreateDelegate_OutputDelegate_6' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Parent_C_ExecuteUbergraph_NPC_Pawn_Parent, CallFunc_BooleanAND_ReturnValue_6) == 0x000B88, "Member 'NPC_Pawn_Parent_C_ExecuteUbergraph_NPC_Pawn_Parent::CallFunc_BooleanAND_ReturnValue_6' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Parent_C_ExecuteUbergraph_NPC_Pawn_Parent, CallFunc_K2_SetTimer_ReturnValue) == 0x000B90, "Member 'NPC_Pawn_Parent_C_ExecuteUbergraph_NPC_Pawn_Parent::CallFunc_K2_SetTimer_ReturnValue' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Parent_C_ExecuteUbergraph_NPC_Pawn_Parent, CallFunc_IsValid_ReturnValue_12) == 0x000B98, "Member 'NPC_Pawn_Parent_C_ExecuteUbergraph_NPC_Pawn_Parent::CallFunc_IsValid_ReturnValue_12' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Parent_C_ExecuteUbergraph_NPC_Pawn_Parent, K2Node_Event_Damage) == 0x000B9C, "Member 'NPC_Pawn_Parent_C_ExecuteUbergraph_NPC_Pawn_Parent::K2Node_Event_Damage' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Parent_C_ExecuteUbergraph_NPC_Pawn_Parent, K2Node_Event_DamageTags) == 0x000BA0, "Member 'NPC_Pawn_Parent_C_ExecuteUbergraph_NPC_Pawn_Parent::K2Node_Event_DamageTags' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Parent_C_ExecuteUbergraph_NPC_Pawn_Parent, K2Node_Event_Momentum) == 0x000BC0, "Member 'NPC_Pawn_Parent_C_ExecuteUbergraph_NPC_Pawn_Parent::K2Node_Event_Momentum' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Parent_C_ExecuteUbergraph_NPC_Pawn_Parent, K2Node_Event_HitInfo) == 0x000BD8, "Member 'NPC_Pawn_Parent_C_ExecuteUbergraph_NPC_Pawn_Parent::K2Node_Event_HitInfo' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Parent_C_ExecuteUbergraph_NPC_Pawn_Parent, K2Node_Event_InstigatedBy) == 0x000CB8, "Member 'NPC_Pawn_Parent_C_ExecuteUbergraph_NPC_Pawn_Parent::K2Node_Event_InstigatedBy' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Parent_C_ExecuteUbergraph_NPC_Pawn_Parent, K2Node_Event_DamageCauser) == 0x000CC0, "Member 'NPC_Pawn_Parent_C_ExecuteUbergraph_NPC_Pawn_Parent::K2Node_Event_DamageCauser' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Parent_C_ExecuteUbergraph_NPC_Pawn_Parent, K2Node_Event_EffectContext) == 0x000CC8, "Member 'NPC_Pawn_Parent_C_ExecuteUbergraph_NPC_Pawn_Parent::K2Node_Event_EffectContext' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Parent_C_ExecuteUbergraph_NPC_Pawn_Parent, K2Node_DynamicCast_AsFort_Projectile_Base_1) == 0x000CE0, "Member 'NPC_Pawn_Parent_C_ExecuteUbergraph_NPC_Pawn_Parent::K2Node_DynamicCast_AsFort_Projectile_Base_1' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Parent_C_ExecuteUbergraph_NPC_Pawn_Parent, K2Node_DynamicCast_bSuccess_5) == 0x000CE8, "Member 'NPC_Pawn_Parent_C_ExecuteUbergraph_NPC_Pawn_Parent::K2Node_DynamicCast_bSuccess_5' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Parent_C_ExecuteUbergraph_NPC_Pawn_Parent, K2Node_DynamicCast_AsFort_Weapon) == 0x000CF0, "Member 'NPC_Pawn_Parent_C_ExecuteUbergraph_NPC_Pawn_Parent::K2Node_DynamicCast_AsFort_Weapon' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Parent_C_ExecuteUbergraph_NPC_Pawn_Parent, K2Node_DynamicCast_bSuccess_6) == 0x000CF8, "Member 'NPC_Pawn_Parent_C_ExecuteUbergraph_NPC_Pawn_Parent::K2Node_DynamicCast_bSuccess_6' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Parent_C_ExecuteUbergraph_NPC_Pawn_Parent, CallFunc_GetDamageZone_ReturnValue) == 0x000CF9, "Member 'NPC_Pawn_Parent_C_ExecuteUbergraph_NPC_Pawn_Parent::CallFunc_GetDamageZone_ReturnValue' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Parent_C_ExecuteUbergraph_NPC_Pawn_Parent, K2Node_SwitchEnum_CmpSuccess_3) == 0x000CFA, "Member 'NPC_Pawn_Parent_C_ExecuteUbergraph_NPC_Pawn_Parent::K2Node_SwitchEnum_CmpSuccess_3' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Parent_C_ExecuteUbergraph_NPC_Pawn_Parent, CallFunc_WeaponDataHasAnyMatchingGameplayTags_ReturnValue) == 0x000CFB, "Member 'NPC_Pawn_Parent_C_ExecuteUbergraph_NPC_Pawn_Parent::CallFunc_WeaponDataHasAnyMatchingGameplayTags_ReturnValue' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Parent_C_ExecuteUbergraph_NPC_Pawn_Parent, CallFunc_IsValid_ReturnValue_13) == 0x000CFC, "Member 'NPC_Pawn_Parent_C_ExecuteUbergraph_NPC_Pawn_Parent::CallFunc_IsValid_ReturnValue_13' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Parent_C_ExecuteUbergraph_NPC_Pawn_Parent, CallFunc_IsValid_ReturnValue_14) == 0x000CFD, "Member 'NPC_Pawn_Parent_C_ExecuteUbergraph_NPC_Pawn_Parent::CallFunc_IsValid_ReturnValue_14' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Parent_C_ExecuteUbergraph_NPC_Pawn_Parent, CallFunc_SpawnSoundAttached_ReturnValue_1) == 0x000D00, "Member 'NPC_Pawn_Parent_C_ExecuteUbergraph_NPC_Pawn_Parent::CallFunc_SpawnSoundAttached_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Parent_C_ExecuteUbergraph_NPC_Pawn_Parent, CallFunc_GetSocketLocation_ReturnValue) == 0x000D08, "Member 'NPC_Pawn_Parent_C_ExecuteUbergraph_NPC_Pawn_Parent::CallFunc_GetSocketLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Parent_C_ExecuteUbergraph_NPC_Pawn_Parent, CallFunc_K2_GetComponentRotation_ReturnValue) == 0x000D20, "Member 'NPC_Pawn_Parent_C_ExecuteUbergraph_NPC_Pawn_Parent::CallFunc_K2_GetComponentRotation_ReturnValue' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Parent_C_ExecuteUbergraph_NPC_Pawn_Parent, CallFunc_SpawnEmitterAtLocation_ReturnValue) == 0x000D38, "Member 'NPC_Pawn_Parent_C_ExecuteUbergraph_NPC_Pawn_Parent::CallFunc_SpawnEmitterAtLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Parent_C_ExecuteUbergraph_NPC_Pawn_Parent, CallFunc_IsValid_ReturnValue_15) == 0x000D40, "Member 'NPC_Pawn_Parent_C_ExecuteUbergraph_NPC_Pawn_Parent::CallFunc_IsValid_ReturnValue_15' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Parent_C_ExecuteUbergraph_NPC_Pawn_Parent, CallFunc_IsValid_ReturnValue_16) == 0x000D41, "Member 'NPC_Pawn_Parent_C_ExecuteUbergraph_NPC_Pawn_Parent::CallFunc_IsValid_ReturnValue_16' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Parent_C_ExecuteUbergraph_NPC_Pawn_Parent, CallFunc_Greater_DoubleDouble_ReturnValue_1) == 0x000D42, "Member 'NPC_Pawn_Parent_C_ExecuteUbergraph_NPC_Pawn_Parent::CallFunc_Greater_DoubleDouble_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Parent_C_ExecuteUbergraph_NPC_Pawn_Parent, CallFunc_GetUserWidgetObject_ReturnValue_3) == 0x000D48, "Member 'NPC_Pawn_Parent_C_ExecuteUbergraph_NPC_Pawn_Parent::CallFunc_GetUserWidgetObject_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Parent_C_ExecuteUbergraph_NPC_Pawn_Parent, K2Node_DynamicCast_AsNPCStatus_Widget_3) == 0x000D50, "Member 'NPC_Pawn_Parent_C_ExecuteUbergraph_NPC_Pawn_Parent::K2Node_DynamicCast_AsNPCStatus_Widget_3' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Parent_C_ExecuteUbergraph_NPC_Pawn_Parent, K2Node_DynamicCast_bSuccess_7) == 0x000D58, "Member 'NPC_Pawn_Parent_C_ExecuteUbergraph_NPC_Pawn_Parent::K2Node_DynamicCast_bSuccess_7' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Parent_C_ExecuteUbergraph_NPC_Pawn_Parent, CallFunc_IsVisible_ReturnValue) == 0x000D59, "Member 'NPC_Pawn_Parent_C_ExecuteUbergraph_NPC_Pawn_Parent::CallFunc_IsVisible_ReturnValue' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Parent_C_ExecuteUbergraph_NPC_Pawn_Parent, CallFunc_IsValid_ReturnValue_17) == 0x000D5A, "Member 'NPC_Pawn_Parent_C_ExecuteUbergraph_NPC_Pawn_Parent::CallFunc_IsValid_ReturnValue_17' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Parent_C_ExecuteUbergraph_NPC_Pawn_Parent, CallFunc_Array_IsValidIndex_ReturnValue) == 0x000D5B, "Member 'NPC_Pawn_Parent_C_ExecuteUbergraph_NPC_Pawn_Parent::CallFunc_Array_IsValidIndex_ReturnValue' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Parent_C_ExecuteUbergraph_NPC_Pawn_Parent, CallFunc_Array_IsValidIndex_ReturnValue_1) == 0x000D5C, "Member 'NPC_Pawn_Parent_C_ExecuteUbergraph_NPC_Pawn_Parent::CallFunc_Array_IsValidIndex_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Parent_C_ExecuteUbergraph_NPC_Pawn_Parent, CallFunc_IsConverted_IsConverted) == 0x000D5D, "Member 'NPC_Pawn_Parent_C_ExecuteUbergraph_NPC_Pawn_Parent::CallFunc_IsConverted_IsConverted' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Parent_C_ExecuteUbergraph_NPC_Pawn_Parent, CallFunc_IsRenderCustomDepthEnabled_ReturnValue) == 0x000D5E, "Member 'NPC_Pawn_Parent_C_ExecuteUbergraph_NPC_Pawn_Parent::CallFunc_IsRenderCustomDepthEnabled_ReturnValue' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Parent_C_ExecuteUbergraph_NPC_Pawn_Parent, CallFunc_K2_SetTimerDelegate_ReturnValue_3) == 0x000D60, "Member 'NPC_Pawn_Parent_C_ExecuteUbergraph_NPC_Pawn_Parent::CallFunc_K2_SetTimerDelegate_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Parent_C_ExecuteUbergraph_NPC_Pawn_Parent, CallFunc_IsGameplayTagValid_ReturnValue_2) == 0x000D68, "Member 'NPC_Pawn_Parent_C_ExecuteUbergraph_NPC_Pawn_Parent::CallFunc_IsGameplayTagValid_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Parent_C_ExecuteUbergraph_NPC_Pawn_Parent, CallFunc_IsValid_ReturnValue_18) == 0x000D69, "Member 'NPC_Pawn_Parent_C_ExecuteUbergraph_NPC_Pawn_Parent::CallFunc_IsValid_ReturnValue_18' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Parent_C_ExecuteUbergraph_NPC_Pawn_Parent, CallFunc_CanActivateAbilityWithMatchingTag_ReturnValue) == 0x000D6A, "Member 'NPC_Pawn_Parent_C_ExecuteUbergraph_NPC_Pawn_Parent::CallFunc_CanActivateAbilityWithMatchingTag_ReturnValue' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Parent_C_ExecuteUbergraph_NPC_Pawn_Parent, CallFunc_TryActivateAbilitiesByTag_ReturnValue_2) == 0x000D6B, "Member 'NPC_Pawn_Parent_C_ExecuteUbergraph_NPC_Pawn_Parent::CallFunc_TryActivateAbilitiesByTag_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Parent_C_ExecuteUbergraph_NPC_Pawn_Parent, K2Node_SwitchEnum_CmpSuccess_4) == 0x000D6C, "Member 'NPC_Pawn_Parent_C_ExecuteUbergraph_NPC_Pawn_Parent::K2Node_SwitchEnum_CmpSuccess_4' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Parent_C_ExecuteUbergraph_NPC_Pawn_Parent, CallFunc_VLerp_ReturnValue) == 0x000D70, "Member 'NPC_Pawn_Parent_C_ExecuteUbergraph_NPC_Pawn_Parent::CallFunc_VLerp_ReturnValue' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Parent_C_ExecuteUbergraph_NPC_Pawn_Parent, K2Node_SwitchEnum_CmpSuccess_5) == 0x000D88, "Member 'NPC_Pawn_Parent_C_ExecuteUbergraph_NPC_Pawn_Parent::K2Node_SwitchEnum_CmpSuccess_5' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Parent_C_ExecuteUbergraph_NPC_Pawn_Parent, CallFunc_RemoveActiveGameplayEffect_ReturnValue_1) == 0x000D89, "Member 'NPC_Pawn_Parent_C_ExecuteUbergraph_NPC_Pawn_Parent::CallFunc_RemoveActiveGameplayEffect_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Parent_C_ExecuteUbergraph_NPC_Pawn_Parent, CallFunc_IsValid_ReturnValue_19) == 0x000D8A, "Member 'NPC_Pawn_Parent_C_ExecuteUbergraph_NPC_Pawn_Parent::CallFunc_IsValid_ReturnValue_19' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Parent_C_ExecuteUbergraph_NPC_Pawn_Parent, CallFunc_TryActivateAbilitiesByTag_ReturnValue_3) == 0x000D8B, "Member 'NPC_Pawn_Parent_C_ExecuteUbergraph_NPC_Pawn_Parent::CallFunc_TryActivateAbilitiesByTag_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Parent_C_ExecuteUbergraph_NPC_Pawn_Parent, CallFunc_NPC_GetScalableFloatHotfixValue_AsBool_9) == 0x000D8C, "Member 'NPC_Pawn_Parent_C_ExecuteUbergraph_NPC_Pawn_Parent::CallFunc_NPC_GetScalableFloatHotfixValue_AsBool_9' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Parent_C_ExecuteUbergraph_NPC_Pawn_Parent, CallFunc_NPC_GetScalableFloatHotfixValue_AsIntRounded_9) == 0x000D90, "Member 'NPC_Pawn_Parent_C_ExecuteUbergraph_NPC_Pawn_Parent::CallFunc_NPC_GetScalableFloatHotfixValue_AsIntRounded_9' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Parent_C_ExecuteUbergraph_NPC_Pawn_Parent, CallFunc_NPC_GetScalableFloatHotfixValue_AsFloat_9) == 0x000D98, "Member 'NPC_Pawn_Parent_C_ExecuteUbergraph_NPC_Pawn_Parent::CallFunc_NPC_GetScalableFloatHotfixValue_AsFloat_9' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Parent_C_ExecuteUbergraph_NPC_Pawn_Parent, CallFunc_Not_PreBool_ReturnValue_5) == 0x000DA0, "Member 'NPC_Pawn_Parent_C_ExecuteUbergraph_NPC_Pawn_Parent::CallFunc_Not_PreBool_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Parent_C_ExecuteUbergraph_NPC_Pawn_Parent, CallFunc_Greater_DoubleDouble_ReturnValue_2) == 0x000DA1, "Member 'NPC_Pawn_Parent_C_ExecuteUbergraph_NPC_Pawn_Parent::CallFunc_Greater_DoubleDouble_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Parent_C_ExecuteUbergraph_NPC_Pawn_Parent, CallFunc_BooleanAND_ReturnValue_7) == 0x000DA2, "Member 'NPC_Pawn_Parent_C_ExecuteUbergraph_NPC_Pawn_Parent::CallFunc_BooleanAND_ReturnValue_7' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Parent_C_ExecuteUbergraph_NPC_Pawn_Parent, CallFunc_NPC_GetScalableFloatHotfixValue_AsBool_10) == 0x000DA3, "Member 'NPC_Pawn_Parent_C_ExecuteUbergraph_NPC_Pawn_Parent::CallFunc_NPC_GetScalableFloatHotfixValue_AsBool_10' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Parent_C_ExecuteUbergraph_NPC_Pawn_Parent, CallFunc_NPC_GetScalableFloatHotfixValue_AsIntRounded_10) == 0x000DA4, "Member 'NPC_Pawn_Parent_C_ExecuteUbergraph_NPC_Pawn_Parent::CallFunc_NPC_GetScalableFloatHotfixValue_AsIntRounded_10' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Parent_C_ExecuteUbergraph_NPC_Pawn_Parent, CallFunc_NPC_GetScalableFloatHotfixValue_AsFloat_10) == 0x000DA8, "Member 'NPC_Pawn_Parent_C_ExecuteUbergraph_NPC_Pawn_Parent::CallFunc_NPC_GetScalableFloatHotfixValue_AsFloat_10' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Parent_C_ExecuteUbergraph_NPC_Pawn_Parent, CallFunc_IsValid_ReturnValue_20) == 0x000DB0, "Member 'NPC_Pawn_Parent_C_ExecuteUbergraph_NPC_Pawn_Parent::CallFunc_IsValid_ReturnValue_20' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Parent_C_ExecuteUbergraph_NPC_Pawn_Parent, CallFunc_GetGameTimeInSeconds_ReturnValue) == 0x000DB8, "Member 'NPC_Pawn_Parent_C_ExecuteUbergraph_NPC_Pawn_Parent::CallFunc_GetGameTimeInSeconds_ReturnValue' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Parent_C_ExecuteUbergraph_NPC_Pawn_Parent, CallFunc_Subtract_DoubleDouble_ReturnValue) == 0x000DC0, "Member 'NPC_Pawn_Parent_C_ExecuteUbergraph_NPC_Pawn_Parent::CallFunc_Subtract_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Parent_C_ExecuteUbergraph_NPC_Pawn_Parent, K2Node_CreateDelegate_OutputDelegate_7) == 0x000DC8, "Member 'NPC_Pawn_Parent_C_ExecuteUbergraph_NPC_Pawn_Parent::K2Node_CreateDelegate_OutputDelegate_7' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Parent_C_ExecuteUbergraph_NPC_Pawn_Parent, CallFunc_Subtract_DoubleDouble_ReturnValue_1) == 0x000DD8, "Member 'NPC_Pawn_Parent_C_ExecuteUbergraph_NPC_Pawn_Parent::CallFunc_Subtract_DoubleDouble_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Parent_C_ExecuteUbergraph_NPC_Pawn_Parent, CallFunc_Greater_DoubleDouble_ReturnValue_3) == 0x000DE0, "Member 'NPC_Pawn_Parent_C_ExecuteUbergraph_NPC_Pawn_Parent::CallFunc_Greater_DoubleDouble_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Parent_C_ExecuteUbergraph_NPC_Pawn_Parent, CallFunc_GetGameTimeInSeconds_ReturnValue_1) == 0x000DE8, "Member 'NPC_Pawn_Parent_C_ExecuteUbergraph_NPC_Pawn_Parent::CallFunc_GetGameTimeInSeconds_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Parent_C_ExecuteUbergraph_NPC_Pawn_Parent, CallFunc_Greater_DoubleDouble_ReturnValue_4) == 0x000DF0, "Member 'NPC_Pawn_Parent_C_ExecuteUbergraph_NPC_Pawn_Parent::CallFunc_Greater_DoubleDouble_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Parent_C_ExecuteUbergraph_NPC_Pawn_Parent, CallFunc_GetWorldSubsystem_ReturnValue) == 0x000DF8, "Member 'NPC_Pawn_Parent_C_ExecuteUbergraph_NPC_Pawn_Parent::CallFunc_GetWorldSubsystem_ReturnValue' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Parent_C_ExecuteUbergraph_NPC_Pawn_Parent, CallFunc_IsValid_ReturnValue_21) == 0x000E00, "Member 'NPC_Pawn_Parent_C_ExecuteUbergraph_NPC_Pawn_Parent::CallFunc_IsValid_ReturnValue_21' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Parent_C_ExecuteUbergraph_NPC_Pawn_Parent, CallFunc_IsValid_ReturnValue_22) == 0x000E01, "Member 'NPC_Pawn_Parent_C_ExecuteUbergraph_NPC_Pawn_Parent::CallFunc_IsValid_ReturnValue_22' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Parent_C_ExecuteUbergraph_NPC_Pawn_Parent, CallFunc_WasRecentlyRendered_ReturnValue) == 0x000E02, "Member 'NPC_Pawn_Parent_C_ExecuteUbergraph_NPC_Pawn_Parent::CallFunc_WasRecentlyRendered_ReturnValue' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Parent_C_ExecuteUbergraph_NPC_Pawn_Parent, CallFunc_Not_PreBool_ReturnValue_6) == 0x000E03, "Member 'NPC_Pawn_Parent_C_ExecuteUbergraph_NPC_Pawn_Parent::CallFunc_Not_PreBool_ReturnValue_6' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Parent_C_ExecuteUbergraph_NPC_Pawn_Parent, CallFunc_BooleanAND_ReturnValue_8) == 0x000E04, "Member 'NPC_Pawn_Parent_C_ExecuteUbergraph_NPC_Pawn_Parent::CallFunc_BooleanAND_ReturnValue_8' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Parent_C_ExecuteUbergraph_NPC_Pawn_Parent, CallFunc_Delay_Duration_ImplicitCast) == 0x000E08, "Member 'NPC_Pawn_Parent_C_ExecuteUbergraph_NPC_Pawn_Parent::CallFunc_Delay_Duration_ImplicitCast' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Parent_C_ExecuteUbergraph_NPC_Pawn_Parent, CallFunc_RandomFloatInRange_Min_ImplicitCast) == 0x000E10, "Member 'NPC_Pawn_Parent_C_ExecuteUbergraph_NPC_Pawn_Parent::CallFunc_RandomFloatInRange_Min_ImplicitCast' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Parent_C_ExecuteUbergraph_NPC_Pawn_Parent, CallFunc_RandomFloatInRange_Max_ImplicitCast) == 0x000E18, "Member 'NPC_Pawn_Parent_C_ExecuteUbergraph_NPC_Pawn_Parent::CallFunc_RandomFloatInRange_Max_ImplicitCast' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Parent_C_ExecuteUbergraph_NPC_Pawn_Parent, CallFunc_K2_SetTimerDelegate_Time_ImplicitCast) == 0x000E20, "Member 'NPC_Pawn_Parent_C_ExecuteUbergraph_NPC_Pawn_Parent::CallFunc_K2_SetTimerDelegate_Time_ImplicitCast' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Parent_C_ExecuteUbergraph_NPC_Pawn_Parent, CallFunc_Delay_Duration_ImplicitCast_1) == 0x000E24, "Member 'NPC_Pawn_Parent_C_ExecuteUbergraph_NPC_Pawn_Parent::CallFunc_Delay_Duration_ImplicitCast_1' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Parent_C_ExecuteUbergraph_NPC_Pawn_Parent, CallFunc_MakeGameplayCueParameters_RawMagnitude_ImplicitCast) == 0x000E28, "Member 'NPC_Pawn_Parent_C_ExecuteUbergraph_NPC_Pawn_Parent::CallFunc_MakeGameplayCueParameters_RawMagnitude_ImplicitCast' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Parent_C_ExecuteUbergraph_NPC_Pawn_Parent, CallFunc_K2_SetTimerDelegate_Time_ImplicitCast_1) == 0x000E2C, "Member 'NPC_Pawn_Parent_C_ExecuteUbergraph_NPC_Pawn_Parent::CallFunc_K2_SetTimerDelegate_Time_ImplicitCast_1' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Parent_C_ExecuteUbergraph_NPC_Pawn_Parent, CallFunc_K2_SetTimerDelegate_Time_ImplicitCast_2) == 0x000E30, "Member 'NPC_Pawn_Parent_C_ExecuteUbergraph_NPC_Pawn_Parent::CallFunc_K2_SetTimerDelegate_Time_ImplicitCast_2' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Parent_C_ExecuteUbergraph_NPC_Pawn_Parent, CallFunc_MakeGameplayCueParameters_RawMagnitude_ImplicitCast_1) == 0x000E34, "Member 'NPC_Pawn_Parent_C_ExecuteUbergraph_NPC_Pawn_Parent::CallFunc_MakeGameplayCueParameters_RawMagnitude_ImplicitCast_1' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Parent_C_ExecuteUbergraph_NPC_Pawn_Parent, CallFunc_K2_SetTimer_Time_ImplicitCast) == 0x000E38, "Member 'NPC_Pawn_Parent_C_ExecuteUbergraph_NPC_Pawn_Parent::CallFunc_K2_SetTimer_Time_ImplicitCast' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Parent_C_ExecuteUbergraph_NPC_Pawn_Parent, CallFunc_K2_SetTimerDelegate_Time_ImplicitCast_3) == 0x000E3C, "Member 'NPC_Pawn_Parent_C_ExecuteUbergraph_NPC_Pawn_Parent::CallFunc_K2_SetTimerDelegate_Time_ImplicitCast_3' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Parent_C_ExecuteUbergraph_NPC_Pawn_Parent, CallFunc_Update_DeltaTime_ImplicitCast) == 0x000E40, "Member 'NPC_Pawn_Parent_C_ExecuteUbergraph_NPC_Pawn_Parent::CallFunc_Update_DeltaTime_ImplicitCast' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Parent_C_ExecuteUbergraph_NPC_Pawn_Parent, CallFunc_Delay_Duration_ImplicitCast_2) == 0x000E44, "Member 'NPC_Pawn_Parent_C_ExecuteUbergraph_NPC_Pawn_Parent::CallFunc_Delay_Duration_ImplicitCast_2' has a wrong offset!");

struct NPC_Pawn_Parent_C_GetSoundFoleyLibrary final
{
public:
	class USoundLibrary*                          CallFunc_Array_Get_Item;
	bool                                          CallFunc_NotEqual_ObjectObject_ReturnValue;
	uint8                                         Pad_9[0x7];
	class USoundLibrary*                          CallFunc_Array_Get_Item_1;
	class USoundLibrarySubsystem*                 CallFunc_GetWorldSubsystem_ReturnValue;
	class USoundLibrarySubsystem*                 CallFunc_GetWorldSubsystem_ReturnValue_1;
	bool                                          CallFunc_IsValid_ReturnValue;
	uint8                                         Pad_29[0x7];
	class USoundLibrary*                          CallFunc_Array_Get_Item_2;
	class USoundLibrarySubsystem*                 CallFunc_GetWorldSubsystem_ReturnValue_2;
	class USoundLibrary*                          CallFunc_Array_Get_Item_3;
	bool                                          CallFunc_NotEqual_ObjectObject_ReturnValue_1;
	bool                                          CallFunc_Array_IsValidIndex_ReturnValue;
};
static_assert(alignof(NPC_Pawn_Parent_C_GetSoundFoleyLibrary) == 0x000008, "Wrong alignment on NPC_Pawn_Parent_C_GetSoundFoleyLibrary");
static_assert(sizeof(NPC_Pawn_Parent_C_GetSoundFoleyLibrary) == 0x000050, "Wrong size on NPC_Pawn_Parent_C_GetSoundFoleyLibrary");
static_assert(offsetof(NPC_Pawn_Parent_C_GetSoundFoleyLibrary, CallFunc_Array_Get_Item) == 0x000000, "Member 'NPC_Pawn_Parent_C_GetSoundFoleyLibrary::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Parent_C_GetSoundFoleyLibrary, CallFunc_NotEqual_ObjectObject_ReturnValue) == 0x000008, "Member 'NPC_Pawn_Parent_C_GetSoundFoleyLibrary::CallFunc_NotEqual_ObjectObject_ReturnValue' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Parent_C_GetSoundFoleyLibrary, CallFunc_Array_Get_Item_1) == 0x000010, "Member 'NPC_Pawn_Parent_C_GetSoundFoleyLibrary::CallFunc_Array_Get_Item_1' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Parent_C_GetSoundFoleyLibrary, CallFunc_GetWorldSubsystem_ReturnValue) == 0x000018, "Member 'NPC_Pawn_Parent_C_GetSoundFoleyLibrary::CallFunc_GetWorldSubsystem_ReturnValue' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Parent_C_GetSoundFoleyLibrary, CallFunc_GetWorldSubsystem_ReturnValue_1) == 0x000020, "Member 'NPC_Pawn_Parent_C_GetSoundFoleyLibrary::CallFunc_GetWorldSubsystem_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Parent_C_GetSoundFoleyLibrary, CallFunc_IsValid_ReturnValue) == 0x000028, "Member 'NPC_Pawn_Parent_C_GetSoundFoleyLibrary::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Parent_C_GetSoundFoleyLibrary, CallFunc_Array_Get_Item_2) == 0x000030, "Member 'NPC_Pawn_Parent_C_GetSoundFoleyLibrary::CallFunc_Array_Get_Item_2' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Parent_C_GetSoundFoleyLibrary, CallFunc_GetWorldSubsystem_ReturnValue_2) == 0x000038, "Member 'NPC_Pawn_Parent_C_GetSoundFoleyLibrary::CallFunc_GetWorldSubsystem_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Parent_C_GetSoundFoleyLibrary, CallFunc_Array_Get_Item_3) == 0x000040, "Member 'NPC_Pawn_Parent_C_GetSoundFoleyLibrary::CallFunc_Array_Get_Item_3' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Parent_C_GetSoundFoleyLibrary, CallFunc_NotEqual_ObjectObject_ReturnValue_1) == 0x000048, "Member 'NPC_Pawn_Parent_C_GetSoundFoleyLibrary::CallFunc_NotEqual_ObjectObject_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Parent_C_GetSoundFoleyLibrary, CallFunc_Array_IsValidIndex_ReturnValue) == 0x000049, "Member 'NPC_Pawn_Parent_C_GetSoundFoleyLibrary::CallFunc_Array_IsValidIndex_ReturnValue' has a wrong offset!");

struct NPC_Pawn_Parent_C_IsConverted final
{
public:
	bool                                          IsConverted_0;
	uint8                                         Pad_1[0x7];
	class UFortPawnComponent_Convert*             CallFunc_GetComponentByClass_ReturnValue;
	class AFortPlayerPawn*                        CallFunc_GetConverterPawn_ReturnValue;
	bool                                          CallFunc_IsValid_ReturnValue;
	bool                                          CallFunc_IsValid_ReturnValue_1;
};
static_assert(alignof(NPC_Pawn_Parent_C_IsConverted) == 0x000008, "Wrong alignment on NPC_Pawn_Parent_C_IsConverted");
static_assert(sizeof(NPC_Pawn_Parent_C_IsConverted) == 0x000020, "Wrong size on NPC_Pawn_Parent_C_IsConverted");
static_assert(offsetof(NPC_Pawn_Parent_C_IsConverted, IsConverted_0) == 0x000000, "Member 'NPC_Pawn_Parent_C_IsConverted::IsConverted_0' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Parent_C_IsConverted, CallFunc_GetComponentByClass_ReturnValue) == 0x000008, "Member 'NPC_Pawn_Parent_C_IsConverted::CallFunc_GetComponentByClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Parent_C_IsConverted, CallFunc_GetConverterPawn_ReturnValue) == 0x000010, "Member 'NPC_Pawn_Parent_C_IsConverted::CallFunc_GetConverterPawn_ReturnValue' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Parent_C_IsConverted, CallFunc_IsValid_ReturnValue) == 0x000018, "Member 'NPC_Pawn_Parent_C_IsConverted::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Parent_C_IsConverted, CallFunc_IsValid_ReturnValue_1) == 0x000019, "Member 'NPC_Pawn_Parent_C_IsConverted::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");

struct NPC_Pawn_Parent_C_LuredOnServer final
{
public:
	Enum_NPC_AlertLevel                           AlertLevel;
};
static_assert(alignof(NPC_Pawn_Parent_C_LuredOnServer) == 0x000001, "Wrong alignment on NPC_Pawn_Parent_C_LuredOnServer");
static_assert(sizeof(NPC_Pawn_Parent_C_LuredOnServer) == 0x000001, "Wrong size on NPC_Pawn_Parent_C_LuredOnServer");
static_assert(offsetof(NPC_Pawn_Parent_C_LuredOnServer, AlertLevel) == 0x000000, "Member 'NPC_Pawn_Parent_C_LuredOnServer::AlertLevel' has a wrong offset!");

struct NPC_Pawn_Parent_C_NPC_AlertLevelChangedServer final
{
public:
	Enum_NPC_AlertLevel                           NPCAlertLevel;
};
static_assert(alignof(NPC_Pawn_Parent_C_NPC_AlertLevelChangedServer) == 0x000001, "Wrong alignment on NPC_Pawn_Parent_C_NPC_AlertLevelChangedServer");
static_assert(sizeof(NPC_Pawn_Parent_C_NPC_AlertLevelChangedServer) == 0x000001, "Wrong size on NPC_Pawn_Parent_C_NPC_AlertLevelChangedServer");
static_assert(offsetof(NPC_Pawn_Parent_C_NPC_AlertLevelChangedServer, NPCAlertLevel) == 0x000000, "Member 'NPC_Pawn_Parent_C_NPC_AlertLevelChangedServer::NPCAlertLevel' has a wrong offset!");

struct NPC_Pawn_Parent_C_NPC_ApplyGameplayEffectWithMMRScaling final
{
public:
	class AActor*                                 Actor;
	class UClass*                                 GE_Class;
	class AActor*                                 ApplyGeToThisActor;
	bool                                          Temp_bool_Option_B___If_false__use_Option_A_Variable;
	bool                                          CallFunc_IsValid_ReturnValue;
	bool                                          Temp_bool_Variable;
	uint8                                         Pad_1B[0x5];
	class AActor*                                 K2Node_Select_Default;
};
static_assert(alignof(NPC_Pawn_Parent_C_NPC_ApplyGameplayEffectWithMMRScaling) == 0x000008, "Wrong alignment on NPC_Pawn_Parent_C_NPC_ApplyGameplayEffectWithMMRScaling");
static_assert(sizeof(NPC_Pawn_Parent_C_NPC_ApplyGameplayEffectWithMMRScaling) == 0x000028, "Wrong size on NPC_Pawn_Parent_C_NPC_ApplyGameplayEffectWithMMRScaling");
static_assert(offsetof(NPC_Pawn_Parent_C_NPC_ApplyGameplayEffectWithMMRScaling, Actor) == 0x000000, "Member 'NPC_Pawn_Parent_C_NPC_ApplyGameplayEffectWithMMRScaling::Actor' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Parent_C_NPC_ApplyGameplayEffectWithMMRScaling, GE_Class) == 0x000008, "Member 'NPC_Pawn_Parent_C_NPC_ApplyGameplayEffectWithMMRScaling::GE_Class' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Parent_C_NPC_ApplyGameplayEffectWithMMRScaling, ApplyGeToThisActor) == 0x000010, "Member 'NPC_Pawn_Parent_C_NPC_ApplyGameplayEffectWithMMRScaling::ApplyGeToThisActor' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Parent_C_NPC_ApplyGameplayEffectWithMMRScaling, Temp_bool_Option_B___If_false__use_Option_A_Variable) == 0x000018, "Member 'NPC_Pawn_Parent_C_NPC_ApplyGameplayEffectWithMMRScaling::Temp_bool_Option_B___If_false__use_Option_A_Variable' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Parent_C_NPC_ApplyGameplayEffectWithMMRScaling, CallFunc_IsValid_ReturnValue) == 0x000019, "Member 'NPC_Pawn_Parent_C_NPC_ApplyGameplayEffectWithMMRScaling::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Parent_C_NPC_ApplyGameplayEffectWithMMRScaling, Temp_bool_Variable) == 0x00001A, "Member 'NPC_Pawn_Parent_C_NPC_ApplyGameplayEffectWithMMRScaling::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Parent_C_NPC_ApplyGameplayEffectWithMMRScaling, K2Node_Select_Default) == 0x000020, "Member 'NPC_Pawn_Parent_C_NPC_ApplyGameplayEffectWithMMRScaling::K2Node_Select_Default' has a wrong offset!");

struct NPC_Pawn_Parent_C_NPC_ApplyRecentlyDamagedTagGE final
{
public:
	class UClass*                                 RecentlyDamagedOverride;
	bool                                          CallFunc_HasAuthority_ReturnValue;
	bool                                          CallFunc_IsValidClass_ReturnValue;
	bool                                          CallFunc_IsValidClass_ReturnValue_1;
	bool                                          CallFunc_IsValid_ReturnValue;
	struct FActiveGameplayEffectHandle            CallFunc_BP_ApplyGameplayEffectToTarget_ReturnValue;
	struct FActiveGameplayEffectHandle            CallFunc_BP_ApplyGameplayEffectToTarget_ReturnValue_1;
};
static_assert(alignof(NPC_Pawn_Parent_C_NPC_ApplyRecentlyDamagedTagGE) == 0x000008, "Wrong alignment on NPC_Pawn_Parent_C_NPC_ApplyRecentlyDamagedTagGE");
static_assert(sizeof(NPC_Pawn_Parent_C_NPC_ApplyRecentlyDamagedTagGE) == 0x000020, "Wrong size on NPC_Pawn_Parent_C_NPC_ApplyRecentlyDamagedTagGE");
static_assert(offsetof(NPC_Pawn_Parent_C_NPC_ApplyRecentlyDamagedTagGE, RecentlyDamagedOverride) == 0x000000, "Member 'NPC_Pawn_Parent_C_NPC_ApplyRecentlyDamagedTagGE::RecentlyDamagedOverride' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Parent_C_NPC_ApplyRecentlyDamagedTagGE, CallFunc_HasAuthority_ReturnValue) == 0x000008, "Member 'NPC_Pawn_Parent_C_NPC_ApplyRecentlyDamagedTagGE::CallFunc_HasAuthority_ReturnValue' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Parent_C_NPC_ApplyRecentlyDamagedTagGE, CallFunc_IsValidClass_ReturnValue) == 0x000009, "Member 'NPC_Pawn_Parent_C_NPC_ApplyRecentlyDamagedTagGE::CallFunc_IsValidClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Parent_C_NPC_ApplyRecentlyDamagedTagGE, CallFunc_IsValidClass_ReturnValue_1) == 0x00000A, "Member 'NPC_Pawn_Parent_C_NPC_ApplyRecentlyDamagedTagGE::CallFunc_IsValidClass_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Parent_C_NPC_ApplyRecentlyDamagedTagGE, CallFunc_IsValid_ReturnValue) == 0x00000B, "Member 'NPC_Pawn_Parent_C_NPC_ApplyRecentlyDamagedTagGE::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Parent_C_NPC_ApplyRecentlyDamagedTagGE, CallFunc_BP_ApplyGameplayEffectToTarget_ReturnValue) == 0x00000C, "Member 'NPC_Pawn_Parent_C_NPC_ApplyRecentlyDamagedTagGE::CallFunc_BP_ApplyGameplayEffectToTarget_ReturnValue' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Parent_C_NPC_ApplyRecentlyDamagedTagGE, CallFunc_BP_ApplyGameplayEffectToTarget_ReturnValue_1) == 0x000014, "Member 'NPC_Pawn_Parent_C_NPC_ApplyRecentlyDamagedTagGE::CallFunc_BP_ApplyGameplayEffectToTarget_ReturnValue_1' has a wrong offset!");

struct NPC_Pawn_Parent_C_NPC_AttemptToSetLeader final
{
public:
	class AActor*                                 PossibleLeader;
	EUnconvertReason                              UnconvertReason;
	bool                                          CallFunc_NPC_SetLeader_Success_;
	uint8                                         Pad_A[0x6];
	class AActor*                                 CallFunc_NPC_SetLeader_LeaderSet;
};
static_assert(alignof(NPC_Pawn_Parent_C_NPC_AttemptToSetLeader) == 0x000008, "Wrong alignment on NPC_Pawn_Parent_C_NPC_AttemptToSetLeader");
static_assert(sizeof(NPC_Pawn_Parent_C_NPC_AttemptToSetLeader) == 0x000018, "Wrong size on NPC_Pawn_Parent_C_NPC_AttemptToSetLeader");
static_assert(offsetof(NPC_Pawn_Parent_C_NPC_AttemptToSetLeader, PossibleLeader) == 0x000000, "Member 'NPC_Pawn_Parent_C_NPC_AttemptToSetLeader::PossibleLeader' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Parent_C_NPC_AttemptToSetLeader, UnconvertReason) == 0x000008, "Member 'NPC_Pawn_Parent_C_NPC_AttemptToSetLeader::UnconvertReason' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Parent_C_NPC_AttemptToSetLeader, CallFunc_NPC_SetLeader_Success_) == 0x000009, "Member 'NPC_Pawn_Parent_C_NPC_AttemptToSetLeader::CallFunc_NPC_SetLeader_Success_' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Parent_C_NPC_AttemptToSetLeader, CallFunc_NPC_SetLeader_LeaderSet) == 0x000010, "Member 'NPC_Pawn_Parent_C_NPC_AttemptToSetLeader::CallFunc_NPC_SetLeader_LeaderSet' has a wrong offset!");

struct NPC_Pawn_Parent_C_NPC_CanBeInteractedWith final
{
public:
	bool                                          CanInteract;
};
static_assert(alignof(NPC_Pawn_Parent_C_NPC_CanBeInteractedWith) == 0x000001, "Wrong alignment on NPC_Pawn_Parent_C_NPC_CanBeInteractedWith");
static_assert(sizeof(NPC_Pawn_Parent_C_NPC_CanBeInteractedWith) == 0x000001, "Wrong size on NPC_Pawn_Parent_C_NPC_CanBeInteractedWith");
static_assert(offsetof(NPC_Pawn_Parent_C_NPC_CanBeInteractedWith, CanInteract) == 0x000000, "Member 'NPC_Pawn_Parent_C_NPC_CanBeInteractedWith::CanInteract' has a wrong offset!");

struct NPC_Pawn_Parent_C_NPC_CheckForDespawnIfStaleToPlayers final
{
public:
	class AFortPlayerPawn*                        ClosestFortPlayerPawn;
	bool                                          CallFunc_IsValid_ReturnValue;
	bool                                          CallFunc_NPC_GetScalableFloatHotfixValue_AsBool;
	uint8                                         Pad_A[0x2];
	int32                                         CallFunc_NPC_GetScalableFloatHotfixValue_AsIntRounded;
	double                                        CallFunc_NPC_GetScalableFloatHotfixValue_AsFloat;
	bool                                          CallFunc_Greater_DoubleDouble_ReturnValue;
	bool                                          CallFunc_NPC_GetScalableFloatHotfixValue_AsBool_1;
	uint8                                         Pad_1A[0x2];
	int32                                         CallFunc_NPC_GetScalableFloatHotfixValue_AsIntRounded_1;
	double                                        CallFunc_NPC_GetScalableFloatHotfixValue_AsFloat_1;
	bool                                          CallFunc_Greater_DoubleDouble_ReturnValue_1;
	bool                                          CallFunc_Greater_DoubleDouble_ReturnValue_2;
	bool                                          CallFunc_BooleanAND_ReturnValue;
	uint8                                         Pad_2B[0x5];
	double                                        CallFunc_GetGameTimeInSeconds_ReturnValue;
	double                                        CallFunc_GetGameTimeInSeconds_ReturnValue_1;
	double                                        CallFunc_Subtract_DoubleDouble_ReturnValue;
	bool                                          CallFunc_Greater_DoubleDouble_ReturnValue_3;
	uint8                                         Pad_49[0x7];
	double                                        CallFunc_GetDistanceBetweenActors_Distance;
	bool                                          CallFunc_Greater_DoubleDouble_ReturnValue_4;
};
static_assert(alignof(NPC_Pawn_Parent_C_NPC_CheckForDespawnIfStaleToPlayers) == 0x000008, "Wrong alignment on NPC_Pawn_Parent_C_NPC_CheckForDespawnIfStaleToPlayers");
static_assert(sizeof(NPC_Pawn_Parent_C_NPC_CheckForDespawnIfStaleToPlayers) == 0x000060, "Wrong size on NPC_Pawn_Parent_C_NPC_CheckForDespawnIfStaleToPlayers");
static_assert(offsetof(NPC_Pawn_Parent_C_NPC_CheckForDespawnIfStaleToPlayers, ClosestFortPlayerPawn) == 0x000000, "Member 'NPC_Pawn_Parent_C_NPC_CheckForDespawnIfStaleToPlayers::ClosestFortPlayerPawn' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Parent_C_NPC_CheckForDespawnIfStaleToPlayers, CallFunc_IsValid_ReturnValue) == 0x000008, "Member 'NPC_Pawn_Parent_C_NPC_CheckForDespawnIfStaleToPlayers::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Parent_C_NPC_CheckForDespawnIfStaleToPlayers, CallFunc_NPC_GetScalableFloatHotfixValue_AsBool) == 0x000009, "Member 'NPC_Pawn_Parent_C_NPC_CheckForDespawnIfStaleToPlayers::CallFunc_NPC_GetScalableFloatHotfixValue_AsBool' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Parent_C_NPC_CheckForDespawnIfStaleToPlayers, CallFunc_NPC_GetScalableFloatHotfixValue_AsIntRounded) == 0x00000C, "Member 'NPC_Pawn_Parent_C_NPC_CheckForDespawnIfStaleToPlayers::CallFunc_NPC_GetScalableFloatHotfixValue_AsIntRounded' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Parent_C_NPC_CheckForDespawnIfStaleToPlayers, CallFunc_NPC_GetScalableFloatHotfixValue_AsFloat) == 0x000010, "Member 'NPC_Pawn_Parent_C_NPC_CheckForDespawnIfStaleToPlayers::CallFunc_NPC_GetScalableFloatHotfixValue_AsFloat' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Parent_C_NPC_CheckForDespawnIfStaleToPlayers, CallFunc_Greater_DoubleDouble_ReturnValue) == 0x000018, "Member 'NPC_Pawn_Parent_C_NPC_CheckForDespawnIfStaleToPlayers::CallFunc_Greater_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Parent_C_NPC_CheckForDespawnIfStaleToPlayers, CallFunc_NPC_GetScalableFloatHotfixValue_AsBool_1) == 0x000019, "Member 'NPC_Pawn_Parent_C_NPC_CheckForDespawnIfStaleToPlayers::CallFunc_NPC_GetScalableFloatHotfixValue_AsBool_1' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Parent_C_NPC_CheckForDespawnIfStaleToPlayers, CallFunc_NPC_GetScalableFloatHotfixValue_AsIntRounded_1) == 0x00001C, "Member 'NPC_Pawn_Parent_C_NPC_CheckForDespawnIfStaleToPlayers::CallFunc_NPC_GetScalableFloatHotfixValue_AsIntRounded_1' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Parent_C_NPC_CheckForDespawnIfStaleToPlayers, CallFunc_NPC_GetScalableFloatHotfixValue_AsFloat_1) == 0x000020, "Member 'NPC_Pawn_Parent_C_NPC_CheckForDespawnIfStaleToPlayers::CallFunc_NPC_GetScalableFloatHotfixValue_AsFloat_1' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Parent_C_NPC_CheckForDespawnIfStaleToPlayers, CallFunc_Greater_DoubleDouble_ReturnValue_1) == 0x000028, "Member 'NPC_Pawn_Parent_C_NPC_CheckForDespawnIfStaleToPlayers::CallFunc_Greater_DoubleDouble_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Parent_C_NPC_CheckForDespawnIfStaleToPlayers, CallFunc_Greater_DoubleDouble_ReturnValue_2) == 0x000029, "Member 'NPC_Pawn_Parent_C_NPC_CheckForDespawnIfStaleToPlayers::CallFunc_Greater_DoubleDouble_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Parent_C_NPC_CheckForDespawnIfStaleToPlayers, CallFunc_BooleanAND_ReturnValue) == 0x00002A, "Member 'NPC_Pawn_Parent_C_NPC_CheckForDespawnIfStaleToPlayers::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Parent_C_NPC_CheckForDespawnIfStaleToPlayers, CallFunc_GetGameTimeInSeconds_ReturnValue) == 0x000030, "Member 'NPC_Pawn_Parent_C_NPC_CheckForDespawnIfStaleToPlayers::CallFunc_GetGameTimeInSeconds_ReturnValue' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Parent_C_NPC_CheckForDespawnIfStaleToPlayers, CallFunc_GetGameTimeInSeconds_ReturnValue_1) == 0x000038, "Member 'NPC_Pawn_Parent_C_NPC_CheckForDespawnIfStaleToPlayers::CallFunc_GetGameTimeInSeconds_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Parent_C_NPC_CheckForDespawnIfStaleToPlayers, CallFunc_Subtract_DoubleDouble_ReturnValue) == 0x000040, "Member 'NPC_Pawn_Parent_C_NPC_CheckForDespawnIfStaleToPlayers::CallFunc_Subtract_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Parent_C_NPC_CheckForDespawnIfStaleToPlayers, CallFunc_Greater_DoubleDouble_ReturnValue_3) == 0x000048, "Member 'NPC_Pawn_Parent_C_NPC_CheckForDespawnIfStaleToPlayers::CallFunc_Greater_DoubleDouble_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Parent_C_NPC_CheckForDespawnIfStaleToPlayers, CallFunc_GetDistanceBetweenActors_Distance) == 0x000050, "Member 'NPC_Pawn_Parent_C_NPC_CheckForDespawnIfStaleToPlayers::CallFunc_GetDistanceBetweenActors_Distance' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Parent_C_NPC_CheckForDespawnIfStaleToPlayers, CallFunc_Greater_DoubleDouble_ReturnValue_4) == 0x000058, "Member 'NPC_Pawn_Parent_C_NPC_CheckForDespawnIfStaleToPlayers::CallFunc_Greater_DoubleDouble_ReturnValue_4' has a wrong offset!");

struct NPC_Pawn_Parent_C_NPC_CheckIsInSafeZone final
{
public:
	bool                                          TestSucceeded;
	bool                                          isInSafeZone;
	uint8                                         Pad_2[0x6];
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue;
	class AGameStateBase*                         CallFunc_GetGameState_ReturnValue;
	class AAthena_GameState_C*                    K2Node_DynamicCast_AsAthena_Game_State;
	bool                                          K2Node_DynamicCast_bSuccess;
	uint8                                         Pad_31[0x7];
	class AFortSafeZoneIndicator*                 CallFunc_GetSafeZoneIndicator_ReturnValue;
	struct FVector                                CallFunc_GetSafeZoneCenter_ReturnValue;
	bool                                          CallFunc_IsValid_ReturnValue;
	uint8                                         Pad_59[0x7];
	double                                        CallFunc_Vector_Distance2DSquared_ReturnValue;
	float                                         CallFunc_GetSafeZoneRadius_ReturnValue;
	uint8                                         Pad_6C[0x4];
	double                                        CallFunc_Square_ReturnValue;
	bool                                          CallFunc_Less_DoubleDouble_ReturnValue;
	uint8                                         Pad_79[0x7];
	double                                        CallFunc_Square_A_ImplicitCast;
};
static_assert(alignof(NPC_Pawn_Parent_C_NPC_CheckIsInSafeZone) == 0x000008, "Wrong alignment on NPC_Pawn_Parent_C_NPC_CheckIsInSafeZone");
static_assert(sizeof(NPC_Pawn_Parent_C_NPC_CheckIsInSafeZone) == 0x000088, "Wrong size on NPC_Pawn_Parent_C_NPC_CheckIsInSafeZone");
static_assert(offsetof(NPC_Pawn_Parent_C_NPC_CheckIsInSafeZone, TestSucceeded) == 0x000000, "Member 'NPC_Pawn_Parent_C_NPC_CheckIsInSafeZone::TestSucceeded' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Parent_C_NPC_CheckIsInSafeZone, isInSafeZone) == 0x000001, "Member 'NPC_Pawn_Parent_C_NPC_CheckIsInSafeZone::isInSafeZone' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Parent_C_NPC_CheckIsInSafeZone, CallFunc_K2_GetActorLocation_ReturnValue) == 0x000008, "Member 'NPC_Pawn_Parent_C_NPC_CheckIsInSafeZone::CallFunc_K2_GetActorLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Parent_C_NPC_CheckIsInSafeZone, CallFunc_GetGameState_ReturnValue) == 0x000020, "Member 'NPC_Pawn_Parent_C_NPC_CheckIsInSafeZone::CallFunc_GetGameState_ReturnValue' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Parent_C_NPC_CheckIsInSafeZone, K2Node_DynamicCast_AsAthena_Game_State) == 0x000028, "Member 'NPC_Pawn_Parent_C_NPC_CheckIsInSafeZone::K2Node_DynamicCast_AsAthena_Game_State' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Parent_C_NPC_CheckIsInSafeZone, K2Node_DynamicCast_bSuccess) == 0x000030, "Member 'NPC_Pawn_Parent_C_NPC_CheckIsInSafeZone::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Parent_C_NPC_CheckIsInSafeZone, CallFunc_GetSafeZoneIndicator_ReturnValue) == 0x000038, "Member 'NPC_Pawn_Parent_C_NPC_CheckIsInSafeZone::CallFunc_GetSafeZoneIndicator_ReturnValue' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Parent_C_NPC_CheckIsInSafeZone, CallFunc_GetSafeZoneCenter_ReturnValue) == 0x000040, "Member 'NPC_Pawn_Parent_C_NPC_CheckIsInSafeZone::CallFunc_GetSafeZoneCenter_ReturnValue' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Parent_C_NPC_CheckIsInSafeZone, CallFunc_IsValid_ReturnValue) == 0x000058, "Member 'NPC_Pawn_Parent_C_NPC_CheckIsInSafeZone::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Parent_C_NPC_CheckIsInSafeZone, CallFunc_Vector_Distance2DSquared_ReturnValue) == 0x000060, "Member 'NPC_Pawn_Parent_C_NPC_CheckIsInSafeZone::CallFunc_Vector_Distance2DSquared_ReturnValue' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Parent_C_NPC_CheckIsInSafeZone, CallFunc_GetSafeZoneRadius_ReturnValue) == 0x000068, "Member 'NPC_Pawn_Parent_C_NPC_CheckIsInSafeZone::CallFunc_GetSafeZoneRadius_ReturnValue' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Parent_C_NPC_CheckIsInSafeZone, CallFunc_Square_ReturnValue) == 0x000070, "Member 'NPC_Pawn_Parent_C_NPC_CheckIsInSafeZone::CallFunc_Square_ReturnValue' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Parent_C_NPC_CheckIsInSafeZone, CallFunc_Less_DoubleDouble_ReturnValue) == 0x000078, "Member 'NPC_Pawn_Parent_C_NPC_CheckIsInSafeZone::CallFunc_Less_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Parent_C_NPC_CheckIsInSafeZone, CallFunc_Square_A_ImplicitCast) == 0x000080, "Member 'NPC_Pawn_Parent_C_NPC_CheckIsInSafeZone::CallFunc_Square_A_ImplicitCast' has a wrong offset!");

struct NPC_Pawn_Parent_C_NPC_ClearOutTargetSlots final
{
public:
	struct FGameplayTagContainer                  CallFunc_MakeLiteralGameplayTagContainer_ReturnValue;
	TScriptInterface<class IGameplayTagAssetInterface> CallFunc_GetOwnedGameplayTags_self_CastInput;
	struct FGameplayTagContainer                  CallFunc_GetOwnedGameplayTags_TagContainer;
	bool                                          CallFunc_HasTag_ReturnValue;
	bool                                          CallFunc_HasTag_ReturnValue_1;
	bool                                          CallFunc_HasAnyTags_ReturnValue;
};
static_assert(alignof(NPC_Pawn_Parent_C_NPC_ClearOutTargetSlots) == 0x000008, "Wrong alignment on NPC_Pawn_Parent_C_NPC_ClearOutTargetSlots");
static_assert(sizeof(NPC_Pawn_Parent_C_NPC_ClearOutTargetSlots) == 0x000058, "Wrong size on NPC_Pawn_Parent_C_NPC_ClearOutTargetSlots");
static_assert(offsetof(NPC_Pawn_Parent_C_NPC_ClearOutTargetSlots, CallFunc_MakeLiteralGameplayTagContainer_ReturnValue) == 0x000000, "Member 'NPC_Pawn_Parent_C_NPC_ClearOutTargetSlots::CallFunc_MakeLiteralGameplayTagContainer_ReturnValue' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Parent_C_NPC_ClearOutTargetSlots, CallFunc_GetOwnedGameplayTags_self_CastInput) == 0x000020, "Member 'NPC_Pawn_Parent_C_NPC_ClearOutTargetSlots::CallFunc_GetOwnedGameplayTags_self_CastInput' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Parent_C_NPC_ClearOutTargetSlots, CallFunc_GetOwnedGameplayTags_TagContainer) == 0x000030, "Member 'NPC_Pawn_Parent_C_NPC_ClearOutTargetSlots::CallFunc_GetOwnedGameplayTags_TagContainer' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Parent_C_NPC_ClearOutTargetSlots, CallFunc_HasTag_ReturnValue) == 0x000050, "Member 'NPC_Pawn_Parent_C_NPC_ClearOutTargetSlots::CallFunc_HasTag_ReturnValue' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Parent_C_NPC_ClearOutTargetSlots, CallFunc_HasTag_ReturnValue_1) == 0x000051, "Member 'NPC_Pawn_Parent_C_NPC_ClearOutTargetSlots::CallFunc_HasTag_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Parent_C_NPC_ClearOutTargetSlots, CallFunc_HasAnyTags_ReturnValue) == 0x000052, "Member 'NPC_Pawn_Parent_C_NPC_ClearOutTargetSlots::CallFunc_HasAnyTags_ReturnValue' has a wrong offset!");

struct NPC_Pawn_Parent_C_NPC_DamageAttemptDisableIntroPhaseBehavior final
{
public:
	struct FGameplayTagContainer                  DamageTags;
	bool                                          CallFunc_HasAuthority_ReturnValue;
	bool                                          CallFunc_DoesContainerMatchTagQuery_ReturnValue;
	bool                                          CallFunc_IsTagQueryEmpty_ReturnValue;
	bool                                          CallFunc_Not_PreBool_ReturnValue;
};
static_assert(alignof(NPC_Pawn_Parent_C_NPC_DamageAttemptDisableIntroPhaseBehavior) == 0x000008, "Wrong alignment on NPC_Pawn_Parent_C_NPC_DamageAttemptDisableIntroPhaseBehavior");
static_assert(sizeof(NPC_Pawn_Parent_C_NPC_DamageAttemptDisableIntroPhaseBehavior) == 0x000028, "Wrong size on NPC_Pawn_Parent_C_NPC_DamageAttemptDisableIntroPhaseBehavior");
static_assert(offsetof(NPC_Pawn_Parent_C_NPC_DamageAttemptDisableIntroPhaseBehavior, DamageTags) == 0x000000, "Member 'NPC_Pawn_Parent_C_NPC_DamageAttemptDisableIntroPhaseBehavior::DamageTags' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Parent_C_NPC_DamageAttemptDisableIntroPhaseBehavior, CallFunc_HasAuthority_ReturnValue) == 0x000020, "Member 'NPC_Pawn_Parent_C_NPC_DamageAttemptDisableIntroPhaseBehavior::CallFunc_HasAuthority_ReturnValue' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Parent_C_NPC_DamageAttemptDisableIntroPhaseBehavior, CallFunc_DoesContainerMatchTagQuery_ReturnValue) == 0x000021, "Member 'NPC_Pawn_Parent_C_NPC_DamageAttemptDisableIntroPhaseBehavior::CallFunc_DoesContainerMatchTagQuery_ReturnValue' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Parent_C_NPC_DamageAttemptDisableIntroPhaseBehavior, CallFunc_IsTagQueryEmpty_ReturnValue) == 0x000022, "Member 'NPC_Pawn_Parent_C_NPC_DamageAttemptDisableIntroPhaseBehavior::CallFunc_IsTagQueryEmpty_ReturnValue' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Parent_C_NPC_DamageAttemptDisableIntroPhaseBehavior, CallFunc_Not_PreBool_ReturnValue) == 0x000023, "Member 'NPC_Pawn_Parent_C_NPC_DamageAttemptDisableIntroPhaseBehavior::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");

struct NPC_Pawn_Parent_C_NPC_DisableIntroPhaseBehavior final
{
public:
	bool                                          CallFunc_IsValid_ReturnValue;
	bool                                          CallFunc_IsValidClass_ReturnValue;
	uint8                                         Pad_2[0x2];
	struct FActiveGameplayEffectHandle            CallFunc_BP_ApplyGameplayEffectToTarget_ReturnValue;
	int32                                         CallFunc_RemoveActiveEffectsWithAppliedTags_ReturnValue;
};
static_assert(alignof(NPC_Pawn_Parent_C_NPC_DisableIntroPhaseBehavior) == 0x000004, "Wrong alignment on NPC_Pawn_Parent_C_NPC_DisableIntroPhaseBehavior");
static_assert(sizeof(NPC_Pawn_Parent_C_NPC_DisableIntroPhaseBehavior) == 0x000010, "Wrong size on NPC_Pawn_Parent_C_NPC_DisableIntroPhaseBehavior");
static_assert(offsetof(NPC_Pawn_Parent_C_NPC_DisableIntroPhaseBehavior, CallFunc_IsValid_ReturnValue) == 0x000000, "Member 'NPC_Pawn_Parent_C_NPC_DisableIntroPhaseBehavior::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Parent_C_NPC_DisableIntroPhaseBehavior, CallFunc_IsValidClass_ReturnValue) == 0x000001, "Member 'NPC_Pawn_Parent_C_NPC_DisableIntroPhaseBehavior::CallFunc_IsValidClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Parent_C_NPC_DisableIntroPhaseBehavior, CallFunc_BP_ApplyGameplayEffectToTarget_ReturnValue) == 0x000004, "Member 'NPC_Pawn_Parent_C_NPC_DisableIntroPhaseBehavior::CallFunc_BP_ApplyGameplayEffectToTarget_ReturnValue' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Parent_C_NPC_DisableIntroPhaseBehavior, CallFunc_RemoveActiveEffectsWithAppliedTags_ReturnValue) == 0x00000C, "Member 'NPC_Pawn_Parent_C_NPC_DisableIntroPhaseBehavior::CallFunc_RemoveActiveEffectsWithAppliedTags_ReturnValue' has a wrong offset!");

struct NPC_Pawn_Parent_C_NPC_GetAlertLevelInfo final
{
public:
	Enum_NPC_AlertLevel                           AlertLevel;
	uint8                                         Pad_1[0x3];
	struct FGameplayTag                           AlertLevelTag;
	bool                                          ValidDataFound;
	uint8                                         Pad_9[0x3];
	struct FGameplayTag                           CallFunc_Map_Find_Value;
	bool                                          CallFunc_Map_Find_ReturnValue;
};
static_assert(alignof(NPC_Pawn_Parent_C_NPC_GetAlertLevelInfo) == 0x000004, "Wrong alignment on NPC_Pawn_Parent_C_NPC_GetAlertLevelInfo");
static_assert(sizeof(NPC_Pawn_Parent_C_NPC_GetAlertLevelInfo) == 0x000014, "Wrong size on NPC_Pawn_Parent_C_NPC_GetAlertLevelInfo");
static_assert(offsetof(NPC_Pawn_Parent_C_NPC_GetAlertLevelInfo, AlertLevel) == 0x000000, "Member 'NPC_Pawn_Parent_C_NPC_GetAlertLevelInfo::AlertLevel' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Parent_C_NPC_GetAlertLevelInfo, AlertLevelTag) == 0x000004, "Member 'NPC_Pawn_Parent_C_NPC_GetAlertLevelInfo::AlertLevelTag' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Parent_C_NPC_GetAlertLevelInfo, ValidDataFound) == 0x000008, "Member 'NPC_Pawn_Parent_C_NPC_GetAlertLevelInfo::ValidDataFound' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Parent_C_NPC_GetAlertLevelInfo, CallFunc_Map_Find_Value) == 0x00000C, "Member 'NPC_Pawn_Parent_C_NPC_GetAlertLevelInfo::CallFunc_Map_Find_Value' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Parent_C_NPC_GetAlertLevelInfo, CallFunc_Map_Find_ReturnValue) == 0x000010, "Member 'NPC_Pawn_Parent_C_NPC_GetAlertLevelInfo::CallFunc_Map_Find_ReturnValue' has a wrong offset!");

struct NPC_Pawn_Parent_C_NPC_GetInventoryInformation final
{
public:
	bool                                          HasItemInInventory;
	uint8                                         Pad_1[0x3];
	int32                                         TotalNumberOfInventoryItems;
	int32                                         LastInventoryItemIndex;
	bool                                          HasEnoughItemsToDeliver;
	bool                                          ConsumedEnoughItemsToBeConsideredFull;
	bool                                          CallFunc_NPC_GetScalableFloatHotfixValue_AsBool;
	uint8                                         Pad_F[0x1];
	int32                                         CallFunc_NPC_GetScalableFloatHotfixValue_AsIntRounded;
	uint8                                         Pad_14[0x4];
	double                                        CallFunc_NPC_GetScalableFloatHotfixValue_AsFloat;
	bool                                          CallFunc_NPC_GetScalableFloatHotfixValue_AsBool_1;
	uint8                                         Pad_21[0x3];
	int32                                         CallFunc_NPC_GetScalableFloatHotfixValue_AsIntRounded_1;
	double                                        CallFunc_NPC_GetScalableFloatHotfixValue_AsFloat_1;
	bool                                          CallFunc_Greater_IntInt_ReturnValue;
	uint8                                         Pad_31[0x7];
	class FString                                 CallFunc_BuildString_Bool_ReturnValue;
	TScriptInterface<class IFortInventoryOwnerInterface> CallFunc_GetItemsFromInventoryOwner_InventoryOwner_CastInput;
	TArray<class UFortWorldItem*>                 CallFunc_GetItemsFromInventoryOwner_Items;
	int32                                         CallFunc_Array_Length_ReturnValue;
	int32                                         CallFunc_Array_LastIndex_ReturnValue;
	bool                                          CallFunc_GreaterEqual_IntInt_ReturnValue;
	bool                                          CallFunc_GreaterEqual_IntInt_ReturnValue_1;
	bool                                          CallFunc_Greater_IntInt_ReturnValue_1;
	bool                                          CallFunc_BooleanAND_ReturnValue;
	uint8                                         Pad_74[0x4];
	class FString                                 CallFunc_BuildString_Bool_ReturnValue_1;
	bool                                          CallFunc_BooleanAND_ReturnValue_1;
	uint8                                         Pad_89[0x7];
	class FString                                 CallFunc_BuildString_Bool_ReturnValue_2;
	class FString                                 CallFunc_BuildString_Bool_ReturnValue_3;
};
static_assert(alignof(NPC_Pawn_Parent_C_NPC_GetInventoryInformation) == 0x000008, "Wrong alignment on NPC_Pawn_Parent_C_NPC_GetInventoryInformation");
static_assert(sizeof(NPC_Pawn_Parent_C_NPC_GetInventoryInformation) == 0x0000B0, "Wrong size on NPC_Pawn_Parent_C_NPC_GetInventoryInformation");
static_assert(offsetof(NPC_Pawn_Parent_C_NPC_GetInventoryInformation, HasItemInInventory) == 0x000000, "Member 'NPC_Pawn_Parent_C_NPC_GetInventoryInformation::HasItemInInventory' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Parent_C_NPC_GetInventoryInformation, TotalNumberOfInventoryItems) == 0x000004, "Member 'NPC_Pawn_Parent_C_NPC_GetInventoryInformation::TotalNumberOfInventoryItems' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Parent_C_NPC_GetInventoryInformation, LastInventoryItemIndex) == 0x000008, "Member 'NPC_Pawn_Parent_C_NPC_GetInventoryInformation::LastInventoryItemIndex' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Parent_C_NPC_GetInventoryInformation, HasEnoughItemsToDeliver) == 0x00000C, "Member 'NPC_Pawn_Parent_C_NPC_GetInventoryInformation::HasEnoughItemsToDeliver' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Parent_C_NPC_GetInventoryInformation, ConsumedEnoughItemsToBeConsideredFull) == 0x00000D, "Member 'NPC_Pawn_Parent_C_NPC_GetInventoryInformation::ConsumedEnoughItemsToBeConsideredFull' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Parent_C_NPC_GetInventoryInformation, CallFunc_NPC_GetScalableFloatHotfixValue_AsBool) == 0x00000E, "Member 'NPC_Pawn_Parent_C_NPC_GetInventoryInformation::CallFunc_NPC_GetScalableFloatHotfixValue_AsBool' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Parent_C_NPC_GetInventoryInformation, CallFunc_NPC_GetScalableFloatHotfixValue_AsIntRounded) == 0x000010, "Member 'NPC_Pawn_Parent_C_NPC_GetInventoryInformation::CallFunc_NPC_GetScalableFloatHotfixValue_AsIntRounded' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Parent_C_NPC_GetInventoryInformation, CallFunc_NPC_GetScalableFloatHotfixValue_AsFloat) == 0x000018, "Member 'NPC_Pawn_Parent_C_NPC_GetInventoryInformation::CallFunc_NPC_GetScalableFloatHotfixValue_AsFloat' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Parent_C_NPC_GetInventoryInformation, CallFunc_NPC_GetScalableFloatHotfixValue_AsBool_1) == 0x000020, "Member 'NPC_Pawn_Parent_C_NPC_GetInventoryInformation::CallFunc_NPC_GetScalableFloatHotfixValue_AsBool_1' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Parent_C_NPC_GetInventoryInformation, CallFunc_NPC_GetScalableFloatHotfixValue_AsIntRounded_1) == 0x000024, "Member 'NPC_Pawn_Parent_C_NPC_GetInventoryInformation::CallFunc_NPC_GetScalableFloatHotfixValue_AsIntRounded_1' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Parent_C_NPC_GetInventoryInformation, CallFunc_NPC_GetScalableFloatHotfixValue_AsFloat_1) == 0x000028, "Member 'NPC_Pawn_Parent_C_NPC_GetInventoryInformation::CallFunc_NPC_GetScalableFloatHotfixValue_AsFloat_1' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Parent_C_NPC_GetInventoryInformation, CallFunc_Greater_IntInt_ReturnValue) == 0x000030, "Member 'NPC_Pawn_Parent_C_NPC_GetInventoryInformation::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Parent_C_NPC_GetInventoryInformation, CallFunc_BuildString_Bool_ReturnValue) == 0x000038, "Member 'NPC_Pawn_Parent_C_NPC_GetInventoryInformation::CallFunc_BuildString_Bool_ReturnValue' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Parent_C_NPC_GetInventoryInformation, CallFunc_GetItemsFromInventoryOwner_InventoryOwner_CastInput) == 0x000048, "Member 'NPC_Pawn_Parent_C_NPC_GetInventoryInformation::CallFunc_GetItemsFromInventoryOwner_InventoryOwner_CastInput' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Parent_C_NPC_GetInventoryInformation, CallFunc_GetItemsFromInventoryOwner_Items) == 0x000058, "Member 'NPC_Pawn_Parent_C_NPC_GetInventoryInformation::CallFunc_GetItemsFromInventoryOwner_Items' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Parent_C_NPC_GetInventoryInformation, CallFunc_Array_Length_ReturnValue) == 0x000068, "Member 'NPC_Pawn_Parent_C_NPC_GetInventoryInformation::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Parent_C_NPC_GetInventoryInformation, CallFunc_Array_LastIndex_ReturnValue) == 0x00006C, "Member 'NPC_Pawn_Parent_C_NPC_GetInventoryInformation::CallFunc_Array_LastIndex_ReturnValue' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Parent_C_NPC_GetInventoryInformation, CallFunc_GreaterEqual_IntInt_ReturnValue) == 0x000070, "Member 'NPC_Pawn_Parent_C_NPC_GetInventoryInformation::CallFunc_GreaterEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Parent_C_NPC_GetInventoryInformation, CallFunc_GreaterEqual_IntInt_ReturnValue_1) == 0x000071, "Member 'NPC_Pawn_Parent_C_NPC_GetInventoryInformation::CallFunc_GreaterEqual_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Parent_C_NPC_GetInventoryInformation, CallFunc_Greater_IntInt_ReturnValue_1) == 0x000072, "Member 'NPC_Pawn_Parent_C_NPC_GetInventoryInformation::CallFunc_Greater_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Parent_C_NPC_GetInventoryInformation, CallFunc_BooleanAND_ReturnValue) == 0x000073, "Member 'NPC_Pawn_Parent_C_NPC_GetInventoryInformation::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Parent_C_NPC_GetInventoryInformation, CallFunc_BuildString_Bool_ReturnValue_1) == 0x000078, "Member 'NPC_Pawn_Parent_C_NPC_GetInventoryInformation::CallFunc_BuildString_Bool_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Parent_C_NPC_GetInventoryInformation, CallFunc_BooleanAND_ReturnValue_1) == 0x000088, "Member 'NPC_Pawn_Parent_C_NPC_GetInventoryInformation::CallFunc_BooleanAND_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Parent_C_NPC_GetInventoryInformation, CallFunc_BuildString_Bool_ReturnValue_2) == 0x000090, "Member 'NPC_Pawn_Parent_C_NPC_GetInventoryInformation::CallFunc_BuildString_Bool_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Parent_C_NPC_GetInventoryInformation, CallFunc_BuildString_Bool_ReturnValue_3) == 0x0000A0, "Member 'NPC_Pawn_Parent_C_NPC_GetInventoryInformation::CallFunc_BuildString_Bool_ReturnValue_3' has a wrong offset!");

struct NPC_Pawn_Parent_C_NPC_GetSafeZonePhase final
{
public:
	int32                                         SafeZonePhase;
	uint8                                         Pad_4[0x4];
	class AGameStateBase*                         CallFunc_GetGameState_ReturnValue;
	class AAthena_GameState_C*                    K2Node_DynamicCast_AsAthena_Game_State;
	bool                                          K2Node_DynamicCast_bSuccess;
	uint8                                         Pad_19[0x3];
	int32                                         CallFunc_GetSafeZonePhase_ReturnValue;
	bool                                          CallFunc_IsValid_ReturnValue;
};
static_assert(alignof(NPC_Pawn_Parent_C_NPC_GetSafeZonePhase) == 0x000008, "Wrong alignment on NPC_Pawn_Parent_C_NPC_GetSafeZonePhase");
static_assert(sizeof(NPC_Pawn_Parent_C_NPC_GetSafeZonePhase) == 0x000028, "Wrong size on NPC_Pawn_Parent_C_NPC_GetSafeZonePhase");
static_assert(offsetof(NPC_Pawn_Parent_C_NPC_GetSafeZonePhase, SafeZonePhase) == 0x000000, "Member 'NPC_Pawn_Parent_C_NPC_GetSafeZonePhase::SafeZonePhase' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Parent_C_NPC_GetSafeZonePhase, CallFunc_GetGameState_ReturnValue) == 0x000008, "Member 'NPC_Pawn_Parent_C_NPC_GetSafeZonePhase::CallFunc_GetGameState_ReturnValue' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Parent_C_NPC_GetSafeZonePhase, K2Node_DynamicCast_AsAthena_Game_State) == 0x000010, "Member 'NPC_Pawn_Parent_C_NPC_GetSafeZonePhase::K2Node_DynamicCast_AsAthena_Game_State' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Parent_C_NPC_GetSafeZonePhase, K2Node_DynamicCast_bSuccess) == 0x000018, "Member 'NPC_Pawn_Parent_C_NPC_GetSafeZonePhase::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Parent_C_NPC_GetSafeZonePhase, CallFunc_GetSafeZonePhase_ReturnValue) == 0x00001C, "Member 'NPC_Pawn_Parent_C_NPC_GetSafeZonePhase::CallFunc_GetSafeZonePhase_ReturnValue' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Parent_C_NPC_GetSafeZonePhase, CallFunc_IsValid_ReturnValue) == 0x000020, "Member 'NPC_Pawn_Parent_C_NPC_GetSafeZonePhase::CallFunc_IsValid_ReturnValue' has a wrong offset!");

struct NPC_Pawn_Parent_C_NPC_GetScalableFloatHotfixValue final
{
public:
	struct FScalableFloat                         ScalableFloatHotfix;
	double                                        AtLevel;
	bool                                          AsBool;
	uint8                                         Pad_31[0x3];
	int32                                         AsIntRounded;
	double                                        AsFloat;
	float                                         CallFunc_GetValueAtLevel_ReturnValue;
	int32                                         CallFunc_Round_ReturnValue;
	int32                                         CallFunc_Round_ReturnValue_1;
	bool                                          CallFunc_Greater_IntInt_ReturnValue;
	bool                                          CallFunc_Greater_IntInt_ReturnValue_1;
	bool                                          CallFunc_NPC_ScalableFloatIsValid_Valid;
	uint8                                         Pad_4F[0x1];
	float                                         CallFunc_GetValueAtLevel_Level_ImplicitCast;
	uint8                                         Pad_54[0x4];
	double                                        K2Node_FunctionResult_AsFloat_ImplicitCast;
	double                                        K2Node_FunctionResult_AsFloat_ImplicitCast_1;
	double                                        CallFunc_Round_A_ImplicitCast;
	double                                        CallFunc_Round_A_ImplicitCast_1;
};
static_assert(alignof(NPC_Pawn_Parent_C_NPC_GetScalableFloatHotfixValue) == 0x000008, "Wrong alignment on NPC_Pawn_Parent_C_NPC_GetScalableFloatHotfixValue");
static_assert(sizeof(NPC_Pawn_Parent_C_NPC_GetScalableFloatHotfixValue) == 0x000078, "Wrong size on NPC_Pawn_Parent_C_NPC_GetScalableFloatHotfixValue");
static_assert(offsetof(NPC_Pawn_Parent_C_NPC_GetScalableFloatHotfixValue, ScalableFloatHotfix) == 0x000000, "Member 'NPC_Pawn_Parent_C_NPC_GetScalableFloatHotfixValue::ScalableFloatHotfix' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Parent_C_NPC_GetScalableFloatHotfixValue, AtLevel) == 0x000028, "Member 'NPC_Pawn_Parent_C_NPC_GetScalableFloatHotfixValue::AtLevel' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Parent_C_NPC_GetScalableFloatHotfixValue, AsBool) == 0x000030, "Member 'NPC_Pawn_Parent_C_NPC_GetScalableFloatHotfixValue::AsBool' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Parent_C_NPC_GetScalableFloatHotfixValue, AsIntRounded) == 0x000034, "Member 'NPC_Pawn_Parent_C_NPC_GetScalableFloatHotfixValue::AsIntRounded' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Parent_C_NPC_GetScalableFloatHotfixValue, AsFloat) == 0x000038, "Member 'NPC_Pawn_Parent_C_NPC_GetScalableFloatHotfixValue::AsFloat' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Parent_C_NPC_GetScalableFloatHotfixValue, CallFunc_GetValueAtLevel_ReturnValue) == 0x000040, "Member 'NPC_Pawn_Parent_C_NPC_GetScalableFloatHotfixValue::CallFunc_GetValueAtLevel_ReturnValue' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Parent_C_NPC_GetScalableFloatHotfixValue, CallFunc_Round_ReturnValue) == 0x000044, "Member 'NPC_Pawn_Parent_C_NPC_GetScalableFloatHotfixValue::CallFunc_Round_ReturnValue' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Parent_C_NPC_GetScalableFloatHotfixValue, CallFunc_Round_ReturnValue_1) == 0x000048, "Member 'NPC_Pawn_Parent_C_NPC_GetScalableFloatHotfixValue::CallFunc_Round_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Parent_C_NPC_GetScalableFloatHotfixValue, CallFunc_Greater_IntInt_ReturnValue) == 0x00004C, "Member 'NPC_Pawn_Parent_C_NPC_GetScalableFloatHotfixValue::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Parent_C_NPC_GetScalableFloatHotfixValue, CallFunc_Greater_IntInt_ReturnValue_1) == 0x00004D, "Member 'NPC_Pawn_Parent_C_NPC_GetScalableFloatHotfixValue::CallFunc_Greater_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Parent_C_NPC_GetScalableFloatHotfixValue, CallFunc_NPC_ScalableFloatIsValid_Valid) == 0x00004E, "Member 'NPC_Pawn_Parent_C_NPC_GetScalableFloatHotfixValue::CallFunc_NPC_ScalableFloatIsValid_Valid' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Parent_C_NPC_GetScalableFloatHotfixValue, CallFunc_GetValueAtLevel_Level_ImplicitCast) == 0x000050, "Member 'NPC_Pawn_Parent_C_NPC_GetScalableFloatHotfixValue::CallFunc_GetValueAtLevel_Level_ImplicitCast' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Parent_C_NPC_GetScalableFloatHotfixValue, K2Node_FunctionResult_AsFloat_ImplicitCast) == 0x000058, "Member 'NPC_Pawn_Parent_C_NPC_GetScalableFloatHotfixValue::K2Node_FunctionResult_AsFloat_ImplicitCast' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Parent_C_NPC_GetScalableFloatHotfixValue, K2Node_FunctionResult_AsFloat_ImplicitCast_1) == 0x000060, "Member 'NPC_Pawn_Parent_C_NPC_GetScalableFloatHotfixValue::K2Node_FunctionResult_AsFloat_ImplicitCast_1' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Parent_C_NPC_GetScalableFloatHotfixValue, CallFunc_Round_A_ImplicitCast) == 0x000068, "Member 'NPC_Pawn_Parent_C_NPC_GetScalableFloatHotfixValue::CallFunc_Round_A_ImplicitCast' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Parent_C_NPC_GetScalableFloatHotfixValue, CallFunc_Round_A_ImplicitCast_1) == 0x000070, "Member 'NPC_Pawn_Parent_C_NPC_GetScalableFloatHotfixValue::CallFunc_Round_A_ImplicitCast_1' has a wrong offset!");

struct NPC_Pawn_Parent_C_NPC_GhostCollisionSettings final
{
public:
	bool                                          NoCollisionForRanged;
	bool                                          NoCollisionForMelee;
	bool                                          NoCollisionForProjectiles;
	bool                                          OnlyOverlapCollisionForPawns;
	bool                                          CallFunc_IsValid_ReturnValue;
	bool                                          CallFunc_IsValid_ReturnValue_1;
	bool                                          CallFunc_IsValid_ReturnValue_2;
	bool                                          CallFunc_IsValid_ReturnValue_3;
	bool                                          CallFunc_IsValid_ReturnValue_4;
	bool                                          CallFunc_IsValid_ReturnValue_5;
	bool                                          CallFunc_IsValid_ReturnValue_6;
	bool                                          CallFunc_IsValid_ReturnValue_7;
	bool                                          CallFunc_IsValid_ReturnValue_8;
	bool                                          CallFunc_IsValid_ReturnValue_9;
};
static_assert(alignof(NPC_Pawn_Parent_C_NPC_GhostCollisionSettings) == 0x000001, "Wrong alignment on NPC_Pawn_Parent_C_NPC_GhostCollisionSettings");
static_assert(sizeof(NPC_Pawn_Parent_C_NPC_GhostCollisionSettings) == 0x00000E, "Wrong size on NPC_Pawn_Parent_C_NPC_GhostCollisionSettings");
static_assert(offsetof(NPC_Pawn_Parent_C_NPC_GhostCollisionSettings, NoCollisionForRanged) == 0x000000, "Member 'NPC_Pawn_Parent_C_NPC_GhostCollisionSettings::NoCollisionForRanged' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Parent_C_NPC_GhostCollisionSettings, NoCollisionForMelee) == 0x000001, "Member 'NPC_Pawn_Parent_C_NPC_GhostCollisionSettings::NoCollisionForMelee' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Parent_C_NPC_GhostCollisionSettings, NoCollisionForProjectiles) == 0x000002, "Member 'NPC_Pawn_Parent_C_NPC_GhostCollisionSettings::NoCollisionForProjectiles' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Parent_C_NPC_GhostCollisionSettings, OnlyOverlapCollisionForPawns) == 0x000003, "Member 'NPC_Pawn_Parent_C_NPC_GhostCollisionSettings::OnlyOverlapCollisionForPawns' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Parent_C_NPC_GhostCollisionSettings, CallFunc_IsValid_ReturnValue) == 0x000004, "Member 'NPC_Pawn_Parent_C_NPC_GhostCollisionSettings::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Parent_C_NPC_GhostCollisionSettings, CallFunc_IsValid_ReturnValue_1) == 0x000005, "Member 'NPC_Pawn_Parent_C_NPC_GhostCollisionSettings::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Parent_C_NPC_GhostCollisionSettings, CallFunc_IsValid_ReturnValue_2) == 0x000006, "Member 'NPC_Pawn_Parent_C_NPC_GhostCollisionSettings::CallFunc_IsValid_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Parent_C_NPC_GhostCollisionSettings, CallFunc_IsValid_ReturnValue_3) == 0x000007, "Member 'NPC_Pawn_Parent_C_NPC_GhostCollisionSettings::CallFunc_IsValid_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Parent_C_NPC_GhostCollisionSettings, CallFunc_IsValid_ReturnValue_4) == 0x000008, "Member 'NPC_Pawn_Parent_C_NPC_GhostCollisionSettings::CallFunc_IsValid_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Parent_C_NPC_GhostCollisionSettings, CallFunc_IsValid_ReturnValue_5) == 0x000009, "Member 'NPC_Pawn_Parent_C_NPC_GhostCollisionSettings::CallFunc_IsValid_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Parent_C_NPC_GhostCollisionSettings, CallFunc_IsValid_ReturnValue_6) == 0x00000A, "Member 'NPC_Pawn_Parent_C_NPC_GhostCollisionSettings::CallFunc_IsValid_ReturnValue_6' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Parent_C_NPC_GhostCollisionSettings, CallFunc_IsValid_ReturnValue_7) == 0x00000B, "Member 'NPC_Pawn_Parent_C_NPC_GhostCollisionSettings::CallFunc_IsValid_ReturnValue_7' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Parent_C_NPC_GhostCollisionSettings, CallFunc_IsValid_ReturnValue_8) == 0x00000C, "Member 'NPC_Pawn_Parent_C_NPC_GhostCollisionSettings::CallFunc_IsValid_ReturnValue_8' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Parent_C_NPC_GhostCollisionSettings, CallFunc_IsValid_ReturnValue_9) == 0x00000D, "Member 'NPC_Pawn_Parent_C_NPC_GhostCollisionSettings::CallFunc_IsValid_ReturnValue_9' has a wrong offset!");

struct NPC_Pawn_Parent_C_NPC_HandleAlertLevelVoice final
{
public:
	Enum_NPC_AlertLevel                           Temp_byte_Variable;
	uint8                                         Pad_1[0x3];
	struct FGameplayTag                           Temp_struct_Variable;
	struct FGameplayTag                           Temp_struct_Variable_1;
	struct FGameplayTag                           Temp_struct_Variable_2;
	bool                                          CallFunc_PlayVoiceLine_Success;
	bool                                          CallFunc_PlayVoiceLine_Success_1;
	bool                                          K2Node_SwitchEnum_CmpSuccess;
	uint8                                         Pad_13[0x1];
	struct FGameplayTag                           K2Node_Select_Default;
	bool                                          CallFunc_PlayVoiceLine_Success_2;
};
static_assert(alignof(NPC_Pawn_Parent_C_NPC_HandleAlertLevelVoice) == 0x000004, "Wrong alignment on NPC_Pawn_Parent_C_NPC_HandleAlertLevelVoice");
static_assert(sizeof(NPC_Pawn_Parent_C_NPC_HandleAlertLevelVoice) == 0x00001C, "Wrong size on NPC_Pawn_Parent_C_NPC_HandleAlertLevelVoice");
static_assert(offsetof(NPC_Pawn_Parent_C_NPC_HandleAlertLevelVoice, Temp_byte_Variable) == 0x000000, "Member 'NPC_Pawn_Parent_C_NPC_HandleAlertLevelVoice::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Parent_C_NPC_HandleAlertLevelVoice, Temp_struct_Variable) == 0x000004, "Member 'NPC_Pawn_Parent_C_NPC_HandleAlertLevelVoice::Temp_struct_Variable' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Parent_C_NPC_HandleAlertLevelVoice, Temp_struct_Variable_1) == 0x000008, "Member 'NPC_Pawn_Parent_C_NPC_HandleAlertLevelVoice::Temp_struct_Variable_1' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Parent_C_NPC_HandleAlertLevelVoice, Temp_struct_Variable_2) == 0x00000C, "Member 'NPC_Pawn_Parent_C_NPC_HandleAlertLevelVoice::Temp_struct_Variable_2' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Parent_C_NPC_HandleAlertLevelVoice, CallFunc_PlayVoiceLine_Success) == 0x000010, "Member 'NPC_Pawn_Parent_C_NPC_HandleAlertLevelVoice::CallFunc_PlayVoiceLine_Success' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Parent_C_NPC_HandleAlertLevelVoice, CallFunc_PlayVoiceLine_Success_1) == 0x000011, "Member 'NPC_Pawn_Parent_C_NPC_HandleAlertLevelVoice::CallFunc_PlayVoiceLine_Success_1' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Parent_C_NPC_HandleAlertLevelVoice, K2Node_SwitchEnum_CmpSuccess) == 0x000012, "Member 'NPC_Pawn_Parent_C_NPC_HandleAlertLevelVoice::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Parent_C_NPC_HandleAlertLevelVoice, K2Node_Select_Default) == 0x000014, "Member 'NPC_Pawn_Parent_C_NPC_HandleAlertLevelVoice::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Parent_C_NPC_HandleAlertLevelVoice, CallFunc_PlayVoiceLine_Success_2) == 0x000018, "Member 'NPC_Pawn_Parent_C_NPC_HandleAlertLevelVoice::CallFunc_PlayVoiceLine_Success_2' has a wrong offset!");

struct NPC_Pawn_Parent_C_NPC_HasLeader_ final
{
public:
	bool                                          HasLeader_;
	uint8                                         Pad_1[0x7];
	class AActor*                                 Leader;
	bool                                          CallFunc_IsValid_ReturnValue;
};
static_assert(alignof(NPC_Pawn_Parent_C_NPC_HasLeader_) == 0x000008, "Wrong alignment on NPC_Pawn_Parent_C_NPC_HasLeader_");
static_assert(sizeof(NPC_Pawn_Parent_C_NPC_HasLeader_) == 0x000018, "Wrong size on NPC_Pawn_Parent_C_NPC_HasLeader_");
static_assert(offsetof(NPC_Pawn_Parent_C_NPC_HasLeader_, HasLeader_) == 0x000000, "Member 'NPC_Pawn_Parent_C_NPC_HasLeader_::HasLeader_' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Parent_C_NPC_HasLeader_, Leader) == 0x000008, "Member 'NPC_Pawn_Parent_C_NPC_HasLeader_::Leader' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Parent_C_NPC_HasLeader_, CallFunc_IsValid_ReturnValue) == 0x000010, "Member 'NPC_Pawn_Parent_C_NPC_HasLeader_::CallFunc_IsValid_ReturnValue' has a wrong offset!");

struct NPC_Pawn_Parent_C_NPC_LeaderSet final
{
public:
	bool                                          Success_;
	uint8                                         Pad_1[0x7];
	class AActor*                                 Leader;
	EUnconvertReason                              UnconvertReason;
};
static_assert(alignof(NPC_Pawn_Parent_C_NPC_LeaderSet) == 0x000008, "Wrong alignment on NPC_Pawn_Parent_C_NPC_LeaderSet");
static_assert(sizeof(NPC_Pawn_Parent_C_NPC_LeaderSet) == 0x000018, "Wrong size on NPC_Pawn_Parent_C_NPC_LeaderSet");
static_assert(offsetof(NPC_Pawn_Parent_C_NPC_LeaderSet, Success_) == 0x000000, "Member 'NPC_Pawn_Parent_C_NPC_LeaderSet::Success_' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Parent_C_NPC_LeaderSet, Leader) == 0x000008, "Member 'NPC_Pawn_Parent_C_NPC_LeaderSet::Leader' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Parent_C_NPC_LeaderSet, UnconvertReason) == 0x000010, "Member 'NPC_Pawn_Parent_C_NPC_LeaderSet::UnconvertReason' has a wrong offset!");

struct NPC_Pawn_Parent_C_NPC_ParentLaunchVehicle final
{
public:
	class AActor*                                 Vehicle;
	struct FVector                                Velocity;
};
static_assert(alignof(NPC_Pawn_Parent_C_NPC_ParentLaunchVehicle) == 0x000008, "Wrong alignment on NPC_Pawn_Parent_C_NPC_ParentLaunchVehicle");
static_assert(sizeof(NPC_Pawn_Parent_C_NPC_ParentLaunchVehicle) == 0x000020, "Wrong size on NPC_Pawn_Parent_C_NPC_ParentLaunchVehicle");
static_assert(offsetof(NPC_Pawn_Parent_C_NPC_ParentLaunchVehicle, Vehicle) == 0x000000, "Member 'NPC_Pawn_Parent_C_NPC_ParentLaunchVehicle::Vehicle' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Parent_C_NPC_ParentLaunchVehicle, Velocity) == 0x000008, "Member 'NPC_Pawn_Parent_C_NPC_ParentLaunchVehicle::Velocity' has a wrong offset!");

struct NPC_Pawn_Parent_C_NPC_Pawn_Interact final
{
public:
	class AFortAIPawn*                            AI;
	class AFortPlayerController*                  InteractingPlayerController;
	EInteractionBeingAttempted                    InteractionBeingAttempted;
};
static_assert(alignof(NPC_Pawn_Parent_C_NPC_Pawn_Interact) == 0x000008, "Wrong alignment on NPC_Pawn_Parent_C_NPC_Pawn_Interact");
static_assert(sizeof(NPC_Pawn_Parent_C_NPC_Pawn_Interact) == 0x000018, "Wrong size on NPC_Pawn_Parent_C_NPC_Pawn_Interact");
static_assert(offsetof(NPC_Pawn_Parent_C_NPC_Pawn_Interact, AI) == 0x000000, "Member 'NPC_Pawn_Parent_C_NPC_Pawn_Interact::AI' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Parent_C_NPC_Pawn_Interact, InteractingPlayerController) == 0x000008, "Member 'NPC_Pawn_Parent_C_NPC_Pawn_Interact::InteractingPlayerController' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Parent_C_NPC_Pawn_Interact, InteractionBeingAttempted) == 0x000010, "Member 'NPC_Pawn_Parent_C_NPC_Pawn_Interact::InteractionBeingAttempted' has a wrong offset!");

struct NPC_Pawn_Parent_C_NPC_PawnDebugMessage final
{
public:
	class FString                                 String;
	bool                                          OnlyWhenDebug;
	bool                                          CallFunc_Not_PreBool_ReturnValue;
	bool                                          CallFunc_BooleanAND_ReturnValue;
	bool                                          CallFunc_BooleanOR_ReturnValue;
};
static_assert(alignof(NPC_Pawn_Parent_C_NPC_PawnDebugMessage) == 0x000008, "Wrong alignment on NPC_Pawn_Parent_C_NPC_PawnDebugMessage");
static_assert(sizeof(NPC_Pawn_Parent_C_NPC_PawnDebugMessage) == 0x000018, "Wrong size on NPC_Pawn_Parent_C_NPC_PawnDebugMessage");
static_assert(offsetof(NPC_Pawn_Parent_C_NPC_PawnDebugMessage, String) == 0x000000, "Member 'NPC_Pawn_Parent_C_NPC_PawnDebugMessage::String' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Parent_C_NPC_PawnDebugMessage, OnlyWhenDebug) == 0x000010, "Member 'NPC_Pawn_Parent_C_NPC_PawnDebugMessage::OnlyWhenDebug' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Parent_C_NPC_PawnDebugMessage, CallFunc_Not_PreBool_ReturnValue) == 0x000011, "Member 'NPC_Pawn_Parent_C_NPC_PawnDebugMessage::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Parent_C_NPC_PawnDebugMessage, CallFunc_BooleanAND_ReturnValue) == 0x000012, "Member 'NPC_Pawn_Parent_C_NPC_PawnDebugMessage::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Parent_C_NPC_PawnDebugMessage, CallFunc_BooleanOR_ReturnValue) == 0x000013, "Member 'NPC_Pawn_Parent_C_NPC_PawnDebugMessage::CallFunc_BooleanOR_ReturnValue' has a wrong offset!");

struct NPC_Pawn_Parent_C_NPC_PickupDropped final
{
public:
	class AFortPickup*                            FortPickupDropped;
};
static_assert(alignof(NPC_Pawn_Parent_C_NPC_PickupDropped) == 0x000008, "Wrong alignment on NPC_Pawn_Parent_C_NPC_PickupDropped");
static_assert(sizeof(NPC_Pawn_Parent_C_NPC_PickupDropped) == 0x000008, "Wrong size on NPC_Pawn_Parent_C_NPC_PickupDropped");
static_assert(offsetof(NPC_Pawn_Parent_C_NPC_PickupDropped, FortPickupDropped) == 0x000000, "Member 'NPC_Pawn_Parent_C_NPC_PickupDropped::FortPickupDropped' has a wrong offset!");

struct NPC_Pawn_Parent_C_NPC_PickupGrabbed final
{
public:
	class AFortPickup*                            FortPickupGrabbed;
};
static_assert(alignof(NPC_Pawn_Parent_C_NPC_PickupGrabbed) == 0x000008, "Wrong alignment on NPC_Pawn_Parent_C_NPC_PickupGrabbed");
static_assert(sizeof(NPC_Pawn_Parent_C_NPC_PickupGrabbed) == 0x000008, "Wrong size on NPC_Pawn_Parent_C_NPC_PickupGrabbed");
static_assert(offsetof(NPC_Pawn_Parent_C_NPC_PickupGrabbed, FortPickupGrabbed) == 0x000000, "Member 'NPC_Pawn_Parent_C_NPC_PickupGrabbed::FortPickupGrabbed' has a wrong offset!");

struct NPC_Pawn_Parent_C_NPC_PickupGrabbed_Destroyed final
{
public:
	class AActor*                                 ActorGrabbed;
};
static_assert(alignof(NPC_Pawn_Parent_C_NPC_PickupGrabbed_Destroyed) == 0x000008, "Wrong alignment on NPC_Pawn_Parent_C_NPC_PickupGrabbed_Destroyed");
static_assert(sizeof(NPC_Pawn_Parent_C_NPC_PickupGrabbed_Destroyed) == 0x000008, "Wrong size on NPC_Pawn_Parent_C_NPC_PickupGrabbed_Destroyed");
static_assert(offsetof(NPC_Pawn_Parent_C_NPC_PickupGrabbed_Destroyed, ActorGrabbed) == 0x000000, "Member 'NPC_Pawn_Parent_C_NPC_PickupGrabbed_Destroyed::ActorGrabbed' has a wrong offset!");

struct NPC_Pawn_Parent_C_NPC_ResetOriginalGravityScale final
{
public:
	float                                         K2Node_VariableSet_GravityScale_ImplicitCast;
};
static_assert(alignof(NPC_Pawn_Parent_C_NPC_ResetOriginalGravityScale) == 0x000004, "Wrong alignment on NPC_Pawn_Parent_C_NPC_ResetOriginalGravityScale");
static_assert(sizeof(NPC_Pawn_Parent_C_NPC_ResetOriginalGravityScale) == 0x000004, "Wrong size on NPC_Pawn_Parent_C_NPC_ResetOriginalGravityScale");
static_assert(offsetof(NPC_Pawn_Parent_C_NPC_ResetOriginalGravityScale, K2Node_VariableSet_GravityScale_ImplicitCast) == 0x000000, "Member 'NPC_Pawn_Parent_C_NPC_ResetOriginalGravityScale::K2Node_VariableSet_GravityScale_ImplicitCast' has a wrong offset!");

struct NPC_Pawn_Parent_C_NPC_ScalableFloatIsValid final
{
public:
	struct FScalableFloat                         ScalableFloat;
	bool                                          Valid;
	bool                                          CallFunc_IsValid_ReturnValue;
	bool                                          CallFunc_NotEqual_NameName_ReturnValue;
	bool                                          CallFunc_BooleanAND_ReturnValue;
};
static_assert(alignof(NPC_Pawn_Parent_C_NPC_ScalableFloatIsValid) == 0x000008, "Wrong alignment on NPC_Pawn_Parent_C_NPC_ScalableFloatIsValid");
static_assert(sizeof(NPC_Pawn_Parent_C_NPC_ScalableFloatIsValid) == 0x000030, "Wrong size on NPC_Pawn_Parent_C_NPC_ScalableFloatIsValid");
static_assert(offsetof(NPC_Pawn_Parent_C_NPC_ScalableFloatIsValid, ScalableFloat) == 0x000000, "Member 'NPC_Pawn_Parent_C_NPC_ScalableFloatIsValid::ScalableFloat' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Parent_C_NPC_ScalableFloatIsValid, Valid) == 0x000028, "Member 'NPC_Pawn_Parent_C_NPC_ScalableFloatIsValid::Valid' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Parent_C_NPC_ScalableFloatIsValid, CallFunc_IsValid_ReturnValue) == 0x000029, "Member 'NPC_Pawn_Parent_C_NPC_ScalableFloatIsValid::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Parent_C_NPC_ScalableFloatIsValid, CallFunc_NotEqual_NameName_ReturnValue) == 0x00002A, "Member 'NPC_Pawn_Parent_C_NPC_ScalableFloatIsValid::CallFunc_NotEqual_NameName_ReturnValue' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Parent_C_NPC_ScalableFloatIsValid, CallFunc_BooleanAND_ReturnValue) == 0x00002B, "Member 'NPC_Pawn_Parent_C_NPC_ScalableFloatIsValid::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");

struct NPC_Pawn_Parent_C_NPC_SendGameplayCuePickupGrabbed final
{
public:
	bool                                          CallFunc_IsDedicatedServer_ReturnValue;
	uint8                                         Pad_1[0x7];
	struct FGameplayCueParameters                 CallFunc_MakeGameplayCueParameters_ReturnValue;
	struct FGameplayTag                           CallFunc_MakeLiteralGameplayTag_ReturnValue;
	bool                                          CallFunc_IsGameplayTagValid_ReturnValue;
};
static_assert(alignof(NPC_Pawn_Parent_C_NPC_SendGameplayCuePickupGrabbed) == 0x000008, "Wrong alignment on NPC_Pawn_Parent_C_NPC_SendGameplayCuePickupGrabbed");
static_assert(sizeof(NPC_Pawn_Parent_C_NPC_SendGameplayCuePickupGrabbed) == 0x0000E0, "Wrong size on NPC_Pawn_Parent_C_NPC_SendGameplayCuePickupGrabbed");
static_assert(offsetof(NPC_Pawn_Parent_C_NPC_SendGameplayCuePickupGrabbed, CallFunc_IsDedicatedServer_ReturnValue) == 0x000000, "Member 'NPC_Pawn_Parent_C_NPC_SendGameplayCuePickupGrabbed::CallFunc_IsDedicatedServer_ReturnValue' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Parent_C_NPC_SendGameplayCuePickupGrabbed, CallFunc_MakeGameplayCueParameters_ReturnValue) == 0x000008, "Member 'NPC_Pawn_Parent_C_NPC_SendGameplayCuePickupGrabbed::CallFunc_MakeGameplayCueParameters_ReturnValue' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Parent_C_NPC_SendGameplayCuePickupGrabbed, CallFunc_MakeLiteralGameplayTag_ReturnValue) == 0x0000D8, "Member 'NPC_Pawn_Parent_C_NPC_SendGameplayCuePickupGrabbed::CallFunc_MakeLiteralGameplayTag_ReturnValue' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Parent_C_NPC_SendGameplayCuePickupGrabbed, CallFunc_IsGameplayTagValid_ReturnValue) == 0x0000DC, "Member 'NPC_Pawn_Parent_C_NPC_SendGameplayCuePickupGrabbed::CallFunc_IsGameplayTagValid_ReturnValue' has a wrong offset!");

struct NPC_Pawn_Parent_C_NPC_SetBestLootRarityInInventory final
{
public:
	EFortRarity                                   NPC_BestLootRarityInInventory_0;
	EFortRarity                                   NPC_BestLootRarityInventoryFound;
	uint8                                         Pad_2[0x6];
	class FString                                 CallFunc_Concat_StrStr_ReturnValue;
	bool                                          CallFunc_HasAuthority_ReturnValue;
	uint8                                         Pad_19[0x3];
	int32                                         Temp_int_Loop_Counter_Variable;
	int32                                         CallFunc_Add_IntInt_ReturnValue;
	int32                                         Temp_int_Array_Index_Variable;
	bool                                          CallFunc_Greater_ByteByte_ReturnValue;
	uint8                                         Pad_29[0x7];
	TScriptInterface<class IFortInventoryOwnerInterface> CallFunc_GetItemsFromInventoryOwner_InventoryOwner_CastInput;
	TArray<class UFortWorldItem*>                 CallFunc_GetItemsFromInventoryOwner_Items;
	class FName                                   CallFunc_GetEnumeratorName_ReturnValue;
	uint8                                         Pad_54[0x4];
	class UFortWorldItem*                         CallFunc_Array_Get_Item;
	class FString                                 CallFunc_BuildString_Name_ReturnValue;
	class FText                                   CallFunc_GetDisplayName_ReturnValue;
	class FString                                 CallFunc_Conv_TextToString_ReturnValue;
	EFortRarity                                   CallFunc_GetRarity_ReturnValue;
	uint8                                         Pad_99[0x7];
	class FString                                 CallFunc_Concat_StrStr_ReturnValue_1;
	class FName                                   CallFunc_GetEnumeratorName_ReturnValue_1;
	uint8                                         Pad_B4[0x4];
	class FString                                 CallFunc_Concat_StrStr_ReturnValue_2;
	class FString                                 CallFunc_Conv_NameToString_ReturnValue;
	class FString                                 CallFunc_Concat_StrStr_ReturnValue_3;
	class FString                                 CallFunc_Concat_StrStr_ReturnValue_4;
	bool                                          CallFunc_Greater_ByteByte_ReturnValue_1;
	uint8                                         Pad_F9[0x7];
	class FString                                 CallFunc_Concat_StrStr_ReturnValue_5;
	int32                                         CallFunc_Array_Length_ReturnValue;
	bool                                          CallFunc_Less_IntInt_ReturnValue;
};
static_assert(alignof(NPC_Pawn_Parent_C_NPC_SetBestLootRarityInInventory) == 0x000008, "Wrong alignment on NPC_Pawn_Parent_C_NPC_SetBestLootRarityInInventory");
static_assert(sizeof(NPC_Pawn_Parent_C_NPC_SetBestLootRarityInInventory) == 0x000118, "Wrong size on NPC_Pawn_Parent_C_NPC_SetBestLootRarityInInventory");
static_assert(offsetof(NPC_Pawn_Parent_C_NPC_SetBestLootRarityInInventory, NPC_BestLootRarityInInventory_0) == 0x000000, "Member 'NPC_Pawn_Parent_C_NPC_SetBestLootRarityInInventory::NPC_BestLootRarityInInventory_0' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Parent_C_NPC_SetBestLootRarityInInventory, NPC_BestLootRarityInventoryFound) == 0x000001, "Member 'NPC_Pawn_Parent_C_NPC_SetBestLootRarityInInventory::NPC_BestLootRarityInventoryFound' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Parent_C_NPC_SetBestLootRarityInInventory, CallFunc_Concat_StrStr_ReturnValue) == 0x000008, "Member 'NPC_Pawn_Parent_C_NPC_SetBestLootRarityInInventory::CallFunc_Concat_StrStr_ReturnValue' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Parent_C_NPC_SetBestLootRarityInInventory, CallFunc_HasAuthority_ReturnValue) == 0x000018, "Member 'NPC_Pawn_Parent_C_NPC_SetBestLootRarityInInventory::CallFunc_HasAuthority_ReturnValue' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Parent_C_NPC_SetBestLootRarityInInventory, Temp_int_Loop_Counter_Variable) == 0x00001C, "Member 'NPC_Pawn_Parent_C_NPC_SetBestLootRarityInInventory::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Parent_C_NPC_SetBestLootRarityInInventory, CallFunc_Add_IntInt_ReturnValue) == 0x000020, "Member 'NPC_Pawn_Parent_C_NPC_SetBestLootRarityInInventory::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Parent_C_NPC_SetBestLootRarityInInventory, Temp_int_Array_Index_Variable) == 0x000024, "Member 'NPC_Pawn_Parent_C_NPC_SetBestLootRarityInInventory::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Parent_C_NPC_SetBestLootRarityInInventory, CallFunc_Greater_ByteByte_ReturnValue) == 0x000028, "Member 'NPC_Pawn_Parent_C_NPC_SetBestLootRarityInInventory::CallFunc_Greater_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Parent_C_NPC_SetBestLootRarityInInventory, CallFunc_GetItemsFromInventoryOwner_InventoryOwner_CastInput) == 0x000030, "Member 'NPC_Pawn_Parent_C_NPC_SetBestLootRarityInInventory::CallFunc_GetItemsFromInventoryOwner_InventoryOwner_CastInput' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Parent_C_NPC_SetBestLootRarityInInventory, CallFunc_GetItemsFromInventoryOwner_Items) == 0x000040, "Member 'NPC_Pawn_Parent_C_NPC_SetBestLootRarityInInventory::CallFunc_GetItemsFromInventoryOwner_Items' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Parent_C_NPC_SetBestLootRarityInInventory, CallFunc_GetEnumeratorName_ReturnValue) == 0x000050, "Member 'NPC_Pawn_Parent_C_NPC_SetBestLootRarityInInventory::CallFunc_GetEnumeratorName_ReturnValue' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Parent_C_NPC_SetBestLootRarityInInventory, CallFunc_Array_Get_Item) == 0x000058, "Member 'NPC_Pawn_Parent_C_NPC_SetBestLootRarityInInventory::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Parent_C_NPC_SetBestLootRarityInInventory, CallFunc_BuildString_Name_ReturnValue) == 0x000060, "Member 'NPC_Pawn_Parent_C_NPC_SetBestLootRarityInInventory::CallFunc_BuildString_Name_ReturnValue' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Parent_C_NPC_SetBestLootRarityInInventory, CallFunc_GetDisplayName_ReturnValue) == 0x000070, "Member 'NPC_Pawn_Parent_C_NPC_SetBestLootRarityInInventory::CallFunc_GetDisplayName_ReturnValue' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Parent_C_NPC_SetBestLootRarityInInventory, CallFunc_Conv_TextToString_ReturnValue) == 0x000088, "Member 'NPC_Pawn_Parent_C_NPC_SetBestLootRarityInInventory::CallFunc_Conv_TextToString_ReturnValue' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Parent_C_NPC_SetBestLootRarityInInventory, CallFunc_GetRarity_ReturnValue) == 0x000098, "Member 'NPC_Pawn_Parent_C_NPC_SetBestLootRarityInInventory::CallFunc_GetRarity_ReturnValue' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Parent_C_NPC_SetBestLootRarityInInventory, CallFunc_Concat_StrStr_ReturnValue_1) == 0x0000A0, "Member 'NPC_Pawn_Parent_C_NPC_SetBestLootRarityInInventory::CallFunc_Concat_StrStr_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Parent_C_NPC_SetBestLootRarityInInventory, CallFunc_GetEnumeratorName_ReturnValue_1) == 0x0000B0, "Member 'NPC_Pawn_Parent_C_NPC_SetBestLootRarityInInventory::CallFunc_GetEnumeratorName_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Parent_C_NPC_SetBestLootRarityInInventory, CallFunc_Concat_StrStr_ReturnValue_2) == 0x0000B8, "Member 'NPC_Pawn_Parent_C_NPC_SetBestLootRarityInInventory::CallFunc_Concat_StrStr_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Parent_C_NPC_SetBestLootRarityInInventory, CallFunc_Conv_NameToString_ReturnValue) == 0x0000C8, "Member 'NPC_Pawn_Parent_C_NPC_SetBestLootRarityInInventory::CallFunc_Conv_NameToString_ReturnValue' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Parent_C_NPC_SetBestLootRarityInInventory, CallFunc_Concat_StrStr_ReturnValue_3) == 0x0000D8, "Member 'NPC_Pawn_Parent_C_NPC_SetBestLootRarityInInventory::CallFunc_Concat_StrStr_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Parent_C_NPC_SetBestLootRarityInInventory, CallFunc_Concat_StrStr_ReturnValue_4) == 0x0000E8, "Member 'NPC_Pawn_Parent_C_NPC_SetBestLootRarityInInventory::CallFunc_Concat_StrStr_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Parent_C_NPC_SetBestLootRarityInInventory, CallFunc_Greater_ByteByte_ReturnValue_1) == 0x0000F8, "Member 'NPC_Pawn_Parent_C_NPC_SetBestLootRarityInInventory::CallFunc_Greater_ByteByte_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Parent_C_NPC_SetBestLootRarityInInventory, CallFunc_Concat_StrStr_ReturnValue_5) == 0x000100, "Member 'NPC_Pawn_Parent_C_NPC_SetBestLootRarityInInventory::CallFunc_Concat_StrStr_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Parent_C_NPC_SetBestLootRarityInInventory, CallFunc_Array_Length_ReturnValue) == 0x000110, "Member 'NPC_Pawn_Parent_C_NPC_SetBestLootRarityInInventory::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Parent_C_NPC_SetBestLootRarityInInventory, CallFunc_Less_IntInt_ReturnValue) == 0x000114, "Member 'NPC_Pawn_Parent_C_NPC_SetBestLootRarityInInventory::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");

struct NPC_Pawn_Parent_C_NPC_SetCanDropLoot final
{
public:
	bool                                          CanDropLoot;
};
static_assert(alignof(NPC_Pawn_Parent_C_NPC_SetCanDropLoot) == 0x000001, "Wrong alignment on NPC_Pawn_Parent_C_NPC_SetCanDropLoot");
static_assert(sizeof(NPC_Pawn_Parent_C_NPC_SetCanDropLoot) == 0x000001, "Wrong size on NPC_Pawn_Parent_C_NPC_SetCanDropLoot");
static_assert(offsetof(NPC_Pawn_Parent_C_NPC_SetCanDropLoot, CanDropLoot) == 0x000000, "Member 'NPC_Pawn_Parent_C_NPC_SetCanDropLoot::CanDropLoot' has a wrong offset!");

struct NPC_Pawn_Parent_C_NPC_SetLeader final
{
public:
	class AActor*                                 Leader;
	bool                                          Success_;
	uint8                                         Pad_9[0x7];
	class AActor*                                 LeaderSet;
	bool                                          CallFunc_NPC_HasLeader__HasLeader_;
	uint8                                         Pad_19[0x7];
	class AActor*                                 CallFunc_NPC_HasLeader__Leader;
	class FName                                   CallFunc_MakeLiteralName_ReturnValue;
	uint8                                         Pad_2C[0x4];
	class UBlackboardComponent*                   CallFunc_GetBlackboard_ReturnValue;
	bool                                          CallFunc_IsValid_ReturnValue;
	bool                                          CallFunc_IsValid_ReturnValue_1;
};
static_assert(alignof(NPC_Pawn_Parent_C_NPC_SetLeader) == 0x000008, "Wrong alignment on NPC_Pawn_Parent_C_NPC_SetLeader");
static_assert(sizeof(NPC_Pawn_Parent_C_NPC_SetLeader) == 0x000040, "Wrong size on NPC_Pawn_Parent_C_NPC_SetLeader");
static_assert(offsetof(NPC_Pawn_Parent_C_NPC_SetLeader, Leader) == 0x000000, "Member 'NPC_Pawn_Parent_C_NPC_SetLeader::Leader' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Parent_C_NPC_SetLeader, Success_) == 0x000008, "Member 'NPC_Pawn_Parent_C_NPC_SetLeader::Success_' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Parent_C_NPC_SetLeader, LeaderSet) == 0x000010, "Member 'NPC_Pawn_Parent_C_NPC_SetLeader::LeaderSet' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Parent_C_NPC_SetLeader, CallFunc_NPC_HasLeader__HasLeader_) == 0x000018, "Member 'NPC_Pawn_Parent_C_NPC_SetLeader::CallFunc_NPC_HasLeader__HasLeader_' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Parent_C_NPC_SetLeader, CallFunc_NPC_HasLeader__Leader) == 0x000020, "Member 'NPC_Pawn_Parent_C_NPC_SetLeader::CallFunc_NPC_HasLeader__Leader' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Parent_C_NPC_SetLeader, CallFunc_MakeLiteralName_ReturnValue) == 0x000028, "Member 'NPC_Pawn_Parent_C_NPC_SetLeader::CallFunc_MakeLiteralName_ReturnValue' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Parent_C_NPC_SetLeader, CallFunc_GetBlackboard_ReturnValue) == 0x000030, "Member 'NPC_Pawn_Parent_C_NPC_SetLeader::CallFunc_GetBlackboard_ReturnValue' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Parent_C_NPC_SetLeader, CallFunc_IsValid_ReturnValue) == 0x000038, "Member 'NPC_Pawn_Parent_C_NPC_SetLeader::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Parent_C_NPC_SetLeader, CallFunc_IsValid_ReturnValue_1) == 0x000039, "Member 'NPC_Pawn_Parent_C_NPC_SetLeader::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");

struct NPC_Pawn_Parent_C_NPC_SetLootCollectionPhaseCompleteToBlackboard final
{
public:
	bool                                          LootCollectionPhaseComplete;
	uint8                                         Pad_1[0x3];
	class FName                                   CallFunc_MakeLiteralName_ReturnValue;
	class UBlackboardComponent*                   CallFunc_GetBlackboard_ReturnValue;
	bool                                          CallFunc_GetValueAsBool_ReturnValue;
	bool                                          CallFunc_NotEqual_BoolBool_ReturnValue;
};
static_assert(alignof(NPC_Pawn_Parent_C_NPC_SetLootCollectionPhaseCompleteToBlackboard) == 0x000008, "Wrong alignment on NPC_Pawn_Parent_C_NPC_SetLootCollectionPhaseCompleteToBlackboard");
static_assert(sizeof(NPC_Pawn_Parent_C_NPC_SetLootCollectionPhaseCompleteToBlackboard) == 0x000018, "Wrong size on NPC_Pawn_Parent_C_NPC_SetLootCollectionPhaseCompleteToBlackboard");
static_assert(offsetof(NPC_Pawn_Parent_C_NPC_SetLootCollectionPhaseCompleteToBlackboard, LootCollectionPhaseComplete) == 0x000000, "Member 'NPC_Pawn_Parent_C_NPC_SetLootCollectionPhaseCompleteToBlackboard::LootCollectionPhaseComplete' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Parent_C_NPC_SetLootCollectionPhaseCompleteToBlackboard, CallFunc_MakeLiteralName_ReturnValue) == 0x000004, "Member 'NPC_Pawn_Parent_C_NPC_SetLootCollectionPhaseCompleteToBlackboard::CallFunc_MakeLiteralName_ReturnValue' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Parent_C_NPC_SetLootCollectionPhaseCompleteToBlackboard, CallFunc_GetBlackboard_ReturnValue) == 0x000008, "Member 'NPC_Pawn_Parent_C_NPC_SetLootCollectionPhaseCompleteToBlackboard::CallFunc_GetBlackboard_ReturnValue' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Parent_C_NPC_SetLootCollectionPhaseCompleteToBlackboard, CallFunc_GetValueAsBool_ReturnValue) == 0x000010, "Member 'NPC_Pawn_Parent_C_NPC_SetLootCollectionPhaseCompleteToBlackboard::CallFunc_GetValueAsBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Parent_C_NPC_SetLootCollectionPhaseCompleteToBlackboard, CallFunc_NotEqual_BoolBool_ReturnValue) == 0x000011, "Member 'NPC_Pawn_Parent_C_NPC_SetLootCollectionPhaseCompleteToBlackboard::CallFunc_NotEqual_BoolBool_ReturnValue' has a wrong offset!");

struct NPC_Pawn_Parent_C_NPC_SetReturnGatheredLootToBlackboard final
{
public:
	class FName                                   CallFunc_MakeLiteralName_ReturnValue;
	bool                                          CallFunc_NPC_GetInventoryInformation_HasItemInInventory;
	uint8                                         Pad_5[0x3];
	int32                                         CallFunc_NPC_GetInventoryInformation_TotalNumberOfInventoryItems;
	int32                                         CallFunc_NPC_GetInventoryInformation_LastInventoryItemIndex;
	bool                                          CallFunc_NPC_GetInventoryInformation_HasEnoughItemsToDeliver;
	bool                                          CallFunc_NPC_GetInventoryInformation_ConsumedEnoughItemsToBeConsideredFull;
	uint8                                         Pad_12[0x6];
	class UBlackboardComponent*                   CallFunc_GetBlackboard_ReturnValue;
	bool                                          CallFunc_GetValueAsBool_ReturnValue;
	bool                                          CallFunc_NotEqual_BoolBool_ReturnValue;
	bool                                          CallFunc_NotEqual_BoolBool_ReturnValue_1;
};
static_assert(alignof(NPC_Pawn_Parent_C_NPC_SetReturnGatheredLootToBlackboard) == 0x000008, "Wrong alignment on NPC_Pawn_Parent_C_NPC_SetReturnGatheredLootToBlackboard");
static_assert(sizeof(NPC_Pawn_Parent_C_NPC_SetReturnGatheredLootToBlackboard) == 0x000028, "Wrong size on NPC_Pawn_Parent_C_NPC_SetReturnGatheredLootToBlackboard");
static_assert(offsetof(NPC_Pawn_Parent_C_NPC_SetReturnGatheredLootToBlackboard, CallFunc_MakeLiteralName_ReturnValue) == 0x000000, "Member 'NPC_Pawn_Parent_C_NPC_SetReturnGatheredLootToBlackboard::CallFunc_MakeLiteralName_ReturnValue' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Parent_C_NPC_SetReturnGatheredLootToBlackboard, CallFunc_NPC_GetInventoryInformation_HasItemInInventory) == 0x000004, "Member 'NPC_Pawn_Parent_C_NPC_SetReturnGatheredLootToBlackboard::CallFunc_NPC_GetInventoryInformation_HasItemInInventory' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Parent_C_NPC_SetReturnGatheredLootToBlackboard, CallFunc_NPC_GetInventoryInformation_TotalNumberOfInventoryItems) == 0x000008, "Member 'NPC_Pawn_Parent_C_NPC_SetReturnGatheredLootToBlackboard::CallFunc_NPC_GetInventoryInformation_TotalNumberOfInventoryItems' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Parent_C_NPC_SetReturnGatheredLootToBlackboard, CallFunc_NPC_GetInventoryInformation_LastInventoryItemIndex) == 0x00000C, "Member 'NPC_Pawn_Parent_C_NPC_SetReturnGatheredLootToBlackboard::CallFunc_NPC_GetInventoryInformation_LastInventoryItemIndex' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Parent_C_NPC_SetReturnGatheredLootToBlackboard, CallFunc_NPC_GetInventoryInformation_HasEnoughItemsToDeliver) == 0x000010, "Member 'NPC_Pawn_Parent_C_NPC_SetReturnGatheredLootToBlackboard::CallFunc_NPC_GetInventoryInformation_HasEnoughItemsToDeliver' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Parent_C_NPC_SetReturnGatheredLootToBlackboard, CallFunc_NPC_GetInventoryInformation_ConsumedEnoughItemsToBeConsideredFull) == 0x000011, "Member 'NPC_Pawn_Parent_C_NPC_SetReturnGatheredLootToBlackboard::CallFunc_NPC_GetInventoryInformation_ConsumedEnoughItemsToBeConsideredFull' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Parent_C_NPC_SetReturnGatheredLootToBlackboard, CallFunc_GetBlackboard_ReturnValue) == 0x000018, "Member 'NPC_Pawn_Parent_C_NPC_SetReturnGatheredLootToBlackboard::CallFunc_GetBlackboard_ReturnValue' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Parent_C_NPC_SetReturnGatheredLootToBlackboard, CallFunc_GetValueAsBool_ReturnValue) == 0x000020, "Member 'NPC_Pawn_Parent_C_NPC_SetReturnGatheredLootToBlackboard::CallFunc_GetValueAsBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Parent_C_NPC_SetReturnGatheredLootToBlackboard, CallFunc_NotEqual_BoolBool_ReturnValue) == 0x000021, "Member 'NPC_Pawn_Parent_C_NPC_SetReturnGatheredLootToBlackboard::CallFunc_NotEqual_BoolBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Parent_C_NPC_SetReturnGatheredLootToBlackboard, CallFunc_NotEqual_BoolBool_ReturnValue_1) == 0x000022, "Member 'NPC_Pawn_Parent_C_NPC_SetReturnGatheredLootToBlackboard::CallFunc_NotEqual_BoolBool_ReturnValue_1' has a wrong offset!");

struct NPC_Pawn_Parent_C_NPC_TargetSlotInfo final
{
public:
	Enum_NPC_TargetSlots                          TargetSlotType;
	uint8                                         Pad_1[0x7];
	class AActor*                                 TargetWeWantToSlotOnto;
	int32                                         TargetSlotCount;
	int32                                         TargetSlotMax;
	int32                                         NPC_TargetSlotsRequired;
	bool                                          TargetSlotsMaxOrMore;
	bool                                          TargetSlotCountIsExactlyMax;
	bool                                          NPC_IsTargetSlotOwner;
	bool                                          NPC_HasSpaceToSlotOnTarget;
	Enum_NPC_TargetSlots                          TargetSlotTypeOut;
	uint8                                         Pad_21[0x7];
	class UClass*                                 TargetSlotCountingGE;
	struct FScalableFloat                         AI_TargetSlotSizeHF;
	struct FScalableFloat                         AI_TargetSlotDurationHF;
	class UClass*                                 TargetSlotOverrideGE;
	class UClass*                                 TargetSlotOwnerGE;
	class UClass*                                 TargetSlotCountingMaxedGE;
	class UClass*                                 NPC_TargetSlotCountingMaxedGE;
	class UClass*                                 NPC_TargetSlotOwnerGE;
	class UClass*                                 NPC_TargetSlotOverrideGE;
	struct FScalableFloat                         NPC_AI_TargetSlotDurationHF;
	struct FScalableFloat                         NPC_AI_TargetSlotSizeHF;
	class UClass*                                 NPC_TargetSlotCountingGE;
	bool                                          Temp_bool_True_if_break_was_hit_Variable;
	uint8                                         Pad_109[0x7];
	class UAbilitySystemComponent*                CallFunc_GetAbilitySystemComponent_ReturnValue;
	bool                                          CallFunc_IsValid_ReturnValue;
	bool                                          CallFunc_Not_PreBool_ReturnValue;
	uint8                                         Pad_11A[0x2];
	int32                                         Temp_int_Array_Index_Variable;
	TArray<class UClass*>                         K2Node_MakeArray_Array;
	int32                                         CallFunc_GetTotalGameplayEffectCount_FinalEffectCount;
	bool                                          CallFunc_Greater_IntInt_ReturnValue;
	bool                                          CallFunc_NPC_GetScalableFloatHotfixValue_AsBool;
	uint8                                         Pad_136[0x2];
	int32                                         CallFunc_NPC_GetScalableFloatHotfixValue_AsIntRounded;
	uint8                                         Pad_13C[0x4];
	double                                        CallFunc_NPC_GetScalableFloatHotfixValue_AsFloat;
	TArray<class UClass*>                         K2Node_MakeArray_Array_1;
	bool                                          CallFunc_IsValidClass_ReturnValue;
	uint8                                         Pad_159[0x3];
	int32                                         CallFunc_GetTotalGameplayEffectCount_FinalEffectCount_1;
	int32                                         Temp_int_Loop_Counter_Variable;
	uint8                                         Pad_164[0x4];
	struct FStruct_NPC_TargetSlots                CallFunc_Array_Get_Item;
	int32                                         CallFunc_Array_Length_ReturnValue;
	bool                                          CallFunc_Less_IntInt_ReturnValue;
	bool                                          CallFunc_BooleanAND_ReturnValue;
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;
	uint8                                         Pad_1E7[0x1];
	int32                                         CallFunc_Add_IntInt_ReturnValue;
	int32                                         CallFunc_MakeLiteralInt_ReturnValue;
	int32                                         CallFunc_Subtract_IntInt_ReturnValue;
	bool                                          CallFunc_GreaterEqual_IntInt_ReturnValue;
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue;
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue;
};
static_assert(alignof(NPC_Pawn_Parent_C_NPC_TargetSlotInfo) == 0x000008, "Wrong alignment on NPC_Pawn_Parent_C_NPC_TargetSlotInfo");
static_assert(sizeof(NPC_Pawn_Parent_C_NPC_TargetSlotInfo) == 0x0001F8, "Wrong size on NPC_Pawn_Parent_C_NPC_TargetSlotInfo");
static_assert(offsetof(NPC_Pawn_Parent_C_NPC_TargetSlotInfo, TargetSlotType) == 0x000000, "Member 'NPC_Pawn_Parent_C_NPC_TargetSlotInfo::TargetSlotType' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Parent_C_NPC_TargetSlotInfo, TargetWeWantToSlotOnto) == 0x000008, "Member 'NPC_Pawn_Parent_C_NPC_TargetSlotInfo::TargetWeWantToSlotOnto' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Parent_C_NPC_TargetSlotInfo, TargetSlotCount) == 0x000010, "Member 'NPC_Pawn_Parent_C_NPC_TargetSlotInfo::TargetSlotCount' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Parent_C_NPC_TargetSlotInfo, TargetSlotMax) == 0x000014, "Member 'NPC_Pawn_Parent_C_NPC_TargetSlotInfo::TargetSlotMax' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Parent_C_NPC_TargetSlotInfo, NPC_TargetSlotsRequired) == 0x000018, "Member 'NPC_Pawn_Parent_C_NPC_TargetSlotInfo::NPC_TargetSlotsRequired' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Parent_C_NPC_TargetSlotInfo, TargetSlotsMaxOrMore) == 0x00001C, "Member 'NPC_Pawn_Parent_C_NPC_TargetSlotInfo::TargetSlotsMaxOrMore' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Parent_C_NPC_TargetSlotInfo, TargetSlotCountIsExactlyMax) == 0x00001D, "Member 'NPC_Pawn_Parent_C_NPC_TargetSlotInfo::TargetSlotCountIsExactlyMax' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Parent_C_NPC_TargetSlotInfo, NPC_IsTargetSlotOwner) == 0x00001E, "Member 'NPC_Pawn_Parent_C_NPC_TargetSlotInfo::NPC_IsTargetSlotOwner' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Parent_C_NPC_TargetSlotInfo, NPC_HasSpaceToSlotOnTarget) == 0x00001F, "Member 'NPC_Pawn_Parent_C_NPC_TargetSlotInfo::NPC_HasSpaceToSlotOnTarget' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Parent_C_NPC_TargetSlotInfo, TargetSlotTypeOut) == 0x000020, "Member 'NPC_Pawn_Parent_C_NPC_TargetSlotInfo::TargetSlotTypeOut' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Parent_C_NPC_TargetSlotInfo, TargetSlotCountingGE) == 0x000028, "Member 'NPC_Pawn_Parent_C_NPC_TargetSlotInfo::TargetSlotCountingGE' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Parent_C_NPC_TargetSlotInfo, AI_TargetSlotSizeHF) == 0x000030, "Member 'NPC_Pawn_Parent_C_NPC_TargetSlotInfo::AI_TargetSlotSizeHF' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Parent_C_NPC_TargetSlotInfo, AI_TargetSlotDurationHF) == 0x000058, "Member 'NPC_Pawn_Parent_C_NPC_TargetSlotInfo::AI_TargetSlotDurationHF' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Parent_C_NPC_TargetSlotInfo, TargetSlotOverrideGE) == 0x000080, "Member 'NPC_Pawn_Parent_C_NPC_TargetSlotInfo::TargetSlotOverrideGE' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Parent_C_NPC_TargetSlotInfo, TargetSlotOwnerGE) == 0x000088, "Member 'NPC_Pawn_Parent_C_NPC_TargetSlotInfo::TargetSlotOwnerGE' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Parent_C_NPC_TargetSlotInfo, TargetSlotCountingMaxedGE) == 0x000090, "Member 'NPC_Pawn_Parent_C_NPC_TargetSlotInfo::TargetSlotCountingMaxedGE' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Parent_C_NPC_TargetSlotInfo, NPC_TargetSlotCountingMaxedGE) == 0x000098, "Member 'NPC_Pawn_Parent_C_NPC_TargetSlotInfo::NPC_TargetSlotCountingMaxedGE' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Parent_C_NPC_TargetSlotInfo, NPC_TargetSlotOwnerGE) == 0x0000A0, "Member 'NPC_Pawn_Parent_C_NPC_TargetSlotInfo::NPC_TargetSlotOwnerGE' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Parent_C_NPC_TargetSlotInfo, NPC_TargetSlotOverrideGE) == 0x0000A8, "Member 'NPC_Pawn_Parent_C_NPC_TargetSlotInfo::NPC_TargetSlotOverrideGE' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Parent_C_NPC_TargetSlotInfo, NPC_AI_TargetSlotDurationHF) == 0x0000B0, "Member 'NPC_Pawn_Parent_C_NPC_TargetSlotInfo::NPC_AI_TargetSlotDurationHF' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Parent_C_NPC_TargetSlotInfo, NPC_AI_TargetSlotSizeHF) == 0x0000D8, "Member 'NPC_Pawn_Parent_C_NPC_TargetSlotInfo::NPC_AI_TargetSlotSizeHF' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Parent_C_NPC_TargetSlotInfo, NPC_TargetSlotCountingGE) == 0x000100, "Member 'NPC_Pawn_Parent_C_NPC_TargetSlotInfo::NPC_TargetSlotCountingGE' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Parent_C_NPC_TargetSlotInfo, Temp_bool_True_if_break_was_hit_Variable) == 0x000108, "Member 'NPC_Pawn_Parent_C_NPC_TargetSlotInfo::Temp_bool_True_if_break_was_hit_Variable' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Parent_C_NPC_TargetSlotInfo, CallFunc_GetAbilitySystemComponent_ReturnValue) == 0x000110, "Member 'NPC_Pawn_Parent_C_NPC_TargetSlotInfo::CallFunc_GetAbilitySystemComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Parent_C_NPC_TargetSlotInfo, CallFunc_IsValid_ReturnValue) == 0x000118, "Member 'NPC_Pawn_Parent_C_NPC_TargetSlotInfo::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Parent_C_NPC_TargetSlotInfo, CallFunc_Not_PreBool_ReturnValue) == 0x000119, "Member 'NPC_Pawn_Parent_C_NPC_TargetSlotInfo::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Parent_C_NPC_TargetSlotInfo, Temp_int_Array_Index_Variable) == 0x00011C, "Member 'NPC_Pawn_Parent_C_NPC_TargetSlotInfo::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Parent_C_NPC_TargetSlotInfo, K2Node_MakeArray_Array) == 0x000120, "Member 'NPC_Pawn_Parent_C_NPC_TargetSlotInfo::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Parent_C_NPC_TargetSlotInfo, CallFunc_GetTotalGameplayEffectCount_FinalEffectCount) == 0x000130, "Member 'NPC_Pawn_Parent_C_NPC_TargetSlotInfo::CallFunc_GetTotalGameplayEffectCount_FinalEffectCount' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Parent_C_NPC_TargetSlotInfo, CallFunc_Greater_IntInt_ReturnValue) == 0x000134, "Member 'NPC_Pawn_Parent_C_NPC_TargetSlotInfo::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Parent_C_NPC_TargetSlotInfo, CallFunc_NPC_GetScalableFloatHotfixValue_AsBool) == 0x000135, "Member 'NPC_Pawn_Parent_C_NPC_TargetSlotInfo::CallFunc_NPC_GetScalableFloatHotfixValue_AsBool' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Parent_C_NPC_TargetSlotInfo, CallFunc_NPC_GetScalableFloatHotfixValue_AsIntRounded) == 0x000138, "Member 'NPC_Pawn_Parent_C_NPC_TargetSlotInfo::CallFunc_NPC_GetScalableFloatHotfixValue_AsIntRounded' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Parent_C_NPC_TargetSlotInfo, CallFunc_NPC_GetScalableFloatHotfixValue_AsFloat) == 0x000140, "Member 'NPC_Pawn_Parent_C_NPC_TargetSlotInfo::CallFunc_NPC_GetScalableFloatHotfixValue_AsFloat' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Parent_C_NPC_TargetSlotInfo, K2Node_MakeArray_Array_1) == 0x000148, "Member 'NPC_Pawn_Parent_C_NPC_TargetSlotInfo::K2Node_MakeArray_Array_1' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Parent_C_NPC_TargetSlotInfo, CallFunc_IsValidClass_ReturnValue) == 0x000158, "Member 'NPC_Pawn_Parent_C_NPC_TargetSlotInfo::CallFunc_IsValidClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Parent_C_NPC_TargetSlotInfo, CallFunc_GetTotalGameplayEffectCount_FinalEffectCount_1) == 0x00015C, "Member 'NPC_Pawn_Parent_C_NPC_TargetSlotInfo::CallFunc_GetTotalGameplayEffectCount_FinalEffectCount_1' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Parent_C_NPC_TargetSlotInfo, Temp_int_Loop_Counter_Variable) == 0x000160, "Member 'NPC_Pawn_Parent_C_NPC_TargetSlotInfo::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Parent_C_NPC_TargetSlotInfo, CallFunc_Array_Get_Item) == 0x000168, "Member 'NPC_Pawn_Parent_C_NPC_TargetSlotInfo::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Parent_C_NPC_TargetSlotInfo, CallFunc_Array_Length_ReturnValue) == 0x0001E0, "Member 'NPC_Pawn_Parent_C_NPC_TargetSlotInfo::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Parent_C_NPC_TargetSlotInfo, CallFunc_Less_IntInt_ReturnValue) == 0x0001E4, "Member 'NPC_Pawn_Parent_C_NPC_TargetSlotInfo::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Parent_C_NPC_TargetSlotInfo, CallFunc_BooleanAND_ReturnValue) == 0x0001E5, "Member 'NPC_Pawn_Parent_C_NPC_TargetSlotInfo::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Parent_C_NPC_TargetSlotInfo, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x0001E6, "Member 'NPC_Pawn_Parent_C_NPC_TargetSlotInfo::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Parent_C_NPC_TargetSlotInfo, CallFunc_Add_IntInt_ReturnValue) == 0x0001E8, "Member 'NPC_Pawn_Parent_C_NPC_TargetSlotInfo::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Parent_C_NPC_TargetSlotInfo, CallFunc_MakeLiteralInt_ReturnValue) == 0x0001EC, "Member 'NPC_Pawn_Parent_C_NPC_TargetSlotInfo::CallFunc_MakeLiteralInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Parent_C_NPC_TargetSlotInfo, CallFunc_Subtract_IntInt_ReturnValue) == 0x0001F0, "Member 'NPC_Pawn_Parent_C_NPC_TargetSlotInfo::CallFunc_Subtract_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Parent_C_NPC_TargetSlotInfo, CallFunc_GreaterEqual_IntInt_ReturnValue) == 0x0001F4, "Member 'NPC_Pawn_Parent_C_NPC_TargetSlotInfo::CallFunc_GreaterEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Parent_C_NPC_TargetSlotInfo, CallFunc_LessEqual_IntInt_ReturnValue) == 0x0001F5, "Member 'NPC_Pawn_Parent_C_NPC_TargetSlotInfo::CallFunc_LessEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Parent_C_NPC_TargetSlotInfo, CallFunc_EqualEqual_IntInt_ReturnValue) == 0x0001F6, "Member 'NPC_Pawn_Parent_C_NPC_TargetSlotInfo::CallFunc_EqualEqual_IntInt_ReturnValue' has a wrong offset!");

struct NPC_Pawn_Parent_C_NPC_TargetSlotIsUsingOverride final
{
public:
	Enum_NPC_TargetSlots                          TargetSlotType;
	uint8                                         Pad_1[0x7];
	class AActor*                                 TargetWeWantToSlotOnto;
	bool                                          Override;
	uint8                                         Pad_11[0x7];
	class UClass*                                 NPC_TargetSlotOverrideGE;
	int32                                         CallFunc_NPC_TargetSlotInfo_TargetSlotCount;
	int32                                         CallFunc_NPC_TargetSlotInfo_TargetSlotMax;
	int32                                         CallFunc_NPC_TargetSlotInfo_NPC_TargetSlotsRequired;
	bool                                          CallFunc_NPC_TargetSlotInfo_TargetSlotsMaxOrMore;
	bool                                          CallFunc_NPC_TargetSlotInfo_TargetSlotCountIsExactlyMax;
	bool                                          CallFunc_NPC_TargetSlotInfo_NPC_IsTargetSlotOwner;
	bool                                          CallFunc_NPC_TargetSlotInfo_NPC_HasSpaceToSlotOnTarget;
	Enum_NPC_TargetSlots                          CallFunc_NPC_TargetSlotInfo_TargetSlotTypeOut;
	uint8                                         Pad_31[0x7];
	class UClass*                                 CallFunc_NPC_TargetSlotInfo_TargetSlotCountingGE;
	struct FScalableFloat                         CallFunc_NPC_TargetSlotInfo_AI_TargetSlotSizeHF;
	struct FScalableFloat                         CallFunc_NPC_TargetSlotInfo_AI_TargetSlotDurationHF;
	class UClass*                                 CallFunc_NPC_TargetSlotInfo_TargetSlotOverrideGE;
	class UClass*                                 CallFunc_NPC_TargetSlotInfo_TargetSlotOwnerGE;
	class UClass*                                 CallFunc_NPC_TargetSlotInfo_TargetSlotCountingMaxedGE;
	bool                                          CallFunc_IsValidClass_ReturnValue;
	uint8                                         Pad_A9[0x7];
	class UAbilitySystemComponent*                CallFunc_GetAbilitySystemComponent_ReturnValue;
	bool                                          CallFunc_IsValid_ReturnValue;
	uint8                                         Pad_B9[0x7];
	TArray<class UClass*>                         K2Node_MakeArray_Array;
	int32                                         CallFunc_GetTotalGameplayEffectCount_FinalEffectCount;
	bool                                          CallFunc_NotEqual_IntInt_ReturnValue;
};
static_assert(alignof(NPC_Pawn_Parent_C_NPC_TargetSlotIsUsingOverride) == 0x000008, "Wrong alignment on NPC_Pawn_Parent_C_NPC_TargetSlotIsUsingOverride");
static_assert(sizeof(NPC_Pawn_Parent_C_NPC_TargetSlotIsUsingOverride) == 0x0000D8, "Wrong size on NPC_Pawn_Parent_C_NPC_TargetSlotIsUsingOverride");
static_assert(offsetof(NPC_Pawn_Parent_C_NPC_TargetSlotIsUsingOverride, TargetSlotType) == 0x000000, "Member 'NPC_Pawn_Parent_C_NPC_TargetSlotIsUsingOverride::TargetSlotType' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Parent_C_NPC_TargetSlotIsUsingOverride, TargetWeWantToSlotOnto) == 0x000008, "Member 'NPC_Pawn_Parent_C_NPC_TargetSlotIsUsingOverride::TargetWeWantToSlotOnto' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Parent_C_NPC_TargetSlotIsUsingOverride, Override) == 0x000010, "Member 'NPC_Pawn_Parent_C_NPC_TargetSlotIsUsingOverride::Override' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Parent_C_NPC_TargetSlotIsUsingOverride, NPC_TargetSlotOverrideGE) == 0x000018, "Member 'NPC_Pawn_Parent_C_NPC_TargetSlotIsUsingOverride::NPC_TargetSlotOverrideGE' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Parent_C_NPC_TargetSlotIsUsingOverride, CallFunc_NPC_TargetSlotInfo_TargetSlotCount) == 0x000020, "Member 'NPC_Pawn_Parent_C_NPC_TargetSlotIsUsingOverride::CallFunc_NPC_TargetSlotInfo_TargetSlotCount' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Parent_C_NPC_TargetSlotIsUsingOverride, CallFunc_NPC_TargetSlotInfo_TargetSlotMax) == 0x000024, "Member 'NPC_Pawn_Parent_C_NPC_TargetSlotIsUsingOverride::CallFunc_NPC_TargetSlotInfo_TargetSlotMax' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Parent_C_NPC_TargetSlotIsUsingOverride, CallFunc_NPC_TargetSlotInfo_NPC_TargetSlotsRequired) == 0x000028, "Member 'NPC_Pawn_Parent_C_NPC_TargetSlotIsUsingOverride::CallFunc_NPC_TargetSlotInfo_NPC_TargetSlotsRequired' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Parent_C_NPC_TargetSlotIsUsingOverride, CallFunc_NPC_TargetSlotInfo_TargetSlotsMaxOrMore) == 0x00002C, "Member 'NPC_Pawn_Parent_C_NPC_TargetSlotIsUsingOverride::CallFunc_NPC_TargetSlotInfo_TargetSlotsMaxOrMore' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Parent_C_NPC_TargetSlotIsUsingOverride, CallFunc_NPC_TargetSlotInfo_TargetSlotCountIsExactlyMax) == 0x00002D, "Member 'NPC_Pawn_Parent_C_NPC_TargetSlotIsUsingOverride::CallFunc_NPC_TargetSlotInfo_TargetSlotCountIsExactlyMax' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Parent_C_NPC_TargetSlotIsUsingOverride, CallFunc_NPC_TargetSlotInfo_NPC_IsTargetSlotOwner) == 0x00002E, "Member 'NPC_Pawn_Parent_C_NPC_TargetSlotIsUsingOverride::CallFunc_NPC_TargetSlotInfo_NPC_IsTargetSlotOwner' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Parent_C_NPC_TargetSlotIsUsingOverride, CallFunc_NPC_TargetSlotInfo_NPC_HasSpaceToSlotOnTarget) == 0x00002F, "Member 'NPC_Pawn_Parent_C_NPC_TargetSlotIsUsingOverride::CallFunc_NPC_TargetSlotInfo_NPC_HasSpaceToSlotOnTarget' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Parent_C_NPC_TargetSlotIsUsingOverride, CallFunc_NPC_TargetSlotInfo_TargetSlotTypeOut) == 0x000030, "Member 'NPC_Pawn_Parent_C_NPC_TargetSlotIsUsingOverride::CallFunc_NPC_TargetSlotInfo_TargetSlotTypeOut' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Parent_C_NPC_TargetSlotIsUsingOverride, CallFunc_NPC_TargetSlotInfo_TargetSlotCountingGE) == 0x000038, "Member 'NPC_Pawn_Parent_C_NPC_TargetSlotIsUsingOverride::CallFunc_NPC_TargetSlotInfo_TargetSlotCountingGE' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Parent_C_NPC_TargetSlotIsUsingOverride, CallFunc_NPC_TargetSlotInfo_AI_TargetSlotSizeHF) == 0x000040, "Member 'NPC_Pawn_Parent_C_NPC_TargetSlotIsUsingOverride::CallFunc_NPC_TargetSlotInfo_AI_TargetSlotSizeHF' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Parent_C_NPC_TargetSlotIsUsingOverride, CallFunc_NPC_TargetSlotInfo_AI_TargetSlotDurationHF) == 0x000068, "Member 'NPC_Pawn_Parent_C_NPC_TargetSlotIsUsingOverride::CallFunc_NPC_TargetSlotInfo_AI_TargetSlotDurationHF' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Parent_C_NPC_TargetSlotIsUsingOverride, CallFunc_NPC_TargetSlotInfo_TargetSlotOverrideGE) == 0x000090, "Member 'NPC_Pawn_Parent_C_NPC_TargetSlotIsUsingOverride::CallFunc_NPC_TargetSlotInfo_TargetSlotOverrideGE' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Parent_C_NPC_TargetSlotIsUsingOverride, CallFunc_NPC_TargetSlotInfo_TargetSlotOwnerGE) == 0x000098, "Member 'NPC_Pawn_Parent_C_NPC_TargetSlotIsUsingOverride::CallFunc_NPC_TargetSlotInfo_TargetSlotOwnerGE' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Parent_C_NPC_TargetSlotIsUsingOverride, CallFunc_NPC_TargetSlotInfo_TargetSlotCountingMaxedGE) == 0x0000A0, "Member 'NPC_Pawn_Parent_C_NPC_TargetSlotIsUsingOverride::CallFunc_NPC_TargetSlotInfo_TargetSlotCountingMaxedGE' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Parent_C_NPC_TargetSlotIsUsingOverride, CallFunc_IsValidClass_ReturnValue) == 0x0000A8, "Member 'NPC_Pawn_Parent_C_NPC_TargetSlotIsUsingOverride::CallFunc_IsValidClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Parent_C_NPC_TargetSlotIsUsingOverride, CallFunc_GetAbilitySystemComponent_ReturnValue) == 0x0000B0, "Member 'NPC_Pawn_Parent_C_NPC_TargetSlotIsUsingOverride::CallFunc_GetAbilitySystemComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Parent_C_NPC_TargetSlotIsUsingOverride, CallFunc_IsValid_ReturnValue) == 0x0000B8, "Member 'NPC_Pawn_Parent_C_NPC_TargetSlotIsUsingOverride::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Parent_C_NPC_TargetSlotIsUsingOverride, K2Node_MakeArray_Array) == 0x0000C0, "Member 'NPC_Pawn_Parent_C_NPC_TargetSlotIsUsingOverride::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Parent_C_NPC_TargetSlotIsUsingOverride, CallFunc_GetTotalGameplayEffectCount_FinalEffectCount) == 0x0000D0, "Member 'NPC_Pawn_Parent_C_NPC_TargetSlotIsUsingOverride::CallFunc_GetTotalGameplayEffectCount_FinalEffectCount' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Parent_C_NPC_TargetSlotIsUsingOverride, CallFunc_NotEqual_IntInt_ReturnValue) == 0x0000D4, "Member 'NPC_Pawn_Parent_C_NPC_TargetSlotIsUsingOverride::CallFunc_NotEqual_IntInt_ReturnValue' has a wrong offset!");

struct NPC_Pawn_Parent_C_NPC_TryToDropLootOnDeath final
{
public:
	struct FGameplayTagContainer                  DamageTags;
	bool                                          CanDropLoot;
	bool                                          CanDropLootBool;
	uint8                                         Pad_22[0x2];
	int32                                         Temp_int_Array_Index_Variable;
	int32                                         Temp_int_Loop_Counter_Variable;
	int32                                         CallFunc_Add_IntInt_ReturnValue;
	bool                                          CallFunc_IsInAthena_ReturnValue;
	uint8                                         Pad_31[0x3];
	int32                                         CallFunc_GetLootLevel_ReturnValue;
	int32                                         CallFunc_SelectInt_ReturnValue;
	uint8                                         Pad_3C[0x4];
	TArray<struct FFortItemEntry>                 CallFunc_PickLootDrops_OutLootToDrop;
	bool                                          CallFunc_PickLootDrops_ReturnValue;
	uint8                                         Pad_51[0x7];
	struct FFortItemEntry                         CallFunc_Array_Get_Item;
	int32                                         CallFunc_Array_Length_ReturnValue;
	uint8                                         Pad_1FC[0x4];
	TScriptInterface<class IFortInventoryOwnerInterface> CallFunc_GiveItemEntryToInventoryOwner_InventoryOwner_CastInput;
	bool                                          CallFunc_GiveItemEntryToInventoryOwner_ReturnValue;
	bool                                          CallFunc_Less_IntInt_ReturnValue;
	bool                                          CallFunc_NotEqual_NameName_ReturnValue;
	uint8                                         Pad_213[0x5];
	struct FGameplayTagContainer                  CallFunc_MakeLiteralGameplayTagContainer_ReturnValue;
	bool                                          CallFunc_EqualEqual_GameplayTagContainer_ReturnValue;
	bool                                          CallFunc_EqualEqual_GameplayTagContainer_ReturnValue_1;
	bool                                          CallFunc_NotEqual_GameplayTagContainer_ReturnValue;
	bool                                          CallFunc_HasAnyTags_ReturnValue;
	bool                                          CallFunc_NotEqual_GameplayTagContainer_ReturnValue_1;
	bool                                          CallFunc_BooleanAND_ReturnValue;
	bool                                          CallFunc_HasAnyTags_ReturnValue_1;
	bool                                          CallFunc_BooleanOR_ReturnValue;
	bool                                          CallFunc_Not_PreBool_ReturnValue;
	bool                                          CallFunc_BooleanAND_ReturnValue_1;
	bool                                          CallFunc_BooleanAND_ReturnValue_2;
	bool                                          CallFunc_BooleanOR_ReturnValue_1;
	bool                                          CallFunc_BooleanAND_ReturnValue_3;
	bool                                          CallFunc_BooleanAND_ReturnValue_4;
};
static_assert(alignof(NPC_Pawn_Parent_C_NPC_TryToDropLootOnDeath) == 0x000008, "Wrong alignment on NPC_Pawn_Parent_C_NPC_TryToDropLootOnDeath");
static_assert(sizeof(NPC_Pawn_Parent_C_NPC_TryToDropLootOnDeath) == 0x000248, "Wrong size on NPC_Pawn_Parent_C_NPC_TryToDropLootOnDeath");
static_assert(offsetof(NPC_Pawn_Parent_C_NPC_TryToDropLootOnDeath, DamageTags) == 0x000000, "Member 'NPC_Pawn_Parent_C_NPC_TryToDropLootOnDeath::DamageTags' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Parent_C_NPC_TryToDropLootOnDeath, CanDropLoot) == 0x000020, "Member 'NPC_Pawn_Parent_C_NPC_TryToDropLootOnDeath::CanDropLoot' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Parent_C_NPC_TryToDropLootOnDeath, CanDropLootBool) == 0x000021, "Member 'NPC_Pawn_Parent_C_NPC_TryToDropLootOnDeath::CanDropLootBool' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Parent_C_NPC_TryToDropLootOnDeath, Temp_int_Array_Index_Variable) == 0x000024, "Member 'NPC_Pawn_Parent_C_NPC_TryToDropLootOnDeath::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Parent_C_NPC_TryToDropLootOnDeath, Temp_int_Loop_Counter_Variable) == 0x000028, "Member 'NPC_Pawn_Parent_C_NPC_TryToDropLootOnDeath::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Parent_C_NPC_TryToDropLootOnDeath, CallFunc_Add_IntInt_ReturnValue) == 0x00002C, "Member 'NPC_Pawn_Parent_C_NPC_TryToDropLootOnDeath::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Parent_C_NPC_TryToDropLootOnDeath, CallFunc_IsInAthena_ReturnValue) == 0x000030, "Member 'NPC_Pawn_Parent_C_NPC_TryToDropLootOnDeath::CallFunc_IsInAthena_ReturnValue' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Parent_C_NPC_TryToDropLootOnDeath, CallFunc_GetLootLevel_ReturnValue) == 0x000034, "Member 'NPC_Pawn_Parent_C_NPC_TryToDropLootOnDeath::CallFunc_GetLootLevel_ReturnValue' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Parent_C_NPC_TryToDropLootOnDeath, CallFunc_SelectInt_ReturnValue) == 0x000038, "Member 'NPC_Pawn_Parent_C_NPC_TryToDropLootOnDeath::CallFunc_SelectInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Parent_C_NPC_TryToDropLootOnDeath, CallFunc_PickLootDrops_OutLootToDrop) == 0x000040, "Member 'NPC_Pawn_Parent_C_NPC_TryToDropLootOnDeath::CallFunc_PickLootDrops_OutLootToDrop' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Parent_C_NPC_TryToDropLootOnDeath, CallFunc_PickLootDrops_ReturnValue) == 0x000050, "Member 'NPC_Pawn_Parent_C_NPC_TryToDropLootOnDeath::CallFunc_PickLootDrops_ReturnValue' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Parent_C_NPC_TryToDropLootOnDeath, CallFunc_Array_Get_Item) == 0x000058, "Member 'NPC_Pawn_Parent_C_NPC_TryToDropLootOnDeath::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Parent_C_NPC_TryToDropLootOnDeath, CallFunc_Array_Length_ReturnValue) == 0x0001F8, "Member 'NPC_Pawn_Parent_C_NPC_TryToDropLootOnDeath::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Parent_C_NPC_TryToDropLootOnDeath, CallFunc_GiveItemEntryToInventoryOwner_InventoryOwner_CastInput) == 0x000200, "Member 'NPC_Pawn_Parent_C_NPC_TryToDropLootOnDeath::CallFunc_GiveItemEntryToInventoryOwner_InventoryOwner_CastInput' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Parent_C_NPC_TryToDropLootOnDeath, CallFunc_GiveItemEntryToInventoryOwner_ReturnValue) == 0x000210, "Member 'NPC_Pawn_Parent_C_NPC_TryToDropLootOnDeath::CallFunc_GiveItemEntryToInventoryOwner_ReturnValue' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Parent_C_NPC_TryToDropLootOnDeath, CallFunc_Less_IntInt_ReturnValue) == 0x000211, "Member 'NPC_Pawn_Parent_C_NPC_TryToDropLootOnDeath::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Parent_C_NPC_TryToDropLootOnDeath, CallFunc_NotEqual_NameName_ReturnValue) == 0x000212, "Member 'NPC_Pawn_Parent_C_NPC_TryToDropLootOnDeath::CallFunc_NotEqual_NameName_ReturnValue' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Parent_C_NPC_TryToDropLootOnDeath, CallFunc_MakeLiteralGameplayTagContainer_ReturnValue) == 0x000218, "Member 'NPC_Pawn_Parent_C_NPC_TryToDropLootOnDeath::CallFunc_MakeLiteralGameplayTagContainer_ReturnValue' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Parent_C_NPC_TryToDropLootOnDeath, CallFunc_EqualEqual_GameplayTagContainer_ReturnValue) == 0x000238, "Member 'NPC_Pawn_Parent_C_NPC_TryToDropLootOnDeath::CallFunc_EqualEqual_GameplayTagContainer_ReturnValue' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Parent_C_NPC_TryToDropLootOnDeath, CallFunc_EqualEqual_GameplayTagContainer_ReturnValue_1) == 0x000239, "Member 'NPC_Pawn_Parent_C_NPC_TryToDropLootOnDeath::CallFunc_EqualEqual_GameplayTagContainer_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Parent_C_NPC_TryToDropLootOnDeath, CallFunc_NotEqual_GameplayTagContainer_ReturnValue) == 0x00023A, "Member 'NPC_Pawn_Parent_C_NPC_TryToDropLootOnDeath::CallFunc_NotEqual_GameplayTagContainer_ReturnValue' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Parent_C_NPC_TryToDropLootOnDeath, CallFunc_HasAnyTags_ReturnValue) == 0x00023B, "Member 'NPC_Pawn_Parent_C_NPC_TryToDropLootOnDeath::CallFunc_HasAnyTags_ReturnValue' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Parent_C_NPC_TryToDropLootOnDeath, CallFunc_NotEqual_GameplayTagContainer_ReturnValue_1) == 0x00023C, "Member 'NPC_Pawn_Parent_C_NPC_TryToDropLootOnDeath::CallFunc_NotEqual_GameplayTagContainer_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Parent_C_NPC_TryToDropLootOnDeath, CallFunc_BooleanAND_ReturnValue) == 0x00023D, "Member 'NPC_Pawn_Parent_C_NPC_TryToDropLootOnDeath::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Parent_C_NPC_TryToDropLootOnDeath, CallFunc_HasAnyTags_ReturnValue_1) == 0x00023E, "Member 'NPC_Pawn_Parent_C_NPC_TryToDropLootOnDeath::CallFunc_HasAnyTags_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Parent_C_NPC_TryToDropLootOnDeath, CallFunc_BooleanOR_ReturnValue) == 0x00023F, "Member 'NPC_Pawn_Parent_C_NPC_TryToDropLootOnDeath::CallFunc_BooleanOR_ReturnValue' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Parent_C_NPC_TryToDropLootOnDeath, CallFunc_Not_PreBool_ReturnValue) == 0x000240, "Member 'NPC_Pawn_Parent_C_NPC_TryToDropLootOnDeath::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Parent_C_NPC_TryToDropLootOnDeath, CallFunc_BooleanAND_ReturnValue_1) == 0x000241, "Member 'NPC_Pawn_Parent_C_NPC_TryToDropLootOnDeath::CallFunc_BooleanAND_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Parent_C_NPC_TryToDropLootOnDeath, CallFunc_BooleanAND_ReturnValue_2) == 0x000242, "Member 'NPC_Pawn_Parent_C_NPC_TryToDropLootOnDeath::CallFunc_BooleanAND_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Parent_C_NPC_TryToDropLootOnDeath, CallFunc_BooleanOR_ReturnValue_1) == 0x000243, "Member 'NPC_Pawn_Parent_C_NPC_TryToDropLootOnDeath::CallFunc_BooleanOR_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Parent_C_NPC_TryToDropLootOnDeath, CallFunc_BooleanAND_ReturnValue_3) == 0x000244, "Member 'NPC_Pawn_Parent_C_NPC_TryToDropLootOnDeath::CallFunc_BooleanAND_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Parent_C_NPC_TryToDropLootOnDeath, CallFunc_BooleanAND_ReturnValue_4) == 0x000245, "Member 'NPC_Pawn_Parent_C_NPC_TryToDropLootOnDeath::CallFunc_BooleanAND_ReturnValue_4' has a wrong offset!");

struct NPC_Pawn_Parent_C_NPC_UpdateInteract final
{
public:
	bool                                          CanInteract;
	bool                                          EnabledInteract;
	bool                                          wasInteractEnabled;
	bool                                          CallFunc_NPC_GetScalableFloatHotfixValue_AsBool;
	int32                                         CallFunc_NPC_GetScalableFloatHotfixValue_AsIntRounded;
	double                                        CallFunc_NPC_GetScalableFloatHotfixValue_AsFloat;
	bool                                          CallFunc_NPC_HasLeader__HasLeader_;
	uint8                                         Pad_11[0x7];
	class AActor*                                 CallFunc_NPC_HasLeader__Leader;
	bool                                          CallFunc_Not_PreBool_ReturnValue;
	bool                                          CallFunc_BooleanOR_ReturnValue;
	bool                                          CallFunc_BooleanOR_ReturnValue_1;
};
static_assert(alignof(NPC_Pawn_Parent_C_NPC_UpdateInteract) == 0x000008, "Wrong alignment on NPC_Pawn_Parent_C_NPC_UpdateInteract");
static_assert(sizeof(NPC_Pawn_Parent_C_NPC_UpdateInteract) == 0x000028, "Wrong size on NPC_Pawn_Parent_C_NPC_UpdateInteract");
static_assert(offsetof(NPC_Pawn_Parent_C_NPC_UpdateInteract, CanInteract) == 0x000000, "Member 'NPC_Pawn_Parent_C_NPC_UpdateInteract::CanInteract' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Parent_C_NPC_UpdateInteract, EnabledInteract) == 0x000001, "Member 'NPC_Pawn_Parent_C_NPC_UpdateInteract::EnabledInteract' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Parent_C_NPC_UpdateInteract, wasInteractEnabled) == 0x000002, "Member 'NPC_Pawn_Parent_C_NPC_UpdateInteract::wasInteractEnabled' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Parent_C_NPC_UpdateInteract, CallFunc_NPC_GetScalableFloatHotfixValue_AsBool) == 0x000003, "Member 'NPC_Pawn_Parent_C_NPC_UpdateInteract::CallFunc_NPC_GetScalableFloatHotfixValue_AsBool' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Parent_C_NPC_UpdateInteract, CallFunc_NPC_GetScalableFloatHotfixValue_AsIntRounded) == 0x000004, "Member 'NPC_Pawn_Parent_C_NPC_UpdateInteract::CallFunc_NPC_GetScalableFloatHotfixValue_AsIntRounded' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Parent_C_NPC_UpdateInteract, CallFunc_NPC_GetScalableFloatHotfixValue_AsFloat) == 0x000008, "Member 'NPC_Pawn_Parent_C_NPC_UpdateInteract::CallFunc_NPC_GetScalableFloatHotfixValue_AsFloat' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Parent_C_NPC_UpdateInteract, CallFunc_NPC_HasLeader__HasLeader_) == 0x000010, "Member 'NPC_Pawn_Parent_C_NPC_UpdateInteract::CallFunc_NPC_HasLeader__HasLeader_' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Parent_C_NPC_UpdateInteract, CallFunc_NPC_HasLeader__Leader) == 0x000018, "Member 'NPC_Pawn_Parent_C_NPC_UpdateInteract::CallFunc_NPC_HasLeader__Leader' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Parent_C_NPC_UpdateInteract, CallFunc_Not_PreBool_ReturnValue) == 0x000020, "Member 'NPC_Pawn_Parent_C_NPC_UpdateInteract::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Parent_C_NPC_UpdateInteract, CallFunc_BooleanOR_ReturnValue) == 0x000021, "Member 'NPC_Pawn_Parent_C_NPC_UpdateInteract::CallFunc_BooleanOR_ReturnValue' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Parent_C_NPC_UpdateInteract, CallFunc_BooleanOR_ReturnValue_1) == 0x000022, "Member 'NPC_Pawn_Parent_C_NPC_UpdateInteract::CallFunc_BooleanOR_ReturnValue_1' has a wrong offset!");

struct NPC_Pawn_Parent_C_NPCAlertLevelChangedClient final
{
public:
	Enum_NPC_AlertLevel                           NPC_AlertLevel_0;
};
static_assert(alignof(NPC_Pawn_Parent_C_NPCAlertLevelChangedClient) == 0x000001, "Wrong alignment on NPC_Pawn_Parent_C_NPCAlertLevelChangedClient");
static_assert(sizeof(NPC_Pawn_Parent_C_NPCAlertLevelChangedClient) == 0x000001, "Wrong size on NPC_Pawn_Parent_C_NPCAlertLevelChangedClient");
static_assert(offsetof(NPC_Pawn_Parent_C_NPCAlertLevelChangedClient, NPC_AlertLevel_0) == 0x000000, "Member 'NPC_Pawn_Parent_C_NPCAlertLevelChangedClient::NPC_AlertLevel_0' has a wrong offset!");

struct NPC_Pawn_Parent_C_On_NPC_PawnInteractedWith final
{
public:
	class AActor*                                 AIPawn;
	class AFortPlayerPawn*                        InteractingPlayerPawn;
};
static_assert(alignof(NPC_Pawn_Parent_C_On_NPC_PawnInteractedWith) == 0x000008, "Wrong alignment on NPC_Pawn_Parent_C_On_NPC_PawnInteractedWith");
static_assert(sizeof(NPC_Pawn_Parent_C_On_NPC_PawnInteractedWith) == 0x000010, "Wrong size on NPC_Pawn_Parent_C_On_NPC_PawnInteractedWith");
static_assert(offsetof(NPC_Pawn_Parent_C_On_NPC_PawnInteractedWith, AIPawn) == 0x000000, "Member 'NPC_Pawn_Parent_C_On_NPC_PawnInteractedWith::AIPawn' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Parent_C_On_NPC_PawnInteractedWith, InteractingPlayerPawn) == 0x000008, "Member 'NPC_Pawn_Parent_C_On_NPC_PawnInteractedWith::InteractingPlayerPawn' has a wrong offset!");

struct NPC_Pawn_Parent_C_OnBeginDeepWaterInteraction final
{
public:
	struct FVector                                WaterSurfaceLocation;
	float                                         WaterDepth;
};
static_assert(alignof(NPC_Pawn_Parent_C_OnBeginDeepWaterInteraction) == 0x000008, "Wrong alignment on NPC_Pawn_Parent_C_OnBeginDeepWaterInteraction");
static_assert(sizeof(NPC_Pawn_Parent_C_OnBeginDeepWaterInteraction) == 0x000020, "Wrong size on NPC_Pawn_Parent_C_OnBeginDeepWaterInteraction");
static_assert(offsetof(NPC_Pawn_Parent_C_OnBeginDeepWaterInteraction, WaterSurfaceLocation) == 0x000000, "Member 'NPC_Pawn_Parent_C_OnBeginDeepWaterInteraction::WaterSurfaceLocation' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Parent_C_OnBeginDeepWaterInteraction, WaterDepth) == 0x000018, "Member 'NPC_Pawn_Parent_C_OnBeginDeepWaterInteraction::WaterDepth' has a wrong offset!");

struct NPC_Pawn_Parent_C_OnDamagePlayEffects final
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
static_assert(alignof(NPC_Pawn_Parent_C_OnDamagePlayEffects) == 0x000008, "Wrong alignment on NPC_Pawn_Parent_C_OnDamagePlayEffects");
static_assert(sizeof(NPC_Pawn_Parent_C_OnDamagePlayEffects) == 0x000148, "Wrong size on NPC_Pawn_Parent_C_OnDamagePlayEffects");
static_assert(offsetof(NPC_Pawn_Parent_C_OnDamagePlayEffects, Damage) == 0x000000, "Member 'NPC_Pawn_Parent_C_OnDamagePlayEffects::Damage' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Parent_C_OnDamagePlayEffects, DamageTags) == 0x000008, "Member 'NPC_Pawn_Parent_C_OnDamagePlayEffects::DamageTags' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Parent_C_OnDamagePlayEffects, Momentum) == 0x000028, "Member 'NPC_Pawn_Parent_C_OnDamagePlayEffects::Momentum' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Parent_C_OnDamagePlayEffects, HitInfo) == 0x000040, "Member 'NPC_Pawn_Parent_C_OnDamagePlayEffects::HitInfo' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Parent_C_OnDamagePlayEffects, InstigatedBy) == 0x000120, "Member 'NPC_Pawn_Parent_C_OnDamagePlayEffects::InstigatedBy' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Parent_C_OnDamagePlayEffects, DamageCauser) == 0x000128, "Member 'NPC_Pawn_Parent_C_OnDamagePlayEffects::DamageCauser' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Parent_C_OnDamagePlayEffects, EffectContext) == 0x000130, "Member 'NPC_Pawn_Parent_C_OnDamagePlayEffects::EffectContext' has a wrong offset!");

struct NPC_Pawn_Parent_C_OnDamageServer final
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
static_assert(alignof(NPC_Pawn_Parent_C_OnDamageServer) == 0x000008, "Wrong alignment on NPC_Pawn_Parent_C_OnDamageServer");
static_assert(sizeof(NPC_Pawn_Parent_C_OnDamageServer) == 0x000148, "Wrong size on NPC_Pawn_Parent_C_OnDamageServer");
static_assert(offsetof(NPC_Pawn_Parent_C_OnDamageServer, Damage) == 0x000000, "Member 'NPC_Pawn_Parent_C_OnDamageServer::Damage' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Parent_C_OnDamageServer, DamageTags) == 0x000008, "Member 'NPC_Pawn_Parent_C_OnDamageServer::DamageTags' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Parent_C_OnDamageServer, Momentum) == 0x000028, "Member 'NPC_Pawn_Parent_C_OnDamageServer::Momentum' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Parent_C_OnDamageServer, HitInfo) == 0x000040, "Member 'NPC_Pawn_Parent_C_OnDamageServer::HitInfo' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Parent_C_OnDamageServer, InstigatedBy) == 0x000120, "Member 'NPC_Pawn_Parent_C_OnDamageServer::InstigatedBy' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Parent_C_OnDamageServer, DamageCauser) == 0x000128, "Member 'NPC_Pawn_Parent_C_OnDamageServer::DamageCauser' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Parent_C_OnDamageServer, EffectContext) == 0x000130, "Member 'NPC_Pawn_Parent_C_OnDamageServer::EffectContext' has a wrong offset!");

struct NPC_Pawn_Parent_C_OnDeathPlayEffects final
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
static_assert(alignof(NPC_Pawn_Parent_C_OnDeathPlayEffects) == 0x000008, "Wrong alignment on NPC_Pawn_Parent_C_OnDeathPlayEffects");
static_assert(sizeof(NPC_Pawn_Parent_C_OnDeathPlayEffects) == 0x000148, "Wrong size on NPC_Pawn_Parent_C_OnDeathPlayEffects");
static_assert(offsetof(NPC_Pawn_Parent_C_OnDeathPlayEffects, Damage) == 0x000000, "Member 'NPC_Pawn_Parent_C_OnDeathPlayEffects::Damage' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Parent_C_OnDeathPlayEffects, DamageTags) == 0x000008, "Member 'NPC_Pawn_Parent_C_OnDeathPlayEffects::DamageTags' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Parent_C_OnDeathPlayEffects, Momentum) == 0x000028, "Member 'NPC_Pawn_Parent_C_OnDeathPlayEffects::Momentum' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Parent_C_OnDeathPlayEffects, HitInfo) == 0x000040, "Member 'NPC_Pawn_Parent_C_OnDeathPlayEffects::HitInfo' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Parent_C_OnDeathPlayEffects, InstigatedBy) == 0x000120, "Member 'NPC_Pawn_Parent_C_OnDeathPlayEffects::InstigatedBy' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Parent_C_OnDeathPlayEffects, DamageCauser) == 0x000128, "Member 'NPC_Pawn_Parent_C_OnDeathPlayEffects::DamageCauser' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Parent_C_OnDeathPlayEffects, EffectContext) == 0x000130, "Member 'NPC_Pawn_Parent_C_OnDeathPlayEffects::EffectContext' has a wrong offset!");

struct NPC_Pawn_Parent_C_OnDeathServer final
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
static_assert(alignof(NPC_Pawn_Parent_C_OnDeathServer) == 0x000008, "Wrong alignment on NPC_Pawn_Parent_C_OnDeathServer");
static_assert(sizeof(NPC_Pawn_Parent_C_OnDeathServer) == 0x000148, "Wrong size on NPC_Pawn_Parent_C_OnDeathServer");
static_assert(offsetof(NPC_Pawn_Parent_C_OnDeathServer, Damage) == 0x000000, "Member 'NPC_Pawn_Parent_C_OnDeathServer::Damage' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Parent_C_OnDeathServer, DamageTags) == 0x000008, "Member 'NPC_Pawn_Parent_C_OnDeathServer::DamageTags' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Parent_C_OnDeathServer, Momentum) == 0x000028, "Member 'NPC_Pawn_Parent_C_OnDeathServer::Momentum' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Parent_C_OnDeathServer, HitInfo) == 0x000040, "Member 'NPC_Pawn_Parent_C_OnDeathServer::HitInfo' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Parent_C_OnDeathServer, InstigatedBy) == 0x000120, "Member 'NPC_Pawn_Parent_C_OnDeathServer::InstigatedBy' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Parent_C_OnDeathServer, DamageCauser) == 0x000128, "Member 'NPC_Pawn_Parent_C_OnDeathServer::DamageCauser' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Parent_C_OnDeathServer, EffectContext) == 0x000130, "Member 'NPC_Pawn_Parent_C_OnDeathServer::EffectContext' has a wrong offset!");

struct NPC_Pawn_Parent_C_OnEnteredWaterBody final
{
public:
	class AFortWaterBodyActor*                    WaterBody;
	bool                                          bIsFirstBody;
};
static_assert(alignof(NPC_Pawn_Parent_C_OnEnteredWaterBody) == 0x000008, "Wrong alignment on NPC_Pawn_Parent_C_OnEnteredWaterBody");
static_assert(sizeof(NPC_Pawn_Parent_C_OnEnteredWaterBody) == 0x000010, "Wrong size on NPC_Pawn_Parent_C_OnEnteredWaterBody");
static_assert(offsetof(NPC_Pawn_Parent_C_OnEnteredWaterBody, WaterBody) == 0x000000, "Member 'NPC_Pawn_Parent_C_OnEnteredWaterBody::WaterBody' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Parent_C_OnEnteredWaterBody, bIsFirstBody) == 0x000008, "Member 'NPC_Pawn_Parent_C_OnEnteredWaterBody::bIsFirstBody' has a wrong offset!");

struct NPC_Pawn_Parent_C_OnExitedWaterBody final
{
public:
	class AFortWaterBodyActor*                    WaterBody;
	bool                                          bIsLastBody;
};
static_assert(alignof(NPC_Pawn_Parent_C_OnExitedWaterBody) == 0x000008, "Wrong alignment on NPC_Pawn_Parent_C_OnExitedWaterBody");
static_assert(sizeof(NPC_Pawn_Parent_C_OnExitedWaterBody) == 0x000010, "Wrong size on NPC_Pawn_Parent_C_OnExitedWaterBody");
static_assert(offsetof(NPC_Pawn_Parent_C_OnExitedWaterBody, WaterBody) == 0x000000, "Member 'NPC_Pawn_Parent_C_OnExitedWaterBody::WaterBody' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Parent_C_OnExitedWaterBody, bIsLastBody) == 0x000008, "Member 'NPC_Pawn_Parent_C_OnExitedWaterBody::bIsLastBody' has a wrong offset!");

struct NPC_Pawn_Parent_C_OnRep_NPC_BestLootRarityInInventory final
{
public:
	bool                                          CallFunc_IsDedicatedServer_ReturnValue;
};
static_assert(alignof(NPC_Pawn_Parent_C_OnRep_NPC_BestLootRarityInInventory) == 0x000001, "Wrong alignment on NPC_Pawn_Parent_C_OnRep_NPC_BestLootRarityInInventory");
static_assert(sizeof(NPC_Pawn_Parent_C_OnRep_NPC_BestLootRarityInInventory) == 0x000001, "Wrong size on NPC_Pawn_Parent_C_OnRep_NPC_BestLootRarityInInventory");
static_assert(offsetof(NPC_Pawn_Parent_C_OnRep_NPC_BestLootRarityInInventory, CallFunc_IsDedicatedServer_ReturnValue) == 0x000000, "Member 'NPC_Pawn_Parent_C_OnRep_NPC_BestLootRarityInInventory::CallFunc_IsDedicatedServer_ReturnValue' has a wrong offset!");

struct NPC_Pawn_Parent_C_OnRep_NPC_Death_Time final
{
public:
	bool                                          CallFunc_IsDedicatedServer_ReturnValue;
};
static_assert(alignof(NPC_Pawn_Parent_C_OnRep_NPC_Death_Time) == 0x000001, "Wrong alignment on NPC_Pawn_Parent_C_OnRep_NPC_Death_Time");
static_assert(sizeof(NPC_Pawn_Parent_C_OnRep_NPC_Death_Time) == 0x000001, "Wrong size on NPC_Pawn_Parent_C_OnRep_NPC_Death_Time");
static_assert(offsetof(NPC_Pawn_Parent_C_OnRep_NPC_Death_Time, CallFunc_IsDedicatedServer_ReturnValue) == 0x000000, "Member 'NPC_Pawn_Parent_C_OnRep_NPC_Death_Time::CallFunc_IsDedicatedServer_ReturnValue' has a wrong offset!");

struct NPC_Pawn_Parent_C_OnRep_NPC_Leader final
{
public:
	bool                                          CallFunc_IsGameplayTagValid_ReturnValue;
	bool                                          CallFunc_IsValid_ReturnValue;
	uint8                                         Pad_2[0x6];
	struct FGameplayCueParameters                 CallFunc_MakeGameplayCueParameters_ReturnValue;
	float                                         CallFunc_MakeGameplayCueParameters_RawMagnitude_ImplicitCast;
};
static_assert(alignof(NPC_Pawn_Parent_C_OnRep_NPC_Leader) == 0x000008, "Wrong alignment on NPC_Pawn_Parent_C_OnRep_NPC_Leader");
static_assert(sizeof(NPC_Pawn_Parent_C_OnRep_NPC_Leader) == 0x0000E0, "Wrong size on NPC_Pawn_Parent_C_OnRep_NPC_Leader");
static_assert(offsetof(NPC_Pawn_Parent_C_OnRep_NPC_Leader, CallFunc_IsGameplayTagValid_ReturnValue) == 0x000000, "Member 'NPC_Pawn_Parent_C_OnRep_NPC_Leader::CallFunc_IsGameplayTagValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Parent_C_OnRep_NPC_Leader, CallFunc_IsValid_ReturnValue) == 0x000001, "Member 'NPC_Pawn_Parent_C_OnRep_NPC_Leader::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Parent_C_OnRep_NPC_Leader, CallFunc_MakeGameplayCueParameters_ReturnValue) == 0x000008, "Member 'NPC_Pawn_Parent_C_OnRep_NPC_Leader::CallFunc_MakeGameplayCueParameters_ReturnValue' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Parent_C_OnRep_NPC_Leader, CallFunc_MakeGameplayCueParameters_RawMagnitude_ImplicitCast) == 0x0000D8, "Member 'NPC_Pawn_Parent_C_OnRep_NPC_Leader::CallFunc_MakeGameplayCueParameters_RawMagnitude_ImplicitCast' has a wrong offset!");

struct NPC_Pawn_Parent_C_OnRep_NPC_AlertLevel final
{
public:
	bool                                          CallFunc_HasAuthority_ReturnValue;
};
static_assert(alignof(NPC_Pawn_Parent_C_OnRep_NPC_AlertLevel) == 0x000001, "Wrong alignment on NPC_Pawn_Parent_C_OnRep_NPC_AlertLevel");
static_assert(sizeof(NPC_Pawn_Parent_C_OnRep_NPC_AlertLevel) == 0x000001, "Wrong size on NPC_Pawn_Parent_C_OnRep_NPC_AlertLevel");
static_assert(offsetof(NPC_Pawn_Parent_C_OnRep_NPC_AlertLevel, CallFunc_HasAuthority_ReturnValue) == 0x000000, "Member 'NPC_Pawn_Parent_C_OnRep_NPC_AlertLevel::CallFunc_HasAuthority_ReturnValue' has a wrong offset!");

struct NPC_Pawn_Parent_C_Orphaned final
{
public:
	bool                                          IsOrphaned;
	uint8                                         Pad_1[0x7];
	class AFortPawn*                              AttachedPawn;
};
static_assert(alignof(NPC_Pawn_Parent_C_Orphaned) == 0x000008, "Wrong alignment on NPC_Pawn_Parent_C_Orphaned");
static_assert(sizeof(NPC_Pawn_Parent_C_Orphaned) == 0x000010, "Wrong size on NPC_Pawn_Parent_C_Orphaned");
static_assert(offsetof(NPC_Pawn_Parent_C_Orphaned, IsOrphaned) == 0x000000, "Member 'NPC_Pawn_Parent_C_Orphaned::IsOrphaned' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Parent_C_Orphaned, AttachedPawn) == 0x000008, "Member 'NPC_Pawn_Parent_C_Orphaned::AttachedPawn' has a wrong offset!");

struct NPC_Pawn_Parent_C_Play_Water_Splash_at_Water_Surface final
{
public:
	class AFortWaterBodyActor*                    Water_Body;
	bool                                          Enter_Water_0;
	uint8                                         Pad_9[0x7];
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue;
	bool                                          Temp_bool_Variable;
	uint8                                         Pad_29[0x7];
	struct FWaterSurfaceInfo                      CallFunc_GetWaterSurfaceInfoStruct_OutWaterSurfaceInfo;
	float                                         CallFunc_Conv_IntToFloat_ReturnValue;
	uint8                                         Pad_9C[0x4];
	struct FGameplayCueParameters                 CallFunc_MakeGameplayCueParameters_ReturnValue;
	struct FGameplayTag                           K2Node_Select_Default;
};
static_assert(alignof(NPC_Pawn_Parent_C_Play_Water_Splash_at_Water_Surface) == 0x000008, "Wrong alignment on NPC_Pawn_Parent_C_Play_Water_Splash_at_Water_Surface");
static_assert(sizeof(NPC_Pawn_Parent_C_Play_Water_Splash_at_Water_Surface) == 0x000178, "Wrong size on NPC_Pawn_Parent_C_Play_Water_Splash_at_Water_Surface");
static_assert(offsetof(NPC_Pawn_Parent_C_Play_Water_Splash_at_Water_Surface, Water_Body) == 0x000000, "Member 'NPC_Pawn_Parent_C_Play_Water_Splash_at_Water_Surface::Water_Body' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Parent_C_Play_Water_Splash_at_Water_Surface, Enter_Water_0) == 0x000008, "Member 'NPC_Pawn_Parent_C_Play_Water_Splash_at_Water_Surface::Enter_Water_0' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Parent_C_Play_Water_Splash_at_Water_Surface, CallFunc_K2_GetActorLocation_ReturnValue) == 0x000010, "Member 'NPC_Pawn_Parent_C_Play_Water_Splash_at_Water_Surface::CallFunc_K2_GetActorLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Parent_C_Play_Water_Splash_at_Water_Surface, Temp_bool_Variable) == 0x000028, "Member 'NPC_Pawn_Parent_C_Play_Water_Splash_at_Water_Surface::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Parent_C_Play_Water_Splash_at_Water_Surface, CallFunc_GetWaterSurfaceInfoStruct_OutWaterSurfaceInfo) == 0x000030, "Member 'NPC_Pawn_Parent_C_Play_Water_Splash_at_Water_Surface::CallFunc_GetWaterSurfaceInfoStruct_OutWaterSurfaceInfo' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Parent_C_Play_Water_Splash_at_Water_Surface, CallFunc_Conv_IntToFloat_ReturnValue) == 0x000098, "Member 'NPC_Pawn_Parent_C_Play_Water_Splash_at_Water_Surface::CallFunc_Conv_IntToFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Parent_C_Play_Water_Splash_at_Water_Surface, CallFunc_MakeGameplayCueParameters_ReturnValue) == 0x0000A0, "Member 'NPC_Pawn_Parent_C_Play_Water_Splash_at_Water_Surface::CallFunc_MakeGameplayCueParameters_ReturnValue' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Parent_C_Play_Water_Splash_at_Water_Surface, K2Node_Select_Default) == 0x000170, "Member 'NPC_Pawn_Parent_C_Play_Water_Splash_at_Water_Surface::K2Node_Select_Default' has a wrong offset!");

struct NPC_Pawn_Parent_C_PlayAdditiveHitReacts final
{
public:
	struct FVector                                Hit_Direction;
	class UAnimMontage*                           Anim_Montage;
};
static_assert(alignof(NPC_Pawn_Parent_C_PlayAdditiveHitReacts) == 0x000008, "Wrong alignment on NPC_Pawn_Parent_C_PlayAdditiveHitReacts");
static_assert(sizeof(NPC_Pawn_Parent_C_PlayAdditiveHitReacts) == 0x000020, "Wrong size on NPC_Pawn_Parent_C_PlayAdditiveHitReacts");
static_assert(offsetof(NPC_Pawn_Parent_C_PlayAdditiveHitReacts, Hit_Direction) == 0x000000, "Member 'NPC_Pawn_Parent_C_PlayAdditiveHitReacts::Hit_Direction' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Parent_C_PlayAdditiveHitReacts, Anim_Montage) == 0x000018, "Member 'NPC_Pawn_Parent_C_PlayAdditiveHitReacts::Anim_Montage' has a wrong offset!");

struct NPC_Pawn_Parent_C_PlayEnterWaterSplash final
{
public:
	class AFortWaterBodyActor*                    Water_Body;
};
static_assert(alignof(NPC_Pawn_Parent_C_PlayEnterWaterSplash) == 0x000008, "Wrong alignment on NPC_Pawn_Parent_C_PlayEnterWaterSplash");
static_assert(sizeof(NPC_Pawn_Parent_C_PlayEnterWaterSplash) == 0x000008, "Wrong size on NPC_Pawn_Parent_C_PlayEnterWaterSplash");
static_assert(offsetof(NPC_Pawn_Parent_C_PlayEnterWaterSplash, Water_Body) == 0x000000, "Member 'NPC_Pawn_Parent_C_PlayEnterWaterSplash::Water_Body' has a wrong offset!");

struct NPC_Pawn_Parent_C_PlayExitWaterSplash final
{
public:
	class AFortWaterBodyActor*                    Water_Body;
};
static_assert(alignof(NPC_Pawn_Parent_C_PlayExitWaterSplash) == 0x000008, "Wrong alignment on NPC_Pawn_Parent_C_PlayExitWaterSplash");
static_assert(sizeof(NPC_Pawn_Parent_C_PlayExitWaterSplash) == 0x000008, "Wrong size on NPC_Pawn_Parent_C_PlayExitWaterSplash");
static_assert(offsetof(NPC_Pawn_Parent_C_PlayExitWaterSplash, Water_Body) == 0x000000, "Member 'NPC_Pawn_Parent_C_PlayExitWaterSplash::Water_Body' has a wrong offset!");

struct NPC_Pawn_Parent_C_PlayStateChangeAudio final
{
public:
	Enum_NPC_AlertLevel                           Index_0;
};
static_assert(alignof(NPC_Pawn_Parent_C_PlayStateChangeAudio) == 0x000001, "Wrong alignment on NPC_Pawn_Parent_C_PlayStateChangeAudio");
static_assert(sizeof(NPC_Pawn_Parent_C_PlayStateChangeAudio) == 0x000001, "Wrong size on NPC_Pawn_Parent_C_PlayStateChangeAudio");
static_assert(offsetof(NPC_Pawn_Parent_C_PlayStateChangeAudio, Index_0) == 0x000000, "Member 'NPC_Pawn_Parent_C_PlayStateChangeAudio::Index_0' has a wrong offset!");

struct NPC_Pawn_Parent_C_ReceiveEndPlay final
{
public:
	EEndPlayReason                                EndPlayReason;
};
static_assert(alignof(NPC_Pawn_Parent_C_ReceiveEndPlay) == 0x000001, "Wrong alignment on NPC_Pawn_Parent_C_ReceiveEndPlay");
static_assert(sizeof(NPC_Pawn_Parent_C_ReceiveEndPlay) == 0x000001, "Wrong size on NPC_Pawn_Parent_C_ReceiveEndPlay");
static_assert(offsetof(NPC_Pawn_Parent_C_ReceiveEndPlay, EndPlayReason) == 0x000000, "Member 'NPC_Pawn_Parent_C_ReceiveEndPlay::EndPlayReason' has a wrong offset!");

struct NPC_Pawn_Parent_C_ReceivePossessed final
{
public:
	class AController*                            NewController;
};
static_assert(alignof(NPC_Pawn_Parent_C_ReceivePossessed) == 0x000008, "Wrong alignment on NPC_Pawn_Parent_C_ReceivePossessed");
static_assert(sizeof(NPC_Pawn_Parent_C_ReceivePossessed) == 0x000008, "Wrong size on NPC_Pawn_Parent_C_ReceivePossessed");
static_assert(offsetof(NPC_Pawn_Parent_C_ReceivePossessed, NewController) == 0x000000, "Member 'NPC_Pawn_Parent_C_ReceivePossessed::NewController' has a wrong offset!");

struct NPC_Pawn_Parent_C_RequestUpdateNPCAlertLevel final
{
public:
	Enum_NPC_AlertLevel                           NPC_AlertLevel_0;
};
static_assert(alignof(NPC_Pawn_Parent_C_RequestUpdateNPCAlertLevel) == 0x000001, "Wrong alignment on NPC_Pawn_Parent_C_RequestUpdateNPCAlertLevel");
static_assert(sizeof(NPC_Pawn_Parent_C_RequestUpdateNPCAlertLevel) == 0x000001, "Wrong size on NPC_Pawn_Parent_C_RequestUpdateNPCAlertLevel");
static_assert(offsetof(NPC_Pawn_Parent_C_RequestUpdateNPCAlertLevel, NPC_AlertLevel_0) == 0x000000, "Member 'NPC_Pawn_Parent_C_RequestUpdateNPCAlertLevel::NPC_AlertLevel_0' has a wrong offset!");

struct NPC_Pawn_Parent_C_ResetMaterialFromDeath final
{
public:
	int32                                         Temp_int_Array_Index_Variable;
	int32                                         Temp_int_Loop_Counter_Variable;
	int32                                         CallFunc_Add_IntInt_ReturnValue;
	uint8                                         Pad_C[0x4];
	class UMaterialInterface*                     CallFunc_Array_Get_Item;
	TArray<class UMaterialInterface*>             CallFunc_GetMaterials_ReturnValue;
	int32                                         CallFunc_Array_Length_ReturnValue;
	bool                                          CallFunc_Less_IntInt_ReturnValue;
};
static_assert(alignof(NPC_Pawn_Parent_C_ResetMaterialFromDeath) == 0x000008, "Wrong alignment on NPC_Pawn_Parent_C_ResetMaterialFromDeath");
static_assert(sizeof(NPC_Pawn_Parent_C_ResetMaterialFromDeath) == 0x000030, "Wrong size on NPC_Pawn_Parent_C_ResetMaterialFromDeath");
static_assert(offsetof(NPC_Pawn_Parent_C_ResetMaterialFromDeath, Temp_int_Array_Index_Variable) == 0x000000, "Member 'NPC_Pawn_Parent_C_ResetMaterialFromDeath::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Parent_C_ResetMaterialFromDeath, Temp_int_Loop_Counter_Variable) == 0x000004, "Member 'NPC_Pawn_Parent_C_ResetMaterialFromDeath::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Parent_C_ResetMaterialFromDeath, CallFunc_Add_IntInt_ReturnValue) == 0x000008, "Member 'NPC_Pawn_Parent_C_ResetMaterialFromDeath::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Parent_C_ResetMaterialFromDeath, CallFunc_Array_Get_Item) == 0x000010, "Member 'NPC_Pawn_Parent_C_ResetMaterialFromDeath::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Parent_C_ResetMaterialFromDeath, CallFunc_GetMaterials_ReturnValue) == 0x000018, "Member 'NPC_Pawn_Parent_C_ResetMaterialFromDeath::CallFunc_GetMaterials_ReturnValue' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Parent_C_ResetMaterialFromDeath, CallFunc_Array_Length_ReturnValue) == 0x000028, "Member 'NPC_Pawn_Parent_C_ResetMaterialFromDeath::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Parent_C_ResetMaterialFromDeath, CallFunc_Less_IntInt_ReturnValue) == 0x00002C, "Member 'NPC_Pawn_Parent_C_ResetMaterialFromDeath::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");

struct NPC_Pawn_Parent_C_SelectPrimitiveDataFloat final
{
public:
	bool                                          CallFunc_NPC_GetScalableFloatHotfixValue_AsBool;
	uint8                                         Pad_1[0x3];
	int32                                         CallFunc_NPC_GetScalableFloatHotfixValue_AsIntRounded;
	double                                        CallFunc_NPC_GetScalableFloatHotfixValue_AsFloat;
	bool                                          CallFunc_NPC_GetScalableFloatHotfixValue_AsBool_1;
	uint8                                         Pad_11[0x3];
	int32                                         CallFunc_NPC_GetScalableFloatHotfixValue_AsIntRounded_1;
	double                                        CallFunc_NPC_GetScalableFloatHotfixValue_AsFloat_1;
	bool                                          CallFunc_NPC_GetScalableFloatHotfixValue_AsBool_2;
	uint8                                         Pad_21[0x3];
	int32                                         CallFunc_NPC_GetScalableFloatHotfixValue_AsIntRounded_2;
	double                                        CallFunc_NPC_GetScalableFloatHotfixValue_AsFloat_2;
	double                                        CallFunc_RandomFloatInRange_ReturnValue;
};
static_assert(alignof(NPC_Pawn_Parent_C_SelectPrimitiveDataFloat) == 0x000008, "Wrong alignment on NPC_Pawn_Parent_C_SelectPrimitiveDataFloat");
static_assert(sizeof(NPC_Pawn_Parent_C_SelectPrimitiveDataFloat) == 0x000038, "Wrong size on NPC_Pawn_Parent_C_SelectPrimitiveDataFloat");
static_assert(offsetof(NPC_Pawn_Parent_C_SelectPrimitiveDataFloat, CallFunc_NPC_GetScalableFloatHotfixValue_AsBool) == 0x000000, "Member 'NPC_Pawn_Parent_C_SelectPrimitiveDataFloat::CallFunc_NPC_GetScalableFloatHotfixValue_AsBool' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Parent_C_SelectPrimitiveDataFloat, CallFunc_NPC_GetScalableFloatHotfixValue_AsIntRounded) == 0x000004, "Member 'NPC_Pawn_Parent_C_SelectPrimitiveDataFloat::CallFunc_NPC_GetScalableFloatHotfixValue_AsIntRounded' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Parent_C_SelectPrimitiveDataFloat, CallFunc_NPC_GetScalableFloatHotfixValue_AsFloat) == 0x000008, "Member 'NPC_Pawn_Parent_C_SelectPrimitiveDataFloat::CallFunc_NPC_GetScalableFloatHotfixValue_AsFloat' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Parent_C_SelectPrimitiveDataFloat, CallFunc_NPC_GetScalableFloatHotfixValue_AsBool_1) == 0x000010, "Member 'NPC_Pawn_Parent_C_SelectPrimitiveDataFloat::CallFunc_NPC_GetScalableFloatHotfixValue_AsBool_1' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Parent_C_SelectPrimitiveDataFloat, CallFunc_NPC_GetScalableFloatHotfixValue_AsIntRounded_1) == 0x000014, "Member 'NPC_Pawn_Parent_C_SelectPrimitiveDataFloat::CallFunc_NPC_GetScalableFloatHotfixValue_AsIntRounded_1' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Parent_C_SelectPrimitiveDataFloat, CallFunc_NPC_GetScalableFloatHotfixValue_AsFloat_1) == 0x000018, "Member 'NPC_Pawn_Parent_C_SelectPrimitiveDataFloat::CallFunc_NPC_GetScalableFloatHotfixValue_AsFloat_1' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Parent_C_SelectPrimitiveDataFloat, CallFunc_NPC_GetScalableFloatHotfixValue_AsBool_2) == 0x000020, "Member 'NPC_Pawn_Parent_C_SelectPrimitiveDataFloat::CallFunc_NPC_GetScalableFloatHotfixValue_AsBool_2' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Parent_C_SelectPrimitiveDataFloat, CallFunc_NPC_GetScalableFloatHotfixValue_AsIntRounded_2) == 0x000024, "Member 'NPC_Pawn_Parent_C_SelectPrimitiveDataFloat::CallFunc_NPC_GetScalableFloatHotfixValue_AsIntRounded_2' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Parent_C_SelectPrimitiveDataFloat, CallFunc_NPC_GetScalableFloatHotfixValue_AsFloat_2) == 0x000028, "Member 'NPC_Pawn_Parent_C_SelectPrimitiveDataFloat::CallFunc_NPC_GetScalableFloatHotfixValue_AsFloat_2' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Parent_C_SelectPrimitiveDataFloat, CallFunc_RandomFloatInRange_ReturnValue) == 0x000030, "Member 'NPC_Pawn_Parent_C_SelectPrimitiveDataFloat::CallFunc_RandomFloatInRange_ReturnValue' has a wrong offset!");

struct NPC_Pawn_Parent_C_SetPrimitiveDataFloat final
{
public:
	bool                                          CallFunc_NPC_GetScalableFloatHotfixValue_AsBool;
	uint8                                         Pad_1[0x3];
	int32                                         CallFunc_NPC_GetScalableFloatHotfixValue_AsIntRounded;
	double                                        CallFunc_NPC_GetScalableFloatHotfixValue_AsFloat;
	float                                         CallFunc_SetCustomPrimitiveDataFloat_Value_ImplicitCast;
};
static_assert(alignof(NPC_Pawn_Parent_C_SetPrimitiveDataFloat) == 0x000008, "Wrong alignment on NPC_Pawn_Parent_C_SetPrimitiveDataFloat");
static_assert(sizeof(NPC_Pawn_Parent_C_SetPrimitiveDataFloat) == 0x000018, "Wrong size on NPC_Pawn_Parent_C_SetPrimitiveDataFloat");
static_assert(offsetof(NPC_Pawn_Parent_C_SetPrimitiveDataFloat, CallFunc_NPC_GetScalableFloatHotfixValue_AsBool) == 0x000000, "Member 'NPC_Pawn_Parent_C_SetPrimitiveDataFloat::CallFunc_NPC_GetScalableFloatHotfixValue_AsBool' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Parent_C_SetPrimitiveDataFloat, CallFunc_NPC_GetScalableFloatHotfixValue_AsIntRounded) == 0x000004, "Member 'NPC_Pawn_Parent_C_SetPrimitiveDataFloat::CallFunc_NPC_GetScalableFloatHotfixValue_AsIntRounded' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Parent_C_SetPrimitiveDataFloat, CallFunc_NPC_GetScalableFloatHotfixValue_AsFloat) == 0x000008, "Member 'NPC_Pawn_Parent_C_SetPrimitiveDataFloat::CallFunc_NPC_GetScalableFloatHotfixValue_AsFloat' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Parent_C_SetPrimitiveDataFloat, CallFunc_SetCustomPrimitiveDataFloat_Value_ImplicitCast) == 0x000010, "Member 'NPC_Pawn_Parent_C_SetPrimitiveDataFloat::CallFunc_SetCustomPrimitiveDataFloat_Value_ImplicitCast' has a wrong offset!");

struct NPC_Pawn_Parent_C_ShouldUpdateSkeletalMesh final
{
public:
	bool                                          ReturnValue;
};
static_assert(alignof(NPC_Pawn_Parent_C_ShouldUpdateSkeletalMesh) == 0x000001, "Wrong alignment on NPC_Pawn_Parent_C_ShouldUpdateSkeletalMesh");
static_assert(sizeof(NPC_Pawn_Parent_C_ShouldUpdateSkeletalMesh) == 0x000001, "Wrong size on NPC_Pawn_Parent_C_ShouldUpdateSkeletalMesh");
static_assert(offsetof(NPC_Pawn_Parent_C_ShouldUpdateSkeletalMesh, ReturnValue) == 0x000000, "Member 'NPC_Pawn_Parent_C_ShouldUpdateSkeletalMesh::ReturnValue' has a wrong offset!");

struct NPC_Pawn_Parent_C_StoreOriginalGravityAndRotation final
{
public:
	double                                        K2Node_VariableSet_NPC_OriginalGravityScale_ImplicitCast;
};
static_assert(alignof(NPC_Pawn_Parent_C_StoreOriginalGravityAndRotation) == 0x000008, "Wrong alignment on NPC_Pawn_Parent_C_StoreOriginalGravityAndRotation");
static_assert(sizeof(NPC_Pawn_Parent_C_StoreOriginalGravityAndRotation) == 0x000008, "Wrong size on NPC_Pawn_Parent_C_StoreOriginalGravityAndRotation");
static_assert(offsetof(NPC_Pawn_Parent_C_StoreOriginalGravityAndRotation, K2Node_VariableSet_NPC_OriginalGravityScale_ImplicitCast) == 0x000000, "Member 'NPC_Pawn_Parent_C_StoreOriginalGravityAndRotation::K2Node_VariableSet_NPC_OriginalGravityScale_ImplicitCast' has a wrong offset!");

struct NPC_Pawn_Parent_C_TryShowHealthBar final
{
public:
	bool                                          Temp_bool_True_if_break_was_hit_Variable;
	uint8                                         Pad_1[0x3];
	int32                                         Temp_int_Array_Index_Variable;
	bool                                          CallFunc_Not_PreBool_ReturnValue;
	uint8                                         Pad_9[0x3];
	int32                                         Temp_int_Loop_Counter_Variable;
	bool                                          CallFunc_IsValid_ReturnValue;
	uint8                                         Pad_11[0x7];
	class UUserWidget*                            CallFunc_GetUserWidgetObject_ReturnValue;
	class UNPCStatusWidget_C*                     K2Node_DynamicCast_AsNPCStatus_Widget;
	bool                                          K2Node_DynamicCast_bSuccess;
	uint8                                         Pad_29[0x3];
	int32                                         CallFunc_Add_IntInt_ReturnValue;
	TArray<class AFortPlayerController*>          CallFunc_GetLocalFortPlayerControllers_ReturnValue;
	bool                                          CallFunc_NPC_GetScalableFloatHotfixValue_AsBool;
	uint8                                         Pad_41[0x3];
	int32                                         CallFunc_NPC_GetScalableFloatHotfixValue_AsIntRounded;
	double                                        CallFunc_NPC_GetScalableFloatHotfixValue_AsFloat;
	class AFortPlayerController*                  CallFunc_Array_Get_Item;
	int32                                         CallFunc_Array_Length_ReturnValue;
	uint8                                         Pad_5C[0x4];
	class APawn*                                  CallFunc_K2_GetPawn_ReturnValue;
	bool                                          CallFunc_Less_IntInt_ReturnValue;
	bool                                          CallFunc_BooleanAND_ReturnValue;
	bool                                          CallFunc_Not_PreBool_ReturnValue_1;
	bool                                          CallFunc_Not_PreBool_ReturnValue_2;
	uint8                                         Pad_6C[0x4];
	double                                        CallFunc_GetDistanceBetweenActors_Distance;
	float                                         CallFunc_GetMaxHealth_ReturnValue;
	bool                                          CallFunc_Less_DoubleDouble_ReturnValue;
	uint8                                         Pad_7D[0x3];
	float                                         CallFunc_GetHealth_ReturnValue;
	bool                                          CallFunc_BooleanAND_ReturnValue_1;
	uint8                                         Pad_85[0x3];
	double                                        CallFunc_Divide_DoubleDouble_ReturnValue;
	bool                                          CallFunc_BooleanAND_ReturnValue_2;
	uint8                                         Pad_91[0x7];
	double                                        CallFunc_Divide_DoubleDouble_B_ImplicitCast;
	double                                        CallFunc_Divide_DoubleDouble_A_ImplicitCast;
};
static_assert(alignof(NPC_Pawn_Parent_C_TryShowHealthBar) == 0x000008, "Wrong alignment on NPC_Pawn_Parent_C_TryShowHealthBar");
static_assert(sizeof(NPC_Pawn_Parent_C_TryShowHealthBar) == 0x0000A8, "Wrong size on NPC_Pawn_Parent_C_TryShowHealthBar");
static_assert(offsetof(NPC_Pawn_Parent_C_TryShowHealthBar, Temp_bool_True_if_break_was_hit_Variable) == 0x000000, "Member 'NPC_Pawn_Parent_C_TryShowHealthBar::Temp_bool_True_if_break_was_hit_Variable' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Parent_C_TryShowHealthBar, Temp_int_Array_Index_Variable) == 0x000004, "Member 'NPC_Pawn_Parent_C_TryShowHealthBar::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Parent_C_TryShowHealthBar, CallFunc_Not_PreBool_ReturnValue) == 0x000008, "Member 'NPC_Pawn_Parent_C_TryShowHealthBar::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Parent_C_TryShowHealthBar, Temp_int_Loop_Counter_Variable) == 0x00000C, "Member 'NPC_Pawn_Parent_C_TryShowHealthBar::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Parent_C_TryShowHealthBar, CallFunc_IsValid_ReturnValue) == 0x000010, "Member 'NPC_Pawn_Parent_C_TryShowHealthBar::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Parent_C_TryShowHealthBar, CallFunc_GetUserWidgetObject_ReturnValue) == 0x000018, "Member 'NPC_Pawn_Parent_C_TryShowHealthBar::CallFunc_GetUserWidgetObject_ReturnValue' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Parent_C_TryShowHealthBar, K2Node_DynamicCast_AsNPCStatus_Widget) == 0x000020, "Member 'NPC_Pawn_Parent_C_TryShowHealthBar::K2Node_DynamicCast_AsNPCStatus_Widget' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Parent_C_TryShowHealthBar, K2Node_DynamicCast_bSuccess) == 0x000028, "Member 'NPC_Pawn_Parent_C_TryShowHealthBar::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Parent_C_TryShowHealthBar, CallFunc_Add_IntInt_ReturnValue) == 0x00002C, "Member 'NPC_Pawn_Parent_C_TryShowHealthBar::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Parent_C_TryShowHealthBar, CallFunc_GetLocalFortPlayerControllers_ReturnValue) == 0x000030, "Member 'NPC_Pawn_Parent_C_TryShowHealthBar::CallFunc_GetLocalFortPlayerControllers_ReturnValue' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Parent_C_TryShowHealthBar, CallFunc_NPC_GetScalableFloatHotfixValue_AsBool) == 0x000040, "Member 'NPC_Pawn_Parent_C_TryShowHealthBar::CallFunc_NPC_GetScalableFloatHotfixValue_AsBool' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Parent_C_TryShowHealthBar, CallFunc_NPC_GetScalableFloatHotfixValue_AsIntRounded) == 0x000044, "Member 'NPC_Pawn_Parent_C_TryShowHealthBar::CallFunc_NPC_GetScalableFloatHotfixValue_AsIntRounded' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Parent_C_TryShowHealthBar, CallFunc_NPC_GetScalableFloatHotfixValue_AsFloat) == 0x000048, "Member 'NPC_Pawn_Parent_C_TryShowHealthBar::CallFunc_NPC_GetScalableFloatHotfixValue_AsFloat' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Parent_C_TryShowHealthBar, CallFunc_Array_Get_Item) == 0x000050, "Member 'NPC_Pawn_Parent_C_TryShowHealthBar::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Parent_C_TryShowHealthBar, CallFunc_Array_Length_ReturnValue) == 0x000058, "Member 'NPC_Pawn_Parent_C_TryShowHealthBar::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Parent_C_TryShowHealthBar, CallFunc_K2_GetPawn_ReturnValue) == 0x000060, "Member 'NPC_Pawn_Parent_C_TryShowHealthBar::CallFunc_K2_GetPawn_ReturnValue' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Parent_C_TryShowHealthBar, CallFunc_Less_IntInt_ReturnValue) == 0x000068, "Member 'NPC_Pawn_Parent_C_TryShowHealthBar::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Parent_C_TryShowHealthBar, CallFunc_BooleanAND_ReturnValue) == 0x000069, "Member 'NPC_Pawn_Parent_C_TryShowHealthBar::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Parent_C_TryShowHealthBar, CallFunc_Not_PreBool_ReturnValue_1) == 0x00006A, "Member 'NPC_Pawn_Parent_C_TryShowHealthBar::CallFunc_Not_PreBool_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Parent_C_TryShowHealthBar, CallFunc_Not_PreBool_ReturnValue_2) == 0x00006B, "Member 'NPC_Pawn_Parent_C_TryShowHealthBar::CallFunc_Not_PreBool_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Parent_C_TryShowHealthBar, CallFunc_GetDistanceBetweenActors_Distance) == 0x000070, "Member 'NPC_Pawn_Parent_C_TryShowHealthBar::CallFunc_GetDistanceBetweenActors_Distance' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Parent_C_TryShowHealthBar, CallFunc_GetMaxHealth_ReturnValue) == 0x000078, "Member 'NPC_Pawn_Parent_C_TryShowHealthBar::CallFunc_GetMaxHealth_ReturnValue' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Parent_C_TryShowHealthBar, CallFunc_Less_DoubleDouble_ReturnValue) == 0x00007C, "Member 'NPC_Pawn_Parent_C_TryShowHealthBar::CallFunc_Less_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Parent_C_TryShowHealthBar, CallFunc_GetHealth_ReturnValue) == 0x000080, "Member 'NPC_Pawn_Parent_C_TryShowHealthBar::CallFunc_GetHealth_ReturnValue' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Parent_C_TryShowHealthBar, CallFunc_BooleanAND_ReturnValue_1) == 0x000084, "Member 'NPC_Pawn_Parent_C_TryShowHealthBar::CallFunc_BooleanAND_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Parent_C_TryShowHealthBar, CallFunc_Divide_DoubleDouble_ReturnValue) == 0x000088, "Member 'NPC_Pawn_Parent_C_TryShowHealthBar::CallFunc_Divide_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Parent_C_TryShowHealthBar, CallFunc_BooleanAND_ReturnValue_2) == 0x000090, "Member 'NPC_Pawn_Parent_C_TryShowHealthBar::CallFunc_BooleanAND_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Parent_C_TryShowHealthBar, CallFunc_Divide_DoubleDouble_B_ImplicitCast) == 0x000098, "Member 'NPC_Pawn_Parent_C_TryShowHealthBar::CallFunc_Divide_DoubleDouble_B_ImplicitCast' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Parent_C_TryShowHealthBar, CallFunc_Divide_DoubleDouble_A_ImplicitCast) == 0x0000A0, "Member 'NPC_Pawn_Parent_C_TryShowHealthBar::CallFunc_Divide_DoubleDouble_A_ImplicitCast' has a wrong offset!");

struct NPC_Pawn_Parent_C_TryToDespawnDueToStorm final
{
public:
	bool                                          Reset_Timer;
};
static_assert(alignof(NPC_Pawn_Parent_C_TryToDespawnDueToStorm) == 0x000001, "Wrong alignment on NPC_Pawn_Parent_C_TryToDespawnDueToStorm");
static_assert(sizeof(NPC_Pawn_Parent_C_TryToDespawnDueToStorm) == 0x000001, "Wrong size on NPC_Pawn_Parent_C_TryToDespawnDueToStorm");
static_assert(offsetof(NPC_Pawn_Parent_C_TryToDespawnDueToStorm, Reset_Timer) == 0x000000, "Member 'NPC_Pawn_Parent_C_TryToDespawnDueToStorm::Reset_Timer' has a wrong offset!");

struct NPC_Pawn_Parent_C_UpdateSoundLibrary final
{
public:
	Enum_NPC_AlertLevel                           Alert_Level;
	bool                                          K2Node_SwitchEnum_CmpSuccess;
	bool                                          CallFunc_CanUpdateSoundLib_ReturnValue;
	bool                                          CallFunc_IsValid_ReturnValue;
	bool                                          CallFunc_CanUpdateSoundLib_ReturnValue_1;
	bool                                          CallFunc_CanUpdateSoundLib_ReturnValue_2;
	uint8                                         Pad_6[0x2];
	class USoundLibrarySubsystem*                 CallFunc_GetWorldSubsystem_ReturnValue;
	bool                                          CallFunc_IsValid_ReturnValue_1;
	bool                                          CallFunc_IsValid_ReturnValue_2;
};
static_assert(alignof(NPC_Pawn_Parent_C_UpdateSoundLibrary) == 0x000008, "Wrong alignment on NPC_Pawn_Parent_C_UpdateSoundLibrary");
static_assert(sizeof(NPC_Pawn_Parent_C_UpdateSoundLibrary) == 0x000018, "Wrong size on NPC_Pawn_Parent_C_UpdateSoundLibrary");
static_assert(offsetof(NPC_Pawn_Parent_C_UpdateSoundLibrary, Alert_Level) == 0x000000, "Member 'NPC_Pawn_Parent_C_UpdateSoundLibrary::Alert_Level' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Parent_C_UpdateSoundLibrary, K2Node_SwitchEnum_CmpSuccess) == 0x000001, "Member 'NPC_Pawn_Parent_C_UpdateSoundLibrary::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Parent_C_UpdateSoundLibrary, CallFunc_CanUpdateSoundLib_ReturnValue) == 0x000002, "Member 'NPC_Pawn_Parent_C_UpdateSoundLibrary::CallFunc_CanUpdateSoundLib_ReturnValue' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Parent_C_UpdateSoundLibrary, CallFunc_IsValid_ReturnValue) == 0x000003, "Member 'NPC_Pawn_Parent_C_UpdateSoundLibrary::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Parent_C_UpdateSoundLibrary, CallFunc_CanUpdateSoundLib_ReturnValue_1) == 0x000004, "Member 'NPC_Pawn_Parent_C_UpdateSoundLibrary::CallFunc_CanUpdateSoundLib_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Parent_C_UpdateSoundLibrary, CallFunc_CanUpdateSoundLib_ReturnValue_2) == 0x000005, "Member 'NPC_Pawn_Parent_C_UpdateSoundLibrary::CallFunc_CanUpdateSoundLib_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Parent_C_UpdateSoundLibrary, CallFunc_GetWorldSubsystem_ReturnValue) == 0x000008, "Member 'NPC_Pawn_Parent_C_UpdateSoundLibrary::CallFunc_GetWorldSubsystem_ReturnValue' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Parent_C_UpdateSoundLibrary, CallFunc_IsValid_ReturnValue_1) == 0x000010, "Member 'NPC_Pawn_Parent_C_UpdateSoundLibrary::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Parent_C_UpdateSoundLibrary, CallFunc_IsValid_ReturnValue_2) == 0x000011, "Member 'NPC_Pawn_Parent_C_UpdateSoundLibrary::CallFunc_IsValid_ReturnValue_2' has a wrong offset!");

struct NPC_Pawn_Parent_C_UserConstructionScript final
{
public:
	bool                                          CallFunc_IsDedicatedServer_ReturnValue;
	bool                                          CallFunc_IsValid_ReturnValue;
};
static_assert(alignof(NPC_Pawn_Parent_C_UserConstructionScript) == 0x000001, "Wrong alignment on NPC_Pawn_Parent_C_UserConstructionScript");
static_assert(sizeof(NPC_Pawn_Parent_C_UserConstructionScript) == 0x000002, "Wrong size on NPC_Pawn_Parent_C_UserConstructionScript");
static_assert(offsetof(NPC_Pawn_Parent_C_UserConstructionScript, CallFunc_IsDedicatedServer_ReturnValue) == 0x000000, "Member 'NPC_Pawn_Parent_C_UserConstructionScript::CallFunc_IsDedicatedServer_ReturnValue' has a wrong offset!");
static_assert(offsetof(NPC_Pawn_Parent_C_UserConstructionScript, CallFunc_IsValid_ReturnValue) == 0x000001, "Member 'NPC_Pawn_Parent_C_UserConstructionScript::CallFunc_IsValid_ReturnValue' has a wrong offset!");

struct NPC_Pawn_Parent_C_WidgetVisibilityChanged final
{
public:
	bool                                          bVisible;
};
static_assert(alignof(NPC_Pawn_Parent_C_WidgetVisibilityChanged) == 0x000001, "Wrong alignment on NPC_Pawn_Parent_C_WidgetVisibilityChanged");
static_assert(sizeof(NPC_Pawn_Parent_C_WidgetVisibilityChanged) == 0x000001, "Wrong size on NPC_Pawn_Parent_C_WidgetVisibilityChanged");
static_assert(offsetof(NPC_Pawn_Parent_C_WidgetVisibilityChanged, bVisible) == 0x000000, "Member 'NPC_Pawn_Parent_C_WidgetVisibilityChanged::bVisible' has a wrong offset!");

}
