#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteGame_classes.hpp"

namespace SDK
{

class AGCN_Loop_SnowFlakes_CameraAttached_Niagara_C final : public AFortGameplayCueNotify_Loop
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;
	class UNiagaraComponent*                      ReturnValue;
	int32                                         NewVar;

public:
	void ExecuteUbergraph_GCN_Loop_SnowFlakes_CameraAttached_Niagara(int32 EntryPoint);
	void OnLoopingStartGeneric(class AActor* MyTarget, const struct FGameplayCueParameters& Parameters, const TArray<class UFXSystemComponent*>& ParticleComponents, const TArray<class UAudioComponent*>& AudioComponents);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GCN_Loop_SnowFlakes_CameraAttached_Niagara_C">();
	}
	static class AGCN_Loop_SnowFlakes_CameraAttached_Niagara_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AGCN_Loop_SnowFlakes_CameraAttached_Niagara_C>();
	}
};
static_assert(alignof(AGCN_Loop_SnowFlakes_CameraAttached_Niagara_C) == 0x000008, "Wrong alignment on AGCN_Loop_SnowFlakes_CameraAttached_Niagara_C");
static_assert(sizeof(AGCN_Loop_SnowFlakes_CameraAttached_Niagara_C) == 0x000978, "Wrong size on AGCN_Loop_SnowFlakes_CameraAttached_Niagara_C");
static_assert(offsetof(AGCN_Loop_SnowFlakes_CameraAttached_Niagara_C, UberGraphFrame) == 0x000960, "Member 'AGCN_Loop_SnowFlakes_CameraAttached_Niagara_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(AGCN_Loop_SnowFlakes_CameraAttached_Niagara_C, ReturnValue) == 0x000968, "Member 'AGCN_Loop_SnowFlakes_CameraAttached_Niagara_C::ReturnValue' has a wrong offset!");
static_assert(offsetof(AGCN_Loop_SnowFlakes_CameraAttached_Niagara_C, NewVar) == 0x000970, "Member 'AGCN_Loop_SnowFlakes_CameraAttached_Niagara_C::NewVar' has a wrong offset!");

}
