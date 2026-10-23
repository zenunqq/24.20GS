#pragma once

#include "Basic.hpp"

#include "Engine_classes.hpp"

namespace SDK
{

class UVerseWorldSubsystem final : public UWorldSubsystem
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"VerseWorldSubsystem">();
	}
	static class UVerseWorldSubsystem* GetDefaultObj()
	{
		return GetDefaultObjImpl<UVerseWorldSubsystem>();
	}
};
static_assert(alignof(UVerseWorldSubsystem) == 0x000008, "Wrong alignment on UVerseWorldSubsystem");
static_assert(sizeof(UVerseWorldSubsystem) == 0x000030, "Wrong size on UVerseWorldSubsystem");

}
