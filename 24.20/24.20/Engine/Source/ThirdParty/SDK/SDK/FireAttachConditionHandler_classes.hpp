#pragma once

#include "Basic.hpp"

#include "FortniteGame_classes.hpp"

namespace SDK
{

class UFireAttachConditionHandler_C final : public UFortCurieElementAttachConditionHandlerFire
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"FireAttachConditionHandler_C">();
	}
	static class UFireAttachConditionHandler_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFireAttachConditionHandler_C>();
	}
};
static_assert(alignof(UFireAttachConditionHandler_C) == 0x000008, "Wrong alignment on UFireAttachConditionHandler_C");
static_assert(sizeof(UFireAttachConditionHandler_C) == 0x000040, "Wrong size on UFireAttachConditionHandler_C");

}
