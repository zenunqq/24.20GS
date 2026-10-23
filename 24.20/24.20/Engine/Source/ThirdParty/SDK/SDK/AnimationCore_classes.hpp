#pragma once

#include "Basic.hpp"

#include "CoreUObject_classes.hpp"

namespace SDK
{

class UAnimationDataSourceRegistry final : public UObject
{
public:
	TMap<class FName, TWeakObjectPtr<class UObject>> DataSources;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"AnimationDataSourceRegistry">();
	}
	static class UAnimationDataSourceRegistry* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAnimationDataSourceRegistry>();
	}
};
static_assert(alignof(UAnimationDataSourceRegistry) == 0x000008, "Wrong alignment on UAnimationDataSourceRegistry");
static_assert(sizeof(UAnimationDataSourceRegistry) == 0x000078, "Wrong size on UAnimationDataSourceRegistry");
static_assert(offsetof(UAnimationDataSourceRegistry, DataSources) == 0x000028, "Member 'UAnimationDataSourceRegistry::DataSources' has a wrong offset!");

}
