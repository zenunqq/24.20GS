#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteUI_classes.hpp"

namespace SDK
{

class USidebar_C final : public UFortSocialPanelView_Sidebar
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;
	class USidebarProfile_C*                      Panel_Profile;
	class USafeZone*                              Safezone_OnboardingTooltip;
	class USafeZone*                              SafeZone_SideBar;
	class FText                                   Text_PartyUp;
	class FText                                   Text_FindFriends;
	class FText                                   Text_VoiceChat;
	class FText                                   Text_UserSettings;

public:
	void BP_OnActivated();
	void ExecuteUbergraph_Sidebar(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Sidebar_C">();
	}
	static class USidebar_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<USidebar_C>();
	}
};
static_assert(alignof(USidebar_C) == 0x000008, "Wrong alignment on USidebar_C");
static_assert(sizeof(USidebar_C) == 0x000658, "Wrong size on USidebar_C");
static_assert(offsetof(USidebar_C, UberGraphFrame) == 0x0005D8, "Member 'USidebar_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(USidebar_C, Panel_Profile) == 0x0005E0, "Member 'USidebar_C::Panel_Profile' has a wrong offset!");
static_assert(offsetof(USidebar_C, Safezone_OnboardingTooltip) == 0x0005E8, "Member 'USidebar_C::Safezone_OnboardingTooltip' has a wrong offset!");
static_assert(offsetof(USidebar_C, SafeZone_SideBar) == 0x0005F0, "Member 'USidebar_C::SafeZone_SideBar' has a wrong offset!");
static_assert(offsetof(USidebar_C, Text_PartyUp) == 0x0005F8, "Member 'USidebar_C::Text_PartyUp' has a wrong offset!");
static_assert(offsetof(USidebar_C, Text_FindFriends) == 0x000610, "Member 'USidebar_C::Text_FindFriends' has a wrong offset!");
static_assert(offsetof(USidebar_C, Text_VoiceChat) == 0x000628, "Member 'USidebar_C::Text_VoiceChat' has a wrong offset!");
static_assert(offsetof(USidebar_C, Text_UserSettings) == 0x000640, "Member 'USidebar_C::Text_UserSettings' has a wrong offset!");

}
