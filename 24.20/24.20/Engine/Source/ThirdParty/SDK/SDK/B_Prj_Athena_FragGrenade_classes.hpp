#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "GameplayTags_structs.hpp"
#include "B_Prj_Athena_Grenade_Base_classes.hpp"

namespace SDK
{

class AB_Prj_Athena_FragGrenade_C final : public AB_Prj_Athena_Grenade_Base_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_B_Prj_Athena_FragGrenade_C;
	class UNiagaraComponent*                      NS_Object_FloatingInWater;
	class UBP_SurfaceTypeSoundComponent_C*        BP_SurfaceTypeSoundComponent;
	float                                         PreExploWarning_PreExplo_E5859FFE443F57359EC2C0AB73DFA4CD;
	ETimelineDirection                            PreExploWarning__Direction_E5859FFE443F57359EC2C0AB73DFA4CD;
	uint8                                         Pad_BD5[0x3];
	class UTimelineComponent*                     PreExploWarning;
	struct FGameplayTag                           FeedbackCue;

public:
	void BndEvt__WaterInteractionComponent_K2Node_ComponentBoundEvent_1_WaterInteractionOnEnterWater__DelegateSignature(class AFortWaterBodyActor* WaterBody, class UFortWaterInteractionComponent* WaterInteractionComponent_0, bool bIsFirstBody);
	void BndEvt__WaterInteractionComponent_K2Node_ComponentBoundEvent_3_WaterInteractionOnExitWater__DelegateSignature(class AFortWaterBodyActor* WaterBody, class UFortWaterInteractionComponent* WaterInteractionComponent_0, bool bIsLastBody);
	void ExecuteUbergraph_B_Prj_Athena_FragGrenade(int32 EntryPoint);
	void FuseEnded();
	void OnBounce(const struct FHitResult& Hit);
	void OnExploded(const TArray<class AActor*>& HitActors, const TArray<struct FHitResult>& HitResults);
	void Pre_Explo_Audio_Tell();
	void PreExploWarning__FinishedFunc();
	void PreExploWarning__UpdateFunc();
	void ReceiveBeginPlay();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"B_Prj_Athena_FragGrenade_C">();
	}
	static class AB_Prj_Athena_FragGrenade_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AB_Prj_Athena_FragGrenade_C>();
	}
};
static_assert(alignof(AB_Prj_Athena_FragGrenade_C) == 0x000008, "Wrong alignment on AB_Prj_Athena_FragGrenade_C");
static_assert(sizeof(AB_Prj_Athena_FragGrenade_C) == 0x000BE8, "Wrong size on AB_Prj_Athena_FragGrenade_C");
static_assert(offsetof(AB_Prj_Athena_FragGrenade_C, UberGraphFrame_B_Prj_Athena_FragGrenade_C) == 0x000BB8, "Member 'AB_Prj_Athena_FragGrenade_C::UberGraphFrame_B_Prj_Athena_FragGrenade_C' has a wrong offset!");
static_assert(offsetof(AB_Prj_Athena_FragGrenade_C, NS_Object_FloatingInWater) == 0x000BC0, "Member 'AB_Prj_Athena_FragGrenade_C::NS_Object_FloatingInWater' has a wrong offset!");
static_assert(offsetof(AB_Prj_Athena_FragGrenade_C, BP_SurfaceTypeSoundComponent) == 0x000BC8, "Member 'AB_Prj_Athena_FragGrenade_C::BP_SurfaceTypeSoundComponent' has a wrong offset!");
static_assert(offsetof(AB_Prj_Athena_FragGrenade_C, PreExploWarning_PreExplo_E5859FFE443F57359EC2C0AB73DFA4CD) == 0x000BD0, "Member 'AB_Prj_Athena_FragGrenade_C::PreExploWarning_PreExplo_E5859FFE443F57359EC2C0AB73DFA4CD' has a wrong offset!");
static_assert(offsetof(AB_Prj_Athena_FragGrenade_C, PreExploWarning__Direction_E5859FFE443F57359EC2C0AB73DFA4CD) == 0x000BD4, "Member 'AB_Prj_Athena_FragGrenade_C::PreExploWarning__Direction_E5859FFE443F57359EC2C0AB73DFA4CD' has a wrong offset!");
static_assert(offsetof(AB_Prj_Athena_FragGrenade_C, PreExploWarning) == 0x000BD8, "Member 'AB_Prj_Athena_FragGrenade_C::PreExploWarning' has a wrong offset!");
static_assert(offsetof(AB_Prj_Athena_FragGrenade_C, FeedbackCue) == 0x000BE0, "Member 'AB_Prj_Athena_FragGrenade_C::FeedbackCue' has a wrong offset!");

}
