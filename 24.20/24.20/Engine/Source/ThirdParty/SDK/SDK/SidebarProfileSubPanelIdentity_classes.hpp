#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteUI_classes.hpp"
#include "UMG_structs.hpp"

namespace SDK
{

class USidebarProfileSubPanelIdentity_C final : public UFortSocialProfileIdentity
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;
	class UHorizontalBox*                         HorizontalBox_SeasonLevel;
	class UImage*                                 Image_89;
	class UImage*                                 Image_243;
	class UImage*                                 Image_Battlepass;
	class UOverlay*                               Overlay_OnlineStatus;
	class UCommonTextBlock*                       Text_SeasonLevel;

public:
	void ExecuteUbergraph_SidebarProfileSubPanelIdentity(int32 EntryPoint);
	void OnFinishedProfileLoading();
	void OnNewAvatarsEnabledChanged(bool bUsingNewAvatars);
	void OnStartProfileLoading();
	void SetBattlePassVisiblity(bool bIsVisible);
	void SetFortniteCrewVisiblity(bool bIsVisible);
	void SetSeasonLevel(int32 Level);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"SidebarProfileSubPanelIdentity_C">();
	}
	static class USidebarProfileSubPanelIdentity_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<USidebarProfileSubPanelIdentity_C>();
	}
};
static_assert(alignof(USidebarProfileSubPanelIdentity_C) == 0x000008, "Wrong alignment on USidebarProfileSubPanelIdentity_C");
static_assert(sizeof(USidebarProfileSubPanelIdentity_C) == 0x000368, "Wrong size on USidebarProfileSubPanelIdentity_C");
static_assert(offsetof(USidebarProfileSubPanelIdentity_C, UberGraphFrame) == 0x000330, "Member 'USidebarProfileSubPanelIdentity_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(USidebarProfileSubPanelIdentity_C, HorizontalBox_SeasonLevel) == 0x000338, "Member 'USidebarProfileSubPanelIdentity_C::HorizontalBox_SeasonLevel' has a wrong offset!");
static_assert(offsetof(USidebarProfileSubPanelIdentity_C, Image_89) == 0x000340, "Member 'USidebarProfileSubPanelIdentity_C::Image_89' has a wrong offset!");
static_assert(offsetof(USidebarProfileSubPanelIdentity_C, Image_243) == 0x000348, "Member 'USidebarProfileSubPanelIdentity_C::Image_243' has a wrong offset!");
static_assert(offsetof(USidebarProfileSubPanelIdentity_C, Image_Battlepass) == 0x000350, "Member 'USidebarProfileSubPanelIdentity_C::Image_Battlepass' has a wrong offset!");
static_assert(offsetof(USidebarProfileSubPanelIdentity_C, Overlay_OnlineStatus) == 0x000358, "Member 'USidebarProfileSubPanelIdentity_C::Overlay_OnlineStatus' has a wrong offset!");
static_assert(offsetof(USidebarProfileSubPanelIdentity_C, Text_SeasonLevel) == 0x000360, "Member 'USidebarProfileSubPanelIdentity_C::Text_SeasonLevel' has a wrong offset!");

}
