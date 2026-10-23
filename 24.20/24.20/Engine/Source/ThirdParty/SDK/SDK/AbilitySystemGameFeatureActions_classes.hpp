#pragma once

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "GameFeatures_classes.hpp"

namespace SDK
{

class UGameFeatureAction_AddAttributeDefaults final : public UGameFeatureAction
{
public:
	TArray<struct FSoftObjectPath>                AttribDefaultTableNames;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"GameFeatureAction_AddAttributeDefaults">();
	}
	static class UGameFeatureAction_AddAttributeDefaults* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGameFeatureAction_AddAttributeDefaults>();
	}
};
static_assert(alignof(UGameFeatureAction_AddAttributeDefaults) == 0x000008, "Wrong alignment on UGameFeatureAction_AddAttributeDefaults");
static_assert(sizeof(UGameFeatureAction_AddAttributeDefaults) == 0x000038, "Wrong size on UGameFeatureAction_AddAttributeDefaults");
static_assert(offsetof(UGameFeatureAction_AddAttributeDefaults, AttribDefaultTableNames) == 0x000028, "Member 'UGameFeatureAction_AddAttributeDefaults::AttribDefaultTableNames' has a wrong offset!");

}
