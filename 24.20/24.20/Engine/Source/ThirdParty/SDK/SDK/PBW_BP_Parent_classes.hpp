#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteGame_classes.hpp"

namespace SDK
{

class APBW_BP_Parent_C final : public ABuildingWall
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;
	TArray<class UStaticMesh*>                    StaticMeshAlternateArray;

public:
	void ExecuteUbergraph_PBW_BP_Parent(int32 EntryPoint);
	void OnRep_Random_Chance();
	void ReceiveBeginPlay();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"PBW_BP_Parent_C">();
	}
	static class APBW_BP_Parent_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<APBW_BP_Parent_C>();
	}
};
static_assert(alignof(APBW_BP_Parent_C) == 0x000008, "Wrong alignment on APBW_BP_Parent_C");
static_assert(sizeof(APBW_BP_Parent_C) == 0x001030, "Wrong size on APBW_BP_Parent_C");
static_assert(offsetof(APBW_BP_Parent_C, UberGraphFrame) == 0x001018, "Member 'APBW_BP_Parent_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(APBW_BP_Parent_C, StaticMeshAlternateArray) == 0x001020, "Member 'APBW_BP_Parent_C::StaticMeshAlternateArray' has a wrong offset!");

}
