#pragma once

#include "Basic.hpp"

#include "CommonUI_structs.hpp"
#include "CommonUI_classes.hpp"
#include "CommonUILegacy_structs.hpp"
#include "CoreUObject_classes.hpp"
#include "UMG_structs.hpp"

namespace SDK
{

class UCommonActivatablePanelLegacy : public UCommonActivatableWidget
{
public:
	uint8                                         Pad_3A8[0x8];
	TMulticastInlineDelegate<void(class UCommonActivatablePanelLegacy* Panel)> OnWidgetActivated;
	TMulticastInlineDelegate<void(class UCommonActivatablePanelLegacy* Panel)> OnWidgetDeactivated;
	bool                                          bConsumeAllActions;
	bool                                          bExposeActionsExternally;
	bool                                          bShouldBypassStack;
	uint8                                         Pad_3D3[0x10D];

public:
	void AddInputActionHandler(class UDataTable* DataTable, class FName RowName, TDelegate<void(bool* bPassThrough)> CommitedEvent);
	void AddInputActionHandlerWithPopup(class UDataTable* DataTable, class FName RowName, TDelegate<void(bool* bPassThrough)> CommitedEvent, class UCommonPopupMenuLegacy* PopupMenu);
	void AddInputActionHandlerWithProgress(class UDataTable* DataTable, class FName RowName, TDelegate<void(bool* bPassThrough)> CommitedEvent, TDelegate<void(float HeldPercent)> ProgressEvent);
	void AddInputActionHandlerWithProgressPopup(class UDataTable* DataTable, class FName RowName, TDelegate<void(bool* bPassThrough)> CommitedEvent, TDelegate<void(float HeldPercent)> ProgressEvent, class UCommonPopupMenuLegacy* PopupMenu);
	void AddInputActionNoHandler(class UDataTable* DataTable, class FName RowName);
	void BeginIntro();
	void BeginOutro();
	void EndIntro();
	void EndOutro();
	void OnAddedToActivationStack();
	void OnBeginIntro();
	void OnBeginOutro();
	void OnInputModeChanged(bool bUsingGamepad);
	void OnRemovedFromActivationStack();
	void OnTransitionedBySwitcher();
	void PopPanel();
	void RemoveAllInputActionHandlers();
	void RemoveInputActionHandler(const struct FDataTableRowHandle& InputActionRow);
	void SetActionHandlerState(const class UDataTable* DataTable, class FName RowName, EInputActionState State);
	void SetActionHandlerStateFromHandle(const struct FDataTableRowHandle& InputActionRow, EInputActionState State);
	void SetActionHandlerStateFromHandleWithDisabledCommitEvent(const struct FDataTableRowHandle& InputActionRow, EInputActionState State, TDelegate<void(bool* bPassThrough)> DisabledCommitEvent);
	void SetActionHandlerStateWithDisabledCommitEvent(class UDataTable* DataTable, class FName RowName, EInputActionState State, TDelegate<void(bool* bPassThrough)> DisabledCommitEvent);
	void SetInputActionHandler(const struct FDataTableRowHandle& InputActionRow, TDelegate<void(bool* bPassThrough)> CommitedEvent);
	void SetInputActionHandlerWithPopupMenu(const struct FDataTableRowHandle& InputActionRow, TDelegate<void(bool* bPassThrough)> CommitedEvent, class UCommonPopupMenuLegacy* PopupMenu);
	void SetInputActionHandlerWithProgress(const struct FDataTableRowHandle& InputActionRow, TDelegate<void(bool* bPassThrough)> CommitedEvent, TDelegate<void(float HeldPercent)> ProgressEvent);
	void SetInputActionHandlerWithProgressPopupMenu(const struct FDataTableRowHandle& InputActionRow, TDelegate<void(bool* bPassThrough)> CommitedEvent, TDelegate<void(float HeldPercent)> ProgressEvent, class UCommonPopupMenuLegacy* PopupMenu);

