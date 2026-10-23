#pragma once

#include "Basic.hpp"

#include "FortniteGame_structs.hpp"
#include "MinigameButtonsState_structs.hpp"
#include "Engine_structs.hpp"
#include "MinigameButtonsStateConfiguration_structs.hpp"
#include "MinigameButtonsWidgetSwitcherConfiguration_structs.hpp"
#include "FortniteUI_classes.hpp"

namespace SDK
{

class UMinigameButtons_C final : public UFortMinigameButtons
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;
	class UWidgetSwitcher*                        ButtonSwitcher;
	class UIconTextButton_C*                      EndGameButton;
	class UIconTextButton_C*                      EndGameButton2;
	class UIconTextButton_C*                      StartGameButton;
	class UIconTextButton_C*                      StartGameButton2;
	TMulticastInlineDelegate<void()>              StartButtonClicked;
	TMulticastInlineDelegate<void()>              EndButtonClicked;
	TMulticastInlineDelegate<void(class UCommonButtonLegacy* Button)> StartButtonHovered;
	TMulticastInlineDelegate<void(class UCommonButtonLegacy* Button)> EndButtonHovered;
	class UIconTextButton_C*                      CurrentButton;
	EMinigameButtonsState                         ButtonState;
	uint8                                         Pad_2E1[0x7];
	TMap<EMinigameButtonsState, struct FMinigameButtonsStateConfiguration> ButtonConfigurations;
	TMulticastInlineDelegate<void(class UCommonButtonLegacy* Button)> StartButtonUnhovered;
	TMulticastInlineDelegate<void(class UCommonButtonLegacy* Button)> EndButtonUnhovered;
	struct FMinigameButtonsWidgetSwitcherConfiguration CurrentWidgetSwitcherConfiguration;
	TArray<struct FMinigameButtonsWidgetSwitcherConfiguration> WidgetSwitcherConfigurations;

public:
	void BndEvt__EndGameButton2_K2Node_ComponentBoundEvent_2_CommonButtonClicked__DelegateSignature(class UCommonButtonLegacy* Button);
	void BndEvt__EndGameButton2_K2Node_ComponentBoundEvent_5_CommonButtonClicked__DelegateSignature(class UCommonButtonLegacy* Button);
	void BndEvt__EndGameButton2_K2Node_ComponentBoundEvent_7_CommonButtonClicked__DelegateSignature(class UCommonButtonLegacy* Button);
	void BndEvt__EndGameButton_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature(class UCommonButtonLegacy* Button);
	void BndEvt__StartGameButton2_K2Node_ComponentBoundEvent_3_CommonButtonClicked__DelegateSignature(class UCommonButtonLegacy* Button);
	void BndEvt__StartGameButton2_K2Node_ComponentBoundEvent_4_CommonButtonClicked__DelegateSignature(class UCommonButtonLegacy* Button);
	void BndEvt__StartGameButton2_K2Node_ComponentBoundEvent_6_CommonButtonClicked__DelegateSignature(class UCommonButtonLegacy* Button);
	void BndEvt__StartGameButton_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature(class UCommonButtonLegacy* Button);
	void CenterOnCurrentButton();
	void ExecuteUbergraph_MinigameButtons(int32 EntryPoint);
	void OnInitialized();
	void SetButtonState(EMinigameButtonsState Value);
	void SetWidgetSwitcherIndex(int32 Index_0);
	void UpdateButtons();
	void UpdateButtonsFromButtonState();

	class UWidget* OnGetDesiredFocusTarget() const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"MinigameButtons_C">();
	}
	static class UMinigameButtons_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMinigameButtons_C>();
	}
};
static_assert(alignof(UMinigameButtons_C) == 0x000008, "Wrong alignment on UMinigameButtons_C");
static_assert(sizeof(UMinigameButtons_C) == 0x0003A8, "Wrong size on UMinigameButtons_C");
static_assert(offsetof(UMinigameButtons_C, UberGraphFrame) == 0x000268, "Member 'UMinigameButtons_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UMinigameButtons_C, ButtonSwitcher) == 0x000270, "Member 'UMinigameButtons_C::ButtonSwitcher' has a wrong offset!");
static_assert(offsetof(UMinigameButtons_C, EndGameButton) == 0x000278, "Member 'UMinigameButtons_C::EndGameButton' has a wrong offset!");
static_assert(offsetof(UMinigameButtons_C, EndGameButton2) == 0x000280, "Member 'UMinigameButtons_C::EndGameButton2' has a wrong offset!");
static_assert(offsetof(UMinigameButtons_C, StartGameButton) == 0x000288, "Member 'UMinigameButtons_C::StartGameButton' has a wrong offset!");
static_assert(offsetof(UMinigameButtons_C, StartGameButton2) == 0x000290, "Member 'UMinigameButtons_C::StartGameButton2' has a wrong offset!");
static_assert(offsetof(UMinigameButtons_C, StartButtonClicked) == 0x000298, "Member 'UMinigameButtons_C::StartButtonClicked' has a wrong offset!");
static_assert(offsetof(UMinigameButtons_C, EndButtonClicked) == 0x0002A8, "Member 'UMinigameButtons_C::EndButtonClicked' has a wrong offset!");
static_assert(offsetof(UMinigameButtons_C, StartButtonHovered) == 0x0002B8, "Member 'UMinigameButtons_C::StartButtonHovered' has a wrong offset!");
static_assert(offsetof(UMinigameButtons_C, EndButtonHovered) == 0x0002C8, "Member 'UMinigameButtons_C::EndButtonHovered' has a wrong offset!");
static_assert(offsetof(UMinigameButtons_C, CurrentButton) == 0x0002D8, "Member 'UMinigameButtons_C::CurrentButton' has a wrong offset!");
static_assert(offsetof(UMinigameButtons_C, ButtonState) == 0x0002E0, "Member 'UMinigameButtons_C::ButtonState' has a wrong offset!");
static_assert(offsetof(UMinigameButtons_C, ButtonConfigurations) == 0x0002E8, "Member 'UMinigameButtons_C::ButtonConfigurations' has a wrong offset!");
static_assert(offsetof(UMinigameButtons_C, StartButtonUnhovered) == 0x000338, "Member 'UMinigameButtons_C::StartButtonUnhovered' has a wrong offset!");
static_assert(offsetof(UMinigameButtons_C, EndButtonUnhovered) == 0x000348, "Member 'UMinigameButtons_C::EndButtonUnhovered' has a wrong offset!");
static_assert(offsetof(UMinigameButtons_C, CurrentWidgetSwitcherConfiguration) == 0x000358, "Member 'UMinigameButtons_C::CurrentWidgetSwitcherConfiguration' has a wrong offset!");
static_assert(offsetof(UMinigameButtons_C, WidgetSwitcherConfigurations) == 0x000398, "Member 'UMinigameButtons_C::WidgetSwitcherConfigurations' has a wrong offset!");

}
