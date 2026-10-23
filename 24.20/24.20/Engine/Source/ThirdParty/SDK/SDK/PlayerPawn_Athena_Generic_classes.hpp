#pragma once

#include "Basic.hpp"

#include "GameplayTags_structs.hpp"
#include "Engine_structs.hpp"
#include "PlayerPawn_Athena_Generic_Parent_classes.hpp"
#include "CoreUObject_structs.hpp"
#include "GameplayAbilities_structs.hpp"
#include "FortniteGame_structs.hpp"

namespace SDK
{

#pragma pack(push, 0x1)
class alignas(0x10) APlayerPawn_Athena_Generic_C : public APlayerPawn_Athena_Generic_Parent_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_PlayerPawn_Athena_Generic_C;
	class UParticleSystemComponent*               Effect_WaterInteraction_FX;
	class UParticleSystemComponent*               AnimTrailPS;
	bool                                          IsInWater;
	uint8                                         Pad_54A9[0x7];
	struct FRotator                               RunWalkParticleRotation;
	int32                                         WaterCounter;
	uint8                                         Pad_54CC[0x4];
	double                                        Tick_Delta_Seconds;
	class USoundBase*                             Sound_Shield_Impact;
	class USoundBase*                             Sound_Shield_Destroyed;
	class USoundBase*                             Sound_Shield_Destroyed_1P;
	class USoundBase*                             Sound_Shield_FullyCharged;
	class USoundBase*                             Sound_Shield_StartRecharge;
	bool                                          BodyValid;
	bool                                          BackpackValid;
	bool                                          HatValid;
	bool                                          FaceValid;
	bool                                          CharmValid;
	bool                                          HeadValid;
	uint8                                         Pad_5506[0x2];
	TArray<class UMaterialInstanceDynamic*>       TempArray;
	class USceneComponent*                        Sound_Player_Hit;
	class UClass*                                 SpeechBubbleWidgetClass;
	class FText                                   LastSpeechText;
	bool                                          UseAnimTrailsNotifies;
	uint8                                         Pad_5541[0x7];
	double                                        Time_when_you_ll_be_able_to_splash_again;
	class AActor*                                 CurrentWaterMeshActor;
	struct FHitResult                             WaterTraceHitLocation;
	struct FVector                                StableVelocityVector;
	class UParticleSystem*                        PlayerRunTemplate_Ground;
	class UParticleSystem*                        PlayerWalkTemplate_Ground;
	class UParticleSystem*                        PlayerRunTemplate_Water;
	class UParticleSystem*                        PlayerWalkTemplate_Water;
	class USkeletalMesh*                          Pawn_Charm_Skeletal_Mesh;
	class UParticleSystemComponent*               AnimTrailsPS_Ref;
	class UMaterialInterface*                     WeaponMaterialOverride;
	bool                                          TickWaterLevel;
	uint8                                         Pad_5689[0x7];
	class UTextureRenderTarget2D*                 WetnessDepthTexture;
	class UMaterialInstanceDynamic*               WaterLevelMID;
	class UMaterialInstanceDynamic*               WaterDecayMID;
	bool                                          Was_RTT_Enabled_Var_Set;
	bool                                          Is_RTT_Enabled;
	uint8                                         Pad_56AA[0x6];
	double                                        StartingMinCapsuleShadowVis;
	double                                        InstigatorCheckDistanceSqrd;
	double                                        SlideDustActivateSpeed;
	bool                                          CanSpawnSlideKickupFX_;
	uint8                                         Pad_56C9[0x7];
	class UParticleSystem*                        Effect_Player_ShieldActivate;
	class UParticleSystem*                        Effect_PLayer_ShieldBreak;
	bool                                          GhostMode;
	uint8                                         Pad_56E1[0x7];
	class UFXSystemComponent*                     OverrideAnimTrail;
	TMulticastInlineDelegate<void(bool bActive)>  AnimNotify_Begin;
	TMulticastInlineDelegate<void()>              AnimNotify_End;
	class USoundBase*                             Sound_Shield_Destroyed_2D;
	class USoundBase*                             Sound_Shield_Destroyed_Crit_2D;
	class UFXSystemComponent*                     AnimTrailFX;
	TMulticastInlineDelegate<void(const struct FGameplayTagContainer& Damage_Tags, const struct FHitResult& Hit_Info, class AFortPawn* Instigated_By, class AActor* Damage_Causer)> PlayDamageEffect;
	class FName                                   Component_Tag_AnimTrailFX_Const;
	uint8                                         Pad_573C[0x4];
	double                                        ReppedCapsuleExtraHalfHeight;
	double                                        CachedCapsuleHalfHeight;
	TMulticastInlineDelegate<void()>              OnCharacterPartsMIDInitialized;
	TMulticastInlineDelegate<void(bool IsOverShield)> OnShieldBreak;
	class USkeletalMeshComponent*                 NullPart_Mesh;

public:
	void AnimTrailsDisable();
	void AnimTrailsNotify(bool bActive);
	void AnimTrailsSetup(class UParticleSystem* ParticleSystemReference, class UNiagaraSystem* NiagaraSystemReference, class FName FirstSocketName, class FName SecondSocketName, float Width, class UFXSystemComponent* OverrideParticleComp, class FName OverideFirstSocketName, class FName OverideSecondSocketName);
	void Are_the_wind_and_water_RTT_passes_enabled(bool* NewParam);
	void BindOnDestroyed();
	void CharacterDestroyed(class AActor* DestroyedActor);
	void Create_and_Duplicate_Effect_Poseable_Skeletal_Mesh(class UMaterialInterface* Material_to_Apply, TArray<class UMaterialInstanceDynamic*>& Empty_MID_Array, int32 TranslucentSortPriority, class UPoseableMeshComponent*& PoseableMesh, EFortCustomPartType CustomBodyType, class USkeletalMeshComponent* PartMesh);
	void Create_and_Duplicate_Effect_Skeletal_Meshes_Parent(class USkeletalMeshComponent*& DuplicatedSkeletalMeshComponent, class UMaterialInterface* Material_to_Apply, TArray<class UMaterialInstanceDynamic*>& Empty_MID_Array, int32 TranslucentSortPriority, class USkeletalMeshComponent* MeshPart, EFortCustomPartType CustomBodyType);
	void DisableWaterLevelTick();
	void ExecuteUbergraph_PlayerPawn_Athena_Generic(int32 EntryPoint);
	void Entered_WaterVolume();
	void FootStepLeft();
	void FootStepRight();
	void GameplayCue_Abilities_Activation_Generic_HarvestBuff_Tier1(EGameplayCueEvent EventType, const struct FGameplayCueParameters& Parameters);
	void GameplayCue_Abilities_Activation_Generic_HarvestBuff_Tier2(EGameplayCueEvent EventType, const struct FGameplayCueParameters& Parameters);
	void GameplayCue_Abilities_SpookyMist_Loop(EGameplayCueEvent EventType, const struct FGameplayCueParameters& Parameters);
	void GameplayCue_Damage_Shielded(EGameplayCueEvent EventType, const struct FGameplayCueParameters& Parameters);
	void GameplayCue_Loop_Shadow_Bomb(EGameplayCueEvent EventType, const struct FGameplayCueParameters& Parameters);
	void GameplayCue_Shield_Destroyed(EGameplayCueEvent EventType, const struct FGameplayCueParameters& Parameters);
	void GameplayCue_Shield_PotionConsumed(EGameplayCueEvent EventType, const struct FGameplayCueParameters& Parameters);
	void GameplayCue_Shield_Reapplied(EGameplayCueEvent EventType, const struct FGameplayCueParameters& Parameters);
	void Hide_VFX_In_Frontend_Hologram(bool isFrontEndHologram);
	void K2_OnBecomeViewTarget(class APlayerController* PC);
	void K2_OnEndViewTarget(class APlayerController* PC);
	void Melee_Effect_Color(struct FVector* Melee_Color_Set);
	void MeleeSwingLeft(bool First_Left);
	void MeleeSwingLeft_End();
	void MeleeSwingRight(bool First_Right);
	void MeleeSwingRight_End();
	void OnCharacterPartsReinitialized();
	void OnDamagePlayEffects(float Damage, const struct FGameplayTagContainer& DamageTags, const struct FVector& Momentum, const struct FHitResult& HitInfo, class AFortPawn* InstigatedBy, class AActor* DamageCauser, const struct FGameplayEffectContextHandle& EffectContext);
	void OnDeathServer(float Damage, const struct FGameplayTagContainer& DamageTags, const struct FVector& Momentum, const struct FHitResult& HitInfo, class AController* InstigatedBy, class AActor* DamageCauser, const struct FGameplayEffectContextHandle& EffectContext);
	void OnLanded(const struct FHitResult& Hit);
	void OnMovementStyleChanged(EFortMovementStyle PreviousMovementStyle, EFortMovementStyle NewMovementStyle);
	void OnPart(class AFortPlayerPawn* Pawn, class UCustomCharacterPart* Part, class USkeletalMeshComponent* MeshPart, const EFortCustomPartType PartType);
	void OnPartApplied(class AFortPlayerPawn* Pawn, class UCustomCharacterPart* Part, class USkeletalMeshComponent* MeshPart, const EFortCustomPartType PartType);
	void OnRep_CapsuleEnlarged();
	void OnWeaponEquipped(class AFortWeapon* NewWeapon, class AFortWeapon* PrevWeapon);
	void PawnUniqueIDSet();
	void PlayShieldDestroyedSound(const struct FGameplayCueParameters& GameplayCueParameters);
	void ReceiveDestroyed();
	void ReInitFrontendPetDisplay();
	void SlaveAMeshToTheBody(class USkeletalMeshComponent* Mesh_0, class USkeletalMeshComponent* Master);
	void ToggleLandFX(bool NewHidden);
	void UpdateViewTargetAudioParameters();
	void UserConstructionScript();

