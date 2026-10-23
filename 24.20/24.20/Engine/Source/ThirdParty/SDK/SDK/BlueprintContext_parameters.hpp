#pragma once

#include "Basic.hpp"

namespace SDK::Params
{

struct BlueprintContextLibrary_GetContext final
{
public:
	class UObject*                                ContextObject;
	TSubclassOf<class USubsystem>                 Class_0;
	class USubsystem*                             ReturnValue;
};
static_assert(alignof(BlueprintContextLibrary_GetContext) == 0x000008, "Wrong alignment on BlueprintContextLibrary_GetContext");
static_assert(sizeof(BlueprintContextLibrary_GetContext) == 0x000018, "Wrong size on BlueprintContextLibrary_GetContext");
static_assert(offsetof(BlueprintContextLibrary_GetContext, ContextObject) == 0x000000, "Member 'BlueprintContextLibrary_GetContext::ContextObject' has a wrong offset!");
static_assert(offsetof(BlueprintContextLibrary_GetContext, Class_0) == 0x000008, "Member 'BlueprintContextLibrary_GetContext::Class_0' has a wrong offset!");
static_assert(offsetof(BlueprintContextLibrary_GetContext, ReturnValue) == 0x000010, "Member 'BlueprintContextLibrary_GetContext::ReturnValue' has a wrong offset!");

}
