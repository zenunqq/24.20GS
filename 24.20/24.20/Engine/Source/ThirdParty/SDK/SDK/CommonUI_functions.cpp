#pragma once

#include "Basic.hpp"

#include "CommonUI_classes.hpp"
#include "CommonUI_parameters.hpp"

namespace SDK
{

void UCommonWidgetCarouselNavBar::HandleButtonClicked(class UCommonButtonBase* AssociatedButton, int32 ButtonIndex)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonWidgetCarouselNavBar", "HandleButtonClicked");

	Params::CommonWidgetCarouselNavBar_HandleButtonClicked Parms{};

	Parms.AssociatedButton = AssociatedButton;
	Parms.ButtonIndex = ButtonIndex;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UCommonWidgetCarouselNavBar::HandlePageChanged(class UCommonWidgetCarousel* CommonCarousel, int32 PageIndex)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonWidgetCarouselNavBar", "HandlePageChanged");

	Params::CommonWidgetCarouselNavBar_HandlePageChanged Parms{};

	Parms.CommonCarousel = CommonCarousel;
	Parms.PageIndex = PageIndex;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UCommonWidgetCarouselNavBar::SetLinkedCarousel(class UCommonWidgetCarousel* CommonCarousel)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonWidgetCarouselNavBar", "SetLinkedCarousel");

	Params::CommonWidgetCarouselNavBar_SetLinkedCarousel Parms{};

	Parms.CommonCarousel = CommonCarousel;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UCommonBorder::SetStyle(TSubclassOf<class UCommonBorderStyle> InStyle)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonBorder", "SetStyle");

	Params::CommonBorder_SetStyle Parms{};

	Parms.InStyle = InStyle;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

const TArray<class FName> UUCommonVisibilityWidgetBase::GetRegisteredPlatforms()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("UCommonVisibilityWidgetBase", "GetRegisteredPlatforms");

	Params::UCommonVisibilityWidgetBase_GetRegisteredPlatforms Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

void UCommonWidgetGroupBase::AddWidget(class UWidget* InWidget)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonWidgetGroupBase", "AddWidget");

	Params::CommonWidgetGroupBase_AddWidget Parms{};

	Parms.InWidget = InWidget;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UCommonWidgetGroupBase::RemoveAll()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonWidgetGroupBase", "RemoveAll");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void UCommonWidgetGroupBase::RemoveWidget(class UWidget* InWidget)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonWidgetGroupBase", "RemoveWidget");

	Params::CommonWidgetGroupBase_RemoveWidget Parms{};

	Parms.InWidget = InWidget;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UCommonActionWidget::SetEnhancedInputAction(class UInputAction* InInputAction)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonActionWidget", "SetEnhancedInputAction");

	Params::CommonActionWidget_SetEnhancedInputAction Parms{};

	Parms.InInputAction = InInputAction;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UCommonActionWidget::SetIconRimBrush(const struct FSlateBrush& InIconRimBrush)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonActionWidget", "SetIconRimBrush");

	Params::CommonActionWidget_SetIconRimBrush Parms{};

	Parms.InIconRimBrush = std::move(InIconRimBrush);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UCommonActionWidget::SetInputAction(const struct FDataTableRowHandle& InputActionRow)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonActionWidget", "SetInputAction");

	Params::CommonActionWidget_SetInputAction Parms{};

	Parms.InputActionRow = std::move(InputActionRow);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UCommonActionWidget::SetInputActions(const TArray<struct FDataTableRowHandle>& NewInputActions)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonActionWidget", "SetInputActions");

	Params::CommonActionWidget_SetInputActions Parms{};

	Parms.NewInputActions = std::move(NewInputActions);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

class FText UCommonActionWidget::GetDisplayText() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonActionWidget", "GetDisplayText");

	Params::CommonActionWidget_GetDisplayText Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

struct FSlateBrush UCommonActionWidget::GetIcon() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonActionWidget", "GetIcon");

	Params::CommonActionWidget_GetIcon Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

bool UCommonActionWidget::IsHeldAction() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonActionWidget", "IsHeldAction");

	Params::CommonActionWidget_IsHeldAction Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

void UCommonUserWidget::SetConsumePointerInput(bool bInConsumePointerInput)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonUserWidget", "SetConsumePointerInput");

	Params::CommonUserWidget_SetConsumePointerInput Parms{};

	Parms.bInConsumePointerInput = bInConsumePointerInput;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UCommonActivatableWidget::ActivateWidget()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonActivatableWidget", "ActivateWidget");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void UCommonActivatableWidget::BindVisibilityToActivation(class UCommonActivatableWidget* ActivatableWidget)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonActivatableWidget", "BindVisibilityToActivation");

	Params::CommonActivatableWidget_BindVisibilityToActivation Parms{};

	Parms.ActivatableWidget = ActivatableWidget;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UCommonActivatableWidget::BP_OnActivated()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonActivatableWidget", "BP_OnActivated");

	UObject::ProcessEvent(Func, nullptr);
}

void UCommonActivatableWidget::BP_OnDeactivated()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonActivatableWidget", "BP_OnDeactivated");

	UObject::ProcessEvent(Func, nullptr);
}

bool UCommonActivatableWidget::BP_OnHandleBackAction()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonActivatableWidget", "BP_OnHandleBackAction");

	Params::CommonActivatableWidget_BP_OnHandleBackAction Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

void UCommonActivatableWidget::DeactivateWidget()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonActivatableWidget", "DeactivateWidget");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void UCommonActivatableWidget::SetBindVisibilities(ESlateVisibility OnActivatedVisibility, ESlateVisibility OnDeactivatedVisibility, bool bInAllActive)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonActivatableWidget", "SetBindVisibilities");

	Params::CommonActivatableWidget_SetBindVisibilities Parms{};

	Parms.OnActivatedVisibility = OnActivatedVisibility;
	Parms.OnDeactivatedVisibility = OnDeactivatedVisibility;
	Parms.bInAllActive = bInAllActive;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

class UWidget* UCommonActivatableWidget::BP_GetDesiredFocusTarget() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonActivatableWidget", "BP_GetDesiredFocusTarget");

	Params::CommonActivatableWidget_BP_GetDesiredFocusTarget Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

class UWidget* UCommonActivatableWidget::GetDesiredFocusTarget() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonActivatableWidget", "GetDesiredFocusTarget");

	Params::CommonActivatableWidget_GetDesiredFocusTarget Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

bool UCommonActivatableWidget::IsActivated() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonActivatableWidget", "IsActivated");

	Params::CommonActivatableWidget_IsActivated Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

void UCommonAnimatedSwitcher::ActivateNextWidget(bool bCanWrap)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonAnimatedSwitcher", "ActivateNextWidget");

	Params::CommonAnimatedSwitcher_ActivateNextWidget Parms{};

	Parms.bCanWrap = bCanWrap;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UCommonAnimatedSwitcher::ActivatePreviousWidget(bool bCanWrap)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonAnimatedSwitcher", "ActivatePreviousWidget");

	Params::CommonAnimatedSwitcher_ActivatePreviousWidget Parms{};

	Parms.bCanWrap = bCanWrap;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UCommonAnimatedSwitcher::SetDisableTransitionAnimation(bool bDisableAnimation)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonAnimatedSwitcher", "SetDisableTransitionAnimation");

	Params::CommonAnimatedSwitcher_SetDisableTransitionAnimation Parms{};

	Parms.bDisableAnimation = bDisableAnimation;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

bool UCommonAnimatedSwitcher::HasWidgets() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonAnimatedSwitcher", "HasWidgets");

	Params::CommonAnimatedSwitcher_HasWidgets Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

