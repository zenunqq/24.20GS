#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteGame_classes.hpp"

namespace SDK
{

class AGCNL_Riding_Sprint_CameraShake_C final : public AFortGameplayCueNotify_Loop
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;
	class AFortPlayerController*                  FortPlayerController;
	class UCameraShakeBase*                       FOVFlare;
	class UCameraShakeBase*                       ShakeNoise;

public:
	void ExecuteUbergraph_GCNL_Riding_Sprint_CameraShake(int32 EntryPoint);
	void OnLoopingStartGeneric(class AActor* MyTarget, const struct FGameplayCueParameters& Parameters, const TArray<class UFXSystemComponent*>& ParticleComponents, const TArray<class UAudioComponent*>& AudioComponents);
	bool OnRemove(class AActor* MyTarget, const struct FGameplayCueParameters& Parameters);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GCNL_Riding_Sprint_CameraShake_C">();
	}
	static class AGCNL_Riding_Sprint_CameraShake_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AGCNL_Riding_Sprint_CameraShake_C>();
	}
};
static_assert(alignof(AGCNL_Riding_Sprint_CameraShake_C) == 0x000008, "Wrong alignment on AGCNL_Riding_Sprint_CameraShake_C");
static_assert(sizeof(AGCNL_Riding_Sprint_CameraShake_C) == 0x000980, "Wrong size on AGCNL_Riding_Sprint_CameraShake_C");
static_assert(offsetof(AGCNL_Riding_Sprint_CameraShake_C, UberGraphFrame) == 0x000960, "Member 'AGCNL_Riding_Sprint_CameraShake_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(AGCNL_Riding_Sprint_CameraShake_C, FortPlayerController) == 0x000968, "Member 'AGCNL_Riding_Sprint_CameraShake_C::FortPlayerController' has a wrong offset!");
static_assert(offsetof(AGCNL_Riding_Sprint_CameraShake_C, FOVFlare) == 0x000970, "Member 'AGCNL_Riding_Sprint_CameraShake_C::FOVFlare' has a wrong offset!");
static_assert(offsetof(AGCNL_Riding_Sprint_CameraShake_C, ShakeNoise) == 0x000978, "Member 'AGCNL_Riding_Sprint_CameraShake_C::ShakeNoise' has a wrong offset!");

}
