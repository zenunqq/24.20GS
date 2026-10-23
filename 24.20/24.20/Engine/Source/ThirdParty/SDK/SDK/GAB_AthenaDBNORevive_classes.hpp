#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "GameplayTags_structs.hpp"
#include "FortniteGame_classes.hpp"

namespace SDK
{

class UGAB_AthenaDBNORevive_C final : public UFortGameplayAbility
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;
	struct FGameplayTag                           EC_AppliedEffect;
	uint8                                         Pad_B34[0x4];
	class AFortPlayerPawn*                        PlayerPawn;
	struct FGameplayTag                           ResurrectCue;
	struct FGameplayTag                           ResurrectAthenaCue;
	class UAnimMontage*                           DBNOMontageOutro;
	class UAnimMontage*                           DBNOMontageOutroSwimming;

public:
	void Cancelled_23712DBC45E68EA0C91A4895CBD8B3A6(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag);
	void Cancelled_779E7BAA49FEAD286C5164B83CDFD609(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag);
	void Completed_23712DBC45E68EA0C91A4895CBD8B3A6(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag);
	void ExecuteUbergraph_GAB_AthenaDBNORevive(int32 EntryPoint);
	void Get_DBNO_Outro_Montage(class UAnimMontage** DBNOMontageOutro_0);
	void K2_ActivateAbilityFromEvent(const struct FGameplayEventData& EventData);
	void K2_OnEndAbility(bool bWasCancelled);
	void Removed_620488CD4F8BFC035EC7328664732683();
	void Targeted_779E7BAA49FEAD286C5164B83CDFD609(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag);
	void Triggered_23712DBC45E68EA0C91A4895CBD8B3A6(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GAB_AthenaDBNORevive_C">();
	}
	static class UGAB_AthenaDBNORevive_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGAB_AthenaDBNORevive_C>();
	}
};
static_assert(alignof(UGAB_AthenaDBNORevive_C) == 0x000008, "Wrong alignment on UGAB_AthenaDBNORevive_C");
static_assert(sizeof(UGAB_AthenaDBNORevive_C) == 0x000B58, "Wrong size on UGAB_AthenaDBNORevive_C");
static_assert(offsetof(UGAB_AthenaDBNORevive_C, UberGraphFrame) == 0x000B28, "Member 'UGAB_AthenaDBNORevive_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UGAB_AthenaDBNORevive_C, EC_AppliedEffect) == 0x000B30, "Member 'UGAB_AthenaDBNORevive_C::EC_AppliedEffect' has a wrong offset!");
static_assert(offsetof(UGAB_AthenaDBNORevive_C, PlayerPawn) == 0x000B38, "Member 'UGAB_AthenaDBNORevive_C::PlayerPawn' has a wrong offset!");
static_assert(offsetof(UGAB_AthenaDBNORevive_C, ResurrectCue) == 0x000B40, "Member 'UGAB_AthenaDBNORevive_C::ResurrectCue' has a wrong offset!");
static_assert(offsetof(UGAB_AthenaDBNORevive_C, ResurrectAthenaCue) == 0x000B44, "Member 'UGAB_AthenaDBNORevive_C::ResurrectAthenaCue' has a wrong offset!");
static_assert(offsetof(UGAB_AthenaDBNORevive_C, DBNOMontageOutro) == 0x000B48, "Member 'UGAB_AthenaDBNORevive_C::DBNOMontageOutro' has a wrong offset!");
static_assert(offsetof(UGAB_AthenaDBNORevive_C, DBNOMontageOutroSwimming) == 0x000B50, "Member 'UGAB_AthenaDBNORevive_C::DBNOMontageOutroSwimming' has a wrong offset!");

}