bool UCommonAnimatedSwitcher::IsCurrentlySwitching() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonAnimatedSwitcher", "IsCurrentlySwitching");

	Params::CommonAnimatedSwitcher_IsCurrentlySwitching Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

bool UCommonAnimatedSwitcher::IsTransitionPlaying() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonAnimatedSwitcher", "IsTransitionPlaying");

	Params::CommonAnimatedSwitcher_IsTransitionPlaying Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

void UCommonBorderStyle::GetBackgroundBrush(struct FSlateBrush* Brush) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonBorderStyle", "GetBackgroundBrush");

	Params::CommonBorderStyle_GetBackgroundBrush Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	if (Brush != nullptr)
		*Brush = std::move(Parms.Brush);
}

void UCommonButtonBase::BP_OnClicked()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonButtonBase", "BP_OnClicked");

	UObject::ProcessEvent(Func, nullptr);
}

void UCommonButtonBase::BP_OnDeselected()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonButtonBase", "BP_OnDeselected");

	UObject::ProcessEvent(Func, nullptr);
}

void UCommonButtonBase::BP_OnDisabled()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonButtonBase", "BP_OnDisabled");

	UObject::ProcessEvent(Func, nullptr);
}

void UCommonButtonBase::BP_OnDoubleClicked()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonButtonBase", "BP_OnDoubleClicked");

	UObject::ProcessEvent(Func, nullptr);
}

void UCommonButtonBase::BP_OnEnabled()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonButtonBase", "BP_OnEnabled");

	UObject::ProcessEvent(Func, nullptr);
}

void UCommonButtonBase::BP_OnFocusLost()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonButtonBase", "BP_OnFocusLost");

	UObject::ProcessEvent(Func, nullptr);
}

void UCommonButtonBase::BP_OnFocusReceived()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonButtonBase", "BP_OnFocusReceived");

	UObject::ProcessEvent(Func, nullptr);
}

void UCommonButtonBase::BP_OnHovered()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonButtonBase", "BP_OnHovered");

	UObject::ProcessEvent(Func, nullptr);
}

void UCommonButtonBase::BP_OnInputMethodChanged(ECommonInputType CurrentInputType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonButtonBase", "BP_OnInputMethodChanged");

	Params::CommonButtonBase_BP_OnInputMethodChanged Parms{};

	Parms.CurrentInputType = CurrentInputType;

	UObject::ProcessEvent(Func, &Parms);
}

void UCommonButtonBase::BP_OnLockClicked()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonButtonBase", "BP_OnLockClicked");

	UObject::ProcessEvent(Func, nullptr);
}

void UCommonButtonBase::BP_OnLockDoubleClicked()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonButtonBase", "BP_OnLockDoubleClicked");

	UObject::ProcessEvent(Func, nullptr);
}

void UCommonButtonBase::BP_OnLockedChanged(bool bIsLocked)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonButtonBase", "BP_OnLockedChanged");

	Params::CommonButtonBase_BP_OnLockedChanged Parms{};

	Parms.bIsLocked = bIsLocked;

	UObject::ProcessEvent(Func, &Parms);
}

void UCommonButtonBase::BP_OnPressed()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonButtonBase", "BP_OnPressed");

	UObject::ProcessEvent(Func, nullptr);
}

void UCommonButtonBase::BP_OnReleased()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonButtonBase", "BP_OnReleased");

	UObject::ProcessEvent(Func, nullptr);
}

void UCommonButtonBase::BP_OnSelected()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonButtonBase", "BP_OnSelected");

	UObject::ProcessEvent(Func, nullptr);
}

void UCommonButtonBase::BP_OnUnhovered()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonButtonBase", "BP_OnUnhovered");

	UObject::ProcessEvent(Func, nullptr);
}

void UCommonButtonBase::ClearSelection()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonButtonBase", "ClearSelection");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void UCommonButtonBase::DisableButtonWithReason(const class FText& DisabledReason)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonButtonBase", "DisableButtonWithReason");

	Params::CommonButtonBase_DisableButtonWithReason Parms{};

	Parms.DisabledReason = std::move(DisabledReason);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UCommonButtonBase::HandleButtonClicked()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonButtonBase", "HandleButtonClicked");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void UCommonButtonBase::HandleButtonPressed()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonButtonBase", "HandleButtonPressed");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void UCommonButtonBase::HandleButtonReleased()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonButtonBase", "HandleButtonReleased");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void UCommonButtonBase::HandleFocusLost()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonButtonBase", "HandleFocusLost");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void UCommonButtonBase::HandleFocusReceived()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonButtonBase", "HandleFocusReceived");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void UCommonButtonBase::HandleTriggeringActionCommited(bool* bPassThrough)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonButtonBase", "HandleTriggeringActionCommited");

	Params::CommonButtonBase_HandleTriggeringActionCommited Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	if (bPassThrough != nullptr)
		*bPassThrough = Parms.bPassThrough;
}

void UCommonButtonBase::NativeOnActionComplete()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonButtonBase", "NativeOnActionComplete");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void UCommonButtonBase::NativeOnActionProgress(float HeldPercent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonButtonBase", "NativeOnActionProgress");

	Params::CommonButtonBase_NativeOnActionProgress Parms{};

	Parms.HeldPercent = HeldPercent;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UCommonButtonBase::OnActionComplete()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonButtonBase", "OnActionComplete");

	UObject::ProcessEvent(Func, nullptr);
}

void UCommonButtonBase::OnActionProgress(float HeldPercent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonButtonBase", "OnActionProgress");

	Params::CommonButtonBase_OnActionProgress Parms{};

	Parms.HeldPercent = HeldPercent;

	UObject::ProcessEvent(Func, &Parms);
}

void UCommonButtonBase::OnCurrentTextStyleChanged()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonButtonBase", "OnCurrentTextStyleChanged");

	UObject::ProcessEvent(Func, nullptr);
}

void UCommonButtonBase::OnInputMethodChanged(ECommonInputType CurrentInputType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonButtonBase", "OnInputMethodChanged");

	Params::CommonButtonBase_OnInputMethodChanged Parms{};

	Parms.CurrentInputType = CurrentInputType;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UCommonButtonBase::OnTriggeredInputActionChanged(const struct FDataTableRowHandle& NewTriggeredAction)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonButtonBase", "OnTriggeredInputActionChanged");

	Params::CommonButtonBase_OnTriggeredInputActionChanged Parms{};

	Parms.NewTriggeredAction = std::move(NewTriggeredAction);

	UObject::ProcessEvent(Func, &Parms);
}

void UCommonButtonBase::OnTriggeringInputActionChanged(const struct FDataTableRowHandle& NewTriggeredAction)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonButtonBase", "OnTriggeringInputActionChanged");

	Params::CommonButtonBase_OnTriggeringInputActionChanged Parms{};

	Parms.NewTriggeredAction = std::move(NewTriggeredAction);

	UObject::ProcessEvent(Func, &Parms);
}

