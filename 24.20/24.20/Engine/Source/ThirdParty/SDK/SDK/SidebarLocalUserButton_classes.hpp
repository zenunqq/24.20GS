#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteUI_structs.hpp"
#include "FortniteUI_classes.hpp"
#include "CoreUObject_structs.hpp"
#include "UMG_structs.hpp"

namespace SDK
{

class USidebarLocalUserButton_C final : public UFortSocialSidebarLocalUserButton
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;
	class UWidgetAnimation*                       Unselected;
	class UWidgetAnimation*                       Hovered;
	class UWidgetAnimation*                       Selected;
	class UBorder*                                Border_OnlineStatusIndicator;
	class UFortMobileImage*                       Image_TabIcon;
	struct FLinearColor                           Online;
	struct FLinearColor                           Offline;
	struct FLinearColor                           Away;
	struct FLinearColor                           Color_PresenceIndicatorOutline;

public:
	void BP_OnDeselected();
	void BP_OnHovered();
	void BP_OnSelected();
	void BP_OnUnhovered();
	void ExecuteUbergraph_SidebarLocalUserButton(int32 EntryPoint);
	void OnNewAvatarsEnabledChanged(bool bUsingNewAvatars);
	void OnOnlineStatusChanged(ELocalUserOnlineStatus OnlineStatus);
	void PreConstruct(bool IsDesignTime);
	void SetPresenceIndicatorOutlineColor(const struct FLinearColor& Value);
	void SetSkewBoxColor(const struct FLinearColor& InputPin);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"SidebarLocalUserButton_C">();
	}
	static class USidebarLocalUserButton_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<USidebarLocalUserButton_C>();
	}
};
static_assert(alignof(USidebarLocalUserButton_C) == 0x000010, "Wrong alignment on USidebarLocalUserButton_C");
static_assert(sizeof(USidebarLocalUserButton_C) == 0x001500, "Wrong size on USidebarLocalUserButton_C");
static_assert(offsetof(USidebarLocalUserButton_C, UberGraphFrame) == 0x001490, "Member 'USidebarLocalUserButton_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(USidebarLocalUserButton_C, Unselected) == 0x001498, "Member 'USidebarLocalUserButton_C::Unselected' has a wrong offset!");
static_assert(offsetof(USidebarLocalUserButton_C, Hovered) == 0x0014A0, "Member 'USidebarLocalUserButton_C::Hovered' has a wrong offset!");
static_assert(offsetof(USidebarLocalUserButton_C, Selected) == 0x0014A8, "Member 'USidebarLocalUserButton_C::Selected' has a wrong offset!");
static_assert(offsetof(USidebarLocalUserButton_C, Border_OnlineStatusIndicator) == 0x0014B0, "Member 'USidebarLocalUserButton_C::Border_OnlineStatusIndicator' has a wrong offset!");
static_assert(offsetof(USidebarLocalUserButton_C, Image_TabIcon) == 0x0014B8, "Member 'USidebarLocalUserButton_C::Image_TabIcon' has a wrong offset!");
static_assert(offsetof(USidebarLocalUserButton_C, Online) == 0x0014C0, "Member 'USidebarLocalUserButton_C::Online' has a wrong offset!");
static_assert(offsetof(USidebarLocalUserButton_C, Offline) == 0x0014D0, "Member 'USidebarLocalUserButton_C::Offline' has a wrong offset!");
static_assert(offsetof(USidebarLocalUserButton_C, Away) == 0x0014E0, "Member 'USidebarLocalUserButton_C::Away' has a wrong offset!");
static_assert(offsetof(USidebarLocalUserButton_C, Color_PresenceIndicatorOutline) == 0x0014F0, "Member 'USidebarLocalUserButton_C::Color_PresenceIndicatorOutline' has a wrong offset!");

}
