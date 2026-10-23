#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "GCNL_Athena_Surface_Parent_classes.hpp"

namespace SDK
{

class AGCNL_Athena_SandSurface_C final : public AGCNL_Athena_Surface_Parent_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_GCNL_Athena_SandSurface_C;
	class UNiagaraComponent*                      FootStepFX;
	bool                                          bNotValid;
	bool                                          bReplayMode;
	uint8                                         Pad_98A[0x6];
	class AFortReplaySpectatorAthena*             ReplayController;

public:
	void ExecuteUbergraph_GCNL_Athena_SandSurface(int32 EntryPoint);
	void OnLoopingStartNiagara(class AActor* MyTarget, const struct FGameplayCueParameters& Parameters, const TArray<class UNiagaraComponent*>& ParticleComponents, const TArray<class UAudioComponent*>& AudioComponents);
	void OnPlayerFootstep();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GCNL_Athena_SandSurface_C">();
	}
	static class AGCNL_Athena_SandSurface_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AGCNL_Athena_SandSurface_C>();
	}
};
static_assert(alignof(AGCNL_Athena_SandSurface_C) == 0x000008, "Wrong alignment on AGCNL_Athena_SandSurface_C");
static_assert(sizeof(AGCNL_Athena_SandSurface_C) == 0x000998, "Wrong size on AGCNL_Athena_SandSurface_C");
static_assert(offsetof(AGCNL_Athena_SandSurface_C, UberGraphFrame_GCNL_Athena_SandSurface_C) == 0x000978, "Member 'AGCNL_Athena_SandSurface_C::UberGraphFrame_GCNL_Athena_SandSurface_C' has a wrong offset!");
static_assert(offsetof(AGCNL_Athena_SandSurface_C, FootStepFX) == 0x000980, "Member 'AGCNL_Athena_SandSurface_C::FootStepFX' has a wrong offset!");
static_assert(offsetof(AGCNL_Athena_SandSurface_C, bNotValid) == 0x000988, "Member 'AGCNL_Athena_SandSurface_C::bNotValid' has a wrong offset!");
static_assert(offsetof(AGCNL_Athena_SandSurface_C, bReplayMode) == 0x000989, "Member 'AGCNL_Athena_SandSurface_C::bReplayMode' has a wrong offset!");
static_assert(offsetof(AGCNL_Athena_SandSurface_C, ReplayController) == 0x000990, "Member 'AGCNL_Athena_SandSurface_C::ReplayController' has a wrong offset!");

}
