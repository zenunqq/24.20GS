#pragma once

#include "Basic.hpp"

#include "CommonUILegacy_classes.hpp"
#include "CommonUILegacy_parameters.hpp"

namespace SDK
{

void UCommonActivatablePanelLegacy::AddInputActionHandler(class UDataTable* DataTable, class FName RowName, TDelegate<void(bool* bPassThrough)> CommitedEvent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonActivatablePanelLegacy", "AddInputActionHandler");

	Params::CommonActivatablePanelLegacy_AddInputActionHandler Parms{};

	Parms.DataTable = DataTable;
	Parms.RowName = RowName;
	Parms.CommitedEvent = CommitedEvent;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UCommonActivatablePanelLegacy::AddInputActionHandlerWithPopup(class UDataTable* DataTable, class FName RowName, TDelegate<void(bool* bPassThrough)> CommitedEvent, class UCommonPopupMenuLegacy* PopupMenu)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonActivatablePanelLegacy", "AddInputActionHandlerWithPopup");

	Params::CommonActivatablePanelLegacy_AddInputActionHandlerWithPopup Parms{};

	Parms.DataTable = DataTable;
	Parms.RowName = RowName;
	Parms.CommitedEvent = CommitedEvent;
	Parms.PopupMenu = PopupMenu;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UCommonActivatablePanelLegacy::AddInputActionHandlerWithProgress(class UDataTable* DataTable, class FName RowName, TDelegate<void(bool* bPassThrough)> CommitedEvent, TDelegate<void(float HeldPercent)> ProgressEvent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonActivatablePanelLegacy", "AddInputActionHandlerWithProgress");

	Params::CommonActivatablePanelLegacy_AddInputActionHandlerWithProgress Parms{};

	Parms.DataTable = DataTable;
	Parms.RowName = RowName;
	Parms.CommitedEvent = CommitedEvent;
	Parms.ProgressEvent = ProgressEvent;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UCommonActivatablePanelLegacy::AddInputActionHandlerWithProgressPopup(class UDataTable* DataTable, class FName RowName, TDelegate<void(bool* bPassThrough)> CommitedEvent, TDelegate<void(float HeldPercent)> ProgressEvent, class UCommonPopupMenuLegacy* PopupMenu)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonActivatablePanelLegacy", "AddInputActionHandlerWithProgressPopup");

	Params::CommonActivatablePanelLegacy_AddInputActionHandlerWithProgressPopup Parms{};

	Parms.DataTable = DataTable;
	Parms.RowName = RowName;
	Parms.CommitedEvent = CommitedEvent;
	Parms.ProgressEvent = ProgressEvent;
	Parms.PopupMenu = PopupMenu;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UCommonActivatablePanelLegacy::AddInputActionNoHandler(class UDataTable* DataTable, class FName RowName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonActivatablePanelLegacy", "AddInputActionNoHandler");

	Params::CommonActivatablePanelLegacy_AddInputActionNoHandler Parms{};

	Parms.DataTable = DataTable;
	Parms.RowName = RowName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UCommonActivatablePanelLegacy::BeginIntro()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonActivatablePanelLegacy", "BeginIntro");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void UCommonActivatablePanelLegacy::BeginOutro()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonActivatablePanelLegacy", "BeginOutro");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void UCommonActivatablePanelLegacy::EndIntro()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonActivatablePanelLegacy", "EndIntro");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void UCommonActivatablePanelLegacy::EndOutro()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonActivatablePanelLegacy", "EndOutro");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void UCommonActivatablePanelLegacy::OnAddedToActivationStack()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonActivatablePanelLegacy", "OnAddedToActivationStack");

	UObject::ProcessEvent(Func, nullptr);
}

void UCommonActivatablePanelLegacy::OnBeginIntro()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonActivatablePanelLegacy", "OnBeginIntro");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void UCommonActivatablePanelLegacy::OnBeginOutro()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonActivatablePanelLegacy", "OnBeginOutro");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void UCommonActivatablePanelLegacy::OnInputModeChanged(bool bUsingGamepad)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonActivatablePanelLegacy", "OnInputModeChanged");

	Params::CommonActivatablePanelLegacy_OnInputModeChanged Parms{};

	Parms.bUsingGamepad = bUsingGamepad;

	UObject::ProcessEvent(Func, &Parms);
}

