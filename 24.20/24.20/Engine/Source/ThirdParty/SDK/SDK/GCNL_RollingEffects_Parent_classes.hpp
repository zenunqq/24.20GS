#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteGame_classes.hpp"

namespace SDK
{

class AGCNL_RollingEffects_Parent_C : public AFortGameplayCueNotifyLoop_PhysicsObjectRolling
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;
	class USoundBase*                             SoundAssetDefault;
	class USoundBase*                             SoundAssetSmall;
	class USoundBase*                             SoundAssetMedium;
	class USoundBase*                             SoundAssetLarge;

public:
	void ExecuteUbergraph_GCNL_RollingEffects_Parent(int32 EntryPoint);
	void GetObjectSizeParam(class AActor* PhysicsObject_0, int32* Size);
	void GetSoundAsset(class AActor* PhysicsObject_0, class USoundBase** Asset);
	void OnApplicationGeneric(class AActor* MyTarget, const struct FGameplayCueParameters& Parameters, const TArray<class UFXSystemComponent*>& ParticleComponents, const TArray<class UAudioComponent*>& AudioComponents, class ULegacyCameraShake* BurstCameraShakeInstance, class ADecalActor* BurstDecalInstance);
	void OnRemovalGeneric(class AActor* MyTarget, const struct FGameplayCueParameters& Parameters, const TArray<class UFXSystemComponent*>& ParticleComponents, const TArray<class UAudioComponent*>& AudioComponents, class ULegacyCameraShake* BurstCameraShakeInstance, class ADecalActor* BurstDecalInstance);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GCNL_RollingEffects_Parent_C">();
	}
	static class AGCNL_RollingEffects_Parent_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AGCNL_RollingEffects_Parent_C>();
	}
};
static_assert(alignof(AGCNL_RollingEffects_Parent_C) == 0x000008, "Wrong alignment on AGCNL_RollingEffects_Parent_C");
static_assert(sizeof(AGCNL_RollingEffects_Parent_C) == 0x000AE8, "Wrong size on AGCNL_RollingEffects_Parent_C");
static_assert(offsetof(AGCNL_RollingEffects_Parent_C, UberGraphFrame) == 0x000AC0, "Member 'AGCNL_RollingEffects_Parent_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(AGCNL_RollingEffects_Parent_C, SoundAssetDefault) == 0x000AC8, "Member 'AGCNL_RollingEffects_Parent_C::SoundAssetDefault' has a wrong offset!");
static_assert(offsetof(AGCNL_RollingEffects_Parent_C, SoundAssetSmall) == 0x000AD0, "Member 'AGCNL_RollingEffects_Parent_C::SoundAssetSmall' has a wrong offset!");
static_assert(offsetof(AGCNL_RollingEffects_Parent_C, SoundAssetMedium) == 0x000AD8, "Member 'AGCNL_RollingEffects_Parent_C::SoundAssetMedium' has a wrong offset!");
static_assert(offsetof(AGCNL_RollingEffects_Parent_C, SoundAssetLarge) == 0x000AE0, "Member 'AGCNL_RollingEffects_Parent_C::SoundAssetLarge' has a wrong offset!");

}
