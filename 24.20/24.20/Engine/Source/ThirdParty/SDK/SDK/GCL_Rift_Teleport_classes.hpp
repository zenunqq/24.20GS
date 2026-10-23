#pragma once

#include "Basic.hpp"

#include "FortniteGame_classes.hpp"

namespace SDK
{

class AGCL_Rift_Teleport_C final : public AFortGameplayCueNotify_Looping
{
public:
	bool OnRemove(class AActor* MyTarget, const struct FGameplayCueParameters& Parameters);
	bool WhileActive(class AActor* MyTarget, const struct FGameplayCueParameters& Parameters);

	void OnStartParticleSystemSpawned(class UParticleSystemComponent* SpawnedParticleSysComponent, const struct FGameplayCueParameters& Parameters) const;
	void OnWhileActiveParticleSystemDeactivate(class UParticleSystemComponent* WhileActiveParticleSysComponent, const struct FGameplayCueParameters& Parameters) const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GCL_Rift_Teleport_C">();
	}
	static class AGCL_Rift_Teleport_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AGCL_Rift_Teleport_C>();
	}
};
static_assert(alignof(AGCL_Rift_Teleport_C) == 0x000008, "Wrong alignment on AGCL_Rift_Teleport_C");
static_assert(sizeof(AGCL_Rift_Teleport_C) == 0x000368, "Wrong size on AGCL_Rift_Teleport_C");

}
