#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteUI_classes.hpp"

namespace SDK
{

class USidebarProfileSubPanelPresence_C final : public UFortSocialProfilePresence
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;

public:
	void OnStartProfileLoading();
	void OnFinishedProfileLoading();
	void ExecuteUbergraph_SidebarProfileSubPanelPresence(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"SidebarProfileSubPanelPresence_C">();
	}
	static class USidebarProfileSubPanelPresence_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<USidebarProfileSubPanelPresence_C>();
	}
};
static_assert(alignof(USidebarProfileSubPanelPresence_C) == 0x000008, "Wrong alignment on USidebarProfileSubPanelPresence_C");
static_assert(sizeof(USidebarProfileSubPanelPresence_C) == 0x0002F0, "Wrong size on USidebarProfileSubPanelPresence_C");
static_assert(offsetof(USidebarProfileSubPanelPresence_C, UberGraphFrame) == 0x0002E8, "Member 'USidebarProfileSubPanelPresence_C::UberGraphFrame' has a wrong offset!");

}
