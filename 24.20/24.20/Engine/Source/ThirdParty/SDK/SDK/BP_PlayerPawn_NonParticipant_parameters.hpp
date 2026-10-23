#pragma once

#include "Basic.hpp"

#include "GameplayAbilities_structs.hpp"
#include "FortniteGame_structs.hpp"
#include "Engine_structs.hpp"
#include "GameplayTags_structs.hpp"
#include "FortniteAI_structs.hpp"
#include "CoreUObject_structs.hpp"

namespace SDK::Params
{

struct BP_PlayerPawn_NonParticipant_C_AlertLevelChanged final
{
public:
	EAlertLevel                                   OldAlertLevel_0;
	EAlertLevel                                   InputPin;
};
static_assert(alignof(BP_PlayerPawn_NonParticipant_C_AlertLevelChanged) == 0x000001, "Wrong alignment on BP_PlayerPawn_NonParticipant_C_AlertLevelChanged");
static_assert(sizeof(BP_PlayerPawn_NonParticipant_C_AlertLevelChanged) == 0x000002, "Wrong size on BP_PlayerPawn_NonParticipant_C_AlertLevelChanged");
static_assert(offsetof(BP_PlayerPawn_NonParticipant_C_AlertLevelChanged, OldAlertLevel_0) == 0x000000, "Member 'BP_PlayerPawn_NonParticipant_C_AlertLevelChanged::OldAlertLevel_0' has a wrong offset!");
static_assert(offsetof(BP_PlayerPawn_NonParticipant_C_AlertLevelChanged, InputPin) == 0x000001, "Member 'BP_PlayerPawn_NonParticipant_C_AlertLevelChanged::InputPin' has a wrong offset!");

struct BP_PlayerPawn_NonParticipant_C_BndEvt__BP_PlayerPawn_NonParticipant_ConvertComponent_K2Node_ComponentBoundEvent_1_ConvertedEvent__DelegateSignature final
{
public:
	class AFortPawn*                              InstigatorPawn;
	class AFortPawn*                              ConvertedPawn;
};
static_assert(alignof(BP_PlayerPawn_NonParticipant_C_BndEvt__BP_PlayerPawn_NonParticipant_ConvertComponent_K2Node_ComponentBoundEvent_1_ConvertedEvent__DelegateSignature) == 0x000008, "Wrong alignment on BP_PlayerPawn_NonParticipant_C_BndEvt__BP_PlayerPawn_NonParticipant_ConvertComponent_K2Node_ComponentBoundEvent_1_ConvertedEvent__DelegateSignature");
static_assert(sizeof(BP_PlayerPawn_NonParticipant_C_BndEvt__BP_PlayerPawn_NonParticipant_ConvertComponent_K2Node_ComponentBoundEvent_1_ConvertedEvent__DelegateSignature) == 0x000010, "Wrong size on BP_PlayerPawn_NonParticipant_C_BndEvt__BP_PlayerPawn_NonParticipant_ConvertComponent_K2Node_ComponentBoundEvent_1_ConvertedEvent__DelegateSignature");
static_assert(offsetof(BP_PlayerPawn_NonParticipant_C_BndEvt__BP_PlayerPawn_NonParticipant_ConvertComponent_K2Node_ComponentBoundEvent_1_ConvertedEvent__DelegateSignature, InstigatorPawn) == 0x000000, "Member 'BP_PlayerPawn_NonParticipant_C_BndEvt__BP_PlayerPawn_NonParticipant_ConvertComponent_K2Node_ComponentBoundEvent_1_ConvertedEvent__DelegateSignature::InstigatorPawn' has a wrong offset!");
static_assert(offsetof(BP_PlayerPawn_NonParticipant_C_BndEvt__BP_PlayerPawn_NonParticipant_ConvertComponent_K2Node_ComponentBoundEvent_1_ConvertedEvent__DelegateSignature, ConvertedPawn) == 0x000008, "Member 'BP_PlayerPawn_NonParticipant_C_BndEvt__BP_PlayerPawn_NonParticipant_ConvertComponent_K2Node_ComponentBoundEvent_1_ConvertedEvent__DelegateSignature::ConvertedPawn' has a wrong offset!");

struct BP_PlayerPawn_NonParticipant_C_BndEvt__CapsuleComponent_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature final
{
public:
	class UPrimitiveComponent*                    HitComponent;
	class AActor*                                 OtherActor;
	class UPrimitiveComponent*                    OtherComp;
	struct FVector                                NormalImpulse;
	struct FHitResult                             Hit;
};
static_assert(alignof(BP_PlayerPawn_NonParticipant_C_BndEvt__CapsuleComponent_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature) == 0x000008, "Wrong alignment on BP_PlayerPawn_NonParticipant_C_BndEvt__CapsuleComponent_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature");
static_assert(sizeof(BP_PlayerPawn_NonParticipant_C_BndEvt__CapsuleComponent_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature) == 0x000110, "Wrong size on BP_PlayerPawn_NonParticipant_C_BndEvt__CapsuleComponent_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature");
static_assert(offsetof(BP_PlayerPawn_NonParticipant_C_BndEvt__CapsuleComponent_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature, HitComponent) == 0x000000, "Member 'BP_PlayerPawn_NonParticipant_C_BndEvt__CapsuleComponent_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature::HitComponent' has a wrong offset!");
static_assert(offsetof(BP_PlayerPawn_NonParticipant_C_BndEvt__CapsuleComponent_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature, OtherActor) == 0x000008, "Member 'BP_PlayerPawn_NonParticipant_C_BndEvt__CapsuleComponent_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature::OtherActor' has a wrong offset!");
static_assert(offsetof(BP_PlayerPawn_NonParticipant_C_BndEvt__CapsuleComponent_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature, OtherComp) == 0x000010, "Member 'BP_PlayerPawn_NonParticipant_C_BndEvt__CapsuleComponent_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature::OtherComp' has a wrong offset!");
static_assert(offsetof(BP_PlayerPawn_NonParticipant_C_BndEvt__CapsuleComponent_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature, NormalImpulse) == 0x000018, "Member 'BP_PlayerPawn_NonParticipant_C_BndEvt__CapsuleComponent_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature::NormalImpulse' has a wrong offset!");
static_assert(offsetof(BP_PlayerPawn_NonParticipant_C_BndEvt__CapsuleComponent_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature, Hit) == 0x000030, "Member 'BP_PlayerPawn_NonParticipant_C_BndEvt__CapsuleComponent_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature::Hit' has a wrong offset!");

struct BP_PlayerPawn_NonParticipant_C_BndEvt__ConvertComponent_K2Node_ComponentBoundEvent_1_UnconvertedEvent__DelegateSignature final
{
public:
	class AFortPawn*                              UnconvertedPawn;
	EUnconvertReason                              UnconvertReason;
};
static_assert(alignof(BP_PlayerPawn_NonParticipant_C_BndEvt__ConvertComponent_K2Node_ComponentBoundEvent_1_UnconvertedEvent__DelegateSignature) == 0x000008, "Wrong alignment on BP_PlayerPawn_NonParticipant_C_BndEvt__ConvertComponent_K2Node_ComponentBoundEvent_1_UnconvertedEvent__DelegateSignature");
static_assert(sizeof(BP_PlayerPawn_NonParticipant_C_BndEvt__ConvertComponent_K2Node_ComponentBoundEvent_1_UnconvertedEvent__DelegateSignature) == 0x000010, "Wrong size on BP_PlayerPawn_NonParticipant_C_BndEvt__ConvertComponent_K2Node_ComponentBoundEvent_1_UnconvertedEvent__DelegateSignature");
static_assert(offsetof(BP_PlayerPawn_NonParticipant_C_BndEvt__ConvertComponent_K2Node_ComponentBoundEvent_1_UnconvertedEvent__DelegateSignature, UnconvertedPawn) == 0x000000, "Member 'BP_PlayerPawn_NonParticipant_C_BndEvt__ConvertComponent_K2Node_ComponentBoundEvent_1_UnconvertedEvent__DelegateSignature::UnconvertedPawn' has a wrong offset!");
static_assert(offsetof(BP_PlayerPawn_NonParticipant_C_BndEvt__ConvertComponent_K2Node_ComponentBoundEvent_1_UnconvertedEvent__DelegateSignature, UnconvertReason) == 0x000008, "Member 'BP_PlayerPawn_NonParticipant_C_BndEvt__ConvertComponent_K2Node_ComponentBoundEvent_1_UnconvertedEvent__DelegateSignature::UnconvertReason' has a wrong offset!");

struct BP_PlayerPawn_NonParticipant_C_ChallengerDied final
{
public:
	class AActor*                                 DamagedActor;
	float                                         Damage;
	uint8                                         Pad_C[0x4];
	class AController*                            InstigatedBy;
	class AActor*                                 DamageCauser;
	struct FVector                                HitLocation;
	class UPrimitiveComponent*                    FHitComponent;
	class FName                                   BoneName;
	uint8                                         Pad_44[0x4];
	struct FVector                                Momentum;
};
static_assert(alignof(BP_PlayerPawn_NonParticipant_C_ChallengerDied) == 0x000008, "Wrong alignment on BP_PlayerPawn_NonParticipant_C_ChallengerDied");
static_assert(sizeof(BP_PlayerPawn_NonParticipant_C_ChallengerDied) == 0x000060, "Wrong size on BP_PlayerPawn_NonParticipant_C_ChallengerDied");
static_assert(offsetof(BP_PlayerPawn_NonParticipant_C_ChallengerDied, DamagedActor) == 0x000000, "Member 'BP_PlayerPawn_NonParticipant_C_ChallengerDied::DamagedActor' has a wrong offset!");
static_assert(offsetof(BP_PlayerPawn_NonParticipant_C_ChallengerDied, Damage) == 0x000008, "Member 'BP_PlayerPawn_NonParticipant_C_ChallengerDied::Damage' has a wrong offset!");
static_assert(offsetof(BP_PlayerPawn_NonParticipant_C_ChallengerDied, InstigatedBy) == 0x000010, "Member 'BP_PlayerPawn_NonParticipant_C_ChallengerDied::InstigatedBy' has a wrong offset!");
static_assert(offsetof(BP_PlayerPawn_NonParticipant_C_ChallengerDied, DamageCauser) == 0x000018, "Member 'BP_PlayerPawn_NonParticipant_C_ChallengerDied::DamageCauser' has a wrong offset!");
static_assert(offsetof(BP_PlayerPawn_NonParticipant_C_ChallengerDied, HitLocation) == 0x000020, "Member 'BP_PlayerPawn_NonParticipant_C_ChallengerDied::HitLocation' has a wrong offset!");
static_assert(offsetof(BP_PlayerPawn_NonParticipant_C_ChallengerDied, FHitComponent) == 0x000038, "Member 'BP_PlayerPawn_NonParticipant_C_ChallengerDied::FHitComponent' has a wrong offset!");
static_assert(offsetof(BP_PlayerPawn_NonParticipant_C_ChallengerDied, BoneName) == 0x000040, "Member 'BP_PlayerPawn_NonParticipant_C_ChallengerDied::BoneName' has a wrong offset!");
static_assert(offsetof(BP_PlayerPawn_NonParticipant_C_ChallengerDied, Momentum) == 0x000048, "Member 'BP_PlayerPawn_NonParticipant_C_ChallengerDied::Momentum' has a wrong offset!");

struct BP_PlayerPawn_NonParticipant_C_ClientOnAlertLevelChanged final
{
public:
	EAlertLevel                                   OldAlertLevel_0;
	EAlertLevel                                   NewAlertLevel;
};
static_assert(alignof(BP_PlayerPawn_NonParticipant_C_ClientOnAlertLevelChanged) == 0x000001, "Wrong alignment on BP_PlayerPawn_NonParticipant_C_ClientOnAlertLevelChanged");
static_assert(sizeof(BP_PlayerPawn_NonParticipant_C_ClientOnAlertLevelChanged) == 0x000002, "Wrong size on BP_PlayerPawn_NonParticipant_C_ClientOnAlertLevelChanged");
static_assert(offsetof(BP_PlayerPawn_NonParticipant_C_ClientOnAlertLevelChanged, OldAlertLevel_0) == 0x000000, "Member 'BP_PlayerPawn_NonParticipant_C_ClientOnAlertLevelChanged::OldAlertLevel_0' has a wrong offset!");
static_assert(offsetof(BP_PlayerPawn_NonParticipant_C_ClientOnAlertLevelChanged, NewAlertLevel) == 0x000001, "Member 'BP_PlayerPawn_NonParticipant_C_ClientOnAlertLevelChanged::NewAlertLevel' has a wrong offset!");

struct BP_PlayerPawn_NonParticipant_C_DataTrackerSetup final
{
public:
	bool                                          Is_Registering;
	bool                                          CallFunc_IsValid_ReturnValue;
	bool                                          CallFunc_IsValid_ReturnValue_1;
	bool                                          CallFunc_IsDedicatedServer_ReturnValue;
	uint8                                         Pad_4[0x4];
	class UFortGameplayDataTrackerComponentManager* CallFunc_GetCurrent_ReturnValue;
};
static_assert(alignof(BP_PlayerPawn_NonParticipant_C_DataTrackerSetup) == 0x000008, "Wrong alignment on BP_PlayerPawn_NonParticipant_C_DataTrackerSetup");
static_assert(sizeof(BP_PlayerPawn_NonParticipant_C_DataTrackerSetup) == 0x000010, "Wrong size on BP_PlayerPawn_NonParticipant_C_DataTrackerSetup");
static_assert(offsetof(BP_PlayerPawn_NonParticipant_C_DataTrackerSetup, Is_Registering) == 0x000000, "Member 'BP_PlayerPawn_NonParticipant_C_DataTrackerSetup::Is_Registering' has a wrong offset!");
static_assert(offsetof(BP_PlayerPawn_NonParticipant_C_DataTrackerSetup, CallFunc_IsValid_ReturnValue) == 0x000001, "Member 'BP_PlayerPawn_NonParticipant_C_DataTrackerSetup::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlayerPawn_NonParticipant_C_DataTrackerSetup, CallFunc_IsValid_ReturnValue_1) == 0x000002, "Member 'BP_PlayerPawn_NonParticipant_C_DataTrackerSetup::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_PlayerPawn_NonParticipant_C_DataTrackerSetup, CallFunc_IsDedicatedServer_ReturnValue) == 0x000003, "Member 'BP_PlayerPawn_NonParticipant_C_DataTrackerSetup::CallFunc_IsDedicatedServer_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlayerPawn_NonParticipant_C_DataTrackerSetup, CallFunc_GetCurrent_ReturnValue) == 0x000008, "Member 'BP_PlayerPawn_NonParticipant_C_DataTrackerSetup::CallFunc_GetCurrent_ReturnValue' has a wrong offset!");

