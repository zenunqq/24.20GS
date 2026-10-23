#pragma once

#include "Basic.hpp"

#include "GameplayTags_structs.hpp"

namespace SDK
{

struct FActorInitStateChangedParams final
{
public:
	class AActor*                                 OwningActor;
	class FName                                   FeatureName;
	uint8                                         Pad_C[0x4];
	class UObject*                                Implementer;
	struct FGameplayTag                           FeatureState;
	uint8                                         Pad_1C[0x4];
};
static_assert(alignof(FActorInitStateChangedParams) == 0x000008, "Wrong alignment on FActorInitStateChangedParams");
static_assert(sizeof(FActorInitStateChangedParams) == 0x000020, "Wrong size on FActorInitStateChangedParams");
static_assert(offsetof(FActorInitStateChangedParams, OwningActor) == 0x000000, "Member 'FActorInitStateChangedParams::OwningActor' has a wrong offset!");
static_assert(offsetof(FActorInitStateChangedParams, FeatureName) == 0x000008, "Member 'FActorInitStateChangedParams::FeatureName' has a wrong offset!");
static_assert(offsetof(FActorInitStateChangedParams, Implementer) == 0x000010, "Member 'FActorInitStateChangedParams::Implementer' has a wrong offset!");
static_assert(offsetof(FActorInitStateChangedParams, FeatureState) == 0x000018, "Member 'FActorInitStateChangedParams::FeatureState' has a wrong offset!");

}
