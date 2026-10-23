#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteGame_classes.hpp"

namespace SDK
{

class AGCN_Loop_SnowFlakes_CameraAttached_C final : public AFortGameplayCueNotify_Loop
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;

public:
	void ExecuteUbergraph_GCN_Loop_SnowFlakes_CameraAttached(int32 EntryPoint);
	void OnLoopingStart(class AActor* MyTarget, const struct FGameplayCueParameters& Parameters, const TArray<class UParticleSystemComponent*>& ParticleComponents, const TArray<class UAudioComponent*>& AudioComponents);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GCN_Loop_SnowFlakes_CameraAttached_C">();
	}
	static class AGCN_Loop_SnowFlakes_CameraAttached_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AGCN_Loop_SnowFlakes_CameraAttached_C>();
	}
};
static_assert(alignof(AGCN_Loop_SnowFlakes_CameraAttached_C) == 0x000008, "Wrong alignment on AGCN_Loop_SnowFlakes_CameraAttached_C");
static_assert(sizeof(AGCN_Loop_SnowFlakes_CameraAttached_C) == 0x000968, "Wrong size on AGCN_Loop_SnowFlakes_CameraAttached_C");
static_assert(offsetof(AGCN_Loop_SnowFlakes_CameraAttached_C, UberGraphFrame) == 0x000960, "Member 'AGCN_Loop_SnowFlakes_CameraAttached_C::UberGraphFrame' has a wrong offset!");

}
