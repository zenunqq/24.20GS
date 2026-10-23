#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteUI_structs.hpp"
#include "FortniteUI_classes.hpp"
#include "CoreUObject_structs.hpp"
#include "UMG_structs.hpp"

namespace SDK
{

class USidebarInteraction_Profile_C final : public UFortSidebarSocialInteractionButton
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;
	class UWidgetAnimation*                       OnHover;
	class UImage*                                 EncourageEpicFriend;
	class UImage*                                 Image_Arrow;
	class UMenuAnchor*                            MenuAnchor_Actions;
	class USizeBox*                               SizeBox_0;
	class UWBP_RebootRallyIcon_C*                 WBP_RebootRallyIcon;
	struct FLinearColor                           EncourageEpicFriend_IdleColor;
	struct FLinearColor                           EncourageEpicFriend_HoveredColor;
	struct FLinearColor                           AddFriendColor;

public:
	void BP_OnHovered();
	void BP_OnUnhovered();
	void ExecuteUbergraph_SidebarInteraction_Profile(int32 EntryPoint);
	void OnInitialized();
	void OnInteractionSet();
	void SetArrow();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"SidebarInteraction_Profile_C">();
	}
	static class USidebarInteraction_Profile_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<USidebarInteraction_Profile_C>();
	}
};
static_assert(alignof(USidebarInteraction_Profile_C) == 0x000010, "Wrong alignment on USidebarInteraction_Profile_C");
static_assert(sizeof(USidebarInteraction_Profile_C) == 0x001560, "Wrong size on USidebarInteraction_Profile_C");
static_assert(offsetof(USidebarInteraction_Profile_C, UberGraphFrame) == 0x0014F0, "Member 'USidebarInteraction_Profile_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(USidebarInteraction_Profile_C, OnHover) == 0x0014F8, "Member 'USidebarInteraction_Profile_C::OnHover' has a wrong offset!");
static_assert(offsetof(USidebarInteraction_Profile_C, EncourageEpicFriend) == 0x001500, "Member 'USidebarInteraction_Profile_C::EncourageEpicFriend' has a wrong offset!");
static_assert(offsetof(USidebarInteraction_Profile_C, Image_Arrow) == 0x001508, "Member 'USidebarInteraction_Profile_C::Image_Arrow' has a wrong offset!");
static_assert(offsetof(USidebarInteraction_Profile_C, MenuAnchor_Actions) == 0x001510, "Member 'USidebarInteraction_Profile_C::MenuAnchor_Actions' has a wrong offset!");
static_assert(offsetof(USidebarInteraction_Profile_C, SizeBox_0) == 0x001518, "Member 'USidebarInteraction_Profile_C::SizeBox_0' has a wrong offset!");
static_assert(offsetof(USidebarInteraction_Profile_C, WBP_RebootRallyIcon) == 0x001520, "Member 'USidebarInteraction_Profile_C::WBP_RebootRallyIcon' has a wrong offset!");
static_assert(offsetof(USidebarInteraction_Profile_C, EncourageEpicFriend_IdleColor) == 0x001528, "Member 'USidebarInteraction_Profile_C::EncourageEpicFriend_IdleColor' has a wrong offset!");
static_assert(offsetof(USidebarInteraction_Profile_C, EncourageEpicFriend_HoveredColor) == 0x001538, "Member 'USidebarInteraction_Profile_C::EncourageEpicFriend_HoveredColor' has a wrong offset!");
static_assert(offsetof(USidebarInteraction_Profile_C, AddFriendColor) == 0x001548, "Member 'USidebarInteraction_Profile_C::AddFriendColor' has a wrong offset!");

}