struct BP_PlayerPawn_NonParticipant_C_ExecuteUbergraph_BP_PlayerPawn_NonParticipant final
{
public:
	int32                                         EntryPoint;
	bool                                          Temp_bool_Variable;
	uint8                                         Pad_5[0x3];
	struct FGameplayTag                           Temp_struct_Variable;
	struct FGameplayTag                           Temp_struct_Variable_1;
	TDelegate<void(class AFortWeapon* NewWeapon, class AFortWeapon* PrevWeapon)> K2Node_CreateDelegate_OutputDelegate;
	TDelegate<void(class AActor* DamagedActor, float Damage, class AController* InstigatedBy, class AActor* DamageCauser, const struct FVector& HitLocation, class UPrimitiveComponent* FHitComponent, class FName BoneName, const struct FVector& Momentum)> K2Node_CreateDelegate_OutputDelegate_1;
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_2;
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_3;
	bool                                          CallFunc_IsValid_ReturnValue;
	uint8                                         Pad_41[0x3];
	TDelegate<void(class AActor* DamagedActor, float Damage, class AController* InstigatedBy, class AActor* DamageCauser, const struct FVector& HitLocation, class UPrimitiveComponent* FHitComponent, class FName BoneName, const struct FVector& Momentum)> K2Node_CreateDelegate_OutputDelegate_4;
	class AFortPawn*                              K2Node_CustomEvent_FortPawn;
	bool                                          K2Node_CustomEvent_bInIsDBNO;
	bool                                          CallFunc_Not_PreBool_ReturnValue;
	uint8                                         Pad_5A[0x6];
	class UAbilitySystemComponent*                CallFunc_GetAbilitySystemComponent_ReturnValue;
	struct FActiveGameplayEffectHandle            CallFunc_BP_ApplyGameplayEffectToSelf_ReturnValue;
	class UAbilitySystemComponent*                CallFunc_GetAbilitySystemComponent_ReturnValue_1;
	struct FActiveGameplayEffectHandle            CallFunc_BP_ApplyGameplayEffectToSelf_ReturnValue_1;
	class AAIController*                          CallFunc_GetAIController_ReturnValue;
	class AFortAthenaAIBotController*             K2Node_DynamicCast_AsFort_Athena_AIBot_Controller;
	bool                                          K2Node_DynamicCast_bSuccess;
	uint8                                         Pad_91[0x7];
	class ABP_PhoebeController_NonParticipant_C*  K2Node_DynamicCast_AsBP_Phoebe_Controller_Non_Participant;
	bool                                          K2Node_DynamicCast_bSuccess_1;
	bool                                          Temp_bool_Variable_1;
	bool                                          CallFunc_IsDead_ReturnValue;
	bool                                          CallFunc_Not_PreBool_ReturnValue_1;
	uint8                                         Pad_A4[0x4];
	class AFortAthenaAIBotController*             K2Node_CustomEvent_BotController;
	EAlertLevel                                   K2Node_CustomEvent_OldAlertLevel;
	EAlertLevel                                   K2Node_CustomEvent_NewAlertLevel;
	uint8                                         Pad_B2[0x6];
	class UAudioComponent*                        CallFunc_PlayVoiceComponentSoundByTag_AudioComponent;
	float                                         CallFunc_GetValueAtLevel_ReturnValue;
	float                                         CallFunc_GetValueAtLevel_ReturnValue_1;
	bool                                          CallFunc_HasAuthority_ReturnValue;
	uint8                                         Pad_C9[0x7];
	double                                        CallFunc_RandomFloatInRange_ReturnValue;
	class AFortWeapon*                            K2Node_Event_NewWeapon;
	class AFortWeapon*                            K2Node_Event_PrevWeapon;
	EEndPlayReason                                K2Node_Event_EndPlayReason;
	uint8                                         Pad_E9[0x7];
	class UPrimitiveComponent*                    K2Node_ComponentBoundEvent_HitComponent;
	class AActor*                                 K2Node_ComponentBoundEvent_OtherActor;
	class UPrimitiveComponent*                    K2Node_ComponentBoundEvent_OtherComp;
	struct FVector                                K2Node_ComponentBoundEvent_NormalImpulse;
	struct FHitResult                             K2Node_ComponentBoundEvent_Hit;
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;
	uint8                                         Pad_201[0x7];
	class APlayerPawn_Athena_C*                   K2Node_DynamicCast_AsPlayer_Pawn_Athena;
	bool                                          K2Node_DynamicCast_bSuccess_2;
	uint8                                         Pad_211[0x7];
	class UAbilitySystemComponent*                CallFunc_GetAbilitySystemComponent_ReturnValue_2;
	struct FGameplayTag                           K2Node_Select_Default;
	uint8                                         Pad_224[0x4];
	class UAudioComponent*                        CallFunc_PlayVoiceComponentSoundByTag_AudioComponent_1;
	bool                                          CallFunc_NotEqual_ObjectObject_ReturnValue;
	uint8                                         Pad_231[0x3];
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_5;
	struct FTimerHandle                           CallFunc_K2_SetTimerDelegate_ReturnValue;
	TDelegate<void(class AFortAthenaAIBotController* BotController, EAlertLevel OldAlertLevel, EAlertLevel NewAlertLevel)> K2Node_CreateDelegate_OutputDelegate_6;
	uint8                                         Pad_254[0x4];
	TScriptInterface<class IGameplayTagAssetInterface> CallFunc_HasMatchingGameplayTag_self_CastInput;
	bool                                          CallFunc_HasMatchingGameplayTag_ReturnValue;
	uint8                                         Pad_269[0x3];
	struct FActiveGameplayEffectHandle            CallFunc_BP_ApplyGameplayEffectToTarget_ReturnValue;
	uint8                                         Pad_274[0x4];
	TScriptInterface<class IAbilitySystemInterface> CallFunc_EquipFortAbilitySet_AbilitySystemInterfaceActor_CastInput;
	struct FFortAbilitySetHandle                  CallFunc_EquipFortAbilitySet_ReturnValue;
	class AFortPlayerPawn*                        K2Node_Event_Pawn;
	bool                                          CallFunc_IsDedicatedServer_ReturnValue;
	bool                                          CallFunc_OnSameTeam_ReturnValue;
	uint8                                         Pad_2CA[0x6];
	class UAudioComponent*                        CallFunc_PlayVoiceComponentSoundByTag_AudioComponent_2;
	EAlertLevel                                   Temp_byte_Variable;
	EGameplayCueEvent                             K2Node_GameplayCueEvent_EventType;
	uint8                                         Pad_2DA[0x6];
	struct FGameplayCueParameters                 K2Node_GameplayCueEvent_Parameters;
	class AFortWeapon*                            K2Node_CustomEvent_NewWeapon;
	class AFortWeapon*                            K2Node_CustomEvent_PrevWeapon;
	class AActor*                                 K2Node_CustomEvent_DamagedActor_1;
	float                                         K2Node_CustomEvent_Damage_1;
	uint8                                         Pad_3CC[0x4];
	class AController*                            K2Node_CustomEvent_InstigatedBy_1;
	class AActor*                                 K2Node_CustomEvent_DamageCauser_1;
	struct FVector                                K2Node_CustomEvent_HitLocation_1;
	class UPrimitiveComponent*                    K2Node_CustomEvent_FHitComponent_1;
	class FName                                   K2Node_CustomEvent_BoneName_1;
	uint8                                         Pad_404[0x4];
	struct FVector                                K2Node_CustomEvent_Momentum_1;
	class AFortPlayerPawn*                        K2Node_CustomEvent_Challenger;
	class UAbilitySystemComponent*                CallFunc_GetAbilitySystemComponent_ReturnValue_3;
	struct FActiveGameplayEffectHandle            CallFunc_BP_ApplyGameplayEffectToSelf_ReturnValue_2;
	bool                                          CallFunc_RemoveActiveGameplayEffect_ReturnValue;
	uint8                                         Pad_439[0x7];
	const class UFortAnimInputEvent*              K2Node_Event_AnimInputEvent;
	class UFortAnimInputEvent_AnimClass*          K2Node_DynamicCast_AsFort_Anim_Input_Event_Anim_Class;
	bool                                          K2Node_DynamicCast_bSuccess_3;
	bool                                          CallFunc_IsNamed_ReturnValue;
	bool                                          CallFunc_IsNamed_ReturnValue_1;
	bool                                          CallFunc_HasAuthority_ReturnValue_1;
	bool                                          CallFunc_IsValidClass_ReturnValue;
	uint8                                         Pad_455[0x3];
	struct FGameplayTag                           K2Node_Event_SoundBankTag;
	uint8                                         Pad_45C[0x4];
	class UAudioComponent*                        CallFunc_PlayVoiceComponentSoundByTag_AudioComponent_3;
	bool                                          CallFunc_HasMatchingGameplayTag_ReturnValue_1;
	bool                                          Temp_bool_Variable_2;
	bool                                          Temp_bool_Variable_3;
	bool                                          Temp_bool_Variable_4;
	float                                         K2Node_Event_Damage;
	struct FGameplayTagContainer                  K2Node_Event_DamageTags;
	struct FVector                                K2Node_Event_Momentum;
	struct FHitResult                             K2Node_Event_HitInfo;
	class AFortPawn*                              K2Node_Event_InstigatedBy;
	class AActor*                                 K2Node_Event_DamageCauser;
	struct FGameplayEffectContextHandle           K2Node_Event_EffectContext;
	class UAudioComponent*                        CallFunc_PlayVoiceComponentSoundByTag_AudioComponent_4;
	class AFortPawn*                              K2Node_ComponentBoundEvent_InstigatorPawn;
	class AFortPawn*                              K2Node_ComponentBoundEvent_ConvertedPawn;
	bool                                          CallFunc_HasAuthority_ReturnValue_2;
	uint8                                         Pad_5C9[0x7];
	class AFortPawn*                              K2Node_ComponentBoundEvent_UnconvertedPawn;
	EUnconvertReason                              K2Node_ComponentBoundEvent_UnconvertReason;
	uint8                                         Pad_5D9[0x7];
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue;
	TDelegate<void(class AFortPawn* FortPawn, bool bInIsDBNO)> K2Node_CreateDelegate_OutputDelegate_7;
	uint8                                         Pad_604[0x4];
	class AActor*                                 K2Node_CustomEvent_DamagedActor;
	float                                         K2Node_CustomEvent_Damage;
	uint8                                         Pad_614[0x4];
	class AController*                            K2Node_CustomEvent_InstigatedBy;
	class AActor*                                 K2Node_CustomEvent_DamageCauser;
	struct FVector                                K2Node_CustomEvent_HitLocation;
	class UPrimitiveComponent*                    K2Node_CustomEvent_FHitComponent;
	class FName                                   K2Node_CustomEvent_BoneName;
	uint8                                         Pad_64C[0x4];
	struct FVector                                K2Node_CustomEvent_Momentum;
	class AController*                            CallFunc_GetController_ReturnValue;
	bool                                          Temp_bool_Variable_5;
	uint8                                         Pad_671[0x7];
	class AFortAthenaAIBotController*             K2Node_DynamicCast_AsFort_Athena_AIBot_Controller_1;
	bool                                          K2Node_DynamicCast_bSuccess_4;
	bool                                          K2Node_Select_Default_1;
	bool                                          CallFunc_BooleanAND_ReturnValue;
	uint8                                         Pad_683[0x5];
	double                                        CallFunc_RandomFloatInRange_Min_ImplicitCast;
	double                                        CallFunc_RandomFloatInRange_Max_ImplicitCast;
	float                                         CallFunc_K2_SetTimerDelegate_Time_ImplicitCast;
};
static_assert(alignof(BP_PlayerPawn_NonParticipant_C_ExecuteUbergraph_BP_PlayerPawn_NonParticipant) == 0x000008, "Wrong alignment on BP_PlayerPawn_NonParticipant_C_ExecuteUbergraph_BP_PlayerPawn_NonParticipant");
static_assert(sizeof(BP_PlayerPawn_NonParticipant_C_ExecuteUbergraph_BP_PlayerPawn_NonParticipant) == 0x0006A0, "Wrong size on BP_PlayerPawn_NonParticipant_C_ExecuteUbergraph_BP_PlayerPawn_NonParticipant");
static_assert(offsetof(BP_PlayerPawn_NonParticipant_C_ExecuteUbergraph_BP_PlayerPawn_NonParticipant, EntryPoint) == 0x000000, "Member 'BP_PlayerPawn_NonParticipant_C_ExecuteUbergraph_BP_PlayerPawn_NonParticipant::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_PlayerPawn_NonParticipant_C_ExecuteUbergraph_BP_PlayerPawn_NonParticipant, Temp_bool_Variable) == 0x000004, "Member 'BP_PlayerPawn_NonParticipant_C_ExecuteUbergraph_BP_PlayerPawn_NonParticipant::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(BP_PlayerPawn_NonParticipant_C_ExecuteUbergraph_BP_PlayerPawn_NonParticipant, Temp_struct_Variable) == 0x000008, "Member 'BP_PlayerPawn_NonParticipant_C_ExecuteUbergraph_BP_PlayerPawn_NonParticipant::Temp_struct_Variable' has a wrong offset!");
static_assert(offsetof(BP_PlayerPawn_NonParticipant_C_ExecuteUbergraph_BP_PlayerPawn_NonParticipant, Temp_struct_Variable_1) == 0x00000C, "Member 'BP_PlayerPawn_NonParticipant_C_ExecuteUbergraph_BP_PlayerPawn_NonParticipant::Temp_struct_Variable_1' has a wrong offset!");
static_assert(offsetof(BP_PlayerPawn_NonParticipant_C_ExecuteUbergraph_BP_PlayerPawn_NonParticipant, K2Node_CreateDelegate_OutputDelegate) == 0x000010, "Member 'BP_PlayerPawn_NonParticipant_C_ExecuteUbergraph_BP_PlayerPawn_NonParticipant::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(BP_PlayerPawn_NonParticipant_C_ExecuteUbergraph_BP_PlayerPawn_NonParticipant, K2Node_CreateDelegate_OutputDelegate_1) == 0x00001C, "Member 'BP_PlayerPawn_NonParticipant_C_ExecuteUbergraph_BP_PlayerPawn_NonParticipant::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(BP_PlayerPawn_NonParticipant_C_ExecuteUbergraph_BP_PlayerPawn_NonParticipant, K2Node_CreateDelegate_OutputDelegate_2) == 0x000028, "Member 'BP_PlayerPawn_NonParticipant_C_ExecuteUbergraph_BP_PlayerPawn_NonParticipant::K2Node_CreateDelegate_OutputDelegate_2' has a wrong offset!");
static_assert(offsetof(BP_PlayerPawn_NonParticipant_C_ExecuteUbergraph_BP_PlayerPawn_NonParticipant, K2Node_CreateDelegate_OutputDelegate_3) == 0x000034, "Member 'BP_PlayerPawn_NonParticipant_C_ExecuteUbergraph_BP_PlayerPawn_NonParticipant::K2Node_CreateDelegate_OutputDelegate_3' has a wrong offset!");
static_assert(offsetof(BP_PlayerPawn_NonParticipant_C_ExecuteUbergraph_BP_PlayerPawn_NonParticipant, CallFunc_IsValid_ReturnValue) == 0x000040, "Member 'BP_PlayerPawn_NonParticipant_C_ExecuteUbergraph_BP_PlayerPawn_NonParticipant::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlayerPawn_NonParticipant_C_ExecuteUbergraph_BP_PlayerPawn_NonParticipant, K2Node_CreateDelegate_OutputDelegate_4) == 0x000044, "Member 'BP_PlayerPawn_NonParticipant_C_ExecuteUbergraph_BP_PlayerPawn_NonParticipant::K2Node_CreateDelegate_OutputDelegate_4' has a wrong offset!");
static_assert(offsetof(BP_PlayerPawn_NonParticipant_C_ExecuteUbergraph_BP_PlayerPawn_NonParticipant, K2Node_CustomEvent_FortPawn) == 0x000050, "Member 'BP_PlayerPawn_NonParticipant_C_ExecuteUbergraph_BP_PlayerPawn_NonParticipant::K2Node_CustomEvent_FortPawn' has a wrong offset!");
static_assert(offsetof(BP_PlayerPawn_NonParticipant_C_ExecuteUbergraph_BP_PlayerPawn_NonParticipant, K2Node_CustomEvent_bInIsDBNO) == 0x000058, "Member 'BP_PlayerPawn_NonParticipant_C_ExecuteUbergraph_BP_PlayerPawn_NonParticipant::K2Node_CustomEvent_bInIsDBNO' has a wrong offset!");
static_assert(offsetof(BP_PlayerPawn_NonParticipant_C_ExecuteUbergraph_BP_PlayerPawn_NonParticipant, CallFunc_Not_PreBool_ReturnValue) == 0x000059, "Member 'BP_PlayerPawn_NonParticipant_C_ExecuteUbergraph_BP_PlayerPawn_NonParticipant::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlayerPawn_NonParticipant_C_ExecuteUbergraph_BP_PlayerPawn_NonParticipant, CallFunc_GetAbilitySystemComponent_ReturnValue) == 0x000060, "Member 'BP_PlayerPawn_NonParticipant_C_ExecuteUbergraph_BP_PlayerPawn_NonParticipant::CallFunc_GetAbilitySystemComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlayerPawn_NonParticipant_C_ExecuteUbergraph_BP_PlayerPawn_NonParticipant, CallFunc_BP_ApplyGameplayEffectToSelf_ReturnValue) == 0x000068, "Member 'BP_PlayerPawn_NonParticipant_C_ExecuteUbergraph_BP_PlayerPawn_NonParticipant::CallFunc_BP_ApplyGameplayEffectToSelf_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlayerPawn_NonParticipant_C_ExecuteUbergraph_BP_PlayerPawn_NonParticipant, CallFunc_GetAbilitySystemComponent_ReturnValue_1) == 0x000070, "Member 'BP_PlayerPawn_NonParticipant_C_ExecuteUbergraph_BP_PlayerPawn_NonParticipant::CallFunc_GetAbilitySystemComponent_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_PlayerPawn_NonParticipant_C_ExecuteUbergraph_BP_PlayerPawn_NonParticipant, CallFunc_BP_ApplyGameplayEffectToSelf_ReturnValue_1) == 0x000078, "Member 'BP_PlayerPawn_NonParticipant_C_ExecuteUbergraph_BP_PlayerPawn_NonParticipant::CallFunc_BP_ApplyGameplayEffectToSelf_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_PlayerPawn_NonParticipant_C_ExecuteUbergraph_BP_PlayerPawn_NonParticipant, CallFunc_GetAIController_ReturnValue) == 0x000080, "Member 'BP_PlayerPawn_NonParticipant_C_ExecuteUbergraph_BP_PlayerPawn_NonParticipant::CallFunc_GetAIController_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlayerPawn_NonParticipant_C_ExecuteUbergraph_BP_PlayerPawn_NonParticipant, K2Node_DynamicCast_AsFort_Athena_AIBot_Controller) == 0x000088, "Member 'BP_PlayerPawn_NonParticipant_C_ExecuteUbergraph_BP_PlayerPawn_NonParticipant::K2Node_DynamicCast_AsFort_Athena_AIBot_Controller' has a wrong offset!");
static_assert(offsetof(BP_PlayerPawn_NonParticipant_C_ExecuteUbergraph_BP_PlayerPawn_NonParticipant, K2Node_DynamicCast_bSuccess) == 0x000090, "Member 'BP_PlayerPawn_NonParticipant_C_ExecuteUbergraph_BP_PlayerPawn_NonParticipant::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BP_PlayerPawn_NonParticipant_C_ExecuteUbergraph_BP_PlayerPawn_NonParticipant, K2Node_DynamicCast_AsBP_Phoebe_Controller_Non_Participant) == 0x000098, "Member 'BP_PlayerPawn_NonParticipant_C_ExecuteUbergraph_BP_PlayerPawn_NonParticipant::K2Node_DynamicCast_AsBP_Phoebe_Controller_Non_Participant' has a wrong offset!");
static_assert(offsetof(BP_PlayerPawn_NonParticipant_C_ExecuteUbergraph_BP_PlayerPawn_NonParticipant, K2Node_DynamicCast_bSuccess_1) == 0x0000A0, "Member 'BP_PlayerPawn_NonParticipant_C_ExecuteUbergraph_BP_PlayerPawn_NonParticipant::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(BP_PlayerPawn_NonParticipant_C_ExecuteUbergraph_BP_PlayerPawn_NonParticipant, Temp_bool_Variable_1) == 0x0000A1, "Member 'BP_PlayerPawn_NonParticipant_C_ExecuteUbergraph_BP_PlayerPawn_NonParticipant::Temp_bool_Variable_1' has a wrong offset!");
static_assert(offsetof(BP_PlayerPawn_NonParticipant_C_ExecuteUbergraph_BP_PlayerPawn_NonParticipant, CallFunc_IsDead_ReturnValue) == 0x0000A2, "Member 'BP_PlayerPawn_NonParticipant_C_ExecuteUbergraph_BP_PlayerPawn_NonParticipant::CallFunc_IsDead_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlayerPawn_NonParticipant_C_ExecuteUbergraph_BP_PlayerPawn_NonParticipant, CallFunc_Not_PreBool_ReturnValue_1) == 0x0000A3, "Member 'BP_PlayerPawn_NonParticipant_C_ExecuteUbergraph_BP_PlayerPawn_NonParticipant::CallFunc_Not_PreBool_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_PlayerPawn_NonParticipant_C_ExecuteUbergraph_BP_PlayerPawn_NonParticipant, K2Node_CustomEvent_BotController) == 0x0000A8, "Member 'BP_PlayerPawn_NonParticipant_C_ExecuteUbergraph_BP_PlayerPawn_NonParticipant::K2Node_CustomEvent_BotController' has a wrong offset!");
static_assert(offsetof(BP_PlayerPawn_NonParticipant_C_ExecuteUbergraph_BP_PlayerPawn_NonParticipant, K2Node_CustomEvent_OldAlertLevel) == 0x0000B0, "Member 'BP_PlayerPawn_NonParticipant_C_ExecuteUbergraph_BP_PlayerPawn_NonParticipant::K2Node_CustomEvent_OldAlertLevel' has a wrong offset!");
static_assert(offsetof(BP_PlayerPawn_NonParticipant_C_ExecuteUbergraph_BP_PlayerPawn_NonParticipant, K2Node_CustomEvent_NewAlertLevel) == 0x0000B1, "Member 'BP_PlayerPawn_NonParticipant_C_ExecuteUbergraph_BP_PlayerPawn_NonParticipant::K2Node_CustomEvent_NewAlertLevel' has a wrong offset!");
static_assert(offsetof(BP_PlayerPawn_NonParticipant_C_ExecuteUbergraph_BP_PlayerPawn_NonParticipant, CallFunc_PlayVoiceComponentSoundByTag_AudioComponent) == 0x0000B8, "Member 'BP_PlayerPawn_NonParticipant_C_ExecuteUbergraph_BP_PlayerPawn_NonParticipant::CallFunc_PlayVoiceComponentSoundByTag_AudioComponent' has a wrong offset!");
static_assert(offsetof(BP_PlayerPawn_NonParticipant_C_ExecuteUbergraph_BP_PlayerPawn_NonParticipant, CallFunc_GetValueAtLevel_ReturnValue) == 0x0000C0, "Member 'BP_PlayerPawn_NonParticipant_C_ExecuteUbergraph_BP_PlayerPawn_NonParticipant::CallFunc_GetValueAtLevel_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlayerPawn_NonParticipant_C_ExecuteUbergraph_BP_PlayerPawn_NonParticipant, CallFunc_GetValueAtLevel_ReturnValue_1) == 0x0000C4, "Member 'BP_PlayerPawn_NonParticipant_C_ExecuteUbergraph_BP_PlayerPawn_NonParticipant::CallFunc_GetValueAtLevel_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_PlayerPawn_NonParticipant_C_ExecuteUbergraph_BP_PlayerPawn_NonParticipant, CallFunc_HasAuthority_ReturnValue) == 0x0000C8, "Member 'BP_PlayerPawn_NonParticipant_C_ExecuteUbergraph_BP_PlayerPawn_NonParticipant::CallFunc_HasAuthority_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlayerPawn_NonParticipant_C_ExecuteUbergraph_BP_PlayerPawn_NonParticipant, CallFunc_RandomFloatInRange_ReturnValue) == 0x0000D0, "Member 'BP_PlayerPawn_NonParticipant_C_ExecuteUbergraph_BP_PlayerPawn_NonParticipant::CallFunc_RandomFloatInRange_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlayerPawn_NonParticipant_C_ExecuteUbergraph_BP_PlayerPawn_NonParticipant, K2Node_Event_NewWeapon) == 0x0000D8, "Member 'BP_PlayerPawn_NonParticipant_C_ExecuteUbergraph_BP_PlayerPawn_NonParticipant::K2Node_Event_NewWeapon' has a wrong offset!");
static_assert(offsetof(BP_PlayerPawn_NonParticipant_C_ExecuteUbergraph_BP_PlayerPawn_NonParticipant, K2Node_Event_PrevWeapon) == 0x0000E0, "Member 'BP_PlayerPawn_NonParticipant_C_ExecuteUbergraph_BP_PlayerPawn_NonParticipant::K2Node_Event_PrevWeapon' has a wrong offset!");
static_assert(offsetof(BP_PlayerPawn_NonParticipant_C_ExecuteUbergraph_BP_PlayerPawn_NonParticipant, K2Node_Event_EndPlayReason) == 0x0000E8, "Member 'BP_PlayerPawn_NonParticipant_C_ExecuteUbergraph_BP_PlayerPawn_NonParticipant::K2Node_Event_EndPlayReason' has a wrong offset!");
static_assert(offsetof(BP_PlayerPawn_NonParticipant_C_ExecuteUbergraph_BP_PlayerPawn_NonParticipant, K2Node_ComponentBoundEvent_HitComponent) == 0x0000F0, "Member 'BP_PlayerPawn_NonParticipant_C_ExecuteUbergraph_BP_PlayerPawn_NonParticipant::K2Node_ComponentBoundEvent_HitComponent' has a wrong offset!");
static_assert(offsetof(BP_PlayerPawn_NonParticipant_C_ExecuteUbergraph_BP_PlayerPawn_NonParticipant, K2Node_ComponentBoundEvent_OtherActor) == 0x0000F8, "Member 'BP_PlayerPawn_NonParticipant_C_ExecuteUbergraph_BP_PlayerPawn_NonParticipant::K2Node_ComponentBoundEvent_OtherActor' has a wrong offset!");
static_assert(offsetof(BP_PlayerPawn_NonParticipant_C_ExecuteUbergraph_BP_PlayerPawn_NonParticipant, K2Node_ComponentBoundEvent_OtherComp) == 0x000100, "Member 'BP_PlayerPawn_NonParticipant_C_ExecuteUbergraph_BP_PlayerPawn_NonParticipant::K2Node_ComponentBoundEvent_OtherComp' has a wrong offset!");
static_assert(offsetof(BP_PlayerPawn_NonParticipant_C_ExecuteUbergraph_BP_PlayerPawn_NonParticipant, K2Node_ComponentBoundEvent_NormalImpulse) == 0x000108, "Member 'BP_PlayerPawn_NonParticipant_C_ExecuteUbergraph_BP_PlayerPawn_NonParticipant::K2Node_ComponentBoundEvent_NormalImpulse' has a wrong offset!");
static_assert(offsetof(BP_PlayerPawn_NonParticipant_C_ExecuteUbergraph_BP_PlayerPawn_NonParticipant, K2Node_ComponentBoundEvent_Hit) == 0x000120, "Member 'BP_PlayerPawn_NonParticipant_C_ExecuteUbergraph_BP_PlayerPawn_NonParticipant::K2Node_ComponentBoundEvent_Hit' has a wrong offset!");
static_assert(offsetof(BP_PlayerPawn_NonParticipant_C_ExecuteUbergraph_BP_PlayerPawn_NonParticipant, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x000200, "Member 'BP_PlayerPawn_NonParticipant_C_ExecuteUbergraph_BP_PlayerPawn_NonParticipant::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlayerPawn_NonParticipant_C_ExecuteUbergraph_BP_PlayerPawn_NonParticipant, K2Node_DynamicCast_AsPlayer_Pawn_Athena) == 0x000208, "Member 'BP_PlayerPawn_NonParticipant_C_ExecuteUbergraph_BP_PlayerPawn_NonParticipant::K2Node_DynamicCast_AsPlayer_Pawn_Athena' has a wrong offset!");
static_assert(offsetof(BP_PlayerPawn_NonParticipant_C_ExecuteUbergraph_BP_PlayerPawn_NonParticipant, K2Node_DynamicCast_bSuccess_2) == 0x000210, "Member 'BP_PlayerPawn_NonParticipant_C_ExecuteUbergraph_BP_PlayerPawn_NonParticipant::K2Node_DynamicCast_bSuccess_2' has a wrong offset!");
static_assert(offsetof(BP_PlayerPawn_NonParticipant_C_ExecuteUbergraph_BP_PlayerPawn_NonParticipant, CallFunc_GetAbilitySystemComponent_ReturnValue_2) == 0x000218, "Member 'BP_PlayerPawn_NonParticipant_C_ExecuteUbergraph_BP_PlayerPawn_NonParticipant::CallFunc_GetAbilitySystemComponent_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_PlayerPawn_NonParticipant_C_ExecuteUbergraph_BP_PlayerPawn_NonParticipant, K2Node_Select_Default) == 0x000220, "Member 'BP_PlayerPawn_NonParticipant_C_ExecuteUbergraph_BP_PlayerPawn_NonParticipant::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(BP_PlayerPawn_NonParticipant_C_ExecuteUbergraph_BP_PlayerPawn_NonParticipant, CallFunc_PlayVoiceComponentSoundByTag_AudioComponent_1) == 0x000228, "Member 'BP_PlayerPawn_NonParticipant_C_ExecuteUbergraph_BP_PlayerPawn_NonParticipant::CallFunc_PlayVoiceComponentSoundByTag_AudioComponent_1' has a wrong offset!");
static_assert(offsetof(BP_PlayerPawn_NonParticipant_C_ExecuteUbergraph_BP_PlayerPawn_NonParticipant, CallFunc_NotEqual_ObjectObject_ReturnValue) == 0x000230, "Member 'BP_PlayerPawn_NonParticipant_C_ExecuteUbergraph_BP_PlayerPawn_NonParticipant::CallFunc_NotEqual_ObjectObject_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlayerPawn_NonParticipant_C_ExecuteUbergraph_BP_PlayerPawn_NonParticipant, K2Node_CreateDelegate_OutputDelegate_5) == 0x000234, "Member 'BP_PlayerPawn_NonParticipant_C_ExecuteUbergraph_BP_PlayerPawn_NonParticipant::K2Node_CreateDelegate_OutputDelegate_5' has a wrong offset!");
static_assert(offsetof(BP_PlayerPawn_NonParticipant_C_ExecuteUbergraph_BP_PlayerPawn_NonParticipant, CallFunc_K2_SetTimerDelegate_ReturnValue) == 0x000240, "Member 'BP_PlayerPawn_NonParticipant_C_ExecuteUbergraph_BP_PlayerPawn_NonParticipant::CallFunc_K2_SetTimerDelegate_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlayerPawn_NonParticipant_C_ExecuteUbergraph_BP_PlayerPawn_NonParticipant, K2Node_CreateDelegate_OutputDelegate_6) == 0x000248, "Member 'BP_PlayerPawn_NonParticipant_C_ExecuteUbergraph_BP_PlayerPawn_NonParticipant::K2Node_CreateDelegate_OutputDelegate_6' has a wrong offset!");
static_assert(offsetof(BP_PlayerPawn_NonParticipant_C_ExecuteUbergraph_BP_PlayerPawn_NonParticipant, CallFunc_HasMatchingGameplayTag_self_CastInput) == 0x000258, "Member 'BP_PlayerPawn_NonParticipant_C_ExecuteUbergraph_BP_PlayerPawn_NonParticipant::CallFunc_HasMatchingGameplayTag_self_CastInput' has a wrong offset!");
static_assert(offsetof(BP_PlayerPawn_NonParticipant_C_ExecuteUbergraph_BP_PlayerPawn_NonParticipant, CallFunc_HasMatchingGameplayTag_ReturnValue) == 0x000268, "Member 'BP_PlayerPawn_NonParticipant_C_ExecuteUbergraph_BP_PlayerPawn_NonParticipant::CallFunc_HasMatchingGameplayTag_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlayerPawn_NonParticipant_C_ExecuteUbergraph_BP_PlayerPawn_NonParticipant, CallFunc_BP_ApplyGameplayEffectToTarget_ReturnValue) == 0x00026C, "Member 'BP_PlayerPawn_NonParticipant_C_ExecuteUbergraph_BP_PlayerPawn_NonParticipant::CallFunc_BP_ApplyGameplayEffectToTarget_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlayerPawn_NonParticipant_C_ExecuteUbergraph_BP_PlayerPawn_NonParticipant, CallFunc_EquipFortAbilitySet_AbilitySystemInterfaceActor_CastInput) == 0x000278, "Member 'BP_PlayerPawn_NonParticipant_C_ExecuteUbergraph_BP_PlayerPawn_NonParticipant::CallFunc_EquipFortAbilitySet_AbilitySystemInterfaceActor_CastInput' has a wrong offset!");
static_assert(offsetof(BP_PlayerPawn_NonParticipant_C_ExecuteUbergraph_BP_PlayerPawn_NonParticipant, CallFunc_EquipFortAbilitySet_ReturnValue) == 0x000288, "Member 'BP_PlayerPawn_NonParticipant_C_ExecuteUbergraph_BP_PlayerPawn_NonParticipant::CallFunc_EquipFortAbilitySet_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlayerPawn_NonParticipant_C_ExecuteUbergraph_BP_PlayerPawn_NonParticipant, K2Node_Event_Pawn) == 0x0002C0, "Member 'BP_PlayerPawn_NonParticipant_C_ExecuteUbergraph_BP_PlayerPawn_NonParticipant::K2Node_Event_Pawn' has a wrong offset!");
static_assert(offsetof(BP_PlayerPawn_NonParticipant_C_ExecuteUbergraph_BP_PlayerPawn_NonParticipant, CallFunc_IsDedicatedServer_ReturnValue) == 0x0002C8, "Member 'BP_PlayerPawn_NonParticipant_C_ExecuteUbergraph_BP_PlayerPawn_NonParticipant::CallFunc_IsDedicatedServer_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlayerPawn_NonParticipant_C_ExecuteUbergraph_BP_PlayerPawn_NonParticipant, CallFunc_OnSameTeam_ReturnValue) == 0x0002C9, "Member 'BP_PlayerPawn_NonParticipant_C_ExecuteUbergraph_BP_PlayerPawn_NonParticipant::CallFunc_OnSameTeam_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlayerPawn_NonParticipant_C_ExecuteUbergraph_BP_PlayerPawn_NonParticipant, CallFunc_PlayVoiceComponentSoundByTag_AudioComponent_2) == 0x0002D0, "Member 'BP_PlayerPawn_NonParticipant_C_ExecuteUbergraph_BP_PlayerPawn_NonParticipant::CallFunc_PlayVoiceComponentSoundByTag_AudioComponent_2' has a wrong offset!");
static_assert(offsetof(BP_PlayerPawn_NonParticipant_C_ExecuteUbergraph_BP_PlayerPawn_NonParticipant, Temp_byte_Variable) == 0x0002D8, "Member 'BP_PlayerPawn_NonParticipant_C_ExecuteUbergraph_BP_PlayerPawn_NonParticipant::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(BP_PlayerPawn_NonParticipant_C_ExecuteUbergraph_BP_PlayerPawn_NonParticipant, K2Node_GameplayCueEvent_EventType) == 0x0002D9, "Member 'BP_PlayerPawn_NonParticipant_C_ExecuteUbergraph_BP_PlayerPawn_NonParticipant::K2Node_GameplayCueEvent_EventType' has a wrong offset!");
static_assert(offsetof(BP_PlayerPawn_NonParticipant_C_ExecuteUbergraph_BP_PlayerPawn_NonParticipant, K2Node_GameplayCueEvent_Parameters) == 0x0002E0, "Member 'BP_PlayerPawn_NonParticipant_C_ExecuteUbergraph_BP_PlayerPawn_NonParticipant::K2Node_GameplayCueEvent_Parameters' has a wrong offset!");
static_assert(offsetof(BP_PlayerPawn_NonParticipant_C_ExecuteUbergraph_BP_PlayerPawn_NonParticipant, K2Node_CustomEvent_NewWeapon) == 0x0003B0, "Member 'BP_PlayerPawn_NonParticipant_C_ExecuteUbergraph_BP_PlayerPawn_NonParticipant::K2Node_CustomEvent_NewWeapon' has a wrong offset!");
static_assert(offsetof(BP_PlayerPawn_NonParticipant_C_ExecuteUbergraph_BP_PlayerPawn_NonParticipant, K2Node_CustomEvent_PrevWeapon) == 0x0003B8, "Member 'BP_PlayerPawn_NonParticipant_C_ExecuteUbergraph_BP_PlayerPawn_NonParticipant::K2Node_CustomEvent_PrevWeapon' has a wrong offset!");
static_assert(offsetof(BP_PlayerPawn_NonParticipant_C_ExecuteUbergraph_BP_PlayerPawn_NonParticipant, K2Node_CustomEvent_DamagedActor_1) == 0x0003C0, "Member 'BP_PlayerPawn_NonParticipant_C_ExecuteUbergraph_BP_PlayerPawn_NonParticipant::K2Node_CustomEvent_DamagedActor_1' has a wrong offset!");
static_assert(offsetof(BP_PlayerPawn_NonParticipant_C_ExecuteUbergraph_BP_PlayerPawn_NonParticipant, K2Node_CustomEvent_Damage_1) == 0x0003C8, "Member 'BP_PlayerPawn_NonParticipant_C_ExecuteUbergraph_BP_PlayerPawn_NonParticipant::K2Node_CustomEvent_Damage_1' has a wrong offset!");
static_assert(offsetof(BP_PlayerPawn_NonParticipant_C_ExecuteUbergraph_BP_PlayerPawn_NonParticipant, K2Node_CustomEvent_InstigatedBy_1) == 0x0003D0, "Member 'BP_PlayerPawn_NonParticipant_C_ExecuteUbergraph_BP_PlayerPawn_NonParticipant::K2Node_CustomEvent_InstigatedBy_1' has a wrong offset!");
static_assert(offsetof(BP_PlayerPawn_NonParticipant_C_ExecuteUbergraph_BP_PlayerPawn_NonParticipant, K2Node_CustomEvent_DamageCauser_1) == 0x0003D8, "Member 'BP_PlayerPawn_NonParticipant_C_ExecuteUbergraph_BP_PlayerPawn_NonParticipant::K2Node_CustomEvent_DamageCauser_1' has a wrong offset!");
static_assert(offsetof(BP_PlayerPawn_NonParticipant_C_ExecuteUbergraph_BP_PlayerPawn_NonParticipant, K2Node_CustomEvent_HitLocation_1) == 0x0003E0, "Member 'BP_PlayerPawn_NonParticipant_C_ExecuteUbergraph_BP_PlayerPawn_NonParticipant::K2Node_CustomEvent_HitLocation_1' has a wrong offset!");
static_assert(offsetof(BP_PlayerPawn_NonParticipant_C_ExecuteUbergraph_BP_PlayerPawn_NonParticipant, K2Node_CustomEvent_FHitComponent_1) == 0x0003F8, "Member 'BP_PlayerPawn_NonParticipant_C_ExecuteUbergraph_BP_PlayerPawn_NonParticipant::K2Node_CustomEvent_FHitComponent_1' has a wrong offset!");
static_assert(offsetof(BP_PlayerPawn_NonParticipant_C_ExecuteUbergraph_BP_PlayerPawn_NonParticipant, K2Node_CustomEvent_BoneName_1) == 0x000400, "Member 'BP_PlayerPawn_NonParticipant_C_ExecuteUbergraph_BP_PlayerPawn_NonParticipant::K2Node_CustomEvent_BoneName_1' has a wrong offset!");
static_assert(offsetof(BP_PlayerPawn_NonParticipant_C_ExecuteUbergraph_BP_PlayerPawn_NonParticipant, K2Node_CustomEvent_Momentum_1) == 0x000408, "Member 'BP_PlayerPawn_NonParticipant_C_ExecuteUbergraph_BP_PlayerPawn_NonParticipant::K2Node_CustomEvent_Momentum_1' has a wrong offset!");
static_assert(offsetof(BP_PlayerPawn_NonParticipant_C_ExecuteUbergraph_BP_PlayerPawn_NonParticipant, K2Node_CustomEvent_Challenger) == 0x000420, "Member 'BP_PlayerPawn_NonParticipant_C_ExecuteUbergraph_BP_PlayerPawn_NonParticipant::K2Node_CustomEvent_Challenger' has a wrong offset!");
static_assert(offsetof(BP_PlayerPawn_NonParticipant_C_ExecuteUbergraph_BP_PlayerPawn_NonParticipant, CallFunc_GetAbilitySystemComponent_ReturnValue_3) == 0x000428, "Member 'BP_PlayerPawn_NonParticipant_C_ExecuteUbergraph_BP_PlayerPawn_NonParticipant::CallFunc_GetAbilitySystemComponent_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(BP_PlayerPawn_NonParticipant_C_ExecuteUbergraph_BP_PlayerPawn_NonParticipant, CallFunc_BP_ApplyGameplayEffectToSelf_ReturnValue_2) == 0x000430, "Member 'BP_PlayerPawn_NonParticipant_C_ExecuteUbergraph_BP_PlayerPawn_NonParticipant::CallFunc_BP_ApplyGameplayEffectToSelf_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_PlayerPawn_NonParticipant_C_ExecuteUbergraph_BP_PlayerPawn_NonParticipant, CallFunc_RemoveActiveGameplayEffect_ReturnValue) == 0x000438, "Member 'BP_PlayerPawn_NonParticipant_C_ExecuteUbergraph_BP_PlayerPawn_NonParticipant::CallFunc_RemoveActiveGameplayEffect_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlayerPawn_NonParticipant_C_ExecuteUbergraph_BP_PlayerPawn_NonParticipant, K2Node_Event_AnimInputEvent) == 0x000440, "Member 'BP_PlayerPawn_NonParticipant_C_ExecuteUbergraph_BP_PlayerPawn_NonParticipant::K2Node_Event_AnimInputEvent' has a wrong offset!");
static_assert(offsetof(BP_PlayerPawn_NonParticipant_C_ExecuteUbergraph_BP_PlayerPawn_NonParticipant, K2Node_DynamicCast_AsFort_Anim_Input_Event_Anim_Class) == 0x000448, "Member 'BP_PlayerPawn_NonParticipant_C_ExecuteUbergraph_BP_PlayerPawn_NonParticipant::K2Node_DynamicCast_AsFort_Anim_Input_Event_Anim_Class' has a wrong offset!");
static_assert(offsetof(BP_PlayerPawn_NonParticipant_C_ExecuteUbergraph_BP_PlayerPawn_NonParticipant, K2Node_DynamicCast_bSuccess_3) == 0x000450, "Member 'BP_PlayerPawn_NonParticipant_C_ExecuteUbergraph_BP_PlayerPawn_NonParticipant::K2Node_DynamicCast_bSuccess_3' has a wrong offset!");
static_assert(offsetof(BP_PlayerPawn_NonParticipant_C_ExecuteUbergraph_BP_PlayerPawn_NonParticipant, CallFunc_IsNamed_ReturnValue) == 0x000451, "Member 'BP_PlayerPawn_NonParticipant_C_ExecuteUbergraph_BP_PlayerPawn_NonParticipant::CallFunc_IsNamed_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlayerPawn_NonParticipant_C_ExecuteUbergraph_BP_PlayerPawn_NonParticipant, CallFunc_IsNamed_ReturnValue_1) == 0x000452, "Member 'BP_PlayerPawn_NonParticipant_C_ExecuteUbergraph_BP_PlayerPawn_NonParticipant::CallFunc_IsNamed_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_PlayerPawn_NonParticipant_C_ExecuteUbergraph_BP_PlayerPawn_NonParticipant, CallFunc_HasAuthority_ReturnValue_1) == 0x000453, "Member 'BP_PlayerPawn_NonParticipant_C_ExecuteUbergraph_BP_PlayerPawn_NonParticipant::CallFunc_HasAuthority_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_PlayerPawn_NonParticipant_C_ExecuteUbergraph_BP_PlayerPawn_NonParticipant, CallFunc_IsValidClass_ReturnValue) == 0x000454, "Member 'BP_PlayerPawn_NonParticipant_C_ExecuteUbergraph_BP_PlayerPawn_NonParticipant::CallFunc_IsValidClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlayerPawn_NonParticipant_C_ExecuteUbergraph_BP_PlayerPawn_NonParticipant, K2Node_Event_SoundBankTag) == 0x000458, "Member 'BP_PlayerPawn_NonParticipant_C_ExecuteUbergraph_BP_PlayerPawn_NonParticipant::K2Node_Event_SoundBankTag' has a wrong offset!");
static_assert(offsetof(BP_PlayerPawn_NonParticipant_C_ExecuteUbergraph_BP_PlayerPawn_NonParticipant, CallFunc_PlayVoiceComponentSoundByTag_AudioComponent_3) == 0x000460, "Member 'BP_PlayerPawn_NonParticipant_C_ExecuteUbergraph_BP_PlayerPawn_NonParticipant::CallFunc_PlayVoiceComponentSoundByTag_AudioComponent_3' has a wrong offset!");
static_assert(offsetof(BP_PlayerPawn_NonParticipant_C_ExecuteUbergraph_BP_PlayerPawn_NonParticipant, CallFunc_HasMatchingGameplayTag_ReturnValue_1) == 0x000468, "Member 'BP_PlayerPawn_NonParticipant_C_ExecuteUbergraph_BP_PlayerPawn_NonParticipant::CallFunc_HasMatchingGameplayTag_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_PlayerPawn_NonParticipant_C_ExecuteUbergraph_BP_PlayerPawn_NonParticipant, Temp_bool_Variable_2) == 0x000469, "Member 'BP_PlayerPawn_NonParticipant_C_ExecuteUbergraph_BP_PlayerPawn_NonParticipant::Temp_bool_Variable_2' has a wrong offset!");
static_assert(offsetof(BP_PlayerPawn_NonParticipant_C_ExecuteUbergraph_BP_PlayerPawn_NonParticipant, Temp_bool_Variable_3) == 0x00046A, "Member 'BP_PlayerPawn_NonParticipant_C_ExecuteUbergraph_BP_PlayerPawn_NonParticipant::Temp_bool_Variable_3' has a wrong offset!");
static_assert(offsetof(BP_PlayerPawn_NonParticipant_C_ExecuteUbergraph_BP_PlayerPawn_NonParticipant, Temp_bool_Variable_4) == 0x00046B, "Member 'BP_PlayerPawn_NonParticipant_C_ExecuteUbergraph_BP_PlayerPawn_NonParticipant::Temp_bool_Variable_4' has a wrong offset!");
static_assert(offsetof(BP_PlayerPawn_NonParticipant_C_ExecuteUbergraph_BP_PlayerPawn_NonParticipant, K2Node_Event_Damage) == 0x00046C, "Member 'BP_PlayerPawn_NonParticipant_C_ExecuteUbergraph_BP_PlayerPawn_NonParticipant::K2Node_Event_Damage' has a wrong offset!");
static_assert(offsetof(BP_PlayerPawn_NonParticipant_C_ExecuteUbergraph_BP_PlayerPawn_NonParticipant, K2Node_Event_DamageTags) == 0x000470, "Member 'BP_PlayerPawn_NonParticipant_C_ExecuteUbergraph_BP_PlayerPawn_NonParticipant::K2Node_Event_DamageTags' has a wrong offset!");
static_assert(offsetof(BP_PlayerPawn_NonParticipant_C_ExecuteUbergraph_BP_PlayerPawn_NonParticipant, K2Node_Event_Momentum) == 0x000490, "Member 'BP_PlayerPawn_NonParticipant_C_ExecuteUbergraph_BP_PlayerPawn_NonParticipant::K2Node_Event_Momentum' has a wrong offset!");
static_assert(offsetof(BP_PlayerPawn_NonParticipant_C_ExecuteUbergraph_BP_PlayerPawn_NonParticipant, K2Node_Event_HitInfo) == 0x0004A8, "Member 'BP_PlayerPawn_NonParticipant_C_ExecuteUbergraph_BP_PlayerPawn_NonParticipant::K2Node_Event_HitInfo' has a wrong offset!");
static_assert(offsetof(BP_PlayerPawn_NonParticipant_C_ExecuteUbergraph_BP_PlayerPawn_NonParticipant, K2Node_Event_InstigatedBy) == 0x000588, "Member 'BP_PlayerPawn_NonParticipant_C_ExecuteUbergraph_BP_PlayerPawn_NonParticipant::K2Node_Event_InstigatedBy' has a wrong offset!");
static_assert(offsetof(BP_PlayerPawn_NonParticipant_C_ExecuteUbergraph_BP_PlayerPawn_NonParticipant, K2Node_Event_DamageCauser) == 0x000590, "Member 'BP_PlayerPawn_NonParticipant_C_ExecuteUbergraph_BP_PlayerPawn_NonParticipant::K2Node_Event_DamageCauser' has a wrong offset!");
static_assert(offsetof(BP_PlayerPawn_NonParticipant_C_ExecuteUbergraph_BP_PlayerPawn_NonParticipant, K2Node_Event_EffectContext) == 0x000598, "Member 'BP_PlayerPawn_NonParticipant_C_ExecuteUbergraph_BP_PlayerPawn_NonParticipant::K2Node_Event_EffectContext' has a wrong offset!");
static_assert(offsetof(BP_PlayerPawn_NonParticipant_C_ExecuteUbergraph_BP_PlayerPawn_NonParticipant, CallFunc_PlayVoiceComponentSoundByTag_AudioComponent_4) == 0x0005B0, "Member 'BP_PlayerPawn_NonParticipant_C_ExecuteUbergraph_BP_PlayerPawn_NonParticipant::CallFunc_PlayVoiceComponentSoundByTag_AudioComponent_4' has a wrong offset!");
static_assert(offsetof(BP_PlayerPawn_NonParticipant_C_ExecuteUbergraph_BP_PlayerPawn_NonParticipant, K2Node_ComponentBoundEvent_InstigatorPawn) == 0x0005B8, "Member 'BP_PlayerPawn_NonParticipant_C_ExecuteUbergraph_BP_PlayerPawn_NonParticipant::K2Node_ComponentBoundEvent_InstigatorPawn' has a wrong offset!");
static_assert(offsetof(BP_PlayerPawn_NonParticipant_C_ExecuteUbergraph_BP_PlayerPawn_NonParticipant, K2Node_ComponentBoundEvent_ConvertedPawn) == 0x0005C0, "Member 'BP_PlayerPawn_NonParticipant_C_ExecuteUbergraph_BP_PlayerPawn_NonParticipant::K2Node_ComponentBoundEvent_ConvertedPawn' has a wrong offset!");
static_assert(offsetof(BP_PlayerPawn_NonParticipant_C_ExecuteUbergraph_BP_PlayerPawn_NonParticipant, CallFunc_HasAuthority_ReturnValue_2) == 0x0005C8, "Member 'BP_PlayerPawn_NonParticipant_C_ExecuteUbergraph_BP_PlayerPawn_NonParticipant::CallFunc_HasAuthority_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_PlayerPawn_NonParticipant_C_ExecuteUbergraph_BP_PlayerPawn_NonParticipant, K2Node_ComponentBoundEvent_UnconvertedPawn) == 0x0005D0, "Member 'BP_PlayerPawn_NonParticipant_C_ExecuteUbergraph_BP_PlayerPawn_NonParticipant::K2Node_ComponentBoundEvent_UnconvertedPawn' has a wrong offset!");
static_assert(offsetof(BP_PlayerPawn_NonParticipant_C_ExecuteUbergraph_BP_PlayerPawn_NonParticipant, K2Node_ComponentBoundEvent_UnconvertReason) == 0x0005D8, "Member 'BP_PlayerPawn_NonParticipant_C_ExecuteUbergraph_BP_PlayerPawn_NonParticipant::K2Node_ComponentBoundEvent_UnconvertReason' has a wrong offset!");
static_assert(offsetof(BP_PlayerPawn_NonParticipant_C_ExecuteUbergraph_BP_PlayerPawn_NonParticipant, CallFunc_K2_GetActorLocation_ReturnValue) == 0x0005E0, "Member 'BP_PlayerPawn_NonParticipant_C_ExecuteUbergraph_BP_PlayerPawn_NonParticipant::CallFunc_K2_GetActorLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlayerPawn_NonParticipant_C_ExecuteUbergraph_BP_PlayerPawn_NonParticipant, K2Node_CreateDelegate_OutputDelegate_7) == 0x0005F8, "Member 'BP_PlayerPawn_NonParticipant_C_ExecuteUbergraph_BP_PlayerPawn_NonParticipant::K2Node_CreateDelegate_OutputDelegate_7' has a wrong offset!");
static_assert(offsetof(BP_PlayerPawn_NonParticipant_C_ExecuteUbergraph_BP_PlayerPawn_NonParticipant, K2Node_CustomEvent_DamagedActor) == 0x000608, "Member 'BP_PlayerPawn_NonParticipant_C_ExecuteUbergraph_BP_PlayerPawn_NonParticipant::K2Node_CustomEvent_DamagedActor' has a wrong offset!");
static_assert(offsetof(BP_PlayerPawn_NonParticipant_C_ExecuteUbergraph_BP_PlayerPawn_NonParticipant, K2Node_CustomEvent_Damage) == 0x000610, "Member 'BP_PlayerPawn_NonParticipant_C_ExecuteUbergraph_BP_PlayerPawn_NonParticipant::K2Node_CustomEvent_Damage' has a wrong offset!");
static_assert(offsetof(BP_PlayerPawn_NonParticipant_C_ExecuteUbergraph_BP_PlayerPawn_NonParticipant, K2Node_CustomEvent_InstigatedBy) == 0x000618, "Member 'BP_PlayerPawn_NonParticipant_C_ExecuteUbergraph_BP_PlayerPawn_NonParticipant::K2Node_CustomEvent_InstigatedBy' has a wrong offset!");
static_assert(offsetof(BP_PlayerPawn_NonParticipant_C_ExecuteUbergraph_BP_PlayerPawn_NonParticipant, K2Node_CustomEvent_DamageCauser) == 0x000620, "Member 'BP_PlayerPawn_NonParticipant_C_ExecuteUbergraph_BP_PlayerPawn_NonParticipant::K2Node_CustomEvent_DamageCauser' has a wrong offset!");
static_assert(offsetof(BP_PlayerPawn_NonParticipant_C_ExecuteUbergraph_BP_PlayerPawn_NonParticipant, K2Node_CustomEvent_HitLocation) == 0x000628, "Member 'BP_PlayerPawn_NonParticipant_C_ExecuteUbergraph_BP_PlayerPawn_NonParticipant::K2Node_CustomEvent_HitLocation' has a wrong offset!");
static_assert(offsetof(BP_PlayerPawn_NonParticipant_C_ExecuteUbergraph_BP_PlayerPawn_NonParticipant, K2Node_CustomEvent_FHitComponent) == 0x000640, "Member 'BP_PlayerPawn_NonParticipant_C_ExecuteUbergraph_BP_PlayerPawn_NonParticipant::K2Node_CustomEvent_FHitComponent' has a wrong offset!");
static_assert(offsetof(BP_PlayerPawn_NonParticipant_C_ExecuteUbergraph_BP_PlayerPawn_NonParticipant, K2Node_CustomEvent_BoneName) == 0x000648, "Member 'BP_PlayerPawn_NonParticipant_C_ExecuteUbergraph_BP_PlayerPawn_NonParticipant::K2Node_CustomEvent_BoneName' has a wrong offset!");
static_assert(offsetof(BP_PlayerPawn_NonParticipant_C_ExecuteUbergraph_BP_PlayerPawn_NonParticipant, K2Node_CustomEvent_Momentum) == 0x000650, "Member 'BP_PlayerPawn_NonParticipant_C_ExecuteUbergraph_BP_PlayerPawn_NonParticipant::K2Node_CustomEvent_Momentum' has a wrong offset!");
static_assert(offsetof(BP_PlayerPawn_NonParticipant_C_ExecuteUbergraph_BP_PlayerPawn_NonParticipant, CallFunc_GetController_ReturnValue) == 0x000668, "Member 'BP_PlayerPawn_NonParticipant_C_ExecuteUbergraph_BP_PlayerPawn_NonParticipant::CallFunc_GetController_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlayerPawn_NonParticipant_C_ExecuteUbergraph_BP_PlayerPawn_NonParticipant, Temp_bool_Variable_5) == 0x000670, "Member 'BP_PlayerPawn_NonParticipant_C_ExecuteUbergraph_BP_PlayerPawn_NonParticipant::Temp_bool_Variable_5' has a wrong offset!");
static_assert(offsetof(BP_PlayerPawn_NonParticipant_C_ExecuteUbergraph_BP_PlayerPawn_NonParticipant, K2Node_DynamicCast_AsFort_Athena_AIBot_Controller_1) == 0x000678, "Member 'BP_PlayerPawn_NonParticipant_C_ExecuteUbergraph_BP_PlayerPawn_NonParticipant::K2Node_DynamicCast_AsFort_Athena_AIBot_Controller_1' has a wrong offset!");
static_assert(offsetof(BP_PlayerPawn_NonParticipant_C_ExecuteUbergraph_BP_PlayerPawn_NonParticipant, K2Node_DynamicCast_bSuccess_4) == 0x000680, "Member 'BP_PlayerPawn_NonParticipant_C_ExecuteUbergraph_BP_PlayerPawn_NonParticipant::K2Node_DynamicCast_bSuccess_4' has a wrong offset!");
static_assert(offsetof(BP_PlayerPawn_NonParticipant_C_ExecuteUbergraph_BP_PlayerPawn_NonParticipant, K2Node_Select_Default_1) == 0x000681, "Member 'BP_PlayerPawn_NonParticipant_C_ExecuteUbergraph_BP_PlayerPawn_NonParticipant::K2Node_Select_Default_1' has a wrong offset!");
static_assert(offsetof(BP_PlayerPawn_NonParticipant_C_ExecuteUbergraph_BP_PlayerPawn_NonParticipant, CallFunc_BooleanAND_ReturnValue) == 0x000682, "Member 'BP_PlayerPawn_NonParticipant_C_ExecuteUbergraph_BP_PlayerPawn_NonParticipant::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlayerPawn_NonParticipant_C_ExecuteUbergraph_BP_PlayerPawn_NonParticipant, CallFunc_RandomFloatInRange_Min_ImplicitCast) == 0x000688, "Member 'BP_PlayerPawn_NonParticipant_C_ExecuteUbergraph_BP_PlayerPawn_NonParticipant::CallFunc_RandomFloatInRange_Min_ImplicitCast' has a wrong offset!");
static_assert(offsetof(BP_PlayerPawn_NonParticipant_C_ExecuteUbergraph_BP_PlayerPawn_NonParticipant, CallFunc_RandomFloatInRange_Max_ImplicitCast) == 0x000690, "Member 'BP_PlayerPawn_NonParticipant_C_ExecuteUbergraph_BP_PlayerPawn_NonParticipant::CallFunc_RandomFloatInRange_Max_ImplicitCast' has a wrong offset!");
static_assert(offsetof(BP_PlayerPawn_NonParticipant_C_ExecuteUbergraph_BP_PlayerPawn_NonParticipant, CallFunc_K2_SetTimerDelegate_Time_ImplicitCast) == 0x000698, "Member 'BP_PlayerPawn_NonParticipant_C_ExecuteUbergraph_BP_PlayerPawn_NonParticipant::CallFunc_K2_SetTimerDelegate_Time_ImplicitCast' has a wrong offset!");

struct BP_PlayerPawn_NonParticipant_C_GameplayCue_Player_Interrogation_Voice_PickedUp final
{
public:
	EGameplayCueEvent                             EventType;
	uint8                                         Pad_1[0x7];
	struct FGameplayCueParameters                 Parameters;
};
static_assert(alignof(BP_PlayerPawn_NonParticipant_C_GameplayCue_Player_Interrogation_Voice_PickedUp) == 0x000008, "Wrong alignment on BP_PlayerPawn_NonParticipant_C_GameplayCue_Player_Interrogation_Voice_PickedUp");
static_assert(sizeof(BP_PlayerPawn_NonParticipant_C_GameplayCue_Player_Interrogation_Voice_PickedUp) == 0x0000D8, "Wrong size on BP_PlayerPawn_NonParticipant_C_GameplayCue_Player_Interrogation_Voice_PickedUp");
static_assert(offsetof(BP_PlayerPawn_NonParticipant_C_GameplayCue_Player_Interrogation_Voice_PickedUp, EventType) == 0x000000, "Member 'BP_PlayerPawn_NonParticipant_C_GameplayCue_Player_Interrogation_Voice_PickedUp::EventType' has a wrong offset!");
static_assert(offsetof(BP_PlayerPawn_NonParticipant_C_GameplayCue_Player_Interrogation_Voice_PickedUp, Parameters) == 0x000008, "Member 'BP_PlayerPawn_NonParticipant_C_GameplayCue_Player_Interrogation_Voice_PickedUp::Parameters' has a wrong offset!");

struct BP_PlayerPawn_NonParticipant_C_GetCurrentFullbodyHitReactionMontage final
{
public:
	class UAnimMontage*                           CurrentMontage;
	bool                                          CallFunc_Not_PreBool_ReturnValue;
	bool                                          CallFunc_IsWalking_ReturnValue;
	bool                                          CallFunc_BooleanAND_ReturnValue;
	bool                                          CallFunc_IsValid_ReturnValue;
	bool                                          CallFunc_BooleanAND_ReturnValue_1;
	bool                                          CallFunc_IsValid_ReturnValue_1;
};
static_assert(alignof(BP_PlayerPawn_NonParticipant_C_GetCurrentFullbodyHitReactionMontage) == 0x000008, "Wrong alignment on BP_PlayerPawn_NonParticipant_C_GetCurrentFullbodyHitReactionMontage");
static_assert(sizeof(BP_PlayerPawn_NonParticipant_C_GetCurrentFullbodyHitReactionMontage) == 0x000010, "Wrong size on BP_PlayerPawn_NonParticipant_C_GetCurrentFullbodyHitReactionMontage");
static_assert(offsetof(BP_PlayerPawn_NonParticipant_C_GetCurrentFullbodyHitReactionMontage, CurrentMontage) == 0x000000, "Member 'BP_PlayerPawn_NonParticipant_C_GetCurrentFullbodyHitReactionMontage::CurrentMontage' has a wrong offset!");
static_assert(offsetof(BP_PlayerPawn_NonParticipant_C_GetCurrentFullbodyHitReactionMontage, CallFunc_Not_PreBool_ReturnValue) == 0x000008, "Member 'BP_PlayerPawn_NonParticipant_C_GetCurrentFullbodyHitReactionMontage::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlayerPawn_NonParticipant_C_GetCurrentFullbodyHitReactionMontage, CallFunc_IsWalking_ReturnValue) == 0x000009, "Member 'BP_PlayerPawn_NonParticipant_C_GetCurrentFullbodyHitReactionMontage::CallFunc_IsWalking_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlayerPawn_NonParticipant_C_GetCurrentFullbodyHitReactionMontage, CallFunc_BooleanAND_ReturnValue) == 0x00000A, "Member 'BP_PlayerPawn_NonParticipant_C_GetCurrentFullbodyHitReactionMontage::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlayerPawn_NonParticipant_C_GetCurrentFullbodyHitReactionMontage, CallFunc_IsValid_ReturnValue) == 0x00000B, "Member 'BP_PlayerPawn_NonParticipant_C_GetCurrentFullbodyHitReactionMontage::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlayerPawn_NonParticipant_C_GetCurrentFullbodyHitReactionMontage, CallFunc_BooleanAND_ReturnValue_1) == 0x00000C, "Member 'BP_PlayerPawn_NonParticipant_C_GetCurrentFullbodyHitReactionMontage::CallFunc_BooleanAND_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_PlayerPawn_NonParticipant_C_GetCurrentFullbodyHitReactionMontage, CallFunc_IsValid_ReturnValue_1) == 0x00000D, "Member 'BP_PlayerPawn_NonParticipant_C_GetCurrentFullbodyHitReactionMontage::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");

struct BP_PlayerPawn_NonParticipant_C_HandleAlertStateUpdates final
{
public:
	bool                                          Temp_bool_Variable;
	bool                                          Temp_bool_Variable_1;
	bool                                          Temp_bool_Variable_2;
	bool                                          Temp_bool_Variable_3;
	EAlertLevel                                   Temp_byte_Variable;
	bool                                          Temp_bool_Variable_4;
	bool                                          Temp_bool_Variable_5;
	bool                                          Temp_bool_Variable_6;
	bool                                          Temp_bool_Variable_7;
	bool                                          Temp_bool_Variable_8;
	EAlertLevel                                   Temp_byte_Variable_1;
	bool                                          Temp_bool_Variable_9;
	bool                                          Temp_bool_Variable_10;
	bool                                          Temp_bool_Variable_11;
	bool                                          Temp_bool_Variable_12;
	bool                                          Temp_bool_Variable_13;
	bool                                          CallFunc_IsDedicatedServer_ReturnValue;
	bool                                          CallFunc_HasAuthority_ReturnValue;
	EAlertLevel                                   Temp_byte_Variable_2;
	bool                                          Temp_bool_Variable_14;
	EAlertLevel                                   Temp_byte_Variable_3;
	uint8                                         Pad_15[0x3];
	TScriptInterface<class IGameplayTagAssetInterface> CallFunc_HasMatchingGameplayTag_self_CastInput;
	bool                                          CallFunc_HasMatchingGameplayTag_ReturnValue;
	bool                                          CallFunc_IsDead_ReturnValue;
	uint8                                         Pad_2A[0x6];
	class UAbilitySystemComponent*                CallFunc_GetAbilitySystemComponent_ReturnValue;
	bool                                          CallFunc_IsValid_ReturnValue;
	uint8                                         Pad_39[0x7];
	class UAbilitySystemComponent*                CallFunc_GetAbilitySystemComponent_ReturnValue_1;
	struct FActiveGameplayEffectHandle            CallFunc_BP_ApplyGameplayEffectToSelf_ReturnValue;
	bool                                          CallFunc_IsValid_ReturnValue_1;
	uint8                                         Pad_51[0x3];
	struct FActiveGameplayEffectHandle            CallFunc_BP_ApplyGameplayEffectToSelf_ReturnValue_1;
	bool                                          Temp_bool_Variable_15;
	bool                                          Temp_bool_Variable_16;
	bool                                          Temp_bool_Variable_17;
	uint8                                         Pad_5F[0x1];
	class FName                                   CallFunc_MakeLiteralName_ReturnValue;
	uint8                                         Pad_64[0x4];
	class UBlackboardComponent*                   CallFunc_GetBlackboard_ReturnValue;
	bool                                          CallFunc_IsValid_ReturnValue_2;
	uint8                                         Pad_71[0x7];
	class UObject*                                CallFunc_GetValueAsObject_ReturnValue;
	bool                                          CallFunc_IsValid_ReturnValue_3;
	uint8                                         Pad_81[0x7];
	class AActor*                                 K2Node_DynamicCast_AsActor;
	bool                                          K2Node_DynamicCast_bSuccess;
	uint8                                         Pad_91[0x7];
	double                                        CallFunc_GetDistanceBetweenActors_Distance;
	bool                                          CallFunc_Greater_DoubleDouble_ReturnValue;
	uint8                                         Pad_A1[0x7];
	class UAbilitySystemComponent*                CallFunc_GetAbilitySystemComponent_ReturnValue_2;
	struct FActiveGameplayEffectHandle            CallFunc_BP_ApplyGameplayEffectToSelf_ReturnValue_2;
	bool                                          K2Node_Select_Default;
	bool                                          K2Node_Select_Default_1;
	bool                                          K2Node_Select_Default_2;
	bool                                          CallFunc_BooleanOR_ReturnValue;
	bool                                          CallFunc_BooleanOR_ReturnValue_1;
	bool                                          Temp_bool_Variable_18;
	bool                                          CallFunc_BooleanOR_ReturnValue_2;
	bool                                          Temp_bool_Variable_19;
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;
	bool                                          K2Node_Select_Default_3;
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_1;
	bool                                          CallFunc_BooleanOR_ReturnValue_3;
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_2;
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_3;
};
static_assert(alignof(BP_PlayerPawn_NonParticipant_C_HandleAlertStateUpdates) == 0x000008, "Wrong alignment on BP_PlayerPawn_NonParticipant_C_HandleAlertStateUpdates");
static_assert(sizeof(BP_PlayerPawn_NonParticipant_C_HandleAlertStateUpdates) == 0x0000C8, "Wrong size on BP_PlayerPawn_NonParticipant_C_HandleAlertStateUpdates");
static_assert(offsetof(BP_PlayerPawn_NonParticipant_C_HandleAlertStateUpdates, Temp_bool_Variable) == 0x000000, "Member 'BP_PlayerPawn_NonParticipant_C_HandleAlertStateUpdates::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(BP_PlayerPawn_NonParticipant_C_HandleAlertStateUpdates, Temp_bool_Variable_1) == 0x000001, "Member 'BP_PlayerPawn_NonParticipant_C_HandleAlertStateUpdates::Temp_bool_Variable_1' has a wrong offset!");
static_assert(offsetof(BP_PlayerPawn_NonParticipant_C_HandleAlertStateUpdates, Temp_bool_Variable_2) == 0x000002, "Member 'BP_PlayerPawn_NonParticipant_C_HandleAlertStateUpdates::Temp_bool_Variable_2' has a wrong offset!");
static_assert(offsetof(BP_PlayerPawn_NonParticipant_C_HandleAlertStateUpdates, Temp_bool_Variable_3) == 0x000003, "Member 'BP_PlayerPawn_NonParticipant_C_HandleAlertStateUpdates::Temp_bool_Variable_3' has a wrong offset!");
static_assert(offsetof(BP_PlayerPawn_NonParticipant_C_HandleAlertStateUpdates, Temp_byte_Variable) == 0x000004, "Member 'BP_PlayerPawn_NonParticipant_C_HandleAlertStateUpdates::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(BP_PlayerPawn_NonParticipant_C_HandleAlertStateUpdates, Temp_bool_Variable_4) == 0x000005, "Member 'BP_PlayerPawn_NonParticipant_C_HandleAlertStateUpdates::Temp_bool_Variable_4' has a wrong offset!");
static_assert(offsetof(BP_PlayerPawn_NonParticipant_C_HandleAlertStateUpdates, Temp_bool_Variable_5) == 0x000006, "Member 'BP_PlayerPawn_NonParticipant_C_HandleAlertStateUpdates::Temp_bool_Variable_5' has a wrong offset!");
static_assert(offsetof(BP_PlayerPawn_NonParticipant_C_HandleAlertStateUpdates, Temp_bool_Variable_6) == 0x000007, "Member 'BP_PlayerPawn_NonParticipant_C_HandleAlertStateUpdates::Temp_bool_Variable_6' has a wrong offset!");
static_assert(offsetof(BP_PlayerPawn_NonParticipant_C_HandleAlertStateUpdates, Temp_bool_Variable_7) == 0x000008, "Member 'BP_PlayerPawn_NonParticipant_C_HandleAlertStateUpdates::Temp_bool_Variable_7' has a wrong offset!");
static_assert(offsetof(BP_PlayerPawn_NonParticipant_C_HandleAlertStateUpdates, Temp_bool_Variable_8) == 0x000009, "Member 'BP_PlayerPawn_NonParticipant_C_HandleAlertStateUpdates::Temp_bool_Variable_8' has a wrong offset!");
static_assert(offsetof(BP_PlayerPawn_NonParticipant_C_HandleAlertStateUpdates, Temp_byte_Variable_1) == 0x00000A, "Member 'BP_PlayerPawn_NonParticipant_C_HandleAlertStateUpdates::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(BP_PlayerPawn_NonParticipant_C_HandleAlertStateUpdates, Temp_bool_Variable_9) == 0x00000B, "Member 'BP_PlayerPawn_NonParticipant_C_HandleAlertStateUpdates::Temp_bool_Variable_9' has a wrong offset!");
static_assert(offsetof(BP_PlayerPawn_NonParticipant_C_HandleAlertStateUpdates, Temp_bool_Variable_10) == 0x00000C, "Member 'BP_PlayerPawn_NonParticipant_C_HandleAlertStateUpdates::Temp_bool_Variable_10' has a wrong offset!");
static_assert(offsetof(BP_PlayerPawn_NonParticipant_C_HandleAlertStateUpdates, Temp_bool_Variable_11) == 0x00000D, "Member 'BP_PlayerPawn_NonParticipant_C_HandleAlertStateUpdates::Temp_bool_Variable_11' has a wrong offset!");
static_assert(offsetof(BP_PlayerPawn_NonParticipant_C_HandleAlertStateUpdates, Temp_bool_Variable_12) == 0x00000E, "Member 'BP_PlayerPawn_NonParticipant_C_HandleAlertStateUpdates::Temp_bool_Variable_12' has a wrong offset!");
static_assert(offsetof(BP_PlayerPawn_NonParticipant_C_HandleAlertStateUpdates, Temp_bool_Variable_13) == 0x00000F, "Member 'BP_PlayerPawn_NonParticipant_C_HandleAlertStateUpdates::Temp_bool_Variable_13' has a wrong offset!");
static_assert(offsetof(BP_PlayerPawn_NonParticipant_C_HandleAlertStateUpdates, CallFunc_IsDedicatedServer_ReturnValue) == 0x000010, "Member 'BP_PlayerPawn_NonParticipant_C_HandleAlertStateUpdates::CallFunc_IsDedicatedServer_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlayerPawn_NonParticipant_C_HandleAlertStateUpdates, CallFunc_HasAuthority_ReturnValue) == 0x000011, "Member 'BP_PlayerPawn_NonParticipant_C_HandleAlertStateUpdates::CallFunc_HasAuthority_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlayerPawn_NonParticipant_C_HandleAlertStateUpdates, Temp_byte_Variable_2) == 0x000012, "Member 'BP_PlayerPawn_NonParticipant_C_HandleAlertStateUpdates::Temp_byte_Variable_2' has a wrong offset!");
static_assert(offsetof(BP_PlayerPawn_NonParticipant_C_HandleAlertStateUpdates, Temp_bool_Variable_14) == 0x000013, "Member 'BP_PlayerPawn_NonParticipant_C_HandleAlertStateUpdates::Temp_bool_Variable_14' has a wrong offset!");
static_assert(offsetof(BP_PlayerPawn_NonParticipant_C_HandleAlertStateUpdates, Temp_byte_Variable_3) == 0x000014, "Member 'BP_PlayerPawn_NonParticipant_C_HandleAlertStateUpdates::Temp_byte_Variable_3' has a wrong offset!");
static_assert(offsetof(BP_PlayerPawn_NonParticipant_C_HandleAlertStateUpdates, CallFunc_HasMatchingGameplayTag_self_CastInput) == 0x000018, "Member 'BP_PlayerPawn_NonParticipant_C_HandleAlertStateUpdates::CallFunc_HasMatchingGameplayTag_self_CastInput' has a wrong offset!");
static_assert(offsetof(BP_PlayerPawn_NonParticipant_C_HandleAlertStateUpdates, CallFunc_HasMatchingGameplayTag_ReturnValue) == 0x000028, "Member 'BP_PlayerPawn_NonParticipant_C_HandleAlertStateUpdates::CallFunc_HasMatchingGameplayTag_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlayerPawn_NonParticipant_C_HandleAlertStateUpdates, CallFunc_IsDead_ReturnValue) == 0x000029, "Member 'BP_PlayerPawn_NonParticipant_C_HandleAlertStateUpdates::CallFunc_IsDead_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlayerPawn_NonParticipant_C_HandleAlertStateUpdates, CallFunc_GetAbilitySystemComponent_ReturnValue) == 0x000030, "Member 'BP_PlayerPawn_NonParticipant_C_HandleAlertStateUpdates::CallFunc_GetAbilitySystemComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlayerPawn_NonParticipant_C_HandleAlertStateUpdates, CallFunc_IsValid_ReturnValue) == 0x000038, "Member 'BP_PlayerPawn_NonParticipant_C_HandleAlertStateUpdates::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlayerPawn_NonParticipant_C_HandleAlertStateUpdates, CallFunc_GetAbilitySystemComponent_ReturnValue_1) == 0x000040, "Member 'BP_PlayerPawn_NonParticipant_C_HandleAlertStateUpdates::CallFunc_GetAbilitySystemComponent_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_PlayerPawn_NonParticipant_C_HandleAlertStateUpdates, CallFunc_BP_ApplyGameplayEffectToSelf_ReturnValue) == 0x000048, "Member 'BP_PlayerPawn_NonParticipant_C_HandleAlertStateUpdates::CallFunc_BP_ApplyGameplayEffectToSelf_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlayerPawn_NonParticipant_C_HandleAlertStateUpdates, CallFunc_IsValid_ReturnValue_1) == 0x000050, "Member 'BP_PlayerPawn_NonParticipant_C_HandleAlertStateUpdates::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_PlayerPawn_NonParticipant_C_HandleAlertStateUpdates, CallFunc_BP_ApplyGameplayEffectToSelf_ReturnValue_1) == 0x000054, "Member 'BP_PlayerPawn_NonParticipant_C_HandleAlertStateUpdates::CallFunc_BP_ApplyGameplayEffectToSelf_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_PlayerPawn_NonParticipant_C_HandleAlertStateUpdates, Temp_bool_Variable_15) == 0x00005C, "Member 'BP_PlayerPawn_NonParticipant_C_HandleAlertStateUpdates::Temp_bool_Variable_15' has a wrong offset!");
static_assert(offsetof(BP_PlayerPawn_NonParticipant_C_HandleAlertStateUpdates, Temp_bool_Variable_16) == 0x00005D, "Member 'BP_PlayerPawn_NonParticipant_C_HandleAlertStateUpdates::Temp_bool_Variable_16' has a wrong offset!");
static_assert(offsetof(BP_PlayerPawn_NonParticipant_C_HandleAlertStateUpdates, Temp_bool_Variable_17) == 0x00005E, "Member 'BP_PlayerPawn_NonParticipant_C_HandleAlertStateUpdates::Temp_bool_Variable_17' has a wrong offset!");
static_assert(offsetof(BP_PlayerPawn_NonParticipant_C_HandleAlertStateUpdates, CallFunc_MakeLiteralName_ReturnValue) == 0x000060, "Member 'BP_PlayerPawn_NonParticipant_C_HandleAlertStateUpdates::CallFunc_MakeLiteralName_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlayerPawn_NonParticipant_C_HandleAlertStateUpdates, CallFunc_GetBlackboard_ReturnValue) == 0x000068, "Member 'BP_PlayerPawn_NonParticipant_C_HandleAlertStateUpdates::CallFunc_GetBlackboard_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlayerPawn_NonParticipant_C_HandleAlertStateUpdates, CallFunc_IsValid_ReturnValue_2) == 0x000070, "Member 'BP_PlayerPawn_NonParticipant_C_HandleAlertStateUpdates::CallFunc_IsValid_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_PlayerPawn_NonParticipant_C_HandleAlertStateUpdates, CallFunc_GetValueAsObject_ReturnValue) == 0x000078, "Member 'BP_PlayerPawn_NonParticipant_C_HandleAlertStateUpdates::CallFunc_GetValueAsObject_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlayerPawn_NonParticipant_C_HandleAlertStateUpdates, CallFunc_IsValid_ReturnValue_3) == 0x000080, "Member 'BP_PlayerPawn_NonParticipant_C_HandleAlertStateUpdates::CallFunc_IsValid_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(BP_PlayerPawn_NonParticipant_C_HandleAlertStateUpdates, K2Node_DynamicCast_AsActor) == 0x000088, "Member 'BP_PlayerPawn_NonParticipant_C_HandleAlertStateUpdates::K2Node_DynamicCast_AsActor' has a wrong offset!");
static_assert(offsetof(BP_PlayerPawn_NonParticipant_C_HandleAlertStateUpdates, K2Node_DynamicCast_bSuccess) == 0x000090, "Member 'BP_PlayerPawn_NonParticipant_C_HandleAlertStateUpdates::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BP_PlayerPawn_NonParticipant_C_HandleAlertStateUpdates, CallFunc_GetDistanceBetweenActors_Distance) == 0x000098, "Member 'BP_PlayerPawn_NonParticipant_C_HandleAlertStateUpdates::CallFunc_GetDistanceBetweenActors_Distance' has a wrong offset!");
static_assert(offsetof(BP_PlayerPawn_NonParticipant_C_HandleAlertStateUpdates, CallFunc_Greater_DoubleDouble_ReturnValue) == 0x0000A0, "Member 'BP_PlayerPawn_NonParticipant_C_HandleAlertStateUpdates::CallFunc_Greater_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlayerPawn_NonParticipant_C_HandleAlertStateUpdates, CallFunc_GetAbilitySystemComponent_ReturnValue_2) == 0x0000A8, "Member 'BP_PlayerPawn_NonParticipant_C_HandleAlertStateUpdates::CallFunc_GetAbilitySystemComponent_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_PlayerPawn_NonParticipant_C_HandleAlertStateUpdates, CallFunc_BP_ApplyGameplayEffectToSelf_ReturnValue_2) == 0x0000B0, "Member 'BP_PlayerPawn_NonParticipant_C_HandleAlertStateUpdates::CallFunc_BP_ApplyGameplayEffectToSelf_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_PlayerPawn_NonParticipant_C_HandleAlertStateUpdates, K2Node_Select_Default) == 0x0000B8, "Member 'BP_PlayerPawn_NonParticipant_C_HandleAlertStateUpdates::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(BP_PlayerPawn_NonParticipant_C_HandleAlertStateUpdates, K2Node_Select_Default_1) == 0x0000B9, "Member 'BP_PlayerPawn_NonParticipant_C_HandleAlertStateUpdates::K2Node_Select_Default_1' has a wrong offset!");
static_assert(offsetof(BP_PlayerPawn_NonParticipant_C_HandleAlertStateUpdates, K2Node_Select_Default_2) == 0x0000BA, "Member 'BP_PlayerPawn_NonParticipant_C_HandleAlertStateUpdates::K2Node_Select_Default_2' has a wrong offset!");
static_assert(offsetof(BP_PlayerPawn_NonParticipant_C_HandleAlertStateUpdates, CallFunc_BooleanOR_ReturnValue) == 0x0000BB, "Member 'BP_PlayerPawn_NonParticipant_C_HandleAlertStateUpdates::CallFunc_BooleanOR_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlayerPawn_NonParticipant_C_HandleAlertStateUpdates, CallFunc_BooleanOR_ReturnValue_1) == 0x0000BC, "Member 'BP_PlayerPawn_NonParticipant_C_HandleAlertStateUpdates::CallFunc_BooleanOR_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_PlayerPawn_NonParticipant_C_HandleAlertStateUpdates, Temp_bool_Variable_18) == 0x0000BD, "Member 'BP_PlayerPawn_NonParticipant_C_HandleAlertStateUpdates::Temp_bool_Variable_18' has a wrong offset!");
static_assert(offsetof(BP_PlayerPawn_NonParticipant_C_HandleAlertStateUpdates, CallFunc_BooleanOR_ReturnValue_2) == 0x0000BE, "Member 'BP_PlayerPawn_NonParticipant_C_HandleAlertStateUpdates::CallFunc_BooleanOR_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_PlayerPawn_NonParticipant_C_HandleAlertStateUpdates, Temp_bool_Variable_19) == 0x0000BF, "Member 'BP_PlayerPawn_NonParticipant_C_HandleAlertStateUpdates::Temp_bool_Variable_19' has a wrong offset!");
static_assert(offsetof(BP_PlayerPawn_NonParticipant_C_HandleAlertStateUpdates, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x0000C0, "Member 'BP_PlayerPawn_NonParticipant_C_HandleAlertStateUpdates::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlayerPawn_NonParticipant_C_HandleAlertStateUpdates, K2Node_Select_Default_3) == 0x0000C1, "Member 'BP_PlayerPawn_NonParticipant_C_HandleAlertStateUpdates::K2Node_Select_Default_3' has a wrong offset!");
static_assert(offsetof(BP_PlayerPawn_NonParticipant_C_HandleAlertStateUpdates, CallFunc_EqualEqual_ByteByte_ReturnValue_1) == 0x0000C2, "Member 'BP_PlayerPawn_NonParticipant_C_HandleAlertStateUpdates::CallFunc_EqualEqual_ByteByte_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_PlayerPawn_NonParticipant_C_HandleAlertStateUpdates, CallFunc_BooleanOR_ReturnValue_3) == 0x0000C3, "Member 'BP_PlayerPawn_NonParticipant_C_HandleAlertStateUpdates::CallFunc_BooleanOR_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(BP_PlayerPawn_NonParticipant_C_HandleAlertStateUpdates, CallFunc_EqualEqual_ByteByte_ReturnValue_2) == 0x0000C4, "Member 'BP_PlayerPawn_NonParticipant_C_HandleAlertStateUpdates::CallFunc_EqualEqual_ByteByte_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_PlayerPawn_NonParticipant_C_HandleAlertStateUpdates, CallFunc_EqualEqual_ByteByte_ReturnValue_3) == 0x0000C5, "Member 'BP_PlayerPawn_NonParticipant_C_HandleAlertStateUpdates::CallFunc_EqualEqual_ByteByte_ReturnValue_3' has a wrong offset!");

struct BP_PlayerPawn_NonParticipant_C_HandlePawnConverted final
{
public:
	class AFortPawn*                              InstigatorPawn;
	class AFortPawn*                              ConvertedPawn;
	bool                                          CallFunc_HasAuthority_ReturnValue;
	uint8                                         Pad_11[0x7];
	class UFortAbilitySystemComponent*            CallFunc_GetFortAbilitySystemComponent_ReturnValue;
	bool                                          CallFunc_IsValid_ReturnValue;
	bool                                          CallFunc_AddLooseGameplayTags_ReturnValue;
	uint8                                         Pad_22[0x6];
	TScriptInterface<class IAbilitySystemInterface> CallFunc_EquipFortAbilitySet_AbilitySystemInterfaceActor_CastInput;
	struct FFortAbilitySetHandle                  CallFunc_EquipFortAbilitySet_ReturnValue;
	bool                                          CallFunc_AddLooseGameplayTags_ReturnValue_1;
	uint8                                         Pad_71[0x3];
	struct FActiveGameplayEffectHandle            CallFunc_BP_ApplyGameplayEffectToSelf_ReturnValue;
};
static_assert(alignof(BP_PlayerPawn_NonParticipant_C_HandlePawnConverted) == 0x000008, "Wrong alignment on BP_PlayerPawn_NonParticipant_C_HandlePawnConverted");
static_assert(sizeof(BP_PlayerPawn_NonParticipant_C_HandlePawnConverted) == 0x000080, "Wrong size on BP_PlayerPawn_NonParticipant_C_HandlePawnConverted");
static_assert(offsetof(BP_PlayerPawn_NonParticipant_C_HandlePawnConverted, InstigatorPawn) == 0x000000, "Member 'BP_PlayerPawn_NonParticipant_C_HandlePawnConverted::InstigatorPawn' has a wrong offset!");
static_assert(offsetof(BP_PlayerPawn_NonParticipant_C_HandlePawnConverted, ConvertedPawn) == 0x000008, "Member 'BP_PlayerPawn_NonParticipant_C_HandlePawnConverted::ConvertedPawn' has a wrong offset!");
static_assert(offsetof(BP_PlayerPawn_NonParticipant_C_HandlePawnConverted, CallFunc_HasAuthority_ReturnValue) == 0x000010, "Member 'BP_PlayerPawn_NonParticipant_C_HandlePawnConverted::CallFunc_HasAuthority_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlayerPawn_NonParticipant_C_HandlePawnConverted, CallFunc_GetFortAbilitySystemComponent_ReturnValue) == 0x000018, "Member 'BP_PlayerPawn_NonParticipant_C_HandlePawnConverted::CallFunc_GetFortAbilitySystemComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlayerPawn_NonParticipant_C_HandlePawnConverted, CallFunc_IsValid_ReturnValue) == 0x000020, "Member 'BP_PlayerPawn_NonParticipant_C_HandlePawnConverted::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlayerPawn_NonParticipant_C_HandlePawnConverted, CallFunc_AddLooseGameplayTags_ReturnValue) == 0x000021, "Member 'BP_PlayerPawn_NonParticipant_C_HandlePawnConverted::CallFunc_AddLooseGameplayTags_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlayerPawn_NonParticipant_C_HandlePawnConverted, CallFunc_EquipFortAbilitySet_AbilitySystemInterfaceActor_CastInput) == 0x000028, "Member 'BP_PlayerPawn_NonParticipant_C_HandlePawnConverted::CallFunc_EquipFortAbilitySet_AbilitySystemInterfaceActor_CastInput' has a wrong offset!");
static_assert(offsetof(BP_PlayerPawn_NonParticipant_C_HandlePawnConverted, CallFunc_EquipFortAbilitySet_ReturnValue) == 0x000038, "Member 'BP_PlayerPawn_NonParticipant_C_HandlePawnConverted::CallFunc_EquipFortAbilitySet_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlayerPawn_NonParticipant_C_HandlePawnConverted, CallFunc_AddLooseGameplayTags_ReturnValue_1) == 0x000070, "Member 'BP_PlayerPawn_NonParticipant_C_HandlePawnConverted::CallFunc_AddLooseGameplayTags_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_PlayerPawn_NonParticipant_C_HandlePawnConverted, CallFunc_BP_ApplyGameplayEffectToSelf_ReturnValue) == 0x000074, "Member 'BP_PlayerPawn_NonParticipant_C_HandlePawnConverted::CallFunc_BP_ApplyGameplayEffectToSelf_ReturnValue' has a wrong offset!");

struct BP_PlayerPawn_NonParticipant_C_HandlePawnUnconverted final
{
public:
	class AFortPawn*                              UnconvertedPawn;
	bool                                          CallFunc_IsValid_ReturnValue;
	bool                                          CallFunc_BooleanAND_ReturnValue;
	bool                                          CallFunc_RemoveLooseGameplayTags_ReturnValue;
	bool                                          CallFunc_RemoveLooseGameplayTags_ReturnValue_1;
	bool                                          CallFunc_IsValid_ReturnValue_1;
	uint8                                         Pad_D[0x3];
	class UAbilitySystemComponent*                CallFunc_GetAbilitySystemComponent_ReturnValue;
	bool                                          CallFunc_RemoveActiveGameplayEffect_ReturnValue;
	bool                                          CallFunc_IsValid_ReturnValue_2;
};
static_assert(alignof(BP_PlayerPawn_NonParticipant_C_HandlePawnUnconverted) == 0x000008, "Wrong alignment on BP_PlayerPawn_NonParticipant_C_HandlePawnUnconverted");
static_assert(sizeof(BP_PlayerPawn_NonParticipant_C_HandlePawnUnconverted) == 0x000020, "Wrong size on BP_PlayerPawn_NonParticipant_C_HandlePawnUnconverted");
static_assert(offsetof(BP_PlayerPawn_NonParticipant_C_HandlePawnUnconverted, UnconvertedPawn) == 0x000000, "Member 'BP_PlayerPawn_NonParticipant_C_HandlePawnUnconverted::UnconvertedPawn' has a wrong offset!");
static_assert(offsetof(BP_PlayerPawn_NonParticipant_C_HandlePawnUnconverted, CallFunc_IsValid_ReturnValue) == 0x000008, "Member 'BP_PlayerPawn_NonParticipant_C_HandlePawnUnconverted::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlayerPawn_NonParticipant_C_HandlePawnUnconverted, CallFunc_BooleanAND_ReturnValue) == 0x000009, "Member 'BP_PlayerPawn_NonParticipant_C_HandlePawnUnconverted::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlayerPawn_NonParticipant_C_HandlePawnUnconverted, CallFunc_RemoveLooseGameplayTags_ReturnValue) == 0x00000A, "Member 'BP_PlayerPawn_NonParticipant_C_HandlePawnUnconverted::CallFunc_RemoveLooseGameplayTags_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlayerPawn_NonParticipant_C_HandlePawnUnconverted, CallFunc_RemoveLooseGameplayTags_ReturnValue_1) == 0x00000B, "Member 'BP_PlayerPawn_NonParticipant_C_HandlePawnUnconverted::CallFunc_RemoveLooseGameplayTags_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_PlayerPawn_NonParticipant_C_HandlePawnUnconverted, CallFunc_IsValid_ReturnValue_1) == 0x00000C, "Member 'BP_PlayerPawn_NonParticipant_C_HandlePawnUnconverted::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_PlayerPawn_NonParticipant_C_HandlePawnUnconverted, CallFunc_GetAbilitySystemComponent_ReturnValue) == 0x000010, "Member 'BP_PlayerPawn_NonParticipant_C_HandlePawnUnconverted::CallFunc_GetAbilitySystemComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlayerPawn_NonParticipant_C_HandlePawnUnconverted, CallFunc_RemoveActiveGameplayEffect_ReturnValue) == 0x000018, "Member 'BP_PlayerPawn_NonParticipant_C_HandlePawnUnconverted::CallFunc_RemoveActiveGameplayEffect_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlayerPawn_NonParticipant_C_HandlePawnUnconverted, CallFunc_IsValid_ReturnValue_2) == 0x000019, "Member 'BP_PlayerPawn_NonParticipant_C_HandlePawnUnconverted::CallFunc_IsValid_ReturnValue_2' has a wrong offset!");

struct BP_PlayerPawn_NonParticipant_C_InitializeAnimInstanceSettings final
{
public:
	class UAnimInstance*                          CallFunc_GetAnimInstance_ReturnValue;
	class UFortPlayerAnimInstance*                K2Node_DynamicCast_AsFort_Player_Anim_Instance;
	bool                                          K2Node_DynamicCast_bSuccess;
};
static_assert(alignof(BP_PlayerPawn_NonParticipant_C_InitializeAnimInstanceSettings) == 0x000008, "Wrong alignment on BP_PlayerPawn_NonParticipant_C_InitializeAnimInstanceSettings");
static_assert(sizeof(BP_PlayerPawn_NonParticipant_C_InitializeAnimInstanceSettings) == 0x000018, "Wrong size on BP_PlayerPawn_NonParticipant_C_InitializeAnimInstanceSettings");
static_assert(offsetof(BP_PlayerPawn_NonParticipant_C_InitializeAnimInstanceSettings, CallFunc_GetAnimInstance_ReturnValue) == 0x000000, "Member 'BP_PlayerPawn_NonParticipant_C_InitializeAnimInstanceSettings::CallFunc_GetAnimInstance_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlayerPawn_NonParticipant_C_InitializeAnimInstanceSettings, K2Node_DynamicCast_AsFort_Player_Anim_Instance) == 0x000008, "Member 'BP_PlayerPawn_NonParticipant_C_InitializeAnimInstanceSettings::K2Node_DynamicCast_AsFort_Player_Anim_Instance' has a wrong offset!");
static_assert(offsetof(BP_PlayerPawn_NonParticipant_C_InitializeAnimInstanceSettings, K2Node_DynamicCast_bSuccess) == 0x000010, "Member 'BP_PlayerPawn_NonParticipant_C_InitializeAnimInstanceSettings::K2Node_DynamicCast_bSuccess' has a wrong offset!");

struct BP_PlayerPawn_NonParticipant_C_OnAlertLEvelCHangedEvent final
{
public:
	class AFortAthenaAIBotController*             BotController;
	EAlertLevel                                   OldAlertLevel_0;
	EAlertLevel                                   NewAlertLevel;
};
static_assert(alignof(BP_PlayerPawn_NonParticipant_C_OnAlertLEvelCHangedEvent) == 0x000008, "Wrong alignment on BP_PlayerPawn_NonParticipant_C_OnAlertLEvelCHangedEvent");
static_assert(sizeof(BP_PlayerPawn_NonParticipant_C_OnAlertLEvelCHangedEvent) == 0x000010, "Wrong size on BP_PlayerPawn_NonParticipant_C_OnAlertLEvelCHangedEvent");
static_assert(offsetof(BP_PlayerPawn_NonParticipant_C_OnAlertLEvelCHangedEvent, BotController) == 0x000000, "Member 'BP_PlayerPawn_NonParticipant_C_OnAlertLEvelCHangedEvent::BotController' has a wrong offset!");
static_assert(offsetof(BP_PlayerPawn_NonParticipant_C_OnAlertLEvelCHangedEvent, OldAlertLevel_0) == 0x000008, "Member 'BP_PlayerPawn_NonParticipant_C_OnAlertLEvelCHangedEvent::OldAlertLevel_0' has a wrong offset!");
static_assert(offsetof(BP_PlayerPawn_NonParticipant_C_OnAlertLEvelCHangedEvent, NewAlertLevel) == 0x000009, "Member 'BP_PlayerPawn_NonParticipant_C_OnAlertLEvelCHangedEvent::NewAlertLevel' has a wrong offset!");

struct BP_PlayerPawn_NonParticipant_C_OnAnimInputEvent final
{
public:
	const class UFortAnimInputEvent*              AnimInputEvent;
};
static_assert(alignof(BP_PlayerPawn_NonParticipant_C_OnAnimInputEvent) == 0x000008, "Wrong alignment on BP_PlayerPawn_NonParticipant_C_OnAnimInputEvent");
static_assert(sizeof(BP_PlayerPawn_NonParticipant_C_OnAnimInputEvent) == 0x000008, "Wrong size on BP_PlayerPawn_NonParticipant_C_OnAnimInputEvent");
static_assert(offsetof(BP_PlayerPawn_NonParticipant_C_OnAnimInputEvent, AnimInputEvent) == 0x000000, "Member 'BP_PlayerPawn_NonParticipant_C_OnAnimInputEvent::AnimInputEvent' has a wrong offset!");

struct BP_PlayerPawn_NonParticipant_C_OnCharacterCustomizationCompleted final
{
public:
	class AFortPlayerPawn*                        Pawn;
};
static_assert(alignof(BP_PlayerPawn_NonParticipant_C_OnCharacterCustomizationCompleted) == 0x000008, "Wrong alignment on BP_PlayerPawn_NonParticipant_C_OnCharacterCustomizationCompleted");
static_assert(sizeof(BP_PlayerPawn_NonParticipant_C_OnCharacterCustomizationCompleted) == 0x000008, "Wrong size on BP_PlayerPawn_NonParticipant_C_OnCharacterCustomizationCompleted");
static_assert(offsetof(BP_PlayerPawn_NonParticipant_C_OnCharacterCustomizationCompleted, Pawn) == 0x000000, "Member 'BP_PlayerPawn_NonParticipant_C_OnCharacterCustomizationCompleted::Pawn' has a wrong offset!");

struct BP_PlayerPawn_NonParticipant_C_OnDBNOStateChanged_Event final
{
public:
	class AFortPawn*                              FortPawn;
	bool                                          bInIsDBNO;
};
static_assert(alignof(BP_PlayerPawn_NonParticipant_C_OnDBNOStateChanged_Event) == 0x000008, "Wrong alignment on BP_PlayerPawn_NonParticipant_C_OnDBNOStateChanged_Event");
static_assert(sizeof(BP_PlayerPawn_NonParticipant_C_OnDBNOStateChanged_Event) == 0x000010, "Wrong size on BP_PlayerPawn_NonParticipant_C_OnDBNOStateChanged_Event");
static_assert(offsetof(BP_PlayerPawn_NonParticipant_C_OnDBNOStateChanged_Event, FortPawn) == 0x000000, "Member 'BP_PlayerPawn_NonParticipant_C_OnDBNOStateChanged_Event::FortPawn' has a wrong offset!");
static_assert(offsetof(BP_PlayerPawn_NonParticipant_C_OnDBNOStateChanged_Event, bInIsDBNO) == 0x000008, "Member 'BP_PlayerPawn_NonParticipant_C_OnDBNOStateChanged_Event::bInIsDBNO' has a wrong offset!");

struct BP_PlayerPawn_NonParticipant_C_OnDeathPlayEffects final
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
static_assert(alignof(BP_PlayerPawn_NonParticipant_C_OnDeathPlayEffects) == 0x000008, "Wrong alignment on BP_PlayerPawn_NonParticipant_C_OnDeathPlayEffects");
static_assert(sizeof(BP_PlayerPawn_NonParticipant_C_OnDeathPlayEffects) == 0x000148, "Wrong size on BP_PlayerPawn_NonParticipant_C_OnDeathPlayEffects");
static_assert(offsetof(BP_PlayerPawn_NonParticipant_C_OnDeathPlayEffects, Damage) == 0x000000, "Member 'BP_PlayerPawn_NonParticipant_C_OnDeathPlayEffects::Damage' has a wrong offset!");
static_assert(offsetof(BP_PlayerPawn_NonParticipant_C_OnDeathPlayEffects, DamageTags) == 0x000008, "Member 'BP_PlayerPawn_NonParticipant_C_OnDeathPlayEffects::DamageTags' has a wrong offset!");
static_assert(offsetof(BP_PlayerPawn_NonParticipant_C_OnDeathPlayEffects, Momentum) == 0x000028, "Member 'BP_PlayerPawn_NonParticipant_C_OnDeathPlayEffects::Momentum' has a wrong offset!");
static_assert(offsetof(BP_PlayerPawn_NonParticipant_C_OnDeathPlayEffects, HitInfo) == 0x000040, "Member 'BP_PlayerPawn_NonParticipant_C_OnDeathPlayEffects::HitInfo' has a wrong offset!");
static_assert(offsetof(BP_PlayerPawn_NonParticipant_C_OnDeathPlayEffects, InstigatedBy) == 0x000120, "Member 'BP_PlayerPawn_NonParticipant_C_OnDeathPlayEffects::InstigatedBy' has a wrong offset!");
static_assert(offsetof(BP_PlayerPawn_NonParticipant_C_OnDeathPlayEffects, DamageCauser) == 0x000128, "Member 'BP_PlayerPawn_NonParticipant_C_OnDeathPlayEffects::DamageCauser' has a wrong offset!");
static_assert(offsetof(BP_PlayerPawn_NonParticipant_C_OnDeathPlayEffects, EffectContext) == 0x000130, "Member 'BP_PlayerPawn_NonParticipant_C_OnDeathPlayEffects::EffectContext' has a wrong offset!");

struct BP_PlayerPawn_NonParticipant_C_OnDied_Event final
{
public:
	class AActor*                                 DamagedActor;
	float                                         Damage;
	uint8                                         Pad_C[0x4];
	class AController*                            InstigatedBy;
	class AActor*                                 DamageCauser;
	struct FVector                                HitLocation;
	class UPrimitiveComponent*                    FHitComponent;
	class FName                                   BoneName;
	uint8                                         Pad_44[0x4];
	struct FVector                                Momentum;
};
static_assert(alignof(BP_PlayerPawn_NonParticipant_C_OnDied_Event) == 0x000008, "Wrong alignment on BP_PlayerPawn_NonParticipant_C_OnDied_Event");
static_assert(sizeof(BP_PlayerPawn_NonParticipant_C_OnDied_Event) == 0x000060, "Wrong size on BP_PlayerPawn_NonParticipant_C_OnDied_Event");
static_assert(offsetof(BP_PlayerPawn_NonParticipant_C_OnDied_Event, DamagedActor) == 0x000000, "Member 'BP_PlayerPawn_NonParticipant_C_OnDied_Event::DamagedActor' has a wrong offset!");
static_assert(offsetof(BP_PlayerPawn_NonParticipant_C_OnDied_Event, Damage) == 0x000008, "Member 'BP_PlayerPawn_NonParticipant_C_OnDied_Event::Damage' has a wrong offset!");
static_assert(offsetof(BP_PlayerPawn_NonParticipant_C_OnDied_Event, InstigatedBy) == 0x000010, "Member 'BP_PlayerPawn_NonParticipant_C_OnDied_Event::InstigatedBy' has a wrong offset!");
static_assert(offsetof(BP_PlayerPawn_NonParticipant_C_OnDied_Event, DamageCauser) == 0x000018, "Member 'BP_PlayerPawn_NonParticipant_C_OnDied_Event::DamageCauser' has a wrong offset!");
static_assert(offsetof(BP_PlayerPawn_NonParticipant_C_OnDied_Event, HitLocation) == 0x000020, "Member 'BP_PlayerPawn_NonParticipant_C_OnDied_Event::HitLocation' has a wrong offset!");
static_assert(offsetof(BP_PlayerPawn_NonParticipant_C_OnDied_Event, FHitComponent) == 0x000038, "Member 'BP_PlayerPawn_NonParticipant_C_OnDied_Event::FHitComponent' has a wrong offset!");
static_assert(offsetof(BP_PlayerPawn_NonParticipant_C_OnDied_Event, BoneName) == 0x000040, "Member 'BP_PlayerPawn_NonParticipant_C_OnDied_Event::BoneName' has a wrong offset!");
static_assert(offsetof(BP_PlayerPawn_NonParticipant_C_OnDied_Event, Momentum) == 0x000048, "Member 'BP_PlayerPawn_NonParticipant_C_OnDied_Event::Momentum' has a wrong offset!");

struct BP_PlayerPawn_NonParticipant_C_OnWeaponAttachmentChangedDelegate_Event_0 final
{
public:
	class AFortWeapon*                            NewWeapon;
	class AFortWeapon*                            PrevWeapon;
};
static_assert(alignof(BP_PlayerPawn_NonParticipant_C_OnWeaponAttachmentChangedDelegate_Event_0) == 0x000008, "Wrong alignment on BP_PlayerPawn_NonParticipant_C_OnWeaponAttachmentChangedDelegate_Event_0");
static_assert(sizeof(BP_PlayerPawn_NonParticipant_C_OnWeaponAttachmentChangedDelegate_Event_0) == 0x000010, "Wrong size on BP_PlayerPawn_NonParticipant_C_OnWeaponAttachmentChangedDelegate_Event_0");
static_assert(offsetof(BP_PlayerPawn_NonParticipant_C_OnWeaponAttachmentChangedDelegate_Event_0, NewWeapon) == 0x000000, "Member 'BP_PlayerPawn_NonParticipant_C_OnWeaponAttachmentChangedDelegate_Event_0::NewWeapon' has a wrong offset!");
static_assert(offsetof(BP_PlayerPawn_NonParticipant_C_OnWeaponAttachmentChangedDelegate_Event_0, PrevWeapon) == 0x000008, "Member 'BP_PlayerPawn_NonParticipant_C_OnWeaponAttachmentChangedDelegate_Event_0::PrevWeapon' has a wrong offset!");

struct BP_PlayerPawn_NonParticipant_C_OnWeaponEquipped final
{
public:
	class AFortWeapon*                            NewWeapon;
	class AFortWeapon*                            PrevWeapon;
};
static_assert(alignof(BP_PlayerPawn_NonParticipant_C_OnWeaponEquipped) == 0x000008, "Wrong alignment on BP_PlayerPawn_NonParticipant_C_OnWeaponEquipped");
static_assert(sizeof(BP_PlayerPawn_NonParticipant_C_OnWeaponEquipped) == 0x000010, "Wrong size on BP_PlayerPawn_NonParticipant_C_OnWeaponEquipped");
static_assert(offsetof(BP_PlayerPawn_NonParticipant_C_OnWeaponEquipped, NewWeapon) == 0x000000, "Member 'BP_PlayerPawn_NonParticipant_C_OnWeaponEquipped::NewWeapon' has a wrong offset!");
static_assert(offsetof(BP_PlayerPawn_NonParticipant_C_OnWeaponEquipped, PrevWeapon) == 0x000008, "Member 'BP_PlayerPawn_NonParticipant_C_OnWeaponEquipped::PrevWeapon' has a wrong offset!");

struct BP_PlayerPawn_NonParticipant_C_PlayAlertLevelVO final
{
public:
	EAlertLevel                                   OldAlertLevel_0;
	EAlertLevel                                   NewAlertLevel;
	EAlertLevel                                   OldAlertLevelLocal;
	bool                                          Temp_bool_Variable;
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_1;
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_2;
	bool                                          CallFunc_BooleanOR_ReturnValue;
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_3;
	EAlertLevel                                   Temp_byte_Variable;
	bool                                          Temp_bool_Variable_1;
	bool                                          Temp_bool_Variable_2;
	bool                                          Temp_bool_Variable_3;
	bool                                          Temp_bool_Variable_4;
	bool                                          Temp_bool_Variable_5;
	EAlertLevel                                   Temp_byte_Variable_1;
	bool                                          Temp_bool_Variable_6;
	bool                                          Temp_bool_Variable_7;
	bool                                          Temp_bool_Variable_8;
	bool                                          Temp_bool_Variable_9;
	bool                                          Temp_bool_Variable_10;
	EAlertLevel                                   Temp_byte_Variable_2;
	bool                                          Temp_bool_Variable_11;
	bool                                          Temp_bool_Variable_12;
	bool                                          Temp_bool_Variable_13;
	bool                                          Temp_bool_Variable_14;
	bool                                          Temp_bool_Variable_15;
	bool                                          Temp_bool_Variable_16;
	bool                                          K2Node_Select_Default;
	bool                                          K2Node_Select_Default_1;
	bool                                          Temp_bool_Variable_17;
	bool                                          K2Node_Select_Default_2;
	TScriptInterface<class IGameplayTagAssetInterface> CallFunc_HasMatchingGameplayTag_self_CastInput;
	bool                                          CallFunc_HasMatchingGameplayTag_ReturnValue;
	bool                                          CallFunc_IsDead_ReturnValue;
	EAlertLevel                                   Temp_byte_Variable_3;
	bool                                          CallFunc_BooleanOR_ReturnValue_1;
	bool                                          CallFunc_BooleanOR_ReturnValue_2;
	bool                                          Temp_bool_Variable_18;
	bool                                          Temp_bool_Variable_19;
	uint8                                         Pad_37[0x1];
	class UAudioComponent*                        CallFunc_PlayVoiceComponentSoundByTag_AudioComponent;
	class UAudioComponent*                        CallFunc_PlayVoiceComponentSoundByTag_AudioComponent_1;
	bool                                          K2Node_Select_Default_3;
	uint8                                         Pad_49[0x7];
	class UAudioComponent*                        CallFunc_PlayVoiceComponentSoundByTag_AudioComponent_2;
	class UAudioComponent*                        CallFunc_PlayVoiceComponentSoundByTag_AudioComponent_3;
};
static_assert(alignof(BP_PlayerPawn_NonParticipant_C_PlayAlertLevelVO) == 0x000008, "Wrong alignment on BP_PlayerPawn_NonParticipant_C_PlayAlertLevelVO");
static_assert(sizeof(BP_PlayerPawn_NonParticipant_C_PlayAlertLevelVO) == 0x000060, "Wrong size on BP_PlayerPawn_NonParticipant_C_PlayAlertLevelVO");
static_assert(offsetof(BP_PlayerPawn_NonParticipant_C_PlayAlertLevelVO, OldAlertLevel_0) == 0x000000, "Member 'BP_PlayerPawn_NonParticipant_C_PlayAlertLevelVO::OldAlertLevel_0' has a wrong offset!");
static_assert(offsetof(BP_PlayerPawn_NonParticipant_C_PlayAlertLevelVO, NewAlertLevel) == 0x000001, "Member 'BP_PlayerPawn_NonParticipant_C_PlayAlertLevelVO::NewAlertLevel' has a wrong offset!");
static_assert(offsetof(BP_PlayerPawn_NonParticipant_C_PlayAlertLevelVO, OldAlertLevelLocal) == 0x000002, "Member 'BP_PlayerPawn_NonParticipant_C_PlayAlertLevelVO::OldAlertLevelLocal' has a wrong offset!");
static_assert(offsetof(BP_PlayerPawn_NonParticipant_C_PlayAlertLevelVO, Temp_bool_Variable) == 0x000003, "Member 'BP_PlayerPawn_NonParticipant_C_PlayAlertLevelVO::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(BP_PlayerPawn_NonParticipant_C_PlayAlertLevelVO, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x000004, "Member 'BP_PlayerPawn_NonParticipant_C_PlayAlertLevelVO::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlayerPawn_NonParticipant_C_PlayAlertLevelVO, CallFunc_EqualEqual_ByteByte_ReturnValue_1) == 0x000005, "Member 'BP_PlayerPawn_NonParticipant_C_PlayAlertLevelVO::CallFunc_EqualEqual_ByteByte_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_PlayerPawn_NonParticipant_C_PlayAlertLevelVO, CallFunc_EqualEqual_ByteByte_ReturnValue_2) == 0x000006, "Member 'BP_PlayerPawn_NonParticipant_C_PlayAlertLevelVO::CallFunc_EqualEqual_ByteByte_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_PlayerPawn_NonParticipant_C_PlayAlertLevelVO, CallFunc_BooleanOR_ReturnValue) == 0x000007, "Member 'BP_PlayerPawn_NonParticipant_C_PlayAlertLevelVO::CallFunc_BooleanOR_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlayerPawn_NonParticipant_C_PlayAlertLevelVO, CallFunc_EqualEqual_ByteByte_ReturnValue_3) == 0x000008, "Member 'BP_PlayerPawn_NonParticipant_C_PlayAlertLevelVO::CallFunc_EqualEqual_ByteByte_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(BP_PlayerPawn_NonParticipant_C_PlayAlertLevelVO, Temp_byte_Variable) == 0x000009, "Member 'BP_PlayerPawn_NonParticipant_C_PlayAlertLevelVO::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(BP_PlayerPawn_NonParticipant_C_PlayAlertLevelVO, Temp_bool_Variable_1) == 0x00000A, "Member 'BP_PlayerPawn_NonParticipant_C_PlayAlertLevelVO::Temp_bool_Variable_1' has a wrong offset!");
static_assert(offsetof(BP_PlayerPawn_NonParticipant_C_PlayAlertLevelVO, Temp_bool_Variable_2) == 0x00000B, "Member 'BP_PlayerPawn_NonParticipant_C_PlayAlertLevelVO::Temp_bool_Variable_2' has a wrong offset!");
static_assert(offsetof(BP_PlayerPawn_NonParticipant_C_PlayAlertLevelVO, Temp_bool_Variable_3) == 0x00000C, "Member 'BP_PlayerPawn_NonParticipant_C_PlayAlertLevelVO::Temp_bool_Variable_3' has a wrong offset!");
static_assert(offsetof(BP_PlayerPawn_NonParticipant_C_PlayAlertLevelVO, Temp_bool_Variable_4) == 0x00000D, "Member 'BP_PlayerPawn_NonParticipant_C_PlayAlertLevelVO::Temp_bool_Variable_4' has a wrong offset!");
static_assert(offsetof(BP_PlayerPawn_NonParticipant_C_PlayAlertLevelVO, Temp_bool_Variable_5) == 0x00000E, "Member 'BP_PlayerPawn_NonParticipant_C_PlayAlertLevelVO::Temp_bool_Variable_5' has a wrong offset!");
static_assert(offsetof(BP_PlayerPawn_NonParticipant_C_PlayAlertLevelVO, Temp_byte_Variable_1) == 0x00000F, "Member 'BP_PlayerPawn_NonParticipant_C_PlayAlertLevelVO::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(BP_PlayerPawn_NonParticipant_C_PlayAlertLevelVO, Temp_bool_Variable_6) == 0x000010, "Member 'BP_PlayerPawn_NonParticipant_C_PlayAlertLevelVO::Temp_bool_Variable_6' has a wrong offset!");
static_assert(offsetof(BP_PlayerPawn_NonParticipant_C_PlayAlertLevelVO, Temp_bool_Variable_7) == 0x000011, "Member 'BP_PlayerPawn_NonParticipant_C_PlayAlertLevelVO::Temp_bool_Variable_7' has a wrong offset!");
static_assert(offsetof(BP_PlayerPawn_NonParticipant_C_PlayAlertLevelVO, Temp_bool_Variable_8) == 0x000012, "Member 'BP_PlayerPawn_NonParticipant_C_PlayAlertLevelVO::Temp_bool_Variable_8' has a wrong offset!");
static_assert(offsetof(BP_PlayerPawn_NonParticipant_C_PlayAlertLevelVO, Temp_bool_Variable_9) == 0x000013, "Member 'BP_PlayerPawn_NonParticipant_C_PlayAlertLevelVO::Temp_bool_Variable_9' has a wrong offset!");
static_assert(offsetof(BP_PlayerPawn_NonParticipant_C_PlayAlertLevelVO, Temp_bool_Variable_10) == 0x000014, "Member 'BP_PlayerPawn_NonParticipant_C_PlayAlertLevelVO::Temp_bool_Variable_10' has a wrong offset!");
static_assert(offsetof(BP_PlayerPawn_NonParticipant_C_PlayAlertLevelVO, Temp_byte_Variable_2) == 0x000015, "Member 'BP_PlayerPawn_NonParticipant_C_PlayAlertLevelVO::Temp_byte_Variable_2' has a wrong offset!");
static_assert(offsetof(BP_PlayerPawn_NonParticipant_C_PlayAlertLevelVO, Temp_bool_Variable_11) == 0x000016, "Member 'BP_PlayerPawn_NonParticipant_C_PlayAlertLevelVO::Temp_bool_Variable_11' has a wrong offset!");
static_assert(offsetof(BP_PlayerPawn_NonParticipant_C_PlayAlertLevelVO, Temp_bool_Variable_12) == 0x000017, "Member 'BP_PlayerPawn_NonParticipant_C_PlayAlertLevelVO::Temp_bool_Variable_12' has a wrong offset!");
static_assert(offsetof(BP_PlayerPawn_NonParticipant_C_PlayAlertLevelVO, Temp_bool_Variable_13) == 0x000018, "Member 'BP_PlayerPawn_NonParticipant_C_PlayAlertLevelVO::Temp_bool_Variable_13' has a wrong offset!");
static_assert(offsetof(BP_PlayerPawn_NonParticipant_C_PlayAlertLevelVO, Temp_bool_Variable_14) == 0x000019, "Member 'BP_PlayerPawn_NonParticipant_C_PlayAlertLevelVO::Temp_bool_Variable_14' has a wrong offset!");
static_assert(offsetof(BP_PlayerPawn_NonParticipant_C_PlayAlertLevelVO, Temp_bool_Variable_15) == 0x00001A, "Member 'BP_PlayerPawn_NonParticipant_C_PlayAlertLevelVO::Temp_bool_Variable_15' has a wrong offset!");
static_assert(offsetof(BP_PlayerPawn_NonParticipant_C_PlayAlertLevelVO, Temp_bool_Variable_16) == 0x00001B, "Member 'BP_PlayerPawn_NonParticipant_C_PlayAlertLevelVO::Temp_bool_Variable_16' has a wrong offset!");
static_assert(offsetof(BP_PlayerPawn_NonParticipant_C_PlayAlertLevelVO, K2Node_Select_Default) == 0x00001C, "Member 'BP_PlayerPawn_NonParticipant_C_PlayAlertLevelVO::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(BP_PlayerPawn_NonParticipant_C_PlayAlertLevelVO, K2Node_Select_Default_1) == 0x00001D, "Member 'BP_PlayerPawn_NonParticipant_C_PlayAlertLevelVO::K2Node_Select_Default_1' has a wrong offset!");
static_assert(offsetof(BP_PlayerPawn_NonParticipant_C_PlayAlertLevelVO, Temp_bool_Variable_17) == 0x00001E, "Member 'BP_PlayerPawn_NonParticipant_C_PlayAlertLevelVO::Temp_bool_Variable_17' has a wrong offset!");
static_assert(offsetof(BP_PlayerPawn_NonParticipant_C_PlayAlertLevelVO, K2Node_Select_Default_2) == 0x00001F, "Member 'BP_PlayerPawn_NonParticipant_C_PlayAlertLevelVO::K2Node_Select_Default_2' has a wrong offset!");
static_assert(offsetof(BP_PlayerPawn_NonParticipant_C_PlayAlertLevelVO, CallFunc_HasMatchingGameplayTag_self_CastInput) == 0x000020, "Member 'BP_PlayerPawn_NonParticipant_C_PlayAlertLevelVO::CallFunc_HasMatchingGameplayTag_self_CastInput' has a wrong offset!");
static_assert(offsetof(BP_PlayerPawn_NonParticipant_C_PlayAlertLevelVO, CallFunc_HasMatchingGameplayTag_ReturnValue) == 0x000030, "Member 'BP_PlayerPawn_NonParticipant_C_PlayAlertLevelVO::CallFunc_HasMatchingGameplayTag_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlayerPawn_NonParticipant_C_PlayAlertLevelVO, CallFunc_IsDead_ReturnValue) == 0x000031, "Member 'BP_PlayerPawn_NonParticipant_C_PlayAlertLevelVO::CallFunc_IsDead_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlayerPawn_NonParticipant_C_PlayAlertLevelVO, Temp_byte_Variable_3) == 0x000032, "Member 'BP_PlayerPawn_NonParticipant_C_PlayAlertLevelVO::Temp_byte_Variable_3' has a wrong offset!");
static_assert(offsetof(BP_PlayerPawn_NonParticipant_C_PlayAlertLevelVO, CallFunc_BooleanOR_ReturnValue_1) == 0x000033, "Member 'BP_PlayerPawn_NonParticipant_C_PlayAlertLevelVO::CallFunc_BooleanOR_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_PlayerPawn_NonParticipant_C_PlayAlertLevelVO, CallFunc_BooleanOR_ReturnValue_2) == 0x000034, "Member 'BP_PlayerPawn_NonParticipant_C_PlayAlertLevelVO::CallFunc_BooleanOR_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_PlayerPawn_NonParticipant_C_PlayAlertLevelVO, Temp_bool_Variable_18) == 0x000035, "Member 'BP_PlayerPawn_NonParticipant_C_PlayAlertLevelVO::Temp_bool_Variable_18' has a wrong offset!");
static_assert(offsetof(BP_PlayerPawn_NonParticipant_C_PlayAlertLevelVO, Temp_bool_Variable_19) == 0x000036, "Member 'BP_PlayerPawn_NonParticipant_C_PlayAlertLevelVO::Temp_bool_Variable_19' has a wrong offset!");
static_assert(offsetof(BP_PlayerPawn_NonParticipant_C_PlayAlertLevelVO, CallFunc_PlayVoiceComponentSoundByTag_AudioComponent) == 0x000038, "Member 'BP_PlayerPawn_NonParticipant_C_PlayAlertLevelVO::CallFunc_PlayVoiceComponentSoundByTag_AudioComponent' has a wrong offset!");
static_assert(offsetof(BP_PlayerPawn_NonParticipant_C_PlayAlertLevelVO, CallFunc_PlayVoiceComponentSoundByTag_AudioComponent_1) == 0x000040, "Member 'BP_PlayerPawn_NonParticipant_C_PlayAlertLevelVO::CallFunc_PlayVoiceComponentSoundByTag_AudioComponent_1' has a wrong offset!");
static_assert(offsetof(BP_PlayerPawn_NonParticipant_C_PlayAlertLevelVO, K2Node_Select_Default_3) == 0x000048, "Member 'BP_PlayerPawn_NonParticipant_C_PlayAlertLevelVO::K2Node_Select_Default_3' has a wrong offset!");
static_assert(offsetof(BP_PlayerPawn_NonParticipant_C_PlayAlertLevelVO, CallFunc_PlayVoiceComponentSoundByTag_AudioComponent_2) == 0x000050, "Member 'BP_PlayerPawn_NonParticipant_C_PlayAlertLevelVO::CallFunc_PlayVoiceComponentSoundByTag_AudioComponent_2' has a wrong offset!");
static_assert(offsetof(BP_PlayerPawn_NonParticipant_C_PlayAlertLevelVO, CallFunc_PlayVoiceComponentSoundByTag_AudioComponent_3) == 0x000058, "Member 'BP_PlayerPawn_NonParticipant_C_PlayAlertLevelVO::CallFunc_PlayVoiceComponentSoundByTag_AudioComponent_3' has a wrong offset!");

struct BP_PlayerPawn_NonParticipant_C_PlayVoiceComponentSoundByTag final
{
public:
	struct FGameplayTag                           SoundBankTag;
	uint8                                         Pad_4[0x4];
	class UAudioComponent*                        AudioComponent;
	class UNPC_VoiceComponent_C*                  FoundVoiceComponent;
	class UAudioComponent*                        Temp_object_Variable;
	bool                                          CallFunc_EqualEqual_GameplayTag_ReturnValue;
	bool                                          CallFunc_EqualEqual_GameplayTag_ReturnValue_1;
	bool                                          CallFunc_BooleanOR_ReturnValue;
	bool                                          CallFunc_IsValid_ReturnValue;
	bool                                          CallFunc_IsValid_ReturnValue_1;
	bool                                          CallFunc_IsDedicatedServer_ReturnValue;
	bool                                          Temp_bool_Variable;
	uint8                                         Pad_27[0x1];
	class UNPC_VoiceComponent_C*                  CallFunc_GetComponentByClass_ReturnValue;
	class UQuartzSubsystem*                       CallFunc_GetWorldSubsystem_ReturnValue;
	TDelegate<void(EQuartzCommandDelegateSubType EventType, class FName Name)> Temp_delegate_Variable;
	uint8                                         Pad_44[0x4];
	class UQuartzClockHandle*                     CallFunc_GetHandleForClock_ReturnValue;
	bool                                          CallFunc_IsValid_ReturnValue_2;
	uint8                                         Pad_51[0x7];
	class UAudioComponent*                        K2Node_Select_Default;
	bool                                          CallFunc_PlayVoiceLine_Success;
};
static_assert(alignof(BP_PlayerPawn_NonParticipant_C_PlayVoiceComponentSoundByTag) == 0x000008, "Wrong alignment on BP_PlayerPawn_NonParticipant_C_PlayVoiceComponentSoundByTag");
static_assert(sizeof(BP_PlayerPawn_NonParticipant_C_PlayVoiceComponentSoundByTag) == 0x000068, "Wrong size on BP_PlayerPawn_NonParticipant_C_PlayVoiceComponentSoundByTag");
static_assert(offsetof(BP_PlayerPawn_NonParticipant_C_PlayVoiceComponentSoundByTag, SoundBankTag) == 0x000000, "Member 'BP_PlayerPawn_NonParticipant_C_PlayVoiceComponentSoundByTag::SoundBankTag' has a wrong offset!");
static_assert(offsetof(BP_PlayerPawn_NonParticipant_C_PlayVoiceComponentSoundByTag, AudioComponent) == 0x000008, "Member 'BP_PlayerPawn_NonParticipant_C_PlayVoiceComponentSoundByTag::AudioComponent' has a wrong offset!");
static_assert(offsetof(BP_PlayerPawn_NonParticipant_C_PlayVoiceComponentSoundByTag, FoundVoiceComponent) == 0x000010, "Member 'BP_PlayerPawn_NonParticipant_C_PlayVoiceComponentSoundByTag::FoundVoiceComponent' has a wrong offset!");
static_assert(offsetof(BP_PlayerPawn_NonParticipant_C_PlayVoiceComponentSoundByTag, Temp_object_Variable) == 0x000018, "Member 'BP_PlayerPawn_NonParticipant_C_PlayVoiceComponentSoundByTag::Temp_object_Variable' has a wrong offset!");
static_assert(offsetof(BP_PlayerPawn_NonParticipant_C_PlayVoiceComponentSoundByTag, CallFunc_EqualEqual_GameplayTag_ReturnValue) == 0x000020, "Member 'BP_PlayerPawn_NonParticipant_C_PlayVoiceComponentSoundByTag::CallFunc_EqualEqual_GameplayTag_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlayerPawn_NonParticipant_C_PlayVoiceComponentSoundByTag, CallFunc_EqualEqual_GameplayTag_ReturnValue_1) == 0x000021, "Member 'BP_PlayerPawn_NonParticipant_C_PlayVoiceComponentSoundByTag::CallFunc_EqualEqual_GameplayTag_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_PlayerPawn_NonParticipant_C_PlayVoiceComponentSoundByTag, CallFunc_BooleanOR_ReturnValue) == 0x000022, "Member 'BP_PlayerPawn_NonParticipant_C_PlayVoiceComponentSoundByTag::CallFunc_BooleanOR_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlayerPawn_NonParticipant_C_PlayVoiceComponentSoundByTag, CallFunc_IsValid_ReturnValue) == 0x000023, "Member 'BP_PlayerPawn_NonParticipant_C_PlayVoiceComponentSoundByTag::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlayerPawn_NonParticipant_C_PlayVoiceComponentSoundByTag, CallFunc_IsValid_ReturnValue_1) == 0x000024, "Member 'BP_PlayerPawn_NonParticipant_C_PlayVoiceComponentSoundByTag::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_PlayerPawn_NonParticipant_C_PlayVoiceComponentSoundByTag, CallFunc_IsDedicatedServer_ReturnValue) == 0x000025, "Member 'BP_PlayerPawn_NonParticipant_C_PlayVoiceComponentSoundByTag::CallFunc_IsDedicatedServer_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlayerPawn_NonParticipant_C_PlayVoiceComponentSoundByTag, Temp_bool_Variable) == 0x000026, "Member 'BP_PlayerPawn_NonParticipant_C_PlayVoiceComponentSoundByTag::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(BP_PlayerPawn_NonParticipant_C_PlayVoiceComponentSoundByTag, CallFunc_GetComponentByClass_ReturnValue) == 0x000028, "Member 'BP_PlayerPawn_NonParticipant_C_PlayVoiceComponentSoundByTag::CallFunc_GetComponentByClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlayerPawn_NonParticipant_C_PlayVoiceComponentSoundByTag, CallFunc_GetWorldSubsystem_ReturnValue) == 0x000030, "Member 'BP_PlayerPawn_NonParticipant_C_PlayVoiceComponentSoundByTag::CallFunc_GetWorldSubsystem_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlayerPawn_NonParticipant_C_PlayVoiceComponentSoundByTag, Temp_delegate_Variable) == 0x000038, "Member 'BP_PlayerPawn_NonParticipant_C_PlayVoiceComponentSoundByTag::Temp_delegate_Variable' has a wrong offset!");
static_assert(offsetof(BP_PlayerPawn_NonParticipant_C_PlayVoiceComponentSoundByTag, CallFunc_GetHandleForClock_ReturnValue) == 0x000048, "Member 'BP_PlayerPawn_NonParticipant_C_PlayVoiceComponentSoundByTag::CallFunc_GetHandleForClock_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlayerPawn_NonParticipant_C_PlayVoiceComponentSoundByTag, CallFunc_IsValid_ReturnValue_2) == 0x000050, "Member 'BP_PlayerPawn_NonParticipant_C_PlayVoiceComponentSoundByTag::CallFunc_IsValid_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_PlayerPawn_NonParticipant_C_PlayVoiceComponentSoundByTag, K2Node_Select_Default) == 0x000058, "Member 'BP_PlayerPawn_NonParticipant_C_PlayVoiceComponentSoundByTag::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(BP_PlayerPawn_NonParticipant_C_PlayVoiceComponentSoundByTag, CallFunc_PlayVoiceLine_Success) == 0x000060, "Member 'BP_PlayerPawn_NonParticipant_C_PlayVoiceComponentSoundByTag::CallFunc_PlayVoiceLine_Success' has a wrong offset!");

struct BP_PlayerPawn_NonParticipant_C_PlayVoiceSoundByTag final
{
public:
	struct FGameplayTag                           SoundBankTag;
};
static_assert(alignof(BP_PlayerPawn_NonParticipant_C_PlayVoiceSoundByTag) == 0x000004, "Wrong alignment on BP_PlayerPawn_NonParticipant_C_PlayVoiceSoundByTag");
static_assert(sizeof(BP_PlayerPawn_NonParticipant_C_PlayVoiceSoundByTag) == 0x000004, "Wrong size on BP_PlayerPawn_NonParticipant_C_PlayVoiceSoundByTag");
static_assert(offsetof(BP_PlayerPawn_NonParticipant_C_PlayVoiceSoundByTag, SoundBankTag) == 0x000000, "Member 'BP_PlayerPawn_NonParticipant_C_PlayVoiceSoundByTag::SoundBankTag' has a wrong offset!");

struct BP_PlayerPawn_NonParticipant_C_ReceiveEndPlay final
{
public:
	EEndPlayReason                                EndPlayReason;
};
static_assert(alignof(BP_PlayerPawn_NonParticipant_C_ReceiveEndPlay) == 0x000001, "Wrong alignment on BP_PlayerPawn_NonParticipant_C_ReceiveEndPlay");
static_assert(sizeof(BP_PlayerPawn_NonParticipant_C_ReceiveEndPlay) == 0x000001, "Wrong size on BP_PlayerPawn_NonParticipant_C_ReceiveEndPlay");
static_assert(offsetof(BP_PlayerPawn_NonParticipant_C_ReceiveEndPlay, EndPlayReason) == 0x000000, "Member 'BP_PlayerPawn_NonParticipant_C_ReceiveEndPlay::EndPlayReason' has a wrong offset!");

struct BP_PlayerPawn_NonParticipant_C_SetAlertedStateGameplayCue final
{
public:
	bool                                          Alerted;
	bool                                          Combat;
	uint8                                         Pad_2[0x2];
	int32                                         CallFunc_SelectInt_ReturnValue;
	struct FGameplayCueParameters                 CallFunc_MakeGameplayCueParameters_ReturnValue;
};
static_assert(alignof(BP_PlayerPawn_NonParticipant_C_SetAlertedStateGameplayCue) == 0x000008, "Wrong alignment on BP_PlayerPawn_NonParticipant_C_SetAlertedStateGameplayCue");
static_assert(sizeof(BP_PlayerPawn_NonParticipant_C_SetAlertedStateGameplayCue) == 0x0000D8, "Wrong size on BP_PlayerPawn_NonParticipant_C_SetAlertedStateGameplayCue");
static_assert(offsetof(BP_PlayerPawn_NonParticipant_C_SetAlertedStateGameplayCue, Alerted) == 0x000000, "Member 'BP_PlayerPawn_NonParticipant_C_SetAlertedStateGameplayCue::Alerted' has a wrong offset!");
static_assert(offsetof(BP_PlayerPawn_NonParticipant_C_SetAlertedStateGameplayCue, Combat) == 0x000001, "Member 'BP_PlayerPawn_NonParticipant_C_SetAlertedStateGameplayCue::Combat' has a wrong offset!");
static_assert(offsetof(BP_PlayerPawn_NonParticipant_C_SetAlertedStateGameplayCue, CallFunc_SelectInt_ReturnValue) == 0x000004, "Member 'BP_PlayerPawn_NonParticipant_C_SetAlertedStateGameplayCue::CallFunc_SelectInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlayerPawn_NonParticipant_C_SetAlertedStateGameplayCue, CallFunc_MakeGameplayCueParameters_ReturnValue) == 0x000008, "Member 'BP_PlayerPawn_NonParticipant_C_SetAlertedStateGameplayCue::CallFunc_MakeGameplayCueParameters_ReturnValue' has a wrong offset!");

struct BP_PlayerPawn_NonParticipant_C_SetChallenger final
{
public:
	class AFortPlayerPawn*                        Challenger_0;
};
static_assert(alignof(BP_PlayerPawn_NonParticipant_C_SetChallenger) == 0x000008, "Wrong alignment on BP_PlayerPawn_NonParticipant_C_SetChallenger");
static_assert(sizeof(BP_PlayerPawn_NonParticipant_C_SetChallenger) == 0x000008, "Wrong size on BP_PlayerPawn_NonParticipant_C_SetChallenger");
static_assert(offsetof(BP_PlayerPawn_NonParticipant_C_SetChallenger, Challenger_0) == 0x000000, "Member 'BP_PlayerPawn_NonParticipant_C_SetChallenger::Challenger_0' has a wrong offset!");

struct BP_PlayerPawn_NonParticipant_C_SetDataTrackerActorStateFromAlertLevel final
{
public:
	EAlertLevel                                   AlertLevel_0;
	EAlertLevel                                   Temp_byte_Variable;
	uint8                                         Pad_2[0x2];
	struct FGameplayTag                           Temp_struct_Variable;
	bool                                          CallFunc_IsDedicatedServer_ReturnValue;
	bool                                          CallFunc_IsValid_ReturnValue;
	uint8                                         Pad_A[0x2];
	struct FGameplayTag                           K2Node_Select_Default;
};
static_assert(alignof(BP_PlayerPawn_NonParticipant_C_SetDataTrackerActorStateFromAlertLevel) == 0x000004, "Wrong alignment on BP_PlayerPawn_NonParticipant_C_SetDataTrackerActorStateFromAlertLevel");
static_assert(sizeof(BP_PlayerPawn_NonParticipant_C_SetDataTrackerActorStateFromAlertLevel) == 0x000010, "Wrong size on BP_PlayerPawn_NonParticipant_C_SetDataTrackerActorStateFromAlertLevel");
static_assert(offsetof(BP_PlayerPawn_NonParticipant_C_SetDataTrackerActorStateFromAlertLevel, AlertLevel_0) == 0x000000, "Member 'BP_PlayerPawn_NonParticipant_C_SetDataTrackerActorStateFromAlertLevel::AlertLevel_0' has a wrong offset!");
static_assert(offsetof(BP_PlayerPawn_NonParticipant_C_SetDataTrackerActorStateFromAlertLevel, Temp_byte_Variable) == 0x000001, "Member 'BP_PlayerPawn_NonParticipant_C_SetDataTrackerActorStateFromAlertLevel::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(BP_PlayerPawn_NonParticipant_C_SetDataTrackerActorStateFromAlertLevel, Temp_struct_Variable) == 0x000004, "Member 'BP_PlayerPawn_NonParticipant_C_SetDataTrackerActorStateFromAlertLevel::Temp_struct_Variable' has a wrong offset!");
static_assert(offsetof(BP_PlayerPawn_NonParticipant_C_SetDataTrackerActorStateFromAlertLevel, CallFunc_IsDedicatedServer_ReturnValue) == 0x000008, "Member 'BP_PlayerPawn_NonParticipant_C_SetDataTrackerActorStateFromAlertLevel::CallFunc_IsDedicatedServer_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlayerPawn_NonParticipant_C_SetDataTrackerActorStateFromAlertLevel, CallFunc_IsValid_ReturnValue) == 0x000009, "Member 'BP_PlayerPawn_NonParticipant_C_SetDataTrackerActorStateFromAlertLevel::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlayerPawn_NonParticipant_C_SetDataTrackerActorStateFromAlertLevel, K2Node_Select_Default) == 0x00000C, "Member 'BP_PlayerPawn_NonParticipant_C_SetDataTrackerActorStateFromAlertLevel::K2Node_Select_Default' has a wrong offset!");

struct BP_PlayerPawn_NonParticipant_C_SetupLootTierNameWithWeapon final
{
public:
	bool                                          Temp_bool_Variable;
	bool                                          Temp_bool_Variable_1;
	bool                                          Temp_bool_Variable_2;
	bool                                          Temp_bool_Variable_3;
	bool                                          Temp_bool_Variable_4;
	uint8                                         Pad_5[0x3];
	class UFortWorldItemDefinition*               CallFunc_GetWeaponDataAmmoWorldItemDefinition_ReturnValue;
	class AB_Athena_Pickaxe_Generic_C*            K2Node_DynamicCast_AsB_Athena_Pickaxe_Generic;
	bool                                          K2Node_DynamicCast_bSuccess;
	bool                                          CallFunc_IsValid_ReturnValue;
	bool                                          CallFunc_HasTag_ReturnValue;
	bool                                          CallFunc_HasTag_ReturnValue_1;
	class FName                                   K2Node_Select_Default;
	bool                                          CallFunc_HasTag_ReturnValue_2;
	uint8                                         Pad_21[0x3];
	class FName                                   K2Node_Select_Default_1;
	bool                                          CallFunc_HasTag_ReturnValue_3;
	uint8                                         Pad_29[0x3];
	class FName                                   K2Node_Select_Default_2;
	bool                                          CallFunc_HasTag_ReturnValue_4;
	uint8                                         Pad_31[0x3];
	class FName                                   K2Node_Select_Default_3;
	class FName                                   K2Node_Select_Default_4;
};
static_assert(alignof(BP_PlayerPawn_NonParticipant_C_SetupLootTierNameWithWeapon) == 0x000008, "Wrong alignment on BP_PlayerPawn_NonParticipant_C_SetupLootTierNameWithWeapon");
static_assert(sizeof(BP_PlayerPawn_NonParticipant_C_SetupLootTierNameWithWeapon) == 0x000040, "Wrong size on BP_PlayerPawn_NonParticipant_C_SetupLootTierNameWithWeapon");
static_assert(offsetof(BP_PlayerPawn_NonParticipant_C_SetupLootTierNameWithWeapon, Temp_bool_Variable) == 0x000000, "Member 'BP_PlayerPawn_NonParticipant_C_SetupLootTierNameWithWeapon::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(BP_PlayerPawn_NonParticipant_C_SetupLootTierNameWithWeapon, Temp_bool_Variable_1) == 0x000001, "Member 'BP_PlayerPawn_NonParticipant_C_SetupLootTierNameWithWeapon::Temp_bool_Variable_1' has a wrong offset!");
static_assert(offsetof(BP_PlayerPawn_NonParticipant_C_SetupLootTierNameWithWeapon, Temp_bool_Variable_2) == 0x000002, "Member 'BP_PlayerPawn_NonParticipant_C_SetupLootTierNameWithWeapon::Temp_bool_Variable_2' has a wrong offset!");
static_assert(offsetof(BP_PlayerPawn_NonParticipant_C_SetupLootTierNameWithWeapon, Temp_bool_Variable_3) == 0x000003, "Member 'BP_PlayerPawn_NonParticipant_C_SetupLootTierNameWithWeapon::Temp_bool_Variable_3' has a wrong offset!");
static_assert(offsetof(BP_PlayerPawn_NonParticipant_C_SetupLootTierNameWithWeapon, Temp_bool_Variable_4) == 0x000004, "Member 'BP_PlayerPawn_NonParticipant_C_SetupLootTierNameWithWeapon::Temp_bool_Variable_4' has a wrong offset!");
static_assert(offsetof(BP_PlayerPawn_NonParticipant_C_SetupLootTierNameWithWeapon, CallFunc_GetWeaponDataAmmoWorldItemDefinition_ReturnValue) == 0x000008, "Member 'BP_PlayerPawn_NonParticipant_C_SetupLootTierNameWithWeapon::CallFunc_GetWeaponDataAmmoWorldItemDefinition_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlayerPawn_NonParticipant_C_SetupLootTierNameWithWeapon, K2Node_DynamicCast_AsB_Athena_Pickaxe_Generic) == 0x000010, "Member 'BP_PlayerPawn_NonParticipant_C_SetupLootTierNameWithWeapon::K2Node_DynamicCast_AsB_Athena_Pickaxe_Generic' has a wrong offset!");
static_assert(offsetof(BP_PlayerPawn_NonParticipant_C_SetupLootTierNameWithWeapon, K2Node_DynamicCast_bSuccess) == 0x000018, "Member 'BP_PlayerPawn_NonParticipant_C_SetupLootTierNameWithWeapon::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BP_PlayerPawn_NonParticipant_C_SetupLootTierNameWithWeapon, CallFunc_IsValid_ReturnValue) == 0x000019, "Member 'BP_PlayerPawn_NonParticipant_C_SetupLootTierNameWithWeapon::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlayerPawn_NonParticipant_C_SetupLootTierNameWithWeapon, CallFunc_HasTag_ReturnValue) == 0x00001A, "Member 'BP_PlayerPawn_NonParticipant_C_SetupLootTierNameWithWeapon::CallFunc_HasTag_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlayerPawn_NonParticipant_C_SetupLootTierNameWithWeapon, CallFunc_HasTag_ReturnValue_1) == 0x00001B, "Member 'BP_PlayerPawn_NonParticipant_C_SetupLootTierNameWithWeapon::CallFunc_HasTag_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_PlayerPawn_NonParticipant_C_SetupLootTierNameWithWeapon, K2Node_Select_Default) == 0x00001C, "Member 'BP_PlayerPawn_NonParticipant_C_SetupLootTierNameWithWeapon::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(BP_PlayerPawn_NonParticipant_C_SetupLootTierNameWithWeapon, CallFunc_HasTag_ReturnValue_2) == 0x000020, "Member 'BP_PlayerPawn_NonParticipant_C_SetupLootTierNameWithWeapon::CallFunc_HasTag_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_PlayerPawn_NonParticipant_C_SetupLootTierNameWithWeapon, K2Node_Select_Default_1) == 0x000024, "Member 'BP_PlayerPawn_NonParticipant_C_SetupLootTierNameWithWeapon::K2Node_Select_Default_1' has a wrong offset!");
static_assert(offsetof(BP_PlayerPawn_NonParticipant_C_SetupLootTierNameWithWeapon, CallFunc_HasTag_ReturnValue_3) == 0x000028, "Member 'BP_PlayerPawn_NonParticipant_C_SetupLootTierNameWithWeapon::CallFunc_HasTag_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(BP_PlayerPawn_NonParticipant_C_SetupLootTierNameWithWeapon, K2Node_Select_Default_2) == 0x00002C, "Member 'BP_PlayerPawn_NonParticipant_C_SetupLootTierNameWithWeapon::K2Node_Select_Default_2' has a wrong offset!");
static_assert(offsetof(BP_PlayerPawn_NonParticipant_C_SetupLootTierNameWithWeapon, CallFunc_HasTag_ReturnValue_4) == 0x000030, "Member 'BP_PlayerPawn_NonParticipant_C_SetupLootTierNameWithWeapon::CallFunc_HasTag_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(BP_PlayerPawn_NonParticipant_C_SetupLootTierNameWithWeapon, K2Node_Select_Default_3) == 0x000034, "Member 'BP_PlayerPawn_NonParticipant_C_SetupLootTierNameWithWeapon::K2Node_Select_Default_3' has a wrong offset!");
static_assert(offsetof(BP_PlayerPawn_NonParticipant_C_SetupLootTierNameWithWeapon, K2Node_Select_Default_4) == 0x000038, "Member 'BP_PlayerPawn_NonParticipant_C_SetupLootTierNameWithWeapon::K2Node_Select_Default_4' has a wrong offset!");

struct BP_PlayerPawn_NonParticipant_C_SoundLibrarySetup final
{
public:
	bool                                          IsAdding;
	uint8                                         Pad_1[0x7];
	class USoundLibrarySubsystem*                 CallFunc_GetWorldSubsystem_ReturnValue;
	bool                                          CallFunc_IsValid_ReturnValue;
	bool                                          CallFunc_IsValid_ReturnValue_1;
	bool                                          CallFunc_IsValid_ReturnValue_2;
};
static_assert(alignof(BP_PlayerPawn_NonParticipant_C_SoundLibrarySetup) == 0x000008, "Wrong alignment on BP_PlayerPawn_NonParticipant_C_SoundLibrarySetup");
static_assert(sizeof(BP_PlayerPawn_NonParticipant_C_SoundLibrarySetup) == 0x000018, "Wrong size on BP_PlayerPawn_NonParticipant_C_SoundLibrarySetup");
static_assert(offsetof(BP_PlayerPawn_NonParticipant_C_SoundLibrarySetup, IsAdding) == 0x000000, "Member 'BP_PlayerPawn_NonParticipant_C_SoundLibrarySetup::IsAdding' has a wrong offset!");
static_assert(offsetof(BP_PlayerPawn_NonParticipant_C_SoundLibrarySetup, CallFunc_GetWorldSubsystem_ReturnValue) == 0x000008, "Member 'BP_PlayerPawn_NonParticipant_C_SoundLibrarySetup::CallFunc_GetWorldSubsystem_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlayerPawn_NonParticipant_C_SoundLibrarySetup, CallFunc_IsValid_ReturnValue) == 0x000010, "Member 'BP_PlayerPawn_NonParticipant_C_SoundLibrarySetup::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlayerPawn_NonParticipant_C_SoundLibrarySetup, CallFunc_IsValid_ReturnValue_1) == 0x000011, "Member 'BP_PlayerPawn_NonParticipant_C_SoundLibrarySetup::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_PlayerPawn_NonParticipant_C_SoundLibrarySetup, CallFunc_IsValid_ReturnValue_2) == 0x000012, "Member 'BP_PlayerPawn_NonParticipant_C_SoundLibrarySetup::CallFunc_IsValid_ReturnValue_2' has a wrong offset!");

struct BP_PlayerPawn_NonParticipant_C_UpdateAlertStateVehicleCheck final
{
public:
	bool                                          CallFunc_IsInVehicle_ReturnValue;
	uint8                                         Pad_1[0x7];
	TScriptInterface<class IFortVehicleInterface> CallFunc_GetVehicleUInterface_ReturnValue;
	struct FGameplayTagContainer                  CallFunc_GetVehicleTags_ReturnValue;
	class UObject*                                CallFunc_Conv_InterfaceToObject_ReturnValue;
	bool                                          CallFunc_HasTag_ReturnValue;
	bool                                          CallFunc_IsValid_ReturnValue;
	bool                                          CallFunc_Not_PreBool_ReturnValue;
};
static_assert(alignof(BP_PlayerPawn_NonParticipant_C_UpdateAlertStateVehicleCheck) == 0x000008, "Wrong alignment on BP_PlayerPawn_NonParticipant_C_UpdateAlertStateVehicleCheck");
static_assert(sizeof(BP_PlayerPawn_NonParticipant_C_UpdateAlertStateVehicleCheck) == 0x000048, "Wrong size on BP_PlayerPawn_NonParticipant_C_UpdateAlertStateVehicleCheck");
static_assert(offsetof(BP_PlayerPawn_NonParticipant_C_UpdateAlertStateVehicleCheck, CallFunc_IsInVehicle_ReturnValue) == 0x000000, "Member 'BP_PlayerPawn_NonParticipant_C_UpdateAlertStateVehicleCheck::CallFunc_IsInVehicle_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlayerPawn_NonParticipant_C_UpdateAlertStateVehicleCheck, CallFunc_GetVehicleUInterface_ReturnValue) == 0x000008, "Member 'BP_PlayerPawn_NonParticipant_C_UpdateAlertStateVehicleCheck::CallFunc_GetVehicleUInterface_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlayerPawn_NonParticipant_C_UpdateAlertStateVehicleCheck, CallFunc_GetVehicleTags_ReturnValue) == 0x000018, "Member 'BP_PlayerPawn_NonParticipant_C_UpdateAlertStateVehicleCheck::CallFunc_GetVehicleTags_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlayerPawn_NonParticipant_C_UpdateAlertStateVehicleCheck, CallFunc_Conv_InterfaceToObject_ReturnValue) == 0x000038, "Member 'BP_PlayerPawn_NonParticipant_C_UpdateAlertStateVehicleCheck::CallFunc_Conv_InterfaceToObject_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlayerPawn_NonParticipant_C_UpdateAlertStateVehicleCheck, CallFunc_HasTag_ReturnValue) == 0x000040, "Member 'BP_PlayerPawn_NonParticipant_C_UpdateAlertStateVehicleCheck::CallFunc_HasTag_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlayerPawn_NonParticipant_C_UpdateAlertStateVehicleCheck, CallFunc_IsValid_ReturnValue) == 0x000041, "Member 'BP_PlayerPawn_NonParticipant_C_UpdateAlertStateVehicleCheck::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlayerPawn_NonParticipant_C_UpdateAlertStateVehicleCheck, CallFunc_Not_PreBool_ReturnValue) == 0x000042, "Member 'BP_PlayerPawn_NonParticipant_C_UpdateAlertStateVehicleCheck::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");

struct BP_PlayerPawn_NonParticipant_C_UpdatePatrolAnimSet final
{
public:
	class AFortWeapon*                            NewWeapon;
	class UFortPatrolAnimAsset*                   FoundAnimAsset;
	class UAnimInstance*                          CallFunc_GetAnimInstance_ReturnValue;
	bool                                          CallFunc_IsValid_ReturnValue;
	uint8                                         Pad_19[0x7];
	class UAnimInstance*                          CallFunc_GetLinkedAnimLayerInstanceByClass_ReturnValue;
	class UFortPatrolAnimLayer*                   K2Node_DynamicCast_AsFort_Patrol_Anim_Layer;
	bool                                          K2Node_DynamicCast_bSuccess;
	uint8                                         Pad_31[0x7];
	class UFortPatrolAnimAsset*                   CallFunc_GetPatrolAnimSetFromWeapon_ReturnValue;
	bool                                          CallFunc_IsValid_ReturnValue_1;
};
static_assert(alignof(BP_PlayerPawn_NonParticipant_C_UpdatePatrolAnimSet) == 0x000008, "Wrong alignment on BP_PlayerPawn_NonParticipant_C_UpdatePatrolAnimSet");
static_assert(sizeof(BP_PlayerPawn_NonParticipant_C_UpdatePatrolAnimSet) == 0x000048, "Wrong size on BP_PlayerPawn_NonParticipant_C_UpdatePatrolAnimSet");
static_assert(offsetof(BP_PlayerPawn_NonParticipant_C_UpdatePatrolAnimSet, NewWeapon) == 0x000000, "Member 'BP_PlayerPawn_NonParticipant_C_UpdatePatrolAnimSet::NewWeapon' has a wrong offset!");
static_assert(offsetof(BP_PlayerPawn_NonParticipant_C_UpdatePatrolAnimSet, FoundAnimAsset) == 0x000008, "Member 'BP_PlayerPawn_NonParticipant_C_UpdatePatrolAnimSet::FoundAnimAsset' has a wrong offset!");
static_assert(offsetof(BP_PlayerPawn_NonParticipant_C_UpdatePatrolAnimSet, CallFunc_GetAnimInstance_ReturnValue) == 0x000010, "Member 'BP_PlayerPawn_NonParticipant_C_UpdatePatrolAnimSet::CallFunc_GetAnimInstance_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlayerPawn_NonParticipant_C_UpdatePatrolAnimSet, CallFunc_IsValid_ReturnValue) == 0x000018, "Member 'BP_PlayerPawn_NonParticipant_C_UpdatePatrolAnimSet::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlayerPawn_NonParticipant_C_UpdatePatrolAnimSet, CallFunc_GetLinkedAnimLayerInstanceByClass_ReturnValue) == 0x000020, "Member 'BP_PlayerPawn_NonParticipant_C_UpdatePatrolAnimSet::CallFunc_GetLinkedAnimLayerInstanceByClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlayerPawn_NonParticipant_C_UpdatePatrolAnimSet, K2Node_DynamicCast_AsFort_Patrol_Anim_Layer) == 0x000028, "Member 'BP_PlayerPawn_NonParticipant_C_UpdatePatrolAnimSet::K2Node_DynamicCast_AsFort_Patrol_Anim_Layer' has a wrong offset!");
static_assert(offsetof(BP_PlayerPawn_NonParticipant_C_UpdatePatrolAnimSet, K2Node_DynamicCast_bSuccess) == 0x000030, "Member 'BP_PlayerPawn_NonParticipant_C_UpdatePatrolAnimSet::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BP_PlayerPawn_NonParticipant_C_UpdatePatrolAnimSet, CallFunc_GetPatrolAnimSetFromWeapon_ReturnValue) == 0x000038, "Member 'BP_PlayerPawn_NonParticipant_C_UpdatePatrolAnimSet::CallFunc_GetPatrolAnimSetFromWeapon_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlayerPawn_NonParticipant_C_UpdatePatrolAnimSet, CallFunc_IsValid_ReturnValue_1) == 0x000040, "Member 'BP_PlayerPawn_NonParticipant_C_UpdatePatrolAnimSet::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");

struct BP_PlayerPawn_NonParticipant_C_UserConstructionScript final
{
public:
	TArray<class UFortAIComponent_Voice*>         CallFunc_K2_GetComponentsByClass_ReturnValue;
	class UFortAIComponent_Voice*                 CallFunc_Array_Get_Item;
	int32                                         CallFunc_Array_Length_ReturnValue;
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue;
};
static_assert(alignof(BP_PlayerPawn_NonParticipant_C_UserConstructionScript) == 0x000008, "Wrong alignment on BP_PlayerPawn_NonParticipant_C_UserConstructionScript");
static_assert(sizeof(BP_PlayerPawn_NonParticipant_C_UserConstructionScript) == 0x000020, "Wrong size on BP_PlayerPawn_NonParticipant_C_UserConstructionScript");
static_assert(offsetof(BP_PlayerPawn_NonParticipant_C_UserConstructionScript, CallFunc_K2_GetComponentsByClass_ReturnValue) == 0x000000, "Member 'BP_PlayerPawn_NonParticipant_C_UserConstructionScript::CallFunc_K2_GetComponentsByClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlayerPawn_NonParticipant_C_UserConstructionScript, CallFunc_Array_Get_Item) == 0x000010, "Member 'BP_PlayerPawn_NonParticipant_C_UserConstructionScript::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(BP_PlayerPawn_NonParticipant_C_UserConstructionScript, CallFunc_Array_Length_ReturnValue) == 0x000018, "Member 'BP_PlayerPawn_NonParticipant_C_UserConstructionScript::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlayerPawn_NonParticipant_C_UserConstructionScript, CallFunc_EqualEqual_IntInt_ReturnValue) == 0x00001C, "Member 'BP_PlayerPawn_NonParticipant_C_UserConstructionScript::CallFunc_EqualEqual_IntInt_ReturnValue' has a wrong offset!");

struct BP_PlayerPawn_NonParticipant_C_GetIconPlacement final
{
public:
	const class AActor*                           SelfActor;
	const class AActor*                           ViewingActor;
	struct FVector                                OutLocation;
	struct FVector                                OutExtents;
	struct FVector                                CallFunc_GetIconPlacement_OutLocation;
	struct FVector                                CallFunc_GetIconPlacement_OutExtents;
	bool                                          CallFunc_IsValid_ReturnValue;
	bool                                          CallFunc_DoesSocketExist_ReturnValue;
	uint8                                         Pad_72[0x6];
	struct FVector                                CallFunc_GetSocketLocation_ReturnValue;
	bool                                          CallFunc_Not_PreBool_ReturnValue;
	uint8                                         Pad_91[0x7];
	struct FVector                                CallFunc_SelectVector_ReturnValue;
};
static_assert(alignof(BP_PlayerPawn_NonParticipant_C_GetIconPlacement) == 0x000008, "Wrong alignment on BP_PlayerPawn_NonParticipant_C_GetIconPlacement");
static_assert(sizeof(BP_PlayerPawn_NonParticipant_C_GetIconPlacement) == 0x0000B0, "Wrong size on BP_PlayerPawn_NonParticipant_C_GetIconPlacement");
static_assert(offsetof(BP_PlayerPawn_NonParticipant_C_GetIconPlacement, SelfActor) == 0x000000, "Member 'BP_PlayerPawn_NonParticipant_C_GetIconPlacement::SelfActor' has a wrong offset!");
static_assert(offsetof(BP_PlayerPawn_NonParticipant_C_GetIconPlacement, ViewingActor) == 0x000008, "Member 'BP_PlayerPawn_NonParticipant_C_GetIconPlacement::ViewingActor' has a wrong offset!");
static_assert(offsetof(BP_PlayerPawn_NonParticipant_C_GetIconPlacement, OutLocation) == 0x000010, "Member 'BP_PlayerPawn_NonParticipant_C_GetIconPlacement::OutLocation' has a wrong offset!");
static_assert(offsetof(BP_PlayerPawn_NonParticipant_C_GetIconPlacement, OutExtents) == 0x000028, "Member 'BP_PlayerPawn_NonParticipant_C_GetIconPlacement::OutExtents' has a wrong offset!");
static_assert(offsetof(BP_PlayerPawn_NonParticipant_C_GetIconPlacement, CallFunc_GetIconPlacement_OutLocation) == 0x000040, "Member 'BP_PlayerPawn_NonParticipant_C_GetIconPlacement::CallFunc_GetIconPlacement_OutLocation' has a wrong offset!");
static_assert(offsetof(BP_PlayerPawn_NonParticipant_C_GetIconPlacement, CallFunc_GetIconPlacement_OutExtents) == 0x000058, "Member 'BP_PlayerPawn_NonParticipant_C_GetIconPlacement::CallFunc_GetIconPlacement_OutExtents' has a wrong offset!");
static_assert(offsetof(BP_PlayerPawn_NonParticipant_C_GetIconPlacement, CallFunc_IsValid_ReturnValue) == 0x000070, "Member 'BP_PlayerPawn_NonParticipant_C_GetIconPlacement::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlayerPawn_NonParticipant_C_GetIconPlacement, CallFunc_DoesSocketExist_ReturnValue) == 0x000071, "Member 'BP_PlayerPawn_NonParticipant_C_GetIconPlacement::CallFunc_DoesSocketExist_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlayerPawn_NonParticipant_C_GetIconPlacement, CallFunc_GetSocketLocation_ReturnValue) == 0x000078, "Member 'BP_PlayerPawn_NonParticipant_C_GetIconPlacement::CallFunc_GetSocketLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlayerPawn_NonParticipant_C_GetIconPlacement, CallFunc_Not_PreBool_ReturnValue) == 0x000090, "Member 'BP_PlayerPawn_NonParticipant_C_GetIconPlacement::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlayerPawn_NonParticipant_C_GetIconPlacement, CallFunc_SelectVector_ReturnValue) == 0x000098, "Member 'BP_PlayerPawn_NonParticipant_C_GetIconPlacement::CallFunc_SelectVector_ReturnValue' has a wrong offset!");

}