	bool GetInputActions(TArray<struct FCommonInputActionHandlerData>* InputActionDataRows) const;
	bool HasInputActionHandler(const struct FDataTableRowHandle& InputActionRow) const;
	bool IsInActivationStack() const;
	bool IsIntroed() const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"CommonActivatablePanelLegacy">();
	}
	static class UCommonActivatablePanelLegacy* GetDefaultObj()
	{
		return GetDefaultObjImpl<UCommonActivatablePanelLegacy>();
	}
};
static_assert(alignof(UCommonActivatablePanelLegacy) == 0x000008, "Wrong alignment on UCommonActivatablePanelLegacy");
static_assert(sizeof(UCommonActivatablePanelLegacy) == 0x0004E0, "Wrong size on UCommonActivatablePanelLegacy");
static_assert(offsetof(UCommonActivatablePanelLegacy, OnWidgetActivated) == 0x0003B0, "Member 'UCommonActivatablePanelLegacy::OnWidgetActivated' has a wrong offset!");
static_assert(offsetof(UCommonActivatablePanelLegacy, OnWidgetDeactivated) == 0x0003C0, "Member 'UCommonActivatablePanelLegacy::OnWidgetDeactivated' has a wrong offset!");
static_assert(offsetof(UCommonActivatablePanelLegacy, bConsumeAllActions) == 0x0003D0, "Member 'UCommonActivatablePanelLegacy::bConsumeAllActions' has a wrong offset!");
static_assert(offsetof(UCommonActivatablePanelLegacy, bExposeActionsExternally) == 0x0003D1, "Member 'UCommonActivatablePanelLegacy::bExposeActionsExternally' has a wrong offset!");
static_assert(offsetof(UCommonActivatablePanelLegacy, bShouldBypassStack) == 0x0003D2, "Member 'UCommonActivatablePanelLegacy::bShouldBypassStack' has a wrong offset!");

class UCommonButtonInternalLegacy final : public UCommonButtonInternalBase
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"CommonButtonInternalLegacy">();
	}
	static class UCommonButtonInternalLegacy* GetDefaultObj()
	{
		return GetDefaultObjImpl<UCommonButtonInternalLegacy>();
	}
};
static_assert(alignof(UCommonButtonInternalLegacy) == 0x000010, "Wrong alignment on UCommonButtonInternalLegacy");
static_assert(sizeof(UCommonButtonInternalLegacy) == 0x000610, "Wrong size on UCommonButtonInternalLegacy");

class UCommonButtonLegacy : public UCommonButtonBase
{
public:
	TMulticastInlineDelegate<void(class UCommonButtonLegacy* Button, bool Selected)> OnSelectedChanged;
	TMulticastInlineDelegate<void(class UCommonButtonLegacy* Button)> OnButtonClicked;
	TMulticastInlineDelegate<void(class UCommonButtonLegacy* Button)> OnButtonDoubleClicked;
	TMulticastInlineDelegate<void(class UCommonButtonLegacy* Button)> OnButtonHovered;
	TMulticastInlineDelegate<void(class UCommonButtonLegacy* Button)> OnButtonUnhovered;

public:
	void HandleOnButtonClicked(class UCommonButtonBase* Button);
	void HandleOnButtonDoubleClicked(class UCommonButtonBase* Button);
	void HandleOnButtonHovered(class UCommonButtonBase* Button);
	void HandleOnButtonUnhovered(class UCommonButtonBase* Button);
	void HandleOnSelectedChanged(class UCommonButtonBase* Button, bool InSelected);
	void SetTriggeredInputActionLegacy(const struct FDataTableRowHandle& InputActionRow, class UCommonActivatablePanelLegacy* OldPanel);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"CommonButtonLegacy">();
	}
	static class UCommonButtonLegacy* GetDefaultObj()
	{
		return GetDefaultObjImpl<UCommonButtonLegacy>();
	}
};
static_assert(alignof(UCommonButtonLegacy) == 0x000010, "Wrong alignment on UCommonButtonLegacy");
static_assert(sizeof(UCommonButtonLegacy) == 0x001430, "Wrong size on UCommonButtonLegacy");
static_assert(offsetof(UCommonButtonLegacy, OnSelectedChanged) == 0x0013E0, "Member 'UCommonButtonLegacy::OnSelectedChanged' has a wrong offset!");
static_assert(offsetof(UCommonButtonLegacy, OnButtonClicked) == 0x0013F0, "Member 'UCommonButtonLegacy::OnButtonClicked' has a wrong offset!");
static_assert(offsetof(UCommonButtonLegacy, OnButtonDoubleClicked) == 0x001400, "Member 'UCommonButtonLegacy::OnButtonDoubleClicked' has a wrong offset!");
static_assert(offsetof(UCommonButtonLegacy, OnButtonHovered) == 0x001410, "Member 'UCommonButtonLegacy::OnButtonHovered' has a wrong offset!");
static_assert(offsetof(UCommonButtonLegacy, OnButtonUnhovered) == 0x001420, "Member 'UCommonButtonLegacy::OnButtonUnhovered' has a wrong offset!");

