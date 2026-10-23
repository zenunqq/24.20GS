#pragma once

#include "Basic.hpp"

#include "FortniteGame_structs.hpp"
#include "Engine_structs.hpp"
#include "FortniteUI_structs.hpp"
#include "FortniteUI_classes.hpp"
#include "UMG_structs.hpp"

namespace SDK
{

class UImportFriends_C final : public UFortSocialImportPanel
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;
	class UWidgetAnimation*                       Intro_V2;
	class UWidgetAnimation*                       ArrowPulse;
	class UWidgetAnimation*                       Intro;
	class UCommonTextBlock*                       AddFriendsDescription;
	class UCommonTextBlock*                       CommonTextBlock_0;
	class UCommonTextBlock*                       CT_AddFriendsDescription;
	class UCommonTextBlock*                       CT_ChangeInSettingsText;
	class UCommonTextBlock*                       CT_LimitedTimeHeader;
	class UCommonTextBlock*                       CT_TakenToLauncher;
	class UImage*                                 Image_1;
	class UItemInfoWidget_C*                      ItemInfoWidget;
	class USafeZone*                              SafeZone_0;
	class UScaleBox*                              SBox_AddFriendButtonScaleBox;
	class UScaleBox*                              ScaleBoxDescription;
	class UScaleBox*                              ScaleBoxHeader;
	class UFortItemDefinition*                    PreviewItemDef;
	double                                        HeartbeatDelayIntroAnimation;
	bool                                          bHasReward;
	uint8                                         Pad_619[0x7];
	class FText                                   FacebookHeader;
	class FText                                   VKHeader;
	class FText                                   SteamHeader;
	class FText                                   PlaystationHeader;
	class FText                                   XboxHeader;
	ESocialImportPanelPlatform                    SocialPlatform;
	uint8                                         Pad_699[0x3];
	int32                                         WrapHeaderAt;
	class FText                                   XboxDescriptionText;
	class FText                                   PSNDescriptionText;
	class FText                                   SwitchDescriptionText;

public:
	void BndEvt__Button_RemindMeLater_K2Node_ComponentBoundEvent_796_CommonButtonClicked__DelegateSignature(class UCommonButtonLegacy* Button);
	void BP_OnActivated();
	void ExecuteUbergraph_ImportFriends(int32 EntryPoint);
	void HandleDescriptionText();
	void HandleHeaderText();
	void OnIncentivizedSet(bool bIncentivized);
	void OnPanelTypeSet(ESocialImportPanelType NewType);
	void PreConstruct(bool IsDesignTime);
	void ScaleTextboxWithWrappingWorkaround(class UScaleBox* ContainingScaleBox, int32 CharLimitThreshold, class UCommonTextBlock* TargetText, int32 WrapAtHorrizontal);
	void ScaleTextButton(int32 CharThreshold, class UScaleBox* ContainingScaleBox, class UIconTextButton_C* Button);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"ImportFriends_C">();
	}
	static class UImportFriends_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UImportFriends_C>();
	}
};
static_assert(alignof(UImportFriends_C) == 0x000008, "Wrong alignment on UImportFriends_C");
static_assert(sizeof(UImportFriends_C) == 0x0006E8, "Wrong size on UImportFriends_C");
static_assert(offsetof(UImportFriends_C, UberGraphFrame) == 0x000588, "Member 'UImportFriends_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UImportFriends_C, Intro_V2) == 0x000590, "Member 'UImportFriends_C::Intro_V2' has a wrong offset!");
static_assert(offsetof(UImportFriends_C, ArrowPulse) == 0x000598, "Member 'UImportFriends_C::ArrowPulse' has a wrong offset!");
static_assert(offsetof(UImportFriends_C, Intro) == 0x0005A0, "Member 'UImportFriends_C::Intro' has a wrong offset!");
static_assert(offsetof(UImportFriends_C, AddFriendsDescription) == 0x0005A8, "Member 'UImportFriends_C::AddFriendsDescription' has a wrong offset!");
static_assert(offsetof(UImportFriends_C, CommonTextBlock_0) == 0x0005B0, "Member 'UImportFriends_C::CommonTextBlock_0' has a wrong offset!");
static_assert(offsetof(UImportFriends_C, CT_AddFriendsDescription) == 0x0005B8, "Member 'UImportFriends_C::CT_AddFriendsDescription' has a wrong offset!");
static_assert(offsetof(UImportFriends_C, CT_ChangeInSettingsText) == 0x0005C0, "Member 'UImportFriends_C::CT_ChangeInSettingsText' has a wrong offset!");
static_assert(offsetof(UImportFriends_C, CT_LimitedTimeHeader) == 0x0005C8, "Member 'UImportFriends_C::CT_LimitedTimeHeader' has a wrong offset!");
static_assert(offsetof(UImportFriends_C, CT_TakenToLauncher) == 0x0005D0, "Member 'UImportFriends_C::CT_TakenToLauncher' has a wrong offset!");
static_assert(offsetof(UImportFriends_C, Image_1) == 0x0005D8, "Member 'UImportFriends_C::Image_1' has a wrong offset!");
static_assert(offsetof(UImportFriends_C, ItemInfoWidget) == 0x0005E0, "Member 'UImportFriends_C::ItemInfoWidget' has a wrong offset!");
static_assert(offsetof(UImportFriends_C, SafeZone_0) == 0x0005E8, "Member 'UImportFriends_C::SafeZone_0' has a wrong offset!");
static_assert(offsetof(UImportFriends_C, SBox_AddFriendButtonScaleBox) == 0x0005F0, "Member 'UImportFriends_C::SBox_AddFriendButtonScaleBox' has a wrong offset!");
static_assert(offsetof(UImportFriends_C, ScaleBoxDescription) == 0x0005F8, "Member 'UImportFriends_C::ScaleBoxDescription' has a wrong offset!");
static_assert(offsetof(UImportFriends_C, ScaleBoxHeader) == 0x000600, "Member 'UImportFriends_C::ScaleBoxHeader' has a wrong offset!");
static_assert(offsetof(UImportFriends_C, PreviewItemDef) == 0x000608, "Member 'UImportFriends_C::PreviewItemDef' has a wrong offset!");
static_assert(offsetof(UImportFriends_C, HeartbeatDelayIntroAnimation) == 0x000610, "Member 'UImportFriends_C::HeartbeatDelayIntroAnimation' has a wrong offset!");
static_assert(offsetof(UImportFriends_C, bHasReward) == 0x000618, "Member 'UImportFriends_C::bHasReward' has a wrong offset!");
static_assert(offsetof(UImportFriends_C, FacebookHeader) == 0x000620, "Member 'UImportFriends_C::FacebookHeader' has a wrong offset!");
static_assert(offsetof(UImportFriends_C, VKHeader) == 0x000638, "Member 'UImportFriends_C::VKHeader' has a wrong offset!");
static_assert(offsetof(UImportFriends_C, SteamHeader) == 0x000650, "Member 'UImportFriends_C::SteamHeader' has a wrong offset!");
static_assert(offsetof(UImportFriends_C, PlaystationHeader) == 0x000668, "Member 'UImportFriends_C::PlaystationHeader' has a wrong offset!");
static_assert(offsetof(UImportFriends_C, XboxHeader) == 0x000680, "Member 'UImportFriends_C::XboxHeader' has a wrong offset!");
static_assert(offsetof(UImportFriends_C, SocialPlatform) == 0x000698, "Member 'UImportFriends_C::SocialPlatform' has a wrong offset!");
static_assert(offsetof(UImportFriends_C, WrapHeaderAt) == 0x00069C, "Member 'UImportFriends_C::WrapHeaderAt' has a wrong offset!");
static_assert(offsetof(UImportFriends_C, XboxDescriptionText) == 0x0006A0, "Member 'UImportFriends_C::XboxDescriptionText' has a wrong offset!");
static_assert(offsetof(UImportFriends_C, PSNDescriptionText) == 0x0006B8, "Member 'UImportFriends_C::PSNDescriptionText' has a wrong offset!");
static_assert(offsetof(UImportFriends_C, SwitchDescriptionText) == 0x0006D0, "Member 'UImportFriends_C::SwitchDescriptionText' has a wrong offset!");

}
