#pragma once

#include "Basic.hpp"

#include "GAB_GenericApplyFullBodyHit_classes.hpp"

namespace SDK
{

class UGAB_ApplyFullBodyHit_NonParticipant_C final : public UGAB_GenericApplyFullBodyHit_C
{
public:
	void PickFullBodyHitMontageSection();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GAB_ApplyFullBodyHit_NonParticipant_C">();
	}
	static class UGAB_ApplyFullBodyHit_NonParticipant_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGAB_ApplyFullBodyHit_NonParticipant_C>();
	}
};
static_assert(alignof(UGAB_ApplyFullBodyHit_NonParticipant_C) == 0x000008, "Wrong alignment on UGAB_ApplyFullBodyHit_NonParticipant_C");
static_assert(sizeof(UGAB_ApplyFullBodyHit_NonParticipant_C) == 0x000B98, "Wrong size on UGAB_ApplyFullBodyHit_NonParticipant_C");

}
