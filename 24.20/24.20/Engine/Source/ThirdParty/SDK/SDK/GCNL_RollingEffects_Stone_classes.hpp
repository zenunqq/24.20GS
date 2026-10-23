#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "GCNL_RollingEffects_Parent_classes.hpp"

namespace SDK
{

class AGCNL_RollingEffects_Stone_C final : public AGCNL_RollingEffects_Parent_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_GCNL_RollingEffects_Stone_C;

public:
	void ExecuteUbergraph_GCNL_RollingEffects_Stone(int32 EntryPoint);
	void OnLoopingStartGeneric(class AActor* MyTarget, const struct FGameplayCueParameters& Parameters, const TArray<class UFXSystemComponent*>& ParticleComponents, const TArray<class UAudioComponent*>& AudioComponents);
	void OnRemovalGeneric(class AActor* MyTarget, const struct FGameplayCueParameters& Parameters, const TArray<class UFXSystemComponent*>& ParticleComponents, const TArray<class UAudioComponent*>& AudioComponents, class ULegacyCameraShake* BurstCameraShakeInstance, class ADecalActor* BurstDecalInstance);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GCNL_RollingEffects_Stone_C">();
	}
	static class AGCNL_RollingEffects_Stone_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AGCNL_RollingEffects_Stone_C>();
	}
};
static_assert(alignof(AGCNL_RollingEffects_Stone_C) == 0x000008, "Wrong alignment on AGCNL_RollingEffects_Stone_C");
static_assert(sizeof(AGCNL_RollingEffects_Stone_C) == 0x000AF0, "Wrong size on AGCNL_RollingEffects_Stone_C");
static_assert(offsetof(AGCNL_RollingEffects_Stone_C, UberGraphFrame_GCNL_RollingEffects_Stone_C) == 0x000AE8, "Member 'AGCNL_RollingEffects_Stone_C::UberGraphFrame_GCNL_RollingEffects_Stone_C' has a wrong offset!");

}
