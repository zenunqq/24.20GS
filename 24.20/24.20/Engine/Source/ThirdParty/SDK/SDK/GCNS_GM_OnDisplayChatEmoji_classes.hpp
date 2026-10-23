#pragma once

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "GameplayAbilities_structs.hpp"
#include "FortniteGame_classes.hpp"

namespace SDK
{

class UGCNS_GM_OnDisplayChatEmoji_C final : public UFortGameplayCueNotify_Simple
{
public:
	struct FVector                                ParticleRelativeOffset;
	class USoundBase*                             BubbleSound;

public:
	void K2_HandleGameplayCue(class AActor* MyTarget, EGameplayCueEvent EventType, const struct FGameplayCueParameters& Parameters) const;
	bool OnActive(class AActor* MyTarget, const struct FGameplayCueParameters& Parameters) const;
	bool OnExecute(class AActor* MyTarget, const struct FGameplayCueParameters& Parameters) const;
	bool OnRemove(class AActor* MyTarget, const struct FGameplayCueParameters& Parameters) const;
	void OnStartParticleSystemSpawned(class UParticleSystemComponent* SpawnedParticleSysComponent, const struct FGameplayCueParameters& Parameters) const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GCNS_GM_OnDisplayChatEmoji_C">();
	}
	static class UGCNS_GM_OnDisplayChatEmoji_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGCNS_GM_OnDisplayChatEmoji_C>();
	}
};
static_assert(alignof(UGCNS_GM_OnDisplayChatEmoji_C) == 0x000008, "Wrong alignment on UGCNS_GM_OnDisplayChatEmoji_C");
static_assert(sizeof(UGCNS_GM_OnDisplayChatEmoji_C) == 0x000088, "Wrong size on UGCNS_GM_OnDisplayChatEmoji_C");
static_assert(offsetof(UGCNS_GM_OnDisplayChatEmoji_C, ParticleRelativeOffset) == 0x000068, "Member 'UGCNS_GM_OnDisplayChatEmoji_C::ParticleRelativeOffset' has a wrong offset!");
static_assert(offsetof(UGCNS_GM_OnDisplayChatEmoji_C, BubbleSound) == 0x000080, "Member 'UGCNS_GM_OnDisplayChatEmoji_C::BubbleSound' has a wrong offset!");

}