void UCommonActivatablePanelLegacy::OnRemovedFromActivationStack()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonActivatablePanelLegacy", "OnRemovedFromActivationStack");

	UObject::ProcessEvent(Func, nullptr);
}

void UCommonActivatablePanelLegacy::OnTransitionedBySwitcher()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonActivatablePanelLegacy", "OnTransitionedBySwitcher");

	UObject::ProcessEvent(Func, nullptr);
}

void UCommonActivatablePanelLegacy::PopPanel()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonActivatablePanelLegacy", "PopPanel");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void UCommonActivatablePanelLegacy::RemoveAllInputActionHandlers()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonActivatablePanelLegacy", "RemoveAllInputActionHandlers");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void UCommonActivatablePanelLegacy::RemoveInputActionHandler(const struct FDataTableRowHandle& InputActionRow)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonActivatablePanelLegacy", "RemoveInputActionHandler");

	Params::CommonActivatablePanelLegacy_RemoveInputActionHandler Parms{};

	Parms.InputActionRow = std::move(InputActionRow);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UCommonActivatablePanelLegacy::SetActionHandlerState(const class UDataTable* DataTable, class FName RowName, EInputActionState State)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonActivatablePanelLegacy", "SetActionHandlerState");

	Params::CommonActivatablePanelLegacy_SetActionHandlerState Parms{};

	Parms.DataTable = DataTable;
	Parms.RowName = RowName;
	Parms.State = State;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UCommonActivatablePanelLegacy::SetActionHandlerStateFromHandle(const struct FDataTableRowHandle& InputActionRow, EInputActionState State)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonActivatablePanelLegacy", "SetActionHandlerStateFromHandle");

	Params::CommonActivatablePanelLegacy_SetActionHandlerStateFromHandle Parms{};

	Parms.InputActionRow = std::move(InputActionRow);
	Parms.State = State;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UCommonActivatablePanelLegacy::SetActionHandlerStateFromHandleWithDisabledCommitEvent(const struct FDataTableRowHandle& InputActionRow, EInputActionState State, TDelegate<void(bool* bPassThrough)> DisabledCommitEvent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonActivatablePanelLegacy", "SetActionHandlerStateFromHandleWithDisabledCommitEvent");

	Params::CommonActivatablePanelLegacy_SetActionHandlerStateFromHandleWithDisabledCommitEvent Parms{};

	Parms.InputActionRow = std::move(InputActionRow);
	Parms.State = State;
	Parms.DisabledCommitEvent = DisabledCommitEvent;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UCommonActivatablePanelLegacy::SetActionHandlerStateWithDisabledCommitEvent(class UDataTable* DataTable, class FName RowName, EInputActionState State, TDelegate<void(bool* bPassThrough)> DisabledCommitEvent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonActivatablePanelLegacy", "SetActionHandlerStateWithDisabledCommitEvent");

	Params::CommonActivatablePanelLegacy_SetActionHandlerStateWithDisabledCommitEvent Parms{};

	Parms.DataTable = DataTable;
	Parms.RowName = RowName;
	Parms.State = State;
	Parms.DisabledCommitEvent = DisabledCommitEvent;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UCommonActivatablePanelLegacy::SetInputActionHandler(const struct FDataTableRowHandle& InputActionRow, TDelegate<void(bool* bPassThrough)> CommitedEvent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonActivatablePanelLegacy", "SetInputActionHandler");

	Params::CommonActivatablePanelLegacy_SetInputActionHandler Parms{};

	Parms.InputActionRow = std::move(InputActionRow);
	Parms.CommitedEvent = CommitedEvent;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UCommonActivatablePanelLegacy::SetInputActionHandlerWithPopupMenu(const struct FDataTableRowHandle& InputActionRow, TDelegate<void(bool* bPassThrough)> CommitedEvent, class UCommonPopupMenuLegacy* PopupMenu)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonActivatablePanelLegacy", "SetInputActionHandlerWithPopupMenu");

	Params::CommonActivatablePanelLegacy_SetInputActionHandlerWithPopupMenu Parms{};

	Parms.InputActionRow = std::move(InputActionRow);
	Parms.CommitedEvent = CommitedEvent;
	Parms.PopupMenu = PopupMenu;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UCommonActivatablePanelLegacy::SetInputActionHandlerWithProgress(const struct FDataTableRowHandle& InputActionRow, TDelegate<void(bool* bPassThrough)> CommitedEvent, TDelegate<void(float HeldPercent)> ProgressEvent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonActivatablePanelLegacy", "SetInputActionHandlerWithProgress");

	Params::CommonActivatablePanelLegacy_SetInputActionHandlerWithProgress Parms{};

	Parms.InputActionRow = std::move(InputActionRow);
	Parms.CommitedEvent = CommitedEvent;
	Parms.ProgressEvent = ProgressEvent;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UCommonActivatablePanelLegacy::SetInputActionHandlerWithProgressPopupMenu(const struct FDataTableRowHandle& InputActionRow, TDelegate<void(bool* bPassThrough)> CommitedEvent, TDelegate<void(float HeldPercent)> ProgressEvent, class UCommonPopupMenuLegacy* PopupMenu)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonActivatablePanelLegacy", "SetInputActionHandlerWithProgressPopupMenu");

	Params::CommonActivatablePanelLegacy_SetInputActionHandlerWithProgressPopupMenu Parms{};

	Parms.InputActionRow = std::move(InputActionRow);
	Parms.CommitedEvent = CommitedEvent;
	Parms.ProgressEvent = ProgressEvent;
	Parms.PopupMenu = PopupMenu;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

bool UCommonActivatablePanelLegacy::GetInputActions(TArray<struct FCommonInputActionHandlerData>* InputActionDataRows) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonActivatablePanelLegacy", "GetInputActions");

	Params::CommonActivatablePanelLegacy_GetInputActions Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	if (InputActionDataRows != nullptr)
		*InputActionDataRows = std::move(Parms.InputActionDataRows);

	return Parms.ReturnValue;
}

bool UCommonActivatablePanelLegacy::HasInputActionHandler(const struct FDataTableRowHandle& InputActionRow) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonActivatablePanelLegacy", "HasInputActionHandler");

	Params::CommonActivatablePanelLegacy_HasInputActionHandler Parms{};

	Parms.InputActionRow = std::move(InputActionRow);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

bool UCommonActivatablePanelLegacy::IsInActivationStack() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonActivatablePanelLegacy", "IsInActivationStack");

	Params::CommonActivatablePanelLegacy_IsInActivationStack Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

bool UCommonActivatablePanelLegacy::IsIntroed() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonActivatablePanelLegacy", "IsIntroed");

	Params::CommonActivatablePanelLegacy_IsIntroed Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

void UCommonButtonLegacy::HandleOnButtonClicked(class UCommonButtonBase* Button)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonButtonLegacy", "HandleOnButtonClicked");

	Params::CommonButtonLegacy_HandleOnButtonClicked Parms{};

	Parms.Button = Button;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UCommonButtonLegacy::HandleOnButtonDoubleClicked(class UCommonButtonBase* Button)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonButtonLegacy", "HandleOnButtonDoubleClicked");

	Params::CommonButtonLegacy_HandleOnButtonDoubleClicked Parms{};

	Parms.Button = Button;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UCommonButtonLegacy::HandleOnButtonHovered(class UCommonButtonBase* Button)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonButtonLegacy", "HandleOnButtonHovered");

	Params::CommonButtonLegacy_HandleOnButtonHovered Parms{};

	Parms.Button = Button;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UCommonButtonLegacy::HandleOnButtonUnhovered(class UCommonButtonBase* Button)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonButtonLegacy", "HandleOnButtonUnhovered");

	Params::CommonButtonLegacy_HandleOnButtonUnhovered Parms{};

	Parms.Button = Button;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UCommonButtonLegacy::HandleOnSelectedChanged(class UCommonButtonBase* Button, bool InSelected)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonButtonLegacy", "HandleOnSelectedChanged");

	Params::CommonButtonLegacy_HandleOnSelectedChanged Parms{};

	Parms.Button = Button;
	Parms.InSelected = InSelected;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UCommonButtonLegacy::SetTriggeredInputActionLegacy(const struct FDataTableRowHandle& InputActionRow, class UCommonActivatablePanelLegacy* OldPanel)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonButtonLegacy", "SetTriggeredInputActionLegacy");

	Params::CommonButtonLegacy_SetTriggeredInputActionLegacy Parms{};

	Parms.InputActionRow = std::move(InputActionRow);
	Parms.OldPanel = OldPanel;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

bool UCommonInputManagerLegacy::GetAvailableInputActions(TArray<struct FCommonInputActionHandlerData>* AvailableInputActions)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonInputManagerLegacy", "GetAvailableInputActions");

	Params::CommonInputManagerLegacy_GetAvailableInputActions Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	if (AvailableInputActions != nullptr)
		*AvailableInputActions = std::move(Parms.AvailableInputActions);

	return Parms.ReturnValue;
}

void UCommonInputManagerLegacy::PopActivatablePanel(class UCommonActivatablePanelLegacy* ActivatablePanel)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonInputManagerLegacy", "PopActivatablePanel");

	Params::CommonInputManagerLegacy_PopActivatablePanel Parms{};

	Parms.ActivatablePanel = ActivatablePanel;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UCommonInputManagerLegacy::PushActivatablePanel(class UCommonActivatablePanelLegacy* ActivatablePanel, bool bIntroPanel, bool bOutroPanelBelow)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonInputManagerLegacy", "PushActivatablePanel");

	Params::CommonInputManagerLegacy_PushActivatablePanel Parms{};

	Parms.ActivatablePanel = ActivatablePanel;
	Parms.bIntroPanel = bIntroPanel;
	Parms.bOutroPanelBelow = bOutroPanelBelow;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UCommonInputManagerLegacy::ResumeStartingOperationProcessing()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonInputManagerLegacy", "ResumeStartingOperationProcessing");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void UCommonInputManagerLegacy::SetGlobalInputHandlerPriorityFilter(int32 InFilterPriority)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonInputManagerLegacy", "SetGlobalInputHandlerPriorityFilter");

	Params::CommonInputManagerLegacy_SetGlobalInputHandlerPriorityFilter Parms{};

	Parms.InFilterPriority = InFilterPriority;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

bool UCommonInputManagerLegacy::StartListeningForExistingHeldAction(const struct FDataTableRowHandle& InputActionDataRow, const TDelegate<void()>& CompleteEvent, const TDelegate<void(float HeldPercent)>& ProgressEvent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonInputManagerLegacy", "StartListeningForExistingHeldAction");

	Params::CommonInputManagerLegacy_StartListeningForExistingHeldAction Parms{};

	Parms.InputActionDataRow = std::move(InputActionDataRow);
	Parms.CompleteEvent = CompleteEvent;
	Parms.ProgressEvent = ProgressEvent;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

bool UCommonInputManagerLegacy::StopListeningForExistingHeldAction(const struct FDataTableRowHandle& InputActionDataRow, const TDelegate<void()>& CompleteEvent, const TDelegate<void(float HeldPercent)>& ProgressEvent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonInputManagerLegacy", "StopListeningForExistingHeldAction");

	Params::CommonInputManagerLegacy_StopListeningForExistingHeldAction Parms{};

	Parms.InputActionDataRow = std::move(InputActionDataRow);
	Parms.CompleteEvent = CompleteEvent;
	Parms.ProgressEvent = ProgressEvent;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

void UCommonInputManagerLegacy::SuspendStartingOperationProcessing()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonInputManagerLegacy", "SuspendStartingOperationProcessing");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

int32 UCommonInputManagerLegacy::GetGlobalInputHandlerPriorityFilter() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonInputManagerLegacy", "GetGlobalInputHandlerPriorityFilter");

	Params::CommonInputManagerLegacy_GetGlobalInputHandlerPriorityFilter Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

class UCommonActivatablePanelLegacy* UCommonInputManagerLegacy::GetTopPanel() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonInputManagerLegacy", "GetTopPanel");

	Params::CommonInputManagerLegacy_GetTopPanel Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

bool UCommonInputManagerLegacy::IsInputSuspended() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonInputManagerLegacy", "IsInputSuspended");

	Params::CommonInputManagerLegacy_IsInputSuspended Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

bool UCommonInputManagerLegacy::IsPanelOnStack(const class UCommonActivatablePanelLegacy* InPanel) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonInputManagerLegacy", "IsPanelOnStack");

	Params::CommonInputManagerLegacy_IsPanelOnStack Parms{};

	Parms.InPanel = InPanel;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

void UCommonInputReflectorLegacy::OnButtonAdded(class UCommonButtonLegacy* AddedButton, const struct FCommonInputActionHandlerData& Data)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonInputReflectorLegacy", "OnButtonAdded");

	Params::CommonInputReflectorLegacy_OnButtonAdded Parms{};

	Parms.AddedButton = AddedButton;
	Parms.Data = std::move(Data);

	UObject::ProcessEvent(Func, &Parms);
}

class UUserWidget* UCommonPopupButtonLegacy::GetMenuAnchorWidget()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonPopupButtonLegacy", "GetMenuAnchorWidget");

	Params::CommonPopupButtonLegacy_GetMenuAnchorWidget Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

void UCommonPopupMenuLegacy::HandlePostDifferentContextProviderSet()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonPopupMenuLegacy", "HandlePostDifferentContextProviderSet");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void UCommonPopupMenuLegacy::HandlePreDifferentContextProviderSet()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonPopupMenuLegacy", "HandlePreDifferentContextProviderSet");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void UCommonPopupMenuLegacy::OnIsOpenChanged(bool IsOpen)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonPopupMenuLegacy", "OnIsOpenChanged");

	Params::CommonPopupMenuLegacy_OnIsOpenChanged Parms{};

	Parms.IsOpen = IsOpen;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UCommonPopupMenuLegacy::RequestClose()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonPopupMenuLegacy", "RequestClose");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void UCommonPopupMenuLegacy::SetContextProvider(const class UObject* ContextProvidingObject_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonPopupMenuLegacy", "SetContextProvider");

	Params::CommonPopupMenuLegacy_SetContextProvider Parms{};

	Parms.ContextProvidingObject_0 = ContextProvidingObject_0;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UCommonPopupMenuLegacy::SetOwningMenuAnchor(const class UMenuAnchor* MenuAnchor)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonPopupMenuLegacy", "SetOwningMenuAnchor");

	Params::CommonPopupMenuLegacy_SetOwningMenuAnchor Parms{};

	Parms.MenuAnchor = MenuAnchor;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