void UCommonButtonBase::SetClickMethod(EButtonClickMethod InClickMethod)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonButtonBase", "SetClickMethod");

	Params::CommonButtonBase_SetClickMethod Parms{};

	Parms.InClickMethod = InClickMethod;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UCommonButtonBase::SetHideInputAction(bool bInHideInputAction)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonButtonBase", "SetHideInputAction");

	Params::CommonButtonBase_SetHideInputAction Parms{};

	Parms.bInHideInputAction = bInHideInputAction;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UCommonButtonBase::SetHoveredSoundOverride(class USoundBase* sound)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonButtonBase", "SetHoveredSoundOverride");

	Params::CommonButtonBase_SetHoveredSoundOverride Parms{};

	Parms.sound = sound;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UCommonButtonBase::SetInputActionProgressMaterial(const struct FSlateBrush& InProgressMaterialBrush, const class FName& InProgressMaterialParam)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonButtonBase", "SetInputActionProgressMaterial");

	Params::CommonButtonBase_SetInputActionProgressMaterial Parms{};

	Parms.InProgressMaterialBrush = std::move(InProgressMaterialBrush);
	Parms.InProgressMaterialParam = InProgressMaterialParam;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UCommonButtonBase::SetIsFocusable(bool bInIsFocusable)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonButtonBase", "SetIsFocusable");

	Params::CommonButtonBase_SetIsFocusable Parms{};

	Parms.bInIsFocusable = bInIsFocusable;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UCommonButtonBase::SetIsInteractableWhenSelected(bool bInInteractableWhenSelected)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonButtonBase", "SetIsInteractableWhenSelected");

	Params::CommonButtonBase_SetIsInteractableWhenSelected Parms{};

	Parms.bInInteractableWhenSelected = bInInteractableWhenSelected;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UCommonButtonBase::SetIsInteractionEnabled(bool bInIsInteractionEnabled)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonButtonBase", "SetIsInteractionEnabled");

	Params::CommonButtonBase_SetIsInteractionEnabled Parms{};

	Parms.bInIsInteractionEnabled = bInIsInteractionEnabled;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UCommonButtonBase::SetIsLocked(bool bInIsLocked)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonButtonBase", "SetIsLocked");

	Params::CommonButtonBase_SetIsLocked Parms{};

	Parms.bInIsLocked = bInIsLocked;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UCommonButtonBase::SetIsSelectable(bool bInIsSelectable)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonButtonBase", "SetIsSelectable");

	Params::CommonButtonBase_SetIsSelectable Parms{};

	Parms.bInIsSelectable = bInIsSelectable;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UCommonButtonBase::SetIsSelected(bool InSelected, bool bGiveClickFeedback)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonButtonBase", "SetIsSelected");

	Params::CommonButtonBase_SetIsSelected Parms{};

	Parms.InSelected = InSelected;
	Parms.bGiveClickFeedback = bGiveClickFeedback;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UCommonButtonBase::SetIsToggleable(bool bInIsToggleable)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonButtonBase", "SetIsToggleable");

	Params::CommonButtonBase_SetIsToggleable Parms{};

	Parms.bInIsToggleable = bInIsToggleable;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UCommonButtonBase::SetLockedHoveredSoundOverride(class USoundBase* sound)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonButtonBase", "SetLockedHoveredSoundOverride");

	Params::CommonButtonBase_SetLockedHoveredSoundOverride Parms{};

	Parms.sound = sound;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UCommonButtonBase::SetLockedPressedSoundOverride(class USoundBase* sound)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonButtonBase", "SetLockedPressedSoundOverride");

	Params::CommonButtonBase_SetLockedPressedSoundOverride Parms{};

	Parms.sound = sound;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UCommonButtonBase::SetMinDimensions(int32 InMinWidth, int32 InMinHeight)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonButtonBase", "SetMinDimensions");

	Params::CommonButtonBase_SetMinDimensions Parms{};

	Parms.InMinWidth = InMinWidth;
	Parms.InMinHeight = InMinHeight;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UCommonButtonBase::SetPressedSoundOverride(class USoundBase* sound)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonButtonBase", "SetPressedSoundOverride");

	Params::CommonButtonBase_SetPressedSoundOverride Parms{};

	Parms.sound = sound;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UCommonButtonBase::SetPressMethod(EButtonPressMethod InPressMethod)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonButtonBase", "SetPressMethod");

	Params::CommonButtonBase_SetPressMethod Parms{};

	Parms.InPressMethod = InPressMethod;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UCommonButtonBase::SetSelectedHoveredSoundOverride(class USoundBase* sound)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonButtonBase", "SetSelectedHoveredSoundOverride");

	Params::CommonButtonBase_SetSelectedHoveredSoundOverride Parms{};

	Parms.sound = sound;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UCommonButtonBase::SetSelectedInternal(bool bInSelected, bool bAllowSound, bool bBroadcast)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonButtonBase", "SetSelectedInternal");

	Params::CommonButtonBase_SetSelectedInternal Parms{};

	Parms.bInSelected = bInSelected;
	Parms.bAllowSound = bAllowSound;
	Parms.bBroadcast = bBroadcast;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UCommonButtonBase::SetSelectedPressedSoundOverride(class USoundBase* sound)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonButtonBase", "SetSelectedPressedSoundOverride");

	Params::CommonButtonBase_SetSelectedPressedSoundOverride Parms{};

	Parms.sound = sound;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UCommonButtonBase::SetShouldSelectUponReceivingFocus(bool bInShouldSelectUponReceivingFocus)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonButtonBase", "SetShouldSelectUponReceivingFocus");

	Params::CommonButtonBase_SetShouldSelectUponReceivingFocus Parms{};

	Parms.bInShouldSelectUponReceivingFocus = bInShouldSelectUponReceivingFocus;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UCommonButtonBase::SetShouldUseFallbackDefaultInputAction(bool bInShouldUseFallbackDefaultInputAction)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonButtonBase", "SetShouldUseFallbackDefaultInputAction");

	Params::CommonButtonBase_SetShouldUseFallbackDefaultInputAction Parms{};

	Parms.bInShouldUseFallbackDefaultInputAction = bInShouldUseFallbackDefaultInputAction;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UCommonButtonBase::SetStyle(TSubclassOf<class UCommonButtonStyle> InStyle)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonButtonBase", "SetStyle");

	Params::CommonButtonBase_SetStyle Parms{};

	Parms.InStyle = InStyle;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UCommonButtonBase::SetTouchMethod(EButtonTouchMethod InTouchMethod)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonButtonBase", "SetTouchMethod");

	Params::CommonButtonBase_SetTouchMethod Parms{};

	Parms.InTouchMethod = InTouchMethod;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UCommonButtonBase::SetTriggeredInputAction(const struct FDataTableRowHandle& InputActionRow)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonButtonBase", "SetTriggeredInputAction");

	Params::CommonButtonBase_SetTriggeredInputAction Parms{};

	Parms.InputActionRow = std::move(InputActionRow);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UCommonButtonBase::SetTriggeringInputAction(const struct FDataTableRowHandle& InputActionRow)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonButtonBase", "SetTriggeringInputAction");

	Params::CommonButtonBase_SetTriggeringInputAction Parms{};

	Parms.InputActionRow = std::move(InputActionRow);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UCommonButtonBase::StopDoubleClickPropagation()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonButtonBase", "StopDoubleClickPropagation");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void UCommonButtonBase::GetCurrentButtonPadding(struct FMargin* OutButtonPadding) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonButtonBase", "GetCurrentButtonPadding");

	Params::CommonButtonBase_GetCurrentButtonPadding Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	if (OutButtonPadding != nullptr)
		*OutButtonPadding = std::move(Parms.OutButtonPadding);
}

void UCommonButtonBase::GetCurrentCustomPadding(struct FMargin* OutCustomPadding) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonButtonBase", "GetCurrentCustomPadding");

	Params::CommonButtonBase_GetCurrentCustomPadding Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	if (OutCustomPadding != nullptr)
		*OutCustomPadding = std::move(Parms.OutCustomPadding);
}

