#pragma once

#include "Basic.hpp"

#include "FortniteGame_classes.hpp"

namespace SDK
{

class ATracerGeneric_C final : public AFortTracerBase
{
public:
	void UserConstructionScript();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"TracerGeneric_C">();
	}
	static class ATracerGeneric_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ATracerGeneric_C>();
	}
};
static_assert(alignof(ATracerGeneric_C) == 0x000008, "Wrong alignment on ATracerGeneric_C");
static_assert(sizeof(ATracerGeneric_C) == 0x000368, "Wrong size on ATracerGeneric_C");

}