class UCommonGlobalInputHandlerLegacy final : public UObject
{
public:
	uint8                                         Pad_28[0x48];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"CommonGlobalInputHandlerLegacy">();
	}
	static class UCommonGlobalInputHandlerLegacy* GetDefaultObj()
	{
		return GetDefaultObjImpl<UCommonGlobalInputHandlerLegacy>();
	}
};
static_assert(alignof(UCommonGlobalInputHandlerLegacy) == 0x000008, "Wrong alignment on UCommonGlobalInputHandlerLegacy");
static_assert(sizeof(UCommonGlobalInputHandlerLegacy) == 0x000070, "Wrong size on UCommonGlobalInputHandlerLegacy");

class UCommonInputManagerLegacy final : public UObject
{
public:
	uint8                                         Pad_28[0x80];
	TScriptInterface<class ICommonActionHandlerInterface> CurrentlyHeldActionInputHandler;
	TArray<class UCommonActivatablePanelLegacy*>  ActivatablePanelStack;
	class UCommonGlobalInputHandlerLegacy*        GlobalInputHandler;
	uint8                                         Pad_D0[0x18];
	TArray<struct FOperation>                     Operations;
	uint8                                         Pad_F8[0x10];

public:
	bool GetAvailableInputActions(TArray<struct FCommonInputActionHandlerData>* AvailableInputActions);
	void PopActivatablePanel(class UCommonActivatablePanelLegacy* ActivatablePanel);
	void PushActivatablePanel(class UCommonActivatablePanelLegacy* ActivatablePanel, bool bIntroPanel, bool bOutroPanelBelow);
	void ResumeStartingOperationProcessing();
	void SetGlobalInputHandlerPriorityFilter(int32 InFilterPriority);
	bool StartListeningForExistingHeldAction(const struct FDataTableRowHandle& InputActionDataRow, const TDelegate<void()>& CompleteEvent, const TDelegate<void(float HeldPercent)>& ProgressEvent);
	bool StopListeningForExistingHeldAction(const struct FDataTableRowHandle& InputActionDataRow, const TDelegate<void()>& CompleteEvent, const TDelegate<void(float HeldPercent)>& ProgressEvent);
	void SuspendStartingOperationProcessing();

	int32 GetGlobalInputHandlerPriorityFilter() const;
	class UCommonActivatablePanelLegacy* GetTopPanel() const;
	bool IsInputSuspended() const;
	bool IsPanelOnStack(const class UCommonActivatablePanelLegacy* InPanel) const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"CommonInputManagerLegacy">();
	}
	static class UCommonInputManagerLegacy* GetDefaultObj()
	{
		return GetDefaultObjImpl<UCommonInputManagerLegacy>();
	}
};
static_assert(alignof(UCommonInputManagerLegacy) == 0x000008, "Wrong alignment on UCommonInputManagerLegacy");
static_assert(sizeof(UCommonInputManagerLegacy) == 0x000108, "Wrong size on UCommonInputManagerLegacy");
static_assert(offsetof(UCommonInputManagerLegacy, CurrentlyHeldActionInputHandler) == 0x0000A8, "Member 'UCommonInputManagerLegacy::CurrentlyHeldActionInputHandler' has a wrong offset!");
static_assert(offsetof(UCommonInputManagerLegacy, ActivatablePanelStack) == 0x0000B8, "Member 'UCommonInputManagerLegacy::ActivatablePanelStack' has a wrong offset!");
static_assert(offsetof(UCommonInputManagerLegacy, GlobalInputHandler) == 0x0000C8, "Member 'UCommonInputManagerLegacy::GlobalInputHandler' has a wrong offset!");
static_assert(offsetof(UCommonInputManagerLegacy, Operations) == 0x0000E8, "Member 'UCommonInputManagerLegacy::Operations' has a wrong offset!");

