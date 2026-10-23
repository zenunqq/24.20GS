#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteGame_classes.hpp"

namespace SDK
{

class AGCNL_Athena_HidingProp_PropTeleporting_C final : public AFortGameplayCueNotify_Loop
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;

public:
	void ExecuteUbergraph_GCNL_Athena_HidingProp_PropTeleporting(int32 EntryPoint);
	void ReceiveBeginPlay();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GCNL_Athena_HidingProp_PropTeleporting_C">();
	}
	static class AGCNL_Athena_HidingProp_PropTeleporting_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AGCNL_Athena_HidingProp_PropTeleporting_C>();
	}
};
static_assert(alignof(AGCNL_Athena_HidingProp_PropTeleporting_C) == 0x000008, "Wrong alignment on AGCNL_Athena_HidingProp_PropTeleporting_C");
static_assert(sizeof(AGCNL_Athena_HidingProp_PropTeleporting_C) == 0x000968, "Wrong size on AGCNL_Athena_HidingProp_PropTeleporting_C");
static_assert(offsetof(AGCNL_Athena_HidingProp_PropTeleporting_C, UberGraphFrame) == 0x000960, "Member 'AGCNL_Athena_HidingProp_PropTeleporting_C::UberGraphFrame' has a wrong offset!");

}
