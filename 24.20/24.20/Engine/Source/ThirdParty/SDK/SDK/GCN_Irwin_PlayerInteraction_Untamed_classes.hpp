#pragma once

#include "Basic.hpp"

#include "FortniteGame_classes.hpp"

namespace SDK
{

class UGCN_Irwin_PlayerInteraction_Untamed_C final : public UFortGameplayCueNotify_Burst
{
public:
	class USkeletalMeshComponent*                 NewVar_0;

public:
	void OnBurstNiagara(class AActor* MyTarget, const struct FGameplayCueParameters& Parameters, const TArray<class UNiagaraComponent*>& ParticleComponents, const TArray<class UAudioComponent*>& AudioComponents, class ULegacyCameraShake* BurstCameraShakeInstance, class ADecalActor* BurstDecalInstance) const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GCN_Irwin_PlayerInteraction_Untamed_C">();
	}
	static class UGCN_Irwin_PlayerInteraction_Untamed_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGCN_Irwin_PlayerInteraction_Untamed_C>();
	}
};
static_assert(alignof(UGCN_Irwin_PlayerInteraction_Untamed_C) == 0x000008, "Wrong alignment on UGCN_Irwin_PlayerInteraction_Untamed_C");
static_assert(sizeof(UGCN_Irwin_PlayerInteraction_Untamed_C) == 0x000218, "Wrong size on UGCN_Irwin_PlayerInteraction_Untamed_C");
static_assert(offsetof(UGCN_Irwin_PlayerInteraction_Untamed_C, NewVar_0) == 0x000210, "Member 'UGCN_Irwin_PlayerInteraction_Untamed_C::NewVar_0' has a wrong offset!");

}
