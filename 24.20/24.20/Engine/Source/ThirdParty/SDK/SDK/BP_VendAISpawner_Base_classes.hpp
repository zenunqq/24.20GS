#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Engine_classes.hpp"

namespace SDK
{

class ABP_VendAISpawner_Base_C : public AActor
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;
	class UNiagaraComponent*                      Niagara;
	double                                        SpawnDelay;
	struct FDataTableRowHandle                    EventRowHandle;

public:
	void ExecuteUbergraph_BP_VendAISpawner_Base(int32 EntryPoint);
	void ReceiveBeginPlay();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_VendAISpawner_Base_C">();
	}
	static class ABP_VendAISpawner_Base_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_VendAISpawner_Base_C>();
	}
};
static_assert(alignof(ABP_VendAISpawner_Base_C) == 0x000008, "Wrong alignment on ABP_VendAISpawner_Base_C");
static_assert(sizeof(ABP_VendAISpawner_Base_C) == 0x0002B0, "Wrong size on ABP_VendAISpawner_Base_C");
static_assert(offsetof(ABP_VendAISpawner_Base_C, UberGraphFrame) == 0x000288, "Member 'ABP_VendAISpawner_Base_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ABP_VendAISpawner_Base_C, Niagara) == 0x000290, "Member 'ABP_VendAISpawner_Base_C::Niagara' has a wrong offset!");
static_assert(offsetof(ABP_VendAISpawner_Base_C, SpawnDelay) == 0x000298, "Member 'ABP_VendAISpawner_Base_C::SpawnDelay' has a wrong offset!");
static_assert(offsetof(ABP_VendAISpawner_Base_C, EventRowHandle) == 0x0002A0, "Member 'ABP_VendAISpawner_Base_C::EventRowHandle' has a wrong offset!");

}
