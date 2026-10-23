#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "PhysicsCore_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "FortniteGame_structs.hpp"
#include "FortniteGame_classes.hpp"

namespace SDK
{

class AB_Athena_Pickaxe_Generic_C final : public AFortWeaponPickaxeAthena
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;
	class UParticleSystemComponent*               MeleeHeavy_PSC;
	class UParticleSystem*                        MeleeHeavy_ParticleSystem;
	class UParticleSystem*                        WeaponDurabilityDestroyEffect;
	class UParticleSystem*                        WeaponDurabilityDestroyEffectIcon;
	bool                                          UseDestroyEffect;
	uint8                                         Pad_1311[0x7];
	class UParticleSystemComponent*               Alteration_Ambient_PS;
	struct FVector                                Effects_Color_Level;
	bool                                          Equipped;
	bool                                          bEquipPendingInstigator;
	bool                                          UseTimeofDayControl;
	bool                                          Swing_Right_;
	uint8                                         Pad_133C[0x4];
	class UFXSystemComponent*                     Impact_FX;
	struct FRotator                               Left_Swing_Rotation;
	struct FRotator                               Right_Swing_Rotation;

public:
	void Anim_Trails_Disable();
	void Anim_Trails_Notify(bool bActive);
	void Binding_Time_of_Day_Control(bool F_);
	void BindSwingAnimTrailEvents();
	void ExecuteUbergraph_B_Athena_Pickaxe_Generic(int32 EntryPoint);
	void FootStepLeft();
	void FootStepRight();
	void HandleKillWatch();
	void HandleWeaponHolstered();
	void K2_OnUnEquip();
	void Melee_Effect_Color(struct FVector* Melee_Color_Set);
	void MeleeSwingLeft(bool First_Left);
	void MeleeSwingLeft_End();
	void MeleeSwingRight(bool First_Right);
	void MeleeSwingRight_End();
	void OnEquippedWeaponDestory();
	void OnInitCosmeticAlterations(const struct FFortCosmeticModification& CosmeticMod);
	void OnInitWeaponCosmetics();
	void OnInstigatorSet();
	void OnLoaded_5BC5DA3B4E308BE7A188FBB2571333D2(class UObject* Loaded);
	void OnPlayImpactFX(const struct FHitResult& HitResult, EPhysicalSurface ImpactPhysicalSurface, class UFXSystemComponent* SpawnedPSC);
	void OnPlayWeaponFireFX(bool bPersistentFire, bool bSecondaryFire);
	void OnStatChanged_F171C56748FEA3E19F93088E968D3E21(class FName StatName, int32 StatValue);
	void OnWeaponAttached();
	void OnWeaponDetached();
	void OnWeaponVisibilityChanged(bool bVisible, bool bSetForLocalControllerOnly);
	void PlayCQCPickaxeEnemyAudio(const struct FHitResult& Hit_Result);
	void PlayRClickImpacts();
	void SetActiveAlterationIdleParticles(bool Active, bool Reset);
	void SetWpnRarity();
	void SwingLeft();
	void SwingLeftEnd();
	void SwingRight();
	void SwingRightEnd();
	void TODCheck(EFortDayPhase CurrentDayPhase, EFortDayPhase PreviousDayPhase, bool bAtCreation);
	void UnbindSwingAnimTrailEvents();
	void UpdateBasedOnKills(int32 Watched_Kills);
	void UserConstructionScript();
	void Vehicle_Passenger(class AFortPlayerPawn* FortPlayerPawn, class AActor* NewVehicle, class AActor* OldVehicle);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"B_Athena_Pickaxe_Generic_C">();
	}
	static class AB_Athena_Pickaxe_Generic_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AB_Athena_Pickaxe_Generic_C>();
	}
};
static_assert(alignof(AB_Athena_Pickaxe_Generic_C) == 0x000008, "Wrong alignment on AB_Athena_Pickaxe_Generic_C");
static_assert(sizeof(AB_Athena_Pickaxe_Generic_C) == 0x001378, "Wrong size on AB_Athena_Pickaxe_Generic_C");
static_assert(offsetof(AB_Athena_Pickaxe_Generic_C, UberGraphFrame) == 0x0012E8, "Member 'AB_Athena_Pickaxe_Generic_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(AB_Athena_Pickaxe_Generic_C, MeleeHeavy_PSC) == 0x0012F0, "Member 'AB_Athena_Pickaxe_Generic_C::MeleeHeavy_PSC' has a wrong offset!");
static_assert(offsetof(AB_Athena_Pickaxe_Generic_C, MeleeHeavy_ParticleSystem) == 0x0012F8, "Member 'AB_Athena_Pickaxe_Generic_C::MeleeHeavy_ParticleSystem' has a wrong offset!");
static_assert(offsetof(AB_Athena_Pickaxe_Generic_C, WeaponDurabilityDestroyEffect) == 0x001300, "Member 'AB_Athena_Pickaxe_Generic_C::WeaponDurabilityDestroyEffect' has a wrong offset!");
static_assert(offsetof(AB_Athena_Pickaxe_Generic_C, WeaponDurabilityDestroyEffectIcon) == 0x001308, "Member 'AB_Athena_Pickaxe_Generic_C::WeaponDurabilityDestroyEffectIcon' has a wrong offset!");
static_assert(offsetof(AB_Athena_Pickaxe_Generic_C, UseDestroyEffect) == 0x001310, "Member 'AB_Athena_Pickaxe_Generic_C::UseDestroyEffect' has a wrong offset!");
static_assert(offsetof(AB_Athena_Pickaxe_Generic_C, Alteration_Ambient_PS) == 0x001318, "Member 'AB_Athena_Pickaxe_Generic_C::Alteration_Ambient_PS' has a wrong offset!");
static_assert(offsetof(AB_Athena_Pickaxe_Generic_C, Effects_Color_Level) == 0x001320, "Member 'AB_Athena_Pickaxe_Generic_C::Effects_Color_Level' has a wrong offset!");
static_assert(offsetof(AB_Athena_Pickaxe_Generic_C, Equipped) == 0x001338, "Member 'AB_Athena_Pickaxe_Generic_C::Equipped' has a wrong offset!");
static_assert(offsetof(AB_Athena_Pickaxe_Generic_C, bEquipPendingInstigator) == 0x001339, "Member 'AB_Athena_Pickaxe_Generic_C::bEquipPendingInstigator' has a wrong offset!");
static_assert(offsetof(AB_Athena_Pickaxe_Generic_C, UseTimeofDayControl) == 0x00133A, "Member 'AB_Athena_Pickaxe_Generic_C::UseTimeofDayControl' has a wrong offset!");
static_assert(offsetof(AB_Athena_Pickaxe_Generic_C, Swing_Right_) == 0x00133B, "Member 'AB_Athena_Pickaxe_Generic_C::Swing_Right_' has a wrong offset!");
static_assert(offsetof(AB_Athena_Pickaxe_Generic_C, Impact_FX) == 0x001340, "Member 'AB_Athena_Pickaxe_Generic_C::Impact_FX' has a wrong offset!");
static_assert(offsetof(AB_Athena_Pickaxe_Generic_C, Left_Swing_Rotation) == 0x001348, "Member 'AB_Athena_Pickaxe_Generic_C::Left_Swing_Rotation' has a wrong offset!");
static_assert(offsetof(AB_Athena_Pickaxe_Generic_C, Right_Swing_Rotation) == 0x001360, "Member 'AB_Athena_Pickaxe_Generic_C::Right_Swing_Rotation' has a wrong offset!");

}
