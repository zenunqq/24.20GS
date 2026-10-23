#pragma once

#include "Basic.hpp"

#include "UMG_classes.hpp"

namespace SDK
{

class USidebarLfgState_RichText_C final : public UUserWidget
{
public:
	class UCommonRichTextBlock*                   RText_LFGText;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"SidebarLfgState_RichText_C">();
	}
	static class USidebarLfgState_RichText_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<USidebarLfgState_RichText_C>();
	}
};
static_assert(alignof(USidebarLfgState_RichText_C) == 0x000008, "Wrong alignment on USidebarLfgState_RichText_C");
static_assert(sizeof(USidebarLfgState_RichText_C) == 0x000270, "Wrong size on USidebarLfgState_RichText_C");
static_assert(offsetof(USidebarLfgState_RichText_C, RText_LFGText) == 0x000268, "Member 'USidebarLfgState_RichText_C::RText_LFGText' has a wrong offset!");

}
