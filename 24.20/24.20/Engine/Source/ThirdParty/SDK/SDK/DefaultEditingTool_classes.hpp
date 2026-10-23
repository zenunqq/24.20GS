#pragma once

#include "Basic.hpp"

#include "FortniteGame_classes.hpp"

namespace SDK
{

class ADefaultEditingTool_C final : public AFortWeap_EditingTool
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"DefaultEditingTool_C">();
	}
	static class ADefaultEditingTool_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ADefaultEditingTool_C>();
	}
};
static_assert(alignof(ADefaultEditingTool_C) == 0x000008, "Wrong alignment on ADefaultEditingTool_C");
static_assert(sizeof(ADefaultEditingTool_C) == 0x0010E0, "Wrong size on ADefaultEditingTool_C");

}