class UCommonTextStyle* UCommonButtonBase::GetCurrentTextStyle() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonButtonBase", "GetCurrentTextStyle");

	Params::CommonButtonBase_GetCurrentTextStyle Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

TSubclassOf<class UCommonTextStyle> UCommonButtonBase::GetCurrentTextStyleClass() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonButtonBase", "GetCurrentTextStyleClass");

	Params::CommonButtonBase_GetCurrentTextStyleClass Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

bool UCommonButtonBase::GetInputAction(struct FDataTableRowHandle* InputActionRow) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonButtonBase", "GetInputAction");

	Params::CommonButtonBase_GetInputAction Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	if (InputActionRow != nullptr)
		*InputActionRow = std::move(Parms.InputActionRow);

	return Parms.ReturnValue;
}

bool UCommonButtonBase::GetIsFocusable() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonButtonBase", "GetIsFocusable");

	Params::CommonButtonBase_GetIsFocusable Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

bool UCommonButtonBase::GetLocked() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonButtonBase", "GetLocked");

	Params::CommonButtonBase_GetLocked Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

bool UCommonButtonBase::GetSelected() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonButtonBase", "GetSelected");

	Params::CommonButtonBase_GetSelected Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

bool UCommonButtonBase::GetShouldSelectUponReceivingFocus() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonButtonBase", "GetShouldSelectUponReceivingFocus");

	Params::CommonButtonBase_GetShouldSelectUponReceivingFocus Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

class UMaterialInstanceDynamic* UCommonButtonBase::GetSingleMaterialStyleMID() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonButtonBase", "GetSingleMaterialStyleMID");

	Params::CommonButtonBase_GetSingleMaterialStyleMID Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

class UCommonButtonStyle* UCommonButtonBase::GetStyle() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonButtonBase", "GetStyle");

	Params::CommonButtonBase_GetStyle Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

bool UCommonButtonBase::IsInteractionEnabled() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonButtonBase", "IsInteractionEnabled");

	Params::CommonButtonBase_IsInteractionEnabled Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

bool UCommonButtonBase::IsPressed() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonButtonBase", "IsPressed");

	Params::CommonButtonBase_IsPressed Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

void UCommonRotator::BP_OnOptionSelected(int32 Index_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonRotator", "BP_OnOptionSelected");

	Params::CommonRotator_BP_OnOptionSelected Parms{};

	Parms.Index_0 = Index_0;

	UObject::ProcessEvent(Func, &Parms);
}

void UCommonRotator::BP_OnOptionsPopulated(int32 Count)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonRotator", "BP_OnOptionsPopulated");

	Params::CommonRotator_BP_OnOptionsPopulated Parms{};

	Parms.Count = Count;

	UObject::ProcessEvent(Func, &Parms);
}

void UCommonRotator::PopulateTextLabels(const TArray<class FText>& Labels)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonRotator", "PopulateTextLabels");

	Params::CommonRotator_PopulateTextLabels Parms{};

	Parms.Labels = std::move(Labels);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UCommonRotator::SetSelectedItem(int32 InValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonRotator", "SetSelectedItem");

	Params::CommonRotator_SetSelectedItem Parms{};

	Parms.InValue = InValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UCommonRotator::ShiftTextLeft()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonRotator", "ShiftTextLeft");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void UCommonRotator::ShiftTextRight()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonRotator", "ShiftTextRight");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

int32 UCommonRotator::GetSelectedIndex() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonRotator", "GetSelectedIndex");

	Params::CommonRotator_GetSelectedIndex Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

class FText UCommonRotator::GetSelectedText() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonRotator", "GetSelectedText");

	Params::CommonRotator_GetSelectedText Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

void UCommonButtonStyle::GetButtonPadding(struct FMargin* OutButtonPadding) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonButtonStyle", "GetButtonPadding");

	Params::CommonButtonStyle_GetButtonPadding Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	if (OutButtonPadding != nullptr)
		*OutButtonPadding = std::move(Parms.OutButtonPadding);
}

void UCommonButtonStyle::GetCustomPadding(struct FMargin* OutCustomPadding) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonButtonStyle", "GetCustomPadding");

	Params::CommonButtonStyle_GetCustomPadding Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	if (OutCustomPadding != nullptr)
		*OutCustomPadding = std::move(Parms.OutCustomPadding);
}

void UCommonButtonStyle::GetDisabledBrush(struct FSlateBrush* Brush) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonButtonStyle", "GetDisabledBrush");

	Params::CommonButtonStyle_GetDisabledBrush Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	if (Brush != nullptr)
		*Brush = std::move(Parms.Brush);
}

class UCommonTextStyle* UCommonButtonStyle::GetDisabledTextStyle() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonButtonStyle", "GetDisabledTextStyle");

	Params::CommonButtonStyle_GetDisabledTextStyle Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

void UCommonButtonStyle::GetMaterialBrush(struct FSlateBrush* Brush) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonButtonStyle", "GetMaterialBrush");

	Params::CommonButtonStyle_GetMaterialBrush Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	if (Brush != nullptr)
		*Brush = std::move(Parms.Brush);
}

void UCommonButtonStyle::GetNormalBaseBrush(struct FSlateBrush* Brush) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonButtonStyle", "GetNormalBaseBrush");

	Params::CommonButtonStyle_GetNormalBaseBrush Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	if (Brush != nullptr)
		*Brush = std::move(Parms.Brush);
}

void UCommonButtonStyle::GetNormalHoveredBrush(struct FSlateBrush* Brush) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonButtonStyle", "GetNormalHoveredBrush");

	Params::CommonButtonStyle_GetNormalHoveredBrush Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	if (Brush != nullptr)
		*Brush = std::move(Parms.Brush);
}

class UCommonTextStyle* UCommonButtonStyle::GetNormalHoveredTextStyle() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonButtonStyle", "GetNormalHoveredTextStyle");

	Params::CommonButtonStyle_GetNormalHoveredTextStyle Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

void UCommonButtonStyle::GetNormalPressedBrush(struct FSlateBrush* Brush) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonButtonStyle", "GetNormalPressedBrush");

	Params::CommonButtonStyle_GetNormalPressedBrush Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	if (Brush != nullptr)
		*Brush = std::move(Parms.Brush);
}

class UCommonTextStyle* UCommonButtonStyle::GetNormalTextStyle() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonButtonStyle", "GetNormalTextStyle");

	Params::CommonButtonStyle_GetNormalTextStyle Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

void UCommonButtonStyle::GetSelectedBaseBrush(struct FSlateBrush* Brush) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonButtonStyle", "GetSelectedBaseBrush");

	Params::CommonButtonStyle_GetSelectedBaseBrush Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	if (Brush != nullptr)
		*Brush = std::move(Parms.Brush);
}

void UCommonButtonStyle::GetSelectedHoveredBrush(struct FSlateBrush* Brush) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonButtonStyle", "GetSelectedHoveredBrush");

	Params::CommonButtonStyle_GetSelectedHoveredBrush Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	if (Brush != nullptr)
		*Brush = std::move(Parms.Brush);
}

class UCommonTextStyle* UCommonButtonStyle::GetSelectedHoveredTextStyle() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonButtonStyle", "GetSelectedHoveredTextStyle");

	Params::CommonButtonStyle_GetSelectedHoveredTextStyle Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

void UCommonButtonStyle::GetSelectedPressedBrush(struct FSlateBrush* Brush) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonButtonStyle", "GetSelectedPressedBrush");

	Params::CommonButtonStyle_GetSelectedPressedBrush Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	if (Brush != nullptr)
		*Brush = std::move(Parms.Brush);
}