class UCommonInputReflectorLegacy final : public UCommonUserWidget
{
public:
	TSubclassOf<class UCommonButtonLegacy>        ButtonType;
	TArray<class UCommonButtonLegacy*>            ActiveButtons;
	TArray<class UCommonButtonLegacy*>            InactiveButtons;
	uint8                                         Pad_2B8[0x8];

public:
	void OnButtonAdded(class UCommonButtonLegacy* AddedButton, const struct FCommonInputActionHandlerData& Data);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"CommonInputReflectorLegacy">();
	}
	static class UCommonInputReflectorLegacy* GetDefaultObj()
	{
		return GetDefaultObjImpl<UCommonInputReflectorLegacy>();
	}
};
static_assert(alignof(UCommonInputReflectorLegacy) == 0x000008, "Wrong alignment on UCommonInputReflectorLegacy");
static_assert(sizeof(UCommonInputReflectorLegacy) == 0x0002C0, "Wrong size on UCommonInputReflectorLegacy");
static_assert(offsetof(UCommonInputReflectorLegacy, ButtonType) == 0x000290, "Member 'UCommonInputReflectorLegacy::ButtonType' has a wrong offset!");
static_assert(offsetof(UCommonInputReflectorLegacy, ActiveButtons) == 0x000298, "Member 'UCommonInputReflectorLegacy::ActiveButtons' has a wrong offset!");
static_assert(offsetof(UCommonInputReflectorLegacy, InactiveButtons) == 0x0002A8, "Member 'UCommonInputReflectorLegacy::InactiveButtons' has a wrong offset!");

class UCommonPopupButtonLegacy : public UCommonButtonLegacy
{
public:
	class UMenuAnchor*                            PopupMenuAnchor;
	class UCommonPopupMenuLegacy*                 PopupMenu;

public:
	class UUserWidget* GetMenuAnchorWidget();

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"CommonPopupButtonLegacy">();
	}
	static class UCommonPopupButtonLegacy* GetDefaultObj()
	{
		return GetDefaultObjImpl<UCommonPopupButtonLegacy>();
	}
};
static_assert(alignof(UCommonPopupButtonLegacy) == 0x000010, "Wrong alignment on UCommonPopupButtonLegacy");
static_assert(sizeof(UCommonPopupButtonLegacy) == 0x001440, "Wrong size on UCommonPopupButtonLegacy");
static_assert(offsetof(UCommonPopupButtonLegacy, PopupMenuAnchor) == 0x001430, "Member 'UCommonPopupButtonLegacy::PopupMenuAnchor' has a wrong offset!");
static_assert(offsetof(UCommonPopupButtonLegacy, PopupMenu) == 0x001438, "Member 'UCommonPopupButtonLegacy::PopupMenu' has a wrong offset!");

class UCommonPopupMenuLegacy : public UCommonActivatablePanelLegacy
{
public:
	bool                                          bUseInputStack;
	uint8                                         Pad_4E1[0x3];
	TWeakObjectPtr<class UMenuAnchor>             OwningMenuAnchor;
	TWeakObjectPtr<class UObject>                 ContextProvidingObject;
	uint8                                         Pad_4F4[0x4];

public:
	void HandlePostDifferentContextProviderSet();
	void HandlePreDifferentContextProviderSet();
	void OnIsOpenChanged(bool IsOpen);
	void RequestClose();
	void SetContextProvider(const class UObject* ContextProvidingObject_0);
	void SetOwningMenuAnchor(const class UMenuAnchor* MenuAnchor);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"CommonPopupMenuLegacy">();
	}
	static class UCommonPopupMenuLegacy* GetDefaultObj()
	{
		return GetDefaultObjImpl<UCommonPopupMenuLegacy>();
	}
};
static_assert(alignof(UCommonPopupMenuLegacy) == 0x000008, "Wrong alignment on UCommonPopupMenuLegacy");
static_assert(sizeof(UCommonPopupMenuLegacy) == 0x0004F8, "Wrong size on UCommonPopupMenuLegacy");
static_assert(offsetof(UCommonPopupMenuLegacy, bUseInputStack) == 0x0004E0, "Member 'UCommonPopupMenuLegacy::bUseInputStack' has a wrong offset!");
static_assert(offsetof(UCommonPopupMenuLegacy, OwningMenuAnchor) == 0x0004E4, "Member 'UCommonPopupMenuLegacy::OwningMenuAnchor' has a wrong offset!");
static_assert(offsetof(UCommonPopupMenuLegacy, ContextProvidingObject) == 0x0004EC, "Member 'UCommonPopupMenuLegacy::ContextProvidingObject' has a wrong offset!");

