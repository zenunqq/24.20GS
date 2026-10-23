#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteUI_classes.hpp"
#include "FortniteGame_structs.hpp"
#include "UMG_structs.hpp"

namespace SDK
{

class UPinModal_C final : public UFortPinModal
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;
	class UImage*                                 Bad;
	class UImage*                                 BG_INPUTBOX;
	class UImage*                                 BG_WIREFRAME2;
	class UImage*                                 Border;
	class UIconTextButton_C*                      Button_Close_1;
	class UCommonActivatableWidgetSwitcher*       CommonActivatableWidgetSwitcher_160;
	class UImage*                                 Good;
	class UImage*                                 GradientForFlipping;
	class UPinCodeButton_C*                       Hidden_PasscodeButton_0;
	class UPinCodeButton_C*                       Hidden_PasscodeButton_1;
	class UPinCodeButton_C*                       Hidden_PasscodeButton_2;
	class UPinCodeButton_C*                       Hidden_PasscodeButton_3;
	class UPinCodeButton_C*                       Hidden_PasscodeButton_4;
	class UPinCodeButton_C*                       Hidden_PasscodeButton_5;
	class UPinCodeButton_C*                       Hidden_PasscodeButton_6;
	class UPinCodeButton_C*                       Hidden_PasscodeButton_7;
	class UPinCodeButton_C*                       Hidden_PasscodeButton_8;
	class UPinCodeButton_C*                       Hidden_PasscodeButton_9;
	class UPinCodeButton_C*                       PasscodeButton_0;
	class UPinCodeButton_C*                       PasscodeButton_1;
	class UPinCodeButton_C*                       PasscodeButton_2;
	class UPinCodeButton_C*                       PasscodeButton_3;
	class UPinCodeButton_C*                       PasscodeButton_4;
	class UPinCodeButton_C*                       PasscodeButton_5;
	class UPinCodeButton_C*                       PasscodeButton_6;
	class UPinCodeButton_C*                       PasscodeButton_7;
	class UPinCodeButton_C*                       PasscodeButton_8;
	class UPinCodeButton_C*                       PasscodeButton_9;
	class UCommonVisibilitySwitcher*              StateSwitcher;
	class UImage*                                 Waiting;

public:
	TArray<class UFortPinButton*> CollectPinButtons();
	void ExecuteUbergraph_PinModal(int32 EntryPoint);
	void OnSetPinState(const EPinModalValidityState PinModalState);
	void PreConstruct(bool IsDesignTime);
	void Set_Visual_States(EPinModalValidityState Pin_States);
	void SetPreviewData();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"PinModal_C">();
	}
	static class UPinModal_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPinModal_C>();
	}
};
static_assert(alignof(UPinModal_C) == 0x000008, "Wrong alignment on UPinModal_C");
static_assert(sizeof(UPinModal_C) == 0x000698, "Wrong size on UPinModal_C");
static_assert(offsetof(UPinModal_C, UberGraphFrame) == 0x0005A0, "Member 'UPinModal_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UPinModal_C, Bad) == 0x0005A8, "Member 'UPinModal_C::Bad' has a wrong offset!");
static_assert(offsetof(UPinModal_C, BG_INPUTBOX) == 0x0005B0, "Member 'UPinModal_C::BG_INPUTBOX' has a wrong offset!");
static_assert(offsetof(UPinModal_C, BG_WIREFRAME2) == 0x0005B8, "Member 'UPinModal_C::BG_WIREFRAME2' has a wrong offset!");
static_assert(offsetof(UPinModal_C, Border) == 0x0005C0, "Member 'UPinModal_C::Border' has a wrong offset!");
static_assert(offsetof(UPinModal_C, Button_Close_1) == 0x0005C8, "Member 'UPinModal_C::Button_Close_1' has a wrong offset!");
static_assert(offsetof(UPinModal_C, CommonActivatableWidgetSwitcher_160) == 0x0005D0, "Member 'UPinModal_C::CommonActivatableWidgetSwitcher_160' has a wrong offset!");
static_assert(offsetof(UPinModal_C, Good) == 0x0005D8, "Member 'UPinModal_C::Good' has a wrong offset!");
static_assert(offsetof(UPinModal_C, GradientForFlipping) == 0x0005E0, "Member 'UPinModal_C::GradientForFlipping' has a wrong offset!");
static_assert(offsetof(UPinModal_C, Hidden_PasscodeButton_0) == 0x0005E8, "Member 'UPinModal_C::Hidden_PasscodeButton_0' has a wrong offset!");
static_assert(offsetof(UPinModal_C, Hidden_PasscodeButton_1) == 0x0005F0, "Member 'UPinModal_C::Hidden_PasscodeButton_1' has a wrong offset!");
static_assert(offsetof(UPinModal_C, Hidden_PasscodeButton_2) == 0x0005F8, "Member 'UPinModal_C::Hidden_PasscodeButton_2' has a wrong offset!");
static_assert(offsetof(UPinModal_C, Hidden_PasscodeButton_3) == 0x000600, "Member 'UPinModal_C::Hidden_PasscodeButton_3' has a wrong offset!");
static_assert(offsetof(UPinModal_C, Hidden_PasscodeButton_4) == 0x000608, "Member 'UPinModal_C::Hidden_PasscodeButton_4' has a wrong offset!");
static_assert(offsetof(UPinModal_C, Hidden_PasscodeButton_5) == 0x000610, "Member 'UPinModal_C::Hidden_PasscodeButton_5' has a wrong offset!");
static_assert(offsetof(UPinModal_C, Hidden_PasscodeButton_6) == 0x000618, "Member 'UPinModal_C::Hidden_PasscodeButton_6' has a wrong offset!");
static_assert(offsetof(UPinModal_C, Hidden_PasscodeButton_7) == 0x000620, "Member 'UPinModal_C::Hidden_PasscodeButton_7' has a wrong offset!");
static_assert(offsetof(UPinModal_C, Hidden_PasscodeButton_8) == 0x000628, "Member 'UPinModal_C::Hidden_PasscodeButton_8' has a wrong offset!");
static_assert(offsetof(UPinModal_C, Hidden_PasscodeButton_9) == 0x000630, "Member 'UPinModal_C::Hidden_PasscodeButton_9' has a wrong offset!");
static_assert(offsetof(UPinModal_C, PasscodeButton_0) == 0x000638, "Member 'UPinModal_C::PasscodeButton_0' has a wrong offset!");
static_assert(offsetof(UPinModal_C, PasscodeButton_1) == 0x000640, "Member 'UPinModal_C::PasscodeButton_1' has a wrong offset!");
static_assert(offsetof(UPinModal_C, PasscodeButton_2) == 0x000648, "Member 'UPinModal_C::PasscodeButton_2' has a wrong offset!");
static_assert(offsetof(UPinModal_C, PasscodeButton_3) == 0x000650, "Member 'UPinModal_C::PasscodeButton_3' has a wrong offset!");
static_assert(offsetof(UPinModal_C, PasscodeButton_4) == 0x000658, "Member 'UPinModal_C::PasscodeButton_4' has a wrong offset!");
static_assert(offsetof(UPinModal_C, PasscodeButton_5) == 0x000660, "Member 'UPinModal_C::PasscodeButton_5' has a wrong offset!");
static_assert(offsetof(UPinModal_C, PasscodeButton_6) == 0x000668, "Member 'UPinModal_C::PasscodeButton_6' has a wrong offset!");
static_assert(offsetof(UPinModal_C, PasscodeButton_7) == 0x000670, "Member 'UPinModal_C::PasscodeButton_7' has a wrong offset!");
static_assert(offsetof(UPinModal_C, PasscodeButton_8) == 0x000678, "Member 'UPinModal_C::PasscodeButton_8' has a wrong offset!");
static_assert(offsetof(UPinModal_C, PasscodeButton_9) == 0x000680, "Member 'UPinModal_C::PasscodeButton_9' has a wrong offset!");
static_assert(offsetof(UPinModal_C, StateSwitcher) == 0x000688, "Member 'UPinModal_C::StateSwitcher' has a wrong offset!");
static_assert(offsetof(UPinModal_C, Waiting) == 0x000690, "Member 'UPinModal_C::Waiting' has a wrong offset!");

}
