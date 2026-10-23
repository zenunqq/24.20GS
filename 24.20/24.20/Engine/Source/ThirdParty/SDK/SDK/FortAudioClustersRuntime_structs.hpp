#pragma once

#include "Basic.hpp"

#include "GameplayTags_structs.hpp"

namespace SDK
{

struct FGameFeatureAudioClusterEntry final
{
public:
	struct FGameplayTag                           ClusterTag;
	uint8                                         Pad_4[0x4];
	TArray<TSoftClassPtr<class UClass>>           ActorClasses;
};
static_assert(alignof(FGameFeatureAudioClusterEntry) == 0x000008, "Wrong alignment on FGameFeatureAudioClusterEntry");
static_assert(sizeof(FGameFeatureAudioClusterEntry) == 0x000018, "Wrong size on FGameFeatureAudioClusterEntry");
static_assert(offsetof(FGameFeatureAudioClusterEntry, ClusterTag) == 0x000000, "Member 'FGameFeatureAudioClusterEntry::ClusterTag' has a wrong offset!");
static_assert(offsetof(FGameFeatureAudioClusterEntry, ActorClasses) == 0x000008, "Member 'FGameFeatureAudioClusterEntry::ActorClasses' has a wrong offset!");

}
