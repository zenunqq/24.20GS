#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteUI_classes.hpp"

namespace SDK
{

class UFlagSelectionModal_C final : public UFortFlagSelectionModal
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;
	class UWidgetAnimation*                       Intro;
	class UVerticalBox*                           FlagConfirmation;
	class UVerticalBox*                           FlagSelection;
	class USafeZone*                              SafeZone_0;
	class UWidgetSwitcher*                        Switcher_Confirmation;
	class USoundBase*                             FlagAppearWhooshSound;
	class USoundBase*                             FlagClickSound;

public:
	void BndEvt__FlagSelectionModal_Button_Change_K2Node_ComponentBoundEvent_2_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
	void BndEvt__FlagSelectionModal_Button_ConfirmationCancel_K2Node_ComponentBoundEvent_3_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
	void BndEvt__FlagSelectionModal_TileView_FlagOptions_K2Node_ComponentBoundEvent_0_SimpleListItemEventDynamic__DelegateSignature(class UObject* Item);
	void BP_OnActivated();
	void ExecuteUbergraph_FlagSelectionModal(int32 EntryPoint);
	void Handle_Back(bool* PassThrough);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"FlagSelectionModal_C">();
	}
	static class UFlagSelectionModal_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFlagSelectionModal_C>();
	}
};
static_assert(alignof(UFlagSelectionModal_C) == 0x000008, "Wrong alignment on UFlagSelectionModal_C");
static_assert(sizeof(UFlagSelectionModal_C) == 0x000610, "Wrong size on UFlagSelectionModal_C");
static_assert(offsetof(UFlagSelectionModal_C, UberGraphFrame) == 0x0005D0, "Member 'UFlagSelectionModal_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UFlagSelectionModal_C, Intro) == 0x0005D8, "Member 'UFlagSelectionModal_C::Intro' has a wrong offset!");
static_assert(offsetof(UFlagSelectionModal_C, FlagConfirmation) == 0x0005E0, "Member 'UFlagSelectionModal_C::FlagConfirmation' has a wrong offset!");
static_assert(offsetof(UFlagSelectionModal_C, FlagSelection) == 0x0005E8, "Member 'UFlagSelectionModal_C::FlagSelection' has a wrong offset!");
static_assert(offsetof(UFlagSelectionModal_C, SafeZone_0) == 0x0005F0, "Member 'UFlagSelectionModal_C::SafeZone_0' has a wrong offset!");
static_assert(offsetof(UFlagSelectionModal_C, Switcher_Confirmation) == 0x0005F8, "Member 'UFlagSelectionModal_C::Switcher_Confirmation' has a wrong offset!");
static_assert(offsetof(UFlagSelectionModal_C, FlagAppearWhooshSound) == 0x000600, "Member 'UFlagSelectionModal_C::FlagAppearWhooshSound' has a wrong offset!");
static_assert(offsetof(UFlagSelectionModal_C, FlagClickSound) == 0x000608, "Member 'UFlagSelectionModal_C::FlagClickSound' has a wrong offset!");

}
