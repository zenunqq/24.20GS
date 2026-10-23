#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteUI_classes.hpp"

namespace SDK
{

class USidebarPanelYourProfile_C final : public UFortSidebarPanelYourProfile
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;
	class UWidgetAnimation*                       OnContentLoaded;
	class UCommonBorder*                          Border_PresenceRegion;
	class USidebarProfileLoading_C*               SidebarProfileLoading;

public:
	void ExecuteUbergraph_SidebarPanelYourProfile(int32 EntryPoint);
	void OnFinishedProfileLoading();
	void OnStartProfileLoading();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"SidebarPanelYourProfile_C">();
	}
	static class USidebarPanelYourProfile_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<USidebarPanelYourProfile_C>();
	}
};
static_assert(alignof(USidebarPanelYourProfile_C) == 0x000008, "Wrong alignment on USidebarPanelYourProfile_C");
static_assert(sizeof(USidebarPanelYourProfile_C) == 0x0004A8, "Wrong size on USidebarPanelYourProfile_C");
static_assert(offsetof(USidebarPanelYourProfile_C, UberGraphFrame) == 0x000488, "Member 'USidebarPanelYourProfile_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(USidebarPanelYourProfile_C, OnContentLoaded) == 0x000490, "Member 'USidebarPanelYourProfile_C::OnContentLoaded' has a wrong offset!");
static_assert(offsetof(USidebarPanelYourProfile_C, Border_PresenceRegion) == 0x000498, "Member 'USidebarPanelYourProfile_C::Border_PresenceRegion' has a wrong offset!");
static_assert(offsetof(USidebarPanelYourProfile_C, SidebarProfileLoading) == 0x0004A0, "Member 'USidebarPanelYourProfile_C::SidebarProfileLoading' has a wrong offset!");

}
