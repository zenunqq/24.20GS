#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "GameplayAbilities_structs.hpp"
#include "FortniteGame_classes.hpp"

namespace SDK
{

class AGC_Abilities_Death_FadeCapsule_StW_C final : public AFortGameplayCueNotify_BurstLatent
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;
	float                                         CapsuleFadeTL_RemoveShadow_D18D776D462C2233B7D3E1B7577403C1;
	ETimelineDirection                            CapsuleFadeTL__Direction_D18D776D462C2233B7D3E1B7577403C1;
	uint8                                         Pad_535[0x3];
	class UTimelineComponent*                     CapsuleFadeTL;
	double                                        Starting_Min_Capsule_Shadow_Vis;
	TArray<class USkeletalMeshComponent*>         SkeletalMesh;

public:
	void CapsuleFadeTL__FinishedFunc();
	void CapsuleFadeTL__UpdateFunc();
	void ExecuteUbergraph_GC_Abilities_Death_FadeCapsule_StW(int32 EntryPoint);
	void K2_HandleGameplayCue(class AActor* MyTarget, EGameplayCueEvent EventType, const struct FGameplayCueParameters& Parameters);
	void SkeletalMeshSetup(class AFortPlayerPawn* FortPawn);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GC_Abilities_Death_FadeCapsule_StW_C">();
	}
	static class AGC_Abilities_Death_FadeCapsule_StW_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AGC_Abilities_Death_FadeCapsule_StW_C>();
	}
};
static_assert(alignof(AGC_Abilities_Death_FadeCapsule_StW_C) == 0x000008, "Wrong alignment on AGC_Abilities_Death_FadeCapsule_StW_C");
static_assert(sizeof(AGC_Abilities_Death_FadeCapsule_StW_C) == 0x000558, "Wrong size on AGC_Abilities_Death_FadeCapsule_StW_C");
static_assert(offsetof(AGC_Abilities_Death_FadeCapsule_StW_C, UberGraphFrame) == 0x000528, "Member 'AGC_Abilities_Death_FadeCapsule_StW_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(AGC_Abilities_Death_FadeCapsule_StW_C, CapsuleFadeTL_RemoveShadow_D18D776D462C2233B7D3E1B7577403C1) == 0x000530, "Member 'AGC_Abilities_Death_FadeCapsule_StW_C::CapsuleFadeTL_RemoveShadow_D18D776D462C2233B7D3E1B7577403C1' has a wrong offset!");
static_assert(offsetof(AGC_Abilities_Death_FadeCapsule_StW_C, CapsuleFadeTL__Direction_D18D776D462C2233B7D3E1B7577403C1) == 0x000534, "Member 'AGC_Abilities_Death_FadeCapsule_StW_C::CapsuleFadeTL__Direction_D18D776D462C2233B7D3E1B7577403C1' has a wrong offset!");
static_assert(offsetof(AGC_Abilities_Death_FadeCapsule_StW_C, CapsuleFadeTL) == 0x000538, "Member 'AGC_Abilities_Death_FadeCapsule_StW_C::CapsuleFadeTL' has a wrong offset!");
static_assert(offsetof(AGC_Abilities_Death_FadeCapsule_StW_C, Starting_Min_Capsule_Shadow_Vis) == 0x000540, "Member 'AGC_Abilities_Death_FadeCapsule_StW_C::Starting_Min_Capsule_Shadow_Vis' has a wrong offset!");
static_assert(offsetof(AGC_Abilities_Death_FadeCapsule_StW_C, SkeletalMesh) == 0x000548, "Member 'AGC_Abilities_Death_FadeCapsule_StW_C::SkeletalMesh' has a wrong offset!");

}
