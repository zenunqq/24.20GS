#pragma once

#include "Basic.hpp"

#include "GameplayAbilities_structs.hpp"
#include "FortniteGame_structs.hpp"
#include "FortniteGame_classes.hpp"
#include "GameplayTags_structs.hpp"
#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"

namespace SDK
{

class UGAB_AthenaDBNO_C final : public UFortGameplayAbility
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;
	class UAnimMontage*                           DeathMontage;
	struct FVector                                DeathHitDirection;
	struct FHitResult                             DeathHitResult;
	struct FGameplayTagContainer                  DamageTags;
	struct FGameplayTagContainer                  GameplayStatusAfflicted;
	class UAnimMontage*                           DeathMontageSkydive;
	struct FActiveGameplayEffectHandle            DBNOBleedGEHandle;
	class FName                                   HolsterId;
	uint8                                         Pad_C84[0x4];
	class UAnimMontage*                           DeathMontageSwimming;
	class AFortPlayerPawnAthena*                  FortPlayerPawn;
	class UClass*                                 DBNOStart_GE_Class;
	bool                                          ImprovedDBNO;
	uint8                                         Pad_CA1[0x7];
	struct FGameplayTagContainer                  Old_DBNO_Block_Tags;
	struct FActiveGameplayEffectHandle            GE_Handle__Health_Bonus;
	double                                        TenacityAmount;
	ETenacityType                                 TenacityType;

public:
	void Apply_Health_Bonus(struct FActiveGameplayEffectHandle* EffectHandle);
	void ApplyBleeding(struct FActiveGameplayEffectHandle* EffectHandle);
	void DropHeldObjects();
	void ExecuteUbergraph_GAB_AthenaDBNO(int32 EntryPoint);
	void Get_Custom_Tenacity(double* Tenacity);
	class UAnimMontage* Get_DBNO_Montage();
	void Get_Initial_Heal_Amount(double* Health);
	void Get_Max_Health_Tenacity(double* Tenacity);
	void InitializeDeathHitDirection(const struct FGameplayEventData& EventHitData);
	void K2_ActivateAbilityFromEvent(const struct FGameplayEventData& EventData);
	void K2_OnEndAbility(bool bWasCancelled);
	void OnBlendOut_F0F6785443BD2E74F5591884CB19F35F();
	void OnCancelled_F0F6785443BD2E74F5591884CB19F35F();
	void OnCompleted_F0F6785443BD2E74F5591884CB19F35F();
	void OnInterrupted_F0F6785443BD2E74F5591884CB19F35F();
	void OnStateEnded_C85094F843D5075FE4872C95AFC5D6B6();
	void OnStateInterrupted_C85094F843D5075FE4872C95AFC5D6B6();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GAB_AthenaDBNO_C">();
	}
	static class UGAB_AthenaDBNO_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGAB_AthenaDBNO_C>();
	}
};
static_assert(alignof(UGAB_AthenaDBNO_C) == 0x000008, "Wrong alignment on UGAB_AthenaDBNO_C");
static_assert(sizeof(UGAB_AthenaDBNO_C) == 0x000CE0, "Wrong size on UGAB_AthenaDBNO_C");
static_assert(offsetof(UGAB_AthenaDBNO_C, UberGraphFrame) == 0x000B28, "Member 'UGAB_AthenaDBNO_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UGAB_AthenaDBNO_C, DeathMontage) == 0x000B30, "Member 'UGAB_AthenaDBNO_C::DeathMontage' has a wrong offset!");
static_assert(offsetof(UGAB_AthenaDBNO_C, DeathHitDirection) == 0x000B38, "Member 'UGAB_AthenaDBNO_C::DeathHitDirection' has a wrong offset!");
static_assert(offsetof(UGAB_AthenaDBNO_C, DeathHitResult) == 0x000B50, "Member 'UGAB_AthenaDBNO_C::DeathHitResult' has a wrong offset!");
static_assert(offsetof(UGAB_AthenaDBNO_C, DamageTags) == 0x000C30, "Member 'UGAB_AthenaDBNO_C::DamageTags' has a wrong offset!");
static_assert(offsetof(UGAB_AthenaDBNO_C, GameplayStatusAfflicted) == 0x000C50, "Member 'UGAB_AthenaDBNO_C::GameplayStatusAfflicted' has a wrong offset!");
static_assert(offsetof(UGAB_AthenaDBNO_C, DeathMontageSkydive) == 0x000C70, "Member 'UGAB_AthenaDBNO_C::DeathMontageSkydive' has a wrong offset!");
static_assert(offsetof(UGAB_AthenaDBNO_C, DBNOBleedGEHandle) == 0x000C78, "Member 'UGAB_AthenaDBNO_C::DBNOBleedGEHandle' has a wrong offset!");
static_assert(offsetof(UGAB_AthenaDBNO_C, HolsterId) == 0x000C80, "Member 'UGAB_AthenaDBNO_C::HolsterId' has a wrong offset!");
static_assert(offsetof(UGAB_AthenaDBNO_C, DeathMontageSwimming) == 0x000C88, "Member 'UGAB_AthenaDBNO_C::DeathMontageSwimming' has a wrong offset!");
static_assert(offsetof(UGAB_AthenaDBNO_C, FortPlayerPawn) == 0x000C90, "Member 'UGAB_AthenaDBNO_C::FortPlayerPawn' has a wrong offset!");
static_assert(offsetof(UGAB_AthenaDBNO_C, DBNOStart_GE_Class) == 0x000C98, "Member 'UGAB_AthenaDBNO_C::DBNOStart_GE_Class' has a wrong offset!");
static_assert(offsetof(UGAB_AthenaDBNO_C, ImprovedDBNO) == 0x000CA0, "Member 'UGAB_AthenaDBNO_C::ImprovedDBNO' has a wrong offset!");
static_assert(offsetof(UGAB_AthenaDBNO_C, Old_DBNO_Block_Tags) == 0x000CA8, "Member 'UGAB_AthenaDBNO_C::Old_DBNO_Block_Tags' has a wrong offset!");
static_assert(offsetof(UGAB_AthenaDBNO_C, GE_Handle__Health_Bonus) == 0x000CC8, "Member 'UGAB_AthenaDBNO_C::GE_Handle__Health_Bonus' has a wrong offset!");
static_assert(offsetof(UGAB_AthenaDBNO_C, TenacityAmount) == 0x000CD0, "Member 'UGAB_AthenaDBNO_C::TenacityAmount' has a wrong offset!");
static_assert(offsetof(UGAB_AthenaDBNO_C, TenacityType) == 0x000CD8, "Member 'UGAB_AthenaDBNO_C::TenacityType' has a wrong offset!");

}
