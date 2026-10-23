#pragma once

#include "Basic.hpp"

#include "FortniteGame_classes.hpp"

namespace SDK
{

class UGCN_BoostJumpPack_Boost_C final : public UFortGameplayCueNotify_Simple
{
public:
	class FName                                   AttachSocketName;

public:
	void OnStartParticleSystemSpawned(class UParticleSystemComponent* SpawnedParticleSysComponent, const struct FGameplayCueParameters& Parameters) const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GCN_BoostJumpPack_Boost_C">();
	}
	static class UGCN_BoostJumpPack_Boost_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGCN_BoostJumpPack_Boost_C>();
	}
};
static_assert(alignof(UGCN_BoostJumpPack_Boost_C) == 0x000008, "Wrong alignment on UGCN_BoostJumpPack_Boost_C");
static_assert(sizeof(UGCN_BoostJumpPack_Boost_C) == 0x000070, "Wrong size on UGCN_BoostJumpPack_Boost_C");
static_assert(offsetof(UGCN_BoostJumpPack_Boost_C, AttachSocketName) == 0x000068, "Member 'UGCN_BoostJumpPack_Boost_C::AttachSocketName' has a wrong offset!");

}
