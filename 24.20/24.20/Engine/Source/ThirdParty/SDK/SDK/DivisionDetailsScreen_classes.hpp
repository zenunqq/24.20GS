#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteUI_classes.hpp"

namespace SDK
{

class UDivisionDetailsScreen_C final : public UFortDivisionDetailsScreen
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;
	class UWidgetAnimation*                       Intro;
	class UEventsSimpleButton_C*                  BackButton;
	class UVerticalBox*                           GeneralDivisionInfo;
	class UImage*                                 Image_12;
	class UImage*                                 Image_PanelBG;
	class UImage*                                 Image_PanelBorder;
	class UEventsSimpleButton_C*                  NextButton;
	class USafeZone*                              SafeZone_1;
	class UVerticalBox*                           ScoringPayoutInfo;
	class USizeBox*                               SizeBox_TopContainer;

public:
	void BndEvt__BackButton_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature(class UCommonButtonLegacy* Button);
	void BndEvt__NextButton_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature(class UCommonButtonLegacy* Button);
	void BP_OnActivated();
	void EmptyFunction(bool* Handled);
	void ExecuteUbergraph_DivisionDetailsScreen(int32 EntryPoint);
	void LeftShoulderButton(bool* Handled);
	void RightShoulderButton(bool* Handled);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"DivisionDetailsScreen_C">();
	}
	static class UDivisionDetailsScreen_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UDivisionDetailsScreen_C>();
	}
};
static_assert(alignof(UDivisionDetailsScreen_C) == 0x000008, "Wrong alignment on UDivisionDetailsScreen_C");
static_assert(sizeof(UDivisionDetailsScreen_C) == 0x000590, "Wrong size on UDivisionDetailsScreen_C");
static_assert(offsetof(UDivisionDetailsScreen_C, UberGraphFrame) == 0x000538, "Member 'UDivisionDetailsScreen_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UDivisionDetailsScreen_C, Intro) == 0x000540, "Member 'UDivisionDetailsScreen_C::Intro' has a wrong offset!");
static_assert(offsetof(UDivisionDetailsScreen_C, BackButton) == 0x000548, "Member 'UDivisionDetailsScreen_C::BackButton' has a wrong offset!");
static_assert(offsetof(UDivisionDetailsScreen_C, GeneralDivisionInfo) == 0x000550, "Member 'UDivisionDetailsScreen_C::GeneralDivisionInfo' has a wrong offset!");
static_assert(offsetof(UDivisionDetailsScreen_C, Image_12) == 0x000558, "Member 'UDivisionDetailsScreen_C::Image_12' has a wrong offset!");
static_assert(offsetof(UDivisionDetailsScreen_C, Image_PanelBG) == 0x000560, "Member 'UDivisionDetailsScreen_C::Image_PanelBG' has a wrong offset!");
static_assert(offsetof(UDivisionDetailsScreen_C, Image_PanelBorder) == 0x000568, "Member 'UDivisionDetailsScreen_C::Image_PanelBorder' has a wrong offset!");
static_assert(offsetof(UDivisionDetailsScreen_C, NextButton) == 0x000570, "Member 'UDivisionDetailsScreen_C::NextButton' has a wrong offset!");
static_assert(offsetof(UDivisionDetailsScreen_C, SafeZone_1) == 0x000578, "Member 'UDivisionDetailsScreen_C::SafeZone_1' has a wrong offset!");
static_assert(offsetof(UDivisionDetailsScreen_C, ScoringPayoutInfo) == 0x000580, "Member 'UDivisionDetailsScreen_C::ScoringPayoutInfo' has a wrong offset!");
static_assert(offsetof(UDivisionDetailsScreen_C, SizeBox_TopContainer) == 0x000588, "Member 'UDivisionDetailsScreen_C::SizeBox_TopContainer' has a wrong offset!");

}