class UCommonButtonLegacy* UCommonTabListWidgetLegacy::GetTabButtonByID(class FName TabNameID)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonTabListWidgetLegacy", "GetTabButtonByID");

	Params::CommonTabListWidgetLegacy_GetTabButtonByID Parms{};

	Parms.TabNameID = TabNameID;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

void UCommonTabListWidgetLegacy::HandleOnTabButtonCreated(class FName TabId, class UCommonButtonBase* TabButton)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonTabListWidgetLegacy", "HandleOnTabButtonCreated");

	Params::CommonTabListWidgetLegacy_HandleOnTabButtonCreated Parms{};

	Parms.TabId = TabId;
	Parms.TabButton = TabButton;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UCommonTabListWidgetLegacy::HandleOnTabButtonRemoved(class FName TabId, class UCommonButtonBase* TabButton)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonTabListWidgetLegacy", "HandleOnTabButtonRemoved");

	Params::CommonTabListWidgetLegacy_HandleOnTabButtonRemoved Parms{};

	Parms.TabId = TabId;
	Parms.TabButton = TabButton;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UCommonTabListWidgetLegacy::HandleTabCreated(class FName TabNameID, class UCommonButtonLegacy* TabButton)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonTabListWidgetLegacy", "HandleTabCreated");

	Params::CommonTabListWidgetLegacy_HandleTabCreated Parms{};

	Parms.TabNameID = TabNameID;
	Parms.TabButton = TabButton;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UCommonTabListWidgetLegacy::HandleTabRemoved(class FName TabNameID, class UCommonButtonLegacy* TabButton)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonTabListWidgetLegacy", "HandleTabRemoved");

	Params::CommonTabListWidgetLegacy_HandleTabRemoved Parms{};

	Parms.TabNameID = TabNameID;
	Parms.TabButton = TabButton;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

