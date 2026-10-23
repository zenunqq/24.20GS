#pragma once

#include "Basic.hpp"

#include "MemoryUsageQueries_structs.hpp"
#include "CoreUObject_classes.hpp"

namespace SDK
{

class UMemoryUsageQueriesConfig final : public UObject
{
public:
	TArray<struct FCollectionInfo>                Collections;
	TMap<class FString, class FString>            SavingsPresets;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"MemoryUsageQueriesConfig">();
	}
	static class UMemoryUsageQueriesConfig* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMemoryUsageQueriesConfig>();
	}
};
static_assert(alignof(UMemoryUsageQueriesConfig) == 0x000008, "Wrong alignment on UMemoryUsageQueriesConfig");
static_assert(sizeof(UMemoryUsageQueriesConfig) == 0x000088, "Wrong size on UMemoryUsageQueriesConfig");
static_assert(offsetof(UMemoryUsageQueriesConfig, Collections) == 0x000028, "Member 'UMemoryUsageQueriesConfig::Collections' has a wrong offset!");
static_assert(offsetof(UMemoryUsageQueriesConfig, SavingsPresets) == 0x000038, "Member 'UMemoryUsageQueriesConfig::SavingsPresets' has a wrong offset!");

}
