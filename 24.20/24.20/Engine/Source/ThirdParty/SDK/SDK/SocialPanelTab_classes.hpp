#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteUI_classes.hpp"

namespace SDK
{

class USocialPanelTab_C final : public UFortSocialTab
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;
	class UWidgetAnimation*                       Unselected;
	class UWidgetAnimation*                       OnFriendsOnlineUpdated;
	class UWidgetAnimation*                       Hovered;
	class UWidgetAnimation*                       Selected;

public:
	void BP_OnDeselected();
	void BP_OnHovered();
	void BP_OnSelected();
	void BP_OnUnhovered();
	void ExecuteUbergraph_SocialPanelTab(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"SocialPanelTab_C">();
	}
	static class USocialPanelTab_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<USocialPanelTab_C>();
	}
};
static_assert(alignof(USocialPanelTab_C) == 0x000010, "Wrong alignment on USocialPanelTab_C");
static_assert(sizeof(USocialPanelTab_C) == 0x0014C0, "Wrong size on USocialPanelTab_C");
static_assert(offsetof(USocialPanelTab_C, UberGraphFrame) == 0x001490, "Member 'USocialPanelTab_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(USocialPanelTab_C, Unselected) == 0x001498, "Member 'USocialPanelTab_C::Unselected' has a wrong offset!");
static_assert(offsetof(USocialPanelTab_C, OnFriendsOnlineUpdated) == 0x0014A0, "Member 'USocialPanelTab_C::OnFriendsOnlineUpdated' has a wrong offset!");
static_assert(offsetof(USocialPanelTab_C, Hovered) == 0x0014A8, "Member 'USocialPanelTab_C::Hovered' has a wrong offset!");
static_assert(offsetof(USocialPanelTab_C, Selected) == 0x0014B0, "Member 'USocialPanelTab_C::Selected' has a wrong offset!");

}