class UCommonTabListWidgetLegacy : public UCommonTabListWidgetBase
{
public:
	TMulticastInlineDelegate<void(class FName TabId, class UCommonButtonLegacy* TabButton)> OnTabButtonCreated;
	TMulticastInlineDelegate<void(class FName TabId, class UCommonButtonLegacy* TabButton)> OnTabButtonRemoved;

public:
	class UCommonButtonLegacy* GetTabButtonByID(class FName TabNameID);
	void HandleOnTabButtonCreated(class FName TabId, class UCommonButtonBase* TabButton);
	void HandleOnTabButtonRemoved(class FName TabId, class UCommonButtonBase* TabButton);
	void HandleTabCreated(class FName TabNameID, class UCommonButtonLegacy* TabButton);
	void HandleTabRemoved(class FName TabNameID, class UCommonButtonLegacy* TabButton);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"CommonTabListWidgetLegacy">();
	}
	static class UCommonTabListWidgetLegacy* GetDefaultObj()
	{
		return GetDefaultObjImpl<UCommonTabListWidgetLegacy>();
	}
};
static_assert(alignof(UCommonTabListWidgetLegacy) == 0x000008, "Wrong alignment on UCommonTabListWidgetLegacy");
static_assert(sizeof(UCommonTabListWidgetLegacy) == 0x000390, "Wrong size on UCommonTabListWidgetLegacy");
static_assert(offsetof(UCommonTabListWidgetLegacy, OnTabButtonCreated) == 0x000370, "Member 'UCommonTabListWidgetLegacy::OnTabButtonCreated' has a wrong offset!");
static_assert(offsetof(UCommonTabListWidgetLegacy, OnTabButtonRemoved) == 0x000380, "Member 'UCommonTabListWidgetLegacy::OnTabButtonRemoved' has a wrong offset!");

class UCommonUISubsystemLegacy final : public UCommonUISubsystemBase
{
public:
	TMulticastInlineDelegate<void(bool bInputSuspended)> OnInputSuspensionChanged;
	class UCommonInputManagerLegacy*              CommonInputManager;
	uint8                                         Pad_58[0x18];

public:
	class UCommonInputManagerLegacy* GetInputManager() const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"CommonUISubsystemLegacy">();
	}
	static class UCommonUISubsystemLegacy* GetDefaultObj()
	{
		return GetDefaultObjImpl<UCommonUISubsystemLegacy>();
	}
};
static_assert(alignof(UCommonUISubsystemLegacy) == 0x000008, "Wrong alignment on UCommonUISubsystemLegacy");
static_assert(sizeof(UCommonUISubsystemLegacy) == 0x000070, "Wrong size on UCommonUISubsystemLegacy");
static_assert(offsetof(UCommonUISubsystemLegacy, OnInputSuspensionChanged) == 0x000040, "Member 'UCommonUISubsystemLegacy::OnInputSuspensionChanged' has a wrong offset!");
static_assert(offsetof(UCommonUISubsystemLegacy, CommonInputManager) == 0x000050, "Member 'UCommonUISubsystemLegacy::CommonInputManager' has a wrong offset!");