class UCommonTextStyle* UCommonButtonStyle::GetSelectedTextStyle() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonButtonStyle", "GetSelectedTextStyle");

	Params::CommonButtonStyle_GetSelectedTextStyle Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

const struct FMargin UCommonTextBlock::GetMargin()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonTextBlock", "GetMargin");

	Params::CommonTextBlock_GetMargin Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

void UCommonTextBlock::ResetScrollState()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonTextBlock", "ResetScrollState");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void UCommonTextBlock::SetLineHeightPercentage(float InLineHeightPercentage)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonTextBlock", "SetLineHeightPercentage");

	Params::CommonTextBlock_SetLineHeightPercentage Parms{};

	Parms.InLineHeightPercentage = InLineHeightPercentage;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UCommonTextBlock::SetMargin(const struct FMargin& InMargin)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonTextBlock", "SetMargin");

	Params::CommonTextBlock_SetMargin Parms{};

	Parms.InMargin = std::move(InMargin);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UCommonTextBlock::SetMobileFontSizeMultiplier(float InMobileFontSizeMultiplier)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonTextBlock", "SetMobileFontSizeMultiplier");

	Params::CommonTextBlock_SetMobileFontSizeMultiplier Parms{};

	Parms.InMobileFontSizeMultiplier = InMobileFontSizeMultiplier;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UCommonTextBlock::SetScrollingEnabled(bool bInIsScrollingEnabled)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonTextBlock", "SetScrollingEnabled");

	Params::CommonTextBlock_SetScrollingEnabled Parms{};

	Parms.bInIsScrollingEnabled = bInIsScrollingEnabled;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UCommonTextBlock::SetStyle(TSubclassOf<class UCommonTextStyle> InStyle)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonTextBlock", "SetStyle");

	Params::CommonTextBlock_SetStyle Parms{};

	Parms.InStyle = InStyle;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UCommonTextBlock::SetTextCase(bool bUseAllCaps)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonTextBlock", "SetTextCase");

	Params::CommonTextBlock_SetTextCase Parms{};

	Parms.bUseAllCaps = bUseAllCaps;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UCommonTextBlock::SetWrapTextWidth(int32 InWrapTextAt)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonTextBlock", "SetWrapTextWidth");

	Params::CommonTextBlock_SetWrapTextWidth Parms{};

	Parms.InWrapTextAt = InWrapTextAt;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

float UCommonTextBlock::GetMobileFontSizeMultiplier() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonTextBlock", "GetMobileFontSizeMultiplier");

	Params::CommonTextBlock_GetMobileFontSizeMultiplier Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

void UCommonDateTimeTextBlock::SetCountDownCompletionText(const class FText& InCompletionText)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonDateTimeTextBlock", "SetCountDownCompletionText");

	Params::CommonDateTimeTextBlock_SetCountDownCompletionText Parms{};

	Parms.InCompletionText = std::move(InCompletionText);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UCommonDateTimeTextBlock::SetDateTimeValue(const struct FDateTime& InDateTime, bool bShowAsCountdown, float InRefreshDelay)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonDateTimeTextBlock", "SetDateTimeValue");

	Params::CommonDateTimeTextBlock_SetDateTimeValue Parms{};

	Parms.InDateTime = std::move(InDateTime);
	Parms.bShowAsCountdown = bShowAsCountdown;
	Parms.InRefreshDelay = InRefreshDelay;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UCommonDateTimeTextBlock::SetTimespanValue(const struct FTimespan& InTimespan)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonDateTimeTextBlock", "SetTimespanValue");

	Params::CommonDateTimeTextBlock_SetTimespanValue Parms{};

	Parms.InTimespan = std::move(InTimespan);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

struct FDateTime UCommonDateTimeTextBlock::GetDateTime() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonDateTimeTextBlock", "GetDateTime");

	Params::CommonDateTimeTextBlock_GetDateTime Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

void UCommonLazyImage::SetBrushFromLazyDisplayAsset(const TSoftObjectPtr<class UObject>& LazyObject, bool bMatchTextureSize)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonLazyImage", "SetBrushFromLazyDisplayAsset");

	Params::CommonLazyImage_SetBrushFromLazyDisplayAsset Parms{};

	Parms.LazyObject = LazyObject;
	Parms.bMatchTextureSize = bMatchTextureSize;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UCommonLazyImage::SetBrushFromLazyMaterial(const TSoftObjectPtr<class UMaterialInterface>& LazyMaterial)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonLazyImage", "SetBrushFromLazyMaterial");

	Params::CommonLazyImage_SetBrushFromLazyMaterial Parms{};

	Parms.LazyMaterial = LazyMaterial;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UCommonLazyImage::SetBrushFromLazyTexture(const TSoftObjectPtr<class UTexture2D>& LazyTexture, bool bMatchSize)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonLazyImage", "SetBrushFromLazyTexture");

	Params::CommonLazyImage_SetBrushFromLazyTexture Parms{};

	Parms.LazyTexture = LazyTexture;
	Parms.bMatchSize = bMatchSize;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UCommonLazyImage::SetMaterialTextureParamName(class FName TextureParamName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonLazyImage", "SetMaterialTextureParamName");

	Params::CommonLazyImage_SetMaterialTextureParamName Parms{};

	Parms.TextureParamName = TextureParamName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

bool UCommonLazyImage::IsLoading() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonLazyImage", "IsLoading");

	Params::CommonLazyImage_IsLoading Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

void UCommonLazyWidget::SetLazyContent(const TSoftClassPtr<class UClass> SoftWidget)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonLazyWidget", "SetLazyContent");

	Params::CommonLazyWidget_SetLazyContent Parms{};

	Parms.SoftWidget = SoftWidget;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

class UUserWidget* UCommonLazyWidget::GetContent() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonLazyWidget", "GetContent");

	Params::CommonLazyWidget_GetContent Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

bool UCommonLazyWidget::IsLoading() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonLazyWidget", "IsLoading");

	Params::CommonLazyWidget_IsLoading Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

void UCommonListView::SetEntrySpacing(float InEntrySpacing)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonListView", "SetEntrySpacing");

	Params::CommonListView_SetEntrySpacing Parms{};

	Parms.InEntrySpacing = InEntrySpacing;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void ULoadGuardSlot::SetHorizontalAlignment(EHorizontalAlignment InHorizontalAlignment)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LoadGuardSlot", "SetHorizontalAlignment");

	Params::LoadGuardSlot_SetHorizontalAlignment Parms{};

	Parms.InHorizontalAlignment = InHorizontalAlignment;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void ULoadGuardSlot::SetPadding(const struct FMargin& InPadding)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LoadGuardSlot", "SetPadding");

	Params::LoadGuardSlot_SetPadding Parms{};

	Parms.InPadding = std::move(InPadding);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void ULoadGuardSlot::SetVerticalAlignment(EVerticalAlignment InVerticalAlignment)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LoadGuardSlot", "SetVerticalAlignment");

	Params::LoadGuardSlot_SetVerticalAlignment Parms{};

	Parms.InVerticalAlignment = InVerticalAlignment;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UCommonLoadGuard::BP_GuardAndLoadAsset(const TSoftObjectPtr<class UObject>& InLazyAsset, const TDelegate<void(class UObject* Object)>& OnAssetLoaded)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonLoadGuard", "BP_GuardAndLoadAsset");

	Params::CommonLoadGuard_BP_GuardAndLoadAsset Parms{};

	Parms.InLazyAsset = InLazyAsset;
	Parms.OnAssetLoaded = OnAssetLoaded;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UCommonLoadGuard::SetIsLoading(bool bInIsLoading)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonLoadGuard", "SetIsLoading");

	Params::CommonLoadGuard_SetIsLoading Parms{};

	Parms.bInIsLoading = bInIsLoading;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UCommonLoadGuard::SetLoadingText(const class FText& InLoadingText)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonLoadGuard", "SetLoadingText");

	Params::CommonLoadGuard_SetLoadingText Parms{};

	Parms.InLoadingText = std::move(InLoadingText);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

bool UCommonLoadGuard::IsLoading() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonLoadGuard", "IsLoading");

	Params::CommonLoadGuard_IsLoading Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

void UCommonNumericTextBlock::InterpolateToValue(const float TargetValue, float MaximumInterpolationDuration, float MinimumChangeRate, float OutroOffset)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonNumericTextBlock", "InterpolateToValue");

	Params::CommonNumericTextBlock_InterpolateToValue Parms{};

	Parms.TargetValue = TargetValue;
	Parms.MaximumInterpolationDuration = MaximumInterpolationDuration;
	Parms.MinimumChangeRate = MinimumChangeRate;
	Parms.OutroOffset = OutroOffset;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UCommonNumericTextBlock::SetCurrentValue(const float NewValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonNumericTextBlock", "SetCurrentValue");

	Params::CommonNumericTextBlock_SetCurrentValue Parms{};

	Parms.NewValue = NewValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UCommonNumericTextBlock::SetNumericType(ECommonNumericType InNumericType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonNumericTextBlock", "SetNumericType");

	Params::CommonNumericTextBlock_SetNumericType Parms{};

	Parms.InNumericType = InNumericType;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

float UCommonNumericTextBlock::GetTargetValue() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonNumericTextBlock", "GetTargetValue");

	Params::CommonNumericTextBlock_GetTargetValue Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

bool UCommonNumericTextBlock::IsInterpolatingNumericValue() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonNumericTextBlock", "IsInterpolatingNumericValue");

	Params::CommonNumericTextBlock_IsInterpolatingNumericValue Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

void ICommonPoolableWidgetInterface::OnAcquireFromPool()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonPoolableWidgetInterface", "OnAcquireFromPool");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void ICommonPoolableWidgetInterface::OnReleaseToPool()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonPoolableWidgetInterface", "OnReleaseToPool");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void UCommonRichTextBlock::SetScrollingEnabled(bool bInIsScrollingEnabled)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonRichTextBlock", "SetScrollingEnabled");

	Params::CommonRichTextBlock_SetScrollingEnabled Parms{};

	Parms.bInIsScrollingEnabled = bInIsScrollingEnabled;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UCommonTabListWidgetBase::DisableTabWithReason(class FName TabNameID, const class FText& Reason)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonTabListWidgetBase", "DisableTabWithReason");

	Params::CommonTabListWidgetBase_DisableTabWithReason Parms{};

	Parms.TabNameID = TabNameID;
	Parms.Reason = std::move(Reason);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UCommonTabListWidgetBase::HandleNextTabInputAction(bool* bPassThrough)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonTabListWidgetBase", "HandleNextTabInputAction");

	Params::CommonTabListWidgetBase_HandleNextTabInputAction Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	if (bPassThrough != nullptr)
		*bPassThrough = Parms.bPassThrough;
}

void UCommonTabListWidgetBase::HandlePostLinkedSwitcherChanged_BP()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonTabListWidgetBase", "HandlePostLinkedSwitcherChanged_BP");

	UObject::ProcessEvent(Func, nullptr);
}

