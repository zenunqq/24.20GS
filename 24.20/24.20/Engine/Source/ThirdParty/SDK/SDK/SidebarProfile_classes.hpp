#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteUI_classes.hpp"

namespace SDK
{

class USidebarProfile_C final : public UFortSocialProfilePanel
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;
	class UWidgetAnimation*                       OnContentLoaded;
	class UCommonBorder*                          Border_PresenceRegion;
	class USafeZone*                              SafeZone_Content;
	class UImage*                                 SidebarProfileLoading;
	class USidebarProfileSubPanelFriendRequest_C* SubPanelFriendRequest;

public:
	void ExecuteUbergraph_SidebarProfile(int32 EntryPoint);
	void OnFinishedProfileLoading();
	void OnStartProfileLoading();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"SidebarProfile_C">();
	}
	static class USidebarProfile_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<USidebarProfile_C>();
	}
};
static_assert(alignof(USidebarProfile_C) == 0x000008, "Wrong alignment on USidebarProfile_C");
static_assert(sizeof(USidebarProfile_C) == 0x0004A8, "Wrong size on USidebarProfile_C");
static_assert(offsetof(USidebarProfile_C, UberGraphFrame) == 0x000478, "Member 'USidebarProfile_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(USidebarProfile_C, OnContentLoaded) == 0x000480, "Member 'USidebarProfile_C::OnContentLoaded' has a wrong offset!");
static_assert(offsetof(USidebarProfile_C, Border_PresenceRegion) == 0x000488, "Member 'USidebarProfile_C::Border_PresenceRegion' has a wrong offset!");
static_assert(offsetof(USidebarProfile_C, SafeZone_Content) == 0x000490, "Member 'USidebarProfile_C::SafeZone_Content' has a wrong offset!");
static_assert(offsetof(USidebarProfile_C, SidebarProfileLoading) == 0x000498, "Member 'USidebarProfile_C::SidebarProfileLoading' has a wrong offset!");
static_assert(offsetof(USidebarProfile_C, SubPanelFriendRequest) == 0x0004A0, "Member 'USidebarProfile_C::SubPanelFriendRequest' has a wrong offset!");

}
