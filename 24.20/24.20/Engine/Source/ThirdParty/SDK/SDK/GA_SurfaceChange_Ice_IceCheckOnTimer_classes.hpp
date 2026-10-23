#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteGame_classes.hpp"
#include "PhysicsCore_structs.hpp"

namespace SDK
{

class UGA_SurfaceChange_Ice_IceCheckOnTimer_C final : public UFortGameplayAbility
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;
	class AFortPlayerPawn*                        FortPlayerPawn;
	struct FTimerHandle                           TraceTimer;
	struct FTimerHandle                           OffIceTimer;

public:
	void ExecuteUbergraph_GA_SurfaceChange_Ice_IceCheckOnTimer(int32 EntryPoint);
	void K2_ActivateAbility();
	void K2_OnEndAbility(bool bWasCancelled);
	void RemoveIceGE();
	void TraceForTerrain();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GA_SurfaceChange_Ice_IceCheckOnTimer_C">();
	}
	static class UGA_SurfaceChange_Ice_IceCheckOnTimer_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGA_SurfaceChange_Ice_IceCheckOnTimer_C>();
	}
};
static_assert(alignof(UGA_SurfaceChange_Ice_IceCheckOnTimer_C) == 0x000008, "Wrong alignment on UGA_SurfaceChange_Ice_IceCheckOnTimer_C");
static_assert(sizeof(UGA_SurfaceChange_Ice_IceCheckOnTimer_C) == 0x000B48, "Wrong size on UGA_SurfaceChange_Ice_IceCheckOnTimer_C");
static_assert(offsetof(UGA_SurfaceChange_Ice_IceCheckOnTimer_C, UberGraphFrame) == 0x000B28, "Member 'UGA_SurfaceChange_Ice_IceCheckOnTimer_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UGA_SurfaceChange_Ice_IceCheckOnTimer_C, FortPlayerPawn) == 0x000B30, "Member 'UGA_SurfaceChange_Ice_IceCheckOnTimer_C::FortPlayerPawn' has a wrong offset!");
static_assert(offsetof(UGA_SurfaceChange_Ice_IceCheckOnTimer_C, TraceTimer) == 0x000B38, "Member 'UGA_SurfaceChange_Ice_IceCheckOnTimer_C::TraceTimer' has a wrong offset!");
static_assert(offsetof(UGA_SurfaceChange_Ice_IceCheckOnTimer_C, OffIceTimer) == 0x000B40, "Member 'UGA_SurfaceChange_Ice_IceCheckOnTimer_C::OffIceTimer' has a wrong offset!");

}