void UCommonTabListWidgetBase::HandlePreLinkedSwitcherChanged_BP()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonTabListWidgetBase", "HandlePreLinkedSwitcherChanged_BP");

	UObject::ProcessEvent(Func, nullptr);
}

void UCommonTabListWidgetBase::HandlePreviousTabInputAction(bool* bPassThrough)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonTabListWidgetBase", "HandlePreviousTabInputAction");

	Params::CommonTabListWidgetBase_HandlePreviousTabInputAction Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	if (bPassThrough != nullptr)
		*bPassThrough = Parms.bPassThrough;
}

void UCommonTabListWidgetBase::HandleTabButtonSelected(class UCommonButtonBase* SelectedTabButton, int32 ButtonIndex)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonTabListWidgetBase", "HandleTabButtonSelected");

	Params::CommonTabListWidgetBase_HandleTabButtonSelected Parms{};

	Parms.SelectedTabButton = SelectedTabButton;
	Parms.ButtonIndex = ButtonIndex;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UCommonTabListWidgetBase::HandleTabCreation(class FName TabNameID, class UCommonButtonBase* TabButton)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonTabListWidgetBase", "HandleTabCreation");

	Params::CommonTabListWidgetBase_HandleTabCreation Parms{};

	Parms.TabNameID = TabNameID;
	Parms.TabButton = TabButton;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UCommonTabListWidgetBase::HandleTabRemoval(class FName TabNameID, class UCommonButtonBase* TabButton)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonTabListWidgetBase", "HandleTabRemoval");

	Params::CommonTabListWidgetBase_HandleTabRemoval Parms{};

	Parms.TabNameID = TabNameID;
	Parms.TabButton = TabButton;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

bool UCommonTabListWidgetBase::RegisterTab(class FName TabNameID, TSubclassOf<class UCommonButtonBase> ButtonWidgetType, class UWidget* ContentWidget, const int32 TabIndex)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonTabListWidgetBase", "RegisterTab");

	Params::CommonTabListWidgetBase_RegisterTab Parms{};

	Parms.TabNameID = TabNameID;
	Parms.ButtonWidgetType = ButtonWidgetType;
	Parms.ContentWidget = ContentWidget;
	Parms.TabIndex = TabIndex;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

void UCommonTabListWidgetBase::RemoveAllTabs()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonTabListWidgetBase", "RemoveAllTabs");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

bool UCommonTabListWidgetBase::RemoveTab(class FName TabNameID)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonTabListWidgetBase", "RemoveTab");

	Params::CommonTabListWidgetBase_RemoveTab Parms{};

	Parms.TabNameID = TabNameID;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

bool UCommonTabListWidgetBase::SelectTabByID(class FName TabNameID, bool bSuppressClickFeedback)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonTabListWidgetBase", "SelectTabByID");

	Params::CommonTabListWidgetBase_SelectTabByID Parms{};

	Parms.TabNameID = TabNameID;
	Parms.bSuppressClickFeedback = bSuppressClickFeedback;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

void UCommonTabListWidgetBase::SetLinkedSwitcher(class UCommonAnimatedSwitcher* CommonSwitcher)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonTabListWidgetBase", "SetLinkedSwitcher");

	Params::CommonTabListWidgetBase_SetLinkedSwitcher Parms{};

	Parms.CommonSwitcher = CommonSwitcher;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UCommonTabListWidgetBase::SetListeningForInput(bool bShouldListen)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonTabListWidgetBase", "SetListeningForInput");

	Params::CommonTabListWidgetBase_SetListeningForInput Parms{};

	Parms.bShouldListen = bShouldListen;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UCommonTabListWidgetBase::SetTabEnabled(class FName TabNameID, bool bEnable)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonTabListWidgetBase", "SetTabEnabled");

	Params::CommonTabListWidgetBase_SetTabEnabled Parms{};

	Parms.TabNameID = TabNameID;
	Parms.bEnable = bEnable;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UCommonTabListWidgetBase::SetTabInteractionEnabled(class FName TabNameID, bool bEnable)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonTabListWidgetBase", "SetTabInteractionEnabled");

	Params::CommonTabListWidgetBase_SetTabInteractionEnabled Parms{};

	Parms.TabNameID = TabNameID;
	Parms.bEnable = bEnable;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UCommonTabListWidgetBase::SetTabVisibility(class FName TabNameID, ESlateVisibility NewVisibility)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonTabListWidgetBase", "SetTabVisibility");

	Params::CommonTabListWidgetBase_SetTabVisibility Parms{};

	Parms.TabNameID = TabNameID;
	Parms.NewVisibility = NewVisibility;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