class UCommonInputManagerLegacy* UCommonUISubsystemLegacy::GetInputManager() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonUISubsystemLegacy", "GetInputManager");

	Params::CommonUISubsystemLegacy_GetInputManager Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

void UCommonWidgetStackLegacy::ActivateWidget()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonWidgetStackLegacy", "ActivateWidget");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void UCommonWidgetStackLegacy::DeactivateWidget()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonWidgetStackLegacy", "DeactivateWidget");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

class UWidget* UCommonWidgetStackLegacy::PopWidget()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonWidgetStackLegacy", "PopWidget");

	Params::CommonWidgetStackLegacy_PopWidget Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

void UCommonWidgetStackLegacy::PushWidget(class UWidget* InWidget)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonWidgetStackLegacy", "PushWidget");

	Params::CommonWidgetStackLegacy_PushWidget Parms{};

	Parms.InWidget = InWidget;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UCommonWidgetSwitcherLegacy::ActivateWidget()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonWidgetSwitcherLegacy", "ActivateWidget");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void UCommonWidgetSwitcherLegacy::DeactivateWidget()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonWidgetSwitcherLegacy", "DeactivateWidget");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void UCommonWidgetSwitcherLegacy::HandleActiveWidgetDeactivated(class UCommonActivatablePanelLegacy* DeactivatedPanel)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonWidgetSwitcherLegacy", "HandleActiveWidgetDeactivated");

	Params::CommonWidgetSwitcherLegacy_HandleActiveWidgetDeactivated Parms{};

	Parms.DeactivatedPanel = DeactivatedPanel;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UCommonWidgetSwitcherLegacy::SetActiveWidget_Advanced(class UWidget* Widget, const bool AttemptActivationChange)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonWidgetSwitcherLegacy", "SetActiveWidget_Advanced");

	Params::CommonWidgetSwitcherLegacy_SetActiveWidget_Advanced Parms{};

	Parms.Widget = Widget;
	Parms.AttemptActivationChange = AttemptActivationChange;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UCommonWidgetSwitcherLegacy::SetActiveWidgetIndex_Advanced(const int32 Index_0, const bool AttemptActivationChange)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonWidgetSwitcherLegacy", "SetActiveWidgetIndex_Advanced");

	Params::CommonWidgetSwitcherLegacy_SetActiveWidgetIndex_Advanced Parms{};

	Parms.Index_0 = Index_0;
	Parms.AttemptActivationChange = AttemptActivationChange;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

