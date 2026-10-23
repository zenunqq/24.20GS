#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "GameplayTags_structs.hpp"
#include "FortniteGame_classes.hpp"

namespace SDK
{

class AGCNL_Athena_Energy_ConstantRegen_Active_WildlifeMount_C final : public AFortGameplayCueNotify_Loop
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;
	struct FGameplayTag                           TacticalSprintTag;
	uint8                                         Pad_96C[0x4];
	class UFXSystemComponent*                     MainNS;

public:
	void Added_7482F31A49360978B87F339D76FC2BB7();
	void ExecuteUbergraph_GCNL_Athena_Energy_ConstantRegen_Active_WildlifeMount(int32 EntryPoint);
	void OnApplicationGeneric(class AActor* MyTarget, const struct FGameplayCueParameters& Parameters, const TArray<class UFXSystemComponent*>& ParticleComponents, const TArray<class UAudioComponent*>& AudioComponents, class ULegacyCameraShake* BurstCameraShakeInstance, class ADecalActor* BurstDecalInstance);
	void Removed_AD34CCD44592FD2F05DB47BDF9413ACC();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GCNL_Athena_Energy_ConstantRegen_Active_WildlifeMount_C">();
	}
	static class AGCNL_Athena_Energy_ConstantRegen_Active_WildlifeMount_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AGCNL_Athena_Energy_ConstantRegen_Active_WildlifeMount_C>();
	}
};
static_assert(alignof(AGCNL_Athena_Energy_ConstantRegen_Active_WildlifeMount_C) == 0x000008, "Wrong alignment on AGCNL_Athena_Energy_ConstantRegen_Active_WildlifeMount_C");
static_assert(sizeof(AGCNL_Athena_Energy_ConstantRegen_Active_WildlifeMount_C) == 0x000978, "Wrong size on AGCNL_Athena_Energy_ConstantRegen_Active_WildlifeMount_C");
static_assert(offsetof(AGCNL_Athena_Energy_ConstantRegen_Active_WildlifeMount_C, UberGraphFrame) == 0x000960, "Member 'AGCNL_Athena_Energy_ConstantRegen_Active_WildlifeMount_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(AGCNL_Athena_Energy_ConstantRegen_Active_WildlifeMount_C, TacticalSprintTag) == 0x000968, "Member 'AGCNL_Athena_Energy_ConstantRegen_Active_WildlifeMount_C::TacticalSprintTag' has a wrong offset!");
static_assert(offsetof(AGCNL_Athena_Energy_ConstantRegen_Active_WildlifeMount_C, MainNS) == 0x000970, "Member 'AGCNL_Athena_Energy_ConstantRegen_Active_WildlifeMount_C::MainNS' has a wrong offset!");

}