class FName UCommonTabListWidgetBase::GetActiveTab() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonTabListWidgetBase", "GetActiveTab");

	Params::CommonTabListWidgetBase_GetActiveTab Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

class UCommonAnimatedSwitcher* UCommonTabListWidgetBase::GetLinkedSwitcher() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonTabListWidgetBase", "GetLinkedSwitcher");

	Params::CommonTabListWidgetBase_GetLinkedSwitcher Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

class FName UCommonTabListWidgetBase::GetSelectedTabId() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonTabListWidgetBase", "GetSelectedTabId");

	Params::CommonTabListWidgetBase_GetSelectedTabId Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

class UCommonButtonBase* UCommonTabListWidgetBase::GetTabButtonBaseByID(class FName TabNameID) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonTabListWidgetBase", "GetTabButtonBaseByID");

	Params::CommonTabListWidgetBase_GetTabButtonBaseByID Parms{};

	Parms.TabNameID = TabNameID;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

int32 UCommonTabListWidgetBase::GetTabCount() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonTabListWidgetBase", "GetTabCount");

	Params::CommonTabListWidgetBase_GetTabCount Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

class FName UCommonTabListWidgetBase::GetTabIdAtIndex(int32 Index_0) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonTabListWidgetBase", "GetTabIdAtIndex");

	Params::CommonTabListWidgetBase_GetTabIdAtIndex Parms{};

	Parms.Index_0 = Index_0;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

void UCommonTextStyle::GetColor(struct FLinearColor* OutColor) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonTextStyle", "GetColor");

	Params::CommonTextStyle_GetColor Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	if (OutColor != nullptr)
		*OutColor = std::move(Parms.OutColor);
}

void UCommonTextStyle::GetFont(struct FSlateFontInfo* OutFont) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonTextStyle", "GetFont");

	Params::CommonTextStyle_GetFont Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	if (OutFont != nullptr)
		*OutFont = std::move(Parms.OutFont);
}

float UCommonTextStyle::GetLineHeightPercentage() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonTextStyle", "GetLineHeightPercentage");

	Params::CommonTextStyle_GetLineHeightPercentage Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

void UCommonTextStyle::GetMargin(struct FMargin* OutMargin) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonTextStyle", "GetMargin");

	Params::CommonTextStyle_GetMargin Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	if (OutMargin != nullptr)
		*OutMargin = std::move(Parms.OutMargin);
}

void UCommonTextStyle::GetShadowColor(struct FLinearColor* OutColor) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonTextStyle", "GetShadowColor");

	Params::CommonTextStyle_GetShadowColor Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	if (OutColor != nullptr)
		*OutColor = std::move(Parms.OutColor);
}

void UCommonTextStyle::GetShadowOffset(struct FVector2D* OutShadowOffset) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonTextStyle", "GetShadowOffset");

	Params::CommonTextStyle_GetShadowOffset Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	if (OutShadowOffset != nullptr)
		*OutShadowOffset = std::move(Parms.OutShadowOffset);
}

void UCommonTextStyle::GetStrikeBrush(struct FSlateBrush* OutStrikeBrush) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonTextStyle", "GetStrikeBrush");

	Params::CommonTextStyle_GetStrikeBrush Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	if (OutStrikeBrush != nullptr)
		*OutStrikeBrush = std::move(Parms.OutStrikeBrush);
}

class UWidget* UCommonUILibrary::FindParentWidgetOfType(class UWidget* StartingWidget, TSubclassOf<class UWidget> Type)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("CommonUILibrary", "FindParentWidgetOfType");

	Params::CommonUILibrary_FindParentWidgetOfType Parms{};

	Parms.StartingWidget = StartingWidget;
	Parms.Type = Type;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

struct FSlateBrush UCommonUISubsystemBase::GetInputActionButtonIcon(const struct FDataTableRowHandle& InputActionRowHandle, ECommonInputType InputType, const class FName& GamepadName) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonUISubsystemBase", "GetInputActionButtonIcon");

	Params::CommonUISubsystemBase_GetInputActionButtonIcon Parms{};

	Parms.InputActionRowHandle = std::move(InputActionRowHandle);
	Parms.InputType = InputType;
	Parms.GamepadName = GamepadName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

