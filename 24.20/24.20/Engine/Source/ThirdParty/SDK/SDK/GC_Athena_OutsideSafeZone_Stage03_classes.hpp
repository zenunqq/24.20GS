#pragma once

#include "Basic.hpp"

#include "GC_Athena_OutsideSafeZone_classes.hpp"
#include "Engine_structs.hpp"

namespace SDK
{

class AGC_Athena_OutsideSafeZone_Stage03_C final : public AGC_Athena_OutsideSafeZone_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_GC_Athena_OutsideSafeZone_Stage03_C;

public:
	void ExecuteUbergraph_GC_Athena_OutsideSafeZone_Stage03(int32 EntryPoint);
	void On_Distant_Lightning_Spawn(class FName EventName, float EmitterTime, const struct FVector& Location, const struct FVector& Velocity);
	void OnLoopingStart(class AActor* MyTarget, const struct FGameplayCueParameters& Parameters, const TArray<class UParticleSystemComponent*>& ParticleComponents, const TArray<class UAudioComponent*>& AudioComponents);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GC_Athena_OutsideSafeZone_Stage03_C">();
	}
	static class AGC_Athena_OutsideSafeZone_Stage03_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AGC_Athena_OutsideSafeZone_Stage03_C>();
	}
};
static_assert(alignof(AGC_Athena_OutsideSafeZone_Stage03_C) == 0x000008, "Wrong alignment on AGC_Athena_OutsideSafeZone_Stage03_C");
static_assert(sizeof(AGC_Athena_OutsideSafeZone_Stage03_C) == 0x000A20, "Wrong size on AGC_Athena_OutsideSafeZone_Stage03_C");
static_assert(offsetof(AGC_Athena_OutsideSafeZone_Stage03_C, UberGraphFrame_GC_Athena_OutsideSafeZone_Stage03_C) == 0x000A18, "Member 'AGC_Athena_OutsideSafeZone_Stage03_C::UberGraphFrame_GC_Athena_OutsideSafeZone_Stage03_C' has a wrong offset!");

}
