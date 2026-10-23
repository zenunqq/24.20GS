#pragma once

#include "Basic.hpp"

#include "GameplayAbilities_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "Engine_structs.hpp"
#include "GameplayTags_structs.hpp"

namespace SDK::Params
{

struct GCNS_GM_OnDisplayChatEmoji_C_K2_HandleGameplayCue final
{
public:
	class AActor*                                 MyTarget;
	EGameplayCueEvent                             EventType;
	uint8                                         Pad_9[0x7];
	struct FGameplayCueParameters                 Parameters;
	class AFortPlayerPawn*                        K2Node_DynamicCast_AsFort_Player_Pawn;
	bool                                          K2Node_DynamicCast_bSuccess;
	uint8                                         Pad_E9[0x7];
	class UAudioComponent*                        CallFunc_SpawnSound2D_ReturnValue;
	bool                                          CallFunc_IsLocallyViewed_ReturnValue;
};
static_assert(alignof(GCNS_GM_OnDisplayChatEmoji_C_K2_HandleGameplayCue) == 0x000008, "Wrong alignment on GCNS_GM_OnDisplayChatEmoji_C_K2_HandleGameplayCue");
static_assert(sizeof(GCNS_GM_OnDisplayChatEmoji_C_K2_HandleGameplayCue) == 0x000100, "Wrong size on GCNS_GM_OnDisplayChatEmoji_C_K2_HandleGameplayCue");
static_assert(offsetof(GCNS_GM_OnDisplayChatEmoji_C_K2_HandleGameplayCue, MyTarget) == 0x000000, "Member 'GCNS_GM_OnDisplayChatEmoji_C_K2_HandleGameplayCue::MyTarget' has a wrong offset!");
static_assert(offsetof(GCNS_GM_OnDisplayChatEmoji_C_K2_HandleGameplayCue, EventType) == 0x000008, "Member 'GCNS_GM_OnDisplayChatEmoji_C_K2_HandleGameplayCue::EventType' has a wrong offset!");
static_assert(offsetof(GCNS_GM_OnDisplayChatEmoji_C_K2_HandleGameplayCue, Parameters) == 0x000010, "Member 'GCNS_GM_OnDisplayChatEmoji_C_K2_HandleGameplayCue::Parameters' has a wrong offset!");
static_assert(offsetof(GCNS_GM_OnDisplayChatEmoji_C_K2_HandleGameplayCue, K2Node_DynamicCast_AsFort_Player_Pawn) == 0x0000E0, "Member 'GCNS_GM_OnDisplayChatEmoji_C_K2_HandleGameplayCue::K2Node_DynamicCast_AsFort_Player_Pawn' has a wrong offset!");
static_assert(offsetof(GCNS_GM_OnDisplayChatEmoji_C_K2_HandleGameplayCue, K2Node_DynamicCast_bSuccess) == 0x0000E8, "Member 'GCNS_GM_OnDisplayChatEmoji_C_K2_HandleGameplayCue::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(GCNS_GM_OnDisplayChatEmoji_C_K2_HandleGameplayCue, CallFunc_SpawnSound2D_ReturnValue) == 0x0000F0, "Member 'GCNS_GM_OnDisplayChatEmoji_C_K2_HandleGameplayCue::CallFunc_SpawnSound2D_ReturnValue' has a wrong offset!");
static_assert(offsetof(GCNS_GM_OnDisplayChatEmoji_C_K2_HandleGameplayCue, CallFunc_IsLocallyViewed_ReturnValue) == 0x0000F8, "Member 'GCNS_GM_OnDisplayChatEmoji_C_K2_HandleGameplayCue::CallFunc_IsLocallyViewed_ReturnValue' has a wrong offset!");

struct GCNS_GM_OnDisplayChatEmoji_C_OnActive final
{
public:
	class AActor*                                 MyTarget;
	struct FGameplayCueParameters                 Parameters;
	bool                                          ReturnValue;
	bool                                          CallFunc_OnActive_ReturnValue;
};
static_assert(alignof(GCNS_GM_OnDisplayChatEmoji_C_OnActive) == 0x000008, "Wrong alignment on GCNS_GM_OnDisplayChatEmoji_C_OnActive");
static_assert(sizeof(GCNS_GM_OnDisplayChatEmoji_C_OnActive) == 0x0000E0, "Wrong size on GCNS_GM_OnDisplayChatEmoji_C_OnActive");
static_assert(offsetof(GCNS_GM_OnDisplayChatEmoji_C_OnActive, MyTarget) == 0x000000, "Member 'GCNS_GM_OnDisplayChatEmoji_C_OnActive::MyTarget' has a wrong offset!");
static_assert(offsetof(GCNS_GM_OnDisplayChatEmoji_C_OnActive, Parameters) == 0x000008, "Member 'GCNS_GM_OnDisplayChatEmoji_C_OnActive::Parameters' has a wrong offset!");
static_assert(offsetof(GCNS_GM_OnDisplayChatEmoji_C_OnActive, ReturnValue) == 0x0000D8, "Member 'GCNS_GM_OnDisplayChatEmoji_C_OnActive::ReturnValue' has a wrong offset!");
static_assert(offsetof(GCNS_GM_OnDisplayChatEmoji_C_OnActive, CallFunc_OnActive_ReturnValue) == 0x0000D9, "Member 'GCNS_GM_OnDisplayChatEmoji_C_OnActive::CallFunc_OnActive_ReturnValue' has a wrong offset!");

struct GCNS_GM_OnDisplayChatEmoji_C_OnExecute final
{
public:
	class AActor*                                 MyTarget;
	struct FGameplayCueParameters                 Parameters;
	bool                                          ReturnValue;
	bool                                          CallFunc_OnExecute_ReturnValue;
};
static_assert(alignof(GCNS_GM_OnDisplayChatEmoji_C_OnExecute) == 0x000008, "Wrong alignment on GCNS_GM_OnDisplayChatEmoji_C_OnExecute");
static_assert(sizeof(GCNS_GM_OnDisplayChatEmoji_C_OnExecute) == 0x0000E0, "Wrong size on GCNS_GM_OnDisplayChatEmoji_C_OnExecute");
static_assert(offsetof(GCNS_GM_OnDisplayChatEmoji_C_OnExecute, MyTarget) == 0x000000, "Member 'GCNS_GM_OnDisplayChatEmoji_C_OnExecute::MyTarget' has a wrong offset!");
static_assert(offsetof(GCNS_GM_OnDisplayChatEmoji_C_OnExecute, Parameters) == 0x000008, "Member 'GCNS_GM_OnDisplayChatEmoji_C_OnExecute::Parameters' has a wrong offset!");
static_assert(offsetof(GCNS_GM_OnDisplayChatEmoji_C_OnExecute, ReturnValue) == 0x0000D8, "Member 'GCNS_GM_OnDisplayChatEmoji_C_OnExecute::ReturnValue' has a wrong offset!");
static_assert(offsetof(GCNS_GM_OnDisplayChatEmoji_C_OnExecute, CallFunc_OnExecute_ReturnValue) == 0x0000D9, "Member 'GCNS_GM_OnDisplayChatEmoji_C_OnExecute::CallFunc_OnExecute_ReturnValue' has a wrong offset!");

struct GCNS_GM_OnDisplayChatEmoji_C_OnRemove final
{
public:
	class AActor*                                 MyTarget;
	struct FGameplayCueParameters                 Parameters;
	bool                                          ReturnValue;
	bool                                          CallFunc_OnRemove_ReturnValue;
};
static_assert(alignof(GCNS_GM_OnDisplayChatEmoji_C_OnRemove) == 0x000008, "Wrong alignment on GCNS_GM_OnDisplayChatEmoji_C_OnRemove");
static_assert(sizeof(GCNS_GM_OnDisplayChatEmoji_C_OnRemove) == 0x0000E0, "Wrong size on GCNS_GM_OnDisplayChatEmoji_C_OnRemove");
static_assert(offsetof(GCNS_GM_OnDisplayChatEmoji_C_OnRemove, MyTarget) == 0x000000, "Member 'GCNS_GM_OnDisplayChatEmoji_C_OnRemove::MyTarget' has a wrong offset!");
static_assert(offsetof(GCNS_GM_OnDisplayChatEmoji_C_OnRemove, Parameters) == 0x000008, "Member 'GCNS_GM_OnDisplayChatEmoji_C_OnRemove::Parameters' has a wrong offset!");
static_assert(offsetof(GCNS_GM_OnDisplayChatEmoji_C_OnRemove, ReturnValue) == 0x0000D8, "Member 'GCNS_GM_OnDisplayChatEmoji_C_OnRemove::ReturnValue' has a wrong offset!");
static_assert(offsetof(GCNS_GM_OnDisplayChatEmoji_C_OnRemove, CallFunc_OnRemove_ReturnValue) == 0x0000D9, "Member 'GCNS_GM_OnDisplayChatEmoji_C_OnRemove::CallFunc_OnRemove_ReturnValue' has a wrong offset!");

struct GCNS_GM_OnDisplayChatEmoji_C_OnStartParticleSystemSpawned final
{
public:
	class UParticleSystemComponent*               SpawnedParticleSysComponent;
	struct FGameplayCueParameters                 Parameters;
	class APlayerController*                      CallFunc_GetPlayerController_ReturnValue;
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
	uint8                                         Pad_1A9[0x7];
	class AFortLiveBroadcastController*           K2Node_DynamicCast_AsFort_Live_Broadcast_Controller;
	bool                                          K2Node_DynamicCast_bSuccess;
	uint8                                         Pad_1B9[0x7];
	class UAthenaEmojiItemDefinition*             K2Node_DynamicCast_AsAthena_Emoji_Item_Definition;
	bool                                          K2Node_DynamicCast_bSuccess_1;
	uint8                                         Pad_1C9[0x7];
	class AFortPlayerPawn*                        CallFunc_GetPlayerPawn_ReturnValue;
	class UAthenaEmojiItemDefinition*             K2Node_DynamicCast_AsAthena_Emoji_Item_Definition_1;
	bool                                          K2Node_DynamicCast_bSuccess_2;
	uint8                                         Pad_1E1[0x7];
	class AFortPlayerPawnAthena*                  K2Node_DynamicCast_AsFort_Player_Pawn_Athena;
	bool                                          K2Node_DynamicCast_bSuccess_3;
	bool                                          CallFunc_EqualEqual_ObjectObject_ReturnValue;
	uint8                                         Pad_1F2[0x6];
	TSoftObjectPtr<class UTexture2D>              CallFunc_Conv_ObjectToSoftObjectReference_ReturnValue;
	class APawn*                                  CallFunc_GetPlayerPawn_ReturnValue_1;
	struct FVector                                CallFunc_Add_VectorVector_ReturnValue;
	bool                                          CallFunc_EqualEqual_ObjectObject_ReturnValue_1;
	uint8                                         Pad_241[0x7];
	struct FHitResult                             CallFunc_K2_SetRelativeLocation_SweepHitResult;
};
static_assert(alignof(GCNS_GM_OnDisplayChatEmoji_C_OnStartParticleSystemSpawned) == 0x000008, "Wrong alignment on GCNS_GM_OnDisplayChatEmoji_C_OnStartParticleSystemSpawned");
static_assert(sizeof(GCNS_GM_OnDisplayChatEmoji_C_OnStartParticleSystemSpawned) == 0x000328, "Wrong size on GCNS_GM_OnDisplayChatEmoji_C_OnStartParticleSystemSpawned");
static_assert(offsetof(GCNS_GM_OnDisplayChatEmoji_C_OnStartParticleSystemSpawned, SpawnedParticleSysComponent) == 0x000000, "Member 'GCNS_GM_OnDisplayChatEmoji_C_OnStartParticleSystemSpawned::SpawnedParticleSysComponent' has a wrong offset!");
static_assert(offsetof(GCNS_GM_OnDisplayChatEmoji_C_OnStartParticleSystemSpawned, Parameters) == 0x000008, "Member 'GCNS_GM_OnDisplayChatEmoji_C_OnStartParticleSystemSpawned::Parameters' has a wrong offset!");
static_assert(offsetof(GCNS_GM_OnDisplayChatEmoji_C_OnStartParticleSystemSpawned, CallFunc_GetPlayerController_ReturnValue) == 0x0000D8, "Member 'GCNS_GM_OnDisplayChatEmoji_C_OnStartParticleSystemSpawned::CallFunc_GetPlayerController_ReturnValue' has a wrong offset!");
static_assert(offsetof(GCNS_GM_OnDisplayChatEmoji_C_OnStartParticleSystemSpawned, CallFunc_BreakGameplayCueParameters_NormalizedMagnitude) == 0x0000E0, "Member 'GCNS_GM_OnDisplayChatEmoji_C_OnStartParticleSystemSpawned::CallFunc_BreakGameplayCueParameters_NormalizedMagnitude' has a wrong offset!");
static_assert(offsetof(GCNS_GM_OnDisplayChatEmoji_C_OnStartParticleSystemSpawned, CallFunc_BreakGameplayCueParameters_RawMagnitude) == 0x0000E4, "Member 'GCNS_GM_OnDisplayChatEmoji_C_OnStartParticleSystemSpawned::CallFunc_BreakGameplayCueParameters_RawMagnitude' has a wrong offset!");
static_assert(offsetof(GCNS_GM_OnDisplayChatEmoji_C_OnStartParticleSystemSpawned, CallFunc_BreakGameplayCueParameters_EffectContext) == 0x0000E8, "Member 'GCNS_GM_OnDisplayChatEmoji_C_OnStartParticleSystemSpawned::CallFunc_BreakGameplayCueParameters_EffectContext' has a wrong offset!");
static_assert(offsetof(GCNS_GM_OnDisplayChatEmoji_C_OnStartParticleSystemSpawned, CallFunc_BreakGameplayCueParameters_MatchedTagName) == 0x000100, "Member 'GCNS_GM_OnDisplayChatEmoji_C_OnStartParticleSystemSpawned::CallFunc_BreakGameplayCueParameters_MatchedTagName' has a wrong offset!");
static_assert(offsetof(GCNS_GM_OnDisplayChatEmoji_C_OnStartParticleSystemSpawned, CallFunc_BreakGameplayCueParameters_OriginalTag) == 0x000104, "Member 'GCNS_GM_OnDisplayChatEmoji_C_OnStartParticleSystemSpawned::CallFunc_BreakGameplayCueParameters_OriginalTag' has a wrong offset!");
static_assert(offsetof(GCNS_GM_OnDisplayChatEmoji_C_OnStartParticleSystemSpawned, CallFunc_BreakGameplayCueParameters_AggregatedSourceTags) == 0x000108, "Member 'GCNS_GM_OnDisplayChatEmoji_C_OnStartParticleSystemSpawned::CallFunc_BreakGameplayCueParameters_AggregatedSourceTags' has a wrong offset!");
static_assert(offsetof(GCNS_GM_OnDisplayChatEmoji_C_OnStartParticleSystemSpawned, CallFunc_BreakGameplayCueParameters_AggregatedTargetTags) == 0x000128, "Member 'GCNS_GM_OnDisplayChatEmoji_C_OnStartParticleSystemSpawned::CallFunc_BreakGameplayCueParameters_AggregatedTargetTags' has a wrong offset!");
static_assert(offsetof(GCNS_GM_OnDisplayChatEmoji_C_OnStartParticleSystemSpawned, CallFunc_BreakGameplayCueParameters_Location) == 0x000148, "Member 'GCNS_GM_OnDisplayChatEmoji_C_OnStartParticleSystemSpawned::CallFunc_BreakGameplayCueParameters_Location' has a wrong offset!");
static_assert(offsetof(GCNS_GM_OnDisplayChatEmoji_C_OnStartParticleSystemSpawned, CallFunc_BreakGameplayCueParameters_Normal) == 0x000160, "Member 'GCNS_GM_OnDisplayChatEmoji_C_OnStartParticleSystemSpawned::CallFunc_BreakGameplayCueParameters_Normal' has a wrong offset!");
static_assert(offsetof(GCNS_GM_OnDisplayChatEmoji_C_OnStartParticleSystemSpawned, CallFunc_BreakGameplayCueParameters_Instigator) == 0x000178, "Member 'GCNS_GM_OnDisplayChatEmoji_C_OnStartParticleSystemSpawned::CallFunc_BreakGameplayCueParameters_Instigator' has a wrong offset!");
static_assert(offsetof(GCNS_GM_OnDisplayChatEmoji_C_OnStartParticleSystemSpawned, CallFunc_BreakGameplayCueParameters_EffectCauser) == 0x000180, "Member 'GCNS_GM_OnDisplayChatEmoji_C_OnStartParticleSystemSpawned::CallFunc_BreakGameplayCueParameters_EffectCauser' has a wrong offset!");
static_assert(offsetof(GCNS_GM_OnDisplayChatEmoji_C_OnStartParticleSystemSpawned, CallFunc_BreakGameplayCueParameters_SourceObject) == 0x000188, "Member 'GCNS_GM_OnDisplayChatEmoji_C_OnStartParticleSystemSpawned::CallFunc_BreakGameplayCueParameters_SourceObject' has a wrong offset!");
static_assert(offsetof(GCNS_GM_OnDisplayChatEmoji_C_OnStartParticleSystemSpawned, CallFunc_BreakGameplayCueParameters_PhysicalMaterial) == 0x000190, "Member 'GCNS_GM_OnDisplayChatEmoji_C_OnStartParticleSystemSpawned::CallFunc_BreakGameplayCueParameters_PhysicalMaterial' has a wrong offset!");
static_assert(offsetof(GCNS_GM_OnDisplayChatEmoji_C_OnStartParticleSystemSpawned, CallFunc_BreakGameplayCueParameters_GameplayEffectLevel) == 0x000198, "Member 'GCNS_GM_OnDisplayChatEmoji_C_OnStartParticleSystemSpawned::CallFunc_BreakGameplayCueParameters_GameplayEffectLevel' has a wrong offset!");
static_assert(offsetof(GCNS_GM_OnDisplayChatEmoji_C_OnStartParticleSystemSpawned, CallFunc_BreakGameplayCueParameters_AbilityLevel) == 0x00019C, "Member 'GCNS_GM_OnDisplayChatEmoji_C_OnStartParticleSystemSpawned::CallFunc_BreakGameplayCueParameters_AbilityLevel' has a wrong offset!");
static_assert(offsetof(GCNS_GM_OnDisplayChatEmoji_C_OnStartParticleSystemSpawned, CallFunc_BreakGameplayCueParameters_TargetAttachComponent) == 0x0001A0, "Member 'GCNS_GM_OnDisplayChatEmoji_C_OnStartParticleSystemSpawned::CallFunc_BreakGameplayCueParameters_TargetAttachComponent' has a wrong offset!");
static_assert(offsetof(GCNS_GM_OnDisplayChatEmoji_C_OnStartParticleSystemSpawned, CallFunc_BreakGameplayCueParameters_bReplicateLocationWhenUsingMinimalRepProxy) == 0x0001A8, "Member 'GCNS_GM_OnDisplayChatEmoji_C_OnStartParticleSystemSpawned::CallFunc_BreakGameplayCueParameters_bReplicateLocationWhenUsingMinimalRepProxy' has a wrong offset!");
static_assert(offsetof(GCNS_GM_OnDisplayChatEmoji_C_OnStartParticleSystemSpawned, K2Node_DynamicCast_AsFort_Live_Broadcast_Controller) == 0x0001B0, "Member 'GCNS_GM_OnDisplayChatEmoji_C_OnStartParticleSystemSpawned::K2Node_DynamicCast_AsFort_Live_Broadcast_Controller' has a wrong offset!");
static_assert(offsetof(GCNS_GM_OnDisplayChatEmoji_C_OnStartParticleSystemSpawned, K2Node_DynamicCast_bSuccess) == 0x0001B8, "Member 'GCNS_GM_OnDisplayChatEmoji_C_OnStartParticleSystemSpawned::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(GCNS_GM_OnDisplayChatEmoji_C_OnStartParticleSystemSpawned, K2Node_DynamicCast_AsAthena_Emoji_Item_Definition) == 0x0001C0, "Member 'GCNS_GM_OnDisplayChatEmoji_C_OnStartParticleSystemSpawned::K2Node_DynamicCast_AsAthena_Emoji_Item_Definition' has a wrong offset!");
static_assert(offsetof(GCNS_GM_OnDisplayChatEmoji_C_OnStartParticleSystemSpawned, K2Node_DynamicCast_bSuccess_1) == 0x0001C8, "Member 'GCNS_GM_OnDisplayChatEmoji_C_OnStartParticleSystemSpawned::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(GCNS_GM_OnDisplayChatEmoji_C_OnStartParticleSystemSpawned, CallFunc_GetPlayerPawn_ReturnValue) == 0x0001D0, "Member 'GCNS_GM_OnDisplayChatEmoji_C_OnStartParticleSystemSpawned::CallFunc_GetPlayerPawn_ReturnValue' has a wrong offset!");
static_assert(offsetof(GCNS_GM_OnDisplayChatEmoji_C_OnStartParticleSystemSpawned, K2Node_DynamicCast_AsAthena_Emoji_Item_Definition_1) == 0x0001D8, "Member 'GCNS_GM_OnDisplayChatEmoji_C_OnStartParticleSystemSpawned::K2Node_DynamicCast_AsAthena_Emoji_Item_Definition_1' has a wrong offset!");
static_assert(offsetof(GCNS_GM_OnDisplayChatEmoji_C_OnStartParticleSystemSpawned, K2Node_DynamicCast_bSuccess_2) == 0x0001E0, "Member 'GCNS_GM_OnDisplayChatEmoji_C_OnStartParticleSystemSpawned::K2Node_DynamicCast_bSuccess_2' has a wrong offset!");
static_assert(offsetof(GCNS_GM_OnDisplayChatEmoji_C_OnStartParticleSystemSpawned, K2Node_DynamicCast_AsFort_Player_Pawn_Athena) == 0x0001E8, "Member 'GCNS_GM_OnDisplayChatEmoji_C_OnStartParticleSystemSpawned::K2Node_DynamicCast_AsFort_Player_Pawn_Athena' has a wrong offset!");
static_assert(offsetof(GCNS_GM_OnDisplayChatEmoji_C_OnStartParticleSystemSpawned, K2Node_DynamicCast_bSuccess_3) == 0x0001F0, "Member 'GCNS_GM_OnDisplayChatEmoji_C_OnStartParticleSystemSpawned::K2Node_DynamicCast_bSuccess_3' has a wrong offset!");
static_assert(offsetof(GCNS_GM_OnDisplayChatEmoji_C_OnStartParticleSystemSpawned, CallFunc_EqualEqual_ObjectObject_ReturnValue) == 0x0001F1, "Member 'GCNS_GM_OnDisplayChatEmoji_C_OnStartParticleSystemSpawned::CallFunc_EqualEqual_ObjectObject_ReturnValue' has a wrong offset!");
static_assert(offsetof(GCNS_GM_OnDisplayChatEmoji_C_OnStartParticleSystemSpawned, CallFunc_Conv_ObjectToSoftObjectReference_ReturnValue) == 0x0001F8, "Member 'GCNS_GM_OnDisplayChatEmoji_C_OnStartParticleSystemSpawned::CallFunc_Conv_ObjectToSoftObjectReference_ReturnValue' has a wrong offset!");
static_assert(offsetof(GCNS_GM_OnDisplayChatEmoji_C_OnStartParticleSystemSpawned, CallFunc_GetPlayerPawn_ReturnValue_1) == 0x000220, "Member 'GCNS_GM_OnDisplayChatEmoji_C_OnStartParticleSystemSpawned::CallFunc_GetPlayerPawn_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GCNS_GM_OnDisplayChatEmoji_C_OnStartParticleSystemSpawned, CallFunc_Add_VectorVector_ReturnValue) == 0x000228, "Member 'GCNS_GM_OnDisplayChatEmoji_C_OnStartParticleSystemSpawned::CallFunc_Add_VectorVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(GCNS_GM_OnDisplayChatEmoji_C_OnStartParticleSystemSpawned, CallFunc_EqualEqual_ObjectObject_ReturnValue_1) == 0x000240, "Member 'GCNS_GM_OnDisplayChatEmoji_C_OnStartParticleSystemSpawned::CallFunc_EqualEqual_ObjectObject_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GCNS_GM_OnDisplayChatEmoji_C_OnStartParticleSystemSpawned, CallFunc_K2_SetRelativeLocation_SweepHitResult) == 0x000248, "Member 'GCNS_GM_OnDisplayChatEmoji_C_OnStartParticleSystemSpawned::CallFunc_K2_SetRelativeLocation_SweepHitResult' has a wrong offset!");

}
