#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteUI_classes.hpp"

namespace SDK
{

class UEventTeamMatchHistoryModal_C final : public UFortEventTeamMatchHistoryModal
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;
	class UWidgetAnimation*                       Intro;
	class UIconTextButton_C*                      CloseMainPanel;
	class UCommonBorder*                          CommonBorder_0;
	class UEventMatchHistoryTournamentInfo_C*     EventMatchHistoryTournamentInfo;
	class UImage*                                 Image_Background;
	class USafeZone*                              SafeZone_0;
	class UWidgetSwitcher*                        Switcher_Content;
	class UCommonTextBlock*                       Text_EventLabel;
	class UCommonTextBlock*                       Text_TeamLabel;
	class UCommonTextBlock*                       Text_WindowTittle;
	class UVerticalBox*                           VerticalBox_1;

public:
	void BndEvt__CloseMainPanel_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature(class UCommonButtonLegacy* Button);
	void BP_OnActivated();
	void ExecuteUbergraph_EventTeamMatchHistoryModal(int32 EntryPoint);
	void OnSetupMatchHistory(const class FString& TournamentId, const class FString& EventWindowId);
	void Set_Up_Match_History_Style(const struct FFortTournamentDisplayInfo& Tournament_Display_Info);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"EventTeamMatchHistoryModal_C">();
	}
	static class UEventTeamMatchHistoryModal_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UEventTeamMatchHistoryModal_C>();
	}
};
static_assert(alignof(UEventTeamMatchHistoryModal_C) == 0x000008, "Wrong alignment on UEventTeamMatchHistoryModal_C");
static_assert(sizeof(UEventTeamMatchHistoryModal_C) == 0x0005A0, "Wrong size on UEventTeamMatchHistoryModal_C");
static_assert(offsetof(UEventTeamMatchHistoryModal_C, UberGraphFrame) == 0x000540, "Member 'UEventTeamMatchHistoryModal_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UEventTeamMatchHistoryModal_C, Intro) == 0x000548, "Member 'UEventTeamMatchHistoryModal_C::Intro' has a wrong offset!");
static_assert(offsetof(UEventTeamMatchHistoryModal_C, CloseMainPanel) == 0x000550, "Member 'UEventTeamMatchHistoryModal_C::CloseMainPanel' has a wrong offset!");
static_assert(offsetof(UEventTeamMatchHistoryModal_C, CommonBorder_0) == 0x000558, "Member 'UEventTeamMatchHistoryModal_C::CommonBorder_0' has a wrong offset!");
static_assert(offsetof(UEventTeamMatchHistoryModal_C, EventMatchHistoryTournamentInfo) == 0x000560, "Member 'UEventTeamMatchHistoryModal_C::EventMatchHistoryTournamentInfo' has a wrong offset!");
static_assert(offsetof(UEventTeamMatchHistoryModal_C, Image_Background) == 0x000568, "Member 'UEventTeamMatchHistoryModal_C::Image_Background' has a wrong offset!");
static_assert(offsetof(UEventTeamMatchHistoryModal_C, SafeZone_0) == 0x000570, "Member 'UEventTeamMatchHistoryModal_C::SafeZone_0' has a wrong offset!");
static_assert(offsetof(UEventTeamMatchHistoryModal_C, Switcher_Content) == 0x000578, "Member 'UEventTeamMatchHistoryModal_C::Switcher_Content' has a wrong offset!");
static_assert(offsetof(UEventTeamMatchHistoryModal_C, Text_EventLabel) == 0x000580, "Member 'UEventTeamMatchHistoryModal_C::Text_EventLabel' has a wrong offset!");
static_assert(offsetof(UEventTeamMatchHistoryModal_C, Text_TeamLabel) == 0x000588, "Member 'UEventTeamMatchHistoryModal_C::Text_TeamLabel' has a wrong offset!");
static_assert(offsetof(UEventTeamMatchHistoryModal_C, Text_WindowTittle) == 0x000590, "Member 'UEventTeamMatchHistoryModal_C::Text_WindowTittle' has a wrong offset!");
static_assert(offsetof(UEventTeamMatchHistoryModal_C, VerticalBox_1) == 0x000598, "Member 'UEventTeamMatchHistoryModal_C::VerticalBox_1' has a wrong offset!");

}
