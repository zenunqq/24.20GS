#pragma once

#include "Basic.hpp"

#include "GCN_RezOut_classes.hpp"
#include "Engine_structs.hpp"

namespace SDK
{

class AGCN_RezOut_NPC_C final : public AGCN_RezOut_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_GCN_RezOut_NPC_C;
	class USoundBase*                             SoundOnNPCDeath;

public:
	void ExecuteUbergraph_GCN_RezOut_NPC(int32 EntryPoint);
	void Pre_Sequence_Change();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GCN_RezOut_NPC_C">();
	}
	static class AGCN_RezOut_NPC_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AGCN_RezOut_NPC_C>();
	}
};
static_assert(alignof(AGCN_RezOut_NPC_C) == 0x000008, "Wrong alignment on AGCN_RezOut_NPC_C");
static_assert(sizeof(AGCN_RezOut_NPC_C) == 0x000728, "Wrong size on AGCN_RezOut_NPC_C");
static_assert(offsetof(AGCN_RezOut_NPC_C, UberGraphFrame_GCN_RezOut_NPC_C) == 0x000718, "Member 'AGCN_RezOut_NPC_C::UberGraphFrame_GCN_RezOut_NPC_C' has a wrong offset!");
static_assert(offsetof(AGCN_RezOut_NPC_C, SoundOnNPCDeath) == 0x000720, "Member 'AGCN_RezOut_NPC_C::SoundOnNPCDeath' has a wrong offset!");

}