	void GetActorSoundParams(TArray<struct FAudioParameter>* Params_0) const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"PlayerPawn_Athena_Generic_C">();
	}
	static class APlayerPawn_Athena_Generic_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<APlayerPawn_Athena_Generic_C>();
	}
};
#pragma pack(pop)
static_assert(alignof(APlayerPawn_Athena_Generic_C) == 0x000010, "Wrong alignment on APlayerPawn_Athena_Generic_C");
static_assert(sizeof(APlayerPawn_Athena_Generic_C) == 0x005780, "Wrong size on APlayerPawn_Athena_Generic_C");
static_assert(offsetof(APlayerPawn_Athena_Generic_C, UberGraphFrame_PlayerPawn_Athena_Generic_C) == 0x005490, "Member 'APlayerPawn_Athena_Generic_C::UberGraphFrame_PlayerPawn_Athena_Generic_C' has a wrong offset!");
static_assert(offsetof(APlayerPawn_Athena_Generic_C, Effect_WaterInteraction_FX) == 0x005498, "Member 'APlayerPawn_Athena_Generic_C::Effect_WaterInteraction_FX' has a wrong offset!");
static_assert(offsetof(APlayerPawn_Athena_Generic_C, AnimTrailPS) == 0x0054A0, "Member 'APlayerPawn_Athena_Generic_C::AnimTrailPS' has a wrong offset!");
static_assert(offsetof(APlayerPawn_Athena_Generic_C, IsInWater) == 0x0054A8, "Member 'APlayerPawn_Athena_Generic_C::IsInWater' has a wrong offset!");
static_assert(offsetof(APlayerPawn_Athena_Generic_C, RunWalkParticleRotation) == 0x0054B0, "Member 'APlayerPawn_Athena_Generic_C::RunWalkParticleRotation' has a wrong offset!");
static_assert(offsetof(APlayerPawn_Athena_Generic_C, WaterCounter) == 0x0054C8, "Member 'APlayerPawn_Athena_Generic_C::WaterCounter' has a wrong offset!");
static_assert(offsetof(APlayerPawn_Athena_Generic_C, Tick_Delta_Seconds) == 0x0054D0, "Member 'APlayerPawn_Athena_Generic_C::Tick_Delta_Seconds' has a wrong offset!");
static_assert(offsetof(APlayerPawn_Athena_Generic_C, Sound_Shield_Impact) == 0x0054D8, "Member 'APlayerPawn_Athena_Generic_C::Sound_Shield_Impact' has a wrong offset!");
static_assert(offsetof(APlayerPawn_Athena_Generic_C, Sound_Shield_Destroyed) == 0x0054E0, "Member 'APlayerPawn_Athena_Generic_C::Sound_Shield_Destroyed' has a wrong offset!");
static_assert(offsetof(APlayerPawn_Athena_Generic_C, Sound_Shield_Destroyed_1P) == 0x0054E8, "Member 'APlayerPawn_Athena_Generic_C::Sound_Shield_Destroyed_1P' has a wrong offset!");
static_assert(offsetof(APlayerPawn_Athena_Generic_C, Sound_Shield_FullyCharged) == 0x0054F0, "Member 'APlayerPawn_Athena_Generic_C::Sound_Shield_FullyCharged' has a wrong offset!");
static_assert(offsetof(APlayerPawn_Athena_Generic_C, Sound_Shield_StartRecharge) == 0x0054F8, "Member 'APlayerPawn_Athena_Generic_C::Sound_Shield_StartRecharge' has a wrong offset!");
static_assert(offsetof(APlayerPawn_Athena_Generic_C, BodyValid) == 0x005500, "Member 'APlayerPawn_Athena_Generic_C::BodyValid' has a wrong offset!");
static_assert(offsetof(APlayerPawn_Athena_Generic_C, BackpackValid) == 0x005501, "Member 'APlayerPawn_Athena_Generic_C::BackpackValid' has a wrong offset!");
static_assert(offsetof(APlayerPawn_Athena_Generic_C, HatValid) == 0x005502, "Member 'APlayerPawn_Athena_Generic_C::HatValid' has a wrong offset!");
static_assert(offsetof(APlayerPawn_Athena_Generic_C, FaceValid) == 0x005503, "Member 'APlayerPawn_Athena_Generic_C::FaceValid' has a wrong offset!");
static_assert(offsetof(APlayerPawn_Athena_Generic_C, CharmValid) == 0x005504, "Member 'APlayerPawn_Athena_Generic_C::CharmValid' has a wrong offset!");
static_assert(offsetof(APlayerPawn_Athena_Generic_C, HeadValid) == 0x005505, "Member 'APlayerPawn_Athena_Generic_C::HeadValid' has a wrong offset!");
static_assert(offsetof(APlayerPawn_Athena_Generic_C, TempArray) == 0x005508, "Member 'APlayerPawn_Athena_Generic_C::TempArray' has a wrong offset!");
static_assert(offsetof(APlayerPawn_Athena_Generic_C, Sound_Player_Hit) == 0x005518, "Member 'APlayerPawn_Athena_Generic_C::Sound_Player_Hit' has a wrong offset!");
static_assert(offsetof(APlayerPawn_Athena_Generic_C, SpeechBubbleWidgetClass) == 0x005520, "Member 'APlayerPawn_Athena_Generic_C::SpeechBubbleWidgetClass' has a wrong offset!");
static_assert(offsetof(APlayerPawn_Athena_Generic_C, LastSpeechText) == 0x005528, "Member 'APlayerPawn_Athena_Generic_C::LastSpeechText' has a wrong offset!");
static_assert(offsetof(APlayerPawn_Athena_Generic_C, UseAnimTrailsNotifies) == 0x005540, "Member 'APlayerPawn_Athena_Generic_C::UseAnimTrailsNotifies' has a wrong offset!");
static_assert(offsetof(APlayerPawn_Athena_Generic_C, Time_when_you_ll_be_able_to_splash_again) == 0x005548, "Member 'APlayerPawn_Athena_Generic_C::Time_when_you_ll_be_able_to_splash_again' has a wrong offset!");
static_assert(offsetof(APlayerPawn_Athena_Generic_C, CurrentWaterMeshActor) == 0x005550, "Member 'APlayerPawn_Athena_Generic_C::CurrentWaterMeshActor' has a wrong offset!");
static_assert(offsetof(APlayerPawn_Athena_Generic_C, WaterTraceHitLocation) == 0x005558, "Member 'APlayerPawn_Athena_Generic_C::WaterTraceHitLocation' has a wrong offset!");
static_assert(offsetof(APlayerPawn_Athena_Generic_C, StableVelocityVector) == 0x005638, "Member 'APlayerPawn_Athena_Generic_C::StableVelocityVector' has a wrong offset!");
static_assert(offsetof(APlayerPawn_Athena_Generic_C, PlayerRunTemplate_Ground) == 0x005650, "Member 'APlayerPawn_Athena_Generic_C::PlayerRunTemplate_Ground' has a wrong offset!");
static_assert(offsetof(APlayerPawn_Athena_Generic_C, PlayerWalkTemplate_Ground) == 0x005658, "Member 'APlayerPawn_Athena_Generic_C::PlayerWalkTemplate_Ground' has a wrong offset!");
static_assert(offsetof(APlayerPawn_Athena_Generic_C, PlayerRunTemplate_Water) == 0x005660, "Member 'APlayerPawn_Athena_Generic_C::PlayerRunTemplate_Water' has a wrong offset!");
static_assert(offsetof(APlayerPawn_Athena_Generic_C, PlayerWalkTemplate_Water) == 0x005668, "Member 'APlayerPawn_Athena_Generic_C::PlayerWalkTemplate_Water' has a wrong offset!");
static_assert(offsetof(APlayerPawn_Athena_Generic_C, Pawn_Charm_Skeletal_Mesh) == 0x005670, "Member 'APlayerPawn_Athena_Generic_C::Pawn_Charm_Skeletal_Mesh' has a wrong offset!");
static_assert(offsetof(APlayerPawn_Athena_Generic_C, AnimTrailsPS_Ref) == 0x005678, "Member 'APlayerPawn_Athena_Generic_C::AnimTrailsPS_Ref' has a wrong offset!");
static_assert(offsetof(APlayerPawn_Athena_Generic_C, WeaponMaterialOverride) == 0x005680, "Member 'APlayerPawn_Athena_Generic_C::WeaponMaterialOverride' has a wrong offset!");
static_assert(offsetof(APlayerPawn_Athena_Generic_C, TickWaterLevel) == 0x005688, "Member 'APlayerPawn_Athena_Generic_C::TickWaterLevel' has a wrong offset!");
static_assert(offsetof(APlayerPawn_Athena_Generic_C, WetnessDepthTexture) == 0x005690, "Member 'APlayerPawn_Athena_Generic_C::WetnessDepthTexture' has a wrong offset!");
static_assert(offsetof(APlayerPawn_Athena_Generic_C, WaterLevelMID) == 0x005698, "Member 'APlayerPawn_Athena_Generic_C::WaterLevelMID' has a wrong offset!");
static_assert(offsetof(APlayerPawn_Athena_Generic_C, WaterDecayMID) == 0x0056A0, "Member 'APlayerPawn_Athena_Generic_C::WaterDecayMID' has a wrong offset!");
static_assert(offsetof(APlayerPawn_Athena_Generic_C, Was_RTT_Enabled_Var_Set) == 0x0056A8, "Member 'APlayerPawn_Athena_Generic_C::Was_RTT_Enabled_Var_Set' has a wrong offset!");
static_assert(offsetof(APlayerPawn_Athena_Generic_C, Is_RTT_Enabled) == 0x0056A9, "Member 'APlayerPawn_Athena_Generic_C::Is_RTT_Enabled' has a wrong offset!");
static_assert(offsetof(APlayerPawn_Athena_Generic_C, StartingMinCapsuleShadowVis) == 0x0056B0, "Member 'APlayerPawn_Athena_Generic_C::StartingMinCapsuleShadowVis' has a wrong offset!");
static_assert(offsetof(APlayerPawn_Athena_Generic_C, InstigatorCheckDistanceSqrd) == 0x0056B8, "Member 'APlayerPawn_Athena_Generic_C::InstigatorCheckDistanceSqrd' has a wrong offset!");
static_assert(offsetof(APlayerPawn_Athena_Generic_C, SlideDustActivateSpeed) == 0x0056C0, "Member 'APlayerPawn_Athena_Generic_C::SlideDustActivateSpeed' has a wrong offset!");
static_assert(offsetof(APlayerPawn_Athena_Generic_C, CanSpawnSlideKickupFX_) == 0x0056C8, "Member 'APlayerPawn_Athena_Generic_C::CanSpawnSlideKickupFX_' has a wrong offset!");
static_assert(offsetof(APlayerPawn_Athena_Generic_C, Effect_Player_ShieldActivate) == 0x0056D0, "Member 'APlayerPawn_Athena_Generic_C::Effect_Player_ShieldActivate' has a wrong offset!");
static_assert(offsetof(APlayerPawn_Athena_Generic_C, Effect_PLayer_ShieldBreak) == 0x0056D8, "Member 'APlayerPawn_Athena_Generic_C::Effect_PLayer_ShieldBreak' has a wrong offset!");
static_assert(offsetof(APlayerPawn_Athena_Generic_C, GhostMode) == 0x0056E0, "Member 'APlayerPawn_Athena_Generic_C::GhostMode' has a wrong offset!");
static_assert(offsetof(APlayerPawn_Athena_Generic_C, OverrideAnimTrail) == 0x0056E8, "Member 'APlayerPawn_Athena_Generic_C::OverrideAnimTrail' has a wrong offset!");
static_assert(offsetof(APlayerPawn_Athena_Generic_C, AnimNotify_Begin) == 0x0056F0, "Member 'APlayerPawn_Athena_Generic_C::AnimNotify_Begin' has a wrong offset!");
static_assert(offsetof(APlayerPawn_Athena_Generic_C, AnimNotify_End) == 0x005700, "Member 'APlayerPawn_Athena_Generic_C::AnimNotify_End' has a wrong offset!");
static_assert(offsetof(APlayerPawn_Athena_Generic_C, Sound_Shield_Destroyed_2D) == 0x005710, "Member 'APlayerPawn_Athena_Generic_C::Sound_Shield_Destroyed_2D' has a wrong offset!");
static_assert(offsetof(APlayerPawn_Athena_Generic_C, Sound_Shield_Destroyed_Crit_2D) == 0x005718, "Member 'APlayerPawn_Athena_Generic_C::Sound_Shield_Destroyed_Crit_2D' has a wrong offset!");
static_assert(offsetof(APlayerPawn_Athena_Generic_C, AnimTrailFX) == 0x005720, "Member 'APlayerPawn_Athena_Generic_C::AnimTrailFX' has a wrong offset!");
static_assert(offsetof(APlayerPawn_Athena_Generic_C, PlayDamageEffect) == 0x005728, "Member 'APlayerPawn_Athena_Generic_C::PlayDamageEffect' has a wrong offset!");
static_assert(offsetof(APlayerPawn_Athena_Generic_C, Component_Tag_AnimTrailFX_Const) == 0x005738, "Member 'APlayerPawn_Athena_Generic_C::Component_Tag_AnimTrailFX_Const' has a wrong offset!");
static_assert(offsetof(APlayerPawn_Athena_Generic_C, ReppedCapsuleExtraHalfHeight) == 0x005740, "Member 'APlayerPawn_Athena_Generic_C::ReppedCapsuleExtraHalfHeight' has a wrong offset!");
static_assert(offsetof(APlayerPawn_Athena_Generic_C, CachedCapsuleHalfHeight) == 0x005748, "Member 'APlayerPawn_Athena_Generic_C::CachedCapsuleHalfHeight' has a wrong offset!");
static_assert(offsetof(APlayerPawn_Athena_Generic_C, OnCharacterPartsMIDInitialized) == 0x005750, "Member 'APlayerPawn_Athena_Generic_C::OnCharacterPartsMIDInitialized' has a wrong offset!");
static_assert(offsetof(APlayerPawn_Athena_Generic_C, OnShieldBreak) == 0x005760, "Member 'APlayerPawn_Athena_Generic_C::OnShieldBreak' has a wrong offset!");
static_assert(offsetof(APlayerPawn_Athena_Generic_C, NullPart_Mesh) == 0x005770, "Member 'APlayerPawn_Athena_Generic_C::NullPart_Mesh' has a wrong offset!");

}
