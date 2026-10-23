#pragma once

#include "Basic.hpp"

#include "GCN_RezOut_classes.hpp"
#include "Engine_structs.hpp"

namespace SDK
{

class AGCN_NPC_Interaction_RezOut_Glitch_C final : public AGCN_RezOut_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_GCN_NPC_Interaction_RezOut_Glitch_C;
	class USoundBase*                             SoundOnNPCDeath;

public:
	void ExecuteUbergraph_GCN_NPC_Interaction_RezOut_Glitch(int32 EntryPoint);
	void Spawn_Dissolve_VFX();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GCN_NPC_Interaction_RezOut_Glitch_C">();
	}
	static class AGCN_NPC_Interaction_RezOut_Glitch_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AGCN_NPC_Interaction_RezOut_Glitch_C>();
	}
};
static_assert(alignof(AGCN_NPC_Interaction_RezOut_Glitch_C) == 0x000008, "Wrong alignment on AGCN_NPC_Interaction_RezOut_Glitch_C");
static_assert(sizeof(AGCN_NPC_Interaction_RezOut_Glitch_C) == 0x000728, "Wrong size on AGCN_NPC_Interaction_RezOut_Glitch_C");
static_assert(offsetof(AGCN_NPC_Interaction_RezOut_Glitch_C, UberGraphFrame_GCN_NPC_Interaction_RezOut_Glitch_C) == 0x000718, "Member 'AGCN_NPC_Interaction_RezOut_Glitch_C::UberGraphFrame_GCN_NPC_Interaction_RezOut_Glitch_C' has a wrong offset!");
static_assert(offsetof(AGCN_NPC_Interaction_RezOut_Glitch_C, SoundOnNPCDeath) == 0x000720, "Member 'AGCN_NPC_Interaction_RezOut_Glitch_C::SoundOnNPCDeath' has a wrong offset!");

}
