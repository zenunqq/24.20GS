#pragma once

#include "Basic.hpp"

#include "GameFeatures_classes.hpp"

namespace SDK
{

class UFortVKPlayGameFeatureAction_RegisterContentErrorHandler final : public UGameFeatureAction
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortVKPlayGameFeatureAction_RegisterContentErrorHandler">();
	}
	static class UFortVKPlayGameFeatureAction_RegisterContentErrorHandler* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortVKPlayGameFeatureAction_RegisterContentErrorHandler>();
	}
};
static_assert(alignof(UFortVKPlayGameFeatureAction_RegisterContentErrorHandler) == 0x000008, "Wrong alignment on UFortVKPlayGameFeatureAction_RegisterContentErrorHandler");
static_assert(sizeof(UFortVKPlayGameFeatureAction_RegisterContentErrorHandler) == 0x000028, "Wrong size on UFortVKPlayGameFeatureAction_RegisterContentErrorHandler");

}
