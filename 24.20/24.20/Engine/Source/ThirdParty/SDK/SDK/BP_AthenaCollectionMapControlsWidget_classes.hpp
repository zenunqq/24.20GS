#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteUI_classes.hpp"

namespace SDK
{

class UBP_AthenaCollectionMapControlsWidget_C final : public UAthenaFullScreenMapControlsWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;
	class USoundBase*                             TrackSound;
	class USoundBase*                             UntrackSound;
	class USoundBase*                             ShowNPCsSound;
	class USoundBase*                             HideNPCsSound;

public:
	void BndEvt__BP_AthenaQuestPanelControlsWidget_Button_PinSelectedQuest_K2Node_ComponentBoundEvent_0_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
	void BndEvt__Button_QuestNPCIcons_K2Node_ComponentBoundEvent_3_CommonButtonClicked__DelegateSignature(class UCommonButtonLegacy* Button);
	void BP_OnSortTypeTextChanged(const class FText& TypeText);
	void ExecuteUbergraph_BP_AthenaCollectionMapControlsWidget(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_AthenaCollectionMapControlsWidget_C">();
	}
	static class UBP_AthenaCollectionMapControlsWidget_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_AthenaCollectionMapControlsWidget_C>();
	}
};
static_assert(alignof(UBP_AthenaCollectionMapControlsWidget_C) == 0x000008, "Wrong alignment on UBP_AthenaCollectionMapControlsWidget_C");
static_assert(sizeof(UBP_AthenaCollectionMapControlsWidget_C) == 0x0005B8, "Wrong size on UBP_AthenaCollectionMapControlsWidget_C");
static_assert(offsetof(UBP_AthenaCollectionMapControlsWidget_C, UberGraphFrame) == 0x000590, "Member 'UBP_AthenaCollectionMapControlsWidget_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UBP_AthenaCollectionMapControlsWidget_C, TrackSound) == 0x000598, "Member 'UBP_AthenaCollectionMapControlsWidget_C::TrackSound' has a wrong offset!");
static_assert(offsetof(UBP_AthenaCollectionMapControlsWidget_C, UntrackSound) == 0x0005A0, "Member 'UBP_AthenaCollectionMapControlsWidget_C::UntrackSound' has a wrong offset!");
static_assert(offsetof(UBP_AthenaCollectionMapControlsWidget_C, ShowNPCsSound) == 0x0005A8, "Member 'UBP_AthenaCollectionMapControlsWidget_C::ShowNPCsSound' has a wrong offset!");
static_assert(offsetof(UBP_AthenaCollectionMapControlsWidget_C, HideNPCsSound) == 0x0005B0, "Member 'UBP_AthenaCollectionMapControlsWidget_C::HideNPCsSound' has a wrong offset!");

}
