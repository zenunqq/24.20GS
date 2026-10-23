#pragma once

#include "Basic.hpp"

#include "Engine_classes.hpp"

namespace SDK
{

class AB_AthenaAlwaysLoadedContentHack_C final : public AActor
{
public:
	class USceneComponent*                        DefaultSceneRoot;
	TArray<class UObject*>                        HardObjectList;
	TArray<class UClass*>                         HardClassList;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"B_AthenaAlwaysLoadedContentHack_C">();
	}
	static class AB_AthenaAlwaysLoadedContentHack_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AB_AthenaAlwaysLoadedContentHack_C>();
	}
};
static_assert(alignof(AB_AthenaAlwaysLoadedContentHack_C) == 0x000008, "Wrong alignment on AB_AthenaAlwaysLoadedContentHack_C");
static_assert(sizeof(AB_AthenaAlwaysLoadedContentHack_C) == 0x0002B0, "Wrong size on AB_AthenaAlwaysLoadedContentHack_C");
static_assert(offsetof(AB_AthenaAlwaysLoadedContentHack_C, DefaultSceneRoot) == 0x000288, "Member 'AB_AthenaAlwaysLoadedContentHack_C::DefaultSceneRoot' has a wrong offset!");
static_assert(offsetof(AB_AthenaAlwaysLoadedContentHack_C, HardObjectList) == 0x000290, "Member 'AB_AthenaAlwaysLoadedContentHack_C::HardObjectList' has a wrong offset!");
static_assert(offsetof(AB_AthenaAlwaysLoadedContentHack_C, HardClassList) == 0x0002A0, "Member 'AB_AthenaAlwaysLoadedContentHack_C::HardClassList' has a wrong offset!");

}