class UCommonVisibilityWidgetLegacy final : public UCommonBorder
{
public:
	bool                                          bShowForGamepad;
	bool                                          bShowForMouseAndKeyboard;
	bool                                          bShowForTouch;
	bool                                          bShowForPC;
	bool                                          bShowForMac;
	bool                                          bShowForPS4;
	bool                                          bShowForPS5;
	bool                                          bShowForXBox;
	bool                                          bShowForXSX;
	bool                                          bShowForIOS;
	bool                                          bShowForAndroid;
	bool                                          bShowForErebus;
	ESlateVisibility                              VisibleType;
	ESlateVisibility                              HiddenType;
	uint8                                         Pad_2FE[0x2];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"CommonVisibilityWidgetLegacy">();
	}
	static class UCommonVisibilityWidgetLegacy* GetDefaultObj()
	{
		return GetDefaultObjImpl<UCommonVisibilityWidgetLegacy>();
	}
};
static_assert(alignof(UCommonVisibilityWidgetLegacy) == 0x000010, "Wrong alignment on UCommonVisibilityWidgetLegacy");
static_assert(sizeof(UCommonVisibilityWidgetLegacy) == 0x000300, "Wrong size on UCommonVisibilityWidgetLegacy");
static_assert(offsetof(UCommonVisibilityWidgetLegacy, bShowForGamepad) == 0x0002F0, "Member 'UCommonVisibilityWidgetLegacy::bShowForGamepad' has a wrong offset!");
static_assert(offsetof(UCommonVisibilityWidgetLegacy, bShowForMouseAndKeyboard) == 0x0002F1, "Member 'UCommonVisibilityWidgetLegacy::bShowForMouseAndKeyboard' has a wrong offset!");
static_assert(offsetof(UCommonVisibilityWidgetLegacy, bShowForTouch) == 0x0002F2, "Member 'UCommonVisibilityWidgetLegacy::bShowForTouch' has a wrong offset!");
static_assert(offsetof(UCommonVisibilityWidgetLegacy, bShowForPC) == 0x0002F3, "Member 'UCommonVisibilityWidgetLegacy::bShowForPC' has a wrong offset!");
static_assert(offsetof(UCommonVisibilityWidgetLegacy, bShowForMac) == 0x0002F4, "Member 'UCommonVisibilityWidgetLegacy::bShowForMac' has a wrong offset!");
static_assert(offsetof(UCommonVisibilityWidgetLegacy, bShowForPS4) == 0x0002F5, "Member 'UCommonVisibilityWidgetLegacy::bShowForPS4' has a wrong offset!");
static_assert(offsetof(UCommonVisibilityWidgetLegacy, bShowForPS5) == 0x0002F6, "Member 'UCommonVisibilityWidgetLegacy::bShowForPS5' has a wrong offset!");
static_assert(offsetof(UCommonVisibilityWidgetLegacy, bShowForXBox) == 0x0002F7, "Member 'UCommonVisibilityWidgetLegacy::bShowForXBox' has a wrong offset!");
static_assert(offsetof(UCommonVisibilityWidgetLegacy, bShowForXSX) == 0x0002F8, "Member 'UCommonVisibilityWidgetLegacy::bShowForXSX' has a wrong offset!");
static_assert(offsetof(UCommonVisibilityWidgetLegacy, bShowForIOS) == 0x0002F9, "Member 'UCommonVisibilityWidgetLegacy::bShowForIOS' has a wrong offset!");
static_assert(offsetof(UCommonVisibilityWidgetLegacy, bShowForAndroid) == 0x0002FA, "Member 'UCommonVisibilityWidgetLegacy::bShowForAndroid' has a wrong offset!");
static_assert(offsetof(UCommonVisibilityWidgetLegacy, bShowForErebus) == 0x0002FB, "Member 'UCommonVisibilityWidgetLegacy::bShowForErebus' has a wrong offset!");
static_assert(offsetof(UCommonVisibilityWidgetLegacy, VisibleType) == 0x0002FC, "Member 'UCommonVisibilityWidgetLegacy::VisibleType' has a wrong offset!");
static_assert(offsetof(UCommonVisibilityWidgetLegacy, HiddenType) == 0x0002FD, "Member 'UCommonVisibilityWidgetLegacy::HiddenType' has a wrong offset!");