void UCommonVisibilitySwitcher::ActivateVisibleSlot()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonVisibilitySwitcher", "ActivateVisibleSlot");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void UCommonVisibilitySwitcher::DeactivateVisibleSlot()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonVisibilitySwitcher", "DeactivateVisibleSlot");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void UCommonVisibilitySwitcher::DecrementActiveWidgetIndex(bool bAllowWrapping)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonVisibilitySwitcher", "DecrementActiveWidgetIndex");

	Params::CommonVisibilitySwitcher_DecrementActiveWidgetIndex Parms{};

	Parms.bAllowWrapping = bAllowWrapping;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UCommonVisibilitySwitcher::IncrementActiveWidgetIndex(bool bAllowWrapping)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonVisibilitySwitcher", "IncrementActiveWidgetIndex");

	Params::CommonVisibilitySwitcher_IncrementActiveWidgetIndex Parms{};

	Parms.bAllowWrapping = bAllowWrapping;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UCommonVisibilitySwitcher::SetActiveWidget(const class UWidget* Widget)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonVisibilitySwitcher", "SetActiveWidget");

	Params::CommonVisibilitySwitcher_SetActiveWidget Parms{};

	Parms.Widget = Widget;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UCommonVisibilitySwitcher::SetActiveWidgetIndex(int32 Index_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonVisibilitySwitcher", "SetActiveWidgetIndex");

	Params::CommonVisibilitySwitcher_SetActiveWidgetIndex Parms{};

	Parms.Index_0 = Index_0;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

class UWidget* UCommonVisibilitySwitcher::GetActiveWidget() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonVisibilitySwitcher", "GetActiveWidget");

	Params::CommonVisibilitySwitcher_GetActiveWidget Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

int32 UCommonVisibilitySwitcher::GetActiveWidgetIndex() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonVisibilitySwitcher", "GetActiveWidgetIndex");

	Params::CommonVisibilitySwitcher_GetActiveWidgetIndex Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

void UCommonWidgetCarousel::BeginAutoScrolling(float ScrollInterval)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonWidgetCarousel", "BeginAutoScrolling");

	Params::CommonWidgetCarousel_BeginAutoScrolling Parms{};

	Parms.ScrollInterval = ScrollInterval;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UCommonWidgetCarousel::EndAutoScrolling()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonWidgetCarousel", "EndAutoScrolling");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void UCommonWidgetCarousel::NextPage()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonWidgetCarousel", "NextPage");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void UCommonWidgetCarousel::PreviousPage()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonWidgetCarousel", "PreviousPage");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void UCommonWidgetCarousel::SetActiveWidget(class UWidget* Widget)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonWidgetCarousel", "SetActiveWidget");

	Params::CommonWidgetCarousel_SetActiveWidget Parms{};

	Parms.Widget = Widget;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UCommonWidgetCarousel::SetActiveWidgetIndex(int32 Index_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonWidgetCarousel", "SetActiveWidgetIndex");

	Params::CommonWidgetCarousel_SetActiveWidgetIndex Parms{};

	Parms.Index_0 = Index_0;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

int32 UCommonWidgetCarousel::GetActiveWidgetIndex() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonWidgetCarousel", "GetActiveWidgetIndex");

	Params::CommonWidgetCarousel_GetActiveWidgetIndex Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

class UWidget* UCommonWidgetCarousel::GetWidgetAtIndex(int32 Index_0) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonWidgetCarousel", "GetWidgetAtIndex");

	Params::CommonWidgetCarousel_GetWidgetAtIndex Parms{};

	Parms.Index_0 = Index_0;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

void UCommonButtonGroupBase::DeselectAll()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonButtonGroupBase", "DeselectAll");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void UCommonButtonGroupBase::OnButtonBaseHovered(class UCommonButtonBase* BaseButton)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonButtonGroupBase", "OnButtonBaseHovered");

	Params::CommonButtonGroupBase_OnButtonBaseHovered Parms{};

	Parms.BaseButton = BaseButton;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UCommonButtonGroupBase::OnButtonBaseUnhovered(class UCommonButtonBase* BaseButton)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonButtonGroupBase", "OnButtonBaseUnhovered");

	Params::CommonButtonGroupBase_OnButtonBaseUnhovered Parms{};

	Parms.BaseButton = BaseButton;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UCommonButtonGroupBase::OnHandleButtonBaseClicked(class UCommonButtonBase* BaseButton)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonButtonGroupBase", "OnHandleButtonBaseClicked");

	Params::CommonButtonGroupBase_OnHandleButtonBaseClicked Parms{};

	Parms.BaseButton = BaseButton;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UCommonButtonGroupBase::OnHandleButtonBaseDoubleClicked(class UCommonButtonBase* BaseButton)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonButtonGroupBase", "OnHandleButtonBaseDoubleClicked");

	Params::CommonButtonGroupBase_OnHandleButtonBaseDoubleClicked Parms{};

	Parms.BaseButton = BaseButton;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UCommonButtonGroupBase::OnSelectionStateChangedBase(class UCommonButtonBase* BaseButton, bool bIsSelected)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonButtonGroupBase", "OnSelectionStateChangedBase");

	Params::CommonButtonGroupBase_OnSelectionStateChangedBase Parms{};

	Parms.BaseButton = BaseButton;
	Parms.bIsSelected = bIsSelected;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UCommonButtonGroupBase::SelectButtonAtIndex(int32 ButtonIndex, const bool bAllowSound)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonButtonGroupBase", "SelectButtonAtIndex");

	Params::CommonButtonGroupBase_SelectButtonAtIndex Parms{};

	Parms.ButtonIndex = ButtonIndex;
	Parms.bAllowSound = bAllowSound;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UCommonButtonGroupBase::SelectNextButton(bool bAllowWrap)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonButtonGroupBase", "SelectNextButton");

	Params::CommonButtonGroupBase_SelectNextButton Parms{};

	Parms.bAllowWrap = bAllowWrap;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UCommonButtonGroupBase::SelectPreviousButton(bool bAllowWrap)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonButtonGroupBase", "SelectPreviousButton");

	Params::CommonButtonGroupBase_SelectPreviousButton Parms{};

	Parms.bAllowWrap = bAllowWrap;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UCommonButtonGroupBase::SetSelectionRequired(bool bRequireSelection)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonButtonGroupBase", "SetSelectionRequired");

	Params::CommonButtonGroupBase_SetSelectionRequired Parms{};

	Parms.bRequireSelection = bRequireSelection;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

int32 UCommonButtonGroupBase::FindButtonIndex(const class UCommonButtonBase* ButtonToFind) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonButtonGroupBase", "FindButtonIndex");

	Params::CommonButtonGroupBase_FindButtonIndex Parms{};

	Parms.ButtonToFind = ButtonToFind;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

class UCommonButtonBase* UCommonButtonGroupBase::GetButtonBaseAtIndex(int32 Index_0) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonButtonGroupBase", "GetButtonBaseAtIndex");

	Params::CommonButtonGroupBase_GetButtonBaseAtIndex Parms{};

	Parms.Index_0 = Index_0;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

int32 UCommonButtonGroupBase::GetButtonCount() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonButtonGroupBase", "GetButtonCount");

	Params::CommonButtonGroupBase_GetButtonCount Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

int32 UCommonButtonGroupBase::GetHoveredButtonIndex() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonButtonGroupBase", "GetHoveredButtonIndex");

	Params::CommonButtonGroupBase_GetHoveredButtonIndex Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

class UCommonButtonBase* UCommonButtonGroupBase::GetSelectedButtonBase() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonButtonGroupBase", "GetSelectedButtonBase");

	Params::CommonButtonGroupBase_GetSelectedButtonBase Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

int32 UCommonButtonGroupBase::GetSelectedButtonIndex() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonButtonGroupBase", "GetSelectedButtonIndex");

	Params::CommonButtonGroupBase_GetSelectedButtonIndex Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

bool UCommonButtonGroupBase::HasAnyButtons() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonButtonGroupBase", "HasAnyButtons");

	Params::CommonButtonGroupBase_HasAnyButtons Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

void UCommonBoundActionBar::SetDisplayOwningPlayerActionsOnly(bool bShouldOnlyDisplayOwningPlayerActions)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonBoundActionBar", "SetDisplayOwningPlayerActionsOnly");

	Params::CommonBoundActionBar_SetDisplayOwningPlayerActionsOnly Parms{};

	Parms.bShouldOnlyDisplayOwningPlayerActions = bShouldOnlyDisplayOwningPlayerActions;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UCommonBoundActionButton::OnUpdateInputAction()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonBoundActionButton", "OnUpdateInputAction");

	UObject::ProcessEvent(Func, nullptr);
}

class UCommonActivatableWidget* UCommonActivatableWidgetContainerBase::BP_AddWidget(TSubclassOf<class UCommonActivatableWidget> ActivatableWidgetClass)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonActivatableWidgetContainerBase", "BP_AddWidget");

	Params::CommonActivatableWidgetContainerBase_BP_AddWidget Parms{};

	Parms.ActivatableWidgetClass = ActivatableWidgetClass;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

void UCommonActivatableWidgetContainerBase::ClearWidgets()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonActivatableWidgetContainerBase", "ClearWidgets");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

void UCommonActivatableWidgetContainerBase::RemoveWidget(class UCommonActivatableWidget* WidgetToRemove)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonActivatableWidgetContainerBase", "RemoveWidget");

	Params::CommonActivatableWidgetContainerBase_RemoveWidget Parms{};

	Parms.WidgetToRemove = WidgetToRemove;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

void UCommonActivatableWidgetContainerBase::SetTransitionDuration(float Duration)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonActivatableWidgetContainerBase", "SetTransitionDuration");

	Params::CommonActivatableWidgetContainerBase_SetTransitionDuration Parms{};

	Parms.Duration = Duration;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

class UCommonActivatableWidget* UCommonActivatableWidgetContainerBase::GetActiveWidget() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonActivatableWidgetContainerBase", "GetActiveWidget");

	Params::CommonActivatableWidgetContainerBase_GetActiveWidget Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

float UCommonActivatableWidgetContainerBase::GetTransitionDuration() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonActivatableWidgetContainerBase", "GetTransitionDuration");

	Params::CommonActivatableWidgetContainerBase_GetTransitionDuration Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

}
