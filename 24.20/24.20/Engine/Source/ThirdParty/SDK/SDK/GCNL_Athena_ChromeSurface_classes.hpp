#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "GCNL_Athena_Surface_Parent_classes.hpp"

namespace SDK
{

class AGCNL_Athena_ChromeSurface_C final : public AGCNL_Athena_Surface_Parent_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_GCNL_Athena_ChromeSurface_C;
	class AFortPlayerPawn*                        LocalTarget;

public:
	void ExecuteUbergraph_GCNL_Athena_ChromeSurface(int32 EntryPoint);
	void OnApplicationGeneric(class AActor* MyTarget, const struct FGameplayCueParameters& Parameters, const TArray<class UFXSystemComponent*>& ParticleComponents, const TArray<class UAudioComponent*>& AudioComponents, class ULegacyCameraShake* BurstCameraShakeInstance, class ADecalActor* BurstDecalInstance);
	void OnRemovalGeneric(class AActor* MyTarget, const struct FGameplayCueParameters& Parameters, const TArray<class UFXSystemComponent*>& ParticleComponents, const TArray<class UAudioComponent*>& AudioComponents, class ULegacyCameraShake* BurstCameraShakeInstance, class ADecalActor* BurstDecalInstance);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GCNL_Athena_ChromeSurface_C">();
	}
	static class AGCNL_Athena_ChromeSurface_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AGCNL_Athena_ChromeSurface_C>();
	}
};
static_assert(alignof(AGCNL_Athena_ChromeSurface_C) == 0x000008, "Wrong alignment on AGCNL_Athena_ChromeSurface_C");
static_assert(sizeof(AGCNL_Athena_ChromeSurface_C) == 0x000988, "Wrong size on AGCNL_Athena_ChromeSurface_C");
static_assert(offsetof(AGCNL_Athena_ChromeSurface_C, UberGraphFrame_GCNL_Athena_ChromeSurface_C) == 0x000978, "Member 'AGCNL_Athena_ChromeSurface_C::UberGraphFrame_GCNL_Athena_ChromeSurface_C' has a wrong offset!");
static_assert(offsetof(AGCNL_Athena_ChromeSurface_C, LocalTarget) == 0x000980, "Member 'AGCNL_Athena_ChromeSurface_C::LocalTarget' has a wrong offset!");

}
