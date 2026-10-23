#pragma once

#include "Basic.hpp"

#include "FortniteGame_classes.hpp"

namespace SDK
{

class AAthenaFrontEndMiniMapManager_C final : public AFortFrontEndMiniMapManager
{
public:
	class USceneComponent*                        DefaultSceneRoot;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"AthenaFrontEndMiniMapManager_C">();
	}
	static class AAthenaFrontEndMiniMapManager_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AAthenaFrontEndMiniMapManager_C>();
	}
};
static_assert(alignof(AAthenaFrontEndMiniMapManager_C) == 0x000008, "Wrong alignment on AAthenaFrontEndMiniMapManager_C");
static_assert(sizeof(AAthenaFrontEndMiniMapManager_C) == 0x0004D0, "Wrong size on AAthenaFrontEndMiniMapManager_C");
static_assert(offsetof(AAthenaFrontEndMiniMapManager_C, DefaultSceneRoot) == 0x0004C8, "Member 'AAthenaFrontEndMiniMapManager_C::DefaultSceneRoot' has a wrong offset!");

}
