#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "GameplayAbilities_structs.hpp"
#include "DynamicUI_classes.hpp"

namespace SDK
{

class APlayerAugmentsUIDirector_C final : public ADynamicUIDirectorBase
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;
	class USceneComponent*                        DefaultSceneRoot;
	struct FScalableFloat                         AugmentsEnabledViaHotfix;

public:
	void ReceiveBeginPlay();
	void ExecuteUbergraph_PlayerAugmentsUIDirector(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"PlayerAugmentsUIDirector_C">();
	}
	static class APlayerAugmentsUIDirector_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<APlayerAugmentsUIDirector_C>();
	}
};
static_assert(alignof(APlayerAugmentsUIDirector_C) == 0x000008, "Wrong alignment on APlayerAugmentsUIDirector_C");
static_assert(sizeof(APlayerAugmentsUIDirector_C) == 0x0002F0, "Wrong size on APlayerAugmentsUIDirector_C");
static_assert(offsetof(APlayerAugmentsUIDirector_C, UberGraphFrame) == 0x0002B8, "Member 'APlayerAugmentsUIDirector_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(APlayerAugmentsUIDirector_C, DefaultSceneRoot) == 0x0002C0, "Member 'APlayerAugmentsUIDirector_C::DefaultSceneRoot' has a wrong offset!");
static_assert(offsetof(APlayerAugmentsUIDirector_C, AugmentsEnabledViaHotfix) == 0x0002C8, "Member 'APlayerAugmentsUIDirector_C::AugmentsEnabledViaHotfix' has a wrong offset!");

}
