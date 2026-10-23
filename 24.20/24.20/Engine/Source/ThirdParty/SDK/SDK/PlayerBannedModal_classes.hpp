#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteGame_structs.hpp"
#include "FortniteUI_classes.hpp"
#include "UMG_structs.hpp"

namespace SDK
{

class UPlayerBannedModal_C final : public UFortPlayerBanned
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;
	class UTextBlock*                             BanMessage;
	class UIconTextButton_C*                      CloseButton;
	class UCommonTextBlock*                       disclaimer;
	class UImage*                                 Image_Severe;
	class ULightbox_C*                            Lightbox;
	class UTextBlock*                             TimeRemaining;
	class UCommonTextBlock*                       Title;
	class UImage*                                 Triangles_1;
	class UImage*                                 Triangles_2;
	class UImage*                                 Triangles_3;
	class UWidgetSwitcher*                        WidgetSwitcher_SeverityImage;
	bool                                          AckSucceeded;
	uint8                                         Pad_579[0x7];
	class FText                                   BanInformation;
	TMulticastInlineDelegate<void()>              OnCloseSucceeded;
	int32                                         TryCount;
	bool                                          bIsWarning;
	uint8                                         Pad_5AD[0x3];
	struct FMcpBanInfo                            McpBanInfo;
	class FText                                   BanType;
	bool                                          bIsCompetitiveBan;
	bool                                          bIsTeamingWithCheaterBan;

public:
	class FText BanEnumToText(EPlayerBanReasons Index_0, const class FString& ExploitProgramName, EPlayerCompetitiveBanReasons Competitive_Ban_Reason, bool bIsCompetitiveBan_0);
	void BndEvt__CloseButton_K2Node_ComponentBoundEvent_16_CommonButtonClicked__DelegateSignature(class UCommonButtonLegacy* Button);
	void BP_OnActivated();
	void DisableButton(bool DisableButton_0);
	void ExecuteUbergraph_PlayerBannedModal(int32 EntryPoint);
	void HandleCloseAttempted();
	void OnBanAck(bool Success);
	void RemoveModal();
	void UpdateText(const class FText& Title_0, const class FText& Content);
	void UpdateTimeRemaining(const class FText& Time);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"PlayerBannedModal_C">();
	}
	static class UPlayerBannedModal_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPlayerBannedModal_C>();
	}
};
static_assert(alignof(UPlayerBannedModal_C) == 0x000008, "Wrong alignment on UPlayerBannedModal_C");
static_assert(sizeof(UPlayerBannedModal_C) == 0x000610, "Wrong size on UPlayerBannedModal_C");
static_assert(offsetof(UPlayerBannedModal_C, UberGraphFrame) == 0x000518, "Member 'UPlayerBannedModal_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UPlayerBannedModal_C, BanMessage) == 0x000520, "Member 'UPlayerBannedModal_C::BanMessage' has a wrong offset!");
static_assert(offsetof(UPlayerBannedModal_C, CloseButton) == 0x000528, "Member 'UPlayerBannedModal_C::CloseButton' has a wrong offset!");
static_assert(offsetof(UPlayerBannedModal_C, disclaimer) == 0x000530, "Member 'UPlayerBannedModal_C::disclaimer' has a wrong offset!");
static_assert(offsetof(UPlayerBannedModal_C, Image_Severe) == 0x000538, "Member 'UPlayerBannedModal_C::Image_Severe' has a wrong offset!");
static_assert(offsetof(UPlayerBannedModal_C, Lightbox) == 0x000540, "Member 'UPlayerBannedModal_C::Lightbox' has a wrong offset!");
static_assert(offsetof(UPlayerBannedModal_C, TimeRemaining) == 0x000548, "Member 'UPlayerBannedModal_C::TimeRemaining' has a wrong offset!");
static_assert(offsetof(UPlayerBannedModal_C, Title) == 0x000550, "Member 'UPlayerBannedModal_C::Title' has a wrong offset!");
static_assert(offsetof(UPlayerBannedModal_C, Triangles_1) == 0x000558, "Member 'UPlayerBannedModal_C::Triangles_1' has a wrong offset!");
static_assert(offsetof(UPlayerBannedModal_C, Triangles_2) == 0x000560, "Member 'UPlayerBannedModal_C::Triangles_2' has a wrong offset!");
static_assert(offsetof(UPlayerBannedModal_C, Triangles_3) == 0x000568, "Member 'UPlayerBannedModal_C::Triangles_3' has a wrong offset!");
static_assert(offsetof(UPlayerBannedModal_C, WidgetSwitcher_SeverityImage) == 0x000570, "Member 'UPlayerBannedModal_C::WidgetSwitcher_SeverityImage' has a wrong offset!");
static_assert(offsetof(UPlayerBannedModal_C, AckSucceeded) == 0x000578, "Member 'UPlayerBannedModal_C::AckSucceeded' has a wrong offset!");
static_assert(offsetof(UPlayerBannedModal_C, BanInformation) == 0x000580, "Member 'UPlayerBannedModal_C::BanInformation' has a wrong offset!");
static_assert(offsetof(UPlayerBannedModal_C, OnCloseSucceeded) == 0x000598, "Member 'UPlayerBannedModal_C::OnCloseSucceeded' has a wrong offset!");
static_assert(offsetof(UPlayerBannedModal_C, TryCount) == 0x0005A8, "Member 'UPlayerBannedModal_C::TryCount' has a wrong offset!");
static_assert(offsetof(UPlayerBannedModal_C, bIsWarning) == 0x0005AC, "Member 'UPlayerBannedModal_C::bIsWarning' has a wrong offset!");
static_assert(offsetof(UPlayerBannedModal_C, McpBanInfo) == 0x0005B0, "Member 'UPlayerBannedModal_C::McpBanInfo' has a wrong offset!");
static_assert(offsetof(UPlayerBannedModal_C, BanType) == 0x0005F0, "Member 'UPlayerBannedModal_C::BanType' has a wrong offset!");
static_assert(offsetof(UPlayerBannedModal_C, bIsCompetitiveBan) == 0x000608, "Member 'UPlayerBannedModal_C::bIsCompetitiveBan' has a wrong offset!");
static_assert(offsetof(UPlayerBannedModal_C, bIsTeamingWithCheaterBan) == 0x000609, "Member 'UPlayerBannedModal_C::bIsTeamingWithCheaterBan' has a wrong offset!");

}
