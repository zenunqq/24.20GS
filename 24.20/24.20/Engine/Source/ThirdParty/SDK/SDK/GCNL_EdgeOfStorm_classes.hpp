#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteGame_classes.hpp"

namespace SDK
{

class AGCNL_EdgeOfStorm_C final : public AFortGameplayCueNotify_Loop
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;
	class UAudioComponent*                        Audio;
	class AFortPlayerPawn*                        StormPawn;
	bool                                          bBoundAudioPercent;

public:
	void Activated(const struct FVector& EdgeOfStorm);
	void Deactivated();
	void ExecuteUbergraph_GCNL_EdgeOfStorm(int32 EntryPoint);
	bool OnActive(class AActor* MyTarget, const struct FGameplayCueParameters& Parameters);
	bool OnExecute(class AActor* MyTarget, const struct FGameplayCueParameters& Parameters);
	bool OnRemove(class AActor* MyTarget, const struct FGameplayCueParameters& Parameters);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GCNL_EdgeOfStorm_C">();
	}
	static class AGCNL_EdgeOfStorm_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AGCNL_EdgeOfStorm_C>();
	}
};
static_assert(alignof(AGCNL_EdgeOfStorm_C) == 0x000008, "Wrong alignment on AGCNL_EdgeOfStorm_C");
static_assert(sizeof(AGCNL_EdgeOfStorm_C) == 0x000980, "Wrong size on AGCNL_EdgeOfStorm_C");
static_assert(offsetof(AGCNL_EdgeOfStorm_C, UberGraphFrame) == 0x000960, "Member 'AGCNL_EdgeOfStorm_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(AGCNL_EdgeOfStorm_C, Audio) == 0x000968, "Member 'AGCNL_EdgeOfStorm_C::Audio' has a wrong offset!");
static_assert(offsetof(AGCNL_EdgeOfStorm_C, StormPawn) == 0x000970, "Member 'AGCNL_EdgeOfStorm_C::StormPawn' has a wrong offset!");
static_assert(offsetof(AGCNL_EdgeOfStorm_C, bBoundAudioPercent) == 0x000978, "Member 'AGCNL_EdgeOfStorm_C::bBoundAudioPercent' has a wrong offset!");

}
