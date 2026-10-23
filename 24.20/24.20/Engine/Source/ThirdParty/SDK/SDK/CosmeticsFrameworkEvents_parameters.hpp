#pragma once

#include "Basic.hpp"

#include "CosmeticsFrameworkEvents_structs.hpp"

namespace SDK::Params
{

struct CosmeticsEventTarget_RegisterOnCosmeticApplicationCompleted_BP final
{
public:
	TDelegate<void(TScriptInterface<class ICosmeticsEventTarget>& EventTarget)> Delegate;
	int32                                         Flags_0;
	struct FCosmeticsEventHandle                  ReturnValue;
	uint8                                         Pad_11[0x3];
};
static_assert(alignof(CosmeticsEventTarget_RegisterOnCosmeticApplicationCompleted_BP) == 0x000004, "Wrong alignment on CosmeticsEventTarget_RegisterOnCosmeticApplicationCompleted_BP");
static_assert(sizeof(CosmeticsEventTarget_RegisterOnCosmeticApplicationCompleted_BP) == 0x000014, "Wrong size on CosmeticsEventTarget_RegisterOnCosmeticApplicationCompleted_BP");
static_assert(offsetof(CosmeticsEventTarget_RegisterOnCosmeticApplicationCompleted_BP, Delegate) == 0x000000, "Member 'CosmeticsEventTarget_RegisterOnCosmeticApplicationCompleted_BP::Delegate' has a wrong offset!");
static_assert(offsetof(CosmeticsEventTarget_RegisterOnCosmeticApplicationCompleted_BP, Flags_0) == 0x00000C, "Member 'CosmeticsEventTarget_RegisterOnCosmeticApplicationCompleted_BP::Flags_0' has a wrong offset!");
static_assert(offsetof(CosmeticsEventTarget_RegisterOnCosmeticApplicationCompleted_BP, ReturnValue) == 0x000010, "Member 'CosmeticsEventTarget_RegisterOnCosmeticApplicationCompleted_BP::ReturnValue' has a wrong offset!");

}