class UCommonWidgetStackLegacy final : public UCommonVisibilitySwitcher
{
public:
	TMulticastInlineDelegate<void(class UWidget* InActiveWidget, int32 InActiveWidgetIndex)> OnActiveWidgetChangedLegacyEvent;

public:
	void ActivateWidget();
	void DeactivateWidget();
	class UWidget* PopWidget();
	void PushWidget(class UWidget* InWidget);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"CommonWidgetStackLegacy">();
	}
	static class UCommonWidgetStackLegacy* GetDefaultObj()
	{
		return GetDefaultObjImpl<UCommonWidgetStackLegacy>();
	}
};
static_assert(alignof(UCommonWidgetStackLegacy) == 0x000008, "Wrong alignment on UCommonWidgetStackLegacy");
static_assert(sizeof(UCommonWidgetStackLegacy) == 0x0001A8, "Wrong size on UCommonWidgetStackLegacy");
static_assert(offsetof(UCommonWidgetStackLegacy, OnActiveWidgetChangedLegacyEvent) == 0x000198, "Member 'UCommonWidgetStackLegacy::OnActiveWidgetChangedLegacyEvent' has a wrong offset!");

class UCommonWidgetSwitcherLegacy : public UCommonAnimatedSwitcher
{
public:
	TMulticastInlineDelegate<void(class UCommonActivatablePanelLegacy* DeactivatedWidget)> OnActiveWidgetDeactivated;
	TMulticastInlineDelegate<void(class UWidget* ActiveWidget, int32 ActiveWidgetIndex)> OnActiveWidgetChanged;
	bool                                          bWidgetActivationEnabled;
	bool                                          bOutroPanelBelow;
	uint8                                         Pad_20A[0x6];

public:
	void ActivateWidget();
	void DeactivateWidget();
	void HandleActiveWidgetDeactivated(class UCommonActivatablePanelLegacy* DeactivatedPanel);
	void SetActiveWidget_Advanced(class UWidget* Widget, const bool AttemptActivationChange);
	void SetActiveWidgetIndex_Advanced(const int32 Index_0, const bool AttemptActivationChange);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"CommonWidgetSwitcherLegacy">();
	}
	static class UCommonWidgetSwitcherLegacy* GetDefaultObj()
	{
		return GetDefaultObjImpl<UCommonWidgetSwitcherLegacy>();
	}
};
static_assert(alignof(UCommonWidgetSwitcherLegacy) == 0x000008, "Wrong alignment on UCommonWidgetSwitcherLegacy");
static_assert(sizeof(UCommonWidgetSwitcherLegacy) == 0x000210, "Wrong size on UCommonWidgetSwitcherLegacy");
static_assert(offsetof(UCommonWidgetSwitcherLegacy, OnActiveWidgetDeactivated) == 0x0001E8, "Member 'UCommonWidgetSwitcherLegacy::OnActiveWidgetDeactivated' has a wrong offset!");
static_assert(offsetof(UCommonWidgetSwitcherLegacy, OnActiveWidgetChanged) == 0x0001F8, "Member 'UCommonWidgetSwitcherLegacy::OnActiveWidgetChanged' has a wrong offset!");
static_assert(offsetof(UCommonWidgetSwitcherLegacy, bWidgetActivationEnabled) == 0x000208, "Member 'UCommonWidgetSwitcherLegacy::bWidgetActivationEnabled' has a wrong offset!");
static_assert(offsetof(UCommonWidgetSwitcherLegacy, bOutroPanelBelow) == 0x000209, "Member 'UCommonWidgetSwitcherLegacy::bOutroPanelBelow' has a wrong offset!");

class UCommonButtonGroupLegacy : public UCommonButtonGroupBase
{
public:
	TMulticastInlineDelegate<void(class UCommonButtonLegacy* AssociatedButton, int32 ButtonIndex)> OnSelectedButtonChanged;
	uint8                                         Pad_120[0x18];
	TMulticastInlineDelegate<void(class UCommonButtonLegacy* AssociatedButton, int32 ButtonIndex)> OnHoveredButtonChanged;
	uint8                                         Pad_148[0x18];
	TMulticastInlineDelegate<void(class UCommonButtonLegacy* AssociatedButton, int32 ButtonIndex)> OnButtonClicked;
	uint8                                         Pad_170[0x18];
	TMulticastInlineDelegate<void(class UCommonButtonLegacy* AssociatedButton, int32 ButtonIndex)> OnButtonDoubleClicked;
	uint8                                         Pad_198[0x18];

public:
	static class UCommonButtonGroupLegacy* CreateButtonGroup(class UObject* ContextObject, bool bInSelectionRequired);

