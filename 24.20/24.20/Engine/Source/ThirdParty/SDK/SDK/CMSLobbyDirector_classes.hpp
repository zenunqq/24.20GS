#pragma once

#include "Basic.hpp"

#include "FortniteUI_classes.hpp"

namespace SDK
{

class ACMSLobbyDirector_C final : public ADynamicBackgroundDirector
{
public:
	class USceneComponent*                        DefaultSceneRoot;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"CMSLobbyDirector_C">();
	}
	static class ACMSLobbyDirector_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ACMSLobbyDirector_C>();
	}
};
static_assert(alignof(ACMSLobbyDirector_C) == 0x000008, "Wrong alignment on ACMSLobbyDirector_C");
static_assert(sizeof(ACMSLobbyDirector_C) == 0x000370, "Wrong size on ACMSLobbyDirector_C");
static_assert(offsetof(ACMSLobbyDirector_C, DefaultSceneRoot) == 0x000368, "Member 'ACMSLobbyDirector_C::DefaultSceneRoot' has a wrong offset!");

}