class UCommonButtonGroupLegacy* UCommonButtonGroupLegacy::CreateButtonGroup(class UObject* ContextObject, bool bInSelectionRequired)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("CommonButtonGroupLegacy", "CreateButtonGroup");

	Params::CommonButtonGroupLegacy_CreateButtonGroup Parms{};

	Parms.ContextObject = ContextObject;
	Parms.bInSelectionRequired = bInSelectionRequired;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

void UCommonButtonGroupLegacy::HandleNativeOnButtonClicked(class UCommonButtonBase* BaseButton, int32 InSelectedButtonIndex)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonButtonGroupLegacy", "HandleNativeOnButtonClicked");

	Params::CommonButtonGroupLegacy_HandleNativeOnButtonClicked Parms{};

	Parms.BaseButton = BaseButton;
	Parms.InSelectedButtonIndex = InSelectedButtonIndex;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UCommonButtonGroupLegacy::HandleNativeOnButtonDoubleClicked(class UCommonButtonBase* BaseButton, int32 InSelectedButtonIndex)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonButtonGroupLegacy", "HandleNativeOnButtonDoubleClicked");

	Params::CommonButtonGroupLegacy_HandleNativeOnButtonDoubleClicked Parms{};

	Parms.BaseButton = BaseButton;
	Parms.InSelectedButtonIndex = InSelectedButtonIndex;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UCommonButtonGroupLegacy::HandleNativeOnHoveredButtonChanged(class UCommonButtonBase* BaseButton, int32 InSelectedButtonIndex)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonButtonGroupLegacy", "HandleNativeOnHoveredButtonChanged");

	Params::CommonButtonGroupLegacy_HandleNativeOnHoveredButtonChanged Parms{};

	Parms.BaseButton = BaseButton;
	Parms.InSelectedButtonIndex = InSelectedButtonIndex;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UCommonButtonGroupLegacy::HandleNativeOnSelectedButtonChanged(class UCommonButtonBase* BaseButton, int32 InSelectedButtonIndex)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonButtonGroupLegacy", "HandleNativeOnSelectedButtonChanged");

	Params::CommonButtonGroupLegacy_HandleNativeOnSelectedButtonChanged Parms{};

	Parms.BaseButton = BaseButton;
	Parms.InSelectedButtonIndex = InSelectedButtonIndex;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UCommonButtonGroupLegacy::HandleOnButtonClicked(class UCommonButtonBase* BaseButton, int32 InSelectedButtonIndex)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonButtonGroupLegacy", "HandleOnButtonClicked");

	Params::CommonButtonGroupLegacy_HandleOnButtonClicked Parms{};

	Parms.BaseButton = BaseButton;
	Parms.InSelectedButtonIndex = InSelectedButtonIndex;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UCommonButtonGroupLegacy::HandleOnButtonDoubleClicked(class UCommonButtonBase* BaseButton, int32 InSelectedButtonIndex)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonButtonGroupLegacy", "HandleOnButtonDoubleClicked");

	Params::CommonButtonGroupLegacy_HandleOnButtonDoubleClicked Parms{};

	Parms.BaseButton = BaseButton;
	Parms.InSelectedButtonIndex = InSelectedButtonIndex;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UCommonButtonGroupLegacy::HandleOnHoveredButtonChanged(class UCommonButtonBase* BaseButton, int32 InSelectedButtonIndex)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonButtonGroupLegacy", "HandleOnHoveredButtonChanged");

	Params::CommonButtonGroupLegacy_HandleOnHoveredButtonChanged Parms{};

	Parms.BaseButton = BaseButton;
	Parms.InSelectedButtonIndex = InSelectedButtonIndex;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UCommonButtonGroupLegacy::HandleOnSelectedButtonChanged(class UCommonButtonBase* BaseButton, int32 InSelectedButtonIndex)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonButtonGroupLegacy", "HandleOnSelectedButtonChanged");

	Params::CommonButtonGroupLegacy_HandleOnSelectedButtonChanged Parms{};

	Parms.BaseButton = BaseButton;
	Parms.InSelectedButtonIndex = InSelectedButtonIndex;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UCommonButtonGroupLegacy::OnButtonHovered(class UCommonButtonLegacy* BaseButton)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonButtonGroupLegacy", "OnButtonHovered");

	Params::CommonButtonGroupLegacy_OnButtonHovered Parms{};

	Parms.BaseButton = BaseButton;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UCommonButtonGroupLegacy::OnButtonUnhovered(class UCommonButtonLegacy* BaseButton)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonButtonGroupLegacy", "OnButtonUnhovered");

	Params::CommonButtonGroupLegacy_OnButtonUnhovered Parms{};

	Parms.BaseButton = BaseButton;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UCommonButtonGroupLegacy::OnHandleButtonClicked(class UCommonButtonLegacy* BaseButton)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonButtonGroupLegacy", "OnHandleButtonClicked");

	Params::CommonButtonGroupLegacy_OnHandleButtonClicked Parms{};

	Parms.BaseButton = BaseButton;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UCommonButtonGroupLegacy::OnHandleButtonDoubleClicked(class UCommonButtonLegacy* BaseButton)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonButtonGroupLegacy", "OnHandleButtonDoubleClicked");

	Params::CommonButtonGroupLegacy_OnHandleButtonDoubleClicked Parms{};

	Parms.BaseButton = BaseButton;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UCommonButtonGroupLegacy::OnSelectionStateChanged(class UCommonButtonLegacy* BaseButton, bool bIsSelected)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonButtonGroupLegacy", "OnSelectionStateChanged");

	Params::CommonButtonGroupLegacy_OnSelectionStateChanged Parms{};

	Parms.BaseButton = BaseButton;
	Parms.bIsSelected = bIsSelected;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

class UCommonButtonLegacy* UCommonButtonGroupLegacy::GetButtonAtIndex(int32 Index_0) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonButtonGroupLegacy", "GetButtonAtIndex");

	Params::CommonButtonGroupLegacy_GetButtonAtIndex Parms{};

	Parms.Index_0 = Index_0;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

class UCommonButtonLegacy* UCommonButtonGroupLegacy::GetSelectedButton() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonButtonGroupLegacy", "GetSelectedButton");

	Params::CommonButtonGroupLegacy_GetSelectedButton Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

}
