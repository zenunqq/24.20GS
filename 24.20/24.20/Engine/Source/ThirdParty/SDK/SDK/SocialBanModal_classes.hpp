#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteUI_classes.hpp"

namespace SDK
{

class USocialBanModal_C final : public UFortSocialBanModal
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;
	class UCommonTextBlock*                       disclaimer;
	class UCommonTextBlock*                       disclaimer_1;
	class UCommonTextBlock*                       disclaimer_2;
	class UImage*                                 Image_Severe;
	class ULightbox_C*                            Lightbox_51;
	class UCommonWidgetSwitcherLegacy*            Switcher_Message;
	class UCommonTextBlock*                       Title;
	class UCommonTextBlock*                       Title_1;
	class UImage*                                 Triangles_1;
	class UImage*                                 Triangles_2;
	class UImage*                                 Triangles_3;
	class UVerticalBox*                           VBox_Banned;
	class UVerticalBox*                           VBox_Warned;
	class UWidgetSwitcher*                        WidgetSwitcher_SeverityImage;
	TMulticastInlineDelegate<void()>              OnCloseSucceeded;

public:
	void ExecuteUbergraph_SocialBanModal(int32 EntryPoint);
	void OnDisplayModeSet(bool bIsBanned);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"SocialBanModal_C">();
	}
	static class USocialBanModal_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<USocialBanModal_C>();
	}
};
static_assert(alignof(USocialBanModal_C) == 0x000008, "Wrong alignment on USocialBanModal_C");
static_assert(sizeof(USocialBanModal_C) == 0x000578, "Wrong size on USocialBanModal_C");
static_assert(offsetof(USocialBanModal_C, UberGraphFrame) == 0x0004F0, "Member 'USocialBanModal_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(USocialBanModal_C, disclaimer) == 0x0004F8, "Member 'USocialBanModal_C::disclaimer' has a wrong offset!");
static_assert(offsetof(USocialBanModal_C, disclaimer_1) == 0x000500, "Member 'USocialBanModal_C::disclaimer_1' has a wrong offset!");
static_assert(offsetof(USocialBanModal_C, disclaimer_2) == 0x000508, "Member 'USocialBanModal_C::disclaimer_2' has a wrong offset!");
static_assert(offsetof(USocialBanModal_C, Image_Severe) == 0x000510, "Member 'USocialBanModal_C::Image_Severe' has a wrong offset!");
static_assert(offsetof(USocialBanModal_C, Lightbox_51) == 0x000518, "Member 'USocialBanModal_C::Lightbox_51' has a wrong offset!");
static_assert(offsetof(USocialBanModal_C, Switcher_Message) == 0x000520, "Member 'USocialBanModal_C::Switcher_Message' has a wrong offset!");
static_assert(offsetof(USocialBanModal_C, Title) == 0x000528, "Member 'USocialBanModal_C::Title' has a wrong offset!");
static_assert(offsetof(USocialBanModal_C, Title_1) == 0x000530, "Member 'USocialBanModal_C::Title_1' has a wrong offset!");
static_assert(offsetof(USocialBanModal_C, Triangles_1) == 0x000538, "Member 'USocialBanModal_C::Triangles_1' has a wrong offset!");
static_assert(offsetof(USocialBanModal_C, Triangles_2) == 0x000540, "Member 'USocialBanModal_C::Triangles_2' has a wrong offset!");
static_assert(offsetof(USocialBanModal_C, Triangles_3) == 0x000548, "Member 'USocialBanModal_C::Triangles_3' has a wrong offset!");
static_assert(offsetof(USocialBanModal_C, VBox_Banned) == 0x000550, "Member 'USocialBanModal_C::VBox_Banned' has a wrong offset!");
static_assert(offsetof(USocialBanModal_C, VBox_Warned) == 0x000558, "Member 'USocialBanModal_C::VBox_Warned' has a wrong offset!");
static_assert(offsetof(USocialBanModal_C, WidgetSwitcher_SeverityImage) == 0x000560, "Member 'USocialBanModal_C::WidgetSwitcher_SeverityImage' has a wrong offset!");
static_assert(offsetof(USocialBanModal_C, OnCloseSucceeded) == 0x000568, "Member 'USocialBanModal_C::OnCloseSucceeded' has a wrong offset!");

}
