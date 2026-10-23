#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteUI_classes.hpp"
#include "CoreUObject_structs.hpp"

namespace SDK
{

class UConfirmationWindow_C final : public UFortConfirmationWindow
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;
	class UWidgetAnimation*                       Intro;
	class USizeBox*                               SizeBox_0;
	class UCommonBorder*                          TapToCloseZone;
	struct FLinearColor                           ButtonIconColor;

public:
	void BndEvt__CloseButton_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature(class UCommonButtonLegacy* Button);
	void BP_OnActivated();
	void ConfigureConfirmationButton(class UCommonButtonBase* Button, const struct FConfirmationDialogAction& Action, bool bSimpleConfirm);
	void ConfigureDeclineButton(class UCommonButtonBase* Button);
	void ExecuteUbergraph_ConfirmationWindow(int32 EntryPoint);
	struct FDataTableRowHandle GetInputAction(class FName RowName, bool UseInputAction);
	void Handle_Configure_Decline_Button(class UCommonButtonBase* New_Button);
	void Initialize();
	void OnBeginOutro();
	void PlayShowSound();
	void PreConstruct(bool IsDesignTime);
	void SetupNonInteractiveContent();
	struct FEventReply TapToClose(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"ConfirmationWindow_C">();
	}
	static class UConfirmationWindow_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UConfirmationWindow_C>();
	}
};
static_assert(alignof(UConfirmationWindow_C) == 0x000010, "Wrong alignment on UConfirmationWindow_C");
static_assert(sizeof(UConfirmationWindow_C) == 0x000740, "Wrong size on UConfirmationWindow_C");
static_assert(offsetof(UConfirmationWindow_C, UberGraphFrame) == 0x000710, "Member 'UConfirmationWindow_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UConfirmationWindow_C, Intro) == 0x000718, "Member 'UConfirmationWindow_C::Intro' has a wrong offset!");
static_assert(offsetof(UConfirmationWindow_C, SizeBox_0) == 0x000720, "Member 'UConfirmationWindow_C::SizeBox_0' has a wrong offset!");
static_assert(offsetof(UConfirmationWindow_C, TapToCloseZone) == 0x000728, "Member 'UConfirmationWindow_C::TapToCloseZone' has a wrong offset!");
static_assert(offsetof(UConfirmationWindow_C, ButtonIconColor) == 0x000730, "Member 'UConfirmationWindow_C::ButtonIconColor' has a wrong offset!");

}