	void HandleNativeOnButtonClicked(class UCommonButtonBase* BaseButton, int32 InSelectedButtonIndex);
	void HandleNativeOnButtonDoubleClicked(class UCommonButtonBase* BaseButton, int32 InSelectedButtonIndex);
	void HandleNativeOnHoveredButtonChanged(class UCommonButtonBase* BaseButton, int32 InSelectedButtonIndex);
	void HandleNativeOnSelectedButtonChanged(class UCommonButtonBase* BaseButton, int32 InSelectedButtonIndex);
	void HandleOnButtonClicked(class UCommonButtonBase* BaseButton, int32 InSelectedButtonIndex);
	void HandleOnButtonDoubleClicked(class UCommonButtonBase* BaseButton, int32 InSelectedButtonIndex);
	void HandleOnHoveredButtonChanged(class UCommonButtonBase* BaseButton, int32 InSelectedButtonIndex);
	void HandleOnSelectedButtonChanged(class UCommonButtonBase* BaseButton, int32 InSelectedButtonIndex);
	void OnButtonHovered(class UCommonButtonLegacy* BaseButton);
	void OnButtonUnhovered(class UCommonButtonLegacy* BaseButton);
	void OnHandleButtonClicked(class UCommonButtonLegacy* BaseButton);
	void OnHandleButtonDoubleClicked(class UCommonButtonLegacy* BaseButton);
	void OnSelectionStateChanged(class UCommonButtonLegacy* BaseButton, bool bIsSelected);

	class UCommonButtonLegacy* GetButtonAtIndex(int32 Index_0) const;
	class UCommonButtonLegacy* GetSelectedButton() const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"CommonButtonGroupLegacy">();
	}
	static class UCommonButtonGroupLegacy* GetDefaultObj()
	{
		return GetDefaultObjImpl<UCommonButtonGroupLegacy>();
	}
};
static_assert(alignof(UCommonButtonGroupLegacy) == 0x000008, "Wrong alignment on UCommonButtonGroupLegacy");
static_assert(sizeof(UCommonButtonGroupLegacy) == 0x0001B0, "Wrong size on UCommonButtonGroupLegacy");
static_assert(offsetof(UCommonButtonGroupLegacy, OnSelectedButtonChanged) == 0x000110, "Member 'UCommonButtonGroupLegacy::OnSelectedButtonChanged' has a wrong offset!");
static_assert(offsetof(UCommonButtonGroupLegacy, OnHoveredButtonChanged) == 0x000138, "Member 'UCommonButtonGroupLegacy::OnHoveredButtonChanged' has a wrong offset!");
static_assert(offsetof(UCommonButtonGroupLegacy, OnButtonClicked) == 0x000160, "Member 'UCommonButtonGroupLegacy::OnButtonClicked' has a wrong offset!");
static_assert(offsetof(UCommonButtonGroupLegacy, OnButtonDoubleClicked) == 0x000188, "Member 'UCommonButtonGroupLegacy::OnButtonDoubleClicked' has a wrong offset!");

class UCommonUIActionRouterLegacy final : public UCommonUIActionRouterBase
{
public:
	uint8                                         Pad_158[0x8];

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"CommonUIActionRouterLegacy">();
	}
	static class UCommonUIActionRouterLegacy* GetDefaultObj()
	{
		return GetDefaultObjImpl<UCommonUIActionRouterLegacy>();
	}
};
static_assert(alignof(UCommonUIActionRouterLegacy) == 0x000008, "Wrong alignment on UCommonUIActionRouterLegacy");
static_assert(sizeof(UCommonUIActionRouterLegacy) == 0x000160, "Wrong size on UCommonUIActionRouterLegacy");

}
