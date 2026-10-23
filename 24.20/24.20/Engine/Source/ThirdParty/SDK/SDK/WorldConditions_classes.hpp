#pragma once

#include "Basic.hpp"

#include "WorldConditions_structs.hpp"
#include "CoreUObject_classes.hpp"

namespace SDK
{

class UWorldConditionSchema : public UObject
{
public:
	TArray<struct FWorldConditionContextDataDesc> ContextDataDescs;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"WorldConditionSchema">();
	}
	static class UWorldConditionSchema* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWorldConditionSchema>();
	}
};
static_assert(alignof(UWorldConditionSchema) == 0x000008, "Wrong alignment on UWorldConditionSchema");
static_assert(sizeof(UWorldConditionSchema) == 0x000038, "Wrong size on UWorldConditionSchema");
static_assert(offsetof(UWorldConditionSchema, ContextDataDescs) == 0x000028, "Member 'UWorldConditionSchema::ContextDataDescs' has a wrong offset!");

}
