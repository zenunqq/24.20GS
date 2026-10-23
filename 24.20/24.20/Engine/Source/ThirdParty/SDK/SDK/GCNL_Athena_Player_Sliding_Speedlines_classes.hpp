#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteGame_classes.hpp"

namespace SDK
{

class AGCNL_Athena_Player_Sliding_Speedlines_C final : public AFortGameplayCueNotify_Loop
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;
	class UFXSystemComponent*                     DustFX;
	class UFortMovementComp_Character*            CachedMovementCmponent;
	class AFortPlayerController*                  CachedLocalViewingPlayerController;
	class APawn*                                  CachedPlayerPawn;
	bool                                          bIsGraceFalling;
	bool                                          bTickFree;
	uint8                                         Pad_98A[0x6];
	struct FTimerHandle                           DustStateTimerHandle;

public:
	void ExecuteUbergraph_GCNL_Athena_Player_Sliding_Speedlines(int32 EntryPoint);
	void On_View_Target_Changed(class AFortPlayerController* PlayerController, class AActor* OldViewTarget, class AActor* NewViewTarget);
	void OnLoopingStartGeneric(class AActor* MyTarget, const struct FGameplayCueParameters& Parameters, const TArray<class UFXSystemComponent*>& ParticleComponents, const TArray<class UAudioComponent*>& AudioComponents);
	void OnRemovalGeneric(class AActor* MyTarget, const struct FGameplayCueParameters& Parameters, const TArray<class UFXSystemComponent*>& ParticleComponents, const TArray<class UAudioComponent*>& AudioComponents, class ULegacyCameraShake* BurstCameraShakeInstance, class ADecalActor* BurstDecalInstance);
	void RefreshDustStateTimer();
	void UpdateDustState();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GCNL_Athena_Player_Sliding_Speedlines_C">();
	}
	static class AGCNL_Athena_Player_Sliding_Speedlines_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AGCNL_Athena_Player_Sliding_Speedlines_C>();
	}
};
static_assert(alignof(AGCNL_Athena_Player_Sliding_Speedlines_C) == 0x000008, "Wrong alignment on AGCNL_Athena_Player_Sliding_Speedlines_C");
static_assert(sizeof(AGCNL_Athena_Player_Sliding_Speedlines_C) == 0x000998, "Wrong size on AGCNL_Athena_Player_Sliding_Speedlines_C");
static_assert(offsetof(AGCNL_Athena_Player_Sliding_Speedlines_C, UberGraphFrame) == 0x000960, "Member 'AGCNL_Athena_Player_Sliding_Speedlines_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(AGCNL_Athena_Player_Sliding_Speedlines_C, DustFX) == 0x000968, "Member 'AGCNL_Athena_Player_Sliding_Speedlines_C::DustFX' has a wrong offset!");
static_assert(offsetof(AGCNL_Athena_Player_Sliding_Speedlines_C, CachedMovementCmponent) == 0x000970, "Member 'AGCNL_Athena_Player_Sliding_Speedlines_C::CachedMovementCmponent' has a wrong offset!");
static_assert(offsetof(AGCNL_Athena_Player_Sliding_Speedlines_C, CachedLocalViewingPlayerController) == 0x000978, "Member 'AGCNL_Athena_Player_Sliding_Speedlines_C::CachedLocalViewingPlayerController' has a wrong offset!");
static_assert(offsetof(AGCNL_Athena_Player_Sliding_Speedlines_C, CachedPlayerPawn) == 0x000980, "Member 'AGCNL_Athena_Player_Sliding_Speedlines_C::CachedPlayerPawn' has a wrong offset!");
static_assert(offsetof(AGCNL_Athena_Player_Sliding_Speedlines_C, bIsGraceFalling) == 0x000988, "Member 'AGCNL_Athena_Player_Sliding_Speedlines_C::bIsGraceFalling' has a wrong offset!");
static_assert(offsetof(AGCNL_Athena_Player_Sliding_Speedlines_C, bTickFree) == 0x000989, "Member 'AGCNL_Athena_Player_Sliding_Speedlines_C::bTickFree' has a wrong offset!");
static_assert(offsetof(AGCNL_Athena_Player_Sliding_Speedlines_C, DustStateTimerHandle) == 0x000990, "Member 'AGCNL_Athena_Player_Sliding_Speedlines_C::DustStateTimerHandle' has a wrong offset!");

}
