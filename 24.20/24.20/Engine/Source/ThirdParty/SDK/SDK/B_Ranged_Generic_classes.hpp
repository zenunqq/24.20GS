#pragma once

#include "Basic.hpp"

#include "GameplayTags_structs.hpp"
#include "Engine_structs.hpp"
#include "En_ShellTypes_01_structs.hpp"
#include "PhysicsCore_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "FortniteGame_structs.hpp"
#include "FortniteGame_classes.hpp"
#include "GameplayAbilities_structs.hpp"

namespace SDK
{

class AB_Ranged_Generic_C final : public AFortWeaponRanged
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;
	class UNiagaraComponent*                      Reload_Niagara_Empty_;
	class UParticleSystemComponent*               Reload_Empty_;
	class UParticleSystemComponent*               Muzzle_Empty_;
	float                                         AnimateScopePostProcess_DownSightPostProcessAmount_393D8BA5486879173797EF8C9B8D4642;
	ETimelineDirection                            AnimateScopePostProcess__Direction_393D8BA5486879173797EF8C9B8D4642;
	uint8                                         Pad_15E5[0x3];
	class UTimelineComponent*                     AnimateScopePostProcess;
	class UParticleSystem*                        MuzzleParticleSystem;
	class UParticleSystem*                        WeaponDurabilityDestroyEffect;
	class UParticleSystem*                        WeaponDurabilityDestroyEffectIcon;
	bool                                          UseDestroyEffect;
	bool                                          Use_Reload_Particles;
	uint8                                         Pad_160A[0x6];
	class UParticleSystem*                        Reload_ParticleSystem;
	double                                        LastPlayFXTime;
	double                                        MinPlayFXTime;
	bool                                          UseShellsOnFire_;
	bool                                          UseShellsOnReload_;
	bool                                          UseShellsOnPump_;
	uint8                                         Pad_162B[0x1];
	class FName                                   ReloadSocketName;
	TArray<class AFortAIPawn*>                    Array_Of_Active_Enemy_AI;
	bool                                          Scope___Render_Enemies_To_Custom_Depth_Buffer;
	uint8                                         Pad_1641[0x3];
	class FName                                   Shells_Socket_Name;
	En_ShellTypes_01                              ShellTypeSelect;
	uint8                                         Pad_1649[0x7];
	double                                        Shells_Spawn_Rate_Scale;
	struct FVector                                ShellsRotationRate;
	struct FVector                                Shells_Velocity;
	struct FVector                                Shells_Gravity;
	struct FVector                                Shells_Size;
	double                                        Target_Scope_Vignette_Blur_Screen_Percentage;
	double                                        ScopeCameraOffsetX;
	double                                        ScopeCameraOffsetY;
	double                                        Scope_Camera_Offset_Amount;
	double                                        Inherit_Parent_Velocity;
	double                                        Cylindrical_Radius;
	double                                        Cylindrical_Height;
	struct FLinearColor                           Shell_Color;
	class UNiagaraComponent*                      Spawned_Shells;
	bool                                          DebugShellsSocket_;
	uint8                                         Pad_1709[0x7];
	class USoundBase*                             Sound_ScopeZoomIn;
	class USoundBase*                             Sound_ScopeZoomOut;
	class UParticleSystemComponent*               Alteration_Ambient_PS;
	struct FGameplayTagContainer                  ReticleHUDElementTags;
	bool                                          Is_Wind_Enabled;
	uint8                                         Pad_1749[0x7];
	class UParticleSystem*                        MuzzleWindParticleSystem;
	class UParticleSystem*                        MuzzleParticleSystem1P;
	bool                                          ShouldHideReticleAfterDelay;
	uint8                                         Pad_1761[0x7];
	class UParticleSystemComponent*               MuzzleWindParticleSpawned;
	int32                                         StencilBufferValue;
	uint8                                         Pad_1774[0x4];
	class UCurveFloat*                            Curve_PitchOffset;
	class USoundBase*                             Sound_ScopedInLoop;
	class UAudioComponent*                        ScopeZoomInComp;
	class UAudioComponent*                        ScopedInLoopComp;
	class UAudioComponent*                        ScopeZoomOutComp;
	double                                        Alteration_Ambient_PS_Max_Draw_Distance;
	double                                        Muzzle_PS_Max_Draw_Distance;
	double                                        Beam_PS_Max_Draw_Distance;
	double                                        Reload_PS_Max_Draw_Distance;
	double                                        Shells_PS_Max_Draw_Distance;
	TMulticastInlineDelegate<void(bool AimDownsights)> onAimDownSightsChanged;
	bool                                          IsMuzzleNiagara;
	uint8                                         Pad_17D9[0x7];
	class UNiagaraSystem*                         MuzzleNiagaraSystemInstance;
	TSoftObjectPtr<class UNiagaraSystem>          MuzzleNiagaraSystemAsset;
	class UNiagaraComponent*                      MuzzleNiagaraComponentInstance;
	TArray<class UParticleSystemComponent*>       MuzzleParticleSystemComponents;
	double                                        Muzzle_ChanceOfLargeFlash;
	double                                        Muzzle_FlashLarge_MinScale;
	double                                        Muzzle_FlashLarge_MaxScale;
	double                                        Muzzle_FlashSmall_MinScale;
	double                                        Muzzle_FlashSmall_MaxScale;
	struct FTimerHandle                           ScopeEffectDelay1Handle;
	struct FTimerHandle                           ScopeEffectDelay2Handle;
	struct FScalableFloat                         UseNativeFX;
	bool                                          IsReloadNiagara;
	uint8                                         Pad_1889[0x7];
	class UNiagaraSystem*                         Reload_Niagara_Asset;
	struct FScalableFloat                         UseUpdatedFeedback;
	TMulticastInlineDelegate<void()>              OnStartFiring;
	TMulticastInlineDelegate<void()>              OnPersistentFireStopped;
	class UStaticMesh*                            ScopeMesh;
	class UStaticMeshComponent*                   ScopeMesh1P_Spawned;
	TArray<class UMaterialInterface*>             ScopeMaterialOverrides;

public:
	void AbortScopeFX();
	void ActivateOrDeactivateWindParticle(bool bNewActive);
	void ActivateReloadSmokeFX();
	void ActivateShellsFX(bool Bool);
	void AddRandomScale();
	void AnimateScopePostProcess__FinishedFunc();
	void AnimateScopePostProcess__Toggle_Scope__EventFunc();
	void AnimateScopePostProcess__UpdateFunc();
	void Bind_on_Effects_Quality();
	void BindFireRateChange();
	void DeactivateMuzzleFX();
	void DeactivateReloadSmokeFX();
	void DeactivateShellsFX();
	void ExecuteUbergraph_B_Ranged_Generic(int32 EntryPoint);
	void ForceScopeBackImmediatly();
	void ForceScopeFX();
	void GetActiveMuzzleComponents(TArray<class UFXSystemComponent*>* NewParam);
	void GetCorrectMuzzleNiagaraSystem(TSoftObjectPtr<class UNiagaraSystem>* OutNiagaraSystem);
	void getScopeComp(class UStaticMeshComponent** ScopeComponent);
	void GetScopeParameters(class UStaticMeshComponent** ScopeComponent, struct FVector2D* DepthOfFieldVignetteRange, struct FVector* WeaponSightsOffset);
	void HideFirstPersonStuff();
	void HideReticle();
	void HideThirdPersonStuff();
	void HideWeapon();
	void HideWeaponMesh();
	void InitializeScopeVariables();
	void initScope();
	void IsNewFeedbackEnabled(bool* Enabled);
	void K2_OnUnEquip();
	void LoadNiagaraMuzzleSoftObject();
	void LocalReloadStarted(float ReloadTime, EFortWeaponReloadType ReloadType);
	void Muzzle_Flash_FX(bool Persistent_Fire);
	void Muzzle_Play_Reload_FX(EFortReloadFXState Selection);
	void OnApplyFireModeData(class UFortWeaponFireModeData* FireModeData);
	void OnEquippedWeaponDestory();
	void OnInitAlteration(class UFortAlterationItemDefinition* NewAlteration);
	void OnInitCosmeticAlterations(const struct FFortCosmeticModification& CosmeticMod);
	void OnLoaded_3A9BBE884A5C5966375089938B7DC0CA(class UObject* Loaded);
	void OnLoaded_4D1409A247BFDB4C074B628406FC7A72(class UObject* Loaded);
	void OnLoaded_4DE6158742ED7EE528BC98A240A81632(class UObject* Loaded);
	void OnLoaded_5B08633343C4DA6FF40449A8A36357E4(class UObject* Loaded);
	void OnLoaded_83457BA843174AC6288682A342EBEAD9(class UObject* Loaded);
	void OnPlayImpactFX(const struct FHitResult& HitResult, EPhysicalSurface ImpactPhysicalSurface, class UFXSystemComponent* SpawnedPSC);
	void OnPlayReloadFX(EFortReloadFXState ReloadStage);
	void OnPlayWeaponFireFX(bool bPersistentFire, bool bSecondaryFire);
	void OnSetTargeting(bool bNewIsTargeting);
	void OnStartOverheated();
	void OnStopWeaponFireFX();
	void OnWeaponAttached();
	void OnWeaponVisibilityChanged(bool bVisible, bool bSetForLocalControllerOnly);
	void PitchUpOnRateOfFireChange(float NewRateOfFire);
	void PlayLocalForceFeedback(class UForceFeedbackEffect* ForceFeedbackEffect, class FName tag, bool bLooping);
	void PlayScopeOutAudio();
	void PlayScopePP();
	void ReceiveBeginPlay();
	void ResetDoonceScopeSound();
	void ReverseScopePP();
	void ScopeEffectDelay1();
	void ScopeEffectDelay2();
	void SetActiveAlterationIdleParticles(bool Active);
	void SetActiveMuzzleComponent(bool NiagaraEnabled);
	void SetPostProcessParams(double InputPin);
	void SetupShellFX();
	void SetWeaponPierceThrough(bool Enable, int32 TargetLimit);
	void SetWeaponPierceThrough_ClientRep(bool Enable, int32 TargetLimit);
	void SetWpnRarity();
	void ShellEjectionFixOn();
	void ShellEjectionOff();
	void ShellsON__onPump_();
	void ShowReticle();
	void ShowWeapon();
	void ShowWeaponMesh();
	void StartScopedAudio();
	void StopLocalForceFeedback(class UForceFeedbackEffect* ForceFeedbackEffect, class FName tag);
	void StopScopedAudio();
	void UnhideFirstPersonStuffPart1();
	void UnhideFirstPersonStuffPart2(int32 Which_Call);
	void UnhideThirdPersonStuff();
	void Update_Enemy_Custom_Depths(bool Enable_Or_Disable, int32 StencilBufferValue_0);
	void UpdateShellEmittersFX();
	void UserConstructionScript();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"B_Ranged_Generic_C">();
	}
	static class AB_Ranged_Generic_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AB_Ranged_Generic_C>();
	}
};
static_assert(alignof(AB_Ranged_Generic_C) == 0x000008, "Wrong alignment on AB_Ranged_Generic_C");
static_assert(sizeof(AB_Ranged_Generic_C) == 0x001900, "Wrong size on AB_Ranged_Generic_C");
static_assert(offsetof(AB_Ranged_Generic_C, UberGraphFrame) == 0x0015C0, "Member 'AB_Ranged_Generic_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(AB_Ranged_Generic_C, Reload_Niagara_Empty_) == 0x0015C8, "Member 'AB_Ranged_Generic_C::Reload_Niagara_Empty_' has a wrong offset!");
static_assert(offsetof(AB_Ranged_Generic_C, Reload_Empty_) == 0x0015D0, "Member 'AB_Ranged_Generic_C::Reload_Empty_' has a wrong offset!");
static_assert(offsetof(AB_Ranged_Generic_C, Muzzle_Empty_) == 0x0015D8, "Member 'AB_Ranged_Generic_C::Muzzle_Empty_' has a wrong offset!");
static_assert(offsetof(AB_Ranged_Generic_C, AnimateScopePostProcess_DownSightPostProcessAmount_393D8BA5486879173797EF8C9B8D4642) == 0x0015E0, "Member 'AB_Ranged_Generic_C::AnimateScopePostProcess_DownSightPostProcessAmount_393D8BA5486879173797EF8C9B8D4642' has a wrong offset!");
static_assert(offsetof(AB_Ranged_Generic_C, AnimateScopePostProcess__Direction_393D8BA5486879173797EF8C9B8D4642) == 0x0015E4, "Member 'AB_Ranged_Generic_C::AnimateScopePostProcess__Direction_393D8BA5486879173797EF8C9B8D4642' has a wrong offset!");
static_assert(offsetof(AB_Ranged_Generic_C, AnimateScopePostProcess) == 0x0015E8, "Member 'AB_Ranged_Generic_C::AnimateScopePostProcess' has a wrong offset!");
static_assert(offsetof(AB_Ranged_Generic_C, MuzzleParticleSystem) == 0x0015F0, "Member 'AB_Ranged_Generic_C::MuzzleParticleSystem' has a wrong offset!");
static_assert(offsetof(AB_Ranged_Generic_C, WeaponDurabilityDestroyEffect) == 0x0015F8, "Member 'AB_Ranged_Generic_C::WeaponDurabilityDestroyEffect' has a wrong offset!");
static_assert(offsetof(AB_Ranged_Generic_C, WeaponDurabilityDestroyEffectIcon) == 0x001600, "Member 'AB_Ranged_Generic_C::WeaponDurabilityDestroyEffectIcon' has a wrong offset!");
static_assert(offsetof(AB_Ranged_Generic_C, UseDestroyEffect) == 0x001608, "Member 'AB_Ranged_Generic_C::UseDestroyEffect' has a wrong offset!");
static_assert(offsetof(AB_Ranged_Generic_C, Use_Reload_Particles) == 0x001609, "Member 'AB_Ranged_Generic_C::Use_Reload_Particles' has a wrong offset!");
static_assert(offsetof(AB_Ranged_Generic_C, Reload_ParticleSystem) == 0x001610, "Member 'AB_Ranged_Generic_C::Reload_ParticleSystem' has a wrong offset!");
static_assert(offsetof(AB_Ranged_Generic_C, LastPlayFXTime) == 0x001618, "Member 'AB_Ranged_Generic_C::LastPlayFXTime' has a wrong offset!");
static_assert(offsetof(AB_Ranged_Generic_C, MinPlayFXTime) == 0x001620, "Member 'AB_Ranged_Generic_C::MinPlayFXTime' has a wrong offset!");
static_assert(offsetof(AB_Ranged_Generic_C, UseShellsOnFire_) == 0x001628, "Member 'AB_Ranged_Generic_C::UseShellsOnFire_' has a wrong offset!");
static_assert(offsetof(AB_Ranged_Generic_C, UseShellsOnReload_) == 0x001629, "Member 'AB_Ranged_Generic_C::UseShellsOnReload_' has a wrong offset!");
static_assert(offsetof(AB_Ranged_Generic_C, UseShellsOnPump_) == 0x00162A, "Member 'AB_Ranged_Generic_C::UseShellsOnPump_' has a wrong offset!");
static_assert(offsetof(AB_Ranged_Generic_C, ReloadSocketName) == 0x00162C, "Member 'AB_Ranged_Generic_C::ReloadSocketName' has a wrong offset!");
static_assert(offsetof(AB_Ranged_Generic_C, Array_Of_Active_Enemy_AI) == 0x001630, "Member 'AB_Ranged_Generic_C::Array_Of_Active_Enemy_AI' has a wrong offset!");
static_assert(offsetof(AB_Ranged_Generic_C, Scope___Render_Enemies_To_Custom_Depth_Buffer) == 0x001640, "Member 'AB_Ranged_Generic_C::Scope___Render_Enemies_To_Custom_Depth_Buffer' has a wrong offset!");
static_assert(offsetof(AB_Ranged_Generic_C, Shells_Socket_Name) == 0x001644, "Member 'AB_Ranged_Generic_C::Shells_Socket_Name' has a wrong offset!");
static_assert(offsetof(AB_Ranged_Generic_C, ShellTypeSelect) == 0x001648, "Member 'AB_Ranged_Generic_C::ShellTypeSelect' has a wrong offset!");
static_assert(offsetof(AB_Ranged_Generic_C, Shells_Spawn_Rate_Scale) == 0x001650, "Member 'AB_Ranged_Generic_C::Shells_Spawn_Rate_Scale' has a wrong offset!");
static_assert(offsetof(AB_Ranged_Generic_C, ShellsRotationRate) == 0x001658, "Member 'AB_Ranged_Generic_C::ShellsRotationRate' has a wrong offset!");
static_assert(offsetof(AB_Ranged_Generic_C, Shells_Velocity) == 0x001670, "Member 'AB_Ranged_Generic_C::Shells_Velocity' has a wrong offset!");
static_assert(offsetof(AB_Ranged_Generic_C, Shells_Gravity) == 0x001688, "Member 'AB_Ranged_Generic_C::Shells_Gravity' has a wrong offset!");
static_assert(offsetof(AB_Ranged_Generic_C, Shells_Size) == 0x0016A0, "Member 'AB_Ranged_Generic_C::Shells_Size' has a wrong offset!");
static_assert(offsetof(AB_Ranged_Generic_C, Target_Scope_Vignette_Blur_Screen_Percentage) == 0x0016B8, "Member 'AB_Ranged_Generic_C::Target_Scope_Vignette_Blur_Screen_Percentage' has a wrong offset!");
static_assert(offsetof(AB_Ranged_Generic_C, ScopeCameraOffsetX) == 0x0016C0, "Member 'AB_Ranged_Generic_C::ScopeCameraOffsetX' has a wrong offset!");
static_assert(offsetof(AB_Ranged_Generic_C, ScopeCameraOffsetY) == 0x0016C8, "Member 'AB_Ranged_Generic_C::ScopeCameraOffsetY' has a wrong offset!");
static_assert(offsetof(AB_Ranged_Generic_C, Scope_Camera_Offset_Amount) == 0x0016D0, "Member 'AB_Ranged_Generic_C::Scope_Camera_Offset_Amount' has a wrong offset!");
static_assert(offsetof(AB_Ranged_Generic_C, Inherit_Parent_Velocity) == 0x0016D8, "Member 'AB_Ranged_Generic_C::Inherit_Parent_Velocity' has a wrong offset!");
static_assert(offsetof(AB_Ranged_Generic_C, Cylindrical_Radius) == 0x0016E0, "Member 'AB_Ranged_Generic_C::Cylindrical_Radius' has a wrong offset!");
static_assert(offsetof(AB_Ranged_Generic_C, Cylindrical_Height) == 0x0016E8, "Member 'AB_Ranged_Generic_C::Cylindrical_Height' has a wrong offset!");
static_assert(offsetof(AB_Ranged_Generic_C, Shell_Color) == 0x0016F0, "Member 'AB_Ranged_Generic_C::Shell_Color' has a wrong offset!");
static_assert(offsetof(AB_Ranged_Generic_C, Spawned_Shells) == 0x001700, "Member 'AB_Ranged_Generic_C::Spawned_Shells' has a wrong offset!");
static_assert(offsetof(AB_Ranged_Generic_C, DebugShellsSocket_) == 0x001708, "Member 'AB_Ranged_Generic_C::DebugShellsSocket_' has a wrong offset!");
static_assert(offsetof(AB_Ranged_Generic_C, Sound_ScopeZoomIn) == 0x001710, "Member 'AB_Ranged_Generic_C::Sound_ScopeZoomIn' has a wrong offset!");
static_assert(offsetof(AB_Ranged_Generic_C, Sound_ScopeZoomOut) == 0x001718, "Member 'AB_Ranged_Generic_C::Sound_ScopeZoomOut' has a wrong offset!");
static_assert(offsetof(AB_Ranged_Generic_C, Alteration_Ambient_PS) == 0x001720, "Member 'AB_Ranged_Generic_C::Alteration_Ambient_PS' has a wrong offset!");
static_assert(offsetof(AB_Ranged_Generic_C, ReticleHUDElementTags) == 0x001728, "Member 'AB_Ranged_Generic_C::ReticleHUDElementTags' has a wrong offset!");
static_assert(offsetof(AB_Ranged_Generic_C, Is_Wind_Enabled) == 0x001748, "Member 'AB_Ranged_Generic_C::Is_Wind_Enabled' has a wrong offset!");
static_assert(offsetof(AB_Ranged_Generic_C, MuzzleWindParticleSystem) == 0x001750, "Member 'AB_Ranged_Generic_C::MuzzleWindParticleSystem' has a wrong offset!");
static_assert(offsetof(AB_Ranged_Generic_C, MuzzleParticleSystem1P) == 0x001758, "Member 'AB_Ranged_Generic_C::MuzzleParticleSystem1P' has a wrong offset!");
static_assert(offsetof(AB_Ranged_Generic_C, ShouldHideReticleAfterDelay) == 0x001760, "Member 'AB_Ranged_Generic_C::ShouldHideReticleAfterDelay' has a wrong offset!");
static_assert(offsetof(AB_Ranged_Generic_C, MuzzleWindParticleSpawned) == 0x001768, "Member 'AB_Ranged_Generic_C::MuzzleWindParticleSpawned' has a wrong offset!");
static_assert(offsetof(AB_Ranged_Generic_C, StencilBufferValue) == 0x001770, "Member 'AB_Ranged_Generic_C::StencilBufferValue' has a wrong offset!");
static_assert(offsetof(AB_Ranged_Generic_C, Curve_PitchOffset) == 0x001778, "Member 'AB_Ranged_Generic_C::Curve_PitchOffset' has a wrong offset!");
static_assert(offsetof(AB_Ranged_Generic_C, Sound_ScopedInLoop) == 0x001780, "Member 'AB_Ranged_Generic_C::Sound_ScopedInLoop' has a wrong offset!");
static_assert(offsetof(AB_Ranged_Generic_C, ScopeZoomInComp) == 0x001788, "Member 'AB_Ranged_Generic_C::ScopeZoomInComp' has a wrong offset!");
static_assert(offsetof(AB_Ranged_Generic_C, ScopedInLoopComp) == 0x001790, "Member 'AB_Ranged_Generic_C::ScopedInLoopComp' has a wrong offset!");
static_assert(offsetof(AB_Ranged_Generic_C, ScopeZoomOutComp) == 0x001798, "Member 'AB_Ranged_Generic_C::ScopeZoomOutComp' has a wrong offset!");
static_assert(offsetof(AB_Ranged_Generic_C, Alteration_Ambient_PS_Max_Draw_Distance) == 0x0017A0, "Member 'AB_Ranged_Generic_C::Alteration_Ambient_PS_Max_Draw_Distance' has a wrong offset!");
static_assert(offsetof(AB_Ranged_Generic_C, Muzzle_PS_Max_Draw_Distance) == 0x0017A8, "Member 'AB_Ranged_Generic_C::Muzzle_PS_Max_Draw_Distance' has a wrong offset!");
static_assert(offsetof(AB_Ranged_Generic_C, Beam_PS_Max_Draw_Distance) == 0x0017B0, "Member 'AB_Ranged_Generic_C::Beam_PS_Max_Draw_Distance' has a wrong offset!");
static_assert(offsetof(AB_Ranged_Generic_C, Reload_PS_Max_Draw_Distance) == 0x0017B8, "Member 'AB_Ranged_Generic_C::Reload_PS_Max_Draw_Distance' has a wrong offset!");
static_assert(offsetof(AB_Ranged_Generic_C, Shells_PS_Max_Draw_Distance) == 0x0017C0, "Member 'AB_Ranged_Generic_C::Shells_PS_Max_Draw_Distance' has a wrong offset!");
static_assert(offsetof(AB_Ranged_Generic_C, onAimDownSightsChanged) == 0x0017C8, "Member 'AB_Ranged_Generic_C::onAimDownSightsChanged' has a wrong offset!");
static_assert(offsetof(AB_Ranged_Generic_C, IsMuzzleNiagara) == 0x0017D8, "Member 'AB_Ranged_Generic_C::IsMuzzleNiagara' has a wrong offset!");
static_assert(offsetof(AB_Ranged_Generic_C, MuzzleNiagaraSystemInstance) == 0x0017E0, "Member 'AB_Ranged_Generic_C::MuzzleNiagaraSystemInstance' has a wrong offset!");
static_assert(offsetof(AB_Ranged_Generic_C, MuzzleNiagaraSystemAsset) == 0x0017E8, "Member 'AB_Ranged_Generic_C::MuzzleNiagaraSystemAsset' has a wrong offset!");
static_assert(offsetof(AB_Ranged_Generic_C, MuzzleNiagaraComponentInstance) == 0x001810, "Member 'AB_Ranged_Generic_C::MuzzleNiagaraComponentInstance' has a wrong offset!");
static_assert(offsetof(AB_Ranged_Generic_C, MuzzleParticleSystemComponents) == 0x001818, "Member 'AB_Ranged_Generic_C::MuzzleParticleSystemComponents' has a wrong offset!");
static_assert(offsetof(AB_Ranged_Generic_C, Muzzle_ChanceOfLargeFlash) == 0x001828, "Member 'AB_Ranged_Generic_C::Muzzle_ChanceOfLargeFlash' has a wrong offset!");
static_assert(offsetof(AB_Ranged_Generic_C, Muzzle_FlashLarge_MinScale) == 0x001830, "Member 'AB_Ranged_Generic_C::Muzzle_FlashLarge_MinScale' has a wrong offset!");
static_assert(offsetof(AB_Ranged_Generic_C, Muzzle_FlashLarge_MaxScale) == 0x001838, "Member 'AB_Ranged_Generic_C::Muzzle_FlashLarge_MaxScale' has a wrong offset!");
static_assert(offsetof(AB_Ranged_Generic_C, Muzzle_FlashSmall_MinScale) == 0x001840, "Member 'AB_Ranged_Generic_C::Muzzle_FlashSmall_MinScale' has a wrong offset!");
static_assert(offsetof(AB_Ranged_Generic_C, Muzzle_FlashSmall_MaxScale) == 0x001848, "Member 'AB_Ranged_Generic_C::Muzzle_FlashSmall_MaxScale' has a wrong offset!");
static_assert(offsetof(AB_Ranged_Generic_C, ScopeEffectDelay1Handle) == 0x001850, "Member 'AB_Ranged_Generic_C::ScopeEffectDelay1Handle' has a wrong offset!");
static_assert(offsetof(AB_Ranged_Generic_C, ScopeEffectDelay2Handle) == 0x001858, "Member 'AB_Ranged_Generic_C::ScopeEffectDelay2Handle' has a wrong offset!");
static_assert(offsetof(AB_Ranged_Generic_C, UseNativeFX) == 0x001860, "Member 'AB_Ranged_Generic_C::UseNativeFX' has a wrong offset!");
static_assert(offsetof(AB_Ranged_Generic_C, IsReloadNiagara) == 0x001888, "Member 'AB_Ranged_Generic_C::IsReloadNiagara' has a wrong offset!");
static_assert(offsetof(AB_Ranged_Generic_C, Reload_Niagara_Asset) == 0x001890, "Member 'AB_Ranged_Generic_C::Reload_Niagara_Asset' has a wrong offset!");
static_assert(offsetof(AB_Ranged_Generic_C, UseUpdatedFeedback) == 0x001898, "Member 'AB_Ranged_Generic_C::UseUpdatedFeedback' has a wrong offset!");
static_assert(offsetof(AB_Ranged_Generic_C, OnStartFiring) == 0x0018C0, "Member 'AB_Ranged_Generic_C::OnStartFiring' has a wrong offset!");
static_assert(offsetof(AB_Ranged_Generic_C, OnPersistentFireStopped) == 0x0018D0, "Member 'AB_Ranged_Generic_C::OnPersistentFireStopped' has a wrong offset!");
static_assert(offsetof(AB_Ranged_Generic_C, ScopeMesh) == 0x0018E0, "Member 'AB_Ranged_Generic_C::ScopeMesh' has a wrong offset!");
static_assert(offsetof(AB_Ranged_Generic_C, ScopeMesh1P_Spawned) == 0x0018E8, "Member 'AB_Ranged_Generic_C::ScopeMesh1P_Spawned' has a wrong offset!");
static_assert(offsetof(AB_Ranged_Generic_C, ScopeMaterialOverrides) == 0x0018F0, "Member 'AB_Ranged_Generic_C::ScopeMaterialOverrides' has a wrong offset!");

}
