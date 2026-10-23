#pragma once

#include "Basic.hpp"

#include "Engine_classes.hpp"

namespace SDK
{

class AThreat_RainAttachedToPlayer_C final : public AActor
{
public:
	class UParticleSystemComponent*               ParticleSystem;
	class USceneComponent*                        DefaultSceneRoot;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Threat_RainAttachedToPlayer_C">();
	}
	static class AThreat_RainAttachedToPlayer_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AThreat_RainAttachedToPlayer_C>();
	}
};
static_assert(alignof(AThreat_RainAttachedToPlayer_C) == 0x000008, "Wrong alignment on AThreat_RainAttachedToPlayer_C");
static_assert(sizeof(AThreat_RainAttachedToPlayer_C) == 0x000298, "Wrong size on AThreat_RainAttachedToPlayer_C");
static_assert(offsetof(AThreat_RainAttachedToPlayer_C, ParticleSystem) == 0x000288, "Member 'AThreat_RainAttachedToPlayer_C::ParticleSystem' has a wrong offset!");
static_assert(offsetof(AThreat_RainAttachedToPlayer_C, DefaultSceneRoot) == 0x000290, "Member 'AThreat_RainAttachedToPlayer_C::DefaultSceneRoot' has a wrong offset!");

}
