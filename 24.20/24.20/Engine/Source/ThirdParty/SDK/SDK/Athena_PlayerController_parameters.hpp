#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "GameplayTags_structs.hpp"
#include "FortniteGame_structs.hpp"

namespace SDK::Params
{

struct Athena_PlayerController_C_ExecuteUbergraph_Athena_PlayerController final
{
public:
	int32                                         EntryPoint;
	uint8                                         Pad_4[0x4];
	class UFortAudioAnalysisSubsystem*            CallFunc_GetWorldSubsystem_ReturnValue;
	bool                                          Temp_bool_Variable;
	uint8                                         Pad_11[0x7];
	const class UAthenaMusicPackItemDefinition*   K2Node_CustomEvent_NewMusicPack;
	float                                         K2Node_CustomEvent_StartTimeOffset;
	uint8                                         Pad_24[0x4];
	TSoftObjectPtr<class UFortWorldItemDefinition> K2Node_CustomEvent_Item_1;
	class UObject*                                CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue;
	class UObject*                                CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue_1;
	class UFortWorldItemDefinition*               K2Node_DynamicCast_AsFort_World_Item_Definition;
	bool                                          K2Node_DynamicCast_bSuccess;
	uint8                                         Pad_69[0x7];
	class USoundBase*                             K2Node_DynamicCast_AsSound_Base;
	bool                                          K2Node_DynamicCast_bSuccess_1;
	bool                                          CallFunc_IsValidSoftObjectReference_ReturnValue;
	uint8                                         Pad_7A[0x6];
	TSoftObjectPtr<class UFortWorldItemDefinition> K2Node_CustomEvent_Item;
	class UObject*                                CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue_2;
	class UFortWorldItemDefinition*               K2Node_DynamicCast_AsFort_World_Item_Definition_1;
	bool                                          K2Node_DynamicCast_bSuccess_2;
	bool                                          CallFunc_IsValid_ReturnValue;
	uint8                                         Pad_BA[0x6];
	class USoundBase*                             Temp_object_Variable;
	TScriptInterface<class IFortInventoryOwnerInterface> CallFunc_GiveItemToInventoryOwner_InventoryOwner_CastInput;
	const class UFortWorldItem*                   CallFunc_GiveItemToInventoryOwner_ReturnValue;
	bool                                          Temp_bool_Variable_1;
	uint8                                         Pad_E1[0x7];
	class AActor*                                 K2Node_Event_ReceivingActor;
	int32                                         CallFunc_K2_RemoveItemFromPlayer_ReturnValue;
	uint8                                         Pad_F4[0x4];
	class AFortPickup*                            K2Node_DynamicCast_AsFort_Pickup;
	bool                                          K2Node_DynamicCast_bSuccess_3;
	uint8                                         Pad_101[0x7];
	struct FFortItemEntry                         CallFunc_GetItemEntry_ReturnValue;
	class APawn*                                  CallFunc_K2_GetPawn_ReturnValue;
	class AFortPlayerPawn*                        K2Node_DynamicCast_AsFort_Player_Pawn;
	bool                                          K2Node_DynamicCast_bSuccess_4;
	uint8                                         Pad_2B9[0x7];
	class UFortWorldItemDefinition*               K2Node_DynamicCast_AsFort_World_Item_Definition_2;
	bool                                          K2Node_DynamicCast_bSuccess_5;
	uint8                                         Pad_2C9[0x7];
	TScriptInterface<class IGameplayTagAssetInterface> CallFunc_HasMatchingGameplayTag_self_CastInput;
	bool                                          CallFunc_HasMatchingGameplayTag_ReturnValue;
	bool                                          CallFunc_Not_PreBool_ReturnValue;
	uint8                                         Pad_2E2[0x6];
	TScriptInterface<class IGameplayTagAssetInterface> CallFunc_HasAnyMatchingGameplayTags_self_CastInput;
	bool                                          CallFunc_HasAnyMatchingGameplayTags_ReturnValue;
	uint8                                         Pad_2F9[0x7];
	class UAthenaHUDContext*                      CallFunc_GetContext_ReturnValue;
	class UMusicEventSubsystem*                   CallFunc_GetGameInstanceSubsystem_ReturnValue;
	class USoundCue*                              CallFunc_GetVictoryStinger_ReturnValue;
	class UAudioComponent*                        CallFunc_AddEvent_ReturnValue;
	bool                                          CallFunc_IsValid_ReturnValue_1;
	uint8                                         Pad_321[0x7];
	class APawn*                                  K2Node_CustomEvent_PossessedPawn;
	class USoundBase*                             K2Node_Select_Default;
	EEndPlayReason                                K2Node_Event_EndPlayReason;
	uint8                                         Pad_339[0x7];
	class UAudioComponent*                        CallFunc_SpawnSound2D_ReturnValue;
	class AFortVolume*                            K2Node_Event_Volume_1;
	class AFortVolume*                            K2Node_Event_Volume;
	bool                                          K2Node_CustomEvent_Audio_Only;
	bool                                          CallFunc_IsValid_ReturnValue_2;
	uint8                                         Pad_35A[0x2];
	TDelegate<void(class UAthenaMusicPackItemDefinition* NewMusicPack, float StartTimeOffset)> K2Node_CreateDelegate_OutputDelegate;
	class UFortMusicContext*                      CallFunc_GetContext_ReturnValue_1;
	class UAthenaMusicPackItemDefinition*         CallFunc_GetEquippedMusicPack_ReturnValue;
	class AFortPlayerController*                  CallFunc_GetFirstLocalFortPlayerController_ReturnValue;
	class UAthenaHUDContext*                      CallFunc_GetContext_ReturnValue_2;
	bool                                          CallFunc_EqualEqual_ObjectObject_ReturnValue;
	uint8                                         Pad_389[0x3];
	float                                         CallFunc_VictoryStingerTimeUntilFadeOut_ReturnValue;
	bool                                          CallFunc_Greater_DoubleDouble_ReturnValue;
	uint8                                         Pad_391[0x3];
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_1;
	class UFortMusicContext*                      CallFunc_GetContext_ReturnValue_3;
	TDelegate<void(class UObject* Loaded)>        K2Node_CreateDelegate_OutputDelegate_2;
	uint8                                         Pad_3B4[0x4];
	class UFortAsyncAction_CurrentPlaylistReady*  CallFunc_PlaylistDataReadyAsync_ReturnValue;
	class AFortGameStateAthena*                   Temp_object_Variable_1;
	bool                                          CallFunc_IsValid_ReturnValue_3;
	uint8                                         Pad_3C9[0x7];
	class UFortPlaylist*                          Temp_object_Variable_2;
	struct FGameplayTagContainer                  Temp_struct_Variable;
	class AFortGameStateAthena*                   K2Node_CustomEvent_GameState;
	const class UFortPlaylist*                    K2Node_CustomEvent_Playlist;
	struct FGameplayTagContainer                  K2Node_CustomEvent_PlaylistContextTags;
	double                                        CallFunc_SelectFloat_ReturnValue;
	TDelegate<void(class AFortGameStateAthena* GameState, class UFortPlaylist* Playlist, struct FGameplayTagContainer& PlaylistContextTags)> K2Node_CreateDelegate_OutputDelegate_3;
	uint8                                         Pad_43C[0x4];
	struct FTimerHandle                           CallFunc_K2_SetTimerDelegate_ReturnValue;
	class APawn*                                  K2Node_Event_FinisherPawn;
	const class UFortWeaponItemDefinition*        K2Node_Event_FinishingWeapon;
	EDeathCause                                   K2Node_Event_DeathCause;
	bool                                          K2Node_Event_bAudioOnly;
	ERoundVictoryAnimation                        K2Node_Event_VictoryAnimation;
	uint8                                         Pad_45B[0x5];
	class USoundCue*                              K2Node_Event_VictoryStingerCue;
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;
	uint8                                         Pad_469[0x7];
	class UAudioComponent*                        CallFunc_SpawnSound2D_ReturnValue_1;
	bool                                          CallFunc_IsValid_ReturnValue_4;
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_1;
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_2;
	bool                                          CallFunc_IsValid_ReturnValue_5;
	bool                                          CallFunc_BooleanOR_ReturnValue;
	bool                                          CallFunc_Not_PreBool_ReturnValue_1;
	uint8                                         Pad_47E[0x2];
	TSubclassOf<class AFortWeapon>                CallFunc_GetWeaponActorClass_ReturnValue;
	bool                                          CallFunc_IsValid_ReturnValue_6;
	uint8                                         Pad_489[0x7];
	class UClass*                                 K2Node_ClassDynamicCast_AsFort_Weapon_Ranged_Dual;
	bool                                          K2Node_ClassDynamicCast_bSuccess;
	uint8                                         Pad_499[0x7];
	class UClass*                                 K2Node_ClassDynamicCast_AsB_Ranged_Generic;
	bool                                          K2Node_ClassDynamicCast_bSuccess_1;
	bool                                          CallFunc_IsValid_ReturnValue_7;
	bool                                          CallFunc_BooleanOR_ReturnValue_1;
	bool                                          CallFunc_IsValid_ReturnValue_8;
	bool                                          CallFunc_BooleanAND_ReturnValue;
	uint8                                         Pad_4AD[0x3];
	TDelegate<void(class APawn* PossessedPawn)>   K2Node_CreateDelegate_OutputDelegate_4;
	float                                         CallFunc_GetNumericCVar_OutValue;
	bool                                          CallFunc_GetNumericCVar_ReturnValue;
	bool                                          CallFunc_Greater_DoubleDouble_ReturnValue_1;
	bool                                          CallFunc_BooleanAND_ReturnValue_1;
	bool                                          CallFunc_IsSpatialGameplayExperience_ReturnValue;
	uint8                                         Pad_4C4[0x4];
	class UObject*                                Temp_object_Variable_3;
	bool                                          CallFunc_Is_Creative_Mode_ReturnValue;
	uint8                                         Pad_4D1[0x7];
	class UFortWorldItemDefinition*               K2Node_DynamicCast_AsFort_World_Item_Definition_3;
	bool                                          K2Node_DynamicCast_bSuccess_6;
	bool                                          K2Node_Select_Default_1;
	uint8                                         Pad_4E2[0x6];
	TScriptInterface<class IFortInventoryOwnerInterface> CallFunc_GiveItemToInventoryOwner_InventoryOwner_CastInput_1;
	const class UFortWorldItem*                   CallFunc_GiveItemToInventoryOwner_ReturnValue_1;
	bool                                          CallFunc_BooleanAND_ReturnValue_2;
	uint8                                         Pad_501[0x7];
	class UObject*                                K2Node_CustomEvent_Loaded;
	bool                                          CallFunc_IsValid_ReturnValue_9;
	uint8                                         Pad_511[0x7];
	class APawn*                                  CallFunc_K2_GetPawn_ReturnValue_1;
	bool                                          CallFunc_EqualEqual_ObjectObject_ReturnValue_1;
	bool                                          CallFunc_BooleanAND_ReturnValue_3;
	bool                                          CallFunc_BooleanAND_ReturnValue_4;
	uint8                                         Pad_523[0x5];
	double                                        CallFunc_Greater_DoubleDouble_A_ImplicitCast;
	double                                        CallFunc_SelectFloat_A_ImplicitCast;
	float                                         CallFunc_K2_SetTimerDelegate_Time_ImplicitCast;
	uint8                                         Pad_53C[0x4];
	double                                        CallFunc_Greater_DoubleDouble_A_ImplicitCast_1;
};
static_assert(alignof(Athena_PlayerController_C_ExecuteUbergraph_Athena_PlayerController) == 0x000008, "Wrong alignment on Athena_PlayerController_C_ExecuteUbergraph_Athena_PlayerController");
static_assert(sizeof(Athena_PlayerController_C_ExecuteUbergraph_Athena_PlayerController) == 0x000548, "Wrong size on Athena_PlayerController_C_ExecuteUbergraph_Athena_PlayerController");
static_assert(offsetof(Athena_PlayerController_C_ExecuteUbergraph_Athena_PlayerController, EntryPoint) == 0x000000, "Member 'Athena_PlayerController_C_ExecuteUbergraph_Athena_PlayerController::EntryPoint' has a wrong offset!");
static_assert(offsetof(Athena_PlayerController_C_ExecuteUbergraph_Athena_PlayerController, CallFunc_GetWorldSubsystem_ReturnValue) == 0x000008, "Member 'Athena_PlayerController_C_ExecuteUbergraph_Athena_PlayerController::CallFunc_GetWorldSubsystem_ReturnValue' has a wrong offset!");
static_assert(offsetof(Athena_PlayerController_C_ExecuteUbergraph_Athena_PlayerController, Temp_bool_Variable) == 0x000010, "Member 'Athena_PlayerController_C_ExecuteUbergraph_Athena_PlayerController::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(Athena_PlayerController_C_ExecuteUbergraph_Athena_PlayerController, K2Node_CustomEvent_NewMusicPack) == 0x000018, "Member 'Athena_PlayerController_C_ExecuteUbergraph_Athena_PlayerController::K2Node_CustomEvent_NewMusicPack' has a wrong offset!");
static_assert(offsetof(Athena_PlayerController_C_ExecuteUbergraph_Athena_PlayerController, K2Node_CustomEvent_StartTimeOffset) == 0x000020, "Member 'Athena_PlayerController_C_ExecuteUbergraph_Athena_PlayerController::K2Node_CustomEvent_StartTimeOffset' has a wrong offset!");
static_assert(offsetof(Athena_PlayerController_C_ExecuteUbergraph_Athena_PlayerController, K2Node_CustomEvent_Item_1) == 0x000028, "Member 'Athena_PlayerController_C_ExecuteUbergraph_Athena_PlayerController::K2Node_CustomEvent_Item_1' has a wrong offset!");
static_assert(offsetof(Athena_PlayerController_C_ExecuteUbergraph_Athena_PlayerController, CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue) == 0x000050, "Member 'Athena_PlayerController_C_ExecuteUbergraph_Athena_PlayerController::CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue' has a wrong offset!");
static_assert(offsetof(Athena_PlayerController_C_ExecuteUbergraph_Athena_PlayerController, CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue_1) == 0x000058, "Member 'Athena_PlayerController_C_ExecuteUbergraph_Athena_PlayerController::CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Athena_PlayerController_C_ExecuteUbergraph_Athena_PlayerController, K2Node_DynamicCast_AsFort_World_Item_Definition) == 0x000060, "Member 'Athena_PlayerController_C_ExecuteUbergraph_Athena_PlayerController::K2Node_DynamicCast_AsFort_World_Item_Definition' has a wrong offset!");
static_assert(offsetof(Athena_PlayerController_C_ExecuteUbergraph_Athena_PlayerController, K2Node_DynamicCast_bSuccess) == 0x000068, "Member 'Athena_PlayerController_C_ExecuteUbergraph_Athena_PlayerController::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(Athena_PlayerController_C_ExecuteUbergraph_Athena_PlayerController, K2Node_DynamicCast_AsSound_Base) == 0x000070, "Member 'Athena_PlayerController_C_ExecuteUbergraph_Athena_PlayerController::K2Node_DynamicCast_AsSound_Base' has a wrong offset!");
static_assert(offsetof(Athena_PlayerController_C_ExecuteUbergraph_Athena_PlayerController, K2Node_DynamicCast_bSuccess_1) == 0x000078, "Member 'Athena_PlayerController_C_ExecuteUbergraph_Athena_PlayerController::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(Athena_PlayerController_C_ExecuteUbergraph_Athena_PlayerController, CallFunc_IsValidSoftObjectReference_ReturnValue) == 0x000079, "Member 'Athena_PlayerController_C_ExecuteUbergraph_Athena_PlayerController::CallFunc_IsValidSoftObjectReference_ReturnValue' has a wrong offset!");
static_assert(offsetof(Athena_PlayerController_C_ExecuteUbergraph_Athena_PlayerController, K2Node_CustomEvent_Item) == 0x000080, "Member 'Athena_PlayerController_C_ExecuteUbergraph_Athena_PlayerController::K2Node_CustomEvent_Item' has a wrong offset!");
static_assert(offsetof(Athena_PlayerController_C_ExecuteUbergraph_Athena_PlayerController, CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue_2) == 0x0000A8, "Member 'Athena_PlayerController_C_ExecuteUbergraph_Athena_PlayerController::CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(Athena_PlayerController_C_ExecuteUbergraph_Athena_PlayerController, K2Node_DynamicCast_AsFort_World_Item_Definition_1) == 0x0000B0, "Member 'Athena_PlayerController_C_ExecuteUbergraph_Athena_PlayerController::K2Node_DynamicCast_AsFort_World_Item_Definition_1' has a wrong offset!");
static_assert(offsetof(Athena_PlayerController_C_ExecuteUbergraph_Athena_PlayerController, K2Node_DynamicCast_bSuccess_2) == 0x0000B8, "Member 'Athena_PlayerController_C_ExecuteUbergraph_Athena_PlayerController::K2Node_DynamicCast_bSuccess_2' has a wrong offset!");
static_assert(offsetof(Athena_PlayerController_C_ExecuteUbergraph_Athena_PlayerController, CallFunc_IsValid_ReturnValue) == 0x0000B9, "Member 'Athena_PlayerController_C_ExecuteUbergraph_Athena_PlayerController::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(Athena_PlayerController_C_ExecuteUbergraph_Athena_PlayerController, Temp_object_Variable) == 0x0000C0, "Member 'Athena_PlayerController_C_ExecuteUbergraph_Athena_PlayerController::Temp_object_Variable' has a wrong offset!");
static_assert(offsetof(Athena_PlayerController_C_ExecuteUbergraph_Athena_PlayerController, CallFunc_GiveItemToInventoryOwner_InventoryOwner_CastInput) == 0x0000C8, "Member 'Athena_PlayerController_C_ExecuteUbergraph_Athena_PlayerController::CallFunc_GiveItemToInventoryOwner_InventoryOwner_CastInput' has a wrong offset!");
static_assert(offsetof(Athena_PlayerController_C_ExecuteUbergraph_Athena_PlayerController, CallFunc_GiveItemToInventoryOwner_ReturnValue) == 0x0000D8, "Member 'Athena_PlayerController_C_ExecuteUbergraph_Athena_PlayerController::CallFunc_GiveItemToInventoryOwner_ReturnValue' has a wrong offset!");
static_assert(offsetof(Athena_PlayerController_C_ExecuteUbergraph_Athena_PlayerController, Temp_bool_Variable_1) == 0x0000E0, "Member 'Athena_PlayerController_C_ExecuteUbergraph_Athena_PlayerController::Temp_bool_Variable_1' has a wrong offset!");
static_assert(offsetof(Athena_PlayerController_C_ExecuteUbergraph_Athena_PlayerController, K2Node_Event_ReceivingActor) == 0x0000E8, "Member 'Athena_PlayerController_C_ExecuteUbergraph_Athena_PlayerController::K2Node_Event_ReceivingActor' has a wrong offset!");
static_assert(offsetof(Athena_PlayerController_C_ExecuteUbergraph_Athena_PlayerController, CallFunc_K2_RemoveItemFromPlayer_ReturnValue) == 0x0000F0, "Member 'Athena_PlayerController_C_ExecuteUbergraph_Athena_PlayerController::CallFunc_K2_RemoveItemFromPlayer_ReturnValue' has a wrong offset!");
static_assert(offsetof(Athena_PlayerController_C_ExecuteUbergraph_Athena_PlayerController, K2Node_DynamicCast_AsFort_Pickup) == 0x0000F8, "Member 'Athena_PlayerController_C_ExecuteUbergraph_Athena_PlayerController::K2Node_DynamicCast_AsFort_Pickup' has a wrong offset!");
static_assert(offsetof(Athena_PlayerController_C_ExecuteUbergraph_Athena_PlayerController, K2Node_DynamicCast_bSuccess_3) == 0x000100, "Member 'Athena_PlayerController_C_ExecuteUbergraph_Athena_PlayerController::K2Node_DynamicCast_bSuccess_3' has a wrong offset!");
static_assert(offsetof(Athena_PlayerController_C_ExecuteUbergraph_Athena_PlayerController, CallFunc_GetItemEntry_ReturnValue) == 0x000108, "Member 'Athena_PlayerController_C_ExecuteUbergraph_Athena_PlayerController::CallFunc_GetItemEntry_ReturnValue' has a wrong offset!");
static_assert(offsetof(Athena_PlayerController_C_ExecuteUbergraph_Athena_PlayerController, CallFunc_K2_GetPawn_ReturnValue) == 0x0002A8, "Member 'Athena_PlayerController_C_ExecuteUbergraph_Athena_PlayerController::CallFunc_K2_GetPawn_ReturnValue' has a wrong offset!");
static_assert(offsetof(Athena_PlayerController_C_ExecuteUbergraph_Athena_PlayerController, K2Node_DynamicCast_AsFort_Player_Pawn) == 0x0002B0, "Member 'Athena_PlayerController_C_ExecuteUbergraph_Athena_PlayerController::K2Node_DynamicCast_AsFort_Player_Pawn' has a wrong offset!");
static_assert(offsetof(Athena_PlayerController_C_ExecuteUbergraph_Athena_PlayerController, K2Node_DynamicCast_bSuccess_4) == 0x0002B8, "Member 'Athena_PlayerController_C_ExecuteUbergraph_Athena_PlayerController::K2Node_DynamicCast_bSuccess_4' has a wrong offset!");
static_assert(offsetof(Athena_PlayerController_C_ExecuteUbergraph_Athena_PlayerController, K2Node_DynamicCast_AsFort_World_Item_Definition_2) == 0x0002C0, "Member 'Athena_PlayerController_C_ExecuteUbergraph_Athena_PlayerController::K2Node_DynamicCast_AsFort_World_Item_Definition_2' has a wrong offset!");
static_assert(offsetof(Athena_PlayerController_C_ExecuteUbergraph_Athena_PlayerController, K2Node_DynamicCast_bSuccess_5) == 0x0002C8, "Member 'Athena_PlayerController_C_ExecuteUbergraph_Athena_PlayerController::K2Node_DynamicCast_bSuccess_5' has a wrong offset!");
static_assert(offsetof(Athena_PlayerController_C_ExecuteUbergraph_Athena_PlayerController, CallFunc_HasMatchingGameplayTag_self_CastInput) == 0x0002D0, "Member 'Athena_PlayerController_C_ExecuteUbergraph_Athena_PlayerController::CallFunc_HasMatchingGameplayTag_self_CastInput' has a wrong offset!");
static_assert(offsetof(Athena_PlayerController_C_ExecuteUbergraph_Athena_PlayerController, CallFunc_HasMatchingGameplayTag_ReturnValue) == 0x0002E0, "Member 'Athena_PlayerController_C_ExecuteUbergraph_Athena_PlayerController::CallFunc_HasMatchingGameplayTag_ReturnValue' has a wrong offset!");
static_assert(offsetof(Athena_PlayerController_C_ExecuteUbergraph_Athena_PlayerController, CallFunc_Not_PreBool_ReturnValue) == 0x0002E1, "Member 'Athena_PlayerController_C_ExecuteUbergraph_Athena_PlayerController::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(Athena_PlayerController_C_ExecuteUbergraph_Athena_PlayerController, CallFunc_HasAnyMatchingGameplayTags_self_CastInput) == 0x0002E8, "Member 'Athena_PlayerController_C_ExecuteUbergraph_Athena_PlayerController::CallFunc_HasAnyMatchingGameplayTags_self_CastInput' has a wrong offset!");
static_assert(offsetof(Athena_PlayerController_C_ExecuteUbergraph_Athena_PlayerController, CallFunc_HasAnyMatchingGameplayTags_ReturnValue) == 0x0002F8, "Member 'Athena_PlayerController_C_ExecuteUbergraph_Athena_PlayerController::CallFunc_HasAnyMatchingGameplayTags_ReturnValue' has a wrong offset!");
static_assert(offsetof(Athena_PlayerController_C_ExecuteUbergraph_Athena_PlayerController, CallFunc_GetContext_ReturnValue) == 0x000300, "Member 'Athena_PlayerController_C_ExecuteUbergraph_Athena_PlayerController::CallFunc_GetContext_ReturnValue' has a wrong offset!");
static_assert(offsetof(Athena_PlayerController_C_ExecuteUbergraph_Athena_PlayerController, CallFunc_GetGameInstanceSubsystem_ReturnValue) == 0x000308, "Member 'Athena_PlayerController_C_ExecuteUbergraph_Athena_PlayerController::CallFunc_GetGameInstanceSubsystem_ReturnValue' has a wrong offset!");
static_assert(offsetof(Athena_PlayerController_C_ExecuteUbergraph_Athena_PlayerController, CallFunc_GetVictoryStinger_ReturnValue) == 0x000310, "Member 'Athena_PlayerController_C_ExecuteUbergraph_Athena_PlayerController::CallFunc_GetVictoryStinger_ReturnValue' has a wrong offset!");
static_assert(offsetof(Athena_PlayerController_C_ExecuteUbergraph_Athena_PlayerController, CallFunc_AddEvent_ReturnValue) == 0x000318, "Member 'Athena_PlayerController_C_ExecuteUbergraph_Athena_PlayerController::CallFunc_AddEvent_ReturnValue' has a wrong offset!");
static_assert(offsetof(Athena_PlayerController_C_ExecuteUbergraph_Athena_PlayerController, CallFunc_IsValid_ReturnValue_1) == 0x000320, "Member 'Athena_PlayerController_C_ExecuteUbergraph_Athena_PlayerController::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Athena_PlayerController_C_ExecuteUbergraph_Athena_PlayerController, K2Node_CustomEvent_PossessedPawn) == 0x000328, "Member 'Athena_PlayerController_C_ExecuteUbergraph_Athena_PlayerController::K2Node_CustomEvent_PossessedPawn' has a wrong offset!");
static_assert(offsetof(Athena_PlayerController_C_ExecuteUbergraph_Athena_PlayerController, K2Node_Select_Default) == 0x000330, "Member 'Athena_PlayerController_C_ExecuteUbergraph_Athena_PlayerController::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(Athena_PlayerController_C_ExecuteUbergraph_Athena_PlayerController, K2Node_Event_EndPlayReason) == 0x000338, "Member 'Athena_PlayerController_C_ExecuteUbergraph_Athena_PlayerController::K2Node_Event_EndPlayReason' has a wrong offset!");
static_assert(offsetof(Athena_PlayerController_C_ExecuteUbergraph_Athena_PlayerController, CallFunc_SpawnSound2D_ReturnValue) == 0x000340, "Member 'Athena_PlayerController_C_ExecuteUbergraph_Athena_PlayerController::CallFunc_SpawnSound2D_ReturnValue' has a wrong offset!");
static_assert(offsetof(Athena_PlayerController_C_ExecuteUbergraph_Athena_PlayerController, K2Node_Event_Volume_1) == 0x000348, "Member 'Athena_PlayerController_C_ExecuteUbergraph_Athena_PlayerController::K2Node_Event_Volume_1' has a wrong offset!");
static_assert(offsetof(Athena_PlayerController_C_ExecuteUbergraph_Athena_PlayerController, K2Node_Event_Volume) == 0x000350, "Member 'Athena_PlayerController_C_ExecuteUbergraph_Athena_PlayerController::K2Node_Event_Volume' has a wrong offset!");
static_assert(offsetof(Athena_PlayerController_C_ExecuteUbergraph_Athena_PlayerController, K2Node_CustomEvent_Audio_Only) == 0x000358, "Member 'Athena_PlayerController_C_ExecuteUbergraph_Athena_PlayerController::K2Node_CustomEvent_Audio_Only' has a wrong offset!");
static_assert(offsetof(Athena_PlayerController_C_ExecuteUbergraph_Athena_PlayerController, CallFunc_IsValid_ReturnValue_2) == 0x000359, "Member 'Athena_PlayerController_C_ExecuteUbergraph_Athena_PlayerController::CallFunc_IsValid_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(Athena_PlayerController_C_ExecuteUbergraph_Athena_PlayerController, K2Node_CreateDelegate_OutputDelegate) == 0x00035C, "Member 'Athena_PlayerController_C_ExecuteUbergraph_Athena_PlayerController::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(Athena_PlayerController_C_ExecuteUbergraph_Athena_PlayerController, CallFunc_GetContext_ReturnValue_1) == 0x000368, "Member 'Athena_PlayerController_C_ExecuteUbergraph_Athena_PlayerController::CallFunc_GetContext_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Athena_PlayerController_C_ExecuteUbergraph_Athena_PlayerController, CallFunc_GetEquippedMusicPack_ReturnValue) == 0x000370, "Member 'Athena_PlayerController_C_ExecuteUbergraph_Athena_PlayerController::CallFunc_GetEquippedMusicPack_ReturnValue' has a wrong offset!");
static_assert(offsetof(Athena_PlayerController_C_ExecuteUbergraph_Athena_PlayerController, CallFunc_GetFirstLocalFortPlayerController_ReturnValue) == 0x000378, "Member 'Athena_PlayerController_C_ExecuteUbergraph_Athena_PlayerController::CallFunc_GetFirstLocalFortPlayerController_ReturnValue' has a wrong offset!");
static_assert(offsetof(Athena_PlayerController_C_ExecuteUbergraph_Athena_PlayerController, CallFunc_GetContext_ReturnValue_2) == 0x000380, "Member 'Athena_PlayerController_C_ExecuteUbergraph_Athena_PlayerController::CallFunc_GetContext_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(Athena_PlayerController_C_ExecuteUbergraph_Athena_PlayerController, CallFunc_EqualEqual_ObjectObject_ReturnValue) == 0x000388, "Member 'Athena_PlayerController_C_ExecuteUbergraph_Athena_PlayerController::CallFunc_EqualEqual_ObjectObject_ReturnValue' has a wrong offset!");
static_assert(offsetof(Athena_PlayerController_C_ExecuteUbergraph_Athena_PlayerController, CallFunc_VictoryStingerTimeUntilFadeOut_ReturnValue) == 0x00038C, "Member 'Athena_PlayerController_C_ExecuteUbergraph_Athena_PlayerController::CallFunc_VictoryStingerTimeUntilFadeOut_ReturnValue' has a wrong offset!");
static_assert(offsetof(Athena_PlayerController_C_ExecuteUbergraph_Athena_PlayerController, CallFunc_Greater_DoubleDouble_ReturnValue) == 0x000390, "Member 'Athena_PlayerController_C_ExecuteUbergraph_Athena_PlayerController::CallFunc_Greater_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(Athena_PlayerController_C_ExecuteUbergraph_Athena_PlayerController, K2Node_CreateDelegate_OutputDelegate_1) == 0x000394, "Member 'Athena_PlayerController_C_ExecuteUbergraph_Athena_PlayerController::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(Athena_PlayerController_C_ExecuteUbergraph_Athena_PlayerController, CallFunc_GetContext_ReturnValue_3) == 0x0003A0, "Member 'Athena_PlayerController_C_ExecuteUbergraph_Athena_PlayerController::CallFunc_GetContext_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(Athena_PlayerController_C_ExecuteUbergraph_Athena_PlayerController, K2Node_CreateDelegate_OutputDelegate_2) == 0x0003A8, "Member 'Athena_PlayerController_C_ExecuteUbergraph_Athena_PlayerController::K2Node_CreateDelegate_OutputDelegate_2' has a wrong offset!");
static_assert(offsetof(Athena_PlayerController_C_ExecuteUbergraph_Athena_PlayerController, CallFunc_PlaylistDataReadyAsync_ReturnValue) == 0x0003B8, "Member 'Athena_PlayerController_C_ExecuteUbergraph_Athena_PlayerController::CallFunc_PlaylistDataReadyAsync_ReturnValue' has a wrong offset!");
static_assert(offsetof(Athena_PlayerController_C_ExecuteUbergraph_Athena_PlayerController, Temp_object_Variable_1) == 0x0003C0, "Member 'Athena_PlayerController_C_ExecuteUbergraph_Athena_PlayerController::Temp_object_Variable_1' has a wrong offset!");
static_assert(offsetof(Athena_PlayerController_C_ExecuteUbergraph_Athena_PlayerController, CallFunc_IsValid_ReturnValue_3) == 0x0003C8, "Member 'Athena_PlayerController_C_ExecuteUbergraph_Athena_PlayerController::CallFunc_IsValid_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(Athena_PlayerController_C_ExecuteUbergraph_Athena_PlayerController, Temp_object_Variable_2) == 0x0003D0, "Member 'Athena_PlayerController_C_ExecuteUbergraph_Athena_PlayerController::Temp_object_Variable_2' has a wrong offset!");
static_assert(offsetof(Athena_PlayerController_C_ExecuteUbergraph_Athena_PlayerController, Temp_struct_Variable) == 0x0003D8, "Member 'Athena_PlayerController_C_ExecuteUbergraph_Athena_PlayerController::Temp_struct_Variable' has a wrong offset!");
static_assert(offsetof(Athena_PlayerController_C_ExecuteUbergraph_Athena_PlayerController, K2Node_CustomEvent_GameState) == 0x0003F8, "Member 'Athena_PlayerController_C_ExecuteUbergraph_Athena_PlayerController::K2Node_CustomEvent_GameState' has a wrong offset!");
static_assert(offsetof(Athena_PlayerController_C_ExecuteUbergraph_Athena_PlayerController, K2Node_CustomEvent_Playlist) == 0x000400, "Member 'Athena_PlayerController_C_ExecuteUbergraph_Athena_PlayerController::K2Node_CustomEvent_Playlist' has a wrong offset!");
static_assert(offsetof(Athena_PlayerController_C_ExecuteUbergraph_Athena_PlayerController, K2Node_CustomEvent_PlaylistContextTags) == 0x000408, "Member 'Athena_PlayerController_C_ExecuteUbergraph_Athena_PlayerController::K2Node_CustomEvent_PlaylistContextTags' has a wrong offset!");
static_assert(offsetof(Athena_PlayerController_C_ExecuteUbergraph_Athena_PlayerController, CallFunc_SelectFloat_ReturnValue) == 0x000428, "Member 'Athena_PlayerController_C_ExecuteUbergraph_Athena_PlayerController::CallFunc_SelectFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(Athena_PlayerController_C_ExecuteUbergraph_Athena_PlayerController, K2Node_CreateDelegate_OutputDelegate_3) == 0x000430, "Member 'Athena_PlayerController_C_ExecuteUbergraph_Athena_PlayerController::K2Node_CreateDelegate_OutputDelegate_3' has a wrong offset!");
static_assert(offsetof(Athena_PlayerController_C_ExecuteUbergraph_Athena_PlayerController, CallFunc_K2_SetTimerDelegate_ReturnValue) == 0x000440, "Member 'Athena_PlayerController_C_ExecuteUbergraph_Athena_PlayerController::CallFunc_K2_SetTimerDelegate_ReturnValue' has a wrong offset!");
static_assert(offsetof(Athena_PlayerController_C_ExecuteUbergraph_Athena_PlayerController, K2Node_Event_FinisherPawn) == 0x000448, "Member 'Athena_PlayerController_C_ExecuteUbergraph_Athena_PlayerController::K2Node_Event_FinisherPawn' has a wrong offset!");
static_assert(offsetof(Athena_PlayerController_C_ExecuteUbergraph_Athena_PlayerController, K2Node_Event_FinishingWeapon) == 0x000450, "Member 'Athena_PlayerController_C_ExecuteUbergraph_Athena_PlayerController::K2Node_Event_FinishingWeapon' has a wrong offset!");
static_assert(offsetof(Athena_PlayerController_C_ExecuteUbergraph_Athena_PlayerController, K2Node_Event_DeathCause) == 0x000458, "Member 'Athena_PlayerController_C_ExecuteUbergraph_Athena_PlayerController::K2Node_Event_DeathCause' has a wrong offset!");
static_assert(offsetof(Athena_PlayerController_C_ExecuteUbergraph_Athena_PlayerController, K2Node_Event_bAudioOnly) == 0x000459, "Member 'Athena_PlayerController_C_ExecuteUbergraph_Athena_PlayerController::K2Node_Event_bAudioOnly' has a wrong offset!");
static_assert(offsetof(Athena_PlayerController_C_ExecuteUbergraph_Athena_PlayerController, K2Node_Event_VictoryAnimation) == 0x00045A, "Member 'Athena_PlayerController_C_ExecuteUbergraph_Athena_PlayerController::K2Node_Event_VictoryAnimation' has a wrong offset!");
static_assert(offsetof(Athena_PlayerController_C_ExecuteUbergraph_Athena_PlayerController, K2Node_Event_VictoryStingerCue) == 0x000460, "Member 'Athena_PlayerController_C_ExecuteUbergraph_Athena_PlayerController::K2Node_Event_VictoryStingerCue' has a wrong offset!");
static_assert(offsetof(Athena_PlayerController_C_ExecuteUbergraph_Athena_PlayerController, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x000468, "Member 'Athena_PlayerController_C_ExecuteUbergraph_Athena_PlayerController::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(Athena_PlayerController_C_ExecuteUbergraph_Athena_PlayerController, CallFunc_SpawnSound2D_ReturnValue_1) == 0x000470, "Member 'Athena_PlayerController_C_ExecuteUbergraph_Athena_PlayerController::CallFunc_SpawnSound2D_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Athena_PlayerController_C_ExecuteUbergraph_Athena_PlayerController, CallFunc_IsValid_ReturnValue_4) == 0x000478, "Member 'Athena_PlayerController_C_ExecuteUbergraph_Athena_PlayerController::CallFunc_IsValid_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(Athena_PlayerController_C_ExecuteUbergraph_Athena_PlayerController, CallFunc_EqualEqual_ByteByte_ReturnValue_1) == 0x000479, "Member 'Athena_PlayerController_C_ExecuteUbergraph_Athena_PlayerController::CallFunc_EqualEqual_ByteByte_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Athena_PlayerController_C_ExecuteUbergraph_Athena_PlayerController, CallFunc_EqualEqual_ByteByte_ReturnValue_2) == 0x00047A, "Member 'Athena_PlayerController_C_ExecuteUbergraph_Athena_PlayerController::CallFunc_EqualEqual_ByteByte_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(Athena_PlayerController_C_ExecuteUbergraph_Athena_PlayerController, CallFunc_IsValid_ReturnValue_5) == 0x00047B, "Member 'Athena_PlayerController_C_ExecuteUbergraph_Athena_PlayerController::CallFunc_IsValid_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(Athena_PlayerController_C_ExecuteUbergraph_Athena_PlayerController, CallFunc_BooleanOR_ReturnValue) == 0x00047C, "Member 'Athena_PlayerController_C_ExecuteUbergraph_Athena_PlayerController::CallFunc_BooleanOR_ReturnValue' has a wrong offset!");
static_assert(offsetof(Athena_PlayerController_C_ExecuteUbergraph_Athena_PlayerController, CallFunc_Not_PreBool_ReturnValue_1) == 0x00047D, "Member 'Athena_PlayerController_C_ExecuteUbergraph_Athena_PlayerController::CallFunc_Not_PreBool_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Athena_PlayerController_C_ExecuteUbergraph_Athena_PlayerController, CallFunc_GetWeaponActorClass_ReturnValue) == 0x000480, "Member 'Athena_PlayerController_C_ExecuteUbergraph_Athena_PlayerController::CallFunc_GetWeaponActorClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(Athena_PlayerController_C_ExecuteUbergraph_Athena_PlayerController, CallFunc_IsValid_ReturnValue_6) == 0x000488, "Member 'Athena_PlayerController_C_ExecuteUbergraph_Athena_PlayerController::CallFunc_IsValid_ReturnValue_6' has a wrong offset!");
static_assert(offsetof(Athena_PlayerController_C_ExecuteUbergraph_Athena_PlayerController, K2Node_ClassDynamicCast_AsFort_Weapon_Ranged_Dual) == 0x000490, "Member 'Athena_PlayerController_C_ExecuteUbergraph_Athena_PlayerController::K2Node_ClassDynamicCast_AsFort_Weapon_Ranged_Dual' has a wrong offset!");
static_assert(offsetof(Athena_PlayerController_C_ExecuteUbergraph_Athena_PlayerController, K2Node_ClassDynamicCast_bSuccess) == 0x000498, "Member 'Athena_PlayerController_C_ExecuteUbergraph_Athena_PlayerController::K2Node_ClassDynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(Athena_PlayerController_C_ExecuteUbergraph_Athena_PlayerController, K2Node_ClassDynamicCast_AsB_Ranged_Generic) == 0x0004A0, "Member 'Athena_PlayerController_C_ExecuteUbergraph_Athena_PlayerController::K2Node_ClassDynamicCast_AsB_Ranged_Generic' has a wrong offset!");
static_assert(offsetof(Athena_PlayerController_C_ExecuteUbergraph_Athena_PlayerController, K2Node_ClassDynamicCast_bSuccess_1) == 0x0004A8, "Member 'Athena_PlayerController_C_ExecuteUbergraph_Athena_PlayerController::K2Node_ClassDynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(Athena_PlayerController_C_ExecuteUbergraph_Athena_PlayerController, CallFunc_IsValid_ReturnValue_7) == 0x0004A9, "Member 'Athena_PlayerController_C_ExecuteUbergraph_Athena_PlayerController::CallFunc_IsValid_ReturnValue_7' has a wrong offset!");
static_assert(offsetof(Athena_PlayerController_C_ExecuteUbergraph_Athena_PlayerController, CallFunc_BooleanOR_ReturnValue_1) == 0x0004AA, "Member 'Athena_PlayerController_C_ExecuteUbergraph_Athena_PlayerController::CallFunc_BooleanOR_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Athena_PlayerController_C_ExecuteUbergraph_Athena_PlayerController, CallFunc_IsValid_ReturnValue_8) == 0x0004AB, "Member 'Athena_PlayerController_C_ExecuteUbergraph_Athena_PlayerController::CallFunc_IsValid_ReturnValue_8' has a wrong offset!");
static_assert(offsetof(Athena_PlayerController_C_ExecuteUbergraph_Athena_PlayerController, CallFunc_BooleanAND_ReturnValue) == 0x0004AC, "Member 'Athena_PlayerController_C_ExecuteUbergraph_Athena_PlayerController::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(Athena_PlayerController_C_ExecuteUbergraph_Athena_PlayerController, K2Node_CreateDelegate_OutputDelegate_4) == 0x0004B0, "Member 'Athena_PlayerController_C_ExecuteUbergraph_Athena_PlayerController::K2Node_CreateDelegate_OutputDelegate_4' has a wrong offset!");
static_assert(offsetof(Athena_PlayerController_C_ExecuteUbergraph_Athena_PlayerController, CallFunc_GetNumericCVar_OutValue) == 0x0004BC, "Member 'Athena_PlayerController_C_ExecuteUbergraph_Athena_PlayerController::CallFunc_GetNumericCVar_OutValue' has a wrong offset!");
static_assert(offsetof(Athena_PlayerController_C_ExecuteUbergraph_Athena_PlayerController, CallFunc_GetNumericCVar_ReturnValue) == 0x0004C0, "Member 'Athena_PlayerController_C_ExecuteUbergraph_Athena_PlayerController::CallFunc_GetNumericCVar_ReturnValue' has a wrong offset!");
static_assert(offsetof(Athena_PlayerController_C_ExecuteUbergraph_Athena_PlayerController, CallFunc_Greater_DoubleDouble_ReturnValue_1) == 0x0004C1, "Member 'Athena_PlayerController_C_ExecuteUbergraph_Athena_PlayerController::CallFunc_Greater_DoubleDouble_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Athena_PlayerController_C_ExecuteUbergraph_Athena_PlayerController, CallFunc_BooleanAND_ReturnValue_1) == 0x0004C2, "Member 'Athena_PlayerController_C_ExecuteUbergraph_Athena_PlayerController::CallFunc_BooleanAND_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Athena_PlayerController_C_ExecuteUbergraph_Athena_PlayerController, CallFunc_IsSpatialGameplayExperience_ReturnValue) == 0x0004C3, "Member 'Athena_PlayerController_C_ExecuteUbergraph_Athena_PlayerController::CallFunc_IsSpatialGameplayExperience_ReturnValue' has a wrong offset!");
static_assert(offsetof(Athena_PlayerController_C_ExecuteUbergraph_Athena_PlayerController, Temp_object_Variable_3) == 0x0004C8, "Member 'Athena_PlayerController_C_ExecuteUbergraph_Athena_PlayerController::Temp_object_Variable_3' has a wrong offset!");
static_assert(offsetof(Athena_PlayerController_C_ExecuteUbergraph_Athena_PlayerController, CallFunc_Is_Creative_Mode_ReturnValue) == 0x0004D0, "Member 'Athena_PlayerController_C_ExecuteUbergraph_Athena_PlayerController::CallFunc_Is_Creative_Mode_ReturnValue' has a wrong offset!");
static_assert(offsetof(Athena_PlayerController_C_ExecuteUbergraph_Athena_PlayerController, K2Node_DynamicCast_AsFort_World_Item_Definition_3) == 0x0004D8, "Member 'Athena_PlayerController_C_ExecuteUbergraph_Athena_PlayerController::K2Node_DynamicCast_AsFort_World_Item_Definition_3' has a wrong offset!");
static_assert(offsetof(Athena_PlayerController_C_ExecuteUbergraph_Athena_PlayerController, K2Node_DynamicCast_bSuccess_6) == 0x0004E0, "Member 'Athena_PlayerController_C_ExecuteUbergraph_Athena_PlayerController::K2Node_DynamicCast_bSuccess_6' has a wrong offset!");
static_assert(offsetof(Athena_PlayerController_C_ExecuteUbergraph_Athena_PlayerController, K2Node_Select_Default_1) == 0x0004E1, "Member 'Athena_PlayerController_C_ExecuteUbergraph_Athena_PlayerController::K2Node_Select_Default_1' has a wrong offset!");
static_assert(offsetof(Athena_PlayerController_C_ExecuteUbergraph_Athena_PlayerController, CallFunc_GiveItemToInventoryOwner_InventoryOwner_CastInput_1) == 0x0004E8, "Member 'Athena_PlayerController_C_ExecuteUbergraph_Athena_PlayerController::CallFunc_GiveItemToInventoryOwner_InventoryOwner_CastInput_1' has a wrong offset!");
static_assert(offsetof(Athena_PlayerController_C_ExecuteUbergraph_Athena_PlayerController, CallFunc_GiveItemToInventoryOwner_ReturnValue_1) == 0x0004F8, "Member 'Athena_PlayerController_C_ExecuteUbergraph_Athena_PlayerController::CallFunc_GiveItemToInventoryOwner_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Athena_PlayerController_C_ExecuteUbergraph_Athena_PlayerController, CallFunc_BooleanAND_ReturnValue_2) == 0x000500, "Member 'Athena_PlayerController_C_ExecuteUbergraph_Athena_PlayerController::CallFunc_BooleanAND_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(Athena_PlayerController_C_ExecuteUbergraph_Athena_PlayerController, K2Node_CustomEvent_Loaded) == 0x000508, "Member 'Athena_PlayerController_C_ExecuteUbergraph_Athena_PlayerController::K2Node_CustomEvent_Loaded' has a wrong offset!");
static_assert(offsetof(Athena_PlayerController_C_ExecuteUbergraph_Athena_PlayerController, CallFunc_IsValid_ReturnValue_9) == 0x000510, "Member 'Athena_PlayerController_C_ExecuteUbergraph_Athena_PlayerController::CallFunc_IsValid_ReturnValue_9' has a wrong offset!");
static_assert(offsetof(Athena_PlayerController_C_ExecuteUbergraph_Athena_PlayerController, CallFunc_K2_GetPawn_ReturnValue_1) == 0x000518, "Member 'Athena_PlayerController_C_ExecuteUbergraph_Athena_PlayerController::CallFunc_K2_GetPawn_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Athena_PlayerController_C_ExecuteUbergraph_Athena_PlayerController, CallFunc_EqualEqual_ObjectObject_ReturnValue_1) == 0x000520, "Member 'Athena_PlayerController_C_ExecuteUbergraph_Athena_PlayerController::CallFunc_EqualEqual_ObjectObject_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Athena_PlayerController_C_ExecuteUbergraph_Athena_PlayerController, CallFunc_BooleanAND_ReturnValue_3) == 0x000521, "Member 'Athena_PlayerController_C_ExecuteUbergraph_Athena_PlayerController::CallFunc_BooleanAND_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(Athena_PlayerController_C_ExecuteUbergraph_Athena_PlayerController, CallFunc_BooleanAND_ReturnValue_4) == 0x000522, "Member 'Athena_PlayerController_C_ExecuteUbergraph_Athena_PlayerController::CallFunc_BooleanAND_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(Athena_PlayerController_C_ExecuteUbergraph_Athena_PlayerController, CallFunc_Greater_DoubleDouble_A_ImplicitCast) == 0x000528, "Member 'Athena_PlayerController_C_ExecuteUbergraph_Athena_PlayerController::CallFunc_Greater_DoubleDouble_A_ImplicitCast' has a wrong offset!");
static_assert(offsetof(Athena_PlayerController_C_ExecuteUbergraph_Athena_PlayerController, CallFunc_SelectFloat_A_ImplicitCast) == 0x000530, "Member 'Athena_PlayerController_C_ExecuteUbergraph_Athena_PlayerController::CallFunc_SelectFloat_A_ImplicitCast' has a wrong offset!");
static_assert(offsetof(Athena_PlayerController_C_ExecuteUbergraph_Athena_PlayerController, CallFunc_K2_SetTimerDelegate_Time_ImplicitCast) == 0x000538, "Member 'Athena_PlayerController_C_ExecuteUbergraph_Athena_PlayerController::CallFunc_K2_SetTimerDelegate_Time_ImplicitCast' has a wrong offset!");
static_assert(offsetof(Athena_PlayerController_C_ExecuteUbergraph_Athena_PlayerController, CallFunc_Greater_DoubleDouble_A_ImplicitCast_1) == 0x000540, "Member 'Athena_PlayerController_C_ExecuteUbergraph_Athena_PlayerController::CallFunc_Greater_DoubleDouble_A_ImplicitCast_1' has a wrong offset!");

struct Athena_PlayerController_C_FadeAudioComponents final
{
public:
	class UAudioComponent*                        NewMusicComponent;
	class UAudioComponent*                        PreviousMusicComponent;
	class USoundBase*                             Music;
	double                                        StartTime;
	bool                                          CallFunc_IsValid_ReturnValue;
	bool                                          CallFunc_IsValid_ReturnValue_1;
	uint8                                         Pad_22[0x2];
	float                                         CallFunc_FadeIn_StartTime_ImplicitCast;
};
static_assert(alignof(Athena_PlayerController_C_FadeAudioComponents) == 0x000008, "Wrong alignment on Athena_PlayerController_C_FadeAudioComponents");
static_assert(sizeof(Athena_PlayerController_C_FadeAudioComponents) == 0x000028, "Wrong size on Athena_PlayerController_C_FadeAudioComponents");
static_assert(offsetof(Athena_PlayerController_C_FadeAudioComponents, NewMusicComponent) == 0x000000, "Member 'Athena_PlayerController_C_FadeAudioComponents::NewMusicComponent' has a wrong offset!");
static_assert(offsetof(Athena_PlayerController_C_FadeAudioComponents, PreviousMusicComponent) == 0x000008, "Member 'Athena_PlayerController_C_FadeAudioComponents::PreviousMusicComponent' has a wrong offset!");
static_assert(offsetof(Athena_PlayerController_C_FadeAudioComponents, Music) == 0x000010, "Member 'Athena_PlayerController_C_FadeAudioComponents::Music' has a wrong offset!");
static_assert(offsetof(Athena_PlayerController_C_FadeAudioComponents, StartTime) == 0x000018, "Member 'Athena_PlayerController_C_FadeAudioComponents::StartTime' has a wrong offset!");
static_assert(offsetof(Athena_PlayerController_C_FadeAudioComponents, CallFunc_IsValid_ReturnValue) == 0x000020, "Member 'Athena_PlayerController_C_FadeAudioComponents::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(Athena_PlayerController_C_FadeAudioComponents, CallFunc_IsValid_ReturnValue_1) == 0x000021, "Member 'Athena_PlayerController_C_FadeAudioComponents::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Athena_PlayerController_C_FadeAudioComponents, CallFunc_FadeIn_StartTime_ImplicitCast) == 0x000024, "Member 'Athena_PlayerController_C_FadeAudioComponents::CallFunc_FadeIn_StartTime_ImplicitCast' has a wrong offset!");

struct Athena_PlayerController_C_GrantItem final
{
public:
	TSoftObjectPtr<class UFortWorldItemDefinition> Item;
};
static_assert(alignof(Athena_PlayerController_C_GrantItem) == 0x000008, "Wrong alignment on Athena_PlayerController_C_GrantItem");
static_assert(sizeof(Athena_PlayerController_C_GrantItem) == 0x000028, "Wrong size on Athena_PlayerController_C_GrantItem");
static_assert(offsetof(Athena_PlayerController_C_GrantItem, Item) == 0x000000, "Member 'Athena_PlayerController_C_GrantItem::Item' has a wrong offset!");

struct Athena_PlayerController_C_Handle_Victory_Royale_Audio final
{
public:
	bool                                          Audio_Only;
};
static_assert(alignof(Athena_PlayerController_C_Handle_Victory_Royale_Audio) == 0x000001, "Wrong alignment on Athena_PlayerController_C_Handle_Victory_Royale_Audio");
static_assert(sizeof(Athena_PlayerController_C_Handle_Victory_Royale_Audio) == 0x000001, "Wrong size on Athena_PlayerController_C_Handle_Victory_Royale_Audio");
static_assert(offsetof(Athena_PlayerController_C_Handle_Victory_Royale_Audio, Audio_Only) == 0x000000, "Member 'Athena_PlayerController_C_Handle_Victory_Royale_Audio::Audio_Only' has a wrong offset!");

struct Athena_PlayerController_C_Is_Creative_Mode final
{
public:
	bool                                          ReturnValue;
	uint8                                         Pad_1[0x7];
	class AGameStateBase*                         CallFunc_GetGameState_ReturnValue;
	class AFortGameStateAthena*                   K2Node_DynamicCast_AsFort_Game_State_Athena;
	bool                                          K2Node_DynamicCast_bSuccess;
	bool                                          CallFunc_IsCreativeModePlaylist_ReturnValue;
	bool                                          CallFunc_IsCreativeLTMPlaylist_ReturnValue;
	bool                                          CallFunc_BooleanOR_ReturnValue;
};
static_assert(alignof(Athena_PlayerController_C_Is_Creative_Mode) == 0x000008, "Wrong alignment on Athena_PlayerController_C_Is_Creative_Mode");
static_assert(sizeof(Athena_PlayerController_C_Is_Creative_Mode) == 0x000020, "Wrong size on Athena_PlayerController_C_Is_Creative_Mode");
static_assert(offsetof(Athena_PlayerController_C_Is_Creative_Mode, ReturnValue) == 0x000000, "Member 'Athena_PlayerController_C_Is_Creative_Mode::ReturnValue' has a wrong offset!");
static_assert(offsetof(Athena_PlayerController_C_Is_Creative_Mode, CallFunc_GetGameState_ReturnValue) == 0x000008, "Member 'Athena_PlayerController_C_Is_Creative_Mode::CallFunc_GetGameState_ReturnValue' has a wrong offset!");
static_assert(offsetof(Athena_PlayerController_C_Is_Creative_Mode, K2Node_DynamicCast_AsFort_Game_State_Athena) == 0x000010, "Member 'Athena_PlayerController_C_Is_Creative_Mode::K2Node_DynamicCast_AsFort_Game_State_Athena' has a wrong offset!");
static_assert(offsetof(Athena_PlayerController_C_Is_Creative_Mode, K2Node_DynamicCast_bSuccess) == 0x000018, "Member 'Athena_PlayerController_C_Is_Creative_Mode::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(Athena_PlayerController_C_Is_Creative_Mode, CallFunc_IsCreativeModePlaylist_ReturnValue) == 0x000019, "Member 'Athena_PlayerController_C_Is_Creative_Mode::CallFunc_IsCreativeModePlaylist_ReturnValue' has a wrong offset!");
static_assert(offsetof(Athena_PlayerController_C_Is_Creative_Mode, CallFunc_IsCreativeLTMPlaylist_ReturnValue) == 0x00001A, "Member 'Athena_PlayerController_C_Is_Creative_Mode::CallFunc_IsCreativeLTMPlaylist_ReturnValue' has a wrong offset!");
static_assert(offsetof(Athena_PlayerController_C_Is_Creative_Mode, CallFunc_BooleanOR_ReturnValue) == 0x00001B, "Member 'Athena_PlayerController_C_Is_Creative_Mode::CallFunc_BooleanOR_ReturnValue' has a wrong offset!");

struct Athena_PlayerController_C_K2_OnEnterVolume final
{
public:
	class AFortVolume*                            Volume;
};
static_assert(alignof(Athena_PlayerController_C_K2_OnEnterVolume) == 0x000008, "Wrong alignment on Athena_PlayerController_C_K2_OnEnterVolume");
static_assert(sizeof(Athena_PlayerController_C_K2_OnEnterVolume) == 0x000008, "Wrong size on Athena_PlayerController_C_K2_OnEnterVolume");
static_assert(offsetof(Athena_PlayerController_C_K2_OnEnterVolume, Volume) == 0x000000, "Member 'Athena_PlayerController_C_K2_OnEnterVolume::Volume' has a wrong offset!");

struct Athena_PlayerController_C_K2_OnLeaveVolume final
{
public:
	class AFortVolume*                            Volume;
};
static_assert(alignof(Athena_PlayerController_C_K2_OnLeaveVolume) == 0x000008, "Wrong alignment on Athena_PlayerController_C_K2_OnLeaveVolume");
static_assert(sizeof(Athena_PlayerController_C_K2_OnLeaveVolume) == 0x000008, "Wrong size on Athena_PlayerController_C_K2_OnLeaveVolume");
static_assert(offsetof(Athena_PlayerController_C_K2_OnLeaveVolume, Volume) == 0x000000, "Member 'Athena_PlayerController_C_K2_OnLeaveVolume::Volume' has a wrong offset!");

struct Athena_PlayerController_C_OnLoaded_F82CC70840156DFAFAF85EB0D93E5E2D final
{
public:
	class UObject*                                Loaded;
};
static_assert(alignof(Athena_PlayerController_C_OnLoaded_F82CC70840156DFAFAF85EB0D93E5E2D) == 0x000008, "Wrong alignment on Athena_PlayerController_C_OnLoaded_F82CC70840156DFAFAF85EB0D93E5E2D");
static_assert(sizeof(Athena_PlayerController_C_OnLoaded_F82CC70840156DFAFAF85EB0D93E5E2D) == 0x000008, "Wrong size on Athena_PlayerController_C_OnLoaded_F82CC70840156DFAFAF85EB0D93E5E2D");
static_assert(offsetof(Athena_PlayerController_C_OnLoaded_F82CC70840156DFAFAF85EB0D93E5E2D, Loaded) == 0x000000, "Member 'Athena_PlayerController_C_OnLoaded_F82CC70840156DFAFAF85EB0D93E5E2D::Loaded' has a wrong offset!");

struct Athena_PlayerController_C_OnLocalInteraction final
{
public:
	class AActor*                                 ReceivingActor;
};
static_assert(alignof(Athena_PlayerController_C_OnLocalInteraction) == 0x000008, "Wrong alignment on Athena_PlayerController_C_OnLocalInteraction");
static_assert(sizeof(Athena_PlayerController_C_OnLocalInteraction) == 0x000008, "Wrong size on Athena_PlayerController_C_OnLocalInteraction");
static_assert(offsetof(Athena_PlayerController_C_OnLocalInteraction, ReceivingActor) == 0x000000, "Member 'Athena_PlayerController_C_OnLocalInteraction::ReceivingActor' has a wrong offset!");

struct Athena_PlayerController_C_OnMusicPackLoaded final
{
public:
	const class UAthenaMusicPackItemDefinition*   NewMusicPack;
	float                                         StartTimeOffset;
};
static_assert(alignof(Athena_PlayerController_C_OnMusicPackLoaded) == 0x000008, "Wrong alignment on Athena_PlayerController_C_OnMusicPackLoaded");
static_assert(sizeof(Athena_PlayerController_C_OnMusicPackLoaded) == 0x000010, "Wrong size on Athena_PlayerController_C_OnMusicPackLoaded");
static_assert(offsetof(Athena_PlayerController_C_OnMusicPackLoaded, NewMusicPack) == 0x000000, "Member 'Athena_PlayerController_C_OnMusicPackLoaded::NewMusicPack' has a wrong offset!");
static_assert(offsetof(Athena_PlayerController_C_OnMusicPackLoaded, StartTimeOffset) == 0x000008, "Member 'Athena_PlayerController_C_OnMusicPackLoaded::StartTimeOffset' has a wrong offset!");

struct Athena_PlayerController_C_OnReady_B4409EAB4038578B1EBA9DB1586489B9 final
{
public:
	class AFortGameStateAthena*                   GameState;
	const class UFortPlaylist*                    Playlist;
	struct FGameplayTagContainer                  PlaylistContextTags;
};
static_assert(alignof(Athena_PlayerController_C_OnReady_B4409EAB4038578B1EBA9DB1586489B9) == 0x000008, "Wrong alignment on Athena_PlayerController_C_OnReady_B4409EAB4038578B1EBA9DB1586489B9");
static_assert(sizeof(Athena_PlayerController_C_OnReady_B4409EAB4038578B1EBA9DB1586489B9) == 0x000030, "Wrong size on Athena_PlayerController_C_OnReady_B4409EAB4038578B1EBA9DB1586489B9");
static_assert(offsetof(Athena_PlayerController_C_OnReady_B4409EAB4038578B1EBA9DB1586489B9, GameState) == 0x000000, "Member 'Athena_PlayerController_C_OnReady_B4409EAB4038578B1EBA9DB1586489B9::GameState' has a wrong offset!");
static_assert(offsetof(Athena_PlayerController_C_OnReady_B4409EAB4038578B1EBA9DB1586489B9, Playlist) == 0x000008, "Member 'Athena_PlayerController_C_OnReady_B4409EAB4038578B1EBA9DB1586489B9::Playlist' has a wrong offset!");
static_assert(offsetof(Athena_PlayerController_C_OnReady_B4409EAB4038578B1EBA9DB1586489B9, PlaylistContextTags) == 0x000010, "Member 'Athena_PlayerController_C_OnReady_B4409EAB4038578B1EBA9DB1586489B9::PlaylistContextTags' has a wrong offset!");

struct Athena_PlayerController_C_PlayVictoryStinger final
{
public:
	class USoundCue*                              VictoryStingerCue;
};
static_assert(alignof(Athena_PlayerController_C_PlayVictoryStinger) == 0x000008, "Wrong alignment on Athena_PlayerController_C_PlayVictoryStinger");
static_assert(sizeof(Athena_PlayerController_C_PlayVictoryStinger) == 0x000008, "Wrong size on Athena_PlayerController_C_PlayVictoryStinger");
static_assert(offsetof(Athena_PlayerController_C_PlayVictoryStinger, VictoryStingerCue) == 0x000000, "Member 'Athena_PlayerController_C_PlayVictoryStinger::VictoryStingerCue' has a wrong offset!");

struct Athena_PlayerController_C_PlayWinEffects final
{
public:
	class APawn*                                  FinisherPawn;
	const class UFortWeaponItemDefinition*        FinishingWeapon;
	EDeathCause                                   DeathCause;
	bool                                          bAudioOnly;
	ERoundVictoryAnimation                        VictoryAnimation;
};
static_assert(alignof(Athena_PlayerController_C_PlayWinEffects) == 0x000008, "Wrong alignment on Athena_PlayerController_C_PlayWinEffects");
static_assert(sizeof(Athena_PlayerController_C_PlayWinEffects) == 0x000018, "Wrong size on Athena_PlayerController_C_PlayWinEffects");
static_assert(offsetof(Athena_PlayerController_C_PlayWinEffects, FinisherPawn) == 0x000000, "Member 'Athena_PlayerController_C_PlayWinEffects::FinisherPawn' has a wrong offset!");
static_assert(offsetof(Athena_PlayerController_C_PlayWinEffects, FinishingWeapon) == 0x000008, "Member 'Athena_PlayerController_C_PlayWinEffects::FinishingWeapon' has a wrong offset!");
static_assert(offsetof(Athena_PlayerController_C_PlayWinEffects, DeathCause) == 0x000010, "Member 'Athena_PlayerController_C_PlayWinEffects::DeathCause' has a wrong offset!");
static_assert(offsetof(Athena_PlayerController_C_PlayWinEffects, bAudioOnly) == 0x000011, "Member 'Athena_PlayerController_C_PlayWinEffects::bAudioOnly' has a wrong offset!");
static_assert(offsetof(Athena_PlayerController_C_PlayWinEffects, VictoryAnimation) == 0x000012, "Member 'Athena_PlayerController_C_PlayWinEffects::VictoryAnimation' has a wrong offset!");

struct Athena_PlayerController_C_ReactToPawnPossession final
{
public:
	class APawn*                                  PossessedPawn;
};
static_assert(alignof(Athena_PlayerController_C_ReactToPawnPossession) == 0x000008, "Wrong alignment on Athena_PlayerController_C_ReactToPawnPossession");
static_assert(sizeof(Athena_PlayerController_C_ReactToPawnPossession) == 0x000008, "Wrong size on Athena_PlayerController_C_ReactToPawnPossession");
static_assert(offsetof(Athena_PlayerController_C_ReactToPawnPossession, PossessedPawn) == 0x000000, "Member 'Athena_PlayerController_C_ReactToPawnPossession::PossessedPawn' has a wrong offset!");

struct Athena_PlayerController_C_ReceiveEndPlay final
{
public:
	EEndPlayReason                                EndPlayReason;
};
static_assert(alignof(Athena_PlayerController_C_ReceiveEndPlay) == 0x000001, "Wrong alignment on Athena_PlayerController_C_ReceiveEndPlay");
static_assert(sizeof(Athena_PlayerController_C_ReceiveEndPlay) == 0x000001, "Wrong size on Athena_PlayerController_C_ReceiveEndPlay");
static_assert(offsetof(Athena_PlayerController_C_ReceiveEndPlay, EndPlayReason) == 0x000000, "Member 'Athena_PlayerController_C_ReceiveEndPlay::EndPlayReason' has a wrong offset!");

struct Athena_PlayerController_C_RevokeItem final
{
public:
	TSoftObjectPtr<class UFortWorldItemDefinition> Item;
};
static_assert(alignof(Athena_PlayerController_C_RevokeItem) == 0x000008, "Wrong alignment on Athena_PlayerController_C_RevokeItem");
static_assert(sizeof(Athena_PlayerController_C_RevokeItem) == 0x000028, "Wrong size on Athena_PlayerController_C_RevokeItem");
static_assert(offsetof(Athena_PlayerController_C_RevokeItem, Item) == 0x000000, "Member 'Athena_PlayerController_C_RevokeItem::Item' has a wrong offset!");

struct Athena_PlayerController_C_UserConstructionScript final
{
public:
	class UAthenaMarkerComponent*                 CallFunc_GetMarkerComponent_ReturnValue;
};
static_assert(alignof(Athena_PlayerController_C_UserConstructionScript) == 0x000008, "Wrong alignment on Athena_PlayerController_C_UserConstructionScript");
static_assert(sizeof(Athena_PlayerController_C_UserConstructionScript) == 0x000008, "Wrong size on Athena_PlayerController_C_UserConstructionScript");
static_assert(offsetof(Athena_PlayerController_C_UserConstructionScript, CallFunc_GetMarkerComponent_ReturnValue) == 0x000000, "Member 'Athena_PlayerController_C_UserConstructionScript::CallFunc_GetMarkerComponent_ReturnValue' has a wrong offset!");

}
