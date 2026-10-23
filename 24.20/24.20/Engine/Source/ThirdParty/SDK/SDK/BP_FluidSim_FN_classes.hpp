#pragma once

#include "Basic.hpp"

#include "BP_FluidSim_01_classes.hpp"
#include "FluidForceDynamic_structs.hpp"
#include "Engine_structs.hpp"
#include "GameplayTags_structs.hpp"

namespace SDK
{

class ABP_FluidSim_FN_C final : public ABP_FluidSim_01_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_BP_FluidSim_FN_C;
	struct FFluidForceDynamic                     BoatForceSettings;
	struct FFluidForceDynamic                     PlayerForceSettings;
	struct FFluidForceDynamic                     MechForceSettings;
	TArray<class AFortPawn*>                      RelevantFortPawns;
	bool                                          Use_FN_Pawn_Forces;
	uint8                                         Pad_6D1[0x7];
	TMap<struct FGameplayTag, struct FFluidForceDynamic> VehicleTypeMap;

public:
	void ExecuteUbergraph_BP_FluidSim_FN(int32 EntryPoint);
	void GetFortnitePawnForces();
	void GetLocalPawn(class APawn** Pawn);
	void GetPlayerPawnForces();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_FluidSim_FN_C">();
	}
	static class ABP_FluidSim_FN_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_FluidSim_FN_C>();
	}
};
static_assert(alignof(ABP_FluidSim_FN_C) == 0x000008, "Wrong alignment on ABP_FluidSim_FN_C");
static_assert(sizeof(ABP_FluidSim_FN_C) == 0x000728, "Wrong size on ABP_FluidSim_FN_C");
static_assert(offsetof(ABP_FluidSim_FN_C, UberGraphFrame_BP_FluidSim_FN_C) == 0x000568, "Member 'ABP_FluidSim_FN_C::UberGraphFrame_BP_FluidSim_FN_C' has a wrong offset!");
static_assert(offsetof(ABP_FluidSim_FN_C, BoatForceSettings) == 0x000570, "Member 'ABP_FluidSim_FN_C::BoatForceSettings' has a wrong offset!");
static_assert(offsetof(ABP_FluidSim_FN_C, PlayerForceSettings) == 0x0005E0, "Member 'ABP_FluidSim_FN_C::PlayerForceSettings' has a wrong offset!");
static_assert(offsetof(ABP_FluidSim_FN_C, MechForceSettings) == 0x000650, "Member 'ABP_FluidSim_FN_C::MechForceSettings' has a wrong offset!");
static_assert(offsetof(ABP_FluidSim_FN_C, RelevantFortPawns) == 0x0006C0, "Member 'ABP_FluidSim_FN_C::RelevantFortPawns' has a wrong offset!");
static_assert(offsetof(ABP_FluidSim_FN_C, Use_FN_Pawn_Forces) == 0x0006D0, "Member 'ABP_FluidSim_FN_C::Use_FN_Pawn_Forces' has a wrong offset!");
static_assert(offsetof(ABP_FluidSim_FN_C, VehicleTypeMap) == 0x0006D8, "Member 'ABP_FluidSim_FN_C::VehicleTypeMap' has a wrong offset!");

}
