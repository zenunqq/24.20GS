#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteUI_classes.hpp"
#include "SlateCore_structs.hpp"

namespace SDK
{

class UBP_AthenaQuestPanelControlsWidget_C final : public UAthenaFullScreenMapControlsWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;
	class UGridPanel*                             GridPanel_buttons;
	class UHorizontalBox*                         HorizontalBox_144;
	class USoundBase*                             TrackSound;
	class USoundBase*                             UntrackSound;
	class USoundBase*                             ShowNPCsSound;
	class USoundBase*                             HideNPCsSound;

public:
	void BndEvt__BP_AthenaQuestPanelControlsWidget_Button_PinSelectedQuest_K2Node_ComponentBoundEvent_0_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
	void BndEvt__Button_QuestNPCIcons_K2Node_ComponentBoundEvent_3_CommonButtonClicked__DelegateSignature(class UCommonButtonLegacy* Button);
	void BP_OnSortTypeTextChanged(const class FText& TypeText);
	void Construct();
	void ExecuteUbergraph_BP_AthenaQuestPanelControlsWidget(int32 EntryPoint);
	void Set_Mobile_Visuals();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_AthenaQuestPanelControlsWidget_C">();
	}
	static class UBP_AthenaQuestPanelControlsWidget_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_AthenaQuestPanelControlsWidget_C>();
	}
};
static_assert(alignof(UBP_AthenaQuestPanelControlsWidget_C) == 0x000008, "Wrong alignment on UBP_AthenaQuestPanelControlsWidget_C");
static_assert(sizeof(UBP_AthenaQuestPanelControlsWidget_C) == 0x0005C8, "Wrong size on UBP_AthenaQuestPanelControlsWidget_C");
static_assert(offsetof(UBP_AthenaQuestPanelControlsWidget_C, UberGraphFrame) == 0x000590, "Member 'UBP_AthenaQuestPanelControlsWidget_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UBP_AthenaQuestPanelControlsWidget_C, GridPanel_buttons) == 0x000598, "Member 'UBP_AthenaQuestPanelControlsWidget_C::GridPanel_buttons' has a wrong offset!");
static_assert(offsetof(UBP_AthenaQuestPanelControlsWidget_C, HorizontalBox_144) == 0x0005A0, "Member 'UBP_AthenaQuestPanelControlsWidget_C::HorizontalBox_144' has a wrong offset!");
static_assert(offsetof(UBP_AthenaQuestPanelControlsWidget_C, TrackSound) == 0x0005A8, "Member 'UBP_AthenaQuestPanelControlsWidget_C::TrackSound' has a wrong offset!");
static_assert(offsetof(UBP_AthenaQuestPanelControlsWidget_C, UntrackSound) == 0x0005B0, "Member 'UBP_AthenaQuestPanelControlsWidget_C::UntrackSound' has a wrong offset!");
static_assert(offsetof(UBP_AthenaQuestPanelControlsWidget_C, ShowNPCsSound) == 0x0005B8, "Member 'UBP_AthenaQuestPanelControlsWidget_C::ShowNPCsSound' has a wrong offset!");
static_assert(offsetof(UBP_AthenaQuestPanelControlsWidget_C, HideNPCsSound) == 0x0005C0, "Member 'UBP_AthenaQuestPanelControlsWidget_C::HideNPCsSound' has a wrong offset!");

}
