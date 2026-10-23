#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "PhysicsCore_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "FortniteGame_structs.hpp"
#include "FortniteGame_classes.hpp"

namespace SDK
{

class AB_Athena_Pickaxe_DualWield_Generic_C final : public AFortWeaponPickaxeDualWieldAthena
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;
	bool                                          Equipped;
	uint8                                         Pad_15E9[0x7];
	class UParticleSystemComponent*               Alteration_Ambient_PS;
	class UParticleSystem*                        MeleeHeavy_ParticleSystem;
	class UParticleSystemComponent*               MeleeHeavy_PSC;
	bool                                          UseDestroyEffect;
	uint8                                         Pad_1609[0x7];
	class UParticleSystem*                        WeaponDurabilityDestroyEffect;
	class UParticleSystem*                        WeaponDurabilityDestroyEffectIcon;
	class UParticleSystemComponent*               Offhand_Alteration_Ambient_PS;
	bool                                          bEquipPendingInstigator;
	uint8                                         Pad_1629[0x3];
	class FName                                   Offhand_Socket_Name;
	class UAnimMontage*                           MontageReference;
	bool                                          UseTimeofDayControl;
	uint8                                         Pad_1639[0x7];
	class UFXSystemComponent*                     Impact_FX;
	bool                                          Swing_Right_;
	uint8                                         Pad_1649[0x7];
	struct FRotator                               Left_Swing_Rotation;
	struct FRotator                               Right_Swing_Rotation;
	bool                                          Swing_Right__0;

public:
	void Anim_Trails_Disable();
	void Anim_Trails_Notify(bool bActive);
	void Bind_Dual_Melee_Swing_Events();
	void Binding_Time_of_Day_Control(bool F_);
	void ExecuteUbergraph_B_Athena_Pickaxe_DualWield_Generic(int32 EntryPoint);
	void HandleKillWatch();
	void K2_OnUnEquip();
	void OnEquippedWeaponDestory();
	void OnInitCosmeticAlterations(const struct FFortCosmeticModification& CosmeticMod);
	void OnInitWeaponCosmetics();
	void OnInstigatorSet();
	void OnLoaded_F1C7B8E24518F4F2DE2C8DBABB95E06D(class UObject* Loaded);
	void OnPlayImpactFX(const struct FHitResult& HitResult, EPhysicalSurface ImpactPhysicalSurface, class UFXSystemComponent* SpawnedPSC);
	void OnPlayWeaponFireFX(bool bPersistentFire, bool bSecondaryFire);
	void OnStatChanged_9F72D14C4573F491E38302B51F08A0B8(class FName StatName, int32 StatValue);
	void OnWeaponAttached();
	void OnWeaponDetached();
	void OnWeaponVisibilityChanged(bool bVisible, bool bSetForLocalControllerOnly);
	void PlayRClickImpacts();
	void Set_Active_Alteration_Idle_Particles(bool Active, bool Reset);
	void SetWpnRarity();
	void Swing_Left();
	void Swing_Left_2();
	void Swing_Left_End();
	void Swing_Right();
	void Swing_Right_2();
	void Swing_Right_End();
	void SwingLeft_Common();
	void SwingRight_Common();
	void TODCheck(EFortDayPhase CurrentDayPhase, EFortDayPhase PreviousDayPhase, bool bAtCreation);
	void Unbind_Dual_Melee_Swing_Events();
	void UpdateBasedOnKills(int32 Watched_Kills);
	void UserConstructionScript();
	void Vehicle_Passenger(class AFortPlayerPawn* FortPlayerPawn, class AActor* NewVehicle, class AActor* OldVehicle);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"B_Athena_Pickaxe_DualWield_Generic_C">();
	}
	static class AB_Athena_Pickaxe_DualWield_Generic_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AB_Athena_Pickaxe_DualWield_Generic_C>();
	}
};
static_assert(alignof(AB_Athena_Pickaxe_DualWield_Generic_C) == 0x000008, "Wrong alignment on AB_Athena_Pickaxe_DualWield_Generic_C");
static_assert(sizeof(AB_Athena_Pickaxe_DualWield_Generic_C) == 0x001688, "Wrong size on AB_Athena_Pickaxe_DualWield_Generic_C");
static_assert(offsetof(AB_Athena_Pickaxe_DualWield_Generic_C, UberGraphFrame) == 0x0015E0, "Member 'AB_Athena_Pickaxe_DualWield_Generic_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(AB_Athena_Pickaxe_DualWield_Generic_C, Equipped) == 0x0015E8, "Member 'AB_Athena_Pickaxe_DualWield_Generic_C::Equipped' has a wrong offset!");
static_assert(offsetof(AB_Athena_Pickaxe_DualWield_Generic_C, Alteration_Ambient_PS) == 0x0015F0, "Member 'AB_Athena_Pickaxe_DualWield_Generic_C::Alteration_Ambient_PS' has a wrong offset!");
static_assert(offsetof(AB_Athena_Pickaxe_DualWield_Generic_C, MeleeHeavy_ParticleSystem) == 0x0015F8, "Member 'AB_Athena_Pickaxe_DualWield_Generic_C::MeleeHeavy_ParticleSystem' has a wrong offset!");
static_assert(offsetof(AB_Athena_Pickaxe_DualWield_Generic_C, MeleeHeavy_PSC) == 0x001600, "Member 'AB_Athena_Pickaxe_DualWield_Generic_C::MeleeHeavy_PSC' has a wrong offset!");
static_assert(offsetof(AB_Athena_Pickaxe_DualWield_Generic_C, UseDestroyEffect) == 0x001608, "Member 'AB_Athena_Pickaxe_DualWield_Generic_C::UseDestroyEffect' has a wrong offset!");
static_assert(offsetof(AB_Athena_Pickaxe_DualWield_Generic_C, WeaponDurabilityDestroyEffect) == 0x001610, "Member 'AB_Athena_Pickaxe_DualWield_Generic_C::WeaponDurabilityDestroyEffect' has a wrong offset!");
static_assert(offsetof(AB_Athena_Pickaxe_DualWield_Generic_C, WeaponDurabilityDestroyEffectIcon) == 0x001618, "Member 'AB_Athena_Pickaxe_DualWield_Generic_C::WeaponDurabilityDestroyEffectIcon' has a wrong offset!");
static_assert(offsetof(AB_Athena_Pickaxe_DualWield_Generic_C, Offhand_Alteration_Ambient_PS) == 0x001620, "Member 'AB_Athena_Pickaxe_DualWield_Generic_C::Offhand_Alteration_Ambient_PS' has a wrong offset!");
static_assert(offsetof(AB_Athena_Pickaxe_DualWield_Generic_C, bEquipPendingInstigator) == 0x001628, "Member 'AB_Athena_Pickaxe_DualWield_Generic_C::bEquipPendingInstigator' has a wrong offset!");
static_assert(offsetof(AB_Athena_Pickaxe_DualWield_Generic_C, Offhand_Socket_Name) == 0x00162C, "Member 'AB_Athena_Pickaxe_DualWield_Generic_C::Offhand_Socket_Name' has a wrong offset!");
static_assert(offsetof(AB_Athena_Pickaxe_DualWield_Generic_C, MontageReference) == 0x001630, "Member 'AB_Athena_Pickaxe_DualWield_Generic_C::MontageReference' has a wrong offset!");
static_assert(offsetof(AB_Athena_Pickaxe_DualWield_Generic_C, UseTimeofDayControl) == 0x001638, "Member 'AB_Athena_Pickaxe_DualWield_Generic_C::UseTimeofDayControl' has a wrong offset!");
static_assert(offsetof(AB_Athena_Pickaxe_DualWield_Generic_C, Impact_FX) == 0x001640, "Member 'AB_Athena_Pickaxe_DualWield_Generic_C::Impact_FX' has a wrong offset!");
static_assert(offsetof(AB_Athena_Pickaxe_DualWield_Generic_C, Swing_Right_) == 0x001648, "Member 'AB_Athena_Pickaxe_DualWield_Generic_C::Swing_Right_' has a wrong offset!");
static_assert(offsetof(AB_Athena_Pickaxe_DualWield_Generic_C, Left_Swing_Rotation) == 0x001650, "Member 'AB_Athena_Pickaxe_DualWield_Generic_C::Left_Swing_Rotation' has a wrong offset!");
static_assert(offsetof(AB_Athena_Pickaxe_DualWield_Generic_C, Right_Swing_Rotation) == 0x001668, "Member 'AB_Athena_Pickaxe_DualWield_Generic_C::Right_Swing_Rotation' has a wrong offset!");
static_assert(offsetof(AB_Athena_Pickaxe_DualWield_Generic_C, Swing_Right__0) == 0x001680, "Member 'AB_Athena_Pickaxe_DualWield_Generic_C::Swing_Right__0' has a wrong offset!");

}
