#pragma once

#include "Basic.hpp"

#include "Announce_EventCine_classes.hpp"

namespace SDK
{

class AAnnounce_Storm2018Cine_C final : public AAnnounce_EventCine_C
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Announce_Storm2018Cine_C">();
	}
	static class AAnnounce_Storm2018Cine_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AAnnounce_Storm2018Cine_C>();
	}
};
static_assert(alignof(AAnnounce_Storm2018Cine_C) == 0x000008, "Wrong alignment on AAnnounce_Storm2018Cine_C");
static_assert(sizeof(AAnnounce_Storm2018Cine_C) == 0x000330, "Wrong size on AAnnounce_Storm2018Cine_C");

}
