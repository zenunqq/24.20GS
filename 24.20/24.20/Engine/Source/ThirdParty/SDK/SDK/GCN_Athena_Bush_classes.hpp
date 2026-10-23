#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteGame_classes.hpp"

namespace SDK
{

class AGCN_Athena_Bush_C final : public AFortGameplayCueNotify_Loop
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;
	class UStaticMeshComponent*                   OwningPlayer_BushMesh;
	class UArrowComponent*                        Arrow2;
	class UArrowComponent*                        Arrow1;
	class UStaticMeshComponent*                   BushMesh;
	class UArrowComponent*                        Arrow;
	class UParticleSystemComponent*               Trail_Leaves;
	float                                         OpacityFade_OpacityFadeOut_B989988545DAA0B2E69D77AE069A4437;
	ETimelineDirection                            OpacityFade__Direction_B989988545DAA0B2E69D77AE069A4437;
	uint8                                         Pad_99D[0x3];
	class UTimelineComponent*                     OpacityFade;
	class AActor*                                 PlayerPawn;
	class UMaterialInstanceDynamic*               MID_Bush;
	bool                                          IsActive;
	uint8                                         Pad_9B9[0x7];
	class UMaterialInstanceDynamic*               MID_OwningClientBush;
	struct FCurveTableRowHandle                   ClientBushOpacity;
	double                                        TargetOpacity;
	class UParticleSystem*                        BushDestructionVFX;
	class USoundBase*                             BushDestructionSFX;

public:
	void ExecuteUbergraph_GCN_Athena_Bush(int32 EntryPoint);
	void On_Player_Step();
	void OnLoopingStart(class AActor* MyTarget, const struct FGameplayCueParameters& Parameters, const TArray<class UParticleSystemComponent*>& ParticleComponents, const TArray<class UAudioComponent*>& AudioComponents);
	void OnRemoval(class AActor* MyTarget, const struct FGameplayCueParameters& Parameters, const TArray<class UParticleSystemComponent*>& ParticleComponents, const TArray<class UAudioComponent*>& AudioComponents, class ULegacyCameraShake* BurstCameraShakeInstance, class ADecalActor* BurstDecalInstance);
	void OpacityFade__FinishedFunc();
	void OpacityFade__UpdateFunc();
	void ReceiveTick(float DeltaSeconds);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GCN_Athena_Bush_C">();
	}
	static class AGCN_Athena_Bush_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AGCN_Athena_Bush_C>();
	}
};
static_assert(alignof(AGCN_Athena_Bush_C) == 0x000008, "Wrong alignment on AGCN_Athena_Bush_C");
static_assert(sizeof(AGCN_Athena_Bush_C) == 0x0009F0, "Wrong size on AGCN_Athena_Bush_C");
static_assert(offsetof(AGCN_Athena_Bush_C, UberGraphFrame) == 0x000960, "Member 'AGCN_Athena_Bush_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(AGCN_Athena_Bush_C, OwningPlayer_BushMesh) == 0x000968, "Member 'AGCN_Athena_Bush_C::OwningPlayer_BushMesh' has a wrong offset!");
static_assert(offsetof(AGCN_Athena_Bush_C, Arrow2) == 0x000970, "Member 'AGCN_Athena_Bush_C::Arrow2' has a wrong offset!");
static_assert(offsetof(AGCN_Athena_Bush_C, Arrow1) == 0x000978, "Member 'AGCN_Athena_Bush_C::Arrow1' has a wrong offset!");
static_assert(offsetof(AGCN_Athena_Bush_C, BushMesh) == 0x000980, "Member 'AGCN_Athena_Bush_C::BushMesh' has a wrong offset!");
static_assert(offsetof(AGCN_Athena_Bush_C, Arrow) == 0x000988, "Member 'AGCN_Athena_Bush_C::Arrow' has a wrong offset!");
static_assert(offsetof(AGCN_Athena_Bush_C, Trail_Leaves) == 0x000990, "Member 'AGCN_Athena_Bush_C::Trail_Leaves' has a wrong offset!");
static_assert(offsetof(AGCN_Athena_Bush_C, OpacityFade_OpacityFadeOut_B989988545DAA0B2E69D77AE069A4437) == 0x000998, "Member 'AGCN_Athena_Bush_C::OpacityFade_OpacityFadeOut_B989988545DAA0B2E69D77AE069A4437' has a wrong offset!");
static_assert(offsetof(AGCN_Athena_Bush_C, OpacityFade__Direction_B989988545DAA0B2E69D77AE069A4437) == 0x00099C, "Member 'AGCN_Athena_Bush_C::OpacityFade__Direction_B989988545DAA0B2E69D77AE069A4437' has a wrong offset!");
static_assert(offsetof(AGCN_Athena_Bush_C, OpacityFade) == 0x0009A0, "Member 'AGCN_Athena_Bush_C::OpacityFade' has a wrong offset!");
static_assert(offsetof(AGCN_Athena_Bush_C, PlayerPawn) == 0x0009A8, "Member 'AGCN_Athena_Bush_C::PlayerPawn' has a wrong offset!");
static_assert(offsetof(AGCN_Athena_Bush_C, MID_Bush) == 0x0009B0, "Member 'AGCN_Athena_Bush_C::MID_Bush' has a wrong offset!");
static_assert(offsetof(AGCN_Athena_Bush_C, IsActive) == 0x0009B8, "Member 'AGCN_Athena_Bush_C::IsActive' has a wrong offset!");
static_assert(offsetof(AGCN_Athena_Bush_C, MID_OwningClientBush) == 0x0009C0, "Member 'AGCN_Athena_Bush_C::MID_OwningClientBush' has a wrong offset!");
static_assert(offsetof(AGCN_Athena_Bush_C, ClientBushOpacity) == 0x0009C8, "Member 'AGCN_Athena_Bush_C::ClientBushOpacity' has a wrong offset!");
static_assert(offsetof(AGCN_Athena_Bush_C, TargetOpacity) == 0x0009D8, "Member 'AGCN_Athena_Bush_C::TargetOpacity' has a wrong offset!");
static_assert(offsetof(AGCN_Athena_Bush_C, BushDestructionVFX) == 0x0009E0, "Member 'AGCN_Athena_Bush_C::BushDestructionVFX' has a wrong offset!");
static_assert(offsetof(AGCN_Athena_Bush_C, BushDestructionSFX) == 0x0009E8, "Member 'AGCN_Athena_Bush_C::BushDestructionSFX' has a wrong offset!");

}
