#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteUI_classes.hpp"

namespace SDK
{

class USidebarProfileSubPanelMutualCount_C final : public UFortSocialProfileMutualCount
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;

public:
	void OnStartProfileLoading();
	void OnFinishedProfileLoading();
	void ExecuteUbergraph_SidebarProfileSubPanelMutualCount(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"SidebarProfileSubPanelMutualCount_C">();
	}
	static class USidebarProfileSubPanelMutualCount_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<USidebarProfileSubPanelMutualCount_C>();
	}
};
static_assert(alignof(USidebarProfileSubPanelMutualCount_C) == 0x000008, "Wrong alignment on USidebarProfileSubPanelMutualCount_C");
static_assert(sizeof(USidebarProfileSubPanelMutualCount_C) == 0x0002F0, "Wrong size on USidebarProfileSubPanelMutualCount_C");
static_assert(offsetof(USidebarProfileSubPanelMutualCount_C, UberGraphFrame) == 0x0002E8, "Member 'USidebarProfileSubPanelMutualCount_C::UberGraphFrame' has a wrong offset!");

}
