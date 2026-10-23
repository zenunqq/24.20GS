#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteUI_classes.hpp"

namespace SDK
{

class UTeamMemberManage_C final : public UFortTeamMemberManage
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;
	class UBP_LocalPlayerBannerEditor_C*          BP_LocalPlayerBannerEditor;
	class UWBP_UIKit_Button_Regular_C*            CloseProfileButton;
	class UCommonWidgetSwitcherLegacy*            ContentSwitcher;
	class ULightbox_C*                            Lightbox;
	class USizeBox*                               TeamMemberManageOptions;

public:
	void BndEvt__BP_LocalPlayerBannerEditor_K2Node_ComponentBoundEvent_1_CloseBannerEditor__DelegateSignature(class FName IconId, class FName ColorId);
	void BndEvt__ContentSwitcher_K2Node_ComponentBoundEvent_2_OnActiveWidgetChanged__DelegateSignature(class UWidget* ActiveWidget, int32 ActiveWidgetIndex);
	void BndEvt__TeamMemberManage_CloseProfileButton_K2Node_ComponentBoundEvent_4_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
	void BP_OnActivated();
	void BP_OnDeactivated();
	void ExecuteUbergraph_TeamMemberManage(int32 EntryPoint);
	void OnParticipationChanged(bool bIsParticipating);
	void OpenBannerEditor();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"TeamMemberManage_C">();
	}
	static class UTeamMemberManage_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UTeamMemberManage_C>();
	}
};
static_assert(alignof(UTeamMemberManage_C) == 0x000008, "Wrong alignment on UTeamMemberManage_C");
static_assert(sizeof(UTeamMemberManage_C) == 0x0005C8, "Wrong size on UTeamMemberManage_C");
static_assert(offsetof(UTeamMemberManage_C, UberGraphFrame) == 0x000598, "Member 'UTeamMemberManage_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UTeamMemberManage_C, BP_LocalPlayerBannerEditor) == 0x0005A0, "Member 'UTeamMemberManage_C::BP_LocalPlayerBannerEditor' has a wrong offset!");
static_assert(offsetof(UTeamMemberManage_C, CloseProfileButton) == 0x0005A8, "Member 'UTeamMemberManage_C::CloseProfileButton' has a wrong offset!");
static_assert(offsetof(UTeamMemberManage_C, ContentSwitcher) == 0x0005B0, "Member 'UTeamMemberManage_C::ContentSwitcher' has a wrong offset!");
static_assert(offsetof(UTeamMemberManage_C, Lightbox) == 0x0005B8, "Member 'UTeamMemberManage_C::Lightbox' has a wrong offset!");
static_assert(offsetof(UTeamMemberManage_C, TeamMemberManageOptions) == 0x0005C0, "Member 'UTeamMemberManage_C::TeamMemberManageOptions' has a wrong offset!");

}
