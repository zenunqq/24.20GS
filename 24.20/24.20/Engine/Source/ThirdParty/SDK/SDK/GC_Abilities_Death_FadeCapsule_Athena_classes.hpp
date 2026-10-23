#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "GameplayAbilities_structs.hpp"
#include "FortniteGame_classes.hpp"

namespace SDK
{

class AGC_Abilities_Death_FadeCapsule_Athena_C final : public AFortGameplayCueNotify_BurstLatent
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;
	float                                         CapsuleFadeTL_RemoveShadow_B48F4431426ECD264BA37C992B6887C3;
	ETimelineDirection                            CapsuleFadeTL__Direction_B48F4431426ECD264BA37C992B6887C3;
	uint8                                         Pad_535[0x3];
	class UTimelineComponent*                     CapsuleFadeTL;
	double                                        Starting_Min_Capsule_Shadow_Vis;
	TArray<class USkeletalMeshComponent*>         SkeletalMesh;

public:
	void CapsuleFadeTL__FinishedFunc();
	void CapsuleFadeTL__UpdateFunc();
	void ExecuteUbergraph_GC_Abilities_Death_FadeCapsule_Athena(int32 EntryPoint);
	void K2_HandleGameplayCue(class AActor* MyTarget, EGameplayCueEvent EventType, const struct FGameplayCueParameters& Parameters);
	void SkeletalMeshSetup(class AFortPlayerPawnAthena* FortPawn);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GC_Abilities_Death_FadeCapsule_Athena_C">();
	}
	static class AGC_Abilities_Death_FadeCapsule_Athena_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AGC_Abilities_Death_FadeCapsule_Athena_C>();
	}
};
static_assert(alignof(AGC_Abilities_Death_FadeCapsule_Athena_C) == 0x000008, "Wrong alignment on AGC_Abilities_Death_FadeCapsule_Athena_C");
static_assert(sizeof(AGC_Abilities_Death_FadeCapsule_Athena_C) == 0x000558, "Wrong size on AGC_Abilities_Death_FadeCapsule_Athena_C");
static_assert(offsetof(AGC_Abilities_Death_FadeCapsule_Athena_C, UberGraphFrame) == 0x000528, "Member 'AGC_Abilities_Death_FadeCapsule_Athena_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(AGC_Abilities_Death_FadeCapsule_Athena_C, CapsuleFadeTL_RemoveShadow_B48F4431426ECD264BA37C992B6887C3) == 0x000530, "Member 'AGC_Abilities_Death_FadeCapsule_Athena_C::CapsuleFadeTL_RemoveShadow_B48F4431426ECD264BA37C992B6887C3' has a wrong offset!");
static_assert(offsetof(AGC_Abilities_Death_FadeCapsule_Athena_C, CapsuleFadeTL__Direction_B48F4431426ECD264BA37C992B6887C3) == 0x000534, "Member 'AGC_Abilities_Death_FadeCapsule_Athena_C::CapsuleFadeTL__Direction_B48F4431426ECD264BA37C992B6887C3' has a wrong offset!");
static_assert(offsetof(AGC_Abilities_Death_FadeCapsule_Athena_C, CapsuleFadeTL) == 0x000538, "Member 'AGC_Abilities_Death_FadeCapsule_Athena_C::CapsuleFadeTL' has a wrong offset!");
static_assert(offsetof(AGC_Abilities_Death_FadeCapsule_Athena_C, Starting_Min_Capsule_Shadow_Vis) == 0x000540, "Member 'AGC_Abilities_Death_FadeCapsule_Athena_C::Starting_Min_Capsule_Shadow_Vis' has a wrong offset!");
static_assert(offsetof(AGC_Abilities_Death_FadeCapsule_Athena_C, SkeletalMesh) == 0x000548, "Member 'AGC_Abilities_Death_FadeCapsule_Athena_C::SkeletalMesh' has a wrong offset!");

}
